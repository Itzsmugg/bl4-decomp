// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 148b29882 FUN_148b29882 body=231 status=ok
// SIG undefined FUN_148b29882(void)

void FUN_148b29882(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b55d900;
  param_1[0x44] = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0x58];
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
  param_1[0x2e] = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0x42];
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
  param_1[0x18] = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0x2c];
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
  param_1[2] = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0x16];
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
  FUN_142873a18(param_1);
  return;
}



// FUNCTION 148b2996a FUN_148b2996a body=178 status=ok
// SIG undefined FUN_148b2996a(void)

void FUN_148b2996a(longlong param_1,longlong *param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_14122c862(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0x10;
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_14122c862(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0x170;
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_14122c862(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0xc0;
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_14122c862(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0x220;
  return;
}



// FUNCTION 148b29a1c FUN_148b29a1c body=99 status=ok
// SIG undefined FUN_148b29a1c(void)

longlong FUN_148b29a1c(longlong param_1)

{
  FUN_140a5071c();
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  FUN_14485c47a(param_1 + 0x1a8,0);
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  FUN_14485c47a(param_1 + 0x1b0,0);
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  *(undefined8 *)(param_1 + 0x1d0) = 0x100000000;
  return param_1;
}



// FUNCTION 148b29a80 FUN_148b29a80 body=129 status=ok
// SIG undefined FUN_148b29a80(void)

undefined4 * FUN_148b29a80(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *_Src;
  
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  *(undefined8 *)(param_1 + 8) = 0;
  iVar1 = param_2[10];
  puVar5 = *(undefined4 **)(param_2 + 8);
  param_1[10] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[0xb] = 1;
  }
  else {
    _Src = param_2 + 6;
    if (puVar5 != (undefined4 *)0x0) {
      _Src = puVar5;
    }
    FUN_148b2e254(param_1 + 6,iVar1,0);
    puVar5 = *(undefined4 **)(param_1 + 8);
    if (*(undefined4 **)(param_1 + 8) == (undefined4 *)0x0) {
      puVar5 = param_1 + 6;
    }
    memcpy(puVar5,_Src,(longlong)iVar1 << 3);
  }
  return param_1;
}



// FUNCTION 148b29b02 FUN_148b29b02 body=115 status=ok
// SIG undefined FUN_148b29b02(void)

longlong * FUN_148b29b02(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  
  FUN_140a515e6(*param_1,param_3);
  FUN_148b29b76(*param_1,param_3);
  plVar1 = (longlong *)*param_1;
  bVar4 = *(byte *)(plVar1 + 6);
  bVar3 = 0x20;
  if ((bVar4 & 0x10) == 0) {
    cVar2 = (**(code **)(*plVar1 + 0x220))(plVar1);
    bVar3 = cVar2 << 5;
    bVar4 = *(byte *)(plVar1 + 6);
  }
  *(byte *)(plVar1 + 6) = bVar4 & 0xdf | bVar3;
  *(byte *)(*param_1 + 0x31) = *(byte *)(*param_1 + 0x31) | 4;
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  return param_2;
}



// FUNCTION 148b29b76 FUN_148b29b76 body=604 status=ok
// SIG undefined FUN_148b29b76(void)

void FUN_148b29b76(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_408 [32];
  undefined1 *local_3e8;
  undefined1 local_3d1;
  code *local_3d0;
  undefined4 local_3c8;
  undefined4 uStack_3c4;
  code *local_3b8;
  longlong *local_3b0;
  code *local_3a8;
  undefined8 local_3a0;
  undefined1 local_398 [456];
  undefined1 local_1d0 [408];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_408;
  *(undefined8 *)(param_1 + 0x278) = *(undefined8 *)(param_2 + 0x1b8);
  uVar3 = *(undefined4 *)(param_2 + 0x1ac);
  uVar4 = *(undefined4 *)(param_2 + 0x1b0);
  uVar5 = *(undefined4 *)(param_2 + 0x1b4);
  *(undefined4 *)(param_1 + 0x268) = *(undefined4 *)(param_2 + 0x1a8);
  *(undefined4 *)(param_1 + 0x26c) = uVar3;
  *(undefined4 *)(param_1 + 0x270) = uVar4;
  *(undefined4 *)(param_1 + 0x274) = uVar5;
  FUN_148b2e2bc(param_1 + 0x280,param_2 + 0x1c0);
  *(undefined8 *)(param_1 + 0x298) = *(undefined8 *)(param_2 + 0x1d8);
  if (*(int *)(param_1 + 0x290) != 0) {
    lVar9 = param_1 + 0x280;
    if (*(longlong *)(param_1 + 0x288) != 0) {
      lVar9 = *(longlong *)(param_1 + 0x288);
    }
    lVar9 = *(longlong *)(lVar9 + (longlong)(*(int *)(param_1 + 0x290) + -1) * 8);
    if (lVar9 != 0) {
      lVar8 = *(longlong *)(lVar9 + 8);
      lVar7 = FUN_144a5ab96();
      if (*(ulonglong *)(lVar7 + 8) == 0) {
        bVar10 = lVar8 != 0;
        if (lVar8 != lVar7 && bVar10) {
          do {
            lVar8 = *(longlong *)(lVar8 + 0x30);
            bVar10 = lVar8 != 0;
            if (lVar8 == lVar7) break;
          } while (lVar8 != 0);
        }
        if (!bVar10) goto LAB_148b29c4f;
      }
      else if ((*(ulonglong *)(lVar8 + 0x18) & *(ulonglong *)(lVar7 + 8)) == 0) goto LAB_148b29c4f;
      if (*(int *)(lVar9 + 0x30) == 1) {
        FUN_1469f91ec(local_398);
        local_3d0 = FUN_148b29e7e;
        local_3c8 = 0;
        FUN_148b29dd4(local_398,param_1);
        local_3a8 = FUN_148b29f34;
        local_3a0 = (longlong *)((ulonglong)local_3a0._4_4_ << 0x20);
        FUN_148b30764(&local_3d0,param_1,&local_3a8);
        FUN_144a450dc(local_1d0,&local_3d0);
        FUN_1449db362(&local_3d0);
        local_3e8 = &local_3d1;
        FUN_1469fcac2(&local_3d0,"SCheckBox",
                      ".\\Runtime/AdvancedWidgets/Private/Widgets/PropertyViewer/SBoolPropertyValue.cpp"
                      ,0x23);
        FUN_1469f9992(&local_3d0,&local_3b8,local_398);
        local_3a8 = local_3b8;
        local_3a0 = local_3b0;
        if (local_3b0 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_3b0 + 1) = (int)local_3b0[1] + 1;
          UNLOCK();
        }
        FUN_140a58896(param_1 + 0x1e0,&local_3a8);
        plVar6 = local_3a0;
        if (local_3a0 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_3a0 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_3a0)(local_3a0);
            LOCK();
            piVar2 = (int *)((longlong)plVar6 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar6 + 0x10))(plVar6);
            }
          }
        }
        if (local_3b0 != (longlong *)0x0) {
          LOCK();
          plVar6 = local_3b0 + 1;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)*plVar6 == 0) {
            (**(code **)*local_3b0)(local_3b0);
            LOCK();
            piVar2 = (int *)((longlong)local_3b0 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*local_3b0 + 0x10))(local_3b0);
            }
          }
        }
        plVar6 = (longlong *)CONCAT44(uStack_3c4,local_3c8);
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
        }
        FUN_1469f9dde(local_398);
      }
    }
  }
LAB_148b29c4f:
  if ((local_38 ^ (ulonglong)auStack_408) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148b29dd4 FUN_148b29dd4 body=169 status=ok
// SIG undefined FUN_148b29dd4(void)

longlong FUN_148b29dd4(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [16];
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = *param_3;
  local_30 = CONCAT44(local_30._4_4_,*(undefined4 *)(param_3 + 1));
  FUN_148b302c8(local_48,param_2,&local_38);
  local_38 = CONCAT62(local_38._2_6_,0x100);
  local_30 = 0;
  local_28 = 0;
  FUN_1469eaea6(&local_30,local_48);
  *(undefined2 *)(param_1 + 0x1d8) = (undefined2)local_38;
  FUN_144a450dc(param_1 + 0x1e0,&local_30);
  FUN_1449db362(&local_30);
  FUN_1449db362(local_48);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b29e7e FUN_148b29e7e body=181 status=ok
// SIG undefined FUN_148b29e7e(void)

ulonglong FUN_148b29e7e(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 unaff_RBX;
  ulonglong uVar3;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  undefined7 uVar4;
  
  lVar1 = FUN_148b24d9e(param_1 + 0x268);
  uVar4 = (undefined7)((ulonglong)unaff_RBX >> 8);
  uVar3 = CONCAT71(uVar4,2);
  if ((lVar1 != 0) && (*(int *)(param_1 + 0x290) != 0)) {
    lVar5 = param_1 + 0x280;
    if (*(longlong *)(param_1 + 0x288) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x288);
    }
    lVar5 = *(longlong *)(lVar5 + (longlong)(*(int *)(param_1 + 0x290) + -1) * 8);
    if (lVar5 != 0) {
      lVar6 = *(longlong *)(lVar5 + 8);
      lVar2 = FUN_144a5ab96();
      if (*(ulonglong *)(lVar2 + 8) == 0) {
        bVar7 = lVar6 != 0;
        if (lVar6 != lVar2 && bVar7) {
          do {
            lVar6 = *(longlong *)(lVar6 + 0x30);
            bVar7 = lVar6 != 0;
            if (lVar6 == lVar2) break;
          } while (lVar6 != 0);
        }
        if (!bVar7) goto LAB_148b29ef8;
      }
      else if ((*(ulonglong *)(lVar6 + 0x18) & *(ulonglong *)(lVar2 + 8)) == 0) goto LAB_148b29ef8;
      uVar3 = CONCAT71(uVar4,(*(byte *)((ulonglong)*(byte *)(lVar5 + 0x71) +
                                       lVar1 + *(int *)(lVar5 + 0x44)) & *(byte *)(lVar5 + 0x73)) !=
                             0);
    }
  }
LAB_148b29ef8:
  return uVar3 & 0xffffffff;
}



// FUNCTION 148b29f34 FUN_148b29f34 body=286 status=ok
// SIG undefined FUN_148b29f34(void)

void FUN_148b29f34(longlong param_1,char param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  byte bVar7;
  longlong lVar8;
  bool bVar9;
  
  lVar1 = param_1 + 0x268;
  lVar4 = FUN_148b24d9e(lVar1);
  if ((lVar4 != 0) && (*(int *)(param_1 + 0x290) != 0)) {
    lVar6 = param_1 + 0x280;
    if (*(longlong *)(param_1 + 0x288) != 0) {
      lVar6 = *(longlong *)(param_1 + 0x288);
    }
    lVar6 = *(longlong *)(lVar6 + (longlong)(*(int *)(param_1 + 0x290) + -1) * 8);
    if (lVar6 != 0) {
      lVar8 = *(longlong *)(lVar6 + 8);
      lVar5 = FUN_144a5ab96();
      if (*(ulonglong *)(lVar5 + 8) == 0) {
        bVar9 = lVar8 != 0;
        if (lVar8 != lVar5 && bVar9) {
          do {
            lVar8 = *(longlong *)(lVar8 + 0x30);
            bVar9 = lVar8 != 0;
            if (lVar8 == lVar5) break;
          } while (lVar8 != 0);
        }
        if (!bVar9) {
          return;
        }
      }
      else if ((*(ulonglong *)(lVar8 + 0x18) & *(ulonglong *)(lVar5 + 8)) == 0) {
        return;
      }
      puVar2 = *(undefined8 **)(param_1 + 0x298);
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,lVar1);
      }
      lVar4 = lVar4 + *(int *)(lVar6 + 0x44);
      if (param_2 == '\x01') {
        bVar7 = *(byte *)(lVar6 + 0x72);
      }
      else {
        bVar7 = 0;
      }
      *(byte *)(lVar4 + (ulonglong)*(byte *)(lVar6 + 0x71)) =
           *(byte *)((ulonglong)*(byte *)(lVar6 + 0x71) + lVar4) & ~*(byte *)(lVar6 + 0x73) | bVar7;
      plVar3 = *(longlong **)(param_1 + 0x298);
      if (plVar3 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148b2a041. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 8))(plVar3,lVar1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148b2a052 FUN_148b2a052 body=99 status=ok
// SIG undefined FUN_148b2a052(void)

longlong FUN_148b2a052(longlong param_1)

{
  FUN_140a5071c();
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  FUN_14485c47a(param_1 + 0x1a8,0);
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  FUN_14485c47a(param_1 + 0x1b0,0);
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  *(undefined8 *)(param_1 + 0x1d0) = 0x100000000;
  return param_1;
}



// FUNCTION 148b2a0b6 FUN_148b2a0b6 body=115 status=ok
// SIG undefined FUN_148b2a0b6(void)

longlong * FUN_148b2a0b6(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  
  FUN_140a515e6(*param_1,param_3);
  FUN_148b2a12a(*param_1,param_3);
  plVar1 = (longlong *)*param_1;
  bVar4 = *(byte *)(plVar1 + 6);
  bVar3 = 0x20;
  if ((bVar4 & 0x10) == 0) {
    cVar2 = (**(code **)(*plVar1 + 0x220))(plVar1);
    bVar3 = cVar2 << 5;
    bVar4 = *(byte *)(plVar1 + 6);
  }
  *(byte *)(plVar1 + 6) = bVar4 & 0xdf | bVar3;
  *(byte *)(*param_1 + 0x31) = *(byte *)(*param_1 + 0x31) | 4;
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  return param_2;
}



// FUNCTION 148b2a12a FUN_148b2a12a body=1228 status=ok
// SIG undefined FUN_148b2a12a(void)

void FUN_148b2a12a(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  bool bVar11;
  undefined1 auStack_818 [32];
  undefined1 *local_7f8;
  undefined1 local_7e1;
  undefined1 local_7e0 [8];
  longlong *local_7d8;
  undefined1 local_7c1;
  code *local_7c0;
  undefined4 local_7b8;
  undefined4 uStack_7b4;
  undefined8 local_7a8;
  longlong *local_7a0;
  undefined8 local_798;
  undefined8 uStack_790;
  undefined1 local_788;
  undefined8 local_780;
  undefined8 uStack_778;
  undefined8 local_770;
  undefined8 local_768;
  longlong *local_760;
  undefined8 local_758;
  longlong *local_750;
  undefined1 local_748 [1136];
  undefined1 local_2d8 [424];
  undefined8 local_130;
  undefined8 local_120;
  longlong *local_118;
  undefined1 local_100 [136];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68;
  undefined1 local_60 [40];
  undefined4 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_818;
  *(undefined8 *)(param_1 + 0x280) = *(undefined8 *)(param_2 + 0x1b8);
  uVar3 = *(undefined4 *)(param_2 + 0x1ac);
  uVar4 = *(undefined4 *)(param_2 + 0x1b0);
  uVar5 = *(undefined4 *)(param_2 + 0x1b4);
  *(undefined4 *)(param_1 + 0x270) = *(undefined4 *)(param_2 + 0x1a8);
  *(undefined4 *)(param_1 + 0x274) = uVar3;
  *(undefined4 *)(param_1 + 0x278) = uVar4;
  *(undefined4 *)(param_1 + 0x27c) = uVar5;
  FUN_148b2e2bc(param_1 + 0x288,param_2 + 0x1c0);
  *(undefined8 *)(param_1 + 0x2a0) = *(undefined8 *)(param_2 + 0x1d8);
  if (*(int *)(param_1 + 0x298) != 0) {
    lVar8 = param_1 + 0x288;
    if (*(longlong *)(param_1 + 0x290) != 0) {
      lVar8 = *(longlong *)(param_1 + 0x290);
    }
    plVar2 = *(longlong **)(lVar8 + (longlong)(*(int *)(param_1 + 0x298) + -1) * 8);
    if (plVar2 != (longlong *)0x0) {
      lVar8 = plVar2[1];
      lVar7 = FUN_144a7add4();
      if (*(ulonglong *)(lVar7 + 8) == 0) {
        bVar11 = lVar8 != 0;
        if (lVar8 != lVar7 && bVar11) {
          do {
            lVar8 = *(longlong *)(lVar8 + 0x30);
            bVar11 = lVar8 != 0;
            if (lVar8 == lVar7) break;
          } while (lVar8 != 0);
        }
        plVar10 = (longlong *)0x0;
        bVar11 = !bVar11;
      }
      else {
        plVar10 = (longlong *)(*(ulonglong *)(lVar7 + 8) & *(ulonglong *)(lVar8 + 0x18));
        bVar11 = plVar10 == (longlong *)0x0;
      }
      if (!bVar11) {
        plVar10 = plVar2;
      }
      lVar8 = plVar2[1];
      lVar7 = FUN_14475b26a();
      if (*(ulonglong *)(lVar7 + 8) == 0) {
        bVar11 = lVar8 != 0;
        if (lVar8 != lVar7 && bVar11) {
          do {
            lVar8 = *(longlong *)(lVar8 + 0x30);
            bVar11 = lVar8 != 0;
            if (lVar8 == lVar7) break;
          } while (lVar8 != 0);
        }
      }
      else {
        bVar11 = (*(ulonglong *)(lVar8 + 0x18) & *(ulonglong *)(lVar7 + 8)) != 0;
      }
      plVar9 = (longlong *)0x0;
      if (bVar11) {
        plVar9 = plVar2;
      }
      if (plVar10 == (longlong *)0x0) {
        if (plVar9 == (longlong *)0x0) goto LAB_148b2a2ca;
        lVar8 = (**(code **)(*plVar9 + 0x1f0))();
      }
      else {
        lVar8 = plVar10[0xf];
      }
      FUN_14485c47a(param_1 + 0x268,lVar8);
      if ((lVar8 != 0) && ((int)plVar2[6] == 1)) {
        FUN_146a0f1de(local_2d8);
        uVar6 = DAT_14cb9b578;
        FUN_1446ddc76(&local_770,"PropertyValue.ComboButton",1);
        local_130 = FUN_145a4e810(uVar6,local_770,0,0);
        local_798 = 0;
        uStack_790 = 0;
        local_788 = 1;
        local_780 = 0;
        uStack_778 = 0;
        local_78 = 0;
        uStack_70 = 0;
        local_68 = 1;
        FUN_144a450dc(local_60,&local_780);
        FUN_1449db362(&local_780);
        local_38 = 1;
        local_7c0 = FUN_148b2a60e;
        local_7b8 = 0;
        FUN_148b30f46(local_748,param_1,&local_7c0);
        FUN_144a450dc(local_100,local_748);
        FUN_1449db362(local_748);
        FUN_140a570d8(local_748);
        local_7c0 = FUN_148b2aa7e;
        local_7b8 = 0;
        FUN_148b2a9a6(local_748,param_1,&local_7c0);
        local_7f8 = &local_7c1;
        FUN_140a54526(&local_7c0,"STextBlock",
                      ".\\Runtime/AdvancedWidgets/Private/Widgets/PropertyViewer/SEnumPropertyValue.cpp"
                      ,0x32);
        FUN_140a52852(&local_7c0,&local_7a8,local_748);
        plVar10 = local_118;
        plVar2 = local_7a0;
        if (local_7a0 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_7a0 + 1) = (int)local_7a0[1] + 1;
          UNLOCK();
          LOCK();
          *(int *)(local_7a0 + 1) = (int)local_7a0[1] + 1;
          UNLOCK();
        }
        local_120 = local_7a8;
        local_118 = local_7a0;
        if (plVar10 != (longlong *)0x0) {
          LOCK();
          plVar9 = plVar10 + 1;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)*plVar9 == 0) {
            (**(code **)*plVar10)(plVar10);
            LOCK();
            piVar1 = (int *)((longlong)plVar10 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar10 + 0x10))(plVar10);
            }
          }
        }
        local_7f8 = &local_7e1;
        FUN_146a3ebfe(local_7e0,"SComboButton",
                      ".\\Runtime/AdvancedWidgets/Private/Widgets/PropertyViewer/SEnumPropertyValue.cpp"
                      ,0x2b);
        FUN_146a0f634(local_7e0,&local_768,local_2d8);
        local_758 = local_768;
        local_750 = local_760;
        if (local_760 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_760 + 1) = (int)local_760[1] + 1;
          UNLOCK();
        }
        FUN_140a58896(param_1 + 0x1e0,&local_758);
        plVar10 = local_750;
        if (local_750 != (longlong *)0x0) {
          LOCK();
          plVar9 = local_750 + 1;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)*plVar9 == 0) {
            (**(code **)*local_750)(local_750);
            LOCK();
            piVar1 = (int *)((longlong)plVar10 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar10 + 0x10))(plVar10);
            }
          }
        }
        if (local_760 != (longlong *)0x0) {
          LOCK();
          plVar10 = local_760 + 1;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)*plVar10 == 0) {
            (**(code **)*local_760)(local_760);
            LOCK();
            piVar1 = (int *)((longlong)local_760 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_760 + 0x10))(local_760);
            }
          }
        }
        if (local_7d8 != (longlong *)0x0) {
          LOCK();
          plVar10 = local_7d8 + 1;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)*plVar10 == 0) {
            (**(code **)*local_7d8)(local_7d8);
            LOCK();
            piVar1 = (int *)((longlong)local_7d8 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_7d8 + 0x10))(local_7d8);
            }
          }
        }
        if (plVar2 != (longlong *)0x0) {
          LOCK();
          plVar10 = plVar2 + 1;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)*plVar10 == 0) {
            (**(code **)*plVar2)(plVar2);
            LOCK();
            piVar1 = (int *)((longlong)plVar2 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar2 + 0x10))(plVar2);
            }
          }
        }
        if (local_7a0 != (longlong *)0x0) {
          LOCK();
          plVar2 = local_7a0 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*local_7a0)(local_7a0);
            LOCK();
            piVar1 = (int *)((longlong)local_7a0 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_7a0 + 0x10))(local_7a0);
            }
          }
        }
        plVar2 = (longlong *)CONCAT44(uStack_7b4,local_7b8);
        if (plVar2 != (longlong *)0x0) {
          LOCK();
          plVar10 = plVar2 + 1;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)*plVar10 == 0) {
            (**(code **)*plVar2)(plVar2);
            LOCK();
            piVar1 = (int *)((longlong)plVar2 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar2 + 0x10))(plVar2);
            }
          }
        }
        FUN_140a59ae6(local_748);
        FUN_146a0f6a8(local_2d8);
      }
      if ((local_28 ^ (ulonglong)auStack_818) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return;
    }
  }
LAB_148b2a2ca:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_818);
}



// FUNCTION 148b2a60e FUN_148b2a60e body=919 status=ok
// SIG undefined FUN_148b2a60e(void)

undefined8 FUN_148b2a60e(longlong param_1,undefined8 param_2)

{
  code *pcVar1;
  longlong lVar2;
  int iVar3;
  byte bVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined1 auStack_298 [32];
  undefined1 *local_278;
  longlong local_270;
  undefined1 local_268;
  undefined8 local_260;
  longlong **local_258;
  int local_24c;
  longlong local_248;
  undefined8 local_240;
  longlong *local_238 [2];
  longlong *local_228 [2];
  undefined1 local_218;
  undefined8 local_210;
  undefined8 uStack_208;
  code *local_200;
  undefined4 local_1f8;
  undefined1 local_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined1 local_1d8 [32];
  undefined1 local_1b8 [16];
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined1 local_180 [16];
  undefined1 local_170 [16];
  undefined1 local_160 [16];
  undefined1 local_150 [24];
  longlong *local_138 [2];
  undefined1 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  int local_10c [11];
  undefined **local_e0 [13];
  longlong *local_78;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_298;
  local_248 = param_1;
  local_270 = FUN_140a2b044(&DAT_14c96b348);
  if (local_270 == 0) {
    local_270 = DAT_14c96b350;
  }
  local_10c[5] = 0;
  local_10c[6] = 0;
  local_10c[7] = 0;
  local_10c[8] = 0;
  local_10c[1] = 0;
  local_10c[2] = 0;
  local_10c[3] = 0;
  local_10c[4] = 0;
  local_258 = (longlong **)CONCAT71(local_258._1_7_,1);
  local_268 = 1;
  local_260 = 0;
  local_278 = (undefined1 *)((ulonglong)local_278 & 0xffffffffffffff00);
  FUN_1469d0642(local_e0,1);
  plVar5 = (longlong *)FUN_14479d2ce(local_248 + 0x268);
  if (plVar5 != (longlong *)0x0) {
    local_240 = param_2;
    bVar4 = FUN_1409671e2(plVar5);
    local_24c = (int)plVar5[9] - (uint)bVar4;
    local_10c[0] = 0;
    param_2 = local_240;
    if (0 < local_24c) {
      do {
        iVar3 = local_10c[0];
        plVar6 = (longlong *)FUN_140e82300();
        pcVar1 = (code *)*plVar6;
        if (pcVar1 != (code *)0x0) {
          (**(code **)(*(longlong *)pcVar1 + 8))(pcVar1);
        }
        lVar2 = plVar6[1];
        FUN_144a5dc74(local_138);
        local_128 = 0;
        local_120 = 0;
        uStack_118 = 0;
        local_198 = 0;
        uStack_190 = 0;
        local_1a8 = 0;
        uStack_1a0 = 0;
        local_200 = FUN_148b2ad92;
        local_1f8 = 0;
        FUN_148b2ac4a(local_1b8,local_248,&local_200,local_10c);
        local_278 = (undefined1 *)((ulonglong)local_278 & 0xffffffff00000000);
        FUN_1469baa6a(local_180,local_1b8,&local_1a8,&local_198);
        FUN_142877ef0(local_1d8);
        local_200 = pcVar1;
        if (pcVar1 != (code *)0x0) {
          (**(code **)(*(longlong *)pcVar1 + 8))(pcVar1);
        }
        local_1f0 = 1;
        local_1e8 = 0;
        uStack_1e0 = 0;
        local_1f8 = (int)lVar2;
        (**(code **)(*plVar5 + 0x2b0))(plVar5,local_238,iVar3);
        FUN_14023423e(local_228,local_238);
        local_218 = 1;
        local_210 = 0;
        uStack_208 = 0;
        local_258 = local_138;
        local_260 = 0;
        local_270 = 0;
        local_278 = local_180;
        local_268 = 0;
        FUN_146a0d19c(local_e0,local_228,&local_200,local_1d8);
        FUN_1449db362(&local_210);
        if (local_228[0] != (longlong *)0x0) {
          (**(code **)(*local_228[0] + 0x10))();
        }
        if (local_238[0] != (longlong *)0x0) {
          (**(code **)(*local_238[0] + 0x10))();
        }
        FUN_1449db362(&local_1e8);
        if (local_200 != (code *)0x0) {
          (**(code **)(*(longlong *)local_200 + 0x10))();
        }
        FUN_1449db362(local_150);
        FUN_1449db362(local_160);
        FUN_1449db362(local_170);
        FUN_1449db362(local_180);
        FUN_1449db362(&local_120);
        if (local_138[0] != (longlong *)0x0) {
          (**(code **)(*local_138[0] + 0x10))();
        }
        if (pcVar1 != (code *)0x0) {
          (**(code **)(*(longlong *)pcVar1 + 0x10))(pcVar1);
        }
        local_10c[0] = iVar3 + 1;
        param_2 = local_240;
      } while (local_10c[0] < local_24c);
    }
  }
  FUN_146a0a3c8(local_e0,param_2,0);
  local_e0[0] = &PTR_FUN_149f05160;
  if (local_78 != (longlong *)0x0) {
    (**(code **)(*local_78 + 0x10))();
  }
  FUN_1469e534a(local_e0);
  if ((local_60 ^ (ulonglong)auStack_298) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 148b2a9a6 FUN_148b2a9a6 body=215 status=ok
// SIG undefined FUN_148b2a9a6(void)

longlong FUN_148b2a9a6(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_88 [40];
  undefined1 local_60 [16];
  longlong *local_50;
  undefined4 local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = *(undefined4 *)(param_3 + 1);
  local_50 = (longlong *)*param_3;
  FUN_148b31440(local_60);
  FUN_144a5dc74(&local_50);
  local_40 = 1;
  local_38 = 0;
  local_30 = 0;
  FUN_1413a4324(&local_38,local_60);
  FUN_140008f88(param_1 + 0x1a8,&local_50);
  *(undefined1 *)(param_1 + 0x1b8) = local_40;
  FUN_144a450dc(param_1 + 0x1c0,&local_38);
  FUN_1449db362(&local_38);
  if (local_50 != (longlong *)0x0) {
    (**(code **)(*local_50 + 0x10))();
  }
  FUN_1449db362(local_60);
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b2aa7e FUN_148b2aa7e body=99 status=ok
// SIG undefined FUN_148b2aa7e(void)

longlong * FUN_148b2aa7e(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar3 = FUN_14479d2ce(param_1 + 0x268);
  if (lVar3 == 0) {
    plVar4 = (longlong *)FUN_140e82300();
    plVar1 = (longlong *)*plVar4;
    *param_2 = (longlong)plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    *(int *)(param_2 + 1) = (int)plVar4[1];
  }
  else {
    iVar2 = FUN_148b2aae2(param_1);
    FUN_1406f1d90(lVar3,param_2,(longlong)iVar2);
  }
  return param_2;
}



// FUNCTION 148b2aae2 FUN_148b2aae2 body=359 status=ok
// SIG undefined FUN_148b2aae2(void)

undefined4 FUN_148b2aae2(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  bool bVar8;
  
  lVar3 = FUN_14479d2ce(param_1 + 0x268);
  if (lVar3 == 0) {
    return 0;
  }
  lVar3 = FUN_148b24d9e(param_1 + 0x270);
  if (lVar3 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x298) == 0) {
    return 0;
  }
  lVar5 = *(longlong *)(param_1 + 0x290);
  if (*(longlong *)(param_1 + 0x290) == 0) {
    lVar5 = param_1 + 0x288;
  }
  plVar7 = *(longlong **)(lVar5 + (longlong)(*(int *)(param_1 + 0x298) + -1) * 8);
  if (plVar7 == (longlong *)0x0) {
LAB_148b2abba:
    if (*(int *)(param_1 + 0x298) == 0) {
      return 0;
    }
    lVar5 = param_1 + 0x288;
    if (*(longlong *)(param_1 + 0x290) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x290);
    }
    lVar5 = *(longlong *)(lVar5 + (longlong)(*(int *)(param_1 + 0x298) + -1) * 8);
    if (lVar5 == 0) {
      return 0;
    }
    lVar4 = *(longlong *)(lVar5 + 8);
    lVar6 = FUN_144a7add4();
    if (*(ulonglong *)(lVar6 + 8) == 0) {
      bVar8 = lVar4 != 0;
      if (lVar4 != lVar6 && bVar8) {
        do {
          lVar4 = *(longlong *)(lVar4 + 0x30);
          bVar8 = lVar4 != 0;
          if (lVar4 == lVar6) break;
        } while (lVar4 != 0);
      }
      if (!bVar8) {
        return 0;
      }
    }
    else if ((*(ulonglong *)(lVar4 + 0x18) & *(ulonglong *)(lVar6 + 8)) == 0) {
      return 0;
    }
    plVar7 = *(longlong **)(lVar5 + 0x70);
    iVar1 = *(int *)(lVar5 + 0x44);
    lVar5 = *plVar7;
  }
  else {
    lVar5 = plVar7[1];
    lVar4 = FUN_14475b26a();
    if (*(ulonglong *)(lVar4 + 8) == 0) {
      bVar8 = lVar5 != 0;
      if (lVar5 != lVar4 && bVar8) {
        do {
          lVar5 = *(longlong *)(lVar5 + 0x30);
          bVar8 = lVar5 != 0;
          if (lVar5 == lVar4) break;
        } while (lVar5 != 0);
      }
      if (!bVar8) goto LAB_148b2abba;
    }
    else if ((*(ulonglong *)(lVar5 + 0x18) & *(ulonglong *)(lVar4 + 8)) == 0) goto LAB_148b2abba;
    iVar1 = *(int *)((longlong)plVar7 + 0x44);
    lVar5 = *plVar7;
  }
  uVar2 = (**(code **)(lVar5 + 0x220))(plVar7,lVar3 + iVar1);
  return uVar2;
}



// FUNCTION 148b2ac4a FUN_148b2ac4a body=327 status=ok
// SIG undefined FUN_148b2ac4a(void)

longlong * FUN_148b2ac4a(longlong *param_1,longlong param_2,undefined8 *param_3,undefined4 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  longlong *plVar10;
  undefined8 uVar11;
  bool bVar12;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar10 = *(longlong **)(param_2 + 0x10);
  bVar6 = true;
  if (plVar10 == (longlong *)0x0) {
LAB_148b2accc:
    uVar11 = 0;
    plVar10 = (longlong *)0x0;
  }
  else {
    iVar8 = (int)plVar10[1];
    do {
      if (iVar8 == 0) goto LAB_148b2accc;
      LOCK();
      iVar7 = (int)plVar10[1];
      bVar12 = iVar8 == iVar7;
      if (bVar12) {
        *(int *)(plVar10 + 1) = iVar8 + 1;
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      UNLOCK();
    } while (!bVar12);
    uVar11 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
    bVar6 = false;
  }
  *puVar5 = &PTR_LAB_14b42c990;
  *(undefined4 *)(puVar5 + 1) = *param_4;
  uVar9 = FUN_144a3f946();
  puVar5[2] = uVar9;
  *puVar5 = &PTR_FUN_14b55e5d0;
  puVar5[3] = uVar11;
  puVar5[4] = plVar10;
  if (bVar6) {
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    LOCK();
    *(int *)((longlong)plVar10 + 0xc) = *(int *)((longlong)plVar10 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
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
  return param_1;
}



// FUNCTION 148b2ad92 FUN_148b2ad92 body=477 status=ok
// SIG undefined FUN_148b2ad92(void)

void FUN_148b2ad92(longlong param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  bool bVar10;
  
  lVar5 = FUN_14479d2ce(param_1 + 0x268);
  if (lVar5 == 0) {
    return;
  }
  lVar1 = param_1 + 0x270;
  lVar6 = FUN_148b24d9e(lVar1);
  if (lVar6 == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x298) == 0) {
    return;
  }
  uVar3 = *(undefined8 *)(*(longlong *)(lVar5 + 0x40) + 8 + (longlong)param_2 * 0x10);
  lVar5 = *(longlong *)(param_1 + 0x290);
  if (*(longlong *)(param_1 + 0x290) == 0) {
    lVar5 = param_1 + 0x288;
  }
  plVar9 = *(longlong **)(lVar5 + (longlong)(*(int *)(param_1 + 0x298) + -1) * 8);
  if (plVar9 == (longlong *)0x0) {
LAB_148b2aeca:
    if (*(int *)(param_1 + 0x298) == 0) {
      return;
    }
    lVar5 = param_1 + 0x288;
    if (*(longlong *)(param_1 + 0x290) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x290);
    }
    lVar5 = *(longlong *)(lVar5 + (longlong)(*(int *)(param_1 + 0x298) + -1) * 8);
    if (lVar5 == 0) {
      return;
    }
    lVar7 = *(longlong *)(lVar5 + 8);
    lVar8 = FUN_144a7add4();
    if (*(ulonglong *)(lVar8 + 8) == 0) {
      bVar10 = lVar7 != 0;
      if (lVar7 != lVar8 && bVar10) {
        do {
          lVar7 = *(longlong *)(lVar7 + 0x30);
          bVar10 = lVar7 != 0;
          if (lVar7 == lVar8) break;
        } while (lVar7 != 0);
      }
      if (!bVar10) {
        return;
      }
    }
    else if ((*(ulonglong *)(lVar7 + 0x18) & *(ulonglong *)(lVar8 + 8)) == 0) {
      return;
    }
    puVar4 = *(undefined8 **)(param_1 + 0x2a0);
    if (puVar4 != (undefined8 *)0x0) {
      (**(code **)*puVar4)(puVar4,lVar1);
    }
    plVar9 = *(longlong **)(lVar5 + 0x70);
    iVar2 = *(int *)(lVar5 + 0x44);
    lVar5 = *plVar9;
  }
  else {
    lVar5 = plVar9[1];
    lVar7 = FUN_14475b26a();
    if (*(ulonglong *)(lVar7 + 8) == 0) {
      bVar10 = lVar5 != 0;
      if (lVar5 != lVar7 && bVar10) {
        do {
          lVar5 = *(longlong *)(lVar5 + 0x30);
          bVar10 = lVar5 != 0;
          if (lVar5 == lVar7) break;
        } while (lVar5 != 0);
      }
      if (!bVar10) goto LAB_148b2aeca;
    }
    else if ((*(ulonglong *)(lVar5 + 0x18) & *(ulonglong *)(lVar7 + 8)) == 0) goto LAB_148b2aeca;
    puVar4 = *(undefined8 **)(param_1 + 0x2a0);
    if (puVar4 != (undefined8 *)0x0) {
      (**(code **)*puVar4)(puVar4,lVar1);
    }
    iVar2 = *(int *)((longlong)plVar9 + 0x44);
    lVar5 = *plVar9;
  }
  (**(code **)(lVar5 + 0x1f8))(plVar9,lVar6 + iVar2,uVar3);
  plVar9 = *(longlong **)(param_1 + 0x2a0);
  if (plVar9 == (longlong *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000148b2ae96. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar9 + 8))(plVar9,lVar1);
  return;
}



// FUNCTION 148b2af70 FUN_148b2af70 body=99 status=ok
// SIG undefined FUN_148b2af70(void)

longlong FUN_148b2af70(longlong param_1)

{
  FUN_140a5071c();
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  FUN_14485c47a(param_1 + 0x1a8,0);
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  FUN_14485c47a(param_1 + 0x1b0,0);
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  *(undefined8 *)(param_1 + 0x1d0) = 0x100000000;
  return param_1;
}



// FUNCTION 148b2afd4 FUN_148b2afd4 body=115 status=ok
// SIG undefined FUN_148b2afd4(void)

longlong * FUN_148b2afd4(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  
  FUN_140a515e6(*param_1,param_3);
  FUN_148b2b048(*param_1,param_3);
  plVar1 = (longlong *)*param_1;
  bVar4 = *(byte *)(plVar1 + 6);
  bVar3 = 0x20;
  if ((bVar4 & 0x10) == 0) {
    cVar2 = (**(code **)(*plVar1 + 0x220))(plVar1);
    bVar3 = cVar2 << 5;
    bVar4 = *(byte *)(plVar1 + 6);
  }
  *(byte *)(plVar1 + 6) = bVar4 & 0xdf | bVar3;
  *(byte *)(*param_1 + 0x31) = *(byte *)(*param_1 + 0x31) | 4;
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  return param_2;
}



// FUNCTION 148b2b048 FUN_148b2b048 body=1719 status=ok
// SIG undefined FUN_148b2b048(void)

void FUN_148b2b048(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_638 [39];
  undefined1 local_611;
  code *local_610;
  undefined4 local_608;
  undefined4 uStack_604;
  code *local_5f8;
  longlong *local_5f0;
  undefined8 local_5e8;
  code *local_5e0;
  undefined8 local_5d8;
  undefined1 local_5d0 [424];
  undefined8 local_428;
  undefined1 local_118 [16];
  undefined1 local_108 [32];
  undefined1 local_e8 [176];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_638;
  *(undefined8 *)(param_1 + 0x278) = *(undefined8 *)(param_2 + 0x1b8);
  uVar4 = *(undefined4 *)(param_2 + 0x1ac);
  uVar5 = *(undefined4 *)(param_2 + 0x1b0);
  uVar6 = *(undefined4 *)(param_2 + 0x1b4);
  *(undefined4 *)(param_1 + 0x268) = *(undefined4 *)(param_2 + 0x1a8);
  *(undefined4 *)(param_1 + 0x26c) = uVar4;
  *(undefined4 *)(param_1 + 0x270) = uVar5;
  *(undefined4 *)(param_1 + 0x274) = uVar6;
  FUN_148b2e2bc(param_1 + 0x280,param_2 + 0x1c0);
  *(undefined8 *)(param_1 + 0x298) = *(undefined8 *)(param_2 + 0x1d8);
  if (*(int *)(param_1 + 0x290) != 0) {
    lVar10 = param_1 + 0x280;
    if (*(longlong *)(param_1 + 0x288) != 0) {
      lVar10 = *(longlong *)(param_1 + 0x288);
    }
    plVar3 = *(longlong **)(lVar10 + (longlong)(*(int *)(param_1 + 0x290) + -1) * 8);
    if (plVar3 != (longlong *)0x0) {
      lVar10 = plVar3[1];
      lVar8 = FUN_14475b26a();
      uVar9 = DAT_14cb9b578;
      if (*(ulonglong *)(lVar8 + 8) == 0) {
        bVar11 = lVar10 != 0;
        if (lVar10 != lVar8 && bVar11) {
          do {
            lVar10 = *(longlong *)(lVar10 + 0x30);
            bVar11 = lVar10 != 0;
            if (lVar10 == lVar8) break;
          } while (lVar10 != 0);
        }
        if (!bVar11) goto LAB_148b2b121;
      }
      else if ((*(ulonglong *)(lVar10 + 0x18) & *(ulonglong *)(lVar8 + 8)) == 0) goto LAB_148b2b121;
      if ((int)plVar3[6] == 1) {
        FUN_1446ddc76(&local_5e8,"PropertyValue.SpinBox",1);
        uVar9 = FUN_145817ec0(uVar9,local_5e8,0,0);
        cVar7 = (**(code **)(*plVar3 + 0x260))(plVar3,0xffffffffffffffff);
        local_428 = uVar9;
        if ((cVar7 == '\0') || (cVar7 = (**(code **)(*plVar3 + 0x1e8))(plVar3), cVar7 == '\0')) {
          cVar7 = (**(code **)(*plVar3 + 0x1e8))(plVar3);
          if (cVar7 == '\0') {
            FUN_148b2c924(local_5d0);
            local_610 = FUN_148b2cd80;
            local_608 = 0;
            FUN_148b2cccc(local_5d0,param_1);
            local_5e0 = FUN_148b2ce44;
            local_5d8._0_4_ = 0;
            FUN_148b47abc(&local_610,param_1,&local_5e0);
            FUN_144a450dc(local_118,&local_610);
            FUN_1449db362(&local_610);
            local_5e0 = (code *)&LAB_148b2cf82;
            local_5d8._0_4_ = 0;
            FUN_148b47f5c(&local_610,param_1,&local_5e0);
            FUN_144a450dc(local_108,&local_610);
            FUN_1449db362(&local_610);
            local_5e0 = (code *)&LAB_148b2cf90;
            local_5d8 = (longlong *)((ulonglong)local_5d8._4_4_ << 0x20);
            FUN_148b47abc(&local_610,param_1,&local_5e0);
            FUN_144a450dc(local_e8,&local_610);
            FUN_1449db362(&local_610);
            FUN_148b43d54(&local_610,&local_611);
            FUN_148b2cf96(&local_610,&local_5f8,local_5d0);
            local_5e0 = local_5f8;
            local_5d8 = local_5f0;
            if (local_5f0 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_5f0 + 1) = (int)local_5f0[1] + 1;
              UNLOCK();
            }
            FUN_140a58896(param_1 + 0x1e0,&local_5e0);
            plVar3 = local_5d8;
            if (local_5d8 != (longlong *)0x0) {
              LOCK();
              plVar1 = local_5d8 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                (**(code **)*local_5d8)(local_5d8);
                LOCK();
                piVar2 = (int *)((longlong)plVar3 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*plVar3 + 0x10))(plVar3);
                }
              }
            }
            if (local_5f0 != (longlong *)0x0) {
              LOCK();
              plVar3 = local_5f0 + 1;
              *(int *)plVar3 = (int)*plVar3 + -1;
              UNLOCK();
              if ((int)*plVar3 == 0) {
                (**(code **)*local_5f0)(local_5f0);
                LOCK();
                piVar2 = (int *)((longlong)local_5f0 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*local_5f0 + 0x10))(local_5f0);
                }
              }
            }
            plVar3 = (longlong *)CONCAT44(uStack_604,local_608);
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
            FUN_148b2d00a(local_5d0);
          }
          else {
            FUN_148b2c012();
            local_610 = FUN_148b2c46e;
            local_608 = 0;
            FUN_148b2c3ba(local_5d0,param_1);
            local_5e0 = FUN_148b2c530;
            local_5d8._0_4_ = 0;
            FUN_148b3ed2e(&local_610,param_1,&local_5e0);
            FUN_144a450dc(local_118,&local_610);
            FUN_1449db362(&local_610);
            local_5e0 = (code *)&LAB_148b2c660;
            local_5d8._0_4_ = 0;
            FUN_148b3f1d0(&local_610,param_1,&local_5e0);
            FUN_144a450dc(local_108,&local_610);
            FUN_1449db362(&local_610);
            local_5e0 = (code *)&LAB_148b2c66e;
            local_5d8 = (longlong *)((ulonglong)local_5d8._4_4_ << 0x20);
            FUN_148b3ed2e(&local_610,param_1,&local_5e0);
            FUN_144a450dc(local_e8,&local_610);
            FUN_1449db362(&local_610);
            FUN_148b3acde(&local_610,&local_611);
            FUN_148b2c674(&local_610,&local_5f8,local_5d0);
            local_5e0 = local_5f8;
            local_5d8 = local_5f0;
            if (local_5f0 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_5f0 + 1) = (int)local_5f0[1] + 1;
              UNLOCK();
            }
            FUN_140a58896(param_1 + 0x1e0,&local_5e0);
            plVar3 = local_5d8;
            if (local_5d8 != (longlong *)0x0) {
              LOCK();
              plVar1 = local_5d8 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                (**(code **)*local_5d8)(local_5d8);
                LOCK();
                piVar2 = (int *)((longlong)plVar3 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*plVar3 + 0x10))(plVar3);
                }
              }
            }
            if (local_5f0 != (longlong *)0x0) {
              LOCK();
              plVar3 = local_5f0 + 1;
              *(int *)plVar3 = (int)*plVar3 + -1;
              UNLOCK();
              if ((int)*plVar3 == 0) {
                (**(code **)*local_5f0)(local_5f0);
                LOCK();
                piVar2 = (int *)((longlong)local_5f0 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*local_5f0 + 0x10))(local_5f0);
                }
              }
            }
            plVar3 = (longlong *)CONCAT44(uStack_604,local_608);
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
            FUN_148b2c6e8(local_5d0);
          }
        }
        else {
          FUN_148b2b700(local_5d0);
          local_610 = FUN_148b2bb5c;
          local_608 = 0;
          FUN_148b2baa8(local_5d0,param_1);
          local_5e0 = FUN_148b2bc1e;
          local_5d8._0_4_ = 0;
          FUN_148b35d04(&local_610,param_1,&local_5e0);
          FUN_144a450dc(local_118,&local_610);
          FUN_1449db362(&local_610);
          local_5e0 = (code *)&LAB_148b2bd4e;
          local_5d8._0_4_ = 0;
          FUN_148b361b4(&local_610,param_1,&local_5e0);
          FUN_144a450dc(local_108,&local_610);
          FUN_1449db362(&local_610);
          local_5e0 = (code *)&LAB_148b2bd5c;
          local_5d8 = (longlong *)((ulonglong)local_5d8._4_4_ << 0x20);
          FUN_148b35d04(&local_610,param_1,&local_5e0);
          FUN_144a450dc(local_e8,&local_610);
          FUN_1449db362(&local_610);
          FUN_148b31fd2(&local_610,&local_611);
          FUN_148b2bd62(&local_610,&local_5f8,local_5d0);
          local_5e0 = local_5f8;
          local_5d8 = local_5f0;
          if (local_5f0 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_5f0 + 1) = (int)local_5f0[1] + 1;
            UNLOCK();
          }
          FUN_140a58896(param_1 + 0x1e0,&local_5e0);
          plVar3 = local_5d8;
          if (local_5d8 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_5d8 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*local_5d8)(local_5d8);
              LOCK();
              piVar2 = (int *)((longlong)plVar3 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar3 + 0x10))(plVar3);
              }
            }
          }
          if (local_5f0 != (longlong *)0x0) {
            LOCK();
            plVar3 = local_5f0 + 1;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)*plVar3 == 0) {
              (**(code **)*local_5f0)(local_5f0);
              LOCK();
              piVar2 = (int *)((longlong)local_5f0 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*local_5f0 + 0x10))(local_5f0);
              }
            }
          }
          plVar3 = (longlong *)CONCAT44(uStack_604,local_608);
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
          FUN_148b2bdd6(local_5d0);
        }
      }
    }
  }
LAB_148b2b121:
  if ((local_38 ^ (ulonglong)auStack_638) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148b2b700 FUN_148b2b700 body=935 status=ok
// SIG undefined FUN_148b2b700(void)

longlong FUN_148b2b700(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined1 auStack_d8 [40];
  undefined8 local_b0;
  undefined1 local_a8 [56];
  longlong *local_70;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_140a5071c();
  plVar2 = (longlong *)FUN_140a2b044(&DAT_14c96b348);
  if (plVar2 == (longlong *)0x0) {
    plVar2 = DAT_14c96b350;
  }
  FUN_1446ddc76(&local_48,"SpinBox",1);
  uVar3 = FUN_145817ec0(plVar2,local_48,0,0);
  *(undefined8 *)(param_1 + 0x1a8) = uVar3;
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  *(undefined1 *)(param_1 + 0x1b8) = 1;
  *(undefined1 *)(param_1 + 0x1d8) = 0;
  *(undefined1 *)(param_1 + 0x1e0) = 0;
  *(undefined1 *)(param_1 + 0x200) = 0;
  *(undefined1 *)(param_1 + 0x208) = 0;
  *(undefined1 *)(param_1 + 0x228) = 0;
  *(undefined1 *)(param_1 + 0x230) = 0;
  *(undefined1 *)(param_1 + 0x250) = 0;
  *(undefined1 *)(param_1 + 600) = 0;
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  *(undefined8 *)(param_1 + 0x1e8) = 0;
  *(undefined8 *)(param_1 + 0x1f0) = 0;
  *(undefined8 *)(param_1 + 0x210) = 0;
  *(undefined8 *)(param_1 + 0x218) = 0;
  *(undefined8 *)(param_1 + 0x238) = 0;
  *(undefined8 *)(param_1 + 0x240) = 0;
  *(undefined8 *)(param_1 + 0x260) = 0;
  *(undefined8 *)(param_1 + 0x268) = 0;
  *(undefined4 *)(param_1 + 0x270) = 1;
  *(undefined1 *)(param_1 + 0x274) = 1;
  *(undefined1 *)(param_1 + 0x278) = 1;
  *(undefined8 *)(param_1 + 0x280) = 0;
  *(undefined8 *)(param_1 + 0x288) = 0;
  *(undefined4 *)(param_1 + 0x290) = 6;
  *(undefined1 *)(param_1 + 0x294) = 1;
  *(undefined1 *)(param_1 + 0x298) = 1;
  *(undefined8 *)(param_1 + 0x2a0) = 0;
  *(undefined8 *)(param_1 + 0x2a8) = 0;
  *(undefined2 *)(param_1 + 0x2b0) = 0x100;
  *(undefined8 *)(param_1 + 0x2b8) = 0;
  *(undefined8 *)(param_1 + 0x2c0) = 0;
  *(undefined2 *)(param_1 + 0x2c8) = 0x101;
  *(undefined8 *)(param_1 + 0x2d0) = 0;
  *(undefined8 *)(param_1 + 0x2d8) = 0;
  *(undefined8 *)(param_1 + 0x2e0) = 0;
  *(undefined1 *)(param_1 + 0x2e8) = 1;
  *(undefined8 *)(param_1 + 0x2f0) = 0;
  *(undefined8 *)(param_1 + 0x2f8) = 0;
  *(undefined8 *)(param_1 + 0x2fd) = 0;
  *(undefined8 *)(param_1 + 0x308) = 0;
  *(undefined8 *)(param_1 + 0x310) = 0;
  *(undefined4 *)(param_1 + 0x318) = 0x41200000;
  *(undefined1 *)(param_1 + 0x31c) = 1;
  *(undefined8 *)(param_1 + 800) = 0;
  *(undefined8 *)(param_1 + 0x328) = 0;
  *(undefined4 *)(param_1 + 0x330) = 0x3dcccccd;
  *(undefined1 *)(param_1 + 0x334) = 1;
  *(undefined8 *)(param_1 + 0x345) = 0;
  *(undefined8 *)(param_1 + 0x338) = 0;
  *(undefined8 *)(param_1 + 0x340) = 0;
  *(undefined8 *)(param_1 + 0x350) = 0;
  *(undefined8 *)(param_1 + 0x358) = 0;
  *(undefined2 *)(param_1 + 0x360) = 0x100;
  *(undefined8 *)(param_1 + 0x368) = 0;
  *(undefined8 *)(param_1 + 0x370) = 0;
  *(undefined2 *)(param_1 + 0x378) = 0x100;
  *(undefined8 *)(param_1 + 0x3a0) = 0;
  *(undefined4 *)(param_1 + 0x3a8) = 0;
  *(undefined8 *)(param_1 + 0x380) = 0;
  *(undefined8 *)(param_1 + 0x388) = 0;
  *(undefined8 *)(param_1 + 0x38c) = 0;
  *(undefined8 *)(param_1 + 0x394) = 0;
  *(undefined4 *)(param_1 + 0x3b0) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x3b4) = 1;
  *(undefined8 *)(param_1 + 0x3b8) = 0;
  *(undefined8 *)(param_1 + 0x3c0) = 0;
  *(undefined8 *)(param_1 + 0x3c1) = 0;
  *(undefined8 *)(param_1 + 0x3c9) = 0;
  *(undefined8 *)(param_1 + 0x3d8) = 0;
  *(undefined8 *)(param_1 + 0x3e0) = 0;
  *(undefined2 *)(param_1 + 1000) = 1;
  *(undefined1 *)(param_1 + 0x3f8) = 0;
  *(undefined1 *)(param_1 + 0x400) = 0;
  *(undefined8 *)(param_1 + 0x408) = 0;
  *(undefined8 *)(param_1 + 0x410) = 0;
  plVar2 = (longlong *)FUN_140a2b044(&DAT_14c96b348);
  if (plVar2 == (longlong *)0x0) {
    plVar2 = DAT_14c96b350;
  }
  FUN_1446f470e(&local_b0,L"NormalFont",1);
  (**(code **)(*plVar2 + 0x88))(plVar2,local_a8,local_b0,0);
  FUN_144a87366(param_1 + 0x418,local_a8);
  *(undefined1 *)(param_1 + 0x478) = 1;
  *(undefined8 *)(param_1 + 0x480) = 0;
  *(undefined8 *)(param_1 + 0x488) = 0;
  if (local_70 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_70 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_70)();
      LOCK();
      piVar1 = (int *)((longlong)local_70 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_70 + 0x10))();
      }
    }
  }
  *(undefined8 *)(param_1 + 0x490) = 0x3f80000040000000;
  *(undefined8 *)(param_1 + 0x498) = 0x3f80000040000000;
  *(undefined1 *)(param_1 + 0x4a0) = 1;
  *(undefined8 *)(param_1 + 0x4e8) = 0;
  *(undefined4 *)(param_1 + 0x4f0) = 0;
  *(undefined2 *)(param_1 + 0x4f8) = 0x100;
  *(undefined8 *)(param_1 + 0x4a8) = 0;
  *(undefined8 *)(param_1 + 0x4b0) = 0;
  *(undefined8 *)(param_1 + 0x4b8) = 0;
  *(undefined8 *)(param_1 + 0x4c0) = 0;
  *(undefined8 *)(param_1 + 0x4c8) = 0;
  *(undefined8 *)(param_1 + 0x4d0) = 0;
  *(undefined8 *)(param_1 + 0x4d4) = 0;
  *(undefined8 *)(param_1 + 0x4dc) = 0;
  *(undefined8 *)(param_1 + 0x500) = 0;
  *(undefined8 *)(param_1 + 0x508) = 0;
  *(undefined2 *)(param_1 + 0x510) = 0x101;
  *(undefined8 *)(param_1 + 0x518) = 0;
  *(undefined8 *)(param_1 + 0x520) = 0;
  *(undefined4 *)(param_1 + 0x528) = 0;
  *(undefined1 *)(param_1 + 0x52c) = 1;
  *(undefined8 *)(param_1 + 0x530) = 0;
  *(undefined8 *)(param_1 + 0x538) = 0;
  *(undefined4 *)(param_1 + 0x540) = 0;
  *(undefined1 *)(param_1 + 0x544) = 1;
  *(undefined4 *)(param_1 + 0x558) = 0;
  *(undefined8 *)(param_1 + 0x548) = 0;
  *(undefined8 *)(param_1 + 0x550) = 0;
  *(undefined1 *)(param_1 + 0x55c) = 1;
  *(undefined8 *)(param_1 + 0x570) = 0;
  *(undefined8 *)(param_1 + 0x578) = 0;
  *(undefined8 *)(param_1 + 0x560) = 0;
  *(undefined8 *)(param_1 + 0x568) = 0;
  *(undefined1 *)(param_1 + 0x580) = 1;
  *(undefined8 *)(param_1 + 0x588) = 0;
  *(undefined4 *)(param_1 + 0x590) = 0;
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b2baa8 FUN_148b2baa8 body=178 status=ok
// SIG undefined FUN_148b2baa8(void)

longlong FUN_148b2baa8(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_78 [40];
  undefined1 local_50 [16];
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = *(undefined4 *)(param_3 + 1);
  local_40 = *param_3;
  FUN_148b357d4(local_50,param_2,&local_40);
  local_40 = 0;
  local_38 = CONCAT31(local_38._1_3_,1);
  local_30 = 0;
  local_28 = 0;
  FUN_148b3590e(&local_30,local_50);
  *(undefined1 *)(param_1 + 0x1b8) = (undefined1)local_38;
  *(undefined8 *)(param_1 + 0x1b0) = local_40;
  FUN_144a450dc(param_1 + 0x1c0,&local_30);
  FUN_1449db362(&local_30);
  FUN_1449db362(local_50);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b2bb5c FUN_148b2bb5c body=194 status=ok
// SIG undefined FUN_148b2bb5c(void)

undefined8 FUN_148b2bb5c(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  bool bVar6;
  
  lVar2 = FUN_148b24d9e(param_1 + 0x268);
  if ((lVar2 != 0) && (*(int *)(param_1 + 0x290) != 0)) {
    lVar5 = param_1 + 0x280;
    if (*(longlong *)(param_1 + 0x288) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x288);
    }
    plVar1 = *(longlong **)(lVar5 + (longlong)(*(int *)(param_1 + 0x290) + -1) * 8);
    if (plVar1 != (longlong *)0x0) {
      lVar5 = plVar1[1];
      lVar3 = FUN_14475b26a();
      if (*(ulonglong *)(lVar3 + 8) == 0) {
        bVar6 = lVar5 != 0;
        if (lVar5 != lVar3 && bVar6) {
          do {
            lVar5 = *(longlong *)(lVar5 + 0x30);
            bVar6 = lVar5 != 0;
            if (lVar5 == lVar3) break;
          } while (lVar5 != 0);
        }
        if (!bVar6) {
          return 0;
        }
      }
      else if ((*(ulonglong *)(lVar5 + 0x18) & *(ulonglong *)(lVar3 + 8)) == 0) {
        return 0;
      }
                    /* WARNING: Could not recover jumptable at 0x000148b2bbe4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (**(code **)(*plVar1 + 0x220))(plVar1,lVar2 + *(int *)((longlong)plVar1 + 0x44));
      return uVar4;
    }
  }
  return 0;
}



// FUNCTION 148b2bc1e FUN_148b2bc1e body=303 status=ok
// SIG undefined FUN_148b2bc1e(void)

void FUN_148b2bc1e(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar2 = *(longlong **)(param_1 + 0x298);
  lVar1 = param_1 + 0x268;
  lVar4 = FUN_148b24d9e(lVar1);
  if ((lVar4 != 0) && (*(int *)(param_1 + 0x290) != 0)) {
    lVar6 = param_1 + 0x280;
    if (*(longlong *)(param_1 + 0x288) != 0) {
      lVar6 = *(longlong *)(param_1 + 0x288);
    }
    plVar3 = *(longlong **)(lVar6 + (longlong)(*(int *)(param_1 + 0x290) + -1) * 8);
    if (plVar3 != (longlong *)0x0) {
      lVar6 = plVar3[1];
      lVar5 = FUN_14475b26a();
      if (*(ulonglong *)(lVar5 + 8) == 0) {
        bVar7 = lVar6 != 0;
        if (lVar6 != lVar5 && bVar7) {
          do {
            lVar6 = *(longlong *)(lVar6 + 0x30);
            bVar7 = lVar6 != 0;
            if (lVar6 == lVar5) break;
          } while (lVar6 != 0);
        }
        if (!bVar7) {
          return;
        }
      }
      else if ((*(ulonglong *)(lVar6 + 0x18) & *(ulonglong *)(lVar5 + 8)) == 0) {
        return;
      }
      if (plVar2 == (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148b2bd4a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x1f8))(plVar3,lVar4 + *(int *)((longlong)plVar3 + 0x44),param_2);
        return;
      }
      (**(code **)*plVar2)(plVar2,lVar1);
      (**(code **)(*plVar3 + 0x1f8))(plVar3,lVar4 + *(int *)((longlong)plVar3 + 0x44),param_2);
                    /* WARNING: Could not recover jumptable at 0x000148b2bce4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 8))(plVar2,lVar1);
      return;
    }
  }
  return;
}



// FUNCTION 148b2bd62 FUN_148b2bd62 body=115 status=ok
// SIG undefined FUN_148b2bd62(void)

longlong * FUN_148b2bd62(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  
  FUN_140a515e6(*param_1,param_3);
  FUN_148b36664(*param_1,param_3);
  plVar1 = (longlong *)*param_1;
  bVar4 = *(byte *)(plVar1 + 6);
  bVar3 = 0x20;
  if ((bVar4 & 0x10) == 0) {
    cVar2 = (**(code **)(*plVar1 + 0x220))(plVar1);
    bVar3 = cVar2 << 5;
    bVar4 = *(byte *)(plVar1 + 6);
  }
  *(byte *)(plVar1 + 6) = bVar4 & 0xdf | bVar3;
  *(byte *)(*param_1 + 0x31) = *(byte *)(*param_1 + 0x31) | 4;
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  return param_2;
}



// FUNCTION 148b2bdd6 FUN_148b2bdd6 body=572 status=ok
// SIG undefined FUN_148b2bdd6(void)

void FUN_148b2bdd6(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_1449db362(param_1 + 0x588);
  plVar3 = *(longlong **)(param_1 + 0x578);
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
  FUN_1449db362(param_1 + 0x560);
  FUN_1449db362(param_1 + 0x548);
  FUN_1449db362(param_1 + 0x530);
  FUN_1449db362(param_1 + 0x518);
  FUN_1449db362(param_1 + 0x500);
  FUN_1449db362(param_1 + 0x4e8);
  FUN_1449db362(param_1 + 0x4d8);
  FUN_1449db362(param_1 + 0x4c8);
  FUN_1449db362(param_1 + 0x4b8);
  FUN_1449db362(param_1 + 0x4a8);
  FUN_141515cba(param_1 + 0x418);
  FUN_1449db362(param_1 + 0x408);
  if (*(char *)(param_1 + 0x3f8) == '\x01') {
    *(undefined1 *)(param_1 + 0x3f8) = 0;
  }
  FUN_1449db362(param_1 + 0x3d8);
  FUN_1449db362(param_1 + 0x3b8);
  FUN_1449db362(param_1 + 0x3a0);
  FUN_1449db362(param_1 + 0x390);
  FUN_1449db362(param_1 + 0x380);
  FUN_1449db362(param_1 + 0x368);
  FUN_1449db362(param_1 + 0x350);
  FUN_1449db362(param_1 + 0x338);
  FUN_1449db362(param_1 + 800);
  FUN_1449db362(param_1 + 0x308);
  FUN_1449db362(param_1 + 0x2f0);
  FUN_1449db362(param_1 + 0x2d0);
  FUN_1449db362(param_1 + 0x2b8);
  FUN_1449db362(param_1 + 0x2a0);
  if (*(char *)(param_1 + 0x294) == '\x01') {
    *(undefined1 *)(param_1 + 0x294) = 0;
  }
  FUN_1449db362(param_1 + 0x280);
  if (*(char *)(param_1 + 0x274) == '\x01') {
    *(undefined1 *)(param_1 + 0x274) = 0;
  }
  FUN_1449db362(param_1 + 0x260);
  if (*(char *)(param_1 + 0x250) == '\x01') {
    *(undefined1 *)(param_1 + 0x250) = 0;
  }
  FUN_1449db362(param_1 + 0x238);
  if (*(char *)(param_1 + 0x228) == '\x01') {
    *(undefined1 *)(param_1 + 0x228) = 0;
  }
  FUN_1449db362(param_1 + 0x210);
  if (*(char *)(param_1 + 0x200) == '\x01') {
    *(undefined1 *)(param_1 + 0x200) = 0;
  }
  FUN_1449db362(param_1 + 0x1e8);
  if (*(char *)(param_1 + 0x1d8) == '\x01') {
    *(undefined1 *)(param_1 + 0x1d8) = 0;
  }
  FUN_1449db362(param_1 + 0x1c0);
  FUN_140a4ff8c(param_1);
  return;
}



// FUNCTION 148b2c012 FUN_148b2c012 body=935 status=ok
// SIG undefined FUN_148b2c012(void)

longlong FUN_148b2c012(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined1 auStack_d8 [40];
  undefined8 local_b0;
  undefined1 local_a8 [56];
  longlong *local_70;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_140a5071c();
  plVar2 = (longlong *)FUN_140a2b044(&DAT_14c96b348);
  if (plVar2 == (longlong *)0x0) {
    plVar2 = DAT_14c96b350;
  }
  FUN_1446ddc76(&local_48,"SpinBox",1);
  uVar3 = FUN_145817ec0(plVar2,local_48,0,0);
  *(undefined8 *)(param_1 + 0x1a8) = uVar3;
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  *(undefined1 *)(param_1 + 0x1b8) = 1;
  *(undefined1 *)(param_1 + 0x1d8) = 0;
  *(undefined1 *)(param_1 + 0x1e0) = 0;
  *(undefined1 *)(param_1 + 0x200) = 0;
  *(undefined1 *)(param_1 + 0x208) = 0;
  *(undefined1 *)(param_1 + 0x228) = 0;
  *(undefined1 *)(param_1 + 0x230) = 0;
  *(undefined1 *)(param_1 + 0x250) = 0;
  *(undefined1 *)(param_1 + 600) = 0;
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  *(undefined8 *)(param_1 + 0x1e8) = 0;
  *(undefined8 *)(param_1 + 0x1f0) = 0;
  *(undefined8 *)(param_1 + 0x210) = 0;
  *(undefined8 *)(param_1 + 0x218) = 0;
  *(undefined8 *)(param_1 + 0x238) = 0;
  *(undefined8 *)(param_1 + 0x240) = 0;
  *(undefined8 *)(param_1 + 0x260) = 0;
  *(undefined8 *)(param_1 + 0x268) = 0;
  *(undefined4 *)(param_1 + 0x270) = 1;
  *(undefined1 *)(param_1 + 0x274) = 1;
  *(undefined1 *)(param_1 + 0x278) = 1;
  *(undefined8 *)(param_1 + 0x280) = 0;
  *(undefined8 *)(param_1 + 0x288) = 0;
  *(undefined4 *)(param_1 + 0x290) = 6;
  *(undefined1 *)(param_1 + 0x294) = 1;
  *(undefined1 *)(param_1 + 0x298) = 1;
  *(undefined8 *)(param_1 + 0x2a0) = 0;
  *(undefined8 *)(param_1 + 0x2a8) = 0;
  *(undefined2 *)(param_1 + 0x2b0) = 0x100;
  *(undefined8 *)(param_1 + 0x2b8) = 0;
  *(undefined8 *)(param_1 + 0x2c0) = 0;
  *(undefined2 *)(param_1 + 0x2c8) = 0x101;
  *(undefined8 *)(param_1 + 0x2d0) = 0;
  *(undefined8 *)(param_1 + 0x2d8) = 0;
  *(undefined8 *)(param_1 + 0x2e0) = 0;
  *(undefined1 *)(param_1 + 0x2e8) = 1;
  *(undefined8 *)(param_1 + 0x2f0) = 0;
  *(undefined8 *)(param_1 + 0x2f8) = 0;
  *(undefined8 *)(param_1 + 0x2fd) = 0;
  *(undefined8 *)(param_1 + 0x308) = 0;
  *(undefined8 *)(param_1 + 0x310) = 0;
  *(undefined4 *)(param_1 + 0x318) = 0x41200000;
  *(undefined1 *)(param_1 + 0x31c) = 1;
  *(undefined8 *)(param_1 + 800) = 0;
  *(undefined8 *)(param_1 + 0x328) = 0;
  *(undefined4 *)(param_1 + 0x330) = 0x3dcccccd;
  *(undefined1 *)(param_1 + 0x334) = 1;
  *(undefined8 *)(param_1 + 0x345) = 0;
  *(undefined8 *)(param_1 + 0x338) = 0;
  *(undefined8 *)(param_1 + 0x340) = 0;
  *(undefined8 *)(param_1 + 0x350) = 0;
  *(undefined8 *)(param_1 + 0x358) = 0;
  *(undefined2 *)(param_1 + 0x360) = 0x100;
  *(undefined8 *)(param_1 + 0x368) = 0;
  *(undefined8 *)(param_1 + 0x370) = 0;
  *(undefined2 *)(param_1 + 0x378) = 0x100;
  *(undefined8 *)(param_1 + 0x3a0) = 0;
  *(undefined4 *)(param_1 + 0x3a8) = 0;
  *(undefined8 *)(param_1 + 0x380) = 0;
  *(undefined8 *)(param_1 + 0x388) = 0;
  *(undefined8 *)(param_1 + 0x38c) = 0;
  *(undefined8 *)(param_1 + 0x394) = 0;
  *(undefined4 *)(param_1 + 0x3b0) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x3b4) = 1;
  *(undefined8 *)(param_1 + 0x3b8) = 0;
  *(undefined8 *)(param_1 + 0x3c0) = 0;
  *(undefined8 *)(param_1 + 0x3c1) = 0;
  *(undefined8 *)(param_1 + 0x3c9) = 0;
  *(undefined8 *)(param_1 + 0x3d8) = 0;
  *(undefined8 *)(param_1 + 0x3e0) = 0;
  *(undefined2 *)(param_1 + 1000) = 1;
  *(undefined1 *)(param_1 + 0x3f8) = 0;
  *(undefined1 *)(param_1 + 0x400) = 0;
  *(undefined8 *)(param_1 + 0x408) = 0;
  *(undefined8 *)(param_1 + 0x410) = 0;
  plVar2 = (longlong *)FUN_140a2b044(&DAT_14c96b348);
  if (plVar2 == (longlong *)0x0) {
    plVar2 = DAT_14c96b350;
  }
  FUN_1446f470e(&local_b0,L"NormalFont",1);
  (**(code **)(*plVar2 + 0x88))(plVar2,local_a8,local_b0,0);
  FUN_144a87366(param_1 + 0x418,local_a8);
  *(undefined1 *)(param_1 + 0x478) = 1;
  *(undefined8 *)(param_1 + 0x480) = 0;
  *(undefined8 *)(param_1 + 0x488) = 0;
  if (local_70 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_70 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_70)();
      LOCK();
      piVar1 = (int *)((longlong)local_70 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_70 + 0x10))();
      }
    }
  }
  *(undefined8 *)(param_1 + 0x490) = 0x3f80000040000000;
  *(undefined8 *)(param_1 + 0x498) = 0x3f80000040000000;
  *(undefined1 *)(param_1 + 0x4a0) = 1;
  *(undefined8 *)(param_1 + 0x4e8) = 0;
  *(undefined4 *)(param_1 + 0x4f0) = 0;
  *(undefined2 *)(param_1 + 0x4f8) = 0x100;
  *(undefined8 *)(param_1 + 0x4a8) = 0;
  *(undefined8 *)(param_1 + 0x4b0) = 0;
  *(undefined8 *)(param_1 + 0x4b8) = 0;
  *(undefined8 *)(param_1 + 0x4c0) = 0;
  *(undefined8 *)(param_1 + 0x4c8) = 0;
  *(undefined8 *)(param_1 + 0x4d0) = 0;
  *(undefined8 *)(param_1 + 0x4d4) = 0;
  *(undefined8 *)(param_1 + 0x4dc) = 0;
  *(undefined8 *)(param_1 + 0x500) = 0;
  *(undefined8 *)(param_1 + 0x508) = 0;
  *(undefined2 *)(param_1 + 0x510) = 0x101;
  *(undefined8 *)(param_1 + 0x518) = 0;
  *(undefined8 *)(param_1 + 0x520) = 0;
  *(undefined4 *)(param_1 + 0x528) = 0;
  *(undefined1 *)(param_1 + 0x52c) = 1;
  *(undefined8 *)(param_1 + 0x530) = 0;
  *(undefined8 *)(param_1 + 0x538) = 0;
  *(undefined4 *)(param_1 + 0x540) = 0;
  *(undefined1 *)(param_1 + 0x544) = 1;
  *(undefined4 *)(param_1 + 0x558) = 0;
  *(undefined8 *)(param_1 + 0x548) = 0;
  *(undefined8 *)(param_1 + 0x550) = 0;
  *(undefined1 *)(param_1 + 0x55c) = 1;
  *(undefined8 *)(param_1 + 0x570) = 0;
  *(undefined8 *)(param_1 + 0x578) = 0;
  *(undefined8 *)(param_1 + 0x560) = 0;
  *(undefined8 *)(param_1 + 0x568) = 0;
  *(undefined1 *)(param_1 + 0x580) = 1;
  *(undefined8 *)(param_1 + 0x588) = 0;
  *(undefined4 *)(param_1 + 0x590) = 0;
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b2c3ba FUN_148b2c3ba body=178 status=ok
// SIG undefined FUN_148b2c3ba(void)

longlong FUN_148b2c3ba(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_78 [40];
  undefined1 local_50 [16];
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = *(undefined4 *)(param_3 + 1);
  local_40 = *param_3;
  FUN_148b3e7fe(local_50,param_2,&local_40);
  local_40 = 0;
  local_38 = CONCAT31(local_38._1_3_,1);
  local_30 = 0;
  local_28 = 0;
  FUN_148b3e938(&local_30,local_50);
  *(undefined1 *)(param_1 + 0x1b8) = (undefined1)local_38;
  *(undefined8 *)(param_1 + 0x1b0) = local_40;
  FUN_144a450dc(param_1 + 0x1c0,&local_30);
  FUN_1449db362(&local_30);
  FUN_1449db362(local_50);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b2c46e FUN_148b2c46e body=194 status=ok
// SIG undefined FUN_148b2c46e(void)

undefined8 FUN_148b2c46e(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  bool bVar6;
  
  lVar2 = FUN_148b24d9e(param_1 + 0x268);
  if ((lVar2 != 0) && (*(int *)(param_1 + 0x290) != 0)) {
    lVar5 = param_1 + 0x280;
    if (*(longlong *)(param_1 + 0x288) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x288);
    }
    plVar1 = *(longlong **)(lVar5 + (longlong)(*(int *)(param_1 + 0x290) + -1) * 8);
    if (plVar1 != (longlong *)0x0) {
      lVar5 = plVar1[1];
      lVar3 = FUN_14475b26a();
      if (*(ulonglong *)(lVar3 + 8) == 0) {
        bVar6 = lVar5 != 0;
        if (lVar5 != lVar3 && bVar6) {
          do {
            lVar5 = *(longlong *)(lVar5 + 0x30);
            bVar6 = lVar5 != 0;
            if (lVar5 == lVar3) break;
          } while (lVar5 != 0);
        }
        if (!bVar6) {
          return 0;
        }
      }
      else if ((*(ulonglong *)(lVar5 + 0x18) & *(ulonglong *)(lVar3 + 8)) == 0) {
        return 0;
      }
                    /* WARNING: Could not recover jumptable at 0x000148b2c4f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (**(code **)(*plVar1 + 0x230))(plVar1,lVar2 + *(int *)((longlong)plVar1 + 0x44));
      return uVar4;
    }
  }
  return 0;
}



// FUNCTION 148b2c530 FUN_148b2c530 body=303 status=ok
// SIG undefined FUN_148b2c530(void)

void FUN_148b2c530(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar2 = *(longlong **)(param_1 + 0x298);
  lVar1 = param_1 + 0x268;
  lVar4 = FUN_148b24d9e(lVar1);
  if ((lVar4 != 0) && (*(int *)(param_1 + 0x290) != 0)) {
    lVar6 = param_1 + 0x280;
    if (*(longlong *)(param_1 + 0x288) != 0) {
      lVar6 = *(longlong *)(param_1 + 0x288);
    }
    plVar3 = *(longlong **)(lVar6 + (longlong)(*(int *)(param_1 + 0x290) + -1) * 8);
    if (plVar3 != (longlong *)0x0) {
      lVar6 = plVar3[1];
      lVar5 = FUN_14475b26a();
      if (*(ulonglong *)(lVar5 + 8) == 0) {
        bVar7 = lVar6 != 0;
        if (lVar6 != lVar5 && bVar7) {
          do {
            lVar6 = *(longlong *)(lVar6 + 0x30);
            bVar7 = lVar6 != 0;
            if (lVar6 == lVar5) break;
          } while (lVar6 != 0);
        }
        if (!bVar7) {
          return;
        }
      }
      else if ((*(ulonglong *)(lVar6 + 0x18) & *(ulonglong *)(lVar5 + 8)) == 0) {
        return;
      }
      if (plVar2 == (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148b2c65c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x200))(plVar3,lVar4 + *(int *)((longlong)plVar3 + 0x44),param_2);
        return;
      }
      (**(code **)*plVar2)(plVar2,lVar1);
      (**(code **)(*plVar3 + 0x200))(plVar3,lVar4 + *(int *)((longlong)plVar3 + 0x44),param_2);
                    /* WARNING: Could not recover jumptable at 0x000148b2c5f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 8))(plVar2,lVar1);
      return;
    }
  }
  return;
}



// FUNCTION 148b2c674 FUN_148b2c674 body=115 status=ok
// SIG undefined FUN_148b2c674(void)

longlong * FUN_148b2c674(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  
  FUN_140a515e6(*param_1,param_3);
  FUN_148b3f680(*param_1,param_3);
  plVar1 = (longlong *)*param_1;
  bVar4 = *(byte *)(plVar1 + 6);
  bVar3 = 0x20;
  if ((bVar4 & 0x10) == 0) {
    cVar2 = (**(code **)(*plVar1 + 0x220))(plVar1);
    bVar3 = cVar2 << 5;
    bVar4 = *(byte *)(plVar1 + 6);
  }
  *(byte *)(plVar1 + 6) = bVar4 & 0xdf | bVar3;
  *(byte *)(*param_1 + 0x31) = *(byte *)(*param_1 + 0x31) | 4;
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  return param_2;
}



// FUNCTION 148b2c6e8 FUN_148b2c6e8 body=572 status=ok
// SIG undefined FUN_148b2c6e8(void)

void FUN_148b2c6e8(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_1449db362(param_1 + 0x588);
  plVar3 = *(longlong **)(param_1 + 0x578);
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
  FUN_1449db362(param_1 + 0x560);
  FUN_1449db362(param_1 + 0x548);
  FUN_1449db362(param_1 + 0x530);
  FUN_1449db362(param_1 + 0x518);
  FUN_1449db362(param_1 + 0x500);
  FUN_1449db362(param_1 + 0x4e8);
  FUN_1449db362(param_1 + 0x4d8);
  FUN_1449db362(param_1 + 0x4c8);
  FUN_1449db362(param_1 + 0x4b8);
  FUN_1449db362(param_1 + 0x4a8);
  FUN_141515cba(param_1 + 0x418);
  FUN_1449db362(param_1 + 0x408);
  if (*(char *)(param_1 + 0x3f8) == '\x01') {
    *(undefined1 *)(param_1 + 0x3f8) = 0;
  }
  FUN_1449db362(param_1 + 0x3d8);
  FUN_1449db362(param_1 + 0x3b8);
  FUN_1449db362(param_1 + 0x3a0);
  FUN_1449db362(param_1 + 0x390);
  FUN_1449db362(param_1 + 0x380);
  FUN_1449db362(param_1 + 0x368);
  FUN_1449db362(param_1 + 0x350);
  FUN_1449db362(param_1 + 0x338);
  FUN_1449db362(param_1 + 800);
  FUN_1449db362(param_1 + 0x308);
  FUN_1449db362(param_1 + 0x2f0);
  FUN_1449db362(param_1 + 0x2d0);
  FUN_1449db362(param_1 + 0x2b8);
  FUN_1449db362(param_1 + 0x2a0);
  if (*(char *)(param_1 + 0x294) == '\x01') {
    *(undefined1 *)(param_1 + 0x294) = 0;
  }
  FUN_1449db362(param_1 + 0x280);
  if (*(char *)(param_1 + 0x274) == '\x01') {
    *(undefined1 *)(param_1 + 0x274) = 0;
  }
  FUN_1449db362(param_1 + 0x260);
  if (*(char *)(param_1 + 0x250) == '\x01') {
    *(undefined1 *)(param_1 + 0x250) = 0;
  }
  FUN_1449db362(param_1 + 0x238);
  if (*(char *)(param_1 + 0x228) == '\x01') {
    *(undefined1 *)(param_1 + 0x228) = 0;
  }
  FUN_1449db362(param_1 + 0x210);
  if (*(char *)(param_1 + 0x200) == '\x01') {
    *(undefined1 *)(param_1 + 0x200) = 0;
  }
  FUN_1449db362(param_1 + 0x1e8);
  if (*(char *)(param_1 + 0x1d8) == '\x01') {
    *(undefined1 *)(param_1 + 0x1d8) = 0;
  }
  FUN_1449db362(param_1 + 0x1c0);
  FUN_140a4ff8c(param_1);
  return;
}



// FUNCTION 148b2c924 FUN_148b2c924 body=935 status=ok
// SIG undefined FUN_148b2c924(void)

longlong FUN_148b2c924(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined1 auStack_d8 [40];
  undefined8 local_b0;
  undefined1 local_a8 [56];
  longlong *local_70;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_140a5071c();
  plVar2 = (longlong *)FUN_140a2b044(&DAT_14c96b348);
  if (plVar2 == (longlong *)0x0) {
    plVar2 = DAT_14c96b350;
  }
  FUN_1446ddc76(&local_48,"SpinBox",1);
  uVar3 = FUN_145817ec0(plVar2,local_48,0,0);
  *(undefined8 *)(param_1 + 0x1a8) = uVar3;
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  *(undefined1 *)(param_1 + 0x1b8) = 1;
  *(undefined1 *)(param_1 + 0x1d8) = 0;
  *(undefined1 *)(param_1 + 0x1e0) = 0;
  *(undefined1 *)(param_1 + 0x200) = 0;
  *(undefined1 *)(param_1 + 0x208) = 0;
  *(undefined1 *)(param_1 + 0x228) = 0;
  *(undefined1 *)(param_1 + 0x230) = 0;
  *(undefined1 *)(param_1 + 0x250) = 0;
  *(undefined1 *)(param_1 + 600) = 0;
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  *(undefined8 *)(param_1 + 0x1e8) = 0;
  *(undefined8 *)(param_1 + 0x1f0) = 0;
  *(undefined8 *)(param_1 + 0x210) = 0;
  *(undefined8 *)(param_1 + 0x218) = 0;
  *(undefined8 *)(param_1 + 0x238) = 0;
  *(undefined8 *)(param_1 + 0x240) = 0;
  *(undefined8 *)(param_1 + 0x260) = 0;
  *(undefined8 *)(param_1 + 0x268) = 0;
  *(undefined4 *)(param_1 + 0x270) = 1;
  *(undefined1 *)(param_1 + 0x274) = 1;
  *(undefined1 *)(param_1 + 0x278) = 1;
  *(undefined8 *)(param_1 + 0x280) = 0;
  *(undefined8 *)(param_1 + 0x288) = 0;
  *(undefined4 *)(param_1 + 0x290) = 6;
  *(undefined1 *)(param_1 + 0x294) = 1;
  *(undefined1 *)(param_1 + 0x298) = 1;
  *(undefined8 *)(param_1 + 0x2a0) = 0;
  *(undefined8 *)(param_1 + 0x2a8) = 0;
  *(undefined2 *)(param_1 + 0x2b0) = 0x100;
  *(undefined8 *)(param_1 + 0x2b8) = 0;
  *(undefined8 *)(param_1 + 0x2c0) = 0;
  *(undefined2 *)(param_1 + 0x2c8) = 0x101;
  *(undefined8 *)(param_1 + 0x2d0) = 0;
  *(undefined8 *)(param_1 + 0x2d8) = 0;
  *(undefined8 *)(param_1 + 0x2e0) = 0;
  *(undefined1 *)(param_1 + 0x2e8) = 1;
  *(undefined8 *)(param_1 + 0x2f0) = 0;
  *(undefined8 *)(param_1 + 0x2f8) = 0;
  *(undefined8 *)(param_1 + 0x2fd) = 0;
  *(undefined8 *)(param_1 + 0x308) = 0;
  *(undefined8 *)(param_1 + 0x310) = 0;
  *(undefined4 *)(param_1 + 0x318) = 0x41200000;
  *(undefined1 *)(param_1 + 0x31c) = 1;
  *(undefined8 *)(param_1 + 800) = 0;
  *(undefined8 *)(param_1 + 0x328) = 0;
  *(undefined4 *)(param_1 + 0x330) = 0x3dcccccd;
  *(undefined1 *)(param_1 + 0x334) = 1;
  *(undefined8 *)(param_1 + 0x345) = 0;
  *(undefined8 *)(param_1 + 0x338) = 0;
  *(undefined8 *)(param_1 + 0x340) = 0;
  *(undefined8 *)(param_1 + 0x350) = 0;
  *(undefined8 *)(param_1 + 0x358) = 0;
  *(undefined2 *)(param_1 + 0x360) = 0x100;
  *(undefined8 *)(param_1 + 0x368) = 0;
  *(undefined8 *)(param_1 + 0x370) = 0;
  *(undefined2 *)(param_1 + 0x378) = 0x100;
  *(undefined8 *)(param_1 + 0x3a0) = 0;
  *(undefined4 *)(param_1 + 0x3a8) = 0;
  *(undefined8 *)(param_1 + 0x380) = 0;
  *(undefined8 *)(param_1 + 0x388) = 0;
  *(undefined8 *)(param_1 + 0x38c) = 0;
  *(undefined8 *)(param_1 + 0x394) = 0;
  *(undefined4 *)(param_1 + 0x3b0) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x3b4) = 1;
  *(undefined8 *)(param_1 + 0x3b8) = 0;
  *(undefined8 *)(param_1 + 0x3c0) = 0;
  *(undefined8 *)(param_1 + 0x3c1) = 0;
  *(undefined8 *)(param_1 + 0x3c9) = 0;
  *(undefined8 *)(param_1 + 0x3d8) = 0;
  *(undefined8 *)(param_1 + 0x3e0) = 0;
  *(undefined2 *)(param_1 + 1000) = 1;
  *(undefined1 *)(param_1 + 0x3f8) = 0;
  *(undefined1 *)(param_1 + 0x400) = 0;
  *(undefined8 *)(param_1 + 0x408) = 0;
  *(undefined8 *)(param_1 + 0x410) = 0;
  plVar2 = (longlong *)FUN_140a2b044(&DAT_14c96b348);
  if (plVar2 == (longlong *)0x0) {
    plVar2 = DAT_14c96b350;
  }
  FUN_1446f470e(&local_b0,L"NormalFont",1);
  (**(code **)(*plVar2 + 0x88))(plVar2,local_a8,local_b0,0);
  FUN_144a87366(param_1 + 0x418,local_a8);
  *(undefined1 *)(param_1 + 0x478) = 1;
  *(undefined8 *)(param_1 + 0x480) = 0;
  *(undefined8 *)(param_1 + 0x488) = 0;
  if (local_70 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_70 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_70)();
      LOCK();
      piVar1 = (int *)((longlong)local_70 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_70 + 0x10))();
      }
    }
  }
  *(undefined8 *)(param_1 + 0x490) = 0x3f80000040000000;
  *(undefined8 *)(param_1 + 0x498) = 0x3f80000040000000;
  *(undefined1 *)(param_1 + 0x4a0) = 1;
  *(undefined8 *)(param_1 + 0x4e8) = 0;
  *(undefined4 *)(param_1 + 0x4f0) = 0;
  *(undefined2 *)(param_1 + 0x4f8) = 0x100;
  *(undefined8 *)(param_1 + 0x4a8) = 0;
  *(undefined8 *)(param_1 + 0x4b0) = 0;
  *(undefined8 *)(param_1 + 0x4b8) = 0;
  *(undefined8 *)(param_1 + 0x4c0) = 0;
  *(undefined8 *)(param_1 + 0x4c8) = 0;
  *(undefined8 *)(param_1 + 0x4d0) = 0;
  *(undefined8 *)(param_1 + 0x4d4) = 0;
  *(undefined8 *)(param_1 + 0x4dc) = 0;
  *(undefined8 *)(param_1 + 0x500) = 0;
  *(undefined8 *)(param_1 + 0x508) = 0;
  *(undefined2 *)(param_1 + 0x510) = 0x101;
  *(undefined8 *)(param_1 + 0x518) = 0;
  *(undefined8 *)(param_1 + 0x520) = 0;
  *(undefined4 *)(param_1 + 0x528) = 0;
  *(undefined1 *)(param_1 + 0x52c) = 1;
  *(undefined8 *)(param_1 + 0x530) = 0;
  *(undefined8 *)(param_1 + 0x538) = 0;
  *(undefined4 *)(param_1 + 0x540) = 0;
  *(undefined1 *)(param_1 + 0x544) = 1;
  *(undefined4 *)(param_1 + 0x558) = 0;
  *(undefined8 *)(param_1 + 0x548) = 0;
  *(undefined8 *)(param_1 + 0x550) = 0;
  *(undefined1 *)(param_1 + 0x55c) = 1;
  *(undefined8 *)(param_1 + 0x570) = 0;
  *(undefined8 *)(param_1 + 0x578) = 0;
  *(undefined8 *)(param_1 + 0x560) = 0;
  *(undefined8 *)(param_1 + 0x568) = 0;
  *(undefined1 *)(param_1 + 0x580) = 1;
  *(undefined8 *)(param_1 + 0x588) = 0;
  *(undefined4 *)(param_1 + 0x590) = 0;
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b2cccc FUN_148b2cccc body=178 status=ok
// SIG undefined FUN_148b2cccc(void)

longlong FUN_148b2cccc(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_78 [40];
  undefined1 local_50 [16];
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = *(undefined4 *)(param_3 + 1);
  local_40 = *param_3;
  FUN_148b47580(local_50,param_2,&local_40);
  local_40 = 0;
  local_38 = CONCAT31(local_38._1_3_,1);
  local_30 = 0;
  local_28 = 0;
  FUN_148b476ba(&local_30,local_50);
  *(undefined1 *)(param_1 + 0x1b8) = (undefined1)local_38;
  *(undefined8 *)(param_1 + 0x1b0) = local_40;
  FUN_144a450dc(param_1 + 0x1c0,&local_30);
  FUN_1449db362(&local_30);
  FUN_1449db362(local_50);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b2cd80 FUN_148b2cd80 body=195 status=ok
// SIG undefined FUN_148b2cd80(void)

undefined8 FUN_148b2cd80(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  undefined8 uVar6;
  
  lVar2 = FUN_148b24d9e(param_1 + 0x268);
  if ((lVar2 != 0) && (*(int *)(param_1 + 0x290) != 0)) {
    lVar4 = param_1 + 0x280;
    if (*(longlong *)(param_1 + 0x288) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x288);
    }
    plVar1 = *(longlong **)(lVar4 + (longlong)(*(int *)(param_1 + 0x290) + -1) * 8);
    if (plVar1 != (longlong *)0x0) {
      lVar4 = plVar1[1];
      lVar3 = FUN_14475b26a();
      if (*(ulonglong *)(lVar3 + 8) == 0) {
        bVar5 = lVar4 != 0;
        if (lVar4 != lVar3 && bVar5) {
          do {
            lVar4 = *(longlong *)(lVar4 + 0x30);
            bVar5 = lVar4 != 0;
            if (lVar4 == lVar3) break;
          } while (lVar4 != 0);
        }
        if (!bVar5) {
          return 0;
        }
      }
      else if ((*(ulonglong *)(lVar4 + 0x18) & *(ulonglong *)(lVar3 + 8)) == 0) {
        return 0;
      }
                    /* WARNING: Could not recover jumptable at 0x000148b2ce08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar6 = (**(code **)(*plVar1 + 0x240))(plVar1,lVar2 + *(int *)((longlong)plVar1 + 0x44));
      return uVar6;
    }
  }
  return 0;
}



// FUNCTION 148b2ce44 FUN_148b2ce44 body=317 status=ok
// SIG undefined FUN_148b2ce44(void)

void FUN_148b2ce44(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar2 = *(longlong **)(param_1 + 0x298);
  lVar1 = param_1 + 0x268;
  lVar4 = FUN_148b24d9e(lVar1);
  if ((lVar4 != 0) && (*(int *)(param_1 + 0x290) != 0)) {
    lVar6 = param_1 + 0x280;
    if (*(longlong *)(param_1 + 0x288) != 0) {
      lVar6 = *(longlong *)(param_1 + 0x288);
    }
    plVar3 = *(longlong **)(lVar6 + (longlong)(*(int *)(param_1 + 0x290) + -1) * 8);
    if (plVar3 != (longlong *)0x0) {
      lVar6 = plVar3[1];
      lVar5 = FUN_14475b26a();
      if (*(ulonglong *)(lVar5 + 8) == 0) {
        bVar7 = lVar6 != 0;
        if (lVar6 != lVar5 && bVar7) {
          do {
            lVar6 = *(longlong *)(lVar6 + 0x30);
            bVar7 = lVar6 != 0;
            if (lVar6 == lVar5) break;
          } while (lVar6 != 0);
        }
        if (!bVar7) {
          return;
        }
      }
      else if ((*(ulonglong *)(lVar6 + 0x18) & *(ulonglong *)(lVar5 + 8)) == 0) {
        return;
      }
      if (plVar2 == (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148b2cf7e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x208))(plVar3,lVar4 + *(int *)((longlong)plVar3 + 0x44),param_2);
        return;
      }
      (**(code **)*plVar2)(plVar2,lVar1);
      (**(code **)(*plVar3 + 0x208))(plVar3,lVar4 + *(int *)((longlong)plVar3 + 0x44),param_2);
                    /* WARNING: Could not recover jumptable at 0x000148b2cf13. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 8))(plVar2,lVar1);
      return;
    }
  }
  return;
}



// FUNCTION 148b2cf96 FUN_148b2cf96 body=115 status=ok
// SIG undefined FUN_148b2cf96(void)

longlong * FUN_148b2cf96(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  
  FUN_140a515e6(*param_1,param_3);
  FUN_148b4840a(*param_1,param_3);
  plVar1 = (longlong *)*param_1;
  bVar4 = *(byte *)(plVar1 + 6);
  bVar3 = 0x20;
  if ((bVar4 & 0x10) == 0) {
    cVar2 = (**(code **)(*plVar1 + 0x220))(plVar1);
    bVar3 = cVar2 << 5;
    bVar4 = *(byte *)(plVar1 + 6);
  }
  *(byte *)(plVar1 + 6) = bVar4 & 0xdf | bVar3;
  *(byte *)(*param_1 + 0x31) = *(byte *)(*param_1 + 0x31) | 4;
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  return param_2;
}



// FUNCTION 148b2d00a FUN_148b2d00a body=572 status=ok
// SIG undefined FUN_148b2d00a(void)

void FUN_148b2d00a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_1449db362(param_1 + 0x588);
  plVar3 = *(longlong **)(param_1 + 0x578);
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
  FUN_1449db362(param_1 + 0x560);
  FUN_1449db362(param_1 + 0x548);
  FUN_1449db362(param_1 + 0x530);
  FUN_1449db362(param_1 + 0x518);
  FUN_1449db362(param_1 + 0x500);
  FUN_1449db362(param_1 + 0x4e8);
  FUN_1449db362(param_1 + 0x4d8);
  FUN_1449db362(param_1 + 0x4c8);
  FUN_1449db362(param_1 + 0x4b8);
  FUN_1449db362(param_1 + 0x4a8);
  FUN_141515cba(param_1 + 0x418);
  FUN_1449db362(param_1 + 0x408);
  if (*(char *)(param_1 + 0x3f8) == '\x01') {
    *(undefined1 *)(param_1 + 0x3f8) = 0;
  }
  FUN_1449db362(param_1 + 0x3d8);
  FUN_1449db362(param_1 + 0x3b8);
  FUN_1449db362(param_1 + 0x3a0);
  FUN_1449db362(param_1 + 0x390);
  FUN_1449db362(param_1 + 0x380);
  FUN_1449db362(param_1 + 0x368);
  FUN_1449db362(param_1 + 0x350);
  FUN_1449db362(param_1 + 0x338);
  FUN_1449db362(param_1 + 800);
  FUN_1449db362(param_1 + 0x308);
  FUN_1449db362(param_1 + 0x2f0);
  FUN_1449db362(param_1 + 0x2d0);
  FUN_1449db362(param_1 + 0x2b8);
  FUN_1449db362(param_1 + 0x2a0);
  if (*(char *)(param_1 + 0x294) == '\x01') {
    *(undefined1 *)(param_1 + 0x294) = 0;
  }
  FUN_1449db362(param_1 + 0x280);
  if (*(char *)(param_1 + 0x274) == '\x01') {
    *(undefined1 *)(param_1 + 0x274) = 0;
  }
  FUN_1449db362(param_1 + 0x260);
  if (*(char *)(param_1 + 0x250) == '\x01') {
    *(undefined1 *)(param_1 + 0x250) = 0;
  }
  FUN_1449db362(param_1 + 0x238);
  if (*(char *)(param_1 + 0x228) == '\x01') {
    *(undefined1 *)(param_1 + 0x228) = 0;
  }
  FUN_1449db362(param_1 + 0x210);
  if (*(char *)(param_1 + 0x200) == '\x01') {
    *(undefined1 *)(param_1 + 0x200) = 0;
  }
  FUN_1449db362(param_1 + 0x1e8);
  if (*(char *)(param_1 + 0x1d8) == '\x01') {
    *(undefined1 *)(param_1 + 0x1d8) = 0;
  }
  FUN_1449db362(param_1 + 0x1c0);
  FUN_140a4ff8c(param_1);
  return;
}



// FUNCTION 148b2d246 FUN_148b2d246 body=99 status=ok
// SIG undefined FUN_148b2d246(void)

longlong FUN_148b2d246(longlong param_1)

{
  FUN_140a5071c();
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  FUN_14485c47a(param_1 + 0x1a8,0);
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  FUN_14485c47a(param_1 + 0x1b0,0);
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  *(undefined8 *)(param_1 + 0x1d0) = 0x100000000;
  return param_1;
}



// FUNCTION 148b2d2aa FUN_148b2d2aa body=115 status=ok
// SIG undefined FUN_148b2d2aa(void)

longlong * FUN_148b2d2aa(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  
  FUN_140a515e6(*param_1,param_3);
  FUN_148b2d31e(*param_1,param_3);
  plVar1 = (longlong *)*param_1;
  bVar4 = *(byte *)(plVar1 + 6);
  bVar3 = 0x20;
  if ((bVar4 & 0x10) == 0) {
    cVar2 = (**(code **)(*plVar1 + 0x220))(plVar1);
    bVar3 = cVar2 << 5;
    bVar4 = *(byte *)(plVar1 + 6);
  }
  *(byte *)(plVar1 + 6) = bVar4 & 0xdf | bVar3;
  *(byte *)(*param_1 + 0x31) = *(byte *)(*param_1 + 0x31) | 4;
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  return param_2;
}



// FUNCTION 148b2d31e FUN_148b2d31e body=826 status=ok
// SIG undefined FUN_148b2d31e(void)

void FUN_148b2d31e(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_5b8 [32];
  undefined1 *local_598;
  undefined1 local_581;
  code *local_580;
  undefined4 local_578;
  undefined4 uStack_574;
  undefined2 local_568;
  undefined8 local_560;
  undefined8 uStack_558;
  code *local_550;
  longlong *local_548;
  code *local_540;
  undefined8 local_538;
  undefined1 local_530 [880];
  undefined2 local_1c0;
  undefined1 local_1b8 [184];
  undefined1 local_100 [200];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_5b8;
  *(undefined8 *)(param_1 + 0x278) = *(undefined8 *)(param_2 + 0x1b8);
  uVar3 = *(undefined4 *)(param_2 + 0x1ac);
  uVar4 = *(undefined4 *)(param_2 + 0x1b0);
  uVar5 = *(undefined4 *)(param_2 + 0x1b4);
  *(undefined4 *)(param_1 + 0x268) = *(undefined4 *)(param_2 + 0x1a8);
  *(undefined4 *)(param_1 + 0x26c) = uVar3;
  *(undefined4 *)(param_1 + 0x270) = uVar4;
  *(undefined4 *)(param_1 + 0x274) = uVar5;
  FUN_148b2e2bc(param_1 + 0x280,param_2 + 0x1c0);
  *(undefined8 *)(param_1 + 0x298) = *(undefined8 *)(param_2 + 0x1d8);
  if (*(int *)(param_1 + 0x290) == 0) goto LAB_148b2d3cc;
  lVar9 = param_1 + 0x280;
  if (*(longlong *)(param_1 + 0x288) != 0) {
    lVar9 = *(longlong *)(param_1 + 0x288);
  }
  lVar9 = *(longlong *)(lVar9 + (longlong)(*(int *)(param_1 + 0x290) + -1) * 8);
  if (lVar9 == 0) goto LAB_148b2d3cc;
  lVar8 = *(longlong *)(lVar9 + 8);
  lVar7 = FUN_144a49f24();
  if (*(ulonglong *)(lVar7 + 8) == 0) {
    bVar10 = lVar8 != 0;
    if (lVar8 != lVar7 && bVar10) {
      do {
        lVar8 = *(longlong *)(lVar8 + 0x30);
        bVar10 = lVar8 != 0;
        if (lVar8 == lVar7) break;
      } while (lVar8 != 0);
    }
    if (!bVar10) goto LAB_148b2d423;
  }
  else if ((*(ulonglong *)(lVar8 + 0x18) & *(ulonglong *)(lVar7 + 8)) == 0) {
LAB_148b2d423:
    lVar8 = *(longlong *)(lVar9 + 8);
    lVar7 = FUN_144a4a07e();
    if (*(ulonglong *)(lVar7 + 8) == 0) {
      bVar10 = lVar8 != 0;
      if (lVar8 != lVar7 && bVar10) {
        do {
          lVar8 = *(longlong *)(lVar8 + 0x30);
          bVar10 = lVar8 != 0;
          if (lVar8 == lVar7) break;
        } while (lVar8 != 0);
      }
      if (!bVar10) goto LAB_148b2d43b;
    }
    else if ((*(ulonglong *)(lVar8 + 0x18) & *(ulonglong *)(lVar7 + 8)) == 0) {
LAB_148b2d43b:
      lVar8 = *(longlong *)(lVar9 + 8);
      lVar7 = FUN_144a63fc8();
      if (*(ulonglong *)(lVar7 + 8) == 0) {
        bVar10 = lVar8 != 0;
        if (lVar8 != lVar7 && bVar10) {
          do {
            lVar8 = *(longlong *)(lVar8 + 0x30);
            bVar10 = lVar8 != 0;
            if (lVar8 == lVar7) break;
          } while (lVar8 != 0);
        }
        if (!bVar10) goto LAB_148b2d3cc;
      }
      else if ((*(ulonglong *)(lVar8 + 0x18) & *(ulonglong *)(lVar7 + 8)) == 0) goto LAB_148b2d3cc;
    }
  }
  if (*(int *)(lVar9 + 0x30) == 1) {
    FUN_146a63634(local_530);
    local_568 = 0x101;
    local_560 = 0;
    uStack_558 = 0;
    local_1c0 = 0x101;
    FUN_144a450dc(local_1b8,&local_560);
    FUN_1449db362(&local_560);
    local_580 = FUN_148b2d732;
    local_578 = 0;
    FUN_148b2d65a(local_530,param_1);
    local_540 = FUN_148b2db10;
    local_538 = (longlong *)((ulonglong)local_538._4_4_ << 0x20);
    FUN_148b4d23a(&local_580,param_1,&local_540);
    FUN_144a450dc(local_100,&local_580);
    FUN_1449db362(&local_580);
    local_598 = &local_581;
    FUN_146a7c5de(&local_580,"SEditableText",
                  ".\\Runtime/AdvancedWidgets/Private/Widgets/PropertyViewer/SStringPropertyValue.cpp"
                  ,0x25);
    FUN_146a639a0(&local_580,&local_550,local_530);
    local_540 = local_550;
    local_538 = local_548;
    if (local_548 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_548 + 1) = (int)local_548[1] + 1;
      UNLOCK();
    }
    FUN_140a58896(param_1 + 0x1e0,&local_540);
    plVar6 = local_538;
    if (local_538 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_538 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_538)(local_538);
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
    if (local_548 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_548 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*local_548)(local_548);
        LOCK();
        piVar2 = (int *)((longlong)local_548 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_548 + 0x10))(local_548);
        }
      }
    }
    plVar6 = (longlong *)CONCAT44(uStack_574,local_578);
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
    }
    FUN_146a63a14(local_530);
  }
LAB_148b2d3cc:
  if ((local_38 ^ (ulonglong)auStack_5b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148b2d65a FUN_148b2d65a body=215 status=ok
// SIG undefined FUN_148b2d65a(void)

longlong FUN_148b2d65a(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_88 [40];
  undefined1 local_60 [16];
  longlong *local_50;
  undefined4 local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = *(undefined4 *)(param_3 + 1);
  local_50 = (longlong *)*param_3;
  FUN_148b4cd58(local_60);
  FUN_144a5dc74(&local_50);
  local_40 = 1;
  local_38 = 0;
  local_30 = 0;
  FUN_1413a4324(&local_38,local_60);
  FUN_140008f88(param_1 + 0x1a8,&local_50);
  *(undefined1 *)(param_1 + 0x1b8) = local_40;
  FUN_144a450dc(param_1 + 0x1c0,&local_38);
  FUN_1449db362(&local_38);
  if (local_50 != (longlong *)0x0) {
    (**(code **)(*local_50 + 0x10))();
  }
  FUN_1449db362(local_60);
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b2d732 FUN_148b2d732 body=984 status=ok
// SIG undefined FUN_148b2d732(void)

longlong * FUN_148b2d732(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  bool bVar8;
  undefined1 auStack_68 [32];
  longlong local_48 [3];
  
  local_48[2] = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar3 = FUN_148b24d9e(param_1 + 0x268);
  if ((lVar3 != 0) && (*(int *)(param_1 + 0x290) != 0)) {
    lVar7 = param_1 + 0x280;
    lVar5 = *(longlong *)(param_1 + 0x288);
    if (*(longlong *)(param_1 + 0x288) == 0) {
      lVar5 = lVar7;
    }
    plVar1 = *(longlong **)(lVar5 + (longlong)(*(int *)(param_1 + 0x290) + -1) * 8);
    if (plVar1 != (longlong *)0x0) {
      lVar5 = plVar1[1];
      lVar4 = FUN_144a49f24();
      if (*(ulonglong *)(lVar4 + 8) == 0) {
        bVar8 = lVar5 != 0;
        if (lVar5 != lVar4 && bVar8) {
          do {
            lVar5 = *(longlong *)(lVar5 + 0x30);
            bVar8 = lVar5 != 0;
            if (lVar5 == lVar4) break;
          } while (lVar5 != 0);
        }
        if (!bVar8) goto LAB_148b2d845;
      }
      else if ((*(ulonglong *)(lVar5 + 0x18) & *(ulonglong *)(lVar4 + 8)) == 0) goto LAB_148b2d845;
      local_48[0] = 0;
      local_48[1] = 0;
      cVar2 = (**(code **)(*plVar1 + 0x88))(plVar1);
      if (cVar2 == '\0') {
        plVar6 = (longlong *)(lVar3 + *(int *)((longlong)plVar1 + 0x44));
        if (plVar6 != local_48) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,local_48,plVar6,(int)plVar1[6]);
          }
          else {
            memcpy(local_48,plVar6,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else {
        (**(code **)(*plVar1 + 0xa0))(plVar1,lVar3,local_48);
      }
      FUN_140009b9a(param_2,local_48);
      if (local_48[0] != 0) {
        FUN_1400020a8();
      }
      goto LAB_148b2da76;
    }
LAB_148b2d845:
    if (*(int *)(param_1 + 0x290) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x288);
      if (*(longlong *)(param_1 + 0x288) == 0) {
        lVar5 = lVar7;
      }
      plVar1 = *(longlong **)(lVar5 + (longlong)(*(int *)(param_1 + 0x290) + -1) * 8);
      if (plVar1 != (longlong *)0x0) {
        lVar5 = plVar1[1];
        lVar4 = FUN_144a4a07e();
        if (*(ulonglong *)(lVar4 + 8) == 0) {
          bVar8 = lVar5 != 0;
          if (lVar5 != lVar4 && bVar8) {
            do {
              lVar5 = *(longlong *)(lVar5 + 0x30);
              bVar8 = lVar5 != 0;
              if (lVar5 == lVar4) break;
            } while (lVar5 != 0);
          }
          if (!bVar8) goto LAB_148b2d942;
        }
        else if ((*(ulonglong *)(lVar5 + 0x18) & *(ulonglong *)(lVar4 + 8)) == 0)
        goto LAB_148b2d942;
        FUN_144a5dc74(param_2);
        cVar2 = (**(code **)(*plVar1 + 0x88))(plVar1);
        if (cVar2 != '\0') {
          (**(code **)(*plVar1 + 0xa0))(plVar1,lVar3,param_2);
LAB_148b2d8c1:
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_48[2] ^ (ulonglong)auStack_68);
        }
        plVar6 = (longlong *)(lVar3 + *(int *)((longlong)plVar1 + 0x44));
        if (plVar6 != param_2) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,param_2,plVar6,(int)plVar1[6]);
          }
          else {
            memcpy(param_2,plVar6,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
          goto LAB_148b2d8c1;
        }
        goto LAB_148b2da76;
      }
LAB_148b2d942:
      if (*(int *)(param_1 + 0x290) != 0) {
        if (*(longlong *)(param_1 + 0x288) != 0) {
          lVar7 = *(longlong *)(param_1 + 0x288);
        }
        plVar1 = *(longlong **)(lVar7 + (longlong)(*(int *)(param_1 + 0x290) + -1) * 8);
        if (plVar1 != (longlong *)0x0) {
          lVar7 = plVar1[1];
          lVar5 = FUN_144a63fc8();
          if (*(ulonglong *)(lVar5 + 8) == 0) {
            bVar8 = lVar7 != 0;
            if (lVar7 != lVar5 && bVar8) {
              do {
                lVar7 = *(longlong *)(lVar7 + 0x30);
                bVar8 = lVar7 != 0;
                if (lVar7 == lVar5) break;
              } while (lVar7 != 0);
            }
            if (!bVar8) goto LAB_148b2da57;
          }
          else if ((*(ulonglong *)(lVar7 + 0x18) & *(ulonglong *)(lVar5 + 8)) == 0)
          goto LAB_148b2da57;
          local_48[0] = 0;
          cVar2 = (**(code **)(*plVar1 + 0x88))(plVar1);
          if (cVar2 == '\0') {
            plVar6 = (longlong *)(lVar3 + *(int *)((longlong)plVar1 + 0x44));
            if (plVar6 != local_48) {
              if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
                (**(code **)(*plVar1 + 0x100))(plVar1,local_48,plVar6,(int)plVar1[6]);
              }
              else {
                memcpy(local_48,plVar6,
                       (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
              }
            }
          }
          else {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar3,local_48);
          }
          FUN_145715fae(param_2,local_48);
          goto LAB_148b2da76;
        }
      }
    }
  }
LAB_148b2da57:
  plVar6 = (longlong *)FUN_140e82300();
  plVar1 = (longlong *)*plVar6;
  *param_2 = (longlong)plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_2 + 1) = (int)plVar6[1];
LAB_148b2da76:
  if ((local_48[2] ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b2db10 FUN_148b2db10 body=1150 status=ok
// SIG undefined FUN_148b2db10(void)

void FUN_148b2db10(longlong param_1,void *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined2 *puVar8;
  void **ppvVar9;
  void *pvVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 auStack_78 [40];
  void *local_50;
  int local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = param_1 + 0x268;
  lVar4 = FUN_148b24d9e(lVar1);
  if ((lVar4 == 0) || (*(int *)(param_1 + 0x290) == 0)) goto LAB_148b2df1c;
  lVar11 = param_1 + 0x280;
  lVar7 = *(longlong *)(param_1 + 0x288);
  if (*(longlong *)(param_1 + 0x288) == 0) {
    lVar7 = lVar11;
  }
  plVar2 = *(longlong **)(lVar7 + (longlong)(*(int *)(param_1 + 0x290) + -1) * 8);
  if (plVar2 != (longlong *)0x0) {
    lVar7 = plVar2[1];
    lVar5 = FUN_144a49f24();
    if (*(ulonglong *)(lVar5 + 8) == 0) {
      bVar12 = lVar7 != 0;
      if (lVar7 != lVar5 && bVar12) {
        do {
          lVar7 = *(longlong *)(lVar7 + 0x30);
          bVar12 = lVar7 != 0;
          if (lVar7 == lVar5) break;
        } while (lVar7 != 0);
      }
      if (bVar12) goto LAB_148b2dba3;
    }
    else if ((*(ulonglong *)(lVar7 + 0x18) & *(ulonglong *)(lVar5 + 8)) != 0) {
LAB_148b2dba3:
      puVar6 = (undefined8 *)FUN_1447a1f4a(param_2);
      local_50 = (void *)0x0;
      local_48 = *(int *)(puVar6 + 1);
      lVar11 = (longlong)local_48;
      pvVar10 = (void *)*puVar6;
      if (lVar11 == 0) {
        local_44 = 0;
      }
      else {
        FUN_1446dd670(&local_50,local_48,0);
        memcpy(local_50,pvVar10,lVar11 * 2);
      }
      puVar6 = *(undefined8 **)(param_1 + 0x298);
      if (puVar6 != (undefined8 *)0x0) {
        (**(code **)*puVar6)(puVar6,lVar1);
      }
      cVar3 = (**(code **)(*plVar2 + 0x80))(plVar2);
      if (cVar3 == '\0') {
        ppvVar9 = (void **)(lVar4 + *(int *)((longlong)plVar2 + 0x44));
        if (ppvVar9 != &local_50) {
          if ((*(byte *)((longlong)plVar2 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar2 + 0x100))(plVar2,ppvVar9,&local_50,(int)plVar2[6]);
          }
          else {
            memcpy(ppvVar9,&local_50,
                   (longlong)(int)plVar2[6] * (longlong)*(int *)((longlong)plVar2 + 0x34));
          }
        }
      }
      else {
        (**(code **)(*plVar2 + 0x98))(plVar2,lVar4,&local_50);
      }
      plVar2 = *(longlong **)(param_1 + 0x298);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 8))(plVar2,lVar1);
      }
      if (local_50 != (void *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_148b2df1c;
    }
  }
  if (*(int *)(param_1 + 0x290) == 0) goto LAB_148b2df1c;
  lVar7 = *(longlong *)(param_1 + 0x288);
  if (*(longlong *)(param_1 + 0x288) == 0) {
    lVar7 = lVar11;
  }
  plVar2 = *(longlong **)(lVar7 + (longlong)(*(int *)(param_1 + 0x290) + -1) * 8);
  if (plVar2 == (longlong *)0x0) {
LAB_148b2ddc9:
    if (*(int *)(param_1 + 0x290) != 0) {
      if (*(longlong *)(param_1 + 0x288) != 0) {
        lVar11 = *(longlong *)(param_1 + 0x288);
      }
      plVar2 = *(longlong **)(lVar11 + (longlong)(*(int *)(param_1 + 0x290) + -1) * 8);
      if (plVar2 != (longlong *)0x0) {
        lVar11 = plVar2[1];
        lVar7 = FUN_144a63fc8();
        if (*(ulonglong *)(lVar7 + 8) == 0) {
          bVar12 = lVar11 != 0;
          if (lVar11 != lVar7 && bVar12) {
            do {
              lVar11 = *(longlong *)(lVar11 + 0x30);
              bVar12 = lVar11 != 0;
              if (lVar11 == lVar7) break;
            } while (lVar11 != 0);
          }
          if (!bVar12) goto LAB_148b2df1c;
        }
        else if ((*(ulonglong *)(lVar11 + 0x18) & *(ulonglong *)(lVar7 + 8)) == 0)
        goto LAB_148b2df1c;
        puVar6 = (undefined8 *)FUN_1447a1f4a(param_2);
        if (*(int *)(puVar6 + 1) == 0) {
          puVar8 = &DAT_149dfb77a;
        }
        else {
          puVar8 = (undefined2 *)*puVar6;
        }
        FUN_1446f470e(&local_50,puVar8,1);
        puVar6 = *(undefined8 **)(param_1 + 0x298);
        if (puVar6 != (undefined8 *)0x0) {
          (**(code **)*puVar6)(puVar6,lVar1);
        }
        cVar3 = (**(code **)(*plVar2 + 0x80))(plVar2);
        if (cVar3 == '\0') {
          ppvVar9 = (void **)(lVar4 + *(int *)((longlong)plVar2 + 0x44));
          if (ppvVar9 != &local_50) {
            if ((*(byte *)((longlong)plVar2 + 0x3b) & 0x40) == 0) {
              (**(code **)(*plVar2 + 0x100))(plVar2,ppvVar9,&local_50,(int)plVar2[6]);
            }
            else {
              memcpy(ppvVar9,&local_50,
                     (longlong)(int)plVar2[6] * (longlong)*(int *)((longlong)plVar2 + 0x34));
            }
          }
        }
        else {
          (**(code **)(*plVar2 + 0x98))(plVar2,lVar4,&local_50);
        }
        plVar2 = *(longlong **)(param_1 + 0x298);
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 8))(plVar2,lVar1);
        }
      }
    }
  }
  else {
    lVar7 = plVar2[1];
    lVar5 = FUN_144a4a07e();
    if (*(ulonglong *)(lVar5 + 8) == 0) {
      bVar12 = lVar7 != 0;
      if (lVar7 != lVar5 && bVar12) {
        do {
          lVar7 = *(longlong *)(lVar7 + 0x30);
          bVar12 = lVar7 != 0;
          if (lVar7 == lVar5) break;
        } while (lVar7 != 0);
      }
      if (!bVar12) goto LAB_148b2ddc9;
    }
    else if ((*(ulonglong *)(lVar7 + 0x18) & *(ulonglong *)(lVar5 + 8)) == 0) goto LAB_148b2ddc9;
    puVar6 = *(undefined8 **)(param_1 + 0x298);
    if (puVar6 != (undefined8 *)0x0) {
      (**(code **)*puVar6)(puVar6,lVar1);
    }
    cVar3 = (**(code **)(*plVar2 + 0x80))(plVar2);
    if (cVar3 == '\0') {
      pvVar10 = (void *)(lVar4 + *(int *)((longlong)plVar2 + 0x44));
      if (pvVar10 != param_2) {
        if ((*(byte *)((longlong)plVar2 + 0x3b) & 0x40) == 0) {
          (**(code **)(*plVar2 + 0x100))(plVar2,pvVar10,param_2,(int)plVar2[6]);
        }
        else {
          memcpy(pvVar10,param_2,
                 (longlong)(int)plVar2[6] * (longlong)*(int *)((longlong)plVar2 + 0x34));
        }
      }
    }
    else {
      (**(code **)(*plVar2 + 0x98))(plVar2,lVar4,param_2);
    }
    if (*(longlong *)(param_1 + 0x298) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_78);
    }
  }
LAB_148b2df1c:
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148b2dfaa FUN_148b2dfaa body=45 status=ok
// SIG undefined FUN_148b2dfaa(void)

longlong FUN_148b2dfaa(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145e03cd4(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b2dfd8 FUN_148b2dfd8 body=38 status=ok
// SIG undefined FUN_148b2dfd8(void)

undefined8 FUN_148b2dfd8(undefined8 param_1,int param_2)

{
  FUN_148b25bac();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b2dffe FUN_148b2dffe body=38 status=ok
// SIG undefined FUN_148b2dffe(void)

undefined8 FUN_148b2dffe(undefined8 param_1,int param_2)

{
  FUN_148b29882();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b2e066 FUN_148b2e066 body=63 status=ok
// SIG undefined FUN_148b2e066(void)

undefined1 FUN_148b2e066(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148b2e190(param_2,param_3);
    param_3 = param_3 + 0x2e0;
    param_2 = param_2 + 0x2e0;
  }
  return 1;
}



// FUNCTION 148b2e0ce FUN_148b2e0ce body=59 status=ok
// SIG undefined FUN_148b2e0ce(void)

undefined8 FUN_148b2e0ce(longlong *param_1)

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



// FUNCTION 148b2e11a FUN_148b2e11a body=40 status=ok
// SIG undefined FUN_148b2e11a(void)

void FUN_148b2e11a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x2e0) == '\x01') {
    FUN_148b29882(param_2);
    *(undefined1 *)(param_2 + 0x2e0) = 0;
  }
  return;
}



// FUNCTION 148b2e190 FUN_148b2e190 body=102 status=ok
// SIG undefined FUN_148b2e190(void)

longlong FUN_148b2e190(longlong param_1,longlong param_2)

{
  FUN_140f13d9e(param_1 + 0x10,param_2 + 0x10);
  FUN_140f13d9e(param_1 + 0xc0,param_2 + 0xc0);
  FUN_140f13d9e(param_1 + 0x170,param_2 + 0x170);
  FUN_140f13d9e(param_1 + 0x220,param_2 + 0x220);
  *(undefined4 *)(param_1 + 0x2d0) = *(undefined4 *)(param_2 + 0x2d0);
  return param_1;
}



// FUNCTION 148b2e1f8 FUN_148b2e1f8 body=91 status=ok
// SIG undefined FUN_148b2e1f8(void)

undefined8 FUN_148b2e1f8(undefined8 param_1,double *param_2)

{
  undefined1 auStack_38 [32];
  float local_18;
  float local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = (float)*param_2;
  local_14 = (float)param_2[1];
  FUN_145a4e6e6(local_18,&DAT_14c98db24);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b2e254 FUN_148b2e254 body=104 status=ok
// SIG undefined FUN_148b2e254(void)

void FUN_148b2e254(longlong param_1,uint param_2,uint param_3)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  
  uVar3 = param_2;
  if (1 < param_2) {
    uVar2 = FUN_144a3809e((longlong)(int)param_2 << 3,0);
    uVar1 = (uint)(uVar2 >> 3);
    uVar3 = 0x7fffffff;
    if ((int)param_2 <= (int)uVar1) {
      uVar3 = uVar1;
    }
  }
  if (((int)param_3 < (int)uVar3) &&
     ((param_3 = uVar3, 1 < uVar3 || (*(longlong *)(param_1 + 8) != 0)))) {
    uVar1 = 0;
    if (1 < uVar3) {
      uVar1 = uVar3;
    }
    FUN_1446efa72(param_1 + 8,0,uVar1,8);
  }
  *(uint *)(param_1 + 0x14) = param_3;
  return;
}



// FUNCTION 148b2e2bc FUN_148b2e2bc body=104 status=ok
// SIG undefined FUN_148b2e2bc(void)

void * FUN_148b2e2bc(void *param_1,void *param_2)

{
  int iVar1;
  void *_Dst;
  void *_Src;
  
  if (param_1 != param_2) {
    _Src = *(void **)((longlong)param_2 + 8);
    if (*(void **)((longlong)param_2 + 8) == (void *)0x0) {
      _Src = param_2;
    }
    iVar1 = *(int *)((longlong)param_2 + 0x10);
    *(int *)((longlong)param_1 + 0x10) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x14) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x14) = 1;
    }
    else {
      FUN_148b2e254(param_1,iVar1);
      if (iVar1 != 0) {
        _Dst = *(void **)((longlong)param_1 + 8);
        if (*(void **)((longlong)param_1 + 8) == (void *)0x0) {
          _Dst = param_1;
        }
        memcpy(_Dst,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 148b2e324 FUN_148b2e324 body=42 status=ok
// SIG undefined FUN_148b2e324(void)

void FUN_148b2e324(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar1 = &PTR_FUN_14b55dd10;
  puVar1[1] = 0;
  return;
}



// FUNCTION 148b2e34e FUN_148b2e34e body=31 status=ok
// SIG undefined FUN_148b2e34e(void)

undefined8 FUN_148b2e34e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b2e38a FUN_148b2e38a body=93 status=ok
// SIG undefined FUN_148b2e38a(void)

void FUN_148b2e38a(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b55dca0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148b2e3e8 FUN_148b2e3e8 body=126 status=ok
// SIG undefined FUN_148b2e3e8(void)

void FUN_148b2e3e8(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 =
       TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
       ::vftable;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b55dca0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148b2e457. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148b2e472 FUN_148b2e472 body=21 status=ok
// SIG undefined FUN_148b2e472(void)

undefined8 FUN_148b2e472(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 148b2e488 FUN_148b2e488 body=77 status=ok
// SIG undefined FUN_148b2e488(void)

undefined8 * FUN_148b2e488(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  *param_1 = &PTR_FUN_14b55dd10;
  plVar1 = (longlong *)param_1[1];
  if (plVar1 != (longlong *)0x0) {
    lVar2 = *plVar1;
    if (lVar2 != 0) {
      (**(code **)(lVar2 + -0x10))(lVar2 + -0x10);
    }
    FUN_1400020a8(plVar1);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b2e4d6 FUN_148b2e4d6 body=324 status=ok
// SIG undefined FUN_148b2e4d6(void)

longlong * FUN_148b2e4d6(longlong *param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_2;
  plVar3 = (longlong *)FUN_14001cc68(0x550,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14b55dd50;
  plVar4 = plVar3 + 2;
  FUN_148b25a0c(plVar4);
  local_30 = plVar4;
  local_28 = plVar3;
  FUN_148b2e644(&local_30,plVar4);
  if (plVar3 == (longlong *)0x0) {
    *param_1 = 0x10;
    plVar4 = (longlong *)param_1[1];
    if (plVar4 == (longlong *)0x0) goto LAB_148b2e5ad;
    param_1[1] = 0;
LAB_148b2e577:
    LOCK();
    plVar3 = plVar4 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 != 0) goto LAB_148b2e5ad;
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar3 = plVar4;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *param_1 = (longlong)plVar4;
    plVar4 = (longlong *)param_1[1];
    if (plVar3 != plVar4) {
      param_1[1] = (longlong)plVar3;
      if (plVar4 == (longlong *)0x0) goto LAB_148b2e5ad;
      goto LAB_148b2e577;
    }
    LOCK();
    plVar4 = plVar3 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_148b2e5ad;
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
LAB_148b2e5ad:
  plVar4 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_28 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  local_38 = 0x540;
  FUN_140a52e78(*param_1,"SRadialSlider",
                ".\\Runtime/AdvancedWidgets/Private/Components/RadialSlider.cpp",0x3d);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b2e61c FUN_148b2e61c body=9 status=ok
// SIG undefined FUN_148b2e61c(void)

void FUN_148b2e61c(longlong param_1)

{
  FUN_148b25bac(param_1 + 0x10);
  return;
}



// FUNCTION 148b2e626 FUN_148b2e626 body=29 status=ok
// SIG undefined FUN_148b2e626(void)

undefined8 FUN_148b2e626(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b2e644 FUN_148b2e644 body=167 status=ok
// SIG undefined FUN_148b2e644(void)

void FUN_148b2e644(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_148b2e6bf;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_148b2e6bf;
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
LAB_148b2e6bf:
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
                    /* WARNING: Could not recover jumptable at 0x000148b2e6df. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 148b2e6ec FUN_148b2e6ec body=29 status=ok
// SIG undefined FUN_148b2e6ec(void)

undefined8 FUN_148b2e6ec(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b2e724 FUN_148b2e724 body=29 status=ok
// SIG undefined FUN_148b2e724(void)

bool FUN_148b2e724(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148b2e742 FUN_148b2e742 body=26 status=ok
// SIG undefined FUN_148b2e742(void)

bool FUN_148b2e742(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148b2e75c FUN_148b2e75c body=24 status=ok
// SIG undefined FUN_148b2e75c(void)

bool FUN_148b2e75c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148b2e774 FUN_148b2e774 body=101 status=ok
// SIG undefined FUN_148b2e774(void)

void FUN_148b2e774(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b55dd70;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148b2e7da FUN_148b2e7da body=101 status=ok
// SIG undefined FUN_148b2e7da(void)

void FUN_148b2e7da(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b55dd70;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148b2e840 FUN_148b2e840 body=134 status=ok
// SIG undefined FUN_148b2e840(void)

void FUN_148b2e840(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b55dd70;
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
                    /* WARNING: Could not recover jumptable at 0x000148b2e8b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148b2e8c6 FUN_148b2e8c6 body=39 status=ok
// SIG undefined FUN_148b2e8c6(void)

void FUN_148b2e8c6(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148b2e8e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1);
  return;
}



// FUNCTION 148b2e8ee FUN_148b2e8ee body=146 status=ok
// SIG undefined FUN_148b2e8ee(void)

bool FUN_148b2e8ee(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_28,0);
    lVar3 = local_28;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b2e982 FUN_148b2e982 body=29 status=ok
// SIG undefined FUN_148b2e982(void)

undefined8 FUN_148b2e982(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b2e9ba FUN_148b2e9ba body=29 status=ok
// SIG undefined FUN_148b2e9ba(void)

bool FUN_148b2e9ba(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148b2e9d8 FUN_148b2e9d8 body=26 status=ok
// SIG undefined FUN_148b2e9d8(void)

bool FUN_148b2e9d8(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148b2e9f2 FUN_148b2e9f2 body=24 status=ok
// SIG undefined FUN_148b2e9f2(void)

bool FUN_148b2e9f2(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148b2ea0a FUN_148b2ea0a body=101 status=ok
// SIG undefined FUN_148b2ea0a(void)

void FUN_148b2ea0a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e01f80;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b55dde0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148b2ea70 FUN_148b2ea70 body=101 status=ok
// SIG undefined FUN_148b2ea70(void)

void FUN_148b2ea70(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e01f80;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b55dde0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148b2ead6 FUN_148b2ead6 body=134 status=ok
// SIG undefined FUN_148b2ead6(void)

void FUN_148b2ead6(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e01f80;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b55dde0;
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
                    /* WARNING: Could not recover jumptable at 0x000148b2eb4d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148b2eb5c FUN_148b2eb5c body=52 status=ok
// SIG undefined FUN_148b2eb5c(void)

void FUN_148b2eb5c(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148b2eb8d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2);
  return;
}



// FUNCTION 148b2eb90 FUN_148b2eb90 body=162 status=ok
// SIG undefined FUN_148b2eb90(void)

bool FUN_148b2eb90(longlong param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_38,0);
    lVar3 = local_38;
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
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b2ec34 FUN_148b2ec34 body=157 status=ok
// SIG undefined FUN_148b2ec34(void)

int FUN_148b2ec34(uint param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined *puVar5;
  
  if (DAT_14cb9b658 != DAT_14cb9b684) {
    puVar5 = &DAT_14cb9b688;
    if (DAT_14cb9b690 != (undefined *)0x0) {
      puVar5 = DAT_14cb9b690;
    }
    iVar1 = *(int *)(puVar5 + (ulonglong)(DAT_14cb9b698 - 1U & param_1) * 4);
    lVar3 = DAT_14cb9b650;
    while (iVar1 != -1) {
      lVar4 = (longlong)iVar1;
      iVar2 = *(int *)(lVar3 + 8 + lVar4 * 0x28);
      if (iVar2 == *(int *)(param_2 + 1)) {
        if (iVar2 < 2) {
          return iVar1;
        }
        iVar2 = FUN_144a80a00(*(undefined8 *)(lVar3 + lVar4 * 0x28),*param_2);
        lVar3 = DAT_14cb9b650;
        if (iVar2 == 0) {
          return iVar1;
        }
      }
      else if (*(int *)(param_2 + 1) + iVar2 == 1) {
        return iVar1;
      }
      iVar1 = *(int *)(lVar3 + 0x20 + lVar4 * 0x28);
    }
  }
  return -1;
}



// FUNCTION 148b2ecd1 FUN_148b2ecd1 body=30 status=ok
// SIG undefined FUN_148b2ecd1(void)

void FUN_148b2ecd1(longlong param_1)

{
  FUN_148b2ecf0(param_1 + 0x10);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 148b2ecf0 FUN_148b2ecf0 body=83 status=ok
// SIG undefined FUN_148b2ecf0(void)

void FUN_148b2ecf0(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_1400020a8();
  }
  FUN_148b2ed44(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_148b2eeb4(param_1);
  return;
}



// FUNCTION 148b2ed44 FUN_148b2ed44 body=52 status=ok
// SIG undefined FUN_148b2ed44(void)

void FUN_148b2ed44(longlong *param_1)

{
  FUN_148b2ed78();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148b2ed78 FUN_148b2ed78 body=314 status=ok
// SIG undefined FUN_148b2ed78(void)

void FUN_148b2ed78(longlong *param_1)

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
      FUN_1449db362(*local_68 + (longlong)iStack_4c * 0x30 + 0x10);
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
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b2eeb4 FUN_148b2eeb4 body=52 status=ok
// SIG undefined FUN_148b2eeb4(void)

void FUN_148b2eeb4(longlong *param_1)

{
  FUN_148b2eee8();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148b2eee8 FUN_148b2eee8 body=311 status=ok
// SIG undefined FUN_148b2eee8(void)

void FUN_148b2eee8(longlong *param_1)

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
      FUN_1449db362(*local_68 + (longlong)iStack_4c * 0x28 + 8);
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



// FUNCTION 148b2f020 FUN_148b2f020 body=29 status=ok
// SIG undefined FUN_148b2f020(void)

undefined8 FUN_148b2f020(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b2f060 FUN_148b2f060 body=93 status=ok
// SIG undefined FUN_148b2f060(void)

void FUN_148b2f060(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b55dec0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b55de50;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148b2f0be FUN_148b2f0be body=93 status=ok
// SIG undefined FUN_148b2f0be(void)

void FUN_148b2f0be(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b55dec0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b55de50;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148b2f11c FUN_148b2f11c body=126 status=ok
// SIG undefined FUN_148b2f11c(void)

void FUN_148b2f11c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b55dec0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b55de50;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148b2f18b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148b2f19a FUN_148b2f19a body=48 status=ok
// SIG undefined FUN_148b2f19a(void)

undefined8 FUN_148b2f19a(longlong param_1,undefined8 param_2,longlong param_3)

{
  FUN_148b2f24c(param_2,param_1 + 0x18);
  if (*(longlong *)(param_3 + 0x20) != 0) {
    FUN_1400020a8();
  }
  return param_2;
}



// FUNCTION 148b2f1ca FUN_148b2f1ca body=127 status=ok
// SIG undefined FUN_148b2f1ca(void)

undefined8 FUN_148b2f1ca(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  undefined1 local_28 [8];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_148b2f24c(local_28,param_1 + 0x18,param_2);
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
  if (*(longlong *)(param_2 + 0x20) != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b2f24c FUN_148b2f24c body=158 status=ok
// SIG undefined FUN_148b2f24c(void)

undefined8 FUN_148b2f24c(undefined8 param_1,undefined8 *param_2,undefined4 *param_3)

{
  code *pcVar1;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 local_40;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined8 local_28;
  undefined1 local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  pcVar1 = (code *)*param_2;
  local_48 = *(undefined8 *)(param_3 + 4);
  local_58 = *param_3;
  uStack_54 = param_3[1];
  uStack_50 = param_3[2];
  uStack_4c = param_3[3];
  local_38 = *(longlong *)(param_3 + 8);
  if (local_38 == 0) {
    local_40 = *(undefined8 *)(param_3 + 6);
  }
  *(undefined8 *)(param_3 + 8) = 0;
  local_30 = param_3[10];
  local_2c = param_3[0xb];
  *(undefined8 *)(param_3 + 10) = 0x100000000;
  local_20 = *(undefined1 *)(param_3 + 0xe);
  local_28 = *(undefined8 *)(param_3 + 0xc);
  (*pcVar1)(param_1);
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b2f2ec FUN_148b2f2ec body=180 status=ok
// SIG undefined FUN_148b2f2ec(void)

longlong * FUN_148b2f2ec(longlong *param_1,uint param_2,longlong *param_3)

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
        plVar2 = (longlong *)(*param_1 + (longlong)iVar1 * 0x28);
        if (*plVar2 == *param_3) {
          if (plVar2 != (longlong *)0x0) goto LAB_148b2f383;
          break;
        }
        iVar1 = (int)plVar2[4];
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_148b2f3a2(param_1,&local_1c,param_2);
  plVar2 = (longlong *)(*param_1 + (longlong)local_1c * 0x28);
LAB_148b2f383:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar2 + 1;
}



// FUNCTION 148b2f3a2 FUN_148b2f3a2 body=302 status=ok
// SIG undefined FUN_148b2f3a2(void)

undefined4 * FUN_148b2f3a2(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_88 [40];
  undefined4 local_60 [2];
  undefined8 *local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_148b2f4d2(param_1,local_60);
  local_48 = 0;
  uStack_40 = 0;
  *local_58 = *(undefined8 *)*param_4;
  local_58[1] = 0;
  local_50 = 0;
  *(undefined4 *)(local_58 + 2) = 0;
  *(undefined4 *)(local_58 + 3) = 0;
  FUN_1449db362();
  *(undefined4 *)(local_58 + 4) = 0xffffffff;
  cVar1 = FUN_148b2f5b8(param_1,param_3,local_58,local_60);
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
      *(uint *)((longlong)local_58 + 0x24) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_58 + 4) =
           *(undefined4 *)
            (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_60[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_148b2f6c6(param_1);
    }
  }
  *param_2 = local_60[0];
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b2f4d2 FUN_148b2f4d2 body=230 status=ok
// SIG undefined FUN_148b2f4d2(void)

int * FUN_148b2f4d2(longlong *param_1,int *param_2)

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
      FUN_140549c28(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar4 = FUN_144a54ea4(param_1 + 2,1);
    plVar5 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    iVar3 = iVar4 + 0x1f;
    if (-1 < iVar4) {
      iVar3 = iVar4;
    }
    bVar2 = (byte)iVar4 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar3 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x28);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x28) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar4 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar4 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x28 + *param_1;
  return param_2;
}



// FUNCTION 148b2f5b8 FUN_148b2f5b8 body=156 status=ok
// SIG undefined FUN_148b2f5b8(void)

undefined8 FUN_148b2f5b8(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar8 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar8 = (longlong *)param_1[8];
    }
    iVar9 = *(int *)((longlong)plVar8 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar9 != -1) {
      do {
        plVar8 = (longlong *)(*param_1 + (longlong)iVar9 * 0x28);
        if (*plVar8 == *param_3) {
          FUN_1449db362(plVar8 + 1);
          lVar5 = *param_3;
          uVar1 = *(undefined4 *)((longlong)param_3 + 4);
          lVar6 = param_3[1];
          uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
          uVar3 = *(undefined4 *)((longlong)param_3 + 0x14);
          lVar7 = param_3[3];
          uVar4 = *(undefined4 *)((longlong)param_3 + 0x1c);
          *(int *)(plVar8 + 2) = (int)param_3[2];
          *(undefined4 *)((longlong)plVar8 + 0x14) = uVar3;
          *(int *)(plVar8 + 3) = (int)lVar7;
          *(undefined4 *)((longlong)plVar8 + 0x1c) = uVar4;
          *(int *)plVar8 = (int)lVar5;
          *(undefined4 *)((longlong)plVar8 + 4) = uVar1;
          *(int *)(plVar8 + 1) = (int)lVar6;
          *(undefined4 *)((longlong)plVar8 + 0xc) = uVar2;
          FUN_148b2f654(param_1,*param_4);
          *param_4 = iVar9;
          return 1;
        }
        iVar9 = (int)plVar8[4];
      } while (iVar9 != -1);
    }
  }
  return 0;
}



// FUNCTION 148b2f654 FUN_148b2f654 body=114 status=ok
// SIG undefined FUN_148b2f654(void)

void FUN_148b2f654(longlong *param_1,int param_2)

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



// FUNCTION 148b2f6c6 FUN_148b2f6c6 body=474 status=ok
// SIG undefined FUN_148b2f6c6(void)

void FUN_148b2f6c6(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
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
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar7) * 4) =
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
        lVar5 = (longlong)iVar4;
        uVar10 = *(ulonglong *)(lVar2 + lVar5 * 0x28);
        uVar8 = ((uint)(uVar10 >> 0x14) & 0xffff ^ (uint)(uVar10 >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0x24 + lVar5 * 0x28) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x20 + lVar5 * 0x28) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar4;
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



// FUNCTION 148b2f8a2 FUN_148b2f8a2 body=137 status=ok
// SIG undefined FUN_148b2f8a2(void)

void FUN_148b2f8a2(longlong *param_1,double *param_2)

{
  double *pdVar1;
  double dVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  lVar4 = *param_1;
  iVar3 = (int)param_1[1];
  lVar6 = (longlong)iVar3;
  if (lVar6 != 0) {
    uVar5 = 0;
    do {
      if ((*(double *)(lVar4 + uVar5) == *param_2) &&
         (!NAN(*(double *)(lVar4 + uVar5)) && !NAN(*param_2))) {
        dVar2 = *(double *)(lVar4 + 8 + uVar5);
        if ((dVar2 == param_2[1]) && (!NAN(dVar2) && !NAN(param_2[1]))) {
          if ((int)(~uVar5 >> 4) != 0) {
            return;
          }
          break;
        }
      }
      uVar5 = uVar5 + 0x10;
    } while (lVar6 << 4 != uVar5);
  }
  *(uint *)(param_1 + 1) = iVar3 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar3 + 1U) {
    FUN_14489624a(param_1,iVar3);
    lVar4 = *param_1;
  }
  dVar2 = param_2[1];
  pdVar1 = (double *)(lVar4 + lVar6 * 0x10);
  *pdVar1 = *param_2;
  pdVar1[1] = dVar2;
  return;
}



// FUNCTION 148b2f92c FUN_148b2f92c body=112 status=ok
// SIG undefined FUN_148b2f92c(void)

undefined8 * FUN_148b2f92c(undefined8 *param_1,longlong param_2)

{
  *param_1 = &PTR_FUN_14b55d900;
  FUN_140e361c2(param_1 + 2,param_2 + 0x10);
  FUN_140e361c2(param_1 + 0x18,param_2 + 0xc0);
  FUN_140e361c2(param_1 + 0x2e,param_2 + 0x170);
  FUN_140e361c2(param_1 + 0x44,param_2 + 0x220);
  *(undefined4 *)(param_1 + 0x5a) = *(undefined4 *)(param_2 + 0x2d0);
  return param_1;
}



// FUNCTION 148b2f99c FUN_148b2f99c body=9 status=ok
// SIG undefined FUN_148b2f99c(void)

void FUN_148b2f99c(longlong param_1)

{
  FUN_148b29882(param_1 + 0x10);
  return;
}



// FUNCTION 148b2f9a6 FUN_148b2f9a6 body=29 status=ok
// SIG undefined FUN_148b2f9a6(void)

undefined8 FUN_148b2f9a6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b2f9c4 FUN_148b2f9c4 body=134 status=ok
// SIG undefined FUN_148b2f9c4(void)

longlong FUN_148b2f9c4(undefined4 param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  iVar1 = FUN_148b2ec34();
  if (iVar1 != -1) {
    lVar2 = (longlong)iVar1;
    if (DAT_14cb9b650 + lVar2 * 0x28 != 0) goto LAB_148b2f9fe;
  }
  local_28 = param_2;
  FUN_148b2fa4c(&local_1c,param_1);
  lVar2 = (longlong)local_1c;
LAB_148b2f9fe:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return DAT_14cb9b650 + lVar2 * 0x28 + 0x10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b2fa4c FUN_148b2fa4c body=313 status=ok
// SIG undefined FUN_148b2fa4c(void)

undefined4 * FUN_148b2fa4c(undefined4 *param_1,uint param_2,undefined8 *param_3)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  undefined *puVar4;
  ulonglong uVar5;
  int iVar6;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_148b2fb86(local_48);
  param_3 = (undefined8 *)*param_3;
  *local_40 = *param_3;
  *param_3 = 0;
  *(undefined4 *)(local_40 + 1) = *(undefined4 *)(param_3 + 1);
  *(undefined4 *)((longlong)local_40 + 0xc) = *(undefined4 *)((longlong)param_3 + 0xc);
  param_3[1] = 0;
  local_40[2] = 0;
  local_40[3] = 0;
  *(undefined4 *)(local_40 + 4) = 0xffffffff;
  cVar2 = FUN_148b2fc94(param_2,local_40,local_48);
  if (cVar2 == '\0') {
    uVar3 = DAT_14cb9b658 - DAT_14cb9b684;
    iVar6 = 1;
    if (3 < uVar3) {
      uVar5 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
      lVar1 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar1 & 0x1f);
    }
    if (((int)uVar3 < 1) || (iVar6 <= DAT_14cb9b698)) {
      param_2 = DAT_14cb9b698 - 1U & param_2;
      *(uint *)((longlong)local_40 + 0x24) = param_2;
      puVar4 = DAT_14cb9b690;
      if (DAT_14cb9b690 == (undefined *)0x0) {
        puVar4 = &DAT_14cb9b688;
      }
      *(undefined4 *)(local_40 + 4) =
           *(undefined4 *)(puVar4 + ((longlong)DAT_14cb9b698 - 1U & (longlong)(int)param_2) * 4);
      puVar4 = DAT_14cb9b690;
      if (DAT_14cb9b690 == (undefined *)0x0) {
        puVar4 = &DAT_14cb9b688;
      }
      *(undefined4 *)(puVar4 + ((longlong)DAT_14cb9b698 - 1U & (longlong)(int)param_2) * 4) =
           local_48[0];
    }
    else {
      DAT_14cb9b698 = iVar6;
      FUN_148b2fd88();
    }
  }
  *param_1 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b2fb86 FUN_148b2fb86 body=270 status=ok
// SIG undefined FUN_148b2fb86(void)

int * FUN_148b2fb86(int *param_1)

{
  byte bVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cb9b680;
  iVar4 = DAT_14cb9b658;
  if (DAT_14cb9b684 == 0) {
    iVar2 = DAT_14cb9b658 + 1;
    bVar7 = DAT_14cb9b65c == DAT_14cb9b658;
    DAT_14cb9b658 = iVar2;
    if (bVar7) {
      FUN_140549c28(&DAT_14cb9b650,iVar4);
    }
    lVar6 = (longlong)iVar4;
    iVar2 = FUN_144a54ea4(&DAT_14cb9b660,1);
    puVar3 = DAT_14cb9b670;
    if (DAT_14cb9b670 == (undefined *)0x0) {
      puVar3 = &DAT_14cb9b660;
    }
    iVar5 = iVar2 + 0x1f;
    if (-1 < iVar2) {
      iVar5 = iVar2;
    }
    bVar1 = (byte)iVar2 & 0x1f;
    *(uint *)(puVar3 + (longlong)(iVar5 >> 5) * 4) =
         *(uint *)(puVar3 + (longlong)(iVar5 >> 5) * 4) &
         (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  }
  else {
    lVar6 = (longlong)DAT_14cb9b680;
    DAT_14cb9b680 = *(int *)(DAT_14cb9b650 + 4 + lVar6 * 0x28);
    DAT_14cb9b684 = DAT_14cb9b684 + -1;
    iVar4 = iVar2;
    if (DAT_14cb9b684 != 0) {
      *(undefined4 *)(DAT_14cb9b650 + (longlong)DAT_14cb9b680 * 0x28) = 0xffffffff;
    }
  }
  puVar3 = &DAT_14cb9b660;
  if (DAT_14cb9b670 != (undefined *)0x0) {
    puVar3 = DAT_14cb9b670;
  }
  iVar2 = iVar4 + 0x1f;
  if (-1 < iVar4) {
    iVar2 = iVar4;
  }
  *(uint *)(puVar3 + (longlong)(iVar2 >> 5) * 4) =
       *(uint *)(puVar3 + (longlong)(iVar2 >> 5) * 4) | 1 << ((byte)iVar4 & 0x1f);
  *param_1 = iVar4;
  *(longlong *)(param_1 + 2) = lVar6 * 0x28 + DAT_14cb9b650;
  return param_1;
}



// FUNCTION 148b2fc94 FUN_148b2fc94 body=116 status=ok
// SIG undefined FUN_148b2fc94(void)

undefined8 FUN_148b2fc94(undefined8 param_1,undefined4 *param_2,int *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  
  if ((DAT_14cb9b658 - DAT_14cb9b684 != 1) && (iVar9 = FUN_148b2ec34(), iVar9 != -1)) {
    plVar1 = (longlong *)(DAT_14cb9b650 + (longlong)iVar9 * 0x28);
    if (*plVar1 != 0) {
      FUN_1400020a8();
    }
    uVar2 = *param_2;
    uVar3 = param_2[1];
    uVar4 = param_2[2];
    uVar5 = param_2[3];
    uVar6 = param_2[5];
    uVar7 = param_2[6];
    uVar8 = param_2[7];
    *(undefined4 *)(plVar1 + 2) = param_2[4];
    *(undefined4 *)((longlong)plVar1 + 0x14) = uVar6;
    *(undefined4 *)(plVar1 + 3) = uVar7;
    *(undefined4 *)((longlong)plVar1 + 0x1c) = uVar8;
    *(undefined4 *)plVar1 = uVar2;
    *(undefined4 *)((longlong)plVar1 + 4) = uVar3;
    *(undefined4 *)(plVar1 + 1) = uVar4;
    *(undefined4 *)((longlong)plVar1 + 0xc) = uVar5;
    FUN_148b2fd08(*param_3);
    *param_3 = iVar9;
    return 1;
  }
  return 0;
}



// FUNCTION 148b2fd08 FUN_148b2fd08 body=128 status=ok
// SIG undefined FUN_148b2fd08(void)

void FUN_148b2fd08(int param_1)

{
  byte bVar1;
  longlong lVar2;
  undefined *puVar3;
  int iVar4;
  
  lVar2 = DAT_14cb9b650;
  if (DAT_14cb9b684 != 0) {
    *(int *)(DAT_14cb9b650 + (longlong)DAT_14cb9b680 * 0x28) = param_1;
  }
  *(undefined4 *)(lVar2 + (longlong)param_1 * 0x28) = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cb9b684) {
    iVar4 = DAT_14cb9b680;
  }
  *(int *)(lVar2 + 4 + (longlong)param_1 * 0x28) = iVar4;
  DAT_14cb9b684 = DAT_14cb9b684 + 1;
  puVar3 = &DAT_14cb9b660;
  if (DAT_14cb9b670 != (undefined *)0x0) {
    puVar3 = DAT_14cb9b670;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar1 = (byte)param_1 & 0x1f;
  DAT_14cb9b680 = param_1;
  *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  return;
}



// FUNCTION 148b2fd88 FUN_148b2fd88 body=515 status=ok
// SIG undefined FUN_148b2fd88(void)

void FUN_148b2fd88(void)

{
  longlong lVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  undefined *puVar8;
  undefined2 *puVar9;
  uint uVar10;
  int iVar11;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined8 local_80;
  undefined *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (DAT_14cb9b690 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cb9b690,0,0,4);
  }
  uVar2 = DAT_14cb9b698;
  uVar3 = local_70;
  if (DAT_14cb9b698 != 0) {
    uVar10 = 0;
    FUN_144a1cbf0(&DAT_14cb9b688,0,DAT_14cb9b698,4);
    if (0 < (int)uVar2) {
      do {
        puVar8 = DAT_14cb9b690;
        if (DAT_14cb9b690 == (undefined *)0x0) {
          puVar8 = &DAT_14cb9b688;
        }
        *(undefined4 *)(puVar8 + (ulonglong)(DAT_14cb9b698 + 0x7fffffff & uVar10) * 4) = 0xffffffff;
        uVar10 = uVar10 + 1;
      } while (uVar2 != uVar10);
    }
    local_60 = 0x100000000;
    local_58 = &DAT_14cb9b660;
    local_50 = 0xffffffff;
    local_48 = 0;
    if (DAT_14cb9b678 != 0) {
      FUN_1449c0562(&local_60);
    }
    local_88 = &DAT_14cb9b650;
    local_80 = local_60;
    local_78 = local_58;
    local_70 = local_50;
    uVar3 = local_70;
    local_68 = local_48;
    local_64 = local_44;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    if (local_70._4_4_ < *(int *)(local_58 + 0x18)) {
      iVar11 = local_70._4_4_;
      local_70 = uVar3;
      do {
        lVar1 = *local_88;
        lVar5 = (longlong)iVar11;
        iVar4 = *(int *)(lVar1 + 8 + lVar5 * 0x28);
        puVar9 = &DAT_149dfb77a;
        iVar7 = 0;
        if (iVar4 != 0) {
          puVar9 = *(undefined2 **)(lVar1 + lVar5 * 0x28);
          iVar7 = iVar4 + -1;
        }
        iVar4 = FUN_144a49b4a(iVar7,puVar9);
        uVar6 = (longlong)iVar4 & (longlong)(int)DAT_14cb9b698 - 1U;
        iVar4 = (int)uVar6;
        *(int *)(lVar1 + 0x24 + lVar5 * 0x28) = iVar4;
        puVar8 = DAT_14cb9b690;
        if (DAT_14cb9b690 == (undefined *)0x0) {
          puVar8 = &DAT_14cb9b688;
        }
        *(undefined4 *)(lVar1 + 0x20 + lVar5 * 0x28) =
             *(undefined4 *)(puVar8 + ((longlong)(int)DAT_14cb9b698 - 1U & uVar6) * 4);
        puVar8 = DAT_14cb9b690;
        if (DAT_14cb9b690 == (undefined *)0x0) {
          puVar8 = &DAT_14cb9b688;
        }
        *(int *)(puVar8 + ((longlong)iVar4 & (longlong)(int)DAT_14cb9b698 - 1U) * 4) = iVar11;
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar11 = local_70._4_4_;
        uVar3 = local_70;
      } while (local_70._4_4_ < *(int *)(local_78 + 0x18));
    }
  }
  local_70 = uVar3;
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b2ff8c FUN_148b2ff8c body=340 status=ok
// SIG undefined FUN_148b2ff8c(void)

undefined8 * FUN_148b2ff8c(undefined8 *param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_2;
  plVar3 = (longlong *)FUN_14001cc68(0x2b0);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14b55df50;
  plVar4 = plVar3 + 2;
  memset(plVar4,0,0x2a0);
  FUN_148b300e2(plVar4);
  local_30 = plVar4;
  local_28 = plVar3;
  FUN_148b30220(&local_30,plVar4);
  if (plVar3 == (longlong *)0x0) {
    *param_1 = 0x10;
    plVar4 = (longlong *)param_1[1];
    if (plVar4 == (longlong *)0x0) goto LAB_148b30073;
    param_1[1] = 0;
LAB_148b3003d:
    LOCK();
    plVar3 = plVar4 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 != 0) goto LAB_148b30073;
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar3 = plVar4;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *param_1 = plVar4;
    plVar4 = (longlong *)param_1[1];
    if (plVar3 != plVar4) {
      param_1[1] = plVar3;
      if (plVar4 == (longlong *)0x0) goto LAB_148b30073;
      goto LAB_148b3003d;
    }
    LOCK();
    plVar4 = plVar3 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_148b30073;
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
LAB_148b30073:
  plVar4 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_28 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  local_38 = 0x2a0;
  FUN_140a52e78(*param_1,"SBoolPropertyValue",
                ".\\Runtime/AdvancedWidgets/Private/Widgets/PropertyViewer/SBoolPropertyValue.cpp",
                0x12);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b300e2 FUN_148b300e2 body=116 status=ok
// SIG undefined FUN_148b300e2(void)

undefined8 * FUN_148b300e2(undefined8 *param_1)

{
  FUN_140a55f88();
  *param_1 = &PTR_FUN_14b55df70;
  param_1[0x4d] = 0;
  FUN_14485c47a(param_1 + 0x4d,0);
  param_1[0x4e] = 0;
  FUN_14485c47a(param_1 + 0x4e,0);
  param_1[0x4f] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0x100000000;
  param_1[0x53] = 0;
  return param_1;
}



// FUNCTION 148b30156 FUN_148b30156 body=81 status=ok
// SIG undefined FUN_148b30156(void)

void FUN_148b30156(longlong param_1)

{
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b55df70;
  if (*(longlong *)(param_1 + 0x298) != 0) {
    FUN_1400020a8();
  }
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_149eeeb00;
  FUN_140cc7538(param_1 + 0x208);
  FUN_140c057ec(param_1 + 0x10);
  return;
}



// FUNCTION 148b301a8 FUN_148b301a8 body=29 status=ok
// SIG undefined FUN_148b301a8(void)

undefined8 FUN_148b301a8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b301c6 FUN_148b301c6 body=90 status=ok
// SIG undefined FUN_148b301c6(void)

undefined8 * FUN_148b301c6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b55df70;
  if (param_1[0x51] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_149eeeb00;
  FUN_140cc7538(param_1 + 0x3f);
  FUN_140c057ec(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b30220 FUN_148b30220 body=167 status=ok
// SIG undefined FUN_148b30220(void)

void FUN_148b30220(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_148b3029b;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_148b3029b;
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
LAB_148b3029b:
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
                    /* WARNING: Could not recover jumptable at 0x000148b302bb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 148b302c8 FUN_148b302c8 body=313 status=ok
// SIG undefined FUN_148b302c8(void)

longlong * FUN_148b302c8(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_148b303c4:
    *puVar5 = &PTR_LAB_149f05ae0;
    uVar10 = FUN_144a3f946();
    puVar5[2] = uVar10;
    *puVar5 = &PTR_FUN_14b55e1b0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar8 = (int)plVar6[1];
    do {
      if (iVar8 == 0) goto LAB_148b303c4;
      LOCK();
      iVar7 = (int)plVar6[1];
      bVar11 = iVar8 == iVar7;
      if (bVar11) {
        *(int *)(plVar6 + 1) = iVar8 + 1;
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      UNLOCK();
    } while (!bVar11);
    uVar10 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_149f05ae0;
    uVar9 = FUN_144a3f946();
    puVar5[2] = uVar9;
    *puVar5 = &PTR_FUN_14b55e1b0;
    puVar5[3] = uVar10;
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



// FUNCTION 148b30402 FUN_148b30402 body=64 status=ok
// SIG undefined FUN_148b30402(void)

undefined8 * FUN_148b30402(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b55e1b0;
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



// FUNCTION 148b30446 FUN_148b30446 body=81 status=ok
// SIG undefined FUN_148b30446(void)

undefined8 FUN_148b30446(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0;
      }
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
    uVar6 = *(undefined8 *)(param_1 + 0x18);
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
  return uVar6;
}



// FUNCTION 148b3049e FUN_148b3049e body=89 status=ok
// SIG undefined FUN_148b3049e(void)

bool FUN_148b3049e(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148b304e9;
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
LAB_148b304e9:
  return lVar6 == param_2;
}



// FUNCTION 148b30514 FUN_148b30514 body=118 status=ok
// SIG undefined FUN_148b30514(void)

void FUN_148b30514(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f05ae0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b55e1b0;
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



// FUNCTION 148b3058a FUN_148b3058a body=118 status=ok
// SIG undefined FUN_148b3058a(void)

void FUN_148b3058a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f05ae0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b55e1b0;
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



// FUNCTION 148b30600 FUN_148b30600 body=156 status=ok
// SIG undefined FUN_148b30600(void)

void FUN_148b30600(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149f05ae0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b55e1b0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar3;
  p_Var1->SpareWORD = (short)((uint)uVar3 >> 0x10);
  p_Var1[1].Type = (short)uVar4;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar5;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148b3068c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148b3069c FUN_148b3069c body=100 status=ok
// SIG undefined FUN_148b3069c(void)

ulonglong FUN_148b3069c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  bool bVar8;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    iVar5 = (int)plVar3[1];
    while (iVar5 != 0) {
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar8 = iVar5 == iVar4;
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      if (bVar8) {
        uVar6 = (**(code **)(param_1 + 0x28))
                          ((longlong)*(int *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x18));
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
        return (ulonglong)uVar6;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148b306fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar7 = (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return uVar7;
}



// FUNCTION 148b30700 FUN_148b30700 body=100 status=ok
// SIG undefined FUN_148b30700(void)

ulonglong FUN_148b30700(longlong param_1)

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
LAB_148b30759:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148b30759;
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



// FUNCTION 148b30764 FUN_148b30764 body=313 status=ok
// SIG undefined FUN_148b30764(void)

longlong * FUN_148b30764(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_148b30860:
    *puVar5 = &PTR_LAB_149f04bf0;
    uVar10 = FUN_144a3f946();
    puVar5[2] = uVar10;
    *puVar5 = &PTR_FUN_14b55e220;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar8 = (int)plVar6[1];
    do {
      if (iVar8 == 0) goto LAB_148b30860;
      LOCK();
      iVar7 = (int)plVar6[1];
      bVar11 = iVar8 == iVar7;
      if (bVar11) {
        *(int *)(plVar6 + 1) = iVar8 + 1;
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      UNLOCK();
    } while (!bVar11);
    uVar10 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_149f04bf0;
    uVar9 = FUN_144a3f946();
    puVar5[2] = uVar9;
    *puVar5 = &PTR_FUN_14b55e220;
    puVar5[3] = uVar10;
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



// FUNCTION 148b3089e FUN_148b3089e body=64 status=ok
// SIG undefined FUN_148b3089e(void)

undefined8 * FUN_148b3089e(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b55e220;
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



// FUNCTION 148b308e2 FUN_148b308e2 body=81 status=ok
// SIG undefined FUN_148b308e2(void)

undefined8 FUN_148b308e2(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0;
      }
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
    uVar6 = *(undefined8 *)(param_1 + 0x18);
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
  return uVar6;
}



// FUNCTION 148b3093a FUN_148b3093a body=89 status=ok
// SIG undefined FUN_148b3093a(void)

bool FUN_148b3093a(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148b30985;
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
LAB_148b30985:
  return lVar6 == param_2;
}



// FUNCTION 148b309b0 FUN_148b309b0 body=118 status=ok
// SIG undefined FUN_148b309b0(void)

void FUN_148b309b0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f04bf0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b55e220;
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



// FUNCTION 148b30a26 FUN_148b30a26 body=118 status=ok
// SIG undefined FUN_148b30a26(void)

void FUN_148b30a26(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f04bf0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b55e220;
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



// FUNCTION 148b30a9c FUN_148b30a9c body=156 status=ok
// SIG undefined FUN_148b30a9c(void)

void FUN_148b30a9c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149f04bf0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b55e220;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar3;
  p_Var1->SpareWORD = (short)((uint)uVar3 >> 0x10);
  p_Var1[1].Type = (short)uVar4;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar5;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148b30b28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148b30b38 FUN_148b30b38 body=104 status=ok
// SIG undefined FUN_148b30b38(void)

void FUN_148b30b38(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    iVar5 = (int)plVar3[1];
    while (iVar5 != 0) {
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      if (bVar6) {
        (**(code **)(param_1 + 0x28))
                  ((longlong)*(int *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x18));
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
                    /* WARNING: Could not recover jumptable at 0x000148b30b85. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148b30b96. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 148b30ba0 FUN_148b30ba0 body=101 status=ok
// SIG undefined FUN_148b30ba0(void)

ulonglong FUN_148b30ba0(longlong param_1)

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
LAB_148b30bfa:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148b30bfa;
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



// FUNCTION 148b30c06 FUN_148b30c06 body=340 status=ok
// SIG undefined FUN_148b30c06(void)

undefined8 * FUN_148b30c06(undefined8 *param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_2;
  plVar3 = (longlong *)FUN_14001cc68(0x2b8);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14b55e290;
  plVar4 = plVar3 + 2;
  memset(plVar4,0,0x2a8);
  FUN_148b30d5c(plVar4);
  local_30 = plVar4;
  local_28 = plVar3;
  FUN_148b30e9e(&local_30,plVar4);
  if (plVar3 == (longlong *)0x0) {
    *param_1 = 0x10;
    plVar4 = (longlong *)param_1[1];
    if (plVar4 == (longlong *)0x0) goto LAB_148b30ced;
    param_1[1] = 0;
LAB_148b30cb7:
    LOCK();
    plVar3 = plVar4 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 != 0) goto LAB_148b30ced;
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar3 = plVar4;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *param_1 = plVar4;
    plVar4 = (longlong *)param_1[1];
    if (plVar3 != plVar4) {
      param_1[1] = plVar3;
      if (plVar4 == (longlong *)0x0) goto LAB_148b30ced;
      goto LAB_148b30cb7;
    }
    LOCK();
    plVar4 = plVar3 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_148b30ced;
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
LAB_148b30ced:
  plVar4 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_28 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  local_38 = 0x2a8;
  FUN_140a52e78(*param_1,"SEnumPropertyValue",
                ".\\Runtime/AdvancedWidgets/Private/Widgets/PropertyViewer/SEnumPropertyValue.cpp",
                0x15);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b30d5c FUN_148b30d5c body=119 status=ok
// SIG undefined FUN_148b30d5c(void)

undefined8 * FUN_148b30d5c(undefined8 *param_1)

{
  FUN_140a55f88();
  *param_1 = &PTR_FUN_14b55e2b0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  FUN_14485c47a(param_1 + 0x4e,0);
  param_1[0x4f] = 0;
  FUN_14485c47a(param_1 + 0x4f,0);
  param_1[0x50] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0x100000000;
  param_1[0x54] = 0;
  return param_1;
}



// FUNCTION 148b30dd4 FUN_148b30dd4 body=81 status=ok
// SIG undefined FUN_148b30dd4(void)

void FUN_148b30dd4(longlong param_1)

{
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b55e2b0;
  if (*(longlong *)(param_1 + 0x2a0) != 0) {
    FUN_1400020a8();
  }
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_149eeeb00;
  FUN_140cc7538(param_1 + 0x208);
  FUN_140c057ec(param_1 + 0x10);
  return;
}



// FUNCTION 148b30e26 FUN_148b30e26 body=29 status=ok
// SIG undefined FUN_148b30e26(void)

undefined8 FUN_148b30e26(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b30e44 FUN_148b30e44 body=90 status=ok
// SIG undefined FUN_148b30e44(void)

undefined8 * FUN_148b30e44(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b55e2b0;
  if (param_1[0x52] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_149eeeb00;
  FUN_140cc7538(param_1 + 0x3f);
  FUN_140c057ec(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b30e9e FUN_148b30e9e body=167 status=ok
// SIG undefined FUN_148b30e9e(void)

void FUN_148b30e9e(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_148b30f19;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_148b30f19;
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
LAB_148b30f19:
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
                    /* WARNING: Could not recover jumptable at 0x000148b30f39. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 148b30f46 FUN_148b30f46 body=313 status=ok
// SIG undefined FUN_148b30f46(void)

longlong * FUN_148b30f46(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_148b31042:
    *puVar5 = &PTR_LAB_149f0a860;
    uVar10 = FUN_144a3f946();
    puVar5[2] = uVar10;
    *puVar5 = &PTR_FUN_14b55e4f0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar8 = (int)plVar6[1];
    do {
      if (iVar8 == 0) goto LAB_148b31042;
      LOCK();
      iVar7 = (int)plVar6[1];
      bVar11 = iVar8 == iVar7;
      if (bVar11) {
        *(int *)(plVar6 + 1) = iVar8 + 1;
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      UNLOCK();
    } while (!bVar11);
    uVar10 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_149f0a860;
    uVar9 = FUN_144a3f946();
    puVar5[2] = uVar9;
    *puVar5 = &PTR_FUN_14b55e4f0;
    puVar5[3] = uVar10;
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



// FUNCTION 148b31080 FUN_148b31080 body=64 status=ok
// SIG undefined FUN_148b31080(void)

undefined8 * FUN_148b31080(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b55e4f0;
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



// FUNCTION 148b310c4 FUN_148b310c4 body=81 status=ok
// SIG undefined FUN_148b310c4(void)

undefined8 FUN_148b310c4(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0;
      }
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
    uVar6 = *(undefined8 *)(param_1 + 0x18);
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
  return uVar6;
}



// FUNCTION 148b3111c FUN_148b3111c body=89 status=ok
// SIG undefined FUN_148b3111c(void)

bool FUN_148b3111c(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148b31167;
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
LAB_148b31167:
  return lVar6 == param_2;
}



// FUNCTION 148b31192 FUN_148b31192 body=118 status=ok
// SIG undefined FUN_148b31192(void)

void FUN_148b31192(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f0a860;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b55e4f0;
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



// FUNCTION 148b31208 FUN_148b31208 body=118 status=ok
// SIG undefined FUN_148b31208(void)

void FUN_148b31208(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f0a860;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b55e4f0;
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



// FUNCTION 148b3127e FUN_148b3127e body=156 status=ok
// SIG undefined FUN_148b3127e(void)

void FUN_148b3127e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149f0a860;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b55e4f0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar3;
  p_Var1->SpareWORD = (short)((uint)uVar3 >> 0x10);
  p_Var1[1].Type = (short)uVar4;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar5;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148b3130a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148b3131a FUN_148b3131a body=105 status=ok
// SIG undefined FUN_148b3131a(void)

undefined8 FUN_148b3131a(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_148b3136e:
    (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30),param_2);
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_148b3136e;
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



// FUNCTION 148b31384 FUN_148b31384 body=186 status=ok
// SIG undefined FUN_148b31384(void)

ulonglong FUN_148b31384(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_RSI;
  ulonglong uVar7;
  bool bVar8;
  undefined1 auStack_58 [40];
  undefined1 local_30 [8];
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_148b3141c:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148b3141c;
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
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),lVar4 != 0);
    if ((lVar4 != 0) &&
       ((**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30),local_30),
       local_28 != (longlong *)0x0)) {
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
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 148b31440 FUN_148b31440 body=313 status=ok
// SIG undefined FUN_148b31440(void)

longlong * FUN_148b31440(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_148b3153c:
    *puVar5 = &PTR_LAB_149f05a70;
    uVar10 = FUN_144a3f946();
    puVar5[2] = uVar10;
    *puVar5 = &PTR_FUN_14b55e560;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar8 = (int)plVar6[1];
    do {
      if (iVar8 == 0) goto LAB_148b3153c;
      LOCK();
      iVar7 = (int)plVar6[1];
      bVar11 = iVar8 == iVar7;
      if (bVar11) {
        *(int *)(plVar6 + 1) = iVar8 + 1;
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      UNLOCK();
    } while (!bVar11);
    uVar10 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_149f05a70;
    uVar9 = FUN_144a3f946();
    puVar5[2] = uVar9;
    *puVar5 = &PTR_FUN_14b55e560;
    puVar5[3] = uVar10;
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



// FUNCTION 148b3157a FUN_148b3157a body=64 status=ok
// SIG undefined FUN_148b3157a(void)

undefined8 * FUN_148b3157a(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b55e560;
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



// FUNCTION 148b315be FUN_148b315be body=81 status=ok
// SIG undefined FUN_148b315be(void)

undefined8 FUN_148b315be(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0;
      }
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
    uVar6 = *(undefined8 *)(param_1 + 0x18);
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
  return uVar6;
}



// FUNCTION 148b31616 FUN_148b31616 body=89 status=ok
// SIG undefined FUN_148b31616(void)

bool FUN_148b31616(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148b31661;
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
LAB_148b31661:
  return lVar6 == param_2;
}



// FUNCTION 148b3168c FUN_148b3168c body=118 status=ok
// SIG undefined FUN_148b3168c(void)

void FUN_148b3168c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f05a70;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b55e560;
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



// FUNCTION 148b31702 FUN_148b31702 body=118 status=ok
// SIG undefined FUN_148b31702(void)

void FUN_148b31702(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f05a70;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b55e560;
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



// FUNCTION 148b31778 FUN_148b31778 body=156 status=ok
// SIG undefined FUN_148b31778(void)

void FUN_148b31778(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149f05a70;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b55e560;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar3;
  p_Var1->SpareWORD = (short)((uint)uVar3 >> 0x10);
  p_Var1[1].Type = (short)uVar4;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar5;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148b31804. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148b31814 FUN_148b31814 body=105 status=ok
// SIG undefined FUN_148b31814(void)

undefined8 FUN_148b31814(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_148b31868:
    (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30),param_2);
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_148b31868;
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



// FUNCTION 148b3187e FUN_148b3187e body=162 status=ok
// SIG undefined FUN_148b3187e(void)

ulonglong FUN_148b3187e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_RSI;
  ulonglong uVar7;
  bool bVar8;
  undefined1 auStack_58 [40];
  longlong *local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_148b318fe:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148b318fe;
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
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),lVar4 != 0);
    if ((lVar4 != 0) &&
       ((**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30),local_30),
       local_30[0] != (longlong *)0x0)) {
      (**(code **)(*local_30[0] + 0x10))();
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
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 148b31922 FUN_148b31922 body=64 status=ok
// SIG undefined FUN_148b31922(void)

undefined8 * FUN_148b31922(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b55e5d0;
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



// FUNCTION 148b31966 FUN_148b31966 body=81 status=ok
// SIG undefined FUN_148b31966(void)

undefined8 FUN_148b31966(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0;
      }
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
    uVar6 = *(undefined8 *)(param_1 + 0x18);
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
  return uVar6;
}



// FUNCTION 148b319be FUN_148b319be body=89 status=ok
// SIG undefined FUN_148b319be(void)

bool FUN_148b319be(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148b31a09;
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
LAB_148b31a09:
  return lVar6 == param_2;
}



// FUNCTION 148b31a34 FUN_148b31a34 body=118 status=ok
// SIG undefined FUN_148b31a34(void)

void FUN_148b31a34(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b42c990;
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar3;
  *puVar1 = &PTR_FUN_14b55e5d0;
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



// FUNCTION 148b31aaa FUN_148b31aaa body=118 status=ok
// SIG undefined FUN_148b31aaa(void)

void FUN_148b31aaa(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b42c990;
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar3;
  *puVar1 = &PTR_FUN_14b55e5d0;
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



// FUNCTION 148b31b20 FUN_148b31b20 body=156 status=ok
// SIG undefined FUN_148b31b20(void)

void FUN_148b31b20(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  _LIST_ENTRY *p_Var6;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b42c990;
  p_Var6 = *(_LIST_ENTRY **)(param_1 + 0x10);
  p_Var1->CriticalSection = *(_RTL_CRITICAL_SECTION **)(param_1 + 8);
  (p_Var1->ProcessLocksList).Flink = p_Var6;
  *(undefined ***)p_Var1 = &PTR_FUN_14b55e5d0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar3;
  p_Var1->SpareWORD = (short)((uint)uVar3 >> 0x10);
  p_Var1[1].Type = (short)uVar4;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar5;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148b31bac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148b31bbc FUN_148b31bbc body=112 status=ok
// SIG undefined FUN_148b31bbc(void)

void FUN_148b31bbc(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    iVar5 = (int)plVar3[1];
    while (iVar5 != 0) {
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      if (bVar6) {
        (**(code **)(param_1 + 0x28))
                  ((longlong)*(int *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x18),
                   *(undefined4 *)(param_1 + 8));
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
                    /* WARNING: Could not recover jumptable at 0x000148b31c0d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148b31c22. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30),*(undefined4 *)(param_1 + 8));
  return;
}



// FUNCTION 148b31c2c FUN_148b31c2c body=105 status=ok
// SIG undefined FUN_148b31c2c(void)

ulonglong FUN_148b31c2c(longlong param_1)

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
LAB_148b31c8a:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148b31c8a;
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
      (**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30),*(undefined4 *)(param_1 + 8));
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



// FUNCTION 148b31c96 FUN_148b31c96 body=340 status=ok
// SIG undefined FUN_148b31c96(void)

undefined8 * FUN_148b31c96(undefined8 *param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_2;
  plVar3 = (longlong *)FUN_14001cc68(0x2b0);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14b55e640;
  plVar4 = plVar3 + 2;
  memset(plVar4,0,0x2a0);
  FUN_148b31dec(plVar4);
  local_30 = plVar4;
  local_28 = plVar3;
  FUN_148b31f2a(&local_30,plVar4);
  if (plVar3 == (longlong *)0x0) {
    *param_1 = 0x10;
    plVar4 = (longlong *)param_1[1];
    if (plVar4 == (longlong *)0x0) goto LAB_148b31d7d;
    param_1[1] = 0;
LAB_148b31d47:
    LOCK();
    plVar3 = plVar4 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 != 0) goto LAB_148b31d7d;
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar3 = plVar4;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *param_1 = plVar4;
    plVar4 = (longlong *)param_1[1];
    if (plVar3 != plVar4) {
      param_1[1] = plVar3;
      if (plVar4 == (longlong *)0x0) goto LAB_148b31d7d;
      goto LAB_148b31d47;
    }
    LOCK();
    plVar4 = plVar3 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_148b31d7d;
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
LAB_148b31d7d:
  plVar4 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_28 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  local_38 = 0x2a0;
  FUN_140a52e78(*param_1,"SNumericPropertyValue",
                ".\\Runtime/AdvancedWidgets/Private/Widgets/PropertyViewer/SNumericPropertyValue.cpp"
                ,0x13);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b31dec FUN_148b31dec body=116 status=ok
// SIG undefined FUN_148b31dec(void)

undefined8 * FUN_148b31dec(undefined8 *param_1)

{
  FUN_140a55f88();
  *param_1 = &PTR_FUN_14b55e660;
  param_1[0x4d] = 0;
  FUN_14485c47a(param_1 + 0x4d,0);
  param_1[0x4e] = 0;
  FUN_14485c47a(param_1 + 0x4e,0);
  param_1[0x4f] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0x100000000;
  param_1[0x53] = 0;
  return param_1;
}



// FUNCTION 148b31e60 FUN_148b31e60 body=81 status=ok
// SIG undefined FUN_148b31e60(void)

void FUN_148b31e60(longlong param_1)

{
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b55e660;
  if (*(longlong *)(param_1 + 0x298) != 0) {
    FUN_1400020a8();
  }
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_149eeeb00;
  FUN_140cc7538(param_1 + 0x208);
  FUN_140c057ec(param_1 + 0x10);
  return;
}



// FUNCTION 148b31eb2 FUN_148b31eb2 body=29 status=ok
// SIG undefined FUN_148b31eb2(void)

undefined8 FUN_148b31eb2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b31ed0 FUN_148b31ed0 body=90 status=ok
// SIG undefined FUN_148b31ed0(void)

undefined8 * FUN_148b31ed0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b55e660;
  if (param_1[0x51] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_149eeeb00;
  FUN_140cc7538(param_1 + 0x3f);
  FUN_140c057ec(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b31f2a FUN_148b31f2a body=167 status=ok
// SIG undefined FUN_148b31f2a(void)

void FUN_148b31f2a(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_148b31fa5;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_148b31fa5;
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
LAB_148b31fa5:
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
                    /* WARNING: Could not recover jumptable at 0x000148b31fc5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 148b31fd2 FUN_148b31fd2 body=324 status=ok
// SIG undefined FUN_148b31fd2(void)

longlong * FUN_148b31fd2(longlong *param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_2;
  plVar3 = (longlong *)FUN_14001cc68(0x5e8,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14b55e8a0;
  plVar4 = plVar3 + 2;
  FUN_148b32118(plVar4);
  local_30 = plVar4;
  local_28 = plVar3;
  FUN_148b3572c(&local_30,plVar4);
  if (plVar3 == (longlong *)0x0) {
    *param_1 = 0x10;
    plVar4 = (longlong *)param_1[1];
    if (plVar4 == (longlong *)0x0) goto LAB_148b320a9;
    param_1[1] = 0;
LAB_148b32073:
    LOCK();
    plVar3 = plVar4 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 != 0) goto LAB_148b320a9;
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar3 = plVar4;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *param_1 = (longlong)plVar4;
    plVar4 = (longlong *)param_1[1];
    if (plVar3 != plVar4) {
      param_1[1] = (longlong)plVar3;
      if (plVar4 == (longlong *)0x0) goto LAB_148b320a9;
      goto LAB_148b32073;
    }
    LOCK();
    plVar4 = plVar3 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_148b320a9;
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
LAB_148b320a9:
  plVar4 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_28 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  local_38 = 0x5d8;
  FUN_140a52e78(*param_1,"SSpinBox<int64>",
                ".\\Runtime/AdvancedWidgets/Private/Widgets/PropertyViewer/SNumericPropertyValue.cpp"
                ,0x28);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b32118 FUN_148b32118 body=464 status=ok
// SIG undefined FUN_148b32118(void)

undefined8 * FUN_148b32118(undefined8 *param_1)

{
  FUN_140a55f88();
  *param_1 = &PTR_FUN_14b55e8c0;
  param_1[0x4d] = 0;
  *(undefined1 *)(param_1 + 0x4e) = 0;
  param_1[0x53] = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  param_1[0x55] = 0;
  *(undefined4 *)(param_1 + 0x56) = 0;
  param_1[0x57] = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  param_1[0x68] = 0;
  *(undefined1 *)(param_1 + 0x69) = 0;
  *(undefined1 *)(param_1 + 0x7d) = 0;
  *(undefined1 *)(param_1 + 0x7e) = 0;
  *(undefined1 *)(param_1 + 0x82) = 0;
  *(undefined1 *)(param_1 + 0x83) = 0;
  *(undefined1 *)(param_1 + 0x87) = 0;
  *(undefined1 *)(param_1 + 0x88) = 0;
  *(undefined1 *)(param_1 + 0x8c) = 0;
  *(undefined1 *)(param_1 + 0x8d) = 0;
  *(undefined1 *)((longlong)param_1 + 0x484) = 0;
  *(undefined1 *)(param_1 + 0x91) = 0;
  *(undefined1 *)((longlong)param_1 + 0x4a4) = 0;
  *(undefined1 *)(param_1 + 0x95) = 0;
  *(undefined1 *)(param_1 + 0xa5) = 0;
  *(undefined1 *)(param_1 + 0xa6) = 0;
  param_1[0xab] = 0;
  *(undefined4 *)(param_1 + 0xac) = 0;
  *(undefined4 *)(param_1 + 0xad) = 0;
  *(undefined1 *)((longlong)param_1 + 0x56c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x284) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28c) = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  *(undefined8 *)((longlong)param_1 + 0x35d) = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  *(undefined8 *)((longlong)param_1 + 0x375) = 0;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  *(undefined8 *)((longlong)param_1 + 0x38d) = 0;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3a5) = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3b9) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c1) = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  param_1[0x7f] = 0;
  param_1[0x80] = 0;
  param_1[0x84] = 0;
  param_1[0x85] = 0;
  param_1[0x89] = 0;
  param_1[0x8a] = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  param_1[0x92] = 0;
  param_1[0x93] = 0;
  *(undefined2 *)(param_1 + 0x98) = 0;
  param_1[0x96] = 0;
  param_1[0x97] = 0;
  *(undefined2 *)(param_1 + 0x9b) = 0;
  param_1[0x99] = 0;
  param_1[0x9a] = 0;
  *(undefined2 *)(param_1 + 0x9e) = 0;
  param_1[0x9c] = 0;
  param_1[0x9d] = 0;
  *(undefined2 *)(param_1 + 0xa1) = 0;
  param_1[0x9f] = 0;
  param_1[0xa0] = 0;
  param_1[0xa2] = 0;
  param_1[0xa3] = 0;
  *(undefined8 *)((longlong)param_1 + 0x544) = 0;
  *(undefined8 *)((longlong)param_1 + 0x54c) = 0;
  param_1[0xa7] = 0;
  param_1[0xa8] = 0;
  param_1[0xae] = 0;
  param_1[0xaf] = 0;
  param_1[0xb5] = 0;
  param_1[0xb6] = 0;
  *(undefined2 *)((longlong)param_1 + 0x5bc) = 1;
  *(undefined1 *)(param_1 + 0xba) = 0;
  return param_1;
}



// FUNCTION 148b322e8 FUN_148b322e8 body=9 status=ok
// SIG undefined FUN_148b322e8(void)

void FUN_148b322e8(longlong param_1)

{
  FUN_148b34ce4(param_1 + 0x10);
  return;
}



// FUNCTION 148b322f2 FUN_148b322f2 body=29 status=ok
// SIG undefined FUN_148b322f2(void)

undefined8 FUN_148b322f2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b32310 FUN_148b32310 body=38 status=ok
// SIG undefined FUN_148b32310(void)

undefined8 FUN_148b32310(undefined8 param_1,int param_2)

{
  FUN_148b34ce4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b32336 FUN_148b32336 body=110 status=ok
// SIG undefined FUN_148b32336(void)

void FUN_148b32336(longlong param_1)

{
  double dVar1;
  undefined1 auVar2 [16];
  
  if (*(char *)(param_1 + 0x5d0) == '\x01') {
    auVar2._0_8_ = *(double *)(param_1 + 0x5c0) + 0.5;
    auVar2._8_8_ = 0;
    auVar2 = roundpd(auVar2,auVar2,1);
    dVar1 = auVar2._0_8_;
    if (9007199254740992.0 <= dVar1) {
      dVar1 = 9007199254740992.0;
    }
    if (dVar1 <= -9007199254740992.0) {
      dVar1 = -9007199254740992.0;
    }
    FUN_143faaf46(dVar1,(longlong)dVar1,*(double *)(param_1 + 0x5c0),
                  *(undefined4 *)(param_1 + 0x5c8),1);
    if (*(char *)(param_1 + 0x5d0) == '\x01') {
      *(undefined1 *)(param_1 + 0x5d0) = 0;
    }
  }
  return;
}



// FUNCTION 148b323a4 FUN_148b323a4 body=442 status=ok
// SIG undefined FUN_148b323a4(void)

undefined1 * FUN_148b323a4(longlong param_1,undefined1 *param_2,undefined8 param_3,char *param_4)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined1 auStack_148 [40];
  undefined8 local_120;
  longlong *local_118;
  undefined1 local_110;
  undefined1 local_10f;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined1 local_f8;
  undefined1 local_f7;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined1 local_d8;
  undefined1 local_d0 [136];
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if ((*(char *)(param_1 + 0x5b9) == '\0') && ((byte)(*param_4 - 1U) < 2)) {
    local_f8 = DAT_14c96b1e1;
    local_f7 = 1;
    local_f0 = 0;
    uStack_e8 = 0;
    (**(code **)(**(longlong **)(param_1 + 0x2c8) + 0x1c0))
              (*(longlong **)(param_1 + 0x2c8),&local_f8);
    local_110 = DAT_14c96b238;
    local_10f = 1;
    local_108 = 0;
    uStack_100 = 0;
    (**(code **)(**(longlong **)(param_1 + 0x2d8) + 0x1c0))();
    local_f8 = 1;
    local_d8 = 0;
    local_f0 = 0;
    uStack_e8 = 0;
    memset(local_d0,0,0x88);
    local_48 = 0x20702;
    cVar3 = *param_4;
    local_120 = *(undefined8 *)(param_1 + 0x2d8);
    plVar4 = *(longlong **)(param_1 + 0x2e0);
    if (plVar4 == (longlong *)0x0) {
      local_118 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      local_118 = plVar4;
    }
    uVar5 = FUN_140592b68(&local_f8,&local_120,cVar3,0);
    FUN_1403d4c6e(param_2,uVar5);
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
    FUN_14493db24(&local_f8);
  }
  else {
    *param_2 = 0;
    param_2[0x20] = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    memset(param_2 + 0x28,0,0x88);
    *(undefined4 *)(param_2 + 0xb0) = 0x20702;
    param_2[0xb4] = 0;
  }
  if ((local_40 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b32560 FUN_148b32560 body=1312 status=ok
// SIG undefined FUN_148b32560(void)

undefined1 * FUN_148b32560(longlong param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  double dVar8;
  undefined1 auStack_158 [32];
  undefined4 local_138;
  undefined8 local_130;
  longlong *local_128;
  undefined1 local_120;
  undefined1 local_11f;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined1 local_108;
  undefined1 local_107;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined1 local_e8;
  undefined1 local_e0 [16];
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined4 local_58;
  undefined1 local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_158;
  lVar7 = *(longlong *)(param_4 + 0x20);
  plVar3 = *(longlong **)(param_4 + 0x30);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  if ((lVar7 == DAT_14c964dd0) && (cVar4 = FUN_140591fd6(param_1), cVar4 != '\0')) {
    *(undefined1 *)(param_1 + 0x5b9) = 0;
    *(undefined4 *)(param_1 + 0x580) = 0xffffffff;
    *(double *)(param_1 + 0x590) = (double)*(longlong *)(param_1 + 0x598);
    FUN_148b34fa0(param_1);
    local_108 = 1;
    local_e8 = 0;
    local_100 = 0;
    uStack_f8 = 0;
    memset(local_e0,0,0x88);
    local_58 = 0x20702;
    local_d0 = 0;
    uStack_c8 = 0;
    local_54 = 1;
    uVar5 = FUN_146948cd0(&local_108,param_1 + 0x584);
    FUN_1403d4c6e(param_2,uVar5);
LAB_148b32745:
    FUN_14493db24(&local_108);
    goto LAB_148b32889;
  }
  if ((lVar7 == DAT_14c964e78) || (lVar7 == DAT_14c964e90)) {
    if ((*(int *)(param_1 + 0x280) != 0) &&
       ((*(longlong **)(param_1 + 0x278) != (longlong *)0x0 &&
        (cVar4 = (**(code **)(**(longlong **)(param_1 + 0x278) + 0x30))(), cVar4 != '\0')))) {
      if (*(int *)(param_1 + 0x280) == 0) {
        plVar6 = (longlong *)0x0;
      }
      else {
        plVar6 = *(longlong **)(param_1 + 0x278);
      }
      uVar5 = (**(code **)(*plVar6 + 0x58))();
      *(undefined8 *)(param_1 + 0x268) = uVar5;
    }
    lVar7 = *(longlong *)(param_1 + 0x268);
    if (((*(int *)(param_1 + 0x358) != 0) && (*(longlong **)(param_1 + 0x350) != (longlong *)0x0))
       && (cVar4 = (**(code **)(**(longlong **)(param_1 + 0x350) + 0x30))(), cVar4 != '\0')) {
      if (*(int *)(param_1 + 0x358) == 0) {
        plVar6 = (longlong *)0x0;
      }
      else {
        plVar6 = *(longlong **)(param_1 + 0x350);
      }
      uVar5 = (**(code **)(*plVar6 + 0x58))();
      *(undefined8 *)(param_1 + 0x340) = uVar5;
    }
    dVar8 = (double)lVar7;
    *(double *)(param_1 + 0x590) = dVar8;
    dVar8 = (double)*(longlong *)(param_1 + 0x340) + dVar8;
    lVar7 = *(longlong *)(param_1 + 0x340) + lVar7;
LAB_148b32801:
    local_138 = 1;
    FUN_143faaf46(param_1,lVar7,dVar8,2);
    local_108 = DAT_14c96b238;
    local_107 = 1;
    local_100 = 0;
    uStack_f8 = 0;
    (**(code **)(**(longlong **)(param_1 + 0x2c8) + 0x1c0))();
    local_120 = DAT_14c96b1e1;
    local_11f = 1;
    local_118 = 0;
    uStack_110 = 0;
    (**(code **)(**(longlong **)(param_1 + 0x2d8) + 0x1c0))();
    *param_2 = 1;
    param_2[0x20] = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
  }
  else {
    if ((lVar7 == DAT_14c964ea8) || (lVar7 == DAT_14c964e60)) {
      if ((*(int *)(param_1 + 0x280) != 0) &&
         ((*(longlong **)(param_1 + 0x278) != (longlong *)0x0 &&
          (cVar4 = (**(code **)(**(longlong **)(param_1 + 0x278) + 0x30))(), cVar4 != '\0')))) {
        if (*(int *)(param_1 + 0x280) == 0) {
          plVar6 = (longlong *)0x0;
        }
        else {
          plVar6 = *(longlong **)(param_1 + 0x278);
        }
        uVar5 = (**(code **)(*plVar6 + 0x58))();
        *(undefined8 *)(param_1 + 0x268) = uVar5;
      }
      lVar7 = *(longlong *)(param_1 + 0x268);
      if (((*(int *)(param_1 + 0x358) != 0) && (*(longlong **)(param_1 + 0x350) != (longlong *)0x0))
         && (cVar4 = (**(code **)(**(longlong **)(param_1 + 0x350) + 0x30))(), cVar4 != '\0')) {
        if (*(int *)(param_1 + 0x358) == 0) {
          plVar6 = (longlong *)0x0;
        }
        else {
          plVar6 = *(longlong **)(param_1 + 0x350);
        }
        uVar5 = (**(code **)(*plVar6 + 0x58))();
        *(undefined8 *)(param_1 + 0x340) = uVar5;
      }
      dVar8 = (double)lVar7;
      *(double *)(param_1 + 0x590) = dVar8;
      dVar8 = (double)*(longlong *)(param_1 + 0x340) + dVar8;
      lVar7 = lVar7 - *(longlong *)(param_1 + 0x340);
      goto LAB_148b32801;
    }
    if (lVar7 == DAT_14c964d88) {
      if (((*(int *)(param_1 + 0x280) != 0) && (*(longlong **)(param_1 + 0x278) != (longlong *)0x0))
         && (cVar4 = (**(code **)(**(longlong **)(param_1 + 0x278) + 0x30))(), cVar4 != '\0')) {
        if (*(int *)(param_1 + 0x280) == 0) {
          plVar6 = (longlong *)0x0;
        }
        else {
          plVar6 = *(longlong **)(param_1 + 0x278);
        }
        uVar5 = (**(code **)(*plVar6 + 0x58))();
        *(undefined8 *)(param_1 + 0x268) = uVar5;
      }
      *(double *)(param_1 + 0x590) = (double)*(longlong *)(param_1 + 0x268);
      local_108 = DAT_14c96b1e1;
      local_107 = 1;
      local_100 = 0;
      uStack_f8 = 0;
      (**(code **)(**(longlong **)(param_1 + 0x2c8) + 0x1c0))
                (*(longlong **)(param_1 + 0x2c8),&local_108);
      local_120 = DAT_14c96b238;
      local_11f = 1;
      local_118 = 0;
      uStack_110 = 0;
      (**(code **)(**(longlong **)(param_1 + 0x2d8) + 0x1c0))();
      local_108 = 1;
      local_e8 = 0;
      local_100 = 0;
      uStack_f8 = 0;
      memset(local_e0,0,0x88);
      local_58 = 0x20702;
      local_54 = 0;
      local_130 = *(undefined8 *)(param_1 + 0x2d8);
      plVar6 = *(longlong **)(param_1 + 0x2e0);
      if (plVar6 == (longlong *)0x0) {
        local_128 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
        local_128 = plVar6;
      }
      uVar5 = FUN_140592b68(&local_108,&local_130,1,0);
      FUN_1403d4c6e(param_2,uVar5);
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
      }
      goto LAB_148b32745;
    }
    *param_2 = 0;
    param_2[0x20] = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
  }
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
LAB_148b32889:
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar3 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
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
  if ((local_50 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 148b32a82 FUN_148b32a82 body=1044 status=ok
// SIG undefined FUN_148b32a82(void)

undefined1 * FUN_148b32a82(longlong param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 uVar7;
  int iVar8;
  char cVar9;
  uint uVar10;
  int iVar11;
  undefined8 uVar12;
  void *pvVar13;
  longlong *plVar14;
  bool bVar15;
  bool bVar16;
  undefined1 auStack_178 [44];
  undefined4 local_14c;
  undefined8 local_148;
  longlong *plStack_140;
  undefined8 local_138;
  longlong *plStack_130;
  undefined8 local_128;
  longlong *plStack_120;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined8 uStack_108;
  undefined1 local_f8;
  undefined1 local_f0 [136];
  undefined4 local_68;
  undefined1 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_178;
  lVar6 = *(longlong *)(param_4 + 0x40);
  plVar14 = *(longlong **)(param_4 + 0x50);
  if (plVar14 == (longlong *)0x0) {
    if (lVar6 == DAT_14c966e98) {
      iVar11 = *(int *)(param_1 + 0x580);
      goto joined_r0x000148b32b80;
    }
  }
  else {
    LOCK();
    *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
    UNLOCK();
    if (lVar6 == DAT_14c966e98) {
      iVar11 = *(int *)(param_1 + 0x580);
      LOCK();
      plVar1 = plVar14 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar14)(plVar14);
        LOCK();
        piVar2 = (int *)((longlong)plVar14 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar14 + 0x10))(plVar14);
        }
      }
joined_r0x000148b32b80:
      if (iVar11 == -1) {
        *(undefined4 *)(param_1 + 0x338) = 0;
        if (((*(int *)(param_1 + 0x280) != 0) &&
            (*(longlong **)(param_1 + 0x278) != (longlong *)0x0)) &&
           (cVar9 = (**(code **)(**(longlong **)(param_1 + 0x278) + 0x30))(), cVar9 != '\0')) {
          if (*(int *)(param_1 + 0x280) == 0) {
            plVar14 = (longlong *)0x0;
          }
          else {
            plVar14 = *(longlong **)(param_1 + 0x278);
          }
          uVar12 = (**(code **)(*plVar14 + 0x58))();
          *(undefined8 *)(param_1 + 0x268) = uVar12;
        }
        *(longlong *)(param_1 + 0x598) = *(longlong *)(param_1 + 0x268);
        *(double *)(param_1 + 0x590) = (double)*(longlong *)(param_1 + 0x268);
        *(undefined4 *)(param_1 + 0x580) = *(undefined4 *)(param_4 + 0x58);
        *(ulonglong *)(param_1 + 0x584) =
             CONCAT44((int)ROUND(*(float *)(param_4 + 0x24) + *(float *)(param_4 + 0x24) + 0.5) >> 1
                      ,(int)ROUND(*(float *)(param_4 + 0x20) + *(float *)(param_4 + 0x20) + 0.5) >>
                       1);
        local_118[0] = 1;
        local_f8 = 0;
        local_110 = 0;
        uStack_108 = 0;
        pvVar13 = memset(local_f0,0,0x88);
        local_68 = 0x20702;
        local_64 = 0;
        plVar14 = *(longlong **)(param_1 + 0x10);
        if (plVar14 == (longlong *)0x0) {
LAB_148b32ce9:
          local_128 = 0;
          plStack_120 = (longlong *)0x0;
          local_14c = (undefined4)CONCAT71((int7)((ulonglong)pvVar13 >> 8),1);
        }
        else {
          pvVar13 = (void *)(ulonglong)*(uint *)(plVar14 + 1);
          do {
            uVar10 = (uint)pvVar13;
            if (uVar10 == 0) goto LAB_148b32ce9;
            LOCK();
            uVar5 = *(uint *)(plVar14 + 1);
            if (uVar10 == uVar5) {
              *(uint *)(plVar14 + 1) = uVar10 + 1;
            }
            else {
              pvVar13 = (void *)(ulonglong)uVar5;
            }
            UNLOCK();
          } while (uVar10 != uVar5);
          uVar12 = *(undefined8 *)(param_1 + 8);
          LOCK();
          *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
          UNLOCK();
          LOCK();
          plVar1 = plVar14 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plVar14)(plVar14);
            LOCK();
            piVar2 = (int *)((longlong)plVar14 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar14 + 0x10))(plVar14);
            }
          }
          LOCK();
          *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
          UNLOCK();
          local_14c = 0;
          local_128 = uVar12;
          plStack_120 = plVar14;
        }
        plVar1 = plStack_120;
        uVar12 = FUN_140592a6e(local_118,&local_128);
        plVar14 = *(longlong **)(param_1 + 0x10);
        if (plVar14 == (longlong *)0x0) {
LAB_148b32d60:
          local_138 = 0;
          plStack_130 = (longlong *)0x0;
          bVar15 = true;
        }
        else {
          iVar11 = (int)plVar14[1];
          do {
            if (iVar11 == 0) goto LAB_148b32d60;
            LOCK();
            iVar8 = (int)plVar14[1];
            bVar15 = iVar11 == iVar8;
            if (bVar15) {
              *(int *)(plVar14 + 1) = iVar11 + 1;
              iVar8 = iVar11;
            }
            iVar11 = iVar8;
            UNLOCK();
          } while (!bVar15);
          uVar7 = *(undefined8 *)(param_1 + 8);
          LOCK();
          *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
          UNLOCK();
          LOCK();
          plVar3 = plVar14 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
            (**(code **)*plVar14)(plVar14);
            LOCK();
            piVar2 = (int *)((longlong)plVar14 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar14 + 0x10))(plVar14);
            }
          }
          LOCK();
          *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
          UNLOCK();
          bVar15 = false;
          local_138 = uVar7;
          plStack_130 = plVar14;
        }
        plVar3 = plStack_130;
        uVar12 = FUN_140592ae6(uVar12,&local_138);
        plVar14 = *(longlong **)(param_1 + 0x10);
        if (plVar14 == (longlong *)0x0) {
LAB_148b32dd5:
          local_148 = 0;
          plStack_140 = (longlong *)0x0;
          bVar16 = true;
        }
        else {
          iVar11 = (int)plVar14[1];
          do {
            if (iVar11 == 0) goto LAB_148b32dd5;
            LOCK();
            iVar8 = (int)plVar14[1];
            bVar16 = iVar11 == iVar8;
            if (bVar16) {
              *(int *)(plVar14 + 1) = iVar11 + 1;
              iVar8 = iVar11;
            }
            iVar11 = iVar8;
            UNLOCK();
          } while (!bVar16);
          uVar7 = *(undefined8 *)(param_1 + 8);
          LOCK();
          *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
          UNLOCK();
          LOCK();
          plVar4 = plVar14 + 1;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)*plVar4 == 0) {
            (**(code **)*plVar14)(plVar14);
            LOCK();
            piVar2 = (int *)((longlong)plVar14 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar14 + 0x10))(plVar14);
            }
          }
          LOCK();
          *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
          UNLOCK();
          bVar16 = false;
          local_148 = uVar7;
          plStack_140 = plVar14;
        }
        plVar14 = plStack_140;
        uVar12 = FUN_140592b68(uVar12,&local_148,0,0);
        FUN_1403d4c6e(param_2,uVar12);
        if (!bVar16) {
          LOCK();
          plVar4 = plVar14 + 1;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)*plVar4 == 0) {
            (**(code **)*plVar14)(plVar14);
            LOCK();
            piVar2 = (int *)((longlong)plVar14 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar14 + 0x10))(plVar14);
            }
          }
        }
        if (!bVar15) {
          LOCK();
          plVar14 = plVar3 + 1;
          *(int *)plVar14 = (int)*plVar14 + -1;
          UNLOCK();
          if ((int)*plVar14 == 0) {
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
        if ((char)local_14c == '\0') {
          LOCK();
          plVar14 = plVar1 + 1;
          *(int *)plVar14 = (int)*plVar14 + -1;
          UNLOCK();
          if ((int)*plVar14 == 0) {
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
        FUN_14493db24(local_118);
        if (*(char *)(param_1 + 0x5bb) == '\x01') {
          param_2[0xb4] = param_2[0xb4] | 0x40;
        }
        goto LAB_148b32b37;
      }
    }
    else {
      LOCK();
      plVar1 = plVar14 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar14)(plVar14);
        LOCK();
        piVar2 = (int *)((longlong)plVar14 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar14 + 0x10))(plVar14);
        }
      }
    }
  }
  *param_2 = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
LAB_148b32b37:
  if ((local_60 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b32e98 FUN_148b32e98 body=953 status=ok
// SIG undefined FUN_148b32e98(void)

undefined1 * FUN_148b32e98(longlong param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  longlong lVar7;
  longlong *plVar8;
  float fVar9;
  double dVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auStack_158 [40];
  undefined8 local_130;
  longlong *local_128;
  undefined1 local_120;
  undefined1 local_11f;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined1 local_108;
  undefined1 local_107;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined1 local_e8;
  undefined1 local_e0 [16];
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined4 local_58;
  undefined1 local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_158;
  lVar7 = *(longlong *)(param_4 + 0x40);
  plVar8 = *(longlong **)(param_4 + 0x50);
  if (plVar8 == (longlong *)0x0) {
    if ((lVar7 == DAT_14c966e98) && (*(int *)(param_1 + 0x580) == *(int *)(param_4 + 0x58))) {
LAB_148b32f1f:
      cVar6 = FUN_140591fd6(param_1);
      if (cVar6 == '\0') {
        *(undefined1 *)(param_1 + 0x5b9) = 0;
        *(undefined4 *)(param_1 + 0x580) = 0xffffffff;
        *param_2 = 0;
        param_2[0x20] = 0;
        *(undefined8 *)(param_2 + 8) = 0;
        *(undefined8 *)(param_2 + 0x10) = 0;
        memset(param_2 + 0x28,0,0x88);
        *(undefined4 *)(param_2 + 0xb0) = 0x20702;
        param_2[0xb4] = 0;
      }
      else {
        if (*(char *)(param_1 + 0x5b9) == '\x01') {
          if (((*(int *)(param_1 + 0x358) == 0) ||
              (*(longlong **)(param_1 + 0x350) == (longlong *)0x0)) ||
             (cVar6 = (**(code **)(**(longlong **)(param_1 + 0x350) + 0x30))(), cVar6 == '\0')) {
            lVar7 = *(longlong *)(param_1 + 0x340);
          }
          else {
            if (*(int *)(param_1 + 0x358) == 0) {
              plVar8 = (longlong *)0x0;
            }
            else {
              plVar8 = *(longlong **)(param_1 + 0x350);
            }
            lVar7 = (**(code **)(*plVar8 + 0x58))();
            *(longlong *)(param_1 + 0x340) = lVar7;
          }
          if ((lVar7 != 0) && ((*(byte *)(param_4 + 8) & 0xf) == 0)) {
            dVar10 = (double)lVar7;
            auVar12._0_8_ = (dVar10 * 0.5 + *(double *)(param_1 + 0x590)) / dVar10;
            auVar12._8_8_ = 0;
            auVar12 = roundpd(auVar12,auVar12,1);
            *(double *)(param_1 + 0x590) = auVar12._0_8_ * dVar10;
          }
          auVar11._0_8_ = *(double *)(param_1 + 0x590) + 0.5;
          auVar11._8_8_ = 0;
          roundpd(auVar11,auVar11,1);
          FUN_148b34fa0(param_1);
        }
        *(undefined1 *)(param_1 + 0x5b9) = 0;
        *(undefined4 *)(param_1 + 0x580) = 0xffffffff;
        local_108 = 1;
        local_e8 = 0;
        local_100 = 0;
        uStack_f8 = 0;
        memset(local_e0,0,0x88);
        local_58 = 0x20702;
        local_d0 = 0;
        uStack_c8 = 0;
        local_54 = 1;
        FUN_1403d4c6e(param_2,&local_108);
        FUN_14493db24(&local_108);
        if (*(char *)(param_4 + 100) == '\0') {
          FUN_146948cd0(param_2,param_1 + 0x584);
        }
        fVar3 = *(float *)(param_1 + 0x338);
        fVar9 = (float)FUN_1469aaa10(DAT_14c98e618);
        if (fVar3 < fVar9) {
          local_108 = DAT_14c96b1e1;
          local_107 = 1;
          local_100 = 0;
          uStack_f8 = 0;
          (**(code **)(**(longlong **)(param_1 + 0x2c8) + 0x1c0))();
          local_120 = DAT_14c96b238;
          local_11f = 1;
          local_118 = 0;
          uStack_110 = 0;
          (**(code **)(**(longlong **)(param_1 + 0x2d8) + 0x1c0))();
          local_130 = *(undefined8 *)(param_1 + 0x2d8);
          plVar8 = *(longlong **)(param_1 + 0x2e0);
          if (plVar8 == (longlong *)0x0) {
            local_128 = (longlong *)0x0;
            FUN_140592b68(param_2,&local_130,2,0);
          }
          else {
            LOCK();
            *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
            UNLOCK();
            LOCK();
            *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
            UNLOCK();
            local_128 = plVar8;
            FUN_140592b68(param_2,&local_130,2,0);
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
      }
      goto LAB_148b330ec;
    }
  }
  else {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    if (lVar7 == DAT_14c966e98) {
      iVar4 = *(int *)(param_1 + 0x580);
      iVar5 = *(int *)(param_4 + 0x58);
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
      if (iVar4 == iVar5) goto LAB_148b32f1f;
    }
    else {
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
  *param_2 = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
LAB_148b330ec:
  if ((local_50 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b33252 FUN_148b33252 body=3604 status=ok
// SIG undefined FUN_148b33252(void)

undefined1 * FUN_148b33252(longlong param_1,undefined1 *param_2,float *param_3,longlong param_4)

{
  longlong lVar1;
  double dVar2;
  bool bVar3;
  char cVar4;
  undefined1 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined4 uVar12;
  longlong lVar13;
  float *pfVar14;
  ulonglong uVar15;
  longlong lVar16;
  float fVar17;
  undefined4 uVar18;
  double dVar19;
  undefined1 auVar20 [16];
  double dVar21;
  float fVar22;
  float fVar23;
  undefined4 uVar24;
  undefined1 auStack_148 [32];
  undefined4 local_128;
  undefined1 local_115;
  uint local_114;
  undefined1 local_110;
  undefined1 local_10f;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined1 local_f8;
  undefined1 local_f7;
  undefined8 local_f0;
  undefined8 uStack_e8;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_148;
  cVar4 = FUN_148b356d8();
  uVar5 = 0;
  if ((cVar4 == '\0') || (*(int *)(param_1 + 0x580) != *(int *)(param_4 + 0x58)))
  goto LAB_148b333fb;
  cVar4 = FUN_140591fd6();
  if (cVar4 == '\0') {
    *(undefined1 *)(param_1 + 0x5b9) = 0;
    *(undefined4 *)(param_1 + 0x580) = 0xffffffff;
    uVar5 = 0;
    goto LAB_148b333fb;
  }
  if (*(char *)(param_1 + 0x5b9) == '\0') {
    fVar22 = ABS(*(float *)(param_4 + 0x30)) + *(float *)(param_1 + 0x338);
    *(float *)(param_1 + 0x338) = fVar22;
    fVar17 = (float)FUN_1469aaa10(DAT_14c98e618);
    if (fVar17 < fVar22) {
      local_f8 = DAT_14c96b238;
      local_f7 = 1;
      local_f0 = 0;
      uStack_e8 = 0;
      (**(code **)(**(longlong **)(param_1 + 0x2c8) + 0x1c0))();
      local_110 = DAT_14c96b1e1;
      local_10f = 1;
      local_108 = 0;
      uStack_100 = 0;
      (**(code **)(**(longlong **)(param_1 + 0x2d8) + 0x1c0))();
      *(undefined1 *)(param_1 + 0x5b9) = 1;
      if ((*(int *)(param_1 + 0x2b0) != 0) && (*(longlong **)(param_1 + 0x2a8) != (longlong *)0x0))
      {
        (**(code **)(**(longlong **)(param_1 + 0x2a8) + 0x60))();
      }
    }
    *(ulonglong *)(param_1 + 0x584) =
         CONCAT44((int)ROUND(*(float *)(param_4 + 0x24) + *(float *)(param_4 + 0x24) + 0.5) >> 1,
                  (int)ROUND(*(float *)(param_4 + 0x20) + *(float *)(param_4 + 0x20) + 0.5) >> 1);
  }
  else {
    lVar16 = 0x7fffffffffffffff;
    fVar17 = *param_3 * param_3[2];
    if (fVar17 <= 100.0) {
      fVar17 = 100.0;
    }
    if ((*(byte *)(param_4 + 8) & 0x30) != 0) {
      fVar22 = *(float *)(param_4 + 0x30);
      if (((*(int *)(param_1 + 0x500) != 0) && (*(longlong **)(param_1 + 0x4f8) != (longlong *)0x0))
         && (cVar4 = (**(code **)(**(longlong **)(param_1 + 0x4f8) + 0x30))(), cVar4 != '\0')) {
        if (*(int *)(param_1 + 0x500) == 0) {
          plVar11 = (longlong *)0x0;
        }
        else {
          plVar11 = *(longlong **)(param_1 + 0x4f8);
        }
        uVar5 = (**(code **)(*plVar11 + 0x58))();
        *(undefined1 *)(param_1 + 0x4f0) = uVar5;
      }
      fVar22 = fVar22 / fVar17;
      if (*(char *)(param_1 + 0x4f0) == '\x01') {
        dVar2 = *(double *)(param_1 + 0x590);
        FUN_148b3545e(param_1 + 0x458);
        lVar9 = 0x7fffffffffffffff;
        if (*(char *)(param_1 + 0x460) != '\0') {
          lVar9 = *(longlong *)(param_1 + 0x458);
        }
        if (lVar9 == (longlong)dVar2) {
          FUN_148b350a6(param_1,fVar22,0);
          goto LAB_148b334cd;
        }
      }
      if (((*(int *)(param_1 + 0x518) != 0) && (*(longlong **)(param_1 + 0x510) != (longlong *)0x0))
         && (cVar4 = (**(code **)(**(longlong **)(param_1 + 0x510) + 0x30))(), cVar4 != '\0')) {
        if (*(int *)(param_1 + 0x518) == 0) {
          plVar11 = (longlong *)0x0;
        }
        else {
          plVar11 = *(longlong **)(param_1 + 0x510);
        }
        uVar5 = (**(code **)(*plVar11 + 0x58))();
        *(undefined1 *)(param_1 + 0x508) = uVar5;
      }
      if (*(char *)(param_1 + 0x508) == '\x01') {
        dVar2 = *(double *)(param_1 + 0x590);
        FUN_148b3545e(param_1 + 0x430);
        if (*(char *)(param_1 + 0x438) == '\0') {
          lVar9 = -0x8000000000000000;
        }
        else {
          lVar9 = *(longlong *)(param_1 + 0x430);
        }
        if (lVar9 == (longlong)dVar2) {
          FUN_148b35284(param_1,fVar22,0);
        }
      }
    }
LAB_148b334cd:
    lVar9 = param_1 + 0x458;
    FUN_148b3545e(lVar9);
    lVar13 = 0x7fffffffffffffff;
    if (*(char *)(param_1 + 0x460) != '\0') {
      lVar13 = *(longlong *)(param_1 + 0x458);
    }
    lVar1 = param_1 + 0x430;
    FUN_148b3545e(lVar1);
    if (*(char *)(param_1 + 0x438) == '\0') {
      lVar10 = -0x8000000000000000;
    }
    else {
      lVar10 = *(longlong *)(param_1 + 0x430);
    }
    dVar2 = *(double *)(&DAT_149f20770 + (ulonglong)(lVar13 - lVar10 < 0xb) * 8);
    if ((*(ushort *)(param_4 + 8) & 0xc) == 0) {
      if ((*(ushort *)(param_4 + 8) & 3) != 0) {
        pfVar14 = (float *)(param_1 + 0x360);
        if (*(int *)(param_1 + 0x370) != 0) {
          plVar11 = (longlong *)(param_1 + 0x368);
          if (((longlong *)*plVar11 != (longlong *)0x0) &&
             (cVar4 = (**(code **)(*(longlong *)*plVar11 + 0x30))(), cVar4 != '\0')) {
            iVar6 = *(int *)(param_1 + 0x370);
            goto joined_r0x000148b336fa;
          }
        }
        goto LAB_148b335c6;
      }
      uVar12 = 0;
      uVar15 = CONCAT71((int7)((ulonglong)(lVar13 - lVar10) >> 8),1);
    }
    else {
      pfVar14 = (float *)(param_1 + 0x378);
      if (*(int *)(param_1 + 0x388) != 0) {
        plVar11 = (longlong *)(param_1 + 0x380);
        if (((longlong *)*plVar11 != (longlong *)0x0) &&
           (cVar4 = (**(code **)(*(longlong *)*plVar11 + 0x30))(), cVar4 != '\0')) {
          iVar6 = *(int *)(param_1 + 0x388);
joined_r0x000148b336fa:
          if (iVar6 == 0) {
            plVar11 = (longlong *)0x0;
          }
          else {
            plVar11 = (longlong *)*plVar11;
          }
          fVar22 = (float)(**(code **)(*plVar11 + 0x58))();
          *pfVar14 = fVar22;
        }
      }
LAB_148b335c6:
      dVar2 = dVar2 * (double)*pfVar14;
      uVar12 = 4;
      uVar15 = 0;
    }
    if (*(char *)(param_1 + 0x2f8) == '\0') {
      if (*(char *)(param_1 + 0x3c8) == '\x01') {
        local_114 = (uint)uVar15;
        if (((*(int *)(param_1 + 0x3d8) != 0) &&
            (*(longlong **)(param_1 + 0x3d0) != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(**(longlong **)(param_1 + 0x3d0) + 0x30))(), cVar4 != '\0')) {
          if (*(int *)(param_1 + 0x3d8) == 0) {
            plVar11 = (longlong *)0x0;
          }
          else {
            plVar11 = *(longlong **)(param_1 + 0x3d0);
          }
          uVar8 = (**(code **)(*plVar11 + 0x58))();
          *(undefined8 *)(param_1 + 0x3c0) = uVar8;
        }
        lVar13 = *(longlong *)(param_1 + 0x3c0);
        FUN_148b3545e(lVar1);
        if (*(char *)(param_1 + 0x438) == '\0') {
          lVar10 = -0x8000000000000000;
        }
        else {
          lVar10 = *(longlong *)(param_1 + 0x430);
        }
        if (lVar10 < lVar13) {
          if (((*(int *)(param_1 + 0x3d8) != 0) &&
              (*(longlong **)(param_1 + 0x3d0) != (longlong *)0x0)) &&
             (cVar4 = (**(code **)(**(longlong **)(param_1 + 0x3d0) + 0x30))(), cVar4 != '\0')) {
            if (*(int *)(param_1 + 0x3d8) == 0) {
              plVar11 = (longlong *)0x0;
            }
            else {
              plVar11 = *(longlong **)(param_1 + 0x3d0);
            }
            uVar8 = (**(code **)(*plVar11 + 0x58))();
            *(undefined8 *)(param_1 + 0x3c0) = uVar8;
          }
          lVar13 = *(longlong *)(param_1 + 0x3c0);
          FUN_148b3545e(lVar9);
          if (*(char *)(param_1 + 0x460) != '\0') {
            lVar16 = *(longlong *)(param_1 + 0x458);
          }
          bVar3 = lVar13 < lVar16;
        }
        else {
          bVar3 = false;
        }
        uVar15 = (ulonglong)local_114;
      }
      else {
        bVar3 = false;
      }
      if (((*(int *)(param_1 + 0x3b8) != 0) && (*(longlong **)(param_1 + 0x3b0) != (longlong *)0x0))
         && (cVar4 = (**(code **)(**(longlong **)(param_1 + 0x3b0) + 0x30))(), cVar4 != '\0')) {
        if (*(int *)(param_1 + 0x3b8) == 0) {
          plVar11 = (longlong *)0x0;
        }
        else {
          plVar11 = *(longlong **)(param_1 + 0x3b0);
        }
        uVar7 = (**(code **)(*plVar11 + 0x58))();
        *(undefined4 *)(param_1 + 0x3a8) = uVar7;
      }
      fVar22 = *(float *)(param_1 + 0x3a8);
      FUN_148b3545e(lVar9);
      if (*(char *)(param_1 + 0x460) == '\0') {
        dVar21 = 4.611686018427388e+18;
      }
      else {
        dVar21 = (double)*(longlong *)(param_1 + 0x458) * 0.5;
      }
      FUN_148b3545e(lVar1);
      if (*(char *)(param_1 + 0x438) == '\0') {
        dVar19 = -4.611686018427388e+18;
      }
      else {
        dVar19 = (double)*(longlong *)(param_1 + 0x430) * 0.5;
      }
      dVar21 = (*(double *)(param_1 + 0x590) * 0.5 - dVar19) / (dVar21 - dVar19);
      if (1.0 <= dVar21) {
        dVar21 = 1.0;
      }
      if (dVar21 <= 0.0) {
        dVar21 = 0.0;
      }
      fVar23 = (float)dVar21;
      if (1e-08 < ABS(fVar22 + -1.0)) {
        if (bVar3) {
          FUN_148b3545e(lVar9);
          local_114 = CONCAT31(local_114._1_3_,*(undefined1 *)(param_1 + 0x460));
          FUN_148b3545e(lVar1);
          if (((*(int *)(param_1 + 0x3d8) != 0) &&
              (*(longlong **)(param_1 + 0x3d0) != (longlong *)0x0)) &&
             (local_115 = *(undefined1 *)(param_1 + 0x438),
             cVar4 = (**(code **)(**(longlong **)(param_1 + 0x3d0) + 0x30))(), cVar4 != '\0')) {
            if (*(int *)(param_1 + 0x3d8) == 0) {
              plVar11 = (longlong *)0x0;
            }
            else {
              plVar11 = *(longlong **)(param_1 + 0x3d0);
            }
            uVar8 = (**(code **)(*plVar11 + 0x58))();
            *(undefined8 *)(param_1 + 0x3c0) = uVar8;
          }
          fVar23 = (float)FUN_146a86e44();
        }
        else {
          fVar23 = powf(1.0 - fVar23,fVar22);
          fVar23 = 1.0 - fVar23;
        }
      }
      fVar23 = (float)(dVar2 * (double)*(float *)(param_4 + 0x30)) + fVar23 * fVar17;
      if (fVar17 <= fVar23) {
        fVar23 = fVar17;
      }
      if (fVar23 <= 0.0) {
        fVar23 = 0.0;
      }
      fVar23 = fVar23 / fVar17;
      if (1.0 <= fVar23) {
        fVar23 = 1.0;
      }
      if (fVar23 <= 0.0) {
        fVar23 = 0.0;
      }
      if (1e-08 < ABS(fVar22 + -1.0)) {
        if (bVar3) {
          FUN_148b3545e(lVar9);
          FUN_148b3545e(lVar1);
          if (((*(int *)(param_1 + 0x3d8) != 0) &&
              (*(longlong **)(param_1 + 0x3d0) != (longlong *)0x0)) &&
             (cVar4 = (**(code **)(**(longlong **)(param_1 + 0x3d0) + 0x30))(), cVar4 != '\0')) {
            if (*(int *)(param_1 + 0x3d8) == 0) {
              plVar11 = (longlong *)0x0;
            }
            else {
              plVar11 = *(longlong **)(param_1 + 0x3d0);
            }
            uVar8 = (**(code **)(*plVar11 + 0x58))();
            *(undefined8 *)(param_1 + 0x3c0) = uVar8;
          }
          fVar23 = (float)FUN_146a86e44();
        }
        else {
          fVar23 = powf(1.0 - fVar23,1.0 / fVar22);
          fVar23 = 1.0 - fVar23;
        }
      }
      FUN_148b3545e(lVar9);
      if (*(char *)(param_1 + 0x460) == '\0') {
        dVar2 = 9.223372036854776e+18;
      }
      else {
        dVar2 = (double)*(longlong *)(param_1 + 0x458);
      }
      FUN_148b3545e(lVar1);
      if (*(char *)(param_1 + 0x438) == '\0') {
        dVar21 = -9.223372036854776e+18;
      }
      else {
        dVar21 = (double)*(longlong *)(param_1 + 0x430);
      }
      dVar2 = dVar2 * (double)fVar23 + (double)(1.0 - fVar23) * dVar21;
    }
    else {
      dVar21 = (double)(&DAT_149931160)[0.0 < *(float *)(param_4 + 0x30)];
      if (*(char *)(param_1 + 0x394) == '\x01') {
        if (((*(int *)(param_1 + 0x3a0) == 0) ||
            (*(longlong **)(param_1 + 0x398) == (longlong *)0x0)) ||
           (cVar4 = (**(code **)(**(longlong **)(param_1 + 0x398) + 0x30))(), cVar4 == '\0')) {
          iVar6 = *(int *)(param_1 + 0x390);
        }
        else {
          if (*(int *)(param_1 + 0x3a0) == 0) {
            plVar11 = (longlong *)0x0;
          }
          else {
            plVar11 = *(longlong **)(param_1 + 0x398);
          }
          iVar6 = (**(code **)(*plVar11 + 0x58))();
          *(int *)(param_1 + 0x390) = iVar6;
        }
        if ((iVar6 == 0) || (*(char *)(param_1 + 0x348) != '\x01')) goto LAB_148b3382d;
        if ((*(int *)(param_1 + 0x358) == 0) ||
           ((*(longlong **)(param_1 + 0x350) == (longlong *)0x0 ||
            (cVar4 = (**(code **)(**(longlong **)(param_1 + 0x350) + 0x30))(), cVar4 == '\0')))) {
          lVar16 = *(longlong *)(param_1 + 0x340);
        }
        else {
          if (*(int *)(param_1 + 0x358) == 0) {
            plVar11 = (longlong *)0x0;
          }
          else {
            plVar11 = *(longlong **)(param_1 + 0x350);
          }
          lVar16 = (**(code **)(*plVar11 + 0x58))();
          *(longlong *)(param_1 + 0x340) = lVar16;
        }
        if (lVar16 < 1) goto LAB_148b3382d;
        fVar17 = *(float *)(param_4 + 0x30);
        if (((*(int *)(param_1 + 0x3a0) != 0) &&
            (*(longlong **)(param_1 + 0x398) != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(**(longlong **)(param_1 + 0x398) + 0x30))(), cVar4 != '\0')) {
          if (*(int *)(param_1 + 0x3a0) == 0) {
            plVar11 = (longlong *)0x0;
          }
          else {
            plVar11 = *(longlong **)(param_1 + 0x398);
          }
          uVar7 = (**(code **)(*plVar11 + 0x58))();
          *(undefined4 *)(param_1 + 0x390) = uVar7;
        }
        fVar17 = fVar17 / (float)*(int *)(param_1 + 0x390);
        uVar7 = (undefined4)*(undefined8 *)(param_1 + 0x590);
        uVar24 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x590) >> 0x20);
        if (((*(int *)(param_1 + 0x3b8) != 0) &&
            (*(longlong **)(param_1 + 0x3b0) != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(**(longlong **)(param_1 + 0x3b0) + 0x30))(), cVar4 != '\0')) {
          if (*(int *)(param_1 + 0x3b8) == 0) {
            plVar11 = (longlong *)0x0;
          }
          else {
            plVar11 = *(longlong **)(param_1 + 0x3b0);
          }
          uVar18 = (**(code **)(*plVar11 + 0x58))();
          *(undefined4 *)(param_1 + 0x3a8) = uVar18;
        }
        fVar22 = *(float *)(param_1 + 0x3a8);
        if (((*(int *)(param_1 + 0x358) != 0) &&
            (*(longlong **)(param_1 + 0x350) != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(**(longlong **)(param_1 + 0x350) + 0x30))(), cVar4 != '\0')) {
          if (*(int *)(param_1 + 0x358) == 0) {
            plVar11 = (longlong *)0x0;
          }
          else {
            plVar11 = *(longlong **)(param_1 + 0x350);
          }
          uVar8 = (**(code **)(*plVar11 + 0x58))();
          *(undefined8 *)(param_1 + 0x340) = uVar8;
        }
        dVar19 = (double)*(longlong *)(param_1 + 0x340);
      }
      else {
LAB_148b3382d:
        fVar17 = *(float *)(param_4 + 0x30) / fVar17;
        dVar19 = *(double *)(param_1 + 0x590);
        uVar7 = SUB84(dVar19,0);
        uVar24 = (undefined4)((ulonglong)dVar19 >> 0x20);
        dVar19 = ABS(dVar19);
        if (9.223372036854776e+18 <= dVar19) {
          dVar19 = 9.223372036854776e+18;
        }
        if (dVar19 <= 1.0) {
          dVar19 = 1.0;
        }
        if (((*(int *)(param_1 + 0x3b8) != 0) &&
            (*(longlong **)(param_1 + 0x3b0) != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(**(longlong **)(param_1 + 0x3b0) + 0x30))(), cVar4 != '\0')) {
          if (*(int *)(param_1 + 0x3b8) == 0) {
            plVar11 = (longlong *)0x0;
          }
          else {
            plVar11 = *(longlong **)(param_1 + 0x3b0);
          }
          uVar18 = (**(code **)(*plVar11 + 0x58))();
          *(undefined4 *)(param_1 + 0x3a8) = uVar18;
        }
        fVar22 = *(float *)(param_1 + 0x3a8);
      }
      dVar19 = pow(dVar19,(double)fVar22);
      dVar2 = dVar21 * (double)ABS(fVar17) * dVar19 * dVar2 + (double)CONCAT44(uVar24,uVar7);
    }
    if (DAT_14c75ef58 == '\x01') {
      if ((char)uVar15 != '\0') {
        FUN_148b3545e(lVar9);
        if (*(char *)(param_1 + 0x460) == '\0') {
          dVar21 = 9.223372036854776e+18;
        }
        else {
          dVar21 = (double)*(longlong *)(param_1 + 0x458);
        }
        FUN_148b3545e(lVar1);
        if (*(char *)(param_1 + 0x438) == '\0') {
          dVar19 = -9.223372036854776e+18;
        }
        else {
          dVar19 = (double)*(longlong *)(param_1 + 0x430);
        }
        if (dVar21 <= dVar2) {
          dVar2 = dVar21;
        }
        if (dVar2 <= dVar19) {
          dVar2 = dVar19;
        }
      }
      FUN_148b3545e(param_1 + 0x408);
      if (*(char *)(param_1 + 0x410) == '\0') {
        dVar21 = 9.223372036854776e+18;
      }
      else {
        dVar21 = (double)*(longlong *)(param_1 + 0x408);
      }
      FUN_148b3545e(param_1 + 0x3e0);
      if (*(char *)(param_1 + 1000) == '\0') {
        dVar19 = -9.223372036854776e+18;
      }
      else {
        dVar19 = (double)*(longlong *)(param_1 + 0x3e0);
      }
      if (dVar21 <= dVar2) {
        dVar2 = dVar21;
      }
      if (dVar2 <= dVar19) {
        dVar2 = dVar19;
      }
      *(double *)(param_1 + 0x590) = dVar2;
      *(double *)(param_1 + 0x5c0) = dVar2;
      *(undefined4 *)(param_1 + 0x5c8) = uVar12;
      *(undefined1 *)(param_1 + 0x5d0) = 1;
    }
    else {
      auVar20._0_8_ = dVar2 + 0.5;
      auVar20._8_8_ = 0;
      auVar20 = roundpd(auVar20,auVar20,1);
      dVar21 = auVar20._0_8_;
      if (9007199254740992.0 <= dVar21) {
        dVar21 = 9007199254740992.0;
      }
      if (dVar21 <= -9007199254740992.0) {
        dVar21 = -9007199254740992.0;
      }
      local_128 = 1;
      FUN_143faaf46(param_1,(longlong)dVar21,dVar2,uVar12);
    }
  }
  uVar5 = 1;
LAB_148b333fb:
  *param_2 = uVar5;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  if ((local_e0 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 148b34068 FUN_148b34068 body=875 status=ok
// SIG undefined FUN_148b34068(void)

undefined1 *
FUN_148b34068(longlong *param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  int iVar1;
  longlong lVar2;
  double dVar3;
  undefined1 uVar4;
  char cVar5;
  longlong *plVar6;
  float *pfVar7;
  float fVar8;
  undefined1 auVar9 [16];
  double dVar10;
  undefined1 unaff_XMM7 [16];
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  longlong local_a0;
  longlong local_98 [2];
  longlong *local_88 [2];
  longlong *local_78 [2];
  undefined1 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (((*(char *)((longlong)param_1 + 0x5bc) != '\x01') || ((int)param_1[0xb0] != -1)) ||
     (cVar5 = (**(code **)(*param_1 + 0x198))(param_1), cVar5 == '\0')) {
    uVar4 = 0;
    goto LAB_148b340b1;
  }
  dVar3 = 1.0;
  if ((char)param_1[0xa6] == '\x01') {
    plVar6 = param_1 + 0xa4;
    FUN_148b3545e(plVar6);
    dVar3 = 1.0;
    if ((char)param_1[0xa5] == '\x01') {
      FUN_148b3545e(plVar6);
      dVar3 = (double)*plVar6;
    }
  }
  if ((*(ushort *)(param_4 + 8) & 0xc) == 0) {
    if ((*(ushort *)(param_4 + 8) & 3) != 0) {
      pfVar7 = (float *)(param_1 + 0x6c);
      if ((int)param_1[0x6e] != 0) {
        plVar6 = param_1 + 0x6d;
        if (((longlong *)*plVar6 != (longlong *)0x0) &&
           (cVar5 = (**(code **)(*(longlong *)*plVar6 + 0x30))(), cVar5 != '\0')) {
          iVar1 = (int)param_1[0x6e];
          goto joined_r0x000148b34396;
        }
      }
      goto LAB_148b34199;
    }
  }
  else {
    pfVar7 = (float *)(param_1 + 0x6f);
    if ((int)param_1[0x71] != 0) {
      plVar6 = param_1 + 0x70;
      if (((longlong *)*plVar6 != (longlong *)0x0) &&
         (cVar5 = (**(code **)(*(longlong *)*plVar6 + 0x30))(), cVar5 != '\0')) {
        iVar1 = (int)param_1[0x71];
joined_r0x000148b34396:
        if (iVar1 == 0) {
          plVar6 = (longlong *)0x0;
        }
        else {
          plVar6 = (longlong *)*plVar6;
        }
        fVar8 = (float)(**(code **)(*plVar6 + 0x58))();
        *pfVar7 = fVar8;
      }
    }
LAB_148b34199:
    dVar3 = dVar3 * (double)*pfVar7;
  }
  dVar3 = dVar3 * (double)(&DAT_149931160)[0.0 < *(float *)(param_4 + 0x6c)] + (double)param_1[0xb2]
  ;
  auVar9._0_8_ = dVar3 + 0.5;
  auVar9._8_8_ = 0;
  auVar9 = roundpd(unaff_XMM7,auVar9,1);
  dVar10 = auVar9._0_8_;
  if (9007199254740992.0 <= dVar10) {
    dVar10 = 9007199254740992.0;
  }
  lVar2 = param_1[0x5b];
  local_a0 = (longlong)dVar3;
  (**(code **)(*(longlong *)param_1[0x5d] + 0x28))((longlong *)param_1[0x5d],local_98);
  FUN_140233b1a(local_88,local_98);
  FUN_14023423e(local_78,local_88);
  local_68 = 1;
  local_60 = 0;
  uStack_58 = 0;
  FUN_146a5407e(lVar2,local_78);
  FUN_1449db362(&local_60);
  if (local_78[0] != (longlong *)0x0) {
    (**(code **)(*local_78[0] + 0x10))();
  }
  if (dVar10 <= -9007199254740992.0) {
    dVar10 = -9007199254740992.0;
  }
  if (local_88[0] != (longlong *)0x0) {
    (**(code **)(*local_88[0] + 0x10))();
  }
  if (local_98[0] != 0) {
    FUN_1400020a8();
  }
  local_a8 = 1;
  FUN_143faaf46(param_1,(longlong)dVar10,dVar3,0);
  lVar2 = param_1[0x5b];
  local_a0 = (longlong)(double)param_1[0xb2];
  (**(code **)(*(longlong *)param_1[0x5d] + 0x28))((longlong *)param_1[0x5d],local_98);
  FUN_140233b1a(local_88,local_98);
  FUN_14023423e(local_78,local_88);
  local_68 = 1;
  local_60 = 0;
  uStack_58 = 0;
  FUN_146a5407e(lVar2);
  FUN_1449db362(&local_60);
  if (local_78[0] != (longlong *)0x0) {
    (**(code **)(*local_78[0] + 0x10))();
  }
  if (local_88[0] != (longlong *)0x0) {
    (**(code **)(*local_88[0] + 0x10))();
  }
  if (local_98[0] != 0) {
    FUN_1400020a8();
  }
  uVar4 = 1;
LAB_148b340b1:
  *param_2 = uVar4;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  if ((local_50 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 148b343d4 FUN_148b343d4 body=117 status=ok
// SIG undefined FUN_148b343d4(void)

undefined1 * FUN_148b343d4(longlong param_1,undefined1 *param_2)

{
  char cVar1;
  
  cVar1 = FUN_148b356d8();
  if (cVar1 == '\0') {
    *param_2 = 1;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    *(undefined8 *)(param_2 + 0x18) = 0;
    *(undefined8 *)(param_2 + 0x20) = 0;
    *(undefined8 *)(param_2 + 0x28) = 0;
    *(undefined8 *)(param_2 + 0x30) = 0;
    *(undefined4 *)(param_2 + 0x38) = 1;
  }
  else {
    cVar1 = *(char *)(param_1 + 0x5b9);
    *param_2 = 1;
    if (cVar1 == '\x01') {
      *(undefined8 *)(param_2 + 0x28) = 0;
      *(undefined8 *)(param_2 + 0x30) = 0;
      *(undefined8 *)(param_2 + 0x18) = 0;
      *(undefined8 *)(param_2 + 0x20) = 0;
      *(undefined8 *)(param_2 + 8) = 0;
      *(undefined8 *)(param_2 + 0x10) = 0;
      *(undefined4 *)(param_2 + 0x38) = 0;
    }
    else {
      *(undefined8 *)(param_2 + 0x28) = 0;
      *(undefined8 *)(param_2 + 0x30) = 0;
      *(undefined8 *)(param_2 + 0x18) = 0;
      *(undefined8 *)(param_2 + 0x20) = 0;
      *(undefined8 *)(param_2 + 8) = 0;
      *(undefined8 *)(param_2 + 0x10) = 0;
      *(undefined4 *)(param_2 + 0x38) = 3;
    }
  }
  return param_2;
}



// FUNCTION 148b3444e FUN_148b3444e body=58 status=ok
// SIG undefined FUN_148b3444e(void)

undefined8 FUN_148b3444e(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_14697dddc();
  uVar2 = 1;
  if (cVar1 == '\0') {
    if (*(longlong **)(param_1 + 0x2d8) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148b3447d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(**(longlong **)(param_1 + 0x2d8) + 0x198))();
      return uVar2;
    }
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 148b34488 FUN_148b34488 body=2138 status=ok
// SIG undefined FUN_148b34488(void)

int FUN_148b34488(longlong param_1,undefined8 param_2,float *param_3,undefined8 param_4,
                 undefined8 param_5,int param_6,float *param_7,char param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  char cVar8;
  double dVar9;
  double dVar10;
  char cVar11;
  char cVar12;
  int iVar13;
  undefined8 in_RAX;
  undefined8 uVar14;
  float *pfVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  uint uVar19;
  longlong *plVar20;
  char cVar21;
  undefined4 uVar22;
  float fVar23;
  float fVar24;
  undefined1 auStack_168 [32];
  undefined8 local_148;
  float *local_140;
  float *local_138;
  undefined1 local_130;
  undefined4 local_124;
  longlong local_120;
  longlong local_118;
  longlong local_110;
  undefined8 local_108;
  undefined8 local_100;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  undefined8 local_e8;
  float local_e0;
  undefined8 local_dc;
  undefined8 local_d4;
  float local_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  undefined8 local_bc;
  byte local_b4;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_168;
  if ((*(char *)(param_1 + 0x5b9) == '\0') &&
     (*(char *)(*(longlong *)(param_1 + 0x2d8) + 0x39) != DAT_14c96b238)) {
    uVar19 = *(byte *)(param_1 + 0x3b) ^ 1;
    lVar18 = (ulonglong)uVar19 * 8 + 0x328;
    plVar20 = (longlong *)((ulonglong)(uVar19 << 4) + param_1 + 0x308);
  }
  else {
    plVar20 = (longlong *)(param_1 + 0x310);
    lVar18 = 800;
  }
  lVar16 = *plVar20;
  if (param_8 == '\0') {
    cVar21 = ' ';
    local_124 = 0;
  }
  else {
    local_124 = (undefined4)CONCAT71((int7)((ulonglong)in_RAX >> 8),*(byte *)(param_1 + 0x3a));
    cVar21 = (*(byte *)(param_1 + 0x3a) ^ 1) << 5;
  }
  local_110 = *(longlong *)(param_1 + lVar18);
  pfVar15 = (float *)(lVar16 + 8);
  cVar11 = *(char *)(lVar16 + 0x18);
  local_108 = param_2;
  local_100 = param_4;
  if (cVar11 != '\0') {
    if (cVar11 == '\x01') {
      pfVar15 = (float *)FUN_1400c06fe(pfVar15);
    }
    else if (cVar11 == '\x03') {
      pfVar15 = param_7 + 8;
    }
    else {
      pfVar15 = param_7 + 4;
    }
  }
  local_ec = pfVar15[3] * param_7[3];
  local_f0 = pfVar15[2] * param_7[2];
  local_f4 = pfVar15[1] * param_7[1];
  local_f8 = *pfVar15 * *param_7;
  local_d4 = *(undefined8 *)param_3;
  local_e8 = *(undefined8 *)(param_3 + 3);
  local_e0 = param_3[2];
  local_dc = 0;
  local_cc = param_3[7];
  fStack_c8 = param_3[8];
  fStack_c4 = param_3[9];
  fStack_c0 = param_3[10];
  local_bc = *(undefined8 *)(param_3 + 0xb);
  local_b4 = *(char *)(param_3 + 0xd) * '\x02' & 2;
  local_148 = CONCAT71(local_148._1_7_,cVar21);
  local_140 = &local_f8;
  FUN_140239bd2(param_5,param_6,&local_e8,lVar16);
  param_6 = param_6 + 1;
  if (*(char *)(param_1 + 0x2f8) != '\0') goto LAB_148b34660;
  if (((*(int *)(param_1 + 0x280) != 0) && (*(longlong **)(param_1 + 0x278) != (longlong *)0x0)) &&
     (cVar11 = (**(code **)(**(longlong **)(param_1 + 0x278) + 0x30))(), cVar11 != '\0')) {
    if (*(int *)(param_1 + 0x280) == 0) {
      plVar20 = (longlong *)0x0;
    }
    else {
      plVar20 = *(longlong **)(param_1 + 0x278);
    }
    uVar14 = (**(code **)(*plVar20 + 0x58))();
    *(undefined8 *)(param_1 + 0x268) = uVar14;
  }
  lVar18 = *(longlong *)(param_1 + 0x268);
  if (((*(int *)(param_1 + 0x358) == 0) || (*(longlong **)(param_1 + 0x350) == (longlong *)0x0)) ||
     (cVar11 = (**(code **)(**(longlong **)(param_1 + 0x350) + 0x30))(), cVar11 == '\0')) {
    lVar16 = *(longlong *)(param_1 + 0x340);
  }
  else {
    if (*(int *)(param_1 + 0x358) == 0) {
      plVar20 = (longlong *)0x0;
    }
    else {
      plVar20 = *(longlong **)(param_1 + 0x350);
    }
    lVar16 = (**(code **)(*plVar20 + 0x58))();
    *(longlong *)(param_1 + 0x340) = lVar16;
  }
  if (lVar16 != 0) {
    lVar18 = lVar16 / 2 + lVar18;
    lVar18 = lVar18 - lVar18 % lVar16;
  }
  lVar16 = param_1 + 0x458;
  FUN_148b3545e(lVar16);
  local_118 = param_1 + 0x430;
  if (*(char *)(param_1 + 0x460) == '\0') {
    dVar9 = 4.611686018427388e+18;
  }
  else {
    dVar9 = (double)*(longlong *)(param_1 + 0x458) * 0.5;
  }
  FUN_148b3545e();
  if (*(char *)(param_1 + 0x438) == '\0') {
    dVar10 = -4.611686018427388e+18;
  }
  else {
    dVar10 = (double)*(longlong *)(param_1 + 0x430) * 0.5;
  }
  dVar9 = ((double)lVar18 * 0.5 - dVar10) / (dVar9 - dVar10);
  if (1.0 <= dVar9) {
    dVar9 = 1.0;
  }
  if (dVar9 <= 0.0) {
    dVar9 = 0.0;
  }
  if (((*(int *)(param_1 + 0x3b8) != 0) && (*(longlong **)(param_1 + 0x3b0) != (longlong *)0x0)) &&
     (cVar11 = (**(code **)(**(longlong **)(param_1 + 0x3b0) + 0x30))(), cVar11 != '\0')) {
    if (*(int *)(param_1 + 0x3b8) == 0) {
      plVar20 = (longlong *)0x0;
    }
    else {
      plVar20 = *(longlong **)(param_1 + 0x3b0);
    }
    uVar22 = (**(code **)(*plVar20 + 0x58))();
    *(undefined4 *)(param_1 + 0x3a8) = uVar22;
  }
  fVar24 = (float)dVar9;
  fVar1 = *(float *)(param_1 + 0x3a8);
  if (1e-08 < ABS(fVar1 + -1.0)) {
    if (*(char *)(param_1 + 0x3c8) == '\x01') {
      if (((*(int *)(param_1 + 0x3d8) != 0) && (*(longlong **)(param_1 + 0x3d0) != (longlong *)0x0))
         && (cVar11 = (**(code **)(**(longlong **)(param_1 + 0x3d0) + 0x30))(), cVar11 != '\0')) {
        if (*(int *)(param_1 + 0x3d8) == 0) {
          plVar20 = (longlong *)0x0;
        }
        else {
          plVar20 = *(longlong **)(param_1 + 0x3d0);
        }
        uVar14 = (**(code **)(*plVar20 + 0x58))();
        *(undefined8 *)(param_1 + 0x3c0) = uVar14;
      }
      lVar18 = *(longlong *)(param_1 + 0x3c0);
      FUN_148b3545e(local_118);
      if (*(char *)(param_1 + 0x438) == '\0') {
        lVar17 = -0x8000000000000000;
      }
      else {
        lVar17 = *(longlong *)(param_1 + 0x430);
      }
      if (lVar17 < lVar18) {
        local_120 = 0x7fffffffffffffff;
        if (((*(int *)(param_1 + 0x3d8) != 0) &&
            (*(longlong **)(param_1 + 0x3d0) != (longlong *)0x0)) &&
           (cVar11 = (**(code **)(**(longlong **)(param_1 + 0x3d0) + 0x30))(), cVar11 != '\0')) {
          if (*(int *)(param_1 + 0x3d8) == 0) {
            plVar20 = (longlong *)0x0;
          }
          else {
            plVar20 = *(longlong **)(param_1 + 0x3d0);
          }
          uVar14 = (**(code **)(*plVar20 + 0x58))();
          *(undefined8 *)(param_1 + 0x3c0) = uVar14;
        }
        lVar18 = *(longlong *)(param_1 + 0x3c0);
        FUN_148b3545e(lVar16);
        if (*(char *)(param_1 + 0x460) != '\0') {
          local_120 = *(longlong *)(param_1 + 0x458);
        }
        if (lVar18 < local_120) {
          FUN_148b3545e(lVar16);
          cVar11 = *(char *)(param_1 + 0x460);
          lVar18 = *(longlong *)(param_1 + 0x458);
          FUN_148b3545e(local_118);
          cVar8 = *(char *)(param_1 + 0x438);
          lVar16 = *(longlong *)(param_1 + 0x430);
          if (((*(int *)(param_1 + 0x3d8) != 0) &&
              (*(longlong **)(param_1 + 0x3d0) != (longlong *)0x0)) &&
             (cVar12 = (**(code **)(**(longlong **)(param_1 + 0x3d0) + 0x30))(), cVar12 != '\0')) {
            if (*(int *)(param_1 + 0x3d8) == 0) {
              plVar20 = (longlong *)0x0;
            }
            else {
              plVar20 = *(longlong **)(param_1 + 0x3d0);
            }
            uVar14 = (**(code **)(*plVar20 + 0x58))();
            *(undefined8 *)(param_1 + 0x3c0) = uVar14;
          }
          if (cVar11 == '\0') {
            dVar9 = 4.611686018427388e+18;
          }
          else {
            dVar9 = (double)lVar18 * 0.5;
          }
          if (cVar8 == '\0') {
            dVar10 = -4.611686018427388e+18;
          }
          else {
            dVar10 = (double)lVar16 * 0.5;
          }
          dVar9 = ((double)*(longlong *)(param_1 + 0x3c0) * 0.5 - dVar10) / (dVar9 - dVar10);
          if (1.0 <= dVar9) {
            dVar9 = 1.0;
          }
          if (dVar9 <= 0.0) {
            dVar9 = 0.0;
          }
          fVar24 = (float)FUN_146a86e44(fVar24,(float)dVar9,fVar1);
          goto LAB_148b348d4;
        }
      }
    }
    fVar24 = powf(1.0 - fVar24,fVar1);
    fVar24 = 1.0 - fVar24;
  }
LAB_148b348d4:
  lVar18 = local_110;
  if (*(char *)(*(longlong *)(param_1 + 0x2d8) + 0x39) != DAT_14c96b238) {
    fVar1 = *param_3;
    fVar2 = param_3[1];
    pfVar15 = (float *)(local_110 + 8);
    cVar11 = *(char *)(local_110 + 0x18);
    if (cVar11 != '\0') {
      if (cVar11 == '\x01') {
        pfVar15 = (float *)FUN_1400c06fe(pfVar15);
      }
      else if (cVar11 == '\x03') {
        pfVar15 = param_7 + 8;
      }
      else {
        pfVar15 = param_7 + 4;
      }
    }
    local_ec = pfVar15[3] * param_7[3];
    local_f0 = pfVar15[2] * param_7[2];
    local_f4 = pfVar15[1] * param_7[1];
    local_f8 = *pfVar15 * *param_7;
    lVar16 = *(longlong *)(param_1 + 0x300);
    fVar3 = *(float *)(lVar16 + 0x504);
    fVar4 = *(float *)(lVar16 + 0x508);
    local_e0 = param_3[2];
    local_cc = param_3[7];
    local_e8 = CONCAT44(fVar4 * local_e0 + param_3[4],fVar3 * local_e0 + param_3[3]);
    fVar5 = param_3[8];
    fVar6 = param_3[10];
    fVar7 = param_3[9];
    fVar23 = fVar3 * local_cc + fVar4 * fVar7 + param_3[0xb];
    fStack_c0 = fVar5 * 0.0 + fVar6;
    fStack_c4 = local_cc * 0.0 + fVar7;
    fStack_c8 = fVar6 * 0.0 + fVar5;
    local_cc = fVar7 * 0.0 + local_cc;
    local_dc = 0;
    local_d4 = CONCAT44(fVar2 - (*(float *)(lVar16 + 0x510) + fVar4),
                        fVar24 * fVar1 - (*(float *)(lVar16 + 0x50c) + fVar3));
    local_bc = CONCAT44(fVar3 * fVar5 + fVar4 * fVar6 + param_3[0xc],fVar23);
    local_b4 = local_b4 & 0xfc | *(char *)(param_3 + 0xd) * '\x02' & 2U;
    local_148 = CONCAT71(local_148._1_7_,cVar21);
    local_140 = &local_f8;
    FUN_140239bd2(fVar23,param_6,&local_e8,lVar18);
  }
LAB_148b34660:
  local_130 = (undefined1)local_124;
  local_138 = param_7;
  local_140 = (float *)CONCAT44(local_140._4_4_,param_6);
  local_148 = param_5;
  iVar13 = FUN_1400c0302(param_1,local_108,param_3,local_100);
  if (param_6 < iVar13) {
    param_6 = iVar13;
  }
  if ((local_b0 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_6;
}



// FUNCTION 148b34ce4 FUN_148b34ce4 body=699 status=ok
// SIG undefined FUN_148b34ce4(void)

void FUN_148b34ce4(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b55e8c0;
  if ((*(char *)((longlong)param_1 + 0x5b9) != '\0') || (*(int *)(param_1 + 0xb0) != -1)) {
    *(undefined1 *)((longlong)param_1 + 0x5b9) = 0;
    *(undefined4 *)(param_1 + 0xb0) = 0xffffffff;
    param_1[0xb2] = (double)(longlong)param_1[0xb3];
    FUN_148b34fa0(param_1);
  }
  if (*(char *)(param_1 + 0xba) == '\x01') {
    *(undefined1 *)(param_1 + 0xba) = 0;
  }
  if (param_1[0xb5] != 0) {
    FUN_1400020a8();
  }
  FUN_1449db362(param_1 + 0xae);
  FUN_1449db362(param_1 + 0xab);
  FUN_1449db362(param_1 + 0xa9);
  FUN_1449db362(param_1 + 0xa7);
  if (*(char *)(param_1 + 0xa5) == '\x01') {
    *(undefined1 *)(param_1 + 0xa5) = 0;
  }
  FUN_1449db362(param_1 + 0xa2);
  FUN_1449db362(param_1 + 0x9f);
  FUN_1449db362(param_1 + 0x9c);
  FUN_1449db362(param_1 + 0x99);
  FUN_1449db362(param_1 + 0x96);
  if (*(char *)((longlong)param_1 + 0x4a4) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x4a4) = 0;
  }
  FUN_1449db362(param_1 + 0x92);
  if (*(char *)((longlong)param_1 + 0x484) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x484) = 0;
  }
  FUN_1449db362(param_1 + 0x8e);
  if (*(char *)(param_1 + 0x8c) == '\x01') {
    *(undefined1 *)(param_1 + 0x8c) = 0;
  }
  FUN_1449db362(param_1 + 0x89);
  if (*(char *)(param_1 + 0x87) == '\x01') {
    *(undefined1 *)(param_1 + 0x87) = 0;
  }
  FUN_1449db362(param_1 + 0x84);
  if (*(char *)(param_1 + 0x82) == '\x01') {
    *(undefined1 *)(param_1 + 0x82) = 0;
  }
  FUN_1449db362(param_1 + 0x7f);
  if (*(char *)(param_1 + 0x7d) == '\x01') {
    *(undefined1 *)(param_1 + 0x7d) = 0;
  }
  FUN_1449db362(param_1 + 0x7a);
  FUN_1449db362(param_1 + 0x76);
  FUN_1449db362(param_1 + 0x73);
  FUN_1449db362(param_1 + 0x70);
  FUN_1449db362(param_1 + 0x6d);
  FUN_1449db362(param_1 + 0x6a);
  plVar3 = (longlong *)param_1[0x5e];
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
  plVar3 = (longlong *)param_1[0x5c];
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
  plVar3 = (longlong *)param_1[0x5a];
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
  FUN_1449db362(param_1 + 0x57);
  FUN_1449db362(param_1 + 0x55);
  FUN_1449db362(param_1 + 0x53);
  FUN_1449db362(param_1 + 0x51);
  FUN_1449db362(param_1 + 0x4f);
  *param_1 = &PTR_FUN_149eeeb00;
  FUN_140cc7538(param_1 + 0x3f);
  FUN_140c057ec(param_1);
  return;
}



// FUNCTION 148b34fa0 FUN_148b34fa0 body=96 status=ok
// SIG undefined FUN_148b34fa0(void)

void FUN_148b34fa0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  if ((*(int *)(param_1 + 0x2a0) != 0) &&
     (plVar1 = *(longlong **)(param_1 + 0x298), plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x60))(plVar1,param_2,1);
  }
  if ((*(int *)(param_1 + 0x2c0) != 0) &&
     (plVar1 = *(longlong **)(param_1 + 0x2b8), plVar1 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000148b34ff5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x60))(plVar1,param_2);
    return;
  }
  return;
}



// FUNCTION 148b35000 FUN_148b35000 body=82 status=ok
// SIG undefined FUN_148b35000(void)

void FUN_148b35000(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (*(int *)(param_1 + 3) != 0) {
    puVar1 = (undefined8 *)param_1[2];
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,0);
      FUN_1446efa72(param_1 + 2,0,0,0x10);
      *(undefined4 *)(param_1 + 3) = 0;
    }
  }
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}



// FUNCTION 148b35052 FUN_148b35052 body=83 status=ok
// SIG undefined FUN_148b35052(void)

undefined1 FUN_148b35052(longlong param_1)

{
  char cVar1;
  undefined1 uVar2;
  longlong *plVar3;
  
  if ((*(int *)(param_1 + 0x4d0) != 0) && (*(longlong **)(param_1 + 0x4c8) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x4c8) + 0x30))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x4d0) == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)(param_1 + 0x4c8);
      }
      uVar2 = (**(code **)(*plVar3 + 0x58))();
      *(undefined1 *)(param_1 + 0x4c0) = uVar2;
    }
  }
  return *(undefined1 *)(param_1 + 0x4c0);
}



// FUNCTION 148b350a6 FUN_148b350a6 body=477 status=ok
// SIG undefined FUN_148b350a6(void)

void FUN_148b350a6(longlong param_1,float param_2,byte param_3)

{
  int *piVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_a8 [32];
  byte local_88;
  longlong local_78;
  longlong *local_70;
  undefined1 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar8 = -0x8000000000000000;
  if (*(char *)(param_1 + 0x468) == '\x01') {
    lVar2 = param_1 + 0x458;
    FUN_148b3545e(lVar2);
    if (*(char *)(param_1 + 0x460) == '\x01') {
      FUN_148b3545e(lVar2);
      if (*(char *)(param_1 + 0x460) == '\0') {
        lVar8 = 0x7fffffffffffffff;
      }
      else {
        lVar8 = *(longlong *)(param_1 + 0x458);
      }
      lVar10 = (longlong)param_2 + lVar8;
      FUN_148b3545e(lVar2);
      if (((byte)(param_3 ^ 1 | *(longlong *)(param_1 + 0x458) < lVar10 & *(byte *)(param_1 + 0x460)
                 ) == 1) &&
         (((lVar8 = lVar10, *(int *)(param_1 + 0x478) == 0 ||
           (*(longlong **)(param_1 + 0x470) == (longlong *)0x0)) ||
          (cVar5 = (**(code **)(**(longlong **)(param_1 + 0x470) + 0x30))(), cVar5 == '\0')))) {
        local_70 = (longlong *)CONCAT71(local_70._1_7_,1);
        local_68 = 1;
        local_60 = 0;
        uStack_58 = 0;
        local_78 = lVar10;
        FUN_148b354f0(param_1);
        FUN_1449db362(&local_60);
      }
    }
  }
  if (((*(int *)(param_1 + 0x550) != 0) && (*(longlong **)(param_1 + 0x548) != (longlong *)0x0)) &&
     (cVar5 = (**(code **)(**(longlong **)(param_1 + 0x548) + 0x30))(), cVar5 != '\0')) {
    plVar9 = *(longlong **)(param_1 + 0x10);
    bVar3 = true;
    if (plVar9 == (longlong *)0x0) {
LAB_148b3513e:
      local_78 = 0;
      plVar9 = (longlong *)0x0;
    }
    else {
      iVar6 = (int)plVar9[1];
      do {
        if (iVar6 == 0) goto LAB_148b3513e;
        LOCK();
        iVar4 = (int)plVar9[1];
        bVar11 = iVar6 == iVar4;
        if (bVar11) {
          *(int *)(plVar9 + 1) = iVar6 + 1;
          iVar4 = iVar6;
        }
        iVar6 = iVar4;
        UNLOCK();
      } while (!bVar11);
      local_78 = *(longlong *)(param_1 + 8);
      LOCK();
      *(int *)((longlong)plVar9 + 0xc) = *(int *)((longlong)plVar9 + 0xc) + 1;
      UNLOCK();
      bVar3 = false;
    }
    if (*(int *)(param_1 + 0x550) == 0) {
      plVar7 = (longlong *)0x0;
    }
    else {
      plVar7 = *(longlong **)(param_1 + 0x548);
    }
    local_88 = param_3;
    local_70 = plVar9;
    (**(code **)(*plVar7 + 0x58))(plVar7,lVar8,&local_78,1);
    if (!bVar3) {
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
  }
  if ((local_50 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148b35284 FUN_148b35284 body=472 status=ok
// SIG undefined FUN_148b35284(void)

void FUN_148b35284(longlong param_1,float param_2,byte param_3)

{
  int *piVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_a8 [32];
  byte local_88;
  longlong local_78;
  longlong *local_70;
  undefined1 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar8 = -0x8000000000000000;
  if (*(char *)(param_1 + 0x440) == '\x01') {
    lVar2 = param_1 + 0x430;
    FUN_148b3545e(lVar2);
    if (*(char *)(param_1 + 0x438) == '\x01') {
      FUN_148b3545e(lVar2);
      if (*(char *)(param_1 + 0x438) != '\0') {
        lVar8 = *(longlong *)(param_1 + 0x430);
      }
      lVar10 = (longlong)param_2 + lVar8;
      FUN_148b3545e(lVar2);
      if (((byte)(param_3 ^ 1 | lVar10 < *(longlong *)(param_1 + 0x430) & *(byte *)(param_1 + 0x438)
                 ) == 1) &&
         (((lVar8 = lVar10, *(int *)(param_1 + 0x450) == 0 ||
           (*(longlong **)(param_1 + 0x448) == (longlong *)0x0)) ||
          (cVar5 = (**(code **)(**(longlong **)(param_1 + 0x448) + 0x30))(), cVar5 == '\0')))) {
        local_70 = (longlong *)CONCAT71(local_70._1_7_,1);
        local_68 = 1;
        local_60 = 0;
        uStack_58 = 0;
        local_78 = lVar10;
        FUN_148b3565e(param_1);
        FUN_1449db362(&local_60);
      }
    }
  }
  if (((*(int *)(param_1 + 0x560) != 0) && (*(longlong **)(param_1 + 0x558) != (longlong *)0x0)) &&
     (cVar5 = (**(code **)(**(longlong **)(param_1 + 0x558) + 0x30))(), cVar5 != '\0')) {
    plVar9 = *(longlong **)(param_1 + 0x10);
    bVar3 = true;
    if (plVar9 == (longlong *)0x0) {
LAB_148b3531c:
      local_78 = 0;
      plVar9 = (longlong *)0x0;
    }
    else {
      iVar6 = (int)plVar9[1];
      do {
        if (iVar6 == 0) goto LAB_148b3531c;
        LOCK();
        iVar4 = (int)plVar9[1];
        bVar11 = iVar6 == iVar4;
        if (bVar11) {
          *(int *)(plVar9 + 1) = iVar6 + 1;
          iVar4 = iVar6;
        }
        iVar6 = iVar4;
        UNLOCK();
      } while (!bVar11);
      local_78 = *(longlong *)(param_1 + 8);
      LOCK();
      *(int *)((longlong)plVar9 + 0xc) = *(int *)((longlong)plVar9 + 0xc) + 1;
      UNLOCK();
      bVar3 = false;
    }
    if (*(int *)(param_1 + 0x560) == 0) {
      plVar7 = (longlong *)0x0;
    }
    else {
      plVar7 = *(longlong **)(param_1 + 0x558);
    }
    local_88 = param_3;
    local_70 = plVar9;
    (**(code **)(*plVar7 + 0x58))(plVar7,lVar8,&local_78,1);
    if (!bVar3) {
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
  }
  if ((local_50 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148b3545e FUN_148b3545e body=144 status=ok
// SIG undefined FUN_148b3545e(void)

undefined8 * FUN_148b3545e(undefined8 *param_1)

{
  char cVar1;
  undefined1 uVar2;
  longlong *plVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  byte local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(int *)(param_1 + 4) != 0) && ((longlong *)param_1[3] != (longlong *)0x0)) {
    cVar1 = (**(code **)(*(longlong *)param_1[3] + 0x30))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 4) == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = (longlong *)param_1[3];
      }
      (**(code **)(*plVar3 + 0x58))(plVar3,&local_28);
      if (&local_28 != param_1) {
        if ((local_20 & 1) == 0) {
          if (*(char *)(param_1 + 1) != '\x01') goto LAB_148b354c0;
          uVar2 = 0;
        }
        else {
          *param_1 = local_28;
          uVar2 = 1;
        }
        *(undefined1 *)(param_1 + 1) = uVar2;
      }
    }
  }
LAB_148b354c0:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b354f0 FUN_148b354f0 body=121 status=ok
// SIG undefined FUN_148b354f0(void)

void FUN_148b354f0(longlong param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  
  FUN_148b3545e(param_2);
  puVar2 = (undefined8 *)(param_1 + 0x408);
  if (*(char *)(param_2 + 1) != '\0') {
    puVar2 = param_2;
  }
  if (puVar2 != (undefined8 *)(param_1 + 0x458)) {
    if (*(char *)(puVar2 + 1) == '\x01') {
      *(undefined8 *)(param_1 + 0x458) = *puVar2;
      uVar1 = 1;
    }
    else {
      if (*(char *)(param_1 + 0x460) != '\x01') goto LAB_148b3551f;
      uVar1 = 0;
    }
    *(undefined1 *)(param_1 + 0x460) = uVar1;
  }
LAB_148b3551f:
  *(undefined1 *)(param_1 + 0x468) = *(undefined1 *)(puVar2 + 2);
  FUN_148b355da(param_1 + 0x470,puVar2 + 3);
  FUN_148b3556a(param_1);
  return;
}



// FUNCTION 148b3556a FUN_148b3556a body=111 status=ok
// SIG undefined FUN_148b3556a(void)

void FUN_148b3556a(longlong param_1)

{
  byte bVar1;
  
  FUN_148b3545e(param_1 + 0x3e0);
  if (*(char *)(param_1 + 1000) == '\x01') {
    FUN_148b3545e(param_1 + 0x408);
    if (*(char *)(param_1 + 0x410) != '\0') {
      bVar1 = 0;
      goto LAB_148b355b7;
    }
  }
  FUN_148b3545e(param_1 + 0x430);
  bVar1 = 1;
  if (*(char *)(param_1 + 0x438) == '\x01') {
    FUN_148b3545e(param_1 + 0x458);
    bVar1 = *(byte *)(param_1 + 0x460) ^ 1;
  }
LAB_148b355b7:
  *(byte *)(param_1 + 0x2f8) = bVar1;
  return;
}



// FUNCTION 148b355da FUN_148b355da body=130 status=ok
// SIG undefined FUN_148b355da(void)

void FUN_148b355da(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != param_1) {
    local_28 = 0;
    local_20 = 0;
    plVar1 = (longlong *)*param_2;
    if (plVar1 != (longlong *)0x0 && (int)param_2[1] != 0) {
      (**(code **)(*plVar1 + 0x40))(plVar1,&local_28);
    }
    FUN_144a450dc(param_1,&local_28);
    FUN_1449db362(&local_28);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b3565e FUN_148b3565e body=121 status=ok
// SIG undefined FUN_148b3565e(void)

void FUN_148b3565e(longlong param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  
  FUN_148b3545e(param_2);
  puVar2 = (undefined8 *)(param_1 + 0x3e0);
  if (*(char *)(param_2 + 1) != '\0') {
    puVar2 = param_2;
  }
  if (puVar2 != (undefined8 *)(param_1 + 0x430)) {
    if (*(char *)(puVar2 + 1) == '\x01') {
      *(undefined8 *)(param_1 + 0x430) = *puVar2;
      uVar1 = 1;
    }
    else {
      if (*(char *)(param_1 + 0x438) != '\x01') goto LAB_148b3568d;
      uVar1 = 0;
    }
    *(undefined1 *)(param_1 + 0x438) = uVar1;
  }
LAB_148b3568d:
  *(undefined1 *)(param_1 + 0x440) = *(undefined1 *)(puVar2 + 2);
  FUN_148b355da(param_1 + 0x448,puVar2 + 3);
  FUN_148b3556a(param_1);
  return;
}



// FUNCTION 148b356d8 FUN_148b356d8 body=83 status=ok
// SIG undefined FUN_148b356d8(void)

undefined1 FUN_148b356d8(longlong param_1)

{
  char cVar1;
  undefined1 uVar2;
  longlong *plVar3;
  
  if ((*(int *)(param_1 + 0x4e8) != 0) && (*(longlong **)(param_1 + 0x4e0) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x4e0) + 0x30))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x4e8) == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)(param_1 + 0x4e0);
      }
      uVar2 = (**(code **)(*plVar3 + 0x58))();
      *(undefined1 *)(param_1 + 0x4d8) = uVar2;
    }
  }
  return *(undefined1 *)(param_1 + 0x4d8);
}



// FUNCTION 148b3572c FUN_148b3572c body=167 status=ok
// SIG undefined FUN_148b3572c(void)

void FUN_148b3572c(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_148b357a7;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_148b357a7;
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
LAB_148b357a7:
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
                    /* WARNING: Could not recover jumptable at 0x000148b357c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 148b357d4 FUN_148b357d4 body=313 status=ok
// SIG undefined FUN_148b357d4(void)

longlong * FUN_148b357d4(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_148b358d0:
    *puVar5 = &PTR_LAB_14b55eb70;
    uVar10 = FUN_144a3f946();
    puVar5[2] = uVar10;
    *puVar5 = &PTR_FUN_14b55eb00;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar8 = (int)plVar6[1];
    do {
      if (iVar8 == 0) goto LAB_148b358d0;
      LOCK();
      iVar7 = (int)plVar6[1];
      bVar11 = iVar8 == iVar7;
      if (bVar11) {
        *(int *)(plVar6 + 1) = iVar8 + 1;
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      UNLOCK();
    } while (!bVar11);
    uVar10 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_14b55eb70;
    uVar9 = FUN_144a3f946();
    puVar5[2] = uVar9;
    *puVar5 = &PTR_FUN_14b55eb00;
    puVar5[3] = uVar10;
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



// FUNCTION 148b3590e FUN_148b3590e body=130 status=ok
// SIG undefined FUN_148b3590e(void)

void FUN_148b3590e(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != param_1) {
    local_28 = 0;
    local_20 = 0;
    plVar1 = (longlong *)*param_2;
    if (plVar1 != (longlong *)0x0 && (int)param_2[1] != 0) {
      (**(code **)(*plVar1 + 0x40))(plVar1,&local_28);
    }
    FUN_144a450dc(param_1,&local_28);
    FUN_1449db362(&local_28);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b35992 FUN_148b35992 body=64 status=ok
// SIG undefined FUN_148b35992(void)

undefined8 * FUN_148b35992(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b55eb00;
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



// FUNCTION 148b359d6 FUN_148b359d6 body=81 status=ok
// SIG undefined FUN_148b359d6(void)

undefined8 FUN_148b359d6(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0;
      }
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
    uVar6 = *(undefined8 *)(param_1 + 0x18);
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
  return uVar6;
}



// FUNCTION 148b35a2e FUN_148b35a2e body=89 status=ok
// SIG undefined FUN_148b35a2e(void)

bool FUN_148b35a2e(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148b35a79;
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
LAB_148b35a79:
  return lVar6 == param_2;
}



// FUNCTION 148b35ab0 FUN_148b35ab0 body=118 status=ok
// SIG undefined FUN_148b35ab0(void)

void FUN_148b35ab0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b55eb70;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b55eb00;
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



// FUNCTION 148b35b26 FUN_148b35b26 body=118 status=ok
// SIG undefined FUN_148b35b26(void)

void FUN_148b35b26(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b55eb70;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b55eb00;
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



// FUNCTION 148b35b9c FUN_148b35b9c body=156 status=ok
// SIG undefined FUN_148b35b9c(void)

void FUN_148b35b9c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b55eb70;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b55eb00;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar3;
  p_Var1->SpareWORD = (short)((uint)uVar3 >> 0x10);
  p_Var1[1].Type = (short)uVar4;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar5;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148b35c28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148b35c38 FUN_148b35c38 body=102 status=ok
// SIG undefined FUN_148b35c38(void)

undefined8 FUN_148b35c38(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    iVar5 = (int)plVar3[1];
    while (iVar5 != 0) {
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      if (bVar7) {
        uVar6 = (**(code **)(param_1 + 0x28))
                          ((longlong)*(int *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x18));
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
        return uVar6;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148b35c9a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar6 = (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return uVar6;
}



// FUNCTION 148b35c9e FUN_148b35c9e body=100 status=ok
// SIG undefined FUN_148b35c9e(void)

ulonglong FUN_148b35c9e(longlong param_1)

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
LAB_148b35cf7:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148b35cf7;
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



// FUNCTION 148b35d04 FUN_148b35d04 body=313 status=ok
// SIG undefined FUN_148b35d04(void)

longlong * FUN_148b35d04(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_148b35e00:
    *puVar5 = &PTR_LAB_14b55ec50;
    uVar10 = FUN_144a3f946();
    puVar5[2] = uVar10;
    *puVar5 = &PTR_FUN_14b55ebe0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar8 = (int)plVar6[1];
    do {
      if (iVar8 == 0) goto LAB_148b35e00;
      LOCK();
      iVar7 = (int)plVar6[1];
      bVar11 = iVar8 == iVar7;
      if (bVar11) {
        *(int *)(plVar6 + 1) = iVar8 + 1;
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      UNLOCK();
    } while (!bVar11);
    uVar10 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_14b55ec50;
    uVar9 = FUN_144a3f946();
    puVar5[2] = uVar9;
    *puVar5 = &PTR_FUN_14b55ebe0;
    puVar5[3] = uVar10;
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



// FUNCTION 148b35e3e FUN_148b35e3e body=64 status=ok
// SIG undefined FUN_148b35e3e(void)

undefined8 * FUN_148b35e3e(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b55ebe0;
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



// FUNCTION 148b35e82 FUN_148b35e82 body=81 status=ok
// SIG undefined FUN_148b35e82(void)

undefined8 FUN_148b35e82(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0;
      }
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
    uVar6 = *(undefined8 *)(param_1 + 0x18);
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
  return uVar6;
}



// FUNCTION 148b35eda FUN_148b35eda body=89 status=ok
// SIG undefined FUN_148b35eda(void)

bool FUN_148b35eda(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148b35f25;
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
LAB_148b35f25:
  return lVar6 == param_2;
}



// FUNCTION 148b35f5c FUN_148b35f5c body=118 status=ok
// SIG undefined FUN_148b35f5c(void)

void FUN_148b35f5c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b55ec50;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b55ebe0;
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



// FUNCTION 148b35fd2 FUN_148b35fd2 body=118 status=ok
// SIG undefined FUN_148b35fd2(void)

void FUN_148b35fd2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b55ec50;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b55ebe0;
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



// FUNCTION 148b36048 FUN_148b36048 body=156 status=ok
// SIG undefined FUN_148b36048(void)

void FUN_148b36048(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b55ec50;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b55ebe0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar3;
  p_Var1->SpareWORD = (short)((uint)uVar3 >> 0x10);
  p_Var1[1].Type = (short)uVar4;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar5;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148b360d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148b360e4 FUN_148b360e4 body=104 status=ok
// SIG undefined FUN_148b360e4(void)

void FUN_148b360e4(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    iVar5 = (int)plVar3[1];
    while (iVar5 != 0) {
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      if (bVar6) {
        (**(code **)(param_1 + 0x28))
                  ((longlong)*(int *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x18));
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
                    /* WARNING: Could not recover jumptable at 0x000148b36131. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148b36142. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 148b3614c FUN_148b3614c body=101 status=ok
// SIG undefined FUN_148b3614c(void)

ulonglong FUN_148b3614c(longlong param_1)

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
LAB_148b361a6:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148b361a6;
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



// FUNCTION 148b361b4 FUN_148b361b4 body=313 status=ok
// SIG undefined FUN_148b361b4(void)

longlong * FUN_148b361b4(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_148b362b0:
    *puVar5 = &PTR_LAB_14b55ed30;
    uVar10 = FUN_144a3f946();
    puVar5[2] = uVar10;
    *puVar5 = &PTR_FUN_14b55ecc0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar8 = (int)plVar6[1];
    do {
      if (iVar8 == 0) goto LAB_148b362b0;
      LOCK();
      iVar7 = (int)plVar6[1];
      bVar11 = iVar8 == iVar7;
      if (bVar11) {
        *(int *)(plVar6 + 1) = iVar8 + 1;
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      UNLOCK();
    } while (!bVar11);
    uVar10 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_14b55ed30;
    uVar9 = FUN_144a3f946();
    puVar5[2] = uVar9;
    *puVar5 = &PTR_FUN_14b55ecc0;
    puVar5[3] = uVar10;
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



// FUNCTION 148b362ee FUN_148b362ee body=64 status=ok
// SIG undefined FUN_148b362ee(void)

undefined8 * FUN_148b362ee(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b55ecc0;
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



// FUNCTION 148b36332 FUN_148b36332 body=81 status=ok
// SIG undefined FUN_148b36332(void)

undefined8 FUN_148b36332(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0;
      }
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
    uVar6 = *(undefined8 *)(param_1 + 0x18);
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
  return uVar6;
}



// FUNCTION 148b3638a FUN_148b3638a body=89 status=ok
// SIG undefined FUN_148b3638a(void)

bool FUN_148b3638a(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148b363d5;
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
LAB_148b363d5:
  return lVar6 == param_2;
}



// FUNCTION 148b3640c FUN_148b3640c body=118 status=ok
// SIG undefined FUN_148b3640c(void)

void FUN_148b3640c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b55ed30;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b55ecc0;
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



// FUNCTION 148b36482 FUN_148b36482 body=118 status=ok
// SIG undefined FUN_148b36482(void)

void FUN_148b36482(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b55ed30;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b55ecc0;
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



// FUNCTION 148b364f8 FUN_148b364f8 body=156 status=ok
// SIG undefined FUN_148b364f8(void)

void FUN_148b364f8(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b55ed30;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b55ecc0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar3;
  p_Var1->SpareWORD = (short)((uint)uVar3 >> 0x10);
  p_Var1[1].Type = (short)uVar4;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar5;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148b36584. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148b36594 FUN_148b36594 body=104 status=ok
// SIG undefined FUN_148b36594(void)

void FUN_148b36594(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    iVar5 = (int)plVar3[1];
    while (iVar5 != 0) {
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      if (bVar6) {
        (**(code **)(param_1 + 0x28))
                  ((longlong)*(int *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x18));
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
                    /* WARNING: Could not recover jumptable at 0x000148b365e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148b365f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 148b365fc FUN_148b365fc body=101 status=ok
// SIG undefined FUN_148b365fc(void)

ulonglong FUN_148b365fc(longlong param_1)

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
LAB_148b36656:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148b36656;
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



// FUNCTION 148b36664 FUN_148b36664 body=6181 status=ok
// SIG undefined FUN_148b36664(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_148b36664(longlong param_1,longlong param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  bool bVar3;
  char cVar4;
  undefined1 uVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  undefined4 *puVar15;
  undefined1 auStack_1438 [32];
  undefined1 *local_1418;
  longlong local_1408;
  undefined8 *local_1400;
  longlong local_13f8;
  longlong local_13f0;
  undefined4 *local_13e8;
  longlong local_13e0;
  longlong local_13d8;
  undefined1 local_13c9;
  undefined1 local_13c8 [8];
  longlong *local_13c0;
  undefined1 local_13a9;
  undefined1 local_13a8 [8];
  longlong *local_13a0;
  undefined8 local_1390;
  undefined1 *puStack_1388;
  undefined4 local_1380;
  undefined1 local_137c;
  undefined8 local_1378;
  undefined8 uStack_1370;
  longlong local_1368;
  undefined1 local_1360;
  undefined8 local_1358;
  undefined8 uStack_1350;
  undefined8 local_1348;
  longlong *local_1340;
  undefined8 local_1338;
  longlong *local_1330;
  undefined1 local_1321;
  undefined8 local_1320;
  longlong *local_1318;
  undefined2 local_1308;
  undefined8 local_1300;
  undefined8 uStack_12f8;
  undefined4 local_12f0;
  undefined1 local_12ec;
  undefined8 local_12e8;
  undefined4 local_12e0;
  undefined4 local_12d8;
  undefined1 local_12d4;
  undefined8 local_12d0;
  undefined4 local_12c8;
  undefined2 local_12c0;
  undefined8 local_12b8;
  undefined4 local_12b0;
  undefined2 local_12a8;
  undefined8 local_12a0;
  undefined4 local_1298;
  undefined2 local_1290;
  undefined8 local_1288;
  undefined8 uStack_1280;
  undefined1 local_1278 [96];
  undefined1 local_1218;
  undefined8 local_1210;
  undefined4 local_1208;
  undefined2 local_1200;
  undefined8 local_11f8;
  undefined8 uStack_11f0;
  undefined8 local_11e8;
  longlong *local_11e0;
  undefined8 local_11d8;
  longlong *local_11d0;
  undefined4 local_11c8;
  undefined4 uStack_11c4;
  undefined4 uStack_11c0;
  undefined4 uStack_11bc;
  undefined1 local_11b8;
  undefined8 local_11b0;
  undefined8 uStack_11a8;
  undefined4 local_11a0;
  undefined1 local_119c;
  undefined8 local_1198;
  undefined8 uStack_1190;
  undefined1 local_1181;
  undefined8 local_1180;
  longlong *local_1178;
  undefined4 local_1168;
  undefined1 local_1164;
  undefined8 local_1160;
  undefined4 local_1158;
  undefined1 local_1150 [96];
  undefined1 local_10f0;
  undefined8 local_10e8;
  undefined4 local_10e0;
  undefined8 local_10d8;
  longlong *local_10d0;
  undefined8 local_10c8;
  longlong *local_10c0;
  undefined4 local_10b8;
  undefined4 uStack_10b4;
  undefined4 uStack_10b0;
  undefined4 uStack_10ac;
  undefined1 local_10a8;
  undefined8 local_10a0;
  undefined8 uStack_1098;
  undefined4 local_1090;
  undefined1 local_108c;
  undefined8 local_1088;
  undefined8 uStack_1080;
  undefined8 local_1078;
  longlong *local_1070;
  undefined8 local_1068;
  longlong *local_1060;
  undefined4 local_1058;
  undefined4 uStack_1054;
  undefined4 uStack_1050;
  undefined4 uStack_104c;
  undefined1 local_1048;
  undefined8 local_1040;
  undefined4 local_1038;
  undefined8 local_1028;
  undefined8 uStack_1020;
  undefined4 local_1018;
  undefined1 local_1014;
  undefined8 local_1010;
  undefined8 uStack_1008;
  code *local_ff8;
  undefined4 local_ff0;
  longlong local_e50;
  undefined1 local_e48;
  undefined1 local_e40 [16];
  undefined4 local_e30;
  undefined4 uStack_e2c;
  undefined4 uStack_e28;
  undefined4 uStack_e24;
  undefined4 local_e20;
  undefined1 local_e1c;
  undefined1 local_e18 [88];
  code *local_dc0;
  undefined4 local_db8;
  undefined8 local_d00;
  undefined4 local_cf8;
  undefined4 local_cf4;
  undefined8 local_cf0;
  undefined8 uStack_ce8;
  undefined2 local_c90;
  undefined1 local_c88 [432];
  undefined1 local_ad8 [96];
  undefined1 local_a78;
  undefined1 local_a70 [224];
  undefined2 local_990;
  undefined1 local_988 [64];
  undefined2 local_948;
  undefined1 local_940 [16];
  undefined4 local_930;
  undefined1 local_92c;
  undefined1 local_928 [56];
  undefined1 local_8f0 [16];
  undefined1 local_8e0 [16];
  undefined1 local_8d0 [40];
  undefined2 local_8a8;
  undefined1 local_8a0 [48];
  undefined1 local_870 [16];
  undefined4 local_860;
  undefined1 local_85c;
  undefined1 local_858 [24];
  undefined2 local_840;
  undefined1 local_838 [48];
  undefined1 local_808 [192];
  code *local_748;
  undefined4 local_740;
  undefined1 local_570 [96];
  undefined1 local_510;
  undefined1 local_508 [464];
  undefined4 local_338;
  undefined1 local_334;
  undefined1 auStack_330 [88];
  undefined1 local_2d8 [192];
  undefined1 local_218 [440];
  ulonglong local_60;
  undefined8 uStack_48;
  
  uStack_48 = 0x148b3667a;
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1438;
  lVar8 = *(longlong *)(param_2 + 0x1a8);
  *(longlong *)(param_1 + 0x300) = lVar8;
  local_1018 = *(undefined4 *)(lVar8 + 0x4f0);
  local_1028 = *(undefined8 *)(lVar8 + 0x4e0);
  uStack_1020 = *(undefined8 *)(lVar8 + 0x4e8);
  local_1014 = 1;
  local_1010 = 0;
  uStack_1008 = 0;
  FUN_140a5c8a2(param_1 + 0x250,param_1,&local_1028);
  FUN_1449db362(&local_1010);
  puVar6 = *(undefined8 **)(param_2 + 0x570);
  if (puVar6 == (undefined8 *)0x0) {
    puVar6 = (undefined8 *)FUN_14001cc68(0x10,0x10);
    *puVar6 = &PTR_FUN_14b55eda0;
    puVar6[1] = 0x600000001;
    plVar7 = (longlong *)FUN_14001cc68(0x18,0x10);
    plVar7[1] = (longlong)&DAT_100000001;
    *plVar7 = (longlong)&PTR_FUN_14b55edf0;
    plVar7[2] = (longlong)puVar6;
    if (plVar7 == (longlong *)0x0) goto LAB_148b36775;
LAB_148b36787:
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    bVar3 = false;
  }
  else {
    plVar7 = *(longlong **)(param_2 + 0x578);
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
      goto LAB_148b36787;
    }
LAB_148b36775:
    bVar3 = true;
    plVar7 = (longlong *)0x0;
  }
  plVar12 = *(longlong **)(param_1 + 0x2f0);
  *(undefined8 **)(param_1 + 0x2e8) = puVar6;
  *(longlong **)(param_1 + 0x2f0) = plVar7;
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    plVar13 = plVar12 + 1;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)*plVar13 == 0) {
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
  if (!bVar3) {
    LOCK();
    plVar12 = plVar7 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
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
  if ((*(longlong *)(param_2 + 0x570) != 0) &&
     (lVar8 = (**(code **)(**(longlong **)(param_1 + 0x2e8) + 0x40))(), lVar8 != 0)) {
    uVar9 = (**(code **)(**(longlong **)(param_1 + 0x2e8) + 0x40))();
    local_748 = FUN_148b37e8a;
    local_740 = 0;
    FUN_148b38e32(&local_d00,param_1);
    FUN_1448b6402(uVar9,&local_748,&local_d00);
    FUN_1449db362(&local_d00);
  }
  *(undefined1 *)(param_1 + 0x270) = *(undefined1 *)(param_2 + 0x1b8);
  *(undefined8 *)(param_1 + 0x268) = *(undefined8 *)(param_2 + 0x1b0);
  plVar7 = (longlong *)(param_1 + 0x278);
  FUN_148b3590e(plVar7,param_2 + 0x1c0);
  FUN_148b392ce(param_1 + 0x288,param_2 + 0x4b8);
  FUN_148b39352(param_1 + 0x298,param_2 + 0x4c8);
  FUN_14009d848(param_1 + 0x2a8,param_2 + 0x4d8);
  FUN_148b392ce(param_1 + 0x2b8,param_2 + 0x4e8);
  *(undefined1 *)(param_1 + 0x56c) = *(undefined1 *)(param_2 + 0x52c);
  *(undefined4 *)(param_1 + 0x568) = *(undefined4 *)(param_2 + 0x528);
  FUN_140a52b3c(param_1 + 0x570,param_2 + 0x530);
  puVar6 = (undefined8 *)(param_1 + 0x3e0);
  if ((undefined8 *)(param_2 + 0x1d0) != puVar6) {
    if (*(char *)(param_2 + 0x1d8) == '\x01') {
      *puVar6 = *(undefined8 *)(param_2 + 0x1d0);
      uVar5 = 1;
    }
    else {
      if (*(char *)(param_1 + 1000) != '\x01') goto LAB_148b36917;
      uVar5 = 0;
    }
    *(undefined1 *)(param_1 + 1000) = uVar5;
  }
LAB_148b36917:
  *(undefined1 *)(param_1 + 0x3f0) = *(undefined1 *)(param_2 + 0x1e0);
  FUN_148b355da(param_1 + 0x3f8,param_2 + 0x1e8);
  puVar14 = (undefined8 *)(param_1 + 0x408);
  if ((undefined8 *)(param_2 + 0x1f8) != puVar14) {
    if (*(char *)(param_2 + 0x200) == '\x01') {
      *puVar14 = *(undefined8 *)(param_2 + 0x1f8);
      uVar5 = 1;
    }
    else {
      if (*(char *)(param_1 + 0x410) != '\x01') goto LAB_148b3694d;
      uVar5 = 0;
    }
    *(undefined1 *)(param_1 + 0x410) = uVar5;
  }
LAB_148b3694d:
  *(undefined1 *)(param_1 + 0x418) = *(undefined1 *)(param_2 + 0x208);
  FUN_148b355da(param_1 + 0x420,param_2 + 0x210);
  FUN_148b3545e((undefined8 *)(param_2 + 0x220));
  if (*(char *)(param_2 + 0x228) != '\0') {
    puVar6 = (undefined8 *)(param_2 + 0x220);
  }
  puVar2 = (undefined8 *)(param_1 + 0x430);
  if (puVar6 != puVar2) {
    if (*(char *)(puVar6 + 1) == '\x01') {
      *puVar2 = *puVar6;
      uVar5 = 1;
    }
    else {
      if (*(char *)(param_1 + 0x438) != '\x01') goto LAB_148b36996;
      uVar5 = 0;
    }
    *(undefined1 *)(param_1 + 0x438) = uVar5;
  }
LAB_148b36996:
  *(undefined1 *)(param_1 + 0x440) = *(undefined1 *)(puVar6 + 2);
  FUN_148b355da(param_1 + 0x448,puVar6 + 3);
  FUN_148b3545e((undefined8 *)(param_2 + 0x248));
  if (*(char *)(param_2 + 0x250) != '\0') {
    puVar14 = (undefined8 *)(param_2 + 0x248);
  }
  puVar6 = (undefined8 *)(param_1 + 0x458);
  if (puVar14 != puVar6) {
    if (*(char *)(puVar14 + 1) == '\x01') {
      *puVar6 = *puVar14;
      uVar5 = 1;
    }
    else {
      if (*(char *)(param_1 + 0x460) != '\x01') goto LAB_148b369dd;
      uVar5 = 0;
    }
    *(undefined1 *)(param_1 + 0x460) = uVar5;
  }
LAB_148b369dd:
  *(undefined1 *)(param_1 + 0x468) = *(undefined1 *)(puVar14 + 2);
  FUN_148b355da(param_1 + 0x470,puVar14 + 3);
  lVar8 = FUN_146b06eb6((undefined4 *)(param_2 + 0x270));
  local_1400 = puVar2;
  if (*(char *)(lVar8 + 4) == '\x01') {
    local_d00._0_5_ = CONCAT14(*(char *)(param_2 + 0x274),(undefined4)local_d00);
    if (*(char *)(param_2 + 0x274) == '\x01') {
      local_d00 = (code *)CONCAT44(local_d00._4_4_,*(undefined4 *)(param_2 + 0x270));
    }
    local_cf8._0_1_ = *(undefined1 *)(param_2 + 0x278);
    local_cf0 = 0;
    uStack_ce8 = (ulonglong)uStack_ce8._4_4_ << 0x20;
    FUN_146aa7480(&local_cf0,param_2 + 0x280);
  }
  else {
    local_d00 = (code *)CONCAT35(local_d00._5_3_,0x100000001);
    local_cf8._0_1_ = 1;
    local_cf0 = 0;
    uStack_ce8 = 0;
  }
  puVar14 = (undefined8 *)(param_1 + 0x480);
  if (&local_d00 != puVar14) {
    if (local_d00._4_1_ == '\x01') {
      *(undefined4 *)puVar14 = (undefined4)local_d00;
      uVar5 = 1;
    }
    else {
      if (*(char *)(param_1 + 0x484) != '\x01') goto LAB_148b36b22;
      uVar5 = 0;
    }
    *(undefined1 *)(param_1 + 0x484) = uVar5;
  }
LAB_148b36b22:
  *(undefined1 *)(param_1 + 0x488) = (undefined1)local_cf8;
  FUN_146aa7480(param_1 + 0x490,&local_cf0);
  FUN_1449db362(&local_cf0);
  lVar8 = FUN_146b06eb6((undefined4 *)(param_2 + 0x290));
  if (*(char *)(lVar8 + 4) == '\x01') {
    local_d00._0_5_ = CONCAT14(*(char *)(param_2 + 0x294),(undefined4)local_d00);
    if (*(char *)(param_2 + 0x294) == '\x01') {
      local_d00 = (code *)CONCAT44(local_d00._4_4_,*(undefined4 *)(param_2 + 0x290));
    }
    local_cf8 = CONCAT31(local_cf8._1_3_,*(undefined1 *)(param_2 + 0x298));
    local_cf0 = 0;
    uStack_ce8 = uStack_ce8 & 0xffffffff00000000;
    FUN_146aa7480(&local_cf0,param_2 + 0x2a0);
  }
  else {
    local_d00 = (code *)CONCAT35(local_d00._5_3_,0x100000006);
    local_cf8 = CONCAT31(local_cf8._1_3_,1);
    local_cf0 = 0;
    uStack_ce8 = 0;
  }
  puVar2 = (undefined8 *)(param_1 + 0x4a0);
  if (&local_d00 != puVar2) {
    if (local_d00._4_1_ == '\x01') {
      *(undefined4 *)puVar2 = (undefined4)local_d00;
      uVar5 = 1;
    }
    else {
      if (*(char *)(param_1 + 0x4a4) != '\x01') goto LAB_148b36c03;
      uVar5 = 0;
    }
    *(undefined1 *)(param_1 + 0x4a4) = uVar5;
  }
LAB_148b36c03:
  *(undefined1 *)(param_1 + 0x4a8) = (undefined1)local_cf8;
  FUN_146aa7480(param_1 + 0x4b0,&local_cf0);
  FUN_1449db362(&local_cf0);
  FUN_148b37f80(param_1,puVar2);
  FUN_148b38058(param_1,puVar14);
  *(undefined2 *)(param_1 + 0x4c0) = *(undefined2 *)(param_2 + 0x2b0);
  FUN_14096c7c0(param_1 + 0x4c8,param_2 + 0x2b8);
  *(undefined2 *)(param_1 + 0x4d8) = *(undefined2 *)(param_2 + 0x2c8);
  FUN_14096c7c0(param_1 + 0x4e0,param_2 + 0x2d0);
  *(undefined2 *)(param_1 + 0x4f0) = *(undefined2 *)(param_2 + 0x360);
  plVar12 = (longlong *)(param_1 + 0x4f8);
  FUN_14096c7c0(plVar12,param_2 + 0x368);
  *(undefined2 *)(param_1 + 0x508) = *(undefined2 *)(param_2 + 0x378);
  plVar13 = (longlong *)(param_1 + 0x510);
  FUN_14096c7c0(plVar13,param_2 + 0x380);
  FUN_148b393d6(param_1 + 0x548,param_2 + 0x390);
  FUN_148b393d6(param_1 + 0x558,param_2 + 0x3a0);
  *(undefined1 *)(param_1 + 0x5bc) = *(undefined1 *)(param_2 + 1000);
  *(undefined1 *)(param_1 + 0x5bd) = *(undefined1 *)(param_2 + 0x3e9);
  if ((undefined8 *)(param_2 + 0x3f0) != (undefined8 *)(param_1 + 0x520)) {
    if (*(char *)(param_2 + 0x3f8) == '\x01') {
      *(undefined8 *)(param_1 + 0x520) = *(undefined8 *)(param_2 + 0x3f0);
      uVar5 = 1;
    }
    else {
      if (*(char *)(param_1 + 0x528) != '\x01') goto LAB_148b36d20;
      uVar5 = 0;
    }
    *(undefined1 *)(param_1 + 0x528) = uVar5;
  }
LAB_148b36d20:
  *(undefined1 *)(param_1 + 0x530) = *(undefined1 *)(param_2 + 0x400);
  FUN_148b355da(param_1 + 0x538,param_2 + 0x408);
  *(undefined1 *)(param_1 + 0x5bb) = *(undefined1 *)(param_2 + 0x580);
  if (((*(int *)(param_1 + 0x280) != 0) && ((longlong *)*plVar7 != (longlong *)0x0)) &&
     (cVar4 = (**(code **)(*(longlong *)*plVar7 + 0x30))(), cVar4 != '\0')) {
    if (*(int *)(param_1 + 0x280) == 0) {
      plVar7 = (longlong *)0x0;
    }
    else {
      plVar7 = (longlong *)*plVar7;
    }
    uVar9 = (**(code **)(*plVar7 + 0x58))();
    *(undefined8 *)(param_1 + 0x268) = uVar9;
  }
  *(undefined8 *)(param_1 + 0x5a0) = *(undefined8 *)(param_1 + 0x268);
  (**(code **)(**(longlong **)(param_1 + 0x2e8) + 0x28))
            (*(longlong **)(param_1 + 0x2e8),&local_d00,param_1 + 0x5a0);
  if ((undefined8 *)(param_1 + 0x5a8) == &local_d00) {
    if (local_d00 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_1 + 0x5a8) != 0) {
      FUN_1400020a8();
    }
    *(code **)(param_1 + 0x5a8) = local_d00;
    local_d00 = (code *)0x0;
    *(undefined4 *)(param_1 + 0x5b0) = local_cf8;
    *(undefined4 *)(param_1 + 0x5b4) = local_cf4;
  }
  *(undefined1 *)(param_1 + 0x5b8) = 0;
  *(double *)(param_1 + 0x590) = (double)*(longlong *)(param_1 + 0x5a0);
  if (((*(int *)(param_1 + 0x500) != 0) && ((longlong *)*plVar12 != (longlong *)0x0)) &&
     (cVar4 = (**(code **)(*(longlong *)*plVar12 + 0x30))(), cVar4 != '\0')) {
    if (*(int *)(param_1 + 0x500) == 0) {
      plVar12 = (longlong *)0x0;
    }
    else {
      plVar12 = (longlong *)*plVar12;
    }
    uVar5 = (**(code **)(*plVar12 + 0x58))();
    *(undefined1 *)(param_1 + 0x4f0) = uVar5;
  }
  if (*(char *)(param_1 + 0x4f0) == '\x01') {
    lVar8 = *(longlong *)(param_1 + 0x5a0);
    FUN_148b3545e(puVar6);
    if ((*(char *)(param_1 + 0x460) == '\x01') && (*(longlong *)(param_1 + 0x458) < lVar8)) {
      lVar8 = *(longlong *)(param_1 + 0x5a0);
      FUN_148b3545e(puVar6);
      if (*(char *)(param_1 + 0x460) == '\0') {
        lVar10 = 0x7fffffffffffffff;
      }
      else {
        lVar10 = *(longlong *)(param_1 + 0x458);
      }
      FUN_148b350a6(param_1,(float)(lVar8 - lVar10),1);
      goto LAB_148b3705c;
    }
  }
  if (((*(int *)(param_1 + 0x518) != 0) && ((longlong *)*plVar13 != (longlong *)0x0)) &&
     (cVar4 = (**(code **)(*(longlong *)*plVar13 + 0x30))(), cVar4 != '\0')) {
    if (*(int *)(param_1 + 0x518) == 0) {
      plVar13 = (longlong *)0x0;
    }
    else {
      plVar13 = (longlong *)*plVar13;
    }
    uVar5 = (**(code **)(*plVar13 + 0x58))();
    *(undefined1 *)(param_1 + 0x508) = uVar5;
  }
  puVar6 = local_1400;
  if (*(char *)(param_1 + 0x508) == '\x01') {
    lVar8 = *(longlong *)(param_1 + 0x5a0);
    FUN_148b3545e(local_1400);
    if ((*(char *)(param_1 + 0x438) == '\x01') && (lVar8 < *(longlong *)(param_1 + 0x430))) {
      lVar8 = *(longlong *)(param_1 + 0x5a0);
      FUN_148b3545e(puVar6);
      if (*(char *)(param_1 + 0x438) == '\0') {
        lVar10 = -0x8000000000000000;
      }
      else {
        lVar10 = *(longlong *)(param_1 + 0x430);
      }
      FUN_148b35284(param_1,(float)(lVar8 - lVar10),1);
    }
  }
LAB_148b3705c:
  FUN_148b3556a(param_1);
  *(undefined1 *)(param_1 + 0x3ac) = *(undefined1 *)(param_2 + 0x3b4);
  *(undefined4 *)(param_1 + 0x3a8) = *(undefined4 *)(param_2 + 0x3b0);
  FUN_140a52b3c(param_1 + 0x3b0,param_2 + 0x3b8);
  *(undefined1 *)(param_1 + 0x3c8) = *(undefined1 *)(param_2 + 0x3d0);
  *(undefined8 *)(param_1 + 0x3c0) = *(undefined8 *)(param_2 + 0x3c8);
  FUN_148b3590e(param_1 + 0x3d0,param_2 + 0x3d8);
  *(undefined4 *)(param_1 + 0x338) = 0;
  *(undefined8 *)(param_1 + 0x598) = 0;
  *(undefined8 *)(param_1 + 0x340) = *(undefined8 *)(param_2 + 0x2e0);
  *(undefined1 *)(param_1 + 0x348) = *(undefined1 *)(param_2 + 0x2e8);
  FUN_148b3590e(param_1 + 0x350,param_2 + 0x2f0);
  *(undefined1 *)(param_1 + 0x364) = *(undefined1 *)(param_2 + 0x31c);
  *(undefined4 *)(param_1 + 0x360) = *(undefined4 *)(param_2 + 0x318);
  FUN_140a52b3c(param_1 + 0x368,param_2 + 800);
  *(undefined1 *)(param_1 + 0x37c) = *(undefined1 *)(param_2 + 0x334);
  *(undefined4 *)(param_1 + 0x378) = *(undefined4 *)(param_2 + 0x330);
  FUN_140a52b3c(param_1 + 0x380,param_2 + 0x338);
  *(undefined1 *)(param_1 + 0x394) = *(undefined1 *)(param_2 + 0x34c);
  *(undefined4 *)(param_1 + 0x390) = *(undefined4 *)(param_2 + 0x348);
  FUN_146a24854(param_1 + 0x398,param_2 + 0x350);
  lVar10 = *(longlong *)(param_2 + 0x1a8) + 0x170;
  *(longlong *)(param_1 + 0x308) = lVar10;
  *(longlong *)(param_1 + 0x318) = *(longlong *)(param_2 + 0x1a8) + 0x10;
  lVar8 = *(longlong *)(param_2 + 0x1a8) + 0xc0;
  if ((*(byte *)(*(longlong *)(param_2 + 0x1a8) + 0x154) & 4) == 0) {
    lVar8 = lVar10;
  }
  *(longlong *)(param_1 + 0x310) = lVar8;
  lVar10 = *(longlong *)(param_2 + 0x1a8) + 0x220;
  *(longlong *)(param_1 + 800) = lVar10;
  lVar8 = *(longlong *)(param_2 + 0x1a8) + 0x2d0;
  if ((*(byte *)(*(longlong *)(param_2 + 0x1a8) + 0x364) & 4) == 0) {
    lVar8 = lVar10;
  }
  *(longlong *)(param_1 + 0x328) = lVar8;
  *(longlong *)(param_1 + 0x330) = *(longlong *)(param_2 + 0x1a8) + 0x380;
  lVar8 = *(longlong *)(param_2 + 0x1a8);
  *(undefined2 *)(param_1 + 0x5b9) = 0;
  *(undefined4 *)(param_1 + 0x580) = 0xffffffff;
  local_1048 = *(undefined1 *)(param_2 + 0x4a0);
  local_1058 = *(undefined4 *)(param_2 + 0x490);
  uStack_1054 = *(undefined4 *)(param_2 + 0x494);
  uStack_1050 = *(undefined4 *)(param_2 + 0x498);
  uStack_104c = *(undefined4 *)(param_2 + 0x49c);
  local_1040 = 0;
  local_1038 = 0;
  FUN_140a58be0(&local_1040,param_2 + 0x4a8);
  local_1400 = (undefined8 *)FUN_140a58d14(param_1 + 0x218,&local_1058);
  FUN_140a5296a(local_218);
  FUN_140a50426(local_2d8);
  local_1090 = 0x3f800000;
  local_108c = 1;
  local_1088 = 0;
  uStack_1080 = 0;
  lVar10 = FUN_140a5475a(local_2d8);
  local_10b8 = *(undefined4 *)(lVar8 + 0x4f4);
  uStack_10b4 = *(undefined4 *)(lVar8 + 0x4f8);
  uStack_10b0 = *(undefined4 *)(lVar8 + 0x4fc);
  uStack_10ac = *(undefined4 *)(lVar8 + 0x500);
  local_10a8 = 1;
  local_10a0 = 0;
  uStack_1098 = 0;
  *(undefined1 *)(lVar10 + 0x28) = 1;
  *(undefined4 *)(lVar10 + 0x18) = local_10b8;
  *(undefined4 *)(lVar10 + 0x1c) = uStack_10b4;
  *(undefined4 *)(lVar10 + 0x20) = uStack_10b0;
  *(undefined4 *)(lVar10 + 0x24) = uStack_10ac;
  local_1408 = lVar8;
  FUN_144a450dc(lVar10 + 0x30,&local_10a0);
  FUN_1449db362(&local_10a0);
  *(undefined4 *)(lVar10 + 0x40) = 0;
  *(undefined1 *)(lVar10 + 0x44) = 1;
  *(undefined4 *)(lVar10 + 0x48) = 2;
  *(undefined1 *)(lVar10 + 0x4c) = 1;
  FUN_140a570d8(&local_748);
  local_13f8 = param_2 + 0x418;
  FUN_144a87366(local_1150);
  local_10f0 = *(undefined1 *)(param_2 + 0x478);
  local_13f0 = param_2 + 0x480;
  local_10e8 = 0;
  local_10e0 = 0;
  FUN_140a5d470(&local_10e8);
  FUN_1412cc59c(local_570,local_1150);
  local_510 = local_10f0;
  FUN_144a450dc(local_508,&local_10e8);
  FUN_141515cba(local_1150);
  local_d00 = FUN_148b38208;
  local_cf8 = 0;
  FUN_148b38130(&local_748,param_1,&local_d00);
  local_d00 = FUN_148b38316;
  local_cf8 = 0;
  FUN_148b38266(&local_748,param_1,&local_d00);
  local_1168 = *(undefined4 *)(param_2 + 0x540);
  local_1164 = *(undefined1 *)(param_2 + 0x544);
  local_13d8 = param_2 + 0x548;
  local_1160 = 0;
  local_1158 = 0;
  FUN_140a5d648(&local_1160);
  local_334 = local_1164;
  local_338 = local_1168;
  FUN_144a450dc(auStack_330,&local_1160);
  FUN_1449db362(&local_1160);
  local_1418 = &local_1181;
  FUN_140a54526(&local_1180,"STextBlock","Runtime\\Slate\\Public\\Widgets/Input/SSpinBox.h",300);
  if (local_1178 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1178 + 1) = (int)local_1178[1] + 1;
    UNLOCK();
  }
  plVar7 = *(longlong **)(param_1 + 0x2d0);
  *(undefined8 *)(param_1 + 0x2c8) = local_1180;
  *(longlong **)(param_1 + 0x2d0) = local_1178;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar12 = plVar7 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
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
  lVar8 = local_1408;
  puVar15 = (undefined4 *)(local_1408 + 0x4f4);
  local_13e8 = (undefined4 *)(param_2 + 0x540);
  FUN_140a52852(&local_1180,&local_10d8,&local_748);
  local_10c8 = local_10d8;
  local_10c0 = local_10d0;
  if (local_10d0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_10d0 + 1) = (int)local_10d0[1] + 1;
    UNLOCK();
  }
  uVar9 = FUN_140a4fe8e(lVar10,&local_10c8);
  local_1408 = FUN_140a52392(local_218,uVar9);
  FUN_140a50426(local_808);
  local_11a0 = 0x3f800000;
  local_119c = 1;
  local_1198 = 0;
  uStack_1190 = 0;
  lVar10 = FUN_140a5475a(local_808);
  local_11c8 = *puVar15;
  uStack_11c4 = *(undefined4 *)(lVar8 + 0x4f8);
  uStack_11c0 = *(undefined4 *)(lVar8 + 0x4fc);
  uStack_11bc = *(undefined4 *)(lVar8 + 0x500);
  local_11b8 = 1;
  local_11b0 = 0;
  uStack_11a8 = 0;
  *(undefined1 *)(lVar10 + 0x28) = 1;
  *(undefined4 *)(lVar10 + 0x18) = local_11c8;
  *(undefined4 *)(lVar10 + 0x1c) = uStack_11c4;
  *(undefined4 *)(lVar10 + 0x20) = uStack_11c0;
  *(undefined4 *)(lVar10 + 0x24) = uStack_11bc;
  FUN_144a450dc(lVar10 + 0x30,&local_11b0);
  FUN_1449db362(&local_11b0);
  *(undefined4 *)(lVar10 + 0x40) = 0;
  *(undefined1 *)(lVar10 + 0x44) = 1;
  *(undefined4 *)(lVar10 + 0x48) = 2;
  *(undefined1 *)(lVar10 + 0x4c) = 1;
  local_13e0 = lVar10;
  FUN_146a63634(&local_d00);
  local_1200 = CONCAT11(1,DAT_14c96b1e1);
  local_11f8 = 0;
  uStack_11f0 = 0;
  local_c90 = local_1200;
  FUN_144a450dc(local_c88,&local_11f8);
  FUN_1449db362(&local_11f8);
  FUN_144a87366(local_1278,local_13f8);
  local_1218 = *(undefined1 *)(param_2 + 0x478);
  local_1210 = 0;
  local_1208 = 0;
  FUN_140a5d470(&local_1210,local_13f0);
  FUN_1412cc59c(local_ad8,local_1278);
  local_a78 = local_1218;
  FUN_144a450dc(local_a70,&local_1210);
  FUN_141515cba(local_1278);
  local_1290 = 0x101;
  local_1288 = 0;
  uStack_1280 = 0;
  local_990 = 0x101;
  FUN_144a450dc(local_988,&local_1288);
  FUN_1449db362(&local_1288);
  local_ff8 = FUN_148b38208;
  local_ff0 = 0;
  FUN_148b38384(&local_d00,param_1);
  local_dc0 = (code *)&LAB_148b3845c;
  local_db8 = 0;
  FUN_148b39ef8(&local_ff8,param_1,&local_dc0);
  FUN_144a450dc(local_8f0,&local_ff8);
  FUN_1449db362(&local_ff8);
  local_dc0 = FUN_148b3846e;
  local_db8 = 0;
  FUN_148b3a39a(&local_ff8,param_1,&local_dc0);
  FUN_144a450dc(local_8e0,&local_ff8);
  FUN_1449db362(&local_ff8);
  local_dc0 = FUN_148b38748;
  local_db8 = 0;
  FUN_148b3a83c(&local_ff8,param_1,&local_dc0);
  FUN_144a450dc(local_8d0,&local_ff8);
  FUN_1449db362(&local_ff8);
  local_12a8 = *(undefined2 *)(param_2 + 0x4f8);
  local_12a0 = 0;
  local_1298 = 0;
  FUN_14096c7c0(&local_12a0,param_2 + 0x500);
  local_948 = local_12a8;
  FUN_144a450dc(local_940,&local_12a0);
  FUN_1449db362(&local_12a0);
  local_12c0 = *(undefined2 *)(param_2 + 0x510);
  local_12b8 = 0;
  local_12b0 = 0;
  FUN_14096c7c0(&local_12b8,param_2 + 0x518);
  local_8a8 = local_12c0;
  FUN_144a450dc(local_8a0,&local_12b8);
  FUN_1449db362(&local_12b8);
  local_ff8 = FUN_148b38316;
  local_ff0 = 0;
  FUN_148b3887c(&local_d00,param_1,&local_ff8);
  local_12d8 = *(undefined4 *)(param_2 + 0x558);
  local_12d4 = *(undefined1 *)(param_2 + 0x55c);
  local_12d0 = 0;
  local_12c8 = 0;
  FUN_146a74c58(&local_12d0,param_2 + 0x560);
  local_85c = local_12d4;
  local_860 = local_12d8;
  FUN_144a450dc(local_858,&local_12d0);
  FUN_1449db362(&local_12d0);
  local_12ec = *(undefined1 *)(local_13e8 + 1);
  local_12f0 = *local_13e8;
  local_12e8 = 0;
  local_12e0 = 0;
  FUN_140a5d648(&local_12e8,local_13d8);
  local_92c = local_12ec;
  local_930 = local_12f0;
  FUN_144a450dc(local_928,&local_12e8);
  FUN_1449db362(&local_12e8);
  local_1308 = 0x101;
  local_1300 = 0;
  uStack_12f8 = 0;
  local_840 = 0x101;
  FUN_144a450dc(local_838,&local_1300);
  FUN_1449db362(&local_1300);
  FUN_146a26a60(local_870,param_2 + 0x588);
  local_1418 = &local_1321;
  FUN_146a7c5de(&local_1320,"SEditableText","Runtime\\Slate\\Public\\Widgets/Input/SSpinBox.h",0x138
               );
  if (local_1318 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1318 + 1) = (int)local_1318[1] + 1;
    UNLOCK();
  }
  plVar7 = *(longlong **)(param_1 + 0x2e0);
  *(undefined8 *)(param_1 + 0x2d8) = local_1320;
  *(longlong **)(param_1 + 0x2e0) = local_1318;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar12 = plVar7 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
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
  FUN_146a639a0(&local_1320,&local_11e8,&local_d00);
  local_11d8 = local_11e8;
  local_11d0 = local_11e0;
  if (local_11e0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_11e0 + 1) = (int)local_11e0[1] + 1;
    UNLOCK();
  }
  uVar9 = FUN_140a4fe8e(local_13e0,&local_11d8);
  uVar9 = FUN_140a52392(local_1408,uVar9);
  FUN_140a50426(&local_dc0);
  lVar8 = FUN_140a52578(&local_dc0);
  *(undefined4 *)(lVar8 + 0x40) = 0;
  *(undefined1 *)(lVar8 + 0x44) = 1;
  *(undefined4 *)(lVar8 + 0x48) = 2;
  *(undefined1 *)(lVar8 + 0x4c) = 1;
  FUN_140a53334(&local_ff8);
  local_1368 = *(longlong *)(param_2 + 0x1a8) + 0x430;
  local_1360 = 1;
  local_1358 = 0;
  uStack_1350 = 0;
  local_e48 = 1;
  local_e50 = local_1368;
  FUN_144a450dc(local_e40,&local_1358);
  FUN_1449db362(&local_1358);
  local_1390 = 0x3f800000;
  puStack_1388 = &DAT_3f8000003f800000;
  local_1380 = CONCAT22(local_1380._2_2_,2);
  local_137c = 1;
  local_1378 = 0;
  uStack_1370 = 0;
  local_e30 = 0x3f800000;
  uStack_e2c = 0;
  uStack_e28 = 0x3f800000;
  uStack_e24 = 0x3f800000;
  local_e20 = local_1380;
  local_e1c = 1;
  FUN_144a450dc(local_e18,&local_1378);
  FUN_1449db362(&local_1378);
  local_1418 = &local_13a9;
  FUN_140a554b8(local_13a8,"SImage","Runtime\\Slate\\Public\\Widgets/Input/SSpinBox.h",0x14d);
  FUN_140a52c70(local_13a8,&local_1348,&local_ff8);
  local_1338 = local_1348;
  local_1330 = local_1340;
  if (local_1340 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1340 + 1) = (int)local_1340[1] + 1;
    UNLOCK();
  }
  uVar11 = FUN_140a4fe8e(lVar8,&local_1338);
  uVar9 = FUN_140a52392(uVar9,uVar11);
  local_1418 = &local_13c9;
  FUN_140a541dc(local_13c8,"SHorizontalBox","Runtime\\Slate\\Public\\Widgets/Input/SSpinBox.h",0x124
               );
  FUN_140a50ec6(local_13c8,&local_1078,uVar9);
  local_1068 = local_1078;
  local_1060 = local_1070;
  if (local_1070 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1070 + 1) = (int)local_1070[1] + 1;
    UNLOCK();
  }
  FUN_140a58896(local_1400,&local_1068);
  plVar7 = local_1060;
  if (local_1060 != (longlong *)0x0) {
    LOCK();
    plVar12 = local_1060 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
      (**(code **)*local_1060)(local_1060);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  if (local_1070 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_1070 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*local_1070)(local_1070);
      LOCK();
      piVar1 = (int *)((longlong)local_1070 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_1070 + 0x10))(local_1070);
      }
    }
  }
  if (local_13c0 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_13c0 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*local_13c0)(local_13c0);
      LOCK();
      piVar1 = (int *)((longlong)local_13c0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_13c0 + 0x10))(local_13c0);
      }
    }
  }
  plVar7 = local_1330;
  if (local_1330 != (longlong *)0x0) {
    LOCK();
    plVar12 = local_1330 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
      (**(code **)*local_1330)(local_1330);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  if (local_1340 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_1340 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*local_1340)(local_1340);
      LOCK();
      piVar1 = (int *)((longlong)local_1340 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_1340 + 0x10))(local_1340);
      }
    }
  }
  if (local_13a0 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_13a0 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*local_13a0)(local_13a0);
      LOCK();
      piVar1 = (int *)((longlong)local_13a0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_13a0 + 0x10))(local_13a0);
      }
    }
  }
  FUN_140a55a86(&local_ff8);
  FUN_140a509a6(&local_dc0);
  plVar7 = local_11d0;
  if (local_11d0 != (longlong *)0x0) {
    LOCK();
    plVar12 = local_11d0 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
      (**(code **)*local_11d0)(local_11d0);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  if (local_11e0 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_11e0 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*local_11e0)(local_11e0);
      LOCK();
      piVar1 = (int *)((longlong)local_11e0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_11e0 + 0x10))(local_11e0);
      }
    }
  }
  if (local_1318 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_1318 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*local_1318)(local_1318);
      LOCK();
      piVar1 = (int *)((longlong)local_1318 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_1318 + 0x10))(local_1318);
      }
    }
  }
  FUN_146a63a14(&local_d00);
  FUN_140a509a6(local_808);
  plVar7 = local_10c0;
  if (local_10c0 != (longlong *)0x0) {
    LOCK();
    plVar12 = local_10c0 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
      (**(code **)*local_10c0)(local_10c0);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  if (local_10d0 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_10d0 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*local_10d0)(local_10d0);
      LOCK();
      piVar1 = (int *)((longlong)local_10d0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_10d0 + 0x10))(local_10d0);
      }
    }
  }
  if (local_1178 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_1178 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*local_1178)(local_1178);
      LOCK();
      piVar1 = (int *)((longlong)local_1178 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_1178 + 0x10))(local_1178);
      }
    }
  }
  FUN_140a59ae6(&local_748);
  FUN_140a509a6(local_2d8);
  FUN_145ab33da(local_218);
  if ((local_60 ^ (ulonglong)auStack_1438) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148b37e8a FUN_148b37e8a body=244 status=ok
// SIG undefined FUN_148b37e8a(void)

void FUN_148b37e8a(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(int *)(param_1 + 0x280) != 0) && (*(longlong **)(param_1 + 0x278) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x278) + 0x30))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x280) == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)(param_1 + 0x278);
      }
      uVar2 = (**(code **)(*plVar3 + 0x58))();
      *(undefined8 *)(param_1 + 0x268) = uVar2;
    }
  }
  *(undefined8 *)(param_1 + 0x5a0) = *(undefined8 *)(param_1 + 0x268);
  (**(code **)(**(longlong **)(param_1 + 0x2e8) + 0x28))
            (*(longlong **)(param_1 + 0x2e8),&local_28,param_1 + 0x5a0);
  if ((longlong *)(param_1 + 0x5a8) == &local_28) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_1 + 0x5a8) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_1 + 0x5a8) = local_28;
    *(undefined4 *)(param_1 + 0x5b0) = local_20;
    *(undefined4 *)(param_1 + 0x5b4) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b37f80 FUN_148b37f80 body=215 status=ok
// SIG undefined FUN_148b37f80(void)

void FUN_148b37f80(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined1 auStack_68 [40];
  undefined4 local_40;
  char local_3c;
  undefined1 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar1 = *(longlong **)(param_1 + 0x2e8);
  lVar2 = FUN_146b06eb6(param_2);
  if (*(char *)(lVar2 + 4) == '\x01') {
    puVar3 = (undefined4 *)FUN_146b06eb6(param_2);
    local_3c = *(char *)(puVar3 + 1);
    if (local_3c == '\x01') {
      local_40 = *puVar3;
    }
    local_38 = 1;
    local_30 = 0;
    uStack_28 = 0;
  }
  else {
    local_3c = *(char *)(param_1 + 0x4a4);
    if (local_3c == '\x01') {
      local_40 = *(undefined4 *)(param_1 + 0x4a0);
    }
    local_38 = *(undefined1 *)(param_1 + 0x4a8);
    local_30 = 0;
    uStack_28 = (ulonglong)uStack_28._4_4_ << 0x20;
    FUN_146aa7480(&local_30,param_1 + 0x4b0);
  }
  (**(code **)(*plVar1 + 0x20))(plVar1,&local_40);
  FUN_1449db362(&local_30);
  *(undefined1 *)(param_1 + 0x5b8) = 1;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b38058 FUN_148b38058 body=215 status=ok
// SIG undefined FUN_148b38058(void)

void FUN_148b38058(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined1 auStack_68 [40];
  undefined4 local_40;
  char local_3c;
  undefined1 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar1 = *(longlong **)(param_1 + 0x2e8);
  lVar2 = FUN_146b06eb6(param_2);
  if (*(char *)(lVar2 + 4) == '\x01') {
    puVar3 = (undefined4 *)FUN_146b06eb6(param_2);
    local_3c = *(char *)(puVar3 + 1);
    if (local_3c == '\x01') {
      local_40 = *puVar3;
    }
    local_38 = 1;
    local_30 = 0;
    uStack_28 = 0;
  }
  else {
    local_3c = *(char *)(param_1 + 0x484);
    if (local_3c == '\x01') {
      local_40 = *(undefined4 *)(param_1 + 0x480);
    }
    local_38 = *(undefined1 *)(param_1 + 0x488);
    local_30 = 0;
    uStack_28 = (ulonglong)uStack_28._4_4_ << 0x20;
    FUN_146aa7480(&local_30,param_1 + 0x490);
  }
  (**(code **)(*plVar1 + 0x18))(plVar1,&local_40);
  FUN_1449db362(&local_30);
  *(undefined1 *)(param_1 + 0x5b8) = 1;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b38130 FUN_148b38130 body=215 status=ok
// SIG undefined FUN_148b38130(void)

longlong FUN_148b38130(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_88 [40];
  undefined1 local_60 [16];
  longlong *local_50;
  undefined4 local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = *(undefined4 *)(param_3 + 1);
  local_50 = (longlong *)*param_3;
  FUN_148b3945a(local_60);
  FUN_144a5dc74(&local_50);
  local_40 = 1;
  local_38 = 0;
  local_30 = 0;
  FUN_1413a4324(&local_38,local_60);
  FUN_140008f88(param_1 + 0x1a8,&local_50);
  *(undefined1 *)(param_1 + 0x1b8) = local_40;
  FUN_144a450dc(param_1 + 0x1c0,&local_38);
  FUN_1449db362(&local_38);
  if (local_50 != (longlong *)0x0) {
    (**(code **)(*local_50 + 0x10))();
  }
  FUN_1449db362(local_60);
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b38208 FUN_148b38208 body=93 status=ok
// SIG undefined FUN_148b38208(void)

undefined8 FUN_148b38208(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_148b3993c(param_1,local_28);
  FUN_140233b1a(param_2,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b38266 FUN_148b38266 body=175 status=ok
// SIG undefined FUN_148b38266(void)

longlong FUN_148b38266(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [16];
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = *param_3;
  local_30 = CONCAT44(local_30._4_4_,*(undefined4 *)(param_3 + 1));
  FUN_148b39a4e(local_48,param_2,&local_38);
  local_38 = CONCAT35((int3)((ulonglong)local_38 >> 0x28),0x100000000);
  local_30 = 0;
  local_28 = 0;
  FUN_140a52b3c(&local_30,local_48);
  *(undefined1 *)(param_1 + 0x42c) = local_38._4_1_;
  *(undefined4 *)(param_1 + 0x428) = (undefined4)local_38;
  FUN_144a450dc(param_1 + 0x430,&local_30);
  FUN_1449db362(&local_30);
  FUN_1449db362(local_48);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b38316 FUN_148b38316 body=109 status=ok
// SIG undefined FUN_148b38316(void)

float FUN_148b38316(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  
  if ((*(int *)(param_1 + 0x578) != 0) && (*(longlong **)(param_1 + 0x570) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x570) + 0x30))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x578) == 0) {
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2 = *(longlong **)(param_1 + 0x570);
      }
      uVar3 = (**(code **)(*plVar2 + 0x58))();
      *(undefined4 *)(param_1 + 0x568) = uVar3;
    }
  }
  fVar5 = *(float *)(param_1 + 0x568) - *(float *)(*(longlong *)(param_1 + 0x300) + 0x450);
  fVar4 = 0.0;
  if (0.0 <= fVar5) {
    fVar4 = fVar5;
  }
  return fVar4;
}



// FUNCTION 148b38384 FUN_148b38384 body=215 status=ok
// SIG undefined FUN_148b38384(void)

longlong FUN_148b38384(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_88 [40];
  undefined1 local_60 [16];
  longlong *local_50;
  undefined4 local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = *(undefined4 *)(param_3 + 1);
  local_50 = (longlong *)*param_3;
  FUN_148b3945a(local_60);
  FUN_144a5dc74(&local_50);
  local_40 = 1;
  local_38 = 0;
  local_30 = 0;
  FUN_1413a4324(&local_38,local_60);
  FUN_140008f88(param_1 + 0x1a8,&local_50);
  *(undefined1 *)(param_1 + 0x1b8) = local_40;
  FUN_144a450dc(param_1 + 0x1c0,&local_38);
  FUN_1449db362(&local_38);
  if (local_50 != (longlong *)0x0) {
    (**(code **)(*local_50 + 0x10))();
  }
  FUN_1449db362(local_60);
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b3846e FUN_148b3846e body=729 status=ok
// SIG undefined FUN_148b3846e(void)

void FUN_148b3846e(longlong param_1,undefined8 param_2)

{
  wint_t _C;
  void *_Src;
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  int iVar8;
  wint_t *pwVar9;
  bool bVar10;
  longlong lVar11;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  longlong *local_90 [2];
  longlong local_80 [2];
  wint_t *local_70;
  int local_68;
  undefined4 local_64;
  longlong *local_60;
  char local_58;
  undefined1 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(char *)(param_1 + 0x5ba) == '\0') {
    *(undefined1 *)(param_1 + 0x5ba) = 1;
    puVar5 = (undefined8 *)FUN_1447a1f4a(param_2);
    local_70 = (wint_t *)0x0;
    local_68 = *(int *)(puVar5 + 1);
    lVar11 = (longlong)local_68;
    _Src = (void *)*puVar5;
    if (lVar11 == 0) {
      local_64 = 0;
    }
    else {
      FUN_1446dd670(&local_70,local_68,0);
      memcpy(local_70,_Src,lVar11 * 2);
      iVar4 = local_68 + -1;
      if (local_68 == 0) {
        iVar4 = 0;
      }
      if (local_68 - 2U < 0x7fffffff) {
        lVar11 = 0;
        do {
          cVar3 = (**(code **)(**(longlong **)(param_1 + 0x2e8) + 0x38))
                            (*(longlong **)(param_1 + 0x2e8),local_70[lVar11]);
          iVar8 = local_68 + -1;
          if (local_68 == 0) {
            iVar8 = 0;
          }
          if (cVar3 == '\0') {
            iVar4 = (int)lVar11;
            break;
          }
          lVar11 = lVar11 + 1;
        } while (lVar11 < iVar8);
        if (iVar4 < iVar8) {
          if (iVar4 < 1) {
            FUN_148b3993c(param_1,local_80);
          }
          else {
            pwVar9 = local_70;
            if (local_68 == 0) {
              pwVar9 = &DAT_149dfb77a;
            }
            FUN_14006620a(local_80,pwVar9,iVar4);
          }
          uVar6 = *(undefined8 *)(param_1 + 0x2d8);
          FUN_140009b9a(local_90,local_80);
          FUN_14023423e(&local_60,local_90);
          local_50 = 1;
          local_48 = 0;
          uStack_40 = 0;
          FUN_146a5407e(uVar6,&local_60);
          FUN_1449db362(&local_48);
          if (local_60 != (longlong *)0x0) {
            (**(code **)(*local_60 + 0x10))();
          }
          if (local_90[0] != (longlong *)0x0) {
            (**(code **)(*local_90[0] + 0x10))();
          }
          if (local_80[0] != 0) {
            FUN_1400020a8();
          }
        }
      }
    }
    if (*(char *)(param_1 + 0x5bd) == '\x01') {
      pwVar9 = local_70;
      if (local_68 == 0) {
        pwVar9 = &DAT_149dfb77a;
      }
      if ((*pwVar9 == 0x2d) || (*pwVar9 == 0x2b)) {
        pwVar9 = pwVar9 + 1;
      }
      bVar10 = false;
      do {
        _C = *pwVar9;
        if (_C == 0x2e) {
          bVar2 = true;
          if (bVar10) break;
        }
        else {
          if (_C == 0) {
            plVar1 = *(longlong **)(param_1 + 0x2e8);
            if (((*(int *)(param_1 + 0x280) != 0) &&
                (*(longlong **)(param_1 + 0x278) != (longlong *)0x0)) &&
               (cVar3 = (**(code **)(**(longlong **)(param_1 + 0x278) + 0x30))(), cVar3 != '\0')) {
              if (*(int *)(param_1 + 0x280) == 0) {
                plVar7 = (longlong *)0x0;
              }
              else {
                plVar7 = *(longlong **)(param_1 + 0x278);
              }
              uVar6 = (**(code **)(*plVar7 + 0x58))();
              *(undefined8 *)(param_1 + 0x268) = uVar6;
            }
            (**(code **)(*plVar1 + 0x30))
                      (plVar1,&local_60,&local_70,(undefined8 *)(param_1 + 0x268));
            if (local_58 == '\x01') {
              local_98 = 0;
              FUN_143faaf46(param_1,local_60,(double)(longlong)local_60,3);
            }
            break;
          }
          iVar4 = iswdigit(_C);
          bVar2 = bVar10;
          if (iVar4 == 0) break;
        }
        bVar10 = bVar2;
        pwVar9 = pwVar9 + 1;
      } while( true );
    }
    if (local_70 != (wint_t *)0x0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x5ba) = 0;
  }
  if ((local_38 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148b38748 FUN_148b38748 body=307 status=ok
// SIG undefined FUN_148b38748(void)

void FUN_148b38748(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_a8 [32];
  int local_88;
  undefined1 local_80;
  undefined1 local_7f;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68;
  undefined1 uStack_67;
  undefined6 uStack_66;
  undefined8 local_60;
  undefined8 uStack_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_3 != 1) {
    local_68 = DAT_14c96b238;
    uStack_67 = 1;
    local_60 = 0;
    uStack_58 = 0;
    (**(code **)(**(longlong **)(param_1 + 0x2c8) + 0x1c0))();
    local_80 = DAT_14c96b1e1;
    local_7f = 1;
    local_78 = 0;
    uStack_70 = 0;
    (**(code **)(**(longlong **)(param_1 + 0x2d8) + 0x1c0))();
  }
  plVar1 = *(longlong **)(param_1 + 0x2e8);
  if ((*(int *)(param_1 + 0x280) != 0) && (*(longlong **)(param_1 + 0x278) != (longlong *)0x0)) {
    cVar3 = (**(code **)(**(longlong **)(param_1 + 0x278) + 0x30))();
    if (cVar3 != '\0') {
      if (*(int *)(param_1 + 0x280) == 0) {
        plVar5 = (longlong *)0x0;
      }
      else {
        plVar5 = *(longlong **)(param_1 + 0x278);
      }
      uVar4 = (**(code **)(*plVar5 + 0x58))();
      *(undefined8 *)(param_1 + 0x268) = uVar4;
    }
  }
  uVar4 = FUN_1447a1f4a(param_2);
  (**(code **)(*plVar1 + 0x30))(plVar1,&local_68,uVar4,(undefined8 *)(param_1 + 0x268));
  if ((char)local_60 == '\x01') {
    lVar2 = CONCAT62(uStack_66,CONCAT11(uStack_67,local_68));
    local_88 = param_3;
    FUN_143faaf46(param_1,lVar2,(double)lVar2,1);
  }
  if ((local_50 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b3887c FUN_148b3887c body=175 status=ok
// SIG undefined FUN_148b3887c(void)

longlong FUN_148b3887c(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [16];
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = *param_3;
  local_30 = CONCAT44(local_30._4_4_,*(undefined4 *)(param_3 + 1));
  FUN_148b39a4e(local_48,param_2,&local_38);
  local_38 = CONCAT35((int3)((ulonglong)local_38 >> 0x28),0x100000000);
  local_30 = 0;
  local_28 = 0;
  FUN_140a52b3c(&local_30,local_48);
  *(undefined1 *)(param_1 + 0x444) = local_38._4_1_;
  *(undefined4 *)(param_1 + 0x440) = (undefined4)local_38;
  FUN_144a450dc(param_1 + 0x448,&local_30);
  FUN_1449db362(&local_30);
  FUN_1449db362(local_48);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b3892c FUN_148b3892c body=29 status=ok
// SIG undefined FUN_148b3892c(void)

undefined8 FUN_148b3892c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b38952 FUN_148b38952 body=60 status=ok
// SIG undefined FUN_148b38952(void)

void FUN_148b38952(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  int *piVar2;
  int iVar3;
  
  lVar1 = FUN_146b06eb6(param_2);
  iVar3 = 1;
  if (*(char *)(lVar1 + 4) == '\x01') {
    piVar2 = (int *)FUN_146b06eb6();
    iVar3 = 0;
    if (0 < *piVar2) {
      iVar3 = *piVar2;
    }
  }
  *(int *)(param_1 + 8) = iVar3;
  return;
}



// FUNCTION 148b3898e FUN_148b3898e body=60 status=ok
// SIG undefined FUN_148b3898e(void)

void FUN_148b3898e(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  int *piVar2;
  int iVar3;
  
  lVar1 = FUN_146b06eb6(param_2);
  iVar3 = 6;
  if (*(char *)(lVar1 + 4) == '\x01') {
    piVar2 = (int *)FUN_146b06eb6();
    iVar3 = 0;
    if (0 < *piVar2) {
      iVar3 = *piVar2;
    }
  }
  *(int *)(param_1 + 0xc) = iVar3;
  return;
}



// FUNCTION 148b389ca FUN_148b389ca body=188 status=ok
// SIG undefined FUN_148b389ca(void)

undefined8 * FUN_148b389ca(undefined8 param_1,undefined8 *param_2,ulonglong *param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined1 auStack_88 [32];
  undefined8 *local_68;
  undefined1 local_58;
  undefined1 uStack_57;
  undefined4 uStack_54;
  undefined2 uStack_4a;
  undefined8 local_48;
  undefined1 local_38;
  undefined1 uStack_37;
  undefined4 uStack_34;
  undefined2 uStack_2a;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_141366fce(&local_38);
  uStack_37 = 0;
  local_58 = local_38;
  uStack_57 = 0;
  uStack_54 = uStack_34;
  uStack_4a = uStack_2a;
  local_48 = 0;
  uVar2 = FUN_140b6087d();
  uVar1 = *param_3;
  *param_2 = 0;
  param_2[1] = 0;
  local_28 = local_48;
  local_38 = local_58;
  uStack_37 = uStack_57;
  uStack_34 = uStack_54;
  uStack_2a = uStack_4a;
  uVar3 = -uVar1;
  if ((longlong)-uVar1 < 0) {
    uVar3 = uVar1;
  }
  local_68 = param_2;
  FUN_14010d0dd(uVar1 >> 0x3f,uVar3,uVar2,&local_38);
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b38a88 FUN_148b38a88 body=663 status=ok
// SIG undefined FUN_148b38a88(void)

longlong * FUN_148b38a88(undefined8 param_1,longlong *param_2,undefined8 *param_3,longlong *param_4)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  undefined2 *puVar6;
  undefined1 auStack_c8 [32];
  double *local_a8;
  char *local_a0;
  longlong *local_98;
  int *local_90;
  longlong *local_88;
  longlong *local_80;
  int local_78;
  undefined2 local_74;
  undefined1 local_72;
  longlong local_70;
  char local_61;
  double local_60 [2];
  byte local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_88 = param_2;
  local_80 = param_4;
  FUN_1467cf2b8(local_60);
  local_60[0] = (double)((ulonglong)local_60[0] & 0xffffffffffffff00);
  local_72 = 1;
  local_74 = local_60[0]._0_2_;
  local_78 = 0;
  uVar2 = FUN_140b6087d();
  iVar4 = *(int *)(param_3 + 1) + -1;
  if (*(int *)(param_3 + 1) == 0) {
    iVar4 = 0;
    puVar6 = &DAT_149dfb77a;
  }
  else {
    puVar6 = (undefined2 *)*param_3;
  }
  local_61 = '\0';
  local_70 = 0;
  local_60[0] = -0.0;
  local_60[1] = NAN;
  local_50 = 1;
  local_a8 = local_60;
  local_a0 = &local_61;
  local_98 = &local_70;
  local_90 = &local_78;
  cVar1 = FUN_1467c5604(puVar6,iVar4,uVar2,&local_74);
  lVar3 = -local_70;
  if (local_61 == '\0') {
    lVar3 = local_70;
  }
  if (cVar1 == '\0') {
LAB_148b38b8f:
    local_78 = 0;
    uVar2 = FUN_140b60818();
    iVar4 = *(int *)(param_3 + 1) + -1;
    if (*(int *)(param_3 + 1) == 0) {
      iVar4 = 0;
      puVar6 = &DAT_149dfb77a;
    }
    else {
      puVar6 = (undefined2 *)*param_3;
    }
    local_61 = '\0';
    local_70 = 0;
    local_60[0] = -0.0;
    local_60[1] = NAN;
    local_50 = 1;
    local_a8 = local_60;
    local_a0 = &local_61;
    local_98 = &local_70;
    local_90 = &local_78;
    cVar1 = FUN_1467c5604(puVar6,iVar4,uVar2,&local_74);
    plVar5 = local_88;
    lVar3 = -local_70;
    if (local_61 == '\0') {
      lVar3 = local_70;
    }
    if (cVar1 != '\0') {
      iVar4 = *(int *)(param_3 + 1) + -1;
      if (*(int *)(param_3 + 1) == 0) {
        iVar4 = 0;
      }
      if (local_78 == iVar4) goto LAB_148b38b83;
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cb9b9a0) && (FUN_144b3d300(&DAT_14cb9b9a0), DAT_14cb9b9a0 == -1)) {
      FUN_1467ebd14(&DAT_14cb9b708);
      atexit((_func_5014 *)&LAB_143fab61f);
      _Init_thread_footer(&DAT_14cb9b9a0);
    }
    if (*(int *)(param_3 + 1) == 0) {
      puVar6 = &DAT_149dfb77a;
    }
    else {
      puVar6 = (undefined2 *)*param_3;
    }
    FUN_1467ecfa6(&DAT_14cb9b708,local_60,puVar6,(double)*local_80);
    cVar1 = (&DAT_149f209a8)[local_50];
    if (cVar1 == '\x01') {
      *plVar5 = (longlong)local_60[0];
    }
    *(bool *)(plVar5 + 1) = cVar1 == '\x01';
    (*(code *)(&PTR_FUN_149f209b0)[local_50])(local_60);
  }
  else {
    iVar4 = *(int *)(param_3 + 1) + -1;
    if (*(int *)(param_3 + 1) == 0) {
      iVar4 = 0;
    }
    if (local_78 != iVar4) goto LAB_148b38b8f;
LAB_148b38b83:
    *local_88 = lVar3;
    *(undefined1 *)(local_88 + 1) = 1;
    plVar5 = local_88;
  }
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return plVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b38d20 FUN_148b38d20 body=216 status=ok
// SIG undefined FUN_148b38d20(void)

ulonglong FUN_148b38d20(undefined8 param_1,short param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined4 *puVar3;
  longlong lVar4;
  
  puVar3 = *(undefined4 **)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((int)puVar3[0x44] < DAT_14cb9b9b8) {
    puVar3 = &DAT_14cb9b9b8;
    FUN_144b3d300(&DAT_14cb9b9b8);
    if (DAT_14cb9b9b8 == -1) {
      FUN_140056680(&DAT_14cb9b9a8);
      atexit((_func_5014 *)&LAB_143fab62b);
      puVar3 = &DAT_14cb9b9b8;
      _Init_thread_footer(&DAT_14cb9b9b8);
    }
  }
  if (param_2 != 0) {
    if ((longlong)DAT_14cb9b9b0 != 0) {
      lVar4 = 0;
      do {
        if (*(short *)((longlong)DAT_14cb9b9a8 + lVar4) == param_2) {
          uVar1 = CONCAT71((int7)((ulonglong)DAT_14cb9b9a8 >> 8),1);
          goto LAB_148b38d9f;
        }
        lVar4 = lVar4 + 2;
        puVar3 = DAT_14cb9b9a8;
      } while ((longlong)DAT_14cb9b9b0 * 2 != lVar4);
    }
    lVar4 = FUN_140b6087d();
    uVar1 = CONCAT71((int7)((ulonglong)puVar3 >> 8),1);
    if ((*(short *)(lVar4 + 0x70) == param_2) || (*(short *)(lVar4 + 0x72) == param_2))
    goto LAB_148b38d9f;
    lVar2 = 0;
    do {
      if (*(short *)(lVar4 + 0x78 + lVar2) == param_2) {
        uVar1 = CONCAT71((int7)((ulonglong)lVar2 >> 8),lVar4 + 0x78 + lVar2 != 0);
        goto LAB_148b38d9f;
      }
      lVar2 = lVar2 + 2;
    } while (lVar2 != 0x14);
  }
  uVar1 = 0;
LAB_148b38d9f:
  return uVar1 & 0xffffffff;
}



// FUNCTION 148b38df8 FUN_148b38df8 body=3 status=ok
// SIG undefined FUN_148b38df8(void)

undefined8 FUN_148b38df8(void)

{
  return 0;
}


