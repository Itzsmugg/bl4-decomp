// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 140cf800a FUN_140cf800a body=53 status=ok
// SIG undefined FUN_140cf800a(void)

void FUN_140cf800a(longlong *param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) | 1;
    FUN_140cf80ce();
    (**(code **)(*param_1 + 0x18))(param_1);
    *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) & 0xfb;
  }
  return;
}



// FUNCTION 140cf8040 FUN_140cf8040 body=66 status=ok
// SIG undefined FUN_140cf8040(void)

void FUN_140cf8040(longlong param_1)

{
  if ((*(longlong *)(param_1 + 0x18) != 0) && (*(longlong **)(param_1 + 0x20) != (longlong *)0x0)) {
    (**(code **)(**(longlong **)(param_1 + 0x20) + 0x78))();
    if ((*(longlong *)(param_1 + 0x18) != 0) && (*(longlong **)(param_1 + 0x20) != (longlong *)0x0))
    {
      (**(code **)(**(longlong **)(param_1 + 0x20) + 0x58))();
    }
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}



// FUNCTION 140cf8082 FUN_140cf8082 body=75 status=ok
// SIG undefined FUN_140cf8082(void)

void FUN_140cf8082(longlong param_1)

{
  longlong lVar1;
  
  FUN_140cf857e();
  if ((*(longlong *)(param_1 + 0x178) != 0) && (*(longlong **)(param_1 + 0x180) != (longlong *)0x0))
  {
    lVar1 = (**(code **)(**(longlong **)(param_1 + 0x180) + 0x20))();
    if (lVar1 != 0) {
      FUN_140457ffc(lVar1 + 0xf8,param_1);
      return;
    }
  }
  return;
}



// FUNCTION 140cf80ce FUN_140cf80ce body=115 status=ok
// SIG undefined FUN_140cf80ce(void)

void FUN_140cf80ce(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = *(longlong *)(param_1 + 0x28);
  iVar1 = *(int *)(param_1 + 0x30);
  uVar2 = 0;
  if ((longlong)iVar1 != 0) {
    lVar4 = 0;
    do {
      FUN_140cfbbec(*(undefined8 *)(lVar3 + lVar4));
      lVar4 = lVar4 + 0x10;
    } while ((longlong)iVar1 * 0x10 != lVar4);
    uVar2 = *(undefined4 *)(param_1 + 0x30);
    lVar3 = *(longlong *)(param_1 + 0x28);
  }
  FUN_140cf8141(lVar3,uVar2);
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (*(int *)(param_1 + 0x34) == 0) {
    return;
  }
  FUN_140cfa836(param_1 + 0x28,0);
  return;
}



// FUNCTION 140cf8141 FUN_140cf8141 body=77 status=ok
// SIG undefined FUN_140cf8141(void)

void FUN_140cf8141(longlong param_1,int param_2)

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



// FUNCTION 140cf818e FUN_140cf818e body=126 status=ok
// SIG undefined FUN_140cf818e(void)

void FUN_140cf818e(longlong param_1,char param_2)

{
  if ((*(byte *)(param_1 + 0x470) & 1) != 0) {
    *(byte *)(param_1 + 0x470) = *(byte *)(param_1 + 0x470) & 0xfe;
    FUN_140cf820c(param_1 + 0x450,0);
  }
  if (param_2 == '\0') {
    FUN_140cf8fba(param_1 + 0x270);
    FUN_14095cb81(*(undefined8 *)(param_1 + 0x2f0),*(undefined4 *)(param_1 + 0x2f8));
    *(undefined4 *)(param_1 + 0x2f8) = 0;
    if (*(int *)(param_1 + 0x2fc) != 0) {
      FUN_140cf94b0(param_1 + 0x2f0,0);
      return;
    }
  }
  return;
}



// FUNCTION 140cf820c FUN_140cf820c body=124 status=ok
// SIG undefined FUN_140cf820c(void)

void FUN_140cf820c(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if (param_1[2] != 0) {
    LOCK();
    *(int *)(param_1[3] + 8) = *(int *)(param_1[3] + 8) + -1;
    UNLOCK();
    plVar2 = (longlong *)param_1[3];
    if (*param_1 == 0) {
      lVar3 = 0;
      plVar4 = plVar2;
    }
    else {
      *(undefined8 *)(*param_1 + 8) = 0;
      lVar3 = *param_1;
      plVar4 = (longlong *)param_1[3];
    }
    LOCK();
    plVar1 = (longlong *)*plVar4;
    if (param_1 == plVar1) {
      *plVar4 = lVar3;
    }
    UNLOCK();
    if (param_1 != plVar1) {
      while ((longlong *)param_1[1] == (longlong *)0x0) {
        SwitchToThread();
      }
      lVar3 = *param_1;
      *(longlong *)param_1[1] = lVar3;
      if (lVar3 != 0) {
        *(longlong *)(lVar3 + 8) = param_1[1];
      }
    }
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    LOCK();
    plVar2 = plVar2 + 1;
    *(int *)plVar2 = (int)*plVar2 + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 140cf8288 FUN_140cf8288 body=124 status=ok
// SIG undefined FUN_140cf8288(void)

void FUN_140cf8288(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  if (*(longlong *)(param_1 + 0x38) != 0) {
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar3 = FUN_1447210f0();
      if (lVar3 != 0) {
        puVar1 = (undefined8 *)(param_1 + 0x48);
        if (*(longlong *)(lVar3 + 0x1f0) == 0) {
          puVar4 = (undefined8 *)(lVar3 + 0x458);
        }
        else {
          puVar4 = (undefined8 *)(*(longlong *)(lVar3 + 0x1f0) + 0xf0);
        }
        uVar2 = *puVar4;
        lVar3 = FUN_144a61814(uVar2,puVar1);
        if (lVar3 != 0) {
          FUN_1405a424c(uVar2,*puVar1);
        }
        *puVar1 = 0;
      }
    }
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  return;
}



// FUNCTION 140cf8304 FUN_140cf8304 body=131 status=ok
// SIG undefined FUN_140cf8304(void)

void FUN_140cf8304(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140dfb6b6(param_1,param_2,0,&DAT_14cbc2790,*(undefined4 *)(param_1 + 1));
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  iVar1 = FUN_140dfb418(param_1);
  if (iVar1 != 0) {
    FUN_140dfb6b6(param_1,param_2,0,&DAT_14cbc2798,iVar1);
  }
  FUN_14005eae2(param_1 + 2);
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = 0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  return;
}



// FUNCTION 140cf8388 FUN_140cf8388 body=168 status=ok
// SIG undefined FUN_140cf8388(void)

undefined8 FUN_140cf8388(void)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar5 = FUN_1447210f0();
  FUN_140cf8e82(&local_28,uVar5);
  if (local_20 != (longlong *)0x0) {
    iVar4 = (int)local_20[1];
    do {
      if (iVar4 == 0) {
        plVar6 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar3 = (int)local_20[1];
      bVar7 = iVar4 == iVar3;
      if (bVar7) {
        *(int *)(local_20 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
      plVar6 = local_20;
    } while (!bVar7);
    LOCK();
    piVar1 = (int *)((longlong)local_20 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_20 + 0x10))();
    }
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar6 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
      goto LAB_140cf83e7;
    }
  }
  local_28 = 0;
LAB_140cf83e7:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return local_28;
}



// FUNCTION 140cf8432 FUN_140cf8432 body=331 status=ok
// SIG undefined FUN_140cf8432(void)

void FUN_140cf8432(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 auStack_48 [32];
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((*(byte *)(param_1 + 0x58) & 2) != 0) && (lVar4 = *(longlong *)(param_1 + 0x48), lVar4 != 0))
  {
    uVar3 = FUN_144a7b040();
    plVar1 = (longlong *)FUN_144718840(lVar4,uVar3);
    if (plVar1 != (longlong *)0x0) {
      lVar4 = (**(code **)(*plVar1 + 0x20))(plVar1);
      if (lVar4 != 0) {
        FUN_140457ffc(lVar4 + 400,param_1);
      }
    }
    lVar4 = *(longlong *)(param_1 + 0x48);
    if (lVar4 != 0) {
      lVar2 = FUN_144a2f878();
      if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
           ) == lVar2 + 0x30)) {
        FUN_14579832e(lVar4 + 0x7d90,local_28,param_1);
      }
    }
  }
  if (*(longlong *)(param_1 + 0x68) != 0) {
    puVar5 = (undefined8 *)(param_1 + 0x68);
    uVar3 = FUN_1401b4c98(*(undefined8 *)(param_1 + 0x48));
    lVar4 = FUN_144a61814(uVar3,puVar5);
    if (lVar4 != 0) {
      FUN_1405a424c(uVar3,*puVar5);
    }
    *puVar5 = 0;
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    puVar5 = (undefined8 *)(param_1 + 0x70);
    uVar3 = FUN_1401b4c98(*(undefined8 *)(param_1 + 0x48));
    lVar4 = FUN_144a61814(uVar3,puVar5);
    if (lVar4 != 0) {
      FUN_1405a424c(uVar3,*puVar5);
    }
    *puVar5 = 0;
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140cf857e FUN_140cf857e body=192 status=ok
// SIG undefined FUN_140cf857e(void)

void FUN_140cf857e(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  uint uVar4;
  longlong lVar5;
  
  if ((*(longlong *)(param_1 + 0x1b0) != 0) && (*(longlong *)(param_1 + 0x148) != 0)) {
    lVar2 = FUN_1447210f0();
    if (lVar2 != 0) {
      if (*(longlong *)(lVar2 + 0x1f0) == 0) {
        plVar3 = (longlong *)(lVar2 + 0x458);
      }
      else {
        plVar3 = (longlong *)(*(longlong *)(lVar2 + 0x1f0) + 0xf0);
      }
      lVar2 = *(longlong *)(param_1 + 0x1b0);
      if (lVar2 != 0) {
        lVar1 = *plVar3;
        uVar4 = (uint)lVar2;
        if ((int)(uVar4 & 0xffffff) < *(int *)(lVar1 + 0x10)) {
          lVar5 = lVar1 + 0x18;
          if (*(longlong *)(lVar1 + 0x28) != 0) {
            lVar5 = *(longlong *)(lVar1 + 0x28);
          }
          if ((*(uint *)(lVar5 + (ulonglong)((uVar4 & 0xffffff) >> 5) * 4) >> (uVar4 & 0x1f) & 1) !=
              0) {
            lVar1 = *(longlong *)(lVar1 + 8);
            lVar5 = (ulonglong)(uVar4 & 0xffffff) * 0x70;
            if (((lVar1 + lVar5 != 0) && (*(longlong *)(lVar1 + 0x60 + lVar5) == lVar2)) &&
               (*(char *)(lVar1 + 1 + lVar5) != '\x04')) {
              FUN_1405a424c();
            }
          }
        }
      }
      *(undefined8 *)(param_1 + 0x1b0) = 0;
    }
  }
  return;
}



// FUNCTION 140cf863e FUN_140cf863e body=171 status=ok
// SIG undefined FUN_140cf863e(void)

void FUN_140cf863e(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 *puVar6;
  
  if (param_1[3] != 0) {
    FUN_1440c1b36();
    param_1[3] = 0;
    plVar3 = (longlong *)param_1[4];
    if (plVar3 != (longlong *)0x0) {
      param_1[4] = 0;
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
    lVar4 = (**(code **)(*param_1 + 8))(param_1);
    if (lVar4 != 0) {
      lVar5 = FUN_144a6c4d8();
      if (((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
          (*(longlong *)
            (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
            (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30)) &&
         (*(char *)(lVar4 + 0x178) == '\x03')) {
        puVar6 = (undefined1 *)(**(code **)(*param_1 + 0x18))(param_1);
        puVar6[2] = puVar6[2] + '\x01';
        *puVar6 = 0;
        FUN_148cdf044(puVar6);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140cf86ea FUN_140cf86ea body=185 status=ok
// SIG undefined FUN_140cf86ea(void)

void FUN_140cf86ea(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_1 + 0x150);
  if (lVar4 != 0) {
    if ((longlong)*(int *)(param_1 + 0xa8) != 0) {
      lVar4 = (longlong)*(int *)(param_1 + 0xa8) * 0x170;
      plVar3 = (longlong *)(*(longlong *)(param_1 + 0xa0) + 0x58);
      do {
        FUN_140e7ecae(param_1,plVar3 + -0xb);
        if (*plVar3 != 0) {
          uVar1 = FUN_1401b4c98(*(undefined8 *)(param_1 + 0x150));
          lVar2 = FUN_144a61814(uVar1,plVar3);
          if (lVar2 != 0) {
            FUN_1405a424c(uVar1,*plVar3);
          }
          *plVar3 = 0;
        }
        plVar3 = plVar3 + 0x2e;
        lVar4 = lVar4 + -0x170;
      } while (lVar4 != 0);
      lVar4 = *(longlong *)(param_1 + 0x150);
    }
    if (*(char *)(lVar4 + 0x178) == '\x03') {
      FUN_140cf87a4(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 140cf87a4 FUN_140cf87a4 body=139 status=ok
// SIG undefined FUN_140cf87a4(void)

void FUN_140cf87a4(longlong param_1,char param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((longlong)*(int *)(param_1 + 0xa8) != 0) {
    lVar2 = *(longlong *)(param_1 + 0xa0);
    lVar3 = (longlong)*(int *)(param_1 + 0xa8) * 0x170;
    do {
      FUN_140e7ecae(param_1,lVar2);
      *(undefined8 *)(lVar2 + 0x28) = 0;
      *(undefined8 *)(lVar2 + 0x30) = 0;
      plVar1 = *(longlong **)(lVar2 + 0x20);
      if (plVar1 != (longlong *)0x0) {
        if ((param_2 != '\0') && ((*(uint *)(plVar1 + 1) >> 0x1e & 1) == 0)) {
          (**(code **)(*plVar1 + 0x5c8))(plVar1,0);
        }
        *(undefined8 *)(lVar2 + 0x20) = 0;
      }
      lVar2 = lVar2 + 0x170;
      lVar3 = lVar3 + -0x170;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 140cf8830 FUN_140cf8830 body=272 status=ok
// SIG undefined FUN_140cf8830(void)

void FUN_140cf8830(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_1 + 0x4dd0) == 0) {
    plVar3 = (longlong *)0x0;
  }
  else {
    plVar3 = *(longlong **)(param_1 + 0x4dd8);
  }
  FUN_140cf8954(param_1 + 0x4d88);
  FUN_140cf8c27(param_1 + -0x3b48,0);
  plVar2 = (longlong *)FUN_140cf8aa6(param_1 + -0x3b48);
  if (plVar2 != (longlong *)0x0) {
    cVar1 = (**(code **)(*plVar2 + 0x6c8))(plVar2);
    if (cVar1 != '\0') {
      if ((char)plVar2[0x430] == '\x01') {
        FUN_14023c33c(plVar2 + 0x30e);
        *(undefined1 *)(plVar2 + 0x430) = 0;
      }
      (**(code **)(plVar2[0x1b5] + 0x58))(plVar2 + 0x1b5,plVar2 + 0x1ec);
    }
  }
  if (plVar3 == (longlong *)0x0) {
    if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  local_28 = (**(code **)(*plVar3 + 0x10))(plVar3);
  FUN_1447cd2ec(param_1 + 0x4d38);
  (**(code **)(*plVar3 + 0x10))(plVar3);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
}



// FUNCTION 140cf8954 FUN_140cf8954 body=163 status=ok
// SIG undefined FUN_140cf8954(void)

void FUN_140cf8954(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  
  if ((*(longlong *)(param_1 + 0x48) != 0) && (*(longlong **)(param_1 + 0x50) != (longlong *)0x0)) {
    plVar1 = (longlong *)(param_1 + 0x48);
    lVar2 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0x20))();
    *(undefined8 *)(lVar2 + 0x18) = 0;
    *(undefined8 *)(lVar2 + 0x20) = 0;
    if (*plVar1 == 0) {
      plVar3 = (longlong *)0x0;
    }
    else {
      plVar3 = *(longlong **)(param_1 + 0x50);
    }
    if (*(longlong *)(param_1 + 0x18) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined8 *)(param_1 + 0x20);
    }
    (**(code **)(*plVar3 + 0x48))(0,uVar4);
    if ((*plVar1 != 0) && (*(longlong *)(param_1 + 0x50) != 0)) {
      *plVar1 = 0;
      *(undefined8 *)(param_1 + 0x50) = 0;
    }
    FUN_145965236(param_1,0);
  }
  FUN_140cf9190(param_1,0);
  *(undefined2 *)(param_1 + 0x30) = 5;
  if ((*(longlong *)(param_1 + 0x18) != 0) && (*(longlong **)(param_1 + 0x20) != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000140cf898d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x20) + 0x78))();
    return;
  }
  return;
}



// FUNCTION 140cf8aa6 FUN_140cf8aa6 body=384 status=ok
// SIG undefined FUN_140cf8aa6(void)

longlong FUN_140cf8aa6(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
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
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = *(longlong *)(param_1 + 0x3c0);
  if (lVar1 != 0) {
    if (DAT_14cbadd90 == 0) {
      local_40 = &local_20;
      local_20 = FUN_141030f22;
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
    if ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) goto LAB_140cf8aef;
  }
  lVar1 = (**(code **)(*(longlong *)(param_1 + 0x3c20) + 0x10))(param_1 + 0x3c20);
  if ((lVar1 != 0) &&
     ((*(longlong *)(lVar1 + 0x20) != 0 &&
      (lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x20) + 0x3c0), lVar1 != 0)))) {
    lVar2 = FUN_144a5dd5e();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) goto LAB_140cf8aef;
  }
  lVar1 = 0;
LAB_140cf8aef:
  if ((local_18 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar1;
}



// FUNCTION 140cf8c27 FUN_140cf8c27 body=602 status=ok
// SIG undefined FUN_140cf8c27(void)

void FUN_140cf8c27(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined1 auStack_98 [40];
  undefined1 local_70 [40];
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1 != (longlong *)0x0) {
    if ((int)param_2 != 2) {
      uVar3 = FUN_1407ca880();
      plVar4 = (longlong *)(**(code **)(*param_1 + 0x288))(param_1,uVar3);
      if (plVar4 != (longlong *)0x0) {
        FUN_1407ca880();
        plVar5 = (longlong *)FUN_144718840(plVar4);
        if ((plVar4 != plVar5) && (plVar5 != (longlong *)0x0)) {
          plVar4 = param_1 + 0x767;
          lVar6 = (**(code **)(param_1[0x767] + 0x18))(plVar4);
          cVar2 = *(char *)(lVar6 + 0x2d8);
          if (cVar2 != '\0') {
            lVar6 = (**(code **)(*plVar5 + 0x50))(plVar5);
            if ((longlong)*(int *)(lVar6 + 0x48) != 0) {
              lVar9 = 0;
              do {
                lVar1 = *(longlong *)(*(longlong *)(lVar6 + 0x40) + lVar9);
                if ((lVar1 != 0) && (*(char *)(lVar1 + 0x40) == cVar2)) {
                  uVar3 = (**(code **)(*plVar4 + 0x18))(plVar4);
                  uVar3 = FUN_14579826a(uVar3);
                  cVar2 = FUN_144a7e912(uVar3);
                  if (cVar2 == '\0') {
LAB_140cf8d7e:
                    lVar9 = 0;
                  }
                  else {
                    plVar4 = (longlong *)FUN_144a1306c(uVar3);
                    plVar4 = (longlong *)*plVar4;
                    if (plVar4 == (longlong *)0x0) goto LAB_140cf8d7e;
                    uVar7 = FUN_140437bea();
                    lVar6 = (**(code **)(*plVar4 + 0x288))(plVar4,uVar7);
                    if (lVar6 == 0) goto LAB_140cf8d7e;
                    uVar7 = FUN_140437bea();
                    lVar9 = FUN_144718840(lVar6,uVar7);
                    if (lVar6 == lVar9) goto LAB_140cf8d7e;
                  }
                  local_70[0] = 0;
                  local_48 = 0;
                  FUN_14579829a(local_70,lVar9);
                  plVar4 = (longlong *)FUN_1447262c2(local_70);
                  if (plVar4 == (longlong *)0x0) {
LAB_140cf8da6:
                    FUN_144a5ac3a(local_70);
                  }
                  else {
                    uVar7 = FUN_140437b04();
                    plVar4 = (longlong *)(**(code **)(*plVar4 + 0x288))(plVar4,uVar7);
                    if (plVar4 == (longlong *)0x0) goto LAB_140cf8da6;
                    uVar7 = FUN_140437b04();
                    plVar8 = (longlong *)FUN_144718840(plVar4,uVar7);
                    if (plVar4 == plVar8) goto LAB_140cf8da6;
                    FUN_144a5ac3a(local_70);
                    if (plVar8 != (longlong *)0x0) {
                      (**(code **)(*plVar8 + 0x48))(plVar8,0,uVar3);
                    }
                  }
                  (**(code **)(*plVar5 + 0x48))(plVar5);
                  break;
                }
                lVar9 = lVar9 + 0x10;
              } while ((longlong)*(int *)(lVar6 + 0x48) * 0x10 != lVar9);
            }
          }
          if ((int)param_2 != 1) {
            cVar2 = (char)param_1[0x112a];
            if (cVar2 != '\0') {
              lVar6 = (**(code **)(*plVar5 + 0x50))(plVar5);
              if ((longlong)*(int *)(lVar6 + 0x48) != 0) {
                lVar9 = 0;
                do {
                  lVar1 = *(longlong *)(*(longlong *)(lVar6 + 0x40) + lVar9);
                  if ((lVar1 != 0) && (*(char *)(lVar1 + 0x40) == cVar2)) {
                    (**(code **)(*plVar5 + 0x48))
                              (plVar5,CONCAT71((int7)((ulonglong)param_2 >> 8),cVar2) & 0xffffffff);
                    break;
                  }
                  lVar9 = lVar9 + 0x10;
                } while ((longlong)*(int *)(lVar6 + 0x48) * 0x10 != lVar9);
              }
            }
          }
        }
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140cf8e82 FUN_140cf8e82 body=310 status=ok
// SIG undefined FUN_140cf8e82(void)

longlong * FUN_140cf8e82(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  param_1[1] = 0;
  uVar4 = DAT_14cbc2050;
  if (param_2 != 0) {
    if (DAT_14c9a7d10 == (undefined8 *)0x0) {
      DAT_14c9a7d10 = (undefined8 *)FUN_14001cc68(0x20,0x10);
      *DAT_14c9a7d10 = 0;
      DAT_14c9a7d10[1] = 0;
      DAT_14c9a7d10[2] = 0;
      DAT_14c9a7d10[3] = 0;
    }
    FUN_14005915a(DAT_14c9a7d10,&local_38,uVar4,param_2);
    plVar1 = local_30;
    if (local_38 != 0) {
      if (local_30 == (longlong *)0x0) {
        *param_1 = local_38;
      }
      else {
        LOCK();
        *(int *)(local_30 + 1) = (int)local_30[1] + 1;
        UNLOCK();
        *param_1 = local_38;
        if ((longlong *)param_1[1] != local_30) {
          LOCK();
          *(int *)((longlong)local_30 + 0xc) = *(int *)((longlong)local_30 + 0xc) + 1;
          UNLOCK();
          plVar3 = (longlong *)param_1[1];
          if (plVar3 != (longlong *)0x0) {
            LOCK();
            piVar2 = (int *)((longlong)plVar3 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar3 + 0x10))();
            }
          }
          param_1[1] = (longlong)plVar1;
        }
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
    }
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar2 = (int *)((longlong)local_30 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_30 + 0x10))(local_30);
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140cf8fba FUN_140cf8fba body=469 status=ok
// SIG undefined FUN_140cf8fba(void)

void FUN_140cf8fba(longlong param_1)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  uint uVar13;
  
  FUN_14095cb81(*(undefined8 *)(param_1 + 0x70),*(undefined4 *)(param_1 + 0x78));
  *(undefined4 *)(param_1 + 0x78) = 0;
  if (*(int *)(param_1 + 0x7c) != 0) {
    FUN_140cf94b0(param_1 + 0x70,0);
  }
  iVar2 = *(int *)(param_1 + 0x30);
  if (iVar2 == 0) {
    uVar12 = 1;
    uVar8 = 0;
    iVar3 = 0;
    iVar9 = 0;
  }
  else {
    puVar7 = *(uint **)(param_1 + 0x28);
    if (*(uint **)(param_1 + 0x28) == (uint *)0x0) {
      puVar7 = (uint *)(param_1 + 0x18);
    }
    uVar13 = *puVar7;
    if (uVar13 == 0) {
      iVar3 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar3 = iVar2 + -1;
      }
      uVar8 = 0;
      uVar12 = (ulonglong)(uint)(iVar3 >> 5);
      if (iVar3 >> 5 < 1) {
        uVar12 = uVar8;
      }
      iVar9 = 0;
      do {
        if (uVar12 == uVar8) {
          return;
        }
        iVar9 = iVar9 + 0x20;
        uVar13 = puVar7[uVar8 + 1];
        uVar8 = uVar8 + 1;
      } while (uVar13 == 0);
    }
    else {
      uVar8 = 0;
      iVar9 = 0;
    }
    uVar12 = (ulonglong)(-uVar13 & uVar13);
    uVar1 = uVar12 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    iVar3 = (iVar9 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar3) {
      iVar3 = iVar2;
    }
  }
  if (iVar3 < iVar2) {
    uVar13 = 0xffffffff;
    do {
      lVar10 = *(longlong *)(param_1 + 8);
      lVar11 = (longlong)iVar3 * 0x80;
      FUN_14095cb81(*(undefined8 *)(lVar10 + 0x58 + lVar11),*(undefined4 *)(lVar10 + 0x60 + lVar11))
      ;
      *(undefined4 *)(lVar10 + 0x60 + lVar11) = 0;
      if (*(int *)(lVar10 + 100 + lVar11) != 0) {
        FUN_140cf94b0(lVar10 + lVar11 + 0x58,0);
      }
      uVar13 = uVar13 & ~(uint)uVar12;
      puVar7 = *(uint **)(param_1 + 0x28);
      if (*(uint **)(param_1 + 0x28) == (uint *)0x0) {
        puVar7 = (uint *)(param_1 + 0x18);
      }
      iVar2 = *(int *)(param_1 + 0x30);
      iVar3 = (int)uVar8;
      lVar10 = (longlong)iVar3;
      uVar4 = puVar7[lVar10] & uVar13;
      if (uVar4 == 0) {
        iVar5 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar5 = iVar2 + -1;
        }
        iVar5 = iVar5 >> 5;
        iVar6 = iVar5;
        if (iVar5 < iVar3) {
          iVar6 = iVar3;
        }
        if (iVar5 <= iVar3) {
          return;
        }
        lVar11 = 0;
        while( true ) {
          iVar9 = iVar9 + 0x20;
          uVar4 = puVar7[lVar10 + lVar11 + 1];
          if (uVar4 != 0) break;
          lVar11 = lVar11 + 1;
          if (iVar6 - lVar10 == lVar11) {
            return;
          }
        }
        uVar8 = (ulonglong)(iVar3 + (int)lVar11 + 1);
        uVar13 = 0xffffffff;
      }
      uVar12 = (ulonglong)(-uVar4 & uVar4);
      uVar1 = uVar12 * 2 + 1;
      lVar10 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar3 = (iVar9 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
    } while (iVar3 < iVar2);
  }
  return;
}



// FUNCTION 140cf9190 FUN_140cf9190 body=773 status=ok
// SIG undefined FUN_140cf9190(void)

void FUN_140cf9190(longlong param_1,char param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_a8 [32];
  uint local_88;
  uint local_80;
  undefined4 local_78;
  undefined8 local_70;
  wchar_t *local_68;
  code *local_60;
  undefined1 *local_58;
  code **local_50;
  code *local_48;
  code *local_40;
  code *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar3 = *(longlong **)(param_1 + 0x28);
  if (plVar3 != (longlong *)0x0) {
    if (DAT_14cb94538 == 0) {
      local_50 = &local_38;
      local_38 = FUN_1449e2820;
      local_40 = FUN_14081d0ea;
      local_48 = FUN_1427b09ee;
      local_58 = &LAB_148a18249;
      local_60 = FUN_14657713c;
      local_68 = L"Engine";
      local_70 = 0;
      local_78 = 0x10004001;
      local_80 = 8;
      local_88 = 0x28;
      FUN_14081cfa3(L"/Script/GbxWeapon",L"WeaponUserInterface",&DAT_14cb94538,&DAT_148a18248);
    }
    plVar3 = (longlong *)(**(code **)(*plVar3 + 0x288))(plVar3,DAT_14cb94538);
    if (plVar3 != (longlong *)0x0) {
      if (DAT_14cb94538 == 0) {
        local_50 = &local_38;
        local_38 = FUN_1449e2820;
        local_40 = FUN_14081d0ea;
        local_48 = FUN_1427b09ee;
        local_58 = &LAB_148a18249;
        local_60 = FUN_14657713c;
        local_68 = L"Engine";
        local_70 = 0;
        local_78 = 0x10004001;
        local_80 = 8;
        local_88 = 0x28;
        FUN_14081cfa3(L"/Script/GbxWeapon",L"WeaponUserInterface",&DAT_14cb94538,&DAT_148a18248);
      }
      plVar4 = (longlong *)FUN_144718840(plVar3,DAT_14cb94538);
      if (plVar3 != plVar4) goto LAB_140cf920b;
    }
  }
  plVar4 = (longlong *)0x0;
LAB_140cf920b:
  plVar3 = *(longlong **)(param_1 + 0x28);
  if (plVar3 != (longlong *)0x0) {
    uVar5 = FUN_140bc1dde();
    lVar6 = (**(code **)(*plVar3 + 0x288))(plVar3,uVar5);
    if (lVar6 != 0) {
      uVar5 = FUN_140bc1dde();
      lVar7 = FUN_144718840(lVar6,uVar5);
      if (((lVar6 != lVar7) && (plVar4 != (longlong *)0x0)) && (lVar7 != 0)) {
        uVar5 = (**(code **)(*plVar4 + 0x18))(plVar4);
        if (param_2 == '\0') {
          FUN_140bc1ec4(uVar5,DAT_14cbc5638,0xff,0);
        }
        else {
          if (*(longlong *)(param_1 + 0x28) != 0) {
            lVar7 = FUN_144a2f878();
            lVar6 = *(longlong *)(param_1 + 0x28);
            if (((lVar6 != 0) && (lVar7 != 0)) && (lVar2 = *(longlong *)(lVar6 + 0x10), lVar2 != 0))
            {
              iVar1 = *(int *)(lVar7 + 0x38);
              if ((iVar1 <= *(int *)(lVar2 + 0x38)) &&
                 (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) == lVar7 + 0x30))
              {
                (**(code **)(*(longlong *)(lVar6 + 0x3b60) + 0x70))
                          (lVar6 + 0x3b60,
                           CONCAT71((int7)((ulonglong)*(longlong *)(lVar2 + 0x30) >> 8),1),
                           CONCAT71((int7)(int3)((uint)iVar1 >> 8),1));
              }
            }
          }
          local_80 = local_80 & 0xffffff00;
          local_88 = local_88 & 0xffffff00;
          FUN_140d78b8a(uVar5,DAT_14cbc5638,2,1);
        }
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_a8);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140cf94b0 FUN_140cf94b0 body=96 status=ok
// SIG undefined FUN_140cf94b0(void)

void FUN_140cf94b0(longlong param_1,int param_2)

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



// FUNCTION 140cf9510 FUN_140cf9510 body=299 status=ok
// SIG undefined FUN_140cf9510(void)

void FUN_140cf9510(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar1 = (longlong *)(param_1 + 0x30);
  local_48 = param_2;
  iVar3 = FUN_1406fc600(plVar1,(uint)((ulonglong)param_2 >> 0x20) ^ (uint)param_2);
  if (iVar3 != -1) {
    lVar4 = *plVar1 + (longlong)iVar3 * 0x260;
    if ((lVar4 != 0) && (lVar5 = *plVar1 + (longlong)iVar3 * 0x260 + 0x10, lVar5 != 0)) {
      while (-1 < *(int *)(lVar4 + 0x1ac)) {
        if ((*(int *)(lVar4 + 0x30) <= *(int *)(lVar4 + 0x1ac)) ||
           (cVar2 = FUN_1411f37f8(param_1,lVar5), cVar2 == '\0')) break;
      }
      iVar3 = *(int *)(lVar4 + 0x20);
      if (0 < iVar3) {
        uVar6 = 0;
LAB_140cf95c6:
        do {
          if (*(int *)(*(longlong *)(lVar4 + 0x18) + 0x18 + uVar6 * 0x28) != 0) {
            cVar2 = FUN_140cfe342(param_1,lVar5,uVar6 & 0xffffffff);
            if (cVar2 != '\0') goto LAB_140cf95c6;
          }
          uVar6 = uVar6 + 1;
          iVar3 = *(int *)(lVar4 + 0x20);
        } while ((longlong)uVar6 < (longlong)iVar3);
      }
      if (((iVar3 != 0) && (*(int *)(lVar4 + 0x220) != 0)) &&
         (*(longlong **)(lVar4 + 0x218) != (longlong *)0x0)) {
        (**(code **)(**(longlong **)(lVar4 + 0x218) + 0x60))();
      }
      FUN_140cfe13c(plVar1,param_2);
    }
  }
  FUN_1406fc6c4(param_1);
  if ((local_40 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140cf963c FUN_140cf963c body=330 status=ok
// SIG undefined FUN_140cf963c(void)

void FUN_140cf963c(longlong param_1)

{
  char cVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    cVar1 = FUN_140cfa896();
    if (cVar1 != '\0') {
      FUN_145798516(param_1);
    }
    FUN_140bbb256(param_1,0);
    if (*(int *)(param_1 + 0x158) != *(int *)(param_1 + 0x184)) {
      FUN_140cfae5c(param_1 + 0x150);
      FUN_140cfb942(param_1 + 0x150);
    }
    FUN_140cfabf6(param_1);
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined8 *)(param_1 + 0x50) = 0;
    local_48 = 0;
    uStack_40 = 0;
    cVar1 = FUN_14493c216(&local_48,0);
    if (cVar1 == '\0') {
      uStack_40 = 0;
    }
    *(undefined4 *)(param_1 + 0x58) = (undefined4)local_48;
    *(undefined4 *)(param_1 + 0x5c) = local_48._4_4_;
    *(undefined4 *)(param_1 + 0x60) = (undefined4)uStack_40;
    *(undefined4 *)(param_1 + 100) = uStack_40._4_4_;
    local_48 = 0;
    uStack_40 = 0;
    cVar1 = FUN_140076fba(&local_48,0);
    if (cVar1 == '\0') {
      uStack_40 = 0;
    }
    *(undefined8 *)(param_1 + 0x68) = local_48;
    *(undefined8 *)(param_1 + 0x70) = uStack_40;
    local_48 = 0;
    uStack_40 = 0;
    cVar1 = FUN_14493c216(&local_48,0);
    if (cVar1 == '\0') {
      uStack_40 = 0;
    }
    *(undefined8 *)(param_1 + 0x78) = local_48;
    *(undefined8 *)(param_1 + 0x80) = uStack_40;
    *(undefined8 *)(param_1 + 0x144) = 0;
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140cf9788 FUN_140cf9788 body=333 status=ok
// SIG undefined FUN_140cf9788(void)

void FUN_140cf9788(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  
  if (((*(int *)(param_1 + 0x5c) != 0) && (uVar4 = *(uint *)(param_1 + 0x58), -1 < (int)uVar4)) &&
     ((int)uVar4 < DAT_14c9647dc)) {
    plVar5 = (longlong *)
             ((ulonglong)((uVar4 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8));
    if (((plVar5 != (longlong *)0x0) && ((int)plVar5[2] == *(int *)(param_1 + 0x5c))) &&
       (((*(uint *)(plVar5 + 1) & 0x10200000) == 0 && (lVar3 = *plVar5, lVar3 != 0)))) {
      lVar2 = FUN_1447210f0(lVar3);
      if (lVar2 != 0) {
        if (*(longlong *)(lVar2 + 0x1f0) == 0) {
          plVar5 = (longlong *)(lVar2 + 0x458);
        }
        else {
          plVar5 = (longlong *)(*(longlong *)(lVar2 + 0x1f0) + 0xf0);
        }
        lVar2 = *(longlong *)(param_1 + 0x98);
        if (lVar2 != 0) {
          lVar1 = *plVar5;
          uVar4 = (uint)lVar2;
          if ((int)(uVar4 & 0xffffff) < *(int *)(lVar1 + 0x10)) {
            lVar6 = lVar1 + 0x18;
            if (*(longlong *)(lVar1 + 0x28) != 0) {
              lVar6 = *(longlong *)(lVar1 + 0x28);
            }
            if ((*(uint *)(lVar6 + (ulonglong)((uVar4 & 0xffffff) >> 5) * 4) >> (uVar4 & 0x1f) & 1)
                != 0) {
              lVar1 = *(longlong *)(lVar1 + 8);
              lVar6 = (ulonglong)(uVar4 & 0xffffff) * 0x70;
              if (((lVar1 + lVar6 != 0) && (*(longlong *)(lVar1 + 0x60 + lVar6) == lVar2)) &&
                 (*(char *)(lVar1 + 1 + lVar6) != '\x04')) {
                FUN_1405a424c();
              }
            }
          }
        }
        *(undefined8 *)(param_1 + 0x98) = 0;
      }
      lVar3 = (**(code **)(*(longlong *)(lVar3 + 0x3c20) + 0x18))(lVar3 + 0x3c20);
      if ((lVar3 != 0) && (*(longlong *)(param_1 + 0xa0) != 0)) {
        FUN_14480f766(lVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140cf98d6 FUN_140cf98d6 body=339 status=ok
// SIG undefined FUN_140cf98d6(void)

void FUN_140cf98d6(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  char cVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  
  puVar1 = (uint *)(param_1 + 0xf8);
  plVar4 = *(longlong **)(param_1 + 0x100);
  if ((((plVar4 != (longlong *)0x0) && (*(int *)(param_1 + 0xfc) != 0)) &&
      (uVar2 = *puVar1, -1 < (int)uVar2)) && ((int)uVar2 < DAT_14c9647dc)) {
    lVar7 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if (((lVar7 != 0) && (*(int *)(lVar7 + 0x10) == *(int *)(param_1 + 0xfc))) &&
       ((*(uint *)(lVar7 + 8) & 0x10200000) == 0)) {
      if (*(code **)(*plVar4 + 0x10) == (code *)&LAB_1447a1f2e) {
        plVar4 = plVar4 + 0xd9;
      }
      else {
        plVar4 = (longlong *)(**(code **)(*plVar4 + 0x10))();
      }
      cVar3 = FUN_14486eb0e(plVar4,puVar1);
      if (cVar3 != '\0') {
        uVar5 = thunk_FUN_14008e0ae(puVar1);
        lVar6 = FUN_14008e0a4(uVar5);
        lVar7 = param_1 + 0xf0;
        uVar5 = FUN_14479d2ce(lVar7);
        FUN_140457ffc(lVar6 + 0x138,uVar5);
        uVar5 = thunk_FUN_14008e0ae(puVar1);
        lVar6 = FUN_14008e0a4(uVar5);
        uVar5 = FUN_14479d2ce(lVar7);
        FUN_140457ffc(lVar6 + 0x168,uVar5);
        uVar5 = thunk_FUN_14008e0ae(puVar1);
        lVar6 = FUN_14008e0a4(uVar5);
        uVar5 = FUN_14479d2ce(lVar7);
        FUN_140457ffc(lVar6 + 0x180,uVar5);
      }
    }
  }
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  puVar1[0] = 0;
  puVar1[1] = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined1 *)(param_1 + 0x114) = 0xff;
  *(undefined4 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  return;
}



// FUNCTION 140cf9a2a FUN_140cf9a2a body=237 status=ok
// SIG undefined FUN_140cf9a2a(void)

void FUN_140cf9a2a(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong *plVar6;
  
  if ((*(char *)(param_1 + 0x178) == '\x03') && (0 < *(int *)(param_1 + 0x78f0))) {
    lVar5 = 0;
    uVar4 = 0;
    do {
      lVar1 = *(longlong *)(param_1 + 0x78e8);
      FUN_140705884(param_1 + 0x77d8,lVar1 + lVar5);
      *(undefined4 *)(lVar1 + 0xc + lVar5) = 0xffffffff;
      if ((*(longlong *)(lVar1 + 0x20 + lVar5) != 0) &&
         (plVar3 = *(longlong **)(lVar1 + 0x28 + lVar5), plVar3 != (longlong *)0x0)) {
        plVar6 = (longlong *)(lVar1 + lVar5 + 0x20);
        iVar2 = (**(code **)(*plVar3 + 0x20))();
        if (iVar2 != -1) {
          if (*plVar6 == 0) {
            plVar3 = (longlong *)0x0;
          }
          else {
            plVar3 = *(longlong **)(lVar1 + 0x28 + lVar5);
          }
          (**(code **)(*plVar3 + 0x18))(plVar3,param_1,uVar4 & 0xffffffff);
        }
        if ((*plVar6 != 0) &&
           (plVar3 = *(longlong **)(lVar1 + 0x28 + lVar5), plVar3 != (longlong *)0x0)) {
          plVar3 = (longlong *)(**(code **)(*plVar3 + 8))();
          (**(code **)(*plVar3 + 0x5c8))(plVar3,0);
        }
        *plVar6 = 0;
        *(undefined8 *)(lVar1 + lVar5 + 0x28) = 0;
      }
      uVar4 = uVar4 + 1;
      lVar5 = lVar5 + 0x48;
    } while ((longlong)uVar4 < (longlong)*(int *)(param_1 + 0x78f0));
  }
  return;
}



// FUNCTION 140cf9b18 FUN_140cf9b18 body=407 status=ok
// SIG undefined FUN_140cf9b18(void)

void FUN_140cf9b18(longlong param_1,int param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  FUN_140cf9d22();
  plVar1 = *(longlong **)(param_1 + 0x11f8);
  *(undefined8 *)(param_1 + 0x11f8) = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x30))(plVar1,1);
  }
  if (*(char *)(param_1 + 0x178) == '\x03') {
    FUN_1403569b4(param_1 + 0x19d0);
  }
  FUN_140cfa006(param_1 + 0x28b0);
  FUN_140cfa2b4(param_1 + 0x35e0);
  FUN_1406335ea(param_1 + 0x1488,param_2);
  FUN_140e39776(param_1 + 0x1808);
  plVar1 = (longlong *)(**(code **)(*(longlong *)(param_1 + 0x10c8) + 0x20))(param_1 + 0x10c8);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x18))(plVar1);
  }
  FUN_140cfa53a(param_1 + 0x1ef8);
  FUN_1405213ee(param_1 + 0x8f8);
  FUN_140cf9f6a(param_1 + 0x3488);
  uVar2 = FUN_1447210f0(param_1);
  uVar3 = (**(code **)(*(longlong *)(param_1 + 0x1190) + 0x10))(param_1 + 0x1190);
  FUN_140d0d88c(uVar2,uVar3);
  lVar4 = FUN_1447210f0(param_1);
  if (lVar4 != 0) {
    lVar4 = FUN_140115352(lVar4);
    if (lVar4 != 0) {
      lVar5 = (**(code **)(*(longlong *)(param_1 + 0x1188) + 0x10))(param_1 + 0x1188);
      if (lVar5 != 0) {
        FUN_140317e0a(*(undefined8 *)(lVar4 + 0x40),lVar5);
      }
    }
  }
  lVar4 = FUN_1447210f0(param_1);
  if (((param_2 != 3) || (lVar4 == 0)) || ((*(byte *)(lVar4 + 0x155) & 0x20) != 0)) {
    *(undefined1 *)(param_1 + 0x1541) = 1;
    FUN_14067171c(param_1 + 0x1508);
    *(undefined8 *)(param_1 + 0x1508) = 0;
    FUN_14078a7c0(param_1 + 0x1280);
    FUN_140633cb6(param_1 + 0x12f0,1);
  }
  FUN_140cf9cb0(param_1,param_2);
  return;
}



// FUNCTION 140cf9cb0 FUN_140cf9cb0 body=113 status=ok
// SIG undefined FUN_140cf9cb0(void)

void FUN_140cf9cb0(longlong *param_1,int param_2)

{
  if (param_2 != 0) {
    (**(code **)(*param_1 + 0x738))(param_1);
  }
  FUN_1403d8a98(param_1,param_2);
  FUN_140356874(param_1,0);
  FUN_14035cf04(param_1 + 499);
  if (param_1[0x1d6] != 0) {
    FUN_140a19d0e(param_1 + 0x1d4,0);
    param_1[0x1d1] = 0;
    param_1[0x1d2] = 0;
    param_1[0x1d3] = 0;
  }
  return;
}



// FUNCTION 140cf9d22 FUN_140cf9d22 body=135 status=ok
// SIG undefined FUN_140cf9d22(void)

void FUN_140cf9d22(undefined8 param_1)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  undefined1 local_28 [4];
  short local_24 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = FUN_1447210f0();
  if (lVar1 != 0) {
    lVar1 = FUN_1400f6f32(lVar1);
    if ((lVar1 != 0) && (lVar1 = *(longlong *)(lVar1 + 0x68), lVar1 != 0)) {
      FUN_140cf9daa(lVar1,local_24,param_1);
      if (-1 < local_24[0]) {
        FUN_140cfde50(lVar1,local_28,local_24,param_1);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140cf9daa FUN_140cf9daa body=132 status=ok
// SIG undefined FUN_140cf9daa(void)

undefined2 * FUN_140cf9daa(longlong param_1,undefined2 *param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  longlong lVar7;
  
  uVar6 = 0xffff;
  if ((param_3 != 0) && (iVar1 = *(int *)(param_1 + 0x10), (longlong)iVar1 != 0)) {
    lVar2 = *(longlong *)(param_1 + 8);
    lVar7 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar7);
      if ((lVar3 != 0) && (*(short *)(lVar3 + 4) < 0)) {
        cVar4 = FUN_140cf9e2e(lVar3 + 0x2c,param_3);
        if (cVar4 != '\0') {
          uVar6 = *(undefined2 *)(lVar3 + 2);
          uVar5 = *(undefined2 *)(lVar3 + 8);
          goto LAB_140cf9e08;
        }
      }
      lVar7 = lVar7 + 8;
    } while ((longlong)iVar1 * 8 != lVar7);
  }
  uVar5 = 0;
LAB_140cf9e08:
  *param_2 = uVar6;
  param_2[1] = uVar5;
  return param_2;
}



// FUNCTION 140cf9e2e FUN_140cf9e2e body=316 status=ok
// SIG undefined FUN_140cf9e2e(void)

bool FUN_140cf9e2e(uint *param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  bool bVar7;
  
  if (param_2 == 0) {
    uVar4 = 0;
    uVar3 = 0;
  }
  else {
    uVar4 = *(uint *)(param_2 + 0xc);
    if ((int)uVar4 < DAT_14c9647dc) {
      lVar6 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
    }
    else {
      lVar6 = 0;
    }
    uVar3 = *(uint *)(lVar6 + 0x10);
    if (*(uint *)(lVar6 + 0x10) == 0) {
      LOCK();
      iVar2 = DAT_14c964868 + 1;
      UNLOCK();
      uVar5 = DAT_14c964868 + 1;
      bVar7 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar2;
      if (bVar7) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar5);
      }
      LOCK();
      uVar3 = *(uint *)(lVar6 + 0x10);
      bVar7 = uVar3 == 0;
      if (bVar7) {
        *(uint *)(lVar6 + 0x10) = uVar5;
        uVar3 = 0;
      }
      UNLOCK();
      if (bVar7) {
        uVar3 = uVar5;
      }
    }
  }
  uVar5 = *param_1;
  uVar1 = param_1[1];
  bVar7 = true;
  if ((uVar5 != uVar4) || (uVar1 != uVar3)) {
    if ((uVar1 == 0) ||
       (((((int)uVar5 < 0 || (DAT_14c9647dc <= (int)uVar5)) ||
         (lVar6 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8), lVar6 == 0)) ||
        ((*(uint *)(lVar6 + 0x10) != uVar1 || ((*(uint *)(lVar6 + 8) & 0x10200000) != 0)))))) {
      if ((uVar3 != 0) &&
         (((-1 < (int)uVar4 && ((int)uVar4 < DAT_14c9647dc)) &&
          ((lVar6 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8), lVar6 != 0 &&
           (*(uint *)(lVar6 + 0x10) == uVar3)))))) {
        bVar7 = (*(uint *)(lVar6 + 8) & 0x10200000) != 0;
      }
    }
    else {
      bVar7 = false;
    }
  }
  return bVar7;
}



// FUNCTION 140cf9f6a FUN_140cf9f6a body=156 status=ok
// SIG undefined FUN_140cf9f6a(void)

void FUN_140cf9f6a(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  
  lVar1 = param_1 + 0x50;
  cVar2 = FUN_1403ae288(lVar1);
  if (cVar2 == '\0') {
    return;
  }
  if (*(longlong *)(param_1 + 0x110) != 0) {
    lVar3 = FUN_14008e0ae(lVar1);
    if (*(longlong *)(param_1 + 0x110) != 0) {
      FUN_14480f766(lVar3 + 0x168);
    }
    *(undefined8 *)(param_1 + 0x110) = 0;
  }
  if (*(longlong *)(param_1 + 0x118) != 0) {
    lVar3 = FUN_14008e0ae(lVar1);
    if (*(longlong *)(param_1 + 0x118) != 0) {
      FUN_14480f766(lVar3 + 0x180);
    }
    *(undefined8 *)(param_1 + 0x118) = 0;
  }
  FUN_140609c6a(lVar1);
  return;
}



// FUNCTION 140cfa006 FUN_140cfa006 body=178 status=ok
// SIG undefined FUN_140cfa006(void)

void FUN_140cfa006(longlong param_1)

{
  FUN_140d4a888(param_1 + 0x48,0);
  FUN_140cfa3dc(param_1);
  FUN_140cfa184(param_1);
  FUN_140cfa0b8(param_1,0);
  if (*(longlong *)(param_1 + 0x848) != 0) {
    FUN_140457ffc(*(longlong *)(param_1 + 0x848) + 0x1258,param_1);
  }
  if ((((*(longlong *)(param_1 + 0x38) != 0) && (*(longlong **)(param_1 + 0x40) != (longlong *)0x0))
      && (*(longlong *)(param_1 + 0x7a8) != 0)) && (*(char *)(param_1 + 2000) != '\0')) {
    (**(code **)(**(longlong **)(param_1 + 0x40) + 0x20))();
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x7f0) = 0;
  *(undefined8 *)(param_1 + 0x7f8) = 0;
  *(undefined8 *)(param_1 + 0x800) = 0;
  *(undefined8 *)(param_1 + 0x808) = 0;
  *(undefined8 *)(param_1 + 0x810) = 0;
  *(undefined8 *)(param_1 + 0x818) = 0;
  *(undefined8 *)(param_1 + 0x820) = 0;
  *(undefined8 *)(param_1 + 0x828) = 0;
  *(undefined8 *)(param_1 + 0x830) = 0;
  *(undefined8 *)(param_1 + 0x838) = 0;
  *(undefined8 *)(param_1 + 0x840) = 0;
  *(undefined8 *)(param_1 + 0x848) = 0;
  return;
}



// FUNCTION 140cfa0b8 FUN_140cfa0b8 body=203 status=ok
// SIG undefined FUN_140cfa0b8(void)

void FUN_140cfa0b8(longlong param_1,char param_2)

{
  uint uVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_1 + 0x800) != 0) {
    if (param_2 == '\0') {
      FUN_1400bc8c2();
    }
    else {
      FUN_1400bc96c(*(longlong *)(param_1 + 0x800) + 0x11f0,&DAT_14cb78bb8);
    }
  }
  if ((((*(longlong **)(param_1 + 0x810) != (longlong *)0x0) && (*(int *)(param_1 + 0x80c) != 0)) &&
      (uVar1 = *(uint *)(param_1 + 0x808), -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    lVar2 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    if (((lVar2 != 0) && (*(int *)(lVar2 + 0x10) == *(int *)(param_1 + 0x80c))) &&
       ((*(uint *)(lVar2 + 8) & 0x10200000) == 0)) {
      lVar2 = (**(code **)(**(longlong **)(param_1 + 0x810) + 0x20))();
      if (lVar2 != 0) {
        if (param_2 == '\0') {
          FUN_140ba2af2();
          return;
        }
        FUN_140ba2cd0(lVar2,&DAT_14cb78bb8,1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140cfa184 FUN_140cfa184 body=241 status=ok
// SIG undefined FUN_140cfa184(void)

void FUN_140cfa184(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(char *)(param_1 + 0x908) == '\x01') {
    if (*(longlong *)(param_1 + 0x30) == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_1447210f0();
    }
    FUN_140a702f6(&local_30,uVar5);
    if (local_28 != (longlong *)0x0) {
      iVar4 = (int)local_28[1];
      do {
        if (iVar4 == 0) {
          plVar6 = (longlong *)0x0;
          break;
        }
        LOCK();
        iVar3 = (int)local_28[1];
        bVar7 = iVar4 == iVar3;
        if (bVar7) {
          *(int *)(local_28 + 1) = iVar4 + 1;
          iVar3 = iVar4;
        }
        iVar4 = iVar3;
        UNLOCK();
        plVar6 = local_28;
      } while (!bVar7);
      LOCK();
      piVar1 = (int *)((longlong)local_28 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_28 + 0x10))();
      }
      if (plVar6 != (longlong *)0x0) {
        if (local_30 != 0) {
          FUN_14119101a(local_30,param_1 + 0x850,*(undefined8 *)(param_1 + 0x30),0);
        }
        LOCK();
        plVar2 = plVar6 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
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
    }
  }
  FUN_140cfa276(param_1 + 0x850);
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140cfa276 FUN_140cfa276 body=62 status=ok
// SIG undefined FUN_140cfa276(void)

void FUN_140cfa276(longlong param_1)

{
  if (*(char *)(param_1 + 0xb8) == '\x01') {
    FUN_144a2da94(param_1 + 0x80);
    FUN_144a2da94(param_1 + 0x40);
    FUN_144a2da94(param_1 + 8);
    *(undefined1 *)(param_1 + 0xb8) = 0;
  }
  return;
}



// FUNCTION 140cfa2b4 FUN_140cfa2b4 body=295 status=ok
// SIG undefined FUN_140cfa2b4(void)

void FUN_140cfa2b4(uint *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  
  if (((param_1[1] == 0) || (uVar1 = *param_1, (int)uVar1 < 0)) || (DAT_14c9647dc <= (int)uVar1)) {
LAB_140cfa3d3:
    lVar4 = 0;
  }
  else {
    plVar6 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar6 == (longlong *)0x0) || (*(uint *)(plVar6 + 2) != param_1[1])) ||
       (((*(uint *)(plVar6 + 1) & 0x10200000) != 0 ||
        (plVar6 = (longlong *)*plVar6, plVar6 == (longlong *)0x0)))) goto LAB_140cfa3d3;
    uVar2 = FUN_14045aae0();
    lVar3 = (**(code **)(*plVar6 + 0x288))(plVar6,uVar2);
    if (lVar3 == 0) goto LAB_140cfa3d3;
    uVar2 = FUN_14045aae0();
    lVar4 = FUN_144718840(lVar3,uVar2);
    if (lVar3 == lVar4) goto LAB_140cfa3d3;
  }
  if (param_1[1] != 0) {
    uVar1 = *param_1;
    uVar2 = 0;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_140cfa3ae;
    puVar5 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((puVar5 != (undefined8 *)0x0) &&
       ((*(uint *)(puVar5 + 2) == param_1[1] && ((*(uint *)(puVar5 + 1) & 0x10200000) == 0)))) {
      if ((*(uint *)(puVar5 + 1) & 0x10200000) == 0) {
        uVar2 = *puVar5;
      }
      else {
        uVar2 = 0;
      }
      uVar2 = FUN_1447210f0(uVar2);
      goto LAB_140cfa3ae;
    }
  }
  uVar2 = 0;
LAB_140cfa3ae:
  FUN_14045abc6(uVar2,lVar4,0);
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  return;
}



// FUNCTION 140cfa3dc FUN_140cfa3dc body=350 status=ok
// SIG undefined FUN_140cfa3dc(void)

void FUN_140cfa3dc(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  
  if (*(longlong *)(param_1 + 0x30) != 0) {
    lVar2 = FUN_1447210f0();
    if (lVar2 != 0) {
      if (*(longlong *)(lVar2 + 0x1f0) == 0) {
        plVar3 = (longlong *)(lVar2 + 0x458);
      }
      else {
        plVar3 = (longlong *)(*(longlong *)(lVar2 + 0x1f0) + 0xf0);
      }
      lVar1 = *(longlong *)(param_1 + 0x7e0);
      if (lVar1 != 0) {
        lVar6 = *plVar3;
        uVar4 = (uint)lVar1;
        if ((int)(uVar4 & 0xffffff) < *(int *)(lVar6 + 0x10)) {
          lVar5 = lVar6 + 0x18;
          if (*(longlong *)(lVar6 + 0x28) != 0) {
            lVar5 = *(longlong *)(lVar6 + 0x28);
          }
          if ((*(uint *)(lVar5 + (ulonglong)((uVar4 & 0xffffff) >> 5) * 4) >> (uVar4 & 0x1f) & 1) !=
              0) {
            lVar6 = *(longlong *)(lVar6 + 8);
            lVar5 = (ulonglong)(uVar4 & 0xffffff) * 0x70;
            if (((lVar6 + lVar5 != 0) && (*(longlong *)(lVar6 + 0x60 + lVar5) == lVar1)) &&
               (*(char *)(lVar6 + 1 + lVar5) != '\x04')) {
              FUN_1405a424c();
            }
          }
        }
      }
      *(undefined8 *)(param_1 + 0x7e0) = 0;
      if (*(longlong *)(lVar2 + 0x1f0) == 0) {
        plVar3 = (longlong *)(lVar2 + 0x458);
      }
      else {
        plVar3 = (longlong *)(*(longlong *)(lVar2 + 0x1f0) + 0xf0);
      }
      lVar2 = *(longlong *)(param_1 + 0x7e8);
      if (lVar2 != 0) {
        lVar1 = *plVar3;
        uVar4 = (uint)lVar2;
        if ((int)(uVar4 & 0xffffff) < *(int *)(lVar1 + 0x10)) {
          lVar6 = lVar1 + 0x18;
          if (*(longlong *)(lVar1 + 0x28) != 0) {
            lVar6 = *(longlong *)(lVar1 + 0x28);
          }
          if ((*(uint *)(lVar6 + (ulonglong)((uVar4 & 0xffffff) >> 5) * 4) >> (uVar4 & 0x1f) & 1) !=
              0) {
            lVar1 = *(longlong *)(lVar1 + 8);
            lVar6 = (ulonglong)(uVar4 & 0xffffff) * 0x70;
            if (((lVar1 + lVar6 != 0) && (*(longlong *)(lVar1 + 0x60 + lVar6) == lVar2)) &&
               (*(char *)(lVar1 + 1 + lVar6) != '\x04')) {
              FUN_1405a424c();
            }
          }
        }
      }
      *(undefined8 *)(param_1 + 0x7e8) = 0;
    }
  }
  return;
}



// FUNCTION 140cfa53a FUN_140cfa53a body=427 status=ok
// SIG undefined FUN_140cfa53a(void)

void FUN_140cfa53a(undefined8 *param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  undefined1 *local_70;
  undefined8 **local_68;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_68 = &local_78;
  local_70 = &LAB_142b3d8aa;
  local_78 = param_1;
  FUN_140cfa7c8(param_1 + 0x124);
  *(undefined4 *)(param_1 + 0x124) = 0;
  if (*(int *)(param_1 + 299) < 1) goto LAB_140cfa595;
  uVar3 = FUN_14479d2ce(param_1);
  local_70 = (undefined1 *)((ulonglong)local_70 & 0xffffffffffffff00);
  local_48 = 0;
  FUN_1456bb102(&local_70,uVar3);
  lVar2 = param_1[0x12a];
  iVar1 = *(int *)(param_1 + 299);
  param_1[0x12a] = 0;
  param_1[299] = 0;
  if ((longlong)iVar1 == 0) {
    uVar3 = 0;
    uVar4 = 0;
LAB_140cfa687:
    FUN_140754d76(uVar3,uVar4);
    *(undefined4 *)(param_1 + 299) = 0;
  }
  else {
    lVar5 = lVar2;
    do {
      FUN_142b45f64(lVar5,&local_70,lVar5 + 0x38);
      lVar5 = lVar5 + 0x40;
    } while (lVar5 != (longlong)iVar1 * 0x40 + lVar2);
    uVar4 = *(undefined4 *)(param_1 + 299);
    uVar3 = param_1[0x12a];
    if (-1 < *(int *)((longlong)param_1 + 0x95c)) goto LAB_140cfa687;
    FUN_140754d76(uVar3,uVar4);
    *(undefined4 *)(param_1 + 299) = 0;
    if (*(int *)((longlong)param_1 + 0x95c) != 0) {
      FUN_1470e39d8(param_1 + 0x12a,0);
    }
  }
  FUN_140754d76(lVar2,iVar1);
  if (lVar2 != 0) {
    FUN_1400020a8(lVar2);
  }
  FUN_144a5ac3a(&local_70);
LAB_140cfa595:
  *(undefined4 *)(param_1 + 0x126) = 0;
  if (*(int *)((longlong)param_1 + 0x934) != 0) {
    FUN_1407d9874(param_1 + 0x125,0);
  }
  FUN_1448a8284(param_1 + 0x127);
  FUN_140cfa6e6(param_1 + 2,0);
  *(undefined1 *)((longlong)param_1 + 0x924) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140cfa6e6 FUN_140cfa6e6 body=81 status=ok
// SIG undefined FUN_140cfa6e6(void)

void FUN_140cfa6e6(longlong param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  if (param_2 <= *(int *)(param_1 + 0x90c)) {
    lVar1 = *(longlong *)(param_1 + 0x900);
    if (*(longlong *)(param_1 + 0x900) == 0) {
      lVar1 = param_1;
    }
    FUN_140cfa737(lVar1,*(undefined4 *)(param_1 + 0x908));
    *(undefined4 *)(param_1 + 0x908) = 0;
    return;
  }
  FUN_1470e3a38(param_1);
  return;
}



// FUNCTION 140cfa737 FUN_140cfa737 body=145 status=ok
// SIG undefined FUN_140cfa737(void)

void FUN_140cfa737(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  code *pcVar4;
  undefined8 *puVar5;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
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
    pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)*(byte *)(param_1 + 4) * 0x120)
                       );
    if (pcVar4 != (code *)0x0) {
      puVar5 = param_1;
      if (0x18 < *(ushort *)(param_1 + 3)) {
        puVar5 = (undefined8 *)*param_1;
      }
      (*pcVar4)(puVar5);
    }
    if (0x18 < *(ushort *)(param_1 + 3)) {
      FUN_1400020a8(*param_1);
    }
    param_1 = param_1 + 9;
  }
  return;
}



// FUNCTION 140cfa7c8 FUN_140cfa7c8 body=109 status=ok
// SIG undefined FUN_140cfa7c8(void)

void FUN_140cfa7c8(uint *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*param_1 != 0) {
    puVar1 = &DAT_14c9a7210;
    if (DAT_14c9a7410 != (undefined8 *)0x0) {
      puVar1 = DAT_14c9a7410;
    }
    lVar2 = (longlong)DAT_14c9a7418;
    if (lVar2 != 0) {
      lVar3 = 0;
      do {
        if ((*(longlong *)((longlong)puVar1 + lVar3) != 0) &&
           ((*(uint *)(*(longlong *)((longlong)puVar1 + lVar3) + 0x20) & ~*param_1) == 0)) {
          (*(code *)*param_2)(param_2[1]);
        }
        lVar3 = lVar3 + 0x10;
      } while (lVar2 * 0x10 != lVar3);
    }
  }
  return;
}



// FUNCTION 140cfa836 FUN_140cfa836 body=96 status=ok
// SIG undefined FUN_140cfa836(void)

void FUN_140cfa836(longlong param_1,int param_2)

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



// FUNCTION 140cfa896 FUN_140cfa896 body=499 status=ok
// SIG undefined FUN_140cfa896(void)

undefined8 FUN_140cfa896(longlong param_1)

{
  ulonglong uVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  
  iVar2 = *(int *)(param_1 + 0x178);
  if (iVar2 == 0) {
    uVar16 = 1;
    uVar15 = 0;
    iVar10 = 0;
    iVar7 = 0;
  }
  else {
    puVar6 = *(uint **)(param_1 + 0x170);
    if (*(uint **)(param_1 + 0x170) == (uint *)0x0) {
      puVar6 = (uint *)(param_1 + 0x160);
    }
    uVar14 = *puVar6;
    if (uVar14 == 0) {
      iVar7 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar7 = iVar2 + -1;
      }
      uVar15 = 0;
      uVar16 = (ulonglong)(uint)(iVar7 >> 5);
      if (iVar7 >> 5 < 1) {
        uVar16 = uVar15;
      }
      iVar10 = 0;
      do {
        if (uVar16 == uVar15) {
          return 0;
        }
        iVar10 = iVar10 + 0x20;
        uVar14 = puVar6[uVar15 + 1];
        uVar15 = uVar15 + 1;
      } while (uVar14 == 0);
    }
    else {
      uVar15 = 0;
      iVar10 = 0;
    }
    uVar16 = (ulonglong)(-uVar14 & uVar14);
    uVar1 = uVar16 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar7 = (iVar10 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar7) {
      iVar7 = iVar2;
    }
  }
  if (iVar7 != iVar2) {
    uVar14 = 0xffffffff;
    iVar9 = iVar2;
    do {
      lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x150) + 8 + (longlong)iVar7 * 0x20);
      iVar7 = *(int *)(lVar12 + 0x1c);
      if ((((iVar7 != 0) && (uVar8 = *(uint *)(lVar12 + 0x18), -1 < (int)uVar8)) &&
          ((int)uVar8 < DAT_14c9647dc)) &&
         (((plVar11 = (longlong *)
                      ((ulonglong)((uVar8 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8)),
           plVar11 != (longlong *)0x0 && ((int)plVar11[2] == iVar7)) &&
          (((*(uint *)(plVar11 + 1) & 0x10200000) == 0 && (*plVar11 != 0)))))) {
        cVar3 = FUN_1402273fc();
        if (cVar3 != '\0') {
          return 1;
        }
        iVar9 = *(int *)(param_1 + 0x178);
      }
      uVar14 = uVar14 & ~(uint)uVar16;
      puVar6 = *(uint **)(param_1 + 0x170);
      if (*(uint **)(param_1 + 0x170) == (uint *)0x0) {
        puVar6 = (uint *)(param_1 + 0x160);
      }
      iVar7 = (int)uVar15;
      lVar12 = (longlong)iVar7;
      uVar8 = puVar6[lVar12] & uVar14;
      if (uVar8 == 0) {
        iVar4 = iVar9 + 0x1e;
        if (-1 < iVar9 + -1) {
          iVar4 = iVar9 + -1;
        }
        iVar4 = iVar4 >> 5;
        iVar10 = iVar10 + 0x20;
        iVar5 = iVar4;
        if (iVar4 < iVar7) {
          iVar5 = iVar7;
        }
        if (iVar7 < iVar4) {
          lVar13 = 0;
          do {
            uVar8 = puVar6[lVar12 + lVar13 + 1];
            if (uVar8 != 0) {
              uVar15 = (ulonglong)(iVar7 + (int)lVar13 + 1);
              uVar14 = 0xffffffff;
              goto LAB_140cfaa1a;
            }
            iVar10 = iVar10 + 0x20;
            lVar13 = lVar13 + 1;
          } while (iVar5 - lVar12 != lVar13);
          uVar14 = 0xffffffff;
          iVar7 = iVar5;
        }
        uVar15 = (ulonglong)(iVar7 + 1);
        iVar7 = iVar9;
      }
      else {
LAB_140cfaa1a:
        uVar16 = (ulonglong)(-uVar8 & uVar8);
        uVar1 = uVar16 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        iVar7 = (iVar10 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
        if (iVar9 <= iVar7) {
          iVar7 = iVar9;
        }
      }
    } while (iVar7 != iVar2);
  }
  return 0;
}



// FUNCTION 140cfaa8a FUN_140cfaa8a body=363 status=ok
// SIG undefined FUN_140cfaa8a(void)

void FUN_140cfaa8a(longlong param_1)

{
  int *piVar1;
  undefined1 auStack_a8 [32];
  char local_88 [16];
  longlong *local_78;
  undefined4 local_60 [2];
  char local_58 [8];
  undefined8 local_50;
  longlong *local_48;
  undefined4 local_30 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(char *)(param_1 + 0x80) == '\x01') {
    local_88[0] = '\0';
    local_60[0] = 0;
    FUN_14575a19a(local_88,0);
    local_58[0] = '\0';
    local_30[0] = 0;
    FUN_14031eb60(param_1 + 0x18,local_88);
    if (*(int *)(param_1 + 0x40) != 0) {
      FUN_1417398fc(&DAT_14c9a3da0,*(int *)(param_1 + 0x40) + -1,1);
    }
    *(undefined4 *)(param_1 + 0x40) = local_60[0];
    local_60[0] = 0;
    FUN_14031eb60(param_1 + 0x48,local_58);
    if (*(int *)(param_1 + 0x70) != 0) {
      FUN_1417398fc(&DAT_14c9a3da0,*(int *)(param_1 + 0x70) + -1,1);
    }
    *(undefined4 *)(param_1 + 0x70) = local_30[0];
    local_30[0] = 0;
    FUN_1448173f8(local_30);
    if (local_58[0] != '\0') {
      if (local_58[0] == '\x01') {
        local_50 = 0;
      }
      else if ((local_58[0] == '\x03') && (local_48 != (longlong *)0x0)) {
        LOCK();
        piVar1 = (int *)((longlong)local_48 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_48 + 0x10))();
        }
      }
      local_58[0] = '\0';
    }
    FUN_1448173f8(local_60);
    if ((local_88[0] == '\x03') && (local_78 != (longlong *)0x0)) {
      LOCK();
      piVar1 = (int *)((longlong)local_78 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_78 + 0x10))();
      }
    }
    *(undefined1 *)(param_1 + 0x80) = 0;
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140cfabf6 FUN_140cfabf6 body=587 status=ok
// SIG undefined FUN_140cfabf6(void)

ulonglong FUN_140cfabf6(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint uVar11;
  bool bVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  longlong lVar17;
  longlong *plVar18;
  longlong lVar19;
  int iVar20;
  undefined1 auStack_98 [40];
  ulonglong local_70;
  longlong *local_68;
  longlong local_60;
  ulonglong local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(longlong *)(param_1 + 0x40) == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = FUN_1447210f0();
  }
  uVar9 = FUN_140371550(&local_58,uVar8);
  if (local_50 != (longlong *)0x0) {
    uVar9 = (ulonglong)*(uint *)(local_50 + 1);
    do {
      uVar11 = (uint)uVar9;
      if (uVar11 == 0) {
        plVar18 = (longlong *)0x0;
        break;
      }
      LOCK();
      uVar3 = *(uint *)(local_50 + 1);
      if (uVar11 == uVar3) {
        *(uint *)(local_50 + 1) = uVar11 + 1;
      }
      else {
        uVar9 = (ulonglong)uVar3;
      }
      UNLOCK();
      plVar18 = local_50;
    } while (uVar11 != uVar3);
    LOCK();
    piVar1 = (int *)((longlong)local_50 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      uVar9 = (**(code **)(*local_50 + 0x10))();
    }
    if (plVar18 != (longlong *)0x0) {
      if (local_58 != 0) {
        uVar9 = 0;
        if (*(longlong *)(param_1 + 0x48) != 0) {
          uVar11 = *(uint *)(*(longlong *)(param_1 + 0x48) + 0xc);
          if ((int)uVar11 < DAT_14c9647dc) {
            lVar16 = (ulonglong)((uVar11 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8);
          }
          else {
            lVar16 = 0;
          }
          uVar9 = (ulonglong)*(uint *)(lVar16 + 0x10);
          if (*(uint *)(lVar16 + 0x10) == 0) {
            LOCK();
            iVar4 = DAT_14c964868 + 1;
            UNLOCK();
            uVar11 = DAT_14c964868 + 1;
            bVar12 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar4;
            if (bVar12) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,uVar11);
            }
            uVar9 = 0;
            LOCK();
            uVar3 = *(uint *)(lVar16 + 0x10);
            if (uVar3 == 0) {
              *(uint *)(lVar16 + 0x10) = uVar11;
            }
            else {
              uVar9 = (ulonglong)uVar3;
            }
            UNLOCK();
          }
        }
        lVar16 = 0;
        if (*(longlong *)(param_1 + 0x48) != 0) {
          lVar16 = *(longlong *)(param_1 + 0x50);
        }
        iVar4 = *(int *)(local_58 + 0x38);
        lVar17 = (longlong)iVar4;
        if (lVar17 != 0) {
          local_70 = local_58;
          lVar5 = *(longlong *)(local_58 + 0x30);
          local_60 = lVar5 + 0x18;
          iVar20 = 0;
          bVar12 = *(longlong *)(lVar5 + 8) == lVar16;
          iVar13 = 0;
          local_68 = plVar18;
          do {
            lVar19 = (longlong)iVar13;
            iVar7 = iVar13 + 1;
            if (iVar13 + 1 < iVar4) {
              iVar7 = iVar4;
            }
            lVar10 = lVar19 * 0x10;
            plVar18 = (longlong *)(local_60 + lVar10);
            iVar14 = iVar13;
            do {
              lVar19 = lVar19 + 1;
              iVar15 = iVar7;
              if (lVar17 <= lVar19) break;
              lVar6 = *plVar18;
              iVar14 = iVar14 + 1;
              plVar18 = plVar18 + 2;
              iVar15 = iVar14;
            } while (bVar12 == (lVar6 == lVar16));
            if (bVar12 == false) {
              if (iVar20 != iVar13) {
                memmove((void *)((longlong)iVar20 * 0x10 + lVar5),(void *)(lVar10 + lVar5),
                        (longlong)(iVar15 - iVar13) << 4);
              }
              iVar20 = iVar20 + (iVar15 - iVar13);
            }
            bVar12 = (bool)(bVar12 ^ 1);
            iVar13 = iVar15;
          } while (lVar19 < lVar17);
          *(int *)(local_70 + 0x38) = iVar20;
          uVar9 = local_70;
          plVar18 = local_68;
        }
      }
      LOCK();
      plVar2 = plVar18 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        uVar9 = (**(code **)*plVar18)(plVar18);
        LOCK();
        piVar1 = (int *)((longlong)plVar18 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_98);
        }
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9;
}



// FUNCTION 140cfae5c FUN_140cfae5c body=325 status=ok
// SIG undefined FUN_140cfae5c(void)

void FUN_140cfae5c(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x1c + (longlong)iVar4 * 0x20) * 4) =
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



// FUNCTION 140cfafa2 FUN_140cfafa2 body=809 status=ok
// SIG undefined FUN_140cfafa2(void)

void FUN_140cfafa2(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
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
  FUN_140cfb2cc(param_1,0);
  FUN_140cfb332(param_1,0);
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FUN_140457ffc(*(longlong *)(param_1 + 0xb0) + 0x1270,param_1);
    FUN_140457ffc(*(longlong *)(param_1 + 0xb0) + 0x1258,param_1);
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_140457ffc(*(longlong *)(param_1 + 0x48) + 0x300,param_1);
  }
  if (((((*(longlong **)(param_1 + 0x68) != (longlong *)0x0) && (*(int *)(param_1 + 100) != 0)) &&
       (uVar3 = *(uint *)(param_1 + 0x60), -1 < (int)uVar3)) &&
      (((int)uVar3 < DAT_14c9647dc &&
       (lVar4 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8), lVar4 != 0)))) &&
     ((*(int *)(lVar4 + 0x10) == *(int *)(param_1 + 100) &&
      (((*(uint *)(lVar4 + 8) & 0x10200000) == 0 &&
       (lVar4 = (**(code **)(**(longlong **)(param_1 + 0x68) + 0x20))(), lVar4 != 0)))))) {
    FUN_140457ffc(lVar4 + 400,param_1);
  }
  lVar4 = *(longlong *)(param_1 + 0x48);
  if (lVar4 != 0) {
    if (DAT_14cba8288 == 0) {
      local_30 = &local_18;
      local_18 = FUN_141864c34;
      local_20 = FUN_14081d0ea;
      local_28 = &LAB_1464cee30;
      local_38 = &LAB_148bfac22;
      local_40 = &LAB_140f21842;
      local_48 = &DAT_149e063b2;
      local_50 = 0;
      local_58 = 0x10000004;
      local_60 = 0x10;
      local_68 = 0x9cd0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
      lVar4 = *(longlong *)(param_1 + 0x48);
      if (lVar4 == 0) goto LAB_140cfb0ca;
    }
    if ((((DAT_14cba8288 != 0) && (lVar1 = *(longlong *)(lVar4 + 0x10), lVar1 != 0)) &&
        (*(int *)(DAT_14cba8288 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) ==
        DAT_14cba8288 + 0x30)) {
      FUN_140457ffc(lVar4 + 0x7d90,param_1);
    }
  }
LAB_140cfb0ca:
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    FUN_140457ffc(*(longlong *)(param_1 + 0xc0) + 0x18,param_1);
  }
  if ((*(longlong *)(param_1 + 0x48) != 0) && (lVar4 = FUN_1447210f0(), lVar4 != 0)) {
    if (*(longlong *)(lVar4 + 0x1f0) == 0) {
      plVar2 = (longlong *)(lVar4 + 0x458);
    }
    else {
      plVar2 = (longlong *)(*(longlong *)(lVar4 + 0x1f0) + 0xf0);
    }
    lVar4 = *(longlong *)(param_1 + 0xb8);
    if (lVar4 != 0) {
      lVar1 = *plVar2;
      uVar3 = (uint)lVar4;
      if ((int)(uVar3 & 0xffffff) < *(int *)(lVar1 + 0x10)) {
        lVar5 = lVar1 + 0x18;
        if (*(longlong *)(lVar1 + 0x28) != 0) {
          lVar5 = *(longlong *)(lVar1 + 0x28);
        }
        if ((*(uint *)(lVar5 + (ulonglong)((uVar3 & 0xffffff) >> 5) * 4) >> (uVar3 & 0x1f) & 1) != 0
           ) {
          lVar1 = *(longlong *)(lVar1 + 8);
          lVar5 = (ulonglong)(uVar3 & 0xffffff) * 0x70;
          if (((lVar1 + lVar5 != 0) && (*(longlong *)(lVar1 + 0x60 + lVar5) == lVar4)) &&
             (*(char *)(lVar1 + 1 + lVar5) != '\x04')) {
            FUN_1405a424c();
          }
        }
      }
    }
    *(undefined8 *)(param_1 + 0xb8) = 0;
  }
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  if (*(int *)(param_1 + 0x234) < 0) {
    *(undefined4 *)(param_1 + 0x230) = 0;
    FUN_148cdde26(param_1 + 0x228,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x230) = 0;
  }
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  if ((local_10 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140cfb2cc FUN_140cfb2cc body=101 status=ok
// SIG undefined FUN_140cfb2cc(void)

void FUN_140cfb2cc(longlong param_1,char param_2)

{
  char cVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_1 + 0x98) != 0) {
    cVar1 = FUN_144729dda(param_1 + 0x90);
    if (cVar1 != '\0') {
      lVar2 = (**(code **)(**(longlong **)(param_1 + 0x98) + 0x20))();
      if (lVar2 != 0) {
        if (param_2 == '\0') {
          FUN_140ba2af2();
          return;
        }
        FUN_140ba2cd0(lVar2,&DAT_14cbc2cd8,0);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140cfb332 FUN_140cfb332 body=633 status=ok
// SIG undefined FUN_140cfb332(void)

void FUN_140cfb332(longlong param_1,char param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
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
  plVar2 = *(longlong **)(param_1 + 0x48);
  if (plVar2 == (longlong *)0x0) goto LAB_140cfb5b4;
  if (DAT_14cba8288 == 0) {
    local_40 = &local_28;
    local_28 = FUN_141864c34;
    local_30 = FUN_14081d0ea;
    local_38 = &LAB_1464cee30;
    local_48 = &LAB_148bfac22;
    local_50 = &LAB_140f21842;
    local_58 = &DAT_149e063b2;
    local_60 = 0;
    local_68 = 0x10000004;
    local_70 = 0x10;
    local_78 = 0x9cd0;
    FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
    plVar2 = *(longlong **)(param_1 + 0x48);
    if (plVar2 == (longlong *)0x0) goto LAB_140cfb5b4;
  }
  if ((((DAT_14cba8288 != 0) && (lVar4 = plVar2[2], lVar4 != 0)) &&
      (*(int *)(DAT_14cba8288 + 0x38) <= *(int *)(lVar4 + 0x38))) &&
     (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) ==
      DAT_14cba8288 + 0x30)) {
    if (*(char *)(param_1 + 0x1ad) == '\0') {
      if (param_2 == '\0') {
        FUN_1400bc8c2();
        if (*(char *)(param_1 + 0x1af) == '\0') goto LAB_140cfb487;
      }
      else {
        FUN_1400bc96c(plVar2 + 0xf99,&DAT_14cbc2cd8);
        if (*(char *)(param_1 + 0x1af) == '\0') goto LAB_140cfb4f2;
      }
    }
    else if (*(char *)(param_1 + 0x1af) == '\0') {
      if (param_2 == '\0') {
LAB_140cfb487:
        FUN_1400bc8c2(plVar2 + 0xfa3,&DAT_14cbc2cd8);
      }
      else {
LAB_140cfb4f2:
        FUN_1400bc96c(plVar2 + 0xfa3,&DAT_14cbc2cd8);
      }
    }
    if (*(char *)(param_1 + 0x1ae) == '\0') {
      if (param_2 == '\0') {
        FUN_1400bc8c2();
      }
      else {
        FUN_1400bc96c(plVar2 + 0xf9e,&DAT_14cbc2cd8);
      }
    }
    plVar2 = *(longlong **)(param_1 + 0x48);
    if (plVar2 == (longlong *)0x0) goto LAB_140cfb5b4;
  }
  uVar1 = FUN_140a2a00c();
  plVar2 = (longlong *)(**(code **)(*plVar2 + 0x288))(plVar2,uVar1);
  if (plVar2 != (longlong *)0x0) {
    uVar1 = FUN_140a2a00c();
    plVar3 = (longlong *)FUN_144718840(plVar2,uVar1);
    if (((plVar2 != plVar3) && (plVar3 != (longlong *)0x0)) &&
       (lVar4 = (**(code **)(*plVar3 + 0x10))(plVar3), lVar4 != 0)) {
      if (param_2 != '\0') {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_98);
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_98);
    }
  }
LAB_140cfb5b4:
  if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140cfb5d6 FUN_140cfb5d6 body=876 status=ok
// SIG undefined FUN_140cfb5d6(void)

void FUN_140cfb5d6(longlong param_1)

{
  uint *puVar1;
  longlong *plVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  bool bVar12;
  
  if ((((*(longlong *)(param_1 + 0x158) != 0) &&
       (plVar11 = *(longlong **)(param_1 + 0x160), plVar11 != (longlong *)0x0)) &&
      (0 < (int)plVar11[1])) && (*(longlong *)(param_1 + 0x168) != 0)) {
    lVar9 = 0;
    iVar6 = (int)plVar11[1];
    do {
      iVar5 = iVar6;
      if (iVar5 == 0) {
        plVar11 = (longlong *)0x0;
        goto LAB_140cfb860;
      }
      LOCK();
      iVar6 = (int)plVar11[1];
      bVar12 = iVar5 == iVar6;
      if (bVar12) {
        *(int *)(plVar11 + 1) = iVar5 + 1;
        iVar6 = iVar5;
      }
      UNLOCK();
    } while (!bVar12);
    lVar9 = *(longlong *)(param_1 + 0x158);
LAB_140cfb860:
    if (*(longlong *)(param_1 + 0x168) != 0) {
      FUN_14480f766(lVar9 + 0x18);
    }
    if (iVar5 != 0) {
      LOCK();
      plVar2 = plVar11 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar11)(plVar11);
        LOCK();
        piVar3 = (int *)((longlong)plVar11 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
        }
      }
    }
    *(undefined8 *)(param_1 + 0x158) = 0;
    plVar11 = *(longlong **)(param_1 + 0x160);
    *(undefined8 *)(param_1 + 0x160) = 0;
    *(undefined8 *)(param_1 + 0x168) = 0;
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      piVar3 = (int *)((longlong)plVar11 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar11 + 0x10))();
      }
    }
  }
  if (((*(longlong *)(param_1 + 0x170) != 0) &&
      (plVar11 = *(longlong **)(param_1 + 0x178), plVar11 != (longlong *)0x0)) &&
     ((0 < (int)plVar11[1] && (*(longlong *)(param_1 + 0x180) != 0)))) {
    lVar9 = 0;
    iVar6 = (int)plVar11[1];
    do {
      iVar5 = iVar6;
      if (iVar5 == 0) {
        plVar11 = (longlong *)0x0;
        goto LAB_140cfb8d2;
      }
      LOCK();
      iVar6 = (int)plVar11[1];
      bVar12 = iVar5 == iVar6;
      if (bVar12) {
        *(int *)(plVar11 + 1) = iVar5 + 1;
        iVar6 = iVar5;
      }
      UNLOCK();
    } while (!bVar12);
    lVar9 = *(longlong *)(param_1 + 0x170);
LAB_140cfb8d2:
    if (*(longlong *)(param_1 + 0x180) != 0) {
      FUN_14480f766(lVar9 + 0x18);
    }
    if (iVar5 != 0) {
      LOCK();
      plVar2 = plVar11 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar11)(plVar11);
        LOCK();
        piVar3 = (int *)((longlong)plVar11 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
        }
      }
    }
    *(undefined8 *)(param_1 + 0x170) = 0;
    plVar11 = *(longlong **)(param_1 + 0x178);
    *(undefined8 *)(param_1 + 0x178) = 0;
    *(undefined8 *)(param_1 + 0x180) = 0;
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      piVar3 = (int *)((longlong)plVar11 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar11 + 0x10))();
      }
    }
  }
  puVar1 = (uint *)(param_1 + 8);
  if (((*(int *)(param_1 + 0xc) != 0) && (uVar4 = *puVar1, -1 < (int)uVar4)) &&
     (((int)uVar4 < DAT_14c9647dc &&
      (((puVar10 = (undefined8 *)
                   ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8)),
        puVar10 != (undefined8 *)0x0 && (*(int *)(puVar10 + 2) == *(int *)(param_1 + 0xc))) &&
       ((*(uint *)(puVar10 + 1) & 0x10200000) == 0)))))) {
    if ((*(uint *)(puVar10 + 1) & 0x10200000) == 0) {
      uVar7 = *puVar10;
    }
    else {
      uVar7 = 0;
    }
    uVar7 = FUN_1401b4c98(uVar7);
    lVar9 = *(longlong *)(param_1 + 0xf8);
    if (lVar9 != 0) {
      lVar8 = FUN_144a61814(uVar7,(undefined8 *)(param_1 + 0xf8));
      if (lVar8 != 0) {
        FUN_1405a424c(uVar7,lVar9);
      }
      *(undefined8 *)(param_1 + 0xf8) = 0;
    }
    lVar9 = *(longlong *)(param_1 + 0xd0);
    if (lVar9 != 0) {
      lVar8 = FUN_144a61814(uVar7,(undefined8 *)(param_1 + 0xd0));
      if (lVar8 != 0) {
        FUN_1405a424c(uVar7,lVar9);
      }
      *(undefined8 *)(param_1 + 0xd0) = 0;
    }
    lVar9 = *(longlong *)(param_1 + 0xd8);
    if (lVar9 != 0) {
      lVar8 = FUN_144a61814(uVar7,(undefined8 *)(param_1 + 0xd8));
      if (lVar8 != 0) {
        FUN_1405a424c(uVar7,lVar9);
      }
      *(undefined8 *)(param_1 + 0xd8) = 0;
    }
    lVar9 = *(longlong *)(param_1 + 0xe0);
    if (lVar9 != 0) {
      lVar8 = FUN_144a61814(uVar7,(undefined8 *)(param_1 + 0xe0));
      if (lVar8 != 0) {
        FUN_1405a424c(uVar7,lVar9);
      }
      *(undefined8 *)(param_1 + 0xe0) = 0;
    }
    lVar9 = *(longlong *)(param_1 + 0xe8);
    if (lVar9 != 0) {
      lVar8 = FUN_144a61814(uVar7,(undefined8 *)(param_1 + 0xe8));
      if (lVar8 != 0) {
        FUN_1405a424c(uVar7,lVar9);
      }
      *(undefined8 *)(param_1 + 0xe8) = 0;
    }
  }
  puVar1[0] = 0;
  puVar1[1] = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  return;
}



// FUNCTION 140cfb942 FUN_140cfb942 body=460 status=ok
// SIG undefined FUN_140cfb942(void)

void FUN_140cfb942(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong uVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  
  iVar4 = (int)param_1[5];
  if (iVar4 == 0) {
    uVar15 = 0;
    uVar16 = 1;
    iVar6 = 0;
    iVar12 = 0;
  }
  else {
    puVar10 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar10 = (uint *)(param_1 + 2);
    }
    uVar14 = *puVar10;
    if (uVar14 == 0) {
      iVar6 = iVar4 + 0x1e;
      if (-1 < iVar4 + -1) {
        iVar6 = iVar4 + -1;
      }
      uVar15 = 0;
      uVar16 = (ulonglong)(uint)(iVar6 >> 5);
      if (iVar6 >> 5 < 1) {
        uVar16 = uVar15;
      }
      iVar12 = 0;
      do {
        if (uVar16 == uVar15) goto LAB_140cfba9b;
        iVar12 = iVar12 + 0x20;
        uVar14 = puVar10[uVar15 + 1];
        uVar15 = uVar15 + 1;
      } while (uVar14 == 0);
    }
    else {
      uVar15 = 0;
      iVar12 = 0;
    }
    uVar16 = (ulonglong)(-uVar14 & uVar14);
    uVar3 = uVar16 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iVar6 = (iVar12 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    if (iVar4 <= iVar6) {
      iVar6 = iVar4;
    }
  }
  if (iVar6 < iVar4) {
    uVar14 = 0xffffffff;
    do {
      plVar5 = *(longlong **)(*param_1 + 0x10 + (longlong)iVar6 * 0x20);
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
      uVar14 = uVar14 & ~(uint)uVar16;
      puVar10 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar10 = (uint *)(param_1 + 2);
      }
      iVar4 = (int)param_1[5];
      iVar6 = (int)uVar15;
      lVar13 = (longlong)iVar6;
      uVar7 = puVar10[lVar13] & uVar14;
      if (uVar7 == 0) {
        iVar8 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar8 = iVar4 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar9 = iVar8;
        if (iVar8 < iVar6) {
          iVar9 = iVar6;
        }
        if (iVar8 <= iVar6) break;
        lVar11 = 0;
        while( true ) {
          iVar12 = iVar12 + 0x20;
          uVar7 = puVar10[lVar13 + lVar11 + 1];
          if (uVar7 != 0) break;
          lVar11 = lVar11 + 1;
          if (iVar9 - lVar13 == lVar11) goto LAB_140cfba9b;
        }
        uVar15 = (ulonglong)(iVar6 + (int)lVar11 + 1);
        uVar14 = 0xffffffff;
      }
      uVar16 = (ulonglong)(-uVar7 & uVar7);
      uVar3 = uVar16 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iVar6 = (iVar12 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    } while (iVar6 < iVar4);
  }
LAB_140cfba9b:
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    FUN_1446f4a44(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  return;
}



// FUNCTION 140cfbb0e FUN_140cfbb0e body=9 status=ok
// SIG undefined FUN_140cfbb0e(void)

void FUN_140cfbb0e(longlong param_1)

{
  FUN_140cfbb18(param_1 + 0x10);
  return;
}



// FUNCTION 140cfbb18 FUN_140cfbb18 body=211 status=ok
// SIG undefined FUN_140cfbb18(void)

void FUN_140cfbb18(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b4a88c0;
  FUN_141083db4();
  plVar2 = (longlong *)param_1[0xc4];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_1[0xbe] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xb9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xb4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xaf] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xaa] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xa5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  plVar2 = (longlong *)param_1[2];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000140cfbbe0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 140cfbbec FUN_140cfbbec body=422 status=ok
// SIG undefined FUN_140cfbbec(void)

void FUN_140cfbbec(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  
  bVar3 = *(byte *)(param_1 + 0x2a);
  if ((bVar3 & 4) == 0) {
    if ((bVar3 & 0x10) == 0) {
      FUN_14057be50(param_1);
      if ((*(byte *)(param_1 + 0x2a) & 8) != 0) {
        *(byte *)(param_1 + 0x2a) = *(byte *)(param_1 + 0x2a) & 0xf7;
        FUN_1449db8d8(param_1 + 6);
      }
      (**(code **)(*param_1 + 0x48))(param_1);
      FUN_140bbb840(param_1);
      lVar7 = param_1[0x10];
      lVar2 = param_1[0x11];
      if ((longlong)(int)lVar2 == 0) {
        uVar5 = 0;
      }
      else {
        lVar8 = 0;
        do {
          FUN_14899d950(*(undefined8 *)(lVar7 + lVar8));
          lVar8 = lVar8 + 0x10;
        } while ((longlong)(int)lVar2 * 0x10 != lVar8);
        uVar5 = (undefined4)param_1[0x11];
        lVar7 = param_1[0x10];
      }
      FUN_140ee79c9(lVar7,uVar5);
      *(undefined4 *)(param_1 + 0x11) = 0;
      if (*(int *)((longlong)param_1 + 0x8c) != 0) {
        FUN_1418adc00(param_1 + 0x10,0);
      }
      FUN_140ee7a1d(param_1[0x12],(int)param_1[0x13]);
      *(undefined4 *)(param_1 + 0x13) = 0;
      if (*(int *)((longlong)param_1 + 0x9c) != 0) {
        FUN_1418adcdc(param_1 + 0x12,0);
      }
      FUN_140ee7980(param_1[0x14],(int)param_1[0x15]);
      *(undefined4 *)(param_1 + 0x15) = 0;
      if (*(int *)((longlong)param_1 + 0xac) != 0) {
        FUN_1418add3c(param_1 + 0x14,0);
      }
      if (((*(int *)((longlong)param_1 + 0x7c) != 0) &&
          (uVar1 = *(uint *)(param_1 + 0xf), -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
        puVar6 = (undefined8 *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
        if (((puVar6 != (undefined8 *)0x0) &&
            (*(int *)(puVar6 + 2) == *(int *)((longlong)param_1 + 0x7c))) &&
           ((*(uint *)(puVar6 + 1) & 0x10200000) == 0)) {
          if ((*(uint *)(puVar6 + 1) & 0x10200000) == 0) {
            plVar4 = (longlong *)*puVar6;
          }
          else {
            plVar4 = (longlong *)0x0;
          }
          (**(code **)(*plVar4 + 0x2b0))();
          param_1[0xf] = 0;
        }
      }
      FUN_140fead1e(param_1);
      bVar3 = *(byte *)(param_1 + 0x2a) | 4;
    }
    else {
      bVar3 = bVar3 | 0x20;
    }
    *(byte *)(param_1 + 0x2a) = bVar3;
  }
  return;
}



// FUNCTION 140cfbd92 FUN_140cfbd92 body=1831 status=ok
// SIG undefined FUN_140cfbd92(void)

void FUN_140cfbd92(longlong param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong *plVar10;
  undefined ***pppuVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  longlong lVar17;
  longlong lVar18;
  int iVar19;
  undefined1 *puVar20;
  longlong *plVar21;
  bool bVar22;
  undefined1 auStack_d8 [32];
  longlong *local_b8;
  undefined1 *local_b0;
  longlong *local_a8;
  longlong local_a0;
  longlong local_98;
  int local_90;
  int local_8c;
  undefined1 *local_88;
  longlong *local_80;
  undefined ***local_78;
  undefined **local_68;
  longlong local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if ((*(byte *)(param_1 + 0x20c) & 1) == 0) {
    *(byte *)(param_1 + 0x20c) = *(byte *)(param_1 + 0x20c) | 1;
    local_98 = 0;
    iVar4 = *(int *)(param_1 + 0x40);
    uVar6 = *(undefined8 *)(param_1 + 0x38);
    local_90 = iVar4;
    if (iVar4 == 0) {
      local_8c = 0;
      iVar4 = 0;
    }
    else {
      FUN_140cfce10(&local_98,iVar4,0);
      FUN_140cfc8da(local_98,uVar6,iVar4);
      iVar4 = local_90;
    }
    uVar16 = *(uint *)(param_1 + 0x50);
    if (uVar16 != 0) {
      local_90 = iVar4 + uVar16;
      if ((uint)(local_8c - iVar4) < uVar16) {
        FUN_14120b214(&local_98,iVar4);
      }
      FUN_140cfc8da((longlong)iVar4 * 8 + local_98,*(undefined8 *)(param_1 + 0x48),uVar16);
      iVar4 = local_90;
    }
    lVar7 = local_98;
    if (iVar4 != 0) {
      lVar8 = 0;
      do {
        if (*(longlong *)(lVar7 + lVar8) != 0) {
          FUN_140cfcf4e();
        }
        lVar8 = lVar8 + 8;
      } while ((longlong)iVar4 * 8 != lVar8);
    }
    *(undefined4 *)(param_1 + 0x40) = 0;
    if (*(int *)(param_1 + 0x44) != 0) {
      FUN_140cfc87a(param_1 + 0x38,0);
    }
    *(undefined4 *)(param_1 + 0x50) = 0;
    if (*(int *)(param_1 + 0x54) != 0) {
      FUN_140cfc87a((undefined8 *)(param_1 + 0x48),0);
    }
    local_60 = param_1 + 0x1a8;
    local_78 = (undefined ***)0x0;
    local_68 = &PTR_LAB_14b42bc30;
    local_88 = &LAB_143e3a0c6;
    (**(code **)(*(longlong *)(param_1 + 0x1a8) + 0x18))(local_60,&local_88);
    if (local_88 != (undefined1 *)0x0) {
      pppuVar11 = local_78;
      if (local_78 == (undefined ***)0x0) {
        pppuVar11 = &local_68;
      }
      (*(code *)(*pppuVar11)[2])();
    }
    if ((*(longlong *)(param_1 + 0x20) != 0) && (*(longlong **)(param_1 + 0x28) != (longlong *)0x0))
    {
      plVar5 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x28) + 8))();
      if ((plVar5 != (longlong *)0x0) && (iVar4 = FUN_14487fd02(plVar5), 0xfffffffd < iVar4 - 3U)) {
        uVar6 = FUN_140959fa0();
        lVar7 = (**(code **)(*plVar5 + 0x288))(plVar5,uVar6);
        if (lVar7 != 0) {
          uVar6 = FUN_140959fa0();
          lVar8 = FUN_144718840(lVar7,uVar6);
          if ((lVar7 != lVar8) && (lVar8 != 0)) {
            FUN_140457ffc(lVar8 + 8,plVar5);
            FUN_140457ffc(lVar8 + 0x20,plVar5);
          }
        }
      }
      if (*(longlong *)(param_1 + 0x20) == 0) {
        plVar5 = (longlong *)0x0;
      }
      else {
        plVar5 = *(longlong **)(param_1 + 0x28);
      }
      lVar7 = (**(code **)(*plVar5 + 8))(plVar5);
      if (lVar7 == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = FUN_1447210f0(lVar7);
      }
      FUN_140cfc686(&local_88,uVar6);
      if (local_80 != (longlong *)0x0) {
        iVar4 = (int)local_80[1];
        do {
          if (iVar4 == 0) {
            plVar21 = (longlong *)0x0;
            break;
          }
          LOCK();
          iVar13 = (int)local_80[1];
          bVar22 = iVar4 == iVar13;
          if (bVar22) {
            *(int *)(local_80 + 1) = iVar4 + 1;
            iVar13 = iVar4;
          }
          iVar4 = iVar13;
          UNLOCK();
          plVar21 = local_80;
        } while (!bVar22);
        LOCK();
        piVar1 = (int *)((longlong)local_80 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_80 + 0x10))();
        }
        puVar20 = local_88;
        if (plVar21 != (longlong *)0x0) {
          if (local_88 != (undefined1 *)0x0) {
            local_b8 = plVar21;
            lVar7 = (**(code **)(*plVar5 + 8))(plVar5);
            if (lVar7 != 0) {
              uVar16 = *(uint *)(lVar7 + 0xc);
              if ((int)uVar16 < DAT_14c9647dc) {
                lVar8 = (ulonglong)((uVar16 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8);
              }
              else {
                lVar8 = 0;
              }
              plVar21 = (longlong *)(puVar20 + 0xc78);
              uVar14 = *(uint *)(lVar8 + 0x10);
              if (*(uint *)(lVar8 + 0x10) == 0) {
                LOCK();
                iVar4 = DAT_14c964868 + 1;
                UNLOCK();
                uVar12 = DAT_14c964868 + 1;
                bVar22 = DAT_14c964868 < 1000;
                DAT_14c964868 = iVar4;
                if (bVar22) {
                  FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                ,uVar12);
                }
                LOCK();
                uVar14 = *(uint *)(lVar8 + 0x10);
                bVar22 = uVar14 == 0;
                if (bVar22) {
                  *(uint *)(lVar8 + 0x10) = uVar12;
                  uVar14 = 0;
                }
                UNLOCK();
                if (bVar22) {
                  uVar14 = uVar12;
                }
              }
              local_88 = (undefined1 *)CONCAT44(uVar14,uVar16);
              iVar4 = FUN_140cfc7be(plVar21,uVar16 ^ uVar14);
              if (iVar4 != -1) {
                if ((*plVar21 + (longlong)iVar4 * 0x20 + 8U & 0xfffffffffffffff7) != 0) {
                  lVar8 = *plVar21 + (longlong)iVar4 * 0x20;
                  lVar17 = (longlong)*(int *)(lVar8 + 0x10);
                  if (lVar17 != 0) {
                    lVar8 = *(longlong *)(lVar8 + 8);
                    lVar17 = lVar17 << 3;
                    do {
                      plVar10 = (longlong *)FUN_14479d2ce(lVar8);
                      if ((plVar10 != (longlong *)0x0) &&
                         ((*(byte *)((longlong)plVar10 + 0x31) & 0x10) != 0)) {
                        (**(code **)(*plVar10 + 0x2b8))(plVar10,0);
                      }
                      lVar8 = lVar8 + 8;
                      lVar17 = lVar17 + -8;
                    } while (lVar17 != 0);
                  }
                }
              }
              uVar16 = *(uint *)(lVar7 + 0xc);
              if ((int)uVar16 < DAT_14c9647dc) {
                lVar7 = (ulonglong)((uVar16 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8);
              }
              else {
                lVar7 = 0;
              }
              iVar4 = *(int *)(lVar7 + 0x10);
              if (*(int *)(lVar7 + 0x10) == 0) {
                LOCK();
                iVar4 = DAT_14c964868 + 1;
                UNLOCK();
                iVar13 = DAT_14c964868 + 1;
                bVar22 = DAT_14c964868 < 1000;
                DAT_14c964868 = iVar4;
                if (bVar22) {
                  FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                ,iVar13);
                }
                LOCK();
                iVar4 = *(int *)(lVar7 + 0x10);
                bVar22 = iVar4 == 0;
                if (bVar22) {
                  *(int *)(lVar7 + 0x10) = iVar13;
                  iVar4 = 0;
                }
                UNLOCK();
                if (bVar22) {
                  iVar4 = iVar13;
                }
              }
              FUN_140cfc58e(plVar21,CONCAT44(iVar4,uVar16));
            }
            local_a8 = plVar5;
            FUN_140cfc4c2(&local_88,plVar5);
            local_78 = (undefined ***)((ulonglong)local_78 & 0xffffffffffff0000);
            iVar4 = *(int *)(puVar20 + 0xc60);
            lVar7 = (longlong)iVar4;
            if (lVar7 != 0) {
              local_b0 = puVar20;
              lVar8 = *(longlong *)(puVar20 + 0xc58);
              local_a0 = lVar8 + 0x20;
              iVar19 = 0;
              bVar22 = *(longlong **)(lVar8 + 8) == local_80;
              iVar13 = 0;
              do {
                lVar17 = (longlong)iVar13;
                iVar2 = iVar13 + 1;
                if (iVar13 + 1 < iVar4) {
                  iVar2 = iVar4;
                }
                plVar5 = (longlong *)(local_a0 + lVar17 * 0x18);
                lVar18 = lVar17;
                iVar15 = iVar13;
                do {
                  lVar18 = lVar18 + 1;
                  iVar3 = iVar2;
                  if (lVar7 <= lVar18) break;
                  plVar21 = (longlong *)*plVar5;
                  iVar15 = iVar15 + 1;
                  plVar5 = plVar5 + 3;
                  iVar3 = iVar15;
                } while (bVar22 == (plVar21 == local_80));
                if (bVar22 == false) {
                  if (iVar19 != iVar13) {
                    memmove((void *)(lVar8 + (longlong)iVar19 * 0x18),
                            (void *)(lVar8 + lVar17 * 0x18),(longlong)(iVar3 - iVar13) * 0x18);
                  }
                  iVar19 = iVar19 + (iVar3 - iVar13);
                }
                bVar22 = (bool)(bVar22 ^ 1);
                iVar13 = iVar3;
              } while (lVar18 < lVar7);
              *(int *)(local_b0 + 0xc60) = iVar19;
              puVar20 = local_b0;
            }
            plVar5 = local_a8;
            lVar7 = (**(code **)(*local_a8 + 8))(local_a8);
            plVar21 = local_b8;
            if (lVar7 == 0) {
              uVar16 = 0;
              uVar9 = 0;
            }
            else {
              uVar16 = *(uint *)(lVar7 + 0xc);
              if ((int)uVar16 < DAT_14c9647dc) {
                lVar7 = (ulonglong)((uVar16 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8);
              }
              else {
                lVar7 = 0;
              }
              uVar9 = (ulonglong)*(uint *)(lVar7 + 0x10);
              if (*(uint *)(lVar7 + 0x10) == 0) {
                LOCK();
                iVar4 = DAT_14c964868 + 1;
                UNLOCK();
                uVar14 = DAT_14c964868 + 1;
                bVar22 = DAT_14c964868 < 1000;
                DAT_14c964868 = iVar4;
                if (bVar22) {
                  FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                ,uVar14);
                }
                LOCK();
                uVar12 = *(uint *)(lVar7 + 0x10);
                bVar22 = uVar12 == 0;
                if (bVar22) {
                  *(uint *)(lVar7 + 0x10) = uVar14;
                  uVar12 = 0;
                }
                UNLOCK();
                if (bVar22) {
                  uVar12 = uVar14;
                }
                uVar9 = (ulonglong)uVar12;
              }
            }
            FUN_140cfc58e(puVar20 + 0xc78,(ulonglong)uVar16 | uVar9 << 0x20);
            lVar7 = (**(code **)(*plVar5 + 0x10))(plVar5);
            iVar4 = *(int *)(lVar7 + 0x40);
            if ((longlong)iVar4 != 0) {
              lVar7 = *(longlong *)(lVar7 + 0x38);
              lVar8 = 0;
              do {
                local_88 = (undefined1 *)0x0;
                FUN_14485c47a(&local_88,*(undefined8 *)(lVar7 + lVar8));
                FUN_145bfdb0e(puVar20 + 0xcc8,local_88);
                lVar8 = lVar8 + 8;
              } while ((longlong)iVar4 * 8 != lVar8);
            }
          }
          LOCK();
          plVar5 = plVar21 + 1;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)*plVar5 == 0) {
            (**(code **)*plVar21)(plVar21);
            LOCK();
            piVar1 = (int *)((longlong)plVar21 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar21 + 0x10))(plVar21);
            }
          }
        }
      }
    }
    if (local_98 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140cfc4c2 FUN_140cfc4c2 body=204 status=ok
// SIG undefined FUN_140cfc4c2(void)

uint * FUN_140cfc4c2(uint *param_1,longlong *param_2)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  bool bVar6;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if ((param_2 == (longlong *)0x0) || (lVar4 = (**(code **)(*param_2 + 8))(param_2), lVar4 == 0)) {
    *param_1 = 0;
    uVar3 = 0;
  }
  else {
    uVar3 = *(uint *)(lVar4 + 0xc);
    *param_1 = uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar4 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar4 = 0;
    }
    uVar3 = *(uint *)(lVar4 + 0x10);
    if (*(uint *)(lVar4 + 0x10) == 0) {
      LOCK();
      iVar1 = DAT_14c964868 + 1;
      UNLOCK();
      uVar5 = DAT_14c964868 + 1;
      bVar6 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar1;
      if (bVar6) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar5);
      }
      LOCK();
      uVar3 = *(uint *)(lVar4 + 0x10);
      bVar6 = uVar3 == 0;
      if (bVar6) {
        *(uint *)(lVar4 + 0x10) = uVar5;
        uVar3 = 0;
      }
      UNLOCK();
      if (bVar6) {
        uVar3 = uVar5;
      }
    }
  }
  param_1[1] = uVar3;
  cVar2 = FUN_14493c216(param_1,0);
  if (cVar2 == '\0') {
    *(longlong **)(param_1 + 2) = param_2;
  }
  return param_1;
}



// FUNCTION 140cfc58e FUN_140cfc58e body=247 status=ok
// SIG undefined FUN_140cfc58e(void)

void FUN_140cfc58e(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
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
    uVar7 = (longlong)(int)((uint)((ulonglong)param_2 >> 0x20) ^ (uint)param_2) &
            (longlong)(int)param_1[9] - 1U;
    lVar4 = (longlong)*(int *)((longlong)plVar5 + uVar7 * 4);
    if (lVar4 != -1) {
      lVar3 = *param_1;
      lVar4 = lVar4 * 0x20;
      local_40 = *(undefined8 *)(lVar3 + lVar4);
      local_48 = param_2;
      cVar2 = FUN_14472d054();
      if (cVar2 == '\0') {
        lVar4 = lVar3 + lVar4;
        do {
          lVar3 = lVar4;
          lVar4 = (longlong)*(int *)(lVar3 + 0x18);
          if (lVar4 == -1) goto LAB_140cfc5b2;
          lVar1 = *param_1;
          lVar4 = lVar4 * 0x20;
          local_40 = *(undefined8 *)(lVar1 + lVar4);
          local_48 = param_2;
          cVar2 = FUN_14472d054();
          lVar4 = lVar1 + lVar4;
        } while (cVar2 == '\0');
        puVar6 = (undefined4 *)(lVar3 + 0x18);
      }
      else {
        puVar6 = (undefined4 *)((longlong)plVar5 + uVar7 * 4);
      }
      FUN_14898c6d6(param_1,*puVar6);
    }
  }
LAB_140cfc5b2:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140cfc686 FUN_140cfc686 body=310 status=ok
// SIG undefined FUN_140cfc686(void)

longlong * FUN_140cfc686(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  param_1[1] = 0;
  uVar4 = DAT_14cb8ab28;
  if (param_2 != 0) {
    if (DAT_14c9a7d10 == (undefined8 *)0x0) {
      DAT_14c9a7d10 = (undefined8 *)FUN_14001cc68(0x20,0x10);
      *DAT_14c9a7d10 = 0;
      DAT_14c9a7d10[1] = 0;
      DAT_14c9a7d10[2] = 0;
      DAT_14c9a7d10[3] = 0;
    }
    FUN_14005915a(DAT_14c9a7d10,&local_38,uVar4,param_2);
    plVar1 = local_30;
    if (local_38 != 0) {
      if (local_30 == (longlong *)0x0) {
        *param_1 = local_38;
      }
      else {
        LOCK();
        *(int *)(local_30 + 1) = (int)local_30[1] + 1;
        UNLOCK();
        *param_1 = local_38;
        if ((longlong *)param_1[1] != local_30) {
          LOCK();
          *(int *)((longlong)local_30 + 0xc) = *(int *)((longlong)local_30 + 0xc) + 1;
          UNLOCK();
          plVar3 = (longlong *)param_1[1];
          if (plVar3 != (longlong *)0x0) {
            LOCK();
            piVar2 = (int *)((longlong)plVar3 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar3 + 0x10))();
            }
          }
          param_1[1] = (longlong)plVar1;
        }
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
    }
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar2 = (int *)((longlong)local_30 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_30 + 0x10))(local_30);
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140cfc7be FUN_140cfc7be body=186 status=ok
// SIG undefined FUN_140cfc7be(void)

int FUN_140cfc7be(longlong *param_1,uint param_2,undefined8 *param_3)

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
        local_40 = *(undefined8 *)(lVar3 + (longlong)iVar4 * 0x20);
        cVar1 = FUN_14472d054(&local_40,&local_48);
        if (cVar1 != '\0') goto LAB_140cfc7e7;
        lVar3 = *param_1;
        iVar4 = *(int *)(lVar3 + 0x18 + (longlong)iVar4 * 0x20);
      } while (iVar4 != -1);
    }
  }
  iVar4 = -1;
LAB_140cfc7e7:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar4;
}



// FUNCTION 140cfc87a FUN_140cfc87a body=96 status=ok
// SIG undefined FUN_140cfc87a(void)

void FUN_140cfc87a(longlong param_1,int param_2)

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



// FUNCTION 140cfc8da FUN_140cfc8da body=80 status=ok
// SIG undefined FUN_140cfc8da(void)

void FUN_140cfc8da(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = 0;
    bVar2 = DAT_14c950c29;
    do {
      lVar1 = *(longlong *)(param_2 + lVar3 * 8);
      *(longlong *)(param_1 + lVar3 * 8) = lVar1;
      if (((bVar2 & 1) != 0) && (lVar1 != 0)) {
        FUN_1456cec3c();
        bVar2 = DAT_14c950c29;
      }
      lVar3 = lVar3 + 1;
    } while (param_3 != (int)lVar3);
  }
  return;
}



// FUNCTION 140cfc92a FUN_140cfc92a body=1254 status=ok
// SIG undefined FUN_140cfc92a(void)

void FUN_140cfc92a(longlong param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  if (((*(int *)(param_1 + 0xc1c) != 0) && (uVar1 = *(uint *)(param_1 + 0xc18), -1 < (int)uVar1)) &&
     ((int)uVar1 < DAT_14c9647dc)) {
    puVar2 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((puVar2 != (undefined8 *)0x0) && (*(int *)(puVar2 + 2) == *(int *)(param_1 + 0xc1c))) &&
       ((*(uint *)(puVar2 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(puVar2 + 1) & 0x10200000) == 0) {
        uVar3 = *puVar2;
      }
      else {
        uVar3 = 0;
      }
      FUN_140457ffc(param_1 + 0x3a8,uVar3);
      FUN_140457ffc(param_1 + 0x408,uVar3);
      FUN_140457ffc(param_1 + 0x468,uVar3);
      FUN_140457ffc(param_1 + 0x4b0,uVar3);
      FUN_140457ffc(param_1 + 0x4d8,uVar3);
      FUN_140457ffc(param_1 + 0x4f8,uVar3);
      FUN_140457ffc(param_1 + 0x518,uVar3);
      FUN_140457ffc(param_1 + 0x540,uVar3);
      FUN_140457ffc(param_1 + 0x560,uVar3);
      FUN_140457ffc(param_1 + 0x580,uVar3);
      FUN_140457ffc(param_1 + 0x5a0,uVar3);
      FUN_140457ffc(param_1 + 0x5c0,uVar3);
      FUN_140457ffc(param_1 + 0x220,uVar3);
      FUN_140457ffc(param_1 + 0x240,uVar3);
      FUN_140457ffc(param_1 + 0x260,uVar3);
      FUN_140457ffc(param_1 + 0x280,uVar3);
      FUN_140457ffc(param_1 + 0x360,uVar3);
      FUN_140457ffc(param_1 + 0x388,uVar3);
      FUN_140457ffc(param_1 + 0x3c8,uVar3);
      FUN_140457ffc(param_1 + 0x140,uVar3);
      FUN_140457ffc(param_1 + 0x160,uVar3);
      FUN_140457ffc(param_1 + 0x180,uVar3);
      FUN_140457ffc(param_1 + 0x1a0,uVar3);
      FUN_140457ffc(param_1,uVar3);
      FUN_140457ffc(param_1 + 0x20,uVar3);
      FUN_140457ffc(param_1 + 0x40,uVar3);
      FUN_140457ffc(param_1 + 0x60,uVar3);
      FUN_140457ffc(param_1 + 0x6b0,uVar3);
      FUN_140457ffc(param_1 + 0x690,uVar3);
      FUN_140457ffc(param_1 + 0x6d0,uVar3);
      FUN_140457ffc(param_1 + 0x6f0,uVar3);
      FUN_140457ffc(param_1 + 0x870,uVar3);
      FUN_140457ffc(param_1 + 0x830,uVar3);
      FUN_140457ffc(param_1 + 1000,uVar3);
      FUN_140457ffc(param_1 + 0x810,uVar3);
      FUN_140457ffc(param_1 + 0x100,uVar3);
      FUN_140457ffc(param_1 + 0x120,uVar3);
      FUN_140457ffc(param_1 + 0x750,uVar3);
      FUN_140457ffc(param_1 + 0x790,uVar3);
      FUN_140457ffc(param_1 + 0x770,uVar3);
      FUN_140457ffc(param_1 + 0x7b0,uVar3);
      FUN_140457ffc(param_1 + 0xa0,uVar3);
      FUN_140457ffc(param_1 + 0xc0,uVar3);
      FUN_140457ffc(param_1 + 0x80,uVar3);
      FUN_140457ffc(param_1 + 0x428,uVar3);
      FUN_140457ffc(param_1 + 0x448,uVar3);
      FUN_140457ffc(param_1 + 0xe0,uVar3);
      FUN_140457ffc(param_1 + 0x850,uVar3);
      FUN_140457ffc(param_1 + 0x1c0,uVar3);
      FUN_140457ffc(param_1 + 0x8b8,uVar3);
      FUN_140457ffc(param_1 + 0x898,uVar3);
      FUN_140457ffc(param_1 + 0x7f0,uVar3);
      FUN_140457ffc(param_1 + 2000,uVar3);
      FUN_140457ffc(param_1 + 0x200,uVar3);
      FUN_140457ffc(param_1 + 0x2a0,uVar3);
      FUN_140457ffc(param_1 + 0x2c0,uVar3);
      FUN_140457ffc(param_1 + 0x2e0,uVar3);
      FUN_140457ffc(param_1 + 0x300,uVar3);
      FUN_140457ffc(param_1 + 800,uVar3);
      FUN_140457ffc(param_1 + 0x340,uVar3);
      FUN_140457ffc(param_1 + 0x710,uVar3);
      FUN_140457ffc(param_1 + 0x730,uVar3);
      FUN_140457ffc(param_1 + 0x5e0,uVar3);
      FUN_140457ffc(param_1 + 0x608,uVar3);
      FUN_140457ffc(param_1 + 0x938,uVar3);
      FUN_140457ffc(param_1 + 0x630,uVar3);
      FUN_140457ffc(param_1 + 0x8d8,uVar3);
      FUN_140457ffc(param_1 + 0x1e0,uVar3);
      FUN_140457ffc(param_1 + 0x8f8,uVar3);
      FUN_140457ffc(param_1 + 0x918,uVar3);
      if (*(int *)(param_1 + 0xcd0) != *(int *)(param_1 + 0xcfc)) {
        FUN_145798656(param_1 + 0xcc8);
        *(undefined4 *)(param_1 + 0xcd0) = 0;
        if (*(int *)(param_1 + 0xcd4) < 0) {
          FUN_144727cd0(param_1 + 0xcc8,0);
        }
        *(undefined8 *)(param_1 + 0xcf8) = 0xffffffff;
        *(undefined4 *)(param_1 + 0xcf0) = 0;
      }
    }
  }
  return;
}



// FUNCTION 140cfce10 FUN_140cfce10 body=317 status=ok
// SIG undefined FUN_140cfce10(void)

void FUN_140cfce10(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  byte bVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  
  if (param_2 == 0) {
    iVar7 = 0;
  }
  else {
    uVar5 = (longlong)param_2 * 8;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar5 + 0xf;
        if (uVar5 < 0x7ff1) {
          uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar3 = (&DAT_14c841e00)[uVar1 >> 4];
            uVar6 = 0x32;
            if (0x32 < bVar3) {
              uVar6 = (ulonglong)bVar3;
            }
            uVar8 = 0x32 - (ulonglong)bVar3;
            do {
              uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140cfce7e;
              lVar2 = uVar6 + 1 + uVar8;
              uVar8 = uVar8 - 1;
            } while (lVar2 != 0x33);
          }
          uVar5 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar5 = (ulonglong)DAT_14c841df8;
          }
          uVar5 = -uVar5 & ((uVar1 & 0xfffffffffffffff0) + uVar5) - 1;
        }
      }
      else {
        uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
      }
    }
LAB_140cfce7e:
    iVar4 = (int)(uVar5 >> 3);
    iVar7 = 0x7fffffff;
    if (param_2 <= iVar4) {
      iVar7 = iVar4;
    }
  }
  if (param_3 < iVar7) {
    FUN_1446f8d3c(param_1,0,iVar7,8,8);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 140cfcf4e FUN_140cfcf4e body=2158 status=ok
// SIG undefined FUN_140cfcf4e(void)

void FUN_140cfcf4e(longlong param_1)

{
  longlong *plVar1;
  uint *puVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  uint *puVar6;
  int iVar7;
  uint *puVar8;
  undefined4 uVar9;
  int iVar10;
  ulonglong uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  longlong *plVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  int iVar18;
  uint uVar19;
  longlong lVar20;
  longlong lVar21;
  longlong *plVar22;
  bool bVar23;
  
  FUN_140c4bb1c(param_1 + 0x48);
  lVar21 = *(longlong *)(param_1 + 0x188);
  iVar3 = *(int *)(param_1 + 400);
  uVar9 = 0;
  if ((longlong)iVar3 != 0) {
    lVar4 = 0;
    do {
      FUN_143e3d2c2(*(undefined8 *)(lVar21 + lVar4));
      lVar4 = lVar4 + 0x10;
    } while ((longlong)iVar3 * 0x10 != lVar4);
    uVar9 = *(undefined4 *)(param_1 + 400);
    lVar21 = *(longlong *)(param_1 + 0x188);
  }
  FUN_140e0ee70(lVar21,uVar9);
  *(undefined4 *)(param_1 + 400) = 0;
  if (*(int *)(param_1 + 0x194) != 0) {
    FUN_146560504(param_1 + 0x188);
  }
  plVar1 = (longlong *)(param_1 + 0x198);
  puVar2 = (uint *)(param_1 + 0x1a8);
  iVar3 = *(int *)(param_1 + 0x1c0);
  if (iVar3 != 0) {
    puVar6 = *(uint **)(param_1 + 0x1b8);
    puVar8 = puVar6;
    if (puVar6 == (uint *)0x0) {
      puVar8 = puVar2;
    }
    uVar19 = *puVar8;
    if (uVar19 == 0) {
      iVar10 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar10 = iVar3 + -1;
      }
      uVar16 = 0;
      uVar11 = (ulonglong)(uint)(iVar10 >> 5);
      if (iVar10 >> 5 < 1) {
        uVar11 = uVar16;
      }
      iVar10 = 0;
      do {
        if (uVar11 == uVar16) goto LAB_140cfcfc0;
        iVar10 = iVar10 + 0x20;
        uVar19 = puVar8[uVar16 + 1];
        uVar16 = uVar16 + 1;
      } while (uVar19 == 0);
    }
    else {
      iVar10 = 0;
      uVar16 = 0;
    }
    uVar17 = (ulonglong)(-uVar19 & uVar19);
    uVar11 = uVar17 * 2 + 1;
    lVar21 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar21 == 0; lVar21 = lVar21 + -1) {
      }
    }
    iVar18 = (iVar10 - ((uint)lVar21 ^ 0x3f)) + 0x3e;
    if (iVar18 < iVar3) {
      uVar19 = 0xffffffff;
      iVar7 = iVar3;
      do {
        lVar21 = *plVar1;
        iVar13 = *(int *)(lVar21 + 0x20 + (longlong)iVar18 * 0x48);
        if (0 < iVar13) {
          uVar12 = iVar13 + 1;
          do {
            FUN_145a2664e(param_1,lVar21 + (longlong)iVar18 * 0x48 + 0x18,uVar12 - 2);
            uVar12 = uVar12 - 1;
          } while (1 < uVar12);
          puVar6 = *(uint **)(param_1 + 0x1b8);
          iVar7 = *(int *)(param_1 + 0x1c0);
        }
        uVar19 = uVar19 & ~(uint)uVar17;
        puVar8 = puVar6;
        if (puVar6 == (uint *)0x0) {
          puVar8 = puVar2;
        }
        iVar18 = (int)uVar16;
        lVar21 = (longlong)iVar18;
        uVar12 = puVar8[lVar21] & uVar19;
        if (uVar12 == 0) {
          iVar13 = iVar7 + 0x1e;
          if (-1 < iVar7 + -1) {
            iVar13 = iVar7 + -1;
          }
          iVar13 = iVar13 >> 5;
          iVar10 = iVar10 + 0x20;
          iVar14 = iVar13;
          if (iVar13 < iVar18) {
            iVar14 = iVar18;
          }
          if (iVar18 < iVar13) {
            lVar4 = 0;
            do {
              uVar12 = puVar8[lVar21 + lVar4 + 1];
              if (uVar12 != 0) {
                uVar16 = (ulonglong)(iVar18 + (int)lVar4 + 1);
                uVar19 = 0xffffffff;
                goto LAB_140cfd768;
              }
              iVar10 = iVar10 + 0x20;
              lVar4 = lVar4 + 1;
            } while (iVar14 - lVar21 != lVar4);
            uVar19 = 0xffffffff;
            lVar21 = (longlong)iVar14;
          }
          uVar16 = lVar21 + 1U & 0xffffffff;
          iVar18 = iVar7;
        }
        else {
LAB_140cfd768:
          uVar17 = (ulonglong)(-uVar12 & uVar12);
          uVar11 = uVar17 * 2 + 1;
          lVar21 = 0x3f;
          if (uVar11 != 0) {
            for (; uVar11 >> lVar21 == 0; lVar21 = lVar21 + -1) {
            }
          }
          iVar18 = (iVar10 - ((uint)lVar21 ^ 0x3f)) + 0x3e;
          if (iVar7 <= iVar18) {
            iVar18 = iVar7;
          }
        }
      } while (iVar18 != iVar3);
    }
  }
LAB_140cfcfc0:
  if (((*(char *)(param_1 + 0x160) == '\x01') &&
      (lVar21 = (**(code **)(*(longlong *)(param_1 + 0x140) + 8))(param_1 + 0x140), lVar21 != 0)) &&
     (*(longlong *)(param_1 + 0x148) != 0)) {
    FUN_140ccfb62(lVar21);
    *(undefined8 *)(param_1 + 0x148) = 0;
  }
  if ((longlong)*(int *)(param_1 + 0x170) != 0) {
    plVar15 = *(longlong **)(param_1 + 0x168);
    lVar21 = (longlong)*(int *)(param_1 + 0x170) << 5;
    do {
      lVar4 = (**(code **)(*plVar15 + 8))(plVar15);
      if ((lVar4 != 0) && (plVar15[1] != 0)) {
        FUN_140ccfb62(lVar4);
        plVar15[1] = 0;
      }
      plVar15 = plVar15 + 4;
      lVar21 = lVar21 + -0x20;
    } while (lVar21 != 0);
  }
  if ((*(byte *)(param_1 + 0x248) & 2) != 0) {
    if ((*(longlong *)(param_1 + 0x40) != 0) && (lVar21 = FUN_1447210f0(), lVar21 != 0)) {
      if (*(longlong *)(lVar21 + 0x1f0) == 0) {
        lVar4 = lVar21 + 0x460;
      }
      else {
        lVar4 = *(longlong *)(*(longlong *)(lVar21 + 0x1f0) + 0xf8);
      }
      if (param_1 == 0) {
        FUN_1406338de(lVar4,0);
      }
      else {
        uVar19 = *(uint *)(param_1 + 0xc);
        if ((int)uVar19 < DAT_14c9647dc) {
          lVar20 = (ulonglong)((uVar19 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar19 >> 0x10) * 8);
        }
        else {
          lVar20 = 0;
        }
        iVar3 = *(int *)(lVar20 + 0x10);
        if (*(int *)(lVar20 + 0x10) == 0) {
          LOCK();
          iVar3 = DAT_14c964868 + 1;
          UNLOCK();
          iVar10 = DAT_14c964868 + 1;
          bVar23 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar3;
          if (bVar23) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar10);
          }
          LOCK();
          iVar3 = *(int *)(lVar20 + 0x10);
          bVar23 = iVar3 == 0;
          if (bVar23) {
            *(int *)(lVar20 + 0x10) = iVar10;
            iVar3 = 0;
          }
          UNLOCK();
          if (bVar23) {
            iVar3 = iVar10;
          }
        }
        FUN_1406338de(lVar4,CONCAT44(iVar3,uVar19));
        if (*(longlong *)(lVar21 + 0x1f0) == 0) {
          puVar5 = (undefined8 *)(lVar21 + 0x458);
        }
        else {
          puVar5 = (undefined8 *)(*(longlong *)(lVar21 + 0x1f0) + 0xf0);
        }
        FUN_1410d4dde(*puVar5,param_1);
      }
    }
    if (((*(longlong *)(param_1 + 0x88) != 0) && (*(longlong **)(param_1 + 0x90) != (longlong *)0x0)
        ) && (lVar21 = (**(code **)(**(longlong **)(param_1 + 0x90) + 0x10))(), lVar21 != 0)) {
      FUN_1418aad34(lVar21,param_1);
      if ((*(longlong *)(param_1 + 0xa8) != 0) &&
         (*(char *)(*(longlong *)(param_1 + 0xa8) + 0xd0) != '\0')) {
        FUN_143e346e4(param_1);
      }
      iVar3 = *(int *)(param_1 + 0xa0);
      if ((longlong)iVar3 != 0) {
        lVar21 = *(longlong *)(param_1 + 0x98);
        lVar4 = 0;
        do {
          FUN_148986134(*(undefined8 *)(lVar21 + lVar4));
          lVar4 = lVar4 + 8;
        } while ((longlong)iVar3 * 8 != lVar4);
      }
      FUN_140898514(param_1 + 0x28,0);
      *(byte *)(param_1 + 0x248) = *(byte *)(param_1 + 0x248) & 0xfd;
    }
  }
  if ((longlong)*(int *)(param_1 + 0xa0) != 0) {
    plVar22 = *(longlong **)(param_1 + 0x98);
    plVar15 = plVar22 + *(int *)(param_1 + 0xa0);
    do {
      lVar21 = *plVar22;
      FUN_144757f48(lVar21,0x40000000);
      uVar19 = *(uint *)(lVar21 + 0xc);
      if ((int)uVar19 < DAT_14c9647dc) {
        lVar21 = (ulonglong)((uVar19 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar19 >> 0x10) * 8);
      }
      else {
        lVar21 = 0;
      }
      do {
        uVar19 = *(uint *)(lVar21 + 8);
        if ((uVar19 >> 0x15 & 1) != 0) break;
        LOCK();
        bVar23 = uVar19 == *(uint *)(lVar21 + 8);
        if (bVar23) {
          *(uint *)(lVar21 + 8) = uVar19 | 0x200000;
        }
        UNLOCK();
      } while (!bVar23);
      plVar22 = plVar22 + 1;
    } while (plVar22 != plVar15);
  }
  FUN_144757f48(param_1,0x40000000);
  uVar19 = *(uint *)(param_1 + 0xc);
  if ((int)uVar19 < DAT_14c9647dc) {
    lVar21 = (ulonglong)((uVar19 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar19 >> 0x10) * 8);
  }
  else {
    lVar21 = 0;
  }
  do {
    uVar19 = *(uint *)(lVar21 + 8);
    if ((uVar19 >> 0x15 & 1) != 0) break;
    LOCK();
    bVar23 = uVar19 == *(uint *)(lVar21 + 8);
    if (bVar23) {
      *(uint *)(lVar21 + 8) = uVar19 | 0x200000;
    }
    UNLOCK();
  } while (!bVar23);
  FUN_148985c44(param_1 + 0xe0);
  *(undefined4 *)(param_1 + 0xa0) = 0;
  if (*(int *)(param_1 + 0xa4) != 0) {
    FUN_1418aaa58(param_1 + 0x98);
  }
  FUN_140e0ed0f(*(undefined8 *)(param_1 + 0xc0),*(undefined4 *)(param_1 + 200));
  *(undefined4 *)(param_1 + 200) = 0;
  if (*(int *)(param_1 + 0xcc) != 0) {
    FUN_1418aaa88(param_1 + 0xc0);
  }
  FUN_140e0ed5a(*(undefined8 *)(param_1 + 0xb0),*(undefined4 *)(param_1 + 0xb8));
  *(undefined4 *)(param_1 + 0xb8) = 0;
  if (*(int *)(param_1 + 0xbc) != 0) {
    FUN_146560534(param_1 + 0xb0);
  }
  iVar3 = *(int *)(param_1 + 0x1e0);
  if (iVar3 < 2) {
    lVar21 = param_1 + 0x1d0;
    if (*(longlong *)(param_1 + 0x1d8) != 0) {
      lVar21 = *(longlong *)(param_1 + 0x1d8);
    }
    iVar10 = iVar3 + 3;
    if (-1 < iVar3) {
      iVar10 = iVar3;
    }
    if (*(int *)(param_1 + 0x1a0) - *(int *)(param_1 + 0x1cc) < iVar10 >> 2) {
      iVar3 = *(int *)(param_1 + 0x1c0);
      if (iVar3 != 0) {
        puVar6 = *(uint **)(param_1 + 0x1b8);
        if (*(uint **)(param_1 + 0x1b8) == (uint *)0x0) {
          puVar6 = puVar2;
        }
        uVar19 = *puVar6;
        if (uVar19 == 0) {
          iVar10 = iVar3 + 0x1e;
          if (-1 < iVar3 + -1) {
            iVar10 = iVar3 + -1;
          }
          uVar16 = 0;
          uVar11 = (ulonglong)(uint)(iVar10 >> 5);
          if (iVar10 >> 5 < 1) {
            uVar11 = uVar16;
          }
          iVar10 = 0;
          do {
            if (uVar11 == uVar16) goto LAB_140cfd2e8;
            iVar10 = iVar10 + 0x20;
            uVar19 = puVar6[uVar16 + 1];
            uVar16 = uVar16 + 1;
          } while (uVar19 == 0);
        }
        else {
          uVar16 = 0;
          iVar10 = 0;
        }
        uVar17 = (ulonglong)(-uVar19 & uVar19);
        uVar11 = uVar17 * 2 + 1;
        lVar4 = 0x3f;
        if (uVar11 != 0) {
          for (; uVar11 >> lVar4 == 0; lVar4 = lVar4 + -1) {
          }
        }
        iVar18 = (iVar10 - ((uint)lVar4 ^ 0x3f)) + 0x3e;
        if (iVar18 < iVar3) {
          uVar19 = 0xffffffff;
          do {
            *(undefined4 *)
             (lVar21 + (longlong)
                       *(int *)(*(longlong *)(param_1 + 0x198) + 0x44 + (longlong)iVar18 * 0x48) * 4
             ) = 0xffffffff;
            uVar19 = ~(uint)uVar17 & uVar19;
            puVar6 = *(uint **)(param_1 + 0x1b8);
            if (*(uint **)(param_1 + 0x1b8) == (uint *)0x0) {
              puVar6 = puVar2;
            }
            iVar7 = *(int *)(param_1 + 0x1c0);
            iVar18 = (int)uVar16;
            lVar4 = (longlong)iVar18;
            uVar12 = puVar6[lVar4] & uVar19;
            if (uVar12 == 0) {
              iVar13 = iVar7 + 0x1e;
              if (-1 < iVar7 + -1) {
                iVar13 = iVar7 + -1;
              }
              iVar13 = iVar13 >> 5;
              iVar10 = iVar10 + 0x20;
              iVar14 = iVar13;
              if (iVar13 < iVar18) {
                iVar14 = iVar18;
              }
              if (iVar18 < iVar13) {
                lVar20 = 0;
                do {
                  uVar12 = puVar6[lVar4 + lVar20 + 1];
                  if (uVar12 != 0) {
                    uVar16 = (ulonglong)(iVar18 + (int)lVar20 + 1);
                    uVar19 = 0xffffffff;
                    goto LAB_140cfd62d;
                  }
                  iVar10 = iVar10 + 0x20;
                  lVar20 = lVar20 + 1;
                } while (iVar14 - lVar4 != lVar20);
                uVar19 = 0xffffffff;
                lVar4 = (longlong)iVar14;
              }
              uVar16 = lVar4 + 1U & 0xffffffff;
              iVar18 = iVar7;
            }
            else {
LAB_140cfd62d:
              uVar17 = (ulonglong)(-uVar12 & uVar12);
              uVar11 = uVar17 * 2 + 1;
              lVar4 = 0x3f;
              if (uVar11 != 0) {
                for (; uVar11 >> lVar4 == 0; lVar4 = lVar4 + -1) {
                }
              }
              iVar18 = (iVar10 - ((uint)lVar4 ^ 0x3f)) + 0x3e;
              if (iVar7 <= iVar18) {
                iVar18 = iVar7;
              }
            }
          } while (iVar18 != iVar3);
        }
      }
    }
    else if (iVar3 == 1) {
      lVar4 = 0;
      do {
        *(undefined4 *)(lVar21 + lVar4 * 4) = 0xffffffff;
        lVar4 = lVar4 + 1;
      } while (lVar4 < *(int *)(param_1 + 0x1e0));
    }
LAB_140cfd2e8:
    FUN_140e0ef9a(plVar1,0);
  }
  else {
    FUN_140e0ef9a(plVar1,0);
    *(undefined4 *)(param_1 + 0x1e0) = 1;
    FUN_145c0aee8(plVar1);
  }
  FUN_1448a8284(param_1 + 0x220);
  if (*(int *)(param_1 + 0x240) != 0) {
    puVar5 = *(undefined8 **)(param_1 + 0x238);
    if (puVar5 != (undefined8 *)0x0) {
      (**(code **)*puVar5)(puVar5,0);
      FUN_1446efa72((longlong *)(param_1 + 0x238),0,0,0x10);
      *(undefined4 *)(param_1 + 0x240) = 0;
    }
  }
  return;
}



// FUNCTION 140cfd7bc FUN_140cfd7bc body=1298 status=ok
// SIG undefined FUN_140cfd7bc(void)

void FUN_140cfd7bc(longlong param_1,undefined1 param_2)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)(param_1 + 0xc1c) != 0) {
    puVar1 = (uint *)(param_1 + 0xc18);
    uVar2 = *puVar1;
    if ((((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) &&
        (plVar5 = (longlong *)
                  ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
        plVar5 != (longlong *)0x0)) &&
       (((int)plVar5[2] == *(int *)(param_1 + 0xc1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
       )) {
      if ((*(uint *)(plVar5 + 1) & 0x10200000) == 0) {
        lVar3 = *plVar5;
      }
      else {
        lVar3 = 0;
      }
      local_28 = param_1;
      lVar3 = (**(code **)(*(longlong *)(&DAT_00003a80 + lVar3) + 0x10))(&DAT_00003a80 + lVar3);
      switch(param_2) {
      case 2:
        if (*(longlong *)(param_1 + 0x488) != 0) {
          FUN_14480f766(param_1 + 0x468);
          *(undefined8 *)(param_1 + 0x488) = 0;
        }
        break;
      case 3:
        if (*(longlong *)(param_1 + 0x538) != 0) {
          FUN_14480f766(param_1 + 0x518);
          *(undefined8 *)(param_1 + 0x538) = 0;
        }
        break;
      case 4:
        if (*(longlong *)(param_1 + 0x628) != 0) {
          FUN_14480f766(param_1 + 0x608);
          *(undefined8 *)(param_1 + 0x628) = 0;
        }
        break;
      case 5:
        if (*(longlong *)(param_1 + 0x380) != 0) {
          FUN_14480f766(param_1 + 0x360);
          *(undefined8 *)(param_1 + 0x380) = 0;
        }
        break;
      case 6:
        if (*(longlong *)(param_1 + 0x4a8) != 0) {
          FUN_14480f766(param_1 + 0x490);
          *(undefined8 *)(param_1 + 0x4a8) = 0;
        }
        break;
      case 7:
        if (*(longlong *)(param_1 + 0x600) != 0) {
          FUN_14480f766(param_1 + 0x5e0);
          *(undefined8 *)(param_1 + 0x600) = 0;
        }
        break;
      case 8:
        if (*(longlong *)(param_1 + 0xa10) != 0) {
          FUN_14480f766(param_1 + 0x9f8);
          *(undefined8 *)(param_1 + 0xa10) = 0;
        }
        break;
      case 9:
        if (*(longlong *)(param_1 + 0xa30) != 0) {
          FUN_14480f766(param_1 + 0xa18);
          *(undefined8 *)(param_1 + 0xa30) = 0;
        }
        break;
      case 10:
        if (*(longlong *)(param_1 + 0xa50) != 0) {
          FUN_14480f766(param_1 + 0xa38);
          *(undefined8 *)(param_1 + 0xa50) = 0;
        }
        break;
      case 0xb:
        if (*(longlong *)(param_1 + 0xa70) != 0) {
          FUN_14480f766(param_1 + 0xa58);
          *(undefined8 *)(param_1 + 0xa70) = 0;
        }
        break;
      case 0xc:
        if (*(longlong *)(param_1 + 0x668) != 0) {
          FUN_14480f766(param_1 + 0x650);
          *(undefined8 *)(param_1 + 0x668) = 0;
        }
        break;
      case 0xd:
        if (*(longlong *)(param_1 + 0x688) != 0) {
          FUN_14480f766(param_1 + 0x670);
          *(undefined8 *)(param_1 + 0x688) = 0;
        }
        break;
      case 0x10:
        if (*(longlong *)(param_1 + 0xad0) != 0) {
          FUN_14480f766(param_1 + 0xab8);
          *(undefined8 *)(param_1 + 0xad0) = 0;
        }
        lVar3 = FUN_14479d2ce(puVar1);
        if (*(longlong *)(param_1 + 0x9f0) != 0) {
          FUN_14480f766(lVar3 + 0x77c0);
        }
        *(undefined8 *)(param_1 + 0x9f0) = 0;
        break;
      case 0x11:
        if (*(longlong *)(param_1 + 0xaf0) != 0) {
          FUN_14480f766(param_1 + 0xad8);
          *(undefined8 *)(param_1 + 0xaf0) = 0;
        }
        break;
      case 0x12:
        FUN_140cfdf22(&local_28,param_1 + 0xb28);
        break;
      case 0x14:
        if (*(longlong *)(param_1 + 0xb00) != 0) {
          FUN_14480f766(lVar3 + 0x30);
          *(undefined8 *)(param_1 + 0xb00) = 0;
        }
        break;
      case 0x15:
        FUN_140cfdfb0(param_1);
        break;
      case 0x16:
        if (*(longlong *)(param_1 + 0xb20) != 0) {
          FUN_14480f766(param_1 + 0xb08);
          *(undefined8 *)(param_1 + 0xb20) = 0;
        }
        break;
      case 0x17:
        if (*(longlong *)(param_1 + 0xb50) != 0) {
          FUN_14480f766(param_1 + 0xb38);
          *(undefined8 *)(param_1 + 0xb50) = 0;
        }
        break;
      case 0x18:
        if (*(longlong *)(param_1 + 0xb80) != 0) {
          uVar4 = FUN_14479d2ce(puVar1);
          lVar3 = FUN_140cf8aa6(uVar4);
          if (((lVar3 != 0) &&
              (plVar5 = (longlong *)FUN_1402a1246(lVar3), plVar5 != (longlong *)0x0)) &&
             (lVar3 = (**(code **)(*plVar5 + 0x7e0))(plVar5,&DAT_14cb8dcf0), lVar3 != 0)) {
            uVar4 = FUN_14479d2ce(puVar1);
            FUN_140457ffc(lVar3 + 8,uVar4);
            *(undefined8 *)(param_1 + 0xb80) = 0;
          }
        }
        break;
      case 0x1a:
        FUN_145798418(param_1);
        break;
      case 0x1b:
        uVar4 = FUN_14479d2ce(puVar1);
        uVar4 = FUN_1447210f0(uVar4);
        lVar3 = FUN_14133cf3b(uVar4);
        if (lVar3 != 0) {
          uVar4 = FUN_14479d2ce(puVar1);
          FUN_140457ffc(lVar3 + 400,uVar4);
        }
        break;
      case 0x1c:
        if (*(longlong *)(param_1 + 3000) != 0) {
          FUN_14480f766(param_1 + 0xba0);
          *(undefined8 *)(param_1 + 3000) = 0;
        }
        break;
      case 0x1d:
        if (*(longlong *)(param_1 + 0xbc0) != 0) {
          FUN_14480f766(&DAT_14cbc94b8);
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



// FUNCTION 140cfdcd0 FUN_140cfdcd0 body=370 status=ok
// SIG undefined FUN_140cfdcd0(void)

undefined8 * FUN_140cfdcd0(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 140cfde50 FUN_140cfde50 body=210 status=ok
// SIG undefined FUN_140cfde50(void)

undefined2 * FUN_140cfde50(longlong param_1,undefined2 *param_2,ushort *param_3,longlong param_4)

{
  ushort uVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  char cVar4;
  undefined2 uVar5;
  longlong lVar6;
  undefined2 uVar7;
  
  uVar1 = *param_3;
  uVar7 = 0xffff;
  if ((-1 < (short)uVar1) && ((int)(short)uVar1 < *(int *)(param_1 + 0x10))) {
    lVar6 = *(longlong *)(*(longlong *)(param_1 + 8) + (ulonglong)uVar1 * 8);
    if ((lVar6 != 0) && (*(uint *)(lVar6 + 8) == (uint)param_3[1])) {
      for (; -1 < *(short *)(lVar6 + 4);
          lVar6 = *(longlong *)(*(longlong *)(param_1 + 8) + (longlong)*(short *)(lVar6 + 2) * 8)) {
      }
      uVar5 = 0;
      if ((param_4 == 0) || (lVar6 == 0)) goto LAB_140cfde8b;
      cVar4 = FUN_140cf9e2e(lVar6 + 0x2c,param_4);
      if (cVar4 != '\0') {
        *(undefined8 *)(lVar6 + 0x2c) = 0;
        *(undefined8 *)(lVar6 + 0x40) = 0;
        plVar2 = *(longlong **)(lVar6 + 0x38);
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x28))(plVar2,lVar6 + 0x48);
          puVar3 = *(undefined8 **)(lVar6 + 0x38);
          if (puVar3 != (undefined8 *)0x0) {
            *(undefined8 *)(lVar6 + 0x38) = 0;
            (**(code **)*puVar3)(puVar3,1);
          }
        }
        *(undefined8 *)(lVar6 + 0x48) = 0;
        FUN_1414f506e(param_1,lVar6);
        uVar7 = *(undefined2 *)(lVar6 + 2);
        uVar5 = *(undefined2 *)(lVar6 + 8);
        goto LAB_140cfde8b;
      }
    }
  }
  uVar5 = 0;
LAB_140cfde8b:
  *param_2 = uVar7;
  param_2[1] = uVar5;
  return param_2;
}



// FUNCTION 140cfdf22 FUN_140cfdf22 body=142 status=ok
// SIG undefined FUN_140cfdf22(void)

void FUN_140cfdf22(longlong *param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(*param_1 + 0xc1c);
  if (((iVar1 != 0) && (uVar2 = *(uint *)(*param_1 + 0xc18), -1 < (int)uVar2)) &&
     ((int)uVar2 < DAT_14c9647dc)) {
    plVar3 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar3 != (longlong *)0x0) && ((int)plVar3[2] == iVar1)) {
      if (*param_2 != 0 && (*(uint *)(plVar3 + 1) & 0x10200000) == 0) {
        if ((*(uint *)(plVar3 + 1) & 0x10200000) == 0) {
          lVar4 = *plVar3;
        }
        else {
          lVar4 = 0;
        }
        FUN_14480f766(lVar4 + 0x3f80);
        *param_2 = 0;
      }
    }
  }
  return;
}



// FUNCTION 140cfdfb0 FUN_140cfdfb0 body=395 status=ok
// SIG undefined FUN_140cfdfb0(void)

void FUN_140cfdfb0(longlong param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  bool bVar6;
  
  if ((((*(int *)(param_1 + 0xc1c) != 0) && (uVar1 = *(uint *)(param_1 + 0xc18), -1 < (int)uVar1))
      && ((int)uVar1 < DAT_14c9647dc)) &&
     (((plVar4 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       plVar4 != (longlong *)0x0 && ((int)plVar4[2] == *(int *)(param_1 + 0xc1c))) &&
      (((*(uint *)(plVar4 + 1) & 0x10200000) == 0 && (*plVar4 != 0)))))) {
    uVar1 = *(uint *)(*plVar4 + 0xc);
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar5 = 0;
    }
    iVar2 = *(int *)(lVar5 + 0x10);
    if (iVar2 == 0) {
      LOCK();
      iVar2 = DAT_14c964868 + 1;
      UNLOCK();
      iVar3 = DAT_14c964868 + 1;
      bVar6 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar2;
      if (bVar6) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar3);
      }
      LOCK();
      iVar2 = *(int *)(lVar5 + 0x10);
      bVar6 = iVar2 == 0;
      if (bVar6) {
        *(int *)(lVar5 + 0x10) = iVar3;
        iVar2 = 0;
      }
      UNLOCK();
      if (bVar6) {
        iVar2 = iVar3;
      }
      if (iVar2 == 0) {
        return;
      }
    }
    if (((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) &&
       ((plVar4 = (longlong *)
                  ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
        plVar4 != (longlong *)0x0 &&
        ((((int)plVar4[2] == iVar2 && ((*(uint *)(plVar4 + 1) & 0x10200000) == 0)) &&
         (*(longlong *)(param_1 + 0xb58) != 0)))))) {
      if ((*(uint *)(plVar4 + 1) & 0x10200000) == 0) {
        lVar5 = *plVar4;
      }
      else {
        lVar5 = 0;
      }
      lVar5 = (**(code **)(*(longlong *)(lVar5 + 0x3a28) + 0x10))(lVar5 + 0x3a28);
      if (*(longlong *)(param_1 + 0xb58) != 0) {
        FUN_14480f766(lVar5 + 0xa8);
      }
      *(undefined8 *)(param_1 + 0xb58) = 0;
    }
  }
  return;
}



// FUNCTION 140cfe13c FUN_140cfe13c body=395 status=ok
// SIG undefined FUN_140cfe13c(void)

undefined8 FUN_140cfe13c(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  int *piVar8;
  longlong *plVar9;
  ulonglong uVar10;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar5 = 0;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar9 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar9 = param_1 + 7;
    }
    uVar10 = (longlong)(int)((uint)((ulonglong)param_2 >> 0x20) ^ (uint)param_2) &
             (longlong)(int)param_1[9] - 1U;
    lVar3 = (longlong)*(int *)((longlong)plVar9 + uVar10 * 4);
    if (lVar3 != -1) {
      lVar4 = *param_1;
      lVar3 = lVar3 * 0x260;
      local_50 = *(undefined8 *)(lVar4 + lVar3);
      local_58 = param_2;
      cVar2 = FUN_14472d054();
      if (cVar2 == '\0') {
        lVar3 = lVar4 + lVar3;
        do {
          lVar4 = lVar3;
          lVar3 = (longlong)*(int *)(lVar4 + 0x250);
          if (lVar3 == -1) goto LAB_140cfe22b;
          lVar7 = *param_1;
          lVar3 = lVar3 * 0x260;
          local_50 = *(undefined8 *)(lVar7 + lVar3);
          local_58 = param_2;
          cVar2 = FUN_14472d054(&local_50,&local_58);
          lVar3 = lVar7 + lVar3;
        } while (cVar2 == '\0');
        piVar8 = (int *)(lVar4 + 0x250);
      }
      else {
        piVar8 = (int *)((longlong)plVar9 + uVar10 * 4);
      }
      iVar1 = *piVar8;
      lVar3 = *param_1;
      lVar4 = (longlong)iVar1 * 0x260;
      plVar9 = param_1 + 7;
      if ((longlong *)param_1[8] != (longlong *)0x0) {
        plVar9 = (longlong *)param_1[8];
      }
      lVar7 = (longlong)*(int *)(lVar3 + 0x254 + lVar4);
      iVar6 = *(int *)((longlong)plVar9 + lVar7 * 4);
      if (iVar6 == iVar1) {
        piVar8 = (int *)((longlong)plVar9 + lVar7 * 4);
      }
      else {
        do {
          piVar8 = (int *)(lVar3 + (longlong)iVar6 * 0x260 + 0x250);
          iVar6 = *piVar8;
        } while (iVar6 != iVar1);
      }
      *piVar8 = *(int *)(lVar3 + lVar4 + 0x250);
      FUN_1406fcf4a(*param_1 + lVar4 + 0x10);
      FUN_140cfe2c8(param_1,iVar1);
      uVar5 = 1;
    }
  }
LAB_140cfe22b:
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 140cfe2c8 FUN_140cfe2c8 body=122 status=ok
// SIG undefined FUN_140cfe2c8(void)

void FUN_140cfe2c8(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x260) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x260) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x260 + 4) = uVar5;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar6 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar6 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 140cfe342 FUN_140cfe342 body=5060 status=ok
// SIG undefined FUN_140cfe342(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140cfe342(longlong param_1,ulonglong *param_2,uint param_3)

{
  float *pfVar1;
  longlong lVar2;
  uint uVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  ulonglong uVar10;
  char cVar11;
  uint uVar12;
  int iVar13;
  longlong lVar14;
  longlong *plVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  undefined4 *puVar18;
  float *pfVar19;
  longlong lVar20;
  longlong lVar21;
  ulonglong *puVar22;
  ulonglong uVar23;
  int iVar24;
  ulonglong uVar25;
  double *pdVar26;
  undefined8 *puVar27;
  void *pvVar28;
  float fVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined1 auStack_658 [32];
  undefined4 local_638;
  code **local_630;
  undefined1 *local_628;
  undefined8 local_620;
  wchar_t *local_618;
  undefined1 *local_610;
  undefined1 *local_608;
  code **local_600;
  undefined1 *local_5f8;
  code *local_5f0;
  longlong *local_5e0;
  undefined4 local_5d8;
  undefined4 uStack_5d4;
  undefined4 uStack_5d0;
  undefined4 uStack_5cc;
  ulonglong local_5c8;
  code *local_598;
  ulonglong uStack_590;
  ulonglong local_588;
  undefined8 local_578;
  ulonglong uStack_570;
  ulonglong local_568;
  double dStack_560;
  double local_558;
  double dStack_550;
  undefined8 local_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 local_530;
  undefined1 local_528;
  undefined4 local_4d4;
  undefined4 local_4a8;
  undefined8 local_478;
  undefined8 uStack_470;
  ulonglong local_468;
  double local_460;
  double local_458;
  double local_450;
  undefined1 local_440 [4];
  char local_43c;
  code *local_438;
  ulonglong uStack_430;
  undefined8 local_428;
  undefined8 uStack_420;
  longlong local_418;
  undefined8 uStack_410;
  undefined8 local_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  longlong local_3e8;
  undefined8 local_3e0;
  longlong local_3c8;
  undefined8 local_3c0;
  undefined1 local_3b8 [16];
  undefined1 local_3a8 [16];
  undefined8 local_398;
  undefined8 uStack_390;
  ulonglong local_388;
  undefined8 uStack_380;
  undefined8 local_358;
  undefined8 uStack_350;
  undefined8 local_348;
  float local_340;
  undefined8 local_33c;
  undefined4 local_334;
  undefined8 local_330;
  undefined4 local_328;
  undefined8 local_324;
  undefined4 local_31c;
  undefined8 local_318;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined4 uStack_308;
  undefined8 uStack_304;
  ulonglong local_2f8;
  ulonglong local_2f0;
  ulonglong uStack_2e8;
  void *local_2e0;
  uint local_2d8;
  int local_2d4;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined8 local_2b8 [12];
  char local_258;
  ulonglong local_248;
  uint uStack_240;
  int iStack_23c;
  undefined1 uStack_238;
  undefined8 uStack_237;
  undefined1 local_228 [216];
  undefined1 local_150 [40];
  undefined4 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined **local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_658;
  uVar17 = 0;
  if (((int)param_3 < 0) || ((int)(uint)param_2[2] <= (int)param_3)) goto LAB_140cfef65;
  lVar14 = (**(code **)(*(longlong *)(param_1 + 0x20) + 0x48))(param_1 + 0x20);
  if ((lVar14 != 0) && (plVar15 = (longlong *)FUN_14007a5e6(lVar14), plVar15 != (longlong *)0x0)) {
    lVar20 = (longlong)*(int *)(param_2[1] + 0x18 + (ulonglong)param_3 * 0x28);
    if (lVar20 != 0) {
      pfVar1 = (float *)(param_2[1] + (ulonglong)param_3 * 0x28);
      lVar20 = lVar20 * 0x300;
      lVar2 = *(longlong *)(pfVar1 + 4) + lVar20;
      lVar20 = *(longlong *)(pfVar1 + 4) + lVar20;
      puVar16 = (undefined8 *)(lVar20 + -0x300);
      puVar27 = (undefined8 *)local_3b8;
      for (lVar21 = 0xf; lVar21 != 0; lVar21 = lVar21 + -1) {
        *puVar27 = *puVar16;
        puVar16 = puVar16 + 1;
        puVar27 = puVar27 + 1;
      }
      local_340 = *(float *)(lVar20 + -0x288);
      local_334 = *(undefined4 *)(lVar20 + -0x27c);
      local_33c = *(undefined8 *)(lVar20 + -0x284);
      local_328 = *(undefined4 *)(lVar20 + -0x270);
      local_330 = *(undefined8 *)(lVar20 + -0x278);
      local_31c = *(undefined4 *)(lVar20 + -0x264);
      local_324 = *(undefined8 *)(lVar20 + -0x26c);
      local_318 = *(undefined8 *)(lVar20 + -0x260);
      uStack_310 = (undefined4)*(undefined8 *)(lVar20 + -600);
      uStack_304 = *(undefined8 *)(lVar20 + -0x24c);
      uStack_30c = (undefined4)*(undefined8 *)(lVar20 + -0x254);
      uStack_308 = (undefined4)((ulonglong)*(undefined8 *)(lVar20 + -0x254) >> 0x20);
      local_2f8 = *(ulonglong *)(lVar20 + -0x240);
      local_2f0 = *(ulonglong *)(lVar20 + -0x238);
      uStack_2e8 = *(ulonglong *)(lVar20 + -0x230);
      local_2e0 = *(void **)(lVar20 + -0x228);
      *(undefined8 *)(lVar20 + -0x228) = 0;
      local_2d8 = *(uint *)(lVar20 + -0x220);
      local_2d4 = *(int *)(lVar20 + -0x21c);
      *(undefined8 *)(lVar20 + -0x220) = 0;
      local_2c0 = *(undefined8 *)(lVar20 + -0x208);
      local_2d0 = *(undefined8 *)(lVar20 + -0x218);
      uStack_2c8 = *(undefined8 *)(lVar20 + -0x210);
      local_258 = *(char *)(lVar20 + -0x1a0);
      if (local_258 == '\x01') {
        puVar16 = (undefined8 *)(lVar2 + -0x200);
        puVar27 = local_2b8;
        for (lVar20 = 0xc; lVar20 != 0; lVar20 = lVar20 + -1) {
          *puVar27 = *puVar16;
          puVar16 = puVar16 + 1;
          puVar27 = puVar27 + 1;
        }
      }
      uStack_237 = *(undefined8 *)(lVar2 + -0x17f);
      uStack_238 = (undefined1)((ulonglong)*(undefined8 *)(lVar2 + -0x187) >> 0x38);
      local_248 = *(ulonglong *)(lVar2 + -400);
      uStack_240 = *(uint *)(lVar2 + -0x188);
      iStack_23c = *(int *)(lVar2 + -0x184);
      local_5e0 = plVar15;
      FUN_140d8ebf0(local_228,lVar2 + -0x170);
      local_150[0] = 0;
      FUN_14031eb60(local_150,lVar2 + -0x98);
      local_128 = *(undefined4 *)(lVar2 + -0x70);
      *(undefined4 *)(lVar2 + -0x70) = 0;
      local_120 = *(undefined8 *)(lVar2 + -0x68);
      uStack_118 = *(undefined8 *)(lVar2 + -0x60);
      local_110 = *(undefined8 *)(lVar2 + -0x58);
      local_108 = *(undefined8 *)(lVar2 + -0x50);
      *(undefined8 *)(lVar2 + -0x50) = 0;
      local_100 = *(undefined4 *)(lVar2 + -0x48);
      local_fc = *(undefined4 *)(lVar2 + -0x44);
      *(undefined8 *)(lVar2 + -0x48) = 0;
      local_f8 = *(undefined8 *)(lVar2 + -0x40);
      *(undefined8 *)(lVar2 + -0x40) = 0;
      local_f0 = *(undefined4 *)(lVar2 + -0x38);
      local_ec = *(undefined4 *)(lVar2 + -0x34);
      *(undefined8 *)(lVar2 + -0x38) = 0;
      local_e8 = (undefined **)&DAT_14a171d50;
      local_d8 = 0;
      uStack_d0 = 0;
      local_e0 = *(undefined8 *)(lVar2 + -0x28);
      FUN_1406022fe(&local_d8);
      local_e8 = &PTR_FUN_14b1828b0;
      local_c8 = *(undefined8 *)(lVar2 + -0x10);
      *(undefined8 *)(lVar2 + -0x10) = 0;
      local_c0 = *(undefined4 *)(lVar2 + -8);
      local_bc = *(undefined4 *)(lVar2 + -4);
      *(undefined8 *)(lVar2 + -8) = 0;
      fVar29 = pfVar1[6];
      lVar20 = *(longlong *)(pfVar1 + 4);
      pvVar28 = (void *)(lVar20 + (longlong)(int)fVar29 * 0x300 + -0x300);
      FUN_140771752(pvVar28);
      if ((int)pfVar1[6] - (int)fVar29 != 0) {
        memmove(pvVar28,(void *)(lVar20 + (longlong)(int)fVar29 * 0x300),
                (longlong)((int)pfVar1[6] - (int)fVar29) * 0x300);
        fVar29 = pfVar1[6];
      }
      pfVar1[6] = (float)((int)fVar29 + -1);
      FUN_141897cb8(pfVar1 + 4);
      plVar15 = (longlong *)FUN_14136441e(local_3b8);
      if (*plVar15 != 0) {
        if ((longlong)(int)plVar15[3] != 0) {
          lVar20 = 0;
          do {
            if (*(longlong *)(plVar15[2] + lVar20) == 0) goto LAB_140cfef27;
            lVar20 = lVar20 + 8;
          } while ((longlong)(int)plVar15[3] * 8 != lVar20);
        }
        uVar23 = *param_2;
        uStack_240 = (uint)uVar23;
        uVar3 = uStack_240;
        iStack_23c = (int)(uVar23 >> 0x20);
        iVar24 = iStack_23c;
        uVar25 = param_2[0x3a];
        if (uVar25 == 0) {
          uVar25 = param_2[0x38];
        }
        if (uVar25 == 0) {
          if (((uVar23 >> 0x20 == 0) || ((int)uStack_240 < 0)) || (DAT_14c9647dc <= (int)uStack_240)
             ) {
            puVar16 = &DAT_14c846480;
            if (_DAT_000001c8 != 0) {
              puVar16 = (undefined8 *)(_DAT_000001c8 + 0x240);
            }
            puVar27 = (undefined8 *)local_3b8;
            lVar20 = 0xc;
LAB_140cff415:
            for (; lVar20 != 0; lVar20 = lVar20 + -1) {
              *puVar27 = *puVar16;
              puVar16 = puVar16 + 1;
              puVar27 = puVar27 + 1;
            }
          }
          else {
            plVar15 = (longlong *)
                      ((ulonglong)((uStack_240 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)((uint)(uVar23 >> 0xd) & 0x3fff8)));
            if (((plVar15 == (longlong *)0x0) || ((int)plVar15[2] != iStack_23c)) ||
               ((*(uint *)(plVar15 + 1) & 0x10200000) != 0)) {
              lVar20 = 0;
            }
            else {
              lVar20 = *plVar15;
            }
            puVar16 = &DAT_14c846480;
            if (*(longlong *)(lVar20 + 0x1c8) != 0) {
              puVar16 = (undefined8 *)(*(longlong *)(lVar20 + 0x1c8) + 0x240);
            }
            puVar27 = (undefined8 *)local_3b8;
            for (lVar20 = 0xc; lVar20 != 0; lVar20 = lVar20 + -1) {
              *puVar27 = *puVar16;
              puVar16 = puVar16 + 1;
              puVar27 = puVar27 + 1;
            }
            plVar15 = (longlong *)
                      ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0xd & 0x3fff8)));
            if (((plVar15 != (longlong *)0x0) && ((int)plVar15[2] == iVar24)) &&
               (((*(uint *)(plVar15 + 1) & 0x10200000) == 0 && (lVar20 = *plVar15, lVar20 != 0)))) {
              if (DAT_14cacf818 == 0) {
                local_600 = (code **)&local_578;
                local_578 = FUN_141030f22;
                local_5f0 = FUN_14081d0ea;
                local_5f8 = &LAB_1463b216c;
                local_608 = &LAB_1479977e3;
                local_610 = &LAB_1463b2171;
                local_618 = L"Game";
                local_620 = 0;
                local_628 = (undefined1 *)CONCAT44(local_628._4_4_,0x10000004);
                local_630 = (code **)CONCAT44(local_630._4_4_,0x10);
                local_638 = 0x750;
                FUN_14081cfa3(L"/Script/Engine",L"Character",&DAT_14cacf818,FUN_1463b214a);
              }
              if (((*(int *)(DAT_14cacf818 + 0x38) <= *(int *)(*(longlong *)(lVar20 + 0x10) + 0x38))
                  && (*(longlong *)
                       (*(longlong *)(*(longlong *)(lVar20 + 0x10) + 0x30) +
                       (longlong)*(int *)(DAT_14cacf818 + 0x38) * 8) == DAT_14cacf818 + 0x30)) &&
                 (plVar15 = *(longlong **)(lVar20 + 0x428), plVar15 != (longlong *)0x0)) {
                uVar23 = param_2[0x39];
                uVar25 = uVar23;
                if (uVar23 == 0) {
                  fVar29 = pfVar1[8];
                  uVar3 = (uint)param_2[0x37];
                  if ((int)fVar29 < (int)uVar3 && -1 < (int)fVar29) {
                    uVar23 = param_2[0x36];
                    local_248 = *(ulonglong *)(uVar23 + (ulonglong)(uint)fVar29 * 8);
                    lVar20 = (longlong)(int)pfVar1[8];
                  }
                  else {
                    if (uVar3 == 0) goto LAB_140cfeb88;
                    if ((int)uVar3 < 1) {
                      lVar20 = 0;
                    }
                    else {
                      uVar12 = rand();
                      iVar13 = (int)((float)(int)uVar3 * ((float)(uVar12 & 0x7fff) / 32767.0));
                      iVar24 = uVar3 - 1;
                      if (iVar13 < (int)(uVar3 - 1)) {
                        iVar24 = iVar13;
                      }
                      lVar20 = (longlong)iVar24;
                    }
                    uVar23 = param_2[0x36];
                    local_248 = *(ulonglong *)(uVar23 + lVar20 * 8);
                  }
                  uVar23 = *(ulonglong *)(uVar23 + lVar20 * 8);
                  uVar25 = local_248;
                }
                local_248 = uVar25;
                (**(code **)(*plVar15 + 0x4a8))(plVar15,&local_578,uVar23,0);
                lVar20 = 0xc;
                puVar16 = &local_578;
                puVar27 = (undefined8 *)local_3b8;
                goto LAB_140cff415;
              }
            }
          }
        }
        else {
          local_408 = 0;
          uStack_400 = 0;
          local_418 = 0;
          uStack_410 = 0;
          local_428 = 0;
          uStack_420 = 0;
          local_438 = (code *)0x0;
          uStack_430 = 0;
          if (((uVar23 >> 0x20 == 0) || ((int)uStack_240 < 0)) ||
             (((DAT_14c9647dc <= (int)uStack_240 ||
               ((puVar22 = (ulonglong *)
                           ((ulonglong)((uStack_240 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uStack_240 >> 0xd & 0x3fff8))),
                puVar22 == (ulonglong *)0x0 || ((int)puVar22[2] != iStack_23c)))) ||
              ((puVar22[1] & 0x10200000) != 0)))) {
            local_438 = (code *)0x0;
LAB_140cfe8fb:
            puVar16 = &DAT_14c8464e0;
            uVar33 = (undefined4)DAT_14c8464f0;
            uVar30 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
          }
          else {
            pcVar4 = (code *)*puVar22;
            if ((pcVar4 == (code *)0x0) || (DAT_14c950c29 == '\0')) {
              local_438 = pcVar4;
              if (pcVar4 == (code *)0x0) goto LAB_140cfe8fb;
            }
            else {
              FUN_1456cec3c(pcVar4);
            }
            lVar20 = *(longlong *)(pcVar4 + 0x1c8);
            local_438 = pcVar4;
            if (lVar20 == 0) goto LAB_140cfe8fb;
            uVar33 = (undefined4)*(undefined8 *)(lVar20 + 0x270);
            uVar30 = (undefined4)((ulonglong)*(undefined8 *)(lVar20 + 0x270) >> 0x20);
            puVar16 = (undefined8 *)(lVar20 + 0x260);
          }
          local_428 = *puVar16;
          uStack_420 = puVar16[1];
          local_418 = CONCAT44(uVar30,uVar33);
          uVar23 = param_2[0x39];
          uVar10 = uVar23;
          if (uVar23 == 0) {
            uVar3 = (uint)param_2[0x37];
            if (uVar3 == 0) {
              uVar23 = uStack_430;
              uVar10 = local_248;
              if (*(ulonglong *)(uVar25 + 0x4c) != 0) {
                uVar23 = *(ulonglong *)(uVar25 + 0x4c);
                uVar10 = *(ulonglong *)(uVar25 + 0x4c);
              }
            }
            else {
              fVar29 = pfVar1[8];
              if ((int)fVar29 < (int)uVar3 && -1 < (int)fVar29) {
                uVar23 = param_2[0x36];
                local_248 = *(ulonglong *)(uVar23 + (ulonglong)(uint)fVar29 * 8);
                lVar20 = (longlong)(int)pfVar1[8];
              }
              else {
                if ((int)uVar3 < 1) {
                  lVar20 = 0;
                }
                else {
                  uVar12 = rand();
                  iVar13 = (int)((float)(int)uVar3 * ((float)(uVar12 & 0x7fff) / 32767.0));
                  iVar24 = uVar3 - 1;
                  if (iVar13 < (int)(uVar3 - 1)) {
                    iVar24 = iVar13;
                  }
                  lVar20 = (longlong)iVar24;
                }
                uVar23 = param_2[0x36];
                local_248 = *(ulonglong *)(uVar23 + lVar20 * 8);
              }
              uVar23 = *(ulonglong *)(uVar23 + lVar20 * 8);
              uVar10 = local_248;
            }
          }
          local_248 = uVar10;
          uStack_430 = uVar23;
          local_558 = 0.0;
          dStack_550 = 0.0;
          local_568 = 0;
          dStack_560 = 0.0;
          local_578 = (code *)0x0;
          uStack_570 = 0;
          local_548 = CONCAT71(local_548._1_7_,1);
          uStack_540 = 0;
          uStack_538 = 0;
          local_530 = 0;
          local_528 = 1;
          FUN_141035d0a(uVar25,&local_438,&local_578);
          local_398 = local_578;
          uStack_390 = uStack_570;
          local_388 = local_568;
          uStack_380 = 0;
          uVar31 = SUB84(dStack_560,0);
          uVar32 = (undefined4)((ulonglong)dStack_560 >> 0x20);
          uVar33 = SUB84(local_558,0);
          uVar30 = (undefined4)((ulonglong)local_558 >> 0x20);
          dVar5 = 0.0;
          if ((((dStack_560 != 0.0) || (NAN(dStack_560))) || (local_558 != 0.0)) || (NAN(local_558))
             ) {
            dVar5 = atan2(local_558,dStack_560);
            dVar5 = dVar5 * 0.5;
            uVar31 = SUB84(dStack_560,0);
            uVar32 = (undefined4)((ulonglong)dStack_560 >> 0x20);
            uVar33 = SUB84(local_558,0);
            uVar30 = (undefined4)((ulonglong)local_558 >> 0x20);
          }
          dVar9 = SQRT((double)CONCAT44(uVar32,uVar31) * (double)CONCAT44(uVar32,uVar31) +
                       (double)CONCAT44(uVar30,uVar33) * (double)CONCAT44(uVar30,uVar33));
          dVar6 = 0.0;
          if (((dStack_550 != 0.0) || (NAN(dStack_550))) || ((dVar9 != 0.0 || (NAN(dVar9))))) {
            dVar6 = atan2(dStack_550,dVar9);
            dVar6 = dVar6 * 0.5;
          }
          dVar9 = sin(dVar6);
          dVar6 = cos(dVar6);
          dVar7 = sin(dVar5);
          dVar5 = cos(dVar5);
          local_3b8._8_4_ = SUB84(-dVar9 * dVar5,0);
          local_3b8._0_8_ = dVar9 * dVar7;
          local_3b8._12_4_ = (int)((ulonglong)(-dVar9 * dVar5) >> 0x20);
          local_3a8._8_4_ = SUB84(dVar6 * dVar5,0);
          local_3a8._0_8_ = dVar7 * dVar6;
          local_3a8._12_4_ = (int)((ulonglong)(dVar6 * dVar5) >> 0x20);
          local_358 = uStack_540;
          uStack_350 = uStack_538;
          local_348 = local_530;
          local_340 = (float)SQRT(dStack_550 * dStack_550 +
                                  dStack_560 * dStack_560 + local_558 * local_558);
        }
LAB_140cfeb88:
        if ((((*(char *)((longlong)param_2 + 0x151) == '\x01') &&
             (*(char *)((longlong)param_2 + 0x152) == '\0')) &&
            ((*(uint *)((longlong)param_2 + 4) != 0 &&
             (((uVar3 = (uint)*param_2, -1 < (int)uVar3 && ((int)uVar3 < DAT_14c9647dc)) &&
              (plVar15 = (longlong *)
                         ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
              plVar15 != (longlong *)0x0)))))) &&
           ((((*(uint *)(plVar15 + 2) == *(uint *)((longlong)param_2 + 4) &&
              ((*(uint *)(plVar15 + 1) & 0x10200000) == 0)) && (*plVar15 != 0)) && (local_248 != 0))
           )) {
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14cb84628) && (FUN_144b3d300(&DAT_14cb84628), DAT_14cb84628 == -1)) {
            FUN_1446f470e(&DAT_14cb84620,L"ValidateLootSpawn",1);
            _Init_thread_footer(&DAT_14cb84628);
          }
          uVar25 = local_388;
          lVar20 = 0;
          local_418._1_7_ = (uint7)((ulonglong)local_418 >> 8) & 0xffffff;
          uStack_430 = 0;
          uStack_410 = CONCAT62(uStack_410._2_6_,0x101);
          local_3e8 = 0;
          local_3e0 = 0x800000000;
          local_3c8 = 0;
          local_3c0 = 0x400000000;
          uVar23 = (ulonglong)uStack_420 >> 8;
          local_438 = DAT_14cb84620;
          local_418 = (ulonglong)local_418._1_7_ << 8;
          local_428 = 0x100000000000100;
          uStack_420 = CONCAT71((uint7)uVar23 & 0xffffff,1);
          if (*(uint *)((longlong)param_2 + 4) != 0) {
            uVar3 = (uint)*param_2;
            lVar20 = 0;
            if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) {
              plVar15 = (longlong *)
                        ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
              if ((plVar15 == (longlong *)0x0) ||
                 ((*(uint *)(plVar15 + 2) != *(uint *)((longlong)param_2 + 4) ||
                  ((*(uint *)(plVar15 + 1) & 0x10200000) != 0)))) {
                lVar20 = 0;
              }
              else {
                lVar20 = *plVar15;
              }
            }
          }
          lVar20 = *(longlong *)(lVar20 + 0x1c8);
          if (lVar20 == 0) {
            local_478 = DAT_14c8464e0;
            uStack_470 = DAT_14c8464e8;
          }
          else {
            local_478 = *(undefined8 *)(lVar20 + 0x260);
            uStack_470 = *(undefined8 *)(lVar20 + 0x268);
          }
          local_468 = local_388;
          memset(&local_578,0,0x100);
          local_4a8 = 0xffffffff;
          local_578 = (code *)CONCAT44(0x3f800000,(undefined4)local_578);
          local_4d4 = 0xffffffff;
          local_5d8 = (undefined4)local_398;
          uStack_5d4 = local_398._4_4_;
          uStack_5d0 = (undefined4)uStack_390;
          uStack_5cc = uStack_390._4_4_;
          local_5c8 = uVar25;
          local_628 = &DAT_14cad0f10;
          local_630 = &local_438;
          local_638 = 0xe;
          cVar11 = FUN_1400b50cc(lVar14,&local_578,&local_478);
          if (cVar11 != '\0') {
            *(undefined1 *)((longlong)param_2 + 0x152) = 1;
            *(uint *)(param_2 + 0x2b) = (uint)local_478;
            *(uint *)((longlong)param_2 + 0x15c) = local_478._4_4_;
            *(uint *)(param_2 + 0x2c) = (uint)uStack_470;
            *(uint *)((longlong)param_2 + 0x164) = uStack_470._4_4_;
            param_2[0x2d] = local_468;
          }
          if (local_3c8 != 0) {
            FUN_1400020a8();
          }
          if (local_3e8 != 0) {
            FUN_1400020a8();
          }
        }
        if (*(char *)((longlong)param_2 + 0x152) == '\x01') {
          local_398 = (code *)param_2[0x2b];
          uStack_390 = param_2[0x2c];
          local_388 = param_2[0x2d];
          uStack_380 = 0;
          local_248 = 0;
        }
        uVar3 = (uint)param_2[0x46];
        if (uVar3 != 0) {
          if ((int)uVar3 < 1) {
            lVar20 = 0;
          }
          else {
            uVar12 = rand();
            iVar13 = (int)((float)(int)uVar3 * ((float)(uVar12 & 0x7fff) / 32767.0));
            iVar24 = uVar3 - 1;
            if (iVar13 < (int)(uVar3 - 1)) {
              iVar24 = iVar13;
            }
            lVar20 = (longlong)iVar24;
          }
          pdVar26 = (double *)(lVar20 * 0x18 + param_2[0x45]);
          local_598 = local_398;
          uStack_590 = uStack_390;
          local_588 = local_388;
          fVar29 = 0.0;
          uVar33 = 0;
          if ((*(longlong *)(lVar14 + 0x30) != 0) &&
             (plVar15 = *(longlong **)(*(longlong *)(lVar14 + 0x30) + 0x2b0),
             plVar15 != (longlong *)0x0)) {
            if (*(code **)(*plVar15 + 0x660) == FUN_1449fb17e) {
              if ((*(byte *)((longlong)plVar15 + 0x39e) & 1) == 0) {
                if ((*(byte *)((longlong)plVar15 + 0x39e) & 2) == 0) {
                  if (DAT_14caf84d0 == 0) {
                    local_600 = (code **)&local_578;
                    local_578 = FUN_1449e2820;
                    local_5f0 = FUN_14081d0ea;
                    local_5f8 = &LAB_145a62952;
                    local_608 = &LAB_147c8cd45;
                    local_610 = &LAB_1461468ae;
                    local_618 = L"Engine";
                    local_620 = 0;
                    local_628 = (undefined1 *)CONCAT44(local_628._4_4_,0x10000006);
                    local_630 = (code **)CONCAT44(local_630._4_4_,8);
                    local_638 = 0x218;
                    FUN_14081cfa3(L"/Script/Engine",L"PhysicsSettings",&DAT_14caf84d0,FUN_1463f75b4)
                    ;
                  }
                  lVar2 = DAT_14caf84d0;
                  lVar20 = *(longlong *)(DAT_14caf84d0 + 0x110);
                  if (lVar20 == 0) {
                    FUN_140aa6c08(DAT_14caf84d0);
                    lVar20 = *(longlong *)(lVar2 + 0x110);
                  }
                  puVar18 = (undefined4 *)(lVar20 + 0x38);
                }
                else {
                  puVar18 = (undefined4 *)((longlong)plVar15 + 0x41c);
                }
                uVar33 = *puVar18;
                *(undefined4 *)(plVar15 + 0x83) = uVar33;
              }
              else {
                uVar33 = (undefined4)plVar15[0x83];
              }
            }
            else {
              uVar33 = (**(code **)(*plVar15 + 0x660))(plVar15);
            }
          }
          FUN_1470e7224(&local_5d8,&local_598,pdVar26,uVar33);
          uStack_538 = 0;
          local_530 = 0;
          local_548 = 0;
          uStack_540 = 0;
          local_568 = local_588;
          local_578 = local_598;
          uStack_570 = uStack_590;
          if ((*(longlong *)(lVar14 + 0x30) != 0) &&
             (plVar15 = *(longlong **)(*(longlong *)(lVar14 + 0x30) + 0x2b0),
             plVar15 != (longlong *)0x0)) {
            if (*(code **)(*plVar15 + 0x660) == FUN_1449fb17e) {
              if ((*(byte *)((longlong)plVar15 + 0x39e) & 1) == 0) {
                if ((*(byte *)((longlong)plVar15 + 0x39e) & 2) == 0) {
                  if (DAT_14caf84d0 == 0) {
                    local_600 = &local_438;
                    local_438 = FUN_1449e2820;
                    local_5f0 = FUN_14081d0ea;
                    local_5f8 = &LAB_145a62952;
                    local_608 = &LAB_147c8cd45;
                    local_610 = &LAB_1461468ae;
                    local_618 = L"Engine";
                    local_620 = 0;
                    local_628 = (undefined1 *)CONCAT44(local_628._4_4_,0x10000006);
                    local_630 = (code **)CONCAT44(local_630._4_4_,8);
                    local_638 = 0x218;
                    FUN_14081cfa3(L"/Script/Engine",L"PhysicsSettings",&DAT_14caf84d0,FUN_1463f75b4)
                    ;
                  }
                  lVar20 = DAT_14caf84d0;
                  lVar14 = *(longlong *)(DAT_14caf84d0 + 0x110);
                  if (lVar14 == 0) {
                    FUN_140aa6c08(DAT_14caf84d0);
                    lVar14 = *(longlong *)(lVar20 + 0x110);
                  }
                  pfVar19 = (float *)(lVar14 + 0x38);
                }
                else {
                  pfVar19 = (float *)((longlong)plVar15 + 0x41c);
                }
                fVar29 = *pfVar19;
                *(float *)(plVar15 + 0x83) = fVar29;
              }
              else {
                fVar29 = *(float *)(plVar15 + 0x83);
              }
            }
            else {
              fVar29 = (float)(**(code **)(*plVar15 + 0x660))(plVar15);
            }
          }
          local_530 = CONCAT44(local_530._4_4_,fVar29 * 1.2);
          dStack_560 = *pdVar26;
          local_558 = pdVar26[1];
          dStack_550 = pdVar26[2];
          local_438 = (code *)((ulonglong)local_438 & 0xffffff0000000000);
          uStack_430 = 0x3f4ccccd00000000;
          local_428 = CONCAT35(local_428._5_3_,0xc4750000);
          uStack_420 = 0;
          local_418 = 0;
          uStack_410 = 0;
          local_408 = 0;
          uStack_400 = 0;
          uStack_3f8 = 0;
          FUN_14125d732(&local_438,&local_478);
          local_358 = DAT_14c8464e0;
          uStack_350 = DAT_14c8464e8;
          local_348 = DAT_14c8464f0;
          dVar5 = 0.0;
          if ((((local_460 != 0.0) || (NAN(local_460))) || (local_458 != 0.0)) || (NAN(local_458)))
          {
            dVar5 = atan2(local_458,local_460);
            dVar5 = dVar5 * 0.5;
          }
          dVar7 = local_460 * local_460 + local_458 * local_458;
          dVar9 = SQRT(dVar7);
          dVar6 = 0.0;
          if (((local_450 != 0.0) || (NAN(local_450))) || ((dVar9 != 0.0 || (NAN(dVar9))))) {
            dVar6 = atan2(local_450,dVar9);
            dVar6 = dVar6 * 0.5;
          }
          dVar9 = sin(dVar6);
          dVar6 = cos(dVar6);
          dVar8 = sin(dVar5);
          dVar5 = cos(dVar5);
          local_3b8._8_4_ = SUB84(-dVar9 * dVar5,0);
          local_3b8._0_8_ = dVar9 * dVar8;
          local_3b8._12_4_ = (int)((ulonglong)(-dVar9 * dVar5) >> 0x20);
          local_3a8._8_4_ = SUB84(dVar6 * dVar5,0);
          local_3a8._0_8_ = dVar8 * dVar6;
          local_3a8._12_4_ = (int)((ulonglong)(dVar6 * dVar5) >> 0x20);
          local_340 = (float)SQRT(local_450 * local_450 + dVar7);
        }
        local_2f8 = param_2[0x3c];
        local_2f0 = param_2[0x3d];
        uStack_2e8 = param_2[0x3e];
        if (&local_2e0 != (void **)(param_2 + 0x3f)) {
          uVar3 = (uint)param_2[0x40];
          pvVar28 = (void *)param_2[0x3f];
          local_2d8 = uVar3;
          if (uVar3 == 0 && local_2d4 == 0) {
            local_2d4 = 0;
          }
          else {
            FUN_1446dd670(&local_2e0,uVar3);
            if (uVar3 != 0) {
              memcpy(local_2e0,pvVar28,(longlong)(int)uVar3 * 2);
            }
          }
        }
        (**(code **)(*local_5e0 + 0x10))(local_5e0,local_440,local_228,local_3b8);
        if (local_43c == '\x01') {
          local_43c = '\0';
        }
      }
LAB_140cfef27:
      if ((uint)param_2[0x37] != 0) {
        fVar29 = pfVar1[8];
        pfVar1[8] = (float)((int)fVar29 + 1);
        pfVar1[8] = (float)(((int)fVar29 + 1) % (int)(uint)param_2[0x37]);
      }
      pfVar1[1] = *pfVar1 + pfVar1[1];
      FUN_140771752(local_3b8);
      uVar17 = 1;
      goto LAB_140cfef65;
    }
  }
  uVar17 = 0;
LAB_140cfef65:
  if ((local_b0 ^ (ulonglong)auStack_658) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar17;
}



// FUNCTION 140cff708 FUN_140cff708 body=204 status=ok
// SIG undefined FUN_140cff708(void)

void FUN_140cff708(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong *local_40;
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14026e798(&local_38);
  if ((local_38 != 0) && (iVar2 = *(int *)(param_1 + 0x70), (longlong)iVar2 != 0)) {
    lVar3 = *(longlong *)(param_1 + 0x68);
    lVar5 = 0;
    do {
      plVar4 = *(longlong **)(lVar3 + lVar5);
      if (plVar4 != (longlong *)0x0) {
        local_48 = local_38;
        local_40 = local_30;
        if (local_30 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_30 + 1) = (int)local_30[1] + 1;
          UNLOCK();
        }
        (**(code **)(*plVar4 + 0x20))(plVar4,&local_48);
      }
      lVar5 = lVar5 + 0x18;
    } while ((longlong)iVar2 * 0x18 != lVar5);
  }
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_30 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar1 = (int *)((longlong)local_30 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_30 + 0x10))(local_30);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140cff7d6 FUN_140cff7d6 body=176 status=ok
// SIG undefined FUN_140cff7d6(void)

void FUN_140cff7d6(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  char cVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar3 = FUN_1404fa388(param_1 + 0x68);
  if (cVar3 != '\0') {
    local_30 = *param_2;
    local_28 = param_2[1];
    if (local_28 != 0) {
      LOCK();
      *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
      UNLOCK();
    }
    uVar4 = FUN_140206ee8(param_1 + 0x38,&local_30);
    FUN_140bd765a(param_1 + 0x68,uVar4,0);
  }
  puVar2 = (undefined8 *)param_2[1];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2);
      LOCK();
      piVar1 = (int *)((longlong)puVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140cff898 FUN_140cff898 body=845 status=ok
// SIG undefined FUN_140cff898(void)

void FUN_140cff898(longlong param_1,longlong *param_2)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_30 = *(longlong **)(param_1 + 0x68);
  if (((local_30 == (longlong *)0x0) || (*(longlong *)(param_1 + 0x70) == -1)) ||
     (*local_30 != *(longlong *)(param_1 + 0x70))) {
    local_30 = (longlong *)0x0;
    FUN_1403c747e(*param_2,&local_58,0);
    FUN_1403c75f4(&local_30,&local_58);
    plVar7 = local_58;
    if (((local_58 != (longlong *)0x0) &&
        (*(int *)(local_58 + 0x21) = (int)local_58[0x21] + -1, (int)local_58[0x26] < 1)) &&
       (FUN_1400847bc(local_58 + 0x17,0), (int)plVar7[0x21] == 0)) {
      FUN_140087e46(plVar7);
      if (*plVar7 != -1) {
        if (DAT_14cb259f8 == 0) goto LAB_140cff91f;
        FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40),plVar7);
      }
      if (DAT_14cb259f8 != 0) {
        FUN_14008869e(*(undefined8 *)(DAT_14cb259f8 + 0x30),plVar7);
      }
    }
LAB_140cff91f:
    if (local_30 == (longlong *)0x0) goto LAB_140cff9e8;
  }
  else {
    *(int *)(local_30 + 0x21) = (int)local_30[0x21] + 1;
  }
  local_40 = *param_2;
  local_38 = param_2[1];
  if (local_38 != 0) {
    LOCK();
    *(int *)(local_38 + 8) = *(int *)(local_38 + 8) + 1;
    UNLOCK();
  }
  lVar6 = FUN_140206ee8(param_1 + 0x38,&local_40);
  if (lVar6 != 0) {
    if ((int)local_30[0x3a] == 0) {
      local_48 = DAT_14c8464f0;
      local_58 = (longlong *)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
      uStack_50 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
    }
    else {
      plVar7 = local_30 + 0x28;
      if ((longlong *)local_30[0x38] != (longlong *)0x0) {
        plVar7 = (longlong *)local_30[0x38];
      }
      local_58 = (longlong *)plVar7[4];
      uStack_50 = plVar7[5];
      local_48 = plVar7[6];
    }
    cVar5 = FUN_140849a6e(lVar6,*(undefined8 *)(*param_2 + 0x28),&local_58);
    plVar7 = local_30;
    if (cVar5 != '\0') {
      lVar3 = *param_2;
      plVar4 = *(longlong **)(lVar3 + 0x20);
      if ((plVar4 == (longlong *)0x0) || (*(int *)(lVar3 + 0x1c) == 0)) {
LAB_140cffb00:
        plVar8 = (longlong *)0x0;
      }
      else {
        uVar2 = *(uint *)(lVar3 + 0x18);
        plVar8 = (longlong *)0x0;
        if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
          lVar9 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
          if (((lVar9 == 0) || (*(int *)(lVar9 + 0x10) != *(int *)(lVar3 + 0x1c))) ||
             ((*(uint *)(lVar9 + 8) & 0x10200000) != 0)) goto LAB_140cffb00;
          if (*(code **)(*plVar4 + 0x30) == (code *)&LAB_14479b63c) {
            plVar8 = plVar4 + -0xa4;
            if ((longlong *)plVar4[-0x77] != (longlong *)0x0) {
              plVar8 = (longlong *)plVar4[-0x77];
            }
          }
          else {
            plVar8 = (longlong *)(**(code **)(*plVar4 + 0x30))();
          }
        }
      }
      local_78 = 0;
      FUN_14084a448(plVar7,&local_70,lVar6,plVar8);
      local_70 = 0;
      local_68 = 0xffffffffffffffff;
    }
  }
  plVar7 = local_30;
  if (((local_30 != (longlong *)0x0) &&
      (*(int *)(local_30 + 0x21) = (int)local_30[0x21] + -1, (int)local_30[0x26] < 1)) &&
     (FUN_1400847bc(local_30 + 0x17,0), (int)plVar7[0x21] == 0)) {
    FUN_140087e46(plVar7);
    if (*plVar7 != -1) {
      if (DAT_14cb259f8 == 0) goto LAB_140cff9e8;
      FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40),plVar7);
    }
    if (DAT_14cb259f8 != 0) {
      FUN_14008869e(*(undefined8 *)(DAT_14cb259f8 + 0x30),plVar7);
    }
  }
LAB_140cff9e8:
  plVar7 = (longlong *)param_2[1];
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar7 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
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
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140cffbe6 FUN_140cffbe6 body=120 status=ok
// SIG undefined FUN_140cffbe6(void)

void FUN_140cffbe6(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140cffc60(*(undefined8 *)(param_1 + 0x11e8));
  local_28 = param_3[2];
  local_38 = *param_3;
  uStack_30 = param_3[1];
  local_58 = *param_2;
  uStack_54 = param_2[1];
  uStack_50 = param_2[2];
  uStack_4c = param_2[3];
  local_48 = *(undefined8 *)(param_2 + 4);
  FUN_140cffd20(param_1);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140cffc60 FUN_140cffc60 body=191 status=ok
// SIG undefined FUN_140cffc60(void)

void FUN_140cffc60(longlong param_1,longlong *param_2,undefined4 *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_b8 [40];
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined1 local_78 [40];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((*(char *)(param_1 + 0x2cc0) == '\x01') &&
     (plVar2 = *(longlong **)(&DAT_00001ce8 + param_1), plVar2 != (longlong *)0x0)) {
    lVar3 = plVar2[0xa0];
    lVar4 = plVar2[0xa1];
    lVar1 = plVar2[0xa2];
    (**(code **)(*plVar2 + 2000))(plVar2,local_78);
    FUN_1448052ee(local_78,&local_90);
    *param_2 = lVar3;
    param_2[1] = lVar4;
    param_2[2] = lVar1;
    *(undefined8 *)(param_3 + 4) = local_80;
    *param_3 = local_90;
    param_3[1] = uStack_8c;
    param_3[2] = uStack_88;
    param_3[3] = uStack_84;
  }
  if ((local_50 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140cffd20 FUN_140cffd20 body=457 status=ok
// SIG undefined FUN_140cffd20(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140cffd20(longlong param_1,undefined8 *param_2,undefined1 (*param_3) [16])

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  
  *(undefined8 *)(param_1 + 0x510) = param_2[2];
  uVar9 = param_2[1];
  *(undefined8 *)(param_1 + 0x500) = *param_2;
  *(undefined8 *)(param_1 + 0x508) = uVar9;
  auVar1 = *param_3;
  auVar10 = divpd(auVar1,_DAT_1499387d0);
  auVar11._8_8_ = 0;
  auVar11._0_8_ = *(double *)param_3[1];
  auVar11 = divpd(auVar11,_DAT_1499387d0);
  auVar10 = roundpd(auVar10,auVar10,3);
  auVar11 = roundpd(auVar11,auVar11,3);
  dVar7 = (auVar1._0_8_ - auVar10._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
  dVar8 = (auVar1._8_8_ - auVar10._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
  dVar5 = (*(double *)param_3[1] - auVar11._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
  dVar6 = (0.0 - auVar11._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
  dVar2 = sin(dVar7);
  dVar3 = sin(dVar8);
  dVar4 = sin(dVar5);
  sin(dVar6);
  dVar7 = cos(dVar7);
  dVar8 = cos(dVar8);
  dVar5 = cos(dVar5);
  cos(dVar6);
  dVar6 = dVar3 * dVar2 * dVar4 + dVar8 * dVar7 * dVar5;
  *(double *)(param_1 + 0x4e0) = dVar2 * dVar3 * dVar5 - dVar7 * dVar8 * dVar4;
  *(double *)(param_1 + 0x4e8) = -(dVar2 * dVar8 * dVar5) - dVar7 * dVar3 * dVar4;
  auVar1._8_4_ = SUB84(dVar6,0);
  auVar1._0_8_ = -(dVar8 * dVar2 * dVar4) + dVar3 * dVar7 * dVar5;
  auVar1._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x4f0) = auVar1;
  return;
}



// FUNCTION 140cffef0 FUN_140cffef0 body=57 status=ok
// SIG undefined FUN_140cffef0(void)

void FUN_140cffef0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba47f0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba47f0 = FUN_140002ddd(FUN_1465be924,uVar1,L"HoldingStationObjectBodySettings");
  }
  return;
}



// FUNCTION 140cfff30 FUN_140cfff30 body=726 status=ok
// SIG undefined FUN_140cfff30(void)

void FUN_140cfff30(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  byte bVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined1 uVar8;
  undefined1 auStack_138 [40];
  longlong local_110;
  undefined4 local_108;
  undefined1 local_104;
  undefined1 local_103;
  undefined2 local_102;
  longlong local_100;
  undefined4 local_f8;
  undefined1 local_f4;
  char local_f3;
  char local_f2;
  undefined1 local_f1;
  longlong local_f0;
  undefined4 local_e8;
  char local_e4;
  char local_e3;
  char local_e2;
  undefined1 local_e1;
  undefined8 local_a0;
  longlong local_98;
  int7 iStack_90;
  undefined1 uStack_89;
  undefined8 *local_88;
  int6 iStack_80;
  undefined2 uStack_7a;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined2 local_54;
  undefined1 local_52;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_138;
  FUN_14006bf18(*param_1 + 800);
  FUN_140d00208(*param_1 + 0x298,param_2);
  FUN_14006bf18(*param_1 + 0x360,param_2);
  local_a0 = 0x400000000;
  local_98 = 0;
  _iStack_90 = 0;
  local_88 = (undefined8 *)0x0;
  _iStack_80 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0xffffffff;
  local_54 = 0xff;
  uVar5 = 0;
  local_52 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  lVar3 = *param_1;
  local_110 = lVar3 + 800;
  local_103 = *(undefined1 *)(lVar3 + 0x350);
  local_108 = 0;
  local_104 = 0;
  local_102 = 3;
  local_78 = *(undefined8 *)(lVar3 + 0x338);
  uStack_70 = *(undefined8 *)(lVar3 + 0x2e0);
  cVar1 = *(char *)(lVar3 + 0x319);
  local_100 = lVar3 + 0x2a8;
  local_f3 = cVar1 * '\b' + '\b';
  local_f2 = (cVar1 != '\0') * '\t' + '\x05';
  local_f8 = 0;
  local_f4 = 0;
  local_f1 = 4;
  local_e4 = cVar1 * '\x04' + '\x04';
  local_e8 = 0;
  local_e1 = 4;
  local_f0 = local_100;
  local_e3 = local_f3;
  local_e2 = local_f2;
  FUN_14472d638(lVar3 + 0x298,lVar3 + 0x3c8,&local_110,0xffffffff);
  lVar3 = *param_1;
  uVar2 = *(uint *)(lVar3 + 0x310);
  uVar6 = uVar2 - 1;
  if (0 < (int)uVar2) {
    uVar6 = 0;
  }
  local_54 = CONCAT11((char)uVar2,(char)uVar6);
  local_68 = *(undefined8 *)(lVar3 + 0x2f0);
  if ((-1 < (int)uVar6) && (uVar6 < uVar2)) {
    bVar4 = *(char *)(lVar3 + 0x318) + 2;
    local_98 = lVar3 + 0x2c0;
    uVar8 = 0xc;
    if (*(char *)(lVar3 + 0x318) != '\0') {
      uVar8 = 2;
    }
    _iStack_90 = CONCAT17(4,(uint7)CONCAT12(uVar8,CONCAT11((char)(uVar2 << (bVar4 & 0x1f)),
                                                           (char)(uVar6 << (bVar4 & 0x1f)))) << 0x20
                         );
  }
  if (*(int *)(lVar3 + 0x394) == 0) {
    local_88 = &DAT_14ca94d98;
    puVar7 = &DAT_14ca94db0;
    bVar4 = 0;
  }
  else {
    local_88 = (undefined8 *)(lVar3 + 0x360);
    puVar7 = (undefined8 *)(lVar3 + 0x380);
    bVar4 = *(byte *)(lVar3 + 0x390);
    uVar5 = 0xffffffff;
  }
  uStack_60 = *puVar7;
  _iStack_80 = CONCAT26(0x408,(uint6)bVar4 << 0x28);
  local_58 = uVar5;
  FUN_140ba0b60(lVar3 + 0x3c8,param_2);
  FUN_14006bf18(*param_1 + 0x3c8,param_2);
  if ((local_38 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d00208 FUN_140d00208 body=50 status=ok
// SIG undefined FUN_140d00208(void)

void FUN_140d00208(longlong param_1,undefined8 param_2)

{
  FUN_14006bf18();
  FUN_14006bf18(param_1 + 0x10,param_2);
  FUN_14006bf18(param_1 + 0x28,param_2);
  return;
}



// FUNCTION 140d0023a FUN_140d0023a body=40 status=ok
// SIG undefined FUN_140d0023a(void)

undefined8 FUN_140d0023a(undefined8 param_1,int param_2)

{
  FUN_140d00262();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140d00262 FUN_140d00262 body=160 status=ok
// SIG undefined FUN_140d00262(void)

void FUN_140d00262(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b49cf30;
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
  FUN_144760e21(param_1[0xd],*(undefined4 *)(param_1 + 0xe));
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[10],*(undefined4 *)(param_1 + 0xb));
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[7],*(undefined4 *)(param_1 + 8));
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 140d00302 FUN_140d00302 body=40 status=ok
// SIG undefined FUN_140d00302(void)

undefined8 FUN_140d00302(undefined8 param_1,int param_2)

{
  FUN_140d0032a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140d0032a FUN_140d0032a body=289 status=ok
// SIG undefined FUN_140d0032a(void)

void FUN_140d0032a(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b04c520;
  param_1[5] = &PTR_FUN_14b04cf80;
  param_1[6] = &PTR_LAB_14b04cfc0;
  param_1[0x55] = &PTR_FUN_14b04d010;
  param_1[0x56] = &PTR_FUN_14b04d090;
  param_1[0x57] = &PTR_FUN_14b04d0a0;
  param_1[0xc4] = &PTR_FUN_14b04d0d0;
  param_1[0xff] = &PTR_FUN_14b04d0e0;
  param_1[0x108] = &PTR_FUN_14b04d0f0;
  param_1[0x109] = &PTR_FUN_14b04d190;
  plVar3 = (longlong *)param_1[0x138];
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
  FUN_140513334(param_1 + 0x132);
  plVar3 = (longlong *)param_1[0x130];
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
  FUN_144760e21(param_1[0x12a],*(undefined4 *)(param_1 + 299));
  if (param_1[0x12a] != 0) {
    FUN_1400020a8();
  }
  FUN_14028f33c(param_1);
  return;
}



// FUNCTION 140d0044c FUN_140d0044c body=194 status=ok
// SIG undefined FUN_140d0044c(void)

void FUN_140d0044c(longlong param_1,longlong param_2)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  *(undefined4 *)(param_2 + 8) = 0;
  if (*(int *)(param_2 + 0xc) != 2) {
    FUN_1406ba688(param_2,2);
  }
  puVar2 = (undefined8 *)FUN_1403f9e22(param_2);
  *puVar2 = DAT_14cb7bde0;
  *(undefined4 *)(puVar2 + 1) = DAT_14cb7bde8;
  bVar1 = *(byte *)(param_1 + -0x97);
  *(undefined1 *)((longlong)puVar2 + 0xc) = 1;
  *(uint *)(puVar2 + 3) = (uint)bVar1;
  puVar4 = &DAT_14cb7c580;
  puVar3 = &DAT_14cb7c580;
  if (bVar1 != 0) {
    puVar3 = &DAT_14cb7c588;
  }
  puVar2[2] = *puVar3;
  puVar2 = (undefined8 *)FUN_1403f9e22(param_2);
  *puVar2 = DAT_14cb8c1a0;
  *(undefined4 *)(puVar2 + 1) = DAT_14cb8c1a8;
  bVar1 = FUN_140d0050e(param_1 + -0x4a0);
  *(undefined1 *)((longlong)puVar2 + 0xc) = 1;
  *(uint *)(puVar2 + 3) = (uint)bVar1;
  if (bVar1 != 0) {
    puVar4 = &DAT_14cb7c588;
  }
  puVar2[2] = *puVar4;
  return;
}



// FUNCTION 140d0050e FUN_140d0050e body=122 status=ok
// SIG undefined FUN_140d0050e(void)

ulonglong FUN_140d0050e(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong uVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1447e6dee(param_1,&local_28);
  if (local_28 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = CONCAT71((int7)((ulonglong)&local_28 >> 8),*(undefined1 *)(local_28 + 0x21));
  }
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
    return uVar3 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d0058a FUN_140d0058a body=3152 status=ok
// SIG undefined FUN_140d0058a(void)

void FUN_140d0058a(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  byte bVar4;
  uint uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  char cVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  longlong lVar14;
  undefined8 *puVar15;
  uint uVar16;
  uint uVar17;
  longlong *plVar18;
  longlong *plVar19;
  code **ppcVar20;
  code *pcVar21;
  undefined1 auStack_208 [40];
  longlong *local_1e0;
  code **local_1d8;
  longlong *local_1d0;
  undefined1 local_1c8 [8];
  undefined8 *local_1c0;
  undefined4 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined8 local_190;
  undefined4 local_188;
  code *local_178;
  longlong *local_170;
  code *local_168;
  longlong *plStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  longlong local_128;
  ulonglong uStack_120;
  code **local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  byte local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_208;
  plVar3 = (longlong *)(param_1 + -0x440);
  param_2 = (longlong *)*param_2;
  if (param_2 == (longlong *)0x0) {
LAB_140d005c1:
    *(undefined8 *)(param_1 + 0x15c0) = 0;
LAB_140d005d3:
    plVar19 = (longlong *)0x0;
    pcVar21 = (code *)0x0;
  }
  else {
    lVar10 = (**(code **)(*param_2 + 8))(param_2);
    lVar11 = FUN_14037df6e();
    if (((lVar11 == 0) || (*(int *)(lVar10 + 0x38) < *(int *)(lVar11 + 0x38))) ||
       (*(longlong *)(*(longlong *)(lVar10 + 0x30) + (longlong)*(int *)(lVar11 + 0x38) * 8) !=
        lVar11 + 0x30)) goto LAB_140d005c1;
    *(longlong **)(param_1 + 0x15c0) = param_2;
    lVar10 = FUN_140732046(param_2);
    if (lVar10 == 0) goto LAB_140d005d3;
    (**(code **)(*(longlong *)(lVar10 + 0x50) + 0x18))(lVar10 + 0x50,&local_168);
    plVar19 = plStack_160;
    pcVar21 = local_168;
    if (plStack_160 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_160 + 1) = (int)plStack_160[1] + 1;
      UNLOCK();
      if (plStack_160 != (longlong *)0x0) {
        LOCK();
        plVar18 = plStack_160 + 1;
        *(int *)plVar18 = (int)*plVar18 + -1;
        UNLOCK();
        if ((int)*plVar18 == 0) {
          (**(code **)*plStack_160)(plStack_160);
          LOCK();
          piVar2 = (int *)((longlong)plVar19 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar19 + 0x10))(plVar19);
          }
        }
      }
    }
  }
  plVar18 = (longlong *)(param_1 + 0x15c0);
  lVar10 = (**(code **)(*plVar3 + 0x638))(plVar3);
  if (lVar10 != 0) {
    lVar11 = FUN_140d012c2();
    if ((*(int *)(lVar11 + 0x38) <= *(int *)(*(longlong *)(lVar10 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) + (longlong)*(int *)(lVar11 + 0x38) * 8
         ) == lVar11 + 0x30)) {
      if (plVar19 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar19 + 1) = (int)plVar19[1] + 1;
        UNLOCK();
      }
      local_178 = pcVar21;
      local_170 = plVar19;
      FUN_145798c7e(lVar10,&local_178);
      FUN_140d0148e(lVar10,*(undefined8 *)(param_1 + 0x15c0));
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(lVar10);
      }
      *(longlong *)(param_1 + 0x12c0) = lVar10;
    }
  }
  if (*plVar18 != 0) {
    FUN_14078a36a(param_1 + 0x128,param_1 + 0x10);
    FUN_140c7cbb8(param_1 + 0x1900,plVar3);
    FUN_14579ac62(plVar3);
  }
  FUN_145798bea(plVar3);
  plVar6 = *(longlong **)(param_1 + 0x1298);
  if (plVar6 == (longlong *)0x0) {
LAB_140d0075e:
    FUN_140355ca0(param_1 + 0x1bc8);
  }
  else {
    lVar10 = (**(code **)(*plVar6 + 8))(plVar6);
    lVar11 = FUN_140355bb6();
    if (((lVar11 == 0) || (*(int *)(lVar10 + 0x38) < *(int *)(lVar11 + 0x38))) ||
       (*(longlong *)(*(longlong *)(lVar10 + 0x30) + (longlong)*(int *)(lVar11 + 0x38) * 8) !=
        lVar11 + 0x30)) goto LAB_140d0075e;
    FUN_1414f0e2c(param_1 + 0x1bc8,plVar6);
  }
  lVar10 = *plVar18;
  if (((lVar10 == 0) || (*(longlong *)(lVar10 + 0x160) == 0)) ||
     (0xfffffffd < *(int *)(lVar10 + 0x168) - 1U)) {
    uVar12 = FUN_1447210f0(plVar3);
    puVar15 = &local_1a8;
    local_1a8 = 0;
    local_1a0 = 0xaaad1010;
  }
  else {
    uVar12 = FUN_1447210f0(plVar3);
    local_190 = *(undefined8 *)(*(longlong *)(param_1 + 0x15c0) + 0x160);
    puVar15 = &local_190;
    local_188 = *(undefined4 *)(*(longlong *)(param_1 + 0x15c0) + 0x168);
  }
  puVar15[2] = 0;
  FUN_145799c24(&local_168,puVar15,param_1 + 0x98,uVar12);
  plVar1 = plStack_160;
  *(code **)(param_1 + 0x1178) = local_168;
  local_168 = (code *)0x0;
  plVar6 = *(longlong **)(param_1 + 0x1180);
  if (plStack_160 == plVar6) {
LAB_140d0110e:
    plVar6 = plStack_160;
    if (plStack_160 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_160 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_160)(plStack_160);
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
  }
  else {
    plStack_160 = (longlong *)0x0;
    *(longlong **)(param_1 + 0x1180) = plVar1;
    if (plVar6 != (longlong *)0x0) {
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
      goto LAB_140d0110e;
    }
  }
  FUN_14078a0a0(param_1 + -8,0);
  FUN_14579a3ce(plVar3);
  if (*(longlong *)(param_1 + 0x12c0) != 0) {
    FUN_145798ec4();
  }
  if (*plVar18 != 0) {
    if ((*(byte *)(*(longlong *)(param_1 + -0x10) + 0x9c) & 1) != 0) {
      FUN_141062a52(*(longlong *)(param_1 + -0x10),0);
    }
    lVar10 = *(longlong *)(param_1 + -0x18);
    if (lVar10 != 0) {
      lVar11 = FUN_144a78c84();
      if (((*(int *)(lVar11 + 0x38) <= *(int *)(*(longlong *)(lVar10 + 0x10) + 0x38)) &&
          (*(longlong *)
            (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) +
            (longlong)*(int *)(lVar11 + 0x38) * 8) == lVar11 + 0x30)) &&
         ((*(byte *)(lVar10 + 0x9c) & 1) != 0)) {
        FUN_141062a52(lVar10,0);
        local_168 = (code *)&LAB_148cd6ddc;
        plStack_160 = (longlong *)((ulonglong)plStack_160 & 0xffffffff00000000);
        FUN_1457990bc(lVar10 + 0x1618,&local_98,plVar3);
      }
    }
  }
  plVar6 = *(longlong **)(param_1 + -0x18);
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x718))(plVar6,1);
  }
  lVar10 = FUN_1447210f0(plVar3);
  if ((lVar10 != 0) &&
     ((bVar4 = *(byte *)(lVar10 + 0x152), bVar4 == 1 ||
      ((bVar4 < 7 && ((0x68U >> (bVar4 & 0x1f) & 1) != 0)))))) {
    FUN_1409b52ac(param_1 + 0x20);
  }
  if (*(char *)(param_1 + -0x2c8) == '\x03') {
    lVar10 = *(longlong *)(param_1 + 0x15c0);
    if ((*(byte *)(param_1 + -0x3db) & 0x18) != 0x10) goto LAB_140d0092f;
    if (lVar10 != 0) {
      uVar12 = FUN_145798b0e();
      FUN_14036a960(param_1 + 0xfe0,uVar12);
      FUN_14036ce6a(*(longlong *)(param_1 + 0x15c0) + 0xe18,param_1 + 0x988);
      FUN_140ecea3e(param_1 + 0x988);
      local_168 = (code *)&LAB_145e3369a;
      plStack_160 = (longlong *)((ulonglong)plStack_160 & 0xffffffff00000000);
      FUN_1457992bc(param_1 + 0xae0,&local_98,plVar3,&local_168);
      local_168 = FUN_145e336a4;
      plStack_160 = (longlong *)((ulonglong)plStack_160 & 0xffffffff00000000);
      FUN_1457992bc(param_1 + 0xa80,&local_98,plVar3,&local_168);
      lVar10 = *(longlong *)(param_1 + 0x15c0);
      *(byte *)(param_1 + 0xa05) =
           *(byte *)(param_1 + 0xa05) & 0x7f | *(char *)(lVar10 + 0xe11) << 7;
      goto LAB_140d0092f;
    }
  }
  else {
    lVar10 = *plVar18;
LAB_140d0092f:
    if ((lVar10 != 0) && (plVar6 = plVar3, *(int *)(param_1 + 0x1f08) == 0)) {
      for (; plVar6 != (longlong *)0x0; plVar6 = (longlong *)plVar6[4]) {
        if ((*(uint *)(plVar6 + 1) & 0x30) != 0) goto LAB_140d00989;
      }
      if ((longlong)*(int *)(lVar10 + 0xf38) != 0) {
        lVar11 = *(longlong *)(lVar10 + 0xf30);
        lVar10 = (longlong)*(int *)(lVar10 + 0xf38) << 5;
        do {
          FUN_14036b6d0(param_1 + 0x1e60,lVar11);
          lVar11 = lVar11 + 0x20;
          lVar10 = lVar10 + -0x20;
        } while (lVar10 != 0);
      }
    }
  }
LAB_140d00989:
  FUN_145798ae6(param_1 + 0x1e60,1);
  FUN_145798afa(param_1 + 0x1e60,1);
  FUN_1414a9acc(plVar3);
  if (*(longlong *)(param_1 + 0x15c0) == 0) {
    FUN_140355e94(param_1 + 0x198);
  }
  else {
    FUN_145799a5c(*(longlong *)(param_1 + 0x15c0),&local_168);
    FUN_14078b280(param_1 + 0x198,plVar3,&local_168);
    if (local_168 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  if (*(longlong *)(param_1 + -0x2b8) == 0) {
LAB_140d009d9:
    if ((*plVar18 != 0) && (lVar10 = FUN_140963a30(*plVar18 + 0x1070), lVar10 != 0)) {
      uVar12 = (**(code **)(*(longlong *)(param_1 + 0xa8) + 0x50))(param_1 + 0xa8);
      local_148 = 0;
      uStack_130 = 0;
      local_128 = 0;
      uStack_120 = 0;
      local_158 = 0;
      uStack_150 = 0;
      local_168 = (code *)0x0;
      plStack_160 = (longlong *)0x0;
      uStack_140 = 0x8000000000;
      local_138 = 0xffffffff;
      uVar13 = FUN_140963a30(*(longlong *)(param_1 + 0x15c0) + 0x1070);
      FUN_14096df60(uVar12,uVar13,1,&local_168);
      uStack_120 = uStack_120 & 0xffffffff00000000;
      if (local_128 != 0) {
        FUN_1400020a8();
      }
      FUN_140333f4e(&local_168);
    }
  }
  else {
    lVar11 = FUN_1410decb6();
    lVar10 = *(longlong *)(param_1 + -0x2b8);
    if ((((lVar10 == 0) || (lVar11 == 0)) || (lVar7 = *(longlong *)(lVar10 + 0x10), lVar7 == 0)) ||
       ((*(int *)(lVar7 + 0x38) < *(int *)(lVar11 + 0x38) ||
        (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar11 + 0x38) * 8) !=
         lVar11 + 0x30)))) goto LAB_140d009d9;
    if (*plVar18 != 0) {
      FUN_140375764(lVar10,*plVar18 + 0x16d8);
      goto LAB_140d009d9;
    }
  }
  lVar10 = FUN_145798b1a(plVar3);
  if ((lVar10 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar10);
  }
  *(longlong *)(param_1 + 0x17c0) = lVar10;
  lVar10 = FUN_145798b82(plVar3);
  if ((lVar10 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar10);
  }
  *(longlong *)(param_1 + 0x17c8) = lVar10;
  lVar10 = FUN_1403ca227();
  if (*(longlong *)(lVar10 + 0x398) != 0) {
    FUN_1457993bc(plVar3);
  }
  lVar10 = *(longlong *)(param_1 + 0x100);
  if (lVar10 == 0) {
    uVar12 = FUN_140aff5aa();
    lVar10 = FUN_14477b664(uVar12);
    *(longlong *)(param_1 + 0x100) = lVar10;
  }
  if (*(longlong *)(param_1 + 0x108) == 0) {
    if ((*(longlong *)(param_1 + 0xf8) != 0) && (lVar10 != 0)) {
      plVar6 = *(longlong **)(lVar10 + 0xb8);
      if ((plVar6 == (longlong *)0x0) ||
         (cVar9 = (**(code **)(*plVar6 + 0x108))(plVar6), cVar9 == '\0')) {
        *(undefined8 *)(param_1 + 0x108) = 0;
      }
      else {
        uVar12 = (**(code **)(*plVar6 + 0x110))(plVar6);
        lVar10 = FUN_144aff482(uVar12,(longlong *)(param_1 + 0xf8));
        *(longlong *)(param_1 + 0x108) = lVar10;
        if (lVar10 != 0) goto LAB_140d00b03;
      }
    }
LAB_140d00c79:
    if (*plVar18 != 0) {
      FUN_140359e06(param_1 + 0x790,plVar3);
      FUN_14035d02e(param_1 + 0x3e0,plVar3);
      local_168 = (code *)&LAB_1410ac322;
      plStack_160 = (longlong *)((ulonglong)plStack_160 & 0xffffffff00000000);
      FUN_1457991bc(param_1 + 0x3e0,&local_98,plVar3);
      goto LAB_140d00cd2;
    }
  }
  else {
LAB_140d00b03:
    if (*plVar18 != 0) {
      FUN_1457996ca(plVar3);
      goto LAB_140d00c79;
    }
  }
  FUN_14035d552(param_1 + 0x3e0);
  FUN_140457ffc(param_1 + 0x3e0,plVar3);
  if (*(longlong *)(param_1 + 2000) != 0) {
    FUN_140a19d0e(param_1 + 0x7c0,0);
    *(undefined8 *)(param_1 + 0x7a8) = 0;
    *(undefined8 *)(param_1 + 0x7b0) = 0;
    *(undefined8 *)(param_1 + 0x7b8) = 0;
  }
LAB_140d00cd2:
  if (*plVar18 != 0) {
    local_a8 = (code **)0x0;
    local_a0 = 0x1800000000;
    FUN_140d0296a(plVar3,&local_168);
    ppcVar20 = local_a8;
    if (local_a8 == (code **)0x0) {
      ppcVar20 = &local_168;
    }
    lVar10 = (longlong)(int)local_a0;
    if (lVar10 != 0) {
      lVar11 = 0;
      local_1d0 = plVar19;
      do {
        lVar7 = *(longlong *)((longlong)ppcVar20 + lVar11);
        if ((lVar7 != 0) && (lVar14 = *(longlong *)(lVar7 + 0x10), lVar14 != 0)) {
          lVar8 = *plVar18;
          uVar12 = FUN_145798d1a();
          FUN_144a54316(uVar12,lVar8 + 0x11f8,lVar14,lVar7);
          uVar16 = *(uint *)(*plVar18 + 0x1200) & 2;
          uVar5 = *(uint *)(lVar7 + 0x2d4);
          *(uint *)(lVar7 + 0x2d4) = uVar5 & 0xfffffffd | uVar16;
          uVar17 = *(uint *)(*plVar18 + 0x1200) & 4;
          *(uint *)(lVar7 + 0x2d4) = uVar5 & 0xfffffff9 | uVar16 | uVar17;
          *(uint *)(lVar7 + 0x2d4) =
               uVar5 & 0xfffffff1 | uVar16 | uVar17 | *(uint *)(*plVar18 + 0x1200) & 8;
          *(uint *)(lVar7 + 0x2fc) =
               *(uint *)(lVar7 + 0x2fc) & 0xfffffffe | *(uint *)(*plVar18 + 0x1200) >> 4 & 1;
          *(uint *)(lVar7 + 0x428) =
               *(uint *)(lVar7 + 0x428) & 0xfffffffe | *(uint *)(*plVar18 + 0x1210) & 1;
          FUN_14045627c(lVar7,0,1);
          lVar14 = FUN_1447210f0(plVar3);
          if (lVar14 != 0) {
            local_1b0 = 0;
            local_1e0 = plVar18;
            FUN_14485c47a(&local_1b0,lVar7);
            uVar12 = local_1b0;
            if (*(longlong *)(lVar14 + 0x1f0) == 0) {
              puVar15 = (undefined8 *)(lVar14 + 0x458);
            }
            else {
              puVar15 = (undefined8 *)(*(longlong *)(lVar14 + 0x1f0) + 0xf0);
            }
            uVar13 = *puVar15;
            local_1c0 = (undefined8 *)0x0;
            local_1b8 = 0;
            local_1d8 = ppcVar20;
            FUN_1446efa72(&local_1c0,0,3,0x10);
            puVar15 = local_1c0;
            local_1b8 = 3;
            *local_1c0 = &PTR_LAB_14a1c8830;
            LOCK();
            UNLOCK();
            lVar14 = DAT_14c758608 + 1;
            lVar7 = DAT_14c758608 + 1;
            if (lVar14 == 0) {
              LOCK();
              UNLOCK();
              lVar14 = DAT_14c758608 + 2;
              lVar7 = DAT_14c758608 + 2;
            }
            DAT_14c758608 = lVar7;
            local_1c0[2] = lVar14;
            *local_1c0 = &PTR_FUN_14b95f410;
            local_1c0[3] = 0;
            FUN_14485c47a(local_1c0 + 3,plVar3);
            puVar15[4] = uVar12;
            local_98 = 0;
            local_90 = 0;
            FUN_14487d8d8(&local_98,&local_1c0);
            local_58 = 1;
            FUN_14016fdb0(uVar13,local_1c8,&local_98);
            (*(code *)(&PTR_LAB_14a1c87a0)[local_58])(&local_98);
            FUN_1449db362(&local_1c0);
            plVar18 = local_1e0;
            ppcVar20 = local_1d8;
          }
        }
        lVar11 = lVar11 + 8;
        plVar19 = local_1d0;
      } while (lVar10 * 8 != lVar11);
    }
    if (local_a8 != (code **)0x0) {
      FUN_1400020a8();
    }
  }
  if (plVar19 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar19 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  if ((local_48 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140d011dc FUN_140d011dc body=228 status=ok
// SIG undefined FUN_140d011dc(void)

longlong FUN_140d011dc(void)

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
  if (DAT_14cac8fc8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_142b47bc4;
    local_38 = &LAB_1478ae194;
    local_40 = &LAB_145804b75;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x2d0;
    FUN_14081cfa3(L"/Script/Engine",L"WindDirectionalSourceComponent",&DAT_14cac8fc8,FUN_14639a82c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cac8fc8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d012c2 FUN_140d012c2 body=228 status=ok
// SIG undefined FUN_140d012c2(void)

longlong FUN_140d012c2(void)

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
  if (DAT_14cbbd7b8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14658d5b6;
    local_38 = &LAB_148ca5629;
    local_40 = &LAB_1457f124f;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x1dc0;
    FUN_14081cfa3(L"/Script/OakGame",L"OakWheeledVehicleMovementComponent",&DAT_14cbbd7b8,
                  FUN_14660fe1c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbbd7b8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d013a8 FUN_140d013a8 body=228 status=ok
// SIG undefined FUN_140d013a8(void)

longlong FUN_140d013a8(void)

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
  if (DAT_14cb50308 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_145a7e1aa;
    local_38 = &LAB_1485ebdef;
    local_40 = &LAB_1458d7358;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x640;
    FUN_14081cfa3(L"/Script/GbxDynamicWind",L"GbxWindSphereSourceComponent",&DAT_14cb50308,
                  &DAT_1485ebdee);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb50308;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d0148e FUN_140d0148e body=445 status=ok
// SIG undefined FUN_140d0148e(void)

void FUN_140d0148e(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  
  if (param_2 == 0) {
    return;
  }
  *(undefined4 *)(param_1 + 0x1e4) = *(undefined4 *)(param_2 + 0x118);
  iVar3 = *(int *)(param_2 + 0x110);
  if (-1 < iVar3) {
    plVar1 = (longlong *)(param_1 + 0x9c8);
    *(undefined4 *)(param_1 + 0x9d0) = 0;
    if (*(int *)(param_1 + 0x9d4) != iVar3) {
      FUN_145798e54(plVar1);
    }
    iVar3 = *(int *)(param_2 + 0x110);
    if ((longlong)iVar3 != 0) {
      lVar5 = *(longlong *)(param_2 + 0x108);
      lVar11 = 0;
      do {
        iVar4 = *(int *)(param_1 + 0x9d0);
        *(uint *)(param_1 + 0x9d0) = iVar4 + 1U;
        if (*(uint *)(param_1 + 0x9d4) < iVar4 + 1U) {
          FUN_148f0538c(plVar1,iVar4);
        }
        plVar12 = (longlong *)((longlong)iVar4 * 0x28 + *plVar1);
        thunk_FUN_140d01652(plVar12);
        lVar10 = FUN_1411f6718();
        if ((lVar10 != 0) && (DAT_14c950c29 != '\0')) {
          FUN_1456cec3c(lVar10);
        }
        *plVar12 = lVar10;
        plVar12[1] = *(longlong *)(lVar5 + 8 + lVar11);
        puVar2 = (undefined4 *)(lVar5 + 0x10 + lVar11);
        uVar6 = puVar2[1];
        uVar7 = puVar2[2];
        uVar8 = puVar2[3];
        *(undefined4 *)(plVar12 + 2) = *puVar2;
        *(undefined4 *)((longlong)plVar12 + 0x14) = uVar6;
        *(undefined4 *)(plVar12 + 3) = uVar7;
        *(undefined4 *)((longlong)plVar12 + 0x1c) = uVar8;
        plVar12[4] = *(longlong *)(lVar5 + 0x20 + lVar11);
        lVar11 = lVar11 + 0x188;
      } while ((longlong)iVar3 * 0x188 - lVar11 != 0);
    }
    *(byte *)(param_1 + 0x1e0) = *(byte *)(param_1 + 0x1e0) & 0xfe | *(byte *)(param_2 + 0x158) & 1;
    *(undefined1 *)(param_1 + 0x1e8) = *(undefined1 *)(param_2 + 0x138);
    uVar9 = *(undefined8 *)(param_2 + 0x148);
    *(undefined8 *)(param_1 + 0x1f0) = *(undefined8 *)(param_2 + 0x140);
    *(undefined8 *)(param_1 + 0x1f8) = uVar9;
    *(undefined8 *)(param_1 + 0x200) = *(undefined8 *)(param_2 + 0x150);
    uVar6 = *(undefined4 *)(param_2 + 0x124);
    uVar7 = *(undefined4 *)(param_2 + 0x128);
    uVar8 = *(undefined4 *)(param_2 + 300);
    *(undefined4 *)(param_1 + 0x220) = *(undefined4 *)(param_2 + 0x120);
    *(undefined4 *)(param_1 + 0x224) = uVar6;
    *(undefined4 *)(param_1 + 0x228) = uVar7;
    *(undefined4 *)(param_1 + 0x22c) = uVar8;
    *(undefined8 *)(param_1 + 0x230) = *(undefined8 *)(param_2 + 0x130);
    FUN_14579afd2(param_1 + 0xcf8,param_2 + 400);
    *(undefined1 *)(param_1 + 0xcf0) = *(undefined1 *)(param_2 + 0xe10);
    FUN_140bdceb2(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar3);
}



// FUNCTION 140d0164c thunk_FUN_140d01652 body=5 status=ok
// SIG undefined thunk_FUN_140d01652(void)

longlong * thunk_FUN_140d01652(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_1411f69f0();
  *param_1 = lVar1;
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return param_1;
}



// FUNCTION 140d01652 FUN_140d01652 body=60 status=ok
// SIG undefined FUN_140d01652(void)

longlong * FUN_140d01652(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_1411f69f0();
  *param_1 = lVar1;
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return param_1;
}



// FUNCTION 140d0168e FUN_140d0168e body=370 status=ok
// SIG undefined FUN_140d0168e(void)

undefined8 * FUN_140d0168e(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 140d0180e FUN_140d0180e body=370 status=ok
// SIG undefined FUN_140d0180e(void)

undefined8 * FUN_140d0180e(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 140d01982 FUN_140d01982 body=4 status=ok
// SIG undefined FUN_140d01982(void)

undefined4 FUN_140d01982(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x40);
}



// FUNCTION 140d01986 FUN_140d01986 body=7 status=ok
// SIG undefined FUN_140d01986(void)

undefined1 FUN_140d01986(void)

{
  return DAT_14cb0a348;
}



// FUNCTION 140d0198e FUN_140d0198e body=190 status=ok
// SIG undefined FUN_140d0198e(void)

void FUN_140d0198e(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (param_1[0x332] == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(longlong *)(param_1[0x332] + 0x1a00);
  }
  lVar2 = (**(code **)(*param_1 + 0x6d0))(param_1);
  if ((lVar4 != 0) && (lVar2 != 0)) {
    iVar1 = *(int *)(lVar4 + 0x1268);
    param_1 = param_1 + 0x3b5;
    FUN_14579996a(param_1,iVar1);
    if (0 < (longlong)iVar1) {
      lVar3 = 0;
      do {
        *(undefined8 *)(*param_1 + lVar3 * 8) =
             *(undefined8 *)(*(longlong *)(lVar4 + 0x1260) + lVar3 * 8);
        *(float *)(*param_1 + lVar3 * 8) =
             *(float *)(lVar2 + 0x100) * (float)(int)lVar3 + *(float *)(*param_1 + lVar3 * 8);
        *(float *)(*param_1 + 4 + lVar3 * 8) =
             (float)(int)lVar3 * *(float *)(lVar2 + 0x10c) + *(float *)(*param_1 + 4 + lVar3 * 8);
        lVar3 = lVar3 + 1;
      } while (iVar1 != lVar3);
    }
  }
  return;
}



// FUNCTION 140d01a4c FUN_140d01a4c body=30 status=ok
// SIG undefined FUN_140d01a4c(void)

void FUN_140d01a4c(longlong param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = 0;
    do {
      *(undefined1 **)(param_1 + lVar1 * 8) = &DAT_3f8000003f800000;
      lVar1 = lVar1 + 1;
    } while (param_2 != (int)lVar1);
  }
  return;
}



// FUNCTION 140d01a6a FUN_140d01a6a body=18 status=ok
// SIG undefined FUN_140d01a6a(void)

void FUN_140d01a6a(longlong *param_1)

{
  if (*(char *)((longlong)param_1 + 0x3c) == '\0') {
    *(undefined1 *)((longlong)param_1 + 0x3c) = 1;
                    /* WARNING: Could not recover jumptable at 0x000140d01a77. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x10))();
    return;
  }
  return;
}



// FUNCTION 140d01a7c FUN_140d01a7c body=189 status=ok
// SIG undefined FUN_140d01a7c(void)

longlong * FUN_140d01a7c(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_28;
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
        plVar2 = (longlong *)(*param_1 + (longlong)iVar1 * 0x48);
        if (*plVar2 == *param_3) {
          if (plVar2 != (longlong *)0x0) goto LAB_140d01b11;
          break;
        }
        iVar1 = (int)plVar2[8];
      } while (iVar1 != -1);
    }
  }
  local_38 = 0;
  local_28 = param_3;
  FUN_140d01b3a(param_1,&local_1c,param_2);
  plVar2 = (longlong *)(*param_1 + (longlong)local_1c * 0x48);
LAB_140d01b11:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar2 + 1;
}



// FUNCTION 140d01b3a FUN_140d01b3a body=334 status=ok
// SIG undefined FUN_140d01b3a(void)

undefined4 *
FUN_140d01b3a(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4,
             undefined8 param_5)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined4 local_90 [2];
  undefined8 *local_88;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_140d01dc0(param_1,local_90);
  *local_88 = *(undefined8 *)*param_4;
  local_88[6] = 0;
  local_58 = 0;
  local_88[7] = 0x100000000;
  local_50 = 0x100000000;
  FUN_140d01c8a();
  *(undefined4 *)(local_88 + 8) = 0xffffffff;
  local_98 = param_5;
  cVar1 = FUN_140d01cf2(param_1,param_3,local_88,local_90);
  if (cVar1 == '\0') {
    uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar2 < 4) {
      iVar4 = 1;
    }
    else {
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
      *(uint *)((longlong)local_88 + 0x44) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_88 + 8) =
           *(undefined4 *)
            (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_90[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_140d01fa6(param_1);
    }
  }
  *param_2 = local_90[0];
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d01c8a FUN_140d01c8a body=52 status=ok
// SIG undefined FUN_140d01c8a(void)

void FUN_140d01c8a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  if (*(longlong *)(param_1 + 0x28) == 0) {
    lVar1 = param_1;
  }
  FUN_140d01cbe(lVar1,*(undefined4 *)(param_1 + 0x30));
  if (*(longlong *)(param_1 + 0x28) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140d01cbe FUN_140d01cbe body=51 status=ok
// SIG undefined FUN_140d01cbe(void)

void FUN_140d01cbe(longlong param_1,int param_2)

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



// FUNCTION 140d01cf2 FUN_140d01cf2 body=206 status=ok
// SIG undefined FUN_140d01cf2(void)

void FUN_140d01cf2(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
                  )

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
  undefined1 uVar16;
  longlong *plVar17;
  int iVar18;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar17 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar17 = (longlong *)param_1[8];
    }
    iVar18 = *(int *)((longlong)plVar17 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar18 != -1) {
      do {
        plVar17 = (longlong *)(*param_1 + (longlong)iVar18 * 0x48);
        if (*plVar17 == *param_3) {
          FUN_140d01c8a(plVar17 + 1);
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
          *(int *)(plVar17 + 6) = (int)param_3[6];
          *(undefined4 *)((longlong)plVar17 + 0x34) = uVar7;
          *(int *)(plVar17 + 7) = (int)lVar15;
          *(undefined4 *)((longlong)plVar17 + 0x3c) = uVar8;
          *(int *)(plVar17 + 4) = (int)lVar13;
          *(undefined4 *)((longlong)plVar17 + 0x24) = uVar5;
          *(int *)(plVar17 + 5) = (int)lVar14;
          *(undefined4 *)((longlong)plVar17 + 0x2c) = uVar6;
          *(int *)(plVar17 + 2) = (int)lVar11;
          *(undefined4 *)((longlong)plVar17 + 0x14) = uVar3;
          *(int *)(plVar17 + 3) = (int)lVar12;
          *(undefined4 *)((longlong)plVar17 + 0x1c) = uVar4;
          *(int *)plVar17 = (int)lVar9;
          *(undefined4 *)((longlong)plVar17 + 4) = uVar1;
          *(int *)(plVar17 + 1) = (int)lVar10;
          *(undefined4 *)((longlong)plVar17 + 0xc) = uVar2;
          FUN_148cd071c(param_1,*param_4,1);
          *param_4 = iVar18;
          uVar16 = 1;
          break;
        }
        iVar18 = (int)plVar17[8];
        uVar16 = 0;
      } while (iVar18 != -1);
      goto LAB_140d01d64;
    }
  }
  uVar16 = 0;
LAB_140d01d64:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar16;
  }
  return;
}



// FUNCTION 140d01dc0 FUN_140d01dc0 body=485 status=ok
// SIG undefined FUN_140d01dc0(void)

int * FUN_140d01dc0(longlong *param_1,int *param_2)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  longlong *plVar9;
  longlong *plVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar11 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar11 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar11) {
      FUN_14021b4e8(param_1,iVar11);
    }
    iVar6 = (int)param_1[5];
    if (iVar6 == 0) {
      iVar2 = -1;
    }
    else {
      iVar2 = iVar6 + 0x1e;
      if (-1 < iVar6 + -1) {
        iVar2 = iVar6 + -1;
      }
      iVar2 = iVar2 >> 5;
    }
    plVar9 = param_1 + 2;
    iVar8 = iVar6 + 1;
    iVar12 = iVar6 + 0x1f;
    if (-1 < iVar6) {
      iVar12 = iVar6;
    }
    if (iVar12 >> 5 == iVar2) {
      *(int *)(param_1 + 5) = iVar8;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar6) {
        if (iVar6 + 0x20U < 0xa0) {
          iVar8 = 0x80;
          iVar2 = iVar6;
        }
        else {
          uVar13 = iVar6 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar7 = 4;
            if (4 < uVar13) {
              uVar7 = uVar13;
            }
          }
          else {
            uVar7 = (uVar13 * 3 >> 3) + uVar13 + 0x10;
          }
          uVar4 = FUN_144a3809e(uVar7 << 2,0);
          iVar2 = (int)(uVar4 >> 2);
          iVar8 = -0x20;
          if ((int)uVar13 <= iVar2) {
            iVar8 = iVar2 << 5;
          }
          iVar2 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar8;
        FUN_1446efbd8(plVar9,iVar2);
        iVar8 = (int)param_1[5] + 1;
      }
      iVar2 = iVar8 + 0x1f;
      if (-1 < iVar8) {
        iVar2 = iVar8;
      }
      *(int *)(param_1 + 5) = iVar8;
      if (iVar8 % 0x20 != 0) {
        plVar10 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar10 = plVar9;
        }
        bVar5 = -(char)(iVar8 % 0x20);
        *(uint *)((longlong)plVar10 + (longlong)(iVar2 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar10 + (longlong)(iVar2 >> 5) * 4) << (bVar5 & 0x1f)) >>
             (bVar5 & 0x1f);
      }
    }
    lVar3 = (longlong)iVar11;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[4];
    }
    bVar5 = (byte)iVar6 & 0x1f;
    puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar12 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar5 | 0xfffffffeU >> 0x20 - bVar5);
  }
  else {
    iVar11 = (int)param_1[6];
    lVar3 = (longlong)iVar11;
    iVar6 = *(int *)(*param_1 + 4 + lVar3 * 0x48);
    *(int *)(param_1 + 6) = iVar6;
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar6 * 0x48) = 0xffffffff;
    }
  }
  plVar9 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar9 = (longlong *)param_1[4];
  }
  iVar6 = iVar11 + 0x1f;
  if (-1 < iVar11) {
    iVar6 = iVar11;
  }
  puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar11 & 0x1f);
  *param_2 = iVar11;
  *(longlong *)(param_2 + 2) = lVar3 * 0x48 + *param_1;
  return param_2;
}



// FUNCTION 140d01fa6 FUN_140d01fa6 body=688 status=ok
// SIG undefined FUN_140d01fa6(void)

void FUN_140d01fa6(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint *puVar13;
  ulonglong uVar14;
  longlong lVar15;
  int iVar16;
  uint uVar17;
  
  plVar6 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar6,0,0,4);
  }
  plVar1 = param_1 + 7;
  uVar10 = *(uint *)(param_1 + 9);
  if (uVar10 == 1) {
    if (*plVar6 != 0) {
      FUN_1446efa72(plVar6,0,0,4);
    }
  }
  else {
    if (uVar10 == 0) {
      return;
    }
    FUN_1446efa72(plVar6,0,uVar10,4);
    if ((int)uVar10 < 1) goto LAB_140d0200c;
  }
  uVar3 = 0;
  do {
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = plVar1;
    }
    *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar3) * 4) =
         0xffffffff;
    uVar3 = uVar3 + 1;
  } while (uVar10 != uVar3);
LAB_140d0200c:
  iVar7 = (int)param_1[5];
  if (iVar7 == 0) {
    uVar4 = 0;
    uVar14 = 1;
    iVar16 = 0;
    iVar5 = 0;
  }
  else {
    puVar13 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar13 = (uint *)(param_1 + 2);
    }
    uVar10 = *puVar13;
    if (uVar10 == 0) {
      iVar16 = iVar7 + 0x1e;
      if (-1 < iVar7 + -1) {
        iVar16 = iVar7 + -1;
      }
      uVar4 = 0;
      uVar14 = (ulonglong)(uint)(iVar16 >> 5);
      if (iVar16 >> 5 < 1) {
        uVar14 = uVar4;
      }
      iVar5 = 0;
      do {
        if (uVar14 == uVar4) {
          return;
        }
        iVar5 = iVar5 + 0x20;
        uVar10 = puVar13[uVar4 + 1];
        uVar4 = uVar4 + 1;
      } while (uVar10 == 0);
    }
    else {
      uVar4 = 0;
      iVar5 = 0;
    }
    uVar14 = (ulonglong)(-uVar10 & uVar10);
    uVar8 = uVar14 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    iVar16 = (iVar5 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
    if (iVar7 <= iVar16) {
      iVar16 = iVar7;
    }
  }
  if (iVar16 < iVar7) {
    uVar10 = 0xffffffff;
    do {
      lVar9 = *param_1;
      lVar15 = (longlong)iVar16;
      uVar2 = *(undefined8 *)(lVar9 + lVar15 * 0x48);
      uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
      uVar17 = (uint)uVar2 & 0xffff;
      uVar8 = (longlong)
              (int)(((uint)uVar2 << 0x10 | uVar17) + (int)((ulonglong)uVar2 >> 0x20) +
                    (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar17 >> 4)) &
              (longlong)(int)param_1[9] - 1U;
      iVar7 = (int)uVar8;
      *(int *)(lVar9 + 0x44 + lVar15 * 0x48) = iVar7;
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = plVar1;
      }
      *(undefined4 *)(lVar9 + 0x40 + lVar15 * 0x48) =
           *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar8) * 4);
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = plVar1;
      }
      *(int *)((longlong)plVar6 + ((longlong)iVar7 & (longlong)(int)param_1[9] - 1U) * 4) = iVar16;
      uVar10 = ~(uint)uVar14 & uVar10;
      puVar13 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar13 = (uint *)(param_1 + 2);
      }
      iVar7 = (int)param_1[5];
      iVar16 = (int)uVar4;
      lVar9 = (longlong)iVar16;
      uVar3 = puVar13[lVar9] & uVar10;
      if (uVar3 == 0) {
        iVar11 = iVar7 + 0x1e;
        if (-1 < iVar7 + -1) {
          iVar11 = iVar7 + -1;
        }
        iVar11 = iVar11 >> 5;
        iVar12 = iVar11;
        if (iVar11 < iVar16) {
          iVar12 = iVar16;
        }
        if (iVar11 <= iVar16) {
          return;
        }
        lVar15 = 0;
        while( true ) {
          iVar5 = iVar5 + 0x20;
          uVar3 = puVar13[lVar9 + lVar15 + 1];
          if (uVar3 != 0) break;
          lVar15 = lVar15 + 1;
          if (iVar12 - lVar9 == lVar15) {
            return;
          }
        }
        uVar4 = (ulonglong)(iVar16 + (int)lVar15 + 1);
        uVar10 = 0xffffffff;
      }
      uVar14 = (ulonglong)(-uVar3 & uVar3);
      uVar8 = uVar14 * 2 + 1;
      lVar9 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar16 = (iVar5 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
    } while (iVar16 < iVar7);
  }
  return;
}



// FUNCTION 140d02256 FUN_140d02256 body=246 status=ok
// SIG undefined FUN_140d02256(void)

longlong FUN_140d02256(uint *param_1)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  
  if (((((param_1[1] == 0) || (uVar1 = *param_1, (int)uVar1 < 0)) || (DAT_14c9647dc <= (int)uVar1))
      || ((plVar5 = (longlong *)
                    ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
          plVar5 == (longlong *)0x0 || (*(uint *)(plVar5 + 2) != param_1[1])))) ||
     (((*(uint *)(plVar5 + 1) & 0x10200000) != 0 || (lVar4 = *plVar5, lVar4 == 0)))) {
    if (*(longlong *)(param_1 + 2) == 0) {
      return 0;
    }
    lVar4 = FUN_140007850();
    cVar2 = (*(code *)PTR_FUN_14c758760)();
    if ((lVar4 == 0) || (cVar2 == '\0')) {
      FUN_14485c47a(param_1,lVar4);
      if (lVar4 == 0) {
        return 0;
      }
    }
    else {
      uVar1 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar3 = 0;
      }
      if ((*(uint *)(lVar3 + 8) & 0x8400000) == 0) {
        FUN_14485c47a(param_1,lVar4);
      }
    }
    if ((*(uint *)(lVar4 + 8) >> 0x1e & 1) != 0) {
      return 0;
    }
  }
  lVar3 = FUN_140d0234c();
  if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
      lVar3 + 0x30)) {
    return lVar4;
  }
  return 0;
}



// FUNCTION 140d0234c FUN_140d0234c body=228 status=ok
// SIG undefined FUN_140d0234c(void)

longlong FUN_140d0234c(void)

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
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb55518 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e9e4fe;
    local_38 = &LAB_14862457f;
    local_40 = FUN_1464b2574;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x90;
    FUN_14081cfa3(L"/Script/GbxGame",L"BodyActionTagMap",&DAT_14cb55518,&DAT_14862457e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb55518;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d02432 FUN_140d02432 body=155 status=ok
// SIG undefined FUN_140d02432(void)

undefined4 * FUN_140d02432(undefined4 *param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  lVar1 = *(longlong *)(param_2 + 2);
  if (*(longlong *)(param_1 + 2) != lVar1) {
    *(undefined8 *)(param_1 + 6) = 0;
  }
  *(longlong *)(param_1 + 2) = lVar1;
  if (*(longlong *)(param_1 + 4) != *(longlong *)(param_2 + 4)) {
    *(undefined8 *)(param_1 + 6) = 0;
  }
  uVar2 = FUN_14477b664();
  uVar2 = FUN_14477b664(uVar2);
  *(undefined8 *)(param_1 + 4) = uVar2;
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
  uVar2 = *(undefined8 *)(param_2 + 10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 10) = uVar2;
  if ((*(longlong *)(param_1 + 0xc) != *(longlong *)(param_2 + 0xc)) ||
     (param_1[0xe] != param_2[0xe])) {
    *(longlong *)(param_1 + 0xc) = *(longlong *)(param_2 + 0xc);
    param_1[0xe] = param_2[0xe];
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  param_1[0x12] = param_2[0x12];
  return param_1;
}



// FUNCTION 140d024ce FUN_140d024ce body=89 status=ok
// SIG undefined FUN_140d024ce(void)

undefined8 * FUN_140d024ce(undefined8 *param_1,undefined8 *param_2)

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
      FUN_140d02586(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0xc);
      }
    }
  }
  return param_1;
}



// FUNCTION 140d02528 FUN_140d02528 body=93 status=ok
// SIG undefined FUN_140d02528(void)

undefined8 * FUN_140d02528(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140ea1612(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_140d026d4(param_1,iVar1);
      FUN_140d027bc(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 140d02586 FUN_140d02586 body=334 status=ok
// SIG undefined FUN_140d02586(void)

void FUN_140d02586(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  byte bVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  
  if (param_2 == 0) {
    iVar7 = 0;
  }
  else {
    uVar4 = (longlong)param_2 * 0xc;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar4 + 0xf;
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar3 = (&DAT_14c841e00)[uVar1 >> 4];
            uVar6 = 0x32;
            if (0x32 < bVar3) {
              uVar6 = (ulonglong)bVar3;
            }
            uVar8 = 0x32 - (ulonglong)bVar3;
            do {
              uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140d025f8;
              lVar2 = uVar6 + 1 + uVar8;
              uVar8 = uVar8 - 1;
            } while (lVar2 != 0x33);
          }
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar4 & ((uVar1 & 0xfffffffffffffff0) + uVar4) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,4);
      }
    }
LAB_140d025f8:
    iVar5 = (int)(uVar4 / 0xc);
    iVar7 = 0x7fffffff;
    if (param_2 <= iVar5) {
      iVar7 = iVar5;
    }
  }
  if (param_3 < iVar7) {
    FUN_1446f8d3c(param_1,0,iVar7,0xc,4);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 140d026d4 FUN_140d026d4 body=232 status=ok
// SIG undefined FUN_140d026d4(void)

void FUN_140d026d4(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar1 = (longlong)param_2 * 0xb0;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar1 < 0x7ff1) {
          uVar1 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar1 = -uVar3 & (uVar1 + uVar3) - 1;
        }
      }
      else {
        uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar1,8);
      }
    }
    iVar2 = (int)(uVar1 / 0xb0);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar4 = iVar2;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0xb0,8);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 140d027bc FUN_140d027bc body=341 status=ok
// SIG undefined FUN_140d027bc(void)

void FUN_140d027bc(longlong param_1,longlong param_2,int param_3)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  int *piVar6;
  
  if (param_3 != 0) {
    puVar5 = (undefined8 *)(param_1 + 0x78);
    piVar6 = (int *)(param_2 + 0xa8);
    do {
      puVar5[-0xf] = &PTR_FUN_14b00bdf8;
      puVar5[-9] = 0;
      *(undefined4 *)(puVar5 + -8) = 0;
      puVar5[-0xd] = 0;
      puVar5[-0xc] = 0;
      *(undefined8 *)((longlong)puVar5 + -0x3c) = 0xffffffff00000080;
      *(undefined4 *)((longlong)puVar5 + -0x34) = 0;
      puVar5[-5] = 0;
      *(undefined4 *)(puVar5 + -4) = 0;
      puVar5[-3] = 0;
      puVar5[-2] = 0;
      puVar5[-0xe] = &PTR_FUN_14a176fc0;
      *(int *)(puVar5 + -1) = piVar6[-0xe];
      *(short *)((longlong)puVar5 + -4) = (short)piVar6[-0xd];
      puVar5[-0xe] = &DAT_14a176f00;
      *puVar5 = 0;
      iVar1 = piVar6[-10];
      pvVar2 = *(void **)(piVar6 + -0xc);
      *(int *)(puVar5 + 1) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
      }
      else {
        FUN_140501c24(puVar5,iVar1,0);
        memcpy((void *)*puVar5,pvVar2,(longlong)iVar1 * 0x1c);
      }
      puVar5[2] = *(undefined8 *)(piVar6 + -8);
      iVar1 = piVar6[-5];
      iVar3 = piVar6[-4];
      iVar4 = piVar6[-3];
      *(int *)(puVar5 + 3) = piVar6[-6];
      *(int *)((longlong)puVar5 + 0x1c) = iVar1;
      *(int *)(puVar5 + 4) = iVar3;
      *(int *)((longlong)puVar5 + 0x24) = iVar4;
      puVar5[5] = 0;
      iVar1 = *piVar6;
      pvVar2 = *(void **)(piVar6 + -2);
      *(int *)(puVar5 + 6) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)puVar5 + 0x34) = 0;
      }
      else {
        FUN_1446dd670(puVar5 + 5,iVar1,0);
        memcpy((void *)puVar5[5],pvVar2,(longlong)iVar1 * 2);
      }
      puVar5 = puVar5 + 0x16;
      piVar6 = piVar6 + 0x2c;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 140d02912 FUN_140d02912 body=88 status=ok
// SIG undefined FUN_140d02912(void)

undefined8 * FUN_140d02912(undefined8 *param_1,undefined8 *param_2)

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
      FUN_148acc4c2(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 4);
      }
    }
  }
  return param_1;
}



// FUNCTION 140d0296a FUN_140d0296a body=1563 status=ok
// SIG undefined FUN_140d0296a(void)

void FUN_140d0296a(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  uint *puVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  undefined8 unaff_RBP;
  ulonglong uVar12;
  ulonglong uVar13;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  uint *puVar17;
  undefined8 in_R11;
  uint uVar18;
  ulonglong uVar19;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  wchar_t *local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  code **local_90;
  code *local_88;
  code *local_80;
  bool local_6d;
  uint local_6c;
  uint *local_68;
  longlong local_60;
  longlong local_58;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  *(undefined4 *)(param_2 + 200) = 0;
  local_60 = param_2;
  if (*(int *)(param_2 + 0xcc) < 0) {
    FUN_148cdcc72();
  }
  lVar6 = FUN_140c81140();
  bVar4 = lVar6 != 0;
  if ((lVar6 == 0) || (DAT_14c950c29 == 0)) {
    if (lVar6 != 0) goto LAB_140d029df;
    uVar13 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
    if (DAT_14cad00c8 == 0) goto LAB_140d02e05;
    lVar16 = 0;
    uVar13 = CONCAT71((int7)((ulonglong)in_R11 >> 8),1);
LAB_140d02a0e:
    local_6d = bVar4;
    if (lVar16 == DAT_14cad00c8) {
      if ((lVar6 != 0) && (DAT_14c950c29 != 0)) {
        FUN_1456cec3c(lVar6);
      }
      FUN_148cdcd5a(param_1,local_60);
      goto LAB_140d02ed2;
    }
  }
  else {
    FUN_1456cec3c(lVar6);
LAB_140d029df:
    if (DAT_14cad00c8 == 0) {
      local_90 = &local_50;
      local_50 = FUN_144a7958c;
      local_80 = FUN_14081d0ea;
      local_88 = FUN_14081d0ea;
      local_98 = &LAB_1479b7a0c;
      local_a0 = &LAB_1463b464e;
      local_a8 = L"Engine";
      local_b0 = 0;
      local_b8 = 0x10000005;
      local_c0 = 8;
      local_c8 = 0x110;
      FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8,FUN_1463b462c);
      if (DAT_14cad00c8 == 0) {
        uVar13 = 0;
LAB_140d02e05:
        local_90 = &local_50;
        local_50 = FUN_144a7958c;
        local_80 = FUN_14081d0ea;
        local_88 = FUN_14081d0ea;
        local_98 = &LAB_1479b7a0c;
        local_a0 = &LAB_1463b464e;
        local_a8 = L"Engine";
        local_b0 = 0;
        local_b8 = 0x10000005;
        local_c0 = 8;
        local_c8 = 0x110;
        FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8,FUN_1463b462c);
        lVar16 = 0;
        uVar13 = uVar13 & 0xffffffff;
        goto LAB_140d02a0e;
      }
    }
    local_6d = true;
    if (*(int *)(lVar6 + 0x38) < *(int *)(DAT_14cad00c8 + 0x38)) {
      uVar13 = 0;
    }
    else {
      uVar13 = 0;
      lVar16 = lVar6;
      if (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(DAT_14cad00c8 + 0x38) * 8)
          == DAT_14cad00c8 + 0x30) goto LAB_140d02a0e;
    }
  }
  if ((local_6d != false) && (DAT_14c950c29 != 0)) {
    FUN_1456cec3c(lVar6);
    uVar13 = uVar13 & 0xffffffff;
  }
  puVar17 = (uint *)(param_1 + 0x250);
  iVar2 = *(int *)(param_1 + 0x268);
  if (iVar2 == 0) {
    uVar19 = 1;
    uVar12 = 0;
    iVar5 = 0;
    iVar14 = 0;
  }
  else {
    puVar7 = *(uint **)(param_1 + 0x260);
    if (*(uint **)(param_1 + 0x260) == (uint *)0x0) {
      puVar7 = puVar17;
    }
    uVar18 = *puVar7;
    if (uVar18 == 0) {
      iVar5 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar5 = iVar2 + -1;
      }
      uVar12 = 0;
      uVar19 = (ulonglong)(uint)(iVar5 >> 5);
      if (iVar5 >> 5 < 1) {
        uVar19 = uVar12;
      }
      iVar14 = 0;
      do {
        if (uVar19 == uVar12) goto LAB_140d02ed2;
        iVar14 = iVar14 + 0x20;
        uVar18 = puVar7[uVar12 + 1];
        uVar12 = uVar12 + 1;
      } while (uVar18 == 0);
    }
    else {
      uVar12 = 0;
      iVar14 = 0;
    }
    uVar19 = (ulonglong)(-uVar18 & uVar18);
    uVar1 = uVar19 * 2 + 1;
    lVar16 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    iVar5 = (iVar14 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar5) {
      iVar5 = iVar2;
    }
  }
  if (iVar5 != iVar2) {
    uVar18 = 0xffffffff;
    do {
      lVar16 = *(longlong *)(*(longlong *)(param_1 + 0x240) + (longlong)iVar5 * 0x10);
      if (lVar16 != 0) {
        if ((DAT_14c950c29 & local_6d) == 1) {
          local_6c = (uint)uVar13;
          local_68 = puVar17;
          FUN_1456cec3c(lVar6);
          uVar13 = (ulonglong)local_6c;
          puVar17 = local_68;
LAB_140d02af5:
          if (DAT_14cad00c8 == 0) {
            local_90 = &local_50;
            local_50 = FUN_144a7958c;
            local_80 = FUN_14081d0ea;
            local_88 = FUN_14081d0ea;
            local_98 = &LAB_1479b7a0c;
            local_a0 = &LAB_1463b464e;
            local_a8 = L"Engine";
            local_b0 = 0;
            local_b8 = 0x10000005;
            local_c0 = 8;
            local_c8 = 0x110;
            local_6c = (uint)uVar13;
            local_68 = puVar17;
            FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8,FUN_1463b462c);
            uVar13 = (ulonglong)local_6c;
            puVar17 = local_68;
            if (DAT_14cad00c8 == 0) goto LAB_140d02cf0;
          }
          if (*(int *)(lVar6 + 0x38) < *(int *)(DAT_14cad00c8 + 0x38)) goto LAB_140d02cf0;
          lVar15 = 0;
          if (*(longlong *)
               (*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(DAT_14cad00c8 + 0x38) * 8) ==
              DAT_14cad00c8 + 0x30) {
            lVar15 = lVar6;
          }
        }
        else {
          if ((char)uVar13 == '\0') goto LAB_140d02af5;
LAB_140d02cf0:
          lVar15 = 0;
        }
        if ((*(int *)(lVar15 + 0x38) <= *(int *)(*(longlong *)(lVar16 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar16 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar15 + 0x38) * 8) == lVar15 + 0x30)) {
          lVar15 = (longlong)*(int *)(local_60 + 200);
          uVar11 = *(int *)(local_60 + 200) + 1;
          *(uint *)(local_60 + 200) = uVar11;
          if (*(uint *)(local_60 + 0xcc) < uVar11) {
            local_6c = (uint)uVar13;
            local_68 = puVar17;
            local_58 = lVar15;
            FUN_148cdceac(local_60,lVar15);
            uVar13 = (ulonglong)local_6c;
            lVar15 = local_58;
            puVar17 = local_68;
          }
          lVar8 = *(longlong *)(local_60 + 0xc0);
          if (*(longlong *)(local_60 + 0xc0) == 0) {
            lVar8 = local_60;
          }
          *(longlong *)(lVar8 + lVar15 * 8) = lVar16;
        }
      }
      uVar18 = uVar18 & ~(uint)uVar19;
      puVar7 = *(uint **)(param_1 + 0x260);
      if (*(uint **)(param_1 + 0x260) == (uint *)0x0) {
        puVar7 = puVar17;
      }
      iVar3 = *(int *)(param_1 + 0x268);
      iVar5 = (int)uVar12;
      lVar16 = (longlong)iVar5;
      uVar11 = puVar7[lVar16] & uVar18;
      if (uVar11 == 0) {
        iVar9 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar9 = iVar3 + -1;
        }
        iVar9 = iVar9 >> 5;
        iVar14 = iVar14 + 0x20;
        iVar10 = iVar9;
        if (iVar9 < iVar5) {
          iVar10 = iVar5;
        }
        if (iVar5 < iVar9) {
          lVar15 = 0;
          do {
            uVar11 = puVar7[lVar16 + lVar15 + 1];
            if (uVar11 != 0) {
              uVar12 = (ulonglong)(iVar5 + (int)lVar15 + 1);
              uVar18 = 0xffffffff;
              goto LAB_140d02bae;
            }
            iVar14 = iVar14 + 0x20;
            lVar15 = lVar15 + 1;
          } while (iVar10 - lVar16 != lVar15);
          uVar18 = 0xffffffff;
          iVar5 = iVar10;
        }
        uVar12 = (ulonglong)(iVar5 + 1);
        iVar5 = iVar3;
      }
      else {
LAB_140d02bae:
        uVar19 = (ulonglong)(-uVar11 & uVar11);
        uVar1 = uVar19 * 2 + 1;
        lVar16 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar16 == 0; lVar16 = lVar16 + -1) {
          }
        }
        iVar5 = (iVar14 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
        if (iVar3 <= iVar5) {
          iVar5 = iVar3;
        }
      }
    } while (iVar5 != iVar2);
  }
LAB_140d02ed2:
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140d02f86 FUN_140d02f86 body=49 status=ok
// SIG undefined FUN_140d02f86(void)

longlong FUN_140d02f86(void)

{
  if (DAT_14c99c880 == 0) {
    FUN_140f50038(&DAT_14c99c880,&PTR_s__Script_DataflowCore_149fab878);
  }
  return DAT_14c99c880;
}



// FUNCTION 140d02fb8 FUN_140d02fb8 body=617 status=ok
// SIG undefined FUN_140d02fb8(void)

float * FUN_140d02fb8(longlong param_1,float *param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  undefined1 uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  float fVar7;
  float fVar8;
  
  lVar4 = *(longlong *)(param_1 + 0xc);
  plVar3 = (longlong *)FUN_140d03296(param_4);
  if (lVar4 == 0) {
    if ((plVar3 == (longlong *)0x0) || (lVar4 = (**(code **)(*plVar3 + 0x10))(plVar3), lVar4 == 0))
    goto switchD_140d0305a_default;
    if (*(char *)(param_1 + 8) == '\a') {
      bVar1 = *(byte *)(param_1 + 9);
      if (*(int *)(lVar4 + 0x40) <= (int)(uint)bVar1) goto switchD_140d0305a_default;
      bVar1 = FUN_140d03222((ulonglong)bVar1 * 0x80 + (ulonglong)bVar1 * 8 +
                            *(longlong *)(lVar4 + 0x38));
      bVar1 = bVar1 ^ 1;
LAB_140d03024:
      *(undefined2 *)(param_2 + 6) = 4;
      goto LAB_140d0302d;
    }
    switch(*(char *)(param_1 + 8)) {
    case '\0':
      bVar1 = *(byte *)(param_1 + 9);
      if (*(int *)(lVar4 + 0x40) <= (int)(uint)bVar1) goto switchD_140d0305a_default;
      fVar8 = (float)FUN_14055830e((ulonglong)bVar1 * 0x80 + (ulonglong)bVar1 * 8 +
                                   *(longlong *)(lVar4 + 0x38));
      break;
    case '\x01':
      if (*(int *)(lVar4 + 0x40) <= (int)(uint)*(byte *)(param_1 + 9))
      goto switchD_140d0305a_default;
      fVar8 = (float)FUN_140d033b6(lVar4);
      break;
    case '\x02':
      bVar1 = *(byte *)(param_1 + 9);
      if (*(int *)(lVar4 + 0x40) <= (int)(uint)bVar1) goto switchD_140d0305a_default;
      fVar8 = (float)FUN_1405583ce((ulonglong)bVar1 * 0x80 + (ulonglong)bVar1 * 8 +
                                   *(longlong *)(lVar4 + 0x38));
      break;
    case '\x03':
      if ((longlong)*(int *)(lVar4 + 0x40) == 0) {
LAB_140d03197:
        fVar8 = 0.0;
      }
      else {
        lVar5 = *(longlong *)(lVar4 + 0x38);
        lVar4 = (longlong)*(int *)(lVar4 + 0x40) * 0x88;
        fVar8 = 0.0;
        do {
          fVar7 = (float)FUN_14055830e(lVar5);
          fVar8 = fVar8 + fVar7;
          lVar5 = lVar5 + 0x88;
          lVar4 = lVar4 + -0x88;
        } while (lVar4 != 0);
      }
      goto LAB_140d03102;
    case '\x04':
      fVar8 = (float)FUN_140b54f46(lVar4);
      break;
    case '\x05':
      if ((longlong)*(int *)(lVar4 + 0x40) == 0) goto LAB_140d03197;
      lVar5 = *(longlong *)(lVar4 + 0x38);
      lVar4 = (longlong)*(int *)(lVar4 + 0x40) * 0x88;
      fVar8 = 0.0;
      do {
        fVar7 = (float)FUN_1405583ce(lVar5);
        fVar8 = fVar8 + fVar7;
        lVar5 = lVar5 + 0x88;
        lVar4 = lVar4 + -0x88;
      } while (lVar4 != 0);
LAB_140d03102:
      *(undefined2 *)(param_2 + 6) = 4;
      *param_2 = fVar8;
      goto LAB_140d03085;
    case '\x06':
      bVar1 = *(byte *)(param_1 + 9);
      if ((int)(uint)bVar1 < *(int *)(lVar4 + 0x40)) {
        bVar1 = FUN_14187c7e4((ulonglong)bVar1 * 0x80 + (ulonglong)bVar1 * 8 +
                              *(longlong *)(lVar4 + 0x38));
        goto LAB_140d03024;
      }
    default:
switchD_140d0305a_default:
      *(undefined2 *)(param_2 + 6) = 0;
      uVar2 = 0;
      goto LAB_140d03031;
    }
    goto LAB_140d0307b;
  }
  if (((plVar3 == (longlong *)0x0) || (lVar4 = (**(code **)(*plVar3 + 0x20))(plVar3), lVar4 == 0))
     || (7 < *(byte *)(param_1 + 8))) goto switchD_140d0305a_default;
  lVar4 = lVar4 + 0x270;
  switch(*(byte *)(param_1 + 8)) {
  default:
    fVar8 = (float)FUN_148820e70(lVar4,*(undefined8 *)(param_1 + 0xc));
    break;
  case 1:
  case 4:
    fVar8 = (float)FUN_14881e3be(lVar4,*(undefined8 *)(param_1 + 0xc));
    break;
  case 2:
  case 5:
    fVar8 = (float)FUN_148820ef0(lVar4,*(undefined8 *)(param_1 + 0xc));
    break;
  case 6:
    fVar8 = (float)FUN_14881e3be(lVar4,*(undefined8 *)(param_1 + 0xc));
    bVar6 = fVar8 < 1.0;
    goto LAB_140d03213;
  case 7:
    fVar8 = (float)FUN_14881e3be(lVar4,*(undefined8 *)(param_1 + 0xc));
    bVar6 = 0.0 < fVar8;
LAB_140d03213:
    bVar1 = !bVar6;
    *(undefined2 *)(param_2 + 6) = 4;
LAB_140d0302d:
    *param_2 = (float)(uint)bVar1;
    uVar2 = 1;
    goto LAB_140d03031;
  }
LAB_140d0307b:
  *(undefined2 *)(param_2 + 6) = 4;
  *param_2 = fVar8;
LAB_140d03085:
  uVar2 = 3;
LAB_140d03031:
  *(undefined1 *)(param_2 + 8) = uVar2;
  return param_2;
}



// FUNCTION 140d03222 FUN_140d03222 body=116 status=ok
// SIG undefined FUN_140d03222(void)

ulonglong FUN_140d03222(char *param_1)

{
  char cVar1;
  undefined8 in_RAX;
  longlong lVar2;
  ulonglong uVar3;
  
  if (*param_1 == '\x01') {
    cVar1 = FUN_1403ae288(param_1 + 0x30);
    if (cVar1 == '\0') {
      uVar3 = 0;
    }
    else {
      lVar2 = FUN_140280ec4(param_1 + 0x30);
      uVar3 = (ulonglong)
              -(uint)(*(float *)(lVar2 + 0x30) <= *(float *)(lVar2 + 200) ||
                     0.0001 <= ABS(*(float *)(lVar2 + 200) - *(float *)(lVar2 + 0x24)));
    }
  }
  else {
    uVar3 = CONCAT71((int7)((ulonglong)in_RAX >> 8),0.0 < *(float *)(param_1 + 0x74));
  }
  return uVar3 & 0xffffffffffffff01;
}



// FUNCTION 140d03296 FUN_140d03296 body=267 status=ok
// SIG undefined FUN_140d03296(void)

undefined8 FUN_140d03296(void)

{
  longlong lVar1;
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
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = FUN_1447262c2();
  if (lVar1 != 0) {
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
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d033b6 FUN_140d033b6 body=106 status=ok
// SIG undefined FUN_140d033b6(void)

undefined8 FUN_140d033b6(longlong param_1,uint param_2)

{
  uint uVar1;
  uint uVar4;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = 0xbf800000;
  uVar4 = 0;
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 0x40))) {
    uVar2 = FUN_14055830e(0xbf800000);
    uVar1 = 0;
    uVar4 = 0;
    if (0.0 < (float)uVar2) {
      uVar3 = FUN_1405583ce((ulonglong)param_2 * 0x88 + *(longlong *)(param_1 + 0x38));
      uVar1 = -(uint)(0.0 < (float)uVar3) & (uint)((float)uVar2 / (float)uVar3);
      uVar4 = (uint)((ulonglong)uVar3 >> 0x20) & (uint)((ulonglong)uVar2 >> 0x20);
    }
  }
  return CONCAT44(uVar4,uVar1);
}



// FUNCTION 140d0343a FUN_140d0343a body=69 status=ok
// SIG undefined FUN_140d0343a(void)

undefined8 * FUN_140d0343a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149f64b40;
  FUN_1402ef3f6(param_1[2],*(undefined4 *)(param_1 + 3));
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140d03480 FUN_140d03480 body=1391 status=ok
// SIG undefined FUN_140d03480(void)

void FUN_140d03480(longlong param_1,ulonglong *param_2)

{
  uint *puVar1;
  int *piVar2;
  longlong lVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  ulonglong *puVar10;
  uint uVar11;
  longlong *plVar12;
  undefined1 auStack_88 [40];
  undefined8 *local_60;
  undefined8 *local_58;
  undefined8 **local_50;
  undefined8 **local_48;
  undefined1 local_3c [12];
  
  local_3c._4_8_ = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar6 = (undefined8 *)*param_2;
  plVar12 = *(longlong **)(param_1 + 0x90);
  puVar10 = (ulonglong *)plVar12[1];
  puVar1 = (uint *)*puVar10 + 1;
  if ((uint *)puVar10[1] < puVar1) {
    local_50 = (undefined8 **)CONCAT44(local_50._4_4_,(uint)(puVar6 != (undefined8 *)0x0));
    (**(code **)(*plVar12 + 0x170))(plVar12,&local_50,4);
    uVar11 = (uint)local_50;
    if (1 < (uint)local_50) {
      FUN_14572541c(plVar12);
      uVar11 = (uint)local_50;
    }
  }
  else {
    uVar11 = *(uint *)*puVar10;
    *puVar10 = (ulonglong)puVar1;
  }
  if (uVar11 == 0) {
    puVar5 = (undefined8 *)0x0;
    goto LAB_140d03621;
  }
  plVar12 = *(longlong **)(param_1 + 0x90);
  puVar5 = puVar6;
  if ((*(byte *)(plVar12 + 5) & 1) == 0) {
    if (((*(byte *)(plVar12 + 5) & 4) != 0) || ((*(byte *)((longlong)plVar12 + 0x2b) & 8) != 0)) {
      lVar3 = *(longlong *)(param_1 + 0x98);
      local_58 = puVar6;
      if (*(int *)(lVar3 + 0x18) != *(int *)(lVar3 + 0x44)) {
        uVar11 = ((uint)((ulonglong)puVar6 >> 0x14) & 0xffff ^ (uint)((ulonglong)puVar6 >> 4)) *
                 -0x7a143595;
        uVar11 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
        lVar7 = lVar3 + 0x48;
        if (*(longlong *)(lVar3 + 0x50) != 0) {
          lVar7 = *(longlong *)(lVar3 + 0x50);
        }
        iVar9 = *(int *)(lVar7 + (ulonglong)
                                 (*(int *)(lVar3 + 0x58) - 1U & (uVar11 >> 0x10 ^ uVar11)) * 4);
        if (iVar9 != -1) {
          lVar7 = *(longlong *)(lVar3 + 0x10);
          iVar8 = iVar9;
          do {
            if (*(undefined8 **)(lVar7 + (longlong)iVar8 * 0x18) == puVar6) goto LAB_140d03863;
            iVar8 = *(int *)(lVar7 + (longlong)iVar8 * 0x18 + 0x10);
          } while (iVar8 != -1);
        }
      }
      FUN_14042e8e0(lVar3 + 0x60,&local_50,&local_58,0);
      local_3c._0_4_ = *(uint *)(*(longlong *)(param_1 + 0x98) + 0xb0);
      *(uint *)(*(longlong *)(param_1 + 0x98) + 0xb0) = local_3c._0_4_ + 1;
      local_48 = (undefined8 **)local_3c;
      local_50 = &local_58;
      FUN_1467c4600(*(longlong *)(param_1 + 0x98) + 0x10,&local_60,&local_50,0);
      plVar12 = *(longlong **)(param_1 + 0x90);
      puVar10 = (ulonglong *)plVar12[1];
      puVar1 = (uint *)*puVar10 + 1;
      if ((uint *)puVar10[1] < puVar1) {
        if ((*(byte *)((longlong)plVar12 + 0x2a) & 2) == 0) {
          (**(code **)(*plVar12 + 0x170))(plVar12,local_3c,4);
        }
        else {
          thunk_FUN_14572512c(plVar12,local_3c);
        }
      }
      else {
        local_3c._0_4_ = *(uint *)*puVar10;
        *puVar10 = (ulonglong)puVar1;
      }
      puVar5 = (undefined8 *)FUN_14004c990(param_1,puVar6);
      if (puVar5 != (undefined8 *)0x0) {
        puVar6 = puVar5;
      }
      FUN_140d039f0(puVar6,param_1);
      FUN_146ca4900(*(longlong *)(param_1 + 0x98) + 0x60,local_58);
      puVar5 = puVar6;
    }
    goto LAB_140d03621;
  }
  puVar10 = (ulonglong *)plVar12[1];
  puVar1 = (uint *)*puVar10 + 1;
  if ((uint *)puVar10[1] < puVar1) {
    if ((*(byte *)((longlong)plVar12 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar12 + 0x170))(plVar12,local_3c,4);
    }
    else {
      thunk_FUN_14572512c(plVar12,local_3c);
    }
  }
  else {
    local_3c._0_4_ = *(uint *)*puVar10;
    *puVar10 = (ulonglong)puVar1;
  }
  if ((int)local_3c._0_4_ < 0) {
    FUN_1468216ba(*(undefined8 *)(param_1 + 0x90));
    goto LAB_140d03621;
  }
  iVar9 = local_3c._0_4_ + 1;
  plVar12 = *(longlong **)(param_1 + 0x98);
  iVar8 = (int)plVar12[1];
  uVar11 = iVar9 - iVar8;
  if (uVar11 == 0 || iVar9 < iVar8) {
LAB_140d035a6:
    if ((int)local_3c._0_4_ < iVar8) {
      puVar5 = *(undefined8 **)(*plVar12 + (ulonglong)(uint)local_3c._0_4_ * 8);
      if (puVar5 == (undefined8 *)0x0) {
        puVar5 = (undefined8 *)FUN_14004c990(param_1,puVar6);
        if (puVar5 == (undefined8 *)0x0) {
          puVar5 = puVar6;
        }
        FUN_140d039f0(puVar5,param_1);
        local_48 = (undefined8 **)local_3c;
        *(undefined8 **)(**(longlong **)(param_1 + 0x98) + (longlong)(int)local_3c._0_4_ * 8) =
             puVar5;
        local_50 = &local_58;
        local_58 = puVar5;
        FUN_14004a1c4(*(longlong *)(param_1 + 0x98) + 0x10,&local_60,&local_50,0);
      }
      goto LAB_140d03621;
    }
  }
  else {
    *(int *)(plVar12 + 1) = iVar9;
    if ((uint)(*(int *)((longlong)plVar12 + 0xc) - iVar8) < uVar11) {
      FUN_1456bd870(plVar12);
    }
    memset((void *)((longlong)iVar8 * 8 + *plVar12),0,(ulonglong)uVar11 << 3);
    if (-1 < (int)local_3c._0_4_) {
      plVar12 = *(longlong **)(param_1 + 0x98);
      iVar8 = (int)plVar12[1];
      goto LAB_140d035a6;
    }
  }
  FUN_1468216ba(*(undefined8 *)(param_1 + 0x90));
LAB_140d03621:
  if ((*(byte *)(param_1 + 0x28) & 1) != 0) {
    lVar3 = *(longlong *)(param_1 + 0x98);
    if (*(int *)(lVar3 + 0x110) != *(int *)(lVar3 + 0x13c)) {
      uVar11 = ((uint)((ulonglong)puVar5 >> 0x14) & 0xffff ^ (uint)((ulonglong)puVar5 >> 4)) *
               -0x7a143595;
      uVar11 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
      lVar7 = lVar3 + 0x140;
      if (*(longlong *)(lVar3 + 0x148) != 0) {
        lVar7 = *(longlong *)(lVar3 + 0x148);
      }
      iVar9 = *(int *)(lVar7 + (ulonglong)(*(int *)(lVar3 + 0x150) - 1U & (uVar11 >> 0x10 ^ uVar11))
                               * 4);
      if (iVar9 != -1) {
        do {
          plVar12 = (longlong *)(*(longlong *)(lVar3 + 0x108) + (longlong)iVar9 * 0x18);
          if ((undefined8 *)*plVar12 == puVar5) {
            if ((plVar12 != (longlong *)0x0) &&
               (puVar6 = (undefined8 *)plVar12[1], puVar6 != (undefined8 *)0x0)) goto LAB_140d036a0;
            break;
          }
          iVar9 = (int)plVar12[2];
        } while (iVar9 != -1);
      }
    }
    puVar6 = (undefined8 *)FUN_14001cc68(0x10,0x10);
    *puVar6 = &PTR_FUN_14a3c14f0;
    puVar6[1] = puVar5;
    if (puVar5 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puVar5 + 1) = *(int *)(puVar5 + 1) + 1;
      UNLOCK();
    }
    local_48 = &local_58;
    local_50 = &local_60;
    local_60 = puVar5;
    local_58 = puVar6;
    FUN_1400496ee((longlong *)(lVar3 + 0x108),local_3c,&local_50,0);
LAB_140d036a0:
    puVar6 = (undefined8 *)puVar6[1];
    puVar5 = (undefined8 *)*param_2;
    if (puVar5 != puVar6) {
      *param_2 = (ulonglong)puVar6;
      if (puVar6 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(puVar6 + 1) = *(int *)(puVar6 + 1) + 1;
        UNLOCK();
      }
      if (puVar5 != (undefined8 *)0x0) {
        LOCK();
        piVar2 = (int *)(puVar5 + 1);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if ((*piVar2 == 0) && (*(int *)((longlong)puVar5 + 0xc) == 0)) {
          (**(code **)*puVar5)(puVar5,1);
        }
      }
    }
  }
  if ((local_3c._4_8_ ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
  while (iVar9 = (int)puVar10[2], iVar9 != -1) {
LAB_140d03863:
    puVar10 = (ulonglong *)(lVar7 + (longlong)iVar9 * 0x18);
    if ((undefined8 *)*puVar10 == puVar6) goto LAB_140d03959;
  }
  puVar10 = (ulonglong *)0x0;
LAB_140d03959:
  puVar4 = *(undefined4 **)plVar12[1];
  if ((undefined4 *)((undefined8 *)plVar12[1])[1] < puVar4 + 1) {
    if ((*(byte *)((longlong)plVar12 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar12 + 0x170))(plVar12,puVar10 + 1,4);
    }
    else {
      thunk_FUN_14572512c();
    }
  }
  else {
    *(undefined4 *)(puVar10 + 1) = *puVar4;
    *(longlong *)plVar12[1] = *(longlong *)plVar12[1] + 4;
  }
  goto LAB_140d03621;
}



// FUNCTION 140d039f0 FUN_140d039f0 body=554 status=ok
// SIG undefined FUN_140d039f0(void)

void FUN_140d039f0(longlong param_1,longlong *param_2)

{
  float *pfVar1;
  ulonglong *puVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  ulonglong uVar6;
  undefined1 auStack_88 [40];
  float local_60 [12];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_14004c296(local_60,*(undefined1 *)(param_1 + 0x1c));
  FUN_14004b8ea(param_1,param_2);
  FUN_140d042e4(param_1 + 0x20,param_2);
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cba8);
  iVar5 = FUN_1448332aa(param_2,&DAT_149e3cba8);
  if (iVar5 < 7) {
    *(undefined4 *)(param_1 + 0xe8) = *(undefined4 *)(param_1 + 0x138);
    *(undefined4 *)(param_1 + 0xec) = *(undefined4 *)(param_1 + 0x13c);
    *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(param_1 + 0x140);
    *(undefined4 *)(param_1 + 0xf4) = *(undefined4 *)(param_1 + 0x144);
    *(undefined4 *)(param_1 + 0xf8) = *(undefined4 *)(param_1 + 0x150);
    *(undefined4 *)(param_1 + 0xfc) = *(undefined4 *)(param_1 + 0x154);
    *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(param_1 + 0x158);
    *(undefined4 *)(param_1 + 0x104) = *(undefined4 *)(param_1 + 0x15c);
    FUN_140d03c1c(param_1);
  }
  else {
    FUN_140d0406a(param_1 + 0xb0,param_2);
    bVar4 = true;
    do {
      bVar3 = bVar4;
      uVar6 = (ulonglong)(((byte)~bVar3 & 1) << 3);
      local_60[0] = (float)*(double *)(param_1 + 0xe8 + uVar6);
      puVar2 = (ulonglong *)param_2[1];
      pfVar1 = (float *)*puVar2 + 1;
      if ((float *)puVar2[1] < pfVar1) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
          (**(code **)(*param_2 + 0x170))(param_2,local_60,4);
        }
        else {
          thunk_FUN_14572512c(param_2,local_60);
        }
      }
      else {
        local_60[0] = *(float *)*puVar2;
        *puVar2 = (ulonglong)pfVar1;
      }
      *(double *)(param_1 + 0xe8 + uVar6) = (double)local_60[0];
      bVar4 = false;
    } while (bVar3);
    bVar4 = true;
    do {
      bVar3 = bVar4;
      uVar6 = (ulonglong)(((byte)~bVar3 & 1) << 3);
      local_60[0] = (float)*(double *)(param_1 + 0xf8 + uVar6);
      puVar2 = (ulonglong *)param_2[1];
      pfVar1 = (float *)*puVar2 + 1;
      if ((float *)puVar2[1] < pfVar1) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
          (**(code **)(*param_2 + 0x170))(param_2,local_60,4);
        }
        else {
          thunk_FUN_14572512c(param_2,local_60);
        }
      }
      else {
        local_60[0] = *(float *)*puVar2;
        *puVar2 = (ulonglong)pfVar1;
      }
      *(double *)(param_1 + 0xf8 + uVar6) = (double)local_60[0];
      bVar4 = false;
    } while (bVar3);
    FUN_140d03e72(param_2,param_1 + 0x108);
  }
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    FUN_140d03c1c(param_1);
    FUN_1400c3526(param_1,local_60);
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d03c1c FUN_140d03c1c body=200 status=ok
// SIG undefined FUN_140d03c1c(void)

void FUN_140d03c1c(longlong param_1)

{
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  double local_48;
  double local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  int local_20;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_1c = *(ushort *)(param_1 + 0x90) - 1;
  local_20 = *(ushort *)(param_1 + 0x92) - 1;
  local_38 = 0;
  uStack_30 = 0;
  local_40 = (double)local_1c;
  local_48 = (double)local_20;
  local_88 = 0;
  FUN_140d03ce6(&local_80);
  *(undefined4 *)(param_1 + 0xb0) = local_80;
  *(undefined4 *)(param_1 + 0xb4) = uStack_7c;
  *(undefined4 *)(param_1 + 0xb8) = uStack_78;
  *(undefined4 *)(param_1 + 0xbc) = uStack_74;
  *(undefined4 *)(param_1 + 0xc0) = local_70;
  *(undefined4 *)(param_1 + 0xc4) = uStack_6c;
  *(undefined4 *)(param_1 + 200) = uStack_68;
  *(undefined4 *)(param_1 + 0xcc) = uStack_64;
  *(undefined4 *)(param_1 + 0xd0) = local_60;
  *(undefined4 *)(param_1 + 0xd4) = uStack_5c;
  *(undefined4 *)(param_1 + 0xd8) = uStack_58;
  *(undefined4 *)(param_1 + 0xdc) = uStack_54;
  *(undefined8 *)(param_1 + 0xe0) = local_50;
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d03ce6 FUN_140d03ce6 body=395 status=ok
// SIG undefined FUN_140d03ce6(void)

void FUN_140d03ce6(double *param_1,double *param_2,double *param_3,double *param_4,uint param_5)

{
  double dVar1;
  double dVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  
  dVar13 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = dVar13;
  dVar13 = param_3[1];
  param_1[2] = *param_3;
  param_1[3] = dVar13;
  dVar1 = *param_4;
  param_1[4] = dVar1;
  dVar13 = param_1[2];
  uVar7 = SUB84(dVar13,0);
  uVar8 = (undefined4)((ulonglong)dVar13 >> 0x20);
  iVar5 = (int)((ulonglong)dVar1 >> 0x20);
  if (((((dVar13 != -1.79769313486232e+308) || (NAN(dVar13))) ||
       (param_1[3] != -1.79769313486232e+308)) ||
      ((NAN(param_1[3]) || (*param_1 != 1.79769313486232e+308)))) ||
     ((NAN(*param_1) || ((param_1[1] != 1.79769313486232e+308 || (NAN(param_1[1]))))))) {
    bVar4 = true;
    do {
      bVar3 = bVar4;
      uVar6 = (ulonglong)((byte)~bVar3 & 1);
      if (param_1[uVar6 + 2] < param_1[uVar6]) goto LAB_140d03df2;
      bVar4 = false;
    } while (bVar3);
    dVar9 = param_1[3];
    dVar12 = *param_1;
    dVar11 = param_1[1];
    dVar10 = (dVar9 - dVar11) / (double)iVar5;
    dVar13 = (dVar13 - dVar12) / (double)SUB84(dVar1,0);
    param_1[5] = dVar13;
    param_1[6] = dVar10;
  }
  else {
LAB_140d03df2:
    param_1[2] = 0.0;
    param_1[3] = 0.0;
    *param_1 = 0.0;
    param_1[1] = 0.0;
    param_1[5] = 0.0;
    param_1[6] = 0.0;
    dVar9 = 0.0;
    uVar7 = 0;
    uVar8 = 0;
    dVar11 = 0.0;
    dVar12 = 0.0;
    dVar13 = 0.0;
    dVar10 = 0.0;
  }
  if (param_5 != 0) {
    dVar2 = (double)param_5;
    *param_1 = dVar12 - dVar13 * dVar2;
    param_1[1] = dVar11 - dVar10 * dVar2;
    param_1[2] = (double)CONCAT44(uVar8,uVar7) + dVar13 * dVar2;
    param_1[3] = dVar9 + dVar10 * dVar2;
    *(int *)(param_1 + 4) = SUB84(dVar1,0) + (int)(dVar2 + dVar2);
    *(int *)((longlong)param_1 + 0x24) = iVar5 + (int)(dVar2 + dVar2);
  }
  return;
}



// FUNCTION 140d03e72 FUN_140d03e72 body=502 status=ok
// SIG undefined FUN_140d03e72(void)

ulonglong * FUN_140d03e72(longlong *param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  ulonglong *puVar3;
  longlong lVar4;
  undefined1 auStack_98 [32];
  undefined **local_78;
  uint local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined2 local_60;
  undefined1 local_5e;
  undefined2 local_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  (**(code **)(*param_1 + 0x218))(param_1,&DAT_149e3cba8);
  iVar2 = FUN_1448332aa(param_1,&DAT_149e3cba8);
  if (iVar2 < 0x19) {
    local_70 = 0;
    local_6c = 0;
    local_68 = 0;
    local_60 = 0x101;
    local_5e = 1;
    local_5c = 0x101;
    local_78 = &PTR_FUN_149f489d0;
    local_58 = 0x7fefffffffffffff;
    uStack_50 = 0x7fefffffffffffff;
    local_48 = 0x7fefffffffffffff;
    local_40 = 0xffefffffffffffff;
    uStack_38 = 0xffefffffffffffff;
    local_30 = 0xffefffffffffffff;
    FUN_146ca2836(&local_78,param_1);
    param_2[2] = local_48;
    *param_2 = local_58;
    param_2[1] = uStack_50;
    *(undefined4 *)(param_2 + 3) = (undefined4)local_40;
    *(undefined4 *)((longlong)param_2 + 0x1c) = local_40._4_4_;
    *(undefined4 *)(param_2 + 4) = (undefined4)uStack_38;
    *(undefined4 *)((longlong)param_2 + 0x24) = uStack_38._4_4_;
    param_2[5] = local_30;
    local_78 = &PTR_FUN_149f553e0;
    puVar3 = (ulonglong *)(ulonglong)local_70;
  }
  else {
    lVar4 = 0;
    do {
      local_78 = (undefined **)CONCAT44(local_78._4_4_,(float)(double)param_2[lVar4]);
      puVar3 = (ulonglong *)param_1[1];
      puVar1 = (undefined4 *)*puVar3 + 1;
      if ((undefined4 *)puVar3[1] < puVar1) {
        if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
          (**(code **)(*param_1 + 0x170))(param_1,&local_78,4);
        }
        else {
          thunk_FUN_14572512c(param_1,&local_78);
        }
      }
      else {
        local_78 = (undefined **)CONCAT44(local_78._4_4_,*(undefined4 *)*puVar3);
        *puVar3 = (ulonglong)puVar1;
      }
      param_2[lVar4] = (double)local_78._0_4_;
      lVar4 = lVar4 + 1;
    } while (lVar4 != 3);
    lVar4 = 0;
    do {
      local_78 = (undefined **)CONCAT44(local_78._4_4_,(float)(double)param_2[lVar4 + 3]);
      puVar3 = (ulonglong *)param_1[1];
      puVar1 = (undefined4 *)*puVar3 + 1;
      if ((undefined4 *)puVar3[1] < puVar1) {
        if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
          puVar3 = (ulonglong *)(**(code **)(*param_1 + 0x170))(param_1,&local_78,4);
        }
        else {
          puVar3 = (ulonglong *)thunk_FUN_14572512c(param_1,&local_78);
        }
      }
      else {
        local_78 = (undefined **)CONCAT44(local_78._4_4_,*(undefined4 *)*puVar3);
        *puVar3 = (ulonglong)puVar1;
      }
      param_2[lVar4 + 3] = (double)local_78._0_4_;
      lVar4 = lVar4 + 1;
    } while (lVar4 != 3);
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d0406a FUN_140d0406a body=520 status=ok
// SIG undefined FUN_140d0406a(void)

void FUN_140d0406a(longlong param_1,longlong *param_2)

{
  float *pfVar1;
  ulonglong *puVar2;
  bool bVar3;
  bool bVar4;
  ulonglong uVar5;
  undefined1 auStack_58 [36];
  float local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  bVar4 = true;
  do {
    bVar3 = bVar4;
    uVar5 = (ulonglong)(((byte)~bVar3 & 1) << 3);
    local_34 = (float)*(double *)(param_1 + uVar5);
    puVar2 = (ulonglong *)param_2[1];
    pfVar1 = (float *)*puVar2 + 1;
    if ((float *)puVar2[1] < pfVar1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_34,4);
      }
      else {
        thunk_FUN_14572512c(param_2,&local_34);
      }
    }
    else {
      local_34 = *(float *)*puVar2;
      *puVar2 = (ulonglong)pfVar1;
    }
    *(double *)(param_1 + uVar5) = (double)local_34;
    bVar4 = false;
  } while (bVar3);
  bVar4 = true;
  do {
    bVar3 = bVar4;
    uVar5 = (ulonglong)(((byte)~bVar3 & 1) << 3);
    local_34 = (float)*(double *)(param_1 + 0x10 + uVar5);
    puVar2 = (ulonglong *)param_2[1];
    pfVar1 = (float *)*puVar2 + 1;
    if ((float *)puVar2[1] < pfVar1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_34,4);
      }
      else {
        thunk_FUN_14572512c(param_2,&local_34);
      }
    }
    else {
      local_34 = *(float *)*puVar2;
      *puVar2 = (ulonglong)pfVar1;
    }
    *(double *)(param_1 + 0x10 + uVar5) = (double)local_34;
    bVar4 = false;
  } while (bVar3);
  FUN_140d04273(param_2,param_1 + 0x20);
  bVar4 = true;
  do {
    bVar3 = bVar4;
    uVar5 = (ulonglong)(((byte)~bVar3 & 1) << 3);
    local_34 = (float)*(double *)(param_1 + 0x28 + uVar5);
    puVar2 = (ulonglong *)param_2[1];
    pfVar1 = (float *)*puVar2 + 1;
    if ((float *)puVar2[1] < pfVar1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_34,4);
      }
      else {
        thunk_FUN_14572512c(param_2,&local_34);
      }
    }
    else {
      local_34 = *(float *)*puVar2;
      *puVar2 = (ulonglong)pfVar1;
    }
    *(double *)(param_1 + 0x28 + uVar5) = (double)local_34;
    bVar4 = false;
  } while (bVar3);
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d04273 FUN_140d04273 body=112 status=ok
// SIG undefined FUN_140d04273(void)

longlong * FUN_140d04273(longlong *param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  bool bVar3;
  longlong lVar4;
  bool bVar5;
  
  lVar4 = 0;
  bVar3 = true;
  do {
    bVar5 = bVar3;
    puVar1 = (undefined4 *)(param_2 + lVar4 * 4);
    puVar2 = *(undefined4 **)param_1[1];
    if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar2 + 1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,puVar1,4);
      }
      else {
        thunk_FUN_14572512c(param_1);
      }
    }
    else {
      *puVar1 = *puVar2;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
    }
    lVar4 = 1;
    bVar3 = false;
  } while (bVar5);
  return param_1;
}



// FUNCTION 140d042e4 FUN_140d042e4 body=1895 status=ok
// SIG undefined FUN_140d042e4(void)

void FUN_140d042e4(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  double *pdVar2;
  ulonglong *puVar3;
  double *pdVar4;
  undefined2 *puVar5;
  undefined1 auVar6 [16];
  int iVar7;
  undefined2 *puVar8;
  longlong lVar9;
  undefined1 auStack_68 [32];
  longlong local_48;
  ulonglong uStack_40;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_2c = 8;
  local_30 = 2;
  puVar3 = (ulonglong *)param_2[1];
  puVar1 = (undefined4 *)*puVar3 + 1;
  if ((undefined4 *)puVar3[1] < puVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_2c,4);
    }
    else {
      thunk_FUN_14572512c(param_2,&local_2c);
    }
  }
  else {
    local_2c = *(undefined4 *)*puVar3;
    *puVar3 = (ulonglong)puVar1;
  }
  puVar3 = (ulonglong *)param_2[1];
  puVar1 = (undefined4 *)*puVar3 + 1;
  if ((undefined4 *)puVar3[1] < puVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_30,4);
    }
    else {
      thunk_FUN_14572512c(param_2,&local_30);
    }
  }
  else {
    local_30 = *(undefined4 *)*puVar3;
    *puVar3 = (ulonglong)puVar1;
  }
  FUN_144a67fb4(param_2,param_1);
  lVar9 = 6;
  do {
    local_48 = CONCAT44(local_48._4_4_,(float)*(double *)(param_1 + lVar9 * 8));
    puVar3 = (ulonglong *)param_2[1];
    puVar1 = (undefined4 *)*puVar3 + 1;
    if ((undefined4 *)puVar3[1] < puVar1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_48,4);
      }
      else {
        thunk_FUN_14572512c(param_2,&local_48);
      }
    }
    else {
      local_48 = CONCAT44(local_48._4_4_,*(undefined4 *)*puVar3);
      *puVar3 = (ulonglong)puVar1;
    }
    *(double *)(param_1 + lVar9 * 8) = (double)(float)local_48;
    lVar9 = lVar9 + 1;
  } while (lVar9 != 9);
  pdVar2 = (double *)(param_1 + 0x60);
  if (*(int *)((longlong)param_2 + 0x44) < 0x3ec) {
    local_48 = CONCAT44(local_48._4_4_,(float)*pdVar2);
    puVar3 = (ulonglong *)param_2[1];
    puVar1 = (undefined4 *)*puVar3 + 1;
    if ((undefined4 *)puVar3[1] < puVar1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_48,4);
      }
      else {
        thunk_FUN_14572512c(param_2,&local_48);
      }
    }
    else {
      local_48 = CONCAT44(local_48._4_4_,*(undefined4 *)*puVar3);
      *puVar3 = (ulonglong)puVar1;
    }
    if ((*(byte *)(param_2 + 5) & 1) != 0) {
      *pdVar2 = (double)(float)local_48;
    }
  }
  else {
    pdVar4 = *(double **)param_2[1];
    if ((double *)((undefined8 *)param_2[1])[1] < pdVar4 + 1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,pdVar2,8);
      }
      else {
        thunk_FUN_146821949(param_2,pdVar2);
      }
    }
    else {
      *pdVar2 = *pdVar4;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 8;
    }
  }
  pdVar2 = (double *)(param_1 + 0x68);
  if (*(int *)((longlong)param_2 + 0x44) < 0x3ec) {
    local_48 = CONCAT44(local_48._4_4_,(float)*pdVar2);
    puVar3 = (ulonglong *)param_2[1];
    puVar1 = (undefined4 *)*puVar3 + 1;
    if ((undefined4 *)puVar3[1] < puVar1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_48,4);
      }
      else {
        thunk_FUN_14572512c(param_2,&local_48);
      }
    }
    else {
      local_48 = CONCAT44(local_48._4_4_,*(undefined4 *)*puVar3);
      *puVar3 = (ulonglong)puVar1;
    }
    if ((*(byte *)(param_2 + 5) & 1) != 0) {
      *pdVar2 = (double)(float)local_48;
    }
  }
  else {
    pdVar4 = *(double **)param_2[1];
    if ((double *)((undefined8 *)param_2[1])[1] < pdVar4 + 1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,pdVar2,8);
      }
      else {
        thunk_FUN_146821949(param_2,pdVar2);
      }
    }
    else {
      *pdVar2 = *pdVar4;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 8;
    }
  }
  puVar5 = *(undefined2 **)param_2[1];
  if ((undefined2 *)((undefined8 *)param_2[1])[1] < puVar5 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined2 *)(param_1 + 0x70),2);
    }
    else {
      thunk_FUN_1457251a8(param_2);
    }
  }
  else {
    *(undefined2 *)(param_1 + 0x70) = *puVar5;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 2;
  }
  puVar5 = *(undefined2 **)param_2[1];
  if ((undefined2 *)((undefined8 *)param_2[1])[1] < puVar5 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined2 *)(param_1 + 0x72),2);
    }
    else {
      thunk_FUN_1457251a8(param_2);
    }
  }
  else {
    *(undefined2 *)(param_1 + 0x72) = *puVar5;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 2;
  }
  auVar6._4_4_ = (float)*(double *)(param_1 + 0x38);
  auVar6._0_4_ = (float)*(double *)(param_1 + 0x30);
  auVar6._8_4_ = (float)*(double *)(param_1 + 0x40);
  auVar6._12_4_ = 0;
  *(undefined1 (*) [16])(param_1 + 0x50) = auVar6;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cba8);
  iVar7 = FUN_1448332aa(param_2,&DAT_149e3cba8);
  if (6 < iVar7) {
    pdVar2 = (double *)(param_1 + 0x78);
    if (*(int *)((longlong)param_2 + 0x44) < 0x3ec) {
      local_48 = CONCAT44(local_48._4_4_,(float)*pdVar2);
      puVar3 = (ulonglong *)param_2[1];
      puVar1 = (undefined4 *)*puVar3 + 1;
      if ((undefined4 *)puVar3[1] < puVar1) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
          (**(code **)(*param_2 + 0x170))(param_2,&local_48,4);
        }
        else {
          thunk_FUN_14572512c(param_2,&local_48);
        }
      }
      else {
        local_48 = CONCAT44(local_48._4_4_,*(undefined4 *)*puVar3);
        *puVar3 = (ulonglong)puVar1;
      }
      if ((*(byte *)(param_2 + 5) & 1) != 0) {
        *pdVar2 = (double)(float)local_48;
      }
    }
    else {
      pdVar4 = *(double **)param_2[1];
      if ((double *)((undefined8 *)param_2[1])[1] < pdVar4 + 1) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
          (**(code **)(*param_2 + 0x170))(param_2,pdVar2,8);
        }
        else {
          thunk_FUN_146821949(param_2,pdVar2);
        }
      }
      else {
        *pdVar2 = *pdVar4;
        *(longlong *)param_2[1] = *(longlong *)param_2[1] + 8;
      }
    }
    pdVar2 = (double *)(param_1 + 0x80);
    if (*(int *)((longlong)param_2 + 0x44) < 0x3ec) {
      local_48 = CONCAT44(local_48._4_4_,(float)*pdVar2);
      puVar3 = (ulonglong *)param_2[1];
      puVar1 = (undefined4 *)*puVar3 + 1;
      if ((undefined4 *)puVar3[1] < puVar1) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
          (**(code **)(*param_2 + 0x170))(param_2,&local_48,4);
        }
        else {
          thunk_FUN_14572512c(param_2,&local_48);
        }
      }
      else {
        local_48 = CONCAT44(local_48._4_4_,*(undefined4 *)*puVar3);
        *puVar3 = (ulonglong)puVar1;
      }
      if ((*(byte *)(param_2 + 5) & 1) != 0) {
        *pdVar2 = (double)(float)local_48;
      }
    }
    else {
      pdVar4 = *(double **)param_2[1];
      if ((double *)((undefined8 *)param_2[1])[1] < pdVar4 + 1) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
          (**(code **)(*param_2 + 0x170))(param_2,pdVar2,8);
        }
        else {
          thunk_FUN_146821949(param_2,pdVar2);
        }
      }
      else {
        *pdVar2 = *pdVar4;
        *(longlong *)param_2[1] = *(longlong *)param_2[1] + 8;
      }
    }
    iVar7 = FUN_1448332aa(param_2,&DAT_149e3cba8);
    if (iVar7 < 0x17) {
      local_48 = 0;
      uStack_40 = 0;
      FUN_146dad7f7(param_2,&local_48);
      FUN_146dae043(local_48,uStack_40 & 0xffffffff);
    }
    else {
      iVar7 = FUN_1448332aa(param_2,&DAT_149e3cba8);
      if (0x1f < iVar7) goto LAB_140d045e1;
      local_48 = 0;
      uStack_40 = 0;
      FUN_146dad8ef(param_2,&local_48);
    }
    if (local_48 != 0) {
      FUN_1400020a8();
    }
  }
LAB_140d045e1:
  iVar7 = FUN_1448332aa(param_2,&DAT_149e3cba8);
  if (0x11 < iVar7) {
    FUN_144a681b6(param_2,param_1 + 0x20);
  }
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc78);
  iVar7 = FUN_1448332aa(param_2,&DAT_149e3cc78);
  if (iVar7 != 0x53) {
    iVar7 = FUN_1448332aa(param_2,&DAT_149e3cc78);
    if (iVar7 < 0x54) {
      FUN_146d9f192(param_1);
      goto LAB_140d04686;
    }
  }
  FUN_144a683d1(param_2,param_1 + 0x10);
  puVar8 = (undefined2 *)(param_1 + 0x88);
  puVar5 = *(undefined2 **)param_2[1];
  if ((undefined2 *)((undefined8 *)param_2[1])[1] < puVar5 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,puVar8,2);
    }
    else {
      thunk_FUN_1457251a8(param_2,puVar8);
    }
  }
  else {
    *puVar8 = *puVar5;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 2;
  }
LAB_140d04686:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d04a4c FUN_140d04a4c body=122 status=ok
// SIG undefined FUN_140d04a4c(void)

void FUN_140d04a4c(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_14488eebe(param_1);
    }
    memset((void *)((longlong)iVar1 * 2 + *param_1),0,(longlong)(param_2 - iVar1) * 2);
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
      FUN_144715f92(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 140d04ac6 FUN_140d04ac6 body=118 status=ok
// SIG undefined FUN_140d04ac6(void)

void FUN_140d04ac6(longlong param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 8) = param_2;
    if ((uint)(*(int *)(param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146d9f382(param_1,iVar1);
    }
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 8) = param_2, param_3 == '\x01')) {
      FUN_146d9f408(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 140d04b3e FUN_140d04b3e body=315 status=ok
// SIG undefined FUN_140d04b3e(void)

void FUN_140d04b3e(longlong param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (param_2 == 0) {
    uVar5 = 0;
  }
  else {
    uVar3 = (longlong)param_2 * 4;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar5 = uVar3 + 0xf;
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar5 >> 4]];
        }
        else {
          if ((uVar5 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar5 >> 4];
            uVar4 = 0x32;
            if (0x32 < bVar2) {
              uVar4 = (ulonglong)bVar2;
            }
            uVar6 = 0x32 - (ulonglong)bVar2;
            do {
              uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_140d04ba8;
              lVar1 = uVar4 + 1 + uVar6;
              uVar6 = uVar6 - 1;
            } while (lVar1 != 0x33);
          }
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar3 & ((uVar5 & 0xfffffffffffffff0) + uVar3) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,2);
      }
    }
LAB_140d04ba8:
    uVar5 = 0x7fffffff;
    if (param_2 <= (int)(uVar3 >> 2)) {
      uVar5 = uVar3 >> 2 & 0xffffffff;
    }
  }
  if ((int)uVar5 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar5,4,2);
  }
  return;
}



// FUNCTION 140d04c7a FUN_140d04c7a body=56 status=ok
// SIG undefined FUN_140d04c7a(void)

void FUN_140d04c7a(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0x10);
  iVar1 = (int)plVar2[1];
  *(uint *)(plVar2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)plVar2 + 0xc) < iVar1 + 1U) {
    FUN_140d04cb2(plVar2,iVar1);
  }
  *(undefined8 *)(*plVar2 + (longlong)iVar1 * 8) = param_2;
  return;
}



// FUNCTION 140d04cb2 FUN_140d04cb2 body=353 status=ok
// SIG undefined FUN_140d04cb2(void)

void FUN_140d04cb2(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140d04d39;
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
LAB_140d04d39:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 140d04e14 FUN_140d04e14 body=49 status=ok
// SIG undefined FUN_140d04e14(void)

void FUN_140d04e14(longlong param_1)

{
  FUN_140d04eae(param_1 + 0x298);
  FUN_140d05008(param_1 + 0x298);
  FUN_140d04e45(*(undefined4 *)(param_1 + 0x2b0));
  return;
}



// FUNCTION 140d04e45 FUN_140d04e45 body=105 status=ok
// SIG undefined FUN_140d04e45(void)

void FUN_140d04e45(int param_1)

{
  ulonglong uVar1;
  int *piVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar5 = (ulonglong)DAT_14caa27e0;
  uVar4 = uVar5 * 0x150 | 4;
  do {
    if ((int)uVar5 < 1) {
      return;
    }
    uVar5 = (ulonglong)((int)uVar5 - 1);
    uVar1 = uVar4 - 0x150;
    piVar2 = (int *)(DAT_14caa27d8 + -0x154 + uVar4);
    uVar4 = uVar1;
  } while (*piVar2 != param_1);
  iVar3 = *(int *)(DAT_14caa27d8 + uVar1);
  *(int *)(DAT_14caa27d8 + uVar1) = iVar3 + -1;
  if (1 < iVar3) {
    return;
  }
  FUN_14745e28e(&DAT_14caa27d8);
  FUN_14745e2fe(&DAT_14caa27d8);
  return;
}



// FUNCTION 140d04eae FUN_140d04eae body=210 status=ok
// SIG undefined FUN_140d04eae(void)

void FUN_140d04eae(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  uint *puVar6;
  undefined *puVar7;
  
  if (*(char *)(param_1 + 0x39) == '\x01') {
    if (DAT_14caa7238 != DAT_14caa7264) {
      puVar7 = &DAT_14caa7268;
      if (DAT_14caa7270 != (undefined *)0x0) {
        puVar7 = DAT_14caa7270;
      }
      uVar1 = *(uint *)(puVar7 + (ulonglong)(DAT_14caa7278 - 1U & *(uint *)(param_1 + 0x18)) * 4);
      while (uVar1 != 0xffffffff) {
        puVar6 = (uint *)(DAT_14caa7230 + (longlong)(int)uVar1 * 0x18);
        if (*puVar6 == *(uint *)(param_1 + 0x18)) goto LAB_140d04f14;
        uVar1 = puVar6[4];
      }
    }
    puVar6 = (uint *)0x0;
LAB_140d04f14:
    lVar2 = *(longlong *)(puVar6 + 2);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    lVar5 = FUN_140d04fc2(lVar2,uVar3);
    if (lVar5 == param_1) {
      FUN_140d04f80(lVar2,uVar3,*(undefined8 *)(param_1 + 8));
    }
    puVar4 = *(undefined8 **)(param_1 + 0x10);
    if (*(longlong *)(param_1 + 8) != 0) {
      *(undefined8 **)(*(longlong *)(param_1 + 8) + 0x10) = puVar4;
    }
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = *(undefined8 *)(param_1 + 8);
    }
    *(undefined1 *)(param_1 + 0x39) = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(int *)(lVar2 + 0x4c) = *(int *)(lVar2 + 0x4c) + -1;
  }
  return;
}



// FUNCTION 140d04f80 FUN_140d04f80 body=66 status=ok
// SIG undefined FUN_140d04f80(void)

void FUN_140d04f80(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 4);
  iVar3 = (int)param_2;
  if ((iVar1 <= iVar3) && (iVar3 < iVar1 + *(int *)(param_1 + 0xc))) {
    iVar2 = *(int *)(param_1 + 8);
    iVar4 = (int)((ulonglong)param_2 >> 0x20);
    if ((iVar2 <= iVar4) && (iVar4 < iVar2 + *(int *)(param_1 + 0x10))) {
      *(undefined8 *)
       (*(longlong *)(param_1 + 0x38) +
       (longlong)((iVar3 - iVar1) + (iVar4 - iVar2) * *(int *)(param_1 + 0xc)) * 8) = param_3;
    }
  }
  return;
}



// FUNCTION 140d04fc2 FUN_140d04fc2 body=69 status=ok
// SIG undefined FUN_140d04fc2(void)

undefined8 FUN_140d04fc2(longlong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 4);
  iVar3 = (int)param_2;
  if ((iVar1 <= iVar3) && (iVar3 < iVar1 + *(int *)(param_1 + 0xc))) {
    iVar2 = *(int *)(param_1 + 8);
    iVar4 = (int)((ulonglong)param_2 >> 0x20);
    if ((iVar2 <= iVar4) && (iVar4 < iVar2 + *(int *)(param_1 + 0x10))) {
      return *(undefined8 *)
              (*(longlong *)(param_1 + 0x38) +
              (longlong)((iVar3 - iVar1) + (iVar4 - iVar2) * *(int *)(param_1 + 0xc)) * 8);
    }
  }
  return 0;
}



// FUNCTION 140d05008 FUN_140d05008 body=2917 status=ok
// SIG undefined FUN_140d05008(void)

void FUN_140d05008(longlong param_1)

{
  ulonglong uVar1;
  int *piVar2;
  byte bVar3;
  undefined8 uVar4;
  int iVar5;
  undefined *puVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint *puVar11;
  uint *puVar12;
  int iVar13;
  undefined4 *puVar14;
  longlong lVar15;
  longlong *plVar16;
  int iVar17;
  ulonglong uVar18;
  longlong lVar19;
  uint uVar20;
  ulonglong uVar21;
  bool bVar22;
  undefined1 auStack_c8 [40];
  longlong *local_a0;
  uint *local_98;
  longlong *local_90;
  undefined8 local_88;
  uint *local_80;
  undefined8 local_78;
  int local_70;
  undefined4 local_6c;
  undefined8 local_68;
  int *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (DAT_14caa7238 != DAT_14caa7264) {
    puVar6 = &DAT_14caa7268;
    if (DAT_14caa7270 != (undefined *)0x0) {
      puVar6 = DAT_14caa7270;
    }
    uVar8 = *(uint *)(puVar6 + (ulonglong)(DAT_14caa7278 - 1U & *(uint *)(param_1 + 0x18)) * 4);
    while (uVar8 != 0xffffffff) {
      puVar11 = (uint *)(DAT_14caa7230 + (longlong)(int)uVar8 * 0x18);
      if (*puVar11 == *(uint *)(param_1 + 0x18)) goto LAB_140d05082;
      uVar8 = puVar11[4];
    }
  }
  puVar11 = (uint *)0x0;
LAB_140d05082:
  piVar2 = *(int **)(puVar11 + 2);
  piVar2[0x12] = piVar2[0x12] + -1;
  *(undefined1 *)(param_1 + 0x38) = 0;
  iVar5 = piVar2[0x12];
  iVar13 = piVar2[0x7e];
  piVar2[0x7e] = iVar13 + 1;
  if ((0x7e < iVar13) && (iVar5 == piVar2[0x13])) {
    if (0x7f < piVar2[4] * piVar2[3] - iVar5) {
      FUN_140d05cba(piVar2);
      iVar5 = piVar2[0x12];
    }
    piVar2[0x7e] = 0;
  }
  if (iVar5 == 0) {
    if (piVar2 != (int *)0x0) {
      iVar5 = *piVar2;
      puVar14 = DAT_14caa7290;
      if (DAT_14caa7290 == (undefined4 *)0x0) {
        puVar14 = &DAT_14caa7280;
      }
      iVar13 = iVar5 + 0x1f;
      if (-1 < iVar5) {
        iVar13 = iVar5;
      }
      bVar3 = (byte)iVar5 & 0x1f;
      puVar14[iVar13 >> 5] = puVar14[iVar13 >> 5] & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
      if (DAT_14caa7298 != 0) {
        puVar14 = &DAT_14caa7280;
        if (DAT_14caa7290 != (undefined4 *)0x0) {
          puVar14 = DAT_14caa7290;
        }
        uVar18 = (ulonglong)(DAT_14caa7298 + 0x1fU >> 5);
        uVar8 = 0xffffffff >> (-(char)DAT_14caa7298 & 0x1fU);
        do {
          bVar22 = uVar18 == 0;
          uVar18 = uVar18 - 1;
          if (bVar22) goto LAB_140d05193;
          uVar20 = uVar8 & puVar14[uVar18];
          uVar8 = 0xffffffff;
        } while (uVar20 == 0);
        uVar18 = (ulonglong)uVar20 * 2 + 1;
        lVar19 = 0x3f;
        if (uVar18 != 0) {
          for (; uVar18 >> lVar19 == 0; lVar19 = lVar19 + -1) {
          }
        }
      }
LAB_140d05193:
      FUN_144a686e6(&DAT_14caa7280);
      piVar2[0x68] = 0;
      if (*(longlong *)(piVar2 + 0x66) != 0) {
        FUN_1400020a8();
      }
      plVar16 = (longlong *)(piVar2 + 0x56);
      puVar11 = (uint *)(piVar2 + 0x5a);
      iVar5 = piVar2[0x60];
      uVar8 = 1;
      if (iVar5 == 0) {
        local_70 = 0;
        iVar13 = 0;
        local_78._4_4_ = 0;
      }
      else {
        puVar12 = *(uint **)(piVar2 + 0x5e);
        if (*(uint **)(piVar2 + 0x5e) == (uint *)0x0) {
          puVar12 = puVar11;
        }
        uVar20 = *puVar12;
        if (uVar20 == 0) {
          iVar13 = iVar5 + 0x1e;
          if (-1 < iVar5 + -1) {
            iVar13 = iVar5 + -1;
          }
          uVar21 = 0;
          uVar18 = (ulonglong)(uint)(iVar13 >> 5);
          if (iVar13 >> 5 < 1) {
            uVar18 = uVar21;
          }
          iVar13 = (int)uVar18 + 1;
          local_70 = (int)uVar18 * 0x20 + 0x20;
          iVar17 = 0;
          do {
            local_78._4_4_ = iVar5;
            if (uVar18 == uVar21) goto LAB_140d05266;
            iVar17 = iVar17 + 0x20;
            uVar20 = puVar12[uVar21 + 1];
            uVar21 = uVar21 + 1;
          } while (uVar20 == 0);
          iVar13 = (int)uVar21;
          local_70 = iVar17;
        }
        else {
          local_70 = 0;
          iVar13 = 0;
        }
        uVar8 = -uVar20 & uVar20;
        uVar18 = (ulonglong)uVar8 * 2 + 1;
        lVar19 = 0x3f;
        if (uVar18 != 0) {
          for (; uVar18 >> lVar19 == 0; lVar19 = lVar19 + -1) {
          }
        }
        local_78._4_4_ = (local_70 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
        if (iVar5 <= local_78._4_4_) {
          local_78._4_4_ = iVar5;
        }
      }
LAB_140d05266:
      local_88 = CONCAT44(uVar8,iVar13);
      local_78._0_4_ = 0xffffffff;
      local_90 = plVar16;
      local_80 = puVar11;
      if (local_78._4_4_ < iVar5) {
        do {
          if (*(longlong *)(*local_90 + 8 + (longlong)local_78._4_4_ * 0x20) != 0) {
            FUN_1400020a8();
          }
          local_78._0_4_ = (uint)local_78 & ~local_88._4_4_;
          FUN_1449c0562(&local_88);
        } while (local_78._4_4_ < (int)local_80[6]);
      }
      piVar2[0x58] = 0;
      if (piVar2[0x59] != 0) {
        FUN_1446f4a44(plVar16,0);
      }
      piVar2[0x62] = -1;
      piVar2[99] = 0;
      piVar2[0x60] = 0;
      if (0x80 < (uint)piVar2[0x61]) {
        piVar2[0x61] = 0x80;
        FUN_1446efbd8(puVar11,0);
      }
      if (*(longlong *)(piVar2 + 0x5e) != 0) {
        FUN_1400020a8();
      }
      if (*plVar16 != 0) {
        FUN_1400020a8();
      }
      piVar2[0x54] = 0;
      if (*(longlong *)(piVar2 + 0x52) != 0) {
        FUN_1400020a8();
      }
      plVar16 = (longlong *)(piVar2 + 0x42);
      puVar11 = (uint *)(piVar2 + 0x46);
      iVar5 = piVar2[0x4c];
      if (iVar5 == 0) {
        uVar18 = 0;
        uVar21 = 1;
        iVar13 = 0;
        iVar17 = 0;
      }
      else {
        puVar12 = *(uint **)(piVar2 + 0x4a);
        if (*(uint **)(piVar2 + 0x4a) == (uint *)0x0) {
          puVar12 = puVar11;
        }
        uVar8 = *puVar12;
        if (uVar8 == 0) {
          iVar13 = iVar5 + 0x1e;
          if (-1 < iVar5 + -1) {
            iVar13 = iVar5 + -1;
          }
          uVar18 = 0;
          uVar21 = (ulonglong)(uint)(iVar13 >> 5);
          if (iVar13 >> 5 < 1) {
            uVar21 = uVar18;
          }
          iVar17 = 0;
          do {
            if (uVar21 == uVar18) goto LAB_140d055a1;
            iVar17 = iVar17 + 0x20;
            uVar8 = puVar12[uVar18 + 1];
            uVar18 = uVar18 + 1;
          } while (uVar8 == 0);
        }
        else {
          uVar18 = 0;
          iVar17 = 0;
        }
        uVar21 = (ulonglong)(-uVar8 & uVar8);
        uVar1 = uVar21 * 2 + 1;
        lVar19 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar19 == 0; lVar19 = lVar19 + -1) {
          }
        }
        iVar13 = (iVar17 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
        if (iVar5 <= iVar13) {
          iVar13 = iVar5;
        }
      }
      if (iVar13 < iVar5) {
        uVar8 = 0xffffffff;
        local_a0 = plVar16;
        local_98 = puVar11;
        do {
          lVar19 = *local_a0;
          lVar15 = (longlong)iVar13 * 0x60;
          *(undefined4 *)(lVar19 + 0x50 + lVar15) = 0;
          if (*(longlong *)(lVar19 + 0x48 + lVar15) != 0) {
            FUN_1400020a8();
          }
          FUN_140d05b88(lVar19 + lVar15 + 8);
          uVar8 = uVar8 & ~(uint)uVar21;
          puVar12 = *(uint **)(piVar2 + 0x4a);
          if (*(uint **)(piVar2 + 0x4a) == (uint *)0x0) {
            puVar12 = local_98;
          }
          iVar5 = piVar2[0x4c];
          iVar13 = (int)uVar18;
          lVar19 = (longlong)iVar13;
          uVar20 = puVar12[lVar19] & uVar8;
          plVar16 = local_a0;
          puVar11 = local_98;
          if (uVar20 == 0) {
            iVar9 = iVar5 + 0x1e;
            if (-1 < iVar5 + -1) {
              iVar9 = iVar5 + -1;
            }
            iVar9 = iVar9 >> 5;
            iVar10 = iVar9;
            if (iVar9 < iVar13) {
              iVar10 = iVar13;
            }
            if (iVar9 <= iVar13) break;
            lVar15 = 0;
            while( true ) {
              iVar17 = iVar17 + 0x20;
              uVar20 = puVar12[lVar19 + lVar15 + 1];
              if (uVar20 != 0) break;
              lVar15 = lVar15 + 1;
              if (iVar10 - lVar19 == lVar15) goto LAB_140d055a1;
            }
            uVar18 = (ulonglong)(iVar13 + (int)lVar15 + 1);
            uVar8 = 0xffffffff;
          }
          uVar21 = (ulonglong)(-uVar20 & uVar20);
          uVar1 = uVar21 * 2 + 1;
          lVar19 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar19 == 0; lVar19 = lVar19 + -1) {
            }
          }
          iVar13 = (iVar17 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
        } while (iVar13 < iVar5);
      }
LAB_140d055a1:
      piVar2[0x44] = 0;
      if (piVar2[0x45] != 0) {
        FUN_1448fc38a(plVar16,0);
      }
      piVar2[0x4e] = -1;
      piVar2[0x4f] = 0;
      piVar2[0x4c] = 0;
      if (0x80 < (uint)piVar2[0x4d]) {
        piVar2[0x4d] = 0x80;
        FUN_1446efbd8(puVar11,0);
      }
      if (*(longlong *)(piVar2 + 0x4a) != 0) {
        FUN_1400020a8();
      }
      if (*plVar16 != 0) {
        FUN_1400020a8();
      }
      piVar2[0x40] = 0;
      if (*(longlong *)(piVar2 + 0x3e) != 0) {
        FUN_1400020a8();
      }
      plVar16 = (longlong *)(piVar2 + 0x2e);
      puVar11 = (uint *)(piVar2 + 0x32);
      iVar5 = piVar2[0x38];
      if (iVar5 == 0) {
        uVar21 = 0;
        uVar18 = 1;
        iVar13 = 0;
        iVar17 = 0;
      }
      else {
        puVar12 = *(uint **)(piVar2 + 0x36);
        if (*(uint **)(piVar2 + 0x36) == (uint *)0x0) {
          puVar12 = puVar11;
        }
        uVar8 = *puVar12;
        if (uVar8 == 0) {
          iVar13 = iVar5 + 0x1e;
          if (-1 < iVar5 + -1) {
            iVar13 = iVar5 + -1;
          }
          uVar21 = 0;
          uVar18 = (ulonglong)(uint)(iVar13 >> 5);
          if (iVar13 >> 5 < 1) {
            uVar18 = uVar21;
          }
          iVar17 = 0;
          do {
            if (uVar18 == uVar21) goto LAB_140d0576a;
            iVar17 = iVar17 + 0x20;
            uVar8 = puVar12[uVar21 + 1];
            uVar21 = uVar21 + 1;
          } while (uVar8 == 0);
        }
        else {
          uVar21 = 0;
          iVar17 = 0;
        }
        uVar18 = (ulonglong)(-uVar8 & uVar8);
        uVar1 = uVar18 * 2 + 1;
        lVar19 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar19 == 0; lVar19 = lVar19 + -1) {
          }
        }
        iVar13 = (iVar17 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
        if (iVar5 <= iVar13) {
          iVar13 = iVar5;
        }
      }
      if (iVar13 < iVar5) {
        uVar8 = 0xffffffff;
        do {
          uVar1 = *(ulonglong *)(*plVar16 + 0x10 + (longlong)iVar13 * 0x30);
          if (uVar1 != 0 && (uVar1 & 1) == 0) {
            FUN_1400020a8();
            iVar5 = piVar2[0x38];
          }
          uVar8 = uVar8 & ~(uint)uVar18;
          puVar12 = *(uint **)(piVar2 + 0x36);
          if (*(uint **)(piVar2 + 0x36) == (uint *)0x0) {
            puVar12 = puVar11;
          }
          iVar13 = (int)uVar21;
          lVar19 = (longlong)iVar13;
          uVar20 = puVar12[lVar19] & uVar8;
          if (uVar20 == 0) {
            iVar9 = iVar5 + 0x1e;
            if (-1 < iVar5 + -1) {
              iVar9 = iVar5 + -1;
            }
            iVar9 = iVar9 >> 5;
            iVar10 = iVar9;
            if (iVar9 < iVar13) {
              iVar10 = iVar13;
            }
            if (iVar9 <= iVar13) break;
            lVar15 = 0;
            while( true ) {
              iVar17 = iVar17 + 0x20;
              uVar20 = puVar12[lVar19 + lVar15 + 1];
              if (uVar20 != 0) break;
              lVar15 = lVar15 + 1;
              if (iVar10 - lVar19 == lVar15) goto LAB_140d0576a;
            }
            uVar21 = (ulonglong)(iVar13 + (int)lVar15 + 1);
            uVar8 = 0xffffffff;
          }
          uVar18 = (ulonglong)(-uVar20 & uVar20);
          uVar1 = uVar18 * 2 + 1;
          lVar19 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar19 == 0; lVar19 = lVar19 + -1) {
            }
          }
          iVar13 = (iVar17 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
        } while (iVar13 < iVar5);
      }
LAB_140d0576a:
      piVar2[0x30] = 0;
      if (piVar2[0x31] != 0) {
        FUN_14494313c(plVar16,0);
      }
      piVar2[0x3a] = -1;
      piVar2[0x3b] = 0;
      piVar2[0x38] = 0;
      if (0x80 < (uint)piVar2[0x39]) {
        piVar2[0x39] = 0x80;
        FUN_1446efbd8(puVar11,0);
      }
      if (*(longlong *)(piVar2 + 0x36) != 0) {
        FUN_1400020a8();
      }
      if (*plVar16 != 0) {
        FUN_1400020a8();
      }
      piVar2[0x2c] = 0;
      if (*(longlong *)(piVar2 + 0x2a) != 0) {
        FUN_1400020a8();
      }
      plVar16 = (longlong *)(piVar2 + 0x1a);
      piVar7 = piVar2 + 0x1e;
      local_68 = 0x100000000;
      local_58 = 0xffffffff;
      local_50 = 0;
      local_60 = piVar7;
      if (piVar2[0x24] != 0) {
        FUN_1449c0562(&local_68);
      }
      local_88 = local_68;
      local_80 = (uint *)local_60;
      local_78 = local_58;
      uVar4 = local_78;
      local_70 = local_50;
      local_6c = local_4c;
      local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
      local_90 = plVar16;
      if (local_78._4_4_ < local_60[6]) {
        iVar5 = local_78._4_4_;
        local_78 = uVar4;
        do {
          uVar18 = *(ulonglong *)(*local_90 + 0x10 + (longlong)iVar5 * 0x30);
          if (uVar18 != 0 && (uVar18 & 1) == 0) {
            FUN_1400020a8();
          }
          local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
          FUN_1449c0562(&local_88);
          iVar5 = local_78._4_4_;
          uVar4 = local_78;
        } while (local_78._4_4_ < (int)local_80[6]);
      }
      local_78 = uVar4;
      piVar2[0x1c] = 0;
      if (piVar2[0x1d] != 0) {
        FUN_14494313c(plVar16,0);
      }
      piVar2[0x26] = -1;
      piVar2[0x27] = 0;
      piVar2[0x24] = 0;
      if (0x80 < (uint)piVar2[0x25]) {
        piVar2[0x25] = 0x80;
        FUN_1446efbd8(piVar7,0);
      }
      if (*(longlong *)(piVar2 + 0x22) != 0) {
        FUN_1400020a8();
      }
      if (*plVar16 != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(piVar2 + 0x18) != 0) {
        LOCK();
        puVar11 = (uint *)(*(longlong *)(piVar2 + 0x18) + 8);
        uVar8 = *puVar11;
        *puVar11 = *puVar11 - 1;
        UNLOCK();
        if ((uVar8 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
      if (*(longlong *)(piVar2 + 0x16) != 0) {
        LOCK();
        puVar11 = (uint *)(*(longlong *)(piVar2 + 0x16) + 8);
        uVar8 = *puVar11;
        *puVar11 = *puVar11 - 1;
        UNLOCK();
        if ((uVar8 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
      if (*(longlong *)(piVar2 + 0x14) != 0) {
        LOCK();
        puVar11 = (uint *)(*(longlong *)(piVar2 + 0x14) + 8);
        uVar8 = *puVar11;
        *puVar11 = *puVar11 - 1;
        UNLOCK();
        if ((uVar8 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
      if (*(longlong *)(piVar2 + 0xe) != 0) {
        FUN_1400020a8();
      }
      if (*(ulonglong *)(piVar2 + 8) != 0 && (*(ulonglong *)(piVar2 + 8) & 1) == 0) {
        FUN_1400020a8();
      }
      FUN_1400020a8(piVar2);
    }
    if (DAT_14caa7238 != DAT_14caa7264) {
      puVar6 = &DAT_14caa7268;
      if (DAT_14caa7270 != (undefined *)0x0) {
        puVar6 = DAT_14caa7270;
      }
      iVar5 = *(int *)(puVar6 + ((longlong)DAT_14caa7278 - 1U & (longlong)*(int *)(param_1 + 0x18))
                                * 4);
      while (iVar5 != -1) {
        piVar2 = (int *)(DAT_14caa7230 + (longlong)iVar5 * 0x18);
        if (*piVar2 == *(int *)(param_1 + 0x18)) {
          iVar13 = *(int *)(puVar6 + (longlong)piVar2[5] * 4);
          if (iVar13 == iVar5) {
            piVar7 = (int *)(puVar6 + (longlong)piVar2[5] * 4);
          }
          else {
            do {
              piVar7 = (int *)(DAT_14caa7230 + (longlong)iVar13 * 0x18 + 0x10);
              iVar13 = *piVar7;
            } while (iVar13 != iVar5);
          }
          *piVar7 = piVar2[4];
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_c8);
        }
        iVar5 = piVar2[4];
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140d05b88 FUN_140d05b88 body=55 status=ok
// SIG undefined FUN_140d05b88(void)

void FUN_140d05b88(longlong *param_1)

{
  FUN_140d05bc0(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140d05bc0 FUN_140d05bc0 body=121 status=ok
// SIG undefined FUN_140d05bc0(void)

void FUN_140d05bc0(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_1401ad22e(param_1,param_2);
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



// FUNCTION 140d05c3a FUN_140d05c3a body=128 status=ok
// SIG undefined FUN_140d05c3a(void)

void FUN_140d05c3a(int param_1)

{
  byte bVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  
  lVar2 = DAT_14caa7230;
  if (DAT_14caa7264 != 0) {
    *(int *)(DAT_14caa7230 + (longlong)DAT_14caa7260 * 0x18) = param_1;
  }
  *(undefined4 *)(lVar2 + (longlong)param_1 * 0x18) = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14caa7264) {
    iVar4 = DAT_14caa7260;
  }
  *(int *)(lVar2 + 4 + (longlong)param_1 * 0x18) = iVar4;
  DAT_14caa7264 = DAT_14caa7264 + 1;
  puVar3 = &DAT_14caa7240;
  if (DAT_14caa7250 != (undefined4 *)0x0) {
    puVar3 = DAT_14caa7250;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar1 = (byte)param_1 & 0x1f;
  DAT_14caa7260 = param_1;
  puVar3[iVar4 >> 5] = puVar3[iVar4 >> 5] & (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  return;
}



// FUNCTION 140d05cba FUN_140d05cba body=439 status=ok
// SIG undefined FUN_140d05cba(void)

void FUN_140d05cba(longlong param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  int iVar13;
  ulonglong uVar14;
  longlong *plVar15;
  
  iVar4 = *(int *)(param_1 + 4);
  uVar2 = *(uint *)(param_1 + 8);
  iVar6 = *(int *)(param_1 + 0xc);
  lVar12 = (longlong)iVar6;
  iVar1 = (int)*(undefined8 *)(param_1 + 4);
  iVar10 = iVar6 + iVar1 + -1;
  iVar13 = (int)((ulonglong)*(undefined8 *)(param_1 + 4) >> 0x20);
  uVar11 = (*(int *)(param_1 + 0x10) + iVar13) - 1;
  iVar13 = *(int *)(param_1 + 0x10) + iVar13;
  if (iVar4 < iVar10) {
    iVar8 = iVar4 - iVar1;
    do {
      if ((int)uVar2 <= (int)uVar11) {
        plVar15 = (longlong *)((longlong)iVar8 * 8 + *(longlong *)(param_1 + 0x38));
        uVar14 = (ulonglong)(iVar13 - uVar2);
        do {
          if (*plVar15 != 0) goto LAB_140d05e20;
          plVar15 = plVar15 + lVar12;
          uVar14 = uVar14 - 1;
        } while (uVar14 != 0);
      }
      iVar4 = iVar4 + 1;
      iVar8 = iVar8 + 1;
      iVar5 = iVar10;
    } while (iVar4 != iVar10);
  }
  else {
LAB_140d05e20:
    iVar5 = iVar4;
    if (iVar4 < iVar10) {
      iVar8 = iVar10;
      do {
        iVar6 = iVar6 + -1;
        if ((int)uVar2 <= (int)uVar11) {
          plVar15 = (longlong *)((longlong)iVar6 * 8 + *(longlong *)(param_1 + 0x38));
          uVar14 = (ulonglong)(iVar13 - uVar2);
          do {
            iVar10 = iVar8;
            if (*plVar15 != 0) goto LAB_140d05d3d;
            plVar15 = plVar15 + lVar12;
            uVar14 = uVar14 - 1;
          } while (uVar14 != 0);
        }
        iVar8 = iVar8 + -1;
        iVar10 = iVar4;
      } while (iVar4 < iVar8);
    }
  }
LAB_140d05d3d:
  uVar9 = ~uVar2;
  if ((int)uVar2 < (int)uVar11) {
    iVar4 = 0;
    do {
      if (iVar5 <= iVar10) {
        lVar7 = (longlong)(iVar5 - iVar1) + -1;
        do {
          if (*(longlong *)
               ((longlong)iVar4 * lVar12 * 8 + *(longlong *)(param_1 + 0x38) + 8 + lVar7 * 8) != 0)
          goto LAB_140d05dcd;
          lVar7 = lVar7 + 1;
        } while (lVar7 < iVar10 - iVar1);
      }
      uVar2 = uVar2 + 1;
      iVar4 = iVar4 + 1;
      uVar3 = uVar11;
    } while (iVar4 != iVar13 + uVar9);
  }
  else {
LAB_140d05dcd:
    uVar3 = uVar2;
    if ((int)uVar2 < (int)uVar11) {
      iVar13 = iVar13 + uVar9;
      uVar9 = uVar11;
      do {
        if (iVar5 <= iVar10) {
          lVar7 = (longlong)(iVar5 - iVar1) + -1;
          do {
            uVar11 = uVar9;
            if (*(longlong *)
                 ((longlong)iVar13 * lVar12 * 8 + *(longlong *)(param_1 + 0x38) + 8 + lVar7 * 8) !=
                0) goto LAB_140d05da1;
            lVar7 = lVar7 + 1;
          } while (lVar7 < iVar10 - iVar1);
        }
        uVar9 = uVar9 - 1;
        iVar13 = iVar13 + -1;
        uVar11 = uVar2;
      } while ((int)uVar2 < (int)uVar9);
    }
  }
LAB_140d05da1:
  FUN_140e8733c(param_1,CONCAT44(uVar3,iVar5),CONCAT44(uVar11,iVar10));
  return;
}



// FUNCTION 140d05e72 FUN_140d05e72 body=176 status=ok
// SIG undefined FUN_140d05e72(void)

undefined8 FUN_140d05e72(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  if ((longlong)*(int *)(param_1 + 0x318) != 0) {
    plVar7 = *(longlong **)(param_1 + 0x310);
    plVar6 = plVar7 + (longlong)*(int *)(param_1 + 0x318) * 2;
    do {
      lVar3 = *plVar7;
      plVar4 = (longlong *)plVar7[1];
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
      }
      if ((lVar3 != 0) && (cVar5 = FUN_140d05f22(lVar3,param_2), cVar5 != '\0')) {
        if (plVar4 == (longlong *)0x0) {
          return 1;
        }
        LOCK();
        plVar7 = plVar4 + 1;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)*plVar7 == 0) {
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar2 = (int *)((longlong)plVar4 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
            return 1;
          }
          return 1;
        }
        return 1;
      }
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
      plVar7 = plVar7 + 2;
    } while (plVar7 != plVar6);
  }
  return 0;
}



// FUNCTION 140d05f22 FUN_140d05f22 body=200 status=ok
// SIG undefined FUN_140d05f22(void)

undefined4 FUN_140d05f22(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  bool bVar9;
  
  plVar3 = *(longlong **)(param_1 + 0x290);
  if (plVar3 != (longlong *)0x0) {
    iVar7 = (int)plVar3[1];
    do {
      if (iVar7 == 0) {
        return 0;
      }
      LOCK();
      iVar6 = (int)plVar3[1];
      bVar9 = iVar7 == iVar6;
      if (bVar9) {
        *(int *)(plVar3 + 1) = iVar7 + 1;
        iVar6 = iVar7;
      }
      iVar7 = iVar6;
      UNLOCK();
    } while (!bVar9);
    lVar4 = *(longlong *)(param_1 + 0x288);
    lVar5 = *param_2;
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
    if ((lVar4 == lVar5 && lVar4 != 0) &&
       (plVar3 = *(longlong **)(param_1 + 0x2a0), plVar3 != (longlong *)0x0)) {
      iVar7 = (int)plVar3[1];
      while (iVar7 != 0) {
        LOCK();
        iVar6 = (int)plVar3[1];
        bVar9 = iVar7 == iVar6;
        if (bVar9) {
          *(int *)(plVar3 + 1) = iVar7 + 1;
          iVar6 = iVar7;
        }
        iVar7 = iVar6;
        UNLOCK();
        if (bVar9) {
          if (*(longlong **)(param_1 + 0x298) == (longlong *)0x0) {
            uVar8 = 0;
          }
          else {
            uVar8 = (**(code **)(**(longlong **)(param_1 + 0x298) + 0x28))();
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
              return uVar8;
            }
            return uVar8;
          }
          return uVar8;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 140d05fea FUN_140d05fea body=40 status=ok
// SIG undefined FUN_140d05fea(void)

undefined8 FUN_140d05fea(undefined8 param_1,int param_2)

{
  FUN_140d06012();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140d06012 FUN_140d06012 body=112 status=ok
// SIG undefined FUN_140d06012(void)

void FUN_140d06012(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a3c93b0;
  param_1[5] = &PTR_FUN_14a3c9eb0;
  param_1[6] = &PTR_FUN_14a3c9ef0;
  param_1[0x55] = &PTR_FUN_14a3c9f40;
  param_1[0x56] = &PTR_FUN_14a3c9fc0;
  param_1[0x57] = &PTR_FUN_14a3c9fd0;
  if (param_1[0xe6] != 0) {
    FUN_1400020a8();
  }
  FUN_14006e248(param_1);
  return;
}



// FUNCTION 140d06090 FUN_140d06090 body=148 status=ok
// SIG undefined FUN_140d06090(void)

undefined8 * FUN_140d06090(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b02d230;
  if (param_1[0x2e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x28] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x26] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x24] != 0) {
    FUN_1400020a8();
  }
  FUN_140bb741a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140d0612a FUN_140d0612a body=57 status=ok
// SIG undefined FUN_140d0612a(void)

void FUN_140d0612a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5a4b0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5a4b0 = FUN_140002ddd(FUN_1464c958a,uVar1,L"GbxBodyNodeState_FactSwitch");
  }
  return;
}



// FUNCTION 140d06164 FUN_140d06164 body=21 status=ok
// SIG undefined FUN_140d06164(void)

undefined8 FUN_140d06164(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 140d06186 FUN_140d06186 body=52 status=ok
// SIG undefined FUN_140d06186(void)

void FUN_140d06186(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (*(longlong *)(param_1 + 0x10) == 0) {
    lVar1 = param_1;
  }
  FUN_140d061ba(lVar1,*(undefined4 *)(param_1 + 0x18));
  if (*(longlong *)(param_1 + 0x10) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140d061ba FUN_140d061ba body=75 status=ok
// SIG undefined FUN_140d061ba(void)

void FUN_140d061ba(longlong param_1,int param_2)

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



// FUNCTION 140d06206 FUN_140d06206 body=203 status=ok
// SIG undefined FUN_140d06206(void)

void FUN_140d06206(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  
  lVar4 = *(longlong *)(param_1 + 0x10);
  if (lVar4 == 0) {
    return;
  }
  plVar3 = (longlong *)(lVar4 + 0x88);
  if (*(int *)(lVar4 + 0x90) != 0) {
    puVar5 = (undefined8 *)*plVar3;
    if (puVar5 == (undefined8 *)0x0) goto LAB_140d06235;
    (**(code **)*puVar5)(puVar5,0);
    FUN_1446efa72(plVar3,0,0,0x10);
    *(undefined4 *)(lVar4 + 0x90) = 0;
  }
  if (*plVar3 != 0) {
    FUN_1400020a8();
  }
LAB_140d06235:
  if (*(longlong *)(lVar4 + 0x68) != 0) {
    FUN_1400020a8();
  }
  plVar3 = *(longlong **)(lVar4 + 0x20);
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
  plVar3 = *(longlong **)(lVar4 + 8);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  FUN_1400020a8(lVar4);
  return;
}



// FUNCTION 140d062d2 FUN_140d062d2 body=190 status=ok
// SIG undefined FUN_140d062d2(void)

void FUN_140d062d2(longlong param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  undefined2 **local_48;
  undefined2 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140d06392();
  if (*(longlong *)(param_1 + 0x4f0) != 0) {
    uVar1 = FUN_144a5535e();
    local_40 = (undefined2 *)0x0;
    local_38 = 2;
    FUN_1447cd5fa(&local_40,2,0);
    *local_40 = 0;
    lVar2 = param_1 + 0x888;
    lVar3 = 4;
    do {
      local_48 = &local_40;
      FUN_140d06d1e(param_1,lVar2,lVar2 + 0x40,uVar1);
      lVar2 = lVar2 + 0x10;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    if (local_40 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d06392 FUN_140d06392 body=1752 status=ok
// SIG undefined FUN_140d06392(void)

void FUN_140d06392(longlong param_1)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  uint uVar3;
  int *piVar4;
  longlong *plVar5;
  byte bVar6;
  char cVar7;
  undefined4 uVar8;
  uint uVar9;
  uint *puVar10;
  undefined8 *_Dst;
  undefined8 uVar11;
  int iVar12;
  int iVar13;
  longlong *plVar14;
  undefined8 unaff_RBX;
  int iVar15;
  uint uVar16;
  longlong lVar17;
  int iVar18;
  ulonglong uVar19;
  longlong lVar20;
  ulonglong uVar21;
  undefined4 uVar22;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  wchar_t *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  code **local_a0;
  undefined1 *local_98;
  code *local_90;
  ulonglong local_80;
  longlong local_78;
  code *local_70 [2];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_140a3b34e();
  uVar8 = (undefined4)CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  uVar22 = FUN_140b4cc3e(param_1,1);
  if (((((*(int *)(param_1 + 0x1c) != 0) && (uVar3 = *(uint *)(param_1 + 0x18), -1 < (int)uVar3)) &&
       ((int)uVar3 < DAT_14c9647dc)) &&
      ((plVar14 = (longlong *)
                  ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
       plVar14 != (longlong *)0x0 && ((int)plVar14[2] == *(int *)(param_1 + 0x1c))))) &&
     (((*(uint *)(plVar14 + 1) & 0x10200000) == 0 && (lVar17 = *plVar14, lVar17 != 0)))) {
    if (DAT_14cb939a8 == 0) {
      local_a0 = local_70;
      local_70[0] = FUN_140940982;
      local_90 = FUN_14081d0ea;
      local_98 = &LAB_146522c26;
      local_a8 = &LAB_148a0db91;
      local_b0 = &LAB_146572ba7;
      local_b8 = L"Engine";
      local_c0 = 0;
      local_c8 = 0x10000004;
      local_d0 = 8;
      local_d8 = CONCAT44(local_d8._4_4_,0xdd8);
      uVar22 = FUN_14081cfa3(L"/Script/GbxWeapon",L"Weapon",&DAT_14cb939a8,FUN_146572b80);
    }
    if ((*(int *)(DAT_14cb939a8 + 0x38) <= *(int *)(*(longlong *)(lVar17 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar17 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cb939a8 + 0x38) * 8) == DAT_14cb939a8 + 0x30)) {
      *(longlong *)(param_1 + 0x4f0) = lVar17;
      *(undefined1 *)(param_1 + 0x490) = *(undefined1 *)(lVar17 + 0xbd8);
      uVar8 = FUN_144a5535e(lVar17);
      uVar22 = extraout_XMM0_Da;
      goto LAB_140d06486;
    }
  }
  *(undefined8 *)(param_1 + 0x4f0) = 0;
LAB_140d06486:
  lVar17 = param_1 + 0x478;
  local_d8 = lVar17;
  uVar22 = FUN_140d06d1e(uVar22,param_1 + 0x350,param_1 + 0x3e0,uVar8);
  local_d8 = lVar17;
  uVar22 = FUN_140d06d1e(uVar22,param_1 + 0x360,param_1 + 0x3f0,uVar8);
  local_d8 = lVar17;
  uVar22 = FUN_140d06d1e(uVar22,param_1 + 0x370,param_1 + 0x400,uVar8);
  local_d8 = lVar17;
  uVar22 = FUN_140d06d1e(uVar22,param_1 + 0x380,param_1 + 0x410,uVar8);
  local_d8 = lVar17;
  uVar22 = FUN_140d06d1e(uVar22,param_1 + 0x390,param_1 + 0x420,uVar8);
  local_d8 = lVar17;
  uVar22 = FUN_140d06d1e(uVar22,param_1 + 0x3a0,param_1 + 0x430,uVar8);
  local_d8 = lVar17;
  FUN_140d06d1e(uVar22,param_1 + 0x3c0,param_1 + 0x450,uVar8);
  uVar3 = *(uint *)(param_1 + 0x328);
  if (uVar3 == 0) {
    uVar21 = 1;
    uVar19 = 0;
    uVar9 = 0;
    iVar15 = 0;
  }
  else {
    puVar10 = *(uint **)(param_1 + 800);
    if (*(uint **)(param_1 + 800) == (uint *)0x0) {
      puVar10 = (uint *)(param_1 + 0x310);
    }
    uVar9 = *puVar10;
    if (uVar9 == 0) {
      iVar15 = uVar3 + 0x1e;
      if (-1 < (int)(uVar3 - 1)) {
        iVar15 = uVar3 - 1;
      }
      uVar19 = 0;
      uVar21 = (ulonglong)(uint)(iVar15 >> 5);
      if (iVar15 >> 5 < 1) {
        uVar21 = uVar19;
      }
      iVar15 = 0;
      do {
        if (uVar21 == uVar19) goto LAB_140d06720;
        iVar15 = iVar15 + 0x20;
        uVar9 = puVar10[uVar19 + 1];
        uVar19 = uVar19 + 1;
      } while (uVar9 == 0);
    }
    else {
      uVar19 = 0;
      iVar15 = 0;
    }
    uVar21 = (ulonglong)(-uVar9 & uVar9);
    uVar1 = uVar21 * 2 + 1;
    lVar17 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar17 == 0; lVar17 = lVar17 + -1) {
      }
    }
    uVar9 = (iVar15 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
    if ((int)uVar3 <= (int)uVar9) {
      uVar9 = uVar3;
    }
  }
  if (uVar9 != uVar3) {
    local_78 = param_1 + 0x1b0;
    uVar16 = 0xffffffff;
    local_80 = (ulonglong)uVar3;
    do {
      lVar17 = *(longlong *)(param_1 + 0x300) + (longlong)(int)uVar9 * 0x20;
      uVar11 = *(undefined8 *)(*(longlong *)(param_1 + 0x300) + (longlong)(int)uVar9 * 0x20);
      uVar3 = (uint)((ulonglong)uVar11 >> 0x10);
      uVar9 = (uint)uVar11 & 0xffff;
      plVar14 = (longlong *)
                FUN_140d06a6c(local_78,((uint)uVar11 << 0x10 | uVar9) +
                                       (int)((ulonglong)uVar11 >> 0x20) +
                                       (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar9 >> 4),lVar17);
      if ((*plVar14 != 0 & DAT_14cb26569) == 1) {
        FUN_1400848c0(*(undefined8 *)(*plVar14 + 0x50));
      }
      bVar6 = DAT_14cb26569;
      lVar17 = *(longlong *)(lVar17 + 8);
      *plVar14 = lVar17;
      if ((lVar17 != 0) && ((bVar6 & 1) != 0)) {
        piVar4 = *(int **)(lVar17 + 0x50);
        LOCK();
        *piVar4 = *piVar4 + 1;
        UNLOCK();
        if (DAT_14cb259f8 == 0) {
          iVar18 = 5;
        }
        else {
          if ((char)piVar4[1] != '\x01') {
            FUN_14003fb24(*(undefined8 *)(DAT_14cb259f8 + 0x60));
            goto LAB_140d0667c;
          }
          iVar18 = 2;
        }
        LOCK();
        piVar4[2] = iVar18;
        UNLOCK();
      }
LAB_140d0667c:
      uVar16 = uVar16 & ~(uint)uVar21;
      puVar10 = *(uint **)(param_1 + 800);
      if (*(uint **)(param_1 + 800) == (uint *)0x0) {
        puVar10 = (uint *)(param_1 + 0x310);
      }
      uVar3 = *(uint *)(param_1 + 0x328);
      iVar18 = (int)uVar19;
      lVar17 = (longlong)iVar18;
      uVar9 = puVar10[lVar17] & uVar16;
      if (uVar9 == 0) {
        iVar12 = uVar3 + 0x1e;
        if (-1 < (int)(uVar3 - 1)) {
          iVar12 = uVar3 - 1;
        }
        iVar12 = iVar12 >> 5;
        iVar15 = iVar15 + 0x20;
        iVar13 = iVar12;
        if (iVar12 < iVar18) {
          iVar13 = iVar18;
        }
        if (iVar18 < iVar12) {
          lVar20 = 0;
          do {
            uVar9 = (puVar10 + lVar17 + 1)[lVar20];
            if (uVar9 != 0) {
              uVar19 = (ulonglong)(iVar18 + (int)lVar20 + 1);
              uVar16 = 0xffffffff;
              goto LAB_140d066ec;
            }
            iVar15 = iVar15 + 0x20;
            lVar20 = lVar20 + 1;
          } while (iVar13 - lVar17 != lVar20);
          uVar16 = 0xffffffff;
          iVar18 = iVar13;
        }
        uVar19 = (ulonglong)(iVar18 + 1);
        uVar9 = uVar3;
      }
      else {
LAB_140d066ec:
        uVar21 = (ulonglong)(-uVar9 & uVar9);
        uVar1 = uVar21 * 2 + 1;
        lVar17 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar17 == 0; lVar17 = lVar17 + -1) {
          }
        }
        uVar9 = (iVar15 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
        if ((int)uVar3 <= (int)uVar9) {
          uVar9 = uVar3;
        }
      }
    } while (uVar9 != (uint)local_80);
  }
LAB_140d06720:
  if ((longlong)*(int *)(param_1 + 0x3d8) != 0) {
    plVar14 = *(longlong **)(param_1 + 0x3d0);
    lVar17 = (longlong)*(int *)(param_1 + 0x3d8) * 0x28;
    do {
      lVar20 = plVar14[1];
      if (lVar20 == 0) {
        uVar11 = FUN_1407f787c();
        lVar20 = FUN_14477b664(uVar11);
        plVar14[1] = lVar20;
      }
      if (plVar14[2] == 0) {
        if ((lVar20 != 0) && (*plVar14 != 0)) {
          plVar5 = *(longlong **)(lVar20 + 0xb8);
          if ((plVar5 == (longlong *)0x0) ||
             (cVar7 = (**(code **)(*plVar5 + 0x108))(plVar5), cVar7 == '\0')) {
            plVar14[2] = 0;
          }
          else {
            uVar11 = (**(code **)(*plVar5 + 0x110))(plVar5);
            lVar20 = FUN_144aff482(uVar11,plVar14);
            plVar14[2] = lVar20;
            if (lVar20 != 0) goto LAB_140d069e2;
          }
        }
      }
      else {
LAB_140d069e2:
        *(float *)((longlong)plVar14 + 0x24) = *(float *)(plVar14 + 3);
        if (0.0001 < *(float *)(plVar14 + 4)) {
          *(float *)((longlong)plVar14 + 0x24) =
               *(float *)(plVar14 + 3) +
               *(float *)((longlong)plVar14 + 0x1c) / *(float *)(plVar14 + 4);
        }
      }
      plVar14 = plVar14 + 5;
      lVar17 = lVar17 + -0x28;
    } while (lVar17 != 0);
  }
  if ((longlong)*(int *)(param_1 + 0x128) != 0) {
    lVar17 = *(longlong *)(param_1 + 0x120);
    lVar20 = (longlong)*(int *)(param_1 + 0x128) * 0xc0;
    do {
      FUN_1400021e4(lVar17,local_70);
      FUN_1403c7a68(param_1,lVar17,local_70);
      if (local_70[0] != (code *)0x0) {
        FUN_1400020a8();
      }
      FUN_144799a06(param_1,lVar17,1,1);
      lVar17 = lVar17 + 0xc0;
      lVar20 = lVar20 + -0xc0;
    } while (lVar20 != 0);
  }
  _Dst = (undefined8 *)FUN_14001cc68(0x1d8);
  memset(_Dst,0,0x1d8);
  *_Dst = &PTR_FUN_14b4a9a10;
  InitializeCriticalSection((LPCRITICAL_SECTION)(_Dst + 2));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(_Dst + 2),4000);
  _Dst[7] = 0;
  _Dst[8] = 0;
  _Dst[9] = 0;
  lVar17 = 0x7a;
  do {
    *(undefined8 *)((longlong)_Dst + lVar17 + -0x12) = 0;
    *(undefined2 *)((longlong)_Dst + lVar17 + -2) = 0;
    *(undefined1 *)((longlong)_Dst + lVar17) = 0;
    puVar2 = (undefined8 *)((longlong)_Dst + lVar17 + -0x2a);
    *puVar2 = 0;
    puVar2[1] = 0;
    lVar17 = lVar17 + 0x30;
  } while (lVar17 != 0x1fa);
  _Dst[0x3a] = 0;
  *(undefined8 **)(param_1 + 0x468) = _Dst;
  if ((local_60 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140d06a6c FUN_140d06a6c body=189 status=ok
// SIG undefined FUN_140d06a6c(void)

longlong * FUN_140d06a6c(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_28;
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
        plVar2 = (longlong *)(*param_1 + (longlong)iVar1 * 0x18);
        if (*plVar2 == *param_3) {
          if (plVar2 != (longlong *)0x0) goto LAB_140d06b01;
          break;
        }
        iVar1 = (int)plVar2[2];
      } while (iVar1 != -1);
    }
  }
  local_38 = 0;
  local_28 = param_3;
  FUN_140d06b2a(param_1,&local_1c,param_2);
  plVar2 = (longlong *)(*param_1 + (longlong)local_1c * 0x18);
LAB_140d06b01:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar2 + 1;
}



// FUNCTION 140d06b2a FUN_140d06b2a body=304 status=ok
// SIG undefined FUN_140d06b2a(void)

undefined4 *
FUN_140d06b2a(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4,
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
  undefined8 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140d07206(param_1,local_58);
  *local_50 = *(undefined8 *)*param_4;
  local_50[1] = 0;
  *(undefined4 *)(local_50 + 2) = 0xffffffff;
  local_68 = param_5;
  cVar1 = FUN_140d06c5c(param_1,param_3,local_50,local_58);
  if (cVar1 == '\0') {
    uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar2 < 4) {
      iVar4 = 1;
    }
    else {
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
      *(uint *)((longlong)local_50 + 0x14) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_50 + 2) =
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
      FUN_140d074d6(param_1);
    }
  }
  *param_2 = local_58[0];
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d06c5c FUN_140d06c5c body=194 status=ok
// SIG undefined FUN_140d06c5c(void)

void FUN_140d06c5c(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
                  )

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined1 uVar4;
  longlong *plVar5;
  int iVar6;
  
  if (1 < (uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34))) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar6 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar6 != -1) {
      do {
        plVar5 = (longlong *)(*param_1 + (longlong)iVar6 * 0x18);
        if (*plVar5 == *param_3) {
          if ((plVar5[1] != 0) && ((DAT_14cb26569 & 1) != 0)) {
            FUN_1400848c0(*(undefined8 *)(plVar5[1] + 0x50));
          }
          uVar1 = *(undefined4 *)((longlong)param_3 + 4);
          lVar3 = param_3[1];
          uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(int *)plVar5 = (int)*param_3;
          *(undefined4 *)((longlong)plVar5 + 4) = uVar1;
          *(int *)(plVar5 + 1) = (int)lVar3;
          *(undefined4 *)((longlong)plVar5 + 0xc) = uVar2;
          FUN_147f81248(param_1,*param_4,1);
          *param_4 = iVar6;
          uVar4 = 1;
          break;
        }
        iVar6 = (int)plVar5[2];
        uVar4 = 0;
      } while (iVar6 != -1);
      goto LAB_140d06ccb;
    }
  }
  uVar4 = 0;
LAB_140d06ccb:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar4;
  }
  return;
}



// FUNCTION 140d06d1e FUN_140d06d1e body=1254 status=ok
// SIG undefined FUN_140d06d1e(void)

void FUN_140d06d1e(undefined8 param_1,longlong *param_2,longlong *param_3,byte param_4,
                  longlong *param_5)

{
  longlong *plVar1;
  int *piVar2;
  bool bVar3;
  char cVar4;
  byte bVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  byte bVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  uint uVar15;
  undefined4 uVar16;
  undefined1 auStack_98 [44];
  uint local_6c;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((longlong)(int)param_2[1] != 0) {
    lVar12 = *param_2;
    lVar13 = (longlong)(int)param_2[1] * 0x90 + lVar12;
    uVar11 = (uint)param_4;
    local_6c = (uint)param_4;
    local_68 = lVar13;
    do {
      if ((*(uint *)(lVar12 + 100) & uVar11) != 0) {
        local_50 = 0;
        local_58 = 0;
        if (*(char *)(lVar12 + 0x15) == '\x01') {
          lVar7 = *(longlong *)(lVar12 + 0x20);
          if (lVar7 == 0) {
            uVar6 = FUN_140067708();
            lVar7 = FUN_14477b664(uVar6);
            *(longlong *)(lVar12 + 0x20) = lVar7;
          }
          lVar9 = *(longlong *)(lVar12 + 0x28);
          if (lVar9 == 0) {
            if (lVar7 == 0) {
              lVar9 = 0;
            }
            else {
              lVar9 = 0;
              if (*(longlong *)(lVar12 + 0x18) != 0) {
                plVar1 = *(longlong **)(lVar7 + 0xb8);
                if ((plVar1 == (longlong *)0x0) ||
                   (cVar4 = (**(code **)(*plVar1 + 0x108))(), cVar4 == '\0')) {
                  lVar9 = 0;
                }
                else {
                  uVar6 = (**(code **)(*plVar1 + 0x110))(plVar1);
                  lVar9 = FUN_144aff482(uVar6,(longlong *)(lVar12 + 0x18));
                }
                *(longlong *)(lVar12 + 0x28) = lVar9;
              }
            }
          }
          local_60 = lVar9;
          FUN_140942716(&local_60);
          FUN_1407ec87c(&local_50,&local_60);
          if ((local_60 != 0) && ((DAT_14cb26569 & 1) != 0)) {
            FUN_1400848c0(*(undefined8 *)(local_60 + 0x50));
          }
        }
        if (*(char *)(lVar12 + 0x30) == '\x01') {
          lVar7 = *(longlong *)(lVar12 + 0x40);
          if (lVar7 == 0) {
            uVar6 = FUN_140067708();
            lVar7 = FUN_14477b664(uVar6);
            *(longlong *)(lVar12 + 0x40) = lVar7;
          }
          lVar9 = *(longlong *)(lVar12 + 0x48);
          if (lVar9 == 0) {
            if (lVar7 == 0) {
              lVar9 = 0;
            }
            else {
              lVar9 = 0;
              if (*(longlong *)(lVar12 + 0x38) != 0) {
                plVar1 = *(longlong **)(lVar7 + 0xb8);
                if ((plVar1 == (longlong *)0x0) ||
                   (cVar4 = (**(code **)(*plVar1 + 0x108))(), cVar4 == '\0')) {
                  lVar9 = 0;
                }
                else {
                  uVar6 = (**(code **)(*plVar1 + 0x110))(plVar1);
                  lVar9 = FUN_144aff482(uVar6,(longlong *)(lVar12 + 0x38));
                }
                *(longlong *)(lVar12 + 0x48) = lVar9;
              }
            }
          }
          local_60 = lVar9;
          FUN_140942716(&local_60);
          FUN_1407ec87c(&local_58,&local_60);
          if ((local_60 != 0) && ((DAT_14cb26569 & 1) != 0)) {
            FUN_1400848c0(*(undefined8 *)(local_60 + 0x50));
          }
        }
        if (((local_50 != 0 & DAT_14cb26569) == 1) && (*(uint *)(lVar12 + 0x54) != 0)) {
          lVar7 = 0;
          lVar9 = 0;
          uVar15 = *(uint *)(lVar12 + 0x54);
          do {
            if ((uVar15 & 1) != 0) {
              iVar8 = (int)param_3[1];
              iVar14 = (int)lVar9 + 1;
              if (iVar8 < iVar14) {
                *(int *)(param_3 + 1) = iVar14;
                if ((uint)(*(int *)((longlong)param_3 + 0xc) - iVar8) < (uint)(iVar14 - iVar8)) {
                  FUN_1418bd566(param_3);
                }
                memset((void *)((longlong)iVar8 * 0x10 + *param_3),0,(longlong)(iVar14 - iVar8) << 4
                      );
              }
              else if (iVar8 < 0) {
                    /* WARNING: Subroutine does not return */
                FUN_1456afac4(iVar8);
              }
              lVar13 = *param_3;
              iVar8 = *(int *)(lVar13 + 8 + lVar7);
              *(uint *)(lVar13 + 8 + lVar7) = iVar8 + 1U;
              if (*(uint *)(lVar13 + 0xc + lVar7) < iVar8 + 1U) {
                FUN_1418bd674((longlong *)(lVar13 + lVar7),iVar8);
              }
              lVar13 = *(longlong *)(lVar13 + lVar7);
              plVar1 = (longlong *)(lVar13 + (longlong)iVar8 * 0x40);
              FUN_143ec7bc6(plVar1);
              lVar13 = *(longlong *)(lVar13 + (longlong)iVar8 * 0x40);
              if ((lVar13 != 0 & DAT_14cb26569) == 1) {
                FUN_1400848c0(*(undefined8 *)(lVar13 + 0x50));
              }
              bVar5 = DAT_14cb26569;
              *plVar1 = local_50;
              if ((local_50 != 0 & bVar5) == 1) {
                piVar2 = *(int **)(local_50 + 0x50);
                LOCK();
                *piVar2 = *piVar2 + 1;
                UNLOCK();
                if (DAT_14cb259f8 == 0) {
                  iVar8 = 5;
                }
                else {
                  if ((char)piVar2[1] != '\x01') {
                    FUN_14003fb24(*(undefined8 *)(DAT_14cb259f8 + 0x60));
                    bVar5 = DAT_14cb26569;
                    goto LAB_140d06ffa;
                  }
                  iVar8 = 2;
                }
                LOCK();
                piVar2[2] = iVar8;
                UNLOCK();
                bVar5 = DAT_14cb26569;
              }
LAB_140d06ffa:
              if ((plVar1[1] != 0 & bVar5) == 1) {
                FUN_1400848c0(*(undefined8 *)(plVar1[1] + 0x50));
                bVar5 = DAT_14cb26569;
              }
              plVar1[1] = local_58;
              if ((local_58 != 0) && ((bVar5 & 1) != 0)) {
                piVar2 = *(int **)(local_58 + 0x50);
                LOCK();
                *piVar2 = *piVar2 + 1;
                UNLOCK();
                if (DAT_14cb259f8 == 0) {
                  iVar8 = 5;
                }
                else {
                  if ((char)piVar2[1] != '\x01') {
                    FUN_14003fb24(*(undefined8 *)(DAT_14cb259f8 + 0x60));
                    goto LAB_140d07025;
                  }
                  iVar8 = 2;
                }
                LOCK();
                piVar2[2] = iVar8;
                UNLOCK();
              }
LAB_140d07025:
              if (*(char *)(lVar12 + 8) == '\x01') {
                lVar13 = *(longlong *)(lVar12 + 0xc);
              }
              else {
                lVar13 = 0;
              }
              plVar1[2] = lVar13;
              uVar16 = 0;
              if (*(char *)(lVar12 + 0x59) == '\x01') {
                uVar16 = *(undefined4 *)(lVar12 + 0x5c);
              }
              *(undefined4 *)(plVar1 + 6) = uVar16;
              if ((*(char *)(lVar12 + 0x69) == '\x01') &&
                 (uVar11 = *(uint *)(lVar12 + 0x78), 0 < (int)uVar11)) {
                if (7 < uVar11) {
                  uVar11 = 8;
                }
                *(char *)((longlong)plVar1 + 0x3c) = (char)uVar11;
                bVar5 = (char)uVar11 - 1;
                bVar10 = (byte)*(undefined4 *)(lVar12 + 0x80);
                if (bVar10 < bVar5) {
                  bVar5 = bVar10;
                }
                *(byte *)((longlong)plVar1 + 0x3d) = bVar5;
                memcpy((void *)((longlong)plVar1 + 0x34),*(void **)(lVar12 + 0x70),(ulonglong)uVar11
                      );
                *(undefined1 *)(*param_5 + lVar9) = 1;
              }
              else {
                *(undefined2 *)((longlong)plVar1 + 0x3c) = 1;
                *(undefined1 *)((longlong)plVar1 + 0x34) = 0x3c;
              }
            }
            lVar7 = lVar7 + 0x10;
            lVar9 = lVar9 + 1;
            bVar3 = 1 < uVar15;
            lVar13 = local_68;
            uVar11 = local_6c;
            uVar15 = uVar15 >> 1;
          } while (bVar3);
        }
        if ((local_58 != 0 & DAT_14cb26569) == 1) {
          FUN_1400848c0(*(undefined8 *)(local_58 + 0x50));
        }
        if ((local_50 != 0) && ((DAT_14cb26569 & 1) != 0)) {
          FUN_1400848c0(*(undefined8 *)(local_50 + 0x50));
        }
      }
      lVar12 = lVar12 + 0x90;
    } while (lVar12 != lVar13);
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d07206 FUN_140d07206 body=719 status=ok
// SIG undefined FUN_140d07206(void)

int * FUN_140d07206(longlong *param_1,int *param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  longlong *plVar12;
  longlong *plVar13;
  ulonglong uVar14;
  int iVar15;
  int iVar16;
  ulonglong uVar17;
  uint uVar18;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar15 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar15 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar15) {
      FUN_14482b872(param_1,iVar15);
    }
    iVar8 = (int)param_1[5];
    if (iVar8 == 0) {
      iVar2 = -1;
    }
    else {
      iVar2 = iVar8 + 0x1e;
      if (-1 < iVar8 + -1) {
        iVar2 = iVar8 + -1;
      }
      iVar2 = iVar2 >> 5;
    }
    plVar12 = param_1 + 2;
    iVar9 = iVar8 + 1;
    iVar16 = iVar8 + 0x1f;
    if (-1 < iVar8) {
      iVar16 = iVar8;
    }
    if (iVar16 >> 5 == iVar2) {
      *(int *)(param_1 + 5) = iVar9;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar8) {
        iVar2 = iVar8;
        if (iVar8 + 0x20U < 0xa0) {
          iVar9 = 0x80;
        }
        else {
          uVar18 = iVar8 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar11 = 4;
            if (4 < uVar18) {
              uVar11 = uVar18;
            }
          }
          else {
            uVar11 = uVar18 + (uVar18 * 3 >> 3) + 0x10;
          }
          uVar6 = (ulonglong)(uVar11 * 4);
          if (DAT_14c872d28 != (longlong *)0x0) {
            if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
              uVar3 = (uint)(uVar6 + 0xf);
              if (uVar11 < 0x1ffd) {
                uVar6 = (ulonglong)
                        (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar6 + 0xf >> 4]];
              }
              else {
                uVar10 = (ulonglong)(uVar3 & 0xfffffff0);
                if (uVar10 < 0x7ff1) {
                  bVar7 = (&DAT_14c841e00)[uVar3 >> 4];
                  uVar14 = 0x32;
                  if (0x32 < bVar7) {
                    uVar14 = (ulonglong)bVar7;
                  }
                  uVar17 = 0x32 - (ulonglong)bVar7;
                  do {
                    uVar6 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar17 & 0xffffffff];
                    if (((&DAT_14c841d90)[uVar17 & 0xffffffff] & 0xf) == 0) goto LAB_140d073cc;
                    lVar5 = uVar14 + 1 + uVar17;
                    uVar17 = uVar17 - 1;
                  } while (lVar5 != 0x33);
                }
                uVar6 = 0x10;
                if (0x10 < DAT_14c841df8) {
                  uVar6 = (ulonglong)DAT_14c841df8;
                }
                uVar6 = -uVar6 & (uVar10 + uVar6) - 1;
              }
            }
            else {
              uVar6 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar6,0);
              iVar2 = (int)param_1[5];
            }
          }
LAB_140d073cc:
          iVar4 = (int)(uVar6 >> 2);
          iVar9 = -0x20;
          if ((int)uVar18 <= iVar4) {
            iVar9 = iVar4 << 5;
          }
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar9;
        FUN_1446efbd8(plVar12,iVar2);
        iVar9 = (int)param_1[5] + 1;
      }
      iVar2 = iVar9 + 0x1f;
      if (-1 < iVar9) {
        iVar2 = iVar9;
      }
      *(int *)(param_1 + 5) = iVar9;
      if (iVar9 % 0x20 != 0) {
        plVar13 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar13 = plVar12;
        }
        bVar7 = -(char)(iVar9 % 0x20);
        *(uint *)((longlong)plVar13 + (longlong)(iVar2 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar13 + (longlong)(iVar2 >> 5) * 4) << (bVar7 & 0x1f)) >>
             (bVar7 & 0x1f);
      }
    }
    lVar5 = (longlong)iVar15;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar12 = (longlong *)param_1[4];
    }
    bVar7 = (byte)iVar8 & 0x1f;
    puVar1 = (uint *)((longlong)plVar12 + (longlong)(iVar16 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar7 | 0xfffffffeU >> 0x20 - bVar7);
  }
  else {
    iVar15 = (int)param_1[6];
    lVar5 = (longlong)iVar15;
    iVar8 = *(int *)(*param_1 + 4 + lVar5 * 0x18);
    *(int *)(param_1 + 6) = iVar8;
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar8 * 0x18) = 0xffffffff;
    }
  }
  plVar12 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar12 = (longlong *)param_1[4];
  }
  iVar8 = iVar15 + 0x1f;
  if (-1 < iVar15) {
    iVar8 = iVar15;
  }
  puVar1 = (uint *)((longlong)plVar12 + (longlong)(iVar8 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar15 & 0x1f);
  *param_2 = iVar15;
  *(longlong *)(param_2 + 2) = lVar5 * 0x18 + *param_1;
  return param_2;
}



// FUNCTION 140d074d6 FUN_140d074d6 body=688 status=ok
// SIG undefined FUN_140d074d6(void)

void FUN_140d074d6(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint *puVar13;
  ulonglong uVar14;
  longlong lVar15;
  int iVar16;
  uint uVar17;
  
  plVar6 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar6,0,0,4);
  }
  plVar1 = param_1 + 7;
  uVar10 = *(uint *)(param_1 + 9);
  if (uVar10 == 1) {
    if (*plVar6 != 0) {
      FUN_1446efa72(plVar6,0,0,4);
    }
  }
  else {
    if (uVar10 == 0) {
      return;
    }
    FUN_1446efa72(plVar6,0,uVar10,4);
    if ((int)uVar10 < 1) goto LAB_140d0753c;
  }
  uVar3 = 0;
  do {
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = plVar1;
    }
    *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar3) * 4) =
         0xffffffff;
    uVar3 = uVar3 + 1;
  } while (uVar10 != uVar3);
LAB_140d0753c:
  iVar7 = (int)param_1[5];
  if (iVar7 == 0) {
    uVar4 = 0;
    uVar14 = 1;
    iVar16 = 0;
    iVar5 = 0;
  }
  else {
    puVar13 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar13 = (uint *)(param_1 + 2);
    }
    uVar10 = *puVar13;
    if (uVar10 == 0) {
      iVar16 = iVar7 + 0x1e;
      if (-1 < iVar7 + -1) {
        iVar16 = iVar7 + -1;
      }
      uVar4 = 0;
      uVar14 = (ulonglong)(uint)(iVar16 >> 5);
      if (iVar16 >> 5 < 1) {
        uVar14 = uVar4;
      }
      iVar5 = 0;
      do {
        if (uVar14 == uVar4) {
          return;
        }
        iVar5 = iVar5 + 0x20;
        uVar10 = puVar13[uVar4 + 1];
        uVar4 = uVar4 + 1;
      } while (uVar10 == 0);
    }
    else {
      uVar4 = 0;
      iVar5 = 0;
    }
    uVar14 = (ulonglong)(-uVar10 & uVar10);
    uVar8 = uVar14 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    iVar16 = (iVar5 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
    if (iVar7 <= iVar16) {
      iVar16 = iVar7;
    }
  }
  if (iVar16 < iVar7) {
    uVar10 = 0xffffffff;
    do {
      lVar9 = *param_1;
      lVar15 = (longlong)iVar16;
      uVar2 = *(undefined8 *)(lVar9 + lVar15 * 0x18);
      uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
      uVar17 = (uint)uVar2 & 0xffff;
      uVar8 = (longlong)
              (int)(((uint)uVar2 << 0x10 | uVar17) + (int)((ulonglong)uVar2 >> 0x20) +
                    (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar17 >> 4)) &
              (longlong)(int)param_1[9] - 1U;
      iVar7 = (int)uVar8;
      *(int *)(lVar9 + 0x14 + lVar15 * 0x18) = iVar7;
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = plVar1;
      }
      *(undefined4 *)(lVar9 + 0x10 + lVar15 * 0x18) =
           *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar8) * 4);
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = plVar1;
      }
      *(int *)((longlong)plVar6 + ((longlong)iVar7 & (longlong)(int)param_1[9] - 1U) * 4) = iVar16;
      uVar10 = ~(uint)uVar14 & uVar10;
      puVar13 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar13 = (uint *)(param_1 + 2);
      }
      iVar7 = (int)param_1[5];
      iVar16 = (int)uVar4;
      lVar9 = (longlong)iVar16;
      uVar3 = puVar13[lVar9] & uVar10;
      if (uVar3 == 0) {
        iVar11 = iVar7 + 0x1e;
        if (-1 < iVar7 + -1) {
          iVar11 = iVar7 + -1;
        }
        iVar11 = iVar11 >> 5;
        iVar12 = iVar11;
        if (iVar11 < iVar16) {
          iVar12 = iVar16;
        }
        if (iVar11 <= iVar16) {
          return;
        }
        lVar15 = 0;
        while( true ) {
          iVar5 = iVar5 + 0x20;
          uVar3 = puVar13[lVar9 + lVar15 + 1];
          if (uVar3 != 0) break;
          lVar15 = lVar15 + 1;
          if (iVar12 - lVar9 == lVar15) {
            return;
          }
        }
        uVar4 = (ulonglong)(iVar16 + (int)lVar15 + 1);
        uVar10 = 0xffffffff;
      }
      uVar14 = (ulonglong)(-uVar3 & uVar3);
      uVar8 = uVar14 * 2 + 1;
      lVar9 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar16 = (iVar5 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
    } while (iVar16 < iVar7);
  }
  return;
}



// FUNCTION 140d07786 FUN_140d07786 body=54 status=ok
// SIG undefined FUN_140d07786(void)

void FUN_140d07786(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = 0xb8;
  do {
    FUN_140d077bc(param_1 + lVar1,param_2);
    lVar1 = lVar1 + 0x150;
  } while (lVar1 != 0x5f8);
  return;
}



// FUNCTION 140d077bc FUN_140d077bc body=114 status=ok
// SIG undefined FUN_140d077bc(void)

void FUN_140d077bc(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  FUN_1403dcede();
  lVar4 = param_1[1];
  if ((longlong)(int)lVar4 != 0) {
    lVar2 = *param_1;
    lVar5 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + 0x18 + lVar5);
      if (lVar3 != 0) {
        iVar1 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
          FUN_141022c24(param_2,iVar1);
        }
        *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar3;
      }
      lVar5 = lVar5 + 0xf0;
    } while ((longlong)(int)lVar4 * 0xf0 - lVar5 != 0);
  }
  return;
}



// FUNCTION 140d07834 FUN_140d07834 body=57 status=ok
// SIG undefined FUN_140d07834(void)

void FUN_140d07834(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb21ca8 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb21ca8 = FUN_140002ddd(FUN_146435c20,uVar1,L"GbxBrainTask_External");
  }
  return;
}



// FUNCTION 140d0787e FUN_140d0787e body=44 status=ok
// SIG undefined FUN_140d0787e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140d0787e(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  _DAT_14cb8d9fc = _DAT_14cb8d9fc + -1;
  *param_1 = DAT_14cb8d9f0;
  DAT_14cb8d9f0 = param_1;
  return;
}



// FUNCTION 140d078aa FUN_140d078aa body=1197 status=ok
// SIG undefined FUN_140d078aa(void)

void FUN_140d078aa(longlong param_1)

{
  undefined2 *puVar1;
  undefined8 *puVar2;
  ushort uVar3;
  uint uVar4;
  void *pvVar5;
  ulonglong *puVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  undefined1 auStack_1d8 [32];
  longlong local_1b8;
  longlong local_1b0;
  longlong local_1a8;
  undefined8 local_1a0;
  void *local_198;
  uint local_190;
  undefined4 local_18c;
  void *local_188;
  uint local_180;
  undefined4 local_17c;
  void *local_178;
  uint local_170;
  undefined4 local_16c;
  undefined1 *local_168;
  undefined2 *local_160;
  ulonglong *local_158;
  byte local_150;
  undefined1 local_148 [256];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  local_1b0 = param_1 + 0x180;
  FUN_14579b5c4();
  local_168 = local_148;
  local_150 = 0;
  local_158 = &local_48;
  if ((longlong)*(int *)(param_1 + 0xc0) != 0) {
    lVar9 = *(longlong *)(param_1 + 0xb8);
    local_1a8 = (longlong)*(int *)(param_1 + 0xc0) * 0x70 + lVar9;
    do {
      local_160 = (undefined2 *)local_168;
      FUN_1400021e4(lVar9 + 0x20,&local_188);
      uVar4 = local_180 - 1;
      if (local_180 == 0) {
        uVar4 = 0;
      }
      if (0 < (int)uVar4) {
        uVar10 = 0;
        do {
          uVar3 = *(ushort *)((longlong)local_188 + uVar10 * 2);
          *(ushort *)((longlong)local_188 + uVar10 * 2) =
               (ushort)(uVar3 - 0x41 < 0x1a) * 0x20 + uVar3;
          uVar10 = uVar10 + 1;
        } while (uVar4 != uVar10);
      }
      local_178 = local_188;
      local_170 = local_180;
      local_16c = local_17c;
      if (local_158 <= (ulonglong *)((longlong)local_160 + 0x2a)) {
        FUN_140213274(&local_168,0x15);
      }
      uVar4 = local_170;
      pvVar5 = local_178;
      lVar8 = 0;
      do {
        *(short *)((longlong)local_160 + lVar8 * 2) = (short)"character.challenges."[lVar8];
        lVar8 = lVar8 + 1;
      } while (lVar8 != 0x15);
      puVar1 = (undefined2 *)((longlong)local_160 + 0x2a);
      iVar7 = local_170 - 1;
      if (local_170 == 0) {
        iVar7 = 0;
      }
      lVar8 = (longlong)iVar7;
      puVar6 = (ulonglong *)((longlong)local_160 + lVar8 * 2 + 0x2a);
      local_160 = puVar1;
      if (local_158 <= puVar6) {
        FUN_140213274(&local_168,lVar8);
      }
      puVar1 = local_160;
      if (1 < uVar4) {
        memcpy(local_160,pvVar5,lVar8 * 2);
        local_160 = puVar1 + lVar8;
      }
      *local_160 = 0;
      FUN_140056680(&local_188,local_168);
      FUN_140d07d58(local_1b0,&local_178,&local_188);
      if (local_188 != (void *)0x0) {
        FUN_1400020a8();
      }
      local_1b8 = lVar9;
      if ((longlong)*(int *)(lVar9 + 0x50) != 0) {
        puVar11 = *(undefined8 **)(lVar9 + 0x48);
        puVar2 = puVar11 + (longlong)*(int *)(lVar9 + 0x50) * 3;
        do {
          local_160 = (undefined2 *)local_168;
          local_1a0 = *puVar11;
          FUN_1400021e4(&local_1a0,&local_198);
          uVar4 = local_190 - 1;
          if (local_190 == 0) {
            uVar4 = 0;
          }
          if (0 < (int)uVar4) {
            uVar10 = 0;
            do {
              uVar3 = *(ushort *)((longlong)local_198 + uVar10 * 2);
              *(ushort *)((longlong)local_198 + uVar10 * 2) =
                   (ushort)(uVar3 - 0x41 < 0x1a) * 0x20 + uVar3;
              uVar10 = uVar10 + 1;
            } while (uVar4 != uVar10);
          }
          local_188 = local_198;
          local_180 = local_190;
          local_17c = local_18c;
          if (local_158 <= (ulonglong *)((longlong)local_160 + 0x2a)) {
            FUN_140213274(&local_168,0x15);
          }
          uVar4 = local_170;
          pvVar5 = local_178;
          lVar9 = 0;
          do {
            *(short *)((longlong)local_160 + lVar9 * 2) = (short)"character.challenges."[lVar9];
            lVar9 = lVar9 + 1;
          } while (lVar9 != 0x15);
          puVar1 = (undefined2 *)((longlong)local_160 + 0x2a);
          iVar7 = local_170 - 1;
          if (local_170 == 0) {
            iVar7 = 0;
          }
          lVar9 = (longlong)iVar7;
          puVar6 = (ulonglong *)((longlong)local_160 + lVar9 * 2 + 0x2a);
          local_160 = puVar1;
          if (local_158 <= puVar6) {
            FUN_140213274(&local_168,lVar9);
          }
          puVar1 = local_160;
          if (1 < uVar4) {
            memcpy(local_160,pvVar5,lVar9 * 2);
            local_160 = puVar1 + lVar9;
          }
          if (local_158 <= local_160 + 1) {
            FUN_140213274(&local_168,1);
          }
          uVar4 = local_180;
          pvVar5 = local_188;
          puVar1 = local_160 + 1;
          *local_160 = 0x2e;
          iVar7 = local_180 - 1;
          if (local_180 == 0) {
            iVar7 = 0;
          }
          lVar9 = (longlong)iVar7;
          local_160 = puVar1;
          if (local_158 <= puVar1 + lVar9) {
            FUN_140213274(&local_168,lVar9);
          }
          puVar1 = local_160;
          if (1 < uVar4) {
            memcpy(local_160,pvVar5,lVar9 * 2);
            local_160 = puVar1 + lVar9;
          }
          *local_160 = 0;
          FUN_140056680(&local_198,local_168);
          FUN_140d07d58(local_1b0,&local_188,&local_198);
          if (local_198 != (void *)0x0) {
            FUN_1400020a8();
          }
          if (local_188 != (void *)0x0) {
            FUN_1400020a8();
          }
          puVar11 = puVar11 + 3;
        } while (puVar11 != puVar2);
      }
      if (local_178 != (void *)0x0) {
        FUN_1400020a8();
      }
      lVar9 = local_1b8 + 0x70;
    } while (lVar9 != local_1a8);
    if ((local_150 & 1) != 0) {
      FUN_1400020a8(local_168);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_1d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140d07d58 FUN_140d07d58 body=251 status=ok
// SIG undefined FUN_140d07d58(void)

void FUN_140d07d58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined2 *puVar1;
  undefined8 uVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  undefined1 auStack_58 [32];
  undefined2 *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_144a2b0a4(param_2);
  uVar4 = 0;
  iVar3 = local_30 + -1;
  if (local_30 == 0) {
    iVar3 = 0;
  }
  if (0 < iVar3) {
    puVar1 = local_38;
    if (local_30 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    lVar6 = 0;
    uVar4 = 0;
    do {
      uVar5 = ((uint)(0x19 < (ushort)puVar1[lVar6] - 0x61) * 0x20 + (uint)(ushort)puVar1[lVar6]) -
              0x20;
      uVar7 = (uint)(uVar4 >> 8) ^
              *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar4 ^ uVar5) & 0xff) * 4);
      uVar4 = (ulonglong)
              (uVar7 >> 8 ^
              *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar7 & 0xff ^ uVar5 >> 8 & 0xff) * 4));
      lVar6 = lVar6 + 1;
    } while (iVar3 != (int)lVar6);
  }
  uVar2 = FUN_140d07e54(param_1,uVar4,&local_38);
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1405e9454(uVar2,param_3);
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140d07e54 FUN_140d07e54 body=144 status=ok
// SIG undefined FUN_140d07e54(void)

longlong FUN_140d07e54(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = FUN_140d080c0();
  if (iVar1 != -1) {
    lVar3 = *param_1;
    lVar2 = (longlong)iVar1;
    if (lVar3 + lVar2 * 0x28 != 0) goto LAB_140d07eaa;
  }
  local_38 = 0;
  local_30 = param_3;
  FUN_140d07ee6(param_1,&local_24,param_2);
  lVar2 = (longlong)local_24;
  lVar3 = *param_1;
LAB_140d07eaa:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + lVar2 * 0x28 + 0x10;
}



// FUNCTION 140d07ee6 FUN_140d07ee6 body=335 status=ok
// SIG undefined FUN_140d07ee6(void)

undefined4 *
FUN_140d07ee6(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4,
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
  undefined8 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140d08188(param_1,local_58);
  param_4 = (undefined8 *)*param_4;
  *local_50 = *param_4;
  *param_4 = 0;
  *(undefined4 *)(local_50 + 1) = *(undefined4 *)(param_4 + 1);
  *(undefined4 *)((longlong)local_50 + 0xc) = *(undefined4 *)((longlong)param_4 + 0xc);
  param_4[1] = 0;
  local_50[2] = 0;
  local_50[3] = 0;
  FUN_1447a1747(0,0);
  *(undefined4 *)(local_50 + 4) = 0xffffffff;
  local_68 = param_5;
  cVar1 = FUN_140d08036(param_1,param_3,local_50,local_58);
  if (cVar1 == '\0') {
    uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar2 < 4) {
      iVar4 = 1;
    }
    else {
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
      *(uint *)((longlong)local_50 + 0x24) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_50 + 4) =
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
      FUN_140d0836e(param_1);
    }
  }
  *param_2 = local_58[0];
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d08036 FUN_140d08036 body=137 status=ok
// SIG undefined FUN_140d08036(void)

void FUN_140d08036(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4,
                  undefined1 *param_5)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 uVar9;
  int iVar10;
  
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    iVar10 = FUN_140d080c0();
    if (iVar10 != -1) {
      puVar1 = (undefined4 *)(*param_1 + (longlong)iVar10 * 0x28);
      FUN_1467c0730(puVar1);
      uVar2 = *param_3;
      uVar3 = param_3[1];
      uVar4 = param_3[2];
      uVar5 = param_3[3];
      uVar6 = param_3[5];
      uVar7 = param_3[6];
      uVar8 = param_3[7];
      puVar1[4] = param_3[4];
      puVar1[5] = uVar6;
      puVar1[6] = uVar7;
      puVar1[7] = uVar8;
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      puVar1[2] = uVar4;
      puVar1[3] = uVar5;
      FUN_1467c1a76(param_1,*param_4,1);
      *param_4 = iVar10;
      uVar9 = 1;
      goto LAB_140d0806a;
    }
  }
  uVar9 = 0;
LAB_140d0806a:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar9;
  }
  return;
}



// FUNCTION 140d080c0 FUN_140d080c0 body=199 status=ok
// SIG undefined FUN_140d080c0(void)

int FUN_140d080c0(longlong *param_1,uint param_2,longlong *param_3)

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
LAB_140d08106:
      lVar10 = (longlong)iVar1;
      iVar3 = *(int *)(lVar4 + 8 + lVar10 * 0x28);
      if (iVar3 == iVar2) {
        if (iVar2 < 2) {
          return iVar1;
        }
        lVar6 = 0;
        do {
          uVar8 = *(ushort *)(*(longlong *)(lVar4 + lVar10 * 0x28) + lVar6);
          uVar9 = (ulonglong)uVar8;
          uVar7 = *(ushort *)(*param_3 + lVar6);
          if (uVar8 == uVar7) {
            if (uVar8 == 0) {
              return iVar1;
            }
          }
          else {
            if (0x7f < (uVar7 | uVar8)) goto LAB_140d08173;
            uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
            uVar11 = (ulonglong)uVar7;
            uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
            if ((&DAT_149e05da0)[uVar9] != (&DAT_149e05da0)[uVar11]) goto LAB_140d08173;
          }
          lVar6 = lVar6 + 2;
        } while( true );
      }
      if (iVar3 + iVar2 == 1) {
        return iVar1;
      }
      goto LAB_140d08120;
    }
  }
  return -1;
LAB_140d08173:
  if (uVar8 == uVar7) {
    return iVar1;
  }
LAB_140d08120:
  iVar1 = *(int *)(lVar4 + 0x20 + lVar10 * 0x28);
  if (iVar1 == -1) {
    return -1;
  }
  goto LAB_140d08106;
}



// FUNCTION 140d08188 FUN_140d08188 body=485 status=ok
// SIG undefined FUN_140d08188(void)

int * FUN_140d08188(longlong *param_1,int *param_2)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  longlong *plVar9;
  longlong *plVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar11 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar11 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar11) {
      FUN_140549c28(param_1,iVar11);
    }
    iVar6 = (int)param_1[5];
    if (iVar6 == 0) {
      iVar2 = -1;
    }
    else {
      iVar2 = iVar6 + 0x1e;
      if (-1 < iVar6 + -1) {
        iVar2 = iVar6 + -1;
      }
      iVar2 = iVar2 >> 5;
    }
    plVar9 = param_1 + 2;
    iVar8 = iVar6 + 1;
    iVar12 = iVar6 + 0x1f;
    if (-1 < iVar6) {
      iVar12 = iVar6;
    }
    if (iVar12 >> 5 == iVar2) {
      *(int *)(param_1 + 5) = iVar8;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar6) {
        if (iVar6 + 0x20U < 0xa0) {
          iVar8 = 0x80;
          iVar2 = iVar6;
        }
        else {
          uVar13 = iVar6 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar7 = 4;
            if (4 < uVar13) {
              uVar7 = uVar13;
            }
          }
          else {
            uVar7 = (uVar13 * 3 >> 3) + uVar13 + 0x10;
          }
          uVar4 = FUN_144a3809e(uVar7 << 2,0);
          iVar2 = (int)(uVar4 >> 2);
          iVar8 = -0x20;
          if ((int)uVar13 <= iVar2) {
            iVar8 = iVar2 << 5;
          }
          iVar2 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar8;
        FUN_1446efbd8(plVar9,iVar2);
        iVar8 = (int)param_1[5] + 1;
      }
      iVar2 = iVar8 + 0x1f;
      if (-1 < iVar8) {
        iVar2 = iVar8;
      }
      *(int *)(param_1 + 5) = iVar8;
      if (iVar8 % 0x20 != 0) {
        plVar10 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar10 = plVar9;
        }
        bVar5 = -(char)(iVar8 % 0x20);
        *(uint *)((longlong)plVar10 + (longlong)(iVar2 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar10 + (longlong)(iVar2 >> 5) * 4) << (bVar5 & 0x1f)) >>
             (bVar5 & 0x1f);
      }
    }
    lVar3 = (longlong)iVar11;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[4];
    }
    bVar5 = (byte)iVar6 & 0x1f;
    puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar12 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar5 | 0xfffffffeU >> 0x20 - bVar5);
  }
  else {
    iVar11 = (int)param_1[6];
    lVar3 = (longlong)iVar11;
    iVar6 = *(int *)(*param_1 + 4 + lVar3 * 0x28);
    *(int *)(param_1 + 6) = iVar6;
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar6 * 0x28) = 0xffffffff;
    }
  }
  plVar9 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar9 = (longlong *)param_1[4];
  }
  iVar6 = iVar11 + 0x1f;
  if (-1 < iVar11) {
    iVar6 = iVar11;
  }
  puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar11 & 0x1f);
  *param_2 = iVar11;
  *(longlong *)(param_2 + 2) = lVar3 * 0x28 + *param_1;
  return param_2;
}



// FUNCTION 140d0836e FUN_140d0836e body=804 status=ok
// SIG undefined FUN_140d0836e(void)

void FUN_140d0836e(longlong *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  longlong *plVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  int iVar12;
  int iVar13;
  uint *puVar14;
  longlong lVar15;
  longlong lVar16;
  undefined2 *puVar17;
  int iVar18;
  
  plVar5 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar5,0,0,4);
  }
  plVar1 = param_1 + 7;
  uVar9 = *(uint *)(param_1 + 9);
  if (uVar9 == 1) {
    if (*plVar5 != 0) {
      FUN_1446efa72(plVar5,0,0,4);
    }
  }
  else {
    if (uVar9 == 0) {
      return;
    }
    FUN_1446efa72(plVar5,0,uVar9,4);
    if ((int)uVar9 < 1) goto LAB_140d083e3;
  }
  uVar3 = 0;
  do {
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = plVar1;
    }
    *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar3) * 4) =
         0xffffffff;
    uVar3 = uVar3 + 1;
  } while (uVar9 != uVar3);
LAB_140d083e3:
  iVar6 = (int)param_1[5];
  if (iVar6 == 0) {
    uVar7 = 0;
    uVar11 = 1;
    iVar10 = 0;
    iVar18 = 0;
  }
  else {
    puVar14 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar14 = (uint *)(param_1 + 2);
    }
    uVar9 = *puVar14;
    if (uVar9 == 0) {
      iVar18 = iVar6 + 0x1e;
      if (-1 < iVar6 + -1) {
        iVar18 = iVar6 + -1;
      }
      uVar7 = 0;
      uVar11 = (ulonglong)(uint)(iVar18 >> 5);
      if (iVar18 >> 5 < 1) {
        uVar11 = uVar7;
      }
      iVar18 = 0;
      do {
        if (uVar11 == uVar7) {
          return;
        }
        iVar18 = iVar18 + 0x20;
        uVar9 = puVar14[uVar7 + 1];
        uVar7 = uVar7 + 1;
      } while (uVar9 == 0);
    }
    else {
      uVar7 = 0;
      iVar18 = 0;
    }
    uVar11 = (ulonglong)(-uVar9 & uVar9);
    uVar8 = uVar11 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    iVar10 = (iVar18 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
    if (iVar6 <= iVar10) {
      iVar10 = iVar6;
    }
  }
  if (iVar10 < iVar6) {
    uVar9 = 0xffffffff;
    do {
      puVar2 = (undefined8 *)(*param_1 + (longlong)iVar10 * 0x28);
      iVar6 = *(int *)(puVar2 + 1);
      iVar12 = iVar6 + -1;
      if (iVar6 == 0) {
        iVar12 = 0;
      }
      uVar3 = 0;
      if (0 < iVar12) {
        puVar17 = &DAT_149dfb77a;
        if (iVar6 != 0) {
          puVar17 = (undefined2 *)*puVar2;
        }
        lVar15 = 0;
        uVar3 = 0;
        do {
          uVar4 = ((uint)(ushort)puVar17[lVar15] +
                  (uint)(0x19 < (ushort)puVar17[lVar15] - 0x61) * 0x20) - 0x20;
          uVar3 = uVar3 >> 8 ^ *(uint *)(&DAT_14c75d150 + (ulonglong)((uVar3 ^ uVar4) & 0xff) * 4);
          uVar3 = uVar3 >> 8 ^
                  *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar3 & 0xff ^ uVar4 >> 8 & 0xff) * 4);
          lVar15 = lVar15 + 1;
        } while (iVar12 != (int)lVar15);
      }
      uVar8 = (longlong)(int)uVar3 & (longlong)(int)param_1[9] - 1U;
      iVar6 = (int)uVar8;
      *(int *)((longlong)puVar2 + 0x24) = iVar6;
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(undefined4 *)(puVar2 + 4) =
           *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar8) * 4);
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(int *)((longlong)plVar5 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar10;
      uVar9 = uVar9 & ~(uint)uVar11;
      puVar14 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar14 = (uint *)(param_1 + 2);
      }
      iVar6 = (int)param_1[5];
      iVar10 = (int)uVar7;
      lVar15 = (longlong)iVar10;
      uVar3 = puVar14[lVar15] & uVar9;
      if (uVar3 == 0) {
        iVar12 = iVar6 + 0x1e;
        if (-1 < iVar6 + -1) {
          iVar12 = iVar6 + -1;
        }
        iVar12 = iVar12 >> 5;
        iVar13 = iVar12;
        if (iVar12 < iVar10) {
          iVar13 = iVar10;
        }
        if (iVar12 <= iVar10) {
          return;
        }
        lVar16 = 0;
        while( true ) {
          iVar18 = iVar18 + 0x20;
          uVar3 = puVar14[lVar15 + lVar16 + 1];
          if (uVar3 != 0) break;
          lVar16 = lVar16 + 1;
          if (iVar13 - lVar15 == lVar16) {
            return;
          }
        }
        uVar7 = (ulonglong)(iVar10 + (int)lVar16 + 1);
        uVar9 = 0xffffffff;
      }
      uVar11 = (ulonglong)(-uVar3 & uVar3);
      uVar8 = uVar11 * 2 + 1;
      lVar15 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      iVar10 = (iVar18 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
    } while (iVar10 < iVar6);
  }
  return;
}



// FUNCTION 140d08692 FUN_140d08692 body=325 status=ok
// SIG undefined FUN_140d08692(void)

void FUN_140d08692(longlong *param_1)

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



// FUNCTION 140d087d8 FUN_140d087d8 body=442 status=ok
// SIG undefined FUN_140d087d8(void)

void FUN_140d087d8(longlong *param_1)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  longlong *plVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  ulonglong uVar13;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_60 = param_1 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  local_50 = 0;
  if ((int)param_1[5] == 0) {
    uVar13 = 1;
    local_58._0_4_ = 0xffffffff;
    local_58._4_4_ = 0;
    local_68._0_4_ = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    uVar13 = local_68 >> 0x20;
  }
  plVar4 = local_60;
  iVar12 = (int)local_68;
  uVar9 = (uint)local_58;
  iVar7 = local_58._4_4_;
  iVar10 = local_50;
  if (local_58._4_4_ < (int)local_60[3]) {
    do {
      lVar11 = *param_1;
      lVar5 = (longlong)iVar7;
      FUN_1447a1747(*(undefined8 *)(lVar11 + 0x10 + lVar5 * 0x28),
                    *(undefined4 *)(lVar11 + 0x18 + lVar5 * 0x28));
      if (*(longlong *)(lVar11 + 0x10 + lVar5 * 0x28) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar11 + lVar5 * 0x28) != 0) {
        FUN_1400020a8();
      }
      uVar9 = uVar9 & ~(uint)uVar13;
      plVar8 = (longlong *)plVar4[2];
      if ((longlong *)plVar4[2] == (longlong *)0x0) {
        plVar8 = plVar4;
      }
      iVar2 = (int)plVar4[3];
      lVar11 = (longlong)iVar12;
      uVar6 = *(uint *)((longlong)plVar8 + lVar11 * 4) & uVar9;
      if (uVar6 == 0) {
        iVar7 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar7 = iVar2 + -1;
        }
        iVar7 = iVar7 >> 5;
        iVar3 = iVar7;
        if (iVar7 < iVar12) {
          iVar3 = iVar12;
        }
        if (iVar7 <= iVar12) break;
        lVar5 = 0;
        while( true ) {
          iVar10 = iVar10 + 0x20;
          uVar6 = *(uint *)((longlong)plVar8 + lVar5 * 4 + lVar11 * 4 + 4);
          if (uVar6 != 0) break;
          lVar5 = lVar5 + 1;
          if (iVar3 - lVar11 == lVar5) goto LAB_140d0891a;
        }
        iVar12 = iVar12 + (int)lVar5 + 1;
        uVar9 = 0xffffffff;
      }
      uVar13 = (ulonglong)(-uVar6 & uVar6);
      uVar1 = uVar13 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar7 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    } while (iVar7 < iVar2);
  }
LAB_140d0891a:
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    FUN_140549ad6(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d08994 FUN_140d08994 body=882 status=ok
// SIG undefined FUN_140d08994(void)

void FUN_140d08994(longlong param_1)

{
  ushort uVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (*(longlong *)(param_1 + 800) != 0) {
    lVar5 = *(longlong *)(param_1 + 0xb0);
    if (lVar5 == 0) {
      lVar5 = FUN_1448abda6(param_1);
      if (lVar5 == 0) {
        return;
      }
      lVar5 = *(longlong *)(param_1 + 0xb0);
      if (lVar5 == 0) {
        lVar5 = FUN_1448abda6(param_1);
      }
    }
    if ((((*(byte *)(lVar5 + 0x155) & 1) != 0) && (*(longlong *)(lVar5 + 0x30) != 0)) &&
       (*(int *)(*(longlong *)(lVar5 + 0x30) + 0xa8) != 0)) {
      lVar5 = *(longlong *)(param_1 + 800);
      puVar4 = (undefined8 *)FUN_14001cc68(8,0x10);
      *puVar4 = &PTR_FUN_14b9dd200;
      puVar2 = *(undefined8 **)(lVar5 + 0x178);
      *(undefined8 **)(lVar5 + 0x178) = puVar4;
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,1);
      }
      puVar4 = (undefined8 *)FUN_14001cc68(8,0x10);
      *puVar4 = &PTR_FUN_14b9dd490;
      puVar2 = *(undefined8 **)(lVar5 + 0x180);
      *(undefined8 **)(lVar5 + 0x180) = puVar4;
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,1);
      }
      puVar4 = (undefined8 *)FUN_14001cc68(0x30,0x10);
      uVar1 = *(ushort *)(lVar5 + 0x188);
      *puVar4 = &PTR_LAB_14b9dd360;
      puVar4[2] = 0;
      puVar4[3] = 0;
      puVar4[4] = 0xffffffff;
      *(undefined4 *)(puVar4 + 5) = 0;
      *(uint *)((longlong)puVar4 + 0x2c) = (uint)uVar1;
      FUN_140bed800(puVar4 + 2,uVar1,1);
      *puVar4 = &PTR_FUN_14b9dd220;
      puVar2 = *(undefined8 **)(lVar5 + 0x130);
      *(undefined8 **)(lVar5 + 0x130) = puVar4;
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,1);
      }
      if ((lVar5 != 0) && (DAT_14c950c29 != 0)) {
        FUN_1456cec3c(lVar5);
      }
      *(longlong *)(lVar5 + 0x138) = lVar5;
      puVar4 = (undefined8 *)FUN_14001cc68(0x30,0x10);
      uVar1 = *(ushort *)(lVar5 + 0x18a);
      *puVar4 = &PTR_LAB_14b9dd5f0;
      puVar4[2] = 0;
      puVar4[3] = 0;
      puVar4[4] = 0xffffffff;
      *(undefined4 *)(puVar4 + 5) = 0;
      *(uint *)((longlong)puVar4 + 0x2c) = (uint)uVar1;
      FUN_140df7f36(puVar4 + 2,uVar1,1);
      *puVar4 = &PTR_FUN_14b9dd4b0;
      puVar2 = *(undefined8 **)(lVar5 + 0x140);
      *(undefined8 **)(lVar5 + 0x140) = puVar4;
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,1);
      }
      if ((lVar5 != 0) && (DAT_14c950c29 != 0)) {
        FUN_1456cec3c(lVar5);
      }
      *(longlong *)(lVar5 + 0x148) = lVar5;
      puVar4 = (undefined8 *)FUN_14001cc68(0x30,0x10);
      *puVar4 = &PTR_LAB_14b9dd360;
      puVar4[2] = 0;
      puVar4[3] = 0;
      puVar4[4] = 0xffffffff;
      puVar4[5] = 0x100000000;
      FUN_140bed800(puVar4 + 2,1,1);
      *puVar4 = &PTR_FUN_14b9dd220;
      puVar2 = *(undefined8 **)(lVar5 + 0x110);
      *(undefined8 **)(lVar5 + 0x110) = puVar4;
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,1);
      }
      if ((lVar5 != 0) && (DAT_14c950c29 != 0)) {
        FUN_1456cec3c(lVar5);
      }
      *(longlong *)(lVar5 + 0x118) = lVar5;
      puVar4 = (undefined8 *)FUN_14001cc68(0x30,0x10);
      *puVar4 = &PTR_LAB_14b9dd5f0;
      puVar4[2] = 0;
      puVar4[3] = 0;
      puVar4[4] = 0xffffffff;
      puVar4[5] = 0x100000000;
      FUN_140df7f36(puVar4 + 2,1,1);
      *puVar4 = &PTR_FUN_14b9dd4b0;
      puVar2 = *(undefined8 **)(lVar5 + 0x120);
      *(undefined8 **)(lVar5 + 0x120) = puVar4;
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,1);
      }
      if (DAT_14c950c29 == 1 && lVar5 != 0) {
        FUN_1456cec3c(lVar5);
      }
      bVar3 = DAT_14c950c29;
      *(longlong *)(lVar5 + 0x128) = lVar5;
      if ((param_1 != 0) && ((bVar3 & 1) != 0)) {
        FUN_1456cec3c(param_1);
      }
      *(longlong *)(lVar5 + 400) = param_1;
      FUN_140d08e64(lVar5);
      return;
    }
  }
  return;
}



// FUNCTION 140d08d06 FUN_140d08d06 body=29 status=ok
// SIG undefined FUN_140d08d06(void)

undefined8 FUN_140d08d06(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140d08d24 FUN_140d08d24 body=29 status=ok
// SIG undefined FUN_140d08d24(void)

undefined8 FUN_140d08d24(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140d08d42 FUN_140d08d42 body=69 status=ok
// SIG undefined FUN_140d08d42(void)

undefined8 * FUN_140d08d42(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14b9dd360;
  FUN_140d08d87(param_1[2],*(undefined4 *)(param_1 + 3));
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140d08d87 FUN_140d08d87 body=1 status=ok
// SIG undefined FUN_140d08d87(void)

void FUN_140d08d87(void)

{
  return;
}



// FUNCTION 140d08d88 FUN_140d08d88 body=69 status=ok
// SIG undefined FUN_140d08d88(void)

undefined8 * FUN_140d08d88(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14b9dd5f0;
  FUN_140d08dcd(param_1[2],*(undefined4 *)(param_1 + 3));
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140d08dcd FUN_140d08dcd body=151 status=ok
// SIG undefined FUN_140d08dcd(void)

void FUN_140d08dcd(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = &PTR_FUN_14b517f90;
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
    if (param_1[10] != 0) {
      FUN_1400020a8();
    }
    if (param_1[8] != 0) {
      FUN_1400020a8();
    }
    if (param_1[6] != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 0x16;
  }
  return;
}



// FUNCTION 140d08e64 FUN_140d08e64 body=342 status=ok
// SIG undefined FUN_140d08e64(void)

void FUN_140d08e64(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_1 + 0x150) != 0) {
    lVar4 = FUN_14496b220();
    if (lVar4 != 0) {
      if ((longlong *)(param_1 + 400) != (longlong *)(lVar4 + 0x30)) {
        lVar1 = *(longlong *)(param_1 + 400);
        *(longlong *)(lVar4 + 0x30) = lVar1;
        if ((lVar1 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
        }
        *(undefined1 *)(lVar4 + 0x38) = 1;
      }
      plVar2 = *(longlong **)(param_1 + 0x178);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 8))(plVar2,&local_28);
        if (&local_28 == (undefined8 **)(lVar4 + 0x50)) {
          if (local_28 != (undefined8 *)0x0) {
            (**(code **)*local_28)(local_28,1);
          }
        }
        else {
          if ((*(char *)(lVar4 + 0x58) == '\x01') &&
             (puVar3 = *(undefined8 **)(lVar4 + 0x50), puVar3 != (undefined8 *)0x0)) {
            (**(code **)*puVar3)(puVar3,1);
          }
          *(undefined8 **)(lVar4 + 0x50) = local_28;
          *(undefined1 *)(lVar4 + 0x58) = 1;
        }
      }
      plVar2 = *(longlong **)(param_1 + 0x180);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 8))(plVar2,&local_28);
        if (&local_28 == (undefined8 **)(lVar4 + 0x60)) {
          if (local_28 != (undefined8 *)0x0) {
            (**(code **)*local_28)(local_28,1);
          }
        }
        else {
          if ((*(char *)(lVar4 + 0x68) == '\x01') &&
             (puVar3 = *(undefined8 **)(lVar4 + 0x60), puVar3 != (undefined8 *)0x0)) {
            (**(code **)*puVar3)(puVar3,1);
          }
          *(undefined8 **)(lVar4 + 0x60) = local_28;
          *(undefined1 *)(lVar4 + 0x68) = 1;
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



// FUNCTION 140d08fbc FUN_140d08fbc body=2549 status=ok
// SIG undefined FUN_140d08fbc(void)

void FUN_140d08fbc(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  float *pfVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong *plVar13;
  undefined8 uVar14;
  longlong *plVar15;
  float *pfVar16;
  undefined8 ****ppppuVar17;
  char *pcVar18;
  longlong *plVar19;
  uint uVar20;
  char *pcVar21;
  longlong *plVar22;
  float fVar23;
  undefined4 uVar24;
  float fVar25;
  undefined1 auStack_188 [40];
  longlong *local_160;
  longlong local_158;
  longlong *local_150;
  longlong local_148;
  longlong *plStack_140;
  undefined8 local_138;
  longlong local_130;
  longlong *local_128;
  int *local_120;
  float *local_118;
  float local_110;
  int local_10c;
  longlong local_108;
  longlong lStack_100;
  longlong lStack_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 ***local_e0 [3];
  ushort local_c8;
  byte local_c0;
  undefined1 local_b8;
  longlong *local_88;
  uint local_80;
  uint local_7c;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_188;
  FUN_14094f6bc();
  if (*(int *)(param_1 + 0xa8) == 0) goto LAB_140d0914b;
  if ((*(byte *)(param_2 + 0x90) & 1) != 0) {
    local_108 = 0;
    lStack_100 = 0;
    lStack_f8 = 0;
    uVar8 = FUN_140c1c194();
    lStack_100 = FUN_14477b664(uVar8);
    lVar12 = FUN_140d099b2();
    uVar8 = FUN_140d099b2();
    FUN_1402d1bfa(&local_130,uVar8,param_1);
    if (local_108 != local_130) {
      lStack_f8 = 0;
    }
    local_108 = local_130;
    lVar9 = FUN_140c1c194();
    if (lVar12 == 0) {
LAB_140d09824:
      lVar9 = lVar12;
    }
    else if (lVar9 == 0) {
      lVar9 = 0;
    }
    else if ((*(int *)(lVar9 + 0x38) <= *(int *)(lVar12 + 0x38)) &&
            (*(longlong *)(*(longlong *)(lVar12 + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) ==
             lVar9 + 0x30)) goto LAB_140d09824;
    if (lStack_100 != lVar9) {
      lStack_f8 = 0;
    }
    uVar8 = FUN_14477b664(lVar9);
    lStack_100 = FUN_14477b664(uVar8);
    if ((lStack_100 != 0) && (local_108 != 0)) {
      lStack_f8 = param_1;
    }
    FUN_14095186a(param_2,&local_108);
  }
  lStack_100 = 0;
  lStack_f8 = 0;
  uVar8 = FUN_140c1c194();
  lVar9 = FUN_14477b664(uVar8);
  lVar10 = FUN_140d099b2();
  uVar8 = FUN_140d099b2();
  FUN_1402d1bfa(&local_130,uVar8,param_1);
  lVar12 = local_130;
  if (local_130 != 0) {
    lStack_f8 = 0;
  }
  local_108 = local_130;
  lVar11 = FUN_140c1c194();
  if (lVar10 == 0) {
LAB_140d0909c:
    lVar11 = lVar10;
  }
  else if (lVar11 == 0) {
    lVar11 = 0;
  }
  else if ((*(int *)(lVar11 + 0x38) <= *(int *)(lVar10 + 0x38)) &&
          (*(longlong *)(*(longlong *)(lVar10 + 0x30) + (longlong)*(int *)(lVar11 + 0x38) * 8) ==
           lVar11 + 0x30)) goto LAB_140d0909c;
  if (lVar9 != lVar11) {
    lStack_f8 = 0;
  }
  uVar8 = FUN_14477b664(lVar11);
  lStack_100 = FUN_14477b664(uVar8);
  if ((lVar12 != 0) && (lStack_100 != 0)) {
    lStack_f8 = param_1;
  }
  lVar12 = FUN_140950860();
  if (lVar12 != 0) {
    pcVar18 = *(char **)(lVar12 + 0x18);
    iVar7 = *(int *)(lVar12 + 0x20);
    if (((*(byte *)(param_2 + 0x90) & 2) == 0) || (iVar7 != 1)) {
      if (iVar7 == 0) goto LAB_140d0914b;
      pcVar21 = pcVar18 + (longlong)iVar7 * 0x58;
    }
    else {
      if (*pcVar18 == '\0') {
        if ((*(int *)(param_1 + 0xa8) == 0) && (*(int *)(param_1 + 0x70) == 0)) {
          local_148 = 0;
          plStack_140 = (longlong *)0x0;
          local_138 = 0;
        }
        else {
          local_88 = (longlong *)0x0;
          local_7c = 0x20;
          uVar20 = *(int *)(param_1 + 0x70) + *(int *)(param_1 + 0xa8);
          local_80 = uVar20;
          if (0x20 < uVar20) {
            FUN_140fb08bc(&local_108);
          }
          plVar15 = local_88;
          if (local_88 == (longlong *)0x0) {
            plVar15 = &local_108;
          }
          memset(plVar15,0,(longlong)(int)uVar20 << 2);
          local_120 = &local_10c;
          local_10c = 0;
          local_118 = &local_110;
          local_110 = 0.0;
          local_130 = param_2;
          local_128 = &local_108;
          if ((longlong)*(int *)(param_1 + 0xa8) != 0) {
            plVar15 = *(longlong **)(param_1 + 0xa0);
            plVar19 = plVar15 + (longlong)*(int *)(param_1 + 0xa8) * 6;
            do {
              if ((longlong)(int)plVar15[5] != 0) {
                plVar13 = (longlong *)plVar15[4];
                plVar2 = plVar13 + (longlong)(int)plVar15[5] * 5;
                do {
                  if ((longlong)(int)plVar13[2] == 0) goto LAB_140d09238;
                  local_158 = (longlong)*(int *)(param_2 + 0x48);
                  local_160 = (longlong *)plVar13[1];
                  plVar22 = local_160;
                  while( true ) {
                    local_150 = plVar2;
                    if (*(int *)(param_2 + 0x48) != 0) {
                      lVar12 = 0;
                      do {
                        if (*(longlong *)(*(longlong *)(param_2 + 0x40) + lVar12) == *plVar22)
                        goto LAB_140d093a3;
                        lVar12 = lVar12 + 8;
                      } while (local_158 << 3 != lVar12);
                    }
                    if ((longlong)*(int *)(param_2 + 0x58) == 0) break;
                    lVar12 = 0;
                    while (*(longlong *)(*(longlong *)(param_2 + 0x50) + lVar12) != *plVar22) {
                      lVar12 = lVar12 + 8;
                      if ((longlong)*(int *)(param_2 + 0x58) * 8 == lVar12) goto LAB_140d093bf;
                    }
LAB_140d093a3:
                    plVar22 = plVar22 + 1;
                    if (plVar22 == local_160 + (int)plVar13[2]) goto LAB_140d09238;
                  }
LAB_140d093bf:
                  plVar13 = plVar13 + 5;
                } while (plVar13 != plVar2);
              }
              plVar13 = plVar15 + 3;
LAB_140d09238:
              lVar9 = *plVar13;
              lVar12 = plVar15[1];
              if (lVar12 == 0) {
                uVar8 = FUN_140c1c194();
                lVar12 = FUN_14477b664(uVar8);
                plVar15[1] = lVar12;
              }
              lVar10 = plVar15[2];
              if (lVar10 == 0) {
                uVar24 = 0;
                if ((lVar12 != 0) && (*plVar15 != 0)) {
                  plVar13 = *(longlong **)(lVar12 + 0xb8);
                  if ((plVar13 == (longlong *)0x0) ||
                     (cVar6 = (**(code **)(*plVar13 + 0x108))(plVar13), cVar6 == '\0')) {
                    plVar15[2] = 0;
                  }
                  else {
                    uVar8 = (**(code **)(*plVar13 + 0x110))(plVar13);
                    lVar10 = FUN_144aff482(uVar8,plVar15);
                    plVar15[2] = lVar10;
                    if (lVar10 != 0) goto LAB_140d0925f;
                  }
                }
              }
              else {
LAB_140d0925f:
                cVar6 = FUN_14094f774(param_2,lVar10);
                uVar24 = (int)lVar9;
                if (cVar6 == '\0') {
                  uVar24 = 0;
                }
              }
              plVar13 = local_88;
              if (local_88 == (longlong *)0x0) {
                plVar13 = &local_108;
              }
              *(undefined4 *)((longlong)plVar13 + (longlong)local_10c * 4) = uVar24;
              plVar13 = local_88;
              if (local_88 == (longlong *)0x0) {
                plVar13 = &local_108;
              }
              local_110 = *(float *)((longlong)plVar13 + (longlong)local_10c * 4) + local_110;
              local_10c = local_10c + 1;
              plVar15 = plVar15 + 6;
            } while (plVar15 != plVar19);
          }
          if ((longlong)*(int *)(param_1 + 0x70) != 0) {
            lVar9 = (longlong)*(int *)(param_1 + 0x70) * 0x38;
            lVar12 = *(longlong *)(param_1 + 0x68) + 0x20;
            do {
              FUN_1487bf708(lVar12,&local_148);
              uVar24 = 0x3f800000;
              if (local_148 != 0) {
                uVar24 = *(undefined4 *)(local_148 + 8);
              }
              FUN_143c95f60(&local_130,lVar12 + -0x18,uVar24);
              plVar15 = plStack_140;
              if (plStack_140 != (longlong *)0x0) {
                LOCK();
                plVar19 = plStack_140 + 1;
                *(int *)plVar19 = (int)*plVar19 + -1;
                UNLOCK();
                if ((int)*plVar19 == 0) {
                  (**(code **)*plStack_140)(plStack_140);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar15 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (**(code **)(*plVar15 + 0x10))(plVar15);
                  }
                }
              }
              lVar12 = lVar12 + 0x38;
              lVar9 = lVar9 + -0x38;
            } while (lVar9 != 0);
          }
          uVar20 = local_80;
          if (*(char *)(param_1 + 0x88) != '\0') {
            fVar25 = *(float *)(param_1 + 0x8c);
            if ((longlong)*(int *)(param_1 + 0x98) != 0) {
              pfVar16 = *(float **)(param_1 + 0x90);
              pfVar3 = pfVar16 + (longlong)*(int *)(param_1 + 0x98) * 10;
              do {
                if ((longlong)(int)pfVar16[4] == 0) {
LAB_140d0976b:
                  fVar25 = *pfVar16;
                  break;
                }
                plVar19 = *(longlong **)(pfVar16 + 2);
                plVar15 = plVar19 + (int)pfVar16[4];
                while( true ) {
                  if (*(int *)(param_2 + 0x48) != 0) {
                    lVar12 = 0;
                    do {
                      if (*(longlong *)(*(longlong *)(param_2 + 0x40) + lVar12) == *plVar19)
                      goto LAB_140d09751;
                      lVar12 = lVar12 + 8;
                    } while ((longlong)*(int *)(param_2 + 0x48) << 3 != lVar12);
                  }
                  if ((longlong)*(int *)(param_2 + 0x58) == 0) break;
                  lVar12 = 0;
                  while (*(longlong *)(*(longlong *)(param_2 + 0x50) + lVar12) != *plVar19) {
                    lVar12 = lVar12 + 8;
                    if ((longlong)*(int *)(param_2 + 0x58) * 8 == lVar12) goto LAB_140d0975c;
                  }
LAB_140d09751:
                  plVar19 = plVar19 + 1;
                  if (plVar19 == plVar15) goto LAB_140d0976b;
                }
LAB_140d0975c:
                pfVar16 = pfVar16 + 10;
              } while (pfVar16 != pfVar3);
            }
            lVar12 = (longlong)(int)local_80;
            local_80 = local_80 + 1;
            if (local_7c < local_80) {
              FUN_140fb08bc(&local_108,uVar20);
            }
            plVar15 = local_88;
            if (local_88 == (longlong *)0x0) {
              plVar15 = &local_108;
            }
            *(float *)((longlong)plVar15 + lVar12 * 4) = fVar25;
            local_110 = fVar25 + local_110;
          }
          fVar25 = local_110;
          plVar15 = &local_108;
          if (local_88 != (longlong *)0x0) {
            plVar15 = local_88;
          }
          lVar12 = (longlong)(int)local_80;
          uVar20 = rand();
          iVar7 = -1;
          if (0 < lVar12) {
            fVar25 = fVar25 * ((float)(uVar20 & 0x7fff) / 32767.0);
            fVar23 = 0.0;
            lVar10 = 0x10;
            lVar9 = 0;
            do {
              bVar5 = fVar23 <= fVar25;
              fVar23 = fVar23 + *(float *)((longlong)plVar15 + lVar9 * 4);
              if ((bVar5) && (fVar25 <= fVar23)) {
                iVar7 = (int)lVar9;
                if (iVar7 < *(int *)(param_1 + 0xa8)) {
                  lVar12 = *(longlong *)(param_1 + 0xa0);
                  local_148 = *(longlong *)(lVar12 + -0x10 + lVar10);
                  uVar8 = FUN_14477b664(*(undefined8 *)(lVar12 + -8 + lVar10));
                  plStack_140 = (longlong *)FUN_14477b664(uVar8);
                  local_138 = *(undefined8 *)(lVar12 + lVar10);
                  goto LAB_140d094a4;
                }
                break;
              }
              lVar9 = lVar9 + 1;
              lVar10 = lVar10 + 0x30;
            } while (lVar12 != lVar9);
          }
          uVar20 = iVar7 - *(int *)(param_1 + 0xa8);
          if (((int)uVar20 < 0) || (*(int *)(param_1 + 0x70) <= (int)uVar20)) {
            local_148 = 0;
            plStack_140 = (longlong *)0x0;
            local_138 = 0;
          }
          else {
            FUN_141845010(&local_148,*(longlong *)(param_1 + 0x68) + (ulonglong)uVar20 * 0x38 + 8);
          }
LAB_140d094a4:
          if (local_88 != (longlong *)0x0) {
            FUN_1400020a8();
          }
        }
        lVar12 = local_148;
        local_108 = CONCAT71(local_108._1_7_,1);
        lStack_100 = local_148;
        FUN_14477b664(plStack_140);
        lStack_f8 = FUN_14477b664();
        uVar8 = local_138;
        local_f0 = local_138;
        local_e8 = 0;
        local_c8 = 0;
        local_c0 = 0;
        local_b8 = 0;
        *pcVar18 = '\x01';
        if (*(longlong *)(pcVar18 + 8) != lVar12) {
          pcVar18[0x18] = '\0';
          pcVar18[0x19] = '\0';
          pcVar18[0x1a] = '\0';
          pcVar18[0x1b] = '\0';
          pcVar18[0x1c] = '\0';
          pcVar18[0x1d] = '\0';
          pcVar18[0x1e] = '\0';
          pcVar18[0x1f] = '\0';
        }
        *(longlong *)(pcVar18 + 8) = lVar12;
        if (*(longlong *)(pcVar18 + 0x10) != lStack_f8) {
          pcVar18[0x18] = '\0';
          pcVar18[0x19] = '\0';
          pcVar18[0x1a] = '\0';
          pcVar18[0x1b] = '\0';
          pcVar18[0x1c] = '\0';
          pcVar18[0x1d] = '\0';
          pcVar18[0x1e] = '\0';
          pcVar18[0x1f] = '\0';
        }
        uVar14 = FUN_14477b664(lStack_f8);
        uVar14 = FUN_14477b664(uVar14);
        *(undefined8 *)(pcVar18 + 0x10) = uVar14;
        *(undefined8 *)(pcVar18 + 0x18) = uVar8;
        FUN_1403719a4(pcVar18 + 0x20,&local_e8);
        pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_c0 * 0x120));
        if (pcVar4 != (code *)0x0) {
          ppppuVar17 = (undefined8 ****)local_e0[0];
          if (local_c8 < 0x19) {
            ppppuVar17 = local_e0;
          }
          (*pcVar4)(ppppuVar17);
        }
        if (0x18 < local_c8) {
          FUN_1400020a8(local_e0[0]);
        }
      }
      pcVar21 = pcVar18 + 0x58;
    }
    do {
      if (*pcVar18 == '\x01') {
        lVar12 = *(longlong *)(pcVar18 + 0x10);
        if (lVar12 == 0) {
          uVar8 = FUN_140c1c194();
          lVar12 = FUN_14477b664(uVar8);
          *(longlong *)(pcVar18 + 0x10) = lVar12;
        }
        lVar9 = *(longlong *)(pcVar18 + 0x18);
        if (lVar9 == 0) {
          if ((*(longlong *)(pcVar18 + 8) != 0) && (lVar12 != 0)) {
            plVar15 = *(longlong **)(lVar12 + 0xb8);
            if ((plVar15 == (longlong *)0x0) ||
               (cVar6 = (**(code **)(*plVar15 + 0x108))(plVar15), cVar6 == '\0')) {
              pcVar18[0x18] = '\0';
              pcVar18[0x19] = '\0';
              pcVar18[0x1a] = '\0';
              pcVar18[0x1b] = '\0';
              pcVar18[0x1c] = '\0';
              pcVar18[0x1d] = '\0';
              pcVar18[0x1e] = '\0';
              pcVar18[0x1f] = '\0';
            }
            else {
              uVar8 = (**(code **)(*plVar15 + 0x110))(plVar15);
              lVar9 = FUN_144aff482(uVar8,pcVar18 + 8);
              *(longlong *)(pcVar18 + 0x18) = lVar9;
              if (lVar9 != 0) goto LAB_140d0913a;
            }
          }
        }
        else {
LAB_140d0913a:
          FUN_14094eece(param_2,lVar9);
        }
      }
      pcVar18 = pcVar18 + 0x58;
    } while (pcVar18 != pcVar21);
  }
LAB_140d0914b:
  if ((local_70 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140d099b2 FUN_140d099b2 body=57 status=ok
// SIG undefined FUN_140d099b2(void)

void FUN_140d099b2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb58918 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb58918 = FUN_140002ddd(FUN_1464c2d50,uVar1,L"GbxActorPartDef_Random");
  }
  return;
}



// FUNCTION 140d099ec FUN_140d099ec body=222 status=ok
// SIG undefined FUN_140d099ec(void)

void FUN_140d099ec(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [40];
  longlong *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar3 = *(longlong **)(*(longlong *)(param_3 + 0x40) + 0x348);
  if (plVar3 != (longlong *)0x0) {
    plVar4 = *(longlong **)(*(longlong *)(param_3 + 0x40) + 0x350);
    if (plVar4 != (longlong *)0x0) {
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
    }
    local_40 = plVar3;
    local_38 = plVar4;
    uVar5 = (**(code **)(*(longlong *)(param_1 + 0x30) + 0x48))(param_1 + 0x30);
    (**(code **)(*plVar3 + 0x30))(plVar3,uVar5,param_3,&local_40);
    plVar3 = local_38;
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_38 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
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
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d09ace FUN_140d09ace body=88 status=ok
// SIG undefined FUN_140d09ace(void)

void FUN_140d09ace(longlong param_1)

{
  longlong lVar1;
  
  FUN_140d09b26();
  *(byte *)(param_1 + 0x9c) = *(byte *)(param_1 + 0x9c) & 0xfe;
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (((*(byte *)(param_1 + 0xb8) & 6) != 0) &&
     ((lVar1 = *(longlong *)(param_1 + 0xb0), lVar1 != 0 ||
      (lVar1 = FUN_1448abda6(param_1), lVar1 != 0)))) {
    FUN_1401b4182(lVar1,param_1);
    return;
  }
  return;
}



// FUNCTION 140d09b26 FUN_140d09b26 body=170 status=ok
// SIG undefined FUN_140d09b26(void)

void FUN_140d09b26(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_1 + 0x118) != 0) {
    lVar2 = FUN_14494f566(*(longlong *)(param_1 + 0x118) + 0x98);
    if (lVar2 != 0) {
      uVar1 = *(undefined8 *)(param_1 + 0x118);
      FUN_140056680(local_30,L"Dialog Component Unregistering Speaker");
      FUN_1403171d0(uVar1,0,local_30,0);
      if (local_30[0] != 0) {
        FUN_1400020a8();
      }
    }
  }
  if (((*(byte *)(param_1 + 0x9e) & 0x10) != 0) && (*(longlong *)(param_1 + 0x118) != 0)) {
    FUN_140316e34(*(longlong *)(param_1 + 0x118),1);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d09bd2 FUN_140d09bd2 body=202 status=ok
// SIG undefined FUN_140d09bd2(void)

int FUN_140d09bd2(uint param_1,undefined8 *param_2)

{
  char cVar1;
  undefined *puVar2;
  int iVar3;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14cb7c378 != DAT_14cb7c3a4) {
    puVar2 = &DAT_14cb7c3a8;
    if (DAT_14cb7c3b0 != (undefined *)0x0) {
      puVar2 = DAT_14cb7c3b0;
    }
    iVar3 = *(int *)(puVar2 + (ulonglong)(DAT_14cb7c3b8 - 1U & param_1) * 4);
    if (iVar3 != -1) {
      do {
        local_40 = *param_2;
        local_38 = *(undefined8 *)(DAT_14cb7c370 + (longlong)iVar3 * 0x20);
        cVar1 = FUN_140d09c9e(&local_38,&local_40);
        if (cVar1 != '\0') goto LAB_140d09c60;
        iVar3 = *(int *)(DAT_14cb7c370 + 0x18 + (longlong)iVar3 * 0x20);
      } while (iVar3 != -1);
    }
  }
  iVar3 = -1;
LAB_140d09c60:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d09c9e FUN_140d09c9e body=55 status=ok
// SIG undefined FUN_140d09c9e(void)

ulonglong FUN_140d09c9e(int *param_1,int *param_2)

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



// FUNCTION 140d09cd6 FUN_140d09cd6 body=48 status=ok
// SIG undefined FUN_140d09cd6(void)

void FUN_140d09cd6(longlong *param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x2f0))();
  if (cVar1 != '\0') {
    FUN_140d09d06(param_1);
  }
  FUN_1408453d0(param_1,param_2);
  return;
}



// FUNCTION 140d09d06 FUN_140d09d06 body=168 status=ok
// SIG undefined FUN_140d09d06(void)

void FUN_140d09d06(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x118);
  if (lVar2 == 0) {
    FUN_140eb4f72(param_1);
    lVar2 = *(longlong *)(param_1 + 0x118);
    if (lVar2 == 0) {
      return;
    }
  }
  if ((((*(longlong *)(lVar2 + 0x180) != 0) && (*(int *)(lVar2 + 0x17c) != 0)) &&
      (uVar1 = *(uint *)(lVar2 + 0x178), -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    if (((lVar3 != 0) && (*(int *)(lVar3 + 0x10) == *(int *)(lVar2 + 0x17c))) &&
       ((*(uint *)(lVar3 + 8) & 0x10200000) == 0)) {
      FUN_140d53872();
      return;
    }
  }
  FUN_1411aa87e(lVar2,param_1 + 0x110,param_1 + 0x130);
  return;
}



// FUNCTION 140d09dae FUN_140d09dae body=105 status=ok
// SIG undefined FUN_140d09dae(void)

void FUN_140d09dae(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14487fd02();
  if (iVar1 != 3) {
    FUN_140d09fae(param_1 + 0x400,param_1 + 0x3d8,param_1 + 0x4b8);
  }
  if (*(int *)(param_1 + 0x4dc) != 0) {
    FUN_1407c0b34(param_1 + 0x4b8,param_1 + 0x3d0,param_1);
  }
  FUN_1405f1eac(param_1);
  FUN_140d09e18(param_1 + 0x400);
  return;
}



// FUNCTION 140d09e18 FUN_140d09e18 body=82 status=ok
// SIG undefined FUN_140d09e18(void)

void FUN_140d09e18(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  
  if ((*(char *)(param_1 + 0x68) != '\0') || (*(char *)(param_1 + 0x62) == '\x01')) {
    lVar1 = FUN_140b15fd0(param_1);
    if (lVar1 != 0) {
      FUN_140d09f2a(lVar1,1);
    }
  }
  if (*(char *)(param_1 + 0x68) == '\0') {
    cVar2 = *(char *)(param_1 + 0x62);
  }
  else {
    cVar2 = '\x01';
  }
  if (*(char *)(param_1 + 0x61) == cVar2) {
    return;
  }
  FUN_140d09e6a(param_1);
  return;
}



// FUNCTION 140d09e6a FUN_140d09e6a body=191 status=ok
// SIG undefined FUN_140d09e6a(void)

void FUN_140d09e6a(longlong param_1,char param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = FUN_140b15fd0();
  if ((((lVar1 != 0) && ((*(byte *)(lVar1 + 0x65) & 0x18) == 0x10)) &&
      (*(char *)(param_1 + 0x61) != param_2)) &&
     (*(char *)(param_1 + 0x61) = param_2, param_2 != '\0')) {
    local_38 = 0;
    uStack_30 = 0;
    local_40 = 0;
    FUN_140d0a558(lVar1,&local_38);
    lVar1 = local_38;
    lVar2 = (longlong)(int)uStack_30;
    if (lVar2 != 0) {
      lVar3 = 0;
      do {
        FUN_140b1548a(param_1,*(undefined8 *)(lVar1 + lVar3),1);
        lVar3 = lVar3 + 8;
      } while (lVar2 * 8 != lVar3);
    }
    if (local_38 != 0) {
      FUN_1400020a8(local_38);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140d09f2a FUN_140d09f2a body=132 status=ok
// SIG undefined FUN_140d09f2a(void)

void FUN_140d09f2a(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x1c8);
  if (plVar1 != (longlong *)0x0) {
    if ((longlong)(int)plVar1[0x44] < 1) {
      if ((DAT_14c76142c != 1) || ((*(byte *)(plVar1 + 0x3f) & 2) == 0)) {
        cVar3 = (**(code **)(*plVar1 + 0x508))(plVar1,0,param_2,0);
        *(byte *)(plVar1 + 0x3f) = *(byte *)(plVar1 + 0x3f) & 0xfd | cVar3 * '\x02';
      }
    }
    else {
      lVar2 = *(longlong *)(plVar1[0x43] + -8 + (longlong)(int)plVar1[0x44] * 8);
      *(byte *)(lVar2 + 0x608) = *(byte *)(lVar2 + 0x608) | 2;
      *(undefined4 *)(lVar2 + 0x10) = 3;
      *(undefined4 *)(lVar2 + 200) = 0xffffffff;
    }
  }
  return;
}



// FUNCTION 140d09fae FUN_140d09fae body=1244 status=ok
// SIG undefined FUN_140d09fae(void)

void FUN_140d09fae(undefined4 *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  int iStack_40;
  undefined4 uStack_3c;
  undefined1 local_38 [8];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(undefined1 *)((longlong)param_1 + 0x62) = *(undefined1 *)(param_1 + 0x18);
  FUN_140d0a48c(&local_48);
  *param_1 = (undefined4)local_48;
  param_1[1] = local_48._4_4_;
  param_1[2] = iStack_40;
  param_1[3] = uStack_3c;
  *(undefined8 *)(param_1 + 4) = param_3;
  lVar5 = FUN_140b15fd0(param_1);
  if (lVar5 == 0) goto LAB_140d0a293;
  local_48 = (longlong *)0x0;
  iStack_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  iStack_40 = 3;
  *local_48 = (longlong)&PTR_LAB_14a1c7440;
  LOCK();
  UNLOCK();
  lVar6 = DAT_14c758608 + 1;
  lVar8 = DAT_14c758608 + 1;
  if (lVar6 == 0) {
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 2;
    lVar8 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar8;
  local_48[2] = lVar6;
  *local_48 = (longlong)&PTR_FUN_14b432dc0;
  local_48[3] = (longlong)param_1;
  local_48[4] = (longlong)&LAB_140b470d4;
  if ((local_48 == (longlong *)0x0) || (cVar3 = (**(code **)(*local_48 + 0x30))(), cVar3 == '\0')) {
    if (iStack_40 == 0) goto LAB_140d0a144;
    if (local_48 != (longlong *)0x0) {
      (**(code **)*local_48)(local_48,0);
      FUN_1446efa72(&local_48,0,0,0x10);
      goto LAB_140d0a137;
    }
  }
  else {
    plVar9 = (longlong *)(lVar5 + 0x2d0);
    if (*(int *)(lVar5 + 0x2e4) < 1) {
      iVar1 = *(int *)(lVar5 + 0x2d8);
      iVar4 = *(int *)(lVar5 + 0x2e0) + -1;
      *(int *)(lVar5 + 0x2e0) = iVar4;
      if (iVar4 <= iVar1) {
        iVar4 = iVar1;
        if (0 < iVar1) {
          iVar7 = 0;
          do {
            if (((*(int *)(*plVar9 + 8 + (longlong)iVar7 * 0x10) == 0) ||
                (plVar2 = *(longlong **)(*plVar9 + (longlong)iVar7 * 0x10),
                plVar2 == (longlong *)0x0)) ||
               (cVar3 = (**(code **)(*plVar2 + 0x28))(), cVar3 != '\0')) {
              FUN_14005b288(plVar9,iVar7);
              FUN_14005b248(plVar9);
            }
            else {
              iVar7 = iVar7 + 1;
            }
            iVar4 = *(int *)(lVar5 + 0x2d8);
          } while (iVar7 < iVar4);
        }
        iVar7 = 2;
        if (2 < iVar4 * 2) {
          iVar7 = iVar4 * 2;
        }
        *(int *)(lVar5 + 0x2e0) = iVar7;
        if ((iVar7 < iVar1) && (*(int *)(lVar5 + 0x2dc) != iVar4)) {
          FUN_14045812c();
        }
      }
    }
    if ((iStack_40 != 0) && (local_48 != (longlong *)0x0)) {
      (**(code **)(*local_48 + 0x38))(local_48,local_38);
    }
    iVar1 = *(int *)(lVar5 + 0x2d8);
    *(uint *)(lVar5 + 0x2d8) = iVar1 + 1U;
    if (*(uint *)(lVar5 + 0x2dc) < iVar1 + 1U) {
      FUN_1447a71f6(plVar9,iVar1);
    }
    lVar8 = *plVar9;
    lVar6 = (longlong)iVar1 * 0x10;
    *(undefined8 *)(lVar8 + lVar6) = 0;
    *(undefined4 *)(lVar8 + 8 + lVar6) = 0;
    *(longlong **)(lVar8 + lVar6) = local_48;
    local_48 = (longlong *)0x0;
    *(int *)(lVar8 + 8 + lVar6) = iStack_40;
LAB_140d0a137:
    iStack_40 = 0;
LAB_140d0a144:
    if (local_48 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  local_48 = (longlong *)0x0;
  iStack_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  iStack_40 = 3;
  *local_48 = (longlong)&PTR_LAB_14a3a3510;
  LOCK();
  UNLOCK();
  lVar6 = DAT_14c758608 + 1;
  lVar8 = DAT_14c758608 + 1;
  if (lVar6 == 0) {
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 2;
    lVar8 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar8;
  local_48[2] = lVar6;
  *local_48 = (longlong)&PTR_FUN_14b432e30;
  local_48[3] = (longlong)param_1;
  local_48[4] = (longlong)&LAB_1489a8b90;
  if ((local_48 == (longlong *)0x0) || (cVar3 = (**(code **)(*local_48 + 0x30))(), cVar3 == '\0')) {
    if (iStack_40 != 0) {
      if (local_48 == (longlong *)0x0) goto LAB_140d0a293;
      (**(code **)*local_48)(local_48,0);
      FUN_1446efa72(&local_48,0,0,0x10);
      goto LAB_140d0a27d;
    }
  }
  else {
    plVar9 = (longlong *)(lVar5 + 0x2b8);
    if (*(int *)(lVar5 + 0x2cc) < 1) {
      iVar1 = *(int *)(lVar5 + 0x2c0);
      iVar4 = *(int *)(lVar5 + 0x2c8) + -1;
      *(int *)(lVar5 + 0x2c8) = iVar4;
      if (iVar4 <= iVar1) {
        iVar4 = iVar1;
        if (0 < iVar1) {
          iVar7 = 0;
          do {
            if (((*(int *)(*plVar9 + 8 + (longlong)iVar7 * 0x10) == 0) ||
                (plVar2 = *(longlong **)(*plVar9 + (longlong)iVar7 * 0x10),
                plVar2 == (longlong *)0x0)) ||
               (cVar3 = (**(code **)(*plVar2 + 0x28))(), cVar3 != '\0')) {
              FUN_14005b288(plVar9,iVar7);
              FUN_14005b248(plVar9);
            }
            else {
              iVar7 = iVar7 + 1;
            }
            iVar4 = *(int *)(lVar5 + 0x2c0);
          } while (iVar7 < iVar4);
        }
        iVar7 = 2;
        if (2 < iVar4 * 2) {
          iVar7 = iVar4 * 2;
        }
        *(int *)(lVar5 + 0x2c8) = iVar7;
        if ((iVar7 < iVar1) && (*(int *)(lVar5 + 0x2c4) != iVar4)) {
          FUN_14045812c();
        }
      }
    }
    if ((iStack_40 != 0) && (local_48 != (longlong *)0x0)) {
      (**(code **)(*local_48 + 0x38))(local_48,local_38);
    }
    iVar1 = *(int *)(lVar5 + 0x2c0);
    *(uint *)(lVar5 + 0x2c0) = iVar1 + 1U;
    if (*(uint *)(lVar5 + 0x2c4) < iVar1 + 1U) {
      FUN_1447a71f6(plVar9,iVar1);
    }
    lVar5 = *plVar9;
    lVar8 = (longlong)iVar1 * 0x10;
    *(undefined8 *)(lVar5 + lVar8) = 0;
    *(undefined4 *)(lVar5 + 8 + lVar8) = 0;
    *(longlong **)(lVar5 + lVar8) = local_48;
    local_48 = (longlong *)0x0;
    *(int *)(lVar5 + 8 + lVar8) = iStack_40;
LAB_140d0a27d:
    iStack_40 = 0;
  }
  if (local_48 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_140d0a293:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d0a48c FUN_140d0a48c body=204 status=ok
// SIG undefined FUN_140d0a48c(void)

uint * FUN_140d0a48c(uint *param_1,longlong *param_2)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  bool bVar6;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if ((param_2 == (longlong *)0x0) || (lVar4 = (**(code **)(*param_2 + 8))(param_2), lVar4 == 0)) {
    *param_1 = 0;
    uVar3 = 0;
  }
  else {
    uVar3 = *(uint *)(lVar4 + 0xc);
    *param_1 = uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar4 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar4 = 0;
    }
    uVar3 = *(uint *)(lVar4 + 0x10);
    if (*(uint *)(lVar4 + 0x10) == 0) {
      LOCK();
      iVar1 = DAT_14c964868 + 1;
      UNLOCK();
      uVar5 = DAT_14c964868 + 1;
      bVar6 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar1;
      if (bVar6) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar5);
      }
      LOCK();
      uVar3 = *(uint *)(lVar4 + 0x10);
      bVar6 = uVar3 == 0;
      if (bVar6) {
        *(uint *)(lVar4 + 0x10) = uVar5;
        uVar3 = 0;
      }
      UNLOCK();
      if (bVar6) {
        uVar3 = uVar5;
      }
    }
  }
  param_1[1] = uVar3;
  cVar2 = FUN_14493c216(param_1,0);
  if (cVar2 == '\0') {
    *(longlong **)(param_1 + 2) = param_2;
  }
  return param_1;
}



// FUNCTION 140d0a558 FUN_140d0a558 body=674 status=ok
// SIG undefined FUN_140d0a558(void)

void FUN_140d0a558(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  undefined1 auStack_c8 [40];
  longlong local_a0;
  longlong local_98;
  undefined8 uStack_90;
  uint local_88 [4];
  uint *local_78;
  int local_70;
  undefined8 local_6c;
  int local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar14 = 0;
  local_78 = (uint *)0x0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  local_a0 = *param_3;
  if ((local_a0 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  FUN_140d0a8da(param_1,&local_98,&local_a0);
  FUN_140d0a834(param_2,(int)uStack_90 - local_64);
  iVar3 = local_70;
  uVar12 = 1;
  iVar9 = 0;
  iVar8 = 0;
  if (local_70 != 0) {
    puVar4 = local_78;
    if (local_78 == (uint *)0x0) {
      puVar4 = local_88;
    }
    uVar13 = *puVar4;
    if (uVar13 == 0) {
      iVar8 = local_70 + 0x1e;
      if (-1 < local_70 + -1) {
        iVar8 = local_70 + -1;
      }
      uVar14 = 0;
      uVar12 = (ulonglong)(uint)(iVar8 >> 5);
      if (iVar8 >> 5 < 1) {
        uVar12 = uVar14;
      }
      do {
        if (uVar12 == uVar14) goto LAB_140d0a6ed;
        iVar9 = iVar9 + 0x20;
        uVar13 = puVar4[uVar14 + 1];
        uVar14 = uVar14 + 1;
      } while (uVar13 == 0);
    }
    else {
      uVar14 = 0;
    }
    uVar12 = (ulonglong)(-uVar13 & uVar13);
    uVar1 = uVar12 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    iVar8 = (iVar9 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
    if (local_70 <= iVar8) {
      iVar8 = local_70;
    }
  }
  if (iVar8 != local_70) {
    uVar13 = 0xffffffff;
    do {
      uVar2 = *(undefined8 *)(local_98 + (longlong)iVar8 * 0x10);
      iVar8 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar8 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar8 + 1U) {
        FUN_1447d05f2(param_2,iVar8);
      }
      *(undefined8 *)(*param_2 + (longlong)iVar8 * 8) = uVar2;
      uVar13 = uVar13 & ~(uint)uVar12;
      puVar4 = local_78;
      if (local_78 == (uint *)0x0) {
        puVar4 = local_88;
      }
      iVar8 = (int)uVar14;
      lVar10 = (longlong)iVar8;
      uVar7 = puVar4[lVar10] & uVar13;
      if (uVar7 == 0) {
        iVar5 = local_70 + 0x1e;
        if (-1 < local_70 + -1) {
          iVar5 = local_70 + -1;
        }
        iVar5 = iVar5 >> 5;
        iVar9 = iVar9 + 0x20;
        iVar6 = iVar5;
        if (iVar5 < iVar8) {
          iVar6 = iVar8;
        }
        if (iVar8 < iVar5) {
          lVar11 = 0;
          do {
            uVar7 = puVar4[lVar10 + lVar11 + 1];
            if (uVar7 != 0) {
              uVar14 = (ulonglong)(iVar8 + (int)lVar11 + 1);
              uVar13 = 0xffffffff;
              goto LAB_140d0a6be;
            }
            iVar9 = iVar9 + 0x20;
            lVar11 = lVar11 + 1;
          } while (iVar6 - lVar10 != lVar11);
          uVar13 = 0xffffffff;
          iVar8 = iVar6;
        }
        uVar14 = (ulonglong)(iVar8 + 1);
        iVar8 = local_70;
      }
      else {
LAB_140d0a6be:
        uVar12 = (ulonglong)(-uVar7 & uVar7);
        uVar1 = uVar12 * 2 + 1;
        lVar10 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
          }
        }
        iVar8 = (iVar9 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
        if (local_70 <= iVar8) {
          iVar8 = local_70;
        }
      }
    } while (iVar8 != iVar3);
  }
LAB_140d0a6ed:
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_140d0a7fc(&local_98);
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140d0a7fc FUN_140d0a7fc body=55 status=ok
// SIG undefined FUN_140d0a7fc(void)

void FUN_140d0a7fc(longlong *param_1)

{
  FUN_140d0a85e(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140d0a834 FUN_140d0a834 body=41 status=ok
// SIG undefined FUN_140d0a834(void)

void FUN_140d0a834(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (param_2 <= *(int *)(param_1 + 0xc)) {
    return;
  }
  FUN_140c5c1ec();
  return;
}



// FUNCTION 140d0a85e FUN_140d0a85e body=123 status=ok
// SIG undefined FUN_140d0a85e(void)

void FUN_140d0a85e(longlong param_1,int param_2)

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



// FUNCTION 140d0a8da FUN_140d0a8da body=1609 status=ok
// SIG undefined FUN_140d0a8da(void)

void FUN_140d0a8da(code *param_1,longlong param_2,longlong *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  uint uVar15;
  ulonglong uVar16;
  int iVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  undefined1 auStack_158 [32];
  undefined4 local_138;
  undefined4 local_130;
  undefined4 local_128;
  undefined8 local_120;
  wchar_t *local_118;
  undefined1 *local_110;
  undefined1 *local_108;
  code **local_100;
  code *local_f8;
  code *local_f0;
  code *local_e0;
  longlong local_d8;
  ulonglong local_d0;
  uint local_c4;
  longlong *local_c0;
  code *local_b8;
  undefined1 local_ac [4];
  longlong local_a8;
  code *local_a0;
  longlong local_98;
  undefined8 uStack_90;
  uint local_88 [4];
  uint *local_78;
  int local_70;
  undefined8 local_6c;
  int local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_d8 = param_2;
  local_c0 = param_3;
  FUN_140d0b2da(param_2);
  uVar16 = 0;
  local_78 = (uint *)0x0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  uVar2 = *(uint *)(param_1 + 0x268);
  if (uVar2 == 0) {
    uVar11 = 1;
    uVar1 = 0;
    iVar17 = 0;
  }
  else {
    pcVar5 = *(code **)(param_1 + 0x260);
    if (*(code **)(param_1 + 0x260) == (code *)0x0) {
      pcVar5 = param_1 + 0x250;
    }
    uVar1 = *(uint *)pcVar5;
    if (uVar1 == 0) {
      iVar17 = uVar2 + 0x1e;
      if (-1 < (int)(uVar2 - 1)) {
        iVar17 = uVar2 - 1;
      }
      uVar16 = 0;
      uVar11 = (ulonglong)(uint)(iVar17 >> 5);
      if (iVar17 >> 5 < 1) {
        uVar11 = uVar16;
      }
      iVar17 = 0;
      do {
        if (uVar11 == uVar16) goto LAB_140d0acc0;
        iVar17 = iVar17 + 0x20;
        uVar1 = *(uint *)(pcVar5 + (uVar16 + 1) * 4);
        uVar16 = uVar16 + 1;
      } while (uVar1 == 0);
    }
    else {
      uVar16 = 0;
      iVar17 = 0;
    }
    uVar11 = (ulonglong)(-uVar1 & uVar1);
    uVar19 = uVar11 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar19 != 0) {
      for (; uVar19 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    uVar1 = (iVar17 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    if ((int)uVar2 <= (int)uVar1) {
      uVar1 = uVar2;
    }
  }
  if (uVar1 != uVar2) {
    uVar15 = 0xffffffff;
    local_e0 = param_1;
    local_d0 = (ulonglong)uVar2;
    local_b8 = param_1 + 0x250;
    do {
      lVar13 = *(longlong *)(*(longlong *)(param_1 + 0x240) + (longlong)(int)uVar1 * 0x10);
      local_c4 = uVar15;
      if (lVar13 != 0) {
        if (DAT_14cac6e60 == 0) {
          local_a0 = FUN_144a7958c;
          local_f0 = FUN_14081d0ea;
          local_f8 = FUN_142b47bc4;
          local_100 = &local_a0;
          local_108 = &LAB_1478989f1;
          local_110 = &LAB_146391124;
          local_118 = L"Engine";
          local_120 = 0x10000000000;
          local_128 = 0x10000005;
          local_130 = 0x10;
          local_138 = 0x620;
          FUN_14081cfa3(L"/Script/Engine",L"PrimitiveComponent",&DAT_14cac6e60,FUN_146391102);
          param_1 = local_e0;
        }
        if ((*(int *)(DAT_14cac6e60 + 0x38) <= *(int *)(*(longlong *)(lVar13 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x30) +
             (longlong)*(int *)(DAT_14cac6e60 + 0x38) * 8) == DAT_14cac6e60 + 0x30)) {
          local_a8 = *local_c0;
          if ((local_a8 != 0 & DAT_14c950c29) == 1) {
            FUN_1456cec3c();
          }
          FUN_140d0af26(lVar13,&local_98,&local_a8);
          uVar2 = *(int *)(local_d8 + 8) - *(int *)(local_d8 + 0x34);
          uVar1 = ((int)uStack_90 - local_64) + uVar2;
          if (uVar2 < uVar1) {
            if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
              FUN_1456acd4b((longlong)(int)uVar1);
            }
            FUN_140d0b674(local_d8,uVar1);
            if (uVar1 < 4) {
              iVar4 = 1;
            }
            else {
              uVar2 = (uVar1 | 1) + 0xe;
              iVar4 = 0x1f;
              if (uVar2 != 0) {
                for (; uVar2 >> iVar4 == 0; iVar4 = iVar4 + -1) {
                }
              }
              iVar4 = 1 << ((byte)iVar4 & 0x1f);
            }
            if ((*(int *)(local_d8 + 0x48) == 0) || (*(int *)(local_d8 + 0x48) < iVar4)) {
              *(int *)(local_d8 + 0x48) = iVar4;
              FUN_140d0b828();
            }
          }
          iVar4 = local_70;
          param_1 = local_e0;
          if (local_70 == 0) {
            uVar18 = 1;
            uVar19 = 0;
            iVar12 = 0;
            iVar9 = 0;
          }
          else {
            puVar6 = local_78;
            if (local_78 == (uint *)0x0) {
              puVar6 = local_88;
            }
            uVar2 = *puVar6;
            if (uVar2 == 0) {
              iVar12 = local_70 + 0x1e;
              if (-1 < local_70 + -1) {
                iVar12 = local_70 + -1;
              }
              uVar19 = 0;
              uVar10 = (ulonglong)(uint)(iVar12 >> 5);
              if (iVar12 >> 5 < 1) {
                uVar10 = uVar19;
              }
              iVar12 = 0;
              do {
                if (uVar10 == uVar19) goto LAB_140d0abdf;
                iVar12 = iVar12 + 0x20;
                uVar2 = puVar6[uVar19 + 1];
                uVar19 = uVar19 + 1;
              } while (uVar2 == 0);
            }
            else {
              uVar19 = 0;
              iVar12 = 0;
            }
            uVar18 = (ulonglong)(-uVar2 & uVar2);
            uVar10 = uVar18 * 2 + 1;
            lVar13 = 0x3f;
            if (uVar10 != 0) {
              for (; uVar10 >> lVar13 == 0; lVar13 = lVar13 + -1) {
              }
            }
            iVar9 = (iVar12 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
            if (local_70 <= iVar9) {
              iVar9 = local_70;
            }
          }
          if (iVar9 != local_70) {
            uVar2 = 0xffffffff;
            iVar3 = local_70;
            do {
              local_a0 = *(code **)(local_98 + (longlong)iVar9 * 0x10);
              if (local_a0 != local_e0) {
                FUN_140d0b320(local_d8,local_ac,&local_a0,0);
                iVar3 = local_70;
              }
              uVar2 = uVar2 & ~(uint)uVar18;
              puVar6 = local_78;
              if (local_78 == (uint *)0x0) {
                puVar6 = local_88;
              }
              iVar9 = (int)uVar19;
              lVar13 = (longlong)iVar9;
              uVar1 = puVar6[lVar13] & uVar2;
              if (uVar1 == 0) {
                iVar7 = iVar3 + 0x1e;
                if (-1 < iVar3 + -1) {
                  iVar7 = iVar3 + -1;
                }
                iVar7 = iVar7 >> 5;
                iVar12 = iVar12 + 0x20;
                iVar8 = iVar7;
                if (iVar7 < iVar9) {
                  iVar8 = iVar9;
                }
                if (iVar9 < iVar7) {
                  lVar14 = 0;
                  do {
                    uVar1 = puVar6[lVar13 + lVar14 + 1];
                    if (uVar1 != 0) {
                      uVar19 = (ulonglong)(iVar9 + (int)lVar14 + 1);
                      uVar2 = 0xffffffff;
                      goto LAB_140d0abb3;
                    }
                    iVar12 = iVar12 + 0x20;
                    lVar14 = lVar14 + 1;
                  } while (iVar8 - lVar13 != lVar14);
                  uVar2 = 0xffffffff;
                  iVar9 = iVar8;
                }
                uVar19 = (ulonglong)(iVar9 + 1);
                iVar9 = iVar3;
              }
              else {
LAB_140d0abb3:
                uVar18 = (ulonglong)(-uVar1 & uVar1);
                uVar10 = uVar18 * 2 + 1;
                lVar13 = 0x3f;
                if (uVar10 != 0) {
                  for (; uVar10 >> lVar13 == 0; lVar13 = lVar13 + -1) {
                  }
                }
                iVar9 = (iVar12 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
                if (iVar3 <= iVar9) {
                  iVar9 = iVar3;
                }
              }
              param_1 = local_e0;
            } while (iVar9 != iVar4);
          }
        }
      }
LAB_140d0abdf:
      uVar15 = local_c4 & ~(uint)uVar11;
      pcVar5 = *(code **)(param_1 + 0x260);
      if (*(code **)(param_1 + 0x260) == (code *)0x0) {
        pcVar5 = local_b8;
      }
      uVar2 = *(uint *)(param_1 + 0x268);
      iVar4 = (int)uVar16;
      lVar13 = (longlong)iVar4;
      uVar1 = *(uint *)(pcVar5 + lVar13 * 4) & uVar15;
      if (uVar1 == 0) {
        iVar12 = uVar2 + 0x1e;
        if (-1 < (int)(uVar2 - 1)) {
          iVar12 = uVar2 - 1;
        }
        iVar12 = iVar12 >> 5;
        iVar17 = iVar17 + 0x20;
        iVar9 = iVar12;
        if (iVar12 < iVar4) {
          iVar9 = iVar4;
        }
        if (iVar4 < iVar12) {
          lVar14 = 0;
          do {
            uVar1 = *(uint *)(pcVar5 + (lVar13 + lVar14 + 1) * 4);
            if (uVar1 != 0) {
              uVar16 = (ulonglong)(iVar4 + (int)lVar14 + 1);
              uVar15 = 0xffffffff;
              goto LAB_140d0ac6c;
            }
            iVar17 = iVar17 + 0x20;
            lVar14 = lVar14 + 1;
          } while (iVar9 - lVar13 != lVar14);
          uVar15 = 0xffffffff;
          iVar4 = iVar9;
        }
        uVar16 = (ulonglong)(iVar4 + 1);
        param_1 = local_e0;
        uVar1 = uVar2;
      }
      else {
LAB_140d0ac6c:
        uVar11 = (ulonglong)(-uVar1 & uVar1);
        uVar19 = uVar11 * 2 + 1;
        lVar13 = 0x3f;
        if (uVar19 != 0) {
          for (; uVar19 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        uVar1 = (iVar17 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
        if ((int)uVar2 <= (int)uVar1) {
          uVar1 = uVar2;
        }
      }
    } while (uVar1 != (uint)local_d0);
    local_50 = 0;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
LAB_140d0acc0:
  FUN_140d0a7fc(&local_98);
  if ((local_48 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140d0af26 FUN_140d0af26 body=947 status=ok
// SIG undefined FUN_140d0af26(void)

void FUN_140d0af26(longlong param_1,longlong param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
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
  longlong local_60;
  longlong local_58;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_140d0b2da(param_2);
  uVar7 = *(uint *)(param_1 + 0x408);
  if ((uint)(*(int *)(param_2 + 8) - *(int *)(param_2 + 0x34)) < uVar7) {
    if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar7);
    }
    FUN_140d0b674(param_2,uVar7);
    if (uVar7 < 4) {
      iVar3 = 1;
    }
    else {
      uVar7 = (uVar7 | 1) + 0xe;
      iVar3 = 0x1f;
      if (uVar7 != 0) {
        for (; uVar7 >> iVar3 == 0; iVar3 = iVar3 + -1) {
        }
      }
      iVar3 = 1 << ((byte)iVar3 & 0x1f);
    }
    if ((*(int *)(param_2 + 0x48) == 0) || (*(int *)(param_2 + 0x48) < iVar3)) {
      *(int *)(param_2 + 0x48) = iVar3;
      FUN_140d0b828(param_2);
    }
  }
  iVar3 = *(int *)(param_1 + 0x408);
  if ((longlong)iVar3 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x400);
    lVar5 = 0;
    do {
      iVar1 = *(int *)(lVar2 + 0xe4 + lVar5);
      if ((((iVar1 != 0) && (uVar7 = *(uint *)(lVar2 + 0xe0 + lVar5), -1 < (int)uVar7)) &&
          ((int)uVar7 < DAT_14c9647dc)) &&
         (((plVar4 = (longlong *)
                     ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8)),
           plVar4 != (longlong *)0x0 && ((int)plVar4[2] == iVar1)) &&
          (((*(uint *)(plVar4 + 1) & 0x10200000) == 0 &&
           ((*plVar4 != 0 && (local_58 = *(longlong *)(*plVar4 + 0xa8), local_58 != 0)))))))) {
        lVar8 = *param_3;
        if (lVar8 != 0) {
          if (DAT_14cac9ca8 == 0) {
            local_50 = FUN_141030f22;
            local_70 = FUN_14081d0ea;
            local_78 = FUN_14081d0ea;
            local_88 = &LAB_1478c0a72;
            local_90 = &LAB_1417b2375;
            local_98 = L"Engine";
            local_a0 = 0x1000000000;
            local_a8 = 0x10000004;
            local_b0 = 8;
            local_b8 = 0x390;
            local_80 = &local_50;
            FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
            if (DAT_14cac9ca8 == 0) goto LAB_140d0b017;
          }
          if (((*(int *)(DAT_14cac9ca8 + 0x38) <= *(int *)(lVar8 + 0x38)) &&
              (*(longlong *)
                (*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) ==
               DAT_14cac9ca8 + 0x30)) && (lVar8 = *param_3, lVar8 != 0)) {
            lVar6 = local_58;
            if (DAT_14c950c29 == '\x01') {
              local_60 = local_58;
              FUN_1456cec3c(lVar8);
              lVar6 = local_60;
              if (DAT_14cac9ca8 != 0) goto LAB_140d0b107;
              local_50 = FUN_141030f22;
              local_70 = FUN_14081d0ea;
              local_78 = FUN_14081d0ea;
              local_88 = &LAB_1478c0a72;
              local_90 = &LAB_1417b2375;
              local_98 = L"Engine";
              local_a0 = 0x1000000000;
              local_a8 = 0x10000004;
              local_b0 = 8;
              local_b8 = 0x390;
              local_80 = &local_50;
              FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
              lVar6 = local_60;
              if (DAT_14cac9ca8 != 0) goto LAB_140d0b107;
LAB_140d0b2d2:
              lVar8 = 0;
            }
            else {
LAB_140d0b107:
              if (*(int *)(lVar8 + 0x38) < *(int *)(DAT_14cac9ca8 + 0x38)) goto LAB_140d0b2d2;
              if (*(longlong *)
                   (*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) !=
                  DAT_14cac9ca8 + 0x30) {
                lVar8 = 0;
              }
            }
            if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x38) < *(int *)(lVar8 + 0x38)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
                 (longlong)*(int *)(lVar8 + 0x38) * 8) != lVar8 + 0x30)) goto LAB_140d0b028;
          }
        }
LAB_140d0b017:
        FUN_140d0b320(param_2,&local_50,&local_58,0);
      }
LAB_140d0b028:
      lVar5 = lVar5 + 0x108;
    } while ((longlong)iVar3 * 0x108 != lVar5);
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140d0b2da FUN_140d0b2da body=70 status=ok
// SIG undefined FUN_140d0b2da(void)

void FUN_140d0b2da(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_140113fec();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_14474875a(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 140d0b320 FUN_140d0b320 body=335 status=ok
// SIG undefined FUN_140d0b320(void)

undefined4 *
FUN_140d0b320(longlong param_1,undefined4 *param_2,ulonglong *param_3,undefined8 param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  ulonglong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140d0b506(param_1,local_50);
  uVar3 = *param_3;
  *local_48 = uVar3;
  *(undefined4 *)(local_48 + 1) = 0xffffffff;
  local_54 = local_50[0];
  uVar2 = ((uint)(uVar3 >> 0x14) & 0xffff ^ (uint)(uVar3 >> 4)) * -0x7a143595;
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  uVar2 = uVar2 >> 0x10 ^ uVar2;
  local_68 = param_4;
  cVar1 = FUN_140d0b470(param_1,uVar2,local_48);
  if (cVar1 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar4 < 4) {
      iVar5 = 1;
    }
    else {
      uVar3 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      uVar2 = *(int *)(param_1 + 0x48) - 1U & uVar2;
      *(uint *)((longlong)local_48 + 0xc) = uVar2;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(local_48 + 1) =
           *(undefined4 *)
            (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar2) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar2) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_140d0b828(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d0b470 FUN_140d0b470 body=149 status=ok
// SIG undefined FUN_140d0b470(void)

void FUN_140d0b470(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
                  )

{
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
        plVar2 = (longlong *)(*param_1 + (longlong)iVar3 * 0x10);
        if (*(longlong *)(*param_1 + (longlong)iVar3 * 0x10) == *param_3) {
          *plVar2 = *param_3;
          FUN_140d0b5ec(param_1,*param_4,1);
          *param_4 = iVar3;
          uVar1 = 1;
          break;
        }
        iVar3 = (int)plVar2[1];
        uVar1 = 0;
      } while (iVar3 != -1);
      goto LAB_140d0b4f0;
    }
  }
  uVar1 = 0;
LAB_140d0b4f0:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar1;
  }
  return;
}



// FUNCTION 140d0b506 FUN_140d0b506 body=229 status=ok
// SIG undefined FUN_140d0b506(void)

int * FUN_140d0b506(longlong *param_1,int *param_2)

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
      FUN_1446efaca(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x10);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x10) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x10 + *param_1;
  return param_2;
}



// FUNCTION 140d0b5ec FUN_140d0b5ec body=136 status=ok
// SIG undefined FUN_140d0b5ec(void)

void FUN_140d0b5ec(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)((longlong)param_2 * 0x10 + lVar2 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x10) = param_2;
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
      puVar7 = puVar7 + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 140d0b674 FUN_140d0b674 body=435 status=ok
// SIG undefined FUN_140d0b674(void)

void FUN_140d0b674(longlong *param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  byte bVar4;
  longlong *_Dst;
  undefined4 *puVar5;
  ulonglong uVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  
  iVar1 = (int)param_1[1];
  uVar8 = param_2 - iVar1;
  if (uVar8 != 0 && iVar1 <= (int)param_2) {
    uVar6 = (ulonglong)param_2;
    if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar6);
    }
    iVar10 = *(int *)((longlong)param_1 + 0xc);
    iVar11 = iVar1;
    if (iVar10 < (int)param_2) {
      FUN_14474875a(param_1);
      iVar11 = (int)param_1[1];
      iVar10 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = iVar11 + uVar8;
    if ((uint)(iVar10 - iVar11) < uVar8) {
      FUN_1446efaca(param_1);
    }
    if (iVar11 < (int)param_2) {
      lVar2 = *param_1;
      iVar10 = *(int *)((longlong)param_1 + 0x34);
      puVar5 = (undefined4 *)(uVar6 * 0x10 + lVar2 + -0xc);
      do {
        iVar9 = (int)uVar6;
        if (iVar10 != 0) {
          *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x10) = iVar9 + -1;
        }
        puVar5[-1] = 0xffffffff;
        if (*(int *)((longlong)param_1 + 0x34) < 1) {
          uVar3 = 0xffffffff;
        }
        else {
          uVar3 = (undefined4)param_1[6];
        }
        uVar6 = uVar6 - 1;
        *puVar5 = uVar3;
        *(int *)(param_1 + 6) = iVar9 + -1;
        iVar10 = *(int *)((longlong)param_1 + 0x34) + 1;
        *(int *)((longlong)param_1 + 0x34) = iVar10;
        puVar5 = puVar5 + -4;
      } while ((longlong)iVar11 < (longlong)uVar6);
    }
    if (iVar1 == 0) {
      *(uint *)(param_1 + 5) = uVar8;
      if (param_2 != 0) {
        plVar7 = param_1 + 2;
        uVar12 = uVar8 + 0x1f >> 5;
        if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU >> 5 < uVar12) {
          FUN_14499171c(plVar7,0,uVar12,4);
          *(uint *)((longlong)param_1 + 0x2c) = uVar8 + 0x1f & 0xffffffe0;
        }
        _Dst = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          _Dst = plVar7;
        }
        if (uVar8 < 0x101) {
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
            plVar7 = (longlong *)param_1[4];
          }
          bVar4 = -(char)(iVar1 % 0x20);
          *(uint *)((longlong)plVar7 + (longlong)(iVar10 >> 5) * 4) =
               (uint)(*(int *)((longlong)plVar7 + (longlong)(iVar10 >> 5) * 4) << (bVar4 & 0x1f)) >>
               (bVar4 & 0x1f);
        }
      }
    }
    else if (-1 < (int)uVar8) {
      uVar3 = FUN_144a54ea4(param_1 + 2,uVar8);
      FUN_1447c6044(param_1 + 2,uVar3,uVar8,0);
      return;
    }
  }
  return;
}



// FUNCTION 140d0b828 FUN_140d0b828 body=655 status=ok
// SIG undefined FUN_140d0b828(void)

void FUN_140d0b828(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  ulonglong uVar10;
  int iVar11;
  undefined1 auStack_78 [32];
  longlong *local_58;
  int local_50;
  uint local_4c;
  uint *local_48;
  uint local_40;
  int local_3c;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar4 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar4,0,0);
  }
  plVar1 = param_1 + 7;
  uVar7 = *(uint *)(param_1 + 9);
  if (uVar7 == 1) {
    if (*plVar4 != 0) {
      FUN_1446efa72(plVar4,0,0);
    }
LAB_140d0b86d:
    uVar3 = 0;
    do {
      plVar4 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar4 = plVar1;
      }
      *(undefined4 *)((longlong)plVar4 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar3) * 4) =
           0xffffffff;
      uVar3 = uVar3 + 1;
    } while (uVar7 != uVar3);
  }
  else {
    if (uVar7 == 0) goto LAB_140d0b95f;
    FUN_1446efa72(plVar4,0);
    if (0 < (int)uVar7) goto LAB_140d0b86d;
  }
  local_48 = (uint *)(param_1 + 2);
  iVar8 = (int)param_1[5];
  local_4c = 1;
  if (iVar8 == 0) {
    local_38 = 0;
    local_50 = 0;
    local_3c = 0;
  }
  else {
    puVar9 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar9 = local_48;
    }
    uVar7 = *puVar9;
    if (uVar7 == 0) {
      iVar11 = iVar8 + 0x1e;
      if (-1 < iVar8 + -1) {
        iVar11 = iVar8 + -1;
      }
      uVar6 = 0;
      uVar10 = (ulonglong)(uint)(iVar11 >> 5);
      if (iVar11 >> 5 < 1) {
        uVar10 = uVar6;
      }
      local_50 = (int)uVar10 + 1;
      local_38 = (int)uVar10 * 0x20 + 0x20;
      iVar11 = 0;
      do {
        local_3c = iVar8;
        if (uVar10 == uVar6) goto LAB_140d0b931;
        iVar11 = iVar11 + 0x20;
        uVar7 = puVar9[uVar6 + 1];
        uVar6 = uVar6 + 1;
      } while (uVar7 == 0);
      local_50 = (int)uVar6;
      local_38 = iVar11;
    }
    else {
      local_38 = 0;
      local_50 = 0;
    }
    local_4c = -uVar7 & uVar7;
    uVar10 = (ulonglong)local_4c * 2 + 1;
    lVar2 = 0x3f;
    if (uVar10 != 0) {
      for (; uVar10 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    local_3c = (local_38 - ((uint)lVar2 ^ 0x3f)) + 0x3e;
    if (iVar8 <= local_3c) {
      local_3c = iVar8;
    }
  }
LAB_140d0b931:
  local_40 = 0xffffffff;
  local_58 = param_1;
  if (local_3c < iVar8) {
    do {
      lVar2 = *local_58;
      lVar5 = (longlong)local_3c * 0x10;
      uVar7 = ((uint)(*(ulonglong *)(lVar2 + lVar5) >> 0x14) & 0xffff ^
              (uint)(*(ulonglong *)(lVar2 + lVar5) >> 4)) * -0x7a143595;
      uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
      uVar10 = (longlong)(int)(uVar7 >> 0x10 ^ uVar7) & (longlong)(int)param_1[9] - 1U;
      iVar8 = (int)uVar10;
      *(int *)(lVar2 + 0xc + lVar5) = iVar8;
      plVar4 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar4 = plVar1;
      }
      *(undefined4 *)(lVar2 + 8 + lVar5) =
           *(undefined4 *)((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
      plVar4 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar4 = plVar1;
      }
      *(int *)((longlong)plVar4 + ((longlong)iVar8 & (longlong)(int)param_1[9] - 1U) * 4) = local_3c
      ;
      local_40 = local_40 & ~local_4c;
      FUN_1449c0562(&local_50);
    } while (local_3c < (int)local_48[6]);
  }
LAB_140d0b95f:
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140d0bab8 FUN_140d0bab8 body=21 status=ok
// SIG undefined FUN_140d0bab8(void)

undefined8 FUN_140d0bab8(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 140d0bace FUN_140d0bace body=77 status=ok
// SIG undefined FUN_140d0bace(void)

void FUN_140d0bace(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  
  if ((param_3 == 0) && (DAT_14cc2cf08 == param_2)) {
    lVar1 = FUN_144a52528();
    if (*(longlong *)(param_1 + 8) != 0) {
      FUN_141092d32(lVar1 + 0x310);
    }
    *(undefined8 *)(param_1 + 8) = 0;
    FUN_145c02728(param_1);
    return;
  }
  return;
}



// FUNCTION 140d0bb1c FUN_140d0bb1c body=9 status=ok
// SIG undefined FUN_140d0bb1c(void)

void FUN_140d0bb1c(longlong param_1)

{
  FUN_140d0bb26(param_1 + 0x10);
  return;
}



// FUNCTION 140d0bb26 FUN_140d0bb26 body=794 status=ok
// SIG undefined FUN_140d0bb26(void)

void FUN_140d0bb26(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint *puVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  uint *puVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined1 auStack_78 [32];
  longlong *local_58;
  int local_50;
  uint local_4c;
  uint *local_48;
  uint local_40;
  int local_3c;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = &PTR_FUN_14a480ff0;
  plVar5 = (longlong *)param_1[0x1a];
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
  FUN_140d0be55(param_1[0x14]);
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  plVar5 = param_1 + 0xd;
  puVar3 = (uint *)(param_1 + 0xf);
  iVar4 = *(int *)(param_1 + 0x12);
  local_4c = 1;
  if (iVar4 == 0) {
    local_38 = 0;
    local_50 = 0;
    local_3c = 0;
  }
  else {
    puVar8 = (uint *)param_1[0x11];
    if ((uint *)param_1[0x11] == (uint *)0x0) {
      puVar8 = puVar3;
    }
    uVar7 = *puVar8;
    if (uVar7 == 0) {
      iVar9 = iVar4 + 0x1e;
      if (-1 < iVar4 + -1) {
        iVar9 = iVar4 + -1;
      }
      uVar11 = 0;
      uVar10 = (ulonglong)(uint)(iVar9 >> 5);
      if (iVar9 >> 5 < 1) {
        uVar10 = uVar11;
      }
      local_50 = (int)uVar10 + 1;
      local_38 = (int)uVar10 * 0x20 + 0x20;
      iVar9 = 0;
      do {
        local_3c = iVar4;
        if (uVar10 == uVar11) goto LAB_140d0bc3e;
        iVar9 = iVar9 + 0x20;
        uVar7 = puVar8[uVar11 + 1];
        uVar11 = uVar11 + 1;
      } while (uVar7 == 0);
      local_50 = (int)uVar11;
      local_38 = iVar9;
    }
    else {
      local_38 = 0;
      local_50 = 0;
    }
    local_4c = -uVar7 & uVar7;
    uVar10 = (ulonglong)local_4c * 2 + 1;
    lVar6 = 0x3f;
    if (uVar10 != 0) {
      for (; uVar10 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    local_3c = (local_38 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    if (iVar4 <= local_3c) {
      local_3c = iVar4;
    }
  }
LAB_140d0bc3e:
  local_40 = 0xffffffff;
  local_58 = plVar5;
  local_48 = puVar3;
  if (local_3c < iVar4) {
    do {
      FUN_140275104((longlong)local_3c * 0x40 + *local_58 + 0x10);
      local_40 = local_40 & ~local_4c;
      FUN_1449c0562(&local_50);
    } while (local_3c < (int)local_48[6]);
  }
  *(undefined4 *)(param_1 + 0xe) = 0;
  if (*(int *)((longlong)param_1 + 0x74) != 0) {
    FUN_140b7ce44(plVar5,0);
  }
  param_1[0x13] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x12) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x94)) {
    *(undefined4 *)((longlong)param_1 + 0x94) = 0x80;
    FUN_1446efbd8(puVar3,0);
  }
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  if (*plVar5 != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 4) = 0;
  if (*(int *)((longlong)param_1 + 0x24) != 0) {
    FUN_1446f4a44(param_1 + 3,0);
  }
  param_1[9] = 0xffffffff;
  *(undefined4 *)(param_1 + 8) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x44)) {
    *(undefined4 *)((longlong)param_1 + 0x44) = 0x80;
    FUN_1446efbd8(param_1 + 5,0);
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    LOCK();
    piVar2 = (int *)(param_1[2] + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_78);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140d0be55 FUN_140d0be55 body=44 status=ok
// SIG undefined FUN_140d0be55(void)

void FUN_140d0be55(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 8;
    do {
      FUN_140275104(param_1);
      param_1 = param_1 + 0x30;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140d0be82 FUN_140d0be82 body=131 status=ok
// SIG undefined FUN_140d0be82(void)

void FUN_140d0be82(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14a480ef0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    FUN_1400020a8();
  }
  FUN_140d0bf3e(param_1 + 0x78);
  *(undefined4 *)(param_1 + 0x70) = 0;
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_1400020a8();
  }
  FUN_140d0bf06(param_1 + 0x28);
  plVar2 = *(longlong **)(param_1 + 0x20);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000140d0bf01. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 140d0bf06 FUN_140d0bf06 body=55 status=ok
// SIG undefined FUN_140d0bf06(void)

void FUN_140d0bf06(longlong *param_1)

{
  FUN_140d0bf76(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140d0bf3e FUN_140d0bf3e body=55 status=ok
// SIG undefined FUN_140d0bf3e(void)

void FUN_140d0bf3e(longlong *param_1)

{
  FUN_140d0bff0(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140d0bf76 FUN_140d0bf76 body=121 status=ok
// SIG undefined FUN_140d0bf76(void)

void FUN_140d0bf76(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_1401ad22e(param_1,param_2);
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



// FUNCTION 140d0bff0 FUN_140d0bff0 body=121 status=ok
// SIG undefined FUN_140d0bff0(void)

void FUN_140d0bff0(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_1401ad22e(param_1,param_2);
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



// FUNCTION 140d0c06a FUN_140d0c06a body=26 status=ok
// SIG undefined FUN_140d0c06a(void)

undefined8 FUN_140d0c06a(longlong param_1)

{
  FUN_140d0c084();
  return *(undefined8 *)(param_1 + 0x19d0);
}



// FUNCTION 140d0c084 FUN_140d0c084 body=318 status=ok
// SIG undefined FUN_140d0c084(void)

void FUN_140d0c084(longlong *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong local_38;
  longlong local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((param_1[0x16] != 0) || (lVar2 = FUN_1448abda6(param_1), lVar2 != 0)) {
    local_30 = param_1[0x339];
    if ((local_30 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    local_38 = param_1[0x338];
    if ((local_38 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    uVar1 = FUN_140297002(param_1 + 0x212);
    FUN_140aaad4e(&local_28,uVar1,&local_38,&local_30);
    FUN_1446f470e(&local_40,L"LakeTransitionMID",1);
    lVar2 = FUN_140aaadc2(param_1[0x33a],local_40,local_28,0x2100040);
    if ((lVar2 != 0) && (DAT_14c950c29 != 0)) {
      FUN_1456cec3c(lVar2);
    }
    param_1[0x33a] = lVar2;
    (**(code **)(*param_1 + 0xaa0))(param_1,lVar2);
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140d0c1c4 FUN_140d0c1c4 body=26 status=ok
// SIG undefined FUN_140d0c1c4(void)

undefined8 FUN_140d0c1c4(longlong param_1)

{
  FUN_140d0c1de();
  return *(undefined8 *)(param_1 + 0x19e8);
}



// FUNCTION 140d0c1de FUN_140d0c1de body=318 status=ok
// SIG undefined FUN_140d0c1de(void)

void FUN_140d0c1de(longlong *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong local_38;
  longlong local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((param_1[0x16] != 0) || (lVar2 = FUN_1448abda6(param_1), lVar2 != 0)) {
    local_30 = param_1[0x33c];
    if ((local_30 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    local_38 = param_1[0x33b];
    if ((local_38 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    uVar1 = FUN_140297002(param_1 + 0x212);
    FUN_140aaad4e(&local_28,uVar1,&local_38,&local_30);
    FUN_1446f470e(&local_40,L"OceanTransitionMID",1);
    lVar2 = FUN_140aaadc2(param_1[0x33d],local_40,local_28,0x2100040);
    if ((lVar2 != 0) && (DAT_14c950c29 != 0)) {
      FUN_1456cec3c(lVar2);
    }
    param_1[0x33d] = lVar2;
    (**(code **)(*param_1 + 0xaa0))(param_1,lVar2);
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140d0c31e FUN_140d0c31e body=3447 status=ok
// SIG undefined FUN_140d0c31e(void)

void FUN_140d0c31e(longlong param_1,longlong *param_2,longlong param_3)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  bool bVar9;
  undefined1 auStack_4e8 [40];
  undefined1 local_4c0 [8];
  longlong local_4b8;
  undefined4 local_4b0;
  undefined8 local_4a8;
  undefined1 local_4a0;
  undefined8 local_498;
  undefined4 local_490;
  undefined8 local_488;
  undefined1 local_480;
  undefined4 local_478;
  undefined8 local_470;
  undefined8 uStack_468;
  undefined8 local_460;
  undefined8 uStack_458;
  undefined8 local_450;
  undefined8 uStack_448;
  undefined4 local_440;
  undefined8 local_438;
  undefined4 local_430;
  undefined8 local_428;
  undefined8 uStack_420;
  undefined8 local_418;
  undefined8 uStack_410;
  undefined1 local_408;
  undefined **local_400;
  undefined8 local_3f8;
  undefined1 local_3f0;
  undefined **local_3e8;
  undefined8 local_3e0;
  undefined8 uStack_3d8;
  undefined **local_3d0;
  undefined8 local_3c8;
  undefined4 local_3c0;
  undefined8 local_3b8;
  undefined4 local_3b0;
  undefined1 local_3ac;
  undefined4 local_3a8;
  undefined1 local_3a4;
  undefined8 local_3a0;
  undefined4 local_398;
  undefined8 local_390;
  undefined8 uStack_388;
  undefined4 local_380;
  undefined8 local_378;
  undefined2 local_370;
  undefined4 local_36c;
  undefined2 local_368;
  undefined4 local_364;
  undefined8 local_360;
  longlong *local_358;
  undefined4 local_350;
  undefined4 local_348;
  undefined2 local_340;
  undefined4 local_338;
  undefined8 local_330;
  undefined8 uStack_328;
  undefined8 local_320;
  undefined8 uStack_318;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined4 local_300;
  undefined8 local_2f8;
  undefined4 local_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined4 local_298;
  uint local_290;
  undefined8 local_288;
  undefined4 local_280;
  undefined8 local_278;
  undefined1 local_270;
  undefined8 local_268;
  undefined4 local_260;
  undefined8 local_258;
  undefined1 local_250;
  undefined4 local_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined4 local_210;
  undefined8 local_208;
  undefined4 local_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined1 local_1d8;
  undefined **local_1d0;
  undefined8 local_1c8;
  undefined1 local_1c0;
  undefined **local_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined **local_1a0;
  undefined8 local_198;
  undefined4 local_190;
  undefined8 local_188;
  undefined4 local_180;
  undefined1 local_17c;
  undefined4 local_178;
  undefined1 local_174;
  undefined8 local_170;
  undefined4 local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined4 local_150;
  undefined8 local_148;
  undefined2 local_140;
  undefined4 local_13c;
  undefined2 local_138;
  undefined4 local_134;
  undefined8 local_130;
  longlong *local_128;
  undefined4 local_120;
  undefined4 local_118;
  undefined2 local_110;
  undefined4 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 local_60;
  undefined1 local_58;
  undefined6 local_54;
  undefined2 uStack_4e;
  undefined6 uStack_4c;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_4e8;
  if (*(longlong *)(param_1 + 0x110) == 0) goto LAB_140d0c838;
  lVar5 = *param_2;
  cVar1 = FUN_140d0d096(lVar5);
  if (cVar1 == '\0') {
    local_4b8 = 0;
    local_4b0 = 0x10;
    local_4a8 = 0;
    local_4a0 = 1;
    local_498 = 0;
    local_490 = 0xf00000d0;
    local_488 = 0;
    local_480 = 4;
    local_478 = 0;
    local_470 = 0;
    uStack_468 = 0;
    local_460 = 0;
    uStack_458 = 0;
    local_450 = 0;
    uStack_448 = 0;
    local_440 = 0xf00000d0;
    local_438 = 0;
    local_430 = 0x3f800000;
    local_428 = 0;
    uStack_420 = 0;
    local_418 = 0;
    uStack_410 = 0;
    local_408 = 0;
    local_3f8 = 0;
    local_3f0 = 0;
    local_400 = &PTR_FUN_14b023b20;
    local_3e8 = &PTR_FUN_14b023b40;
    local_3e0 = 0;
    uStack_3d8 = 0;
    local_3d0 = &PTR_FUN_14b00be70;
    local_3c8 = 0;
    local_3c0 = 0xf00000d0;
    local_3b8 = 0;
    local_3b0 = 0;
    local_3ac = 0;
    local_3a8 = 0;
    local_3a4 = 1;
    local_3a0 = 0;
    local_398 = 0xf00000d0;
    local_390 = 0;
    uStack_388 = 0;
    local_380 = 0xf00000d0;
    local_378 = 0;
    local_370 = 0;
    local_36c = 0;
    local_368 = 0;
    local_364 = 6;
    local_360 = 0;
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
    local_358 = DAT_14c844840;
    if (DAT_14c844840 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c844840 + 8) == FUN_144907e24) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      else {
        (**(code **)(*DAT_14c844840 + 8))();
      }
    }
    local_350 = 0;
    local_348 = 0;
    local_340 = 0;
    local_338 = 0;
    local_330 = 0;
    uStack_328 = 0;
    local_320 = 0;
    uStack_318 = 0;
    local_310 = 0;
    uStack_308 = 0;
    local_300 = 0xf00000d0;
    local_2f8 = 0;
    local_2f0 = 0x3f800000;
    local_290 = 0;
    local_2e8 = 0;
    uStack_2e0 = 0;
    local_2d8 = 0;
    uStack_2d0 = 0;
    local_2c8 = 0;
    uStack_2c0 = 0;
    local_2b8 = 0;
    uStack_2b0 = 0;
    local_2a8 = 0;
    uStack_2a0 = 0;
    local_298 = 0;
    local_288 = 0;
    local_280 = 0x10;
    local_278 = 0;
    local_270 = 1;
    local_268 = 0;
    local_260 = 0xf00000d0;
    local_258 = 0;
    local_250 = 4;
    local_248 = 0;
    local_240 = 0;
    uStack_238 = 0;
    local_230 = 0;
    uStack_228 = 0;
    local_220 = 0;
    uStack_218 = 0;
    local_210 = 0xf00000d0;
    local_208 = 0;
    local_200 = 0x3f800000;
    local_1f8 = 0;
    uStack_1f0 = 0;
    local_1e8 = 0;
    uStack_1e0 = 0;
    local_1d8 = 0;
    local_1c8 = 0;
    local_1c0 = 0;
    local_1d0 = &PTR_FUN_14b023b20;
    local_1b8 = &PTR_FUN_14b023b40;
    local_1b0 = 0;
    uStack_1a8 = 0;
    local_1a0 = &PTR_FUN_14b00be70;
    local_198 = 0;
    local_190 = 0xf00000d0;
    local_188 = 0;
    local_180 = 0;
    local_17c = 0;
    local_178 = 0;
    local_174 = 1;
    local_170 = 0;
    local_168 = 0xf00000d0;
    local_160 = 0;
    uStack_158 = 0;
    local_150 = 0xf00000d0;
    local_148 = 0;
    local_140 = 0;
    local_13c = 0;
    local_138 = 0;
    local_134 = 6;
    local_130 = 0;
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
    local_128 = DAT_14c844840;
    if (DAT_14c844840 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c844840 + 8) == FUN_144907e24) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      else {
        (**(code **)(*DAT_14c844840 + 8))();
      }
    }
    local_290 = local_290 | 3;
    lVar5 = *(longlong *)(lVar5 + 0x2a8);
LAB_140d0c7ec:
    uStack_4c = 0;
    uStack_4e = 0;
    local_54 = 0;
    local_44 = 0;
    local_58 = 0;
    local_60 = 0;
    local_68 = 0;
    uStack_70 = 0;
    local_78 = 0;
    uStack_80 = 0;
    local_88 = 0;
    uStack_90 = 0;
    local_98 = 0;
    uStack_a0 = 0;
    local_a8 = 0;
    uStack_b0 = 0;
    local_b8 = 0;
    local_c0 = 0x3f800000;
    local_c8 = 0;
    local_d0 = 0xf00000d0;
    uStack_d8 = 0;
    local_e0 = 0;
    uStack_e8 = 0;
    local_f0 = 0;
    uStack_f8 = 0;
    local_100 = 0;
    local_108 = 0;
    local_110 = 0;
    local_118 = 0;
    local_120 = 0;
    if (local_4b8 != lVar5) {
      local_4a8 = 0;
    }
    local_4b8 = lVar5;
    if ((longlong *)(param_3 + 0x10) != &local_4b8) {
LAB_140d0c819:
      FUN_14007afac(param_3 + 0x10,&local_4b8);
    }
  }
  else {
    if ((*(byte *)(lVar5 + 0x368) & 4) == 0) {
      local_4b8 = 0;
      local_4b0 = 0x10;
      local_4a8 = 0;
      local_4a0 = 1;
      local_498 = 0;
      local_490 = 0xf00000d0;
      local_488 = 0;
      local_480 = 4;
      local_478 = 0;
      local_470 = 0;
      uStack_468 = 0;
      local_460 = 0;
      uStack_458 = 0;
      local_450 = 0;
      uStack_448 = 0;
      local_440 = 0xf00000d0;
      local_438 = 0;
      local_430 = 0x3f800000;
      local_428 = 0;
      uStack_420 = 0;
      local_418 = 0;
      uStack_410 = 0;
      local_408 = 0;
      local_3f8 = 0;
      local_3f0 = 0;
      local_400 = &PTR_FUN_14b023b20;
      local_3e8 = &PTR_FUN_14b023b40;
      local_3e0 = 0;
      uStack_3d8 = 0;
      local_3d0 = &PTR_FUN_14b00be70;
      local_3c8 = 0;
      local_3c0 = 0xf00000d0;
      local_3b8 = 0;
      local_3b0 = 0;
      local_3ac = 0;
      local_3a8 = 0;
      local_3a4 = 1;
      local_3a0 = 0;
      local_398 = 0xf00000d0;
      local_390 = 0;
      uStack_388 = 0;
      local_380 = 0xf00000d0;
      local_378 = 0;
      local_370 = 0;
      local_36c = 0;
      local_368 = 0;
      local_364 = 6;
      local_360 = 0;
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c844850) && (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1))
      {
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
      local_358 = DAT_14c844840;
      if (DAT_14c844840 != (longlong *)0x0) {
        if (*(code **)(*DAT_14c844840 + 8) == FUN_144907e24) {
          LOCK();
          *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
          UNLOCK();
        }
        else {
          (**(code **)(*DAT_14c844840 + 8))();
        }
      }
      local_350 = 0;
      local_348 = 0;
      local_340 = 0;
      local_338 = 0;
      local_330 = 0;
      uStack_328 = 0;
      local_320 = 0;
      uStack_318 = 0;
      local_310 = 0;
      uStack_308 = 0;
      local_300 = 0xf00000d0;
      local_2f8 = 0;
      local_2f0 = 0x3f800000;
      local_290 = 0;
      local_2e8 = 0;
      uStack_2e0 = 0;
      local_2d8 = 0;
      uStack_2d0 = 0;
      local_2c8 = 0;
      uStack_2c0 = 0;
      local_2b8 = 0;
      uStack_2b0 = 0;
      local_2a8 = 0;
      uStack_2a0 = 0;
      local_298 = 0;
      local_288 = 0;
      local_280 = 0x10;
      local_278 = 0;
      local_270 = 1;
      local_268 = 0;
      local_260 = 0xf00000d0;
      local_258 = 0;
      local_250 = 4;
      local_248 = 0;
      local_240 = 0;
      uStack_238 = 0;
      local_230 = 0;
      uStack_228 = 0;
      local_220 = 0;
      uStack_218 = 0;
      local_210 = 0xf00000d0;
      local_208 = 0;
      local_200 = 0x3f800000;
      local_1f8 = 0;
      uStack_1f0 = 0;
      local_1e8 = 0;
      uStack_1e0 = 0;
      local_1d8 = 0;
      local_1c8 = 0;
      local_1c0 = 0;
      local_1d0 = &PTR_FUN_14b023b20;
      local_1b8 = &PTR_FUN_14b023b40;
      local_1b0 = 0;
      uStack_1a8 = 0;
      local_1a0 = &PTR_FUN_14b00be70;
      local_198 = 0;
      local_190 = 0xf00000d0;
      local_188 = 0;
      local_180 = 0;
      local_17c = 0;
      local_178 = 0;
      local_174 = 1;
      local_170 = 0;
      local_168 = 0xf00000d0;
      local_160 = 0;
      uStack_158 = 0;
      local_150 = 0xf00000d0;
      local_148 = 0;
      local_140 = 0;
      local_13c = 0;
      local_138 = 0;
      local_134 = 6;
      local_130 = 0;
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c844850) && (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1))
      {
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
      local_128 = DAT_14c844840;
      if (DAT_14c844840 != (longlong *)0x0) {
        if (*(code **)(*DAT_14c844840 + 8) == FUN_144907e24) {
          LOCK();
          *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
          UNLOCK();
        }
        else {
          (**(code **)(*DAT_14c844840 + 8))();
        }
      }
      local_290 = local_290 | 1;
      lVar5 = *(longlong *)(lVar5 + 0x290);
      goto LAB_140d0c7ec;
    }
    lVar6 = FUN_14011c349();
    local_4b8 = *(longlong *)(lVar6 + 0x48);
    lVar6 = FUN_140254f32(param_1 + -0xe38);
    if (lVar6 == 0) goto LAB_140d0c838;
    bVar2 = FUN_140254ec8(lVar6);
    if ((*(byte *)(lVar5 + 0x368) & 0x10) == 0) {
      bVar9 = false;
    }
    else {
      uVar7 = FUN_140b479f0(param_2,&DAT_14cb843e8,0);
      uVar8 = FUN_1401e6c61();
      iVar4 = FUN_140df7d8e(param_1 + -0xe38,uVar8);
      bVar9 = uVar7 <= (ulonglong)(longlong)iVar4;
    }
    FUN_1441822da(local_4c0,param_2,1);
    bVar3 = FUN_140ae5a58(*(undefined8 *)(param_1 + 0x110),local_4c0);
    FUN_140e386ea(&local_4b8);
    FUN_140e386ea(&local_288);
    local_58 = 0;
    local_44 = 0;
    local_54 = 0;
    uStack_4e = 0;
    uStack_4c = 0;
    if ((byte)(bVar2 ^ 1 | bVar3 & bVar9) == 1) {
      FUN_1489adf3c(&local_4b8,1);
    }
    if (bVar9 != false) {
      iVar4 = FUN_1489ae7a6(&local_4b8,0);
      FUN_143e56368(&local_4b8,iVar4 + 1);
      FUN_1489adf32(&local_4b8,0x3f000000);
      if (bVar2 != 0) {
        FUN_1489adf3c(&local_4b8,1);
        FUN_1489adf3c(&local_4b8,4);
        lVar5 = *(longlong *)(*param_2 + 0x2a8);
        bVar9 = local_4b8 != lVar5;
        local_4b8 = lVar5;
        if (bVar9) {
          local_4a8 = 0;
        }
      }
      FUN_143e56360(&local_4b8,1);
    }
    if ((longlong *)(param_3 + 0x10) != &local_4b8) goto LAB_140d0c819;
  }
  FUN_144908ac8(&local_288);
  FUN_144908ac8(&local_4b8);
LAB_140d0c838:
  if ((local_40 ^ (ulonglong)auStack_4e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140d0d096 FUN_140d0d096 body=458 status=ok
// SIG undefined FUN_140d0d096(void)

undefined8 FUN_140d0d096(longlong param_1,undefined8 param_2)

{
  void *pvVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [24];
  void *local_70;
  int local_68;
  undefined1 local_60 [24];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((*(byte *)(param_1 + 0x369) & 4) != 0) {
    FUN_140d0d668(local_60,param_2);
    lVar7 = FUN_1402ad3be(DAT_14cb0d2b0,param_2,1);
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = *(longlong *)(lVar7 + 0x178);
    }
    local_70 = (void *)0x0;
    local_68 = *(int *)(lVar7 + 0x3b0);
    lVar10 = (longlong)local_68;
    pvVar1 = *(void **)(lVar7 + 0x3a8);
    if (lVar10 != 0) {
      FUN_140d0d74e(&local_70,local_68,0);
      memcpy(local_70,pvVar1,lVar10 << 3);
      pvVar1 = local_70;
      lVar7 = (longlong)local_68;
      if (lVar7 == 0) {
        if (local_70 != (void *)0x0) {
          FUN_1400020a8(local_70);
        }
      }
      else {
        lVar10 = 0;
        do {
          lVar2 = *(longlong *)((longlong)pvVar1 + lVar10);
          if (lVar2 != 0) {
            lVar8 = FUN_140082f10();
            if ((*(int *)(lVar8 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
                 (longlong)*(int *)(lVar8 + 0x38) * 8) == lVar8 + 0x30)) {
              FUN_140d0d668(local_88,lVar2);
              if (((*(byte *)(param_1 + 0x369) & 0x10) != 0) &&
                 (lVar8 = FUN_14064a6f8(local_88), lVar8 != 0)) {
                uVar6 = FUN_14064a6f8(local_88);
                uVar9 = FUN_14064a6f8(local_60);
                iVar5 = FUN_1449029b8(uVar6,uVar9);
                if (iVar5 != 0) goto LAB_140d0d233;
              }
              cVar4 = FUN_140d0d262(param_1,lVar2);
              if (cVar4 != '\0') {
                bVar3 = false;
                goto LAB_140d0d215;
              }
            }
          }
LAB_140d0d233:
          lVar10 = lVar10 + 8;
        } while (lVar7 * 8 != lVar10);
        bVar3 = true;
LAB_140d0d215:
        if (local_70 != (void *)0x0) {
          FUN_1400020a8();
        }
        uVar6 = 1;
        if (!bVar3) goto LAB_140d0d0cf;
      }
    }
  }
  uVar6 = FUN_140d0d262(param_1,param_2);
LAB_140d0d0cf:
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 140d0d262 FUN_140d0d262 body=1028 status=ok
// SIG undefined FUN_140d0d262(void)

undefined4 FUN_140d0d262(longlong param_1)

{
  int *piVar1;
  code *pcVar2;
  longlong *plVar3;
  byte bVar4;
  char cVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  int iVar8;
  undefined8 ****ppppuVar9;
  undefined *puVar10;
  int iVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 *puVar15;
  longlong lVar16;
  undefined1 auStack_138 [40];
  undefined8 ***local_110 [3];
  ushort local_f8;
  byte local_f0;
  char local_e8 [16];
  longlong *local_d8;
  int local_c0;
  char local_b8;
  undefined8 local_b0;
  longlong *local_a8;
  int local_90;
  undefined1 local_88 [48];
  undefined1 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_e8[0] = '\0';
  local_c0 = 0;
  FUN_1456bb102(local_e8);
  local_b8 = '\0';
  local_90 = 0;
  if ((longlong)*(int *)(param_1 + 0x288) == 0) {
    uVar6 = 1;
  }
  else {
    plVar12 = *(longlong **)(param_1 + 0x280);
    lVar16 = (longlong)*(int *)(param_1 + 0x288) * 0x18;
    do {
      lVar16 = lVar16 + -0x18;
      lVar13 = plVar12[1];
      if (lVar13 == 0) {
        uVar7 = FUN_14016979c();
        lVar13 = FUN_14477b664(uVar7);
        plVar12[1] = lVar13;
      }
      lVar14 = plVar12[2];
      if (((lVar14 == 0) && (lVar14 = 0, lVar13 != 0)) && (*plVar12 != 0)) {
        plVar3 = *(longlong **)(lVar13 + 0xb8);
        if (plVar3 == (longlong *)0x0) {
LAB_140d0d663:
          lVar14 = 0;
        }
        else {
          cVar5 = (**(code **)(*plVar3 + 0x108))(plVar3);
          if (cVar5 == '\0') goto LAB_140d0d663;
          uVar7 = (**(code **)(*plVar3 + 0x110))(plVar3);
          lVar14 = FUN_144aff482(uVar7,plVar12);
        }
        plVar12[2] = lVar14;
      }
      FUN_1400606f6(local_88,lVar14,local_e8);
      puVar15 = local_58;
      if (local_58 == (undefined1 *)0x0) {
        puVar15 = local_88;
      }
      if (local_50 < 1) {
        puVar15 = &DAT_14c9a40e0;
      }
      FUN_1400603ec(local_110,lVar14,puVar15);
      puVar15 = local_58;
      if (local_58 == (undefined1 *)0x0) {
        puVar15 = local_88;
      }
      FUN_1446fdf58(puVar15,local_50);
      if (local_58 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      uVar6 = FUN_140168b7a(local_110,0);
      pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_f0 * 0x120));
      if (pcVar2 != (code *)0x0) {
        ppppuVar9 = local_110;
        if (0x18 < local_f8) {
          ppppuVar9 = (undefined8 ****)local_110[0];
        }
        (*pcVar2)(ppppuVar9);
      }
      if (0x18 < local_f8) {
        FUN_1400020a8(local_110[0]);
      }
      lVar13 = DAT_14c9a3da0;
      plVar12 = plVar12 + 3;
    } while (((byte)uVar6 & lVar16 != 0) != 0);
    if ((longlong)local_90 != 0) {
      lVar16 = (longlong)local_90 + -1;
      lVar14 = lVar16 * 0x10;
      FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar14),
                    *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar14));
      if (*(longlong *)(lVar13 + lVar14) != 0) {
        FUN_1400020a8();
      }
      lVar13 = DAT_14c9a3da0;
      iVar11 = (int)lVar16;
      if (DAT_14c9a3dd4 != 0) {
        *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar11;
      }
      *(undefined4 *)(lVar13 + lVar14) = 0xffffffff;
      iVar8 = -1;
      if (0 < DAT_14c9a3dd4) {
        iVar8 = DAT_14c9a3dd0;
      }
      *(int *)(lVar13 + 4 + lVar14) = iVar8;
      DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
      puVar10 = &DAT_14c9a3db0;
      if (DAT_14c9a3dc0 != (undefined *)0x0) {
        puVar10 = DAT_14c9a3dc0;
      }
      iVar8 = iVar11 + 0x1f;
      if (-1 < iVar11) {
        iVar8 = iVar11;
      }
      bVar4 = (byte)lVar16 & 0x1f;
      DAT_14c9a3dd0 = iVar11;
      *(uint *)(puVar10 + (longlong)(iVar8 >> 5) * 4) =
           *(uint *)(puVar10 + (longlong)(iVar8 >> 5) * 4) &
           (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
      local_90 = 0;
    }
  }
  if (local_b8 != '\0') {
    if (local_b8 == '\x01') {
      local_b0 = 0;
    }
    else if ((local_b8 == '\x03') && (local_a8 != (longlong *)0x0)) {
      LOCK();
      piVar1 = (int *)((longlong)local_a8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_a8 + 0x10))();
      }
    }
    local_b8 = '\0';
  }
  lVar16 = DAT_14c9a3da0;
  if ((longlong)local_c0 != 0) {
    lVar13 = (longlong)local_c0 + -1;
    lVar14 = lVar13 * 0x10;
    FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar14),
                  *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar14));
    if (*(longlong *)(lVar16 + lVar14) != 0) {
      FUN_1400020a8();
    }
    lVar16 = DAT_14c9a3da0;
    iVar11 = (int)lVar13;
    if (DAT_14c9a3dd4 != 0) {
      *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar11;
    }
    *(undefined4 *)(lVar16 + lVar14) = 0xffffffff;
    iVar8 = -1;
    if (0 < DAT_14c9a3dd4) {
      iVar8 = DAT_14c9a3dd0;
    }
    *(int *)(lVar16 + 4 + lVar14) = iVar8;
    DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
    puVar10 = &DAT_14c9a3db0;
    if (DAT_14c9a3dc0 != (undefined *)0x0) {
      puVar10 = DAT_14c9a3dc0;
    }
    iVar8 = iVar11 + 0x1f;
    if (-1 < iVar11) {
      iVar8 = iVar11;
    }
    bVar4 = (byte)lVar13 & 0x1f;
    DAT_14c9a3dd0 = iVar11;
    *(uint *)(puVar10 + (longlong)(iVar8 >> 5) * 4) =
         *(uint *)(puVar10 + (longlong)(iVar8 >> 5) * 4) &
         (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
    local_c0 = 0;
  }
  if ((local_e8[0] == '\x03') && (local_d8 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_d8 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_d8 + 0x10))();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d0d668 FUN_140d0d668 body=229 status=ok
// SIG undefined FUN_140d0d668(void)

longlong * FUN_140d0d668(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_78 [40];
  longlong local_50;
  undefined1 local_48 [24];
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0xf;
  param_1[2] = 0;
  if (param_2 != 0) {
    plVar1 = (longlong *)FUN_141817c28(param_2);
    if (plVar1 != (longlong *)0x0) {
      lVar2 = (**(code **)(*plVar1 + 0x10))(plVar1);
      FUN_1403fa066(lVar2 + 0x20,local_48,1);
      if (DAT_14c947fe0 == 0) {
        lVar2 = FUN_14001cc68(0x140,0x10);
        FUN_1456b2032(lVar2);
        DAT_14c947fe0 = lVar2;
      }
      FUN_140045924(DAT_14c947fe0,&local_50,local_48,1);
      if (local_30 != 0) {
        FUN_1400020a8();
      }
      if (local_50 != 0) {
        param_1[2] = 0;
      }
      *param_1 = local_50;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d0d74e FUN_140d0d74e body=317 status=ok
// SIG undefined FUN_140d0d74e(void)

void FUN_140d0d74e(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  byte bVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  
  if (param_2 == 0) {
    iVar7 = 0;
  }
  else {
    uVar5 = (longlong)param_2 * 8;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar5 + 0xf;
        if (uVar5 < 0x7ff1) {
          uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar3 = (&DAT_14c841e00)[uVar1 >> 4];
            uVar6 = 0x32;
            if (0x32 < bVar3) {
              uVar6 = (ulonglong)bVar3;
            }
            uVar8 = 0x32 - (ulonglong)bVar3;
            do {
              uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140d0d7bc;
              lVar2 = uVar6 + 1 + uVar8;
              uVar8 = uVar8 - 1;
            } while (lVar2 != 0x33);
          }
          uVar5 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar5 = (ulonglong)DAT_14c841df8;
          }
          uVar5 = -uVar5 & ((uVar1 & 0xfffffffffffffff0) + uVar5) - 1;
        }
      }
      else {
        uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
      }
    }
LAB_140d0d7bc:
    iVar4 = (int)(uVar5 >> 3);
    iVar7 = 0x7fffffff;
    if (param_2 <= iVar4) {
      iVar7 = iVar4;
    }
  }
  if (param_3 < iVar7) {
    FUN_1446f8d3c(param_1,0,iVar7,8,8);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 140d0d88c FUN_140d0d88c body=172 status=ok
// SIG undefined FUN_140d0d88c(void)

void FUN_140d0d88c(undefined8 param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  bool bVar6;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140c88a82(&local_28,param_1);
  if (local_20 != (longlong *)0x0) {
    iVar4 = (int)local_20[1];
    do {
      if (iVar4 == 0) {
        plVar5 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar3 = (int)local_20[1];
      bVar6 = iVar4 == iVar3;
      if (bVar6) {
        *(int *)(local_20 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
      plVar5 = local_20;
    } while (!bVar6);
    LOCK();
    piVar1 = (int *)((longlong)local_20 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_20 + 0x10))();
    }
    if (plVar5 != (longlong *)0x0) {
      if (local_28 != 0) {
        FUN_140d0d93a(local_28,param_2);
      }
      LOCK();
      plVar2 = plVar5 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
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
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140d0d93a FUN_140d0d93a body=473 status=ok
// SIG undefined FUN_140d0d93a(void)

void FUN_140d0d93a(longlong param_1,ulonglong param_2)

{
  ulonglong *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  int *piVar6;
  undefined ***pppuVar7;
  int iVar8;
  ulonglong *puVar9;
  int iVar10;
  undefined1 auStack_88 [32];
  undefined1 *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  ulonglong local_40;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((param_2 != 0) && (*(int *)(param_1 + 0x88) != *(int *)(param_1 + 0xb4))) {
    uVar4 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
    uVar4 = uVar4 >> 0x10 ^ uVar4;
    lVar5 = *(longlong *)(param_1 + 0xc0);
    if (*(longlong *)(param_1 + 0xc0) == 0) {
      lVar5 = param_1 + 0xb8;
    }
    iVar8 = *(int *)(lVar5 + (ulonglong)(*(int *)(param_1 + 200) - 1U & uVar4) * 4);
    if (iVar8 != -1) {
      do {
        puVar1 = (ulonglong *)(*(longlong *)(param_1 + 0x80) + (longlong)iVar8 * 0x18);
        if (*puVar1 == param_2) {
          puVar9 = puVar1 + 1;
          if ((puVar9 != (ulonglong *)0x0 && puVar1 != (ulonglong *)0x0) &&
             (uVar3 = *puVar9, *(int *)puVar9 = (int)uVar3 + -1, (int)uVar3 < 2)) {
            if (*(int *)(param_1 + 0x88) == *(int *)(param_1 + 0xb4)) goto LAB_140d0daa8;
            lVar5 = param_1 + 0xb8;
            if (*(longlong *)(param_1 + 0xc0) != 0) {
              lVar5 = *(longlong *)(param_1 + 0xc0);
            }
            iVar8 = *(int *)(lVar5 + ((longlong)(int)uVar4 & (longlong)*(int *)(param_1 + 200) - 1U)
                                     * 4);
            if (iVar8 == -1) goto LAB_140d0daa8;
            lVar2 = *(longlong *)(param_1 + 0x80);
            goto LAB_140d0da57;
          }
          break;
        }
        iVar8 = (int)puVar1[2];
      } while (iVar8 != -1);
    }
  }
LAB_140d0daf5:
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_140d0da57:
  puVar1 = (ulonglong *)(lVar2 + (longlong)iVar8 * 0x18);
  if (*puVar1 == param_2) {
    iVar10 = *(int *)(lVar5 + (longlong)*(int *)((longlong)puVar1 + 0x14) * 4);
    if (iVar10 == iVar8) {
      piVar6 = (int *)(lVar5 + (longlong)*(int *)((longlong)puVar1 + 0x14) * 4);
    }
    else {
      do {
        piVar6 = (int *)(lVar2 + (longlong)iVar10 * 0x18 + 0x10);
        iVar10 = *piVar6;
      } while (iVar10 != iVar8);
    }
    *piVar6 = (int)puVar1[2];
    FUN_143e06d12();
LAB_140d0daa8:
    local_58 = (undefined ***)0x0;
    local_48 = &PTR_LAB_14b41f5d0;
    local_68[0] = &LAB_143e06d84;
    local_40 = param_2;
    FUN_140f5eafc(param_1,local_68);
    if (local_68[0] != (undefined1 *)0x0) {
      pppuVar7 = local_58;
      if (local_58 == (undefined ***)0x0) {
        pppuVar7 = &local_48;
      }
      (*(code *)(*pppuVar7)[2])();
    }
    goto LAB_140d0daf5;
  }
  iVar8 = (int)puVar1[2];
  if (iVar8 == -1) goto LAB_140d0daa8;
  goto LAB_140d0da57;
}



// FUNCTION 140d0dbe8 FUN_140d0dbe8 body=295 status=ok
// SIG undefined FUN_140d0dbe8(void)

undefined8 * FUN_140d0dbe8(void)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_140d0dd10(&DAT_14cb8d4b0);
  puVar2[1] = 0;
  *(undefined1 *)(puVar2 + 2) = 0;
  *puVar2 = &PTR_FUN_14b3d9970;
  *(undefined1 *)(puVar2 + 3) = 0;
  *(undefined8 *)((longlong)puVar2 + 0x1c) = 0xffffffff;
  *(undefined8 *)((longlong)puVar2 + 0x24) = 0;
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
  puVar2[6] = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    if (*(code **)(*plVar1 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar1 + 8))();
    }
  }
  *(undefined4 *)(puVar2 + 7) = 0;
  puVar2[8] = 0;
  *(undefined1 *)(puVar2 + 9) = 1;
  return puVar2;
}



// FUNCTION 140d0dd10 FUN_140d0dd10 body=84 status=ok
// SIG undefined FUN_140d0dd10(void)

void FUN_140d0dd10(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  
  plVar2 = (longlong *)*param_1;
  if (plVar2 == (longlong *)0x0) {
    plVar2 = (longlong *)FUN_140595974(0x1400,0);
    lVar4 = 0x3f;
    plVar1 = plVar2;
    do {
      plVar3 = plVar1 + 10;
      *plVar1 = (longlong)plVar3;
      lVar4 = lVar4 + -1;
      plVar1 = plVar3;
    } while (lVar4 != 0);
    *plVar3 = *param_1;
    *param_1 = (longlong)plVar2;
    *(int *)(param_1 + 1) = (int)param_1[1] + 0x40;
  }
  *param_1 = *plVar2;
  *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + 1;
  return;
}



// FUNCTION 140d0dd64 FUN_140d0dd64 body=79 status=ok
// SIG undefined FUN_140d0dd64(void)

void FUN_140d0dd64(undefined8 *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  iVar1 = *(int *)((longlong)param_1 + 0xc);
  FUN_140893af5(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if ((iVar1 < param_2) && (*(int *)((longlong)param_1 + 0xc) != param_2)) {
    FUN_140d0ddb4(param_1,param_2);
    return;
  }
  return;
}



// FUNCTION 140d0ddb4 FUN_140d0ddb4 body=323 status=ok
// SIG undefined FUN_140d0ddb4(void)

void FUN_140d0ddb4(longlong param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar5 = 0;
  if (param_2 != 0) {
    uVar3 = (longlong)param_2 * 0x18;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar5 = uVar3 + 0xf;
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar5 >> 4]];
        }
        else {
          if ((uVar5 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar5 >> 4];
            uVar4 = 0x32;
            if (0x32 < bVar2) {
              uVar4 = (ulonglong)bVar2;
            }
            uVar6 = 0x32 - (ulonglong)bVar2;
            do {
              uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_140d0de21;
              lVar1 = uVar4 + 1 + uVar6;
              uVar6 = uVar6 - 1;
            } while (lVar1 != 0x33);
          }
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar3 & ((uVar5 & 0xfffffffffffffff0) + uVar3) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
LAB_140d0de21:
    uVar5 = 0x7fffffff;
    if (param_2 <= (int)(uVar3 / 0x18)) {
      uVar5 = uVar3 / 0x18 & 0xffffffff;
    }
  }
  if ((int)uVar5 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar5,0x18,8);
  }
  return;
}



// FUNCTION 140d0df06 FUN_140d0df06 body=31 status=ok
// SIG undefined FUN_140d0df06(void)

undefined8 FUN_140d0df06(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140d0df26 FUN_140d0df26 body=476 status=ok
// SIG undefined FUN_140d0df26(void)

undefined8 FUN_140d0df26(longlong param_1,int param_2,char param_3)

{
  uint uVar1;
  void *pvVar2;
  byte *pbVar3;
  longlong *plVar4;
  longlong lVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  undefined8 uVar9;
  uint uVar10;
  uint uVar11;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar4 = *(longlong **)(param_1 + 0xb8);
  if (plVar4 != (longlong *)0x0) {
    cVar7 = (**(code **)(*plVar4 + 8))
                      (plVar4,(longlong)param_2 * 0x10 + *(longlong *)(param_1 + 0x68));
    uVar9 = 3;
    if (cVar7 == '\0') goto LAB_140d0dfaa;
  }
  if (param_3 == '\x01') {
    local_28 = *(undefined8 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x10);
    FUN_140d0e176(param_1 + 0x18);
    FUN_140d0e104(param_1 + 0x68,param_2);
    uVar8 = *(uint *)(param_1 + 0xa8);
    lVar5 = *(longlong *)(param_1 + 0xa0);
    uVar11 = 0;
    if (0 < (int)uVar8) {
      uVar11 = 0;
      uVar10 = uVar8;
      do {
        uVar1 = (uVar10 >> 1) + uVar11;
        if (*(int *)(lVar5 + (ulonglong)uVar1 * 8) < param_2) {
          uVar11 = uVar1 + (uVar10 & 1);
        }
        bVar6 = 1 < uVar10;
        uVar10 = uVar10 >> 1;
      } while (bVar6);
    }
    if (((int)uVar11 < (int)uVar8) && (*(int *)(lVar5 + (ulonglong)uVar11 * 8) <= param_2)) {
      if (~uVar11 + uVar8 != 0) {
        pvVar2 = (void *)(lVar5 + (ulonglong)uVar11 * 8);
        memmove(pvVar2,(void *)((longlong)pvVar2 + 8),(longlong)(int)(~uVar11 + uVar8) << 3);
        uVar8 = *(uint *)(param_1 + 0xa8);
      }
      *(uint *)(param_1 + 0xa8) = uVar8 - 1;
      FUN_1458cde80(param_1 + 0xa0);
    }
    uVar9 = 0;
  }
  else {
    uVar8 = *(uint *)(param_1 + 0xa8);
    lVar5 = *(longlong *)(param_1 + 0xa0);
    uVar10 = 0;
    uVar11 = uVar8;
    if (0 < (int)uVar8) {
      do {
        uVar1 = (uVar11 >> 1) + uVar10;
        if (*(int *)(lVar5 + (ulonglong)uVar1 * 8) < param_2) {
          uVar10 = uVar1 + (uVar11 & 1);
        }
        bVar6 = 1 < uVar11;
        uVar11 = uVar11 >> 1;
      } while (bVar6);
    }
    if (((int)uVar10 < (int)uVar8) && (*(int *)(lVar5 + (ulonglong)uVar10 * 8) <= param_2)) {
      if (~uVar10 + uVar8 != 0) {
        pvVar2 = (void *)(lVar5 + (ulonglong)uVar10 * 8);
        memmove(pvVar2,(void *)((longlong)pvVar2 + 8),(longlong)(int)(~uVar10 + uVar8) << 3);
        uVar8 = *(uint *)(param_1 + 0xa8);
      }
      *(uint *)(param_1 + 0xa8) = uVar8 - 1;
      FUN_1458cde80(param_1 + 0xa0);
    }
    else {
      pbVar3 = (byte *)(*(longlong *)(param_1 + 0x68) + 0xc + (longlong)param_2 * 0x10);
      *pbVar3 = *pbVar3 | 2;
    }
    uVar9 = 1;
  }
LAB_140d0dfaa:
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9;
}



// FUNCTION 140d0e104 FUN_140d0e104 body=114 status=ok
// SIG undefined FUN_140d0e104(void)

void FUN_140d0e104(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x10) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x10) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x10 + 4) = uVar4;
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



// FUNCTION 140d0e176 FUN_140d0e176 body=258 status=ok
// SIG undefined FUN_140d0e176(void)

undefined8 FUN_140d0e176(longlong *param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  longlong *plVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar1 = param_2[1];
    uVar4 = uVar1 >> 0xd ^ *param_2 - uVar1;
    uVar7 = uVar4 << 8 ^ (-0x61c88647 - uVar1) - uVar4;
    uVar8 = uVar7 >> 0xd ^ (uVar1 - uVar4) - uVar7;
    uVar6 = uVar8 >> 0xc ^ (uVar4 - uVar7) - uVar8;
    uVar4 = uVar6 << 0x10 ^ (uVar7 - uVar8) - uVar6;
    uVar7 = uVar4 >> 5 ^ (uVar8 - uVar6) - uVar4;
    uVar6 = uVar7 >> 3 ^ (uVar6 - uVar4) - uVar7;
    uVar4 = uVar6 << 10 ^ (uVar4 - uVar7) - uVar6;
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar5 +
                    ((longlong)(int)(uVar4 >> 0xf ^ uVar7 - (uVar6 + uVar4)) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      lVar3 = *param_1;
      do {
        lVar9 = (longlong)iVar2;
        if ((*(int *)(lVar3 + lVar9 * 0x14) == *param_2) &&
           (*(uint *)(lVar3 + 4 + lVar9 * 0x14) == uVar1)) {
          FUN_140d0e278();
          return 1;
        }
        iVar2 = *(int *)(lVar3 + lVar9 * 0x14 + 0xc);
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 140d0e278 FUN_140d0e278 body=91 status=ok
// SIG undefined FUN_140d0e278(void)

void FUN_140d0e278(longlong *param_1,int param_2)

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
  lVar1 = *param_1 + (longlong)param_2 * 0x14;
  lVar5 = (longlong)*(int *)(lVar1 + 0x10);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(*param_1 + (longlong)iVar2 * 0x14 + 0xc);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + 0xc);
  FUN_140d0e2d4(param_1,param_2,1);
  return;
}



// FUNCTION 140d0e2d4 FUN_140d0e2d4 body=138 status=ok
// SIG undefined FUN_140d0e2d4(void)

void FUN_140d0e2d4(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)(lVar2 + (longlong)param_2 * 0x14 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x14) = param_2;
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
      puVar7 = puVar7 + 5;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 140d0e35e FUN_140d0e35e body=206 status=ok
// SIG undefined FUN_140d0e35e(void)

undefined4 FUN_140d0e35e(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  
  uVar3 = FUN_140d0e492();
  if ((char)uVar3 != '\0') {
    plVar1 = param_1 + 0x1a1;
    if ((int)param_1[0x1a2] == 0) {
      uVar6 = (**(code **)(*param_1 + 0x848))(param_1);
      iVar4 = (int)param_1[0x1a2];
      *(uint *)(param_1 + 0x1a2) = iVar4 + 1U;
      if (*(uint *)((longlong)param_1 + 0xd14) < iVar4 + 1U) {
        FUN_140e4fdb0(plVar1,iVar4);
      }
      *(undefined8 *)(*plVar1 + (longlong)iVar4 * 8) = uVar6;
    }
    plVar2 = (longlong *)param_1[0x39];
    if (plVar2 != (longlong *)0x0) {
      lVar5 = FUN_14081cebe();
      if ((*(int *)(lVar5 + 0x38) <= *(int *)(plVar2[2] + 0x38)) &&
         (*(longlong *)(*(longlong *)(plVar2[2] + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
          lVar5 + 0x30)) {
        iVar4 = (**(code **)(*plVar2 + 0x570))(plVar2);
        FUN_140d0e42c(*(undefined8 *)*plVar1,plVar2);
        if (iVar4 != 0) {
          return uVar3;
        }
      }
    }
    FUN_1405e47c6(param_1,0);
  }
  return uVar3;
}


