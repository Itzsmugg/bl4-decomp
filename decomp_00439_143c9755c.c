// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 143c9755c FUN_143c9755c body=154 status=ok
// SIG undefined FUN_143c9755c(void)

undefined8 FUN_143c9755c(longlong param_1)

{
  longlong lVar1;
  byte bVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  lVar1 = *(longlong *)(param_1 + -0xcc0);
  if (lVar1 == 0) {
    return 0;
  }
  plVar4 = *(longlong **)(lVar1 + 0x658);
  if (plVar4 == (longlong *)0x0) {
    plVar4 = *(longlong **)(lVar1 + 0x660);
    if ((DAT_14c950c29 & plVar4 != (longlong *)0x0) != 0) goto LAB_143c975ce;
    if (plVar4 == (longlong *)0x0) {
      return 0;
    }
LAB_143c975b2:
    plVar4 = *(longlong **)(lVar1 + 0x660);
    bVar2 = DAT_14c950c29 & plVar4 != (longlong *)0x0;
  }
  else {
    if (DAT_14c950c29 == 0) goto LAB_143c97583;
LAB_143c975ce:
    FUN_1456cec3c(plVar4);
    plVar4 = *(longlong **)(lVar1 + 0x658);
    if (plVar4 == (longlong *)0x0) goto LAB_143c975b2;
    bVar2 = DAT_14c950c29 & 1;
  }
  if (bVar2 != 0) {
    FUN_1456cec3c(plVar4);
  }
LAB_143c97583:
                    /* WARNING: Could not recover jumptable at 0x000143c9758f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(*plVar4 + 0x3f8))(plVar4);
  return uVar3;
}



// FUNCTION 143c975f6 FUN_143c975f6 body=2607 status=ok
// SIG undefined FUN_143c975f6(void)

void FUN_143c975f6(longlong param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
  longlong *plVar1;
  uint uVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong *plVar10;
  int iVar11;
  bool bVar12;
  undefined1 auStack_148 [32];
  undefined4 local_128;
  undefined4 local_120;
  undefined4 local_118;
  undefined8 local_110;
  undefined2 *local_108;
  undefined1 *local_100;
  undefined1 *local_f8;
  code **local_f0;
  undefined1 *local_e8;
  code *local_e0;
  code **local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 *local_b8;
  longlong *local_b0;
  undefined1 *local_a8;
  undefined8 **local_a0;
  longlong local_98;
  longlong local_90;
  undefined1 **local_88;
  code *local_80;
  longlong *local_78;
  code **local_70;
  code *local_68;
  code ***pppcStack_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  plVar1 = (longlong *)(param_1 + -0x10f8);
  local_c8 = *(undefined8 *)(param_2 + 0x18);
  if (param_2 == 0) {
LAB_143c97663:
    lVar6 = 0;
    if ((char)param_4 == '\0') {
LAB_143c97a74:
      if (*(char *)(param_1 + 0x30f) != '\x01') goto LAB_143c97d3a;
      *(undefined1 *)(param_1 + 0x30f) = 0;
      uVar8 = (**(code **)(*(longlong *)(param_1 + -0x9b0) + 0x10))(param_1 + -0x9b0);
      FUN_1409e8d8c(uVar8,&DAT_14cb712dc,0,&DAT_14c9a8414);
      FUN_1405ba932(plVar1,1);
      if (*(longlong **)(param_1 + 0xf0) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0xf0) + 0x570))();
        FUN_1400bc8c2(*(longlong *)(param_1 + 0xf0) + 0x11f0,&local_c8);
        FUN_1409df526(*(undefined8 *)(param_1 + 0xf0),&local_c8);
        lVar7 = *(longlong *)(*(longlong *)(param_1 + 0xf0) + 0x1518);
        if ((lVar7 != 0) && (*(char *)(lVar7 + 0xcd1) == '\0')) {
          FUN_147e3ce94();
        }
      }
      local_b8 = &local_c0;
      local_c0 = DAT_14cb72618;
      local_b0 = &local_98;
      local_98 = 0;
      local_a0 = &local_b8;
      local_a8 = &LAB_143cbcae0;
      if (*(longlong *)(param_1 + 0x750) != 0) {
        local_90 = param_1 + 0x710;
        local_78 = &local_90;
        local_88 = &local_a8;
        local_70 = &local_80;
        local_80 = FUN_143cbca2e;
        pppcStack_60 = &local_70;
        local_68 = FUN_1487df56e;
        FUN_1447c5ba2();
        if (local_98 != 0) {
          FUN_14134c034(local_98,&local_c8);
        }
      }
      pcVar3 = *(code **)(*plVar1 + 0x5e8);
      if (pcVar3 == FUN_140972dde) {
        lVar7 = *(longlong *)(param_1 + -0xd48);
        if (lVar7 != 0) goto LAB_143c97cd1;
        pcVar3 = *(code **)(*plVar1 + 0x5f8);
        if (pcVar3 == FUN_144784df4) {
          pcVar3 = *(code **)(*(longlong *)(param_1 + 0x2b28) + 0x18);
          if (pcVar3 == (code *)&LAB_144904684) {
            if ((((*(int *)(param_1 + 0x64bc) != 0) &&
                 (uVar2 = *(uint *)(param_1 + 0x64b8), -1 < (int)uVar2)) &&
                ((int)uVar2 < DAT_14c9647dc)) &&
               (((plVar10 = (longlong *)
                            ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
                 plVar10 != (longlong *)0x0 && ((int)plVar10[2] == *(int *)(param_1 + 0x64bc))) &&
                ((*(uint *)(plVar10 + 1) & 0x10200000) == 0)))) {
              if ((*(uint *)(plVar10 + 1) & 0x10200000) == 0) {
                lVar7 = *plVar10;
              }
              else {
                lVar7 = 0;
              }
              lVar7 = lVar7 + 0x110;
              goto LAB_143c97cb7;
            }
          }
          else {
            lVar7 = (*pcVar3)(param_1 + 0x2b28);
LAB_143c97cb7:
            if (lVar7 != 0) {
              lVar7 = *(longlong *)(lVar7 + 0x20);
              goto LAB_143c97cc0;
            }
          }
        }
        else {
          lVar7 = (*pcVar3)(plVar1);
LAB_143c97cc0:
          if (lVar7 != 0) {
            lVar7 = *(longlong *)(lVar7 + 0x3b0);
            goto LAB_143c97ccc;
          }
        }
      }
      else {
        lVar7 = (*pcVar3)(plVar1);
LAB_143c97ccc:
        if (lVar7 != 0) {
LAB_143c97cd1:
          if ((*(byte *)(lVar7 + 0x39a) & 8) == 0) {
            lVar7 = *(longlong *)(param_1 + -0xd38);
            if (lVar7 == 0) {
LAB_143c97d12:
              lVar7 = 0;
            }
            else {
              if (DAT_14caf9cd0 == 0) {
                local_f0 = &local_68;
                local_68 = FUN_141030f22;
                local_e0 = FUN_14081d0ea;
                local_e8 = &LAB_1463c0cc2;
                local_f8 = &LAB_147c9db5b;
                local_100 = &LAB_1463f9c44;
                local_108 = &DAT_149e063b2;
                local_110 = 0x2000000000;
                local_118 = 0x10000004;
                local_120 = 8;
                local_128 = 0x958;
                FUN_14081cfa3(L"/Script/Engine",L"PlayerController",&DAT_14caf9cd0,FUN_1463f9c22);
              }
              if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x38) < *(int *)(DAT_14caf9cd0 + 0x38)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) +
                   (longlong)*(int *)(DAT_14caf9cd0 + 0x38) * 8) != DAT_14caf9cd0 + 0x30))
              goto LAB_143c97d12;
            }
            (**(code **)(*plVar1 + 0x308))(plVar1,lVar7);
            goto LAB_143c97d3a;
          }
        }
      }
      FUN_140ba2af2(param_1 + 0x8d8,&local_c8);
      goto LAB_143c97d3a;
    }
  }
  else {
    lVar6 = FUN_140861c56();
    iVar5 = *(int *)(lVar6 + 0x38);
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < iVar5) ||
       (*(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)iVar5 * 8) !=
        lVar6 + 0x30)) goto LAB_143c97663;
    lVar6 = param_2;
    if ((char)param_4 == '\0') {
      *(undefined8 *)(param_1 + 0x700) = 0;
      if (*(char *)(param_1 + 0x708) == '\x01') {
        *(undefined1 *)(param_1 + 0x708) = 0;
        FUN_140c7ce82(plVar1,CONCAT71((int7)(int3)((uint)iVar5 >> 8),1));
      }
      goto LAB_143c97a74;
    }
    uVar2 = *(uint *)(param_2 + 0xc);
    *(uint *)(param_1 + 0x700) = uVar2;
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar7 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar7 = 0;
    }
    iVar5 = *(int *)(lVar7 + 0x10);
    if (*(int *)(lVar7 + 0x10) == 0) {
      LOCK();
      iVar5 = DAT_14c964868 + 1;
      UNLOCK();
      iVar11 = DAT_14c964868 + 1;
      bVar12 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar5;
      if (bVar12) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar11);
      }
      LOCK();
      iVar5 = *(int *)(lVar7 + 0x10);
      bVar12 = iVar5 == 0;
      if (bVar12) {
        *(int *)(lVar7 + 0x10) = iVar11;
        iVar5 = 0;
      }
      UNLOCK();
      if (bVar12) {
        iVar5 = iVar11;
      }
    }
    *(int *)(param_1 + 0x704) = iVar5;
    if (((*(byte *)(param_1 + -0x1095) & 8) != 0) && (*(char *)(param_1 + -0xf80) == '\x03')) {
      *(undefined1 *)(param_1 + 0x708) = 1;
      FUN_140c7ce82(plVar1,0);
    }
    FUN_1400bc8c2(param_1 + -0xd90,&DAT_14cb712d4);
    if (-1 < *(char *)(param_1 + -0x1098) == (bool)*(char *)(param_1 + -0xd90)) {
      (**(code **)(*plVar1 + 0x608))(plVar1);
    }
  }
  if (*(longlong *)(param_1 + -0xf30) == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = *(undefined8 *)(*(longlong *)(param_1 + -0xf30) + 0x18);
  }
  cVar4 = FUN_140b2ea47(param_2,param_3,uVar8);
  if (cVar4 == '\0') goto LAB_143c97d3a;
  *(undefined1 *)(param_1 + 0x30f) = 1;
  FUN_1405ba932(plVar1,0);
  if (*(longlong *)(param_1 + 0xf0) != 0) {
    FUN_1400bc96c(*(longlong *)(param_1 + 0xf0) + 0x11f0,&local_c8);
    FUN_140257a06(*(undefined8 *)(param_1 + 0xf0),&local_c8,7);
  }
  local_b8 = &local_c0;
  local_c0 = DAT_14cb72618;
  local_b0 = &local_98;
  local_98 = 0;
  local_a0 = &local_b8;
  local_a8 = &LAB_143cbcae0;
  if (*(longlong *)(param_1 + 0x750) != 0) {
    local_90 = param_1 + 0x710;
    local_78 = &local_90;
    local_88 = &local_a8;
    local_70 = &local_80;
    local_80 = FUN_143cbca2e;
    pppcStack_60 = &local_70;
    local_68 = FUN_1487df56e;
    FUN_1447c5ba2();
    if (local_98 != 0) {
      FUN_1413d8066(local_98,&local_c8);
    }
  }
  pcVar3 = *(code **)(*plVar1 + 0x5e8);
  if (pcVar3 == FUN_140972dde) {
    lVar7 = *(longlong *)(param_1 + -0xd48);
    if (lVar7 != 0) goto LAB_143c9788f;
    pcVar3 = *(code **)(*plVar1 + 0x5f8);
    if (pcVar3 == FUN_144784df4) {
      pcVar3 = *(code **)(*(longlong *)(param_1 + 0x2b28) + 0x18);
      if (pcVar3 == (code *)&LAB_144904684) {
        if (((((*(int *)(param_1 + 0x64bc) != 0) &&
              (uVar2 = *(uint *)(param_1 + 0x64b8), -1 < (int)uVar2)) &&
             ((int)uVar2 < DAT_14c9647dc)) &&
            ((plVar10 = (longlong *)
                        ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
             plVar10 != (longlong *)0x0 && ((int)plVar10[2] == *(int *)(param_1 + 0x64bc))))) &&
           ((*(uint *)(plVar10 + 1) & 0x10200000) == 0)) {
          if ((*(uint *)(plVar10 + 1) & 0x10200000) == 0) {
            lVar7 = *plVar10;
          }
          else {
            lVar7 = 0;
          }
          lVar7 = lVar7 + 0x110;
          goto LAB_143c97875;
        }
      }
      else {
        lVar7 = (*pcVar3)(param_1 + 0x2b28);
LAB_143c97875:
        if (lVar7 != 0) {
          lVar7 = *(longlong *)(lVar7 + 0x20);
          goto LAB_143c9787e;
        }
      }
    }
    else {
      lVar7 = (*pcVar3)(plVar1);
LAB_143c9787e:
      if (lVar7 != 0) {
        lVar7 = *(longlong *)(lVar7 + 0x3b0);
        goto LAB_143c9788a;
      }
    }
LAB_143c978e4:
    FUN_140ba2cd0(param_1 + 0x8d8,&local_c8,1);
  }
  else {
    lVar7 = (*pcVar3)(plVar1);
LAB_143c9788a:
    if (lVar7 == 0) goto LAB_143c978e4;
LAB_143c9788f:
    if ((*(byte *)(lVar7 + 0x39a) & 8) != 0) goto LAB_143c978e4;
    lVar7 = *(longlong *)(param_1 + -0xd38);
    if (lVar7 == 0) {
LAB_143c978d0:
      lVar7 = 0;
    }
    else {
      if (DAT_14caf9cd0 == 0) {
        local_f0 = &local_68;
        local_68 = FUN_141030f22;
        local_e0 = FUN_14081d0ea;
        local_e8 = &LAB_1463c0cc2;
        local_f8 = &LAB_147c9db5b;
        local_100 = &LAB_1463f9c44;
        local_108 = &DAT_149e063b2;
        local_110 = 0x2000000000;
        local_118 = 0x10000004;
        local_120 = 8;
        local_128 = 0x958;
        FUN_14081cfa3(L"/Script/Engine",L"PlayerController",&DAT_14caf9cd0,FUN_1463f9c22);
      }
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x38) < *(int *)(DAT_14caf9cd0 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14caf9cd0 + 0x38) * 8) != DAT_14caf9cd0 + 0x30))
      goto LAB_143c978d0;
    }
    (**(code **)(*plVar1 + 0x318))(plVar1,lVar7);
  }
  if (((*(longlong *)(param_1 + -0xf30) != 0) &&
      (lVar7 = *(longlong *)(*(longlong *)(param_1 + -0xf30) + 0x120), lVar7 != 0)) &&
     (lVar7 = *(longlong *)(lVar7 + 0xa8), lVar7 != 0)) {
    lVar9 = FUN_140363886();
    lVar7 = *(longlong *)(lVar7 + 0x10);
    if (((*(int *)(lVar9 + 0x38) <= *(int *)(lVar7 + 0x38)) &&
        (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) ==
         lVar9 + 0x30)) && (plVar10 = *(longlong **)(param_1 + -0xf30), plVar10 != (longlong *)0x0))
    {
      (**(code **)(*plVar10 + 0x4a0))(plVar10,&DAT_14cadad9c);
    }
  }
  uVar8 = (**(code **)(*(longlong *)(param_1 + -0x9b0) + 0x10))(param_1 + -0x9b0);
  local_d8 = &local_68;
  local_68 = (code *)0x100000000;
  pppcStack_60 = (code ***)0x500000002;
  local_58 = 0x700000006;
  local_d0 = 6;
  local_128 = 0;
  FUN_140f718e4(uVar8,&DAT_14cb712dc,plVar1);
  FUN_1409e8d8c(uVar8,&DAT_14cb712dc,1,&DAT_14c9a8414);
LAB_143c97d3a:
  if (lVar6 != 0) {
    FUN_145a4fe48(plVar1,&local_c8,param_4);
    uVar8 = (**(code **)(*(longlong *)(param_1 + -0x898) + 0x10))(param_1 + -0x898);
    FUN_140a82ca8(uVar8,&local_c8,param_4,1);
  }
  lVar6 = *(longlong *)(param_1 + 0x2818);
  if (lVar6 != 0) {
    (**(code **)(*(longlong *)(lVar6 + 0x28) + 0x28))(lVar6 + 0x28,param_2,param_3,param_4);
  }
  if ((local_48 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143c9810a FUN_143c9810a body=187 status=ok
// SIG undefined FUN_143c9810a(void)

void FUN_143c9810a(longlong param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  bool bVar5;
  
  if (param_2 == 0) {
    param_2 = FUN_14035f5a8(param_1 + -0x1130);
    if (param_2 == 0) {
      *(undefined4 *)(param_1 + 0x1728) = 0;
      iVar2 = 0;
      goto LAB_143c9814c;
    }
  }
  uVar1 = *(uint *)(param_2 + 0xc);
  *(uint *)(param_1 + 0x1728) = uVar1;
  if ((int)uVar1 < DAT_14c9647dc) {
    lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
  }
  else {
    lVar3 = 0;
  }
  iVar2 = *(int *)(lVar3 + 0x10);
  if (*(int *)(lVar3 + 0x10) == 0) {
    LOCK();
    iVar2 = DAT_14c964868 + 1;
    UNLOCK();
    iVar4 = DAT_14c964868 + 1;
    bVar5 = DAT_14c964868 < 1000;
    DAT_14c964868 = iVar2;
    if (bVar5) {
      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                    L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                    iVar4);
    }
    LOCK();
    iVar2 = *(int *)(lVar3 + 0x10);
    bVar5 = iVar2 == 0;
    if (bVar5) {
      *(int *)(lVar3 + 0x10) = iVar4;
      iVar2 = 0;
    }
    UNLOCK();
    if (bVar5) {
      iVar2 = iVar4;
    }
  }
LAB_143c9814c:
  *(int *)(param_1 + 0x172c) = iVar2;
  return;
}



// FUNCTION 143c98270 FUN_143c98270 body=53 status=ok
// SIG undefined FUN_143c98270(void)

undefined8 FUN_143c98270(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  bool bVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x11e8);
  if ((lVar1 == 0) || ((&DAT_00001100)[lVar1] != '\b')) {
    bVar3 = false;
  }
  else {
    bVar3 = *(char *)(param_1 + 0x32c0) == '\0';
  }
  uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),*(undefined1 *)(param_1 + 0x32c0)) &
          0xfffffffffffffffe;
  return CONCAT71((int7)(uVar2 >> 8),(char)uVar2 == '\x02' | bVar3);
}



// FUNCTION 143c982a6 FUN_143c982a6 body=1581 status=ok
// SIG undefined FUN_143c982a6(void)

void FUN_143c982a6(longlong param_1,longlong param_2)

{
  void **ppvVar1;
  float *pfVar2;
  char cVar3;
  int iVar4;
  void *pvVar5;
  int iVar6;
  char cVar7;
  DWORD DVar8;
  DWORD DVar9;
  longlong lVar10;
  longlong lVar11;
  byte bVar12;
  ulonglong uVar13;
  undefined *puVar14;
  longlong *plVar15;
  undefined8 uVar16;
  byte bVar17;
  byte bVar18;
  undefined7 uVar19;
  byte bVar20;
  uint uVar21;
  byte bVar22;
  bool bVar23;
  float fVar24;
  undefined1 auStack_d8 [32];
  void *local_b8;
  ulonglong uStack_b0;
  void *local_a8;
  ulonglong uStack_a0;
  longlong local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  int iStack_88;
  undefined8 uStack_84;
  undefined4 local_7c;
  undefined1 uStack_78;
  undefined4 uStack_77;
  undefined4 uStack_73;
  undefined4 uStack_6f;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (((*(longlong *)(param_2 + 0x200) != DAT_14c9abbf0) ||
      (lVar10 = *(longlong *)(param_1 + 0x32b8), lVar10 == 0)) ||
     (lVar10 = (**(code **)(*(longlong *)(lVar10 + 0x1238) + 0x10))(lVar10 + 0x1238), lVar10 == 0))
  goto LAB_143c98797;
  uVar16 = *(undefined8 *)(param_2 + 0x200);
  lVar10 = FUN_140256918(lVar10,uVar16);
  if (lVar10 == 0) goto LAB_143c98797;
  if (*(char *)(lVar10 + 0x3e0) == '\0') {
    FUN_140cddb58(lVar10 + 0x368);
  }
  if (((*(byte *)(param_1 + 99) & 8) == 0) || ((*(byte *)(param_1 + 0x61) & 1) != 0)) {
    cVar7 = '\0';
  }
  else {
    cVar7 = *(char *)(lVar10 + 0x3de);
  }
  cVar3 = *(char *)(param_1 + 0x178);
  bVar17 = *(byte *)(param_2 + 0x220);
  uVar13 = CONCAT71((int7)((ulonglong)uVar16 >> 8),*(char *)(param_2 + 0x221)) & 0xffffffff;
  uVar19 = (undefined7)(uVar13 >> 8);
  bVar18 = (byte)uVar13 & bVar17;
  uVar16 = CONCAT71(uVar19,bVar18);
  if (*(char *)(param_2 + 0x221) == '\x01') {
    if ((cVar3 == '\x03' & bVar17) == 0) {
      bVar17 = bVar17 ^ 1;
    }
    else {
LAB_143c98389:
      if (*(longlong *)(param_2 + 0x240) == 0) {
        bVar17 = 1;
      }
      else {
        bVar17 = *(byte *)(*(longlong *)(param_2 + 0x240) + 0xad);
      }
    }
    if (cVar7 == '\0') goto LAB_143c984d3;
    if (cVar3 == '\x03') {
      iStack_88 = 0;
      uStack_84 = 0;
      local_98 = 0;
      uStack_90 = 0;
      uStack_8c = 0;
      local_a8 = (void *)0x0;
      uStack_a0 = 0;
      local_b8 = (void *)0x0;
      uStack_b0 = 0;
      local_7c = 0xffffffff;
      uStack_78 = 0;
      uStack_77 = 0;
      uStack_73 = 0xff000000;
      uStack_6f = 0xffffff;
      FUN_1402c7342(param_2,&local_b8);
      lVar10 = DAT_14c9ab978;
      fVar24 = (float)(uint)(iStack_88 - *(int *)(param_1 + 0x3300)) *
               (1.0 / *(float *)(param_2 + 0x78));
      iVar4 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60);
      if (iVar4 == 0x40000002) {
        uVar13 = 0;
      }
      else {
        bVar23 = true;
        if ((DAT_14c86a9f8 == '\x01') && (iVar4 != 2)) {
          if (iVar4 == 1) {
            DVar8 = FUN_140ad26c0();
            DVar9 = GetCurrentThreadId();
            bVar23 = DVar8 == DVar9;
          }
          else {
            bVar23 = false;
          }
        }
        uVar13 = (ulonglong)(bVar23 ^ 1);
      }
      pvVar5 = local_b8;
      pfVar2 = (float *)(lVar10 + uVar13 * 4);
      if ((((bVar17 | bVar18) & 1) != 0 ||
           iStack_88 != 0 && (*pfVar2 <= fVar24 && fVar24 != *pfVar2)) ||
         (*(char *)(param_1 + 0x32c0) != '\0')) {
        ppvVar1 = (void **)(param_1 + 0x32d0);
        if (ppvVar1 != &local_b8) {
          iVar4 = *(int *)(&DAT_000032dc + param_1);
          iVar6 = (int)uStack_b0;
          lVar10 = (longlong)(int)uStack_b0;
          *(int *)(param_1 + 0x32d8) = (int)uStack_b0;
          if ((int)uStack_b0 == 0 && iVar4 == 0) {
            *(undefined4 *)(&DAT_000032dc + param_1) = 0;
          }
          else {
            FUN_1447c510a(ppvVar1,uStack_b0 & 0xffffffff);
            if (iVar6 != 0) {
              memcpy(*ppvVar1,pvVar5,lVar10 << 2);
            }
          }
        }
        pvVar5 = local_a8;
        ppvVar1 = (void **)(param_1 + 0x32e0);
        if (ppvVar1 != &local_a8) {
          iVar4 = (int)uStack_a0;
          lVar10 = (longlong)(int)uStack_a0;
          *(int *)(param_1 + 0x32e8) = (int)uStack_a0;
          if ((int)uStack_a0 == 0 && *(int *)(param_1 + 0x32ec) == 0) {
            *(undefined4 *)(param_1 + 0x32ec) = 0;
          }
          else {
            FUN_1402c79c8(ppvVar1,uStack_a0 & 0xffffffff);
            if (iVar4 != 0) {
              memcpy(*ppvVar1,pvVar5,lVar10 * 0x60);
            }
          }
        }
        FUN_1402c73be(param_1 + 0x32f0,&local_98);
        *(uint *)(param_1 + 0x330d) = CONCAT13(uStack_78,local_7c._1_3_);
        *(undefined4 *)(param_1 + 0x3311) = uStack_77;
        *(undefined4 *)(param_1 + 0x3315) = uStack_73;
        *(undefined4 *)(param_1 + 0x3319) = uStack_6f;
        *(int *)(param_1 + 0x3300) = iStack_88;
        *(undefined4 *)(&DAT_00003304 + param_1) = (undefined4)uStack_84;
        *(undefined4 *)(param_1 + 0x3308) = uStack_84._4_4_;
        *(undefined4 *)(param_1 + 0x330c) = local_7c;
        uVar13 = *(ulonglong *)(param_1 + 0x28);
        if (uVar13 < 0xffffffff00000000) {
          plVar15 = DAT_14c9980d0;
          if (DAT_14c9980d8 == 0) {
            plVar15 = (longlong *)0x0;
          }
          (**(code **)(*plVar15 + 0x58))(iStack_88,param_1,uVar13,0x22);
        }
        else {
          uVar21 = (uint)uVar13;
          if ((-1 < (int)uVar21) && ((int)uVar21 < DAT_14c998088)) {
            puVar14 = &DAT_14c998070;
            if (DAT_14c998080 != (undefined *)0x0) {
              puVar14 = DAT_14c998080;
            }
            if ((*(uint *)(puVar14 + ((uint)(uVar13 >> 3) & 0xffffffc)) >> (uVar21 & 0x1f) & 1) != 0
               ) {
              lVar11 = DAT_14c998060 + (ulonglong)(uVar21 & 0x7fffffff) * 0x68;
              lVar10 = *(longlong *)(lVar11 + 0x18);
              if (*(longlong *)(lVar11 + 0x18) == 0) {
                lVar10 = lVar11 + 8;
              }
              *(uint *)(lVar10 + 4) = *(uint *)(lVar10 + 4) | 4;
              *(byte *)(lVar11 + 0x60) = *(byte *)(lVar11 + 0x60) | 1;
            }
          }
        }
      }
      FUN_1402c741b(local_98,uStack_90);
      if (local_98 != 0) {
        FUN_1400020a8();
      }
      if (local_a8 != (void *)0x0) {
        FUN_1400020a8();
      }
      if (local_b8 != (void *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_143c98764;
    }
    if (*(char *)(param_1 + 0x32cc) != '\0') {
LAB_143c9846c:
      FUN_140fa8cd4(param_2,param_1 + 0x32d0);
      *(undefined1 *)(param_1 + 0x32cc) = 0;
      bVar12 = *(byte *)(param_2 + 0x220);
      bVar20 = bVar12 ^ 1;
      bVar22 = 0;
      if (*(char *)(param_1 + 0x32cd) == '\0') {
        bVar12 = 0;
      }
      else {
        bVar20 = 0;
      }
      if ((byte)(*(char *)(param_1 + 0x331c) - 3U) < 0xfe) {
        bVar20 = 0;
        bVar22 = bVar12;
      }
      bVar17 = bVar22 != 0 || (bVar17 & 1) != 0;
      uVar16 = CONCAT71(uVar19,bVar18 != 0 || bVar20 != 0);
      goto LAB_143c98764;
    }
    if ((bVar17 & 1) == 0) goto LAB_143c98659;
    bVar17 = *(char *)(param_1 + 0x32c0) == '\x01';
    if ((bVar17 & bVar18) == 0) goto LAB_143c98764;
    uVar16 = 0;
LAB_143c9876f:
    FUN_140257ae0(param_1,uVar16);
  }
  else {
    if (cVar3 == '\x03') goto LAB_143c98389;
    if (cVar7 != '\0') {
      if (*(char *)(param_1 + 0x32cc) == '\x01') {
        bVar17 = 0;
        goto LAB_143c9846c;
      }
LAB_143c98659:
      if (bVar18 == 0) {
        bVar17 = 0;
        uVar16 = 0;
      }
      else {
        uVar16 = CONCAT71(uVar19,*(char *)(param_1 + 0x32c0) != '\x01');
        bVar17 = 0;
      }
      goto LAB_143c98764;
    }
    bVar17 = 0;
LAB_143c984d3:
    if (*(int *)(param_1 + 0x32d8) != 0) {
      iVar4 = *(int *)(&DAT_000032dc + param_1);
      *(undefined4 *)(param_1 + 0x32d8) = 0;
      if (iVar4 < 0) {
        FUN_14482f6fa(param_1 + 0x32d0,0);
      }
      uVar13 = *(ulonglong *)(param_1 + 0x28);
      if (uVar13 < 0xffffffff00000000) {
        plVar15 = DAT_14c9980d0;
        if (DAT_14c9980d8 == 0) {
          plVar15 = (longlong *)0x0;
        }
        (**(code **)(*plVar15 + 0x58))(plVar15,param_1,uVar13,0x22);
      }
      else {
        uVar21 = (uint)uVar13;
        if ((-1 < (int)uVar21) && ((int)uVar21 < DAT_14c998088)) {
          puVar14 = &DAT_14c998070;
          if (DAT_14c998080 != (undefined *)0x0) {
            puVar14 = DAT_14c998080;
          }
          if ((*(uint *)(puVar14 + ((uint)(uVar13 >> 3) & 0xffffffc)) >> (uVar21 & 0x1f) & 1) != 0)
          {
            lVar11 = DAT_14c998060 + (ulonglong)(uVar21 & 0x7fffffff) * 0x68;
            lVar10 = *(longlong *)(lVar11 + 0x18);
            if (*(longlong *)(lVar11 + 0x18) == 0) {
              lVar10 = lVar11 + 8;
            }
            *(uint *)(lVar10 + 4) = *(uint *)(lVar10 + 4) | 4;
            *(byte *)(lVar11 + 0x60) = *(byte *)(lVar11 + 0x60) | 1;
          }
        }
      }
    }
LAB_143c98764:
    if (((char)uVar16 != '\0') || ((bVar17 & 1) != 0)) goto LAB_143c9876f;
  }
  if (((*(char *)(param_1 + 0x32c0) != '\0') && (*(longlong *)(param_1 + 0x11e8) != 0)) &&
     ((&DAT_00001100)[*(longlong *)(param_1 + 0x11e8)] != '\b')) {
    FUN_145746018(param_1);
  }
LAB_143c98797:
  if ((local_60 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c98922 FUN_143c98922 body=25 status=ok
// SIG undefined FUN_143c98922(void)

undefined8 FUN_143c98922(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong **)(param_1 + 0x11e8) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143c98931. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x11e8) + 0xeb8))();
    return uVar1;
  }
  return 0;
}



// FUNCTION 143c989f6 FUN_143c989f6 body=1707 status=ok
// SIG undefined FUN_143c989f6(void)

void FUN_143c989f6(longlong param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  longlong *plVar2;
  code *pcVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined **ppuVar12;
  ulonglong uVar13;
  longlong lVar14;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_a8;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  longlong lStack_60;
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar14 = param_2;
  FUN_1437fc032();
  if (param_2 != 0) {
    lVar14 = param_2 + 0x18;
    FUN_143271da0(param_1 + 0x1368,lVar14);
  }
  if (param_3 != 0) {
    lVar14 = param_3 + 0x18;
    FUN_14094f414(param_1 + 0x1368,lVar14);
  }
  if ((*(byte *)(param_1 + 0x348) & 4) != 0) {
    uVar13 = CONCAT71((int7)((ulonglong)lVar14 >> 8),*(byte *)(param_1 + 0x348)) &
             0xffffffffffffff08;
    FUN_1405f107a(param_1,CONCAT71((int7)(uVar13 >> 8),(byte)uVar13 >> 3));
  }
  if (((*(char *)(param_1 + 0x178) != '\x03') ||
      ((((*(int *)(param_1 + 0x17fc) != 0 && (uVar1 = *(uint *)(param_1 + 0x17f8), -1 < (int)uVar1))
        && ((int)uVar1 < DAT_14c9647dc)) &&
       (((lVar14 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar14 != 0 &&
         (*(int *)(lVar14 + 0x10) == *(int *)(param_1 + 0x17fc))) &&
        ((*(uint *)(lVar14 + 8) & 0x10200000) == 0)))))) || (*(longlong *)(param_1 + 0x3910) == 0))
  goto LAB_143c98eb5;
  local_68 = 0;
  lStack_60 = 0;
  local_58 = 0;
  local_b8 = 0;
  FUN_14036351c(param_1,&local_80,param_2,*(undefined8 *)(param_1 + 0x13f8));
  local_b8 = 0;
  FUN_14036351c(param_1,&local_98,param_3,*(undefined8 *)(param_1 + 0x13f8));
  if (local_90 == 0) {
    uVar8 = FUN_14043db3a();
    local_90 = FUN_14477b664(uVar8);
  }
  if (local_88 == 0) {
    if ((local_90 != 0) && (local_98 != 0)) {
      plVar2 = *(longlong **)(local_90 + 0xb8);
      if ((plVar2 == (longlong *)0x0) ||
         (cVar5 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar5 == '\0')) {
        local_88 = 0;
      }
      else {
        uVar8 = (**(code **)(*plVar2 + 0x110))(plVar2);
        local_88 = FUN_144aff482(uVar8,&local_98);
        if (local_88 != 0) goto LAB_143c98b44;
      }
    }
    if (local_78 == 0) {
      uVar8 = FUN_14043db3a();
      local_78 = FUN_14477b664(uVar8);
    }
    if (local_70 == 0) {
      if ((local_78 != 0) && (local_80 != 0)) {
        plVar2 = *(longlong **)(local_78 + 0xb8);
        if ((plVar2 == (longlong *)0x0) ||
           (cVar5 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar5 == '\0')) {
          local_70 = 0;
        }
        else {
          uVar8 = (**(code **)(*plVar2 + 0x110))(plVar2);
          local_70 = FUN_144aff482(uVar8,&local_80);
          if (local_70 != 0) goto LAB_143c98e2e;
        }
      }
    }
    else {
LAB_143c98e2e:
      local_68 = *(longlong *)(&DAT_00003918 + param_1);
      uVar8 = FUN_14477b664(*(undefined8 *)(param_1 + 0x3920));
      lStack_60 = FUN_14477b664(uVar8);
      local_58 = *(longlong *)(param_1 + 0x3928);
      *(undefined8 *)(&DAT_00003918 + param_1) = 0;
      *(undefined8 *)(param_1 + 0x3920) = 0;
      *(undefined8 *)(param_1 + 0x3928) = 0;
    }
  }
  else {
LAB_143c98b44:
    lVar9 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x3910) + 0x28) + 0x10))
                      (*(longlong *)(param_1 + 0x3910) + 0x28);
    lVar14 = *(longlong *)(lVar9 + 0x148);
    uVar8 = FUN_14477b664(*(undefined8 *)(lVar9 + 0x150));
    lVar10 = FUN_14477b664(uVar8);
    local_a8 = *(undefined8 *)(lVar9 + 0x158);
    if (local_90 == 0) {
      uVar8 = FUN_14043db3a();
      local_90 = FUN_14477b664(uVar8);
    }
    lVar9 = lVar10;
    local_a0 = lVar14;
    if (lVar10 == 0) {
      lVar9 = FUN_14043db3a(0);
    }
    lVar14 = FUN_14477b664(lVar9);
    iVar7 = 0;
    iVar6 = 0;
    if ((lVar14 != 0) && (plVar2 = *(longlong **)(lVar14 + 0xb8), plVar2 != (longlong *)0x0)) {
      lVar9 = *plVar2;
      pcVar3 = *(code **)(lVar9 + 0x108);
      if (pcVar3 != (code *)&LAB_14478342e && pcVar3 != (code *)&LAB_144783422) {
        cVar5 = (*pcVar3)(plVar2);
        iVar6 = 0;
        if (cVar5 == '\0') goto LAB_143c98c27;
        lVar9 = *plVar2;
      }
      pcVar3 = *(code **)(lVar9 + 0x110);
      if (pcVar3 == (code *)&LAB_144783426) {
        ppuVar12 = &PTR_PTR_14c763408;
      }
      else if (pcVar3 == (code *)&LAB_144783432) {
        ppuVar12 = &PTR_PTR_14c75f798;
      }
      else {
        ppuVar12 = (undefined **)(*pcVar3)(plVar2);
      }
      iVar6 = FUN_144aff48c(ppuVar12);
    }
LAB_143c98c27:
    lVar4 = local_90;
    lVar9 = local_98;
    if ((local_90 != 0) && (plVar2 = *(longlong **)(local_90 + 0xb8), plVar2 != (longlong *)0x0)) {
      lVar11 = *plVar2;
      pcVar3 = *(code **)(lVar11 + 0x108);
      if (pcVar3 != (code *)&LAB_14478342e && pcVar3 != (code *)&LAB_144783422) {
        cVar5 = (*pcVar3)(plVar2);
        if (cVar5 == '\0') goto LAB_143c98c96;
        lVar11 = *plVar2;
      }
      pcVar3 = *(code **)(lVar11 + 0x110);
      if (pcVar3 == (code *)&LAB_144783426) {
        ppuVar12 = &PTR_PTR_14c763408;
      }
      else if (pcVar3 == (code *)&LAB_144783432) {
        ppuVar12 = &PTR_PTR_14c75f798;
      }
      else {
        ppuVar12 = (undefined **)(*pcVar3)(plVar2);
      }
      iVar7 = FUN_144aff48c(ppuVar12);
    }
LAB_143c98c96:
    lVar11 = local_a0;
    if ((iVar7 == iVar6) && (lVar9 == local_a0)) {
      if (lVar4 == lVar14) goto LAB_143c98e7c;
      if ((lVar14 != 0) && (lVar4 != 0)) {
        iVar6 = *(int *)(lVar14 + 0x38);
        iVar7 = *(int *)(lVar4 + 0x38);
        if (((iVar6 <= iVar7) &&
            (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar6 * 8) == lVar14 + 0x30)) ||
           ((iVar7 <= iVar6 &&
            (*(longlong *)(*(longlong *)(lVar14 + 0x30) + (longlong)iVar7 * 8) == lVar4 + 0x30))))
        goto LAB_143c98e7c;
      }
    }
    if (local_78 == 0) {
      uVar8 = FUN_14043db3a();
      local_78 = FUN_14477b664(uVar8);
    }
    if (local_70 == 0) {
      if ((local_78 != 0) && (local_80 != 0)) {
        plVar2 = *(longlong **)(local_78 + 0xb8);
        if ((plVar2 == (longlong *)0x0) ||
           (cVar5 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar5 == '\0')) {
          local_70 = 0;
        }
        else {
          uVar8 = (**(code **)(*plVar2 + 0x110))(plVar2);
          local_70 = FUN_144aff482(uVar8,&local_80);
          if (local_70 != 0) goto LAB_143c98d79;
        }
      }
      if (*(longlong *)(&DAT_00003918 + param_1) != lVar11) {
        *(undefined8 *)(param_1 + 0x3928) = 0;
      }
      *(longlong *)(&DAT_00003918 + param_1) = lVar11;
      if (*(longlong *)(param_1 + 0x3920) != lVar10) {
        *(undefined8 *)(param_1 + 0x3928) = 0;
      }
      uVar8 = FUN_14477b664(lVar10);
      uVar8 = FUN_14477b664(uVar8);
      *(undefined8 *)(param_1 + 0x3920) = uVar8;
      *(undefined8 *)(param_1 + 0x3928) = local_a8;
    }
LAB_143c98d79:
    local_68 = local_98;
    uVar8 = FUN_14477b664(local_90);
    lStack_60 = FUN_14477b664(uVar8);
    local_58 = local_88;
  }
LAB_143c98e7c:
  if (lStack_60 == 0) {
    uVar8 = FUN_14043db3a();
    lStack_60 = FUN_14477b664(uVar8);
  }
  if (local_58 == 0) {
    if ((((lStack_60 == 0) || (local_68 == 0)) ||
        (plVar2 = *(longlong **)(lStack_60 + 0xb8), plVar2 == (longlong *)0x0)) ||
       (cVar5 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar5 == '\0')) goto LAB_143c98eb5;
    uVar8 = (**(code **)(*plVar2 + 0x110))(plVar2);
    local_58 = FUN_144aff482(uVar8,&local_68);
    if (local_58 == 0) goto LAB_143c98eb5;
  }
  (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x3910) + 0x28) + 0x30))
            (*(longlong *)(param_1 + 0x3910) + 0x28,&local_68);
LAB_143c98eb5:
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143c990a2 FUN_143c990a2 body=28 status=ok
// SIG undefined FUN_143c990a2(void)

undefined8 FUN_143c990a2(longlong param_1)

{
  (**(code **)(*(longlong *)(param_1 + 0x88) + 0x10))(param_1 + 0x88);
  return 1;
}



// FUNCTION 143c990be FUN_143c990be body=419 status=ok
// SIG undefined FUN_143c990be(void)

void FUN_143c990be(undefined8 *param_1,longlong *param_2)

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
  
  iVar2 = (int)param_2[5];
  if (iVar2 == 0) {
    uVar13 = 1;
    uVar14 = 0;
    iVar9 = 0;
    iVar4 = 0;
  }
  else {
    puVar5 = (uint *)param_2[4];
    if ((uint *)param_2[4] == (uint *)0x0) {
      puVar5 = (uint *)(param_2 + 2);
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
      (**(code **)(*(longlong *)*param_1 + 8))
                ((longlong *)*param_1,*param_2 + (longlong)iVar4 * 0x38 + 0x10,0);
      uVar6 = ~(uint)uVar13 & uVar6;
      puVar5 = (uint *)param_2[4];
      if ((uint *)param_2[4] == (uint *)0x0) {
        puVar5 = (uint *)(param_2 + 2);
      }
      iVar3 = (int)param_2[5];
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
              goto LAB_143c9920c;
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
LAB_143c9920c:
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



// FUNCTION 143c99261 FUN_143c99261 body=40 status=ok
// SIG undefined FUN_143c99261(void)

void FUN_143c99261(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1486504de(param_1);
    param_1 = param_1 + 0x70;
  }
  return;
}



// FUNCTION 143c992a0 FUN_143c992a0 body=55 status=ok
// SIG undefined FUN_143c992a0(void)

void FUN_143c992a0(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  param_1 = (longlong *)*param_1;
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_146544082(param_1,iVar1);
  }
  *(undefined8 *)(*param_1 + (longlong)iVar1 * 8) = uVar2;
  return;
}



// FUNCTION 143c992d8 FUN_143c992d8 body=33 status=ok
// SIG undefined FUN_143c992d8(void)

undefined8 FUN_143c992d8(undefined8 *param_1,undefined8 param_2)

{
  FUN_1414d62bc(param_2,*param_1,param_1[1],param_1[2]);
  return 1;
}



// FUNCTION 143c9931a FUN_143c9931a body=5 status=ok
// SIG undefined FUN_143c9931a(void)

longlong FUN_143c9931a(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 143c99320 FUN_143c99320 body=12 status=ok
// SIG undefined FUN_143c99320(void)

void FUN_143c99320(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143c99329. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143c9932c FUN_143c9932c body=29 status=ok
// SIG undefined FUN_143c9932c(void)

undefined8 FUN_143c9932c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c9934a FUN_143c9934a body=440 status=ok
// SIG undefined FUN_143c9934a(void)

bool FUN_143c9934a(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong *plVar9;
  int iVar10;
  longlong *plVar11;
  longlong lVar12;
  
  if ((longlong)*(int *)(param_2 + 0x90) != 0) {
    plVar11 = *(longlong **)(param_2 + 0x88);
    plVar7 = plVar11 + (longlong)*(int *)(param_2 + 0x90) * 6;
    plVar3 = (longlong *)param_1[1];
    do {
      if ((longlong)(int)plVar11[1] != 0) {
        plVar9 = (longlong *)*plVar11;
        plVar1 = plVar9 + (int)plVar11[1];
        do {
          if ((int)plVar3[1] != 0) {
            lVar12 = 0;
            do {
              if (*(longlong *)(*plVar3 + lVar12) == *plVar9) goto LAB_143c993e1;
              lVar12 = lVar12 + 8;
            } while ((longlong)(int)plVar3[1] << 3 != lVar12);
          }
          if ((longlong)(int)plVar3[3] == 0) goto LAB_143c993f1;
          lVar12 = 0;
          while (*(longlong *)(plVar3[2] + lVar12) != *plVar9) {
            lVar12 = lVar12 + 8;
            if ((longlong)(int)plVar3[3] * 8 == lVar12) goto LAB_143c993f1;
          }
LAB_143c993e1:
          plVar9 = plVar9 + 1;
        } while (plVar9 != plVar1);
      }
      iVar2 = (int)plVar11[5];
      if (0 < iVar2) {
        uVar5 = rand();
        iVar6 = (int)((float)iVar2 * ((float)(uVar5 & 0x7fff) / 32767.0));
        iVar10 = iVar2 + -1;
        if (iVar6 < iVar2 + -1) {
          iVar10 = iVar6;
        }
        plVar11 = (longlong *)(plVar11[4] + (longlong)iVar10 * 0x18);
        plVar3 = (longlong *)*param_1;
        lVar12 = *plVar11;
        if (*plVar3 != lVar12) {
          plVar3[2] = 0;
        }
        *plVar3 = lVar12;
        if (plVar3[1] != plVar11[1]) {
          plVar3[2] = 0;
        }
        uVar8 = FUN_14477b664();
        lVar12 = FUN_14477b664(uVar8);
        plVar3[1] = lVar12;
        plVar3[2] = plVar11[2];
        param_1 = (longlong *)*param_1;
        lVar12 = param_1[1];
        if (lVar12 == 0) {
          uVar8 = FUN_14043db3a();
          lVar12 = FUN_14477b664(uVar8);
          param_1[1] = lVar12;
        }
        if (param_1[2] != 0) {
          return false;
        }
        if (lVar12 == 0) {
          return true;
        }
        if (*param_1 != 0) {
          plVar11 = *(longlong **)(lVar12 + 0xb8);
          if ((plVar11 == (longlong *)0x0) ||
             (cVar4 = (**(code **)(*plVar11 + 0x108))(plVar11), cVar4 == '\0')) {
            lVar12 = 0;
          }
          else {
            uVar8 = (**(code **)(*plVar11 + 0x110))(plVar11);
            lVar12 = FUN_144aff482(uVar8,param_1);
          }
          param_1[2] = lVar12;
          return lVar12 == 0;
        }
        return true;
      }
LAB_143c993f1:
      plVar11 = plVar11 + 6;
    } while (plVar11 != plVar7);
  }
  return false;
}



// FUNCTION 143c9951a FUN_143c9951a body=5 status=ok
// SIG undefined FUN_143c9951a(void)

longlong FUN_143c9951a(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 143c99520 FUN_143c99520 body=12 status=ok
// SIG undefined FUN_143c99520(void)

void FUN_143c99520(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143c99529. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143c9952c FUN_143c9952c body=29 status=ok
// SIG undefined FUN_143c9952c(void)

undefined8 FUN_143c9952c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c9954a FUN_143c9954a body=200 status=ok
// SIG undefined FUN_143c9954a(void)

undefined8 FUN_143c9954a(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  
  if ((longlong)*(int *)(param_2 + 0x90) != 0) {
    plVar5 = *(longlong **)(param_2 + 0x88);
    plVar1 = plVar5 + (longlong)*(int *)(param_2 + 0x90) * 9;
    plVar3 = (longlong *)param_1[1];
    do {
      if ((longlong)(int)plVar5[1] == 0) {
LAB_143c995f3:
        uVar4 = FUN_1403562ce(plVar5 + 4);
        *(undefined8 *)*param_1 = uVar4;
        return 0;
      }
      plVar6 = (longlong *)*plVar5;
      plVar2 = plVar6 + (int)plVar5[1];
      while( true ) {
        if ((int)plVar3[1] != 0) {
          lVar7 = 0;
          do {
            if (*(longlong *)(*plVar3 + lVar7) == *plVar6) goto LAB_143c995dd;
            lVar7 = lVar7 + 8;
          } while ((longlong)(int)plVar3[1] << 3 != lVar7);
        }
        if ((longlong)(int)plVar3[3] == 0) break;
        lVar7 = 0;
        while (*(longlong *)(plVar3[2] + lVar7) != *plVar6) {
          lVar7 = lVar7 + 8;
          if ((longlong)(int)plVar3[3] * 8 == lVar7) goto LAB_143c995e8;
        }
LAB_143c995dd:
        plVar6 = plVar6 + 1;
        if (plVar6 == plVar2) goto LAB_143c995f3;
      }
LAB_143c995e8:
      plVar5 = plVar5 + 9;
    } while (plVar5 != plVar1);
  }
  return 0;
}



// FUNCTION 143c9962a FUN_143c9962a body=5 status=ok
// SIG undefined FUN_143c9962a(void)

longlong FUN_143c9962a(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 143c99630 FUN_143c99630 body=12 status=ok
// SIG undefined FUN_143c99630(void)

void FUN_143c99630(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143c99639. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143c9963c FUN_143c9963c body=29 status=ok
// SIG undefined FUN_143c9963c(void)

undefined8 FUN_143c9963c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c9965a FUN_143c9965a body=462 status=ok
// SIG undefined FUN_143c9965a(void)

undefined8 FUN_143c9965a(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong lVar14;
  
  plVar7 = (longlong *)*param_1;
  if ((longlong)*(int *)(param_2 + 0xf0) != 0) {
    plVar10 = *(longlong **)(param_2 + 0xe8);
    plVar4 = plVar10 + (longlong)*(int *)(param_2 + 0xf0) * 0x10;
    plVar2 = (longlong *)param_1[1];
    do {
      if ((longlong)(int)plVar10[0xd] == 0) goto LAB_143c9970f;
      plVar13 = (longlong *)plVar10[0xc];
      plVar1 = plVar13 + (int)plVar10[0xd];
      while( true ) {
        if ((int)plVar2[1] != 0) {
          lVar11 = 0;
          do {
            if (*(longlong *)(*plVar2 + lVar11) == *plVar13) goto LAB_143c996f1;
            lVar11 = lVar11 + 8;
          } while ((longlong)(int)plVar2[1] << 3 != lVar11);
        }
        if ((int)plVar2[3] == 0) break;
        lVar11 = 0;
        while (*(longlong *)(plVar2[2] + lVar11) != *plVar13) {
          lVar11 = lVar11 + 8;
          if ((longlong)(int)plVar2[3] << 3 == lVar11) goto LAB_143c996fc;
        }
LAB_143c996f1:
        plVar13 = plVar13 + 1;
        if (plVar13 == plVar1) goto LAB_143c9970f;
      }
LAB_143c996fc:
      plVar10 = plVar10 + 0x10;
    } while (plVar10 != plVar4);
  }
  plVar10 = (longlong *)(param_2 + 0x88);
LAB_143c9970f:
  lVar11 = param_1[2];
  FUN_140f26c7f();
  lVar6 = *plVar7;
  if (lVar6 == DAT_14cb710c0) {
LAB_143c99724:
    if (plVar10 != (longlong *)0x0) {
      lVar6 = 0;
      if ((longlong)(int)plVar10[1] != 0) {
        lVar12 = *plVar10;
        lVar14 = (longlong)(int)plVar10[1] * 0x28;
        do {
          lVar5 = FUN_140655cde(lVar12);
          lVar6 = 0;
          if (lVar5 != 0) {
            iVar9 = *(int *)(lVar11 + 0x108);
            *(uint *)(lVar11 + 0x108) = iVar9 + 1U;
            if (*(uint *)(lVar11 + 0x10c) < iVar9 + 1U) {
              FUN_145c06b32(lVar11,iVar9);
            }
            lVar6 = *(longlong *)(lVar11 + 0x100);
            if (*(longlong *)(lVar11 + 0x100) == 0) {
              lVar6 = lVar11;
            }
            *(longlong *)(lVar6 + (longlong)iVar9 * 8) = lVar5;
          }
          lVar12 = lVar12 + 0x28;
          lVar14 = lVar14 + -0x28;
        } while (lVar14 != 0);
      }
    }
  }
  else if ((int)plVar10[3] != *(int *)((longlong)plVar10 + 0x44)) {
    uVar3 = (uint)((ulonglong)lVar6 >> 0x10);
    uVar8 = (uint)lVar6 & 0xffff;
    plVar7 = plVar10 + 9;
    if ((longlong *)plVar10[10] != (longlong *)0x0) {
      plVar7 = (longlong *)plVar10[10];
    }
    iVar9 = *(int *)((longlong)plVar7 +
                    (ulonglong)
                    ((int)plVar10[0xb] - 1U &
                    (int)((ulonglong)lVar6 >> 0x20) + ((uint)lVar6 << 0x10 | uVar8) +
                    (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar8 >> 4)) * 4);
    if (iVar9 != -1) {
      do {
        lVar12 = plVar10[2] + (longlong)iVar9 * 0x20;
        if (*(longlong *)(plVar10[2] + (longlong)iVar9 * 0x20) == lVar6) {
          if (lVar12 != 0) {
            plVar10 = (longlong *)(lVar12 + 8);
            goto LAB_143c99724;
          }
          break;
        }
        iVar9 = *(int *)(lVar12 + 0x18);
      } while (iVar9 != -1);
    }
  }
  return CONCAT71((int7)((ulonglong)lVar6 >> 8),1);
}



// FUNCTION 143c99848 FUN_143c99848 body=5 status=ok
// SIG undefined FUN_143c99848(void)

longlong FUN_143c99848(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 143c9984e FUN_143c9984e body=12 status=ok
// SIG undefined FUN_143c9984e(void)

void FUN_143c9984e(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143c99857. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143c9985a FUN_143c9985a body=29 status=ok
// SIG undefined FUN_143c9985a(void)

undefined8 FUN_143c9985a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c998c8 FUN_143c998c8 body=29 status=ok
// SIG undefined FUN_143c998c8(void)

undefined8 FUN_143c998c8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c99922 FUN_143c99922 body=29 status=ok
// SIG undefined FUN_143c99922(void)

undefined8 FUN_143c99922(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c99940 FUN_143c99940 body=69 status=ok
// SIG undefined FUN_143c99940(void)

void FUN_143c99940(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(char *)(param_2 + 0x20) == '\x01') {
    lVar2 = *param_1;
    iVar1 = *(int *)(lVar2 + 0x28);
    *(uint *)(lVar2 + 0x28) = iVar1 + 1U;
    if (*(uint *)(lVar2 + 0x2c) < iVar1 + 1U) {
      FUN_1487bec12(lVar2,iVar1);
    }
    lVar3 = *(longlong *)(lVar2 + 0x20);
    if (*(longlong *)(lVar2 + 0x20) == 0) {
      lVar3 = lVar2;
    }
    *(longlong *)(lVar3 + (longlong)iVar1 * 8) = param_2;
  }
  return;
}



// FUNCTION 143c999b0 FUN_143c999b0 body=29 status=ok
// SIG undefined FUN_143c999b0(void)

undefined8 FUN_143c999b0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c999ce FUN_143c999ce body=821 status=ok
// SIG undefined FUN_143c999ce(void)

void FUN_143c999ce(undefined8 *param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  code *pcVar4;
  byte bVar5;
  undefined8 ****ppppuVar6;
  longlong lVar7;
  undefined1 auStack_158 [40];
  undefined4 local_130 [3];
  undefined4 uStack_124;
  char local_120 [16];
  longlong *local_110;
  undefined4 local_f8 [2];
  undefined8 ***local_f0 [3];
  ushort local_d8;
  byte local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  void *local_b8;
  int local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  void *local_60;
  int local_58;
  undefined4 local_54;
  void *local_50;
  int local_48;
  undefined4 local_44;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if ((longlong)(int)param_2[0x20] == 0) {
LAB_143c99a24:
    if ((((*(char *)(param_2 + 8) == '\x01') && (*(longlong *)param_1[1] != 0)) &&
        (-1 < *(int *)param_1[2])) &&
       (*(int *)param_1[2] < *(int *)(*(longlong *)param_1[1] + 0x20))) {
      local_c8 = *param_2;
      uStack_c4 = param_2[1];
      uStack_c0 = param_2[2];
      uStack_bc = param_2[3];
      local_b8 = (void *)0x0;
      local_b0 = param_2[6];
      lVar7 = (longlong)local_b0;
      pvVar3 = *(void **)(param_2 + 4);
      if (lVar7 == 0) {
        local_ac = 0;
      }
      else {
        FUN_1446dd670(&local_b8,local_b0,0);
        memcpy(local_b8,pvVar3,lVar7 * 2);
      }
      local_a8 = *(undefined8 *)(param_2 + 8);
      uStack_a0 = *(undefined8 *)(param_2 + 10);
      local_98 = param_2[0xc];
      uStack_94 = param_2[0xd];
      uStack_90 = param_2[0xe];
      uStack_8c = param_2[0xf];
      local_88 = param_2[0x10];
      uStack_84 = param_2[0x11];
      uStack_80 = param_2[0x12];
      uStack_7c = param_2[0x13];
      local_78 = *(undefined8 *)(param_2 + 0x14);
      local_70 = param_2[0x16];
      uStack_6c = param_2[0x17];
      uStack_68 = param_2[0x18];
      uStack_64 = param_2[0x19];
      local_60 = (void *)0x0;
      local_58 = param_2[0x1c];
      lVar7 = (longlong)local_58;
      pvVar3 = *(void **)(param_2 + 0x1a);
      if (lVar7 == 0) {
        local_54 = 0;
      }
      else {
        FUN_1446dd670(&local_60,local_58,0);
        memcpy(local_60,pvVar3,lVar7 * 2);
      }
      local_50 = (void *)0x0;
      local_48 = param_2[0x20];
      lVar7 = (longlong)local_48;
      pvVar3 = *(void **)(param_2 + 0x1e);
      if (lVar7 == 0) {
        local_44 = 0;
      }
      else {
        FUN_1401b309e(&local_50,local_48,0);
        memcpy(local_50,pvVar3,lVar7 << 3);
      }
      iVar2 = *(int *)param_1[2];
      lVar7 = *(longlong *)(*(longlong *)param_1[1] + 0x18);
      local_120[0] = '\0';
      local_f8[0] = 0;
      FUN_14575a19a(local_120,0);
      FUN_1447c3578(lVar7 + (longlong)iVar2 * 0x58 + 0x20,local_f0,local_120);
      FUN_140a1ca64(local_f0,local_130);
      local_a8 = CONCAT44(local_130[0],(undefined4)local_a8);
      local_98 = uStack_124;
      pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_d0 * 0x120));
      if (pcVar4 != (code *)0x0) {
        ppppuVar6 = local_f0;
        if (0x18 < local_d8) {
          ppppuVar6 = (undefined8 ****)local_f0[0];
        }
        (*pcVar4)(ppppuVar6);
      }
      if (0x18 < local_d8) {
        FUN_1400020a8(local_f0[0]);
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
      bVar5 = FUN_1408328ae(param_1[3],&local_c8);
      *(int *)param_1[2] = *(int *)param_1[2] + 1;
      if (local_50 != (void *)0x0) {
        FUN_1400020a8();
      }
      if (local_60 != (void *)0x0) {
        FUN_1400020a8();
      }
      if (local_b8 != (void *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      bVar5 = FUN_1408328ae(param_1[3],param_2);
    }
    *(byte *)param_1[4] = *(byte *)param_1[4] | bVar5;
  }
  else {
    lVar7 = 0;
    do {
      if (*(longlong *)(*(longlong *)(param_2 + 0x1e) + lVar7) == *(longlong *)*param_1)
      goto LAB_143c99a24;
      lVar7 = lVar7 + 8;
    } while ((longlong)(int)param_2[0x20] * 8 != lVar7);
  }
  if ((local_38 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143c99d04 FUN_143c99d04 body=78 status=ok
// SIG undefined FUN_143c99d04(void)

undefined8 * FUN_143c99d04(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)FUN_14001cc68(0x30,8);
  *param_2 = puVar4;
  *puVar4 = &PTR_FUN_14b3e7170;
  puVar4[5] = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  puVar4[3] = *(undefined8 *)(param_1 + 0x18);
  puVar4[4] = uVar3;
  puVar4[1] = uVar1;
  puVar4[2] = uVar2;
  return puVar4 + 1;
}



// FUNCTION 143c99d58 FUN_143c99d58 body=29 status=ok
// SIG undefined FUN_143c99d58(void)

void FUN_143c99d58(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143c99d76 FUN_143c99d76 body=29 status=ok
// SIG undefined FUN_143c99d76(void)

undefined8 FUN_143c99d76(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c99d93 FUN_143c99d93 body=15 status=ok
// SIG undefined FUN_143c99d93(void)

void FUN_143c99d93(undefined8 *param_1)

{
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



// FUNCTION 143c99da2 FUN_143c99da2 body=265 status=ok
// SIG undefined FUN_143c99da2(void)

void FUN_143c99da2(longlong param_1,int param_2)

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
    uVar4 = lVar3 * 0x30;
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



// FUNCTION 143c99eac FUN_143c99eac body=294 status=ok
// SIG undefined FUN_143c99eac(void)

undefined8 FUN_143c99eac(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  bool bVar5;
  undefined1 auStack_68 [32];
  uint local_48;
  int local_44;
  longlong local_40;
  uint *local_38;
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = *param_1;
  lVar3 = FUN_1401ca522(param_2 + 0x88);
  if ((lVar3 != 0) && (*(longlong *)(param_2 + 0xb0) != 0)) {
    lVar3 = FUN_1401ca522(param_2 + 0x88);
    local_44 = 0;
    if (lVar3 == 0) {
      local_48 = 0;
      iVar2 = 0;
    }
    else {
      local_48 = *(uint *)(lVar3 + 0xc);
      if ((int)local_48 < DAT_14c9647dc) {
        lVar3 = (ulonglong)((local_48 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_48 >> 0x10) * 8);
      }
      else {
        lVar3 = 0;
      }
      iVar2 = *(int *)(lVar3 + 0x10);
      if (*(int *)(lVar3 + 0x10) == 0) {
        LOCK();
        iVar2 = DAT_14c964868 + 1;
        UNLOCK();
        iVar4 = DAT_14c964868 + 1;
        bVar5 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar2;
        if (bVar5) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar4);
        }
        LOCK();
        iVar2 = *(int *)(lVar3 + 0x10);
        bVar5 = iVar2 == 0;
        if (bVar5) {
          *(int *)(lVar3 + 0x10) = iVar4;
          iVar2 = 0;
        }
        UNLOCK();
        if (bVar5) {
          iVar2 = iVar4;
        }
      }
    }
    local_38 = &local_48;
    local_44 = iVar2;
    local_40 = param_2 + 0xb0;
    FUN_145d5b218(lVar1 + 0x20,local_2c);
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 1;
}



// FUNCTION 143c99ffe FUN_143c99ffe body=29 status=ok
// SIG undefined FUN_143c99ffe(void)

undefined8 FUN_143c99ffe(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c9a01c FUN_143c9a01c body=66 status=ok
// SIG undefined FUN_143c9a01c(void)

undefined1 FUN_143c9a01c(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (*(char *)(param_2 + 0xc0) == '\0') {
    uVar1 = *param_1;
    lVar2 = FUN_1487ba92a(uVar1,param_2 + 0xcc);
    if (lVar2 != 0) {
      FUN_1487ba7d6(uVar1,param_2,lVar2);
    }
  }
  return 1;
}



// FUNCTION 143c9a088 FUN_143c9a088 body=29 status=ok
// SIG undefined FUN_143c9a088(void)

undefined8 FUN_143c9a088(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c9a0a6 FUN_143c9a0a6 body=261 status=ok
// SIG undefined FUN_143c9a0a6(void)

void FUN_143c9a0a6(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  undefined1 auStack_68 [32];
  uint local_48;
  int local_44;
  longlong local_40;
  uint *local_38;
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(longlong *)(param_2 + 0x1898) != 0) {
    lVar1 = *param_1;
    local_44 = 0;
    if (param_2 == 0) {
      local_48 = 0;
      iVar2 = 0;
    }
    else {
      local_48 = *(uint *)(param_2 + 0xc);
      if ((int)local_48 < DAT_14c9647dc) {
        lVar4 = (ulonglong)((local_48 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_48 >> 0x10) * 8);
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
    }
    local_38 = &local_48;
    local_44 = iVar2;
    local_40 = param_2 + 0x1898;
    FUN_1487bf194(lVar1 + 0x20,local_2c);
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143c9a1ac FUN_143c9a1ac body=1631 status=ok
// SIG undefined FUN_143c9a1ac(void)

undefined8 FUN_143c9a1ac(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  uint *puVar2;
  longlong *_Src;
  void *_Dst;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  byte bVar11;
  int iVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint uVar15;
  undefined8 *puVar16;
  longlong lVar17;
  ulonglong uVar18;
  int iVar19;
  int iVar20;
  ulonglong uVar21;
  int iVar22;
  bool bVar23;
  undefined1 auStack_d8 [40];
  ulonglong local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  longlong lStack_60;
  ulonglong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (*(char *)(param_2 + 0xc0) == '\x01') {
    lVar3 = *param_1;
    puVar16 = &DAT_14caa8558;
    if (*(longlong *)(param_1[1] + 0x40) != 0) {
      puVar16 = (undefined8 *)(*(longlong *)(param_1[1] + 0x40) + 0x18);
    }
    uVar8 = FUN_140f5d882(param_2,puVar16);
    lVar9 = FUN_1412fe774(uVar8);
    if (lVar9 != 0) {
      plVar1 = (longlong *)(lVar3 + 0x78);
      if (*(int *)(lVar3 + 0xac) == 0) {
        iVar22 = *(int *)(lVar3 + 0x80);
        *(int *)(lVar3 + 0x80) = iVar22 + 1;
        if (*(int *)(lVar3 + 0x84) == iVar22) {
          FUN_1406a7630(plVar1,iVar22);
        }
        iVar20 = *(int *)(lVar3 + 0xa0);
        if (iVar20 == 0) {
          iVar4 = -1;
        }
        else {
          iVar4 = iVar20 + 0x1e;
          if (-1 < iVar20 + -1) {
            iVar4 = iVar20 + -1;
          }
          iVar4 = iVar4 >> 5;
        }
        lVar17 = lVar3 + 0x88;
        iVar12 = iVar20 + 1;
        iVar19 = iVar20 + 0x1f;
        if (-1 < iVar20) {
          iVar19 = iVar20;
        }
        if (iVar19 >> 5 == iVar4) {
          *(int *)(lVar3 + 0xa0) = iVar12;
        }
        else {
          if (*(int *)(lVar3 + 0xa4) <= iVar20) {
            iVar4 = iVar20;
            if (iVar20 + 0x20U < 0xa0) {
              iVar12 = 0x80;
            }
            else {
              uVar5 = iVar20 + 0x20U >> 5;
              if (*(int *)(lVar3 + 0xa4) + 0x1fU < 0xa0) {
                uVar15 = 4;
                if (4 < uVar5) {
                  uVar15 = uVar5;
                }
              }
              else {
                uVar15 = uVar5 + (uVar5 * 3 >> 3) + 0x10;
              }
              uVar13 = (ulonglong)(uVar15 * 4);
              if (DAT_14c872d28 != (longlong *)0x0) {
                if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                  uVar6 = (uint)(uVar13 + 0xf);
                  if (uVar15 < 0x1ffd) {
                    uVar13 = (ulonglong)
                             (ushort)(&DAT_14c841d90)
                                     [0x32 - (byte)(&DAT_14c841e00)[uVar13 + 0xf >> 4]];
                  }
                  else {
                    uVar14 = (ulonglong)(uVar6 & 0xfffffff0);
                    if (uVar14 < 0x7ff1) {
                      bVar11 = (&DAT_14c841e00)[uVar6 >> 4];
                      uVar18 = 0x32;
                      if (0x32 < bVar11) {
                        uVar18 = (ulonglong)bVar11;
                      }
                      uVar21 = 0x32 - (ulonglong)bVar11;
                      do {
                        uVar13 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar21 & 0xffffffff];
                        if (((&DAT_14c841d90)[uVar21 & 0xffffffff] & 0xf) == 0) goto LAB_143c9a665;
                        lVar10 = uVar18 + 1 + uVar21;
                        uVar21 = uVar21 - 1;
                      } while (lVar10 != 0x33);
                    }
                    uVar13 = 0x10;
                    if (0x10 < DAT_14c841df8) {
                      uVar13 = (ulonglong)DAT_14c841df8;
                    }
                    uVar13 = -uVar13 & (uVar14 + uVar13) - 1;
                  }
                }
                else {
                  local_b0 = (ulonglong)uVar5;
                  uVar13 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar13,0);
                  uVar5 = (uint)local_b0;
                  iVar4 = *(int *)(lVar3 + 0xa0);
                }
              }
LAB_143c9a665:
              iVar7 = (int)(uVar13 >> 2);
              iVar12 = -0x20;
              if ((int)uVar5 <= iVar7) {
                iVar12 = iVar7 << 5;
              }
            }
            *(int *)(lVar3 + 0xa4) = iVar12;
            FUN_1446efbd8(lVar17,iVar4);
            iVar12 = *(int *)(lVar3 + 0xa0) + 1;
          }
          iVar4 = iVar12 + 0x1f;
          if (-1 < iVar12) {
            iVar4 = iVar12;
          }
          *(int *)(lVar3 + 0xa0) = iVar12;
          if (iVar12 % 0x20 != 0) {
            lVar10 = *(longlong *)(lVar3 + 0x98);
            if (*(longlong *)(lVar3 + 0x98) == 0) {
              lVar10 = lVar17;
            }
            bVar11 = -(char)(iVar12 % 0x20);
            *(uint *)(lVar10 + (longlong)(iVar4 >> 5) * 4) =
                 (uint)(*(int *)(lVar10 + (longlong)(iVar4 >> 5) * 4) << (bVar11 & 0x1f)) >>
                 (bVar11 & 0x1f);
          }
        }
        lVar10 = (longlong)iVar22;
        if (*(longlong *)(lVar3 + 0x98) != 0) {
          lVar17 = *(longlong *)(lVar3 + 0x98);
        }
        bVar11 = (byte)iVar20 & 0x1f;
        puVar2 = (uint *)(lVar17 + (longlong)(iVar19 >> 5) * 4);
        *puVar2 = *puVar2 & (-2 << bVar11 | 0xfffffffeU >> 0x20 - bVar11);
      }
      else {
        iVar22 = *(int *)(lVar3 + 0xa8);
        lVar10 = (longlong)iVar22;
        iVar20 = *(int *)(*(longlong *)(lVar3 + 0x78) + 4 + lVar10 * 0x68);
        *(int *)(lVar3 + 0xa8) = iVar20;
        iVar4 = *(int *)(lVar3 + 0xac) + -1;
        *(int *)(lVar3 + 0xac) = iVar4;
        if (iVar4 != 0) {
          *(undefined4 *)(*(longlong *)(lVar3 + 0x78) + (longlong)iVar20 * 0x68) = 0xffffffff;
        }
      }
      lVar17 = lVar3 + 0x88;
      if (*(longlong *)(lVar3 + 0x98) != 0) {
        lVar17 = *(longlong *)(lVar3 + 0x98);
      }
      iVar20 = iVar22 + 0x1f;
      if (-1 < iVar22) {
        iVar20 = iVar22;
      }
      puVar2 = (uint *)(lVar17 + (longlong)(iVar20 >> 5) * 4);
      *puVar2 = *puVar2 | 1 << ((byte)iVar22 & 0x1f);
      _Src = (longlong *)(*(longlong *)(lVar3 + 0x78) + lVar10 * 0x68);
      local_78 = 0;
      uStack_6c = 0;
      local_58 = 0;
      local_68 = 0;
      lStack_60 = 0;
      local_88 = 0;
      uStack_80 = 0;
      local_98 = 0;
      uStack_90 = 0;
      local_a8 = 0;
      uStack_a0 = 0;
      uStack_74 = 0x80;
      uStack_70 = 0xffffffff;
      lVar10 = *(longlong *)(lVar3 + 0x78) + 0x10 + lVar10 * 0x68;
      *(undefined8 *)(lVar10 + -0x10) = *(undefined8 *)(param_2 + 0xc4);
      *(undefined8 *)(lVar10 + -8) = 0;
      FUN_14105a876(lVar10,&uStack_a0);
      local_58 = local_58 & 0xffffffff00000000;
      if (lStack_60 != 0) {
        FUN_1400020a8();
      }
      FUN_140105116(&uStack_a0);
      *(undefined4 *)(_Src + 0xc) = 0xffffffff;
      lVar10 = *_Src;
      uVar5 = (uint)((ulonglong)lVar10 >> 0x10);
      uVar15 = (uint)lVar10 & 0xffff;
      uVar5 = ((uint)lVar10 << 0x10 | uVar15) + (int)((ulonglong)lVar10 >> 0x20) +
              (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar15 >> 4);
      uVar15 = *(int *)(lVar3 + 0x80) - *(int *)(lVar3 + 0xac);
      if ((uVar15 != 0) && (uVar15 != 1)) {
        lVar17 = lVar3 + 0xb0;
        if (*(longlong *)(lVar3 + 0xb8) != 0) {
          lVar17 = *(longlong *)(lVar3 + 0xb8);
        }
        iVar20 = *(int *)(lVar17 + (ulonglong)(*(int *)(lVar3 + 0xc0) - 1U & uVar5) * 4);
        if (iVar20 != -1) {
          do {
            _Dst = (void *)(*plVar1 + (longlong)iVar20 * 0x68);
            if (*(longlong *)(*plVar1 + (longlong)iVar20 * 0x68) == lVar10) {
              *(undefined4 *)((longlong)_Dst + 0x58) = 0;
              if (*(longlong *)((longlong)_Dst + 0x50) != 0) {
                FUN_1400020a8();
              }
              FUN_140105116((longlong)_Dst + 0x10);
              memmove(_Dst,_Src,0x60);
              FUN_1487bf694(plVar1,iVar22);
              iVar22 = iVar20;
              goto LAB_143c9a49b;
            }
            iVar20 = *(int *)((longlong)_Dst + 0x60);
          } while (iVar20 != -1);
        }
      }
      if (uVar15 < 4) {
        iVar20 = 1;
      }
      else {
        uVar13 = (ulonglong)(uVar15 & 0xfffffffe) + 0xf;
        lVar10 = 0x3f;
        if (uVar13 != 0) {
          for (; uVar13 >> lVar10 == 0; lVar10 = lVar10 + -1) {
          }
        }
        iVar20 = 1 << ((byte)lVar10 & 0x1f);
      }
      if (((int)uVar15 < 1) || (iVar20 <= *(int *)(lVar3 + 0xc0))) {
        uVar5 = *(int *)(lVar3 + 0xc0) - 1U & uVar5;
        *(uint *)((longlong)_Src + 100) = uVar5;
        lVar10 = *(longlong *)(lVar3 + 0xb8);
        if (*(longlong *)(lVar3 + 0xb8) == 0) {
          lVar10 = lVar3 + 0xb0;
        }
        *(undefined4 *)(_Src + 0xc) =
             *(undefined4 *)
              (lVar10 + ((longlong)*(int *)(lVar3 + 0xc0) - 1U & (longlong)(int)uVar5) * 4);
        lVar10 = *(longlong *)(lVar3 + 0xb8);
        if (*(longlong *)(lVar3 + 0xb8) == 0) {
          lVar10 = lVar3 + 0xb0;
        }
        *(int *)(lVar10 + ((longlong)*(int *)(lVar3 + 0xc0) - 1U & (longlong)(int)uVar5) * 4) =
             iVar22;
      }
      else {
        *(int *)(lVar3 + 0xc0) = iVar20;
        FUN_141865ba0(plVar1);
      }
LAB_143c9a49b:
      lVar3 = *plVar1;
      uVar5 = *(uint *)(lVar9 + 0xc);
      *(uint *)(lVar3 + 8 + (longlong)iVar22 * 0x68) = uVar5;
      if ((int)uVar5 < DAT_14c9647dc) {
        lVar9 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
      }
      else {
        lVar9 = 0;
      }
      lVar3 = lVar3 + (longlong)iVar22 * 0x68;
      iVar22 = *(int *)(lVar9 + 0x10);
      if (*(int *)(lVar9 + 0x10) == 0) {
        LOCK();
        iVar22 = DAT_14c964868 + 1;
        UNLOCK();
        iVar20 = DAT_14c964868 + 1;
        bVar23 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar22;
        if (bVar23) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar20);
        }
        LOCK();
        iVar22 = *(int *)(lVar9 + 0x10);
        bVar23 = iVar22 == 0;
        if (bVar23) {
          *(int *)(lVar9 + 0x10) = iVar20;
          iVar22 = 0;
        }
        UNLOCK();
        if (bVar23) {
          iVar22 = iVar20;
        }
      }
      *(int *)(lVar3 + 0xc) = iVar22;
      FUN_141262aba(lVar3 + 0x10,param_2 + 0x130);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 1;
}



// FUNCTION 143c9a836 FUN_143c9a836 body=29 status=ok
// SIG undefined FUN_143c9a836(void)

undefined8 FUN_143c9a836(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c9a854 FUN_143c9a854 body=31 status=ok
// SIG undefined FUN_143c9a854(void)

undefined8 FUN_143c9a854(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c9a914 FUN_143c9a914 body=363 status=ok
// SIG undefined FUN_143c9a914(void)

void FUN_143c9a914(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  longlong *plVar8;
  longlong lVar9;
  uint uVar10;
  undefined1 auStack_68 [32];
  double local_48;
  double dStack_40;
  double local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar4 = param_1[1];
  if (*(int *)(lVar4 + 0x10) != *(int *)(lVar4 + 0x3c)) {
    lVar5 = *param_2;
    uVar7 = (uint)((ulonglong)lVar5 >> 0x10);
    uVar10 = (uint)lVar5 & 0xffff;
    lVar9 = lVar4 + 0x40;
    if (*(longlong *)(lVar4 + 0x48) != 0) {
      lVar9 = *(longlong *)(lVar4 + 0x48);
    }
    iVar3 = *(int *)(lVar9 + (ulonglong)
                             (*(int *)(lVar4 + 0x50) - 1U &
                             (int)((ulonglong)lVar5 >> 0x20) + ((uint)lVar5 << 0x10 | uVar10) +
                             (uVar7 << 0x13 | uVar7 & 0xffff) + (uVar10 >> 4)) * 4);
    if (iVar3 != -1) {
      plVar6 = (longlong *)*param_1;
      do {
        plVar1 = (longlong *)(*(longlong *)(lVar4 + 8) + (longlong)iVar3 * 0x18);
        if (*plVar1 == lVar5) {
          plVar8 = plVar1 + 1;
          if (plVar8 != (longlong *)0x0 && plVar1 != (longlong *)0x0) {
            cVar2 = (char)param_2[4];
            if (cVar2 == '\x01') {
              local_48 = *(double *)((longlong)param_2 + 0x24);
              dStack_40 = *(double *)((longlong)param_2 + 0x2c);
              (**(code **)(*plVar6 + 0xa18))(plVar6,*plVar8);
            }
            else if (cVar2 == '\x03') {
              local_48 = (double)*(float *)(param_2 + 8);
              dStack_40 = (double)*(float *)((longlong)param_2 + 0x44);
              local_38 = (double)*(float *)(param_2 + 9);
              (**(code **)(*plVar6 + 0xa10))(plVar6,*plVar8);
            }
            else if (cVar2 == '\x02') {
                    /* WARNING: Subroutine does not return */
              FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
            }
          }
          break;
        }
        iVar3 = (int)plVar1[2];
      } while (iVar3 != -1);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143c9aa9c FUN_143c9aa9c body=24 status=ok
// SIG undefined FUN_143c9aa9c(void)

longlong FUN_143c9aa9c(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  *(undefined ***)(param_2 + 0x10) = &PTR_FUN_14b3e7430;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_2 + 0x20) = uVar1;
  return param_2 + 0x18;
}



// FUNCTION 143c9aaba FUN_143c9aaba body=12 status=ok
// SIG undefined FUN_143c9aaba(void)

void FUN_143c9aaba(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143c9aac3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143c9aac6 FUN_143c9aac6 body=29 status=ok
// SIG undefined FUN_143c9aac6(void)

undefined8 FUN_143c9aac6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c9aae4 FUN_143c9aae4 body=325 status=ok
// SIG undefined FUN_143c9aae4(void)

void FUN_143c9aae4(longlong *param_1)

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



// FUNCTION 143c9ac2a FUN_143c9ac2a body=87 status=ok
// SIG undefined FUN_143c9ac2a(void)

undefined8 * FUN_143c9ac2a(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14b3e74e0;
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c9ac92 FUN_143c9ac92 body=31 status=ok
// SIG undefined FUN_143c9ac92(void)

undefined8 FUN_143c9ac92(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c9ad52 FUN_143c9ad52 body=44 status=ok
// SIG undefined FUN_143c9ad52(void)

void FUN_143c9ad52(longlong param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)(param_1 + 0x20);
    do {
      *(undefined8 *)(puVar1 + -6) = 0;
      *(undefined8 *)(puVar1 + -4) = 0;
      *(undefined8 *)(puVar1 + -2) = 0xffffffff00000000;
      *puVar1 = 0xffffffff;
      puVar1 = puVar1 + 10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 143c9ad7e FUN_143c9ad7e body=29 status=ok
// SIG undefined FUN_143c9ad7e(void)

undefined8 FUN_143c9ad7e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c9af1a FUN_143c9af1a body=93 status=ok
// SIG undefined FUN_143c9af1a(void)

void FUN_143c9af1a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3e7650;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143c9af78 FUN_143c9af78 body=93 status=ok
// SIG undefined FUN_143c9af78(void)

void FUN_143c9af78(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3e7650;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143c9afd6 FUN_143c9afd6 body=126 status=ok
// SIG undefined FUN_143c9afd6(void)

void FUN_143c9afd6(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3e7650;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143c9b045. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143c9b05e FUN_143c9b05e body=266 status=ok
// SIG undefined FUN_143c9b05e(void)

undefined8 FUN_143c9b05e(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_143c9b162;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_143c9b162;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_143c9b162:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143c9b116;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_1408c7c3a(*(undefined8 *)(param_1 + 0x20));
      uVar6 = 1;
      goto LAB_143c9b116;
    }
  }
  uVar6 = 0;
LAB_143c9b116:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c9b16a FUN_143c9b16a body=29 status=ok
// SIG undefined FUN_143c9b16a(void)

undefined8 FUN_143c9b16a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c9b306 FUN_143c9b306 body=93 status=ok
// SIG undefined FUN_143c9b306(void)

void FUN_143c9b306(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3e76c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143c9b364 FUN_143c9b364 body=93 status=ok
// SIG undefined FUN_143c9b364(void)

void FUN_143c9b364(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3e76c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143c9b3c2 FUN_143c9b3c2 body=126 status=ok
// SIG undefined FUN_143c9b3c2(void)

void FUN_143c9b3c2(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3e76c0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143c9b431. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143c9b44a FUN_143c9b44a body=266 status=ok
// SIG undefined FUN_143c9b44a(void)

undefined8 FUN_143c9b44a(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_143c9b54e;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_143c9b54e;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_143c9b54e:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143c9b502;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_1408c7c3a(*(undefined8 *)(param_1 + 0x20));
      uVar6 = 1;
      goto LAB_143c9b502;
    }
  }
  uVar6 = 0;
LAB_143c9b502:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c9b556 FUN_143c9b556 body=29 status=ok
// SIG undefined FUN_143c9b556(void)

undefined8 FUN_143c9b556(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c9b588 FUN_143c9b588 body=93 status=ok
// SIG undefined FUN_143c9b588(void)

void FUN_143c9b588(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b3e7730;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143c9b5e6 FUN_143c9b5e6 body=93 status=ok
// SIG undefined FUN_143c9b5e6(void)

void FUN_143c9b5e6(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b3e7730;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143c9b644 FUN_143c9b644 body=126 status=ok
// SIG undefined FUN_143c9b644(void)

void FUN_143c9b644(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3e7730;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143c9b6b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143c9b6cc FUN_143c9b6cc body=20 status=ok
// SIG undefined FUN_143c9b6cc(void)

undefined1 FUN_143c9b6cc(longlong param_1)

{
  FUN_143c9b6e0(param_1 + 0x18);
  return 1;
}



// FUNCTION 143c9b6e0 FUN_143c9b6e0 body=205 status=ok
// SIG undefined FUN_143c9b6e0(void)

void FUN_143c9b6e0(uint *param_1)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (*(longlong **)(param_1 + 2) != (longlong *)0x0) {
    if (((param_1[1] != 0) && (uVar1 = *param_1, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc))
    {
      lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      if (((lVar5 != 0) && (*(uint *)(lVar5 + 0x10) == param_1[1])) &&
         ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)) {
        lVar4 = (**(code **)(**(longlong **)(param_1 + 2) + 0x20))();
        *(undefined8 *)(lVar4 + 0x18) = 0;
        lVar5 = *(longlong *)(lVar4 + 0x60);
        if (((lVar5 != 0) && ((*(uint *)(lVar5 + 8) >> 0x1e & 1) == 0)) &&
           (((*(byte *)(lVar5 + 0x348) & 2) == 0 &&
            (iVar2 = *(int *)(lVar4 + 0x38), (longlong)iVar2 != 0)))) {
          lVar5 = *(longlong *)(lVar4 + 0x30);
          lVar4 = 0;
          do {
            plVar3 = *(longlong **)(lVar5 + lVar4);
            if ((plVar3 != (longlong *)0x0) && ((*(uint *)(plVar3 + 1) >> 0x1e & 1) == 0)) {
              (**(code **)(*plVar3 + 0x2e8))();
            }
            lVar4 = lVar4 + 8;
          } while ((longlong)iVar2 * 8 != lVar4);
        }
      }
    }
  }
  return;
}



// FUNCTION 143c9b7ae FUN_143c9b7ae body=31 status=ok
// SIG undefined FUN_143c9b7ae(void)

undefined8 FUN_143c9b7ae(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c9b81c FUN_143c9b81c body=1092 status=ok
// SIG undefined FUN_143c9b81c(void)

void FUN_143c9b81c(longlong param_1,longlong *param_2,longlong *param_3)

{
  ulonglong uVar1;
  uint uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  uint uVar5;
  uint *puVar6;
  longlong lVar7;
  undefined1 *puVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  ulonglong uVar13;
  longlong lVar14;
  uint *puVar15;
  ulonglong uVar16;
  int iVar17;
  ulonglong uVar18;
  undefined1 auStack_1c8 [32];
  undefined4 local_1a8;
  undefined4 local_1a0;
  undefined4 local_198;
  undefined8 local_190;
  wchar_t *local_188;
  code *local_180;
  undefined1 *local_178;
  code **local_170;
  code *local_168;
  code *local_160;
  ulonglong local_158;
  longlong *local_150;
  uint *local_148;
  longlong local_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  code *local_120;
  undefined1 local_118 [192];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  local_58 = (undefined1 *)0x0;
  local_50 = 0x1800000000;
  puVar15 = (uint *)(param_1 + 0x250);
  uVar11 = *(uint *)(param_1 + 0x268);
  uVar13 = (ulonglong)uVar11;
  if (uVar11 == 0) {
    uVar16 = 1;
    uVar18 = 0;
    iVar12 = 0;
    uVar5 = 0;
  }
  else {
    puVar6 = *(uint **)(param_1 + 0x260);
    if (*(uint **)(param_1 + 0x260) == (uint *)0x0) {
      puVar6 = puVar15;
    }
    uVar5 = *puVar6;
    if (uVar5 == 0) {
      iVar12 = uVar11 + 0x1e;
      if (-1 < (int)(uVar11 - 1)) {
        iVar12 = uVar11 - 1;
      }
      uVar18 = 0;
      uVar16 = (ulonglong)(uint)(iVar12 >> 5);
      if (iVar12 >> 5 < 1) {
        uVar16 = uVar18;
      }
      iVar12 = 0;
      do {
        if (uVar16 == uVar18) goto LAB_143c9bc29;
        iVar12 = iVar12 + 0x20;
        uVar5 = puVar6[uVar18 + 1];
        uVar18 = uVar18 + 1;
      } while (uVar5 == 0);
    }
    else {
      uVar18 = 0;
      iVar12 = 0;
    }
    uVar16 = (ulonglong)(-uVar5 & uVar5);
    uVar1 = uVar16 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    uVar5 = (iVar12 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
    if ((int)uVar11 <= (int)uVar5) {
      uVar5 = uVar11;
    }
  }
  if (uVar5 != uVar11) {
    uVar11 = 0xffffffff;
    local_158 = uVar13;
    local_150 = param_2;
    local_148 = puVar15;
    do {
      plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x240) + (longlong)(int)uVar5 * 0x10);
      if (plVar3 != (longlong *)0x0) {
        if ((*(longlong **)(*param_3 + 0x1c8) != plVar3) || ((char)param_3[1] == '\0')) {
          if ((*(byte *)((longlong)plVar3 + 0x2d3) & 8) != 0) {
            *(byte *)((longlong)plVar3 + 0x2d3) = *(byte *)((longlong)plVar3 + 0x2d3) & 0xf7;
            (**(code **)(*plVar3 + 0x958))(plVar3);
            uVar13 = local_158;
          }
          *(byte *)((longlong)plVar3 + 0x1f9) = *(byte *)((longlong)plVar3 + 0x1f9) & 0xfb;
        }
        if (DAT_14cabf8d0 == 0) {
          local_120 = FUN_144a7958c;
          local_160 = FUN_14081d0ea;
          local_168 = FUN_142b47bc4;
          local_170 = &local_120;
          local_178 = &LAB_147860ffd;
          local_180 = FUN_1463713dc;
          local_188 = L"Engine";
          local_190 = 0;
          local_198 = 0x10000005;
          local_1a0 = 0x10;
          local_1a8 = 0x2b0;
          FUN_14081cfa3(L"/Script/Engine",L"ChildActorBaseComponent",&DAT_14cabf8d0,&DAT_147860ffc);
          uVar13 = local_158;
        }
        if (((*(int *)(DAT_14cabf8d0 + 0x38) <= *(int *)(plVar3[2] + 0x38)) &&
            (*(longlong *)
              (*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(DAT_14cabf8d0 + 0x38) * 8) ==
             DAT_14cabf8d0 + 0x30)) &&
           (lVar7 = (**(code **)(*plVar3 + 0x5d8))(plVar3), uVar1 = local_50, uVar13 = local_158,
           lVar7 != 0)) {
          lVar14 = (longlong)(int)local_50;
          uVar5 = (int)local_50 + 1;
          local_50 = CONCAT44(local_50._4_4_,uVar5);
          if (local_50._4_4_ < uVar5) {
            FUN_1470e9d72(local_118,uVar1 & 0xffffffff);
          }
          puVar8 = local_58;
          if (local_58 == (undefined1 *)0x0) {
            puVar8 = local_118;
          }
          *(longlong *)(puVar8 + lVar14 * 8) = lVar7;
          uVar13 = local_158;
          puVar15 = local_148;
        }
      }
      plVar3 = local_150;
      uVar11 = uVar11 & ~(uint)uVar16;
      puVar6 = *(uint **)(param_1 + 0x260);
      if (*(uint **)(param_1 + 0x260) == (uint *)0x0) {
        puVar6 = puVar15;
      }
      uVar2 = *(uint *)(param_1 + 0x268);
      iVar17 = (int)uVar18;
      lVar7 = (longlong)iVar17;
      uVar5 = puVar6[lVar7] & uVar11;
      if (uVar5 == 0) {
        iVar9 = uVar2 + 0x1e;
        if (-1 < (int)(uVar2 - 1)) {
          iVar9 = uVar2 - 1;
        }
        iVar9 = iVar9 >> 5;
        iVar12 = iVar12 + 0x20;
        iVar10 = iVar9;
        if (iVar9 < iVar17) {
          iVar10 = iVar17;
        }
        if (iVar17 < iVar9) {
          lVar14 = 0;
          do {
            uVar5 = puVar6[lVar7 + lVar14 + 1];
            if (uVar5 != 0) {
              uVar18 = (ulonglong)(iVar17 + (int)lVar14 + 1);
              uVar11 = 0xffffffff;
              goto LAB_143c9ba7f;
            }
            iVar12 = iVar12 + 0x20;
            lVar14 = lVar14 + 1;
          } while (iVar10 - lVar7 != lVar14);
          uVar11 = 0xffffffff;
          iVar17 = iVar10;
        }
        uVar18 = (ulonglong)(iVar17 + 1);
        uVar13 = local_158;
        uVar5 = uVar2;
      }
      else {
LAB_143c9ba7f:
        uVar16 = (ulonglong)(-uVar5 & uVar5);
        uVar1 = uVar16 * 2 + 1;
        lVar7 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
          }
        }
        uVar5 = (iVar12 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
        if ((int)uVar2 <= (int)uVar5) {
          uVar5 = uVar2;
        }
      }
    } while (uVar5 != (uint)uVar13);
    lVar7 = (longlong)(int)local_50;
    puVar8 = local_118;
    if (local_58 != (undefined1 *)0x0) {
      puVar8 = local_58;
    }
    if (lVar7 != 0) {
      lVar14 = 0;
      do {
        uVar4 = *(undefined8 *)(puVar8 + lVar14);
        local_138 = (undefined4)*param_3;
        uStack_134 = *(undefined4 *)((longlong)param_3 + 4);
        uStack_130 = (undefined4)param_3[1];
        uStack_12c = *(undefined4 *)((longlong)param_3 + 0xc);
        local_140 = *plVar3;
        if ((local_140 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
        }
        FUN_143c9b81c(uVar4,&local_140,&local_138);
        lVar14 = lVar14 + 8;
      } while (lVar7 * 8 != lVar14);
    }
    if (local_58 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_143c9bc29:
  if ((local_48 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143c9bc62 FUN_143c9bc62 body=316 status=ok
// SIG undefined FUN_143c9bc62(void)

undefined4 FUN_143c9bc62(undefined8 *param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong local_40;
  longlong lStack_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar2 = 0;
  if (DAT_14cb1aeb8 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_14030fc70(DAT_14cb1aeb8,*(undefined8 *)*param_1);
  }
  *(undefined8 *)*param_1 = uVar3;
  lVar1 = *(longlong *)*param_1;
  if (lVar1 == 0) goto LAB_143c9bd71;
  local_40 = 0;
  lStack_38 = 0;
  uVar3 = FUN_140927942();
  lVar4 = FUN_14477b664(uVar3);
  lVar5 = FUN_140927942();
  uVar3 = FUN_140927942();
  FUN_1402d1bfa(&local_30,uVar3,lVar1);
  if (local_30 != 0) {
    lStack_38 = 0;
  }
  local_48 = local_30;
  lVar6 = FUN_140927942();
  if (lVar5 == 0) {
LAB_143c9bd2a:
    lVar6 = lVar5;
  }
  else if (lVar6 == 0) {
    lVar6 = 0;
  }
  else if ((*(int *)(lVar6 + 0x38) <= *(int *)(lVar5 + 0x38)) &&
          (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
           lVar6 + 0x30)) goto LAB_143c9bd2a;
  if (lVar4 != lVar6) {
    lStack_38 = 0;
  }
  uVar3 = FUN_14477b664(lVar6);
  local_40 = FUN_14477b664(uVar3);
  if (local_40 != 0 && local_30 != 0) {
    lStack_38 = lVar1;
  }
  uVar2 = FUN_14035857b(&local_48);
LAB_143c9bd71:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c9bda0 FUN_143c9bda0 body=31 status=ok
// SIG undefined FUN_143c9bda0(void)

undefined8 FUN_143c9bda0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c9be0e FUN_143c9be0e body=31 status=ok
// SIG undefined FUN_143c9be0e(void)

undefined8 FUN_143c9be0e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c9be7a FUN_143c9be7a body=29 status=ok
// SIG undefined FUN_143c9be7a(void)

undefined8 FUN_143c9be7a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c9c016 FUN_143c9c016 body=101 status=ok
// SIG undefined FUN_143c9c016(void)

void FUN_143c9c016(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b3e7960;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 143c9c07c FUN_143c9c07c body=101 status=ok
// SIG undefined FUN_143c9c07c(void)

void FUN_143c9c07c(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b3e7960;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 143c9c0e2 FUN_143c9c0e2 body=134 status=ok
// SIG undefined FUN_143c9c0e2(void)

void FUN_143c9c0e2(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3e7960;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143c9c159. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143c9c172 FUN_143c9c172 body=269 status=ok
// SIG undefined FUN_143c9c172(void)

undefined8 FUN_143c9c172(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_143c9c279;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_143c9c279;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_143c9c279:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143c9c22d;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_143c9c280(param_1 + 0x20);
      uVar6 = 1;
      goto LAB_143c9c22d;
    }
  }
  uVar6 = 0;
LAB_143c9c22d:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c9c280 FUN_143c9c280 body=472 status=ok
// SIG undefined FUN_143c9c280(void)

void FUN_143c9c280(uint *param_1)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_1[1] != 0) {
    uVar1 = *param_1;
    uVar5 = 0;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_143c9c2f2;
    puVar6 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((puVar6 != (undefined8 *)0x0) &&
       ((*(uint *)(puVar6 + 2) == param_1[1] && ((*(uint *)(puVar6 + 1) & 0x10200000) == 0)))) {
      uVar5 = *puVar6;
      goto LAB_143c9c2f2;
    }
  }
  uVar5 = 0;
LAB_143c9c2f2:
  FUN_140d526ba(uVar5,0);
  if (((param_1[3] != 0) && (uVar1 = param_1[2], -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc))
  {
    plVar7 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar7 != (longlong *)0x0) && (*(uint *)(plVar7 + 2) == param_1[3])) &&
       (((*(uint *)(plVar7 + 1) & 0x10200000) == 0 &&
        ((lVar4 = *plVar7, lVar4 != 0 &&
         (*(int *)(lVar4 + 0x2868) != *(int *)(&DAT_00002894 + lVar4))))))) {
      uVar5 = *(undefined8 *)param_1;
      lVar9 = lVar4 + 0x2898;
      if (*(longlong *)(lVar4 + 0x28a0) != 0) {
        lVar9 = *(longlong *)(lVar4 + 0x28a0);
      }
      uVar8 = (longlong)(int)((uint)((ulonglong)uVar5 >> 0x20) ^ (uint)uVar5) &
              (longlong)*(int *)(lVar4 + 0x28a8) - 1U;
      lVar3 = (longlong)*(int *)(lVar9 + uVar8 * 4);
      if (lVar3 != -1) {
        plVar7 = (longlong *)(lVar4 + 0x2860);
        lVar4 = *plVar7;
        local_40 = *(undefined8 *)(lVar4 + lVar3 * 0x18);
        local_48 = uVar5;
        cVar2 = FUN_14472d054();
        if (cVar2 == '\0') {
          puVar6 = (undefined8 *)(lVar4 + lVar3 * 0x18);
          do {
            puVar10 = puVar6;
            lVar4 = (longlong)*(int *)(puVar10 + 2);
            if (lVar4 == -1) goto LAB_143c9c3e0;
            puVar6 = (undefined8 *)(*plVar7 + lVar4 * 0x18);
            local_40 = *puVar6;
            local_48 = uVar5;
            cVar2 = FUN_14472d054(&local_40,&local_48);
          } while (cVar2 == '\0');
          puVar10 = puVar10 + 2;
        }
        else {
          puVar10 = (undefined8 *)(lVar9 + uVar8 * 4);
        }
        FUN_140d5250c(plVar7,*(undefined4 *)puVar10);
      }
    }
  }
LAB_143c9c3e0:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c9c46d FUN_143c9c46d body=3148 status=ok
// SIG undefined FUN_143c9c46d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c9c46d(void)

{
  int iVar1;
  ulonglong uVar2;
  char cVar3;
  uint uVar4;
  longlong *plVar5;
  undefined ***pppuVar6;
  undefined1 auStack_c8 [32];
  undefined *local_a8;
  undefined2 local_a0;
  undefined8 ***local_98;
  undefined ***pppuStack_90;
  char ***local_88;
  undefined8 uStack_80;
  undefined ***pppuStack_78;
  ulonglong local_70;
  undefined **local_68;
  code *local_60;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_88 = (char ***)0x149fca2ba;
  uStack_80._0_5_ = 0xd;
  uVar4 = FUN_14001a6c0(&local_88,1);
  _DAT_14cb70c38 = (ulonglong)uVar4;
  _DAT_14cb70c48 = &LAB_143c94f4c;
  _DAT_14cb70c50 = 0x461ee800;
  DAT_14cb70c54 = 1;
  DAT_14cb70c40 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb70c40;
  atexit((_func_5014 *)&LAB_143c94f51);
  local_88 = (char ***)&DAT_14ab63540;
  uStack_80._0_5_ = 4;
  uVar4 = FUN_14001a6c0(&local_88,1);
  _DAT_14cb70c60 = (ulonglong)uVar4;
  local_88 = (char ***)0x14b3e64c3;
  uStack_80._0_5_ = 0x19;
  uVar4 = FUN_14001a6c0(&local_88,1);
  _DAT_14cb70c68 = (ulonglong)uVar4;
  local_88 = (char ***)0x14b3e64dd;
  uStack_80 = (char ****)CONCAT35(uStack_80._5_3_,0x1e);
  uVar4 = FUN_14001a6c0(&local_88,1);
  _DAT_14cb70c70 = (ulonglong)uVar4;
  local_88 = (char ***)&DAT_14a171d50;
  uStack_80 = (char ****)0x0;
  pppuStack_78 = (undefined ***)0x0;
  local_70 = 0;
  local_98 = &local_88;
  pppuStack_90 = &local_68;
  FUN_145d01d52(&local_98);
  local_88 = (char ***)&DAT_14a171d50;
  uVar2 = local_70 >> 0x20;
  local_70 = local_70 & 0xffffffff00000000;
  if ((int)uVar2 != 0) {
    FUN_140115c12(&pppuStack_78,0);
  }
  uStack_80 = (char ****)0x0;
  if (pppuStack_78 != (undefined ***)0x0) {
    FUN_1400020a8();
  }
  atexit(FUN_143c94f85);
  uStack_80 = &local_88;
  local_98 = (undefined8 ***)0x0;
  pppuStack_90 = (undefined ***)0x0;
  local_88 = (char ***)&local_98;
  FUN_146543fba();
  FUN_1447cd778(local_98,(ulonglong)pppuStack_90 & 0xffffffff);
  if (local_98 != (undefined8 ***)0x0) {
    FUN_1400020a8();
  }
  atexit(FUN_143c94fb6);
  FUN_1462a3428(&DAT_14cb70c98,&LAB_143c94fe7,"activityareastamp",&DAT_14b3e7b50);
  atexit((_func_5014 *)&LAB_143c94fec);
  plVar5 = (longlong *)FUN_145d889d0();
  iVar1 = (int)plVar5[1];
  *(uint *)(plVar5 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)plVar5 + 0xc) < iVar1 + 1U) {
    FUN_140ca86cc(plVar5,iVar1);
  }
  *(char **)(*plVar5 + (longlong)iVar1 * 8) = "activityareastamp";
  local_88 = (char ***)0x14b071c30;
  uStack_80._0_5_ = 0x12;
  uVar4 = FUN_14001a6c0(&local_88,1);
  _DAT_14cb70cc8 = (ulonglong)uVar4;
  _DAT_14cb70cd0 = 0;
  uRam000000014cb70cd8 = 0;
  _DAT_14cb70ce0 = 0;
  DAT_14cb70ce8 = 0;
  uRam000000014cb70cf0 = 0;
  FUN_1446ddda2(&DAT_14cb70cd0,"allactivities",0);
  atexit((_func_5014 *)&LAB_143c95020);
  _DAT_14cb70cf8 = 0;
  uRam000000014cb70d00 = 0;
  _DAT_14cb70d08 = 0;
  DAT_14cb70d10 = 0;
  uRam000000014cb70d18 = 0;
  FUN_1446ddda2(&DAT_14cb70cf8,"serial",0);
  atexit((_func_5014 *)&LAB_143c95031);
  _DAT_14cb70d20 = 0;
  uRam000000014cb70d28 = 0;
  _DAT_14cb70d30 = 0;
  DAT_14cb70d38 = 0;
  uRam000000014cb70d40 = 0;
  FUN_1446ddda2(&DAT_14cb70d20,"missionstate",0);
  atexit((_func_5014 *)&LAB_143c95042);
  local_88 = (char ***)0x14a171d3e;
  uStack_80 = (char ****)CONCAT35(uStack_80._5_3_,5);
  uVar4 = FUN_14001a6c0(&local_88,1);
  _DAT_14cb70d48 = (ulonglong)uVar4;
  FUN_1446f470e(&DAT_14cb70d50,L"Type",1);
  ram0x00014cb70d5c = 0;
  FUN_14052b5e0(&DAT_14cb70d58,"contextdef",0);
  _DAT_14cb70d68 = "contextdef";
  FUN_1462a3428(&DAT_14cb70d70,&LAB_143c950d8,"activityarea",&DAT_14b3e7b50);
  atexit((_func_5014 *)&LAB_143c950dd);
  plVar5 = (longlong *)FUN_145d889d0();
  iVar1 = (int)plVar5[1];
  *(uint *)(plVar5 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)plVar5 + 0xc) < iVar1 + 1U) {
    FUN_140ca86cc(plVar5,iVar1);
  }
  *(char **)(*plVar5 + (longlong)iVar1 * 8) = "activityarea";
  local_88 = (char ***)0x14b3e7a98;
  uStack_80._0_5_ = 10;
  uVar4 = FUN_14001a6c0(&local_88,1);
  _DAT_14cb70da0 = (ulonglong)uVar4;
  local_88 = (char ***)&DAT_14b3e6507;
  uStack_80._0_5_ = 4;
  uVar4 = FUN_14001a6c0(&local_88,1);
  _DAT_14cb70da8 = (ulonglong)uVar4;
  local_88 = (char ***)0x14b3e650c;
  uStack_80._0_5_ = 8;
  uVar4 = FUN_14001a6c0(&local_88,1);
  _DAT_14cb70db0 = (ulonglong)uVar4;
  local_88 = (char ***)0x14b3e6515;
  uStack_80._0_5_ = 8;
  uVar4 = FUN_14001a6c0(&local_88,1);
  _DAT_14cb70db8 = (ulonglong)uVar4;
  local_88 = (char ***)0x14b3e651e;
  uStack_80._0_5_ = 9;
  uVar4 = FUN_14001a6c0(&local_88,1);
  _DAT_14cb70dc0 = (ulonglong)uVar4;
  local_88 = (char ***)0x14b3e6528;
  uStack_80._0_5_ = 8;
  uVar4 = FUN_14001a6c0(&local_88,1);
  _DAT_14cb70dc8 = (ulonglong)uVar4;
  local_88 = (char ***)0x14b3e6531;
  uStack_80._0_5_ = 0xf;
  uVar4 = FUN_14001a6c0(&local_88,1);
  _DAT_14cb70dd0 = (ulonglong)uVar4;
  local_88 = (char ***)0x14b3e6541;
  uStack_80._0_5_ = 0xc;
  uVar4 = FUN_14001a6c0(&local_88,1);
  _DAT_14cb70dd8 = (ulonglong)uVar4;
  local_88 = (char ***)0x14b081e78;
  uStack_80 = (char ****)CONCAT35(uStack_80._5_3_,0x14);
  uVar4 = FUN_14001a6c0(&local_88,1);
  _DAT_14cb70de0 = (ulonglong)uVar4;
  FUN_1400b22c2(&local_88,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar3 = FUN_140b10a34(&local_88,&DAT_14cb70f44);
  if (cVar3 == '\0') {
    _DAT_14cb70f44 = 0;
    uRam000000014cb70f4c = 0;
  }
  if (local_88 != (char ***)0x0) {
    FUN_1400020a8();
  }
  local_88 = (char ***)0x14b3e7af7;
  uStack_80._0_5_ = 10;
  uVar4 = FUN_14001a6c0(&local_88,1);
  _DAT_14cb70f58 = (ulonglong)uVar4;
  local_88 = (char ***)0x14b081f20;
  uStack_80._0_5_ = 0x11;
  uVar4 = FUN_14001a6c0(&local_88,1);
  _DAT_14cb70f60 = (ulonglong)uVar4;
  local_88 = (char ***)&DAT_14a19662d;
  uStack_80 = (char ****)CONCAT35(uStack_80._5_3_,4);
  FUN_14001a6c0(&local_88,1);
  pppuStack_78 = (undefined ***)0x0;
  local_68 = &PTR_LAB_14b3e72d0;
  local_60 = FUN_145a10d5f;
  local_88 = (char ***)&LAB_145a10d56;
  FUN_1459d1bee(&local_88);
  if (local_88 != (char ***)0x0) {
    pppuVar6 = &local_68;
    if (pppuStack_78 != (undefined ***)0x0) {
      pppuVar6 = pppuStack_78;
    }
    (*(code *)(*pppuVar6)[2])(pppuVar6);
  }
  FUN_1446f470e(&DAT_14cb70f68,L"Random",1);
  _DAT_14cb71010 = 0x47efffffe0000000;
  _DAT_14cb71018 = 0x47efffffe0000000;
  _DAT_14cb71020 = 0x47efffffe0000000;
  DAT_14cb71028 = 0x47efffffe0000000;
  DAT_14cb71030 = 0x47efffffe0000000;
  DAT_14cb71038 = 0x47efffffe0000000;
  _DAT_14cb71040 = 0x47efffffe0000000;
  _DAT_14cb71048 = 0x47efffffe0000000;
  local_a8 = &DAT_14b3e665e;
  local_a0 = 0;
  FUN_14655db90(&DAT_14cb71050,FUN_141864a20,"FGbxActorPartSerialNumber",5);
  atexit((_func_5014 *)&LAB_143c96b1e);
  FUN_145ac34fe(&DAT_14cb70de8,"gap_part",1);
  atexit(FUN_143c96b2a);
  DAT_14cb710c0 = 0;
  DAT_14cb710c8 = 0;
  DAT_14cb710d0 = 0;
  DAT_14cb71100 = 0;
  _DAT_14cb71108 = 0x400000000;
  atexit((_func_5014 *)&LAB_143c970b5);
  FUN_1446f470e(&DAT_14cb71118,L"Request",1);
  FUN_1446f470e(&DAT_14cb71120,L"GbxActorPart",1);
  _DAT_14cb71130 = &LAB_143c970c6;
  _DAT_14cb71138 = 0x447a0039;
  DAT_14cb7113c = 1;
  DAT_14cb71128 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb71128;
  atexit((_func_5014 *)&LAB_143c970cb);
  DAT_14cb71168 = 0;
  DAT_14cb71170 = 0;
  DAT_14cb71148 = 0;
  _DAT_14cb71150 = 0;
  _DAT_14cb71174 = 0xffffffff00000080;
  DAT_14cb7117c = 0;
  DAT_14cb71188 = 0;
  DAT_14cb71190 = 0;
  atexit(FUN_143c970ff);
  FUN_1446f470e(&DAT_14cb71198,L"Enabled",1);
  FUN_1446f470e(&DAT_14cb711a0,L"Disabled",1);
  FUN_1446f470e(&DAT_14cb711a8,L"OnStateEnabled",1);
  FUN_1446f470e(&DAT_14cb711b0,L"OnStateDisabled",1);
  FUN_1446f470e(&DAT_14cb711b8,L"EventGraph",1);
  local_88 = (char ***)0x577947a793a9d4e5;
  uStack_80 = (char ****)0x96f318138023d1a8;
  _DAT_14cb711c0 = 0x93a9d4e5;
  uRam000000014cb711c4 = 0x577947a7;
  uRam000000014cb711c8 = 0x8023d1a8;
  uRam000000014cb711cc = 0x96f31813;
  FUN_141005458(&local_88,0,L"GbxActorScript",0);
  atexit((_func_5014 *)&LAB_143c97128);
  DAT_14cb711d0 = 0;
  _DAT_14cb711d8 = 0;
  _DAT_14cb711e0 = 2;
  atexit(FUN_143c97134);
  DAT_14cb711e8 = 0;
  _DAT_14cb711f0 = 0;
  _DAT_14cb711f8 = 2;
  atexit(FUN_143c97165);
  local_88 = (char ***)0xb21e4b0e76403f3f;
  uStack_80 = (char ****)0xac4cfb2999e396b8;
  _DAT_14cb71200 = 0x76403f3f;
  uRam000000014cb71204 = 0xb21e4b0e;
  uRam000000014cb71208 = 0x99e396b8;
  uRam000000014cb7120c = 0xac4cfb29;
  FUN_141005458(&local_88,2,L"GbxActorScriptBlueprintVersion",0);
  atexit((_func_5014 *)&LAB_143c97196);
  DAT_14cb71210 = 0x100000000;
  local_88 = (char ***)0x98e54617852dec3b;
  uStack_80._0_4_ = 0xba0625f6;
  uStack_80._4_4_ = 0x52641985;
  _DAT_14cb71218 = 0x852dec3b;
  uRam000000014cb7121c = 0x98e54617;
  uRam000000014cb71220 = 0xba0625f6;
  uRam000000014cb71224 = 0x52641985;
  FUN_141005458(&local_88,0,L"GbxActorScriptClass",0);
  atexit((_func_5014 *)&LAB_143c971a2);
  _DAT_14cb7122c = 0;
  FUN_14052b5e0(&DAT_14cb71228,"PlayerAwareness",0);
  _DAT_14cb71238 = "PlayerAwareness";
  _DAT_14cb71240 = 0xffffffff;
  _DAT_14cb71244 = 0;
  local_88 = (char ***)((ulonglong)local_88 & 0xffffffffffffff00);
  local_a8 = (undefined *)((ulonglong)local_a8 & 0xffffffff00000000);
  FUN_140bd5914(&DAT_14cb71248,L"a.gbx.FaceFX.DoNotCreateFaceFXForMarkedActors",&local_88,
                L"If true, a FaceFxComponent will not be created for Actors whose Def is marked with bDisableFaceFXComponentForOptimizedBuilds==true"
               );
  atexit(FUN_143c971ae);
  FUN_1446f470e(&DAT_14cb71260,L"Arrow",1);
  FUN_1446f470e(&DAT_14cb71330,L"CharacterMesh",1);
  FUN_1446f470e(&DAT_14cb71268,L"CharacterMesh",1);
  FUN_1446f470e(&DAT_14cb71270,L"PlayerTurnInterpDelegate",1);
  FUN_1446f470e(&DAT_14cb71278,L"NavRotationInterpDelegate",1);
  FUN_1446f470e(&DAT_14cb71280,L"AimPivotLocationDelegate",1);
  FUN_1446f470e(&DAT_14cb71288,L"BotAimRotationRateOverride",1);
  ram0x00014cb71294 = 0;
  FUN_14052b5e0(&DAT_14cb71290,"HasAggro",0);
  _DAT_14cb712a0 = "HasAggro";
  FUN_1446f470e(&DAT_14cb712a8,L"Attached",1);
  FUN_1446f470e(&DAT_14cb712b0,L"TargetedActor",1);
  FUN_1446f470e(&DAT_14cb712b8,L"DefaultMeshVisibility",1);
  _DAT_14cb71328 = 0;
  LOCK();
  DAT_14cb71320 = 0;
  UNLOCK();
  atexit((_func_5014 *)&LAB_143c971f3);
  local_88 = (char ***)&DAT_14b3e7b54;
  uStack_80._0_5_ = 4;
  uVar4 = FUN_14001a6c0(&local_88,1);
  _DAT_14cb712c0 = (ulonglong)uVar4;
  FUN_1446f470e(&DAT_14cb712d4,L"HideUntilLevelSequence",1);
  FUN_1446f470e(&local_88,L"Sequence",1);
  FUN_14598ad7a(&DAT_14cb712dc,&local_88,6);
  local_88 = (char ***)0x14b3e6ad8;
  uStack_80 = (char ****)CONCAT35(uStack_80._5_3_,0x15);
  uVar4 = FUN_14001a6c0(&local_88,1);
  DAT_14cb712e8 = (ulonglong)uVar4;
  FUN_1446f470e(&DAT_14cb712f0,L"SimEnabled",1);
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c9d0bc FUN_143c9d0bc body=69 status=ok
// SIG undefined FUN_143c9d0bc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c9d0bc(void)

{
  _DAT_14cb71380 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143c9d0fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb71388,1);
  return;
}



// FUNCTION 143c9d101 FUN_143c9d101 body=69 status=ok
// SIG undefined FUN_143c9d101(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c9d101(void)

{
  _DAT_14cb71398 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143c9d143. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb713a0,1);
  return;
}



// FUNCTION 143c9d146 FUN_143c9d146 body=69 status=ok
// SIG undefined FUN_143c9d146(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c9d146(void)

{
  _DAT_14cb713b0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143c9d188. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb713b8,1);
  return;
}



// FUNCTION 143c9d18c FUN_143c9d18c body=261 status=ok
// SIG undefined FUN_143c9d18c(void)

ulonglong FUN_143c9d18c(longlong param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined8 unaff_RBX;
  undefined1 auStack_78 [40];
  longlong local_50;
  int local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  cVar1 = *(char *)(param_1 + 0x28);
  if (cVar1 == '\x01') {
    lVar6 = *(longlong *)(param_1 + 8);
    if (*(longlong *)(param_1 + 8) == 0) {
      DAT_14cb713c8 = DAT_14cb713c8 + 1;
      FUN_140002266(&local_50,L"AreaPreStream_%u");
      iVar2 = local_48 + -1;
      if (local_48 == 0) {
        iVar2 = 0;
      }
      FUN_1446f82e2(&local_40,iVar2,local_50,1);
      *(longlong *)(param_1 + 8) = local_40;
      lVar6 = local_40;
      if (local_50 != 0) {
        FUN_1400020a8();
        lVar6 = *(longlong *)(param_1 + 8);
      }
    }
    *param_2 = lVar6;
    lVar6 = *(longlong *)(param_1 + 0x18);
    param_2[1] = *(longlong *)(param_1 + 0x10);
    param_2[2] = lVar6;
    param_2[3] = *(longlong *)(param_1 + 0x20);
    uVar5 = DAT_14c846500._4_4_;
    uVar4 = (undefined4)DAT_14c846500;
    uVar3 = DAT_14c8464f8._4_4_;
    *(undefined4 *)(param_2 + 4) = (undefined4)DAT_14c8464f8;
    *(undefined4 *)((longlong)param_2 + 0x24) = uVar3;
    *(undefined4 *)(param_2 + 5) = uVar4;
    *(undefined4 *)((longlong)param_2 + 0x2c) = uVar5;
    param_2[6] = DAT_14c846508;
    *(undefined2 *)(param_2 + 7) = 1;
    *(undefined1 *)((longlong)param_2 + 0x3a) = 0x80;
    *(undefined4 *)((longlong)param_2 + 0x5c) = 0xff00ff00;
    *(undefined1 *)((longlong)param_2 + 0x119) = *(undefined1 *)(param_1 + 0x30);
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return CONCAT71((int7)((ulonglong)unaff_RBX >> 8),cVar1) & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c9d292 FUN_143c9d292 body=1005 status=ok
// SIG undefined FUN_143c9d292(void)

void FUN_143c9d292(longlong *param_1,float param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  char cVar4;
  DWORD DVar5;
  DWORD DVar6;
  uint uVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong *plVar14;
  bool bVar15;
  undefined1 auStack_98 [40];
  longlong local_70;
  longlong local_68;
  int local_60;
  undefined4 local_5c;
  longlong *local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (((((*(int *)((longlong)param_1 + 0x1c) != 0) &&
        (uVar7 = *(uint *)(param_1 + 3), -1 < (int)uVar7)) && ((int)uVar7 < DAT_14c9647dc)) &&
      ((plVar9 = (longlong *)
                 ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8)),
       plVar9 != (longlong *)0x0 && ((int)plVar9[2] == *(int *)((longlong)param_1 + 0x1c))))) &&
     ((*(uint *)(plVar9 + 1) & 0x10200000) == 0)) {
    if ((*(uint *)(plVar9 + 1) & 0x10200000) == 0) {
      lVar11 = *plVar9;
    }
    else {
      lVar11 = 0;
    }
    if ((*(longlong *)(lVar11 + 0x30) != 0) &&
       (*(longlong *)(*(longlong *)(lVar11 + 0x30) + 0x360) != 0)) {
      param_2 = param_2 + *(float *)(param_1 + 0xe);
      *(float *)(param_1 + 0xe) = param_2;
      lVar11 = DAT_14cb71390;
      iVar2 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60);
      if (iVar2 == 0x40000002) {
        uVar13 = 0;
      }
      else {
        bVar15 = true;
        if ((DAT_14c86a9f8 == '\x01') && (iVar2 != 2)) {
          if (iVar2 == 1) {
            DVar5 = FUN_140ad26c0();
            DVar6 = GetCurrentThreadId();
            bVar15 = DVar5 == DVar6;
            param_2 = *(float *)(param_1 + 0xe);
          }
          else {
            bVar15 = false;
          }
        }
        uVar13 = (ulonglong)(bVar15 ^ 1);
      }
      if (*(float *)(lVar11 + uVar13 * 4) <= param_2) {
        *(undefined4 *)(param_1 + 0xe) = 0;
        if ((((*(int *)((longlong)param_1 + 0x1c) != 0) &&
             (uVar7 = *(uint *)(param_1 + 3), -1 < (int)uVar7)) && ((int)uVar7 < DAT_14c9647dc)) &&
           (((plVar9 = (longlong *)
                       ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8)),
             plVar9 != (longlong *)0x0 && ((int)plVar9[2] == *(int *)((longlong)param_1 + 0x1c))) &&
            ((*(uint *)(plVar9 + 1) & 0x10200000) == 0)))) {
          if ((*(uint *)(plVar9 + 1) & 0x10200000) == 0) {
            lVar11 = *plVar9;
          }
          else {
            lVar11 = 0;
          }
          if (((*(longlong *)(lVar11 + 0x30) != 0) &&
              (*(longlong *)(*(longlong *)(lVar11 + 0x30) + 0x360) != 0)) &&
             ((cVar4 = (**(code **)(*param_1 + 0x58))(param_1), cVar4 != '\0' &&
              (((*(char *)(param_1[0xf] + 0x28) != '\0' || (0 < (int)param_1[0xd])) &&
               (cVar4 = (**(code **)(*param_1 + 0x50))(param_1), cVar4 != '\0')))))) {
            local_58 = (longlong *)0x0;
            uStack_50 = 0;
            local_68 = 0;
            iVar2 = (int)param_1[0xd];
            lVar11 = param_1[0xc];
            local_60 = iVar2;
            if (iVar2 == 0) {
              local_5c = 0;
            }
            else {
              FUN_146544b1c(&local_68,iVar2);
              FUN_146544b86(local_68,lVar11,iVar2);
              lVar11 = local_68;
              lVar8 = (longlong)local_60;
              if (lVar8 != 0) {
                lVar10 = 0;
                do {
                  if ((*(int *)(lVar11 + 0x10 + lVar10) == 0) ||
                     (plVar9 = *(longlong **)(lVar11 + 8 + lVar10), plVar9 == (longlong *)0x0)) {
LAB_143c9d5ac:
                    local_70 = 0;
                  }
                  else {
                    (**(code **)(*plVar9 + 0x60))(plVar9,1);
                    if ((*(int *)(lVar11 + 0x10 + lVar10) == 0) ||
                       (plVar9 = *(longlong **)(lVar11 + 8 + lVar10), plVar9 == (longlong *)0x0))
                    goto LAB_143c9d5ac;
                    (**(code **)(*plVar9 + 0x38))(plVar9,&local_70);
                  }
                  uVar13 = uStack_50;
                  lVar12 = (longlong)(int)uStack_50;
                  uVar7 = (int)uStack_50 + 1;
                  uStack_50 = CONCAT44(uStack_50._4_4_,uVar7);
                  if (uStack_50._4_4_ < uVar7) {
                    FUN_14107bfdc(&local_58,uVar13 & 0xffffffff);
                  }
                  local_58[lVar12] = local_70;
                  lVar10 = lVar10 + 0x18;
                } while (lVar8 * 0x18 != lVar10);
              }
            }
            if ((longlong)(int)uStack_50 != 0) {
              plVar9 = param_1 + 0xc;
              plVar1 = local_58 + (int)uStack_50;
              plVar14 = local_58;
              do {
                if (0 < (int)param_1[0xd]) {
                  lVar11 = 0x10;
                  uVar13 = 0;
                  do {
                    if ((*(int *)(*plVar9 + lVar11) == 0) ||
                       (plVar3 = *(longlong **)(*plVar9 + -8 + lVar11), plVar3 == (longlong *)0x0))
                    {
                      lVar8 = 0;
                    }
                    else {
                      (**(code **)(*plVar3 + 0x38))(plVar3,&local_70);
                      lVar8 = local_70;
                    }
                    if (lVar8 == *plVar14) {
                      FUN_145ae58b2(plVar9,uVar13 & 0xffffffff);
                      FUN_145ae5874(plVar9);
                      break;
                    }
                    uVar13 = uVar13 + 1;
                    lVar11 = lVar11 + 0x18;
                  } while ((longlong)uVar13 < (longlong)(int)param_1[0xd]);
                }
                plVar14 = plVar14 + 1;
              } while (plVar14 != plVar1);
            }
            if (((char)param_1[0x11] == '\0') && ((int)param_1[0xd] == 0)) {
              FUN_141429d20(param_1);
            }
            FUN_141429cf4(local_68,local_60);
            if (local_68 != 0) {
              FUN_1400020a8();
            }
            if (local_58 != (longlong *)0x0) {
              FUN_1400020a8();
            }
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_98);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143c9d6b0 FUN_143c9d6b0 body=235 status=ok
// SIG undefined FUN_143c9d6b0(void)

void FUN_143c9d6b0(undefined8 *param_1)

{
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 7) = 2;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0;
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  *(undefined8 *)((longlong)param_1 + 0xfd) = 0;
  *(undefined8 *)((longlong)param_1 + 0x105) = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x28] = 2;
  *(undefined1 *)(param_1 + 0x3e) = 0;
  *(undefined4 *)((longlong)param_1 + 0x147) = 0;
  param_1[0x30] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  *param_1 = &PTR_FUN_14b0e70a0;
  *(undefined1 *)(param_1 + 0x29) = 1;
  return;
}



// FUNCTION 143c9d79c FUN_143c9d79c body=122 status=ok
// SIG undefined FUN_143c9d79c(void)

undefined8 * FUN_143c9d79c(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  *param_2 = *(undefined8 *)(param_1 + 0x1e0);
  uVar2 = *(undefined4 *)(param_1 + 0x1ec);
  uVar3 = *(undefined4 *)(param_1 + 0x1f0);
  uVar4 = *(undefined4 *)(param_1 + 500);
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 0x1e8);
  *(undefined4 *)((longlong)param_2 + 0xc) = uVar2;
  *(undefined4 *)(param_2 + 2) = uVar3;
  *(undefined4 *)((longlong)param_2 + 0x14) = uVar4;
  param_2[3] = 0;
  iVar1 = *(int *)(param_1 + 0x200);
  _Src = *(void **)(param_1 + 0x1f8);
  *(int *)(param_2 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(param_2 + 3,iVar1,0);
    memcpy((void *)param_2[3],_Src,(longlong)iVar1 * 2);
  }
  return param_2;
}



// FUNCTION 143c9d816 FUN_143c9d816 body=166 status=ok
// SIG undefined FUN_143c9d816(void)

longlong FUN_143c9d816(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  ushort uVar3;
  ulonglong uVar4;
  ushort uVar5;
  ulonglong uVar6;
  
  if ((*(longlong *)(param_2 + 8) == *(longlong *)(param_1 + 0x1e8)) &&
     (*(longlong *)(param_2 + 0x10) == *(longlong *)(param_1 + 0x1f0))) {
    iVar1 = *(int *)(param_2 + 0x20);
    if (iVar1 == *(int *)(param_1 + 0x200)) {
      if (1 < iVar1) {
        lVar2 = 0;
        while( true ) {
          uVar3 = *(ushort *)(*(longlong *)(param_2 + 0x18) + lVar2);
          uVar4 = (ulonglong)uVar3;
          uVar5 = *(ushort *)(*(longlong *)(param_1 + 0x1f8) + lVar2);
          if (uVar3 != uVar5) break;
          if (uVar3 == 0) goto LAB_143c9d84c;
LAB_143c9d87e:
          lVar2 = lVar2 + 2;
        }
        if ((uVar5 | uVar3) < 0x80) {
          uVar3 = (ushort)(byte)(&DAT_149e05da0)[uVar4];
          uVar6 = (ulonglong)uVar5;
          uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
          if ((&DAT_149e05da0)[uVar4] == (&DAT_149e05da0)[uVar6]) goto LAB_143c9d87e;
        }
        if (uVar3 != uVar5) goto LAB_143c9d827;
      }
    }
    else if (*(int *)(param_1 + 0x200) + iVar1 != 1) goto LAB_143c9d827;
LAB_143c9d84c:
    param_1 = param_1 + 0x260;
  }
  else {
LAB_143c9d827:
    param_1 = 0;
  }
  return param_1;
}



// FUNCTION 143c9d8e6 FUN_143c9d8e6 body=49 status=ok
// SIG undefined FUN_143c9d8e6(void)

void FUN_143c9d8e6(void)

{
  FUN_144760e21(DAT_14cb717f8,DAT_14cb71800);
  if (DAT_14cb717f8 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143c9d918 FUN_143c9d918 body=299 status=ok
// SIG undefined FUN_143c9d918(void)

longlong * FUN_143c9d918(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,3,0x10);
  *(undefined4 *)(param_1 + 1) = 3;
  puVar2 = (undefined8 *)*param_1;
  *puVar2 = &PTR_LAB_14b3e9ca0;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar6 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar6 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar6;
  puVar2[2] = lVar3;
  *puVar2 = &PTR_FUN_14b3e8ce0;
  puVar2[3] = 0;
  iVar4 = 0;
  if (param_2 != 0) {
    uVar1 = *(uint *)(param_2 + 0xc);
    *(uint *)(puVar2 + 3) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar6 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar6 = 0;
    }
    iVar4 = *(int *)(lVar6 + 0x10);
    if (*(int *)(lVar6 + 0x10) == 0) {
      LOCK();
      iVar4 = DAT_14c964868 + 1;
      UNLOCK();
      iVar5 = DAT_14c964868 + 1;
      bVar7 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar4;
      if (bVar7) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar5);
      }
      LOCK();
      iVar4 = *(int *)(lVar6 + 0x10);
      bVar7 = iVar4 == 0;
      if (bVar7) {
        *(int *)(lVar6 + 0x10) = iVar5;
        iVar4 = 0;
      }
      UNLOCK();
      if (bVar7) {
        iVar4 = iVar5;
      }
    }
  }
  *(int *)((longlong)puVar2 + 0x1c) = iVar4;
  puVar2[4] = *param_3;
  return param_1;
}



// FUNCTION 143c9dc12 FUN_143c9dc12 body=67 status=ok
// SIG undefined FUN_143c9dc12(void)

void FUN_143c9dc12(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_1487c33fa(param_2);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143c9dc49. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))(plVar1,param_1,param_2,param_3);
    return;
  }
  return;
}



// FUNCTION 143c9dc56 FUN_143c9dc56 body=46 status=ok
// SIG undefined FUN_143c9dc56(void)

void FUN_143c9dc56(undefined8 param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_1487c33fa();
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143c9dc7a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x18))(plVar1,param_1,*(code **)(*plVar1 + 0x18));
    return;
  }
  return;
}



// FUNCTION 143c9dc84 FUN_143c9dc84 body=942 status=ok
// SIG undefined FUN_143c9dc84(void)

void FUN_143c9dc84(longlong param_1,longlong *param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  bool bVar11;
  
  lVar8 = param_2[1];
  if (lVar8 == 0) {
    uVar6 = FUN_145d82922();
    lVar8 = FUN_14477b664(uVar6);
    param_2[1] = lVar8;
  }
  if (param_2[2] == 0) {
    if (lVar8 == 0) {
      return;
    }
    if (*param_2 == 0) {
      return;
    }
    plVar10 = *(longlong **)(lVar8 + 0xb8);
    if ((plVar10 == (longlong *)0x0) ||
       (cVar4 = (**(code **)(*plVar10 + 0x108))(plVar10), cVar4 == '\0')) {
      param_2[2] = 0;
      return;
    }
    uVar6 = (**(code **)(*plVar10 + 0x110))(plVar10);
    lVar8 = FUN_144aff482(uVar6,param_2);
    param_2[2] = lVar8;
    if (lVar8 == 0) {
      return;
    }
  }
  if (param_4 != 0 && param_3 != 0) {
    iVar5 = *(int *)(param_1 + 0x10);
    iVar7 = *(int *)(param_1 + 0x20);
    if (iVar7 + iVar5 <= *(int *)(param_1 + 0x28)) {
      if (iVar5 != 0) {
        lVar8 = 0;
        do {
          iVar1 = *(int *)(*(longlong *)(param_1 + 8) + 0xc + lVar8);
          if ((iVar1 == 0) ||
             (uVar2 = *(uint *)(*(longlong *)(param_1 + 8) + 8 + lVar8), (int)uVar2 < 0)) {
LAB_143c9dd64:
            lVar9 = 0;
          }
          else {
            lVar9 = 0;
            if ((int)uVar2 < DAT_14c9647dc) {
              plVar10 = (longlong *)
                        ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
              if (((plVar10 == (longlong *)0x0) || ((int)plVar10[2] != iVar1)) ||
                 ((*(uint *)(plVar10 + 1) & 0x10200000) != 0)) goto LAB_143c9dd64;
              lVar9 = *plVar10;
            }
          }
          if (lVar9 == param_3) {
            return;
          }
          lVar8 = lVar8 + 0x120;
        } while ((longlong)iVar5 * 0x120 != lVar8);
      }
      if (iVar7 != 0) {
        lVar8 = 0;
        do {
          iVar5 = *(int *)(*(longlong *)(param_1 + 0x18) + 0xc + lVar8);
          if ((iVar5 == 0) ||
             (uVar2 = *(uint *)(*(longlong *)(param_1 + 0x18) + 8 + lVar8), (int)uVar2 < 0)) {
LAB_143c9de54:
            lVar9 = 0;
          }
          else {
            lVar9 = 0;
            if ((int)uVar2 < DAT_14c9647dc) {
              plVar10 = (longlong *)
                        ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
              if (((plVar10 == (longlong *)0x0) || ((int)plVar10[2] != iVar5)) ||
                 ((*(uint *)(plVar10 + 1) & 0x10200000) != 0)) goto LAB_143c9de54;
              lVar9 = *plVar10;
            }
          }
          if (lVar9 == param_3) {
            return;
          }
          lVar8 = lVar8 + 0x18;
        } while ((longlong)iVar7 * 0x18 != lVar8);
      }
      plVar10 = (longlong *)FUN_1487c3490();
      lVar8 = param_2[1];
      if (lVar8 == 0) {
        uVar6 = FUN_145d82922();
        lVar8 = FUN_14477b664(uVar6);
        param_2[1] = lVar8;
      }
      lVar9 = param_2[2];
      if (((lVar9 == 0) && (lVar9 = 0, lVar8 != 0)) && (*param_2 != 0)) {
        plVar3 = *(longlong **)(lVar8 + 0xb8);
        if ((plVar3 == (longlong *)0x0) ||
           (cVar4 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar4 == '\0')) {
          lVar9 = 0;
        }
        else {
          uVar6 = (**(code **)(*plVar3 + 0x110))(plVar3);
          lVar9 = FUN_144aff482(uVar6,param_2);
        }
        param_2[2] = lVar9;
      }
      *plVar10 = lVar9;
      uVar2 = *(uint *)(param_3 + 0xc);
      *(uint *)(plVar10 + 1) = uVar2;
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar8 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar8 = 0;
      }
      iVar5 = *(int *)(lVar8 + 0x10);
      if (*(int *)(lVar8 + 0x10) == 0) {
        LOCK();
        iVar5 = DAT_14c964868 + 1;
        UNLOCK();
        iVar7 = DAT_14c964868 + 1;
        bVar11 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar5;
        if (bVar11) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar7);
        }
        LOCK();
        iVar5 = *(int *)(lVar8 + 0x10);
        bVar11 = iVar5 == 0;
        if (bVar11) {
          *(int *)(lVar8 + 0x10) = iVar7;
          iVar5 = 0;
        }
        UNLOCK();
        if (bVar11) {
          iVar5 = iVar7;
        }
      }
      *(int *)((longlong)plVar10 + 0xc) = iVar5;
      uVar2 = *(uint *)(param_4 + 0xc);
      *(uint *)(plVar10 + 2) = uVar2;
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar8 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar8 = 0;
      }
      iVar5 = *(int *)(lVar8 + 0x10);
      if (*(int *)(lVar8 + 0x10) == 0) {
        LOCK();
        iVar5 = DAT_14c964868 + 1;
        UNLOCK();
        iVar7 = DAT_14c964868 + 1;
        bVar11 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar5;
        if (bVar11) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar7);
        }
        LOCK();
        iVar5 = *(int *)(lVar8 + 0x10);
        bVar11 = iVar5 == 0;
        if (bVar11) {
          *(int *)(lVar8 + 0x10) = iVar7;
          iVar5 = 0;
        }
        UNLOCK();
        if (bVar11) {
          iVar5 = iVar7;
        }
      }
      *(int *)((longlong)plVar10 + 0x14) = iVar5;
      if (*(char *)(param_1 + 0x2c) == '\0') {
        *(undefined1 *)(param_1 + 0x2c) = 1;
        FUN_144958d50(param_1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 143c9e032 FUN_143c9e032 body=2566 status=ok
// SIG undefined FUN_143c9e032(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void * FUN_143c9e032(void *param_1,longlong *param_2)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined1 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  int iVar9;
  double *pdVar10;
  double *pdVar11;
  longlong *plVar12;
  longlong lVar13;
  bool bVar14;
  double dVar15;
  double dVar18;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  double dVar21;
  double dVar22;
  undefined1 auStack_228 [32];
  double local_208;
  double dStack_200;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  longlong local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 local_188 [12];
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118 [2];
  double local_108 [4];
  undefined1 local_e8 [16];
  double local_d8;
  undefined8 uStack_d0;
  undefined1 local_c8 [16];
  undefined8 local_b8;
  undefined8 uStack_b0;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_228;
  lVar13 = 0;
  local_198 = 0;
  local_1a8 = 0;
  uStack_1a0 = 0;
  puVar7 = &DAT_14c846480;
  puVar8 = local_188;
  for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  local_118[0] = 0;
  local_128 = 0;
  uStack_120._0_4_ = 0;
  uStack_120._4_4_ = 0;
  pdVar10 = (double *)&DAT_14c846480;
  pdVar11 = local_108;
  for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
    *pdVar11 = *pdVar10;
    pdVar10 = pdVar10 + 1;
    pdVar11 = pdVar11 + 1;
  }
  if (*(int *)((longlong)param_2 + 0xc) != 0) {
    uVar1 = *(uint *)(param_2 + 1);
    lVar13 = 0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      plVar12 = (longlong *)
                ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((plVar12 == (longlong *)0x0) ||
         (((int)plVar12[2] != *(int *)((longlong)param_2 + 0xc) ||
          ((*(uint *)(plVar12 + 1) & 0x10200000) != 0)))) {
        lVar13 = 0;
      }
      else {
        lVar13 = *plVar12;
      }
    }
  }
  if (*(int *)((longlong)param_2 + 0x14) != 0) {
    uVar1 = *(uint *)(param_2 + 2);
    uVar4 = 0;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_143c9e1a1;
    plVar12 = (longlong *)
              ((ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((plVar12 != (longlong *)0x0) &&
       (((int)plVar12[2] == *(int *)((longlong)param_2 + 0x14) &&
        ((*(uint *)(plVar12 + 1) & 0x10200000) == 0)))) {
      uVar4 = 0;
      if ((lVar13 == 0) || (lVar5 = *plVar12, lVar5 == 0)) goto LAB_143c9e1a1;
      local_1a8 = *param_2;
      if (local_1a8 != 0) {
        uVar1 = *(uint *)(lVar13 + 0xc);
        uStack_1a0 = (ulonglong)uVar1;
        if ((int)uVar1 < DAT_14c9647dc) {
          lVar13 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
        }
        else {
          lVar13 = 0;
        }
        iVar3 = *(int *)(lVar13 + 0x10);
        if (*(int *)(lVar13 + 0x10) == 0) {
          LOCK();
          iVar3 = DAT_14c964868 + 1;
          UNLOCK();
          iVar9 = DAT_14c964868 + 1;
          bVar14 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar3;
          if (bVar14) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar9);
          }
          LOCK();
          iVar3 = *(int *)(lVar13 + 0x10);
          bVar14 = iVar3 == 0;
          if (bVar14) {
            *(int *)(lVar13 + 0x10) = iVar9;
            iVar3 = 0;
          }
          UNLOCK();
          uVar1 = (uint)uStack_1a0;
          if (bVar14) {
            iVar3 = iVar9;
          }
        }
        uStack_1a0._0_4_ = uVar1;
        uStack_1a0 = CONCAT44(iVar3,(uint)uStack_1a0);
        uVar1 = *(uint *)(lVar5 + 0xc);
        local_128 = CONCAT44(local_128._4_4_,uVar1);
        if ((int)uVar1 < DAT_14c9647dc) {
          lVar13 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
        }
        else {
          lVar13 = 0;
        }
        iVar3 = *(int *)(lVar13 + 0x10);
        if (*(int *)(lVar13 + 0x10) == 0) {
          LOCK();
          iVar3 = DAT_14c964868 + 1;
          UNLOCK();
          iVar9 = DAT_14c964868 + 1;
          bVar14 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar3;
          if (bVar14) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar9);
          }
          LOCK();
          iVar3 = *(int *)(lVar13 + 0x10);
          bVar14 = iVar3 == 0;
          if (bVar14) {
            *(int *)(lVar13 + 0x10) = iVar9;
            iVar3 = 0;
          }
          UNLOCK();
          if (bVar14) {
            iVar3 = iVar9;
          }
        }
        local_128 = CONCAT44(iVar3,(undefined4)local_128);
        local_118[0] = *(undefined8 *)(local_1a8 + 0xd4);
        lVar13 = FUN_1487c385a(lVar5,local_118);
        if (lVar13 != 0) {
          uVar1 = *(uint *)(lVar13 + 0xc);
          uStack_120 = CONCAT44(uStack_120._4_4_,uVar1);
          if ((int)uVar1 < DAT_14c9647dc) {
            lVar13 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
          }
          else {
            lVar13 = 0;
          }
          iVar3 = *(int *)(lVar13 + 0x10);
          if (*(int *)(lVar13 + 0x10) == 0) {
            LOCK();
            iVar3 = DAT_14c964868 + 1;
            UNLOCK();
            iVar9 = DAT_14c964868 + 1;
            bVar14 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar3;
            if (bVar14) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,iVar9);
            }
            LOCK();
            iVar3 = *(int *)(lVar13 + 0x10);
            bVar14 = iVar3 == 0;
            if (bVar14) {
              *(int *)(lVar13 + 0x10) = iVar9;
              iVar3 = 0;
            }
            UNLOCK();
            if (bVar14) {
              iVar3 = iVar9;
            }
          }
          uStack_120._4_4_ = iVar3;
        }
        if (((((uStack_120._4_4_ == 0) || ((int)(uint)uStack_120 < 0)) ||
             (DAT_14c9647dc <= (int)(uint)uStack_120)) ||
            ((lVar13 = (ulonglong)(((uint)uStack_120 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)((uint)uStack_120 >> 0x10) * 8),
             lVar13 == 0 || (*(int *)(lVar13 + 0x10) != uStack_120._4_4_)))) ||
           ((*(uint *)(lVar13 + 8) & 0x10200000) != 0)) {
          if (*(longlong *)(lVar5 + 0x1c8) == 0) {
            uStack_120 = 0;
            iVar3 = 0;
          }
          else {
            uVar1 = *(uint *)(*(longlong *)(lVar5 + 0x1c8) + 0xc);
            uStack_120 = CONCAT44(uStack_120._4_4_,uVar1);
            if ((int)uVar1 < DAT_14c9647dc) {
              lVar13 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
            }
            else {
              lVar13 = 0;
            }
            iVar3 = *(int *)(lVar13 + 0x10);
            if (*(int *)(lVar13 + 0x10) == 0) {
              LOCK();
              iVar3 = DAT_14c964868 + 1;
              UNLOCK();
              iVar9 = DAT_14c964868 + 1;
              bVar14 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar3;
              if (bVar14) {
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,iVar9);
              }
              LOCK();
              iVar3 = *(int *)(lVar13 + 0x10);
              bVar14 = iVar3 == 0;
              if (bVar14) {
                *(int *)(lVar13 + 0x10) = iVar9;
                iVar3 = 0;
              }
              UNLOCK();
              if (bVar14) {
                iVar3 = iVar9;
              }
            }
          }
          local_118[0] = 0;
          uStack_120._4_4_ = iVar3;
        }
        iVar3 = uStack_1a0._4_4_;
        if (*(longlong *)(local_1a8 + 200) != 0) {
          if (uStack_1a0._4_4_ == 0) {
LAB_143c9e837:
            uVar6 = 0;
          }
          else {
            uVar6 = 0;
            if ((-1 < (int)(uint)uStack_1a0) && ((int)(uint)uStack_1a0 < DAT_14c9647dc)) {
              puVar7 = (undefined8 *)
                       ((ulonglong)(((uint)uStack_1a0 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)((uint)uStack_1a0 >> 0x10) * 8));
              if ((puVar7 == (undefined8 *)0x0) ||
                 ((*(int *)(puVar7 + 2) != uStack_1a0._4_4_ ||
                  ((*(uint *)(puVar7 + 1) & 0x10200000) != 0)))) goto LAB_143c9e837;
              uVar6 = *puVar7;
            }
          }
          lVar13 = FUN_1487c3910(uVar6,local_1a8 + 200);
          if (lVar13 == 0) {
            local_198 = 0;
          }
          else {
            uVar1 = *(uint *)(lVar13 + 0xc);
            local_198 = CONCAT44(local_198._4_4_,uVar1);
            if ((int)uVar1 < DAT_14c9647dc) {
              lVar13 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
            }
            else {
              lVar13 = 0;
            }
            if (*(int *)(lVar13 + 0x10) == 0) {
              LOCK();
              iVar3 = DAT_14c964868 + 1;
              UNLOCK();
              iVar9 = DAT_14c964868 + 1;
              bVar14 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar3;
              if (bVar14) {
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,iVar9);
              }
              LOCK();
              iVar3 = *(int *)(lVar13 + 0x10);
              bVar14 = iVar3 == 0;
              if (bVar14) {
                *(int *)(lVar13 + 0x10) = iVar9;
                iVar3 = 0;
              }
              UNLOCK();
              if (bVar14) {
                iVar3 = iVar9;
              }
              local_198 = CONCAT44(iVar3,(uint)local_198);
            }
            else {
              local_198 = CONCAT44(*(int *)(lVar13 + 0x10),uVar1);
            }
          }
          iVar3 = uStack_1a0._4_4_;
        }
        puVar7 = (undefined8 *)(local_1a8 + 0xc0);
        if (iVar3 == 0) {
LAB_143c9e829:
          uVar6 = 0;
        }
        else {
          uVar6 = 0;
          if ((-1 < (int)(uint)uStack_1a0) && ((int)(uint)uStack_1a0 < DAT_14c9647dc)) {
            puVar8 = (undefined8 *)
                     ((ulonglong)(((uint)uStack_1a0 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)((uint)uStack_1a0 >> 0x10) * 8));
            if ((puVar8 == (undefined8 *)0x0) ||
               ((*(int *)(puVar8 + 2) != iVar3 || ((*(uint *)(puVar8 + 1) & 0x10200000) != 0))))
            goto LAB_143c9e829;
            uVar6 = *puVar8;
          }
        }
        plVar12 = (longlong *)FUN_1487c385a(uVar6,puVar7);
        if (plVar12 != (longlong *)0x0) {
          (**(code **)(*plVar12 + 0x4a8))(plVar12,&local_208,*puVar7,1);
          dVar15 = local_1f8 * local_1f8 + local_208 * local_208;
          dVar18 = dStack_1f0 * dStack_1f0 + dStack_200 * dStack_200;
          auVar16._0_8_ = dVar15 + dVar18;
          auVar16._8_8_ = dVar15 + dVar18;
          auVar17 = sqrtpd(auVar16,auVar16);
          auVar19 = divpd(_DAT_149934d80,auVar17);
          auVar20._0_8_ = auVar19._0_8_ * local_1f8;
          auVar20._8_8_ = auVar19._8_8_ * dStack_1f0;
          auVar17._8_8_ = -(ulonglong)(1e-08 <= auVar16._8_8_);
          auVar17._0_8_ = -(ulonglong)(1e-08 <= auVar16._0_8_);
          auVar17 = blendvpd(_DAT_149935300,auVar20,auVar17);
          dVar18 = (double)((ulonglong)(local_208 * auVar19._0_8_) &
                           -(ulonglong)(1e-08 <= auVar16._0_8_));
          local_108[2] = auVar17._0_8_ * -1.0;
          local_108[3] = auVar17._8_8_ * 1.0;
          local_1d8 = local_1d8 * 1.0;
          local_108[0] = -dVar18;
          local_108[1] = -(double)((ulonglong)(dStack_200 * auVar19._8_8_) &
                                  -(ulonglong)(1e-08 <= auVar16._8_8_));
          dVar15 = dStack_1e0 * local_108[0] - local_1e8 * local_108[1];
          dVar21 = local_1d8 * local_108[1] - dStack_1e0 * local_108[2];
          dVar22 = local_1e8 * local_108[2] - local_108[0] * local_1d8;
          dVar15 = dVar15 + dVar15;
          dVar21 = dVar21 + dVar21;
          dVar22 = dVar22 + dVar22;
          local_d8 = 0.0 - (local_108[3] * dVar15 + local_1d8 +
                           (dVar22 * local_108[0] - local_108[1] * dVar21));
          dVar18 = 0.0 - (dVar15 * dVar18 + dVar21 * local_108[2] +
                         local_108[3] * dVar22 + dStack_1e0);
          local_e8._8_4_ = SUB84(dVar18,0);
          local_e8._0_8_ =
               0.0 - ((dVar15 * local_108[1] - local_108[2] * dVar22) +
                     local_108[3] * dVar21 + local_1e8);
          local_e8._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
          uStack_d0 = 0;
          local_c8 = _DAT_149934d80;
          local_b8 = 0x3ff0000000000000;
          uStack_b0 = 0;
        }
        if ((((local_198._4_4_ == 0) || ((int)(uint)local_198 < 0)) ||
            (DAT_14c9647dc <= (int)(uint)local_198)) ||
           (((lVar13 = (ulonglong)(((uint)local_198 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)((uint)local_198 >> 0x10) * 8),
             lVar13 == 0 || (*(int *)(lVar13 + 0x10) != local_198._4_4_)) ||
            ((*(uint *)(lVar13 + 8) & 0x10200000) != 0)))) {
          if (iVar3 == 0) {
LAB_143c9e830:
            lVar13 = 0;
          }
          else {
            lVar13 = 0;
            if ((-1 < (int)(uint)uStack_1a0) && ((int)(uint)uStack_1a0 < DAT_14c9647dc)) {
              plVar12 = (longlong *)
                        ((ulonglong)(((uint)uStack_1a0 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)((uint)uStack_1a0 >> 0x10) * 8));
              if ((plVar12 == (longlong *)0x0) ||
                 (((int)plVar12[2] != iVar3 || ((*(uint *)(plVar12 + 1) & 0x10200000) != 0))))
              goto LAB_143c9e830;
              lVar13 = *plVar12;
            }
          }
          if (*(longlong *)(lVar13 + 0x1c8) == 0) {
            local_198 = 0;
            iVar3 = 0;
          }
          else {
            uVar1 = *(uint *)(*(longlong *)(lVar13 + 0x1c8) + 0xc);
            local_198 = CONCAT44(local_198._4_4_,uVar1);
            if ((int)uVar1 < DAT_14c9647dc) {
              lVar13 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
            }
            else {
              lVar13 = 0;
            }
            iVar3 = *(int *)(lVar13 + 0x10);
            if (*(int *)(lVar13 + 0x10) == 0) {
              LOCK();
              iVar3 = DAT_14c964868 + 1;
              UNLOCK();
              iVar9 = DAT_14c964868 + 1;
              bVar14 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar3;
              if (bVar14) {
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,iVar9);
              }
              LOCK();
              iVar3 = *(int *)(lVar13 + 0x10);
              bVar14 = iVar3 == 0;
              if (bVar14) {
                *(int *)(lVar13 + 0x10) = iVar9;
                iVar3 = 0;
              }
              UNLOCK();
              if (bVar14) {
                iVar3 = iVar9;
              }
            }
          }
          local_198 = CONCAT44(iVar3,(uint)local_198);
        }
        cVar2 = FUN_1487c397c();
        if (cVar2 != '\0') {
          memcpy(param_1,&local_1a8,0x100);
          uVar4 = 1;
          goto LAB_143c9e1a1;
        }
      }
    }
  }
  uVar4 = 0;
LAB_143c9e1a1:
  *(undefined1 *)((longlong)param_1 + 0x100) = uVar4;
  if ((local_a0 ^ (ulonglong)auStack_228) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 143c9ea3a FUN_143c9ea3a body=1150 status=ok
// SIG undefined FUN_143c9ea3a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c9ea3a(longlong *param_1,float param_2)

{
  undefined1 auVar1 [16];
  uint uVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  double *pdVar6;
  longlong *plVar7;
  double *pdVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  float fVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined1 auVar15 [16];
  double dVar16;
  double dVar18;
  undefined1 auVar17 [16];
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar24;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  double dVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auStack_158 [32];
  undefined1 local_138;
  double local_128;
  ulonglong uStack_120;
  undefined1 local_118 [16];
  double local_108;
  double dStack_100;
  undefined1 local_f8 [16];
  double local_e8;
  double dStack_e0;
  undefined1 local_d8 [16];
  double local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  double local_78;
  double dStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_158;
  cVar3 = FUN_1487c397c();
  if (cVar3 != '\0') {
    param_2 = param_2 + *(float *)(param_1 + 0x20);
    *(float *)(param_1 + 0x20) = param_2;
    if (param_2 < *(float *)(*param_1 + 0xb8)) {
      if (*(float *)((longlong)param_1 + 0x104) <= param_2) {
        if ((char)param_1[0x21] != '\0') goto LAB_143c9eac0;
        *(undefined1 *)(param_1 + 0x21) = 1;
        FUN_1487c3d62(param_1,&local_c8);
        if (*(int *)((longlong)param_1 + 0x14) == 0) {
LAB_143c9eea4:
          uVar4 = 0;
        }
        else {
          uVar2 = *(uint *)(param_1 + 2);
          uVar4 = 0;
          if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
            puVar5 = (undefined8 *)
                     ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
            if ((puVar5 == (undefined8 *)0x0) ||
               ((*(int *)(puVar5 + 2) != *(int *)((longlong)param_1 + 0x14) ||
                ((*(uint *)(puVar5 + 1) & 0x10200000) != 0)))) goto LAB_143c9eea4;
            uVar4 = *puVar5;
          }
        }
        local_138 = 0;
        plVar7 = (longlong *)0x0;
        FUN_140613f88(uVar4,&local_c8,0,0);
        if (*(int *)((longlong)param_1 + 0x14) != 0) {
          uVar2 = *(uint *)(param_1 + 2);
          plVar7 = (longlong *)0x0;
          if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
            puVar5 = (undefined8 *)
                     ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
            if ((puVar5 == (undefined8 *)0x0) ||
               ((*(int *)(puVar5 + 2) != *(int *)((longlong)param_1 + 0x14) ||
                ((*(uint *)(puVar5 + 1) & 0x10200000) != 0)))) {
              plVar7 = (longlong *)0x0;
            }
            else {
              plVar7 = (longlong *)*puVar5;
            }
          }
        }
        if (*(int *)((longlong)param_1 + 0x8c) == 0) {
LAB_143c9eeab:
          uVar4 = 0;
        }
        else {
          uVar2 = *(uint *)(param_1 + 0x11);
          uVar4 = 0;
          if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
            puVar5 = (undefined8 *)
                     ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
            if ((puVar5 == (undefined8 *)0x0) ||
               ((*(int *)(puVar5 + 2) != *(int *)((longlong)param_1 + 0x8c) ||
                ((*(uint *)(puVar5 + 1) & 0x10200000) != 0)))) goto LAB_143c9eeab;
            uVar4 = *puVar5;
          }
        }
        (**(code **)(*plVar7 + 0x490))(plVar7,uVar4,&DAT_14cadad90,param_1[0x12]);
        goto LAB_143c9eac0;
      }
      fVar12 = (float)FUN_1487c330a();
      FUN_1487c3d62(param_1,&local_c8);
      if (ABS(fVar12) <= 1e-05) {
        pdVar6 = (double *)(param_1 + 4);
LAB_143c9ee3a:
        pdVar8 = &local_128;
        for (lVar9 = 0xc; lVar9 != 0; lVar9 = lVar9 + -1) {
          *pdVar8 = *pdVar6;
          pdVar6 = pdVar6 + 1;
          pdVar8 = pdVar8 + 1;
        }
      }
      else {
        if (ABS(fVar12 + -1.0) <= 1e-05) {
          pdVar6 = &local_c8;
          goto LAB_143c9ee3a;
        }
        dVar19 = (double)fVar12;
        dVar20 = (double)fVar12;
        dVar16 = (double)DAT_149934d80 - dVar19;
        dVar18 = DAT_149934d80._8_8_ - dVar20;
        local_108 = local_a8 * dVar19 + (double)param_1[8] * dVar16;
        dStack_100 = dStack_a0 * dVar20 + (double)param_1[9] * dVar18;
        dVar21 = dStack_90 * dVar20 + (double)param_1[0xb] * dVar18;
        local_f8._8_4_ = SUB84(dVar21,0);
        local_f8._0_8_ = local_98 * dVar19 + (double)param_1[10] * dVar16;
        local_f8._12_4_ = (int)((ulonglong)dVar21 >> 0x20);
        local_e8 = local_88 * dVar19 + (double)param_1[0xc] * dVar16;
        dStack_e0 = dStack_80 * dVar20 + (double)param_1[0xd] * dVar18;
        dVar21 = dStack_70 * dVar20 + (double)param_1[0xf] * dVar18;
        local_d8._8_4_ = SUB84(dVar21,0);
        local_d8._0_8_ = local_78 * dVar19 + (double)param_1[0xe] * dVar16;
        local_d8._12_4_ = (int)((ulonglong)dVar21 >> 0x20);
        auVar27 = *(undefined1 (*) [16])(param_1 + 4);
        auVar1 = *(undefined1 (*) [16])(param_1 + 6);
        dVar21 = local_b8 * auVar1._0_8_ + local_c8 * auVar27._0_8_;
        dVar24 = dStack_b0 * auVar1._8_8_ + dStack_c0 * auVar27._8_8_;
        lVar9 = -(ulonglong)(0.0 <= dVar21 + dVar24);
        lVar10 = -(ulonglong)(0.0 <= dVar21 + dVar24);
        uVar13 = (undefined4)lVar10;
        uVar14 = (undefined4)((ulonglong)lVar10 >> 0x20);
        auVar22._0_8_ = 0.0 - auVar27._0_8_;
        auVar22._8_8_ = 0.0 - auVar27._8_8_;
        auVar26._0_8_ = 0.0 - auVar1._0_8_;
        auVar26._8_8_ = 0.0 - auVar1._8_8_;
        auVar23._8_4_ = uVar13;
        auVar23._0_8_ = lVar9;
        auVar23._12_4_ = uVar14;
        auVar23 = blendvpd(auVar22,auVar27,auVar23);
        auVar27._8_4_ = uVar13;
        auVar27._0_8_ = lVar9;
        auVar27._12_4_ = uVar14;
        auVar27 = blendvpd(auVar26,auVar1,auVar27);
        dVar24 = auVar23._0_8_ * dVar16 + local_c8 * dVar19;
        dVar25 = auVar23._8_8_ * dVar18 + dStack_c0 * dVar20;
        dVar19 = auVar27._0_8_ * dVar16 + local_b8 * dVar19;
        dVar18 = auVar27._8_8_ * dVar18 + dStack_b0 * dVar20;
        dVar21 = dVar19 * dVar19 + dVar24 * dVar24;
        dVar16 = dVar18 * dVar18 + dVar25 * dVar25;
        auVar17._0_8_ = dVar21 + dVar16;
        auVar17._8_8_ = dVar21 + dVar16;
        uVar11 = -(ulonglong)(1e-08 <= auVar17._8_8_);
        auVar27 = sqrtpd(auVar17,auVar17);
        auVar27 = divpd(_DAT_149934d80,auVar27);
        auVar15._0_8_ = auVar27._0_8_ * dVar19;
        auVar15._8_8_ = auVar27._8_8_ * dVar18;
        local_128 = (double)((ulonglong)(dVar24 * auVar27._0_8_) &
                            -(ulonglong)(1e-08 <= auVar17._0_8_));
        uStack_120 = (ulonglong)(dVar25 * auVar27._8_8_) & uVar11;
        auVar1._8_4_ = (int)uVar11;
        auVar1._0_8_ = -(ulonglong)(1e-08 <= auVar17._0_8_);
        auVar1._12_4_ = (int)(uVar11 >> 0x20);
        local_118 = blendvpd(_DAT_149935300,auVar15,auVar1);
      }
      if (*(int *)((longlong)param_1 + 0x14) == 0) {
LAB_143c9eea0:
        uVar4 = 0;
      }
      else {
        uVar2 = *(uint *)(param_1 + 2);
        uVar4 = 0;
        if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
          puVar5 = (undefined8 *)
                   ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
          if ((puVar5 == (undefined8 *)0x0) ||
             ((*(int *)(puVar5 + 2) != *(int *)((longlong)param_1 + 0x14) ||
              ((*(uint *)(puVar5 + 1) & 0x10200000) != 0)))) goto LAB_143c9eea0;
          uVar4 = *puVar5;
        }
      }
      local_138 = 0;
      FUN_140613f88(uVar4,&local_128,0,0);
      goto LAB_143c9eac0;
    }
  }
  FUN_1487c39fc(param_1,0);
  *(undefined1 *)((longlong)param_1 + 0x113) = 1;
LAB_143c9eac0:
  if ((local_60 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c9eeb9 FUN_143c9eeb9 body=69 status=ok
// SIG undefined FUN_143c9eeb9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c9eeb9(void)

{
  _DAT_14cb71528 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143c9eefb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb71530,1);
  return;
}



// FUNCTION 143c9eefe FUN_143c9eefe body=69 status=ok
// SIG undefined FUN_143c9eefe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c9eefe(void)

{
  _DAT_14cb71538 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143c9ef40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb71540,1);
  return;
}



// FUNCTION 143c9ef44 FUN_143c9ef44 body=894 status=ok
// SIG undefined FUN_143c9ef44(void)

void FUN_143c9ef44(longlong *param_1,longlong param_2,longlong *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined2 *puVar4;
  ulonglong uVar5;
  undefined2 *puVar6;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  longlong *local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  int local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  int local_98;
  undefined4 local_8c;
  longlong local_88 [2];
  longlong local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (param_2 != 0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cb71550) && (FUN_144b3d300(&DAT_14cb71550), DAT_14cb71550 == -1)) {
      FUN_1446f470e(&DAT_14cb71548,L"GbxInput");
      _Init_thread_footer(&DAT_14cb71550);
    }
    if ((longlong)(int)param_3[1] != 0) {
      lVar1 = param_2 + 0xa8;
      lVar3 = 0;
LAB_143c9efd8:
      if (*(longlong *)(*param_3 + lVar3) != DAT_14cb71548) goto code_r0x000143c9efde;
      local_78 = 0;
      uStack_70 = 0;
      local_c0 = param_1;
      local_b8 = param_4;
      (**(code **)(*param_1 + 0xd80))(param_1);
      *(undefined1 **)(param_2 + 0xd8) = &DAT_3f8000003f800000;
      *(undefined1 **)(param_2 + 0xe0) = &DAT_3f8000003f800000;
      local_a0 = 0;
      FUN_140056680(local_88,L"<<<< INPUT STACK >>>>");
      FUN_147d8f316(lVar1,local_88,&local_a0);
      if (local_88[0] != 0) {
        FUN_1400020a8();
      }
      if (0 < (longlong)(int)uStack_70) {
        uVar5 = (longlong)(int)uStack_70 + 1;
        do {
          lVar3 = *(longlong *)(*(longlong *)(local_78 + -0x10 + uVar5 * 8) + 0xa8);
          *(undefined1 **)(param_2 + 0xd8) = &DAT_3f8000003f800000;
          *(undefined1 **)(param_2 + 0xe0) = &DAT_3f8000003f800000;
          if (lVar3 == 0) {
            local_b0 = 0;
            local_88[0] = *(longlong *)(*(longlong *)(local_78 + -0x10 + uVar5 * 8) + 0x18);
            FUN_1400021e4(local_88,&local_a0);
            puVar6 = &DAT_149dfb77a;
            if (local_98 != 0) {
              puVar6 = (undefined2 *)CONCAT44(uStack_9c,local_a0);
            }
            FUN_140002266(local_88,&DAT_14a1ca408,puVar6);
            FUN_147d8f316(lVar1,local_88,&local_b0);
            lVar3 = local_88[0];
          }
          else {
            local_8c = 0;
            local_88[0] = *(longlong *)(*(longlong *)(local_78 + -0x10 + uVar5 * 8) + 0x18);
            FUN_1400021e4(local_88,&local_a0);
            puVar6 = &DAT_149dfb77a;
            if (local_98 != 0) {
              puVar6 = (undefined2 *)CONCAT44(uStack_9c,local_a0);
            }
            local_88[0] = *(longlong *)(lVar3 + 0x18);
            FUN_1400021e4(local_88,&local_b0);
            puVar4 = &DAT_149dfb77a;
            if (local_a8 != 0) {
              puVar4 = (undefined2 *)CONCAT44(uStack_ac,local_b0);
            }
            FUN_140002266(local_88,L" %s.%s",puVar4,puVar6);
            FUN_147d8f316(lVar1,local_88,&local_8c);
            if (local_88[0] != 0) {
              FUN_1400020a8();
            }
            lVar3 = CONCAT44(uStack_ac,local_b0);
          }
          if (lVar3 != 0) {
            FUN_1400020a8();
          }
          if (CONCAT44(uStack_9c,local_a0) != 0) {
            FUN_1400020a8();
          }
          uVar5 = uVar5 - 1;
        } while (1 < uVar5);
      }
      local_a0 = 0;
      FUN_140056680(local_88,L"<<<<  >>>>");
      FUN_147d8f316(lVar1,local_88,&local_a0);
      if (local_88[0] != 0) {
        FUN_1400020a8();
      }
      param_4 = local_b8;
      if (0 < (longlong)(int)uStack_70) {
        uVar5 = (longlong)(int)uStack_70 + 1;
        do {
          plVar2 = *(longlong **)(local_78 + -0x10 + uVar5 * 8);
          local_c8 = param_5;
          (**(code **)(*plVar2 + 0x498))(plVar2,param_2,param_3,param_4);
          uVar5 = uVar5 - 1;
        } while (1 < uVar5);
      }
      param_1 = local_c0;
      if (local_78 != 0) {
        FUN_1400020a8();
        param_1 = local_c0;
      }
    }
LAB_143c9f234:
    local_c8 = param_5;
    FUN_147c9ff88(param_1,param_2,param_3,param_4);
  }
  if ((local_60 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
code_r0x000143c9efde:
  lVar3 = lVar3 + 8;
  if ((longlong)(int)param_3[1] * 8 == lVar3) goto LAB_143c9f234;
  goto LAB_143c9efd8;
}



// FUNCTION 143c9f2c4 FUN_143c9f2c4 body=155 status=ok
// SIG undefined FUN_143c9f2c4(void)

void FUN_143c9f2c4(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  
  if (*(char *)(param_1 + 0xa99) == '\x01') {
    bVar4 = *(char *)(param_1 + 0xa98) == '\x01';
  }
  else {
    bVar4 = false;
  }
  if (*(longlong *)(param_1 + 0x430) != 0) {
    lVar3 = FUN_140628492();
    lVar1 = *(longlong *)(param_1 + 0x430);
    if ((((lVar1 != 0) && (lVar3 != 0)) && (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 != 0)) &&
       ((*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38) &&
        (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
         lVar3 + 0x30)))) {
      if ((bVar4) && (*(char *)(lVar1 + 0x2d2) == '\x01')) goto LAB_143c9f34a;
      goto LAB_143c9f32b;
    }
  }
  if (bVar4) {
LAB_143c9f34a:
    FUN_1487c4810(param_1);
    return;
  }
LAB_143c9f32b:
  *(undefined8 *)(param_1 + 0x580) = 0;
  *(undefined8 *)(param_1 + 0x588) = 0;
  return;
}



// FUNCTION 143c9f366 FUN_143c9f366 body=326 status=ok
// SIG undefined FUN_143c9f366(void)

ulonglong FUN_143c9f366(longlong param_1)

{
  longlong lVar1;
  undefined8 unaff_RSI;
  ulonglong uVar2;
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
  uVar2 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if ((*(char *)(param_1 + 0x421) == '\0') && (*(char *)(param_1 + 0xa20) == '\0')) {
    lVar1 = *(longlong *)(param_1 + 0x3e0);
    if (lVar1 != 0) {
      if (DAT_14cb5b388 == 0) {
        local_40 = &local_20;
        local_20 = FUN_141864c34;
        local_30 = FUN_14081d0ea;
        local_38 = &LAB_146431698;
        local_48 = &LAB_1486775cb;
        local_50 = &LAB_1464cee35;
        local_58 = &DAT_149e063b2;
        local_60 = 0;
        local_68 = 0x10000005;
        local_70 = 0x10;
        local_78 = 0x3a20;
        FUN_14081cfa3(L"/Script/GbxGame",L"GbxCharacter",&DAT_14cb5b388,FUN_1464cee0e);
      }
      if ((((*(int *)(DAT_14cb5b388 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
             (longlong)*(int *)(DAT_14cb5b388 + 0x38) * 8) == DAT_14cb5b388 + 0x30)) &&
          (lVar1 = *(longlong *)(lVar1 + 0x11e8), lVar1 != 0)) &&
         ((*(char *)(lVar1 + 0x11f0) != '\0' || (*(char *)(lVar1 + 0x1b70) != '\0'))))
      goto LAB_143c9f3e9;
    }
    uVar2 = 0;
  }
LAB_143c9f3e9:
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar2 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c9f4ad FUN_143c9f4ad body=49 status=ok
// SIG undefined FUN_143c9f4ad(void)

void FUN_143c9f4ad(void)

{
  FUN_144760e21(DAT_14cb71558,DAT_14cb71560);
  if (DAT_14cb71558 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143c9f4f8 FUN_143c9f4f8 body=2625 status=ok
// SIG undefined FUN_143c9f4f8(void)

void FUN_143c9f4f8(longlong *param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  undefined8 *puVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  byte bVar14;
  int iVar15;
  ulonglong uVar16;
  undefined8 unaff_R15;
  ulonglong uVar17;
  longlong lVar18;
  bool bVar19;
  undefined1 auStack_138 [32];
  uint local_118;
  ulonglong local_110;
  ulonglong local_108;
  ulonglong local_100;
  ulonglong local_f8;
  longlong *local_f0;
  undefined8 *local_e8;
  int local_e0;
  longlong local_d8;
  longlong local_d0;
  longlong local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  longlong local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  ulonglong local_98;
  undefined4 local_90;
  undefined8 local_88;
  ulonglong local_80;
  undefined4 local_78;
  undefined8 local_70;
  longlong local_68;
  longlong *plStack_60;
  longlong local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if (param_2 == 0) {
    *(byte *)(param_1 + 0xb4) = *(byte *)(param_1 + 0xb4) & 0xfd;
    bVar14 = 0;
    cVar5 = '\0';
    uVar17 = 0;
    local_f8 = 0;
    local_100 = 0;
    uVar12 = 0;
    uVar13 = 0;
    local_108 = 0;
    uVar11 = 0;
LAB_143c9f5cb:
    FUN_1400bc8c2(param_1 + 0x144,&DAT_14cb75f48);
  }
  else {
    *(uint *)(param_1 + 0xb4) =
         (*(uint *)(param_1 + 0xb4) & 0xfffffffd) + (uint)*(byte *)(param_2 + 0x18) * 2;
    bVar14 = *(byte *)(param_2 + 0x55);
    uVar17 = CONCAT71((int7)((ulonglong)unaff_R15 >> 8),*(undefined1 *)(param_2 + 0x60));
    cVar5 = *(char *)(param_2 + 0x62);
    local_100 = *(ulonglong *)(param_2 + 0x68);
    local_f8 = local_100 & 0xffffffff00000000;
    local_108 = *(ulonglong *)(param_2 + 0x70);
    uVar11 = local_108 & 0xffffffff00000000;
    uVar12 = *(ulonglong *)(param_2 + 0x78);
    uVar13 = uVar12 & 0xffffffff00000000;
    if (*(char *)(param_2 + 0x61) != '\x01') goto LAB_143c9f5cb;
    FUN_1400bc96c(param_1 + 0x144,&DAT_14cb75f48);
  }
  if (cVar5 == '\0') {
    FUN_1400bc8c2(param_1 + 0x149,&DAT_14cb75f48);
  }
  else {
    FUN_1400bc96c();
  }
  plVar7 = (longlong *)FUN_140628716();
  lVar8 = plVar7[0x22];
  if (lVar8 == 0) {
    (**(code **)(*plVar7 + 1000))(plVar7);
    lVar8 = plVar7[0x22];
    if (lVar8 != 0) goto LAB_143c9f621;
  }
  else {
LAB_143c9f621:
    if (*(byte *)(lVar8 + 0x58) == bVar14) {
      *(byte *)(lVar8 + 0x58) = bVar14 ^ 1;
      lVar8 = FUN_1447210f0(param_1);
      if ((lVar8 != 0) && (plVar7 = (longlong *)FUN_1449baec6(lVar8), plVar7 != (longlong *)0x0)) {
        (**(code **)(*plVar7 + 0x350))(plVar7);
      }
    }
  }
  plVar7 = param_1 + 0x177;
  lVar8 = param_1[0x177];
  if ((lVar8 != 0) && ((DAT_14cb26569 & 1) != 0)) {
    piVar1 = *(int **)(lVar8 + 0x50);
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    local_50 = lVar8;
    if (DAT_14cb259f8 == 0) {
      iVar6 = 5;
LAB_143c9fe5e:
      LOCK();
      piVar1[2] = iVar6;
      UNLOCK();
    }
    else {
      if ((char)piVar1[1] == '\x01') {
        iVar6 = 2;
        goto LAB_143c9fe5e;
      }
      FUN_14003fb24(*(undefined8 *)(DAT_14cb259f8 + 0x60));
    }
    FUN_14654487e(&local_50);
    if ((*plVar7 != 0) && ((DAT_14cb26569 & 1) != 0)) {
      FUN_1400848c0(*(undefined8 *)(*plVar7 + 0x50));
    }
    *plVar7 = 0;
  }
  lVar8 = param_1[0x162];
  local_f0 = plVar7;
  if (lVar8 != 0) {
    lVar10 = *(longlong *)(lVar8 + 0x28);
    if (lVar10 == 0) {
      uVar9 = FUN_140067708();
      lVar10 = FUN_14477b664(uVar9);
      *(longlong *)(lVar8 + 0x28) = lVar10;
    }
    if (*(longlong *)(lVar8 + 0x30) == 0) {
      if ((lVar10 != 0) && (*(longlong *)(lVar8 + 0x20) != 0)) {
        plVar7 = *(longlong **)(lVar10 + 0xb8);
        local_110 = uVar13;
        if ((plVar7 == (longlong *)0x0) ||
           (cVar5 = (**(code **)(*plVar7 + 0x108))(plVar7), cVar5 == '\0')) {
          *(undefined8 *)(lVar8 + 0x30) = 0;
          uVar13 = local_110;
        }
        else {
          uVar9 = (**(code **)(*plVar7 + 0x110))(plVar7);
          lVar10 = FUN_144aff482(uVar9,(longlong *)(lVar8 + 0x20));
          *(longlong *)(lVar8 + 0x30) = lVar10;
          uVar13 = local_110;
          if (lVar10 != 0) goto LAB_143c9fc8a;
        }
      }
    }
    else {
LAB_143c9fc8a:
      lVar8 = param_1[0x162];
      lVar10 = *(longlong *)(lVar8 + 0x28);
      if (lVar10 == 0) {
        uVar9 = FUN_140067708();
        lVar10 = FUN_14477b664(uVar9);
        *(longlong *)(lVar8 + 0x28) = lVar10;
      }
      local_58 = *(longlong *)(lVar8 + 0x30);
      if (((local_58 == 0) && (local_58 = 0, lVar10 != 0)) && (*(longlong *)(lVar8 + 0x20) != 0)) {
        plVar7 = *(longlong **)(lVar10 + 0xb8);
        local_110 = uVar17;
        if ((plVar7 == (longlong *)0x0) ||
           (cVar5 = (**(code **)(*plVar7 + 0x108))(plVar7), cVar5 == '\0')) {
          local_58 = 0;
        }
        else {
          uVar9 = (**(code **)(*plVar7 + 0x110))(plVar7);
          local_58 = FUN_144aff482(uVar9,(longlong *)(lVar8 + 0x20));
        }
        *(longlong *)(lVar8 + 0x30) = local_58;
        uVar17 = local_110;
      }
      FUN_140942716(&local_58);
      FUN_14654487e(&local_58);
      lVar8 = param_1[0x162];
      lVar10 = *(longlong *)(lVar8 + 0x40);
      if (lVar10 == 0) {
        uVar9 = FUN_140067708();
        lVar10 = FUN_14477b664(uVar9);
        *(longlong *)(lVar8 + 0x40) = lVar10;
      }
      local_68 = *(longlong *)(lVar8 + 0x48);
      if (((local_68 == 0) && (local_68 = 0, lVar10 != 0)) && (*(longlong *)(lVar8 + 0x38) != 0)) {
        plVar7 = *(longlong **)(lVar10 + 0xb8);
        local_110 = uVar17;
        if ((plVar7 == (longlong *)0x0) ||
           (cVar5 = (**(code **)(*plVar7 + 0x108))(plVar7), cVar5 == '\0')) {
          local_68 = 0;
        }
        else {
          uVar9 = (**(code **)(*plVar7 + 0x110))(plVar7);
          local_68 = FUN_144aff482(uVar9,(longlong *)(lVar8 + 0x38));
        }
        *(longlong *)(lVar8 + 0x48) = local_68;
        uVar17 = local_110;
      }
      FUN_140942716(&local_68);
      FUN_1407ec87c(local_f0,&local_68);
      if ((local_68 != 0) && ((DAT_14cb26569 & 1) != 0)) {
        FUN_1400848c0(*(undefined8 *)(local_68 + 0x50));
      }
    }
  }
  if (param_2 == 0) {
    if ((char)param_1[0x17a] == '\x01') {
      *(undefined1 *)(param_1 + 0x17a) = 0;
      plVar7 = (longlong *)FUN_14589e76e(param_1);
      if ((plVar7 != (longlong *)0x0) &&
         (lVar8 = (**(code **)(*plVar7 + 0x2b0))(plVar7), lVar8 != 0)) {
        plVar7 = (longlong *)FUN_14007a60a(lVar8);
        lVar8 = (**(code **)(*plVar7 + 0x110))(plVar7);
        if (lVar8 != 0) {
          uVar9 = 0;
          goto LAB_143c9fe49;
        }
      }
    }
  }
  else {
    if (*(char *)(param_2 + 0x81) == '\x01') {
      uVar9 = FUN_1447210f0(param_1);
      FUN_140ebf024(&local_68,uVar9);
      if (plStack_60 != (longlong *)0x0) {
        iVar6 = (int)plStack_60[1];
        do {
          if (iVar6 == 0) {
            plVar7 = (longlong *)0x0;
            break;
          }
          LOCK();
          iVar15 = (int)plStack_60[1];
          bVar19 = iVar6 == iVar15;
          if (bVar19) {
            *(int *)(plStack_60 + 1) = iVar6 + 1;
            iVar15 = iVar6;
          }
          iVar6 = iVar15;
          UNLOCK();
          plVar7 = plStack_60;
        } while (!bVar19);
        LOCK();
        piVar1 = (int *)((longlong)plStack_60 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plStack_60 + 0x10))();
        }
        if (plVar7 != (longlong *)0x0) {
          if (local_68 != 0) {
            FUN_143cf73e4(local_68,1);
          }
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
    if (*(char *)(param_2 + 0x82) == '\x01') {
      *(undefined1 *)(param_1 + 0x17a) = 1;
      plVar7 = (longlong *)FUN_14589e76e(param_1);
      if ((plVar7 != (longlong *)0x0) &&
         (lVar8 = (**(code **)(*plVar7 + 0x2b0))(plVar7), lVar8 != 0)) {
        plVar7 = (longlong *)FUN_14007a60a(lVar8);
        lVar8 = (**(code **)(*plVar7 + 0x110))(plVar7);
        if (lVar8 != 0) {
          uVar9 = 1;
LAB_143c9fe49:
          FUN_143d30e66(lVar8,uVar9);
        }
      }
    }
  }
  uVar16 = local_100 & 0xffffffff | local_f8;
  if (uVar16 != param_1[0x178]) {
    if (param_1[0x89] != 0) {
      lVar10 = FUN_140183ac4();
      lVar8 = param_1[0x89];
      if ((((lVar8 != 0) && (lVar10 != 0)) && (lVar18 = *(longlong *)(lVar8 + 0x10), lVar18 != 0))
         && ((*(int *)(lVar10 + 0x38) <= *(int *)(lVar18 + 0x38) &&
             (*(longlong *)(*(longlong *)(lVar18 + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8) ==
              lVar10 + 0x30)))) {
        if (uVar16 != 0) {
          local_80 = uVar11 | local_108 & 0xffffffff;
          local_78 = 0x7202;
          local_70 = 0;
          local_90 = 0x7201;
          local_88 = 0;
          local_118 = local_118 & 0xffffff00;
          local_98 = uVar16;
          FUN_14117bf1c(lVar8,&local_98,&local_80,0xbf800000);
        }
        if (param_1[0x178] != 0) {
          local_b0 = param_1[0x179];
          local_a8 = 0x7202;
          local_a0 = 0;
          local_c0 = 0x7201;
          local_b8 = 0;
          local_118 = local_118 & 0xffffff00;
          local_c8 = param_1[0x178];
          FUN_141263aea(lVar8,&local_c8,&local_b0,0xbf800000);
        }
      }
    }
    param_1[0x178] = uVar16;
    param_1[0x179] = uVar13 | uVar12 & 0xffffffff;
  }
  if (((param_1[0x173] != 0) && (param_1[0x174] != 0)) && (0 < *(int *)(param_1[0x174] + 8))) {
    FUN_1401cb356();
    local_d8 = param_1[0x173];
    local_d0 = param_1[0x174];
    if (local_d0 != 0) {
      LOCK();
      *(int *)(local_d0 + 0xc) = *(int *)(local_d0 + 0xc) + 1;
      UNLOCK();
    }
    FUN_140d61352(&local_d8);
    plVar7 = (longlong *)param_1[0x174];
    param_1[0x173] = 0;
    param_1[0x174] = 0;
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar7 + 0x10))();
      }
    }
  }
  if (param_2 == 0) {
    if ((char)param_1[0x12d] != '\0') {
LAB_143c9f9f2:
      FUN_1400bc8c2(param_1 + 0x12d,&DAT_14cb75f48);
    }
  }
  else if ((char)param_1[0x12d] != *(char *)(param_2 + 0x80)) {
    if (*(char *)(param_2 + 0x80) == '\0') goto LAB_143c9f9f2;
    FUN_1400bc96c(param_1 + 0x12d,&DAT_14cb75f48);
  }
  cVar5 = (**(code **)(*param_1 + 0x6c8))(param_1);
  if (cVar5 != '\0') {
    if ((char)uVar17 == '\0') {
      (**(code **)(*param_1 + 0xce8))(param_1,param_1[0x17c]);
    }
    else {
      cVar5 = (**(code **)(*param_1 + 0xcf0))();
      if (cVar5 == '\0') {
        if ((char)param_1[0x151] == '\0') {
          FUN_1487c4dec(param_1);
        }
        else {
          uVar9 = FUN_1401cb356();
          local_e8 = (undefined8 *)0x0;
          local_e0 = 0;
          FUN_1446efa72(&local_e8,0,3,0x10);
          puVar4 = local_e8;
          local_e0 = 3;
          *local_e8 = &PTR_LAB_149e02020;
          LOCK();
          UNLOCK();
          lVar10 = DAT_14c758608 + 1;
          lVar8 = DAT_14c758608 + 1;
          if (lVar10 == 0) {
            LOCK();
            UNLOCK();
            lVar10 = DAT_14c758608 + 2;
            lVar8 = DAT_14c758608 + 2;
          }
          DAT_14c758608 = lVar8;
          local_e8[2] = lVar10;
          *local_e8 = &PTR_FUN_14b3e9290;
          local_e8[3] = 0;
          iVar6 = 0;
          if (param_1 != (longlong *)0x0) {
            uVar3 = *(uint *)((longlong)param_1 + 0xc);
            *(uint *)(local_e8 + 3) = uVar3;
            if ((int)uVar3 < DAT_14c9647dc) {
              lVar8 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
            }
            else {
              lVar8 = 0;
            }
            iVar6 = *(int *)(lVar8 + 0x10);
            if (*(int *)(lVar8 + 0x10) == 0) {
              LOCK();
              iVar6 = DAT_14c964868 + 1;
              UNLOCK();
              iVar15 = DAT_14c964868 + 1;
              bVar19 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar6;
              if (bVar19) {
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,iVar15);
              }
              LOCK();
              iVar6 = *(int *)(lVar8 + 0x10);
              bVar19 = iVar6 == 0;
              if (bVar19) {
                *(int *)(lVar8 + 0x10) = iVar15;
                iVar6 = 0;
              }
              UNLOCK();
              if (bVar19) {
                iVar6 = iVar15;
              }
            }
          }
          *(int *)((longlong)puVar4 + 0x1c) = iVar6;
          puVar4[4] = FUN_1487c4e56;
          *(undefined4 *)(puVar4 + 5) = 0;
          local_118 = 0;
          FUN_1405f67fc(uVar9,&local_68,&local_e8,
                        L"ApplyCinematicModeInputComponentDeferredCallback");
          param_1[0x173] = local_68;
          local_68 = 0;
          plVar7 = (longlong *)param_1[0x174];
          param_1[0x174] = (longlong)plStack_60;
          plStack_60 = (longlong *)0x0;
          if (plVar7 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)plVar7 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar7 + 0x10))();
            }
            if (plStack_60 != (longlong *)0x0) {
              LOCK();
              piVar1 = (int *)((longlong)plStack_60 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plStack_60 + 0x10))();
              }
            }
          }
          if (local_e0 != 0) {
            if (local_e8 == (undefined8 *)0x0) goto LAB_143c9fbd1;
            (**(code **)*local_e8)(local_e8,0);
            FUN_1446efa72(&local_e8,0,0,0x10);
            local_e0 = 0;
          }
          if (local_e8 != (undefined8 *)0x0) {
            FUN_1400020a8();
          }
        }
      }
    }
  }
LAB_143c9fbd1:
  local_68 = 0;
  plStack_60 = (longlong *)0x0;
  (**(code **)(*param_1 + 0x1048))(param_1,&local_68);
  lVar8 = local_68;
  lVar10 = (longlong)(int)plStack_60;
  if (lVar10 != 0) {
    lVar18 = 0;
    do {
      (**(code **)(*param_1 + 0x1040))(param_1,param_2,*(undefined8 *)(lVar8 + lVar18));
      lVar18 = lVar18 + 8;
    } while (lVar10 * 8 != lVar18);
  }
  if (local_68 != 0) {
    FUN_1400020a8(local_68);
  }
  if ((local_48 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143c9ff3a FUN_143c9ff3a body=651 status=ok
// SIG undefined FUN_143c9ff3a(void)

void FUN_143c9ff3a(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined2 *puVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 auStack_f8 [32];
  uint local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined4 *local_c0;
  undefined2 *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  code **local_a0;
  undefined1 *local_98;
  code *local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (((param_2 != 0) && (lVar4 = FUN_1447210f0(param_2), lVar4 != 0)) &&
     (0 < *(int *)(param_1 + 1))) {
    if (*(int *)((undefined8 *)*param_1 + 1) == 0) {
      puVar5 = &DAT_149dfb77a;
    }
    else {
      puVar5 = *(undefined2 **)*param_1;
    }
    FUN_1446f470e(&local_70,puVar5,1);
    local_68 = local_70;
    local_60 = 0x7012;
    local_58 = 0;
    if (0 < *(int *)(lVar4 + 0x238)) {
      lVar7 = 0;
      do {
        iVar1 = *(int *)(*(longlong *)(lVar4 + 0x230) + 4 + lVar7 * 8);
        if (((((iVar1 != 0) &&
              (uVar2 = *(uint *)(*(longlong *)(lVar4 + 0x230) + lVar7 * 8), -1 < (int)uVar2)) &&
             (((int)uVar2 < DAT_14c9647dc &&
              ((plVar6 = (longlong *)
                         ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
               plVar6 != (longlong *)0x0 && ((int)plVar6[2] == iVar1)))))) &&
            ((*(uint *)(plVar6 + 1) & 0x10200000) == 0)) && (lVar3 = *plVar6, lVar3 != 0)) {
          if (DAT_14cb61cd0 == 0) {
            local_50 = FUN_141030f22;
            local_90 = FUN_14081d0ea;
            local_98 = &LAB_1463b31ae;
            local_a0 = &local_50;
            local_a8 = &LAB_1486dca4f;
            local_b0 = &LAB_1464f50a6;
            local_b8 = &DAT_149e063b2;
            local_c0 = (undefined4 *)0x0;
            local_c8 = CONCAT44(local_c8._4_4_,0x10000004);
            local_d0 = 8;
            local_d8 = 0xd70;
            FUN_14081cfa3(L"/Script/GbxGame",L"GbxPlayerController",&DAT_14cb61cd0,FUN_1464f5084);
          }
          if ((*(int *)(DAT_14cb61cd0 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
               (longlong)*(int *)(DAT_14cb61cd0 + 0x38) * 8) == DAT_14cb61cd0 + 0x30)) {
            local_78 = DAT_14c8464f0;
            local_88 = (undefined4)DAT_14c8464e0;
            uStack_84 = DAT_14c8464e0._4_4_;
            uStack_80 = (undefined4)DAT_14c8464e8;
            uStack_7c = DAT_14c8464e8._4_4_;
            local_b0 = (undefined1 *)((ulonglong)local_b0 & 0xffffffff00000000);
            local_b8 = (undefined2 *)((ulonglong)local_b8 & 0xffffffff00000000);
            local_c8 = 0;
            local_d0 = 0x3f800000;
            local_d8 = local_d8 & 0xffffff00;
            local_c0 = &local_88;
            FUN_14096b83c(lVar3,&local_68,0xff,0);
          }
        }
        lVar7 = lVar7 + 1;
      } while ((int)lVar7 < *(int *)(lVar4 + 0x238));
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143ca01c6 FUN_143ca01c6 body=69 status=ok
// SIG undefined FUN_143ca01c6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143ca01c6(void)

{
  _DAT_14cb71570 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143ca0208. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb71578,1);
  return;
}



// FUNCTION 143ca0224 FUN_143ca0224 body=165 status=ok
// SIG undefined FUN_143ca0224(void)

uint * FUN_143ca0224(longlong param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  bool bVar5;
  
  lVar3 = *(longlong *)(param_1 + -0x590);
  param_2[1] = 0;
  if (lVar3 == 0) {
    *param_2 = 0;
    uVar2 = 0;
  }
  else {
    uVar2 = *(uint *)(lVar3 + 0xc);
    *param_2 = uVar2;
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar3 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar3 = 0;
    }
    uVar2 = *(uint *)(lVar3 + 0x10);
    if (*(uint *)(lVar3 + 0x10) == 0) {
      LOCK();
      iVar1 = DAT_14c964868 + 1;
      UNLOCK();
      uVar4 = DAT_14c964868 + 1;
      bVar5 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar1;
      if (bVar5) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar4);
      }
      LOCK();
      uVar2 = *(uint *)(lVar3 + 0x10);
      bVar5 = uVar2 == 0;
      if (bVar5) {
        *(uint *)(lVar3 + 0x10) = uVar4;
        uVar2 = 0;
      }
      UNLOCK();
      if (bVar5) {
        uVar2 = uVar4;
      }
    }
  }
  param_2[1] = uVar2;
  return param_2;
}



// FUNCTION 143ca034a FUN_143ca034a body=103 status=ok
// SIG undefined FUN_143ca034a(void)

float FUN_143ca034a(longlong param_1,int param_2)

{
  float fVar1;
  
  if (*(longlong **)(param_1 + -0x548) == (longlong *)0x0) {
    fVar1 = 90.0;
  }
  else {
    fVar1 = (float)(**(code **)(**(longlong **)(param_1 + -0x548) + 0x860))();
  }
  if (1 < param_2 - 1U) {
    fVar1 = tanf((fVar1 * 3.1415927) / 360.0);
    fVar1 = atanf(fVar1 * 9.0 * 0.0625);
    fVar1 = fVar1 * 114.59155;
  }
  return fVar1;
}



// FUNCTION 143ca03b2 FUN_143ca03b2 body=72 status=ok
// SIG undefined FUN_143ca03b2(void)

void FUN_143ca03b2(longlong param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  
  *(undefined1 *)(param_2 + 0x78) = 0;
  *(undefined2 *)(param_2 + 0x7a) = 0;
  if (*(longlong *)(param_1 + 0x180) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined1 *)(*(longlong *)(param_1 + 0x180) + 0x54);
  }
  *(undefined1 *)(param_2 + 0x79) = uVar1;
  uVar2 = (**(code **)(*(longlong *)(param_1 + -0x990) + 0xed8))(param_1 + -0x990);
  *(undefined4 *)(param_2 + 0x120) = uVar2;
  return;
}



// FUNCTION 143ca03fa FUN_143ca03fa body=49 status=ok
// SIG undefined FUN_143ca03fa(void)

void FUN_143ca03fa(void)

{
  FUN_144760e21(DAT_14cb71580,DAT_14cb71588);
  if (DAT_14cb71580 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143ca043c FUN_143ca043c body=171 status=ok
// SIG undefined FUN_143ca043c(void)

ulonglong FUN_143ca043c(undefined8 *param_1,ulonglong param_2)

{
  longlong lVar1;
  byte bVar2;
  byte *pbVar3;
  undefined7 uVar4;
  byte bVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  longlong *plVar9;
  int iVar10;
  
  pbVar3 = (byte *)*param_1;
  if (pbVar3 != (byte *)0x0) {
    if ((*pbVar3 & 2) == 0) {
      plVar6 = &DAT_14c9a1288;
    }
    else {
      plVar6 = (longlong *)(*(longlong *)(pbVar3 + 8) + 0x18);
    }
    if ((int)plVar6[2] != *(int *)((longlong)plVar6 + 0x3c)) {
      plVar9 = plVar6 + 8;
      if ((longlong *)plVar6[9] != (longlong *)0x0) {
        plVar9 = (longlong *)plVar6[9];
      }
      iVar10 = *(int *)((longlong)plVar9 + (ulonglong)((int)plVar6[10] - 1U & DAT_14cb71598) * 4);
      if (iVar10 != -1) {
        do {
          lVar1 = *plVar6 + (longlong)iVar10 * 0x40;
          if (*(uint *)(*plVar6 + (longlong)iVar10 * 0x40) == DAT_14cb71598) {
            if ((((lVar1 != 0) &&
                 (puVar7 = (undefined8 *)(lVar1 + 0x28), puVar7 != (undefined8 *)0x0)) &&
                ((byte *)*puVar7 != (byte *)0x0)) && ((*(byte *)*puVar7 & 0x40) == 0))
            goto LAB_143ca04cc;
            break;
          }
          iVar10 = *(int *)(lVar1 + 0x38);
        } while (iVar10 != -1);
      }
    }
  }
  puVar7 = &DAT_14c9a1308;
LAB_143ca04cc:
  pbVar3 = (byte *)*puVar7;
  if (pbVar3 == (byte *)0x0) {
    return param_2 & 0xffffffff;
  }
  param_2 = param_2 & 0xffffffff;
  if (((*pbVar3 & 0x6b) != 1) || (pbVar3 = *(byte **)(pbVar3 + 8), pbVar3 == (byte *)0x0))
  goto LAB_14000586d;
  bVar2 = *pbVar3;
  uVar4 = (undefined7)(param_2 >> 8);
  if (bVar2 != 0x74) {
    uVar8 = (ulonglong)(bVar2 - 0x30);
    if (bVar2 - 0x30 < 0x40) {
      if ((0x4040000040400001U >> (uVar8 & 0x3f) & 1) != 0) {
        param_2 = 0;
        goto LAB_14000586d;
      }
      if ((0x21000000002U >> (uVar8 & 0x3f) & 1) != 0) goto LAB_14000586b;
      if ((0x8000000080000000U >> (uVar8 & 0x3f) & 1) != 0) {
        bVar2 = (byte)(pbVar3[1] + 0xba) >> 3;
        bVar5 = (pbVar3[1] + 0xba) * ' ' | bVar2;
        if ((bVar5 < 6) && ((0x33U >> (bVar5 & 0x1f) & 1) != 0)) {
          param_2 = CONCAT71(uVar4,0x22 >> bVar2);
        }
        goto LAB_14000586d;
      }
    }
    if (bVar2 != 0x79) goto LAB_14000586d;
  }
LAB_14000586b:
  param_2 = CONCAT71(uVar4,1);
LAB_14000586d:
  return param_2 & 0xffffffffffffff01;
}



// FUNCTION 143ca04e7 FUN_143ca04e7 body=49 status=ok
// SIG undefined FUN_143ca04e7(void)

void FUN_143ca04e7(void)

{
  FUN_144760e21(DAT_14cb71688,DAT_14cb71690);
  if (DAT_14cb71688 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143ca0518 FUN_143ca0518 body=49 status=ok
// SIG undefined FUN_143ca0518(void)

void FUN_143ca0518(void)

{
  FUN_144760e21(DAT_14cb716a0,DAT_14cb716a8);
  if (DAT_14cb716a0 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143ca0549 FUN_143ca0549 body=49 status=ok
// SIG undefined FUN_143ca0549(void)

void FUN_143ca0549(void)

{
  FUN_144760e21(DAT_14cb71658,DAT_14cb71660);
  if (DAT_14cb71658 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143ca057a FUN_143ca057a body=49 status=ok
// SIG undefined FUN_143ca057a(void)

void FUN_143ca057a(void)

{
  FUN_144760e21(DAT_14cb71670,DAT_14cb71678);
  if (DAT_14cb71670 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143ca05ac FUN_143ca05ac body=797 status=ok
// SIG undefined FUN_143ca05ac(void)

void FUN_143ca05ac(longlong param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  int iVar8;
  bool bVar9;
  undefined1 auStack_148 [32];
  undefined8 local_128;
  undefined8 uStack_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 local_94;
  longlong local_88;
  longlong *local_78;
  longlong local_68 [5];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_148;
  lVar4 = *(longlong *)(param_1 + 0x390);
  if ((((lVar4 == 0) || (lVar3 = FUN_14113c964(), lVar3 == 0)) ||
      (*(int *)(lVar4 + 0x38) < *(int *)(lVar3 + 0x38))) ||
     ((*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
       lVar3 + 0x30 || (*(longlong *)(param_1 + 0x390) == 0)))) {
    lVar4 = FUN_14113c964();
    if ((lVar4 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar4);
    }
    *(longlong *)(param_1 + 0x390) = lVar4;
  }
  lVar3 = FUN_1447210f0(param_1);
  local_a8 = 0;
  uStack_a0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_98 = 0x100;
  uVar7 = 0;
  local_88 = 0;
  local_78 = (longlong *)0x0;
  uStack_b0 = *(undefined8 *)(param_1 + 0x1b0);
  local_94 = 0x48;
  lVar4 = *(longlong *)(param_1 + 0x390);
  local_b8 = param_1;
  if (lVar4 != 0) {
    lVar5 = FUN_14113c964();
    if (((lVar5 == 0) || (*(int *)(lVar4 + 0x38) < *(int *)(lVar5 + 0x38))) ||
       (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) !=
        lVar5 + 0x30)) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(undefined8 *)(param_1 + 0x390);
    }
  }
  local_128 = 0;
  uStack_120 = 0;
  local_118 = 0;
  uStack_114 = 0;
  uStack_110 = 0;
  uStack_10c = 0x3ff00000;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e4 = 0x3ff00000;
  uStack_e0 = 0;
  uStack_dc = 0x3ff00000;
  local_d8 = 0x3ff0000000000000;
  uStack_d0 = 0;
  lVar5 = FUN_141037e38(lVar3,uVar7,&local_128,&local_c8);
  lVar4 = *(longlong *)(param_1 + 0x10);
  if ((lVar4 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar4);
  }
  *(longlong *)(lVar5 + 0x390) = lVar4;
  if (lVar5 == 0) {
    *(undefined4 *)(param_1 + 0x3b8) = 0;
    iVar2 = 0;
  }
  else {
    uVar1 = *(uint *)(lVar5 + 0xc);
    *(uint *)(param_1 + 0x3b8) = uVar1;
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
      iVar8 = DAT_14c964868 + 1;
      bVar9 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar2;
      if (bVar9) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar8);
      }
      LOCK();
      iVar2 = *(int *)(lVar4 + 0x10);
      bVar9 = iVar2 == 0;
      if (bVar9) {
        *(int *)(lVar4 + 0x10) = iVar8;
        iVar2 = 0;
      }
      UNLOCK();
      if (bVar9) {
        iVar2 = iVar8;
      }
    }
  }
  *(int *)(param_1 + 0x3bc) = iVar2;
  if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x178) != 0)) {
    lVar4 = FUN_140cbc144();
    plVar6 = *(longlong **)(lVar3 + 0x178);
    if (((plVar6 != (longlong *)0x0) &&
        (((lVar4 != 0 && (lVar3 = plVar6[2], lVar3 != 0)) &&
         (*(int *)(lVar4 + 0x38) <= *(int *)(lVar3 + 0x38))))) &&
       (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
        lVar4 + 0x30)) {
      if (*(char *)(param_1 + 0x178) == '\x03') {
        (**(code **)(*plVar6 + 0x728))(plVar6,lVar5);
      }
      FUN_1487c5438(param_1);
    }
  }
  if (local_88 != 0) {
    plVar6 = local_78;
    if (local_78 == (longlong *)0x0) {
      plVar6 = local_68;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if ((local_40 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143ca08ca FUN_143ca08ca body=695 status=ok
// SIG undefined FUN_143ca08ca(void)

void FUN_143ca08ca(longlong param_1,code *param_2)

{
  undefined2 uVar1;
  uint uVar2;
  void *pvVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined2 *local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  undefined8 *local_90;
  undefined1 *local_88;
  code *local_80;
  void *local_70;
  int local_68;
  undefined8 local_60;
  undefined2 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (((((*(int *)(param_1 + 0x3bc) == 0) || (uVar2 = *(uint *)(param_1 + 0x3b8), (int)uVar2 < 0))
       || (DAT_14c9647dc <= (int)uVar2)) ||
      ((plVar6 = (longlong *)
                 ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
       plVar6 == (longlong *)0x0 || ((int)plVar6[2] != *(int *)(param_1 + 0x3bc))))) ||
     (((*(uint *)(plVar6 + 1) & 0x10200000) != 0 || (lVar7 = *plVar6, lVar7 == 0)))) {
    *(code **)(param_1 + 0x3c8) = param_2;
    *(undefined2 *)(param_1 + 0x3d0) = 0xffff;
    *(undefined4 *)(param_1 + 0x3d2) = (undefined4)local_60;
    *(undefined2 *)(param_1 + 0x3d6) = local_60._4_2_;
    *(undefined **)(param_1 + 0x3d8) = &DAT_14cb245d0;
  }
  else {
    uVar1 = *(undefined2 *)(lVar7 + 0x420);
    *(code **)(param_1 + 0x3c8) = param_2;
    *(undefined2 *)(param_1 + 0x3d0) = uVar1;
    *(undefined **)(param_1 + 0x3d8) = &DAT_14cb245d0;
    local_70 = (void *)0x0;
    local_68 = *(int *)(lVar7 + 0x418);
    lVar5 = (longlong)local_68;
    pvVar3 = *(void **)(lVar7 + 0x410);
    if (lVar5 != 0) {
      FUN_1486e150e(&local_70,local_68,0);
      memcpy(local_70,pvVar3,lVar5 << 3);
      pvVar3 = local_70;
      lVar7 = (longlong)local_68;
      if (lVar7 != 0) {
        lVar5 = 0;
        do {
          if ((*(longlong *)((longlong)pvVar3 + lVar5) != 0) &&
             (lVar4 = FUN_1401b2ade(), lVar4 != 0)) {
            if (DAT_14cb61cd0 == 0) {
              local_60 = FUN_141030f22;
              local_80 = FUN_14081d0ea;
              local_88 = &LAB_1463b31ae;
              local_98 = &LAB_1486dca4f;
              local_a0 = &LAB_1464f50a6;
              local_a8 = &DAT_149e063b2;
              local_b0 = 0;
              local_b8 = 0x10000004;
              local_c0 = 8;
              local_c8 = 0xd70;
              local_90 = &local_60;
              FUN_14081cfa3(L"/Script/GbxGame",L"GbxPlayerController",&DAT_14cb61cd0,FUN_1464f5084);
            }
            if ((*(int *)(DAT_14cb61cd0 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
                 (longlong)*(int *)(DAT_14cb61cd0 + 0x38) * 8) == DAT_14cb61cd0 + 0x30)) {
              local_58 = 0xffff;
              local_50 = 0;
              local_60 = param_2;
              FUN_1487c4e72(lVar4,&local_60);
            }
          }
          lVar5 = lVar5 + 8;
        } while (lVar7 * 8 != lVar5);
      }
      if (local_70 != (void *)0x0) {
        FUN_1400020a8(local_70);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143ca0b94 FUN_143ca0b94 body=114 status=ok
// SIG undefined FUN_143ca0b94(void)

void FUN_143ca0b94(longlong param_1)

{
  longlong *plVar1;
  
  *(byte *)(param_1 + 100) = *(byte *)(param_1 + 100) | 0x40;
  plVar1 = *(longlong **)(param_1 + 0x1c8);
  if (((plVar1 != (longlong *)0x0) && (plVar1[0x24] != 0)) &&
     (*(byte *)((longlong)plVar1 + 0x1fb) < *(byte *)(plVar1[0x24] + 0x1fb))) {
    (**(code **)(*plVar1 + 0x588))();
  }
  if ((*(char *)(param_1 + 0x5a0) == '\x01') &&
     (plVar1 = *(longlong **)(param_1 + 0x1c8), plVar1 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000143ca0c03. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x588))(plVar1,*(undefined1 *)(param_1 + 0x5a1));
    return;
  }
  return;
}



// FUNCTION 143ca0c48 FUN_143ca0c48 body=336 status=ok
// SIG undefined FUN_143ca0c48(void)

void FUN_143ca0c48(longlong param_1,undefined8 param_2,char param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(longlong *)(param_1 + 0xa90) == 0) || (*(char *)(param_1 + 0x6d0) != '\0'))
  goto LAB_143ca0c8e;
  lVar5 = 0x748;
  if (param_3 == '\0') {
    lVar5 = 0x6f8;
  }
  if (*(int *)(param_1 + 0x20 + lVar5) != 1) goto LAB_143ca0c8e;
  uVar1 = FUN_1487cafbe(param_2);
  lVar5 = *(longlong *)(param_1 + 0x18 + lVar5);
  if (*(longlong *)(lVar5 + 0x2c8) == 0) {
    uVar2 = FUN_14010363a();
    uVar2 = FUN_14477b664(uVar2);
    *(undefined8 *)(lVar5 + 0x2c8) = uVar2;
  }
  lVar3 = FUN_14010363a();
  uVar2 = FUN_14010363a();
  FUN_1402d1bfa(&local_30,uVar2,uVar1);
  if (*(longlong *)(lVar5 + 0x2c0) != local_30) {
    *(undefined8 *)(lVar5 + 0x2d0) = 0;
  }
  *(longlong *)(lVar5 + 0x2c0) = local_30;
  lVar4 = FUN_14010363a();
  if (lVar3 == 0) {
LAB_143ca0d44:
    lVar4 = lVar3;
  }
  else if (lVar4 == 0) {
    lVar4 = 0;
  }
  else if ((*(int *)(lVar4 + 0x38) <= *(int *)(lVar3 + 0x38)) &&
          (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
           lVar4 + 0x30)) goto LAB_143ca0d44;
  if (*(longlong *)(lVar5 + 0x2c8) != lVar4) {
    *(undefined8 *)(lVar5 + 0x2d0) = 0;
  }
  uVar2 = FUN_14477b664(lVar4);
  lVar3 = FUN_14477b664(uVar2);
  *(longlong *)(lVar5 + 0x2c8) = lVar3;
  if ((lVar3 != 0) && (*(longlong *)(lVar5 + 0x2c0) != 0)) {
    *(undefined8 *)(lVar5 + 0x2d0) = uVar1;
  }
LAB_143ca0c8e:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ca0f18 FUN_143ca0f18 body=159 status=ok
// SIG undefined FUN_143ca0f18(void)

void FUN_143ca0f18(longlong param_1,longlong param_2)

{
  undefined1 auStack_78 [40];
  undefined1 local_50 [8];
  undefined1 local_48 [24];
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((*(char *)(param_1 + -0x2f8) == '\x03') && (*(char *)(param_1 + 0x7bd) == '\x02')) {
    FUN_1403fa066(param_2 + 0x20,local_48,0);
    FUN_1447325ac(local_48,local_50,1);
    FUN_140bfca4e(param_1 + 0x7b0,&DAT_14cb246b0,local_50,0);
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ca0fcc FUN_143ca0fcc body=7 status=ok
// SIG undefined FUN_143ca0fcc(void)

undefined1 FUN_143ca0fcc(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x6f1);
}



// FUNCTION 143ca0fe4 FUN_143ca0fe4 body=83 status=ok
// SIG undefined FUN_143ca0fe4(void)

void FUN_143ca0fe4(int *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  if ((*param_1 != -1) && (plVar1 = *(longlong **)(param_1 + 4), plVar1 != (longlong *)0x0)) {
    lVar2 = FUN_1400796d0(plVar1[2],*(undefined8 *)(param_1 + 2),1);
    if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000143ca102c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x248))(plVar1,lVar2,param_1,*(code **)(*plVar1 + 0x248));
      return;
    }
  }
  return;
}



// FUNCTION 143ca1038 FUN_143ca1038 body=100 status=ok
// SIG undefined FUN_143ca1038(void)

void FUN_143ca1038(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined8 *param_4)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  longlong local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_4 = param_2;
  local_28 = *param_3;
  uStack_24 = param_3[1];
  uStack_20 = param_3[2];
  uStack_1c = param_3[3];
  local_18 = *(longlong *)(param_3 + 4);
  if ((local_18 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  FUN_143ca0fe4(&local_28);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ca10a8 FUN_143ca10a8 body=1322 status=ok
// SIG undefined FUN_143ca10a8(void)

void FUN_143ca10a8(longlong param_1)

{
  int *piVar1;
  ulonglong uVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  undefined8 ****ppppuVar10;
  int iVar11;
  longlong *plVar12;
  longlong *plVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  uint *puVar17;
  int iVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  undefined1 auStack_f8 [36];
  uint local_d4;
  uint *local_d0;
  ulonglong local_c8;
  longlong local_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  char local_a0;
  undefined7 uStack_9f;
  longlong *local_90;
  undefined4 local_78 [2];
  undefined8 ***local_70 [3];
  ushort local_58;
  byte local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_c0 = FUN_145a30f1c(param_1 + 0xaa0);
  if (local_c0 == 0) goto LAB_143ca12c7;
  local_b8 = 0;
  uStack_b0 = 0;
  lVar16 = *(longlong *)(param_1 + 0xae4);
  iVar11 = (uint)(lVar16 != 0) + (*(int *)(param_1 + 0xaf8) - *(int *)(param_1 + 0xb24));
  if (iVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar11);
  }
  if (iVar11 != 0) {
    FUN_146544ebe(&local_b8);
    lVar16 = *(longlong *)(param_1 + 0xae4);
  }
  if (lVar16 != 0) {
    FUN_140cc68fa(param_1);
    lVar16 = *(longlong *)(param_1 + 0x6a8);
    plVar13 = *(longlong **)(param_1 + 0x6b0);
    if (plVar13 == (longlong *)0x0) {
      if (((((*(int *)(lVar16 + 100) == 0) || (uVar5 = *(uint *)(lVar16 + 0x60), (int)uVar5 < 0)) ||
           (DAT_14c9647dc <= (int)uVar5)) ||
          ((plVar13 = (longlong *)
                      ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8)),
           plVar13 == (longlong *)0x0 || ((int)plVar13[2] != *(int *)(lVar16 + 100))))) ||
         ((*(uint *)(plVar13 + 1) & 0x10200000) != 0)) goto LAB_143ca120e;
      lVar7 = *plVar13;
    }
    else {
      LOCK();
      *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
      UNLOCK();
      if (*(int *)(lVar16 + 100) == 0) {
LAB_143ca15c4:
        lVar7 = 0;
      }
      else {
        uVar5 = *(uint *)(lVar16 + 0x60);
        lVar7 = 0;
        if ((-1 < (int)uVar5) && ((int)uVar5 < DAT_14c9647dc)) {
          plVar12 = (longlong *)
                    ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8));
          if ((plVar12 == (longlong *)0x0) ||
             (((int)plVar12[2] != *(int *)(lVar16 + 100) ||
              ((*(uint *)(plVar12 + 1) & 0x10200000) != 0)))) goto LAB_143ca15c4;
          lVar7 = *plVar12;
        }
      }
      LOCK();
      plVar12 = plVar13 + 1;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)*plVar12 == 0) {
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
    uVar19 = uStack_b0;
    if (lVar7 != 0) {
      lVar16 = (longlong)(int)uStack_b0;
      uVar5 = (int)uStack_b0 + 1;
      uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar5);
      if (uStack_b0._4_4_ < uVar5) {
        FUN_1487cbd28(&local_b8,uVar19 & 0xffffffff);
      }
      FUN_14655c866(lVar16 * 0x48 + local_b8,(longlong *)(param_1 + 0xae4),lVar7);
    }
  }
LAB_143ca120e:
  uVar5 = *(uint *)(param_1 + 0xb18);
  if (uVar5 == 0) {
    uVar20 = 1;
    uVar19 = 0;
    iVar11 = 0;
    uVar4 = 0;
  }
  else {
    puVar6 = *(uint **)(param_1 + 0xb10);
    if (*(uint **)(param_1 + 0xb10) == (uint *)0x0) {
      puVar6 = (uint *)(param_1 + 0xb00);
    }
    uVar4 = *puVar6;
    if (uVar4 == 0) {
      iVar11 = uVar5 + 0x1e;
      if (-1 < (int)(uVar5 - 1)) {
        iVar11 = uVar5 - 1;
      }
      uVar19 = 0;
      uVar20 = (ulonglong)(uint)(iVar11 >> 5);
      if (iVar11 >> 5 < 1) {
        uVar20 = uVar19;
      }
      iVar11 = 0;
      do {
        if (uVar20 == uVar19) goto LAB_143ca12a2;
        iVar11 = iVar11 + 0x20;
        uVar4 = puVar6[uVar19 + 1];
        uVar19 = uVar19 + 1;
      } while (uVar4 == 0);
    }
    else {
      uVar19 = 0;
      iVar11 = 0;
    }
    uVar20 = (ulonglong)(-uVar4 & uVar4);
    uVar2 = uVar20 * 2 + 1;
    lVar16 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    uVar4 = (iVar11 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
    if ((int)uVar5 <= (int)uVar4) {
      uVar4 = uVar5;
    }
  }
  if (uVar4 != uVar5) {
    uVar14 = 0xffffffff;
    local_d0 = (uint *)(param_1 + 0xb00);
    local_c8 = (ulonglong)uVar5;
    do {
      lVar16 = *(longlong *)(param_1 + 0xaf0);
      local_a0 = '\0';
      local_78[0] = 0;
      local_d4 = uVar14;
      FUN_1456bb102(&local_a0,local_c0);
      FUN_1447c3578(lVar16 + (longlong)(int)uVar4 * 0x48 + 8,local_70,&local_a0);
      lVar7 = FUN_14030a32e(local_70);
      pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_50 * 0x120));
      if (pcVar3 != (code *)0x0) {
        ppppuVar10 = local_70;
        if (0x18 < local_58) {
          ppppuVar10 = (undefined8 ****)local_70[0];
        }
        (*pcVar3)(ppppuVar10);
      }
      if (0x18 < local_58) {
        FUN_1400020a8(local_70[0]);
      }
      FUN_1448173f8(local_78);
      if ((local_a0 == '\x03') && (local_90 != (longlong *)0x0)) {
        LOCK();
        piVar1 = (int *)((longlong)local_90 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_90 + 0x10))();
        }
      }
      uVar2 = uStack_b0;
      if (lVar7 == 0) {
        if (*(longlong *)(param_1 + 0xa8) == 0) {
          local_70[0] = *(undefined8 ****)(param_1 + 0x18);
        }
        else {
          local_70[0] = *(undefined8 ****)(*(longlong *)(param_1 + 0xa8) + 0x18);
        }
        FUN_1400021e4(local_70,&local_a0);
        puVar6 = local_d0;
        uVar14 = local_d4;
        if (CONCAT71(uStack_9f,local_a0) != 0) {
          FUN_1400020a8();
        }
      }
      else {
        lVar15 = (longlong)(int)uStack_b0;
        uVar5 = (int)uStack_b0 + 1;
        uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar5);
        if (uStack_b0._4_4_ < uVar5) {
          FUN_1487cbd28(&local_b8,uVar2 & 0xffffffff);
        }
        FUN_14655c866(lVar15 * 0x48 + local_b8,lVar16 + (longlong)(int)uVar4 * 0x48,lVar7);
        puVar6 = local_d0;
        uVar14 = local_d4;
      }
      uVar14 = uVar14 & ~(uint)uVar20;
      puVar17 = *(uint **)(param_1 + 0xb10);
      if (*(uint **)(param_1 + 0xb10) == (uint *)0x0) {
        puVar17 = puVar6;
      }
      uVar5 = *(uint *)(param_1 + 0xb18);
      iVar18 = (int)uVar19;
      lVar16 = (longlong)iVar18;
      uVar4 = puVar17[lVar16] & uVar14;
      if (uVar4 == 0) {
        iVar8 = uVar5 + 0x1e;
        if (-1 < (int)(uVar5 - 1)) {
          iVar8 = uVar5 - 1;
        }
        iVar8 = iVar8 >> 5;
        iVar11 = iVar11 + 0x20;
        iVar9 = iVar8;
        if (iVar8 < iVar18) {
          iVar9 = iVar18;
        }
        if (iVar18 < iVar8) {
          lVar7 = 0;
          do {
            uVar4 = puVar17[lVar16 + lVar7 + 1];
            if (uVar4 != 0) {
              uVar19 = (ulonglong)(iVar18 + (int)lVar7 + 1);
              uVar14 = 0xffffffff;
              goto LAB_143ca14a2;
            }
            iVar11 = iVar11 + 0x20;
            lVar7 = lVar7 + 1;
          } while (iVar9 - lVar16 != lVar7);
          uVar14 = 0xffffffff;
          iVar18 = iVar9;
        }
        uVar19 = (ulonglong)(iVar18 + 1);
        uVar4 = uVar5;
      }
      else {
LAB_143ca14a2:
        uVar20 = (ulonglong)(-uVar4 & uVar4);
        uVar2 = uVar20 * 2 + 1;
        lVar16 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar16 == 0; lVar16 = lVar16 + -1) {
          }
        }
        uVar4 = (iVar11 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
        if ((int)uVar5 <= (int)uVar4) {
          uVar4 = uVar5;
        }
      }
    } while (uVar4 != (uint)local_c8);
  }
LAB_143ca12a2:
  if (0 < (int)uStack_b0) {
    FUN_145dbe4f0(local_c0,&local_b8);
  }
  FUN_140e457df(local_b8,(int)uStack_b0);
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
LAB_143ca12c7:
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143ca15d4 FUN_143ca15d4 body=137 status=ok
// SIG undefined FUN_143ca15d4(void)

void FUN_143ca15d4(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  undefined1 auStack_58 [44];
  undefined1 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = *(int *)(param_1 + 0x240);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x238);
    lVar4 = 0;
    do {
      cVar3 = (**(code **)(**(longlong **)(lVar2 + 0x30 + lVar4) + 8))();
      if (cVar3 != '\0') {
        local_2c = 0;
        FUN_14146fdb6(param_1 + -0x690);
        break;
      }
      lVar4 = lVar4 + 0x40;
    } while ((longlong)iVar1 * 0x40 != lVar4);
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143ca165e FUN_143ca165e body=1404 status=ok
// SIG undefined FUN_143ca165e(void)

void FUN_143ca165e(longlong param_1,undefined8 param_2,longlong param_3)

{
  int *piVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined8 uVar5;
  code *pcVar6;
  uint uVar7;
  uint *puVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  undefined8 ****ppppuVar12;
  int iVar13;
  longlong *plVar14;
  longlong *plVar15;
  uint uVar16;
  longlong lVar17;
  uint *puVar18;
  int iVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  undefined1 auStack_f8 [44];
  uint local_cc;
  longlong *local_c8;
  uint *local_c0;
  longlong local_b8;
  ulonglong local_b0;
  undefined8 local_a8;
  char local_a0;
  undefined7 uStack_9f;
  longlong *local_90;
  undefined4 local_78 [2];
  undefined8 ***local_70 [3];
  ushort local_58;
  byte local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar17 = *(longlong *)(param_1 + 0xac8);
  local_a8 = param_2;
  if ((lVar17 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar17);
  }
  *(longlong *)(param_3 + 8) = lVar17;
  uVar3 = *(undefined4 *)(param_1 + 0xad4);
  uVar5 = *(undefined8 *)(param_1 + 0xad8);
  uVar4 = *(uint *)(param_1 + 0xae0);
  *(undefined4 *)(param_3 + 0x10) = 0;
  *(undefined4 *)(param_3 + 0x14) = uVar3;
  *(undefined8 *)(param_3 + 0x18) = 0;
  *(undefined2 *)(param_3 + 0x20) = 0x100;
  *(undefined8 *)(param_3 + 0x24) = uVar5;
  *(uint *)(param_3 + 0x2c) = uVar4 & 1;
  *(undefined1 *)(param_3 + 0x30) = 0;
  *(uint *)(param_3 + 0x34) = uVar4 >> 2 & 1 | 2;
  lVar17 = *(longlong *)(param_1 + 0xae4);
  iVar13 = (uint)(lVar17 != 0) + (*(int *)(param_1 + 0xaf8) - *(int *)(param_1 + 0xb24));
  if (iVar13 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar13);
  }
  local_c8 = (longlong *)(param_3 + 0x50);
  local_b8 = param_3;
  if (*(int *)(param_3 + 0x5c) < iVar13) {
    FUN_146544ebe(local_c8);
    lVar17 = *(longlong *)(param_1 + 0xae4);
  }
  if (lVar17 == 0) goto LAB_143ca1822;
  FUN_140cc68fa(param_1);
  lVar17 = *(longlong *)(param_1 + 0x6a8);
  plVar15 = *(longlong **)(param_1 + 0x6b0);
  if (plVar15 == (longlong *)0x0) {
    if (((((*(int *)(lVar17 + 100) == 0) || (uVar4 = *(uint *)(lVar17 + 0x60), (int)uVar4 < 0)) ||
         (DAT_14c9647dc <= (int)uVar4)) ||
        ((plVar15 = (longlong *)
                    ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8)),
         plVar15 == (longlong *)0x0 || ((int)plVar15[2] != *(int *)(lVar17 + 100))))) ||
       ((*(uint *)(plVar15 + 1) & 0x10200000) != 0)) goto LAB_143ca1822;
    lVar9 = *plVar15;
  }
  else {
    LOCK();
    *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
    UNLOCK();
    if (*(int *)(lVar17 + 100) == 0) {
LAB_143ca1bcc:
      lVar9 = 0;
    }
    else {
      uVar4 = *(uint *)(lVar17 + 0x60);
      lVar9 = 0;
      if ((-1 < (int)uVar4) && ((int)uVar4 < DAT_14c9647dc)) {
        plVar14 = (longlong *)
                  ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8));
        if ((plVar14 == (longlong *)0x0) ||
           (((int)plVar14[2] != *(int *)(lVar17 + 100) ||
            ((*(uint *)(plVar14 + 1) & 0x10200000) != 0)))) goto LAB_143ca1bcc;
        lVar9 = *plVar14;
      }
    }
    LOCK();
    plVar14 = plVar15 + 1;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)*plVar14 == 0) {
      (**(code **)*plVar15)(plVar15);
      LOCK();
      piVar1 = (int *)((longlong)plVar15 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar15 + 0x10))(plVar15);
      }
    }
  }
  if (lVar9 != 0) {
    iVar13 = *(int *)(local_b8 + 0x58);
    *(uint *)(local_b8 + 0x58) = iVar13 + 1U;
    if (*(uint *)(local_b8 + 0x5c) < iVar13 + 1U) {
      FUN_1487cbd28(local_c8,iVar13);
    }
    FUN_14655c866((longlong)iVar13 * 0x48 + *local_c8,(longlong *)(param_1 + 0xae4),lVar9);
  }
LAB_143ca1822:
  uVar4 = *(uint *)(param_1 + 0xb18);
  if (uVar4 == 0) {
    uVar21 = 1;
    uVar20 = 0;
    iVar13 = 0;
    uVar7 = 0;
  }
  else {
    puVar8 = *(uint **)(param_1 + 0xb10);
    if (*(uint **)(param_1 + 0xb10) == (uint *)0x0) {
      puVar8 = (uint *)(param_1 + 0xb00);
    }
    uVar7 = *puVar8;
    if (uVar7 == 0) {
      iVar13 = uVar4 + 0x1e;
      if (-1 < (int)(uVar4 - 1)) {
        iVar13 = uVar4 - 1;
      }
      uVar20 = 0;
      uVar21 = (ulonglong)(uint)(iVar13 >> 5);
      if (iVar13 >> 5 < 1) {
        uVar21 = uVar20;
      }
      iVar13 = 0;
      do {
        if (uVar21 == uVar20) goto LAB_143ca18ba;
        iVar13 = iVar13 + 0x20;
        uVar7 = puVar8[uVar20 + 1];
        uVar20 = uVar20 + 1;
      } while (uVar7 == 0);
    }
    else {
      uVar20 = 0;
      iVar13 = 0;
    }
    uVar21 = (ulonglong)(-uVar7 & uVar7);
    uVar2 = uVar21 * 2 + 1;
    lVar17 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar17 == 0; lVar17 = lVar17 + -1) {
      }
    }
    uVar7 = (iVar13 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
    if ((int)uVar4 <= (int)uVar7) {
      uVar7 = uVar4;
    }
  }
  if (uVar7 != uVar4) {
    uVar16 = 0xffffffff;
    local_c0 = (uint *)(param_1 + 0xb00);
    local_b0 = (ulonglong)uVar4;
    do {
      lVar17 = *(longlong *)(param_1 + 0xaf0);
      local_a0 = '\0';
      local_78[0] = 0;
      local_cc = uVar16;
      FUN_1456bb102(&local_a0,local_a8);
      FUN_1447c3578(lVar17 + (longlong)(int)uVar7 * 0x48 + 8,local_70,&local_a0);
      lVar9 = FUN_14030a32e(local_70);
      pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_50 * 0x120));
      if (pcVar6 != (code *)0x0) {
        ppppuVar12 = local_70;
        if (0x18 < local_58) {
          ppppuVar12 = (undefined8 ****)local_70[0];
        }
        (*pcVar6)(ppppuVar12);
      }
      if (0x18 < local_58) {
        FUN_1400020a8(local_70[0]);
      }
      FUN_1448173f8(local_78);
      if ((local_a0 == '\x03') && (local_90 != (longlong *)0x0)) {
        LOCK();
        piVar1 = (int *)((longlong)local_90 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_90 + 0x10))();
        }
      }
      if (lVar9 == 0) {
        if (*(longlong *)(param_1 + 0xa8) == 0) {
          local_70[0] = *(undefined8 ****)(param_1 + 0x18);
        }
        else {
          local_70[0] = *(undefined8 ****)(*(longlong *)(param_1 + 0xa8) + 0x18);
        }
        FUN_1400021e4(local_70,&local_a0);
        puVar8 = local_c0;
        uVar16 = local_cc;
        if (CONCAT71(uStack_9f,local_a0) != 0) {
          FUN_1400020a8();
        }
      }
      else {
        iVar19 = *(int *)(local_b8 + 0x58);
        *(uint *)(local_b8 + 0x58) = iVar19 + 1U;
        if (*(uint *)(local_b8 + 0x5c) < iVar19 + 1U) {
          FUN_1487cbd28(local_c8,iVar19);
        }
        FUN_14655c866((longlong)iVar19 * 0x48 + *local_c8,lVar17 + (longlong)(int)uVar7 * 0x48,lVar9
                     );
        puVar8 = local_c0;
        uVar16 = local_cc;
      }
      uVar16 = uVar16 & ~(uint)uVar21;
      puVar18 = *(uint **)(param_1 + 0xb10);
      if (*(uint **)(param_1 + 0xb10) == (uint *)0x0) {
        puVar18 = puVar8;
      }
      uVar4 = *(uint *)(param_1 + 0xb18);
      iVar19 = (int)uVar20;
      lVar17 = (longlong)iVar19;
      uVar7 = puVar18[lVar17] & uVar16;
      if (uVar7 == 0) {
        iVar10 = uVar4 + 0x1e;
        if (-1 < (int)(uVar4 - 1)) {
          iVar10 = uVar4 - 1;
        }
        iVar10 = iVar10 >> 5;
        iVar13 = iVar13 + 0x20;
        iVar11 = iVar10;
        if (iVar10 < iVar19) {
          iVar11 = iVar19;
        }
        if (iVar19 < iVar10) {
          lVar9 = 0;
          do {
            uVar7 = puVar18[lVar17 + lVar9 + 1];
            if (uVar7 != 0) {
              uVar20 = (ulonglong)(iVar19 + (int)lVar9 + 1);
              uVar16 = 0xffffffff;
              goto LAB_143ca1a9a;
            }
            iVar13 = iVar13 + 0x20;
            lVar9 = lVar9 + 1;
          } while (iVar11 - lVar17 != lVar9);
          uVar16 = 0xffffffff;
          iVar19 = iVar11;
        }
        uVar20 = (ulonglong)(iVar19 + 1);
        uVar7 = uVar4;
      }
      else {
LAB_143ca1a9a:
        uVar21 = (ulonglong)(-uVar7 & uVar7);
        uVar2 = uVar21 * 2 + 1;
        lVar17 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar17 == 0; lVar17 = lVar17 + -1) {
          }
        }
        uVar7 = (iVar13 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
        if ((int)uVar4 <= (int)uVar7) {
          uVar7 = uVar4;
        }
      }
    } while (uVar7 != (uint)local_b0);
  }
LAB_143ca18ba:
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143ca1bdc FUN_143ca1bdc body=223 status=ok
// SIG undefined FUN_143ca1bdc(void)

void FUN_143ca1bdc(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  int7 iVar10;
  bool bVar11;
  
  plVar3 = (longlong *)(param_1 + 0xb70);
  plVar4 = *(longlong **)(param_1 + 0xb78);
  if (plVar4 == (longlong *)0x0) {
    *plVar3 = 0;
    *(undefined8 *)(param_1 + 0xb78) = 0;
  }
  else {
    iVar8 = (int)plVar4[1];
    do {
      if (iVar8 == 0) goto LAB_143ca1c71;
      LOCK();
      iVar7 = (int)plVar4[1];
      bVar11 = iVar8 == iVar7;
      if (bVar11) {
        *(int *)(plVar4 + 1) = iVar8 + 1;
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      UNLOCK();
    } while (!bVar11);
    lVar5 = *plVar3;
    if (lVar5 != 0) {
      FUN_140457ffc(lVar5 + 0x18,param_1);
      lVar6 = *(longlong *)(lVar5 + 0x30);
      lVar9 = FUN_140ed0e8c();
      lVar6 = *(longlong *)(lVar6 + 0x10);
      iVar8 = *(int *)(lVar9 + 0x38);
      iVar10 = (int7)(int3)((uint)iVar8 >> 8);
      if ((*(int *)(lVar6 + 0x38) < iVar8) ||
         (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)iVar8 * 8) != lVar9 + 0x30)) {
        FUN_14103b6f6(lVar5,CONCAT71(iVar10,1));
      }
      else {
        FUN_1410c9a0e(lVar5,CONCAT71(iVar10,1));
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
LAB_143ca1c71:
    plVar4 = *(longlong **)(param_1 + 0xb78);
    *plVar3 = 0;
    *(undefined8 *)(param_1 + 0xb78) = 0;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143ca1c98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar4 + 0x10))();
        return;
      }
    }
  }
  return;
}



// FUNCTION 143ca1cbb FUN_143ca1cbb body=91 status=ok
// SIG undefined FUN_143ca1cbb(void)

void FUN_143ca1cbb(void)

{
  if (DAT_14cb717e0 != 0) {
    if (DAT_14cb717d8 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14cb717d8)(DAT_14cb717d8,0);
    FUN_1446efa72(&DAT_14cb717d8,0,0,0x10);
    DAT_14cb717e0 = 0;
  }
  if (DAT_14cb717d8 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143ca1d16 FUN_143ca1d16 body=91 status=ok
// SIG undefined FUN_143ca1d16(void)

void FUN_143ca1d16(void)

{
  if (DAT_14cb71820 != 0) {
    if (DAT_14cb71818 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14cb71818)(DAT_14cb71818,0);
    FUN_1446efa72(&DAT_14cb71818,0,0,0x10);
    DAT_14cb71820 = 0;
  }
  if (DAT_14cb71818 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143ca1d76 FUN_143ca1d76 body=91 status=ok
// SIG undefined FUN_143ca1d76(void)

bool FUN_143ca1d76(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_143ca1da6;
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
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_143ca1da6:
  return lVar6 == param_2;
}



// FUNCTION 143ca1dee FUN_143ca1dee body=65 status=ok
// SIG undefined FUN_143ca1dee(void)

void FUN_143ca1dee(undefined8 *param_1,undefined8 param_2)

{
  undefined1 auStack_38 [44];
  undefined1 local_c [4];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  FUN_144a13f80(*param_1,local_c,param_2,0);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ca1e30 FUN_143ca1e30 body=29 status=ok
// SIG undefined FUN_143ca1e30(void)

undefined8 FUN_143ca1e30(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ca1fd8 FUN_143ca1fd8 body=93 status=ok
// SIG undefined FUN_143ca1fd8(void)

void FUN_143ca1fd8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9ca0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3e8ce0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143ca2036 FUN_143ca2036 body=93 status=ok
// SIG undefined FUN_143ca2036(void)

void FUN_143ca2036(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9ca0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3e8ce0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143ca2094 FUN_143ca2094 body=126 status=ok
// SIG undefined FUN_143ca2094(void)

void FUN_143ca2094(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b3e9ca0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3e8ce0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143ca2103. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143ca2120 FUN_143ca2120 body=271 status=ok
// SIG undefined FUN_143ca2120(void)

undefined8 FUN_143ca2120(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 in_stack_00000028;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_143ca2229;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_143ca2229;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_143ca2229:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143ca21cb;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_1487c1d6a(*(undefined8 *)(param_1 + 0x20),in_stack_00000028);
      uVar6 = 1;
      goto LAB_143ca21cb;
    }
  }
  uVar6 = 0;
LAB_143ca21cb:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ca2284 FUN_143ca2284 body=31 status=ok
// SIG undefined FUN_143ca2284(void)

undefined8 FUN_143ca2284(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ca22f2 FUN_143ca22f2 body=29 status=ok
// SIG undefined FUN_143ca22f2(void)

undefined8 FUN_143ca22f2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ca248e FUN_143ca248e body=93 status=ok
// SIG undefined FUN_143ca248e(void)

void FUN_143ca248e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9b40;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3e8e30;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143ca24ec FUN_143ca24ec body=93 status=ok
// SIG undefined FUN_143ca24ec(void)

void FUN_143ca24ec(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9b40;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3e8e30;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143ca254a FUN_143ca254a body=126 status=ok
// SIG undefined FUN_143ca254a(void)

void FUN_143ca254a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b3e9b40;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3e8e30;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143ca25b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143ca25d2 FUN_143ca25d2 body=278 status=ok
// SIG undefined FUN_143ca25d2(void)

undefined8 FUN_143ca25d2(longlong param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_143ca26e2;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_143ca26e2;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_143ca26e2:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143ca2695;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_143ca26ea(param_1 + 0x20,param_2);
      uVar6 = 1;
      goto LAB_143ca2695;
    }
  }
  uVar6 = 0;
LAB_143ca2695:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ca26ea FUN_143ca26ea body=209 status=ok
// SIG undefined FUN_143ca26ea(void)

void FUN_143ca26ea(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  
  lVar1 = *param_1;
  cVar2 = FUN_145d8abce(lVar1);
  if (cVar2 != '\0') {
    lVar3 = 0;
    if (*param_2 != 0) {
      lVar3 = param_2[1];
    }
    lVar3 = FUN_1487c2280(lVar3);
    if (lVar3 != 0) {
      iVar5 = *(int *)(lVar1 + 0x1bc0);
      if ((longlong)iVar5 != 0) {
        lVar4 = 0;
        do {
          if (*(longlong *)(*(longlong *)(lVar1 + 0x1bb8) + lVar4) == lVar3) {
            return;
          }
          lVar4 = lVar4 + 8;
        } while ((longlong)iVar5 * 8 - lVar4 != 0);
      }
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(lVar3);
        iVar5 = *(int *)(lVar1 + 0x1bc0);
      }
      *(uint *)(lVar1 + 0x1bc0) = iVar5 + 1U;
      if (*(uint *)(lVar1 + 0x1bc4) < iVar5 + 1U) {
        FUN_140b51998((longlong *)(lVar1 + 0x1bb8),iVar5);
      }
      *(longlong *)(*(longlong *)(lVar1 + 0x1bb8) + (longlong)iVar5 * 8) = lVar3;
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(lVar3);
      }
      FUN_145ef46cc(lVar1);
      return;
    }
  }
  return;
}



// FUNCTION 143ca27bc FUN_143ca27bc body=29 status=ok
// SIG undefined FUN_143ca27bc(void)

undefined8 FUN_143ca27bc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ca2958 FUN_143ca2958 body=93 status=ok
// SIG undefined FUN_143ca2958(void)

void FUN_143ca2958(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9b40;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3e8ea0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143ca29b6 FUN_143ca29b6 body=93 status=ok
// SIG undefined FUN_143ca29b6(void)

void FUN_143ca29b6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9b40;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3e8ea0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143ca2a14 FUN_143ca2a14 body=126 status=ok
// SIG undefined FUN_143ca2a14(void)

void FUN_143ca2a14(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b3e9b40;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3e8ea0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143ca2a83. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143ca2a9c FUN_143ca2a9c body=278 status=ok
// SIG undefined FUN_143ca2a9c(void)

undefined8 FUN_143ca2a9c(longlong param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_143ca2bac;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_143ca2bac;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_143ca2bac:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143ca2b5f;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_143ca2bb4(param_1 + 0x20,param_2);
      uVar6 = 1;
      goto LAB_143ca2b5f;
    }
  }
  uVar6 = 0;
LAB_143ca2b5f:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ca2bb4 FUN_143ca2bb4 body=359 status=ok
// SIG undefined FUN_143ca2bb4(void)

void FUN_143ca2bb4(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_e8 [32];
  undefined4 *local_c8;
  undefined4 local_b8 [2];
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined8 uStack_7c;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  undefined2 local_3c;
  undefined1 local_3a;
  undefined4 local_39;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar1 = *param_1;
  local_b8[0] = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  uStack_84 = 0;
  uStack_80 = 0;
  uStack_7c = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0xffffffff;
  local_3c = 0;
  local_3a = 1;
  local_39 = 0;
  uVar2 = FUN_1447210f0(lVar1);
  local_c8 = local_b8;
  FUN_1407acb05(uVar2,lVar1 + 0x1ab8,lVar1 + 0x1ad0,lVar1);
  lVar3 = 0;
  if (*param_2 != 0) {
    lVar3 = param_2[1];
  }
  lVar3 = FUN_1487c2280(lVar3);
  if (lVar3 != 0) {
    iVar5 = *(int *)(lVar1 + 0x1bc0);
    if ((longlong)iVar5 != 0) {
      lVar4 = 0;
      do {
        if (*(longlong *)(*(longlong *)(lVar1 + 0x1bb8) + lVar4) == lVar3) goto LAB_143ca2cf3;
        lVar4 = lVar4 + 8;
      } while ((longlong)iVar5 * 8 - lVar4 != 0);
    }
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(lVar3);
      iVar5 = *(int *)(lVar1 + 0x1bc0);
    }
    *(uint *)(lVar1 + 0x1bc0) = iVar5 + 1U;
    if (*(uint *)(lVar1 + 0x1bc4) < iVar5 + 1U) {
      FUN_140b51998((longlong *)(lVar1 + 0x1bb8),iVar5);
    }
    *(longlong *)(*(longlong *)(lVar1 + 0x1bb8) + (longlong)iVar5 * 8) = lVar3;
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(lVar3);
    }
    FUN_145ef46cc(lVar1);
  }
LAB_143ca2cf3:
  if ((local_30 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ca2d1c FUN_143ca2d1c body=29 status=ok
// SIG undefined FUN_143ca2d1c(void)

undefined8 FUN_143ca2d1c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ca2eb8 FUN_143ca2eb8 body=93 status=ok
// SIG undefined FUN_143ca2eb8(void)

void FUN_143ca2eb8(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b3e8f10;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143ca2f16 FUN_143ca2f16 body=93 status=ok
// SIG undefined FUN_143ca2f16(void)

void FUN_143ca2f16(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b3e8f10;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143ca2f74 FUN_143ca2f74 body=126 status=ok
// SIG undefined FUN_143ca2f74(void)

void FUN_143ca2f74(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3e8f10;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143ca2fe3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143ca3008 FUN_143ca3008 body=279 status=ok
// SIG undefined FUN_143ca3008(void)

undefined8 FUN_143ca3008(longlong param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  DWORD DVar4;
  DWORD DVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_143ca3119;
    if (iVar1 == 1) {
      DVar4 = FUN_140ad26c0();
      DVar5 = GetCurrentThreadId();
      if (DVar4 == DVar5) goto LAB_143ca3119;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_143ca3119:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar7 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143ca30b3;
    lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar6 != 0) &&
       ((*(int *)(lVar6 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar6 + 8) & 0x10200000) == 0)))) {
      lVar3 = *(longlong *)(param_1 + 0x20);
      *(undefined8 *)(lVar3 + 0x1838) = 0;
      uVar7 = 1;
      FUN_1458d7bec(lVar3,CONCAT71((int7)((ulonglong)lVar6 >> 8),1));
      goto LAB_143ca30b3;
    }
  }
  uVar7 = 0;
LAB_143ca30b3:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ca3120 FUN_143ca3120 body=31 status=ok
// SIG undefined FUN_143ca3120(void)

undefined8 FUN_143ca3120(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ca318e FUN_143ca318e body=31 status=ok
// SIG undefined FUN_143ca318e(void)

undefined8 FUN_143ca318e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ca3248 FUN_143ca3248 body=31 status=ok
// SIG undefined FUN_143ca3248(void)

undefined8 FUN_143ca3248(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ca3302 FUN_143ca3302 body=29 status=ok
// SIG undefined FUN_143ca3302(void)

undefined8 FUN_143ca3302(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ca349e FUN_143ca349e body=101 status=ok
// SIG undefined FUN_143ca349e(void)

void FUN_143ca349e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3e9220;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 143ca3504 FUN_143ca3504 body=101 status=ok
// SIG undefined FUN_143ca3504(void)

void FUN_143ca3504(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3e9220;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 143ca356a FUN_143ca356a body=134 status=ok
// SIG undefined FUN_143ca356a(void)

void FUN_143ca356a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3e9220;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143ca35e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143ca3650 FUN_143ca3650 body=356 status=ok
// SIG undefined FUN_143ca3650(void)

undefined8 FUN_143ca3650(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_143ca37ae;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_143ca37ae;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_143ca37ae:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) == 0) {
LAB_143ca370a:
    uVar5 = 0;
    goto LAB_143ca375e;
  }
  uVar2 = *(uint *)(param_1 + 0x18);
  uVar5 = 0;
  if ((int)uVar2 < 0) goto LAB_143ca375e;
  if (DAT_14c9647dc <= (int)uVar2) goto LAB_143ca375e;
  lVar7 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
  if (((lVar7 == 0) || (*(int *)(lVar7 + 0x10) != *(int *)(param_1 + 0x1c))) ||
     ((*(uint *)(lVar7 + 8) & 0x10200000) != 0)) goto LAB_143ca370a;
  if (*(int *)(param_1 + 0x2c) == 0) {
LAB_143ca3795:
    uVar5 = 0;
  }
  else {
    uVar2 = *(uint *)(param_1 + 0x28);
    uVar5 = 0;
    if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
      puVar6 = (undefined8 *)
               ((ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
      if ((puVar6 == (undefined8 *)0x0) ||
         ((*(int *)(puVar6 + 2) != *(int *)(param_1 + 0x2c) ||
          ((*(uint *)(puVar6 + 1) & 0x10200000) != 0)))) goto LAB_143ca3795;
      uVar5 = *puVar6;
    }
  }
  (**(code **)(**(longlong **)(param_1 + 0x20) + 0xe40))(*(longlong **)(param_1 + 0x20),uVar5);
  uVar5 = 1;
LAB_143ca375e:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ca37b6 FUN_143ca37b6 body=29 status=ok
// SIG undefined FUN_143ca37b6(void)

undefined8 FUN_143ca37b6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ca3952 FUN_143ca3952 body=101 status=ok
// SIG undefined FUN_143ca3952(void)

void FUN_143ca3952(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b3e9370;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 143ca39b8 FUN_143ca39b8 body=101 status=ok
// SIG undefined FUN_143ca39b8(void)

void FUN_143ca39b8(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b3e9370;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 143ca3a1e FUN_143ca3a1e body=134 status=ok
// SIG undefined FUN_143ca3a1e(void)

void FUN_143ca3a1e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3e9370;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143ca3a95. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143ca3ab6 FUN_143ca3ab6 body=271 status=ok
// SIG undefined FUN_143ca3ab6(void)

undefined8 FUN_143ca3ab6(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_143ca3bbf;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_143ca3bbf;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_143ca3bbf:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143ca3b73;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_140479efe(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x28));
      uVar6 = 1;
      goto LAB_143ca3b73;
    }
  }
  uVar6 = 0;
LAB_143ca3b73:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ca3bc6 FUN_143ca3bc6 body=29 status=ok
// SIG undefined FUN_143ca3bc6(void)

undefined8 FUN_143ca3bc6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ca3d62 FUN_143ca3d62 body=101 status=ok
// SIG undefined FUN_143ca3d62(void)

void FUN_143ca3d62(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a78e0f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3e9440;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 143ca3dc8 FUN_143ca3dc8 body=101 status=ok
// SIG undefined FUN_143ca3dc8(void)

void FUN_143ca3dc8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a78e0f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3e9440;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 143ca3e2e FUN_143ca3e2e body=134 status=ok
// SIG undefined FUN_143ca3e2e(void)

void FUN_143ca3e2e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a78e0f0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3e9440;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143ca3ea5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143ca3ec0 FUN_143ca3ec0 body=278 status=ok
// SIG undefined FUN_143ca3ec0(void)

undefined8 FUN_143ca3ec0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_143ca3fd0;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_143ca3fd0;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_143ca3fd0:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143ca3f83;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_143ca3fd8(param_1 + 0x20,param_3);
      uVar6 = 1;
      goto LAB_143ca3f83;
    }
  }
  uVar6 = 0;
LAB_143ca3f83:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ca3fd8 FUN_143ca3fd8 body=784 status=ok
// SIG undefined FUN_143ca3fd8(void)

void FUN_143ca3fd8(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  int iVar5;
  longlong lVar6;
  uint *puVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  int iVar13;
  uint uVar14;
  longlong *plVar15;
  longlong lVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  longlong lVar19;
  
  lVar2 = *param_1;
  if ((((((*(byte *)(lVar2 + 0x348) & 2) != 0) || (*(int *)((longlong)param_1 + 0xc) == 0)) ||
       (uVar14 = *(uint *)(param_1 + 1), (int)uVar14 < 0)) ||
      ((DAT_14c9647dc <= (int)uVar14 ||
       (plVar15 = (longlong *)
                  ((ulonglong)((uVar14 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0x10) * 8)),
       plVar15 == (longlong *)0x0)))) ||
     (((int)plVar15[2] != *(int *)((longlong)param_1 + 0xc) ||
      (((*(uint *)(plVar15 + 1) & 0x10200000) != 0 || (lVar3 = *plVar15, lVar3 == 0)))))) {
    return;
  }
  iVar1 = *(int *)(param_2 + 0x138);
  if ((longlong)iVar1 != 0) {
    lVar16 = *(longlong *)(param_2 + 0x130);
    lVar19 = 0;
    do {
      iVar13 = *(int *)(lVar16 + 0xdc + lVar19);
      if (((((iVar13 != 0) && (uVar14 = *(uint *)(lVar16 + 0xd8 + lVar19), -1 < (int)uVar14)) &&
           ((int)uVar14 < DAT_14c9647dc)) &&
          (((plVar15 = (longlong *)
                       ((ulonglong)((uVar14 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0x10) * 8)),
            plVar15 != (longlong *)0x0 && ((int)plVar15[2] == iVar13)) &&
           (((*(uint *)(plVar15 + 1) & 0x10200000) == 0 &&
            ((plVar15 = (longlong *)*plVar15, plVar15 != (longlong *)0x0 &&
             (lVar6 = (**(code **)(*plVar15 + 0x7b8))
                                (plVar15,*(undefined8 *)(lVar16 + 0xf0 + lVar19),1,0xffffffff),
             lVar6 != 0)))))))) &&
         ((*(char *)(lVar6 + 0x15) == '\0' &&
          (*(char *)(lVar6 + 0x68 + (longlong)*(int *)(lVar2 + 0x468)) == '\x02')))) {
        FUN_145714b8e(lVar2,lVar3);
        return;
      }
      lVar19 = lVar19 + 0x100;
    } while ((longlong)iVar1 * 0x100 != lVar19);
  }
  iVar1 = *(int *)(lVar2 + 0x3d0);
  if (iVar1 == 0) {
    uVar18 = 1;
    uVar17 = 0;
    iVar13 = 0;
    iVar11 = 0;
  }
  else {
    puVar7 = *(uint **)(lVar2 + 0x3c8);
    if (*(uint **)(lVar2 + 0x3c8) == (uint *)0x0) {
      puVar7 = (uint *)(lVar2 + 0x3b8);
    }
    uVar14 = *puVar7;
    if (uVar14 == 0) {
      iVar13 = iVar1 + 0x1e;
      if (-1 < iVar1 + -1) {
        iVar13 = iVar1 + -1;
      }
      uVar17 = 0;
      uVar12 = (ulonglong)(uint)(iVar13 >> 5);
      if (iVar13 >> 5 < 1) {
        uVar12 = uVar17;
      }
      iVar13 = 0;
      do {
        if (uVar12 == uVar17) goto LAB_143ca419f;
        iVar13 = iVar13 + 0x20;
        uVar14 = puVar7[uVar17 + 1];
        uVar17 = uVar17 + 1;
      } while (uVar14 == 0);
    }
    else {
      uVar17 = 0;
      iVar13 = 0;
    }
    uVar18 = (ulonglong)(-uVar14 & uVar14);
    uVar12 = uVar18 * 2 + 1;
    lVar16 = 0x3f;
    if (uVar12 != 0) {
      for (; uVar12 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    iVar11 = (iVar13 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
    if (iVar1 <= iVar11) {
      iVar11 = iVar1;
    }
  }
  if (iVar11 != iVar1) {
    uVar14 = 0xffffffff;
    iVar5 = iVar1;
    do {
      if (*(int *)(*(longlong *)(lVar2 + 0x3a8) + 0x10 + (longlong)iVar11 * 0x20) != 0) {
        lVar16 = *(longlong *)(lVar2 + 0x3a8) + (longlong)iVar11 * 0x20;
        plVar15 = (longlong *)(lVar16 + 8);
        puVar4 = (undefined8 *)*plVar15;
        if (puVar4 != (undefined8 *)0x0) {
          (**(code **)*puVar4)(puVar4,0);
          FUN_1446efa72(plVar15,0,0,0x10);
          *(undefined4 *)(lVar16 + 0x10) = 0;
          iVar5 = *(int *)(lVar2 + 0x3d0);
        }
      }
      uVar14 = uVar14 & ~(uint)uVar18;
      puVar7 = *(uint **)(lVar2 + 0x3c8);
      if (*(uint **)(lVar2 + 0x3c8) == (uint *)0x0) {
        puVar7 = (uint *)(lVar2 + 0x3b8);
      }
      iVar11 = (int)uVar17;
      lVar16 = (longlong)iVar11;
      uVar8 = puVar7[lVar16] & uVar14;
      if (uVar8 == 0) {
        iVar9 = iVar5 + 0x1e;
        if (-1 < iVar5 + -1) {
          iVar9 = iVar5 + -1;
        }
        iVar9 = iVar9 >> 5;
        iVar13 = iVar13 + 0x20;
        iVar10 = iVar9;
        if (iVar9 < iVar11) {
          iVar10 = iVar11;
        }
        if (iVar11 < iVar9) {
          lVar19 = 0;
          do {
            uVar8 = puVar7[lVar16 + lVar19 + 1];
            if (uVar8 != 0) {
              uVar17 = (ulonglong)(iVar11 + (int)lVar19 + 1);
              uVar14 = 0xffffffff;
              goto LAB_143ca4284;
            }
            iVar13 = iVar13 + 0x20;
            lVar19 = lVar19 + 1;
          } while (iVar10 - lVar16 != lVar19);
          uVar14 = 0xffffffff;
          iVar11 = iVar10;
        }
        uVar17 = (ulonglong)(iVar11 + 1);
        iVar11 = iVar5;
      }
      else {
LAB_143ca4284:
        uVar18 = (ulonglong)(-uVar8 & uVar8);
        uVar12 = uVar18 * 2 + 1;
        lVar16 = 0x3f;
        if (uVar12 != 0) {
          for (; uVar12 >> lVar16 == 0; lVar16 = lVar16 + -1) {
          }
        }
        iVar11 = (iVar13 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
        if (iVar5 <= iVar11) {
          iVar11 = iVar5;
        }
      }
    } while (iVar11 != iVar1);
  }
LAB_143ca419f:
  FUN_145ed29b4(lVar2,lVar3);
  return;
}



// FUNCTION 143ca42e8 FUN_143ca42e8 body=29 status=ok
// SIG undefined FUN_143ca42e8(void)

undefined8 FUN_143ca42e8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ca4484 FUN_143ca4484 body=93 status=ok
// SIG undefined FUN_143ca4484(void)

void FUN_143ca4484(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9bb0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3e94b0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143ca44e2 FUN_143ca44e2 body=93 status=ok
// SIG undefined FUN_143ca44e2(void)

void FUN_143ca44e2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9bb0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3e94b0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143ca4540 FUN_143ca4540 body=126 status=ok
// SIG undefined FUN_143ca4540(void)

void FUN_143ca4540(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b3e9bb0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3e94b0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143ca45af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143ca45d0 FUN_143ca45d0 body=271 status=ok
// SIG undefined FUN_143ca45d0(void)

undefined8 FUN_143ca45d0(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_143ca46d9;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_143ca46d9;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_143ca46d9:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143ca468d;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_14101649c(*(longlong *)(param_1 + 0x20) + 0x19f8);
      uVar6 = 1;
      goto LAB_143ca468d;
    }
  }
  uVar6 = 0;
LAB_143ca468d:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ca46e0 FUN_143ca46e0 body=29 status=ok
// SIG undefined FUN_143ca46e0(void)

undefined8 FUN_143ca46e0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ca487c FUN_143ca487c body=93 status=ok
// SIG undefined FUN_143ca487c(void)

void FUN_143ca487c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3e9520;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143ca48da FUN_143ca48da body=93 status=ok
// SIG undefined FUN_143ca48da(void)

void FUN_143ca48da(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3e9520;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143ca4938 FUN_143ca4938 body=126 status=ok
// SIG undefined FUN_143ca4938(void)

void FUN_143ca4938(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3e9520;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143ca49a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143ca49b6 FUN_143ca49b6 body=78 status=ok
// SIG undefined FUN_143ca49b6(void)

void FUN_143ca49b6(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  *(undefined1 *)(lVar1 + 0x8d1) = 1;
  FUN_14067171c(lVar1 + 0x898);
  *(undefined8 *)(lVar1 + 0x898) = 0;
  FUN_14078a7c0(lVar1 + 0x4d8);
  FUN_140633cb6(lVar1 + 0x988,1);
  FUN_1405211a0(lVar1);
  return;
}



// FUNCTION 143ca4a04 FUN_143ca4a04 body=325 status=ok
// SIG undefined FUN_143ca4a04(void)

undefined8 FUN_143ca4a04(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_143ca4b43;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_143ca4b43;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_143ca4b43:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143ca4af7;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      lVar5 = *(longlong *)(param_1 + 0x20);
      *(undefined1 *)(lVar5 + 0x8d1) = 1;
      FUN_14067171c(lVar5 + 0x898);
      *(undefined8 *)(lVar5 + 0x898) = 0;
      FUN_14078a7c0(lVar5 + 0x4d8);
      uVar6 = 1;
      FUN_140633cb6(lVar5 + 0x988,1);
      FUN_1405211a0(lVar5);
      goto LAB_143ca4af7;
    }
  }
  uVar6 = 0;
LAB_143ca4af7:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ca4b4a FUN_143ca4b4a body=31 status=ok
// SIG undefined FUN_143ca4b4a(void)

undefined8 FUN_143ca4b4a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ca4c4c FUN_143ca4c4c body=31 status=ok
// SIG undefined FUN_143ca4c4c(void)

undefined8 FUN_143ca4c4c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ca4d06 FUN_143ca4d06 body=31 status=ok
// SIG undefined FUN_143ca4d06(void)

undefined8 FUN_143ca4d06(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ca4d32 FUN_143ca4d32 body=182 status=ok
// SIG undefined FUN_143ca4d32(void)

void FUN_143ca4d32(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  bool bVar10;
  
  lVar4 = *param_2;
  if (lVar4 == 0) {
    return;
  }
  plVar5 = (longlong *)param_1[1];
  if (plVar5 == (longlong *)0x0) {
    return;
  }
  iVar7 = (int)plVar5[1];
  do {
    if (iVar7 == 0) {
      return;
    }
    LOCK();
    iVar6 = (int)plVar5[1];
    bVar10 = iVar7 == iVar6;
    if (bVar10) {
      *(int *)(plVar5 + 1) = iVar7 + 1;
      iVar6 = iVar7;
    }
    iVar7 = iVar6;
    UNLOCK();
  } while (!bVar10);
  if (*param_1 == 0) goto LAB_143ca4d64;
  if (*(int *)((longlong)param_1 + 0x14) == 0) {
LAB_143ca4de3:
    uVar8 = 0;
  }
  else {
    uVar3 = *(uint *)(param_1 + 2);
    uVar8 = 0;
    if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) {
      puVar9 = (undefined8 *)
               ((ulonglong)((uVar3 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
      if ((puVar9 == (undefined8 *)0x0) ||
         ((*(int *)(puVar9 + 2) != *(int *)((longlong)param_1 + 0x14) ||
          ((*(uint *)(puVar9 + 1) & 0x10200000) != 0)))) goto LAB_143ca4de3;
      uVar8 = *puVar9;
    }
  }
  FUN_146196024(*param_1,lVar4,uVar8);
LAB_143ca4d64:
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
                    /* WARNING: Could not recover jumptable at 0x000143ca4d83. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 0x10))(plVar5);
      return;
    }
  }
  return;
}



// FUNCTION 143ca4de8 FUN_143ca4de8 body=50 status=ok
// SIG undefined FUN_143ca4de8(void)

longlong FUN_143ca4de8(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  *(undefined ***)(param_2 + 0x10) = &PTR_FUN_14b3e9770;
  *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_1 + 8);
  lVar1 = *(longlong *)(param_1 + 0x10);
  *(longlong *)(param_2 + 0x20) = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
    UNLOCK();
  }
  *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(param_1 + 0x18);
  return param_2 + 0x18;
}



// FUNCTION 143ca4e20 FUN_143ca4e20 body=12 status=ok
// SIG undefined FUN_143ca4e20(void)

void FUN_143ca4e20(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143ca4e29. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143ca4e2c FUN_143ca4e2c body=64 status=ok
// SIG undefined FUN_143ca4e2c(void)

undefined8 * FUN_143ca4e2c(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b3e9770;
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



// FUNCTION 143ca4e6c FUN_143ca4e6c body=29 status=ok
// SIG undefined FUN_143ca4e6c(void)

undefined8 FUN_143ca4e6c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ca5008 FUN_143ca5008 body=93 status=ok
// SIG undefined FUN_143ca5008(void)

void FUN_143ca5008(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b3e9900;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143ca5066 FUN_143ca5066 body=93 status=ok
// SIG undefined FUN_143ca5066(void)

void FUN_143ca5066(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b3e9900;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143ca50c4 FUN_143ca50c4 body=126 status=ok
// SIG undefined FUN_143ca50c4(void)

void FUN_143ca50c4(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3e9900;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143ca5133. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143ca514c FUN_143ca514c body=266 status=ok
// SIG undefined FUN_143ca514c(void)

undefined8 FUN_143ca514c(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_143ca5250;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_143ca5250;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_143ca5250:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143ca51f7;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_1487c62aa(*(undefined8 *)(param_1 + 0x20));
      uVar6 = 1;
      goto LAB_143ca51f7;
    }
  }
  uVar6 = 0;
LAB_143ca51f7:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ca5257 FUN_143ca5257 body=2958 status=ok
// SIG undefined FUN_143ca5257(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143ca5257(void)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  char *pcVar4;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  char **local_68;
  undefined8 uStack_60;
  char *local_58;
  ulonglong local_50 [4];
  
  local_50[0] = DAT_14c707940 ^ (ulonglong)auStack_98;
  _DAT_14cb71338 = 0x47efffffe0000000;
  _DAT_14cb71340 = 0x47efffffe0000000;
  _DAT_14cb71348 = 0x47efffffe0000000;
  DAT_14cb71350 = 0x47efffffe0000000;
  DAT_14cb71358 = 0x47efffffe0000000;
  DAT_14cb71360 = 0x47efffffe0000000;
  _DAT_14cb71368 = 0x47efffffe0000000;
  _DAT_14cb71370 = 0x47efffffe0000000;
  local_68 = (char **)&DAT_14a19662d;
  uStack_60._0_5_ = 4;
  FUN_14001a6c0(&local_68,1);
  local_68 = (char **)0x149fca2ba;
  uStack_60 = (ulonglong *)CONCAT35(uStack_60._5_3_,0xd);
  uVar3 = FUN_14001a6c0(&local_68,1);
  _DAT_14cb71378 = (ulonglong)uVar3;
  local_68._0_4_ = 0x3f800000;
  local_78 = 0;
  FUN_140a6b41e(&DAT_14cb71380,L"gbx.player.area_check_interval",&local_68,
                L"The time interval between area checks for a player character");
  atexit(FUN_143c9d0bc);
  local_68._0_4_ = 1;
  local_78 = 0;
  FUN_14078dbce(&DAT_14cb71398,L"gbx.player.area_streamed.WaitOnCollisionStreaming",&local_68,
                L"Whether to wait on GbxCollisionStreamingManager for ::IsAreaAroundLocationStreamedInImpl"
               );
  atexit(FUN_143c9d101);
  local_68 = (char **)CONCAT44(local_68._4_4_,5000);
  local_78 = 0;
  FUN_14078dbce(&DAT_14cb713b0,L"gbx.player.area_streamed.WaitOnCollisionStreaming.Radius",&local_68
                ,
                L"Whether to wait on GbxCollisionStreamingManager for ::IsAreaAroundLocationStreamedInImpl"
               );
  atexit(FUN_143c9d146);
  FUN_1400b22c2(&local_68,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar2 = FUN_140b10a34(&local_68,&DAT_14cb713d0);
  if (cVar2 == '\0') {
    _DAT_14cb713d0 = 0;
    uRam000000014cb713d8 = 0;
  }
  if (local_68 != (char **)0x0) {
    FUN_1400020a8();
  }
  local_68 = (char **)0xb3c04540b63c4382;
  uStack_60._0_4_ = 0xb088406f;
  uStack_60._4_4_ = 0x79a4f26f;
  _DAT_14cb713e0 = 0xb63c4382;
  uRam000000014cb713e4 = 0xb3c04540;
  uRam000000014cb713e8 = 0xb088406f;
  uRam000000014cb713ec = 0x79a4f26f;
  FUN_141005458(&local_68,1,L"GbxCharacterBodyData",0);
  atexit((_func_5014 *)&LAB_143c9d6a4);
  _DAT_14cb713f4 = 0;
  FUN_14052b5e0(&DAT_14cb713f0,"PlayerAwareness",0);
  _DAT_14cb71400 = "PlayerAwareness";
  FUN_1446f470e(&DAT_14cb71408,L"brain",1);
  FUN_1446f470e(&DAT_14cb71410,L"awareofplayers",1);
  FUN_1446f470e(&DAT_14cb71418,L"blackboard",1);
  local_68 = (char **)0x14b3e807a;
  uStack_60._0_5_ = 5;
  uVar3 = FUN_14001a6c0(&local_68,1);
  _DAT_14cb71420 = (ulonglong)uVar3;
  local_68 = (char **)0x14b3e8080;
  uStack_60 = (ulonglong *)CONCAT35(uStack_60._5_3_,0x17);
  uVar3 = FUN_14001a6c0(&local_68,1);
  _DAT_14cb71428 = (ulonglong)uVar3;
  DAT_14cb717f8 = 0;
  _DAT_14cb71800 = 0;
  _DAT_14cb71808 = 2;
  atexit(FUN_143c9d8e6);
  FUN_1446f470e(&DAT_14cb71810,L"Char_Placeholder",1);
  _DAT_14cb71430 = 0xffffffff;
  _DAT_14cb71434 = 0;
  FUN_1446f470e(&DAT_14cb71438,L"Trigger",1);
  FUN_1446f470e(&DAT_14cb71440,L"ProximityShape",1);
  FUN_1446f470e(&DAT_14cb71448,L"NavObstacle",1);
  FUN_1446f470e(&DAT_14cb71450,L"Interacting",1);
  FUN_1446f470e(&DAT_14cb71458,L"LevelSequence",1);
  FUN_1446f470e(&DAT_14cb71460,L"HideUntilLevelSequence",1);
  ram0x00014cb71474 = 0;
  FUN_14052b5e0(&DAT_14cb71470,"ProximityTriggerDistance",0);
  _DAT_14cb71480 = "ProximityTriggerDistance";
  FUN_1446f470e(&DAT_14cb71468,L"Interacting",1);
  _DAT_14cb71488 = 0x47efffffe0000000;
  _DAT_14cb71490 = 0x47efffffe0000000;
  _DAT_14cb71498 = 0x47efffffe0000000;
  _DAT_14cb714a0 = 0x47efffffe0000000;
  _DAT_14cb714a8 = 0x47efffffe0000000;
  _DAT_14cb714b0 = 0x47efffffe0000000;
  _DAT_14cb714b8 = 0x47efffffe0000000;
  _DAT_14cb714c0 = 0x47efffffe0000000;
  _DAT_14cb714c8 = 0x47efffffe0000000;
  _DAT_14cb714d0 = 0x47efffffe0000000;
  FUN_1446f470e(&DAT_14cb714d8,L"LockMovementStationary",1);
  FUN_1446f470e(&DAT_14cb714e0,L"DroneMovementComponent",1);
  _DAT_14cb71508 = &LAB_143c9dbd8;
  _DAT_14cb71510 = 0x4625a000;
  DAT_14cb71514 = 1;
  DAT_14cb71500 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb71500;
  atexit((_func_5014 *)&LAB_143c9dbdd);
  local_78 = 0x40;
  FUN_14153156c(&DAT_14cb71528,L"wp.gbx.runtime.scale.use_default_shapes",&DAT_14c76384c,
                L"If false, shapes supplied by the default PlayerController are ignored.\n");
  atexit(FUN_143c9eeb9);
  local_78 = 0x40;
  FUN_14153156c(&DAT_14cb71538,L"wp.gbx.runtime.scale.modify_default_shapes",&DAT_14cb71520,
                L"If use_default_shapes, apply the scale to each default shape.\n");
  atexit(FUN_143c9eefe);
  DAT_14cb71558 = 0;
  _DAT_14cb71560 = 0;
  _DAT_14cb71568 = 2;
  atexit(FUN_143c9f4ad);
  local_68 = (char **)0x0;
  uStack_60 = (ulonglong *)((ulonglong)uStack_60 & 0xffffffff00000000);
  FUN_1446efa72(&local_68,0,2,0x10);
  uStack_60._0_4_ = 2;
  *local_68 = (char *)&PTR_LAB_14acb7d20;
  LOCK();
  UNLOCK();
  pcVar4 = (char *)(DAT_14c758608 + 1);
  lVar1 = DAT_14c758608 + 1;
  if (pcVar4 == (char *)0x0) {
    LOCK();
    UNLOCK();
    pcVar4 = (char *)(DAT_14c758608 + 2);
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_68[2] = pcVar4;
  *local_68 = (char *)&PTR_FUN_14acb7cb0;
  local_68[3] = (char *)FUN_143c9ff3a;
  local_78 = 0x10001;
  FUN_141819a96(&DAT_14cb71570,L"gbx.Player.TestFeedback",
                L"<FeedbackName> Plays the specified feedback by name",&local_68);
  if ((int)uStack_60 != 0) {
    if (local_68 == (char **)0x0) goto LAB_143ca583e;
    (**(code **)*local_68)(local_68,0);
    FUN_1446efa72(&local_68,0,0,0x10);
    uStack_60._0_4_ = 0;
  }
  if (local_68 != (char **)0x0) {
    FUN_1400020a8();
  }
LAB_143ca583e:
  atexit(FUN_143ca01c6);
  DAT_14cb71580 = 0;
  _DAT_14cb71588 = 0;
  _DAT_14cb71590 = 2;
  atexit(FUN_143ca03fa);
  uStack_60 = local_50;
  local_58 = "using_shared_progression";
  _DAT_14cb71598 = 0;
  uRam000000014cb715a0 = 0;
  _DAT_14cb715a8 = 0;
  DAT_14cb715b0 = 0;
  uRam000000014cb715b8 = 0;
  local_68 = &local_58;
  FUN_1487ca8ae(&DAT_14cb71598,&local_68,0);
  atexit((_func_5014 *)&LAB_143ca042b);
  DAT_14cb71688 = 0;
  _DAT_14cb71690 = 0;
  _DAT_14cb71698 = 2;
  atexit(FUN_143ca04e7);
  DAT_14cb716a0 = 0;
  _DAT_14cb716a8 = 0;
  _DAT_14cb716b0 = 2;
  atexit(FUN_143ca0518);
  DAT_14cb71658 = 0;
  _DAT_14cb71660 = 0;
  _DAT_14cb71668 = 2;
  atexit(FUN_143ca0549);
  DAT_14cb71670 = 0;
  _DAT_14cb71678 = 0;
  _DAT_14cb71680 = 2;
  atexit(FUN_143ca057a);
  FUN_1446f470e(&DAT_14cb717f0,L"Root",1);
  local_68 = (char **)0x613741a17f1efa37;
  uStack_60 = (ulonglong *)0x9a361331b57932f8;
  _DAT_14cb715c0 = 0x7f1efa37;
  uRam000000014cb715c4 = 0x613741a1;
  uRam000000014cb715c8 = 0xb57932f8;
  uRam000000014cb715cc = 0x9a361331;
  FUN_141005458(&local_68,2,L"InteractiveObject",0);
  atexit((_func_5014 *)&LAB_143ca0b82);
  _DAT_14cb716c0 = 0;
  LOCK();
  DAT_14cb716b8 = 0;
  UNLOCK();
  atexit((_func_5014 *)&LAB_143ca0b8e);
  local_68 = (char **)0x2c564469d41c84d2;
  uStack_60 = (ulonglong *)0x926fb9ed81ffc269;
  _DAT_14cb715d0 = 0xd41c84d2;
  uRam000000014cb715d4 = 0x2c564469;
  uRam000000014cb715d8 = 0x81ffc269;
  uRam000000014cb715dc = 0x926fb9ed;
  FUN_141005458(&local_68,0,L"InteractiveObjectBodySettings",0);
  atexit((_func_5014 *)&LAB_143ca0fc0);
  DAT_14cb717d0 = 0xc61c4000;
  local_68 = (char **)0x870a4d3954f89935;
  uStack_60 = (ulonglong *)0x725548e29fb22a9c;
  _DAT_14cb715e0 = 0x54f89935;
  uRam000000014cb715e4 = 0x870a4d39;
  uRam000000014cb715e8 = 0x9fb22a9c;
  uRam000000014cb715ec = 0x725548e2;
  FUN_141005458(&local_68,3,L"GbxAINode",0);
  atexit((_func_5014 *)&LAB_143ca0fd3);
  _DAT_14cb715f8 = 0;
  LOCK();
  DAT_14cb715f0 = 0;
  UNLOCK();
  atexit((_func_5014 *)&LAB_143ca0fdf);
  FUN_1446f470e(&DAT_14cb716c8,L"ai_node_stay",1);
  FUN_1446f470e(&DAT_14cb716d8,L"ai_node_travel",1);
  FUN_1446f470e(&DAT_14cb716e0,L"ai_node_travel_loc",1);
  FUN_1446f470e(&DAT_14cb716d0,L"ai_node_stay_radius",1);
  FUN_1446f470e(&DAT_14cb716e8,L"AINode",1);
  FUN_1446f470e(&DAT_14cb717c8,L"bCanFidgetDuringIdle",1);
  FUN_1446f470e(&DAT_14cb71740,L"Radius",1);
  FUN_1446f470e(&DAT_14cb71748,L"Perch",1);
  FUN_1446f470e(&DAT_14cb71750,L"PerchDuration",1);
  FUN_1446f470e(&DAT_14cb71600,L"PerchDurationUsed",1);
  FUN_1446f470e(&DAT_14cb71608,L"Cover",1);
  FUN_1446f470e(&DAT_14cb71760,L"CoverDuration",1);
  FUN_1446f470e(&DAT_14cb71758,L"bUseDurationTimer",1);
  FUN_1446f470e(&DAT_14cb71768,L"bOverrideIdleTime",1);
  FUN_1446f470e(&DAT_14cb71770,L"IdleTimeOverride",1);
  FUN_1446f470e(&DAT_14cb71778,L"bOverrideFireTime",1);
  FUN_1446f470e(&DAT_14cb71780,L"FireTimeOverride",1);
  FUN_1446f470e(&DAT_14cb71788,L"bFidgeting",1);
  FUN_1446f470e(&DAT_14cb71790,L"bCombat",1);
  FUN_1446f470e(&DAT_14cb71798,L"LookAtTarget",1);
  FUN_1446f470e(&DAT_14cb717a0,L"LookAtRadius",1);
  FUN_1446f470e(&DAT_14cb717b0,L"bDoCloak",1);
  FUN_1446f470e(&DAT_14cb717c0,L"bDoDigistruct",1);
  FUN_1446f470e(&DAT_14cb717b8,L"bDoAbsentTrick",1);
  FUN_1446f470e(&DAT_14cb717a8,L"StayRotation",1);
  FUN_1446f470e(&DAT_14cb716f0,L"LeadDistance",1);
  FUN_1446f470e(&DAT_14cb716f8,L"LeadEndDistance",1);
  FUN_1446f470e(&DAT_14cb71700,L"LeadStartDistance",1);
  FUN_1446f470e(&DAT_14cb71708,L"LeadTarget",1);
  FUN_1446f470e(&DAT_14cb71710,L"FollowDistance",1);
  FUN_1446f470e(&DAT_14cb71720,L"FollowTarget",1);
  FUN_1446f470e(&DAT_14cb71718,L"FollowEndDistance",1);
  FUN_1446f470e(&DAT_14cb71728,L"PostTeleportRotation",1);
  FUN_1446f470e(&DAT_14cb71730,L"PostArrivalRotation",1);
  FUN_1446f470e(&DAT_14cb71738,L"bUsePostArrivalRotation",1);
  if ((local_50[0] ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ca5f3e FUN_143ca5f3e body=1006 status=ok
// SIG undefined FUN_143ca5f3e(void)

void FUN_143ca5f3e(longlong *param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  int iVar10;
  double dVar11;
  double *pdVar12;
  undefined4 uVar13;
  uint uVar14;
  longlong *plVar15;
  longlong *plVar16;
  undefined1 auStack_148 [32];
  undefined1 local_128;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  longlong *plStack_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  double local_b8;
  longlong *local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  double local_98;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  double local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_a8 = *(undefined8 *)(param_2 + 0x260);
  uStack_a0 = *(undefined8 *)(param_2 + 0x268);
  local_98 = *(double *)(param_2 + 0x270);
  pdVar12 = &local_b8;
  FUN_14070cbf4(pdVar12,param_1);
  uVar13 = SUB84(pdVar12,0);
  if (local_b8 != 0.0) {
    uVar14 = *(uint *)((longlong)local_b8 + 0x250);
    plVar15 = *(longlong **)((longlong)local_b8 + 0x488);
    dVar11 = local_b8;
    dVar6 = local_b8;
    if (plVar15 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar15 + 0xc) = *(int *)((longlong)plVar15 + 0xc) + 1;
      UNLOCK();
      LOCK();
      piVar1 = (int *)((longlong)plVar15 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        dVar11 = (double)(**(code **)(*plVar15 + 0x10))();
        dVar6 = local_b8;
      }
    }
    local_b8 = dVar11;
    uVar13 = SUB84(plVar15,0);
    if (uVar14 < 0x15) {
      local_e0 = 0;
      plStack_d8 = (longlong *)0x0;
      local_d0 = 0xffffffff;
      local_c8 = 0;
      local_c0 = 0xbf800000;
      local_b8 = dVar6;
      local_118 = (double)FUN_1447210f0(param_1);
      plVar16 = plStack_d8;
      uStack_110 = *(double *)((longlong)local_b8 + 0x588);
      local_108 = *(double *)((longlong)local_b8 + 0x590);
      uStack_100 = *(double *)((longlong)local_b8 + 0x598);
      local_f8 = *(undefined8 *)((longlong)local_b8 + 0x5a0);
      local_f0 = *(undefined8 *)((longlong)local_b8 + 0x5a8);
      uStack_e8 = *(undefined8 *)((longlong)local_b8 + 0x5b0);
      plVar15 = *(longlong **)((longlong)local_b8 + 0x5c0);
      if (plVar15 != (longlong *)0x0) {
        local_e0 = *(undefined8 *)((longlong)local_b8 + 0x5b8);
        LOCK();
        *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
        UNLOCK();
        if (plStack_d8 != (longlong *)0x0) {
          LOCK();
          plVar2 = plStack_d8 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            puVar3 = (undefined8 *)*plStack_d8;
            plStack_d8 = plVar15;
            (*(code *)*puVar3)(plVar16);
            LOCK();
            piVar1 = (int *)((longlong)plVar16 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            plVar15 = plStack_d8;
            if (*piVar1 == 0) {
              (**(code **)(*plVar16 + 0x10))(plVar16);
              plVar15 = plStack_d8;
            }
          }
        }
      }
      plStack_d8 = plVar15;
      plVar15 = plStack_d8;
      local_d0 = *(undefined4 *)((longlong)local_b8 + 0x5c8);
      local_c8 = *(undefined8 *)((longlong)local_b8 + 0x5d0);
      local_78 = local_98;
      local_88 = (undefined4)local_a8;
      uStack_84 = local_a8._4_4_;
      uStack_80 = (undefined4)uStack_a0;
      uStack_7c = uStack_a0._4_4_;
      local_60 = DAT_14cb1c870;
      local_70 = (undefined4)DAT_14cb1c860;
      uStack_6c = DAT_14cb1c860._4_4_;
      uStack_68 = (undefined4)DAT_14cb1c868;
      uStack_64 = DAT_14cb1c868._4_4_;
      uStack_110 = (double)local_a8;
      local_108 = (double)uStack_a0;
      local_f0 = CONCAT44(DAT_14cb1c868._4_4_,(undefined4)DAT_14cb1c868);
      uStack_e8 = DAT_14cb1c870;
      uStack_100 = local_98;
      local_f8 = CONCAT44(DAT_14cb1c860._4_4_,(undefined4)DAT_14cb1c860);
      local_e0 = 0;
      if (plStack_d8 != (longlong *)0x0) {
        plStack_d8 = (longlong *)0x0;
        LOCK();
        plVar16 = plVar15 + 1;
        *(int *)plVar16 = (int)*plVar16 + -1;
        UNLOCK();
        if ((int)*plVar16 == 0) {
          (**(code **)*plVar15)(plVar15);
          LOCK();
          piVar1 = (int *)((longlong)plVar15 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar15 + 0x10))(plVar15);
          }
        }
      }
      local_d0 = 0xffffffff;
      uVar13 = SUB84(&local_88,0);
      local_b8 = (double)FUN_141804e5e();
      plVar15 = plStack_d8;
      if ((char)local_70 == '\x01') {
        local_98 = local_78;
        local_a8 = CONCAT44(uStack_84,local_88);
        uStack_a0 = CONCAT44(uStack_7c,uStack_80);
        local_b8 = local_78;
      }
      if (plStack_d8 != (longlong *)0x0) {
        LOCK();
        plVar16 = plStack_d8 + 1;
        *(int *)plVar16 = (int)*plVar16 + -1;
        UNLOCK();
        if ((int)*plVar16 == 0) {
          plVar16 = plStack_d8;
          local_b8 = (double)(**(code **)*plStack_d8)();
          uVar13 = SUB84(plVar16,0);
          LOCK();
          piVar1 = (int *)((longlong)plVar15 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            local_b8 = (double)(**(code **)(*plVar15 + 0x10))();
            uVar13 = SUB84(plVar15,0);
          }
        }
      }
    }
  }
  if (local_b0 != (longlong *)0x0) {
    LOCK();
    plVar15 = local_b0 + 1;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)*plVar15 == 0) {
      plVar15 = local_b0;
      local_b8 = (double)(**(code **)*local_b0)();
      uVar13 = SUB84(plVar15,0);
      LOCK();
      piVar1 = (int *)((longlong)local_b0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        local_b8 = (double)(**(code **)(*local_b0 + 0x10))();
        uVar13 = SUB84(local_b0,0);
      }
    }
  }
  dVar6 = *(double *)(param_2 + 0x240);
  dVar11 = *(double *)(param_2 + 0x248);
  dVar7 = *(double *)(param_2 + 0x250);
  dVar8 = *(double *)(param_2 + 600);
  pdVar12 = *(double **)(param_2 + 0x228);
  local_118 = dVar6;
  uStack_110 = dVar11;
  local_108 = dVar7;
  uStack_100 = dVar8;
  if (pdVar12 == (double *)0x0) {
    uVar13 = 0x40;
    pdVar12 = (double *)FUN_14001cc68(0x40,0x10);
    dVar9 = DAT_14c8463d8;
    *pdVar12 = DAT_14c8463d0;
    pdVar12[1] = dVar9;
    dVar9 = DAT_14c8463e8;
    pdVar12[2] = DAT_14c8463e0;
    pdVar12[3] = dVar9;
    dVar9 = DAT_14c846500;
    pdVar12[4] = DAT_14c8464f8;
    pdVar12[5] = dVar9;
    local_b8 = DAT_14c846508;
    pdVar12[6] = DAT_14c846508;
    *(double **)(param_2 + 0x228) = pdVar12;
  }
  auVar4._8_4_ = (int)-(ulonglong)(dVar11 != pdVar12[1]);
  auVar4._0_8_ = -(ulonglong)(dVar6 != *pdVar12);
  auVar4._12_4_ = (int)(-(ulonglong)(dVar11 != pdVar12[1]) >> 0x20);
  iVar10 = movmskpd(SUB84(local_b8,0),auVar4);
  auVar5._8_4_ = (int)-(ulonglong)(dVar8 != pdVar12[3]);
  auVar5._0_8_ = -(ulonglong)(dVar7 != pdVar12[2]);
  auVar5._12_4_ = (int)(-(ulonglong)(dVar8 != pdVar12[3]) >> 0x20);
  uVar14 = movmskpd(uVar13,auVar5);
  if ((uVar14 & 0x3fffffff) != 0 || iVar10 != 0) {
    *(undefined4 *)(pdVar12 + 2) = (undefined4)local_108;
    *(undefined4 *)((longlong)pdVar12 + 0x14) = local_108._4_4_;
    *(undefined4 *)(pdVar12 + 3) = (undefined4)uStack_100;
    *(undefined4 *)((longlong)pdVar12 + 0x1c) = uStack_100._4_4_;
    *(undefined4 *)pdVar12 = (undefined4)local_118;
    *(undefined4 *)((longlong)pdVar12 + 4) = local_118._4_4_;
    *(undefined4 *)(pdVar12 + 1) = (undefined4)uStack_110;
    *(undefined4 *)((longlong)pdVar12 + 0xc) = uStack_110._4_4_;
    FUN_1448052ee(&local_118,&local_88);
    pdVar12[6] = local_78;
    pdVar12[4] = (double)CONCAT44(uStack_84,local_88);
    pdVar12[5] = (double)CONCAT44(uStack_7c,uStack_80);
  }
  local_78 = pdVar12[6];
  local_88 = *(undefined4 *)(pdVar12 + 4);
  uStack_84 = *(undefined4 *)((longlong)pdVar12 + 0x24);
  uStack_80 = *(undefined4 *)(pdVar12 + 5);
  uStack_7c = *(undefined4 *)((longlong)pdVar12 + 0x2c);
  local_128 = 0;
  (**(code **)(*param_1 + 0x4d0))(param_1,&local_a8,&local_88,0);
  if ((local_50 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143ca632d FUN_143ca632d body=69 status=ok
// SIG undefined FUN_143ca632d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143ca632d(void)

{
  _DAT_14cb71b20 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143ca636f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb71b28,1);
  return;
}



// FUNCTION 143ca6372 FUN_143ca6372 body=69 status=ok
// SIG undefined FUN_143ca6372(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143ca6372(void)

{
  _DAT_14cb71b30 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143ca63b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb71b38,1);
  return;
}



// FUNCTION 143ca63b7 FUN_143ca63b7 body=49 status=ok
// SIG undefined FUN_143ca63b7(void)

void FUN_143ca63b7(void)

{
  FUN_144760e21(DAT_14cb71b48,DAT_14cb71b50);
  if (DAT_14cb71b48 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143ca640c FUN_143ca640c body=269 status=ok
// SIG undefined FUN_143ca640c(void)

undefined8 FUN_143ca640c(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined7 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  cVar1 = *(char *)(param_1 + 0x3d0);
  if (cVar1 == '\x01') {
    *(undefined1 *)(param_1 + 0x3d0) = 0;
    cVar1 = '\0';
  }
  if ((*(byte *)(param_1 + 0x1dc) & 4) == 0) {
    puVar4 = (undefined8 *)(*param_2 + 0xb50);
    if (puVar4 == (undefined8 *)(param_1 + 0x370)) {
      if (cVar1 == '\0') {
        return 0;
      }
    }
    else {
      if (*(char *)(*param_2 + 0xbb0) != '\x01') {
        if (cVar1 != '\0') {
          *(undefined1 *)(param_1 + 0x3d0) = 0;
        }
        return 0;
      }
      puVar5 = (undefined8 *)(param_1 + 0x370);
      for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      *(undefined1 *)(param_1 + 0x3d0) = 1;
    }
    memcpy((void *)(param_1 + 0x1f0),(void *)(param_1 + 0x2d0),0x90);
    *(undefined1 *)(param_1 + 0x1e8) = 3;
    *(undefined4 *)(param_1 + 0x2c0) = 0x3f800000;
    uVar2 = 0x3f800000000000;
    *(undefined8 *)(param_1 + 0x1cc) = 0x3f80000000000000;
  }
  else {
    *(undefined4 *)(param_1 + 0x2c0) = 0x3f800000;
    *(undefined8 *)(param_1 + 0x1cc) = 0x3f80000000000000;
    memcpy((void *)(param_1 + 0x1f0),(void *)(param_1 + 0x60),0x90);
    *(undefined8 *)(param_1 + 0x280) = *(undefined8 *)(param_1 + 0xf0);
    *(undefined8 *)(param_1 + 0x288) = *(undefined8 *)(param_1 + 0xf8);
    *(undefined8 *)(param_1 + 0x290) = *(undefined8 *)(param_1 + 0x100);
    uVar2 = (undefined7)((ulonglong)*(undefined8 *)(param_1 + 0x100) >> 8);
    *(undefined1 *)(param_1 + 0x1e8) = *(undefined1 *)(param_1 + 0x108);
  }
  return CONCAT71(uVar2,1);
}



// FUNCTION 143ca651a FUN_143ca651a body=377 status=ok
// SIG undefined FUN_143ca651a(void)

void FUN_143ca651a(longlong *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  longlong lVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  
  FUN_1448159b2();
  lVar7 = (**(code **)(*param_1 + 0x130))(param_1);
  lVar8 = (**(code **)(*param_1 + 0x138))(param_1);
  plVar1 = (longlong *)param_1[0x1b];
  if (plVar1 != (longlong *)0x0) {
    pcVar2 = *(code **)(*param_1 + 0x98);
    if (pcVar2 == (code *)&LAB_1400e9baa) {
      iVar6 = *(int *)((longlong)param_1 + 0xe4);
    }
    else if (pcVar2 == (code *)&LAB_1400e9bb2) {
      iVar6 = (int)param_1[5];
    }
    else if (pcVar2 == (code *)&LAB_1400e9bb6) {
      iVar6 = *(int *)((longlong)param_1 + 0x44);
    }
    else {
      iVar6 = (*pcVar2)(param_1);
    }
    if ((iVar6 == -1) || ((int)plVar1[0xd6] <= iVar6)) {
      bVar5 = *(byte *)(param_1 + 2);
      if ((bVar5 & 1) == 0) {
        uVar9 = (**(code **)(*param_1 + 8))(param_1);
        cVar4 = (**(code **)(*plVar1 + 0xc0))(plVar1,uVar9,(longlong)param_1 + 0x11);
        bVar5 = (cVar4 * '\x02' | *(byte *)(param_1 + 2) & 0xfc) + 1;
        *(byte *)(param_1 + 2) = bVar5;
      }
      if ((((bVar5 & 2) == 0) ||
          (cVar4 = (**(code **)(*plVar1 + 0xb8))(plVar1,*(undefined1 *)((longlong)param_1 + 0x11)),
          cVar4 != '\0')) && (lVar3 = param_1[0x1b], *(char *)(lVar3 + 0xbf0) == '\0')) {
        puVar10 = (undefined4 *)(lVar7 + 0x1e0);
        if ((*(byte *)(lVar7 + 0x1dc) & 8) == 0) {
          puVar10 = (undefined4 *)(lVar3 + 0xb40);
        }
        *(undefined4 *)(lVar7 + 0x1e4) = *puVar10;
        uVar11 = *(undefined4 *)(lVar3 + 0xb44);
        goto LAB_143ca661e;
      }
    }
  }
  uVar11 = 0;
  uVar12 = 0;
  if ((*(byte *)(lVar7 + 0x1dc) & 8) != 0) {
    uVar12 = *(undefined4 *)(lVar7 + 0x1e0);
  }
  *(undefined4 *)(lVar7 + 0x1e4) = uVar12;
LAB_143ca661e:
  if ((*(byte *)(lVar8 + 0x1dc) & 8) != 0) {
    uVar11 = *(undefined4 *)(lVar8 + 0x1e0);
  }
  *(undefined4 *)(lVar8 + 0x1e4) = uVar11;
  return;
}



// FUNCTION 143ca6694 FUN_143ca6694 body=7373 status=ok
// SIG undefined FUN_143ca6694(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143ca6694(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  double *pdVar2;
  double *pdVar3;
  float fVar4;
  char cVar5;
  char cVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  DWORD DVar11;
  int iVar12;
  int iVar13;
  DWORD DVar14;
  DWORD dwTlsIndex;
  double *pdVar15;
  longlong *plVar16;
  longlong lVar17;
  void *pvVar18;
  uint uVar19;
  longlong lVar20;
  longlong lVar21;
  ulonglong uVar22;
  undefined1 (*pauVar23) [16];
  int iVar24;
  longlong lVar25;
  undefined8 *puVar26;
  double *pdVar27;
  longlong *plVar28;
  longlong *plVar29;
  int iVar30;
  longlong lVar31;
  longlong *plVar32;
  undefined8 *puVar33;
  longlong lVar34;
  longlong lVar35;
  ulonglong uVar36;
  longlong lVar37;
  bool bVar38;
  ulonglong uVar39;
  double dVar40;
  double dVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  double dVar49;
  undefined1 auVar50 [16];
  double dVar53;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  double dVar54;
  double dVar55;
  double dVar58;
  double dVar59;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  double dVar60;
  double dVar66;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  double dVar67;
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  double dVar74;
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  float fVar77;
  double dVar78;
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  double dVar82;
  undefined1 auVar81 [16];
  undefined1 auVar83 [16];
  undefined1 auStack_308 [40];
  undefined8 *local_2e0;
  longlong *local_2d8;
  longlong *local_2d0;
  longlong local_2c8;
  longlong local_2c0;
  longlong *local_2b8;
  longlong *local_2b0;
  longlong *local_2a8;
  longlong *local_2a0;
  ulonglong local_298;
  ulonglong local_290;
  longlong *local_288;
  longlong *local_280;
  longlong local_278;
  undefined8 local_270;
  undefined1 local_268;
  undefined8 local_264;
  undefined8 local_258;
  undefined8 uStack_250;
  longlong local_248;
  undefined1 uStack_240;
  undefined7 uStack_23f;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined1 uStack_230;
  longlong local_228;
  longlong lStack_220;
  undefined8 local_218;
  longlong lStack_210;
  ulonglong local_208;
  longlong lStack_200;
  ulonglong local_1f8;
  longlong lStack_1f0;
  undefined8 local_1e8;
  byte local_1e0;
  longlong local_1d8;
  ulonglong uStack_1d0;
  longlong local_1c8;
  ulonglong uStack_1c0;
  longlong local_1b8;
  ulonglong uStack_1b0;
  longlong local_1a0;
  undefined8 local_198;
  undefined1 local_190;
  undefined8 local_18c;
  void *local_180;
  undefined8 uStack_178;
  longlong local_170;
  undefined1 uStack_168;
  undefined7 uStack_167;
  int local_160;
  undefined4 uStack_15c;
  char local_158;
  longlong local_150;
  longlong lStack_148;
  ulonglong local_140;
  longlong lStack_138;
  ulonglong local_130;
  longlong lStack_128;
  ulonglong local_120;
  longlong lStack_118;
  undefined8 local_110;
  char local_108;
  undefined8 local_100;
  undefined4 local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_308;
  uVar19 = *(uint *)(param_1 + 6);
  uVar22 = (ulonglong)uVar19;
  if ((uVar22 == 0) || (*(char *)((longlong)param_1 + 0x7a) == '\0')) {
    if (param_1[3] != 0) {
      lVar20 = param_1[4];
      *(undefined4 *)(param_2 + 3) = *(undefined4 *)((longlong)param_2 + 0x14);
      *(int *)((longlong)param_2 + 0x14) = (int)lVar20;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_f0 ^ (ulonglong)auStack_308);
    }
    if ((char)param_2[0x13] != '\x01') {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_f0 ^ (ulonglong)auStack_308);
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_f0 ^ (ulonglong)auStack_308);
  }
  local_1a0 = *param_2;
  local_198 = 0;
  local_190 = 1;
  local_18c = 0xffffffffffffffff;
  local_180 = (void *)0x0;
  uStack_178 = 0;
  uStack_168 = 0;
  uStack_167 = 0;
  local_160 = 0;
  uStack_15c = 0;
  local_158 = '\0';
  local_150 = 0;
  lStack_148 = 0;
  local_140 = 0;
  lStack_138 = 0;
  local_130 = 0;
  lStack_128 = 0;
  local_120 = 0;
  lStack_118 = 0;
  local_110 = 0;
  local_108 = (char)param_2[0x13];
  lVar20 = *(longlong *)(local_1a0 + 0x6a0);
  uVar7 = *(uint *)(lVar20 + 8);
  local_170 = lVar20;
  if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar7);
  }
  iVar13 = 0;
  iVar12 = 0;
  if (uVar7 != 0) {
    FUN_144717690(&local_180,uVar7);
    iVar13 = (int)uStack_178;
    iVar12 = uStack_178._4_4_;
  }
  uStack_178 = CONCAT44(uStack_178._4_4_,iVar13 + uVar7);
  if ((uint)(iVar12 - iVar13) < uVar7) {
    FUN_1406600da(&local_180);
  }
  local_150 = lVar20 + 0xb0;
  local_18c = *(undefined8 *)((longlong)param_2 + 0x14);
  if ((longlong *)param_1[3] == (longlong *)0x0) {
    if (local_108 == '\x01') {
      FUN_1433edd58(&local_180);
    }
    else {
      FUN_1448859f0(&local_180,local_170);
    }
  }
  else {
    local_18c = CONCAT44(*(undefined4 *)((longlong)param_2 + 0x14),(int)param_1[4]);
    (**(code **)(*(longlong *)param_1[3] + 0x28))();
  }
  local_1b8 = 0;
  uStack_1b0 = 0;
  if ((int)uVar19 < 1) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar22);
  }
  uStack_1b0 = (ulonglong)uVar19;
  FUN_144ade1dc(&local_1b8,0);
  FUN_1447e15a9(local_1b8,uVar19);
  local_1c8 = 0;
  uStack_1c0 = (ulonglong)uVar19;
  FUN_144ade34e(&local_1c8,0);
  FUN_1447e1577(local_1c8,uVar19);
  local_1d8 = 0;
  uStack_1d0 = (ulonglong)uVar19;
  FUN_144ade44e(&local_1d8,0);
  FUN_1447e1596(local_1d8);
  local_288 = param_2 + 7;
  local_2c8 = uVar22 << 5;
  lVar37 = 0;
  lVar35 = 0;
  lVar21 = 0;
  lVar25 = 0;
  lVar20 = 0;
  local_2d8 = param_1;
  local_298 = uVar22;
  do {
    if (*(float *)(param_1[0x25] + lVar20 * 4) <= 1e-05) {
      FUN_1448859f0(local_1b8 + lVar21);
      lVar17 = local_1c8;
      if ((longlong *)(local_1c8 + lVar25) != local_288) {
        *(undefined4 *)(local_1c8 + 8 + lVar25) = 0;
        if (*(int *)(local_1c8 + 0xc + lVar25) < 0) {
          FUN_14480ffb8();
        }
        *(undefined1 *)(lVar17 + 0x10 + lVar25) = 0;
        *(longlong *)(lVar17 + 0x18 + lVar25) = param_2[10];
      }
    }
    else {
      if (lVar20 < (int)param_1[0x28]) {
        local_1e0 = *(byte *)(param_1[0x27] + lVar20);
      }
      else {
        local_1e0 = 0;
      }
      local_278 = *param_2;
      local_270 = 0;
      local_268 = 1;
      local_264 = 0xffffffffffffffff;
      uStack_238 = 0;
      uStack_234 = 0;
      uStack_230 = 0;
      uStack_240 = 0;
      uStack_23f = 0;
      local_258 = 0;
      uStack_250 = 0;
      local_1e8 = 0;
      local_1f8 = 0;
      lStack_1f0 = 0;
      local_208 = 0;
      lStack_200 = 0;
      local_218 = 0;
      lStack_210 = 0;
      local_228 = 0;
      lStack_220 = 0;
      local_1e0 = local_1e0 | *(byte *)(param_2 + 0x13);
      lVar17 = *(longlong *)(local_278 + 0x6a0);
      uVar19 = *(uint *)(lVar17 + 8);
      local_248 = lVar17;
      if ((int)uVar19 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(uVar19);
      }
      if (uVar19 == 0) {
        iVar12 = 0;
        iVar13 = 0;
      }
      else {
        FUN_144717690(&local_258,uVar19);
        iVar13 = (int)uStack_250;
        iVar12 = uStack_250._4_4_;
      }
      uStack_250 = CONCAT44(uStack_250._4_4_,iVar13 + uVar19);
      if ((uint)(iVar12 - iVar13) < uVar19) {
        FUN_1406600da(&local_258);
      }
      param_1 = local_2d8;
      local_228 = lVar17 + 0xb0;
      local_264 = *(undefined8 *)((longlong)param_2 + 0x14);
      lVar17 = local_2d8[5];
      if (*(longlong *)(lVar17 + lVar37) == 0) {
        if (local_1e0 == 1) {
          FUN_1433edd58(&local_258);
        }
        else {
          FUN_1448859f0(&local_258,local_248);
        }
      }
      else {
        local_264 = CONCAT44(*(undefined4 *)((longlong)param_2 + 0x14),
                             *(undefined4 *)(lVar17 + 8 + lVar37));
        (**(code **)(**(longlong **)(lVar17 + lVar37) + 0x28))
                  (*(longlong **)(lVar17 + lVar37),&local_278);
      }
      if ((undefined8 *)(local_1b8 + lVar21) != &local_258) {
        *(undefined8 *)(local_1b8 + lVar21) = local_258;
        local_258 = 0;
        *(undefined4 *)(local_1b8 + 8 + lVar21) = (undefined4)uStack_250;
        *(int *)(local_1b8 + 0xc + lVar21) = uStack_250._4_4_;
        uStack_250 = 0;
        *(longlong *)(local_1b8 + 0x10 + lVar21) = local_248;
        local_248 = 0;
      }
      if ((undefined1 *)(local_1c8 + lVar25) != &uStack_240) {
        *(ulonglong *)(local_1c8 + lVar25) = CONCAT71(uStack_23f,uStack_240);
        uStack_240 = 0;
        uStack_23f = 0;
        *(undefined4 *)(local_1c8 + 8 + lVar25) = uStack_238;
        *(undefined4 *)(local_1c8 + 0xc + lVar25) = uStack_234;
        uStack_238 = 0;
        uStack_234 = 0;
      }
      *(undefined1 *)(local_1c8 + 0x10 + lVar25) = uStack_230;
      uStack_230 = 0;
      FUN_1447e1642(local_1d8 + lVar35,&lStack_220);
      if (lStack_1f0 != 0) {
        FUN_1400020a8();
      }
      FUN_144716785(lStack_200,local_1f8 & 0xffffffff);
      if (lStack_200 != 0) {
        FUN_1400020a8();
      }
      FUN_144716758(lStack_210,local_208 & 0xffffffff);
      if (lStack_210 != 0) {
        FUN_1400020a8();
      }
      FUN_144716727(lStack_220);
      if (lStack_220 != 0) {
        FUN_1400020a8();
      }
    }
    lVar20 = lVar20 + 1;
    lVar25 = lVar25 + 0x20;
    lVar21 = lVar21 + 0x18;
    lVar35 = lVar35 + 0x40;
    lVar37 = lVar37 + 0x10;
  } while (local_2c8 != lVar25);
  if (local_158 == '\0') {
    FUN_144716af1(CONCAT71(uStack_167,uStack_168),local_160);
    local_158 = '\x01';
  }
  if ((char)param_1[0x1c] == '\0') {
    FUN_1432899fe(param_1[0x1a],(int)param_1[0x1b]);
    *(undefined1 *)(param_1 + 0x1c) = 1;
  }
  iVar12 = (int)param_1[0x1b];
  if (0 < iVar12 && 0 < local_160) {
    uVar19 = 0;
    iVar24 = 0;
    iVar13 = local_160;
    do {
      lVar20 = *(longlong *)(param_1[0x1a] + (longlong)iVar24 * 0x14);
      lVar21 = *(longlong *)(CONCAT71(uStack_167,uStack_168) + (longlong)(int)uVar19 * 0x10);
      if (lVar21 == lVar20) {
        if (*(int *)(param_1[0x1a] + (longlong)iVar24 * 0x14 + 0x10) == -1) {
          uVar19 = uVar19 + 1;
        }
        else {
          if (~uVar19 + iVar13 != 0) {
            pvVar18 = (void *)(CONCAT71(uStack_167,uStack_168) + (longlong)(int)uVar19 * 0x10);
            memmove(pvVar18,(void *)((longlong)pvVar18 + 0x10),
                    (longlong)(int)(~uVar19 + iVar13) << 4);
            iVar12 = (int)param_1[0x1b];
            iVar13 = local_160;
          }
          iVar13 = iVar13 + -1;
          local_160 = iVar13;
        }
LAB_143ca6e4e:
        iVar24 = iVar24 + 1;
      }
      else {
        iVar30 = (int)lVar21 - (int)lVar20;
        if (iVar30 == 0) {
          iVar30 = (int)((ulonglong)lVar21 >> 0x20) - (int)((ulonglong)lVar20 >> 0x20);
        }
        if (-1 < iVar30) goto LAB_143ca6e4e;
        uVar19 = uVar19 + 1;
      }
    } while (((int)uVar19 < iVar13) && (iVar24 < iVar12));
  }
  uVar22 = 0;
  do {
    plVar28 = (longlong *)(local_1c8 + uVar22 * 0x20);
    if (*(char *)(local_1c8 + 0x10 + uVar22 * 0x20) == '\0') {
      FUN_144716af1(*plVar28,(int)plVar28[1]);
      *(undefined1 *)(plVar28 + 2) = 1;
      iVar12 = (int)param_1[0x1b];
    }
    if ((char)param_1[0x1c] == '\0') {
      FUN_1432899fe(param_1[0x1a]);
      *(undefined1 *)(param_1 + 0x1c) = 1;
      iVar12 = (int)param_1[0x1b];
    }
    iVar13 = (int)plVar28[1];
    if ((0 < iVar13) && (0 < iVar12)) {
      uVar19 = 0;
      iVar24 = 0;
      do {
        lVar20 = *(longlong *)(param_1[0x1a] + (longlong)iVar24 * 0x14);
        lVar21 = *(longlong *)(*plVar28 + (longlong)(int)uVar19 * 0x10);
        if (lVar21 == lVar20) {
          uVar39 = (ulonglong)*(uint *)(param_1[0x1a] + (longlong)iVar24 * 0x14 + 0x10);
          if (uVar22 == uVar39 || uVar39 == 0xffffffff) {
            uVar19 = uVar19 + 1;
LAB_143ca6f65:
            iVar24 = iVar24 + 1;
          }
          else {
            if (~uVar19 + iVar13 != 0) {
              pvVar18 = (void *)(*plVar28 + (longlong)(int)uVar19 * 0x10);
              memmove(pvVar18,(void *)((longlong)pvVar18 + 0x10),
                      (longlong)(int)(~uVar19 + iVar13) << 4);
              iVar13 = (int)plVar28[1];
            }
            iVar13 = iVar13 + -1;
            *(int *)(plVar28 + 1) = iVar13;
            iVar24 = iVar24 + 1;
            iVar12 = (int)param_1[0x1b];
          }
        }
        else {
          iVar30 = (int)lVar21 - (int)lVar20;
          if (iVar30 == 0) {
            iVar30 = (int)((ulonglong)lVar21 >> 0x20) - (int)((ulonglong)lVar20 >> 0x20);
          }
          if (-1 < iVar30) goto LAB_143ca6f65;
          uVar19 = uVar19 + 1;
        }
      } while (((int)uVar19 < iVar13) && (iVar24 < iVar12));
    }
    pvVar18 = local_180;
    uVar22 = uVar22 + 1;
  } while (uVar22 != local_298);
  plVar28 = param_2 + 4;
  local_2d0 = plVar28;
  if (&local_1a0 == param_2) {
    param_2[6] = local_170;
    uVar19 = (uint)uStack_1b0;
    if ((uint)uStack_1b0 == 0) goto LAB_143ca83de;
  }
  else {
    iVar12 = (int)uStack_178;
    lVar20 = (longlong)(int)uStack_178;
    *(int *)(param_2 + 5) = (int)uStack_178;
    if ((int)uStack_178 == 0 && *(int *)((longlong)param_2 + 0x2c) == 0) {
      *(undefined4 *)((longlong)param_2 + 0x2c) = 0;
    }
    else {
      FUN_14470ea6a(plVar28,uStack_178 & 0xffffffff);
      if (iVar12 != 0) {
        memcpy((void *)*plVar28,pvVar18,lVar20 * 0x60);
      }
    }
    pvVar18 = local_180;
    param_2[6] = local_170;
    uVar19 = (uint)uStack_1b0;
    if ((uint)uStack_1b0 == 0) {
      iVar12 = (int)uStack_178;
      lVar20 = (longlong)(int)uStack_178;
      *(int *)(param_2 + 5) = (int)uStack_178;
      if ((int)uStack_178 == 0 && *(int *)((longlong)param_2 + 0x2c) == 0) {
        *(undefined4 *)((longlong)param_2 + 0x2c) = 0;
      }
      else {
        FUN_14470ea6a(local_2d0,uStack_178 & 0xffffffff);
        if (iVar12 != 0) {
          memcpy((void *)*local_2d0,pvVar18,lVar20 * 0x60);
        }
      }
LAB_143ca83de:
      param_2[6] = local_170;
      goto LAB_143ca7fa3;
    }
  }
  uVar22 = uStack_178;
  uVar36 = (ulonglong)uVar19;
  local_2c0 = local_170;
  iVar12 = (int)uStack_178;
  uVar39 = uStack_178 & 0xffffffff;
  dwTlsIndex = DAT_14c763874;
  if (DAT_14c763874 == 0xffffffff) {
    dwTlsIndex = TlsAlloc();
    DVar14 = 0xffffffff;
    LOCK();
    bVar38 = DAT_14c763874 != 0xffffffff;
    DVar11 = dwTlsIndex;
    if (bVar38) {
      DVar14 = DAT_14c763874;
      DVar11 = DAT_14c763874;
    }
    DAT_14c763874 = DVar11;
    UNLOCK();
    param_1 = local_2d8;
    if (bVar38) {
      TlsFree(dwTlsIndex);
      param_1 = local_2d8;
      dwTlsIndex = DVar14;
    }
  }
  local_2e0 = TlsGetValue(dwTlsIndex);
  if (local_2e0 == (undefined8 *)0x0) {
    local_2e0 = (undefined8 *)FUN_14001cc68(0x90,0x10);
    *local_2e0 = 0;
    local_2e0[1] = 0;
    DVar14 = GetCurrentThreadId();
    *(DWORD *)(local_2e0 + 1) = DVar14;
    *local_2e0 = &PTR_FUN_14b3ec898;
    local_2e0[2] = 0;
    local_2e0[3] = 0;
    local_2e0[4] = 0;
    local_2e0[5] = 0;
    local_2e0[6] = 0;
    local_2e0[7] = 0;
    local_2e0[8] = 0;
    local_2e0[9] = 0;
    local_2e0[10] = 0;
    local_2e0[0xb] = 0;
    local_2e0[0xc] = 0;
    local_2e0[0xd] = 0;
    local_2e0[0xe] = 0;
    local_2e0[0xf] = 0;
    local_2e0[0x10] = 0;
    local_2e0[0x11] = 0;
    FUN_140fddf04(local_2e0);
    TlsSetValue(dwTlsIndex,local_2e0);
  }
  local_2b8 = local_2e0 + 2;
  iVar13 = *(int *)(local_2e0 + 3);
  if (iVar13 < iVar12) {
    *(int *)(local_2e0 + 3) = iVar12;
    if ((uint)(*(int *)((longlong)local_2e0 + 0x1c) - iVar13) < (uint)(iVar12 - iVar13)) {
      FUN_140e16be0(local_2b8);
    }
  }
  else {
    if (iVar12 < 0) goto LAB_143ca8337;
    if (iVar12 < iVar13) {
      *(int *)(local_2e0 + 3) = iVar12;
    }
  }
  local_2a8 = local_2e0 + 4;
  iVar13 = *(int *)(local_2e0 + 5);
  if (iVar13 < iVar12) {
    *(int *)(local_2e0 + 5) = iVar12;
    if ((uint)(*(int *)((longlong)local_2e0 + 0x2c) - iVar13) < (uint)(iVar12 - iVar13)) {
      FUN_140e16be0(local_2a8);
    }
  }
  else {
    if (iVar12 < 0) goto LAB_143ca8337;
    if (iVar12 < iVar13) {
      *(int *)(local_2e0 + 5) = iVar12;
    }
  }
  local_2a0 = local_2e0 + 6;
  iVar13 = *(int *)(local_2e0 + 7);
  if (iVar13 < iVar12) {
    *(int *)(local_2e0 + 7) = iVar12;
    if ((uint)(*(int *)((longlong)local_2e0 + 0x3c) - iVar13) < (uint)(iVar12 - iVar13)) {
      FUN_140e16be0(local_2a0);
    }
  }
  else {
    if (iVar12 < 0) {
LAB_143ca8337:
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar39);
    }
    if (iVar12 < iVar13) {
      *(int *)(local_2e0 + 7) = iVar12;
    }
  }
  local_280 = local_2e0 + 8;
  FUN_1401211f6(local_280,uVar22 & 0xffffffff,0);
  plVar28 = local_2e0 + 0xc;
  iVar12 = *(int *)(local_2e0 + 0xd);
  local_290 = uVar36;
  if (iVar12 < (int)uVar19) {
    *(uint *)(local_2e0 + 0xd) = uVar19;
    if ((uint)(*(int *)((longlong)local_2e0 + 0x6c) - iVar12) < uVar19 - iVar12) {
      FUN_14475e4ac(plVar28);
    }
    memset((void *)((longlong)iVar12 * 4 + *plVar28),0,(longlong)(int)(uVar19 - iVar12) << 2);
  }
  else {
    if ((int)uVar19 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar36);
    }
    if ((int)uVar19 < iVar12) {
      *(uint *)(local_2e0 + 0xd) = uVar19;
    }
  }
  local_298 = uStack_178 & 0xffffffff;
  puVar33 = local_2e0;
  local_2d8 = plVar28;
  if (local_298 != 0) {
    local_2b0 = local_2e0 + 10;
    uVar22 = 0;
    plVar32 = local_2d0;
    lVar20 = local_2c0;
    do {
      lVar35 = (longlong)*(int *)(param_1[0x18] + uVar22 * 0xc);
      lVar25 = (longlong)(int)uVar22;
      iVar12 = *(int *)(*(longlong *)(lVar20 + 0x90) + lVar25 * 4);
      lVar21 = lVar25 * 0xc;
      fVar77 = *(float *)(param_1[0x18] + 4 + lVar21);
      if (1.0 <= fVar77) {
        fVar77 = 1.0;
      }
      if (fVar77 <= 0.0) {
        fVar77 = 0.0;
      }
      fVar4 = *(float *)(*plVar28 + lVar35 * 4);
      if (fVar4 <= fVar77) {
        fVar4 = fVar77;
      }
      *(float *)(*plVar28 + lVar35 * 4) = fVar4;
      cVar5 = *(char *)(param_1[0x18] + 8 + lVar21);
      cVar6 = *(char *)(param_1[0x18] + 9 + lVar21);
      if (cVar6 == '\x01') {
        uVar19 = *(uint *)((longlong)puVar33 + 0x5c);
        iVar13 = 0;
        if ((int)uVar19 < 0) {
          *(undefined4 *)(puVar33 + 0xb) = 0;
          FUN_1447d6d9c(local_2b0,0);
          iVar13 = *(int *)(local_2e0 + 0xb);
          uVar19 = *(uint *)((longlong)local_2e0 + 0x5c);
          plVar28 = local_2d8;
          plVar32 = local_2d0;
          puVar33 = local_2e0;
          lVar20 = local_2c0;
        }
        *(uint *)(puVar33 + 0xb) = iVar13 + 1U;
        if (uVar19 < iVar13 + 1U) {
          FUN_1408f8cfa(local_2b0,iVar13);
          plVar28 = local_2d8;
          plVar32 = local_2d0;
          puVar33 = local_2e0;
          lVar20 = local_2c0;
        }
        *(int *)(puVar33[10] + (longlong)iVar13 * 4) = (int)uVar22;
        iVar13 = *(int *)(puVar33 + 0xb);
        *(uint *)(puVar33 + 0xb) = iVar13 + 1U;
        plVar29 = plVar28;
        if (*(uint *)((longlong)puVar33 + 0x5c) < iVar13 + 1U) {
          FUN_1408f8cfa(local_2b0,iVar13);
          plVar29 = local_2d8;
          plVar32 = local_2d0;
          puVar33 = local_2e0;
          lVar20 = local_2c0;
        }
        *(int *)(*local_2b0 + (longlong)iVar13 * 4) = iVar12;
        local_2c8 = CONCAT44(local_2c8._4_4_,iVar12);
        plVar28 = local_2d8;
        plVar16 = local_2b8;
        while ((local_2d8 = plVar28, local_2b8 = plVar16, iVar12 != -1 &&
               (*(char *)(*local_280 + (longlong)iVar12) == '\0'))) {
          iVar12 = *(int *)(*(longlong *)(lVar20 + 0x90) + (longlong)iVar12 * 4);
          iVar13 = *(int *)(puVar33 + 0xb);
          *(uint *)(puVar33 + 0xb) = iVar13 + 1U;
          if (*(uint *)((longlong)puVar33 + 0x5c) < iVar13 + 1U) {
            FUN_1408f8cfa(local_2b0,iVar13);
            plVar29 = local_2d8;
            plVar32 = local_2d0;
            puVar33 = local_2e0;
            lVar20 = local_2c0;
          }
          *(int *)(*local_2b0 + (longlong)iVar13 * 4) = iVar12;
          plVar28 = local_2d8;
          plVar16 = local_2b8;
        }
        if (1 < (longlong)*(int *)(puVar33 + 0xb)) {
          lVar21 = (longlong)*(int *)(puVar33 + 0xb) + -2;
          while( true ) {
            lVar37 = *local_2b0;
            lVar20 = (longlong)*(int *)(lVar37 + 4 + lVar21 * 4);
            if (lVar20 == -1) {
              lVar17 = (longlong)*(int *)(lVar37 + lVar21 * 4);
              lVar20 = lVar17 * 0x60;
              puVar33 = (undefined8 *)((longlong)local_180 + lVar20);
              uVar8 = puVar33[1];
              puVar26 = (undefined8 *)((longlong)local_180 + lVar20 + 0x10);
              uVar9 = *puVar26;
              uVar10 = puVar26[1];
              lVar20 = *plVar16;
              lVar17 = lVar17 * 0x20;
              puVar26 = (undefined8 *)(lVar20 + lVar17);
              *puVar26 = *puVar33;
              puVar26[1] = uVar8;
              puVar33 = (undefined8 *)(lVar20 + 0x10 + lVar17);
              *puVar33 = uVar9;
              puVar33[1] = uVar10;
              lVar31 = (longlong)*(int *)(lVar37 + lVar21 * 4);
              lVar20 = *(longlong *)(local_1b8 + lVar35 * 0x18);
              auVar62 = *(undefined1 (*) [16])(lVar20 + lVar31 * 0x60);
              pdVar15 = (double *)(lVar20 + 0x10 + lVar31 * 0x60);
              dVar55 = *pdVar15;
              dVar59 = pdVar15[1];
              lVar17 = *local_2a0;
            }
            else {
              lVar17 = *plVar16;
              lVar20 = lVar20 * 0x20;
              lVar31 = (longlong)*(int *)(lVar37 + lVar21 * 4);
              lVar34 = lVar31 * 0x60;
              pdVar15 = (double *)((longlong)local_180 + lVar34);
              dVar49 = *pdVar15;
              dVar53 = pdVar15[1];
              pdVar15 = (double *)((longlong)local_180 + lVar34 + 0x10);
              dVar54 = *pdVar15;
              dVar58 = pdVar15[1];
              pdVar15 = (double *)(lVar17 + 0x18 + lVar20);
              dVar59 = *pdVar15;
              dVar55 = *pdVar15;
              dVar66 = *(double *)(lVar17 + lVar20);
              dVar60 = *(double *)(lVar17 + lVar20);
              pdVar15 = (double *)(lVar17 + 8 + lVar20);
              dVar78 = *pdVar15;
              dVar82 = *pdVar15;
              pdVar15 = (double *)(lVar17 + 0x10 + lVar20);
              dVar40 = *pdVar15;
              dVar41 = *pdVar15;
              lVar31 = lVar31 * 0x20;
              pdVar15 = (double *)(lVar17 + lVar31);
              *pdVar15 = dVar53 * dVar40 * -1.0 +
                         dVar54 * dVar78 + dVar58 * dVar66 * 1.0 + dVar49 * dVar59;
              pdVar15[1] = dVar49 * dVar41 * 1.0 +
                           dVar58 * dVar82 + dVar54 * dVar60 * -1.0 + dVar53 * dVar55;
              pdVar15 = (double *)(lVar17 + 0x10 + lVar31);
              *pdVar15 = dVar58 * dVar40 * 1.0 +
                         ((dVar66 * dVar53 * 1.0 + dVar59 * dVar54) - dVar49 * dVar78);
              pdVar15[1] = dVar54 * dVar41 * -1.0 +
                           ((dVar60 * dVar49 * -1.0 + dVar55 * dVar58) - dVar53 * dVar82);
              lVar17 = *local_2a0;
              lVar31 = (longlong)*(int *)(lVar37 + lVar21 * 4);
              lVar34 = *(longlong *)(local_1b8 + lVar35 * 0x18);
              pdVar15 = (double *)(lVar34 + lVar31 * 0x60);
              dVar49 = *pdVar15;
              dVar53 = pdVar15[1];
              pdVar15 = (double *)(lVar34 + 0x10 + lVar31 * 0x60);
              dVar54 = *pdVar15;
              dVar58 = pdVar15[1];
              pdVar15 = (double *)(lVar17 + 0x18 + lVar20);
              dVar55 = *pdVar15;
              dVar59 = *pdVar15;
              dVar60 = *(double *)(lVar17 + lVar20);
              dVar66 = *(double *)(lVar17 + lVar20);
              pdVar15 = (double *)(lVar17 + 8 + lVar20);
              dVar78 = *pdVar15;
              dVar82 = *pdVar15;
              pdVar15 = (double *)(lVar17 + 0x10 + lVar20);
              dVar41 = *pdVar15;
              dVar40 = *pdVar15;
              auVar62._0_8_ =
                   dVar53 * dVar41 * -1.0 +
                   dVar54 * dVar78 + dVar58 * dVar60 * 1.0 + dVar49 * dVar55;
              auVar62._8_8_ =
                   dVar49 * dVar40 * 1.0 +
                   dVar58 * dVar82 + dVar54 * dVar66 * -1.0 + dVar53 * dVar59;
              dVar55 = dVar58 * dVar41 * 1.0 +
                       ((dVar60 * dVar53 * 1.0 + dVar55 * dVar54) - dVar49 * dVar78);
              dVar59 = dVar54 * dVar40 * -1.0 +
                       ((dVar66 * dVar49 * -1.0 + dVar59 * dVar58) - dVar53 * dVar82);
            }
            lVar20 = lVar17 + lVar31 * 0x20;
            *(undefined1 (*) [16])(lVar17 + lVar31 * 0x20) = auVar62;
            *(double *)(lVar20 + 0x10) = dVar55;
            *(double *)(lVar20 + 0x18) = dVar59;
            *(undefined1 *)(*local_280 + (longlong)*(int *)(lVar37 + lVar21 * 4)) = 1;
            plVar29 = plVar28;
            plVar32 = local_2d0;
            puVar33 = local_2e0;
            lVar20 = local_2c0;
            if (lVar21 == 0) break;
            lVar37 = (longlong)*(int *)(lVar37 + lVar21 * 4) * 0x20;
            lVar20 = *local_2a8;
            puVar33 = (undefined8 *)(*plVar16 + lVar37);
            uVar8 = *puVar33;
            uVar9 = puVar33[1];
            puVar33 = (undefined8 *)(*plVar16 + 0x10 + lVar37);
            uVar10 = puVar33[1];
            puVar26 = (undefined8 *)(lVar20 + 0x10 + lVar37);
            *puVar26 = *puVar33;
            puVar26[1] = uVar10;
            puVar33 = (undefined8 *)(lVar20 + lVar37);
            *puVar33 = uVar8;
            puVar33[1] = uVar9;
            lVar21 = lVar21 + -1;
          }
        }
        pauVar23 = (undefined1 (*) [16])((longlong)local_180 + lVar25 * 0x60);
        iVar12 = (int)local_2c8;
        if (cVar5 != '\0') {
          lVar21 = lVar25 * 0x60;
          puVar26 = (undefined8 *)(*plVar32 + lVar21);
          for (lVar37 = 0xc; lVar37 != 0; lVar37 = lVar37 + -1) {
            *puVar26 = *(undefined8 *)*pauVar23;
            pauVar23 = (undefined1 (*) [16])(*pauVar23 + 8);
            puVar26 = puVar26 + 1;
          }
          lVar37 = *plVar32;
          puVar26 = (undefined8 *)(*plVar16 + lVar25 * 0x20);
          uVar8 = puVar26[1];
          puVar1 = (undefined8 *)(*plVar16 + 0x10 + lVar25 * 0x20);
          uVar9 = *puVar1;
          uVar10 = puVar1[1];
          puVar1 = (undefined8 *)(lVar37 + lVar21);
          *puVar1 = *puVar26;
          puVar1[1] = uVar8;
          puVar26 = (undefined8 *)(lVar37 + 0x10 + lVar21);
          *puVar26 = uVar9;
          puVar26[1] = uVar10;
          goto LAB_143ca7262;
        }
        if (1e-05 < fVar77) goto LAB_143ca777a;
        puVar26 = (undefined8 *)(lVar25 * 0x60 + *plVar32);
        for (lVar21 = 0xc; lVar21 != 0; lVar21 = lVar21 + -1) {
          *puVar26 = *(undefined8 *)*pauVar23;
          pauVar23 = (undefined1 (*) [16])(*pauVar23 + 8);
          puVar26 = puVar26 + 1;
        }
LAB_143ca77c6:
        lVar35 = lVar25 * 0x20;
        lVar21 = *local_2a8;
        puVar26 = (undefined8 *)(*plVar16 + lVar35);
        uVar8 = *puVar26;
        uVar9 = puVar26[1];
        *(undefined1 (*) [16])(lVar21 + 0x10 + lVar35) =
             *(undefined1 (*) [16])(*plVar16 + 0x10 + lVar35);
        puVar26 = (undefined8 *)(lVar21 + lVar35);
        *puVar26 = uVar8;
        puVar26[1] = uVar9;
        plVar28 = plVar29;
LAB_143ca77ee:
        if ((int)local_2c8 != -1) {
          lVar21 = *local_2a8;
          lVar35 = (longlong)(int)local_2c8 * 0x20;
          pdVar15 = (double *)(lVar21 + 0x10 + lVar35);
          dVar54 = *pdVar15 * -1.0;
          dVar58 = pdVar15[1] * 1.0;
          pdVar15 = (double *)(lVar21 + lVar25 * 0x20);
          dVar78 = *pdVar15;
          dVar82 = pdVar15[1];
          pdVar15 = (double *)(lVar21 + 0x10 + lVar25 * 0x20);
          dVar40 = *pdVar15;
          dVar41 = pdVar15[1];
          pdVar15 = (double *)(lVar21 + 8 + lVar35);
          dVar55 = *pdVar15;
          dVar59 = *pdVar15;
          dVar66 = *(double *)(lVar21 + lVar35);
          dVar60 = *(double *)(lVar21 + lVar35);
          dVar49 = dVar82 * dVar54 * -1.0 +
                   ((dVar78 * dVar58 - dVar66 * dVar41 * 1.0) - dVar40 * dVar55);
          dVar53 = dVar78 * dVar54 * 1.0 +
                   ((dVar82 * dVar58 - dVar60 * dVar40 * -1.0) - dVar41 * dVar59);
          dVar55 = dVar41 * dVar54 * 1.0 +
                   dVar55 * dVar78 + (dVar58 * dVar40 - dVar66 * dVar82 * 1.0);
          dVar59 = dVar40 * dVar54 * -1.0 +
                   dVar59 * dVar82 + (dVar58 * dVar41 - dVar60 * dVar78 * -1.0);
          dVar60 = dVar55 * dVar55 + dVar49 * dVar49;
          dVar66 = dVar59 * dVar59 + dVar53 * dVar53;
          auVar61._0_8_ = dVar60 + dVar66;
          auVar61._8_8_ = dVar60 + dVar66;
          auVar42._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar61._8_8_);
          auVar42._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar61._0_8_);
          auVar62 = sqrtpd(auVar61,auVar61);
          auVar62 = divpd(_DAT_149934d80,auVar62);
          auVar69._0_8_ = auVar62._0_8_ * dVar55;
          auVar69._8_8_ = auVar62._8_8_ * dVar59;
          auVar51._0_8_ =
               (ulonglong)(dVar49 * auVar62._0_8_) &
               -(ulonglong)(9.99999993922529e-09 <= auVar61._0_8_);
          auVar51._8_8_ =
               (ulonglong)(dVar53 * auVar62._8_8_) &
               -(ulonglong)(9.99999993922529e-09 <= auVar61._8_8_);
          auVar62 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar69,auVar42);
          lVar21 = *plVar32;
          *(undefined1 (*) [16])(lVar21 + lVar25 * 0x60) = auVar51;
          *(undefined1 (*) [16])(lVar21 + 0x10 + lVar25 * 0x60) = auVar62;
        }
      }
      else {
        lVar21 = lVar25 * 0x60;
        pauVar23 = (undefined1 (*) [16])((longlong)local_180 + lVar21);
        if (cVar5 == '\0') {
          plVar29 = plVar28;
          if (1e-05 < fVar77) {
LAB_143ca777a:
            lVar21 = lVar25 * 0x60;
            pdVar15 = (double *)(*(longlong *)(local_1b8 + lVar35 * 0x18) + lVar21);
            plVar28 = plVar29;
            if (fVar77 < 0.99999) {
              auVar62 = *pauVar23;
              auVar80 = pauVar23[1];
              dVar49 = (double)fVar77;
              dVar53 = (double)fVar77;
              dVar55 = auVar80._0_8_ * pdVar15[2] + auVar62._0_8_ * *pdVar15;
              dVar59 = auVar80._8_8_ * pdVar15[3] + auVar62._8_8_ * pdVar15[1];
              auVar43._8_8_ = -(ulonglong)(0.0 <= dVar55 + dVar59);
              auVar43._0_8_ = -(ulonglong)(0.0 <= dVar55 + dVar59);
              auVar56._0_8_ = 0.0 - auVar62._0_8_;
              auVar56._8_8_ = 0.0 - auVar62._8_8_;
              auVar62 = blendvpd(auVar56,auVar62,auVar43);
              dVar67 = 1.0 - dVar49;
              dVar74 = 1.0 - dVar53;
              auVar79._0_8_ = 0.0 - auVar80._0_8_;
              auVar79._8_8_ = 0.0 - auVar80._8_8_;
              auVar80 = blendvpd(auVar79,auVar80,auVar43);
              dVar55 = *(double *)pauVar23[3];
              dVar59 = *(double *)(pauVar23[3] + 8);
              auVar63._0_8_ = pdVar15[4] * dVar49 + *(double *)pauVar23[2] * dVar67;
              auVar63._8_8_ = pdVar15[5] * dVar53 + *(double *)(pauVar23[2] + 8) * dVar74;
              dVar54 = auVar62._0_8_ * dVar67 + *pdVar15 * dVar49;
              dVar58 = auVar62._8_8_ * dVar74 + pdVar15[1] * dVar53;
              dVar78 = auVar80._0_8_ * dVar67 + pdVar15[2] * dVar49;
              dVar82 = auVar80._8_8_ * dVar74 + pdVar15[3] * dVar53;
              dVar60 = dVar78 * dVar78 + dVar54 * dVar54;
              dVar66 = dVar82 * dVar82 + dVar58 * dVar58;
              auVar76._0_8_ = dVar60 + dVar66;
              auVar76._8_8_ = dVar60 + dVar66;
              auVar44._8_8_ = -(ulonglong)(1e-08 <= auVar76._8_8_);
              auVar44._0_8_ = -(ulonglong)(1e-08 <= auVar76._0_8_);
              auVar62 = sqrtpd(auVar76,auVar76);
              auVar80 = divpd(_DAT_149934d80,auVar62);
              auVar83._0_8_ = auVar80._0_8_ * dVar78;
              auVar83._8_8_ = auVar80._8_8_ * dVar82;
              auVar62 = blendvpd(_DAT_149935300,auVar83,auVar44);
              dVar60 = pdVar15[6];
              dVar66 = pdVar15[7];
              dVar78 = *(double *)pauVar23[5];
              dVar82 = *(double *)(pauVar23[5] + 8);
              auVar70._0_8_ = pdVar15[8] * dVar49 + *(double *)pauVar23[4] * dVar67;
              auVar70._8_8_ = pdVar15[9] * dVar53 + *(double *)(pauVar23[4] + 8) * dVar74;
              dVar40 = pdVar15[10];
              dVar41 = pdVar15[0xb];
              auVar57._0_8_ =
                   (ulonglong)(dVar54 * auVar80._0_8_) & -(ulonglong)(1e-08 <= auVar76._0_8_);
              auVar57._8_8_ =
                   (ulonglong)(dVar58 * auVar80._8_8_) & -(ulonglong)(1e-08 <= auVar76._8_8_);
              lVar35 = *plVar32;
              *(undefined1 (*) [16])(lVar35 + lVar21) = auVar57;
              *(undefined1 (*) [16])(lVar35 + 0x10 + lVar21) = auVar62;
              *(undefined1 (*) [16])(lVar35 + 0x20 + lVar21) = auVar63;
              pdVar15 = (double *)(lVar35 + 0x30 + lVar21);
              *pdVar15 = dVar60 * dVar49 + dVar55 * dVar67;
              pdVar15[1] = dVar66 * dVar53 + dVar59 * dVar74;
              *(undefined1 (*) [16])(lVar35 + 0x40 + lVar21) = auVar70;
              pdVar15 = (double *)(lVar35 + 0x50 + lVar21);
              *pdVar15 = dVar40 * dVar49 + dVar78 * dVar67;
              pdVar15[1] = dVar41 * dVar53 + dVar82 * dVar74;
              if (cVar6 != '\0') {
                local_2c8 = CONCAT44(local_2c8._4_4_,iVar12);
                dVar40 = (double)fVar77;
                lVar21 = *local_2a0;
                lVar17 = lVar25 * 0x20;
                lVar35 = *local_2b8;
                dVar55 = ((double *)(lVar21 + lVar17))[1];
                pdVar15 = (double *)(lVar21 + 0x10 + lVar17);
                dVar59 = *pdVar15;
                dVar60 = pdVar15[1];
                uVar39 = -(ulonglong)
                          (0.0 <= *(double *)(lVar35 + 0x18 + lVar17) *
                                  *(double *)(lVar21 + 0x18 + lVar17) +
                                  *(double *)(lVar35 + 0x10 + lVar17) *
                                  *(double *)(lVar21 + 0x10 + lVar17) +
                                  *(double *)(lVar35 + lVar17) * *(double *)(lVar21 + lVar17) +
                                  *(double *)(lVar35 + 8 + lVar17) *
                                  *(double *)(lVar21 + 8 + lVar17));
                dVar41 = (double)(~uVar39 & (ulonglong)-(1.0 - dVar40) |
                                 uVar39 & (ulonglong)(1.0 - dVar40));
                dVar66 = ((double *)(lVar35 + lVar17))[1];
                pdVar15 = (double *)(lVar35 + 0x10 + lVar17);
                dVar78 = *pdVar15;
                dVar82 = pdVar15[1];
                lVar37 = *local_2a8;
                pdVar15 = (double *)(lVar37 + lVar17);
                *pdVar15 = *(double *)(lVar35 + lVar17) * dVar41 +
                           *(double *)(lVar21 + lVar17) * dVar40;
                pdVar15[1] = dVar66 * dVar41 + dVar55 * dVar40;
                pdVar15 = (double *)(lVar37 + 0x10 + lVar17);
                *pdVar15 = dVar41 * dVar78 + dVar40 * dVar59;
                pdVar15[1] = dVar41 * dVar82 + dVar40 * dVar60;
                lVar21 = *local_2a8;
                dVar60 = *(double *)(lVar21 + lVar17);
                dVar66 = ((double *)(lVar21 + lVar17))[1];
                auVar62 = *(undefined1 (*) [16])(lVar21 + 0x10 + lVar17);
                dVar55 = auVar62._0_8_;
                dVar59 = auVar62._8_8_;
                dVar78 = dVar55 * dVar55 + dVar60 * dVar60;
                dVar82 = dVar59 * dVar59 + dVar66 * dVar66;
                auVar64._0_8_ = dVar78 + dVar82;
                auVar64._8_8_ = dVar78 + dVar82;
                auVar45._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar64._8_8_);
                auVar45._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar64._0_8_);
                auVar62 = sqrtpd(auVar64,auVar64);
                auVar62 = divpd(_DAT_149934d80,auVar62);
                auVar71._0_8_ = auVar62._0_8_ * dVar55;
                auVar71._8_8_ = auVar62._8_8_ * dVar59;
                *(ulonglong *)(lVar21 + lVar17) =
                     (ulonglong)(dVar60 * auVar62._0_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar64._0_8_);
                ((ulonglong *)(lVar21 + lVar17))[1] =
                     (ulonglong)(dVar66 * auVar62._8_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar64._8_8_);
                auVar62 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar71,auVar45);
                *(undefined1 (*) [16])(lVar21 + 0x10 + lVar17) = auVar62;
                goto LAB_143ca77ee;
              }
            }
            else {
              pdVar27 = (double *)(lVar21 + *plVar32);
              for (lVar35 = 0xc; lVar35 != 0; lVar35 = lVar35 + -1) {
                *pdVar27 = *pdVar15;
                pdVar15 = pdVar15 + 1;
                pdVar27 = pdVar27 + 1;
              }
              if (cVar6 != '\0') {
                local_2c8 = CONCAT44(local_2c8._4_4_,iVar12);
                plVar16 = local_2a0;
                goto LAB_143ca77c6;
              }
            }
          }
          else {
            puVar26 = (undefined8 *)(lVar21 + *plVar32);
            for (lVar25 = 0xc; lVar25 != 0; lVar25 = lVar25 + -1) {
              *puVar26 = *(undefined8 *)*pauVar23;
              pauVar23 = (undefined1 (*) [16])(*pauVar23 + 8);
              puVar26 = puVar26 + 1;
            }
          }
        }
        else {
          puVar26 = (undefined8 *)(lVar21 + *plVar32);
          for (lVar37 = 0xc; lVar37 != 0; lVar37 = lVar37 + -1) {
            *puVar26 = *(undefined8 *)*pauVar23;
            pauVar23 = (undefined1 (*) [16])(*pauVar23 + 8);
            puVar26 = puVar26 + 1;
          }
LAB_143ca7262:
          local_2c8 = CONCAT44(local_2c8._4_4_,iVar12);
          dVar55 = (double)fVar77;
          dVar59 = (double)fVar77;
          if (fVar77 < 0.99999) {
            lVar21 = *(longlong *)(local_1b8 + lVar35 * 0x18);
            lVar37 = lVar25 * 0x60;
            dVar78 = (double)DAT_149934d80 - dVar55;
            dVar82 = DAT_149934d80._8_8_ - dVar59;
            pdVar15 = (double *)(lVar21 + 0x10 + lVar37);
            dVar60 = *pdVar15;
            dVar66 = pdVar15[1];
            auVar46._8_8_ = -(ulonglong)(0.0 <= dVar66);
            auVar46._0_8_ = -(ulonglong)(0.0 <= dVar60);
            auVar62 = blendvpd(ZEXT816(0xbff0000000000000) << 0x40,
                               ZEXT816(0x3ff0000000000000) << 0x40,auVar46);
            dVar49 = dVar78 * 0.0;
            dVar53 = dVar82 * 0.0;
            dVar40 = auVar62._0_8_ * dVar78 + dVar60 * dVar55;
            dVar82 = auVar62._8_8_ * dVar82 + dVar66 * dVar59;
            dVar60 = *(double *)(lVar21 + lVar37) * dVar55 + dVar49;
            dVar67 = ((double *)(lVar21 + lVar37))[1] * dVar59 + dVar53;
            dVar66 = dVar40 * dVar40 + dVar60 * dVar60;
            dVar78 = dVar82 * dVar82 + dVar67 * dVar67;
            auVar75._0_8_ = dVar66 + dVar78;
            auVar75._8_8_ = dVar66 + dVar78;
            lVar35 = *plVar32;
            auVar47._8_8_ = -(ulonglong)(1e-08 <= auVar75._8_8_);
            auVar47._0_8_ = -(ulonglong)(1e-08 <= auVar75._0_8_);
            auVar62 = sqrtpd(auVar75,auVar75);
            auVar80 = divpd(_DAT_149934d80,auVar62);
            auVar81._0_8_ = auVar80._0_8_ * dVar40;
            auVar81._8_8_ = auVar80._8_8_ * dVar82;
            auVar62 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar81,auVar47);
            dVar41 = auVar62._0_8_;
            dVar54 = auVar62._8_8_;
            dVar66 = *(double *)(lVar35 + lVar37);
            dVar78 = ((double *)(lVar35 + lVar37))[1];
            pdVar15 = (double *)(lVar35 + 0x10 + lVar37);
            dVar82 = *pdVar15;
            dVar40 = pdVar15[1];
            dVar58 = (double)((ulonglong)(dVar60 * auVar80._0_8_) &
                             -(ulonglong)(1e-08 <= auVar75._0_8_));
            dVar67 = (double)((ulonglong)(dVar67 * auVar80._8_8_) &
                             -(ulonglong)(1e-08 <= auVar75._8_8_));
            auVar72._8_4_ = SUB84(dVar67,0);
            auVar72._12_4_ = (undefined4)((ulonglong)dVar67 >> 0x20);
            auVar48._8_4_ = SUB84(dVar58,0);
            auVar48._0_8_ = dVar58;
            auVar48._12_4_ = (int)((ulonglong)dVar58 >> 0x20);
            auVar72._0_8_ = dVar67;
            dVar60 = dVar66 * dVar41 * 1.0 +
                     dVar40 * auVar72._8_8_ + dVar82 * auVar48._8_8_ * -1.0 + dVar78 * dVar54;
            auVar80._8_4_ = SUB84(dVar60,0);
            auVar80._0_8_ =
                 dVar78 * dVar41 * -1.0 + dVar82 * dVar67 + dVar40 * dVar58 * 1.0 + dVar66 * dVar54;
            auVar80._12_4_ = (int)((ulonglong)dVar60 >> 0x20);
            *(undefined1 (*) [16])(lVar35 + lVar37) = auVar80;
            pdVar15 = (double *)(lVar35 + 0x10 + lVar37);
            *pdVar15 = dVar40 * dVar41 * 1.0 +
                       ((dVar58 * dVar78 * 1.0 + dVar54 * dVar82) - dVar66 * dVar67);
            pdVar15[1] = dVar82 * dVar41 * -1.0 +
                         ((auVar48._8_8_ * dVar66 * -1.0 + dVar54 * dVar40) - dVar78 * auVar72._8_8_
                         );
            pdVar15 = (double *)(lVar21 + 0x20 + lVar37);
            dVar66 = pdVar15[1];
            pdVar27 = (double *)(lVar21 + 0x30 + lVar37);
            pdVar2 = (double *)(lVar21 + 0x40 + lVar37);
            dVar78 = *pdVar2;
            dVar82 = pdVar2[1];
            pdVar2 = (double *)(lVar21 + 0x50 + lVar37);
            dVar40 = *pdVar2;
            dVar41 = pdVar2[1];
            pdVar2 = (double *)(lVar35 + 0x20 + lVar37);
            dVar60 = pdVar2[1];
            pdVar3 = (double *)(lVar35 + 0x30 + lVar37);
            auVar65._0_8_ = *pdVar27 * dVar55 + dVar49 + *pdVar3;
            auVar65._8_8_ = pdVar27[1] * dVar59 + dVar53 + pdVar3[1];
            pdVar27 = (double *)(lVar35 + 0x20 + lVar37);
            *pdVar27 = *pdVar15 * dVar55 + dVar49 + *pdVar2;
            pdVar27[1] = dVar66 * dVar59 + dVar53 + dVar60;
            *(undefined1 (*) [16])(lVar35 + 0x30 + lVar37) = auVar65;
            pdVar15 = (double *)(lVar35 + 0x40 + lVar37);
            auVar73._0_8_ = (dVar78 * dVar55 + dVar49 + 1.0) * *pdVar15;
            auVar73._8_8_ = (dVar82 * dVar59 + dVar53 + 1.0) * pdVar15[1];
            pdVar15 = (double *)(lVar35 + 0x50 + lVar37);
            auVar52._0_8_ = (dVar55 * dVar40 + dVar49 + 1.0) * *pdVar15;
            auVar52._8_8_ = (dVar59 * dVar41 + dVar53 + 0.0) * pdVar15[1];
            *(undefined1 (*) [16])(lVar35 + 0x40 + lVar37) = auVar73;
            *(undefined1 (*) [16])(lVar35 + 0x50 + lVar37) = auVar52;
          }
          else {
            lVar21 = *plVar32;
            lVar37 = lVar25 * 0x60;
            lVar35 = *(longlong *)(local_1b8 + lVar35 * 0x18);
            dVar40 = *(double *)(lVar35 + lVar37) * dVar55;
            dVar41 = ((double *)(lVar35 + lVar37))[1] * dVar59;
            pdVar15 = (double *)(lVar35 + 0x10 + lVar37);
            dVar49 = *pdVar15 * dVar55;
            dVar53 = pdVar15[1] * dVar59;
            dVar60 = *(double *)(lVar21 + lVar37);
            dVar66 = ((double *)(lVar21 + lVar37))[1];
            pdVar15 = (double *)(lVar21 + 0x10 + lVar37);
            dVar78 = *pdVar15;
            dVar82 = pdVar15[1];
            auVar68._0_8_ =
                 dVar66 * dVar49 * -1.0 + dVar78 * dVar41 + dVar40 * dVar82 * 1.0 + dVar60 * dVar53;
            auVar68._8_8_ =
                 dVar60 * dVar49 * 1.0 + dVar82 * dVar41 + dVar40 * dVar78 * -1.0 + dVar66 * dVar53;
            *(undefined1 (*) [16])(lVar21 + lVar37) = auVar68;
            pdVar15 = (double *)(lVar21 + 0x10 + lVar37);
            *pdVar15 = dVar82 * dVar49 * 1.0 +
                       ((dVar40 * dVar66 * 1.0 + dVar53 * dVar78) - dVar41 * dVar60);
            pdVar15[1] = dVar78 * dVar49 * -1.0 +
                         ((dVar40 * dVar60 * -1.0 + dVar53 * dVar82) - dVar41 * dVar66);
            pdVar15 = (double *)(lVar35 + 0x20 + lVar37);
            dVar82 = pdVar15[1];
            pdVar27 = (double *)(lVar35 + 0x30 + lVar37);
            dVar40 = *pdVar27;
            dVar41 = pdVar27[1];
            pdVar27 = (double *)(lVar21 + 0x20 + lVar37);
            dVar66 = pdVar27[1];
            pdVar2 = (double *)(lVar21 + 0x30 + lVar37);
            dVar60 = *pdVar2;
            dVar78 = pdVar2[1];
            pdVar2 = (double *)(lVar21 + 0x20 + lVar37);
            *pdVar2 = *pdVar15 * dVar55 + *pdVar27;
            pdVar2[1] = dVar82 * dVar59 + dVar66;
            pdVar15 = (double *)(lVar21 + 0x30 + lVar37);
            *pdVar15 = dVar40 * dVar55 + dVar60;
            pdVar15[1] = dVar41 * dVar59 + dVar78;
            pdVar15 = (double *)(lVar35 + 0x40 + lVar37);
            dVar60 = pdVar15[1];
            pdVar27 = (double *)(lVar35 + 0x50 + lVar37);
            pdVar2 = (double *)(lVar21 + 0x40 + lVar37);
            dVar66 = pdVar2[1];
            pdVar3 = (double *)(lVar21 + 0x50 + lVar37);
            auVar50._0_8_ = (dVar55 * *pdVar27 + 1.0) * *pdVar3;
            auVar50._8_8_ = (dVar59 * pdVar27[1] + 0.0) * pdVar3[1];
            pdVar27 = (double *)(lVar21 + 0x40 + lVar37);
            *pdVar27 = (*pdVar15 * dVar55 + 1.0) * *pdVar2;
            pdVar27[1] = (dVar60 * dVar59 + 1.0) * dVar66;
            *(undefined1 (*) [16])(lVar21 + 0x50 + lVar37) = auVar50;
            plVar28 = local_2d8;
          }
          if (cVar6 != '\0') {
            puVar26 = (undefined8 *)(*plVar32 + lVar25 * 0x60);
            uVar8 = puVar26[1];
            auVar62 = *(undefined1 (*) [16])(*plVar32 + 0x10 + lVar25 * 0x60);
            lVar21 = *local_2a8;
            puVar1 = (undefined8 *)(lVar21 + lVar25 * 0x20);
            *puVar1 = *puVar26;
            puVar1[1] = uVar8;
            *(undefined1 (*) [16])(lVar21 + 0x10 + lVar25 * 0x20) = auVar62;
            goto LAB_143ca77ee;
          }
        }
      }
      uVar22 = uVar22 + 1;
    } while (uVar22 != local_298);
  }
  uVar22 = local_290;
  plVar28 = puVar33 + 0xe;
  iVar13 = (int)local_290;
  iVar24 = iVar13 + 1;
  iVar12 = *(int *)(puVar33 + 0xf);
  if (iVar13 < iVar12) {
    if (iVar13 < -1) goto LAB_143ca8416;
    if (iVar24 < iVar12) {
      *(int *)(puVar33 + 0xf) = iVar24;
    }
  }
  else {
    *(int *)(puVar33 + 0xf) = iVar24;
    if ((uint)(*(int *)((longlong)puVar33 + 0x7c) - iVar12) < (uint)(iVar24 - iVar12)) {
      FUN_1417b40d0(plVar28);
      puVar33 = local_2e0;
    }
  }
  plVar32 = puVar33 + 0x10;
  iVar12 = *(int *)(puVar33 + 0x11);
  if (iVar13 < iVar12) {
    if (iVar13 < -1) {
LAB_143ca8416:
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar24);
    }
    if (iVar24 < iVar12) {
      *(int *)(puVar33 + 0x11) = iVar24;
    }
  }
  else {
    *(int *)(puVar33 + 0x11) = iVar24;
    if ((uint)(*(int *)((longlong)puVar33 + 0x8c) - iVar12) < (uint)(iVar24 - iVar12)) {
      FUN_14475e4ac(plVar32);
      puVar33 = local_2e0;
    }
  }
  *(undefined1 **)*plVar28 = &uStack_168;
  *(undefined4 *)*plVar32 = 0x3f800000;
  if (0 < iVar13) {
    lVar20 = 0;
    uVar39 = 0;
    do {
      *(longlong *)(*plVar28 + 8 + uVar39 * 8) = local_1c8 + lVar20;
      *(undefined4 *)(*plVar32 + 4 + uVar39 * 4) = *(undefined4 *)(*local_2d8 + uVar39 * 4);
      uVar39 = uVar39 + 1;
      lVar20 = lVar20 + 0x20;
    } while ((uVar22 & 0xffffffff) != uVar39);
  }
  local_278 = puVar33[0x10];
  local_270 = CONCAT44(local_270._4_4_,*(undefined4 *)(puVar33 + 0x11));
  local_100 = puVar33[0xe];
  local_f8 = *(undefined4 *)(puVar33 + 0xf);
  FUN_1403edf9c(&local_100,&local_278,local_288,(char)param_1[0xf]);
LAB_143ca7fa3:
  FUN_1447e15bf(local_1d8,uStack_1d0 & 0xffffffff);
  if (local_1d8 != 0) {
    FUN_1400020a8();
  }
  FUN_1447e163f(local_1c8,uStack_1c0 & 0xffffffff);
  if (local_1c8 != 0) {
    FUN_1400020a8();
  }
  FUN_1447e1640(local_1b8,uStack_1b0 & 0xffffffff);
  if (local_1b8 != 0) {
    FUN_1400020a8();
  }
  if (lStack_118 != 0) {
    FUN_1400020a8();
  }
  FUN_144716785(lStack_128,local_120 & 0xffffffff);
  if (lStack_128 != 0) {
    FUN_1400020a8();
  }
  FUN_144716758(lStack_138,local_130 & 0xffffffff);
  if (lStack_138 != 0) {
    FUN_1400020a8();
  }
  FUN_144716727(lStack_148,local_140 & 0xffffffff);
  if (lStack_148 != 0) {
    FUN_1400020a8();
  }
  if ((local_f0 ^ (ulonglong)auStack_308) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ca84c2 FUN_143ca84c2 body=69 status=ok
// SIG undefined FUN_143ca84c2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143ca84c2(void)

{
  _DAT_14cb71c00 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143ca8504. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb71c08,1);
  return;
}



// FUNCTION 143ca8507 FUN_143ca8507 body=69 status=ok
// SIG undefined FUN_143ca8507(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143ca8507(void)

{
  _DAT_14cb71c10 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143ca8549. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb71c18,1);
  return;
}



// FUNCTION 143ca854c FUN_143ca854c body=69 status=ok
// SIG undefined FUN_143ca854c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143ca854c(void)

{
  _DAT_14cb71c20 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143ca858e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb71c28,1);
  return;
}



// FUNCTION 143ca8591 FUN_143ca8591 body=69 status=ok
// SIG undefined FUN_143ca8591(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143ca8591(void)

{
  _DAT_14cb71c30 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143ca85d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb71c38,1);
  return;
}



// FUNCTION 143ca85d6 FUN_143ca85d6 body=69 status=ok
// SIG undefined FUN_143ca85d6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143ca85d6(void)

{
  _DAT_14cb71c40 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143ca8618. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb71c48,1);
  return;
}



// FUNCTION 143ca861b FUN_143ca861b body=69 status=ok
// SIG undefined FUN_143ca861b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143ca861b(void)

{
  _DAT_14cb71c50 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143ca865d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb71c58,1);
  return;
}



// FUNCTION 143ca8660 FUN_143ca8660 body=106 status=ok
// SIG undefined FUN_143ca8660(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143ca8660(void)

{
  _DAT_14cb71c80 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb71c88,1);
  if (DAT_14cb71c70 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cb71c60 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143ca86ca FUN_143ca86ca body=69 status=ok
// SIG undefined FUN_143ca86ca(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143ca86ca(void)

{
  _DAT_14cb71ca0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143ca870c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb71ca8,1);
  return;
}



// FUNCTION 143ca870f FUN_143ca870f body=69 status=ok
// SIG undefined FUN_143ca870f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143ca870f(void)

{
  _DAT_14cb71cb8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143ca8751. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb71cc0,1);
  return;
}



// FUNCTION 143ca8754 FUN_143ca8754 body=69 status=ok
// SIG undefined FUN_143ca8754(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143ca8754(void)

{
  _DAT_14cb71cc8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143ca8796. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb71cd0,1);
  return;
}



// FUNCTION 143ca8799 FUN_143ca8799 body=69 status=ok
// SIG undefined FUN_143ca8799(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143ca8799(void)

{
  _DAT_14cb71cd8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143ca87db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb71ce0,1);
  return;
}



// FUNCTION 143ca87de FUN_143ca87de body=69 status=ok
// SIG undefined FUN_143ca87de(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143ca87de(void)

{
  _DAT_14cb71ce8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143ca8820. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb71cf0,1);
  return;
}



// FUNCTION 143ca8823 FUN_143ca8823 body=69 status=ok
// SIG undefined FUN_143ca8823(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143ca8823(void)

{
  _DAT_14cb71cf8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143ca8865. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb71d00,1);
  return;
}



// FUNCTION 143ca8868 FUN_143ca8868 body=69 status=ok
// SIG undefined FUN_143ca8868(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143ca8868(void)

{
  _DAT_14cb71d08 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143ca88aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb71d10,1);
  return;
}



// FUNCTION 143ca88ad FUN_143ca88ad body=69 status=ok
// SIG undefined FUN_143ca88ad(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143ca88ad(void)

{
  _DAT_14cb71d18 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143ca88ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb71d20,1);
  return;
}



// FUNCTION 143ca88f2 FUN_143ca88f2 body=69 status=ok
// SIG undefined FUN_143ca88f2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143ca88f2(void)

{
  _DAT_14cb71d28 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143ca8934. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb71d30,1);
  return;
}



// FUNCTION 143ca8937 FUN_143ca8937 body=69 status=ok
// SIG undefined FUN_143ca8937(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143ca8937(void)

{
  _DAT_14cb71d38 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143ca8979. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb71d40,1);
  return;
}



// FUNCTION 143ca897c FUN_143ca897c body=69 status=ok
// SIG undefined FUN_143ca897c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143ca897c(void)

{
  _DAT_14cb71d48 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143ca89be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb71d50,1);
  return;
}



// FUNCTION 143ca89c1 FUN_143ca89c1 body=69 status=ok
// SIG undefined FUN_143ca89c1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143ca89c1(void)

{
  _DAT_14cb71d58 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143ca8a03. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb71d60,1);
  return;
}



// FUNCTION 143ca8a06 FUN_143ca8a06 body=934 status=ok
// SIG undefined FUN_143ca8a06(void)

void FUN_143ca8a06(longlong *param_1)

{
  float *pfVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  longlong *plVar10;
  ulonglong uVar11;
  longlong *plVar12;
  longlong *plVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  ulonglong uVar19;
  longlong *plVar20;
  longlong *plVar21;
  longlong *plVar22;
  bool bVar23;
  float fVar24;
  undefined1 auStack_368 [32];
  longlong local_348;
  longlong local_340;
  undefined4 local_338 [190];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_368;
  iVar14 = (int)param_1[1];
  if (1 < (longlong)iVar14) {
    lVar7 = *param_1;
    memset(local_338,0,0x2f0);
    local_340 = lVar7 + (longlong)iVar14 * 8 + -8;
    local_348 = lVar7;
    fVar24 = logf((float)iVar14);
    local_338[0] = (int)(longlong)(fVar24 + fVar24);
    plVar3 = &local_348;
    do {
      plVar5 = (longlong *)*plVar3;
      plVar8 = (longlong *)plVar3[1];
      iVar14 = (int)plVar3[2];
      iVar9 = (int)((ulonglong)((longlong)plVar8 - (longlong)plVar5) >> 3);
      uVar19 = (ulonglong)(iVar9 + 1);
      plVar10 = plVar5;
      plVar12 = plVar8;
      if (iVar14 != 0) {
LAB_143ca8aa5:
        if (8 < (int)(uint)uVar19) {
          uVar18 = (uint)uVar19 >> 1;
          lVar7 = plVar10[uVar18];
          plVar10[uVar18] = *plVar10;
          *plVar10 = lVar7;
          plVar20 = plVar12 + 1;
          plVar4 = plVar10;
          do {
            plVar2 = plVar4 + 1;
            plVar13 = plVar4 + 1;
            do {
              plVar4 = plVar13;
              plVar22 = plVar2;
              if (plVar12 < plVar4) break;
              plVar2 = plVar22 + 1;
              plVar13 = plVar4 + 1;
            } while (*(float *)(*plVar4 + 4) < *(float *)(*plVar10 + 4) ||
                     *(float *)(*plVar4 + 4) == *(float *)(*plVar10 + 4));
            plVar2 = plVar20 + -2;
            do {
              plVar13 = plVar20;
              plVar21 = plVar2;
              plVar20 = plVar13 + -1;
              if (plVar20 <= plVar10) break;
              plVar2 = plVar21 + -1;
            } while (*(float *)(*plVar10 + 4) < *(float *)(*plVar20 + 4) ||
                     *(float *)(*plVar10 + 4) == *(float *)(*plVar20 + 4));
            if (plVar20 < plVar4) goto LAB_143ca8b3c;
            lVar7 = *plVar4;
            *plVar4 = *plVar20;
            *plVar20 = lVar7;
          } while( true );
        }
        if (plVar10 < plVar12) {
          do {
            plVar5 = plVar10;
            if (plVar10 + 1 <= plVar12) {
              lVar7 = *plVar10;
              plVar8 = plVar10 + 1;
              do {
                fVar24 = *(float *)(*plVar8 + 4);
                lVar6 = *plVar8;
                plVar20 = plVar8;
                if (fVar24 < *(float *)(lVar7 + 4) || fVar24 == *(float *)(lVar7 + 4)) {
                  lVar6 = lVar7;
                  plVar20 = plVar5;
                }
                plVar5 = plVar20;
                plVar8 = plVar8 + 1;
                lVar7 = lVar6;
              } while (plVar8 <= plVar12);
            }
            lVar7 = *plVar5;
            *plVar5 = *plVar12;
            *plVar12 = lVar7;
            plVar12 = plVar12 + -1;
          } while (plVar10 < plVar12);
        }
        goto LAB_143ca8d73;
      }
LAB_143ca8bcf:
      iVar14 = (int)uVar19;
      if (iVar14 != 0) {
        iVar9 = (iVar9 - (iVar9 + -1 >> 0x1f)) + -1 >> 1;
        iVar17 = iVar9;
joined_r0x000143ca8bf6:
        do {
          iVar16 = iVar9 * 2 + 1;
          if (iVar16 < iVar14) {
            iVar15 = iVar9 * 2 + 2;
            if ((iVar15 < iVar14) &&
               (*(float *)(plVar10[iVar16] + 4) < *(float *)(plVar10[iVar15] + 4) ||
                *(float *)(plVar10[iVar16] + 4) == *(float *)(plVar10[iVar15] + 4))) {
              iVar16 = iVar15;
            }
            lVar7 = plVar10[iVar9];
            fVar24 = *(float *)(plVar10[iVar16] + 4);
            pfVar1 = (float *)(lVar7 + 4);
            if (*pfVar1 <= fVar24 && fVar24 != *pfVar1) {
              plVar10[iVar9] = plVar10[iVar16];
              plVar10[iVar16] = lVar7;
              iVar9 = iVar16;
              goto joined_r0x000143ca8bf6;
            }
          }
          bVar23 = iVar17 != 0;
          iVar9 = iVar17 + -1;
          iVar17 = iVar9;
        } while (bVar23);
        if (1 < iVar14) {
          lVar7 = *plVar10;
          *plVar10 = plVar10[uVar19 - 1];
          plVar10[uVar19 - 1] = lVar7;
          if (iVar14 != 2) {
            do {
              uVar11 = uVar19 - 1;
              iVar14 = 0;
              iVar17 = 1;
              iVar9 = 0;
              do {
                iVar14 = iVar14 + 2;
                iVar16 = iVar17;
                if (((longlong)iVar14 < (longlong)uVar11) &&
                   (*(float *)(plVar10[iVar17] + 4) < *(float *)(plVar10[iVar14] + 4) ||
                    *(float *)(plVar10[iVar17] + 4) == *(float *)(plVar10[iVar14] + 4))) {
                  iVar16 = iVar14;
                }
                lVar7 = plVar10[iVar9];
                fVar24 = *(float *)(plVar10[iVar16] + 4);
                pfVar1 = (float *)(lVar7 + 4);
                if (fVar24 < *pfVar1 || fVar24 == *pfVar1) break;
                plVar10[iVar9] = plVar10[iVar16];
                plVar10[iVar16] = lVar7;
                iVar14 = iVar16 * 2;
                iVar17 = iVar16 * 2 + 1;
                iVar9 = iVar16;
              } while ((longlong)iVar17 < (longlong)uVar11);
              lVar7 = *plVar10;
              *plVar10 = plVar10[uVar19 - 2];
              plVar10[uVar19 - 2] = lVar7;
              uVar19 = uVar11;
            } while (2 < uVar11);
          }
        }
      }
LAB_143ca8d73:
      plVar3 = plVar3 + -3;
    } while (&local_348 <= plVar3);
  }
  if ((local_40 ^ (ulonglong)auStack_368) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_143ca8b3c:
  lVar7 = *plVar10;
  *plVar10 = *plVar20;
  *plVar20 = lVar7;
  iVar14 = iVar14 + -1;
  plVar13 = plVar13 + -2;
  if ((longlong)plVar21 - (longlong)plVar5 < (longlong)plVar8 - (longlong)plVar22) {
    if (plVar4 < plVar12) {
      *plVar3 = (longlong)plVar4;
      plVar3[1] = (longlong)plVar12;
      *(int *)(plVar3 + 2) = iVar14;
      plVar3 = plVar3 + 3;
    }
    plVar5 = plVar10;
    plVar8 = plVar21;
    if (plVar20 <= plVar10 + 1) goto LAB_143ca8d73;
  }
  else {
    if (plVar10 + 1 < plVar20) {
      *plVar3 = (longlong)plVar10;
      plVar3[1] = (longlong)plVar13;
      *(int *)(plVar3 + 2) = iVar14;
      plVar3 = plVar3 + 3;
    }
    plVar5 = plVar22;
    plVar10 = plVar4;
    plVar13 = plVar12;
    plVar8 = plVar12;
    if (plVar12 <= plVar4) goto LAB_143ca8d73;
  }
  iVar9 = (int)((ulonglong)((longlong)plVar8 - (longlong)plVar5) >> 3);
  uVar19 = (ulonglong)(iVar9 + 1);
  plVar12 = plVar13;
  if (iVar14 == 0) goto LAB_143ca8bcf;
  goto LAB_143ca8aa5;
}



// FUNCTION 143ca8db4 FUN_143ca8db4 body=70 status=ok
// SIG undefined FUN_143ca8db4(void)

byte FUN_143ca8db4(longlong param_1)

{
  char cVar1;
  byte bVar2;
  longlong *plVar3;
  
  bVar2 = 0;
  if ((*(int *)(param_1 + 0x68) != 0) && (*(longlong **)(param_1 + 0x60) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x60) + 0x30))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x68) == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)(param_1 + 0x60);
      }
      bVar2 = (**(code **)(*plVar3 + 0x58))();
      bVar2 = bVar2 ^ 1;
    }
  }
  return bVar2;
}



// FUNCTION 143ca8f5e FUN_143ca8f5e body=19683 status=ok
// SIG undefined FUN_143ca8f5e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143ca8f5e(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined1 (*pauVar2) [16];
  float fVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  char cVar13;
  int iVar14;
  undefined4 extraout_EAX;
  undefined4 extraout_EAX_00;
  int iVar15;
  double *pdVar16;
  int *piVar17;
  uint uVar18;
  undefined4 uVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  double *pdVar24;
  ulonglong uVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  float fVar57;
  double dVar58;
  double dVar59;
  double dVar60;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  double dVar70;
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  double dVar84;
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  double dVar95;
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  double dVar116;
  undefined1 auVar117 [16];
  double dVar123;
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  double dVar124;
  double dVar125;
  double dVar126;
  double dVar127;
  double dVar134;
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  undefined1 auVar133 [16];
  double dVar135;
  double dVar140;
  undefined1 auVar136 [16];
  undefined1 auVar137 [16];
  undefined1 auVar138 [16];
  undefined1 auVar139 [16];
  undefined1 auVar141 [16];
  undefined1 auVar142 [16];
  undefined1 auVar143 [16];
  undefined1 auVar144 [16];
  undefined1 auVar145 [16];
  undefined1 auVar146 [16];
  undefined1 auVar147 [16];
  undefined1 auVar148 [16];
  double dVar149;
  double dVar150;
  undefined1 auVar151 [16];
  undefined1 auVar152 [16];
  undefined1 auVar153 [16];
  double dVar154;
  undefined1 auStack_888 [32];
  undefined8 *local_868;
  longlong *local_860;
  double local_858;
  double local_850;
  undefined1 local_848 [16];
  undefined1 local_838 [16];
  undefined1 local_828 [16];
  double local_818;
  double dStack_810;
  double local_808;
  double dStack_800;
  double local_7f8;
  double dStack_7f0;
  double local_7e8;
  double dStack_7e0;
  int local_7cc;
  double local_7c8;
  double dStack_7c0;
  double local_7b8;
  double dStack_7b0;
  double local_7a8;
  double dStack_7a0;
  double local_798;
  double dStack_790;
  undefined8 local_788;
  undefined8 uStack_780;
  double local_778;
  double dStack_770;
  double local_768;
  double dStack_760;
  double local_758;
  double dStack_750;
  double local_748;
  double dStack_740;
  double local_738;
  double dStack_730;
  undefined1 local_728 [16];
  undefined1 local_718 [16];
  undefined8 local_708;
  undefined8 uStack_700;
  undefined8 local_6f8;
  undefined8 local_6e8;
  undefined8 uStack_6e0;
  undefined8 local_6d8;
  undefined1 local_6c8 [32];
  undefined8 local_6a8;
  undefined8 uStack_6a0;
  undefined8 local_698;
  double local_668;
  double dStack_660;
  double local_658;
  double dStack_650;
  undefined8 local_648;
  undefined8 uStack_640;
  undefined8 local_638;
  double local_608 [2];
  undefined1 local_5f8 [16];
  double local_5e8;
  double dStack_5e0;
  double local_5d8;
  double dStack_5d0;
  double local_5c8;
  double dStack_5c0;
  double local_5b8;
  double dStack_5b0;
  double local_5a8 [2];
  undefined1 local_598 [16];
  double local_588;
  double dStack_580;
  double local_578;
  double dStack_570;
  double local_568;
  double dStack_560;
  double local_558;
  double dStack_550;
  double local_548;
  double dStack_540;
  undefined1 local_538 [16];
  double local_528;
  double dStack_520;
  double local_518;
  double dStack_510;
  double local_508;
  double dStack_500;
  double local_4f8;
  double dStack_4f0;
  double local_4e8 [2];
  undefined1 local_4d8 [16];
  double local_4c8;
  double dStack_4c0;
  double local_4b8;
  double dStack_4b0;
  undefined1 local_4a8 [16];
  undefined1 local_498 [16];
  double local_488 [4];
  double local_468;
  double dStack_460;
  double local_458;
  double dStack_450;
  double local_448;
  double dStack_440;
  double local_438;
  double dStack_430;
  double local_428 [4];
  double local_408;
  double dStack_400;
  double local_3f8;
  double dStack_3f0;
  double local_3e8;
  double dStack_3e0;
  double local_3d8;
  double dStack_3d0;
  double local_3c8 [12];
  double local_368 [12];
  double local_308;
  double dStack_300;
  double local_2f8;
  double dStack_2f0;
  double local_2e8 [4];
  double local_2c8;
  double dStack_2c0;
  double local_2b8;
  undefined8 uStack_2b0;
  undefined1 local_2a8 [16];
  undefined1 local_298 [16];
  char local_288;
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
  double local_1f8 [5];
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
  double local_178 [4];
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
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_888;
  if ((*(float *)((longlong)param_1 + 0x1e4) <= 1e-05) ||
     (cVar13 = (**(code **)(*param_1 + 0x20))(), cVar13 == '\0')) goto LAB_143cad609;
  lVar22 = param_2[6];
  uVar18 = *(uint *)(param_1 + 3);
  if ((int)uVar18 < 0) {
    if (((~uVar18 & 0x7fffffff) == 0) || (uVar18 = (int)(uVar18 * 2) >> 1, (int)uVar18 < 0)) {
      iVar14 = -1;
    }
    else {
      iVar14 = -1;
      if ((int)uVar18 < *(int *)(lVar22 + 0x88)) {
        piVar17 = (int *)((ulonglong)uVar18 * 4 + *(longlong *)(lVar22 + 0x80));
        goto LAB_143ca9025;
      }
    }
  }
  else {
    piVar17 = (int *)((longlong)param_1 + 0x1c);
LAB_143ca9025:
    iVar14 = *piVar17;
  }
  plVar1 = param_2 + 4;
  local_828[0] = (char)param_1[0x3d];
  lVar23 = (longlong)*(int *)((longlong)param_1 + 0x10c);
  lVar21 = param_2[7];
  if (*(char *)(lVar21 + lVar23) == '\0') {
LAB_143ca9048:
    pdVar16 = (double *)(lVar23 * 0x60 + *plVar1);
    pdVar24 = local_368;
    for (lVar20 = 0xc; lVar20 != 0; lVar20 = lVar20 + -1) {
      *pdVar24 = *pdVar16;
      pdVar16 = pdVar16 + 1;
      pdVar24 = pdVar24 + 1;
    }
  }
  else {
    iVar15 = *(int *)(*(longlong *)(lVar22 + 0x90) + lVar23 * 4);
    lVar20 = (longlong)iVar15;
    if (lVar20 == -1) goto LAB_143ca9048;
    if (*(char *)(lVar21 + lVar20) == '\0') {
      FUN_1447d5d8e(plVar1,iVar15);
    }
    FUN_1449437a2(lVar23 * 0x60 + param_2[4],local_368,lVar20 * 0x60 + param_2[4]);
    lVar21 = param_2[7];
  }
  lVar23 = (longlong)(int)param_1[0x39];
  if (*(char *)(lVar21 + lVar23) == '\0') {
LAB_143ca90b9:
    pdVar16 = (double *)(lVar23 * 0x60 + *plVar1);
    pdVar24 = local_3c8;
    for (lVar20 = 0xc; lVar20 != 0; lVar20 = lVar20 + -1) {
      *pdVar24 = *pdVar16;
      pdVar16 = pdVar16 + 1;
      pdVar24 = pdVar24 + 1;
    }
  }
  else {
    iVar15 = *(int *)(*(longlong *)(param_2[6] + 0x90) + lVar23 * 4);
    lVar20 = (longlong)iVar15;
    if (lVar20 == -1) goto LAB_143ca90b9;
    if (*(char *)(lVar21 + lVar20) == '\0') {
      FUN_1447d5d8e(plVar1,iVar15);
    }
    FUN_1449437a2(lVar23 * 0x60 + param_2[4],local_3c8,lVar20 * 0x60 + param_2[4]);
    lVar21 = param_2[7];
  }
  iVar15 = *(int *)((longlong)param_1 + 0x10c);
  if (*(char *)(lVar21 + iVar15) == '\0') {
    FUN_1447d5d8e(plVar1,iVar15);
    lVar21 = param_2[7];
  }
  lVar23 = *plVar1;
  lVar20 = (longlong)iVar15 * 0x60;
  dVar135 = *(double *)(lVar23 + lVar20);
  dVar140 = ((double *)(lVar23 + lVar20))[1];
  pauVar2 = (undefined1 (*) [16])(lVar23 + 0x10 + lVar20);
  uVar4 = *(undefined8 *)*pauVar2;
  uVar5 = *(undefined8 *)(*pauVar2 + 8);
  auVar146 = *pauVar2;
  pdVar16 = (double *)(lVar23 + 0x20 + lVar20);
  dVar59 = *pdVar16;
  dVar124 = pdVar16[1];
  pdVar16 = (double *)(lVar23 + 0x30 + lVar20);
  dVar58 = *pdVar16;
  dVar125 = pdVar16[1];
  pdVar16 = (double *)(lVar23 + 0x40 + lVar20);
  dVar126 = *pdVar16;
  dVar150 = pdVar16[1];
  pdVar16 = (double *)(lVar23 + 0x50 + lVar20);
  dVar149 = *pdVar16;
  dVar116 = pdVar16[1];
  iVar15 = (int)param_1[0x39];
  if (*(char *)(lVar21 + iVar15) == '\0') {
    FUN_1447d5d8e(plVar1,iVar15);
    lVar23 = param_2[4];
    lVar21 = param_2[7];
  }
  pdVar16 = (double *)((longlong)iVar15 * 0x60 + lVar23);
  pdVar24 = local_428;
  for (lVar20 = 0xc; lVar20 != 0; lVar20 = lVar20 + -1) {
    *pdVar24 = *pdVar16;
    pdVar16 = pdVar16 + 1;
    pdVar24 = pdVar24 + 1;
  }
  if (*(char *)(lVar21 + iVar14) == '\0') {
    FUN_1447d5d8e(plVar1,iVar14);
    lVar23 = *plVar1;
  }
  pdVar16 = (double *)((longlong)iVar14 * 0x60 + lVar23);
  pdVar24 = local_488;
  for (lVar21 = 0xc; lVar21 != 0; lVar21 = lVar21 + -1) {
    *pdVar24 = *pdVar16;
    pdVar16 = pdVar16 + 1;
    pdVar24 = pdVar24 + 1;
  }
  local_7cc = iVar14;
  FUN_1449437a2(local_488,local_4e8,local_428);
  local_548 = dVar135;
  dStack_540 = dVar140;
  local_538 = auVar146;
  local_528 = dVar59;
  dStack_520 = dVar124;
  local_518 = dVar58;
  dStack_510 = dVar125;
  local_508 = dVar126;
  dStack_500 = dVar150;
  local_4f8 = dVar149;
  dStack_4f0 = dVar116;
  pdVar16 = local_428;
  pdVar24 = local_5a8;
  for (lVar21 = 0xc; lVar21 != 0; lVar21 = lVar21 + -1) {
    *pdVar24 = *pdVar16;
    pdVar16 = pdVar16 + 1;
    pdVar24 = pdVar24 + 1;
  }
  pdVar16 = local_488;
  pdVar24 = local_608;
  for (lVar21 = 0xc; lVar21 != 0; lVar21 = lVar21 + -1) {
    *pdVar24 = *pdVar16;
    pdVar16 = pdVar16 + 1;
    pdVar24 = pdVar24 + 1;
  }
  local_288 = '\0';
  uVar18 = *(uint *)(param_1 + 5);
  local_818 = dVar59;
  dStack_810 = dVar124;
  local_808 = dVar126;
  dStack_800 = dVar150;
  local_7c8 = dVar58;
  dStack_7c0 = dVar125;
  local_798 = dVar135;
  dStack_790 = dVar140;
  local_788 = uVar4;
  uStack_780 = uVar5;
  local_778 = dVar149;
  dStack_770 = dVar116;
  if ((~uVar18 & 0x7fffffff) != 0) {
    lVar21 = lVar22 + 0x10;
    if (*(longlong *)(lVar22 + 0x20) != 0) {
      lVar21 = *(longlong *)(lVar22 + 0x20);
    }
    if (((*(uint *)(lVar21 + (ulonglong)(uVar18 >> 3 & 0x1ffc)) >> (uVar18 & 0x1f) & 1) != 0) &&
       (fVar57 = *(float *)(param_1 + 0x58), 1e-05 < fVar57)) {
      if ((int)uVar18 < 0) {
        uVar18 = (int)(uVar18 * 2) >> 1;
        iVar14 = -1;
        if ((-1 < (int)uVar18) && ((int)uVar18 < *(int *)(lVar22 + 0x88))) {
          piVar17 = (int *)((ulonglong)uVar18 * 4 + *(longlong *)(lVar22 + 0x80));
          goto LAB_143ca92fd;
        }
      }
      else {
        piVar17 = (int *)((longlong)param_1 + 0x2c);
LAB_143ca92fd:
        iVar14 = *piVar17;
      }
      lVar21 = (longlong)iVar14;
      if (*(char *)(param_2[7] + lVar21) == '\0') {
LAB_143ca930c:
        pdVar16 = (double *)(lVar21 * 0x60 + *plVar1);
        pdVar24 = local_178;
        for (lVar23 = 0xc; lVar23 != 0; lVar23 = lVar23 + -1) {
          *pdVar24 = *pdVar16;
          pdVar16 = pdVar16 + 1;
          pdVar24 = pdVar24 + 1;
        }
      }
      else {
        iVar14 = *(int *)(*(longlong *)(param_2[6] + 0x90) + lVar21 * 4);
        lVar23 = (longlong)iVar14;
        if (lVar23 == -1) goto LAB_143ca930c;
        if (*(char *)(param_2[7] + lVar23) == '\0') {
          FUN_1447d5d8e(plVar1,iVar14);
        }
        FUN_1449437a2(lVar21 * 0x60 + *plVar1,local_178,lVar23 * 0x60 + *plVar1);
        fVar57 = *(float *)(param_1 + 0x58);
      }
      pdVar16 = local_178;
      pdVar24 = local_2e8;
      for (lVar21 = 0xc; lVar21 != 0; lVar21 = lVar21 + -1) {
        *pdVar24 = *pdVar16;
        pdVar16 = pdVar16 + 1;
        pdVar24 = pdVar24 + 1;
      }
      local_288 = '\x01';
      dVar58 = (double)fVar57;
      local_2b8 = (local_2b8 - DAT_14c8464f0) * dVar58 + DAT_14c8464f0;
      dStack_2c0 = (dStack_2c0 - DAT_14c8464e8) * dVar58 + DAT_14c8464e8;
      local_2c8 = (local_2c8 - DAT_14c8464e0) * dVar58 + DAT_14c8464e0;
      uStack_2b0 = 0;
      dVar58 = local_4a8._0_8_;
      dVar150 = local_4a8._8_8_;
      dVar125 = local_498._0_8_;
      dStack_7e0 = local_498._8_8_;
      dVar126 = local_2a8._0_8_;
      dVar59 = local_2a8._8_8_;
      auVar110 = minpd(local_2a8,local_4a8);
      local_848 = local_298;
      auVar146 = local_848;
      auVar117 = minpd(local_298,local_498);
      auVar151._8_8_ = -(ulonglong)(auVar110._8_8_ < 0.0);
      auVar151._0_8_ = -(ulonglong)(auVar110._0_8_ < 0.0);
      iVar14 = movmskpd((int)local_2e8,auVar151);
      auVar110._8_8_ = -(ulonglong)(auVar117._8_8_ < 0.0);
      auVar110._0_8_ = -(ulonglong)(auVar117._0_8_ < 0.0);
      uVar18 = movmskpd(0,auVar110);
      local_848._0_8_ = local_298._0_8_;
      local_848._8_8_ = local_298._8_8_;
      if ((uVar18 & 0x3fffffff) == 0 && iVar14 == 0) {
        local_7f8 = local_2e8[1] * (double)local_4d8._0_8_ * -1.0 +
                    local_2e8[2] * local_4e8[1] +
                    local_2e8[3] * local_4e8[0] * 1.0 + local_2e8[0] * (double)local_4d8._8_8_;
        dStack_7f0 = local_2e8[0] * (double)local_4d8._0_8_ * 1.0 +
                     local_2e8[3] * local_4e8[1] +
                     local_2e8[2] * local_4e8[0] * -1.0 + local_2e8[1] * (double)local_4d8._8_8_;
        auVar117._0_8_ =
             local_2e8[3] * (double)local_4d8._0_8_ * 1.0 +
             ((local_4e8[0] * local_2e8[1] * 1.0 + local_2e8[2] * (double)local_4d8._8_8_) -
             local_2e8[0] * local_4e8[1]);
        auVar117._8_8_ =
             local_2e8[2] * (double)local_4d8._0_8_ * -1.0 +
             ((local_4e8[0] * local_2e8[0] * -1.0 + local_2e8[3] * (double)local_4d8._8_8_) -
             local_2e8[1] * local_4e8[1]);
        dVar124 = local_2c8 * dVar58;
        dVar135 = dStack_2c0 * dVar150;
        dVar140 = local_2b8 * dVar125;
        dVar149 = dStack_7e0 * 0.0;
        dVar116 = dVar135 * local_4e8[0] - dVar124 * local_4e8[1];
        dVar123 = dVar140 * local_4e8[1] - dVar135 * (double)local_4d8._0_8_;
        dVar127 = dVar124 * (double)local_4d8._0_8_ - dVar140 * local_4e8[0];
        dVar134 = dVar149 * (double)local_4d8._8_8_ - dVar149 * (double)local_4d8._8_8_;
        dVar123 = dVar123 + dVar123;
        dVar127 = dVar127 + dVar127;
        dVar116 = dVar116 + dVar116;
        dVar134 = dVar134 + dVar134;
        dVar126 = dVar126 * dVar58;
        dVar59 = dVar59 * dVar150;
        local_7e8 = (double)local_848._0_8_ * dVar125;
        dStack_7e0 = (double)local_848._8_8_ * dStack_7e0;
        dVar58 = (dVar116 * local_4e8[1] - (double)local_4d8._0_8_ * dVar127) +
                 (double)local_4d8._8_8_ * dVar123 + dVar124 + local_4c8;
        dVar125 = (dVar123 * (double)local_4d8._0_8_ - dVar116 * local_4e8[0]) +
                  (double)local_4d8._8_8_ * dVar127 + dVar135 + dStack_4c0;
        dVar150 = (dVar127 * local_4e8[0] - local_4e8[1] * dVar123) +
                  (double)local_4d8._8_8_ * dVar116 + dVar140 + local_4b8;
        dVar124 = (dVar134 * (double)local_4d8._8_8_ - dVar134 * (double)local_4d8._8_8_) +
                  (double)local_4d8._8_8_ * dVar134 + dVar149 + dStack_4b0;
        uVar19 = 0;
        local_848 = auVar146;
      }
      else {
        dVar124 = local_4e8[1] + local_4e8[1];
        dVar135 = (double)local_4d8._0_8_ + (double)local_4d8._0_8_;
        dVar149 = local_4e8[0] * (local_4e8[0] + local_4e8[0]);
        local_1a8 = (1.0 - (dVar149 + local_4e8[1] * dVar124)) * dVar125;
        dVar140 = (local_4e8[0] + local_4e8[0]) * (double)local_4d8._8_8_;
        local_1b8 = (dVar124 * (double)local_4d8._8_8_ + local_4e8[0] * dVar135) * dVar125;
        local_7e8 = dVar125 * (double)local_848._0_8_;
        dStack_7e0 = dStack_7e0 * (double)local_848._8_8_;
        local_1f8[4] = (dVar124 * local_4e8[0] - dVar135 * (double)local_4d8._8_8_) * dVar150;
        dStack_1b0 = (dVar135 * local_4e8[1] - dVar140) * dVar125;
        local_1f8[0] = (1.0 - ((double)local_4d8._0_8_ * dVar135 + local_4e8[1] * dVar124)) * dVar58
        ;
        dStack_1d0 = (1.0 - ((double)local_4d8._0_8_ * dVar135 + dVar149)) * dVar150;
        local_1f8[1] = (dVar124 * local_4e8[0] + dVar135 * (double)local_4d8._8_8_) * dVar58;
        local_1c8 = (dVar135 * local_4e8[1] + dVar140) * dVar150;
        local_1f8[2] = (local_4e8[0] * dVar135 - dVar124 * (double)local_4d8._8_8_) * dVar58;
        local_1f8[3] = 0.0;
        uStack_1c0 = 0;
        uStack_1a0 = 0;
        local_198 = local_4c8;
        dStack_190 = dStack_4c0;
        local_188 = local_4b8;
        uStack_180 = 0x3ff0000000000000;
        dVar125 = local_2e8[1] + local_2e8[1];
        dVar124 = local_2e8[2] + local_2e8[2];
        dVar140 = local_2e8[0] * (local_2e8[0] + local_2e8[0]);
        local_228 = (1.0 - (dVar140 + local_2e8[1] * dVar125)) * (double)local_848._0_8_;
        dVar135 = (local_2e8[0] + local_2e8[0]) * local_2e8[3];
        local_238 = (dVar125 * local_2e8[3] + local_2e8[0] * dVar124) * (double)local_848._0_8_;
        local_258 = (dVar125 * local_2e8[0] - dVar124 * local_2e8[3]) * dVar59;
        dStack_230 = (dVar124 * local_2e8[1] - dVar135) * (double)local_848._0_8_;
        local_848._8_8_ = dVar150 * dVar59;
        local_848._0_8_ = dVar58 * dVar126;
        local_278 = (1.0 - (local_2e8[2] * dVar124 + local_2e8[1] * dVar125)) * dVar126;
        dStack_250 = (1.0 - (local_2e8[2] * dVar124 + dVar140)) * dVar59;
        dStack_270 = (dVar125 * local_2e8[0] + dVar124 * local_2e8[3]) * dVar126;
        local_248 = (dVar124 * local_2e8[1] + dVar135) * dVar59;
        local_268 = (local_2e8[0] * dVar124 - dVar125 * local_2e8[3]) * dVar126;
        uStack_260 = 0;
        uStack_240 = 0;
        uStack_220 = 0;
        uStack_200 = 0x3ff0000000000000;
        local_218 = local_2c8;
        dStack_210 = dStack_2c0;
        local_208 = local_2b8;
        FUN_1447fea8d(local_178);
        dVar58 = local_178[2] * local_178[2] +
                 local_178[0] * local_178[0] + local_178[1] * local_178[1];
        dVar125 = local_148 * local_148 + local_158 * local_158 + local_150 * local_150;
        dVar150 = local_128 * local_128 + local_138 * local_138 + local_130 * local_130;
        uVar25 = -(ulonglong)(0.0 <= dVar58 + -9.99999993922529e-09);
        dVar58 = (double)(~uVar25 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar58)) & uVar25);
        uVar25 = -(ulonglong)(0.0 <= dVar125 + -9.99999993922529e-09);
        dVar125 = (double)(~uVar25 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar125)) & uVar25)
        ;
        uVar25 = -(ulonglong)(0.0 <= dVar150 + -9.99999993922529e-09);
        dVar126 = (double)local_848._0_8_;
        dVar59 = (double)local_848._8_8_;
        dVar150 = (double)(~uVar25 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar150)) & uVar25)
        ;
        auVar146._8_8_ = -(ulonglong)(0.0 <= (double)local_848._8_8_);
        auVar146._0_8_ = -(ulonglong)(0.0 <= (double)local_848._0_8_);
        auVar146 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar146);
        dVar124 = (double)(~-(ulonglong)(0.0 <= local_7e8) & 0xbff0000000000000 |
                          -(ulonglong)(0.0 <= local_7e8) & 0x3ff0000000000000);
        dVar135 = auVar146._0_8_;
        local_178[0] = local_178[0] * dVar58 * dVar135;
        local_178[1] = local_178[1] * dVar58 * dVar135;
        local_178[2] = dVar58 * local_178[2] * dVar135;
        dVar58 = auVar146._8_8_;
        local_148 = dVar125 * local_148 * dVar58;
        local_150 = local_150 * dVar125 * dVar58;
        local_158 = dVar58 * local_158 * dVar125;
        local_128 = dVar150 * local_128 * dVar124;
        local_130 = local_130 * dVar150 * dVar124;
        local_138 = dVar124 * local_138 * dVar150;
        pdVar16 = &local_668;
        FUN_14481fd10(pdVar16,local_178);
        uVar19 = SUB84(pdVar16,0);
        dVar58 = local_658 * local_658 + local_668 * local_668;
        dVar125 = dStack_650 * dStack_650 + dStack_660 * dStack_660;
        auVar71._0_8_ = dVar58 + dVar125;
        auVar71._8_8_ = dVar58 + dVar125;
        auVar26._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar71._8_8_);
        auVar26._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar71._0_8_);
        auVar146 = sqrtpd(auVar71,auVar71);
        auVar146 = divpd(_DAT_149934d80,auVar146);
        auVar96._0_8_ = auVar146._0_8_ * local_658;
        auVar96._8_8_ = auVar146._8_8_ * dStack_650;
        auVar117 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar96,auVar26);
        local_7f8 = (double)((ulonglong)(local_668 * auVar146._0_8_) &
                            -(ulonglong)(9.99999993922529e-09 <= auVar71._0_8_));
        dStack_7f0 = (double)((ulonglong)(dStack_660 * auVar146._8_8_) &
                             -(ulonglong)(9.99999993922529e-09 <= auVar71._8_8_));
        dVar124 = 0.0;
        dVar58 = local_118;
        dVar125 = dStack_110;
        dVar150 = local_108;
      }
      dVar135 = 0.0;
      if ((((local_4c8 != 0.0) || (NAN(local_4c8))) || (dStack_4c0 != 0.0)) || (NAN(dStack_4c0))) {
        dVar135 = atan2(dStack_4c0,local_4c8);
        dVar135 = dVar135 * 0.5;
      }
      local_848._8_8_ = dVar59;
      local_848._0_8_ = dVar126;
      dVar59 = SQRT(local_4c8 * local_4c8 + dStack_4c0 * dStack_4c0);
      dVar126 = 0.0;
      if (((local_4b8 != 0.0) || (NAN(local_4b8))) || ((dVar59 != 0.0 || (NAN(dVar59))))) {
        dVar126 = atan2(local_4b8,dVar59);
        dVar126 = dVar126 * 0.5;
      }
      dVar59 = sin(dVar126);
      dVar126 = cos(dVar126);
      dVar140 = sin(dVar135);
      dVar135 = cos(dVar135);
      dVar149 = 0.0;
      if (((dVar58 != 0.0) || (NAN(dVar58))) || ((dVar125 != 0.0 || (NAN(dVar125))))) {
        dVar149 = atan2(dVar125,dVar58);
        dVar149 = dVar149 * 0.5;
      }
      dVar116 = -(dVar59 * dVar140);
      dVar123 = -(-dVar59 * dVar135);
      dVar140 = dVar140 * dVar126 * -1.0;
      dVar135 = dVar126 * dVar135 * 1.0;
      dVar59 = SQRT(dVar58 * dVar58 + dVar125 * dVar125);
      dVar126 = 0.0;
      if ((((dVar150 != 0.0) || (NAN(dVar150))) || (dVar59 != 0.0)) || (NAN(dVar59))) {
        dVar126 = atan2(dVar150,dVar59);
        dVar126 = dVar126 * 0.5;
      }
      local_7a8 = dVar150;
      dStack_7a0 = dVar124;
      dVar150 = sin(dVar126);
      dVar126 = cos(dVar126);
      dVar59 = sin(dVar149);
      dVar124 = cos(dVar149);
      dVar149 = dVar150 * dVar59;
      dVar150 = -dVar150 * dVar124;
      dVar59 = dVar59 * dVar126;
      dVar126 = dVar126 * dVar124;
      dVar127 = dVar150 * dVar140 * -1.0 +
                dVar59 * dVar123 + dVar116 * dVar126 * 1.0 + dVar135 * dVar149;
      dVar134 = dVar149 * dVar140 * 1.0 +
                dVar126 * dVar123 + dVar116 * dVar59 * -1.0 + dVar135 * dVar150;
      dVar154 = dVar126 * dVar140 * 1.0 +
                ((dVar116 * dVar150 * 1.0 + dVar135 * dVar59) - dVar123 * dVar149);
      dVar149 = dVar59 * dVar140 * -1.0 +
                ((dVar116 * dVar149 * -1.0 + dVar135 * dVar126) - dVar123 * dVar150);
      dVar59 = (double)local_598._8_8_ * dVar154;
      dVar140 = local_5a8[0] * dVar154;
      dVar126 = local_5a8[0] * dVar134;
      dVar150 = local_5a8[0] * dVar127;
      dVar124 = local_5a8[1] * dVar127;
      dVar135 = local_5a8[1] * dVar134;
      local_5a8[0] = dVar134 * (double)local_598._0_8_ * -1.0 +
                     local_5a8[1] * dVar154 +
                     local_5a8[0] * dVar149 * 1.0 + (double)local_598._8_8_ * dVar127;
      local_5a8[1] = dVar127 * (double)local_598._0_8_ * 1.0 +
                     local_5a8[1] * dVar149 + dVar140 * -1.0 + (double)local_598._8_8_ * dVar134;
      local_598._8_8_ =
           dVar154 * (double)local_598._0_8_ * -1.0 +
           ((dVar150 * -1.0 + (double)local_598._8_8_ * dVar149) - dVar135);
      local_598._0_8_ =
           dVar149 * (double)local_598._0_8_ * 1.0 + ((dVar126 * 1.0 + dVar59) - dVar124);
      dVar126 = -dVar127;
      dVar150 = -dVar134;
      dVar154 = dVar154 * -1.0;
      dVar149 = dVar149 * 1.0;
      auVar85._8_8_ = DAT_14c846518;
      auVar85._0_8_ = DAT_14c846510;
      auVar97._8_8_ = 0;
      auVar97._0_8_ = DAT_14c846520;
      auVar146 = minpd(local_848,auVar85);
      auVar6._8_8_ = dStack_7e0;
      auVar6._0_8_ = local_7e8;
      auVar110 = minpd(auVar6,auVar97);
      auVar72._8_8_ = -(ulonglong)(auVar146._8_8_ < 0.0);
      auVar72._0_8_ = -(ulonglong)(auVar146._0_8_ < 0.0);
      iVar14 = movmskpd(extraout_EAX,auVar72);
      auVar106._8_8_ = -(ulonglong)(auVar110._8_8_ < 0.0);
      auVar106._0_8_ = -(ulonglong)(auVar110._0_8_ < 0.0);
      uVar18 = movmskpd(uVar19,auVar106);
      dVar59 = auVar117._0_8_;
      dVar124 = auVar117._8_8_;
      if ((uVar18 & 0x3fffffff) == 0 && iVar14 == 0) {
        local_7b8 = DAT_14c8464e0;
        dStack_7b0 = DAT_14c8464e8;
        local_4e8[0] = dStack_7f0 * dVar154 * -1.0 +
                       dVar59 * dVar150 + dVar124 * dVar126 * 1.0 + local_7f8 * dVar149;
        local_4e8[1] = local_7f8 * dVar154 * 1.0 +
                       dVar124 * dVar150 + dVar59 * dVar126 * -1.0 + dStack_7f0 * dVar149;
        dVar58 = dVar58 * DAT_14c846510;
        dVar125 = dVar125 * DAT_14c846518;
        dVar135 = local_7a8 * DAT_14c846520;
        dVar140 = dStack_7a0 * 0.0;
        dVar116 = dVar125 * dVar126 - dVar150 * dVar58;
        dVar123 = dVar135 * dVar150 - dVar154 * dVar125;
        dVar127 = dVar58 * dVar154 - dVar126 * dVar135;
        dVar134 = dVar140 * dVar149 - dVar149 * dVar140;
        dVar123 = dVar123 + dVar123;
        dVar127 = dVar127 + dVar127;
        dVar116 = dVar116 + dVar116;
        dVar134 = dVar134 + dVar134;
        local_4d8._8_8_ =
             dVar59 * dVar154 * -1.0 +
             ((dVar126 * local_7f8 * -1.0 + dVar124 * dVar149) - dVar150 * dStack_7f0);
        local_4d8._0_8_ =
             dVar124 * dVar154 * 1.0 +
             ((dVar126 * dStack_7f0 * 1.0 + dVar59 * dVar149) - dVar150 * local_7f8);
        local_4c8 = DAT_14c8464e0 +
                    (dVar116 * dVar150 - dVar154 * dVar127) + dVar149 * dVar123 + dVar58;
        dStack_4c0 = DAT_14c8464e8 +
                     (dVar123 * dVar154 - dVar116 * dVar126) + dVar149 * dVar127 + dVar125;
        local_4b8 = DAT_14c8464f0 +
                    (dVar127 * dVar126 - dVar150 * dVar123) + dVar149 * dVar116 + dVar135;
        dStack_4b0 = (dVar134 * dVar149 - dVar134 * dVar149) + dVar149 * dVar134 + dVar140 + 0.0;
        auVar141._0_8_ = (double)local_848._0_8_ * DAT_14c846510;
        auVar141._8_8_ = (double)local_848._8_8_ * DAT_14c846518;
        auVar111._8_8_ = dStack_7e0 * 0.0;
        auVar111._0_8_ = local_7e8 * DAT_14c846520;
        uVar19 = 0;
      }
      else {
        dVar134 = dVar150 - dVar134;
        dVar135 = dVar154 + dVar154;
        dVar116 = (dVar126 - dVar127) * dVar126;
        dVar140 = (dVar126 - dVar127) * dVar149;
        local_7b8 = local_7e8 * DAT_14c846520;
        dStack_7b0 = dStack_7e0 * 0.0;
        local_1a8 = (1.0 - (dVar116 + dVar134 * dVar150)) * DAT_14c846520;
        local_1b8 = (dVar134 * dVar149 + dVar126 * dVar135) * DAT_14c846520;
        local_1f8[4] = (dVar134 * dVar126 - dVar135 * dVar149) * DAT_14c846518;
        dStack_1b0 = (dVar135 * dVar150 - dVar140) * DAT_14c846520;
        local_838._8_8_ = (double)local_848._8_8_ * DAT_14c846518;
        local_838._0_8_ = (double)local_848._0_8_ * DAT_14c846510;
        local_1f8[0] = (1.0 - (dVar154 * dVar135 + dVar134 * dVar150)) * DAT_14c846510;
        dStack_1d0 = (1.0 - (dVar154 * dVar135 + dVar116)) * DAT_14c846518;
        local_1f8[1] = (dVar134 * dVar126 + dVar135 * dVar149) * DAT_14c846510;
        local_1c8 = (dVar135 * dVar150 + dVar140) * DAT_14c846518;
        local_1f8[2] = (dVar126 * dVar135 - dVar134 * dVar149) * DAT_14c846510;
        local_1f8[3] = 0.0;
        uStack_1c0 = 0;
        uStack_1a0 = 0;
        local_198 = DAT_14c8464e0;
        dStack_190 = DAT_14c8464e8;
        local_188 = DAT_14c8464f0;
        uStack_180 = 0x3ff0000000000000;
        dVar126 = dStack_7f0 + dStack_7f0;
        dVar135 = dVar59 + dVar59;
        dVar150 = local_7f8 * (local_7f8 + local_7f8);
        local_228 = (1.0 - (dVar150 + dStack_7f0 * dVar126)) * local_7e8;
        dVar140 = (local_7f8 + local_7f8) * dVar124;
        local_238 = (dVar126 * dVar124 + local_7f8 * dVar135) * local_7e8;
        local_258 = (dVar126 * local_7f8 - dVar135 * dVar124) * (double)local_848._8_8_;
        dStack_230 = (dVar135 * dStack_7f0 - dVar140) * local_7e8;
        local_278 = (1.0 - (dVar59 * dVar135 + dStack_7f0 * dVar126)) * (double)local_848._0_8_;
        dStack_250 = (1.0 - (dVar59 * dVar135 + dVar150)) * (double)local_848._8_8_;
        dStack_270 = (dVar126 * local_7f8 + dVar135 * dVar124) * (double)local_848._0_8_;
        local_248 = (dVar135 * dStack_7f0 + dVar140) * (double)local_848._8_8_;
        local_268 = (local_7f8 * dVar135 - dVar126 * dVar124) * (double)local_848._0_8_;
        uStack_260 = 0;
        uStack_240 = 0;
        uStack_220 = 0;
        local_208 = local_7a8;
        uStack_200 = 0x3ff0000000000000;
        local_218 = dVar58;
        dStack_210 = dVar125;
        FUN_1447fea8d(local_178);
        auVar141 = local_838;
        dVar58 = local_178[2] * local_178[2] +
                 local_178[0] * local_178[0] + local_178[1] * local_178[1];
        local_848._0_8_ = local_158;
        dVar125 = local_148 * local_148 + local_158 * local_158 + local_150 * local_150;
        dVar126 = local_128 * local_128 + local_138 * local_138 + local_130 * local_130;
        uVar25 = -(ulonglong)(0.0 <= dVar58 + -9.99999993922529e-09);
        dVar58 = (double)(~uVar25 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar58)) & uVar25);
        uVar25 = -(ulonglong)(0.0 <= dVar125 + -9.99999993922529e-09);
        dVar125 = (double)(~uVar25 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar125)) & uVar25)
        ;
        uVar25 = -(ulonglong)(0.0 <= dVar126 + -9.99999993922529e-09);
        dVar126 = (double)(~uVar25 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar126)) & uVar25)
        ;
        auVar27._8_8_ = -(ulonglong)(0.0 <= local_838._8_8_);
        auVar27._0_8_ = -(ulonglong)(0.0 <= local_838._0_8_);
        auVar146 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar27);
        auVar111._8_8_ = dStack_7b0;
        auVar111._0_8_ = local_7b8;
        dVar150 = (double)(~-(ulonglong)(0.0 <= local_7b8) & 0xbff0000000000000 |
                          -(ulonglong)(0.0 <= local_7b8) & 0x3ff0000000000000);
        dVar59 = auVar146._0_8_;
        local_178[0] = local_178[0] * dVar58 * dVar59;
        local_178[1] = local_178[1] * dVar58 * dVar59;
        local_178[2] = dVar58 * local_178[2] * dVar59;
        dVar58 = auVar146._8_8_;
        local_148 = dVar125 * local_148 * dVar58;
        local_150 = local_150 * dVar125 * dVar58;
        local_158 = dVar58 * local_158 * dVar125;
        local_128 = dVar126 * local_128 * dVar150;
        local_130 = local_130 * dVar126 * dVar150;
        local_138 = dVar150 * local_138 * dVar126;
        pdVar16 = &local_668;
        iVar14 = FUN_14481fd10(pdVar16,local_178);
        uVar19 = SUB84(pdVar16,0);
        dVar58 = local_658 * local_658 + local_668 * local_668;
        dVar125 = dStack_650 * dStack_650 + dStack_660 * dStack_660;
        auVar86._0_8_ = dVar58 + dVar125;
        auVar86._8_8_ = dVar58 + dVar125;
        auVar28._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar86._8_8_);
        auVar28._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar86._0_8_);
        auVar146 = sqrtpd(auVar86,auVar86);
        auVar146 = divpd(_DAT_149934d80,auVar146);
        auVar98._0_8_ = auVar146._0_8_ * local_658;
        auVar98._8_8_ = auVar146._8_8_ * dStack_650;
        local_4e8[0] = (double)((ulonglong)(local_668 * auVar146._0_8_) &
                               -(ulonglong)(9.99999993922529e-09 <= auVar86._0_8_));
        local_4e8[1] = (double)((ulonglong)(dStack_660 * auVar146._8_8_) &
                               -(ulonglong)(9.99999993922529e-09 <= auVar86._8_8_));
        local_4d8 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar98,auVar28);
        dStack_4b0 = 0.0;
        local_4c8 = local_118;
        dStack_4c0 = dStack_110;
        local_4b8 = local_108;
      }
      auVar7._8_8_ = dStack_560;
      auVar7._0_8_ = local_568;
      auVar9._8_8_ = dStack_550;
      auVar9._0_8_ = local_558;
      auVar146 = minpd(auVar141,auVar7);
      local_5b8 = auVar111._0_8_;
      auVar110 = minpd(auVar111,auVar9);
      auVar107._8_8_ = -(ulonglong)(auVar146._8_8_ < 0.0);
      auVar107._0_8_ = -(ulonglong)(auVar146._0_8_ < 0.0);
      iVar14 = movmskpd(iVar14,auVar107);
      auVar118._8_8_ = -(ulonglong)(auVar110._8_8_ < 0.0);
      auVar118._0_8_ = -(ulonglong)(auVar110._0_8_ < 0.0);
      uVar18 = movmskpd(uVar19,auVar118);
      dVar58 = local_4d8._0_8_;
      dVar125 = local_4d8._8_8_;
      local_838._0_8_ = auVar141._0_8_;
      local_838._8_8_ = auVar141._8_8_;
      local_838 = auVar141;
      local_4a8 = auVar141;
      local_498 = auVar111;
      if ((uVar18 & 0x3fffffff) == 0 && iVar14 == 0) {
        local_608[0] = local_4e8[1] * (double)local_598._0_8_ * -1.0 +
                       dVar58 * local_5a8[1] +
                       dVar125 * local_5a8[0] * 1.0 + local_4e8[0] * (double)local_598._8_8_;
        local_608[1] = local_4e8[0] * (double)local_598._0_8_ * 1.0 +
                       dVar125 * local_5a8[1] +
                       dVar58 * local_5a8[0] * -1.0 + local_4e8[1] * (double)local_598._8_8_;
        local_5f8._0_8_ =
             dVar125 * (double)local_598._0_8_ * 1.0 +
             ((local_5a8[0] * local_4e8[1] * 1.0 + dVar58 * (double)local_598._8_8_) -
             local_4e8[0] * local_5a8[1]);
        local_5f8._8_8_ =
             dVar58 * (double)local_598._0_8_ * -1.0 +
             ((local_5a8[0] * local_4e8[0] * -1.0 + dVar125 * (double)local_598._8_8_) -
             local_4e8[1] * local_5a8[1]);
        dVar58 = local_4c8 * local_568;
        dVar125 = dStack_4c0 * dStack_560;
        dVar126 = local_4b8 * local_558;
        dVar150 = dStack_4b0 * dStack_550;
        dVar59 = dVar125 * local_5a8[0] - dVar58 * local_5a8[1];
        dVar124 = dVar126 * local_5a8[1] - dVar125 * (double)local_598._0_8_;
        dVar135 = dVar58 * (double)local_598._0_8_ - dVar126 * local_5a8[0];
        dVar140 = dVar150 * (double)local_598._8_8_ - dVar150 * (double)local_598._8_8_;
        dVar124 = dVar124 + dVar124;
        dVar135 = dVar135 + dVar135;
        dVar59 = dVar59 + dVar59;
        dVar140 = dVar140 + dVar140;
        local_5c8 = (double)local_838._0_8_ * local_568;
        dStack_5c0 = (double)local_838._8_8_ * dStack_560;
        local_5b8 = local_5b8 * local_558;
        dStack_5b0 = auVar111._8_8_ * dStack_550;
        local_5e8 = (dVar59 * local_5a8[1] - (double)local_598._0_8_ * dVar135) +
                    (double)local_598._8_8_ * dVar124 + dVar58 + local_588;
        dStack_5e0 = (dVar124 * (double)local_598._0_8_ - dVar59 * local_5a8[0]) +
                     (double)local_598._8_8_ * dVar135 + dVar125 + dStack_580;
        local_5d8 = (dVar135 * local_5a8[0] - local_5a8[1] * dVar124) +
                    (double)local_598._8_8_ * dVar59 + dVar126 + local_578;
        dStack_5d0 = (dVar140 * (double)local_598._8_8_ - dVar140 * (double)local_598._8_8_) +
                     (double)local_598._8_8_ * dVar140 + dVar150 + dStack_570;
      }
      else {
        dVar150 = local_5a8[1] + local_5a8[1];
        dVar59 = (double)local_598._0_8_ + (double)local_598._0_8_;
        dVar126 = local_5a8[0] * (local_5a8[0] + local_5a8[0]);
        dVar124 = (local_5a8[0] + local_5a8[0]) * (double)local_598._8_8_;
        local_7e8 = local_5b8 * local_558;
        dStack_7e0 = auVar111._8_8_ * dStack_550;
        local_1a8 = (1.0 - (dVar126 + local_5a8[1] * dVar150)) * local_558;
        local_1b8 = (dVar150 * (double)local_598._8_8_ + local_5a8[0] * dVar59) * local_558;
        local_1f8[4] = (dVar150 * local_5a8[0] - dVar59 * (double)local_598._8_8_) * dStack_560;
        dStack_1b0 = (dVar59 * local_5a8[1] - dVar124) * local_558;
        local_7f8 = (double)local_838._0_8_ * local_568;
        dStack_7f0 = (double)local_838._8_8_ * dStack_560;
        local_1f8[0] = (1.0 - ((double)local_598._0_8_ * dVar59 + local_5a8[1] * dVar150)) *
                       local_568;
        dStack_1d0 = (1.0 - ((double)local_598._0_8_ * dVar59 + dVar126)) * dStack_560;
        local_1f8[1] = (dVar150 * local_5a8[0] + dVar59 * (double)local_598._8_8_) * local_568;
        local_1c8 = (dVar59 * local_5a8[1] + dVar124) * dStack_560;
        local_1f8[2] = (local_5a8[0] * dVar59 - dVar150 * (double)local_598._8_8_) * local_568;
        local_1f8[3] = 0.0;
        uStack_1c0 = 0;
        uStack_1a0 = 0;
        local_198 = local_588;
        dStack_190 = dStack_580;
        local_188 = local_578;
        uStack_180 = 0x3ff0000000000000;
        dVar126 = local_4e8[1] + local_4e8[1];
        dVar59 = dVar58 + dVar58;
        dVar150 = local_4e8[0] * (local_4e8[0] + local_4e8[0]);
        local_228 = (1.0 - (dVar150 + local_4e8[1] * dVar126)) * local_5b8;
        dVar124 = (local_4e8[0] + local_4e8[0]) * dVar125;
        local_238 = (dVar126 * dVar125 + local_4e8[0] * dVar59) * local_5b8;
        local_258 = (dVar126 * local_4e8[0] - dVar59 * dVar125) * (double)local_838._8_8_;
        dStack_230 = (dVar59 * local_4e8[1] - dVar124) * local_5b8;
        local_278 = (1.0 - (dVar58 * dVar59 + local_4e8[1] * dVar126)) * (double)local_838._0_8_;
        dStack_250 = (1.0 - (dVar58 * dVar59 + dVar150)) * (double)local_838._8_8_;
        dStack_270 = (dVar126 * local_4e8[0] + dVar59 * dVar125) * (double)local_838._0_8_;
        local_248 = (dVar59 * local_4e8[1] + dVar124) * (double)local_838._8_8_;
        local_268 = (local_4e8[0] * dVar59 - dVar126 * dVar125) * (double)local_838._0_8_;
        uStack_260 = 0;
        uStack_240 = 0;
        uStack_220 = 0;
        uStack_200 = 0x3ff0000000000000;
        local_218 = local_4c8;
        dStack_210 = dStack_4c0;
        local_208 = local_4b8;
        FUN_1447fea8d(local_178);
        dVar140 = dStack_7e0;
        dVar135 = local_7e8;
        dVar124 = dStack_7f0;
        dVar59 = local_7f8;
        auVar146 = _DAT_149934d80;
        local_838._0_8_ = local_178[2];
        dVar58 = local_178[2] * local_178[2] +
                 local_178[0] * local_178[0] + local_178[1] * local_178[1];
        dVar125 = local_148 * local_148 + local_158 * local_158 + local_150 * local_150;
        dVar126 = local_128 * local_128 + local_138 * local_138 + local_130 * local_130;
        local_848 = ZEXT816(0);
        uVar25 = -(ulonglong)(0.0 <= dVar58 + -9.99999993922529e-09);
        dVar58 = (double)(~uVar25 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar58)) & uVar25);
        uVar25 = -(ulonglong)(0.0 <= dVar125 + -9.99999993922529e-09);
        dVar125 = (double)(~uVar25 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar125)) & uVar25)
        ;
        uVar25 = -(ulonglong)(0.0 <= dVar126 + -9.99999993922529e-09);
        dVar126 = (double)(~uVar25 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar126)) & uVar25)
        ;
        auVar29._8_8_ = -(ulonglong)(0.0 <= dStack_7f0);
        auVar29._0_8_ = -(ulonglong)(0.0 <= local_7f8);
        auVar110 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar29);
        dVar150 = (double)(~-(ulonglong)(0.0 <= local_7e8) & 0xbff0000000000000 |
                          -(ulonglong)(0.0 <= local_7e8) & 0x3ff0000000000000);
        dVar149 = auVar110._0_8_;
        local_178[0] = local_178[0] * dVar58 * dVar149;
        local_178[1] = local_178[1] * dVar58 * dVar149;
        local_178[2] = dVar58 * local_178[2] * dVar149;
        dVar58 = auVar110._8_8_;
        local_148 = dVar125 * local_148 * dVar58;
        local_150 = local_150 * dVar125 * dVar58;
        local_158 = dVar58 * local_158 * dVar125;
        local_128 = dVar126 * local_128 * dVar150;
        local_130 = local_130 * dVar126 * dVar150;
        local_138 = dVar150 * local_138 * dVar126;
        FUN_14481fd10(&local_668,local_178);
        dVar58 = local_658 * local_658 + local_668 * local_668;
        dVar125 = dStack_650 * dStack_650 + dStack_660 * dStack_660;
        auVar73._0_8_ = dVar58 + dVar125;
        auVar73._8_8_ = dVar58 + dVar125;
        auVar30._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar73._8_8_);
        auVar30._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar73._0_8_);
        auVar110 = sqrtpd(auVar73,auVar73);
        auVar146 = divpd(auVar146,auVar110);
        auVar87._0_8_ = auVar146._0_8_ * local_658;
        auVar87._8_8_ = auVar146._8_8_ * dStack_650;
        local_608[0] = (double)((ulonglong)(local_668 * auVar146._0_8_) &
                               -(ulonglong)(9.99999993922529e-09 <= auVar73._0_8_));
        local_608[1] = (double)((ulonglong)(dStack_660 * auVar146._8_8_) &
                               -(ulonglong)(9.99999993922529e-09 <= auVar73._8_8_));
        local_848._8_8_ = 0x3ff0000000000000;
        local_5f8 = blendvpd(local_848,auVar87,auVar30);
        dStack_5d0 = 0.0;
        local_5e8 = local_118;
        dStack_5e0 = dStack_110;
        local_5d8 = local_108;
        local_5c8 = dVar59;
        dStack_5c0 = dVar124;
        local_5b8 = dVar135;
        dStack_5b0 = dVar140;
      }
    }
  }
  dVar124 = dStack_7c0;
  dVar59 = local_7c8;
  dVar150 = dStack_800;
  dVar126 = local_808;
  dVar125 = dStack_810;
  dVar58 = local_818;
  local_860 = param_1 + 0x50;
  local_868._0_4_ = (uint)*(byte *)(param_1 + 0x3d);
  FUN_144af7426(&local_668,*param_2 + 0x10,plVar1,param_1 + 0x3e);
  local_860 = param_1 + 0x36;
  local_868 = (undefined8 *)CONCAT44(local_868._4_4_,(uint)*(byte *)(param_1 + 0x22));
  FUN_144af7426(local_6c8,*param_2 + 0x10,plVar1,param_1 + 0x24);
  local_6e8 = local_6a8;
  uStack_6e0 = uStack_6a0;
  local_6d8 = local_698;
  local_708 = local_648;
  uStack_700 = uStack_640;
  local_6f8 = local_638;
  if ((*(float *)((longlong)param_1 + 0x1d4) < 1.0) && (0.0 < *(float *)(param_1 + 0x3b))) {
    local_178[0] = local_528;
    local_178[1] = dStack_520;
    local_178[2] = local_518;
    local_868 = &local_708;
    FUN_142842088(local_178,
                  (float)(SQRT((local_5e8 - local_588) * (local_5e8 - local_588) +
                               (dStack_5e0 - dStack_580) * (dStack_5e0 - dStack_580) +
                               (local_5d8 - local_578) * (local_5d8 - local_578)) +
                         SQRT((local_588 - local_528) * (local_588 - local_528) +
                              (dStack_580 - dStack_520) * (dStack_580 - dStack_520) +
                              (local_578 - local_518) * (local_578 - local_518))));
  }
  local_850 = (double)*(float *)((longlong)param_1 + 0x34);
  local_858 = (double)*(float *)(param_1 + 6);
  local_860 = (longlong *)
              (CONCAT71(local_860._1_7_,*(undefined1 *)((longlong)param_1 + 0x1dc)) &
              0xffffffffffffff01);
  local_868 = &local_708;
  FUN_1402e32a3(&local_548,local_5a8,local_608,&local_6e8);
  if ((*(byte *)((longlong)param_1 + 0x1dc) & 2) == 0) {
    iVar14 = *(int *)(*(longlong *)(lVar22 + 0x90) +
                     (longlong)*(int *)((longlong)param_1 + 0x10c) * 4);
    dVar124 = (double)param_1[7];
    dVar135 = (double)param_1[8];
    dVar59 = (double)param_1[9];
    dVar140 = 0.0;
    if ((char)param_1[10] == '\x01') {
      dVar123 = dVar124 * DAT_14c846490 - DAT_14c846480 * dVar59;
      dVar140 = DAT_14c846498 * 0.0 - DAT_14c846498 * 0.0;
      dVar149 = dVar135 * DAT_14c846480 - dVar124 * DAT_14c846488;
      dVar116 = dVar59 * DAT_14c846488 - dVar135 * DAT_14c846490;
      dVar116 = dVar116 + dVar116;
      dVar123 = dVar123 + dVar123;
      dVar149 = dVar149 + dVar149;
      dVar140 = dVar140 + dVar140;
      dVar124 = (dVar149 * DAT_14c846488 - dVar123 * DAT_14c846490) +
                DAT_14c846498 * dVar116 + dVar124;
      dVar135 = (DAT_14c846490 * dVar116 - DAT_14c846480 * dVar149) +
                DAT_14c846498 * dVar123 + dVar135;
      dVar59 = dVar149 * DAT_14c846498 + dVar59 +
               (dVar123 * DAT_14c846480 - dVar116 * DAT_14c846488);
    }
    local_848._8_8_ = dVar140;
    local_848._0_8_ = dVar59;
    if (iVar14 != -1) {
      if (*(char *)(param_2[7] + (longlong)iVar14) == '\0') {
        FUN_1447d5d8e(plVar1,iVar14);
      }
      pdVar16 = (double *)((longlong)iVar14 * 0x60 + *plVar1);
      pdVar24 = local_1f8;
      for (lVar22 = 0xc; lVar22 != 0; lVar22 = lVar22 + -1) {
        *pdVar24 = *pdVar16;
        pdVar16 = pdVar16 + 1;
        pdVar24 = pdVar24 + 1;
      }
      FUN_1449437a2(&local_548,local_178);
      auVar11._8_8_ = local_178[3];
      auVar11._0_8_ = local_178[2];
      dVar126 = dVar59 * local_178[2] + dVar124 * local_178[0] + dVar135 * local_178[1];
      auVar74._0_8_ = dVar59 * dVar126;
      auVar74._8_8_ = dVar140;
      dVar58 = dVar135 * dVar126;
      dVar126 = dVar126 * dVar124;
      dVar125 = local_178[3] * local_178[3] +
                auVar74._0_8_ * auVar74._0_8_ + dVar126 * dVar126 + dVar58 * dVar58;
      if ((dVar125 != 0.0) || (NAN(dVar125))) {
        auVar146 = blendpd(auVar74,auVar11,2);
        dVar125 = auVar146._0_8_;
        dVar150 = auVar146._8_8_;
        dVar59 = dVar125 * dVar125 + dVar126 * dVar126;
        dVar140 = dVar150 * dVar150 + dVar58 * dVar58;
        auVar88._0_8_ = dVar59 + dVar140;
        auVar88._8_8_ = dVar59 + dVar140;
        auVar31._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar88._8_8_);
        auVar31._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar88._0_8_);
        auVar146 = sqrtpd(auVar88,auVar88);
        auVar146 = divpd(_DAT_149934d80,auVar146);
        auVar136._0_8_ = auVar146._0_8_ * dVar125;
        auVar136._8_8_ = auVar146._8_8_ * dVar150;
        auVar128._0_8_ =
             (ulonglong)(dVar126 * auVar146._0_8_) &
             -(ulonglong)(9.99999993922529e-09 <= auVar88._0_8_);
        auVar128._8_8_ =
             (ulonglong)(dVar58 * auVar146._8_8_) &
             -(ulonglong)(9.99999993922529e-09 <= auVar88._8_8_);
        auVar146 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar136,auVar31);
      }
      else {
        auVar128._8_8_ = (ulonglong)DAT_14c8463d8;
        auVar128._0_8_ = (ulonglong)DAT_14c8463d0;
        auVar146 = _DAT_14c8463e0;
      }
      dVar58 = auVar146._0_8_ * -1.0;
      dVar125 = auVar146._8_8_ * 1.0;
      dVar59 = auVar128._0_8_;
      dVar140 = auVar128._8_8_;
      dVar126 = (dVar58 * local_178[1] + (local_178[0] * dVar125 * 1.0 - local_178[3] * dVar59)) -
                dVar140 * local_178[2] * -1.0;
      dVar150 = (dVar125 * local_178[1] + (local_178[0] * dVar58 * -1.0 - local_178[3] * dVar140)) -
                dVar59 * local_178[2] * 1.0;
      dVar149 = dVar125 * local_178[2] * 1.0 +
                local_178[1] * dVar59 + (local_178[3] * dVar58 - local_178[0] * dVar140 * 1.0);
      dVar59 = dVar58 * local_178[2] * -1.0 +
               local_178[1] * dVar140 + (local_178[3] * dVar125 - local_178[0] * dVar59 * -1.0);
      dVar58 = dVar149 * dVar149 + dVar126 * dVar126;
      dVar125 = dVar59 * dVar59 + dVar150 * dVar150;
      auVar99._0_8_ = dVar58 + dVar125;
      auVar99._8_8_ = dVar58 + dVar125;
      auVar32._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar99._8_8_);
      auVar32._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar99._0_8_);
      auVar146 = sqrtpd(auVar128,auVar99);
      auVar110 = divpd(_DAT_149934d80,auVar146);
      auVar147._0_8_ = auVar110._0_8_ * dVar149;
      auVar147._8_8_ = auVar110._8_8_ * dVar59;
      auVar146 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar147,auVar32);
      dVar59 = (double)local_848._0_8_ * local_368[2] +
               local_368[0] * dVar124 + dVar135 * local_368[1];
      dVar149 = (double)local_848._0_8_ * dVar59;
      dVar116 = dVar135 * dVar59;
      dVar59 = dVar59 * dVar124;
      dVar140 = local_368[3] * local_368[3] +
                dVar149 * dVar149 + dVar59 * dVar59 + dVar116 * dVar116;
      dVar58 = (double)((ulonglong)(dVar126 * auVar110._0_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar99._0_8_));
      dVar125 = (double)((ulonglong)(dVar150 * auVar110._8_8_) &
                        -(ulonglong)(9.99999993922529e-09 <= auVar99._8_8_));
      if ((dVar140 != 0.0) ||
         (auVar110 = _DAT_14c8463e0, dVar126 = DAT_14c8463d0, dVar150 = DAT_14c8463d8, NAN(dVar140))
         ) {
        dVar126 = dVar149 * dVar149 + dVar59 * dVar59;
        dVar150 = local_368[3] * local_368[3] + dVar116 * dVar116;
        auVar129._0_8_ = dVar126 + dVar150;
        auVar129._8_8_ = dVar126 + dVar150;
        auVar33._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar129._8_8_);
        auVar33._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar129._0_8_);
        auVar110 = sqrtpd(auVar129,auVar129);
        auVar151 = divpd(_DAT_149934d80,auVar110);
        auVar152._0_8_ = auVar151._0_8_ * dVar149;
        auVar152._8_8_ = auVar151._8_8_ * local_368[3];
        auVar110 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar152,auVar33);
        dVar126 = (double)((ulonglong)(dVar59 * auVar151._0_8_) &
                          -(ulonglong)(9.99999993922529e-09 <= auVar129._0_8_));
        dVar150 = (double)((ulonglong)(dVar116 * auVar151._8_8_) &
                          -(ulonglong)(9.99999993922529e-09 <= auVar129._8_8_));
      }
      auVar34._0_8_ = dVar126 * dVar126;
      auVar34._8_8_ = dVar150 * dVar150;
      dVar149 = auVar110._0_8_;
      dVar116 = auVar110._8_8_;
      dVar59 = dVar149 * dVar149 + auVar34._0_8_;
      dVar140 = dVar116 * dVar116 + auVar34._8_8_;
      auVar130._0_8_ = dVar59 + dVar140;
      auVar130._8_8_ = dVar59 + dVar140;
      auVar110 = sqrtpd(auVar34,auVar130);
      auVar110 = divpd(_DAT_149934d80,auVar110);
      auVar131._0_8_ = auVar110._0_8_ * dVar149;
      auVar131._8_8_ = auVar110._8_8_ * dVar116;
      dVar149 = (double)((ulonglong)(dVar126 * auVar110._0_8_) &
                        -(ulonglong)(9.99999993922529e-09 <= auVar130._0_8_));
      dVar116 = (double)((ulonglong)(dVar150 * auVar110._8_8_) &
                        -(ulonglong)(9.99999993922529e-09 <= auVar130._8_8_));
      auVar35._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar130._8_8_);
      auVar35._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar130._0_8_);
      auVar110 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar131,auVar35);
      dVar140 = auVar146._0_8_;
      dVar123 = auVar146._8_8_;
      dVar126 = dVar125 * local_1f8[2] * -1.0 +
                dVar140 * local_1f8[1] + dVar123 * local_1f8[0] * 1.0 + dVar58 * local_1f8[3];
      dVar150 = dVar58 * local_1f8[2] * 1.0 +
                dVar123 * local_1f8[1] + dVar140 * local_1f8[0] * -1.0 + dVar125 * local_1f8[3];
      dVar59 = dVar123 * local_1f8[2] * 1.0 +
               ((local_1f8[0] * dVar125 * 1.0 + local_1f8[3] * dVar140) - dVar58 * local_1f8[1]);
      dVar125 = dVar140 * local_1f8[2] * -1.0 +
                ((local_1f8[0] * dVar58 * -1.0 + local_1f8[3] * dVar123) - dVar125 * local_1f8[1]);
      dVar123 = auVar110._0_8_;
      dVar127 = auVar110._8_8_;
      auVar61._8_4_ = SUB84(dVar149,0);
      auVar61._0_8_ = dVar116;
      auVar61._12_4_ = (int)((ulonglong)dVar149 >> 0x20);
      dVar58 = dVar116 * dVar59 * -1.0 +
               dVar123 * dVar150 + dVar126 * dVar127 * 1.0 + dVar149 * dVar125;
      dVar140 = auVar61._8_8_ * dVar59 * 1.0 +
                dVar127 * dVar150 + dVar126 * dVar123 * -1.0 + dVar116 * dVar125;
      dVar149 = dVar127 * dVar59 * 1.0 +
                ((dVar126 * dVar116 * 1.0 + dVar125 * dVar123) - dVar150 * dVar149);
      dVar150 = dVar123 * dVar59 * -1.0 +
                ((dVar126 * auVar61._8_8_ * -1.0 + dVar125 * dVar127) - dVar150 * dVar116);
      dVar125 = dVar149 * dVar149 + dVar58 * dVar58;
      dVar126 = dVar150 * dVar150 + dVar140 * dVar140;
      auVar75._0_8_ = dVar125 + dVar126;
      auVar75._8_8_ = dVar125 + dVar126;
      auVar36._8_8_ = -(ulonglong)(1e-08 <= auVar75._8_8_);
      auVar36._0_8_ = -(ulonglong)(1e-08 <= auVar75._0_8_);
      auVar146 = sqrtpd(auVar75,auVar75);
      auVar146 = divpd(_DAT_149934d80,auVar146);
      auVar100._0_8_ = auVar146._0_8_ * dVar149;
      auVar100._8_8_ = auVar146._8_8_ * dVar150;
      local_548 = (double)((ulonglong)(dVar58 * auVar146._0_8_) &
                          -(ulonglong)(1e-08 <= auVar75._0_8_));
      dStack_540 = (double)((ulonglong)(dVar140 * auVar146._8_8_) &
                           -(ulonglong)(1e-08 <= auVar75._8_8_));
      local_538 = blendvpd(_DAT_149935300,auVar100,auVar36);
      dVar59 = (double)local_848._0_8_;
      dVar140 = (double)local_848._8_8_;
      dVar126 = local_808;
      dVar150 = dStack_800;
      dVar58 = local_818;
      dVar125 = dStack_810;
    }
    FUN_1449437a2(local_5a8,local_178,&local_548);
    auVar12._8_8_ = local_178[3];
    auVar12._0_8_ = local_178[2];
    dVar149 = dVar59 * local_178[2] + dVar124 * local_178[0] + local_178[1] * dVar135;
    auVar76._0_8_ = dVar59 * dVar149;
    auVar76._8_8_ = dVar140;
    dVar59 = dVar135 * dVar149;
    dVar149 = dVar149 * dVar124;
    dVar140 = local_178[3] * local_178[3] +
              auVar76._0_8_ * auVar76._0_8_ + dVar149 * dVar149 + dVar59 * dVar59;
    if ((dVar140 != 0.0) ||
       (auVar146 = _DAT_14c8463e0, dVar116 = DAT_14c8463d0, dVar123 = DAT_14c8463d8, NAN(dVar140)))
    {
      auVar146 = blendpd(auVar76,auVar12,2);
      dVar140 = auVar146._0_8_;
      dVar116 = auVar146._8_8_;
      dVar123 = dVar140 * dVar140 + dVar149 * dVar149;
      dVar127 = dVar116 * dVar116 + dVar59 * dVar59;
      auVar89._0_8_ = dVar123 + dVar127;
      auVar89._8_8_ = dVar123 + dVar127;
      auVar37._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar89._8_8_);
      auVar37._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar89._0_8_);
      auVar146 = sqrtpd(auVar89,auVar89);
      auVar110 = divpd(_DAT_149934d80,auVar146);
      auVar112._0_8_ = auVar110._0_8_ * dVar140;
      auVar112._8_8_ = auVar110._8_8_ * dVar116;
      auVar146 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar112,auVar37);
      dVar116 = (double)((ulonglong)(dVar149 * auVar110._0_8_) &
                        -(ulonglong)(9.99999993922529e-09 <= auVar89._0_8_));
      dVar123 = (double)((ulonglong)(dVar59 * auVar110._8_8_) &
                        -(ulonglong)(9.99999993922529e-09 <= auVar89._8_8_));
    }
    dVar59 = auVar146._0_8_ * -1.0;
    dVar140 = auVar146._8_8_ * 1.0;
    auVar113._0_8_ = local_178[3] * dVar116;
    auVar113._8_8_ = local_178[3] * dVar123;
    dVar149 = (dVar59 * local_178[1] + (local_178[0] * dVar140 * 1.0 - auVar113._0_8_)) -
              dVar123 * local_178[2] * -1.0;
    dVar127 = (dVar140 * local_178[1] + (local_178[0] * dVar59 * -1.0 - auVar113._8_8_)) -
              dVar116 * local_178[2] * 1.0;
    dVar134 = dVar140 * local_178[2] * 1.0 +
              local_178[1] * dVar116 + (local_178[3] * dVar59 - local_178[0] * dVar123 * 1.0);
    dVar116 = dVar59 * local_178[2] * -1.0 +
              local_178[1] * dVar123 + (local_178[3] * dVar140 - local_178[0] * dVar116 * -1.0);
    dVar59 = dVar134 * dVar134 + dVar149 * dVar149;
    dVar140 = dVar116 * dVar116 + dVar127 * dVar127;
    auVar101._0_8_ = dVar59 + dVar140;
    auVar101._8_8_ = dVar59 + dVar140;
    auVar38._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar101._8_8_);
    auVar38._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar101._0_8_);
    auVar146 = sqrtpd(auVar113,auVar101);
    auVar146 = divpd(_DAT_149934d80,auVar146);
    auVar132._0_8_ = auVar146._0_8_ * dVar134;
    auVar132._8_8_ = auVar146._8_8_ * dVar116;
    dVar140 = (double)((ulonglong)(dVar149 * auVar146._0_8_) &
                      -(ulonglong)(9.99999993922529e-09 <= auVar101._0_8_));
    dVar149 = (double)((ulonglong)(dVar127 * auVar146._8_8_) &
                      -(ulonglong)(9.99999993922529e-09 <= auVar101._8_8_));
    auVar146 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar132,auVar38);
    dVar116 = (double)local_848._0_8_ * local_3c8[2] +
              local_3c8[0] * dVar124 + local_3c8[1] * dVar135;
    dVar123 = (double)local_848._0_8_ * dVar116;
    dVar135 = dVar135 * dVar116;
    dVar116 = dVar116 * dVar124;
    dVar59 = local_3c8[3] * local_3c8[3] + dVar123 * dVar123 + dVar116 * dVar116 + dVar135 * dVar135
    ;
    if ((dVar59 != 0.0) ||
       (auVar110 = _DAT_14c8463e0, dVar124 = DAT_14c8463d0, dVar127 = DAT_14c8463d8, NAN(dVar59))) {
      dVar59 = dVar123 * dVar123 + dVar116 * dVar116;
      dVar124 = local_3c8[3] * local_3c8[3] + dVar135 * dVar135;
      auVar114._0_8_ = dVar59 + dVar124;
      auVar114._8_8_ = dVar59 + dVar124;
      auVar39._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar114._8_8_);
      auVar39._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar114._0_8_);
      auVar110 = sqrtpd(auVar114,auVar114);
      auVar151 = divpd(_DAT_149934d80,auVar110);
      auVar119._0_8_ = auVar151._0_8_ * dVar123;
      auVar119._8_8_ = auVar151._8_8_ * local_3c8[3];
      auVar110 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar119,auVar39);
      dVar124 = (double)((ulonglong)(dVar116 * auVar151._0_8_) &
                        -(ulonglong)(9.99999993922529e-09 <= auVar114._0_8_));
      dVar127 = (double)((ulonglong)(dVar135 * auVar151._8_8_) &
                        -(ulonglong)(9.99999993922529e-09 <= auVar114._8_8_));
    }
    auVar40._0_8_ = dVar124 * dVar124;
    auVar40._8_8_ = dVar127 * dVar127;
    dVar116 = auVar110._0_8_;
    dVar123 = auVar110._8_8_;
    dVar59 = dVar116 * dVar116 + auVar40._0_8_;
    dVar135 = dVar123 * dVar123 + auVar40._8_8_;
    auVar115._0_8_ = dVar59 + dVar135;
    auVar115._8_8_ = dVar59 + dVar135;
    auVar110 = sqrtpd(auVar40,auVar115);
    auVar110 = divpd(_DAT_149934d80,auVar110);
    auVar120._0_8_ = auVar110._0_8_ * dVar116;
    auVar120._8_8_ = auVar110._8_8_ * dVar123;
    dVar123 = (double)((ulonglong)(dVar124 * auVar110._0_8_) &
                      -(ulonglong)(9.99999993922529e-09 <= auVar115._0_8_));
    dVar154 = (double)((ulonglong)(dVar127 * auVar110._8_8_) &
                      -(ulonglong)(9.99999993922529e-09 <= auVar115._8_8_));
    auVar41._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar115._8_8_);
    auVar41._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar115._0_8_);
    auVar110 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar120,auVar41);
    dVar116 = auVar146._0_8_;
    dVar127 = auVar146._8_8_;
    dVar59 = dVar149 * (double)local_538._0_8_ * -1.0 +
             dVar116 * dStack_540 + dVar127 * local_548 * 1.0 + dVar140 * (double)local_538._8_8_;
    dVar124 = dVar140 * (double)local_538._0_8_ * 1.0 +
              dVar127 * dStack_540 + dVar116 * local_548 * -1.0 + dVar149 * (double)local_538._8_8_;
    dVar135 = dVar127 * (double)local_538._0_8_ * 1.0 +
              ((local_548 * dVar149 * 1.0 + (double)local_538._8_8_ * dVar116) -
              dVar140 * dStack_540);
    dVar149 = dVar116 * (double)local_538._0_8_ * -1.0 +
              ((local_548 * dVar140 * -1.0 + (double)local_538._8_8_ * dVar127) -
              dVar149 * dStack_540);
    dVar127 = auVar110._0_8_;
    dVar134 = auVar110._8_8_;
    auVar62._8_4_ = SUB84(dVar123,0);
    auVar62._0_8_ = dVar154;
    auVar62._12_4_ = (int)((ulonglong)dVar123 >> 0x20);
    dVar140 = dVar154 * dVar135 * -1.0 +
              dVar127 * dVar124 + dVar59 * dVar134 * 1.0 + dVar123 * dVar149;
    dVar116 = auVar62._8_8_ * dVar135 * 1.0 +
              dVar134 * dVar124 + dVar59 * dVar127 * -1.0 + dVar154 * dVar149;
    dVar123 = dVar134 * dVar135 * 1.0 +
              ((dVar59 * dVar154 * 1.0 + dVar149 * dVar127) - dVar124 * dVar123);
    dVar135 = dVar127 * dVar135 * -1.0 +
              ((dVar59 * auVar62._8_8_ * -1.0 + dVar149 * dVar134) - dVar124 * dVar154);
    dVar59 = dVar123 * dVar123 + dVar140 * dVar140;
    dVar124 = dVar135 * dVar135 + dVar116 * dVar116;
    auVar77._0_8_ = dVar59 + dVar124;
    auVar77._8_8_ = dVar59 + dVar124;
    auVar42._8_8_ = -(ulonglong)(1e-08 <= auVar77._8_8_);
    auVar42._0_8_ = -(ulonglong)(1e-08 <= auVar77._0_8_);
    auVar146 = sqrtpd(auVar77,auVar77);
    auVar146 = divpd(_DAT_149934d80,auVar146);
    auVar102._0_8_ = auVar146._0_8_ * dVar123;
    auVar102._8_8_ = auVar146._8_8_ * dVar135;
    local_598 = blendvpd(_DAT_149935300,auVar102,auVar42);
    local_5a8[0] = (double)((ulonglong)(dVar140 * auVar146._0_8_) &
                           -(ulonglong)(1e-08 <= auVar77._0_8_));
    local_5a8[1] = (double)((ulonglong)(dVar116 * auVar146._8_8_) &
                           -(ulonglong)(1e-08 <= auVar77._8_8_));
    dVar59 = local_7c8;
    dVar124 = dStack_7c0;
  }
  fVar57 = *(float *)((longlong)param_1 + 0x1cc);
  fVar3 = *(float *)(param_1 + 0x3a);
  if ((1e-05 < fVar57) ||
     (dVar140 = local_608[0], dVar135 = local_608[1], auVar137 = local_5f8, 1e-05 < fVar3)) {
    dVar149 = DAT_14c8463d0;
    dVar116 = DAT_14c8463d8;
    auVar137 = _DAT_14c8463e0;
    if (1e-05 < fVar57) {
      pdVar16 = (double *)(param_1 + 0x54);
      pauVar2 = (undefined1 (*) [16])(param_1 + 0x56);
      if ((local_828[0] & 0xfe) == 2) {
        pdVar16 = &local_668;
        pauVar2 = (undefined1 (*) [16])&local_658;
      }
      dVar149 = *pdVar16;
      dVar116 = pdVar16[1];
      auVar137 = *pauVar2;
    }
    dVar140 = dVar149;
    dVar135 = dVar116;
    if (1e-05 < fVar3) {
      dVar140 = local_4e8[1] * (double)local_598._0_8_ * -1.0 +
                (double)local_4d8._0_8_ * local_5a8[1] +
                local_5a8[0] * (double)local_4d8._8_8_ * 1.0 +
                (double)local_598._8_8_ * local_4e8[0];
      dVar135 = local_4e8[0] * (double)local_598._0_8_ * 1.0 +
                (double)local_4d8._8_8_ * local_5a8[1] +
                local_5a8[0] * (double)local_4d8._0_8_ * -1.0 +
                (double)local_598._8_8_ * local_4e8[1];
      dVar150 = (double)local_4d8._8_8_ * (double)local_598._0_8_ * 1.0 +
                ((local_5a8[0] * local_4e8[1] * 1.0 +
                 (double)local_598._8_8_ * (double)local_4d8._0_8_) - local_5a8[1] * local_4e8[0]);
      dVar123 = (double)local_4d8._0_8_ * (double)local_598._0_8_ * -1.0 +
                ((local_5a8[0] * local_4e8[0] * -1.0 +
                 (double)local_598._8_8_ * (double)local_4d8._8_8_) - local_5a8[1] * local_4e8[1]);
      dVar126 = auVar137._8_8_;
      if (fVar57 <= 1e-05) {
        auVar137._8_8_ = dVar123;
        auVar137._0_8_ = dVar150;
        dVar126 = local_808;
        dVar150 = dStack_800;
      }
      else {
        dVar58 = dVar123 * dVar126 +
                 auVar137._0_8_ * dVar150 + dVar135 * dVar116 + dVar149 * dVar140;
        dVar124 = (double)(fVar57 / (fVar3 + fVar57));
        dVar125 = dVar58 * (double)(&DAT_149931160)[0.0 <= dVar58];
        dVar59 = 1.0 - dVar124;
        dVar124 = (double)(&DAT_149931160)[0.0 <= dVar58] * dVar124;
        if (dVar125 < 0.9999) {
          dVar58 = dVar125;
          if (1.0 <= dVar125) {
            dVar58 = 1.0;
          }
          local_828._8_8_ = dVar135;
          local_828._0_8_ = dVar135;
          local_838._8_8_ = dVar126;
          local_838._0_8_ = dVar126;
          dVar58 = acos((double)(-(ulonglong)(dVar125 < -1.0) & 0xbff0000000000000 |
                                ~-(ulonglong)(dVar125 < -1.0) & (ulonglong)dVar58));
          local_848._0_8_ = dVar58;
          dVar58 = sin(dVar58);
          dVar59 = sin(dVar59 * (double)local_848._0_8_);
          dVar59 = dVar59 * (1.0 / dVar58);
          dVar124 = sin(dVar124 * (double)local_848._0_8_);
          dVar124 = dVar124 * (1.0 / dVar58);
          dVar135 = (double)local_828._0_8_;
          dVar126 = (double)local_838._0_8_;
        }
        dVar58 = dVar59 * dVar126 + dVar123 * dVar124;
        dVar123 = auVar137._0_8_ * dVar59 + dVar150 * dVar124;
        dVar135 = dVar116 * dVar59 + dVar135 * dVar124;
        dVar150 = dVar149 * dVar59 + dVar124 * dVar140;
        dVar125 = dVar123 * dVar123 + dVar150 * dVar150;
        dVar126 = dVar58 * dVar58 + dVar135 * dVar135;
        auVar63._0_8_ = dVar125 + dVar126;
        auVar63._8_8_ = dVar125 + dVar126;
        auVar43._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar63._8_8_);
        auVar43._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar63._0_8_);
        auVar146 = sqrtpd(auVar63,auVar63);
        auVar146 = divpd(_DAT_149934d80,auVar146);
        auVar78._0_8_ = auVar146._0_8_ * dVar123;
        auVar78._8_8_ = auVar146._8_8_ * dVar58;
        dVar140 = (double)((ulonglong)(dVar150 * auVar146._0_8_) &
                          -(ulonglong)(9.99999993922529e-09 <= auVar63._0_8_));
        dVar135 = (double)((ulonglong)(dVar135 * auVar146._8_8_) &
                          -(ulonglong)(9.99999993922529e-09 <= auVar63._8_8_));
        auVar137 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar78,auVar43);
        dVar59 = local_7c8;
        dVar124 = dStack_7c0;
        dVar126 = local_808;
        dVar150 = dStack_800;
        dVar58 = local_818;
        dVar125 = dStack_810;
      }
    }
    if (fVar3 + fVar57 < 0.99999) {
      uVar4 = local_5f8._0_8_;
      uVar5 = local_5f8._8_8_;
      dVar58 = auVar137._8_8_ * (double)local_5f8._8_8_ +
               auVar137._0_8_ * (double)local_5f8._0_8_ +
               dVar140 * local_608[0] + dVar135 * local_608[1];
      dVar150 = (double)(fVar3 + fVar57);
      dVar125 = dVar58 * (double)(&DAT_149931160)[0.0 <= dVar58];
      dVar126 = 1.0 - dVar150;
      dVar150 = (double)(&DAT_149931160)[0.0 <= dVar58] * dVar150;
      if (dVar125 < 0.9999) {
        dVar58 = dVar125;
        if (1.0 <= dVar125) {
          dVar58 = 1.0;
        }
        local_848._0_8_ = local_608[0];
        local_828._0_8_ = local_608[1];
        dVar58 = acos((double)(-(ulonglong)(dVar125 < -1.0) & 0xbff0000000000000 |
                              ~-(ulonglong)(dVar125 < -1.0) & (ulonglong)dVar58));
        dVar125 = sin(dVar58);
        dVar126 = sin(dVar126 * dVar58);
        dVar124 = dStack_7c0;
        dVar59 = local_7c8;
        dVar126 = dVar126 * (1.0 / dVar125);
        dVar150 = sin(dVar150 * dVar58);
        dVar150 = dVar150 * (1.0 / dVar125);
        local_608[0] = (double)local_848._0_8_;
        local_608[1] = (double)local_828._0_8_;
      }
      dVar58 = dVar126 * auVar137._8_8_ + (double)uVar5 * dVar150;
      dVar149 = auVar137._0_8_ * dVar126 + (double)uVar4 * dVar150;
      dVar116 = dVar135 * dVar126 + local_608[1] * dVar150;
      dVar135 = dVar140 * dVar126 + local_608[0] * dVar150;
      dVar125 = dVar149 * dVar149 + dVar135 * dVar135;
      dVar126 = dVar58 * dVar58 + dVar116 * dVar116;
      auVar64._0_8_ = dVar125 + dVar126;
      auVar64._8_8_ = dVar125 + dVar126;
      auVar44._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar64._8_8_);
      auVar44._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar64._0_8_);
      auVar146 = sqrtpd(auVar64,auVar64);
      auVar146 = divpd(_DAT_149934d80,auVar146);
      auVar79._0_8_ = auVar146._0_8_ * dVar149;
      auVar79._8_8_ = auVar146._8_8_ * dVar58;
      auVar137 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar79,auVar44);
      dVar126 = local_808;
      dVar150 = dStack_800;
      dVar58 = local_818;
      dVar125 = dStack_810;
      dVar140 = (double)((ulonglong)(dVar135 * auVar146._0_8_) &
                        -(ulonglong)(9.99999993922529e-09 <= auVar64._0_8_));
      dVar135 = (double)((ulonglong)(dVar116 * auVar146._8_8_) &
                        -(ulonglong)(9.99999993922529e-09 <= auVar64._8_8_));
    }
  }
  local_5f8 = auVar137;
  local_608[1] = dVar135;
  local_608[0] = dVar140;
  iVar14 = local_7cc;
  auVar133._8_8_ = uStack_780;
  auVar133._0_8_ = local_788;
  if (local_288 == '\x01') {
    FUN_1449437a2(local_608,local_178,local_5a8);
    pdVar16 = local_178;
    pdVar24 = local_4e8;
    for (lVar22 = 0xc; lVar22 != 0; lVar22 = lVar22 + -1) {
      *pdVar24 = *pdVar16;
      pdVar16 = pdVar16 + 1;
      pdVar24 = pdVar24 + 1;
    }
    pdVar16 = local_2e8;
    FUN_144a2c3ca(pdVar16,&local_768,local_4e8);
    dVar126 = local_4b8;
    dVar125 = dStack_4c0;
    dVar58 = local_4c8;
    uVar19 = SUB84(pdVar16,0);
    dVar150 = 0.0;
    if ((((local_4c8 != 0.0) || (NAN(local_4c8))) || (dStack_4c0 != 0.0)) || (NAN(dStack_4c0))) {
      dVar150 = atan2(dStack_4c0,local_4c8);
      dVar150 = dVar150 * 0.5;
    }
    dVar125 = SQRT(dVar58 * dVar58 + dVar125 * dVar125);
    dVar58 = 0.0;
    if (((dVar126 != 0.0) || (NAN(dVar126))) || ((dVar125 != 0.0 || (NAN(dVar125))))) {
      dVar58 = atan2(dVar126,dVar125);
      dVar58 = dVar58 * 0.5;
    }
    dVar59 = sin(dVar58);
    dVar124 = cos(dVar58);
    dVar135 = sin(dVar150);
    dVar150 = cos(dVar150);
    dVar126 = local_738;
    dVar125 = dStack_740;
    dVar58 = local_748;
    dVar140 = 0.0;
    if (((local_748 != 0.0) || (NAN(local_748))) || ((dStack_740 != 0.0 || (NAN(dStack_740))))) {
      dVar140 = atan2(dStack_740,local_748);
      dVar140 = dVar140 * 0.5;
    }
    dVar149 = dVar135 * dVar124 * -1.0;
    dVar124 = dVar124 * dVar150 * 1.0;
    dVar135 = -(dVar59 * dVar135);
    dVar150 = -(-dVar59 * dVar150);
    dVar125 = SQRT(dVar58 * dVar58 + dVar125 * dVar125);
    dVar58 = 0.0;
    if ((((dVar126 != 0.0) || (NAN(dVar126))) || (dVar125 != 0.0)) || (NAN(dVar125))) {
      dVar58 = atan2(dVar126,dVar125);
      dVar58 = dVar58 * 0.5;
    }
    dVar125 = sin(dVar58);
    dVar58 = cos(dVar58);
    dVar126 = sin(dVar140);
    dVar59 = cos(dVar140);
    dVar140 = dVar125 * dVar126;
    dVar125 = -dVar125 * dVar59;
    dVar126 = dVar126 * dVar58;
    dVar58 = dVar58 * dVar59;
    dVar123 = dVar125 * dVar149 * -1.0 +
              dVar126 * dVar150 + dVar135 * dVar58 * 1.0 + dVar124 * dVar140;
    dVar127 = dVar140 * dVar149 * 1.0 +
              dVar58 * dVar150 + dVar135 * dVar126 * -1.0 + dVar124 * dVar125;
    dVar116 = dVar58 * dVar149 * 1.0 +
              ((dVar135 * dVar125 * 1.0 + dVar124 * dVar126) - dVar150 * dVar140);
    dVar124 = dVar126 * dVar149 * -1.0 +
              ((dVar135 * dVar140 * -1.0 + dVar124 * dVar58) - dVar150 * dVar125);
    dVar126 = (double)local_598._8_8_ * dVar116;
    dVar135 = local_5a8[0] * dVar116;
    dVar58 = local_5a8[0] * dVar127;
    dVar125 = local_5a8[0] * dVar123;
    dVar150 = local_5a8[1] * dVar123;
    dVar59 = local_5a8[1] * dVar127;
    local_5a8[0] = dVar127 * (double)local_598._0_8_ * -1.0 +
                   local_5a8[1] * dVar116 +
                   local_5a8[0] * dVar124 * 1.0 + (double)local_598._8_8_ * dVar123;
    local_5a8[1] = dVar123 * (double)local_598._0_8_ * 1.0 +
                   local_5a8[1] * dVar124 + dVar135 * -1.0 + (double)local_598._8_8_ * dVar127;
    local_598._8_8_ =
         dVar116 * (double)local_598._0_8_ * -1.0 +
         ((dVar125 * -1.0 + (double)local_598._8_8_ * dVar124) - dVar59);
    local_598._0_8_ = dVar124 * (double)local_598._0_8_ * 1.0 + ((dVar58 * 1.0 + dVar126) - dVar150)
    ;
    dVar150 = -dVar123;
    dVar59 = -dVar127;
    dVar116 = dVar116 * -1.0;
    dVar124 = dVar124 * 1.0;
    local_848._0_8_ = DAT_14c8464e0;
    local_848._8_8_ = DAT_14c8464e8;
    auVar153._8_8_ = DAT_14c846518;
    auVar153._0_8_ = DAT_14c846510;
    auVar108._8_8_ = 0;
    auVar108._0_8_ = DAT_14c846520;
    dVar58 = local_728._0_8_;
    dVar126 = local_728._8_8_;
    dVar125 = local_718._0_8_;
    auVar146 = minpd(local_728,auVar153);
    auVar110 = minpd(local_718,auVar108);
    auVar45._8_8_ = -(ulonglong)(auVar146._8_8_ < 0.0);
    auVar45._0_8_ = -(ulonglong)(auVar146._0_8_ < 0.0);
    iVar15 = movmskpd(extraout_EAX_00,auVar45);
    auVar65._8_8_ = -(ulonglong)(auVar110._8_8_ < 0.0);
    auVar65._0_8_ = -(ulonglong)(auVar110._0_8_ < 0.0);
    uVar18 = movmskpd(uVar19,auVar65);
    if ((uVar18 & 0x3fffffff) == 0 && iVar15 == 0) {
      local_4e8[0] = dStack_760 * dVar116 * -1.0 +
                     local_758 * dVar59 + dVar150 * dStack_750 * 1.0 + dVar124 * local_768;
      local_4e8[1] = local_768 * dVar116 * 1.0 +
                     dStack_750 * dVar59 + dVar150 * local_758 * -1.0 + dVar124 * dStack_760;
      local_748 = local_748 * DAT_14c846510;
      dStack_740 = dStack_740 * DAT_14c846518;
      local_738 = local_738 * DAT_14c846520;
      dStack_730 = dStack_730 * 0.0;
      dVar135 = dStack_740 * dVar150 - dVar59 * local_748;
      dVar123 = local_738 * dVar59 - dVar116 * dStack_740;
      dVar149 = local_748 * dVar116 - dVar150 * local_738;
      dVar140 = dStack_730 * dVar124 - dVar124 * dStack_730;
      dVar123 = dVar123 + dVar123;
      dVar149 = dVar149 + dVar149;
      dVar135 = dVar135 + dVar135;
      dVar140 = dVar140 + dVar140;
      local_4d8._8_8_ =
           local_758 * dVar116 * -1.0 +
           ((dVar150 * local_768 * -1.0 + dVar124 * dStack_750) - dVar59 * dStack_760);
      local_4d8._0_8_ =
           dStack_750 * dVar116 * 1.0 +
           ((dVar150 * dStack_760 * 1.0 + dVar124 * local_758) - dVar59 * local_768);
      local_4c8 = DAT_14c8464e0 +
                  (dVar135 * dVar59 - dVar116 * dVar149) + dVar124 * dVar123 + local_748;
      dStack_4c0 = DAT_14c8464e8 +
                   (dVar123 * dVar116 - dVar135 * dVar150) + dVar124 * dVar149 + dStack_740;
      local_4b8 = DAT_14c8464f0 +
                  (dVar149 * dVar150 - dVar59 * dVar123) + dVar124 * dVar135 + local_738;
      dStack_4b0 = (dVar140 * dVar124 - dVar140 * dVar124) + dVar124 * dVar140 + dStack_730 + 0.0;
      auVar148._0_8_ = dVar125 * DAT_14c846520;
      auVar148._8_8_ = local_718._8_8_ * 0.0;
      local_828._8_8_ = dVar126 * DAT_14c846518;
      local_828._0_8_ = dVar58 * DAT_14c846510;
      uVar19 = 0;
    }
    else {
      dVar127 = dVar59 - dVar127;
      dVar140 = dVar116 + dVar116;
      dVar135 = (dVar150 - dVar123) * dVar150;
      dVar149 = (dVar150 - dVar123) * dVar124;
      local_1f8[4] = (dVar127 * dVar150 - dVar140 * dVar124) * DAT_14c846518;
      dStack_1b0 = (dVar140 * dVar59 - dVar149) * DAT_14c846520;
      local_828._8_8_ = dVar126 * DAT_14c846518;
      local_828._0_8_ = dVar58 * DAT_14c846510;
      local_1f8[0] = (1.0 - (dVar116 * dVar140 + dVar127 * dVar59)) * DAT_14c846510;
      dStack_1d0 = (1.0 - (dVar116 * dVar140 + dVar135)) * DAT_14c846518;
      local_1f8[1] = (dVar127 * dVar150 + dVar140 * dVar124) * DAT_14c846510;
      local_1c8 = (dVar140 * dVar59 + dVar149) * DAT_14c846518;
      local_1b8 = (dVar127 * dVar124 + dVar150 * dVar140) * DAT_14c846520;
      local_1f8[2] = (dVar150 * dVar140 - dVar127 * dVar124) * DAT_14c846510;
      local_1a8 = (1.0 - (dVar135 + dVar127 * dVar59)) * DAT_14c846520;
      local_838._8_8_ = local_718._8_8_ * 0.0;
      local_838._0_8_ = DAT_14c846520 * dVar125;
      local_1f8[3] = 0.0;
      uStack_1c0 = 0;
      uStack_1a0 = 0;
      local_198 = DAT_14c8464e0;
      dStack_190 = DAT_14c8464e8;
      local_188 = DAT_14c8464f0;
      uStack_180 = 0x3ff0000000000000;
      dVar150 = dStack_760 + dStack_760;
      dVar59 = local_758 + local_758;
      dVar135 = local_768 * (local_768 + local_768);
      local_228 = (1.0 - (dVar135 + dStack_760 * dVar150)) * dVar125;
      dVar124 = (local_768 + local_768) * dStack_750;
      local_238 = (dVar150 * dStack_750 + local_768 * dVar59) * dVar125;
      local_258 = (dVar150 * local_768 - dVar59 * dStack_750) * dVar126;
      dStack_230 = (dVar59 * dStack_760 - dVar124) * dVar125;
      local_278 = (1.0 - (local_758 * dVar59 + dStack_760 * dVar150)) * dVar58;
      dStack_250 = (1.0 - (local_758 * dVar59 + dVar135)) * dVar126;
      dStack_270 = (dVar150 * local_768 + dVar59 * dStack_750) * dVar58;
      local_248 = (dVar59 * dStack_760 + dVar124) * dVar126;
      local_268 = (local_768 * dVar59 - dVar150 * dStack_750) * dVar58;
      uStack_260 = 0;
      uStack_240 = 0;
      uStack_220 = 0;
      local_218 = local_748;
      dStack_210 = dStack_740;
      local_208 = local_738;
      uStack_200 = 0x3ff0000000000000;
      FUN_1447fea8d(local_178);
      auVar148 = local_838;
      auVar146 = _DAT_149934d80;
      dVar58 = local_178[2] * local_178[2] +
               local_178[0] * local_178[0] + local_178[1] * local_178[1];
      local_848._0_8_ = local_158;
      dVar125 = local_148 * local_148 + local_158 * local_158 + local_150 * local_150;
      dVar126 = local_128 * local_128 + local_138 * local_138 + local_130 * local_130;
      uVar25 = -(ulonglong)(0.0 <= dVar58 + -9.99999993922529e-09);
      dVar58 = (double)(~uVar25 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar58)) & uVar25);
      uVar25 = -(ulonglong)(0.0 <= dVar125 + -9.99999993922529e-09);
      dVar125 = (double)(~uVar25 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar125)) & uVar25);
      uVar25 = -(ulonglong)(0.0 <= dVar126 + -9.99999993922529e-09);
      dVar126 = (double)(~uVar25 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar126)) & uVar25);
      auVar46._8_8_ = -(ulonglong)(0.0 <= (double)local_828._8_8_);
      auVar46._0_8_ = -(ulonglong)(0.0 <= (double)local_828._0_8_);
      auVar110 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar46);
      uVar25 = -(ulonglong)(0.0 <= local_838._0_8_);
      dVar150 = (double)(~uVar25 & 0xbff0000000000000 | uVar25 & 0x3ff0000000000000);
      dVar59 = auVar110._0_8_;
      local_178[0] = local_178[0] * dVar58 * dVar59;
      local_178[1] = local_178[1] * dVar58 * dVar59;
      local_178[2] = dVar58 * local_178[2] * dVar59;
      dVar58 = auVar110._8_8_;
      local_148 = dVar125 * local_148 * dVar58;
      local_150 = local_150 * dVar125 * dVar58;
      local_158 = dVar58 * local_158 * dVar125;
      local_128 = dVar126 * local_128 * dVar150;
      local_130 = local_130 * dVar126 * dVar150;
      local_138 = dVar150 * local_138 * dVar126;
      pdVar16 = &local_308;
      iVar15 = FUN_14481fd10(pdVar16,local_178);
      uVar19 = SUB84(pdVar16,0);
      dVar58 = local_2f8 * local_2f8 + local_308 * local_308;
      dVar125 = dStack_2f0 * dStack_2f0 + dStack_300 * dStack_300;
      auVar90._0_8_ = dVar58 + dVar125;
      auVar90._8_8_ = dVar58 + dVar125;
      auVar47._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar90._8_8_);
      auVar47._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar90._0_8_);
      auVar110 = sqrtpd(auVar90,auVar90);
      auVar146 = divpd(auVar146,auVar110);
      auVar103._0_8_ = auVar146._0_8_ * local_2f8;
      auVar103._8_8_ = auVar146._8_8_ * dStack_2f0;
      local_4e8[0] = (double)((ulonglong)(local_308 * auVar146._0_8_) &
                             -(ulonglong)(9.99999993922529e-09 <= auVar90._0_8_));
      local_4e8[1] = (double)((ulonglong)(dStack_300 * auVar146._8_8_) &
                             -(ulonglong)(9.99999993922529e-09 <= auVar90._8_8_));
      local_4d8 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar103,auVar47);
      dStack_4b0 = 0.0;
      local_4b8 = local_108;
      local_4c8 = local_118;
      dStack_4c0 = dStack_110;
    }
    local_848._8_8_ = dStack_4c0;
    local_848._0_8_ = local_4c8;
    local_838._8_8_ = dStack_4b0;
    local_838._0_8_ = local_4b8;
    local_4a8 = local_828;
    auVar8._8_8_ = dStack_560;
    auVar8._0_8_ = local_568;
    auVar10._8_8_ = dStack_550;
    auVar10._0_8_ = local_558;
    auVar146 = minpd(local_828,auVar8);
    dVar135 = auVar148._0_8_;
    auVar110 = minpd(auVar148,auVar10);
    auVar48._8_8_ = -(ulonglong)(auVar146._8_8_ < 0.0);
    auVar48._0_8_ = -(ulonglong)(auVar146._0_8_ < 0.0);
    iVar15 = movmskpd(iVar15,auVar48);
    auVar66._8_8_ = -(ulonglong)(auVar110._8_8_ < 0.0);
    auVar66._0_8_ = -(ulonglong)(auVar110._0_8_ < 0.0);
    uVar18 = movmskpd(uVar19,auVar66);
    dVar58 = local_4d8._0_8_;
    dVar125 = local_4d8._8_8_;
    local_498 = auVar148;
    if ((uVar18 & 0x3fffffff) == 0 && iVar15 == 0) {
      local_608[0] = local_4e8[1] * (double)local_598._0_8_ * -1.0 +
                     dVar58 * local_5a8[1] +
                     dVar125 * local_5a8[0] * 1.0 + local_4e8[0] * (double)local_598._8_8_;
      local_608[1] = local_4e8[0] * (double)local_598._0_8_ * 1.0 +
                     dVar125 * local_5a8[1] +
                     dVar58 * local_5a8[0] * -1.0 + local_4e8[1] * (double)local_598._8_8_;
      local_5f8._0_8_ =
           dVar125 * (double)local_598._0_8_ * 1.0 +
           ((local_5a8[0] * local_4e8[1] * 1.0 + dVar58 * (double)local_598._8_8_) -
           local_4e8[0] * local_5a8[1]);
      local_5f8._8_8_ =
           dVar58 * (double)local_598._0_8_ * -1.0 +
           ((local_5a8[0] * local_4e8[0] * -1.0 + dVar125 * (double)local_598._8_8_) -
           local_4e8[1] * local_5a8[1]);
      dVar123 = local_4c8 * local_568;
      dVar127 = dStack_4c0 * dStack_560;
      dVar59 = local_4b8 * local_558;
      dVar124 = dStack_4b0 * dStack_550;
      dVar58 = dVar127 * local_5a8[0] - dVar123 * local_5a8[1];
      dVar150 = dVar59 * local_5a8[1] - dVar127 * (double)local_598._0_8_;
      dVar126 = dVar123 * (double)local_598._0_8_ - dVar59 * local_5a8[0];
      dVar125 = dVar124 * (double)local_598._8_8_ - dVar124 * (double)local_598._8_8_;
      dVar150 = dVar150 + dVar150;
      dVar126 = dVar126 + dVar126;
      dVar58 = dVar58 + dVar58;
      dVar125 = dVar125 + dVar125;
      dVar140 = (double)local_828._0_8_ * local_568;
      dVar149 = (double)local_828._8_8_ * dStack_560;
      dVar135 = dVar135 * local_558;
      dVar116 = auVar148._8_8_ * dStack_550;
      local_118 = (dVar58 * local_5a8[1] - (double)local_598._0_8_ * dVar126) +
                  (double)local_598._8_8_ * dVar150 + dVar123 + local_588;
      dStack_110 = (dVar150 * (double)local_598._0_8_ - dVar58 * local_5a8[0]) +
                   (double)local_598._8_8_ * dVar126 + dVar127 + dStack_580;
      local_108 = (dVar126 * local_5a8[0] - local_5a8[1] * dVar150) +
                  (double)local_598._8_8_ * dVar58 + dVar59 + local_578;
      dStack_5d0 = (dVar125 * (double)local_598._8_8_ - dVar125 * (double)local_598._8_8_) +
                   (double)local_598._8_8_ * dVar125 + dVar124 + dStack_570;
    }
    else {
      dVar150 = local_5a8[1] + local_5a8[1];
      dVar59 = (double)local_598._0_8_ + (double)local_598._0_8_;
      dVar126 = local_5a8[0] * (local_5a8[0] + local_5a8[0]);
      dVar124 = (local_5a8[0] + local_5a8[0]) * (double)local_598._8_8_;
      local_7e8 = dVar135 * local_558;
      dStack_7e0 = auVar148._8_8_ * dStack_550;
      local_1a8 = (1.0 - (dVar126 + local_5a8[1] * dVar150)) * local_558;
      local_1b8 = (dVar150 * (double)local_598._8_8_ + local_5a8[0] * dVar59) * local_558;
      local_1f8[4] = (dVar150 * local_5a8[0] - dVar59 * (double)local_598._8_8_) * dStack_560;
      dStack_1b0 = (dVar59 * local_5a8[1] - dVar124) * local_558;
      local_7f8 = (double)local_828._0_8_ * local_568;
      dStack_7f0 = (double)local_828._8_8_ * dStack_560;
      local_1f8[0] = (1.0 - ((double)local_598._0_8_ * dVar59 + local_5a8[1] * dVar150)) * local_568
      ;
      dStack_1d0 = (1.0 - ((double)local_598._0_8_ * dVar59 + dVar126)) * dStack_560;
      local_1f8[1] = (dVar150 * local_5a8[0] + dVar59 * (double)local_598._8_8_) * local_568;
      local_1c8 = (dVar59 * local_5a8[1] + dVar124) * dStack_560;
      local_1f8[2] = (local_5a8[0] * dVar59 - dVar150 * (double)local_598._8_8_) * local_568;
      local_1f8[3] = 0.0;
      uStack_1c0 = 0;
      uStack_1a0 = 0;
      local_198 = local_588;
      dStack_190 = dStack_580;
      local_188 = local_578;
      uStack_180 = 0x3ff0000000000000;
      dVar150 = local_4e8[1] + local_4e8[1];
      dVar59 = dVar58 + dVar58;
      dVar126 = local_4e8[0] * (local_4e8[0] + local_4e8[0]);
      local_228 = (1.0 - (dVar126 + local_4e8[1] * dVar150)) * dVar135;
      dVar124 = (local_4e8[0] + local_4e8[0]) * dVar125;
      local_238 = (local_4e8[0] * dVar59 + dVar150 * dVar125) * dVar135;
      local_258 = (dVar150 * local_4e8[0] - dVar59 * dVar125) * (double)local_828._8_8_;
      dStack_230 = (dVar59 * local_4e8[1] - dVar124) * dVar135;
      local_278 = (1.0 - (dVar58 * dVar59 + local_4e8[1] * dVar150)) * (double)local_828._0_8_;
      dStack_250 = (1.0 - (dVar58 * dVar59 + dVar126)) * (double)local_828._8_8_;
      dStack_270 = (dVar150 * local_4e8[0] + dVar59 * dVar125) * (double)local_828._0_8_;
      local_248 = (dVar59 * local_4e8[1] + dVar124) * (double)local_828._8_8_;
      local_268 = (local_4e8[0] * dVar59 - dVar150 * dVar125) * (double)local_828._0_8_;
      uStack_260 = 0;
      uStack_240 = 0;
      uStack_220 = 0;
      uStack_200 = 0x3ff0000000000000;
      local_218 = local_4c8;
      dStack_210 = dStack_4c0;
      local_208 = local_4b8;
      FUN_1447fea8d(local_178);
      dVar116 = dStack_7e0;
      dVar135 = local_7e8;
      dVar149 = dStack_7f0;
      dVar140 = local_7f8;
      local_828._0_8_ = local_178[2];
      dVar58 = local_178[2] * local_178[2] +
               local_178[0] * local_178[0] + local_178[1] * local_178[1];
      dVar126 = local_148 * local_148 + local_158 * local_158 + local_150 * local_150;
      dVar150 = local_128 * local_128 + local_138 * local_138 + local_130 * local_130;
      uVar25 = -(ulonglong)(0.0 <= dVar58 + -9.99999993922529e-09);
      dVar125 = (double)(~uVar25 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar58)) & uVar25);
      uVar25 = -(ulonglong)(0.0 <= dVar126 + -9.99999993922529e-09);
      dVar126 = (double)(~uVar25 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar126)) & uVar25);
      local_848 = ZEXT816(0);
      uVar25 = -(ulonglong)(0.0 <= dVar150 + -9.99999993922529e-09);
      dVar150 = (double)(~uVar25 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar150)) & uVar25);
      auVar49._8_8_ = -(ulonglong)(0.0 <= dStack_7f0);
      auVar49._0_8_ = -(ulonglong)(0.0 <= local_7f8);
      auVar146 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar49);
      dVar58 = (double)(~-(ulonglong)(0.0 <= local_7e8) & 0xbff0000000000000 |
                       -(ulonglong)(0.0 <= local_7e8) & 0x3ff0000000000000);
      dVar59 = auVar146._0_8_;
      local_178[0] = local_178[0] * dVar125 * dVar59;
      local_178[1] = local_178[1] * dVar125 * dVar59;
      local_178[2] = dVar125 * local_178[2] * dVar59;
      dVar125 = auVar146._8_8_;
      local_148 = dVar126 * local_148 * dVar125;
      local_150 = local_150 * dVar126 * dVar125;
      local_158 = dVar125 * local_158 * dVar126;
      local_128 = dVar150 * local_128 * dVar58;
      local_130 = local_130 * dVar150 * dVar58;
      local_138 = dVar58 * local_138 * dVar150;
      FUN_14481fd10(&local_308,local_178);
      dVar58 = local_2f8 * local_2f8 + local_308 * local_308;
      dVar125 = dStack_2f0 * dStack_2f0 + dStack_300 * dStack_300;
      auVar80._0_8_ = dVar58 + dVar125;
      auVar80._8_8_ = dVar58 + dVar125;
      auVar50._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar80._8_8_);
      auVar50._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar80._0_8_);
      auVar146 = sqrtpd(auVar80,auVar80);
      auVar146 = divpd(_DAT_149934d80,auVar146);
      auVar91._0_8_ = auVar146._0_8_ * local_2f8;
      auVar91._8_8_ = auVar146._8_8_ * dStack_2f0;
      local_608[0] = (double)((ulonglong)(local_308 * auVar146._0_8_) &
                             -(ulonglong)(9.99999993922529e-09 <= auVar80._0_8_));
      local_608[1] = (double)((ulonglong)(dStack_300 * auVar146._8_8_) &
                             -(ulonglong)(9.99999993922529e-09 <= auVar80._8_8_));
      local_848._8_8_ = 0x3ff0000000000000;
      local_5f8 = blendvpd(local_848,auVar91,auVar50);
      dStack_5d0 = 0.0;
    }
    auVar133._8_8_ = uStack_780;
    auVar133._0_8_ = local_788;
    dVar59 = local_7c8;
    dVar124 = dStack_7c0;
    dVar126 = local_808;
    dVar150 = dStack_800;
    dVar58 = local_818;
    dVar125 = dStack_810;
    local_5e8 = local_118;
    dStack_5e0 = dStack_110;
    local_5d8 = local_108;
    local_5c8 = dVar140;
    dStack_5c0 = dVar149;
    local_5b8 = dVar135;
    dStack_5b0 = dVar116;
  }
  fVar57 = *(float *)((longlong)param_1 + 0x1e4);
  auVar146 = local_538;
  dVar135 = local_4f8;
  dVar140 = dStack_4f0;
  dVar149 = local_518;
  dVar116 = dStack_510;
  dVar123 = local_548;
  dVar127 = dStack_540;
  dVar134 = local_508;
  dVar154 = dStack_500;
  dVar60 = local_528;
  dVar70 = dStack_520;
  if ((fVar57 < 0.99999) &&
     (auVar146 = auVar133, dVar135 = local_778, dVar140 = dStack_770, dVar149 = dVar59,
     dVar116 = dVar124, dVar123 = local_798, dVar127 = dStack_790, dVar134 = dVar126,
     dVar154 = dVar150, dVar60 = dVar58, dVar70 = dVar125, 1e-05 < fVar57)) {
    dVar60 = (double)(1.0 - fVar57);
    dVar70 = (double)(1.0 - fVar57);
    dVar123 = auVar133._0_8_ * dVar60;
    dVar127 = auVar133._8_8_ * dVar70;
    dVar84 = (double)fVar57;
    dVar95 = (double)fVar57;
    auVar104._0_8_ = local_548 * dVar84;
    auVar104._8_8_ = dStack_540 * dVar95;
    auVar109._0_8_ = (double)local_538._0_8_ * dVar84;
    auVar109._8_8_ = (double)local_538._8_8_ * dVar95;
    dVar135 = dVar123 * auVar109._0_8_ + local_798 * dVar60 * auVar104._0_8_;
    dVar140 = dVar127 * auVar109._8_8_ + dStack_790 * dVar70 * auVar104._8_8_;
    auVar51._8_8_ = -(ulonglong)(0.0 <= dVar135 + dVar140);
    auVar51._0_8_ = -(ulonglong)(0.0 <= dVar135 + dVar140);
    auVar67._0_8_ = 0.0 - auVar104._0_8_;
    auVar67._8_8_ = 0.0 - auVar104._8_8_;
    auVar81._0_8_ = 0.0 - auVar109._0_8_;
    auVar81._8_8_ = 0.0 - auVar109._8_8_;
    auVar146 = blendvpd(auVar67,auVar104,auVar51);
    dVar149 = auVar146._0_8_ + local_798 * dVar60;
    dVar116 = auVar146._8_8_ + dStack_790 * dVar70;
    auVar146 = blendvpd(auVar81,auVar109,auVar51);
    dVar123 = auVar146._0_8_ + dVar123;
    dVar127 = auVar146._8_8_ + dVar127;
    dVar135 = local_778 * dVar60 + dVar84 * local_4f8;
    dVar140 = dStack_770 * dVar70 + dVar95 * dStack_4f0;
    dVar134 = dVar123 * dVar123 + dVar149 * dVar149;
    dVar154 = dVar127 * dVar127 + dVar116 * dVar116;
    auVar92._0_8_ = dVar134 + dVar154;
    auVar92._8_8_ = dVar134 + dVar154;
    auVar52._8_8_ = -(ulonglong)(1e-08 <= auVar92._8_8_);
    auVar52._0_8_ = -(ulonglong)(1e-08 <= auVar92._0_8_);
    auVar146 = sqrtpd(auVar92,auVar92);
    auVar146 = divpd(_DAT_149934d80,auVar146);
    auVar105._0_8_ = auVar146._0_8_ * dVar123;
    auVar105._8_8_ = auVar146._8_8_ * dVar127;
    dVar123 = (double)((ulonglong)(dVar149 * auVar146._0_8_) & -(ulonglong)(1e-08 <= auVar92._0_8_))
    ;
    dVar127 = (double)((ulonglong)(dVar116 * auVar146._8_8_) & -(ulonglong)(1e-08 <= auVar92._8_8_))
    ;
    auVar146 = blendvpd(_DAT_149935300,auVar105,auVar52);
    dVar149 = dVar59 * dVar60 + local_518 * dVar84;
    dVar116 = dVar124 * dVar70 + dStack_510 * dVar95;
    dVar134 = dVar126 * dVar60 + local_508 * dVar84;
    dVar154 = dVar150 * dVar70 + dStack_500 * dVar95;
    dVar60 = dVar58 * dVar60 + local_528 * dVar84;
    dVar70 = dVar125 * dVar70 + dStack_520 * dVar95;
  }
  uVar19 = *(undefined4 *)((longlong)param_1 + 0x10c);
  iVar15 = (int)param_3[1];
  *(uint *)(param_3 + 1) = iVar15 + 1U;
  if (*(uint *)((longlong)param_3 + 0xc) < iVar15 + 1U) {
    FUN_1400c28ea(param_3,iVar15);
  }
  lVar22 = *param_3;
  lVar21 = (longlong)iVar15 * 0x70;
  *(undefined4 *)(lVar22 + lVar21) = uVar19;
  pdVar16 = (double *)(lVar22 + 0x10 + lVar21);
  *pdVar16 = dVar123;
  pdVar16[1] = dVar127;
  *(undefined1 (*) [16])(lVar22 + 0x20 + lVar21) = auVar146;
  pdVar16 = (double *)(lVar22 + 0x30 + lVar21);
  *pdVar16 = dVar60;
  pdVar16[1] = dVar70;
  pdVar16 = (double *)(lVar22 + 0x40 + lVar21);
  *pdVar16 = dVar149;
  pdVar16[1] = dVar116;
  pdVar16 = (double *)(lVar22 + 0x50 + lVar21);
  *pdVar16 = dVar134;
  pdVar16[1] = dVar154;
  pdVar16 = (double *)(lVar22 + 0x60 + lVar21);
  *pdVar16 = dVar135;
  pdVar16[1] = dVar140;
  iVar15 = (int)param_3[1];
  fVar57 = *(float *)((longlong)param_1 + 0x1e4);
  auVar143 = local_598;
  dVar58 = local_558;
  dVar125 = dStack_550;
  dVar126 = local_5a8[0];
  dVar150 = local_5a8[1];
  dVar59 = local_588;
  dVar124 = dStack_580;
  dVar135 = local_578;
  dVar140 = dStack_570;
  dVar149 = local_568;
  dVar116 = dStack_560;
  if (fVar57 < 0.99999) {
    if (fVar57 <= 1e-05) {
      auVar143._8_8_ = local_428[3];
      auVar143._0_8_ = local_428[2];
      dVar58 = local_3d8;
      dVar125 = dStack_3d0;
      dVar126 = local_428[0];
      dVar150 = local_428[1];
      dVar59 = local_408;
      dVar124 = dStack_400;
      dVar135 = local_3f8;
      dVar140 = dStack_3f0;
      dVar149 = local_3e8;
      dVar116 = dStack_3e0;
    }
    else {
      dVar149 = (double)(1.0 - fVar57);
      dVar116 = (double)(1.0 - fVar57);
      dVar123 = (double)fVar57;
      dVar127 = (double)fVar57;
      auVar138._0_8_ = local_5a8[0] * dVar123;
      auVar138._8_8_ = local_5a8[1] * dVar127;
      auVar142._0_8_ = (double)local_598._0_8_ * dVar123;
      auVar142._8_8_ = (double)local_598._8_8_ * dVar127;
      dVar58 = dVar149 * local_428[2] * auVar142._0_8_ + local_428[0] * dVar149 * auVar138._0_8_;
      dVar125 = dVar116 * local_428[3] * auVar142._8_8_ + local_428[1] * dVar116 * auVar138._8_8_;
      auVar53._8_8_ = -(ulonglong)(0.0 <= dVar58 + dVar125);
      auVar53._0_8_ = -(ulonglong)(0.0 <= dVar58 + dVar125);
      auVar121._0_8_ = 0.0 - auVar138._0_8_;
      auVar121._8_8_ = 0.0 - auVar138._8_8_;
      auVar93._0_8_ = 0.0 - auVar142._0_8_;
      auVar93._8_8_ = 0.0 - auVar142._8_8_;
      auVar146 = blendvpd(auVar121,auVar138,auVar53);
      dVar59 = auVar146._0_8_ + local_428[0] * dVar149;
      dVar124 = auVar146._8_8_ + local_428[1] * dVar116;
      auVar146 = blendvpd(auVar93,auVar142,auVar53);
      dVar126 = auVar146._0_8_ + dVar149 * local_428[2];
      dVar150 = auVar146._8_8_ + dVar116 * local_428[3];
      dVar58 = dVar126 * dVar126 + dVar59 * dVar59;
      dVar125 = dVar150 * dVar150 + dVar124 * dVar124;
      auVar68._0_8_ = dVar58 + dVar125;
      auVar68._8_8_ = dVar58 + dVar125;
      auVar54._8_8_ = -(ulonglong)(1e-08 <= auVar68._8_8_);
      auVar54._0_8_ = -(ulonglong)(1e-08 <= auVar68._0_8_);
      auVar146 = sqrtpd(auVar68,auVar68);
      auVar146 = divpd(_DAT_149934d80,auVar146);
      auVar82._0_8_ = auVar146._0_8_ * dVar126;
      auVar82._8_8_ = auVar146._8_8_ * dVar150;
      auVar143 = blendvpd(_DAT_149935300,auVar82,auVar54);
      dVar58 = dVar123 * local_558 + local_3d8 * dVar149;
      dVar125 = dVar127 * dStack_550 + dStack_3d0 * dVar116;
      dVar126 = (double)((ulonglong)(dVar59 * auVar146._0_8_) & -(ulonglong)(1e-08 <= auVar68._0_8_)
                        );
      dVar150 = (double)((ulonglong)(dVar124 * auVar146._8_8_) &
                        -(ulonglong)(1e-08 <= auVar68._8_8_));
      dVar59 = local_588 * dVar123 + local_408 * dVar149;
      dVar124 = dStack_580 * dVar127 + dStack_400 * dVar116;
      dVar135 = local_578 * dVar123 + local_3f8 * dVar149;
      dVar140 = dStack_570 * dVar127 + dStack_3f0 * dVar116;
      dVar149 = local_568 * dVar123 + local_3e8 * dVar149;
      dVar116 = dStack_560 * dVar127 + dStack_3e0 * dVar116;
    }
  }
  lVar22 = param_1[0x39];
  *(uint *)(param_3 + 1) = iVar15 + 1U;
  if (*(uint *)((longlong)param_3 + 0xc) < iVar15 + 1U) {
    FUN_1400c28ea(param_3,iVar15);
  }
  lVar21 = *param_3;
  lVar23 = (longlong)iVar15 * 0x70;
  *(int *)(lVar21 + lVar23) = (int)lVar22;
  pdVar16 = (double *)(lVar21 + 0x10 + lVar23);
  *pdVar16 = dVar126;
  pdVar16[1] = dVar150;
  *(undefined1 (*) [16])(lVar21 + 0x20 + lVar23) = auVar143;
  pdVar16 = (double *)(lVar21 + 0x30 + lVar23);
  *pdVar16 = dVar59;
  pdVar16[1] = dVar124;
  pdVar16 = (double *)(lVar21 + 0x40 + lVar23);
  *pdVar16 = dVar135;
  pdVar16[1] = dVar140;
  pdVar16 = (double *)(lVar21 + 0x50 + lVar23);
  *pdVar16 = dVar149;
  pdVar16[1] = dVar116;
  pdVar16 = (double *)(lVar21 + 0x60 + lVar23);
  *pdVar16 = dVar58;
  pdVar16[1] = dVar125;
  iVar15 = (int)param_3[1];
  fVar57 = *(float *)((longlong)param_1 + 0x1e4);
  auVar145 = local_5f8;
  dVar58 = local_5b8;
  dVar125 = dStack_5b0;
  dVar126 = local_608[0];
  dVar150 = local_608[1];
  dVar59 = local_5e8;
  dVar124 = dStack_5e0;
  dVar135 = local_5d8;
  dVar140 = dStack_5d0;
  dVar149 = local_5c8;
  dVar116 = dStack_5c0;
  if (fVar57 < 0.99999) {
    if (fVar57 <= 1e-05) {
      auVar145._8_8_ = local_488[3];
      auVar145._0_8_ = local_488[2];
      dVar58 = local_438;
      dVar125 = dStack_430;
      dVar126 = local_488[0];
      dVar150 = local_488[1];
      dVar59 = local_468;
      dVar124 = dStack_460;
      dVar135 = local_458;
      dVar140 = dStack_450;
      dVar149 = local_448;
      dVar116 = dStack_440;
    }
    else {
      dVar149 = (double)(1.0 - fVar57);
      dVar116 = (double)(1.0 - fVar57);
      dVar123 = (double)fVar57;
      dVar127 = (double)fVar57;
      auVar139._0_8_ = local_608[0] * dVar123;
      auVar139._8_8_ = local_608[1] * dVar127;
      auVar144._0_8_ = (double)local_5f8._0_8_ * dVar123;
      auVar144._8_8_ = (double)local_5f8._8_8_ * dVar127;
      dVar58 = dVar149 * local_488[2] * auVar144._0_8_ + local_488[0] * dVar149 * auVar139._0_8_;
      dVar125 = dVar116 * local_488[3] * auVar144._8_8_ + local_488[1] * dVar116 * auVar139._8_8_;
      auVar55._8_8_ = -(ulonglong)(0.0 <= dVar58 + dVar125);
      auVar55._0_8_ = -(ulonglong)(0.0 <= dVar58 + dVar125);
      auVar122._0_8_ = 0.0 - auVar139._0_8_;
      auVar122._8_8_ = 0.0 - auVar139._8_8_;
      auVar94._0_8_ = 0.0 - auVar144._0_8_;
      auVar94._8_8_ = 0.0 - auVar144._8_8_;
      auVar146 = blendvpd(auVar122,auVar139,auVar55);
      dVar59 = auVar146._0_8_ + local_488[0] * dVar149;
      dVar124 = auVar146._8_8_ + local_488[1] * dVar116;
      auVar146 = blendvpd(auVar94,auVar144,auVar55);
      dVar126 = auVar146._0_8_ + dVar149 * local_488[2];
      dVar150 = auVar146._8_8_ + dVar116 * local_488[3];
      dVar58 = dVar126 * dVar126 + dVar59 * dVar59;
      dVar125 = dVar150 * dVar150 + dVar124 * dVar124;
      auVar69._0_8_ = dVar58 + dVar125;
      auVar69._8_8_ = dVar58 + dVar125;
      auVar56._8_8_ = -(ulonglong)(1e-08 <= auVar69._8_8_);
      auVar56._0_8_ = -(ulonglong)(1e-08 <= auVar69._0_8_);
      auVar146 = sqrtpd(auVar69,auVar69);
      auVar146 = divpd(_DAT_149934d80,auVar146);
      auVar83._0_8_ = auVar146._0_8_ * dVar126;
      auVar83._8_8_ = auVar146._8_8_ * dVar150;
      auVar145 = blendvpd(_DAT_149935300,auVar83,auVar56);
      dVar58 = dVar123 * local_5b8 + local_438 * dVar149;
      dVar125 = dVar127 * dStack_5b0 + dStack_430 * dVar116;
      dVar126 = (double)((ulonglong)(dVar59 * auVar146._0_8_) & -(ulonglong)(1e-08 <= auVar69._0_8_)
                        );
      dVar150 = (double)((ulonglong)(dVar124 * auVar146._8_8_) &
                        -(ulonglong)(1e-08 <= auVar69._8_8_));
      dVar59 = local_5e8 * dVar123 + local_468 * dVar149;
      dVar124 = dStack_5e0 * dVar127 + dStack_460 * dVar116;
      dVar135 = local_5d8 * dVar123 + local_458 * dVar149;
      dVar140 = dStack_5d0 * dVar127 + dStack_450 * dVar116;
      dVar149 = local_5c8 * dVar123 + local_448 * dVar149;
      dVar116 = dStack_5c0 * dVar127 + dStack_440 * dVar116;
    }
  }
  *(uint *)(param_3 + 1) = iVar15 + 1U;
  if (*(uint *)((longlong)param_3 + 0xc) < iVar15 + 1U) {
    FUN_1400c28ea(param_3,iVar15);
  }
  lVar22 = *param_3;
  lVar21 = (longlong)iVar15 * 0x70;
  *(int *)(lVar22 + lVar21) = iVar14;
  pdVar16 = (double *)(lVar22 + 0x10 + lVar21);
  *pdVar16 = dVar126;
  pdVar16[1] = dVar150;
  *(undefined1 (*) [16])(lVar22 + 0x20 + lVar21) = auVar145;
  pdVar16 = (double *)(lVar22 + 0x30 + lVar21);
  *pdVar16 = dVar59;
  pdVar16[1] = dVar124;
  pdVar16 = (double *)(lVar22 + 0x40 + lVar21);
  *pdVar16 = dVar135;
  pdVar16[1] = dVar140;
  pdVar16 = (double *)(lVar22 + 0x50 + lVar21);
  *pdVar16 = dVar149;
  pdVar16[1] = dVar116;
  pdVar16 = (double *)(lVar22 + 0x60 + lVar21);
  *pdVar16 = dVar58;
  pdVar16[1] = dVar125;
LAB_143cad609:
  if ((local_f0 ^ (ulonglong)auStack_888) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143cadcba FUN_143cadcba body=67 status=ok
// SIG undefined FUN_143cadcba(void)

void FUN_143cadcba(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  
  (**(code **)(*param_1 + 0x120))(param_1,*(undefined8 *)(*param_2 + 0x6a0));
  plVar1 = (longlong *)param_1[3];
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143cadcf2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
    return;
  }
  return;
}



// FUNCTION 143caddfa FUN_143caddfa body=91 status=ok
// SIG undefined FUN_143caddfa(void)

void FUN_143caddfa(void)

{
  if (DAT_14cb71f78 != 0) {
    if (DAT_14cb71f70 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14cb71f70)(DAT_14cb71f70,0);
    FUN_1446efa72(&DAT_14cb71f70,0,0,0x10);
    DAT_14cb71f78 = 0;
  }
  if (DAT_14cb71f70 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143cade55 FUN_143cade55 body=91 status=ok
// SIG undefined FUN_143cade55(void)

void FUN_143cade55(void)

{
  if (DAT_14cb71da0 != 0) {
    if (DAT_14cb71d98 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14cb71d98)(DAT_14cb71d98,0);
    FUN_1446efa72(&DAT_14cb71d98,0,0,0x10);
    DAT_14cb71da0 = 0;
  }
  if (DAT_14cb71d98 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143cadeb0 FUN_143cadeb0 body=91 status=ok
// SIG undefined FUN_143cadeb0(void)

void FUN_143cadeb0(void)

{
  if (DAT_14cb71d88 != 0) {
    if (DAT_14cb71d80 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14cb71d80)(DAT_14cb71d80,0);
    FUN_1446efa72(&DAT_14cb71d80,0,0,0x10);
    DAT_14cb71d88 = 0;
  }
  if (DAT_14cb71d80 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143cadf0c FUN_143cadf0c body=29 status=ok
// SIG undefined FUN_143cadf0c(void)

undefined8 FUN_143cadf0c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143cadfac FUN_143cadfac body=29 status=ok
// SIG undefined FUN_143cadfac(void)

undefined8 FUN_143cadfac(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143cadff0 FUN_143cadff0 body=12 status=ok
// SIG undefined FUN_143cadff0(void)

void FUN_143cadff0(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143cadff9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143cadffc FUN_143cadffc body=29 status=ok
// SIG undefined FUN_143cadffc(void)

undefined8 FUN_143cadffc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143cae01a FUN_143cae01a body=91 status=ok
// SIG undefined FUN_143cae01a(void)

bool FUN_143cae01a(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_143cae04a;
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
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_143cae04a:
  return lVar6 == param_2;
}



// FUNCTION 143cae0ae FUN_143cae0ae body=295 status=ok
// SIG undefined FUN_143cae0ae(void)

void FUN_143cae0ae(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  longlong *plVar1;
  float fVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  uint uVar8;
  int *piVar9;
  longlong lVar10;
  int *piVar11;
  
  if ((longlong)(int)param_3[1] != 0) {
    lVar4 = *param_1;
    piVar9 = (int *)(*param_3 + 0xc);
    lVar5 = (longlong)(int)param_3[1] << 4;
    do {
      uVar8 = piVar9[-1];
      piVar11 = piVar9;
      if ((int)uVar8 < 0) {
        if ((((~uVar8 & 0x7fffffff) != 0) && (uVar8 = (int)(uVar8 * 2) >> 1, -1 < (int)uVar8)) &&
           ((int)uVar8 < *(int *)(param_1[1] + 0x88))) {
          piVar11 = (int *)((ulonglong)uVar8 * 4 + *(longlong *)(param_1[1] + 0x80));
          goto LAB_143cae0e7;
        }
      }
      else {
LAB_143cae0e7:
        lVar10 = (longlong)*piVar11;
        if (lVar10 != -1) {
          lVar5 = *(longlong *)(lVar4 + 0xb0);
          fVar2 = *(float *)(lVar5 + 4 + lVar10 * 0xc);
          plVar1 = (longlong *)(lVar4 + 0xd0);
          iVar3 = *(int *)(lVar4 + 0xd8);
          uVar8 = iVar3 + 1;
          *(uint *)(lVar4 + 0xd8) = uVar8;
          if (fVar2 <= 0.0) {
            if (*(uint *)(lVar4 + 0xdc) < uVar8) {
              FUN_1474da03a(plVar1,iVar3);
            }
            puVar6 = (undefined8 *)((longlong)iVar3 * 0x14 + *plVar1);
            uVar7 = 0xff;
          }
          else {
            if (*(uint *)(lVar4 + 0xdc) < uVar8) {
              FUN_1474da03a(plVar1,iVar3);
            }
            puVar6 = (undefined8 *)((longlong)iVar3 * 0x14 + *plVar1);
            uVar7 = *(undefined4 *)(lVar5 + lVar10 * 0xc);
          }
          *puVar6 = *param_2;
          *(undefined4 *)(puVar6 + 1) = 0;
          *(undefined1 *)((longlong)puVar6 + 0xc) = 0;
          *(undefined4 *)(puVar6 + 2) = uVar7;
          *(undefined1 *)(lVar4 + 0xe0) = 0;
          return;
        }
      }
      piVar9 = piVar9 + 4;
      lVar5 = lVar5 + -0x10;
    } while (lVar5 != 0);
  }
  return;
}



// FUNCTION 143cae1d6 FUN_143cae1d6 body=29 status=ok
// SIG undefined FUN_143cae1d6(void)

undefined8 FUN_143cae1d6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143cae208 FUN_143cae208 body=85 status=ok
// SIG undefined FUN_143cae208(void)

void FUN_143cae208(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e170a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3ec8b0;
  return;
}



// FUNCTION 143cae25e FUN_143cae25e body=85 status=ok
// SIG undefined FUN_143cae25e(void)

void FUN_143cae25e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e170a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3ec8b0;
  return;
}



// FUNCTION 143cae2b4 FUN_143cae2b4 body=118 status=ok
// SIG undefined FUN_143cae2b4(void)

void FUN_143cae2b4(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e170a0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3ec8b0;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143cae31b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143cae33c FUN_143cae33c body=96 status=ok
// SIG undefined FUN_143cae33c(void)

undefined8 FUN_143cae33c(uint *param_1,undefined8 param_2)

{
  uint uVar1;
  longlong *plVar2;
  
  if (((param_1[1] != 0) && (uVar1 = *param_1, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    plVar2 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar2 != (longlong *)0x0) && (*(uint *)(plVar2 + 2) == param_1[1])) &&
       (((*(uint *)(plVar2 + 1) & 0x10200000) == 0 && (*plVar2 != 0)))) {
      FUN_143cb1d04(param_2,*plVar2);
    }
  }
  return 1;
}



// FUNCTION 143cae3ae FUN_143cae3ae body=121 status=ok
// SIG undefined FUN_143cae3ae(void)

void FUN_143cae3ae(longlong param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_2;
  piVar1 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  iVar3 = *piVar1;
  if (iVar3 == 1) {
    FUN_140ad26c0();
    GetCurrentThreadId();
    iVar3 = *piVar1;
  }
  if ((iVar3 == 0x60000000) || (iVar3 == 0)) {
    *piVar1 = 0x40000002;
  }
  (**(code **)(param_1 + 8))(*(undefined8 *)(**(longlong **)(param_1 + 0x10) + (longlong)iVar2 * 8))
  ;
  if ((iVar3 == 0x60000000) || (iVar3 == 0)) {
    *piVar1 = iVar3;
  }
  return;
}



// FUNCTION 143cae47a FUN_143cae47a body=122 status=ok
// SIG undefined FUN_143cae47a(void)

void FUN_143cae47a(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x230) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x230) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x230 + 4) = uVar5;
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



// FUNCTION 143cae500 FUN_143cae500 body=234 status=ok
// SIG undefined FUN_143cae500(void)

ulonglong FUN_143cae500(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  ulonglong *puVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  longlong *plVar10;
  ulonglong uVar11;
  
  uVar3 = *(uint *)(param_2 + 0x3c);
  uVar9 = (ulonglong)uVar3;
  if (((((uVar3 != 0) && (uVar4 = *(uint *)(param_2 + 0x38), -1 < (int)uVar4)) &&
       ((int)uVar4 < DAT_14c9647dc)) &&
      ((plVar10 = (longlong *)
                  ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8)),
       plVar10 != (longlong *)0x0 && (*(uint *)(plVar10 + 2) == uVar3)))) &&
     ((uVar9 = (ulonglong)*(uint *)(plVar10 + 1), (*(uint *)(plVar10 + 1) & 0x10200000) == 0 &&
      ((lVar5 = *plVar10, lVar5 != 0 && (1 < *(int *)(param_2 + 0x4c))))))) {
    FUN_1447c4cc8(param_2);
    uVar9 = *(ulonglong *)(param_2 + 0xc0);
    if ((uVar9 != 0) && (1 < *(int *)(param_2 + 0x4c))) {
      *(byte *)(uVar9 + 0x430) = *(byte *)(uVar9 + 0x430) | 1;
      uVar9 = 0;
      if ((longlong)*(int *)(lVar5 + 0xb80) != 0) {
        lVar7 = *(longlong *)(lVar5 + 0xb78);
        uVar9 = (longlong)*(int *)(lVar5 + 0xb80) * 8;
        uVar11 = 0;
        do {
          lVar5 = *(longlong *)(lVar7 + uVar11);
          if (lVar5 != 0) {
            pbVar1 = (byte *)(lVar5 + 0x430);
            *pbVar1 = *pbVar1 | 1;
          }
          uVar11 = uVar11 + 8;
        } while (uVar9 != uVar11);
      }
    }
  }
  if (1 < *(int *)(param_2 + 0x4c)) {
    puVar6 = *(undefined8 **)(param_1 + 8);
    puVar8 = (undefined8 *)FUN_14001cc68(0x10,0x10);
    *puVar8 = 0;
    puVar8[1] = param_2;
    uVar9 = 0;
    if (puVar8 != (undefined8 *)0x0) {
      LOCK();
      puVar2 = (ulonglong *)*puVar6;
      *puVar6 = puVar8;
      UNLOCK();
      LOCK();
      uVar9 = *puVar2;
      *puVar2 = (ulonglong)puVar8;
      UNLOCK();
    }
  }
  return uVar9;
}



// FUNCTION 143cae5ea FUN_143cae5ea body=2411 status=ok
// SIG undefined FUN_143cae5ea(void)

void FUN_143cae5ea(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong *plVar13;
  ulonglong uVar14;
  longlong lVar15;
  uint *puVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  longlong lVar21;
  ulonglong uVar22;
  int iVar23;
  longlong lVar24;
  char cVar25;
  bool bVar26;
  undefined1 auStack_538 [40];
  undefined4 local_510;
  undefined8 *local_508;
  longlong local_4f8;
  ulonglong local_4f0;
  uint *local_4e8;
  longlong *local_4e0;
  longlong *local_4d8;
  undefined1 *puStack_4d0;
  longlong local_4c8;
  undefined8 **ppuStack_4c0;
  undefined8 *local_4b8;
  undefined8 *local_4b0;
  undefined1 local_4a1;
  code *local_4a0;
  longlong **local_498;
  undefined8 local_490;
  undefined4 local_488;
  longlong local_480 [64];
  longlong *local_280;
  undefined8 local_278;
  longlong local_270 [64];
  longlong *local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_538;
  lVar21 = *param_1;
  if ((((((*(int *)(lVar21 + 0xc) != 0) && (uVar7 = *(uint *)(lVar21 + 8), -1 < (int)uVar7)) &&
        ((int)uVar7 < DAT_14c9647dc)) &&
       ((plVar12 = (longlong *)
                   ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8)),
        plVar12 != (longlong *)0x0 && ((int)plVar12[2] == *(int *)(lVar21 + 0xc))))) &&
      ((*(uint *)(plVar12 + 1) & 0x10200000) == 0)) &&
     ((*plVar12 != 0 && (*(longlong *)(*plVar12 + 0x260) != 0)))) {
    local_70 = (longlong *)0x0;
    local_68 = 0x4000000000;
    local_4e0 = (longlong *)(lVar21 + 0x40);
    local_4e8 = (uint *)(lVar21 + 0x50);
    iVar5 = *(int *)(lVar21 + 0x68);
    local_4f8 = lVar21;
    if (iVar5 == 0) {
      uVar22 = 1;
      uVar14 = 0;
      iVar23 = 0;
      iVar20 = 0;
    }
    else {
      puVar8 = *(uint **)(lVar21 + 0x60);
      if (*(uint **)(lVar21 + 0x60) == (uint *)0x0) {
        puVar8 = local_4e8;
      }
      uVar7 = *puVar8;
      if (uVar7 == 0) {
        iVar20 = iVar5 + 0x1e;
        if (-1 < iVar5 + -1) {
          iVar20 = iVar5 + -1;
        }
        uVar14 = 0;
        uVar22 = (ulonglong)(uint)(iVar20 >> 5);
        if (iVar20 >> 5 < 1) {
          uVar22 = uVar14;
        }
        iVar23 = 0;
        do {
          if (uVar22 == uVar14) goto LAB_143cae745;
          iVar23 = iVar23 + 0x20;
          uVar7 = puVar8[uVar14 + 1];
          uVar14 = uVar14 + 1;
        } while (uVar7 == 0);
      }
      else {
        uVar14 = 0;
        iVar23 = 0;
      }
      uVar22 = (ulonglong)(-uVar7 & uVar7);
      uVar4 = uVar22 * 2 + 1;
      lVar21 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar21 == 0; lVar21 = lVar21 + -1) {
        }
      }
      iVar20 = (iVar23 - ((uint)lVar21 ^ 0x3f)) + 0x3e;
      if (iVar5 <= iVar20) {
        iVar20 = iVar5;
      }
    }
    if (iVar20 == iVar5) {
LAB_143cae745:
      local_280 = (longlong *)0x0;
      local_278 = 0x4000000000;
      local_4f0 = 0;
    }
    else {
      uVar7 = 0xffffffff;
      local_4f0 = 0;
      iVar6 = iVar5;
      do {
        uVar4 = local_68;
        iVar17 = *(int *)(*local_4e0 + 4 + (longlong)iVar20 * 0x10);
        if ((((iVar17 != 0) &&
             (uVar19 = *(uint *)(*local_4e0 + (longlong)iVar20 * 0x10), -1 < (int)uVar19)) &&
            ((int)uVar19 < DAT_14c9647dc)) &&
           (((plVar12 = (longlong *)
                        ((ulonglong)((uVar19 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar19 >> 0x10) * 8)),
             plVar12 != (longlong *)0x0 && ((int)plVar12[2] == iVar17)) &&
            (((*(uint *)(plVar12 + 1) & 0x10200000) == 0 &&
             ((lVar21 = *plVar12, lVar21 != 0 && (-1 < *(char *)(lVar21 + 0xc70))))))))) {
          lVar15 = (longlong)(int)local_68;
          uVar19 = (int)local_68 + 1;
          local_68 = CONCAT44(local_68._4_4_,uVar19);
          if (local_68._4_4_ < uVar19) {
            FUN_1487d4414(local_270,uVar4 & 0xffffffff);
          }
          plVar12 = local_70;
          if (local_70 == (longlong *)0x0) {
            plVar12 = local_270;
          }
          plVar12[lVar15] = lVar21;
          local_4f0 = (ulonglong)(uint)((int)local_4f0 + *(int *)(lVar21 + 0xd78));
          iVar6 = *(int *)(local_4f8 + 0x68);
        }
        uVar7 = uVar7 & ~(uint)uVar22;
        puVar8 = *(uint **)(local_4f8 + 0x60);
        if (*(uint **)(local_4f8 + 0x60) == (uint *)0x0) {
          puVar8 = local_4e8;
        }
        iVar20 = (int)uVar14;
        lVar21 = (longlong)iVar20;
        uVar19 = puVar8[lVar21] & uVar7;
        if (uVar19 == 0) {
          iVar17 = iVar6 + 0x1e;
          if (-1 < iVar6 + -1) {
            iVar17 = iVar6 + -1;
          }
          iVar17 = iVar17 >> 5;
          iVar23 = iVar23 + 0x20;
          iVar18 = iVar17;
          if (iVar17 < iVar20) {
            iVar18 = iVar20;
          }
          if (iVar20 < iVar17) {
            lVar15 = 0;
            do {
              uVar19 = puVar8[lVar21 + lVar15 + 1];
              if (uVar19 != 0) {
                uVar14 = (ulonglong)(iVar20 + (int)lVar15 + 1);
                uVar7 = 0xffffffff;
                goto LAB_143cae8c8;
              }
              iVar23 = iVar23 + 0x20;
              lVar15 = lVar15 + 1;
            } while (iVar18 - lVar21 != lVar15);
            uVar7 = 0xffffffff;
            iVar20 = iVar18;
          }
          uVar14 = (ulonglong)(iVar20 + 1);
          iVar20 = iVar6;
        }
        else {
LAB_143cae8c8:
          uVar22 = (ulonglong)(-uVar19 & uVar19);
          uVar4 = uVar22 * 2 + 1;
          lVar21 = 0x3f;
          if (uVar4 != 0) {
            for (; uVar4 >> lVar21 == 0; lVar21 = lVar21 + -1) {
            }
          }
          iVar20 = (iVar23 - ((uint)lVar21 ^ 0x3f)) + 0x3e;
          if (iVar6 <= iVar20) {
            iVar20 = iVar6;
          }
        }
      } while (iVar20 != iVar5);
      local_280 = (longlong *)0x0;
      local_278 = 0x4000000000;
      if ((int)(uint)local_4f0 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(local_4f0);
      }
      if (0x40 < (uint)local_4f0) {
        FUN_14042648c(local_480);
      }
    }
    plVar12 = local_70;
    if (local_70 == (longlong *)0x0) {
      plVar12 = local_270;
    }
    if ((longlong)(int)local_68 != 0) {
      plVar3 = plVar12 + (int)local_68;
      do {
        lVar21 = *plVar12;
        if ((lVar21 != 0) && (iVar5 = *(int *)(lVar21 + 0xd78), (longlong)iVar5 != 0)) {
          lVar21 = *(longlong *)(lVar21 + 0xd70);
          lVar15 = 0;
          do {
            puVar8 = *(uint **)(lVar21 + lVar15);
            if ((puVar8 != (uint *)0x0) && (lVar11 = *(longlong *)(puVar8 + 0x4e), lVar11 != 0)) {
              lVar24 = *(longlong *)(lVar11 + 0x20);
              plVar13 = *(longlong **)(lVar11 + 0x28);
              if (plVar13 != (longlong *)0x0) {
                LOCK();
                *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
                UNLOCK();
              }
              if (lVar24 == 0) {
                cVar25 = '\x01';
              }
              else {
                cVar25 = **(char **)(*(longlong *)(puVar8 + 0x4e) + 0x20);
              }
              if (plVar13 != (longlong *)0x0) {
                LOCK();
                plVar1 = plVar13 + 1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)*plVar1 == 0) {
                  (**(code **)*plVar13)(plVar13);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar13 + 0xc);
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (*piVar2 == 0) {
                    (**(code **)(*plVar13 + 0x10))(plVar13);
                  }
                }
              }
              if ((cVar25 == '\0') && ((short)puVar8[4] != -1)) {
                if ((((puVar8[2] & 1) != 0) &&
                    (((puVar8[1] != 0 && (uVar7 = *puVar8, -1 < (int)uVar7)) &&
                     ((int)uVar7 < DAT_14c9647dc)))) &&
                   (((plVar13 = (longlong *)
                                ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8)),
                     plVar13 != (longlong *)0x0 && (*(uint *)(plVar13 + 2) == puVar8[1])) &&
                    ((*(uint *)(plVar13 + 1) & 0x10200000) == 0)))) {
                  if ((*(uint *)(plVar13 + 1) & 0x10200000) == 0) {
                    lVar11 = *plVar13;
                  }
                  else {
                    lVar11 = 0;
                  }
                  lVar24 = DAT_14c997cc0;
                  if (DAT_14c997cc0 == 0) {
                    lVar9 = FUN_145a62958();
                    lVar24 = *(longlong *)(lVar9 + 0x110);
                    if (lVar24 == 0) {
                      FUN_140aa6c08(lVar9);
                      lVar24 = *(longlong *)(lVar9 + 0x110);
                    }
                  }
                  cVar25 = *(char *)(lVar11 + 0x31);
                  if (cVar25 == '\0') {
                    cVar25 = *(char *)(lVar24 + 0x75);
                  }
                  if (cVar25 != '\x03') goto LAB_143caea72;
                }
                uVar14 = local_278;
                lVar11 = *(longlong *)(puVar8 + 0x4e);
                if ((lVar11 != 0) && (*(int *)(lVar11 + 0x18) == -1)) {
                  lVar24 = (longlong)(int)local_278;
                  uVar7 = (int)local_278 + 1;
                  local_278 = CONCAT44(local_278._4_4_,uVar7);
                  if (local_278._4_4_ < uVar7) {
                    FUN_147c8121c(local_480,uVar14 & 0xffffffff);
                  }
                  plVar13 = local_280;
                  if (local_280 == (longlong *)0x0) {
                    plVar13 = local_480;
                  }
                  plVar13[lVar24] = lVar11;
                }
              }
            }
LAB_143caea72:
            lVar15 = lVar15 + 8;
          } while ((longlong)iVar5 * 8 != lVar15);
        }
        plVar12 = plVar12 + 1;
      } while (plVar12 != plVar3);
    }
    if (0 < (int)local_278) {
      plVar12 = local_280;
      if (local_280 == (longlong *)0x0) {
        plVar12 = local_480;
      }
      FUN_1401fab48(*(longlong *)(*plVar12 + 8) + 0x70);
    }
    puVar8 = local_4e8;
    lVar21 = local_4f8;
    *(undefined4 *)(local_4f8 + 0x98) = 0;
    if (*(int *)(local_4f8 + 0x9c) != (int)local_4f0) {
      FUN_140718530(local_4f8 + 0x90);
    }
    local_4b8 = (undefined8 *)FUN_14001cc68(0x28,0x10);
    *local_4b8 = 0;
    local_4b8[1] = 0;
    ppuStack_4c0 = &local_4b8;
    local_498 = &local_4d8;
    local_4d8 = local_270;
    puStack_4d0 = &local_4a1;
    local_4c8 = lVar21;
    local_508 = &local_490;
    local_490 = 0;
    local_488 = 0;
    local_4a0 = FUN_143caf08e;
    local_510 = 0;
    local_4b0 = local_4b8;
    FUN_1401f8d10(L"ParallelFor Task",local_68 & 0xffffffff,1);
    local_4d8 = (longlong *)0x0;
    puVar10 = (undefined8 *)*local_4b0;
    if (puVar10 != (undefined8 *)0x0) {
      do {
        local_4d8 = (longlong *)puVar10[1];
        puStack_4d0 = (undefined1 *)puVar10[2];
        local_4c8 = puVar10[3];
        ppuStack_4c0 = (undefined8 **)puVar10[4];
        puVar10[3] = 0;
        puVar10[4] = 0;
        puVar10[1] = 0;
        puVar10[2] = 0;
        bVar26 = local_4b0 != (undefined8 *)0x0;
        local_4b0 = puVar10;
        if (bVar26) {
          FUN_1400020a8();
        }
        FUN_140043360(local_4d8,&puStack_4d0,0);
        puVar10 = (undefined8 *)*local_4b0;
      } while (puVar10 != (undefined8 *)0x0);
    }
    if (*(int *)(lVar21 + 0x48) != *(int *)(lVar21 + 0x74)) {
      lVar15 = lVar21 + 0x78;
      if (*(longlong *)(lVar21 + 0x80) != 0) {
        lVar15 = *(longlong *)(lVar21 + 0x80);
      }
      iVar5 = *(int *)(lVar21 + 0x88);
      iVar20 = iVar5 + 3;
      if (-1 < iVar5) {
        iVar20 = iVar5;
      }
      if (*(int *)(lVar21 + 0x48) - *(int *)(lVar21 + 0x74) < iVar20 >> 2) {
        iVar5 = *(int *)(lVar21 + 0x68);
        if (iVar5 == 0) {
          uVar14 = 0;
          uVar22 = 1;
          iVar20 = 0;
          iVar23 = 0;
        }
        else {
          puVar16 = *(uint **)(lVar21 + 0x60);
          if (*(uint **)(lVar21 + 0x60) == (uint *)0x0) {
            puVar16 = puVar8;
          }
          uVar7 = *puVar16;
          if (uVar7 == 0) {
            iVar20 = iVar5 + 0x1e;
            if (-1 < iVar5 + -1) {
              iVar20 = iVar5 + -1;
            }
            uVar14 = 0;
            uVar22 = (ulonglong)(uint)(iVar20 >> 5);
            if (iVar20 >> 5 < 1) {
              uVar22 = uVar14;
            }
            iVar23 = 0;
            do {
              if (uVar22 == uVar14) goto LAB_143caed04;
              iVar23 = iVar23 + 0x20;
              uVar7 = puVar16[uVar14 + 1];
              uVar14 = uVar14 + 1;
            } while (uVar7 == 0);
          }
          else {
            uVar14 = 0;
            iVar23 = 0;
          }
          uVar22 = (ulonglong)(-uVar7 & uVar7);
          uVar4 = uVar22 * 2 + 1;
          lVar11 = 0x3f;
          if (uVar4 != 0) {
            for (; uVar4 >> lVar11 == 0; lVar11 = lVar11 + -1) {
            }
          }
          iVar20 = (iVar23 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
          if (iVar5 <= iVar20) {
            iVar20 = iVar5;
          }
        }
        if (iVar20 != iVar5) {
          uVar7 = 0xffffffff;
          do {
            *(undefined4 *)
             (lVar15 + (longlong)
                       *(int *)(*(longlong *)(lVar21 + 0x40) + 0xc + (longlong)iVar20 * 0x10) * 4) =
                 0xffffffff;
            uVar7 = ~(uint)uVar22 & uVar7;
            puVar16 = *(uint **)(lVar21 + 0x60);
            if (*(uint **)(lVar21 + 0x60) == (uint *)0x0) {
              puVar16 = puVar8;
            }
            iVar6 = *(int *)(lVar21 + 0x68);
            iVar20 = (int)uVar14;
            lVar11 = (longlong)iVar20;
            uVar19 = puVar16[lVar11] & uVar7;
            if (uVar19 == 0) {
              iVar17 = iVar6 + 0x1e;
              if (-1 < iVar6 + -1) {
                iVar17 = iVar6 + -1;
              }
              iVar17 = iVar17 >> 5;
              iVar23 = iVar23 + 0x20;
              iVar18 = iVar17;
              if (iVar17 < iVar20) {
                iVar18 = iVar20;
              }
              if (iVar20 < iVar17) {
                lVar24 = 0;
                do {
                  uVar19 = puVar16[lVar11 + lVar24 + 1];
                  if (uVar19 != 0) {
                    uVar14 = (ulonglong)(iVar20 + (int)lVar24 + 1);
                    uVar7 = 0xffffffff;
                    goto LAB_143caeec5;
                  }
                  iVar23 = iVar23 + 0x20;
                  lVar24 = lVar24 + 1;
                } while (iVar18 - lVar11 != lVar24);
                uVar7 = 0xffffffff;
                iVar20 = iVar18;
              }
              uVar14 = (ulonglong)(iVar20 + 1);
              puVar8 = local_4e8;
              lVar21 = local_4f8;
              iVar20 = iVar6;
            }
            else {
LAB_143caeec5:
              uVar22 = (ulonglong)(-uVar19 & uVar19);
              uVar4 = uVar22 * 2 + 1;
              lVar11 = 0x3f;
              if (uVar4 != 0) {
                for (; uVar4 >> lVar11 == 0; lVar11 = lVar11 + -1) {
                }
              }
              iVar20 = (iVar23 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
              if (iVar6 <= iVar20) {
                iVar20 = iVar6;
              }
            }
          } while (iVar20 != iVar5);
        }
      }
      else if (0 < iVar5) {
        lVar11 = 0;
        do {
          *(undefined4 *)(lVar15 + lVar11 * 4) = 0xffffffff;
          lVar11 = lVar11 + 1;
        } while (lVar11 < *(int *)(lVar21 + 0x88));
      }
LAB_143caed04:
      *(undefined4 *)(lVar21 + 0x48) = 0;
      if (*(int *)(lVar21 + 0x4c) < 0) {
        FUN_14472eb64(local_4e0,0);
      }
      *(undefined8 *)(lVar21 + 0x70) = 0xffffffff;
      *(undefined4 *)(lVar21 + 0x68) = 0;
    }
    while (local_4b0 != (undefined8 *)0x0) {
      local_4b0 = (undefined8 *)*local_4b0;
      FUN_1400020a8();
    }
    if (local_280 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    if (local_70 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_60 ^ (ulonglong)auStack_538) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143caef80 FUN_143caef80 body=29 status=ok
// SIG undefined FUN_143caef80(void)

undefined8 FUN_143caef80(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143caef9e FUN_143caef9e body=166 status=ok
// SIG undefined FUN_143caef9e(void)

void FUN_143caef9e(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar2 = *param_1;
  if (((*(int *)(lVar2 + 0xc) != 0) && (uVar1 = *(uint *)(lVar2 + 8), -1 < (int)uVar1)) &&
     ((int)uVar1 < DAT_14c9647dc)) {
    plVar3 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar3 != (longlong *)0x0) && ((int)plVar3[2] == *(int *)(lVar2 + 0xc))) &&
       (((*(uint *)(plVar3 + 1) & 0x10200000) == 0 &&
        ((*plVar3 != 0 && (*(longlong *)(*plVar3 + 0x260) != 0)))))) {
      local_18 = *(undefined8 *)(lVar2 + 0x90);
      local_10 = *(undefined4 *)(lVar2 + 0x98);
      FUN_144aa65e2();
    }
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143caf070 FUN_143caf070 body=29 status=ok
// SIG undefined FUN_143caf070(void)

undefined8 FUN_143caf070(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143caf08e FUN_143caf08e body=3413 status=ok
// SIG undefined FUN_143caf08e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * FUN_143caf08e(longlong *param_1,int *param_2)

{
  double *pdVar1;
  longlong *plVar2;
  int *piVar3;
  double dVar4;
  undefined8 *puVar6;
  byte bVar7;
  longlong *plVar8;
  uint *puVar9;
  double dVar10;
  double dVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  longlong lVar19;
  undefined4 uVar20;
  char *pcVar21;
  undefined8 *puVar22;
  longlong lVar23;
  int iVar24;
  uint uVar25;
  longlong lVar26;
  longlong lVar27;
  longlong *plVar28;
  char cVar29;
  undefined8 *puVar30;
  longlong lVar31;
  longlong lVar32;
  ulonglong uVar33;
  undefined1 auVar34 [16];
  double dVar35;
  undefined1 auVar36 [16];
  double dVar38;
  double dVar39;
  undefined1 auVar37 [16];
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  undefined1 auVar44 [16];
  double dVar46;
  undefined1 auVar45 [16];
  double dVar47;
  undefined1 auVar48 [16];
  undefined4 uVar49;
  undefined4 uVar50;
  double dVar51;
  double dVar52;
  double dVar53;
  undefined1 auVar54 [16];
  double dVar55;
  undefined1 auStack_308 [32];
  undefined1 local_2e8 [16];
  double local_2d8;
  double dStack_2d0;
  longlong *local_2c0;
  longlong *local_2b8;
  double local_2b0;
  longlong *local_2a8;
  char *local_2a0;
  double local_298;
  double dStack_290;
  undefined1 local_288 [16];
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
  longlong local_198;
  longlong lStack_190;
  longlong local_188;
  undefined8 uStack_180;
  double local_178;
  double dStack_170;
  undefined1 local_168 [16];
  undefined1 local_158 [16];
  double local_148;
  double dStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  undefined8 uStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  ulonglong local_f0;
  double dVar5;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_308;
  pcVar21 = (char *)(longlong)*param_2;
  lVar26 = *(longlong *)(*param_1 + 0x200);
  if (lVar26 == 0) {
    lVar26 = *param_1;
  }
  plVar8 = *(longlong **)(lVar26 + (longlong)pcVar21 * 8);
  local_2c0 = param_1;
  if (plVar8 != (longlong *)0x0) {
    lVar26 = param_1[2];
    pcVar21 = (char *)(**(code **)(*plVar8 + 0xb98))(plVar8);
    lVar19 = plVar8[0x1af];
    local_2a0 = pcVar21;
    if (0 < (longlong)(int)lVar19) {
      local_2a8 = plVar8 + (longlong)(int)plVar8[0xe3] * 2 + 0xda;
      local_2b8 = (longlong *)(lVar26 + 0x90);
      lVar32 = 0;
      do {
        pcVar21 = (char *)plVar8[0x1ae];
        puVar9 = *(uint **)(pcVar21 + lVar32 * 8);
        if ((puVar9 != (uint *)0x0) && (lVar31 = *(longlong *)(puVar9 + 0x4e), lVar31 != 0)) {
          lVar23 = *(longlong *)(lVar31 + 0x20);
          plVar28 = *(longlong **)(lVar31 + 0x28);
          if (plVar28 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar28 + 1) = (int)plVar28[1] + 1;
            UNLOCK();
          }
          if (lVar23 == 0) {
            cVar29 = '\x01';
            pcVar21 = (char *)0x0;
          }
          else {
            pcVar21 = *(char **)(*(longlong *)(puVar9 + 0x4e) + 0x20);
            cVar29 = *pcVar21;
          }
          if (plVar28 != (longlong *)0x0) {
            LOCK();
            plVar2 = plVar28 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
              pcVar21 = (char *)(**(code **)*plVar28)(plVar28);
              LOCK();
              piVar3 = (int *)((longlong)plVar28 + 0xc);
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              if (*piVar3 == 0) {
                pcVar21 = (char *)(**(code **)(*plVar28 + 0x10))(plVar28);
              }
            }
          }
          if ((cVar29 == '\0') && ((short)puVar9[4] != -1)) {
            if ((((puVar9[2] & 1) != 0) &&
                (((puVar9[1] != 0 && (uVar25 = *puVar9, -1 < (int)uVar25)) &&
                 ((int)uVar25 < DAT_14c9647dc)))) &&
               (((plVar28 = (longlong *)
                            ((ulonglong)((uVar25 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar25 >> 0x10) * 8)),
                 plVar28 != (longlong *)0x0 && (*(uint *)(plVar28 + 2) == puVar9[1])) &&
                ((*(uint *)(plVar28 + 1) & 0x10200000) == 0)))) {
              if ((*(uint *)(plVar28 + 1) & 0x10200000) == 0) {
                lVar31 = *plVar28;
              }
              else {
                lVar31 = 0;
              }
              lVar23 = DAT_14c997cc0;
              if (DAT_14c997cc0 == 0) {
                lVar27 = FUN_145a62958();
                lVar23 = *(longlong *)(lVar27 + 0x110);
                if (lVar23 == 0) {
                  FUN_140aa6c08(lVar27);
                  lVar23 = *(longlong *)(lVar27 + 0x110);
                }
              }
              bVar7 = *(byte *)(lVar23 + 0x75);
              if (*(byte *)(lVar31 + 0x31) != 0) {
                bVar7 = *(byte *)(lVar31 + 0x31);
              }
              pcVar21 = (char *)(ulonglong)bVar7;
              if ((bVar7 != 3) && (*(longlong *)(puVar9 + 0x4e) != 0)) goto LAB_143cafc5d;
            }
            lVar31 = *(longlong *)(puVar9 + 0x4e);
            lVar23 = *local_2a8;
            lVar27 = (longlong)(short)puVar9[4] * 0x60;
            pdVar1 = (double *)(lVar23 + lVar27);
            auVar36 = *(undefined1 (*) [16])(plVar8 + 0x50);
            dVar43 = auVar36._0_8_;
            dVar55 = auVar36._8_8_;
            auVar48 = *(undefined1 (*) [16])(plVar8 + 0x52);
            dVar53 = auVar48._0_8_;
            dVar35 = auVar48._8_8_;
            auVar54 = *(undefined1 (*) [16])(lVar23 + 0x40 + lVar27);
            auVar34 = *(undefined1 (*) [16])(lVar23 + 0x50 + lVar27);
            auVar36 = minpd(auVar54,auVar36);
            auVar44 = minpd(auVar34,auVar48);
            auVar48._8_8_ = -(ulonglong)(auVar36._8_8_ < 0.0);
            auVar48._0_8_ = -(ulonglong)(auVar36._0_8_ < 0.0);
            iVar24 = movmskpd((int)lVar23,auVar48);
            auVar36._8_8_ = -(ulonglong)(auVar44._8_8_ < 0.0);
            auVar36._0_8_ = -(ulonglong)(auVar44._0_8_ < 0.0);
            uVar25 = movmskpd((int)lVar27,auVar36);
            local_2e8._0_8_ = auVar54._0_8_;
            local_2e8._8_8_ = auVar54._8_8_;
            local_2d8 = auVar34._0_8_;
            dStack_2d0 = auVar34._8_8_;
            if ((uVar25 & 0x3fffffff) == 0 && iVar24 == 0) {
              dVar14 = *pdVar1;
              dVar40 = pdVar1[1];
              dVar15 = pdVar1[2];
              dVar16 = pdVar1[3];
              dVar17 = (double)plVar8[0x48];
              dVar18 = (double)plVar8[0x49];
              dVar10 = SUB168(*(undefined1 (*) [16])(plVar8 + 0x4a),0);
              dVar11 = SUB168(*(undefined1 (*) [16])(plVar8 + 0x4a),8);
              dVar39 = (double)plVar8[0x4b];
              dVar47 = (double)plVar8[0x4b];
              dVar38 = (double)plVar8[0x48];
              dVar42 = (double)plVar8[0x48];
              dVar46 = (double)plVar8[0x49];
              dVar41 = (double)plVar8[0x49];
              dVar4 = (double)plVar8[0x4a];
              dVar5 = (double)plVar8[0x4a];
              dVar51 = dVar40 * dVar4 * -1.0 +
                       dVar15 * dVar46 + dVar16 * dVar38 * 1.0 + dVar14 * dVar39;
              dVar52 = dVar14 * dVar5 * 1.0 +
                       dVar16 * dVar41 + dVar15 * dVar42 * -1.0 + dVar40 * dVar47;
              auVar54._0_8_ =
                   dVar16 * dVar4 * 1.0 +
                   ((dVar38 * dVar40 * 1.0 + dVar15 * dVar39) - dVar14 * dVar46);
              auVar54._8_8_ =
                   dVar15 * dVar5 * -1.0 +
                   ((dVar42 * dVar14 * -1.0 + dVar16 * dVar47) - dVar40 * dVar41);
              dVar4 = pdVar1[4] * dVar43;
              dVar14 = pdVar1[5] * dVar55;
              dVar46 = pdVar1[6] * dVar53;
              dVar5 = pdVar1[7] * dVar35;
              dVar42 = dVar14 * dVar17 - dVar18 * dVar4;
              dVar38 = dVar46 * dVar18 - dVar10 * dVar14;
              dVar41 = dVar4 * dVar10 - dVar17 * dVar46;
              dVar40 = dVar5 * dVar11 - dVar11 * dVar5;
              dVar38 = dVar38 + dVar38;
              dVar41 = dVar41 + dVar41;
              dVar42 = dVar42 + dVar42;
              dVar40 = dVar40 + dVar40;
              local_2e8._0_8_ = (double)local_2e8._0_8_ * dVar43;
              local_2e8._8_8_ = (double)local_2e8._8_8_ * dVar55;
              dStack_2d0 = dStack_2d0 * dVar35;
              local_2d8 = local_2d8 * dVar53;
              dVar43 = (dVar42 * dVar18 - dVar10 * dVar41) + dVar39 * dVar38 + dVar4 +
                       (double)plVar8[0x4c];
              dVar53 = (dVar38 * dVar10 - dVar42 * dVar17) + dVar47 * dVar41 + dVar14 +
                       (double)plVar8[0x4d];
              dVar55 = (dVar41 * dVar17 - dVar18 * dVar38) + dVar39 * dVar42 + dVar46 +
                       (double)plVar8[0x4e];
              dVar35 = (dVar40 * dVar11 - dVar40 * dVar11) + dVar47 * dVar40 + dVar5 +
                       (double)plVar8[0x4f];
            }
            else {
              local_2e8._8_8_ = (double)local_2e8._8_8_ * dVar55;
              local_2e8._0_8_ = (double)local_2e8._0_8_ * dVar43;
              dStack_2d0 = dStack_2d0 * dVar35;
              local_2d8 = local_2d8 * dVar53;
              dVar47 = (double)plVar8[0x48];
              dVar39 = (double)plVar8[0x49];
              dVar42 = (double)plVar8[0x4a];
              dVar38 = dVar39 + dVar39;
              dVar41 = dVar42 + dVar42;
              dVar35 = dVar47 * (dVar47 + dVar47);
              local_1f8 = (1.0 - (dVar42 * dVar41 + dVar39 * dVar38)) * dVar43;
              dStack_1d0 = (1.0 - (dVar42 * dVar41 + dVar35)) * dVar55;
              local_1a8 = (1.0 - (dVar35 + dVar39 * dVar38)) * dVar53;
              dVar35 = (double)plVar8[0x4b];
              dVar42 = dVar41 * dVar35;
              dVar46 = (dVar47 + dVar47) * (double)plVar8[0x4b];
              dVar35 = dVar38 * dVar35;
              dStack_1f0 = (dVar38 * dVar47 + dVar42) * dVar43;
              local_1c8 = (dVar41 * dVar39 + dVar46) * dVar55;
              local_1b8 = (dVar35 + (double)plVar8[0x48] * dVar41) * dVar53;
              local_1d8 = (dVar38 * dVar47 - dVar42) * dVar55;
              dStack_1b0 = (dVar41 * dVar39 - dVar46) * dVar53;
              local_1e8 = ((double)plVar8[0x48] * dVar41 - dVar35) * dVar43;
              uStack_1e0 = 0;
              uStack_1c0 = 0;
              uStack_1a0 = 0;
              local_198 = plVar8[0x4c];
              lStack_190 = plVar8[0x4d];
              local_188 = plVar8[0x4e];
              uStack_180 = 0x3ff0000000000000;
              dVar53 = *pdVar1;
              dVar55 = pdVar1[1];
              dVar43 = pdVar1[2];
              local_268 = pdVar1[8];
              local_258 = pdVar1[9];
              dStack_230 = pdVar1[10];
              dVar42 = dVar55 + dVar55;
              dVar35 = dVar43 + dVar43;
              dVar47 = dVar53 * (dVar53 + dVar53);
              local_278 = (1.0 - (dVar43 * dVar35 + dVar55 * dVar42)) * local_268;
              dStack_250 = (1.0 - (dVar43 * dVar35 + dVar47)) * local_258;
              local_228 = (1.0 - (dVar47 + dVar55 * dVar42)) * dStack_230;
              dVar43 = pdVar1[3];
              dVar47 = dVar35 * dVar43;
              dVar39 = (dVar53 + dVar53) * pdVar1[3];
              dVar43 = dVar42 * dVar43;
              dStack_270 = (dVar42 * dVar53 + dVar47) * local_268;
              local_248 = (dVar35 * dVar55 + dVar39) * local_258;
              local_238 = (dVar43 + *pdVar1 * dVar35) * dStack_230;
              local_268 = (*pdVar1 * dVar35 - dVar43) * local_268;
              local_258 = (dVar42 * dVar53 - dVar47) * local_258;
              dStack_230 = (dVar35 * dVar55 - dVar39) * dStack_230;
              uStack_260 = 0;
              uStack_240 = 0;
              uStack_220 = 0;
              local_218 = pdVar1[4];
              dStack_210 = pdVar1[5];
              local_208 = pdVar1[6];
              uStack_200 = 0x3ff0000000000000;
              FUN_1447fea8d(&local_178,&local_278,&local_1f8);
              auVar36 = _DAT_149934d80;
              local_2b0 = (double)local_168._0_8_;
              dVar53 = (double)local_168._0_8_ * (double)local_168._0_8_ +
                       local_178 * local_178 + dStack_170 * dStack_170;
              dVar55 = local_148 * local_148 +
                       (double)local_158._0_8_ * (double)local_158._0_8_ +
                       (double)local_158._8_8_ * (double)local_158._8_8_;
              dVar43 = local_128 * local_128 + local_138 * local_138 + dStack_130 * dStack_130;
              uVar33 = -(ulonglong)(0.0 <= dVar53 + -9.99999993922529e-09);
              dVar53 = (double)(~uVar33 & 0x3ff0000000000000 |
                               (ulonglong)(1.0 / SQRT(dVar53)) & uVar33);
              uVar33 = -(ulonglong)(0.0 <= dVar55 + -9.99999993922529e-09);
              dVar55 = (double)(~uVar33 & 0x3ff0000000000000 |
                               (ulonglong)(1.0 / SQRT(dVar55)) & uVar33);
              uVar33 = -(ulonglong)(0.0 <= dVar43 + -9.99999993922529e-09);
              dVar43 = (double)(~uVar33 & 0x3ff0000000000000 |
                               (ulonglong)(1.0 / SQRT(dVar43)) & uVar33);
              auVar34._8_8_ = -(ulonglong)(0.0 <= (double)local_2e8._8_8_);
              auVar34._0_8_ = -(ulonglong)(0.0 <= (double)local_2e8._0_8_);
              auVar48 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar34);
              dVar35 = (double)(~-(ulonglong)(0.0 <= local_2d8) & 0xbff0000000000000 |
                               (ulonglong)
                               ((uint)(-(ulonglong)(0.0 <= local_2d8) >> 0x20) & 0x3ff00000) << 0x20
                               );
              dVar47 = auVar48._0_8_;
              local_178 = local_178 * dVar53 * dVar47;
              dStack_170 = dStack_170 * dVar53 * dVar47;
              local_168._0_8_ = dVar53 * (double)local_168._0_8_ * dVar47;
              dVar53 = auVar48._8_8_;
              local_148 = dVar55 * local_148 * dVar53;
              local_158._8_8_ = (double)local_158._8_8_ * dVar55 * dVar53;
              local_158._0_8_ = dVar53 * (double)local_158._0_8_ * dVar55;
              local_128 = dVar43 * local_128 * dVar35;
              dStack_130 = dStack_130 * dVar43 * dVar35;
              local_138 = dVar35 * local_138 * dVar43;
              FUN_14481fd10(&local_298,&local_178);
              dVar43 = local_288._0_8_;
              dVar53 = local_288._8_8_;
              dVar55 = dVar43 * dVar43 + local_298 * local_298;
              dVar35 = dVar53 * dVar53 + dStack_290 * dStack_290;
              auVar37._0_8_ = dVar55 + dVar35;
              auVar37._8_8_ = dVar55 + dVar35;
              auVar44._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar37._8_8_);
              auVar44._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar37._0_8_);
              auVar48 = sqrtpd(auVar37,auVar37);
              auVar36 = divpd(auVar36,auVar48);
              auVar45._0_8_ = auVar36._0_8_ * dVar43;
              auVar45._8_8_ = auVar36._8_8_ * dVar53;
              dVar51 = (double)((ulonglong)(local_298 * auVar36._0_8_) &
                               -(ulonglong)(9.99999993922529e-09 <= auVar37._0_8_));
              dVar52 = (double)((ulonglong)(dStack_290 * auVar36._8_8_) &
                               -(ulonglong)(9.99999993922529e-09 <= auVar37._8_8_));
              auVar54 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar45,auVar44);
              dVar35 = 0.0;
              dVar43 = local_118;
              dVar53 = dStack_110;
              dVar55 = local_108;
            }
            uVar50 = (undefined4)((ulonglong)dVar53 >> 0x20);
            uVar49 = SUB84(dVar53,0);
            iVar24 = *(int *)(lVar26 + 0x98);
            *(uint *)(lVar26 + 0x98) = iVar24 + 1U;
            if (*(uint *)(lVar26 + 0x9c) < iVar24 + 1U) {
              FUN_140711e5c(local_2b8,iVar24);
            }
            *(undefined8 *)(*local_2b8 + (longlong)iVar24 * 8) = *(undefined8 *)(puVar9 + 0x4e);
            lVar23 = *(longlong *)(lVar31 + 0x40);
            auVar12._8_4_ = uVar49;
            auVar12._0_8_ = dVar43;
            auVar12._12_4_ = uVar50;
            *(undefined1 (*) [16])(lVar23 + 0x20) = auVar12;
            *(double *)(lVar23 + 0x30) = dVar55;
            lVar23 = *(longlong *)(lVar31 + 0x20);
            plVar28 = *(longlong **)(lVar31 + 0x28);
            if (plVar28 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar28 + 1) = (int)plVar28[1] + 1;
              UNLOCK();
              LOCK();
              plVar2 = plVar28 + 1;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              if ((int)*plVar2 == 0) {
                (**(code **)*plVar28)(plVar28);
                LOCK();
                piVar3 = (int *)((longlong)plVar28 + 0xc);
                *piVar3 = *piVar3 + -1;
                UNLOCK();
                if (*piVar3 == 0) {
                  (**(code **)(*plVar28 + 0x10))(plVar28);
                }
              }
            }
            if (*(longlong *)(lVar31 + 8) == 0) {
              uVar20 = 0xffffffff;
            }
            else {
              uVar20 = *(undefined4 *)(*(longlong *)(lVar31 + 8) + 0x78);
            }
            auVar13._8_4_ = uVar49;
            auVar13._0_8_ = dVar43;
            auVar13._12_4_ = uVar50;
            *(undefined1 (*) [16])(lVar23 + 8) = auVar13;
            *(double *)(lVar23 + 0x18) = dVar55;
            *(undefined4 *)(lVar23 + 0x20) = uVar20;
            local_178 = dVar51;
            dStack_170 = dVar52;
            local_168 = auVar54;
            FUN_1449a4304(lVar31,&local_178,1);
            lVar31 = *(longlong *)(lVar31 + 0x40);
            local_158._8_4_ = uVar49;
            local_158._0_8_ = dVar43;
            local_158._12_4_ = uVar50;
            local_138 = (double)local_2e8._0_8_;
            dStack_130 = (double)local_2e8._8_8_;
            local_128 = local_2d8;
            uStack_120 = dStack_2d0;
            local_178 = dVar51;
            dStack_170 = dVar52;
            local_168 = auVar54;
            local_148 = dVar55;
            dStack_140 = dVar35;
            if ((*(longlong *)(lVar31 + 0x50) != 0) &&
               (*(char *)(*(longlong *)(lVar31 + 0x50) + 0x1a) == '\x01')) {
              lVar23 = lVar31 + 0x78;
              if (*(longlong *)(lVar31 + 0x80) != 0) {
                lVar23 = *(longlong *)(lVar31 + 0x80);
              }
              iVar24 = *(int *)(lVar31 + 0x88);
              if ((longlong)iVar24 != 0) {
                lVar31 = 0;
                do {
                  FUN_14484a332(*(undefined8 *)(lVar23 + lVar31),&local_178);
                  lVar31 = lVar31 + 8;
                } while ((longlong)iVar24 * 8 != lVar31);
              }
            }
            pcVar21 = *(char **)(*(longlong *)(local_2a0 + 0x40) + lVar32 * 8);
            if (pcVar21[0x310] == '\0') {
              dVar53 = (double)plVar8[0x50];
              lVar31 = plVar8[0x51];
              dVar43 = (double)plVar8[0x52];
              if (((9.999999747378752e-05 < ABS(dVar53 - (double)plVar8[0x51])) ||
                  (9.999999747378752e-05 < ABS(dVar53 - dVar43))) ||
                 (9.999999747378752e-05 < ABS((double)plVar8[0x51] - dVar43))) {
                puVar30 = (undefined8 *)local_2c0[3];
                puVar22 = (undefined8 *)FUN_14001cc68(0x28,0x10);
                *puVar22 = 0;
                puVar22[1] = puVar9;
                puVar22[2] = dVar53;
                puVar22[3] = lVar31;
                puVar22[4] = dVar43;
              }
              else {
                puVar30 = (undefined8 *)local_2c0[3];
                puVar22 = (undefined8 *)FUN_14001cc68(0x28,0x10);
                *puVar22 = 0;
                puVar22[1] = puVar9;
                puVar22[2] = local_2e8._0_8_;
                puVar22[3] = local_2e8._8_8_;
                puVar22[4] = local_2d8;
              }
              pcVar21 = (char *)0x0;
              if (puVar22 != (undefined8 *)0x0) {
                LOCK();
                puVar6 = (undefined8 *)*puVar30;
                *puVar30 = puVar22;
                UNLOCK();
                LOCK();
                pcVar21 = (char *)*puVar6;
                *puVar6 = puVar22;
                UNLOCK();
              }
            }
          }
        }
LAB_143cafc5d:
        lVar32 = lVar32 + 1;
      } while (lVar32 != (int)lVar19);
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_308) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return pcVar21;
}



// FUNCTION 143cafde4 FUN_143cafde4 body=29 status=ok
// SIG undefined FUN_143cafde4(void)

undefined8 FUN_143cafde4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143cafe16 FUN_143cafe16 body=93 status=ok
// SIG undefined FUN_143cafe16(void)

void FUN_143cafe16(longlong param_1,undefined8 *param_2)

{
  if (*(int *)(param_2 + 1) != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  param_2 = (undefined8 *)*param_2;
  *param_2 = &DAT_149efe500;
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_14b3eca60;
  param_2[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}


