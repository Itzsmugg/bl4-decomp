// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14793cb3c FUN_14793cb3c body=45 status=ok
// SIG undefined FUN_14793cb3c(void)

undefined4 FUN_14793cb3c(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  
  if (param_3 == -1) {
    uVar1 = 0xffffffff;
  }
  else {
    lVar2 = FUN_140f76254(param_1,param_2,0);
    uVar1 = *(undefined4 *)(*(longlong *)(lVar2 + 0x10) + (longlong)param_3 * 4);
  }
  return uVar1;
}



// FUNCTION 14793cb6a FUN_14793cb6a body=44 status=ok
// SIG undefined FUN_14793cb6a(void)

undefined4 FUN_14793cb6a(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined4 uVar1;
  longlong *plVar2;
  
  if (param_3 == -1) {
    uVar1 = 0xffffffff;
  }
  else {
    plVar2 = (longlong *)FUN_140f76254(param_1,param_2,0);
    uVar1 = *(undefined4 *)(*plVar2 + (longlong)param_3 * 4);
  }
  return uVar1;
}



// FUNCTION 14793cba8 FUN_14793cba8 body=602 status=ok
// SIG undefined FUN_14793cba8(void)

void FUN_14793cba8(longlong param_1,longlong *param_2,longlong *param_3)

{
  uint uVar1;
  longlong *plVar2;
  longlong *plVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_78 [40];
  longlong *local_50;
  longlong *local_48;
  undefined1 local_3c [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(int *)(param_1 + 0x290) != *(int *)(param_1 + 700)) {
    lVar10 = *param_2;
    uVar1 = (uint)((ulonglong)lVar10 >> 0x10);
    uVar4 = (uint)lVar10 & 0xffff;
    lVar6 = param_1 + 0x2c0;
    if (*(longlong *)(param_1 + 0x2c8) != 0) {
      lVar6 = *(longlong *)(param_1 + 0x2c8);
    }
    iVar5 = *(int *)(lVar6 + (ulonglong)
                             (*(int *)(param_1 + 0x2d0) - 1U &
                             (int)((ulonglong)lVar10 >> 0x20) + ((uint)lVar10 << 0x10 | uVar4) +
                             (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar4 >> 4)) * 4);
    if (iVar5 != -1) {
      do {
        plVar2 = (longlong *)(*(longlong *)(param_1 + 0x288) + (longlong)iVar5 * 0x18);
        if (*plVar2 == lVar10) {
          plVar3 = plVar2 + 1;
          if (plVar3 != (longlong *)0x0 && plVar2 != (longlong *)0x0) {
            lVar10 = *param_3;
            lVar6 = *plVar3;
            if (lVar6 == lVar10) goto LAB_14793ccaf;
            lVar7 = (longlong)*(int *)(param_1 + 0x280);
            if (lVar7 == 0) goto LAB_14793cdbe;
            lVar8 = 0;
            lVar9 = 0;
            goto LAB_14793cdab;
          }
          break;
        }
        iVar5 = (int)plVar2[2];
      } while (iVar5 != -1);
    }
  }
  goto LAB_14793cbe6;
  while( true ) {
    lVar9 = lVar9 + -0x18;
    lVar8 = lVar8 + 0x18;
    if (-lVar9 == lVar7 * 0x18) break;
LAB_14793cdab:
    if (*(longlong *)(*(longlong *)(param_1 + 0x278) + lVar8) == lVar6) {
      lVar9 = *(longlong *)(param_1 + 0x278) - lVar9;
      if (lVar9 != 0) {
        FUN_14062f124(lVar9 + 8,param_2,CONCAT71((int7)((ulonglong)(lVar7 * -0x18) >> 8),1));
        lVar10 = *param_3;
        lVar6 = *plVar3;
      }
      break;
    }
  }
LAB_14793cdbe:
  if (lVar6 == lVar10) goto LAB_14793ccaf;
LAB_14793cbe6:
  plVar2 = *(longlong **)(param_1 + 0x278);
  iVar5 = *(int *)(param_1 + 0x280);
  lVar10 = (longlong)iVar5;
  if (lVar10 != 0) {
    lVar6 = lVar10 * 0x18;
    plVar3 = plVar2;
    do {
      if (*plVar3 == *param_3) {
        if (plVar3 != (longlong *)0x0) goto LAB_14793cc6a;
        break;
      }
      plVar3 = plVar3 + 3;
      lVar6 = lVar6 + -0x18;
    } while (lVar6 != 0);
  }
  *(int *)(param_1 + 0x280) = iVar5 + 1;
  if (*(int *)(param_1 + 0x284) == iVar5) {
    FUN_14794ca0c((undefined8 *)(param_1 + 0x278),iVar5);
    plVar2 = *(longlong **)(param_1 + 0x278);
  }
  plVar2[lVar10 * 3] = 0;
  (plVar2 + lVar10 * 3)[1] = 0;
  plVar2[lVar10 * 3 + 2] = 0;
  plVar3 = (longlong *)
           (*(longlong *)(param_1 + 0x278) + (longlong)(*(int *)(param_1 + 0x280) + -1) * 0x18);
  *plVar3 = *param_3;
LAB_14793cc6a:
  iVar5 = (int)plVar3[2];
  *(uint *)(plVar3 + 2) = iVar5 + 1U;
  if (*(uint *)((longlong)plVar3 + 0x14) < iVar5 + 1U) {
    FUN_1446f84a2(plVar3 + 1,iVar5);
  }
  *(longlong *)(plVar3[1] + (longlong)iVar5 * 8) = *param_2;
  local_50 = param_2;
  local_48 = param_3;
  FUN_140906722((longlong *)(param_1 + 0x288),local_3c,&local_50,0);
LAB_14793ccaf:
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14793ce04 FUN_14793ce04 body=595 status=ok
// SIG undefined FUN_14793ce04(void)

void FUN_14793ce04(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 auStack_88 [40];
  undefined1 local_60 [24];
  longlong local_48;
  int local_40;
  uint local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1408174de(param_1 + 0x50,param_1,0);
  FUN_140818698(DAT_14cacd528,param_1);
  FUN_14793d058(&local_48,0x10,1,0);
  uVar7 = (ulonglong)local_38;
  if ((-1 < (int)local_38) && ((int)local_38 < local_40)) {
    do {
      plVar2 = *(longlong **)(local_48 + (uVar7 & 0xffffffff) * 8);
      lVar4 = (**(code **)(*plVar2 + 0x3f8))(plVar2);
      if (lVar4 == param_1) {
        uVar6 = (**(code **)(*plVar2 + 0x310))(plVar2);
        FUN_1408174de(uVar6,param_1,0);
        FUN_14793c9ea(param_1,0);
        FUN_140a2de0c(param_1,plVar2);
        FUN_140f76428(param_1,plVar2,0);
      }
      uVar7 = (longlong)(int)local_38;
      do {
        uVar8 = uVar7;
        uVar7 = uVar8 + 1;
        local_38 = (uint)uVar7;
        if ((longlong)local_40 <= (longlong)uVar7) break;
      } while (*(longlong *)(local_48 + uVar7 * 8) == 0);
    } while ((-2 < (longlong)uVar8) && ((int)local_38 < local_40));
  }
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  lVar4 = FUN_14498be06(param_1 + 0x28);
  if (lVar4 != 0) {
    (**(code **)(*(longlong *)(lVar4 + 0x28) + 0x40))(lVar4 + 0x28,param_1);
  }
  FUN_1463ab166(&local_48,0x10,1,0);
  uVar7 = (ulonglong)local_38;
  if ((-1 < (int)local_38) && ((int)local_38 < local_40)) {
    do {
      plVar2 = *(longlong **)(local_48 + (uVar7 & 0xffffffff) * 8);
      plVar5 = plVar2;
      if (plVar2 != (longlong *)0x0) {
        do {
          if ((*(uint *)(plVar5 + 1) & 0x30) != 0) goto LAB_14793cf9a;
          plVar1 = plVar5 + 4;
          plVar5 = (longlong *)*plVar1;
        } while ((longlong *)*plVar1 != (longlong *)0x0);
        plVar5 = (longlong *)FUN_144a7954a(plVar2);
        if ((plVar5 != (longlong *)0x0) &&
           (lVar4 = (**(code **)(*plVar5 + 0x3f8))(plVar5), lVar4 == param_1)) {
          uVar3 = (**(code **)(*plVar2 + 0xc00))(plVar2);
          uVar6 = FUN_144a7954a(plVar2);
          FUN_14793c9ea(param_1,uVar3);
          FUN_140a2de0c(param_1,uVar6);
          FUN_140f76428(param_1,uVar6,uVar3);
          FUN_140719760(local_60,plVar2,0);
          FUN_14071963e(local_60);
        }
      }
LAB_14793cf9a:
      uVar7 = (longlong)(int)local_38;
      do {
        uVar8 = uVar7;
        uVar7 = uVar8 + 1;
        local_38 = (uint)uVar7;
        if ((longlong)local_40 <= (longlong)uVar7) break;
      } while (*(longlong *)(local_48 + uVar7 * 8) == 0);
    } while ((-2 < (longlong)uVar8) && ((int)local_38 < local_40));
  }
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14793d058 FUN_14793d058 body=126 status=ok
// SIG undefined FUN_14793d058(void)

longlong * FUN_14793d058(longlong *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  uVar1 = FUN_14482ca40();
  uVar2 = FUN_144a85a6c();
  FUN_14123d74c(uVar2,param_1,param_3,param_2,uVar1 | param_4 | 0x90000000);
  lVar3 = (longlong)(int)param_1[2];
  do {
    lVar3 = lVar3 + 1;
    *(int *)(param_1 + 2) = (int)lVar3;
    if ((int)param_1[1] <= lVar3) {
      return param_1;
    }
  } while (*(longlong *)(*param_1 + lVar3 * 8) == 0);
  return param_1;
}



// FUNCTION 14793d0d6 FUN_14793d0d6 body=199 status=ok
// SIG undefined FUN_14793d0d6(void)

void FUN_14793d0d6(longlong *param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0) {
    local_30 = *(longlong *)(param_2 + 0x10);
    if ((local_30 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    (**(code **)(*param_1 + 0x38))(param_1,&local_30);
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(param_2);
    }
    iVar1 = (int)param_1[0x88];
    *(uint *)(param_1 + 0x88) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0x444) < iVar1 + 1U) {
      FUN_140730f78(param_1 + 0x87,iVar1);
    }
    *(longlong *)(param_1[0x87] + (longlong)iVar1 * 8) = param_2;
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(param_2);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14793d19e FUN_14793d19e body=281 status=ok
// SIG undefined FUN_14793d19e(void)

void FUN_14793d19e(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  iVar3 = *(int *)(param_1 + 0x440);
  if (0 < iVar3) {
    lVar6 = 1;
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x438) + -8 + lVar6 * 8);
      if (lVar1 != 0) {
        lVar5 = *param_2;
        if ((lVar5 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar5);
LAB_14793d1f1:
          lVar4 = FUN_144ae113c();
          if (((lVar4 == 0) || (*(int *)(lVar5 + 0x38) < *(int *)(lVar4 + 0x38))) ||
             (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
              lVar4 + 0x30)) goto LAB_14793d213;
        }
        else {
          if (lVar5 != 0) goto LAB_14793d1f1;
LAB_14793d213:
          lVar5 = 0;
        }
        lVar1 = *(longlong *)(lVar1 + 0x10);
        if (*(int *)(lVar1 + 0x38) < *(int *)(lVar5 + 0x38)) {
          iVar3 = *(int *)(param_1 + 0x440);
        }
        else {
          iVar3 = *(int *)(param_1 + 0x440);
          if (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
              lVar5 + 0x30) {
            if (iVar3 != (int)lVar6) {
              memmove((void *)(*(longlong *)(param_1 + 0x438) + lVar6 * 8 + -8),
                      (void *)(*(longlong *)(param_1 + 0x438) + lVar6 * 8),
                      (longlong)(iVar3 - (int)lVar6) << 3);
              iVar3 = *(int *)(param_1 + 0x440);
            }
            *(int *)(param_1 + 0x440) = iVar3 + -1;
            FUN_1474be4b6((longlong *)(param_1 + 0x438));
            return;
          }
        }
      }
      bVar2 = lVar6 < iVar3;
      lVar6 = lVar6 + 1;
    } while (bVar2);
  }
  return;
}



// FUNCTION 14793d2b8 FUN_14793d2b8 body=56 status=ok
// SIG undefined FUN_14793d2b8(void)

