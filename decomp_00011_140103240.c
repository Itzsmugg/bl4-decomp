// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 140103240 FUN_140103240 body=820 status=ok
// SIG undefined FUN_140103240(void)

void FUN_140103240(longlong *param_1,longlong *param_2,longlong *param_3)

{
  code *pcVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  wchar_t *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  code **local_50;
  code *local_48;
  code *local_40;
  code *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  cVar2 = FUN_1448161ac(param_1 + 3);
  if (cVar2 != '\0') {
    cVar2 = FUN_144815c48(param_1 + 0x17);
    if (cVar2 == '\0') goto LAB_14010328f;
    if (param_3 == (longlong *)0x0) {
      uVar4 = 0;
    }
    else {
      uVar4 = (**(code **)(*param_3 + 0x18))(param_3);
    }
    if ((param_2 == (longlong *)0x0) || (lVar3 = (**(code **)(*param_2 + 8))(param_2), lVar3 == 0))
    {
LAB_140103511:
      lVar3 = 0;
    }
    else {
      if (DAT_14cac9ca8 == 0) {
        local_50 = &local_30;
        local_30 = FUN_141030f22;
        local_40 = FUN_14081d0ea;
        local_48 = FUN_14081d0ea;
        local_58 = &LAB_1478c0a72;
        local_60 = &LAB_1417b2375;
        local_68 = L"Engine";
        local_70 = 0x1000000000;
        local_78 = 0x10000004;
        local_80 = 8;
        local_88 = 0x390;
        FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
      }
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < *(int *)(DAT_14cac9ca8 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) != DAT_14cac9ca8 + 0x30))
      goto LAB_140103511;
    }
    cVar2 = FUN_1401038ca(param_1 + 0x17,uVar4,lVar3);
    if (cVar2 != '\0') goto LAB_14010328f;
  }
  *(byte *)(param_1 + 0x45) = *(byte *)(param_1 + 0x45) | 2;
LAB_14010328f:
  if ((*(byte *)(param_1 + 0x45) & 1) != 0) {
    cVar2 = FUN_144815c48(param_1 + 0x17);
    if (cVar2 == '\0') {
      if (*param_1 == 0) {
        lVar3 = FUN_140223847();
        if ((*param_1 != *(longlong *)(lVar3 + 0x20)) || ((int)param_1[1] != *(int *)(lVar3 + 0x28))
           ) {
          *param_1 = *(longlong *)(lVar3 + 0x20);
          *(undefined4 *)(param_1 + 1) = *(undefined4 *)(lVar3 + 0x28);
          param_1[2] = 0;
        }
      }
    }
    else {
      *(undefined1 *)((longlong)param_1 + 0x15f) = 1;
      plVar5 = (longlong *)param_1[0x2c];
      if (*(code **)(*plVar5 + 0x50) != FUN_144828418) {
        plVar5 = (longlong *)(**(code **)(*plVar5 + 0x50))();
      }
      FUN_1447a1fc0(plVar5);
      plVar5 = (longlong *)param_1[0x2c];
      pcVar1 = *(code **)(*plVar5 + 0x28);
      if (pcVar1 == FUN_14482841c) {
        plVar6 = plVar5 + 3;
        if (plVar5[5] != 0) {
          plVar6 = (longlong *)(plVar5[5] + 8);
        }
      }
      else if (pcVar1 == (code *)&LAB_14010c34c) {
        plVar6 = plVar5 + 2;
      }
      else {
        plVar6 = (longlong *)(*pcVar1)(plVar5);
      }
      if ((int)plVar6[1] < 2) {
        if (*param_1 == 0) {
          lVar3 = FUN_140223847();
          if ((*param_1 != *(longlong *)(lVar3 + 0x20)) ||
             ((int)param_1[1] != *(int *)(lVar3 + 0x28))) {
            *param_1 = *(longlong *)(lVar3 + 0x20);
            *(undefined4 *)(param_1 + 1) = *(undefined4 *)(lVar3 + 0x28);
            param_1[2] = 0;
          }
        }
        lVar3 = FUN_140103576(param_1);
        if (lVar3 != 0) {
          plVar5 = *(longlong **)(lVar3 + 0x18);
          plVar6 = (longlong *)param_1[0x2c];
          if (plVar6 != plVar5) {
            param_1[0x2c] = (longlong)plVar5;
            if (plVar5 != (longlong *)0x0) {
              (**(code **)(*plVar5 + 8))();
            }
            if (plVar6 != (longlong *)0x0) {
              (**(code **)(*plVar6 + 0x10))(plVar6);
            }
          }
          *(undefined4 *)(param_1 + 0x2d) = *(undefined4 *)(lVar3 + 0x20);
        }
      }
    }
  }
  lVar3 = FUN_140103576(param_1);
  if ((lVar3 != 0) && (*(char *)(lVar3 + 0x30) == '\x01')) {
    *(byte *)(param_1 + 0x45) = *(byte *)(param_1 + 0x45) | 2;
  }
  if ((local_28 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140103576 FUN_140103576 body=136 status=ok
// SIG undefined FUN_140103576(void)

longlong FUN_140103576(undefined8 *param_1)

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
    if (DAT_14cb8da98 == 0) {
      lVar1 = 0;
    }
    else {
      lVar1 = FUN_144815d88(DAT_14cb8da98,local_40);
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



// FUNCTION 140103600 FUN_140103600 body=57 status=ok
// SIG undefined FUN_140103600(void)

void FUN_140103600(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5f700 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5f700 = FUN_140002ddd(FUN_1464e73c3,uVar1,L"GbxIngredientList");
  }
  return;
}



// FUNCTION 14010363a FUN_14010363a body=57 status=ok
// SIG undefined FUN_14010363a(void)

void FUN_14010363a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb62690 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb62690 = FUN_140002ddd(FUN_1464f85f6,uVar1,L"GbxRecipeDef");
  }
  return;
}



// FUNCTION 140103674 FUN_140103674 body=123 status=ok
// SIG undefined FUN_140103674(void)

undefined4 FUN_140103674(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined4 uVar5;
  
  plVar3 = *(longlong **)(param_1 + 0x30);
  plVar4 = *(longlong **)(param_1 + 0x38);
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
  if (plVar3 == (longlong *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = (**(code **)(*plVar3 + 0x38))(plVar3);
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
  return uVar5;
}



// FUNCTION 1401036f0 FUN_1401036f0 body=204 status=ok
// SIG undefined FUN_1401036f0(void)

uint * FUN_1401036f0(uint *param_1,longlong *param_2)

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



// FUNCTION 1401037bc FUN_1401037bc body=269 status=ok
// SIG undefined FUN_1401037bc(void)

void FUN_1401037bc(longlong param_1,int param_2)

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



// FUNCTION 1401038ca FUN_1401038ca body=1819 status=ok
// SIG undefined FUN_1401038ca(void)

undefined8 FUN_1401038ca(longlong param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  code *pcVar2;
  longlong *plVar3;
  longlong *plVar4;
  char cVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined8 ****ppppuVar11;
  longlong lVar12;
  longlong lVar13;
  undefined8 ****ppppuVar14;
  undefined1 auStack_198 [40];
  undefined1 local_170 [40];
  undefined4 local_148;
  undefined1 local_140 [40];
  undefined4 local_118;
  char local_110 [16];
  longlong *local_100;
  undefined4 local_e8 [2];
  char local_e0;
  undefined8 local_d8;
  longlong *local_d0;
  undefined4 local_b8 [2];
  undefined8 ***local_b0 [3];
  ushort local_98;
  byte local_90;
  undefined8 ***local_88 [3];
  ushort local_70;
  byte local_68;
  undefined8 ***local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_198;
  cVar5 = FUN_144815c48();
  if (cVar5 == '\0') goto LAB_140103c10;
  bVar6 = *(byte *)(param_1 + 0xc0);
  if (bVar6 == 1) {
    lVar12 = param_2;
    if (*(char *)(param_1 + 0xc1) == '\0') {
      lVar12 = param_3;
    }
    local_110[0] = '\0';
    local_e8[0] = 0;
    FUN_1456bb102(local_110,lVar12);
    FUN_1448729ea(param_1 + 200,local_88,local_110);
    uVar7 = FUN_140103fe6(local_88);
    pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
    if (pcVar2 != (code *)0x0) {
      ppppuVar11 = local_88;
      if (0x18 < local_70) {
        ppppuVar11 = (undefined8 ****)local_88[0];
      }
      (*pcVar2)(ppppuVar11);
    }
    if (0x18 < local_70) {
      FUN_1400020a8(local_88[0]);
    }
    FUN_1448173f8(local_e8);
    if ((local_110[0] == '\x03') && (local_100 != (longlong *)0x0)) {
      LOCK();
      piVar1 = (int *)((longlong)local_100 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_100 + 0x10))();
      }
    }
    bVar6 = *(byte *)(param_1 + 0xc0);
  }
  else {
    uVar7 = 0;
  }
  if ((bVar6 & 1) == 0) {
LAB_140103b92:
    lVar12 = *(longlong *)(param_1 + 0x138);
    if (lVar12 == 0) {
      uVar9 = FUN_140103600();
      lVar12 = FUN_14477b664(uVar9);
      *(longlong *)(param_1 + 0x138) = lVar12;
    }
    plVar3 = (longlong *)(param_1 + 0x130);
    if (*(longlong *)(param_1 + 0x140) == 0) {
      if ((*plVar3 != 0) && (lVar12 != 0)) {
        plVar4 = *(longlong **)(lVar12 + 0xb8);
        if ((plVar4 == (longlong *)0x0) ||
           (cVar5 = (**(code **)(*plVar4 + 0x108))(plVar4), cVar5 == '\0')) {
          *(undefined8 *)(param_1 + 0x140) = 0;
        }
        else {
          uVar9 = (**(code **)(*plVar4 + 0x110))(plVar4);
          lVar12 = FUN_144aff482(uVar9,plVar3);
          *(longlong *)(param_1 + 0x140) = lVar12;
          if (lVar12 != 0) goto LAB_140103d78;
        }
      }
LAB_140103bd1:
      lVar12 = *(longlong *)(param_1 + 0x150);
      if (lVar12 == 0) {
        uVar9 = FUN_14010363a();
        lVar12 = FUN_14477b664(uVar9);
        *(longlong *)(param_1 + 0x150) = lVar12;
      }
      plVar3 = (longlong *)(param_1 + 0x148);
      if (*(longlong *)(param_1 + 0x158) == 0) {
        if ((*plVar3 != 0) && (lVar12 != 0)) {
          plVar4 = *(longlong **)(lVar12 + 0xb8);
          if ((plVar4 != (longlong *)0x0) &&
             (cVar5 = (**(code **)(*plVar4 + 0x108))(plVar4), cVar5 != '\0')) {
            uVar9 = (**(code **)(*plVar4 + 0x110))(plVar4);
            lVar12 = FUN_144aff482(uVar9,plVar3);
            *(longlong *)(param_1 + 0x158) = lVar12;
            uVar9 = 1;
            if (lVar12 == 0) goto LAB_140103c12;
            goto LAB_140103ec1;
          }
          *(undefined8 *)(param_1 + 0x158) = 0;
        }
LAB_140103c10:
        uVar9 = 1;
        goto LAB_140103c12;
      }
LAB_140103ec1:
      if (param_2 != 0) {
        uVar9 = FUN_14119f41e();
        lVar12 = FUN_144718840(param_2,uVar9);
        if (lVar12 != 0) {
          lVar10 = *(longlong *)(param_1 + 0x150);
          if (lVar10 == 0) {
            uVar9 = FUN_14010363a();
            lVar10 = FUN_14477b664(uVar9);
            *(longlong *)(param_1 + 0x150) = lVar10;
          }
          lVar13 = *(longlong *)(param_1 + 0x158);
          if (lVar13 != 0) {
LAB_140103f7b:
            local_170[0] = 0;
            local_148 = 0;
            FUN_1456bb102(local_170,param_3);
            uVar9 = FUN_1488d8e12(lVar13 + 0x28,lVar12,local_170);
            goto LAB_140103c12;
          }
          uVar9 = 0;
          if ((lVar10 == 0) || (*plVar3 == 0)) goto LAB_140103c12;
          plVar4 = *(longlong **)(lVar10 + 0xb8);
          if ((plVar4 == (longlong *)0x0) ||
             (cVar5 = (**(code **)(*plVar4 + 0x108))(plVar4), cVar5 == '\0')) {
            *(undefined8 *)(param_1 + 0x158) = 0;
          }
          else {
            uVar9 = (**(code **)(*plVar4 + 0x110))(plVar4);
            lVar13 = FUN_144aff482(uVar9,plVar3);
            *(longlong *)(param_1 + 0x158) = lVar13;
            if (lVar13 != 0) goto LAB_140103f7b;
          }
        }
      }
    }
    else {
LAB_140103d78:
      if (param_2 != 0) {
        uVar9 = FUN_14119f41e();
        lVar12 = FUN_144718840(param_2,uVar9);
        if (lVar12 != 0) {
          lVar10 = *(longlong *)(param_1 + 0x138);
          if (lVar10 == 0) {
            uVar9 = FUN_140103600();
            lVar10 = FUN_14477b664(uVar9);
            *(longlong *)(param_1 + 0x138) = lVar10;
          }
          lVar13 = *(longlong *)(param_1 + 0x140);
          if (lVar13 == 0) {
            uVar9 = 0;
            if ((lVar10 == 0) || (*plVar3 == 0)) goto LAB_140103c12;
            plVar4 = *(longlong **)(lVar10 + 0xb8);
            if ((plVar4 == (longlong *)0x0) ||
               (cVar5 = (**(code **)(*plVar4 + 0x108))(plVar4), cVar5 == '\0')) {
              *(undefined8 *)(param_1 + 0x140) = 0;
            }
            else {
              uVar9 = (**(code **)(*plVar4 + 0x110))(plVar4);
              lVar13 = FUN_144aff482(uVar9,plVar3);
              *(longlong *)(param_1 + 0x140) = lVar13;
              if (lVar13 != 0) goto LAB_140103e31;
            }
          }
          else {
LAB_140103e31:
            local_140[0] = 0;
            local_118 = 0;
            FUN_1456bb102(local_140,param_3);
            cVar5 = FUN_1488d8e12(lVar13,lVar12,local_140);
            if (cVar5 != '\0') goto LAB_140103bd1;
          }
        }
      }
    }
  }
  else {
    lVar12 = *(longlong *)(param_1 + 0x120);
    if (lVar12 == 0) {
      uVar9 = FUN_14016979c();
      lVar12 = FUN_14477b664(uVar9);
      *(longlong *)(param_1 + 0x120) = lVar12;
    }
    lVar10 = *(longlong *)(param_1 + 0x128);
    if (lVar10 == 0) {
      if ((lVar12 != 0) && (*(longlong *)(param_1 + 0x118) != 0)) {
        plVar3 = *(longlong **)(lVar12 + 0xb8);
        if ((plVar3 == (longlong *)0x0) ||
           (cVar5 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar5 == '\0')) {
          *(undefined8 *)(param_1 + 0x128) = 0;
        }
        else {
          uVar9 = (**(code **)(*plVar3 + 0x110))(plVar3);
          lVar10 = FUN_144aff482(uVar9,(longlong *)(param_1 + 0x118));
          *(longlong *)(param_1 + 0x128) = lVar10;
          if (lVar10 != 0) goto LAB_140103a49;
        }
      }
      goto LAB_140103b92;
    }
LAB_140103a49:
    local_110[0] = '\0';
    local_e8[0] = 0;
    FUN_1456bb102(local_110,param_2);
    local_e0 = '\0';
    local_b8[0] = 0;
    FUN_1400606f6(local_88,lVar10,local_110);
    ppppuVar11 = (undefined8 ****)local_58;
    if ((undefined8 ****)local_58 == (undefined8 ****)0x0) {
      ppppuVar11 = local_88;
    }
    ppppuVar14 = (undefined8 ****)&DAT_14c9a40e0;
    if (0 < local_50) {
      ppppuVar14 = ppppuVar11;
    }
    FUN_1400603ec(local_b0,lVar10,ppppuVar14);
    ppppuVar11 = (undefined8 ****)local_58;
    if ((undefined8 ****)local_58 == (undefined8 ****)0x0) {
      ppppuVar11 = local_88;
    }
    FUN_1446fdf58(ppppuVar11,local_50);
    if ((undefined8 ****)local_58 != (undefined8 ****)0x0) {
      FUN_1400020a8();
    }
    uVar8 = FUN_140103fe6(local_b0);
    pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_90 * 0x120));
    if (pcVar2 != (code *)0x0) {
      ppppuVar11 = local_b0;
      if (0x18 < local_98) {
        ppppuVar11 = (undefined8 ****)local_b0[0];
      }
      (*pcVar2)(ppppuVar11);
    }
    if (0x18 < local_98) {
      FUN_1400020a8(local_b0[0]);
    }
    FUN_1448173f8(local_b8);
    if (local_e0 != '\0') {
      if (local_e0 == '\x01') {
        local_d8 = 0;
      }
      else if ((local_e0 == '\x03') && (local_d0 != (longlong *)0x0)) {
        LOCK();
        piVar1 = (int *)((longlong)local_d0 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_d0 + 0x10))();
        }
      }
      local_e0 = '\0';
    }
    FUN_1448173f8(local_e8);
    if ((local_110[0] == '\x03') && (local_100 != (longlong *)0x0)) {
      LOCK();
      piVar1 = (int *)((longlong)local_100 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_100 + 0x10))();
      }
    }
    if (uVar7 <= uVar8) goto LAB_140103b92;
  }
  uVar9 = 0;
LAB_140103c12:
  if ((local_48 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9;
}



// FUNCTION 140103fe6 FUN_140103fe6 body=185 status=ok
// SIG undefined FUN_140103fe6(void)

int FUN_140103fe6(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  undefined1 auStack_68 [40];
  int local_40;
  undefined4 uStack_3c;
  ushort local_28;
  byte local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(char *)(param_1 + 0x20) == '\x02') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_68);
  }
  piVar3 = &local_40;
  FUN_1400b56fe(piVar3,param_1,2);
  iVar2 = local_40;
  if (local_40 < 1) {
    iVar2 = 0;
  }
  if (local_20 == 0) {
    iVar2 = 0;
  }
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_20 * 0x120));
  if (pcVar1 != (code *)0x0) {
    if (0x18 < local_28) {
      piVar3 = (int *)CONCAT44(uStack_3c,local_40);
    }
    (*pcVar1)(piVar3);
  }
  if (0x18 < local_28) {
    FUN_1400020a8(CONCAT44(uStack_3c,local_40));
  }
  if ((local_18 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar2;
}



// FUNCTION 1401040a0 FUN_1401040a0 body=259 status=ok
// SIG undefined FUN_1401040a0(void)

void FUN_1401040a0(longlong param_1)

{
  byte bVar1;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(char *)(param_1 + 0x459) == '\x01') {
    if (*(longlong *)(param_1 + 0x4b0) != 0) {
      bVar1 = FUN_1449c239e(*(longlong *)(param_1 + 0x4b0),*(undefined8 *)(param_1 + 0x9c0));
      if (2 < bVar1) goto LAB_140104109;
    }
    if ((*(char *)(param_1 + 0x410) == '\x01') &&
       ((*(char *)(param_1 + 0x804) != '\0' || (*(longlong *)(param_1 + 0xcc0) != 0)))) {
      *(undefined1 *)(param_1 + 0x410) = 0;
    }
  }
  else {
LAB_140104109:
    if (*(char *)(param_1 + 0x410) == '\0') {
      *(undefined1 *)(param_1 + 0x418) = 0;
      local_20 = *(undefined8 *)(param_1 + 0x598);
      local_30 = *(undefined8 *)(param_1 + 0x588);
      uStack_28 = *(undefined8 *)(param_1 + 0x590);
      local_38 = *(undefined8 *)(param_1 + 0x4e0);
      local_48 = *(undefined4 *)(param_1 + 0x4d0);
      uStack_44 = *(undefined4 *)(param_1 + 0x4d4);
      uStack_40 = *(undefined4 *)(param_1 + 0x4d8);
      uStack_3c = *(undefined4 *)(param_1 + 0x4dc);
      *(undefined8 *)(param_1 + 0x400) = uStack_28;
      *(undefined8 *)(param_1 + 0x408) = local_20;
      *(undefined4 *)(param_1 + 0x3e0) = local_48;
      *(undefined4 *)(param_1 + 0x3e4) = uStack_44;
      *(undefined4 *)(param_1 + 1000) = uStack_40;
      *(undefined4 *)(param_1 + 0x3ec) = uStack_3c;
      *(undefined8 *)(param_1 + 0x3f0) = local_38;
      *(undefined8 *)(param_1 + 0x3f8) = local_30;
      *(undefined1 *)(param_1 + 0x410) = 1;
    }
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401047ee FUN_1401047ee body=114 status=ok
// SIG undefined FUN_1401047ee(void)

void FUN_1401047ee(longlong *param_1,int param_2)

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



// FUNCTION 140104860 FUN_140104860 body=690 status=ok
// SIG undefined FUN_140104860(void)

int * FUN_140104860(longlong *param_1,int *param_2,undefined8 *param_3)

{
  uint *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  byte bVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  uint uVar12;
  longlong lVar13;
  longlong *plVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  undefined8 uVar18;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar16 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar16 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar16) {
      FUN_1447711aa(param_1,iVar16);
    }
    iVar17 = (int)param_1[5];
    if (iVar17 == 0) {
      iVar6 = -1;
    }
    else {
      iVar6 = iVar17 + 0x1e;
      if (-1 < iVar17 + -1) {
        iVar6 = iVar17 + -1;
      }
      iVar6 = iVar6 >> 5;
    }
    plVar7 = param_1 + 2;
    iVar10 = iVar17 + 1;
    iVar15 = iVar17 + 0x1f;
    if (-1 < iVar17) {
      iVar15 = iVar17;
    }
    if (iVar15 >> 5 == iVar6) {
      *(int *)(param_1 + 5) = iVar10;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar17) {
        if (iVar17 + 0x20U < 0xa0) {
          iVar10 = 0x80;
          iVar6 = iVar17;
        }
        else {
          uVar12 = iVar17 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar9 = 4;
            if (4 < uVar12) {
              uVar9 = uVar12;
            }
          }
          else {
            uVar9 = (uVar12 * 3 >> 3) + uVar12 + 0x10;
          }
          uVar11 = FUN_144a3809e(uVar9 << 2,0);
          iVar6 = (int)(uVar11 >> 2);
          iVar10 = -0x20;
          if ((int)uVar12 <= iVar6) {
            iVar10 = iVar6 << 5;
          }
          iVar6 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar10;
        FUN_1446efbd8(plVar7,iVar6);
        iVar10 = (int)param_1[5] + 1;
      }
      iVar6 = iVar10 + 0x1f;
      if (-1 < iVar10) {
        iVar6 = iVar10;
      }
      *(int *)(param_1 + 5) = iVar10;
      if (iVar10 % 0x20 != 0) {
        plVar14 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar14 = plVar7;
        }
        bVar8 = -(char)(iVar10 % 0x20);
        *(uint *)((longlong)plVar14 + (longlong)(iVar6 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar14 + (longlong)(iVar6 >> 5) * 4) << (bVar8 & 0x1f)) >>
             (bVar8 & 0x1f);
      }
    }
    lVar13 = (longlong)iVar16;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[4];
    }
    bVar8 = (byte)iVar17 & 0x1f;
    puVar1 = (uint *)((longlong)plVar7 + (longlong)(iVar15 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar8 | 0xfffffffeU >> 0x20 - bVar8);
  }
  else {
    iVar16 = (int)param_1[6];
    lVar13 = (longlong)iVar16;
    iVar17 = *(int *)(*param_1 + 4 + lVar13 * 0x20);
    *(int *)(param_1 + 6) = iVar17;
    iVar6 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar17 * 0x20) = 0xffffffff;
    }
  }
  iVar17 = 1;
  plVar7 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar7 = (longlong *)param_1[4];
  }
  iVar6 = iVar16 + 0x1f;
  if (-1 < iVar16) {
    iVar6 = iVar16;
  }
  puVar1 = (uint *)((longlong)plVar7 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar16 & 0x1f);
  lVar3 = *param_1;
  lVar13 = lVar13 * 0x20;
  puVar2 = (undefined8 *)(lVar3 + lVar13);
  puVar4 = (undefined8 *)param_3[1];
  uVar18 = *(undefined8 *)*param_3;
  *(undefined8 *)(lVar3 + lVar13) = uVar18;
  *(undefined8 *)(lVar3 + 8 + lVar13) = *puVar4;
  lVar5 = puVar4[1];
  *(longlong *)(lVar3 + 0x10 + lVar13) = lVar5;
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
    uVar18 = *puVar2;
  }
  *(undefined4 *)(puVar2 + 3) = 0xffffffff;
  uVar12 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (3 < uVar12) {
    uVar11 = (ulonglong)(uVar12 & 0xfffffffe) + 0xf;
    lVar13 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iVar17 = 1 << ((byte)lVar13 & 0x1f);
  }
  if (((int)uVar12 < 1) || (iVar17 <= (int)param_1[9])) {
    uVar12 = (int)param_1[9] - 1U & ((uint)((ulonglong)uVar18 >> 0x20) ^ (uint)uVar18);
    *(uint *)((longlong)puVar2 + 0x1c) = uVar12;
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(undefined4 *)(puVar2 + 3) =
         *(undefined4 *)
          ((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4);
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(int *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4) =
         iVar16;
  }
  else {
    *(int *)(param_1 + 9) = iVar17;
    FUN_140104b12(param_1);
  }
  *param_2 = iVar16;
  return param_2;
}



// FUNCTION 140104b12 FUN_140104b12 body=552 status=ok
// SIG undefined FUN_140104b12(void)

void FUN_140104b12(longlong *param_1)

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
        lVar10 = (longlong)iVar6 * 0x20;
        uVar13 = (longlong)
                 (int)((uint)((ulonglong)*(undefined8 *)(lVar11 + lVar10) >> 0x20) ^
                      (uint)*(undefined8 *)(lVar11 + lVar10)) & (longlong)(int)param_1[9] - 1U;
        iVar12 = (int)uVar13;
        *(int *)(lVar11 + 0x1c + lVar10) = iVar12;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar11 + 0x18 + lVar10) =
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
            if (iVar2 - lVar11 == lVar10) goto LAB_140104cf5;
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
LAB_140104cf5:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140104d3c FUN_140104d3c body=588 status=ok
// SIG undefined FUN_140104d3c(void)

void FUN_140104d3c(longlong *param_1)

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
  undefined1 auStack_88 [40];
  ulonglong local_60;
  longlong *local_58;
  undefined8 local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
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
    local_58 = param_1 + 2;
    local_60 = 0x100000000;
    local_50 = 0xffffffff;
    local_48 = 0;
    if ((int)param_1[5] == 0) {
      uVar8 = 1;
      local_50._0_4_ = 0xffffffff;
      local_50._4_4_ = 0;
      local_60._0_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_60);
      uVar8 = local_60 >> 0x20;
    }
    iVar4 = (int)local_60;
    uVar5 = (uint)local_50;
    iVar6 = local_50._4_4_;
    iVar9 = local_48;
    if (local_50._4_4_ < (int)local_58[3]) {
      do {
        lVar11 = *param_1;
        lVar10 = (longlong)iVar6;
        uVar3 = *(uint *)(lVar11 + 4 + lVar10 * 0x28) ^ *(uint *)(lVar11 + lVar10 * 0x28);
        uVar13 = (longlong)
                 (int)((*(uint *)(lVar11 + 0xc + lVar10 * 0x28) ^
                       *(uint *)(lVar11 + 8 + lVar10 * 0x28)) + (uVar3 >> 2) + uVar3 * 0x40 +
                       0x9e3779b9 ^ uVar3) & (longlong)(int)param_1[9] - 1U;
        iVar12 = (int)uVar13;
        *(int *)(lVar11 + 0x24 + lVar10 * 0x28) = iVar12;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar11 + 0x20 + lVar10 * 0x28) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar13) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar12 & (longlong)(int)param_1[9] - 1U) * 4) = iVar6
        ;
        uVar5 = ~(uint)uVar8 & uVar5;
        plVar7 = (longlong *)local_58[2];
        if ((longlong *)local_58[2] == (longlong *)0x0) {
          plVar7 = local_58;
        }
        iVar12 = (int)local_58[3];
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
            if (iVar2 - lVar11 == lVar10) goto LAB_140104f41;
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
LAB_140104f41:
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140104f8a FUN_140104f8a body=395 status=ok
// SIG undefined FUN_140104f8a(void)

void FUN_140104f8a(longlong param_1)

{
  longlong *plVar1;
  
  *(undefined4 *)(param_1 + 0x188) = 0;
  if (*(longlong *)(param_1 + 0x180) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x148) = 0;
  if (*(int *)(param_1 + 0x14c) != 0) {
    FUN_14472eb64((longlong *)(param_1 + 0x140),0);
  }
  *(undefined8 *)(param_1 + 0x170) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x168) = 0;
  if (0x80 < *(uint *)(param_1 + 0x16c)) {
    *(undefined4 *)(param_1 + 0x16c) = 0x80;
    FUN_1446efbd8(param_1 + 0x150,0);
  }
  if (*(longlong *)(param_1 + 0x160) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x140) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x138) = 0;
  if (*(longlong *)(param_1 + 0x130) != 0) {
    FUN_1400020a8();
  }
  FUN_14010514e(param_1 + 0xf0);
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    plVar1 = (longlong *)(param_1 + 0xd0);
    if (*(longlong **)(param_1 + 0xc0) != (longlong *)0x0) {
      plVar1 = *(longlong **)(param_1 + 0xc0);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x60) = 0;
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_1400020a8();
  }
  FUN_140105116(param_1 + 0x18);
  return;
}



// FUNCTION 140105116 FUN_140105116 body=55 status=ok
// SIG undefined FUN_140105116(void)

void FUN_140105116(longlong *param_1)

{
  FUN_140105186(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14010514e FUN_14010514e body=55 status=ok
// SIG undefined FUN_14010514e(void)

void FUN_14010514e(longlong *param_1)

{
  FUN_140105202(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140105186 FUN_140105186 body=123 status=ok
// SIG undefined FUN_140105186(void)

void FUN_140105186(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_1405357e8(param_1,param_2);
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



// FUNCTION 140105202 FUN_140105202 body=123 status=ok
// SIG undefined FUN_140105202(void)

void FUN_140105202(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_140957390(param_1,param_2);
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



// FUNCTION 1401052aa FUN_1401052aa body=44 status=ok
// SIG undefined FUN_1401052aa(void)

longlong FUN_1401052aa(longlong param_1,int param_2)

{
  FUN_1401052d6(param_1 + 8);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1401052d6 FUN_1401052d6 body=60 status=ok
// SIG undefined FUN_1401052d6(void)

void FUN_1401052d6(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  FUN_1447350ca(*(undefined8 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x30));
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 140105312 FUN_140105312 body=310 status=ok
// SIG undefined FUN_140105312(void)

undefined1 FUN_140105312(void)

{
  longlong lVar1;
  byte bVar2;
  longlong *plVar3;
  ulonglong uVar4;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca432e8) {
    FUN_144b3d300(&DAT_14ca432e8);
    if (DAT_14ca432e8 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      plVar3 = (longlong *)
               (**(code **)(*DAT_14c8407a8 + 200))
                         (DAT_14c8407a8,L"r.gbx.ProjectMaskedDigistructEnable",1);
      if (plVar3 == (longlong *)0x0) {
        DAT_14ca432e0 = 0;
      }
      else {
        DAT_14ca432e0 = (**(code **)(*plVar3 + 0x68))(plVar3);
      }
      _Init_thread_footer(&DAT_14ca432e8);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca432f0) {
    FUN_144b3d300(&DAT_14ca432f0);
    lVar1 = DAT_14ca432e0;
    if (DAT_14ca432f0 == -1) {
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60) == 0x40000002) {
        uVar4 = 0;
      }
      else {
        bVar2 = FUN_144a61b4f();
        uVar4 = (ulonglong)(bVar2 ^ 1);
      }
      DAT_14ca432ec = *(int *)(lVar1 + uVar4 * 4) != 0;
      _Init_thread_footer(&DAT_14ca432f0);
    }
  }
  return DAT_14ca432ec;
}



// FUNCTION 140105448 FUN_140105448 body=353 status=ok
// SIG undefined FUN_140105448(void)

void FUN_140105448(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1401054cf;
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
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,4);
    }
  }
LAB_1401054cf:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,4);
  return;
}



// FUNCTION 1401055aa FUN_1401055aa body=108 status=ok
// SIG undefined FUN_1401055aa(void)

double * FUN_1401055aa(undefined8 param_1,double *param_2,float param_3)

{
  undefined1 auStack_68 [40];
  double local_40;
  double local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140105618(param_1,&local_40);
  *param_2 = (double)param_3 * local_40;
  param_2[1] = local_38 * (double)param_3;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140105618 FUN_140105618 body=115 status=ok
// SIG undefined FUN_140105618(void)

void FUN_140105618(longlong param_1,double *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  double dVar5;
  float *pfVar6;
  
  dVar5 = DAT_14c8463f8;
  lVar4 = *(longlong *)(param_1 + 0x208);
  if (*(char *)(lVar4 + 0x39) != DAT_14c96b1e1) {
    fVar1 = *(float *)(param_1 + 0x21c);
    fVar2 = *(float *)(param_1 + 0x224);
    pfVar6 = (float *)&DAT_14c84635c;
    if ((*(byte *)(lVar4 + 0x31) & 0x20) != 0) {
      pfVar6 = (float *)(lVar4 + 0x168);
    }
    fVar3 = pfVar6[1];
    *param_2 = (double)(*(float *)(param_1 + 0x218) + *(float *)(param_1 + 0x220) + *pfVar6);
    param_2[1] = (double)(fVar1 + fVar2 + fVar3);
    return;
  }
  *param_2 = DAT_14c8463f0;
  param_2[1] = dVar5;
  return;
}



// FUNCTION 14010568c FUN_14010568c body=93 status=ok
// SIG undefined FUN_14010568c(void)

undefined8 * FUN_14010568c(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_14482129f(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1401056ea(param_1,iVar1);
      FUN_140177ada(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1401056ea FUN_1401056ea body=234 status=ok
// SIG undefined FUN_1401056ea(void)

void FUN_1401056ea(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar1 = (longlong)param_2 * 0x160;
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
    iVar2 = (int)(uVar1 / 0x160);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar4 = iVar2;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x160,8);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1401057d4 FUN_1401057d4 body=148 status=ok
// SIG undefined FUN_1401057d4(void)

void FUN_1401057d4(longlong *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  if ((*(byte *)((longlong)param_1 + 0x9e) & 1) != 0) {
    return;
  }
  lVar3 = param_1[0x16];
  if ((lVar3 == 0) && (lVar3 = FUN_1448abda6(), lVar3 == 0)) {
    uVar1 = *(uint *)((longlong)param_1 + 0xc);
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar3 = 0;
    }
    if ((*(uint *)(lVar3 + 8) >> 0x1c & 1) != 0) {
      return;
    }
    FUN_14342d574(param_1);
    return;
  }
  uVar2 = (**(code **)(*param_1 + 0x3e0))(param_1);
  FUN_144821660(lVar3,param_1,uVar2);
  return;
}



// FUNCTION 14010586c FUN_14010586c body=162 status=ok
// SIG undefined FUN_14010586c(void)

void FUN_14010586c(longlong *param_1,undefined8 param_2)

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
        goto LAB_1401058f9;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_1401058f9:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 14010590e FUN_14010590e body=317 status=ok
// SIG undefined FUN_14010590e(void)

void FUN_14010590e(longlong param_1,int param_2,int param_3)

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
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14010597c;
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
LAB_14010597c:
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



// FUNCTION 140105a4c FUN_140105a4c body=76 status=ok
// SIG undefined FUN_140105a4c(void)

longlong FUN_140105a4c(longlong param_1,int param_2)

{
  FUN_140105bc4(param_1 + 0x50);
  FUN_140105a98(param_1 + 0x40);
  FUN_140105afc(param_1 + 0x30);
  FUN_140105b60(param_1 + 0x20);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140105a98 FUN_140105a98 body=99 status=ok
// SIG undefined FUN_140105a98(void)

void FUN_140105a98(longlong *param_1)

{
  longlong lVar1;
  int *piVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    piVar2 = (int *)((lVar1 + -8) - (ulonglong)*(uint *)(lVar1 + -8));
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      if (*(longlong *)(piVar2 + 0x10) - (longlong)piVar2 == 0x10000) {
        lVar1 = DAT_14c872d30;
        if (DAT_14c872d30 == 0) {
          lVar1 = FUN_145bdc178();
        }
        FUN_140028df4(lVar1,piVar2);
        return;
      }
      FUN_144705e74(piVar2);
      return;
    }
  }
  return;
}



// FUNCTION 140105afc FUN_140105afc body=99 status=ok
// SIG undefined FUN_140105afc(void)

void FUN_140105afc(longlong *param_1)

{
  longlong lVar1;
  int *piVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    piVar2 = (int *)((lVar1 + -8) - (ulonglong)*(uint *)(lVar1 + -8));
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      if (*(longlong *)(piVar2 + 0x10) - (longlong)piVar2 == 0x10000) {
        lVar1 = DAT_14c872d30;
        if (DAT_14c872d30 == 0) {
          lVar1 = FUN_145bdc178();
        }
        FUN_140028df4(lVar1,piVar2);
        return;
      }
      FUN_144705e74(piVar2);
      return;
    }
  }
  return;
}



// FUNCTION 140105b60 FUN_140105b60 body=99 status=ok
// SIG undefined FUN_140105b60(void)

void FUN_140105b60(longlong *param_1)

{
  longlong lVar1;
  int *piVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    piVar2 = (int *)((lVar1 + -8) - (ulonglong)*(uint *)(lVar1 + -8));
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      if (*(longlong *)(piVar2 + 0x10) - (longlong)piVar2 == 0x10000) {
        lVar1 = DAT_14c872d30;
        if (DAT_14c872d30 == 0) {
          lVar1 = FUN_145bdc178();
        }
        FUN_140028df4(lVar1,piVar2);
        return;
      }
      FUN_144705e74(piVar2);
      return;
    }
  }
  return;
}



// FUNCTION 140105bc4 FUN_140105bc4 body=99 status=ok
// SIG undefined FUN_140105bc4(void)

void FUN_140105bc4(longlong *param_1)

{
  longlong lVar1;
  int *piVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    piVar2 = (int *)((lVar1 + -8) - (ulonglong)*(uint *)(lVar1 + -8));
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      if (*(longlong *)(piVar2 + 0x10) - (longlong)piVar2 == 0x10000) {
        lVar1 = DAT_14c872d30;
        if (DAT_14c872d30 == 0) {
          lVar1 = FUN_145bdc178();
        }
        FUN_140028df4(lVar1,piVar2);
        return;
      }
      FUN_144705e74(piVar2);
      return;
    }
  }
  return;
}



// FUNCTION 140105c28 FUN_140105c28 body=256 status=ok
// SIG undefined FUN_140105c28(void)

longlong FUN_140105c28(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  lVar9 = *(longlong *)(param_2 + 0x1e0);
  if (*(longlong *)(param_2 + 0x1e0) == 0) {
    lVar9 = param_2;
  }
  FUN_140105d28(param_1,lVar9,*(undefined4 *)(param_2 + 0x1e8),0);
  cVar1 = *(char *)(param_2 + 0x240);
  *(char *)(param_1 + 0x240) = cVar1;
  if (cVar1 == '\x01') {
    uVar2 = *(undefined4 *)(param_2 + 0x1f0);
    uVar3 = *(undefined4 *)(param_2 + 500);
    uVar4 = *(undefined4 *)(param_2 + 0x1f8);
    uVar5 = *(undefined4 *)(param_2 + 0x1fc);
    uVar6 = *(undefined8 *)(param_2 + 0x200);
    uVar7 = *(undefined8 *)(param_2 + 0x208);
    uVar8 = *(undefined8 *)(param_2 + 0x218);
    *(undefined8 *)(param_1 + 0x210) = *(undefined8 *)(param_2 + 0x210);
    *(undefined8 *)(param_1 + 0x218) = uVar8;
    *(undefined8 *)(param_1 + 0x200) = uVar6;
    *(undefined8 *)(param_1 + 0x208) = uVar7;
    *(undefined4 *)(param_1 + 0x1f0) = uVar2;
    *(undefined4 *)(param_1 + 500) = uVar3;
    *(undefined4 *)(param_1 + 0x1f8) = uVar4;
    *(undefined4 *)(param_1 + 0x1fc) = uVar5;
    *(undefined8 *)(param_1 + 0x220) = *(undefined8 *)(param_2 + 0x220);
    lVar9 = *(longlong *)(param_2 + 0x228);
    *(longlong *)(param_1 + 0x228) = lVar9;
    if (lVar9 != 0) {
      LOCK();
      *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
      UNLOCK();
    }
    *(undefined4 *)(param_1 + 0x230) = *(undefined4 *)(param_2 + 0x230);
    *(undefined8 *)(param_1 + 0x238) = *(undefined8 *)(param_2 + 0x238);
  }
  cVar1 = *(char *)(param_2 + 600);
  *(char *)(param_1 + 600) = cVar1;
  if (cVar1 == '\x01') {
    lVar9 = *(longlong *)(param_2 + 0x248);
    *(longlong *)(param_1 + 0x248) = lVar9;
    if ((lVar9 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    *(undefined4 *)(param_1 + 0x250) = *(undefined4 *)(param_2 + 0x250);
  }
  return param_1;
}



// FUNCTION 140105d28 FUN_140105d28 body=95 status=ok
// SIG undefined FUN_140105d28(void)

void FUN_140105d28(longlong param_1,undefined8 param_2,int param_3,int param_4)

{
  longlong lVar1;
  
  *(int *)(param_1 + 0x1e8) = param_3;
  if (param_4 != 0 || param_3 != 0) {
    FUN_140105e02(param_1,param_3,param_4);
    lVar1 = *(longlong *)(param_1 + 0x1e0);
    if (*(longlong *)(param_1 + 0x1e0) == 0) {
      lVar1 = param_1;
    }
    FUN_140105d87(lVar1,param_2,param_3);
    return;
  }
  *(undefined4 *)(param_1 + 0x1ec) = 4;
  return;
}



// FUNCTION 140105d87 FUN_140105d87 body=123 status=ok
// SIG undefined FUN_140105d87(void)

void FUN_140105d87(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  
  if (param_3 != 0) {
    lVar10 = 0;
    do {
      uVar5 = *(undefined8 *)(param_2 + lVar10);
      uVar6 = ((undefined8 *)(param_2 + lVar10))[1];
      puVar2 = (undefined8 *)(param_2 + 0x10 + lVar10);
      uVar7 = *puVar2;
      uVar8 = puVar2[1];
      puVar2 = (undefined8 *)(param_2 + 0x20 + lVar10);
      uVar9 = puVar2[1];
      puVar3 = (undefined8 *)(param_1 + 0x20 + lVar10);
      *puVar3 = *puVar2;
      puVar3[1] = uVar9;
      puVar2 = (undefined8 *)(param_1 + 0x10 + lVar10);
      *puVar2 = uVar7;
      puVar2[1] = uVar8;
      *(undefined8 *)(param_1 + lVar10) = uVar5;
      ((undefined8 *)(param_1 + lVar10))[1] = uVar6;
      *(undefined8 *)(param_1 + 0x30 + lVar10) = *(undefined8 *)(param_2 + 0x30 + lVar10);
      lVar4 = *(longlong *)(param_2 + 0x38 + lVar10);
      *(longlong *)(param_1 + 0x38 + lVar10) = lVar4;
      if (lVar4 != 0) {
        LOCK();
        *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
        UNLOCK();
      }
      lVar4 = param_1 + lVar10;
      lVar1 = param_2 + lVar10;
      *(undefined4 *)(lVar4 + 0x40) = *(undefined4 *)(lVar1 + 0x40);
      uVar5 = *(undefined8 *)(lVar1 + 0x50);
      uVar6 = *(undefined8 *)(lVar1 + 0x58);
      uVar7 = *(undefined8 *)(lVar1 + 0x60);
      uVar8 = *(undefined8 *)(lVar1 + 0x68);
      uVar9 = *(undefined8 *)(lVar1 + 0x70);
      *(undefined8 *)(lVar4 + 0x48) = *(undefined8 *)(lVar1 + 0x48);
      *(undefined8 *)(lVar4 + 0x50) = uVar5;
      *(undefined8 *)(lVar4 + 0x58) = uVar6;
      *(undefined8 *)(lVar4 + 0x60) = uVar7;
      *(undefined8 *)(lVar4 + 0x68) = uVar8;
      *(undefined8 *)(lVar4 + 0x70) = uVar9;
      lVar10 = lVar10 + 0x78;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 140105e02 FUN_140105e02 body=339 status=ok
// SIG undefined FUN_140105e02(void)

void FUN_140105e02(longlong param_1,uint param_2,int param_3)

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
    iVar7 = 4;
    if (4 < param_2) {
      uVar4 = (longlong)(int)param_2 * 0x78;
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
                if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140105ea3;
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
          uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,0);
        }
      }
LAB_140105ea3:
      iVar5 = (int)(uVar4 / 0x78);
      iVar7 = 0x7fffffff;
      if ((int)param_2 <= iVar5) {
        iVar7 = iVar5;
      }
    }
  }
  if (param_3 < iVar7) {
    FUN_140105f56(param_1,0,iVar7,0x78);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 0x1ec) = param_3;
  return;
}



// FUNCTION 140105f56 FUN_140105f56 body=145 status=ok
// SIG undefined FUN_140105f56(void)

void FUN_140105f56(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x1e0);
  if ((uint)param_3 < 5) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x78);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x1e0,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x1e0),param_1,(longlong)param_2 * 0x78);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x1e0,param_2,param_3,param_4);
  return;
}



// FUNCTION 140105fe8 FUN_140105fe8 body=311 status=ok
// SIG undefined FUN_140105fe8(void)

void FUN_140105fe8(longlong *param_1,float param_2)

{
  longlong lVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  
  if ((DAT_14cb0d2b0 != 0) && (lVar1 = (**(code **)(*param_1 + 0x180))(), lVar1 != 0)) {
    fVar4 = (float)(-(uint)(0.0 < param_2) & (uint)(1.0 / param_2));
    if ((DAT_14c866ff0 == '\x01') || (DAT_14c846539 != '\0')) {
      bVar2 = false;
    }
    else {
      bVar2 = (*(byte *)(DAT_14cb0d2b0 + 0xc44) & 0x40) == 0;
    }
    fVar3 = *(float *)(DAT_14cb0d2b0 + 0xdb8);
    if (100.0 <= fVar3) {
      fVar3 = 100.0;
    }
    if (fVar3 <= 1.0) {
      fVar3 = 1.0;
    }
    lVar1 = (**(code **)(*param_1 + 0x180))(param_1);
    *(byte *)(lVar1 + 0x154) = *(byte *)(lVar1 + 0x154) & 0xf7 | (fVar4 < fVar3 & bVar2) << 3;
    fVar3 = *(float *)(DAT_14cb0d2b0 + 0xdb8) + -5.0;
    if (100.0 <= fVar3) {
      fVar3 = 100.0;
    }
    if (fVar3 <= 1.0) {
      fVar3 = 1.0;
    }
    lVar1 = (**(code **)(*param_1 + 0x180))(param_1);
    *(byte *)(lVar1 + 0x154) = *(byte *)(lVar1 + 0x154) & 0xef | (fVar4 < fVar3 & bVar2) << 4;
  }
  return;
}



// FUNCTION 140106120 FUN_140106120 body=69 status=ok
// SIG undefined FUN_140106120(void)

int FUN_140106120(longlong *param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + param_2;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < param_2) {
    FUN_140106166(param_1,iVar1);
  }
  FUN_144822101((longlong)iVar1 * 0x48 + *param_1,param_2);
  return iVar1;
}



// FUNCTION 140106166 FUN_140106166 body=93 status=ok
// SIG undefined FUN_140106166(void)

void FUN_140106166(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
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
    FUN_1401061c4();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1401061c4 FUN_1401061c4 body=636 status=ok
// SIG undefined FUN_1401061c4(void)

void FUN_1401061c4(undefined8 *param_1,undefined8 param_2,uint param_3,longlong param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  void *_Src;
  longlong lVar3;
  undefined4 *puVar4;
  uint *puVar5;
  ulonglong uVar6;
  uint uVar7;
  int *_Memory;
  uint *puVar8;
  ulonglong _Size;
  int *piVar9;
  void *_Dst;
  
  if (((int)param_3 < 0) || (param_4 - 0x80000000U < 0xffffffff80000001)) {
                    /* WARNING: Subroutine does not return */
    FUN_1456bc5fe(param_3,param_4);
  }
  _Size = (ulonglong)param_3 * param_4;
  _Src = (void *)*param_1;
  if (_Size == 0) {
    _Dst = (void *)0x0;
LAB_140106359:
    if (_Src == (void *)0x0) goto LAB_1401063c5;
  }
  else {
    puVar1 = (undefined8 *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308
             );
    puVar5 = (uint *)*puVar1;
    if (puVar5 != (uint *)0x0) goto LAB_1401062a1;
    while( true ) {
      uVar7 = *(uint *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318);
      if ((uVar7 & 1) == 0) {
        *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x318) = uVar7 | 1;
        __tlregdtor(&LAB_1427ae0f1);
      }
      lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      puVar4 = *(undefined4 **)(lVar3 + 0x310);
      *(undefined8 *)(lVar3 + 0x310) = 0;
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = _aligned_malloc(0x10000,0x10000);
      }
      *puVar4 = 0xffffffff;
      *(undefined4 **)(puVar4 + 0x10) = puVar4 + 0x16;
      puVar4[0x12] = 0;
      *puVar1 = puVar4;
      FUN_140217a48(puVar1);
      puVar5 = (uint *)*puVar1;
LAB_1401062a1:
      _Dst = (void *)(*(longlong *)(puVar5 + 0x10) + 7U & 0xfffffffffffffff8);
      puVar8 = (uint *)((longlong)_Dst + _Size);
      uVar7 = puVar5[0x12];
      if (puVar8 <= puVar5 + 0x4000) break;
      while( true ) {
        *(uint **)(puVar5 + 0x10) = puVar5 + 0x4000;
        LOCK();
        uVar2 = *puVar5;
        *puVar5 = *puVar5 + uVar7 + 1;
        UNLOCK();
        if ((uVar2 ^ uVar7) != 0xffffffff) break;
        puVar5 = (uint *)*puVar1;
        *puVar5 = 0xffffffff;
        *(uint **)(puVar5 + 0x10) = puVar5 + 0x16;
        puVar5[0x12] = 0;
        *puVar1 = puVar5;
        _Dst = (void *)((longlong)puVar5 + 0x5fU & 0xfffffffffffffff8);
        puVar8 = (uint *)((longlong)_Dst + _Size);
        uVar7 = 0;
        if (puVar8 <= puVar5 + 0x4000) {
          uVar7 = 1;
          goto LAB_14010631b;
        }
      }
    }
    uVar7 = uVar7 + 1;
LAB_14010631b:
    *(uint **)(puVar5 + 0x10) = puVar8;
    puVar5[0x12] = uVar7;
    uVar6 = ((longlong)_Src + 0xffffU & 0xffffffffffff0000) - (longlong)_Src;
    if (uVar6 == 0 || _Src == (void *)0x0) goto LAB_140106359;
    if (uVar6 < _Size) {
      _Size = uVar6;
    }
    memcpy(_Dst,_Src,_Size);
  }
  piVar9 = (int *)((ulonglong)_Src & 0xffffffffffff0000);
  LOCK();
  *piVar9 = *piVar9 + -1;
  UNLOCK();
  if (*piVar9 == 0) {
    _Memory = piVar9;
    if (*(longlong *)(piVar9 + 0x10) - (longlong)piVar9 == 0x10000) {
      uVar7 = *(uint *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318);
      if ((uVar7 & 1) == 0) {
        *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x318) = uVar7 | 1;
        __tlregdtor(&LAB_1427ae0f1);
      }
      lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      _Memory = *(int **)(lVar3 + 0x310);
      *(int **)(lVar3 + 0x310) = piVar9;
      if (_Memory == (int *)0x0) goto LAB_1401063c5;
    }
    _aligned_free(_Memory);
  }
LAB_1401063c5:
  *param_1 = _Dst;
  return;
}



// FUNCTION 140106442 FUN_140106442 body=373 status=ok
// SIG undefined FUN_140106442(void)

void FUN_140106442(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 0x24;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1401064cb;
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
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,4);
    }
  }
LAB_1401064cb:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x24)) {
    uVar7 = uVar5 / 0x24 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x24,4);
  return;
}



// FUNCTION 1401065b8 FUN_1401065b8 body=654 status=ok
// SIG undefined FUN_1401065b8(void)

void FUN_1401065b8(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  ulonglong uVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  ulonglong uVar15;
  
  plVar5 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar5,0,0,4);
  }
  plVar1 = param_1 + 7;
  uVar7 = *(uint *)(param_1 + 9);
  if (uVar7 == 1) {
    if (*plVar5 != 0) {
      FUN_1446efa72(plVar5,0,0,4);
    }
  }
  else {
    if (uVar7 == 0) {
      return;
    }
    FUN_1446efa72(plVar5,0,uVar7,4);
    if ((int)uVar7 < 1) goto LAB_14010661c;
  }
  uVar2 = 0;
  do {
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = plVar1;
    }
    *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar2) * 4) =
         0xffffffff;
    uVar2 = uVar2 + 1;
  } while (uVar7 != uVar2);
LAB_14010661c:
  iVar14 = (int)param_1[5];
  if (iVar14 == 0) {
    uVar3 = 0;
    uVar11 = 1;
    iVar13 = 0;
    iVar4 = 0;
  }
  else {
    puVar10 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar10 = (uint *)(param_1 + 2);
    }
    uVar7 = *puVar10;
    if (uVar7 == 0) {
      iVar13 = iVar14 + 0x1e;
      if (-1 < iVar14 + -1) {
        iVar13 = iVar14 + -1;
      }
      uVar3 = 0;
      uVar11 = (ulonglong)(uint)(iVar13 >> 5);
      if (iVar13 >> 5 < 1) {
        uVar11 = uVar3;
      }
      iVar4 = 0;
      do {
        if (uVar11 == uVar3) {
          return;
        }
        iVar4 = iVar4 + 0x20;
        uVar7 = puVar10[uVar3 + 1];
        uVar3 = uVar3 + 1;
      } while (uVar7 == 0);
    }
    else {
      uVar3 = 0;
      iVar4 = 0;
    }
    uVar11 = (ulonglong)(-uVar7 & uVar7);
    uVar15 = uVar11 * 2 + 1;
    lVar6 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    iVar13 = (iVar4 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    if (iVar14 <= iVar13) {
      iVar13 = iVar14;
    }
  }
  if (iVar13 < iVar14) {
    uVar7 = 0xffffffff;
    do {
      lVar6 = *param_1;
      lVar12 = (longlong)iVar13;
      uVar15 = (longlong)
               (*(int *)(lVar6 + 4 + lVar12 * 0x14) * 0x58399e77 +
               *(int *)(lVar6 + lVar12 * 0x14) * -0x39feb07) & (longlong)(int)param_1[9] - 1U;
      iVar14 = (int)uVar15;
      *(int *)(lVar6 + 0x10 + lVar12 * 0x14) = iVar14;
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(undefined4 *)(lVar6 + 0xc + lVar12 * 0x14) =
           *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar15) * 4);
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(int *)((longlong)plVar5 + ((longlong)iVar14 & (longlong)(int)param_1[9] - 1U) * 4) = iVar13;
      uVar7 = ~(uint)uVar11 & uVar7;
      puVar10 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar10 = (uint *)(param_1 + 2);
      }
      iVar14 = (int)param_1[5];
      iVar13 = (int)uVar3;
      lVar6 = (longlong)iVar13;
      uVar2 = puVar10[lVar6] & uVar7;
      if (uVar2 == 0) {
        iVar8 = iVar14 + 0x1e;
        if (-1 < iVar14 + -1) {
          iVar8 = iVar14 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar9 = iVar8;
        if (iVar8 < iVar13) {
          iVar9 = iVar13;
        }
        if (iVar8 <= iVar13) {
          return;
        }
        lVar12 = 0;
        while( true ) {
          iVar4 = iVar4 + 0x20;
          uVar2 = puVar10[lVar6 + lVar12 + 1];
          if (uVar2 != 0) break;
          lVar12 = lVar12 + 1;
          if (iVar9 - lVar6 == lVar12) {
            return;
          }
        }
        uVar3 = (ulonglong)(iVar13 + (int)lVar12 + 1);
        uVar7 = 0xffffffff;
      }
      uVar11 = (ulonglong)(-uVar2 & uVar2);
      uVar15 = uVar11 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar15 != 0) {
        for (; uVar15 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar13 = (iVar4 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    } while (iVar13 < iVar14);
  }
  return;
}



// FUNCTION 140106846 FUN_140106846 body=91 status=ok
// SIG undefined FUN_140106846(void)

void FUN_140106846(longlong param_1)

{
  FUN_1401068a2();
  if (*(int *)(param_1 + 0x3c) < 0) {
    *(undefined4 *)(param_1 + 0x38) = 0;
    FUN_1400d33ac(param_1 + 0x30,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  if (-1 < *(int *)(param_1 + 0x4c)) {
    *(undefined4 *)(param_1 + 0x48) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  FUN_1400d33ac(param_1 + 0x40,0);
  return;
}



// FUNCTION 1401068a2 FUN_1401068a2 body=113 status=ok
// SIG undefined FUN_1401068a2(void)

void FUN_1401068a2(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  ushort uVar4;
  longlong lVar5;
  
  iVar1 = *(int *)(param_1 + 0x38);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x30);
    lVar5 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar5);
      if (lVar3 != 0) {
        uVar4 = (ushort)*(undefined4 *)(lVar3 + 0x374);
        *(ushort *)(lVar3 + 0x374) = uVar4 | 2;
        if ((*(longlong *)(lVar3 + 0x140) == 0) ||
           ((*(byte *)(*(longlong *)(lVar3 + 0x140) + 10) & 0x40) == 0)) {
          *(ushort *)(lVar3 + 0x374) = uVar4 & 0xfffe | 2;
        }
        *(uint *)(lVar3 + 0x150) = *(uint *)(lVar3 + 0x150) | 0x7fffffff;
        *(undefined4 *)(lVar3 + 0x154) = 0xffffffff;
      }
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar1 * 8 != lVar5);
  }
  return;
}



// FUNCTION 140106920 FUN_140106920 body=306 status=ok
// SIG undefined FUN_140106920(void)

byte FUN_140106920(longlong *param_1)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  if ((int)param_1[0xe5] < 1) {
    return 0;
  }
  lVar1 = param_1[0xcc];
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  else {
    plVar5 = param_1;
    if (lVar1 == 0) goto LAB_140106a00;
  }
  if (((*(byte *)(lVar1 + 0x194) & 4) == 0) || (-1 < *(char *)((longlong)param_1 + 0x9e))) {
LAB_140106a19:
    plVar5 = (longlong *)0x0;
  }
  else {
    if (*(code **)(param_1[0x55] + 0x58) == (code *)&LAB_1457ba96c) {
      uVar2 = (uint)*(byte *)((longlong)param_1 + 0x2e9);
    }
    else {
      uVar2 = (**(code **)(param_1[0x55] + 0x58))(param_1 + 0x55);
    }
    plVar5 = (longlong *)&DAT_00000001;
    if (1 < (int)uVar2) goto LAB_140106a00;
    lVar3 = *param_1;
    if (*(code **)(lVar3 + 0x558) == (code *)&LAB_1448a8146) {
      plVar4 = param_1 + 0x8f;
    }
    else {
      plVar4 = (longlong *)(**(code **)(lVar3 + 0x558))(param_1);
      lVar3 = *param_1;
    }
    if (*(code **)(lVar3 + 0x570) == (code *)&LAB_1448a814e) {
      if ((param_1[0x15] != 0) && ((*(byte *)(param_1[0x15] + 0x65) & 1) == 0)) goto LAB_140106a19;
      uVar2 = (uint)*(byte *)((longlong)param_1 + 0x427);
    }
    else {
      uVar2 = (**(code **)(lVar3 + 0x570))(param_1);
    }
    plVar5 = (longlong *)0x0;
    if (((uVar2 < 6) && ((0x2aU >> (uVar2 & 0x1f) & 1) != 0)) &&
       (plVar5 = (longlong *)&DAT_00000001, *(char *)((longlong)plVar4 + 2) != '\x02')) {
      plVar5 = (longlong *)(ulonglong)(*(char *)((longlong)plVar4 + 6) == '\x02');
    }
  }
LAB_140106a00:
  return lVar1 != 0 & (byte)plVar5;
}



// FUNCTION 140106a52 FUN_140106a52 body=265 status=ok
// SIG undefined FUN_140106a52(void)

void FUN_140106a52(longlong param_1,double *param_2,float *param_3,float *param_4,float *param_5)

{
  longlong lVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  lVar1 = *(longlong *)(param_1 + 0x5b8);
  dVar3 = param_2[2] - *(double *)(param_1 + 0x170);
  dVar5 = param_2[1] - *(double *)(param_1 + 0x168);
  dVar4 = *param_2 - *(double *)(param_1 + 0x160);
  dVar4 = ((double)*(float *)(param_1 + 0x2c0) - SQRT(dVar3 * dVar3 + dVar4 * dVar4 + dVar5 * dVar5)
          ) - param_2[6];
  dVar3 = 0.0;
  if (0.0 <= dVar4) {
    dVar3 = dVar4;
  }
  *param_3 = (float)dVar3 * (float)dVar3;
  fVar2 = 0.0;
  if (0.0 <= *(float *)(param_1 + 0x2c0)) {
    fVar2 = *(float *)(param_1 + 0x2c0);
  }
  *param_4 = fVar2 * fVar2;
  if (lVar1 == 0) {
    fVar2 = 3.4028235e+38;
  }
  else {
    dVar3 = *(double *)(param_1 + 0x170) - *(double *)(lVar1 + 0x170);
    dVar5 = *(double *)(param_1 + 0x168) - *(double *)(lVar1 + 0x168);
    dVar4 = *(double *)(param_1 + 0x160) - *(double *)(lVar1 + 0x160);
    fVar2 = (float)(SQRT(dVar3 * dVar3 + dVar4 * dVar4 + dVar5 * dVar5) +
                   (double)((float)*(double *)(lVar1 + 400) + *(float *)(lVar1 + 0x2c0)));
    fVar2 = fVar2 * fVar2;
  }
  *param_5 = fVar2;
  return;
}



// FUNCTION 140106b5c FUN_140106b5c body=449 status=ok
// SIG undefined FUN_140106b5c(void)

void FUN_140106b5c(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  void *_Dst;
  int iVar6;
  uint uVar7;
  bool bVar8;
  float fVar9;
  
  if (((~*(byte *)((longlong)param_1 + 0x9c) & 3) == 0) && (param_1[0xb5] == 0)) {
    if (param_1 == (longlong *)0x0) {
      return;
    }
    uVar2 = FUN_14078ee06();
    plVar3 = (longlong *)FUN_144718840(param_1,uVar2);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
    iVar1 = (**(code **)(*plVar3 + 0x40))(plVar3);
    if (iVar1 == -1) {
      return;
    }
  }
  (**(code **)(*param_1 + 0x778))(param_1,param_2,param_3);
  iVar1 = (int)param_3[1];
  if (0 < iVar1) {
    uVar7 = 0;
    do {
      lVar4 = *param_3;
      lVar5 = (longlong)(int)uVar7 * 0x50;
      _Dst = (void *)(lVar4 + lVar5);
      if ((*(longlong *)(lVar4 + lVar5) == 0) ||
         (*(int *)(*(longlong *)(lVar4 + lVar5) + 0xb8) == -1)) {
        iVar6 = ~uVar7 + iVar1;
        if (iVar6 != 0) {
          if (0 < iVar6) {
            iVar6 = 1;
          }
          iVar1 = iVar1 - iVar6;
LAB_140106c97:
          memmove(_Dst,(void *)((longlong)iVar1 * 0x50 + lVar4),(longlong)iVar6 * 0x50);
          iVar1 = (int)param_3[1];
        }
LAB_140106cba:
        uVar7 = uVar7 - 1;
        iVar1 = iVar1 + -1;
        *(int *)(param_3 + 1) = iVar1;
      }
      else {
        fVar9 = *(float *)((longlong)_Dst + 0x40);
        if (fVar9 <= 1e-08) {
          if (((*(byte *)((longlong)param_1 + 0x9c) & 1) == 0) &&
             ((*(byte *)((longlong)_Dst + 0x48) & 1) != 0)) goto LAB_140106c51;
LAB_140106c4d:
          bVar8 = false;
        }
        else {
          if (((*(byte *)((longlong)param_1 + 0x9c) & 1) != 0) &&
             (*(double *)((longlong)_Dst + 0x38) <= 9.99999993922529e-09)) goto LAB_140106c4d;
LAB_140106c51:
          iVar1 = _finite((double)fVar9);
          bVar8 = iVar1 != 0;
          fVar9 = *(float *)((longlong)_Dst + 0x40);
          iVar1 = (int)param_3[1];
        }
        if (((!bVar8) && (-1 < *(char *)((longlong)param_1 + 0x2d5))) && (0.0 <= fVar9)) {
          iVar6 = ~uVar7 + iVar1;
          if (iVar6 != 0) {
            if (0 < iVar6) {
              iVar6 = 1;
            }
            lVar4 = *param_3;
            _Dst = (void *)(lVar5 + lVar4);
            iVar1 = iVar1 - iVar6;
            goto LAB_140106c97;
          }
          goto LAB_140106cba;
        }
      }
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < iVar1);
  }
  return;
}



// FUNCTION 140106d1e FUN_140106d1e body=373 status=ok
// SIG undefined FUN_140106d1e(void)

void FUN_140106d1e(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 0xc;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140106da7;
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
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,4);
    }
  }
LAB_140106da7:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0xc)) {
    uVar7 = uVar5 / 0xc & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0xc,4);
  return;
}



// FUNCTION 140106e94 FUN_140106e94 body=140 status=ok
// SIG undefined FUN_140106e94(void)

void FUN_140106e94(longlong *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = FUN_14477b072(param_1,DAT_14cb27480);
  lVar2 = FUN_14570ab3e(uVar1);
  if ((*(byte *)(lVar2 + 0xd4) & 0x80) == 0) {
    local_21 = 0;
    (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_21);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x000140106eeb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x2a0))(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140106f38 FUN_140106f38 body=632 status=ok
// SIG undefined FUN_140106f38(void)

void FUN_140106f38(longlong param_1,double *param_2,double *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined1 local_b8 [16];
  double local_a8;
  double local_98;
  double dStack_90;
  double local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  dVar7 = *param_2 - *(double *)(param_1 + 0x50);
  dVar8 = param_2[1] - *(double *)(param_1 + 0x58);
  dVar6 = param_2[2] - *(double *)(param_1 + 0x60);
  dVar1 = *(double *)(param_1 + 0x30);
  dVar2 = *(double *)(param_1 + 0x40) * -1.0;
  dVar3 = *(double *)(param_1 + 0x48) * 1.0;
  dVar4 = -dVar1;
  dVar5 = -*(double *)(param_1 + 0x38);
  dVar9 = dVar8 * dVar4 - dVar7 * dVar5;
  dVar10 = dVar6 * dVar5 - dVar8 * dVar2;
  dVar11 = dVar7 * dVar2 - dVar6 * dVar4;
  dVar10 = dVar10 + dVar10;
  dVar11 = dVar11 + dVar11;
  dVar9 = dVar9 + dVar9;
  local_88 = dVar9 * dVar3 + dVar6 + (dVar11 * dVar4 - dVar10 * dVar5);
  local_98 = (dVar9 * dVar5 - dVar11 * dVar2) + dVar3 * dVar10 + dVar7;
  dStack_90 = dVar1 * dVar9 + dVar2 * dVar10 + dVar3 * dVar11 + dVar8;
  dVar6 = *param_3;
  dVar7 = param_3[1];
  dVar9 = dVar7 * dVar4 - dVar5 * dVar6;
  dVar8 = param_3[2] * dVar5 - dVar2 * dVar7;
  dVar10 = dVar6 * dVar2 - dVar4 * param_3[2];
  dVar8 = dVar8 + dVar8;
  dVar10 = dVar10 + dVar10;
  dVar9 = dVar9 + dVar9;
  local_a8 = dVar9 * dVar3 + param_3[2] + (dVar10 * dVar4 - dVar8 * dVar5);
  dVar1 = dVar1 * dVar9 + dVar2 * dVar8 + dVar3 * dVar10 + dVar7;
  local_b8._8_4_ = SUB84(dVar1,0);
  local_b8._0_8_ = (dVar9 * dVar5 - dVar10 * dVar2) + dVar3 * dVar8 + dVar6;
  local_b8._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
  local_c8 = param_5;
  (**(code **)(**(longlong **)(param_1 + 0x20) + 0xa8))();
  if ((local_80 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401071b8 FUN_1401071b8 body=526 status=ok
// SIG undefined FUN_1401071b8(void)

void FUN_1401071b8(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_118 [40];
  longlong local_f0;
  undefined8 local_e8;
  undefined1 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined1 local_78;
  longlong local_70;
  longlong lStack_68;
  ulonglong local_60;
  longlong lStack_58;
  ulonglong local_50;
  longlong lStack_48;
  ulonglong local_40;
  longlong lStack_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_f0 = *param_2;
  local_e8 = 0;
  local_e0 = 1;
  local_d0 = 0;
  uStack_c8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  uStack_87 = 0;
  local_80 = 0;
  uStack_7c = 0;
  local_78 = 0;
  local_70 = 0;
  lStack_68 = 0;
  local_60 = 0;
  lStack_58 = 0;
  local_50 = 0;
  lStack_48 = 0;
  local_40 = 0;
  lStack_38 = 0;
  local_30 = 0;
  local_dc = *(undefined4 *)((longlong)param_2 + 0x14);
  local_d8 = (undefined4)param_2[3];
  plVar1 = *(longlong **)(param_1 + 0x18);
  if (plVar1 == (longlong *)0x0) {
    lVar2 = *(longlong *)(local_f0 + 0x6a0);
    FUN_14018c8cc(&local_d0,lVar2);
    local_70 = lVar2 + 0xb0;
  }
  else {
    local_d8 = local_dc;
    local_dc = *(undefined4 *)(param_1 + 0x20);
    (**(code **)(*plVar1 + 0x30))(plVar1);
  }
  FUN_144825e30(&local_d0,param_2 + 4);
  if (param_2 + 7 != (longlong *)&uStack_88) {
    param_2[7] = CONCAT71(uStack_87,uStack_88);
    uStack_88 = 0;
    uStack_87 = 0;
    *(undefined4 *)(param_2 + 8) = local_80;
    *(undefined4 *)((longlong)param_2 + 0x44) = uStack_7c;
    local_80 = 0;
    uStack_7c = 0;
  }
  *(undefined1 *)(param_2 + 9) = local_78;
  param_2[10] = local_70;
  FUN_144825d2c(param_2 + 0xb,&lStack_68);
  if (lStack_38 != 0) {
    FUN_1400020a8();
  }
  FUN_144716785(lStack_48,local_40 & 0xffffffff);
  if (lStack_48 != 0) {
    FUN_1400020a8();
  }
  FUN_144716758(lStack_58,local_50 & 0xffffffff);
  if (lStack_58 != 0) {
    FUN_1400020a8();
  }
  FUN_144716727(lStack_68,local_60 & 0xffffffff);
  if (lStack_68 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401073c8 FUN_1401073c8 body=46 status=ok
// SIG undefined FUN_1401073c8(void)

void FUN_1401073c8(longlong param_1)

{
  FUN_1401073f6(param_1 + 0xf20,param_1);
  FUN_14085b656(param_1,0);
  FUN_140107576(param_1);
  return;
}



// FUNCTION 1401073f6 FUN_1401073f6 body=384 status=ok
// SIG undefined FUN_1401073f6(void)

void FUN_1401073f6(longlong *param_1,longlong param_2)

{
  uint *_Dst;
  longlong lVar1;
  bool bVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  longlong lVar9;
  
  uVar4 = (ulonglong)(int)param_1[1];
  if (0 < (longlong)uVar4) {
    iVar8 = -(int)param_1[1];
    lVar9 = uVar4 << 4;
    do {
      lVar9 = lVar9 + -0x10;
      lVar1 = *param_1;
      _Dst = (uint *)(lVar1 + lVar9);
      if (param_2 == 0) {
LAB_1401074d7:
        if (((((*(longlong *)(lVar1 + 8 + lVar9) == 0) ||
              (iVar5 = *(int *)(lVar1 + 4 + lVar9), iVar5 == 0)) ||
             ((uVar3 = *_Dst, (int)uVar3 < 0 ||
              ((DAT_14c9647dc <= (int)uVar3 ||
               (plVar7 = (longlong *)
                         ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
               plVar7 == (longlong *)0x0)))))) || ((int)plVar7[2] != iVar5)) ||
           (((*(uint *)(plVar7 + 1) >> 0x1c & 1) != 0 || (*plVar7 == 0)))) goto LAB_1401074a5;
      }
      else {
        iVar5 = *(int *)(lVar1 + 4 + lVar9);
        if ((iVar5 == 0) || (uVar3 = *_Dst, (int)uVar3 < 0)) {
LAB_140107543:
          lVar6 = 0;
        }
        else {
          lVar6 = 0;
          if ((int)uVar3 < DAT_14c9647dc) {
            plVar7 = (longlong *)
                     ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
            if (((plVar7 == (longlong *)0x0) || ((int)plVar7[2] != iVar5)) ||
               ((*(uint *)(plVar7 + 1) & 0x10200000) != 0)) goto LAB_140107543;
            lVar6 = *plVar7;
          }
        }
        if (lVar6 != param_2) goto LAB_1401074d7;
LAB_1401074a5:
        uVar3 = *(uint *)(param_1 + 1);
        if (uVar4 != uVar3) {
          iVar5 = iVar8 + uVar3;
          if (0 < iVar5) {
            iVar5 = 1;
          }
          memmove(_Dst,(void *)(lVar1 + (longlong)(int)(uVar3 - iVar5) * 0x10),(longlong)iVar5 << 4)
          ;
          uVar3 = *(uint *)(param_1 + 1);
        }
        *(uint *)(param_1 + 1) = uVar3 - 1;
        FUN_1400bbcfc(param_1);
      }
      iVar8 = iVar8 + 1;
      bVar2 = 1 < uVar4;
      uVar4 = uVar4 - 1;
    } while (bVar2);
  }
  return;
}



// FUNCTION 140107576 FUN_140107576 body=422 status=ok
// SIG undefined FUN_140107576(void)

void FUN_140107576(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  
  FUN_14036294a(param_1,1,0);
  (**(code **)(*param_1 + 0xc60))(param_1);
  FUN_14010771c(param_1);
  if (param_1[0x15d] != 0) {
    FUN_140107fd2();
  }
  lVar4 = param_1[0x170];
  if ((longlong)(int)lVar4 != 0) {
    lVar2 = param_1[0x16f];
    lVar5 = 0;
    do {
      FUN_140107fd2(*(undefined8 *)(lVar2 + lVar5));
      lVar5 = lVar5 + 8;
    } while ((longlong)(int)lVar4 * 8 != lVar5);
  }
  FUN_1406c4074(param_1);
  if (param_1[0x15f] != 0) {
    FUN_140107fd2();
  }
  plVar3 = (longlong *)FUN_1401077a0(param_1);
  plVar1 = (longlong *)param_1[0x1ca];
  if (plVar3 != (longlong *)0x0 && plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x50))(plVar1,param_1[0x1cb]);
    (**(code **)(*(longlong *)param_1[0x1ca] + 0x48))();
    (**(code **)(*(longlong *)param_1[0x1ca] + 0x30))();
    (**(code **)(*plVar3 + 0x2a8))(plVar3,param_1[0x1ca]);
    param_1[0x1ca] = 0;
    param_1[0x1cb] = 0;
  }
  if ((*(int *)((longlong)param_1 + 0xc64) != -1) &&
     (((lVar4 = param_1[0x16], lVar4 != 0 || (lVar4 = FUN_1448abda6(param_1), lVar4 != 0)) &&
      (*(longlong *)(lVar4 + 0x260) != 0)))) {
    FUN_147c69830(*(longlong *)(lVar4 + 0x260),param_1);
  }
  if (*(int *)((longlong)param_1 + 0xd5c) < 0) {
    *(undefined4 *)(param_1 + 0x1ab) = 0;
    FUN_1448759c8(param_1 + 0x1aa,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x1ab) = 0;
  }
  *(byte *)((longlong)param_1 + 0xc71) = *(byte *)((longlong)param_1 + 0xc71) & 0xdf;
  if (param_1[0x171] != 0) {
    FUN_14072973a();
  }
  FUN_1401078ec(param_1);
  return;
}



// FUNCTION 14010771c FUN_14010771c body=58 status=ok
// SIG undefined FUN_14010771c(void)

void FUN_14010771c(longlong *param_1)

{
  if (param_1[0x1ca] != 0) {
    (**(code **)(*param_1 + 0xc60))(param_1);
    (**(code **)(*(longlong *)param_1[0x1ca] + 0x70))();
  }
  FUN_140107756(param_1);
  return;
}



// FUNCTION 140107756 FUN_140107756 body=73 status=ok
// SIG undefined FUN_140107756(void)

void FUN_140107756(longlong *param_1)

{
  if (param_1[0x1ca] == 0) {
    return;
  }
  (**(code **)(*param_1 + 0xc60))();
  if (param_1[0x1cc] != 0) {
    FUN_14100af66(param_1[0x1cc] + 0x28);
  }
                    /* WARNING: Could not recover jumptable at 0x00014010779b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1[0x1ca] + 0x48))();
  return;
}



// FUNCTION 1401077a0 FUN_1401077a0 body=110 status=ok
// SIG undefined FUN_1401077a0(void)

longlong FUN_1401077a0(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 0xcc8);
  if ((((lVar1 != 0) && (lVar3 = FUN_14010780e(), lVar3 != 0)) &&
      (*(int *)(lVar3 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
     ((*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
       lVar3 + 0x30 && (plVar2 = *(longlong **)(param_1 + 0xcc8), plVar2 != (longlong *)0x0)))) {
    if (plVar2[0x22] != 0) {
      return plVar2[0x22];
    }
    (**(code **)(*plVar2 + 1000))(plVar2);
    return plVar2[0x22];
  }
  return 0;
}



// FUNCTION 14010780e FUN_14010780e body=221 status=ok
// SIG undefined FUN_14010780e(void)

longlong FUN_14010780e(void)

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
  if (DAT_14c99d308 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_146fdd88d;
    local_40 = FUN_1462937fb;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/ClothingSystemRuntimeInterface",L"ClothingSimulationFactory",
                  &DAT_14c99d308,&DAT_146fdd88c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c99d308;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401078ec FUN_1401078ec body=968 status=ok
// SIG undefined FUN_1401078ec(void)

void FUN_1401078ec(longlong *param_1)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  undefined *puVar6;
  longlong *plVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  longlong lVar14;
  undefined8 *puVar15;
  longlong lVar16;
  undefined1 auStack_c8 [40];
  int local_a0;
  int local_9c;
  undefined8 *local_98;
  longlong *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  (**(code **)(*param_1 + 0xb58))();
  FUN_1447c0e7a(param_1);
  if (param_1[0x138] != 0) {
    plVar7 = (longlong *)param_1[0x15];
    if ((longlong *)param_1[0x15] == (longlong *)0x0) {
      plVar7 = param_1;
    }
    if (DAT_14cad2aa8 != DAT_14cad2ad4) {
      uVar5 = ((uint)((ulonglong)plVar7 >> 0x14) & 0xffff ^ (uint)((ulonglong)plVar7 >> 4)) *
              -0x7a143595;
      uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
      uVar5 = uVar5 >> 0x10 ^ uVar5;
      puVar6 = DAT_14cad2ae0;
      if (DAT_14cad2ae0 == (undefined *)0x0) {
        puVar6 = &DAT_14cad2ad8;
      }
      iVar11 = *(int *)(puVar6 + (ulonglong)(DAT_14cad2ae8 - 1U & uVar5) * 4);
      if (iVar11 != -1) {
LAB_1401079bc:
        puVar15 = (undefined8 *)(DAT_14cad2aa0 + (longlong)iVar11 * 0x18);
        if ((longlong *)*puVar15 != plVar7) goto code_r0x0001401079cc;
        if ((puVar15 == (undefined8 *)0x0) || (puVar15 + 1 == (longlong *)0x0)) goto LAB_140107b75;
        lVar1 = puVar15[1];
        iVar11 = *(int *)(lVar1 + 0x98);
        lVar16 = (longlong)iVar11;
        if (lVar16 != 0) {
          puVar15 = *(undefined8 **)(lVar1 + 0x90);
          iVar3 = 0;
          iVar8 = 0;
          bVar2 = (longlong *)*puVar15 == param_1;
          local_90 = param_1;
          do {
            lVar4 = (longlong)iVar8;
            iVar10 = iVar8;
            lVar14 = lVar4;
            iVar12 = iVar8 + 1;
            if (iVar8 + 1 < iVar11) {
              iVar12 = iVar11;
            }
            do {
              lVar14 = lVar14 + 1;
              iVar9 = iVar12;
              if (lVar16 <= lVar14) break;
              iVar10 = iVar10 + 1;
              iVar9 = iVar10;
              local_98 = puVar15;
            } while (bVar2 == ((longlong *)puVar15[lVar14] == local_90));
            local_a0 = iVar3;
            if (!bVar2) {
              iVar12 = iVar9 - iVar8;
              if (iVar3 != iVar8) {
                local_9c = iVar12;
                local_98 = puVar15;
                memmove(puVar15 + iVar3,puVar15 + lVar4,(longlong)iVar12 << 3);
                puVar15 = local_98;
                iVar12 = local_9c;
              }
              iVar3 = local_a0 + iVar12;
            }
            iVar8 = iVar9;
            bVar2 = (bool)(bVar2 ^ 1);
          } while (lVar14 < lVar16);
          *(int *)(lVar1 + 0x98) = iVar3;
          param_1 = local_90;
          if (iVar3 != 0) goto LAB_140107b75;
        }
        if (DAT_14cad2aa8 != DAT_14cad2ad4) {
          puVar6 = &DAT_14cad2ad8;
          if (DAT_14cad2ae0 != (undefined *)0x0) {
            puVar6 = DAT_14cad2ae0;
          }
          iVar11 = *(int *)(puVar6 + ((longlong)(int)uVar5 & (longlong)DAT_14cad2ae8 - 1U) * 4);
          if (iVar11 != -1) {
LAB_140107aac:
            puVar15 = (undefined8 *)(DAT_14cad2aa0 + (longlong)iVar11 * 0x18);
            if ((longlong *)*puVar15 != plVar7) goto code_r0x000140107abc;
            iVar8 = *(int *)(puVar6 + (longlong)*(int *)((longlong)puVar15 + 0x14) * 4);
            if (iVar8 == iVar11) {
              piVar13 = (int *)(puVar6 + (longlong)*(int *)((longlong)puVar15 + 0x14) * 4);
            }
            else {
              do {
                piVar13 = (int *)(DAT_14cad2aa0 + (longlong)iVar8 * 0x18 + 0x10);
                iVar8 = *piVar13;
              } while (iVar8 != iVar11);
            }
            *piVar13 = *(int *)(puVar15 + 2);
            FUN_140107cf4();
          }
        }
LAB_140107ae6:
        if (lVar1 != 0) {
          if (*(longlong *)(lVar1 + 0x90) != 0) {
            FUN_1400020a8();
          }
          *(undefined4 *)(lVar1 + 0x78) = 0;
          if (*(longlong *)(lVar1 + 0x70) != 0) {
            FUN_1400020a8();
          }
          *(undefined4 *)(lVar1 + 0x38) = 0;
          if (*(int *)(lVar1 + 0x3c) != 0) {
            FUN_14472eb64((longlong *)(lVar1 + 0x30),0);
          }
          *(undefined8 *)(lVar1 + 0x60) = 0xffffffff;
          *(undefined4 *)(lVar1 + 0x58) = 0;
          if (0x80 < *(uint *)(lVar1 + 0x5c)) {
            *(undefined4 *)(lVar1 + 0x5c) = 0x80;
            FUN_1446efbd8(lVar1 + 0x40,0);
          }
          if (*(longlong *)(lVar1 + 0x50) != 0) {
            FUN_1400020a8();
          }
          if (*(longlong *)(lVar1 + 0x30) != 0) {
            FUN_1400020a8();
          }
          if (*(longlong *)(lVar1 + 0x20) != 0) {
            FUN_1400020a8();
          }
          FUN_1400020a8(lVar1);
        }
      }
    }
LAB_140107b75:
    param_1[0x138] = 0;
  }
  local_78 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_68 = 0;
  uStack_60 = 0;
  uStack_70 = 0x200000000;
  local_58 = 0x800000000;
  FUN_140107d74(param_1);
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
code_r0x0001401079cc:
  iVar11 = *(int *)(puVar15 + 2);
  if (iVar11 == -1) goto LAB_140107b75;
  goto LAB_1401079bc;
code_r0x000140107abc:
  iVar11 = *(int *)(puVar15 + 2);
  if (iVar11 == -1) goto LAB_140107ae6;
  goto LAB_140107aac;
}



// FUNCTION 140107cb6 FUN_140107cb6 body=61 status=ok
// SIG undefined FUN_140107cb6(void)

void FUN_140107cb6(longlong param_1)

{
  FUN_140107ec6();
  *(undefined4 *)(param_1 + 0xb20) = 0;
  if (*(int *)(param_1 + 0xb24) != 0) {
    FUN_1401a2688(param_1 + 0xb18,0);
    return;
  }
  return;
}



// FUNCTION 140107cf4 FUN_140107cf4 body=128 status=ok
// SIG undefined FUN_140107cf4(void)

void FUN_140107cf4(int param_1)

{
  byte bVar1;
  longlong lVar2;
  undefined *puVar3;
  int iVar4;
  
  lVar2 = DAT_14cad2aa0;
  if (DAT_14cad2ad4 != 0) {
    *(int *)(DAT_14cad2aa0 + (longlong)DAT_14cad2ad0 * 0x18) = param_1;
  }
  *(undefined4 *)(lVar2 + (longlong)param_1 * 0x18) = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cad2ad4) {
    iVar4 = DAT_14cad2ad0;
  }
  *(int *)(lVar2 + 4 + (longlong)param_1 * 0x18) = iVar4;
  DAT_14cad2ad4 = DAT_14cad2ad4 + 1;
  puVar3 = &DAT_14cad2ab0;
  if (DAT_14cad2ac0 != (undefined *)0x0) {
    puVar3 = DAT_14cad2ac0;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar1 = (byte)param_1 & 0x1f;
  DAT_14cad2ad0 = param_1;
  *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  return;
}



// FUNCTION 140107d74 FUN_140107d74 body=337 status=ok
// SIG undefined FUN_140107d74(void)

void FUN_140107d74(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if ((int)param_2[3] < 1) {
LAB_140107d92:
    lVar3 = 0;
  }
  else {
    plVar2 = (longlong *)param_2[2];
    if ((longlong *)param_2[2] == (longlong *)0x0) {
      plVar2 = param_2;
    }
    plVar2 = (longlong *)*plVar2;
    if ((DAT_14c950c29 == '\x01') && (plVar2 != (longlong *)0x0)) {
      FUN_1456cec3c(plVar2);
    }
    else if (plVar2 == (longlong *)0x0) goto LAB_140107d92;
    lVar3 = (**(code **)(*plVar2 + 0x2a8))(plVar2,param_1,*(undefined8 *)(param_1 + 0x698));
  }
  plVar2 = (longlong *)(param_1 + 0x6a0);
  if (*(longlong *)(param_1 + 0x6a0) != 0) {
    FUN_1400020a8();
  }
  *plVar2 = 0;
  *(undefined8 *)(param_1 + 0x6a8) = 0;
  if (*(longlong *)(param_1 + 0x6b0) != 0) {
    FUN_1400020a8();
  }
  *(undefined8 *)(param_1 + 0x6b0) = 0;
  *(undefined8 *)(param_1 + 0x6b8) = 0;
  if (lVar3 == 0) {
    return;
  }
  *(undefined4 *)(param_1 + 0x6a8) = 0;
  if (*(int *)(param_1 + 0x6ac) != 1) {
    FUN_147a15d84(plVar2);
  }
  if (DAT_14c950c29 == '\x01') {
    FUN_1456cec3c(lVar3);
  }
  iVar1 = *(int *)(param_1 + 0x6a8);
  *(uint *)(param_1 + 0x6a8) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x6ac) < iVar1 + 1U) {
    FUN_147a15e14(plVar2,iVar1);
  }
  *(longlong *)(*plVar2 + (longlong)iVar1 * 8) = lVar3;
  if (DAT_14c950c29 == '\x01') {
    FUN_1456cec3c(lVar3);
  }
  FUN_147a0f532((undefined8 *)(param_1 + 0x6b0),param_2 + 4);
  return;
}



// FUNCTION 140107ec6 FUN_140107ec6 body=267 status=ok
// SIG undefined FUN_140107ec6(void)

void FUN_140107ec6(longlong param_1)

{
  longlong *plVar1;
  
  if ((*(int *)(param_1 + 0xa98) != 0) &&
     (plVar1 = *(longlong **)(param_1 + 0xa90), plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x60))(plVar1,0);
  }
  *(undefined4 *)(param_1 + 0x6d8) = 0;
  if (*(int *)(param_1 + 0x6dc) != 0) {
    FUN_1401a2688(param_1 + 0x6d0,0);
  }
  *(undefined4 *)(param_1 + 0x6e8) = 0;
  if (*(int *)(param_1 + 0x6ec) != 0) {
    FUN_1401a2688(param_1 + 0x6e0,0);
  }
  *(undefined4 *)(param_1 + 0x708) = 0;
  if (*(int *)(param_1 + 0x70c) != 0) {
    FUN_1401a2688(param_1 + 0x700,0);
  }
  *(undefined4 *)(param_1 + 0x880) = 0;
  if (*(int *)(param_1 + 0x884) != 0) {
    FUN_144893a1c(param_1 + 0x878,0);
  }
  *(undefined4 *)(param_1 + 0x890) = 0;
  if (*(int *)(param_1 + 0x894) != 0) {
    FUN_144893a1c(param_1 + 0x888,0);
  }
  *(undefined4 *)(param_1 + 0x6f8) = 0;
  if (*(int *)(param_1 + 0x6fc) == 0) {
    return;
  }
  FUN_144893a1c(param_1 + 0x6f0,0);
  return;
}



// FUNCTION 140107fd2 FUN_140107fd2 body=1350 status=ok
// SIG undefined FUN_140107fd2(void)

void FUN_140107fd2(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  wchar_t *local_88;
  code *local_80;
  undefined1 *local_78;
  code **local_70;
  code *local_68;
  code *local_60;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  *(byte *)((longlong)param_1 + 0x33) = *(byte *)((longlong)param_1 + 0x33) | 2;
  (**(code **)(*param_1 + 0x328))();
  if (param_1[0x7c] != 0) {
    if (param_1 == (longlong *)0x0) {
      plVar5 = (longlong *)0x0;
    }
    else {
      lVar7 = param_1[4];
      if (lVar7 != 0) {
        if (DAT_14cad2858 == 0) {
          local_70 = &local_50;
          local_50 = FUN_144a7958c;
          local_60 = FUN_14081d0ea;
          local_68 = (code *)&LAB_146395584;
          local_78 = &LAB_147a0ba80;
          local_80 = (code *)&LAB_14575ccce;
          local_88 = L"Engine";
          local_90 = 0x40000000000;
          local_98 = 0x10000004;
          local_a0 = 0x10;
          local_a8 = 0x1180;
          FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,FUN_1463bcebe);
        }
        lVar7 = *(longlong *)(lVar7 + 0x10);
        iVar4 = *(int *)(DAT_14cad2858 + 0x38);
        if ((iVar4 <= *(int *)(lVar7 + 0x38)) &&
           (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)iVar4 * 8) == DAT_14cad2858 + 0x30
           )) {
          FUN_14036294a(param_1[4],CONCAT71((int7)(int3)((uint)iVar4 >> 8),1),1);
        }
      }
      plVar5 = (longlong *)param_1[0x7c];
      if (plVar5 == (longlong *)0x0) {
        plVar5 = (longlong *)(**(code **)(*param_1 + 0x350))(param_1);
        param_1[0x7c] = (longlong)plVar5;
      }
    }
    (**(code **)(*plVar5 + 0x10))(plVar5,param_1);
  }
  FUN_140108570(param_1,0);
  iVar4 = (int)param_1[0x12];
  if (0 < iVar4) {
    lVar7 = 0;
    do {
      lVar11 = *(longlong *)(param_1[0x11] + lVar7 * 8);
      if (lVar11 != 0) {
        FUN_1433d54a2(param_1,lVar11);
        FUN_1478f61e0(lVar11);
        FUN_1400020a8(lVar11);
        iVar4 = (int)param_1[0x12];
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 < iVar4);
    *(undefined4 *)(param_1 + 0x12) = 0;
    if (*(int *)((longlong)param_1 + 0x94) != 0) {
      FUN_1478fba82(param_1 + 0x11,0);
    }
    FUN_1478fbae2(param_1 + 0x13);
    FUN_1447cd2ec(param_1 + 0xf,0);
  }
  lVar7 = param_1[4];
  if (0 < (int)param_1[0x51] && (lVar7 != 0 && (DAT_14c872b89 & 1) == 0)) {
    lVar12 = 0x50;
    lVar10 = 0;
    lVar11 = 0;
    do {
      lVar9 = param_1[0x50];
      lVar2 = param_1[0x52];
      cVar3 = (**(code **)(*param_1 + 0x360))(param_1,*(undefined8 *)(lVar9 + lVar12));
      if (cVar3 != '\0') {
        plVar5 = *(longlong **)(lVar9 + lVar12);
        uVar1 = *(uint *)((longlong)plVar5 + 0xc);
        if ((int)uVar1 < DAT_14c9647dc) {
          lVar9 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
        }
        else {
          lVar9 = 0;
        }
        if ((*(uint *)(lVar9 + 8) >> 0x1c & 1) == 0) {
          lVar9 = plVar5[4];
          if (lVar9 == 0) {
LAB_140108525:
            lVar9 = 0;
          }
          else {
            lVar8 = FUN_14063d1f6();
            if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x38) < *(int *)(lVar8 + 0x38)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) +
                 (longlong)*(int *)(lVar8 + 0x38) * 8) != lVar8 + 0x30)) goto LAB_140108525;
          }
          local_a8 = CONCAT31(local_a8._1_3_,4);
          (**(code **)(*plVar5 + 0x2d0))(plVar5,lVar7,lVar9,lVar2 + lVar10);
        }
      }
      lVar11 = lVar11 + 1;
      lVar12 = lVar12 + 0xb8;
      lVar10 = lVar10 + 0x30;
    } while (lVar11 < (int)param_1[0x51]);
  }
  iVar4 = *(int *)((longlong)param_1 + 0x28c);
  FUN_14499183d(param_1[0x50]);
  *(undefined4 *)(param_1 + 0x51) = 0;
  if ((iVar4 < 0) && (*(int *)((longlong)param_1 + 0x28c) != 0)) {
    FUN_1417b4232(param_1 + 0x50,0);
  }
  iVar4 = *(int *)((longlong)param_1 + 0x29c);
  FUN_1448262fc(param_1[0x52],(int)param_1[0x53]);
  *(undefined4 *)(param_1 + 0x53) = 0;
  if ((iVar4 < 0) && (*(int *)((longlong)param_1 + 0x29c) != 0)) {
    FUN_14052b4a8(param_1 + 0x52,0);
  }
  FUN_144826242(param_1 + 0x38,lVar7);
  if ((int)param_1[0x28] != *(int *)((longlong)param_1 + 0x16c)) {
    FUN_1478fbe42(param_1 + 0x27);
    FUN_1478fbf8a(param_1 + 0x27);
  }
  lVar7 = param_1[2];
  if (lVar7 != 0) {
    if (DAT_14cacb1f8 == 0) {
      local_70 = &local_50;
      local_50 = FUN_1449e2820;
      local_60 = FUN_14081d0ea;
      local_68 = FUN_1427b09ee;
      local_78 = &LAB_1478defb1;
      local_80 = FUN_1463a1b02;
      local_88 = L"Engine";
      local_90 = 0;
      local_98 = 0x10004001;
      local_a0 = 8;
      local_a8 = 0x28;
      FUN_14081cfa3(L"/Script/Engine",L"AnimClassInterface",&DAT_14cacb1f8,&DAT_1478defb0);
    }
    plVar5 = (longlong *)FUN_144718840(lVar7,DAT_14cacb1f8);
    if (plVar5 != (longlong *)0x0) {
      plVar5 = (longlong *)(**(code **)(*plVar5 + 0x40))(plVar5);
      lVar7 = plVar5[1];
      if ((longlong)(int)lVar7 != 0) {
        lVar11 = *plVar5;
        lVar12 = 0;
        do {
          lVar10 = (longlong)*(int *)(*(longlong *)(lVar11 + lVar12) + 0x44) + (longlong)param_1;
          if (lVar10 != 0) {
            FUN_14790fb00(lVar10,param_1);
          }
          lVar12 = lVar12 + 8;
        } while ((longlong)(int)lVar7 * 8 != lVar12);
      }
    }
  }
  if ((DAT_14c872b89 & 1) == 0) {
    uVar6 = FUN_140108536();
    lVar7 = FUN_140108626(param_1,uVar6);
    if (lVar7 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_c8);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140108536 FUN_140108536 body=57 status=ok
// SIG undefined FUN_140108536(void)

void FUN_140108536(void)

{
  undefined8 uVar1;
  
  if (DAT_14cacca90 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cacca90 = FUN_140002ddd(FUN_1463a83c2,uVar1,L"AnimSubsystem_SharedLinkedAnimLayers");
  }
  return;
}



// FUNCTION 140108570 FUN_140108570 body=180 status=ok
// SIG undefined FUN_140108570(void)

void FUN_140108570(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_54;
  undefined1 local_4c;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (0 < (longlong)*(int *)(param_1 + 0x90)) {
    uVar2 = (longlong)*(int *)(param_1 + 0x90) + 1;
    do {
      uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x88) + -0x10 + uVar2 * 8);
      local_70 = 0;
      local_54 = 0x3f80000000000000;
      local_4c = 0;
      local_68 = param_2;
      FUN_1404163bc(&local_70);
      FUN_147904e32(uVar1,&local_70,1);
      uVar2 = uVar2 - 1;
    } while (1 < uVar2);
  }
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140108626 FUN_140108626 body=334 status=ok
// SIG undefined FUN_140108626(void)

undefined8 FUN_140108626(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
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
  code *local_48;
  undefined8 local_40;
  undefined1 *local_38;
  code **local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
    if (DAT_14cacb1f8 == 0) {
      local_60 = &local_48;
      local_48 = FUN_1449e2820;
      local_50 = FUN_14081d0ea;
      local_58 = FUN_1427b09ee;
      local_68 = &LAB_1478defb1;
      local_70 = FUN_1463a1b02;
      local_78 = L"Engine";
      local_80 = 0;
      local_88 = 0x10004001;
      local_90 = 8;
      local_98 = 0x28;
      FUN_14081cfa3(L"/Script/Engine",L"AnimClassInterface",&DAT_14cacb1f8,&DAT_1478defb0);
    }
    plVar2 = (longlong *)FUN_144718840(lVar1,DAT_14cacb1f8);
    if (plVar2 != (longlong *)0x0) {
      local_48 = (code *)&local_28;
      local_28 = 0;
      local_30 = &local_48;
      local_38 = &LAB_1433d77da;
      local_40 = param_2;
      (**(code **)(*plVar2 + 0xb0))(plVar2,param_1);
      uVar3 = local_28;
      goto LAB_14010866c;
    }
  }
  uVar3 = 0;
LAB_14010866c:
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14010877e FUN_14010877e body=197 status=ok
// SIG undefined FUN_14010877e(void)

void FUN_14010877e(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  
  lVar4 = **(longlong **)(param_1 + 0x308);
  if (lVar4 != 0) {
    do {
      lVar1 = *(longlong *)(lVar4 + 8);
      lVar2 = *(longlong *)(param_1 + 0x308);
      *(longlong *)(param_1 + 0x308) = lVar4;
      *(undefined8 *)(lVar4 + 8) = 0;
      if (lVar2 != 0) {
        FUN_1400020a8();
      }
      lVar4 = *param_2;
      if (lVar4 != 0) {
        puVar5 = (undefined8 *)FUN_14001cc68(0x10,0x10);
        *puVar5 = 0;
        puVar5[1] = lVar4;
        if (puVar5 != (undefined8 *)0x0) {
          puVar3 = *(undefined8 **)(param_1 + 0x310);
          *(undefined8 **)(param_1 + 0x310) = puVar5;
          *puVar3 = puVar5;
        }
      }
      *param_2 = lVar1;
      lVar4 = **(longlong **)(param_1 + 0x308);
    } while (lVar4 != 0);
    if ((*param_2 != 0) && (lVar1 != 0)) {
      FUN_144aa5e9a();
      return;
    }
  }
  return;
}



// FUNCTION 140108844 FUN_140108844 body=85 status=ok
// SIG undefined FUN_140108844(void)

void FUN_140108844(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *param_1;
  plVar2 = (longlong *)FUN_14010889a(lVar1 + 0x40);
  while (plVar2 != (longlong *)0x0) {
    if (*(char *)((longlong)plVar2 + 0x51) == '\0') {
      (**(code **)(*plVar2 + 0x10))(plVar2,0);
    }
    (**(code **)*plVar2)(plVar2,1);
    plVar2 = (longlong *)FUN_14010889a(lVar1 + 0x40);
  }
  return;
}



// FUNCTION 14010889a FUN_14010889a body=363 status=ok
// SIG undefined FUN_14010889a(void)

undefined8 FUN_14010889a(ulonglong *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  
  uVar2 = *param_1;
  uVar7 = (uint)uVar2;
  while( true ) {
    if ((uVar2 & 0x3ffffff) == 0) {
      return 0;
    }
    uVar5 = (uVar2 & 0xfffffffffc000000) + 0x4000000;
    if (uVar5 >> 0x1a < uVar2 >> 0x1a) {
      FUN_14000f986(0x3a83126f);
    }
    uVar6 = (ulonglong)((uVar7 & 0x3ffffff) >> 0xe);
    uVar8 = (ulonglong)((uint)uVar2 & 0x3fff);
    lVar3 = *(longlong *)(&DAT_14c833b00 + uVar6 * 8);
    LOCK();
    uVar1 = *param_1;
    if (uVar2 == uVar1) {
      *param_1 = uVar5 | *(uint *)(lVar3 + 0x10 + uVar8 * 0x18);
    }
    UNLOCK();
    if (uVar2 == uVar1) break;
    uVar2 = *param_1;
    uVar7 = (uint)uVar2;
  }
  *(undefined4 *)(lVar3 + uVar8 * 0x18 + 0x10) = 0;
  uVar4 = *(undefined8 *)
           (*(longlong *)(&DAT_14c833b00 + uVar6 * 8) + 8 + (ulonglong)(uVar7 & 0x3fff) * 0x18);
  if (DAT_14c833980 == '\0') {
    DAT_14c833940 = 0;
    DAT_14c833900 = TlsAlloc();
    DAT_14c833980 = '\x01';
  }
  FUN_140108a06(uVar7 & 0x3ffffff);
  return uVar4;
}



// FUNCTION 140108a06 FUN_140108a06 body=395 status=ok
// SIG undefined FUN_140108a06(void)

void FUN_140108a06(uint param_1)

{
  ulonglong *puVar1;
  uint uVar2;
  longlong lVar3;
  uint *lpTlsValue;
  ulonglong uVar4;
  ulonglong uVar5;
  bool bVar6;
  
  lpTlsValue = TlsGetValue(DAT_14c833900);
  if (lpTlsValue == (uint *)0x0) {
    lpTlsValue = (uint *)FUN_14001cc68(0xc,0x10);
    lpTlsValue[0] = 0;
    lpTlsValue[1] = 0;
    lpTlsValue[2] = 0;
    TlsSetValue(DAT_14c833900,lpTlsValue);
  }
  if (0x3f < (int)lpTlsValue[2]) {
    uVar2 = *lpTlsValue;
    if ((ulonglong)uVar2 != 0) {
      do {
        uVar5 = DAT_14c833940;
        uVar4 = (DAT_14c833940 & 0xfffffffffc000000) + 0x4000000;
        if (uVar4 >> 0x1a < DAT_14c833940 >> 0x1a) {
          FUN_14000f986(0x3a83126f);
        }
        *(uint *)(*(longlong *)(&DAT_14c833b00 + (ulonglong)(uVar2 >> 0xe) * 8) + 0x10 +
                 (ulonglong)(uVar2 & 0x3fff) * 0x18) = (uint)uVar5 & 0x3ffffff;
        LOCK();
        bVar6 = uVar5 != DAT_14c833940;
        uVar5 = uVar4 | uVar2;
        if (bVar6) {
          uVar5 = DAT_14c833940;
        }
        DAT_14c833940 = uVar5;
        UNLOCK();
      } while (bVar6);
    }
    *lpTlsValue = lpTlsValue[1];
    lpTlsValue[1] = 0;
    lpTlsValue[2] = 0;
  }
  lVar3 = *(longlong *)(&DAT_14c833b00 + (ulonglong)(param_1 >> 0xe) * 8);
  uVar5 = (ulonglong)(param_1 & 0x3fff);
  puVar1 = (ulonglong *)(lVar3 + uVar5 * 0x18);
  *puVar1 = *puVar1 & 0xfffffffffc000000;
  *(undefined4 *)(lVar3 + 0x10 + uVar5 * 0x18) = 0;
  *(ulonglong *)(lVar3 + 8 + uVar5 * 0x18) = (ulonglong)lpTlsValue[1];
  lpTlsValue[1] = param_1;
  lpTlsValue[2] = lpTlsValue[2] + 1;
  return;
}



// FUNCTION 140108b92 FUN_140108b92 body=13 status=ok
// SIG undefined FUN_140108b92(void)

void FUN_140108b92(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_140108ba0(param_1,0,param_2,param_3);
  return;
}



// FUNCTION 140108ba0 FUN_140108ba0 body=136 status=ok
// SIG undefined FUN_140108ba0(void)

void FUN_140108ba0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  char cVar1;
  undefined1 auStack_b8 [40];
  undefined8 local_90;
  undefined1 local_88 [96];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_90 = 0;
  FUN_140108c2a(local_88,param_1,param_2,param_3);
  cVar1 = FUN_144809632(local_88,param_3,&local_90);
  if (cVar1 != '\0') {
    *param_4 = local_90;
  }
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140108c2a FUN_140108c2a body=972 status=ok
// SIG undefined FUN_140108c2a(void)

double * FUN_140108c2a(double *param_1,longlong param_2,double *param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined8 uVar4;
  uint uVar5;
  char cVar6;
  int iVar7;
  double dVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  float fVar13;
  undefined1 auVar14 [16];
  undefined1 auStack_c8 [32];
  double *local_a8;
  undefined8 local_98;
  int local_90;
  int *local_88;
  int local_80;
  int local_78;
  int local_74;
  double local_70;
  double local_68;
  uint local_60;
  float fStack_5c;
  uint local_58;
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  iVar10 = *(int *)(param_2 + 0x60);
  if ((longlong)iVar10 == 0) {
    if (*(char *)(param_2 + 0x80) == '\x01') {
      *param_1 = *(double *)(param_2 + 0x78);
      *(undefined4 *)(param_1 + 1) = 0;
      goto LAB_140108e1d;
    }
LAB_140108e94:
    *(undefined1 *)(param_1 + 10) = 0;
    dVar8 = -NAN;
  }
  else {
    if (iVar10 != 1) {
      *(undefined1 *)(param_1 + 10) = 0;
      param_1[0xb] = -NAN;
      cVar6 = FUN_1401090ca(param_2,param_4,param_1);
      if (cVar6 != '\0') goto LAB_140108d85;
      piVar3 = *(int **)(param_2 + 0x58);
      iVar7 = *piVar3;
      iVar1 = piVar3[iVar10 + -1];
      FUN_140108ff7(&local_68,iVar7,iVar1,param_4);
      iVar11 = (int)param_4;
      if ((iVar11 < iVar7) ||
         ((fVar13 = (float)((ulonglong)param_4 >> 0x20), iVar7 == iVar11 && (fVar13 < 0.0)))) {
        cVar6 = *(char *)(param_2 + 0x50);
LAB_140108e4f:
        if (cVar6 == '\x02') {
          if ((local_58 & 1) != 0) {
            local_50 = 1;
            fVar13 = fStack_5c + 0.5 + -0.5;
            if (0.99999994 <= fVar13) {
              fVar13 = 0.99999994;
            }
            if (fVar13 <= 0.0) {
              fVar13 = 0.0;
            }
            fVar13 = 0.0 - fVar13;
            auVar14 = roundps(ZEXT416((uint)fVar13),ZEXT416((uint)fVar13),1);
            local_60 = ((iVar1 + iVar7) - local_60) + -1 + (int)auVar14._0_4_;
            fStack_5c = (fVar13 - auVar14._0_4_) + 0.5 + -0.5;
            if (0.99999994 <= fStack_5c) {
              fStack_5c = 0.99999994;
            }
            if (fStack_5c <= 0.0) {
              fStack_5c = 0.0;
            }
          }
        }
        else if (cVar6 == '\x01') {
          local_68 = (double)(int)local_58 *
                     ((*(double **)(param_2 + 0x68))[(longlong)iVar10 * 4 + -4] -
                     **(double **)(param_2 + 0x68));
        }
      }
      else if ((iVar1 < iVar11) || ((iVar1 == iVar11 && (0.0 < fVar13)))) {
        cVar6 = *(char *)(param_2 + 0x51);
        goto LAB_140108e4f;
      }
      fVar13 = fStack_5c;
      uVar5 = local_60;
      uVar12 = (ulonglong)local_60;
      if (((int)local_60 < iVar7) || (iVar1 < (int)local_60)) goto LAB_140108e94;
      local_74 = -1;
      local_78 = -1;
      if (param_3 == (double *)0x0) {
LAB_140108d2a:
        local_98 = *(undefined8 *)(param_2 + 0x58);
        local_a8 = &local_70;
        local_90 = iVar10;
        FUN_1448271d1(&local_98,CONCAT44(fVar13,uVar5),&local_74,&local_78);
        iVar10 = local_74;
      }
      else {
        iVar7 = *(int *)(param_3 + 2);
        uVar4 = CONCAT44(fStack_5c,local_60);
        if (iVar7 == -1) {
          local_a8 = param_3;
          local_88 = piVar3;
          local_80 = iVar10;
          FUN_1448271d1(&local_88,uVar4,param_3 + 1,(longlong)param_3 + 0xc);
          iVar7 = *(int *)(param_2 + 0x60);
          *(int *)(param_3 + 2) = iVar7;
          *(undefined8 *)((longlong)param_3 + 0x14) = uVar4;
          iVar10 = *(int *)(param_2 + 0x60);
        }
        if ((((iVar7 != iVar10) || (*(uint *)((longlong)param_3 + 0x14) != uVar5)) ||
            (*(float *)(param_3 + 3) != fVar13)) || (NAN(*(float *)(param_3 + 3)) || NAN(fVar13)))
        goto LAB_140108d2a;
        iVar10 = *(int *)(param_3 + 1);
        local_78 = *(int *)((longlong)param_3 + 0xc);
      }
      if (iVar10 == -1) {
        uVar9 = 0x7fffffff;
        if (uVar12 != 0x7fffffff) {
          uVar9 = (ulonglong)(uVar5 + 1);
        }
        uVar2 = *(undefined4 *)(*(longlong *)(param_2 + 0x58) + (longlong)local_78 * 4);
        *param_1 = local_68 + *(double *)(*(longlong *)(param_2 + 0x68) + (longlong)local_78 * 0x20)
        ;
        *(undefined4 *)(param_1 + 1) = uVar2;
      }
      else {
        if (local_78 != -1) {
          local_a8 = &local_68;
          FUN_14010925c(param_1,param_2);
          goto LAB_140108d85;
        }
        uVar9 = 0x7fffffff;
        if (uVar12 != 0x7fffffff) {
          uVar9 = (ulonglong)(uVar5 + 1);
        }
        uVar2 = *(undefined4 *)(*(longlong *)(param_2 + 0x58) + (longlong)iVar10 * 4);
        *param_1 = local_68 + *(double *)(*(longlong *)(param_2 + 0x68) + (longlong)iVar10 * 0x20);
        *(undefined4 *)(param_1 + 1) = uVar2;
      }
      *(undefined1 *)(param_1 + 10) = 1;
      param_1[0xb] = (double)(uVar9 << 0x20 | uVar12);
      goto LAB_140108d85;
    }
    uVar2 = **(undefined4 **)(param_2 + 0x58);
    *param_1 = **(double **)(param_2 + 0x68);
    *(undefined4 *)(param_1 + 1) = uVar2;
LAB_140108e1d:
    *(undefined1 *)(param_1 + 10) = 1;
    dVar8 = NAN;
  }
  param_1[0xb] = dVar8;
LAB_140108d85:
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 140108ff7 FUN_140108ff7 body=211 status=ok
// SIG undefined FUN_140108ff7(void)

undefined8 * FUN_140108ff7(undefined8 *param_1,int param_2,int param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  longlong lVar5;
  
  lVar5 = (longlong)param_3 - (longlong)param_2;
  if (lVar5 < 0x80000000) {
    *param_1 = 0;
    param_1[1] = param_4;
    *(undefined4 *)(param_1 + 2) = 0;
    iVar3 = (int)lVar5;
    *(int *)((longlong)param_1 + 0x14) = iVar3;
    *(undefined1 *)(param_1 + 3) = 0;
    if (iVar3 == 0) {
      *(int *)(param_1 + 1) = param_3;
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      iVar2 = (int)param_4;
      fVar4 = (float)((ulonglong)param_4 >> 0x20);
      if ((iVar2 < param_2) || ((iVar2 == param_2 && (fVar4 < 0.0)))) {
        iVar1 = (int)(((longlong)param_3 - (longlong)iVar2) / (longlong)iVar3);
        iVar3 = iVar3 * iVar1;
        *(int *)(param_1 + 2) = -iVar1;
        *(float *)((longlong)param_1 + 0xc) = fVar4;
      }
      else {
        if (iVar2 <= param_3) {
          if (iVar2 != param_3) {
            return param_1;
          }
          if (fVar4 <= 0.0) {
            return param_1;
          }
        }
        iVar1 = (int)(((longlong)iVar2 - (longlong)param_2) / (longlong)iVar3);
        *(int *)(param_1 + 2) = iVar1;
        *(float *)((longlong)param_1 + 0xc) = fVar4;
        iVar3 = -(iVar3 * iVar1);
      }
      *(int *)(param_1 + 1) = iVar2 + iVar3;
    }
  }
  else {
    *param_1 = 0;
    param_1[1] = param_4;
    param_1[2] = 0;
    *(undefined1 *)(param_1 + 3) = 0;
  }
  return param_1;
}



// FUNCTION 1401090ca FUN_1401090ca body=402 status=ok
// SIG undefined FUN_1401090ca(void)

double * FUN_1401090ca(longlong param_1,undefined8 param_2,double *param_3)

{
  char cVar1;
  int iVar2;
  uint *puVar3;
  undefined1 uVar4;
  float fVar5;
  double *pdVar6;
  undefined7 uVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  double dVar11;
  uint uVar12;
  double dVar13;
  double dVar14;
  
  puVar3 = *(uint **)(param_1 + 0x58);
  uVar12 = *puVar3;
  uVar10 = (uint)param_2;
  if (((int)uVar10 < (int)uVar12) ||
     ((fVar5 = (float)((ulonglong)param_2 >> 0x20), uVar12 == uVar10 && (fVar5 < 0.0)))) {
    cVar1 = *(char *)(param_1 + 0x50);
    if (cVar1 == '\x05') {
      return (double *)0x0;
    }
    dVar11 = (double)((ulonglong)uVar12 << 0x20 | 0x80000000);
    if (cVar1 != '\x04') {
      if (cVar1 != '\x03') {
        return (double *)0x0;
      }
      pdVar6 = *(double **)(param_1 + 0x68);
      dVar13 = *pdVar6;
      cVar1 = *(char *)((longlong)pdVar6 + 0x1c);
      if (cVar1 == '\0') {
        dVar14 = 0.0;
        iVar8 = puVar3[1] - uVar12;
        if (iVar8 != 0) {
          dVar14 = pdVar6[4] - dVar13;
          goto LAB_1401091ea;
        }
      }
      else {
        if (cVar1 != '\x02') {
          uVar7 = (undefined7)((ulonglong)pdVar6 >> 8);
          goto joined_r0x000140109230;
        }
        dVar14 = (double)*(float *)(pdVar6 + 1);
      }
      goto LAB_1401091ff;
    }
    pdVar6 = *(double **)(param_1 + 0x68);
    dVar13 = *pdVar6;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x60);
    uVar12 = puVar3[iVar2 + -1];
    if ((int)uVar10 <= (int)uVar12) {
      if (uVar12 != uVar10) {
        return (double *)0x0;
      }
      if (fVar5 <= 0.0) {
        return (double *)0x0;
      }
    }
    cVar1 = *(char *)(param_1 + 0x51);
    if (cVar1 == '\x05') {
      return (double *)0x0;
    }
    dVar11 = (double)((ulonglong)uVar12 | 0x7fffffff00000000);
    if (cVar1 != '\x04') {
      if (cVar1 != '\x03') {
        return (double *)0x0;
      }
      pdVar6 = *(double **)(param_1 + 0x68);
      lVar9 = (longlong)(*(int *)(param_1 + 0x70) + -1);
      dVar13 = pdVar6[lVar9 * 4];
      cVar1 = *(char *)((longlong)pdVar6 + lVar9 * 0x20 + 0x1c);
      if (cVar1 == '\0') {
        dVar14 = 0.0;
        iVar8 = uVar12 - puVar3[(longlong)iVar2 + -2];
        if (iVar8 != 0) {
          dVar14 = dVar13 - pdVar6[((longlong)iVar2 + -2) * 4];
LAB_1401091ea:
          dVar14 = dVar14 / (double)iVar8;
        }
      }
      else {
        if (cVar1 != '\x02') {
          uVar7 = (undefined7)((ulonglong)pdVar6 >> 8);
joined_r0x000140109230:
          pdVar6 = (double *)CONCAT71(uVar7,1);
          if (cVar1 != '\x01') {
            return pdVar6;
          }
          goto LAB_140109146;
        }
        pdVar6 = pdVar6 + lVar9 * 4;
        dVar14 = (double)*(float *)((longlong)pdVar6 + 0xc);
      }
LAB_1401091ff:
      *param_3 = dVar14;
      param_3[1] = dVar13;
      uVar7 = (undefined7)((ulonglong)pdVar6 >> 8);
      uVar4 = 2;
      lVar9 = 0x10;
      goto LAB_140109152;
    }
    pdVar6 = (double *)((longlong)(*(int *)(param_1 + 0x70) + -1) * 0x20);
    dVar13 = *(double *)(*(longlong *)(param_1 + 0x68) + (longlong)pdVar6);
  }
LAB_140109146:
  *param_3 = dVar13;
  uVar7 = (undefined7)((ulonglong)pdVar6 >> 8);
  uVar4 = 1;
  lVar9 = 8;
LAB_140109152:
  *(uint *)((longlong)param_3 + lVar9) = uVar12;
  *(undefined1 *)(param_3 + 10) = uVar4;
  param_3[0xb] = dVar11;
  return (double *)CONCAT71(uVar7,1);
}



// FUNCTION 14010925c FUN_14010925c body=740 status=ok
// SIG undefined FUN_14010925c(void)

double * FUN_14010925c(double *param_1,longlong param_2,int param_3,int param_4,undefined8 *param_5)

{
  char cVar1;
  int *piVar2;
  longlong lVar3;
  double dVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  bool bVar15;
  bool bVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  
  piVar2 = *(int **)(param_2 + 0x58);
  lVar3 = *(longlong *)(param_2 + 0x68);
  iVar14 = piVar2[param_4];
  iVar9 = piVar2[param_3];
  lVar10 = (longlong)param_3 * 0x20;
  lVar11 = (longlong)param_4 * 0x20;
  if (param_5 == (undefined8 *)0x0) {
    uVar25 = 0;
    uVar26 = 0;
    iVar8 = 0;
  }
  else {
    iVar8 = *(int *)((longlong)param_5 + 0x14) * *(int *)(param_5 + 2);
    uVar25 = (undefined4)*param_5;
    uVar26 = (undefined4)((ulonglong)*param_5 >> 0x20);
  }
  iVar12 = iVar14 - iVar9;
  cVar1 = *(char *)(lVar3 + 0x1c + lVar10);
  bVar15 = (*(byte *)(lVar3 + 0x18 + lVar10) & 0xfe) == 2;
  bVar16 = (*(byte *)(lVar3 + 0x18 + lVar11) & 0xfd) == 1;
  dVar18 = *(double *)(lVar3 + lVar10) + (double)CONCAT44(uVar26,uVar25);
  dVar17 = (double)*(float *)(lVar3 + 0xc + lVar10);
  dVar4 = (double)*(float *)(lVar3 + 0x14 + lVar10);
  dVar19 = *(double *)(lVar3 + lVar11) + (double)CONCAT44(uVar26,uVar25);
  dVar20 = (double)*(float *)(lVar3 + 8 + lVar11);
  dVar22 = (double)*(float *)(lVar3 + 0x10 + lVar11);
  dVar23 = dVar4;
  dVar24 = dVar19;
  bVar5 = bVar15;
  dVar21 = dVar18;
  if ((param_5 != (undefined8 *)0x0) && (*(char *)(param_5 + 3) == '\x01')) {
    iVar13 = *piVar2 - iVar14;
    iVar14 = (*piVar2 - iVar9) + piVar2[*(int *)(param_2 + 0x60) + -1];
    dVar21 = -dVar17;
    dVar17 = -dVar20;
    dVar20 = dVar21;
    dVar23 = dVar22;
    dVar24 = dVar18;
    iVar9 = iVar13 + piVar2[*(int *)(param_2 + 0x60) + -1];
    bVar5 = bVar16;
    bVar16 = bVar15;
    dVar22 = dVar4;
    dVar21 = dVar19;
  }
  dVar4 = (double)iVar12;
  iVar9 = iVar9 + iVar8;
  cVar7 = '\x02';
  if (*(char *)(lVar3 + 0x1c + lVar11) != '\x02') {
    cVar7 = cVar1;
  }
  if (DAT_14c760fd8 == 0) {
    cVar7 = cVar1;
  }
  if (cVar1 != '\0') {
    cVar7 = cVar1;
  }
  if (cVar7 == '\x02') {
    if ((((((dVar18 != dVar19) || (NAN(dVar18) || NAN(dVar19))) || (dVar17 != 0.0)) ||
         ((NAN(dVar17) || (dVar20 != 0.0)))) ||
        ((NAN(dVar20) || ((dVar23 != 0.0 || (NAN(dVar23))))))) || ((dVar22 != 0.0 || (NAN(dVar22))))
       ) {
      if (bVar5 == false && bVar16 == false) {
        *param_1 = dVar4;
        param_1[1] = dVar21;
        param_1[2] = dVar17 * dVar4 * 0.3333333333333333 + dVar21;
        param_1[3] = dVar24 - dVar20 * dVar4 * 0.3333333333333333;
        param_1[4] = dVar24;
        *(int *)(param_1 + 5) = iVar9;
        uVar6 = 6;
      }
      else {
        FUN_1475268c8(param_1,*(undefined8 *)(param_2 + 0x110),iVar9,iVar9,dVar21,dVar17,dVar23,
                      bVar5,iVar14 + iVar8,dVar24,dVar20,dVar22,bVar16);
        uVar6 = 7;
      }
      goto LAB_1401093cf;
    }
  }
  else if (cVar7 == '\0') {
    dVar24 = dVar24 - dVar21;
    if ((dVar24 != 0.0) || (NAN(dVar24))) {
      *param_1 = dVar24 / dVar4;
      param_1[1] = dVar21;
      *(int *)(param_1 + 2) = iVar9;
      uVar6 = 2;
      goto LAB_1401093cf;
    }
  }
  *param_1 = dVar21;
  *(int *)(param_1 + 1) = iVar9;
  uVar6 = 1;
LAB_1401093cf:
  *(undefined1 *)(param_1 + 10) = uVar6;
  param_1[0xb] = (double)CONCAT44(iVar14 + iVar8,iVar9);
  return param_1;
}



// FUNCTION 140109560 FUN_140109560 body=108 status=ok
// SIG undefined FUN_140109560(void)

undefined8 FUN_140109560(longlong param_1)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_40 [24];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *(undefined8 *)(param_1 + 0xc60);
  FUN_1446dcdd4(local_40);
  uVar1 = FUN_1401095ce(local_40);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401095ce FUN_1401095ce body=93 status=ok
// SIG undefined FUN_1401095ce(void)

undefined8 FUN_1401095ce(undefined8 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [40];
  undefined1 local_40 [40];
  ulonglong local_18;
  
  lVar1 = DAT_14cb8d7b8;
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14cb8d7b8 == 0) {
    uVar2 = 0;
  }
  else {
    FUN_1447a97f4(local_40,param_1);
    uVar2 = FUN_14010962c(lVar1,local_40);
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14010962c FUN_14010962c body=447 status=ok
// SIG undefined FUN_14010962c(void)

longlong FUN_14010962c(longlong *param_1,uint *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong *puVar5;
  uint *puVar6;
  int iVar7;
  longlong lVar8;
  uint *puVar9;
  uint uVar10;
  longlong *plVar11;
  longlong lVar12;
  ulonglong uVar13;
  
  iVar7 = (int)param_1[0x59];
  uVar10 = *param_2;
  if ((longlong)iVar7 == -1) {
    if (((uVar10 != 0) && (param_2[1] != 0)) && (uVar10 != DAT_14c948000)) {
      puVar5 = &DAT_14c948028;
      goto LAB_140109677;
    }
LAB_14010978c:
    puVar5 = (ulonglong *)((longlong)&DAT_14c948618 + 4);
    uVar10 = (uint)DAT_14c948618;
  }
  else {
    if (((uVar10 == 0) || (uVar4 = param_2[1], uVar4 == 0)) || (uVar10 == DAT_14c948000))
    goto LAB_14010978c;
    puVar9 = param_2 + 2;
    if (0 < (int)param_2[9]) {
      puVar9 = *(uint **)(param_2 + 6);
    }
    if (1 < (int)uVar4) {
      puVar9 = *(uint **)(param_2 + 6);
    }
    if (uVar4 == 1 && 0 < iVar7) {
      puVar6 = (uint *)&DAT_14c948618;
      if (*(int *)((longlong)param_1 + 0x2cc) == 1) {
        puVar6 = puVar9;
      }
      uVar10 = *puVar6;
      puVar5 = (ulonglong *)(puVar6 + 1);
    }
    else {
      if ((int)uVar4 <= iVar7) goto LAB_14010978c;
      puVar5 = (ulonglong *)(puVar9 + (longlong)iVar7 * 3 + 1);
      uVar10 = puVar9[(longlong)iVar7 * 3];
    }
  }
LAB_140109677:
  uVar2 = *puVar5;
  uVar13 = uVar2 >> 0x20;
  uVar4 = uVar10;
  if (uVar13 != 0) {
    uVar4 = FUN_144a78877(uVar10,uVar13);
  }
  if ((int)param_1[0x50] != *(int *)((longlong)param_1 + 0x2ac)) {
    plVar11 = param_1 + 0x56;
    if ((longlong *)param_1[0x57] != (longlong *)0x0) {
      plVar11 = (longlong *)param_1[0x57];
    }
    iVar7 = *(int *)((longlong)plVar11 + (ulonglong)((int)param_1[0x58] - 1U & uVar4) * 4);
    if (iVar7 != -1) {
      lVar3 = param_1[0x4f];
      lVar12 = 0;
      do {
        lVar8 = (longlong)iVar7 * 0x20;
        if ((*(uint *)(lVar3 + lVar8) == uVar10) &&
           (lVar1 = lVar3 + lVar8, *(int *)(lVar1 + 8) == (int)(uVar2 >> 0x20))) {
          lVar12 = 0;
          if ((lVar1 != 0) && (plVar11 = (longlong *)(lVar1 + 0x10), plVar11 != (longlong *)0x0)) {
            if (*plVar11 == 0) goto LAB_14010979e;
            lVar12 = *(longlong *)(*plVar11 + 0x30);
            if (lVar12 == 0) {
              (**(code **)(*param_1 + 0x420))(param_1);
              lVar12 = *(longlong *)(*plVar11 + 0x30);
            }
          }
          break;
        }
        iVar7 = *(int *)(lVar3 + 0x18 + lVar8);
      } while (iVar7 != -1);
      goto LAB_140109717;
    }
  }
LAB_14010979e:
  lVar12 = 0;
LAB_140109717:
  if (*(longlong *)(param_2 + 6) != 0) {
    FUN_1400020a8();
  }
  return lVar12;
}



// FUNCTION 1401097ec FUN_1401097ec body=407 status=ok
// SIG undefined FUN_1401097ec(void)

undefined8
FUN_1401097ec(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
             undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  undefined1 auStack_98 [32];
  longlong local_78;
  undefined8 local_70;
  undefined8 local_68;
  uint local_60;
  int local_5c;
  longlong local_58;
  uint local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_5c = 0;
  if (param_4 == 0) {
    local_60 = 0;
    iVar1 = 0;
  }
  else {
    local_60 = *(uint *)(param_4 + 0xc);
    if ((int)local_60 < DAT_14c9647dc) {
      lVar3 = (ulonglong)((local_60 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_60 >> 0x10) * 8);
    }
    else {
      lVar3 = 0;
    }
    iVar1 = *(int *)(lVar3 + 0x10);
    if (*(int *)(lVar3 + 0x10) == 0) {
      LOCK();
      iVar1 = DAT_14c964868 + 1;
      UNLOCK();
      iVar2 = DAT_14c964868 + 1;
      bVar4 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar1;
      if (bVar4) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar2);
      }
      LOCK();
      iVar1 = *(int *)(lVar3 + 0x10);
      bVar4 = iVar1 == 0;
      if (bVar4) {
        *(int *)(lVar3 + 0x10) = iVar2;
        iVar1 = 0;
      }
      UNLOCK();
      if (bVar4) {
        iVar1 = iVar2;
      }
    }
  }
  local_5c = iVar1;
  FUN_140109984(&local_58,param_1);
  local_68 = param_6;
  local_70 = param_5;
  local_78 = param_4;
  FUN_1448275b3(param_2,param_1,*(undefined4 *)(param_1 + 0x118),param_3);
  if ((((local_4c != 0) && (-1 < (int)local_50)) && ((int)local_50 < DAT_14c9647dc)) &&
     (((lVar3 = (ulonglong)((local_50 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_50 >> 0x10) * 8), lVar3 != 0 &&
       (*(int *)(lVar3 + 0x10) == local_4c)) && ((*(uint *)(lVar3 + 8) & 0x10200000) == 0)))) {
    ReleaseSRWLockShared((PSRWLOCK)(local_58 + 0x140));
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140109984 FUN_140109984 body=397 status=ok
// SIG undefined FUN_140109984(void)

longlong * FUN_140109984(longlong *param_1,longlong param_2,ulonglong *param_3)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  
  *param_1 = param_2;
  uVar6 = *param_3;
  param_1[1] = uVar6;
  if ((((uVar6 >> 0x20 != 0) && (uVar2 = (uint)uVar6, -1 < (int)uVar2)) &&
      ((int)uVar2 < DAT_14c9647dc)) &&
     (((lVar7 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0xd & 0x3fff8)), lVar7 != 0 &&
       (*(int *)(lVar7 + 0x10) == (int)(uVar6 >> 0x20))) &&
      ((*(uint *)(lVar7 + 8) & 0x10200000) == 0)))) {
    AcquireSRWLockShared((PSRWLOCK)(param_2 + 0x140));
    cVar1 = FUN_140109b12(*param_1 + 0x148,param_1 + 1);
    while (cVar1 == '\0') {
      ReleaseSRWLockShared((PSRWLOCK)(*param_1 + 0x140));
      lVar7 = *param_1;
      AcquireSRWLockExclusive((PSRWLOCK)(lVar7 + 0x140));
      *(longlong *)(*param_1 + 0x148) = param_1[1];
      lVar3 = *param_1;
      if (*(int *)(lVar3 + 0x118) != 0) {
        lVar8 = 0;
        uVar6 = 0;
        do {
          if ((*(int *)((longlong)param_1 + 0xc) == 0) ||
             (uVar2 = *(uint *)(param_1 + 1), (int)uVar2 < 0)) {
LAB_140109b0d:
            uVar4 = 0;
          }
          else {
            uVar4 = 0;
            if ((int)uVar2 < DAT_14c9647dc) {
              puVar5 = (undefined8 *)
                       ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
              if (((puVar5 == (undefined8 *)0x0) ||
                  (*(int *)(puVar5 + 2) != *(int *)((longlong)param_1 + 0xc))) ||
                 ((*(uint *)(puVar5 + 1) & 0x10200000) != 0)) goto LAB_140109b0d;
              uVar4 = *puVar5;
            }
          }
          FUN_140109bb6(lVar3 + lVar8,uVar4);
          uVar6 = uVar6 + 1;
          lVar3 = *param_1;
          lVar8 = lVar8 + 0x38;
        } while (uVar6 < *(uint *)(lVar3 + 0x118));
      }
      ReleaseSRWLockExclusive((PSRWLOCK)(lVar7 + 0x140));
      AcquireSRWLockShared((PSRWLOCK)(*param_1 + 0x140));
      cVar1 = FUN_140109b12(*param_1 + 0x148);
    }
  }
  return param_1;
}



// FUNCTION 140109b12 FUN_140109b12 body=164 status=ok
// SIG undefined FUN_140109b12(void)

bool FUN_140109b12(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  bool bVar5;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = *param_2;
  bVar5 = true;
  if ((uVar1 != uVar3) || (uVar2 != param_2[1])) {
    if ((uVar2 == 0) ||
       (((((int)uVar1 < 0 || (DAT_14c9647dc <= (int)uVar1)) ||
         (lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar4 == 0)) ||
        ((*(uint *)(lVar4 + 0x10) != uVar2 || ((*(uint *)(lVar4 + 8) & 0x10200000) != 0)))))) {
      if ((param_2[1] != 0) &&
         (((-1 < (int)uVar3 && ((int)uVar3 < DAT_14c9647dc)) &&
          ((lVar4 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8), lVar4 != 0 &&
           (*(uint *)(lVar4 + 0x10) == param_2[1])))))) {
        bVar5 = (*(uint *)(lVar4 + 8) & 0x10200000) != 0;
      }
    }
    else {
      bVar5 = false;
    }
  }
  return bVar5;
}



// FUNCTION 140109bb6 FUN_140109bb6 body=1842 status=ok
// SIG undefined FUN_140109bb6(void)

longlong FUN_140109bb6(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  undefined *puVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  int iVar10;
  ulonglong uVar11;
  longlong *plVar12;
  bool bVar13;
  undefined1 auStack_e8 [32];
  wchar_t *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  code *local_b0;
  wchar_t *local_a8;
  code *local_a0;
  undefined1 *local_98;
  code **local_90;
  code *local_88;
  code *local_80;
  longlong local_78;
  code *local_70;
  undefined1 local_68 [8];
  code *local_60;
  undefined1 local_58 [8];
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if ((((*(int *)((longlong)param_1 + 0x14) == 0) ||
       (uVar1 = *(uint *)(param_1 + 2), (int)uVar1 < 0)) || (DAT_14c9647dc <= (int)uVar1)) ||
     (((plVar9 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       plVar9 == (longlong *)0x0 || ((int)plVar9[2] != *(int *)((longlong)param_1 + 0x14))) ||
      (((*(uint *)(plVar9 + 1) & 0x10200000) != 0 || (plVar5 = param_1 + 3, *plVar9 == 0)))))) {
    param_1[3] = 0;
  }
  else {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c951a88) && (FUN_144b3d300(), DAT_14c951a88 == -1)) {
      local_b8 = FUN_140342cba();
      local_b0 = FUN_1468c7f1e;
      local_c0 = 0;
      local_c8 = (wchar_t *)0x8001;
      FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0);
      atexit(FUN_14280c819);
      _Init_thread_footer();
    }
    lVar3 = *plVar5;
    if (lVar3 == 0) {
      if ((int)param_1[6] != 0) goto LAB_140109cce;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x24) == 0) {
LAB_140109cc2:
        bVar13 = false;
      }
      else {
        uVar1 = *(uint *)(param_1 + 4);
        bVar13 = false;
        if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
          lVar8 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
          if ((lVar8 == 0) || (*(int *)(lVar8 + 0x10) != *(int *)((longlong)param_1 + 0x24)))
          goto LAB_140109cc2;
          bVar13 = (*(uint *)(lVar8 + 8) & 0x10200000) == 0;
        }
      }
      if ((!bVar13) && ((int)param_1[6] != 0)) {
LAB_140109cce:
        lVar3 = FUN_14007daa4(plVar5,0,0);
        if (lVar3 == 0) {
LAB_140109d5a:
          if (*plVar5 != 0) {
            *plVar5 = 0;
            param_1[4] = 0;
          }
          goto LAB_140109d73;
        }
        puVar4 = *(undefined **)(lVar3 + 8);
        if (DAT_14c951a40 == 0) {
          bVar13 = puVar4 != (undefined *)0x0;
          if (puVar4 != &DAT_14c951a38 && bVar13) {
            do {
              puVar4 = *(undefined **)(puVar4 + 0x30);
              bVar13 = puVar4 != (undefined *)0x0;
              if (puVar4 == &DAT_14c951a38) break;
            } while (puVar4 != (undefined *)0x0);
          }
          if (!bVar13) goto LAB_140109d5a;
        }
        else if ((*(ulonglong *)(puVar4 + 0x18) & DAT_14c951a40) == 0) goto LAB_140109d5a;
        *plVar5 = lVar3;
      }
      lVar8 = FUN_1448f9ec4(lVar3);
      if (((lVar8 != 0) && (*(int *)(lVar8 + 0x38) <= (int)param_2[7])) &&
         (*(longlong *)(param_2[6] + (longlong)*(int *)(lVar8 + 0x38) * 8) == lVar8 + 0x30))
      goto LAB_140109ef4;
    }
  }
LAB_140109d73:
  if (param_2 != (longlong *)0x0) {
    plVar9 = (longlong *)*param_1;
    plVar5 = param_2;
    plVar12 = plVar9;
    while (plVar12 != (longlong *)0x0) {
      for (lVar3 = plVar5[10]; lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x18)) {
        if ((~*(uint *)(*(longlong *)(lVar3 + 8) + 0x18) & 0x8001) == 0) goto LAB_140109dba;
      }
      plVar5 = (longlong *)(**(code **)(*plVar5 + 0x2b0))(plVar5);
      plVar12 = plVar5;
    }
  }
LAB_140109dfc:
  if (param_2 != (longlong *)0x0) {
    if (DAT_14c948fa0 == 0) {
      local_70 = (code *)&DAT_1427db2a2;
      lVar3 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
      DAT_14c948fa0 = lVar3;
      FUN_1446f470e(local_68,L"ScriptStruct",1);
      local_98 = &LAB_1468915ce;
      local_a0 = FUN_1427dc742;
      local_b0 = (code *)0x149e2b68a;
      local_a8 = (wchar_t *)CONCAT44(local_a8._4_4_,199);
      local_b8 = 0x10;
      local_c0 = CONCAT44(local_c0._4_4_,0x10000020);
      local_c8._0_4_ = 8;
      local_90 = &local_70;
      FUN_14574b4b2(lVar3);
      DAT_14c948fa0 = lVar3;
      if (DAT_14c927740 == 0) {
        local_90 = &local_50;
        local_50 = FUN_1449e2820;
        local_80 = FUN_14081d0ea;
        local_88 = FUN_14081d0ea;
        local_98 = &LAB_146856450;
        local_a0 = FUN_1427b121c;
        local_a8 = L"Engine";
        local_b0 = (code *)0x0;
        local_b8 = CONCAT44(local_b8._4_4_,0x10000021);
        local_c0 = CONCAT44(local_c0._4_4_,8);
        local_c8._0_4_ = 0x28;
        FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
      }
      lVar8 = DAT_14c948fa0;
      lVar3 = DAT_14c927740;
      if (DAT_14c948f88 == 0) {
        local_60 = (code *)&DAT_1427db2a2;
        lVar6 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
        DAT_14c948f88 = lVar6;
        FUN_1446f470e(local_58,L"Struct",1);
        local_90 = &local_60;
        local_98 = &LAB_146891313;
        local_a0 = FUN_146272f63;
        local_b0 = (code *)0x149e2b68a;
        local_a8 = (wchar_t *)CONCAT44(local_a8._4_4_,199);
        local_b8 = 8;
        local_c0 = CONCAT44(local_c0._4_4_,0x10000020);
        local_c8._0_4_ = 8;
        FUN_14574b4b2(lVar6);
        DAT_14c948f88 = lVar6;
        if (DAT_14c927740 == 0) {
          local_90 = &local_50;
          local_50 = FUN_1449e2820;
          local_80 = FUN_14081d0ea;
          local_88 = FUN_14081d0ea;
          local_98 = &LAB_146856450;
          local_a0 = FUN_1427b121c;
          local_a8 = L"Engine";
          local_b0 = (code *)0x0;
          local_b8 = CONCAT44(local_b8._4_4_,0x10000021);
          local_c0 = CONCAT44(local_c0._4_4_,8);
          local_c8._0_4_ = 0x28;
          local_78 = lVar6;
          FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
        }
        lVar6 = DAT_14c927740;
        local_78 = DAT_14c948f88;
        uVar7 = FUN_1400163b0();
        local_c8 = L"Struct";
        FUN_14574b446(uVar7,local_78,lVar6,L"/Script/CoreUObject");
      }
      local_c8 = L"ScriptStruct";
      FUN_14574b446(DAT_14c948f88,lVar8,lVar3,L"/Script/CoreUObject");
    }
    if (((*(int *)(DAT_14c948fa0 + 0x38) <= *(int *)(param_2[2] + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(DAT_14c948fa0 + 0x38) * 8) ==
         DAT_14c948fa0 + 0x30)) &&
       (lVar3 = (**(code **)(*param_2 + 0x2f8))(param_2,*param_1), lVar3 != 0)) goto LAB_140109e4b;
  }
  lVar3 = 0;
LAB_140109ed9:
  *(undefined4 *)(param_1 + 2) = 0;
  iVar2 = 0;
  goto LAB_140109ee2;
LAB_140109dba:
  if (*(longlong **)(lVar3 + 0x20) != plVar9) {
    plVar12 = (longlong *)(lVar3 + 0x18);
    do {
      for (lVar3 = *plVar12; lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x18)) {
        if ((~*(uint *)(*(longlong *)(lVar3 + 8) + 0x18) & 0x8001) == 0) goto LAB_140109dba;
      }
      plVar5 = (longlong *)(**(code **)(*plVar5 + 0x2b0))(plVar5);
      plVar12 = plVar5 + 10;
    } while (plVar5 != (longlong *)0x0);
    goto LAB_140109dfc;
  }
LAB_140109e4b:
  for (uVar11 = *(ulonglong *)(lVar3 + 0x10); (uVar11 & 1) == 0;
      uVar11 = *(ulonglong *)(uVar11 + 0x10)) {
    if (uVar11 < 2) goto LAB_140109ed9;
  }
  uVar11 = uVar11 & 0xfffffffffffffffe;
  if (uVar11 == 0) goto LAB_140109ed9;
  if (DAT_14c950c29 != '\0') {
    FUN_1456cec3c(uVar11);
  }
  uVar1 = *(uint *)(uVar11 + 0xc);
  *(uint *)(param_1 + 2) = uVar1;
  if ((int)uVar1 < DAT_14c9647dc) {
    lVar8 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
  }
  else {
    lVar8 = 0;
  }
  iVar2 = *(int *)(lVar8 + 0x10);
  if (*(int *)(lVar8 + 0x10) == 0) {
    LOCK();
    iVar2 = DAT_14c964868 + 1;
    UNLOCK();
    iVar10 = DAT_14c964868 + 1;
    bVar13 = DAT_14c964868 < 1000;
    DAT_14c964868 = iVar2;
    if (bVar13) {
      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                    L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                    iVar10);
    }
    LOCK();
    iVar2 = *(int *)(lVar8 + 0x10);
    bVar13 = iVar2 == 0;
    if (bVar13) {
      *(int *)(lVar8 + 0x10) = iVar10;
      iVar2 = 0;
    }
    UNLOCK();
    if (bVar13) {
      iVar2 = iVar10;
    }
  }
LAB_140109ee2:
  *(int *)((longlong)param_1 + 0x14) = iVar2;
  param_1[3] = lVar3;
  FUN_1449651a4(param_1 + 3,lVar3);
LAB_140109ef4:
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14010a2ea FUN_14010a2ea body=164 status=ok
// SIG undefined FUN_14010a2ea(void)

undefined * FUN_14010a2ea(void)

{
  undefined8 uVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c962b28) {
    FUN_144b3d300(&DAT_14c962b28);
    if (DAT_14c962b28 == -1) {
      uVar1 = FUN_1446f4b16();
      FUN_14000176a(&DAT_14c962ad8,L"FWeakObjectProperty",0x8000000,0,0xc008001,0,uVar1,
                    FUN_1468ec7aa);
      atexit(FUN_14281b4b2);
      _Init_thread_footer(&DAT_14c962b28);
    }
  }
  return &DAT_14c962ad8;
}



// FUNCTION 14010a38e FUN_14010a38e body=93 status=ok
// SIG undefined FUN_14010a38e(void)

void FUN_14010a38e(longlong param_1,int param_2)

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
  FUN_14010a3ec();
  return;
}



// FUNCTION 14010a3ec FUN_14010a3ec body=262 status=ok
// SIG undefined FUN_14010a3ec(void)

void FUN_14010a3ec(undefined8 *param_1,int param_2,int param_3,longlong param_4)

{
  longlong lVar1;
  void *_Src;
  ulonglong *puVar2;
  void *_Dst;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  if (param_3 != 0) {
    if ((param_3 < 0) || (param_4 - 0x80000000U < 0xffffffff80000001)) {
                    /* WARNING: Subroutine does not return */
      FUN_1456bd9fc(param_3,param_4);
    }
    _Src = (void *)*param_1;
    iVar3 = (int)param_4 * param_3;
    puVar2 = TlsGetValue(DAT_14ca954e4);
    uVar5 = (ulonglong)((uint)(0xf < iVar3) * 8);
    lVar1 = uVar5 + 7;
    uVar5 = uVar5 ^ 0xfffffffffffffff8;
    _Dst = (void *)(*puVar2 + lVar1 & uVar5);
    uVar4 = (longlong)_Dst + (longlong)iVar3;
    if (puVar2[1] < uVar4) {
      FUN_140023dd8(puVar2,(uint)(0xf < iVar3) * 8 + 8 + iVar3);
      _Dst = (void *)(lVar1 + *puVar2 & uVar5);
      uVar4 = (longlong)iVar3 + (longlong)_Dst;
    }
    *puVar2 = uVar4;
    *param_1 = _Dst;
    if (param_2 != 0 && _Src != (void *)0x0) {
      if (param_3 < param_2) {
        param_2 = param_3;
      }
      memcpy(_Dst,_Src,param_2 * param_4);
      return;
    }
  }
  return;
}



// FUNCTION 14010a4f4 FUN_14010a4f4 body=152 status=ok
// SIG undefined FUN_14010a4f4(void)

void FUN_14010a4f4(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  
  iVar2 = *(int *)(param_1 + 0x18);
  if (iVar2 != 0) {
    plVar1 = *(longlong **)(param_1 + 8);
    uVar5 = 0;
    do {
      FUN_14010a58c(uVar5 * 0x160 + *plVar1);
      uVar4 = (int)uVar5 + 1;
      plVar1 = plVar1 + (0xff < uVar4);
      uVar5 = (ulonglong)uVar4;
      if (0xff < uVar4) {
        uVar5 = 0;
      }
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  iVar2 = *(int *)(param_1 + 0x90);
  if (0 < iVar2) {
    lVar3 = 0;
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x88) + lVar3 * 8);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x60))(plVar1,param_2);
        iVar2 = *(int *)(param_1 + 0x90);
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < iVar2);
  }
  return;
}



// FUNCTION 14010a58c FUN_14010a58c body=313 status=ok
// SIG undefined FUN_14010a58c(void)

void FUN_14010a58c(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  double local_28;
  double local_20;
  double local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(double *)(param_1 + 0x44) = (double)*param_1 + *(double *)(param_1 + 0x44);
  *(double *)(param_1 + 0x46) = (double)param_1[1] + *(double *)(param_1 + 0x46);
  *(double *)(param_1 + 0x48) = (double)param_1[2] + *(double *)(param_1 + 0x48);
  if (1.1754944e-38 < param_1[0x4d]) {
    fVar1 = param_1[4];
    fVar2 = param_1[5];
    fVar3 = param_1[6];
    if ((((fVar1 != 0.0) || (NAN(fVar1))) || (fVar2 != 0.0)) ||
       (((NAN(fVar2) || (fVar3 != 0.0)) || (NAN(fVar3))))) {
      local_18 = (double)fVar3;
      local_20 = (double)fVar2;
      local_28 = (double)fVar1;
      FUN_14013720c(&local_48,param_1 + 0x30,&local_28,0x3ff0000000000000);
      goto LAB_14010a631;
    }
  }
  local_48 = *(undefined8 *)(param_1 + 0x30);
  uStack_40 = *(undefined8 *)(param_1 + 0x32);
  local_38 = *(undefined8 *)(param_1 + 0x34);
  uStack_30 = *(undefined8 *)(param_1 + 0x36);
LAB_14010a631:
  param_1[0x34] = (float)local_38;
  param_1[0x35] = local_38._4_4_;
  param_1[0x36] = (float)uStack_30;
  param_1[0x37] = uStack_30._4_4_;
  *(undefined8 *)(param_1 + 0x30) = local_48;
  *(undefined8 *)(param_1 + 0x32) = uStack_40;
  param_1[0] = 0.0;
  param_1[1] = 0.0;
  param_1[2] = 0.0;
  param_1[4] = 0.0;
  param_1[5] = 0.0;
  param_1[6] = 0.0;
  param_1[0x4e] = 0.0;
  param_1[0x4f] = 0.0;
  param_1[0x50] = 0.0;
  param_1[0x51] = 0.0;
  param_1[0x52] = 0.0;
  param_1[0x53] = 0.0;
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14010a6cd FUN_14010a6cd body=1184 status=ok
// SIG undefined FUN_14010a6cd(void)

uint * FUN_14010a6cd(longlong param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  uint *puVar3;
  undefined8 uVar4;
  byte bVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  undefined1 auStack_108 [32];
  undefined1 *local_e8;
  wchar_t *local_d8;
  undefined1 local_c9;
  uint local_c8;
  int iStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  longlong local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  longlong local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  longlong local_68 [5];
  
  local_68[4] = DAT_14c707940 ^ (ulonglong)auStack_108;
  puVar3 = *(uint **)(param_2 + 0x38c0);
  if (puVar3 == (uint *)0x0) {
    puVar3 = (uint *)FUN_14001cc68(0x80);
    puVar3[4] = 0;
    puVar3[5] = 0;
    puVar3[6] = 0;
    puVar3[7] = 0;
    puVar3[0] = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar3[7] = 0x80;
    puVar3[8] = 0;
    puVar3[9] = 0;
    puVar3[10] = 0;
    puVar3[0xb] = 0;
    puVar3[0xc] = 0;
    puVar3[0xd] = 0;
    puVar3[0xe] = 0;
    puVar3[0xf] = 0;
    puVar3[0x10] = 0;
    puVar3[0x11] = 0;
    puVar3[0x12] = 0;
    puVar3[0x13] = 0;
    puVar3[0x14] = 0;
    puVar3[0x15] = 0;
    puVar3[0x16] = 0;
    puVar3[0x17] = 0;
    puVar3[0x18] = 0;
    puVar3[0x19] = 0;
    puVar3[0x1a] = 0;
    puVar3[0x1b] = 0;
    puVar3[0x1c] = 0;
    puVar3[0x1d] = 0;
    puVar3[0x1e] = 0;
    puVar3[0x1f] = 0;
    *(uint **)(param_2 + 0x38c0) = puVar3;
  }
  uVar2 = *(uint *)(param_2 + 0x38b8);
  local_b8 = 0;
  local_c8 = 0;
  iStack_c4 = 0;
  uStack_c0 = 0;
  uStack_bc = 0;
  uStack_b0 = 0x8000000000;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68[0] = 0;
  local_68[1] = 0;
  local_68[2] = 0;
  local_68[3] = 0;
  if (puVar3 == &local_c8) {
    puVar3[8] = 0;
    puVar3[9] = 0;
    puVar3[10] = 0;
    puVar3[0xb] = 0;
  }
  else {
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    if (*(longlong *)(puVar3 + 4) == 0) {
      uStack_b0._0_4_ = 0;
      uStack_b0._4_4_ = 0x80;
      local_b8 = 0;
    }
    else {
      FUN_1400020a8();
    }
    *(longlong *)(puVar3 + 4) = local_b8;
    local_b8 = 0;
    puVar3[6] = (uint)uStack_b0;
    puVar3[7] = uStack_b0._4_4_;
    uStack_b0 = 0;
    puVar3[8] = (uint)local_a8;
    puVar3[9] = local_a8._4_4_;
    puVar3[10] = (uint)uStack_a0;
    puVar3[0xb] = uStack_a0._4_4_;
    if (*(longlong *)(puVar3 + 0xc) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(puVar3 + 0xc) = local_98;
    puVar3[0xe] = (uint)uStack_90;
    puVar3[0xf] = uStack_90._4_4_;
  }
  uStack_90 = 0;
  local_98 = 0;
  puVar3[0x14] = (uint)local_78;
  puVar3[0x15] = local_78._4_4_;
  puVar3[0x16] = (uint)uStack_70;
  puVar3[0x17] = uStack_70._4_4_;
  puVar3[0x10] = (uint)local_88;
  puVar3[0x11] = local_88._4_4_;
  puVar3[0x12] = (uint)uStack_80;
  puVar3[0x13] = uStack_80._4_4_;
  FUN_14010ab6e(puVar3 + 0x18,local_68);
  FUN_14010ab6e(puVar3 + 0x1c,local_68 + 2);
  FUN_144827b96(local_68[2],local_68[3] & 0xffffffff);
  if (local_68[2] != 0) {
    FUN_1400020a8();
  }
  FUN_144827b96(local_68[0]);
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  if (uVar2 != 0) {
    puVar3[6] = uVar2;
    uVar7 = uVar2 + 0x1f;
    if (0x1f < uVar7) {
      uVar8 = uVar7 >> 5;
      if (puVar3[7] + 0x1f >> 5 < uVar8) {
        FUN_14499171c(puVar3,0,uVar8,4);
        puVar3[7] = uVar7 & 0xffffffe0;
      }
      puVar6 = *(uint **)(puVar3 + 4);
      if (*(uint **)(puVar3 + 4) == (uint *)0x0) {
        puVar6 = puVar3;
      }
      if (uVar7 < 0x120) {
        uVar8 = uVar7 >> 3 & 0x3c;
      }
      else {
        uVar8 = uVar8 << 2;
      }
      memset(puVar6,0,(ulonglong)uVar8);
      uVar7 = puVar3[6];
      uVar8 = uVar7 + 0x1f;
      if (-1 < (int)uVar7) {
        uVar8 = uVar7;
      }
      if ((int)uVar7 % 0x20 != 0) {
        puVar6 = *(uint **)(puVar3 + 4);
        if (*(uint **)(puVar3 + 4) == (uint *)0x0) {
          puVar6 = puVar3;
        }
        bVar5 = -(char)((int)uVar7 % 0x20);
        puVar6[(int)uVar8 >> 5] = (puVar6[(int)uVar8 >> 5] << (bVar5 & 0x1f)) >> (bVar5 & 0x1f);
      }
    }
    local_e8 = &local_c9;
    local_c9 = 0;
    local_d8 = L"Hair.Transient.GroupAABB";
    local_c8 = 4;
    if (DAT_14ca84e48 < 4) {
      local_c8 = DAT_14ca84e48;
    }
    local_c8 = local_c8 + (local_c8 == 0);
    uStack_c0 = 0x4109;
    uVar7 = DAT_14ca84e48;
    if (uVar2 * 6 < DAT_14ca84e48) {
      uVar7 = uVar2 * 6;
    }
    local_b8 = 0;
    iStack_c4 = uVar7 + (uVar7 == 0);
    lVar1 = param_1 + 0x70;
    uStack_b0 = FUN_144738de6(param_1 + 0x188,lVar1,&local_d8,&local_c8);
    *(longlong *)(puVar3 + 8) = uStack_b0;
    local_c8 = CONCAT31(local_c8._1_3_,0x1d);
    iStack_c4 = 0;
    uStack_c0 = 0xffffffff;
    local_b8 = 0;
    uVar4 = FUN_14475683e(param_1 + 0x198,lVar1,uStack_b0 + 8,&local_c8);
    *(undefined8 *)(puVar3 + 10) = uVar4;
    local_e8 = &local_c9;
    local_c9 = 0;
    local_d8 = L"Hair.Transient.IndirectDispatchArgs";
    uStack_c0 = 0x4189;
    local_c8 = 4;
    if (DAT_14ca84e48 < 4) {
      local_c8 = DAT_14ca84e48;
    }
    local_b8 = 0;
    local_c8 = local_c8 + (local_c8 == 0);
    uVar7 = uVar2 << 2;
    if (DAT_14ca84e48 <= uVar2 << 2) {
      uVar7 = DAT_14ca84e48;
    }
    iStack_c4 = uVar7 + (uVar7 == 0);
    uStack_b0 = FUN_144738de6(param_1 + 0x188,lVar1,&local_d8,&local_c8);
    *(longlong *)(puVar3 + 0x14) = uStack_b0;
    uVar2 = local_c8 >> 8;
    local_c8 = local_c8 & 0xffffff00;
    iStack_c4 = 0;
    uStack_c0 = 0xffffffff;
    local_b8 = 0;
    if ((*(byte *)(uStack_b0 + 0x68) & 0x80) != 0) {
      local_c8 = CONCAT31((int3)uVar2,0x1c);
    }
    uVar4 = FUN_14475683e(param_1 + 0x198,lVar1,uStack_b0 + 8,&local_c8);
    *(undefined8 *)(puVar3 + 0x16) = uVar4;
  }
  if ((local_68[4] ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14010ab6e FUN_14010ab6e body=80 status=ok
// SIG undefined FUN_14010ab6e(void)

longlong * FUN_14010ab6e(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    FUN_144827b96(*param_1,(int)param_1[1]);
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



// FUNCTION 14010abbe FUN_14010abbe body=22 status=ok
// SIG undefined FUN_14010abbe(void)

undefined1 FUN_14010abbe(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_14010abd4(param_2,param_3);
  return 1;
}



// FUNCTION 14010abd4 FUN_14010abd4 body=406 status=ok
// SIG undefined FUN_14010abd4(void)

longlong * FUN_14010abd4(longlong *param_1,double *param_2)

{
  float *pfVar1;
  double *pdVar2;
  ulonglong *puVar3;
  undefined1 auStack_48 [40];
  float local_20;
  float local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)((longlong)param_1 + 0x44) < 0x3ec) {
    puVar3 = (ulonglong *)param_1[1];
    pfVar1 = (float *)*puVar3 + 1;
    if ((float *)puVar3[1] < pfVar1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_1c,4);
      }
      else {
        FUN_14572512c(param_1,&local_1c);
      }
    }
    else {
      local_1c = *(float *)*puVar3;
      *puVar3 = (ulonglong)pfVar1;
    }
    puVar3 = (ulonglong *)param_1[1];
    pfVar1 = (float *)*puVar3 + 1;
    if ((float *)puVar3[1] < pfVar1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_20,4);
      }
      else {
        FUN_14572512c(param_1,&local_20);
      }
    }
    else {
      local_20 = *(float *)*puVar3;
      *puVar3 = (ulonglong)pfVar1;
    }
    *param_2 = (double)local_1c;
    param_2[1] = (double)local_20;
  }
  else {
    pdVar2 = *(double **)param_1[1];
    if ((double *)((longlong *)param_1[1])[1] < pdVar2 + 1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,param_2,8);
      }
      else {
        thunk_FUN_146821949(param_1,param_2);
      }
    }
    else {
      *param_2 = *pdVar2;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 8;
    }
    param_2 = param_2 + 1;
    pdVar2 = *(double **)param_1[1];
    if ((double *)((longlong *)param_1[1])[1] < pdVar2 + 1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,param_2,8);
      }
      else {
        thunk_FUN_146821949(param_1,param_2);
      }
    }
    else {
      *param_2 = *pdVar2;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 8;
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14010ad6c FUN_14010ad6c body=9 status=ok
// SIG undefined FUN_14010ad6c(void)

void FUN_14010ad6c(longlong param_1)

{
  FUN_14010ad76(param_1 + 0x10);
  return;
}



// FUNCTION 14010ad76 FUN_14010ad76 body=375 status=ok
// SIG undefined FUN_14010ad76(void)

void FUN_14010ad76(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  
  FUN_14010af20();
  *(undefined4 *)(param_1 + 0x110) = 0;
  if (*(longlong *)(param_1 + 0x108) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xd0) = 0;
  if (*(int *)(param_1 + 0xd4) != 0) {
    FUN_14472eb64((longlong *)(param_1 + 200),0);
  }
  *(undefined8 *)(param_1 + 0xf8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xf0) = 0;
  if (0x80 < *(uint *)(param_1 + 0xf4)) {
    *(undefined4 *)(param_1 + 0xf4) = 0x80;
    FUN_1446efbd8(param_1 + 0xd8,0);
  }
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 200) != 0) {
    FUN_1400020a8();
  }
  FUN_14010aeed(*(undefined8 *)(param_1 + 0xb8),*(undefined4 *)(param_1 + 0xc0));
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    FUN_1400020a8();
  }
  puVar3 = *(undefined8 **)(param_1 + 0x68);
  if (puVar3 != (undefined8 *)0x0) {
    piVar2 = (int *)(puVar3 + 1);
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  plVar4 = *(longlong **)(param_1 + 0x10);
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
                    /* WARNING: Could not recover jumptable at 0x00014010aee9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar4 + 0x10))(plVar4);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14010aeed FUN_14010aeed body=51 status=ok
// SIG undefined FUN_14010aeed(void)

void FUN_14010aeed(longlong param_1,int param_2)

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



// FUNCTION 14010af20 FUN_14010af20 body=204 status=ok
// SIG undefined FUN_14010af20(void)

void FUN_14010af20(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar6 = *(longlong *)(param_1 + 0xb8);
  uVar5 = 0;
  if ((longlong)*(int *)(param_1 + 0xc0) != 0) {
    lVar1 = lVar6 + (longlong)*(int *)(param_1 + 0xc0) * 0x18;
    do {
      iVar2 = *(int *)(lVar6 + 0x10);
      if ((longlong)iVar2 != 0) {
        lVar3 = *(longlong *)(lVar6 + 8);
        lVar7 = 0;
        do {
          puVar4 = *(undefined8 **)(lVar3 + lVar7);
          if (puVar4 != (undefined8 *)0x0) {
            (**(code **)*puVar4)(puVar4,1);
          }
          lVar7 = lVar7 + 8;
        } while ((longlong)iVar2 * 8 != lVar7);
      }
      lVar6 = lVar6 + 0x18;
    } while (lVar6 != lVar1);
    uVar5 = *(undefined4 *)(param_1 + 0xc0);
    lVar6 = *(longlong *)(param_1 + 0xb8);
  }
  FUN_14010aeed(lVar6,uVar5);
  *(undefined4 *)(param_1 + 0xc0) = 0;
  if (*(int *)(param_1 + 0xc4) != 0) {
    FUN_14010b220(param_1 + 0xb8,0);
  }
  FUN_14010afec(param_1 + 200,0);
  *(undefined4 *)(param_1 + 0x118) = 0xffffffff;
  return;
}



// FUNCTION 14010afec FUN_14010afec body=236 status=ok
// SIG undefined FUN_14010afec(void)

void FUN_14010afec(longlong param_1,uint param_2)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  
  iVar4 = 1;
  if (3 < param_2) {
    uVar3 = (ulonglong)(param_2 & 0xfffffffe) + 0xf;
    lVar1 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    iVar4 = 1 << ((byte)lVar1 & 0x1f);
  }
  if ((int)param_2 < 1) {
    if (iVar4 < *(int *)(param_1 + 0x48)) {
LAB_14010b0b5:
      FUN_144aa00e6(param_1,param_2);
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_140264164(param_1);
      return;
    }
    FUN_14010b0da(param_1);
    if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(param_2);
    }
  }
  else {
    if (*(int *)(param_1 + 0x48) != iVar4) goto LAB_14010b0b5;
    FUN_14010b0da(param_1);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(uint *)(param_1 + 0xc) != param_2) {
    FUN_14472eb64(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar5 = param_2 + 0x1f & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (((int)uVar5 <= *(int *)(param_1 + 0x2c)) && (*(int *)(param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar2 = 0x80;
  if (0x80 < (int)uVar5) {
    uVar2 = uVar5;
  }
  *(uint *)(param_1 + 0x2c) = uVar2;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 14010b0da FUN_14010b0da body=325 status=ok
// SIG undefined FUN_14010b0da(void)

void FUN_14010b0da(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0xc + (longlong)iVar4 * 0x10) * 4) =
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



// FUNCTION 14010b220 FUN_14010b220 body=113 status=ok
// SIG undefined FUN_14010b220(void)

void FUN_14010b220(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x18,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x18)) {
      uVar2 = uVar1 / 0x18 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x18,8);
  }
  return;
}



// FUNCTION 14010b292 FUN_14010b292 body=113 status=ok
// SIG undefined FUN_14010b292(void)

undefined8 FUN_14010b292(undefined8 param_1,longlong param_2)

{
  ushort uVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  
  plVar5 = (longlong *)FUN_14009d2a0();
  lVar4 = plVar5[1];
  if ((longlong)(int)lVar4 != 0) {
    lVar3 = *plVar5;
    lVar7 = 0;
    do {
      uVar1 = *(ushort *)(lVar3 + 0x16 + lVar7);
      lVar6 = FUN_14482820e(param_2 + 0x28);
      if (((uVar1 != 0xffff) &&
          (*(uint *)(lVar6 + 0x20) != (uint)uVar1 &&
           (int)(uint)uVar1 <= (int)*(uint *)(lVar6 + 0x20))) &&
         (uVar2 = *(uint *)(lVar6 + (ulonglong)(uVar1 >> 5) * 4), (uVar2 >> (uVar1 & 0x1f) & 1) != 0
         )) {
        return CONCAT71((uint7)(uint3)(uVar2 >> 8),1);
      }
      lVar7 = lVar7 + 0x58;
    } while ((longlong)(int)lVar4 * 0x58 - lVar7 != 0);
  }
  return 0;
}



// FUNCTION 14010b303 FUN_14010b303 body=609 status=ok
// SIG undefined FUN_14010b303(void)

void FUN_14010b303(longlong param_1,longlong param_2,uint param_3)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  bool bVar15;
  
  iVar6 = *(int *)(param_2 + 0x20);
  if ((param_3 & 2) == 0) {
    iVar3 = iVar6;
    if (((param_3 & 1) != 0) && (iVar3 = *(int *)(param_1 + 0x20), *(int *)(param_1 + 0x20) < iVar6)
       ) {
      iVar3 = iVar6;
    }
  }
  else {
    iVar3 = *(int *)(param_1 + 0x20);
    if (iVar6 <= *(int *)(param_1 + 0x20)) {
      iVar3 = iVar6;
    }
  }
  iVar7 = iVar3 - iVar6;
  if (iVar7 < 0) {
    *(int *)(param_2 + 0x20) = iVar3;
    iVar6 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar6 = iVar3;
    }
    if (iVar3 % 0x20 == 0) goto LAB_14010b3d3;
    bVar2 = -(char)(iVar3 % 0x20);
    *(uint *)(param_2 + (longlong)(iVar6 >> 5) * 4) =
         (uint)(*(int *)(param_2 + (longlong)(iVar6 >> 5) * 4) << (bVar2 & 0x1f)) >> (bVar2 & 0x1f);
  }
  else if (iVar7 != 0) {
    iVar4 = -1;
    if (iVar6 != 0) {
      iVar4 = iVar6 + 0x1e;
      if (-1 < iVar6 + -1) {
        iVar4 = iVar6 + -1;
      }
      iVar4 = iVar4 >> 5;
    }
    iVar10 = iVar3 + 0x1e;
    if (-1 < iVar3 + -1) {
      iVar10 = iVar3 + -1;
    }
    if (iVar10 >> 5 == iVar4) {
      *(int *)(param_2 + 0x20) = iVar3;
    }
    else {
      if (*(int *)(param_2 + 0x24) < iVar3) {
        *(undefined4 *)(param_2 + 0x24) = 0x100;
        FUN_14497ddce(param_2,iVar6);
        iVar3 = *(int *)(param_2 + 0x20) + iVar7;
      }
      iVar4 = iVar3 + 0x1f;
      if (-1 < iVar3) {
        iVar4 = iVar3;
      }
      *(int *)(param_2 + 0x20) = iVar3;
      if (iVar3 % 0x20 != 0) {
        bVar2 = -(char)(iVar3 % 0x20);
        *(uint *)(param_2 + (longlong)(iVar4 >> 5) * 4) =
             (uint)(*(int *)(param_2 + (longlong)(iVar4 >> 5) * 4) << (bVar2 & 0x1f)) >>
             (bVar2 & 0x1f);
      }
    }
    FUN_1447c45ca(param_2,iVar6,iVar7,(param_3 & 0x10) >> 4);
  }
  iVar3 = *(int *)(param_2 + 0x20);
LAB_14010b3d3:
  if (iVar3 != 0) {
    iVar6 = *(int *)(param_1 + 0x20);
    uVar5 = 0xffffffff >> (-(char)(iVar6 % 0x20) & 0x1fU);
    if (iVar6 % 0x20 < 1) {
      uVar5 = 0xffffffff;
    }
    uVar1 = 0xffffffff >> (-(char)(iVar3 % 0x20) & 0x1fU);
    if (iVar3 % 0x20 < 1) {
      uVar1 = 0xffffffff;
    }
    if (0 < iVar3) {
      uVar11 = iVar3 + 0x1fU >> 5;
      iVar3 = iVar6 + 0x3e;
      if (-1 < iVar6 + 0x1f) {
        iVar3 = iVar6 + 0x1f;
      }
      uVar13 = 0;
      uVar8 = -(uint)(uVar11 - 1 != 0) | uVar1;
      uVar12 = 0xffffffff;
      if (iVar6 - 1U < 0x20) {
        uVar12 = uVar5;
      }
      do {
        uVar14 = (int)(param_3 << 0x1b) >> 0x1f;
        if (((longlong)uVar13 < (longlong)(iVar3 >> 5)) &&
           (uVar14 = *(uint *)(param_1 + uVar13 * 4), uVar12 != 0xffffffff)) {
          if ((int)(param_3 << 0x1b) < 0) {
            uVar14 = uVar14 | ~uVar12;
          }
          else {
            uVar14 = uVar14 & uVar12;
          }
        }
        uVar9 = uVar8 & *(uint *)(param_2 + uVar13 * 4);
        uVar12 = 0xffffffff;
        if (uVar11 - 1 == uVar13) {
          uVar12 = uVar1;
        }
        uVar8 = 0xffffffff;
        if (uVar11 - 2 == uVar13) {
          uVar8 = uVar1;
        }
        *(uint *)(param_2 + uVar13 * 4) = uVar12 & (uVar9 | uVar14);
        bVar15 = (iVar3 >> 5) - 2 == uVar13;
        uVar13 = uVar13 + 1;
        uVar12 = 0xffffffff;
        if (bVar15) {
          uVar12 = uVar5;
        }
      } while (uVar11 != uVar13);
    }
  }
  return;
}



// FUNCTION 14010b564 FUN_14010b564 body=2737 status=ok
// SIG undefined FUN_14010b564(void)

void FUN_14010b564(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 *puVar5;
  longlong lVar6;
  ushort *puVar7;
  longlong lVar8;
  char cVar9;
  int iVar10;
  float fVar11;
  undefined1 auStack_138 [40];
  PSRWLOCK local_110;
  undefined8 local_108;
  longlong *local_100;
  undefined8 local_f8;
  longlong *plStack_f0;
  longlong *local_e8 [2];
  longlong *local_d8 [2];
  longlong *local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  longlong *local_b0;
  wchar_t **local_a8;
  undefined8 *local_a0;
  wchar_t *local_98;
  undefined4 local_90;
  wchar_t *local_88;
  longlong *plStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  longlong local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_138;
  lVar4 = *(longlong *)(param_1 + 0x288);
  if ((lVar4 == 0) || (*(int *)(param_1 + 0x208) == 0)) goto LAB_14010b602;
  FUN_1448d5e3c(&local_88,param_1 + 0x208);
  puVar5 = *(undefined1 **)(local_88 + 0x80);
  AcquireSRWLockShared((PSRWLOCK)(puVar5 + 0x58));
  plVar3 = plStack_80;
  if (plStack_80 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_80 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_80)(plStack_80);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (*(int *)(lVar4 + 0xac) != *(int *)(puVar5 + 0x50)) {
    *(int *)(lVar4 + 0xac) = *(int *)(puVar5 + 0x50);
    if (*(int *)(lVar4 + 0xd4) != *(int *)(puVar5 + 4)) {
      *(undefined1 *)(lVar4 + 0xd0) = *puVar5;
      *(undefined4 *)(lVar4 + 0xd4) = *(undefined4 *)(puVar5 + 4);
    }
    if (*(int *)(lVar4 + 0xe4) != *(int *)(puVar5 + 0x14)) {
      *(undefined1 *)(lVar4 + 0xe0) = puVar5[0x10];
      *(undefined4 *)(lVar4 + 0xe4) = *(undefined4 *)(puVar5 + 0x14);
    }
    if (*(int *)(lVar4 + 0xec) != *(int *)(puVar5 + 0x1c)) {
      *(undefined1 *)(lVar4 + 0xe8) = puVar5[0x18];
      *(undefined4 *)(lVar4 + 0xec) = *(undefined4 *)(puVar5 + 0x1c);
    }
    if (*(int *)(lVar4 + 0xf4) != *(int *)(puVar5 + 0x24)) {
      *(undefined1 *)(lVar4 + 0xf0) = puVar5[0x20];
      *(undefined4 *)(lVar4 + 0xf4) = *(undefined4 *)(puVar5 + 0x24);
    }
    lVar6 = *(longlong *)(param_1 + 0x288);
    if (lVar6 != 0) {
      iVar10 = *(int *)(lVar6 + 0xfc);
      if (*(char *)(lVar6 + 0xf8) == '\0') {
LAB_14010bdc5:
        *(undefined1 *)(lVar6 + 0xf8) = 1;
        *(int *)(lVar6 + 0xfc) = iVar10 + 1;
      }
      else if (iVar10 == 0) {
        iVar10 = 0;
        goto LAB_14010bdc5;
      }
      iVar10 = *(int *)(lVar6 + 0x104);
      if (*(char *)(lVar6 + 0x100) == '\0') {
        if (iVar10 == 0) {
          iVar10 = 0;
          goto LAB_14010b6bc;
        }
      }
      else {
LAB_14010b6bc:
        *(undefined1 *)(lVar6 + 0x100) = 0;
        iVar10 = iVar10 + 1;
        *(int *)(lVar6 + 0x104) = iVar10;
      }
      if (*(char *)(lVar6 + 0xe0) == '\x01') {
        if (*(char *)(lVar6 + 0xe8) == '\x01') {
          local_88 = L"Reviving";
          plStack_80._0_4_ = 8;
          FUN_1446e940c(&local_a8,&local_88);
          local_88 = L"DownState";
          plStack_80._0_4_ = 9;
          FUN_1446e940c(&local_b8,&local_88);
          local_88 = L"Reviving....";
          plStack_80 = (longlong *)CONCAT44(plStack_80._4_4_,0xc);
          goto LAB_14010b755;
        }
        if (*(char *)(lVar6 + 0xf0) != '\x01') {
          FUN_1448d5e3c(&local_88,param_1 + 0x208);
          lVar8 = *(longlong *)(local_88 + 0x80);
          local_110 = (PSRWLOCK)(lVar8 + 0x58);
          AcquireSRWLockShared(local_110);
          if (plStack_80 != (longlong *)0x0) {
            LOCK();
            plVar3 = plStack_80 + 1;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)*plVar3 == 0) {
              (**(code **)*plStack_80)(plStack_80);
              LOCK();
              piVar2 = (int *)((longlong)plStack_80 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plStack_80 + 0x10))(plStack_80);
              }
            }
          }
          if (*(int *)(lVar8 + 0x40) == 1) {
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110
                         ) < DAT_14c844850) && (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1))
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
            local_c8 = DAT_14c844840;
            if (DAT_14c844840 != (longlong *)0x0) {
              (**(code **)(*DAT_14c844840 + 8))();
            }
            local_c0 = DAT_14c844848;
            local_88 = (wchar_t *)0x0;
            plStack_80 = (longlong *)0x0;
            local_78 = 0;
            local_70 = 0;
            uStack_68 = 0;
            FUN_1446ddda2(&local_88,"UIPrompt_RevivingYou",0);
            FUN_140ac6c96(&local_88,&local_c8);
            if (local_70 != 0) {
              FUN_1400020a8();
            }
            FUN_140009b9a(local_e8,lVar8 + 0x28);
            FUN_14023409e(&local_f8,&local_c8,1);
            local_88 = (wchar_t *)CONCAT44(local_88._4_4_,4);
            FUN_14023423e(&local_78,local_e8);
            local_a0 = &uStack_68;
            local_a8 = &local_88;
            FUN_14010d304(&local_98);
            local_b8 = local_f8;
            local_b0 = plStack_f0;
            if (plStack_f0 != (longlong *)0x0) {
              LOCK();
              *(int *)(plStack_f0 + 1) = (int)plStack_f0[1] + 1;
              UNLOCK();
            }
            FUN_14010c016(local_d8,&local_b8,&local_98);
            FUN_14007f2db(local_98,local_90);
            if (local_98 != (wchar_t *)0x0) {
              FUN_1400020a8();
            }
            if ((longlong *)CONCAT44(uStack_74,local_78) != (longlong *)0x0) {
              (**(code **)(*(longlong *)CONCAT44(uStack_74,local_78) + 0x10))();
            }
            plVar3 = plStack_f0;
            if (plStack_f0 != (longlong *)0x0) {
              LOCK();
              plVar1 = plStack_f0 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                (**(code **)*plStack_f0)(plStack_f0);
                LOCK();
                piVar2 = (int *)((longlong)plVar3 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*plVar3 + 0x10))(plVar3);
                }
              }
            }
            if (local_e8[0] != (longlong *)0x0) {
              (**(code **)(*local_e8[0] + 0x10))();
            }
            if ((*(int *)(lVar6 + 0xc0) == 0) ||
               (cVar9 = FUN_144722c14(lVar6 + 0xb0,local_d8,0), cVar9 == '\0')) {
              FUN_140008f88(lVar6 + 0xb0,local_d8);
              *(int *)(lVar6 + 0xc0) = *(int *)(lVar6 + 0xc0) + 1;
            }
            if (local_d8[0] != (longlong *)0x0) {
              (**(code **)(*local_d8[0] + 0x10))();
            }
          }
          else {
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110
                         ) < DAT_14c844850) && (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1))
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
            local_c8 = DAT_14c844840;
            if (DAT_14c844840 != (longlong *)0x0) {
              (**(code **)(*DAT_14c844840 + 8))();
            }
            local_c0 = DAT_14c844848;
            local_88 = (wchar_t *)0x0;
            plStack_80 = (longlong *)0x0;
            local_78 = 0;
            local_70 = 0;
            uStack_68 = 0;
            FUN_1446ddda2(&local_88,"UIPrompt_AlliesReviving",0);
            FUN_140ac6c96(&local_88,&local_c8);
            if (local_70 != 0) {
              FUN_1400020a8();
            }
            local_f8 = 0;
            plStack_f0 = (longlong *)0x0;
            FUN_1413a454c(local_e8,*(undefined4 *)(lVar8 + 0x40),0);
            FUN_14023409e(&local_108,&local_c8,1);
            local_88 = (wchar_t *)CONCAT44(local_88._4_4_,4);
            FUN_14023423e(&local_78,local_e8);
            local_a0 = &uStack_68;
            local_a8 = &local_88;
            FUN_14010d304(&local_98);
            local_b8 = local_108;
            local_b0 = local_100;
            if (local_100 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_100 + 1) = (int)local_100[1] + 1;
              UNLOCK();
            }
            FUN_14010c016(local_d8,&local_b8,&local_98);
            FUN_14007f2db(local_98,local_90);
            if (local_98 != (wchar_t *)0x0) {
              FUN_1400020a8();
            }
            if ((longlong *)CONCAT44(uStack_74,local_78) != (longlong *)0x0) {
              (**(code **)(*(longlong *)CONCAT44(uStack_74,local_78) + 0x10))();
            }
            if (local_100 != (longlong *)0x0) {
              LOCK();
              plVar3 = local_100 + 1;
              *(int *)plVar3 = (int)*plVar3 + -1;
              UNLOCK();
              if ((int)*plVar3 == 0) {
                (**(code **)*local_100)(local_100);
                LOCK();
                piVar2 = (int *)((longlong)local_100 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*local_100 + 0x10))(local_100);
                }
              }
            }
            if (local_e8[0] != (longlong *)0x0) {
              (**(code **)(*local_e8[0] + 0x10))();
            }
            if ((*(int *)(lVar6 + 0xc0) == 0) ||
               (cVar9 = FUN_144722c14(lVar6 + 0xb0,local_d8,0), cVar9 == '\0')) {
              FUN_140008f88(lVar6 + 0xb0,local_d8);
              *(int *)(lVar6 + 0xc0) = *(int *)(lVar6 + 0xc0) + 1;
            }
            if (local_d8[0] != (longlong *)0x0) {
              (**(code **)(*local_d8[0] + 0x10))();
            }
            plVar3 = plStack_f0;
            if (plStack_f0 != (longlong *)0x0) {
              LOCK();
              plVar1 = plStack_f0 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                (**(code **)*plStack_f0)(plStack_f0);
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
          if (local_c8 != (longlong *)0x0) {
            (**(code **)(*local_c8 + 0x10))();
          }
          ReleaseSRWLockShared(local_110);
          goto LAB_14010b7b2;
        }
        local_88 = L"Capturing";
        plStack_80._0_4_ = 9;
        FUN_1446e940c(&local_98,&local_88);
        local_88 = L"DownState";
        plStack_80 = (longlong *)CONCAT44(plStack_80._4_4_,9);
        FUN_1446e940c(&local_a8,&local_88);
        FUN_140208bae(&local_88,&local_a8,&local_98,L"Capturing enemy!");
        FUN_14003c038(lVar6 + 0xb0,&local_88);
        local_98 = local_88;
      }
      else {
        *(undefined1 *)(lVar6 + 0x100) = 1;
        *(int *)(lVar6 + 0x104) = iVar10 + 1;
        local_88 = L"FightForLife";
        plStack_80._0_4_ = 0xc;
        FUN_1446e940c(&local_a8,&local_88);
        local_88 = L"DownState";
        plStack_80._0_4_ = 9;
        FUN_1446e940c(&local_b8,&local_88);
        local_88 = L"FIGHT FOR YOUR LIFE!";
        plStack_80 = (longlong *)CONCAT44(plStack_80._4_4_,0x14);
LAB_14010b755:
        FUN_140208c1e(&local_98,&local_b8,&local_a8,&local_88);
        if ((*(int *)(lVar6 + 0xc0) == 0) ||
           (cVar9 = FUN_144722c14(lVar6 + 0xb0,&local_98,0), cVar9 == '\0')) {
          FUN_140008f88(lVar6 + 0xb0,&local_98);
          *(int *)(lVar6 + 0xc0) = *(int *)(lVar6 + 0xc0) + 1;
        }
      }
      if (local_98 != (wchar_t *)0x0) {
        (**(code **)(*(longlong *)local_98 + 0x10))();
      }
    }
LAB_14010b7b2:
    if (*(int *)(param_1 + 0x29c) != *(int *)(puVar5 + 0x4c)) {
      fVar11 = *(float *)(puVar5 + 0x48);
      *(float *)(param_1 + 0x298) = fVar11;
      *(undefined4 *)(param_1 + 0x29c) = *(undefined4 *)(puVar5 + 0x4c);
      if (1.0 <= fVar11) {
        fVar11 = 1.0;
      }
      if (fVar11 <= 0.0) {
        fVar11 = 0.0;
      }
      fVar11 = fVar11 * 100.0;
      if ((fVar11 != *(float *)(lVar4 + 200)) || (NAN(fVar11) || NAN(*(float *)(lVar4 + 200)))) {
        iVar10 = *(int *)(lVar4 + 0xcc) + 1;
      }
      else {
        if (*(int *)(lVar4 + 0xcc) != 0) goto LAB_14010b812;
        iVar10 = 1;
      }
      *(float *)(lVar4 + 200) = fVar11;
      *(int *)(lVar4 + 0xcc) = iVar10;
    }
LAB_14010b812:
    puVar7 = *(ushort **)(lVar4 + 0x80);
    if (puVar7 != (ushort *)0x0) {
      *puVar7 = *puVar7 | (ushort)(1L << (*(byte *)(lVar4 + 0x78) & 0x3f));
    }
  }
  ReleaseSRWLockShared((PSRWLOCK)(puVar5 + 0x58));
LAB_14010b602:
  if ((local_60 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14010c016 FUN_14010c016 body=75 status=ok
// SIG undefined FUN_14010c016(void)

undefined8 FUN_14010c016(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_14010c062();
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
  return param_1;
}



// FUNCTION 14010c062 FUN_14010c062 body=167 status=ok
// SIG undefined FUN_14010c062(void)

longlong *
FUN_14010c062(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  longlong local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = param_5;
  FUN_14010c19c(local_40);
  lVar1 = FUN_14001cc68(0x40,0x10);
  FUN_14010c10a(lVar1,local_40,param_2,param_3);
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  *param_1 = lVar1;
  *(undefined4 *)(param_1 + 1) = 1;
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14010c10a FUN_14010c10a body=146 status=ok
// SIG undefined FUN_14010c10a(void)

undefined8 *
FUN_14010c10a(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  longlong lVar1;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_LAB_149e193d0;
  param_1[2] = *param_2;
  *param_2 = 0;
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  FUN_140008de0(param_1);
  *param_1 = &PTR_FUN_149e19550;
  param_1[4] = *param_3;
  lVar1 = param_3[1];
  param_1[5] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  param_1[6] = 0;
  param_1[6] = *param_4;
  *param_4 = 0;
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_4 + 1);
  *(undefined4 *)((longlong)param_1 + 0x3c) = *(undefined4 *)((longlong)param_4 + 0xc);
  param_4[1] = 0;
  return param_1;
}



// FUNCTION 14010c19c FUN_14010c19c body=361 status=ok
// SIG undefined FUN_14010c19c(void)

undefined8
FUN_14010c19c(undefined8 param_1,undefined8 *param_2,longlong *param_3,undefined1 param_4,
             undefined1 param_5)

{
  char *pcVar1;
  byte bVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined1 *local_68;
  longlong **local_60;
  int local_58;
  undefined1 local_54;
  undefined1 local_53;
  longlong *local_50;
  char *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((DAT_14c846b14 == '\x01') &&
     (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c83f0fc)) {
    FUN_144b3d300(&DAT_14c83f0fc);
    if (DAT_14c83f0fc == -1) {
      uVar4 = FUN_14118da1c();
      bVar2 = FUN_14054d46e(uVar4,L"nothreading");
      DAT_14c83f0f8 = bVar2 ^ 1;
      _Init_thread_footer(&DAT_14c83f0fc);
    }
  }
  if ((longlong)(int)param_3[1] == 0) {
    iVar5 = 0;
  }
  else {
    lVar7 = *param_3;
    lVar6 = (longlong)(int)param_3[1] << 5;
    iVar5 = 0;
    do {
      iVar3 = FUN_14010c306(lVar7);
      iVar5 = iVar5 + iVar3;
      lVar7 = lVar7 + 0x20;
      lVar6 = lVar6 + -0x20;
    } while (lVar6 != 0);
  }
  pcVar1 = (char *)*param_2;
  if (*pcVar1 == '\0') {
    uVar4 = (**(code **)(**(longlong **)(pcVar1 + 0x18) + 0x50))();
    FUN_1447a1fc0(uVar4);
    local_48 = (char *)(**(code **)(**(longlong **)(pcVar1 + 0x18) + 0x28))();
  }
  else {
    local_48 = pcVar1 + 0x30;
  }
  local_60 = &local_50;
  local_68 = &LAB_142762720;
  local_53 = param_5;
  local_58 = iVar5;
  local_54 = param_4;
  local_50 = param_3;
  FUN_14010c352(param_1,param_2);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14010c306 FUN_14010c306 body=69 status=ok
// SIG undefined FUN_14010c306(void)

int FUN_14010c306(uint *param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (*param_1 == 4) {
    uVar2 = (**(code **)(**(longlong **)(param_1 + 4) + 0x50))();
    FUN_1447a1fc0(uVar2);
    lVar3 = (**(code **)(**(longlong **)(param_1 + 4) + 0x28))();
    iVar1 = *(int *)(lVar3 + 8) + -1;
    if (*(int *)(lVar3 + 8) == 0) {
      iVar1 = 0;
    }
  }
  else {
    iVar1 = 0x14;
    if (3 < *param_1) {
      iVar1 = 0;
    }
  }
  return iVar1;
}



// FUNCTION 14010c352 FUN_14010c352 body=1516 status=ok
// SIG undefined FUN_14010c352(void)

longlong ** FUN_14010c352(longlong **param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  char cVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  longlong *plVar7;
  void *_Src;
  char *pcVar8;
  int iVar9;
  undefined8 uVar10;
  longlong *plVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  undefined2 *puVar15;
  uint uVar16;
  int *piVar18;
  longlong lVar19;
  longlong *plVar20;
  bool bVar21;
  undefined1 auStack_b8 [32];
  longlong *local_98;
  longlong *local_90;
  int local_88;
  undefined4 uStack_84;
  longlong local_78;
  longlong *local_70;
  longlong *local_68;
  undefined8 uStack_60;
  char local_49;
  ulonglong local_48;
  uint uVar17;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar20 = (longlong *)*param_2;
  plVar7 = (longlong *)param_2[1];
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
  }
  local_98 = plVar7;
  if (*(char *)((longlong)param_3 + 0x15) == '\x01') {
    pcVar8 = (char *)*param_2;
    if (*pcVar8 == '\0') {
      local_68 = *(longlong **)(pcVar8 + 0x18);
      if (local_68 != (longlong *)0x0) {
        (**(code **)(*local_68 + 8))();
      }
      uStack_60 = CONCAT44(uStack_60._4_4_,*(undefined4 *)(pcVar8 + 0x20));
    }
    else {
      FUN_140009b9a(&local_68,pcVar8 + 0x30);
    }
    if (*(char *)((longlong)param_3 + 0x14) == '\x01') {
      uVar10 = (**(code **)(*local_68 + 0x50))();
      FUN_1447a1fc0(uVar10);
    }
    cVar2 = *(char *)((longlong)plVar20 + 1);
    local_78 = plVar20[1];
    local_70 = (longlong *)plVar20[2];
    if (local_70 == (longlong *)0x0) {
      plVar20 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(local_70 + 1) = (int)local_70[1] + 1;
      UNLOCK();
      plVar20 = local_70;
    }
    plVar11 = (longlong *)(**(code **)(*local_68 + 0x48))();
    (**(code **)(*plVar11 + 0x68))(plVar11,&local_88);
    local_49 = cVar2;
    plVar11 = (longlong *)FUN_1467df667(&local_88,&local_49,&local_78);
    if (plVar20 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar20 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar20)(plVar20);
        LOCK();
        piVar18 = (int *)((longlong)plVar20 + 0xc);
        *piVar18 = *piVar18 + -1;
        UNLOCK();
        if (*piVar18 == 0) {
          (**(code **)(*plVar20 + 0x10))(plVar20);
        }
      }
    }
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar20 = plVar7 + 1;
      *(int *)plVar20 = (int)*plVar20 + -1;
      UNLOCK();
      if ((int)*plVar20 == 0) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar18 = (int *)((longlong)plVar7 + 0xc);
        *piVar18 = *piVar18 + -1;
        UNLOCK();
        if (*piVar18 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
    }
    if (CONCAT44(uStack_84,local_88) != 0) {
      FUN_1400020a8();
    }
    if (local_68 != (longlong *)0x0) {
      (**(code **)(*local_68 + 0x10))();
    }
    plVar20 = plVar11 + 2;
    local_98 = plVar11;
  }
  plVar7 = plVar20 + 5;
  *param_1 = (longlong *)0x0;
  param_1[1] = (longlong *)0x0;
  LOCK();
  bVar21 = (char)plVar20[5] == '\0';
  if (bVar21) {
    *(char *)(plVar20 + 5) = '\x01';
  }
  UNLOCK();
  if (!bVar21) {
    FUN_1447d2058(plVar7);
  }
  if (((char)*plVar20 == '\0') && (*(char *)((longlong)param_3 + 0x14) == '\x01')) {
    uVar10 = (**(code **)(*(longlong *)plVar20[3] + 0x50))();
    FUN_1447a1fc0(uVar10);
  }
  FUN_14010c940(plVar20);
  iVar9 = (int)plVar20[9];
  local_90 = plVar7;
  if (iVar9 == 0) {
    local_68 = (longlong *)0x0;
    uVar16 = *(uint *)(plVar20 + 7);
    _Src = (void *)plVar20[6];
    uStack_60 = CONCAT44(uStack_60._4_4_,uVar16);
    if ((longlong)(int)uVar16 == 0) {
      uStack_60 = (ulonglong)uVar16;
    }
    else {
      FUN_1446dd670(&local_68,uVar16,0);
      memcpy(local_68,_Src,(longlong)(int)uVar16 * 2);
    }
  }
  else {
    local_68 = (longlong *)0x0;
    uStack_60 = 0;
    iVar12 = *(int *)((longlong)plVar20 + 0x84) * *(int *)(param_3 + 2);
    iVar13 = iVar12 + (int)plVar20[0x10];
    if (iVar13 != 0 && SCARRY4(iVar12,(int)plVar20[0x10]) == iVar13 < 0) {
      FUN_1446f8c06(&local_68,iVar13 + 1);
      iVar9 = (int)plVar20[9];
    }
    if (0 < iVar9) {
      iVar9 = 0;
      uVar16 = 0;
      do {
        lVar19 = plVar20[8];
        lVar14 = (longlong)(int)uVar16 * 0x60;
        iVar12 = *(int *)(lVar19 + lVar14);
        iVar13 = *(int *)(lVar19 + 4 + lVar14);
        iVar4 = *(int *)(lVar19 + 8 + lVar14);
        iVar5 = *(int *)(lVar19 + 0xc + lVar14);
        lVar19 = lVar19 + lVar14;
        puVar15 = (undefined2 *)(lVar19 + 0x18);
        uVar17 = uVar16;
        if (puVar15 == (undefined2 *)0x0 ||
            (iVar5 != -0x2ded87d8 ||
            (iVar4 != -0x4be91625 || (iVar13 != -0x6be7b6e1 || iVar12 != 0x595a123b)))) {
          if ((iVar5 == -0x1ec66a21 &&
              (iVar4 == -0x7eda0a3b && (iVar13 == -0x5556bdf4 && iVar12 == 0x460b9845))) &&
              puVar15 != (undefined2 *)0x0) {
            uVar3 = *puVar15;
LAB_14010c765:
            FUN_140002184(&local_68,uVar3);
          }
          else if ((((iVar12 == 0x5fd9ef1a) && (iVar13 == -0x62b7b29b)) && (iVar4 == -0x6df9aa9a))
                  && ((iVar5 == -0x2cabdab9 && (puVar15 != (undefined2 *)0x0)))) {
            iVar12 = iVar9 + 1;
            local_88 = iVar9;
            lVar14 = (*(code *)*param_3)(param_3[1],puVar15,&local_88);
            iVar9 = iVar12;
            if (lVar14 == 0) {
              FUN_140002184(&local_68,*(undefined2 *)(plVar20[1] + 0x12));
              FUN_1400020e8(&local_68,*(undefined8 *)(lVar19 + 0x18),*(undefined4 *)(lVar19 + 0x20))
              ;
              uVar3 = *(undefined2 *)(plVar20[1] + 0x14);
              goto LAB_14010c765;
            }
            if (-2 < (int)uVar16) {
              uVar17 = uVar16 + 1;
              if ((int)uVar17 < (int)plVar20[9]) {
                piVar18 = (int *)((ulonglong)uVar17 * 0x60 + plVar20[8]);
                if (piVar18 != (int *)&DAT_ffffffffffffffe8 &&
                    (piVar18[3] == 0x5bdf8d43 &&
                    (piVar18[2] == -0x43eee727 &&
                    (piVar18[1] == 0x34d44d08 && *piVar18 == -0x69f11528)))) {
                  if ((*plVar20 & 0x100) == 0) {
                    FUN_140002184(&local_68,*(undefined2 *)(plVar20[1] + 0x16));
                    FUN_1400020e8(&local_68,*(undefined8 *)(piVar18 + 6),piVar18[8]);
                  }
                  else {
                    (**(code **)(**(longlong **)(piVar18 + 10) + 0x10))
                              (*(longlong **)(piVar18 + 10),lVar14,param_3,&local_68);
                  }
                  goto LAB_14010c5aa;
                }
              }
            }
            FUN_14010cc50(lVar14,*(undefined1 *)((longlong)param_3 + 0x14),
                          *(undefined1 *)((longlong)param_3 + 0x15),&local_68);
            uVar17 = uVar16;
          }
          else if ((iVar5 == 0x5bdf8d43 &&
                   (iVar4 == -0x43eee727 && (iVar13 == 0x34d44d08 && iVar12 == -0x69f11528))) &&
                   puVar15 != (undefined2 *)0x0) {
            FUN_140002184(&local_68,*(undefined2 *)(plVar20[1] + 0x16));
            uVar6 = *(undefined4 *)(lVar19 + 0x20);
            uVar10 = *(undefined8 *)(lVar19 + 0x18);
            goto LAB_14010c48b;
          }
        }
        else {
          uVar6 = *(undefined4 *)(lVar19 + 0x20);
          uVar10 = *(undefined8 *)(lVar19 + 0x18);
LAB_14010c48b:
          FUN_1400020e8(&local_68,uVar10,uVar6);
        }
LAB_14010c5aa:
        uVar16 = uVar17 + 1;
      } while ((int)uVar16 < (int)plVar20[9]);
    }
  }
  plVar7 = local_90;
  plVar20 = local_98;
  if (&local_68 == param_1) {
    if (local_68 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_1 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    *param_1 = local_68;
    local_68 = (longlong *)0x0;
    *(undefined4 *)(param_1 + 1) = (undefined4)uStack_60;
    *(undefined4 *)((longlong)param_1 + 0xc) = uStack_60._4_4_;
  }
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    bVar21 = (char)*plVar7 == '\x01';
    if (bVar21) {
      *(char *)plVar7 = '\0';
    }
    UNLOCK();
    if (!bVar21) {
      FUN_14008cdb0(plVar7);
    }
  }
  if (plVar20 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar20 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*plVar20)(plVar20);
      LOCK();
      piVar18 = (int *)((longlong)plVar20 + 0xc);
      *piVar18 = *piVar18 + -1;
      UNLOCK();
      if (*piVar18 == 0) {
        (**(code **)(*plVar20 + 0x10))(plVar20);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14010c940 FUN_14010c940 body=390 status=ok
// SIG undefined FUN_14010c940(void)

void FUN_14010c940(char *param_1)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  undefined1 auStack_78 [40];
  longlong *local_50;
  longlong local_48;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*param_1 == '\0') {
    pcVar1 = param_1 + 0x18;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c844850) {
      FUN_144b3d300(&DAT_14c844850);
      if (DAT_14c844850 == -1) {
        DAT_14c844840 = (undefined8 *)FUN_14001cc68(0x30,0x10);
        DAT_14c844840[1] = 0;
        *DAT_14c844840 = &PTR_FUN_149e19310;
        DAT_14c844840[2] = 0xffffffffffffffff;
        DAT_14c844840[3] = 0;
        DAT_14c844840[4] = 0;
        DAT_14c844840[5] = 0;
        if (DAT_14c844840 != (undefined8 *)0x0) {
          LOCK();
          *(int *)(DAT_14c844840 + 1) = *(int *)(DAT_14c844840 + 1) + 1;
          UNLOCK();
        }
        DAT_14c844848 = 0;
        atexit(FUN_142760bef);
        _Init_thread_footer(&DAT_14c844850);
      }
    }
    cVar3 = FUN_14010cee6(pcVar1,&DAT_14c844840,0);
    if (cVar3 == '\0') {
      pcVar2 = param_1 + 0x50;
      cVar3 = FUN_14010cac8(pcVar2,pcVar1);
      if (cVar3 == '\0') {
        cVar3 = FUN_1409d1136(pcVar2,pcVar1);
        FUN_1409d10d4(&local_50,pcVar1);
        FUN_14010d4a2(pcVar2,&local_50);
        if (local_48 != 0) {
          local_38 = local_48;
          FUN_1447a2442();
        }
        if (local_50 != (longlong *)0x0) {
          (**(code **)(*local_50 + 0x10))();
        }
        if (cVar3 == '\0') {
          FUN_140234ee4(param_1);
        }
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14010cac8 FUN_14010cac8 body=239 status=ok
// SIG undefined FUN_14010cac8(void)

undefined2 FUN_14010cac8(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  short sVar3;
  short sVar4;
  undefined8 uVar5;
  int *piVar6;
  int *piVar7;
  undefined2 uVar8;
  undefined1 auStack_58 [40];
  int *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar5 = (**(code **)(*(longlong *)*param_2 + 0x50))();
  FUN_1447a1fc0(uVar5);
  uVar8 = 0;
  if (((longlong *)*param_1 == (longlong *)0x0) ||
     (plVar1 = (longlong *)*param_2, (longlong *)*param_1 != plVar1)) goto LAB_14010cb75;
  (**(code **)(*plVar1 + 0x30))(plVar1,&local_30);
  piVar7 = (int *)(param_1[1] + 8);
  if (param_1[1] == 0) {
    piVar7 = (int *)0x0;
  }
  piVar6 = local_30 + 2;
  if (local_30 == (int *)0x0) {
    piVar6 = (int *)0x0;
  }
  if (piVar7 == piVar6) {
    lVar2 = param_1[2];
    sVar3 = FUN_14010cbb8(param_2);
    if ((short)lVar2 == sVar3) {
      sVar3 = *(short *)((longlong)param_1 + 0x12);
      sVar4 = FUN_14010cc04(param_2);
      if (sVar3 == sVar4) {
        uVar8 = CONCAT11((char)((ushort)sVar3 >> 8),
                         *(int *)((longlong)param_1 + 0x14) == (int)param_2[1]);
        piVar7 = local_30;
        goto LAB_14010cb6a;
      }
    }
    uVar8 = 0;
    piVar7 = local_30;
  }
  else {
    uVar8 = 0;
    piVar7 = local_30;
  }
LAB_14010cb6a:
  if (piVar7 != (int *)0x0) {
    LOCK();
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (*piVar7 == 0) {
      if (*(longlong *)(piVar7 + 2) != 0) {
        FUN_1400020a8();
      }
      FUN_1400020a8(piVar7);
    }
  }
LAB_14010cb75:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8;
}



// FUNCTION 14010cbb8 FUN_14010cbb8 body=69 status=ok
// SIG undefined FUN_14010cbb8(void)

undefined8 FUN_14010cbb8(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = (**(code **)(*(longlong *)*param_1 + 0x50))();
  FUN_1447a1fc0(uVar1);
  lVar2 = (**(code **)(*(longlong *)*param_1 + 0x28))();
  if ((1 < *(int *)(lVar2 + 8)) && ((*(byte *)(param_1 + 1) & 2) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00014010cbf1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*(longlong *)*param_1 + 0x38))();
    return uVar1;
  }
  return 0;
}



// FUNCTION 14010cc04 FUN_14010cc04 body=69 status=ok
// SIG undefined FUN_14010cc04(void)

undefined8 FUN_14010cc04(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = (**(code **)(*(longlong *)*param_1 + 0x50))();
  FUN_1447a1fc0(uVar1);
  lVar2 = (**(code **)(*(longlong *)*param_1 + 0x28))();
  if ((1 < *(int *)(lVar2 + 8)) && ((*(byte *)(param_1 + 1) & 2) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00014010cc3d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*(longlong *)*param_1 + 0x40))();
    return uVar1;
  }
  return 0;
}



// FUNCTION 14010cc50 FUN_14010cc50 body=661 status=ok
// SIG undefined FUN_14010cc50(void)

void FUN_14010cc50(int *param_1,char param_2,char param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  void *_Src;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined4 uVar10;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  void *local_48;
  int iStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*param_1 == 4) {
    if (param_2 != '\0') {
      uVar4 = (**(code **)(**(longlong **)(param_1 + 4) + 0x50))();
      FUN_1447a1fc0(uVar4);
    }
    if (param_3 == '\0') {
      uVar4 = (**(code **)(**(longlong **)(param_1 + 4) + 0x50))();
      FUN_1447a1fc0(uVar4);
      puVar5 = (undefined8 *)(**(code **)(**(longlong **)(param_1 + 4) + 0x28))();
      local_48 = (void *)0x0;
      iStack_40 = *(int *)(puVar5 + 1);
      lVar9 = (longlong)iStack_40;
      _Src = (void *)*puVar5;
      if (lVar9 == 0) {
        uStack_3c = 0;
      }
      else {
        FUN_1446dd670(&local_48,iStack_40,0);
        memcpy(local_48,_Src,lVar9 * 2);
      }
    }
    else {
      plVar6 = (longlong *)(**(code **)(**(longlong **)(param_1 + 4) + 0x48))();
      (**(code **)(*plVar6 + 0x68))(plVar6,&local_48);
    }
    iVar3 = iStack_40 + -1;
    if (iStack_40 == 0) {
      iVar3 = 0;
    }
    FUN_1400020e8(param_4,local_48,iVar3);
    if (local_48 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (*param_1 != 5) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c844be8) {
      FUN_144b3d300(&DAT_14c844be8);
      if (DAT_14c844be8 == -1) {
        FUN_1456bade4(&DAT_14c844b48);
        DAT_14c844be0 = &DAT_14c844b48;
        atexit(FUN_142761918);
        _Init_thread_footer(&DAT_14c844be8);
      }
    }
    puVar5 = *(undefined8 **)(DAT_14c844be0 + 0x38);
    plVar6 = *(longlong **)(DAT_14c844be0 + 0x40);
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
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
    lVar9 = (**(code **)(*(longlong *)*puVar5 + 0x80))();
    puVar5 = (undefined8 *)(lVar9 + 0x8c);
    iVar3 = *param_1;
    if (iVar3 == 0) {
      uVar7 = *(ulonglong *)(param_1 + 2);
      local_38 = *(undefined8 *)(lVar9 + 0x9c);
      local_48 = (void *)*puVar5;
      iStack_40 = *(int *)(lVar9 + 0x94);
      uStack_3c = *(undefined4 *)(lVar9 + 0x98);
      uVar8 = -uVar7;
      if ((longlong)-uVar7 < 0) {
        uVar8 = uVar7;
      }
      uVar7 = uVar7 >> 0x3f;
    }
    else {
      if (iVar3 != 1) {
        if (iVar3 == 2) {
          uVar10 = SUB84((double)(float)param_1[2],0);
        }
        else {
          if (iVar3 != 3) goto LAB_14010cd13;
          uVar10 = (undefined4)*(undefined8 *)(param_1 + 2);
        }
        local_38 = *(undefined8 *)(lVar9 + 0x9c);
        local_48 = (void *)*puVar5;
        iStack_40 = *(int *)(lVar9 + 0x94);
        uStack_3c = *(undefined4 *)(lVar9 + 0x98);
        FUN_140235a22(uVar10,lVar9,&local_48,param_4);
        goto LAB_14010cd13;
      }
      uVar8 = *(ulonglong *)(param_1 + 2);
      local_38 = *(undefined8 *)(lVar9 + 0x9c);
      local_48 = (void *)*puVar5;
      iStack_40 = *(int *)(lVar9 + 0x94);
      uStack_3c = *(undefined4 *)(lVar9 + 0x98);
      uVar7 = 0;
    }
    local_58 = param_4;
    FUN_14010d0dd(uVar7,uVar8,lVar9);
  }
LAB_14010cd13:
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14010cee6 FUN_14010cee6 body=502 status=ok
// SIG undefined FUN_14010cee6(void)

ulonglong FUN_14010cee6(longlong *param_1,longlong *param_2,uint param_3)

{
  char cVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 unaff_RSI;
  ulonglong uVar9;
  bool bVar10;
  bool bVar11;
  undefined1 auStack_78 [40];
  int *local_50;
  int *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar9 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if ((longlong *)*param_1 != (longlong *)*param_2) {
    uVar4 = (**(code **)(*(longlong *)*param_1 + 0x50))();
    FUN_1447a1fc0(uVar4);
    uVar4 = (**(code **)(*(longlong *)*param_2 + 0x50))();
    FUN_1447a1fc0(uVar4);
    (**(code **)(*(longlong *)*param_1 + 0x30))((longlong *)*param_1,&local_48);
    (**(code **)(*(longlong *)*param_2 + 0x30))((longlong *)*param_2,&local_50);
    bVar10 = local_48 == (int *)0x0;
    bVar11 = local_48 != local_50;
    if (local_50 != (int *)0x0) {
      LOCK();
      *local_50 = *local_50 + -1;
      UNLOCK();
      if (*local_50 == 0) {
        if (*(longlong *)(local_50 + 2) != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(local_50);
      }
    }
    if (local_48 != (int *)0x0) {
      LOCK();
      *local_48 = *local_48 + -1;
      UNLOCK();
      if (*local_48 == 0) {
        if (*(longlong *)(local_48 + 2) != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(local_48);
      }
    }
    if (bVar10 || bVar11) {
      if ((param_3 & 1) != 0) {
        plVar5 = (longlong *)(**(code **)(*(longlong *)*param_1 + 0x48))();
        plVar6 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x48))();
        cVar1 = (**(code **)(*plVar5 + 0x58))(plVar5);
        cVar2 = (**(code **)(*plVar6 + 0x58))(plVar6);
        if ((cVar1 == cVar2) &&
           (cVar1 = (**(code **)(*plVar5 + 0x70))(plVar5,plVar6,param_3), cVar1 != '\0'))
        goto LAB_14010cfa3;
      }
      if (((param_3 & 2) != 0) &&
         (((*(byte *)(param_1 + 1) & 0x12) != 0 && ((*(byte *)(param_2 + 1) & 0x12) != 0)))) {
        uVar4 = (**(code **)(*(longlong *)*param_1 + 0x50))();
        FUN_1447a1fc0(uVar4);
        puVar7 = (undefined8 *)(**(code **)(*(longlong *)*param_1 + 0x28))();
        uVar4 = (**(code **)(*(longlong *)*param_2 + 0x50))();
        FUN_1447a1fc0(uVar4);
        puVar8 = (undefined8 *)(**(code **)(*(longlong *)*param_2 + 0x28))();
        iVar3 = *(int *)(puVar7 + 1);
        if (iVar3 == *(int *)(puVar8 + 1)) {
          if ((iVar3 < 2) || (iVar3 = wcscmp((wchar_t *)*puVar7,(wchar_t *)*puVar8), iVar3 == 0))
          goto LAB_14010cfa3;
        }
        else if (*(int *)(puVar8 + 1) + iVar3 == 1) goto LAB_14010cfa3;
      }
      uVar9 = 0;
    }
  }
LAB_14010cfa3:
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9 & 0xffffffff;
}



// FUNCTION 14010d0dd FUN_14010d0dd body=549 status=ok
// SIG undefined FUN_14010d0dd(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14010d0dd(undefined1 param_1,undefined8 param_2,longlong param_3,undefined1 *param_4,
                  undefined8 param_5)

{
  undefined2 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auVar9 [16];
  longlong lVar10;
  undefined1 in_XMM1 [16];
  undefined1 auVar11 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar12 [16];
  undefined1 in_XMM5 [16];
  undefined1 auVar13 [16];
  undefined1 auStack_178 [32];
  undefined4 local_158;
  undefined2 *local_150;
  undefined2 *local_148;
  undefined8 local_140;
  int local_138;
  undefined1 *local_130;
  undefined1 local_119;
  undefined2 local_118 [48];
  undefined1 local_b8 [88];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_178;
  iVar7 = *(int *)(param_4 + 8);
  uVar5 = 0;
  if (iVar7 < 1) {
    iVar7 = 0;
  }
  *(int *)(param_4 + 8) = iVar7;
  uVar2 = *(uint *)(param_4 + 0x10);
  uVar4 = 0;
  if (0 < (int)uVar2) {
    uVar4 = uVar2;
  }
  local_138 = *(int *)(param_4 + 0xc);
  if (*(int *)(param_4 + 0xc) <= iVar7) {
    local_138 = iVar7;
  }
  *(uint *)(param_4 + 0x10) = uVar4;
  *(int *)(param_4 + 0xc) = local_138;
  uVar3 = *(uint *)(param_4 + 0x14);
  if ((int)*(uint *)(param_4 + 0x14) <= (int)uVar4) {
    uVar3 = uVar4;
  }
  *(uint *)(param_4 + 0x14) = uVar3;
  local_130 = local_b8;
  local_140 = CONCAT44(local_140._4_4_,iVar7);
  local_150 = (undefined2 *)CONCAT62(local_150._2_6_,*(undefined2 *)(param_3 + 0x70));
  local_158 = CONCAT31(local_158._1_3_,*(undefined1 *)(param_3 + 0x76));
  local_148 = (undefined2 *)(param_3 + 0x78);
  local_119 = param_1;
  local_158 = FUN_1402362ce(param_2,CONCAT71((int7)(local_60 >> 8),
                                             *(char *)(param_3 + 0x74) != '\0' & param_4[1]),
                            *(char *)(param_3 + 0x74),*(undefined1 *)(param_3 + 0x75));
  if (0 < (int)uVar2) {
    uVar5 = 0x12;
    if (uVar4 < 0x12) {
      uVar5 = (ulonglong)uVar4;
    }
    uVar1 = *(undefined2 *)(param_3 + 0x78);
    lVar8 = uVar5 - 1;
    auVar9._8_4_ = (int)lVar8;
    auVar9._0_8_ = lVar8;
    auVar9._12_4_ = (int)((ulonglong)lVar8 >> 0x20);
    auVar11 = pmovsxbq(in_XMM1,0x302);
    auVar12 = pmovsxbq(in_XMM2,0x100);
    uVar6 = 0;
    lVar8 = SUB168(auVar9 ^ _DAT_149931e80,0);
    auVar13 = pmovsxbq(in_XMM5,0x404);
    do {
      lVar10 = SUB168(auVar9 ^ _DAT_149931e80,8);
      if ((bool)(~(lVar8 < SUB168(auVar12 ^ _DAT_149931e80,0)) & 1)) {
        *(undefined2 *)((longlong)local_118 + uVar6) = uVar1;
      }
      if (SUB168(auVar12 ^ _DAT_149931e80,8) <= lVar10) {
        *(undefined2 *)((longlong)local_118 + uVar6 + 2) = uVar1;
      }
      if (SUB168(auVar11 ^ _DAT_149931e80,0) <= lVar8) {
        *(undefined2 *)((longlong)local_118 + uVar6 + 4) = uVar1;
      }
      if (SUB168(auVar11 ^ _DAT_149931e80,8) <= lVar10) {
        *(undefined2 *)((longlong)local_118 + uVar6 + 6) = uVar1;
      }
      lVar10 = auVar12._8_8_;
      auVar12._0_8_ = auVar12._0_8_ + auVar13._0_8_;
      auVar12._8_8_ = lVar10 + auVar13._8_8_;
      lVar10 = auVar11._8_8_;
      auVar11._0_8_ = auVar11._0_8_ + auVar13._0_8_;
      auVar11._8_8_ = lVar10 + auVar13._8_8_;
      uVar6 = uVar6 + 8;
    } while (((int)uVar5 * 2 + 6U & 0x78) != uVar6);
  }
  local_118[uVar5] = 0;
  local_140 = param_5;
  local_148 = (undefined2 *)CONCAT44(local_148._4_4_,(int)uVar5);
  local_150 = local_118;
  FUN_1402365c4(CONCAT71((int7)((ulonglong)local_150 >> 8),local_119),
                CONCAT71((int7)(uVar5 >> 8),*param_4),param_3,local_b8);
  if ((local_60 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14010d304 FUN_14010d304 body=85 status=ok
// SIG undefined FUN_14010d304(void)

undefined8 * FUN_14010d304(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  
  *param_1 = 0;
  lVar1 = *param_2;
  uVar2 = (ulonglong)(param_2[1] - lVar1) >> 5;
  *(int *)(param_1 + 1) = (int)uVar2;
  if ((int)uVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_14010d3c6(param_1,uVar2 & 0xffffffff,0);
    FUN_14010d359(*param_1,lVar1,uVar2 & 0xffffffff);
  }
  return param_1;
}



// FUNCTION 14010d359 FUN_14010d359 body=109 status=ok
// SIG undefined FUN_14010d359(void)

void FUN_14010d359(longlong param_1,longlong param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  
  if (param_3 != 0) {
    lVar7 = param_1 + 0x10;
    lVar8 = 0;
    do {
      puVar1 = (undefined4 *)(param_2 + lVar8);
      uVar6 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      puVar2 = (undefined4 *)(param_1 + lVar8);
      *puVar2 = *puVar1;
      puVar2[1] = uVar6;
      puVar2[2] = uVar4;
      puVar2[3] = uVar5;
      plVar3 = *(longlong **)(param_2 + 0x10 + lVar8);
      if (plVar3 == (longlong *)0x0) {
        *(undefined8 *)(lVar7 + lVar8) = 0;
        uVar6 = 0;
      }
      else {
        *(longlong **)(lVar7 + lVar8) = plVar3;
        (**(code **)(*plVar3 + 8))();
        uVar6 = *(undefined4 *)(param_2 + 0x18 + lVar8);
      }
      *(undefined4 *)(lVar7 + lVar8 + 8) = uVar6;
      lVar8 = lVar8 + 0x20;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14010d3c6 FUN_14010d3c6 body=216 status=ok
// SIG undefined FUN_14010d3c6(void)

void FUN_14010d3c6(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = (longlong)param_2 * 0x20;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar2 < 0x7ff1) {
          uVar2 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)
                                        [((longlong)param_2 & 0x7ffffffffffffffU) * 2]];
        }
        else {
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar2 = -uVar3 & (uVar2 + uVar3) - 1;
        }
      }
      else {
        uVar2 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar2,8);
      }
    }
    iVar1 = (int)(uVar2 >> 5);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar4 = iVar1;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x20,8);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14010d4a2 FUN_14010d4a2 body=141 status=ok
// SIG undefined FUN_14010d4a2(void)

longlong * FUN_14010d4a2(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_1 != param_2) {
    plVar1 = (longlong *)*param_1;
    *param_1 = *param_2;
    *param_2 = 0;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x10))();
    }
    lVar2 = param_1[1];
    param_1[1] = param_2[1];
    param_2[1] = 0;
    if (lVar2 != 0) {
      local_20 = lVar2;
      FUN_1447a2442();
    }
  }
  param_1[2] = param_2[2];
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14010d530 thunk_FUN_14010d536 body=5 status=ok
// SIG undefined thunk_FUN_14010d536(void)

void thunk_FUN_14010d536(longlong param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  undefined1 auStack_8a8 [40];
  undefined8 uStack_880;
  undefined1 *puStack_878;
  undefined8 uStack_870;
  undefined1 *puStack_860;
  undefined1 *puStack_858;
  undefined1 *puStack_850;
  char cStack_848;
  undefined1 auStack_840 [2070];
  undefined1 auStack_2a [2];
  ulonglong uStack_28;
  
  uStack_28 = DAT_14c707940 ^ (ulonglong)auStack_8a8;
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    if ((int)param_2[8] < 0x202) {
      puStack_878 = (undefined1 *)0x0;
      uStack_870 = 0;
      FUN_14021219d(param_2);
      if ((int)param_2[8] < 0x1e4) {
        FUN_1427b76f8(&puStack_860,&puStack_878);
        if (puStack_878 != (undefined1 *)0x0) {
          FUN_1400020a8();
        }
        puStack_878 = puStack_860;
        uStack_870 = puStack_858;
        iVar1 = (int)puStack_858;
      }
      else {
        iVar1 = (int)uStack_870;
      }
      iVar2 = iVar1 + -1;
      if (iVar1 == 0) {
        iVar2 = 0;
      }
      puStack_858 = (undefined1 *)CONCAT44(puStack_858._4_4_,iVar2);
      puStack_860 = puStack_878;
      FUN_14475bf92(param_1);
      if (puStack_878 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      if (0x3ee < (int)((ulonglong)param_2[8] >> 0x20)) goto LAB_14010d57a;
      uStack_880 = 0;
      (**(code **)(*param_2 + 0x160))(param_2,&uStack_880);
      puStack_860 = auStack_840;
      cStack_848 = '\0';
      puStack_850 = auStack_2a;
      puStack_858 = puStack_860;
      FUN_14005eb5c(&uStack_880,&puStack_860);
      puStack_878 = puStack_860;
      uStack_870 = CONCAT44(uStack_870._4_4_,
                            (int)((ulonglong)((longlong)puStack_858 - (longlong)puStack_860) >> 1));
      FUN_1468fe3e4(param_1);
      if (cStack_848 == '\x01') {
        FUN_1400020a8(puStack_860);
      }
      FUN_14021219d(param_2,param_1 + 0x10);
    }
    if ((uStack_28 ^ (ulonglong)auStack_8a8) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
LAB_14010d57a:
  plVar3 = (longlong *)(**(code **)(*param_2 + 0x160))(param_2,param_1);
  (**(code **)(*plVar3 + 0x160))(plVar3,param_1 + 8);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(uStack_28 ^ (ulonglong)auStack_8a8);
}



// FUNCTION 14010d536 FUN_14010d536 body=443 status=ok
// SIG undefined FUN_14010d536(void)

void FUN_14010d536(longlong param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  undefined1 auStack_8a8 [40];
  undefined8 local_880;
  undefined1 *local_878;
  undefined8 uStack_870;
  undefined1 *local_860;
  undefined1 *local_858;
  undefined1 *local_850;
  char local_848;
  undefined1 local_840 [2070];
  undefined1 local_2a [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_8a8;
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    if ((int)param_2[8] < 0x202) {
      local_878 = (undefined1 *)0x0;
      uStack_870 = 0;
      FUN_14021219d(param_2);
      if ((int)param_2[8] < 0x1e4) {
        FUN_1427b76f8(&local_860,&local_878);
        if (local_878 != (undefined1 *)0x0) {
          FUN_1400020a8();
        }
        local_878 = local_860;
        uStack_870 = local_858;
        iVar1 = (int)local_858;
      }
      else {
        iVar1 = (int)uStack_870;
      }
      iVar2 = iVar1 + -1;
      if (iVar1 == 0) {
        iVar2 = 0;
      }
      local_858 = (undefined1 *)CONCAT44(local_858._4_4_,iVar2);
      local_860 = local_878;
      FUN_14475bf92(param_1);
      if (local_878 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      if (0x3ee < (int)((ulonglong)param_2[8] >> 0x20)) goto LAB_14010d57a;
      local_880 = 0;
      (**(code **)(*param_2 + 0x160))(param_2,&local_880);
      local_860 = local_840;
      local_848 = '\0';
      local_850 = local_2a;
      local_858 = local_860;
      FUN_14005eb5c(&local_880,&local_860);
      local_878 = local_860;
      uStack_870 = CONCAT44(uStack_870._4_4_,
                            (int)((ulonglong)((longlong)local_858 - (longlong)local_860) >> 1));
      FUN_1468fe3e4(param_1);
      if (local_848 == '\x01') {
        FUN_1400020a8(local_860);
      }
      FUN_14021219d(param_2,param_1 + 0x10);
    }
    if ((local_28 ^ (ulonglong)auStack_8a8) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
LAB_14010d57a:
  plVar3 = (longlong *)(**(code **)(*param_2 + 0x160))(param_2,param_1);
  (**(code **)(*plVar3 + 0x160))(plVar3,param_1 + 8);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_8a8);
}



// FUNCTION 14010d70a FUN_14010d70a body=2040 status=ok
// SIG undefined FUN_14010d70a(void)

longlong FUN_14010d70a(longlong param_1,int param_2,byte param_3)

{
  int *piVar1;
  code *pcVar2;
  ulonglong uVar3;
  uint uVar4;
  uint *lpTlsValue;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong *puVar8;
  byte bVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong *puVar13;
  longlong lVar14;
  bool bVar15;
  byte bVar16;
  bool bVar17;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  byte local_da;
  byte local_d9;
  ulonglong local_d8;
  ulonglong local_d0;
  ulonglong local_c8;
  ulonglong local_c0;
  longlong local_b8;
  ulonglong local_b0;
  ulonglong local_a8;
  ulonglong local_a0;
  ulonglong local_98;
  ulonglong local_90;
  undefined8 *local_88;
  undefined **local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_d9 = *(char *)(param_1 + 0x10) != '\x02' || param_2 != 0;
  local_da = param_3;
  if (*(char *)(param_1 + 0x184 + (longlong)param_2 * 0x180) != '\0') {
    local_b8 = 0;
LAB_14010d768:
    if ((local_60 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return local_b8;
  }
  param_1 = param_1 + (longlong)param_2 * 0x180;
  local_b8 = 0;
LAB_14010d7ca:
  bVar9 = DAT_14c758598 < 0 | local_d9;
  bVar16 = local_da & bVar9;
  do {
    local_c8 = *(ulonglong *)(param_1 + 0x140);
    lVar14 = 0;
    bVar17 = true;
    do {
      bVar15 = bVar17;
      puVar13 = (ulonglong *)(lVar14 * 0x80 + param_1 + 0x40);
      do {
        while( true ) {
          do {
            local_c0 = *puVar13;
            local_90 = puVar13[8];
            uVar4 = (uint)local_c0;
            puVar8 = (ulonglong *)0x0;
            if ((local_c0 & 0x3ffffff) != 0) {
              puVar8 = (ulonglong *)
                       ((ulonglong)((uVar4 & 0x3fff) * 0x18) +
                       *(longlong *)(&DAT_14c833b00 + (ulonglong)((uVar4 & 0x3ffffff) >> 0xe) * 8));
            }
            local_d0 = *puVar8;
            local_b0 = *puVar13;
          } while (local_c0 != local_b0);
          if ((((uint)local_90 ^ uVar4) & 0x3ffffff) != 0) break;
          if ((local_d0 & 0x3ffffff) == 0) goto LAB_14010da58;
          local_d8 = (local_90 & 0xfffffffffc000000) + 0x4000000;
          if (local_d8 >> 0x1a < local_90 >> 0x1a) {
            FUN_14274643a();
          }
          local_d8 = local_d8 & 0xfffffffffc000000 | (ulonglong)((uint)local_d0 & 0x3ffffff);
          LOCK();
          if (local_90 == puVar13[8]) {
            puVar13[8] = local_d8;
          }
          UNLOCK();
        }
        if ((local_d0 & 0x3ffffff) == 0) {
          lVar14 = 0;
        }
        else {
          lVar14 = (ulonglong)(((uint)local_d0 & 0x3fff) * 0x18) +
                   *(longlong *)
                    (&DAT_14c833b00 + (ulonglong)(((uint)local_d0 & 0x3ffffff) >> 0xe) * 8);
        }
        lVar14 = *(longlong *)(lVar14 + 8);
        local_d8 = (local_c0 & 0xfffffffffc000000) + 0x4000000;
        if (local_d8 >> 0x1a < local_c0 >> 0x1a) {
          FUN_14274643a();
        }
        uVar6 = local_c0;
        local_d8 = local_d8 & 0xfffffffffc000000 | (ulonglong)((uint)local_d0 & 0x3ffffff);
        LOCK();
        uVar5 = *puVar13;
        if (local_c0 == uVar5) {
          *puVar13 = local_d8;
        }
        UNLOCK();
      } while (local_c0 != uVar5);
      if (DAT_14c833980 != '\x01') {
        DAT_14c833940 = 0;
        DAT_14c833900 = TlsAlloc();
        DAT_14c833980 = '\x01';
      }
      lpTlsValue = TlsGetValue(DAT_14c833900);
      if (lpTlsValue == (uint *)0x0) {
        lpTlsValue = (uint *)FUN_14001cc68(0xc,0x10);
        lpTlsValue[0] = 0;
        lpTlsValue[1] = 0;
        lpTlsValue[2] = 0;
        TlsSetValue(DAT_14c833900,lpTlsValue);
      }
      if (0x3f < (int)lpTlsValue[2]) {
        uVar4 = *lpTlsValue;
        uVar5 = (ulonglong)uVar4;
        if (uVar5 != 0) {
          uVar11 = (ulonglong)(uVar4 >> 0xe);
          uVar12 = (ulonglong)(uVar4 & 0x3fff);
          do {
            local_90 = DAT_14c833940;
            local_d0 = (DAT_14c833940 & 0xfffffffffc000000) + 0x4000000;
            if (local_d0 >> 0x1a < DAT_14c833940 >> 0x1a) {
              local_a8 = uVar12;
              local_a0 = uVar11;
              local_98 = uVar5;
              FUN_14000f986(0x3a83126f);
              uVar5 = local_98;
              uVar11 = local_a0;
              uVar12 = local_a8;
            }
            local_d0 = local_d0 & 0xfffffffffc000000 | uVar5;
            *(uint *)(*(longlong *)(&DAT_14c833b00 + uVar11 * 8) + 0x10 + uVar12 * 0x18) =
                 (uint)local_90 & 0x3ffffff;
            LOCK();
            bVar17 = local_90 != DAT_14c833940;
            uVar3 = local_d0;
            if (bVar17) {
              uVar3 = DAT_14c833940;
            }
            DAT_14c833940 = uVar3;
            UNLOCK();
          } while (bVar17);
        }
        *lpTlsValue = lpTlsValue[1];
        lpTlsValue[1] = 0;
        lpTlsValue[2] = 0;
      }
      uVar10 = (uint)uVar6;
      uVar4 = uVar10 & 0x3ffffff;
      if ((uVar6 & 0x3ffffff) == 0) {
        puVar13 = (ulonglong *)0x0;
      }
      else {
        puVar13 = (ulonglong *)
                  ((ulonglong)((uVar10 & 0x3fff) * 0x18) +
                  *(longlong *)(&DAT_14c833b00 + (ulonglong)(uVar4 >> 0xe) * 8));
      }
      *puVar13 = *puVar13 & 0xfffffffffc000000;
      *(undefined4 *)(puVar13 + 2) = 0;
      puVar13[1] = (ulonglong)lpTlsValue[1];
      lpTlsValue[1] = uVar4;
      lpTlsValue[2] = lpTlsValue[2] + 1;
      if (lVar14 != 0) goto LAB_14010dcb7;
LAB_14010da58:
      lVar14 = 1;
      bVar17 = false;
    } while (bVar15);
    if (bVar16 == 0) break;
    local_90 = (local_c8 & 0xfffffffffc000000) + 0x4000000;
    if (local_90 >> 0x1a < local_c8 >> 0x1a) {
      FUN_14274643a();
    }
    local_90 = (ulonglong)((uint)local_c8 & 0x3fffffe) + (local_90 & 0xfffffffffc000000) + 1;
    LOCK();
    bVar17 = local_c8 == *(ulonglong *)(param_1 + 0x140);
    if (bVar17) {
      *(ulonglong *)(param_1 + 0x140) = local_90;
    }
    UNLOCK();
  } while (!bVar17);
  if (local_da != 0) {
    iVar7 = -1;
    if (bVar9 == 0) {
      iVar7 = DAT_14c758598;
    }
    (**(code **)(**(longlong **)(param_1 + 0x188) + 0x20))(*(longlong **)(param_1 + 0x188),iVar7,0);
    if (*(char *)(param_1 + 0x185) == '\0') goto LAB_14010de3a;
  }
  goto LAB_14010d768;
LAB_14010dcb7:
  while( true ) {
    local_90 = (local_c8 & 0xfffffffffc000000) + 0x4000000;
    if (local_90 >> 0x1a < local_c8 >> 0x1a) {
      FUN_14274643a();
    }
    local_90 = local_90 & 0xfffffffffc000000 | (ulonglong)((uint)local_c8 & 0x3ffffff);
    LOCK();
    bVar17 = local_c8 == *(ulonglong *)(param_1 + 0x140);
    if (bVar17) {
      *(ulonglong *)(param_1 + 0x140) = local_90;
    }
    UNLOCK();
    if (bVar17) break;
    local_c8 = *(ulonglong *)(param_1 + 0x140);
  }
  FUN_1456b2388(lVar14);
  if ((longlong)*(ulonglong *)(lVar14 + 0x80) < 0) {
    puVar13 = (ulonglong *)(lVar14 + 0x80);
    uVar6 = *(ulonglong *)(lVar14 + 0x80) & 0xffffffffffffffc0;
    LOCK();
    uVar5 = *puVar13;
    if (uVar6 == uVar5) {
      *puVar13 = uVar6 | 1;
    }
    UNLOCK();
    if (uVar6 != uVar5) {
      LOCK();
      bVar17 = uVar6 + 2 == *puVar13;
      if (bVar17) {
        *puVar13 = uVar6 | 3;
      }
      UNLOCK();
      if (!bVar17) goto LAB_14010de2e;
    }
    LOCK();
    uVar5 = *puVar13;
    *puVar13 = *puVar13 | 2;
    UNLOCK();
    if ((uVar5 >> 1 & 1) == 0) {
      uVar5 = *puVar13;
      do {
        LOCK();
        uVar6 = *puVar13;
        bVar17 = uVar5 == uVar6;
        if (bVar17) {
          *puVar13 = uVar5 | 4;
          uVar6 = uVar5;
        }
        UNLOCK();
        uVar5 = uVar6;
      } while (!bVar17);
      if ((uVar6 & 4) == 0) {
        local_68 = LowLevelTasks::
                   TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                   TTaskDelegateDummy::vftable;
        pcVar2 = *(code **)(*(longlong *)(lVar14 + 0x70) + 0x10);
        if (pcVar2 == FUN_1467aa644) {
          if ((uVar6 & 1) == 0) {
            FUN_1456b2388(*(undefined8 *)(lVar14 + 0x48));
          }
          local_68 = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
          local_90 = *(ulonglong *)(lVar14 + 0x48);
          local_88 = *(undefined8 **)(lVar14 + 0x50);
          *(undefined8 *)(lVar14 + 0x50) = 0;
          *(undefined ***)(lVar14 + 0x70) =
               LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
               TTaskDelegateDummy::vftable;
        }
        else {
          local_e8 = CONCAT31(local_e8._1_3_,(uVar6 & 1) == 0);
          (*pcVar2)(lVar14 + 0x70,&local_90,(undefined8 *)(lVar14 + 0x48),0x28);
        }
        LOCK();
        *puVar13 = *puVar13 | 0x20;
        UNLOCK();
        if ((code *)local_68[3] == FUN_1467aa6b4) {
          if (local_88 != (undefined8 *)0x0) {
            LOCK();
            piVar1 = (int *)(local_88 + 1);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)*local_88)(local_88,1);
            }
          }
        }
        else {
          (*(code *)local_68[3])(&local_68,&local_90);
        }
      }
      else {
        LOCK();
        uVar5 = *puVar13;
        *puVar13 = *puVar13 | 8;
        UNLOCK();
        if ((uVar5 >> 3 & 1) != 0) {
          local_68 = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateBase::vftable;
          local_e8 = 0x28;
          (*(code *)**(undefined8 **)(lVar14 + 0x70))(lVar14 + 0x70,&local_68,&local_90);
          LOCK();
          *(ulonglong *)(lVar14 + 0x80) = *(ulonglong *)(lVar14 + 0x80) | 0x20;
          UNLOCK();
          (*(code *)local_68[3])(&local_68,&local_90);
        }
      }
    }
  }
LAB_14010de2e:
  local_b8 = local_b8 + 1;
LAB_14010de3a:
  if (*(char *)(param_1 + 0x184) == '\x01') goto LAB_14010d768;
  goto LAB_14010d7ca;
}



// FUNCTION 14010df0a FUN_14010df0a body=242 status=ok
// SIG undefined FUN_14010df0a(void)

void FUN_14010df0a(longlong param_1,longlong *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  int iVar3;
  uint uVar4;
  undefined1 auStack_48 [36];
  uint local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3ca68);
  FUN_14482855a(param_1,param_2);
  if (*(char *)(param_1 + 0x1f9) < '\0') {
    iVar3 = FUN_1448332aa(param_2,&DAT_149e3ca68);
    if (1 < iVar3) {
      uVar4 = 0;
      if (((*(byte *)(param_1 + 0x1fa) & 1) != 0) && (uVar4 = 0, param_2[0xd] != 0)) {
        uVar4 = (uint)(*(longlong *)(param_2[0xd] + 0x10) != 0);
      }
      puVar2 = (ulonglong *)param_2[1];
      puVar1 = (uint *)*puVar2 + 1;
      if ((uint *)puVar2[1] < puVar1) {
        local_24 = uVar4;
        (**(code **)(*param_2 + 0x170))(param_2,&local_24,4);
        uVar4 = local_24;
        if (1 < local_24) {
          FUN_14572541c(param_2);
          uVar4 = local_24;
        }
      }
      else {
        uVar4 = *(uint *)*puVar2;
        *puVar2 = (ulonglong)puVar1;
      }
      if (uVar4 != 0) {
        FUN_14010dffd(param_2,param_1 + 0x160);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14010dffd FUN_14010dffd body=253 status=ok
// SIG undefined FUN_14010dffd(void)

longlong * FUN_14010dffd(longlong *param_1,longlong param_2)

{
  float *pfVar1;
  undefined8 *puVar2;
  ulonglong *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 auStack_48 [44];
  float local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar4 = FUN_14480c34d();
  FUN_14480c34d(uVar4,param_2 + 0x18);
  if (*(int *)((longlong)param_1 + 0x44) < 0x3ec) {
    puVar3 = (ulonglong *)param_1[1];
    pfVar1 = (float *)*puVar3 + 1;
    if ((float *)puVar3[1] < pfVar1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_1c,4);
      }
      else {
        thunk_FUN_14572512c(param_1,&local_1c);
      }
    }
    else {
      local_1c = *(float *)*puVar3;
      *puVar3 = (ulonglong)pfVar1;
    }
    *(double *)(param_2 + 0x30) = (double)local_1c;
  }
  else {
    puVar5 = (undefined8 *)(param_2 + 0x30);
    puVar2 = *(undefined8 **)param_1[1];
    if ((undefined8 *)((longlong *)param_1[1])[1] < puVar2 + 1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,puVar5,8);
      }
      else {
        thunk_FUN_146821949(param_1,puVar5);
      }
    }
    else {
      *puVar5 = *puVar2;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 8;
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14010e0fc FUN_14010e0fc body=539 status=ok
// SIG undefined FUN_14010e0fc(void)

longlong * FUN_14010e0fc(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  int iVar2;
  ulonglong *puVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_68 [36];
  uint local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] << 5,(longlong)*(int *)((longlong)param_2 + 0xc) << 5
            );
  local_44 = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_44 = *(uint *)(param_2 + 1);
  }
  puVar3 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar3 + 1;
  if ((uint *)puVar3[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_44,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_44);
    }
  }
  else {
    local_44 = *(uint *)*puVar3;
    *puVar3 = (ulonglong)puVar1;
  }
  if (local_44 == 0) {
    if (((*(byte *)(param_1 + 5) & 1) != 0) &&
       (*(undefined4 *)(param_2 + 1) = 0, *(int *)((longlong)param_2 + 0xc) != 0)) {
      FUN_14010e324(param_2,0);
    }
  }
  else if ((((int)local_44 < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x80000 < local_44 && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_44;
    lVar7 = 0x10;
    lVar5 = 0;
    do {
      lVar4 = *param_2;
      (**(code **)(*param_1 + 0x138))(param_1,lVar4 + lVar7 + -0x10);
      (**(code **)(*param_1 + 0x160))(param_1,lVar4 + lVar7 + -8);
      FUN_1402ac1b3(param_1,lVar4 + lVar7);
      lVar5 = lVar5 + 1;
      lVar7 = lVar7 + 0x20;
    } while (lVar5 < (int)param_2[1]);
  }
  else {
    *(undefined4 *)(param_2 + 1) = 0;
    if ((*(uint *)((longlong)param_2 + 0xc) == local_44) ||
       (FUN_14010e324(param_2), 0 < (int)local_44)) {
      iVar6 = 0;
      do {
        iVar2 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
          FUN_1479d5de8(param_2,iVar2);
        }
        lVar7 = *param_2;
        lVar5 = (longlong)iVar2 * 0x20;
        FUN_14010e318(lVar7 + lVar5);
        (**(code **)(*param_1 + 0x138))(param_1,lVar7 + lVar5);
        (**(code **)(*param_1 + 0x160))(param_1,lVar7 + lVar5 + 8);
        FUN_1402ac1b3(param_1,lVar7 + lVar5 + 0x10);
        iVar6 = iVar6 + 1;
      } while (iVar6 < (int)local_44);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14010e318 FUN_14010e318 body=11 status=ok
// SIG undefined FUN_14010e318(void)

void FUN_14010e318(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



// FUNCTION 14010e324 FUN_14010e324 body=212 status=ok
// SIG undefined FUN_14010e324(void)

void FUN_14010e324(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = (ulonglong)param_2 * 0x20;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (param_2 < 0x400) {
          uVar1 = (ulonglong)
                  (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[(ulonglong)param_2 * 2]];
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
        uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar1,8);
      }
    }
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 5)) {
      uVar2 = uVar1 >> 5 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x20,8);
  }
  return;
}



// FUNCTION 14010e3f8 FUN_14010e3f8 body=965 status=ok
// SIG undefined FUN_14010e3f8(void)

int * FUN_14010e3f8(int *param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  undefined *puVar12;
  byte bVar13;
  int iVar14;
  uint uVar15;
  longlong lVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  bool bVar20;
  
  iVar9 = DAT_14cad0188;
  iVar18 = DAT_14cad0160;
  if (DAT_14cad018c == 0) {
    iVar9 = DAT_14cad0160 + 1;
    bVar20 = DAT_14cad0164 == DAT_14cad0160;
    DAT_14cad0160 = iVar9;
    if (bVar20) {
      FUN_1447711aa(&DAT_14cad0158,iVar18);
    }
    iVar9 = DAT_14cad0180;
    if (DAT_14cad0180 == 0) {
      iVar10 = -1;
    }
    else {
      iVar10 = DAT_14cad0180 + 0x1e;
      if (-1 < DAT_14cad0180 + -1) {
        iVar10 = DAT_14cad0180 + -1;
      }
      iVar10 = iVar10 >> 5;
    }
    iVar14 = DAT_14cad0180 + 1;
    iVar17 = DAT_14cad0180 + 0x1f;
    if (-1 < DAT_14cad0180) {
      iVar17 = DAT_14cad0180;
    }
    if (iVar17 >> 5 != iVar10) {
      if (DAT_14cad0184 <= DAT_14cad0180) {
        if (DAT_14cad0180 + 0x20U < 0xa0) {
          DAT_14cad0184 = 0x80;
        }
        else {
          uVar15 = DAT_14cad0180 + 0x20U >> 5;
          if (DAT_14cad0184 + 0x1fU < 0xa0) {
            uVar19 = 4;
            if (4 < uVar15) {
              uVar19 = uVar15;
            }
          }
          else {
            uVar19 = (uVar15 * 3 >> 3) + uVar15 + 0x10;
          }
          uVar11 = FUN_144a3809e(uVar19 << 2,0);
          iVar10 = (int)(uVar11 >> 2);
          DAT_14cad0184 = -0x20;
          if ((int)uVar15 <= iVar10) {
            DAT_14cad0184 = iVar10 << 5;
          }
        }
        FUN_1446efbd8(&DAT_14cad0168,DAT_14cad0180);
        iVar14 = DAT_14cad0180 + 1;
      }
      iVar10 = iVar14 + 0x1f;
      if (-1 < iVar14) {
        iVar10 = iVar14;
      }
      if (iVar14 % 0x20 != 0) {
        puVar12 = &DAT_14cad0168;
        if (DAT_14cad0178 != (undefined *)0x0) {
          puVar12 = DAT_14cad0178;
        }
        bVar13 = -(char)(iVar14 % 0x20);
        DAT_14cad0180 = iVar14;
        *(uint *)(puVar12 + (longlong)(iVar10 >> 5) * 4) =
             (uint)(*(int *)(puVar12 + (longlong)(iVar10 >> 5) * 4) << (bVar13 & 0x1f)) >>
             (bVar13 & 0x1f);
        iVar14 = DAT_14cad0180;
      }
    }
    DAT_14cad0180 = iVar14;
    lVar16 = (longlong)iVar18;
    puVar12 = &DAT_14cad0168;
    if (DAT_14cad0178 != (undefined *)0x0) {
      puVar12 = DAT_14cad0178;
    }
    bVar13 = (byte)iVar9 & 0x1f;
    *(uint *)(puVar12 + (longlong)(iVar17 >> 5) * 4) =
         *(uint *)(puVar12 + (longlong)(iVar17 >> 5) * 4) &
         (-2 << bVar13 | 0xfffffffeU >> 0x20 - bVar13);
  }
  else {
    lVar16 = (longlong)DAT_14cad0188;
    DAT_14cad0188 = *(int *)(DAT_14cad0158 + 4 + lVar16 * 0x20);
    DAT_14cad018c = DAT_14cad018c + -1;
    iVar18 = iVar9;
    if (DAT_14cad018c != 0) {
      *(undefined4 *)(DAT_14cad0158 + (longlong)DAT_14cad0188 * 0x20) = 0xffffffff;
    }
  }
  puVar12 = &DAT_14cad0168;
  if (DAT_14cad0178 != (undefined *)0x0) {
    puVar12 = DAT_14cad0178;
  }
  iVar9 = iVar18 + 0x1f;
  if (-1 < iVar18) {
    iVar9 = iVar18;
  }
  *(uint *)(puVar12 + (longlong)(iVar9 >> 5) * 4) =
       *(uint *)(puVar12 + (longlong)(iVar9 >> 5) * 4) | 1 << ((byte)iVar18 & 0x1f);
  lVar8 = DAT_14cad0158;
  iVar9 = 1;
  lVar16 = lVar16 * 0x20;
  puVar1 = (undefined4 *)(DAT_14cad0158 + lVar16);
  puVar3 = (undefined8 *)param_2[1];
  *(undefined8 *)(DAT_14cad0158 + lVar16) = *(undefined8 *)*param_2;
  *(undefined8 *)(lVar8 + 8 + lVar16) = *puVar3;
  *puVar3 = 0;
  *(undefined4 *)(lVar8 + 0x10 + lVar16) = *(undefined4 *)(puVar3 + 1);
  *(undefined4 *)(lVar8 + 0x14 + lVar16) = *(undefined4 *)((longlong)puVar3 + 0xc);
  puVar3[1] = 0;
  *(undefined4 *)(lVar8 + 0x18 + lVar16) = 0xffffffff;
  uVar11 = *(ulonglong *)(lVar8 + lVar16);
  uVar15 = ((uint)(uVar11 >> 0x14) & 0xffff ^ (uint)(uVar11 >> 4)) * -0x7a143595;
  uVar15 = (uVar15 >> 0xd ^ uVar15) * -0x3d4d51cb;
  uVar15 = uVar15 >> 0x10 ^ uVar15;
  uVar19 = DAT_14cad0160 - DAT_14cad018c;
  if ((uVar19 != 0) && (uVar19 != 1)) {
    puVar12 = &DAT_14cad0190;
    if (DAT_14cad0198 != (undefined *)0x0) {
      puVar12 = DAT_14cad0198;
    }
    iVar10 = *(int *)(puVar12 + (ulonglong)(DAT_14cad01a0 - 1U & uVar15) * 4);
    while (iVar10 != -1) {
      puVar2 = (undefined4 *)(DAT_14cad0158 + (longlong)iVar10 * 0x20);
      if (*(ulonglong *)(DAT_14cad0158 + (longlong)iVar10 * 0x20) == uVar11) {
        if (*(longlong *)(puVar2 + 2) != 0) {
          FUN_1400020a8();
        }
        uVar4 = *puVar1;
        uVar5 = puVar1[1];
        uVar6 = puVar1[2];
        uVar7 = puVar1[3];
        *(undefined8 *)(puVar2 + 4) = *(undefined8 *)(puVar1 + 4);
        *puVar2 = uVar4;
        puVar2[1] = uVar5;
        puVar2[2] = uVar6;
        puVar2[3] = uVar7;
        FUN_1400fbf9e(&DAT_14cad0158,iVar18,1);
        iVar18 = iVar10;
        goto LAB_14010e5ee;
      }
      iVar10 = puVar2[6];
    }
  }
  if (3 < uVar19) {
    uVar11 = (ulonglong)(uVar19 & 0xfffffffe) + 0xf;
    lVar16 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    iVar9 = 1 << ((byte)lVar16 & 0x1f);
  }
  if (((int)uVar19 < 1) || (iVar9 <= DAT_14cad01a0)) {
    uVar15 = DAT_14cad01a0 - 1U & uVar15;
    puVar1[7] = uVar15;
    puVar12 = DAT_14cad0198;
    if (DAT_14cad0198 == (undefined *)0x0) {
      puVar12 = &DAT_14cad0190;
    }
    puVar1[6] = *(undefined4 *)
                 (puVar12 + ((longlong)DAT_14cad01a0 - 1U & (longlong)(int)uVar15) * 4);
    puVar12 = DAT_14cad0198;
    if (DAT_14cad0198 == (undefined *)0x0) {
      puVar12 = &DAT_14cad0190;
    }
    *(int *)(puVar12 + ((longlong)DAT_14cad01a0 - 1U & (longlong)(int)uVar15) * 4) = iVar18;
  }
  else {
    DAT_14cad01a0 = iVar9;
    FUN_14010e7be();
  }
LAB_14010e5ee:
  *param_1 = iVar18;
  return param_1;
}



// FUNCTION 14010e7be FUN_14010e7be body=619 status=ok
// SIG undefined FUN_14010e7be(void)

void FUN_14010e7be(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  ulonglong uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  ulonglong uVar12;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined *local_50;
  undefined8 local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (DAT_14cad0198 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cad0198,0,0,4);
  }
  uVar4 = DAT_14cad01a0;
  if (DAT_14cad01a0 != 0) {
    FUN_144a1cbf0(&DAT_14cad0190,0,DAT_14cad01a0,4);
    if (0 < (int)uVar4) {
      uVar2 = 0;
      do {
        puVar6 = DAT_14cad0198;
        if (DAT_14cad0198 == (undefined *)0x0) {
          puVar6 = &DAT_14cad0190;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14cad01a0 + 0x7fffffff & uVar2) * 4) = 0xffffffff;
        uVar2 = uVar2 + 1;
      } while (uVar4 != uVar2);
    }
    local_58 = 0x100000000;
    local_50 = &DAT_14cad0168;
    local_48 = 0xffffffff;
    local_40 = 0;
    if (DAT_14cad0180 == 0) {
      uVar7 = 1;
      local_48._0_4_ = 0xffffffff;
      local_48._4_4_ = 0;
      local_58._0_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_58);
      uVar7 = local_58 >> 0x20;
    }
    iVar3 = (int)local_58;
    uVar4 = (uint)local_48;
    iVar5 = local_48._4_4_;
    iVar8 = local_40;
    if (local_48._4_4_ < *(int *)(local_50 + 0x18)) {
      do {
        lVar10 = DAT_14cad0158;
        lVar9 = (longlong)iVar5 * 0x20;
        uVar2 = ((uint)(*(ulonglong *)(DAT_14cad0158 + lVar9) >> 0x14) & 0xffff ^
                (uint)(*(ulonglong *)(DAT_14cad0158 + lVar9) >> 4)) * -0x7a143595;
        uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
        uVar12 = (longlong)(int)(uVar2 >> 0x10 ^ uVar2) & (longlong)(int)DAT_14cad01a0 - 1U;
        iVar11 = (int)uVar12;
        *(int *)(DAT_14cad0158 + 0x1c + lVar9) = iVar11;
        puVar6 = DAT_14cad0198;
        if (DAT_14cad0198 == (undefined *)0x0) {
          puVar6 = &DAT_14cad0190;
        }
        *(undefined4 *)(lVar10 + 0x18 + lVar9) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14cad01a0 - 1U & uVar12) * 4);
        puVar6 = DAT_14cad0198;
        if (DAT_14cad0198 == (undefined *)0x0) {
          puVar6 = &DAT_14cad0190;
        }
        *(int *)(puVar6 + ((longlong)iVar11 & (longlong)(int)DAT_14cad01a0 - 1U) * 4) = iVar5;
        uVar4 = ~(uint)uVar7 & uVar4;
        puVar6 = *(undefined **)(local_50 + 0x10);
        if (*(undefined **)(local_50 + 0x10) == (undefined *)0x0) {
          puVar6 = local_50;
        }
        iVar11 = *(int *)(local_50 + 0x18);
        lVar10 = (longlong)iVar3;
        uVar2 = *(uint *)(puVar6 + lVar10 * 4) & uVar4;
        if (uVar2 == 0) {
          iVar5 = iVar11 + 0x1e;
          if (-1 < iVar11 + -1) {
            iVar5 = iVar11 + -1;
          }
          iVar5 = iVar5 >> 5;
          iVar1 = iVar5;
          if (iVar5 < iVar3) {
            iVar1 = iVar3;
          }
          if (iVar5 <= iVar3) break;
          lVar9 = 0;
          while( true ) {
            iVar8 = iVar8 + 0x20;
            uVar2 = *(uint *)(puVar6 + lVar9 * 4 + lVar10 * 4 + 4);
            if (uVar2 != 0) break;
            lVar9 = lVar9 + 1;
            if (iVar1 - lVar10 == lVar9) goto LAB_14010e9e4;
          }
          iVar3 = iVar3 + (int)lVar9 + 1;
          uVar4 = 0xffffffff;
        }
        uVar7 = (ulonglong)(-uVar2 & uVar2);
        uVar12 = uVar7 * 2 + 1;
        lVar10 = 0x3f;
        if (uVar12 != 0) {
          for (; uVar12 >> lVar10 == 0; lVar10 = lVar10 + -1) {
          }
        }
        iVar5 = (iVar8 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
      } while (iVar5 < iVar11);
    }
  }
LAB_14010e9e4:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14010ea2a FUN_14010ea2a body=147 status=ok
// SIG undefined FUN_14010ea2a(void)

void FUN_14010ea2a(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  lVar4 = *(longlong *)(param_1 + 0x18);
  if (lVar4 != 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
    LOCK();
    puVar1 = (uint *)(lVar4 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar4 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(lVar4 + 0xd);
        plVar5 = (longlong *)FUN_14001cc68(0x10,8);
        plVar5[1] = lVar4;
        plVar7 = DAT_14ca843c0;
        plVar6 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar5 = (longlong)plVar7;
            LOCK();
            bVar8 = plVar7 != DAT_14ca843c0;
            plVar6 = plVar5;
            if (bVar8) {
              plVar7 = DAT_14ca843c0;
              plVar6 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar6;
            UNLOCK();
          } while (bVar8);
        }
        else {
          do {
            *plVar5 = (longlong)plVar6;
            LOCK();
            bVar8 = plVar6 != DAT_14ca843c8;
            plVar7 = plVar5;
            if (bVar8) {
              plVar6 = DAT_14ca843c8;
              plVar7 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar7;
            UNLOCK();
          } while (bVar8);
        }
      }
    }
  }
  FUN_14010eabe(param_1);
  return;
}



// FUNCTION 14010eabe FUN_14010eabe body=137 status=ok
// SIG undefined FUN_14010eabe(void)

void FUN_14010eabe(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  lVar4 = *(longlong *)(param_1 + 0x10);
  if (lVar4 != 0) {
    *(undefined8 *)(param_1 + 0x10) = 0;
    LOCK();
    puVar1 = (uint *)(lVar4 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar4 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(lVar4 + 0xd);
        plVar5 = (longlong *)FUN_14001cc68(0x10,8);
        plVar5[1] = lVar4;
        plVar7 = DAT_14ca843c0;
        plVar6 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar5 = (longlong)plVar7;
            LOCK();
            bVar8 = plVar7 != DAT_14ca843c0;
            plVar6 = plVar5;
            if (bVar8) {
              plVar7 = DAT_14ca843c0;
              plVar6 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar6;
            UNLOCK();
          } while (bVar8);
        }
        else {
          do {
            *plVar5 = (longlong)plVar6;
            LOCK();
            bVar8 = plVar6 != DAT_14ca843c8;
            plVar7 = plVar5;
            if (bVar8) {
              plVar6 = DAT_14ca843c8;
              plVar7 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar7;
            UNLOCK();
          } while (bVar8);
        }
      }
    }
  }
  return;
}



// FUNCTION 14010eb54 FUN_14010eb54 body=94 status=ok
// SIG undefined FUN_14010eb54(void)

undefined8 FUN_14010eb54(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  if (((DAT_14c9485a0 != 0) && (DAT_14c948598 != (longlong *)0x0)) &&
     (cVar1 = (**(code **)(*DAT_14c948598 + 0x30))(), cVar1 != '\0')) {
    plVar3 = DAT_14c948598;
    if (DAT_14c9485a0 == 0) {
      plVar3 = (longlong *)0x0;
    }
                    /* WARNING: Could not recover jumptable at 0x00014010eba6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar3 + 0x58))(plVar3,param_1,param_2);
    return uVar2;
  }
  return 0;
}



// FUNCTION 14010ebb2 FUN_14010ebb2 body=121 status=ok
// SIG undefined FUN_14010ebb2(void)

void FUN_14010ebb2(longlong param_1,longlong *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 unaff_RBX;
  undefined8 unaff_RBP;
  
  puVar3 = (undefined8 *)*param_2;
  uVar4 = *puVar3;
  uVar1 = *(undefined1 *)puVar3[4];
  uVar2 = *(undefined1 *)puVar3[8];
  uVar5 = puVar3[0xc];
  lVar6 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar7 = FUN_144828ac0(puVar3 + 0x10,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar6 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar6 * 0x14));
  FUN_144828832(*(undefined8 *)(param_1 + 0xc0),uVar4,
                CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar1) & 0xffffffff,
                CONCAT71((int7)((ulonglong)unaff_RBP >> 8),uVar2) & 0xffffffff,uVar5,uVar7);
  return;
}



// FUNCTION 14010ec2c FUN_14010ec2c body=21 status=ok
// SIG undefined FUN_14010ec2c(void)

undefined8 FUN_14010ec2c(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14010ec4c FUN_14010ec4c body=197 status=ok
// SIG undefined FUN_14010ec4c(void)

void FUN_14010ec4c(LPCRITICAL_SECTION param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  ulonglong uVar6;
  bool bVar7;
  longlong lVar8;
  ulonglong uVar9;
  
  EnterCriticalSection(param_1);
  iVar2 = *(int *)((longlong)&param_1[1].OwningThread + 4);
  *(int *)((longlong)&param_1[1].OwningThread + 4) = iVar2 + 1;
  uVar6 = (ulonglong)param_1[1].LockCount;
  if ((longlong)uVar6 < 1) {
    *(int *)((longlong)&param_1[1].OwningThread + 4) = iVar2;
  }
  else {
    bVar7 = false;
    do {
      lVar8 = uVar6 * 0x10 + -8;
      uVar9 = uVar6;
      while ((*(int *)((longlong)&(param_1[1].DebugInfo)->Type + lVar8) != 0 &&
             (plVar3 = *(longlong **)((longlong)param_1[1].DebugInfo + lVar8 + -8),
             plVar3 != (longlong *)0x0))) {
        cVar5 = (**(code **)(*plVar3 + 0x60))(plVar3,param_2,param_3);
        if (cVar5 == '\0') break;
        lVar8 = lVar8 + -0x10;
        bVar4 = uVar9 < 2;
        uVar9 = uVar9 - 1;
        if (bVar4) {
          piVar1 = (int *)((longlong)&param_1[1].OwningThread + 4);
          *piVar1 = *piVar1 + -1;
          if (!bVar7) goto LAB_14010ecc8;
          goto LAB_14010ecf8;
        }
      }
      uVar6 = uVar9 - 1;
      bVar7 = true;
    } while (1 < uVar9);
    piVar1 = (int *)((longlong)&param_1[1].OwningThread + 4);
    *piVar1 = *piVar1 + -1;
LAB_14010ecf8:
    FUN_14109be94(param_1,0);
  }
LAB_14010ecc8:
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014010ecdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_1);
    return;
  }
  return;
}



// FUNCTION 14010ed12 FUN_14010ed12 body=97 status=ok
// SIG undefined FUN_14010ed12(void)

void FUN_14010ed12(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_14010ed74();
  if (0 < *(int *)(param_1 + 0x6b0)) {
    lVar1 = 0x98;
    lVar2 = 0;
    do {
      *(longlong *)(*(longlong *)(param_1 + 0x6a8) + lVar1) = param_1;
      lVar2 = lVar2 + 1;
      lVar1 = lVar1 + 0xa0;
    } while (lVar2 < *(int *)(param_1 + 0x6b0));
  }
  *(byte *)(param_1 + 0x674) =
       *(byte *)(param_1 + 0x674) & 0xfe | *(byte *)(param_1 + 0x66c) >> 4 & 1;
  return;
}



// FUNCTION 14010ed74 FUN_14010ed74 body=54 status=ok
// SIG undefined FUN_14010ed74(void)

void FUN_14010ed74(longlong param_1)

{
  FUN_14010edaa();
  if ((*(byte *)(param_1 + 0x44d) & 0x40) != 0) {
    FUN_140078ec2(param_1 + 0x410,*(undefined8 *)(param_1 + 0x454));
    *(byte *)(param_1 + 0x44d) = *(byte *)(param_1 + 0x44d) & 0xbf;
  }
  return;
}



// FUNCTION 14010edaa FUN_14010edaa body=189 status=ok
// SIG undefined FUN_14010edaa(void)

void FUN_14010edaa(longlong param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(**(longlong **)(param_1 + 0x10) + 0x390);
  if (pcVar1 != (code *)&LAB_1427dd5fe) {
    (*pcVar1)(*(longlong **)(param_1 + 0x10),param_1,1,0,0);
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951808) {
    FUN_144b3d300(&DAT_14c951808);
    if (DAT_14c951808 == -1) {
      FUN_145dfc00c(&DAT_14c951778);
      atexit((_func_5014 *)&LAB_142809c19);
      _Init_thread_footer(&DAT_14c951808);
    }
  }
  if ((*(longlong *)(param_1 + 0xa8) != 0) && (*(char *)(param_1 + 0xb9) != '\x03')) {
    FUN_14010ee68(*(longlong *)(param_1 + 0xa8),param_1);
    return;
  }
  return;
}



// FUNCTION 14010ee68 FUN_14010ee68 body=388 status=ok
// SIG undefined FUN_14010ee68(void)

void FUN_14010ee68(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong *plVar2;
  ulonglong uVar3;
  undefined1 auStack_68 [36];
  undefined1 local_44 [4];
  longlong local_40;
  char local_31;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_31 = '\0';
  local_40 = param_2;
  local_30 = param_2;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  FUN_14482925a(param_1 + 0x240,local_44,&local_40,&local_31);
  if (local_31 != '\0') goto LAB_14010eeed;
  if (*(char *)(param_2 + 0x9c) < '\0') {
    FUN_14010efee(param_1 + 0x230,&local_30);
    FUN_14010f056(param_1,local_30);
    param_2 = local_30;
  }
  if ((byte)(*(char *)(param_2 + 0xb9) - 1U) < 2) {
    if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(param_2);
    }
    plVar2 = (longlong *)(param_1 + 0x2a0);
    uVar3 = (ulonglong)*(int *)(param_1 + 0x2a8);
    uVar1 = *(int *)(param_1 + 0x2a8) + 1;
    *(uint *)(param_1 + 0x2a8) = uVar1;
    if (*(uint *)(param_1 + 0x2ac) < uVar1) {
LAB_14010efbc:
      FUN_14092ecf6(plVar2,uVar3 & 0xffffffff);
    }
  }
  else {
    if (*(char *)(param_2 + 0xb9) != '\x03') goto LAB_14010eeed;
    if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(param_2);
    }
    plVar2 = (longlong *)(param_1 + 0x290);
    uVar3 = (ulonglong)*(int *)(param_1 + 0x298);
    uVar1 = *(int *)(param_1 + 0x298) + 1;
    *(uint *)(param_1 + 0x298) = uVar1;
    if (*(uint *)(param_1 + 0x29c) < uVar1) goto LAB_14010efbc;
  }
  *(longlong *)(*plVar2 + uVar3 * 8) = param_2;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
LAB_14010eeed:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14010efee FUN_14010efee body=103 status=ok
// SIG undefined FUN_14010efee(void)

ulonglong FUN_14010efee(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  lVar2 = *param_1;
  iVar1 = (int)param_1[1];
  uVar4 = (ulonglong)iVar1;
  if (uVar4 != 0) {
    lVar5 = uVar4 * 8;
    uVar3 = 0;
    do {
      if (*(longlong *)(lVar2 + uVar3 * 8) == *param_2) {
        if ((int)uVar3 != -1) {
          uVar4 = uVar3 & 0xffffffff;
          goto LAB_14010f042;
        }
        break;
      }
      uVar3 = uVar3 + 1;
      lVar5 = lVar5 + -8;
    } while (lVar5 != 0);
  }
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1406ca8e4(param_1,iVar1);
    lVar2 = *param_1;
  }
  *(longlong *)(lVar2 + uVar4 * 8) = *param_2;
LAB_14010f042:
  return uVar4 & 0xffffffff;
}



// FUNCTION 14010f056 FUN_14010f056 body=525 status=ok
// SIG undefined FUN_14010f056(void)

void FUN_14010f056(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  char cVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  bool bVar12;
  
  if ((((*(byte *)(param_1 + 0x65) & 0x18) != 0) && ((*(uint *)(param_1 + 8) & 0x30) == 0)) &&
     ((*(byte *)((longlong)param_2 + 0x9f) & 9) != 1)) {
    cVar2 = *(char *)((longlong)param_2 + 0x9c);
    uVar10 = 0xf;
    if (cVar2 < '\0') {
      uVar10 = 0;
    }
    if ((*(char *)((longlong)param_2 + 0xb9) == '\x02') &&
       (cVar3 = (**(code **)(*param_2 + 0x1f8))(param_2), cVar3 == '\0')) {
      FUN_144938c96(param_2);
      if (((longlong *)param_2[2])[0x22] == 0) {
        (**(code **)(*(longlong *)param_2[2] + 1000))();
      }
    }
    iVar7 = *(int *)(param_1 + 0x228);
    if ((longlong)iVar7 != 0) {
      plVar4 = *(longlong **)(param_1 + 0x220);
      lVar5 = (longlong)iVar7 * 0x28;
      do {
        if ((longlong *)*plVar4 == param_2) {
          if (plVar4 != (longlong *)0x0) {
            *(undefined4 *)(plVar4 + 2) = uVar10;
            goto LAB_14010f174;
          }
          break;
        }
        plVar4 = plVar4 + 5;
        lVar5 = lVar5 + -0x28;
      } while (lVar5 != 0);
    }
    if (param_2 == (longlong *)0x0) {
      iVar9 = 0;
      uVar11 = 0;
    }
    else {
      uVar11 = *(uint *)((longlong)param_2 + 0xc);
      if ((int)uVar11 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar11 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      iVar9 = *(int *)(lVar5 + 0x10);
      if (*(int *)(lVar5 + 0x10) == 0) {
        LOCK();
        iVar7 = DAT_14c964868 + 1;
        UNLOCK();
        iVar8 = DAT_14c964868 + 1;
        bVar12 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar7;
        if (bVar12) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar8);
        }
        LOCK();
        iVar9 = *(int *)(lVar5 + 0x10);
        bVar12 = iVar9 == 0;
        if (bVar12) {
          *(int *)(lVar5 + 0x10) = iVar8;
          iVar9 = 0;
        }
        UNLOCK();
        if (bVar12) {
          iVar9 = iVar8;
        }
      }
      iVar7 = *(int *)(param_1 + 0x228);
    }
    *(uint *)(param_1 + 0x228) = iVar7 + 1U;
    if (*(uint *)(param_1 + 0x22c) < iVar7 + 1U) {
      FUN_1405f22b2((longlong *)(param_1 + 0x220),iVar7);
    }
    lVar5 = *(longlong *)(param_1 + 0x220);
    lVar6 = (longlong)iVar7;
    *(longlong **)(lVar5 + lVar6 * 0x28) = param_2;
    *(uint *)(lVar5 + 8 + lVar6 * 0x28) = uVar11;
    *(int *)(lVar5 + 0xc + lVar6 * 0x28) = iVar9;
    *(undefined4 *)(lVar5 + 0x10 + lVar6 * 0x28) = uVar10;
    puVar1 = (undefined8 *)(lVar5 + 0x18 + lVar6 * 0x28);
    *puVar1 = 0;
    puVar1[1] = 0;
LAB_14010f174:
    if ((*(byte *)((longlong)param_2 + 0x9f) & 0x10) == 0) {
      (**(code **)(*param_2 + 0x380))(param_2);
    }
    if (cVar2 < '\0') {
      FUN_1406caa56(param_2[0x15],param_2);
      return;
    }
  }
  return;
}



// FUNCTION 14010f263 FUN_14010f263 body=612 status=ok
// SIG undefined FUN_14010f263(void)

void FUN_14010f263(double *param_1,undefined8 param_2,undefined8 param_3,float *param_4)

{
  float fVar1;
  double dVar2;
  double dVar3;
  float fVar4;
  undefined1 auStack_188 [32];
  undefined8 local_168;
  float *local_160;
  float local_158;
  undefined4 uStack_154;
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  float local_128;
  undefined4 uStack_124;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_160 = (float *)&local_f8;
  local_f8 = 0;
  local_168 = param_3;
  FUN_1432ab9be(&local_c8,param_1,&local_98,param_2);
  fVar1 = *param_4;
  fVar4 = fVar1 * 0.5;
  local_160 = &local_128;
  local_168 = param_3;
  local_128 = fVar4;
  FUN_1432ab9be(&local_f8,param_1,&local_c8,param_2);
  local_160 = &local_158;
  local_168 = param_3;
  local_158 = fVar4;
  FUN_1432ab9be(&local_128,param_1,&local_f8,param_2);
  local_168 = param_3;
  local_160 = param_4;
  FUN_1432ab9be(&local_158,param_1,&local_128,param_2);
  dVar3 = (double)CONCAT44(uStack_f4,local_f8) + (double)CONCAT44(uStack_124,local_128);
  dVar2 = (double)fVar1;
  *param_1 = (dVar3 + dVar3 + local_c8 + (double)CONCAT44(uStack_154,local_158)) *
             0.1666666716337204 * dVar2 + *param_1;
  param_1[1] = (local_f0 + local_120 + local_f0 + local_120 + local_c0 + local_150) *
               0.1666666716337204 * dVar2 + param_1[1];
  param_1[2] = (local_e8 + local_118 + local_e8 + local_118 + local_b8 + local_148) *
               0.1666666716337204 * dVar2 + param_1[2];
  dVar2 = (double)*param_4;
  param_1[3] = (local_e0 + local_110 + local_e0 + local_110 + local_b0 + local_140) *
               0.1666666716337204 * dVar2 + param_1[3];
  param_1[4] = (local_d8 + local_108 + local_d8 + local_108 + local_a8 + local_138) *
               0.1666666716337204 * dVar2 + param_1[4];
  param_1[5] = (local_d0 + local_100 + local_d0 + local_100 + local_a0 + local_130) *
               0.1666666716337204 * dVar2 + param_1[5];
  if ((local_60 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14010f4c8 FUN_14010f4c8 body=250 status=ok
// SIG undefined FUN_14010f4c8(void)

longlong * FUN_14010f4c8(longlong param_1,longlong *param_2,double *param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_b8 [40];
  undefined8 *local_90;
  undefined8 local_88 [4];
  double local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar2 = *(longlong **)(param_1 + 0x20);
  if (plVar2 == (longlong *)0x0) {
    *param_2 = 0;
  }
  else {
    puVar4 = (undefined8 *)(param_1 + 0x30);
    puVar5 = local_88;
    for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    local_68 = *param_3 * local_68;
    dStack_60 = param_3[1] * dStack_60;
    local_58 = param_3[2] * local_58;
    dStack_50 = dStack_50 * 0.0;
    (**(code **)(*plVar2 + 0x40))(plVar2,&local_90);
    lVar3 = FUN_14001cc68(0xc0,0x10);
    FUN_14010f5c4(lVar3,&local_90,local_88);
    *param_2 = lVar3;
    if (lVar3 != 0) {
      LOCK();
      *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
      UNLOCK();
    }
    if (local_90 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(local_90 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((*piVar1 == 0) && (*(int *)((longlong)local_90 + 0xc) == 0)) {
        (**(code **)*local_90)(local_90,1);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14010f5c4 FUN_14010f5c4 body=300 status=ok
// SIG undefined FUN_14010f5c4(void)

undefined8 * FUN_14010f5c4(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [48];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined2 *)(param_1 + 3) = 0x100;
  *(undefined1 *)((longlong)param_1 + 0x1a) = 1;
  *(undefined2 *)((longlong)param_1 + 0x1c) = 0x404;
  *param_1 = &PTR_FUN_149f4b940;
  param_1[4] = *param_2;
  *param_2 = 0;
  puVar2 = param_3;
  puVar3 = param_1 + 6;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  param_1[0x12] = 0x7fefffffffffffff;
  param_1[0x13] = 0x7fefffffffffffff;
  param_1[0x14] = 0x7fefffffffffffff;
  param_1[0x15] = 0xffefffffffffffff;
  param_1[0x16] = 0xffefffffffffffff;
  param_1[0x17] = 0xffefffffffffffff;
  (**(code **)(*(longlong *)param_1[4] + 0x80))((longlong *)param_1[4],local_88);
  FUN_1400c6592(local_88,&local_58,param_3);
  param_1[0x14] = local_48;
  param_1[0x12] = local_58;
  param_1[0x13] = uStack_50;
  *(undefined4 *)(param_1 + 0x15) = local_40;
  *(undefined4 *)((longlong)param_1 + 0xac) = uStack_3c;
  *(undefined4 *)(param_1 + 0x16) = uStack_38;
  *(undefined4 *)((longlong)param_1 + 0xb4) = uStack_34;
  param_1[0x17] = local_30;
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_1[4] + 0x18);
  *(undefined1 *)((longlong)param_1 + 0x19) = *(undefined1 *)(param_1[4] + 0x19);
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14010f6f2 FUN_14010f6f2 body=29 status=ok
// SIG undefined FUN_14010f6f2(void)

void FUN_14010f6f2(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14010f710 FUN_14010f710 body=73 status=ok
// SIG undefined FUN_14010f710(void)

undefined8 * FUN_14010f710(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a3290e0;
  if (param_1[2] != 0) {
    plVar1 = param_1 + 6;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[4];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14010f75a FUN_14010f75a body=29 status=ok
// SIG undefined FUN_14010f75a(void)

void FUN_14010f75a(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14010f778 FUN_14010f778 body=73 status=ok
// SIG undefined FUN_14010f778(void)

undefined8 * FUN_14010f778(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a329100;
  if (param_1[2] != 0) {
    plVar1 = param_1 + 6;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[4];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14010f7c2 FUN_14010f7c2 body=29 status=ok
// SIG undefined FUN_14010f7c2(void)

void FUN_14010f7c2(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14010f7e0 FUN_14010f7e0 body=73 status=ok
// SIG undefined FUN_14010f7e0(void)

undefined8 * FUN_14010f7e0(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a329120;
  if (param_1[2] != 0) {
    plVar1 = param_1 + 6;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[4];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14010f82a FUN_14010f82a body=133 status=ok
// SIG undefined FUN_14010f82a(void)

undefined8 * FUN_14010f82a(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_149e19490;
  FUN_14010f8af(param_1[6],*(undefined4 *)(param_1 + 7));
  if (param_1[6] != 0) {
    FUN_1400020a8();
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
  *param_1 = &PTR_LAB_149e193d0;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14010f8af FUN_14010f8af body=77 status=ok
// SIG undefined FUN_14010f8af(void)

void FUN_14010f8af(longlong param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)(param_1 + 0x28);
    do {
      if (*(longlong **)(puVar1 + -2) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(puVar1 + -2) + 0x10))();
        *(undefined8 *)(puVar1 + -2) = 0;
        *puVar1 = 0;
      }
      if (*(longlong *)(puVar1 + -10) != 0) {
        FUN_1400020a8();
      }
      puVar1 = puVar1 + 0xc;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14010f8fc FUN_14010f8fc body=225 status=ok
// SIG undefined FUN_14010f8fc(void)

undefined8 FUN_14010f8fc(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  if (*(int *)(param_1 + 0x84) == 0) {
    return 0;
  }
  uVar1 = *(uint *)(param_1 + 0x80);
  if ((int)uVar1 < 0) {
    return 0;
  }
  if (DAT_14c9647dc <= (int)uVar1) {
    return 0;
  }
  puVar3 = (undefined8 *)
           ((ulonglong)((uVar1 & 0xffff) * 0x18) +
           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
  if (puVar3 == (undefined8 *)0x0) {
    return 0;
  }
  if (*(int *)(puVar3 + 2) != *(int *)(param_1 + 0x84)) {
    return 0;
  }
  if ((*(uint *)(puVar3 + 1) & 0x10200000) != 0) {
    return 0;
  }
  if ((*(uint *)(puVar3 + 1) & 0x10200000) == 0) {
    uVar4 = *puVar3;
  }
  else {
    uVar4 = 0;
  }
  cVar2 = FUN_144829e72(uVar4,param_2);
  if (cVar2 != '\0') {
    return 1;
  }
  if (*(int *)(param_1 + 0x84) != 0) {
    uVar1 = *(uint *)(param_1 + 0x80);
    uVar4 = 0;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_14010f9c0;
    puVar3 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((puVar3 != (undefined8 *)0x0) &&
       ((*(int *)(puVar3 + 2) == *(int *)(param_1 + 0x84) &&
        ((*(uint *)(puVar3 + 1) & 0x10200000) == 0)))) {
      uVar4 = *puVar3;
      goto LAB_14010f9c0;
    }
  }
  uVar4 = 0;
LAB_14010f9c0:
  FUN_14010f9de(uVar4,param_2);
  return 0;
}



// FUNCTION 14010f9de FUN_14010f9de body=150 status=ok
// SIG undefined FUN_14010f9de(void)

byte FUN_14010f9de(longlong param_1,longlong *param_2)

{
  PSRWLOCK SRWLock;
  int iVar1;
  longlong lVar2;
  byte bVar3;
  longlong lVar4;
  
  SRWLock = (PSRWLOCK)(param_1 + 0x38);
  AcquireSRWLockShared(SRWLock);
  iVar1 = *(int *)(param_1 + 0x30);
  ReleaseSRWLockShared(SRWLock);
  if ((longlong)iVar1 < 1) {
    bVar3 = 0;
  }
  else {
    lVar4 = 0;
    bVar3 = 0;
    do {
      AcquireSRWLockShared(SRWLock);
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x28) + lVar4 * 8);
      ReleaseSRWLockShared(SRWLock);
      if ((lVar2 != 0) && (*(int *)(lVar2 + 0xc) == 1)) {
        bVar3 = bVar3 | *(longlong *)(lVar2 + 0x10) == *param_2;
      }
      lVar4 = lVar4 + 1;
    } while (iVar1 != lVar4);
  }
  return bVar3;
}



// FUNCTION 14010fa74 FUN_14010fa74 body=207 status=ok
// SIG undefined FUN_14010fa74(void)

longlong FUN_14010fa74(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  char cVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + 0x308) != 0) {
    FUN_14010fbc8(param_1 + 0x2f8,param_2,param_3,0);
  }
  cVar1 = FUN_14010fb43(*(undefined2 *)
                         (&DAT_14ca85070 + (longlong)*(int *)(*(longlong *)(param_1 + 0x58) + 8) * 2
                         ));
  *(char *)(param_1 + 0x60) = cVar1;
  *(bool *)(param_1 + 0x61) = *(int *)(DAT_14ca453f0 + 4) != 0;
  *(undefined4 *)(param_1 + 0x490) = *(undefined4 *)(DAT_14ca453c0 + 4);
  *(bool *)(param_1 + 0x495) = *(int *)(DAT_14ca45348 + 4) != 0;
  *(bool *)(param_1 + 0x496) = *(int *)(DAT_14ca45360 + 4) != 0;
  if (cVar1 == '\0') {
    FUN_142fd67f0(param_1);
  }
  else {
    uVar2 = FUN_14001cc68(0x178,0x10);
    FUN_14010fd14(uVar2,param_1,param_4);
    *(undefined8 *)(param_1 + 0x308) = uVar2;
  }
  return param_1 + 0x2f8;
}



// FUNCTION 14010fb43 FUN_14010fb43 body=133 status=ok
// SIG undefined FUN_14010fb43(void)

undefined8 FUN_14010fb43(undefined4 param_1)

{
  int iVar1;
  longlong lVar2;
  DWORD DVar3;
  DWORD DVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  
  lVar2 = DAT_14ca45318;
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
  if (*(int *)(lVar2 + uVar6 * 4) != 0) {
    uVar5 = FUN_14479fe53(param_1,1,1);
    return uVar5;
  }
  return 0;
}



// FUNCTION 14010fbc8 FUN_14010fbc8 body=331 status=ok
// SIG undefined FUN_14010fbc8(void)

void FUN_14010fbc8(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  byte bVar3;
  longlong lVar4;
  undefined1 auStack_88 [32];
  LARGE_INTEGER local_68;
  undefined8 uStack_60;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar4 = *(longlong *)(param_1 + 0x10);
  if (lVar4 == 0) goto LAB_14010fc65;
  lVar2 = *(longlong *)(param_1 + 8);
  if (lVar2 != 0) {
    if (DAT_14c87e718 == '\0') {
      iVar1 = *(int *)(lVar2 + 0x1c);
      if (2 < iVar1) {
        bVar3 = (**(code **)(*DAT_14c82b500 + 0x10))(DAT_14c82b500,0);
        if (bVar3 < 3) {
          local_68.QuadPart = 0x20100000001;
          uStack_60 = 0x30100000101;
          local_58 = DAT_14c7585c8;
          local_54 = DAT_14c7585c8 | 0x200;
          local_50 = DAT_14c7585c8 | 0x100;
          local_4c = DAT_14c7585c8 | 0x300;
          local_48 = 0;
          uStack_44 = 0x200;
          uStack_40 = 0x100;
          uStack_3c = 0x300;
          if (*(byte *)((longlong)&local_68 + (ulonglong)(iVar1 - 3) * 4) == bVar3)
          goto LAB_14010fd07;
        }
      }
      QueryPerformanceCounter(&local_68);
      uStack_60 = 0xffffffffffffffff;
      FUN_140056092(lVar2,&local_68);
    }
    else {
LAB_14010fd07:
      FUN_140082318(lVar2);
    }
    lVar4 = *(longlong *)(param_1 + 0x10);
  }
  FUN_142fd76f2(lVar4,param_2,param_3);
  lVar4 = *(longlong *)(param_1 + 0x10);
  if (lVar4 != 0) {
    FUN_1400385cc(lVar4);
    FUN_1400020a8(lVar4);
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
LAB_14010fc65:
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14010fd14 FUN_14010fd14 body=430 status=ok
// SIG undefined FUN_14010fd14(void)

undefined4 * FUN_14010fd14(undefined4 *param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  DWORD DVar5;
  DWORD DVar6;
  ulonglong uVar7;
  
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  param_1[6] = 0;
  param_1[0x10] = 0xffffffff;
  *(undefined8 *)(param_1 + 0x12) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  param_1[0x16] = 0;
  *(longlong *)(param_1 + 0x18) = param_2;
  *(longlong *)(param_1 + 0x1a) = param_2 + 0x68;
  *(longlong *)(param_1 + 0x1c) = param_2 + 0x280;
  param_1[0x1e] = 0;
  memset(param_1 + 0x20,0,0xe0);
  param_1[0x58] = 4;
  *(undefined8 *)(param_1 + 0x59) = 0;
  *(undefined8 *)((longlong)param_1 + 0x169) = 0;
  FUN_144829edc(param_1 + 2,
                *(undefined4 *)
                 (*(longlong *)(param_2 + 0x58) + 0x413c +
                 (ulonglong)*(byte *)(*(longlong *)(param_2 + 0x58) + 0x4208) * 4));
  plVar3 = *(longlong **)(param_1 + 0x18);
  iVar1 = *(int *)(plVar3[0xb] + 0x5224 + (ulonglong)*(byte *)(plVar3[0xb] + 0x52f0) * 4);
  iVar2 = (int)plVar3[1];
  if (iVar2 < iVar1) {
    *(int *)(plVar3 + 1) = iVar1;
    if ((uint)(*(int *)((longlong)plVar3 + 0xc) - iVar2) < (uint)(iVar1 - iVar2)) {
      FUN_14010ff9e(plVar3,iVar2);
    }
    FUN_14010fec2((longlong)iVar2 * 0x28 + *plVar3,iVar1 - iVar2);
  }
  else {
    if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar1);
    }
    if (iVar1 < iVar2) {
      FUN_14010feee(plVar3,iVar1,iVar2 - iVar1);
      FUN_1456cef96(plVar3);
    }
  }
  lVar4 = DAT_14ca45330;
  iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  if (((iVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar1 == 2)) {
    uVar7 = 0;
  }
  else if (iVar1 == 1) {
    DVar5 = FUN_140ad26c0();
    DVar6 = GetCurrentThreadId();
    uVar7 = (ulonglong)(DVar5 != DVar6);
  }
  else {
    uVar7 = 1;
  }
  *(bool *)(param_1 + 0x5c) = *(int *)(lVar4 + uVar7 * 4) != 0;
  if (*(int *)(DAT_14ca453a8 + 4) != 0) {
    param_1[0x58] = 3;
  }
  return param_1;
}



// FUNCTION 14010fec2 FUN_14010fec2 body=43 status=ok
// SIG undefined FUN_14010fec2(void)

void FUN_14010fec2(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0xffffffff;
    *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) & 0xf8;
    *(byte *)((longlong)param_1 + 0xc) = *(byte *)((longlong)param_1 + 0xc) & 0xfe;
    *(uint *)(param_1 + 2) = *(uint *)(param_1 + 2) | 0xfffffff;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1 = param_1 + 5;
  }
  return;
}



// FUNCTION 14010feee FUN_14010feee body=100 status=ok
// SIG undefined FUN_14010feee(void)

void FUN_14010feee(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x28 + *param_1);
  FUN_14010ff52(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + (longlong)param_3 * 0x28),(longlong)iVar2 * 0x28);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 14010ff52 FUN_14010ff52 body=75 status=ok
// SIG undefined FUN_14010ff52(void)

void FUN_14010ff52(longlong param_1,int param_2)

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



// FUNCTION 14010ff9e FUN_14010ff9e body=373 status=ok
// SIG undefined FUN_14010ff9e(void)

void FUN_14010ff9e(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140110029;
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
LAB_140110029:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x28)) {
    uVar7 = uVar5 / 0x28 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x28,8);
  return;
}



// FUNCTION 140110114 FUN_140110114 body=283 status=ok
// SIG undefined FUN_140110114(void)

void FUN_140110114(longlong param_1,undefined4 param_2)

{
  char cVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((((*(longlong *)(param_1 + 0x50) != 0) && (*(longlong *)(param_1 + 0x58) != 0)) &&
      (0 < *(int *)(*(longlong *)(param_1 + 0x58) + 8))) && (*(longlong *)(param_1 + 0x80) != 0)) {
    cVar1 = (**(code **)(*(longlong *)(param_1 + 0x10) + 0x60))(param_1 + 0x10);
    if (DAT_14ca83900 != (longlong *)0x0 && cVar1 == '\0') {
      cVar1 = (**(code **)(*DAT_14ca83900 + 0x390))();
      if (cVar1 == '\0') {
        EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1e0));
        if ((*(longlong *)(param_1 + 0xa0) != 0) &&
           (*(int *)(*(longlong *)(param_1 + 0xa0) + 8) != 0)) {
          DAT_14c7590b0 = DAT_14c7590b0 + 1;
          (**(code **)(*(longlong *)(param_1 + 0x10) + 0x128))(param_1 + 0x10,param_2);
          LOCK();
          *(undefined4 *)(*(longlong *)(param_1 + 0xa0) + 8) = 0;
          UNLOCK();
          (**(code **)(*DAT_14ca83900 + 0x38))(DAT_14ca83900,&DAT_14ca85100);
          local_40 = 0;
          local_38 = 0;
          FUN_14007658c(&DAT_14ca850c8,&local_40,7);
        }
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140110252 FUN_140110252 body=21 status=ok
// SIG undefined FUN_140110252(void)

undefined8 FUN_140110252(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 140110268 FUN_140110268 body=95 status=ok
// SIG undefined FUN_140110268(void)

void FUN_140110268(longlong param_1)

{
  longlong lVar1;
  
  if (0 < (longlong)*(int *)(param_1 + 0x10)) {
    lVar1 = 0;
    do {
      lVar1 = lVar1 + 1;
    } while (*(int *)(param_1 + 0x10) != lVar1);
  }
  return;
}



// FUNCTION 1401102d4 FUN_1401102d4 body=105 status=ok
// SIG undefined FUN_1401102d4(void)

void FUN_1401102d4(longlong param_1,longlong param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  if (DAT_14c7619c0 != 0) {
    uVar1 = *(uint *)(param_2 + 0xac);
    uVar3 = 0x1e;
    if (param_3 < 0x1e) {
      uVar3 = (ulonglong)param_3;
    }
    iVar2 = *(int *)(param_1 + 0x708);
    *(uint *)(param_1 + 0x708) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x70c) < iVar2 + 1U) {
      FUN_1456cefd4((longlong *)(param_1 + 0x700),iVar2);
    }
    *(ulonglong *)(*(longlong *)(param_1 + 0x700) + (longlong)iVar2 * 8) =
         uVar3 << 0x20 | (ulonglong)uVar1;
  }
  return;
}



// FUNCTION 14011033e FUN_14011033e body=26 status=ok
// SIG undefined FUN_14011033e(void)

void FUN_14011033e(longlong param_1,int param_2)

{
  if (*(int *)(param_1 + 0xc) != param_2) {
    *(int *)(param_1 + 0xc) = param_2;
    FUN_1401bb238(param_1,*(undefined4 *)(param_1 + 8),param_2,8);
    return;
  }
  return;
}



// FUNCTION 140110358 FUN_140110358 body=469 status=ok
// SIG undefined FUN_140110358(void)

void FUN_140110358(undefined8 *param_1,undefined8 param_2,uint param_3,longlong param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  void *_Src;
  ulonglong uVar3;
  uint *puVar4;
  longlong lVar5;
  uint *puVar6;
  uint uVar7;
  void *_Dst;
  int *piVar8;
  ulonglong _Size;
  
  if (((int)param_3 < 0) || (param_4 - 0x80000000U < 0xffffffff80000001)) {
                    /* WARNING: Subroutine does not return */
    FUN_1456bc5fe(param_3,param_4);
  }
  _Size = (ulonglong)param_3 * param_4;
  _Src = (void *)*param_1;
  if (_Size == 0) {
    _Dst = (void *)0x0;
    if (_Src != (void *)0x0) {
LAB_140110488:
      piVar8 = (int *)((longlong)_Src + (-8 - (ulonglong)*(uint *)((longlong)_Src + -8)));
      LOCK();
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (*piVar8 == 0) {
        if (*(longlong *)(piVar8 + 0x10) - (longlong)piVar8 == 0x10000) {
          lVar5 = DAT_14c872d30;
          if (DAT_14c872d30 == 0) {
            lVar5 = FUN_145bdc178();
          }
          FUN_140028df4(lVar5,piVar8);
        }
        else {
          FUN_144705e74(piVar8);
        }
      }
    }
LAB_1401104c5:
    *param_1 = _Dst;
    return;
  }
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar4 = (uint *)*puVar1;
  if (puVar4 != (uint *)0x0) goto LAB_1401103c2;
LAB_1401103b7:
  FUN_14472e504(puVar1);
  puVar4 = (uint *)*puVar1;
LAB_1401103c2:
  _Dst = (void *)(*(longlong *)(puVar4 + 0x10) + 7U & 0xfffffffffffffff8);
  puVar6 = (uint *)((longlong)_Dst + _Size);
  if (puVar4 + 0x4000 < puVar6) {
    if (_Size < 0xffa1) goto code_r0x0001401103ef;
    puVar4 = (uint *)FUN_14472e5b2(_Size + 0x60,8);
    *puVar4 = 0xffffffff;
    puVar4[0x12] = 0;
    _Dst = (void *)((longlong)puVar4 + 0x5fU & 0xfffffffffffffff8);
    *(ulonglong *)(puVar4 + 0x10) = (longlong)puVar4 + _Size + 0x60;
    *puVar4 = 1;
  }
  else {
    uVar7 = puVar4[0x12] + 1;
LAB_140110445:
    *(uint **)(puVar4 + 0x10) = puVar6 + 2;
    puVar4[0x12] = uVar7;
  }
  *(int *)((longlong)_Dst + -8) = ((int)_Dst + -8) - (int)puVar4;
  *(int *)((longlong)_Dst + -4) = (int)_Size;
  if (_Src == (void *)0x0) goto LAB_1401104c5;
  uVar3 = (ulonglong)*(uint *)((longlong)_Src + -4);
  if (uVar3 != 0) {
    if (uVar3 < _Size) {
      _Size = uVar3;
    }
    memcpy(_Dst,_Src,_Size);
  }
  goto LAB_140110488;
code_r0x0001401103ef:
  uVar7 = puVar4[0x12];
  while( true ) {
    *(uint **)(puVar4 + 0x10) = puVar4 + 0x4000;
    LOCK();
    uVar2 = *puVar4;
    *puVar4 = *puVar4 + uVar7 + 1;
    UNLOCK();
    if ((uVar2 ^ uVar7) != 0xffffffff) break;
    puVar4 = (uint *)*puVar1;
    *puVar4 = 0xffffffff;
    *(uint **)(puVar4 + 0x10) = puVar4 + 0x16;
    puVar4[0x12] = 0;
    *puVar1 = puVar4;
    _Dst = (void *)((longlong)puVar4 + 0x5fU & 0xfffffffffffffff8);
    puVar6 = (uint *)((longlong)_Dst + _Size);
    uVar7 = 0;
    if (puVar6 <= puVar4 + 0x4000) {
      uVar7 = 1;
      goto LAB_140110445;
    }
  }
  goto LAB_1401103b7;
}



// FUNCTION 14011052e FUN_14011052e body=26 status=ok
// SIG undefined FUN_14011052e(void)

void FUN_14011052e(longlong param_1,int param_2)

{
  if (*(int *)(param_1 + 0xc) != param_2) {
    *(int *)(param_1 + 0xc) = param_2;
    FUN_14007d692(param_1,*(undefined4 *)(param_1 + 8),param_2,1);
    return;
  }
  return;
}



// FUNCTION 140110548 FUN_140110548 body=14 status=ok
// SIG undefined FUN_140110548(void)

void FUN_140110548(longlong param_1,int param_2)

{
  if (*(int *)(param_1 + 0xc) != param_2) {
    *(int *)(param_1 + 0xc) = param_2;
    FUN_14011072c();
    return;
  }
  return;
}



// FUNCTION 140110556 FUN_140110556 body=469 status=ok
// SIG undefined FUN_140110556(void)

void FUN_140110556(undefined8 *param_1,undefined8 param_2,uint param_3,longlong param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  void *_Src;
  ulonglong uVar3;
  uint *puVar4;
  longlong lVar5;
  uint *puVar6;
  uint uVar7;
  void *_Dst;
  int *piVar8;
  ulonglong _Size;
  
  if (((int)param_3 < 0) || (param_4 - 0x80000000U < 0xffffffff80000001)) {
                    /* WARNING: Subroutine does not return */
    FUN_1456bc5fe(param_3,param_4);
  }
  _Size = (ulonglong)param_3 * param_4;
  _Src = (void *)*param_1;
  if (_Size == 0) {
    _Dst = (void *)0x0;
    if (_Src != (void *)0x0) {
LAB_140110686:
      piVar8 = (int *)((longlong)_Src + (-8 - (ulonglong)*(uint *)((longlong)_Src + -8)));
      LOCK();
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (*piVar8 == 0) {
        if (*(longlong *)(piVar8 + 0x10) - (longlong)piVar8 == 0x10000) {
          lVar5 = DAT_14c872d30;
          if (DAT_14c872d30 == 0) {
            lVar5 = FUN_145bdc178();
          }
          FUN_140028df4(lVar5,piVar8);
        }
        else {
          FUN_144705e74(piVar8);
        }
      }
    }
LAB_1401106c3:
    *param_1 = _Dst;
    return;
  }
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar4 = (uint *)*puVar1;
  if (puVar4 != (uint *)0x0) goto LAB_1401105c0;
LAB_1401105b5:
  FUN_14472e504(puVar1);
  puVar4 = (uint *)*puVar1;
LAB_1401105c0:
  _Dst = (void *)(*(longlong *)(puVar4 + 0x10) + 7U & 0xfffffffffffffff8);
  puVar6 = (uint *)((longlong)_Dst + _Size);
  if (puVar4 + 0x4000 < puVar6) {
    if (_Size < 0xffa1) goto code_r0x0001401105ed;
    puVar4 = (uint *)FUN_14472e5b2(_Size + 0x60,8);
    *puVar4 = 0xffffffff;
    puVar4[0x12] = 0;
    _Dst = (void *)((longlong)puVar4 + 0x5fU & 0xfffffffffffffff8);
    *(ulonglong *)(puVar4 + 0x10) = (longlong)puVar4 + _Size + 0x60;
    *puVar4 = 1;
  }
  else {
    uVar7 = puVar4[0x12] + 1;
LAB_140110643:
    *(uint **)(puVar4 + 0x10) = puVar6 + 2;
    puVar4[0x12] = uVar7;
  }
  *(int *)((longlong)_Dst + -8) = ((int)_Dst + -8) - (int)puVar4;
  *(int *)((longlong)_Dst + -4) = (int)_Size;
  if (_Src == (void *)0x0) goto LAB_1401106c3;
  uVar3 = (ulonglong)*(uint *)((longlong)_Src + -4);
  if (uVar3 != 0) {
    if (uVar3 < _Size) {
      _Size = uVar3;
    }
    memcpy(_Dst,_Src,_Size);
  }
  goto LAB_140110686;
code_r0x0001401105ed:
  uVar7 = puVar4[0x12];
  while( true ) {
    *(uint **)(puVar4 + 0x10) = puVar4 + 0x4000;
    LOCK();
    uVar2 = *puVar4;
    *puVar4 = *puVar4 + uVar7 + 1;
    UNLOCK();
    if ((uVar2 ^ uVar7) != 0xffffffff) break;
    puVar4 = (uint *)*puVar1;
    *puVar4 = 0xffffffff;
    *(uint **)(puVar4 + 0x10) = puVar4 + 0x16;
    puVar4[0x12] = 0;
    *puVar1 = puVar4;
    _Dst = (void *)((longlong)puVar4 + 0x5fU & 0xfffffffffffffff8);
    puVar6 = (uint *)((longlong)_Dst + _Size);
    uVar7 = 0;
    if (puVar6 <= puVar4 + 0x4000) {
      uVar7 = 1;
      goto LAB_140110643;
    }
  }
  goto LAB_1401105b5;
}



// FUNCTION 14011072c FUN_14011072c body=450 status=ok
// SIG undefined FUN_14011072c(void)

void FUN_14011072c(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  void *_Src;
  ulonglong uVar3;
  uint *puVar4;
  longlong lVar5;
  uint *puVar6;
  uint uVar7;
  void *_Dst;
  int *piVar8;
  ulonglong _Size;
  
  uVar3 = (ulonglong)param_2;
  if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456bc5fe(uVar3,8);
  }
  _Src = (void *)*param_1;
  if (param_2 == 0) {
    _Dst = (void *)0x0;
    if (_Src != (void *)0x0) {
LAB_140110847:
      piVar8 = (int *)((longlong)_Src + (-8 - (ulonglong)*(uint *)((longlong)_Src + -8)));
      LOCK();
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (*piVar8 == 0) {
        if (*(longlong *)(piVar8 + 0x10) - (longlong)piVar8 == 0x10000) {
          lVar5 = DAT_14c872d30;
          if (DAT_14c872d30 == 0) {
            lVar5 = FUN_145bdc178();
          }
          FUN_140028df4(lVar5,piVar8);
        }
        else {
          FUN_144705e74(piVar8);
        }
      }
    }
LAB_140110884:
    *param_1 = _Dst;
    return;
  }
  _Size = uVar3 * 8;
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar4 = (uint *)*puVar1;
  if (puVar4 != (uint *)0x0) goto LAB_140110782;
LAB_140110777:
  FUN_14472e504(puVar1);
  puVar4 = (uint *)*puVar1;
LAB_140110782:
  _Dst = (void *)(*(longlong *)(puVar4 + 0x10) + 7U & 0xfffffffffffffff8);
  puVar6 = (uint *)((longlong)_Dst + _Size);
  if (puVar4 + 0x4000 < puVar6) {
    if (param_2 < 0x1ff5) goto code_r0x0001401107ae;
    puVar4 = (uint *)FUN_14472e5b2(_Size + 0x60,8);
    *puVar4 = 0xffffffff;
    puVar4[0x12] = 0;
    _Dst = (void *)((longlong)puVar4 + 0x5fU & 0xfffffffffffffff8);
    *(uint **)(puVar4 + 0x10) = puVar4 + uVar3 * 2 + 0x18;
    *puVar4 = 1;
  }
  else {
    uVar7 = puVar4[0x12] + 1;
LAB_140110804:
    *(uint **)(puVar4 + 0x10) = puVar6 + 2;
    puVar4[0x12] = uVar7;
  }
  *(int *)((longlong)_Dst + -8) = ((int)_Dst + -8) - (int)puVar4;
  *(int *)((longlong)_Dst + -4) = (int)_Size;
  if (_Src == (void *)0x0) goto LAB_140110884;
  uVar3 = (ulonglong)*(uint *)((longlong)_Src + -4);
  if (uVar3 != 0) {
    if (uVar3 < _Size) {
      _Size = uVar3;
    }
    memcpy(_Dst,_Src,_Size);
  }
  goto LAB_140110847;
code_r0x0001401107ae:
  uVar7 = puVar4[0x12];
  while( true ) {
    *(uint **)(puVar4 + 0x10) = puVar4 + 0x4000;
    LOCK();
    uVar2 = *puVar4;
    *puVar4 = *puVar4 + uVar7 + 1;
    UNLOCK();
    if ((uVar2 ^ uVar7) != 0xffffffff) break;
    puVar4 = (uint *)*puVar1;
    *puVar4 = 0xffffffff;
    *(uint **)(puVar4 + 0x10) = puVar4 + 0x16;
    puVar4[0x12] = 0;
    *puVar1 = puVar4;
    _Dst = (void *)((longlong)puVar4 + 0x5fU & 0xfffffffffffffff8);
    puVar6 = (uint *)((longlong)_Dst + _Size);
    uVar7 = 0;
    if (puVar6 <= puVar4 + 0x4000) {
      uVar7 = 1;
      goto LAB_140110804;
    }
  }
  goto LAB_140110777;
}



// FUNCTION 1401108ee FUN_1401108ee body=13311 status=ok
// SIG undefined FUN_1401108ee(void)

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401108ee(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  byte bVar2;
  ushort uVar3;
  undefined1 *puVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  void *pvVar13;
  char cVar14;
  longlong lVar15;
  longlong lVar16;
  undefined4 *puVar17;
  undefined1 *puVar18;
  longlong *plVar19;
  longlong *plVar20;
  wchar_t *pwVar21;
  longlong *plVar22;
  int iVar23;
  uint uVar24;
  int iVar25;
  int iVar26;
  uint *puVar27;
  int *piVar28;
  longlong *plVar29;
  undefined2 uVar30;
  uint uVar31;
  int iVar32;
  longlong lVar33;
  longlong lVar34;
  int iVar35;
  longlong lVar36;
  undefined8 *puVar37;
  longlong *plVar38;
  char cVar39;
  uint uVar40;
  void **ppvVar41;
  undefined4 *puVar42;
  ulonglong uVar43;
  uint uVar44;
  longlong lVar45;
  longlong *plVar46;
  ulonglong uVar47;
  ulonglong uVar48;
  byte bVar49;
  bool bVar50;
  bool bVar51;
  float fVar52;
  undefined1 auStack_4f8 [32];
  wchar_t *local_4d8;
  longlong local_4d0;
  longlong local_4c8;
  undefined4 *local_4c0;
  longlong *local_4b8;
  longlong *local_4b0;
  longlong *local_4a8;
  undefined8 local_4a0;
  wchar_t *local_498;
  void **local_490;
  uint local_488;
  int local_484;
  longlong *local_480;
  void **local_478;
  void **local_470;
  void **local_468;
  longlong *local_460;
  void **local_458;
  longlong local_450;
  uint *local_448;
  longlong local_440;
  ulonglong local_438;
  ulonglong local_430;
  void *local_428;
  undefined8 uStack_420;
  void *local_418;
  undefined8 uStack_410;
  undefined8 local_408;
  undefined4 local_400;
  undefined8 local_3f8;
  undefined4 local_3f0;
  undefined8 local_3e8;
  undefined4 local_3e0;
  undefined8 local_3d8;
  undefined4 uStack_3d0;
  undefined2 uStack_3cc;
  undefined2 uStack_3ca;
  undefined4 uStack_3c8;
  undefined2 uStack_3c4;
  undefined2 uStack_3c2;
  undefined8 uStack_3c0;
  undefined4 local_3b8;
  undefined8 local_3b4;
  undefined2 local_3ac;
  undefined8 local_3aa;
  undefined8 local_398;
  undefined8 uStack_390;
  undefined8 local_388;
  undefined8 uStack_380;
  undefined8 local_378;
  undefined8 uStack_370;
  undefined8 local_368;
  undefined8 uStack_360;
  longlong local_358;
  undefined8 uStack_350;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined4 *local_d8;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  uint local_bc;
  undefined4 local_b8;
  undefined8 local_b4;
  undefined2 local_ac;
  undefined4 local_aa;
  undefined1 local_a6;
  undefined2 local_a5;
  undefined1 local_a3;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_4f8;
  lVar36 = *(longlong *)(param_1 + 8);
  local_4c0 = (undefined4 *)CONCAT44(local_4c0._4_4_,*(undefined4 *)(lVar36 + 8));
  local_418 = (void *)0x0;
  uStack_410 = 0;
  local_428 = (void *)0x0;
  uStack_420 = 0;
  iVar32 = *(int *)(lVar36 + 0x3578);
  local_4d0 = param_1;
  local_4c8 = param_2;
  if (iVar32 == 0) {
    uVar43 = 0;
    uVar48 = 1;
    iVar35 = 0;
    iVar23 = 0;
  }
  else {
    puVar27 = *(uint **)(lVar36 + 0x3570);
    if (*(uint **)(lVar36 + 0x3570) == (uint *)0x0) {
      puVar27 = (uint *)(lVar36 + 0x3560);
    }
    uVar44 = *puVar27;
    if (uVar44 == 0) {
      iVar35 = iVar32 + 0x1e;
      if (-1 < iVar32 + -1) {
        iVar35 = iVar32 + -1;
      }
      uVar43 = 0;
      uVar48 = (ulonglong)(uint)(iVar35 >> 5);
      if (iVar35 >> 5 < 1) {
        uVar48 = uVar43;
      }
      iVar35 = 0;
      do {
        if (uVar48 == uVar43) goto LAB_140111abd;
        iVar35 = iVar35 + 0x20;
        uVar44 = puVar27[uVar43 + 1];
        uVar43 = uVar43 + 1;
      } while (uVar44 == 0);
    }
    else {
      uVar43 = 0;
      iVar35 = 0;
    }
    uVar48 = (ulonglong)(-uVar44 & uVar44);
    uVar47 = uVar48 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar47 != 0) {
      for (; uVar47 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    iVar23 = (iVar35 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
    if (iVar32 <= iVar23) {
      iVar23 = iVar32;
    }
  }
  if (iVar23 < iVar32) {
    local_480 = (longlong *)(param_2 + 0x90);
    local_450 = param_2 + 0x100;
    local_490 = (void **)(param_1 + 0x578);
    local_460 = (longlong *)(param_2 + 0xd0);
    local_470 = (void **)(param_2 + 0xb0);
    local_478 = (void **)(param_2 + 0xa0);
    local_468 = (void **)(param_2 + 0xf0);
    local_458 = (void **)(param_2 + 0xc0);
    local_4a8 = (longlong *)(param_2 + 0x120);
    local_4b8 = (longlong *)(param_2 + 0xe0);
    local_448 = (uint *)(lVar36 + 0x3560);
    local_440 = lVar36;
    uVar44 = 0xffffffff;
    do {
      local_488 = uVar44;
      lVar36 = *(longlong *)(*(longlong *)(local_440 + 0x3550) + 0x30 + (longlong)iVar23 * 0x40);
      lVar15 = (longlong)*(int *)(lVar36 + 0x34) * 0x68;
      plVar22 = (longlong *)(*(longlong *)(local_4d0 + 0x4d8) + lVar15);
      local_484 = iVar35;
      local_438 = uVar48;
      local_430 = uVar43;
      if (0 < *(int *)(*(longlong *)(local_4d0 + 0x4d8) + 8 + lVar15)) {
        local_4a0 = (wchar_t *)(plVar22 + 4);
        local_498 = (wchar_t *)(plVar22 + 2);
        uVar43 = 0;
        local_4b0 = plVar22;
        do {
          lVar15 = *(longlong *)(*local_4b0 + uVar43 * 8);
          lVar16 = (longlong)*(int *)(local_4d0 + 0x3f0);
          if (lVar16 < 1) {
            bVar51 = false;
          }
          else {
            lVar33 = *(longlong *)(local_4d0 + 1000);
            bVar51 = false;
            do {
              if (*(longlong *)(lVar15 + 0x38) == 0 || lVar33 == *(longlong *)(lVar15 + 0x38)) {
                lVar45 = (longlong)*(int *)(lVar36 + 0x34) * 0x78;
                lVar34 = *(longlong *)(*(longlong *)(lVar33 + 0x3780) + 0x30 + lVar45);
                bVar49 = *(byte *)(lVar34 + 4 + uVar43 * 0x18);
                if ((*(byte *)(lVar15 + 0x991) & 1) == 0) {
                  if ((bVar49 & 2) == 0) goto LAB_140110bad;
LAB_140110bb2:
                  lVar45 = *(longlong *)(lVar33 + 0x3780) + lVar45;
                  lVar34 = *(longlong *)(lVar45 + 0x20);
                  lVar45 = lVar45 + 0x10;
                  if (lVar34 != 0) {
                    lVar45 = lVar34;
                  }
                  bVar50 = (*(uint *)(lVar45 + (uVar43 >> 5 & 0x7ffffff) * 4) &
                           1 << ((byte)uVar43 & 0x1f)) != 0;
                }
                else {
                  bVar2 = *(byte *)(lVar34 + 5 + uVar43 * 0x18);
                  if (((((bVar2 & 2) != 0) || (0x3f < bVar49)) || ((bVar2 & 1) != 0)) ||
                     ((*(byte *)(lVar34 + 8 + uVar43 * 0x18) & 1) != 0)) goto LAB_140110bb2;
LAB_140110bad:
                  bVar50 = false;
                }
                bVar51 = (bool)(bVar51 | bVar50);
              }
              lVar33 = lVar33 + 0x13c10;
              lVar16 = lVar16 + -1;
            } while (lVar16 != 0);
          }
          uVar44 = *(uint *)(lVar15 + 0x990);
          if ((uVar44 >> 0x12 & 1) != 0) {
            iVar32 = *(int *)(lVar15 + 0x30);
            if (iVar32 == 3) {
              if (((((uVar44 >> 0xb & 1) == 0) && (*(int *)(lVar15 + 0xbc0) < 1)) &&
                  ((*(int *)(lVar15 + 0xbe0) < 1 &&
                   ((*(int *)(lVar15 + 0xbf0) < 1 && (*(int *)(lVar15 + 0xfec) < 1)))))) &&
                 ((*(int *)(lVar15 + 0xc30) < 1 &&
                  ((*(int *)(lVar15 + 0xc58) < 1 &&
                   ((uVar44 >> 9 & 1) == 0 && (~uVar44 & 0x30000) != 0)))))) {
                if (((char)uVar44 < '\0') && (-1 < *(int *)(lVar15 + 0x944))) {
                  if ((uVar44 & 0x10) == 0) {
                    bVar51 = false;
                  }
                }
                else {
                  bVar51 = false;
                }
              }
            }
            else if (((iVar32 == 1) ||
                     ((iVar32 == 0 &&
                      (((-1 < (char)uVar44 || ((uVar44 & 0x10) == 0)) ||
                       (*(int *)(lVar15 + 0x944) < 0)))))) &&
                    (((((*(int *)(lVar15 + 0xbc0) < 1 && (*(int *)(lVar15 + 0xbe0) < 1)) &&
                       (*(int *)(lVar15 + 0xbf0) < 1)) &&
                      ((*(int *)(lVar15 + 0xfec) < 1 && (*(int *)(lVar15 + 0xc30) < 1)))) &&
                     (((~uVar44 & 0x30000) != 0 && (*(int *)(lVar15 + 0xc58) < 1)))))) {
              uVar44 = *(uint *)(lVar15 + 0x944);
              if ((int)uVar44 < 1) {
                uVar44 = 0;
              }
              lVar16 = *(longlong *)(local_4d0 + 8);
              if (*(int *)(lVar16 + 0x4bc0) != *(int *)(lVar16 + 0x4bec)) {
                uVar24 = *(uint *)(*(longlong *)(lVar15 + 0xb60) + 0x34);
                lVar33 = lVar16 + 0x4bf0;
                if (*(longlong *)(lVar16 + 0x4bf8) != 0) {
                  lVar33 = *(longlong *)(lVar16 + 0x4bf8);
                }
                iVar32 = *(int *)(lVar33 + (ulonglong)(*(int *)(lVar16 + 0x4c00) - 1U & uVar24) * 4)
                ;
                if (iVar32 != -1) {
                  do {
                    lVar33 = *(longlong *)(lVar16 + 0x4bb8) + (longlong)iVar32 * 0x20;
                    if (*(uint *)(*(longlong *)(lVar16 + 0x4bb8) + (longlong)iVar32 * 0x20) ==
                        uVar24) goto LAB_140110df8;
                    iVar32 = *(int *)(lVar33 + 0x18);
                  } while (iVar32 != -1);
                }
              }
              lVar33 = 0;
LAB_140110df8:
              if (*(char *)(*(longlong *)(lVar33 + 8) + 0x3dc + (ulonglong)uVar44 * 0x430) == '\0')
              {
                bVar51 = false;
              }
            }
          }
          uVar3 = *(ushort *)(local_4d0 + 0x8a8);
          puVar17 = DAT_14ca96af8;
          if (DAT_14ca96af8 == (undefined4 *)0x0) {
            puVar17 = &DAT_14ca96aa8;
          }
          if (((((uint)puVar17[uVar3 >> 5] >> (uVar3 & 0x1f) & 1) != 0) &&
              (2 < (int)(&DAT_14ca814b8)[(ulonglong)uVar3 * 0xf])) ||
             (((&DAT_14ca814b8)[(ulonglong)uVar3 * 0xf] == 1 &&
              (cVar14 = FUN_14743086d(), cVar14 != '\0')))) {
            lVar16 = *(longlong *)(*(longlong *)(lVar15 + 0xb60) + 0x28);
            if ((*(byte *)(lVar16 + 0x1d0) & 8) == 0) {
              piVar28 = (int *)(*(longlong *)(lVar15 + 0xb60) + 0xe0);
            }
            else {
              piVar28 = (int *)(lVar16 + 400);
            }
            if (*piVar28 == -1) {
              bVar51 = false;
            }
          }
          if ((((bVar51) && (*(int *)(lVar15 + 0x99c) == -1)) &&
              (*(longlong *)(lVar15 + 0xb50) == 0)) &&
             (((*(uint *)(lVar15 + 0x990) & 0x220) == 0x20 &&
              (cVar14 = FUN_14006f626(*(undefined2 *)(local_4d0 + 0x8a8)), cVar14 == '\0')))) {
            bVar51 = false;
          }
          if (bVar51) {
            uVar44 = *(uint *)(lVar15 + 0x990);
            if (((int)(uint)local_4c0 < 3) && (*(int *)(lVar15 + 0x30) != 1)) {
              if ((uVar44 & 0x2280) != 0) goto LAB_140110e28;
              if ((uVar44 >> 10 & 1) != 0) {
                cVar14 = FUN_147430715(*(undefined2 *)(local_4d0 + 0x8a8));
                uVar44 = *(uint *)(lVar15 + 0x990);
                if (cVar14 != '\0') goto LAB_140110e28;
              }
            }
            else {
              if (*(int *)(lVar15 + 0x30) == 1) goto LAB_140110f94;
LAB_140110e28:
              if ((uVar44 >> 10 & 1) == 0) {
                if ((uVar44 >> 9 & 1) != 0) {
                  iVar32 = *(int *)(local_4c8 + 0x118);
                  *(uint *)(local_4c8 + 0x118) = iVar32 + 1U;
                  if (*(uint *)(local_4c8 + 0x11c) < iVar32 + 1U) {
                    FUN_1417821b2(local_450,iVar32);
                  }
                  lVar16 = *(longlong *)(local_4c8 + 0x110);
                  if (*(longlong *)(local_4c8 + 0x110) == 0) {
                    lVar16 = local_450;
                  }
                  *(longlong *)(lVar16 + (longlong)iVar32 * 8) = lVar15;
                }
                iVar32 = (int)local_4b0[3];
                *(uint *)(local_4b0 + 3) = iVar32 + 1U;
                pwVar21 = local_498;
                if (*(uint *)((longlong)local_4b0 + 0x1c) < iVar32 + 1U) {
LAB_140110ec4:
                  FUN_1447417ac(pwVar21,iVar32);
                }
              }
              else {
                iVar32 = (int)local_4b0[5];
                *(uint *)(local_4b0 + 5) = iVar32 + 1U;
                pwVar21 = local_4a0;
                if (*(uint *)((longlong)local_4b0 + 0x2c) < iVar32 + 1U) goto LAB_140110ec4;
              }
              *(longlong *)(*(longlong *)pwVar21 + (longlong)iVar32 * 8) = lVar15;
              uVar44 = *(uint *)(lVar15 + 0x990);
            }
LAB_140110f94:
            if ((uVar44 & 0x600) == 0) {
              if ((*(int *)(lVar15 + 0x99c) == -1) && (*(longlong *)(lVar15 + 0xb50) == 0)) {
                if ((~uVar44 & 0x804) == 0) {
                  iVar32 = *(int *)(local_4c8 + 200);
                  *(uint *)(local_4c8 + 200) = iVar32 + 1U;
                  ppvVar41 = local_458;
                  if (*(uint *)(local_4c8 + 0xcc) < iVar32 + 1U) goto LAB_140110fd8;
                  goto LAB_140110fef;
                }
                if ((~uVar44 & 0x90) == 0) {
                  if (*(int *)(lVar15 + 0x30) == 1) {
                    iVar32 = *(int *)(local_4c8 + 0xf8);
                    *(uint *)(local_4c8 + 0xf8) = iVar32 + 1U;
                    ppvVar41 = local_468;
                    if (*(uint *)(local_4c8 + 0xfc) < iVar32 + 1U) {
LAB_140110fd8:
                      FUN_1447417ac(ppvVar41,iVar32);
                    }
                  }
                  else {
                    iVar32 = (uint)uStack_410;
                    uVar44 = (uint)uStack_410 + 1;
                    uStack_410 = CONCAT44(uStack_410._4_4_,uVar44);
                    if (uStack_410._4_4_ < uVar44) {
                      ppvVar41 = &local_418;
                      goto LAB_140110fd8;
                    }
                    ppvVar41 = &local_418;
                  }
                  goto LAB_140110fef;
                }
                if ((uVar44 & 0x20) == 0) {
                  if ((uVar44 >> 8 & 1) == 0) {
                    if (*(int *)(lVar15 + 0x30) == 1) {
                      iVar32 = *(int *)(local_4c8 + 0xa8);
                      *(uint *)(local_4c8 + 0xa8) = iVar32 + 1U;
                      ppvVar41 = local_478;
                      if (*(uint *)(local_4c8 + 0xac) < iVar32 + 1U) goto LAB_140110fd8;
                    }
                    else {
                      if ((2 < (int)(uint)local_4c0) || ((uVar44 & 0x80) == 0)) {
                        iVar32 = *(int *)(local_4c8 + 0x98);
                        *(uint *)(local_4c8 + 0x98) = iVar32 + 1U;
                        plVar22 = local_480;
                        if (*(uint *)(local_4c8 + 0x9c) < iVar32 + 1U) goto LAB_1401111b9;
                        goto LAB_140111225;
                      }
                      iVar32 = (uint)uStack_420;
                      uVar44 = (uint)uStack_420 + 1;
                      uStack_420 = CONCAT44(uStack_420._4_4_,uVar44);
                      if (uStack_420._4_4_ < uVar44) {
                        ppvVar41 = &local_428;
                        goto LAB_140110fd8;
                      }
                      ppvVar41 = &local_428;
                    }
                  }
                  else {
                    iVar32 = *(int *)(local_4c8 + 0xb8);
                    *(uint *)(local_4c8 + 0xb8) = iVar32 + 1U;
                    ppvVar41 = local_470;
                    if (*(uint *)(local_4c8 + 0xbc) < iVar32 + 1U) goto LAB_140110fd8;
                  }
                  goto LAB_140110fef;
                }
                iVar32 = *(int *)(local_4c8 + 0xd8);
                *(uint *)(local_4c8 + 0xd8) = iVar32 + 1U;
                plVar22 = local_460;
                if (*(uint *)(local_4c8 + 0xdc) < iVar32 + 1U) {
LAB_1401111b9:
                  FUN_1447417ac(plVar22,iVar32);
                }
LAB_140111225:
                *(longlong *)(*plVar22 + (longlong)iVar32 * 8) = lVar15;
                if ((((((*(int *)(lVar15 + 0x30) == 0) && (*(int *)(lVar15 + 0xbc0) < 1)) &&
                      (*(int *)(lVar15 + 0xbe0) < 1)) &&
                     ((*(int *)(lVar15 + 0xbf0) < 1 && (*(int *)(lVar15 + 0xfec) < 1)))) &&
                    (*(int *)(lVar15 + 0xc30) < 1)) &&
                   ((*(int *)(lVar15 + 0xc58) < 1 && ((~*(uint *)(lVar15 + 0x990) & 0x30000) != 0)))
                   ) goto LAB_140111036;
              }
              else {
                iVar32 = *(int *)(local_4d0 + 0x580);
                *(uint *)(local_4d0 + 0x580) = iVar32 + 1U;
                ppvVar41 = local_490;
                if (*(uint *)(local_4d0 + 0x584) < iVar32 + 1U) goto LAB_140110fd8;
LAB_140110fef:
                *(longlong *)((longlong)*ppvVar41 + (longlong)iVar32 * 8) = lVar15;
              }
              iVar32 = *(int *)(local_4c8 + 0x128);
              *(uint *)(local_4c8 + 0x128) = iVar32 + 1U;
              if (*(uint *)(local_4c8 + 300) < iVar32 + 1U) {
                FUN_1447417ac(local_4a8,iVar32);
              }
              *(longlong *)(*local_4a8 + (longlong)iVar32 * 8) = lVar15;
            }
          }
LAB_140111036:
          uVar43 = uVar43 + 1;
          plVar22 = local_4b0;
        } while ((longlong)uVar43 < (longlong)(int)local_4b0[1]);
      }
      iVar32 = (int)plVar22[3];
      if (1 < (longlong)iVar32) {
        puVar4 = (undefined1 *)plVar22[2];
        memset(&uStack_3c8,0,0x2f0);
        puVar18 = puVar4 + (longlong)iVar32 * 8 + -8;
        uStack_3d0 = SUB84(puVar18,0);
        uStack_3cc = (undefined2)((ulonglong)puVar18 >> 0x20);
        uStack_3ca = (undefined2)((ulonglong)puVar18 >> 0x30);
        local_3d8 = puVar4;
        fVar52 = logf((float)iVar32);
        uStack_3c8 = (int)(longlong)(fVar52 + fVar52);
        puVar37 = &local_3d8;
        do {
          plVar20 = (longlong *)*puVar37;
          plVar22 = (longlong *)puVar37[1];
          iVar32 = *(int *)(puVar37 + 2);
          iVar35 = (int)((ulonglong)((longlong)plVar22 - (longlong)plVar20) >> 3);
          if (iVar32 != 0) {
LAB_1401115e7:
            if (8 < (int)(iVar35 + 1U)) {
              uVar44 = iVar35 + 1U >> 1;
              lVar36 = plVar20[uVar44];
              plVar20[uVar44] = *plVar20;
              *plVar20 = lVar36;
              plVar38 = plVar22 + 1;
              plVar29 = plVar20;
              do {
                plVar29 = plVar29 + 1;
                if (plVar29 <= plVar22) {
                  lVar36 = *plVar20;
                  uVar44 = *(uint *)(lVar36 + 0x990);
                  uVar24 = uVar44 >> 9 & 1;
                  do {
                    if ((char)(byte)uVar44 < '\0') {
                      bVar49 = -1 < *(int *)(lVar36 + 0x944) & (byte)uVar44 >> 4;
                    }
                    else {
                      bVar49 = 0;
                    }
                    lVar15 = *plVar29;
                    uVar40 = *(uint *)(lVar15 + 0x990);
                    if (((char)uVar40 < '\0') && (-1 < *(int *)(lVar15 + 0x944))) {
                      cVar14 = (char)((uVar40 & 0x10) >> 4);
                    }
                    else {
                      cVar14 = '\0';
                    }
                    if (bVar49 == 0) {
                      if ((cVar14 == '\0') &&
                         ((uint)(*(int *)(lVar15 + 0x95c) * *(int *)(lVar15 + 0x958)) <
                          (uint)(*(int *)(lVar36 + 0x95c) * *(int *)(lVar36 + 0x958)))) break;
                    }
                    else {
                      if (cVar14 == '\0') break;
                      uVar31 = uVar40 >> 9 & 1;
                      if (uVar24 != uVar31) {
                        if ((uVar24 == 0) && (uVar31 != 0)) break;
                        if (((uVar44 >> 9 & 1) != 0) && ((uVar40 & 0x200) == 0)) goto LAB_1401117f5;
                      }
                      if (*(int *)(lVar15 + 0x944) < *(int *)(lVar36 + 0x944)) break;
                    }
LAB_1401117f5:
                    plVar29 = plVar29 + 1;
                  } while (plVar29 <= plVar22);
                }
                plVar46 = plVar38 + -1;
                plVar19 = plVar38;
                if (plVar20 < plVar46) {
                  local_4b0 = (longlong *)*plVar20;
                  uVar44 = *(uint *)(local_4b0 + 0x132);
                  local_4a0 = (wchar_t *)
                              (CONCAT44(local_4a0._4_4_,uVar44 >> 9) & 0xffffffff00000001);
                  do {
                    lVar36 = plVar38[-1];
                    uVar24 = *(uint *)(lVar36 + 0x990);
                    if (((char)uVar24 < '\0') && (-1 < *(int *)(lVar36 + 0x944))) {
                      cVar14 = (char)((uVar24 & 0x10) >> 4);
                    }
                    else {
                      cVar14 = '\0';
                    }
                    plVar19 = plVar38;
                    if ((char)uVar44 < '\0') {
                      bVar49 = -1 < *(int *)((longlong)local_4b0 + 0x944) &
                               (byte)((uVar44 & 0x10) >> 4);
                      if (cVar14 == '\0') {
                        if (bVar49 == 0) goto LAB_1401116bc;
                      }
                      else {
                        if (bVar49 == 0) break;
                        uVar40 = uVar24 >> 9 & 1;
                        if (uVar40 != (uint)local_4a0) {
                          if (((uint)local_4a0 != 0) && (uVar40 == 0)) break;
                          if (((uVar44 >> 9 & 1) == 0) && ((uVar24 & 0x200) != 0))
                          goto LAB_1401116fd;
                        }
                        if (*(int *)((longlong)local_4b0 + 0x944) < *(int *)(lVar36 + 0x944)) break;
                      }
                    }
                    else {
                      if (cVar14 != '\0') {
                        plVar19 = plVar46 + 1;
                        break;
                      }
LAB_1401116bc:
                      if ((uint)(*(int *)((longlong)local_4b0 + 0x95c) * (int)local_4b0[299]) <
                          (uint)(*(int *)(lVar36 + 0x95c) * *(int *)(lVar36 + 0x958))) break;
                    }
LAB_1401116fd:
                    plVar1 = plVar46 + -1;
                    plVar38 = plVar46;
                    plVar19 = plVar46;
                    plVar46 = plVar1;
                  } while (plVar20 < plVar1);
                }
                plVar38 = plVar46;
                if (plVar38 < plVar29) goto LAB_14011182d;
                lVar36 = *plVar29;
                *plVar29 = *plVar38;
                *plVar38 = lVar36;
              } while( true );
            }
            goto joined_r0x0001401118c1;
          }
LAB_1401118b4:
          FUN_147314231(plVar20);
LAB_1401119cd:
          puVar37 = puVar37 + -3;
        } while (&local_3d8 <= puVar37);
      }
      pvVar13 = local_418;
      if ((int)(uint)local_4c0 < 3) {
        lVar36 = (longlong)(int)(uint)uStack_410;
        if (lVar36 != 0) {
          iVar32 = *(int *)(local_4c8 + 0xe8);
          *(uint *)(local_4c8 + 0xe8) = iVar32 + (uint)uStack_410;
          if ((uint)(*(int *)(local_4c8 + 0xec) - iVar32) < (uint)uStack_410) {
            FUN_1447417ac(local_4b8,iVar32);
          }
          memcpy((void *)((longlong)iVar32 * 8 + *local_4b8),local_418,lVar36 << 3);
        }
      }
      else {
        lVar36 = (longlong)(int)(uint)uStack_410;
        if (lVar36 != 0) {
          lVar16 = 0;
          plVar22 = local_4b8;
          lVar15 = local_4c8;
          do {
            lVar33 = *(longlong *)((longlong)pvVar13 + lVar16);
            if ((((0 < *(int *)(lVar33 + 0xbc0)) || (0 < *(int *)(lVar33 + 0xbe0))) ||
                (0 < *(int *)(lVar33 + 0xbf0))) ||
               (((0 < *(int *)(lVar33 + 0xfec) || (0 < *(int *)(lVar33 + 0xc30))) ||
                ((0 < *(int *)(lVar33 + 0xc58) || ((~*(uint *)(lVar33 + 0x990) & 0x30000) == 0))))))
            {
              iVar32 = *(int *)(lVar15 + 0xe8);
              *(uint *)(lVar15 + 0xe8) = iVar32 + 1U;
              if (*(uint *)(lVar15 + 0xec) < iVar32 + 1U) {
                FUN_1447417ac(plVar22,iVar32);
                plVar22 = local_4b8;
                lVar15 = local_4c8;
              }
              *(longlong *)(*plVar22 + (longlong)iVar32 * 8) = lVar33;
            }
            lVar16 = lVar16 + 8;
          } while (lVar36 * 8 != lVar16);
        }
      }
      bVar51 = (longlong)uStack_410 < 0;
      uStack_410 = uStack_410 & 0xffffffff00000000;
      if (bVar51) {
        FUN_141782094(&local_418,0);
      }
      uVar44 = local_488 & ~(uint)local_438;
      puVar27 = *(uint **)(local_440 + 0x3570);
      if (*(uint **)(local_440 + 0x3570) == (uint *)0x0) {
        puVar27 = local_448;
      }
      iVar32 = *(int *)(local_440 + 0x3578);
      iVar23 = (int)local_430;
      lVar36 = (longlong)iVar23;
      uVar24 = puVar27[lVar36] & uVar44;
      uVar43 = local_430;
      iVar35 = local_484;
      if (uVar24 == 0) {
        iVar25 = iVar32 + 0x1e;
        if (-1 < iVar32 + -1) {
          iVar25 = iVar32 + -1;
        }
        iVar25 = iVar25 >> 5;
        iVar26 = iVar25;
        if (iVar25 < iVar23) {
          iVar26 = iVar23;
        }
        if (iVar25 <= iVar23) break;
        lVar15 = 0;
        while( true ) {
          iVar35 = iVar35 + 0x20;
          uVar24 = puVar27[lVar36 + lVar15 + 1];
          if (uVar24 != 0) break;
          lVar15 = lVar15 + 1;
          if (iVar26 - lVar36 == lVar15) goto LAB_1401119e7;
        }
        uVar43 = (ulonglong)(iVar23 + (int)lVar15 + 1);
        uVar44 = 0xffffffff;
      }
      uVar48 = (ulonglong)(-uVar24 & uVar24);
      uVar47 = uVar48 * 2 + 1;
      lVar36 = 0x3f;
      if (uVar47 != 0) {
        for (; uVar47 >> lVar36 == 0; lVar36 = lVar36 + -1) {
        }
      }
      iVar23 = (iVar35 - ((uint)lVar36 ^ 0x3f)) + 0x3e;
    } while (iVar23 < iVar32);
LAB_1401119e7:
    if (0 < (int)(uint)uStack_420) {
      FUN_1430816d1(local_428);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14ca5b5e0) && (FUN_144b3d300(&DAT_14ca5b5e0), DAT_14ca5b5e0 == -1))
      {
        if (DAT_14c8407a8 == (longlong *)0x0) {
          FUN_1414b00ea();
        }
        plVar22 = (longlong *)
                  (**(code **)(*DAT_14c8407a8 + 200))
                            (DAT_14c8407a8,L"r.Mobile.MaxVisibleMovableSpotLightShadows");
        if (plVar22 == (longlong *)0x0) {
          DAT_14ca5b5d8 = 0;
        }
        else {
          DAT_14ca5b5d8 = (**(code **)(*plVar22 + 0x68))(plVar22);
        }
        _Init_thread_footer(&DAT_14ca5b5e0);
      }
      if (DAT_14ca5b5d8 != 0) {
        iVar32 = *(int *)(DAT_14ca5b5d8 + 4);
        if ((int)(uint)uStack_420 < *(int *)(DAT_14ca5b5d8 + 4)) {
          iVar32 = (uint)uStack_420;
        }
        FUN_14730f980(&local_428,iVar32);
      }
      lVar36 = (longlong)(int)(uint)uStack_420;
      if (lVar36 != 0) {
        iVar32 = *(int *)(local_4c8 + 0xe8);
        *(uint *)(local_4c8 + 0xe8) = iVar32 + (uint)uStack_420;
        if ((uint)(*(int *)(local_4c8 + 0xec) - iVar32) < (uint)uStack_420) {
          FUN_1447417ac(local_4b8,iVar32);
        }
        memcpy((void *)((longlong)iVar32 * 8 + *local_4b8),local_428,lVar36 << 3);
      }
      bVar51 = (longlong)uStack_420 < 0;
      uStack_420 = uStack_420 & 0xffffffff00000000;
      if (bVar51) {
        FUN_141782094(&local_428,0);
      }
    }
  }
LAB_140111abd:
  lVar15 = local_4c8;
  FUN_1430816d1(*(undefined8 *)(local_4c8 + 0xb0),*(undefined4 *)(local_4c8 + 0xb8));
  iVar32 = *(int *)(local_4d0 + 0x8a4);
  plVar22 = *(longlong **)(lVar15 + 0x1b0);
  lVar36 = local_4d0;
  if (0 < *(int *)(lVar15 + 200)) {
    plVar20 = *(longlong **)(*(longlong *)(local_4d0 + 8) + 0x4c28);
    if (plVar20 == (longlong *)0x0) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14ca5b3e8) && (FUN_144b3d300(&DAT_14ca5b3e8), DAT_14ca5b3e8 == -1))
      {
        if (DAT_14c8407a8 == (longlong *)0x0) {
          FUN_1414b00ea();
        }
        plVar20 = (longlong *)
                  (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.Shadow.MaxResolution",1);
        if (plVar20 == (longlong *)0x0) {
          DAT_14ca5b3e0 = 0;
        }
        else {
          DAT_14ca5b3e0 = (**(code **)(*plVar20 + 0x68))(plVar20);
        }
        _Init_thread_footer(&DAT_14ca5b3e8);
      }
      lVar36 = local_4d0;
      uVar44 = *(uint *)(DAT_14ca5b3e0 + 4);
      uVar24 = uVar44;
      if (iVar32 < 3) {
        uVar40 = DAT_14ca84e38;
        if ((int)DAT_14ca84e38 < (int)DAT_14ca84e3c) {
          uVar40 = DAT_14ca84e3c;
        }
        uVar24 = (int)uVar40 / 2;
        if ((int)(uVar44 * 2) <= (int)uVar40) {
          uVar24 = uVar44;
        }
      }
      uVar44 = DAT_14ca84e3c;
      if ((int)uVar24 < (int)DAT_14ca84e3c) {
        uVar44 = uVar24;
      }
      if ((int)uVar44 < 2) {
        uVar44 = 1;
      }
      if ((int)DAT_14ca84e38 <= (int)uVar24) {
        uVar24 = DAT_14ca84e38;
      }
      if ((int)uVar24 < 2) {
        uVar24 = 1;
      }
      uVar24 = (int)((float)(int)uVar24 * *(float *)(DAT_14ca5b1c8 + 4)) * 2;
      if ((int)DAT_14ca84e38 <= (int)uVar24) {
        uVar24 = DAT_14ca84e38;
      }
      local_3b4 = (ulonglong)uVar24;
      if ((int)uVar24 < 2) {
        local_3b4 = 1;
      }
      uVar44 = (int)((float)(int)uVar44 * *(float *)(DAT_14ca5b1c8 + 4)) * 2;
      if ((int)DAT_14ca84e3c <= (int)uVar44) {
        uVar44 = DAT_14ca84e3c;
      }
      if ((int)uVar44 < 2) {
        uVar44 = 1;
      }
      local_3b4 = local_3b4 | (ulonglong)uVar44 << 0x20;
      local_3b8 = 0;
      local_3ac = 1;
      uStack_3d0 = DAT_14ca85088;
      uStack_3cc = (undefined2)DAT_14ca8508c;
      uStack_3ca = (undefined2)((uint)DAT_14ca8508c >> 0x10);
      uStack_3c8 = DAT_14ca85090;
      uStack_3c4 = (undefined2)DAT_14ca85094;
      uStack_3c2 = (undefined2)((uint)DAT_14ca85094 >> 0x10);
      uStack_3c0 = CONCAT44(~(-1 << ((byte)DAT_14c760da4 & 0x1f)),DAT_14ca85098);
      local_3d8 = (undefined1 *)0xc;
      local_3aa = 0xff000c0001010001;
      local_4d8 = L"PreShadowCacheDepthZ";
      FUN_14490a8c0(&DAT_14ca9a3e8,plVar22,&local_3d8,*(longlong *)(local_4d0 + 8) + 0x4c28);
      plVar20 = *(longlong **)(*(longlong *)(lVar36 + 8) + 0x4c28);
    }
    plVar38 = *(longlong **)(lVar36 + 0x550);
    if (plVar38 != plVar20) {
      *(longlong **)(lVar36 + 0x550) = plVar20;
      if (plVar20 != (longlong *)0x0) {
        (**(code **)(*plVar20 + 0x30))();
        lVar36 = local_4d0;
      }
      if (plVar38 != (longlong *)0x0) {
        (**(code **)(*plVar38 + 0x38))(plVar38);
        lVar36 = local_4d0;
      }
    }
    lVar15 = local_4c8;
    if (0 < *(int *)(local_4c8 + 200)) {
      plVar20 = (longlong *)(lVar36 + 0x558);
      lVar16 = 0;
      do {
        lVar33 = *(longlong *)(*(longlong *)(lVar15 + 0xc0) + lVar16 * 8);
        *(undefined8 *)(lVar33 + 0x28) = *(undefined8 *)(*(longlong *)(lVar36 + 8) + 0x4c28);
        iVar35 = *(int *)(lVar36 + 0x560);
        *(uint *)(lVar36 + 0x560) = iVar35 + 1U;
        if (*(uint *)(lVar36 + 0x564) < iVar35 + 1U) {
          FUN_1447417ac(plVar20,iVar35);
          lVar15 = local_4c8;
          lVar36 = local_4d0;
        }
        *(longlong *)(*plVar20 + (longlong)iVar35 * 8) = lVar33;
        lVar16 = lVar16 + 1;
      } while (lVar16 < *(int *)(lVar15 + 200));
    }
  }
  lVar16 = *(longlong *)(lVar15 + 0xd0);
  uVar44 = *(uint *)(lVar15 + 0xd8);
  local_4b0 = plVar22;
  if (*(int *)(lVar36 + 0x8a4) < 3) {
    bVar49 = FUN_14006f626(*(undefined2 *)(lVar36 + 0x8a8));
    lVar15 = local_4c8;
    lVar36 = local_4d0;
    if ((bVar49 & 0 < (int)uVar44) != 0) goto LAB_14011290d;
  }
  else if (0 < (int)uVar44) {
LAB_14011290d:
    local_4c0 = (undefined4 *)(lVar36 + 0x510);
    uVar43 = 0;
    do {
      lVar36 = *(longlong *)(lVar16 + uVar43 * 8);
      if ((((*(int *)(lVar36 + 0x30) == 0) && (*(int *)(lVar36 + 0xbc0) < 1)) &&
          (*(int *)(lVar36 + 0xbe0) < 1)) &&
         (((*(int *)(lVar36 + 0xbf0) < 1 && (*(int *)(lVar36 + 0xfec) < 1)) &&
          ((*(int *)(lVar36 + 0xc30) < 1 &&
           ((*(int *)(lVar36 + 0xc58) < 1 && ((~*(uint *)(lVar36 + 0x990) & 0x30000) != 0)))))))) {
        lVar15 = *(longlong *)(local_4d0 + 8);
        if (*(int *)(lVar15 + 0x4bc0) != *(int *)(lVar15 + 0x4bec)) {
          uVar24 = *(uint *)(*(longlong *)(lVar36 + 0xb60) + 0x34);
          lVar33 = lVar15 + 0x4bf0;
          if (*(longlong *)(lVar15 + 0x4bf8) != 0) {
            lVar33 = *(longlong *)(lVar15 + 0x4bf8);
          }
          iVar35 = *(int *)(lVar33 + (ulonglong)(*(int *)(lVar15 + 0x4c00) - 1U & uVar24) * 4);
          if (iVar35 != -1) {
            do {
              lVar33 = *(longlong *)(lVar15 + 0x4bb8) + (longlong)iVar35 * 0x20;
              if (*(uint *)(*(longlong *)(lVar15 + 0x4bb8) + (longlong)iVar35 * 0x20) == uVar24)
              goto LAB_140112b57;
              iVar35 = *(int *)(lVar33 + 0x18);
            } while (iVar35 != -1);
          }
        }
        lVar33 = 0;
LAB_140112b57:
        lVar15 = *(longlong *)(lVar33 + 8);
        *(undefined8 *)(lVar36 + 0x950) = 0;
        *(uint *)(lVar36 + 0x990) = *(uint *)(lVar36 + 0x990) | 1;
        FUN_14307a70a(lVar36 + 0x18,lVar15 + 0x3a0);
      }
      else {
        FUN_14031d6b0(local_4c0);
        lVar33 = (longlong)(*(int *)(local_4d0 + 0x518) + -1);
        lVar15 = *(longlong *)(local_4d0 + 0x510) + lVar33 * 0x48;
        local_3b4 = CONCAT44(*(undefined4 *)(lVar36 + 0x958),*(undefined4 *)(lVar36 + 0x958));
        local_3d8 = (undefined1 *)(DAT_14ca4af98 | 0x400000c);
        local_3b8 = 0;
        local_3ac = 1;
        uStack_3d0 = DAT_14ca850b0;
        uStack_3cc = (undefined2)_DAT_14ca850b4;
        uStack_3ca = (undefined2)((uint)_DAT_14ca850b4 >> 0x10);
        uStack_3c8 = _DAT_14ca850b8;
        uStack_3c4 = (undefined2)uRam000000014ca850bc;
        uStack_3c2 = (undefined2)((uint)uRam000000014ca850bc >> 0x10);
        uStack_3c0 = CONCAT44(~(-1 << ((byte)DAT_14c760da4 & 0x1f)),DAT_14ca850c0);
        local_3aa = 0xff000c0301010001;
        local_4d8 = L"CubeShadowDepthZ";
        FUN_14490a8c0(&DAT_14ca9a3e8,local_4b0,&local_3d8,
                      *(longlong *)(local_4d0 + 0x510) + lVar33 * 0x48 + 0x30);
        if (*(int *)(lVar36 + 0x30) == 1) {
          lVar33 = *(longlong *)(local_4d0 + 8);
          if (*(int *)(lVar33 + 0x4bc0) != *(int *)(lVar33 + 0x4bec)) {
            uVar24 = *(uint *)(*(longlong *)(lVar36 + 0xb60) + 0x34);
            lVar34 = lVar33 + 0x4bf0;
            if (*(longlong *)(lVar33 + 0x4bf8) != 0) {
              lVar34 = *(longlong *)(lVar33 + 0x4bf8);
            }
            iVar35 = *(int *)(lVar34 + (ulonglong)(*(int *)(lVar33 + 0x4c00) - 1U & uVar24) * 4);
            if (iVar35 != -1) {
              do {
                lVar34 = *(longlong *)(lVar33 + 0x4bb8) + (longlong)iVar35 * 0x20;
                if (*(uint *)(*(longlong *)(lVar33 + 0x4bb8) + (longlong)iVar35 * 0x20) == uVar24)
                goto LAB_140112bf6;
                iVar35 = *(int *)(lVar34 + 0x18);
              } while (iVar35 != -1);
            }
          }
          lVar34 = 0;
LAB_140112bf6:
          FUN_14730f8f2(*(longlong *)(lVar34 + 8) + 0x3a0,lVar15);
        }
        *(undefined8 *)(lVar36 + 0x950) = 0;
        *(byte *)(lVar36 + 0x990) = *(byte *)(lVar36 + 0x990) | 1;
        FUN_14307a70a(lVar36 + 0x18,lVar15);
        iVar35 = *(int *)(lVar15 + 0x40);
        *(uint *)(lVar15 + 0x40) = iVar35 + 1U;
        if (*(uint *)(lVar15 + 0x44) < iVar35 + 1U) {
          FUN_1447417ac((longlong *)(lVar15 + 0x38),iVar35);
        }
        *(longlong *)(*(longlong *)(lVar15 + 0x38) + (longlong)iVar35 * 8) = lVar36;
      }
      uVar43 = uVar43 + 1;
      lVar15 = local_4c8;
      plVar22 = local_4b0;
      lVar36 = local_4d0;
    } while (uVar43 != uVar44);
  }
  local_3e8 = *(undefined8 *)(lVar15 + 0xa0);
  local_3e0 = *(undefined4 *)(lVar15 + 0xa8);
  FUN_14307a37e(lVar36,plVar22);
  local_3f8 = *(undefined8 *)(lVar15 + 0xf0);
  local_3f0 = *(undefined4 *)(lVar15 + 0xf8);
  FUN_14307a37e(lVar36,local_4b0);
  uVar43 = local_3b4;
  if (iVar32 < 3) {
    local_408 = *(undefined8 *)(lVar15 + 0xe0);
    local_400 = *(undefined4 *)(lVar15 + 0xe8);
    FUN_14730f5fe(local_4d0,local_4b0);
  }
  else {
    uVar44 = *(uint *)(lVar15 + 0xe8);
    if (0 < (int)uVar44) {
      bVar49 = 2 < *(int *)(local_4d0 + 0x8a4) & DAT_14ca84e18;
      iVar32 = 1 << ((char)DAT_14ca84d90 - 1U & 0x1f);
      local_4c0 = *(undefined4 **)(lVar15 + 0xe0);
      local_d8 = (undefined4 *)0x0;
      local_3d8 = &DAT_100000001;
      uStack_3d0 = 1;
      uStack_3cc = 1;
      uStack_3ca = 0;
      uStack_3c8 = 0;
      uStack_3c4 = 0;
      local_358 = 0;
      uStack_350 = 0x500000001;
      uStack_3c0 = 0xffffffffffffffff;
      local_3b8 = 0;
      uVar30 = (undefined2)iVar32;
      local_4a8 = (longlong *)CONCAT44(local_4a8._4_4_,iVar32);
      local_3b4._0_4_ = CONCAT22(uVar30,uVar30);
      local_3b4._5_3_ = SUB83(uVar43,5);
      local_3b4._0_5_ = (uint5)(uint)local_3b4;
      local_348 = 0;
      uStack_340 = 0;
      uStack_d0 = 1;
      FUN_144ab97f6(&local_d8,0);
      puVar17 = local_d8;
      *(ulonglong *)((longlong)local_d8 + 0xe) =
           CONCAT26(uStack_3c4,CONCAT42(uStack_3c8,uStack_3ca));
      *local_d8 = (undefined4)local_3d8;
      local_d8[1] = local_3d8._4_4_;
      local_d8[2] = uStack_3d0;
      local_d8[3] = CONCAT22(uStack_3ca,uStack_3cc);
      if (local_358 == 0) {
        memmove(local_d8 + 6,&uStack_3c0,100);
      }
      *(longlong *)(puVar17 + 0x20) = local_358;
      local_358 = 0;
      puVar17[0x22] = (undefined4)uStack_350;
      puVar17[0x23] = uStack_350._4_4_;
      uStack_350 = 0x500000000;
      *(undefined8 *)(puVar17 + 0x24) = local_348;
      local_348 = 0;
      puVar17[0x26] = (undefined4)uStack_340;
      puVar17[0x27] = uStack_340._4_4_;
      uStack_340 = 0;
      FUN_14002d3bc(&local_348);
      if (local_358 != 0) {
        FUN_1400020a8();
      }
      local_4b8 = (longlong *)(local_4d0 + 0x500);
      uVar43 = 0;
      do {
        uVar47 = uStack_d0;
        uVar48 = local_3b4;
        if (uVar43 != 0 && bVar49 == 1) {
          local_3d8 = &DAT_100000001;
          uStack_3d0 = 1;
          uStack_3cc = 1;
          uStack_3ca = 0;
          uStack_3c8 = 0;
          uStack_3c4 = 0;
          local_358 = 0;
          uStack_350 = 0x500000001;
          uStack_3c0 = 0xffffffffffffffff;
          local_3b8 = 0;
          local_3b4._0_4_ = CONCAT22((short)local_4a8,(short)local_4a8);
          local_3b4._5_3_ = SUB83(uVar48,5);
          local_3b4._0_5_ = (uint5)(uint)local_3b4;
          local_348 = 0;
          uStack_340 = 0;
          lVar36 = (longlong)(int)uStack_d0;
          uVar24 = (int)uStack_d0 + 1;
          uStack_d0 = CONCAT44(uStack_d0._4_4_,uVar24);
          if (uStack_d0._4_4_ < uVar24) {
            FUN_144ab97f6(&local_d8,uVar47 & 0xffffffff);
            puVar17 = local_d8;
          }
          *(ulonglong *)((longlong)puVar17 + lVar36 * 0xa0 + 0xe) =
               CONCAT26(uStack_3c4,CONCAT42(uStack_3c8,uStack_3ca));
          puVar42 = puVar17 + lVar36 * 0x28;
          *puVar42 = (undefined4)local_3d8;
          puVar42[1] = local_3d8._4_4_;
          puVar42[2] = uStack_3d0;
          puVar42[3] = CONCAT22(uStack_3ca,uStack_3cc);
          *(undefined8 *)(puVar17 + lVar36 * 0x28 + 0x20) = 0;
          if (local_358 == 0) {
            memmove(puVar17 + lVar36 * 0x28 + 6,&uStack_3c0,100);
          }
          *(longlong *)(puVar17 + lVar36 * 0x28 + 0x20) = local_358;
          local_358 = 0;
          puVar17[lVar36 * 0x28 + 0x22] = (undefined4)uStack_350;
          puVar17[lVar36 * 0x28 + 0x23] = uStack_350._4_4_;
          uStack_350 = 0x500000000;
          *(undefined8 *)(puVar17 + lVar36 * 0x28 + 0x24) = 0;
          *(undefined8 *)(puVar17 + lVar36 * 0x28 + 0x24) = local_348;
          local_348 = 0;
          puVar17[lVar36 * 0x28 + 0x26] = (undefined4)uStack_340;
          puVar17[lVar36 * 0x28 + 0x27] = uStack_340._4_4_;
          uStack_340 = 0;
          FUN_14002d3bc(&local_348);
          if (local_358 != 0) {
            FUN_1400020a8();
          }
        }
        puVar42 = local_d8;
        lVar36 = *(longlong *)((longlong)local_4c0 + uVar43 * 8);
        if (((*(byte *)(lVar36 + 0x998) & 4) == 0) &&
           (((((0 < *(int *)(lVar36 + 0xbc0) || (0 < *(int *)(lVar36 + 0xbe0))) ||
              (0 < *(int *)(lVar36 + 0xbf0))) ||
             ((0 < *(int *)(lVar36 + 0xfec) || (0 < *(int *)(lVar36 + 0xc30))))) ||
            ((0 < *(int *)(lVar36 + 0xc58) || ((~*(uint *)(lVar36 + 0x990) & 0x30000) == 0)))))) {
          lVar15 = (longlong)((int)uStack_d0 + -1);
          iVar32 = *(int *)(lVar36 + 0x960) * 2;
          local_4d8 = (wchar_t *)CONCAT44(local_4d8._4_4_,*(int *)(lVar36 + 0x95c) + iVar32);
          cVar14 = FUN_1403365a6(local_d8 + lVar15 * 0x28,lVar36 + 0x950,lVar36 + 0x954,
                                 iVar32 + *(int *)(lVar36 + 0x958));
          puVar17 = puVar42;
          if (cVar14 != '\0') {
            *(byte *)(lVar36 + 0x990) = *(byte *)(lVar36 + 0x990) | 1;
            iVar32 = puVar42[lVar15 * 0x28 + 0x26];
            puVar42[lVar15 * 0x28 + 0x26] = iVar32 + 1U;
            if ((uint)puVar42[lVar15 * 0x28 + 0x27] < iVar32 + 1U) {
              FUN_1447417ac(puVar42 + lVar15 * 0x28 + 0x24,iVar32);
            }
            *(longlong *)(*(longlong *)(puVar42 + lVar15 * 0x28 + 0x24) + (longlong)iVar32 * 8) =
                 lVar36;
          }
        }
        uVar43 = uVar43 + 1;
      } while (uVar44 != uVar43);
      uVar43 = 0;
      do {
        uVar47 = uStack_d0;
        uVar48 = local_3b4;
        lVar36 = *(longlong *)((longlong)local_4c0 + uVar43 * 8);
        if (((*(byte *)(lVar36 + 0x998) & 4) != 0) &&
           (((0 < *(int *)(lVar36 + 0xbc0) || (0 < *(int *)(lVar36 + 0xbe0))) ||
            (((0 < *(int *)(lVar36 + 0xbf0) ||
              (((0 < *(int *)(lVar36 + 0xfec) || (0 < *(int *)(lVar36 + 0xc30))) ||
               (0 < *(int *)(lVar36 + 0xc58))))) || ((~*(uint *)(lVar36 + 0x990) & 0x30000) == 0))))
           )) {
          local_3d8 = &DAT_100000001;
          uStack_3d0 = 1;
          uStack_3cc = 1;
          uStack_3ca = 0;
          uStack_3c8 = 0;
          uStack_3c4 = 0;
          local_358 = 0;
          uStack_350 = 0x500000001;
          uStack_3c0 = 0xffffffffffffffff;
          local_3b8 = 0;
          local_3b4._0_4_ = CONCAT22((short)local_4a8,(short)local_4a8);
          local_3b4._5_3_ = SUB83(uVar48,5);
          local_3b4._0_5_ = (uint5)(uint)local_3b4;
          local_348 = 0;
          uStack_340 = 0;
          lVar15 = (longlong)(int)uStack_d0;
          uVar24 = (int)uStack_d0 + 1;
          uStack_d0 = CONCAT44(uStack_d0._4_4_,uVar24);
          if (uStack_d0._4_4_ < uVar24) {
            FUN_144ab97f6(&local_d8,uVar47 & 0xffffffff);
          }
          puVar42 = local_d8;
          *(ulonglong *)((longlong)local_d8 + lVar15 * 0xa0 + 0xe) =
               CONCAT26(uStack_3c4,CONCAT42(uStack_3c8,uStack_3ca));
          puVar17 = local_d8 + lVar15 * 0x28;
          *puVar17 = (undefined4)local_3d8;
          puVar17[1] = local_3d8._4_4_;
          puVar17[2] = uStack_3d0;
          puVar17[3] = CONCAT22(uStack_3ca,uStack_3cc);
          *(undefined8 *)(local_d8 + lVar15 * 0x28 + 0x20) = 0;
          if (local_358 == 0) {
            memmove(local_d8 + lVar15 * 0x28 + 6,&uStack_3c0,100);
          }
          *(longlong *)(puVar42 + lVar15 * 0x28 + 0x20) = local_358;
          local_358 = 0;
          puVar42[lVar15 * 0x28 + 0x22] = (undefined4)uStack_350;
          puVar42[lVar15 * 0x28 + 0x23] = uStack_350._4_4_;
          uStack_350 = 0x500000000;
          *(undefined8 *)(puVar42 + lVar15 * 0x28 + 0x24) = 0;
          *(undefined8 *)(puVar42 + lVar15 * 0x28 + 0x24) = local_348;
          local_348 = 0;
          puVar42[lVar15 * 0x28 + 0x26] = (undefined4)uStack_340;
          puVar42[lVar15 * 0x28 + 0x27] = uStack_340._4_4_;
          uStack_340 = 0;
          FUN_14002d3bc(&local_348);
          if (local_358 != 0) {
            FUN_1400020a8();
          }
          lVar15 = (longlong)((int)uStack_d0 + -1);
          local_4d8 = (wchar_t *)CONCAT44(local_4d8._4_4_,*(undefined4 *)(lVar36 + 0x95c));
          cVar14 = FUN_1403365a6(puVar42 + lVar15 * 0x28,lVar36 + 0x950,lVar36 + 0x954,
                                 *(undefined4 *)(lVar36 + 0x958));
          if (cVar14 != '\0') {
            *(byte *)(lVar36 + 0x990) = *(byte *)(lVar36 + 0x990) | 1;
            iVar32 = puVar42[lVar15 * 0x28 + 0x26];
            puVar42[lVar15 * 0x28 + 0x26] = iVar32 + 1U;
            if ((uint)puVar42[lVar15 * 0x28 + 0x27] < iVar32 + 1U) {
              FUN_1447417ac(puVar42 + lVar15 * 0x28 + 0x24,iVar32);
            }
            *(longlong *)(*(longlong *)(puVar42 + lVar15 * 0x28 + 0x24) + (longlong)iVar32 * 8) =
                 lVar36;
          }
        }
        uVar48 = uStack_d0;
        uVar43 = uVar43 + 1;
      } while (uVar44 != uVar43);
      uVar43 = (ulonglong)(int)uStack_d0;
      local_4c0 = local_d8;
      if (0 < (longlong)uVar43) {
        uVar47 = 0;
        do {
          puVar17 = local_4c0;
          if ((local_4c0[uVar47 * 0x28 + 2] != 1) && (local_4c0[uVar47 * 0x28 + 3] != 1)) {
            FUN_14031d6b0(local_4b8);
            uVar12 = DAT_14ca850ac;
            uVar11 = DAT_14ca850a8;
            uVar10 = DAT_14ca850a4;
            uVar9 = DAT_14ca850a0;
            uVar8 = DAT_14ca8509c;
            uVar7 = DAT_14ca4afa8;
            lVar36 = (longlong)(*(int *)(local_4d0 + 0x508) + -1) * 0x48 +
                     *(longlong *)(local_4d0 + 0x500);
            uVar5 = *(ulonglong *)(puVar17 + uVar47 * 0x28 + 2);
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110
                         ) < DAT_14ca5b5d0) && (FUN_144b3d300(&DAT_14ca5b5d0), DAT_14ca5b5d0 == -1))
            {
              FUN_140056680(&DAT_14ca5b5b0,L"WholeSceneShadowmap");
              _DAT_14ca5b5c0 = 0;
              uRam000000014ca5b5c8 = 0;
              atexit((_func_5014 *)&LAB_14307a7c4);
              _Init_thread_footer(&DAT_14ca5b5d0);
            }
            local_4d8 = (wchar_t *)FUN_141781afe(&DAT_14ca5b5b0,uVar47 & 0xffffffff);
            local_3b8 = 0;
            local_3ac = 1;
            uStack_3d0 = uVar8;
            uStack_3cc = (undefined2)uVar9;
            uStack_3ca = (undefined2)((uint)uVar9 >> 0x10);
            uStack_3c8 = uVar10;
            uStack_3c4 = (undefined2)uVar11;
            uStack_3c2 = (undefined2)((uint)uVar11 >> 0x10);
            uStack_3c0 = CONCAT44(~(-1 << ((byte)DAT_14c760da4 & 0x1f)),uVar12);
            local_3aa = 0xff000c0001010001;
            local_3d8 = (undefined1 *)(uVar7 | 0xc);
            local_3b4 = uVar5;
            FUN_14490a8c0(&DAT_14ca9a3e8,local_4b0,&local_3d8,lVar36 + 0x30);
            iVar32 = puVar17[uVar47 * 0x28 + 0x26];
            if ((longlong)iVar32 != 0) {
              local_4a8 = *(longlong **)(puVar17 + uVar47 * 0x28 + 0x24);
              lVar15 = 0;
              do {
                lVar16 = *(longlong *)((longlong)local_4a8 + lVar15);
                FUN_14307a70a(lVar16 + 0x18,lVar36);
                iVar35 = *(int *)(lVar36 + 0x40);
                *(uint *)(lVar36 + 0x40) = iVar35 + 1U;
                if (*(uint *)(lVar36 + 0x44) < iVar35 + 1U) {
                  FUN_1447417ac((longlong *)(lVar36 + 0x38),iVar35);
                }
                *(longlong *)(*(longlong *)(lVar36 + 0x38) + (longlong)iVar35 * 8) = lVar16;
                lVar15 = lVar15 + 8;
              } while ((longlong)iVar32 * 8 != lVar15);
            }
          }
          uVar47 = uVar47 + 1;
        } while (uVar47 != uVar43);
      }
      FUN_141782171(local_4c0,uVar48 & 0xffffffff);
      FUN_14308166e(&local_d8);
      lVar15 = local_4c8;
    }
  }
  uVar44 = *(uint *)(lVar15 + 0x98);
  if ((ulonglong)uVar44 != 0) {
    local_498 = *(wchar_t **)(lVar15 + 0x90);
    iVar32 = *(int *)(local_4d0 + 0x8a4);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14ca5b3e8) && (FUN_144b3d300(&DAT_14ca5b3e8), DAT_14ca5b3e8 == -1)) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      plVar22 = (longlong *)
                (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.Shadow.MaxResolution");
      if (plVar22 == (longlong *)0x0) {
        DAT_14ca5b3e0 = 0;
      }
      else {
        DAT_14ca5b3e0 = (**(code **)(*plVar22 + 0x68))(plVar22);
      }
      _Init_thread_footer(&DAT_14ca5b3e8);
    }
    uVar24 = *(uint *)(DAT_14ca5b3e0 + 4);
    uVar40 = uVar24;
    if (iVar32 < 3) {
      uVar31 = DAT_14ca84e38;
      if ((int)DAT_14ca84e38 < (int)DAT_14ca84e3c) {
        uVar31 = DAT_14ca84e3c;
      }
      uVar40 = (int)uVar31 / 2;
      if ((int)(uVar24 * 2) <= (int)uVar31) {
        uVar40 = uVar24;
      }
    }
    uVar24 = DAT_14ca84e3c;
    if ((int)uVar40 < (int)DAT_14ca84e3c) {
      uVar24 = uVar40;
    }
    if ((int)uVar24 < 2) {
      uVar24 = 1;
    }
    local_4c0 = (undefined4 *)CONCAT44(local_4c0._4_4_,uVar24);
    uVar24 = DAT_14ca84e38;
    if ((int)uVar40 < (int)DAT_14ca84e38) {
      uVar24 = uVar40;
    }
    if ((int)uVar24 < 2) {
      uVar24 = 1;
    }
    local_4a8 = (longlong *)CONCAT44(local_4a8._4_4_,uVar24);
    local_d8 = (undefined4 *)0x0;
    uStack_d0 = 0;
    cVar14 = FUN_1472f441c();
    uVar43 = local_3b4;
    puVar17 = (undefined4 *)0x0;
    local_490 = (void **)CONCAT71(local_490._1_7_,cVar14);
    if (cVar14 != '\0') {
      local_3d8 = &DAT_100000001;
      uStack_3d0 = 1;
      uStack_3cc = 1;
      uStack_3ca = 0;
      uStack_3c8 = 0;
      uStack_3c4 = 0;
      local_358 = 0;
      uStack_350 = 0x500000001;
      uStack_3c0 = 0xffffffffffffffff;
      local_3b8 = 0;
      local_3b4._0_4_ = CONCAT22((short)local_4c0,(short)local_4a8);
      local_3b4._5_3_ = SUB83(uVar43,5);
      local_3b4._0_5_ = (uint5)(uint)local_3b4;
      local_348 = 0;
      uStack_340 = 0;
      uStack_d0 = CONCAT44(uStack_d0._4_4_,1);
      FUN_144ab97f6(&local_d8,0);
      puVar17 = local_d8;
      *(ulonglong *)((longlong)local_d8 + 0xe) =
           CONCAT26(uStack_3c4,CONCAT42(uStack_3c8,uStack_3ca));
      *local_d8 = (undefined4)local_3d8;
      local_d8[1] = local_3d8._4_4_;
      local_d8[2] = uStack_3d0;
      local_d8[3] = CONCAT22(uStack_3ca,uStack_3cc);
      if (local_358 == 0) {
        memmove(local_d8 + 6,&uStack_3c0,100);
      }
      *(longlong *)(puVar17 + 0x20) = local_358;
      local_358 = 0;
      puVar17[0x22] = (undefined4)uStack_350;
      puVar17[0x23] = uStack_350._4_4_;
      uStack_350 = 0x500000000;
      *(undefined8 *)(puVar17 + 0x24) = local_348;
      local_348 = 0;
      puVar17[0x26] = (undefined4)uStack_340;
      puVar17[0x27] = uStack_340._4_4_;
      uStack_340 = 0;
      FUN_14002d3bc(&local_348);
      if (local_358 != 0) {
        FUN_1400020a8();
      }
    }
    puVar42 = puVar17;
    if (0 < (int)uVar44) {
      local_4a0 = (wchar_t *)0x0;
      do {
        uVar48 = uStack_d0;
        uVar43 = local_3b4;
        lVar36 = *(longlong *)(local_498 + (longlong)local_4a0 * 4);
        if ((((*(int *)(lVar36 + 0x30) == 0) && (*(int *)(lVar36 + 0xbc0) < 1)) &&
            (*(int *)(lVar36 + 0xbe0) < 1)) &&
           (((*(int *)(lVar36 + 0xbf0) < 1 && (*(int *)(lVar36 + 0xfec) < 1)) &&
            ((*(int *)(lVar36 + 0xc30) < 1 &&
             ((*(int *)(lVar36 + 0xc58) < 1 && ((~*(uint *)(lVar36 + 0x990) & 0x30000) != 0))))))))
        {
          lVar15 = *(longlong *)(local_4d0 + 8);
          if (*(int *)(lVar15 + 0x4bc0) != *(int *)(lVar15 + 0x4bec)) {
            uVar24 = *(uint *)(*(longlong *)(lVar36 + 0xb60) + 0x34);
            lVar16 = lVar15 + 0x4bf0;
            if (*(longlong *)(lVar15 + 0x4bf8) != 0) {
              lVar16 = *(longlong *)(lVar15 + 0x4bf8);
            }
            iVar32 = *(int *)(lVar16 + (ulonglong)(*(int *)(lVar15 + 0x4c00) - 1U & uVar24) * 4);
            if (iVar32 != -1) {
              do {
                lVar16 = *(longlong *)(lVar15 + 0x4bb8) + (longlong)iVar32 * 0x20;
                if (*(uint *)(*(longlong *)(lVar15 + 0x4bb8) + (longlong)iVar32 * 0x20) == uVar24)
                goto LAB_140113368;
                iVar32 = *(int *)(lVar16 + 0x18);
              } while (iVar32 != -1);
            }
          }
          lVar16 = 0;
LAB_140113368:
          lVar15 = *(longlong *)(lVar16 + 8);
          *(undefined8 *)(lVar36 + 0x950) = 0;
          *(uint *)(lVar36 + 0x990) = *(uint *)(lVar36 + 0x990) | 1;
          FUN_14307a70a(lVar36 + 0x18,lVar15 + 0x3a0);
        }
        else if ((char)local_490 == '\0') {
          local_3d8 = &DAT_100000001;
          uStack_3d0 = 1;
          uStack_3cc = 1;
          uStack_3ca = 0;
          uStack_3c8 = 0;
          uStack_3c4 = 0;
          local_358 = 0;
          uStack_350 = 0x500000001;
          uStack_3c0 = 0xffffffffffffffff;
          local_3b8 = 0;
          local_3b4._0_4_ = CONCAT22((short)local_4c0,(short)local_4a8);
          local_3b4._5_3_ = SUB83(uVar43,5);
          local_3b4._0_5_ = (uint5)(uint)local_3b4;
          local_348 = 0;
          uStack_340 = 0;
          lVar15 = (longlong)(int)uStack_d0;
          uVar24 = (int)uStack_d0 + 1;
          uStack_d0 = CONCAT44(uStack_d0._4_4_,uVar24);
          if (uStack_d0._4_4_ < uVar24) {
            FUN_144ab97f6(&local_d8,uVar48 & 0xffffffff);
            puVar17 = local_d8;
          }
          *(ulonglong *)((longlong)puVar17 + lVar15 * 0xa0 + 0xe) =
               CONCAT26(uStack_3c4,CONCAT42(uStack_3c8,uStack_3ca));
          puVar42 = puVar17 + lVar15 * 0x28;
          *puVar42 = (undefined4)local_3d8;
          puVar42[1] = local_3d8._4_4_;
          puVar42[2] = uStack_3d0;
          puVar42[3] = CONCAT22(uStack_3ca,uStack_3cc);
          *(undefined8 *)(puVar17 + lVar15 * 0x28 + 0x20) = 0;
          if (local_358 == 0) {
            memmove(puVar17 + lVar15 * 0x28 + 6,&uStack_3c0,100);
          }
          *(longlong *)(puVar17 + lVar15 * 0x28 + 0x20) = local_358;
          local_358 = 0;
          puVar17[lVar15 * 0x28 + 0x22] = (undefined4)uStack_350;
          puVar17[lVar15 * 0x28 + 0x23] = uStack_350._4_4_;
          uStack_350 = 0x500000000;
          *(undefined8 *)(puVar17 + lVar15 * 0x28 + 0x24) = 0;
          *(undefined8 *)(puVar17 + lVar15 * 0x28 + 0x24) = local_348;
          local_348 = 0;
          puVar17[lVar15 * 0x28 + 0x26] = (undefined4)uStack_340;
          puVar17[lVar15 * 0x28 + 0x27] = uStack_340._4_4_;
          uStack_340 = 0;
          FUN_14002d3bc(&local_348);
          if (local_358 != 0) {
            FUN_1400020a8();
          }
          puVar42 = puVar17 + (longlong)((int)uStack_d0 + -1) * 0x28;
          iVar32 = *(int *)(lVar36 + 0x960) * 2;
          local_4d8 = (wchar_t *)CONCAT44(local_4d8._4_4_,*(int *)(lVar36 + 0x95c) + iVar32);
          cVar14 = FUN_1403365a6(puVar42,lVar36 + 0x950,lVar36 + 0x954,
                                 iVar32 + *(int *)(lVar36 + 0x958));
          if (cVar14 != '\0') {
            *(byte *)(lVar36 + 0x990) = *(byte *)(lVar36 + 0x990) | 1;
            iVar32 = puVar42[0x26];
            puVar42[0x26] = iVar32 + 1U;
            if ((uint)puVar42[0x27] < iVar32 + 1U) {
              FUN_1447417ac(puVar42 + 0x24,iVar32);
            }
            *(longlong *)(*(longlong *)(puVar42 + 0x24) + (longlong)iVar32 * 8) = lVar36;
          }
        }
        else {
          local_4b8 = (longlong *)(lVar36 + 0x950);
          puVar17 = local_d8;
          bVar51 = true;
          do {
            bVar50 = bVar51;
            uVar48 = uStack_d0;
            iVar35 = (int)uStack_d0;
            lVar15 = (longlong)(int)uStack_d0;
            puVar42 = puVar17 + (longlong)((int)uStack_d0 + -1) * 0x28;
            iVar32 = *(int *)(lVar36 + 0x960) * 2;
            local_4d8 = (wchar_t *)CONCAT44(local_4d8._4_4_,*(int *)(lVar36 + 0x95c) + iVar32);
            cVar14 = FUN_1403365a6(puVar42,local_4b8,lVar36 + 0x954,
                                   iVar32 + *(int *)(lVar36 + 0x958));
            uVar43 = local_3b4;
            if (cVar14 != '\0') {
              *(byte *)(lVar36 + 0x990) = *(byte *)(lVar36 + 0x990) | 1;
              iVar32 = puVar42[0x26];
              puVar42[0x26] = iVar32 + 1U;
              if ((uint)puVar42[0x27] < iVar32 + 1U) {
                FUN_1447417ac(puVar42 + 0x24,iVar32);
              }
              *(longlong *)(*(longlong *)(puVar42 + 0x24) + (longlong)iVar32 * 8) = lVar36;
              break;
            }
            local_3d8 = &DAT_100000001;
            uStack_3d0 = 1;
            uStack_3cc = 1;
            uStack_3ca = 0;
            uStack_3c8 = 0;
            uStack_3c4 = 0;
            local_358 = 0;
            uStack_350 = 0x500000001;
            uStack_3c0 = 0xffffffffffffffff;
            local_3b8 = 0;
            local_3b4._0_4_ = CONCAT22((short)local_4c0,(short)local_4a8);
            local_3b4._5_3_ = SUB83(uVar43,5);
            local_3b4._0_5_ = (uint5)(uint)local_3b4;
            local_348 = 0;
            uStack_340 = 0;
            uStack_d0 = CONCAT44(uStack_d0._4_4_,iVar35 + 1U);
            if (uStack_d0._4_4_ < iVar35 + 1U) {
              FUN_144ab97f6(&local_d8,uVar48 & 0xffffffff);
            }
            puVar17 = local_d8;
            *(ulonglong *)((longlong)local_d8 + lVar15 * 0xa0 + 0xe) =
                 CONCAT26(uStack_3c4,CONCAT42(uStack_3c8,uStack_3ca));
            puVar42 = local_d8 + lVar15 * 0x28;
            *puVar42 = (undefined4)local_3d8;
            puVar42[1] = local_3d8._4_4_;
            puVar42[2] = uStack_3d0;
            puVar42[3] = CONCAT22(uStack_3ca,uStack_3cc);
            *(undefined8 *)(local_d8 + lVar15 * 0x28 + 0x20) = 0;
            if (local_358 == 0) {
              memmove(local_d8 + lVar15 * 0x28 + 6,&uStack_3c0,100);
            }
            *(longlong *)(puVar17 + lVar15 * 0x28 + 0x20) = local_358;
            local_358 = 0;
            puVar17[lVar15 * 0x28 + 0x22] = (undefined4)uStack_350;
            puVar17[lVar15 * 0x28 + 0x23] = uStack_350._4_4_;
            uStack_350 = 0x500000000;
            *(undefined8 *)(puVar17 + lVar15 * 0x28 + 0x24) = 0;
            *(undefined8 *)(puVar17 + lVar15 * 0x28 + 0x24) = local_348;
            local_348 = 0;
            puVar17[lVar15 * 0x28 + 0x26] = (undefined4)uStack_340;
            puVar17[lVar15 * 0x28 + 0x27] = uStack_340._4_4_;
            uStack_340 = 0;
            FUN_14002d3bc(&local_348);
            if (local_358 != 0) {
              FUN_1400020a8();
            }
            bVar51 = false;
          } while (bVar50);
        }
        local_4a0 = (wchar_t *)((longlong)local_4a0 + 1);
        puVar42 = local_d8;
      } while (local_4a0 != (wchar_t *)(ulonglong)uVar44);
    }
    local_4a0 = L"ShadowDepth";
    if ((char)local_490 != '\0') {
      local_4a0 = L"ShadowDepthAtlas";
    }
    local_4b8 = (longlong *)(longlong)(int)uStack_d0;
    if (0 < (longlong)local_4b8) {
      local_498 = (wchar_t *)(local_4d0 + 0x500);
      plVar22 = (longlong *)0x0;
      do {
        FUN_14031d6b0(local_498);
        uVar43 = (ulonglong)
                 (puVar42[(longlong)plVar22 * 0x28 + 3] + -1 +
                 (uint)(puVar42[(longlong)plVar22 * 0x28 + 3] == 0)) * 2 + 1;
        lVar36 = 0x3f;
        if (uVar43 != 0) {
          for (; uVar43 >> lVar36 == 0; lVar36 = lVar36 + -1) {
          }
        }
        uVar44 = 1 << ((byte)lVar36 & 0x1f);
        lVar36 = *(longlong *)(local_4d0 + 0x500);
        if ((uint)local_4c0 < uVar44) {
          uVar44 = (uint)local_4c0;
        }
        lVar16 = (longlong)(*(int *)(local_4d0 + 0x508) + -1);
        uVar43 = (ulonglong)
                 (puVar42[(longlong)plVar22 * 0x28 + 2] + -1 +
                 (uint)(puVar42[(longlong)plVar22 * 0x28 + 2] == 0)) * 2 + 1;
        lVar15 = 0x3f;
        if (uVar43 != 0) {
          for (; uVar43 >> lVar15 == 0; lVar15 = lVar15 + -1) {
          }
        }
        uVar24 = 1 << ((byte)lVar15 & 0x1f);
        if ((uint)local_4a8 < uVar24) {
          uVar24 = (uint)local_4a8;
        }
        if (*(int *)(DAT_14ca5b300 + 4) != 0) {
          uVar44 = (uint)local_4c0;
          uVar24 = (uint)local_4a8;
        }
        local_3b4 = CONCAT44(uVar44,uVar24);
        local_3d8 = (undefined1 *)(DAT_14ca4afa0 | 0xc);
        local_3b8 = 0;
        local_3ac = 1;
        uStack_3d0 = DAT_14ca8509c;
        uStack_3cc = (undefined2)DAT_14ca850a0;
        uStack_3ca = (undefined2)((uint)DAT_14ca850a0 >> 0x10);
        uStack_3c8 = DAT_14ca850a4;
        uStack_3c4 = (undefined2)DAT_14ca850a8;
        uStack_3c2 = (undefined2)((uint)DAT_14ca850a8 >> 0x10);
        uStack_3c0 = CONCAT44(~(-1 << ((byte)DAT_14c760da4 & 0x1f)),DAT_14ca850ac);
        local_3aa = 0xff000c0001010001;
        local_4d8 = local_4a0;
        FUN_14490a8c0(&DAT_14ca9a3e8,local_4b0,&local_3d8,lVar36 + lVar16 * 0x48 + 0x30);
        iVar32 = puVar42[(longlong)plVar22 * 0x28 + 0x26];
        if (0 < iVar32) {
          lVar36 = lVar36 + lVar16 * 0x48;
          lVar15 = 0;
          do {
            lVar16 = *(longlong *)
                      (*(longlong *)(puVar42 + (longlong)plVar22 * 0x28 + 0x24) + lVar15 * 8);
            if ((*(byte *)(lVar16 + 0x990) & 1) != 0) {
              FUN_14307a70a(lVar16 + 0x18,lVar36);
              iVar32 = *(int *)(lVar36 + 0x40);
              *(uint *)(lVar36 + 0x40) = iVar32 + 1U;
              if (*(uint *)(lVar36 + 0x44) < iVar32 + 1U) {
                FUN_1447417ac((longlong *)(lVar36 + 0x38),iVar32);
              }
              *(longlong *)(*(longlong *)(lVar36 + 0x38) + (longlong)iVar32 * 8) = lVar16;
              iVar32 = puVar42[(longlong)plVar22 * 0x28 + 0x26];
            }
            lVar15 = lVar15 + 1;
          } while (lVar15 < iVar32);
        }
        plVar22 = (longlong *)((longlong)plVar22 + 1);
      } while (plVar22 != local_4b8);
    }
    FUN_141782171(puVar42,local_4b8);
    FUN_14308166e(&local_d8);
    lVar15 = local_4c8;
  }
  uVar43 = (ulonglong)*(int *)(lVar15 + 0xb8);
  if (0 < (longlong)uVar43) {
    if (2 < *(int *)(local_4d0 + 0x8a4)) {
      local_4c0 = *(undefined4 **)(lVar15 + 0xb0);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14ca5b3e8) && (FUN_144b3d300(&DAT_14ca5b3e8), DAT_14ca5b3e8 == -1))
      {
        if (DAT_14c8407a8 == (longlong *)0x0) {
          FUN_1414b00ea();
        }
        plVar22 = (longlong *)
                  (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.Shadow.MaxResolution",1);
        if (plVar22 == (longlong *)0x0) {
          DAT_14ca5b3e0 = 0;
        }
        else {
          DAT_14ca5b3e0 = (**(code **)(*plVar22 + 0x68))(plVar22);
        }
        _Init_thread_footer(&DAT_14ca5b3e8);
      }
      uVar44 = *(uint *)(DAT_14ca5b3e0 + 4);
      uVar24 = DAT_14ca84e3c;
      if ((int)uVar44 < (int)DAT_14ca84e3c) {
        uVar24 = uVar44;
      }
      if ((int)uVar24 < 2) {
        uVar24 = 0;
      }
      if ((int)DAT_14ca84e38 <= (int)uVar44) {
        uVar44 = DAT_14ca84e38;
      }
      if ((int)uVar44 < 2) {
        uVar44 = 0;
      }
      uVar40 = uVar44 >> 1;
      if ((int)DAT_14ca84e38 <= (int)(uVar44 >> 1)) {
        uVar40 = DAT_14ca84e38;
      }
      if ((int)uVar40 < 2) {
        uVar40 = 1;
      }
      uVar44 = uVar24 >> 1;
      if ((int)DAT_14ca84e3c <= (int)(uVar24 >> 1)) {
        uVar44 = DAT_14ca84e3c;
      }
      if ((int)uVar44 < 2) {
        uVar44 = 1;
      }
      local_4b8 = (longlong *)(local_4d0 + 0x568);
      FUN_14031d6b0();
      uVar48 = local_3b4;
      local_3d8 = &DAT_100000001;
      uStack_3d0 = 1;
      uStack_3cc = 1;
      uStack_3ca = 0;
      uStack_3c8 = 0;
      uStack_3c4 = 0;
      local_358 = 0;
      uStack_350 = 0x500000001;
      uStack_3c0 = 0xffffffffffffffff;
      local_3b8 = 0;
      local_3b4._0_4_ = CONCAT22((short)uVar44,(short)uVar40);
      local_3b4._5_3_ = SUB83(uVar48,5);
      local_3b4._0_5_ = (uint5)(uint)local_3b4;
      uVar48 = 0;
      local_4a8 = (longlong *)(ulonglong)uVar44;
      do {
        lVar36 = *(longlong *)(local_4c0 + uVar48 * 2);
        iVar32 = *(int *)(lVar36 + 0x960) * 2;
        local_4d8 = (wchar_t *)CONCAT44(local_4d8._4_4_,*(int *)(lVar36 + 0x95c) + iVar32);
        cVar14 = FUN_1403365a6(&local_3d8,lVar36 + 0x950,lVar36 + 0x954,
                               iVar32 + *(int *)(lVar36 + 0x958));
        uVar47 = local_3b4;
        if (cVar14 == '\0') {
          local_3d8 = &DAT_100000001;
          uStack_3d0 = 1;
          uStack_3cc = 1;
          uStack_3ca = 0;
          uStack_3c8 = 0;
          uStack_3c4 = 0;
          uStack_3c0 = 0xffffffffffffffff;
          local_3b8 = 0;
          local_3b4._0_4_ = CONCAT22((short)local_4a8,(short)uVar40);
          local_3b4._5_3_ = SUB83(uVar47,5);
          local_3b4._0_5_ = (uint5)(uint)local_3b4;
          if (local_358 != 0) {
            FUN_1400020a8();
          }
          local_358 = 0;
          uStack_350 = 0x500000001;
          FUN_14031d6b0(local_4b8);
          iVar32 = *(int *)(lVar36 + 0x960) * 2;
          local_4d8 = (wchar_t *)CONCAT44(local_4d8._4_4_,*(int *)(lVar36 + 0x95c) + iVar32);
          cVar14 = FUN_1403365a6(&local_3d8,lVar36 + 0x950,lVar36 + 0x954,
                                 iVar32 + *(int *)(lVar36 + 0x958));
          if (cVar14 != '\0') goto LAB_140113854;
        }
        else {
LAB_140113854:
          *(byte *)(lVar36 + 0x990) = *(byte *)(lVar36 + 0x990) | 1;
        }
        lVar15 = *(longlong *)(local_4d0 + 0x568) +
                 (longlong)(*(int *)(local_4d0 + 0x570) + -1) * 0x48;
        if (*(int *)(lVar15 + 0x28) == 0) {
          FUN_14002d220(lVar15,2);
          FUN_14730f938(lVar15);
          pwVar21 = L"InvalidName";
          lVar16 = 0;
          bVar51 = true;
          do {
            bVar50 = bVar51;
            if (bVar50) {
              pwVar21 = L"TranslucencyShadowTransmission0";
            }
            lVar33 = *(longlong *)(lVar15 + 0x20);
            if (*(longlong *)(lVar15 + 0x20) == 0) {
              lVar33 = lVar15;
            }
            local_bc = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
            local_b8 = 0;
            local_ac = 1;
            local_a6 = 0;
            uStack_d0 = CONCAT44(DAT_14ca8508c,DAT_14ca85088);
            uStack_c8 = DAT_14ca85090;
            uStack_c4 = DAT_14ca85094;
            uStack_c0 = DAT_14ca85098;
            local_a5 = 10;
            local_aa = 0x1010001;
            local_d8 = (undefined4 *)&DAT_00000009;
            local_a3 = 0xff;
            local_4d8 = pwVar21;
            local_b4 = CONCAT44(uVar44,uVar40);
            FUN_14490a8c0(&DAT_14ca9a3e8,local_4b0,&local_d8,lVar33 + lVar16 * 8);
            lVar16 = 1;
            pwVar21 = L"TranslucencyShadowTransmission1";
            bVar51 = false;
          } while (bVar50);
        }
        FUN_14307a70a(lVar36 + 0x18,lVar15);
        iVar32 = *(int *)(lVar15 + 0x40);
        *(uint *)(lVar15 + 0x40) = iVar32 + 1U;
        if (*(uint *)(lVar15 + 0x44) < iVar32 + 1U) {
          FUN_1447417ac((longlong *)(lVar15 + 0x38),iVar32);
        }
        *(longlong *)(*(longlong *)(lVar15 + 0x38) + (longlong)iVar32 * 8) = lVar36;
        uVar48 = uVar48 + 1;
      } while (uVar48 != uVar43);
      if (local_358 != 0) {
        FUN_1400020a8();
      }
      uVar43 = (ulonglong)*(uint *)(local_4c8 + 0xb8);
      lVar15 = local_4c8;
      if ((int)*(uint *)(local_4c8 + 0xb8) < 1) goto LAB_140112737;
    }
    plVar22 = local_4b0;
    iVar32 = *(int *)(local_4d0 + 0x3f0);
    lVar36 = 0;
    do {
      if (0 < iVar32) {
        lVar15 = *(longlong *)(*(longlong *)(local_4c8 + 0xb0) + lVar36 * 8);
        uVar44 = *(uint *)(*(longlong *)(lVar15 + 0xbb0) + 0x158);
        lVar16 = 0;
        do {
          lVar33 = *(longlong *)(local_4d0 + 1000);
          lVar34 = lVar16 * 0x13c10;
          if (*(int *)(lVar33 + 0x3378 + lVar34) != *(int *)(lVar33 + 0x33a4 + lVar34)) {
            lVar33 = lVar33 + lVar34;
            lVar34 = lVar33 + 0x33b0;
            if (*(longlong *)(lVar33 + 0x33c0) != 0) {
              lVar34 = *(longlong *)(lVar33 + 0x33c0);
            }
            if (lVar34 == 0) {
              lVar34 = lVar33 + 0x33a8;
            }
            uVar24 = *(uint *)(lVar34 + (ulonglong)(*(int *)(lVar33 + 0x33c8) - 1U & uVar44) * 4);
            if (uVar24 != 0xffffffff) {
              do {
                puVar27 = (uint *)(*(longlong *)(lVar33 + 0x3370) + (longlong)(int)uVar24 * 0x18);
                if (*puVar27 == uVar44) {
                  if (puVar27 + 2 != (uint *)0x0 && puVar27 != (uint *)0x0) {
                    local_398 = 0;
                    uStack_390 = 0x3f80000000000000;
                    local_388 = 0;
                    uStack_380 = 0x3f80000000000000;
                    local_378 = 0;
                    uStack_370 = 0x3f80000000000000;
                    local_358 = 0;
                    uStack_350 = 0;
                    local_368 = 0;
                    uStack_360 = 0;
                    FUN_1472f4aa5(lVar15,&local_3d8);
                    uVar6 = *(undefined8 *)(puVar27 + 2);
                    if (*(char *)((longlong)local_4b0 + 0x69) == '\0') {
                      FUN_14002049c(plVar22,1);
                      (**(code **)(*DAT_14ca83900 + 0x140))(DAT_14ca83900,plVar22,uVar6,&local_3d8);
                      FUN_14002049c(plVar22,0);
                    }
                    else {
                      (**(code **)(*DAT_14ca83900 + 0x140))
                                (DAT_14ca83900,local_4b0,uVar6,&local_3d8);
                    }
                    iVar32 = *(int *)(local_4d0 + 0x3f0);
                  }
                  break;
                }
                uVar24 = puVar27[4];
              } while (uVar24 != 0xffffffff);
            }
          }
          lVar16 = lVar16 + 1;
        } while (lVar16 < iVar32);
        uVar43 = (ulonglong)*(uint *)(local_4c8 + 0xb8);
      }
      lVar36 = lVar36 + 1;
      lVar15 = local_4c8;
    } while (lVar36 < (int)uVar43);
  }
LAB_140112737:
  FUN_1400daade(lVar15 + 0x138);
  FUN_14002d3bc(&local_428);
  FUN_14002d3bc(&local_418);
  if ((local_a0 ^ (ulonglong)auStack_4f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_14011182d:
  lVar36 = *plVar20;
  *plVar20 = *plVar38;
  *plVar38 = lVar36;
  iVar32 = iVar32 + -1;
  plVar19 = plVar19 + -2;
  if ((longlong)plVar19 - (longlong)plVar20 < (longlong)plVar22 - (longlong)plVar29) {
    if (plVar29 < plVar22) {
      *puVar37 = plVar29;
      puVar37[1] = plVar22;
      *(int *)(puVar37 + 2) = iVar32;
      puVar37 = puVar37 + 3;
    }
    if (plVar38 <= plVar20 + 1) goto LAB_1401119cd;
  }
  else {
    if (plVar20 + 1 < plVar38) {
      *puVar37 = plVar20;
      puVar37[1] = plVar19;
      *(int *)(puVar37 + 2) = iVar32;
      puVar37 = puVar37 + 3;
    }
    plVar19 = plVar22;
    plVar20 = plVar29;
    if (plVar22 <= plVar29) goto LAB_1401119cd;
  }
  iVar35 = (int)((ulonglong)((longlong)plVar19 - (longlong)plVar20) >> 3);
  plVar22 = plVar19;
  if (iVar32 == 0) goto LAB_1401118b4;
  goto LAB_1401115e7;
joined_r0x0001401118c1:
  plVar29 = plVar20;
  plVar38 = plVar20;
  if (plVar20 < plVar22) {
joined_r0x0001401118d1:
    plVar38 = plVar38 + 1;
    if (plVar22 < plVar38) goto LAB_1401119b1;
    lVar36 = *plVar29;
    uVar44 = *(uint *)(lVar36 + 0x990);
    if (((char)uVar44 < '\0') && (-1 < *(int *)(lVar36 + 0x944))) {
      cVar14 = (char)((uVar44 & 0x10) >> 4);
    }
    else {
      cVar14 = '\0';
    }
    lVar15 = *plVar38;
    uVar24 = *(uint *)(lVar15 + 0x990);
    if (((char)uVar24 < '\0') && (-1 < *(int *)(lVar15 + 0x944))) {
      cVar39 = (char)((uVar24 & 0x10) >> 4);
    }
    else {
      cVar39 = '\0';
    }
    if (cVar14 == '\0') goto LAB_140111987;
    if (cVar39 != '\0') {
      uVar31 = uVar44 >> 9 & 1;
      uVar40 = uVar24 >> 9 & 1;
      if (uVar31 != uVar40) {
        if ((uVar31 == 0) && (uVar40 != 0)) goto LAB_14011195c;
        if (((uVar44 >> 9 & 1) != 0) && ((uVar24 & 0x200) == 0)) goto joined_r0x0001401118d1;
      }
      if (*(int *)(lVar15 + 0x944) < *(int *)(lVar36 + 0x944)) goto LAB_14011195c;
      goto joined_r0x0001401118d1;
    }
    goto LAB_14011195c;
  }
  goto LAB_1401119cd;
LAB_1401119b1:
  lVar36 = *plVar29;
  *plVar29 = *plVar22;
  *plVar22 = lVar36;
  plVar22 = plVar22 + -1;
  goto joined_r0x0001401118c1;
LAB_140111987:
  if ((cVar39 != '\0') ||
     ((uint)(*(int *)(lVar36 + 0x95c) * *(int *)(lVar36 + 0x958)) <=
      (uint)(*(int *)(lVar15 + 0x95c) * *(int *)(lVar15 + 0x958)))) goto joined_r0x0001401118d1;
LAB_14011195c:
  plVar29 = plVar38;
  goto joined_r0x0001401118d1;
}



// FUNCTION 140113d10 FUN_140113d10 body=154 status=ok
// SIG undefined FUN_140113d10(void)

longlong FUN_140113d10(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  int *piVar3;
  
  puVar1 = *(undefined8 **)(param_1 + 0x28);
  if (puVar1 != (undefined8 *)0x0) {
    LOCK();
    piVar3 = (int *)(puVar1 + 1);
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      (**(code **)*puVar1)(puVar1,1);
    }
  }
  FUN_14482b0db(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18));
  lVar2 = *(longlong *)(param_1 + 0x10);
  if (lVar2 != 0) {
    piVar3 = (int *)((lVar2 + -8) - (ulonglong)*(uint *)(lVar2 + -8));
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        lVar2 = DAT_14c872d30;
        if (DAT_14c872d30 == 0) {
          lVar2 = FUN_145bdc178();
        }
        FUN_140028df4(lVar2,piVar3);
      }
      else {
        FUN_144705e74(piVar3);
      }
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140113daa FUN_140113daa body=71 status=ok
// SIG undefined FUN_140113daa(void)

uint FUN_140113daa(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if ((longlong)iVar1 == 0) {
    uVar4 = 0;
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0x20);
    lVar5 = 0;
    uVar4 = 0;
    do {
      uVar3 = (**(code **)(**(longlong **)(lVar2 + lVar5) + 0xb0))();
      uVar4 = uVar4 | uVar3;
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar1 * 8 != lVar5);
  }
  return uVar4;
}



// FUNCTION 140113df6 FUN_140113df6 body=267 status=ok
// SIG undefined FUN_140113df6(void)

void FUN_140113df6(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *(undefined8 *)(param_1 + 0xa0) = 0;
  plVar3 = *(longlong **)(param_1 + 0xa8);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0xa8) = 0;
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
  *(undefined4 *)(param_1 + 0xb8) = 0;
  if (*(int *)(param_1 + 0xbc) != 0) {
    FUN_140c5c1ec(param_1 + 0xb0,0);
  }
  FUN_140113f01(*(undefined8 *)(param_1 + 0xc0),*(undefined4 *)(param_1 + 200));
  *(undefined4 *)(param_1 + 200) = 0;
  if (*(int *)(param_1 + 0xcc) != 0) {
    FUN_1456cf384(param_1 + 0xc0,0);
  }
  *(undefined4 *)(param_1 + 0xd8) = 0;
  if (*(int *)(param_1 + 0xdc) != 0) {
    FUN_1456cf3e2(param_1 + 0xd0,0);
  }
  FUN_140113f80(param_1 + 0xe0,0);
  *(undefined1 *)(param_1 + 0x132) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  return;
}



// FUNCTION 140113f01 FUN_140113f01 body=57 status=ok
// SIG undefined FUN_140113f01(void)

void FUN_140113f01(longlong param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = 0;
    do {
      if (*(longlong *)(param_1 + lVar1 * 8) != 0) {
        FUN_140113f3a();
        *(undefined8 *)(param_1 + lVar1 * 8) = 0;
      }
      lVar1 = lVar1 + 1;
    } while (param_2 != (int)lVar1);
  }
  return;
}



// FUNCTION 140113f3a FUN_140113f3a body=14 status=ok
// SIG undefined FUN_140113f3a(void)

void FUN_140113f3a(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  
  if (DAT_14c872a72 != '\0') {
    return;
  }
  uVar2 = *(uint *)(param_1 + 0xc);
  if ((int)uVar2 < DAT_14c9647dc) {
    lVar3 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
  }
  else {
    lVar3 = 0;
  }
  LOCK();
  piVar1 = (int *)(lVar3 + 0x14);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    FUN_14482b126(lVar3,0x20000000);
    return;
  }
  return;
}



// FUNCTION 140113f48 FUN_140113f48 body=56 status=ok
// SIG undefined FUN_140113f48(void)

void FUN_140113f48(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  
  uVar2 = *(uint *)(param_1 + 0xc);
  if ((int)uVar2 < DAT_14c9647dc) {
    lVar3 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
  }
  else {
    lVar3 = 0;
  }
  LOCK();
  piVar1 = (int *)(lVar3 + 0x14);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    FUN_14482b126(lVar3,0x20000000);
    return;
  }
  return;
}



// FUNCTION 140113f80 FUN_140113f80 body=107 status=ok
// SIG undefined FUN_140113f80(void)

void FUN_140113f80(longlong param_1,uint param_2)

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
  if ((int)param_2 < 1) {
    if (iVar3 < *(int *)(param_1 + 0x48)) {
LAB_140113fcf:
      FUN_140d0a85e(param_1,param_2);
      *(int *)(param_1 + 0x48) = iVar3;
      FUN_140d0b828(param_1);
      return;
    }
  }
  else if (*(int *)(param_1 + 0x48) != iVar3) goto LAB_140113fcf;
  FUN_140113fec(param_1);
  FUN_140d0a85e(param_1,param_2);
  return;
}



// FUNCTION 140113fec FUN_140113fec body=324 status=ok
// SIG undefined FUN_140113fec(void)

void FUN_140113fec(longlong *param_1)

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
        do {
          local_60 = uVar2;
          *(undefined4 *)
           ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0xc + (longlong)iVar4 * 0x10) * 4) =
               0xffffffff;
          local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
          FUN_1449c0562(&local_70);
          iVar4 = local_60._4_4_;
          uVar2 = local_60;
        } while (local_60._4_4_ != iVar6);
      } while (((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1) || (local_78 != param_1));
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



// FUNCTION 140114132 FUN_140114132 body=209 status=ok
// SIG undefined FUN_140114132(void)

undefined8 * FUN_140114132(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_144928b90(param_1,1);
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0xbf80000000000000;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  cVar4 = FUN_1401144ce(param_2);
  if (cVar4 != '\0') {
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
    *param_1 = *param_2;
    FUN_1447715ec(param_1 + 2,param_2 + 2);
    local_40 = *param_3;
    local_38 = *(undefined4 *)(param_3 + 1);
    FUN_144928d62(param_1 + 2,5);
    uVar1 = *(undefined4 *)(param_3 + 2);
    uVar2 = *(undefined4 *)((longlong)param_3 + 0x14);
    uVar3 = *(undefined4 *)(param_3 + 3);
    *(undefined4 *)(param_1 + 7) = *(undefined4 *)((longlong)param_3 + 0xc);
    *(undefined4 *)((longlong)param_1 + 0x3c) = uVar1;
    *(undefined4 *)(param_1 + 8) = uVar2;
    *(undefined4 *)((longlong)param_1 + 0x44) = uVar3;
    FUN_140114204(param_1);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140114204 FUN_140114204 body=536 status=ok
// SIG undefined FUN_140114204(void)

ulonglong FUN_140114204(byte *param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined7 uVar7;
  byte *pbVar5;
  longlong lVar6;
  byte *pbVar8;
  int *piVar9;
  byte *pbVar10;
  bool bVar11;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar3 = (uint)*param_1;
  if (uVar3 == 1) {
    cVar2 = FUN_1401144ce(param_1);
    if (cVar2 != '\0') {
      uVar4 = FUN_140114448(param_1);
      uVar4 = uVar4 ^ 1;
      goto LAB_14011423e;
    }
    goto switchD_140114276_default;
  }
  uVar7 = (undefined7)
          ((ulonglong)
           ((longlong)&switchD_140114276::switchdataD_14b3fc384 +
           (longlong)(int)(&switchD_140114276::switchdataD_14b3fc384)[uVar3 - 2]) >> 8);
  switch(uVar3) {
  case 2:
  case 3:
  case 4:
  case 5:
  case 8:
  case 0xc:
    pbVar5 = (byte *)&DAT_14c948618;
    if (((*(uint *)(param_1 + 0x10) != 0) && (iVar1 = *(int *)(param_1 + 0x14), iVar1 != 0)) &&
       (*(uint *)(param_1 + 0x10) != DAT_14c948000)) {
      if ((iVar1 < 2) && (*(int *)(param_1 + 0x34) < 1)) {
        param_1 = param_1 + 0x18;
      }
      else {
        param_1 = *(byte **)(param_1 + 0x28);
      }
      if (iVar1 != 1) {
        pbVar5 = (byte *)&DAT_14c948618;
        if (1 < iVar1) {
          pbVar5 = param_1 + 0xc;
        }
      }
    }
    goto LAB_140114354;
  case 6:
    bVar11 = SBORROW4(*(int *)(param_1 + 0x14),3);
    iVar1 = *(int *)(param_1 + 0x14) + -3;
    goto LAB_140114302;
  case 7:
    if (*(int *)(param_1 + 0x14) == 3) {
      if ((*(uint *)(param_1 + 0x10) == 0) || (*(uint *)(param_1 + 0x10) == DAT_14c948000)) {
        if ((int)DAT_14c948618 == 0) break;
        pbVar5 = (byte *)&DAT_14c948618;
      }
      else {
        if (*(int *)(*(longlong *)(param_1 + 0x28) + 0xc) == 0) break;
        pbVar5 = (byte *)(*(longlong *)(param_1 + 0x28) + 0x18);
      }
LAB_140114354:
      iVar1 = *(int *)pbVar5;
LAB_1401142f6:
      uVar4 = CONCAT71((int7)((ulonglong)pbVar5 >> 8),iVar1 != 0);
      goto LAB_14011423e;
    }
    break;
  case 9:
    bVar11 = SBORROW4(*(int *)(param_1 + 0x14),2);
    iVar1 = *(int *)(param_1 + 0x14) + -2;
LAB_140114302:
    uVar4 = CONCAT71(uVar7,bVar11 == iVar1 < 0);
    goto LAB_14011423e;
  case 10:
    uVar3 = *(uint *)(param_1 + 0x10);
    pbVar5 = (byte *)(ulonglong)uVar3;
    if (uVar3 == 0) {
      if ((int)DAT_14c948618 != 0) {
        piVar9 = (int *)&DAT_14c948618;
        goto LAB_1401142f3;
      }
    }
    else {
      iVar1 = *(int *)(param_1 + 0x14);
      pbVar8 = (byte *)&DAT_14c948618;
      if ((iVar1 != 0) && (uVar3 != DAT_14c948000)) {
        if ((iVar1 < 2) && (*(int *)(param_1 + 0x34) < 1)) {
          pbVar10 = param_1 + 0x18;
        }
        else {
          pbVar10 = *(byte **)(param_1 + 0x28);
        }
        if (iVar1 != 1) {
          pbVar8 = (byte *)&DAT_14c948618;
          if (1 < iVar1) {
            pbVar8 = pbVar10 + 0xc;
          }
        }
      }
      if (*(int *)pbVar8 != 0) {
        piVar9 = (int *)&DAT_14c948618;
        if ((((uVar3 != 0) && (*(int *)(param_1 + 0x14) != 0)) && (uVar3 != DAT_14c948000)) &&
           (4 < *(int *)(param_1 + 0x14))) {
          piVar9 = (int *)(*(longlong *)(param_1 + 0x28) + 0x30);
        }
LAB_1401142f3:
        iVar1 = *piVar9;
        goto LAB_1401142f6;
      }
    }
    break;
  case 0xb:
    uVar4 = CONCAT71(uVar7,1);
    goto LAB_14011423e;
  case 0xd:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
  case 0xe:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
  case 0xf:
    local_20 = *(undefined8 *)(param_1 + 4);
    lVar6 = FUN_148833460();
    if ((lVar6 != 0) && (*(longlong *)(lVar6 + 0x50) != 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
    }
  }
switchD_140114276_default:
  uVar4 = 0;
LAB_14011423e:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 140114448 FUN_140114448 body=133 status=ok
// SIG undefined FUN_140114448(void)

undefined8 FUN_140114448(longlong param_1)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  int *piVar4;
  
  iVar1 = *(int *)(param_1 + 0x10);
  piVar4 = (int *)&DAT_14c948618;
  piVar2 = &DAT_14c948620;
  if ((((iVar1 != 0) && (*(int *)(param_1 + 0x14) != 0)) && (iVar1 != DAT_14c948000)) &&
     (5 < *(int *)(param_1 + 0x14))) {
    piVar4 = (int *)(*(longlong *)(param_1 + 0x28) + 0x3c);
    piVar2 = (int *)(*(longlong *)(param_1 + 0x28) + 0x44);
  }
  if ((*piVar4 != DAT_14cb7bf10) ||
     (uVar3 = CONCAT71((int7)((ulonglong)piVar2 >> 8),1), *piVar2 != DAT_14cb7bf18)) {
    piVar4 = (int *)&DAT_14c948618;
    if (((iVar1 != 0) && ((*(int *)(param_1 + 0x14) != 0 && (iVar1 != DAT_14c948000)))) &&
       (5 < *(int *)(param_1 + 0x14))) {
      piVar4 = (int *)(*(longlong *)(param_1 + 0x28) + 0x3c);
    }
    uVar3 = CONCAT71((int7)((ulonglong)piVar4 >> 8),*piVar4 == 0);
  }
  return uVar3;
}



// FUNCTION 1401144ce FUN_1401144ce body=352 status=ok
// SIG undefined FUN_1401144ce(void)

undefined4 FUN_1401144ce(char *param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  char *pcVar4;
  int *piVar5;
  int *piVar6;
  
  if (*param_1 == '\x01') {
    iVar1 = *(int *)(param_1 + 0x10);
    piVar6 = (int *)&DAT_14c948618;
    piVar5 = &DAT_14c948620;
    if ((((iVar1 != 0) && (*(int *)(param_1 + 0x14) != 0)) && (iVar1 != DAT_14c948000)) &&
       (1 < *(int *)(param_1 + 0x14))) {
      piVar6 = (int *)(*(longlong *)(param_1 + 0x28) + 0xc);
      piVar5 = (int *)(*(longlong *)(param_1 + 0x28) + 0x14);
    }
    if ((*piVar6 != DAT_14cb7beb0) || (*piVar5 != DAT_14cb7beb8)) {
      piVar6 = (int *)&DAT_14c948618;
      if ((iVar1 != 0) &&
         ((iVar2 = *(int *)(param_1 + 0x14), iVar2 != 0 && (iVar1 != DAT_14c948000)))) {
        if ((iVar2 < 2) && (*(int *)(param_1 + 0x34) < 1)) {
          pcVar4 = param_1 + 0x18;
        }
        else {
          pcVar4 = *(char **)(param_1 + 0x28);
        }
        if (iVar2 != 1) {
          piVar6 = (int *)&DAT_14c948618;
          if (1 < iVar2) {
            piVar6 = (int *)(pcVar4 + 0xc);
          }
        }
      }
      if (((*piVar6 != 0) && (cVar3 = FUN_1401146b0(param_1), cVar3 == '\0')) &&
         (cVar3 = FUN_14011462e(param_1), cVar3 == '\0')) {
        iVar1 = *(int *)(param_1 + 0x10);
        piVar6 = (int *)&DAT_14c948618;
        piVar5 = &DAT_14c948620;
        if (((iVar1 != 0) && (*(int *)(param_1 + 0x14) != 0)) &&
           ((iVar1 != DAT_14c948000 && (4 < *(int *)(param_1 + 0x14))))) {
          piVar6 = (int *)(*(longlong *)(param_1 + 0x28) + 0x30);
          piVar5 = (int *)(*(longlong *)(param_1 + 0x28) + 0x38);
        }
        if ((*piVar6 != DAT_14cb7bef8) || (*piVar5 != DAT_14cb7bf00)) {
          piVar6 = (int *)&DAT_14c948618;
          if ((iVar1 != 0) &&
             (((*(int *)(param_1 + 0x14) != 0 && (iVar1 != DAT_14c948000)) &&
              (4 < *(int *)(param_1 + 0x14))))) {
            piVar6 = (int *)(*(longlong *)(param_1 + 0x28) + 0x30);
          }
          return CONCAT31((int3)((uint)iVar1 >> 8),*piVar6 != 0);
        }
      }
    }
  }
  return 0;
}



// FUNCTION 14011462e FUN_14011462e body=130 status=ok
// SIG undefined FUN_14011462e(void)

ulonglong FUN_14011462e(longlong param_1)

{
  int iVar1;
  uint3 uVar2;
  int *piVar3;
  int *piVar4;
  
  iVar1 = *(int *)(param_1 + 0x10);
  piVar4 = (int *)&DAT_14c948618;
  piVar3 = &DAT_14c948620;
  if ((((iVar1 != 0) && (*(int *)(param_1 + 0x14) != 0)) && (iVar1 != DAT_14c948000)) &&
     (3 < *(int *)(param_1 + 0x14))) {
    piVar4 = (int *)(*(longlong *)(param_1 + 0x28) + 0x24);
    piVar3 = (int *)(*(longlong *)(param_1 + 0x28) + 0x2c);
  }
  uVar2 = (uint3)((uint)iVar1 >> 8);
  if ((*piVar4 == DAT_14cb7bee0) && (*piVar3 == DAT_14cb7bee8)) {
    return CONCAT71((uint7)uVar2,1);
  }
  piVar4 = (int *)&DAT_14c948618;
  if (((iVar1 != 0) && (*(int *)(param_1 + 0x14) != 0)) &&
     ((iVar1 != DAT_14c948000 && (3 < *(int *)(param_1 + 0x14))))) {
    piVar4 = (int *)(*(longlong *)(param_1 + 0x28) + 0x24);
  }
  return (ulonglong)CONCAT31(uVar2,*piVar4 == 0);
}



// FUNCTION 1401146b0 FUN_1401146b0 body=130 status=ok
// SIG undefined FUN_1401146b0(void)

ulonglong FUN_1401146b0(longlong param_1)

{
  int iVar1;
  uint3 uVar2;
  int *piVar3;
  int *piVar4;
  
  iVar1 = *(int *)(param_1 + 0x10);
  piVar4 = (int *)&DAT_14c948618;
  piVar3 = &DAT_14c948620;
  if ((((iVar1 != 0) && (*(int *)(param_1 + 0x14) != 0)) && (iVar1 != DAT_14c948000)) &&
     (2 < *(int *)(param_1 + 0x14))) {
    piVar4 = (int *)(*(longlong *)(param_1 + 0x28) + 0x18);
    piVar3 = (int *)(*(longlong *)(param_1 + 0x28) + 0x20);
  }
  uVar2 = (uint3)((uint)iVar1 >> 8);
  if ((*piVar4 == DAT_14cb7bec8) && (*piVar3 == DAT_14cb7bed0)) {
    return CONCAT71((uint7)uVar2,1);
  }
  piVar4 = (int *)&DAT_14c948618;
  if (((iVar1 != 0) && (*(int *)(param_1 + 0x14) != 0)) &&
     ((iVar1 != DAT_14c948000 && (2 < *(int *)(param_1 + 0x14))))) {
    piVar4 = (int *)(*(longlong *)(param_1 + 0x28) + 0x18);
  }
  return (ulonglong)CONCAT31(uVar2,*piVar4 == 0);
}



// FUNCTION 140114752 FUN_140114752 body=61 status=ok
// SIG undefined FUN_140114752(void)

void FUN_140114752(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x720);
  if (*(longlong *)(param_1 + 0x720) == 0) {
    lVar1 = param_1;
  }
  FUN_14011478f(lVar1,*(undefined4 *)(param_1 + 0x728));
  if (*(longlong *)(param_1 + 0x720) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14011478f FUN_14011478f body=55 status=ok
// SIG undefined FUN_14011478f(void)

void FUN_14011478f(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x380);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0x72;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1401147c6 FUN_1401147c6 body=44 status=ok
// SIG undefined FUN_1401147c6(void)

int FUN_1401147c6(longlong param_1)

{
  int *piVar1;
  int iVar2;
  
  LOCK();
  piVar1 = (int *)(param_1 + 0x10);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 + -1 == 0) {
    (*(code *)**(undefined8 **)(param_1 + 8))(param_1 + 8,1);
  }
  return iVar2 + -1;
}



// FUNCTION 1401147fc FUN_1401147fc body=75 status=ok
// SIG undefined FUN_1401147fc(void)

longlong FUN_1401147fc(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140114848 FUN_140114848 body=240 status=ok
// SIG undefined FUN_140114848(void)

double * FUN_140114848(longlong *param_1,double *param_2,double *param_3,float param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  double local_68;
  double local_58;
  double local_50;
  double local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_78 = *(undefined4 *)param_3;
  uStack_74 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_70 = *(undefined4 *)(param_3 + 1);
  uStack_6c = *(undefined4 *)((longlong)param_3 + 0xc);
  local_68 = param_3[2];
  (**(code **)(*param_1 + 0x588))(local_78,&local_58);
  dVar1 = param_3[2];
  dVar3 = (double)param_4;
  dVar2 = param_3[1];
  dVar4 = (double)(param_4 * 0.5);
  *param_2 = (local_58 - *param_3) * dVar4 + dVar3 * *param_3;
  param_2[1] = (local_50 - dVar2) * dVar4 + dVar2 * dVar3;
  param_2[2] = (local_48 - dVar1) * dVar4 + dVar1 * dVar3;
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14011493a FUN_14011493a body=174 status=ok
// SIG undefined FUN_14011493a(void)

undefined8 FUN_14011493a(longlong *param_1,undefined8 param_2,double *param_3,float param_4)

{
  double dVar1;
  undefined1 auStack_98 [40];
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  (**(code **)(*param_1 + 0x5f0))(param_1,&local_58);
  dVar1 = (double)param_4;
  local_60 = local_48 * dVar1 + param_3[2];
  local_68 = local_50 * dVar1 + param_3[1];
  local_70 = dVar1 * local_58 + *param_3;
  FUN_1401149ea(param_1,param_2);
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401149ea FUN_1401149ea body=273 status=ok
// SIG undefined FUN_1401149ea(void)

undefined8 FUN_1401149ea(longlong *param_1,undefined8 param_2,double *param_3)

{
  double dVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  double local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  fVar2 = (float)(**(code **)(*param_1 + 0x480))();
  if (0.0 < fVar2) {
    dVar3 = DAT_14c8464e8;
    dVar4 = DAT_14c8464f0;
    dVar1 = DAT_14c8464e0;
    if (0.0001 <= fVar2) {
      dVar5 = (double)fVar2;
      dVar1 = *param_3;
      dVar3 = param_3[1];
      dVar4 = param_3[2];
      dVar6 = dVar4 * dVar4 + dVar1 * dVar1 + dVar3 * dVar3;
      if (dVar5 * dVar5 < dVar6) {
        dVar5 = (1.0 / SQRT(dVar6)) * dVar5;
        dVar3 = dVar3 * dVar5;
        dVar4 = dVar4 * dVar5;
        dVar1 = dVar1 * dVar5;
      }
    }
    *param_3 = dVar1;
    param_3[1] = dVar3;
    param_3[2] = dVar4;
  }
  local_28 = param_3[2];
  local_38 = *(undefined4 *)param_3;
  uStack_34 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_30 = *(undefined4 *)(param_3 + 1);
  uStack_2c = *(undefined4 *)((longlong)param_3 + 0xc);
  (**(code **)(*param_1 + 0x550))(param_1,param_2);
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140114b06 FUN_140114b06 body=175 status=ok
// SIG undefined FUN_140114b06(void)

void FUN_140114b06(longlong param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  if ((*(byte *)(param_1 + 0x170) & 0x10) != 0) {
    dVar1 = *(double *)(param_1 + 0x148);
    dVar2 = *(double *)(param_1 + 0x150);
    dVar3 = param_3[2] * dVar2 + *param_3 * *(double *)(param_1 + 0x140) + param_3[1] * dVar1;
    *param_3 = *param_3 - dVar3 * *(double *)(param_1 + 0x140);
    param_3[1] = param_3[1] - dVar1 * dVar3;
    param_3[2] = param_3[2] - dVar2 * dVar3;
  }
  param_2[2] = param_3[2];
  dVar1 = param_3[1];
  *param_2 = *param_3;
  param_2[1] = dVar1;
  return;
}



// FUNCTION 140114bb6 FUN_140114bb6 body=98 status=ok
// SIG undefined FUN_140114bb6(void)

undefined8 *
FUN_140114bb6(undefined8 *param_1,undefined8 param_2,longlong *param_3,undefined8 param_4,
             undefined8 param_5)

{
  longlong *plVar1;
  
  FUN_140114c18(param_1,param_2,param_5);
  param_1[0x33] = param_4;
  *(undefined1 *)(param_1 + 0x40) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 2;
  *param_1 = &PTR_FUN_14aaeb7f0;
  plVar1 = (longlong *)*param_3;
  param_1[0x41] = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 0x42) = (int)param_3[1];
  return param_1;
}



// FUNCTION 140114c18 FUN_140114c18 body=358 status=ok
// SIG undefined FUN_140114c18(void)

void FUN_140114c18(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_LAB_14a8bd0e0;
  uVar1 = param_2[1];
  param_1[1] = *param_2;
  param_1[2] = uVar1;
  param_1[5] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[6] = &DAT_3f8000003f800000;
  param_1[7] = &DAT_3f8000003f800000;
  *param_1 = &PTR_LAB_14aaeb7a0;
  param_1[8] = 0x3f80000000000000;
  *(byte *)(param_1 + 9) = *(byte *)(param_1 + 9) & 0xfc;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0x3f80000000000000;
  uVar1 = DAT_14c8463f8;
  param_1[0x13] = DAT_14c8463f0;
  param_1[0x14] = uVar1;
  uVar1 = DAT_14c8463f8;
  param_1[0x15] = DAT_14c8463f0;
  param_1[0x16] = uVar1;
  *(undefined2 *)(param_1 + 0x17) = 0;
  *(undefined1 *)((longlong)param_1 + 0xba) = 0;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0x3f80000000000000;
  *(undefined1 *)((longlong)param_1 + 0xcc) = 1;
  param_1[0x1c] = &PTR_LAB_14a8bd0e0;
  uVar1 = param_2[1];
  param_1[0x1d] = *param_2;
  param_1[0x1e] = uVar1;
  param_1[0x21] = 0;
  *(undefined1 *)(param_1 + 0x20) = 0;
  param_1[0x1f] = 0;
  param_1[0x22] = &DAT_3f8000003f800000;
  param_1[0x23] = &DAT_3f8000003f800000;
  param_1[0x1c] = &PTR_FUN_14aaeb770;
  uVar1 = DAT_14c8463f8;
  param_1[0x24] = DAT_14c8463f0;
  param_1[0x25] = uVar1;
  *(undefined4 *)(param_1 + 0x26) = 0x3f800000;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0x3ff0000000000000;
  param_1[0x2a] = 0x3ff0000000000000;
  param_1[0x2b] = DAT_14ca94e18;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  uVar1 = DAT_14c8463f8;
  param_1[0x30] = DAT_14c8463f0;
  param_1[0x31] = uVar1;
  uVar1 = param_3[1];
  param_1[0x22] = *param_3;
  param_1[0x23] = uVar1;
  uVar1 = param_3[1];
  param_1[6] = *param_3;
  param_1[7] = uVar1;
  param_1[0x1a] = 0x3ff0000000000000;
  param_1[0x1b] = 0x3ff0000000000000;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 2;
  return;
}



// FUNCTION 140114d7e FUN_140114d7e body=69 status=ok
// SIG undefined FUN_140114d7e(void)

longlong FUN_140114d7e(longlong param_1,longlong param_2)

{
  FUN_140114dc4();
  FUN_140114e1c(param_1 + 0x10,param_2 + 0x10);
  FUN_140114ece(param_1 + 0x20,param_2 + 0x20);
  FUN_140114e74(param_1 + 0x30,param_2 + 0x30);
  return param_1;
}



// FUNCTION 140114dc4 FUN_140114dc4 body=88 status=ok
// SIG undefined FUN_140114dc4(void)

undefined8 * FUN_140114dc4(undefined8 *param_1,undefined8 *param_2)

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
      FUN_140114f2c(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 5);
      }
    }
  }
  return param_1;
}



// FUNCTION 140114e1c FUN_140114e1c body=88 status=ok
// SIG undefined FUN_140114e1c(void)

undefined8 * FUN_140114e1c(undefined8 *param_1,undefined8 *param_2)

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
      FUN_140115004(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 140114e74 FUN_140114e74 body=89 status=ok
// SIG undefined FUN_140114e74(void)

undefined8 * FUN_140114e74(undefined8 *param_1,undefined8 *param_2)

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
      FUN_146fdf2d8(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x60);
      }
    }
  }
  return param_1;
}



// FUNCTION 140114ece FUN_140114ece body=93 status=ok
// SIG undefined FUN_140114ece(void)

undefined8 * FUN_140114ece(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1400bc89a(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_146fdf18a(param_1,iVar1);
      FUN_146fdf1fd(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 140114f2c FUN_140114f2c body=216 status=ok
// SIG undefined FUN_140114f2c(void)

void FUN_140114f2c(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = (longlong)param_2 * 0x20;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar2 < 0x7ff1) {
          uVar2 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)
                                        [((longlong)param_2 & 0x7ffffffffffffffU) * 2]];
        }
        else {
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar2 = -uVar3 & (uVar2 + uVar3) - 1;
        }
      }
      else {
        uVar2 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar2,8);
      }
    }
    iVar1 = (int)(uVar2 >> 5);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar4 = iVar1;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x20,8);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 140115004 FUN_140115004 body=317 status=ok
// SIG undefined FUN_140115004(void)

void FUN_140115004(longlong param_1,int param_2,int param_3)

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
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140115072;
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
        uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,4);
      }
    }
LAB_140115072:
    iVar4 = (int)(uVar5 >> 3);
    iVar7 = 0x7fffffff;
    if (param_2 <= iVar4) {
      iVar7 = iVar4;
    }
  }
  if (param_3 < iVar7) {
    FUN_1446f8d3c(param_1,0,iVar7,8,4);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 140115142 FUN_140115142 body=159 status=ok
// SIG undefined FUN_140115142(void)

undefined8 FUN_140115142(longlong *param_1,ulonglong param_2)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 +
                    ((longlong)(int)(uVar2 >> 0x10 ^ uVar2) & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(ulonglong *)(*param_1 + (longlong)iVar1 * 0x10) == param_2) {
          FUN_147aace44(param_1,iVar1);
          return 1;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x10 + *param_1 + 8);
      } while (iVar1 != -1);
    }
  }
  return 0;
}



// FUNCTION 1401151e2 FUN_1401151e2 body=117 status=ok
// SIG undefined FUN_1401151e2(void)

void FUN_1401151e2(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  *(int *)(param_1 + 0x88) = param_3;
  if (param_3 != 0) {
    FUN_140115258(param_1,param_3);
    lVar1 = *(longlong *)(param_1 + 0x80);
    if (*(longlong *)(param_1 + 0x80) == 0) {
      lVar1 = param_1;
    }
    if (param_3 != 0) {
      lVar2 = 0;
      do {
        *(undefined8 *)(lVar1 + lVar2 * 8) = *(undefined8 *)(param_2 + lVar2 * 8);
        lVar2 = lVar2 + 1;
      } while (param_3 != (int)lVar2);
    }
    return;
  }
  *(undefined4 *)(param_1 + 0x8c) = 0x10;
  return;
}



// FUNCTION 140115258 FUN_140115258 body=98 status=ok
// SIG undefined FUN_140115258(void)

void FUN_140115258(longlong param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    iVar3 = 0x10;
    if (0x10 < param_2) {
      iVar4 = 0;
      uVar2 = FUN_144a3809e((longlong)(int)param_2 << 3,0);
      iVar1 = (int)(uVar2 >> 3);
      iVar3 = 0x7fffffff;
      if (((int)param_2 <= iVar1) && (iVar3 = iVar1, iVar1 < 1)) goto LAB_140115282;
    }
    FUN_1401152ba(param_1,0,iVar3);
    iVar4 = iVar3;
  }
LAB_140115282:
  *(int *)(param_1 + 0x8c) = iVar4;
  return;
}



// FUNCTION 1401152ba FUN_1401152ba body=140 status=ok
// SIG undefined FUN_1401152ba(void)

void FUN_1401152ba(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x80);
  if ((uint)param_3 < 0x11) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x80,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 0x80),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x80,param_2,param_3,8);
  return;
}



// FUNCTION 140115346 FUN_140115346 body=12 status=ok
// SIG undefined FUN_140115346(void)

undefined8 FUN_140115346(longlong param_1)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  longlong lStack_18;
  ulonglong uStack_10;
  
  if (param_1 == 0) {
    return 0;
  }
  uStack_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lStack_18 = FUN_140115408();
  if ((lStack_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lStack_18);
  }
  uVar1 = FUN_1401153bc(param_1 + 0x870,&lStack_18);
  if ((uStack_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140115352 FUN_140115352 body=105 status=ok
// SIG undefined FUN_140115352(void)

void FUN_140115352(longlong param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_140115408();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  FUN_1401153bc(param_1 + 0x870,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401153bc FUN_1401153bc body=76 status=ok
// SIG undefined FUN_1401153bc(void)

void FUN_1401153bc(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_140115408();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_1401153f9;
    }
  }
  lVar2 = 0;
LAB_1401153f9:
  FUN_1448a6f9c(param_1,lVar2);
  return;
}



// FUNCTION 140115408 FUN_140115408 body=228 status=ok
// SIG undefined FUN_140115408(void)

longlong FUN_140115408(void)

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
  if (DAT_14cb57280 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14588a134;
    local_38 = &LAB_14863f0ad;
    local_40 = &LAB_145cc4eea;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x1e8;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxDialogSubsystem",&DAT_14cb57280,&DAT_14863f0ac);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb57280;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401154ee FUN_1401154ee body=169 status=ok
// SIG undefined FUN_1401154ee(void)

undefined4 FUN_1401154ee(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48;
  ulonglong uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0;
  uStack_40 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x38));
  FUN_140115598(&local_48,param_1 + 0x10);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x38));
  uVar1 = FUN_140115706(&local_48,param_2,param_3,param_4);
  FUN_14482b2f5(local_48,uStack_40 & 0xffffffff);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140115598 FUN_140115598 body=95 status=ok
// SIG undefined FUN_140115598(void)

void FUN_140115598(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_2 + 1);
  if (uVar1 != 0) {
    iVar2 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_1401155f8(param_1,iVar2);
    }
    FUN_14482b331((longlong)iVar2 * 0x10 + *param_1,*param_2,uVar1);
    return;
  }
  return;
}



// FUNCTION 1401155f8 FUN_1401155f8 body=269 status=ok
// SIG undefined FUN_1401155f8(void)

void FUN_1401155f8(longlong param_1,int param_2)

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



// FUNCTION 140115706 FUN_140115706 body=425 status=ok
// SIG undefined FUN_140115706(void)

ulonglong FUN_140115706(longlong *param_1,undefined8 param_2,longlong *param_3,undefined8 param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  char cVar4;
  uint uVar5;
  undefined1 *puVar6;
  uint *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_98 [40];
  longlong local_70 [2];
  undefined1 local_60 [8];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_140056680(local_70);
  FUN_1401ae5e4(local_70);
  local_58 = (undefined1 *)0x0;
  local_50 = 0x100000000;
  if (0 < (int)param_1[1]) {
    lVar10 = 0;
    do {
      puVar2 = *(undefined8 **)(*param_1 + 8 + lVar10 * 0x10);
      if (puVar2 != (undefined8 *)0x0) {
        puVar7 = (uint *)(*param_1 + lVar10 * 0x10);
        if (0 < (longlong)(int)local_50) {
          puVar6 = local_58;
          if (local_58 == (undefined1 *)0x0) {
            puVar6 = local_60;
          }
          lVar9 = 0;
          do {
            if ((*puVar7 < **(uint **)(puVar6 + lVar9)) &&
               (*(int *)(*(longlong *)(*(uint **)(puVar6 + lVar9) + 2) + 0x218) ==
                *(int *)(puVar2 + 0x43))) goto LAB_140115817;
            lVar9 = lVar9 + 8;
          } while ((longlong)(int)local_50 * 8 != lVar9);
        }
        cVar4 = FUN_142b0a888(puVar2,local_70);
        uVar8 = local_50;
        if (cVar4 == '\x02') {
          lVar9 = (longlong)(int)local_50;
          uVar5 = (int)local_50 + 1;
          local_50 = CONCAT44(local_50._4_4_,uVar5);
          if (local_50._4_4_ < uVar5) {
            FUN_147082474(local_60,uVar8 & 0xffffffff);
          }
          puVar6 = local_58;
          if (local_58 == (undefined1 *)0x0) {
            puVar6 = local_60;
          }
          *(uint **)(puVar6 + lVar9 * 8) = puVar7;
        }
        else if (cVar4 == '\x01') {
          uVar8 = CONCAT71((int7)((ulonglong)param_4 >> 8),1);
          if ((param_3 != (longlong *)0x0) && (puVar3 = (undefined8 *)*param_3, puVar3 != puVar2)) {
            *param_3 = (longlong)puVar2;
            LOCK();
            *(int *)(puVar2 + 1) = *(int *)(puVar2 + 1) + 1;
            UNLOCK();
            if (puVar3 != (undefined8 *)0x0) {
              LOCK();
              piVar1 = (int *)(puVar3 + 1);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)*puVar3)(puVar3,1);
              }
            }
          }
          goto LAB_140115838;
        }
      }
LAB_140115817:
      lVar10 = lVar10 + 1;
    } while (lVar10 < (int)param_1[1]);
  }
  uVar8 = 0;
LAB_140115838:
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if (local_70[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8 & 0xffffffff;
}



// FUNCTION 1401158b0 FUN_1401158b0 body=71 status=ok
// SIG undefined FUN_1401158b0(void)

undefined1 FUN_1401158b0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  undefined1 uVar2;
  undefined2 *puVar3;
  
  cVar1 = FUN_1401158f8(param_1 + 0x10);
  if (cVar1 != '\0') {
    return 1;
  }
  if (*(int *)(param_1 + 0x20) == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  else {
    puVar3 = *(undefined2 **)(param_1 + 0x18);
  }
  uVar2 = FUN_140115ae4(*(undefined8 *)(param_1 + 0x28),puVar3,param_3);
  return uVar2;
}



// FUNCTION 1401158f8 FUN_1401158f8 body=491 status=ok
// SIG undefined FUN_1401158f8(void)

ulonglong FUN_1401158f8(longlong *param_1,wchar_t *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  size_t sVar4;
  ushort uVar5;
  uint uVar6;
  ulonglong uVar7;
  ushort uVar8;
  undefined7 uVar9;
  undefined2 *puVar10;
  longlong *plVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  uint uVar15;
  longlong lVar16;
  ulonglong uVar17;
  undefined1 auStack_68 [44];
  undefined1 local_3c [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar1 = param_1 + 1;
  *(undefined4 *)(param_1 + 2) = 0;
  if (*(int *)((longlong)param_1 + 0x14) < 0) {
    FUN_1446f8c06(plVar1,0);
  }
  if ((undefined2 *)*plVar1 != (undefined2 *)0x0) {
    *(undefined2 *)*plVar1 = 0;
  }
  sVar4 = wcslen(param_2);
  FUN_1400020e8(plVar1,param_2,sVar4 & 0xffffffff);
  FUN_1401ae5e4(plVar1);
  plVar3 = (longlong *)*param_1;
  iVar2 = (int)param_1[2];
  uVar15 = 0;
  iVar12 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar12 = 0;
  }
  if (0 < iVar12) {
    if (iVar2 == 0) {
      puVar10 = &DAT_149dfb77a;
    }
    else {
      puVar10 = (undefined2 *)*plVar1;
    }
    lVar14 = 0;
    param_1 = (longlong *)&DAT_14c75d150;
    do {
      uVar6 = ((uint)(ushort)puVar10[lVar14] + (uint)(0x19 < (ushort)puVar10[lVar14] - 0x61) * 0x20)
              - 0x20;
      uVar15 = uVar15 >> 8 ^ *(uint *)(&DAT_14c75d150 + (ulonglong)((uVar15 ^ uVar6) & 0xff) * 4);
      uVar15 = uVar15 >> 8 ^
               *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar15 & 0xff ^ uVar6 >> 8 & 0xff) * 4);
      lVar14 = lVar14 + 1;
    } while (iVar12 != (int)lVar14);
  }
  if ((int)plVar3[1] != *(int *)((longlong)plVar3 + 0x34)) {
    plVar11 = plVar3 + 7;
    if ((longlong *)plVar3[8] != (longlong *)0x0) {
      plVar11 = (longlong *)plVar3[8];
    }
    iVar12 = *(int *)((longlong)plVar11 + (ulonglong)((int)plVar3[9] - 1U & uVar15) * 4);
    if (iVar12 != -1) {
      lVar14 = *plVar3;
LAB_140115a1f:
      lVar13 = (longlong)iVar12;
      iVar12 = *(int *)(lVar14 + 8 + lVar13 * 0x18);
      uVar9 = (undefined7)((ulonglong)param_1 >> 8);
      if (iVar12 == iVar2) {
        param_1 = (longlong *)CONCAT71(uVar9,1);
        if (1 < iVar2) {
          lVar16 = 0;
          do {
            uVar5 = *(ushort *)(*(longlong *)(lVar14 + lVar13 * 0x18) + lVar16);
            uVar7 = (ulonglong)uVar5;
            uVar8 = *(ushort *)(*plVar1 + lVar16);
            if (uVar5 == uVar8) {
              if (uVar5 == 0) break;
            }
            else {
              if (0x7f < (uVar8 | uVar5)) goto LAB_140115a85;
              uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
              uVar17 = (ulonglong)uVar8;
              uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar17];
              if ((&DAT_149e05da0)[uVar7] != (&DAT_149e05da0)[uVar17]) goto LAB_140115a85;
            }
            lVar16 = lVar16 + 2;
          } while( true );
        }
      }
      else {
        if (iVar12 + iVar2 != 1) goto LAB_140115a41;
        param_1 = (longlong *)CONCAT71(uVar9,1);
      }
      goto LAB_140115a9f;
    }
  }
LAB_140115a8d:
  param_1 = (longlong *)0x0;
  FUN_14482b35e(plVar3,local_3c,plVar1,0);
LAB_140115a9f:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return (ulonglong)param_1 & 0xffffffff;
LAB_140115a85:
  if (uVar5 == uVar8) goto LAB_140115a9f;
LAB_140115a41:
  iVar12 = *(int *)(lVar14 + 0x10 + lVar13 * 0x18);
  if (iVar12 == -1) goto LAB_140115a8d;
  goto LAB_140115a1f;
}



// FUNCTION 140115ae4 FUN_140115ae4 body=144 status=ok
// SIG undefined FUN_140115ae4(void)

undefined8 FUN_140115ae4(longlong *param_1,wchar_t *param_2,undefined4 param_3)

{
  char cVar1;
  size_t sVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [32];
  undefined1 local_48 [16];
  wchar_t *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = param_2;
  if (param_2 == (wchar_t *)0x0) {
    local_30 = 0;
  }
  else {
    sVar2 = wcslen(param_2);
    local_30 = (int)sVar2;
  }
  FUN_140115b7a(local_48);
  cVar1 = (**(code **)(*param_1 + 8))(param_1,local_48);
  if (cVar1 == '\0') {
    uVar3 = 1;
  }
  else {
    uVar3 = (**(code **)(*param_1 + 0x10))(param_1,param_2,param_3);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140115b7a FUN_140115b7a body=98 status=ok
// SIG undefined FUN_140115b7a(void)

void FUN_140115b7a(longlong *param_1,longlong *param_2)

{
  short sVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  
  iVar2 = (int)param_2[1];
  lVar3 = *param_2;
  uVar6 = (longlong)iVar2 * 2;
  do {
    if (uVar6 == 0) goto LAB_140115bd5;
    sVar1 = *(short *)(lVar3 + -2 + uVar6);
    uVar6 = uVar6 - 2;
  } while ((sVar1 != 0x2f) && (sVar1 != 0x5c));
  if (lVar3 + uVar6 != 0) {
    iVar5 = ~(uint)(uVar6 >> 1) + iVar2;
    if (iVar2 <= iVar5) {
      iVar5 = iVar2;
    }
    iVar4 = 0;
    if (0 < iVar5) {
      iVar4 = iVar5;
    }
    *param_1 = (lVar3 + (longlong)iVar2 * 2) - (ulonglong)(uint)(iVar4 * 2);
    *(int *)(param_1 + 1) = iVar4;
    return;
  }
LAB_140115bd5:
  lVar3 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = lVar3;
  return;
}



// FUNCTION 140115bdc FUN_140115bdc body=54 status=ok
// SIG undefined FUN_140115bdc(void)

longlong * FUN_140115bdc(longlong *param_1,longlong param_2)

{
  (**(code **)(*param_1 + 0x20))(param_1,0);
  param_1[1] = *(longlong *)(param_2 + 8);
  FUN_1406022fe(param_1 + 2,param_2 + 0x10);
  return param_1;
}



// FUNCTION 140115c12 FUN_140115c12 body=307 status=ok
// SIG undefined FUN_140115c12(void)

void FUN_140115c12(longlong param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar5 = 0;
  if (param_2 != 0) {
    uVar3 = (longlong)param_2 * 8;
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
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_140115ca6;
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
LAB_140115ca6:
    uVar5 = 0x7fffffff;
    if (param_2 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar5 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar5,8,8);
  }
  return;
}



// FUNCTION 140115d46 FUN_140115d46 body=154 status=ok
// SIG undefined FUN_140115d46(void)

void FUN_140115d46(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((param_2 != 0) && (*(longlong *)(param_1 + 0x678) != param_2)) {
    *(longlong *)(param_1 + 0x678) = param_2;
    FUN_1488660a8(param_1 + 0x5d0);
    iVar1 = *(int *)(param_1 + 0x658);
    if ((longlong)iVar1 != 0) {
      lVar2 = *(longlong *)(param_1 + 0x650);
      lVar3 = 0;
      local_30 = param_1;
      do {
        if (*(longlong *)(lVar2 + lVar3) != 0) {
          FUN_143d54f38(&local_30);
        }
        lVar3 = lVar3 + 8;
      } while ((longlong)iVar1 * 8 != lVar3);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140115de2 FUN_140115de2 body=65 status=ok
// SIG undefined FUN_140115de2(void)

void FUN_140115de2(longlong param_1)

{
  longlong lVar1;
  
  FUN_140115e24();
  if (param_1 != 0) {
    lVar1 = param_1;
    while ((*(uint *)(lVar1 + 8) & 0x30) == 0) {
      lVar1 = *(longlong *)(lVar1 + 0x20);
      if (lVar1 == 0) {
        FUN_1404d4eb0(param_1 + 0x408,param_1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140115e24 FUN_140115e24 body=186 status=ok
// SIG undefined FUN_140115e24(void)

void FUN_140115e24(longlong param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(**(longlong **)(param_1 + 0x10) + 0x390);
  if (pcVar1 != (code *)&LAB_1427dd5fe) {
    (*pcVar1)(*(longlong **)(param_1 + 0x10),param_1,1,0,0);
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951808) {
    FUN_144b3d300(&DAT_14c951808);
    if (DAT_14c951808 == -1) {
      FUN_145dfc00c(&DAT_14c951778);
      atexit((_func_5014 *)&LAB_142809c19);
      _Init_thread_footer(&DAT_14c951808);
    }
  }
  *(byte *)(param_1 + 0x68) = *(byte *)(param_1 + 99) >> 3 & 1;
  if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
    FUN_140115ede(param_1);
    return;
  }
  return;
}



// FUNCTION 140115ede FUN_140115ede body=255 status=ok
// SIG undefined FUN_140115ede(void)

void FUN_140115ede(longlong param_1)

{
  int iVar1;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  longlong local_40;
  code *local_38;
  longlong *local_30;
  code *local_28;
  code **local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140116012(param_1 + 0x240);
  if (*(int *)(param_1 + 0x23c) < 0) {
    *(undefined4 *)(param_1 + 0x238) = 0;
    FUN_1417970e8(param_1 + 0x230,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x238) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x22c);
  FUN_140115fde(*(undefined8 *)(param_1 + 0x220),*(undefined4 *)(param_1 + 0x228));
  *(undefined4 *)(param_1 + 0x228) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0x22c) != 0)) {
    FUN_1478c59c6(param_1 + 0x220,0);
  }
  local_30 = &local_40;
  local_20 = &local_38;
  local_38 = FUN_1433bed72;
  local_28 = FUN_1449cc908;
  local_48 = 0x200000;
  local_40 = param_1;
  FUN_14482c30e(param_1,&local_28,CONCAT71((int7)((ulonglong)local_20 >> 8),1),0);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140115fde FUN_140115fde body=51 status=ok
// SIG undefined FUN_140115fde(void)

void FUN_140115fde(longlong param_1,int param_2)

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



// FUNCTION 140116012 FUN_140116012 body=68 status=ok
// SIG undefined FUN_140116012(void)

void FUN_140116012(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_14482c13a();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_14474875a(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 140116056 FUN_140116056 body=354 status=ok
// SIG undefined FUN_140116056(void)

void FUN_140116056(longlong param_1,int param_2)

{
  ulonglong uVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar6;
  
  uVar3 = *(uint *)(param_1 + 0x10);
  if ((int)uVar3 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (uVar3 < 2) {
    iVar9 = 1;
  }
  else {
    if (*(uint *)(param_1 + 0x14) < 2) {
      uVar4 = 4;
      if (4 < uVar3) {
        uVar4 = uVar3;
      }
      lVar6 = (longlong)(int)uVar4;
    }
    else {
      lVar6 = ((ulonglong)((longlong)(int)uVar3 * 3) >> 3) + (longlong)(int)uVar3 + 0x10;
    }
    uVar7 = lVar6 * 8;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar7 + 0xf;
        if (uVar7 < 0x7ff1) {
          uVar7 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar1 >> 4];
            uVar8 = 0x32;
            if (0x32 < bVar2) {
              uVar8 = (ulonglong)bVar2;
            }
            uVar10 = 0x32 - (ulonglong)bVar2;
            do {
              uVar7 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar10 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar10 & 0xffffffff] & 0xf) == 0) goto LAB_1401160e4;
              lVar6 = uVar8 + 1 + uVar10;
              uVar10 = uVar10 - 1;
            } while (lVar6 != 0x33);
          }
          uVar7 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar7 = (ulonglong)DAT_14c841df8;
          }
          uVar7 = -uVar7 & ((uVar1 & 0xfffffffffffffff0) + uVar7) - 1;
        }
      }
      else {
        uVar7 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar7,0);
      }
    }
LAB_1401160e4:
    iVar5 = (int)(uVar7 >> 3);
    iVar9 = 0x7fffffff;
    if ((int)uVar3 <= iVar5) {
      iVar9 = iVar5;
    }
  }
  *(int *)(param_1 + 0x14) = iVar9;
  FUN_1401161b8(param_1,param_2);
  return;
}



// FUNCTION 1401161b8 FUN_1401161b8 body=131 status=ok
// SIG undefined FUN_1401161b8(void)

void FUN_1401161b8(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 8);
  if ((uint)param_3 < 2) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 8,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 8),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 8,param_2,param_3,8);
  return;
}



// FUNCTION 14011623c FUN_14011623c body=193 status=ok
// SIG undefined FUN_14011623c(void)

void FUN_14011623c(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_48 [40];
  longlong local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0xde0) == '\0') {
    lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    *(undefined1 *)(lVar1 + 0xde0) = 1;
    *(undefined8 *)(lVar1 + 0xdd0) = 0;
    *(undefined8 *)(lVar1 + 0xdd8) = 0;
    __tlregdtor(&LAB_14284e3c5);
  }
  local_18 = &local_20;
  local_20 = param_1;
  FUN_1401162fe(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0xdd0);
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401162fe FUN_1401162fe body=212 status=ok
// SIG undefined FUN_1401162fe(void)

int FUN_1401162fe(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  
  iVar5 = (int)param_1[1];
  lVar6 = (longlong)iVar5;
  if (lVar6 == 0) {
    iVar5 = 0;
  }
  else {
    plVar1 = (longlong *)*param_1;
    iVar4 = 0;
    bVar11 = *plVar1 == *(longlong *)*param_2;
    iVar8 = 0;
    do {
      lVar3 = (longlong)iVar8;
      iVar9 = iVar8;
      lVar7 = lVar3;
      iVar2 = iVar8 + 1;
      if (iVar8 + 1 < iVar5) {
        iVar2 = iVar5;
      }
      do {
        lVar7 = lVar7 + 1;
        iVar10 = iVar2;
        if (lVar6 <= lVar7) break;
        iVar10 = iVar9 + 1;
        iVar9 = iVar10;
      } while (bVar11 == (plVar1[lVar7] == *(longlong *)*param_2));
      if (bVar11 == false) {
        if (iVar4 != iVar8) {
          memmove(plVar1 + iVar4,plVar1 + lVar3,(longlong)(iVar10 - iVar8) << 3);
        }
        iVar4 = iVar4 + (iVar10 - iVar8);
      }
      bVar11 = (bool)(bVar11 ^ 1);
      iVar8 = iVar10;
    } while (lVar7 < lVar6);
    *(int *)(param_1 + 1) = iVar4;
    iVar5 = iVar5 - iVar4;
  }
  return iVar5;
}



// FUNCTION 1401163d2 FUN_1401163d2 body=48 status=ok
// SIG undefined FUN_1401163d2(void)

void FUN_1401163d2(longlong param_1,undefined8 param_2)

{
  FUN_1401164ba(param_1 + -0x650);
  FUN_140116402(param_1 + 0x1e0,param_2);
  return;
}



// FUNCTION 140116402 FUN_140116402 body=182 status=ok
// SIG undefined FUN_140116402(void)

void FUN_140116402(undefined8 param_1,longlong *param_2)

{
  undefined1 auStack_f8 [32];
  longlong local_d8;
  longlong local_d0;
  undefined1 local_c8 [176];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_d8 = *param_2;
  if (DAT_14c950c29 == 1) {
    if (local_d8 == 0) {
      local_d8 = 0;
    }
    else {
      FUN_1456cec3c();
      local_d8 = *param_2;
    }
  }
  local_d0 = param_2[1];
  if ((DAT_14c950c29 & 1) != 0) {
    if (local_d0 == 0) {
      local_d0 = 0;
    }
    else {
      FUN_1456cec3c();
      local_d0 = param_2[1];
    }
  }
  memcpy(local_c8,param_2 + 2,0xb0);
  FUN_1447cd2ec(param_1,&local_d8);
  if ((local_18 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401164ba FUN_1401164ba body=211 status=ok
// SIG undefined FUN_1401164ba(void)

void FUN_1401164ba(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  longlong local_d0;
  undefined1 local_c8 [176];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_d8 = *param_2;
  if (DAT_14c950c29 == 1) {
    if (local_d8 == 0) {
      local_d8 = 0;
    }
    else {
      FUN_1456cec3c();
      local_d8 = *param_2;
    }
  }
  local_d0 = param_2[1];
  if ((DAT_14c950c29 & 1) != 0) {
    if (local_d0 == 0) {
      local_d0 = 0;
    }
    else {
      FUN_1456cec3c();
      local_d0 = param_2[1];
    }
  }
  memcpy(local_c8,param_2 + 2,0xb0);
  uVar1 = FUN_14477b072(param_1,DAT_14caa9498);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_d8);
  if ((local_18 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401165ae FUN_1401165ae body=1459 status=ok
// SIG undefined FUN_1401165ae(void)

void FUN_1401165ae(undefined **param_1,longlong *param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  ulonglong *puVar4;
  undefined4 *puVar5;
  int *piVar6;
  longlong *plVar7;
  char cVar8;
  undefined **ppuVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  size_t _Size;
  undefined1 auStack_1b8 [32];
  longlong local_198;
  undefined4 local_190;
  undefined8 local_188;
  undefined **local_178;
  longlong local_170;
  longlong local_168;
  char local_159;
  undefined *local_158;
  undefined8 uStack_150;
  undefined **local_148;
  undefined8 uStack_140;
  byte local_120;
  longlong *local_f0;
  longlong local_d0;
  undefined8 local_b8;
  longlong *local_b0;
  undefined8 local_a8;
  longlong local_98;
  ulonglong uStack_90;
  int local_7c;
  undefined **local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  cVar8 = (**(code **)(*param_2 + 0x38))(param_2);
  if (cVar8 == '\0') {
    ppuVar1 = param_1 + 0x19;
    ppuVar2 = param_1 + 0x14;
    do {
      local_159 = '\0';
      (**(code **)(*param_2 + 0x178))(param_2,&local_159);
      if (local_159 == '\0') {
        local_148 = (undefined **)0x0;
        uStack_140 = 0;
        FUN_140116cd4(param_2,&local_148);
        lVar11 = (longlong)(int)(uint)uStack_140;
        ppuVar9 = local_148;
        if (lVar11 != 0) {
          iVar12 = *(int *)(param_1 + 0x1a);
          *(uint *)(param_1 + 0x1a) = iVar12 + (uint)uStack_140;
          if ((uint)(*(int *)((longlong)param_1 + 0xd4) - iVar12) < (uint)uStack_140) {
            FUN_140116b62(ppuVar1,iVar12);
          }
          memcpy(*ppuVar1 + (longlong)iVar12 * 0x68,local_148,lVar11 * 0x68);
          ppuVar9 = local_148;
        }
LAB_140116690:
        if (ppuVar9 != (undefined **)0x0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*(char *)(param_1 + 0x15) != '\0') {
          local_78 = (undefined **)0x0;
          uStack_70 = 0;
          local_7c = 0;
          puVar4 = (ulonglong *)param_2[1];
          piVar6 = (int *)*puVar4 + 1;
          if ((int *)puVar4[1] < piVar6) {
            if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
              (**(code **)(*param_2 + 0x170))(param_2);
            }
            else {
              FUN_14572512c(param_2);
            }
          }
          else {
            local_7c = *(int *)*puVar4;
            *puVar4 = (ulonglong)piVar6;
          }
          uStack_70 = CONCAT44(uStack_70._4_4_,local_7c);
          if (local_7c != 0) {
            FUN_1447403be(&local_78,0);
          }
          local_178 = param_1 + 0x12;
          (**(code **)(*param_2 + 0x170))(param_2);
          _Size = (size_t)(int)(uint)uStack_70;
          if (_Size != 0) {
            iVar12 = *(int *)(param_1 + 0x13);
            *(uint *)(param_1 + 0x13) = iVar12 + (uint)uStack_70;
            if ((uint)(*(int *)((longlong)param_1 + 0x9c) - iVar12) < (uint)uStack_70) {
              FUN_1447403be(local_178,iVar12);
            }
            memcpy(*local_178 + iVar12,local_78,_Size);
          }
          iVar12 = *(int *)(param_1 + 0x13);
          ppuVar9 = local_78;
          if (iVar12 == *(int *)(param_1 + 0x14)) {
            *(undefined1 *)(param_1 + 0x15) = 0;
            local_98 = 0;
            uStack_90 = (ulonglong)*(uint *)((longlong)param_1 + 0xa4);
            if (*(uint *)((longlong)param_1 + 0xa4) == 0) {
              lVar11 = 0;
            }
            else {
              FUN_1447403be(&local_98,0);
              iVar12 = *(int *)(param_1 + 0x13);
              lVar11 = (longlong)(int)uStack_90;
            }
            puVar3 = *local_178;
            lVar10 = local_98;
            if (DAT_14c87ead8 == '\0') {
              local_170 = lVar11;
              local_168 = local_98;
              FUN_140024d3a(&DAT_14c87eb00);
              DAT_14c87ead8 = '\x01';
              lVar10 = local_168;
              lVar11 = local_170;
            }
            local_198 = (longlong)iVar12;
            local_188 = 0;
            local_190 = 0;
            cVar8 = FUN_140aa9920(DAT_14c892f44,lVar10,lVar11,puVar3);
            if (cVar8 != '\0') {
              memset(&local_148,0,0x90);
              FUN_144869430(&local_148);
              local_b8 = 0;
              local_148 = &PTR_FUN_149e1e050;
              local_b0 = &local_98;
              local_a8 = 0x7fffffffffffffff;
              local_120 = local_120 | 1;
              FUN_1449c2eca(&local_148,0);
              local_158 = (undefined *)0x0;
              uStack_150 = 0;
              FUN_140116cd4(&local_148,&local_158);
              FUN_1456cf80c(&local_158,ppuVar1);
              if (ppuVar1 == &local_158) {
                if (local_158 != (undefined *)0x0) {
                  FUN_1400020a8();
                }
              }
              else {
                if (*ppuVar1 != (undefined *)0x0) {
                  FUN_1400020a8();
                }
                param_1[0x19] = local_158;
                local_158 = (undefined *)0x0;
                *(undefined4 *)(param_1 + 0x1a) = (undefined4)uStack_150;
                *(undefined4 *)((longlong)param_1 + 0xd4) = uStack_150._4_4_;
              }
              plVar7 = local_f0;
              local_148 = &PTR__purecall_149e35f70;
              if (local_f0 != (longlong *)0x0) {
                if (*local_f0 != 0) {
                  FUN_1400020a8();
                }
                FUN_1400020a8(plVar7);
              }
              lVar11 = local_d0;
              if (local_d0 != 0) {
                if (*(longlong *)(local_d0 + 0x40) != 0) {
                  FUN_1400020a8();
                }
                FUN_1400020a8(lVar11);
              }
            }
            *(undefined4 *)(param_1 + 0x13) = 0;
            if (*(int *)((longlong)param_1 + 0x9c) != 0) {
              FUN_144893a1c(local_178,0);
            }
            ppuVar9 = local_78;
            if (local_98 != 0) {
              FUN_1400020a8();
              ppuVar9 = local_78;
            }
          }
          goto LAB_140116690;
        }
        *(undefined1 *)((longlong)param_1 + 0x8c) = 0;
        puVar5 = *(undefined4 **)param_2[1];
        if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar5 + 1) {
          if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
            (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)((longlong)param_1 + 0xa4),4);
          }
          else {
            FUN_14572512c(param_2);
          }
        }
        else {
          *(undefined4 *)((longlong)param_1 + 0xa4) = *puVar5;
          *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
        }
        piVar6 = *(int **)param_2[1];
        if ((int *)((undefined8 *)param_2[1])[1] < piVar6 + 1) {
          if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
            (**(code **)(*param_2 + 0x170))(param_2,ppuVar2,4);
          }
          else {
            FUN_14572512c(param_2,ppuVar2);
          }
        }
        else {
          *(int *)ppuVar2 = *piVar6;
          *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
        }
        if (0 < *(int *)ppuVar2) {
          *(undefined1 *)(param_1 + 0x15) = 1;
          *(undefined4 *)(param_1 + 0x13) = 0;
          if (*(int *)((longlong)param_1 + 0x9c) != *(int *)ppuVar2) {
            FUN_144893a1c(param_1 + 0x12);
          }
        }
      }
      cVar8 = (**(code **)(*param_2 + 0x38))(param_2);
    } while (cVar8 == '\0');
  }
  puVar3 = param_1[5];
  local_148 = param_1;
  if ((param_1 != (undefined **)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_1);
  }
  FUN_1405f6d44(puVar3 + 0x16c8,&local_148);
  if ((local_60 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140116b62 FUN_140116b62 body=369 status=ok
// SIG undefined FUN_140116b62(void)

void FUN_140116b62(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 0x68;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140116be7;
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
LAB_140116be7:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x68)) {
    uVar7 = uVar5 / 0x68 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x68,8);
  return;
}



// FUNCTION 140116cd4 FUN_140116cd4 body=387 status=ok
// SIG undefined FUN_140116cd4(void)

longlong * FUN_140116cd4(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] * 0x68,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x68);
  local_2c = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_2c = *(uint *)(param_2 + 1);
  }
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_2c,4);
    }
    else {
      FUN_14572512c(param_1,&local_2c);
    }
  }
  else {
    local_2c = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (local_2c == 0) {
    if (((*(byte *)(param_1 + 5) & 1) != 0) &&
       (*(undefined4 *)(param_2 + 1) = 0, *(int *)((longlong)param_2 + 0xc) != 0)) {
      FUN_140117cc8(param_2,0);
    }
  }
  else if ((((int)local_2c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x27627 < local_2c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_2c;
    lVar5 = 0;
    lVar6 = 0;
    do {
      FUN_140116ed7(param_1,*param_2 + lVar5);
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0x68;
    } while (lVar6 < (int)param_2[1]);
  }
  else {
    *(undefined4 *)(param_2 + 1) = 0;
    if ((*(uint *)((longlong)param_2 + 0xc) == local_2c) ||
       (FUN_140117cc8(param_2), 0 < (int)local_2c)) {
      iVar4 = 0;
      do {
        uVar3 = FUN_140116e58(param_2);
        FUN_140116ed7(param_1,uVar3);
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)local_2c);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 140116e58 FUN_140116e58 body=66 status=ok
// SIG undefined FUN_140116e58(void)

longlong FUN_140116e58(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_140116b62(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x68 + *param_1;
  FUN_140116e9a(lVar2,1);
  return lVar2;
}



// FUNCTION 140116e9a FUN_140116e9a body=61 status=ok
// SIG undefined FUN_140116e9a(void)

void FUN_140116e9a(undefined1 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    *(undefined8 *)(param_1 + 4) = 0xffffffffffffffff;
    *(undefined4 *)(param_1 + 0xc) = 0xbf800000;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined8 *)(param_1 + 0x58) = 0;
    *(undefined4 *)(param_1 + 0x5f) = 0;
    param_1 = param_1 + 0x68;
  }
  return;
}



// FUNCTION 140116ed7 FUN_140116ed7 body=1173 status=ok
// SIG undefined FUN_140116ed7(void)

longlong * FUN_140116ed7(longlong *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  undefined1 auStack_58 [40];
  undefined1 local_30 [8];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x178))(param_1,param_2,4);
  switch(*param_2) {
  case 1:
    (**(code **)(*param_1 + 0x160))(param_1,param_2 + 0x58);
    puVar1 = *(undefined1 **)param_1[1];
    if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 0x60,1);
    }
    else {
      param_2[0x60] = *puVar1;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
    }
    goto switchD_140116f20_default;
  case 2:
    puVar2 = *(undefined4 **)param_1[1];
    if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar2 + 1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,param_2 + 0xc,4);
      }
      else {
        FUN_14572512c(param_1);
      }
    }
    else {
      *(undefined4 *)(param_2 + 0xc) = *puVar2;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
    }
    (**(code **)(*param_1 + 0x188))(param_1,param_2 + 4);
    puVar1 = *(undefined1 **)param_1[1];
    if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 0x60,1);
    }
    else {
      param_2[0x60] = *puVar1;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cb7c1e4) && (FUN_144b3d300(&DAT_14cb7c1e4), DAT_14cb7c1e4 == -1)) {
      FUN_1446f470e(local_30,&DAT_14b3fc6d8,1);
      FUN_1401533ba(&DAT_14cb7c1d8,local_30,1);
      _Init_thread_footer(&DAT_14cb7c1e4);
    }
    FUN_140117450(param_1,param_2 + 0x10,&DAT_14cb7c1d8);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cb7c1f4) && (FUN_144b3d300(&DAT_14cb7c1f4), DAT_14cb7c1f4 == -1)) {
      FUN_1446f470e(local_30,L"base",1);
      FUN_1401533ba(&DAT_14cb7c1e8,local_30,1);
      _Init_thread_footer(&DAT_14cb7c1f4);
    }
    FUN_140117450(param_1,param_2 + 0x1c,&DAT_14cb7c1e8);
    FUN_14011750a(param_2 + 0x28,param_1);
    FUN_140117639(param_1,param_2 + 0x34);
    FUN_14482ccfe(param_1,param_2 + 0x40);
    param_2 = param_2 + 0x48;
    goto LAB_140117030;
  case 3:
    puVar2 = *(undefined4 **)param_1[1];
    if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar2 + 1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,param_2 + 0xc,4);
      }
      else {
        FUN_14572512c(param_1);
      }
    }
    else {
      *(undefined4 *)(param_2 + 0xc) = *puVar2;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
    }
    puVar1 = *(undefined1 **)param_1[1];
    if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 0x60,1);
    }
    else {
      param_2[0x60] = *puVar1;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
    }
    (**(code **)(*param_1 + 0x188))(param_1,param_2 + 4);
    goto LAB_14011710f;
  case 4:
    puVar1 = *(undefined1 **)param_1[1];
    if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 0x60,1);
    }
    else {
      param_2[0x60] = *puVar1;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
    }
    param_2 = param_2 + 4;
    break;
  case 5:
  case 6:
  case 7:
    puVar2 = *(undefined4 **)param_1[1];
    if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar2 + 1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,param_2 + 0xc,4);
      }
      else {
        FUN_14572512c(param_1);
      }
    }
    else {
      *(undefined4 *)(param_2 + 0xc) = *puVar2;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
    }
    goto LAB_1401171a7;
  case 8:
    puVar2 = *(undefined4 **)param_1[1];
    if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar2 + 1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,param_2 + 0xc,4);
      }
      else {
        FUN_14572512c(param_1);
      }
    }
    else {
      *(undefined4 *)(param_2 + 0xc) = *puVar2;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
    }
    FUN_140117639(param_1,param_2 + 0x34);
    (**(code **)(*param_1 + 400))(param_1,param_2 + 0x50);
    param_2 = param_2 + 8;
    break;
  case 9:
    FUN_14011750a(param_2 + 0x28,param_1);
LAB_1401171a7:
    FUN_140117639(param_1,param_2 + 0x34);
LAB_14011710f:
    param_2 = param_2 + 0x40;
LAB_140117030:
    FUN_14482ccfe(param_1,param_2);
  default:
    goto switchD_140116f20_default;
  }
  (**(code **)(*param_1 + 0x188))(param_1,param_2);
switchD_140116f20_default:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14011736e FUN_14011736e body=226 status=ok
// SIG undefined FUN_14011736e(void)

void FUN_14011736e(longlong *param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  
  lVar3 = param_1[0x14];
  lVar2 = lVar3 + param_3 * 8;
  if (param_1[0x15] < lVar2) {
    if ((char)param_1[0x16] != '\x01') {
      lVar2 = (**(code **)(*param_1 + 8))(param_1);
      do {
        *(byte *)(lVar2 + 0x29) = *(byte *)(lVar2 + 0x29) | 2;
        lVar2 = *(longlong *)(lVar2 + 0x88);
      } while (lVar2 != 0);
      return;
    }
    lVar3 = param_1[0x15] * 2;
    if (lVar3 < lVar2) {
      lVar3 = lVar2;
    }
    param_1[0x15] = lVar3;
    iVar1 = (int)param_1[0x13];
    iVar4 = (int)(lVar3 + 7U >> 3);
    *(int *)(param_1 + 0x13) = iVar4;
    uVar5 = iVar4 - iVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0x9c) - iVar1) < uVar5) {
      FUN_1447403be(param_1 + 0x12);
    }
    memset((void *)((longlong)iVar1 + param_1[0x12]),0,(longlong)(int)uVar5);
    lVar3 = param_1[0x14];
  }
  FUN_1449bc9dc(param_1[0x12],lVar3,param_2,0,(int)(param_3 * 8));
  param_1[0x14] = param_1[0x14] + param_3 * 8;
  return;
}



// FUNCTION 140117450 FUN_140117450 body=185 status=ok
// SIG undefined FUN_140117450(void)

void FUN_140117450(longlong *param_1,int *param_2,int *param_3)

{
  undefined1 auStack_58 [46];
  char local_2a;
  char local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(byte *)(param_1 + 5) & 4) == 0) {
    if ((*(byte *)(param_1 + 5) & 1) == 0) goto LAB_1401174a6;
    local_2a = '\0';
    (**(code **)(*param_1 + 0x178))(param_1,&local_2a,1);
    if (local_2a != '\0') {
      param_2[2] = param_3[2];
      *(undefined8 *)param_2 = *(undefined8 *)param_3;
      goto LAB_1401174a6;
    }
  }
  else {
    local_29 = param_3[2] == param_2[2] && *param_2 == *param_3;
    (**(code **)(*param_1 + 0x178))(param_1,&local_29,1);
    if (local_29 != '\0') goto LAB_1401174a6;
  }
  FUN_14011750a(param_2,param_1);
LAB_1401174a6:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14011750a FUN_14011750a body=302 status=ok
// SIG undefined FUN_14011750a(void)

undefined8 FUN_14011750a(undefined4 *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  ulonglong *puVar2;
  undefined1 auStack_48 [32];
  ulonglong *local_28;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,param_1,4);
    }
    else {
      thunk_FUN_14572512c(param_2,param_1);
    }
  }
  else {
    *param_1 = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  if (*(char *)((longlong)param_2 + 0x2b) < '\0') {
    local_1c = param_1[2];
    puVar2 = (ulonglong *)param_2[1];
    puVar1 = (undefined4 *)*puVar2 + 1;
    if ((undefined4 *)puVar2[1] < puVar1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_1c,4);
      }
      else {
        thunk_FUN_14572512c(param_2,&local_1c);
      }
    }
    else {
      local_1c = *(undefined4 *)*puVar2;
      *puVar2 = (ulonglong)puVar1;
    }
    if ((*(byte *)(param_2 + 5) & 1) != 0) {
      FUN_14011791e(&local_28,*param_1,local_1c);
      *(ulonglong **)(param_1 + 1) = local_28;
    }
  }
  else {
    (**(code **)(*param_2 + 0x160))(param_2,param_1 + 1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140117639 FUN_140117639 body=336 status=ok
// SIG undefined FUN_140117639(void)

void FUN_140117639(longlong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined1 auStack_48 [35];
  char local_25;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(byte *)(param_1 + 5) & 4) == 0) {
    if ((*(byte *)(param_1 + 5) & 1) == 0) goto LAB_14011775b;
    local_25 = '\0';
    (**(code **)(*param_1 + 0x178))(param_1,&local_25,1);
    if (local_25 != '\0') {
      local_24 = 0;
      (**(code **)(*param_1 + 0x178))(param_1,&local_24,DAT_14cb7c120);
      uVar1 = *(undefined8 *)(DAT_14cb7c0c0 + (longlong)local_24 * 0xc);
      *(undefined4 *)(param_2 + 1) = *(undefined4 *)(DAT_14cb7c0c0 + 8 + (longlong)local_24 * 0xc);
      *param_2 = uVar1;
      goto LAB_14011775b;
    }
  }
  else {
    if (*(int *)(param_2 + 1) == 0) {
      uVar3 = *(undefined4 *)param_2;
    }
    else {
      uVar3 = FUN_144a78877(*(undefined4 *)param_2,*(int *)(param_2 + 1));
    }
    iVar2 = FUN_14011778a(uVar3,param_2);
    local_24 = -1;
    if (((iVar2 != -1) && (DAT_14cb7c0d0 + (longlong)iVar2 * 0x18 != 0)) &&
       (piVar4 = (int *)(DAT_14cb7c0d0 + (longlong)iVar2 * 0x18 + 0xc), piVar4 != (int *)0x0)) {
      local_24 = *piVar4;
    }
    local_25 = local_24 != -1;
    (**(code **)(*param_1 + 0x178))(param_1,&local_25,1);
    if (local_25 != '\0') {
      (**(code **)(*param_1 + 0x178))(param_1,&local_24,DAT_14cb7c120);
      goto LAB_14011775b;
    }
  }
  FUN_14011750a(param_2,param_1);
LAB_14011775b:
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}


