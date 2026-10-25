// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 147d3372e FUN_147d3372e body=298 status=ok
// SIG undefined FUN_147d3372e(void)

undefined8 FUN_147d3372e(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  undefined7 uVar7;
  longlong lVar5;
  ulonglong uVar6;
  byte bVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  bVar4 = *(byte *)(param_1 + 0xaa);
  uVar7 = (undefined7)(local_30 >> 8);
  if (-1 < (char)bVar4) {
    *(byte *)(param_1 + 0xaa) = bVar4 | 0x80;
    lVar5 = (**(code **)(*param_1 + 0x318))();
    if (lVar5 == 0) {
      *(byte *)(param_1 + 0xaa) = *(byte *)(param_1 + 0xaa) & 0xbf;
    }
    else {
      bVar8 = *(byte *)(lVar5 + 0x48) & 0x20;
      uVar6 = CONCAT71((int7)((ulonglong)lVar5 >> 8),(char)param_1[0xaa]) & 0xffffffffffffffbf;
      uVar7 = (undefined7)(uVar6 >> 8);
      bVar4 = (byte)uVar6 | bVar8 * '\x02';
      *(byte *)(param_1 + 0xaa) = bVar4;
      if (bVar8 != 0) goto LAB_147d33831;
    }
    local_48 = 0;
    uStack_40 = 0;
    local_58 = 0;
    lVar5 = FUN_14086ecde(param_1,&local_48,1,0);
    lVar3 = local_48;
    lVar9 = (longlong)(int)uStack_40;
    if (lVar9 != 0) {
      lVar10 = 0;
      do {
        lVar2 = *(longlong *)(lVar3 + lVar10);
        if (lVar2 != 0) {
          lVar5 = FUN_145b5a960();
          piVar1 = (int *)(lVar5 + 0x38);
          if ((((*piVar1 <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
               (lVar5 = lVar5 + 0x30,
               *(longlong *)
                (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*piVar1 * 8) == lVar5
               )) && (lVar5 = *(longlong *)(lVar2 + 0x48), lVar5 != 0)) &&
             ((*(byte *)(lVar5 + 0x48) & 0x20) != 0)) {
            *(byte *)(param_1 + 0xaa) = *(byte *)(param_1 + 0xaa) | 0x40;
            break;
          }
        }
        lVar10 = lVar10 + 8;
      } while (lVar9 * 8 != lVar10);
    }
    if (local_48 != 0) {
      lVar5 = FUN_1400020a8(local_48);
    }
    bVar4 = *(byte *)(param_1 + 0xaa);
    uVar7 = (undefined7)((ulonglong)lVar5 >> 8);
  }
LAB_147d33831:
  uVar6 = CONCAT71(uVar7,bVar4) & 0xffffffffffffff40;
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT71((int7)(uVar6 >> 8),(byte)uVar6 >> 6);
}



// FUNCTION 147d3387a FUN_147d3387a body=520 status=ok
// SIG undefined FUN_147d3387a(void)

void FUN_147d3387a(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  undefined8 param_5,longlong *param_6)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  longlong *local_60;
  longlong local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar2 = *(longlong **)(param_1 + 0x168);
  if (plVar2 != (longlong *)0x0) {
    local_60 = param_6;
    local_68 = param_5;
    (**(code **)(*plVar2 + 0x2e0))(plVar2,param_2,plVar2,param_4);
  }
  lVar3 = *(longlong *)(param_4 + 0x188);
  if ((lVar3 != 0) && (iVar7 = *(int *)(lVar3 + 0x28), iVar7 != 0)) {
    if ((longlong)(int)param_6[1] != 0) {
      plVar10 = (longlong *)*param_6;
      plVar2 = plVar10 + (int)param_6[1];
      do {
        plVar4 = (longlong *)*plVar10;
        if ((plVar4 != (longlong *)0x0) && (*(int *)(lVar3 + 0x38) != *(int *)(lVar3 + 100))) {
          lVar5 = plVar4[0x30];
          lVar8 = *(longlong *)(lVar3 + 0x70);
          if (*(longlong *)(lVar3 + 0x70) == 0) {
            lVar8 = lVar3 + 0x68;
          }
          iVar7 = *(int *)(lVar8 + (ulonglong)
                                   (*(int *)(lVar3 + 0x78) - 1U &
                                   (int)lVar5 + (int)((ulonglong)lVar5 >> 0x20) * 0x17) * 4);
          if (iVar7 != -1) {
            do {
              lVar8 = *(longlong *)(lVar3 + 0x30) + (longlong)iVar7 * 0x20;
              if (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar7 * 0x20) == lVar5) {
                plVar9 = (longlong *)(lVar8 + 8);
                if ((plVar9 != (longlong *)0x0 && lVar8 != 0) && (*plVar9 != 0)) {
                  local_58 = 0;
                  iVar7 = *(int *)(lVar3 + 0x28);
                  uVar6 = *(undefined8 *)(lVar3 + 0x20);
                  local_50 = iVar7;
                  if (iVar7 == 0) {
                    local_4c = 0;
                  }
                  else {
                    FUN_1477cf956(&local_58,iVar7,0);
                    FUN_1477cf9c9(local_58,uVar6,iVar7);
                  }
                  plVar4 = (longlong *)*plVar4;
                  if (plVar4 != (longlong *)0x0) {
                    (**(code **)(*plVar4 + 0x340))(plVar4,&local_58,0);
                  }
                  iVar7 = 0;
                  if (local_50 != 0) {
                    (**(code **)(*(longlong *)*plVar9 + 0x38))((longlong *)*plVar9,&local_58);
                    iVar7 = local_50;
                  }
                  FUN_145aa5488(local_58,iVar7);
                  if (local_58 != 0) {
                    FUN_1400020a8();
                  }
                }
                break;
              }
              iVar7 = *(int *)(lVar8 + 0x18);
            } while (iVar7 != -1);
          }
        }
        plVar10 = plVar10 + 1;
      } while (plVar10 != plVar2);
      iVar7 = *(int *)(lVar3 + 0x28);
    }
    iVar1 = *(int *)(lVar3 + 0x2c);
    FUN_145aa5488(*(undefined8 *)(lVar3 + 0x20),iVar7);
    *(undefined4 *)(lVar3 + 0x28) = 0;
    if ((iVar1 < 0) && (*(int *)(lVar3 + 0x2c) != 0)) {
      FUN_147047930(lVar3 + 0x20,0);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147d33ac8 FUN_147d33ac8 body=175 status=ok
// SIG undefined FUN_147d33ac8(void)

byte FUN_147d33ac8(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  byte bVar3;
  byte bVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0;
  uStack_40 = 0;
  FUN_14795b132(0,*(undefined8 *)(param_1 + 0x168),&local_48);
  lVar2 = local_48;
  lVar5 = (longlong)(int)uStack_40;
  if (lVar5 == 0) {
    bVar4 = 0;
  }
  else {
    lVar6 = 0;
    bVar4 = 0;
    do {
      plVar1 = *(longlong **)(*(longlong *)(lVar2 + lVar6) + 0x70);
      if (plVar1 != (longlong *)0x0) {
        bVar3 = (**(code **)(*plVar1 + 0x328))(plVar1,param_2);
        bVar4 = bVar4 | bVar3;
      }
      lVar6 = lVar6 + 8;
    } while (lVar5 * 8 != lVar6);
  }
  if (local_48 != 0) {
    FUN_1400020a8(local_48);
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar4 & 1;
}



// FUNCTION 147d33b78 FUN_147d33b78 body=162 status=ok
// SIG undefined FUN_147d33b78(void)

ulonglong FUN_147d33b78(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  uStack_30 = 0;
  FUN_147d33c1c(*(undefined8 *)(param_1 + 0x168),&local_38);
  lVar2 = local_38;
  if ((longlong)(int)uStack_30 == 0) {
    uVar6 = 0;
  }
  else {
    lVar5 = (longlong)(int)uStack_30 * 8;
    lVar4 = 0;
    do {
      plVar1 = *(longlong **)(*(longlong *)(lVar2 + lVar4) + 0x70);
      if ((plVar1 != (longlong *)0x0) && (cVar3 = (**(code **)(*plVar1 + 0x330))(), cVar3 != '\0'))
      {
        uVar6 = CONCAT71((int7)((ulonglong)lVar5 >> 8),1);
        goto LAB_147d33be4;
      }
      lVar4 = lVar4 + 8;
    } while (lVar5 != lVar4);
    uVar6 = 0;
  }
LAB_147d33be4:
  if (local_38 != 0) {
    FUN_1400020a8(local_38);
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6 & 0xffffffff;
}



// FUNCTION 147d33c1c FUN_147d33c1c body=190 status=ok
// SIG undefined FUN_147d33c1c(void)

void FUN_147d33c1c(longlong *param_1,undefined8 param_2)

{
  bool bVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 auStack_58 [40];
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_1 != (longlong *)0x0) {
    lVar3 = FUN_145b5ac1e();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(param_1[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(param_1[2] + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
        lVar3 + 0x30)) {
      local_30 = param_1;
      FUN_147d46fa8(param_2);
    }
    uVar2 = (**(code **)(*param_1 + 0x2f0))(param_1);
    if ((0 < (int)uVar2) && (0 < (int)param_1[6])) {
      uVar4 = 1;
      do {
        FUN_147d33c1c(*(undefined8 *)(param_1[5] + -8 + uVar4 * 8),param_2);
        if (uVar2 <= uVar4) break;
        bVar1 = (longlong)uVar4 < (longlong)(int)param_1[6];
        uVar4 = uVar4 + 1;
      } while (bVar1);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147d33cdc FUN_147d33cdc body=162 status=ok
// SIG undefined FUN_147d33cdc(void)

ulonglong FUN_147d33cdc(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  uStack_30 = 0;
  FUN_147d33c1c(*(undefined8 *)(param_1 + 0x168),&local_38);
  lVar2 = local_38;
  if ((longlong)(int)uStack_30 == 0) {
    uVar6 = 0;
  }
  else {
    lVar5 = (longlong)(int)uStack_30 * 8;
    lVar4 = 0;
    do {
      plVar1 = *(longlong **)(*(longlong *)(lVar2 + lVar4) + 0x70);
      if ((plVar1 != (longlong *)0x0) && (cVar3 = (**(code **)(*plVar1 + 0x338))(), cVar3 != '\0'))
      {
        uVar6 = CONCAT71((int7)((ulonglong)lVar5 >> 8),1);
        goto LAB_147d33d48;
      }
      lVar4 = lVar4 + 8;
    } while (lVar5 != lVar4);
    uVar6 = 0;
  }
LAB_147d33d48:
  if (local_38 != 0) {
    FUN_1400020a8(local_38);
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6 & 0xffffffff;
}



// FUNCTION 147d33d80 FUN_147d33d80 body=79 status=ok
// SIG undefined FUN_147d33d80(void)

undefined8 * FUN_147d33d80(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)FUN_147d47099(param_3);
  *param_2 = plVar3 + 2;
  param_2[1] = plVar3;
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
  return param_2;
}



// FUNCTION 147d33dd0 FUN_147d33dd0 body=196 status=ok
// SIG undefined FUN_147d33dd0(void)

longlong * FUN_147d33dd0(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  
  *param_2 = 0;
  param_2[1] = 0;
  if ((longlong)*(int *)(param_1 + 0x10) != 0) {
    lVar2 = *(longlong *)(param_1 + 8);
    lVar4 = (longlong)*(int *)(param_1 + 0x10) * 0xa0 + lVar2;
    do {
      if (*(longlong *)(lVar2 + 0x18) != 0) {
        iVar1 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
          FUN_147d4735a(param_2,iVar1);
        }
        *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar2 + 0x18;
      }
      if ((longlong)*(int *)(lVar2 + 0x68) != 0) {
        plVar3 = *(longlong **)(lVar2 + 0x60);
        lVar5 = (longlong)*(int *)(lVar2 + 0x68) << 3;
        do {
          if (*plVar3 != 0) {
            iVar1 = (int)param_2[1];
            *(uint *)(param_2 + 1) = iVar1 + 1U;
            if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
              FUN_147d4735a(param_2,iVar1);
            }
            *(longlong **)(*param_2 + (longlong)iVar1 * 8) = plVar3;
          }
          plVar3 = plVar3 + 1;
          lVar5 = lVar5 + -8;
        } while (lVar5 != 0);
      }
      lVar2 = lVar2 + 0xa0;
    } while (lVar2 != lVar4);
  }
  return param_2;
}



// FUNCTION 147d33e94 FUN_147d33e94 body=446 status=ok
// SIG undefined FUN_147d33e94(void)

undefined4 FUN_147d33e94(longlong param_1,longlong *param_2)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined1 auStack_68 [40];
  longlong local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(char *)(param_1 + 0x18) == '\x01') {
    iVar3 = (int)param_2[1];
    uVar4 = (ulonglong)iVar3;
    if (0 < (longlong)uVar4) {
      lVar5 = uVar4 * 0xa0 + -0x20;
      do {
        if (*(char *)(*param_2 + lVar5) == '\f') {
          FUN_147d4399c(param_2,(int)uVar4 + -1);
        }
        lVar5 = lVar5 + -0xa0;
        bVar1 = 1 < uVar4;
        uVar4 = uVar4 - 1;
      } while (bVar1);
      iVar3 = (int)param_2[1];
    }
    local_40 = 0;
    lVar5 = *param_2;
    local_38 = iVar3;
    if (iVar3 == 0) {
      local_34 = 0;
    }
    else {
      FUN_1477cf956(&local_40,iVar3,0);
      FUN_1477cf9c9(local_40,lVar5,iVar3);
    }
    FUN_1470429a6(&local_40,param_1 + 0x20);
    uVar2 = FUN_147045538(param_1,param_2);
    FUN_145aa5488(local_40,local_38);
  }
  else {
    local_40 = 0;
    iVar3 = (int)param_2[1];
    lVar5 = *param_2;
    local_38 = iVar3;
    if (iVar3 == 0) {
      local_34 = 0;
    }
    else {
      FUN_1477cf956(&local_40,iVar3,0);
      FUN_1477cf9c9(local_40,lVar5,iVar3);
    }
    FUN_1470429a6(&local_40,param_1 + 0x20);
    uVar4 = (ulonglong)(int)param_2[1];
    if (0 < (longlong)uVar4) {
      lVar5 = uVar4 * 0xa0 + -0x20;
      do {
        if (*(char *)(*param_2 + lVar5) == '\f') {
          FUN_147d4399c(param_2,(int)uVar4 + -1);
        }
        lVar5 = lVar5 + -0xa0;
        bVar1 = 1 < uVar4;
        uVar4 = uVar4 - 1;
      } while (bVar1);
    }
    uVar2 = FUN_147045538(param_1,param_2);
    FUN_145aa5488(local_40,local_38);
  }
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 147d34054 FUN_147d34054 body=129 status=ok
// SIG undefined FUN_147d34054(void)

undefined8 * FUN_147d34054(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14a57d248;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 2),4000);
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 1;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  puVar1 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  *puVar1 = 0;
  puVar1[2] = 0;
  puVar1[4] = 0;
  param_1[0xd] = puVar1;
  param_1[0xc] = puVar1;
  return param_1;
}



// FUNCTION 147d340d6 FUN_147d340d6 body=64 status=ok
// SIG undefined FUN_147d340d6(void)

undefined8 FUN_147d340d6(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  
  FUN_147d34116();
  if ((int)param_1[9] == 0) {
    uVar3 = 0;
  }
  else {
    cVar2 = FUN_144729dda((longlong)param_1 + 0x4c);
    uVar3 = 0;
    if (cVar2 != '\0') {
      (**(code **)(*param_1 + 8))(param_1);
      LOCK();
      lVar1 = param_1[9];
      *(undefined4 *)(param_1 + 9) = 0;
      UNLOCK();
      uVar3 = CONCAT71((uint7)(uint3)((uint)(int)lVar1 >> 8),1);
    }
  }
  return uVar3;
}



// FUNCTION 147d34116 FUN_147d34116 body=176 status=ok
// SIG undefined FUN_147d34116(void)

void FUN_147d34116(longlong param_1)

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
  cVar2 = FUN_147d342e4(param_1 + 0x60,local_68);
  if (cVar2 != '\0') {
    do {
      pcVar1 = local_68[0];
      plVar4 = local_58;
      if (local_58 == (longlong *)0x0) {
        plVar4 = local_48;
      }
      uVar3 = (**(code **)(*plVar4 + 8))();
      (*pcVar1)(uVar3);
      cVar2 = FUN_147d342e4(param_1 + 0x60,local_68);
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



// FUNCTION 147d341c8 FUN_147d341c8 body=118 status=ok
// SIG undefined FUN_147d341c8(void)

ulonglong FUN_147d341c8(int *param_1)

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



// FUNCTION 147d34240 FUN_147d34240 body=60 status=ok
// SIG undefined FUN_147d34240(void)

void FUN_147d34240(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  
  FUN_147d3427c(param_1 + 0x60);
  if (*param_2 != 0) {
    plVar1 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar1 = (longlong *)param_2[2];
    }
                    /* WARNING: Could not recover jumptable at 0x000147d34271. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))(plVar1);
    return;
  }
  return;
}



// FUNCTION 147d3427c FUN_147d3427c body=103 status=ok
// SIG undefined FUN_147d3427c(void)

void FUN_147d3427c(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  
  puVar6 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  *puVar6 = 0;
  lVar1 = *param_2;
  puVar6[2] = lVar1;
  puVar6[4] = param_2[2];
  param_2[2] = 0;
  lVar3 = param_2[4];
  lVar4 = param_2[5];
  lVar5 = param_2[7];
  puVar6[8] = param_2[6];
  puVar6[9] = lVar5;
  puVar6[6] = lVar3;
  puVar6[7] = lVar4;
  if (lVar1 != 0) {
    *param_2 = 0;
  }
  if (puVar6 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*param_1;
    *param_1 = puVar6;
    *puVar2 = puVar6;
  }
  return;
}



// FUNCTION 147d342e4 FUN_147d342e4 body=421 status=ok
// SIG undefined FUN_147d342e4(void)

bool FUN_147d342e4(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
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
  longlong *plVar18;
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
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar1 = **(longlong **)(param_1 + 8);
  if (lVar1 != 0) {
    uVar3 = *param_2;
    uVar4 = param_2[1];
    uVar5 = param_2[2];
    uVar6 = param_2[3];
    uVar7 = param_2[4];
    uVar8 = param_2[5];
    uVar9 = param_2[6];
    uVar10 = param_2[7];
    uVar11 = *(undefined8 *)(lVar1 + 0x10);
    uVar12 = *(undefined8 *)(lVar1 + 0x18);
    uVar13 = *(undefined8 *)(lVar1 + 0x20);
    uVar14 = *(undefined8 *)(lVar1 + 0x28);
    uVar15 = *(undefined8 *)(lVar1 + 0x30);
    uVar16 = *(undefined8 *)(lVar1 + 0x38);
    uVar17 = *(undefined8 *)(lVar1 + 0x48);
    param_2[6] = *(undefined8 *)(lVar1 + 0x40);
    param_2[7] = uVar17;
    param_2[4] = uVar15;
    param_2[5] = uVar16;
    param_2[2] = uVar13;
    param_2[3] = uVar14;
    *param_2 = uVar11;
    param_2[1] = uVar12;
    *(undefined8 *)(lVar1 + 0x40) = uVar9;
    *(undefined8 *)(lVar1 + 0x48) = uVar10;
    *(undefined8 *)(lVar1 + 0x30) = uVar7;
    *(undefined8 *)(lVar1 + 0x38) = uVar8;
    *(undefined8 *)(lVar1 + 0x20) = uVar5;
    *(undefined8 *)(lVar1 + 0x28) = uVar6;
    *(undefined8 *)(lVar1 + 0x10) = uVar3;
    *(undefined8 *)(lVar1 + 0x18) = uVar4;
    lVar2 = *(longlong *)(param_1 + 8);
    *(longlong *)(param_1 + 8) = lVar1;
    local_98 = *(longlong *)(lVar1 + 0x10);
    uStack_50 = *(undefined8 *)(lVar1 + 0x18);
    local_88 = *(longlong **)(lVar1 + 0x20);
    uStack_40 = *(undefined8 *)(lVar1 + 0x28);
    local_38 = *(undefined8 *)(lVar1 + 0x30);
    uStack_30 = *(undefined8 *)(lVar1 + 0x38);
    local_28 = *(undefined8 *)(lVar1 + 0x40);
    uStack_20 = *(undefined8 *)(lVar1 + 0x48);
    uVar7 = local_28;
    uVar8 = uStack_20;
    uVar5 = local_38;
    uVar6 = uStack_30;
    local_48 = local_88;
    uVar4 = uStack_40;
    local_58 = local_98;
    uVar3 = uStack_50;
    *(ulonglong *)(lVar1 + 0x40) = CONCAT44(uStack_64,local_68);
    *(ulonglong *)(lVar1 + 0x48) = CONCAT44(uStack_5c,uStack_60);
    *(ulonglong *)(lVar1 + 0x30) = CONCAT44(uStack_74,local_78);
    *(ulonglong *)(lVar1 + 0x38) = CONCAT44(uStack_6c,uStack_70);
    *(undefined8 *)(lVar1 + 0x20) = 0;
    *(ulonglong *)(lVar1 + 0x28) = CONCAT44(uStack_7c,uStack_80);
    *(undefined8 *)(lVar1 + 0x10) = 0;
    *(ulonglong *)(lVar1 + 0x18) = CONCAT44(uStack_8c,uStack_90);
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
    uStack_50 = uVar3;
    uStack_40 = uVar4;
    local_38 = uVar5;
    uStack_30 = uVar6;
    local_28 = uVar7;
    uStack_20 = uVar8;
    if (local_98 != 0) {
      plVar18 = local_88;
      if (local_88 == (longlong *)0x0) {
        plVar18 = (longlong *)&local_78;
      }
      (**(code **)(*plVar18 + 0x10))();
    }
    if (lVar2 != 0) {
      if (*(longlong *)(lVar2 + 0x10) != 0) {
        plVar18 = (longlong *)(lVar2 + 0x30);
        if (*(longlong **)(lVar2 + 0x20) != (longlong *)0x0) {
          plVar18 = *(longlong **)(lVar2 + 0x20);
        }
        (**(code **)(*plVar18 + 0x10))();
      }
      FUN_1400020a8(lVar2);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return lVar1 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d3448e FUN_147d3448e body=313 status=ok
// SIG undefined FUN_147d3448e(void)

void FUN_147d3448e(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong lVar4;
  bool bVar5;
  int iVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong *plVar12;
  bool bVar13;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x38));
  if (0 < (longlong)*(int *)(param_1 + 0x30)) {
    plVar1 = (longlong *)(param_1 + 0x28);
    uVar10 = (longlong)*(int *)(param_1 + 0x30);
    do {
      uVar11 = uVar10 - 1;
      lVar4 = *plVar1;
      plVar12 = *(longlong **)(lVar4 + 8 + uVar11 * 0x10);
      bVar5 = true;
      if (plVar12 == (longlong *)0x0) {
LAB_147d344eb:
        plVar12 = (longlong *)0x0;
LAB_147d344ee:
        FUN_147d473e0(plVar1,uVar11 & 0xffffffff);
        FUN_147d47452(plVar1);
        if (!bVar5) goto LAB_147d34505;
      }
      else {
        iVar8 = (int)plVar12[1];
        do {
          if (iVar8 == 0) goto LAB_147d344eb;
          LOCK();
          iVar6 = (int)plVar12[1];
          bVar13 = iVar8 == iVar6;
          if (bVar13) {
            *(int *)(plVar12 + 1) = iVar8 + 1;
            iVar6 = iVar8;
          }
          iVar8 = iVar6;
          UNLOCK();
        } while (!bVar13);
        lVar4 = *(longlong *)(lVar4 + uVar11 * 0x10);
        if (lVar4 == 0) {
LAB_147d3456d:
          bVar5 = false;
          goto LAB_147d344ee;
        }
        cVar7 = FUN_144729dda(lVar4 + 0x4c);
        if ((cVar7 == '\0') || (lVar9 = FUN_14479d2ce(lVar4 + 0x4c), lVar9 == 0))
        goto LAB_147d3456d;
        LOCK();
        *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
        UNLOCK();
        local_58 = lVar4;
        local_50 = plVar12;
        FUN_147d345c8(param_1,&local_58);
LAB_147d34505:
        LOCK();
        plVar2 = plVar12 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar12)(plVar12);
          LOCK();
          piVar3 = (int *)((longlong)plVar12 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar12 + 0x10))(plVar12);
          }
        }
      }
      bVar5 = 1 < (longlong)uVar10;
      uVar10 = uVar11;
    } while (bVar5);
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Could not recover jumptable at 0x000147d34599. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x38));
  return;
}



// FUNCTION 147d345c8 FUN_147d345c8 body=235 status=ok
// SIG undefined FUN_147d345c8(void)

void FUN_147d345c8(longlong param_1,longlong *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  char cVar3;
  longlong lVar4;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar3 = FUN_146269f19();
  if (cVar3 == '\0') {
    FUN_144a61b4f();
  }
  if (*param_2 != 0) {
    lVar4 = FUN_14479d2ce(*param_2 + 0x4c);
    if (lVar4 != param_1) {
      local_28 = *param_2;
      local_20 = param_2[1];
      if (local_20 != 0) {
        LOCK();
        *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
        UNLOCK();
      }
      FUN_147d34a50(&local_28);
      FUN_14485c47a(*param_2 + 0x4c,param_1);
      cVar3 = FUN_144729dda(*param_2 + 0x4c);
      if (cVar3 != '\0') {
        FUN_147d346c4(param_1,param_2);
      }
    }
    LOCK();
    *(undefined4 *)(*param_2 + 0x48) = 1;
    UNLOCK();
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
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d346c4 FUN_147d346c4 body=181 status=ok
// SIG undefined FUN_147d346c4(void)

void FUN_147d346c4(longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((char)param_1[0xc] == '\0') {
    *(undefined1 *)(param_1 + 0xc) = 1;
    (**(code **)(*param_1 + 0x2d0))(param_1);
    (**(code **)(*param_1 + 0x2d8))(param_1);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 7));
  local_30 = *param_2;
  local_28 = (longlong *)param_2[1];
  if (local_28 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)local_28 + 0xc) = *(int *)((longlong)local_28 + 0xc) + 1;
    UNLOCK();
  }
  FUN_147d474ee(param_1 + 5,&local_30);
  if (local_28 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_28 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_28 + 0x10))();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x000147d3476d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 7));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d3477a FUN_147d3477a body=162 status=ok
// SIG undefined FUN_147d3477a(void)

void FUN_147d3477a(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x38));
  local_30 = *param_2;
  plVar2 = (longlong *)param_2[1];
  local_28 = plVar2;
  if (plVar2 == (longlong *)0x0) {
    FUN_147d3481e(param_1 + 0x28,&local_30);
  }
  else {
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    FUN_147d3481e(param_1 + 0x28);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x000147d347e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x38));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d3481e FUN_147d3481e body=301 status=ok
// SIG undefined FUN_147d3481e(void)

void FUN_147d3481e(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  longlong *plVar10;
  bool bVar11;
  
  if ((int)param_1[1] < 1) {
    return;
  }
  uVar6 = 0;
  bVar9 = false;
LAB_147d34845:
  do {
    lVar7 = *param_1;
    plVar10 = *(longlong **)(lVar7 + 8 + uVar6 * 0x10);
    if (plVar10 == (longlong *)0x0) {
LAB_147d3486e:
      plVar10 = (longlong *)0x0;
    }
    else {
      iVar5 = (int)plVar10[1];
      do {
        if (iVar5 == 0) goto LAB_147d3486e;
        LOCK();
        iVar4 = (int)plVar10[1];
        bVar11 = iVar5 == iVar4;
        if (bVar11) {
          *(int *)(plVar10 + 1) = iVar5 + 1;
          iVar4 = iVar5;
        }
        iVar5 = iVar4;
        UNLOCK();
      } while (!bVar11);
    }
    lVar7 = *(longlong *)(lVar7 + uVar6 * 0x10);
    plVar3 = (longlong *)param_2[1];
    if (plVar3 == (longlong *)0x0) {
LAB_147d348c1:
      lVar8 = 0;
    }
    else {
      iVar5 = (int)plVar3[1];
      do {
        if (iVar5 == 0) goto LAB_147d348c1;
        LOCK();
        iVar4 = (int)plVar3[1];
        bVar11 = iVar5 == iVar4;
        if (bVar11) {
          *(int *)(plVar3 + 1) = iVar5 + 1;
          iVar4 = iVar5;
        }
        iVar5 = iVar4;
        UNLOCK();
      } while (!bVar11);
      lVar8 = *param_2;
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
    if (plVar10 == (longlong *)0x0) {
      lVar7 = 0;
    }
    else {
      LOCK();
      plVar3 = plVar10 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
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
    if (lVar7 != lVar8) break;
    FUN_147d47716(param_1,uVar6 & 0xffffffff);
    bVar9 = true;
    if ((longlong)(int)param_1[1] <= (longlong)uVar6) goto LAB_147d34933;
  } while( true );
  uVar6 = uVar6 + 1;
  if ((longlong)(int)param_1[1] <= (longlong)uVar6) {
    if (!bVar9) {
      return;
    }
LAB_147d34933:
    FUN_147d47452(param_1);
    return;
  }
  goto LAB_147d34845;
}



// FUNCTION 147d3494c FUN_147d3494c body=164 status=ok
// SIG undefined FUN_147d3494c(void)

void FUN_147d3494c(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_a8 [32];
  undefined1 *local_88 [2];
  undefined8 local_78;
  undefined **local_68;
  undefined8 local_60;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  iVar1 = *(int *)(param_1 + 0x30);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x28);
    lVar4 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar4);
      if (lVar3 != 0) {
        local_78 = 0;
        local_68 = &PTR_LAB_14aaafea0;
        local_88[0] = &LAB_143700db0;
        local_60 = param_2;
        FUN_1458f5202(lVar3,local_88);
      }
      lVar4 = lVar4 + 0x10;
    } while ((longlong)iVar1 * 0x10 != lVar4);
  }
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147d349f2 FUN_147d349f2 body=94 status=ok
// SIG undefined FUN_147d349f2(void)

int FUN_147d349f2(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  
  iVar4 = *(int *)(param_1 + 0x30);
  if ((longlong)iVar4 == 0) {
    iVar4 = 2;
  }
  else {
    lVar1 = *(longlong *)(param_1 + 0x28);
    iVar5 = 9;
    lVar6 = 0;
    do {
      plVar2 = *(longlong **)(lVar1 + lVar6);
      if (plVar2 != (longlong *)0x0) {
        iVar3 = (**(code **)(*plVar2 + 0x2e8))();
        if (iVar3 < iVar5) {
          iVar5 = iVar3;
        }
      }
      lVar6 = lVar6 + 0x10;
    } while ((longlong)iVar4 * 0x10 != lVar6);
    iVar4 = 2;
    if (iVar5 < 9) {
      iVar4 = iVar5;
    }
  }
  return iVar4;
}



// FUNCTION 147d34a50 FUN_147d34a50 body=141 status=ok
// SIG undefined FUN_147d34a50(void)

void FUN_147d34a50(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  
  cVar4 = FUN_146269f19();
  if (cVar4 == '\0') {
    cVar4 = FUN_144a61b4f();
    if (cVar4 == '\0') goto LAB_147d34a9b;
  }
  if (*param_1 != 0) {
    lVar5 = *param_1 + 0x4c;
    cVar4 = FUN_144729dda(lVar5);
    if (cVar4 != '\0') {
      lVar5 = FUN_14479d2ce(lVar5);
      if (lVar5 != 0) {
        FUN_147d3477a(lVar5,param_1);
      }
    }
    *(undefined8 *)(*param_1 + 0x4c) = 0;
  }
LAB_147d34a9b:
  plVar3 = (longlong *)param_1[1];
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
                    /* WARNING: Could not recover jumptable at 0x000147d34ac4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147d34ae2 FUN_147d34ae2 body=85 status=ok
// SIG undefined FUN_147d34ae2(void)

undefined8 FUN_147d34ae2(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  char cVar1;
  
  LOCK();
  *(undefined4 *)(param_1 + 0xb) = 1;
  UNLOCK();
  *param_2 = 0;
  FUN_147d340d6();
  if ((*(int *)((longlong)param_1 + 0x5c) != 0) &&
     (cVar1 = FUN_144729dda((longlong)param_1 + 0x4c), cVar1 != '\0')) {
    (**(code **)(*param_1 + 0x38))(param_1,param_2,param_3);
    return 1;
  }
  return 0;
}



// FUNCTION 147d34b38 FUN_147d34b38 body=93 status=ok
// SIG undefined FUN_147d34b38(void)

void FUN_147d34b38(longlong param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)**(undefined8 **)(param_1 + 8);
  FUN_1400020a8();
  while (puVar3 != (undefined8 *)0x0) {
    *(undefined8 **)(param_1 + 8) = puVar3;
    puVar1 = (undefined8 *)*puVar3;
    if (puVar3[2] != 0) {
      plVar2 = puVar3 + 6;
      if ((longlong *)puVar3[4] != (longlong *)0x0) {
        plVar2 = (longlong *)puVar3[4];
      }
      (**(code **)(*plVar2 + 0x10))(plVar2);
      puVar3 = *(undefined8 **)(param_1 + 8);
    }
    FUN_1400020a8(puVar3);
    puVar3 = puVar1;
  }
  return;
}



// FUNCTION 147d34b96 FUN_147d34b96 body=176 status=ok
// SIG undefined FUN_147d34b96(void)

void FUN_147d34b96(longlong param_1)

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
  cVar2 = FUN_147d34c48(param_1 + 8,local_68);
  if (cVar2 != '\0') {
    do {
      pcVar1 = local_68[0];
      plVar4 = local_58;
      if (local_58 == (longlong *)0x0) {
        plVar4 = local_48;
      }
      uVar3 = (**(code **)(*plVar4 + 8))();
      (*pcVar1)(uVar3);
      cVar2 = FUN_147d34c48(param_1 + 8,local_68);
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



// FUNCTION 147d34c48 FUN_147d34c48 body=252 status=ok
// SIG undefined FUN_147d34c48(void)

ulonglong FUN_147d34c48(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 unaff_RBX;
  undefined1 auStack_d8 [32];
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
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  char local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_147d47788(param_1,&local_b8);
  if (local_78 == '\x01') {
    lVar1 = *param_2;
    uStack_60 = param_2[1];
    plVar8 = (longlong *)param_2[2];
    uStack_50 = param_2[3];
    local_48 = param_2[4];
    uStack_40 = param_2[5];
    local_38 = param_2[6];
    uStack_30 = param_2[7];
    lVar6 = local_38;
    lVar7 = uStack_30;
    lVar4 = local_48;
    lVar5 = uStack_40;
    local_58 = plVar8;
    plVar8 = local_58;
    lVar3 = uStack_50;
    local_68 = lVar1;
    lVar1 = local_68;
    lVar2 = uStack_60;
    param_2[6] = CONCAT44(uStack_84,local_88);
    param_2[7] = CONCAT44(uStack_7c,uStack_80);
    param_2[4] = CONCAT44(uStack_94,local_98);
    param_2[5] = CONCAT44(uStack_8c,uStack_90);
    param_2[2] = CONCAT44(uStack_a4,local_a8);
    param_2[3] = CONCAT44(uStack_9c,uStack_a0);
    *param_2 = CONCAT44(uStack_b4,local_b8);
    param_2[1] = CONCAT44(uStack_ac,uStack_b0);
    local_68._0_4_ = (undefined4)lVar1;
    local_68._4_4_ = (undefined4)((ulonglong)lVar1 >> 0x20);
    uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
    local_58._0_4_ = SUB84(plVar8,0);
    local_58._4_4_ = (undefined4)((ulonglong)plVar8 >> 0x20);
    uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
    local_48._4_4_ = (undefined4)((ulonglong)local_48 >> 0x20);
    uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
    local_38._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
    uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
    local_88 = (undefined4)local_38;
    uStack_84 = local_38._4_4_;
    uStack_80 = (undefined4)uStack_30;
    uStack_7c = uStack_30._4_4_;
    local_98 = (undefined4)local_48;
    uStack_94 = local_48._4_4_;
    uStack_90 = (undefined4)uStack_40;
    uStack_8c = uStack_40._4_4_;
    local_a8 = (undefined4)local_58;
    uStack_a4 = local_58._4_4_;
    uStack_a0 = (undefined4)uStack_50;
    uStack_9c = uStack_50._4_4_;
    local_b8 = (undefined4)local_68;
    uStack_b4 = local_68._4_4_;
    uStack_b0 = (undefined4)uStack_60;
    uStack_ac = uStack_60._4_4_;
    local_68 = lVar1;
    uStack_60 = lVar2;
    local_58 = plVar8;
    uStack_50 = lVar3;
    local_48 = lVar4;
    uStack_40 = lVar5;
    local_38 = lVar6;
    uStack_30 = lVar7;
    if (lVar1 != 0) {
      if (plVar8 == (longlong *)0x0) {
        plVar8 = (longlong *)&local_98;
      }
      (**(code **)(*plVar8 + 0x10))();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return CONCAT71((int7)((ulonglong)unaff_RBX >> 8),local_78) & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d34d56 FUN_147d34d56 body=36 status=ok
// SIG undefined FUN_147d34d56(void)

undefined8 FUN_147d34d56(longlong param_1,undefined8 param_2)

{
  FUN_140002266(param_2,L"Adjusters: %d",*(undefined4 *)(param_1 + 0x78));
  return param_2;
}



// FUNCTION 147d34d7a FUN_147d34d7a body=148 status=ok
// SIG undefined FUN_147d34d7a(void)

undefined8 * FUN_147d34d7a(undefined8 *param_1,longlong *param_2)

{
  undefined8 *_Dst;
  longlong lVar1;
  undefined8 *puVar2;
  LPCRITICAL_SECTION lpCriticalSection;
  
  puVar2 = (undefined8 *)FUN_14001cc68(400);
  puVar2[1] = &DAT_100000001;
  *puVar2 = &PTR_FUN_14a5713d0;
  _Dst = puVar2 + 2;
  memset(_Dst,0,0x180);
  FUN_1477cafba(_Dst);
  *param_1 = _Dst;
  param_1[1] = puVar2;
  lVar1 = *param_2;
  EnterCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x150));
  FUN_147d34e0e(*param_1,*param_2);
  lpCriticalSection = (LPCRITICAL_SECTION)(lVar1 + 0x150);
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  return param_1;
}



// FUNCTION 147d34e0e FUN_147d34e0e body=283 status=ok
// SIG undefined FUN_147d34e0e(void)

undefined4 * FUN_147d34e0e(undefined4 *param_1,undefined4 *param_2)

{
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  *(undefined1 *)((longlong)param_1 + 9) = *(undefined1 *)((longlong)param_2 + 9);
  FUN_14702fcb4(param_1 + 4,param_2 + 4);
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x54));
  FUN_147d35be4(&local_98,param_2 + 8);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x54));
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x54));
  FUN_147d35b86(param_1 + 8,&local_98);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x54));
  FUN_14704466a(param_1 + 0x1c,param_2 + 0x1c);
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_1477cb0bc(&local_98);
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d34f2a FUN_147d34f2a body=148 status=ok
// SIG undefined FUN_147d34f2a(void)

undefined8 * FUN_147d34f2a(undefined8 *param_1,longlong *param_2)

{
  undefined8 *_Dst;
  longlong lVar1;
  undefined8 *puVar2;
  LPCRITICAL_SECTION lpCriticalSection;
  
  puVar2 = (undefined8 *)FUN_14001cc68(400);
  puVar2[1] = &DAT_100000001;
  *puVar2 = &PTR_FUN_14a5713d0;
  _Dst = puVar2 + 2;
  memset(_Dst,0,0x180);
  FUN_1477cafba(_Dst);
  *param_1 = _Dst;
  param_1[1] = puVar2;
  lVar1 = *param_2;
  EnterCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x150));
  FUN_147d34fbe(*param_1,*param_2);
  lpCriticalSection = (LPCRITICAL_SECTION)(lVar1 + 0x150);
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  return param_1;
}



// FUNCTION 147d34fbe FUN_147d34fbe body=325 status=ok
// SIG undefined FUN_147d34fbe(void)

undefined4 * FUN_147d34fbe(undefined4 *param_1,undefined4 *param_2)

{
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  *(undefined1 *)((longlong)param_1 + 9) = *(undefined1 *)((longlong)param_2 + 9);
  *(undefined1 *)((longlong)param_1 + 10) = *(undefined1 *)((longlong)param_2 + 10);
  if (param_1 != param_2) {
    if (*(longlong *)(param_1 + 4) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
    *(undefined8 *)(param_2 + 4) = 0;
    param_1[6] = param_2[6];
    param_1[7] = param_2[7];
    *(undefined8 *)(param_2 + 6) = 0;
  }
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x54));
  FUN_147d35b86(&local_98,param_2 + 8);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x54));
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x54));
  FUN_147d35b86(param_1 + 8,&local_98);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x54));
  FUN_147044920(param_1 + 0x1c,param_2 + 0x1c);
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_1477cb0bc(&local_98);
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d35104 FUN_147d35104 body=197 status=ok
// SIG undefined FUN_147d35104(void)

void FUN_147d35104(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_238 [44];
  undefined1 local_20c [4];
  undefined1 local_208 [256];
  undefined1 local_108 [224];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_238;
  FUN_147044584(local_108,param_1 + 0x70);
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x150));
  lVar1 = param_1 + 0x20;
  if (*(int *)(param_1 + 0x28) != *(int *)(param_1 + 0x54)) {
    FUN_147d47ebe(lVar1);
    FUN_147d48008(lVar1);
  }
  FUN_147044c3a(local_208,local_108);
  FUN_147d48120(lVar1,local_20c,local_208);
  FUN_1470451b4(local_208);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x150));
  FUN_14704513c(local_108);
  if ((local_28 ^ (ulonglong)auStack_238) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d351ca FUN_147d351ca body=107 status=ok
// SIG undefined FUN_147d351ca(void)

void FUN_147d351ca(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined1 param_4,
                  undefined1 param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  
  *(undefined4 *)*param_1 = param_2;
  *(undefined1 *)(*param_1 + 8) = param_4;
  *(undefined1 *)(*param_1 + 9) = param_5;
  lVar1 = *param_1;
  if (*(int *)(lVar1 + 0x1c) < 0) {
    *(undefined4 *)(lVar1 + 0x18) = 0;
    FUN_1470345fa(lVar1 + 0x10,0);
  }
  else {
    *(undefined4 *)(lVar1 + 0x18) = 0;
  }
  uVar2 = thunk_FUN_147044b04(param_3);
  FUN_14704466a(*param_1 + 0x70,uVar2);
  FUN_147d35104(*param_1);
  return;
}



// FUNCTION 147d35236 FUN_147d35236 body=310 status=ok
// SIG undefined FUN_147d35236(void)

undefined4 FUN_147d35236(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  int iVar5;
  LPCRITICAL_SECTION lpCriticalSection;
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
  lpCriticalSection = (LPCRITICAL_SECTION)(*param_1 + 0x150);
  EnterCriticalSection(lpCriticalSection);
  lVar3 = *param_1;
  plVar1 = (longlong *)(lVar3 + 0x20);
  lVar2 = lVar3 + 0x30;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  uStack_40 = 0;
  uStack_50 = lVar2;
  if (*(int *)(lVar3 + 0x48) == 0) {
    iVar5 = 0;
  }
  else {
    FUN_1449c0562(&local_58);
    iVar5 = *(int *)(lVar3 + 0x48);
  }
  uStack_60 = CONCAT44(uStack_3c,uStack_40);
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_78 = (undefined4)local_58;
  uStack_74 = local_58._4_4_;
  uStack_70 = (undefined4)uStack_50;
  uStack_6c = uStack_50._4_4_;
  local_80 = plVar1;
  if ((iStack_44 == iVar5) && (uStack_50 == lVar2)) {
    uVar4 = 0;
  }
  else {
    do {
      uVar4 = FUN_1470452ac((longlong)iStack_64 * 0x110 + *local_80);
      if ((char)uVar4 != '\0') break;
      local_68 = local_68 & ~uStack_74;
      FUN_1449c0562(&local_78);
    } while (local_80 != plVar1 || (CONCAT44(uStack_6c,uStack_70) != lVar2 || iStack_64 != iVar5));
  }
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 147d3536e FUN_147d3536e body=1193 status=ok
// SIG undefined FUN_147d3536e(void)

bool FUN_147d3536e(longlong *param_1,undefined4 param_2,ulonglong param_3)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  code *pcVar5;
  ulonglong uVar6;
  char cVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong lVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  float fVar16;
  undefined1 auStack_138 [40];
  ulonglong local_110;
  longlong *local_108;
  LPCRITICAL_SECTION local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  longlong local_e8;
  uint local_e0;
  longlong local_d8;
  uint local_d0;
  undefined4 local_c4;
  longlong *local_c0;
  undefined4 local_b8;
  uint uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  uint local_a8;
  int iStack_a4;
  undefined8 uStack_a0;
  undefined4 local_94;
  undefined8 local_90;
  undefined8 uStack_88;
  uint local_80;
  int iStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_138;
  lVar4 = *param_1;
  *(undefined1 *)(lVar4 + 10) = 1;
  fVar2 = *(float *)(lVar4 + 4);
  local_94 = *(undefined4 *)(lVar4 + 0x78);
  if (*(char *)(lVar4 + 0x84) == '\x01') {
    pcVar5 = *(code **)(lVar4 + 0x110);
    plVar10 = (longlong *)(lVar4 + 0x130);
    if (*(longlong **)(lVar4 + 0x120) != (longlong *)0x0) {
      plVar10 = *(longlong **)(lVar4 + 0x120);
    }
    uVar8 = (**(code **)(*plVar10 + 8))();
    (*pcVar5)(uVar8,&local_94);
  }
  local_100 = (LPCRITICAL_SECTION)(*param_1 + 0x150);
  EnterCriticalSection(local_100);
  lVar12 = *param_1;
  plVar10 = (longlong *)(lVar12 + 0x20);
  lVar9 = lVar12 + 0x30;
  local_90 = 0x100000000;
  local_80 = 0xffffffff;
  iStack_7c = 0;
  uStack_78 = 0;
  local_110 = param_3 & 0xffffffff;
  local_108 = param_1;
  uStack_88 = lVar9;
  if (*(int *)(lVar12 + 0x48) == 0) {
    iVar14 = 0;
  }
  else {
    FUN_1449c0562(&local_90);
    iVar14 = *(int *)(lVar12 + 0x48);
  }
  uStack_a0 = CONCAT44(uStack_74,uStack_78);
  local_a8 = local_80;
  iStack_a4 = iStack_7c;
  local_b8 = (undefined4)local_90;
  uStack_b4 = local_90._4_4_;
  uStack_b0 = (undefined4)uStack_88;
  uStack_ac = uStack_88._4_4_;
  local_c0 = plVar10;
  if ((iStack_7c != iVar14) || (uStack_88 != lVar9)) {
    do {
      lVar12 = (longlong)iStack_a4 * 0x110 + *local_c0;
      cVar7 = FUN_1470452ac(lVar12);
      if (cVar7 != '\0') {
        local_c4 = 0x3f800000;
        FUN_147045234(lVar12,&local_c4);
        local_90 = CONCAT44(local_90._4_4_,local_c4);
        pcVar5 = *(code **)(lVar4 + 0x90);
        plVar11 = *(longlong **)(lVar4 + 0xa0);
        if (*(longlong **)(lVar4 + 0xa0) == (longlong *)0x0) {
          plVar11 = (longlong *)(lVar4 + 0xb0);
        }
        uVar8 = (**(code **)(*plVar11 + 8))();
        (*pcVar5)(uVar8,&local_94,&local_90);
      }
      local_a8 = local_a8 & ~uStack_b4;
      FUN_1449c0562(&local_b8);
    } while (local_c0 != plVar10 || (CONCAT44(uStack_ac,uStack_b0) != lVar9 || iStack_a4 != iVar14))
    ;
  }
  local_90 = CONCAT44(local_90._4_4_,param_2);
  if (*(char *)(lVar4 + 0x84) != '\0') {
    pcVar5 = *(code **)(lVar4 + 0x110);
    plVar10 = (longlong *)(lVar4 + 0x130);
    if (*(longlong **)(lVar4 + 0x120) != (longlong *)0x0) {
      plVar10 = *(longlong **)(lVar4 + 0x120);
    }
    uVar8 = (**(code **)(*plVar10 + 8))();
    (*pcVar5)(uVar8,&local_90);
    param_2 = (undefined4)local_90;
  }
  pfVar1 = (float *)(lVar4 + 4);
  local_c0 = (longlong *)CONCAT44(local_c0._4_4_,param_2);
  pcVar5 = *(code **)(lVar4 + 0x90);
  plVar10 = (longlong *)(lVar4 + 0xb0);
  if (*(longlong **)(lVar4 + 0xa0) != (longlong *)0x0) {
    plVar10 = *(longlong **)(lVar4 + 0xa0);
  }
  uVar8 = (**(code **)(*plVar10 + 8))();
  (*pcVar5)(uVar8,&local_94,&local_c0);
  plVar10 = local_108;
  uVar6 = local_110;
  *(undefined4 *)(lVar4 + 4) = local_94;
  lVar9 = *local_108;
  if ((*(char *)(lVar4 + 0x84) == '\x01') && (*(char *)(lVar9 + 9) == '\0')) {
    pcVar5 = *(code **)(lVar4 + 0xd0);
    plVar11 = (longlong *)(lVar4 + 0xf0);
    if (*(longlong **)(lVar4 + 0xe0) != (longlong *)0x0) {
      plVar11 = *(longlong **)(lVar4 + 0xe0);
    }
    uVar8 = (**(code **)(*plVar11 + 8))();
    (*pcVar5)(uVar8);
    lVar9 = *plVar10;
  }
  plVar10 = (longlong *)(lVar4 + 0x10);
  uVar13 = (uint)uVar6;
  if ((*(char *)(lVar9 + 8) == '\x01') && (*(uint *)(lVar4 + 0x18) != uVar13)) {
    iVar14 = *(int *)(lVar4 + 0x1c);
    iVar15 = 0;
    if (iVar14 < 0) {
      *(undefined4 *)(lVar4 + 0x18) = 0;
      FUN_1470345fa(plVar10);
      iVar15 = *(int *)(lVar4 + 0x18);
      iVar14 = *(int *)(lVar4 + 0x1c);
    }
    *(uint *)(lVar4 + 0x18) = iVar15 + uVar13;
    if ((uint)(iVar14 - iVar15) < uVar13) {
      FUN_145ca0cd4(plVar10);
    }
    memset((void *)((longlong)iVar15 * 4 + *plVar10),0,(longlong)(int)uVar13 << 2);
  }
  uVar13 = *(uint *)(lVar4 + 0x18);
  if (uVar13 != 0) {
    fVar3 = *pfVar1;
    fVar16 = ABS(fVar2 - fVar3);
    if ((uVar13 & 3) == 0) {
      if (fVar16 <= 1e-08) {
        local_d8 = *plVar10;
        local_d0 = uVar13;
        FUN_142af4197();
      }
      else {
        local_e8 = *plVar10;
        local_e0 = uVar13;
        FUN_142af4197(&local_e8,0x3f800000);
        local_f8 = *(undefined8 *)(lVar4 + 0x10);
        local_f0 = *(undefined4 *)(lVar4 + 0x18);
        FUN_142af1d12(&local_f8,fVar2,*(undefined4 *)(lVar4 + 4));
      }
    }
    else if (fVar16 <= 1e-08) {
      FUN_14702e564(plVar10,pfVar1,uVar6 & 0xffffffff);
    }
    else if (0 < (int)uVar13) {
      lVar9 = 0;
      fVar16 = fVar2;
      do {
        *(float *)(*(longlong *)(lVar4 + 0x10) + lVar9 * 4) = fVar16;
        fVar16 = fVar16 + (fVar3 - fVar2) / (float)(int)uVar13;
        lVar9 = lVar9 + 1;
      } while (lVar9 < *(int *)(lVar4 + 0x18));
    }
  }
  fVar3 = *pfVar1;
  if (local_100 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(local_100);
  }
  if ((local_70 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 1e-08 < ABS(fVar2 - fVar3);
}



// FUNCTION 147d35818 FUN_147d35818 body=424 status=ok
// SIG undefined FUN_147d35818(void)

void FUN_147d35818(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  undefined8 uStack_a0;
  longlong *local_90;
  undefined8 local_88;
  longlong *local_80;
  uint local_78;
  int iStack_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  longlong *local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_a8 = 0;
  uStack_a0 = 0;
  plVar1 = param_2 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  local_50 = 0;
  iVar5 = 0;
  local_60 = plVar1;
  if ((int)param_2[5] != 0) {
    FUN_1449c0562(&local_68);
    iVar5 = (int)param_2[5];
  }
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_70 = local_50;
  local_6c = local_4c;
  local_88 = local_68;
  local_80 = local_60;
  local_90 = param_2;
  if ((iStack_54 != iVar5) || (local_60 != plVar1)) {
    do {
      plVar2 = *(longlong **)(*local_90 + (longlong)iStack_74 * 0x10);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x2a8))(plVar2,&local_68);
        uVar3 = uStack_a0;
        lVar6 = (longlong)(int)uStack_a0;
        uVar4 = (int)uStack_a0 + 1;
        uStack_a0 = CONCAT44(uStack_a0._4_4_,uVar4);
        if (uStack_a0._4_4_ < uVar4) {
          FUN_147d48694(&local_a8,uVar3 & 0xffffffff);
        }
        *(undefined8 *)(local_a8 + lVar6 * 8) = local_68;
      }
      local_78 = local_78 & ~local_88._4_4_;
      FUN_1449c0562(&local_88);
    } while (local_90 != param_2 || (local_80 != plVar1 || iStack_74 != iVar5));
  }
  FUN_147d359c2(param_1,&local_a8);
  FUN_147d4865f(local_a8,uStack_a0 & 0xffffffff);
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147d359c2 FUN_147d359c2 body=388 status=ok
// SIG undefined FUN_147d359c2(void)

void FUN_147d359c2(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  longlong lStack_c0;
  longlong local_b8;
  longlong lStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  code *local_98 [2];
  undefined8 *local_88;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar5 = FUN_145ef8526();
  if (lVar5 != 0) {
    lVar5 = FUN_147973140(lVar5,*(undefined4 *)*param_1);
    if (((lVar5 != 0) && ((*(byte *)(lVar5 + 0x598) & 0x20) != 0)) &&
       (lVar6 = *(longlong *)(lVar5 + 0x110), lVar6 != 0)) {
      local_c8 = *param_1;
      lStack_c0 = param_1[1];
      if (lStack_c0 != 0) {
        LOCK();
        *(int *)(lStack_c0 + 0xc) = *(int *)(lStack_c0 + 0xc) + 1;
        UNLOCK();
        lVar6 = *(longlong *)(lVar5 + 0x110);
      }
      lStack_b0 = *(longlong *)(lVar5 + 0x118);
      if (lStack_b0 == 0) {
        lVar5 = 0;
      }
      else {
        LOCK();
        *(int *)(lStack_b0 + 0xc) = *(int *)(lStack_b0 + 0xc) + 1;
        UNLOCK();
        lVar5 = lStack_b0;
      }
      uVar1 = *param_2;
      uVar2 = param_2[1];
      *param_2 = 0;
      param_2[1] = 0;
      local_98[0] = (code *)0x0;
      local_b8 = lVar6;
      local_88 = (undefined8 *)FUN_14001cc68(0x38,8);
      lVar4 = lStack_c0;
      uVar3 = local_c8;
      *local_88 = &PTR_LAB_14aaafee0;
      local_c8 = 0;
      lStack_c0 = 0;
      local_b8 = 0;
      lStack_b0 = 0;
      local_a8 = 0;
      local_a0 = 0;
      local_88[1] = uVar3;
      local_88[2] = lVar4;
      local_88[3] = lVar6;
      local_88[4] = lVar5;
      local_88[5] = uVar1;
      local_88[6] = uVar2;
      if (local_88 + 1 != (undefined8 *)0x0) {
        local_98[0] = FUN_143700e62;
      }
      FUN_1415826cc(local_98);
      FUN_1436fb29e(&local_c8);
    }
  }
  if ((local_50 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d35b48 FUN_147d35b48 body=61 status=ok
// SIG undefined FUN_147d35b48(void)

void FUN_147d35b48(longlong param_1,undefined8 param_2)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x150));
  FUN_147d35b86(param_1 + 0x20,param_2);
                    /* WARNING: Could not recover jumptable at 0x000147d35b7e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x150));
  return;
}



// FUNCTION 147d35b86 FUN_147d35b86 body=93 status=ok
// SIG undefined FUN_147d35b86(void)

longlong FUN_147d35b86(longlong param_1,longlong param_2)

{
  if (param_1 != param_2) {
    FUN_147d4871a(param_1);
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



// FUNCTION 147d35be4 FUN_147d35be4 body=122 status=ok
// SIG undefined FUN_147d35be4(void)

longlong FUN_147d35be4(longlong param_1,longlong param_2)

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
    FUN_147d4889a(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 147d35c62 FUN_147d35c62 body=137 status=ok
// SIG undefined FUN_147d35c62(void)

void FUN_147d35c62(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 auStack_1c8 [40];
  undefined **local_1a0;
  longlong local_198;
  undefined ***local_190;
  undefined8 **local_188;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  lVar1 = *(longlong *)(*param_2 + 8);
  local_188 = &local_190;
  local_1a0 = &PTR_FUN_149e37810;
  local_190 = &local_1a0;
  local_198 = lVar1;
  switchD_143c3d4dc::caseD_20();
  if (0x1e4 < *(int *)(lVar1 + 0x40)) {
    FUN_140562eea(&local_1a0,lVar1,0,&DAT_14c896044);
  }
  if ((local_10 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d35cec FUN_147d35cec body=133 status=ok
// SIG undefined FUN_147d35cec(void)

void FUN_147d35cec(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_1c8 [40];
  undefined **local_1a0;
  longlong local_198;
  undefined ***local_190;
  undefined8 **local_188;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  local_188 = &local_190;
  local_1a0 = &PTR_FUN_149e37810;
  local_190 = &local_1a0;
  local_198 = param_2;
  switchD_143c3d4dc::caseD_20();
  if (0x1e4 < *(int *)(param_2 + 0x40)) {
    FUN_140562eea(&local_1a0,param_2,0,&DAT_14c896044);
  }
  if ((local_10 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d35d7a FUN_147d35d7a body=456 status=ok
// SIG undefined FUN_147d35d7a(void)

void FUN_147d35d7a(longlong param_1,char param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  char cVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined1 local_a0;
  undefined1 local_98 [8];
  longlong *local_90;
  undefined1 *local_88 [2];
  undefined8 local_78;
  undefined **local_68;
  undefined *local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (((DAT_14cb08998 != 0) || (DAT_14c761b54 == 0)) ||
     (cVar6 = (*(code *)PTR_FUN_14c75b120)(), cVar6 == '\0')) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_c8);
  }
  lVar8 = FUN_140083894();
  iVar3 = *(int *)(param_1 + 0x30);
  if ((longlong)iVar3 != 0) {
    plVar4 = *(longlong **)(lVar8 + 0x38);
    lVar8 = *(longlong *)(param_1 + 0x28);
    lVar10 = 0;
    do {
      plVar5 = *(longlong **)(lVar8 + lVar10);
      if (plVar5 != (longlong *)0x0) {
        FUN_1400337aa(plVar5);
        if (param_2 != '\0') {
          (**(code **)(*plVar5 + 800))(plVar5,1);
        }
        lVar9 = FUN_145b5ac1e();
        if (((*(int *)(lVar9 + 0x38) <= *(int *)(plVar5[2] + 0x38)) &&
            (*(longlong *)(*(longlong *)(plVar5[2] + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8)
             == lVar9 + 0x30)) && (lVar9 = plVar5[0xe], lVar9 != 0)) {
          cVar6 = FUN_147d35f64(lVar9,0);
          if ((cVar6 != '\0') && (uVar7 = FUN_1436fb382(lVar9), 1 < uVar7)) {
            local_78 = 0;
            local_68 = &PTR_LAB_14a7fed80;
            local_60 = &DAT_1437010ec;
            local_88[0] = &LAB_1479879bc;
            FUN_1436fb532(lVar9,local_98);
            local_a0 = 0;
            local_a8 = 0xff;
            (**(code **)(*plVar4 + 0xa8))(plVar4,local_98,1,local_88);
            plVar5 = local_90;
            if (local_90 != (longlong *)0x0) {
              LOCK();
              plVar1 = local_90 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                (**(code **)*local_90)(local_90);
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
        }
      }
      lVar10 = lVar10 + 8;
    } while ((longlong)iVar3 * 8 != lVar10);
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147d35f64 FUN_147d35f64 body=108 status=ok
// SIG undefined FUN_147d35f64(void)

undefined8 FUN_147d35f64(longlong param_1,undefined8 param_2)

{
  byte *pbVar1;
  ulonglong uVar2;
  
  if (((*(byte *)(param_1 + 0x34c) & 1) == 0) && (*(char *)(param_1 + 0x34e) != '\x04')) {
    FUN_1461a8840(param_2,0);
    if (((*(byte *)(param_1 + 0x34c) & 1) == 0) && (*(char *)(param_1 + 0x34e) != '\x04')) {
      pbVar1 = (byte *)(*(longlong *)(param_1 + 0x3e0) + 0xe4);
      *pbVar1 = *pbVar1 | 4;
      goto LAB_147d35f8c;
    }
  }
  pbVar1 = (byte *)(*(longlong *)(param_1 + 0x3e0) + 0xe4);
  *pbVar1 = *pbVar1 & 0xfb;
LAB_147d35f8c:
  uVar2 = CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x3e0) >> 8),
                   *(undefined1 *)(*(longlong *)(param_1 + 0x3e0) + 0xe4)) & 0xffffffffffffff04;
  return CONCAT71((int7)(uVar2 >> 8),(byte)uVar2 >> 2);
}



// FUNCTION 147d35fe0 FUN_147d35fe0 body=177 status=ok
// SIG undefined FUN_147d35fe0(void)

void FUN_147d35fe0(longlong param_1,char param_2,undefined4 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  
  if ((DAT_14cb08998 == 0) && (iVar1 = *(int *)(param_1 + 0x30), (longlong)iVar1 != 0)) {
    lVar2 = *(longlong *)(param_1 + 0x28);
    lVar5 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar5);
      if (plVar3 != (longlong *)0x0) {
        FUN_1400337aa(plVar3);
        if (param_2 != '\0') {
          (**(code **)(*plVar3 + 0x330))(plVar3,1,param_3);
        }
        lVar4 = FUN_145b5ac1e();
        if (((*(int *)(lVar4 + 0x38) <= *(int *)(plVar3[2] + 0x38)) &&
            (*(longlong *)(*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
             == lVar4 + 0x30)) && (plVar3[0xe] != 0)) {
          FUN_1436fb5b4(plVar3[0xe],param_3);
        }
      }
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar1 * 8 != lVar5);
  }
  if ((char)param_3 == '\x01') {
    *(undefined1 *)(param_1 + 0x40) = 1;
  }
  return;
}



// FUNCTION 147d36092 FUN_147d36092 body=272 status=ok
// SIG undefined FUN_147d36092(void)

void FUN_147d36092(longlong param_1,char param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((*(char *)(param_1 + 0x40) == '\x01') &&
     (iVar1 = *(int *)(param_1 + 0x30), (longlong)iVar1 != 0)) {
    lVar2 = *(longlong *)(param_1 + 0x28);
    lVar5 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar5);
      if (plVar3 != (longlong *)0x0) {
        FUN_1400337aa(plVar3);
        if (param_2 != '\0') {
          (**(code **)(*plVar3 + 0x338))(plVar3,1);
        }
        lVar4 = FUN_145b5ac1e();
        if (((*(int *)(lVar4 + 0x38) <= *(int *)(plVar3[2] + 0x38)) &&
            (*(longlong *)(*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
             == lVar4 + 0x30)) && (plVar3[0xe] != 0)) {
          local_78 = 0;
          uStack_70 = 0;
          local_88 = 0;
          uStack_80 = 0;
          local_68 = 0xffffffff00000000;
          FUN_1434a218e(*(longlong *)(plVar3[0xe] + 0x3e0) + 0x28,&local_88);
          FUN_141289612(&local_88);
        }
      }
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar1 * 8 != lVar5);
  }
  *(undefined1 *)(param_1 + 0x40) = 0;
  if ((local_60 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147d361a4 FUN_147d361a4 body=104 status=ok
// SIG undefined FUN_147d361a4(void)

void FUN_147d361a4(longlong param_1)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  uStack_20 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_18 = 0xffffffff00000000;
  FUN_1434a218e(*(longlong *)(param_1 + 0x3e0) + 0x28,&local_38);
  FUN_141289612(&local_38);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d3620e FUN_147d3620e body=138 status=ok
// SIG undefined FUN_147d3620e(void)

void FUN_147d3620e(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  
  iVar1 = *(int *)(param_1 + 0x30);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x28);
    lVar5 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar5);
      if (plVar3 != (longlong *)0x0) {
        FUN_1400337aa(plVar3);
        (**(code **)(*plVar3 + 0x340))(plVar3);
        lVar4 = FUN_145b5ac1e();
        if ((((*(int *)(lVar4 + 0x38) <= *(int *)(plVar3[2] + 0x38)) &&
             (*(longlong *)(*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
              == lVar4 + 0x30)) && (plVar3[0xe] != 0)) && ((*(byte *)(plVar3 + 0xf) & 1) == 0)) {
          (**(code **)(*plVar3 + 0x358))(plVar3);
        }
      }
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar1 * 8 != lVar5);
  }
  return;
}



// FUNCTION 147d36298 FUN_147d36298 body=192 status=ok
// SIG undefined FUN_147d36298(void)

void FUN_147d36298(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  
  iVar1 = *(int *)(param_1 + 0x30);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x28);
    lVar5 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar5);
      if (plVar3 != (longlong *)0x0) {
        if ((char)param_3 != '\0') {
          (**(code **)(*plVar3 + 0x348))(plVar3,param_2,1);
        }
        lVar4 = FUN_145b5ac1e();
        if ((*(int *)(plVar3[2] + 0x38) < *(int *)(lVar4 + 0x38)) ||
           (*(longlong *)(*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
            lVar4 + 0x30)) {
          lVar4 = FUN_145b5a78c();
          if ((*(int *)(lVar4 + 0x38) <= *(int *)(plVar3[2] + 0x38)) &&
             (*(longlong *)(*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
              == lVar4 + 0x30)) {
            FUN_147d36358(plVar3,param_2,param_3);
          }
        }
        else {
          (**(code **)(*plVar3 + 0x350))(plVar3,param_2);
        }
      }
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar1 * 8 != lVar5);
  }
  return;
}



// FUNCTION 147d36358 FUN_147d36358 body=138 status=ok
// SIG undefined FUN_147d36358(void)

void FUN_147d36358(longlong *param_1,undefined1 param_2,undefined1 param_3)

{
  undefined ***pppuVar1;
  undefined1 auStack_78 [32];
  code *local_58 [2];
  undefined ***local_48;
  undefined **local_38;
  undefined2 local_30;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = (undefined ***)0x0;
  local_38 = &PTR_LAB_14aaaff60;
  local_30 = CONCAT11(param_3,param_2);
  local_58[0] = FUN_143701308;
  (**(code **)(*param_1 + 0x350))(param_1,local_58);
  if (local_58[0] != (code *)0x0) {
    pppuVar1 = local_48;
    if (local_48 == (undefined ***)0x0) {
      pppuVar1 = &local_38;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d363e4 FUN_147d363e4 body=282 status=ok
// SIG undefined FUN_147d363e4(void)

void FUN_147d363e4(longlong *param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  
  if (0 < (int)param_1[6]) {
    uVar2 = ((uint)(param_3 >> 0x14) & 0xffff ^ (uint)(param_3 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    uVar2 = uVar2 >> 0x10 ^ uVar2;
    lVar5 = 0;
    do {
      iVar3 = (**(code **)(*param_1 + 0x2f0))(param_1);
      if (iVar3 <= lVar5) {
        return;
      }
      plVar1 = *(longlong **)(param_1[5] + lVar5 * 8);
      if (plVar1 != (longlong *)0x0) {
        uVar4 = ((uint)((ulonglong)plVar1 >> 0x14) & 0xffff ^ (uint)((ulonglong)plVar1 >> 4)) *
                -0x7a143595;
        uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
        uVar4 = uVar4 >> 0x10 ^ uVar4;
        (**(code **)(*plVar1 + 0x2e0))
                  (plVar1,param_2,
                   ((uVar4 >> 2) + uVar4 * 0x40 + (int)lVar5 + 0x9e3779b9 ^ uVar4) +
                   uVar2 * 0x40 + (uVar2 >> 2) + -0x61c88647 ^ uVar2,param_4,param_5,param_6);
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 < (int)param_1[6]);
  }
  return;
}



// FUNCTION 147d364fe FUN_147d364fe body=103 status=ok
// SIG undefined FUN_147d364fe(void)

void FUN_147d364fe(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
    FUN_147d46f0c(param_2,iVar2);
  }
  *(longlong *)(*param_2 + (longlong)iVar2 * 8) = param_1;
  iVar2 = *(int *)(param_1 + 0x30);
  if (0 < iVar2) {
    lVar3 = 0;
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x28) + lVar3 * 8);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x2e8))(plVar1,param_2);
        iVar2 = *(int *)(param_1 + 0x30);
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < iVar2);
  }
  return;
}



// FUNCTION 147d36566 FUN_147d36566 body=60 status=ok
// SIG undefined FUN_147d36566(void)

void FUN_147d36566(longlong *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = (**(code **)(*param_1 + 0x2f8))();
  iVar3 = 1;
  if (1 < iVar1) {
    iVar3 = iVar1;
  }
  uVar2 = iVar3 + 1;
  do {
    (**(code **)(*param_1 + 0x310))(param_1,(int)param_1[6]);
    uVar2 = uVar2 - 1;
  } while (1 < uVar2);
  return;
}



// FUNCTION 147d365a2 FUN_147d365a2 body=113 status=ok
// SIG undefined FUN_147d365a2(void)

void FUN_147d365a2(longlong *param_1,int param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  
  iVar3 = (**(code **)(*param_1 + 0x2f0))();
  iVar2 = (int)param_1[6];
  if (iVar2 < iVar3) {
    plVar1 = param_1 + 5;
    *(uint *)(param_1 + 6) = iVar2 + 1U;
    if (*(uint *)((longlong)param_1 + 0x34) < iVar2 + 1U) {
      FUN_147d48978(plVar1,iVar2);
    }
    lVar4 = (longlong)param_2;
    memmove((void *)(*plVar1 + lVar4 * 8 + 8),(void *)(*plVar1 + lVar4 * 8),
            (ulonglong)(uint)(iVar2 - param_2) << 3);
    *(undefined8 *)(*plVar1 + lVar4 * 8) = 0;
  }
  return;
}



// FUNCTION 147d36614 FUN_147d36614 body=102 status=ok
// SIG undefined FUN_147d36614(void)

void FUN_147d36614(longlong *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (**(code **)(*param_1 + 0x2f8))();
  iVar2 = (int)param_1[6];
  if (iVar2 <= iVar1) {
    return;
  }
  if (~param_2 + iVar2 != 0) {
    memmove((void *)(param_1[5] + (longlong)(int)param_2 * 8),
            (void *)(param_1[5] + (longlong)(int)param_2 * 8 + 8),
            (longlong)(int)(~param_2 + iVar2) << 3);
    iVar2 = (int)param_1[6];
  }
  *(int *)(param_1 + 6) = iVar2 + -1;
  FUN_147d489fe(param_1 + 5);
  return;
}



// FUNCTION 147d3667a FUN_147d3667a body=105 status=ok
// SIG undefined FUN_147d3667a(void)

float FUN_147d3667a(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  float fVar4;
  longlong lVar5;
  float fVar6;
  
  iVar1 = *(int *)(param_1 + 0x30);
  if ((longlong)iVar1 == 0) {
    fVar4 = 0.0;
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0x28);
    fVar4 = 0.0;
    lVar5 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar5);
      fVar6 = fVar4;
      if (plVar3 != (longlong *)0x0) {
        FUN_1400337aa(plVar3);
        fVar6 = (float)(**(code **)(*plVar3 + 0x2b8))(plVar3);
        if (fVar6 <= fVar4) {
          fVar6 = fVar4;
        }
      }
      fVar4 = fVar6;
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar1 * 8 != lVar5);
  }
  return fVar4;
}



// FUNCTION 147d366e4 FUN_147d366e4 body=105 status=ok
// SIG undefined FUN_147d366e4(void)

float FUN_147d366e4(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  float fVar4;
  longlong lVar5;
  float fVar6;
  
  iVar1 = *(int *)(param_1 + 0x30);
  if ((longlong)iVar1 == 0) {
    fVar4 = 0.0;
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0x28);
    fVar4 = 0.0;
    lVar5 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar5);
      fVar6 = fVar4;
      if (plVar3 != (longlong *)0x0) {
        FUN_1400337aa(plVar3);
        fVar6 = (float)(**(code **)(*plVar3 + 0x2a8))(plVar3);
        if (fVar6 <= fVar4) {
          fVar6 = fVar4;
        }
      }
      fVar4 = fVar6;
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar1 * 8 != lVar5);
  }
  return fVar4;
}



// FUNCTION 147d3674e FUN_147d3674e body=87 status=ok
// SIG undefined FUN_147d3674e(void)

undefined8 FUN_147d3674e(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  
  iVar1 = *(int *)(param_1 + 0x30);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x28);
    lVar5 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar5);
      if (plVar3 != (longlong *)0x0) {
        FUN_1400337aa(plVar3);
        cVar4 = (**(code **)(*plVar3 + 0x2c0))(plVar3);
        if (cVar4 != '\0') {
          return 1;
        }
      }
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar1 * 8 != lVar5);
  }
  return 0;
}



// FUNCTION 147d367a6 FUN_147d367a6 body=87 status=ok
// SIG undefined FUN_147d367a6(void)

undefined8 FUN_147d367a6(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  
  iVar1 = *(int *)(param_1 + 0x30);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x28);
    lVar5 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar5);
      if (plVar3 != (longlong *)0x0) {
        FUN_1400337aa(plVar3);
        cVar4 = (**(code **)(*plVar3 + 0x2c8))(plVar3);
        if (cVar4 != '\0') {
          return 1;
        }
      }
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar1 * 8 != lVar5);
  }
  return 0;
}



// FUNCTION 147d367fe FUN_147d367fe body=87 status=ok
// SIG undefined FUN_147d367fe(void)

undefined8 FUN_147d367fe(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  
  iVar1 = *(int *)(param_1 + 0x30);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x28);
    lVar5 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar5);
      if (plVar3 != (longlong *)0x0) {
        FUN_1400337aa(plVar3);
        cVar4 = (**(code **)(*plVar3 + 0x2d0))(plVar3);
        if (cVar4 != '\0') {
          return 1;
        }
      }
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar1 * 8 != lVar5);
  }
  return 0;
}



// FUNCTION 147d36856 FUN_147d36856 body=87 status=ok
// SIG undefined FUN_147d36856(void)

undefined8 FUN_147d36856(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  
  iVar1 = *(int *)(param_1 + 0x30);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x28);
    lVar5 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar5);
      if (plVar3 != (longlong *)0x0) {
        FUN_1400337aa(plVar3);
        cVar4 = (**(code **)(*plVar3 + 0x2d8))(plVar3);
        if (cVar4 != '\0') {
          return 1;
        }
      }
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar1 * 8 != lVar5);
  }
  return 0;
}



// FUNCTION 147d368ae FUN_147d368ae body=226 status=ok
// SIG undefined FUN_147d368ae(void)

int FUN_147d368ae(longlong param_1,ulonglong param_2,undefined8 param_3)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  
  iVar3 = *(int *)(param_1 + 0x30);
  if (iVar3 < 1) {
    iVar5 = 0;
  }
  else {
    uVar4 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
    uVar4 = uVar4 >> 0x10 ^ uVar4;
    lVar6 = 0;
    iVar5 = 0;
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x28) + lVar6 * 8);
      if (plVar1 != (longlong *)0x0) {
        uVar2 = ((uint)((ulonglong)plVar1 >> 0x14) & 0xffff ^ (uint)((ulonglong)plVar1 >> 4)) *
                -0x7a143595;
        uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
        uVar2 = uVar2 >> 0x10 ^ uVar2;
        iVar3 = (**(code **)(*plVar1 + 0x300))
                          (plVar1,((uVar2 >> 2) + uVar2 * 0x40 + (int)lVar6 + 0x9e3779b9 ^ uVar2) +
                                  uVar4 * 0x40 + (uVar4 >> 2) + -0x61c88647 ^ uVar4,param_3);
        iVar5 = iVar5 + iVar3;
        iVar3 = *(int *)(param_1 + 0x30);
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < iVar3);
  }
  return iVar5;
}



// FUNCTION 147d369a0 FUN_147d369a0 body=149 status=ok
// SIG undefined FUN_147d369a0(void)

float FUN_147d369a0(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  
  fVar5 = (float)FUN_1458b9a10();
  if ((*(byte *)(param_1 + 0x420) & 1) == 0) {
    if (*(longlong *)(param_1 + 0x48) == 0) goto LAB_147d369e2;
    lVar3 = *(longlong *)(param_1 + 0x48) + 0x28;
  }
  else {
    lVar3 = param_1 + 0x50;
  }
  if (lVar3 != 0) {
    fVar5 = (float)FUN_147959fa6();
  }
LAB_147d369e2:
  iVar1 = *(int *)(param_1 + 0x30);
  if ((longlong)iVar1 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x28);
    lVar4 = 0;
    do {
      plVar2 = *(longlong **)(lVar3 + lVar4);
      fVar6 = fVar5;
      if (plVar2 != (longlong *)0x0) {
        FUN_1400337aa(plVar2);
        fVar6 = (float)(**(code **)(*plVar2 + 0x2a8))(plVar2);
        if (fVar6 <= fVar5) {
          fVar6 = fVar5;
        }
      }
      fVar5 = fVar6;
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  return fVar5;
}



// FUNCTION 147d36a36 FUN_147d36a36 body=244 status=ok
// SIG undefined FUN_147d36a36(void)

void FUN_147d36a36(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined1 auStack_2b8 [32];
  undefined1 *local_298;
  undefined8 local_290;
  undefined1 local_288 [32];
  undefined1 local_268 [540];
  byte local_4c;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_2b8;
  FUN_147d36b2c(local_288,param_5);
  if ((*(byte *)(param_4 + 0x198) & 2) != 0) {
    if ((*(byte *)(param_1 + 0x420) & 1) == 0) {
      if (*(longlong *)(param_1 + 0x48) == 0) goto LAB_147d36a8c;
      lVar2 = *(longlong *)(param_1 + 0x48) + 0x28;
    }
    else {
      lVar2 = param_1 + 0x50;
    }
    if (lVar2 != 0) {
      uVar1 = FUN_147962b80(param_2,local_268);
      FUN_1478b6a8e(param_4,local_288,uVar1,lVar2);
      goto LAB_147d36a94;
    }
  }
LAB_147d36a8c:
  local_4c = local_4c & 0xfe;
LAB_147d36a94:
  local_290 = param_6;
  local_298 = local_288;
  FUN_147d363e4(param_1,param_2,param_3,param_4);
  FUN_1478b5da6(local_288);
  if ((local_40 ^ (ulonglong)auStack_2b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d36b2c FUN_147d36b2c body=498 status=ok
// SIG undefined FUN_147d36b2c(void)

longlong FUN_147d36b2c(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
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
  undefined4 uVar13;
  bool bVar14;
  longlong lVar15;
  bool bVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  
  FUN_147d44356();
  memcpy((void *)(param_1 + 0x10),(void *)(param_2 + 0x10),0xd8);
  *(undefined8 *)(param_1 + 0xe8) = 0;
  iVar1 = *(int *)(param_2 + 0xf0);
  uVar2 = *(undefined8 *)(param_2 + 0xe8);
  *(int *)(param_1 + 0xf0) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0xf4) = 0;
  }
  else {
    FUN_1477ec236((undefined8 *)(param_1 + 0xe8),iVar1,0);
    FUN_1477ec2ab(*(undefined8 *)(param_1 + 0xe8),uVar2,iVar1);
  }
  *(undefined8 *)(param_1 + 0xf8) = 0;
  iVar1 = *(int *)(param_2 + 0x100);
  uVar2 = *(undefined8 *)(param_2 + 0xf8);
  *(int *)(param_1 + 0x100) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x104) = 0;
  }
  else {
    FUN_1477e8036((undefined8 *)(param_1 + 0xf8),iVar1,0);
    FUN_1477e80a8(*(undefined8 *)(param_1 + 0xf8),uVar2,iVar1);
  }
  bVar16 = false;
  lVar15 = 0;
  do {
    lVar15 = lVar15 * 0x10;
    puVar17 = (undefined8 *)(lVar15 + param_1 + 0x108);
    *(undefined8 *)(param_1 + 0x108 + lVar15) = 0;
    iVar1 = *(int *)(param_2 + 0x110 + lVar15);
    uVar2 = *(undefined8 *)(param_2 + 0x108 + lVar15);
    *(int *)(param_1 + 0x110 + lVar15) = iVar1;
    if (iVar1 == 0) {
      *(undefined4 *)((longlong)puVar17 + 0xc) = 0;
    }
    else {
      FUN_1477ec2f4(puVar17,iVar1,0);
      FUN_1477ec369(*puVar17,uVar2);
    }
    lVar15 = 1;
    bVar14 = !bVar16;
    bVar16 = true;
  } while (bVar14);
  uVar3 = *(undefined4 *)(param_2 + 0x128);
  uVar4 = *(undefined4 *)(param_2 + 300);
  uVar5 = *(undefined4 *)(param_2 + 0x130);
  uVar6 = *(undefined4 *)(param_2 + 0x134);
  uVar7 = *(undefined4 *)(param_2 + 0x138);
  uVar8 = *(undefined4 *)(param_2 + 0x13c);
  uVar9 = *(undefined4 *)(param_2 + 0x140);
  uVar10 = *(undefined4 *)(param_2 + 0x144);
  uVar11 = *(undefined4 *)(param_2 + 0x148);
  uVar12 = *(undefined4 *)(param_2 + 0x14c);
  uVar13 = *(undefined4 *)(param_2 + 0x150);
  *(undefined4 *)(param_1 + 0x144) = *(undefined4 *)(param_2 + 0x144);
  *(undefined4 *)(param_1 + 0x148) = uVar11;
  *(undefined4 *)(param_1 + 0x14c) = uVar12;
  *(undefined4 *)(param_1 + 0x150) = uVar13;
  *(undefined4 *)(param_1 + 0x138) = uVar7;
  *(undefined4 *)(param_1 + 0x13c) = uVar8;
  *(undefined4 *)(param_1 + 0x140) = uVar9;
  *(undefined4 *)(param_1 + 0x144) = uVar10;
  *(undefined4 *)(param_1 + 0x128) = uVar3;
  *(undefined4 *)(param_1 + 300) = uVar4;
  *(undefined4 *)(param_1 + 0x130) = uVar5;
  *(undefined4 *)(param_1 + 0x134) = uVar6;
  FUN_140501b78(param_1 + 0x158,param_2 + 0x158);
  lVar15 = *(longlong *)(param_2 + 0x1d8);
  *(longlong *)(param_1 + 0x1d8) = lVar15;
  if ((lVar15 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  puVar17 = (undefined8 *)(param_2 + 0x1e0);
  puVar18 = (undefined8 *)(param_1 + 0x1e0);
  for (lVar15 = 0xb; lVar15 != 0; lVar15 = lVar15 + -1) {
    *puVar18 = *puVar17;
    puVar17 = puVar17 + 1;
    puVar18 = puVar18 + 1;
  }
  *(undefined1 *)(param_1 + 0x23c) = *(undefined1 *)(param_2 + 0x23c);
  *(undefined4 *)(param_1 + 0x238) = *(undefined4 *)(param_2 + 0x238);
  return param_1;
}



// FUNCTION 147d36d22 FUN_147d36d22 body=437 status=ok
// SIG undefined FUN_147d36d22(void)

void FUN_147d36d22(longlong param_1,undefined8 param_2,ulonglong param_3,longlong param_4,
                  undefined8 param_5,undefined8 param_6)

{
  longlong *plVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined5 local_d0;
  undefined3 uStack_cb;
  undefined4 uStack_c8;
  byte local_c4;
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
  undefined8 local_68;
  undefined1 uStack_60;
  undefined7 uStack_5f;
  undefined1 uStack_58;
  undefined8 uStack_57;
  undefined8 local_4c;
  undefined8 local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_c0 = 0;
  local_4c = 0;
  local_d0 = 0;
  uStack_cb = 0;
  uStack_c8 = 0;
  local_c4 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  uStack_5f = 0;
  uStack_58 = 0;
  uStack_57 = 0;
  local_40 = 0;
  uStack_38 = 0;
  cVar2 = (**(code **)(**(longlong **)(param_4 + 0x188) + 0x28))
                    (*(longlong **)(param_4 + 0x188),*(undefined8 *)(param_1 + 0x48),&local_d0);
  uVar3 = 2;
  if (cVar2 != '\0') {
    uVar3 = local_c4 ^ 1;
  }
  if (((int)uVar3 < *(int *)(param_1 + 0x30)) &&
     (plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x28) + (ulonglong)uVar3 * 8),
     plVar1 != (longlong *)0x0)) {
    uVar4 = ((uint)((ulonglong)plVar1 >> 0x14) & 0xffff ^ (uint)((ulonglong)plVar1 >> 4)) *
            -0x7a143595;
    uVar5 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
    uVar5 = uVar5 >> 0x10 ^ uVar5;
    uVar4 = ((uint)(param_3 >> 0x14) & 0xffff ^ (uint)(param_3 >> 4)) * -0x7a143595;
    uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
    uVar4 = uVar4 >> 0x10 ^ uVar4;
    local_e0 = param_6;
    local_e8 = param_5;
    (**(code **)(*plVar1 + 0x2e0))
              (plVar1,param_2,
               (uVar4 >> 2) + uVar4 * 0x40 + -0x61c88647 +
               ((uVar5 >> 2) + 0x9e3779b9 + uVar3 + uVar5 * 0x40 ^ uVar5) ^ uVar4,param_4);
  }
  FUN_147046490(&local_d0);
  if ((local_30 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d36edc FUN_147d36edc body=469 status=ok
// SIG undefined FUN_147d36edc(void)

undefined8 FUN_147d36edc(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  undefined1 auStack_88 [36];
  int local_64;
  longlong local_60;
  longlong *local_58;
  longlong *local_50;
  undefined1 local_44 [4];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar2 = *(longlong *)(param_2 + 0x60);
  local_60 = FUN_14795c140(param_2 + 0x50,param_1);
  if (*(int *)(lVar2 + 0x778) != *(int *)(lVar2 + 0x7a4)) {
    lVar3 = lVar2 + 0x7a8;
    if (*(longlong *)(lVar2 + 0x7b0) != 0) {
      lVar3 = *(longlong *)(lVar2 + 0x7b0);
    }
    iVar4 = *(int *)(lVar3 + (ulonglong)
                             (*(int *)(lVar2 + 0x7b8) - 1U &
                             (int)local_60 + (int)((ulonglong)local_60 >> 0x20) * 0x17) * 4);
    if (iVar4 != -1) {
      do {
        plVar8 = (longlong *)(*(longlong *)(lVar2 + 0x770) + (longlong)iVar4 * 0x18);
        if (*plVar8 == local_60) {
          if (plVar8 != (longlong *)0x0) {
            plVar8 = plVar8 + 1;
            goto LAB_147d36fa8;
          }
          break;
        }
        iVar4 = (int)plVar8[2];
      } while (iVar4 != -1);
    }
  }
  plVar1 = (longlong *)(lVar2 + 0x7c0);
  iVar4 = *(int *)(lVar2 + 0x7c8);
  *(int *)(lVar2 + 0x7c8) = iVar4 + 0x10;
  if ((uint)(*(int *)(lVar2 + 0x7cc) - iVar4) < 0x10) {
    FUN_1447403be(plVar1,iVar4);
  }
  lVar3 = *plVar1;
  *(undefined8 *)(lVar3 + iVar4) = 0;
  ((undefined8 *)(lVar3 + iVar4))[1] = 0;
  plVar8 = (longlong *)&local_64;
  local_58 = &local_60;
  local_64 = iVar4;
  local_50 = plVar8;
  FUN_1402eaea6((longlong *)(lVar2 + 0x770),local_44,&local_58,0);
  *(undefined4 *)(*plVar1 + (longlong)local_64) = 1;
LAB_147d36fa8:
  lVar2 = *(longlong *)(lVar2 + 0x7c0);
  lVar3 = (longlong)((int)*plVar8 + 4);
  iVar4 = *(int *)(lVar2 + lVar3);
  iVar7 = *(int *)(lVar2 + 4 + lVar3) + 1;
  *(int *)(lVar2 + 4 + lVar3) = iVar7;
  iVar6 = *(int *)(param_1 + 0x30);
  if ((iVar4 < iVar6) && (iVar7 == *(int *)(lVar2 + 8 + lVar3))) {
    lVar5 = (longlong)iVar4;
    do {
      lVar5 = lVar5 + 1;
      *(int *)(lVar2 + lVar3) = (int)lVar5;
      if (*(int *)(param_1 + 0x30) <= lVar5) break;
    } while (*(longlong *)(*(longlong *)(param_1 + 0x28) + lVar5 * 8) == 0);
    *(undefined4 *)(lVar2 + 4 + lVar3) = 0;
    *(byte *)(param_2 + 0xcc) = *(byte *)(param_2 + 0xcc) & 0x9f;
    iVar4 = *(int *)(lVar2 + lVar3);
    iVar6 = *(int *)(param_1 + 0x30);
  }
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT71((int7)((ulonglong)lVar2 >> 8),iVar4 < iVar6);
}



// FUNCTION 147d370b2 FUN_147d370b2 body=86 status=ok
// SIG undefined FUN_147d370b2(void)

float FUN_147d370b2(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  
  iVar2 = *(int *)(param_1 + 0x30);
  if (iVar2 < 1) {
    fVar5 = 0.0;
  }
  else {
    fVar5 = 0.0;
    lVar3 = 0;
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x28) + lVar3 * 8);
      if (plVar1 != (longlong *)0x0) {
        fVar4 = (float)(**(code **)(*plVar1 + 0x2b8))();
        fVar5 = fVar5 + fVar4;
        iVar2 = *(int *)(param_1 + 0x30);
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < iVar2);
  }
  return fVar5;
}



// FUNCTION 147d3710e FUN_147d3710e body=44 status=ok
// SIG undefined FUN_147d3710e(void)

void FUN_147d3710e(longlong *param_1)

{
  (**(code **)(*param_1 + 0x310))(param_1,(int)param_1[6]);
                    /* WARNING: Could not recover jumptable at 0x000147d37137. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x310))(param_1,(int)param_1[6]);
  return;
}



// FUNCTION 147d3713a FUN_147d3713a body=103 status=ok
// SIG undefined FUN_147d3713a(void)

void FUN_147d3713a(longlong param_1,int param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  
  FUN_147d365a2();
  plVar1 = (longlong *)(param_1 + 0x48);
  iVar2 = *(int *)(param_1 + 0x50);
  *(uint *)(param_1 + 0x50) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x54) < iVar2 + 1U) {
    FUN_14475e4ac(plVar1,iVar2);
  }
  lVar3 = (longlong)param_2;
  memmove((void *)(*plVar1 + lVar3 * 4 + 4),(void *)(*plVar1 + lVar3 * 4),
          (ulonglong)(uint)(iVar2 - param_2) << 2);
  *(undefined4 *)(*plVar1 + lVar3 * 4) = 0x3f800000;
  return;
}



// FUNCTION 147d371a2 FUN_147d371a2 body=89 status=ok
// SIG undefined FUN_147d371a2(void)

void FUN_147d371a2(longlong param_1,uint param_2)

{
  int iVar1;
  
  FUN_147d36614();
  iVar1 = *(int *)(param_1 + 0x50);
  if (~param_2 + iVar1 != 0) {
    memmove((void *)(*(longlong *)(param_1 + 0x48) + (longlong)(int)param_2 * 4),
            (void *)(*(longlong *)(param_1 + 0x48) + (longlong)(int)param_2 * 4 + 4),
            (longlong)(int)(~param_2 + iVar1) << 2);
    iVar1 = *(int *)(param_1 + 0x50);
  }
  *(int *)(param_1 + 0x50) = iVar1 + -1;
  FUN_1401fef06(param_1 + 0x48);
  return;
}



// FUNCTION 147d371fc FUN_147d371fc body=1081 status=ok
// SIG undefined FUN_147d371fc(void)

void FUN_147d371fc(longlong param_1,undefined8 param_2,ulonglong param_3,longlong param_4,
                  undefined8 param_5,longlong param_6)

{
  longlong *plVar1;
  longlong *plVar2;
  uint uVar3;
  undefined4 uVar4;
  int *piVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  undefined4 uVar10;
  longlong lVar11;
  ulonglong *puVar12;
  undefined1 auStack_308 [32];
  ulonglong **local_2e8;
  longlong local_2e0;
  int local_2d4;
  longlong *local_2d0;
  longlong local_2c8;
  longlong *local_2c0;
  undefined8 local_2b8;
  int local_2ac;
  ulonglong local_2a8;
  ulonglong *local_2a0;
  ulonglong *local_298;
  int local_28c;
  ulonglong *local_288;
  int *local_280;
  float local_1e4;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_308;
  plVar1 = (longlong *)(param_4 + 0x770);
  local_2b8 = param_2;
  local_2a8 = param_3;
  if (*(int *)(param_4 + 0x778) != *(int *)(param_4 + 0x7a4)) {
    lVar7 = param_4 + 0x7a8;
    if (*(longlong *)(param_4 + 0x7b0) != 0) {
      lVar7 = *(longlong *)(param_4 + 0x7b0);
    }
    iVar8 = *(int *)(lVar7 + (ulonglong)
                             (*(int *)(param_4 + 0x7b8) - 1U &
                             (int)param_3 + (int)(param_3 >> 0x20) * 0x17) * 4);
    if (iVar8 != -1) {
      do {
        puVar12 = (ulonglong *)(*plVar1 + (longlong)iVar8 * 0x18);
        if (*puVar12 == param_3) {
          if (puVar12 != (ulonglong *)0x0) {
            iVar8 = (int)puVar12[1];
            lVar7 = *(longlong *)(param_4 + 0x7c0);
            piVar5 = (int *)(iVar8 + lVar7);
            goto LAB_147d372c7;
          }
          break;
        }
        iVar8 = (int)puVar12[2];
      } while (iVar8 != -1);
    }
  }
  plVar2 = (longlong *)(param_4 + 0x7c0);
  iVar8 = *(int *)(param_4 + 0x7c8);
  *(int *)(param_4 + 0x7c8) = iVar8 + 0x10;
  if ((uint)(*(int *)(param_4 + 0x7cc) - iVar8) < 0x10) {
    FUN_1447403be(plVar2,iVar8);
  }
  lVar7 = *plVar2;
  *(undefined8 *)(lVar7 + iVar8) = 0;
  ((undefined8 *)(lVar7 + iVar8))[1] = 0;
  local_280 = &local_28c;
  local_288 = &local_2a8;
  local_28c = iVar8;
  FUN_1402eaea6(plVar1,&local_2a0,&local_288,0);
  piVar5 = (int *)(*plVar2 + (longlong)local_28c);
  *(undefined4 *)(*plVar2 + (longlong)local_28c) = 1;
  lVar7 = *plVar2;
  iVar8 = local_28c;
LAB_147d372c7:
  lVar9 = (longlong)(iVar8 + 4);
  if (*piVar5 != 0) {
    *(undefined8 *)(lVar7 + lVar9) = 0;
    *piVar5 = 0;
  }
  *(undefined4 *)(lVar7 + 8 + lVar9) = 0;
  lVar11 = (longlong)*(int *)(lVar7 + lVar9);
  iVar8 = *(int *)(param_1 + 0x30);
  local_2c0 = plVar1;
  if (*(int *)(lVar7 + lVar9) < iVar8) {
    local_2d0 = (longlong *)(param_4 + 0x7c0);
    uVar10 = *(undefined4 *)(lVar7 + 4 + lVar9);
    local_2c8 = param_4 + 0x7a8;
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x28) + lVar11 * 8);
      if (plVar1 != (longlong *)0x0) {
        FUN_147d36b2c(&local_288,param_5);
        FUN_14795c0c4(&local_288,param_1,local_2a8);
        local_1e4 = *(float *)(*(longlong *)(param_1 + 0x48) + lVar11 * 4) * local_1e4;
        local_2d4 = *(int *)(param_6 + 8);
        uVar3 = ((uint)((ulonglong)plVar1 >> 0x14) & 0xffff ^ (uint)((ulonglong)plVar1 >> 4)) *
                -0x7a143595;
        uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
        uVar3 = uVar3 >> 0x10 ^ uVar3;
        uVar6 = ((uint)(local_2a8 >> 0x14) & 0xffff ^ (uint)(local_2a8 >> 4)) * -0x7a143595;
        uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
        uVar6 = uVar6 >> 0x10 ^ uVar6;
        uVar6 = (uVar6 >> 2) + uVar6 * 0x40 + -0x61c88647 +
                ((uVar3 >> 2) + uVar3 * 0x40 + (int)lVar11 + 0x9e3779b9 ^ uVar3) ^ uVar6;
        local_2e0 = param_6;
        local_2e8 = &local_288;
        (**(code **)(*plVar1 + 0x2e0))(plVar1,local_2b8,uVar6,param_4);
        if (local_2d4 < *(int *)(param_6 + 8)) {
          uVar4 = (**(code **)(*plVar1 + 0x300))(plVar1,uVar6,param_4);
          plVar2 = local_2c0;
          plVar1 = local_2d0;
          if (*(int *)(param_4 + 0x778) == *(int *)(param_4 + 0x7a4)) goto LAB_147d3753b;
          lVar7 = local_2c8;
          if (*(longlong *)(param_4 + 0x7b0) != 0) {
            lVar7 = *(longlong *)(param_4 + 0x7b0);
          }
          iVar8 = *(int *)(lVar7 + (ulonglong)
                                   (*(int *)(param_4 + 0x7b8) - 1U &
                                   (int)local_2a8 + (int)(local_2a8 >> 0x20) * 0x17) * 4);
          if (iVar8 == -1) goto LAB_147d3753b;
          goto LAB_147d37601;
        }
        FUN_1478b5da6(&local_288);
        iVar8 = *(int *)(param_1 + 0x30);
      }
      lVar11 = lVar11 + 1;
      uVar10 = 0;
    } while (lVar11 < iVar8);
  }
  goto LAB_147d375d0;
  while (iVar8 = (int)puVar12[2], iVar8 != -1) {
LAB_147d37601:
    puVar12 = (ulonglong *)(*local_2c0 + (longlong)iVar8 * 0x18);
    if (*puVar12 == local_2a8) {
      if (puVar12 != (ulonglong *)0x0) {
        puVar12 = puVar12 + 1;
        goto LAB_147d375ac;
      }
      break;
    }
  }
LAB_147d3753b:
  iVar8 = *(int *)(param_4 + 0x7c8);
  *(int *)(param_4 + 0x7c8) = iVar8 + 0x10;
  if ((uint)(*(int *)(param_4 + 0x7cc) - iVar8) < 0x10) {
    FUN_1447403be(local_2d0,iVar8);
  }
  lVar7 = *plVar1;
  *(undefined8 *)(lVar7 + iVar8) = 0;
  ((undefined8 *)(lVar7 + iVar8))[1] = 0;
  puVar12 = (ulonglong *)&local_2ac;
  local_2a0 = &local_2a8;
  local_2ac = iVar8;
  local_298 = puVar12;
  FUN_1402eaea6(plVar2,&local_28c,&local_2a0,0);
  *(undefined4 *)(*plVar1 + (longlong)local_2ac) = 1;
LAB_147d375ac:
  lVar7 = *plVar1;
  lVar9 = (longlong)((int)*puVar12 + 4);
  *(int *)(lVar7 + lVar9) = (int)lVar11;
  *(undefined4 *)(lVar7 + 4 + lVar9) = uVar10;
  *(undefined4 *)(lVar7 + 8 + lVar9) = uVar4;
  FUN_1478b5da6(&local_288);
LAB_147d375d0:
  if ((local_48 ^ (ulonglong)auStack_308) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147d3763a FUN_147d3763a body=733 status=ok
// SIG undefined FUN_147d3763a(void)

void FUN_147d3763a(longlong *param_1,undefined8 param_2,longlong param_3,longlong param_4,
                  longlong param_5,undefined8 param_6)

{
  ulonglong *puVar1;
  longlong *plVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_308 [32];
  longlong **local_2e8;
  undefined8 local_2e0;
  int local_2cc;
  longlong local_2c8;
  undefined1 local_2bc [4];
  longlong *local_2b8;
  int *local_2b0;
  float local_1fc;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_308;
  local_2c8 = param_3;
  if (*(int *)(param_4 + 0x778) != *(int *)(param_4 + 0x7a4)) {
    lVar7 = param_4 + 0x7a8;
    if (*(longlong *)(param_4 + 0x7b0) != 0) {
      lVar7 = *(longlong *)(param_4 + 0x7b0);
    }
    uVar6 = (ulonglong)
            (*(int *)(param_4 + 0x7b8) - 1U &
            (int)param_3 + (int)((ulonglong)param_3 >> 0x20) * 0x17);
    iVar5 = *(int *)(lVar7 + uVar6 * 4);
    if (iVar5 != -1) {
      do {
        plVar2 = (longlong *)(*(longlong *)(param_4 + 0x770) + (longlong)iVar5 * 0x18);
        if (*plVar2 == param_3) {
          if (plVar2 != (longlong *)0x0) {
            iVar5 = (int)plVar2[1];
            uVar8 = *(ulonglong *)(param_4 + 0x7c0);
            piVar4 = (int *)((longlong)iVar5 + uVar8);
            goto LAB_147d37722;
          }
          break;
        }
        iVar5 = (int)plVar2[2];
      } while (iVar5 != -1);
    }
  }
  puVar1 = (ulonglong *)(param_4 + 0x7c0);
  iVar5 = *(int *)(param_4 + 0x7c8);
  *(int *)(param_4 + 0x7c8) = iVar5 + 0xc;
  if ((uint)(*(int *)(param_4 + 0x7cc) - iVar5) < 0xc) {
    FUN_1447403be(puVar1,iVar5);
  }
  uVar6 = *puVar1;
  *(undefined4 *)(uVar6 + 8 + (longlong)iVar5) = 0;
  *(undefined8 *)(uVar6 + (longlong)iVar5) = 0;
  local_2b0 = &local_2cc;
  local_2b8 = &local_2c8;
  local_2cc = iVar5;
  FUN_1402eaea6((longlong *)(param_4 + 0x770),local_2bc,&local_2b8,0);
  uVar6 = *puVar1;
  piVar4 = (int *)(uVar6 + (longlong)local_2cc);
  *(undefined4 *)(uVar6 + (longlong)local_2cc) = 1;
  uVar8 = *puVar1;
  iVar5 = local_2cc;
LAB_147d37722:
  lVar7 = (longlong)(iVar5 + 4);
  if (*piVar4 == 0) {
    fVar10 = *(float *)(uVar8 + lVar7);
LAB_147d377d8:
    if (*(float *)(param_4 + 0x1a8) <= fVar10 && fVar10 != *(float *)(param_4 + 0x1a8)) {
      *(byte *)(param_4 + 0x198) = *(byte *)(param_4 + 0x198) & 0xef;
      goto LAB_147d377ec;
    }
  }
  else {
    *piVar4 = 0;
    uVar3 = *(int *)((longlong)param_1 + 0x3c) * 0xbb38435 + 0x3619636b;
    *(uint *)((longlong)param_1 + 0x3c) = uVar3;
    fVar9 = ((float)(uVar3 >> 9 | 0x3f800000) + -1.0) *
            (*(float *)(param_1 + 9) - *(float *)((longlong)param_1 + 0x4c)) +
            *(float *)((longlong)param_1 + 0x4c);
    fVar10 = 0.0;
    if (0.0 <= fVar9) {
      fVar10 = fVar9;
    }
    if (DAT_14cb08a38 != 0) {
      (**(code **)(*param_1 + 800))(param_1,CONCAT71((int7)(uVar6 >> 8),1));
    }
    if ((fVar10 <= 0.0) || (*(float *)(param_5 + 0xbc) < fVar10)) {
      *(undefined4 *)(uVar8 + 4 + lVar7) = 0;
      fVar10 = (fVar10 + *(float *)(param_4 + 0x1a8)) - *(float *)(param_5 + 0xbc);
      *(float *)(uVar8 + lVar7) = fVar10;
      goto LAB_147d377d8;
    }
    *(float *)(uVar8 + 4 + lVar7) = fVar10;
    *(undefined4 *)(uVar8 + lVar7) = 0xbf800000;
  }
  FUN_147d36b2c(&local_2b8,param_5);
  local_1fc = local_1fc - *(float *)(uVar8 + 4 + lVar7);
  local_2e0 = param_6;
  local_2e8 = &local_2b8;
  FUN_147d363e4(param_1,param_2,local_2c8,param_4);
  FUN_1478b5da6(&local_2b8);
LAB_147d377ec:
  if ((local_70 ^ (ulonglong)auStack_308) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147d37918 FUN_147d37918 body=45 status=ok
// SIG undefined FUN_147d37918(void)

float FUN_147d37918(longlong param_1)

{
  float fVar1;
  
  if ((longlong *)**(longlong **)(param_1 + 0x28) == (longlong *)0x0) {
    fVar1 = 0.0;
  }
  else {
    fVar1 = (float)(**(code **)(*(longlong *)**(longlong **)(param_1 + 0x28) + 0x2b8))();
  }
  return fVar1 + *(float *)(param_1 + 0x4c);
}



// FUNCTION 147d37950 FUN_147d37950 body=241 status=ok
// SIG undefined FUN_147d37950(void)

void FUN_147d37950(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  longlong *plVar1;
  undefined1 auStack_2b8 [32];
  undefined1 *local_298;
  undefined8 local_290;
  undefined1 local_288 [572];
  byte local_4c;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_2b8;
  if (*(longlong *)(param_1 + 0x48) != 0) {
    plVar1 = (longlong *)FUN_1434d067a(*(longlong *)(param_1 + 0x48),param_1 + 0x50);
    if (plVar1 != (longlong *)0x0) {
      if ((*(byte *)(param_1 + 0x68) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_2b8);
      }
      FUN_147d36b2c(local_288,param_5);
      local_4c = local_4c | 2;
      local_290 = param_6;
      local_298 = local_288;
      (**(code **)(*plVar1 + 0x310))(plVar1,param_2,param_3,param_4);
      FUN_1478b5da6(local_288);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_2b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d37a66 FUN_147d37a66 body=90 status=ok
// SIG undefined FUN_147d37a66(void)

ulonglong FUN_147d37a66(longlong param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (*(longlong *)(param_1 + 0x48) != 0) {
    plVar1 = (longlong *)FUN_1434d067a(*(longlong *)(param_1 + 0x48),param_1 + 0x50);
    if (plVar1 != (longlong *)0x0) {
      if ((*(byte *)(param_1 + 0x68) & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000147d37aa3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (**(code **)(*plVar1 + 0x2c8))(plVar1);
        return uVar2;
      }
      uVar3 = 0x461c4000;
    }
  }
  return (ulonglong)uVar3;
}



// FUNCTION 147d37ac8 FUN_147d37ac8 body=160 status=ok
// SIG undefined FUN_147d37ac8(void)

float FUN_147d37ac8(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  float fVar3;
  longlong lVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  
  if ((longlong)*(int *)(param_1 + 0x50) < 1) {
    fVar7 = 0.0;
  }
  else {
    fVar7 = 0.0;
    lVar4 = 0;
    do {
      fVar6 = *(float *)(*(longlong *)(param_1 + 0x48) + 4 + lVar4);
      if (fVar6 <= fVar7) {
        fVar6 = fVar7;
      }
      fVar7 = *(float *)(*(longlong *)(param_1 + 0x48) + 0xc + lVar4);
      if (fVar7 <= fVar6) {
        fVar7 = fVar6;
      }
      lVar4 = lVar4 + 0x14;
    } while ((longlong)*(int *)(param_1 + 0x50) * 0x14 != lVar4);
  }
  iVar1 = *(int *)(param_1 + 0x30);
  if ((longlong)iVar1 != 0) {
    lVar4 = *(longlong *)(param_1 + 0x28);
    lVar5 = 0;
    fVar6 = fVar7;
    do {
      plVar2 = *(longlong **)(lVar4 + lVar5);
      fVar3 = fVar6;
      if (plVar2 != (longlong *)0x0) {
        FUN_1400337aa(plVar2);
        fVar7 = (float)(**(code **)(*plVar2 + 0x2a8))(plVar2);
        fVar3 = fVar7;
        if (fVar7 <= fVar6) {
          fVar7 = fVar6;
          fVar3 = fVar6;
        }
      }
      fVar6 = fVar3;
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar1 * 8 != lVar5);
  }
  return fVar7;
}



// FUNCTION 147d37b68 FUN_147d37b68 body=1143 status=ok
// SIG undefined FUN_147d37b68(void)

void FUN_147d37b68(longlong *param_1,undefined8 param_2,ulonglong param_3,longlong param_4,
                  longlong param_5,longlong param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  byte bVar5;
  longlong lVar6;
  longlong *plVar7;
  char cVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  ulonglong *puVar13;
  longlong lVar14;
  float fVar15;
  float fVar16;
  undefined1 auStack_388 [32];
  undefined1 *local_368;
  longlong local_360;
  int local_358;
  uint local_354;
  ulonglong local_350;
  undefined8 local_348;
  int local_33c;
  ulonglong local_338;
  ulonglong *local_330;
  ulonglong *local_328;
  undefined1 local_31c [4];
  undefined1 local_318 [152];
  float local_280;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_388;
  local_350 = param_3;
  local_348 = param_2;
  local_338 = param_3;
  FUN_147d36b2c(local_318,param_5);
  iVar12 = 0;
  if (0 < (int)param_1[6]) {
    uVar9 = ((uint)(local_350 >> 0x14) & 0xffff ^ (uint)(local_350 >> 4)) * -0x7a143595;
    local_354 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
    local_354 = local_354 >> 0x10 ^ local_354;
    local_358 = local_354 * 0x40 + (local_354 >> 2) + -0x61c88647;
    lVar14 = 0;
    lVar11 = 0;
    iVar12 = 0;
    do {
      if (*(longlong *)(param_1[5] + lVar11 * 8) != 0) {
        lVar6 = param_1[9];
        fVar1 = *(float *)(lVar6 + lVar14);
        fVar2 = *(float *)(lVar6 + 4 + lVar14);
        fVar3 = *(float *)(lVar6 + 8 + lVar14);
        fVar4 = *(float *)(lVar6 + 0xc + lVar14);
        fVar15 = (float)(**(code **)(*param_1 + 0x350))(param_1,local_348,param_4,param_5);
        cVar8 = (**(code **)(*param_1 + 0x358))(param_1,param_4);
        if (cVar8 == '\0') {
LAB_147d37d42:
          fVar16 = *(float *)(param_1[9] + 0x10 + lVar14);
        }
        else if ((fVar15 < fVar1) || (fVar2 < fVar15)) {
          if ((fVar15 < fVar3) || (fVar4 < fVar15)) {
            fVar16 = 0.0;
            if ((fVar2 <= fVar15) && (fVar15 <= fVar3)) goto LAB_147d37d42;
          }
          else {
            fVar16 = 0.0;
            if (0.0 < fVar4) {
              fVar16 = (1.0 - (fVar15 - fVar3) / (fVar4 - fVar3)) *
                       *(float *)(param_1[9] + 0x10 + lVar14);
            }
          }
        }
        else {
          fVar16 = *(float *)(param_1[9] + 0x10 + lVar14);
          if (0.0 < fVar2) {
            fVar16 = fVar16 * ((fVar15 - fVar1) / (fVar2 - fVar1) + 0.0);
          }
        }
        iVar12 = iVar12 + (uint)(0.0 < fVar16);
        local_280 = *(float *)(param_5 + 0x98) * fVar16;
        bVar5 = *(byte *)(param_4 + 0x198);
        iVar10 = *(int *)(param_6 + 8);
        plVar7 = *(longlong **)(param_1[5] + lVar11 * 8);
        uVar9 = ((uint)((ulonglong)plVar7 >> 0x14) & 0xffff ^ (uint)((ulonglong)plVar7 >> 4)) *
                -0x7a143595;
        uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
        uVar9 = uVar9 >> 0x10 ^ uVar9;
        local_360 = param_6;
        local_368 = local_318;
        (**(code **)(*plVar7 + 0x2e0))
                  (plVar7,local_348,
                   ((uVar9 >> 2) + uVar9 * 0x40 + (int)lVar11 + 0x9e3779b9 ^ uVar9) + local_358 ^
                   local_354,param_4);
        if ((((fVar16 <= 0.0) && ((bVar5 & 0x10) != 0)) && (iVar10 == *(int *)(param_6 + 8))) &&
           (cVar8 = (**(code **)(**(longlong **)(param_4 + 0x18) + 0x300))(), cVar8 == '\0')) {
          *(byte *)(param_4 + 0x198) = *(byte *)(param_4 + 0x198) | 0x10;
        }
      }
      lVar11 = lVar11 + 1;
      lVar14 = lVar14 + 0x14;
    } while (lVar11 < (int)param_1[6]);
  }
  if (*(int *)(param_4 + 0x778) != *(int *)(param_4 + 0x7a4)) {
    lVar11 = param_4 + 0x7a8;
    if (*(longlong *)(param_4 + 0x7b0) != 0) {
      lVar11 = *(longlong *)(param_4 + 0x7b0);
    }
    iVar10 = *(int *)(lVar11 + (ulonglong)
                               (*(int *)(param_4 + 0x7b8) - 1U &
                               (int)local_350 + (int)(local_350 >> 0x20) * 0x17) * 4);
    if (iVar10 != -1) {
      do {
        puVar13 = (ulonglong *)(*(longlong *)(param_4 + 0x770) + (longlong)iVar10 * 0x18);
        if (*puVar13 == local_350) {
          if (puVar13 != (ulonglong *)0x0) {
            puVar13 = puVar13 + 1;
            goto LAB_147d37f1c;
          }
          break;
        }
        iVar10 = (int)puVar13[2];
      } while (iVar10 != -1);
    }
  }
  plVar7 = (longlong *)(param_4 + 0x7c0);
  iVar10 = *(int *)(param_4 + 0x7c8);
  *(int *)(param_4 + 0x7c8) = iVar10 + 8;
  if ((uint)(*(int *)(param_4 + 0x7cc) - iVar10) < 8) {
    FUN_1447403be(plVar7,iVar10);
  }
  *(undefined8 *)(*plVar7 + (longlong)iVar10) = 0;
  puVar13 = (ulonglong *)&local_33c;
  local_330 = &local_338;
  local_33c = iVar10;
  local_328 = puVar13;
  FUN_1402eaea6((longlong *)(param_4 + 0x770),local_31c,&local_330,0);
  *(undefined4 *)(*plVar7 + (longlong)local_33c) = 1;
LAB_147d37f1c:
  *(int *)(*(longlong *)(param_4 + 0x7c0) + (longlong)((int)*puVar13 + 4)) = iVar12;
  FUN_1478b5da6(local_318);
  if ((local_d0 ^ (ulonglong)auStack_388) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147d37fe0 FUN_147d37fe0 body=342 status=ok
// SIG undefined FUN_147d37fe0(void)

undefined4 FUN_147d37fe0(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_78 [36];
  int local_54;
  longlong local_50;
  longlong *local_48;
  longlong *local_40;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = param_2;
  if (*(int *)(param_3 + 0x778) != *(int *)(param_3 + 0x7a4)) {
    lVar3 = param_3 + 0x7a8;
    if (*(longlong *)(param_3 + 0x7b0) != 0) {
      lVar3 = *(longlong *)(param_3 + 0x7b0);
    }
    iVar2 = *(int *)(lVar3 + (ulonglong)
                             (*(int *)(param_3 + 0x7b8) - 1U &
                             (int)param_2 + (int)((ulonglong)param_2 >> 0x20) * 0x17) * 4);
    if (iVar2 != -1) {
      do {
        plVar4 = (longlong *)(*(longlong *)(param_3 + 0x770) + (longlong)iVar2 * 0x18);
        if (*plVar4 == param_2) {
          if (plVar4 != (longlong *)0x0) {
            plVar4 = plVar4 + 1;
            goto LAB_147d3808f;
          }
          break;
        }
        iVar2 = (int)plVar4[2];
      } while (iVar2 != -1);
    }
  }
  plVar1 = (longlong *)(param_3 + 0x7c0);
  iVar2 = *(int *)(param_3 + 0x7c8);
  *(int *)(param_3 + 0x7c8) = iVar2 + 8;
  if ((uint)(*(int *)(param_3 + 0x7cc) - iVar2) < 8) {
    FUN_1447403be(plVar1,iVar2);
  }
  *(undefined8 *)(*plVar1 + (longlong)iVar2) = 0;
  plVar4 = (longlong *)&local_54;
  local_48 = &local_50;
  local_54 = iVar2;
  local_40 = plVar4;
  FUN_1402eaea6((longlong *)(param_3 + 0x770),local_34,&local_48,0);
  *(undefined4 *)(*plVar1 + (longlong)local_54) = 1;
LAB_147d3808f:
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return *(undefined4 *)(*(longlong *)(param_3 + 0x7c0) + (longlong)((int)*plVar4 + 4));
}



// FUNCTION 147d38138 FUN_147d38138 body=44 status=ok
// SIG undefined FUN_147d38138(void)

void FUN_147d38138(longlong *param_1)

{
  (**(code **)(*param_1 + 0x310))(param_1,(int)param_1[6]);
                    /* WARNING: Could not recover jumptable at 0x000147d38161. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x310))(param_1,(int)param_1[6]);
  return;
}



// FUNCTION 147d38164 FUN_147d38164 body=60 status=ok
// SIG undefined FUN_147d38164(void)

void FUN_147d38164(longlong param_1,int param_2)

{
  FUN_147d365a2();
  if (*(int *)(param_1 + 0x50) <= param_2) {
    FUN_147d381a0(param_1 + 0x48,param_2);
    *(undefined4 *)(*(longlong *)(param_1 + 0x48) + 0x10 + (longlong)param_2 * 0x14) = 0x3f800000;
  }
  return;
}



// FUNCTION 147d381a0 FUN_147d381a0 body=108 status=ok
// SIG undefined FUN_147d381a0(void)

void FUN_147d381a0(longlong *param_1,int param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
    FUN_147d48a9a(param_1,iVar2);
  }
  lVar4 = (longlong)param_2 * 0x14;
  memmove((void *)(*param_1 + lVar4 + 0x14),(void *)(*param_1 + lVar4),
          (ulonglong)(uint)(iVar2 - param_2) * 0x14);
  lVar3 = *param_1;
  puVar1 = (undefined8 *)(lVar3 + lVar4);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined4 *)(lVar3 + 0x10 + lVar4) = 0;
  return;
}



// FUNCTION 147d3820c FUN_147d3820c body=97 status=ok
// SIG undefined FUN_147d3820c(void)

void FUN_147d3820c(longlong param_1,uint param_2)

{
  int iVar1;
  
  FUN_147d36614();
  iVar1 = *(int *)(param_1 + 0x50);
  if (~param_2 + iVar1 != 0) {
    memmove((void *)(*(longlong *)(param_1 + 0x48) + (longlong)(int)param_2 * 0x14),
            (void *)(*(longlong *)(param_1 + 0x48) + (longlong)(int)param_2 * 0x14 + 0x14),
            (longlong)(int)(~param_2 + iVar1) * 0x14);
    iVar1 = *(int *)(param_1 + 0x50);
  }
  *(int *)(param_1 + 0x50) = iVar1 + -1;
  FUN_147d48b2e(param_1 + 0x48);
  return;
}



// FUNCTION 147d3826e FUN_147d3826e body=157 status=ok
// SIG undefined FUN_147d3826e(void)

void FUN_147d3826e(undefined8 param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  undefined4 uVar1;
  double dVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [32];
  double local_38;
  double local_30;
  double local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar3 = 0;
  if ((*(byte *)(param_3 + 0x199) & 0x10) != 0) {
    uVar1 = FUN_1478b4d4e(0);
    FUN_14795ba42(param_2,uVar1,&local_38,1);
    local_38 = local_38 - *(double *)(param_4 + 0x40);
    local_30 = local_30 - *(double *)(param_4 + 0x48);
    local_28 = local_28 - *(double *)(param_4 + 0x50);
    dVar2 = SQRT(local_28 * local_28 + local_30 * local_30 + local_38 * local_38);
    uVar3 = CONCAT44((int)((ulonglong)dVar2 >> 0x20),(float)dVar2);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(uVar3);
}



// FUNCTION 147d38322 FUN_147d38322 body=740 status=ok
// SIG undefined FUN_147d38322(void)

void FUN_147d38322(longlong param_1,longlong param_2,undefined8 *param_3,longlong param_4,
                  longlong param_5,undefined8 param_6)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  float *pfVar5;
  longlong lVar6;
  float fVar7;
  undefined1 auStack_358 [32];
  undefined8 ***local_338;
  undefined8 *local_330;
  undefined4 local_328;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined8 local_308;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  int local_29c;
  undefined8 *local_298;
  undefined1 local_28c [4];
  undefined8 **local_288;
  int *local_280;
  float local_1d0;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_358;
  local_298 = param_3;
  if (*(int *)(param_4 + 0x778) != *(int *)(param_4 + 0x7a4)) {
    lVar6 = param_4 + 0x7a8;
    if (*(longlong *)(param_4 + 0x7b0) != 0) {
      lVar6 = *(longlong *)(param_4 + 0x7b0);
    }
    iVar3 = *(int *)(lVar6 + (ulonglong)
                             (*(int *)(param_4 + 0x7b8) - 1U &
                             (int)param_3 + (int)((ulonglong)param_3 >> 0x20) * 0x17) * 4);
    if (iVar3 != -1) {
      do {
        plVar1 = (longlong *)(*(longlong *)(param_4 + 0x770) + (longlong)iVar3 * 0x18);
        if ((undefined8 *)*plVar1 == param_3) {
          if (plVar1 != (longlong *)0x0) {
            iVar3 = (int)plVar1[1];
            lVar6 = *(longlong *)(param_4 + 0x7c0);
            piVar4 = (int *)(iVar3 + lVar6);
            goto LAB_147d38444;
          }
          break;
        }
        iVar3 = (int)plVar1[2];
      } while (iVar3 != -1);
    }
  }
  plVar1 = (longlong *)(param_4 + 0x7c0);
  iVar3 = *(int *)(param_4 + 0x7c8);
  *(int *)(param_4 + 0x7c8) = iVar3 + 8;
  if ((uint)(*(int *)(param_4 + 0x7cc) - iVar3) < 8) {
    FUN_1447403be(plVar1,iVar3);
  }
  *(undefined8 *)(*plVar1 + (longlong)iVar3) = 0;
  local_280 = &local_29c;
  local_288 = &local_298;
  local_29c = iVar3;
  FUN_1402eaea6((longlong *)(param_4 + 0x770),local_28c,&local_288,0);
  piVar4 = (int *)(*plVar1 + (longlong)local_29c);
  *(undefined4 *)(*plVar1 + (longlong)local_29c) = 1;
  lVar6 = *plVar1;
  iVar3 = local_29c;
LAB_147d38444:
  pfVar5 = (float *)((iVar3 + 4) + lVar6);
  FUN_147d36b2c(&local_288,param_5);
  iVar2 = FUN_1478b4d4e(param_4);
  iVar3 = 0;
  if (iVar2 < *(int *)(param_2 + 0x1e8)) {
    iVar3 = iVar2;
  }
  lVar6 = (longlong)iVar3 * 0x110 + *(longlong *)(param_2 + 0x1e0);
  if (*piVar4 == 0) {
    local_328 = FUN_14795c00a(param_2);
    local_2f8 = *(undefined8 *)(param_5 + 0x80);
    uStack_2f0 = *(undefined8 *)(param_5 + 0x88);
    local_330 = &local_2f8;
    local_2e8 = *(undefined8 *)(param_5 + 0x90);
    local_318 = *(undefined8 *)(param_5 + 0x40);
    uStack_310 = *(undefined8 *)(param_5 + 0x48);
    local_338 = (undefined8 ***)&local_318;
    local_308 = *(undefined8 *)(param_5 + 0x50);
    fVar7 = (float)FUN_147d38608(param_1,pfVar5,*(undefined1 *)(param_1 + 0x4c),lVar6);
  }
  else {
    *piVar4 = 0;
    local_328 = FUN_14795c00a(param_2);
    local_2b8 = *(undefined8 *)(param_5 + 0x80);
    uStack_2b0 = *(undefined8 *)(param_5 + 0x88);
    local_330 = &local_2b8;
    local_2a8 = *(undefined8 *)(param_5 + 0x90);
    local_2d8 = *(undefined8 *)(param_5 + 0x40);
    uStack_2d0 = *(undefined8 *)(param_5 + 0x48);
    local_338 = (undefined8 ***)&local_2d8;
    local_2c8 = *(undefined8 *)(param_5 + 0x50);
    fVar7 = (float)FUN_147d38608(param_1,pfVar5,0,lVar6);
    *pfVar5 = fVar7;
  }
  local_1d0 = fVar7 * local_1d0;
  local_330 = (undefined8 *)param_6;
  local_338 = &local_288;
  FUN_147d363e4(param_1,param_2,local_298,param_4);
  FUN_1478b5da6(&local_288);
  if ((local_48 ^ (ulonglong)auStack_358) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147d38608 FUN_147d38608 body=400 status=ok
// SIG undefined FUN_147d38608(void)

void FUN_147d38608(longlong param_1,float *param_2,char param_3,longlong param_4,double *param_5,
                  double *param_6,float param_7)

{
  float fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  dVar2 = *(double *)(param_4 + 0x30) - param_5[2];
  dVar6 = *(double *)(param_4 + 0x28) - param_5[1];
  dVar4 = *(double *)(param_4 + 0x20) - *param_5;
  dVar8 = dVar2 * dVar2 + dVar4 * dVar4 + dVar6 * dVar6;
  if (((dVar8 != 1.0) || (dVar3 = dVar2, dVar5 = dVar4, dVar7 = dVar6, NAN(dVar8))) &&
     (dVar3 = DAT_14c8464f0, dVar5 = DAT_14c8464e0, dVar7 = DAT_14c8464e8,
     9.99999993922529e-09 <= dVar8)) {
    dVar8 = 1.0 / SQRT(dVar8);
    dVar3 = dVar2 * dVar8;
    dVar5 = dVar4 * dVar8;
    dVar7 = dVar6 * dVar8;
  }
  fVar1 = (1.0 / (((float)(param_6[2] * dVar3 + *param_6 * dVar5 + param_6[1] * dVar7) -
                  (float)(dVar3 * *(double *)(param_4 + 0x70) +
                         dVar5 * *(double *)(param_4 + 0x60) + dVar7 * *(double *)(param_4 + 0x68)))
                  / -33000.0 + 1.0) + -1.0) * *(float *)(param_1 + 0x48) + 1.0;
  if (param_3 != '\0') {
    if (0.0 < *(float *)(param_1 + 0x50)) {
      dVar2 = (double)fVar1 - (double)*param_2;
      if (9.99999993922529e-09 <= dVar2 * dVar2) {
        dVar4 = (double)param_7 * (double)*(float *)(param_1 + 0x50);
        if (1.0 <= dVar4) {
          dVar4 = 1.0;
        }
        if (dVar4 <= 0.0) {
          dVar4 = 0.0;
        }
        fVar1 = (float)(dVar2 * dVar4 + (double)*param_2);
      }
    }
    *param_2 = fVar1;
  }
  return;
}



// FUNCTION 147d387b4 FUN_147d387b4 body=420 status=ok
// SIG undefined FUN_147d387b4(void)

void FUN_147d387b4(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_208 [32];
  undefined1 local_1e8;
  undefined4 local_1e0;
  undefined4 local_1d8;
  undefined4 local_1d4;
  undefined **local_1d0;
  longlong local_1c8;
  undefined ***local_1c0;
  undefined8 **local_1b8;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_208;
  local_1b8 = &local_1c0;
  local_1d0 = &PTR_FUN_149e37810;
  local_1c0 = &local_1d0;
  local_1c8 = param_2;
  switchD_143c3d4dc::caseD_20();
  iVar1 = *(int *)(param_2 + 0x40);
  if (0x1e4 < iVar1) {
    FUN_140562eea(&local_1d0,param_2,0,&DAT_14c896044);
    iVar1 = *(int *)(param_2 + 0x40);
  }
  if (((*(byte *)(param_2 + 0x28) & 1) != 0) && (iVar1 < 299)) {
    if (*(longlong *)(param_1 + 0x60) != 0) {
      FUN_14093cdbe(param_1 + 0x70);
      lVar2 = *(longlong *)(param_1 + 0x60);
      if (0 < *(int *)(lVar2 + 0x40)) {
        lVar4 = 4;
        lVar3 = 0;
        do {
          lVar2 = *(longlong *)(lVar2 + 0x38);
          FUN_14045d416(&local_1d4);
          local_1e0 = local_1d4;
          local_1e8 = 0;
          FUN_1406507bc(param_1 + 0x70,&local_1d0,*(undefined4 *)(lVar2 + -4 + lVar4),
                        *(undefined4 *)(lVar2 + lVar4));
          lVar3 = lVar3 + 1;
          lVar2 = *(longlong *)(param_1 + 0x60);
          lVar4 = lVar4 + 0x14;
        } while (lVar3 < *(int *)(lVar2 + 0x40));
      }
    }
    if (*(longlong *)(param_1 + 0x68) != 0) {
      FUN_14093cdbe(param_1 + 0xf8);
      lVar2 = *(longlong *)(param_1 + 0x68);
      if (0 < *(int *)(lVar2 + 0x40)) {
        lVar4 = 4;
        lVar3 = 0;
        do {
          lVar2 = *(longlong *)(lVar2 + 0x38);
          FUN_14045d416(&local_1d8);
          local_1e0 = local_1d8;
          local_1e8 = 0;
          FUN_1406507bc(param_1 + 0xf8,&local_1d0,*(undefined4 *)(lVar2 + -4 + lVar4),
                        *(undefined4 *)(lVar2 + lVar4));
          lVar3 = lVar3 + 1;
          lVar2 = *(longlong *)(param_1 + 0x68);
          lVar4 = lVar4 + 0x14;
        } while (lVar3 < *(int *)(lVar2 + 0x40));
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_208) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d3895a FUN_147d3895a body=1070 status=ok
// SIG undefined FUN_147d3895a(void)

void FUN_147d3895a(longlong *param_1,undefined8 param_2,longlong param_3,longlong param_4,
                  longlong param_5,undefined8 param_6)

{
  longlong *plVar1;
  undefined8 *puVar2;
  int iVar3;
  int *piVar4;
  undefined8 uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_2f8 [32];
  longlong **local_2d8;
  undefined8 local_2d0;
  int local_2bc;
  longlong local_2b8;
  undefined1 local_2ac [4];
  longlong *local_2a8;
  int *local_2a0;
  float local_210;
  float local_1f0;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_2f8;
  local_2b8 = param_3;
  if (*(int *)(param_4 + 0x778) != *(int *)(param_4 + 0x7a4)) {
    lVar7 = param_4 + 0x7a8;
    if (*(longlong *)(param_4 + 0x7b0) != 0) {
      lVar7 = *(longlong *)(param_4 + 0x7b0);
    }
    iVar3 = *(int *)(lVar7 + (ulonglong)
                             (*(int *)(param_4 + 0x7b8) - 1U &
                             (int)param_3 + (int)((ulonglong)param_3 >> 0x20) * 0x17) * 4);
    if (iVar3 != -1) {
      do {
        plVar1 = (longlong *)(*(longlong *)(param_4 + 0x770) + (longlong)iVar3 * 0x18);
        if (*plVar1 == param_3) {
          if (plVar1 != (longlong *)0x0) {
            iVar3 = (int)plVar1[1];
            lVar7 = *(longlong *)(param_4 + 0x7c0);
            piVar4 = (int *)(iVar3 + lVar7);
            goto LAB_147d38a3a;
          }
          break;
        }
        iVar3 = (int)plVar1[2];
      } while (iVar3 != -1);
    }
  }
  plVar1 = (longlong *)(param_4 + 0x7c0);
  iVar3 = *(int *)(param_4 + 0x7c8);
  *(int *)(param_4 + 0x7c8) = iVar3 + 0x14;
  if ((uint)(*(int *)(param_4 + 0x7cc) - iVar3) < 0x14) {
    FUN_1447403be(plVar1,iVar3);
  }
  lVar7 = *plVar1;
  puVar2 = (undefined8 *)(lVar7 + iVar3);
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined4 *)(lVar7 + 0x10 + (longlong)iVar3) = 0;
  local_2a0 = &local_2bc;
  local_2a8 = &local_2b8;
  local_2bc = iVar3;
  FUN_1402eaea6((longlong *)(param_4 + 0x770),local_2ac,&local_2a8,0);
  piVar4 = (int *)(*plVar1 + (longlong)local_2bc);
  *(undefined4 *)(*plVar1 + (longlong)local_2bc) = 1;
  lVar7 = *plVar1;
  iVar3 = local_2bc;
LAB_147d38a3a:
  lVar8 = (longlong)(iVar3 + 4);
  if (*piVar4 != 0) {
    *(float *)(lVar7 + lVar8) = *(float *)(param_4 + 0x1ac) - *(float *)(param_5 + 0xbc);
    uVar6 = *(int *)((longlong)param_1 + 0x3c) * 0xbb38435 + 0x3619636b;
    *(uint *)((longlong)param_1 + 0x3c) = uVar6;
    *(float *)(lVar7 + 4 + lVar8) =
         ((float)(uVar6 >> 9 | 0x3f800000) + -1.0) *
         (*(float *)(param_1 + 0x31) - *(float *)((longlong)param_1 + 0x18c)) +
         *(float *)((longlong)param_1 + 0x18c);
    uVar6 = *(int *)((longlong)param_1 + 0x3c) * 0xbb38435 + 0x3619636b;
    *(uint *)((longlong)param_1 + 0x3c) = uVar6;
    *(float *)(lVar7 + 8 + lVar8) =
         ((float)(uVar6 >> 9 | 0x3f800000) + -1.0) *
         (*(float *)(param_1 + 0x30) - *(float *)((longlong)param_1 + 0x184)) +
         *(float *)((longlong)param_1 + 0x184);
    *(undefined4 *)(lVar7 + 0xc + lVar8) = 0xffffffff;
    *piVar4 = 0;
  }
  fVar11 = *(float *)(param_4 + 0x1ac) - *(float *)(lVar7 + lVar8);
  if (((*(byte *)(param_1 + 0xb) & 2) != 0) &&
     (*(float *)((longlong)param_1 + 0x4c) <= fVar11 &&
      fVar11 != *(float *)((longlong)param_1 + 0x4c))) {
    fVar9 = (float)(**(code **)(*param_1 + 0x2b8))(param_1);
    if (fVar9 < fVar11) goto LAB_147d38b3b;
    fVar10 = *(float *)((longlong)param_1 + 0x4c) - *(float *)(param_1 + 9);
    fVar9 = 1e-08;
    if (1e-08 <= fVar10) {
      fVar9 = fVar10;
    }
    fVar9 = (float)(int)(fVar11 - *(float *)(param_1 + 9)) / fVar9;
    iVar3 = (int)fVar9;
    fVar11 = fVar11 - (float)(int)fVar9 * fVar10;
    if (((*(int *)((longlong)param_1 + 0x54) == iVar3) && (iVar3 != 0)) &&
       ((*(uint *)(param_1 + 0xb) & 1) == 0)) {
      fVar11 = fVar11 + fVar10;
    }
    else if (*(int *)(lVar7 + 0xc + lVar8) != iVar3) {
      uVar6 = *(int *)((longlong)param_1 + 0x3c) * 0xbb38435 + 0x3619636b;
      *(uint *)((longlong)param_1 + 0x3c) = uVar6;
      *(float *)(lVar7 + 4 + lVar8) =
           ((float)(uVar6 >> 9 | 0x3f800000) + -1.0) *
           (*(float *)(param_1 + 0x31) - *(float *)((longlong)param_1 + 0x18c)) +
           *(float *)((longlong)param_1 + 0x18c);
      uVar6 = *(int *)((longlong)param_1 + 0x3c) * 0xbb38435 + 0x3619636b;
      *(uint *)((longlong)param_1 + 0x3c) = uVar6;
      *(float *)(lVar7 + 8 + lVar8) =
           ((float)(uVar6 >> 9 | 0x3f800000) + -1.0) *
           (*(float *)(param_1 + 0x30) - *(float *)((longlong)param_1 + 0x184)) +
           *(float *)((longlong)param_1 + 0x184);
      *(int *)(lVar7 + 0xc + lVar8) = iVar3;
    }
  }
  FUN_147d36b2c(&local_2a8,param_5);
  uVar5 = FUN_1414cd6fa(param_1 + 0xe);
  fVar9 = (float)FUN_1448c9f94(uVar5,fVar11);
  local_210 = fVar9 * *(float *)(lVar7 + 4 + lVar8) * local_210;
  uVar5 = FUN_1414cd6fa(param_1 + 0x1f);
  fVar11 = (float)FUN_1448c9f94(uVar5,fVar11);
  local_1f0 = fVar11 * *(float *)(lVar7 + 8 + lVar8) * local_1f0;
  local_2d0 = param_6;
  local_2d8 = &local_2a8;
  FUN_147d363e4(param_1,param_2,local_2b8,param_4);
  FUN_1478b5da6(&local_2a8);
LAB_147d38b3b:
  if ((local_60 ^ (ulonglong)auStack_2f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147d38d8a FUN_147d38d8a body=99 status=ok
// SIG undefined FUN_147d38d8a(void)

ulonglong FUN_147d38d8a(longlong param_1)

{
  ulonglong uVar1;
  
  uVar1 = 0;
  if ((0 < *(int *)(param_1 + 0x30)) &&
     (uVar1 = 0, (longlong *)**(longlong **)(param_1 + 0x28) != (longlong *)0x0)) {
    uVar1 = (**(code **)(*(longlong *)**(longlong **)(param_1 + 0x28) + 0x2b8))(0);
  }
  if ((*(uint *)(param_1 + 0x58) & 2) != 0) {
    if ((*(uint *)(param_1 + 0x58) & 1) == 0) {
      uVar1 = (ulonglong)
              (uint)((*(float *)(param_1 + 0x4c) - *(float *)(param_1 + 0x48)) *
                     (float)*(int *)(param_1 + 0x54) + *(float *)(param_1 + 0x48) +
                    *(float *)(param_1 + 0x50));
    }
    else {
      uVar1 = 0x461c4000;
    }
  }
  return uVar1;
}



// FUNCTION 147d38df2 FUN_147d38df2 body=131 status=ok
// SIG undefined FUN_147d38df2(void)

void FUN_147d38df2(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = 1;
  if (1 < (int)*(uint *)(param_1 + 0x30)) {
    uVar4 = *(uint *)(param_1 + 0x30);
  }
  uVar1 = uVar4 - 1;
  plVar2 = (longlong *)(param_1 + 0x48);
  uVar3 = *(uint *)(param_1 + 0x50);
  if ((int)uVar3 < (int)uVar1) {
    *(uint *)(param_1 + 0x50) = uVar1;
    if (*(int *)(param_1 + 0x54) - uVar3 < uVar1 - uVar3) {
      FUN_1446f48e2(plVar2);
    }
    memset((void *)((longlong)(int)uVar3 * 4 + *plVar2),0,(longlong)(int)(uVar1 - uVar3) << 2);
    return;
  }
  if (uVar3 == uVar1 || uVar3 < uVar4) {
    return;
  }
  *(uint *)(param_1 + 0x50) = uVar1;
  FUN_14479f406(plVar2);
  return;
}



// FUNCTION 147d38e76 FUN_147d38e76 body=832 status=ok
// SIG undefined FUN_147d38e76(void)

undefined8 FUN_147d38e76(ulonglong param_1,longlong param_2)

{
  ulonglong *puVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined *puVar9;
  int iVar10;
  int iVar11;
  longlong *plVar12;
  ulonglong *puVar13;
  undefined1 auStack_88 [36];
  int local_64;
  longlong local_60;
  longlong *local_58;
  longlong *local_50;
  undefined1 local_44 [4];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar6 = *(longlong *)(param_2 + 0x60);
  local_60 = FUN_14795c140(param_2 + 0x50,param_1);
  if (*(int *)(lVar6 + 0x778) != *(int *)(lVar6 + 0x7a4)) {
    lVar8 = lVar6 + 0x7a8;
    if (*(longlong *)(lVar6 + 0x7b0) != 0) {
      lVar8 = *(longlong *)(lVar6 + 0x7b0);
    }
    iVar11 = *(int *)(lVar8 + (ulonglong)
                              (*(int *)(lVar6 + 0x7b8) - 1U &
                              (int)local_60 + (int)((ulonglong)local_60 >> 0x20) * 0x17) * 4);
    if (iVar11 != -1) {
      do {
        plVar12 = (longlong *)(*(longlong *)(lVar6 + 0x770) + (longlong)iVar11 * 0x18);
        if (*plVar12 == local_60) {
          if (plVar12 != (longlong *)0x0) {
            plVar12 = plVar12 + 1;
            goto LAB_147d38f42;
          }
          break;
        }
        iVar11 = (int)plVar12[2];
      } while (iVar11 != -1);
    }
  }
  plVar7 = (longlong *)(lVar6 + 0x7c0);
  iVar11 = *(int *)(lVar6 + 0x7c8);
  *(int *)(lVar6 + 0x7c8) = iVar11 + 8;
  if ((uint)(*(int *)(lVar6 + 0x7cc) - iVar11) < 8) {
    FUN_1447403be(plVar7,iVar11);
  }
  *(undefined8 *)(*plVar7 + (longlong)iVar11) = 0;
  plVar12 = (longlong *)&local_64;
  local_58 = &local_60;
  local_64 = iVar11;
  local_50 = plVar12;
  FUN_1402eaea6((longlong *)(lVar6 + 0x770),local_44,&local_58,0);
  *(undefined4 *)(*plVar7 + (longlong)local_64) = 1;
LAB_147d38f42:
  if (DAT_14cb08ad8 != DAT_14cb08b04) {
    uVar5 = ((uint)(param_1 >> 0x14) & 0xffff ^ (uint)(param_1 >> 4)) * -0x7a143595;
    uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
    puVar9 = &DAT_14cb08b08;
    if (DAT_14cb08b10 != (undefined *)0x0) {
      puVar9 = DAT_14cb08b10;
    }
    iVar11 = *(int *)(puVar9 + (ulonglong)(DAT_14cb08b18 - 1U & (uVar5 >> 0x10 ^ uVar5)) * 4);
    if (iVar11 != -1) {
      do {
        lVar8 = DAT_14cb08ad0 + (longlong)iVar11 * 0x20;
        if (*(ulonglong *)(DAT_14cb08ad0 + (longlong)iVar11 * 0x20) == param_1) {
          if ((longlong *)(lVar8 + 8) != (longlong *)0x0 && lVar8 != 0) {
            lVar3 = *(longlong *)(lVar8 + 8);
            lVar6 = (longlong)*(int *)(*(longlong *)(lVar6 + 0x7c0) + (longlong)((int)*plVar12 + 4))
                    * 0x50;
            iVar11 = *(int *)(lVar3 + 8 + lVar6);
            iVar2 = *(int *)(lVar3 + 0x34 + lVar6);
            if (iVar11 != iVar2) {
              plVar7 = (longlong *)(lVar6 + lVar3);
              uVar4 = *(ulonglong *)(param_2 + 0x60);
              uVar5 = ((uint)(uVar4 >> 0x14) & 0xffff ^ (uint)(uVar4 >> 4)) * -0x7a143595;
              uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
              plVar12 = plVar7 + 7;
              if ((longlong *)plVar7[8] != (longlong *)0x0) {
                plVar12 = (longlong *)plVar7[8];
              }
              iVar10 = *(int *)((longlong)plVar12 +
                               (ulonglong)((int)plVar7[9] - 1U & (uVar5 >> 0x10 ^ uVar5)) * 4);
              if (iVar10 != -1) {
                goto LAB_147d39120;
              }
            }
          }
          break;
        }
        iVar11 = *(int *)(lVar8 + 0x18);
      } while (iVar11 != -1);
    }
  }
  goto LAB_147d38f54;
  while (iVar10 = (int)puVar1[2], iVar10 != -1) {
LAB_147d39120:
    puVar1 = (ulonglong *)(*plVar7 + (longlong)iVar10 * 0x18);
    if (*puVar1 == uVar4) {
      puVar13 = puVar1 + 1;
      if (puVar13 != (ulonglong *)0x0 && puVar1 != (ulonglong *)0x0) {
        if ((int)*puVar13 < 2) {
          if ((1 < iVar11 - iVar2) || ((longlong)*(int *)(lVar8 + 0x10) < 1)) goto LAB_147d391ad;
          lVar6 = 0;
          iVar11 = 0;
          do {
            iVar11 = (iVar11 + *(int *)(lVar3 + 8 + lVar6)) - *(int *)(lVar3 + 0x34 + lVar6);
            lVar6 = lVar6 + 0x50;
          } while ((longlong)*(int *)(lVar8 + 0x10) * 0x50 != lVar6);
          if (iVar11 != 1) {
LAB_147d391ad:
            FUN_147d48bdc();
            break;
          }
          FUN_147d48d2a(param_1);
        }
        else {
          *(int *)puVar13 = (int)*puVar13 + -1;
        }
      }
      break;
    }
  }
LAB_147d38f54:
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 0;
}



// FUNCTION 147d391b8 FUN_147d391b8 body=1544 status=ok
// SIG undefined FUN_147d391b8(void)

void FUN_147d391b8(undefined8 ******param_1,undefined8 param_2,undefined8 *****param_3,
                  undefined8 ******param_4,undefined8 param_5,longlong param_6)

{
  undefined8 ******ppppppuVar1;
  int iVar2;
  undefined8 ****ppppuVar3;
  uint uVar4;
  int *piVar5;
  undefined4 *puVar6;
  int iVar7;
  longlong lVar8;
  undefined8 ******ppppppuVar9;
  longlong lVar10;
  undefined8 ******ppppppuVar11;
  uint uVar12;
  undefined *puVar13;
  int iVar14;
  longlong lVar15;
  undefined8 *****pppppuVar16;
  longlong *plVar17;
  undefined1 auStack_2e8 [32];
  undefined8 *****local_2c8;
  longlong local_2c0;
  int local_2b4;
  undefined8 local_2b0;
  undefined8 *****local_2a8;
  int local_29c;
  undefined8 ****local_298;
  int local_28c;
  undefined8 *****local_288;
  int *local_280;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_2e8;
  iVar14 = *(int *)(param_6 + 8);
  ppppppuVar1 = param_4 + 0xee;
  local_2b0 = param_2;
  local_298 = param_3;
  if (*(int *)(param_4 + 0xef) != *(int *)((longlong)param_4 + 0x7a4)) {
    ppppppuVar9 = param_4 + 0xf5;
    if ((undefined8 ******)param_4[0xf6] != (undefined8 ******)0x0) {
      ppppppuVar9 = (undefined8 ******)param_4[0xf6];
    }
    iVar7 = *(int *)((longlong)ppppppuVar9 +
                    (ulonglong)
                    (*(int *)(param_4 + 0xf7) - 1U &
                    (int)param_3 + (int)((ulonglong)param_3 >> 0x20) * 0x17) * 4);
    if (iVar7 != -1) {
      do {
        pppppuVar16 = *ppppppuVar1 + (longlong)iVar7 * 3;
        if ((undefined8 *****)*pppppuVar16 == param_3) {
          if (pppppuVar16 != (undefined8 *****)0x0) {
            iVar7 = *(int *)(pppppuVar16 + 1);
            pppppuVar16 = param_4[0xf8];
            piVar5 = (int *)((longlong)iVar7 + (longlong)pppppuVar16);
            goto LAB_147d3929d;
          }
          break;
        }
        iVar7 = *(int *)(pppppuVar16 + 2);
      } while (iVar7 != -1);
    }
  }
  ppppppuVar9 = param_4 + 0xf8;
  iVar7 = *(int *)(param_4 + 0xf9);
  *(int *)(param_4 + 0xf9) = iVar7 + 8;
  if ((uint)(*(int *)((longlong)param_4 + 0x7cc) - iVar7) < 8) {
    FUN_1447403be(ppppppuVar9,iVar7);
  }
  *(undefined8 *)((longlong)*ppppppuVar9 + (longlong)iVar7) = 0;
  local_280 = &local_28c;
  local_288 = &local_298;
  local_28c = iVar7;
  FUN_1402eaea6(ppppppuVar1,&local_2a8,&local_288,0);
  piVar5 = (int *)((longlong)*ppppppuVar9 + (longlong)local_28c);
  *(undefined4 *)((longlong)*ppppppuVar9 + (longlong)local_28c) = 1;
  pppppuVar16 = *ppppppuVar9;
  iVar7 = local_28c;
LAB_147d3929d:
  lVar15 = (longlong)(iVar7 + 4);
  iVar7 = *piVar5;
  if (iVar7 == 0) {
    plVar17 = (longlong *)0x0;
  }
  else {
    *(undefined4 *)((longlong)pppppuVar16 + lVar15) = 0;
    if (DAT_14cb08ad8 != DAT_14cb08b04) {
      uVar4 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
              -0x7a143595;
      uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
      puVar13 = &DAT_14cb08b08;
      if (DAT_14cb08b10 != (undefined *)0x0) {
        puVar13 = DAT_14cb08b10;
      }
      iVar2 = *(int *)(puVar13 + (ulonglong)(DAT_14cb08b18 - 1U & (uVar4 >> 0x10 ^ uVar4)) * 4);
      while (iVar2 != -1) {
        lVar8 = DAT_14cb08ad0 + (longlong)iVar2 * 0x20;
        if (*(undefined8 *******)(DAT_14cb08ad0 + (longlong)iVar2 * 0x20) == param_1)
        goto LAB_147d392c9;
        iVar2 = *(int *)(lVar8 + 0x18);
      }
    }
    lVar8 = 0;
LAB_147d392c9:
    plVar17 = (longlong *)(lVar8 + 8);
    if (lVar8 == 0) {
      plVar17 = (longlong *)0x0;
    }
    if ((plVar17 != (longlong *)0x0) && (0 < *(int *)(param_1 + 10))) {
      lVar8 = 0xd;
      lVar10 = 0;
      do {
        if (*(int *)(*plVar17 + -0x2c + lVar8 * 4) - *(int *)(*plVar17 + lVar8 * 4) <
            *(int *)((longlong)param_1[9] + lVar10 * 4)) break;
        lVar10 = lVar10 + 1;
        *(int *)((longlong)pppppuVar16 + lVar15) = (int)lVar10;
        lVar8 = lVar8 + 0x14;
      } while (lVar10 < *(int *)(param_1 + 10));
    }
    *piVar5 = 0;
  }
  lVar8 = (longlong)*(int *)((longlong)pppppuVar16 + lVar15);
  if ((*(int *)((longlong)pppppuVar16 + lVar15) < *(int *)(param_1 + 6)) &&
     (param_1[5][lVar8] != (undefined8 ****)0x0)) {
    local_2b4 = iVar14;
    FUN_147d36b2c(&local_288,param_5);
    FUN_14795c0c4(&local_288,param_1,local_298);
    ppppuVar3 = param_1[5][*(int *)((longlong)pppppuVar16 + lVar15)];
    uVar4 = ((uint)((ulonglong)ppppuVar3 >> 0x14) & 0xffff ^ (uint)((ulonglong)ppppuVar3 >> 4)) *
            -0x7a143595;
    uVar12 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
    uVar12 = uVar12 >> 0x10 ^ uVar12;
    uVar4 = ((uint)((ulonglong)local_298 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_298 >> 4)) *
            -0x7a143595;
    uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
    uVar4 = uVar4 >> 0x10 ^ uVar4;
    local_2c0 = param_6;
    local_2c8 = &local_288;
    (*(code *)(*ppppuVar3)[0x5c])
              (ppppuVar3,local_2b0,
               (uVar4 >> 2) + uVar4 * 0x40 + -0x61c88647 +
               ((uVar12 >> 2) + 0x9e3779b9 +
                uVar12 * 0x40 + *(int *)((longlong)pppppuVar16 + lVar15) ^ uVar12) ^ uVar4,param_4);
    FUN_1478b5da6(&local_288);
    iVar14 = local_2b4;
  }
  iVar14 = *(int *)(param_6 + 8) - iVar14;
  local_29c = iVar14;
  if (iVar7 == 0) {
    if (0 < iVar14) {
      if (plVar17 == (longlong *)0x0) {
        local_288 = &local_2a8;
        local_2a8 = param_1;
        FUN_147d48ed8(&local_28c);
        plVar17 = (longlong *)(DAT_14cb08ad0 + (longlong)local_28c * 0x20 + 8);
        FUN_147d397c2(plVar17,*(int *)(param_1 + 10) + 1);
      }
      uVar4 = ((uint)((ulonglong)param_4 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_4 >> 4)) *
              -0x7a143595;
      uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
      local_288 = param_4;
      piVar5 = (int *)FUN_147d49a6c(lVar8 * 0x50 + *plVar17,uVar4 >> 0x10 ^ uVar4);
      *piVar5 = iVar14;
    }
  }
  else {
    ppppppuVar9 = param_4 + 0xf8;
    if (*(int *)(param_4 + 0xef) != *(int *)((longlong)param_4 + 0x7a4)) {
      ppppppuVar11 = param_4 + 0xf5;
      if ((undefined8 ******)param_4[0xf6] != (undefined8 ******)0x0) {
        ppppppuVar11 = (undefined8 ******)param_4[0xf6];
      }
      iVar14 = *(int *)((longlong)ppppppuVar11 +
                       (ulonglong)
                       (*(int *)(param_4 + 0xf7) - 1U &
                       (int)local_298 + (int)((ulonglong)local_298 >> 0x20) * 0x17) * 4);
      if (iVar14 != -1) {
        do {
          pppppuVar16 = *ppppppuVar1 + (longlong)iVar14 * 3;
          if (*pppppuVar16 == local_298) {
            if (pppppuVar16 != (undefined8 *****)0x0) {
              puVar6 = (undefined4 *)((longlong)*(int *)(pppppuVar16 + 1) + (longlong)*ppppppuVar9);
              goto LAB_147d393d4;
            }
            break;
          }
          iVar14 = *(int *)(pppppuVar16 + 2);
        } while (iVar14 != -1);
      }
    }
    iVar14 = *(int *)(param_4 + 0xf9);
    *(int *)(param_4 + 0xf9) = iVar14 + 8;
    if ((uint)(*(int *)((longlong)param_4 + 0x7cc) - iVar14) < 8) {
      FUN_1447403be(ppppppuVar9,iVar14);
    }
    *(undefined8 *)((longlong)*ppppppuVar9 + (longlong)iVar14) = 0;
    local_280 = &local_28c;
    local_288 = &local_298;
    local_28c = iVar14;
    FUN_1402eaea6(ppppppuVar1,&local_2a8,&local_288,0);
    puVar6 = (undefined4 *)((longlong)*ppppppuVar9 + (longlong)local_28c);
    *(undefined4 *)((longlong)*ppppppuVar9 + (longlong)local_28c) = 1;
LAB_147d393d4:
    if (local_29c == 0) {
      *puVar6 = 1;
    }
    else {
      if (plVar17 == (longlong *)0x0) {
        local_2a8 = param_1;
        local_288 = &local_2a8;
        FUN_147d48ed8(&local_28c);
        plVar17 = (longlong *)(DAT_14cb08ad0 + (longlong)local_28c * 0x20 + 8);
        FUN_147d397c2(plVar17,*(int *)(param_1 + 10) + 1);
      }
      local_280 = &local_29c;
      local_2a8 = param_4;
      local_288 = &local_2a8;
      FUN_147d495e4(lVar8 * 0x50 + *plVar17,&local_28c);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_2e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d397c2 FUN_147d397c2 body=122 status=ok
// SIG undefined FUN_147d397c2(void)

void FUN_147d397c2(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_147d4943c(param_1,iVar1);
    }
    FUN_147d49403((longlong)iVar1 * 0x50 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_147d494d0(param_1,param_2,iVar1 - param_2);
    FUN_147d49536(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 147d3983e FUN_147d3983e body=44 status=ok
// SIG undefined FUN_147d3983e(void)

void FUN_147d3983e(longlong *param_1)

{
  (**(code **)(*param_1 + 0x310))(param_1,(int)param_1[6]);
                    /* WARNING: Could not recover jumptable at 0x000147d39867. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x310))(param_1,(int)param_1[6]);
  return;
}



// FUNCTION 147d3986a FUN_147d3986a body=148 status=ok
// SIG undefined FUN_147d3986a(void)

void FUN_147d3986a(longlong param_1,int param_2)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  undefined4 *puVar5;
  
  FUN_147d38df2();
  plVar1 = (longlong *)(param_1 + 0x48);
  iVar2 = *(int *)(param_1 + 0x50);
  uVar3 = iVar2 + 1;
  *(uint *)(param_1 + 0x50) = uVar3;
  if (param_2 < iVar2) {
    if (*(uint *)(param_1 + 0x54) < uVar3) {
      FUN_1446f48e2(plVar1,iVar2);
    }
    lVar4 = (longlong)param_2;
    memmove((void *)(*plVar1 + lVar4 * 4 + 4),(void *)(*plVar1 + lVar4 * 4),
            (ulonglong)(uint)(iVar2 - param_2) << 2);
    puVar5 = (undefined4 *)(lVar4 * 4 + *plVar1);
  }
  else {
    if (*(uint *)(param_1 + 0x54) < uVar3) {
      FUN_1446f48e2(plVar1,iVar2);
    }
    puVar5 = (undefined4 *)((longlong)iVar2 * 4 + *plVar1);
  }
  *puVar5 = 1;
  FUN_147d365a2(param_1,param_2);
  return;
}



// FUNCTION 147d398fe FUN_147d398fe body=111 status=ok
// SIG undefined FUN_147d398fe(void)

void FUN_147d398fe(longlong param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  FUN_147d38df2();
  uVar1 = *(uint *)(param_1 + 0x50);
  if (0 < (int)uVar1) {
    uVar2 = param_2;
    if ((uVar1 != param_2) && (uVar2 = uVar1, ~param_2 + uVar1 != 0)) {
      memmove((void *)(*(longlong *)(param_1 + 0x48) + (longlong)(int)param_2 * 4),
              (void *)(*(longlong *)(param_1 + 0x48) + (longlong)(int)param_2 * 4 + 4),
              (longlong)(int)(~param_2 + uVar1) << 2);
      uVar2 = *(uint *)(param_1 + 0x50);
    }
    *(uint *)(param_1 + 0x50) = uVar2 - 1;
    FUN_14479f406(param_1 + 0x48);
  }
  FUN_147d36614(param_1,param_2);
  return;
}



// FUNCTION 147d39978 FUN_147d39978 body=827 status=ok
// SIG undefined FUN_147d39978(void)

void FUN_147d39978(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4,
                  undefined8 param_5,undefined8 param_6)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auStack_2e8 [32];
  longlong **local_2c8;
  undefined8 local_2c0;
  int local_2ac;
  longlong local_2a8;
  longlong *local_2a0;
  longlong *local_298;
  int local_28c;
  longlong *local_288;
  int *local_280;
  byte local_4c;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_2e8;
  plVar1 = (longlong *)(param_4 + 0x770);
  local_2a8 = param_3;
  if (*(int *)(param_4 + 0x778) != *(int *)(param_4 + 0x7a4)) {
    lVar5 = param_4 + 0x7a8;
    if (*(longlong *)(param_4 + 0x7b0) != 0) {
      lVar5 = *(longlong *)(param_4 + 0x7b0);
    }
    iVar4 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(param_4 + 0x7b8) - 1U &
                             (int)param_3 + (int)((ulonglong)param_3 >> 0x20) * 0x17) * 4);
    if (iVar4 != -1) {
      do {
        plVar2 = (longlong *)(*plVar1 + (longlong)iVar4 * 0x18);
        if (*plVar2 == param_3) {
          if (plVar2 != (longlong *)0x0) {
            iVar4 = (int)plVar2[1];
            lVar5 = *(longlong *)(param_4 + 0x7c0);
            piVar3 = (int *)(iVar4 + lVar5);
            goto LAB_147d39a45;
          }
          break;
        }
        iVar4 = (int)plVar2[2];
      } while (iVar4 != -1);
    }
  }
  plVar2 = (longlong *)(param_4 + 0x7c0);
  iVar4 = *(int *)(param_4 + 0x7c8);
  *(int *)(param_4 + 0x7c8) = iVar4 + 8;
  if ((uint)(*(int *)(param_4 + 0x7cc) - iVar4) < 8) {
    FUN_1447403be(plVar2,iVar4);
  }
  *(undefined8 *)(*plVar2 + (longlong)iVar4) = 0;
  local_280 = &local_28c;
  local_288 = &local_2a8;
  local_28c = iVar4;
  FUN_1402eaea6(plVar1,&local_2a0,&local_288,0);
  piVar3 = (int *)(*plVar2 + (longlong)local_28c);
  *(undefined4 *)(*plVar2 + (longlong)local_28c) = 1;
  lVar5 = *plVar2;
  iVar4 = local_28c;
LAB_147d39a45:
  if (*piVar3 != 0) {
    *(undefined4 *)(lVar5 + (iVar4 + 4)) = 0;
    *piVar3 = 0;
  }
  if (((*(byte *)(param_1 + 0x4c) & 1) != 0) || (-1 < *(char *)(param_4 + 0x198))) {
    FUN_147d36b2c(&local_288,param_5);
    FUN_14795c0c4(&local_288,param_1,local_2a8);
    local_4c = local_4c | 0x40;
    local_2c0 = param_6;
    local_2c8 = &local_288;
    FUN_147d363e4(param_1,param_2,local_2a8,param_4);
    if ((*(byte *)(param_4 + 0x198) & 0x10) != 0) {
      plVar2 = (longlong *)(param_4 + 0x7c0);
      if (*(int *)(param_4 + 0x778) != *(int *)(param_4 + 0x7a4)) {
        lVar5 = param_4 + 0x7a8;
        if (*(longlong *)(param_4 + 0x7b0) != 0) {
          lVar5 = *(longlong *)(param_4 + 0x7b0);
        }
        iVar4 = *(int *)(lVar5 + (ulonglong)
                                 (*(int *)(param_4 + 0x7b8) - 1U &
                                 (int)local_2a8 + (int)((ulonglong)local_2a8 >> 0x20) * 0x17) * 4);
        if (iVar4 != -1) {
          do {
            plVar6 = (longlong *)(*plVar1 + (longlong)iVar4 * 0x18);
            if (*plVar6 == local_2a8) {
              if (plVar6 != (longlong *)0x0) {
                plVar6 = plVar6 + 1;
                goto LAB_147d39c4b;
              }
              break;
            }
            iVar4 = (int)plVar6[2];
          } while (iVar4 != -1);
        }
      }
      iVar4 = *(int *)(param_4 + 0x7c8);
      *(int *)(param_4 + 0x7c8) = iVar4 + 8;
      if ((uint)(*(int *)(param_4 + 0x7cc) - iVar4) < 8) {
        FUN_1447403be(plVar2,iVar4);
      }
      *(undefined8 *)(*plVar2 + (longlong)iVar4) = 0;
      plVar6 = (longlong *)&local_2ac;
      local_2a0 = &local_2a8;
      local_2ac = iVar4;
      local_298 = plVar6;
      FUN_1402eaea6(plVar1,&local_28c,&local_2a0,0);
      *(undefined4 *)(*plVar2 + (longlong)local_2ac) = 1;
LAB_147d39c4b:
      if (((*(byte *)(param_1 + 0x4c) & 1) != 0) ||
         (*(int *)(*plVar2 + (longlong)((int)*plVar6 + 4)) < *(int *)(param_1 + 0x48))) {
        FUN_147d39cb4(param_1,local_2a8,param_4);
        *(byte *)(param_4 + 0x198) = *(byte *)(param_4 + 0x198) & 0xef;
      }
    }
    FUN_1478b5da6(&local_288);
  }
  if ((local_40 ^ (ulonglong)auStack_2e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147d39cb4 FUN_147d39cb4 body=881 status=ok
// SIG undefined FUN_147d39cb4(void)

void FUN_147d39cb4(longlong param_1,ulonglong param_2,longlong param_3)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  uStack_50 = 0;
  iVar4 = *(int *)(param_1 + 0x30);
  if (0 < iVar4) {
    uVar6 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
    uVar6 = uVar6 >> 0x10 ^ uVar6;
    lVar8 = 0;
    do {
      uVar3 = uStack_50;
      uVar2 = *(ulonglong *)(*(longlong *)(param_1 + 0x28) + lVar8 * 8);
      if (uVar2 != 0) {
        lVar9 = (longlong)(int)uStack_50;
        uVar5 = (int)uStack_50 + 1;
        uStack_50 = CONCAT44(uStack_50._4_4_,uVar5);
        if (uStack_50._4_4_ < uVar5) {
          FUN_1437010ee(&local_58,uVar3 & 0xffffffff);
        }
        uVar5 = ((uint)(uVar2 >> 0x14) & 0xffff ^ (uint)(uVar2 >> 4)) * -0x7a143595;
        uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
        uVar5 = uVar5 >> 0x10 ^ uVar5;
        *(ulonglong *)(local_58 + lVar9 * 0x10) = uVar2;
        *(ulonglong *)(local_58 + 8 + lVar9 * 0x10) =
             (ulonglong)
             (((int)lVar8 + (uVar5 >> 2) + uVar5 * 0x40 + 0x9e3779b9 ^ uVar5) +
              uVar6 * 0x40 + (uVar6 >> 2) + -0x61c88647 ^ uVar6);
        iVar4 = *(int *)(param_1 + 0x30);
      }
      lVar8 = lVar8 + 1;
    } while (lVar8 < iVar4);
    if (0 < (int)uStack_50) {
      local_60 = param_3 + 0x7a8;
      lVar8 = 0;
      local_68 = param_3;
      do {
        lVar9 = *(longlong *)(local_58 + lVar8 * 0x10);
        uVar2 = *(ulonglong *)(local_58 + 8 + lVar8 * 0x10);
        if (*(int *)(local_68 + 0x778) != *(int *)(local_68 + 0x7a4)) {
          lVar10 = *(longlong *)(local_68 + 0x7b0);
          if (*(longlong *)(local_68 + 0x7b0) == 0) {
            lVar10 = local_60;
          }
          iVar4 = *(int *)(lVar10 + (ulonglong)
                                    (*(int *)(local_68 + 0x7b8) - 1U &
                                    (int)uVar2 + (int)(uVar2 >> 0x20) * 0x17) * 4);
          if (iVar4 != -1) {
            do {
              puVar1 = (ulonglong *)(*(longlong *)(local_68 + 0x770) + (longlong)iVar4 * 0x18);
              if (*puVar1 == uVar2) {
                if (puVar1 + 1 != (ulonglong *)0x0 && puVar1 != (ulonglong *)0x0) {
                  *(undefined1 *)(*(longlong *)(local_68 + 0x7c0) + (longlong)(int)puVar1[1]) = 1;
                }
                break;
              }
              iVar4 = (int)puVar1[2];
            } while (iVar4 != -1);
          }
        }
        iVar4 = *(int *)(lVar9 + 0x30);
        if (iVar4 == 0) {
          lVar10 = FUN_145b5ac1e();
          if (((*(int *)(lVar10 + 0x38) <= *(int *)(*(longlong *)(lVar9 + 0x10) + 0x38)) &&
              (*(longlong *)
                (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) +
                (longlong)*(int *)(lVar10 + 0x38) * 8) == lVar10 + 0x30)) &&
             (lVar9 = FUN_1478b6144(local_68,uVar2), lVar9 != 0)) {
            *(uint *)(lVar9 + 0xcc) = *(uint *)(lVar9 + 0xcc) & 0xffffff1f | 0x80;
          }
        }
        else if (0 < iVar4) {
          uVar6 = ((uint)(uVar2 >> 0x14) & 0xffff ^ (uint)(uVar2 >> 4)) * -0x7a143595;
          uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
          uVar6 = uVar6 >> 0x10 ^ uVar6;
          lVar10 = 0;
          do {
            uVar3 = uStack_50;
            uVar2 = *(ulonglong *)(*(longlong *)(lVar9 + 0x28) + lVar10 * 8);
            if (uVar2 != 0) {
              lVar7 = (longlong)(int)uStack_50;
              uVar5 = (int)uStack_50 + 1;
              uStack_50 = CONCAT44(uStack_50._4_4_,uVar5);
              if (uStack_50._4_4_ < uVar5) {
                FUN_1437010ee(&local_58,uVar3 & 0xffffffff);
              }
              uVar5 = ((uint)(uVar2 >> 0x14) & 0xffff ^ (uint)(uVar2 >> 4)) * -0x7a143595;
              uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
              uVar5 = uVar5 >> 0x10 ^ uVar5;
              *(ulonglong *)(local_58 + lVar7 * 0x10) = uVar2;
              *(ulonglong *)(local_58 + 8 + lVar7 * 0x10) =
                   (ulonglong)
                   (((int)lVar10 + (uVar5 >> 2) + uVar5 * 0x40 + 0x9e3779b9 ^ uVar5) +
                    uVar6 * 0x40 + (uVar6 >> 2) + -0x61c88647 ^ uVar6);
              iVar4 = *(int *)(lVar9 + 0x30);
            }
            lVar10 = lVar10 + 1;
          } while (lVar10 < iVar4);
        }
        lVar8 = lVar8 + 1;
      } while (lVar8 < (int)uStack_50);
    }
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147d3a026 FUN_147d3a026 body=445 status=ok
// SIG undefined FUN_147d3a026(void)

undefined8 FUN_147d3a026(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined1 auStack_88 [36];
  int local_64;
  longlong local_60;
  longlong *local_58;
  int *local_50;
  undefined1 local_44 [4];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar2 = *(longlong *)(param_2 + 0x60);
  local_60 = FUN_14795c140(param_2 + 0x50,param_1);
  if (*(int *)(lVar2 + 0x778) != *(int *)(lVar2 + 0x7a4)) {
    lVar3 = lVar2 + 0x7a8;
    if (*(longlong *)(lVar2 + 0x7b0) != 0) {
      lVar3 = *(longlong *)(lVar2 + 0x7b0);
    }
    iVar5 = *(int *)(lVar3 + (ulonglong)
                             (*(int *)(lVar2 + 0x7b8) - 1U &
                             (int)local_60 + (int)((ulonglong)local_60 >> 0x20) * 0x17) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(*(longlong *)(lVar2 + 0x770) + (longlong)iVar5 * 0x18);
        if (*plVar1 == local_60) {
          if (plVar1 != (longlong *)0x0) {
            iVar5 = (int)plVar1[1];
            lVar3 = *(longlong *)(lVar2 + 0x7c0);
            piVar7 = (int *)(iVar5 + lVar3);
            goto LAB_147d3a0f8;
          }
          break;
        }
        iVar5 = (int)plVar1[2];
      } while (iVar5 != -1);
    }
  }
  plVar1 = (longlong *)(lVar2 + 0x7c0);
  iVar5 = *(int *)(lVar2 + 0x7c8);
  *(int *)(lVar2 + 0x7c8) = iVar5 + 8;
  if ((uint)(*(int *)(lVar2 + 0x7cc) - iVar5) < 8) {
    FUN_1447403be(plVar1,iVar5);
  }
  *(undefined8 *)(*plVar1 + (longlong)iVar5) = 0;
  local_50 = &local_64;
  local_58 = &local_60;
  local_64 = iVar5;
  FUN_1402eaea6((longlong *)(lVar2 + 0x770),local_44,&local_58,0);
  piVar7 = (int *)(*plVar1 + (longlong)local_64);
  *(undefined4 *)(*plVar1 + (longlong)local_64) = 1;
  lVar3 = *plVar1;
  iVar5 = local_64;
LAB_147d3a0f8:
  if ((*piVar7 == 0) &&
     (((*(byte *)(param_1 + 0x4c) & 1) != 0 ||
      (iVar6 = *(int *)(lVar3 + (iVar5 + 4)) + 1, *(int *)(lVar3 + (iVar5 + 4)) = iVar6,
      iVar6 < *(int *)(param_1 + 0x48))))) {
    FUN_147d39cb4(param_1,local_60,lVar2);
    *(byte *)(param_2 + 0xcc) = *(byte *)(param_2 + 0xcc) & 0x9f;
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
  }
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 147d3a1e4 FUN_147d3a1e4 body=80 status=ok
// SIG undefined FUN_147d3a1e4(void)

undefined8 FUN_147d3a1e4(longlong param_1)

{
  int iVar1;
  float fVar2;
  undefined4 uVar4;
  undefined8 uVar3;
  
  fVar2 = 0.0;
  uVar4 = 0;
  if (0 < *(int *)(param_1 + 0x30)) {
    if ((*(byte *)(param_1 + 0x4c) & 1) == 0) {
      if ((longlong *)**(longlong **)(param_1 + 0x28) != (longlong *)0x0) {
        iVar1 = *(int *)(param_1 + 0x48);
        uVar3 = (**(code **)(*(longlong *)**(longlong **)(param_1 + 0x28) + 0x2b8))(0);
        uVar4 = (undefined4)((ulonglong)uVar3 >> 0x20);
        fVar2 = (float)uVar3 * (float)iVar1;
      }
    }
    else {
      fVar2 = 10000.0;
      uVar4 = 0;
    }
  }
  return CONCAT44(uVar4,fVar2);
}



// FUNCTION 147d3a250 FUN_147d3a250 body=120 status=ok
// SIG undefined FUN_147d3a250(void)

ulonglong FUN_147d3a250(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_1 != 0) {
    lVar1 = FUN_145b5ac1e();
    if (((*(int *)(*(longlong *)(param_1 + 0x10) + 0x38) < *(int *)(lVar1 + 0x38)) ||
        (*(longlong *)
          (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) +
          (longlong)*(int *)(lVar1 + 0x38) * 8) != lVar1 + 0x30)) ||
       (*(longlong *)(param_1 + 0x70) == 0)) {
      lVar1 = 0;
      do {
        if (*(int *)(param_1 + 0x30) <= lVar1) {
          return 0;
        }
        uVar2 = FUN_147d3a250(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + lVar1 * 8));
        lVar1 = lVar1 + 1;
      } while ((int)uVar2 == 0);
    }
    else {
      uVar2 = (ulonglong)(((*(byte *)(*(longlong *)(param_1 + 0x70) + 0x34c) & 0x20) == 0) + 1);
    }
  }
  return uVar2;
}



// FUNCTION 147d3a2c8 FUN_147d3a2c8 body=44 status=ok
// SIG undefined FUN_147d3a2c8(void)

void FUN_147d3a2c8(longlong *param_1)

{
  (**(code **)(*param_1 + 0x310))(param_1,(int)param_1[6]);
                    /* WARNING: Could not recover jumptable at 0x000147d3a2f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x310))(param_1,(int)param_1[6]);
  return;
}



// FUNCTION 147d3a2f4 FUN_147d3a2f4 body=323 status=ok
// SIG undefined FUN_147d3a2f4(void)

void FUN_147d3a2f4(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  int iVar8;
  
  FUN_1446e0b6e();
  if (DAT_14cb0d2b0 != 0) {
    uVar4 = *(uint *)(param_1 + 0xc);
    if ((int)uVar4 < DAT_14c9647dc) {
      lVar6 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
    }
    else {
      lVar6 = 0;
    }
    if (((*(uint *)(lVar6 + 8) >> 0x1e & 1) == 0) && (1 < *(int *)(param_1 + 0x30))) {
      FUN_1400337aa(*(undefined8 *)(param_1 + 0x20));
      uVar7 = (ulonglong)*(int *)(param_1 + 0x30);
      if (0 < (longlong)uVar7) {
        iVar8 = -*(int *)(param_1 + 0x30);
        lVar6 = uVar7 * 8;
        do {
          lVar6 = lVar6 + -8;
          lVar1 = *(longlong *)(param_1 + 0x28);
          if (*(longlong *)(lVar1 + -8 + uVar7 * 8) != 0) {
            uVar5 = FUN_145b5ac1e();
            cVar3 = FUN_144a7ca96(lVar6 + lVar1,uVar5);
            if ((((cVar3 != '\0') && (lVar1 = *(longlong *)(lVar1 + -8 + uVar7 * 8), lVar1 != 0)) &&
                (lVar1 = *(longlong *)(lVar1 + 0x70), lVar1 != 0)) &&
               ((*(uint *)(DAT_14cb0d2b0 + 0xd80) & 1) !=
                (uint)((*(uint *)(lVar1 + 0x34c) >> 5 & 1) != 0))) {
              uVar4 = *(uint *)(param_1 + 0x30);
              if (uVar7 != uVar4) {
                memmove((void *)(*(longlong *)(param_1 + 0x28) + uVar7 * 8 + -8),
                        (void *)(*(longlong *)(param_1 + 0x28) + uVar7 * 8),
                        (longlong)(int)(uVar4 + iVar8) << 3);
                uVar4 = *(uint *)(param_1 + 0x30);
              }
              *(uint *)(param_1 + 0x30) = uVar4 - 1;
              FUN_147d489fe((longlong *)(param_1 + 0x28));
            }
          }
          iVar8 = iVar8 + 1;
          bVar2 = 1 < uVar7;
          uVar7 = uVar7 - 1;
        } while (bVar2);
      }
    }
  }
  return;
}



// FUNCTION 147d3a43c FUN_147d3a43c body=376 status=ok
// SIG undefined FUN_147d3a43c(void)

void FUN_147d3a43c(longlong param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4,
                  longlong param_5,undefined8 param_6)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  undefined1 auStack_2b8 [32];
  undefined1 *local_298;
  undefined8 local_290;
  undefined1 local_288 [152];
  float local_1f0;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_2b8;
  FUN_147d36b2c(local_288);
  iVar2 = *(int *)(param_1 + 0x30);
  if (0 < iVar2) {
    uVar4 = ((uint)(param_3 >> 0x14) & 0xffff ^ (uint)(param_3 >> 4)) * -0x7a143595;
    uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
    uVar4 = uVar4 >> 0x10 ^ uVar4;
    lVar5 = 0;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0x28) + lVar5 * 8) != 0) {
        local_1f0 = *(float *)(param_5 + 0x98) *
                    *(float *)(*(longlong *)(param_1 + 0x48) + lVar5 * 4);
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x28) + lVar5 * 8);
        uVar3 = ((uint)((ulonglong)plVar1 >> 0x14) & 0xffff ^ (uint)((ulonglong)plVar1 >> 4)) *
                -0x7a143595;
        uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
        uVar3 = uVar3 >> 0x10 ^ uVar3;
        local_290 = param_6;
        local_298 = local_288;
        (**(code **)(*plVar1 + 0x2e0))
                  (plVar1,param_2,
                   ((uVar3 >> 2) + uVar3 * 0x40 + (int)lVar5 + 0x9e3779b9 ^ uVar3) +
                   uVar4 * 0x40 + (uVar4 >> 2) + -0x61c88647 ^ uVar4,param_4);
        iVar2 = *(int *)(param_1 + 0x30);
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 < iVar2);
  }
  FUN_1478b5da6(local_288);
  if ((local_48 ^ (ulonglong)auStack_2b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d3a5b6 FUN_147d3a5b6 body=44 status=ok
// SIG undefined FUN_147d3a5b6(void)

void FUN_147d3a5b6(longlong *param_1)

{
  (**(code **)(*param_1 + 0x310))(param_1,(int)param_1[6]);
                    /* WARNING: Could not recover jumptable at 0x000147d3a5df. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x310))(param_1,(int)param_1[6]);
  return;
}



// FUNCTION 147d3a5e2 FUN_147d3a5e2 body=103 status=ok
// SIG undefined FUN_147d3a5e2(void)

void FUN_147d3a5e2(longlong param_1,int param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  
  FUN_147d365a2();
  plVar1 = (longlong *)(param_1 + 0x48);
  iVar2 = *(int *)(param_1 + 0x50);
  *(uint *)(param_1 + 0x50) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x54) < iVar2 + 1U) {
    FUN_14475e4ac(plVar1,iVar2);
  }
  lVar3 = (longlong)param_2;
  memmove((void *)(*plVar1 + lVar3 * 4 + 4),(void *)(*plVar1 + lVar3 * 4),
          (ulonglong)(uint)(iVar2 - param_2) << 2);
  *(undefined4 *)(*plVar1 + lVar3 * 4) = 0x3f800000;
  return;
}



// FUNCTION 147d3a64a FUN_147d3a64a body=89 status=ok
// SIG undefined FUN_147d3a64a(void)

void FUN_147d3a64a(longlong param_1,uint param_2)

{
  int iVar1;
  
  FUN_147d36614();
  iVar1 = *(int *)(param_1 + 0x50);
  if (~param_2 + iVar1 != 0) {
    memmove((void *)(*(longlong *)(param_1 + 0x48) + (longlong)(int)param_2 * 4),
            (void *)(*(longlong *)(param_1 + 0x48) + (longlong)(int)param_2 * 4 + 4),
            (longlong)(int)(~param_2 + iVar1) << 2);
    iVar1 = *(int *)(param_1 + 0x50);
  }
  *(int *)(param_1 + 0x50) = iVar1 + -1;
  FUN_1401fef06(param_1 + 0x48);
  return;
}



// FUNCTION 147d3a6a8 FUN_147d3a6a8 body=649 status=ok
// SIG undefined FUN_147d3a6a8(void)

void FUN_147d3a6a8(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4,
                  undefined8 param_5,undefined8 param_6)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_2d8 [32];
  longlong **local_2b8;
  undefined8 local_2b0;
  int local_29c;
  longlong local_298;
  undefined1 local_28c [4];
  longlong *local_288;
  int *local_280;
  float local_1f0;
  float local_1d0;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_2d8;
  local_298 = param_3;
  if (*(int *)(param_4 + 0x778) != *(int *)(param_4 + 0x7a4)) {
    lVar5 = param_4 + 0x7a8;
    if (*(longlong *)(param_4 + 0x7b0) != 0) {
      lVar5 = *(longlong *)(param_4 + 0x7b0);
    }
    iVar4 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(param_4 + 0x7b8) - 1U &
                             (int)param_3 + (int)((ulonglong)param_3 >> 0x20) * 0x17) * 4);
    if (iVar4 != -1) {
      do {
        plVar1 = (longlong *)(*(longlong *)(param_4 + 0x770) + (longlong)iVar4 * 0x18);
        if (*plVar1 == param_3) {
          if (plVar1 != (longlong *)0x0) {
            iVar4 = (int)plVar1[1];
            lVar5 = *(longlong *)(param_4 + 0x7c0);
            piVar2 = (int *)(iVar4 + lVar5);
            goto LAB_147d3a7ba;
          }
          break;
        }
        iVar4 = (int)plVar1[2];
      } while (iVar4 != -1);
    }
  }
  plVar1 = (longlong *)(param_4 + 0x7c0);
  iVar4 = *(int *)(param_4 + 0x7c8);
  *(int *)(param_4 + 0x7c8) = iVar4 + 0xc;
  if ((uint)(*(int *)(param_4 + 0x7cc) - iVar4) < 0xc) {
    FUN_1447403be(plVar1,iVar4);
  }
  lVar5 = *plVar1;
  *(undefined4 *)(lVar5 + 8 + (longlong)iVar4) = 0;
  *(undefined8 *)(lVar5 + iVar4) = 0;
  local_280 = &local_29c;
  local_288 = &local_298;
  local_29c = iVar4;
  FUN_1402eaea6((longlong *)(param_4 + 0x770),local_28c,&local_288,0);
  piVar2 = (int *)(*plVar1 + (longlong)local_29c);
  *(undefined4 *)(*plVar1 + (longlong)local_29c) = 1;
  lVar5 = *plVar1;
  iVar4 = local_29c;
LAB_147d3a7ba:
  lVar6 = (longlong)(iVar4 + 4);
  if (*piVar2 != 0) {
    uVar3 = *(int *)(param_1 + 0x3c) * 0xbb38435 + 0x3619636b;
    *(uint *)(param_1 + 0x3c) = uVar3;
    *(float *)(lVar5 + lVar6) =
         ((float)(uVar3 >> 9 | 0x3f800000) + -1.0) *
         (*(float *)(param_1 + 0x50) - *(float *)(param_1 + 0x54)) + *(float *)(param_1 + 0x54);
    uVar3 = *(int *)(param_1 + 0x3c) * 0xbb38435 + 0x3619636b;
    *(uint *)(param_1 + 0x3c) = uVar3;
    *(float *)(lVar5 + 4 + lVar6) =
         ((float)(uVar3 >> 9 | 0x3f800000) + -1.0) *
         (*(float *)(param_1 + 0x48) - *(float *)(param_1 + 0x4c)) + *(float *)(param_1 + 0x4c);
    *piVar2 = 0;
  }
  FUN_147d36b2c(&local_288,param_5);
  local_1f0 = *(float *)(lVar5 + lVar6) * local_1f0;
  local_1d0 = *(float *)(lVar5 + 4 + lVar6) * local_1d0;
  local_2b0 = param_6;
  local_2b8 = &local_288;
  FUN_147d363e4(param_1,param_2,local_298,param_4);
  FUN_1478b5da6(&local_288);
  if ((local_48 ^ (ulonglong)auStack_2d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147d3a932 FUN_147d3a932 body=315 status=ok
// SIG undefined FUN_147d3a932(void)

float FUN_147d3a932(undefined8 *param_1,longlong param_2)

{
  float fVar1;
  char cVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auStack_e8 [40];
  undefined5 local_c0;
  undefined3 uStack_bb;
  float local_b8;
  undefined1 uStack_b4;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined1 uStack_50;
  undefined7 uStack_4f;
  undefined1 uStack_48;
  undefined8 uStack_47;
  undefined8 local_3c;
  undefined8 local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_b0 = 0;
  local_3c = 0;
  local_c0 = 0;
  uStack_bb = 0;
  local_b8 = 0.0;
  uStack_b4 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  uStack_4f = 0;
  uStack_48 = 0;
  uStack_47 = 0;
  local_30 = 0;
  uStack_28 = 0;
  cVar2 = (**(code **)(**(longlong **)(param_2 + 0x188) + 0x28))
                    (*(longlong **)(param_2 + 0x188),*param_1);
  if (cVar2 == '\0') {
    local_b8 = *(float *)(param_1 + 1);
  }
  if (*(char *)((longlong)param_1 + 0x1c) == '\x01') {
    local_b8 = ABS(local_b8);
  }
  else {
    fVar6 = local_b8;
    if (*(char *)((longlong)param_1 + 0x1c) == '\x02') goto LAB_147d3aa36;
  }
  fVar6 = *(float *)((longlong)param_1 + 0xc);
  fVar1 = *(float *)(param_1 + 2);
  if (fVar1 <= fVar6) {
    fVar3 = *(float *)((longlong)param_1 + 0x14);
    fVar4 = 0.0;
  }
  else {
    fVar3 = *(float *)((longlong)param_1 + 0x14);
    fVar4 = (*(float *)(param_1 + 3) - fVar3) / (fVar1 - fVar6);
  }
  fVar5 = local_b8;
  if (fVar1 <= local_b8) {
    fVar5 = fVar1;
  }
  if (fVar5 <= fVar6) {
    fVar5 = fVar6;
  }
  fVar6 = (fVar5 - fVar6) * fVar4 + fVar3;
LAB_147d3aa36:
  FUN_147046490(&local_c0);
  if ((local_20 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return fVar6;
}



// FUNCTION 147d3aa6e FUN_147d3aa6e body=212 status=ok
// SIG undefined FUN_147d3aa6e(void)

void FUN_147d3aa6e(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  float fVar1;
  undefined1 auStack_2a8 [32];
  undefined1 *local_288;
  undefined8 local_280;
  undefined1 local_278 [152];
  float local_1e0;
  float local_1c0;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_2a8;
  FUN_147d36b2c(local_278,param_5);
  fVar1 = (float)FUN_147d3a932(param_1 + 0x68,param_4);
  local_1e0 = fVar1 * local_1e0;
  fVar1 = (float)FUN_147d3a932(param_1 + 0x48,param_4);
  local_1c0 = fVar1 * local_1c0;
  local_280 = param_6;
  local_288 = local_278;
  FUN_147d363e4(param_1,param_2,param_3,param_4);
  FUN_1478b5da6(local_278);
  if ((local_38 ^ (ulonglong)auStack_2a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d3ab54 FUN_147d3ab54 body=863 status=ok
// SIG undefined FUN_147d3ab54(void)

void FUN_147d3ab54(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4,
                  undefined8 param_5,undefined8 param_6)

{
  longlong *plVar1;
  undefined8 *puVar2;
  float fVar3;
  int *piVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_2f8 [32];
  longlong **local_2d8;
  undefined8 local_2d0;
  int local_2bc;
  longlong local_2b8;
  undefined1 local_2ac [4];
  longlong *local_2a8;
  int *local_2a0;
  float local_210;
  float local_1f0;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_2f8;
  local_2b8 = param_3;
  if (*(int *)(param_4 + 0x778) != *(int *)(param_4 + 0x7a4)) {
    lVar6 = param_4 + 0x7a8;
    if (*(longlong *)(param_4 + 0x7b0) != 0) {
      lVar6 = *(longlong *)(param_4 + 0x7b0);
    }
    iVar5 = *(int *)(lVar6 + (ulonglong)
                             (*(int *)(param_4 + 0x7b8) - 1U &
                             (int)param_3 + (int)((ulonglong)param_3 >> 0x20) * 0x17) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(*(longlong *)(param_4 + 0x770) + (longlong)iVar5 * 0x18);
        if (*plVar1 == param_3) {
          if (plVar1 != (longlong *)0x0) {
            iVar5 = (int)plVar1[1];
            lVar6 = *(longlong *)(param_4 + 0x7c0);
            piVar4 = (int *)(iVar5 + lVar6);
            goto LAB_147d3ac74;
          }
          break;
        }
        iVar5 = (int)plVar1[2];
      } while (iVar5 != -1);
    }
  }
  plVar1 = (longlong *)(param_4 + 0x7c0);
  iVar5 = *(int *)(param_4 + 0x7c8);
  *(int *)(param_4 + 0x7c8) = iVar5 + 0x14;
  if ((uint)(*(int *)(param_4 + 0x7cc) - iVar5) < 0x14) {
    FUN_1447403be(plVar1,iVar5);
  }
  lVar6 = *plVar1;
  puVar2 = (undefined8 *)(lVar6 + iVar5);
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined4 *)(lVar6 + 0x10 + (longlong)iVar5) = 0;
  local_2a0 = &local_2bc;
  local_2a8 = &local_2b8;
  local_2bc = iVar5;
  FUN_1402eaea6((longlong *)(param_4 + 0x770),local_2ac,&local_2a8,0);
  piVar4 = (int *)(*plVar1 + (longlong)local_2bc);
  *(undefined4 *)(*plVar1 + (longlong)local_2bc) = 1;
  lVar6 = *plVar1;
  iVar5 = local_2bc;
LAB_147d3ac74:
  lVar8 = (longlong)(iVar5 + 4);
  if (*piVar4 != 0) {
    uVar7 = *(int *)(param_1 + 0x3c) * 0xbb38435 + 0x3619636b;
    *(uint *)(param_1 + 0x3c) = uVar7;
    *(float *)(lVar6 + lVar8) =
         ((float)(uVar7 >> 9 | 0x3f800000) + -1.0) *
         (*(float *)(param_1 + 0x4c) - *(float *)(param_1 + 0x50)) + *(float *)(param_1 + 0x50);
    uVar7 = *(int *)(param_1 + 0x3c) * 0xbb38435 + 0x3619636b;
    *(uint *)(param_1 + 0x3c) = uVar7;
    *(float *)(lVar6 + 4 + lVar8) =
         ((float)(uVar7 >> 9 | 0x3f800000) + -1.0) *
         (*(float *)(param_1 + 0x54) - *(float *)(param_1 + 0x58)) + *(float *)(param_1 + 0x58);
    uVar7 = *(int *)(param_1 + 0x3c) * 0xbb38435 + 0x3619636b;
    *(uint *)(param_1 + 0x3c) = uVar7;
    *(float *)(lVar6 + 8 + lVar8) =
         ((float)(uVar7 >> 9 | 0x3f800000) + -1.0) *
         (*(float *)(param_1 + 0x5c) - *(float *)(param_1 + 0x60)) + *(float *)(param_1 + 0x60);
    uVar7 = *(int *)(param_1 + 0x3c) * 0xbb38435 + 0x3619636b;
    *(uint *)(param_1 + 0x3c) = uVar7;
    *(float *)(lVar6 + 0xc + lVar8) =
         ((float)(uVar7 >> 9 | 0x3f800000) + -1.0) *
         (*(float *)(param_1 + 100) - *(float *)(param_1 + 0x68)) + *(float *)(param_1 + 0x68);
    *piVar4 = 0;
  }
  FUN_147d36b2c(&local_2a8,param_5);
  fVar10 = *(float *)(lVar6 + 0xc + lVar8);
  fVar3 = *(float *)(lVar6 + lVar8);
  fVar9 = sinf(*(float *)(lVar6 + 4 + lVar8) * *(float *)(param_4 + 0x1a8) * 3.1415927 +
               *(float *)(lVar6 + 8 + lVar8));
  fVar10 = fVar9 * fVar3 + fVar10;
  if ((*(uint *)(param_1 + 0x48) & 1) != 0) {
    local_210 = local_210 * fVar10;
  }
  if ((*(uint *)(param_1 + 0x48) & 2) != 0) {
    local_1f0 = fVar10 * local_1f0;
  }
  local_2d0 = param_6;
  local_2d8 = &local_2a8;
  FUN_147d363e4(param_1,param_2,local_2b8,param_4);
  FUN_1478b5da6(&local_2a8);
  if ((local_60 ^ (ulonglong)auStack_2f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147d3aeb8 FUN_147d3aeb8 body=182 status=ok
// SIG undefined FUN_147d3aeb8(void)

undefined4 FUN_147d3aeb8(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined4 uVar1;
  undefined1 auStack_e8 [40];
  undefined5 local_c0;
  undefined3 uStack_bb;
  undefined4 local_b8;
  undefined1 uStack_b4;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined1 uStack_50;
  undefined7 uStack_4f;
  undefined1 uStack_48;
  undefined8 uStack_47;
  undefined8 local_3c;
  undefined8 local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_b0 = 0;
  local_3c = 0;
  local_c0 = 0;
  uStack_bb = 0;
  local_b8 = 0;
  uStack_b4 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  uStack_4f = 0;
  uStack_48 = 0;
  uStack_47 = 0;
  local_30 = 0;
  uStack_28 = 0;
  (**(code **)(**(longlong **)(param_3 + 0x188) + 0x28))
            (*(longlong **)(param_3 + 0x188),*(undefined8 *)(param_1 + 0x58),&local_c0);
  uVar1 = local_b8;
  FUN_147046490(&local_c0);
  if ((local_20 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d3af74 FUN_147d3af74 body=105 status=ok
// SIG undefined FUN_147d3af74(void)

float FUN_147d3af74(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  float fVar4;
  longlong lVar5;
  float fVar6;
  
  iVar1 = *(int *)(param_1 + 0x30);
  if ((longlong)iVar1 == 0) {
    fVar4 = 0.0;
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0x28);
    fVar4 = 0.0;
    lVar5 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar5);
      fVar6 = fVar4;
      if (plVar3 != (longlong *)0x0) {
        FUN_1400337aa(plVar3);
        fVar6 = (float)(**(code **)(*plVar3 + 0x2a8))(plVar3);
        if (fVar6 <= fVar4) {
          fVar6 = fVar4;
        }
      }
      fVar4 = fVar6;
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar1 * 8 != lVar5);
  }
  return fVar4;
}



// FUNCTION 147d3afe2 FUN_147d3afe2 body=137 status=ok
// SIG undefined FUN_147d3afe2(void)

void FUN_147d3afe2(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 auStack_1c8 [40];
  undefined **local_1a0;
  longlong local_198;
  undefined ***local_190;
  undefined8 **local_188;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  lVar1 = *(longlong *)(*param_2 + 8);
  local_188 = &local_190;
  local_1a0 = &PTR_FUN_149e37810;
  local_190 = &local_1a0;
  local_198 = lVar1;
  switchD_143c3d4dc::caseD_20();
  if (0x1e4 < *(int *)(lVar1 + 0x40)) {
    FUN_140562eea(&local_1a0,lVar1,0,&DAT_14c896044);
  }
  if ((local_10 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d3b06c FUN_147d3b06c body=133 status=ok
// SIG undefined FUN_147d3b06c(void)

void FUN_147d3b06c(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_1c8 [40];
  undefined **local_1a0;
  longlong local_198;
  undefined ***local_190;
  undefined8 **local_188;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  local_188 = &local_190;
  local_1a0 = &PTR_FUN_149e37810;
  local_190 = &local_1a0;
  local_198 = param_2;
  switchD_143c3d4dc::caseD_20();
  if (0x1e4 < *(int *)(param_2 + 0x40)) {
    FUN_140562eea(&local_1a0,param_2,0,&DAT_14c896044);
  }
  if ((local_10 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d3b0f2 FUN_147d3b0f2 body=125 status=ok
// SIG undefined FUN_147d3b0f2(void)

void FUN_147d3b0f2(longlong *param_1,undefined1 param_2)

{
  undefined ***pppuVar1;
  undefined1 auStack_78 [32];
  undefined1 *local_58 [2];
  undefined ***local_48;
  undefined **local_38;
  undefined1 local_30;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = (undefined ***)0x0;
  local_38 = &PTR_LAB_14aaaff00;
  local_58[0] = &LAB_1437011f4;
  local_30 = param_2;
  (**(code **)(*param_1 + 0x350))(param_1,local_58);
  if (local_58[0] != (undefined1 *)0x0) {
    pppuVar1 = local_48;
    if (local_48 == (undefined ***)0x0) {
      pppuVar1 = &local_38;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d3b170 FUN_147d3b170 body=125 status=ok
// SIG undefined FUN_147d3b170(void)

void FUN_147d3b170(longlong *param_1,undefined1 param_2)

{
  undefined ***pppuVar1;
  undefined1 auStack_78 [32];
  undefined1 *local_58 [2];
  undefined ***local_48;
  undefined **local_38;
  undefined1 local_30;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = (undefined ***)0x0;
  local_38 = &PTR_LAB_14aaaff20;
  local_58[0] = &LAB_143701250;
  local_30 = param_2;
  (**(code **)(*param_1 + 0x350))(param_1,local_58);
  if (local_58[0] != (undefined1 *)0x0) {
    pppuVar1 = local_48;
    if (local_48 == (undefined ***)0x0) {
      pppuVar1 = &local_38;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d3b1ee FUN_147d3b1ee body=125 status=ok
// SIG undefined FUN_147d3b1ee(void)

void FUN_147d3b1ee(longlong *param_1,undefined1 param_2)

{
  undefined ***pppuVar1;
  undefined1 auStack_78 [32];
  undefined1 *local_58 [2];
  undefined ***local_48;
  undefined **local_38;
  undefined1 local_30;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = (undefined ***)0x0;
  local_38 = &PTR_LAB_14aaaff40;
  local_58[0] = &LAB_1437012ac;
  local_30 = param_2;
  (**(code **)(*param_1 + 0x350))(param_1,local_58);
  if (local_58[0] != (undefined1 *)0x0) {
    pppuVar1 = local_48;
    if (local_48 == (undefined ***)0x0) {
      pppuVar1 = &local_38;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d3b26c FUN_147d3b26c body=56 status=ok
// SIG undefined FUN_147d3b26c(void)

undefined4 FUN_147d3b26c(void)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)FUN_145b54fcc();
  lVar2 = plVar1[0x22];
  if (lVar2 == 0) {
    (**(code **)(*plVar1 + 1000))(plVar1);
    lVar2 = plVar1[0x22];
  }
  return *(undefined4 *)(lVar2 + 0x180);
}



// FUNCTION 147d3b2a4 FUN_147d3b2a4 body=56 status=ok
// SIG undefined FUN_147d3b2a4(void)

undefined4 FUN_147d3b2a4(void)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)FUN_145b54fcc();
  lVar2 = plVar1[0x22];
  if (lVar2 == 0) {
    (**(code **)(*plVar1 + 1000))(plVar1);
    lVar2 = plVar1[0x22];
  }
  return *(undefined4 *)(lVar2 + 0x180);
}



// FUNCTION 147d3b2dc FUN_147d3b2dc body=233 status=ok
// SIG undefined FUN_147d3b2dc(void)

void FUN_147d3b2dc(longlong param_1,undefined8 param_2,ulonglong param_3)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if ((((-1 < *(int *)(param_1 + 0x48)) && (uVar2 = 0, *(int *)(param_1 + 0x30) == 1)) ||
      ((-1 < (int)DAT_14c761b50 &&
       (uVar2 = DAT_14c761b50, (int)DAT_14c761b50 < *(int *)(param_1 + 0x30))))) &&
     (plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x28) + (ulonglong)uVar2 * 8),
     plVar1 != (longlong *)0x0)) {
    uVar3 = ((uint)((ulonglong)plVar1 >> 0x14) & 0xffff ^ (uint)((ulonglong)plVar1 >> 4)) *
            -0x7a143595;
    uVar4 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    uVar4 = uVar4 >> 0x10 ^ uVar4;
    uVar3 = ((uint)(param_3 >> 0x14) & 0xffff ^ (uint)(param_3 >> 4)) * -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    uVar3 = uVar3 >> 0x10 ^ uVar3;
                    /* WARNING: Could not recover jumptable at 0x000147d3b3ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x2e0))
              (plVar1,param_2,
               (uVar3 >> 2) + uVar3 * 0x40 + -0x61c88647 +
               ((uVar4 >> 2) + 0x9e3779b9 + uVar2 + uVar4 * 0x40 ^ uVar4) ^ uVar3);
    return;
  }
  return;
}



// FUNCTION 147d3b3c6 FUN_147d3b3c6 body=144 status=ok
// SIG undefined FUN_147d3b3c6(void)

void FUN_147d3b3c6(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((((-1 < *(int *)(param_1 + 0x48)) && (uVar5 = 0, *(int *)(param_1 + 0x30) == 1)) ||
      ((-1 < (int)DAT_14c761b50 &&
       (uVar5 = (ulonglong)DAT_14c761b50, (int)DAT_14c761b50 < *(int *)(param_1 + 0x30))))) &&
     (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x28) + uVar5 * 8), lVar1 != 0)) {
    pcVar2 = (code *)*param_2;
    plVar4 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar4 = (longlong *)param_2[2];
    }
    local_20 = lVar1;
    uVar3 = (**(code **)(*plVar4 + 8))(plVar4);
    (*pcVar2)(uVar3,&local_20);
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147d3b46e FUN_147d3b46e body=108 status=ok
// SIG undefined FUN_147d3b46e(void)

void FUN_147d3b46e(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  
  plVar1 = (longlong *)(param_1 + 0x48);
  iVar2 = *(int *)(param_1 + 0x50);
  iVar3 = *(int *)(param_1 + 0x30);
  if (iVar2 < iVar3) {
    *(int *)(param_1 + 0x50) = iVar3;
    if ((uint)(*(int *)(param_1 + 0x54) - iVar2) < (uint)(iVar3 - iVar2)) {
      FUN_14475e4ac(plVar1);
    }
    memset((void *)((longlong)iVar2 * 4 + *plVar1),0,(longlong)(iVar3 - iVar2) << 2);
    return;
  }
  if (iVar3 < iVar2) {
    *(int *)(param_1 + 0x50) = iVar3;
    FUN_1401fef06(plVar1);
    return;
  }
  return;
}



// FUNCTION 147d3b4da FUN_147d3b4da body=100 status=ok
// SIG undefined FUN_147d3b4da(void)

void FUN_147d3b4da(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  
  plVar1 = (longlong *)(param_1 + 0x58);
  iVar2 = *(int *)(param_1 + 0x60);
  iVar3 = *(int *)(param_1 + 0x30);
  if (iVar2 < iVar3) {
    *(int *)(param_1 + 0x60) = iVar3;
    if ((uint)(*(int *)(param_1 + 100) - iVar2) < (uint)(iVar3 - iVar2)) {
      FUN_1401c3474(plVar1);
    }
    memset((void *)((longlong)iVar2 + *plVar1),0,(longlong)(iVar3 - iVar2));
    return;
  }
  if (iVar3 < iVar2) {
    *(int *)(param_1 + 0x60) = iVar3;
    FUN_1403ed828(plVar1);
    return;
  }
  return;
}



// FUNCTION 147d3b53e FUN_147d3b53e body=113 status=ok
// SIG undefined FUN_147d3b53e(void)

void FUN_147d3b53e(longlong *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  FUN_1446e0b6e();
  if ((*(byte *)(param_1 + 0xe) & 3) == 0) {
    iVar2 = DAT_14cb08bf0;
    if (DAT_14cb08bf0 < 1) {
      iVar2 = FUN_14795d192();
    }
    iVar1 = *(int *)((longlong)param_1 + 0x6c);
    iVar3 = iVar2;
    if (iVar1 < iVar2) {
      iVar3 = iVar1;
    }
    if (iVar2 < 1) {
      iVar3 = iVar1;
    }
    if (iVar1 < 1) {
      iVar3 = iVar2;
    }
    if (0 < iVar3) {
      iVar2 = (int)param_1[6];
      iVar1 = iVar2;
      while (iVar3 < iVar1) {
        iVar2 = iVar2 + -1;
        (**(code **)(*param_1 + 0x318))(param_1,iVar2);
        iVar1 = (int)param_1[6];
      }
    }
  }
  FUN_147d3b46e(param_1);
  FUN_147d3b4da(param_1);
  return;
}



// FUNCTION 147d3b5b0 FUN_147d3b5b0 body=202 status=ok
// SIG undefined FUN_147d3b5b0(void)

ulonglong FUN_147d3b5b0(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  float fVar5;
  float fVar6;
  
  if ((longlong)*(int *)(param_1 + 0x50) < 1) {
    fVar6 = 0.0;
  }
  else {
    fVar6 = 0.0;
    lVar3 = 0;
    do {
      if (((*(byte *)(param_1 + 0x70) & 4) == 0) ||
         (*(char *)(*(longlong *)(param_1 + 0x58) + lVar3) == '\0')) {
        fVar6 = fVar6 + *(float *)(*(longlong *)(param_1 + 0x48) + lVar3 * 4);
      }
      lVar3 = lVar3 + 1;
    } while (*(int *)(param_1 + 0x50) != lVar3);
  }
  uVar2 = rand();
  if (0 < (longlong)*(int *)(param_1 + 0x30)) {
    uVar1 = *(uint *)(param_1 + 0x50);
    if ((int)*(uint *)(param_1 + 0x50) < 1) {
      uVar1 = 0;
    }
    fVar5 = 0.0;
    uVar4 = 0;
    do {
      if (uVar1 == uVar4) {
        return 0;
      }
      if ((((*(byte *)(param_1 + 0x70) & 4) == 0) ||
          (*(char *)(*(longlong *)(param_1 + 0x58) + uVar4) == '\0')) &&
         (fVar5 = fVar5 + *(float *)(*(longlong *)(param_1 + 0x48) + uVar4 * 4),
         fVar6 * ((float)(uVar2 & 0x7fff) / 32767.0) < fVar5)) {
        *(undefined1 *)(*(longlong *)(param_1 + 0x58) + uVar4) = 1;
        *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 1;
        return uVar4 & 0xffffffff;
      }
      uVar4 = uVar4 + 1;
    } while ((longlong)*(int *)(param_1 + 0x30) != uVar4);
  }
  return 0;
}



// FUNCTION 147d3b67a FUN_147d3b67a body=751 status=ok
// SIG undefined FUN_147d3b67a(void)

void FUN_147d3b67a(longlong *param_1,undefined8 param_2,ulonglong param_3,longlong param_4,
                  undefined8 param_5,undefined8 param_6)

{
  longlong *plVar1;
  ulonglong *puVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  longlong lVar10;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 local_80;
  int local_6c;
  ulonglong local_68;
  ulonglong *local_60;
  int *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_68 = param_3;
  if (*(int *)(param_4 + 0x778) != *(int *)(param_4 + 0x7a4)) {
    lVar5 = param_4 + 0x7a8;
    if (*(longlong *)(param_4 + 0x7b0) != 0) {
      lVar5 = *(longlong *)(param_4 + 0x7b0);
    }
    iVar3 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(param_4 + 0x7b8) - 1U &
                             (int)param_3 + (int)(param_3 >> 0x20) * 0x17) * 4);
    if (iVar3 != -1) {
      do {
        puVar2 = (ulonglong *)(*(longlong *)(param_4 + 0x770) + (longlong)iVar3 * 0x18);
        if (*puVar2 == param_3) {
          if (puVar2 != (ulonglong *)0x0) {
            iVar3 = (int)puVar2[1];
            lVar5 = *(longlong *)(param_4 + 0x7c0);
            piVar9 = (int *)(iVar3 + lVar5);
            goto LAB_147d3b743;
          }
          break;
        }
        iVar3 = (int)puVar2[2];
      } while (iVar3 != -1);
    }
  }
  plVar1 = (longlong *)(param_4 + 0x7c0);
  iVar3 = *(int *)(param_4 + 0x7c8);
  *(int *)(param_4 + 0x7c8) = iVar3 + 8;
  if ((uint)(*(int *)(param_4 + 0x7cc) - iVar3) < 8) {
    FUN_1447403be(plVar1,iVar3);
  }
  *(undefined8 *)(*plVar1 + (longlong)iVar3) = 0;
  local_58 = &local_6c;
  local_60 = &local_68;
  local_6c = iVar3;
  FUN_1402eaea6((longlong *)(param_4 + 0x770),local_4c,&local_60,0);
  piVar9 = (int *)(*plVar1 + (longlong)local_6c);
  *(undefined4 *)(*plVar1 + (longlong)local_6c) = 1;
  lVar5 = *plVar1;
  iVar3 = local_6c;
LAB_147d3b743:
  lVar10 = (longlong)(iVar3 + 4);
  if (*piVar9 != 0) {
    if (DAT_14cb08c08 != 0) {
      (**(code **)(*param_1 + 800))(param_1,1);
    }
    uVar4 = FUN_147d3b5b0();
    *(undefined4 *)(lVar5 + lVar10) = uVar4;
    *piVar9 = 0;
  }
  if ((((*(byte *)(param_1 + 0xe) & 4) != 0) && (iVar3 = (int)param_1[0xc], 0 < iVar3)) &&
     (iVar3 <= (int)param_1[0xd])) {
    lVar6 = 0;
    do {
      if (*(int *)(lVar5 + lVar10) < iVar3) {
        *(undefined1 *)(param_1[0xb] + lVar6) = 0;
        iVar3 = (int)param_1[0xc];
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < iVar3);
    *(undefined1 *)(param_1[0xb] + (longlong)*(int *)(lVar5 + lVar10)) = 1;
    *(undefined4 *)(param_1 + 0xd) = 1;
  }
  iVar3 = *(int *)(lVar5 + lVar10);
  if ((iVar3 < (int)param_1[6]) &&
     (plVar1 = *(longlong **)(param_1[5] + (longlong)iVar3 * 8), plVar1 != (longlong *)0x0)) {
    uVar7 = ((uint)((ulonglong)plVar1 >> 0x14) & 0xffff ^ (uint)((ulonglong)plVar1 >> 4)) *
            -0x7a143595;
    uVar8 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
    uVar8 = uVar8 >> 0x10 ^ uVar8;
    uVar7 = ((uint)(local_68 >> 0x14) & 0xffff ^ (uint)(local_68 >> 4)) * -0x7a143595;
    uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
    uVar7 = uVar7 >> 0x10 ^ uVar7;
    local_80 = param_6;
    local_88 = param_5;
    (**(code **)(*plVar1 + 0x2e0))
              (plVar1,param_2,
               (uVar7 >> 2) + uVar7 * 0x40 + -0x61c88647 +
               ((uVar8 >> 2) + 0x9e3779b9 + uVar8 * 0x40 + iVar3 ^ uVar8) ^ uVar7,param_4);
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147d3b96a FUN_147d3b96a body=595 status=ok
// SIG undefined FUN_147d3b96a(void)

undefined8 FUN_147d3b96a(longlong param_1,ulonglong param_2,longlong param_3)

{
  longlong *plVar1;
  ulonglong *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  undefined1 auStack_88 [36];
  int local_64;
  ulonglong local_60;
  ulonglong *local_58;
  int *local_50;
  undefined1 local_44 [4];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_60 = param_2;
  if (*(int *)(param_3 + 0x778) != *(int *)(param_3 + 0x7a4)) {
    lVar6 = param_3 + 0x7a8;
    if (*(longlong *)(param_3 + 0x7b0) != 0) {
      lVar6 = *(longlong *)(param_3 + 0x7b0);
    }
    iVar3 = *(int *)(lVar6 + (ulonglong)
                             (*(int *)(param_3 + 0x7b8) - 1U &
                             (int)param_2 + (int)(param_2 >> 0x20) * 0x17) * 4);
    if (iVar3 != -1) {
      do {
        puVar2 = (ulonglong *)(*(longlong *)(param_3 + 0x770) + (longlong)iVar3 * 0x18);
        if (*puVar2 == param_2) {
          if (puVar2 != (ulonglong *)0x0) {
            iVar3 = (int)puVar2[1];
            lVar6 = *(longlong *)(param_3 + 0x7c0);
            piVar9 = (int *)(iVar3 + lVar6);
            goto LAB_147d3ba2d;
          }
          break;
        }
        iVar3 = (int)puVar2[2];
      } while (iVar3 != -1);
    }
  }
  plVar1 = (longlong *)(param_3 + 0x7c0);
  iVar3 = *(int *)(param_3 + 0x7c8);
  *(int *)(param_3 + 0x7c8) = iVar3 + 8;
  if ((uint)(*(int *)(param_3 + 0x7cc) - iVar3) < 8) {
    FUN_1447403be(plVar1,iVar3);
  }
  *(undefined8 *)(*plVar1 + (longlong)iVar3) = 0;
  local_50 = &local_64;
  local_58 = &local_60;
  local_64 = iVar3;
  FUN_1402eaea6((longlong *)(param_3 + 0x770),local_44,&local_58,0);
  piVar9 = (int *)(*plVar1 + (longlong)local_64);
  *(undefined4 *)(*plVar1 + (longlong)local_64) = 1;
  lVar6 = *plVar1;
  iVar3 = local_64;
LAB_147d3ba2d:
  if (*piVar9 != 0) {
    uVar4 = FUN_147d3b5b0(param_1);
    *(undefined4 *)(lVar6 + (iVar3 + 4)) = uVar4;
    *piVar9 = 0;
  }
  iVar3 = *(int *)(lVar6 + (iVar3 + 4));
  uVar5 = 0;
  if ((iVar3 < *(int *)(param_1 + 0x30)) &&
     (plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x28) + (longlong)iVar3 * 8),
     plVar1 != (longlong *)0x0)) {
    uVar7 = ((uint)((ulonglong)plVar1 >> 0x14) & 0xffff ^ (uint)((ulonglong)plVar1 >> 4)) *
            -0x7a143595;
    uVar8 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
    uVar8 = uVar8 >> 0x10 ^ uVar8;
    uVar7 = ((uint)(local_60 >> 0x14) & 0xffff ^ (uint)(local_60 >> 4)) * -0x7a143595;
    uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
    uVar7 = uVar7 >> 0x10 ^ uVar7;
    uVar5 = (**(code **)(*plVar1 + 0x300))
                      (plVar1,(uVar7 >> 2) + uVar7 * 0x40 + -0x61c88647 +
                              ((uVar8 >> 2) + 0x9e3779b9 + uVar8 * 0x40 + iVar3 ^ uVar8) ^ uVar7,
                       param_3);
  }
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 147d3bbbe FUN_147d3bbbe body=44 status=ok
// SIG undefined FUN_147d3bbbe(void)

void FUN_147d3bbbe(longlong *param_1)

{
  (**(code **)(*param_1 + 0x310))(param_1,(int)param_1[6]);
                    /* WARNING: Could not recover jumptable at 0x000147d3bbe7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x310))(param_1,(int)param_1[6]);
  return;
}



// FUNCTION 147d3bbea FUN_147d3bbea body=168 status=ok
// SIG undefined FUN_147d3bbea(void)

void FUN_147d3bbea(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  
  FUN_147d3b46e();
  FUN_147d3b4da(param_1);
  iVar1 = *(int *)(param_1 + 0x50);
  *(uint *)(param_1 + 0x50) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x54) < iVar1 + 1U) {
    FUN_14475e4ac(param_1 + 0x48,iVar1);
  }
  lVar2 = (longlong)param_2;
  memmove((void *)(*(longlong *)(param_1 + 0x48) + lVar2 * 4 + 4),
          (void *)(*(longlong *)(param_1 + 0x48) + lVar2 * 4),
          (ulonglong)(uint)(iVar1 - param_2) << 2);
  *(undefined4 *)(*(longlong *)(param_1 + 0x48) + lVar2 * 4) = 0x3f800000;
  iVar1 = *(int *)(param_1 + 0x60);
  *(uint *)(param_1 + 0x60) = iVar1 + 1U;
  if (*(uint *)(param_1 + 100) < iVar1 + 1U) {
    FUN_1401c3474(param_1 + 0x58,iVar1);
  }
  memmove((void *)(*(longlong *)(param_1 + 0x58) + lVar2 + 1),
          (void *)(*(longlong *)(param_1 + 0x58) + lVar2),(ulonglong)(uint)(iVar1 - param_2));
  *(undefined1 *)(*(longlong *)(param_1 + 0x58) + lVar2) = 0;
  FUN_147d365a2(param_1,param_2);
  return;
}



// FUNCTION 147d3bc92 FUN_147d3bc92 body=164 status=ok
// SIG undefined FUN_147d3bc92(void)

void FUN_147d3bc92(longlong param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  
  FUN_147d3b46e();
  FUN_147d3b4da(param_1);
  iVar1 = *(int *)(param_1 + 0x50);
  lVar3 = (longlong)(int)param_2;
  iVar2 = iVar1 + ~param_2;
  if (iVar2 != 0) {
    memmove((void *)(*(longlong *)(param_1 + 0x48) + lVar3 * 4),
            (void *)(*(longlong *)(param_1 + 0x48) + lVar3 * 4 + 4),(longlong)iVar2 << 2);
    iVar1 = *(int *)(param_1 + 0x50);
  }
  *(int *)(param_1 + 0x50) = iVar1 + -1;
  FUN_1401fef06(param_1 + 0x48);
  iVar1 = *(int *)(param_1 + 0x60);
  iVar2 = ~param_2 + iVar1;
  if (iVar2 != 0) {
    memmove((void *)(*(longlong *)(param_1 + 0x58) + lVar3),
            (void *)(*(longlong *)(param_1 + 0x58) + lVar3 + 1),(longlong)iVar2);
    iVar1 = *(int *)(param_1 + 0x60);
  }
  *(int *)(param_1 + 0x60) = iVar1 + -1;
  FUN_1403ed828(param_1 + 0x58);
  FUN_147d36614(param_1,param_2);
  return;
}



// FUNCTION 147d3bd3a FUN_147d3bd3a body=166 status=ok
// SIG undefined FUN_147d3bd3a(void)

void FUN_147d3bd3a(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined1 auStack_2a8 [32];
  undefined1 *local_288;
  undefined8 local_280;
  undefined1 local_278 [16];
  longlong local_268;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_2a8;
  FUN_147d36b2c(local_278,param_5);
  if (*(longlong *)(param_1 + 0x48) != 0) {
    local_268 = *(longlong *)(param_1 + 0x48);
  }
  local_280 = param_6;
  local_288 = local_278;
  FUN_147d363e4(param_1,param_2,param_3,param_4);
  FUN_1478b5da6(local_278);
  if ((local_38 ^ (ulonglong)auStack_2a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d3bde2 FUN_147d3bde2 body=102 status=ok
// SIG undefined FUN_147d3bde2(void)

void FUN_147d3bde2(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  
  FUN_1446e0b6e();
  lVar2 = param_1[9];
  if (lVar2 != 0) {
    do {
      cVar1 = *(char *)(lVar2 + 0x1b1);
      if (cVar1 != '\0') break;
      lVar2 = *(longlong *)(lVar2 + 0x1e0);
    } while (lVar2 != 0);
    if (cVar1 == '\x02') {
                    /* WARNING: Could not recover jumptable at 0x000147d3be45. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 800))(param_1,1);
      return;
    }
    if (cVar1 == '\x01') {
      (**(code **)(*param_1 + 0x328))(param_1,1);
      *(undefined1 *)(param_1 + 10) = 1;
    }
  }
  return;
}



// FUNCTION 147d3be4c FUN_147d3be4c body=451 status=ok
// SIG undefined FUN_147d3be4c(void)

void FUN_147d3be4c(longlong param_1,undefined8 param_2,ulonglong param_3,longlong param_4,
                  undefined8 param_5,undefined8 param_6)

{
  longlong *plVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined5 local_d8;
  undefined3 uStack_d3;
  undefined5 uStack_d0;
  uint local_c8;
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
  undefined1 uStack_68;
  undefined7 uStack_67;
  undefined1 uStack_60;
  undefined8 uStack_5f;
  undefined8 local_54;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_c8 = 0;
  local_54 = 0;
  local_d8 = 0;
  uStack_d3 = 0;
  uStack_d0 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
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
  uStack_67 = 0;
  uStack_60 = 0;
  uStack_5f = 0;
  local_48 = 0;
  uStack_40 = 0;
  cVar2 = (**(code **)(**(longlong **)(param_4 + 0x188) + 0x28))
                    (*(longlong **)(param_4 + 0x188),*(undefined8 *)(param_1 + 0x48),&local_d8);
  if (cVar2 != '\0') {
    local_c8 = local_c8 + 1;
  }
  if ((int)local_c8 < 0 || *(int *)(param_1 + 0x30) <= (int)local_c8) {
    local_c8 = 0;
  }
  if (((int)local_c8 < *(int *)(param_1 + 0x30)) &&
     (plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x28) + (ulonglong)local_c8 * 8),
     plVar1 != (longlong *)0x0)) {
    uVar3 = ((uint)((ulonglong)plVar1 >> 0x14) & 0xffff ^ (uint)((ulonglong)plVar1 >> 4)) *
            -0x7a143595;
    uVar4 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    uVar4 = uVar4 >> 0x10 ^ uVar4;
    uVar3 = ((uint)(param_3 >> 0x14) & 0xffff ^ (uint)(param_3 >> 4)) * -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    uVar3 = uVar3 >> 0x10 ^ uVar3;
    local_e0 = param_6;
    local_e8 = param_5;
    (**(code **)(*plVar1 + 0x2e0))
              (plVar1,param_2,
               (uVar3 >> 2) + uVar3 * 0x40 + -0x61c88647 +
               ((uVar4 >> 2) + 0x9e3779b9 + local_c8 + uVar4 * 0x40 ^ uVar4) ^ uVar3,param_4);
  }
  FUN_147046490(&local_d8);
  if ((local_38 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d3c010 FUN_147d3c010 body=74 status=ok
// SIG undefined FUN_147d3c010(void)

void FUN_147d3c010(longlong *param_1)

{
  (**(code **)(*param_1 + 0x310))(param_1,(int)param_1[6]);
  (**(code **)(*param_1 + 0x310))(param_1,(int)param_1[6]);
  (**(code **)(*param_1 + 0x310))(param_1,(int)param_1[6]);
                    /* WARNING: Could not recover jumptable at 0x000147d3c057. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x310))(param_1,(int)param_1[6]);
  return;
}



// FUNCTION 147d3c068 FUN_147d3c068 body=1210 status=ok
// SIG undefined FUN_147d3c068(void)

void FUN_147d3c068(longlong param_1,longlong param_2,ulonglong param_3,longlong param_4,
                  undefined8 param_5,undefined8 param_6)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong *puVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 auStack_178 [32];
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  longlong *local_140;
  ulonglong *local_138;
  ulonglong *local_130;
  longlong local_128;
  ulonglong uStack_120;
  undefined4 local_118;
  ulonglong local_110;
  undefined5 local_108;
  undefined3 uStack_103;
  undefined5 uStack_100;
  undefined4 local_f8;
  longlong *local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined1 uStack_98;
  undefined7 uStack_97;
  undefined1 uStack_90;
  undefined8 uStack_8f;
  undefined8 local_84;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_68;
  ulonglong *local_60;
  int *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  local_f8 = 0;
  local_84 = 0;
  local_108 = 0;
  uStack_103 = 0;
  uStack_100 = 0;
  local_f0 = (longlong *)0x0;
  uStack_e8 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  uStack_97 = 0;
  uStack_90 = 0;
  uStack_8f = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = param_3;
  (**(code **)(**(longlong **)(param_4 + 0x188) + 0x28))
            (*(longlong **)(param_4 + 0x188),*(undefined8 *)(param_1 + 0x48),&local_108);
  if (local_f0 != (longlong *)0x0) {
    uVar7 = FUN_1410ed3ca();
    bVar4 = FUN_144a7ca96(&local_f0,uVar7);
    plVar3 = local_f0;
    if ((local_f0 != (longlong *)0x0 & bVar4) == 1) {
      if (*(int *)(param_4 + 0x778) != *(int *)(param_4 + 0x7a4)) {
        lVar9 = param_4 + 0x7a8;
        if (*(longlong *)(param_4 + 0x7b0) != 0) {
          lVar9 = *(longlong *)(param_4 + 0x7b0);
        }
        iVar8 = *(int *)(lVar9 + (ulonglong)
                                 (*(int *)(param_4 + 0x7b8) - 1U &
                                 (int)param_3 + (int)(param_3 >> 0x20) * 0x17) * 4);
        if (iVar8 != -1) {
          do {
            puVar11 = (ulonglong *)(*(longlong *)(param_4 + 0x770) + (longlong)iVar8 * 0x18);
            if (*puVar11 == param_3) {
              if (puVar11 != (ulonglong *)0x0) {
                puVar11 = puVar11 + 1;
                goto LAB_147d3c21a;
              }
              break;
            }
            iVar8 = (int)puVar11[2];
          } while (iVar8 != -1);
        }
      }
      plVar2 = (longlong *)(param_4 + 0x7c0);
      iVar8 = *(int *)(param_4 + 0x7c8);
      *(int *)(param_4 + 0x7c8) = iVar8 + 0xc;
      if ((uint)(*(int *)(param_4 + 0x7cc) - iVar8) < 0xc) {
        FUN_1447403be(plVar2,iVar8);
      }
      lVar9 = *plVar2;
      *(undefined4 *)(lVar9 + 8 + (longlong)iVar8) = 0;
      *(undefined8 *)(lVar9 + iVar8) = 0;
      puVar11 = &local_148;
      local_138 = &local_68;
      local_148._0_4_ = iVar8;
      local_130 = puVar11;
      FUN_1402eaea6((longlong *)(param_4 + 0x770),&local_60,&local_138,0);
      *(undefined4 *)(*plVar2 + (longlong)(int)local_148) = 1;
      param_3 = local_68;
LAB_147d3c21a:
      lVar9 = *(longlong *)(param_4 + 0x7c0);
      lVar12 = (longlong)((int)*puVar11 + 4);
      uVar5 = ((uint)((ulonglong)plVar3 >> 0x14) & 0xffff ^ (uint)((ulonglong)plVar3 >> 4)) *
              -0x7a143595;
      uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
      uVar5 = uVar5 >> 0x10 ^ uVar5;
      uVar6 = ((uint)(param_3 >> 0x14) & 0xffff ^ (uint)(param_3 >> 4)) * -0x7a143595;
      uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
      uVar6 = uVar6 >> 0x10 ^ uVar6;
      iVar8 = (uVar6 >> 2) + uVar6 * 0x40;
      uVar5 = ((uVar5 >> 2) + uVar5 * 0x40 + 0x9e3779b9 ^ uVar5) + iVar8 + 0x9e3779b9 ^ uVar6;
      local_110 = (ulonglong)uVar5;
      plVar2 = *(longlong **)(lVar9 + lVar12);
      if (plVar2 != plVar3) {
        if (*(longlong *)(param_4 + 0x188) != 0) {
          lVar13 = *(longlong *)(param_4 + 0x188) + 0x30;
          uVar10 = ((uint)((ulonglong)plVar2 >> 0x14) & 0xffff ^ (uint)((ulonglong)plVar2 >> 4)) *
                   -0x7a143595;
          uVar10 = (uVar10 >> 0xd ^ uVar10) * -0x3d4d51cb;
          uVar10 = uVar10 >> 0x10 ^ uVar10;
          FUN_147d49c38(lVar13,((uVar10 >> 2) + uVar10 * 0x40 + 0x9e3779b9 ^ uVar10) +
                               iVar8 + -0x61c88647 ^ uVar6);
          local_138 = (ulonglong *)0xffffffffffffffff;
          local_130 = (ulonglong *)((ulonglong)local_130 & 0xffffffff00000000);
          local_128 = 0;
          uStack_120 = 0;
          local_118 = 0xffffffff;
          uVar7 = (**(code **)(**(longlong **)(param_4 + 0x188) + 0x30))();
          FUN_1477c2298(&local_128,uVar7);
          uVar6 = (int)*(ulonglong *)(param_4 + 0x30) +
                  (int)(*(ulonglong *)(param_4 + 0x30) / 0xffffffff);
          local_138 = (ulonglong *)
                      (ulonglong)
                      ((uVar6 >> 2) + uVar6 * 0x40 + -0x61c88647 + uVar5 + *(int *)(param_4 + 0x54)
                      ^ uVar6);
          local_130 = (ulonglong *)CONCAT44(local_130._4_4_,(float)*(int *)(param_2 + 0x74));
          local_118 = *(undefined4 *)(param_2 + 0x90);
          (**(code **)(*plVar3 + 0x340))(plVar3,&local_128,0);
          (**(code **)(*plVar3 + 0x368))(plVar3,&local_148,&local_138);
          if (CONCAT44(local_148._4_4_,(int)local_148) != 0) {
            local_60 = &local_110;
            local_58 = (int *)&local_148;
            FUN_147d49da4(lVar13,local_4c);
          }
          if (local_140 != (longlong *)0x0) {
            LOCK();
            plVar2 = local_140 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
              (**(code **)*local_140)(local_140);
              LOCK();
              piVar1 = (int *)((longlong)local_140 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*local_140 + 0x10))(local_140);
              }
            }
          }
          FUN_145aa5488(local_128,uStack_120 & 0xffffffff);
          if (local_128 != 0) {
            FUN_1400020a8();
          }
        }
        *(longlong **)(lVar9 + lVar12) = plVar3;
      }
      local_150 = param_6;
      local_158 = param_5;
      (**(code **)(*plVar3 + 0x310))(plVar3,param_2,local_110,param_4);
      goto LAB_147d3c4b6;
    }
  }
  local_150 = param_6;
  local_158 = param_5;
  FUN_147d363e4(param_1,param_2,param_3,param_4);
LAB_147d3c4b6:
  FUN_147046490(&local_108);
  if ((local_48 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147d3c53a FUN_147d3c53a body=234 status=ok
// SIG undefined FUN_147d3c53a(void)

void FUN_147d3c53a(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined1 auStack_1d8 [40];
  undefined **local_1b0;
  longlong *local_1a8;
  undefined ***local_1a0;
  undefined8 **local_198;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  local_198 = &local_1a0;
  local_1b0 = &PTR_FUN_149e37810;
  local_1a0 = &local_1b0;
  local_1a8 = param_2;
  switchD_143c3d4dc::caseD_20();
  if (0x1e4 < (int)param_2[8]) {
    FUN_140562eea(&local_1b0,param_2,0,&DAT_14c896044);
  }
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cbd8);
  iVar1 = FUN_1448332aa(param_2,&DAT_149e3cbd8);
  if (0x16 < iVar1) {
    if ((*(byte *)(param_2 + 5) & 1) == 0) {
      if ((*(byte *)(param_2 + 5) & 4) != 0) {
        local_1b0 = *(undefined ***)(param_1 + 0x70);
        (**(code **)(*param_2 + 0x150))(param_2);
      }
    }
    else {
      (**(code **)(*param_2 + 0x138))(param_2,param_1 + 0x70);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d3c626 FUN_147d3c626 body=57 status=ok
// SIG undefined FUN_147d3c626(void)

undefined8 FUN_147d3c626(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x70);
  if (lVar1 != 0) {
    lVar2 = FUN_1459915be();
    lVar1 = *(longlong *)(lVar1 + 0x10);
    if (*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38)) {
      return CONCAT71((int7)((ulonglong)(lVar2 + 0x30) >> 8),
                      *(longlong *)
                       (*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
                      lVar2 + 0x30);
    }
  }
  return 0;
}



// FUNCTION 147d3c660 FUN_147d3c660 body=197 status=ok
// SIG undefined FUN_147d3c660(void)

longlong FUN_147d3c660(longlong param_1)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = FUN_14479d2ce();
  if (lVar3 == 0) {
    if (*(longlong *)(param_1 + 8) == 0) {
      return 0;
    }
    lVar3 = FUN_140007850();
    cVar2 = (*(code *)PTR_FUN_14c758760)();
    if ((lVar3 == 0) || (cVar2 == '\0')) {
      FUN_14485c47a(param_1,lVar3);
      if (lVar3 == 0) {
        return 0;
      }
    }
    else {
      uVar1 = *(uint *)(lVar3 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar4 = 0;
      }
      if ((*(uint *)(lVar4 + 8) & 0x8400000) == 0) {
        FUN_14485c47a(param_1,lVar3);
      }
    }
    if ((*(uint *)(lVar3 + 8) >> 0x1e & 1) != 0) {
      return 0;
    }
  }
  lVar4 = FUN_1410ed3ca();
  if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
      lVar4 + 0x30)) {
    return lVar3;
  }
  return 0;
}



// FUNCTION 147d3c726 FUN_147d3c726 body=151 status=ok
// SIG undefined FUN_147d3c726(void)

void FUN_147d3c726(longlong param_1,undefined8 param_2,undefined8 param_3,int param_4,char param_5)

{
  uint uVar1;
  longlong lVar2;
  
  if (param_4 == 1) {
    lVar2 = FUN_147d3c660(param_1 + 0x48);
    if ((lVar2 == 0) || (DAT_14c950c29 == '\0')) {
      *(longlong *)(param_1 + 0x70) = lVar2;
      if (lVar2 == 0) goto LAB_147d3c735;
    }
    else {
      FUN_1456cec3c(lVar2);
      *(longlong *)(param_1 + 0x70) = lVar2;
    }
    if (param_5 != '\0') {
      uVar1 = *(uint *)(lVar2 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar2 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar2 = 0;
      }
      FUN_1447f71cc(lVar2,0x40000000);
      lVar2 = *(longlong *)(param_1 + 0x70);
    }
    FUN_1406555d4(lVar2,param_1,0);
  }
LAB_147d3c735:
  *(byte *)(param_1 + 0x78) = *(byte *)(param_1 + 0x78) & 0xfe;
  return;
}



// FUNCTION 147d3c7be FUN_147d3c7be body=61 status=ok
// SIG undefined FUN_147d3c7be(void)

longlong FUN_147d3c7be(void)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_144a6654a();
  if (lVar1 != 0) {
    lVar2 = FUN_1410ed3ca();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 147d3c850 FUN_147d3c850 body=107 status=ok
// SIG undefined FUN_147d3c850(void)

void FUN_147d3c850(longlong *param_1)

{
  undefined4 uVar1;
  
  FUN_1436fc76e();
  uVar1 = (**(code **)(*param_1 + 0x2c8))(param_1);
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  *(byte *)((longlong)param_1 + 0x183) =
       *(byte *)((longlong)param_1 + 0x183) & 0xfe | *(float *)((longlong)param_1 + 0x3f4) == 0.0;
  if ((char)param_1[0x7e] == '\0') {
    uVar1 = 1;
  }
  else {
    if ((char)param_1[0x7e] != '\x01') {
      return;
    }
    uVar1 = 2;
  }
  *(undefined4 *)((longlong)param_1 + 0x36c) = uVar1;
  return;
}



// FUNCTION 147d3c8e2 FUN_147d3c8e2 body=96 status=ok
// SIG undefined FUN_147d3c8e2(void)

void FUN_147d3c8e2(undefined8 param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_144a67f5c(local_28);
  FUN_1447cd2ec(param_1,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d3c943 FUN_147d3c943 body=96 status=ok
// SIG undefined FUN_147d3c943(void)

void FUN_147d3c943(undefined8 param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_144a67f5c(local_28);
  FUN_1447cd2ec(param_1,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d3c9aa FUN_147d3c9aa body=249 status=ok
// SIG undefined FUN_147d3c9aa(void)

void FUN_147d3c9aa(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x2a0))(param_1,local_28,local_30);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d3caaa FUN_147d3caaa body=167 status=ok
// SIG undefined FUN_147d3caaa(void)

void FUN_147d3caaa(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x2a8))(param_1,local_28);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d3cb52 FUN_147d3cb52 body=42 status=ok
// SIG undefined FUN_147d3cb52(void)

void FUN_147d3cb52(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x2b0))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 147d3cb92 FUN_147d3cb92 body=281 status=ok
// SIG undefined FUN_147d3cb92(void)

void FUN_147d3cb92(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
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
  uStack_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  puVar2 = &local_38;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = *puVar2;
  local_40 = puVar2[1];
  plVar1 = (longlong *)FUN_147d3e44e(local_20);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x1b0))(plVar1,param_1,&local_48);
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d3ccb8 FUN_147d3ccb8 body=941 status=ok
// SIG undefined FUN_147d3ccb8(void)

void FUN_147d3ccb8(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined4 local_d0;
  undefined1 local_c8;
  undefined1 local_c0;
  undefined4 local_b8;
  undefined4 local_b0;
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  int local_88;
  int local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  longlong local_68 [3];
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_50 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  local_68[0] = 0;
  local_68[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_68);
  }
  plVar4 = local_68;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x38);
  }
  local_78 = 0;
  uStack_70 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  puVar5 = puVar1;
  if (puVar1 == (undefined8 *)0x0) {
    puVar5 = &local_78;
  }
  local_7c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_7c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_7c);
  }
  local_80 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_80);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_80);
  }
  local_84 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_84);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_84);
  }
  iVar3 = local_84;
  local_88 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
  }
  iVar2 = local_88;
  local_8c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_8c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_8c);
  }
  local_90 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_90);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_90);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_a0 = *puVar5;
  puVar5 = &local_78;
  if (puVar1 != (undefined8 *)0x0) {
    puVar5 = puVar1;
  }
  local_98 = puVar5[1];
  local_c0 = iVar2 != 0;
  local_c8 = iVar3 != 0;
  local_b0 = local_90;
  local_b8 = local_8c;
  local_d0 = local_80;
  local_d8 = local_7c;
  FUN_147d3d066(param_1,local_50,plVar4);
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d3d066 FUN_147d3d066 body=299 status=ok
// SIG undefined FUN_147d3d066(void)

void FUN_147d3d066(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined4 param_6,undefined1 param_7,undefined1 param_8,
                  undefined4 param_9,undefined4 param_10)

{
  longlong *plVar1;
  undefined1 auStack_c8 [32];
  longlong local_a8 [2];
  undefined4 local_98;
  undefined4 local_94;
  undefined1 local_90;
  undefined1 local_8f;
  undefined4 local_8c;
  undefined4 local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar1 = (longlong *)FUN_147d3e44e(param_2);
  if (plVar1 != (longlong *)0x0) {
    local_a8[0] = 0;
    local_a8[1] = 0;
    FUN_1477e7f38(local_a8,param_3);
    local_98 = param_5;
    local_94 = param_6;
    local_90 = param_7;
    local_8f = param_8;
    local_8c = param_9;
    local_88 = param_10;
    (**(code **)(*plVar1 + 0x1e0))(plVar1,param_1,local_a8,param_4);
    if (local_a8[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_80 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d3d192 FUN_147d3d192 body=281 status=ok
// SIG undefined FUN_147d3d192(void)

void FUN_147d3d192(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
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
  uStack_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  puVar2 = &local_38;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = *puVar2;
  local_40 = puVar2[1];
  plVar1 = (longlong *)FUN_147d3e44e(local_20);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x1b8))(plVar1,param_1,&local_48);
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d3d2ac FUN_147d3d2ac body=281 status=ok
// SIG undefined FUN_147d3d2ac(void)

void FUN_147d3d2ac(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
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
  uStack_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  puVar2 = &local_38;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = *puVar2;
  local_40 = puVar2[1];
  plVar1 = (longlong *)FUN_147d3e44e(local_20);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x1e8))(plVar1,param_1,&local_48);
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d3d3c6 FUN_147d3d3c6 body=288 status=ok
// SIG undefined FUN_147d3d3c6(void)

void FUN_147d3d3c6(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined1 auStack_a8 [40];
  undefined4 local_80 [2];
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
  local_80[0] = 0x3f800000;
  local_58 = 0;
  local_50 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_4c = 0xffffffff00000080;
  local_44 = 0;
  local_38 = 0;
  local_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_80);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_80);
  }
  puVar1 = *(undefined4 **)(param_2 + 0x38);
  puVar3 = puVar1;
  if (puVar1 == (undefined4 *)0x0) {
    puVar3 = local_80;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined4 *)(param_1 + 0x1c8) = *puVar3;
  puVar2 = (undefined8 *)(puVar1 + 2);
  if (puVar1 == (undefined4 *)0x0) {
    puVar2 = &local_78;
  }
  FUN_1477ce3e2(param_1 + 0x1d0,puVar2);
  FUN_147d3e71e(param_1);
  local_30 = 0;
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  FUN_14117d2fe(&local_78);
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d3d4e8 FUN_147d3d4e8 body=288 status=ok
// SIG undefined FUN_147d3d4e8(void)

void FUN_147d3d4e8(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined1 auStack_a8 [40];
  undefined4 local_80 [2];
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
  local_80[0] = 0x3f800000;
  local_58 = 0;
  local_50 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_4c = 0xffffffff00000080;
  local_44 = 0;
  local_38 = 0;
  local_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_80);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_80);
  }
  puVar1 = *(undefined4 **)(param_2 + 0x38);
  puVar3 = puVar1;
  if (puVar1 == (undefined4 *)0x0) {
    puVar3 = local_80;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined4 *)(param_1 + 0x118) = *puVar3;
  puVar2 = (undefined8 *)(puVar1 + 2);
  if (puVar1 == (undefined4 *)0x0) {
    puVar2 = &local_78;
  }
  FUN_1477ce3e2(param_1 + 0x120,puVar2);
  FUN_147d3e71e(param_1);
  local_30 = 0;
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  FUN_14117d2fe(&local_78);
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d3d60a FUN_147d3d60a body=263 status=ok
// SIG undefined FUN_147d3d60a(void)

void FUN_147d3d60a(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  longlong *plVar2;
  undefined1 auStack_68 [44];
  undefined4 local_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_3c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  uVar1 = local_3c;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  plVar2 = (longlong *)FUN_147d3e44e(local_38);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x198))(plVar2,param_1,uVar1);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d3d712 FUN_147d3d712 body=263 status=ok
// SIG undefined FUN_147d3d712(void)

void FUN_147d3d712(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  longlong *plVar2;
  undefined1 auStack_68 [44];
  undefined4 local_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_3c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  uVar1 = local_3c;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  plVar2 = (longlong *)FUN_147d3e44e(local_38);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x188))(plVar2,param_1,uVar1);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d3d81a FUN_147d3d81a body=263 status=ok
// SIG undefined FUN_147d3d81a(void)

void FUN_147d3d81a(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  longlong *plVar2;
  undefined1 auStack_68 [44];
  undefined4 local_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_3c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  uVar1 = local_3c;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  plVar2 = (longlong *)FUN_147d3e44e(local_38);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 400))(plVar2,param_1,uVar1);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d3d922 FUN_147d3d922 body=288 status=ok
// SIG undefined FUN_147d3d922(void)

void FUN_147d3d922(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined1 auStack_a8 [40];
  undefined4 local_80 [2];
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
  local_80[0] = 0x3f800000;
  local_58 = 0;
  local_50 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_4c = 0xffffffff00000080;
  local_44 = 0;
  local_38 = 0;
  local_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_80);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_80);
  }
  puVar1 = *(undefined4 **)(param_2 + 0x38);
  puVar3 = puVar1;
  if (puVar1 == (undefined4 *)0x0) {
    puVar3 = local_80;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined4 *)(param_1 + 0x170) = *puVar3;
  puVar2 = (undefined8 *)(puVar1 + 2);
  if (puVar1 == (undefined4 *)0x0) {
    puVar2 = &local_78;
  }
  FUN_1477ce3e2(param_1 + 0x178,puVar2);
  FUN_147d3e71e(param_1);
  local_30 = 0;
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  FUN_14117d2fe(&local_78);
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d3da44 FUN_147d3da44 body=174 status=ok
// SIG undefined FUN_147d3da44(void)

void FUN_147d3da44(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  plVar1 = (longlong *)FUN_147d3e44e(local_20);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x148))(plVar1,param_1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d3daf4 FUN_147d3daf4 body=263 status=ok
// SIG undefined FUN_147d3daf4(void)

void FUN_147d3daf4(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  longlong *plVar2;
  undefined1 auStack_68 [44];
  undefined4 local_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_3c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  uVar1 = local_3c;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  plVar2 = (longlong *)FUN_147d3e44e(local_38);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x138))(plVar2,param_1,uVar1);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d3dbfc FUN_147d3dbfc body=532 status=ok
// SIG undefined FUN_147d3dbfc(void)

void FUN_147d3dbfc(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined4 local_40;
  undefined1 local_38;
  undefined1 local_29;
  undefined4 local_28;
  undefined1 local_23;
  undefined1 local_22;
  undefined1 local_21;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_21 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_21);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_21);
  }
  local_22 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_22);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_22);
  }
  local_23 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_23);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_23);
  }
  local_28 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_29 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_29);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_29);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_38 = local_29;
  local_40 = local_28;
  local_48 = local_23;
  FUN_147d3de12(param_1,local_20,local_21,local_22);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d3de12 FUN_147d3de12 body=169 status=ok
// SIG undefined FUN_147d3de12(void)

void FUN_147d3de12(undefined8 param_1,undefined8 param_2,ulonglong param_3,int param_4,byte param_5,
                  float param_6,byte param_7)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar1 = (longlong *)FUN_147d3e44e(param_2);
  if (plVar1 != (longlong *)0x0) {
    if (10.0 <= param_6) {
      param_6 = 10.0;
    }
    if (param_6 <= 0.001) {
      param_6 = 0.001;
    }
    local_28 = param_3 & 0xff |
               (ulonglong)param_5 << 8 |
               (ulonglong)param_7 << 0x10 | CONCAT44(param_6,param_4 << 0x18);
    (**(code **)(*plVar1 + 0x1c0))(plVar1,param_1);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d3debc FUN_147d3debc body=174 status=ok
// SIG undefined FUN_147d3debc(void)

void FUN_147d3debc(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  plVar1 = (longlong *)FUN_147d3e44e(local_20);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x150))(plVar1,param_1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d3df6c FUN_147d3df6c body=563 status=ok
// SIG undefined FUN_147d3df6c(void)

void FUN_147d3df6c(undefined8 param_1,longlong param_2)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_98 [32];
  void **local_78;
  void *local_70;
  int local_68;
  undefined4 local_64;
  undefined8 local_60;
  void *local_58;
  ulonglong uStack_50;
  longlong local_48 [2];
  undefined1 local_31;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_31 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_31);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_31);
  }
  local_48[0] = 0;
  local_48[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  local_58 = (void *)0x0;
  uStack_50 = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  local_60 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  _Src = local_58;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_70 = (void *)0x0;
  lVar1 = (longlong)(int)uStack_50;
  local_68 = (int)uStack_50;
  if (lVar1 == 0) {
    local_64 = 0;
  }
  else {
    FUN_1446dd670(&local_70,uStack_50 & 0xffffffff,0);
    memcpy(local_70,_Src,lVar1 * 2);
  }
  local_78 = &local_70;
  FUN_147d3e1a0(param_1,local_30,local_31,local_48);
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d3e1a0 FUN_147d3e1a0 body=223 status=ok
// SIG undefined FUN_147d3e1a0(void)

void FUN_147d3e1a0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  longlong *param_5)

{
  void *_Src;
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_88 [32];
  void **local_68;
  void *local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = FUN_147d3e44e(param_2);
  if (lVar1 != 0) {
    local_58 = (void *)0x0;
    local_50 = (int)param_5[1];
    lVar2 = (longlong)local_50;
    _Src = (void *)*param_5;
    if (lVar2 == 0) {
      local_4c = 0;
    }
    else {
      FUN_1446dd670(&local_58,local_50,0);
      memcpy(local_58,_Src,lVar2 * 2);
    }
    local_68 = &local_58;
    FUN_147d3e484(param_1,lVar1,param_3,param_4);
  }
  if (*param_5 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d3e280 FUN_147d3e280 body=174 status=ok
// SIG undefined FUN_147d3e280(void)

void FUN_147d3e280(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  plVar1 = (longlong *)FUN_147d3e44e(local_20);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x1c8))(plVar1,param_1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d3e342 FUN_147d3e342 body=124 status=ok
// SIG undefined FUN_147d3e342(void)

void FUN_147d3e342(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_1c8 [40];
  undefined **local_1a0;
  longlong *local_198;
  undefined ***local_190;
  undefined8 **local_188;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  plVar1 = *(longlong **)(*param_2 + 8);
  local_188 = &local_190;
  local_1a0 = &PTR_FUN_149e37810;
  local_190 = &local_1a0;
  local_198 = plVar1;
  switchD_143c3d4dc::caseD_20();
  (**(code **)(*plVar1 + 0x218))(plVar1,&DAT_14aaab984);
  if ((local_10 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d3e3c0 FUN_147d3e3c0 body=123 status=ok
// SIG undefined FUN_147d3e3c0(void)

void FUN_147d3e3c0(undefined8 param_1,longlong *param_2)

{
  undefined1 auStack_1c8 [40];
  undefined **local_1a0;
  longlong *local_198;
  undefined ***local_190;
  undefined8 **local_188;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  local_188 = &local_190;
  local_1a0 = &PTR_FUN_149e37810;
  local_190 = &local_1a0;
  local_198 = param_2;
  switchD_143c3d4dc::caseD_20();
  if ((local_10 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x000147d3e433. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x218))(param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_1c8,&DAT_14aaab984);
}



// FUNCTION 147d3e44e FUN_147d3e44e body=54 status=ok
// SIG undefined FUN_147d3e44e(void)

undefined8 FUN_147d3e44e(undefined8 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (DAT_14cb0d2b0 != 0) {
    lVar1 = FUN_1402ad3be(DAT_14cb0d2b0,param_1,1);
    if (lVar1 != 0) {
      uVar2 = FUN_144a7b302(lVar1);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 147d3e484 FUN_147d3e484 body=664 status=ok
// SIG undefined FUN_147d3e484(void)

void FUN_147d3e484(longlong param_1,longlong *param_2,char param_3,undefined8 param_4,
                  longlong *param_5)

{
  undefined8 *puVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  void *_Dst;
  longlong lVar5;
  float fVar6;
  undefined1 auStack_158 [32];
  code **local_138;
  longlong local_128 [5];
  float local_100;
  float local_fc;
  longlong local_f8;
  undefined8 uStack_f0;
  uint local_e8;
  int local_e4;
  int local_e0;
  int local_dc;
  float local_d8;
  code *local_c8 [2];
  undefined8 local_b8;
  undefined **local_a8;
  longlong local_a0;
  code *local_88;
  undefined8 local_78;
  undefined **local_68;
  longlong local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if (param_2 != (longlong *)0x0) {
    plVar4 = (longlong *)(**(code **)(*param_2 + 0x140))(param_2,param_1,&local_100,&local_fc);
    if ((int)plVar4[1] != 0) {
      puVar1 = (undefined8 *)(param_1 + 0x240);
      _Dst = (void *)FUN_14001cc68(0xa0);
      memset(_Dst,0,0xa0);
      FUN_147cec3e8((longlong)_Dst + 0x28,0x2000);
      if (*(void **)(param_1 + 0x240) != _Dst) {
        *puVar1 = _Dst;
        FUN_145970f84(puVar1);
      }
      local_dc = (int)local_fc;
      local_e0 = (int)local_100;
      local_128[0] = 0;
      local_128[1] = 0;
      local_e8 = *(uint *)(plVar4 + 1);
      lVar2 = *plVar4;
      local_f8 = 0;
      uStack_f0 = 0;
      local_e4 = (int)local_e8 / local_e0;
      local_d8 = (float)local_e4 / (float)(int)local_fc;
      FUN_14703e832(&local_f8,local_e8);
      iVar3 = (int)uStack_f0;
      uStack_f0 = CONCAT44(uStack_f0._4_4_,(int)uStack_f0 + local_e8);
      if ((uint)(uStack_f0._4_4_ - iVar3) < local_e8) {
        FUN_1405b572a(&local_f8);
      }
      if (0 < (int)local_e8) {
        lVar5 = 0;
        do {
          fVar6 = *(float *)(lVar2 + lVar5 * 4);
          if (1.0 <= fVar6) {
            fVar6 = 1.0;
          }
          if (fVar6 <= -1.0) {
            fVar6 = -1.0;
          }
          *(short *)(local_f8 + lVar5 * 2) = (short)(int)(fVar6 * 32767.0);
          lVar5 = lVar5 + 1;
        } while (lVar5 < (int)local_e8);
      }
      FUN_147034d54(local_128,&local_f8);
      if (local_f8 != 0) {
        FUN_1400020a8();
      }
      FUN_147034d54(*puVar1,local_128);
      if (local_128[0] != 0) {
        FUN_1400020a8();
      }
      if (param_3 == '\x01') {
        local_138 = local_c8;
        local_b8 = 0;
        local_a8 = &PTR_LAB_14aab00a0;
        local_c8[0] = FUN_14370154c;
        local_a0 = param_1;
        FUN_14369f278(*(longlong *)(param_1 + 0x240) + 0x28,*(longlong *)(param_1 + 0x240),param_4,
                      param_5);
      }
      else if (param_3 == '\0') {
        local_78 = 0;
        local_68 = &PTR_LAB_14aab0080;
        local_88 = FUN_1437014b2;
        local_60 = param_1;
        FUN_14369ea8e(*(longlong *)(param_1 + 0x240) + 0x28,*(longlong *)(param_1 + 0x240),0);
      }
    }
  }
  if (*param_5 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d3e71e FUN_147d3e71e body=617 status=ok
// SIG undefined FUN_147d3e71e(void)

void FUN_147d3e71e(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 auStack_2a8 [40];
  longlong local_280;
  undefined1 local_278 [80];
  undefined1 local_228 [80];
  undefined1 local_1d8 [80];
  code *local_188 [2];
  undefined8 *local_178;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_128;
  undefined4 local_120;
  undefined8 local_11c;
  undefined4 local_114;
  longlong local_108;
  undefined4 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_cc;
  undefined4 local_c4;
  longlong local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_7c;
  undefined4 local_74;
  longlong local_68;
  undefined4 local_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_2a8;
  lVar1 = FUN_145ef8526();
  if (lVar1 != 0) {
    local_88 = 0;
    local_80 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_7c = 0xffffffff00000080;
    local_74 = 0;
    local_68 = 0;
    local_60 = 0;
    FUN_1477ce3e2(&local_a8,param_1 + 0x120);
    local_d8 = 0;
    local_d0 = 0;
    local_f8 = 0;
    uStack_f0 = 0;
    local_cc = 0xffffffff00000080;
    local_c4 = 0;
    local_b8 = 0;
    local_b0 = 0;
    FUN_1477ce3e2(&local_f8,param_1 + 0x178);
    local_128 = 0;
    local_120 = 0;
    local_148 = 0;
    uStack_140 = 0;
    local_11c = 0xffffffff00000080;
    local_114 = 0;
    local_108 = 0;
    local_100 = 0;
    FUN_1477ce3e2(&local_148,param_1 + 0x1d0);
    local_280 = param_1;
    FUN_1477ce544(local_278,&local_a8);
    FUN_1477ce544(local_228,&local_f8);
    FUN_1477ce544(local_1d8,&local_148);
    local_188[0] = (code *)0x0;
    puVar2 = (undefined8 *)FUN_14001cc68(0x100,8);
    *puVar2 = &PTR_LAB_14aab00c0;
    puVar2[1] = local_280;
    local_178 = puVar2;
    FUN_1477ce544(puVar2 + 2,local_278);
    FUN_1477ce544(puVar2 + 0xc,local_228);
    FUN_1477ce544(puVar2 + 0x16,local_1d8);
    if (puVar2 != (undefined8 *)&DAT_fffffffffffffff8) {
      local_188[0] = FUN_1437015e8;
    }
    FUN_14797347e(lVar1,local_188);
    FUN_1436fd56e(&local_280);
    local_100 = 0;
    if (local_108 != 0) {
      FUN_1400020a8();
    }
    FUN_14117d2fe(&local_148);
    local_b0 = 0;
    if (local_b8 != 0) {
      FUN_1400020a8();
    }
    FUN_14117d2fe(&local_f8);
    local_60 = 0;
    if (local_68 != 0) {
      FUN_1400020a8();
    }
    FUN_14117d2fe(&local_a8);
  }
  if ((local_50 ^ (ulonglong)auStack_2a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d3e988 FUN_147d3e988 body=32 status=ok
// SIG undefined FUN_147d3e988(void)

undefined8 FUN_147d3e988(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"Sound Submix");
  return param_2;
}



// FUNCTION 147d3e9a8 FUN_147d3e9a8 body=176 status=ok
// SIG undefined FUN_147d3e9a8(void)

longlong * FUN_147d3e9a8(longlong param_1,longlong *param_2,uint param_3)

{
  uint *puVar1;
  longlong lVar2;
  uint uVar3;
  
  if (*(int *)(param_1 + 0xa0) != *(int *)(param_1 + 0xcc)) {
    lVar2 = param_1 + 0xd0;
    if (*(longlong *)(param_1 + 0xd8) != 0) {
      lVar2 = *(longlong *)(param_1 + 0xd8);
    }
    uVar3 = *(uint *)(lVar2 + (ulonglong)(*(int *)(param_1 + 0xe0) - 1U & param_3) * 4);
    if (uVar3 != 0xffffffff) {
      do {
        puVar1 = (uint *)(*(longlong *)(param_1 + 0x98) + (longlong)(int)uVar3 * 0x18);
        if (*puVar1 == param_3) {
          if (puVar1 + 2 != (uint *)0x0 && puVar1 != (uint *)0x0) {
            lVar2 = *(longlong *)(puVar1 + 2);
            *param_2 = lVar2;
            if (DAT_14c950c29 != 1) {
              return param_2;
            }
            if (lVar2 == 0) {
              return param_2;
            }
            goto LAB_147d3ea51;
          }
          break;
        }
        uVar3 = puVar1[4];
      } while (uVar3 != 0xffffffff);
    }
  }
  lVar2 = *(longlong *)(param_1 + 0x90);
  *param_2 = lVar2;
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
LAB_147d3ea51:
    FUN_1456cec3c();
  }
  return param_2;
}



// FUNCTION 147d3ea58 FUN_147d3ea58 body=746 status=ok
// SIG undefined FUN_147d3ea58(void)

ulonglong FUN_147d3ea58(longlong param_1,longlong param_2)

{
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined8 unaff_RDI;
  ulonglong uVar8;
  bool bVar9;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_2 == 0 || param_1 == 0) {
    uVar8 = 0;
    goto LAB_147d3ea8a;
  }
  lVar3 = FUN_145b5ad08();
  if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
      != lVar3 + 0x30)) {
    param_1 = 0;
  }
  lVar3 = FUN_145b5ad08();
  if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
      != lVar3 + 0x30)) {
    bVar9 = param_1 != 0;
LAB_147d3eb0b:
    lVar3 = FUN_145b5aedc();
    uVar8 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
       (!bVar9 || *(longlong *)
                   (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
                   (longlong)*(int *)(lVar3 + 0x38) * 8) != lVar3 + 0x30)) goto LAB_147d3ea8a;
    FUN_147d3f078(param_1,&local_48);
    plVar4 = (longlong *)FUN_147045aca(&local_48);
    plVar5 = (longlong *)FUN_14704569a(param_2 + 0x90);
    if (plVar5 == (longlong *)0x0 || plVar4 == (longlong *)0x0) goto LAB_147d3ea8a;
    plVar6 = *(longlong **)(param_2 + 0xb0);
    if (plVar6 == (longlong *)0x0) {
      uVar8 = 0;
    }
    else {
      (**(code **)(*plVar6 + 0x2a0))(plVar6,&local_48);
      puVar7 = local_48;
      (**(code **)(*plVar5 + 8))(plVar5,&local_60);
      uVar2 = (**(code **)(*plVar4 + 0x48))(plVar4,local_60,puVar7);
      uVar8 = (ulonglong)uVar2;
      if (local_48 != (undefined8 *)0x0) {
        (**(code **)*local_48)(local_48,1);
      }
    }
    plVar6 = (longlong *)FUN_147d3f138(param_1);
    if (plVar6 == (longlong *)0x0) goto LAB_147d3ea8a;
    (**(code **)(*plVar6 + 0x2a0))(plVar6,&local_48);
    puVar7 = local_48;
    (**(code **)(*plVar4 + 8))(plVar4,&local_68);
    lVar3 = *plVar5;
  }
  else {
    if (param_1 == 0) {
      bVar9 = false;
      goto LAB_147d3eb0b;
    }
    FUN_147d3f078(param_1,&local_48);
    plVar4 = (longlong *)FUN_147045aca(&local_48);
    FUN_147d3f078(param_2,&local_48);
    plVar5 = (longlong *)FUN_147045aca(&local_48);
    uVar8 = CONCAT71((int7)((ulonglong)&local_48 >> 8),1);
    if (plVar5 == (longlong *)0x0 || plVar4 == (longlong *)0x0) goto LAB_147d3ea8a;
    plVar6 = (longlong *)FUN_147d3f138(param_2);
    if (plVar6 == (longlong *)0x0) {
      uVar8 = 0;
    }
    else {
      (**(code **)(*plVar6 + 0x2a0))(plVar6,&local_48);
      puVar7 = local_48;
      (**(code **)(*plVar5 + 8))(plVar5,&local_50);
      uVar2 = (**(code **)(*plVar4 + 0x48))(plVar4,local_50,puVar7);
      uVar8 = (ulonglong)uVar2;
      if (local_48 != (undefined8 *)0x0) {
        (**(code **)*local_48)(local_48,1);
      }
    }
    plVar6 = (longlong *)FUN_147d3f138(param_1);
    if (plVar6 == (longlong *)0x0) goto LAB_147d3ea8a;
    (**(code **)(*plVar6 + 0x2a0))(plVar6,&local_48);
    puVar7 = local_48;
    (**(code **)(*plVar4 + 8))(plVar4,&local_58);
    lVar3 = *plVar5;
    local_68 = local_58;
  }
  bVar1 = (**(code **)(lVar3 + 0x40))(plVar5,local_68,puVar7);
  if (local_48 != (undefined8 *)0x0) {
    (**(code **)*local_48)(local_48,1);
  }
  uVar8 = CONCAT71((int7)(uVar8 >> 8),(byte)uVar8 | bVar1);
LAB_147d3ea8a:
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar8 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d3ed43 FUN_147d3ed43 body=456 status=ok
// SIG undefined FUN_147d3ed43(void)

ulonglong FUN_147d3ed43(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined8 *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_5c;
  undefined4 local_54;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar5 = 0;
  local_68 = 0;
  local_60 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_5c = 0xffffffff00000080;
  local_54 = 0;
  local_48 = 0;
  local_98 = (undefined8 *)0x0;
  uStack_90 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0xffffffff;
  FUN_147973aee(&local_b8,param_3);
  uVar2 = FUN_147d3f595(param_1,&local_b8);
  uStack_90 = CONCAT44(uStack_90._4_4_,1);
  FUN_147d4ae54(&local_98,0);
  *local_98 = uVar2;
  if (0 < (int)(uint)uStack_90) {
    do {
      lVar1 = local_98[(ulonglong)(uint)uStack_90 - 1];
      uStack_90 = CONCAT44(uStack_90._4_4_,(uint)uStack_90 - 1);
      FUN_147d4aeda(&local_98);
      if (lVar1 != 0) {
        if (lVar1 == param_2) {
          uVar5 = CONCAT71((int7)((ulonglong)&local_98 >> 8),1);
          goto LAB_147d3eeb3;
        }
        FUN_147d3f61a(&local_98,lVar1 + 0x30);
        if (*(int *)(lVar1 + 0x48) != *(int *)(lVar1 + 0x74)) {
          lVar3 = lVar1 + 0x78;
          if (*(longlong *)(lVar1 + 0x80) != 0) {
            lVar3 = *(longlong *)(lVar1 + 0x80);
          }
          iVar4 = *(int *)(lVar3 + (ulonglong)
                                   (*(int *)(lVar1 + 0x88) - 1U & *(uint *)(param_3 + 0x10)) * 4);
          if (iVar4 != -1) {
            do {
              lVar3 = *(longlong *)(lVar1 + 0x40) + (longlong)iVar4 * 0x20;
              if (*(uint *)(*(longlong *)(lVar1 + 0x40) + (longlong)iVar4 * 0x20) ==
                  *(uint *)(param_3 + 0x10)) {
                if (lVar3 != -8 && lVar3 != 0) {
                  FUN_147d3f61a(&local_98);
                }
                break;
              }
              iVar4 = *(int *)(lVar3 + 0x18);
            } while (iVar4 != -1);
          }
        }
      }
    } while (0 < (int)(uint)uStack_90);
    uVar5 = 0;
  }
LAB_147d3eeb3:
  if (local_98 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  local_40 = 0;
  FUN_147d4adc6();
  FUN_14051bf10(param_3);
  if ((local_38 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5 & 0xffffffff;
}



// FUNCTION 147d3ef0c FUN_147d3ef0c body=175 status=ok
// SIG undefined FUN_147d3ef0c(void)

void FUN_147d3ef0c(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  code *pcVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  pcVar2 = (code *)*param_2;
  plVar6 = param_2 + 4;
  if ((longlong *)param_2[2] != (longlong *)0x0) {
    plVar6 = (longlong *)param_2[2];
  }
  local_38 = param_1;
  uVar5 = (**(code **)(*plVar6 + 8))();
  (*pcVar2)(uVar5,&local_38);
  iVar1 = *(int *)(param_1 + 0x38);
  if ((longlong)iVar1 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x30);
    lVar7 = 0;
    do {
      lVar4 = *(longlong *)(lVar3 + lVar7);
      if ((lVar4 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar4);
      }
      FUN_147d3ef0c(lVar4,param_2);
      lVar7 = lVar7 + 8;
    } while ((longlong)iVar1 * 8 != lVar7);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d3efbc FUN_147d3efbc body=34 status=ok
// SIG undefined FUN_147d3efbc(void)

bool FUN_147d3efbc(longlong param_1,char param_2)

{
  longlong lVar1;
  bool bVar2;
  
  if (param_2 == '\0') {
    bVar2 = (bool)(*(byte *)(param_1 + 0xe8) & 1);
  }
  else {
    lVar1 = FUN_147d3efde();
    bVar2 = lVar1 != 0;
  }
  return bVar2;
}



// FUNCTION 147d3efde FUN_147d3efde body=78 status=ok
// SIG undefined FUN_147d3efde(void)

longlong FUN_147d3efde(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  while( true ) {
    if (param_1 == 0) {
      return 0;
    }
    if ((*(byte *)(param_1 + 0xe8) & 1) != 0) {
      return param_1;
    }
    if (*(longlong *)(param_1 + 0x90) == 0) {
      return 0;
    }
    uVar2 = FUN_1459e9f38();
    cVar1 = FUN_144a7ca96((longlong *)(param_1 + 0x90),uVar2);
    if (cVar1 == '\0') break;
    param_1 = *(longlong *)(param_1 + 0x90);
    if (param_1 == 0) {
      return 0;
    }
  }
  return 0;
}



// FUNCTION 147d3f032 FUN_147d3f032 body=69 status=ok
// SIG undefined FUN_147d3f032(void)

void FUN_147d3f032(undefined8 param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [8];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  FUN_147d3f078(param_1,local_18);
  FUN_147045aca(local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d3f078 FUN_147d3f078 body=190 status=ok
// SIG undefined FUN_147d3f078(void)

longlong * FUN_147d3f078(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_1 + 0x90) != 0) {
    uVar3 = FUN_145b5ad08();
    bVar2 = FUN_144a7ca96((longlong *)(param_1 + 0x90),uVar3);
    lVar1 = *(longlong *)(param_1 + 0x90);
    if ((lVar1 != 0 & bVar2) == 1) {
      FUN_145dec25e(&local_30);
      if (*(longlong *)(param_1 + 0xf0) == local_30) {
        FUN_147d3f078(lVar1,param_2);
        goto LAB_147d3f0bc;
      }
    }
  }
  FUN_145dec25e(&local_38);
  if (*(longlong *)(param_1 + 0xf0) == local_38) {
    FUN_1470459da(param_2);
  }
  else {
    *param_2 = *(longlong *)(param_1 + 0xf0);
  }
LAB_147d3f0bc:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d3f138 FUN_147d3f138 body=216 status=ok
// SIG undefined FUN_147d3f138(void)

longlong FUN_147d3f138(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_147d3f078(param_1,local_28);
  if (*(longlong *)(param_1 + 0x90) == 0) {
    lVar4 = *(longlong *)(param_1 + 0xf8);
    if (lVar4 != 0) goto LAB_147d3f171;
  }
  else {
    uVar2 = FUN_145b5ad08();
    cVar1 = FUN_144a7ca96(param_1 + 0x90,uVar2);
    if (cVar1 == '\0') {
      lVar5 = 0;
    }
    else {
      lVar5 = *(longlong *)(param_1 + 0x90);
    }
    lVar4 = *(longlong *)(param_1 + 0xf8);
    if (lVar4 != 0) goto LAB_147d3f171;
    if (lVar5 != 0) {
      FUN_145dec25e(&local_30);
      if (*(longlong *)(param_1 + 0xf0) == local_30) {
        lVar4 = FUN_147d3f138(lVar5);
        goto LAB_147d3f171;
      }
    }
  }
  plVar3 = (longlong *)FUN_147045aca(local_28);
  if (plVar3 == (longlong *)0x0) {
    lVar4 = 0;
  }
  else {
    lVar4 = (**(code **)(*plVar3 + 0x60))(plVar3);
  }
LAB_147d3f171:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d3f212 FUN_147d3f212 body=90 status=ok
// SIG undefined FUN_147d3f212(void)

undefined8 * FUN_147d3f212(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_2 = 0;
  iVar1 = *(int *)(param_1 + 0x108);
  _Src = *(void **)(param_1 + 0x100);
  *(int *)(param_2 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_147d4ad64(param_2,iVar1,0);
    memcpy((void *)*param_2,_Src,(longlong)iVar1 << 3);
  }
  return param_2;
}



// FUNCTION 147d3f26c FUN_147d3f26c body=311 status=ok
// SIG undefined FUN_147d3f26c(void)

void FUN_147d3f26c(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar6 = *(int *)(param_1 + 0x38);
  if (0 < (longlong)iVar6) {
    iVar7 = -iVar6;
    uVar5 = (longlong)iVar6;
    do {
      cVar3 = FUN_147d3ea58(*(undefined8 *)(*(longlong *)(param_1 + 0x30) + -8 + uVar5 * 8),param_1)
      ;
      if (cVar3 == '\0') {
        *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x30) + -8 + uVar5 * 8) + 0x90) = 0;
        uVar4 = *(uint *)(param_1 + 0x38);
        if (uVar5 != uVar4) {
          iVar6 = iVar7 + uVar4;
          if (0 < iVar6) {
            iVar6 = 1;
          }
          memmove((void *)(*(longlong *)(param_1 + 0x30) + uVar5 * 8 + -8),
                  (void *)(*(longlong *)(param_1 + 0x30) + (longlong)(int)(uVar4 - iVar6) * 8),
                  (longlong)iVar6 << 3);
          uVar4 = *(uint *)(param_1 + 0x38);
        }
        *(uint *)(param_1 + 0x38) = uVar4 - 1;
        FUN_147d4a50e(param_1 + 0x30);
      }
      iVar7 = iVar7 + 1;
      bVar2 = 1 < uVar5;
      uVar5 = uVar5 - 1;
    } while (bVar2);
  }
  if ((*(longlong *)(param_1 + 0x90) != 0) && (cVar3 = FUN_147d3ea58(param_1), cVar3 == '\0')) {
    lVar1 = *(longlong *)(param_1 + 0x90);
    local_38 = param_1;
    if ((param_1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(param_1);
    }
    FUN_147d3f3a4(lVar1 + 0x30,&local_38);
    *(undefined8 *)(param_1 + 0x90) = 0;
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147d3f3a4 FUN_147d3f3a4 body=215 status=ok
// SIG undefined FUN_147d3f3a4(void)

void FUN_147d3f3a4(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  longlong lVar6;
  
  iVar3 = (int)param_1[1];
  if (0 < iVar3) {
    lVar6 = 0;
    bVar5 = false;
    do {
      while( true ) {
        lVar1 = *param_1;
        lVar2 = *param_2;
        if ((lVar2 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar2);
          iVar3 = (int)param_1[1];
        }
        if (*(longlong *)(lVar1 + lVar6 * 8) != lVar2) break;
        iVar4 = iVar3 + ~(uint)lVar6;
        if (iVar4 != 0) {
          if (0 < iVar4) {
            iVar4 = 1;
          }
          memmove((void *)(*param_1 + lVar6 * 8),(void *)(*param_1 + (longlong)(iVar3 - iVar4) * 8),
                  (longlong)iVar4 << 3);
          iVar3 = (int)param_1[1];
        }
        iVar3 = iVar3 + -1;
        *(int *)(param_1 + 1) = iVar3;
        bVar5 = true;
        if (iVar3 <= lVar6) goto LAB_147d3f463;
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < iVar3);
    if (bVar5) {
LAB_147d3f463:
      FUN_147d4a50e(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 147d3f47c FUN_147d3f47c body=12 status=ok
// SIG undefined FUN_147d3f47c(void)

void FUN_147d3f47c(longlong param_1)

{
  FUN_14704569a(param_1 + 0x90);
  return;
}



// FUNCTION 147d3f488 FUN_147d3f488 body=90 status=ok
// SIG undefined FUN_147d3f488(void)

undefined8 * FUN_147d3f488(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_2 = 0;
  iVar1 = *(int *)(param_1 + 0xc0);
  _Src = *(void **)(param_1 + 0xb8);
  *(int *)(param_2 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_147d4ad64(param_2,iVar1,0);
    memcpy((void *)*param_2,_Src,(longlong)iVar1 << 3);
  }
  return param_2;
}



// FUNCTION 147d3f4e2 FUN_147d3f4e2 body=179 status=ok
// SIG undefined FUN_147d3f4e2(void)

void FUN_147d3f4e2(longlong param_1)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = *(int *)(param_1 + 0x38);
  if (0 < (longlong)iVar5) {
    iVar6 = -iVar5;
    uVar4 = (longlong)iVar5;
    do {
      cVar2 = FUN_147d3ea58(*(undefined8 *)(*(longlong *)(param_1 + 0x30) + -8 + uVar4 * 8),param_1)
      ;
      if (cVar2 == '\0') {
        *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x30) + -8 + uVar4 * 8) + 0x90) = 0;
        uVar3 = *(uint *)(param_1 + 0x38);
        if (uVar4 != uVar3) {
          iVar5 = iVar6 + uVar3;
          if (0 < iVar5) {
            iVar5 = 1;
          }
          memmove((void *)(*(longlong *)(param_1 + 0x30) + uVar4 * 8 + -8),
                  (void *)(*(longlong *)(param_1 + 0x30) + (longlong)(int)(uVar3 - iVar5) * 8),
                  (longlong)iVar5 << 3);
          uVar3 = *(uint *)(param_1 + 0x38);
        }
        *(uint *)(param_1 + 0x38) = uVar3 - 1;
        FUN_147d4a50e(param_1 + 0x30);
      }
      iVar6 = iVar6 + 1;
      bVar1 = 1 < uVar4;
      uVar4 = uVar4 - 1;
    } while (bVar1);
  }
  return;
}



// FUNCTION 147d3f595 FUN_147d3f595 body=131 status=ok
// SIG undefined FUN_147d3f595(void)

longlong FUN_147d3f595(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  do {
    lVar2 = param_1;
    lVar1 = FUN_1459e9f38();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < *(int *)(lVar1 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8)
        != lVar1 + 0x30)) break;
    FUN_147d3e9a8(lVar2,&local_28,*(undefined4 *)(param_2 + 0x10));
    param_1 = local_28;
  } while (local_28 != 0);
  FUN_14051bf10(param_2);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d3f61a FUN_147d3f61a body=94 status=ok
// SIG undefined FUN_147d3f61a(void)

void FUN_147d3f61a(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_2 + 1);
  if (uVar1 == 0) {
    return;
  }
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + uVar1;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
    FUN_147d4ae54(param_1,iVar2);
  }
  FUN_147d4af75((longlong)iVar2 * 8 + *param_1,*param_2,uVar1);
  return;
}



// FUNCTION 147d3f67e FUN_147d3f67e body=59 status=ok
// SIG undefined FUN_147d3f67e(void)

undefined1 * FUN_147d3f67e(undefined1 *param_1)

{
  *param_1 = 2;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0x3f800000;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x20) = 0x42c80000;
  *(undefined4 *)(param_1 + 0x24) = 0x447a0000;
  FUN_14109baa4(param_1 + 0x28);
  return param_1;
}



// FUNCTION 147d3f6ba FUN_147d3f6ba body=96 status=ok
// SIG undefined FUN_147d3f6ba(void)

void FUN_147d3f6ba(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  ulonglong uVar3;
  
  if (param_2 != 0) {
    *(longlong *)(param_1 + 0x8c) = param_2;
    plVar2 = (longlong *)FUN_1412feae2();
    plVar2 = (longlong *)(**(code **)(*plVar2 + 0x18))(plVar2,param_2);
    if (plVar2 != (longlong *)0x0) {
      uVar3 = CONCAT71((int7)((ulonglong)param_2 >> 8),*(undefined1 *)(param_1 + 0xe4)) &
              0xffffffffffffff04;
      cVar1 = (**(code **)(*plVar2 + 0x10))(plVar2,CONCAT71((int7)(uVar3 >> 8),(byte)uVar3 >> 2));
      *(byte *)(param_1 + 0xe4) = *(byte *)(param_1 + 0xe4) & 0xf7 | cVar1 << 3;
    }
  }
  return;
}



// FUNCTION 147d3f71a FUN_147d3f71a body=170 status=ok
// SIG undefined FUN_147d3f71a(void)

float FUN_147d3f71a(longlong param_1)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  
  if ((*(byte *)(param_1 + 0x34c) & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x34d);
    if ((bVar1 & 4) == 0) {
      if ((bVar1 & 8) == 0) {
        fVar2 = (float)FUN_14795d104(*(undefined1 *)(param_1 + 0x180));
        fVar3 = (float)*(int *)(param_1 + 0x370);
        if (0.0 <= fVar2 && fVar2 <= (float)*(int *)(param_1 + 0x370)) {
          fVar3 = fVar2;
        }
        *(float *)(param_1 + 0x348) = fVar3;
        *(byte *)(param_1 + 0x34d) = *(byte *)(param_1 + 0x34d) | 4;
      }
      else {
        fVar3 = (float)*(int *)(param_1 + 0x370);
        *(float *)(param_1 + 0x348) = fVar3;
        *(byte *)(param_1 + 0x34d) = bVar1 | 4;
      }
    }
    else {
      fVar3 = *(float *)(param_1 + 0x348);
    }
  }
  else if (*(int *)(param_1 + 0x370) < 1) {
    fVar3 = 48000.0;
  }
  else {
    fVar3 = (float)*(int *)(param_1 + 0x370);
  }
  return fVar3;
}



// FUNCTION 147d3f7c4 FUN_147d3f7c4 body=124 status=ok
// SIG undefined FUN_147d3f7c4(void)

ulonglong FUN_147d3f7c4(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)*(byte *)(param_1 + 0x184);
  if (*(byte *)(param_1 + 0x184) == 5) {
    if (DAT_14cb08fc8 == '\x01') {
      uVar3 = (ulonglong)DAT_14c761b64;
    }
    else {
      plVar1 = (longlong *)FUN_145b54fcc();
      lVar2 = plVar1[0x22];
      if (lVar2 == 0) {
        (**(code **)(*plVar1 + 1000))(plVar1);
        lVar2 = plVar1[0x22];
      }
      uVar3 = 4;
      if ((byte)*(int *)(lVar2 + 0x15c) < 6) {
        uVar3 = 0x60403020100U >> ((byte)(*(int *)(lVar2 + 0x15c) << 3) & 0x3f) & 0xffffffff;
      }
      DAT_14c761b64 = (byte)uVar3;
      DAT_14cb08fc8 = '\x01';
    }
  }
  return uVar3;
}



// FUNCTION 147d3f840 FUN_147d3f840 body=714 status=ok
// SIG undefined FUN_147d3f840(void)

undefined8 * FUN_147d3f840(longlong param_1,undefined8 *param_2,longlong param_3)

{
  char cVar1;
  byte bVar2;
  wchar_t *pwVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  undefined1 auStack_898 [32];
  undefined8 *local_878;
  undefined8 uStack_870;
  undefined8 local_860;
  wchar_t *local_858;
  wchar_t *local_850;
  undefined1 *local_848;
  char local_840;
  wchar_t local_838 [1035];
  undefined1 local_22 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_898;
  for (; param_3 != 0; param_3 = *(longlong *)(param_3 + 0x20)) {
    if ((*(uint *)(param_3 + 8) & 0x30) != 0) goto LAB_147d3f908;
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caced84) {
    FUN_144b3d300(&DAT_14caced84);
    if (DAT_14caced84 == -1) {
      if (DAT_14c846b14 == '\0') {
        FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                      L"Attempting to get the command line but it hasn\'t been initialized yet.");
      }
      cVar1 = FUN_14054d46e(&DAT_14c846b20,L"nosound");
      if (cVar1 == '\0') {
        DAT_14caced80 = 0;
      }
      else {
        if (DAT_14c846b14 == '\0') {
          FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                        L"Attempting to get the command line but it hasn\'t been initialized yet.");
        }
        bVar2 = FUN_14054d46e(&DAT_14c846b20,L"enablesound");
        DAT_14caced80 = bVar2 ^ 1;
      }
      _Init_thread_footer(&DAT_14caced84);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caced8c) {
    FUN_144b3d300(&DAT_14caced8c);
    if (DAT_14caced8c == -1) {
      DAT_14caced88 = 1;
      if (DAT_14c866ff0 == '\0') {
        if (DAT_14c872bf0 == '\x01') {
          DAT_14caced88 = DAT_14c872bc0 ^ 1;
        }
        else {
          DAT_14caced88 = 0;
        }
      }
      _Init_thread_footer(&DAT_14caced8c);
    }
  }
  if ((DAT_14caced88 == 0) && ((DAT_14caced80 & 1) == 0)) {
    if (*(char *)(param_1 + 0x78) != '\x04') {
      FUN_14795d95c(param_1 + 0x10,param_2);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_898);
    }
    local_878 = (undefined8 *)0x0;
    uStack_870 = 0;
    FUN_147d44e0a(param_1 + 0x50,&local_878);
    puVar5 = local_878;
    if ((int)uStack_870 == 1) {
      local_858 = local_838;
      local_840 = '\0';
      local_848 = local_22;
      local_850 = local_858;
      FUN_14005eb5c(local_878,&local_858);
      *local_850 = L'\0';
      pwVar3 = wcschr(local_858,L'_');
      if (pwVar3 != (wchar_t *)0x0) {
        *local_850 = L'\0';
        uVar4 = (longlong)pwVar3 - (longlong)local_858;
        *local_850 = L'\0';
        puVar5 = &local_860;
        FUN_1446f82e2(puVar5,uVar4 >> 1 & 0xffffffff,local_858,1);
      }
      *param_2 = *puVar5;
      if (local_840 == '\x01') {
        FUN_1400020a8(local_858);
      }
    }
    else {
      *param_2 = 0;
    }
    if (local_878 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
LAB_147d3f908:
    *param_2 = 0;
  }
  if ((local_20 ^ (ulonglong)auStack_898) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147d3fb0c FUN_147d3fb0c body=456 status=ok
// SIG undefined FUN_147d3fb0c(void)

void FUN_147d3fb0c(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  void *_Src;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 *puVar11;
  
  plVar1 = (longlong *)(param_1 + 0xa0);
  iVar4 = *(int *)(param_1 + 0xac);
  FUN_145879583(*(undefined8 *)(param_1 + 0xa0),*(undefined4 *)(param_1 + 0xa8));
  *(undefined4 *)(param_1 + 0xa8) = 0;
  if ((iVar4 < 0) && (*(int *)(param_1 + 0xac) != 0)) {
    FUN_147d4afc6(plVar1,0);
  }
  plVar2 = (longlong *)(param_1 + 0xb0);
  iVar4 = *(int *)(param_1 + 0xbc);
  FUN_145879583(*(undefined8 *)(param_1 + 0xb0),*(undefined4 *)(param_1 + 0xb8));
  *(undefined4 *)(param_1 + 0xb8) = 0;
  if ((iVar4 < 0) && (*(int *)(param_1 + 0xbc) != 0)) {
    FUN_147d4afc6(plVar2,0);
  }
  lVar8 = param_2[1];
  if ((longlong)(int)lVar8 != 0) {
    lVar6 = *param_2;
    lVar10 = 0;
    do {
      if (*(char *)(lVar6 + 0x20 + lVar10) == '\0') {
        iVar4 = *(int *)(param_1 + 0xa8);
        *(uint *)(param_1 + 0xa8) = iVar4 + 1U;
        plVar9 = plVar1;
        if (*(uint *)(param_1 + 0xac) < iVar4 + 1U) {
          FUN_147d4b036(plVar1,iVar4);
        }
      }
      else {
        iVar4 = *(int *)(param_1 + 0xb8);
        *(uint *)(param_1 + 0xb8) = iVar4 + 1U;
        plVar9 = plVar2;
        if (*(uint *)(param_1 + 0xbc) < iVar4 + 1U) {
          FUN_147d4b036(plVar2,iVar4);
        }
      }
      lVar7 = *plVar9;
      puVar3 = (undefined4 *)(lVar7 + (longlong)iVar4 * 0x28);
      *puVar3 = *(undefined4 *)(lVar6 + lVar10);
      *(undefined8 *)(puVar3 + 2) = 0;
      iVar5 = *(int *)(lVar6 + 0x10 + lVar10);
      _Src = *(void **)(lVar6 + 8 + lVar10);
      puVar3[4] = iVar5;
      if ((longlong)iVar5 == 0) {
        puVar3[5] = 0;
      }
      else {
        puVar11 = (undefined8 *)(lVar7 + (longlong)iVar4 * 0x28 + 8);
        FUN_1446dd670(puVar11,iVar5,0);
        memcpy((void *)*puVar11,_Src,(longlong)iVar5 * 2);
      }
      *(undefined1 *)(puVar3 + 8) = *(undefined1 *)(lVar6 + 0x20 + lVar10);
      *(undefined8 *)(puVar3 + 6) = *(undefined8 *)(lVar6 + 0x18 + lVar10);
      lVar10 = lVar10 + 0x28;
    } while ((longlong)(int)lVar8 * 0x28 != lVar10);
  }
  return;
}



// FUNCTION 147d3fcd4 FUN_147d3fcd4 body=485 status=ok
// SIG undefined FUN_147d3fcd4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_147d3fcd4(undefined8 *param_1,undefined2 *param_2,longlong param_3)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined1 auStack_78 [40];
  undefined2 *local_50;
  int local_48;
  undefined2 *local_40;
  int local_38;
  undefined2 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = param_2;
  if (param_3 == 0) {
    param_3 = FUN_1461a8840(0,0);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb08ff8) && (FUN_144b3d300(&DAT_14cb08ff8), DAT_14cb08ff8 == -1)) {
    DAT_14cb08ff0 = (undefined2 *)0x0;
    _Init_thread_footer(&DAT_14cb08ff8);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb09008) && (FUN_144b3d300(&DAT_14cb09008), DAT_14cb09008 == -1)) {
    _DAT_14cb09000 = (undefined2 *)0x0;
    _Init_thread_footer(&DAT_14cb09008);
  }
  if (((DAT_14cb09000 != (int)param_2) ||
      (puVar2 = DAT_14cb08ff0, puVar1 = _DAT_14cb09000,
      DAT_14cb09004 != (int)((ulonglong)param_2 >> 0x20))) &&
     (puVar2 = param_2, puVar1 = param_2, param_3 != 0)) {
    FUN_1400021e4(&local_30,&local_50);
    puVar2 = local_50;
    if (local_48 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    FUN_140056680(&local_40,puVar2);
    if (local_50 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    FUN_14706473c(param_3,&local_40);
    puVar2 = local_40;
    if (local_38 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    FUN_1446f470e(&local_50,puVar2,1);
    DAT_14cb08ff0 = local_50;
    puVar2 = DAT_14cb08ff0;
    puVar1 = param_2;
    if (local_40 != (undefined2 *)0x0) {
      FUN_1400020a8();
      puVar2 = DAT_14cb08ff0;
      puVar1 = param_2;
    }
  }
  _DAT_14cb09000 = puVar1;
  DAT_14cb08ff0 = puVar2;
  *param_1 = DAT_14cb08ff0;
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 147d3feba FUN_147d3feba body=32 status=ok
// SIG undefined FUN_147d3feba(void)

undefined8 FUN_147d3feba(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_14795d952(param_1 + 0x10);
  return *(undefined8 *)(*plVar1 + (longlong)param_2 * 8);
}



// FUNCTION 147d3feda FUN_147d3feda body=215 status=ok
// SIG undefined FUN_147d3feda(void)

undefined8 FUN_147d3feda(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  void *_Src;
  undefined1 auStack_68 [40];
  void *local_40;
  void *local_38;
  ulonglong uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (((int)param_1[1] < 1) || (uVar1 = *param_1, (int)uVar1 < 1)) {
LAB_147d3ff40:
    uVar2 = 0;
  }
  else {
    _Src = *(void **)(param_1 + 0xe);
    if (_Src == (void *)0x0) {
      if (param_1[1] == uVar1) {
        FUN_14143acfc(param_1 + 4,param_1 + 0xe,1);
      }
      else {
        local_38 = (void *)0x0;
        uStack_30 = (ulonglong)uVar1;
        FUN_1447403be(&local_38,0);
        local_40 = local_38;
        FUN_14143acfc(param_1 + 4,&local_40,1);
        memcpy((void *)*param_2,local_38,(longlong)(int)param_1[1]);
        if (local_38 != (void *)0x0) {
          FUN_1400020a8();
        }
      }
      _Src = *(void **)(param_1 + 0xe);
      if (_Src == (void *)0x0) goto LAB_147d3ff40;
      uVar1 = *param_1;
    }
    memcpy((void *)*param_2,_Src,(longlong)(int)uVar1);
    uVar2 = 1;
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d3ffb2 FUN_147d3ffb2 body=142 status=ok
// SIG undefined FUN_147d3ffb2(void)

undefined8 * FUN_147d3ffb2(longlong param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = (ulonglong)*(int *)(param_1 + 4);
  if ((0 < (longlong)uVar1) && (uVar1 <= *(uint5 *)(param_1 + 0x18))) {
    local_28 = 0;
    FUN_14143acfc(param_1 + 0x10,&local_28,1);
    *param_2 = local_28;
    param_2[1] = uVar1;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
  }
  *param_2 = 0;
  param_2[1] = 0;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d40044 FUN_147d40044 body=745 status=ok
// SIG undefined FUN_147d40044(void)

void FUN_147d40044(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  byte bVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  switchD_143c3d4dc::caseD_38();
  if (DAT_14cb0d2b0 != 0) {
    FUN_14484255c(param_2,0x3f0);
    FUN_14484255c(param_2,(longlong)(int)param_1[0x61] << 2);
    FUN_14484255c(param_2,(longlong)(int)param_1[99] * 0x18);
    lVar4 = param_1[99];
    if ((longlong)(int)lVar4 != 0) {
      lVar1 = param_1[0x62];
      lVar7 = 0;
      do {
        FUN_14484255c(param_2,(longlong)*(int *)(lVar1 + 8 + lVar7) << 3);
        lVar7 = lVar7 + 0x18;
      } while ((longlong)(int)lVar4 * 0x18 != lVar7);
    }
    FUN_14484255c(param_2,(longlong)(int)param_1[0x65] << 3);
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14caced84) {
      FUN_144b3d300(&DAT_14caced84);
      if (DAT_14caced84 == -1) {
        if (DAT_14c846b14 == '\0') {
          FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                        L"Attempting to get the command line but it hasn\'t been initialized yet.");
        }
        cVar3 = FUN_14054d46e(&DAT_14c846b20,L"nosound");
        if (cVar3 == '\0') {
          DAT_14caced80 = 0;
        }
        else {
          if (DAT_14c846b14 == '\0') {
            FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                          L"Attempting to get the command line but it hasn\'t been initialized yet."
                         );
          }
          bVar2 = FUN_14054d46e(&DAT_14c846b20,L"enablesound");
          DAT_14caced80 = bVar2 ^ 1;
        }
        _Init_thread_footer(&DAT_14caced84);
      }
    }
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14caced8c) {
      FUN_144b3d300(&DAT_14caced8c);
      if (DAT_14caced8c == -1) {
        DAT_14caced88 = 1;
        if (DAT_14c866ff0 == '\0') {
          if (DAT_14c872bf0 == '\x01') {
            DAT_14caced88 = DAT_14c872bc0 ^ 1;
          }
          else {
            DAT_14caced88 = 0;
          }
        }
        _Init_thread_footer(&DAT_14caced8c);
      }
    }
    if ((DAT_14caced88 == 0) && ((DAT_14caced80 & 1) == 0)) {
      FUN_14484255c(param_2,*(undefined8 *)(param_1[0x7c] + 8));
    }
    if ((*(longlong *)(DAT_14cb0d2b0 + 0xf50) != 0) && (*(longlong *)(DAT_14cb0d2b0 + 0xf60) != 0))
    {
      lVar4 = FUN_1479735a4(*(longlong *)(DAT_14cb0d2b0 + 0xf50) + 0x90);
      if (lVar4 != 0) {
        if ((*(char *)((longlong)param_1 + 0x181) == '\x02') && (param_1[0x75] != 0)) {
          FUN_14484255c(param_2,*(int *)((longlong)param_1 + 0x36c) * 0x2580);
        }
        cVar3 = FUN_147d35f64(param_1,0);
        if (cVar3 == '\0') {
          uVar6 = 0;
          uVar5 = FUN_1461a8840(0,0);
          lVar4 = (**(code **)(*param_1 + 0x3f0))
                            (param_1,*(undefined8 *)(param_1[0x7c] + 0x8c),uVar5,0);
          if (lVar4 != 0) {
            uVar6 = (ulonglong)*(uint5 *)(lVar4 + 8);
          }
          FUN_14484255c(param_2,uVar6);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 147d4032e FUN_147d4032e body=9 status=ok
// SIG undefined FUN_147d4032e(void)

void FUN_147d4032e(void)

{
  FUN_1461a8840(0,0);
  return;
}



// FUNCTION 147d40338 FUN_147d40338 body=64 status=ok
// SIG undefined FUN_147d40338(void)

undefined4 FUN_147d40338(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  uVar1 = FUN_1461a8840(0,0);
  lVar2 = (**(code **)(*param_1 + 0x3f0))(param_1,param_2,uVar1,0);
  if (lVar2 != 0) {
    uVar3 = *(undefined4 *)(lVar2 + 8);
  }
  return uVar3;
}



// FUNCTION 147d40378 FUN_147d40378 body=38 status=ok
// SIG undefined FUN_147d40378(void)

undefined8 FUN_147d40378(undefined8 param_1,undefined8 param_2)

{
  FUN_1446f470e(param_2,L"SoundExporterWAV",1);
  return param_2;
}



// FUNCTION 147d4039e FUN_147d4039e body=211 status=ok
// SIG undefined FUN_147d4039e(void)

undefined8 FUN_147d4039e(longlong param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  int local_40;
  undefined4 local_3c;
  undefined2 *local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = (undefined2 *)0x0;
  uStack_30 = 0;
  if (*(int *)(param_1 + 0x36c) == 0) {
    FUN_14020fad6(&local_38,L"Unconverted");
    local_40 = (int)uStack_30;
  }
  else {
    FUN_140002266(&local_48,L"%d Channels");
    local_38 = local_48;
    uStack_30 = CONCAT44(local_3c,local_40);
  }
  puVar1 = &DAT_149dfb77a;
  if (local_40 != 0) {
    puVar1 = local_38;
  }
  FUN_140002266(param_2,L"%3.2fs %s",(double)*(float *)(param_1 + 0x100),puVar1);
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d40478 FUN_147d40478 body=77 status=ok
// SIG undefined FUN_147d40478(void)

void FUN_147d40478(undefined8 param_1)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1427dc336(local_20);
  switchD_143c3d4dc::caseD_3d(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d404c6 FUN_147d404c6 body=1 status=ok
// SIG undefined FUN_147d404c6(void)

void FUN_147d404c6(void)

{
  return;
}



// FUNCTION 147d404c8 FUN_147d404c8 body=88 status=ok
// SIG undefined FUN_147d404c8(void)

undefined8 * FUN_147d404c8(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x3e0);
  *param_2 = 0;
  iVar1 = *(int *)(lVar2 + 0xa8);
  uVar3 = *(undefined8 *)(lVar2 + 0xa0);
  *(int *)(param_2 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_147d4b0ca(param_2,iVar1);
    FUN_147d4b134(*param_2,uVar3,iVar1);
  }
  return param_2;
}



// FUNCTION 147d40520 FUN_147d40520 body=88 status=ok
// SIG undefined FUN_147d40520(void)

undefined8 * FUN_147d40520(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x3e0);
  *param_2 = 0;
  iVar1 = *(int *)(lVar2 + 0xb8);
  uVar3 = *(undefined8 *)(lVar2 + 0xb0);
  *(int *)(param_2 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_147d4b0ca(param_2,iVar1);
    FUN_147d4b134(*param_2,uVar3,iVar1);
  }
  return param_2;
}



// FUNCTION 147d40596 FUN_147d40596 body=535 status=ok
// SIG undefined FUN_147d40596(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_147d40596(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  undefined1 auStack_78 [40];
  undefined2 *local_50;
  int local_48;
  undefined2 *local_40;
  int local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = param_1;
  do {
    local_30 = param_2;
    if (lVar1 == 0) {
      lVar1 = FUN_1461a8840(0,0);
      if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_78);
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14cb08fd8) && (FUN_144b3d300(&DAT_14cb08fd8), DAT_14cb08fd8 == -1))
      {
        DAT_14cb08fd0 = (undefined2 *)0x0;
        _Init_thread_footer(&DAT_14cb08fd8);
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14cb08fe8) && (FUN_144b3d300(&DAT_14cb08fe8), DAT_14cb08fe8 == -1))
      {
        _DAT_14cb08fe0 = 0;
        _Init_thread_footer(&DAT_14cb08fe8);
      }
      if ((DAT_14cb08fe0 != (int)param_2) || (DAT_14cb08fe4 != (int)((ulonglong)param_2 >> 0x20))) {
        FUN_1400021e4(&local_30,&local_50);
        puVar3 = local_50;
        if (local_48 == 0) {
          puVar3 = &DAT_149dfb77a;
        }
        FUN_140056680(&local_40,puVar3);
        if (local_50 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        FUN_14706473c(lVar1,&local_40);
        puVar3 = local_40;
        if (local_38 == 0) {
          puVar3 = &DAT_149dfb77a;
        }
        FUN_1446f470e(&local_50,puVar3,1);
        DAT_14cb08fd0 = local_50;
        _DAT_14cb08fe0 = param_2;
        if (local_40 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
      }
      uVar2 = FUN_1401cf654(*(longlong *)(param_1 + 0x3e0) + 0x50,DAT_14cb08fd0);
LAB_147d40663:
      if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
        return uVar2;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    if ((*(uint *)(lVar1 + 8) & 0x30) != 0) {
      uVar2 = 0;
      goto LAB_147d40663;
    }
    lVar1 = *(longlong *)(lVar1 + 0x20);
  } while( true );
}



// FUNCTION 147d407c2 FUN_147d407c2 body=92 status=ok
// SIG undefined FUN_147d407c2(void)

undefined8 FUN_147d407c2(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  
  cVar2 = *(char *)(param_1 + 0x34e);
  lVar1 = *(longlong *)(param_1 + 0x3e0);
  if ((cVar2 == '\0') || ((*(byte *)(lVar1 + 0xe4) & 0x20) != 0)) {
    if ((*(byte *)(lVar1 + 0xe4) & 0x20) == 0) {
      iVar3 = 3;
      if (DAT_14c761b58 < 3) {
        iVar3 = DAT_14c761b58;
      }
      cVar2 = '\x01';
      if (1 < iVar3) {
        cVar2 = (char)iVar3;
      }
    }
    else {
      cVar2 = *(char *)(lVar1 + 0x78);
    }
  }
  return CONCAT71((int7)((ulonglong)lVar1 >> 8),0 < *(int *)(lVar1 + 0x20) && cVar2 != '\x04');
}



// FUNCTION 147d4081e FUN_147d4081e body=146 status=ok
// SIG undefined FUN_147d4081e(void)

void FUN_147d4081e(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  
  lVar1 = param_1[0x7c];
  if (*(char *)((longlong)param_1 + 0x34e) != '\0') {
    if (*(char *)(lVar1 + 0x78) != -1) {
      return;
    }
    *(char *)(lVar1 + 0x78) = *(char *)((longlong)param_1 + 0x34e);
    return;
  }
  if ((*(byte *)(lVar1 + 0xe4) & 0x20) != 0) {
    return;
  }
  lVar1 = (**(code **)(*param_1 + 0x318))(param_1);
  if (lVar1 != 0) {
    do {
      cVar2 = *(char *)(lVar1 + 0x1b1);
      if (cVar2 != '\0') break;
      lVar1 = *(longlong *)(lVar1 + 0x1e0);
    } while (lVar1 != 0);
    if (cVar2 != '\0') goto LAB_147d408a4;
  }
  iVar3 = 3;
  if (DAT_14c761b58 < 3) {
    iVar3 = DAT_14c761b58;
  }
  cVar2 = '\x01';
  if (1 < iVar3) {
    cVar2 = (char)iVar3;
  }
  *(byte *)(param_1[0x7c] + 0xe4) = *(byte *)(param_1[0x7c] + 0xe4) | 0x20;
LAB_147d408a4:
  *(char *)(param_1[0x7c] + 0x78) = cVar2;
  return;
}



// FUNCTION 147d408b0 FUN_147d408b0 body=184 status=ok
// SIG undefined FUN_147d408b0(void)

undefined8 FUN_147d408b0(longlong param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  byte local_38;
  longlong local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = FUN_1478b641e(param_2,param_3);
  if (((*(byte *)(param_2 + 0x199) & 4) != 0) && (0 < *(int *)(param_1 + 0x388))) {
    local_30 = param_1 + 0x380;
    local_58 = *(undefined8 *)(param_2 + 0x30);
    local_50 = *(undefined8 *)(param_2 + 8);
    local_40 = *(undefined4 *)(param_2 + 0x218);
    local_3c = *(undefined4 *)(param_1 + 0x100);
    local_38 = *(byte *)(param_1 + 0x34c) >> 6;
    local_28 = *(undefined4 *)(param_2 + 0x1b4);
    local_48 = uVar1;
    FUN_14372ab58();
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d409a6 FUN_147d409a6 body=79 status=ok
// SIG undefined FUN_147d409a6(void)

undefined8 FUN_147d409a6(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((*(int *)(param_1 + 0x318) < 1) && (*(int *)(param_1 + 0x328) < 1)) {
    uVar3 = 0;
  }
  else {
    iVar1 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
      FUN_147971e2e(param_2,iVar1);
    }
    lVar2 = *param_2;
    *(longlong *)(lVar2 + (longlong)iVar1 * 8) = param_1;
    uVar3 = CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
  }
  return uVar3;
}



// FUNCTION 147d40a0e FUN_147d40a0e body=148 status=ok
// SIG undefined FUN_147d40a0e(void)

void FUN_147d40a0e(longlong param_1,longlong *param_2)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  bool bVar4;
  
  if (*param_2 != 0) {
    pcVar1 = (char *)(param_1 + 0x34f);
    LOCK();
    bVar4 = *(char *)(param_1 + 0x34f) == '\0';
    if (bVar4) {
      *(char *)(param_1 + 0x34f) = '\x01';
    }
    UNLOCK();
    if (!bVar4) {
      FUN_1447d2058(pcVar1);
    }
    iVar3 = *(int *)(param_1 + 0x340);
    *(uint *)(param_1 + 0x340) = iVar3 + 1U;
    if (*(uint *)(param_1 + 0x344) < iVar3 + 1U) {
      FUN_147d4b2d6((longlong *)(param_1 + 0x338),iVar3);
    }
    *(longlong *)(*(longlong *)(param_1 + 0x338) + (longlong)iVar3 * 8) = *param_2;
    LOCK();
    cVar2 = *pcVar1;
    if (cVar2 == '\x01') {
      *pcVar1 = '\0';
    }
    UNLOCK();
    if (cVar2 != '\x01') {
      FUN_14008cdb0(pcVar1);
      return;
    }
  }
  return;
}



// FUNCTION 147d40aa2 FUN_147d40aa2 body=100 status=ok
// SIG undefined FUN_147d40aa2(void)

void FUN_147d40aa2(longlong param_1,longlong *param_2)

{
  bool bVar1;
  
  if (*param_2 != 0) {
    LOCK();
    bVar1 = *(char *)(param_1 + 0x34f) == '\0';
    if (bVar1) {
      *(char *)(param_1 + 0x34f) = '\x01';
    }
    UNLOCK();
    if (!bVar1) {
      FUN_1447d2058(param_1 + 0x34f);
    }
    FUN_147d40b06(param_1 + 0x338,param_2);
    LOCK();
    bVar1 = *(char *)(param_1 + 0x34f) == '\x01';
    if (bVar1) {
      *(char *)(param_1 + 0x34f) = '\0';
    }
    UNLOCK();
    if (!bVar1) {
      FUN_14008cdb0(param_1 + 0x34f);
      return;
    }
  }
  return;
}



// FUNCTION 147d40b06 FUN_147d40b06 body=192 status=ok
// SIG undefined FUN_147d40b06(void)

void FUN_147d40b06(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  
  iVar3 = (int)param_1[1];
  if (iVar3 < 1) {
    return;
  }
  lVar7 = 0;
  bVar4 = false;
  do {
    uVar5 = (uint)lVar7;
    lVar7 = (longlong)(int)uVar5;
    lVar1 = *param_1 + lVar7 * 8;
    lVar9 = 0;
    while (*(longlong *)(lVar1 + lVar9 * 8) != *param_2) {
      lVar2 = lVar7 + lVar9;
      lVar9 = lVar9 + 1;
      if ((longlong)iVar3 <= lVar2 + 1) {
        if (!bVar4) {
          return;
        }
        goto LAB_147d40bb2;
      }
    }
    iVar8 = (int)lVar9;
    if (~uVar5 + iVar3 != iVar8) {
      iVar6 = (~uVar5 + iVar3) - iVar8;
      if (0 < iVar6) {
        iVar6 = 1;
      }
      memmove((void *)(lVar1 + lVar9 * 8),(void *)(*param_1 + (longlong)(iVar3 - iVar6) * 8),
              (longlong)iVar6 << 3);
      iVar3 = (int)param_1[1];
    }
    lVar7 = lVar7 + lVar9;
    iVar3 = iVar3 + -1;
    *(int *)(param_1 + 1) = iVar3;
    bVar4 = true;
  } while ((int)(uVar5 + iVar8) < iVar3);
LAB_147d40bb2:
  FUN_147d4b1d8(param_1);
  return;
}



// FUNCTION 147d40bc6 FUN_147d40bc6 body=456 status=ok
// SIG undefined FUN_147d40bc6(void)

int FUN_147d40bc6(longlong param_1,float param_2,int param_3,longlong *param_4)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  float *pfVar13;
  float fVar14;
  undefined1 auStack_c8 [40];
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  iVar6 = *(int *)(param_1 + 0x318);
  if (param_3 < iVar6) {
    lVar8 = *(longlong *)(param_1 + 0x310);
    pfVar13 = (float *)(lVar8 + (longlong)param_3 * 0x18 + 0x10);
    do {
      fVar14 = *pfVar13;
      iVar10 = param_3 + 1;
      if (fVar14 <= param_2) {
        fVar1 = *(float *)(lVar8 + 0x10 + (longlong)(iVar10 % iVar6) * 0x18);
        if (param_2 < fVar1) {
          if (0 < *(int *)(param_1 + 0x308)) {
            fVar14 = (param_2 - fVar14) / (fVar1 - fVar14);
            lVar11 = 0;
            do {
              uVar2 = *(undefined4 *)(*(longlong *)(param_1 + 0x300) + lVar11 * 4);
              lVar12 = *(longlong *)(lVar8 + (longlong)(iVar10 % iVar6) * 0x18);
              fVar1 = *(float *)(*(longlong *)(pfVar13 + -4) + lVar11 * 8);
              fVar3 = *(float *)(*(longlong *)(pfVar13 + -4) + 4 + lVar11 * 8);
              fVar4 = *(float *)(lVar12 + lVar11 * 8);
              fVar5 = *(float *)(lVar12 + 4 + lVar11 * 8);
              iVar7 = (int)param_4[1];
              lVar12 = (longlong)iVar7;
              *(uint *)(param_4 + 1) = iVar7 + 1U;
              if (*(uint *)((longlong)param_4 + 0xc) < iVar7 + 1U) {
                FUN_1479d7cc6(param_4,iVar7);
              }
              lVar9 = *param_4;
              *(undefined4 *)(lVar9 + lVar12 * 0xc) = uVar2;
              *(float *)(lVar9 + 4 + lVar12 * 0xc) = (fVar4 - fVar1) * fVar14 + fVar1;
              *(float *)(lVar9 + 8 + lVar12 * 0xc) = (fVar5 - fVar3) * fVar14 + fVar3;
              lVar11 = lVar11 + 1;
            } while (lVar11 < *(int *)(param_1 + 0x308));
          }
          FUN_1479d7d5a(*param_4,(int)param_4[1]);
          goto LAB_147d40c70;
        }
      }
      pfVar13 = pfVar13 + 6;
      param_3 = iVar10;
    } while (iVar6 != iVar10);
  }
  param_3 = -1;
LAB_147d40c70:
  if ((local_a0 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_3;
}



// FUNCTION 147d40d90 FUN_147d40d90 body=689 status=ok
// SIG undefined FUN_147d40d90(void)

ulonglong FUN_147d40d90(longlong param_1,float param_2,uint *param_3,longlong *param_4,char param_5)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  undefined8 unaff_RBP;
  undefined7 uVar13;
  ulonglong uVar12;
  longlong lVar14;
  longlong lVar15;
  longlong *plVar16;
  float fVar17;
  
  lVar11 = (longlong)*(int *)(param_1 + 0x318);
  if (lVar11 < 1) {
    uVar12 = 0;
    goto LAB_147d40ee8;
  }
  uVar13 = (undefined7)((ulonglong)unaff_RBP >> 8);
  if (param_5 == '\0') {
    plVar16 = *(longlong **)(param_1 + 0x310);
    if (*(float *)(plVar16 + lVar11 * 3 + -1) <= param_2) {
      plVar16 = plVar16 + lVar11 * 3 + -3;
      uVar10 = *(int *)(param_1 + 0x3d8) - 1;
    }
    else {
      uVar10 = 0;
      if (*(float *)(plVar16 + 2) <= param_2) goto LAB_147d40ff4;
    }
    *param_3 = uVar10;
    if (plVar16 != (longlong *)0x0) {
      uVar12 = CONCAT71(uVar13,1);
      if (0 < *(int *)(param_1 + 0x308)) {
        lVar11 = 0;
        do {
          uVar1 = *(undefined4 *)(*(longlong *)(param_1 + 0x300) + lVar11 * 4);
          uVar6 = *(undefined4 *)(*plVar16 + lVar11 * 8);
          uVar7 = *(undefined4 *)(*plVar16 + 4 + lVar11 * 8);
          iVar8 = (int)param_4[1];
          lVar14 = (longlong)iVar8;
          *(uint *)(param_4 + 1) = iVar8 + 1U;
          if (*(uint *)((longlong)param_4 + 0xc) < iVar8 + 1U) {
            FUN_1479d7cc6(param_4,iVar8);
          }
          lVar15 = *param_4;
          *(undefined4 *)(lVar15 + lVar14 * 0xc) = uVar1;
          *(undefined4 *)(lVar15 + 4 + lVar14 * 0xc) = uVar6;
          *(undefined4 *)(lVar15 + 8 + lVar14 * 0xc) = uVar7;
          lVar11 = lVar11 + 1;
        } while (lVar11 < *(int *)(param_1 + 0x308));
      }
      goto LAB_147d40ee8;
    }
  }
  else {
    if (0.0 <= param_2) {
      plVar16 = *(longlong **)(param_1 + 0x310);
      if (param_2 < *(float *)(plVar16 + 2)) {
        uVar12 = CONCAT71(uVar13,1);
        if (0 < *(int *)(param_1 + 0x308)) {
          fVar17 = *(float *)(param_1 + 0x100) - *(float *)(plVar16 + lVar11 * 3 + -1);
          fVar17 = (param_2 + fVar17) / (*(float *)(plVar16 + 2) + fVar17);
          lVar14 = 0;
          do {
            uVar1 = *(undefined4 *)(*(longlong *)(param_1 + 0x300) + lVar14 * 4);
            fVar2 = *(float *)(plVar16[lVar11 * 3 + -3] + lVar14 * 8);
            fVar3 = *(float *)(plVar16[lVar11 * 3 + -3] + 4 + lVar14 * 8);
            fVar4 = *(float *)(*plVar16 + lVar14 * 8);
            fVar5 = *(float *)(*plVar16 + 4 + lVar14 * 8);
            iVar8 = (int)param_4[1];
            lVar15 = (longlong)iVar8;
            *(uint *)(param_4 + 1) = iVar8 + 1U;
            if (*(uint *)((longlong)param_4 + 0xc) < iVar8 + 1U) {
              FUN_1479d7cc6(param_4,iVar8);
            }
            lVar9 = *param_4;
            *(undefined4 *)(lVar9 + lVar15 * 0xc) = uVar1;
            *(float *)(lVar9 + 4 + lVar15 * 0xc) = (fVar4 - fVar2) * fVar17 + fVar2;
            *(float *)(lVar9 + 8 + lVar15 * 0xc) = (fVar5 - fVar3) * fVar17 + fVar3;
            *param_3 = 0;
            lVar14 = lVar14 + 1;
          } while (lVar14 < *(int *)(param_1 + 0x308));
        }
        goto LAB_147d40ee8;
      }
    }
    if (param_2 < 0.0) {
      fVar17 = *(float *)(param_1 + 0x100);
      param_2 = param_2 + fVar17;
      if (fVar17 <= param_2) {
        param_2 = fVar17;
      }
      if (param_2 <= 0.0) {
        param_2 = 0.0;
      }
    }
  }
LAB_147d40ff4:
  uVar12 = 0;
  if (*param_3 != 0xffffffff) {
    uVar12 = (ulonglong)*param_3;
  }
  uVar10 = FUN_147d40bc6(param_1,param_2,uVar12,param_4);
  *param_3 = uVar10;
  if ((int)uVar12 != 0 && uVar10 == 0xffffffff) {
    uVar10 = FUN_147d40bc6(param_1,param_2,0,param_4);
    *param_3 = uVar10;
  }
  uVar12 = CONCAT71((int7)(uVar12 >> 8),uVar10 != 0xffffffff);
LAB_147d40ee8:
  return uVar12 & 0xffffffff;
}



// FUNCTION 147d41042 FUN_147d41042 body=119 status=ok
// SIG undefined FUN_147d41042(void)

ulonglong FUN_147d41042(longlong param_1,float param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  uVar4 = *(uint *)(param_1 + 0x328);
  if (0 < (int)uVar4) {
    lVar5 = *(longlong *)(param_1 + 800);
    uVar7 = 0;
    do {
      fVar1 = *(float *)(lVar5 + 4 + uVar7 * 8);
      if (fVar1 <= param_2) {
        lVar6 = (longlong)(((int)uVar7 + 1) % (int)uVar4);
        fVar2 = *(float *)(lVar5 + 4 + lVar6 * 8);
        if (param_2 < fVar2) {
          fVar3 = *(float *)(lVar5 + uVar7 * 8);
          *param_3 = (*(float *)(lVar5 + lVar6 * 8) - fVar3) * ((param_2 - fVar1) / (fVar2 - fVar1))
                     + fVar3;
          return uVar7 & 0xffffffff;
        }
      }
      uVar7 = uVar7 + 1;
    } while (uVar4 != uVar7);
  }
  return 0xffffffff;
}



// FUNCTION 147d410ba FUN_147d410ba body=235 status=ok
// SIG undefined FUN_147d410ba(void)

bool FUN_147d410ba(longlong param_1,float param_2,int *param_3,float *param_4,char param_5)

{
  float *pfVar1;
  int iVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  
  *param_3 = -1;
  lVar3 = (longlong)*(int *)(param_1 + 0x328);
  if (param_2 < 0.0 || lVar3 < 1) {
    return false;
  }
  pfVar1 = *(float **)(param_1 + 800);
  if (param_5 == '\0') {
    if (pfVar1[lVar3 * 2 + -1] <= param_2) {
      *param_4 = pfVar1[lVar3 * 2 + -2];
      *param_3 = *(int *)(param_1 + 0x328) + -1;
      return true;
    }
    fVar4 = pfVar1[1];
    if (param_2 < fVar4) {
      *param_4 = *pfVar1;
      goto LAB_147d41132;
    }
  }
  else {
    fVar4 = pfVar1[1];
  }
  if (fVar4 <= param_2) {
    if (param_2 < 0.0) {
      fVar4 = *(float *)(param_1 + 0x100);
      param_2 = param_2 + fVar4;
      if (fVar4 <= param_2) {
        param_2 = fVar4;
      }
      if (param_2 <= 0.0) {
        param_2 = 0.0;
      }
    }
    iVar2 = FUN_147d41042(0,param_2,param_4);
    *param_3 = iVar2;
    return iVar2 != -1;
  }
  fVar5 = *(float *)(param_1 + 0x100) - pfVar1[lVar3 * 2 + -1];
  *param_4 = (*pfVar1 - pfVar1[lVar3 * 2 + -2]) * ((param_2 + fVar5) / (fVar4 + fVar5)) +
             pfVar1[lVar3 * 2 + -2];
LAB_147d41132:
  *param_3 = 0;
  return true;
}



// FUNCTION 147d411a6 FUN_147d411a6 body=1471 status=ok
// SIG undefined FUN_147d411a6(void)

void FUN_147d411a6(longlong param_1,longlong *param_2)

{
  int *piVar1;
  code *pcVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined4 uVar10;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined1 local_f0;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  longlong local_c8;
  undefined8 uStack_c0;
  longlong *local_b8 [2];
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 *local_88;
  code *local_78 [2];
  undefined8 *local_68;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_118;
  uVar10 = 1;
  if (DAT_14c761b5c == 0) {
    uVar10 = 0xff;
  }
  if (*(longlong *)(param_1 + 0x188) == 0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14caced84) {
      FUN_144b3d300(&DAT_14caced84);
      if (DAT_14caced84 == -1) {
        if (DAT_14c846b14 == '\0') {
          FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                        L"Attempting to get the command line but it hasn\'t been initialized yet.");
        }
        cVar3 = FUN_14054d46e(&DAT_14c846b20,L"nosound");
        if (cVar3 == '\0') {
          DAT_14caced80 = 0;
        }
        else {
          if (DAT_14c846b14 == '\0') {
            FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                          L"Attempting to get the command line but it hasn\'t been initialized yet."
                         );
          }
          bVar4 = FUN_14054d46e(&DAT_14c846b20,L"enablesound");
          DAT_14caced80 = bVar4 ^ 1;
        }
        _Init_thread_footer(&DAT_14caced84);
      }
    }
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14caced8c) {
      FUN_144b3d300(&DAT_14caced8c);
      if (DAT_14caced8c == -1) {
        DAT_14caced88 = 1;
        if (DAT_14c866ff0 == '\0') {
          if (DAT_14c872bf0 == '\x01') {
            DAT_14caced88 = DAT_14c872bc0 ^ 1;
          }
          else {
            DAT_14caced88 = 0;
          }
        }
        _Init_thread_footer(&DAT_14caced8c);
      }
    }
    if ((DAT_14caced88 == 0) && ((DAT_14caced80 & 1) == 0)) {
      FUN_1436fb532(param_1,&local_d8);
      *(ulonglong *)(param_1 + 0x188) = CONCAT44(uStack_d4,local_d8);
      local_d8 = 0;
      uStack_d4 = 0;
      plVar8 = (longlong *)CONCAT44(uStack_cc,uStack_d0);
      plVar9 = *(longlong **)(param_1 + 400);
      if (plVar8 != plVar9) {
        uStack_d0 = 0;
        uStack_cc = 0;
        *(longlong **)(param_1 + 400) = plVar8;
        if (plVar9 == (longlong *)0x0) goto LAB_147d411ef;
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
        plVar8 = (longlong *)CONCAT44(uStack_cc,uStack_d0);
      }
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        plVar9 = plVar8 + 1;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)*plVar9 == 0) {
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
    }
  }
LAB_147d411ef:
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caced84) {
    FUN_144b3d300(&DAT_14caced84);
    if (DAT_14caced84 == -1) {
      if (DAT_14c846b14 == '\0') {
        FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                      L"Attempting to get the command line but it hasn\'t been initialized yet.");
      }
      cVar3 = FUN_14054d46e(&DAT_14c846b20,L"nosound");
      if (cVar3 == '\0') {
        DAT_14caced80 = 0;
      }
      else {
        if (DAT_14c846b14 == '\0') {
          FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                        L"Attempting to get the command line but it hasn\'t been initialized yet.");
        }
        bVar4 = FUN_14054d46e(&DAT_14c846b20,L"enablesound");
        DAT_14caced80 = bVar4 ^ 1;
      }
      _Init_thread_footer(&DAT_14caced84);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caced8c) {
    FUN_144b3d300(&DAT_14caced8c);
    if (DAT_14caced8c == -1) {
      DAT_14caced88 = 1;
      if (DAT_14c866ff0 == '\0') {
        if (DAT_14c872bf0 == '\x01') {
          DAT_14caced88 = DAT_14c872bc0 ^ 1;
        }
        else {
          DAT_14caced88 = 0;
        }
      }
      _Init_thread_footer(&DAT_14caced8c);
    }
  }
  if ((DAT_14caced88 == 0) && ((DAT_14caced80 & 1) == 0)) {
    iVar5 = FUN_1436fb382(param_1);
    if (1 < iVar5) {
      local_e0 = 0;
      FUN_14485c47a(&local_e0,param_1);
      lVar6 = FUN_140083894();
      plVar9 = *(longlong **)(lVar6 + 0x38);
      uStack_d4 = (undefined4)local_e0;
      uStack_d0 = (undefined4)((ulonglong)local_e0 >> 0x20);
      local_c8 = *param_2;
      local_b8[0] = (longlong *)0x0;
      local_d8 = uVar10;
      if (local_c8 != 0) {
        plVar8 = param_2 + 4;
        if ((longlong *)param_2[2] != (longlong *)0x0) {
          plVar8 = (longlong *)param_2[2];
        }
        (**(code **)*plVar8)(plVar8,local_b8);
      }
      local_88 = &DAT_100000001;
      local_78[0] = (code *)0x0;
      local_68 = (undefined8 *)FUN_14001cc68(0x70,0x10);
      *local_68 = &PTR_FUN_14aab0160;
      *(undefined4 *)(local_68 + 3) = uStack_d0;
      local_68[2] = CONCAT44(uStack_d4,local_d8);
      local_68[4] = local_c8;
      local_68[6] = local_b8[0];
      local_b8[0] = (longlong *)0x0;
      *(undefined4 *)(local_68 + 10) = local_98;
      *(undefined4 *)((longlong)local_68 + 0x54) = uStack_94;
      *(undefined4 *)(local_68 + 0xb) = uStack_90;
      *(undefined4 *)((longlong)local_68 + 0x5c) = uStack_8c;
      *(undefined4 *)(local_68 + 8) = local_a8;
      *(undefined4 *)((longlong)local_68 + 0x44) = uStack_a4;
      *(undefined4 *)(local_68 + 9) = uStack_a0;
      *(undefined4 *)((longlong)local_68 + 0x4c) = uStack_9c;
      if (local_c8 != 0) {
        local_c8 = 0;
      }
      local_68[0xc] = local_88;
      if (local_68 != (undefined8 *)&DAT_fffffffffffffff0) {
        local_78[0] = FUN_1437017e8;
      }
      local_f0 = 0;
      local_f8 = uVar10;
      (**(code **)(*plVar9 + 0xa8))(plVar9,param_1 + 0x188,1,local_78);
      if (local_c8 != 0) {
        plVar9 = local_b8[0];
        if (local_b8[0] == (longlong *)0x0) {
          plVar9 = (longlong *)&local_a8;
        }
        (**(code **)(*plVar9 + 0x10))();
      }
      goto LAB_147d413f8;
    }
  }
  local_c8 = 0;
  uStack_c0 = 0;
  local_d8 = 0;
  uStack_d4 = 0;
  uStack_d0 = 0;
  uStack_cc = 0;
  local_b8[0] = (longlong *)0xffffffff00000000;
  pcVar2 = (code *)*param_2;
  plVar9 = param_2 + 4;
  if ((longlong *)param_2[2] != (longlong *)0x0) {
    plVar9 = (longlong *)param_2[2];
  }
  uVar7 = (**(code **)(*plVar9 + 8))();
  (*pcVar2)(uVar7,&local_d8);
  FUN_141289612(&local_d8);
LAB_147d413f8:
  if (*param_2 != 0) {
    plVar9 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar9 = (longlong *)param_2[2];
    }
    (**(code **)(*plVar9 + 0x10))(plVar9);
  }
  if ((local_38 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d41766 FUN_147d41766 body=157 status=ok
// SIG undefined FUN_147d41766(void)

void FUN_147d41766(longlong param_1,longlong param_2,byte param_3)

{
  bool bVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  uStack_20 = 0;
  if (*(longlong *)(param_2 + 0x68) == 0) {
    bVar1 = false;
  }
  else {
    bVar1 = *(longlong *)(*(longlong *)(param_2 + 0x68) + 0x10) != 0;
  }
  if ((bVar1 | param_3) == 1) {
    FUN_147d4b35c(param_2,&local_28);
  }
  if (param_3 != 0) {
    FUN_147d3fb0c(*(undefined8 *)(param_1 + 0x3e0),&local_28);
  }
  FUN_145879583(local_28,uStack_20 & 0xffffffff);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d41804 FUN_147d41804 body=36 status=ok
// SIG undefined FUN_147d41804(void)

undefined8 FUN_147d41804(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_14795d952(*(longlong *)(param_1 + 0x10) + 0x10);
  return *(undefined8 *)(*plVar1 + (longlong)param_2 * 8);
}



// FUNCTION 147d41828 FUN_147d41828 body=28 status=ok
// SIG undefined FUN_147d41828(void)

void FUN_147d41828(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  *param_2 = *(undefined8 *)(param_1 + 0x10);
  lVar1 = *(longlong *)(param_1 + 0x18);
  param_2[1] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 147d41844 FUN_147d41844 body=10 status=ok
// SIG undefined FUN_147d41844(void)

longlong FUN_147d41844(longlong param_1)

{
  return *(longlong *)(param_1 + 0x10) + 0x8c;
}



// FUNCTION 147d4184e FUN_147d4184e body=8 status=ok
// SIG undefined FUN_147d4184e(void)

undefined4 FUN_147d4184e(longlong param_1)

{
  return *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x20);
}



// FUNCTION 147d41856 FUN_147d41856 body=39 status=ok
// SIG undefined FUN_147d41856(void)

undefined4 FUN_147d41856(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_14795d952(*(longlong *)(param_1 + 0x10) + 0x10);
  return *(undefined4 *)(*(longlong *)(*plVar1 + (longlong)param_2 * 8) + 4);
}



// FUNCTION 147d4187e FUN_147d4187e body=8 status=ok
// SIG undefined FUN_147d4187e(void)

undefined8 FUN_147d4187e(longlong param_1)

{
  return CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x10) >> 8),
                  *(undefined1 *)(*(longlong *)(param_1 + 0x10) + 0x78));
}



// FUNCTION 147d41886 FUN_147d41886 body=9 status=ok
// SIG undefined FUN_147d41886(void)

void FUN_147d41886(longlong param_1)

{
  FUN_1436fdf2a(*(undefined8 *)(param_1 + 0x10));
  return;
}



// FUNCTION 147d41890 FUN_147d41890 body=315 status=ok
// SIG undefined FUN_147d41890(void)

undefined8 * FUN_147d41890(undefined8 *param_1,longlong *param_2,undefined1 param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 auStack_c8 [32];
  uint local_a8;
  undefined1 local_a0;
  undefined1 local_90 [40];
  undefined1 *local_68;
  undefined8 local_58;
  undefined **local_48;
  undefined *local_40;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*param_2 != 0) {
    puVar4 = *(undefined8 **)(*param_2 + 0x10);
    lVar2 = puVar4[1];
    if (0 < lVar2) {
      if ((*(byte *)((longlong)puVar4 + 0xe4) & 0x10) == 0) {
        lVar2 = FUN_140083894();
        local_a0 = 0;
        local_a8 = local_a8 & 0xffffff00;
        (**(code **)(**(longlong **)(lVar2 + 0x38) + 0xb0))
                  (*(longlong **)(lVar2 + 0x38),local_90,param_2,0);
        uVar1 = FUN_147a359ec(local_90);
        uVar3 = FUN_147a359e8(local_90);
        *param_1 = uVar3;
        *(undefined4 *)(param_1 + 1) = uVar1;
        FUN_141289612(local_90);
      }
      else {
        if (1 < *(uint *)(puVar4 + 4)) {
          lVar2 = FUN_140083894();
          local_58 = 0;
          local_48 = &PTR_LAB_14a7fed80;
          local_40 = &DAT_143701ee6;
          local_68 = &LAB_1479879bc;
          local_a8 = 0xff;
          local_a0 = param_3;
          (**(code **)(**(longlong **)(lVar2 + 0x38) + 0xa8))
                    (*(longlong **)(lVar2 + 0x38),param_2,1);
          puVar4 = *(undefined8 **)(*param_2 + 0x10);
          lVar2 = puVar4[1];
        }
        *param_1 = *puVar4;
        *(int *)(param_1 + 1) = (int)lVar2;
      }
      goto LAB_147d4192e;
    }
  }
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
LAB_147d4192e:
  if ((local_20 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d419d0 FUN_147d419d0 body=103 status=ok
// SIG undefined FUN_147d419d0(void)

void FUN_147d419d0(undefined8 param_1,longlong *param_2)

{
  undefined1 auStack_1b8 [32];
  undefined **local_198;
  undefined8 local_190;
  undefined ***local_188;
  undefined8 **local_180;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  local_190 = *(undefined8 *)(*param_2 + 8);
  local_180 = &local_188;
  local_198 = &PTR_FUN_149e37810;
  local_188 = &local_198;
  switchD_143c3d4dc::caseD_20();
  if ((local_8 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d41a38 FUN_147d41a38 body=99 status=ok
// SIG undefined FUN_147d41a38(void)

void FUN_147d41a38(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_1b8 [32];
  undefined **local_198;
  undefined8 local_190;
  undefined ***local_188;
  undefined8 **local_180;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  local_180 = &local_188;
  local_198 = &PTR_FUN_149e37810;
  local_188 = &local_198;
  local_190 = param_2;
  switchD_143c3d4dc::caseD_20(param_1,local_180);
  if ((local_8 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d41a9c FUN_147d41a9c body=254 status=ok
// SIG undefined FUN_147d41a9c(void)

/* WARNING: Removing unreachable block (ram,0x000147d41b91) */

void FUN_147d41a9c(longlong *param_1,void *param_2,uint param_3)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined1 auStack_68 [32];
  void *local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar2 = (**(code **)(*param_1 + 0x3d8))();
  iVar2 = (uint)(iVar2 != 2) * 2;
  *(int *)(param_1 + 0x87) = iVar2 + 2;
  if ((param_3 != 0) && ((iVar2 + 1U & param_3) == 0)) {
    local_48 = (void *)0x0;
    uStack_40._4_4_ = 0;
    uStack_40._0_4_ = param_3;
    FUN_1447403be(&local_48,0);
    memcpy(local_48,param_2,(longlong)(int)param_3);
    puVar3 = (undefined8 *)FUN_14001cc68(0x18,0x10);
    *puVar3 = 0;
    puVar3[1] = local_48;
    local_48 = (void *)0x0;
    *(uint *)(puVar3 + 2) = (uint)uStack_40;
    *(undefined4 *)((longlong)puVar3 + 0x14) = uStack_40._4_4_;
    uStack_40 = 0;
    if (puVar3 != (undefined8 *)0x0) {
      puVar1 = (undefined8 *)param_1[0x7e];
      param_1[0x7e] = (longlong)puVar3;
      *puVar1 = puVar3;
    }
    LOCK();
    *(uint *)(param_1 + 0x80) = (int)param_1[0x80] + param_3;
    UNLOCK();
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147d41b9c FUN_147d41b9c body=210 status=ok
// SIG undefined FUN_147d41b9c(void)

void FUN_147d41b9c(longlong param_1)

{
  int iVar1;
  char cVar2;
  size_t _Size;
  undefined1 auStack_68 [32];
  void *local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = (void *)0x0;
  uStack_40 = 0;
  cVar2 = FUN_1468123b8(param_1 + 0x3f0);
  if (cVar2 != '\0') {
    do {
      _Size = (size_t)(int)(uint)uStack_40;
      if (_Size != 0) {
        iVar1 = *(int *)(param_1 + 0x410);
        *(uint *)(param_1 + 0x410) = iVar1 + (uint)uStack_40;
        if ((uint)(*(int *)(param_1 + 0x414) - iVar1) < (uint)uStack_40) {
          FUN_1447403be((longlong *)(param_1 + 0x408),iVar1);
        }
        memcpy((void *)((longlong)iVar1 + *(longlong *)(param_1 + 0x408)),local_48,_Size);
      }
      cVar2 = FUN_1468123b8(param_1 + 0x3f0,&local_48);
    } while (cVar2 != '\0');
  }
  if (local_48 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d41c70 FUN_147d41c70 body=473 status=ok
// SIG undefined FUN_147d41c70(void)

ulonglong FUN_147d41c70(longlong *param_1,void *param_2,int param_3)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  longlong *plVar7;
  uint uVar8;
  ulonglong _Size;
  
  if ((int)param_1[0x83] != 0) {
    LOCK();
    *(undefined4 *)(param_1 + 0x83) = 0;
    UNLOCK();
    if (*(int *)((longlong)param_1 + 0x414) < 0) {
      *(undefined4 *)(param_1 + 0x82) = 0;
      FUN_144893a1c(param_1 + 0x81,0);
    }
    else {
      *(undefined4 *)(param_1 + 0x82) = 0;
    }
    LOCK();
    *(undefined4 *)(param_1 + 0x80) = 0;
    UNLOCK();
  }
  iVar4 = (**(code **)(*param_1 + 0x3d8))(param_1);
  iVar4 = (iVar4 != 2) + 2 + (uint)(iVar4 != 2);
  *(int *)(param_1 + 0x87) = iVar4;
  plVar1 = param_1 + 0x81;
  if ((int)param_1[0x84] < param_3) {
    param_3 = (int)param_1[0x84];
  }
  if ((int)param_1[0x82] / iVar4 < param_3) {
    iVar4 = (**(code **)(*param_1 + 0x408))(param_1,plVar1,param_3);
    if (0 < iVar4) {
      iVar4 = iVar4 * (int)param_1[0x87];
      if (iVar4 < (int)param_1[0x82]) {
        bVar2 = false;
        FUN_144a5eaa2(plVar1,iVar4,0);
      }
      else {
        bVar2 = false;
      }
      goto LAB_147d41d38;
    }
    if (((int)param_1[0x86] != 0) && ((longlong *)param_1[0x85] != (longlong *)0x0)) {
      cVar3 = (**(code **)(*(longlong *)param_1[0x85] + 0x30))();
      if (cVar3 != '\0') {
        if ((int)param_1[0x86] == 0) {
          plVar7 = (longlong *)0x0;
        }
        else {
          plVar7 = (longlong *)param_1[0x85];
        }
        (**(code **)(*plVar7 + 0x58))(plVar7,param_1,param_3);
      }
    }
  }
  FUN_147d41b9c(param_1);
  bVar2 = true;
LAB_147d41d38:
  iVar4 = (int)param_1[0x87];
  iVar5 = (int)param_1[0x82] / iVar4;
  if (iVar5 < 1) {
    _Size = (longlong)*(int *)((longlong)param_1 + 0x41c) * (longlong)iVar4;
    memset(param_2,0,_Size);
  }
  else {
    if (param_3 < iVar5) {
      iVar5 = param_3;
    }
    uVar8 = iVar5 * iVar4;
    _Size = (ulonglong)uVar8;
    memcpy(param_2,(void *)*plVar1,(longlong)(int)uVar8);
    if (param_3 != 0) {
      iVar4 = (int)param_1[0x82] - uVar8;
      uVar6 = uVar8;
      if (iVar4 != 0) {
        memmove((void *)param_1[0x81],(void *)((longlong)(int)uVar8 + param_1[0x81]),(longlong)iVar4
               );
        uVar6 = *(uint *)(param_1 + 0x82);
      }
      *(uint *)(param_1 + 0x82) = uVar6 - uVar8;
    }
    if (bVar2) {
      LOCK();
      *(uint *)(param_1 + 0x80) = (int)param_1[0x80] - uVar8;
      UNLOCK();
    }
  }
  return _Size & 0xffffffff;
}



// FUNCTION 147d41e4a FUN_147d41e4a body=46 status=ok
// SIG undefined FUN_147d41e4a(void)

undefined4 FUN_147d41e4a(longlong param_1)

{
  undefined4 uVar1;
  char cVar2;
  
  do {
    cVar2 = FUN_147d4b5c6(param_1 + 0x3f0);
  } while (cVar2 != '\0');
  LOCK();
  uVar1 = *(undefined4 *)(param_1 + 0x418);
  *(undefined4 *)(param_1 + 0x418) = 1;
  UNLOCK();
  return uVar1;
}



// FUNCTION 147d41e82 FUN_147d41e82 body=95 status=ok
// SIG undefined FUN_147d41e82(void)

void FUN_147d41e82(undefined8 param_1)

{
  undefined1 auStack_58 [40];
  undefined1 local_30 [8];
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1427dc336(local_30);
  FUN_1427dc336(local_28,local_30);
  switchD_143c3d4dc::caseD_3d(param_1,local_28);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d41ef2 FUN_147d41ef2 body=83 status=ok
// SIG undefined FUN_147d41ef2(void)

void FUN_147d41ef2(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 0xd) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  if (*(int *)((longlong)param_1 + 0x6c) != 0) {
    FUN_144883a74(param_1 + 2,0);
  }
  *(undefined4 *)(param_1 + 0x19) = 0;
  if (*(int *)((longlong)param_1 + 0xcc) != 0) {
    FUN_144883a74(param_1 + 0xe,0);
    return;
  }
  return;
}



// FUNCTION 147d41f46 FUN_147d41f46 body=516 status=ok
// SIG undefined FUN_147d41f46(void)

void FUN_147d41f46(longlong param_1,undefined8 param_2)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*DAT_14ca83900 + 0x1b0))
            (DAT_14ca83900,&local_28,param_2,*(undefined8 *)(DAT_14ca94dc0 + 0x10));
  plVar4 = (longlong *)(param_1 + 0xa0);
  if (plVar4 == &local_28) {
LAB_147d42089:
    if (local_28 != 0) {
      LOCK();
      puVar1 = (uint *)(local_28 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
  }
  else {
    lVar3 = *plVar4;
    *plVar4 = local_28;
    local_28 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      goto LAB_147d42089;
    }
  }
  (**(code **)(*DAT_14ca83900 + 0x1b0))
            (DAT_14ca83900,&local_28,param_2,*(undefined8 *)(DAT_14ca94db8 + 0x10));
  plVar4 = (longlong *)(param_1 + 0xa8);
  if (plVar4 == &local_28) {
LAB_147d420d2:
    if (local_28 != 0) {
      LOCK();
      puVar1 = (uint *)(local_28 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
  }
  else {
    lVar3 = *plVar4;
    *plVar4 = local_28;
    local_28 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      goto LAB_147d420d2;
    }
  }
  (**(code **)(*DAT_14ca83900 + 0x1b0))
            (DAT_14ca83900,&local_28,param_2,*(undefined8 *)(DAT_14ca94db8 + 0x10));
  plVar4 = (longlong *)(param_1 + 0xb0);
  if (plVar4 != &local_28) {
    lVar3 = *plVar4;
    *plVar4 = local_28;
    local_28 = 0;
    if (lVar3 == 0) goto LAB_147d42051;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_28 != 0) {
    LOCK();
    puVar1 = (uint *)(local_28 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_147d42051:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d4214c FUN_147d4214c body=167 status=ok
// SIG undefined FUN_147d4214c(void)

void FUN_147d4214c(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0xa0);
  if (lVar3 != 0) {
    *(undefined8 *)(param_1 + 0xa0) = 0;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  lVar3 = *(longlong *)(param_1 + 0xa8);
  if (lVar3 != 0) {
    *(undefined8 *)(param_1 + 0xa8) = 0;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  lVar3 = *(longlong *)(param_1 + 0xb0);
  if (lVar3 != 0) {
    *(undefined8 *)(param_1 + 0xb0) = 0;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
      return;
    }
  }
  return;
}



// FUNCTION 147d421f4 FUN_147d421f4 body=673 status=ok
// SIG undefined FUN_147d421f4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_147d421f4(longlong *param_1,double *param_2,float param_3)

{
  double dVar1;
  double dVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  float fVar6;
  undefined4 extraout_XMM0_Db;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined4 uVar11;
  float fVar12;
  undefined1 auStack_118 [44];
  int local_ec;
  int local_e8;
  int local_e4;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_118;
  lVar4 = FUN_147a35388();
  if (lVar4 == 0) {
    fVar6 = 0.0;
    uVar11 = 0;
  }
  else {
    lVar4 = (longlong)DAT_14cad3bb0;
    if (lVar4 < 1) {
      fVar6 = 3.4028235e+38;
      uVar11 = 0;
    }
    else {
      lVar5 = 0;
      fVar12 = 3.4028235e+38;
      do {
        fVar6 = *(float *)(DAT_14cad3ba8 + 0x1c + lVar5);
        dVar1 = param_2[5];
        dVar7 = ABS(*(double *)(DAT_14cad3ba8 + 0x10 + lVar5) - param_2[2]) - dVar1;
        dVar10 = param_2[3];
        dVar2 = param_2[4];
        dVar9 = ABS(*(double *)(DAT_14cad3ba8 + 8 + lVar5) - param_2[1]) - dVar2;
        dVar8 = ABS(*(double *)(DAT_14cad3ba8 + lVar5) - *param_2) - dVar10;
        dVar8 = SQRT(dVar7 * dVar7 + dVar8 * dVar8 + dVar9 * dVar9);
        dVar7 = 1.0;
        if (1.0 <= dVar8) {
          dVar7 = dVar8;
        }
        if (dVar10 <= dVar2) {
          dVar10 = dVar2;
        }
        if (dVar10 <= dVar1) {
          dVar10 = dVar1;
        }
        (**(code **)(*param_1 + 0x2d0))(param_1,&local_ec);
        iVar3 = local_e8;
        if (local_ec < local_e8) {
          iVar3 = local_ec;
        }
        if (local_e4 <= iVar3) {
          iVar3 = local_e4;
        }
        fVar6 = logf((float)iVar3 /
                     (float)((dVar10 + dVar10) / (double)((float)dVar7 * (1.0 / (fVar6 * 0.5)))));
        fVar6 = fVar6 * 1.442695 + param_3 + _DAT_14c761b68;
        iVar3 = (**(code **)(*param_1 + 0x2c0))(param_1);
        if ((float)iVar3 + -1.0 <= fVar6) {
          fVar6 = (float)iVar3 + -1.0;
        }
        if (fVar6 <= 0.0) {
          fVar6 = 0.0;
        }
        if (fVar12 <= fVar6) {
          fVar6 = fVar12;
        }
        lVar5 = lVar5 + 0x38;
        uVar11 = extraout_XMM0_Db;
        fVar12 = fVar6;
      } while (lVar4 * 0x38 - lVar5 != 0);
    }
  }
  if ((local_e0 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT44(uVar11,fVar6);
}



// FUNCTION 147d42496 FUN_147d42496 body=216 status=ok
// SIG undefined FUN_147d42496(void)

longlong FUN_147d42496(longlong param_1,undefined4 param_2,undefined4 param_3,float param_4,
                      undefined4 param_5,char param_6,char param_7)

{
  uint uVar1;
  longlong lVar2;
  
  if (param_1 != 0) {
    lVar2 = FUN_1459e8e8e();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
         ) == lVar2 + 0x30)) {
      (**(code **)(DAT_14cb091a0 + 0x10))
                (&DAT_14cb091a0,param_1,param_2,param_3,param_4,param_5,param_7 * '\x02' + param_6);
      uVar1 = (uint)param_4;
      if ((-1 < (int)uVar1) && ((int)uVar1 < *(int *)(param_1 + 0xa0))) {
        lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x98) + (ulonglong)uVar1 * 8);
        if ((lVar2 != 0 & DAT_14c950c29) != 1) {
          return lVar2;
        }
        FUN_1456cec3c(lVar2);
        return lVar2;
      }
    }
  }
  return 0;
}



// FUNCTION 147d42580 FUN_147d42580 body=122 status=ok
// SIG undefined FUN_147d42580(void)

void FUN_147d42580(longlong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  
  switchD_143c3d4dc::caseD_38();
  iVar1 = *(int *)(param_1 + 0xa4);
  iVar2 = *(int *)(param_1 + 0xa0);
  if ((longlong)iVar2 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x98);
    lVar5 = 0;
    do {
      plVar4 = *(longlong **)(lVar3 + lVar5);
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 400))(plVar4,param_2);
      }
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar2 * 8 != lVar5);
  }
  FUN_14484255c(param_2,(longlong)iVar1 * 8 + 0x88);
  FUN_146820164(param_2,0);
  return;
}



// FUNCTION 147d42600 FUN_147d42600 body=77 status=ok
// SIG undefined FUN_147d42600(void)

void FUN_147d42600(undefined8 param_1)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1427dc336(local_20);
  switchD_143c3d4dc::caseD_3d(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d4264e FUN_147d4264e body=251 status=ok
// SIG undefined FUN_147d4264e(void)

void FUN_147d4264e(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 != 0) {
    local_38 = *(longlong *)(param_2 + 0x10);
    if ((local_38 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    lVar2 = (**(code **)(*param_1 + 0x18))(param_1,&local_38);
    if (lVar2 != 0) {
      local_40 = lVar2;
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(lVar2);
      }
      local_30 = &local_40;
      FUN_1474be378(param_1 + 0xc);
    }
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(param_2);
    }
    iVar1 = (int)param_1[0xd];
    *(uint *)(param_1 + 0xd) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0x6c) < iVar1 + 1U) {
      FUN_140730f78(param_1 + 0xc,iVar1);
    }
    *(longlong *)(param_1[0xc] + (longlong)iVar1 * 8) = param_2;
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(param_2);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d4274a FUN_147d4274a body=186 status=ok
// SIG undefined FUN_147d4274a(void)

longlong FUN_147d4274a(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  iVar1 = *(int *)(param_1 + 0x68);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x60);
    lVar6 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar6);
      if (lVar3 != 0) {
        lVar5 = *param_2;
        if ((lVar5 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar5);
LAB_147d42798:
          lVar4 = FUN_144ae113c();
          if ((lVar4 == 0) || (*(int *)(lVar5 + 0x38) < *(int *)(lVar4 + 0x38))) goto LAB_147d427ab;
          if (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
              lVar4 + 0x30) {
            lVar5 = 0;
          }
        }
        else {
          if (lVar5 != 0) goto LAB_147d42798;
LAB_147d427ab:
          lVar5 = 0;
        }
        if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30)) {
          return lVar3;
        }
      }
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar1 * 8 != lVar6);
  }
  return 0;
}



// FUNCTION 147d42804 FUN_147d42804 body=256 status=ok
// SIG undefined FUN_147d42804(void)

void FUN_147d42804(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  iVar3 = *(int *)(param_1 + 0x68);
  if (0 < iVar3) {
    lVar6 = 1;
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x60) + -8 + lVar6 * 8);
      if (lVar1 != 0) {
        lVar5 = *param_2;
        if ((lVar5 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar5);
LAB_147d42851:
          lVar4 = FUN_144ae113c();
          if (((lVar4 == 0) || (*(int *)(lVar5 + 0x38) < *(int *)(lVar4 + 0x38))) ||
             (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
              lVar4 + 0x30)) goto LAB_147d42873;
        }
        else {
          if (lVar5 != 0) goto LAB_147d42851;
LAB_147d42873:
          lVar5 = 0;
        }
        lVar1 = *(longlong *)(lVar1 + 0x10);
        if (*(int *)(lVar1 + 0x38) < *(int *)(lVar5 + 0x38)) {
          iVar3 = *(int *)(param_1 + 0x68);
        }
        else {
          iVar3 = *(int *)(param_1 + 0x68);
          if (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
              lVar5 + 0x30) {
            if (iVar3 != (int)lVar6) {
              memmove((void *)(*(longlong *)(param_1 + 0x60) + lVar6 * 8 + -8),
                      (void *)(*(longlong *)(param_1 + 0x60) + lVar6 * 8),
                      (longlong)(iVar3 - (int)lVar6) << 3);
              iVar3 = *(int *)(param_1 + 0x68);
            }
            *(int *)(param_1 + 0x68) = iVar3 + -1;
            FUN_1474be4b6((longlong *)(param_1 + 0x60));
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



// FUNCTION 147d42928 FUN_147d42928 body=129 status=ok
// SIG undefined FUN_147d42928(void)

void FUN_147d42928(longlong param_1,float param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  float fVar4;
  
  plVar1 = *(longlong **)(param_1 + 0x28);
  if (((plVar1 != (longlong *)0x0) && ((*(uint *)(plVar1 + 1) >> 0x1e & 1) == 0)) &&
     (*(char *)(param_1 + 0x34) == '\x01')) {
    if ((*(uint *)(plVar1 + 1) >> 0x1e & 1) == 0) {
      iVar2 = (**(code **)(*plVar1 + 0x2b8))();
      fVar4 = (float)iVar2 / (*(float *)(param_1 + 0x38) + 1e-08) + 1e-08;
    }
    else {
      fVar4 = 1e-08;
    }
    uVar3 = FUN_1447c7e44(param_2 + *(float *)(param_1 + 0x30),fVar4);
    *(undefined4 *)(param_1 + 0x30) = uVar3;
  }
  return;
}