void FUN_14793d2b8(longlong param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x588));
  FUN_14794cc02(param_1 + 0x538);
                    /* WARNING: Could not recover jumptable at 0x00014793d2e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x588));
  return;
}



// FUNCTION 14793d2f0 FUN_14793d2f0 body=102 status=ok
// SIG undefined FUN_14793d2f0(void)

void FUN_14793d2f0(longlong *param_1,longlong param_2)

{
  undefined1 *puVar1;
  
  FUN_140077068();
  FUN_140077068(param_1,param_2 + 0x10);
  puVar1 = *(undefined1 **)param_1[1];
  if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x170))(param_1,(undefined1 *)(param_2 + 0x70),1);
  }
  else {
    *(undefined1 *)(param_2 + 0x70) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  FUN_14794ce56(param_1,param_2 + 0x20);
  return;
}



// FUNCTION 14793d356 FUN_14793d356 body=488 status=ok
// SIG undefined FUN_14793d356(void)

void FUN_14793d356(undefined8 *param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  uint uVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((DAT_14c7612f8 == 1) && (DAT_14c7612f4 <= param_3)) {
    if ((DAT_14cacd5c0 == (longlong *)0x0 || DAT_14cacd5c8 == 0) ||
       (cVar4 = (**(code **)(*DAT_14cacd5c0 + 0x30))(), cVar4 == '\0')) {
      if ((longlong)*(int *)(param_2 + 0x508) != 0) {
        lVar9 = 0;
        iVar5 = 0;
        do {
          bVar2 = *(byte *)(*(longlong *)(param_2 + 0x500) + 8 + lVar9);
          if (DAT_14c7612e0 < 0) {
            if (((bVar2 & 1) != 0) &&
               (*(int *)(*(longlong *)(param_2 + 0x500) + 0xc + lVar9) <= param_3))
            goto LAB_14793d45b;
          }
          else if ((DAT_14c7612e0 <= param_3) && ((bVar2 & 1) != 0)) goto LAB_14793d45b;
          iVar5 = iVar5 + 1;
          lVar9 = lVar9 + 0x10;
        } while ((longlong)*(int *)(param_2 + 0x508) * 0x10 != lVar9);
      }
    }
    else {
      local_30 = *(undefined8 *)(param_2 + 0x500);
      local_28 = *(undefined4 *)(param_2 + 0x508);
      plVar8 = DAT_14cacd5c0;
      if (DAT_14cacd5c8 == 0) {
        plVar8 = (longlong *)0x0;
      }
      iVar5 = (**(code **)(*plVar8 + 0x58))(plVar8,param_2,&local_30,param_3);
LAB_14793d45b:
      if (iVar5 != -1) {
        lVar9 = *(longlong *)(*(longlong *)(param_2 + 0x500) + (longlong)iVar5 * 0x10);
        if (*(int *)(param_1 + 0xd) != *(int *)((longlong)param_1 + 0x94)) {
          uVar3 = (uint)((ulonglong)lVar9 >> 0x10);
          uVar7 = (uint)lVar9 & 0xffff;
          puVar6 = param_1 + 0x13;
          if ((undefined8 *)param_1[0x14] != (undefined8 *)0x0) {
            puVar6 = (undefined8 *)param_1[0x14];
          }
          iVar5 = *(int *)((longlong)puVar6 +
                          (ulonglong)
                          (*(int *)(param_1 + 0x15) - 1U &
                          (int)((ulonglong)lVar9 >> 0x20) + ((uint)lVar9 << 0x10 | uVar7) +
                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar7 >> 4)) * 4);
          if (iVar5 != -1) {
            do {
              lVar1 = param_1[0xc] + (longlong)iVar5 * 0x88;
              if (*(longlong *)(param_1[0xc] + (longlong)iVar5 * 0x88) == lVar9) {
                if (lVar1 + 8 != 0 && lVar1 != 0) {
                  FUN_14793d540(lVar1 + 8,*param_1);
                }
                break;
              }
              iVar5 = *(int *)(lVar1 + 0x80);
            } while (iVar5 != -1);
          }
        }
        *(undefined2 *)(param_1 + 0x16) = 0x101;
        *(longlong *)((longlong)param_1 + 0xb4) = lVar9;
        *(undefined8 *)((longlong)param_1 + 0xbc) = 0;
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14793d540 FUN_14793d540 body=481 status=ok
// SIG undefined FUN_14793d540(void)

void FUN_14793d540(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  int iVar8;
  void *_Dst;
  uint uVar9;
  int iVar10;
  undefined1 auStack_c8 [40];
  undefined8 local_a0;
  longlong local_98;
  longlong *local_90;
  undefined4 local_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar7 = local_78;
  if ((param_2 != 0) && (*(int *)(param_2 + 0x40) != 0)) {
    bVar3 = *(byte *)(param_2 + 0x28);
    iVar4 = *(int *)(param_2 + 0x24);
    lVar6 = *(longlong *)(param_2 + 0x38);
    uVar9 = (uint)*(byte *)(param_2 + 0x29);
    plVar1 = param_1 + 4;
    plVar2 = param_1 + 6;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    uStack_50 = 0;
    uStack_60 = plVar2;
    if ((int)param_1[9] == 0) {
      iVar10 = 0;
    }
    else {
      local_a0 = (ulonglong)*(byte *)(param_2 + 0x29);
      FUN_1449c0562(&local_68);
      uVar9 = (uint)local_a0;
      iVar10 = (int)param_1[9];
    }
    uStack_70 = CONCAT44(uStack_4c,uStack_50);
    local_78 = local_58;
    uVar7 = local_78;
    local_88 = (undefined4)local_68;
    uStack_84 = local_68._4_4_;
    uStack_80 = (undefined4)uStack_60;
    uStack_7c = uStack_60._4_4_;
    local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    local_90 = plVar1;
    if ((local_78._4_4_ != iVar10) || (uStack_60 != plVar2)) {
      local_a0 = CONCAT44(local_a0._4_4_,(bVar3 + uVar9 + 2) * iVar4) & 0xffffffff000000ff;
      iVar8 = local_78._4_4_;
      local_98 = lVar6;
      local_78 = uVar7;
      do {
        iVar5 = *(int *)(*local_90 + 4 + (longlong)iVar8 * 0x10);
        _Dst = (void *)((ulonglong)
                        (uint)(*(int *)(*local_90 + (longlong)iVar8 * 0x10) * (int)local_a0) +
                       local_98);
        memcpy(_Dst,(void *)((longlong)
                             (int)(iVar5 * (uint)*(byte *)(param_1 + 0xe) <<
                                  (*(byte *)(param_2 + 0x28) & 0x1f)) + *param_1),
               (ulonglong)((uint)*(byte *)(param_1 + 0xe) << (*(byte *)(param_2 + 0x28) & 0x1f)));
        memcpy((void *)((longlong)_Dst + (ulonglong)(iVar4 << (bVar3 & 0x1f) & 0xff)),
               (void *)((longlong)(int)(iVar5 * (uint)*(byte *)(param_1 + 0xe)) + param_1[2]),
               (ulonglong)*(byte *)(param_1 + 0xe));
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~uStack_84);
        FUN_1449c0562(&local_88);
        iVar8 = local_78._4_4_;
        uVar7 = local_78;
      } while (local_90 != plVar1 ||
               ((longlong *)CONCAT44(uStack_7c,uStack_80) != plVar2 || local_78._4_4_ != iVar10));
    }
  }
  local_78 = uVar7;
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14793d722 FUN_14793d722 body=268 status=ok
// SIG undefined FUN_14793d722(void)

longlong * FUN_14793d722(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 auStack_68 [40];
  longlong local_40;
  int local_38;
  uint local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_1463ab166(&local_40,0x10,1,0);
  uVar3 = (ulonglong)local_30;
  if ((-1 < (int)local_30) && ((int)local_30 < local_38)) {
    do {
      lVar2 = FUN_144a7954a(*(undefined8 *)(local_40 + (uVar3 & 0xffffffff) * 8));
      if ((lVar2 == param_2) &&
         (lVar2 = *(longlong *)(local_40 + (longlong)(int)local_30 * 8),
         (*(byte *)(lVar2 + 0x9c) & 2) != 0)) {
        iVar1 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
          FUN_1417b8400(param_1,iVar1);
        }
        *(longlong *)(*param_1 + (longlong)iVar1 * 8) = lVar2;
      }
      uVar3 = (longlong)(int)local_30;
      do {
        uVar4 = uVar3;
        uVar3 = uVar4 + 1;
        local_30 = (uint)uVar3;
        if ((longlong)local_38 <= (longlong)uVar3) break;
      } while (*(longlong *)(local_40 + uVar3 * 8) == 0);
    } while ((-2 < (longlong)uVar4) && ((int)local_30 < local_38));
  }
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14793d830 FUN_14793d830 body=279 status=ok
// SIG undefined FUN_14793d830(void)

void FUN_14793d830(longlong *param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;
  uint uVar2;
  bool bVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  uint uVar7;
  bool bVar8;
  
  if (param_4 == 0) {
    param_4 = *(longlong *)(*param_1 + 0x38);
  }
  FUN_147cceb7c(param_3);
  FUN_147ccf0d4(param_3,param_4,*(undefined4 *)(*param_1 + 0x40));
  lVar4 = 0;
  bVar8 = true;
  do {
    lVar4 = *(longlong *)(param_2 + lVar4 * 8);
    if ((lVar4 != 0) && ((int)param_1[0xd] != *(int *)((longlong)param_1 + 0x94))) {
      uVar2 = (uint)((ulonglong)lVar4 >> 0x10);
      uVar7 = (uint)lVar4 & 0xffff;
      plVar6 = (longlong *)param_1[0x14];
      if ((longlong *)param_1[0x14] == (longlong *)0x0) {
        plVar6 = param_1 + 0x13;
      }
      iVar5 = *(int *)((longlong)plVar6 +
                      (ulonglong)
                      ((int)param_1[0x15] - 1U &
                      (int)((ulonglong)lVar4 >> 0x20) + ((uint)lVar4 << 0x10 | uVar7) +
                      (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar7 >> 4)) * 4);
      if (iVar5 != -1) {
        do {
          lVar1 = param_1[0xc] + (longlong)iVar5 * 0x88;
          if (*(longlong *)(param_1[0xc] + (longlong)iVar5 * 0x88) == lVar4) {
            if (lVar1 + 8 != 0 && lVar1 != 0) {
              FUN_14793de92(lVar1 + 8,param_3);
            }
            break;
          }
          iVar5 = *(int *)(lVar1 + 0x80);
        } while (iVar5 != -1);
      }
    }
    lVar4 = 1;
    bVar3 = !bVar8;
    bVar8 = false;
    if (bVar3) {
      return;
    }
  } while( true );
}



// FUNCTION 14793d948 FUN_14793d948 body=79 status=ok
// SIG undefined FUN_14793d948(void)

void FUN_14793d948(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[1];
  if (0 < (longlong)(int)lVar1) {
    lVar2 = 0;
    do {
      if ((*(byte *)(*(longlong *)(*param_1 + lVar2 * 8) + 0x9c) & 1) != 0) {
        FUN_147a122b4();
      }
      lVar2 = lVar2 + 1;
    } while ((int)lVar1 != lVar2);
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14793d998 FUN_14793d998 body=315 status=ok
// SIG undefined FUN_14793d998(void)

void FUN_14793d998(longlong param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  
  lVar7 = param_1 + 0xb4;
  lVar9 = 0;
  uVar8 = 0;
  bVar4 = true;
  do {
    bVar5 = bVar4;
    uVar2 = *(ulonglong *)(lVar7 + lVar9 * 8);
    uVar3 = (uint)(uVar2 >> 0x10);
    uVar8 = (ulonglong)
            ((int)(uVar2 >> 0x20) + (int)(uVar2 & 0xffff) +
             (int)(uVar8 >> 2) + (uint)uVar8 * 0x40 + (int)uVar2 * 0x10000 +
             (uVar3 << 0x13 | uVar3 & 0xffff) + (int)((uVar2 & 0xffff) >> 4) + 0x9e3779b9 ^
            (uint)uVar8);
    lVar9 = 1;
    bVar4 = false;
  } while (bVar5);
  plVar1 = (longlong *)(param_1 + 0x10);
  iVar6 = FUN_14794d7fe(plVar1,uVar8);
  if (((iVar6 != -1) && (*(char *)(param_1 + 0xb0) == '\x01')) &&
     (*(char *)(param_1 + 0xb1) == '\0')) {
    lVar9 = 0;
    uVar8 = 0;
    bVar4 = true;
    do {
      bVar5 = bVar4;
      uVar2 = *(ulonglong *)(lVar7 + lVar9 * 8);
      uVar3 = (uint)(uVar2 >> 0x10);
      uVar8 = (ulonglong)
              ((int)(uVar2 >> 0x20) + (int)(uVar2 & 0xffff) +
               (int)(uVar8 >> 2) + (uint)uVar8 * 0x40 + (int)uVar2 * 0x10000 +
               (uVar3 << 0x13 | uVar3 & 0xffff) + (int)((uVar2 & 0xffff) >> 4) + 0x9e3779b9 ^
              (uint)uVar8);
      lVar9 = 1;
      bVar4 = false;
    } while (bVar5);
    iVar6 = FUN_14794d7fe(plVar1,uVar8,lVar7);
    if (iVar6 == -1) {
      lVar7 = 0;
    }
    else {
      lVar7 = (longlong)iVar6 * 0x20 + *plVar1;
    }
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(lVar7 + 0x10);
  }
  return;
}



// FUNCTION 14793dad4 FUN_14793dad4 body=156 status=ok
// SIG undefined FUN_14793dad4(void)

undefined8 FUN_14793dad4(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  
  if (*(int *)(param_1 + 0x68) != *(int *)(param_1 + 0x94)) {
    lVar1 = *param_2;
    uVar2 = (uint)((ulonglong)lVar1 >> 0x10);
    uVar5 = (uint)lVar1 & 0xffff;
    lVar3 = param_1 + 0x98;
    if (*(longlong *)(param_1 + 0xa0) != 0) {
      lVar3 = *(longlong *)(param_1 + 0xa0);
    }
    iVar6 = *(int *)(lVar3 + (ulonglong)
                             (*(int *)(param_1 + 0xa8) - 1U &
                             (int)((ulonglong)lVar1 >> 0x20) + ((uint)lVar1 << 0x10 | uVar5) +
                             (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar5 >> 4)) * 4);
    if (iVar6 != -1) {
      do {
        bVar7 = *(longlong *)(*(longlong *)(param_1 + 0x60) + (longlong)iVar6 * 0x88) == lVar1;
        uVar4 = CONCAT71((int7)(int3)((uint)iVar6 >> 8),bVar7);
        if (bVar7) {
          return uVar4;
        }
        iVar6 = *(int *)((longlong)iVar6 * 0x88 + *(longlong *)(param_1 + 0x60) + 0x80);
      } while (iVar6 != -1);
      return uVar4;
    }
  }
  return 0;
}



// FUNCTION 14793db70 FUN_14793db70 body=252 status=ok
// SIG undefined FUN_14793db70(void)

bool FUN_14793db70(longlong param_1,longlong param_2,undefined8 param_3)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong *puVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined1 auStack_58 [32];
  ulonglong local_38 [3];
  
  local_38[2] = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar8 = 0;
  FUN_1433f4f2c(local_38,0,param_3,&DAT_149eda618);
  uVar4 = 0;
  bVar1 = true;
  do {
    bVar2 = bVar1;
    uVar5 = *(ulonglong *)(param_2 + lVar8 * 8);
    if (uVar5 != 0) {
      uVar7 = (ulonglong)uVar4;
      uVar4 = uVar4 + 1;
      local_38[uVar7] = uVar5;
    }
    lVar8 = 1;
    uVar5 = 0;
    bVar1 = false;
  } while (bVar2);
  puVar6 = local_38;
  bVar1 = true;
  do {
    bVar2 = bVar1;
    uVar7 = *puVar6;
    uVar4 = (uint)(uVar7 >> 0x10);
    uVar5 = (ulonglong)
            ((int)(uVar7 >> 0x20) + (int)(uVar7 & 0xffff) +
             (int)(uVar5 >> 2) + (uint)uVar5 * 0x40 + (int)uVar7 * 0x10000 +
             (uVar4 << 0x13 | uVar4 & 0xffff) + (int)((uVar7 & 0xffff) >> 4) + 0x9e3779b9 ^
            (uint)uVar5);
    puVar6 = local_38 + 1;
    bVar1 = false;
  } while (bVar2);
  iVar3 = FUN_14794d7fe(param_1 + 0x10,uVar5,local_38);
  if ((local_38[2] ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return iVar3 != -1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14793dc6e FUN_14793dc6e body=329 status=ok
// SIG undefined FUN_14793dc6e(void)

void FUN_14793dc6e(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
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
  iVar4 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar4);
  }
  *(undefined4 *)(param_2 + 0x48) = 0;
  if (*(int *)(param_2 + 0x4c) != iVar4) {
    FUN_1407d00f0(param_2);
  }
  local_40 = param_1 + 2;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_48);
  }
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_50 = local_30;
  local_4c = local_2c;
  local_68 = local_48;
  local_60 = local_40;
  local_70 = param_1;
  if (iStack_34 < (int)local_40[3]) {
    do {
      lVar2 = (longlong)iStack_54;
      lVar1 = *local_70;
      iVar4 = *(int *)(param_2 + 0x48);
      *(uint *)(param_2 + 0x48) = iVar4 + 1U;
      if (*(uint *)(param_2 + 0x4c) < iVar4 + 1U) {
        FUN_146276acc(param_2,iVar4);
      }
      lVar3 = *(longlong *)(param_2 + 0x40);
      if (*(longlong *)(param_2 + 0x40) == 0) {
        lVar3 = param_2;
      }
      *(undefined8 *)(lVar3 + (longlong)iVar4 * 8) = *(undefined8 *)(lVar2 * 0x88 + lVar1);
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14793ddba FUN_14793ddba body=132 status=ok
// SIG undefined FUN_14793ddba(void)

longlong * FUN_14793ddba(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (param_1[2] != 0) {
      FUN_1400020a8();
    }
    param_1[2] = param_2[2];
    param_2[2] = 0;
    *(int *)(param_1 + 3) = (int)param_2[3];
    *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
    param_2[3] = 0;
  }
  FUN_14794342e(param_1 + 4,param_2 + 4);
  *(short *)(param_1 + 0xe) = (short)param_2[0xe];
  return param_1;
}



// FUNCTION 14793de3e FUN_14793de3e body=83 status=ok
// SIG undefined FUN_14793de3e(void)

void FUN_14793de3e(longlong *param_1)

{
  *(undefined4 *)(param_1 + 0xd) = 0;
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  FUN_140201ac2(param_1 + 4);
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14793de92 FUN_14793de92 body=507 status=ok
// SIG undefined FUN_14793de92(void)

void FUN_14793de92(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  void *_Dst;
  int iVar8;
  uint uVar9;
  int iVar10;
  undefined1 auStack_c8 [32];
  void *local_a8;
  uint local_9c;
  ulonglong local_98;
  longlong *local_90;
  undefined4 local_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar7 = local_78;
  if (param_2 != 0) {
    bVar3 = *(byte *)(param_2 + 0x28);
    iVar8 = *(int *)(param_2 + 0x24);
    uVar9 = iVar8 << (bVar3 & 0x1f);
    lVar6 = *(longlong *)(param_2 + 0x38);
    bVar4 = *(byte *)(param_2 + 0x29);
    plVar1 = param_1 + 4;
    plVar2 = param_1 + 6;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    uStack_50 = 0;
    uStack_60 = plVar2;
    if ((int)param_1[9] == 0) {
      iVar10 = 0;
    }
    else {
      local_a8 = (void *)CONCAT44(local_a8._4_4_,iVar8);
      FUN_1449c0562(&local_68);
      iVar10 = (int)param_1[9];
      iVar8 = (int)local_a8;
    }
    uStack_70 = CONCAT44(uStack_4c,uStack_50);
    local_78 = local_58;
    uVar7 = local_78;
    local_88 = (undefined4)local_68;
    uStack_84 = local_68._4_4_;
    uStack_80 = (undefined4)uStack_60;
    uStack_7c = uStack_60._4_4_;
    local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    local_90 = plVar1;
    if ((local_78._4_4_ != iVar10) || (uStack_60 != plVar2)) {
      local_9c = ((uint)bVar3 + (uint)bVar4 + 2) * iVar8 & 0xff;
      local_98 = (ulonglong)(uVar9 & 0xff);
      iVar8 = local_78._4_4_;
      local_78 = uVar7;
      do {
        iVar5 = *(int *)(*local_90 + 4 + (longlong)iVar8 * 0x10);
        _Dst = (void *)((ulonglong)(*(int *)(*local_90 + (longlong)iVar8 * 0x10) * local_9c) + lVar6
                       );
        local_a8 = (void *)((longlong)_Dst + local_98);
        bVar3 = *(byte *)(param_2 + 0x29);
        memcpy(_Dst,(void *)((longlong)
                             (int)(iVar5 * (uint)*(byte *)(param_1 + 0xe) <<
                                  (*(byte *)(param_2 + 0x28) & 0x1f)) + *param_1),
               (ulonglong)((uint)*(byte *)(param_1 + 0xe) << (*(byte *)(param_2 + 0x28) & 0x1f)));
        memcpy(local_a8,(void *)((longlong)
                                 (int)(iVar5 * (uint)*(byte *)(param_1 + 0xe) << (bVar3 & 0x1f)) +
                                param_1[2]),
               (ulonglong)((uint)*(byte *)(param_1 + 0xe) << (bVar3 & 0x1f)));
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~uStack_84);
        FUN_1449c0562(&local_88);
        iVar8 = local_78._4_4_;
        uVar7 = local_78;
      } while (local_90 != plVar1 ||
               ((longlong *)CONCAT44(uStack_7c,uStack_80) != plVar2 || local_78._4_4_ != iVar10));
    }
  }
  local_78 = uVar7;
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14793e08e FUN_14793e08e body=194 status=ok
// SIG undefined FUN_14793e08e(void)

void FUN_14793e08e(ulonglong param_1)

{
  ulonglong *puVar1;
  int iVar2;
  longlong *plVar3;
  uint uVar4;
  undefined *puVar5;
  
  if (DAT_14cacd610 != DAT_14cacd63c) {
    uVar4 = ((uint)(param_1 >> 0x14) & 0xffff ^ (uint)(param_1 >> 4)) * -0x7a143595;
    uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
    puVar5 = &DAT_14cacd640;
    if (DAT_14cacd648 != (undefined *)0x0) {
      puVar5 = DAT_14cacd648;
    }
    iVar2 = *(int *)(puVar5 + (ulonglong)(DAT_14cacd650 - 1U & (uVar4 >> 0x10 ^ uVar4)) * 4);
    while (iVar2 != -1) {
      puVar1 = (ulonglong *)(DAT_14cacd608 + (longlong)iVar2 * 0x18);
      if (*puVar1 == param_1) {
        if (puVar1 + 1 == (ulonglong *)0x0 || puVar1 == (ulonglong *)0x0) {
          return;
        }
        plVar3 = (longlong *)puVar1[1];
        if (plVar3 != (longlong *)0x0) {
          (**(code **)(*plVar3 + 0x30))(plVar3,1);
        }
        FUN_14585e394(&DAT_14cacd608,param_1);
        return;
      }
      iVar2 = (int)puVar1[2];
    }
  }
  return;
}



// FUNCTION 14793e150 FUN_14793e150 body=290 status=ok
// SIG undefined FUN_14793e150(void)

longlong * FUN_14793e150(longlong *param_1,longlong *param_2)

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



// FUNCTION 14793e274 FUN_14793e274 body=118 status=ok
// SIG undefined FUN_14793e274(void)

ulonglong FUN_14793e274(int *param_1)

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



// FUNCTION 14793e2ec FUN_14793e2ec body=159 status=ok
// SIG undefined FUN_14793e2ec(void)

undefined4 * FUN_14793e2ec(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar3;
  param_1[2] = uVar4;
  param_1[3] = uVar5;
  *(undefined8 *)(param_1 + 4) = 0;
  iVar1 = param_2[6];
  _Src = *(void **)(param_2 + 4);
  param_1[6] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[7] = 0;
  }
  else {
    FUN_144a06ca8(param_1 + 4,iVar1,0);
    memcpy(*(void **)(param_1 + 4),_Src,(longlong)iVar1 << 2);
  }
  lVar2 = *(longlong *)(param_2 + 8);
  *(longlong *)(param_1 + 8) = lVar2;
  *(undefined8 *)(param_1 + 0xc) = 0;
  if (lVar2 != 0) {
    puVar7 = (undefined8 *)(param_2 + 0x10);
    if (*(undefined8 **)(param_2 + 0xc) != (undefined8 *)0x0) {
      puVar7 = *(undefined8 **)(param_2 + 0xc);
    }
    (**(code **)*puVar7)(puVar7,param_1 + 0xc);
  }
  uVar6 = *(undefined8 *)(param_2 + 0x1a);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x1a) = uVar6;
  return param_1;
}



// FUNCTION 14793e38c FUN_14793e38c body=63 status=ok
// SIG undefined FUN_14793e38c(void)

void FUN_14793e38c(void)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = 0;
  FUN_141616ae0();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14793e3d4 FUN_14793e3d4 body=32 status=ok
// SIG undefined FUN_14793e3d4(void)

undefined8 FUN_14793e3d4(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FSkinWeightProfileManagerTickFunction::Tick");
  return param_2;
}



// FUNCTION 14793e3f4 FUN_14793e3f4 body=38 status=ok
// SIG undefined FUN_14793e3f4(void)

undefined8 FUN_14793e3f4(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FSkinWeightProfileManager",1);
  return param_2;
}



// FUNCTION 14793e41a FUN_14793e41a body=491 status=ok
// SIG undefined FUN_14793e41a(void)

void FUN_14793e41a(longlong param_1,longlong *param_2)

{
  undefined2 *puVar1;
  ulonglong *puVar2;
  int iVar3;
  undefined1 auStack_a8 [46];
  undefined2 local_7a;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_4c;
  undefined4 local_44;
  longlong local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cbd8);
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cbe8);
  iVar3 = FUN_1448332aa(param_2,&DAT_149e3cbd8);
  if (iVar3 < 7) {
    if (0x183 < (int)param_2[8]) {
      puVar2 = (ulonglong *)param_2[1];
      puVar1 = (undefined2 *)*puVar2 + 1;
      if ((undefined2 *)puVar2[1] < puVar1) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
          (**(code **)(*param_2 + 0x170))(param_2,&local_7a,2);
        }
        else {
          thunk_FUN_1457251a8(param_2,&local_7a);
        }
      }
      else {
        local_7a = *(undefined2 *)*puVar2;
        *puVar2 = (ulonglong)puVar1;
      }
      local_58 = 0;
      local_50 = 0;
      local_78 = 0;
      uStack_70 = 0;
      local_4c = 0xffffffff00000080;
      local_44 = 0;
      local_38 = 0;
      local_30 = 0;
      FUN_14794ee4c(param_2,&local_78);
      local_30 = 0;
      if (local_38 != 0) {
        FUN_1400020a8();
      }
      FUN_147943db2(&local_78);
    }
  }
  else {
    iVar3 = FUN_1448332aa(param_2,&DAT_149e3cbe8);
    if (iVar3 < 10) {
      local_58 = 0;
      local_50 = 0;
      local_78 = 0;
      uStack_70 = 0;
      local_4c = 0xffffffff00000080;
      local_44 = 0;
      local_38 = 0;
      local_30 = 0;
      FUN_14794eb3c(param_2,&local_78);
      local_30 = 0;
      if (local_38 != 0) {
        FUN_1400020a8();
      }
      FUN_140731224(&local_78);
    }
  }
  iVar3 = FUN_1448332aa(param_2,&DAT_149e3cbd8);
  if (0xe < iVar3) {
    FUN_14794f462(param_2,param_1 + 0x20);
  }
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    FUN_1478e2d5a(param_1 + 0x20,param_1);
    FUN_14793e606(param_1 + 0x20,param_1 + 0x10);
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14793e606 FUN_14793e606 body=408 status=ok
// SIG undefined FUN_14793e606(void)

void FUN_14793e606(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  void *_Src;
  int iVar4;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined8 local_80;
  longlong *local_78;
  uint local_70;
  int iStack_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  longlong *local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_14794f76c(param_2,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34));
  local_58 = param_1 + 2;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  local_48 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_60);
  }
  local_70 = local_50;
  iStack_6c = iStack_4c;
  local_68 = local_48;
  local_64 = local_44;
  local_80 = local_60;
  local_78 = local_58;
  local_88 = param_1;
  if (iStack_4c < (int)local_58[3]) {
    do {
      iVar4 = iStack_6c;
      lVar3 = *local_88;
      iVar2 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
        FUN_14794eaa8(param_2,iVar2);
      }
      lVar3 = lVar3 + (longlong)iVar4 * 0x28;
      puVar1 = (undefined8 *)(*param_2 + (longlong)iVar2 * 0x18);
      *puVar1 = 0;
      iVar2 = *(int *)(lVar3 + 0x10);
      _Src = *(void **)(lVar3 + 8);
      *(int *)(puVar1 + 1) = iVar2;
      if ((longlong)iVar2 == 0) {
        *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
      }
      else {
        FUN_1409c2a84(puVar1,iVar2,0);
        memcpy((void *)*puVar1,_Src,(longlong)iVar2 << 4);
      }
      *(undefined1 *)((longlong)puVar1 + 0x12) = *(undefined1 *)(lVar3 + 0x1a);
      *(undefined2 *)(puVar1 + 2) = *(undefined2 *)(lVar3 + 0x18);
      local_70 = local_70 & ~local_80._4_4_;
      FUN_1449c0562(&local_80);
    } while (iStack_6c < (int)local_78[3]);
  }
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14793e7a0 FUN_14793e7a0 body=216 status=ok
// SIG undefined FUN_14793e7a0(void)

void FUN_14793e7a0(undefined8 param_1,longlong *param_2)

{
  ulonglong *puVar1;
  int iVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cbe8);
  (**(code **)(*param_2 + 0x160))(param_2,param_1);
  iVar2 = FUN_1448332aa(param_2,&DAT_149e3cbe8);
  if (iVar2 < 5) {
    puVar1 = (ulonglong *)param_2[1];
    if (puVar1[1] < *puVar1 + 2) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_38,2);
      }
      else {
        thunk_FUN_1457251a8(param_2,&local_38);
      }
    }
    else {
      *puVar1 = *puVar1 + 2;
    }
  }
  iVar2 = FUN_1448332aa(param_2,&DAT_149e3cbe8);
  if (iVar2 < 10) {
    local_38 = 0;
    uStack_30 = 0;
    FUN_1402ac1b3(param_2);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14793e89a FUN_14793e89a body=45 status=ok
// SIG undefined FUN_14793e89a(void)

longlong FUN_14793e89a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_140b35bde(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14793e8c8 FUN_14793e8c8 body=45 status=ok
// SIG undefined FUN_14793e8c8(void)

longlong FUN_14793e8c8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_140b35bde(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14793e8f6 FUN_14793e8f6 body=45 status=ok
// SIG undefined FUN_14793e8f6(void)

longlong FUN_14793e8f6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x38;
  FUN_140b35bde(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14793e924 FUN_14793e924 body=38 status=ok
// SIG undefined FUN_14793e924(void)

undefined8 FUN_14793e924(undefined8 param_1,int param_2)

{
  FUN_14009bfc4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14793e95c FUN_14793e95c body=45 status=ok
// SIG undefined FUN_14793e95c(void)

longlong FUN_14793e95c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_140e9f8d2(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14793e98a FUN_14793e98a body=45 status=ok
// SIG undefined FUN_14793e98a(void)

longlong FUN_14793e98a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_140e9f8d2(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14793e9b8 FUN_14793e9b8 body=45 status=ok
// SIG undefined FUN_14793e9b8(void)

longlong FUN_14793e9b8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x38;
  FUN_140e9f8d2(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14793e9e6 FUN_14793e9e6 body=45 status=ok
// SIG undefined FUN_14793e9e6(void)

longlong FUN_14793e9e6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_145c0199c(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14793ea1e FUN_14793ea1e body=45 status=ok
// SIG undefined FUN_14793ea1e(void)

longlong FUN_14793ea1e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_140e3a374(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14793ea52 FUN_14793ea52 body=45 status=ok
// SIG undefined FUN_14793ea52(void)

longlong FUN_14793ea52(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_140e3a374(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14793ea86 FUN_14793ea86 body=45 status=ok
// SIG undefined FUN_14793ea86(void)

longlong FUN_14793ea86(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x38;
  FUN_140e3a374(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14793eb08 FUN_14793eb08 body=19 status=ok
// SIG undefined FUN_14793eb08(void)

undefined1 FUN_14793eb08(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_14793ec7c(param_3);
  return 1;
}



// FUNCTION 14793eb2a FUN_14793eb2a body=54 status=ok
// SIG undefined FUN_14793eb2a(void)

undefined1 FUN_14793eb2a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14785ac90(param_2,param_3);
    param_3 = param_3 + 0x40;
    param_2 = param_2 + 0x40;
  }
  return 1;
}



// FUNCTION 14793eb88 FUN_14793eb88 body=117 status=ok
// SIG undefined FUN_14793eb88(void)

void FUN_14793eb88(longlong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  uVar1 = *param_2;
  uVar2 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar3 = (uint)uVar1 & 0xffff;
  FUN_144a78877(*(undefined4 *)(param_2 + 2),
                ((uint)uVar1 << 0x10 | uVar3) + (int)((ulonglong)uVar1 >> 0x20) +
                (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar3 >> 4));
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14793ec08 FUN_14793ec08 body=38 status=ok
// SIG undefined FUN_14793ec08(void)

void FUN_14793ec08(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    if (*(longlong *)(param_2 + 0x30) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x40) = 0;
  }
  return;
}



// FUNCTION 14793ec7c FUN_14793ec7c body=223 status=ok
// SIG undefined FUN_14793ec7c(void)

void FUN_14793ec7c(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  
  (**(code **)(*param_2 + 0x160))(param_2,param_1);
  (**(code **)(*param_2 + 0x160))(param_2,param_1 + 8);
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 0x10),4);
    }
    else {
      FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x10) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  (**(code **)(*param_2 + 0x128))(param_2,param_1 + 0x20);
  if ((*(byte *)(param_2 + 5) & 1) == 0) {
    return;
  }
  lVar2 = FUN_140007850(param_1 + 0x20);
  if (lVar2 != 0) {
    lVar3 = FUN_1446f4bba();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        == lVar3 + 0x30)) {
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(lVar2);
      }
      goto LAB_14793ed32;
    }
  }
  lVar2 = 0;
LAB_14793ed32:
  *(longlong *)(param_1 + 0x18) = lVar2;
  return;
}



// FUNCTION 14793ed5c FUN_14793ed5c body=61 status=ok
// SIG undefined FUN_14793ed5c(void)

void FUN_14793ed5c(longlong param_1,int param_2)

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



// FUNCTION 14793ed9a FUN_14793ed9a body=118 status=ok
// SIG undefined FUN_14793ed9a(void)

ulonglong FUN_14793ed9a(int *param_1)

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



// FUNCTION 14793ee96 FUN_14793ee96 body=59 status=ok
// SIG undefined FUN_14793ee96(void)

undefined8 FUN_14793ee96(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14793ef38 FUN_14793ef38 body=57 status=ok
// SIG undefined FUN_14793ef38(void)

undefined8 * FUN_14793ef38(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a7daaa0;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14793efe6 FUN_14793efe6 body=59 status=ok
// SIG undefined FUN_14793efe6(void)

undefined8 FUN_14793efe6(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14793f0b4 FUN_14793f0b4 body=54 status=ok
// SIG undefined FUN_14793f0b4(void)

undefined1 FUN_14793f0b4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14793f1cc(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 14793f112 FUN_14793f112 body=59 status=ok
// SIG undefined FUN_14793f112(void)

undefined8 FUN_14793f112(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14793f158 FUN_14793f158 body=37 status=ok
// SIG undefined FUN_14793f158(void)

void FUN_14793f158(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[2] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 2) = 0;
  }
  return;
}



// FUNCTION 14793f1cc FUN_14793f1cc body=89 status=ok
// SIG undefined FUN_14793f1cc(void)

undefined8 * FUN_14793f1cc(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1407f9b1e(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0xc);
      }
    }
  }
  return param_1;
}



// FUNCTION 14793f392 FUN_14793f392 body=39 status=ok
// SIG undefined FUN_14793f392(void)

undefined8 FUN_14793f392(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      puVar3 = (undefined8 *)(param_3 + lVar1);
      puVar4 = (undefined8 *)(param_2 + lVar1);
      for (lVar2 = 0xe; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      lVar1 = lVar1 + 0x70;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14793f3e2 FUN_14793f3e2 body=59 status=ok
// SIG undefined FUN_14793f3e2(void)

undefined8 FUN_14793f3e2(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14793f554 FUN_14793f554 body=68 status=ok
// SIG undefined FUN_14793f554(void)

undefined8 FUN_14793f554(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      memcpy((void *)(param_2 + lVar1),(void *)(param_3 + lVar1),0x90);
      lVar1 = lVar1 + 0x90;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14793f5c0 FUN_14793f5c0 body=59 status=ok
// SIG undefined FUN_14793f5c0(void)

undefined8 FUN_14793f5c0(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14793f6fe FUN_14793f6fe body=59 status=ok
// SIG undefined FUN_14793f6fe(void)

undefined8 FUN_14793f6fe(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14793f7e8 FUN_14793f7e8 body=82 status=ok
// SIG undefined FUN_14793f7e8(void)

undefined8 FUN_14793f7e8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14793f91c(param_2,param_3);
    *(undefined2 *)(param_2 + 0x10) = *(undefined2 *)(param_3 + 0x10);
    *(undefined1 *)(param_2 + 0x12) = *(undefined1 *)(param_3 + 0x12);
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
  }
  return 1;
}



// FUNCTION 14793f862 FUN_14793f862 body=59 status=ok
// SIG undefined FUN_14793f862(void)

undefined8 FUN_14793f862(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14793f8a8 FUN_14793f8a8 body=37 status=ok
// SIG undefined FUN_14793f8a8(void)

void FUN_14793f8a8(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[3] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 3) = 0;
  }
  return;
}



// FUNCTION 14793f91c FUN_14793f91c body=92 status=ok
// SIG undefined FUN_14793f91c(void)

undefined8 * FUN_14793f91c(undefined8 *param_1,undefined8 *param_2)

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
      FUN_14793f978(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x1c);
      }
    }
  }
  return param_1;
}



// FUNCTION 14793f978 FUN_14793f978 body=121 status=ok
// SIG undefined FUN_14793f978(void)

void FUN_14793f978(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x1c,4);
    iVar2 = (int)(uVar1 / 0x1c);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x1c,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14793fa7c FUN_14793fa7c body=59 status=ok
// SIG undefined FUN_14793fa7c(void)

undefined8 FUN_14793fa7c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14793fbae FUN_14793fbae body=59 status=ok
// SIG undefined FUN_14793fbae(void)

undefined8 FUN_14793fbae(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14793fcf8 FUN_14793fcf8 body=59 status=ok
// SIG undefined FUN_14793fcf8(void)

undefined8 FUN_14793fcf8(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14793fe50 FUN_14793fe50 body=70 status=ok
// SIG undefined FUN_14793fe50(void)

void FUN_14793fe50(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  FUN_14793fefd(param_2);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14793fefd FUN_14793fefd body=94 status=ok
// SIG undefined FUN_14793fefd(void)

void FUN_14793fefd(undefined8 *param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  
  uVar2 = *param_1;
  uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar5 = (uint)uVar2 & 0xffff;
  uVar1 = *(undefined1 *)(param_1 + 1);
  uVar4 = FUN_144a78877(*(undefined1 *)((longlong)param_1 + 9),
                        *(undefined1 *)((longlong)param_1 + 10));
  uVar4 = FUN_144a78877(uVar4,uVar1);
  FUN_144a78877(uVar4,((uint)uVar2 << 0x10 | uVar5) + (int)((ulonglong)uVar2 >> 0x20) +
                      (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar5 >> 4));
  return;
}



// FUNCTION 14793ffe0 FUN_14793ffe0 body=59 status=ok
// SIG undefined FUN_14793ffe0(void)

undefined8 FUN_14793ffe0(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479400ec FUN_1479400ec body=59 status=ok
// SIG undefined FUN_1479400ec(void)

undefined8 FUN_1479400ec(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479401fa FUN_1479401fa body=59 status=ok
// SIG undefined FUN_1479401fa(void)

undefined8 FUN_1479401fa(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479402f6 FUN_1479402f6 body=59 status=ok
// SIG undefined FUN_1479402f6(void)

undefined8 FUN_1479402f6(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479403e2 FUN_1479403e2 body=103 status=ok
// SIG undefined FUN_1479403e2(void)

undefined1 FUN_1479403e2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 8;
    bVar1 = DAT_14c950c29;
    do {
      lVar2 = *(longlong *)(param_3 + lVar3);
      if ((bVar1 & 1) != 0) {
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar2 = *(longlong *)(param_3 + lVar3);
          bVar1 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + lVar3) = lVar2;
      *(undefined8 *)(param_2 + 8 + lVar3) = *(undefined8 *)(param_3 + 8 + lVar3);
      lVar3 = lVar3 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147940472 FUN_147940472 body=59 status=ok
// SIG undefined FUN_147940472(void)

undefined8 FUN_147940472(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147940512 FUN_147940512 body=29 status=ok
// SIG undefined FUN_147940512(void)

undefined8 FUN_147940512(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147940584 FUN_147940584 body=59 status=ok
// SIG undefined FUN_147940584(void)

undefined8 FUN_147940584(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479405ca FUN_1479405ca body=48 status=ok
// SIG undefined FUN_1479405ca(void)

void FUN_1479405ca(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 6) == '\x01') {
    *param_2 = &PTR_FUN_14a7dc440;
    if (param_2[3] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 6) = 0;
  }
  return;
}



// FUNCTION 1479406b6 FUN_1479406b6 body=59 status=ok
// SIG undefined FUN_1479406b6(void)

undefined8 FUN_1479406b6(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479407d0 FUN_1479407d0 body=59 status=ok
// SIG undefined FUN_1479407d0(void)

undefined8 FUN_1479407d0(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147940930 FUN_147940930 body=59 status=ok
// SIG undefined FUN_147940930(void)

undefined8 FUN_147940930(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147940a68 FUN_147940a68 body=59 status=ok
// SIG undefined FUN_147940a68(void)

undefined8 FUN_147940a68(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147940b7a FUN_147940b7a body=59 status=ok
// SIG undefined FUN_147940b7a(void)

undefined8 FUN_147940b7a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147940cea FUN_147940cea body=59 status=ok
// SIG undefined FUN_147940cea(void)

undefined8 FUN_147940cea(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147940e00 FUN_147940e00 body=59 status=ok
// SIG undefined FUN_147940e00(void)

undefined8 FUN_147940e00(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147940f26 FUN_147940f26 body=54 status=ok
// SIG undefined FUN_147940f26(void)

undefined1 FUN_147940f26(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14123bd80(param_2,param_3);
    param_3 = param_3 + 0x48;
    param_2 = param_2 + 0x48;
  }
  return 1;
}



// FUNCTION 147940f84 FUN_147940f84 body=59 status=ok
// SIG undefined FUN_147940f84(void)

undefined8 FUN_147940f84(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479410ac FUN_1479410ac body=59 status=ok
// SIG undefined FUN_1479410ac(void)

undefined8 FUN_1479410ac(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479411c0 FUN_1479411c0 body=59 status=ok
// SIG undefined FUN_1479411c0(void)

undefined8 FUN_1479411c0(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147941262 FUN_147941262 body=78 status=ok
// SIG undefined FUN_147941262(void)

void FUN_147941262(undefined8 param_1,void *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  memset(param_2,0,0x90);
  puVar3 = &DAT_14c846480;
  puVar4 = (undefined8 *)((longlong)param_2 + 0x10);
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  *(undefined8 *)((longlong)param_2 + 0x80) = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  *(undefined8 *)((longlong)param_2 + 0x70) = DAT_14c8464e0;
  *(undefined8 *)((longlong)param_2 + 0x78) = uVar1;
  return;
}



// FUNCTION 1479412b0 FUN_1479412b0 body=55 status=ok
// SIG undefined FUN_1479412b0(void)

void FUN_1479412b0(undefined8 param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  *param_2 = 0;
  puVar3 = &DAT_14c846480;
  puVar4 = (undefined8 *)(param_2 + 4);
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  *(undefined8 *)(param_2 + 0x20) = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  *(undefined8 *)(param_2 + 0x1c) = DAT_14c8464e0;
  *(undefined8 *)(param_2 + 0x1e) = uVar1;
  return;
}



// FUNCTION 147941300 FUN_147941300 body=68 status=ok
// SIG undefined FUN_147941300(void)

undefined8 FUN_147941300(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      memcpy((void *)(param_2 + lVar1),(void *)(param_3 + lVar1),0x88);
      lVar1 = lVar1 + 0x90;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14794136c FUN_14794136c body=59 status=ok
// SIG undefined FUN_14794136c(void)

undefined8 FUN_14794136c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14794144e FUN_14794144e body=54 status=ok
// SIG undefined FUN_14794144e(void)

undefined1 FUN_14794144e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147941566(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 1479414ac FUN_1479414ac body=59 status=ok
// SIG undefined FUN_1479414ac(void)

undefined8 FUN_1479414ac(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479414f2 FUN_1479414f2 body=37 status=ok
// SIG undefined FUN_1479414f2(void)

void FUN_1479414f2(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[2] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 2) = 0;
  }
  return;
}



// FUNCTION 147941566 FUN_147941566 body=89 status=ok
// SIG undefined FUN_147941566(void)

undefined8 * FUN_147941566(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1479415c0(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x90);
      }
    }
  }
  return param_1;
}



// FUNCTION 1479415c0 FUN_1479415c0 body=115 status=ok
// SIG undefined FUN_1479415c0(void)

void FUN_1479415c0(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x90,0x10);
    iVar2 = (int)(uVar1 / 0x90);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x90,0x10);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 147941634 FUN_147941634 body=31 status=ok
// SIG undefined FUN_147941634(void)

void FUN_147941634(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_2 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 2;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}



// FUNCTION 147941654 FUN_147941654 body=31 status=ok
// SIG undefined FUN_147941654(void)

void FUN_147941654(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_2 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 2;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}



// FUNCTION 14794168c FUN_14794168c body=39 status=ok
// SIG undefined FUN_14794168c(void)

undefined8 FUN_14794168c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      puVar3 = (undefined8 *)(param_3 + lVar1);
      puVar4 = (undefined8 *)(param_2 + lVar1);
      for (lVar2 = 0xe; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      lVar1 = lVar1 + 0x70;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1479416dc FUN_1479416dc body=59 status=ok
// SIG undefined FUN_1479416dc(void)

undefined8 FUN_1479416dc(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14794178a FUN_14794178a body=47 status=ok
// SIG undefined FUN_14794178a(void)

void FUN_14794178a(undefined8 param_1,longlong *param_2)

{
  if (param_2[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1479417d0 FUN_1479417d0 body=67 status=ok
// SIG undefined FUN_1479417d0(void)

undefined1 FUN_1479417d0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144756208(param_2,param_3);
    FUN_144a67f5c(param_2 + 0x10,param_3 + 0x10);
    param_2 = param_2 + 0x20;
    param_3 = param_3 + 0x20;
  }
  return 1;
}



// FUNCTION 14794183c FUN_14794183c body=59 status=ok
// SIG undefined FUN_14794183c(void)

undefined8 FUN_14794183c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479418da FUN_1479418da body=51 status=ok
// SIG undefined FUN_1479418da(void)

void FUN_1479418da(longlong *param_1)

{
  if ((char)param_1[4] == '\x01') {
    if (param_1[2] != 0) {
      FUN_1400020a8();
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 4) = 0;
  }
  return;
}



// FUNCTION 147941972 FUN_147941972 body=59 status=ok
// SIG undefined FUN_147941972(void)

undefined8 FUN_147941972(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147941a40 FUN_147941a40 body=54 status=ok
// SIG undefined FUN_147941a40(void)

undefined1 FUN_147941a40(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147941b58(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 147941a9e FUN_147941a9e body=59 status=ok
// SIG undefined FUN_147941a9e(void)

undefined8 FUN_147941a9e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147941ae4 FUN_147941ae4 body=37 status=ok
// SIG undefined FUN_147941ae4(void)

void FUN_147941ae4(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[2] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 2) = 0;
  }
  return;
}



// FUNCTION 147941b58 FUN_147941b58 body=88 status=ok
// SIG undefined FUN_147941b58(void)

undefined8 * FUN_147941b58(undefined8 *param_1,undefined8 *param_2)

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
      FUN_147941bb0(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 147941bb0 FUN_147941bb0 body=98 status=ok
// SIG undefined FUN_147941bb0(void)

void FUN_147941bb0(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 3,4);
    iVar1 = (int)(uVar2 >> 3);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,8,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 147941c6c FUN_147941c6c body=54 status=ok
// SIG undefined FUN_147941c6c(void)

undefined1 FUN_147941c6c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147941d7e(param_2,param_3);
    param_3 = param_3 + 0x70;
    param_2 = param_2 + 0x70;
  }
  return 1;
}



// FUNCTION 147941cca FUN_147941cca body=59 status=ok
// SIG undefined FUN_147941cca(void)

undefined8 FUN_147941cca(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147941d10 FUN_147941d10 body=32 status=ok
// SIG undefined FUN_147941d10(void)

void FUN_147941d10(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x70) == '\x01') {
    FUN_140e9f932(param_2);
    *(undefined1 *)(param_2 + 0x70) = 0;
  }
  return;
}



// FUNCTION 147941d7e FUN_147941d7e body=108 status=ok
// SIG undefined FUN_147941d7e(void)

longlong FUN_147941d7e(longlong param_1,longlong param_2)

{
  FUN_1406fa324();
  FUN_14054c6c4(param_1 + 0x10,param_2 + 0x10);
  FUN_1406fa324(param_1 + 0x20,param_2 + 0x20);
  FUN_14054c6c4(param_1 + 0x30,param_2 + 0x30);
  FUN_147941dea(param_1 + 0x40,param_2 + 0x40);
  FUN_147941e48(param_1 + 0x50,param_2 + 0x50);
  FUN_147941ea6(param_1 + 0x60,param_2 + 0x60);
  return param_1;
}



// FUNCTION 147941dea FUN_147941dea body=93 status=ok
// SIG undefined FUN_147941dea(void)

undefined8 * FUN_147941dea(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140e9f9c3(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_147941f00(param_1,iVar1);
      FUN_147941f62(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147941e48 FUN_147941e48 body=93 status=ok
// SIG undefined FUN_147941e48(void)

undefined8 * FUN_147941e48(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140e9f9ee(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_147941fda(param_1,iVar1);
      FUN_14794203c(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147941ea6 FUN_147941ea6 body=89 status=ok
// SIG undefined FUN_147941ea6(void)

undefined8 * FUN_147941ea6(undefined8 *param_1,undefined8 *param_2)

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
      FUN_147942112(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0xc);
      }
    }
  }
  return param_1;
}



// FUNCTION 147941f00 FUN_147941f00 body=98 status=ok
// SIG undefined FUN_147941f00(void)

void FUN_147941f00(longlong param_1,int param_2,int param_3)

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



// FUNCTION 147941f62 FUN_147941f62 body=119 status=ok
// SIG undefined FUN_147941f62(void)

void FUN_147941f62(undefined8 *param_1,longlong param_2,int param_3)

{
  int iVar1;
  void *_Src;
  int *piVar2;
  
  if (param_3 != 0) {
    piVar2 = (int *)(param_2 + 8);
    do {
      *param_1 = 0;
      iVar1 = *piVar2;
      _Src = *(void **)(piVar2 + -2);
      *(int *)(param_1 + 1) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      }
      else {
        FUN_147941bb0(param_1,iVar1,0);
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
      param_1 = param_1 + 2;
      piVar2 = piVar2 + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 147941fda FUN_147941fda body=98 status=ok
// SIG undefined FUN_147941fda(void)

void FUN_147941fda(longlong param_1,int param_2,int param_3)

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



// FUNCTION 14794203c FUN_14794203c body=52 status=ok
// SIG undefined FUN_14794203c(void)

void FUN_14794203c(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_147942070(param_1,param_2);
    param_1 = param_1 + 0x20;
    param_2 = param_2 + 0x20;
  }
  return;
}



// FUNCTION 147942070 FUN_147942070 body=161 status=ok
// SIG undefined FUN_147942070(void)

undefined8 * FUN_147942070(undefined8 *param_1,undefined8 *param_2)

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
    FUN_144756262(param_1,iVar1,0);
    memcpy((void *)*param_1,pvVar2,(longlong)iVar1 * 0x60);
  }
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  pvVar2 = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1447c510a(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],pvVar2,(longlong)iVar1 << 2);
  }
  return param_1;
}



// FUNCTION 147942112 FUN_147942112 body=115 status=ok
// SIG undefined FUN_147942112(void)

void FUN_147942112(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0xc,4);
    iVar2 = (int)(uVar1 / 0xc);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0xc,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1479421ca FUN_1479421ca body=104 status=ok
// SIG undefined FUN_1479421ca(void)

undefined8 FUN_1479421ca(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  
  if (param_4 != 0) {
    lVar6 = 0;
    do {
      puVar1 = (undefined8 *)(param_3 + lVar6);
      lVar2 = param_2 + 0x18 + lVar6;
      *(undefined8 *)(lVar2 + -0x18) = *puVar1;
      uVar3 = *(undefined4 *)((longlong)puVar1 + 0xc);
      uVar4 = *(undefined4 *)(puVar1 + 2);
      uVar5 = *(undefined4 *)((longlong)puVar1 + 0x14);
      *(undefined4 *)(lVar2 + -0x10) = *(undefined4 *)(puVar1 + 1);
      *(undefined4 *)(lVar2 + -0xc) = uVar3;
      *(undefined4 *)(lVar2 + -8) = uVar4;
      *(undefined4 *)(lVar2 + -4) = uVar5;
      FUN_144a787a6(lVar2,puVar1 + 3);
      *(undefined8 *)(lVar2 + 0x10) = puVar1[5];
      lVar6 = lVar6 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14794225a FUN_14794225a body=59 status=ok
// SIG undefined FUN_14794225a(void)

undefined8 FUN_14794225a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479422a0 FUN_1479422a0 body=38 status=ok
// SIG undefined FUN_1479422a0(void)

void FUN_1479422a0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    if (*(longlong *)(param_2 + 0x18) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x30) = 0;
  }
  return;
}



// FUNCTION 147942326 FUN_147942326 body=44 status=ok
// SIG undefined FUN_147942326(void)

void FUN_147942326(undefined8 param_1,longlong *param_2)

{
  FUN_147942462(*param_2,(int)param_2[1]);
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147942368 FUN_147942368 body=54 status=ok
// SIG undefined FUN_147942368(void)

undefined1 FUN_147942368(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147942492(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 1479423c6 FUN_1479423c6 body=59 status=ok
// SIG undefined FUN_1479423c6(void)

undefined8 FUN_1479423c6(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147942462 FUN_147942462 body=47 status=ok
// SIG undefined FUN_147942462(void)

void FUN_147942462(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x18);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 147942492 FUN_147942492 body=95 status=ok
// SIG undefined FUN_147942492(void)

undefined8 * FUN_147942492(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_147942462(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1479424f2(param_1,iVar1);
      FUN_147942565(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1479424f2 FUN_1479424f2 body=115 status=ok
// SIG undefined FUN_1479424f2(void)

void FUN_1479424f2(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x30,8);
    iVar2 = (int)(uVar1 / 0x30);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x30,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 147942565 FUN_147942565 body=52 status=ok
// SIG undefined FUN_147942565(void)

void FUN_147942565(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_14794259a(param_1,param_2);
    param_1 = param_1 + 0x30;
    param_2 = param_2 + 0x30;
  }
  return;
}



// FUNCTION 14794259a FUN_14794259a body=121 status=ok
// SIG undefined FUN_14794259a(void)

undefined8 * FUN_14794259a(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  *param_1 = *param_2;
  uVar2 = *(undefined4 *)((longlong)param_2 + 0xc);
  uVar3 = *(undefined4 *)(param_2 + 2);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x14);
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar2;
  *(undefined4 *)(param_1 + 2) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar4;
  param_1[3] = 0;
  iVar1 = *(int *)(param_2 + 4);
  _Src = (void *)param_2[3];
  *(int *)(param_1 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 3,iVar1,0);
    memcpy((void *)param_1[3],_Src,(longlong)iVar1 * 2);
  }
  param_1[5] = param_2[5];
  return param_1;
}



// FUNCTION 147942614 FUN_147942614 body=50 status=ok
// SIG undefined FUN_147942614(void)

void FUN_147942614(longlong *param_1)

{
  if ((char)param_1[2] == '\x01') {
    FUN_147942462(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 2) = 0;
  }
  return;
}



// FUNCTION 147942676 FUN_147942676 body=48 status=ok
// SIG undefined FUN_147942676(void)

void FUN_147942676(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x40) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_2 + 0x18) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1479426bc FUN_1479426bc body=135 status=ok
// SIG undefined FUN_1479426bc(void)

undefined8 FUN_1479426bc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  
  if (param_4 != 0) {
    lVar6 = 0;
    do {
      puVar1 = (undefined8 *)(param_3 + lVar6);
      lVar2 = param_2 + 0x18 + lVar6;
      *(undefined8 *)(lVar2 + -0x18) = *puVar1;
      uVar3 = *(undefined4 *)((longlong)puVar1 + 0xc);
      uVar4 = *(undefined4 *)(puVar1 + 2);
      uVar5 = *(undefined4 *)((longlong)puVar1 + 0x14);
      *(undefined4 *)(lVar2 + -0x10) = *(undefined4 *)(puVar1 + 1);
      *(undefined4 *)(lVar2 + -0xc) = uVar3;
      *(undefined4 *)(lVar2 + -8) = uVar4;
      *(undefined4 *)(lVar2 + -4) = uVar5;
      FUN_144a787a6(lVar2,puVar1 + 3);
      *(undefined8 *)(lVar2 + 0x10) = puVar1[5];
      uVar3 = *(undefined4 *)((longlong)puVar1 + 0x34);
      uVar4 = *(undefined4 *)(puVar1 + 7);
      uVar5 = *(undefined4 *)((longlong)puVar1 + 0x3c);
      *(undefined4 *)(lVar2 + 0x18) = *(undefined4 *)(puVar1 + 6);
      *(undefined4 *)(lVar2 + 0x1c) = uVar3;
      *(undefined4 *)(lVar2 + 0x20) = uVar4;
      *(undefined4 *)(lVar2 + 0x24) = uVar5;
      FUN_144a787a6(param_2 + lVar6 + 0x40,param_3 + lVar6 + 0x40);
      lVar6 = lVar6 + 0x50;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14794276c FUN_14794276c body=59 status=ok
// SIG undefined FUN_14794276c(void)

undefined8 FUN_14794276c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14794280a FUN_14794280a body=52 status=ok
// SIG undefined FUN_14794280a(void)

void FUN_14794280a(longlong param_1)

{
  if (*(char *)(param_1 + 0x50) == '\x01') {
    if (*(longlong *)(param_1 + 0x40) != 0) {
      FUN_1400020a8();
    }
    if (*(longlong *)(param_1 + 0x18) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x50) = 0;
  }
  return;
}



// FUNCTION 1479428b6 FUN_1479428b6 body=59 status=ok
// SIG undefined FUN_1479428b6(void)

undefined8 FUN_1479428b6(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147942958 FUN_147942958 body=38 status=ok
// SIG undefined FUN_147942958(void)

undefined8 FUN_147942958(undefined8 param_1,int param_2)

{
  FUN_147ccd966();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14794297e FUN_14794297e body=32 status=ok
// SIG undefined FUN_14794297e(void)

undefined8 FUN_14794297e(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"SkeletalMeshAttributeVertexBuffer");
  return param_2;
}



// FUNCTION 1479429b6 FUN_1479429b6 body=47 status=ok
// SIG undefined FUN_1479429b6(void)

void FUN_1479429b6(undefined8 param_1,longlong *param_2)

{
  if (param_2[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1479429fc FUN_1479429fc body=67 status=ok
// SIG undefined FUN_1479429fc(void)

undefined1 FUN_1479429fc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14054c6c4(param_2,param_3);
    FUN_14054c6c4(param_2 + 0x10,param_3 + 0x10);
    param_2 = param_2 + 0x20;
    param_3 = param_3 + 0x20;
  }
  return 1;
}



// FUNCTION 147942a68 FUN_147942a68 body=59 status=ok
// SIG undefined FUN_147942a68(void)

undefined8 FUN_147942a68(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147942b06 FUN_147942b06 body=51 status=ok
// SIG undefined FUN_147942b06(void)

void FUN_147942b06(longlong *param_1)

{
  if ((char)param_1[4] == '\x01') {
    if (param_1[2] != 0) {
      FUN_1400020a8();
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 4) = 0;
  }
  return;
}



// FUNCTION 147942b9a FUN_147942b9a body=59 status=ok
// SIG undefined FUN_147942b9a(void)

undefined8 FUN_147942b9a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147942c80 FUN_147942c80 body=75 status=ok
// SIG undefined FUN_147942c80(void)

undefined8 FUN_147942c80(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      *(undefined8 *)(param_2 + lVar1) = *(undefined8 *)(param_3 + lVar1);
      FUN_144756208();
      lVar1 = lVar1 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147942cf4 FUN_147942cf4 body=59 status=ok
// SIG undefined FUN_147942cf4(void)

undefined8 FUN_147942cf4(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147942d3a FUN_147942d3a body=38 status=ok
// SIG undefined FUN_147942d3a(void)

void FUN_147942d3a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x18) == '\x01') {
    if (*(longlong *)(param_2 + 8) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x18) = 0;
  }
  return;
}



// FUNCTION 147942de4 FUN_147942de4 body=54 status=ok
// SIG undefined FUN_147942de4(void)

undefined1 FUN_147942de4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1406fa324(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 147942e42 FUN_147942e42 body=59 status=ok
// SIG undefined FUN_147942e42(void)

undefined8 FUN_147942e42(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147942e88 FUN_147942e88 body=37 status=ok
// SIG undefined FUN_147942e88(void)

void FUN_147942e88(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[2] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 2) = 0;
  }
  return;
}



// FUNCTION 147942f6a FUN_147942f6a body=59 status=ok
// SIG undefined FUN_147942f6a(void)

undefined8 FUN_147942f6a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147943042 FUN_147943042 body=75 status=ok
// SIG undefined FUN_147943042(void)

undefined8 FUN_147943042(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      *(undefined8 *)(param_2 + lVar1) = *(undefined8 *)(param_3 + lVar1);
      FUN_1406fa324();
      lVar1 = lVar1 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1479430b6 FUN_1479430b6 body=59 status=ok
// SIG undefined FUN_1479430b6(void)

undefined8 FUN_1479430b6(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479430fc FUN_1479430fc body=38 status=ok
// SIG undefined FUN_1479430fc(void)

void FUN_1479430fc(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x18) == '\x01') {
    if (*(longlong *)(param_2 + 8) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x18) = 0;
  }
  return;
}



// FUNCTION 1479431e8 FUN_1479431e8 body=59 status=ok
// SIG undefined FUN_1479431e8(void)

undefined8 FUN_1479431e8(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14794328a FUN_14794328a body=95 status=ok
// SIG undefined FUN_14794328a(void)

void FUN_14794328a(longlong *param_1)

{
  *(undefined4 *)(param_1 + 0xd) = 0;
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  FUN_1409468f4(param_1 + 4);
  FUN_1479432e9(param_1[2],(int)param_1[3]);
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1479432e9 FUN_1479432e9 body=43 status=ok
// SIG undefined FUN_1479432e9(void)

void FUN_1479432e9(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 3;
  }
  return;
}



// FUNCTION 14794338c FUN_14794338c body=59 status=ok
// SIG undefined FUN_14794338c(void)

undefined8 FUN_14794338c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14794342e FUN_14794342e body=91 status=ok
// SIG undefined FUN_14794342e(void)

longlong FUN_14794342e(longlong param_1,longlong param_2)

{
  if (param_1 != param_2) {
    FUN_1401fe8b6(param_1);
    if (*(longlong *)(param_2 + 0x40) == 0) {
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
    }
    if (*(longlong *)(param_1 + 0x40) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
    *(undefined4 *)(param_2 + 0x48) = 0;
  }
  return param_1;
}



// FUNCTION 14794352a FUN_14794352a body=59 status=ok
// SIG undefined FUN_14794352a(void)

undefined8 FUN_14794352a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147943570 FUN_147943570 body=32 status=ok
// SIG undefined FUN_147943570(void)

void FUN_147943570(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    FUN_144760f98(param_2);
    *(undefined1 *)(param_2 + 0x30) = 0;
  }
  return;
}



// FUNCTION 1479435e0 FUN_1479435e0 body=38 status=ok
// SIG undefined FUN_1479435e0(void)

undefined8 FUN_1479435e0(undefined8 param_1,int param_2)

{
  FUN_144760f98();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147943684 FUN_147943684 body=100 status=ok
// SIG undefined FUN_147943684(void)

undefined1 FUN_147943684(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1406fa324(param_2,param_3);
    FUN_1479437c6(param_2 + 0x10,param_3 + 0x10);
    FUN_14794391e(param_2 + 0x20,param_3 + 0x20);
    param_3 = param_3 + 0x70;
    param_2 = param_2 + 0x70;
  }
  return 1;
}



// FUNCTION 147943710 FUN_147943710 body=59 status=ok
// SIG undefined FUN_147943710(void)

undefined8 FUN_147943710(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147943756 FUN_147943756 body=34 status=ok
// SIG undefined FUN_147943756(void)

void FUN_147943756(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x70) == '\x01') {
    FUN_14794328a(param_2);
    *(undefined1 *)(param_2 + 0x70) = 0;
  }
  return;
}



// FUNCTION 1479437c6 FUN_1479437c6 body=95 status=ok
// SIG undefined FUN_1479437c6(void)

undefined8 * FUN_1479437c6(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1479432e9(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_147943826(param_1,iVar1);
      FUN_147943899(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147943826 FUN_147943826 body=115 status=ok
// SIG undefined FUN_147943826(void)

void FUN_147943826(longlong param_1,int param_2,int param_3)

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



// FUNCTION 147943899 FUN_147943899 body=133 status=ok
// SIG undefined FUN_147943899(void)

void FUN_147943899(undefined8 *param_1,longlong param_2,int param_3)

{
  int iVar1;
  void *_Src;
  undefined2 *puVar2;
  
  if (param_3 != 0) {
    puVar2 = (undefined2 *)(param_2 + 0x10);
    do {
      *param_1 = 0;
      iVar1 = *(int *)(puVar2 + -4);
      _Src = *(void **)(puVar2 + -8);
      *(int *)(param_1 + 1) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      }
      else {
        FUN_1409c2a84(param_1,iVar1,0);
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 4);
      }
      *(undefined1 *)((longlong)param_1 + 0x12) = *(undefined1 *)(puVar2 + 1);
      *(undefined2 *)(param_1 + 2) = *puVar2;
      param_1 = param_1 + 3;
      puVar2 = puVar2 + 0xc;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14794391e FUN_14794391e body=122 status=ok
// SIG undefined FUN_14794391e(void)

longlong FUN_14794391e(longlong param_1,longlong param_2)

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
    FUN_147943998(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 147943998 FUN_147943998 body=202 status=ok
// SIG undefined FUN_147943998(void)

undefined8 * FUN_147943998(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_14094692c(param_1,(ulonglong)uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_140549c28(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (0 < (int)uVar1) {
      puVar6 = (undefined4 *)*param_1;
      puVar4 = (undefined4 *)*param_2;
      uVar5 = 0;
      do {
        puVar3 = (undefined8 *)param_2[4];
        if ((undefined8 *)param_2[4] == (undefined8 *)0x0) {
          puVar3 = param_2 + 2;
        }
        if ((*(uint *)((longlong)puVar3 + (uVar5 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar5 & 0x1f) & 1)
            == 0) {
          *puVar6 = *puVar4;
          puVar6[1] = puVar4[1];
        }
        else {
          FUN_147943a62(puVar6,puVar4);
        }
        uVar5 = uVar5 + 1;
        puVar4 = puVar4 + 10;
        puVar6 = puVar6 + 10;
      } while (uVar1 != uVar5);
    }
  }
  return param_1;
}



// FUNCTION 147943a62 FUN_147943a62 body=128 status=ok
// SIG undefined FUN_147943a62(void)

undefined8 * FUN_147943a62(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_1 = *param_2;
  param_1[1] = 0;
  iVar1 = *(int *)(param_2 + 2);
  _Src = (void *)param_2[1];
  *(int *)(param_1 + 2) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    FUN_1409c2a84(param_1 + 1,iVar1,0);
    memcpy((void *)param_1[1],_Src,(longlong)iVar1 << 4);
  }
  *(undefined1 *)((longlong)param_1 + 0x1a) = *(undefined1 *)((longlong)param_2 + 0x1a);
  *(undefined2 *)(param_1 + 3) = *(undefined2 *)(param_2 + 3);
  param_1[4] = param_2[4];
  return param_1;
}



// FUNCTION 147943b32 FUN_147943b32 body=42 status=ok
// SIG undefined FUN_147943b32(void)

void FUN_147943b32(undefined8 param_1,longlong param_2)

{
  *(undefined4 *)(param_2 + 0x48) = 0;
  if (*(longlong *)(param_2 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_140e3ac78(param_2);
  return;
}



// FUNCTION 147943b9e FUN_147943b9e body=59 status=ok
// SIG undefined FUN_147943b9e(void)

undefined8 FUN_147943b9e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147943be4 FUN_147943be4 body=53 status=ok
// SIG undefined FUN_147943be4(void)

void FUN_147943be4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x50) == '\x01') {
    *(undefined4 *)(param_2 + 0x48) = 0;
    if (*(longlong *)(param_2 + 0x40) != 0) {
      FUN_1400020a8();
    }
    FUN_140e3ac78(param_2);
    *(undefined1 *)(param_2 + 0x50) = 0;
  }
  return;
}



// FUNCTION 147943c8c FUN_147943c8c body=19 status=ok
// SIG undefined FUN_147943c8c(void)

undefined1 FUN_147943c8c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_14793e7a0(param_3);
  return 1;
}



// FUNCTION 147943d10 FUN_147943d10 body=59 status=ok
// SIG undefined FUN_147943d10(void)

undefined8 FUN_147943d10(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147943db2 FUN_147943db2 body=54 status=ok
// SIG undefined FUN_147943db2(void)

void FUN_147943db2(longlong *param_1)

{
  FUN_147943de8(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147943de8 FUN_147943de8 body=128 status=ok
// SIG undefined FUN_147943de8(void)

void FUN_147943de8(longlong param_1,int param_2)

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
  if (*(int *)(param_1 + 0x2c) < (int)uVar2 || 0x80 < *(int *)(param_1 + 0x2c)) {
    uVar1 = 0x80;
    if (0x80 < (int)uVar2) {
      uVar1 = uVar2;
    }
    *(uint *)(param_1 + 0x2c) = uVar1;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 147943e6a FUN_147943e6a body=450 status=ok
// SIG undefined FUN_147943e6a(void)

void FUN_147943e6a(longlong param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  byte bVar4;
  void *_Dst;
  undefined4 *puVar5;
  ulonglong uVar6;
  void *pvVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  
  iVar1 = *(int *)(param_1 + 0x48);
  uVar8 = param_2 - iVar1;
  if (uVar8 != 0 && iVar1 <= (int)param_2) {
    uVar6 = (ulonglong)param_2;
    if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar6);
    }
    iVar10 = *(int *)(param_1 + 0x4c);
    iVar11 = iVar1;
    if (iVar10 < (int)param_2) {
      FUN_144b20932(param_1);
      iVar11 = *(int *)(param_1 + 0x48);
      iVar10 = *(int *)(param_1 + 0x4c);
    }
    *(uint *)(param_1 + 0x48) = iVar11 + uVar8;
    if ((uint)(iVar10 - iVar11) < uVar8) {
      FUN_1479441fe(param_1);
    }
    lVar3 = *(longlong *)(param_1 + 0x40);
    if (*(longlong *)(param_1 + 0x40) == 0) {
      lVar3 = param_1;
    }
    if (iVar11 < (int)param_2) {
      iVar10 = *(int *)(param_1 + 0x6c);
      puVar5 = (undefined4 *)(uVar6 * 0x10 + lVar3 + -0xc);
      do {
        iVar9 = (int)uVar6;
        if (iVar10 != 0) {
          *(int *)(lVar3 + (longlong)*(int *)(param_1 + 0x68) * 0x10) = iVar9 + -1;
        }
        puVar5[-1] = 0xffffffff;
        if (*(int *)(param_1 + 0x6c) < 1) {
          uVar2 = 0xffffffff;
        }
        else {
          uVar2 = *(undefined4 *)(param_1 + 0x68);
        }
        uVar6 = uVar6 - 1;
        *puVar5 = uVar2;
        *(int *)(param_1 + 0x68) = iVar9 + -1;
        iVar10 = *(int *)(param_1 + 0x6c) + 1;
        *(int *)(param_1 + 0x6c) = iVar10;
        puVar5 = puVar5 + -4;
      } while ((longlong)iVar11 < (longlong)uVar6);
    }
    if (iVar1 == 0) {
      *(uint *)(param_1 + 0x60) = uVar8;
      if (param_2 != 0) {
        pvVar7 = (void *)(param_1 + 0x50);
        uVar12 = uVar8 + 0x1f >> 5;
        if (*(int *)(param_1 + 100) + 0x1fU >> 5 < uVar12) {
          FUN_144aa70c6(pvVar7,0,uVar12,4);
          *(uint *)(param_1 + 100) = uVar8 + 0x1f & 0xffffffe0;
        }
        _Dst = *(void **)(param_1 + 0x58);
        if (*(void **)(param_1 + 0x58) == (void *)0x0) {
          _Dst = pvVar7;
        }
        if (uVar8 < 0x101) {
          uVar12 = uVar12 + (uVar12 == 0);
        }
        memset(_Dst,0,(ulonglong)(uVar12 << 2));
        iVar1 = *(int *)(param_1 + 0x60);
        iVar10 = iVar1 + 0x1f;
        if (-1 < iVar1) {
          iVar10 = iVar1;
        }
        if (iVar1 % 0x20 != 0) {
          if (*(void **)(param_1 + 0x58) != (void *)0x0) {
            pvVar7 = *(void **)(param_1 + 0x58);
          }
          bVar4 = -(char)(iVar1 % 0x20);
          *(uint *)((longlong)pvVar7 + (longlong)(iVar10 >> 5) * 4) =
               (uint)(*(int *)((longlong)pvVar7 + (longlong)(iVar10 >> 5) * 4) << (bVar4 & 0x1f)) >>
               (bVar4 & 0x1f);
        }
      }
    }
    else if (-1 < (int)uVar8) {
      uVar2 = FUN_14489e6aa(param_1 + 0x50,uVar8);
      FUN_1470f4066(param_1 + 0x50,uVar2,uVar8,0);
      return;
    }
  }
  return;
}



// FUNCTION 14794402e FUN_14794402e body=463 status=ok
// SIG undefined FUN_14794402e(void)

void FUN_14794402e(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  ulonglong uVar10;
  undefined1 auStack_98 [40];
  longlong local_70;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FUN_1446efa72(param_1 + 0x78,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 0x80);
  uVar3 = local_58;
  if (uVar2 != 0) {
    lVar1 = param_1 + 0x70;
    uVar7 = 0;
    FUN_145cfbc50(lVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        lVar5 = *(longlong *)(param_1 + 0x78);
        if (*(longlong *)(param_1 + 0x78) == 0) {
          lVar5 = lVar1;
        }
        *(undefined4 *)(lVar5 + (ulonglong)(*(int *)(param_1 + 0x80) + 0x7fffffffU & uVar7) * 4) =
             0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar2 != uVar7);
    }
    local_40 = param_1 + 0x50;
    local_48 = 0x100000000;
    local_38 = 0xffffffff;
    local_30 = 0;
    if (*(int *)(param_1 + 0x60) != 0) {
      FUN_144a81a4c(&local_48);
    }
    local_68 = local_48;
    local_60 = local_40;
    local_50 = local_30;
    local_4c = local_2c;
    local_58 = local_38;
    uVar3 = local_58;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < *(int *)(local_40 + 0x10)) {
      iVar4 = local_58._4_4_;
      local_58 = uVar3;
      do {
        lVar5 = *(longlong *)(local_70 + 0x40);
        if (*(longlong *)(local_70 + 0x40) == 0) {
          lVar5 = local_70;
        }
        lVar6 = (longlong)iVar4 * 0x10;
        uVar10 = (longlong)
                 (int)((uint)((ulonglong)*(undefined8 *)(lVar5 + lVar6) >> 0x20) ^
                      (uint)*(undefined8 *)(lVar5 + lVar6)) &
                 (longlong)*(int *)(param_1 + 0x80) - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar5 + 0xc + lVar6) = iVar9;
        lVar8 = *(longlong *)(param_1 + 0x78);
        if (*(longlong *)(param_1 + 0x78) == 0) {
          lVar8 = lVar1;
        }
        *(undefined4 *)(lVar5 + 8 + lVar6) =
             *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x80) - 1U & uVar10) * 4);
        lVar5 = *(longlong *)(param_1 + 0x78);
        if (*(longlong *)(param_1 + 0x78) == 0) {
          lVar5 = lVar1;
        }
        *(int *)(lVar5 + ((longlong)iVar9 & (longlong)*(int *)(param_1 + 0x80) - 1U) * 4) = iVar4;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_144a81a4c(&local_68);
        iVar4 = local_58._4_4_;
        uVar3 = local_58;
      } while (local_58._4_4_ < *(int *)(local_60 + 0x10));
    }
  }
  local_58 = uVar3;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1479441fe FUN_1479441fe body=110 status=ok
// SIG undefined FUN_1479441fe(void)

void FUN_1479441fe(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x48);
  if (param_2 <= (int)uVar1) {
    iVar5 = 4;
    if (4 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (4 < *(uint *)(param_1 + 0x4c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 4,0);
      iVar2 = (int)(uVar3 >> 4);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x4c) = iVar5;
    FUN_1433f4fdc(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 14794426e FUN_14794426e body=277 status=ok
// SIG undefined FUN_14794426e(void)

undefined4 *
FUN_14794426e(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint uVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_147944384(param_1,local_50);
  uVar1 = *param_3;
  *local_48 = uVar1;
  *(undefined4 *)(local_48 + 1) = 0xffffffff;
  local_54 = local_50[0];
  uVar7 = (uint)((ulonglong)uVar1 >> 0x20) ^ (uint)uVar1;
  local_68 = param_4;
  cVar3 = FUN_147944482(param_1,uVar7,local_48);
  uVar2 = local_54;
  if (cVar3 == '\0') {
    cVar3 = FUN_147944678(param_1,*(int *)(param_1 + 0x48) - *(int *)(param_1 + 0x6c),0);
    if (cVar3 == '\0') {
      uVar5 = (longlong)(int)uVar7 & (longlong)*(int *)(param_1 + 0x80) - 1U;
      iVar4 = (int)uVar5;
      *(int *)((longlong)local_48 + 0xc) = iVar4;
      lVar6 = *(longlong *)(param_1 + 0x78);
      if (*(longlong *)(param_1 + 0x78) == 0) {
        lVar6 = param_1 + 0x70;
      }
      *(undefined4 *)(local_48 + 1) =
           *(undefined4 *)(lVar6 + ((longlong)*(int *)(param_1 + 0x80) - 1U & uVar5) * 4);
      lVar6 = *(longlong *)(param_1 + 0x78);
      if (*(longlong *)(param_1 + 0x78) == 0) {
        lVar6 = param_1 + 0x70;
      }
      *(undefined4 *)(lVar6 + ((longlong)iVar4 & (longlong)*(int *)(param_1 + 0x80) - 1U) * 4) =
           uVar2;
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147944384 FUN_147944384 body=254 status=ok
// SIG undefined FUN_147944384(void)

int * FUN_147944384(longlong param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)(param_1 + 0x6c) == 0) {
    iVar6 = *(int *)(param_1 + 0x48);
    *(int *)(param_1 + 0x48) = iVar6 + 1;
    if (*(int *)(param_1 + 0x4c) == iVar6) {
      FUN_1479441fe(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_14489e6aa(param_1 + 0x50,1);
    lVar4 = *(longlong *)(param_1 + 0x58);
    if (*(longlong *)(param_1 + 0x58) == 0) {
      lVar4 = param_1 + 0x50;
    }
    iVar5 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar5 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)(lVar4 + (longlong)(iVar5 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    lVar4 = *(longlong *)(param_1 + 0x40);
    if (*(longlong *)(param_1 + 0x40) == 0) {
      lVar4 = param_1;
    }
    iVar6 = *(int *)(param_1 + 0x68);
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(lVar4 + 4 + lVar7 * 0x10);
    *(int *)(param_1 + 0x68) = iVar3;
    iVar5 = *(int *)(param_1 + 0x6c) + -1;
    *(int *)(param_1 + 0x6c) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(lVar4 + (longlong)iVar3 * 0x10) = 0xffffffff;
    }
  }
  lVar4 = param_1 + 0x50;
  if (*(longlong *)(param_1 + 0x58) != 0) {
    lVar4 = *(longlong *)(param_1 + 0x58);
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)(lVar4 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  lVar4 = *(longlong *)(param_1 + 0x40);
  if (*(longlong *)(param_1 + 0x40) == 0) {
    lVar4 = param_1;
  }
  *(longlong *)(param_2 + 2) = lVar7 * 0x10 + lVar4;
  return param_2;
}



// FUNCTION 147944482 FUN_147944482 body=160 status=ok
// SIG undefined FUN_147944482(void)

void FUN_147944482(longlong param_1,undefined8 param_2,undefined8 *param_3,int *param_4,
                  undefined1 *param_5)

{
  undefined1 uVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(param_1 + 0x48) - *(int *)(param_1 + 0x6c) != 1) {
    local_38 = *param_3;
    iVar2 = FUN_147944524();
    if (iVar2 != -1) {
      lVar3 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar3 = param_1;
      }
      *(undefined8 *)(lVar3 + (longlong)iVar2 * 0x10) = *param_3;
      FUN_1479445fc(param_1,*param_4);
      *param_4 = iVar2;
      uVar1 = 1;
      goto LAB_1479444b0;
    }
  }
  uVar1 = 0;
LAB_1479444b0:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar1;
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147944524 FUN_147944524 body=215 status=ok
// SIG undefined FUN_147944524(void)

int FUN_147944524(longlong param_1,uint param_2,undefined8 *param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(param_1 + 0x48) != *(int *)(param_1 + 0x6c)) {
    lVar2 = param_1 + 0x70;
    if (*(longlong *)(param_1 + 0x78) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x78);
    }
    iVar4 = *(int *)(lVar2 + (ulonglong)(*(int *)(param_1 + 0x80) - 1U & param_2) * 4);
    if (iVar4 != -1) {
      lVar2 = *(longlong *)(param_1 + 0x40);
      do {
        local_48 = *param_3;
        if (lVar2 == 0) {
          lVar2 = param_1;
        }
        local_40 = *(undefined8 *)(lVar2 + (longlong)iVar4 * 0x10);
        cVar1 = FUN_1403d434c(&local_40,&local_48);
        if (cVar1 != '\0') goto LAB_14794454d;
        lVar2 = *(longlong *)(param_1 + 0x40);
        lVar3 = lVar2;
        if (lVar2 == 0) {
          lVar3 = param_1;
        }
        iVar4 = *(int *)(lVar3 + 8 + (longlong)iVar4 * 0x10);
      } while (iVar4 != -1);
    }
  }
  iVar4 = -1;
LAB_14794454d:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar4;
}



// FUNCTION 1479445fc FUN_1479445fc body=123 status=ok
// SIG undefined FUN_1479445fc(void)

void FUN_1479445fc(longlong param_1,int param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  undefined4 uVar5;
  
  lVar4 = *(longlong *)(param_1 + 0x40);
  if (*(longlong *)(param_1 + 0x40) == 0) {
    lVar4 = param_1;
  }
  if (*(int *)(param_1 + 0x6c) != 0) {
    *(int *)(lVar4 + (longlong)*(int *)(param_1 + 0x68) * 0x10) = param_2;
  }
  *(undefined4 *)(lVar4 + (longlong)param_2 * 0x10) = 0xffffffff;
  if (*(int *)(param_1 + 0x6c) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = *(undefined4 *)(param_1 + 0x68);
  }
  *(undefined4 *)(lVar4 + (longlong)param_2 * 0x10 + 4) = uVar5;
  *(int *)(param_1 + 0x68) = param_2;
  *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + 1;
  lVar4 = param_1 + 0x50;
  if (*(longlong *)(param_1 + 0x58) != 0) {
    lVar4 = *(longlong *)(param_1 + 0x58);
  }
  iVar3 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar3 = param_2;
  }
  bVar2 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)(lVar4 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  return;
}



// FUNCTION 147944678 FUN_147944678 body=119 status=ok
// SIG undefined FUN_147944678(void)

undefined8 FUN_147944678(longlong param_1,uint param_2,char param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  
  uVar1 = (ulonglong)(((param_2 >> 1) - 1) + (uint)(param_2 >> 1 == 0)) * 2 + 1;
  lVar2 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
    }
  }
  iVar4 = 1 << ((byte)lVar2 & 0x1f);
  if (lVar2 == 0) {
    iVar4 = 2;
  }
  if (param_2 < 4) {
    iVar4 = 2;
  }
  if ((((int)param_2 < 1) || (iVar4 <= *(int *)(param_1 + 0x80))) &&
     ((param_3 != '\x01' || (*(int *)(param_1 + 0x80) <= iVar4)))) {
    uVar3 = 0;
  }
  else {
    *(int *)(param_1 + 0x80) = iVar4;
    FUN_14794402e(param_1);
    uVar3 = 1;
  }
  return uVar3;
}



// FUNCTION 1479446f0 FUN_1479446f0 body=52 status=ok
// SIG undefined FUN_1479446f0(void)

void FUN_1479446f0(longlong *param_1)

{
  FUN_147944724();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147944724 FUN_147944724 body=89 status=ok
// SIG undefined FUN_147944724(void)

void FUN_147944724(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_14472eb64(param_1,0);
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



// FUNCTION 14794477e FUN_14794477e body=285 status=ok
// SIG undefined FUN_14794477e(void)

undefined4 * FUN_14794477e(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14794489c(param_1,local_48);
  uVar1 = *param_3;
  *local_40 = uVar1;
  *(undefined4 *)(local_40 + 1) = 0xffffffff;
  local_4c = local_48[0];
  uVar8 = (uint)((ulonglong)uVar1 >> 0x20) ^ (uint)uVar1;
  cVar3 = FUN_147944982(param_1,uVar8,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
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
      uVar8 = *(int *)(param_1 + 0x48) - 1U & uVar8;
      *(uint *)((longlong)local_40 + 0xc) = uVar8;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 1) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_147944b34(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14794489c FUN_14794489c body=229 status=ok
// SIG undefined FUN_14794489c(void)

int * FUN_14794489c(longlong *param_1,int *param_2)

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
      FUN_144869a3c(param_1,iVar6);
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



// FUNCTION 147944982 FUN_147944982 body=132 status=ok
// SIG undefined FUN_147944982(void)

undefined8 FUN_147944982(longlong *param_1,undefined8 param_2,undefined8 *param_3,int *param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_30 = *param_3;
    iVar1 = FUN_147944a08();
    if (iVar1 != -1) {
      *(undefined8 *)(*param_1 + (longlong)iVar1 * 0x10) = *param_3;
      FUN_147944ac2(param_1,*param_4);
      *param_4 = iVar1;
      uVar2 = 1;
      goto LAB_1479449a6;
    }
  }
  uVar2 = 0;
LAB_1479449a6:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147944a08 FUN_147944a08 body=185 status=ok
// SIG undefined FUN_147944a08(void)

int FUN_147944a08(longlong *param_1,uint param_2,undefined8 *param_3)

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
        local_40 = *(undefined8 *)(lVar3 + (longlong)iVar4 * 0x10);
        cVar1 = FUN_1403d434c(&local_40,&local_48);
        if (cVar1 != '\0') goto LAB_147944a31;
        lVar3 = *param_1;
        iVar4 = *(int *)(lVar3 + 8 + (longlong)iVar4 * 0x10);
      } while (iVar4 != -1);
    }
  }
  iVar4 = -1;
LAB_147944a31:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar4;
}



// FUNCTION 147944ac2 FUN_147944ac2 body=114 status=ok
// SIG undefined FUN_147944ac2(void)

void FUN_147944ac2(longlong *param_1,int param_2)

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



// FUNCTION 147944b34 FUN_147944b34 body=439 status=ok
// SIG undefined FUN_147944b34(void)

void FUN_147944b34(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x10;
        uVar10 = (longlong)
                 (int)((uint)((ulonglong)*(undefined8 *)(lVar3 + lVar7) >> 0x20) ^
                      (uint)*(undefined8 *)(lVar3 + lVar7)) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0xc + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 8 + lVar7) =
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



// FUNCTION 147944cec FUN_147944cec body=242 status=ok
// SIG undefined FUN_147944cec(void)

undefined4 FUN_147944cec(longlong *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar3 = param_1[7];
  local_48 = 0;
  FUN_14485c47a(&local_48);
  uVar4 = FUN_147935a14(param_1 + 6,&local_48);
  if ((int)lVar3 < (int)param_1[7]) {
    iVar2 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar2 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
      FUN_140bfc2d4(param_1,iVar2);
    }
    puVar1 = (undefined8 *)(*param_1 + (longlong)iVar2 * 0x10);
    *puVar1 = 0;
    puVar1[1] = 0;
    iVar2 = (int)param_1[3];
    *(uint *)(param_1 + 3) = iVar2 + 1U;
    if (*(uint *)((longlong)param_1 + 0x1c) < iVar2 + 1U) {
      FUN_147935b4e(param_1 + 2,iVar2);
    }
    puVar1 = (undefined8 *)(param_1[2] + (longlong)iVar2 * 0x10);
    *puVar1 = 0;
    puVar1[1] = 0;
    iVar2 = (int)param_1[5];
    *(uint *)(param_1 + 5) = iVar2 + 1U;
    if (*(uint *)((longlong)param_1 + 0x2c) < iVar2 + 1U) {
      FUN_1474d86f8(param_1 + 4,iVar2);
    }
    puVar1 = (undefined8 *)(param_1[4] + (longlong)iVar2 * 0x10);
    *puVar1 = 0;
    puVar1[1] = 0;
  }
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147944de0 FUN_147944de0 body=87 status=ok
// SIG undefined FUN_147944de0(void)

void FUN_147944de0(longlong param_1,int param_2)

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
  FUN_147944e38();
  return;
}



// FUNCTION 147944e38 FUN_147944e38 body=280 status=ok
// SIG undefined FUN_147944e38(void)

void FUN_147944e38(undefined8 *param_1,int param_2,int param_3)

{
  ulonglong *puVar1;
  longlong lVar2;
  void *_Src;
  longlong lVar3;
  uint uVar4;
  void *_Dst;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 auStack_88 [47];
  undefined1 local_59;
  code *local_58;
  undefined1 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_3 != 0) {
    if (param_3 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_146815189(param_3,8);
    }
    _Src = (void *)*param_1;
    local_50 = &local_59;
    local_58 = FUN_140036a08;
    lVar3 = FUN_144a773aa(&local_58,&DAT_14c7585d0);
    puVar1 = (ulonglong *)(lVar3 + 0x10);
    uVar4 = param_3 * 8;
    uVar7 = (ulonglong)(uVar4 < 0x10) << 3 | 0xfffffffffffffff0;
    uVar5 = (uint)(uVar4 >= 0x10) * 8;
    lVar2 = (ulonglong)uVar5 + 7;
    _Dst = (void *)(*(longlong *)(lVar3 + 0x10) + lVar2 & uVar7);
    uVar6 = (longlong)_Dst + (longlong)(int)uVar4;
    if (*(ulonglong *)(lVar3 + 0x18) < uVar6) {
      FUN_140023dd8(puVar1,uVar5 + 8 + uVar4);
      _Dst = (void *)(lVar2 + *puVar1 & uVar7);
      uVar6 = (longlong)(int)uVar4 + (longlong)_Dst;
    }
    *puVar1 = uVar6;
    *param_1 = _Dst;
    if (param_2 != 0 && _Src != (void *)0x0) {
      if (param_3 < param_2) {
        param_2 = param_3;
      }
      memcpy(_Dst,_Src,(longlong)param_2 << 3);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147944f52 FUN_147944f52 body=87 status=ok
// SIG undefined FUN_147944f52(void)

void FUN_147944f52(longlong param_1,int param_2)

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
  FUN_147944faa();
  return;
}



// FUNCTION 147944faa FUN_147944faa body=280 status=ok
// SIG undefined FUN_147944faa(void)

void FUN_147944faa(undefined8 *param_1,int param_2,int param_3)

{
  ulonglong *puVar1;
  longlong lVar2;
  void *_Src;
  longlong lVar3;
  uint uVar4;
  void *_Dst;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 auStack_88 [47];
  undefined1 local_59;
  code *local_58;
  undefined1 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_3 != 0) {
    if (param_3 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_146815189(param_3,8);
    }
    _Src = (void *)*param_1;
    local_50 = &local_59;
    local_58 = FUN_140036a08;
    lVar3 = FUN_144a773aa(&local_58,&DAT_14c7585d0);
    puVar1 = (ulonglong *)(lVar3 + 0x10);
    uVar4 = param_3 * 8;
    uVar7 = (ulonglong)(uVar4 < 0x10) << 3 | 0xfffffffffffffff0;
    uVar5 = (uint)(uVar4 >= 0x10) * 8;
    lVar2 = (ulonglong)uVar5 + 7;
    _Dst = (void *)(*(longlong *)(lVar3 + 0x10) + lVar2 & uVar7);
    uVar6 = (longlong)_Dst + (longlong)(int)uVar4;
    if (*(ulonglong *)(lVar3 + 0x18) < uVar6) {
      FUN_140023dd8(puVar1,uVar5 + 8 + uVar4);
      _Dst = (void *)(lVar2 + *puVar1 & uVar7);
      uVar6 = (longlong)(int)uVar4 + (longlong)_Dst;
    }
    *puVar1 = uVar6;
    *param_1 = _Dst;
    if (param_2 != 0 && _Src != (void *)0x0) {
      if (param_3 < param_2) {
        param_2 = param_3;
      }
      memcpy(_Dst,_Src,(longlong)param_2 << 3);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479450c4 FUN_1479450c4 body=186 status=ok
// SIG undefined FUN_1479450c4(void)

void FUN_1479450c4(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  longlong *local_58;
  longlong local_50;
  undefined4 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((longlong)(int)param_2[1] != 0) {
    lVar2 = *param_2;
    lVar1 = (longlong)(int)param_2[1] * 0x30;
    local_60 = param_3;
    do {
      local_48 = 0xffffffff;
      local_58 = param_2;
      local_50 = lVar2;
      FUN_14794537c(&local_60,&local_58);
      lVar2 = lVar2 + 0x30;
      lVar1 = lVar1 + -0x30;
    } while (lVar1 != 0);
  }
  local_50 = param_2[2];
  local_48 = (undefined4)param_2[3];
  local_40 = 0xffffffff;
  local_60 = param_3;
  local_58 = param_2;
  FUN_147945422();
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147945180 FUN_147945180 body=191 status=ok
// SIG undefined FUN_147945180(void)

void FUN_147945180(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  longlong *local_58;
  longlong local_50;
  undefined4 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_60 = param_3;
  if ((longlong)(int)param_2[1] != 0) {
    lVar2 = *param_2;
    lVar1 = (longlong)(int)param_2[1] * 0x30;
    local_68 = param_1;
    do {
      local_48 = 0xffffffff;
      local_58 = param_2;
      local_50 = lVar2;
      FUN_1479454c6(&local_68,&local_58);
      lVar2 = lVar2 + 0x30;
      lVar1 = lVar1 + -0x30;
    } while (lVar1 != 0);
  }
  local_50 = param_2[2];
  local_48 = (undefined4)param_2[3];
  local_40 = 0xffffffff;
  local_68 = param_3;
  local_58 = param_2;
  FUN_147945798();
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147945240 FUN_147945240 body=91 status=ok
// SIG undefined FUN_147945240(void)

void FUN_147945240(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = *(undefined8 *)(param_2 + 0x10);
  local_18 = *(undefined4 *)(param_2 + 0x18);
  local_10 = 0xffffffff;
  local_30 = param_3;
  local_28 = param_2;
  FUN_147945880(&local_30,&local_28);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14794529c FUN_14794529c body=91 status=ok
// SIG undefined FUN_14794529c(void)

void FUN_14794529c(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = *(undefined8 *)(param_2 + 0x10);
  local_18 = *(undefined4 *)(param_2 + 0x18);
  local_10 = 0xffffffff;
  local_30 = param_3;
  local_28 = param_2;
  FUN_147945904(&local_30,&local_28);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479452f8 FUN_1479452f8 body=91 status=ok
// SIG undefined FUN_1479452f8(void)

void FUN_1479452f8(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = *(undefined8 *)(param_2 + 0x10);
  local_18 = *(undefined4 *)(param_2 + 0x18);
  local_10 = 0xffffffff;
  local_30 = param_3;
  local_28 = param_2;
  FUN_1479459a4(&local_30,&local_28);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14794537c FUN_14794537c body=165 status=ok
// SIG undefined FUN_14794537c(void)

void FUN_14794537c(undefined8 *param_1,undefined8 *param_2)

{
  float fVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  float *pfVar5;
  char cVar6;
  int iVar7;
  undefined8 uVar8;
  float *pfVar9;
  float fVar10;
  
  uVar2 = *(undefined8 *)(param_2[1] + 0x20);
  cVar6 = FUN_1479381c0(uVar2);
  uVar3 = *param_1;
  uVar8 = FUN_145cd07f8();
  pfVar9 = (float *)FUN_14792a902(uVar3,uVar8,uVar2);
  if (cVar6 == '\0') {
    *pfVar9 = **(float **)
                (*(longlong *)param_2[1] + (longlong)*(int *)((longlong)param_2[1] + 0x2c) * 8);
  }
  else {
    while( true ) {
      iVar7 = *(int *)(param_2 + 2) + 1;
      *(int *)(param_2 + 2) = iVar7;
      plVar4 = (longlong *)param_2[1];
      if ((int)plVar4[1] <= iVar7) break;
      pfVar5 = *(float **)(*plVar4 + (longlong)iVar7 * 8);
      fVar10 = (float)FUN_14792fa86(*param_2,*(undefined4 *)(plVar4[2] + (longlong)iVar7 * 4));
      fVar1 = *pfVar5;
      if (*(int *)(param_2 + 2) == 0) {
        fVar10 = fVar10 * fVar1;
      }
      else {
        fVar10 = fVar1 * fVar10 + *pfVar9;
      }
      *pfVar9 = fVar10;
    }
  }
  return;
}



// FUNCTION 147945422 FUN_147945422 body=163 status=ok
// SIG undefined FUN_147945422(void)

void FUN_147945422(undefined8 *param_1,undefined8 *param_2)

{
  float *pfVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  
  iVar5 = *(int *)(param_2 + 3) + 1;
  *(int *)(param_2 + 3) = iVar5;
  if (iVar5 < *(int *)(param_2 + 2)) {
    do {
      pfVar1 = *(float **)(param_2[1] + 0x10 + (longlong)iVar5 * 0x18);
      fVar8 = (float)FUN_14792fa86(*param_2,*(undefined4 *)(param_2[1] + 8 + (longlong)iVar5 * 0x18)
                                  );
      uVar2 = *(undefined8 *)(param_2[1] + (longlong)*(int *)(param_2 + 3) * 0x18);
      cVar4 = FUN_1479381c0(uVar2);
      uVar3 = *param_1;
      uVar6 = FUN_145cd07f8();
      pfVar7 = (float *)FUN_14792a902(uVar3,uVar6,uVar2);
      fVar9 = *pfVar1;
      if (cVar4 != '\0') {
        fVar9 = fVar9 * fVar8;
      }
      *pfVar7 = fVar9;
      iVar5 = *(int *)(param_2 + 3) + 1;
      *(int *)(param_2 + 3) = iVar5;
    } while (iVar5 < *(int *)(param_2 + 2));
  }
  return;
}



// FUNCTION 1479454c6 FUN_1479454c6 body=233 status=ok
// SIG undefined FUN_1479454c6(void)

void FUN_1479454c6(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  float *pfVar7;
  float *pfVar8;
  longlong lVar9;
  float fVar10;
  
  uVar1 = *(undefined8 *)(param_2[1] + 0x20);
  cVar3 = FUN_1479381c0(uVar1);
  iVar4 = FUN_1479455b0(*(undefined8 *)(param_1 + 8),uVar1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar6 = FUN_145cd07f8();
  pfVar7 = (float *)FUN_14792a902(uVar2,uVar6,uVar1);
  if (cVar3 == '\0') {
    pfVar8 = (float *)FUN_1479456c6(param_2);
LAB_14794559b:
    *pfVar7 = *pfVar8;
  }
  else {
    iVar5 = *(int *)(param_2 + 2) + 1;
    *(int *)(param_2 + 2) = iVar5;
    lVar9 = param_2[1];
    if (iVar5 < *(int *)(lVar9 + 8)) {
      do {
        fVar10 = (float)FUN_14792f4f2(*param_2,*(undefined4 *)
                                                (*(longlong *)(lVar9 + 0x10) + (longlong)iVar5 * 4),
                                      *(undefined4 *)(*(longlong *)(lVar9 + 0x20) + 0x10));
        pfVar8 = *(float **)(*(longlong *)param_2[1] + (longlong)*(int *)(param_2 + 2) * 8);
        if (0.99999 <= fVar10) goto LAB_14794559b;
        if (*(int *)(param_2 + 2) == 0 && iVar4 == -1) {
          fVar10 = fVar10 * *pfVar8;
        }
        else {
          fVar10 = *pfVar8 * fVar10 + *pfVar7;
        }
        *pfVar7 = fVar10;
        iVar5 = *(int *)(param_2 + 2) + 1;
        *(int *)(param_2 + 2) = iVar5;
        lVar9 = param_2[1];
      } while (iVar5 < *(int *)(lVar9 + 8));
    }
  }
  return;
}



// FUNCTION 1479455b0 FUN_1479455b0 body=278 status=ok
// SIG undefined FUN_1479455b0(void)

int FUN_1479455b0(longlong *param_1,longlong *param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  
  uVar2 = FUN_145cd07f8();
  lVar3 = param_1[7];
  if ((longlong)(int)lVar3 == 0) {
    return -1;
  }
  lVar6 = param_1[6];
  uVar4 = 0;
  lVar5 = 0;
  while (cVar1 = FUN_1400063ec(lVar6 + uVar4,uVar2), cVar1 == '\0') {
    lVar5 = lVar5 + 0x100000000;
    uVar4 = uVar4 + 8;
    if ((longlong)(int)lVar3 * 8 == uVar4) {
      return -1;
    }
  }
  if ((int)(~uVar4 >> 3) == 0) {
    return -1;
  }
  lVar6 = (lVar5 >> 0x20) * 0x10;
  lVar3 = (longlong)*(int *)(*param_1 + 8 + lVar6);
  if (lVar3 == 0) {
    return -1;
  }
  lVar5 = 0;
  do {
    if (*(int *)(*(longlong *)(*param_1 + lVar6) + lVar5) == (int)param_2[2]) {
      lVar3 = (longlong)*(int *)(param_1[2] + 8 + lVar6);
      if (lVar3 == 0) {
        return -1;
      }
      lVar6 = *(longlong *)(param_1[2] + lVar6);
      uVar4 = 0;
      while (((*(int *)(lVar6 + 0x10 + uVar4) != (int)param_2[2] ||
              (*(longlong *)(lVar6 + 8 + uVar4) != param_2[1])) ||
             (*(longlong *)(lVar6 + uVar4) != *param_2))) {
        uVar4 = uVar4 + 0x14;
        if (lVar3 * 0x14 == uVar4) {
          return -1;
        }
      }
      return (int)(uVar4 >> 2) * -0x33333333;
    }
    lVar5 = lVar5 + 4;
  } while (lVar3 * 4 != lVar5);
  return -1;
}



// FUNCTION 1479456c6 FUN_1479456c6 body=209 status=ok
// SIG undefined FUN_1479456c6(void)

undefined8 FUN_1479456c6(undefined8 *param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  
  plVar2 = (longlong *)param_1[1];
  lVar5 = plVar2[3];
  lVar3 = -1;
  if ((longlong)(int)lVar5 != 0) {
    lVar6 = plVar2[2];
    iVar4 = -1;
    lVar7 = 0;
    fVar9 = -1.0;
    do {
      iVar1 = *(int *)(lVar6 + lVar7);
      fVar8 = (float)FUN_14792f4f2(*param_1,iVar1);
      if (fVar8 <= fVar9) {
        fVar8 = fVar9;
        iVar1 = iVar4;
      }
      iVar4 = iVar1;
      lVar7 = lVar7 + 4;
      fVar9 = fVar8;
    } while ((longlong)(int)lVar5 * 4 != lVar7);
    plVar2 = (longlong *)param_1[1];
    if ((longlong)(int)plVar2[3] != 0) {
      lVar6 = 0;
      lVar5 = 0;
      do {
        if (*(int *)(plVar2[2] + lVar6) == iVar4) {
          lVar3 = lVar5 >> 0x20;
          break;
        }
        lVar5 = lVar5 + 0x100000000;
        lVar6 = lVar6 + 4;
      } while ((longlong)(int)plVar2[3] * 4 != lVar6);
    }
  }
  return *(undefined8 *)(*plVar2 + lVar3 * 8);
}



// FUNCTION 147945798 FUN_147945798 body=232 status=ok
// SIG undefined FUN_147945798(void)

void FUN_147945798(undefined8 *param_1,undefined8 *param_2)

{
  float fVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  float *pfVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  float *pfVar8;
  float fVar9;
  
  iVar6 = *(int *)(param_2 + 3) + 1;
  *(int *)(param_2 + 3) = iVar6;
  if (iVar6 < *(int *)(param_2 + 2)) {
    do {
      uVar2 = *(undefined8 *)(param_2[1] + (longlong)iVar6 * 0x18);
      iVar6 = FUN_1479455b0(*param_1,uVar2);
      fVar9 = (float)FUN_14792f4f2(*param_2,*(undefined4 *)
                                             (param_2[1] + 8 +
                                             (longlong)*(int *)(param_2 + 3) * 0x18),
                                   *(undefined4 *)
                                    (*(longlong *)
                                      (param_2[1] + (longlong)*(int *)(param_2 + 3) * 0x18) + 0x10))
      ;
      uVar3 = *param_1;
      uVar7 = FUN_145cd07f8();
      pfVar8 = (float *)FUN_14792a902(uVar3,uVar7,uVar2);
      cVar5 = FUN_1479381c0(uVar2);
      pfVar4 = *(float **)(param_2[1] + 0x10 + (longlong)*(int *)(param_2 + 3) * 0x18);
      if (cVar5 == '\0') {
        *pfVar8 = *pfVar4;
      }
      else {
        fVar1 = *pfVar4;
        if (iVar6 == -1) {
          *pfVar8 = fVar9 * fVar1;
        }
        else {
          *pfVar8 = fVar1 * fVar9 + *pfVar8;
        }
      }
      iVar6 = *(int *)(param_2 + 3) + 1;
      *(int *)(param_2 + 3) = iVar6;
    } while (iVar6 < *(int *)(param_2 + 2));
  }
  return;
}



// FUNCTION 147945880 FUN_147945880 body=132 status=ok
// SIG undefined FUN_147945880(void)

void FUN_147945880(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  float *pfVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 uVar5;
  float *pfVar6;
  float fVar7;
  
  iVar4 = *(int *)(param_2 + 3) + 1;
  *(int *)(param_2 + 3) = iVar4;
  if (iVar4 < *(int *)(param_2 + 2)) {
    do {
      uVar1 = *(undefined8 *)(param_2[1] + (longlong)iVar4 * 0x18);
      pfVar2 = *(float **)(param_2[1] + 0x10 + (longlong)iVar4 * 0x18);
      uVar3 = *param_1;
      uVar5 = FUN_145cd07f8();
      pfVar6 = (float *)FUN_14792a902(uVar3,uVar5,uVar1);
      fVar7 = (float)FUN_14792fa86(*param_2,*(undefined4 *)
                                             (param_2[1] + 8 +
                                             (longlong)*(int *)(param_2 + 3) * 0x18));
      *pfVar6 = fVar7 * *pfVar2;
      iVar4 = *(int *)(param_2 + 3) + 1;
      *(int *)(param_2 + 3) = iVar4;
    } while (iVar4 < *(int *)(param_2 + 2));
  }
  return;
}



// FUNCTION 147945904 FUN_147945904 body=160 status=ok
// SIG undefined FUN_147945904(void)

void FUN_147945904(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  float *pfVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 uVar5;
  float *pfVar6;
  float fVar7;
  
  iVar4 = *(int *)(param_2 + 3) + 1;
  *(int *)(param_2 + 3) = iVar4;
  if (iVar4 < *(int *)(param_2 + 2)) {
    do {
      uVar1 = *(undefined8 *)(param_2[1] + (longlong)iVar4 * 0x18);
      pfVar2 = *(float **)(param_2[1] + 0x10 + (longlong)iVar4 * 0x18);
      iVar4 = FUN_1479455b0(*param_1,uVar1);
      uVar3 = *param_1;
      uVar5 = FUN_145cd07f8();
      pfVar6 = (float *)FUN_14792a902(uVar3,uVar5,uVar1);
      fVar7 = (float)FUN_14792fa86(*param_2,*(undefined4 *)
                                             (param_2[1] + 8 +
                                             (longlong)*(int *)(param_2 + 3) * 0x18));
      fVar7 = *pfVar2 * fVar7;
      if (iVar4 != -1) {
        fVar7 = fVar7 + *pfVar6;
      }
      *pfVar6 = fVar7;
      iVar4 = *(int *)(param_2 + 3) + 1;
      *(int *)(param_2 + 3) = iVar4;
    } while (iVar4 < *(int *)(param_2 + 2));
  }
  return;
}



// FUNCTION 1479459a4 FUN_1479459a4 body=120 status=ok
// SIG undefined FUN_1479459a4(void)

void FUN_1479459a4(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  float *pfVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 uVar5;
  float *pfVar6;
  
  iVar4 = *(int *)(param_2 + 0x18) + 1;
  *(int *)(param_2 + 0x18) = iVar4;
  if (iVar4 < *(int *)(param_2 + 0x10)) {
    do {
      uVar1 = *(undefined8 *)(*(longlong *)(param_2 + 8) + (longlong)iVar4 * 0x18);
      pfVar2 = *(float **)(*(longlong *)(param_2 + 8) + 0x10 + (longlong)iVar4 * 0x18);
      FUN_1479455b0(*param_1,uVar1);
      uVar3 = *param_1;
      uVar5 = FUN_145cd07f8();
      pfVar6 = (float *)FUN_14792a902(uVar3,uVar5,uVar1);
      *pfVar6 = *pfVar6 - *pfVar2;
      iVar4 = *(int *)(param_2 + 0x18) + 1;
      *(int *)(param_2 + 0x18) = iVar4;
    } while (iVar4 < *(int *)(param_2 + 0x10));
  }
  return;
}



// FUNCTION 147945a1c FUN_147945a1c body=186 status=ok
// SIG undefined FUN_147945a1c(void)

void FUN_147945a1c(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  longlong *local_58;
  longlong local_50;
  undefined4 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((longlong)(int)param_2[1] != 0) {
    lVar2 = *param_2;
    lVar1 = (longlong)(int)param_2[1] * 0x30;
    local_60 = param_3;
    do {
      local_48 = 0xffffffff;
      local_58 = param_2;
      local_50 = lVar2;
      FUN_147945ce4(&local_60,&local_58);
      lVar2 = lVar2 + 0x30;
      lVar1 = lVar1 + -0x30;
    } while (lVar1 != 0);
  }
  local_50 = param_2[2];
  local_48 = (undefined4)param_2[3];
  local_40 = 0xffffffff;
  local_60 = param_3;
  local_58 = param_2;
  FUN_147945d84();
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147945ad8 FUN_147945ad8 body=191 status=ok
// SIG undefined FUN_147945ad8(void)

void FUN_147945ad8(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  longlong *local_58;
  longlong local_50;
  undefined4 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_60 = param_3;
  if ((longlong)(int)param_2[1] != 0) {
    lVar2 = *param_2;
    lVar1 = (longlong)(int)param_2[1] * 0x30;
    local_68 = param_1;
    do {
      local_48 = 0xffffffff;
      local_58 = param_2;
      local_50 = lVar2;
      FUN_147945e30(&local_68,&local_58);
      lVar2 = lVar2 + 0x30;
      lVar1 = lVar1 + -0x30;
    } while (lVar1 != 0);
  }
  local_50 = param_2[2];
  local_48 = (undefined4)param_2[3];
  local_40 = 0xffffffff;
  local_68 = param_3;
  local_58 = param_2;
  FUN_1479460fc();
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147945b98 FUN_147945b98 body=91 status=ok
// SIG undefined FUN_147945b98(void)

void FUN_147945b98(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = *(undefined8 *)(param_2 + 0x10);
  local_18 = *(undefined4 *)(param_2 + 0x18);
  local_10 = 0xffffffff;
  local_30 = param_3;
  local_28 = param_2;
  FUN_1479461da(&local_30,&local_28);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147945bf4 FUN_147945bf4 body=91 status=ok
// SIG undefined FUN_147945bf4(void)

void FUN_147945bf4(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = *(undefined8 *)(param_2 + 0x10);
  local_18 = *(undefined4 *)(param_2 + 0x18);
  local_10 = 0xffffffff;
  local_30 = param_3;
  local_28 = param_2;
  FUN_147946268(&local_30,&local_28);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147945c50 FUN_147945c50 body=91 status=ok
// SIG undefined FUN_147945c50(void)

void FUN_147945c50(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = *(undefined8 *)(param_2 + 0x10);
  local_18 = *(undefined4 *)(param_2 + 0x18);
  local_10 = 0xffffffff;
  local_30 = param_3;
  local_28 = param_2;
  FUN_14794630c(&local_30,&local_28);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147945cac FUN_147945cac body=56 status=ok
// SIG undefined FUN_147945cac(void)

void FUN_147945cac(undefined8 param_1,undefined8 param_2,undefined8 param_3,float param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  if (param_4 <= 0.5) {
    param_3 = param_2;
  }
  uVar1 = FUN_145cd0522();
  FUN_1449b16b6(uVar1,param_5,param_3,1);
  return;
}



// FUNCTION 147945ce4 FUN_147945ce4 body=159 status=ok
// SIG undefined FUN_147945ce4(void)

void FUN_147945ce4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int *piVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  int *piVar8;
  float fVar9;
  
  uVar1 = *(undefined8 *)(param_2[1] + 0x20);
  cVar5 = FUN_1479381c0(uVar1);
  uVar2 = *param_1;
  uVar7 = FUN_145cd0522();
  piVar8 = (int *)FUN_14792a902(uVar2,uVar7,uVar1);
  if (cVar5 == '\0') {
    *piVar8 = **(int **)(*(longlong *)param_2[1] +
                        (longlong)*(int *)((longlong)param_2[1] + 0x2c) * 8);
  }
  else {
    while( true ) {
      iVar6 = *(int *)(param_2 + 2) + 1;
      *(int *)(param_2 + 2) = iVar6;
      plVar4 = (longlong *)param_2[1];
      if ((int)plVar4[1] <= iVar6) break;
      piVar3 = *(int **)(*plVar4 + (longlong)iVar6 * 8);
      fVar9 = (float)FUN_14792fa86(*param_2,*(undefined4 *)(plVar4[2] + (longlong)iVar6 * 4));
      iVar6 = (int)((float)*piVar3 * fVar9);
      if (*(int *)(param_2 + 2) != 0) {
        iVar6 = iVar6 + *piVar8;
      }
      *piVar8 = iVar6;
    }
  }
  return;
}



// FUNCTION 147945d84 FUN_147945d84 body=171 status=ok
// SIG undefined FUN_147945d84(void)

void FUN_147945d84(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  int *piVar7;
  int iVar8;
  float fVar9;
  
  iVar5 = *(int *)(param_2 + 3) + 1;
  *(int *)(param_2 + 3) = iVar5;
  if (iVar5 < *(int *)(param_2 + 2)) {
    do {
      piVar1 = *(int **)(param_2[1] + 0x10 + (longlong)iVar5 * 0x18);
      fVar9 = (float)FUN_14792fa86(*param_2,*(undefined4 *)(param_2[1] + 8 + (longlong)iVar5 * 0x18)
                                  );
      uVar2 = *(undefined8 *)(param_2[1] + (longlong)*(int *)(param_2 + 3) * 0x18);
      cVar4 = FUN_1479381c0(uVar2);
      uVar3 = *param_1;
      uVar6 = FUN_145cd0522();
      piVar7 = (int *)FUN_14792a902(uVar3,uVar6,uVar2);
      iVar5 = *piVar1;
      iVar8 = (int)((float)iVar5 * fVar9);
      if (cVar4 == '\0') {
        iVar8 = iVar5;
      }
      *piVar7 = iVar8;
      iVar5 = *(int *)(param_2 + 3) + 1;
      *(int *)(param_2 + 3) = iVar5;
    } while (iVar5 < *(int *)(param_2 + 2));
  }
  return;
}



// FUNCTION 147945e30 FUN_147945e30 body=227 status=ok
// SIG undefined FUN_147945e30(void)

void FUN_147945e30(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  int *piVar7;
  int *piVar8;
  longlong lVar9;
  float fVar10;
  
  uVar1 = *(undefined8 *)(param_2[1] + 0x20);
  cVar3 = FUN_1479381c0(uVar1);
  iVar4 = FUN_147945f14(*(undefined8 *)(param_1 + 8),uVar1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar6 = FUN_145cd0522();
  piVar7 = (int *)FUN_14792a902(uVar2,uVar6,uVar1);
  if (cVar3 == '\0') {
    piVar8 = (int *)FUN_14794602a(param_2);
LAB_147945eff:
    *piVar7 = *piVar8;
  }
  else {
    iVar5 = *(int *)(param_2 + 2) + 1;
    *(int *)(param_2 + 2) = iVar5;
    lVar9 = param_2[1];
    if (iVar5 < *(int *)(lVar9 + 8)) {
      do {
        fVar10 = (float)FUN_14792f4f2(*param_2,*(undefined4 *)
                                                (*(longlong *)(lVar9 + 0x10) + (longlong)iVar5 * 4),
                                      *(undefined4 *)(*(longlong *)(lVar9 + 0x20) + 0x10));
        piVar8 = *(int **)(*(longlong *)param_2[1] + (longlong)*(int *)(param_2 + 2) * 8);
        if (0.99999 <= fVar10) goto LAB_147945eff;
        iVar5 = (int)(fVar10 * (float)*piVar8);
        if (*(int *)(param_2 + 2) != 0 || iVar4 != -1) {
          iVar5 = iVar5 + *piVar7;
        }
        *piVar7 = iVar5;
        iVar5 = *(int *)(param_2 + 2) + 1;
        *(int *)(param_2 + 2) = iVar5;
        lVar9 = param_2[1];
      } while (iVar5 < *(int *)(lVar9 + 8));
    }
  }
  return;
}



// FUNCTION 147945f14 FUN_147945f14 body=278 status=ok
// SIG undefined FUN_147945f14(void)

int FUN_147945f14(longlong *param_1,longlong *param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  
  uVar2 = FUN_145cd0522();
  lVar3 = param_1[7];
  if ((longlong)(int)lVar3 == 0) {
    return -1;
  }
  lVar6 = param_1[6];
  uVar4 = 0;
  lVar5 = 0;
  while (cVar1 = FUN_1400063ec(lVar6 + uVar4,uVar2), cVar1 == '\0') {
    lVar5 = lVar5 + 0x100000000;
    uVar4 = uVar4 + 8;
    if ((longlong)(int)lVar3 * 8 == uVar4) {
      return -1;
    }
  }
  if ((int)(~uVar4 >> 3) == 0) {
    return -1;
  }
  lVar6 = (lVar5 >> 0x20) * 0x10;
  lVar3 = (longlong)*(int *)(*param_1 + 8 + lVar6);
  if (lVar3 == 0) {
    return -1;
  }
  lVar5 = 0;
  do {
    if (*(int *)(*(longlong *)(*param_1 + lVar6) + lVar5) == (int)param_2[2]) {
      lVar3 = (longlong)*(int *)(param_1[2] + 8 + lVar6);
      if (lVar3 == 0) {
        return -1;
      }
      lVar6 = *(longlong *)(param_1[2] + lVar6);
      uVar4 = 0;
      while (((*(int *)(lVar6 + 0x10 + uVar4) != (int)param_2[2] ||
              (*(longlong *)(lVar6 + 8 + uVar4) != param_2[1])) ||
             (*(longlong *)(lVar6 + uVar4) != *param_2))) {
        uVar4 = uVar4 + 0x14;
        if (lVar3 * 0x14 == uVar4) {
          return -1;
        }
      }
      return (int)(uVar4 >> 2) * -0x33333333;
    }
    lVar5 = lVar5 + 4;
  } while (lVar3 * 4 != lVar5);
  return -1;
}



// FUNCTION 14794602a FUN_14794602a body=209 status=ok
// SIG undefined FUN_14794602a(void)

undefined8 FUN_14794602a(undefined8 *param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  
  plVar2 = (longlong *)param_1[1];
  lVar5 = plVar2[3];
  lVar3 = -1;
  if ((longlong)(int)lVar5 != 0) {
    lVar6 = plVar2[2];
    iVar4 = -1;
    lVar7 = 0;
    fVar9 = -1.0;
    do {
      iVar1 = *(int *)(lVar6 + lVar7);
      fVar8 = (float)FUN_14792f4f2(*param_1,iVar1);
      if (fVar8 <= fVar9) {
        fVar8 = fVar9;
        iVar1 = iVar4;
      }
      iVar4 = iVar1;
      lVar7 = lVar7 + 4;
      fVar9 = fVar8;
    } while ((longlong)(int)lVar5 * 4 != lVar7);
    plVar2 = (longlong *)param_1[1];
    if ((longlong)(int)plVar2[3] != 0) {
      lVar6 = 0;
      lVar5 = 0;
      do {
        if (*(int *)(plVar2[2] + lVar6) == iVar4) {
          lVar3 = lVar5 >> 0x20;
          break;
        }
        lVar5 = lVar5 + 0x100000000;
        lVar6 = lVar6 + 4;
      } while ((longlong)(int)plVar2[3] * 4 != lVar6);
    }
  }
  return *(undefined8 *)(*plVar2 + lVar3 * 8);
}



// FUNCTION 1479460fc FUN_1479460fc body=221 status=ok
// SIG undefined FUN_1479460fc(void)

void FUN_1479460fc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int *piVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  int *piVar8;
  float fVar9;
  
  iVar5 = *(int *)(param_2 + 3) + 1;
  *(int *)(param_2 + 3) = iVar5;
  if (iVar5 < *(int *)(param_2 + 2)) {
    do {
      uVar1 = *(undefined8 *)(param_2[1] + (longlong)iVar5 * 0x18);
      iVar5 = FUN_147945f14(*param_1,uVar1);
      fVar9 = (float)FUN_14792f4f2(*param_2,*(undefined4 *)
                                             (param_2[1] + 8 +
                                             (longlong)*(int *)(param_2 + 3) * 0x18),
                                   *(undefined4 *)
                                    (*(longlong *)
                                      (param_2[1] + (longlong)*(int *)(param_2 + 3) * 0x18) + 0x10))
      ;
      uVar2 = *param_1;
      uVar7 = FUN_145cd0522();
      piVar8 = (int *)FUN_14792a902(uVar2,uVar7,uVar1);
      cVar4 = FUN_1479381c0(uVar1);
      piVar3 = *(int **)(param_2[1] + 0x10 + (longlong)*(int *)(param_2 + 3) * 0x18);
      if (cVar4 == '\0') {
        iVar6 = *piVar3;
      }
      else {
        iVar6 = (int)(fVar9 * (float)*piVar3);
        if (iVar5 != -1) {
          iVar6 = iVar6 + *piVar8;
        }
      }
      *piVar8 = iVar6;
      iVar5 = *(int *)(param_2 + 3) + 1;
      *(int *)(param_2 + 3) = iVar5;
    } while (iVar5 < *(int *)(param_2 + 2));
  }
  return;
}



// FUNCTION 1479461da FUN_1479461da body=141 status=ok
// SIG undefined FUN_1479461da(void)

void FUN_1479461da(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  int *piVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 uVar5;
  int *piVar6;
  float fVar7;
  
  iVar4 = *(int *)(param_2 + 3) + 1;
  *(int *)(param_2 + 3) = iVar4;
  if (iVar4 < *(int *)(param_2 + 2)) {
    do {
      uVar1 = *(undefined8 *)(param_2[1] + (longlong)iVar4 * 0x18);
      piVar2 = *(int **)(param_2[1] + 0x10 + (longlong)iVar4 * 0x18);
      uVar3 = *param_1;
      uVar5 = FUN_145cd0522();
      piVar6 = (int *)FUN_14792a902(uVar3,uVar5,uVar1);
      fVar7 = (float)FUN_14792fa86(*param_2,*(undefined4 *)
                                             (param_2[1] + 8 +
                                             (longlong)*(int *)(param_2 + 3) * 0x18));
      *piVar6 = (int)((float)*piVar2 * fVar7);
      iVar4 = *(int *)(param_2 + 3) + 1;
      *(int *)(param_2 + 3) = iVar4;
    } while (iVar4 < *(int *)(param_2 + 2));
  }
  return;
}



// FUNCTION 147946268 FUN_147946268 body=163 status=ok
// SIG undefined FUN_147946268(void)

void FUN_147946268(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  int *piVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  int *piVar7;
  float fVar8;
  
  iVar4 = *(int *)(param_2 + 3) + 1;
  *(int *)(param_2 + 3) = iVar4;
  if (iVar4 < *(int *)(param_2 + 2)) {
    do {
      uVar1 = *(undefined8 *)(param_2[1] + (longlong)iVar4 * 0x18);
      piVar2 = *(int **)(param_2[1] + 0x10 + (longlong)iVar4 * 0x18);
      iVar4 = FUN_147945f14(*param_1,uVar1);
      uVar3 = *param_1;
      uVar6 = FUN_145cd0522();
      piVar7 = (int *)FUN_14792a902(uVar3,uVar6,uVar1);
      fVar8 = (float)FUN_14792fa86(*param_2,*(undefined4 *)
                                             (param_2[1] + 8 +
                                             (longlong)*(int *)(param_2 + 3) * 0x18));
      iVar5 = (int)((float)*piVar2 * fVar8);
      if (iVar4 != -1) {
        iVar5 = iVar5 + *piVar7;
      }
      *piVar7 = iVar5;
      iVar4 = *(int *)(param_2 + 3) + 1;
      *(int *)(param_2 + 3) = iVar4;
    } while (iVar4 < *(int *)(param_2 + 2));
  }
  return;
}



// FUNCTION 14794630c FUN_14794630c body=112 status=ok
// SIG undefined FUN_14794630c(void)

void FUN_14794630c(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  int *piVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 uVar5;
  int *piVar6;
  
  iVar4 = *(int *)(param_2 + 0x18) + 1;
  *(int *)(param_2 + 0x18) = iVar4;
  if (iVar4 < *(int *)(param_2 + 0x10)) {
    do {
      uVar1 = *(undefined8 *)(*(longlong *)(param_2 + 8) + (longlong)iVar4 * 0x18);
      piVar2 = *(int **)(*(longlong *)(param_2 + 8) + 0x10 + (longlong)iVar4 * 0x18);
      FUN_147945f14(*param_1,uVar1);
      uVar3 = *param_1;
      uVar5 = FUN_145cd0522();
      piVar6 = (int *)FUN_14792a902(uVar3,uVar5,uVar1);
      *piVar6 = *piVar6 - *piVar2;
      iVar4 = *(int *)(param_2 + 0x18) + 1;
      *(int *)(param_2 + 0x18) = iVar4;
    } while (iVar4 < *(int *)(param_2 + 0x10));
  }
  return;
}



// FUNCTION 14794637c FUN_14794637c body=152 status=ok
// SIG undefined FUN_14794637c(void)

void FUN_14794637c(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = param_2[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar1 = *param_2;
    lVar4 = 0;
    do {
      uVar2 = *(undefined8 *)(lVar1 + 0x20 + lVar4);
      FUN_1479381c0(uVar2);
      FUN_14794661c(param_3,uVar2,
                    *(undefined8 *)
                     (*(longlong *)(lVar1 + lVar4) + (longlong)*(int *)(lVar1 + 0x2c + lVar4) * 8));
      lVar4 = lVar4 + 0x30;
    } while ((longlong)(int)lVar3 * 0x30 != lVar4);
  }
  lVar3 = param_2[3];
  if (0 < (longlong)(int)lVar3) {
    lVar1 = param_2[2];
    lVar4 = 0;
    do {
      FUN_14794661c(param_3,*(undefined8 *)(lVar1 + lVar4),*(undefined8 *)(lVar1 + 0x10 + lVar4));
      lVar4 = lVar4 + 0x18;
    } while ((longlong)(int)lVar3 * 0x18 != lVar4);
  }
  return;
}



// FUNCTION 147946414 FUN_147946414 body=186 status=ok
// SIG undefined FUN_147946414(void)

void FUN_147946414(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  longlong *local_58;
  longlong local_50;
  undefined4 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((longlong)(int)param_2[1] != 0) {
    lVar2 = *param_2;
    lVar1 = (longlong)(int)param_2[1] * 0x30;
    local_60 = param_3;
    do {
      local_48 = 0xffffffff;
      local_58 = param_2;
      local_50 = lVar2;
      FUN_1479467f2(&local_60,&local_58);
      lVar2 = lVar2 + 0x30;
      lVar1 = lVar1 + -0x30;
    } while (lVar1 != 0);
  }
  local_50 = param_2[2];
  local_48 = (undefined4)param_2[3];
  local_40 = 0xffffffff;
  local_60 = param_3;
  local_58 = param_2;
  FUN_14794691a();
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479464d0 FUN_1479464d0 body=91 status=ok
// SIG undefined FUN_1479464d0(void)

void FUN_1479464d0(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = *(undefined8 *)(param_2 + 0x10);
  local_18 = *(undefined4 *)(param_2 + 0x18);
  local_10 = 0xffffffff;
  local_30 = param_3;
  local_28 = param_2;
  FUN_147946b28(&local_30,&local_28);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14794652c FUN_14794652c body=91 status=ok
// SIG undefined FUN_14794652c(void)

void FUN_14794652c(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = *(undefined8 *)(param_2 + 0x10);
  local_18 = *(undefined4 *)(param_2 + 0x18);
  local_10 = 0xffffffff;
  local_30 = param_3;
  local_28 = param_2;
  FUN_147946ba4(&local_30,&local_28);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147946588 FUN_147946588 body=91 status=ok
// SIG undefined FUN_147946588(void)

void FUN_147946588(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = *(undefined8 *)(param_2 + 0x10);
  local_18 = *(undefined4 *)(param_2 + 0x18);
  local_10 = 0xffffffff;
  local_30 = param_3;
  local_28 = param_2;
  FUN_147946c6c(&local_30,&local_28);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479465e4 FUN_1479465e4 body=56 status=ok
// SIG undefined FUN_1479465e4(void)

void FUN_1479465e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,float param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  if (param_4 <= 0.5) {
    param_3 = param_2;
  }
  uVar1 = FUN_145cd0626();
  FUN_1449b16b6(uVar1,param_5,param_3,1);
  return;
}



// FUNCTION 14794661c FUN_14794661c body=84 status=ok
// SIG undefined FUN_14794661c(void)

void FUN_14794661c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_145cd0626();
  lVar2 = FUN_147946670(param_1,uVar1,param_2);
  if (lVar2 != 0) {
    uVar1 = FUN_145cd0626();
    FUN_1449b16b6(uVar1,lVar2,param_3,1);
    return;
  }
  return;
}



// FUNCTION 147946670 FUN_147946670 body=384 status=ok
// SIG undefined FUN_147946670(void)

undefined8 FUN_147946670(longlong *param_1,longlong *param_2,longlong *param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar5 = FUN_147935920();
  lVar2 = param_1[2];
  lVar9 = (longlong)iVar5 * 0x10;
  lVar8 = *(longlong *)(lVar2 + lVar9);
  iVar5 = *(int *)(lVar2 + 8 + lVar9);
  lVar11 = (longlong)iVar5;
  if (lVar11 != 0) {
    uVar7 = 0;
    do {
      if (((*(int *)(lVar8 + 0x10 + uVar7) == (int)param_3[2]) &&
          (*(longlong *)(lVar8 + 8 + uVar7) == param_3[1])) &&
         (*(longlong *)(lVar8 + uVar7) == *param_3)) {
        if ((int)(uVar7 >> 2) * -0x33333333 != -1) {
          uVar6 = 0;
          goto LAB_1479467bd;
        }
        break;
      }
      uVar7 = uVar7 + 0x14;
    } while (lVar11 * 0x14 != uVar7);
  }
  plVar10 = (longlong *)(lVar2 + lVar9);
  *(uint *)(plVar10 + 1) = iVar5 + 1U;
  if (*(uint *)((longlong)plVar10 + 0xc) < iVar5 + 1U) {
    FUN_147935bd4(plVar10,iVar5);
    lVar8 = *plVar10;
  }
  *(int *)(lVar8 + 0x10 + lVar11 * 0x14) = (int)param_3[2];
  uVar3 = *(undefined4 *)((longlong)param_3 + 4);
  lVar2 = param_3[1];
  uVar4 = *(undefined4 *)((longlong)param_3 + 0xc);
  puVar1 = (undefined4 *)(lVar8 + lVar11 * 0x14);
  *puVar1 = (int)*param_3;
  puVar1[1] = uVar3;
  puVar1[2] = (int)lVar2;
  puVar1[3] = uVar4;
  local_48 = CONCAT44(local_48._4_4_,(int)param_3[2]);
  FUN_144aa221c(*param_1 + lVar9);
  lVar2 = param_1[4];
  plVar10 = (longlong *)(lVar2 + lVar9);
  FUN_14791f98e(&local_48,param_2);
  iVar5 = *(int *)(lVar2 + 8 + lVar9);
  *(uint *)(lVar2 + 8 + lVar9) = iVar5 + 1U;
  if (*(uint *)(lVar2 + 0xc + lVar9) < iVar5 + 1U) {
    FUN_14791fac6(plVar10,iVar5);
  }
  lVar2 = *plVar10;
  lVar8 = (longlong)iVar5 * 0x10;
  *(undefined8 *)(lVar2 + lVar8) = 0;
  *(undefined8 *)(lVar2 + lVar8) = local_48;
  local_48 = 0;
  *(undefined4 *)(lVar2 + 8 + lVar8) = local_40;
  *(undefined4 *)(lVar2 + 0xc + lVar8) = local_3c;
  lVar2 = *plVar10;
  (**(code **)(*param_2 + 0x2e8))(param_2,*(undefined8 *)(lVar2 + lVar8),1);
  uVar6 = *(undefined8 *)(lVar2 + lVar8);
LAB_1479467bd:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479467f2 FUN_1479467f2 body=86 status=ok
// SIG undefined FUN_1479467f2(void)

void FUN_1479467f2(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *(undefined8 *)(*(longlong *)(param_2 + 8) + 0x20);
  uVar3 = *param_1;
  uVar1 = FUN_145cd0626();
  uVar2 = FUN_14792a902(uVar3,uVar1,uVar2);
  uVar3 = FUN_145cd0626();
  uVar1 = FUN_147946848(param_2);
  FUN_1449b16b6(uVar3,uVar2,uVar1,1);
  return;
}



// FUNCTION 147946848 FUN_147946848 body=209 status=ok
// SIG undefined FUN_147946848(void)

undefined8 FUN_147946848(undefined8 *param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  
  plVar2 = (longlong *)param_1[1];
  lVar5 = plVar2[3];
  lVar3 = -1;
  if ((longlong)(int)lVar5 != 0) {
    lVar6 = plVar2[2];
    iVar4 = -1;
    lVar7 = 0;
    fVar9 = -1.0;
    do {
      iVar1 = *(int *)(lVar6 + lVar7);
      fVar8 = (float)FUN_14792f4f2(*param_1,iVar1);
      if (fVar8 <= fVar9) {
        fVar8 = fVar9;
        iVar1 = iVar4;
      }
      iVar4 = iVar1;
      lVar7 = lVar7 + 4;
      fVar9 = fVar8;
    } while ((longlong)(int)lVar5 * 4 != lVar7);
    plVar2 = (longlong *)param_1[1];
    if ((longlong)(int)plVar2[3] != 0) {
      lVar6 = 0;
      lVar5 = 0;
      do {
        if (*(int *)(plVar2[2] + lVar6) == iVar4) {
          lVar3 = lVar5 >> 0x20;
          break;
        }
        lVar5 = lVar5 + 0x100000000;
        lVar6 = lVar6 + 4;
      } while ((longlong)(int)plVar2[3] * 4 != lVar6);
    }
  }
  return *(undefined8 *)(*plVar2 + lVar3 * 8);
}



// FUNCTION 14794691a FUN_14794691a body=248 status=ok
// SIG undefined FUN_14794691a(void)

void FUN_14794691a(undefined8 *param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  float fVar7;
  
  iVar3 = (int)param_2[3] + 1;
  *(int *)(param_2 + 3) = iVar3;
  if (iVar3 < (int)param_2[2]) {
    do {
      uVar5 = *(undefined8 *)(param_2[1] + (longlong)iVar3 * 0x18);
      iVar3 = FUN_147946a12(*param_1,uVar5);
      fVar7 = (float)FUN_14792f4f2(*param_2,*(undefined4 *)
                                             (param_2[1] + 8 + (longlong)(int)param_2[3] * 0x18),
                                   *(undefined4 *)
                                    (*(longlong *)(param_2[1] + (longlong)(int)param_2[3] * 0x18) +
                                    0x10));
      if ((iVar3 == -1) || (1e-05 < fVar7)) {
        uVar1 = *param_1;
        uVar4 = FUN_145cd0626();
        uVar5 = FUN_14792a902(uVar1,uVar4,uVar5);
        lVar6 = (longlong)(int)param_2[3];
        lVar2 = param_2[1];
        if ((iVar3 == -1) ||
           (*(int *)(*(longlong *)(*param_2 + 0x60) +
                    (longlong)*(int *)(*(longlong *)(lVar2 + lVar6 * 0x18) + 0x10) * 4) ==
            *(int *)(lVar2 + 8 + lVar6 * 0x18))) {
          uVar1 = *(undefined8 *)(lVar2 + 0x10 + lVar6 * 0x18);
          uVar4 = FUN_145cd0626();
          FUN_1449b16b6(uVar4,uVar5,uVar1,1);
        }
      }
      iVar3 = (int)param_2[3] + 1;
      *(int *)(param_2 + 3) = iVar3;
    } while (iVar3 < (int)param_2[2]);
  }
  return;
}



// FUNCTION 147946a12 FUN_147946a12 body=278 status=ok
// SIG undefined FUN_147946a12(void)

int FUN_147946a12(longlong *param_1,longlong *param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  
  uVar2 = FUN_145cd0626();
  lVar3 = param_1[7];
  if ((longlong)(int)lVar3 == 0) {
    return -1;
  }
  lVar6 = param_1[6];
  uVar4 = 0;
  lVar5 = 0;
  while (cVar1 = FUN_1400063ec(lVar6 + uVar4,uVar2), cVar1 == '\0') {
    lVar5 = lVar5 + 0x100000000;
    uVar4 = uVar4 + 8;
    if ((longlong)(int)lVar3 * 8 == uVar4) {
      return -1;
    }
  }
  if ((int)(~uVar4 >> 3) == 0) {
    return -1;
  }
  lVar6 = (lVar5 >> 0x20) * 0x10;
  lVar3 = (longlong)*(int *)(*param_1 + 8 + lVar6);
  if (lVar3 == 0) {
    return -1;
  }
  lVar5 = 0;
  do {
    if (*(int *)(*(longlong *)(*param_1 + lVar6) + lVar5) == (int)param_2[2]) {
      lVar3 = (longlong)*(int *)(param_1[2] + 8 + lVar6);
      if (lVar3 == 0) {
        return -1;
      }
      lVar6 = *(longlong *)(param_1[2] + lVar6);
      uVar4 = 0;
      while (((*(int *)(lVar6 + 0x10 + uVar4) != (int)param_2[2] ||
              (*(longlong *)(lVar6 + 8 + uVar4) != param_2[1])) ||
             (*(longlong *)(lVar6 + uVar4) != *param_2))) {
        uVar4 = uVar4 + 0x14;
        if (lVar3 * 0x14 == uVar4) {
          return -1;
        }
      }
      return (int)(uVar4 >> 2) * -0x33333333;
    }
    lVar5 = lVar5 + 4;
  } while (lVar3 * 4 != lVar5);
  return -1;
}



// FUNCTION 147946b28 FUN_147946b28 body=124 status=ok
// SIG undefined FUN_147946b28(void)

void FUN_147946b28(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  iVar2 = *(int *)(param_2 + 0x18) + 1;
  *(int *)(param_2 + 0x18) = iVar2;
  if (iVar2 < *(int *)(param_2 + 0x10)) {
    do {
      uVar4 = *(undefined8 *)(*(longlong *)(param_2 + 8) + (longlong)iVar2 * 0x18);
      uVar1 = *(undefined8 *)(*(longlong *)(param_2 + 8) + 0x10 + (longlong)iVar2 * 0x18);
      uVar5 = *param_1;
      uVar3 = FUN_145cd0626();
      uVar4 = FUN_14792a902(uVar5,uVar3,uVar4);
      uVar5 = FUN_145cd0626();
      FUN_1449b16b6(uVar5,uVar4,uVar1,1);
      iVar2 = *(int *)(param_2 + 0x18) + 1;
      *(int *)(param_2 + 0x18) = iVar2;
    } while (iVar2 < *(int *)(param_2 + 0x10));
  }
  return;
}



// FUNCTION 147946ba4 FUN_147946ba4 body=199 status=ok
// SIG undefined FUN_147946ba4(void)

void FUN_147946ba4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  float fVar6;
  
  iVar2 = *(int *)(param_2 + 3) + 1;
  *(int *)(param_2 + 3) = iVar2;
  if (iVar2 < *(int *)(param_2 + 2)) {
    do {
      uVar4 = *(undefined8 *)(param_2[1] + (longlong)iVar2 * 0x18);
      uVar1 = *(undefined8 *)(param_2[1] + 0x10 + (longlong)iVar2 * 0x18);
      iVar2 = FUN_147946a12(*param_1,uVar4);
      uVar5 = *param_1;
      uVar3 = FUN_145cd0626();
      uVar4 = FUN_14792a902(uVar5,uVar3,uVar4);
      fVar6 = (float)FUN_14792fa86(*param_2,*(undefined4 *)
                                             (param_2[1] + 8 +
                                             (longlong)*(int *)(param_2 + 3) * 0x18));
      if ((iVar2 == -1) || (0.5 < fVar6)) {
        uVar5 = FUN_145cd0626();
        FUN_1449b16b6(uVar5,uVar4,uVar1,1);
      }
      iVar2 = *(int *)(param_2 + 3) + 1;
      *(int *)(param_2 + 3) = iVar2;
    } while (iVar2 < *(int *)(param_2 + 2));
  }
  return;
}


