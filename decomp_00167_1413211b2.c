// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1413211b2 FUN_1413211b2 body=925 status=ok
// SIG undefined FUN_1413211b2(void)

void FUN_1413211b2(longlong param_1,longlong *param_2,longlong *param_3)

{
  PSRWLOCK SRWLock;
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  ushort uVar9;
  uint uVar10;
  ulonglong uVar11;
  ushort uVar12;
  ulonglong uVar13;
  longlong lVar14;
  bool bVar15;
  undefined1 auStack_78 [32];
  longlong local_58;
  int local_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar6 = (int)param_2[1];
  if (iVar6 == DAT_14cbdb590) {
    if (1 < iVar6) {
      lVar7 = 0;
      while( true ) {
        uVar9 = *(ushort *)(*param_2 + lVar7);
        uVar11 = (ulonglong)uVar9;
        uVar12 = *(ushort *)(DAT_14cbdb588 + lVar7);
        if (uVar9 != uVar12) break;
        if (uVar9 == 0) goto LAB_1413213d3;
LAB_14132142f:
        lVar7 = lVar7 + 2;
      }
      if ((uVar12 | uVar9) < 0x80) {
        uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
        uVar13 = (ulonglong)uVar12;
        uVar12 = (ushort)(byte)(&DAT_149e05da0)[uVar13];
        if ((&DAT_149e05da0)[uVar11] == (&DAT_149e05da0)[uVar13]) goto LAB_14132142f;
      }
      if (uVar9 != uVar12) goto LAB_1413211fa;
    }
LAB_1413213d3:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_78);
  }
  if (DAT_14cbdb590 + iVar6 == 1) goto LAB_1413213d3;
LAB_1413211fa:
  if (iVar6 == DAT_14cbdb5a0) {
    if (1 < iVar6) {
      lVar7 = 0;
      while( true ) {
        uVar9 = *(ushort *)(*param_2 + lVar7);
        uVar11 = (ulonglong)uVar9;
        uVar12 = *(ushort *)(DAT_14cbdb598 + lVar7);
        if (uVar9 != uVar12) break;
        if (uVar9 == 0) goto LAB_1413213d3;
LAB_1413214a1:
        lVar7 = lVar7 + 2;
      }
      if ((uVar12 | uVar9) < 0x80) {
        uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
        uVar13 = (ulonglong)uVar12;
        uVar12 = (ushort)(byte)(&DAT_149e05da0)[uVar13];
        if ((&DAT_149e05da0)[uVar11] == (&DAT_149e05da0)[uVar13]) goto LAB_1413214a1;
      }
      if (uVar9 != uVar12) goto LAB_141321213;
    }
    goto LAB_1413213d3;
  }
  if (DAT_14cbdb5a0 + iVar6 == 1) goto LAB_1413213d3;
LAB_141321213:
  if (iVar6 == DAT_14cbdb5b0) {
    if (1 < iVar6) {
      lVar7 = 0;
      while( true ) {
        uVar9 = *(ushort *)(*param_2 + lVar7);
        uVar11 = (ulonglong)uVar9;
        uVar12 = *(ushort *)(DAT_14cbdb5a8 + lVar7);
        if (uVar9 != uVar12) break;
        if (uVar9 == 0) goto LAB_14132127e;
LAB_14132124e:
        lVar7 = lVar7 + 2;
      }
      if ((uVar12 | uVar9) < 0x80) {
        uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
        uVar13 = (ulonglong)uVar12;
        uVar12 = (ushort)(byte)(&DAT_149e05da0)[uVar13];
        if ((&DAT_149e05da0)[uVar11] == (&DAT_149e05da0)[uVar13]) goto LAB_14132124e;
      }
      if (uVar9 != uVar12) goto LAB_141321549;
    }
  }
  else if (DAT_14cbdb5b0 + iVar6 != 1) goto LAB_141321549;
LAB_14132127e:
  FUN_1448d5e3c(&local_58,param_1 + 0x208);
  plVar3 = *(longlong **)(local_58 + 0x70);
  SRWLock = (PSRWLOCK)(plVar3 + 4);
  AcquireSRWLockShared(SRWLock);
  plVar4 = (longlong *)CONCAT44(uStack_4c,local_50);
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
  if ((longlong)(int)plVar3[1] != 0) {
    lVar7 = *plVar3;
    lVar14 = (longlong)(int)plVar3[1] * 0x50 + lVar7;
    do {
      FUN_1400021e4(lVar7,&local_58);
      if (local_50 == (int)param_3[1]) {
        if (local_50 < 2) {
          bVar15 = true;
        }
        else {
          lVar8 = 0;
          while( true ) {
            uVar9 = *(ushort *)(local_58 + lVar8);
            uVar5 = (uint)uVar9;
            uVar12 = *(ushort *)(*param_3 + lVar8);
            uVar10 = (uint)uVar12;
            if (uVar9 != uVar12) {
              if ((uVar12 | uVar9) < 0x80) {
                uVar5 = (uint)(byte)(&DAT_149e05da0)[uVar9];
                uVar10 = (uint)(byte)(&DAT_149e05da0)[uVar12];
                if ((&DAT_149e05da0)[uVar9] == (&DAT_149e05da0)[uVar12]) goto LAB_141321323;
              }
              iVar6 = uVar5 - uVar10;
              goto LAB_141321352;
            }
            if (uVar9 == 0) break;
LAB_141321323:
            lVar8 = lVar8 + 2;
          }
          iVar6 = 0;
LAB_141321352:
          bVar15 = iVar6 == 0;
        }
      }
      else {
        bVar15 = (int)param_3[1] + local_50 == 1;
      }
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      if (bVar15) {
        plVar3 = *(longlong **)(lVar7 + 0x10);
        if (plVar3 != (longlong *)0x0) {
          lVar7 = (**(code **)(*plVar3 + 8))(plVar3);
          lVar14 = FUN_1407f4a68();
          if (((lVar14 != 0) && (*(int *)(lVar14 + 0x38) <= *(int *)(lVar7 + 0x38))) &&
             (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar14 + 0x38) * 8) ==
              lVar14 + 0x30)) {
            ReleaseSRWLockShared(SRWLock);
            if (*(uint *)((longlong)plVar3 + 0x44) < 3) goto LAB_1413213d3;
            goto LAB_141321549;
          }
        }
        break;
      }
      lVar7 = lVar7 + 0x50;
    } while (lVar7 != lVar14);
  }
  ReleaseSRWLockShared(SRWLock);
LAB_141321549:
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141321572 FUN_141321572 body=103 status=ok
// SIG undefined FUN_141321572(void)

void FUN_141321572(longlong *param_1)

{
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
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



// FUNCTION 1413215d9 FUN_1413215d9 body=63 status=ok
// SIG undefined FUN_1413215d9(void)

void FUN_1413215d9(longlong param_1,int param_2)

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



// FUNCTION 141321618 thunk_FUN_140ce0512 body=5 status=ok
// SIG undefined thunk_FUN_140ce0512(void)

void thunk_FUN_140ce0512(void)

{
  FUN_140ce0512();
  return;
}



// FUNCTION 14132161e FUN_14132161e body=211 status=ok
// SIG undefined FUN_14132161e(void)

undefined8 * FUN_14132161e(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  
  puVar4 = (undefined8 *)FUN_14001cc68(0x20,0x10);
  uVar2 = *param_2;
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_FUN_14ba46f50;
  puVar4[3] = uVar2;
  *param_1 = puVar4;
  plVar5 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14ba46fb0;
  plVar5[2] = (longlong)puVar4;
  param_1[1] = plVar5;
  if (puVar4 != (undefined8 *)0x0) {
    if (plVar5 == (longlong *)0x0) {
      puVar4[1] = puVar4;
    }
    else {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      puVar4[1] = puVar4;
      if ((longlong *)puVar4[2] != plVar5) {
        LOCK();
        *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
        UNLOCK();
        plVar3 = (longlong *)puVar4[2];
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar3 + 0x10))();
          }
        }
        puVar4[2] = plVar5;
      }
      LOCK();
      plVar3 = plVar5 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
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
  return param_1;
}



// FUNCTION 1413216f2 FUN_1413216f2 body=438 status=ok
// SIG undefined FUN_1413216f2(void)

undefined4 *
FUN_1413216f2(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  char cVar1;
  undefined2 *puVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50;
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140ac5f02();
  uVar8 = 0;
  FUN_1413218aa(local_48,0,*param_3,param_3[1]);
  *(undefined4 *)(local_48 + 4) = 0xffffffff;
  local_54 = local_50;
  iVar7 = *(int *)(local_48 + 1);
  iVar4 = iVar7 + -1;
  if (iVar7 == 0) {
    iVar4 = 0;
  }
  if (0 < iVar4) {
    if (iVar7 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    else {
      puVar2 = (undefined2 *)*local_48;
    }
    lVar5 = 0;
    uVar8 = 0;
    do {
      uVar6 = ((uint)(0x19 < (ushort)puVar2[lVar5] - 0x61) * 0x20 + (uint)(ushort)puVar2[lVar5]) -
              0x20;
      uVar8 = uVar8 >> 8 ^ *(uint *)(&DAT_14c75d150 + (ulonglong)((uVar8 ^ uVar6) & 0xff) * 4);
      uVar8 = uVar8 >> 8 ^
              *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar8 & 0xff ^ uVar6 >> 8 & 0xff) * 4);
      lVar5 = lVar5 + 1;
    } while (iVar4 != (int)lVar5);
  }
  local_68 = param_4;
  cVar1 = FUN_140ac5e66(param_1,uVar8,local_48,&local_54);
  if (cVar1 == '\0') {
    uVar6 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar6) {
      uVar3 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar5 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar5 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar8 = *(int *)(param_1 + 0x48) - 1U & uVar8;
      *(uint *)((longlong)local_48 + 0x24) = uVar8;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_48 + 4) =
           *(undefined4 *)
            (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_140b7fdd8(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1413218aa FUN_1413218aa body=119 status=ok
// SIG undefined FUN_1413218aa(void)

undefined8 *
FUN_1413218aa(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  int iVar1;
  void *_Src;
  
  *param_1 = 0;
  *param_1 = *param_3;
  *param_3 = 0;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_3 + 1);
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_3 + 0xc);
  param_3[1] = 0;
  param_1[2] = 0;
  iVar1 = *(int *)(param_4 + 1);
  _Src = (void *)*param_4;
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



// FUNCTION 141321922 FUN_141321922 body=1109 status=ok
// SIG undefined FUN_141321922(void)

void FUN_141321922(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong ***ppplVar4;
  longlong ***ppplVar5;
  char cVar6;
  undefined4 uVar7;
  int iVar8;
  longlong ****pppplVar9;
  longlong lVar10;
  undefined1 auStack_b8 [40];
  longlong **local_90;
  longlong *local_88;
  longlong **local_80;
  longlong *local_78;
  longlong ***local_70;
  longlong ***local_68;
  longlong ***local_60;
  longlong ***local_58;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (((*(longlong *)(param_1 + 0x38) == 0) || (*(longlong *)(param_1 + 0x40) == 0)) ||
     (cVar6 = (**(code **)(*param_2 + 0x28))(param_2), cVar6 == '\0')) {
    if (*param_3 != 0 && (int)param_3[1] != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_b8);
    }
  }
  else {
    plVar1 = (longlong *)(param_1 + 0x48);
    FUN_140df9946(param_2,&local_70);
    ppplVar4 = local_68;
    if ((longlong ****)local_68 == (longlong ****)0x0) {
      local_58 = (longlong ***)0x0;
    }
    else {
      LOCK();
      *(int *)(local_68 + 1) = *(int *)(local_68 + 1) + 1;
      UNLOCK();
      local_58 = local_68;
      LOCK();
      *(int *)(local_68 + 1) = *(int *)(local_68 + 1) + 1;
      UNLOCK();
    }
    local_60 = local_70;
    uVar7 = (*(code *)(*local_70)[8])();
    iVar8 = FUN_140e74adc(plVar1,uVar7,&local_60);
    ppplVar5 = local_58;
    if (iVar8 == -1) {
      lVar10 = 0;
    }
    else {
      lVar10 = (longlong)iVar8 * 0x28 + *plVar1;
    }
    if ((longlong ****)local_58 != (longlong ****)0x0) {
      LOCK();
      pppplVar9 = (longlong ****)(local_58 + 1);
      *(int *)pppplVar9 = *(int *)pppplVar9 + -1;
      UNLOCK();
      if (*(int *)pppplVar9 == 0) {
        (*(code *)**local_58)(local_58);
        LOCK();
        piVar2 = (int *)((longlong)ppplVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (*(code *)(*ppplVar5)[2])(ppplVar5);
        }
      }
    }
    if ((longlong ****)ppplVar4 != (longlong ****)0x0) {
      LOCK();
      pppplVar9 = (longlong ****)(ppplVar4 + 1);
      *(int *)pppplVar9 = *(int *)pppplVar9 + -1;
      UNLOCK();
      if (*(int *)pppplVar9 == 0) {
        (*(code *)**ppplVar4)(ppplVar4);
        LOCK();
        piVar2 = (int *)((longlong)ppplVar4 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (*(code *)(*ppplVar4)[2])(ppplVar4);
        }
      }
    }
    ppplVar4 = local_68;
    if ((longlong ****)local_68 != (longlong ****)0x0) {
      LOCK();
      pppplVar9 = (longlong ****)(local_68 + 1);
      *(int *)pppplVar9 = *(int *)pppplVar9 + -1;
      UNLOCK();
      if (*(int *)pppplVar9 == 0) {
        (*(code *)**local_68)(local_68);
        LOCK();
        piVar2 = (int *)((longlong)ppplVar4 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (*(code *)(*ppplVar4)[2])(ppplVar4);
        }
      }
    }
    if (lVar10 == 0) {
      pppplVar9 = (longlong ****)FUN_14001cc68(0x90,0x10);
      FUN_1457b1d14(pppplVar9);
      local_70 = (longlong ***)pppplVar9;
      local_68 = (longlong ***)FUN_14001cc68(0x18,0x10);
      local_68[1] = (longlong **)&DAT_100000001;
      *local_68 = (longlong **)&PTR_FUN_14ba45d00;
      local_68[2] = (longlong **)pppplVar9;
      FUN_140df9946(param_2,&local_90);
      local_80 = local_90;
      local_78 = local_88;
      if (local_88 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_88 + 1) = (int)local_88[1] + 1;
        UNLOCK();
      }
      local_60 = &local_80;
      local_58 = (longlong ***)&local_70;
      FUN_1457b1d76(plVar1,&local_4c);
      plVar3 = local_78;
      lVar10 = *plVar1;
      if (local_78 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_78 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_78)(local_78);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
      }
      plVar1 = local_88;
      if (local_88 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_88 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*local_88)(local_88);
          LOCK();
          piVar2 = (int *)((longlong)plVar1 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar1 + 0x10))(plVar1);
          }
        }
      }
      ppplVar4 = local_68;
      if ((longlong ****)local_68 != (longlong ****)0x0) {
        LOCK();
        pppplVar9 = (longlong ****)(local_68 + 1);
        *(int *)pppplVar9 = *(int *)pppplVar9 + -1;
        UNLOCK();
        if (*(int *)pppplVar9 == 0) {
          (*(code *)**local_68)(local_68);
          LOCK();
          piVar2 = (int *)((longlong)ppplVar4 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (*(code *)(*ppplVar4)[2])(ppplVar4);
          }
        }
      }
      lVar10 = lVar10 + (longlong)local_4c * 0x28;
    }
    iVar8 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x28))
                      (*(longlong **)(param_1 + 0x38),param_2[3]);
    if ((iVar8 == 3) ||
       (cVar6 = (**(code **)(**(longlong **)(param_1 + 0x40) + 0x138))
                          (*(longlong **)(param_1 + 0x40),param_2), cVar6 != '\0')) {
      FUN_140df9d1a(*(undefined8 *)(lVar10 + 0x10),param_2);
      plVar1 = (longlong *)*param_3;
      if (plVar1 != (longlong *)0x0 && (int)param_3[1] != 0) {
        (**(code **)(*plVar1 + 0x60))(plVar1,param_2,1);
      }
    }
    else {
      pppplVar9 = (longlong ****)FUN_14001cc68(0x20,0x10);
      pppplVar9[1] = (longlong ***)&DAT_100000001;
      *pppplVar9 = (longlong ***)&PTR_FUN_14ba45d20;
      pppplVar9[2] = (longlong ***)0x0;
      *(undefined4 *)(pppplVar9 + 3) = 0;
      FUN_141532ff6(pppplVar9 + 2,param_3);
      local_70 = (longlong ***)(pppplVar9 + 2);
      local_68 = (longlong ***)pppplVar9;
      FUN_140df9946(param_2,&local_90);
      local_80 = local_90;
      local_78 = local_88;
      if (local_88 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_88 + 1) = (int)local_88[1] + 1;
        UNLOCK();
      }
      local_60 = &local_80;
      local_58 = (longlong ***)&local_70;
      FUN_148fb9eea(param_1 + 0x98,&local_4c);
      plVar1 = local_78;
      if (local_78 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_78 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*local_78)(local_78);
          LOCK();
          piVar2 = (int *)((longlong)plVar1 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar1 + 0x10))(plVar1);
          }
        }
      }
      if (local_88 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_88 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_88)(local_88);
          LOCK();
          piVar2 = (int *)((longlong)local_88 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_88 + 0x10))(local_88);
          }
        }
      }
      ppplVar4 = local_68;
      if ((longlong ****)local_68 != (longlong ****)0x0) {
        LOCK();
        pppplVar9 = (longlong ****)(local_68 + 1);
        *(int *)pppplVar9 = *(int *)pppplVar9 + -1;
        UNLOCK();
        if (*(int *)pppplVar9 == 0) {
          (*(code *)**local_68)(local_68);
          LOCK();
          piVar2 = (int *)((longlong)ppplVar4 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (*(code *)(*ppplVar4)[2])(ppplVar4);
          }
        }
      }
      (**(code **)(**(longlong **)(param_1 + 0x38) + 0x180))
                (*(longlong **)(param_1 + 0x38),param_2[3]);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141321d98 FUN_141321d98 body=162 status=ok
// SIG undefined FUN_141321d98(void)

void FUN_141321d98(undefined8 *param_1)

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
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *param_1 = &PTR_FUN_14ac52c10;
  param_1[0x26] = 0;
  return;
}



// FUNCTION 141321e3a FUN_141321e3a body=386 status=ok
// SIG undefined FUN_141321e3a(void)

void FUN_141321e3a(longlong *param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
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
  FUN_141322032();
  if (param_2 != (longlong *)0x0) {
    cVar1 = (**(code **)(*param_1 + 0x9f0))(param_1,param_2);
    if (cVar1 != '\0') {
      lVar2 = (**(code **)(*param_2 + 0x118))(param_2);
      if (lVar2 != 0) {
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
        if ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
             (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) {
          lVar2 = (**(code **)(*param_2 + 0xf8))(param_2);
          if (lVar2 != 0) {
            uVar3 = FUN_14018b740();
            lVar2 = FUN_144718840(lVar2,uVar3);
            if (lVar2 != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
            }
          }
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141321fd2 FUN_141321fd2 body=96 status=ok
// SIG undefined FUN_141321fd2(void)

undefined8 FUN_141321fd2(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = (**(code **)(*param_2 + 0xf8))(param_2);
  if (lVar1 != 0) {
    lVar1 = (**(code **)(*param_2 + 0x108))(param_2);
    if (lVar1 != 0) {
      lVar1 = (**(code **)(*param_2 + 0xf8))(param_2);
      lVar1 = *(longlong *)(lVar1 + 0x1b0);
      lVar2 = (**(code **)(*param_2 + 0x108))(param_2);
      if (lVar1 == *(longlong *)(lVar2 + 0x1b0)) {
        return 0;
      }
    }
  }
  return 1;
}



// FUNCTION 141322032 FUN_141322032 body=636 status=ok
// SIG undefined FUN_141322032(void)

void FUN_141322032(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong uVar5;
  code *pcVar6;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined2 *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  code **local_70;
  undefined1 *local_68;
  code *local_60;
  undefined1 local_49;
  code *local_48;
  ulonglong uStack_40;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (param_2 == (longlong *)0x0) goto LAB_1413221d9;
  lVar2 = (**(code **)(*param_2 + 0x118))(param_2);
  if (lVar2 == 0) goto LAB_1413221d9;
  if (DAT_14cb61cd0 == 0) {
    local_70 = &local_48;
    local_48 = FUN_141030f22;
    local_60 = FUN_14081d0ea;
    local_68 = &LAB_1463b31ae;
    local_78 = &LAB_1486dca4f;
    local_80 = &LAB_1464f50a6;
    local_88 = &DAT_149e063b2;
    local_90 = 0;
    local_98 = 0x10000004;
    local_a0 = 8;
    local_a8 = 0xd70;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxPlayerController",&DAT_14cb61cd0,FUN_1464f5084);
  }
  if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < *(int *)(DAT_14cb61cd0 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
       (longlong)*(int *)(DAT_14cb61cd0 + 0x38) * 8) != DAT_14cb61cd0 + 0x30)) goto LAB_1413221d9;
  if (*(longlong *)(lVar2 + 0x398) == 0) {
LAB_141322204:
    local_2c = 0xffffffff;
  }
  else {
    lVar3 = FUN_140082f10();
    if ((((*(longlong *)(lVar2 + 0x398) == 0) || (lVar3 == 0)) ||
        (lVar1 = *(longlong *)(*(longlong *)(lVar2 + 0x398) + 0x10), lVar1 == 0)) ||
       ((*(int *)(lVar1 + 0x38) < *(int *)(lVar3 + 0x38) ||
        (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
         lVar3 + 0x30)))) goto LAB_141322204;
    local_2c = FUN_141068a6c();
  }
  plVar4 = (longlong *)(**(code **)(*(longlong *)(lVar2 + 0x958) + 0x10))(lVar2 + 0x958);
  if (plVar4 != (longlong *)0x0) {
    lVar2 = (**(code **)(*plVar4 + 0x2b0))(plVar4);
    if (lVar2 != 0) {
      plVar4 = (longlong *)FUN_140d17acc(lVar2,&local_2c);
      if (plVar4 != (longlong *)0x0) {
        local_48 = (code *)0x0;
        uStack_40 = 0;
        (**(code **)(*param_2 + 0x160))(param_2,&local_48);
        local_49 = 0xff;
        if ((longlong)(int)uStack_40 == 0) {
          uVar5 = 0;
        }
        else {
          lVar2 = (longlong)(int)uStack_40 * 0x38;
          pcVar6 = local_48;
          do {
            (**(code **)(*plVar4 + 0x40))(plVar4,pcVar6,&local_49,1);
            pcVar6 = pcVar6 + 0x38;
            lVar2 = lVar2 + -0x38;
          } while (lVar2 != 0);
          uVar5 = uStack_40 & 0xffffffff;
        }
        FUN_1405d7ab2(local_48,uVar5);
        if (local_48 != (code *)0x0) {
          FUN_1400020a8();
        }
      }
    }
  }
LAB_1413221d9:
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1413222af FUN_1413222af body=2908 status=ok
// SIG undefined FUN_1413222af(void)

void FUN_1413222af(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  code *pcVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined8 uVar12;
  longlong *plVar13;
  float *pfVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong uVar17;
  float *pfVar18;
  longlong lVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 auStack_208 [32];
  undefined4 local_1e8;
  undefined4 local_1e0;
  undefined4 local_1d8;
  undefined8 local_1d0;
  undefined2 *local_1c8;
  undefined1 *local_1c0;
  undefined1 *local_1b8;
  undefined8 *local_1b0;
  undefined1 *local_1a8;
  code *local_1a0;
  int local_194;
  longlong *local_190;
  int local_184;
  longlong local_180;
  longlong *local_178;
  longlong local_170;
  undefined8 local_168;
  longlong *local_158;
  undefined4 local_140 [2];
  char local_138;
  undefined8 local_130;
  longlong *local_128;
  undefined4 local_110 [2];
  float local_108;
  undefined4 uStack_104;
  ushort local_f0;
  byte local_e8;
  float local_e0;
  undefined4 uStack_dc;
  ushort local_c8;
  byte local_c0;
  float *local_b0;
  int local_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_208;
  if ((param_1 != (longlong *)0x0) && (lVar9 = FUN_1447210f0(), lVar9 != 0)) {
    if (param_2 != (longlong *)0x0) {
      cVar4 = (**(code **)(*param_2 + 0x70))(param_2);
      if (cVar4 != '\0') goto LAB_141322db3;
      (**(code **)(*param_2 + 0x78))(param_2,1);
    }
    local_180 = FUN_140d72879();
    lVar19 = *(longlong *)(lVar9 + 0x170);
    local_184 = 1;
    if (lVar19 != 0) {
      lVar10 = FUN_1411531be();
      if ((*(int *)(lVar10 + 0x38) <= *(int *)(*(longlong *)(lVar19 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar19 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar10 + 0x38) * 8) == lVar10 + 0x30)) {
        local_184 = *(int *)(lVar19 + 0x6d0);
      }
    }
    if (0 < *(int *)(lVar9 + 0x238)) {
      local_170 = local_180 + 0x50;
      local_190 = (longlong *)(local_180 + 0x100);
      lVar19 = 0;
      do {
        iVar5 = *(int *)(*(longlong *)(lVar9 + 0x230) + 4 + lVar19 * 8);
        if (((((iVar5 != 0) &&
              (uVar7 = *(uint *)(*(longlong *)(lVar9 + 0x230) + lVar19 * 8), -1 < (int)uVar7)) &&
             ((int)uVar7 < DAT_14c9647dc)) &&
            ((plVar13 = (longlong *)
                        ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8)),
             plVar13 != (longlong *)0x0 && ((int)plVar13[2] == iVar5)))) &&
           (((*(uint *)(plVar13 + 1) & 0x10200000) == 0 &&
            (plVar13 = (longlong *)*plVar13, plVar13 != (longlong *)0x0)))) {
          if (DAT_14cbadd90 == 0) {
            local_168 = FUN_141030f22;
            local_1a0 = FUN_14081d0ea;
            local_1a8 = &LAB_1459f2e4c;
            local_1b0 = &local_168;
            local_1b8 = &LAB_148c39de3;
            local_1c0 = &LAB_1457a9eb2;
            local_1c8 = &DAT_149e063b2;
            local_1d0 = 0;
            local_1d8 = 0x10000004;
            local_1e0 = 0x10;
            local_1e8 = 0x3de0;
            FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
          }
          if ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(plVar13[2] + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(plVar13[2] + 0x30) + (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) ==
              DAT_14cbadd90 + 0x30)) {
            if ((*(int *)((longlong)param_1 + 0xc0c) == 0) ||
               (uVar7 = *(uint *)(param_1 + 0x181), (int)uVar7 < 0)) {
LAB_1413225d0:
              lVar10 = 0;
            }
            else {
              lVar10 = 0;
              if ((int)uVar7 < DAT_14c9647dc) {
                plVar11 = (longlong *)
                          ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8));
                if (((plVar11 == (longlong *)0x0) ||
                    ((int)plVar11[2] != *(int *)((longlong)param_1 + 0xc0c))) ||
                   ((*(uint *)(plVar11 + 1) & 0x10200000) != 0)) goto LAB_1413225d0;
                lVar10 = *plVar11;
              }
            }
            if ((*(int *)((longlong)plVar13 + 0xc0c) == 0) ||
               (uVar7 = *(uint *)(plVar13 + 0x181), (int)uVar7 < 0)) {
LAB_1413225d7:
              lVar16 = 0;
            }
            else {
              lVar16 = 0;
              if ((int)uVar7 < DAT_14c9647dc) {
                plVar11 = (longlong *)
                          ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8));
                if (((plVar11 == (longlong *)0x0) ||
                    ((int)plVar11[2] != *(int *)((longlong)plVar13 + 0xc0c))) ||
                   ((*(uint *)(plVar11 + 1) & 0x10200000) != 0)) goto LAB_1413225d7;
                lVar16 = *plVar11;
              }
            }
            if (lVar10 == lVar16) {
              uVar12 = FUN_1401e6c61();
              local_194 = FUN_140df7d8e(plVar13,uVar12);
              if (param_2 == (longlong *)0x0) {
                iVar6 = 0;
                iVar5 = 1;
                uVar12 = 0;
              }
              else {
                uVar12 = FUN_14018b740();
                lVar10 = (**(code **)(*plVar13 + 0x288))(plVar13,uVar12);
                if (lVar10 == 0) {
LAB_1413225df:
                  iVar5 = (**(code **)(*param_2 + 0x28))(param_2);
                }
                else {
                  uVar12 = FUN_14018b740();
                  lVar16 = FUN_144718840(lVar10,uVar12);
                  if ((lVar10 == lVar16) || (lVar16 == 0)) goto LAB_1413225df;
                  FUN_140c4ebe4(&local_168,lVar16,param_2);
                  if (local_168._4_1_ == '\0') goto LAB_1413225df;
                  iVar5 = (int)local_168;
                }
                iVar6 = (**(code **)(*param_2 + 0x28))(param_2);
                if (iVar6 != iVar5) {
                  (**(code **)(*param_2 + 0x38))(param_2,iVar5);
                }
                uVar12 = (**(code **)(*param_2 + 0x10))(param_2);
              }
              local_168 = (code *)((ulonglong)local_168 & 0xffffffffffffff00);
              local_140[0] = 0;
              FUN_1456bb102(&local_168,uVar12);
              FUN_1448729ea(local_170,&local_108,&local_168);
              if (local_e8 == 3) {
                uVar7 = 3;
                fVar21 = local_108;
              }
              else {
                FUN_1400b56fe(&local_e0,&local_108,3);
                fVar21 = 0.0;
                if (local_c0 != 0) {
                  fVar21 = local_e0;
                }
                pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_c0 * 0x120));
                if (pcVar2 != (code *)0x0) {
                  pfVar18 = &local_e0;
                  if (0x18 < local_c8) {
                    pfVar18 = (float *)CONCAT44(uStack_dc,local_e0);
                  }
                  (*pcVar2)(pfVar18);
                }
                if (0x18 < local_c8) {
                  FUN_1400020a8(CONCAT44(uStack_dc,local_e0));
                }
                uVar7 = (uint)local_e8;
              }
              pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar7 * 0x120));
              if (pcVar2 != (code *)0x0) {
                pfVar18 = &local_108;
                if (0x18 < local_f0) {
                  pfVar18 = (float *)CONCAT44(uStack_104,local_108);
                }
                (*pcVar2)(pfVar18);
              }
              if (0x18 < local_f0) {
                FUN_1400020a8(CONCAT44(uStack_104,local_108));
              }
              FUN_1448173f8(local_140);
              if (((char)local_168 == '\x03') && (local_158 != (longlong *)0x0)) {
                LOCK();
                piVar1 = (int *)((longlong)local_158 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*local_158 + 0x10))();
                }
              }
              if ((param_2 != (longlong *)0x0) && (iVar6 != iVar5)) {
                (**(code **)(*param_2 + 0x40))(param_2,iVar6);
              }
              lVar10 = local_180;
              iVar6 = *(int *)(local_180 + 0x38);
              if (iVar6 == 0) {
                fVar20 = 0.0;
                fVar22 = 1.0;
              }
              else {
                if (1 < iVar6) {
                  uVar17 = (ulonglong)(iVar6 - 1U);
                  lVar16 = *(longlong *)(local_180 + 0x30);
                  do {
                    if (local_184 <= *(int *)(lVar16 + 8)) goto LAB_141322737;
                    lVar16 = lVar16 + 0x18;
                    uVar17 = uVar17 - 1;
                  } while (uVar17 != 0);
                }
                lVar16 = *(longlong *)(local_180 + 0x30) + (longlong)(int)(iVar6 - 1U) * 0x18;
LAB_141322737:
                fVar22 = *(float *)(lVar16 + 0xc);
                fVar20 = *(float *)(lVar16 + 0x10);
              }
              fVar23 = 1.0;
              iVar6 = local_194 - iVar5;
              if (iVar6 != 0) {
                iVar8 = -iVar6;
                if (-iVar6 < 0) {
                  iVar8 = iVar6;
                }
                iVar6 = *(uint *)(local_180 + 0x28) + 1;
                pfVar18 = (float *)(*(longlong *)(local_180 + 0x20) +
                                    (ulonglong)*(uint *)(local_180 + 0x28) * 0x18 + 0x10);
                do {
                  pfVar14 = pfVar18;
                  iVar6 = iVar6 + -1;
                  if (iVar6 < 1) {
                    fVar23 = 1.0;
                    goto LAB_141322814;
                  }
                  pfVar18 = pfVar14 + -6;
                } while (iVar8 < (int)pfVar14[-8]);
                if (iVar5 < local_194) {
                  fVar23 = pfVar14[-6];
                }
                else {
                  fVar23 = pfVar14[-7];
                }
              }
LAB_141322814:
              if (plVar13 == param_1) {
                fVar22 = fVar22 + fVar20;
              }
              lVar16 = *(longlong *)(local_180 + 0x108);
              if (lVar16 == 0) {
                uVar12 = FUN_14016979c();
                lVar16 = FUN_14477b664(uVar12);
                *(longlong *)(lVar10 + 0x108) = lVar16;
              }
              fVar23 = fVar21 * fVar22 * fVar23;
              if (*(longlong *)(lVar10 + 0x110) == 0) {
                if ((lVar16 != 0) && (*local_190 != 0)) {
                  plVar11 = *(longlong **)(lVar16 + 0xb8);
                  if ((plVar11 == (longlong *)0x0) ||
                     (cVar4 = (**(code **)(*plVar11 + 0x108))(plVar11), cVar4 == '\0')) {
                    *(undefined8 *)(lVar10 + 0x110) = 0;
                  }
                  else {
                    uVar12 = (**(code **)(*plVar11 + 0x110))(plVar11);
                    lVar16 = FUN_144aff482(uVar12,local_190);
                    *(longlong *)(lVar10 + 0x110) = lVar16;
                    if (lVar16 != 0) goto LAB_1413229a3;
                  }
                }
              }
              else {
LAB_1413229a3:
                local_168 = (code *)((ulonglong)local_168 & 0xffffffffffffff00);
                local_140[0] = 0;
                FUN_1456bb102(&local_168,plVar13);
                local_138 = '\0';
                local_110[0] = 0;
                lVar16 = *(longlong *)(lVar10 + 0x108);
                if (lVar16 == 0) {
                  uVar12 = FUN_14016979c();
                  lVar16 = FUN_14477b664(uVar12);
                  *(longlong *)(lVar10 + 0x108) = lVar16;
                }
                lVar15 = *(longlong *)(lVar10 + 0x110);
                if (lVar15 == 0) {
                  if (lVar16 == 0) {
                    lVar15 = 0;
                  }
                  else {
                    lVar15 = 0;
                    if (*local_190 != 0) {
                      plVar11 = *(longlong **)(lVar16 + 0xb8);
                      if ((plVar11 == (longlong *)0x0) ||
                         (cVar4 = (**(code **)(*plVar11 + 0x108))(plVar11), cVar4 == '\0')) {
                        lVar15 = 0;
                      }
                      else {
                        uVar12 = (**(code **)(*plVar11 + 0x110))(plVar11);
                        lVar15 = FUN_144aff482(uVar12,local_190);
                      }
                      *(longlong *)(lVar10 + 0x110) = lVar15;
                    }
                  }
                }
                FUN_1400606f6(&local_e0,lVar15,&local_168);
                pfVar18 = local_b0;
                if (local_b0 == (float *)0x0) {
                  pfVar18 = &local_e0;
                }
                if (local_a8 < 1) {
                  pfVar18 = (float *)&DAT_14c9a40e0;
                }
                FUN_1400603ec(&local_108,lVar15,pfVar18);
                pfVar18 = local_b0;
                if (local_b0 == (float *)0x0) {
                  pfVar18 = &local_e0;
                }
                FUN_1446fdf58(pfVar18,local_a8);
                if (local_b0 != (float *)0x0) {
                  FUN_1400020a8();
                }
                if (local_e8 == 3) {
                  uVar7 = 3;
                  fVar21 = local_108;
                }
                else {
                  FUN_1400b56fe(&local_e0,&local_108,3);
                  fVar21 = 1.0;
                  if (local_c0 != 0) {
                    fVar21 = local_e0;
                  }
                  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_c0 * 0x120)
                                     );
                  if (pcVar2 != (code *)0x0) {
                    pfVar18 = &local_e0;
                    if (0x18 < local_c8) {
                      pfVar18 = (float *)CONCAT44(uStack_dc,local_e0);
                    }
                    (*pcVar2)(pfVar18);
                  }
                  if (0x18 < local_c8) {
                    FUN_1400020a8(CONCAT44(uStack_dc,local_e0));
                  }
                  uVar7 = (uint)local_e8;
                }
                pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar7 * 0x120));
                if (pcVar2 != (code *)0x0) {
                  pfVar18 = &local_108;
                  if (0x18 < local_f0) {
                    pfVar18 = (float *)CONCAT44(uStack_104,local_108);
                  }
                  (*pcVar2)(pfVar18);
                }
                if (0x18 < local_f0) {
                  FUN_1400020a8(CONCAT44(uStack_104,local_108));
                }
                FUN_1448173f8(local_110);
                if (local_138 != '\0') {
                  if (local_138 == '\x01') {
                    local_130 = 0;
                  }
                  else if ((local_138 == '\x03') && (local_128 != (longlong *)0x0)) {
                    LOCK();
                    piVar1 = (int *)((longlong)local_128 + 0xc);
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (*piVar1 == 0) {
                      (**(code **)(*local_128 + 0x10))();
                    }
                  }
                  local_138 = '\0';
                }
                FUN_1448173f8(local_140);
                if (((char)local_168 == '\x03') && (local_158 != (longlong *)0x0)) {
                  LOCK();
                  piVar1 = (int *)((longlong)local_158 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (**(code **)(*local_158 + 0x10))();
                  }
                }
                fVar23 = fVar23 * fVar21;
              }
              lVar10 = FUN_140d72879();
              if ((longlong)*(int *)(lVar10 + 0xf8) != 0) {
                plVar11 = *(longlong **)(lVar10 + 0xf0);
                lVar10 = (longlong)*(int *)(lVar10 + 0xf8) * 0x18;
                local_178 = param_1;
                do {
                  lVar16 = plVar11[1];
                  if (lVar16 == 0) {
                    uVar12 = FUN_140b1c3dc();
                    lVar16 = FUN_14477b664(uVar12);
                    plVar11[1] = lVar16;
                  }
                  lVar15 = plVar11[2];
                  if (lVar15 == 0) {
                    if (lVar16 == 0) {
                      lVar15 = 0;
                    }
                    else {
                      lVar15 = 0;
                      if (*plVar11 != 0) {
                        plVar3 = *(longlong **)(lVar16 + 0xb8);
                        if ((plVar3 == (longlong *)0x0) ||
                           (cVar4 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar4 == '\0')) {
                          lVar15 = 0;
                        }
                        else {
                          uVar12 = (**(code **)(*plVar3 + 0x110))(plVar3);
                          lVar15 = FUN_144aff482(uVar12,plVar11);
                        }
                        plVar11[2] = lVar15;
                        param_1 = local_178;
                      }
                    }
                  }
                  FUN_1441f03d2(plVar13,lVar15,
                                (longlong)(fVar23 - 9.223372e+18) & (longlong)fVar23 >> 0x3f |
                                (longlong)fVar23);
                  plVar11 = plVar11 + 3;
                  lVar10 = lVar10 + -0x18;
                } while (lVar10 != 0);
              }
            }
          }
        }
        lVar19 = lVar19 + 1;
      } while ((int)lVar19 < *(int *)(lVar9 + 0x238));
    }
  }
LAB_141322db3:
  if ((local_a0 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141322e0c FUN_141322e0c body=228 status=ok
// SIG undefined FUN_141322e0c(void)

longlong FUN_141322e0c(void)

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
  if (DAT_14cba4fc0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1418e961e;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_146522c26;
    local_38 = &LAB_148bd4678;
    local_40 = &LAB_1465c1464;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0xbe0;
    FUN_14081cfa3(L"/Script/OakGame",L"InventoryGadget",&DAT_14cba4fc0,FUN_1465c1442);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cba4fc0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141322ef2 FUN_141322ef2 body=954 status=ok
// SIG undefined FUN_141322ef2(void)

void FUN_141322ef2(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 uVar5;
  char cVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  char cVar9;
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
  undefined8 *local_58;
  code *local_50;
  undefined8 **local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (param_3 != (longlong *)0x0) {
    if (param_2 == 0) {
      uVar7 = 0;
      uVar8 = 0;
      cVar6 = '\0';
      cVar9 = '\0';
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined1 *)(param_2 + 0x50);
      cVar9 = *(char *)(param_2 + 99);
      cVar6 = *(char *)(param_2 + 0x62);
      uVar7 = *(ulonglong *)(param_2 + 0x58) & 0xffffffff00000000;
      uVar8 = *(ulonglong *)(param_2 + 0x58) & 0xffffffff;
    }
    FUN_1406966b6(param_3,&DAT_14cb75f48,uVar5);
    if (DAT_14cb5b388 == 0) {
      local_70 = &local_50;
      local_50 = FUN_141864c34;
      local_60 = FUN_14081d0ea;
      local_68 = (code *)&LAB_146431698;
      local_78 = &LAB_1486775cb;
      local_80 = (code *)&LAB_1464cee35;
      local_88 = L"Game";
      local_90 = 0;
      local_98 = 0x10000005;
      local_a0 = 0x10;
      local_a8 = 0x3a20;
      FUN_14081cfa3(L"/Script/GbxGame",L"GbxCharacter",&DAT_14cb5b388,FUN_1464cee0e);
    }
    if ((*(int *)(DAT_14cb5b388 + 0x38) <= *(int *)(param_3[2] + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(param_3[2] + 0x30) + (longlong)*(int *)(DAT_14cb5b388 + 0x38) * 8) ==
        DAT_14cb5b388 + 0x30)) {
      FUN_1413232d0(param_3 + 0x22b,uVar8 | uVar7);
    }
    uVar1 = FUN_140b040c0();
    plVar2 = (longlong *)FUN_144718840(param_3,uVar1);
    if (plVar2 != (longlong *)0x0) {
      lVar4 = (**(code **)(*plVar2 + 0x20))(plVar2);
      if (lVar4 != 0) {
        if (cVar9 == '\0') {
          FUN_140ba2af2();
        }
        else {
          FUN_140ba2cd0(lVar4,&DAT_14cb75f48,1);
        }
      }
    }
    uVar1 = FUN_1407725cc();
    plVar2 = (longlong *)FUN_144718840(param_3,uVar1);
    if (plVar2 != (longlong *)0x0) {
      if (*(code **)(*plVar2 + 0x10) == (code *)&LAB_144944cea) {
        plVar2 = plVar2 + 0xe1;
      }
      else {
        plVar2 = (longlong *)(**(code **)(*plVar2 + 0x10))(plVar2);
      }
      local_48 = &local_58;
      if (cVar6 == '\0') {
        local_50 = (code *)&LAB_143cbcafc;
      }
      else {
        local_50 = (code *)&LAB_143cbcb14;
      }
      local_58 = &DAT_14cb75f48;
      FUN_1400b7536(plVar2);
    }
    if (DAT_14cb56270 == 0) {
      local_70 = &local_50;
      local_50 = FUN_1449e2820;
      local_60 = FUN_14081d0ea;
      local_68 = FUN_1427b09ee;
      local_78 = &LAB_148630fef;
      local_80 = FUN_1464b6a91;
      local_88 = L"Engine";
      local_90 = 0;
      local_98 = 0x10004001;
      local_a0 = 8;
      local_a8 = 0x28;
      FUN_14081cfa3(L"/Script/GbxGame",L"DamageableInterface",&DAT_14cb56270,&DAT_148630fee);
    }
    plVar2 = (longlong *)FUN_144718840(param_3,DAT_14cb56270);
    if (plVar2 != (longlong *)0x0) {
      lVar4 = (**(code **)(*plVar2 + 0x20))(plVar2);
      if (lVar4 != 0) {
        if (cVar9 == '\0') {
          FUN_1400bc8c2();
        }
        else {
          FUN_1400bc96c(lVar4 + 0x90,&DAT_14cb75f48);
        }
      }
    }
    uVar1 = FUN_14069ce7c();
    plVar2 = (longlong *)(**(code **)(*param_3 + 0x288))(param_3,uVar1);
    if (plVar2 != (longlong *)0x0) {
      uVar1 = FUN_14069ce7c();
      plVar3 = (longlong *)FUN_144718840(plVar2,uVar1);
      if ((plVar2 != plVar3) && (plVar3 != (longlong *)0x0)) {
        lVar4 = (**(code **)(*plVar3 + 0x10))(plVar3);
        if (lVar4 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_c8);
        }
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1413232d0 FUN_1413232d0 body=56 status=ok
// SIG undefined FUN_1413232d0(void)

void FUN_1413232d0(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x10))();
  if (*plVar1 == param_2) {
    return;
  }
  *plVar1 = param_2;
  (**(code **)(*param_1 + 0x20))(param_1);
  FUN_140357eea(param_1);
  return;
}



// FUNCTION 141323308 FUN_141323308 body=77 status=ok
// SIG undefined FUN_141323308(void)

void FUN_141323308(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x28);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-2] != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-4] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 141323356 FUN_141323356 body=316 status=ok
// SIG undefined FUN_141323356(void)

longlong FUN_141323356(longlong *param_1,uint param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  longlong *plVar7;
  undefined1 auStack_68 [32];
  int local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar4 = FUN_141323494();
  if (lVar4 == 0) {
    FUN_1413235ac(param_1,local_48);
    uVar1 = param_3[1];
    *local_40 = *param_3;
    local_40[1] = uVar1;
    local_40[2] = 0;
    local_40[3] = 0;
    FUN_1413f55b8(0,0);
    *(undefined4 *)(local_40 + 4) = 0xffffffff;
    cVar2 = FUN_1413234f6(param_1,param_2,local_40,local_48);
    if (cVar2 == '\0') {
      uVar3 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
      if (uVar3 < 4) {
        iVar6 = 1;
      }
      else {
        uVar5 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
        lVar4 = 0x3f;
        if (uVar5 != 0) {
          for (; uVar5 >> lVar4 == 0; lVar4 = lVar4 + -1) {
          }
        }
        iVar6 = 1 << ((byte)lVar4 & 0x1f);
      }
      if (((int)uVar3 < 1) || (iVar6 <= (int)param_1[9])) {
        param_2 = (int)param_1[9] - 1U & param_2;
        *(uint *)((longlong)local_40 + 0x24) = param_2;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = param_1 + 7;
        }
        *(undefined4 *)(local_40 + 4) =
             *(undefined4 *)
              ((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)param_2) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = param_1 + 7;
        }
        *(int *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)param_2) * 4) =
             local_48[0];
      }
      else {
        *(int *)(param_1 + 9) = iVar6;
        FUN_141323792(param_1);
      }
    }
    lVar4 = *param_1 + (longlong)local_48[0] * 0x28;
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar4 + 0x10;
}



// FUNCTION 141323494 FUN_141323494 body=97 status=ok
// SIG undefined FUN_141323494(void)

longlong * FUN_141323494(longlong *param_1,uint param_2,longlong *param_3)

{
  longlong *plVar1;
  int iVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar1 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar1 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      while( true ) {
        plVar1 = (longlong *)(*param_1 + (longlong)iVar2 * 0x28);
        if ((*plVar1 == *param_3) &&
           (*(longlong *)(*param_1 + 8 + (longlong)iVar2 * 0x28) == param_3[1])) break;
        iVar2 = (int)plVar1[4];
        if (iVar2 == -1) {
          return (longlong *)0x0;
        }
      }
      return plVar1;
    }
  }
  return (longlong *)0x0;
}



// FUNCTION 1413234f6 FUN_1413234f6 body=182 status=ok
// SIG undefined FUN_1413234f6(void)

undefined8 FUN_1413234f6(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

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
  
  if (((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) &&
     ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1)) {
    plVar8 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar8 = (longlong *)param_1[8];
    }
    iVar9 = *(int *)((longlong)plVar8 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar9 != -1) {
      do {
        plVar8 = (longlong *)(*param_1 + (longlong)iVar9 * 0x28);
        if ((*plVar8 == *param_3) &&
           (*(longlong *)(*param_1 + 8 + (longlong)iVar9 * 0x28) == param_3[1])) {
          FUN_1413f55b8(plVar8[2],(int)plVar8[3]);
          if (plVar8[2] != 0) {
            FUN_1400020a8();
          }
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
          FUN_14707181a(param_1,*param_4);
          *param_4 = iVar9;
          return 1;
        }
        iVar9 = (int)plVar8[4];
      } while (iVar9 != -1);
    }
  }
  return 0;
}



// FUNCTION 1413235ac FUN_1413235ac body=485 status=ok
// SIG undefined FUN_1413235ac(void)

int * FUN_1413235ac(longlong *param_1,int *param_2)

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



// FUNCTION 141323792 FUN_141323792 body=727 status=ok
// SIG undefined FUN_141323792(void)

void FUN_141323792(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  longlong *plVar8;
  ulonglong uVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  ulonglong uVar15;
  longlong lVar16;
  int iVar17;
  undefined1 auStack_98 [36];
  int local_74;
  ulonglong local_70;
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar12 = *(uint *)(param_1 + 9);
  if (uVar12 != 0) {
    plVar1 = param_1 + 7;
    FUN_144a1cbf0(plVar1,0,uVar12,4);
    if (0 < (int)uVar12) {
      uVar5 = 0;
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar5) * 4) =
             0xffffffff;
        uVar5 = uVar5 + 1;
      } while (uVar12 != uVar5);
    }
    local_60 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    if ((int)param_1[5] == 0) {
      uVar15 = 1;
      local_58._0_4_ = 0xffffffff;
      local_58._4_4_ = 0;
      local_70 = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      local_70 = local_68 & 0xffffffff;
      uVar15 = local_68 >> 0x20;
    }
    uVar12 = (uint)local_58;
    iVar17 = local_58._4_4_;
    iVar11 = local_50;
    if (local_58._4_4_ < (int)local_60[3]) {
      do {
        local_74 = iVar11;
        lVar10 = *param_1;
        lVar16 = (longlong)iVar17;
        uVar3 = *(undefined8 *)(lVar10 + lVar16 * 0x28);
        uVar4 = *(undefined8 *)(lVar10 + 8 + lVar16 * 0x28);
        uVar5 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar7 = (uint)((ulonglong)uVar3 >> 0x10);
        uVar6 = (uint)uVar3 & 0xffff;
        uVar6 = ((uint)uVar3 << 0x10 | uVar6) + (int)((ulonglong)uVar3 >> 0x20) +
                (uVar7 << 0x13 | uVar7 & 0xffff) + (uVar6 >> 4);
        uVar7 = (uint)uVar4 & 0xffff;
        uVar9 = (longlong)
                (int)((uVar6 >> 2) +
                      ((uint)uVar4 << 0x10 | uVar7) + (int)((ulonglong)uVar4 >> 0x20) +
                      (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar7 >> 4) + uVar6 * 0x40 + 0x9e3779b9 ^
                     uVar6) & (longlong)(int)param_1[9] - 1U;
        iVar11 = (int)uVar9;
        *(int *)(lVar10 + 0x24 + lVar16 * 0x28) = iVar11;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar10 + 0x20 + lVar16 * 0x28) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar9) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar11 & (longlong)(int)param_1[9] - 1U) * 4) =
             iVar17;
        uVar12 = ~(uint)uVar15 & uVar12;
        plVar8 = (longlong *)local_60[2];
        if ((longlong *)local_60[2] == (longlong *)0x0) {
          plVar8 = local_60;
        }
        iVar2 = (int)local_60[3];
        iVar17 = (int)local_70;
        lVar10 = (longlong)iVar17;
        uVar5 = *(uint *)((longlong)plVar8 + lVar10 * 4) & uVar12;
        iVar11 = local_74;
        if (uVar5 == 0) {
          iVar13 = iVar2 + 0x1e;
          if (-1 < iVar2 + -1) {
            iVar13 = iVar2 + -1;
          }
          iVar13 = iVar13 >> 5;
          iVar14 = iVar13;
          if (iVar13 < iVar17) {
            iVar14 = iVar17;
          }
          if (iVar13 <= iVar17) break;
          lVar16 = 0;
          while( true ) {
            iVar11 = iVar11 + 0x20;
            uVar5 = *(uint *)((longlong)plVar8 + lVar16 * 4 + lVar10 * 4 + 4);
            if (uVar5 != 0) break;
            lVar16 = lVar16 + 1;
            if (iVar14 - lVar10 == lVar16) goto LAB_141323a25;
          }
          local_70 = (ulonglong)(iVar17 + (int)lVar16 + 1);
          uVar12 = 0xffffffff;
        }
        uVar15 = (ulonglong)(-uVar5 & uVar5);
        uVar9 = uVar15 * 2 + 1;
        lVar10 = 0x3f;
        if (uVar9 != 0) {
          for (; uVar9 >> lVar10 == 0; lVar10 = lVar10 + -1) {
          }
        }
        iVar17 = (iVar11 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
      } while (iVar17 < iVar2);
    }
  }
LAB_141323a25:
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141323a6a FUN_141323a6a body=617 status=ok
// SIG undefined FUN_141323a6a(void)

void FUN_141323a6a(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  char cVar5;
  undefined8 *puVar6;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined8 local_50;
  undefined8 local_48;
  code *local_40;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_48 = FUN_1446ddbd2();
      local_40 = FUN_1468d96f0;
      local_50 = 0;
      local_58 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    plVar1 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar1[3];
    if ((*(byte *)((longlong)plVar1 + 0x39) & 1) == 0) {
      lVar2 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar1 + 0x44) + lVar2;
      *(longlong *)(param_2 + 0x40) = lVar2;
      pcVar3 = *(code **)(*plVar1 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar1 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar5 = (*pcVar3)(plVar1);
          if (cVar5 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_30);
            goto LAB_141323b55;
          }
        }
        puVar6 = (undefined8 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (puVar6 != &local_30) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_30,puVar6,(int)plVar1[6]);
          }
          else {
            memcpy(&local_30,puVar6,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_50 = CONCAT44(local_50._4_4_,(int)plVar1[6]);
        local_58 = local_58 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_30,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_30,lVar2);
      }
    }
    else {
      puVar6 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar6;
        puVar6 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
LAB_141323b55:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_141323cd4(param_1,local_30);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141323cd4 FUN_141323cd4 body=274 status=ok
// SIG undefined FUN_141323cd4(void)

void FUN_141323cd4(longlong param_1,longlong param_2)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  
  FUN_1414015fe();
  if (param_2 != 0) {
    lVar4 = FUN_140f1f93e();
    if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8
         ) == lVar4 + 0x30)) goto LAB_141323d11;
  }
  param_2 = 0;
LAB_141323d11:
  iVar5 = *(int *)(param_1 + 0xcd8);
  if (0 < iVar5) {
    lVar6 = 0;
    lVar4 = 1;
    do {
      cVar2 = FUN_1418e9524(*(longlong *)(param_1 + 0xcd0) + lVar6,param_2);
      iVar5 = *(int *)(param_1 + 0xcd8);
      if (cVar2 != '\0') {
        if (iVar5 != (int)lVar4) {
          memmove((void *)(*(longlong *)(param_1 + 0xcd0) + lVar4 * 8 + -8),
                  (void *)(*(longlong *)(param_1 + 0xcd0) + lVar4 * 8),
                  (longlong)(iVar5 - (int)lVar4) << 3);
          iVar5 = *(int *)(param_1 + 0xcd8);
        }
        *(int *)(param_1 + 0xcd8) = iVar5 + -1;
        FUN_1414016ce(param_1 + 0xcd0);
        iVar5 = *(int *)(param_1 + 0xcd8);
        break;
      }
      lVar6 = lVar6 + 8;
      bVar1 = lVar4 < iVar5;
      lVar4 = lVar4 + 1;
    } while (bVar1);
  }
  if ((iVar5 == 0) || (*(longlong *)(param_1 + 0xbf8) == 0)) {
    bVar3 = 0;
  }
  else {
    bVar3 = *(byte *)(*(longlong *)(param_1 + 0xbf8) + 0xd8) >> 1 & 1;
  }
  *(byte *)(param_1 + 0xc61) = *(byte *)(param_1 + 0xc61) & 0xfe | bVar3;
  return;
}



// FUNCTION 141323de6 FUN_141323de6 body=45 status=ok
// SIG undefined FUN_141323de6(void)

void FUN_141323de6(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_140d84280();
  FUN_140d84456(uVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 141323e14 FUN_141323e14 body=41 status=ok
// SIG undefined FUN_141323e14(void)

undefined8 * FUN_141323e14(longlong *param_1,undefined8 *param_2)

{
  if (*param_1 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    FUN_140a2633e(*param_1,param_2);
  }
  return param_2;
}



// FUNCTION 141323e3e FUN_141323e3e body=251 status=ok
// SIG undefined FUN_141323e3e(void)

void FUN_141323e3e(longlong param_1,int *param_2,int *param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(param_1 + 0x170) != 0) {
    if (*param_3 != -1) {
      uVar2 = FUN_1447210f0(*(undefined8 *)(param_1 + 0x48));
      local_30 = FUN_1402ef754(uVar2,*param_3);
      cVar1 = FUN_148cd7f78(param_1 + 0x168);
      if (cVar1 != '\0') {
        if (*(char *)(param_1 + 0xd0) != '\0') {
          if (*(char *)(param_1 + 0xd0) != '\x03') {
                    /* WARNING: Subroutine does not return */
            FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
          }
          goto LAB_141323e7a;
        }
        goto LAB_141323f31;
      }
    }
    if (*param_2 != -1) {
      uVar2 = FUN_1447210f0(*(undefined8 *)(param_1 + 0x48));
      local_30 = FUN_1402ef754(uVar2,*param_2);
      cVar1 = FUN_148cd7f78(param_1 + 0x168);
      if ((cVar1 != '\0') && (*(char *)(param_1 + 0xd0) != '\x01')) {
        if (*(char *)(param_1 + 0xd0) != '\x02') {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
        }
LAB_141323f31:
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
      }
    }
  }
LAB_141323e7a:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141323f6e FUN_141323f6e body=23 status=ok
// SIG undefined FUN_141323f6e(void)

void FUN_141323f6e(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  
  for (lVar1 = *param_2; (lVar1 != 0 && ((*(uint *)(lVar1 + 8) & 0x30) == 0));
      lVar1 = *(longlong *)(lVar1 + 0x20)) {
  }
  return;
}



// FUNCTION 141323f85 FUN_141323f85 body=58 status=ok
// SIG undefined FUN_141323f85(void)

void FUN_141323f85(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = 0;
    do {
      *(undefined8 *)(param_1 + lVar1) = 0xffffffffffffffff;
      *(undefined4 *)(param_1 + 8 + lVar1) = 0xffffffff;
      *(undefined4 *)(param_1 + 0xc + lVar1) = *(undefined4 *)(param_2 + 0xc + lVar1);
      *(undefined2 *)(param_1 + 0x10 + lVar1) = *(undefined2 *)(param_2 + 0x10 + lVar1);
      lVar1 = lVar1 + 0x14;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 141323fc0 FUN_141323fc0 body=373 status=ok
// SIG undefined FUN_141323fc0(void)

void FUN_141323fc0(longlong param_1,longlong param_2,uint param_3)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  
  if (*(short *)(param_2 + 2) < 0) {
    return;
  }
  if ((-1 < *(int *)(param_2 + 0x50)) &&
     ((param_3 == 0x200 || ((param_3 < 5 && ((0x16U >> (param_3 & 0x1f) & 1) != 0)))))) {
    cVar3 = FUN_144729dda(param_1 + 0x90);
    if (cVar3 != '\0') {
      lVar4 = FUN_14479d2ce(param_1 + 0x90);
      if ((*(longlong *)(lVar4 + 0x1e0) != 0) &&
         (lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0x1e0) + 0x30), lVar4 != 0)) {
        lVar2 = param_2 + 0x50;
        if (param_3 == 0x200) {
          if (*(longlong *)(param_2 + 0x40) != 0) {
            FUN_1413244d6(lVar4,lVar2);
          }
        }
        else {
          if (param_3 != 2) {
            if ((param_3 != 4) && (param_3 != 1)) goto LAB_141323fe5;
            if ((*(longlong *)(param_2 + 0x10) != 0) && (cVar3 = FUN_144729dda(), cVar3 != '\0')) {
              FUN_1489b07d6(lVar4,lVar2);
              goto LAB_141323fe5;
            }
            if (param_3 != 2) goto LAB_141323fe5;
          }
          cVar3 = FUN_144729dda(param_2 + 0x18);
          if (cVar3 != '\0') {
            FUN_141324546(lVar4,lVar2);
          }
        }
      }
    }
  }
LAB_141323fe5:
  iVar1 = *(int *)(param_1 + 0x50);
  lVar4 = (longlong)iVar1;
  *(uint *)(param_1 + 0x50) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x54) < iVar1 + 1U) {
    FUN_141324360(param_1 + 0x48,iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x48);
  iVar1 = DAT_14c763988 + 1;
  *(int *)(lVar2 + lVar4 * 0xc) = DAT_14c763988;
  DAT_14c763988 = iVar1;
  *(undefined2 *)(lVar2 + 4 + lVar4 * 0xc) = 0xffff;
  *(undefined4 *)(lVar2 + 8 + lVar4 * 0xc) = 0;
  *(undefined2 *)(lVar2 + 4 + lVar4 * 0xc) = *(undefined2 *)(param_2 + 2);
  *(uint *)(lVar2 + 8 + lVar4 * 0xc) = param_3;
  FUN_141324136(param_1);
  return;
}



// FUNCTION 141324136 FUN_141324136 body=553 status=ok
// SIG undefined FUN_141324136(void)

void FUN_141324136(longlong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_c8 [40];
  undefined8 *local_a0;
  int local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  byte local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (((((*(char *)(param_1 + 0x80) == '\0') && (*(longlong *)(param_1 + 0x88) == 0)) &&
       (*(int *)(param_1 + 0x94) != 0)) &&
      ((uVar1 = *(uint *)(param_1 + 0x90), -1 < (int)uVar1 && ((int)uVar1 < DAT_14c9647dc)))) &&
     ((plVar5 = (longlong *)
                ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
      plVar5 != (longlong *)0x0 &&
      (((int)plVar5[2] == *(int *)(param_1 + 0x94) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))))
     )) {
    if ((*(uint *)(plVar5 + 1) & 0x10200000) == 0) {
      lVar3 = *plVar5;
    }
    else {
      lVar3 = 0;
    }
    if ((*(longlong *)(lVar3 + 0x30) != 0) &&
       (lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x30) + 0x360), lVar3 != 0)) {
      if (*(longlong *)(lVar3 + 0x1f0) == 0) {
        puVar4 = (undefined8 *)(lVar3 + 0x458);
      }
      else {
        puVar4 = (undefined8 *)(*(longlong *)(lVar3 + 0x1f0) + 0xf0);
      }
      uVar2 = *puVar4;
      local_a0 = (undefined8 *)0x0;
      local_98 = 0;
      FUN_1446efa72(&local_a0,0,2,0x10);
      local_98 = 2;
      *local_a0 = &PTR_LAB_14a1c8830;
      LOCK();
      UNLOCK();
      lVar6 = DAT_14c758608 + 1;
      lVar3 = DAT_14c758608 + 1;
      if (lVar6 == 0) {
        LOCK();
        UNLOCK();
        lVar6 = DAT_14c758608 + 2;
        lVar3 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar3;
      local_a0[2] = lVar6;
      *local_a0 = &PTR_FUN_14b410750;
      local_a0[3] = param_1;
      local_88 = 0;
      local_80 = 0;
      FUN_14487d8d8(&local_88,&local_a0);
      local_48 = 1;
      FUN_14016fdb0(uVar2,&local_90,&local_88);
      (*(code *)(&PTR_LAB_14a1c87a0)[local_48])(&local_88);
      *(undefined8 *)(param_1 + 0x88) = local_90;
      if (local_98 != 0) {
        if (local_a0 == (undefined8 *)0x0) goto LAB_14132416c;
        (**(code **)*local_a0)(local_a0,0);
        FUN_1446efa72(&local_a0,0,0,0x10);
        local_98 = 0;
      }
      if (local_a0 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
  }
LAB_14132416c:
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141324360 FUN_141324360 body=373 status=ok
// SIG undefined FUN_141324360(void)

void FUN_141324360(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1413243e9;
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
LAB_1413243e9:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0xc)) {
    uVar7 = uVar5 / 0xc & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0xc,4);
  return;
}



// FUNCTION 1413244d6 FUN_1413244d6 body=112 status=ok
// SIG undefined FUN_1413244d6(void)

void FUN_1413244d6(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar4 = FUN_140b9ffa8();
  if ((lVar4 != 0) && (iVar1 = *(int *)(param_1 + 200), (longlong)iVar1 != 0)) {
    lVar2 = *(longlong *)(param_1 + 0xc0);
    lVar5 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar5);
      if ((lVar3 != 0) && (*(char *)(lVar3 + 0xea) == '\x01')) {
        FUN_1458f0160(param_1,lVar4,lVar3 + 0x50);
      }
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar1 * 8 != lVar5);
  }
  return;
}



// FUNCTION 141324546 FUN_141324546 body=112 status=ok
// SIG undefined FUN_141324546(void)

void FUN_141324546(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar4 = FUN_140b9ffa8();
  if ((lVar4 != 0) && (iVar1 = *(int *)(param_1 + 200), (longlong)iVar1 != 0)) {
    lVar2 = *(longlong *)(param_1 + 0xc0);
    lVar5 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar5);
      if ((lVar3 != 0) && (*(char *)(lVar3 + 0xe9) == '\x01')) {
        FUN_1458f0160(param_1,lVar4,lVar3 + 0x50);
      }
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar1 * 8 != lVar5);
  }
  return;
}



// FUNCTION 1413245b6 FUN_1413245b6 body=1219 status=ok
// SIG undefined FUN_1413245b6(void)

void FUN_1413245b6(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  code *local_60;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_18 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_68 = FUN_1446ddbd2();
      local_60 = FUN_1468d96f0;
      local_70 = 0;
      local_78 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_18);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_18);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_18 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_18);
    }
  }
  local_30 = 0;
  local_28 = 0x3004;
  local_20 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c947e70) {
    FUN_144b3d300(&DAT_14c947e70);
    if (DAT_14c947e70 == -1) {
      local_68 = FUN_1446ddbd2();
      local_60 = FUN_14170fd90;
      local_70 = 0x8000000000000000;
      local_78 = 0x8001;
      FUN_14000176a(&DAT_14c947e20,L"FGameDataHandleProperty",0);
      atexit(FUN_1427b4416);
      _Init_thread_footer(&DAT_14c947e70);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_30);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_30);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_30 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_30);
    }
  }
  local_38 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_68 = FUN_1446ddbd2();
      local_60 = FUN_1468d96f0;
      local_70 = 0;
      local_78 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_38);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_38);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_38 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_38);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_50 = local_30;
  local_48 = local_28;
  local_40 = 0;
  FUN_141324a7a(local_18,&local_50,local_38);
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141324a7a FUN_141324a7a body=310 status=ok
// SIG undefined FUN_141324a7a(void)

void FUN_141324a7a(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
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
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1 != 0) {
    if (DAT_14cb56270 == 0) {
      local_40 = &local_28;
      local_28 = FUN_1449e2820;
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
    plVar1 = (longlong *)FUN_144718840(param_1,DAT_14cb56270);
    if (plVar1 != (longlong *)0x0) {
      lVar2 = (**(code **)(*plVar1 + 0x20))(plVar1);
      if (lVar2 != 0) {
        (**(code **)(*plVar1 + 0x20))(plVar1);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_98);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141324bcc FUN_141324bcc body=2399 status=ok
// SIG undefined FUN_141324bcc(void)

void FUN_141324bcc(longlong *param_1,longlong *param_2,longlong *param_3)

{
  bool bVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong *plVar12;
  longlong *plVar13;
  uint uVar14;
  int iVar15;
  undefined4 *puVar16;
  longlong *plVar17;
  int iVar18;
  longlong lVar19;
  int iVar20;
  longlong *plVar21;
  undefined1 auStack_f8 [40];
  longlong *local_d0;
  longlong *local_c8;
  longlong *local_c0;
  longlong *local_b8;
  longlong *local_b0;
  longlong *local_a8;
  ulonglong local_a0;
  longlong *local_98;
  longlong *local_90;
  longlong local_88;
  longlong *local_80;
  longlong *local_78;
  longlong *local_70;
  undefined4 local_68;
  undefined8 local_60;
  longlong *local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  plVar6 = (longlong *)param_2[2];
  local_c8 = param_3;
  if (plVar6 == (longlong *)0x0) {
    local_78 = (longlong *)*param_2;
    FUN_1446dcdd4(&local_70);
    if (DAT_14cb77de0 == 0) {
      plVar6 = (longlong *)0x0;
    }
    else {
      plVar6 = (longlong *)FUN_144837462(DAT_14cb77de0,&local_70);
    }
    if (local_58 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    param_2[2] = (longlong)plVar6;
    if (plVar6 == (longlong *)0x0) goto LAB_141325484;
  }
  lVar7 = (**(code **)(*plVar6 + 8))(plVar6);
  lVar8 = FUN_141845ccc();
  if (((lVar8 == 0) || (*(int *)(lVar7 + 0x38) < *(int *)(lVar8 + 0x38))) ||
     (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) !=
      lVar8 + 0x30)) {
    lVar7 = (**(code **)(*plVar6 + 8))(plVar6);
    lVar8 = FUN_141845d40();
    if (((lVar8 == 0) || (*(int *)(lVar7 + 0x38) < *(int *)(lVar8 + 0x38))) ||
       (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) !=
        lVar8 + 0x30)) {
      lVar7 = (**(code **)(*plVar6 + 8))(plVar6);
      lVar8 = FUN_14049c336();
      if (((lVar8 == 0) || (*(int *)(lVar7 + 0x38) < *(int *)(lVar8 + 0x38))) ||
         (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) !=
          lVar8 + 0x30)) {
        lVar7 = (**(code **)(*plVar6 + 8))(plVar6);
        lVar8 = FUN_141845d06();
        if (((lVar8 == 0) || (*(int *)(lVar7 + 0x38) < *(int *)(lVar8 + 0x38))) ||
           (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) !=
            lVar8 + 0x30)) {
          lVar7 = (**(code **)(*plVar6 + 8))(plVar6);
          lVar8 = FUN_143c38d58();
          if (((lVar8 != 0) && (*(int *)(lVar8 + 0x38) <= *(int *)(lVar7 + 0x38))) &&
             ((*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) ==
               lVar8 + 0x30 &&
              (local_c0 = (longlong *)(longlong)(int)param_1[9], local_c0 != (longlong *)0x0)))) {
            param_2 = (longlong *)*param_2;
            local_a8 = (longlong *)param_1[8];
            puVar16 = *(undefined4 **)(*local_a8 + 8);
            if (puVar16 == (undefined4 *)0x0) {
              puVar16 = &DAT_14c9485f0;
            }
            if (DAT_14c947fe0 == 0) {
              lVar7 = FUN_14001cc68(0x140,0x10);
              FUN_1456b2032(lVar7);
              DAT_14c947fe0 = lVar7;
            }
            FUN_140045924(DAT_14c947fe0,&local_70,puVar16,1);
            plVar6 = local_a8;
            local_b0 = (longlong *)0x0;
            bVar3 = 0;
            local_b8 = param_2;
            if (local_70 == param_2) {
              bVar3 = FUN_1409d2f40(local_a8 + 2,local_c8);
            }
            local_88 = -(longlong)local_c0;
            local_90 = plVar6 + 6;
            uVar10 = 0;
            local_d0 = param_1;
LAB_141324e0c:
            do {
              uVar14 = (int)uVar10 + 1;
              if ((int)uVar14 < (int)local_c0) {
                lVar8 = (longlong)(int)uVar10;
                local_98 = (longlong *)(lVar8 + 1);
                lVar7 = local_88 + lVar8;
                local_80 = (longlong *)(lVar8 * 0x20);
                plVar13 = local_90 + lVar8 * 4;
                bVar1 = true;
                lVar19 = 0;
                local_a0 = uVar10;
                do {
                  puVar16 = *(undefined4 **)(plVar13[-2] + 8);
                  if (puVar16 == (undefined4 *)0x0) {
                    puVar16 = &DAT_14c9485f0;
                  }
                  if (DAT_14c947fe0 == 0) {
                    lVar9 = FUN_14001cc68(0x140,0x10);
                    FUN_1456b2032(lVar9);
                    DAT_14c947fe0 = lVar9;
                  }
                  FUN_140045924(DAT_14c947fe0,&local_70,puVar16,1);
                  plVar6 = local_a8;
                  if (local_70 == local_b8) {
                    bVar4 = FUN_1409d2f40(plVar13,local_c8);
                    if (((bVar4 ^ bVar3) & 1) != 0) {
                      uVar10 = (ulonglong)(uint)((int)local_98 + (int)lVar19);
                      uVar11 = local_a0;
                      plVar6 = local_a8;
                      param_1 = local_d0;
                      goto LAB_141324f5b;
                    }
                  }
                  else if ((bVar3 & 1) != 0) {
                    FUN_143c38609((longlong)local_80 + (longlong)local_a8,(int)lVar19 + 1);
                    param_1 = local_d0;
                    if (!bVar1) goto LAB_14132547a;
                    uVar10 = (longlong)local_98 + lVar19;
                    bVar3 = 0;
                    goto LAB_141324e0c;
                  }
                  bVar1 = lVar8 + lVar19 + 2 < (longlong)local_c0;
                  lVar19 = lVar19 + 1;
                  plVar13 = plVar13 + 4;
                } while (lVar7 + 1 + lVar19 != 0);
                uVar10 = (ulonglong)local_c0 & 0xffffffff;
                uVar11 = local_a0;
                plVar6 = local_a8;
                param_1 = local_d0;
              }
              else {
                bVar1 = false;
                uVar11 = uVar10;
                uVar10 = (ulonglong)uVar14;
              }
LAB_141324f5b:
              iVar5 = (int)uVar11;
              iVar18 = (int)uVar10 - iVar5;
              if ((bVar3 & 1) == 0) {
                iVar15 = (int)local_b0;
                if (iVar15 != iVar5) {
                  memmove(plVar6 + (longlong)iVar15 * 4,plVar6 + (longlong)iVar5 * 4,
                          (longlong)iVar18 << 5);
                }
                local_b0 = (longlong *)(ulonglong)(uint)(iVar15 + iVar18);
                bVar3 = 1;
                if (!bVar1) break;
                goto LAB_141324e0c;
              }
              FUN_143c38609(plVar6 + (longlong)iVar5 * 4,iVar18);
              bVar3 = 0;
            } while (bVar1);
LAB_14132547a:
            *(int *)(param_1 + 9) = (int)local_b0;
          }
        }
        else {
          local_70 = (longlong *)*param_2;
          local_68 = (undefined4)param_2[1];
          local_60 = 0;
          local_58 = local_c8;
          FUN_14882a6cc(param_1 + 6);
        }
      }
      else {
        local_70 = (longlong *)*param_2;
        local_68 = (undefined4)param_2[1];
        local_60 = 0;
        local_58 = local_c8;
        FUN_14620b520(param_1 + 2);
      }
    }
    else {
      plVar6 = (longlong *)*param_2;
      local_68 = (undefined4)param_2[1];
      local_60 = 0;
      local_58 = local_c8;
      iVar5 = (int)param_1[1];
      lVar7 = (longlong)iVar5;
      local_70 = plVar6;
      if (lVar7 != 0) {
        plVar13 = (longlong *)*param_1;
        puVar16 = &DAT_14c9485f0;
        if (*(undefined4 **)(*plVar13 + 8) != (undefined4 *)0x0) {
          puVar16 = *(undefined4 **)(*plVar13 + 8);
        }
        if (DAT_14c947fe0 == 0) {
          lVar8 = FUN_14001cc68(0x140,0x10);
          FUN_1456b2032(lVar8);
          DAT_14c947fe0 = lVar8;
        }
        FUN_140045924(DAT_14c947fe0,&local_78,puVar16);
        iVar18 = 0;
        if (local_78 == plVar6) {
          uVar14 = FUN_1409d2f40(plVar13 + 2,local_c8);
          uVar10 = (ulonglong)uVar14;
        }
        else {
          uVar10 = 0;
        }
        plVar6 = plVar13 + 4;
        local_d0 = param_1;
        local_b8 = plVar13;
        iVar15 = 0;
        do {
          local_c0 = (longlong *)CONCAT44(local_c0._4_4_,iVar18);
          uVar11 = uVar10 ^ 1;
          lVar8 = (longlong)iVar15;
          iVar18 = iVar15 + 1;
          if (iVar15 + 1 < iVar5) {
            iVar18 = iVar5;
          }
          plVar13 = plVar6 + lVar8 * 4;
          lVar19 = lVar8;
          iVar20 = iVar15;
          do {
            lVar19 = lVar19 + 1;
            iVar2 = iVar18;
            if (lVar7 <= lVar19) break;
            local_a0 = CONCAT44(local_a0._4_4_,(int)uVar11);
            local_98 = (longlong *)CONCAT44(local_98._4_4_,iVar20);
            local_c8 = plVar6;
            bVar3 = FUN_14654b3c8(&local_70,plVar13);
            uVar11 = local_a0 & 0xffffffff;
            iVar20 = (int)local_98 + 1;
            plVar13 = plVar13 + 4;
            plVar6 = local_c8;
            iVar2 = iVar20;
          } while (((byte)uVar10 & 1) == bVar3);
          plVar13 = local_d0;
          iVar20 = iVar2 - iVar15;
          if ((uVar10 & 1) == 0) {
            iVar18 = (int)local_c0;
            if ((int)local_c0 != iVar15) {
              local_c8 = plVar6;
              memmove(local_b8 + (longlong)(int)local_c0 * 4,local_b8 + lVar8 * 4,
                      (longlong)iVar20 << 5);
              plVar6 = local_c8;
            }
            iVar18 = iVar18 + iVar20;
          }
          else {
            FUN_140d9affe(local_b8 + lVar8 * 4,iVar20);
            plVar13 = local_d0;
            iVar18 = (int)local_c0;
          }
          uVar10 = uVar11;
          iVar15 = iVar2;
        } while (lVar19 < lVar7);
        *(int *)(plVar13 + 1) = iVar18;
      }
    }
  }
  else {
    uVar10 = (ulonglong)(int)param_1[5];
    if (uVar10 != 0) {
      param_2 = (longlong *)*param_2;
      plVar6 = (longlong *)param_1[4];
      puVar16 = *(undefined4 **)(*plVar6 + 8);
      if (puVar16 == (undefined4 *)0x0) {
        puVar16 = &DAT_14c9485f0;
      }
      if (DAT_14c947fe0 == 0) {
        lVar7 = FUN_14001cc68(0x140,0x10);
        FUN_1456b2032(lVar7);
        DAT_14c947fe0 = lVar7;
      }
      FUN_140045924(DAT_14c947fe0,&local_70,puVar16,1);
      plVar17 = (longlong *)0x0;
      plVar13 = (longlong *)0x0;
      local_98 = param_2;
      if (local_70 == param_2) {
        uVar14 = FUN_1409d2f40(plVar6 + 2,local_c8);
        plVar13 = (longlong *)(ulonglong)uVar14;
      }
      plVar21 = (longlong *)-uVar10;
      local_80 = plVar6 + 6;
      plVar12 = (longlong *)0x0;
      local_d0 = param_1;
      local_b0 = plVar6;
      local_a0 = uVar10;
      local_90 = plVar21;
LAB_14132505c:
      do {
        uVar14 = (int)plVar12 + 1;
        if ((int)uVar14 < (int)uVar10) {
          lVar8 = (longlong)(int)plVar12;
          local_88 = (longlong)plVar21 + lVar8 + 1;
          plVar6 = local_80 + lVar8 * 4;
          bVar1 = true;
          lVar7 = 0;
          local_c0 = plVar13;
          local_b8 = plVar17;
          local_a8 = plVar12;
          do {
            puVar16 = *(undefined4 **)(plVar6[-2] + 8);
            if (puVar16 == (undefined4 *)0x0) {
              puVar16 = &DAT_14c9485f0;
            }
            if (DAT_14c947fe0 == 0) {
              lVar19 = FUN_14001cc68(0x140,0x10);
              FUN_1456b2032(lVar19);
              DAT_14c947fe0 = lVar19;
            }
            FUN_140045924(DAT_14c947fe0,&local_70,puVar16,1);
            uVar10 = local_a0;
            if (local_70 == local_98) {
              bVar3 = FUN_1409d2f40(plVar6,local_c8);
              if (((bVar3 ^ (byte)local_c0) & 1) != 0) {
                plVar12 = (longlong *)(ulonglong)(uint)((int)(lVar8 + 1) + (int)lVar7);
                plVar6 = local_a8;
                plVar13 = local_c0;
                plVar17 = local_b8;
                param_1 = local_d0;
                uVar10 = local_a0;
                plVar21 = local_90;
                goto LAB_14132517b;
              }
            }
            else if (((ulonglong)local_c0 & 1) != 0) {
              FUN_140d9b04b(local_b0 + lVar8 * 4,(int)lVar7 + 1);
              plVar17 = local_b8;
              param_1 = local_d0;
              if (!bVar1) goto LAB_1413253f0;
              plVar13 = (longlong *)0x0;
              plVar12 = (longlong *)(lVar8 + 1 + lVar7 & 0xffffffff);
              plVar21 = local_90;
              goto LAB_14132505c;
            }
            bVar1 = lVar8 + lVar7 + 2 < (longlong)local_a0;
            lVar7 = lVar7 + 1;
            plVar6 = plVar6 + 4;
          } while (local_88 + lVar7 != 0);
          plVar12 = (longlong *)(local_a0 & 0xffffffff);
          plVar6 = local_a8;
          plVar13 = local_c0;
          plVar17 = local_b8;
          param_1 = local_d0;
          uVar10 = local_a0;
          plVar21 = local_90;
        }
        else {
          bVar1 = false;
          plVar6 = plVar12;
          plVar12 = (longlong *)(ulonglong)uVar14;
        }
LAB_14132517b:
        iVar5 = (int)plVar6;
        iVar18 = (int)plVar12 - iVar5;
        if (((ulonglong)plVar13 & 1) == 0) {
          iVar15 = (int)plVar17;
          if (iVar15 != iVar5) {
            plVar13 = local_b0 + (longlong)iVar15 * 4;
            memmove(plVar13,local_b0 + (longlong)iVar5 * 4,(longlong)iVar18 << 5);
          }
          plVar17 = (longlong *)(ulonglong)(uint)(iVar15 + iVar18);
          plVar13 = (longlong *)CONCAT71((int7)((ulonglong)plVar13 >> 8),1);
          if (!bVar1) break;
          goto LAB_14132505c;
        }
        FUN_140d9b04b(local_b0 + (longlong)iVar5 * 4,iVar18);
        plVar13 = (longlong *)0x0;
      } while (bVar1);
LAB_1413253f0:
      *(int *)(param_1 + 5) = (int)plVar17;
    }
  }
LAB_141325484:
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14132552c FUN_14132552c body=49 status=ok
// SIG undefined FUN_14132552c(void)

longlong FUN_14132552c(void)

{
  if (DAT_14c99e5a0 == 0) {
    FUN_140f50038(&DAT_14c99e5a0,&PTR_s__Script_AudioExtensions_14a1380a7_1_14a138088);
  }
  return DAT_14c99e5a0;
}



// FUNCTION 14132555d FUN_14132555d body=49 status=ok
// SIG undefined FUN_14132555d(void)

longlong FUN_14132555d(void)

{
  if (DAT_14caa1300 == 0) {
    FUN_140f50038(&DAT_14caa1300,&PTR_s__Script_Foliage_14a39a230);
  }
  return DAT_14caa1300;
}



// FUNCTION 14132558e FUN_14132558e body=49 status=ok
// SIG undefined FUN_14132558e(void)

longlong FUN_14132558e(void)

{
  if (DAT_14cab4008 == 0) {
    FUN_140f50038(&DAT_14cab4008,&PTR_s__Script_Constraints_14a4996ed_3_14a4996d0);
  }
  return DAT_14cab4008;
}



// FUNCTION 1413255c0 FUN_1413255c0 body=228 status=ok
// SIG undefined FUN_1413255c0(void)

longlong FUN_1413255c0(void)

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
  if (DAT_14cae8d78 == 0) {
    local_30 = &local_10;
    local_10 = FUN_141030f22;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_142b4754c;
    local_38 = &LAB_147b976f5;
    local_40 = &LAB_1463e7e86;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x438;
    FUN_14081cfa3(L"/Script/Engine",L"LevelInstance",&DAT_14cae8d78,FUN_1463e7e64);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cae8d78;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1413256a6 FUN_1413256a6 body=228 status=ok
// SIG undefined FUN_1413256a6(void)

longlong FUN_1413256a6(void)

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
  if (DAT_14cb55dc0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_14862d5ea;
    local_40 = &LAB_1459bedaa;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/GbxGame",L"ClimbableInterface",&DAT_14cb55dc0,FUN_1464b590e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb55dc0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14132578b FUN_14132578b body=49 status=ok
// SIG undefined FUN_14132578b(void)

longlong FUN_14132578b(void)

{
  if (DAT_14cc0baf0 == 0) {
    FUN_140f50038(&DAT_14cc0baf0,&PTR_s__Script_InterchangeCore_14bc1fb28);
  }
  return DAT_14cc0baf0;
}



// FUNCTION 1413257bc FUN_1413257bc body=49 status=ok
// SIG undefined FUN_1413257bc(void)

longlong FUN_1413257bc(void)

{
  if (DAT_14cc14be0 == 0) {
    FUN_140f50038(&DAT_14cc14be0,&PTR_s__Script_InterchangePipelines_14bcbde80);
  }
  return DAT_14cc14be0;
}



// FUNCTION 1413257ed FUN_1413257ed body=49 status=ok
// SIG undefined FUN_1413257ed(void)

longlong FUN_1413257ed(void)

{
  if (DAT_14cc1de40 == 0) {
    FUN_140f50038(&DAT_14cc1de40,&PTR_s__Script_LiveLink_14bd26cf8);
  }
  return DAT_14cc1de40;
}



// FUNCTION 14132581e FUN_14132581e body=49 status=ok
// SIG undefined FUN_14132581e(void)

longlong FUN_14132581e(void)

{
  if (DAT_14cc268c8 == 0) {
    FUN_140f50038(&DAT_14cc268c8,&PTR_s__Script_GbxVegetation_14be7e146_2_14be7e128);
  }
  return DAT_14cc268c8;
}



// FUNCTION 141325850 FUN_141325850 body=3426 status=ok
// SIG undefined FUN_141325850(void)

void FUN_141325850(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  byte bVar2;
  wint_t wVar3;
  int iVar4;
  code *pcVar5;
  undefined8 uVar6;
  double dVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  ushort uVar11;
  int iVar12;
  uint uVar13;
  wint_t *pwVar14;
  longlong *plVar15;
  longlong *plVar16;
  longlong *plVar17;
  longlong lVar18;
  undefined4 *puVar19;
  ulonglong uVar20;
  undefined4 *puVar21;
  ulonglong uVar22;
  bool bVar23;
  float fVar24;
  float fVar25;
  undefined4 uVar26;
  float fVar27;
  undefined4 uVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  float fVar38;
  float fVar39;
  undefined1 auStack_298 [32];
  float *local_278;
  longlong local_270;
  undefined4 local_268;
  float local_254;
  wint_t *local_250;
  ulonglong local_248;
  longlong *local_240;
  ulonglong local_238;
  undefined8 local_230;
  undefined8 local_228;
  float local_21c;
  float local_218;
  float local_214;
  float local_210;
  float local_20c;
  float local_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  longlong local_1f8;
  wint_t *local_1f0;
  longlong local_1e8;
  undefined8 uStack_1e0;
  undefined4 local_1d4;
  float local_1d0;
  float local_1cc;
  float local_1c8;
  float local_1c4;
  undefined8 local_1c0;
  undefined4 local_1b8;
  undefined8 local_1b4;
  undefined4 local_1ac;
  wint_t *local_1a8;
  wint_t *local_1a0;
  double local_198 [2];
  longlong *local_188;
  int *local_180;
  longlong *local_178;
  int *local_170;
  longlong local_168;
  uint *local_160;
  int local_154;
  int local_150;
  uint local_14c;
  undefined4 local_148 [22];
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_298;
  lVar18 = *(longlong *)(param_1 + 0x618);
  if ((lVar18 == 0) || (*(char *)(lVar18 + 0x30) != '\x01')) {
    local_1e8 = 0;
    uStack_1e0 = 0;
    if (*(int *)(param_1 + 0x5f4) < 0) {
      *(undefined4 *)(param_1 + 0x5f0) = 0;
      FUN_147a3b63a(param_1 + 0x5e8);
      lVar18 = *(longlong *)(param_1 + 0x618);
    }
    else {
      *(undefined4 *)(param_1 + 0x5f0) = 0;
    }
    if (lVar18 != 0) {
      plVar15 = *(longlong **)(param_1 + 0x630);
      if (*(code **)(*plVar15 + 0x50) != FUN_144828418) {
        plVar15 = (longlong *)(**(code **)(*plVar15 + 0x50))();
      }
      FUN_1447a1fc0(plVar15);
      plVar15 = *(longlong **)(param_1 + 0x630);
      pcVar5 = *(code **)(*plVar15 + 0x28);
      if (pcVar5 == FUN_14482841c) {
        plVar16 = plVar15 + 3;
        if (plVar15[5] != 0) {
          plVar16 = (longlong *)(plVar15[5] + 8);
        }
      }
      else if (pcVar5 == (code *)&LAB_14010c34c) {
        plVar16 = plVar15 + 2;
      }
      else {
        plVar16 = (longlong *)(*pcVar5)();
      }
      if (1 < (int)plVar16[1]) {
        plVar15 = (longlong *)(param_1 + 0x3b8);
        local_21c = ((float)*(int *)(*(longlong *)(param_1 + 0x618) + 0x6c) +
                    *(float *)(param_1 + 0x648)) * *(float *)(param_1 + 0x640);
        local_160 = &local_14c;
        local_14c = 0xffffffff;
        local_180 = &local_150;
        local_150 = 0;
        local_170 = &local_154;
        local_154 = 0;
        local_188 = &local_1e8;
        uVar13 = *(uint *)(param_1 + 0x3c0);
        plVar16 = *(longlong **)(param_1 + 0x630);
        local_178 = plVar15;
        local_168 = param_1;
        if (*(code **)(*plVar16 + 0x50) != FUN_144828418) {
          plVar16 = (longlong *)(**(code **)(*plVar16 + 0x50))();
        }
        uVar22 = (ulonglong)(uVar13 ^ 0x7fffffff) * 0x2aaaaaab >> 0x20;
        FUN_1447a1fc0(plVar16);
        plVar16 = *(longlong **)(param_1 + 0x630);
        pcVar5 = *(code **)(*plVar16 + 0x28);
        if (pcVar5 == FUN_14482841c) {
          plVar17 = plVar16 + 3;
          if (plVar16[5] != 0) {
            plVar17 = (longlong *)(plVar16[5] + 8);
          }
        }
        else if (pcVar5 == (code *)&LAB_14010c34c) {
          plVar17 = plVar16 + 2;
        }
        else {
          plVar17 = (longlong *)(*pcVar5)();
        }
        iVar12 = (int)plVar17[1] + -1;
        if ((int)plVar17[1] == 0) {
          iVar12 = 0;
        }
        if ((ulonglong)(longlong)iVar12 < uVar22) {
          uVar22 = (longlong)iVar12;
        }
        iVar12 = (int)uVar22 * 4 + (uint)uStack_1e0;
        if (iVar12 < 0) {
LAB_141326386:
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(iVar12);
        }
        if ((int)uStack_1e0._4_4_ < iVar12) {
          FUN_14132671e(&local_1e8);
        }
        iVar12 = (int)uVar22 * 6 + *(int *)(param_1 + 0x3c0);
        if (iVar12 < 0) goto LAB_141326386;
        if (*(int *)(param_1 + 0x3c4) < iVar12) {
          FUN_14480809c(plVar15);
        }
        if ((int)plVar17[1] == 0) {
          pwVar14 = &DAT_149dfb77a;
        }
        else {
          pwVar14 = (wint_t *)*plVar17;
        }
        if ((uVar22 != 0) && (*pwVar14 != 0)) {
          local_1f8 = param_1 + 0x5f8;
          fVar24 = 0.0;
          uVar20 = 0;
          local_240 = plVar15;
          local_238 = uVar22;
          local_230 = param_2;
          local_1f0 = pwVar14;
LAB_141325b14:
          local_268 = *(undefined4 *)(param_1 + 0x64c);
          local_270 = CONCAT44(local_270._4_4_,*(undefined4 *)(param_1 + 0x648));
          local_278 = (float *)CONCAT44(local_278._4_4_,*(undefined4 *)(param_1 + 0x644));
          local_1a8 = local_1f0;
          local_1a0 = pwVar14;
          FUN_140eee6ba(local_198,&local_1a8,*(undefined8 *)(param_1 + 0x618),
                        *(undefined4 *)(param_1 + 0x640));
          if (*(char *)(param_1 + 0x650) == '\x01') {
            uVar35 = 0;
            uVar36 = 0;
            uVar37 = 0;
            fVar34 = (float)(local_198[0] * -0.5);
          }
          else {
            fVar34 = 0.0;
            uVar35 = 0;
            uVar36 = 0;
            uVar37 = 0;
            if (*(char *)(param_1 + 0x650) == '\x02') {
              uVar35 = 0x80000000;
              uVar36 = 0x80000000;
              uVar37 = 0x80000000;
              fVar34 = -(float)local_198[0];
            }
          }
          fVar29 = 0.0;
          uVar26 = SUB84(local_198[1],0);
          uVar28 = (undefined4)((ulonglong)local_198[1] >> 0x20);
          do {
            dVar7 = (double)CONCAT44(uVar28,uVar26);
            bVar23 = uVar20 < uVar22;
            local_248 = uVar20;
            do {
              do {
                do {
                  wVar3 = *pwVar14;
                  if (wVar3 == 0) {
LAB_141326158:
                    if ((double)CONCAT44(uVar28,uVar26) < 0.0 ||
                        (double)CONCAT44(uVar28,uVar26) == 0.0) {
                      fVar34 = (float)FUN_140324d4e(*(undefined8 *)(param_1 + 0x618));
                      dVar7 = (double)fVar34;
                    }
                    fVar24 = (float)((double)fVar24 + dVar7);
                    uVar20 = local_248;
                    if ((bool)(*pwVar14 != 0 & bVar23)) goto LAB_141325b14;
                    goto LAB_141326198;
                  }
                  if (wVar3 == 10) {
                    pwVar14 = pwVar14 + 1;
                    goto LAB_141326158;
                  }
                  if ((((wVar3 == 0x3c) && (pwVar14[1] == 0x62)) && (pwVar14[2] == 0x72)) &&
                     (pwVar14[3] == 0x3e)) {
                    pwVar14 = pwVar14 + 4;
                    goto LAB_141326158;
                  }
                  pwVar14 = pwVar14 + 1;
                  if (uVar22 <= local_248) {
                    bVar23 = false;
                    goto LAB_141326158;
                  }
                  uVar11 = FUN_140eee8d6(*(undefined8 *)(param_1 + 0x618));
                  lVar18 = *(longlong *)(param_1 + 0x618);
                } while (*(int *)(lVar18 + 0x40) <= (int)(uint)uVar11);
                bVar2 = *(byte *)(*(longlong *)(lVar18 + 0x38) + 0x10 + (ulonglong)uVar11 * 0x18);
                uVar13 = (uint)bVar2;
              } while (*(int *)(lVar18 + 0x50) <= (int)uVar13);
              piVar1 = (int *)(*(longlong *)(lVar18 + 0x38) + (ulonglong)uVar11 * 0x18);
              if (local_14c != uVar13) {
                if (local_14c != 0xffffffff) {
                  FUN_14349f7fc(&local_188);
                  uVar13 = (uint)*(byte *)(piVar1 + 4);
                  lVar18 = *(longlong *)(param_1 + 0x618);
                }
                bVar2 = *(byte *)(piVar1 + 4);
                local_14c = uVar13;
              }
              lVar8 = local_1f8;
              lVar18 = *(longlong *)(*(longlong *)(lVar18 + 0x48) + (ulonglong)bVar2 * 8);
            } while (lVar18 == 0);
            local_228 = CONCAT44(uVar28,uVar26);
            uVar6 = *(undefined8 *)(lVar18 + 0x140);
            fVar31 = 1.0 / (float)(int)((ulonglong)uVar6 >> 0x20);
            fVar27 = 1.0 / (float)(int)uVar6;
            local_210 = *(float *)(param_1 + 0x644);
            local_218 = (float)piVar1[2];
            local_214 = (float)piVar1[3];
            fVar30 = (float)piVar1[5] * local_210 + fVar24;
            fVar33 = *(float *)(param_1 + 0x640) * local_218;
            fVar32 = (float)*piVar1 * fVar27;
            fVar25 = (float)piVar1[1] * fVar31;
            fVar39 = -fVar30;
            fVar38 = -(fVar34 + fVar29);
            local_1b4 = 0xbf80000000000000;
            local_1ac = 0;
            local_1c0 = 0x3f800000;
            local_1b8 = 0;
            local_1d4 = 0;
            local_270 = local_1f8;
            local_278 = &local_1c8;
            local_254 = fVar24;
            local_20c = fVar29;
            local_208 = fVar34;
            uStack_204 = uVar35;
            uStack_200 = uVar36;
            uStack_1fc = uVar37;
            local_1d0 = fVar38;
            local_1cc = fVar39;
            local_1c8 = fVar32;
            local_1c4 = fVar25;
            FUN_1413265b4(local_148,&local_1d4,&local_1b4,&local_1c0);
            iVar12 = (uint)uStack_1e0;
            uVar13 = (uint)uStack_1e0 + 1;
            if (uStack_1e0._4_4_ < uVar13) {
              uVar22 = uStack_1e0 & 0xffffffff;
              uStack_1e0._0_4_ = uVar13;
              FUN_140d35044(&local_1e8,uVar22);
              uVar13 = (uint)uStack_1e0;
            }
            uStack_1e0._0_4_ = uVar13;
            fVar24 = -(fVar34 + fVar29 + fVar33);
            puVar19 = local_148;
            puVar21 = (undefined4 *)((longlong)iVar12 * 0x58 + local_1e8);
            for (lVar18 = 0x16; lVar18 != 0; lVar18 = lVar18 + -1) {
              *puVar21 = *puVar19;
              puVar19 = puVar19 + 1;
              puVar21 = puVar21 + 1;
            }
            fVar34 = fVar27 * local_218 + fVar32;
            local_1d4 = 0;
            local_270 = lVar8;
            local_278 = &local_1c8;
            local_250 = pwVar14;
            local_1d0 = fVar24;
            local_1cc = fVar39;
            local_1c8 = fVar34;
            local_1c4 = fVar25;
            FUN_1413265b4(local_148,&local_1d4,&local_1b4,&local_1c0);
            uVar13 = (uint)uStack_1e0;
            uStack_1e0._0_4_ = (uint)uStack_1e0 + 1;
            if (uStack_1e0._4_4_ < (uint)uStack_1e0) {
              FUN_140d35044(&local_1e8,uVar13);
            }
            fVar29 = -(fVar30 + local_210 * local_214);
            puVar19 = local_148;
            puVar21 = (undefined4 *)((longlong)(int)uVar13 * 0x58 + local_1e8);
            for (lVar18 = 0x16; lVar18 != 0; lVar18 = lVar18 + -1) {
              *puVar21 = *puVar19;
              puVar19 = puVar19 + 1;
              puVar21 = puVar21 + 1;
            }
            fVar25 = fVar31 * local_214 + fVar25;
            local_1d4 = 0;
            local_270 = lVar8;
            local_278 = &local_1c8;
            local_1d0 = fVar38;
            local_1cc = fVar29;
            local_1c8 = fVar32;
            local_1c4 = fVar25;
            FUN_1413265b4(local_148,&local_1d4,&local_1b4,&local_1c0);
            uVar9 = (uint)uStack_1e0;
            uStack_1e0._0_4_ = (uint)uStack_1e0 + 1;
            if (uStack_1e0._4_4_ < (uint)uStack_1e0) {
              FUN_140d35044(&local_1e8,uVar9);
            }
            puVar19 = local_148;
            puVar21 = (undefined4 *)((longlong)(int)uVar9 * 0x58 + local_1e8);
            for (lVar18 = 0x16; lVar18 != 0; lVar18 = lVar18 + -1) {
              *puVar21 = *puVar19;
              puVar19 = puVar19 + 1;
              puVar21 = puVar21 + 1;
            }
            local_1d4 = 0;
            local_270 = lVar8;
            local_278 = &local_1c8;
            local_1d0 = fVar24;
            local_1cc = fVar29;
            local_1c8 = fVar34;
            local_1c4 = fVar25;
            FUN_1413265b4(local_148,&local_1d4,&local_1b4,&local_1c0);
            uVar10 = (uint)uStack_1e0;
            fVar24 = local_254;
            uStack_1e0._0_4_ = (uint)uStack_1e0 + 1;
            if (uStack_1e0._4_4_ < (uint)uStack_1e0) {
              FUN_140d35044(&local_1e8,uVar10);
            }
            uVar37 = uStack_1fc;
            uVar36 = uStack_200;
            uVar35 = uStack_204;
            fVar34 = local_208;
            fVar29 = local_20c;
            pwVar14 = local_250;
            puVar19 = local_148;
            puVar21 = (undefined4 *)((longlong)(int)uVar10 * 0x58 + local_1e8);
            for (lVar18 = 0x16; lVar18 != 0; lVar18 = lVar18 + -1) {
              *puVar21 = *puVar19;
              puVar19 = puVar19 + 1;
              puVar21 = puVar21 + 1;
            }
            iVar4 = *(int *)(param_1 + 0x3c0);
            *(uint *)(param_1 + 0x3c0) = iVar4 + 1U;
            uVar26 = (undefined4)local_228;
            uVar28 = (undefined4)((ulonglong)local_228 >> 0x20);
            if (*(uint *)(param_1 + 0x3c4) < iVar4 + 1U) {
              FUN_1447808da(local_240,iVar4);
            }
            *(int *)(*(longlong *)(param_1 + 0x3b8) + (longlong)iVar4 * 4) = iVar12;
            iVar4 = *(int *)(param_1 + 0x3c0);
            *(uint *)(param_1 + 0x3c0) = iVar4 + 1U;
            if (*(uint *)(param_1 + 0x3c4) < iVar4 + 1U) {
              FUN_1447808da(local_240,iVar4);
            }
            *(uint *)(*(longlong *)(param_1 + 0x3b8) + (longlong)iVar4 * 4) = uVar10;
            iVar4 = *(int *)(param_1 + 0x3c0);
            *(uint *)(param_1 + 0x3c0) = iVar4 + 1U;
            if (*(uint *)(param_1 + 0x3c4) < iVar4 + 1U) {
              FUN_1447808da(local_240,iVar4);
            }
            *(uint *)(*(longlong *)(param_1 + 0x3b8) + (longlong)iVar4 * 4) = uVar13;
            iVar4 = *(int *)(param_1 + 0x3c0);
            *(uint *)(param_1 + 0x3c0) = iVar4 + 1U;
            if (*(uint *)(param_1 + 0x3c4) < iVar4 + 1U) {
              FUN_1447808da(local_240,iVar4);
            }
            uVar22 = local_238;
            plVar15 = local_240;
            *(int *)(*(longlong *)(param_1 + 0x3b8) + (longlong)iVar4 * 4) = iVar12;
            iVar12 = *(int *)(param_1 + 0x3c0);
            *(uint *)(param_1 + 0x3c0) = iVar12 + 1U;
            if (*(uint *)(param_1 + 0x3c4) < iVar12 + 1U) {
              FUN_1447808da(local_240,iVar12);
            }
            *(uint *)(*(longlong *)(param_1 + 0x3b8) + (longlong)iVar12 * 4) = uVar9;
            iVar12 = *(int *)(param_1 + 0x3c0);
            *(uint *)(param_1 + 0x3c0) = iVar12 + 1U;
            if (*(uint *)(param_1 + 0x3c4) < iVar12 + 1U) {
              FUN_1447808da(plVar15,iVar12);
            }
            *(uint *)(*plVar15 + (longlong)iVar12 * 4) = uVar10;
            fVar29 = fVar29 + fVar33;
            wVar3 = *pwVar14;
            if (wVar3 != 0) {
              if ((wVar3 != 10) &&
                 ((((wVar3 != 0x3c || (local_250[1] != 0x62)) ||
                   ((local_250[2] != 0x72 || (local_250[3] != 0x3e)))) &&
                  (iVar12 = iswspace(wVar3), iVar12 == 0)))) {
                fVar29 = fVar29 + local_21c;
              }
              uVar26 = (undefined4)local_228;
              uVar28 = (undefined4)((ulonglong)local_228 >> 0x20);
              pwVar14 = local_250;
              uVar22 = local_238;
              fVar24 = local_254;
              fVar34 = local_208;
              uVar35 = uStack_204;
              uVar36 = uStack_200;
              uVar37 = uStack_1fc;
            }
            uVar20 = local_248 + 1;
            param_2 = local_230;
          } while( true );
        }
LAB_141326198:
        if (local_150 < (int)(uint)uStack_1e0) {
          if (local_154 < *(int *)(param_1 + 0x3c0)) {
            iVar12 = *(int *)(param_1 + 0x5f0);
            *(uint *)(param_1 + 0x5f0) = iVar12 + 1U;
            if (*(uint *)(param_1 + 0x5f4) < iVar12 + 1U) {
              FUN_141326866(param_1 + 0x5e8,iVar12);
            }
            piVar1 = (int *)(*(longlong *)(param_1 + 0x5e8) + (longlong)iVar12 * 0x18);
            *piVar1 = local_154;
            piVar1[1] = *(int *)(param_1 + 0x3c0) - local_154;
            piVar1[2] = local_150;
            piVar1[3] = (uint)uStack_1e0 - local_150;
            piVar1[4] = 0;
            piVar1[5] = 0;
            plVar15 = *(longlong **)(param_1 + 0x620);
            if (((plVar15 == (longlong *)0x0) || ((longlong)(int)local_14c < 0)) ||
               (((int)plVar15[1] <= (int)local_14c ||
                (lVar18 = *(longlong *)(*plVar15 + (longlong)(int)local_14c * 8),
                *(longlong *)(piVar1 + 4) = lVar18, lVar18 == 0)))) {
              *(undefined8 *)(piVar1 + 4) = *(undefined8 *)(param_1 + 0x610);
            }
          }
        }
        if (0 < (int)(uint)uStack_1e0) {
          local_268 = 0;
          local_270 = CONCAT44(local_270._4_4_,1);
          local_278 = (float *)&local_1e8;
          FUN_1413269d8(param_1 + 0x298,param_2,0,param_1 + 0x3c8);
          FUN_14006bf18(param_1 + 0x3a0,param_2);
          if (*(char *)(param_1 + 0x718) == '\x01') {
            FUN_147a325ba(param_1,param_2);
            *(undefined1 *)(param_1 + 0x71a) = 1;
          }
        }
      }
    }
    if (local_1e8 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_298) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1413265b4 FUN_1413265b4 body=361 status=ok
// SIG undefined FUN_1413265b4(void)

void FUN_1413265b4(undefined8 *param_1,undefined8 *param_2,float *param_3,float *param_4,
                  undefined8 *param_5,undefined4 *param_6)

{
  longlong lVar1;
  undefined1 uVar2;
  int iVar3;
  
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *param_1 = *param_2;
  iVar3 = (int)ROUND(*param_3 * 127.0 + *param_3 * 127.0 + 0.5) >> 1;
  if (0x7e < iVar3) {
    iVar3 = 0x7f;
  }
  uVar2 = (undefined1)iVar3;
  if (iVar3 < -0x7f) {
    uVar2 = 0x80;
  }
  *(undefined1 *)((longlong)param_1 + 0x4c) = uVar2;
  iVar3 = (int)ROUND(param_3[1] * 127.0 + param_3[1] * 127.0 + 0.5) >> 1;
  if (0x7e < iVar3) {
    iVar3 = 0x7f;
  }
  uVar2 = (undefined1)iVar3;
  if (iVar3 < -0x7f) {
    uVar2 = 0x80;
  }
  *(undefined1 *)((longlong)param_1 + 0x4d) = uVar2;
  iVar3 = (int)ROUND(param_3[2] * 127.0 + param_3[2] * 127.0 + 0.5) >> 1;
  if (0x7e < iVar3) {
    iVar3 = 0x7f;
  }
  uVar2 = (undefined1)iVar3;
  if (iVar3 < -0x7f) {
    uVar2 = 0x80;
  }
  *(undefined1 *)((longlong)param_1 + 0x4e) = uVar2;
  *(undefined1 *)((longlong)param_1 + 0x4f) = 0x7f;
  iVar3 = (int)ROUND(*param_4 * 127.0 + *param_4 * 127.0 + 0.5) >> 1;
  if (0x7e < iVar3) {
    iVar3 = 0x7f;
  }
  if (iVar3 < -0x7f) {
    iVar3 = -0x80;
  }
  *(char *)(param_1 + 10) = (char)iVar3;
  iVar3 = (int)ROUND(param_4[1] * 127.0 + param_4[1] * 127.0 + 0.5) >> 1;
  if (0x7e < iVar3) {
    iVar3 = 0x7f;
  }
  uVar2 = (undefined1)iVar3;
  if (iVar3 < -0x7f) {
    uVar2 = 0x80;
  }
  *(undefined1 *)((longlong)param_1 + 0x51) = uVar2;
  iVar3 = (int)ROUND(param_4[2] * 127.0 + param_4[2] * 127.0 + 0.5) >> 1;
  if (0x7e < iVar3) {
    iVar3 = 0x7f;
  }
  uVar2 = (undefined1)iVar3;
  if (iVar3 < -0x7f) {
    uVar2 = 0x80;
  }
  *(undefined1 *)((longlong)param_1 + 0x52) = uVar2;
  *(undefined1 *)((longlong)param_1 + 0x53) = 0x7f;
  *(undefined4 *)((longlong)param_1 + 0x54) = *param_6;
  *(undefined1 *)((longlong)param_1 + 0x53) = 0x7f;
  lVar1 = 0xc;
  do {
    *(undefined8 *)((longlong)param_1 + lVar1) = *param_5;
    lVar1 = lVar1 + 8;
  } while (lVar1 != 0x4c);
  return;
}



// FUNCTION 14132671e FUN_14132671e body=328 status=ok
// SIG undefined FUN_14132671e(void)

void FUN_14132671e(longlong param_1,int param_2)

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
    uVar3 = (longlong)param_2 * 0x58;
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
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_141326788;
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
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,4);
      }
    }
LAB_141326788:
    uVar5 = 0x7fffffff;
    if (param_2 <= (int)(uVar3 / 0x58)) {
      uVar5 = uVar3 / 0x58 & 0xffffffff;
    }
  }
  if ((int)uVar5 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar5,0x58,4);
  }
  return;
}



// FUNCTION 141326866 FUN_141326866 body=370 status=ok
// SIG undefined FUN_141326866(void)

void FUN_141326866(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 0x18;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1413268ef;
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
LAB_1413268ef:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x18)) {
    uVar7 = uVar5 / 0x18 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x18,8);
  return;
}



// FUNCTION 1413269d8 FUN_1413269d8 body=4712 status=ok
// SIG undefined FUN_1413269d8(void)

/* WARNING: Removing unreachable block (ram,0x0001413272f0) */
/* WARNING: Removing unreachable block (ram,0x000141327349) */
/* WARNING: Removing unreachable block (ram,0x0001413272fe) */
/* WARNING: Removing unreachable block (ram,0x000141327358) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1413269d8(undefined **param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  longlong *param_5,uint param_6,undefined4 param_7)

{
  char *pcVar1;
  int *piVar2;
  undefined8 *puVar3;
  char cVar4;
  uint uVar5;
  undefined *puVar6;
  undefined2 *puVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  uint uVar11;
  DWORD DVar12;
  DWORD DVar13;
  undefined8 uVar14;
  undefined4 *puVar15;
  uint *puVar16;
  undefined1 uVar17;
  undefined ***pppuVar18;
  longlong lVar19;
  uint *puVar20;
  int iVar21;
  undefined **ppuVar22;
  undefined8 *puVar23;
  longlong lVar24;
  longlong lVar25;
  longlong lVar26;
  undefined2 uVar27;
  int iVar28;
  int iVar29;
  ulonglong uVar30;
  int iVar31;
  longlong lVar32;
  ulonglong uVar33;
  bool bVar34;
  float fVar35;
  double dVar36;
  double dVar37;
  undefined1 auVar38 [12];
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar39 [16];
  float fVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  undefined1 in_XMM1 [16];
  undefined1 auVar44 [16];
  double dVar45;
  double dVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  undefined1 auStack_248 [32];
  undefined ***local_228;
  float local_214;
  undefined8 local_210;
  longlong local_208;
  longlong local_200;
  longlong local_1f8;
  longlong local_1f0;
  longlong local_1e8;
  undefined **local_1e0;
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined4 uStack_1cc;
  undefined **local_1c8;
  undefined ***local_1b8;
  undefined **local_1a8;
  undefined **ppuStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined **local_188;
  undefined ***local_178;
  undefined **local_168;
  undefined **ppuStack_160;
  undefined1 local_158 [16];
  undefined **local_148 [2];
  undefined ***local_138;
  undefined **local_128;
  undefined **ppuStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  byte local_108;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_248;
  if ((int)param_5[1] == 0) {
    FUN_1408e3634(param_1 + 0x11,1,1);
    FUN_1408e36f6(param_1,1,1,1);
    FUN_140964b22(param_1 + 0x19,1,1);
    puVar3 = (undefined8 *)param_1[0x16];
    *puVar3 = 0;
    *(undefined4 *)(puVar3 + 1) = 0;
    puVar7 = (undefined2 *)param_1[0xc];
    if (*(char *)((longlong)param_1 + 0x81) == '\x01') {
      *puVar7 = 0x7fff;
      puVar7[1] = 0;
      puVar7[2] = 0;
      puVar7[3] = 0x7fff;
      puVar7[4] = 0;
      puVar7[5] = 0;
      puVar7[6] = 0x7fff;
      puVar7[7] = 0x7fff;
    }
    else {
      *(undefined1 *)puVar7 = 0x7f;
      *(undefined1 *)((longlong)puVar7 + 1) = 0;
      *(undefined1 *)(puVar7 + 1) = 0;
      *(undefined1 *)((longlong)puVar7 + 3) = 0x7f;
      *(undefined1 *)(puVar7 + 2) = 0;
      *(undefined1 *)((longlong)puVar7 + 5) = 0;
      *(undefined1 *)(puVar7 + 3) = 0x7f;
      *(undefined1 *)((longlong)puVar7 + 7) = 0x7f;
    }
    if (*(char *)(param_1 + 0x10) == '\x01') {
      *(undefined8 *)param_1[0xd] = 0;
    }
    else {
      *(undefined4 *)param_1[0xd] = 0;
    }
    *(undefined4 *)param_1[0x1e] = 0x1010101;
    param_7 = 0;
  }
  else {
    FUN_1408e3634(param_1 + 0x11,(int)param_5[1],1);
    FUN_1408e36f6(param_1,(int)param_5[1],param_6,1);
    auVar39._0_8_ = FUN_140964b22(param_1 + 0x19,(int)param_5[1],1);
    auVar39._8_8_ = extraout_XMM0_Qb;
    if (0 < (int)param_5[1]) {
      lVar19 = 0;
      lVar32 = 0;
      lVar24 = 0;
      lVar25 = 0xc;
      do {
        local_1e8 = lVar25;
        local_1f0 = *param_5;
        local_1f8 = lVar24 * 0x58;
        puVar6 = param_1[0x16];
        uVar33 = (ulonglong)(uint)(*(int *)(param_1 + 0x17) * (int)lVar24);
        *(undefined4 *)(puVar6 + uVar33 + 8) = *(undefined4 *)(local_1f0 + 8 + local_1f8);
        *(undefined8 *)(puVar6 + uVar33) = *(undefined8 *)(local_1f0 + local_1f8);
        auVar39 = pmovsxbd(auVar39,*(undefined4 *)(local_1f0 + 0x50 + local_1f8));
        fVar47 = (float)auVar39._0_4_ * 0.007874016;
        fVar48 = (float)auVar39._4_4_ * 0.007874016;
        fVar49 = (float)auVar39._8_4_ * 0.007874016;
        auVar44 = pmovsxbd(in_XMM1,*(undefined4 *)(local_1f0 + 0x4c + local_1f8));
        fVar50 = (float)auVar44._0_4_ * 0.007874016;
        fVar51 = (float)auVar44._4_4_ * 0.007874016;
        fVar52 = (float)auVar44._8_4_ * 0.007874016;
        dVar10 = (double)fVar52;
        dVar8 = (double)fVar51;
        dVar9 = (double)fVar50;
        dVar46 = (double)((float)auVar39._0_4_ * 0.007874016);
        dVar36 = (double)((float)auVar39._12_4_ * 0.007874016);
        dVar41 = (double)((float)auVar39._8_4_ * 0.007874016);
        dVar43 = (double)((float)auVar39._4_4_ * 0.007874016);
        fVar35 = (float)((dVar46 * dVar8 - dVar43 * dVar9) * dVar36);
        fVar40 = (float)((dVar41 * dVar9 - dVar46 * dVar10) * dVar36);
        local_214 = (float)((dVar43 * dVar10 - dVar41 * dVar8) * dVar36);
        puVar6 = param_1[0xc];
        if (*(char *)((longlong)param_1 + 0x81) == '\x01') {
          dVar43 = (double)fVar49;
          dVar45 = (double)fVar48;
          dVar46 = (double)fVar35;
          dVar41 = (double)fVar40;
          dVar42 = dVar46 * 0.0 + dVar43 * -0.0;
          dVar36 = dVar43 * -0.0 + dVar10 * 0.0;
          dVar37 = dVar46 * -0.0 + dVar10 * 0.0;
          lVar25 = lVar24 * 0x10;
          iVar31 = (int)ROUND(fVar50 * 32767.0 + fVar50 * 32767.0 + 0.5) >> 1;
          if (0x7ffe < iVar31) {
            iVar31 = 0x7fff;
          }
          if (iVar31 < -0x7fff) {
            iVar31 = -0x8000;
          }
          iVar28 = (int)ROUND(fVar51 * 32767.0 + fVar51 * 32767.0 + 0.5) >> 1;
          if (0x7ffe < iVar28) {
            iVar28 = 0x7fff;
          }
          if (iVar28 < -0x7fff) {
            iVar28 = -0x8000;
          }
          iVar29 = (int)ROUND(fVar52 * 32767.0 + fVar52 * 32767.0 + 0.5) >> 1;
          if (0x7ffe < iVar29) {
            iVar29 = 0x7fff;
          }
          dVar43 = ((dVar42 * dVar8 - dVar36 * dVar41) + dVar45 * dVar37) * -0.0 +
                   (dVar37 * 0.0 + (dVar8 * dVar46 - dVar10 * dVar41)) * (double)fVar47 +
                   (dVar9 * (dVar42 * 0.0 + (dVar41 * dVar43 - dVar45 * dVar46)) -
                   (dVar36 * 0.0 + (dVar8 * dVar43 - dVar45 * dVar10)) * (double)local_214);
          if (iVar29 < -0x7fff) {
            iVar29 = -0x8000;
          }
          auVar38 = ZEXT812(0x46fffe00);
          *(short *)(puVar6 + lVar25) = (short)iVar31;
          *(short *)(puVar6 + lVar25 + 2) = (short)iVar28;
          *(short *)(puVar6 + lVar25 + 4) = (short)iVar29;
          iVar31 = (int)ROUND(fVar47 * 32767.0 + fVar47 * 32767.0 + 0.5) >> 1;
          if (0x7ffe < iVar31) {
            iVar31 = 0x7fff;
          }
          *(undefined2 *)(puVar6 + lVar25 + 6) = 0x7fff;
          uVar27 = (undefined2)iVar31;
          if (iVar31 < -0x7fff) {
            uVar27 = 0x8000;
          }
          iVar31 = (int)ROUND(fVar48 * 32767.0 + fVar48 * 32767.0 + 0.5) >> 1;
          if (0x7ffe < iVar31) {
            iVar31 = 0x7fff;
          }
          *(undefined2 *)(puVar6 + lVar25 + 8) = uVar27;
          if (iVar31 < -0x7fff) {
            iVar31 = -0x8000;
          }
          iVar28 = (int)ROUND(fVar49 * 32767.0 + fVar49 * 32767.0 + 0.5) >> 1;
          if (0x7ffe < iVar28) {
            iVar28 = 0x7fff;
          }
          *(short *)(puVar6 + lVar25 + 10) = (short)iVar31;
          uVar27 = (undefined2)iVar28;
          if (iVar28 < -0x7fff) {
            uVar27 = 0x8000;
          }
          *(undefined2 *)(puVar6 + lVar25 + 0xc) = uVar27;
          iVar31 = (int)ROUND(*(float *)(&DAT_14a329b58 + (ulonglong)(dVar43 < 0.0) * 4)) >> 1;
          if (0x7ffe < iVar31) {
            iVar31 = 0x7fff;
          }
          uVar27 = (undefined2)iVar31;
          if (iVar31 < -0x7fff) {
            uVar27 = 0x8000;
          }
          *(undefined2 *)(puVar6 + lVar25 + 0xe) = uVar27;
        }
        else {
          dVar42 = (double)fVar49;
          dVar37 = (double)fVar48;
          dVar36 = (double)fVar35;
          dVar43 = (double)fVar40;
          dVar46 = dVar36 * 0.0 + dVar42 * -0.0;
          dVar45 = dVar42 * -0.0 + dVar10 * 0.0;
          dVar41 = dVar36 * -0.0 + dVar10 * 0.0;
          iVar31 = (int)ROUND(fVar50 * 127.0 + fVar50 * 127.0 + 0.5) >> 1;
          if (0x7e < iVar31) {
            iVar31 = 0x7f;
          }
          if (iVar31 < -0x7f) {
            iVar31 = -0x80;
          }
          iVar28 = (int)ROUND(fVar51 * 127.0 + fVar51 * 127.0 + 0.5) >> 1;
          if (0x7e < iVar28) {
            iVar28 = 0x7f;
          }
          if (iVar28 < -0x7f) {
            iVar28 = -0x80;
          }
          iVar29 = (int)ROUND(fVar52 * 127.0 + fVar52 * 127.0 + 0.5) >> 1;
          if (0x7e < iVar29) {
            iVar29 = 0x7f;
          }
          dVar43 = ((dVar46 * dVar8 - dVar45 * dVar43) + dVar37 * dVar41) * -0.0 +
                   (dVar41 * 0.0 + (dVar8 * dVar36 - dVar10 * dVar43)) * (double)fVar47 +
                   (dVar9 * (dVar46 * 0.0 + (dVar43 * dVar42 - dVar37 * dVar36)) -
                   (dVar45 * 0.0 + (dVar8 * dVar42 - dVar37 * dVar10)) * (double)local_214);
          iVar21 = -0x80;
          if (iVar29 < -0x7f) {
            iVar29 = iVar21;
          }
          auVar38 = ZEXT812(0x42fe0000);
          puVar6[lVar24 * 8] = (char)iVar31;
          puVar6[lVar24 * 8 + 1] = (char)iVar28;
          puVar6[lVar24 * 8 + 2] = (char)iVar29;
          iVar31 = (int)ROUND(fVar47 * 127.0 + fVar47 * 127.0 + 0.5) >> 1;
          if (0x7e < iVar31) {
            iVar31 = 0x7f;
          }
          puVar6[lVar24 * 8 + 3] = 0x7f;
          if (iVar31 < -0x7f) {
            iVar31 = iVar21;
          }
          iVar28 = (int)ROUND(fVar48 * 127.0 + fVar48 * 127.0 + 0.5) >> 1;
          if (0x7e < iVar28) {
            iVar28 = 0x7f;
          }
          puVar6[lVar24 * 8 + 4] = (char)iVar31;
          if (iVar28 < -0x7f) {
            iVar28 = iVar21;
          }
          iVar31 = (int)ROUND(fVar49 * 127.0 + fVar49 * 127.0 + 0.5) >> 1;
          if (0x7e < iVar31) {
            iVar31 = 0x7f;
          }
          puVar6[lVar24 * 8 + 5] = (char)iVar28;
          uVar17 = (undefined1)iVar31;
          if (iVar31 < -0x7f) {
            uVar17 = 0x80;
          }
          puVar6[lVar24 * 8 + 6] = uVar17;
          iVar31 = (int)ROUND(*(float *)(&DAT_14a329b50 + (ulonglong)(dVar43 < 0.0) * 4)) >> 1;
          if (0x7e < iVar31) {
            iVar31 = 0x7f;
          }
          uVar17 = (undefined1)iVar31;
          if (iVar31 < -0x7f) {
            uVar17 = 0x80;
          }
          puVar6[lVar24 * 8 + 7] = uVar17;
        }
        auVar44 = _DAT_1499319a0;
        in_XMM1._8_8_ = 0;
        in_XMM1._0_8_ = dVar43;
        auVar39._12_4_ = 0;
        auVar39._0_12_ = auVar38;
        uVar33 = (ulonglong)param_6;
        if (param_6 != 0) {
          lVar25 = local_1f0 + local_1e8;
          uVar30 = 0;
          do {
            puVar6 = param_1[0xd];
            if (*(char *)(param_1 + 0x10) == '\x01') {
              uVar33 = *(ulonglong *)(lVar25 + uVar30 * 8);
              *(ulonglong *)(puVar6 + uVar30 * 8 + (ulonglong)*(uint *)(param_1 + 0xf) * lVar19) =
                   uVar33;
            }
            else {
              uVar11 = *(uint *)(lVar25 + uVar30 * 8);
              fVar35 = (float)(uVar11 & auVar44._0_4_);
              if ((uint)fVar35 < 0x47800000) {
                if ((uint)fVar35 < 0x38800000) {
                  fVar35 = fVar35 + 0.5;
                }
                else {
                  fVar35 = (float)((int)fVar35 + 0x8000fff + (uint)(((uint)fVar35 >> 0xd & 1) != 0)
                                  >> 0xd);
                }
              }
              else {
                fVar35 = (float)((0x7f800000 < (uint)fVar35 | 0x3e) << 9);
              }
              lVar26 = (ulonglong)*(uint *)(param_1 + 0xf) * lVar32;
              iVar31 = movmskps((int)uVar33,ZEXT416(uVar11));
              uVar11 = iVar31 << 0xf | (uint)fVar35;
              *(short *)(puVar6 + uVar30 * 4 + lVar26) = (short)uVar11;
              auVar39 = ZEXT416(*(uint *)(lVar25 + 4 + uVar30 * 8));
              in_XMM1 = auVar39 & auVar44;
              fVar35 = in_XMM1._0_4_;
              if ((uint)fVar35 < 0x47800000) {
                if ((uint)fVar35 < 0x38800000) {
                  in_XMM1._0_4_ = fVar35 + 0.5;
                  fVar35 = in_XMM1._0_4_;
                }
                else {
                  fVar35 = (float)((int)fVar35 + 0x8000fff + (uint)(((uint)fVar35 >> 0xd & 1) != 0)
                                  >> 0xd);
                }
              }
              else {
                fVar35 = (float)((0x7f800000 < (uint)fVar35 | 0x3e) << 9);
              }
              iVar31 = movmskps(uVar11,auVar39);
              uVar11 = iVar31 << 0xf | (uint)fVar35;
              uVar33 = (ulonglong)uVar11;
              *(short *)(puVar6 + uVar30 * 4 + lVar26 + 2) = (short)uVar11;
            }
            uVar30 = uVar30 + 1;
          } while (param_6 != uVar30);
        }
        *(undefined4 *)(param_1[0x1e] + (uint)(*(int *)(param_1 + 0x1f) * (int)lVar24)) =
             *(undefined4 *)(local_1f0 + local_1f8 + 0x54);
        lVar24 = lVar24 + 1;
        lVar32 = lVar32 + 4;
        lVar19 = lVar19 + 8;
        lVar25 = local_1e8 + 0x58;
        local_210 = param_4;
        local_208 = param_2;
        local_200 = param_3;
      } while (lVar24 < (int)param_5[1]);
    }
  }
  local_1e0 = param_1;
  local_1d8 = param_4;
  local_1d0 = param_7;
  if (param_2 != 0) {
    FUN_143712058(&local_1e0,param_2);
    goto LAB_1413277d6;
  }
  local_1b8 = (undefined ***)0x0;
  local_1a8 = &PTR_LAB_14aabc730;
  ppuStack_1a0 = param_1;
  local_198 = param_4;
  uStack_190 = CONCAT44(uStack_1cc,param_7);
  local_1c8 = (undefined **)&LAB_14371735e;
  if ((param_3 == 0) || (DAT_14ca9a43c != 2)) {
    local_188 = (undefined **)&LAB_14371735e;
    local_178 = (undefined ***)0x0;
    local_168 = &PTR_LAB_14aabc730;
    ppuStack_160 = param_1;
    local_158._8_8_ = CONCAT44(uStack_1cc,param_7);
    local_158._0_8_ = param_4;
LAB_141327610:
    local_1c8 = (undefined **)0x0;
    ppuVar22 = local_188;
LAB_14132761c:
    local_1b8 = (undefined ***)0x0;
    lVar25 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    iVar31 = *(int *)(lVar25 + 0xc60);
    local_1a8 = local_168;
    ppuStack_1a0 = ppuStack_160;
    if (DAT_14c86a9fc == 0) {
      if (iVar31 != 2) {
        if (iVar31 != 1) goto LAB_14132763f;
        DVar12 = FUN_140ad26c0();
        DVar13 = GetCurrentThreadId();
        ppuVar22 = local_188;
        if (DVar12 == DVar13) goto LAB_141327644;
        goto LAB_141327685;
      }
LAB_141327644:
      pppuVar18 = local_178;
      if (local_178 == (undefined ***)0x0) {
        pppuVar18 = &local_168;
      }
      uVar14 = (*(code *)(*pppuVar18)[1])();
      (*(code *)ppuVar22)(uVar14,&DAT_14ca85100);
    }
    else {
LAB_14132763f:
      if (iVar31 == 0x10) goto LAB_141327644;
LAB_141327685:
      if (DAT_14ca9a438 == '\0') {
        ppuVar22 = local_188;
        if ((DAT_14c86a9f8 != '\x01') || (iVar31 = *(int *)(lVar25 + 0xc60), iVar31 == 2))
        goto LAB_141327644;
        if (iVar31 == 1) {
          DVar12 = FUN_140ad26c0();
          DVar13 = GetCurrentThreadId();
          ppuVar22 = local_188;
          if (DVar12 == DVar13) goto LAB_141327644;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar3 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar16 = (uint *)*puVar3;
        if (puVar16 != (uint *)0x0) goto LAB_1413278fc;
        while( true ) {
          uVar11 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar11 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar11 | 1;
            __tlregdtor(&LAB_143715770);
          }
          lVar25 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar15 = *(undefined4 **)(lVar25 + 0x310);
          *(undefined8 *)(lVar25 + 0x310) = 0;
          if (puVar15 == (undefined4 *)0x0) {
            puVar15 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar15 = 0xffffffff;
          *(undefined4 **)(puVar15 + 0x10) = puVar15 + 0x16;
          puVar15[0x12] = 0;
          *puVar3 = puVar15;
          FUN_140217a48(puVar3);
          puVar16 = (uint *)*puVar3;
LAB_1413278fc:
          puVar23 = (undefined8 *)(*(longlong *)(puVar16 + 0x10) + 0xfU & 0xfffffffffffffff0);
          puVar20 = (uint *)(puVar23 + 0x1e);
          uVar11 = puVar16[0x12];
          if (puVar20 <= puVar16 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar16 + 0x10) = puVar16 + 0x4000;
            LOCK();
            uVar5 = *puVar16;
            *puVar16 = *puVar16 + uVar11 + 1;
            UNLOCK();
            if ((uVar5 ^ uVar11) != 0xffffffff) break;
            puVar16 = (uint *)*puVar3;
            *puVar16 = 0xffffffff;
            *(uint **)(puVar16 + 0x10) = puVar16 + 0x16;
            puVar16[0x12] = 0;
            *puVar3 = puVar16;
            puVar23 = (undefined8 *)((longlong)puVar16 + 0x67U & 0xfffffffffffffff0);
            puVar20 = (uint *)(puVar23 + 0x1e);
            uVar11 = 0;
            if (puVar20 <= puVar16 + 0x4000) {
              uVar11 = 1;
              goto LAB_14132797c;
            }
          }
        }
        uVar11 = uVar11 + 1;
LAB_14132797c:
        *(uint **)(puVar16 + 0x10) = puVar20;
        puVar16[0x12] = uVar11;
        FUN_1447247dc(puVar23,0);
        *puVar23 = &PTR_FUN_14aabc720;
        puVar23[0x16] = local_188;
        puVar23[0x18] = local_178;
        local_178 = (undefined ***)0x0;
        puVar23[0x1c] = local_158._0_8_;
        puVar23[0x1d] = local_158._8_8_;
        puVar23[0x1a] = local_168;
        puVar23[0x1b] = ppuStack_160;
        if (local_188 != (undefined **)0x0) {
          local_188 = (undefined **)0x0;
        }
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar11 = DAT_14c7585c8 >> 10 & 3;
          iVar31 = 0;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar11 < 2) {
            uVar33 = (ulonglong)(byte)(&DAT_149e38edc)[uVar11];
            iVar31 = 0;
          }
          else {
            uVar33 = 2;
          }
        }
        else {
          iVar31 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                   *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar33 = 5;
        }
        if (*(code **)(puVar23[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar23[0xe] + 0x18))(puVar23 + 0xe,puVar23 + 9);
        }
        puVar23[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar23[9] = puVar23;
        puVar23[10] = puVar23;
        lVar25 = *(longlong *)
                  (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x2b8);
        if (lVar25 == 0) {
          uVar30 = 1;
          if ((char)uVar33 != '\x06') {
            uVar30 = uVar33;
          }
          uVar33 = uVar30;
          uVar14 = 0;
        }
        else {
          if ((char)uVar33 == '\x06') {
            uVar33 = *(ulonglong *)(lVar25 + 0x38) >> 0x3b;
          }
          uVar14 = *(undefined8 *)(lVar25 + 0x30);
        }
        puVar23[0xf] = uVar14;
        puVar23[0x10] = uVar33 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar23 + 0x1c) = iVar31;
        if (puVar23 == (undefined8 *)0x0) {
          local_148[0] = (undefined **)CONCAT71(local_148[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar23 + 1) = *(int *)(puVar23 + 1) + 1;
          UNLOCK();
          local_148[0] = (undefined **)CONCAT71(local_148[0]._1_7_,1);
          FUN_1447439e4(puVar23);
          LOCK();
          piVar2 = (int *)(puVar23 + 1);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)*puVar23)(puVar23,1);
          }
        }
      }
      else {
        local_148[0] = (undefined **)0x0;
        local_138 = (undefined ***)FUN_14001cc68(0x50,0x10);
        *local_138 = &PTR_LAB_14aabc700;
        local_138[2] = local_188;
        local_138[4] = (undefined **)local_178;
        local_178 = (undefined ***)0x0;
        local_138[8] = (undefined **)local_158._0_8_;
        local_138[9] = (undefined **)local_158._8_8_;
        local_138[6] = local_168;
        local_138[7] = ppuStack_160;
        if (local_188 != (undefined **)0x0) {
          local_188 = (undefined **)0x0;
        }
        if (local_138 != (undefined ***)&DAT_fffffffffffffff0) {
          local_148[0] = (undefined **)FUN_14371710c;
        }
        local_228 = local_148;
        FUN_14005a792(&DAT_14ca9a440,L"StaticMeshVertexBuffersInitFromDynamicVertex",&DAT_14cb09d98)
        ;
        if (local_148[0] != (undefined **)0x0) {
          pppuVar18 = local_138;
          if (local_138 == (undefined ***)0x0) {
            pppuVar18 = &local_128;
          }
          (*(code *)(*pppuVar18)[2])();
        }
      }
    }
    if (local_188 != (undefined **)0x0) {
      pppuVar18 = &local_168;
      if (local_178 != (undefined ***)0x0) {
        pppuVar18 = local_178;
      }
      (*(code *)(*pppuVar18)[2])(pppuVar18);
    }
  }
  else {
    pcVar1 = (char *)(param_3 + 8);
    LOCK();
    bVar34 = *(char *)(param_3 + 8) == '\0';
    if (bVar34) {
      *(char *)(param_3 + 8) = '\x01';
    }
    UNLOCK();
    if (!bVar34) {
      FUN_1447d2058(pcVar1);
    }
    if (*(longlong *)
         (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xec0) ==
        param_3) {
      local_148[0] = local_1c8;
      local_138 = local_1b8;
      local_1b8 = (undefined ***)0x0;
      local_128 = local_1a8;
      ppuStack_120 = ppuStack_1a0;
      local_118 = local_198;
      uStack_110 = uStack_190;
      if (local_1c8 != (undefined **)0x0) {
        local_1c8 = (undefined **)0x0;
      }
      local_108 = 1;
      FUN_1401a96bc(param_3,local_148,L"StaticMeshVertexBuffersInitFromDynamicVertex",&DAT_14cb09d98
                   );
LAB_14132759b:
      (*(code *)(&PTR_LAB_14a3931f0)[local_108])();
      bVar34 = false;
    }
    else {
      if (*(longlong *)(param_3 + 0x10) != 0) {
        local_148[0] = local_1c8;
        local_138 = local_1b8;
        local_1b8 = (undefined ***)0x0;
        local_128 = local_1a8;
        ppuStack_120 = ppuStack_1a0;
        local_118 = local_198;
        uStack_110 = uStack_190;
        if (local_1c8 != (undefined **)0x0) {
          local_1c8 = (undefined **)0x0;
        }
        local_108 = 1;
        FUN_1401a98c8(param_3,local_148,L"StaticMeshVertexBuffersInitFromDynamicVertex",
                      &DAT_14cb09d98);
        goto LAB_14132759b;
      }
      bVar34 = true;
    }
    LOCK();
    cVar4 = *pcVar1;
    if (cVar4 == '\x01') {
      *pcVar1 = '\0';
    }
    UNLOCK();
    if (cVar4 != '\x01') {
      FUN_14008cdb0(pcVar1);
    }
    if (bVar34) {
      local_188 = local_1c8;
      local_178 = local_1b8;
      local_158._8_8_ = uStack_190;
      local_158._0_8_ = local_198;
      local_168 = local_1a8;
      ppuStack_160 = ppuStack_1a0;
      if (local_1c8 != (undefined **)0x0) goto LAB_141327610;
      ppuVar22 = (undefined **)0x0;
      goto LAB_14132761c;
    }
  }
  if (local_1c8 != (undefined **)0x0) {
    pppuVar18 = &local_1a8;
    if (local_1b8 != (undefined ***)0x0) {
      pppuVar18 = local_1b8;
    }
    (*(code *)(*pppuVar18)[2])(pppuVar18);
  }
LAB_1413277d6:
  if ((local_f0 ^ (ulonglong)auStack_248) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141327c42 FUN_141327c42 body=1521 status=ok
// SIG undefined FUN_141327c42(void)

void FUN_141327c42(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  int iVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  code *local_40;
  int local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_20 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_48 = FUN_1446ddbd2();
      local_40 = FUN_1468d96f0;
      local_50 = 0;
      local_58 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_20);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_20);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_20 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_20);
    }
  }
  local_28 = 0;
  uStack_24 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9520b0) {
    FUN_144b3d300(&DAT_14c9520b0);
    if (DAT_14c9520b0 == -1) {
      local_48 = FUN_1446ddbd2();
      local_40 = FUN_1409e12a0;
      local_50 = 0;
      local_58 = 0xa001;
      FUN_14000176a(&DAT_14c952060,L"FNameProperty",0x2000,0);
      atexit(FUN_142816ef9);
      _Init_thread_footer(&DAT_14c9520b0);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_28);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_28);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_28 = (undefined4)uVar2;
      uStack_24 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_28);
    }
  }
  iStack_2c = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d20) {
    FUN_144b3d300(&DAT_14c951d20);
    if (DAT_14c951d20 == -1) {
      local_48 = FUN_1446ddbd2();
      local_40 = FUN_14067a048;
      local_50 = 0;
      local_58 = 0x28001;
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&iStack_2c);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&iStack_2c);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&iStack_2c);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      iStack_2c = (int)uVar2;
      local_28 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&iStack_2c);
    }
  }
  iVar4 = iStack_2c;
  local_30 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d20) {
    FUN_144b3d300(&DAT_14c951d20);
    if (DAT_14c951d20 == -1) {
      local_48 = FUN_1446ddbd2();
      local_40 = FUN_14067a048;
      local_50 = 0;
      local_58 = 0x28001;
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_30);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_30);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_30 = (int)uVar2;
      iStack_2c = (int)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_30);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_141328234(local_20,CONCAT44(uStack_24,local_28),iVar4 != 0,local_30 != 0);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141328234 FUN_141328234 body=328 status=ok
// SIG undefined FUN_141328234(void)

void FUN_141328234(longlong param_1,undefined8 param_2,undefined4 param_3,undefined1 param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  wchar_t *local_68;
  code *local_60;
  undefined1 *local_58;
  code **local_50;
  code *local_48;
  code *local_40;
  code *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1 != 0) {
    if (DAT_14cb94538 == 0) {
      local_50 = &local_30;
      local_30 = FUN_1449e2820;
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
    plVar1 = (longlong *)FUN_144718840(param_1,DAT_14cb94538);
    if (plVar1 != (longlong *)0x0) {
      uVar2 = (**(code **)(*plVar1 + 0x18))(plVar1);
      local_88 = CONCAT31(local_88._1_3_,param_4);
      FUN_140e16d82(uVar2,param_2,0,param_3);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14132837e FUN_14132837e body=88 status=ok
// SIG undefined FUN_14132837e(void)

longlong * FUN_14132837e(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (*param_1 != lVar2) {
    param_1[2] = 0;
  }
  *param_1 = lVar2;
  if (param_1[1] != param_2[1]) {
    param_1[2] = 0;
  }
  uVar1 = FUN_14477b664();
  lVar2 = FUN_14477b664(uVar1);
  param_1[1] = lVar2;
  param_1[2] = param_2[2];
  return param_1;
}



// FUNCTION 1413283d6 FUN_1413283d6 body=236 status=ok
// SIG undefined FUN_1413283d6(void)

void FUN_1413283d6(longlong param_1,longlong *param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar4 = FUN_140789e1e();
    if ((((lVar4 != 0) && (*(int *)(lVar4 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
        (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
         lVar4 + 0x30)) &&
       ((*param_2 != 0 && (iVar1 = *(int *)(param_1 + 0x38), (longlong)iVar1 != 0)))) {
      lVar2 = *(longlong *)(param_1 + 0x30);
      lVar4 = 0;
      do {
        lVar3 = *(longlong *)(lVar2 + lVar4);
        if (lVar3 != 0) {
          lVar6 = *param_2;
          if (lVar6 == 0) {
LAB_14132847d:
            lVar6 = 0;
          }
          else {
            lVar5 = FUN_140789e1e();
            if (((lVar5 == 0) || (*(int *)(lVar6 + 0x38) < *(int *)(lVar5 + 0x38))) ||
               (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) !=
                lVar5 + 0x30)) goto LAB_14132847d;
            lVar6 = *param_2;
          }
          if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar6 + 0x38) * 8) == lVar6 + 0x30)) {
            FUN_1413284c2(lVar3,param_3,param_4);
          }
        }
        lVar4 = lVar4 + 8;
      } while ((longlong)iVar1 * 8 != lVar4);
    }
  }
  return;
}



// FUNCTION 1413284c2 FUN_1413284c2 body=137 status=ok
// SIG undefined FUN_1413284c2(void)

void FUN_1413284c2(longlong *param_1,longlong *param_2,char param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  if ((longlong)(int)param_1[0x11] != 0) {
    lVar3 = (longlong)(int)param_1[0x11] * 0x1c;
    lVar4 = param_1[0x10] + 0xc;
    do {
      if ((*(longlong *)(lVar4 + -0xc) == *param_2) && (*(char *)(lVar4 + -4) == param_3)) {
        uVar2 = (**(code **)(*param_1 + 0x2b8))(param_1);
        cVar1 = FUN_14113f0c0(lVar4);
        if (cVar1 != '\0') {
          FUN_14132854b(lVar4,uVar2);
        }
      }
      lVar4 = lVar4 + 0x1c;
      lVar3 = lVar3 + -0x1c;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 14132854b FUN_14132854b body=161 status=ok
// SIG undefined FUN_14132854b(void)

void FUN_14132854b(uint *param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (param_1[1] != 0) {
    uVar1 = *param_1;
    plVar3 = (longlong *)0x0;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_1413285ab;
    puVar4 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((puVar4 != (undefined8 *)0x0) &&
       ((*(uint *)(puVar4 + 2) == param_1[1] && ((*(uint *)(puVar4 + 1) & 0x10200000) == 0)))) {
      plVar3 = (longlong *)*puVar4;
      goto LAB_1413285ab;
    }
  }
  plVar3 = (longlong *)0x0;
LAB_1413285ab:
  local_18 = param_2;
  uVar2 = FUN_14477b072(plVar3,*(undefined8 *)(param_1 + 2));
  (**(code **)(*plVar3 + 0x248))(plVar3,uVar2,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1413285ee FUN_1413285ee body=166 status=ok
// SIG undefined FUN_1413285ee(void)

void FUN_1413285ee(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  bool bVar9;
  
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_1400020a8();
  }
  lVar8 = 0x50;
  do {
    lVar4 = *(longlong *)(param_1 + -0x18 + lVar8);
    if (lVar4 != 0) {
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
              bVar9 = plVar7 != DAT_14ca843c0;
              plVar6 = plVar5;
              if (bVar9) {
                plVar7 = DAT_14ca843c0;
                plVar6 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar6;
              UNLOCK();
            } while (bVar9);
          }
          else {
            do {
              *plVar5 = (longlong)plVar6;
              LOCK();
              bVar9 = plVar6 != DAT_14ca843c8;
              plVar7 = plVar5;
              if (bVar9) {
                plVar6 = DAT_14ca843c8;
                plVar7 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar7;
              UNLOCK();
            } while (bVar9);
          }
        }
      }
    }
    lVar8 = lVar8 + -0x18;
  } while (lVar8 != 8);
  return;
}



// FUNCTION 141328694 FUN_141328694 body=62 status=ok
// SIG undefined FUN_141328694(void)

void FUN_141328694(longlong param_1,int param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  
  if (param_2 != 0) {
    plVar3 = (longlong *)(param_1 + 8);
    do {
      puVar2 = (undefined8 *)*plVar3;
      if (puVar2 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(puVar2 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar2)(puVar2,1);
        }
      }
      plVar3 = plVar3 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1413286d2 FUN_1413286d2 body=524 status=ok
// SIG undefined FUN_1413286d2(void)

void FUN_1413286d2(void)

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
  if (DAT_14cabc718 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cabc718,0,0,4);
  }
  uVar2 = DAT_14cabc720;
  uVar3 = local_70;
  if (DAT_14cabc720 != 0) {
    uVar10 = 0;
    FUN_144a1cbf0(&DAT_14cabc710,0,DAT_14cabc720,4);
    if (0 < (int)uVar2) {
      do {
        puVar8 = DAT_14cabc718;
        if (DAT_14cabc718 == (undefined *)0x0) {
          puVar8 = &DAT_14cabc710;
        }
        *(undefined4 *)(puVar8 + (ulonglong)(DAT_14cabc720 + 0x7fffffff & uVar10) * 4) = 0xffffffff;
        uVar10 = uVar10 + 1;
      } while (uVar2 != uVar10);
    }
    local_60 = 0x100000000;
    local_58 = &DAT_14cabc6e8;
    local_50 = 0xffffffff;
    local_48 = 0;
    if (DAT_14cabc700 != 0) {
      FUN_1449c0562(&local_60);
    }
    local_88 = &DAT_14cabc6d8;
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
        uVar6 = (longlong)iVar4 & (longlong)(int)DAT_14cabc720 - 1U;
        iVar4 = (int)uVar6;
        *(int *)(lVar1 + 0x24 + lVar5 * 0x28) = iVar4;
        puVar8 = DAT_14cabc718;
        if (DAT_14cabc718 == (undefined *)0x0) {
          puVar8 = &DAT_14cabc710;
        }
        *(undefined4 *)(lVar1 + 0x20 + lVar5 * 0x28) =
             *(undefined4 *)(puVar8 + ((longlong)(int)DAT_14cabc720 - 1U & uVar6) * 4);
        puVar8 = DAT_14cabc718;
        if (DAT_14cabc718 == (undefined *)0x0) {
          puVar8 = &DAT_14cabc710;
        }
        *(int *)(puVar8 + ((longlong)iVar4 & (longlong)(int)DAT_14cabc720 - 1U) * 4) = iVar11;
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



// FUNCTION 1413288e0 FUN_1413288e0 body=488 status=ok
// SIG undefined FUN_1413288e0(void)

undefined8 * FUN_1413288e0(undefined8 *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [8];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  *param_1 = &PTR_FUN_149e46b30;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined2 *)(param_1 + 0x25) = 0;
  *(undefined1 *)((longlong)param_1 + 0x12a) = 0;
  param_1[0x2a] = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  *(undefined8 *)((longlong)param_1 + 0x104) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10c) = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  *(undefined8 *)((longlong)param_1 + 0x15c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x164) = 0;
  param_1[0x2e] = 0;
  *(undefined4 *)(param_1 + 0x2f) = 0;
  param_1[0x34] = 0;
  *(undefined4 *)(param_1 + 0x35) = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1ac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1b4) = 0;
  param_1[0x38] = 0;
  *(undefined4 *)(param_1 + 0x39) = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  *(undefined4 *)(param_1 + 0x3c) = 2;
  *(undefined4 *)((longlong)param_1 + 500) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1e4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1ec) = 0;
  *(undefined4 *)(param_1 + 0x3f) = 2;
  *(undefined4 *)((longlong)param_1 + 0x20c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1fc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x204) = 0;
  *(undefined4 *)(param_1 + 0x42) = 2;
  *(undefined4 *)((longlong)param_1 + 0x224) = 0;
  *(undefined8 *)((longlong)param_1 + 0x214) = 0;
  *(undefined8 *)((longlong)param_1 + 0x21c) = 0;
  *(undefined4 *)(param_1 + 0x45) = 2;
  *(undefined4 *)((longlong)param_1 + 0x23c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x22c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x234) = 0;
  *(undefined4 *)(param_1 + 0x48) = 2;
  *(undefined4 *)((longlong)param_1 + 0x254) = 0;
  *(undefined8 *)((longlong)param_1 + 0x244) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24c) = 0;
  param_1[0x4b] = 2;
  *(undefined4 *)(param_1 + 0x4c) = 9;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  FUN_1416c813c(param_1);
  FUN_145d1380c(local_18,param_1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141328aca FUN_141328aca body=146 status=ok
// SIG undefined FUN_141328aca(void)

void FUN_141328aca(longlong param_1)

{
  longlong lVar1;
  ushort *puVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x288);
  if (*(char *)(lVar1 + 0xb8) != '\x01') {
    if (*(char *)(param_1 + 0x32c) == '\x01') {
      *(undefined4 *)(lVar1 + 0xb0) = 0x100;
      goto LAB_141328b11;
    }
    if (*(char *)(param_1 + 0x33c) == '\x01') {
      *(undefined4 *)(lVar1 + 0xb0) = 0x1000000;
      goto LAB_141328b11;
    }
    if ((*(char *)(param_1 + 0x334) != '\x01') || (*(char *)(param_1 + 0x324) == '\x01')) {
      *(undefined4 *)(lVar1 + 0xb0) = 0x10000;
      goto LAB_141328b11;
    }
    if (*(char *)(param_1 + 0x31c) != '\x01') {
      *(undefined4 *)(lVar1 + 0xb0) = 0;
      goto LAB_141328b11;
    }
  }
  *(undefined4 *)(lVar1 + 0xb0) = 1;
LAB_141328b11:
  puVar2 = *(ushort **)(lVar1 + 0x80);
  if (puVar2 != (ushort *)0x0) {
    *puVar2 = *puVar2 | (ushort)(1L << (*(byte *)(lVar1 + 0x78) & 0x3f));
  }
  return;
}



// FUNCTION 141328b5c FUN_141328b5c body=8539 status=ok
// SIG undefined FUN_141328b5c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_141328b5c(longlong param_1,longlong *param_2,longlong *param_3)

{
  int *piVar1;
  undefined1 auVar2 [16];
  ushort uVar3;
  ushort uVar4;
  undefined8 uVar5;
  void *_Src;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  uint3 uVar13;
  bool bVar14;
  code *pcVar15;
  char cVar16;
  undefined4 uVar17;
  longlong *plVar18;
  ulonglong uVar19;
  longlong lVar20;
  longlong lVar21;
  longlong *plVar22;
  longlong lVar23;
  uint uVar24;
  longlong lVar25;
  undefined ***pppuVar26;
  uint uVar27;
  longlong lVar28;
  code *pcVar29;
  longlong *plVar30;
  longlong *plVar31;
  uint uVar32;
  uint uVar33;
  int iVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auStack_398 [32];
  longlong *local_378;
  undefined8 local_370;
  undefined4 local_368;
  undefined8 local_360;
  wchar_t *local_358;
  undefined1 *local_350;
  undefined1 *local_348;
  code **local_340;
  code *local_338;
  code *local_330;
  longlong local_320;
  undefined4 local_314;
  longlong local_310;
  longlong *local_308;
  longlong *local_300;
  longlong *local_2f8;
  longlong *local_2f0;
  undefined4 local_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined8 local_2d8;
  longlong local_2d0;
  longlong local_2c8;
  longlong local_2c0;
  longlong local_2b8;
  code *local_2b0;
  code *local_2a8;
  code *local_2a0;
  code *local_298;
  longlong *plStack_290;
  undefined1 local_288 [16];
  undefined **ppuStack_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  longlong local_258;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  longlong *local_248;
  undefined8 uStack_240;
  longlong local_238 [4];
  longlong *local_218;
  longlong lStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_198;
  undefined4 local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined2 local_158;
  undefined8 local_154;
  undefined8 uStack_14c;
  code *local_138;
  undefined8 uStack_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_398;
  cVar16 = FUN_14132acb8();
  if (cVar16 == '\0') {
LAB_141329a29:
    *param_2 = 0;
  }
  else {
    uVar17 = FUN_1411bcf8a(param_3);
    plVar18 = (longlong *)FUN_14132ad16(param_1 + 0x48,uVar17,param_3);
    plVar22 = param_3 + 2;
    plVar30 = (longlong *)(param_1 + 0x98);
    lVar23 = param_3[2];
    uVar27 = (uint)((ulonglong)lVar23 >> 0x20);
    uVar24 = uVar27 >> 0xd ^ (int)lVar23 - uVar27;
    uVar32 = uVar24 << 8 ^ (-0x61c88647 - uVar24) - uVar27;
    uVar33 = uVar32 >> 0xd ^ (uVar27 - uVar24) - uVar32;
    uVar27 = uVar33 >> 0xc ^ (uVar24 - uVar32) - uVar33;
    uVar24 = uVar27 << 0x10 ^ (uVar32 - uVar33) - uVar27;
    uVar32 = uVar24 >> 5 ^ (uVar33 - uVar27) - uVar24;
    uVar27 = uVar32 >> 3 ^ (uVar27 - uVar24) - uVar32;
    uVar24 = uVar27 << 10 ^ (uVar24 - uVar32) - uVar27;
    if (*(int *)(param_1 + 0xa0) != *(int *)(param_1 + 0xcc)) {
      lVar25 = param_1 + 0xd0;
      if (*(longlong *)(param_1 + 0xd8) != 0) {
        lVar25 = *(longlong *)(param_1 + 0xd8);
      }
      iVar34 = *(int *)(lVar25 + (ulonglong)
                                 (*(int *)(param_1 + 0xe0) - 1U &
                                 (uVar24 >> 0xf ^ uVar32 - (uVar27 + uVar24))) * 4);
      if (iVar34 != -1) {
        do {
          plVar31 = (longlong *)(*plVar30 + (longlong)iVar34 * 0x18);
          if (*plVar31 == lVar23) {
            if (plVar31 != (longlong *)0x0) goto LAB_141328d06;
            break;
          }
          iVar34 = (int)plVar31[2];
        } while (iVar34 != -1);
      }
    }
    local_218 = plVar22;
    FUN_1458f5eb0(plVar30,&local_298);
    plVar31 = (longlong *)(*plVar30 + (longlong)(int)local_298 * 0x18);
LAB_141328d06:
    plVar31 = plVar31 + 1;
    lVar23 = *plVar31;
    if (lVar23 == 0) {
      FUN_140002266(&local_218,L"Thumbnail_RawRenderTarget_%dX%d",(int)param_3[2],
                    *(undefined4 *)((longlong)param_3 + 0x14));
      plVar30 = local_218;
      if ((int)lStack_210 == 0) {
        plVar30 = (longlong *)&DAT_149dfb77a;
      }
      FUN_1446f470e(&local_298,plVar30);
      local_370 = 0;
      local_378 = (longlong *)((ulonglong)local_378 & 0xffffffffffffff00);
      lVar23 = FUN_1458f5bea(param_1,local_298,0,0);
      if ((lVar23 != 0) && (DAT_14c950c29 != 0)) {
        FUN_1456cec3c(lVar23);
      }
      *plVar31 = lVar23;
      if (local_218 != (longlong *)0x0) {
        FUN_1400020a8();
        lVar23 = *plVar31;
      }
      if (lVar23 == 0) {
        lVar23 = 0;
      }
      else {
        *(byte *)(lVar23 + 0x13c) = *(byte *)(lVar23 + 0x13c) & 0xfe;
        lVar23 = *plVar31;
        *(undefined8 *)(lVar23 + 0x148) = 0;
        *(undefined8 *)(lVar23 + 0x150) = 0;
        *(undefined1 *)(*plVar31 + 0x160) = 0x13;
        plVar30 = (longlong *)*plVar31;
        iVar34 = *(int *)((longlong)param_3 + 0x14);
        *(int *)(plVar30 + 0x28) = (int)param_3[2] * 2;
        *(int *)((longlong)plVar30 + 0x144) = iVar34 * 2;
        (**(code **)(*plVar30 + 0x318))();
        FUN_140768b6e(*plVar31,1);
        lVar23 = *plVar31;
      }
    }
    lVar25 = *(longlong *)(param_1 + 0x140);
    lVar28 = *plVar18;
    if (lVar25 != 0) {
      local_310 = lVar23;
      if (lVar28 == 0) {
        if (lVar23 == 0) goto LAB_141329a29;
      }
      else if ((lVar23 == 0) || (DAT_14c7640a4 != '\0')) goto LAB_141329b2d;
      if (param_3[3] == 0) {
        if (*(longlong *)(lVar25 + 0xb0) == 0) {
LAB_141328de7:
          local_1b8 = 0;
          local_1b0 = 0x8000000000;
          uStack_1a8 = 0xffffffff;
          local_218 = (longlong *)0x0;
          lStack_210 = 0;
          local_208 = 0;
          uStack_200 = 0;
          local_1f8 = 0;
          uStack_1f0 = 0;
          local_1e8 = 0;
          uStack_1e0 = 0;
          local_1d8 = 0;
          uStack_1d0 = 0;
          local_198 = 0;
          local_190 = 0;
          local_188 = 0;
          uStack_180 = 0;
          local_178 = 0;
          uStack_170 = 0;
          local_168 = 0;
          local_160 = 0xf;
          local_158 = 1;
          local_154 = 0;
          uStack_14c = 0;
          local_300 = plVar18;
          FUN_14088c870(&local_218,param_3,lVar23);
          uVar19 = FUN_14132b09a(&local_298,*(undefined8 *)(lVar25 + 0x30));
          if (plStack_290 == (longlong *)0x0) {
LAB_141328edc:
            local_314 = (undefined4)CONCAT71((int7)(uVar19 >> 8),1);
            plVar30 = (longlong *)0x0;
          }
          else {
            uVar19 = (ulonglong)*(uint *)(plStack_290 + 1);
            do {
              uVar24 = (uint)uVar19;
              if (uVar24 == 0) {
                plVar30 = (longlong *)0x0;
                break;
              }
              LOCK();
              uVar27 = *(uint *)(plStack_290 + 1);
              if (uVar24 == uVar27) {
                *(uint *)(plStack_290 + 1) = uVar24 + 1;
              }
              else {
                uVar19 = (ulonglong)uVar27;
              }
              UNLOCK();
              plVar30 = plStack_290;
            } while (uVar24 != uVar27);
            LOCK();
            piVar1 = (int *)((longlong)plStack_290 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              uVar19 = (**(code **)(*plStack_290 + 0x10))();
            }
            if (plVar30 == (longlong *)0x0) goto LAB_141328edc;
            if (local_298 != (code *)0x0) {
              FUN_14132cab0();
              *(undefined8 *)(lVar25 + 0xe0) = 0;
            }
            local_314 = 0;
          }
          lVar23 = *(longlong *)(lVar25 + 0xb0);
          if (lVar23 == 0) {
            uVar5 = *(undefined8 *)(lVar25 + 0x30);
            ppuStack_278 = (undefined **)0x0;
            uStack_270 = 0;
            local_288 = ZEXT816(0);
            local_298 = (code *)0x0;
            plStack_290 = (longlong *)0x0;
            uVar13 = CONCAT12(local_268._2_1_,0x100);
            local_268._0_4_ = (uint)(uVar13 & 0xe0ffff);
            local_268 = CONCAT44(8,(uint)local_268);
            local_258 = 0;
            local_248 = (longlong *)0x0;
            if (DAT_14cac9ca8 == 0) {
              local_340 = &local_138;
              local_138 = FUN_141030f22;
              local_330 = FUN_14081d0ea;
              local_338 = FUN_14081d0ea;
              local_348 = &LAB_1478c0a72;
              local_350 = &LAB_1417b2375;
              local_358 = L"Engine";
              local_360 = 0x1000000000;
              local_368 = 0x10000004;
              local_370 = CONCAT44(local_370._4_4_,8);
              local_378 = (longlong *)CONCAT44(local_378._4_4_,0x390);
              FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
            }
            local_138 = (code *)0x0;
            uStack_130 = 0;
            local_128 = 0;
            uStack_124 = 0;
            uStack_120 = 0;
            uStack_11c = 0x3ff00000;
            local_118 = 0;
            uStack_110 = 0;
            local_108 = 0;
            uStack_100 = 0;
            local_f8 = 0x3ff0000000000000;
            uStack_f0 = 0x3ff0000000000000;
            local_e8 = 0x3ff0000000000000;
            uStack_e0 = 0;
            lVar28 = FUN_141037e38(uVar5,DAT_14cac9ca8,&local_138,&local_298);
            if ((lVar28 != 0) && (DAT_14c950c29 != 0)) {
              FUN_1456cec3c(lVar28);
            }
            *(longlong *)(lVar25 + 0xb0) = lVar28;
            if (local_258 != 0) {
              plVar18 = local_248;
              if (local_248 == (longlong *)0x0) {
                plVar18 = local_238;
              }
              (**(code **)(*plVar18 + 0x10))();
              lVar28 = *(longlong *)(lVar25 + 0xb0);
            }
            if (DAT_14cb63950 == 0) {
              local_298 = FUN_144a7958c;
              local_330 = FUN_14081d0ea;
              local_338 = (code *)&LAB_1464ec72a;
              local_340 = &local_298;
              local_348 = &LAB_1486f5f75;
              local_350 = &LAB_140945686;
              local_358 = L"Engine";
              local_360 = 0;
              local_368 = 0x10000004;
              local_370 = CONCAT44(local_370._4_4_,0x10);
              local_378 = (longlong *)CONCAT44(local_378._4_4_,0x19d0);
              FUN_14081cfa3(L"/Script/GbxGame",L"GbxSkeletalMeshComponent",&DAT_14cb63950,
                            FUN_1464fe8ee);
            }
            local_2b8 = DAT_14cb63950;
            if ((DAT_14cb63950 != 0) && (DAT_14c950c29 != 0)) {
              FUN_1456cec3c();
            }
            local_378 = (longlong *)((ulonglong)local_378 & 0xffffffffffffff00);
            lVar28 = FUN_140fae5dc(lVar28,&local_2b8,1,&DAT_14c846480);
            if (lVar28 == 0) {
LAB_141329164:
              lVar28 = 0;
            }
            else {
              if (DAT_14cad2858 == 0) {
                local_298 = FUN_144a7958c;
                local_330 = FUN_14081d0ea;
                local_338 = (code *)&LAB_146395584;
                local_340 = &local_298;
                local_348 = &LAB_147a0ba80;
                local_350 = &LAB_14575ccce;
                local_358 = L"Engine";
                local_360 = 0x40000000000;
                local_368 = 0x10000004;
                local_370 = CONCAT44(local_370._4_4_,0x10);
                local_378 = (longlong *)CONCAT44(local_378._4_4_,0x1180);
                FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,
                              FUN_1463bcebe);
              }
              if ((*(int *)(*(longlong *)(lVar28 + 0x10) + 0x38) < *(int *)(DAT_14cad2858 + 0x38))
                 || (*(longlong *)
                      (*(longlong *)(*(longlong *)(lVar28 + 0x10) + 0x30) +
                      (longlong)*(int *)(DAT_14cad2858 + 0x38) * 8) != DAT_14cad2858 + 0x30))
              goto LAB_141329164;
              if (DAT_14c950c29 == 1) {
                FUN_1456cec3c(lVar28);
              }
            }
            *(longlong *)(lVar25 + 0xc0) = lVar28;
            uVar5 = *(undefined8 *)(lVar25 + 0xb0);
            if (DAT_14cad3688 == 0) {
              local_298 = FUN_144b223ce;
              local_330 = FUN_14081d0ea;
              local_338 = (code *)&LAB_1417963e0;
              local_340 = &local_298;
              local_348 = &LAB_147a2f4c9;
              local_350 = &LAB_1400ea6f8;
              local_358 = L"Engine";
              local_360 = 0x200000000000;
              local_368 = 0x10000004;
              local_370 = CONCAT44(local_370._4_4_,0x10);
              local_378 = (longlong *)CONCAT44(local_378._4_4_,0x720);
              FUN_14081cfa3(L"/Script/Engine",L"StaticMeshComponent",&DAT_14cad3688,FUN_1463bfdc8);
            }
            local_2c0 = DAT_14cad3688;
            if ((DAT_14cad3688 != 0) && (DAT_14c950c29 != 0)) {
              FUN_1456cec3c();
            }
            local_378 = (longlong *)((ulonglong)local_378 & 0xffffffffffffff00);
            lVar28 = FUN_140fae5dc(uVar5,&local_2c0,1,&DAT_14c846480);
            if (lVar28 == 0) {
LAB_1413291f5:
              lVar28 = 0;
            }
            else {
              if (DAT_14cad3688 == 0) {
                local_298 = FUN_144b223ce;
                local_330 = FUN_14081d0ea;
                local_338 = (code *)&LAB_1417963e0;
                local_340 = &local_298;
                local_348 = &LAB_147a2f4c9;
                local_350 = &LAB_1400ea6f8;
                local_358 = L"Engine";
                local_360 = 0x200000000000;
                local_368 = 0x10000004;
                local_370 = CONCAT44(local_370._4_4_,0x10);
                local_378 = (longlong *)CONCAT44(local_378._4_4_,0x720);
                FUN_14081cfa3(L"/Script/Engine",L"StaticMeshComponent",&DAT_14cad3688,FUN_1463bfdc8)
                ;
              }
              if ((*(int *)(*(longlong *)(lVar28 + 0x10) + 0x38) < *(int *)(DAT_14cad3688 + 0x38))
                 || (*(longlong *)
                      (*(longlong *)(*(longlong *)(lVar28 + 0x10) + 0x30) +
                      (longlong)*(int *)(DAT_14cad3688 + 0x38) * 8) != DAT_14cad3688 + 0x30))
              goto LAB_1413291f5;
              if (DAT_14c950c29 == 1) {
                FUN_1456cec3c(lVar28);
              }
            }
            *(longlong *)(lVar25 + 0xb8) = lVar28;
          }
          if (local_218 == (longlong *)0x0) {
            bVar14 = false;
          }
          else {
            local_2f0 = plVar22;
            lVar28 = FUN_1401fe4bc(local_218 + 0x34);
            if (lVar28 == 0) {
              bVar14 = false;
              plVar22 = local_2f0;
            }
            else {
              lVar20 = FUN_14045ceca();
              lVar21 = *(longlong *)(lVar28 + 0x10);
              iVar34 = *(int *)(lVar21 + 0x38);
              if ((iVar34 < *(int *)(lVar20 + 0x38)) ||
                 (*(longlong *)
                   (*(longlong *)(lVar21 + 0x30) + (longlong)*(int *)(lVar20 + 0x38) * 8) !=
                  lVar20 + 0x30)) {
                if (DAT_14cb06da8 == 0) {
                  local_298 = FUN_1449e2820;
                  local_330 = FUN_14081d0ea;
                  local_338 = (code *)&LAB_1464003b0;
                  local_340 = &local_298;
                  local_348 = &LAB_147d17bdf;
                  local_350 = &LAB_1417edf22;
                  local_358 = L"Engine";
                  local_360 = 0;
                  local_368 = 0x10000000;
                  local_370 = CONCAT44(local_370._4_4_,8);
                  local_378 = (longlong *)CONCAT44(local_378._4_4_,0x588);
                  FUN_14081cfa3(L"/Script/Engine",L"SkeletalMesh",&DAT_14cb06da8,FUN_14640038e);
                  lVar21 = *(longlong *)(lVar28 + 0x10);
                  iVar34 = *(int *)(lVar21 + 0x38);
                }
                if ((iVar34 < *(int *)(DAT_14cb06da8 + 0x38)) ||
                   (local_320 = lVar28,
                   *(longlong *)
                    (*(longlong *)(lVar21 + 0x30) + (longlong)*(int *)(DAT_14cb06da8 + 0x38) * 8) !=
                   DAT_14cb06da8 + 0x30)) {
                  local_320 = 0;
                }
                lVar21 = FUN_1406d0862();
                if ((*(int *)(*(longlong *)(lVar28 + 0x10) + 0x38) < *(int *)(lVar21 + 0x38)) ||
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar28 + 0x10) + 0x30) +
                     (longlong)*(int *)(lVar21 + 0x38) * 8) != lVar21 + 0x30)) {
                  lVar28 = 0;
                }
              }
              else {
                plVar22 = (longlong *)
                          (**(code **)(*(longlong *)(lVar28 + 0x50) + 0x10))(lVar28 + 0x50);
                local_320 = (**(code **)(*plVar22 + 0x80))(plVar22);
                plVar22 = (longlong *)
                          (**(code **)(*(longlong *)(lVar28 + 0x50) + 0x10))(lVar28 + 0x50);
                lVar28 = (**(code **)(*plVar22 + 0x90))(plVar22);
              }
              if ((DAT_14c760d84 == 0) || ((DAT_14ca84f5a & 1) == 0)) {
                cVar16 = FUN_1406917e6();
                lVar21 = local_320;
                if ((cVar16 != '\0') && ((lVar23 != 0 && ((DAT_14c7640ca & 1) != 0))))
                goto LAB_14132923d;
LAB_14132947d:
                if (lVar21 != 0) {
                  lVar23 = *(longlong *)(lVar25 + 0xc0);
                  if (lVar23 != 0) {
                    if (*(longlong *)(lVar25 + 0xb0) != 0) {
                      FUN_14010ee68(*(longlong *)(lVar25 + 0xb0),lVar23);
                      (**(code **)(**(longlong **)(lVar25 + 0xc0) + 0xaa8))
                                (*(longlong **)(lVar25 + 0xc0),lVar21,1);
                      FUN_1400f829a(*(undefined8 *)(lVar25 + 0xb0),*(undefined8 *)(lVar25 + 0xb8));
                      FUN_14045627c(*(undefined8 *)(lVar25 + 0xc0),1,1);
                      if (*(longlong *)(lVar25 + 0xb8) != 0) {
                        FUN_14045627c(*(longlong *)(lVar25 + 0xb8),0,1);
                      }
                      lVar23 = *(longlong *)(lVar25 + 0xc0);
                      (**(code **)(*(longlong *)(lVar23 + 0x650) + 0x28))(lVar23 + 0x650);
                      (**(code **)(*(longlong *)(lVar23 + 0x650) + 0x30))(lVar23 + 0x650);
                      (**(code **)(**(longlong **)(lVar25 + 0xc0) + 0xa28))
                                (*(longlong **)(lVar25 + 0xc0),0x3f800000);
                      (**(code **)(**(longlong **)(lVar25 + 0xc0) + 0xa20))
                                (*(longlong **)(lVar25 + 0xc0),0x3f800000,0,0);
                      lVar23 = *(longlong *)(lVar25 + 0xc0);
                      if (lVar23 == 0) goto LAB_14132963f;
                    }
                    FUN_1406548f2(lVar23);
                    if (0 < (longlong)*(int *)(lVar23 + 0x140)) {
                      uVar19 = (longlong)*(int *)(lVar23 + 0x140) + 1;
                      do {
                        plVar22 = *(longlong **)(*(longlong *)(lVar23 + 0x138) + -0x10 + uVar19 * 8)
                        ;
                        if (plVar22 != (longlong *)0x0) {
                          (**(code **)(*plVar22 + 0x420))();
                        }
                        uVar19 = uVar19 - 1;
                      } while (1 < uVar19);
                    }
                    if (*(longlong *)(lVar25 + 0xb0) != 0) {
                      FUN_14092e51e();
                    }
                    if (*(longlong *)(lVar25 + 0xc0) != 0) {
                      local_298 = (code *)0x0;
                      plStack_290 = (longlong *)0x0;
                      FUN_140d0ec1d(&local_218,&local_298);
                      FUN_140d0e9ce(*(undefined8 *)(lVar25 + 0xc0),&local_298);
                      cVar16 = FUN_14132daf6(&local_218,*(undefined8 *)(lVar25 + 0xc0),1);
                      if (cVar16 != '\0') {
                        (**(code **)(**(longlong **)(lVar25 + 0xc0) + 0xc68))();
                      }
                      if (local_298 != (code *)0x0) {
                        FUN_1400020a8();
                      }
                    }
                  }
                  goto LAB_14132963f;
                }
                if ((lVar28 == 0) || (lVar23 = FUN_1458f642a(lVar25), lVar23 == 0))
                goto LAB_14132963f;
                FUN_1406548f2(lVar23);
                if (0 < (longlong)*(int *)(lVar23 + 0x140)) {
                  uVar19 = (longlong)*(int *)(lVar23 + 0x140) + 1;
                  do {
                    plVar22 = *(longlong **)(*(longlong *)(lVar23 + 0x138) + -0x10 + uVar19 * 8);
                    if (plVar22 != (longlong *)0x0) {
                      (**(code **)(*plVar22 + 0x420))();
                    }
                    uVar19 = uVar19 - 1;
                  } while (1 < uVar19);
                }
                if (*(longlong *)(lVar25 + 0xb0) != 0) {
                  FUN_14092e51e();
                  goto LAB_14132963f;
                }
              }
              else {
                lVar21 = local_320;
                if ((lVar23 == 0) || (DAT_14c7640ca == 0)) goto LAB_14132947d;
LAB_14132923d:
                if (lVar28 != 0 || local_320 != 0) {
                  lVar21 = local_320;
                  if ((*(longlong *)(lVar25 + 0xb0) == 0) ||
                     (*(longlong *)(*(longlong *)(lVar25 + 0xb0) + 0x1c8) == 0)) goto LAB_14132947d;
                  plVar22 = *(longlong **)(lVar25 + 0xc0);
                  local_2f8 = param_2;
                  if (plVar22 != (longlong *)0x0) {
                    lVar23 = plVar22[0x28];
                    local_308 = plVar22;
                    if ((longlong)(int)lVar23 != 0) {
                      lVar21 = plVar22[0x27];
                      lVar20 = 0;
                      do {
                        plVar22 = *(longlong **)(lVar21 + lVar20);
                        if (plVar22 != (longlong *)0x0) {
                          (**(code **)(*plVar22 + 0x420))(plVar22,0);
                        }
                        lVar20 = lVar20 + 8;
                      } while ((longlong)(int)lVar23 * 8 != lVar20);
                    }
                    (**(code **)(*local_308 + 0x420))(local_308,0);
                    uVar5 = *(undefined8 *)(lVar25 + 0xb0);
                    if (DAT_14cb63950 == 0) {
                      local_298 = FUN_144a7958c;
                      local_330 = FUN_14081d0ea;
                      local_338 = (code *)&LAB_1464ec72a;
                      local_340 = &local_298;
                      local_348 = &LAB_1486f5f75;
                      local_350 = &LAB_140945686;
                      local_358 = L"Engine";
                      local_360 = 0;
                      local_368 = 0x10000004;
                      local_370 = CONCAT44(local_370._4_4_,0x10);
                      local_378 = (longlong *)CONCAT44(local_378._4_4_,0x19d0);
                      FUN_14081cfa3(L"/Script/GbxGame",L"GbxSkeletalMeshComponent",&DAT_14cb63950,
                                    FUN_1464fe8ee);
                    }
                    local_2c8 = DAT_14cb63950;
                    if ((DAT_14cb63950 != 0) && (DAT_14c950c29 != 0)) {
                      FUN_1456cec3c();
                    }
                    local_378 = (longlong *)((ulonglong)local_378 & 0xffffffffffffff00);
                    lVar23 = FUN_140fae5dc(uVar5,&local_2c8,1,&DAT_14c846480);
                    param_2 = local_2f8;
                    lVar21 = local_320;
                    if (lVar23 == 0) {
LAB_14132936d:
                      lVar23 = 0;
                    }
                    else {
                      if (DAT_14cad2858 == 0) {
                        local_298 = FUN_144a7958c;
                        local_330 = FUN_14081d0ea;
                        local_338 = (code *)&LAB_146395584;
                        local_340 = &local_298;
                        local_348 = &LAB_147a0ba80;
                        local_350 = &LAB_14575ccce;
                        local_358 = L"Engine";
                        local_360 = 0x40000000000;
                        local_368 = 0x10000004;
                        local_370 = CONCAT44(local_370._4_4_,0x10);
                        local_378 = (longlong *)CONCAT44(local_378._4_4_,0x1180);
                        FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,
                                      FUN_1463bcebe);
                      }
                      if ((*(int *)(*(longlong *)(lVar23 + 0x10) + 0x38) <
                           *(int *)(DAT_14cad2858 + 0x38)) ||
                         (*(longlong *)
                           (*(longlong *)(*(longlong *)(lVar23 + 0x10) + 0x30) +
                           (longlong)*(int *)(DAT_14cad2858 + 0x38) * 8) != DAT_14cad2858 + 0x30))
                      goto LAB_14132936d;
                      if (DAT_14c950c29 == 1) {
                        FUN_1456cec3c(lVar23);
                      }
                    }
                    *(longlong *)(lVar25 + 0xc0) = lVar23;
                  }
                  plVar22 = *(longlong **)(lVar25 + 0xb8);
                  if (plVar22 == (longlong *)0x0) goto LAB_14132947d;
                  lVar23 = plVar22[0x28];
                  local_308 = plVar22;
                  if ((longlong)(int)lVar23 != 0) {
                    lVar21 = plVar22[0x27];
                    lVar20 = 0;
                    do {
                      plVar22 = *(longlong **)(lVar21 + lVar20);
                      if (plVar22 != (longlong *)0x0) {
                        (**(code **)(*plVar22 + 0x420))(plVar22,0);
                      }
                      lVar20 = lVar20 + 8;
                    } while ((longlong)(int)lVar23 * 8 != lVar20);
                  }
                  (**(code **)(*local_308 + 0x420))(local_308,0);
                  uVar5 = *(undefined8 *)(lVar25 + 0xb0);
                  if (DAT_14cad3688 == 0) {
                    local_298 = FUN_144b223ce;
                    local_330 = FUN_14081d0ea;
                    local_338 = (code *)&LAB_1417963e0;
                    local_340 = &local_298;
                    local_348 = &LAB_147a2f4c9;
                    local_350 = &LAB_1400ea6f8;
                    local_358 = L"Engine";
                    local_360 = 0x200000000000;
                    local_368 = 0x10000004;
                    local_370 = CONCAT44(local_370._4_4_,0x10);
                    local_378 = (longlong *)CONCAT44(local_378._4_4_,0x720);
                    FUN_14081cfa3(L"/Script/Engine",L"StaticMeshComponent",&DAT_14cad3688,
                                  FUN_1463bfdc8);
                  }
                  local_2d0 = DAT_14cad3688;
                  if ((DAT_14cad3688 != 0) && (DAT_14c950c29 != 0)) {
                    FUN_1456cec3c();
                  }
                  local_378 = (longlong *)((ulonglong)local_378 & 0xffffffffffffff00);
                  lVar23 = FUN_140fae5dc(uVar5,&local_2d0,1,&DAT_14c846480);
                  param_2 = local_2f8;
                  lVar21 = local_320;
                  if (lVar23 == 0) {
LAB_141329474:
                    lVar23 = 0;
                  }
                  else {
                    if (DAT_14cad3688 == 0) {
                      local_298 = FUN_144b223ce;
                      local_330 = FUN_14081d0ea;
                      local_338 = (code *)&LAB_1417963e0;
                      local_340 = &local_298;
                      local_348 = &LAB_147a2f4c9;
                      local_350 = &LAB_1400ea6f8;
                      local_358 = L"Engine";
                      local_360 = 0x200000000000;
                      local_368 = 0x10000004;
                      local_370 = CONCAT44(local_370._4_4_,0x10);
                      local_378 = (longlong *)CONCAT44(local_378._4_4_,0x720);
                      FUN_14081cfa3(L"/Script/Engine",L"StaticMeshComponent",&DAT_14cad3688,
                                    FUN_1463bfdc8);
                    }
                    if ((*(int *)(*(longlong *)(lVar23 + 0x10) + 0x38) <
                         *(int *)(DAT_14cad3688 + 0x38)) ||
                       (*(longlong *)
                         (*(longlong *)(*(longlong *)(lVar23 + 0x10) + 0x30) +
                         (longlong)*(int *)(DAT_14cad3688 + 0x38) * 8) != DAT_14cad3688 + 0x30))
                    goto LAB_141329474;
                    if (DAT_14c950c29 == 1) {
                      FUN_1456cec3c(lVar23);
                    }
                  }
                  *(longlong *)(lVar25 + 0xb8) = lVar23;
                  goto LAB_14132947d;
                }
LAB_14132963f:
                if (*(longlong *)(lVar25 + 0xb0) != 0) {
                  local_138 = (code *)0x0;
                  uStack_130 = 0;
                  auVar2._8_8_ = 0;
                  auVar2._0_8_ = local_288._8_8_;
                  local_288 = auVar2 << 0x40;
                  ppuStack_278 = &PTR_LAB_14b9d8ce0;
                  local_298 = FUN_144327ed4;
                  FUN_140255853(&local_218,0,&local_298,&local_138);
                  pcVar15 = local_138;
                  lVar23 = (longlong)(int)uStack_130;
                  if (lVar23 != 0) {
                    lVar28 = 0;
                    do {
                      (**(code **)(**(longlong **)(pcVar15 + lVar28) + 0x30))
                                (*(longlong **)(pcVar15 + lVar28),*(undefined8 *)(lVar25 + 0xb0),2);
                      lVar28 = lVar28 + 0x10;
                    } while (lVar23 * 0x10 != lVar28);
                  }
                  if (local_298 != (code *)0x0) {
                    pppuVar26 = (undefined ***)local_288._0_8_;
                    if ((undefined ***)local_288._0_8_ == (undefined ***)0x0) {
                      pppuVar26 = &ppuStack_278;
                    }
                    (*(code *)(*pppuVar26)[2])();
                  }
                  FUN_140255aed(local_138);
                  if (local_138 != (code *)0x0) {
                    FUN_1400020a8();
                  }
                }
              }
              if ((((DAT_14c760d84 != 0) && ((DAT_14ca84f5a & 1) != 0)) ||
                  (cVar16 = FUN_1406917e6(), cVar16 != '\0')) &&
                 (lVar23 = *(longlong *)(lVar25 + 0xb0), lVar23 != 0)) {
                if (DAT_14cac6e60 == (code *)0x0) {
                  local_298 = FUN_144a7958c;
                  local_330 = FUN_14081d0ea;
                  local_338 = FUN_142b47bc4;
                  local_340 = &local_298;
                  local_348 = &LAB_1478989f1;
                  local_350 = &LAB_146391124;
                  local_358 = L"Engine";
                  local_360 = 0x10000000000;
                  local_368 = 0x10000005;
                  local_370 = CONCAT44(local_370._4_4_,0x10);
                  local_378 = (longlong *)CONCAT44(local_378._4_4_,0x620);
                  FUN_14081cfa3(L"/Script/Engine",L"PrimitiveComponent",&DAT_14cac6e60,FUN_146391102
                               );
                }
                pcVar15 = DAT_14cac6e60;
                if ((DAT_14cac6e60 == (code *)0x0) || (DAT_14c950c29 == 0)) {
                  if (DAT_14cac6e60 != (code *)0x0) goto LAB_14132976a;
                  if (DAT_14cad00c8 == (code *)0x0) goto LAB_14132a7a9;
                  pcVar29 = (code *)0x0;
LAB_1413297e2:
                  if (pcVar29 == DAT_14cad00c8) {
                    local_138 = pcVar15;
                    if ((~DAT_14c950c29 & 1) == 0 && pcVar15 != (code *)0x0) {
                      FUN_1456cec3c(pcVar15);
                    }
                    FUN_14132e80e(lVar23,&local_138);
                    goto LAB_141329817;
                  }
                }
                else {
                  FUN_1456cec3c(DAT_14cac6e60);
LAB_14132976a:
                  if (DAT_14cad00c8 == (code *)0x0) {
                    local_298 = FUN_144a7958c;
                    local_330 = FUN_14081d0ea;
                    local_338 = FUN_14081d0ea;
                    local_340 = &local_298;
                    local_348 = &LAB_1479b7a0c;
                    local_350 = &LAB_1463b464e;
                    local_358 = L"Engine";
                    local_360 = 0;
                    local_368 = 0x10000005;
                    local_370 = CONCAT44(local_370._4_4_,8);
                    local_378 = (longlong *)CONCAT44(local_378._4_4_,0x110);
                    FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8,FUN_1463b462c);
                    if (DAT_14cad00c8 == (code *)0x0) {
LAB_14132a7a9:
                      local_298 = FUN_144a7958c;
                      local_330 = FUN_14081d0ea;
                      local_338 = FUN_14081d0ea;
                      local_340 = &local_298;
                      local_348 = &LAB_1479b7a0c;
                      local_350 = &LAB_1463b464e;
                      local_358 = L"Engine";
                      local_360 = 0;
                      local_368 = 0x10000005;
                      local_370 = CONCAT44(local_370._4_4_,8);
                      local_378 = (longlong *)CONCAT44(local_378._4_4_,0x110);
                      FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8,FUN_1463b462c
                                   );
                      pcVar29 = (code *)0x0;
                      goto LAB_1413297e2;
                    }
                  }
                  if (*(int *)(DAT_14cad00c8 + 0x38) <= *(int *)(pcVar15 + 0x38)) {
                    pcVar29 = (code *)0x0;
                    if (*(code **)(*(longlong *)(pcVar15 + 0x30) +
                                  (longlong)*(int *)(DAT_14cad00c8 + 0x38) * 8) ==
                        DAT_14cad00c8 + 0x30) {
                      pcVar29 = pcVar15;
                    }
                    goto LAB_1413297e2;
                  }
                }
                local_2a0 = pcVar15;
                if ((pcVar15 != (code *)0x0) && ((DAT_14c950c29 & 1) != 0)) {
                  FUN_1456cec3c(pcVar15);
                }
                FUN_14132e196(lVar23,&local_2a0);
              }
LAB_141329817:
              plVar22 = *(longlong **)(lVar25 + 0xb0);
              (**(code **)(*plVar22 + 0x4b0))(plVar22);
              FUN_14132cf46(plVar22,0,0);
              lVar23 = DAT_14cbe40b0;
              if (DAT_14cbe40b0 != 0) {
                if (lStack_210 == 0) {
                  local_298 = (code *)0x0;
LAB_141329869:
                  if (local_218 != (longlong *)0x0) {
                    local_298 = *(code **)((longlong)local_218 + 0x1dc);
                  }
                }
                else {
                  local_298 = *(code **)(lStack_210 + 0x78);
                  if (local_298 == (code *)0x0) goto LAB_141329869;
                }
                FUN_1446dcdd4(&local_138,&local_298);
                lVar28 = FUN_144815d88(lVar23,&local_138);
                if (lVar28 == 0) {
                  local_298 = (code *)0x0;
                  plStack_290 = (longlong *)0x0;
                  local_288._0_8_ = local_288._4_8_ << 0x20;
                  local_288._8_8_ = 0;
                  ppuStack_278 = (undefined **)0x0;
                  FUN_1446ddda2(&local_298,"default",0);
                  lVar28 = FUN_144815d88(lVar23,&local_298);
                  if (local_288._8_8_ != 0) {
                    FUN_1400020a8();
                  }
                  if (lVar28 != 0) goto LAB_141329c24;
                }
                else {
LAB_141329c24:
                  auVar2 = *(undefined1 (*) [16])(lVar28 + 0x40);
                  auVar35 = divpd(auVar2,_DAT_1499387d0);
                  auVar36._8_8_ = 0;
                  auVar36._0_8_ = *(double *)(lVar28 + 0x50);
                  auVar36 = divpd(auVar36,_DAT_1499387d0);
                  auVar35 = roundpd(auVar35,auVar35,3);
                  auVar36 = roundpd(auVar36,auVar36,3);
                  dVar11 = (auVar2._0_8_ - auVar35._0_8_ * (double)DAT_1499387d0) *
                           0.008726646259971648;
                  dVar12 = (auVar2._8_8_ - auVar35._8_8_ * DAT_1499387d0._8_8_) *
                           0.008726646259971648;
                  dVar9 = (*(double *)(lVar28 + 0x50) - auVar36._0_8_ * (double)DAT_1499387d0) *
                          0.008726646259971648;
                  dVar10 = (0.0 - auVar36._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
                  dVar6 = sin(dVar11);
                  dVar7 = sin(dVar12);
                  dVar8 = sin(dVar9);
                  sin(dVar10);
                  dVar11 = cos(dVar11);
                  dVar12 = cos(dVar12);
                  dVar9 = cos(dVar9);
                  cos(dVar10);
                  dVar10 = dVar7 * dVar6 * dVar8 + dVar12 * dVar11 * dVar9;
                  local_298 = (code *)(dVar6 * dVar7 * dVar9 - dVar11 * dVar12 * dVar8);
                  plStack_290 = (longlong *)(-(dVar6 * dVar12 * dVar9) - dVar11 * dVar7 * dVar8);
                  local_288._8_4_ = SUB84(dVar10,0);
                  local_288._0_8_ = -(dVar12 * dVar6 * dVar8) + dVar7 * dVar11 * dVar9;
                  local_288._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
                  ppuStack_278 = *(undefined ***)(lVar28 + 0x28);
                  uStack_270 = *(undefined8 *)(lVar28 + 0x30);
                  local_268 = *(undefined8 *)(lVar28 + 0x38);
                  uStack_260 = 0;
                  local_258 = *(longlong *)(lVar28 + 0x58);
                  uStack_250 = *(undefined4 *)(lVar28 + 0x60);
                  uStack_24c = *(undefined4 *)(lVar28 + 100);
                  local_248 = *(longlong **)(lVar28 + 0x68);
                  uStack_240 = 0;
                  local_378 = (longlong *)((ulonglong)local_378 & 0xffffffffffffff00);
                  FUN_1413d4c10(*(undefined8 *)(lVar25 + 0xb0),&local_298,0,0);
                  FUN_1458f5d9e(*(undefined8 *)(lVar25 + 0xb0));
                  FUN_1405d0f74(*(undefined8 *)(lVar25 + 0xb0));
                  *(undefined8 *)(lVar25 + 0x148) = 0;
                  *(undefined8 *)(lVar25 + 0x150) = 0;
                  *(undefined8 *)(lVar25 + 0x138) = 0;
                  *(undefined8 *)(lVar25 + 0x140) = 0;
                  *(undefined8 *)(lVar25 + 0x128) = 0;
                  *(undefined8 *)(lVar25 + 0x130) = 0;
                  *(undefined8 *)(lVar25 + 0x158) = 0;
                  lVar21 = *(longlong *)(lVar25 + 0xb0);
                  if (DAT_14cac6e60 == (code *)0x0) {
                    local_340 = &local_2a0;
                    local_2a0 = FUN_144a7958c;
                    local_330 = FUN_14081d0ea;
                    local_338 = FUN_142b47bc4;
                    local_348 = &LAB_1478989f1;
                    local_350 = &LAB_146391124;
                    local_358 = L"Engine";
                    local_360 = 0x10000000000;
                    local_368 = 0x10000005;
                    local_370 = CONCAT44(local_370._4_4_,0x10);
                    local_378 = (longlong *)CONCAT44(local_378._4_4_,0x620);
                    FUN_14081cfa3(L"/Script/Engine",L"PrimitiveComponent",&DAT_14cac6e60,
                                  FUN_146391102);
                  }
                  pcVar15 = DAT_14cac6e60;
                  if ((DAT_14cac6e60 == (code *)0x0) || (DAT_14c950c29 == 0)) {
                    if (DAT_14cac6e60 != (code *)0x0) goto LAB_141329e1f;
                    if (DAT_14cad00c8 == (code *)0x0) goto LAB_14132aa4b;
                    pcVar29 = (code *)0x0;
LAB_141329f23:
                    if (pcVar29 != DAT_14cad00c8) goto LAB_141329e43;
                    local_2a8 = pcVar15;
                    if ((~DAT_14c950c29 & 1) == 0 && pcVar15 != (code *)0x0) {
                      FUN_1456cec3c(pcVar15);
                    }
                    FUN_141330084(lVar21,&local_2a8,lVar25);
                  }
                  else {
                    local_320 = lVar21;
                    FUN_1456cec3c(DAT_14cac6e60);
                    lVar21 = local_320;
LAB_141329e1f:
                    if (DAT_14cad00c8 == (code *)0x0) {
                      local_340 = &local_2a0;
                      local_2a0 = FUN_144a7958c;
                      local_330 = FUN_14081d0ea;
                      local_338 = FUN_14081d0ea;
                      local_348 = &LAB_1479b7a0c;
                      local_350 = &LAB_1463b464e;
                      local_358 = L"Engine";
                      local_360 = 0;
                      local_368 = 0x10000005;
                      local_370 = CONCAT44(local_370._4_4_,8);
                      local_378 = (longlong *)CONCAT44(local_378._4_4_,0x110);
                      local_320 = lVar21;
                      FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8,FUN_1463b462c
                                   );
                      lVar21 = local_320;
                      if (DAT_14cad00c8 == (code *)0x0) {
LAB_14132aa4b:
                        local_340 = &local_2a0;
                        local_2a0 = FUN_144a7958c;
                        local_330 = FUN_14081d0ea;
                        local_338 = FUN_14081d0ea;
                        local_348 = &LAB_1479b7a0c;
                        local_350 = &LAB_1463b464e;
                        local_358 = L"Engine";
                        local_360 = 0;
                        local_368 = 0x10000005;
                        local_370 = CONCAT44(local_370._4_4_,8);
                        local_378 = (longlong *)CONCAT44(local_378._4_4_,0x110);
                        local_320 = lVar21;
                        FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8,
                                      FUN_1463b462c);
                        pcVar29 = (code *)0x0;
                        lVar21 = local_320;
                        goto LAB_141329f23;
                      }
                    }
                    if (*(int *)(DAT_14cad00c8 + 0x38) <= *(int *)(pcVar15 + 0x38)) {
                      pcVar29 = (code *)0x0;
                      if (*(code **)(*(longlong *)(pcVar15 + 0x30) +
                                    (longlong)*(int *)(DAT_14cad00c8 + 0x38) * 8) ==
                          DAT_14cad00c8 + 0x30) {
                        pcVar29 = pcVar15;
                      }
                      goto LAB_141329f23;
                    }
LAB_141329e43:
                    local_2b0 = pcVar15;
                    if ((pcVar15 != (code *)0x0) && ((DAT_14c950c29 & 1) != 0)) {
                      FUN_1456cec3c(pcVar15);
                    }
                    FUN_14132fb54(lVar21,&local_2b0,lVar25);
                  }
                  FUN_1458f5ab4(lVar25,lVar28,*(undefined1 *)(lVar23 + 0x380));
                  if (*(char *)(lVar25 + 0x1c0) == '\x01') {
                    *(undefined1 *)(lVar25 + 0x1c0) = 0;
                  }
                  *(undefined8 *)(lVar25 + 0x118) = *(undefined8 *)(lVar28 + 0x80);
                  uVar5 = *(undefined8 *)(lVar28 + 0x78);
                  *(undefined8 *)(lVar25 + 0x108) = *(undefined8 *)(lVar28 + 0x70);
                  *(undefined8 *)(lVar25 + 0x110) = uVar5;
                  *(undefined4 *)(lVar25 + 0x120) = *(undefined4 *)(lVar28 + 0x88);
                }
                if (*(longlong *)(lVar25 + 200) == 0) {
                  FUN_1458f5b84(lVar25);
                }
                FUN_14132b1d2(lVar25);
                if (CONCAT44(uStack_11c,uStack_120) != 0) {
                  FUN_1400020a8();
                }
              }
              plVar22 = (longlong *)(lVar25 + 0xd0);
              if (plVar22 != param_3) {
                iVar34 = (int)param_3[1];
                _Src = (void *)*param_3;
                *(int *)(lVar25 + 0xd8) = iVar34;
                if (iVar34 == 0 && *(int *)(lVar25 + 0xdc) == 0) {
                  *(undefined4 *)(lVar25 + 0xdc) = 0;
                }
                else {
                  FUN_1446dd670(plVar22,iVar34);
                  if (iVar34 != 0) {
                    memcpy((void *)*plVar22,_Src,(longlong)iVar34 * 2);
                  }
                }
              }
              uVar17 = (**(code **)(*DAT_14cbe4750 + 0xb0))();
              *(undefined4 *)(lVar25 + 0x1d4) = uVar17;
              *(undefined2 *)(lVar25 + 0x1d8) = 1;
              bVar14 = true;
              plVar22 = local_2f0;
            }
          }
          if ((char)local_314 == '\0') {
            LOCK();
            plVar18 = plVar30 + 1;
            *(int *)plVar18 = (int)*plVar18 + -1;
            UNLOCK();
            if ((int)*plVar18 == 0) {
              (**(code **)*plVar30)(plVar30);
              LOCK();
              piVar1 = (int *)((longlong)plVar30 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar30 + 0x10))(plVar30);
              }
            }
          }
          FUN_140368b56(&local_218);
          if (!bVar14) goto LAB_14132ab74;
          lVar25 = *(longlong *)(param_1 + 0x140);
          plVar18 = local_300;
        }
        else {
          iVar34 = (int)param_3[1];
          if (iVar34 == *(int *)(lVar25 + 0xd8)) {
            if (1 < iVar34) {
              lVar28 = 0;
              while( true ) {
                uVar3 = *(ushort *)(*param_3 + lVar28);
                uVar4 = *(ushort *)(*(longlong *)(lVar25 + 0xd0) + lVar28);
                if (uVar3 != uVar4) break;
                if (uVar3 == 0) goto LAB_141329a00;
LAB_141328d9f:
                lVar28 = lVar28 + 2;
              }
              if ((uVar4 | uVar3) < 0x80) {
                if ((&DAT_149e05da0)[uVar3] == (&DAT_149e05da0)[(uint)uVar4]) goto LAB_141328d9f;
                iVar34 = (uint)(byte)(&DAT_149e05da0)[uVar3] -
                         (uint)(byte)(&DAT_149e05da0)[(uint)uVar4];
              }
              else {
                iVar34 = (uint)uVar3 - (uint)uVar4;
              }
              if (iVar34 != 0) goto LAB_141328de7;
            }
          }
          else if (*(int *)(lVar25 + 0xd8) + iVar34 != 1) goto LAB_141328de7;
        }
LAB_141329a00:
        lVar23 = FUN_14132b2ec(lVar25,plVar22,local_310);
        if ((lVar23 != 0) && (DAT_14c950c29 != 0)) {
          FUN_1456cec3c(lVar23);
        }
LAB_141329a20:
        *plVar18 = lVar23;
      }
      else {
        local_378 = param_3;
        local_300 = plVar18;
        cVar16 = FUN_14431e504(lVar25,param_3[3],param_3[4],param_3[5]);
        if (cVar16 != '\0') {
          lVar23 = FUN_14132b2ec(*(undefined8 *)(param_1 + 0x140),plVar22,local_310);
          plVar18 = local_300;
          if ((lVar23 != 0) && (DAT_14c950c29 != 0)) {
            FUN_1456cec3c(lVar23);
            plVar18 = local_300;
          }
          goto LAB_141329a20;
        }
LAB_14132ab74:
        lVar23 = *local_300;
        plVar18 = local_300;
      }
      if (lVar23 == 0) goto LAB_141329a29;
      lVar25 = *(longlong *)(param_1 + 0xe8);
      if (lVar25 != 0) {
        FUN_1446f470e(&local_2d8,L"Texture",1);
        FUN_14016d8b0(lVar25,local_2d8,local_310);
        lVar23 = *plVar18;
      }
      local_2e8 = 0;
      uStack_2e4 = 0;
      uStack_2e0 = 0;
      uStack_2dc = 0x3f800000;
      FUN_14132dc7c(*(undefined8 *)(*(longlong *)(param_1 + 0x140) + 0x30),lVar23);
      FUN_14132ebe8(*(undefined8 *)(*(longlong *)(param_1 + 0x140) + 0x30),*plVar18,
                    *(undefined8 *)(param_1 + 0xe8));
      lVar28 = *plVar18;
    }
LAB_141329b2d:
    *param_2 = lVar28;
    if ((lVar28 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
  }
  if ((local_d0 ^ (ulonglong)auStack_398) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14132acb8 FUN_14132acb8 body=94 status=ok
// SIG undefined FUN_14132acb8(void)

ulonglong FUN_14132acb8(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 unaff_RSI;
  ulonglong uVar3;
  
  uVar3 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (*(longlong *)(param_1 + 0xe8) == 0) {
    lVar1 = FUN_1402735c8();
    lVar1 = FUN_140a1de56(lVar1 + 0x6c8);
    if (lVar1 != 0) {
      uVar2 = FUN_14090ceee(lVar1,param_1,0);
      FUN_1458f5b12(param_1,uVar2);
      if (*(longlong *)(param_1 + 0xe8) != 0) goto LAB_14132accb;
    }
    uVar3 = 0;
  }
LAB_14132accb:
  return uVar3 & 0xffffffff;
}



// FUNCTION 14132ad16 FUN_14132ad16 body=427 status=ok
// SIG undefined FUN_14132ad16(void)

longlong FUN_14132ad16(longlong *param_1,uint param_2,undefined8 *param_3)

{
  longlong lVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char cVar9;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong *plVar13;
  undefined1 auStack_78 [40];
  int local_50 [2];
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar10 = FUN_14132aec2();
  if (iVar10 != -1) {
    if (*param_1 + (longlong)iVar10 * 0x48 != 0) {
      lVar1 = *param_1 + (longlong)iVar10 * 0x48;
      goto LAB_14132ae4f;
    }
  }
  FUN_14132afb2(param_1,local_50);
  *local_48 = 0;
  iVar10 = *(int *)(param_3 + 1);
  _Src = (void *)*param_3;
  *(int *)(local_48 + 1) = iVar10;
  if ((longlong)iVar10 == 0) {
    *(undefined4 *)((longlong)local_48 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(local_48,iVar10,0);
    memcpy((void *)*local_48,_Src,(longlong)iVar10 * 2);
  }
  *(undefined4 *)(local_48 + 6) = *(undefined4 *)(param_3 + 6);
  uVar2 = *(undefined4 *)(param_3 + 2);
  uVar3 = *(undefined4 *)((longlong)param_3 + 0x14);
  uVar4 = *(undefined4 *)(param_3 + 3);
  uVar5 = *(undefined4 *)((longlong)param_3 + 0x1c);
  uVar6 = *(undefined4 *)((longlong)param_3 + 0x24);
  uVar7 = *(undefined4 *)(param_3 + 5);
  uVar8 = *(undefined4 *)((longlong)param_3 + 0x2c);
  *(undefined4 *)(local_48 + 4) = *(undefined4 *)(param_3 + 4);
  *(undefined4 *)((longlong)local_48 + 0x24) = uVar6;
  *(undefined4 *)(local_48 + 5) = uVar7;
  *(undefined4 *)((longlong)local_48 + 0x2c) = uVar8;
  *(undefined4 *)(local_48 + 2) = uVar2;
  *(undefined4 *)((longlong)local_48 + 0x14) = uVar3;
  *(undefined4 *)(local_48 + 3) = uVar4;
  *(undefined4 *)((longlong)local_48 + 0x1c) = uVar5;
  local_48[7] = 0;
  *(undefined4 *)(local_48 + 8) = 0xffffffff;
  cVar9 = FUN_14132af2e(param_1,param_2,local_48);
  if (cVar9 == '\0') {
    uVar11 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
    iVar10 = 1;
    if (3 < uVar11) {
      uVar12 = (ulonglong)(uVar11 & 0xfffffffe) + 0xf;
      lVar1 = 0x3f;
      if (uVar12 != 0) {
        for (; uVar12 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      iVar10 = 1 << ((byte)lVar1 & 0x1f);
    }
    if (((int)uVar11 < 1) || (iVar10 <= (int)param_1[9])) {
      param_2 = (int)param_1[9] - 1U & param_2;
      *(uint *)((longlong)local_48 + 0x44) = param_2;
      plVar13 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar13 = param_1 + 7;
      }
      *(undefined4 *)(local_48 + 8) =
           *(undefined4 *)
            ((longlong)plVar13 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)param_2) * 4);
      plVar13 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar13 = param_1 + 7;
      }
      *(int *)((longlong)plVar13 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)param_2) * 4) =
           local_50[0];
    }
    else {
      *(int *)(param_1 + 9) = iVar10;
      FUN_140869a1c(param_1);
    }
  }
  lVar1 = *param_1 + (longlong)local_50[0] * 0x48;
LAB_14132ae4f:
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return lVar1 + 0x38;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14132aec2 FUN_14132aec2 body=107 status=ok
// SIG undefined FUN_14132aec2(void)

int FUN_14132aec2(longlong *param_1,uint param_2,undefined8 param_3)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  int iVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar4 != -1) {
      lVar1 = *param_1;
      do {
        cVar2 = FUN_140c3e654(lVar1 + (longlong)iVar4 * 0x48,param_3);
        if (cVar2 != '\0') {
          return iVar4;
        }
        iVar4 = *(int *)(lVar1 + 0x40 + (longlong)iVar4 * 0x48);
      } while (iVar4 != -1);
    }
  }
  return -1;
}



// FUNCTION 14132af2e FUN_14132af2e body=132 status=ok
// SIG undefined FUN_14132af2e(void)

undefined8 FUN_14132af2e(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  longlong *plVar1;
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
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  int iVar17;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar17 = FUN_14132aec2(), iVar17 != -1)) {
    plVar1 = (longlong *)(*param_1 + (longlong)iVar17 * 0x48);
    if (*plVar1 != 0) {
      FUN_1400020a8();
    }
    uVar2 = *param_3;
    uVar3 = param_3[1];
    uVar4 = param_3[2];
    uVar5 = param_3[3];
    uVar6 = param_3[4];
    uVar7 = param_3[5];
    uVar8 = param_3[6];
    uVar9 = param_3[7];
    uVar10 = param_3[8];
    uVar11 = param_3[9];
    uVar12 = param_3[10];
    uVar13 = param_3[0xb];
    uVar14 = param_3[0xd];
    uVar15 = param_3[0xe];
    uVar16 = param_3[0xf];
    *(undefined4 *)(plVar1 + 6) = param_3[0xc];
    *(undefined4 *)((longlong)plVar1 + 0x34) = uVar14;
    *(undefined4 *)(plVar1 + 7) = uVar15;
    *(undefined4 *)((longlong)plVar1 + 0x3c) = uVar16;
    *(undefined4 *)(plVar1 + 4) = uVar10;
    *(undefined4 *)((longlong)plVar1 + 0x24) = uVar11;
    *(undefined4 *)(plVar1 + 5) = uVar12;
    *(undefined4 *)((longlong)plVar1 + 0x2c) = uVar13;
    *(undefined4 *)(plVar1 + 2) = uVar6;
    *(undefined4 *)((longlong)plVar1 + 0x14) = uVar7;
    *(undefined4 *)(plVar1 + 3) = uVar8;
    *(undefined4 *)((longlong)plVar1 + 0x1c) = uVar9;
    *(undefined4 *)plVar1 = uVar2;
    *(undefined4 *)((longlong)plVar1 + 4) = uVar3;
    *(undefined4 *)(plVar1 + 1) = uVar4;
    *(undefined4 *)((longlong)plVar1 + 0xc) = uVar5;
    FUN_140ef4c0e(param_1,*param_4);
    *param_4 = iVar17;
    return 1;
  }
  return 0;
}



// FUNCTION 14132afb2 FUN_14132afb2 body=232 status=ok
// SIG undefined FUN_14132afb2(void)

int * FUN_14132afb2(longlong *param_1,int *param_2)

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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x48);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x48) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x48 + *param_1;
  return param_2;
}



// FUNCTION 14132b09a FUN_14132b09a body=310 status=ok
// SIG undefined FUN_14132b09a(void)

longlong * FUN_14132b09a(longlong *param_1,longlong param_2)

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
  uVar4 = DAT_14cb81090;
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



// FUNCTION 14132b1d2 FUN_14132b1d2 body=281 status=ok
// SIG undefined FUN_14132b1d2(void)

void FUN_14132b1d2(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined1 local_50;
  undefined8 *local_48;
  undefined8 uStack_40;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (DAT_14cbe4778 == '\x01') {
    lVar4 = FUN_1402735c8();
    lVar4 = FUN_145d6cde6(lVar4 + 0x6f0);
    if (lVar4 != 0) {
      lVar1 = *(longlong *)(param_1 + 200);
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(lVar4);
      }
      *(longlong *)(lVar1 + 0x2b8) = lVar4;
      local_48 = (undefined8 *)0x0;
      uVar2 = *(undefined8 *)(param_1 + 200);
      uStack_40 = 1;
      FUN_145bdf7fc(&local_48,0);
      *local_48 = uVar2;
      plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x30) + 0x218);
      local_50 = 0;
      local_58 = 0;
      (**(code **)(*plVar3 + 0x168))(plVar3,&local_48,0,0);
      lVar4 = *(longlong *)(param_1 + 200);
      if ((*(byte *)(lVar4 + 0x1f8) & 0x20) != 0) {
        local_30 = lVar4;
        FUN_145bdf792(&DAT_14cad20f8);
        *(undefined1 *)(lVar4 + 0x300) = 1;
      }
      DAT_14cbe4778 = '\0';
      if (local_48 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14132b2ec FUN_14132b2ec body=6083 status=ok
// SIG undefined FUN_14132b2ec(void)

longlong * FUN_14132b2ec(longlong *param_1,longlong *param_2,longlong param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  char cVar9;
  byte bVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong lVar13;
  int iVar14;
  int iVar15;
  undefined8 *puVar16;
  uint uVar17;
  longlong *unaff_RBP;
  undefined8 uVar18;
  longlong lVar19;
  longlong lVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  double dVar24;
  undefined1 auStack_428 [32];
  ulonglong local_408;
  ulonglong local_400;
  undefined4 local_3f8;
  undefined8 local_3f0;
  wchar_t *local_3e8;
  undefined1 *local_3e0;
  undefined1 *local_3d8;
  code **local_3d0;
  code *local_3c8;
  code *local_3c0;
  uint local_3ac;
  longlong local_3a8;
  longlong *local_3a0;
  undefined1 local_398 [16];
  undefined8 local_388;
  undefined8 local_380;
  longlong local_378 [16];
  double local_2f8;
  double dStack_2f0;
  double dStack_2e8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined8 local_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 local_2a0;
  undefined4 local_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  longlong local_288;
  undefined8 local_280;
  double local_278;
  double dStack_270;
  double dStack_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 local_220;
  double local_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  code *local_1f8;
  double dStack_1f0;
  double local_1e8;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  code *local_178;
  double dStack_170;
  double local_168;
  undefined8 uStack_160;
  double local_158;
  double dStack_150;
  double local_148;
  undefined8 local_140;
  double local_138;
  double dStack_130;
  double local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_428;
  if ((char)param_1[0x3b] == '\x01') {
    local_3ac = (uint)CONCAT71((int7)(local_f0 >> 8),*(undefined1 *)((longlong)param_1 + 0x1d9));
  }
  else {
    local_3ac = 0;
  }
  plVar12 = (longlong *)param_1[0x15];
  if (plVar12 == (longlong *)0x0) {
    lVar11 = FUN_14665a79c();
    if ((lVar11 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    param_1[0x15] = lVar11;
    *(undefined4 *)(lVar11 + 0x38c) = 0x42340000;
    *(undefined1 *)(param_1[0x15] + 0x388) = 0;
    *(byte *)(param_1[0x15] + 0x2aa) = *(byte *)(param_1[0x15] + 0x2aa) & 0xfe;
    *(byte *)(param_1[0x15] + 0x2aa) = *(byte *)(param_1[0x15] + 0x2aa) & 0xfd;
    *(undefined1 *)(param_1[0x15] + 0x2a9) = 10;
    *(undefined1 *)(param_1[0x15] + 0x2a8) = 1;
    *(undefined1 *)(param_1[0x15] + 0xd78) = 0;
    *(undefined1 *)(param_1[0x15] + 0x2ab) = 0;
    *(byte *)(param_1[0x15] + 0x3dd) = *(byte *)(param_1[0x15] + 0x3dd) | 0x40;
    *(undefined1 *)(param_1[0x15] + 0x7e0) = 0;
    *(uint *)(param_1[0x15] + 0x3e0) = *(uint *)(param_1[0x15] + 0x3e0) | 0x1000;
    *(undefined1 *)(param_1[0x15] + 0x794) = 0;
    lVar11 = param_1[0x15];
    FUN_140056680(&local_178,L"NaniteMeshes");
    FUN_140de354c(lVar11,&local_178,0);
    if (local_178 != (code *)0x0) {
      FUN_1400020a8();
    }
    lVar11 = param_1[0x15];
    FUN_140056680(&local_178,L"EdgeDetection");
    FUN_140de354c(lVar11,&local_178,0);
    if (local_178 != (code *)0x0) {
      FUN_1400020a8();
    }
    lVar11 = param_1[0x15];
    FUN_140056680(&local_178,L"DynamicShadows");
    FUN_140de354c(lVar11,&local_178,0);
    if (local_178 != (code *)0x0) {
      FUN_1400020a8();
    }
    lVar11 = param_1[0x15];
    FUN_140056680(&local_178,&DAT_149e3abf2);
    FUN_140de354c(lVar11,&local_178,0);
    if (local_178 != (code *)0x0) {
      FUN_1400020a8();
    }
    lVar11 = param_1[0x15];
    FUN_140056680(&local_178,L"Decals");
    FUN_140de354c(lVar11,&local_178,0);
    if (local_178 != (code *)0x0) {
      FUN_1400020a8();
    }
    lVar11 = param_1[0x15];
    FUN_140056680(&local_178,L"VolumetricFog");
    FUN_140de354c(lVar11,&local_178,0);
    if (local_178 != (code *)0x0) {
      FUN_1400020a8();
    }
    lVar11 = param_1[0x15];
    FUN_140056680(&local_178,L"EyeAdaptation");
    FUN_140de354c(lVar11,&local_178,0);
    if (local_178 != (code *)0x0) {
      FUN_1400020a8();
    }
    lVar11 = param_1[0x15];
    FUN_140056680(&local_178,L"PostProcessing");
    FUN_140de354c(lVar11,&local_178,1);
    if (local_178 != (code *)0x0) {
      FUN_1400020a8();
    }
    lVar11 = param_1[0x15];
    FUN_140056680(&local_178,&DAT_14a1f75d8);
    FUN_140de354c(lVar11,&local_178,0);
    if (local_178 != (code *)0x0) {
      FUN_1400020a8();
    }
    lVar11 = param_1[0x15];
    FUN_140056680(&local_178,L"ScreenSpaceAO");
    FUN_140de354c(lVar11,&local_178,1);
    if (local_178 != (code *)0x0) {
      FUN_1400020a8();
    }
    lVar11 = param_1[0x15];
    FUN_140056680(&local_178,L"AmbientOcclusion");
    FUN_140de354c(lVar11,&local_178,1);
    if (local_178 != (code *)0x0) {
      FUN_1400020a8();
    }
    lVar11 = param_1[0x15];
    FUN_140056680(&local_178,L"AntiAliasing");
    FUN_140de354c(lVar11,&local_178,1);
    if (local_178 != (code *)0x0) {
      FUN_1400020a8();
    }
    lVar11 = param_1[0x15];
    FUN_140056680(&local_178,L"TemporalAA");
    FUN_140de354c(lVar11,&local_178,0);
    if (local_178 != (code *)0x0) {
      FUN_1400020a8();
    }
    lVar11 = param_1[0x15];
    FUN_140056680(&local_178,L"LightShafts");
    FUN_140de354c(lVar11,&local_178,0);
    if (local_178 != (code *)0x0) {
      FUN_1400020a8();
    }
    lVar11 = param_1[0x15];
    FUN_140056680(&local_178,L"Bloom");
    FUN_140de354c(lVar11,&local_178,0);
    if (local_178 != (code *)0x0) {
      FUN_1400020a8();
    }
    lVar11 = param_1[0x15];
    FUN_140056680(&local_178,L"DepthOfField");
    FUN_140de354c(lVar11,&local_178,0);
    if (local_178 != (code *)0x0) {
      FUN_1400020a8();
    }
    lVar11 = param_1[0x15];
    FUN_140056680(&local_178,L"ScreenSpaceReflections");
    FUN_140de354c(lVar11,&local_178,0);
    if (local_178 != (code *)0x0) {
      FUN_1400020a8();
    }
    (**(code **)(*param_1 + 0x20))(param_1,param_1[0x15],&DAT_14c846480,0);
    plVar12 = (longlong *)param_1[0x15];
  }
  local_3a0 = param_2;
  if ((char)param_1[0x38] == '\0') {
    lVar11 = *param_2;
    iVar14 = *(int *)((longlong)param_2 + 4);
    fVar23 = *(float *)((longlong)plVar12 + 0x38c);
    local_398 = ZEXT416(*(uint *)(param_1 + 0x24));
    local_3a8 = param_3;
    fVar21 = tanf((fVar23 * 3.1415927) / 360.0);
    fVar21 = atanf(fVar21 / ((float)(int)lVar11 / (float)iVar14));
    dVar5 = (double)param_1[0x21];
    dVar24 = (double)param_1[0x22];
    dVar1 = (double)param_1[0x23];
    dVar2 = sin(dVar5 * 0.01745329238474369);
    dVar3 = sin(dVar24 * 0.01745329238474369);
    dVar4 = sin(dVar1 * 0.01745329238474369);
    sin(0.0);
    dVar5 = cos(dVar5 * 0.01745329238474369);
    dVar24 = cos(dVar24 * 0.01745329238474369);
    dVar1 = cos(dVar1 * 0.01745329238474369);
    cos(0.0);
    local_178 = (code *)(dVar5 * dVar24);
    dStack_170 = dVar3 * dVar5;
    uStack_160 = 0;
    local_158 = dVar2 * dVar4 * dVar24 - dVar3 * dVar1;
    dStack_150 = dVar2 * dVar4 * dVar3 + dVar24 * dVar1;
    local_148 = -dVar4 * dVar5;
    local_140 = 0;
    dVar6 = dVar2 * dVar1 * dVar24 + dVar3 * dVar4;
    local_138 = -dVar6;
    dStack_130 = dVar24 * dVar4 - dVar3 * dVar2 * dVar1;
    local_128 = dVar5 * dVar1;
    local_120 = 0;
    local_118 = DAT_14c8464e0;
    local_110 = DAT_14c8464e8;
    uStack_108 = DAT_14c8464f0;
    local_100 = 0x3ff0000000000000;
    dVar24 = (double)param_1[0x28];
    dVar1 = (double)param_1[0x2a];
    dVar3 = (double)param_1[0x29];
    dVar7 = ABS(dVar1 * dVar2) + ABS(dStack_170 * dVar3) + ABS(dVar24 * (double)local_178);
    dVar8 = ABS(dVar1 * local_148) +
            ABS(dStack_150 * (double)param_1[0x29]) + ABS(dVar24 * local_158);
    dVar3 = dVar3 * dStack_130;
    dVar24 = local_138 * dVar24;
    dVar1 = dVar1 * local_128;
    dVar4 = dVar2 * dVar2 + dStack_170 * dStack_170 + (double)local_178 * (double)local_178;
    dVar5 = local_148 * local_148 + dStack_150 * dStack_150 + local_158 * local_158;
    dVar6 = local_128 * local_128 + dVar6 * dVar6 + dStack_130 * dStack_130;
    if (dVar4 <= dVar5) {
      dVar4 = dVar5;
    }
    if (dVar4 <= dVar6) {
      dVar4 = dVar6;
    }
    local_168 = dVar2;
    if (dVar4 < 0.0) {
      sqrt(dVar4);
    }
    if (dVar8 <= dVar7) {
      dVar8 = dVar7;
    }
    fVar22 = tanf(fVar23 * 0.017453292 * 0.5);
    fVar23 = tanf(fVar21 * 114.59155 * 0.017453292 * 0.5);
    fVar21 = (float)((ABS(dVar1) + ABS(dVar24) + ABS(dVar3)) / (double)fVar23);
    fVar23 = (float)(dVar8 / (double)fVar22);
    if ((float)(dVar8 / (double)fVar22) <= fVar21) {
      fVar23 = fVar21;
    }
    local_218 = (double)-((float)local_398._0_4_ + fVar23);
    local_278 = 1.0;
    dStack_270 = 0.0;
    dStack_268 = 0.0;
    local_260 = 0;
    uStack_258 = 0;
    local_250 = 0x3ff0000000000000;
    local_248 = 0;
    uStack_240 = 0;
    local_238 = 0;
    uStack_230 = 0;
    local_228 = 0x3ff0000000000000;
    local_220 = 0;
    local_210 = 0;
    uStack_208 = 0;
    local_200 = 0x3ff0000000000000;
    FUN_1447fea8d(&local_1f8,&local_278,&local_178);
    local_288 = param_1[0x27];
    local_298 = (undefined4)param_1[0x25];
    uStack_294 = *(undefined4 *)((longlong)param_1 + 300);
    uStack_290 = (undefined4)param_1[0x26];
    uStack_28c = *(undefined4 *)((longlong)param_1 + 0x134);
    local_2f8 = 1.0;
    dStack_2f0 = 0.0;
    dStack_2e8 = 0.0;
    local_2e0 = 0;
    uStack_2d8 = 0;
    local_2d0 = 0x3ff0000000000000;
    local_2c8 = 0;
    uStack_2c0 = 0;
    local_2b8 = 0;
    uStack_2b0 = 0;
    local_2a8 = 0x3ff0000000000000;
    local_2a0 = 0;
    local_280 = 0x3ff0000000000000;
    unaff_RBP = local_378;
    FUN_1447fea8d(unaff_RBP,&local_1f8,&local_2f8);
    plVar12 = (longlong *)param_1[0x15];
    FUN_1448ac920(&local_178,unaff_RBP);
    local_1f8 = local_178;
    dStack_1f0 = dStack_170;
    local_1e8 = local_168;
    uStack_1e0 = (undefined4)uStack_160;
    uStack_1dc = uStack_160._4_4_;
    local_278 = local_158;
    dStack_270 = dStack_150;
    dStack_268 = local_148;
    local_408 = 0;
    local_400 = local_400 & 0xffffffffffffff00;
    FUN_144927ad4(plVar12,&local_278,&local_1f8,0);
    local_2f8 = local_138;
    dStack_2f0 = dStack_130;
    dStack_2e8 = local_128;
    if (*(code **)(*plVar12 + 0x478) == FUN_14028a216) {
      FUN_14028a216(plVar12);
      param_3 = local_3a8;
    }
    else {
      (**(code **)(*plVar12 + 0x478))(plVar12,&local_2f8);
      param_3 = local_3a8;
    }
  }
  else {
    local_178 = (code *)param_1[0x2c];
    dStack_170 = (double)param_1[0x2d];
    local_168 = (double)param_1[0x2e];
    uStack_160 = param_1[0x2f];
    local_1f8 = (code *)param_1[0x30];
    dStack_1f0 = (double)param_1[0x31];
    local_1e8 = (double)param_1[0x32];
    local_400 = local_400 & 0xffffffffffffff00;
    local_408 = 0;
    FUN_144927ad4(plVar12,&local_1f8,&local_178,0);
    local_178 = (code *)param_1[0x34];
    dStack_170 = (double)param_1[0x35];
    local_168 = (double)param_1[0x36];
    if (*(code **)(*plVar12 + 0x478) == FUN_14028a216) {
      FUN_14028a216(plVar12);
    }
    else {
      (**(code **)(*plVar12 + 0x478))(plVar12,&local_178);
    }
    *(int *)(param_1[0x15] + 0x38c) = (int)param_1[0x3a];
  }
  lVar11 = param_1[0x15];
  if ((param_3 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_3);
  }
  *(longlong *)(lVar11 + 0x3a8) = param_3;
  FUN_14083337a(param_1[6]);
  lVar11 = FUN_1400bd118(param_1[6]);
  if (lVar11 != 0) {
    FUN_14183bc2e(lVar11,0);
  }
  if (param_1[0x16] == 0) {
    if (*(int *)((longlong)param_1 + 0xe4) != 0) {
      uVar17 = *(uint *)(param_1 + 0x1c);
      plVar12 = (longlong *)0x0;
      if (((int)uVar17 < 0) || (DAT_14c9647dc <= (int)uVar17)) goto LAB_14132bd74;
      puVar16 = (undefined8 *)
                ((ulonglong)((uVar17 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar17 >> 0x10) * 8));
      if ((puVar16 != (undefined8 *)0x0) &&
         ((*(int *)(puVar16 + 2) == *(int *)((longlong)param_1 + 0xe4) &&
          ((*(uint *)(puVar16 + 1) & 0x10200000) == 0)))) {
        if ((*(uint *)(puVar16 + 1) & 0x10200000) == 0) {
          plVar12 = (longlong *)*puVar16;
        }
        else {
          plVar12 = (longlong *)0x0;
        }
        cVar9 = (**(code **)(*plVar12 + 0x660))();
        if (cVar9 != '\0') goto LAB_14132bbfb;
      }
    }
  }
  else {
    plVar12 = *(longlong **)(param_1[0x16] + 0x1c8);
    if (plVar12 != (longlong *)0x0) {
      if (DAT_14cac6e60 == 0) {
        local_3d0 = &local_178;
        local_178 = FUN_144a7958c;
        local_3c0 = FUN_14081d0ea;
        local_3c8 = FUN_142b47bc4;
        local_3d8 = &LAB_1478989f1;
        local_3e0 = &LAB_146391124;
        local_3e8 = L"Engine";
        local_3f0 = 0x10000000000;
        local_3f8 = 0x10000005;
        local_400 = CONCAT44(local_400._4_4_,0x10);
        local_408 = CONCAT44(local_408._4_4_,0x620);
        FUN_14081cfa3(L"/Script/Engine",L"PrimitiveComponent",&DAT_14cac6e60,FUN_146391102);
      }
      if (((*(int *)(DAT_14cac6e60 + 0x38) <= *(int *)(plVar12[2] + 0x38)) &&
          (*(longlong *)
            (*(longlong *)(plVar12[2] + 0x30) + (longlong)*(int *)(DAT_14cac6e60 + 0x38) * 8) ==
           DAT_14cac6e60 + 0x30)) &&
         ((cVar9 = (**(code **)(*plVar12 + 0x4e8))(plVar12), cVar9 == '\0' || (plVar12[0xb5] != 0)))
         ) {
        lVar11 = plVar12[0x28];
        if ((longlong)(int)lVar11 != 0) {
          lVar19 = plVar12[0x27];
          plVar12 = (longlong *)0x0;
          lVar20 = 0;
          do {
            unaff_RBP = *(longlong **)(lVar19 + lVar20);
            if ((DAT_14c950c29 == '\x01') && (unaff_RBP != (longlong *)0x0)) {
              FUN_1456cec3c(unaff_RBP);
LAB_14132ba6e:
              if (DAT_14cac6e60 == 0) {
                local_178 = FUN_144a7958c;
                local_3c0 = FUN_14081d0ea;
                local_3c8 = FUN_142b47bc4;
                local_3d0 = &local_178;
                local_3d8 = &LAB_1478989f1;
                local_3e0 = &LAB_146391124;
                local_3e8 = L"Engine";
                local_3f0 = 0x10000000000;
                local_3f8 = 0x10000005;
                local_400 = CONCAT44(local_400._4_4_,0x10);
                local_408 = CONCAT44(local_408._4_4_,0x620);
                FUN_14081cfa3(L"/Script/Engine",L"PrimitiveComponent",&DAT_14cac6e60,FUN_146391102);
              }
              if ((((DAT_14cac6e60 != 0) && (lVar13 = unaff_RBP[2], lVar13 != 0)) &&
                  (*(int *)(DAT_14cac6e60 + 0x38) <= *(int *)(lVar13 + 0x38))) &&
                 (((*(longlong *)
                     (*(longlong *)(lVar13 + 0x30) + (longlong)*(int *)(DAT_14cac6e60 + 0x38) * 8)
                    == DAT_14cac6e60 + 0x30 &&
                   (cVar9 = (**(code **)(*unaff_RBP + 0x4e8))(unaff_RBP), cVar9 != '\0')) &&
                  (unaff_RBP[0xb5] == 0)))) goto LAB_14132bd74;
            }
            else if (unaff_RBP != (longlong *)0x0) goto LAB_14132ba6e;
            lVar20 = lVar20 + 8;
          } while ((longlong)(int)lVar11 * 8 != lVar20);
        }
LAB_14132bbfb:
        if ((param_1[0x16] == 0) || (lVar11 = *(longlong *)(param_1[0x16] + 0x1c8), lVar11 == 0)) {
LAB_14132c6e8:
          uVar17 = 0;
        }
        else {
          if (DAT_14cac6e60 == 0) {
            local_3d0 = &local_178;
            local_178 = FUN_144a7958c;
            local_3c0 = FUN_14081d0ea;
            local_3c8 = FUN_142b47bc4;
            local_3d8 = &LAB_1478989f1;
            local_3e0 = &LAB_146391124;
            local_3e8 = L"Engine";
            local_3f0 = 0x10000000000;
            local_3f8 = 0x10000005;
            local_400 = CONCAT44(local_400._4_4_,0x10);
            local_408 = CONCAT44(local_408._4_4_,0x620);
            FUN_14081cfa3(L"/Script/Engine",L"PrimitiveComponent",&DAT_14cac6e60,FUN_146391102);
          }
          lVar19 = *(longlong *)(lVar11 + 0x10);
          iVar14 = *(int *)(lVar19 + 0x38);
          if ((iVar14 < *(int *)(DAT_14cac6e60 + 0x38)) ||
             (*(longlong *)
               (*(longlong *)(lVar19 + 0x30) + (longlong)*(int *)(DAT_14cac6e60 + 0x38) * 8) !=
              DAT_14cac6e60 + 0x30)) goto LAB_14132c6e8;
          if (DAT_14cad3688 == 0) {
            local_3d0 = &local_178;
            local_178 = FUN_144b223ce;
            local_3c0 = FUN_14081d0ea;
            local_3c8 = (code *)&LAB_1417963e0;
            local_3d8 = &LAB_147a2f4c9;
            local_3e0 = &LAB_1400ea6f8;
            local_3e8 = L"Engine";
            local_3f0 = 0x200000000000;
            local_3f8 = 0x10000004;
            local_400 = CONCAT44(local_400._4_4_,0x10);
            local_408 = CONCAT44(local_408._4_4_,0x720);
            FUN_14081cfa3(L"/Script/Engine",L"StaticMeshComponent",&DAT_14cad3688,FUN_1463bfdc8);
            lVar19 = *(longlong *)(lVar11 + 0x10);
            iVar14 = *(int *)(lVar19 + 0x38);
          }
          if ((iVar14 < *(int *)(DAT_14cad3688 + 0x38)) ||
             (*(longlong *)
               (*(longlong *)(lVar19 + 0x30) + (longlong)*(int *)(DAT_14cad3688 + 0x38) * 8) !=
              DAT_14cad3688 + 0x30)) {
            uVar18 = 0;
          }
          else {
            uVar18 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),*(byte *)(lVar11 + 0x66c) >> 3);
          }
          uVar17 = (uint)uVar18;
          iVar14 = *(int *)(lVar11 + 0x140);
          if ((longlong)iVar14 != 0) {
            lVar11 = *(longlong *)(lVar11 + 0x138);
            lVar19 = 0;
            do {
              lVar20 = *(longlong *)(lVar11 + lVar19);
              if ((DAT_14c950c29 == '\x01') && (lVar20 != 0)) {
                FUN_1456cec3c(lVar20);
LAB_14132c732:
                if (DAT_14cac6e60 == 0) {
                  local_178 = FUN_144a7958c;
                  local_3c0 = FUN_14081d0ea;
                  local_3c8 = FUN_142b47bc4;
                  local_3d0 = &local_178;
                  local_3d8 = &LAB_1478989f1;
                  local_3e0 = &LAB_146391124;
                  local_3e8 = L"Engine";
                  local_3f0 = 0x10000000000;
                  local_3f8 = 0x10000005;
                  local_400 = CONCAT44(local_400._4_4_,0x10);
                  local_408 = CONCAT44(local_408._4_4_,0x620);
                  FUN_14081cfa3(L"/Script/Engine",L"PrimitiveComponent",&DAT_14cac6e60,FUN_146391102
                               );
                }
                if ((DAT_14cac6e60 != 0) && (lVar13 = *(longlong *)(lVar20 + 0x10), lVar13 != 0)) {
                  iVar15 = *(int *)(lVar13 + 0x38);
                  if ((*(int *)(DAT_14cac6e60 + 0x38) <= iVar15) &&
                     (*(longlong *)
                       (*(longlong *)(lVar13 + 0x30) + (longlong)*(int *)(DAT_14cac6e60 + 0x38) * 8)
                      == DAT_14cac6e60 + 0x30)) {
                    if (DAT_14cad3688 == 0) {
                      local_178 = FUN_144b223ce;
                      local_3c0 = FUN_14081d0ea;
                      local_3c8 = (code *)&LAB_1417963e0;
                      local_3d0 = &local_178;
                      local_3d8 = &LAB_147a2f4c9;
                      local_3e0 = &LAB_1400ea6f8;
                      local_3e8 = L"Engine";
                      local_3f0 = 0x200000000000;
                      local_3f8 = 0x10000004;
                      local_400 = CONCAT44(local_400._4_4_,0x10);
                      local_408 = CONCAT44(local_408._4_4_,0x720);
                      FUN_14081cfa3(L"/Script/Engine",L"StaticMeshComponent",&DAT_14cad3688,
                                    FUN_1463bfdc8);
                      lVar13 = *(longlong *)(lVar20 + 0x10);
                      iVar15 = *(int *)(lVar13 + 0x38);
                    }
                    if ((*(int *)(DAT_14cad3688 + 0x38) <= iVar15) &&
                       (*(longlong *)
                         (*(longlong *)(lVar13 + 0x30) +
                         (longlong)*(int *)(DAT_14cad3688 + 0x38) * 8) == DAT_14cad3688 + 0x30)) {
                      uVar18 = CONCAT71((int7)((ulonglong)uVar18 >> 8),
                                        (byte)uVar18 | *(byte *)(lVar20 + 0x66c) >> 3);
                    }
                  }
                }
              }
              else if (lVar20 != 0) goto LAB_14132c732;
              uVar17 = (uint)uVar18;
              lVar19 = lVar19 + 8;
            } while ((longlong)iVar14 * 8 != lVar19);
          }
        }
        lVar11 = param_1[0x15];
        FUN_140056680(&local_178,L"NaniteMeshes");
        FUN_140de354c(lVar11,&local_178,uVar17 & 0xffffff01);
        if (local_178 != (code *)0x0) {
          FUN_1400020a8();
        }
        (**(code **)(**(longlong **)(param_1[6] + 0x218) + 0x1c8))
                  (*(longlong **)(param_1[6] + 0x218),param_1[0x15]);
        if (param_1[0x16] == 0) {
          if ((((*(int *)((longlong)param_1 + 0xe4) != 0) &&
               (uVar17 = *(uint *)(param_1 + 0x1c), -1 < (int)uVar17)) &&
              ((int)uVar17 < DAT_14c9647dc)) &&
             (((puVar16 = (undefined8 *)
                          ((ulonglong)((uVar17 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar17 >> 0x10) * 8)),
               puVar16 != (undefined8 *)0x0 &&
               (*(int *)(puVar16 + 2) == *(int *)((longlong)param_1 + 0xe4))) &&
              ((*(uint *)(puVar16 + 1) & 0x10200000) == 0)))) {
            if ((*(uint *)(puVar16 + 1) & 0x10200000) == 0) {
              plVar12 = (longlong *)*puVar16;
            }
            else {
              plVar12 = (longlong *)0x0;
            }
            bVar10 = (**(code **)(*plVar12 + 0x668))();
LAB_14132bd49:
            if (((bVar10 | (byte)local_3ac) & 1) == 0) goto LAB_14132bd72;
          }
        }
        else {
          plVar12 = *(longlong **)(param_1[0x16] + 0x1c8);
          if (plVar12 != (longlong *)0x0) {
            if (DAT_14cac6e60 == 0) {
              local_178 = FUN_144a7958c;
              local_3c0 = FUN_14081d0ea;
              local_3c8 = FUN_142b47bc4;
              local_3d8 = &LAB_1478989f1;
              local_3e0 = &LAB_146391124;
              local_3e8 = L"Engine";
              local_3f0 = 0x10000000000;
              local_3f8 = 0x10000005;
              local_400 = CONCAT44(local_400._4_4_,0x10);
              local_408 = CONCAT44(local_408._4_4_,0x620);
              local_3d0 = &local_178;
              FUN_14081cfa3(L"/Script/Engine",L"PrimitiveComponent",&DAT_14cac6e60,FUN_146391102);
            }
            if ((*(int *)(DAT_14cac6e60 + 0x38) <= *(int *)(plVar12[2] + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(plVar12[2] + 0x30) + (longlong)*(int *)(DAT_14cac6e60 + 0x38) * 8)
                == DAT_14cac6e60 + 0x30)) {
              cVar9 = (**(code **)(*plVar12 + 0x4e8))(plVar12);
              if (cVar9 != '\0') {
                bVar10 = FUN_14431ecbe(plVar12);
                goto LAB_14132bd49;
              }
              lVar11 = plVar12[0x28];
              if ((longlong)(int)lVar11 != 0) {
                lVar19 = plVar12[0x27];
                lVar20 = 0;
                do {
                  lVar13 = *(longlong *)(lVar19 + lVar20);
                  if (lVar13 != 0) {
                    if (DAT_14cac6e60 == 0) {
                      local_178 = FUN_144a7958c;
                      local_3c0 = FUN_14081d0ea;
                      local_3c8 = FUN_142b47bc4;
                      local_3d8 = &LAB_1478989f1;
                      local_3e0 = &LAB_146391124;
                      local_3e8 = L"Engine";
                      local_3f0 = 0x10000000000;
                      local_3f8 = 0x10000005;
                      local_400 = CONCAT44(local_400._4_4_,0x10);
                      local_408 = CONCAT44(local_408._4_4_,0x620);
                      local_3d0 = &local_178;
                      FUN_14081cfa3(L"/Script/Engine",L"PrimitiveComponent",&DAT_14cac6e60,
                                    FUN_146391102);
                    }
                    if (((*(int *)(DAT_14cac6e60 + 0x38) <=
                          *(int *)(*(longlong *)(lVar13 + 0x10) + 0x38)) &&
                        (*(longlong *)
                          (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x30) +
                          (longlong)*(int *)(DAT_14cac6e60 + 0x38) * 8) == DAT_14cac6e60 + 0x30)) &&
                       (cVar9 = FUN_14431ecbe(lVar13), cVar9 == '\0')) {
                      bVar10 = 0;
                      goto LAB_14132bd49;
                    }
                  }
                  lVar20 = lVar20 + 8;
                } while ((longlong)(int)lVar11 * 8 != lVar20);
              }
            }
          }
        }
        iVar14 = *(int *)((longlong)param_1 + 0x1d4);
        *(int *)((longlong)param_1 + 0x1d4) = iVar14 + -1;
        if (iVar14 < 2 || (local_3ac & 1) != 0) {
          FUN_1446f470e(&local_388,L"OakInventoryThumbnail",1);
          if (DAT_14cb0b9a0 == 0) {
            local_178 = FUN_1449e2820;
            local_3c0 = FUN_14081d0ea;
            local_3c8 = (code *)&LAB_146408884;
            local_3d8 = &LAB_147d719e1;
            local_3e0 = &LAB_140fb41fe;
            local_3e8 = L"Engine";
            local_3f0 = 0;
            local_3f8 = 0x10000000;
            local_400 = CONCAT44(local_400._4_4_,8);
            local_408 = CONCAT44(local_408._4_4_,0x168);
            local_3d0 = &local_178;
            FUN_14081cfa3(L"/Script/Engine",L"TextureRenderTarget2D",&DAT_14cb0b9a0,&DAT_147d719e0);
          }
          local_408 = local_408 & 0xffffffff00000000;
          FUN_140af9fb2(&local_380,param_1[0x15],DAT_14cb0b9a0,local_388);
          local_400 = 0;
          local_408 = local_408 & 0xffffffffffffff00;
          plVar12 = (longlong *)FUN_1458f5bea(param_1[0x15],local_380,0,0);
          *(byte *)((longlong)plVar12 + 0x13c) = *(byte *)((longlong)plVar12 + 0x13c) & 0xfe;
          plVar12[0x29] = 0;
          plVar12[0x2a] = 0;
          *(undefined1 *)(plVar12 + 0x2c) = 2;
          plVar12[0x28] = *local_3a0;
          (**(code **)(*plVar12 + 0x318))(plVar12);
          FUN_140768b6e(plVar12,1);
          goto LAB_14132bd74;
        }
      }
    }
  }
LAB_14132bd72:
  plVar12 = (longlong *)0x0;
LAB_14132bd74:
  if ((local_f0 ^ (ulonglong)auStack_428) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar12;
}



// FUNCTION 14132cab0 FUN_14132cab0 body=1174 status=ok
// SIG undefined FUN_14132cab0(void)

void FUN_14132cab0(longlong param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint uVar15;
  ulonglong uVar16;
  longlong lVar17;
  
  lVar12 = param_1 + 0x80;
  iVar1 = *(int *)(param_1 + 200);
  if (iVar1 < 2) {
    lVar7 = param_1 + 0xb8;
    if (*(longlong *)(param_1 + 0xc0) != 0) {
      lVar7 = *(longlong *)(param_1 + 0xc0);
    }
    iVar8 = iVar1 + 3;
    if (-1 < iVar1) {
      iVar8 = iVar1;
    }
    if (*(int *)(param_1 + 0x88) - *(int *)(param_1 + 0xb4) < iVar8 >> 2) {
      iVar1 = *(int *)(param_1 + 0xa8);
      if (iVar1 != 0) {
        puVar4 = *(uint **)(param_1 + 0xa0);
        if (*(uint **)(param_1 + 0xa0) == (uint *)0x0) {
          puVar4 = (uint *)(param_1 + 0x90);
        }
        uVar15 = *puVar4;
        if (uVar15 == 0) {
          iVar8 = iVar1 + 0x1e;
          if (-1 < iVar1 + -1) {
            iVar8 = iVar1 + -1;
          }
          uVar14 = 0;
          uVar16 = (ulonglong)(uint)(iVar8 >> 5);
          if (iVar8 >> 5 < 1) {
            uVar16 = uVar14;
          }
          iVar8 = 0;
          do {
            if (uVar16 == uVar14) goto LAB_14132cb1a;
            iVar8 = iVar8 + 0x20;
            uVar15 = puVar4[uVar14 + 1];
            uVar14 = uVar14 + 1;
          } while (uVar15 == 0);
        }
        else {
          uVar14 = 0;
          iVar8 = 0;
        }
        uVar13 = (ulonglong)(-uVar15 & uVar15);
        uVar16 = uVar13 * 2 + 1;
        lVar5 = 0x3f;
        if (uVar16 != 0) {
          for (; uVar16 >> lVar5 == 0; lVar5 = lVar5 + -1) {
          }
        }
        iVar9 = (iVar8 - ((uint)lVar5 ^ 0x3f)) + 0x3e;
        if (iVar9 < iVar1) {
          uVar15 = 0xffffffff;
          do {
            *(undefined4 *)
             (lVar7 + (longlong)
                      *(int *)(*(longlong *)(param_1 + 0x80) + 0xd4 + (longlong)iVar9 * 0xe0) * 4) =
                 0xffffffff;
            uVar15 = ~(uint)uVar13 & uVar15;
            puVar4 = *(uint **)(param_1 + 0xa0);
            if (*(uint **)(param_1 + 0xa0) == (uint *)0x0) {
              puVar4 = (uint *)(param_1 + 0x90);
            }
            iVar3 = *(int *)(param_1 + 0xa8);
            iVar9 = (int)uVar14;
            lVar5 = (longlong)iVar9;
            uVar2 = puVar4[lVar5] & uVar15;
            if (uVar2 == 0) {
              iVar10 = iVar3 + 0x1e;
              if (-1 < iVar3 + -1) {
                iVar10 = iVar3 + -1;
              }
              iVar10 = iVar10 >> 5;
              iVar8 = iVar8 + 0x20;
              iVar11 = iVar10;
              if (iVar10 < iVar9) {
                iVar11 = iVar9;
              }
              if (iVar9 < iVar10) {
                lVar17 = 0;
                do {
                  uVar2 = puVar4[lVar5 + lVar17 + 1];
                  if (uVar2 != 0) {
                    uVar14 = (ulonglong)(iVar9 + (int)lVar17 + 1);
                    uVar15 = 0xffffffff;
                    goto LAB_14132cef2;
                  }
                  iVar8 = iVar8 + 0x20;
                  lVar17 = lVar17 + 1;
                } while (iVar11 - lVar5 != lVar17);
                uVar15 = 0xffffffff;
                lVar5 = (longlong)iVar11;
              }
              uVar14 = lVar5 + 1U & 0xffffffff;
              iVar9 = iVar3;
            }
            else {
LAB_14132cef2:
              uVar13 = (ulonglong)(-uVar2 & uVar2);
              uVar16 = uVar13 * 2 + 1;
              lVar5 = 0x3f;
              if (uVar16 != 0) {
                for (; uVar16 >> lVar5 == 0; lVar5 = lVar5 + -1) {
                }
              }
              iVar9 = (iVar8 - ((uint)lVar5 ^ 0x3f)) + 0x3e;
              if (iVar3 <= iVar9) {
                iVar9 = iVar3;
              }
            }
          } while (iVar9 != iVar1);
        }
      }
    }
    else if (iVar1 == 1) {
      lVar5 = 0;
      do {
        *(undefined4 *)(lVar7 + lVar5 * 4) = 0xffffffff;
        lVar5 = lVar5 + 1;
      } while (lVar5 < *(int *)(param_1 + 200));
    }
LAB_14132cb1a:
    FUN_14133ffc8(lVar12);
  }
  else {
    FUN_14133ffc8(lVar12);
    *(undefined4 *)(param_1 + 200) = 1;
    FUN_1462482ce(lVar12);
  }
  iVar1 = *(int *)(param_1 + 0x48);
  if (iVar1 == 0) {
    uVar14 = 1;
    uVar16 = 0;
    iVar9 = 0;
    iVar8 = 0;
  }
  else {
    puVar4 = *(uint **)(param_1 + 0x40);
    if (*(uint **)(param_1 + 0x40) == (uint *)0x0) {
      puVar4 = (uint *)(param_1 + 0x30);
    }
    uVar15 = *puVar4;
    if (uVar15 == 0) {
      iVar8 = iVar1 + 0x1e;
      if (-1 < iVar1 + -1) {
        iVar8 = iVar1 + -1;
      }
      uVar16 = 0;
      uVar14 = (ulonglong)(uint)(iVar8 >> 5);
      if (iVar8 >> 5 < 1) {
        uVar14 = uVar16;
      }
      iVar9 = 0;
      do {
        if (uVar14 == uVar16) goto LAB_14132ccc2;
        iVar9 = iVar9 + 0x20;
        uVar15 = puVar4[uVar16 + 1];
        uVar16 = uVar16 + 1;
      } while (uVar15 == 0);
    }
    else {
      uVar16 = 0;
      iVar9 = 0;
    }
    uVar14 = (ulonglong)(-uVar15 & uVar15);
    uVar13 = uVar14 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar8 = (iVar9 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    if (iVar1 <= iVar8) {
      iVar8 = iVar1;
    }
  }
  if (iVar8 < iVar1) {
    uVar15 = 0xffffffff;
    do {
      lVar12 = *(longlong *)(param_1 + 0x20);
      iVar1 = *(int *)(lVar12 + 0xc + (longlong)iVar8 * 0x20);
      if ((((iVar1 != 0) &&
           (uVar2 = *(uint *)(lVar12 + (longlong)iVar8 * 0x20 + 8), -1 < (int)uVar2)) &&
          ((int)uVar2 < DAT_14c9647dc)) &&
         (((plVar6 = (longlong *)
                     ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
           plVar6 != (longlong *)0x0 && ((int)plVar6[2] == iVar1)) &&
          (((*(uint *)(plVar6 + 1) & 0x10200000) == 0 && (*plVar6 != 0)))))) {
        FUN_140aeefbc(*plVar6,0,1);
      }
      FUN_145a1e60a((longlong *)(param_1 + 0x20),iVar8);
      uVar15 = uVar15 & ~(uint)uVar14;
      puVar4 = *(uint **)(param_1 + 0x40);
      if (*(uint **)(param_1 + 0x40) == (uint *)0x0) {
        puVar4 = (uint *)(param_1 + 0x30);
      }
      iVar1 = *(int *)(param_1 + 0x48);
      iVar8 = (int)uVar16;
      lVar12 = (longlong)iVar8;
      uVar2 = puVar4[lVar12] & uVar15;
      if (uVar2 == 0) {
        iVar3 = iVar1 + 0x1e;
        if (-1 < iVar1 + -1) {
          iVar3 = iVar1 + -1;
        }
        iVar3 = iVar3 >> 5;
        iVar10 = iVar3;
        if (iVar3 < iVar8) {
          iVar10 = iVar8;
        }
        if (iVar3 <= iVar8) break;
        lVar7 = 0;
        while( true ) {
          iVar9 = iVar9 + 0x20;
          uVar2 = puVar4[lVar12 + lVar7 + 1];
          if (uVar2 != 0) break;
          lVar7 = lVar7 + 1;
          if (iVar10 - lVar12 == lVar7) goto LAB_14132ccc2;
        }
        uVar16 = (ulonglong)(iVar8 + (int)lVar7 + 1);
        uVar15 = 0xffffffff;
      }
      uVar14 = (ulonglong)(-uVar2 & uVar2);
      uVar13 = uVar14 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar13 != 0) {
        for (; uVar13 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar8 = (iVar9 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    } while (iVar8 < iVar1);
  }
LAB_14132ccc2:
  iVar1 = *(int *)(param_1 + 0x78);
  if (0 < iVar1) {
    do {
      puVar4 = *(uint **)(param_1 + 0x70);
      uVar15 = puVar4[1];
      if ((((uVar15 != 0) && (uVar2 = *puVar4, -1 < (int)uVar2)) &&
          (((int)uVar2 < DAT_14c9647dc &&
           (((plVar6 = (longlong *)
                       ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
             plVar6 != (longlong *)0x0 && (*(uint *)(plVar6 + 2) == uVar15)) &&
            ((*(uint *)(plVar6 + 1) & 0x10200000) == 0)))))) && (*plVar6 != 0)) {
        FUN_140aeefbc(*plVar6,0,CONCAT71((int7)((ulonglong)plVar6 >> 8),1));
        iVar1 = *(int *)(param_1 + 0x78);
      }
      iVar8 = 0;
      if (iVar1 + -1 != 0) {
        memmove(*(void **)(param_1 + 0x70),(void *)((longlong)*(void **)(param_1 + 0x70) + 0x10),
                (longlong)(iVar1 + -1) << 4);
        iVar8 = *(int *)(param_1 + 0x78) + -1;
      }
      *(int *)(param_1 + 0x78) = iVar8;
      FUN_145949c22((undefined8 *)(param_1 + 0x70));
      iVar1 = *(int *)(param_1 + 0x78);
    } while (0 < iVar1);
  }
  return;
}



// FUNCTION 14132cf46 FUN_14132cf46 body=1607 status=ok
// SIG undefined FUN_14132cf46(void)

bool FUN_14132cf46(longlong *param_1,int param_2,longlong param_3)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  LARGE_INTEGER *pLVar5;
  LARGE_INTEGER LVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  int iVar10;
  LARGE_INTEGER LVar11;
  LARGE_INTEGER LVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined1 auStack_208 [32];
  undefined4 local_1e8;
  undefined4 local_1e0;
  undefined4 local_1d8;
  undefined8 local_1d0;
  wchar_t *local_1c8;
  code *local_1c0;
  undefined1 *local_1b8;
  LARGE_INTEGER *local_1b0;
  code *local_1a8;
  code *local_1a0;
  longlong local_198;
  int local_18c;
  longlong local_188;
  longlong *local_180;
  undefined1 local_178 [7];
  char local_171;
  LARGE_INTEGER local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_148;
  undefined4 local_140;
  undefined8 local_13c;
  undefined4 local_134;
  longlong local_128;
  undefined4 local_120;
  LARGE_INTEGER local_118 [24];
  LARGE_INTEGER *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_208;
  iVar10 = 0x7fffffff;
  if (param_2 != 0) {
    iVar10 = param_2;
  }
  if ((((*(uint *)(param_1 + 1) & 0x10) == 0) && (lVar7 = param_1[4], lVar7 != 0)) &&
     (-1 < (short)*(undefined4 *)(lVar7 + 8))) {
    uVar2 = *(uint *)(lVar7 + 0xc);
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar7 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar7 = 0;
    }
    if ((*(uint *)(lVar7 + 8) >> 0x1c & 1) == 0) {
      if (DAT_14cae8b20 == 0) {
        local_1b0 = local_118;
        local_118[0].QuadPart = (LONGLONG)&LAB_14355090c;
        local_1a0 = FUN_14081d0ea;
        local_1a8 = FUN_14081d0ea;
        local_1b8 = &LAB_147b8e16d;
        local_1c0 = (code *)&LAB_140810a38;
        local_1c8 = L"Engine";
        local_1d0 = 0x800000000;
        local_1d8 = 0x10000000;
        local_1e0 = 8;
        local_1e8 = 0x3f0;
        FUN_14081cfa3(L"/Script/Engine",L"Level",&DAT_14cae8b20,&DAT_147b8e16c);
      }
      lVar7 = DAT_14cae8b20;
      if (DAT_14c951858 == 0) {
        local_1b0 = local_118;
        local_118[0].QuadPart = (LONGLONG)FUN_1449e2820;
        local_1a0 = FUN_14081d0ea;
        local_1a8 = FUN_14081d0ea;
        local_1b8 = &LAB_1468c5283;
        local_1c0 = FUN_142809da0;
        local_1c8 = L"Engine";
        local_1d0 = 0x400000000;
        local_1d8 = 0x10000000;
        local_1e0 = 8;
        local_1e8 = 0x50;
        FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
      }
      lVar4 = param_1[4];
      if (lVar4 != 0) {
        iVar3 = *(int *)(lVar7 + 0x38);
        do {
          if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < iVar3) ||
             (lVar8 = lVar4,
             *(longlong *)(*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)iVar3 * 8)
             != lVar7 + 0x30)) {
            lVar8 = 0;
          }
        } while ((lVar8 == 0) && (lVar4 = *(longlong *)(lVar4 + 0x20), lVar4 != 0));
        if (lVar8 != 0) {
          local_198 = *(longlong *)(lVar8 + 0xc0);
          goto LAB_14132d041;
        }
      }
    }
  }
  local_198 = 0;
LAB_14132d041:
  if (((*(byte *)((longlong)param_1 + 0x62) & 1) != 0) ||
     ((bVar1 = *(byte *)(local_198 + 0x152), bVar1 != 1 &&
      ((6 < bVar1 || ((0x68U >> (bVar1 & 0x1f) & 1) == 0)))))) {
    FUN_144958ee8(param_1,1,0);
  }
  lVar7 = param_1[0x39];
  if (((lVar7 != 0) && ((*(byte *)(lVar7 + 0x9c) & 1) == 0)) &&
     ((*(byte *)(lVar7 + 0x9d) & 0x20) != 0)) {
    FUN_140b506dc(lVar7,local_198,param_3);
  }
  local_58 = (LARGE_INTEGER *)0x0;
  local_50 = 0x1800000000;
  local_180 = param_1;
  FUN_1448c0c58(param_1,local_118,0);
  iVar3 = (int)local_50;
  local_148 = 0;
  iVar15 = 0;
  local_140 = 0;
  local_168 = 0;
  uStack_160 = 0;
  local_13c = 0xffffffff00000080;
  local_134 = 0;
  local_128 = 0;
  local_120 = 0;
  plVar9 = (longlong *)(param_3 + 8);
  if (param_3 == 0) {
    plVar9 = (longlong *)0x0;
  }
  if ((int)local_50 < 1) {
LAB_14132d37b:
    plVar9 = local_180;
    iVar10 = DAT_14c7615a4;
    if (iVar3 == iVar15) {
      bVar1 = *(byte *)((longlong)local_180 + 100);
      *(byte *)((longlong)local_180 + 100) = bVar1 & 0x6f | 0x80;
      (**(code **)(*local_180 + 0x4b8))(local_180);
      if (((-1 < (char)bVar1) || (iVar10 == 0)) && (*(char *)(local_198 + 0x152) != '\a')) {
        FUN_1400da9ba(local_198 + 0x410,plVar9);
      }
    }
    local_120 = 0;
    if (local_128 != 0) {
      FUN_1400020a8();
    }
    FUN_1403cd038(&local_168);
    if (local_58 != (LARGE_INTEGER *)0x0) {
      FUN_1400020a8();
    }
    if ((local_48 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return iVar3 == iVar15;
  }
  iVar14 = 0;
  iVar15 = 0;
  iVar13 = 0;
  local_18c = iVar10;
  local_188 = param_3;
  do {
    pLVar5 = local_58;
    if (local_58 == (LARGE_INTEGER *)0x0) {
      pLVar5 = local_118;
    }
    LVar11 = (LARGE_INTEGER)pLVar5[iVar14].QuadPart;
    if (((((byte)*(code *)(LVar11.QuadPart + 0x9c) & 1) == 0) &&
        (((byte)*(code *)(LVar11.QuadPart + 0x9d) & 0x20) != 0)) &&
       ((*(uint *)(LVar11.QuadPart + 8) >> 0x1e & 1) == 0)) {
      if ((code *)LVar11.QuadPart == (code *)0x0) {
        LVar11.QuadPart = 0;
      }
      else {
        if (DAT_14cac7648 == 0) {
          local_170.QuadPart = (LONGLONG)FUN_144a7958c;
          local_1a0 = FUN_14081d0ea;
          local_1a8 = FUN_143242436;
          local_1b0 = &local_170;
          local_1b8 = &LAB_14789ef1f;
          local_1c0 = (code *)&LAB_1417b008f;
          local_1c8 = L"Engine";
          local_1d0 = 0x8000000000;
          local_1d8 = 0x10000004;
          local_1e0 = 0x10;
          local_1e8 = 0x2b0;
          FUN_14081cfa3(L"/Script/Engine",L"SceneComponent",&DAT_14cac7648,FUN_146393848);
        }
        if (((*(int *)(DAT_14cac7648 + 0x38) <=
              *(int *)(*(longlong *)(LVar11.QuadPart + 0x10) + 0x38)) &&
            (*(longlong *)
              (*(longlong *)(*(longlong *)(LVar11.QuadPart + 0x10) + 0x30) +
              (longlong)*(int *)(DAT_14cac7648 + 0x38) * 8) == DAT_14cac7648 + 0x30)) &&
           (LVar6 = (LARGE_INTEGER)((LARGE_INTEGER *)(LVar11.QuadPart + 0x120))->QuadPart,
           (code *)LVar6.QuadPart != (code *)0x0)) {
          LVar12.QuadPart = 0;
          do {
            if ((*(longlong *)(LVar6.QuadPart + 0xa8) != *(longlong *)(LVar11.QuadPart + 0xa8)) ||
               (((byte)*(code *)(LVar6.QuadPart + 0x9c) & 1) != 0)) break;
            if ((((byte)*(code *)(LVar6.QuadPart + 0x9d) & 0x20) != 0) &&
               ((*(uint *)(LVar6.QuadPart + 8) >> 0x1e & 1) == 0)) {
              LVar12 = LVar6;
            }
            LVar6 = (LARGE_INTEGER)((LARGE_INTEGER *)(LVar6.QuadPart + 0x120))->QuadPart;
          } while ((code *)LVar6.QuadPart != (code *)0x0);
          if ((code *)LVar12.QuadPart != (code *)0x0) {
            local_171 = '\0';
            local_170 = LVar12;
            FUN_140922ad8(&local_168,local_178,&local_170,&local_171);
            if (local_171 != '\0') goto LAB_14132d37b;
            iVar14 = iVar14 + -1;
            iVar15 = iVar15 + -1;
            LVar11 = LVar12;
          }
        }
      }
      FUN_140b506dc(LVar11.QuadPart,local_198,local_188);
      iVar13 = iVar13 + 1;
      iVar10 = local_18c;
    }
    iVar15 = iVar15 + 1;
    iVar14 = iVar14 + 1;
    if ((iVar14 < iVar3) && (iVar10 <= iVar13)) {
      if (plVar9 == (longlong *)0x0) goto LAB_14132d37b;
      iVar13 = 0;
      if ((plVar9[1] != -1) &&
         ((plVar9[1] == 0 ||
          (QueryPerformanceCounter(&local_170),
          (ulonglong)(plVar9[1] + *plVar9) < (ulonglong)local_170)))) goto LAB_14132d37b;
    }
    if (iVar3 <= iVar14) goto LAB_14132d37b;
  } while( true );
}



// FUNCTION 14132d58e FUN_14132d58e body=1383 status=ok
// SIG undefined FUN_14132d58e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14132d58e(longlong *param_1,longlong param_2,undefined4 param_3)

{
  longlong *plVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double _X;
  undefined1 auVar8 [16];
  byte bVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong lVar13;
  double *pdVar14;
  double *pdVar15;
  longlong lVar16;
  longlong lVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auStack_178 [32];
  double local_158 [2];
  undefined1 local_148 [16];
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_178;
  if ((char)param_3 == '\0') {
    FUN_14132e6a6(param_1);
  }
  auVar8 = _DAT_1499387d0;
  if ((longlong)*(int *)(param_2 + 0x20) != 0) {
    lVar17 = *(longlong *)(param_2 + 0x18);
    plVar1 = param_1 + 9;
    lVar16 = (longlong)*(int *)(param_2 + 0x20) * 0x90;
    dVar5 = (double)DAT_1499387d0;
    dVar6 = DAT_1499387d0._8_8_;
    do {
      cVar3 = *(char *)(lVar17 + 8);
      if (cVar3 == '\x03') {
        auVar24 = divpd(*(undefined1 (*) [16])(lVar17 + 0x28),auVar8);
        auVar25._8_8_ = 0;
        auVar25._0_8_ = *(double *)(lVar17 + 0x38);
        auVar25 = divpd(auVar25,auVar8);
        auVar24 = roundpd(auVar24,auVar24,3);
        auVar25 = roundpd(auVar25,auVar25,3);
        dVar21 = (*(double *)*(undefined1 (*) [16])(lVar17 + 0x28) - auVar24._0_8_ * dVar5) *
                 0.008726646259971648;
        dVar22 = (*(double *)(lVar17 + 0x30) - auVar24._8_8_ * dVar6) * 0.008726646259971648;
        dVar7 = (*(double *)(lVar17 + 0x38) - auVar25._0_8_ * dVar5) * 0.008726646259971648;
        _X = (0.0 - auVar25._8_8_ * dVar6) * 0.008726646259971648;
        dVar18 = sin(dVar21);
        dVar19 = sin(dVar22);
        dVar20 = sin(dVar7);
        sin(_X);
        dVar21 = cos(dVar21);
        dVar22 = cos(dVar22);
        dVar23 = cos(dVar7);
        cos(_X);
        dVar7 = dVar19 * dVar18 * dVar20 + dVar22 * dVar21 * dVar23;
        local_158[0] = dVar18 * dVar19 * dVar23 - dVar21 * dVar22 * dVar20;
        local_158[1] = -(dVar18 * dVar22 * dVar23) - dVar21 * dVar19 * dVar20;
        local_148._8_4_ = SUB84(dVar7,0);
        local_148._0_8_ = -(dVar22 * dVar18 * dVar20) + dVar19 * dVar21 * dVar23;
        local_148._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
        local_138 = *(undefined8 *)(lVar17 + 0x10);
        uStack_130 = *(undefined8 *)(lVar17 + 0x18);
        local_128 = *(undefined8 *)(lVar17 + 0x20);
        uStack_120 = 0;
        local_118 = 0x3ff0000000000000;
        uStack_110 = 0x3ff0000000000000;
        local_108 = 0x3ff0000000000000;
        uStack_100 = 0;
        if ((char)param_3 == '\0') {
          lVar12 = FUN_146562975(param_1[6]);
LAB_14132d94a:
          (**(code **)(*param_1 + 0x20))(param_1,lVar12,local_158,0);
        }
        else {
          iVar4 = (int)param_1[0xb];
          if (((longlong)iVar4 < 0) || ((int)param_1[10] <= iVar4)) {
            lVar12 = FUN_146562975(param_1[6]);
            if ((lVar12 != 0) && (DAT_14c950c29 != '\0')) {
              FUN_1456cec3c(lVar12);
            }
            iVar4 = (int)param_1[10];
            *(uint *)(param_1 + 10) = iVar4 + 1U;
            if (*(uint *)((longlong)param_1 + 0x54) < iVar4 + 1U) {
              FUN_146562a28(plVar1,iVar4);
            }
            lVar13 = *plVar1;
            *(longlong *)(lVar13 + (longlong)iVar4 * 8) = lVar12;
            if ((lVar12 != 0) && (DAT_14c950c29 != '\0')) {
              FUN_1456cec3c(lVar12);
              lVar12 = *(longlong *)(lVar13 + (longlong)iVar4 * 8);
            }
            goto LAB_14132d94a;
          }
          lVar12 = *(longlong *)(*plVar1 + (longlong)iVar4 * 8);
          *(byte *)(lVar12 + 0x1f8) = *(byte *)(lVar12 + 0x1f8) | 1;
          pdVar14 = local_158;
          pdVar15 = (double *)(lVar12 + 0x240);
          for (lVar13 = 0xc; lVar13 != 0; lVar13 = lVar13 + -1) {
            *pdVar15 = *pdVar14;
            pdVar14 = pdVar14 + 1;
            pdVar15 = pdVar15 + 1;
          }
        }
        uVar10 = FUN_140efebc0();
        uVar11 = FUN_140a2e4c6();
        FUN_144a54316(uVar11,lVar17,uVar10);
        uVar2 = (*(uint *)(lVar12 + 0x2d4) & 0xfffffffd) + (uint)*(byte *)(lVar17 + 0x54) * 2;
        *(uint *)(lVar12 + 0x2d4) = uVar2;
        uVar2 = (uVar2 & 0xfffffffb) + (uint)*(byte *)(lVar17 + 0x55) * 4;
        *(uint *)(lVar12 + 0x2d4) = uVar2;
        *(uint *)(lVar12 + 0x2d4) = (uVar2 & 0xfffffff7) + (uint)*(byte *)(lVar17 + 0x56) * 8;
        FUN_14045627c(lVar12,1,1);
        if ((~*(byte *)(lVar12 + 0x9c) & 3) == 0) {
          bVar9 = *(byte *)(lVar12 + 0x9d);
          if ((bVar9 & 1) != 0) {
            if ((*(longlong *)(lVar12 + 0xb0) != 0) || (lVar13 = FUN_1448abda6(lVar12), lVar13 != 0)
               ) goto LAB_14132d8cc;
            bVar9 = *(byte *)(lVar12 + 0x9d);
          }
          *(byte *)(lVar12 + 0x9d) = bVar9 | 1;
          FUN_1401057d4(lVar12);
          FUN_14010586c(&DAT_14cad0140,lVar12);
        }
LAB_14132d8cc:
        *(int *)(param_1 + 0xb) = (int)param_1[0xb] + 1;
      }
      else if (cVar3 == '\x01') {
        FUN_1461ea318(param_1,lVar17,param_3);
      }
      else if (cVar3 == '\x02') {
        FUN_145764bc0();
      }
      else {
        FUN_1458f796e();
      }
      lVar17 = lVar17 + 0x90;
      lVar16 = lVar16 + -0x90;
    } while (lVar16 != 0);
  }
  lVar17 = (longlong)(int)param_1[0x14];
  if ((int)param_1[0x14] < (int)param_1[0x13]) {
    do {
      FUN_14045627c(*(undefined8 *)(param_1[0x12] + lVar17 * 8),0,1);
      lVar17 = lVar17 + 1;
    } while (lVar17 < (int)param_1[0x13]);
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  lVar17 = (longlong)(int)param_1[0x11];
  if ((int)param_1[0x11] < (int)param_1[0x10]) {
    do {
      FUN_14045627c(*(undefined8 *)(param_1[0xf] + lVar17 * 8),0,1);
      lVar17 = lVar17 + 1;
    } while (lVar17 < (int)param_1[0x10]);
  }
  *(undefined4 *)(param_1 + 0x11) = 0;
  lVar17 = (longlong)(int)param_1[0xe];
  if ((int)param_1[0xe] < (int)param_1[0xd]) {
    do {
      FUN_14045627c(*(undefined8 *)(param_1[0xc] + lVar17 * 8),0,1);
      lVar17 = lVar17 + 1;
    } while (lVar17 < (int)param_1[0xd]);
  }
  *(undefined4 *)(param_1 + 0xe) = 0;
  lVar17 = (longlong)(int)param_1[0xb];
  if ((int)param_1[0xb] < (int)param_1[10]) {
    do {
      FUN_14045627c(*(undefined8 *)(param_1[9] + lVar17 * 8),0,1);
      lVar17 = lVar17 + 1;
    } while (lVar17 < (int)param_1[10]);
  }
  *(undefined4 *)(param_1 + 0xb) = 0;
  if ((local_f0 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14132daf6 FUN_14132daf6 body=390 status=ok
// SIG undefined FUN_14132daf6(void)

ulonglong FUN_14132daf6(longlong *param_1,longlong *param_2,char param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined8 unaff_RBP;
  ulonglong uVar4;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined7 uVar5;
  
  if (param_2 == (longlong *)0x0) {
    uVar4 = 0;
  }
  else {
    lVar1 = *param_1;
    if (lVar1 == 0) {
      uVar4 = 0;
    }
    else {
      lVar8 = (longlong)*(int *)(lVar1 + 0x1d0);
      uVar5 = (undefined7)((ulonglong)unaff_RBP >> 8);
      uVar4 = CONCAT71(uVar5,lVar8 != 0);
      if (lVar8 != 0) {
        lVar6 = *(longlong *)(lVar1 + 0x1c8);
        lVar7 = 0;
        do {
          iVar2 = FUN_144909502(param_2,*(undefined8 *)(lVar6 + lVar7));
          if (iVar2 != -1) {
            (**(code **)(*param_2 + 0xb88))(param_2,iVar2,0);
          }
          lVar7 = lVar7 + 8;
        } while (lVar8 * 8 != lVar7);
      }
      if ((param_3 != '\0') && (iVar2 = *(int *)(lVar1 + 0x1f0), (longlong)iVar2 != 0)) {
        lVar1 = *(longlong *)(lVar1 + 0x1e8);
        lVar8 = 0;
        do {
          iVar3 = FUN_144909502(param_2,*(undefined8 *)(lVar1 + lVar8));
          if (iVar3 != -1) {
            (**(code **)(*param_2 + 0xb88))(param_2,iVar3,0);
          }
          lVar8 = lVar8 + 8;
        } while ((longlong)iVar2 * 8 != lVar8);
        uVar4 = CONCAT71(uVar5,1);
      }
    }
    lVar1 = param_1[1];
    if (lVar1 != 0) {
      iVar2 = *(int *)(lVar1 + 0x88);
      if ((longlong)iVar2 != 0) {
        lVar8 = *(longlong *)(lVar1 + 0x80);
        lVar6 = 0;
        do {
          iVar3 = FUN_144909502(param_2,*(undefined8 *)(lVar8 + lVar6));
          if (iVar3 != -1) {
            (**(code **)(*param_2 + 0xb88))(param_2,iVar3,0);
          }
          lVar6 = lVar6 + 8;
        } while ((longlong)iVar2 * 8 != lVar6);
        uVar4 = CONCAT71((int7)(uVar4 >> 8),1);
      }
      if ((param_3 != '\0') && (iVar2 = *(int *)(lVar1 + 0x98), (longlong)iVar2 != 0)) {
        lVar1 = *(longlong *)(lVar1 + 0x90);
        lVar8 = 0;
        do {
          iVar3 = FUN_144909502(param_2,*(undefined8 *)(lVar1 + lVar8));
          if (iVar3 != -1) {
            (**(code **)(*param_2 + 0xb88))(param_2,iVar3,0);
          }
          lVar8 = lVar8 + 8;
        } while ((longlong)iVar2 * 8 != lVar8);
        uVar4 = CONCAT71((int7)(uVar4 >> 8),1);
      }
    }
  }
  return uVar4 & 0xffffffff;
}



// FUNCTION 14132dc7c FUN_14132dc7c body=1305 status=ok
// SIG undefined FUN_14132dc7c(void)

void FUN_14132dc7c(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  DWORD DVar6;
  DWORD DVar7;
  longlong lVar8;
  longlong lVar9;
  undefined4 *puVar10;
  uint *puVar11;
  undefined8 uVar12;
  uint uVar13;
  undefined ***pppuVar14;
  uint *puVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  undefined1 auStack_a8 [32];
  undefined1 **local_88;
  undefined8 local_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar8 = FUN_1402ad3be(DAT_14cb0d2b0,param_1,1);
  if (((param_2 == 0) || (lVar9 = FUN_1447b4020(param_2), lVar8 == 0)) || (lVar9 == 0))
  goto LAB_14132ddeb;
  local_80 = FUN_1447b4020(param_2);
  uStack_78 = *param_3;
  uStack_74 = param_3[1];
  uStack_70 = param_3[2];
  uStack_6c = param_3[3];
  lVar8 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar5 = *(int *)(lVar8 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar5 != 2) {
      if (iVar5 != 1) goto LAB_14132dd10;
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      if (DVar6 == DVar7) goto LAB_14132dd15;
      goto LAB_14132dd46;
    }
  }
  else {
LAB_14132dd10:
    if (iVar5 != 0x10) {
LAB_14132dd46:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar5 = *(int *)(lVar8 + 0xc60), iVar5 == 2))
        goto LAB_14132dd15;
        if (iVar5 == 1) {
          DVar6 = FUN_140ad26c0();
          DVar7 = GetCurrentThreadId();
          if (DVar6 == DVar7) goto LAB_14132dd15;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar11 = (uint *)*puVar2;
        if (puVar11 != (uint *)0x0) goto LAB_14132deb0;
        while( true ) {
          uVar13 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar13 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar13 | 1;
            __tlregdtor(&LAB_1435546e9);
          }
          lVar8 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar10 = *(undefined4 **)(lVar8 + 0x310);
          *(undefined8 *)(lVar8 + 0x310) = 0;
          if (puVar10 == (undefined4 *)0x0) {
            puVar10 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar10 = 0xffffffff;
          *(undefined4 **)(puVar10 + 0x10) = puVar10 + 0x16;
          puVar10[0x12] = 0;
          *puVar2 = puVar10;
          FUN_140217a48(puVar2);
          puVar11 = (uint *)*puVar2;
LAB_14132deb0:
          puVar17 = (undefined8 *)(*(longlong *)(puVar11 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar15 = (uint *)(puVar17 + 0x18);
          uVar13 = puVar11[0x12];
          if (puVar15 <= puVar11 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar11 + 0x10) = puVar11 + 0x4000;
            LOCK();
            uVar3 = *puVar11;
            *puVar11 = *puVar11 + uVar13 + 1;
            UNLOCK();
            if ((uVar3 ^ uVar13) != 0xffffffff) break;
            puVar11 = (uint *)*puVar2;
            *puVar11 = 0xffffffff;
            *(uint **)(puVar11 + 0x10) = puVar11 + 0x16;
            puVar11[0x12] = 0;
            *puVar2 = puVar11;
            puVar17 = (undefined8 *)((longlong)puVar11 + 0x5fU & 0xfffffffffffffff8);
            puVar15 = (uint *)(puVar17 + 0x18);
            uVar13 = 0;
            if (puVar15 <= puVar11 + 0x4000) {
              uVar13 = 1;
              goto LAB_14132df30;
            }
          }
        }
        uVar13 = uVar13 + 1;
LAB_14132df30:
        *(uint **)(puVar11 + 0x10) = puVar15;
        puVar11[0x12] = uVar13;
        iVar5 = 0;
        FUN_1447247dc(puVar17,0);
        *puVar17 = &PTR_FUN_14a9b1980;
        *(undefined4 *)(puVar17 + 0x15) = (undefined4)local_80;
        *(undefined4 *)((longlong)puVar17 + 0xac) = local_80._4_4_;
        *(undefined4 *)(puVar17 + 0x16) = uStack_78;
        *(undefined4 *)((longlong)puVar17 + 0xb4) = uStack_74;
        puVar17[0x17] = CONCAT44(uStack_6c,uStack_70);
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar13 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar13 < 2) {
            uVar16 = (ulonglong)(byte)(&DAT_149e38edc)[uVar13];
            iVar5 = 0;
          }
          else {
            uVar16 = 2;
          }
        }
        else {
          iVar5 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar16 = 5;
        }
        if (*(code **)(puVar17[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar17[0xe] + 0x18))(puVar17 + 0xe,puVar17 + 9);
        }
        puVar17[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar17[9] = puVar17;
        puVar17[10] = puVar17;
        lVar8 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar8 == 0) {
          uVar4 = 1;
          if ((char)uVar16 != '\x06') {
            uVar4 = uVar16;
          }
          uVar16 = uVar4;
          uVar12 = 0;
        }
        else {
          if ((char)uVar16 == '\x06') {
            uVar16 = *(ulonglong *)(lVar8 + 0x38) >> 0x3b;
          }
          uVar12 = *(undefined8 *)(lVar8 + 0x30);
        }
        puVar17[0xf] = uVar12;
        puVar17[0x10] = uVar16 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar17 + 0x1c) = iVar5;
        if (puVar17 == (undefined8 *)0x0) {
          local_68[0] = (undefined1 *)CONCAT71(local_68[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar17 + 1) = *(int *)(puVar17 + 1) + 1;
          UNLOCK();
          local_68[0] = (undefined1 *)CONCAT71(local_68[0]._1_7_,1);
          FUN_1447439e4(puVar17);
          LOCK();
          piVar1 = (int *)(puVar17 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar17)(puVar17,1);
          }
        }
      }
      else {
        local_88 = local_68;
        local_58 = (undefined ***)0x0;
        local_48 = &PTR_LAB_14a9b1940;
        local_40 = (undefined4)local_80;
        uStack_3c = local_80._4_4_;
        uStack_38 = uStack_78;
        uStack_34 = uStack_74;
        local_30 = CONCAT44(uStack_6c,uStack_70);
        local_68[0] = &LAB_1435546b0;
        FUN_14005a792(&DAT_14ca9a440,L"ClearRTCommand",&DAT_14cae8ca4);
        if (local_68[0] != (undefined1 *)0x0) {
          pppuVar14 = local_58;
          if (local_58 == (undefined ***)0x0) {
            pppuVar14 = &local_48;
          }
          (*(code *)(*pppuVar14)[2])();
        }
      }
      goto LAB_14132ddeb;
    }
  }
LAB_14132dd15:
  FUN_143554152(&local_80,&DAT_14ca85100);
LAB_14132ddeb:
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14132e196 FUN_14132e196 body=1294 status=ok
// SIG undefined FUN_14132e196(void)

void FUN_14132e196(longlong param_1,longlong *param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  longlong lVar9;
  undefined1 *puVar10;
  int iVar11;
  int iVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint uVar15;
  uint *puVar16;
  longlong lVar17;
  int iVar18;
  undefined1 auStack_1a8 [32];
  undefined4 local_188;
  undefined4 local_180;
  undefined4 local_178;
  undefined8 local_170;
  wchar_t *local_168;
  code *local_160;
  undefined1 *local_158;
  code **local_150;
  code *local_148;
  code *local_140;
  uint *local_138;
  longlong *local_130;
  longlong local_128;
  code *local_120;
  undefined1 local_118 [192];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  local_58 = (undefined1 *)0x0;
  local_50 = 0x1800000000;
  puVar16 = (uint *)(param_1 + 0x250);
  iVar2 = *(int *)(param_1 + 0x268);
  local_130 = param_2;
  if (iVar2 == 0) {
    uVar14 = 1;
    uVar13 = 0;
    iVar18 = 0;
    iVar6 = 0;
  }
  else {
    puVar8 = *(uint **)(param_1 + 0x260);
    if (*(uint **)(param_1 + 0x260) == (uint *)0x0) {
      puVar8 = puVar16;
    }
    uVar15 = *puVar8;
    if (uVar15 == 0) {
      iVar6 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar6 = iVar2 + -1;
      }
      uVar13 = 0;
      uVar14 = (ulonglong)(uint)(iVar6 >> 5);
      if (iVar6 >> 5 < 1) {
        uVar14 = uVar13;
      }
      iVar18 = 0;
      do {
        if (uVar14 == uVar13) goto LAB_14132e66d;
        iVar18 = iVar18 + 0x20;
        uVar15 = puVar8[uVar13 + 1];
        uVar13 = uVar13 + 1;
      } while (uVar15 == 0);
    }
    else {
      uVar13 = 0;
      iVar18 = 0;
    }
    uVar14 = (ulonglong)(-uVar15 & uVar15);
    uVar1 = uVar14 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    iVar6 = (iVar18 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar6) {
      iVar6 = iVar2;
    }
  }
  if (iVar6 != iVar2) {
    uVar15 = 0xffffffff;
    local_138 = puVar16;
    do {
      plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x240) + (longlong)iVar6 * 0x10);
      if (plVar4 != (longlong *)0x0) {
        lVar9 = *local_130;
        if ((lVar9 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar9);
          puVar16 = local_138;
LAB_14132e2be:
          if (DAT_14cad00c8 == 0) {
            local_120 = FUN_144a7958c;
            local_140 = FUN_14081d0ea;
            local_148 = FUN_14081d0ea;
            local_150 = &local_120;
            local_158 = &LAB_1479b7a0c;
            local_160 = (code *)&LAB_1463b464e;
            local_168 = L"Engine";
            local_170 = 0;
            local_178 = 0x10000005;
            local_180 = 8;
            local_188 = 0x110;
            FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8,FUN_1463b462c);
            puVar16 = local_138;
            if (DAT_14cad00c8 == 0) goto LAB_14132e2d8;
          }
          if (*(int *)(lVar9 + 0x38) < *(int *)(DAT_14cad00c8 + 0x38)) goto LAB_14132e2d8;
          if (*(longlong *)
               (*(longlong *)(lVar9 + 0x30) + (longlong)*(int *)(DAT_14cad00c8 + 0x38) * 8) !=
              DAT_14cad00c8 + 0x30) {
            lVar9 = 0;
          }
        }
        else {
          if (lVar9 != 0) goto LAB_14132e2be;
LAB_14132e2d8:
          lVar9 = 0;
        }
        if ((*(int *)(lVar9 + 0x38) <= *(int *)(plVar4[2] + 0x38)) &&
           (*(longlong *)(*(longlong *)(plVar4[2] + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) ==
            lVar9 + 0x30)) {
          (**(code **)(*plVar4 + 0x310))(plVar4);
          puVar16 = local_138;
        }
        if (DAT_14cabf8d0 == 0) {
          local_120 = FUN_144a7958c;
          local_140 = FUN_14081d0ea;
          local_148 = FUN_142b47bc4;
          local_150 = &local_120;
          local_158 = &LAB_147860ffd;
          local_160 = FUN_1463713dc;
          local_168 = L"Engine";
          local_170 = 0;
          local_178 = 0x10000005;
          local_180 = 0x10;
          local_188 = 0x2b0;
          FUN_14081cfa3(L"/Script/Engine",L"ChildActorBaseComponent",&DAT_14cabf8d0,&DAT_147860ffc);
          puVar16 = local_138;
        }
        if (((*(int *)(DAT_14cabf8d0 + 0x38) <= *(int *)(plVar4[2] + 0x38)) &&
            (*(longlong *)
              (*(longlong *)(plVar4[2] + 0x30) + (longlong)*(int *)(DAT_14cabf8d0 + 0x38) * 8) ==
             DAT_14cabf8d0 + 0x30)) &&
           (lVar9 = (**(code **)(*plVar4 + 0x5d8))(plVar4), uVar1 = local_50, puVar16 = local_138,
           lVar9 != 0)) {
          lVar17 = (longlong)(int)local_50;
          uVar7 = (int)local_50 + 1;
          local_50 = CONCAT44(local_50._4_4_,uVar7);
          if (local_50._4_4_ < uVar7) {
            FUN_1470e9d72(local_118,uVar1 & 0xffffffff);
          }
          puVar10 = local_58;
          if (local_58 == (undefined1 *)0x0) {
            puVar10 = local_118;
          }
          *(longlong *)(puVar10 + lVar17 * 8) = lVar9;
          puVar16 = local_138;
        }
      }
      uVar15 = uVar15 & ~(uint)uVar14;
      puVar8 = *(uint **)(param_1 + 0x260);
      if (*(uint **)(param_1 + 0x260) == (uint *)0x0) {
        puVar8 = puVar16;
      }
      iVar3 = *(int *)(param_1 + 0x268);
      iVar6 = (int)uVar13;
      lVar9 = (longlong)iVar6;
      uVar7 = puVar8[lVar9] & uVar15;
      if (uVar7 == 0) {
        iVar11 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar11 = iVar3 + -1;
        }
        iVar11 = iVar11 >> 5;
        iVar18 = iVar18 + 0x20;
        iVar12 = iVar11;
        if (iVar11 < iVar6) {
          iVar12 = iVar6;
        }
        if (iVar6 < iVar11) {
          lVar17 = 0;
          do {
            uVar7 = puVar8[lVar9 + lVar17 + 1];
            if (uVar7 != 0) {
              uVar13 = (ulonglong)(iVar6 + (int)lVar17 + 1);
              uVar15 = 0xffffffff;
              goto LAB_14132e420;
            }
            iVar18 = iVar18 + 0x20;
            lVar17 = lVar17 + 1;
          } while (iVar12 - lVar9 != lVar17);
          uVar15 = 0xffffffff;
          iVar6 = iVar12;
        }
        uVar13 = (ulonglong)(iVar6 + 1);
        puVar16 = local_138;
        iVar6 = iVar3;
      }
      else {
LAB_14132e420:
        uVar14 = (ulonglong)(-uVar7 & uVar7);
        uVar1 = uVar14 * 2 + 1;
        lVar9 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
          }
        }
        iVar6 = (iVar18 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
        if (iVar3 <= iVar6) {
          iVar6 = iVar3;
        }
      }
    } while (iVar6 != iVar2);
    lVar9 = (longlong)(int)local_50;
    puVar10 = local_118;
    if (local_58 != (undefined1 *)0x0) {
      puVar10 = local_58;
    }
    if (lVar9 != 0) {
      lVar17 = 0;
      do {
        uVar5 = *(undefined8 *)(puVar10 + lVar17);
        local_128 = *local_130;
        if ((local_128 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
        }
        FUN_14132e196(uVar5,&local_128);
        lVar17 = lVar17 + 8;
      } while (lVar9 * 8 != lVar17);
    }
    if (local_58 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_14132e66d:
  if ((local_48 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14132e6a6 FUN_14132e6a6 body=359 status=ok
// SIG undefined FUN_14132e6a6(void)

void FUN_14132e6a6(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  int local_28;
  uint local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1458f61e2(&local_30,0x10,1,0);
  uVar4 = (ulonglong)local_20;
  lVar3 = local_30;
  if ((-1 < (int)local_20) && ((int)local_20 < local_28)) {
    do {
      lVar1 = *(longlong *)(lVar3 + (uVar4 & 0xffffffff) * 8);
      lVar2 = *(longlong *)(lVar1 + 0xb0);
      uVar6 = (uint)uVar4;
      if (lVar2 == 0) {
        lVar2 = FUN_1448abda6(lVar1);
        lVar3 = local_30;
        uVar6 = local_20;
      }
      if (lVar2 == param_1[6]) {
        (**(code **)(*param_1 + 0x28))(param_1,*(undefined8 *)(lVar3 + (longlong)(int)uVar6 * 8));
        lVar3 = local_30;
        uVar6 = local_20;
      }
      uVar4 = (longlong)(int)uVar6;
      do {
        uVar5 = uVar4;
        uVar4 = uVar5 + 1;
        local_20 = (uint)uVar4;
        if ((longlong)local_28 <= (longlong)uVar4) break;
      } while (*(longlong *)(lVar3 + uVar4 * 8) == 0);
    } while ((-2 < (longlong)uVar5) && ((int)local_20 < local_28));
  }
  if (lVar3 != 0) {
    FUN_1400020a8();
  }
  if (*(int *)((longlong)param_1 + 0x9c) < 0) {
    *(undefined4 *)(param_1 + 0x13) = 0;
    FUN_1489ad026(param_1 + 0x12);
  }
  else {
    *(undefined4 *)(param_1 + 0x13) = 0;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (*(int *)((longlong)param_1 + 0x84) < 0) {
    FUN_1489ad056(param_1 + 0xf);
  }
  *(undefined4 *)(param_1 + 0xd) = 0;
  if (*(int *)((longlong)param_1 + 0x6c) < 0) {
    FUN_1489ad086(param_1 + 0xc);
  }
  *(undefined4 *)(param_1 + 10) = 0;
  if (*(int *)((longlong)param_1 + 0x54) < 0) {
    FUN_1489ad0b6(param_1 + 9);
  }
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14132e80e FUN_14132e80e body=984 status=ok
// SIG undefined FUN_14132e80e(void)

void FUN_14132e80e(longlong param_1,longlong *param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  longlong lVar9;
  undefined1 *puVar10;
  int iVar11;
  int iVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  int iVar15;
  longlong lVar16;
  uint *puVar17;
  uint uVar18;
  undefined1 auStack_1a8 [32];
  undefined4 local_188;
  undefined4 local_180;
  undefined4 local_178;
  undefined8 local_170;
  wchar_t *local_168;
  code *local_160;
  undefined1 *local_158;
  code **local_150;
  code *local_148;
  code *local_140;
  longlong *local_138;
  uint *local_130;
  longlong local_128;
  code *local_120;
  undefined1 local_118 [192];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  local_58 = (undefined1 *)0x0;
  local_50 = 0x1800000000;
  puVar17 = (uint *)(param_1 + 0x250);
  iVar2 = *(int *)(param_1 + 0x268);
  if (iVar2 == 0) {
    uVar13 = 1;
    uVar14 = 0;
    iVar15 = 0;
    iVar6 = 0;
  }
  else {
    puVar8 = *(uint **)(param_1 + 0x260);
    if (*(uint **)(param_1 + 0x260) == (uint *)0x0) {
      puVar8 = puVar17;
    }
    uVar18 = *puVar8;
    if (uVar18 == 0) {
      iVar6 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar6 = iVar2 + -1;
      }
      uVar14 = 0;
      uVar13 = (ulonglong)(uint)(iVar6 >> 5);
      if (iVar6 >> 5 < 1) {
        uVar13 = uVar14;
      }
      iVar15 = 0;
      do {
        if (uVar13 == uVar14) goto LAB_14132ebaf;
        iVar15 = iVar15 + 0x20;
        uVar18 = puVar8[uVar14 + 1];
        uVar14 = uVar14 + 1;
      } while (uVar18 == 0);
    }
    else {
      uVar14 = 0;
      iVar15 = 0;
    }
    uVar13 = (ulonglong)(-uVar18 & uVar18);
    uVar1 = uVar13 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    iVar6 = (iVar15 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar6) {
      iVar6 = iVar2;
    }
  }
  if (iVar6 != iVar2) {
    uVar18 = 0xffffffff;
    local_138 = param_2;
    local_130 = puVar17;
    do {
      plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x240) + (longlong)iVar6 * 0x10);
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x310))(plVar4);
        if (DAT_14cabf8d0 == 0) {
          local_120 = FUN_144a7958c;
          local_140 = FUN_14081d0ea;
          local_148 = FUN_142b47bc4;
          local_150 = &local_120;
          local_158 = &LAB_147860ffd;
          local_160 = FUN_1463713dc;
          local_168 = L"Engine";
          local_170 = 0;
          local_178 = 0x10000005;
          local_180 = 0x10;
          local_188 = 0x2b0;
          FUN_14081cfa3(L"/Script/Engine",L"ChildActorBaseComponent",&DAT_14cabf8d0,&DAT_147860ffc);
        }
        if (((*(int *)(DAT_14cabf8d0 + 0x38) <= *(int *)(plVar4[2] + 0x38)) &&
            (*(longlong *)
              (*(longlong *)(plVar4[2] + 0x30) + (longlong)*(int *)(DAT_14cabf8d0 + 0x38) * 8) ==
             DAT_14cabf8d0 + 0x30)) &&
           (lVar9 = (**(code **)(*plVar4 + 0x5d8))(plVar4), uVar1 = local_50, lVar9 != 0)) {
          lVar16 = (longlong)(int)local_50;
          uVar7 = (int)local_50 + 1;
          local_50 = CONCAT44(local_50._4_4_,uVar7);
          if (local_50._4_4_ < uVar7) {
            FUN_1470e9d72(local_118,uVar1 & 0xffffffff);
          }
          puVar10 = local_58;
          if (local_58 == (undefined1 *)0x0) {
            puVar10 = local_118;
          }
          *(longlong *)(puVar10 + lVar16 * 8) = lVar9;
          puVar17 = local_130;
        }
      }
      plVar4 = local_138;
      uVar18 = uVar18 & ~(uint)uVar13;
      puVar8 = *(uint **)(param_1 + 0x260);
      if (*(uint **)(param_1 + 0x260) == (uint *)0x0) {
        puVar8 = puVar17;
      }
      iVar3 = *(int *)(param_1 + 0x268);
      iVar6 = (int)uVar14;
      lVar9 = (longlong)iVar6;
      uVar7 = puVar8[lVar9] & uVar18;
      if (uVar7 == 0) {
        iVar11 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar11 = iVar3 + -1;
        }
        iVar11 = iVar11 >> 5;
        iVar15 = iVar15 + 0x20;
        iVar12 = iVar11;
        if (iVar11 < iVar6) {
          iVar12 = iVar6;
        }
        if (iVar6 < iVar11) {
          lVar16 = 0;
          do {
            uVar7 = puVar8[lVar9 + lVar16 + 1];
            if (uVar7 != 0) {
              uVar14 = (ulonglong)(iVar6 + (int)lVar16 + 1);
              uVar18 = 0xffffffff;
              goto LAB_14132ea30;
            }
            iVar15 = iVar15 + 0x20;
            lVar16 = lVar16 + 1;
          } while (iVar12 - lVar9 != lVar16);
          uVar18 = 0xffffffff;
          iVar6 = iVar12;
        }
        uVar14 = (ulonglong)(iVar6 + 1);
        iVar6 = iVar3;
      }
      else {
LAB_14132ea30:
        uVar13 = (ulonglong)(-uVar7 & uVar7);
        uVar1 = uVar13 * 2 + 1;
        lVar9 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
          }
        }
        iVar6 = (iVar15 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
        if (iVar3 <= iVar6) {
          iVar6 = iVar3;
        }
      }
    } while (iVar6 != iVar2);
    lVar9 = (longlong)(int)local_50;
    puVar10 = local_118;
    if (local_58 != (undefined1 *)0x0) {
      puVar10 = local_58;
    }
    if (lVar9 != 0) {
      lVar16 = 0;
      do {
        uVar5 = *(undefined8 *)(puVar10 + lVar16);
        local_128 = *plVar4;
        if ((local_128 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
        }
        FUN_14132e80e(uVar5,&local_128);
        lVar16 = lVar16 + 8;
      } while (lVar9 * 8 != lVar16);
    }
    if (local_58 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_14132ebaf:
  if ((local_48 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14132ebe8 FUN_14132ebe8 body=3946 status=ok
// SIG undefined FUN_14132ebe8(void)

void FUN_14132ebe8(longlong param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong *plVar7;
  byte bVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  ulonglong uVar12;
  uint uVar13;
  int iVar14;
  DWORD DVar15;
  DWORD DVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  undefined4 *puVar21;
  uint *puVar22;
  undefined8 uVar23;
  undefined ***pppuVar24;
  uint *puVar25;
  undefined1 *puVar26;
  ulonglong uVar27;
  undefined8 *puVar28;
  undefined1 auStack_358 [32];
  wchar_t **local_338;
  undefined8 local_330;
  undefined4 local_328;
  undefined8 *local_320;
  undefined8 local_318;
  undefined8 uStack_310;
  double local_308;
  double local_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  longlong *local_2b8;
  longlong *local_2b0 [2];
  undefined1 local_2a0 [16];
  undefined8 local_290;
  longlong *local_288;
  longlong *local_280 [2];
  undefined1 local_270 [16];
  undefined1 local_260 [4];
  undefined1 local_25c [4];
  longlong *local_258 [2];
  undefined8 local_248;
  longlong *local_240;
  longlong local_238 [3];
  longlong *local_220 [2];
  longlong *local_210 [2];
  ulonglong local_200;
  undefined1 local_1f8 [16];
  undefined1 local_1e8 [8];
  longlong *local_1e0;
  undefined8 local_1d8;
  longlong *local_1d0;
  wchar_t **local_1c8;
  undefined ***local_1c0;
  longlong *local_1b8;
  undefined4 local_1b0;
  char *local_1a8;
  undefined4 local_1a0;
  undefined1 local_19c;
  wchar_t *local_88;
  undefined4 local_80;
  undefined ***local_78 [2];
  undefined **local_68;
  longlong local_60;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_358;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c8442bc) && (FUN_144b3d300(&DAT_14c8442bc), DAT_14c8442bc == -1)) {
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    DAT_14c8442b8 = FUN_14054d46e(&DAT_14c846b20,L"nullrhi");
    _Init_thread_footer(&DAT_14c8442bc);
  }
  bVar8 = DAT_14c8442b8;
  if (DAT_14c872bf0 == '\x01') {
    if (DAT_14c872bf1 != '\x01') goto LAB_14132f4cc;
    bVar8 = DAT_14c8442b8 & 1;
  }
  if (bVar8 != 0) goto LAB_14132f4cc;
  lVar17 = FUN_1402ad3be(DAT_14cb0d2b0,param_1,1);
  if (lVar17 == 0) {
    local_1a8 = "Blueprint";
    local_1a0 = 9;
    local_19c = 0;
    uVar13 = FUN_14001a6c0(&local_1a8,1);
    local_1c8 = (wchar_t **)(ulonglong)uVar13;
    FUN_14276766e(&local_1a8);
    local_88 = L"DrawMaterialToRenderTarget_InvalidWorldContextObject";
    local_80 = 0x34;
    FUN_1446e940c(&local_1d8,&local_88);
    local_88 = L"KismetRenderingLibrary";
    local_80 = 0x16;
    FUN_1446e940c(local_210,&local_88);
    local_88 = L"DrawMaterialToRenderTarget: WorldContextObject is not valid.";
    local_80 = 0x3c;
    FUN_140208c1e(&local_1b8,local_210,&local_1d8,&local_88);
    FUN_1427679d4(&local_1a8,local_1e8,&local_1b8);
    if (local_1e0 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_1e0 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*local_1e0)(local_1e0);
        LOCK();
        piVar1 = (int *)((longlong)local_1e0 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_1e0 + 0x10))(local_1e0);
        }
      }
    }
    if (local_1b8 != (longlong *)0x0) {
      (**(code **)(*local_1b8 + 0x10))();
    }
  }
  else {
    if (param_3 == 0) {
      local_1a8 = "Blueprint";
      local_1a0 = 9;
      local_19c = 0;
      uVar13 = FUN_14001a6c0(&local_1a8,1);
      local_200 = (ulonglong)uVar13;
      FUN_14276766e(&local_1a8);
      if (param_1 == 0) {
        FUN_140056680(local_238,&DAT_149e01fe8);
      }
      else {
        local_238[0] = 0;
        local_238[1] = 0;
        FUN_1401031ac(param_1,0);
      }
      FUN_140233b1a(local_220,local_238);
      local_88 = L"DrawMaterialToRenderTarget_InvalidMaterial";
      local_80 = 0x2a;
      FUN_1446e940c(local_25c,&local_88);
      local_88 = L"KismetRenderingLibrary";
      local_80 = 0x16;
      FUN_1446e940c(local_260,&local_88);
      local_88 = L"DrawMaterialToRenderTarget[{0}]: Material must be non-null.";
      local_80 = 0x3b;
      FUN_140208c1e(local_258,local_260,local_25c,&local_88);
      FUN_14023409e(&local_248,local_258,1);
      local_88 = (wchar_t *)CONCAT44(local_88._4_4_,4);
      FUN_14023423e(local_78,local_220);
      local_1c0 = &local_68;
      local_1c8 = &local_88;
      FUN_14010d304(&local_1b8);
      local_1d8 = local_248;
      local_1d0 = local_240;
      if (local_240 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_240 + 1) = (int)local_240[1] + 1;
        UNLOCK();
      }
      FUN_14010c016(local_210,&local_1d8,&local_1b8);
      FUN_14007f2db(local_1b8,local_1b0);
      if (local_1b8 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      if (local_78[0] != (undefined ***)0x0) {
        (*(code *)(*local_78[0])[2])();
      }
      if (local_240 != (longlong *)0x0) {
        LOCK();
        plVar7 = local_240 + 1;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)*plVar7 == 0) {
          (**(code **)*local_240)(local_240);
          LOCK();
          piVar1 = (int *)((longlong)local_240 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_240 + 0x10))(local_240);
          }
        }
      }
      if (local_220[0] != (longlong *)0x0) {
        (**(code **)(*local_220[0] + 0x10))();
      }
      puVar26 = local_1f8;
    }
    else if (param_2 == 0) {
      local_1a8 = "Blueprint";
      local_1a0 = 9;
      local_19c = 0;
      uVar13 = FUN_14001a6c0(&local_1a8,1);
      local_200 = (ulonglong)uVar13;
      FUN_14276766e(&local_1a8);
      if (param_1 == 0) {
        FUN_140056680(local_238,&DAT_149e01fe8);
      }
      else {
        local_238[0] = 0;
        local_238[1] = 0;
        FUN_1401031ac(param_1,0);
      }
      FUN_140233b1a(local_280,local_238);
      local_88 = L"DrawMaterialToRenderTarget_InvalidTextureRenderTarget";
      local_80 = 0x35;
      FUN_1446e940c(local_25c,&local_88);
      local_88 = L"KismetRenderingLibrary";
      local_80 = 0x16;
      FUN_1446e940c(local_260,&local_88);
      local_88 = L"DrawMaterialToRenderTarget[{0}]: TextureRenderTarget must be non-null.";
      local_80 = 0x46;
      FUN_140208c1e(local_258,local_260,local_25c,&local_88);
      FUN_14023409e(&local_290,local_258,1);
      local_88 = (wchar_t *)CONCAT44(local_88._4_4_,4);
      FUN_14023423e(local_78,local_280);
      local_1c0 = &local_68;
      local_1c8 = &local_88;
      FUN_14010d304(&local_1b8);
      local_1d8 = local_290;
      local_1d0 = local_288;
      if (local_288 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_288 + 1) = (int)local_288[1] + 1;
        UNLOCK();
      }
      FUN_14010c016(local_210,&local_1d8,&local_1b8);
      FUN_14007f2db(local_1b8,local_1b0);
      if (local_1b8 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      if (local_78[0] != (undefined ***)0x0) {
        (*(code *)(*local_78[0])[2])();
      }
      if (local_288 != (longlong *)0x0) {
        LOCK();
        plVar7 = local_288 + 1;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)*plVar7 == 0) {
          (**(code **)*local_288)(local_288);
          LOCK();
          piVar1 = (int *)((longlong)local_288 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_288 + 0x10))(local_288);
          }
        }
      }
      if (local_280[0] != (longlong *)0x0) {
        (**(code **)(*local_280[0] + 0x10))();
      }
      puVar26 = local_270;
    }
    else {
      lVar18 = FUN_1447b4020(param_2);
      if (lVar18 != 0) {
        FUN_147b99afc(lVar17);
        lVar19 = FUN_1447b4020(param_2);
        lVar20 = FUN_1460d98a0(lVar17);
        lVar18 = lVar19 + 0x50;
        if (lVar19 == 0) {
          lVar18 = 0;
        }
        local_338 = (wchar_t **)CONCAT44(local_338._4_4_,(uint)*(byte *)(lVar17 + 0x150));
        local_328 = 0x3f800000;
        local_330 = (undefined8 *)((ulonglong)local_330._4_4_ << 0x20);
        FUN_1401fac16(&local_1a8,lVar18,0,lVar17);
        uVar23 = DAT_14c8463e8;
        uVar5 = *(undefined4 *)(param_2 + 0x140);
        uVar6 = *(undefined4 *)(param_2 + 0x144);
        *(undefined8 *)(lVar20 + 0x380) = DAT_14c8463e0;
        *(undefined8 *)(lVar20 + 0x388) = uVar23;
        uVar11 = DAT_14c8463d8._4_4_;
        uVar10 = (undefined4)DAT_14c8463d8;
        uVar9 = DAT_14c8463d0._4_4_;
        *(undefined4 *)(lVar20 + 0x370) = (undefined4)DAT_14c8463d0;
        *(undefined4 *)(lVar20 + 0x374) = uVar9;
        *(undefined4 *)(lVar20 + 0x378) = uVar10;
        *(undefined4 *)(lVar20 + 0x37c) = uVar11;
        *(undefined4 *)(lVar20 + 0x40) = uVar5;
        *(undefined4 *)(lVar20 + 0x44) = uVar6;
        *(undefined4 *)(lVar20 + 0x88) = uVar5;
        *(undefined4 *)(lVar20 + 0x8c) = uVar6;
        *(undefined8 *)(lVar20 + 0x2e8) = 0;
        *(char ***)(lVar20 + 0x2e0) = &local_1a8;
        FUN_14007fbbc(lVar20);
        lVar17 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        iVar14 = *(int *)(lVar17 + 0xc60);
        if (DAT_14c86a9fc == 0) {
          if (iVar14 != 2) {
            if (iVar14 != 1) goto LAB_14132f5ca;
            DVar15 = FUN_140ad26c0();
            DVar16 = GetCurrentThreadId();
            if (DVar15 == DVar16) goto LAB_14132f5cf;
            goto LAB_14132f602;
          }
LAB_14132f5cf:
          FUN_14129010a(lVar19 + 0x60,&DAT_14ca85100);
        }
        else {
LAB_14132f5ca:
          if (iVar14 == 0x10) goto LAB_14132f5cf;
LAB_14132f602:
          if (DAT_14ca9a438 == '\0') {
            if ((DAT_14c86a9f8 != '\x01') || (iVar14 = *(int *)(lVar17 + 0xc60), iVar14 == 2))
            goto LAB_14132f5cf;
            if (iVar14 == 1) {
              DVar15 = FUN_140ad26c0();
              DVar16 = GetCurrentThreadId();
              if (DVar15 == DVar16) goto LAB_14132f5cf;
            }
          }
          if (DAT_14ca9a43c == 0) {
            puVar3 = (undefined8 *)
                     (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x308);
            puVar22 = (uint *)*puVar3;
            if (puVar22 != (uint *)0x0) goto LAB_14132f7f8;
            while( true ) {
              uVar13 = *(uint *)(*(longlong *)
                                  ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                                + 0x318);
              if ((uVar13 & 1) == 0) {
                *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         ) = uVar13 | 1;
                __tlregdtor(&LAB_1435546e9);
              }
              lVar17 = *(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
              puVar21 = *(undefined4 **)(lVar17 + 0x310);
              *(undefined8 *)(lVar17 + 0x310) = 0;
              if (puVar21 == (undefined4 *)0x0) {
                puVar21 = _aligned_malloc(0x10000,0x10000);
              }
              *puVar21 = 0xffffffff;
              *(undefined4 **)(puVar21 + 0x10) = puVar21 + 0x16;
              puVar21[0x12] = 0;
              *puVar3 = puVar21;
              FUN_140217a48(puVar3);
              puVar22 = (uint *)*puVar3;
LAB_14132f7f8:
              puVar28 = (undefined8 *)(*(longlong *)(puVar22 + 0x10) + 7U & 0xfffffffffffffff8);
              puVar25 = (uint *)(puVar28 + 0x16);
              uVar13 = puVar22[0x12];
              if (puVar25 <= puVar22 + 0x4000) break;
              while( true ) {
                *(uint **)(puVar22 + 0x10) = puVar22 + 0x4000;
                LOCK();
                uVar4 = *puVar22;
                *puVar22 = *puVar22 + uVar13 + 1;
                UNLOCK();
                if ((uVar4 ^ uVar13) != 0xffffffff) break;
                puVar22 = (uint *)*puVar3;
                *puVar22 = 0xffffffff;
                *(uint **)(puVar22 + 0x10) = puVar22 + 0x16;
                puVar22[0x12] = 0;
                *puVar3 = puVar22;
                puVar28 = (undefined8 *)((longlong)puVar22 + 0x5fU & 0xfffffffffffffff8);
                puVar25 = (uint *)(puVar28 + 0x16);
                uVar13 = 0;
                if (puVar25 <= puVar22 + 0x4000) {
                  uVar13 = 1;
                  goto LAB_14132f87a;
                }
              }
            }
            uVar13 = uVar13 + 1;
LAB_14132f87a:
            *(uint **)(puVar22 + 0x10) = puVar25;
            puVar22[0x12] = uVar13;
            iVar14 = 0;
            FUN_1447247dc(puVar28,0);
            *puVar28 = &PTR_FUN_14a9b19f8;
            puVar28[0x15] = lVar19;
            if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
              uVar13 = DAT_14c7585c8 >> 10 & 3;
              if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar13 < 2) {
                uVar27 = (ulonglong)(byte)(&DAT_149e38edc)[uVar13];
                iVar14 = 0;
              }
              else {
                uVar27 = 2;
              }
            }
            else {
              iVar14 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                       *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
              uVar27 = 5;
            }
            if (*(code **)(puVar28[0xe] + 0x18) != FUN_144713626) {
              (**(code **)(puVar28[0xe] + 0x18))(puVar28 + 0xe,puVar28 + 9);
            }
            puVar28[0xe] = LowLevelTasks::
                           TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                           TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                           ::vftable;
            puVar28[9] = puVar28;
            puVar28[10] = puVar28;
            lVar17 = *(longlong *)
                      (*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8);
            if (lVar17 == 0) {
              uVar12 = 1;
              if ((char)uVar27 != '\x06') {
                uVar12 = uVar27;
              }
              uVar27 = uVar12;
              uVar23 = 0;
            }
            else {
              if ((char)uVar27 == '\x06') {
                uVar27 = *(ulonglong *)(lVar17 + 0x38) >> 0x3b;
              }
              uVar23 = *(undefined8 *)(lVar17 + 0x30);
            }
            puVar28[0xf] = uVar23;
            puVar28[0x10] = uVar27 << 0x3b | 0xc00000527800b400;
            *(int *)((longlong)puVar28 + 0x1c) = iVar14;
            if (puVar28 == (undefined8 *)0x0) {
              local_88 = (wchar_t *)CONCAT71(local_88._1_7_,1);
              FUN_1447439e4(0);
            }
            else {
              LOCK();
              *(int *)(puVar28 + 1) = *(int *)(puVar28 + 1) + 1;
              UNLOCK();
              local_88 = (wchar_t *)CONCAT71(local_88._1_7_,1);
              FUN_1447439e4(puVar28);
              LOCK();
              piVar1 = (int *)(puVar28 + 1);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)*puVar28)(puVar28,1);
              }
            }
          }
          else {
            local_338 = &local_88;
            local_78[0] = (undefined ***)0x0;
            local_68 = &PTR_LAB_14a9b1990;
            local_88 = 
            L"譈䠉솃\xe960롪﷓쀱쳃赈ࡁ쳃譈䠁䂋ㄘ䣒\xe0ff䡖\xec83䠠캉튅ࡴ襈\xe8f1ퟞﲪ襈䣰쒃帠쳃坖荈⣬힉襈䣎֍蜢ࡷ襈䠁見\x90"
            ;
            local_60 = lVar19;
            FUN_14005a792(&DAT_14ca9a440,L"FlushDeferredResourceUpdateCommand",&DAT_14cae8ca8);
            if (local_88 != (wchar_t *)0x0) {
              pppuVar24 = local_78[0];
              if (local_78[0] == (undefined ***)0x0) {
                pppuVar24 = &local_68;
              }
              (*(code *)(*pppuVar24)[2])();
            }
          }
        }
        local_320 = &local_2d0;
        local_2d0 = 0x3fe0000000000000;
        local_2c8 = 0x3fe0000000000000;
        local_330 = &local_2e8;
        local_2e8 = DAT_14c846320;
        uStack_2e0 = DAT_14c846328;
        local_338 = (wchar_t **)&local_2f8;
        local_2f8 = 0;
        uStack_2f0 = 0;
        local_300 = (double)*(int *)(param_2 + 0x144);
        local_308 = (double)*(int *)(param_2 + 0x140);
        local_318 = 0;
        uStack_310 = 0;
        local_328 = 0;
        FUN_145bd01e2(lVar20,param_3);
        FUN_14376e4da(&local_1a8,0);
        *(undefined8 *)(lVar20 + 0x2e0) = 0;
        FUN_140768b6e(param_2,0);
        FUN_14010ad76(&local_1a8);
        goto LAB_14132f4cc;
      }
      local_1a8 = "Blueprint";
      local_1a0 = 9;
      local_19c = 0;
      uVar13 = FUN_14001a6c0(&local_1a8,1);
      local_200 = (ulonglong)uVar13;
      FUN_14276766e(&local_1a8);
      if (param_1 == 0) {
        FUN_140056680(local_238,&DAT_149e01fe8);
      }
      else {
        local_238[0] = 0;
        local_238[1] = 0;
        FUN_1401031ac(param_1,0);
      }
      FUN_140233b1a(local_2b0,local_238);
      local_88 = L"DrawMaterialToRenderTarget_ReleasedTextureRenderTarget";
      local_80 = 0x36;
      FUN_1446e940c(local_25c,&local_88);
      local_88 = L"KismetRenderingLibrary";
      local_80 = 0x16;
      FUN_1446e940c(local_260,&local_88);
      local_88 = L"DrawMaterialToRenderTarget[{0}]: render target has been released.";
      local_80 = 0x41;
      FUN_140208c1e(local_258,local_260,local_25c,&local_88);
      FUN_14023409e(&local_2c0,local_258,1);
      local_88 = (wchar_t *)CONCAT44(local_88._4_4_,4);
      FUN_14023423e(local_78,local_2b0);
      local_1c0 = &local_68;
      local_1c8 = &local_88;
      FUN_14010d304(&local_1b8);
      local_1d8 = local_2c0;
      local_1d0 = local_2b8;
      if (local_2b8 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_2b8 + 1) = (int)local_2b8[1] + 1;
        UNLOCK();
      }
      FUN_14010c016(local_210,&local_1d8,&local_1b8);
      FUN_14007f2db(local_1b8,local_1b0);
      if (local_1b8 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      if (local_78[0] != (undefined ***)0x0) {
        (*(code *)(*local_78[0])[2])();
      }
      if (local_2b8 != (longlong *)0x0) {
        LOCK();
        plVar7 = local_2b8 + 1;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)*plVar7 == 0) {
          (**(code **)*local_2b8)(local_2b8);
          LOCK();
          piVar1 = (int *)((longlong)local_2b8 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_2b8 + 0x10))(local_2b8);
          }
        }
      }
      if (local_2b0[0] != (longlong *)0x0) {
        (**(code **)(*local_2b0[0] + 0x10))();
      }
      puVar26 = local_2a0;
    }
    FUN_1427679d4(&local_1a8,puVar26,local_210);
    plVar7 = *(longlong **)(puVar26 + 8);
    if (plVar7 != (longlong *)0x0) {
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
    if (local_210[0] != (longlong *)0x0) {
      (**(code **)(*local_210[0] + 0x10))();
    }
    if (local_258[0] != (longlong *)0x0) {
      (**(code **)(*local_258[0] + 0x10))();
    }
    if (local_238[0] != 0) {
      FUN_1400020a8();
    }
  }
  FUN_1427678c0(&local_1a8);
LAB_14132f4cc:
  if ((local_40 ^ (ulonglong)auStack_358) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14132fb54 FUN_14132fb54 body=1326 status=ok
// SIG undefined FUN_14132fb54(void)

void FUN_14132fb54(longlong param_1,longlong *param_2,undefined8 param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  uint uVar8;
  uint *puVar9;
  longlong lVar10;
  undefined1 *puVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint *puVar16;
  longlong lVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  undefined1 auStack_1b8 [32];
  undefined4 local_198;
  undefined4 local_190;
  undefined4 local_188;
  undefined8 local_180;
  wchar_t *local_178;
  code *local_170;
  undefined1 *local_168;
  code **local_160;
  code *local_158;
  code *local_150;
  uint *local_148;
  longlong *local_140;
  undefined8 local_138;
  longlong local_130;
  undefined8 local_128;
  code *local_120;
  undefined1 local_118 [192];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  local_58 = (undefined1 *)0x0;
  local_50 = 0x1800000000;
  puVar16 = (uint *)(param_1 + 0x250);
  iVar2 = *(int *)(param_1 + 0x268);
  local_140 = param_2;
  local_138 = param_3;
  local_128 = param_3;
  if (iVar2 == 0) {
    uVar18 = 1;
    uVar19 = 0;
    iVar14 = 0;
    iVar7 = 0;
  }
  else {
    puVar9 = *(uint **)(param_1 + 0x260);
    if (*(uint **)(param_1 + 0x260) == (uint *)0x0) {
      puVar9 = puVar16;
    }
    uVar15 = *puVar9;
    if (uVar15 == 0) {
      iVar7 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar7 = iVar2 + -1;
      }
      uVar19 = 0;
      uVar18 = (ulonglong)(uint)(iVar7 >> 5);
      if (iVar7 >> 5 < 1) {
        uVar18 = uVar19;
      }
      iVar14 = 0;
      do {
        if (uVar18 == uVar19) goto LAB_14133004b;
        iVar14 = iVar14 + 0x20;
        uVar15 = puVar9[uVar19 + 1];
        uVar19 = uVar19 + 1;
      } while (uVar15 == 0);
    }
    else {
      uVar19 = 0;
      iVar14 = 0;
    }
    uVar18 = (ulonglong)(-uVar15 & uVar15);
    uVar1 = uVar18 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    iVar7 = (iVar14 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar7) {
      iVar7 = iVar2;
    }
  }
  if (iVar7 != iVar2) {
    uVar15 = 0xffffffff;
    local_148 = puVar16;
    do {
      plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x240) + (longlong)iVar7 * 0x10);
      if (plVar4 != (longlong *)0x0) {
        lVar10 = *local_140;
        if ((lVar10 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar10);
          puVar16 = local_148;
LAB_14132fc89:
          if (DAT_14cad00c8 == 0) {
            local_120 = FUN_144a7958c;
            local_150 = FUN_14081d0ea;
            local_158 = FUN_14081d0ea;
            local_160 = &local_120;
            local_168 = &LAB_1479b7a0c;
            local_170 = (code *)&LAB_1463b464e;
            local_178 = L"Engine";
            local_180 = 0;
            local_188 = 0x10000005;
            local_190 = 8;
            local_198 = 0x110;
            FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8,FUN_1463b462c);
            puVar16 = local_148;
            if (DAT_14cad00c8 == 0) goto LAB_14132fca4;
          }
          if (*(int *)(lVar10 + 0x38) < *(int *)(DAT_14cad00c8 + 0x38)) goto LAB_14132fca4;
          if (*(longlong *)
               (*(longlong *)(lVar10 + 0x30) + (longlong)*(int *)(DAT_14cad00c8 + 0x38) * 8) !=
              DAT_14cad00c8 + 0x30) {
            lVar10 = 0;
          }
        }
        else {
          if (lVar10 != 0) goto LAB_14132fc89;
LAB_14132fca4:
          lVar10 = 0;
        }
        if ((*(int *)(lVar10 + 0x38) <= *(int *)(plVar4[2] + 0x38)) &&
           (*(longlong *)(*(longlong *)(plVar4[2] + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8)
            == lVar10 + 0x30)) {
          FUN_144327f5c(&local_128,plVar4);
          puVar16 = local_148;
        }
        if (DAT_14cabf8d0 == 0) {
          local_120 = FUN_144a7958c;
          local_150 = FUN_14081d0ea;
          local_158 = FUN_142b47bc4;
          local_160 = &local_120;
          local_168 = &LAB_147860ffd;
          local_170 = FUN_1463713dc;
          local_178 = L"Engine";
          local_180 = 0;
          local_188 = 0x10000005;
          local_190 = 0x10;
          local_198 = 0x2b0;
          FUN_14081cfa3(L"/Script/Engine",L"ChildActorBaseComponent",&DAT_14cabf8d0,&DAT_147860ffc);
          puVar16 = local_148;
        }
        if (((*(int *)(DAT_14cabf8d0 + 0x38) <= *(int *)(plVar4[2] + 0x38)) &&
            (*(longlong *)
              (*(longlong *)(plVar4[2] + 0x30) + (longlong)*(int *)(DAT_14cabf8d0 + 0x38) * 8) ==
             DAT_14cabf8d0 + 0x30)) &&
           (lVar10 = (**(code **)(*plVar4 + 0x5d8))(plVar4), uVar1 = local_50, puVar16 = local_148,
           lVar10 != 0)) {
          lVar17 = (longlong)(int)local_50;
          uVar8 = (int)local_50 + 1;
          local_50 = CONCAT44(local_50._4_4_,uVar8);
          if (local_50._4_4_ < uVar8) {
            FUN_1470e9d72(local_118,uVar1 & 0xffffffff);
          }
          puVar11 = local_58;
          if (local_58 == (undefined1 *)0x0) {
            puVar11 = local_118;
          }
          *(longlong *)(puVar11 + lVar17 * 8) = lVar10;
          puVar16 = local_148;
        }
      }
      uVar6 = local_138;
      uVar15 = uVar15 & ~(uint)uVar18;
      puVar9 = *(uint **)(param_1 + 0x260);
      if (*(uint **)(param_1 + 0x260) == (uint *)0x0) {
        puVar9 = puVar16;
      }
      iVar3 = *(int *)(param_1 + 0x268);
      iVar7 = (int)uVar19;
      lVar10 = (longlong)iVar7;
      uVar8 = puVar9[lVar10] & uVar15;
      if (uVar8 == 0) {
        iVar12 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar12 = iVar3 + -1;
        }
        iVar12 = iVar12 >> 5;
        iVar14 = iVar14 + 0x20;
        iVar13 = iVar12;
        if (iVar12 < iVar7) {
          iVar13 = iVar7;
        }
        if (iVar7 < iVar12) {
          lVar17 = 0;
          do {
            uVar8 = puVar9[lVar10 + lVar17 + 1];
            if (uVar8 != 0) {
              uVar19 = (ulonglong)(iVar7 + (int)lVar17 + 1);
              uVar15 = 0xffffffff;
              goto LAB_14132fdf1;
            }
            iVar14 = iVar14 + 0x20;
            lVar17 = lVar17 + 1;
          } while (iVar13 - lVar10 != lVar17);
          uVar15 = 0xffffffff;
          iVar7 = iVar13;
        }
        uVar19 = (ulonglong)(iVar7 + 1);
        puVar16 = local_148;
        iVar7 = iVar3;
      }
      else {
LAB_14132fdf1:
        uVar18 = (ulonglong)(-uVar8 & uVar8);
        uVar1 = uVar18 * 2 + 1;
        lVar10 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
          }
        }
        iVar7 = (iVar14 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
        if (iVar3 <= iVar7) {
          iVar7 = iVar3;
        }
      }
    } while (iVar7 != iVar2);
    lVar10 = (longlong)(int)local_50;
    puVar11 = local_118;
    if (local_58 != (undefined1 *)0x0) {
      puVar11 = local_58;
    }
    if (lVar10 != 0) {
      lVar17 = 0;
      do {
        uVar5 = *(undefined8 *)(puVar11 + lVar17);
        local_130 = *local_140;
        if ((local_130 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
        }
        FUN_14132fb54(uVar5,&local_130,uVar6);
        lVar17 = lVar17 + 8;
      } while (lVar10 * 8 != lVar17);
    }
    if (local_58 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_14133004b:
  if ((local_48 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141330084 FUN_141330084 body=1010 status=ok
// SIG undefined FUN_141330084(void)

void FUN_141330084(longlong param_1,longlong *param_2,undefined8 param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  uint uVar8;
  uint *puVar9;
  longlong lVar10;
  undefined1 *puVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  uint *puVar15;
  ulonglong uVar16;
  int iVar17;
  uint uVar18;
  ulonglong uVar19;
  undefined1 auStack_1b8 [32];
  undefined4 local_198;
  undefined4 local_190;
  undefined4 local_188;
  undefined8 local_180;
  wchar_t *local_178;
  code *local_170;
  undefined1 *local_168;
  code **local_160;
  code *local_158;
  code *local_150;
  longlong *local_148;
  undefined8 local_140;
  uint *local_138;
  longlong local_130;
  undefined8 local_128;
  code *local_120;
  undefined1 local_118 [192];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  local_58 = (undefined1 *)0x0;
  local_50 = 0x1800000000;
  puVar15 = (uint *)(param_1 + 0x250);
  iVar2 = *(int *)(param_1 + 0x268);
  local_128 = param_3;
  if (iVar2 == 0) {
    uVar19 = 1;
    uVar16 = 0;
    iVar17 = 0;
    iVar7 = 0;
  }
  else {
    puVar9 = *(uint **)(param_1 + 0x260);
    if (*(uint **)(param_1 + 0x260) == (uint *)0x0) {
      puVar9 = puVar15;
    }
    uVar18 = *puVar9;
    if (uVar18 == 0) {
      iVar7 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar7 = iVar2 + -1;
      }
      uVar16 = 0;
      uVar19 = (ulonglong)(uint)(iVar7 >> 5);
      if (iVar7 >> 5 < 1) {
        uVar19 = uVar16;
      }
      iVar17 = 0;
      do {
        if (uVar19 == uVar16) goto LAB_141330440;
        iVar17 = iVar17 + 0x20;
        uVar18 = puVar9[uVar16 + 1];
        uVar16 = uVar16 + 1;
      } while (uVar18 == 0);
    }
    else {
      uVar16 = 0;
      iVar17 = 0;
    }
    uVar19 = (ulonglong)(-uVar18 & uVar18);
    uVar1 = uVar19 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    iVar7 = (iVar17 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar7) {
      iVar7 = iVar2;
    }
  }
  if (iVar7 != iVar2) {
    uVar18 = 0xffffffff;
    local_148 = param_2;
    local_140 = param_3;
    local_138 = puVar15;
    do {
      plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x240) + (longlong)iVar7 * 0x10);
      if (plVar4 != (longlong *)0x0) {
        FUN_144327f5c(&local_128,plVar4);
        if (DAT_14cabf8d0 == 0) {
          local_120 = FUN_144a7958c;
          local_150 = FUN_14081d0ea;
          local_158 = FUN_142b47bc4;
          local_160 = &local_120;
          local_168 = &LAB_147860ffd;
          local_170 = FUN_1463713dc;
          local_178 = L"Engine";
          local_180 = 0;
          local_188 = 0x10000005;
          local_190 = 0x10;
          local_198 = 0x2b0;
          FUN_14081cfa3(L"/Script/Engine",L"ChildActorBaseComponent",&DAT_14cabf8d0,&DAT_147860ffc);
        }
        if (((*(int *)(DAT_14cabf8d0 + 0x38) <= *(int *)(plVar4[2] + 0x38)) &&
            (*(longlong *)
              (*(longlong *)(plVar4[2] + 0x30) + (longlong)*(int *)(DAT_14cabf8d0 + 0x38) * 8) ==
             DAT_14cabf8d0 + 0x30)) &&
           (lVar10 = (**(code **)(*plVar4 + 0x5d8))(plVar4), uVar1 = local_50, lVar10 != 0)) {
          lVar14 = (longlong)(int)local_50;
          uVar8 = (int)local_50 + 1;
          local_50 = CONCAT44(local_50._4_4_,uVar8);
          if (local_50._4_4_ < uVar8) {
            FUN_1470e9d72(local_118,uVar1 & 0xffffffff);
          }
          puVar11 = local_58;
          if (local_58 == (undefined1 *)0x0) {
            puVar11 = local_118;
          }
          *(longlong *)(puVar11 + lVar14 * 8) = lVar10;
          puVar15 = local_138;
        }
      }
      uVar6 = local_140;
      plVar4 = local_148;
      uVar18 = uVar18 & ~(uint)uVar19;
      puVar9 = *(uint **)(param_1 + 0x260);
      if (*(uint **)(param_1 + 0x260) == (uint *)0x0) {
        puVar9 = puVar15;
      }
      iVar3 = *(int *)(param_1 + 0x268);
      iVar7 = (int)uVar16;
      lVar10 = (longlong)iVar7;
      uVar8 = puVar9[lVar10] & uVar18;
      if (uVar8 == 0) {
        iVar12 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar12 = iVar3 + -1;
        }
        iVar12 = iVar12 >> 5;
        iVar17 = iVar17 + 0x20;
        iVar13 = iVar12;
        if (iVar12 < iVar7) {
          iVar13 = iVar7;
        }
        if (iVar7 < iVar12) {
          lVar14 = 0;
          do {
            uVar8 = puVar9[lVar10 + lVar14 + 1];
            if (uVar8 != 0) {
              uVar16 = (ulonglong)(iVar7 + (int)lVar14 + 1);
              uVar18 = 0xffffffff;
              goto LAB_1413302b6;
            }
            iVar17 = iVar17 + 0x20;
            lVar14 = lVar14 + 1;
          } while (iVar13 - lVar10 != lVar14);
          uVar18 = 0xffffffff;
          iVar7 = iVar13;
        }
        uVar16 = (ulonglong)(iVar7 + 1);
        iVar7 = iVar3;
      }
      else {
LAB_1413302b6:
        uVar19 = (ulonglong)(-uVar8 & uVar8);
        uVar1 = uVar19 * 2 + 1;
        lVar10 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
          }
        }
        iVar7 = (iVar17 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
        if (iVar3 <= iVar7) {
          iVar7 = iVar3;
        }
      }
    } while (iVar7 != iVar2);
    lVar10 = (longlong)(int)local_50;
    puVar11 = local_118;
    if (local_58 != (undefined1 *)0x0) {
      puVar11 = local_58;
    }
    if (lVar10 != 0) {
      lVar14 = 0;
      do {
        uVar5 = *(undefined8 *)(puVar11 + lVar14);
        local_130 = *plVar4;
        if ((local_130 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
        }
        FUN_141330084(uVar5,&local_130,uVar6);
        lVar14 = lVar14 + 8;
      } while (lVar10 * 8 != lVar14);
    }
    if (local_58 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_141330440:
  if ((local_48 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141330478 FUN_141330478 body=607 status=ok
// SIG undefined FUN_141330478(void)

void FUN_141330478(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined1 auStack_128 [32];
  undefined1 local_108 [8];
  longlong *local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8 [12];
  undefined4 local_88;
  undefined4 local_84;
  undefined1 local_80;
  undefined1 local_7f;
  undefined8 local_7c;
  undefined2 local_68;
  undefined8 local_60;
  int local_58;
  undefined4 local_54;
  undefined1 local_50;
  longlong local_48;
  undefined1 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_128;
  uVar4 = *param_2;
  local_f8 = *(undefined8 *)(param_1 + 0x10);
  uStack_f0 = *(undefined8 *)(param_1 + 0x18);
  puVar7 = (undefined8 *)(param_1 + 0x20);
  puVar9 = local_e8;
  for (lVar6 = 0xc; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar9 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar9 = puVar9 + 1;
  }
  local_88 = *(undefined4 *)(param_1 + 0x80);
  local_84 = *(undefined4 *)(param_1 + 0x84);
  local_80 = *(undefined1 *)(param_1 + 0x88);
  local_7f = *(undefined1 *)(param_1 + 0x89);
  local_7c = *(undefined8 *)(param_1 + 0x8c);
  local_68 = *(undefined2 *)(param_1 + 0xa0);
  local_60 = 0;
  iVar3 = *(int *)(param_1 + 0xb0);
  uVar5 = *(undefined8 *)(param_1 + 0xa8);
  local_58 = iVar3;
  if (iVar3 == 0) {
    local_54 = 0;
  }
  else {
    FUN_140d27400(&local_60,iVar3,0);
    FUN_144796a68(local_60,uVar5,iVar3);
  }
  local_50 = *(undefined1 *)(param_1 + 0xb8);
  local_48 = *(longlong *)(param_1 + 0xc0);
  if (local_48 != 0) {
    *(int *)(local_48 + 0x108) = *(int *)(local_48 + 0x108) + 1;
  }
  local_40 = *(undefined1 *)(param_1 + 200);
  FUN_1413306d8(uVar4,&local_100);
  if (local_100 == (longlong *)0x0) {
    FUN_1403c747e(*param_2,local_108,*(undefined8 *)(param_1 + 0x10));
    FUN_1403c75f4(&local_100,local_108);
    FUN_144a61ac8(local_108);
    plVar8 = local_100;
    if (local_100 == (longlong *)0x0) goto LAB_1413305c4;
  }
  else {
    *(undefined1 *)(param_1 + 0xd1) = 1;
    plVar8 = local_100;
  }
  *(int *)(plVar8 + 0x21) = (int)plVar8[0x21] + -1;
  if (((int)plVar8[0x26] < 1) && (FUN_1400847bc(plVar8 + 0x17,0), (int)plVar8[0x21] == 0)) {
    FUN_140087e46(plVar8);
    if (*plVar8 != -1) {
      if (DAT_14cb259f8 == 0) goto LAB_1413305c4;
      FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40),plVar8);
    }
    if (DAT_14cb259f8 != 0) {
      FUN_14008869e(*(undefined8 *)(DAT_14cb259f8 + 0x30),plVar8);
    }
  }
LAB_1413305c4:
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
  if ((local_38 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1413306d8 FUN_1413306d8 body=961 status=ok
// SIG undefined FUN_1413306d8(void)

longlong * FUN_1413306d8(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  cVar4 = FUN_14002b5e0(*param_3,"Default",7);
  if ((cVar4 == '\0') && (*param_3 != 0)) {
    plVar6 = *(longlong **)(param_1 + 0x120);
    iVar2 = *(int *)(param_1 + 0x128);
    lVar7 = (longlong)iVar2;
    if (lVar7 != 0) {
      lVar5 = lVar7 * 0xc0;
      plVar10 = plVar6;
      do {
        if (*plVar10 == *param_3) {
          if (plVar10 != (longlong *)0x0) goto LAB_141330768;
          break;
        }
        plVar10 = plVar10 + 0x18;
        lVar5 = lVar5 + -0xc0;
      } while (lVar5 != 0);
    }
    *(uint *)(param_1 + 0x128) = iVar2 + 1U;
    if (*(uint *)(param_1 + 300) < iVar2 + 1U) {
      FUN_14084a9a4((undefined8 *)(param_1 + 0x120),iVar2);
      plVar6 = *(longlong **)(param_1 + 0x120);
    }
    plVar10 = plVar6 + lVar7 * 0x18;
    lVar5 = param_3[1];
    plVar1 = plVar6 + lVar7 * 0x18;
    *plVar1 = *param_3;
    plVar1[1] = lVar5;
    plVar8 = param_3 + 2;
    plVar9 = plVar1 + 2;
    for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
      *plVar9 = *plVar8;
      plVar8 = plVar8 + 1;
      plVar9 = plVar9 + 1;
    }
    *(int *)(plVar1 + 0xe) = (int)param_3[0xe];
    *(undefined4 *)((longlong)plVar1 + 0x74) = *(undefined4 *)((longlong)param_3 + 0x74);
    *(char *)(plVar1 + 0xf) = (char)param_3[0xf];
    *(undefined1 *)((longlong)plVar1 + 0x79) = *(undefined1 *)((longlong)param_3 + 0x79);
    *(undefined8 *)((longlong)plVar1 + 0x7c) = *(undefined8 *)((longlong)param_3 + 0x7c);
    *(short *)(plVar1 + 0x12) = (short)param_3[0x12];
    plVar1[0x13] = 0;
    iVar2 = (int)param_3[0x14];
    lVar5 = param_3[0x13];
    *(int *)(plVar1 + 0x14) = iVar2;
    if (iVar2 == 0) {
      *(undefined4 *)((longlong)plVar10 + 0xa4) = 0;
    }
    else {
      FUN_140d27400(plVar6 + lVar7 * 0x18 + 0x13,iVar2,0);
      FUN_144796a68(plVar6[lVar7 * 0x18 + 0x13],lVar5,iVar2);
    }
    *(char *)(plVar10 + 0x15) = (char)param_3[0x15];
    lVar7 = param_3[0x16];
    plVar10[0x16] = lVar7;
    if (lVar7 != 0) {
      *(int *)(lVar7 + 0x108) = *(int *)(lVar7 + 0x108) + 1;
    }
    *(char *)(plVar10 + 0x17) = (char)param_3[0x17];
    FUN_1400021e4(plVar10,local_58);
    FUN_1403c7a68(param_1,plVar10,local_58);
    if (local_58[0] != 0) {
      FUN_1400020a8();
    }
    lVar7 = plVar10[0x16];
    *param_2 = lVar7;
    if (lVar7 != 0) {
      *(int *)(lVar7 + 0x108) = *(int *)(lVar7 + 0x108) + 1;
    }
  }
  else {
LAB_141330768:
    if (((((*(longlong **)(param_1 + 0x20) == (longlong *)0x0) || (*(int *)(param_1 + 0x1c) == 0))
         || (uVar3 = *(uint *)(param_1 + 0x18), (int)uVar3 < 0)) ||
        ((DAT_14c9647dc <= (int)uVar3 ||
         (lVar7 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8), lVar7 == 0)))) ||
       ((*(int *)(lVar7 + 0x10) != *(int *)(param_1 + 0x1c) ||
        (((*(uint *)(lVar7 + 8) & 0x10200000) != 0 ||
         (lVar7 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x30))(), lVar7 == 0)))))) {
      *param_2 = 0;
    }
    else {
      if ((*(longlong **)(param_1 + 0x20) == (longlong *)0x0) || (*(int *)(param_1 + 0x1c) == 0)) {
LAB_1413309ac:
        lVar7 = 0;
      }
      else {
        uVar3 = *(uint *)(param_1 + 0x18);
        lVar7 = 0;
        if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) {
          lVar7 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
          if ((lVar7 == 0) ||
             ((*(int *)(lVar7 + 0x10) != *(int *)(param_1 + 0x1c) ||
              ((*(uint *)(lVar7 + 8) & 0x10200000) != 0)))) goto LAB_1413309ac;
          lVar7 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x30))();
        }
      }
      local_48 = *(undefined8 *)(lVar7 + 0x18);
      FUN_1400021e4(&local_48,local_58);
      *param_2 = 0;
      if (local_58[0] != 0) {
        FUN_1400020a8();
      }
    }
  }
  plVar6 = (longlong *)param_3[0x16];
  if (plVar6 == (longlong *)0x0) goto LAB_1413307d1;
  *(int *)(plVar6 + 0x21) = (int)plVar6[0x21] + -1;
  if (((int)plVar6[0x26] < 1) && (FUN_1400847bc(plVar6 + 0x17,0), (int)plVar6[0x21] == 0)) {
    FUN_140087e46(plVar6);
    if (*plVar6 != -1) {
      if (DAT_14cb259f8 == 0) goto LAB_141330a12;
      FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40),plVar6);
    }
    if (DAT_14cb259f8 != 0) {
      FUN_14008869e(*(undefined8 *)(DAT_14cb259f8 + 0x30),plVar6);
    }
  }
LAB_141330a12:
  param_3[0x16] = 0;
LAB_1413307d1:
  if (param_3[0x13] != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 141330a9a FUN_141330a9a body=304 status=ok
// SIG undefined FUN_141330a9a(void)

void FUN_141330a9a(undefined4 param_1)

{
  int *piVar1;
  byte bVar2;
  uint uVar3;
  bool bVar4;
  undefined1 auStack_c8 [40];
  undefined **local_a0;
  code *local_98;
  code *local_90;
  code *local_88;
  code *local_80;
  code *local_78;
  code *local_70;
  code *local_68;
  code *local_60;
  undefined8 *local_58;
  longlong lStack_50;
  undefined8 local_48;
  longlong lStack_40;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  bVar4 = DAT_14c9498f0 != 0;
  uVar3 = (uint)DAT_14c951760;
  bVar2 = FUN_141330bcb();
  local_a0 = &PTR_FUN_149e88ca0;
  local_58 = (undefined8 *)0x0;
  lStack_50 = 0;
  local_48 = 0;
  lStack_40 = 0;
  local_38 = 0;
  local_98 = FUN_1427e4308;
  local_90 = FUN_1427e514a;
  local_88 = FUN_1427e518e;
  local_80 = FUN_140ec6a48;
  local_78 = FUN_1427e5dac;
  local_70 = FUN_1427e6cce;
  local_68 = FUN_1427e6d12;
  local_60 = FUN_1427e7a08;
  FUN_1405bceea();
  FUN_141330da2(&local_a0,param_1,(uint)(bVar2 ^ 1) + (uint)bVar4 * 8 + uVar3 * 4);
  local_a0 = &PTR_FUN_149e88ca0;
  if (lStack_40 != 0) {
    FUN_1400020a8();
  }
  if (lStack_50 != 0) {
    FUN_1400020a8();
  }
  if (local_58 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_58 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_58)(local_58,1);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141330bcb FUN_141330bcb body=161 status=ok
// SIG undefined FUN_141330bcb(void)

ulonglong FUN_141330bcb(void)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 unaff_RBX;
  ulonglong uVar5;
  undefined7 uVar6;
  
  uVar6 = (undefined7)((ulonglong)unaff_RBX >> 8);
  uVar5 = CONCAT71(uVar6,1);
  cVar1 = FUN_1447e0190();
  if (cVar1 != '\0') {
    if (DAT_14c846b14 == '\x01') {
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x110) < DAT_14c83f0fc) {
        FUN_144b3d300(&DAT_14c83f0fc);
        if (DAT_14c83f0fc == -1) {
          uVar4 = FUN_14118da1c();
          bVar2 = FUN_14054d46e(uVar4,L"nothreading");
          DAT_14c83f0f8 = bVar2 ^ 1;
          _Init_thread_footer(&DAT_14c83f0fc);
        }
      }
      if (DAT_14c83f0f8 != 1) goto LAB_141330c25;
    }
    iVar3 = FUN_140e55850();
    uVar5 = CONCAT71(uVar6,DAT_14c75ec7c == 0 || iVar3 < 2);
  }
LAB_141330c25:
  return uVar5 & 0xffffffff;
}



// FUNCTION 141330c6c FUN_141330c6c body=310 status=ok
// SIG undefined FUN_141330c6c(void)

longlong * FUN_141330c6c(longlong *param_1,int param_2)

{
  uint uVar1;
  longlong *lpTlsValue;
  longlong lVar2;
  longlong lVar3;
  
  *param_1 = (longlong)UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    lpTlsValue = TlsGetValue(DAT_14c896140);
    if (lpTlsValue == (longlong *)0x0) {
      lpTlsValue = (longlong *)FUN_14001cc68(0x18,0x10);
      *lpTlsValue = 0;
      lpTlsValue[1] = 0;
      *(undefined4 *)(lpTlsValue + 2) = 0;
      TlsSetValue(DAT_14c896140,lpTlsValue);
    }
    if ((int)lpTlsValue[2] < 0x100) {
      lVar2 = lpTlsValue[1];
    }
    else {
      lVar2 = *lpTlsValue;
      if (lVar2 != 0) {
        uVar1 = FUN_14493c560();
        if (uVar1 == 0) {
          lVar3 = 0;
        }
        else {
          lVar3 = (ulonglong)((uVar1 & 0x3fff) * 0x18) +
                  *(longlong *)(&DAT_14c833b00 + (ulonglong)(uVar1 >> 0xe) * 8);
        }
        *(longlong *)(lVar3 + 8) = lVar2;
        FUN_144a8fde6(&DAT_14c896180,uVar1);
      }
      *lpTlsValue = lpTlsValue[1];
      *(undefined4 *)(lpTlsValue + 2) = 0;
      lVar2 = 0;
    }
    *param_1 = lVar2;
    lpTlsValue[1] = (longlong)param_1;
    *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  }
  return param_1;
}



// FUNCTION 141330da2 FUN_141330da2 body=3102 status=ok
// SIG undefined FUN_141330da2(void)

/* WARNING: Removing unreachable block (ram,0x000141331452) */
/* WARNING: Removing unreachable block (ram,0x0001413312ff) */
/* WARNING: Removing unreachable block (ram,0x000141331162) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141330da2(longlong *param_1,undefined4 param_2,uint param_3)

{
  int *piVar1;
  longlong *plVar2;
  bool bVar3;
  double dVar4;
  double dVar5;
  LARGE_INTEGER LVar6;
  byte bVar7;
  char cVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  longlong *plVar16;
  longlong *plVar17;
  longlong lVar18;
  longlong lVar19;
  uint uVar20;
  int iVar21;
  longlong lVar22;
  ulonglong uVar23;
  bool bVar24;
  undefined1 auStack_138 [36];
  uint local_114;
  uint local_110;
  undefined4 local_10c;
  LARGE_INTEGER local_108 [2];
  LARGE_INTEGER local_f8;
  undefined8 uStack_f0;
  uint local_e8;
  uint local_e4;
  uint local_e0;
  uint local_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_114 = param_3;
  local_10c = param_2;
  if (DAT_14c95014d == 1) {
    local_110 = param_3 & 1;
  }
  else {
    if (*(int *)((longlong)param_1 + 0x5c) < 0) {
      *(undefined4 *)(param_1 + 0xb) = 0;
      FUN_1468b1c6c(param_1 + 10);
    }
    else {
      *(undefined4 *)(param_1 + 0xb) = 0;
    }
    local_110 = param_3 & 1;
    if ((param_3 & 1) != 0) {
      puVar10 = TlsGetValue(DAT_14c896140);
      if (puVar10 == (undefined8 *)0x0) {
        puVar10 = (undefined8 *)FUN_14001cc68(0x18,0x10);
        *puVar10 = 0;
        puVar10[1] = 0;
        *(undefined4 *)(puVar10 + 2) = 0;
        TlsSetValue(DAT_14c896140,puVar10);
      }
      puVar13 = (undefined8 *)puVar10[1];
      if (puVar13 == (undefined8 *)0x0) {
        puVar13 = (undefined8 *)*puVar10;
        if (puVar13 == (undefined8 *)0x0) {
          uVar20 = DAT_14c896180.s.LowPart;
          LVar6 = DAT_14c896180;
          while (DAT_14c896180 = LVar6, local_f8 = LVar6, (LVar6.QuadPart & 0x3ffffffU) != 0) {
            local_108[0].QuadPart = (LVar6.QuadPart & 0xfffffffffc000000U) + 0x4000000;
            if ((ulonglong)local_108[0].QuadPart >> 0x1a < (ulonglong)LVar6.QuadPart >> 0x1a) {
              FUN_14000f986(0x3a83126f);
            }
            uVar12 = (ulonglong)((uVar20 & 0x3ffffff) >> 0xe);
            uVar23 = (ulonglong)(LVar6.s.LowPart & 0x3fff);
            local_108[0].QuadPart =
                 local_108[0].QuadPart & 0xfffffffffc000000U |
                 (ulonglong)
                 *(uint *)(*(longlong *)(&DAT_14c833b00 + uVar12 * 8) + 0x10 + uVar23 * 0x18);
            LOCK();
            bVar24 = local_f8.QuadPart == DAT_14c896180.QuadPart;
            LVar6.QuadPart = local_108[0].QuadPart;
            if (!bVar24) {
              LVar6 = DAT_14c896180;
            }
            DAT_14c896180 = LVar6;
            UNLOCK();
            if (bVar24) {
              *(undefined4 *)(*(longlong *)(&DAT_14c833b00 + uVar12 * 8) + uVar23 * 0x18 + 0x10) = 0
              ;
              puVar13 = *(undefined8 **)
                         (*(longlong *)(&DAT_14c833b00 + uVar12 * 8) + 8 +
                         (ulonglong)(uVar20 & 0x3fff) * 0x18);
              FUN_1447d080c(uVar20 & 0x3ffffff);
              puVar10[1] = puVar13;
              if (puVar13 == (undefined8 *)0x0) goto LAB_1413317fe;
              goto LAB_1413317af;
            }
            uVar20 = DAT_14c896180.s.LowPart;
            LVar6 = DAT_14c896180;
          }
          puVar10[1] = 0;
LAB_1413317fe:
          puVar13 = (undefined8 *)FUN_14001cc68(0x10000,0);
          puVar10[1] = puVar13;
          iVar9 = 0xff;
          puVar14 = puVar13;
          do {
            puVar15 = puVar14 + 0x20;
            *puVar14 = puVar15;
            iVar9 = iVar9 + -1;
            puVar14 = puVar15;
          } while (iVar9 != 0);
        }
        else {
          puVar10[1] = puVar13;
          puVar15 = puVar10;
        }
        *puVar15 = 0;
LAB_1413317af:
        *(undefined4 *)(puVar10 + 2) = 0x100;
        iVar9 = 0xff;
        param_3 = local_114;
      }
      else {
        iVar9 = *(int *)(puVar10 + 2) + -1;
      }
      puVar10[1] = *puVar13;
      *(int *)(puVar10 + 2) = iVar9;
      *puVar13 = UE::Tasks::Private::FTaskBase::vftable;
      puVar13[1] = &DAT_100000002;
      puVar13[2] = 0;
      *(undefined4 *)(puVar13 + 3) = 0;
      *(undefined4 *)(puVar13 + 4) = 0xffffffff;
      puVar13[6] = 0;
      puVar13[7] = 0x100000000;
      *(undefined1 *)(puVar13 + 8) = 1;
      puVar13[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateDummy::vftable;
      puVar13[0xf] = 0;
      puVar13[0x10] = 0xe800000000000020;
      puVar13[0x12] = 0;
      puVar13[0x13] = 0x100000000;
      *(undefined2 *)(puVar13 + 0x14) = 0;
      LOCK();
      bVar24 = *(char *)(puVar13 + 8) == '\x01';
      if (bVar24) {
        *(char *)(puVar13 + 8) = '\0';
      }
      UNLOCK();
      if (!bVar24) {
        FUN_14008cdb0(puVar13 + 8);
      }
      *puVar13 = &PTR_FUN_149e891f8;
      if (*(code **)(puVar13[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar13[0xe] + 0x18))(puVar13 + 0xe,puVar13 + 9);
      }
      puVar13[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      puVar13[9] = puVar13;
      puVar13[10] = puVar13;
      lVar19 = *(longlong *)
                (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x2b8);
      if (lVar19 == 0) {
        uVar11 = 0;
      }
      else {
        uVar11 = *(undefined8 *)(lVar19 + 0x30);
      }
      puVar13[0xf] = uVar11;
      puVar13[0x10] = 0xc80000527a246c00;
      *(undefined4 *)((longlong)puVar13 + 0x1c) = 0;
      puVar13[0x15] = param_1;
      *puVar13 = &PTR_FUN_149e891e8;
      local_f8.s.LowPart._0_1_ = 1;
      FUN_1447439e4(puVar13);
      puVar10 = (undefined8 *)param_1[9];
      param_1[9] = (longlong)puVar13;
      if (puVar10 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(puVar10 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar10)(puVar10,1);
        }
      }
    }
    LOCK();
    DAT_14c9497fc = 0;
    UNLOCK();
    plVar2 = param_1 + 0xc;
    *(undefined4 *)(param_1 + 0xd) = 0;
    if (*(int *)((longlong)param_1 + 0x6c) < 0) {
      FUN_14079e7a6(plVar2,0);
    }
    lVar19 = DAT_14c948580;
    if (*(int *)(DAT_14c948580 + 0xc) <= DAT_14c9647bc) {
      iVar9 = (int)param_1[0xd];
      *(uint *)(param_1 + 0xd) = iVar9 + 1U;
      if (*(uint *)((longlong)param_1 + 0x6c) < iVar9 + 1U) {
        FUN_1447f76d2(plVar2,iVar9);
      }
      *(longlong *)(*plVar2 + (longlong)iVar9 * 8) = lVar19;
    }
    QueryPerformanceCounter(&local_f8);
    dVar4 = (double)local_f8.QuadPart * DAT_14c83f420;
    FUN_1427f05b2(param_1,local_10c);
    QueryPerformanceCounter(&local_f8);
    _DAT_14c950258 = ((double)local_f8.QuadPart * DAT_14c83f420 + 16777216.0) - (dVar4 + 16777216.0)
    ;
  }
  QueryPerformanceCounter(&local_f8);
  dVar4 = (double)local_f8.QuadPart * DAT_14c83f420;
  plVar2 = param_1 + 0xc;
LAB_1413310dc:
  do {
    FUN_14002fa78();
    lVar19 = DAT_14c9500c8;
    local_108[0].QuadPart = (LONGLONG)&DAT_14c949ea0;
    if (DAT_14c95014d == 0) {
      lVar19 = FUN_14002f69a(local_108);
    }
    else {
      *(undefined1 *)(DAT_14c9500c8 + 0x79) = 0;
      *(undefined4 *)(param_1 + 0xd) = 0;
      if (*(int *)((longlong)param_1 + 0x6c) < 0) {
        FUN_14079e7a6(plVar2,0);
      }
    }
    plVar16 = DAT_14c949988;
    LOCK();
    UNLOCK();
    if ((DAT_14c949980 & 1) != 0) {
      do {
      } while( true );
    }
    DAT_14c949980 = 0;
    if (DAT_14c949988 == (longlong *)0x0) {
      if (DAT_14c950160 == 0) {
        QueryPerformanceCounter(&local_f8);
        LVar6 = local_f8;
        dVar5 = DAT_14c83f420;
        if ((local_110 != 0) && (lVar22 = param_1[9], lVar22 != 0)) {
          if (DAT_14c87e718 == '\0') {
            iVar9 = *(int *)(lVar22 + 0x1c);
            if ((2 < iVar9) &&
               (bVar7 = (**(code **)(*DAT_14c82b500 + 0x10))(DAT_14c82b500,0), bVar7 < 3)) {
              local_f8.QuadPart = 0x20100000001;
              uStack_f0 = 0x30100000101;
              local_e8 = DAT_14c7585c8;
              local_e4 = DAT_14c7585c8 | 0x200;
              local_e0 = DAT_14c7585c8 | 0x100;
              local_dc = DAT_14c7585c8 | 0x300;
              local_d8 = 0x20000000000;
              uStack_d0 = 0x30000000100;
              if (*(byte *)((longlong)&local_f8 + (ulonglong)(iVar9 - 3) * 4) == bVar7)
              goto LAB_14133150a;
            }
            QueryPerformanceCounter(&local_f8);
            uStack_f0 = 0xffffffffffffffff;
            FUN_140056092(lVar22,&local_f8);
          }
          else {
LAB_14133150a:
            FUN_140082318(lVar22);
          }
        }
        QueryPerformanceCounter(&local_f8);
        _DAT_14c950250 =
             (((double)local_f8.QuadPart * DAT_14c83f420 + 16777216.0) -
             ((double)LVar6.QuadPart * dVar5 + 16777216.0)) + _DAT_14c950250;
        lVar22 = param_1[0xb];
        *(longlong *)(lVar19 + 0x38) = param_1[10];
        *(int *)(lVar19 + 0x40) = (int)lVar22;
      }
    }
    else {
      LOCK();
      UNLOCK();
      DAT_14c949988 = (longlong *)0x0;
      DAT_14c949980 = 0;
      plVar17 = plVar16;
      if (plVar16 != (longlong *)0x0) {
        do {
          uVar20 = *(uint *)(plVar17 + 1);
          iVar9 = (int)param_1[0xd];
          *(uint *)(param_1 + 0xd) = iVar9 + uVar20;
          if ((uint)(*(int *)((longlong)param_1 + 0x6c) - iVar9) < uVar20) {
            FUN_1447f76d2(plVar2,iVar9);
LAB_1413311ba:
            memcpy((void *)((longlong)iVar9 * 8 + *plVar2),plVar17 + 2,(longlong)(int)uVar20 << 3);
          }
          else if (uVar20 != 0) goto LAB_1413311ba;
          plVar17 = (longlong *)*plVar17;
        } while (plVar17 != (longlong *)0x0);
        do {
          plVar17 = (longlong *)*plVar16;
          FUN_1400020a8(plVar16);
          plVar16 = plVar17;
        } while (plVar17 != (longlong *)0x0);
      }
      _DAT_14c95030c = _DAT_14c95030c + (int)param_1[0xd];
      param_3 = local_114;
    }
    plVar16 = DAT_14c9499c8;
    LOCK();
    UNLOCK();
    if ((DAT_14c9499c0 & 1) != 0) {
      do {
      } while( true );
    }
    DAT_14c9499c0 = 0;
    if (DAT_14c9499c8 != (longlong *)0x0) {
      local_f8.QuadPart = 0;
      uStack_f0 = 0;
      LOCK();
      UNLOCK();
      DAT_14c9499c8 = (longlong *)0x0;
      DAT_14c9499c0 = 0;
      plVar17 = plVar16;
      if (plVar16 != (longlong *)0x0) {
        do {
          uVar12 = uStack_f0;
          uVar20 = *(uint *)(plVar17 + 1);
          iVar9 = (int)uStack_f0;
          lVar22 = (longlong)(int)uStack_f0;
          uStack_f0 = CONCAT44(uStack_f0._4_4_,(int)uStack_f0 + uVar20);
          if ((uint)(uStack_f0._4_4_ - iVar9) < uVar20) {
            FUN_1407dbc78(&local_f8,uVar12 & 0xffffffff);
LAB_14133135a:
            memcpy((undefined8 *)(lVar22 * 8 + local_f8.QuadPart),plVar17 + 2,
                   (longlong)(int)uVar20 << 3);
          }
          else if (uVar20 != 0) goto LAB_14133135a;
          plVar17 = (longlong *)*plVar17;
        } while (plVar17 != (longlong *)0x0);
        do {
          plVar17 = (longlong *)*plVar16;
          FUN_1400020a8(plVar16);
          plVar16 = plVar17;
        } while (plVar17 != (longlong *)0x0);
      }
      LVar6 = local_f8;
      lVar22 = (longlong)(int)uStack_f0;
      if (lVar22 != 0) {
        lVar18 = 0;
        do {
          FUN_1411caa58(~*(uint *)(*(longlong *)(LVar6.QuadPart + lVar18) + 0xc),plVar2);
          lVar18 = lVar18 + 8;
        } while (lVar22 * 8 != lVar18);
      }
      param_3 = local_114;
      if ((undefined8 *)local_f8.QuadPart != (undefined8 *)0x0) {
        FUN_1400020a8(local_f8.QuadPart);
      }
    }
    FUN_14079e744(plVar2);
    lVar22 = param_1[0xd];
    *(longlong *)(lVar19 + 8) = param_1[0xc];
    *(int *)(lVar19 + 0x10) = (int)lVar22;
    (**(code **)(*param_1 + 8))(param_1,lVar19,param_3);
    if (DAT_14c95014d == 0) {
      DAT_14c9500c0 = 0;
      FUN_14002f61e(local_108);
    }
    if ((DAT_14c95014d & 1) == 0) {
      LOCK();
      UNLOCK();
      if ((DAT_14c949980 & 1) != 0) {
        do {
        } while( true );
      }
      DAT_14c949980 = 0;
      if (DAT_14c949988 == (longlong *)0x0) {
        LOCK();
        UNLOCK();
        if ((DAT_14c9499c0 & 1) != 0) {
          do {
          } while( true );
        }
        DAT_14c9499c0 = 0;
        if (DAT_14c9499c8 == (longlong *)0x0) goto LAB_141331517;
      }
      goto LAB_1413310dc;
    }
    if ((param_3 & 8) != 0) {
LAB_141331517:
      QueryPerformanceCounter(&local_f8);
      dVar4 = ((double)local_f8.QuadPart * DAT_14c83f420 + 16777216.0) - (dVar4 + 16777216.0);
      iVar9 = DAT_14c9502a0 + 1;
      DAT_14c950290 = DAT_14c950290 + dVar4;
      if (_DAT_14c950298 < dVar4) {
        _DAT_14c9502a4 = DAT_14c9502a0;
        _DAT_14c950298 = dVar4;
      }
      DAT_14c9502a0 = iVar9;
      if (DAT_14c95014d == 0) {
        QueryPerformanceCounter(&local_f8);
        dVar4 = (double)local_f8.QuadPart * DAT_14c83f420;
        uVar12 = (ulonglong)DAT_14c9646e8;
        if (0 < (longlong)uVar12) {
          bVar24 = false;
          DAT_14c9646f4 = DAT_14c9646f4 + 1;
          do {
            lVar19 = uVar12 * 0x10 + -8;
            uVar23 = uVar12;
            while (((*(int *)(DAT_14c9646e0 + lVar19) != 0 &&
                    (plVar2 = *(longlong **)(DAT_14c9646e0 + -8 + lVar19), plVar2 != (longlong *)0x0
                    )) && (cVar8 = (**(code **)(*plVar2 + 0x60))
                                             (plVar2,param_1,local_10c,local_110 == 0),
                          cVar8 != '\0'))) {
              lVar19 = lVar19 + -0x10;
              bVar3 = uVar23 < 2;
              uVar23 = uVar23 - 1;
              if (bVar3) {
                DAT_14c9646f4 = DAT_14c9646f4 + -1;
                if (!bVar24) goto LAB_1413315d1;
                goto LAB_1413318f6;
              }
            }
            uVar12 = uVar23 - 1;
            bVar24 = true;
          } while (1 < uVar23);
          DAT_14c9646f4 = DAT_14c9646f4 + -1;
LAB_1413318f6:
          iVar9 = DAT_14c9646e8;
          if (DAT_14c9646f4 < 1) {
            if (0 < DAT_14c9646e8) {
              iVar21 = 0;
              do {
                if (((*(int *)(DAT_14c9646e0 + 8 + (longlong)iVar21 * 0x10) == 0) ||
                    (plVar2 = *(longlong **)(DAT_14c9646e0 + (longlong)iVar21 * 0x10),
                    plVar2 == (longlong *)0x0)) ||
                   (cVar8 = (**(code **)(*plVar2 + 0x28))(), cVar8 != '\0')) {
                  FUN_14005b288(&DAT_14c9646e0,iVar21);
                  FUN_14005b248(&DAT_14c9646e0);
                }
                else {
                  iVar21 = iVar21 + 1;
                }
              } while (iVar21 < DAT_14c9646e8);
            }
            _DAT_14c9646f0 = 2;
            if (2 < DAT_14c9646e8 * 2) {
              _DAT_14c9646f0 = DAT_14c9646e8 * 2;
            }
            if ((_DAT_14c9646f0 < iVar9) && (DAT_14c9646ec != DAT_14c9646e8)) {
              FUN_14045812c(&DAT_14c9646e0);
            }
          }
        }
LAB_1413315d1:
        QueryPerformanceCounter(&local_f8);
        _DAT_14c950260 =
             (((double)local_f8.QuadPart * DAT_14c83f420 + 16777216.0) - (dVar4 + 16777216.0)) +
             _DAT_14c950260;
      }
      if ((local_c0 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return;
    }
  } while( true );
}



// FUNCTION 1413319c2 FUN_1413319c2 body=228 status=ok
// SIG undefined FUN_1413319c2(void)

longlong FUN_1413319c2(void)

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
  if (DAT_14cab6010 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14633bf30;
    local_38 = &LAB_147698bf1;
    local_40 = &LAB_14607841b;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0xb0;
    FUN_14081cfa3(L"/Script/MovieSceneTracks",L"MovieScenePiecewiseIntegerBlenderSystem",
                  &DAT_14cab6010,&DAT_147698bf0);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cab6010;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141331aa8 FUN_141331aa8 body=612 status=ok
// SIG undefined FUN_141331aa8(void)

void FUN_141331aa8(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  char cVar7;
  int iVar8;
  char *pcVar9;
  ulonglong uVar10;
  longlong *plVar11;
  char *pcVar12;
  longlong lVar13;
  int iVar14;
  longlong lVar15;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (((((*(byte *)(param_1 + 0x8c) & 0x80) == 0) || (*(char *)(param_1 + 0x29d) != '\x01')) ||
      ((((*(int *)(param_1 + 0x34) != 0 &&
         ((((uVar2 = *(uint *)(param_1 + 0x30), -1 < (int)uVar2 && ((int)uVar2 < DAT_14c9647dc)) &&
           (plVar11 = (longlong *)
                      ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
           plVar11 != (longlong *)0x0)) &&
          (((int)plVar11[2] == *(int *)(param_1 + 0x34) &&
           ((*(uint *)(plVar11 + 1) & 0x10200000) == 0)))))) && (*plVar11 != 0)) &&
       (cVar7 = FUN_140426394(*plVar11 + 0x3c0,&DAT_14cbd95b8), cVar7 != '\0')))) ||
     (lVar3 = *(longlong *)(param_1 + 0x288), lVar3 == 0)) goto LAB_141331ce5;
  FUN_1448d5e3c(&local_58,param_1 + 0x208);
  puVar4 = *(undefined8 **)(local_58 + 0x300);
  AcquireSRWLockExclusive((PSRWLOCK)(puVar4 + 9));
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar11 = local_50 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar1 = (int *)((longlong)local_50 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_50 + 0x10))(local_50);
      }
    }
  }
  if (0 < (longlong)*(int *)(puVar4 + 1)) {
    pcVar12 = (char *)*puVar4;
    pcVar9 = pcVar12 + (longlong)*(int *)(puVar4 + 1) * 0x168;
    iVar14 = 0;
    do {
      if ((*pcVar12 == '\x01') && (lVar5 = *(longlong *)(pcVar12 + 0x158), lVar5 != puVar4[4])) {
        lVar6 = puVar4[5];
        iVar8 = *(int *)(puVar4 + 6);
        lVar15 = (longlong)iVar8;
        if (lVar15 == 0) {
          puVar4[4] = lVar5;
          goto LAB_141331c5e;
        }
        lVar13 = 0;
        while (*(longlong *)(lVar6 + lVar13) != lVar5) {
          lVar13 = lVar13 + 8;
          if (lVar15 * 8 - lVar13 == 0) {
            puVar4[4] = lVar5;
            if (iVar8 == 0) goto LAB_141331c5e;
            uVar10 = 0;
            goto LAB_141331c34;
          }
        }
      }
      iVar14 = iVar14 + 1;
      pcVar12 = pcVar12 + 0x168;
    } while (pcVar12 != pcVar9);
  }
  goto LAB_141331cdc;
  while (uVar10 = uVar10 + 8, lVar15 * 8 - uVar10 != 0) {
LAB_141331c34:
    if (*(longlong *)(lVar6 + uVar10) == *(longlong *)(pcVar12 + 0x158)) {
      if ((int)(~uVar10 >> 3) != 0) goto LAB_141331c94;
      break;
    }
  }
LAB_141331c5e:
  *(uint *)(puVar4 + 6) = iVar8 + 1U;
  if (*(uint *)((longlong)puVar4 + 0x34) < iVar8 + 1U) {
    FUN_1410d14fc(puVar4 + 5,iVar8);
    *(undefined8 *)(puVar4[5] + lVar15 * 8) = *(undefined8 *)(pcVar12 + 0x158);
LAB_141331c94:
    *(int *)(puVar4 + 7) = *(int *)(puVar4 + 7) + 1;
  }
  else {
    *(undefined8 *)(lVar6 + lVar15 * 8) = *(undefined8 *)(pcVar12 + 0x158);
    if (iVar8 != -1) goto LAB_141331c94;
  }
  *(int *)(puVar4 + 8) = *(int *)(puVar4 + 8) + 1;
  if (iVar14 == *(int *)(lVar3 + 0xf8)) {
    iVar8 = 1;
    if (*(int *)(lVar3 + 0xfc) == 0) goto LAB_141331cbd;
  }
  else {
    iVar8 = *(int *)(lVar3 + 0xfc) + 1;
LAB_141331cbd:
    *(int *)(lVar3 + 0xf8) = iVar14;
    *(int *)(lVar3 + 0xfc) = iVar8;
  }
  *(int *)(param_1 + 0x2a0) = iVar14;
  FUN_145c27b9a(param_1,1);
LAB_141331cdc:
  ReleaseSRWLockExclusive((PSRWLOCK)(puVar4 + 9));
LAB_141331ce5:
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141331d0e FUN_141331d0e body=425 status=ok
// SIG undefined FUN_141331d0e(void)

void FUN_141331d0e(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 uVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  code *local_30;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_38 = FUN_1446ddbd2();
      local_30 = FUN_1468d96f0;
      local_40 = 0;
      local_48 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_20);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_20);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_20 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_20);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar4 = FUN_141331eb8(local_20);
  *param_3 = uVar4;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141331eb8 FUN_141331eb8 body=110 status=ok
// SIG undefined FUN_141331eb8(void)

bool FUN_141331eb8(longlong param_1)

{
  uint uVar1;
  bool bVar2;
  longlong lVar3;
  
  if (param_1 == 0) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
    if ((((*(int *)(param_1 + 0x4ef4) != 0) &&
         (uVar1 = *(uint *)(param_1 + 0x4ef0), -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) &&
       (((lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar3 != 0 &&
         (*(int *)(lVar3 + 0x10) == *(int *)(param_1 + 0x4ef4))) &&
        ((*(uint *)(lVar3 + 8) & 0x10200000) == 0)))) {
      bVar2 = *(byte *)(param_1 + 0x4f0a) == 5 || *(byte *)(param_1 + 0x4f0a) < 2;
    }
  }
  return bVar2;
}



// FUNCTION 141331f26 FUN_141331f26 body=158 status=ok
// SIG undefined FUN_141331f26(void)

undefined8 * FUN_141331f26(undefined8 *param_1)

{
  FUN_144805d84();
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
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  *param_1 = &PTR_FUN_14acc7500;
  param_1[5] = &PTR_FUN_14acc79a0;
  param_1[6] = &PTR_LAB_14acc79e0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  *(undefined1 *)(param_1 + 0x39) = 0;
  *(undefined4 *)(param_1 + 0x32) = 0xffffffff;
  *(byte *)((longlong)param_1 + 0x194) = *(byte *)((longlong)param_1 + 0x194) & 0xfe;
  return param_1;
}



// FUNCTION 141331fc4 FUN_141331fc4 body=228 status=ok
// SIG undefined FUN_141331fc4(void)

longlong FUN_141331fc4(void)

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
  if (DAT_14cad11d8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1463b727a;
    local_38 = &LAB_1479dc9df;
    local_40 = &LAB_1458fb7c4;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x4d0;
    FUN_14081cfa3(L"/Script/Engine",L"DirectionalLightComponent",&DAT_14cad11d8,FUN_1463b7252);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cad11d8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1413320a9 FUN_1413320a9 body=142 status=ok
// SIG undefined FUN_1413320a9(void)

void FUN_1413320a9(longlong param_1,longlong param_2,int param_3)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = 0;
    do {
      *(undefined8 *)(param_1 + lVar2) = *(undefined8 *)(param_2 + lVar2);
      *(undefined8 *)(param_1 + 8 + lVar2) = 0;
      iVar1 = *(int *)(param_2 + 0x10 + lVar2);
      _Src = *(void **)(param_2 + 8 + lVar2);
      *(int *)(param_1 + 0x10 + lVar2) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)(param_1 + 0x14 + lVar2) = 0;
      }
      else {
        FUN_1446dd670(param_1 + 8 + lVar2,iVar1,0);
        memcpy(*(void **)(param_1 + 8 + lVar2),_Src,(longlong)iVar1 * 2);
      }
      lVar2 = lVar2 + 0x18;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 141332138 FUN_141332138 body=968 status=ok
// SIG undefined FUN_141332138(void)

void FUN_141332138(longlong param_1,longlong param_2,longlong param_3)

{
  uint *puVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  longlong lVar13;
  int iVar14;
  uint uVar15;
  longlong *plVar16;
  int iVar17;
  undefined1 auStack_88 [40];
  ulonglong local_60;
  longlong *local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_50 = param_2;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  plVar16 = (longlong *)(param_1 + 8);
  uVar12 = (uint)param_2;
  iVar7 = (int)((ulonglong)param_2 >> 0x20);
  uVar8 = (uint)((ulonglong)param_2 >> 0x10);
  if (*(int *)(param_1 + 0x50) != 0) {
    lVar13 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar13 = *(longlong *)(param_1 + 0x48);
    }
    iVar3 = *(int *)(lVar13 + (longlong)
                              (int)(*(int *)(param_1 + 0x50) - 1U &
                                   (uVar12 << 0x10 | uVar12 & 0xffff) + iVar7 +
                                   (uVar8 << 0x13 | uVar8 & 0xffff) + ((uVar12 & 0xffff) >> 4)) * 4)
    ;
    do {
      if (iVar3 == -1) goto LAB_141332210;
      lVar13 = *plVar16;
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar13 + 0x10 + lVar5 * 0x18);
    } while (*(longlong *)(lVar13 + lVar5 * 0x18) != param_2);
    while (*(longlong *)(lVar13 + 8 + lVar5 * 0x18) != param_3) {
      do {
        if (iVar3 == -1) goto LAB_141332210;
        lVar5 = (longlong)iVar3;
        iVar3 = *(int *)(lVar13 + 0x10 + lVar5 * 0x18);
      } while (*(longlong *)(lVar13 + lVar5 * 0x18) != param_2);
    }
    if (lVar13 + lVar5 * 0x18 != -8) goto LAB_14133238a;
  }
LAB_141332210:
  if (*(int *)(param_1 + 0x3c) == 0) {
    iVar3 = *(int *)(param_1 + 0x10);
    *(int *)(param_1 + 0x10) = iVar3 + 1;
    if (*(int *)(param_1 + 0x14) == iVar3) {
      FUN_14482b872(plVar16,iVar3);
    }
    iVar14 = *(int *)(param_1 + 0x30);
    if (iVar14 == 0) {
      iVar4 = -1;
    }
    else {
      iVar4 = iVar14 + 0x1e;
      if (-1 < iVar14 + -1) {
        iVar4 = iVar14 + -1;
      }
      iVar4 = iVar4 >> 5;
    }
    lVar5 = param_1 + 0x18;
    iVar9 = iVar14 + 1;
    iVar17 = iVar14 + 0x1f;
    if (-1 < iVar14) {
      iVar17 = iVar14;
    }
    if (iVar17 >> 5 == iVar4) {
      *(int *)(param_1 + 0x30) = iVar9;
    }
    else {
      if (*(int *)(param_1 + 0x34) <= iVar14) {
        local_58 = plVar16;
        if (iVar14 + 0x20U < 0xa0) {
          iVar9 = 0x80;
          iVar4 = iVar14;
        }
        else {
          uVar15 = iVar14 + 0x20U >> 5;
          local_60 = (ulonglong)uVar15;
          if (*(int *)(param_1 + 0x34) + 0x1fU < 0xa0) {
            uVar10 = 4;
            if (4 < uVar15) {
              uVar10 = uVar15;
            }
          }
          else {
            uVar10 = (uVar15 * 3 >> 3) + uVar15 + 0x10;
          }
          uVar11 = FUN_144a3809e(uVar10 << 2,0);
          iVar4 = (int)(uVar11 >> 2);
          iVar9 = -0x20;
          if ((int)local_60 <= iVar4) {
            iVar9 = iVar4 << 5;
          }
          iVar4 = *(int *)(param_1 + 0x30);
        }
        *(int *)(param_1 + 0x34) = iVar9;
        FUN_1446efbd8(lVar5,iVar4);
        iVar9 = *(int *)(param_1 + 0x30) + 1;
        plVar16 = local_58;
      }
      iVar4 = iVar9 + 0x1f;
      if (-1 < iVar9) {
        iVar4 = iVar9;
      }
      *(int *)(param_1 + 0x30) = iVar9;
      if (iVar9 % 0x20 != 0) {
        lVar13 = *(longlong *)(param_1 + 0x28);
        if (*(longlong *)(param_1 + 0x28) == 0) {
          lVar13 = lVar5;
        }
        bVar6 = -(char)(iVar9 % 0x20);
        *(uint *)(lVar13 + (longlong)(iVar4 >> 5) * 4) =
             (uint)(*(int *)(lVar13 + (longlong)(iVar4 >> 5) * 4) << (bVar6 & 0x1f)) >>
             (bVar6 & 0x1f);
      }
    }
    lVar13 = (longlong)iVar3;
    if (*(longlong *)(param_1 + 0x28) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x28);
    }
    bVar6 = (byte)iVar14 & 0x1f;
    puVar1 = (uint *)(lVar5 + (longlong)(iVar17 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar6 | 0xfffffffeU >> 0x20 - bVar6);
  }
  else {
    iVar3 = *(int *)(param_1 + 0x38);
    lVar13 = (longlong)iVar3;
    iVar14 = *(int *)(*(longlong *)(param_1 + 8) + 4 + lVar13 * 0x18);
    *(int *)(param_1 + 0x38) = iVar14;
    iVar4 = *(int *)(param_1 + 0x3c) + -1;
    *(int *)(param_1 + 0x3c) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*(longlong *)(param_1 + 8) + (longlong)iVar14 * 0x18) = 0xffffffff;
    }
  }
  iVar14 = 1;
  lVar5 = param_1 + 0x18;
  if (*(longlong *)(param_1 + 0x28) != 0) {
    lVar5 = *(longlong *)(param_1 + 0x28);
  }
  iVar4 = iVar3 + 0x1f;
  if (-1 < iVar3) {
    iVar4 = iVar3;
  }
  puVar1 = (uint *)(lVar5 + (longlong)(iVar4 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar3 & 0x1f);
  lVar5 = *(longlong *)(param_1 + 8);
  *(longlong *)(lVar5 + lVar13 * 0x18) = param_2;
  *(longlong *)(lVar5 + 8 + lVar13 * 0x18) = param_3;
  *(undefined4 *)(lVar5 + 0x10 + lVar13 * 0x18) = 0xffffffff;
  uVar15 = *(int *)(param_1 + 0x10) - *(int *)(param_1 + 0x3c);
  if (3 < uVar15) {
    uVar11 = (ulonglong)(uVar15 & 0xfffffffe) + 0xf;
    lVar2 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    iVar14 = 1 << ((byte)lVar2 & 0x1f);
  }
  if (((int)uVar15 < 1) || (iVar14 <= *(int *)(param_1 + 0x50))) {
    lVar5 = lVar5 + lVar13 * 0x18;
    uVar8 = *(int *)(param_1 + 0x50) - 1U &
            ((uVar12 & 0xffff) >> 4) +
            (uVar12 << 0x10 | uVar12 & 0xffff) + iVar7 + (uVar8 << 0x13 | uVar8 & 0xffff);
    *(uint *)(lVar5 + 0x14) = uVar8;
    lVar13 = *(longlong *)(param_1 + 0x48);
    if (*(longlong *)(param_1 + 0x48) == 0) {
      lVar13 = param_1 + 0x40;
    }
    *(undefined4 *)(lVar5 + 0x10) =
         *(undefined4 *)
          (lVar13 + ((longlong)*(int *)(param_1 + 0x50) - 1U & (longlong)(int)uVar8) * 4);
    lVar13 = *(longlong *)(param_1 + 0x48);
    if (*(longlong *)(param_1 + 0x48) == 0) {
      lVar13 = param_1 + 0x40;
    }
    *(int *)(lVar13 + ((longlong)*(int *)(param_1 + 0x50) - 1U & (longlong)(int)uVar8) * 4) = iVar3;
  }
  else {
    *(int *)(param_1 + 0x50) = iVar14;
    FUN_1413325b0(plVar16);
  }
LAB_14133238a:
  FUN_141332502(param_1 + 0x80,&local_50,param_3);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141332502 FUN_141332502 body=173 status=ok
// SIG undefined FUN_141332502(void)

void FUN_141332502(longlong *param_1,undefined8 param_2,undefined8 param_3)

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
        goto LAB_141332599;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_141332599:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 1413325b0 FUN_1413325b0 body=594 status=ok
// SIG undefined FUN_1413325b0(void)

void FUN_1413325b0(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  longlong *plVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  uint uVar15;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar6 = *(uint *)(param_1 + 9);
  if (uVar6 != 0) {
    plVar1 = param_1 + 7;
    FUN_144a1cbf0(plVar1,0,uVar6,4);
    if (0 < (int)uVar6) {
      uVar4 = 0;
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar4) * 4) =
             0xffffffff;
        uVar4 = uVar4 + 1;
      } while (uVar6 != uVar4);
    }
    local_60 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    if ((int)param_1[5] == 0) {
      uVar9 = 1;
      local_58._0_4_ = 0xffffffff;
      local_58._4_4_ = 0;
      local_68._0_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      uVar9 = local_68 >> 0x20;
    }
    iVar5 = (int)local_68;
    uVar6 = (uint)local_58;
    iVar7 = local_58._4_4_;
    iVar12 = local_50;
    if (local_58._4_4_ < (int)local_60[3]) {
      do {
        lVar14 = *param_1;
        lVar13 = (longlong)iVar7;
        uVar2 = *(undefined8 *)(lVar14 + lVar13 * 0x18);
        uVar4 = (uint)((ulonglong)uVar2 >> 0x10);
        uVar15 = (uint)uVar2 & 0xffff;
        uVar11 = (longlong)
                 (int)(((uint)uVar2 << 0x10 | uVar15) + (int)((ulonglong)uVar2 >> 0x20) +
                       (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar15 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar10 = (int)uVar11;
        *(int *)(lVar14 + 0x14 + lVar13 * 0x18) = iVar10;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar14 + 0x10 + lVar13 * 0x18) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar11) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar10 & (longlong)(int)param_1[9] - 1U) * 4) = iVar7
        ;
        uVar6 = ~(uint)uVar9 & uVar6;
        plVar8 = (longlong *)local_60[2];
        if ((longlong *)local_60[2] == (longlong *)0x0) {
          plVar8 = local_60;
        }
        iVar10 = (int)local_60[3];
        lVar14 = (longlong)iVar5;
        uVar4 = *(uint *)((longlong)plVar8 + lVar14 * 4) & uVar6;
        if (uVar4 == 0) {
          iVar7 = iVar10 + 0x1e;
          if (-1 < iVar10 + -1) {
            iVar7 = iVar10 + -1;
          }
          iVar7 = iVar7 >> 5;
          iVar3 = iVar7;
          if (iVar7 < iVar5) {
            iVar3 = iVar5;
          }
          if (iVar7 <= iVar5) break;
          lVar13 = 0;
          while( true ) {
            iVar12 = iVar12 + 0x20;
            uVar4 = *(uint *)((longlong)plVar8 + lVar13 * 4 + lVar14 * 4 + 4);
            if (uVar4 != 0) break;
            lVar13 = lVar13 + 1;
            if (iVar3 - lVar14 == lVar13) goto LAB_1413327b9;
          }
          iVar5 = iVar5 + (int)lVar13 + 1;
          uVar6 = 0xffffffff;
        }
        uVar9 = (ulonglong)(-uVar4 & uVar4);
        uVar11 = uVar9 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar11 != 0) {
          for (; uVar11 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        iVar7 = (iVar12 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
      } while (iVar7 < iVar10);
    }
  }
LAB_1413327b9:
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141332804 FUN_141332804 body=370 status=ok
// SIG undefined FUN_141332804(void)

undefined8 * FUN_141332804(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 141332984 FUN_141332984 body=425 status=ok
// SIG undefined FUN_141332984(void)

bool FUN_141332984(longlong param_1)

{
  undefined2 uVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  wchar_t *local_68;
  code *local_60;
  undefined1 *local_58;
  code **local_50;
  code *local_48;
  code *local_40;
  code *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((*DAT_14cb115f0 == 0) || (*DAT_14cb11638 < 1)) {
    bVar6 = false;
    goto LAB_141332a61;
  }
  uVar1 = *(undefined2 *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2);
  bVar2 = FUN_14479fe53(uVar1,1,1);
  bVar6 = false;
  bVar3 = FUN_1449d9015(uVar1,0);
  if (((bVar2 & *DAT_14cb11620 != 0) == 0) && ((bVar3 & *DAT_14cb11608 != 0) == 0))
  goto LAB_141332a61;
  lVar5 = *(longlong *)(param_1 + 0x20);
  if (lVar5 == 0) {
LAB_141332b20:
    lVar5 = 0;
  }
  else {
    if (DAT_14cb10130 == 0) {
      local_50 = &local_30;
      local_30 = FUN_140754f84;
      local_40 = FUN_14081d0ea;
      local_48 = FUN_14081d0ea;
      local_58 = &LAB_147da9a76;
      local_60 = FUN_1409f3105;
      local_68 = L"Engine";
      local_70 = 0;
      local_78 = 0x10000000;
      local_80 = 8;
      local_88 = 0x990;
      FUN_14081cfa3(L"/Script/Engine",L"World",&DAT_14cb10130,FUN_14640e230);
    }
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < *(int *)(DAT_14cb10130 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cb10130 + 0x38) * 8) != DAT_14cb10130 + 0x30)) goto LAB_141332b20;
  }
  iVar4 = FUN_14490d72a(lVar5);
  bVar6 = iVar4 != 1;
LAB_141332a61:
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return bVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141332b2e FUN_141332b2e body=212 status=ok
// SIG undefined FUN_141332b2e(void)

void FUN_141332b2e(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14cb0d2b0 != 0) {
    plVar2 = *(longlong **)(DAT_14cb0d2b0 + 0xff0);
    iVar4 = (int)plVar2[1];
    if (0 < iVar4) {
      iVar5 = 0;
      do {
        if (((*(longlong *)(*plVar2 + (longlong)iVar5 * 0x10) == 0) ||
            (lVar3 = *(longlong *)(*plVar2 + (longlong)iVar5 * 0x10 + 8), lVar3 == 0)) ||
           (*(int *)(lVar3 + 8) < 1)) {
          FUN_1458f8974(plVar2,iVar5);
          FUN_1458f88e0(plVar2);
          iVar4 = (int)plVar2[1];
        }
        else {
          iVar5 = iVar5 + 1;
        }
      } while (iVar5 < iVar4);
    }
    local_30 = *param_1;
    local_28 = (longlong *)param_1[1];
    if (local_28 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)local_28 + 0xc) = *(int *)((longlong)local_28 + 0xc) + 1;
      UNLOCK();
    }
    FUN_1458f887c(plVar2,&local_30);
    if (local_28 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)local_28 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_28 + 0x10))();
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141332c04 FUN_141332c04 body=243 status=ok
// SIG undefined FUN_141332c04(void)

ulonglong FUN_141332c04(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  bool bVar11;
  
  lVar4 = param_1[1];
  if ((longlong)(int)lVar4 != 0) {
    param_1 = (longlong *)*param_1;
    plVar10 = param_1;
    do {
      plVar7 = (longlong *)plVar10[1];
      if (plVar7 == (longlong *)0x0) {
LAB_141332ca2:
        plVar7 = (longlong *)0x0;
      }
      else {
        iVar6 = (int)plVar7[1];
        do {
          if (iVar6 == 0) goto LAB_141332ca2;
          LOCK();
          iVar5 = (int)plVar7[1];
          bVar11 = iVar6 == iVar5;
          if (bVar11) {
            *(int *)(plVar7 + 1) = iVar6 + 1;
            iVar5 = iVar6;
          }
          iVar6 = iVar5;
          UNLOCK();
        } while (!bVar11);
      }
      lVar8 = *plVar10;
      plVar3 = (longlong *)param_2[1];
      if (plVar3 == (longlong *)0x0) {
LAB_141332ca6:
        lVar9 = 0;
      }
      else {
        iVar6 = (int)plVar3[1];
        do {
          if (iVar6 == 0) goto LAB_141332ca6;
          LOCK();
          iVar5 = (int)plVar3[1];
          bVar11 = iVar6 == iVar5;
          if (bVar11) {
            *(int *)(plVar3 + 1) = iVar6 + 1;
            iVar5 = iVar6;
          }
          iVar6 = iVar5;
          UNLOCK();
        } while (!bVar11);
        lVar9 = *param_2;
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
      if (plVar7 == (longlong *)0x0) {
        lVar8 = 0;
      }
      else {
        LOCK();
        plVar3 = plVar7 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*plVar7)(plVar7);
          LOCK();
          piVar2 = (int *)((longlong)plVar7 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
          }
        }
      }
      if (lVar8 == lVar9) {
        return (ulonglong)((longlong)plVar10 - (longlong)param_1) >> 4 & 0xffffffff;
      }
      plVar10 = plVar10 + 2;
    } while (plVar10 != param_1 + (longlong)(int)lVar4 * 2);
  }
  return 0xffffffff;
}



// FUNCTION 141332cf8 FUN_141332cf8 body=22 status=ok
// SIG undefined FUN_141332cf8(void)

void FUN_141332cf8(longlong param_1)

{
  longlong *plVar1;
  
  if (*(longlong *)(param_1 + 0x20) == 0) {
    plVar1 = (longlong *)0x0;
  }
  else {
    plVar1 = *(longlong **)(param_1 + 0x28);
  }
                    /* WARNING: Could not recover jumptable at 0x000141332d06. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 8))();
  return;
}



// FUNCTION 141332d0e FUN_141332d0e body=172 status=ok
// SIG undefined FUN_141332d0e(void)

undefined2 * FUN_141332d0e(undefined2 *param_1,undefined2 *param_2)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  
  *param_1 = *param_2;
  if (param_2 == param_1) {
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
    uVar5 = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
    *(undefined8 *)(param_1 + 0x10) = uVar5;
    return param_1;
  }
  if (*(char *)(param_2 + 4) == '\x01') {
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
    uVar6 = 1;
  }
  else {
    if (*(char *)(param_1 + 4) == '\0') goto LAB_141332d31;
    uVar6 = 0;
  }
  *(undefined1 *)(param_1 + 4) = uVar6;
LAB_141332d31:
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  uVar2 = *(undefined4 *)(param_2 + 0xe);
  uVar3 = *(undefined4 *)(param_2 + 0x10);
  uVar4 = *(undefined4 *)(param_2 + 0x12);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0xe) = uVar2;
  *(undefined4 *)(param_1 + 0x10) = uVar3;
  *(undefined4 *)(param_1 + 0x12) = uVar4;
  iVar1 = *(int *)(param_2 + 0x18);
  _Src = *(void **)(param_2 + 0x14);
  *(int *)(param_1 + 0x18) = iVar1;
  if (iVar1 == 0 && *(int *)(param_1 + 0x1a) == 0) {
    *(undefined4 *)(param_1 + 0x1a) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x14,iVar1);
    if (iVar1 != 0) {
      memcpy(*(void **)(param_1 + 0x14),_Src,(longlong)iVar1 * 2);
    }
  }
  return param_1;
}



// FUNCTION 141332dba FUN_141332dba body=81 status=ok
// SIG undefined FUN_141332dba(void)

void FUN_141332dba(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar2 = (longlong)*(int *)(*param_2 + 0xd4);
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar2 * 8);
    if (lVar1 == 0) {
      lVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar2,1);
    }
  }
  FUN_1456be5f9(param_1,param_2,lVar1);
  return;
}



// FUNCTION 141332e0b FUN_141332e0b body=232 status=ok
// SIG undefined FUN_141332e0b(void)

void FUN_141332e0b(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (*param_2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar5 = (longlong)*(int *)(*param_2 + 0xd4);
    uVar1 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar5 * 8);
    if (uVar1 == 0) {
      uVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar5,1);
    }
  }
  uVar2 = FUN_140029432(param_1,uVar1,0);
  param_1[0x37] = uVar1;
  puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar3 + 3;
  if ((undefined8 *)param_1[1] < puVar4) {
    FUN_140023dd8(param_1,0x20);
    puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar3 + 3;
  }
  *param_1 = (ulonglong)puVar4;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar3;
  param_1[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_14a37d340;
  puVar3[2] = uVar2;
  FUN_14480864a(param_1,uVar1,*param_2,param_3,param_4);
  return;
}



// FUNCTION 141332ef4 FUN_141332ef4 body=326 status=ok
// SIG undefined FUN_141332ef4(void)

void FUN_141332ef4(longlong param_1,longlong param_2)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_50;
  undefined8 local_48;
  undefined1 *puStack_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar6 = *(longlong *)(param_1 + 0x20);
  cVar2 = FUN_1410862f0(param_2);
  if ((((cVar2 != '\0') && (*(int *)(param_2 + 0x5c) != 0)) &&
      (uVar1 = *(uint *)(param_2 + 0x58), -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    plVar5 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar5 != (longlong *)0x0) && ((int)plVar5[2] == *(int *)(param_2 + 0x5c))) &&
       (((*(uint *)(plVar5 + 1) & 0x10200000) == 0 && (*plVar5 != 0)))) {
      lVar3 = 0;
      if ((*(uint *)(plVar5 + 1) & 0x10200000) == 0) {
        lVar3 = *plVar5;
      }
      plVar5 = (longlong *)FUN_140dfc108(*(undefined8 *)(lVar3 + 0x20));
      if (plVar5 != (longlong *)0x0) {
        lVar3 = (**(code **)(*plVar5 + 0x10))(plVar5);
        if (lVar3 != 0) {
          local_48 = 0;
          local_38 = 0;
          puStack_40 = &DAT_3f800000ffffffff;
          local_30 = 0;
          uStack_28 = 0;
          lVar6 = lVar6 + 8;
          if (lVar6 == 0) {
            uVar4 = 0;
            local_58 = 0;
          }
          else {
            uVar4 = FUN_140c520a2(lVar6);
            local_58 = FUN_1418a5c14(lVar6);
          }
          local_50 = 1;
          local_60 = uVar4;
          FUN_14164c0ba(lVar3,&local_60,&local_48);
          FUN_140de863f(0,0);
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14133303b FUN_14133303b body=1269 status=ok
// SIG undefined FUN_14133303b(void)

longlong * FUN_14133303b(longlong *param_1,longlong *param_2,float param_3)

{
  ulonglong uVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  char cVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  int iVar12;
  int iVar13;
  uint *puVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  ulonglong uVar18;
  longlong lVar19;
  longlong lVar20;
  uint uVar21;
  undefined1 auStack_128 [32];
  undefined4 local_108;
  undefined4 local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  wchar_t *local_e8;
  code *local_e0;
  undefined1 *local_d8;
  code **local_d0;
  code *local_c8;
  code *local_c0;
  longlong *local_b0;
  longlong local_a8;
  longlong local_a0;
  longlong *local_98;
  code *local_90;
  longlong local_88;
  undefined8 local_80;
  int local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_128;
  *param_1 = 0;
  param_1[1] = 0;
  local_b0 = param_1;
  local_98 = param_2;
  if (param_2 != (longlong *)0x0) {
    uVar7 = FUN_144a807f0();
    plVar8 = (longlong *)(**(code **)(*local_98 + 0x288))(local_98,uVar7);
    if (plVar8 != (longlong *)0x0) {
      uVar7 = FUN_144a807f0();
      plVar9 = (longlong *)FUN_144718840(plVar8,uVar7);
      if ((plVar8 != plVar9) && (plVar9 != (longlong *)0x0)) {
        lVar10 = (**(code **)(*plVar9 + 0x28))(plVar9);
        local_a0 = lVar10 + 0x60;
        local_90 = (code *)0x100000000;
        local_80 = 0xffffffff;
        local_78 = 0;
        local_88 = local_a0;
        if (*(int *)(lVar10 + 0x78) == 0) {
          uVar18 = 1;
          local_80._0_4_ = 0xffffffff;
          iVar16 = 0;
          local_80._4_4_ = 0;
          local_90._0_4_ = 0;
        }
        else {
          FUN_1449c0562(&local_90);
          uVar18 = (ulonglong)local_90 >> 0x20;
          iVar16 = *(int *)(lVar10 + 0x78);
        }
        lVar5 = local_88;
        iVar13 = (int)local_90;
        uVar21 = (uint)local_80;
        iVar12 = local_80._4_4_;
        iVar17 = local_78;
        if (local_80._4_4_ != iVar16 || local_88 != local_a0) {
          do {
            local_a8 = lVar10;
            iVar3 = *(int *)(*(longlong *)(local_a8 + 0x50) + 4 + (longlong)iVar12 * 0x2b0);
            if (iVar3 != 0) {
              puVar14 = (uint *)(*(longlong *)(local_a8 + 0x50) + (longlong)iVar12 * 0x2b0);
              uVar15 = *puVar14;
              if ((((-1 < (int)uVar15) && ((int)uVar15 < DAT_14c9647dc)) &&
                  (plVar8 = (longlong *)
                            ((ulonglong)((uVar15 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar15 >> 0x10) * 8)),
                  plVar8 != (longlong *)0x0)) &&
                 ((((int)plVar8[2] == iVar3 && ((*(uint *)(plVar8 + 1) & 0x10200000) == 0)) &&
                  ((plVar8 = (longlong *)*plVar8, plVar8 != (longlong *)0x0 &&
                   ((fVar2 = (float)puVar14[2], fVar2 < 3.4028235e+38 && (fVar2 <= param_3)))))))) {
                if (DAT_14cb20e58 == 0) {
                  local_d0 = &local_90;
                  local_90 = FUN_1449e2820;
                  local_c0 = FUN_14081d0ea;
                  local_c8 = FUN_1427b09ee;
                  local_d8 = &LAB_147f14d13;
                  local_e0 = FUN_1464313b0;
                  local_e8 = L"Engine";
                  local_f0 = 0;
                  local_f8 = 0x10004001;
                  local_100 = 8;
                  local_108 = 0x28;
                  FUN_14081cfa3(L"/Script/GbxAI",L"GbxAggroInterface",&DAT_14cb20e58,&DAT_147f14d12)
                  ;
                }
                plVar9 = (longlong *)(**(code **)(*plVar8 + 0x288))(plVar8,DAT_14cb20e58);
                if (plVar9 != (longlong *)0x0) {
                  if (DAT_14cb20e58 == 0) {
                    local_d0 = &local_90;
                    local_90 = FUN_1449e2820;
                    local_c0 = FUN_14081d0ea;
                    local_c8 = FUN_1427b09ee;
                    local_d8 = &LAB_147f14d13;
                    local_e0 = FUN_1464313b0;
                    local_e8 = L"Engine";
                    local_f0 = 0;
                    local_f8 = 0x10004001;
                    local_100 = 8;
                    local_108 = 0x28;
                    FUN_14081cfa3(L"/Script/GbxAI",L"GbxAggroInterface",&DAT_14cb20e58,
                                  &DAT_147f14d12);
                  }
                  plVar11 = (longlong *)FUN_144718840(plVar9,DAT_14cb20e58);
                  if ((((plVar9 != plVar11) && (plVar11 != (longlong *)0x0)) &&
                      (lVar10 = (**(code **)(*plVar11 + 0x10))(plVar11), lVar10 != 0)) &&
                     (cVar6 = FUN_14068bcb2(lVar10,local_98,3), cVar6 != '\0')) {
                    iVar12 = (int)local_b0[1];
                    *(uint *)(local_b0 + 1) = iVar12 + 1U;
                    if (*(uint *)((longlong)local_b0 + 0xc) < iVar12 + 1U) {
                      FUN_1447d05f2(local_b0,iVar12);
                    }
                    *(longlong **)(*local_b0 + (longlong)iVar12 * 8) = plVar8;
                  }
                }
              }
            }
            uVar21 = uVar21 & ~(uint)uVar18;
            lVar10 = *(longlong *)(lVar5 + 0x10);
            if (*(longlong *)(lVar5 + 0x10) == 0) {
              lVar10 = lVar5;
            }
            iVar3 = *(int *)(lVar5 + 0x18);
            lVar19 = (longlong)iVar13;
            uVar15 = *(uint *)(lVar10 + lVar19 * 4) & uVar21;
            if (uVar15 == 0) {
              iVar12 = iVar3 + 0x1e;
              if (-1 < iVar3 + -1) {
                iVar12 = iVar3 + -1;
              }
              iVar12 = iVar12 >> 5;
              iVar17 = iVar17 + 0x20;
              iVar4 = iVar12;
              if (iVar12 < iVar13) {
                iVar4 = iVar13;
              }
              if (iVar13 < iVar12) {
                lVar20 = 0;
                do {
                  uVar15 = *(uint *)(lVar10 + lVar19 * 4 + 4 + lVar20 * 4);
                  if (uVar15 != 0) {
                    iVar13 = iVar13 + (int)lVar20 + 1;
                    uVar21 = 0xffffffff;
                    goto LAB_1413332e9;
                  }
                  iVar17 = iVar17 + 0x20;
                  lVar20 = lVar20 + 1;
                } while (iVar4 - lVar19 != lVar20);
                uVar21 = 0xffffffff;
                iVar13 = iVar4;
              }
              iVar13 = iVar13 + 1;
              iVar12 = iVar3;
            }
            else {
LAB_1413332e9:
              uVar18 = (ulonglong)(-uVar15 & uVar15);
              uVar1 = uVar18 * 2 + 1;
              lVar10 = 0x3f;
              if (uVar1 != 0) {
                for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
                }
              }
              iVar12 = (iVar17 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
              if (iVar3 <= iVar12) {
                iVar12 = iVar3;
              }
            }
            lVar10 = local_a8;
          } while ((iVar12 != iVar16) || (lVar5 != local_a0));
        }
      }
    }
  }
  if ((local_70 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return local_b0;
}



// FUNCTION 141333532 FUN_141333532 body=115 status=ok
// SIG undefined FUN_141333532(void)

undefined8 FUN_141333532(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  
  if ((0 < *(int *)(param_1 + 0x1a8)) && (lVar1 = **(longlong **)(param_1 + 0x1a0), lVar1 != 0)) {
    cVar2 = FUN_14065d9ca(lVar1,param_2);
    if (cVar2 == '\0') {
      return 0;
    }
    cVar2 = *(char *)(lVar1 + 0xb5);
    if ((cVar2 == '\x02') && (*(char *)(*(longlong *)(lVar1 + 0x48) + 0x73) != '\0')) {
      cVar2 = '\x01';
    }
    *(char *)(param_1 + 0xb5) = cVar2;
  }
  uVar3 = FUN_14065d88c(param_1,param_2);
  return uVar3;
}



// FUNCTION 1413335a5 FUN_1413335a5 body=319 status=ok
// SIG undefined FUN_1413335a5(void)

void FUN_1413335a5(longlong *param_1)

{
  undefined2 uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar2 = (undefined8 *)*param_1;
  FUN_140553f2a(puVar2,param_1);
  *puVar2 = &PTR_FUN_14a4cb0b0;
  *(undefined4 *)(puVar2 + 7) = 4;
  *(undefined1 *)((longlong)puVar2 + 0x32) = 0xc;
  if ((*(uint *)(puVar2 + 1) & 0x10) != 0) {
    local_28 = puVar2[2];
    if ((local_28 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    local_30 = FUN_14588a226();
    if ((local_30 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(local_30);
    }
    FUN_140909372(&local_30,&local_28);
    lVar3 = FUN_14009d2a0();
    uVar1 = *(undefined2 *)(lVar3 + 0x140);
    local_38 = puVar2[2];
    if ((local_38 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    FUN_14118c742(&local_38,uVar1);
    lVar4 = -0x12;
    do {
      FUN_1458f949c(*(undefined2 *)(lVar3 + 0x90 + lVar4),*(undefined2 *)(lVar3 + 0xb6 + lVar4),
                    *(undefined2 *)(lVar3 + 0xce + lVar4));
      lVar4 = lVar4 + 2;
    } while (lVar4 != 0);
    FUN_1458f949c(*(undefined2 *)(lVar3 + 0xb6),*(undefined2 *)(lVar3 + 0xb8),
                  *(undefined2 *)(lVar3 + 0xe4));
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1413336e6 FUN_1413336e6 body=228 status=ok
// SIG undefined FUN_1413336e6(void)

longlong FUN_1413336e6(void)

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
  if (DAT_14cab5a78 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1432d0f4c;
    local_38 = &LAB_147656017;
    local_40 = FUN_1413335a5;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x40;
    FUN_14081cfa3(L"/Script/MovieSceneTracks",L"FloatChannelEvaluatorSystem",&DAT_14cab5a78,
                  &DAT_147656016);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cab5a78;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1413337cc FUN_1413337cc body=794 status=ok
// SIG undefined FUN_1413337cc(void)

void FUN_1413337cc(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  code *local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_38 = FUN_1446ddbd2();
      local_30 = FUN_1468d96f0;
      local_40 = 0;
      local_48 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_20);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_20);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_20 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_20);
    }
  }
  local_28 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_38 = FUN_1446ddbd2();
      local_30 = FUN_1468d96f0;
      local_40 = 0;
      local_48 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_28);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_28);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_28 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_28);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar4 = FUN_141333ae8(local_20,local_28);
  *param_3 = uVar4;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141333ae8 FUN_141333ae8 body=555 status=ok
// SIG undefined FUN_141333ae8(void)

undefined4 FUN_141333ae8(undefined8 param_1,undefined8 param_2)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  undefined8 ****ppppuVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined1 auStack_108 [32];
  char local_e8 [16];
  longlong *local_d8;
  undefined4 local_c0 [2];
  undefined1 local_b8 [8];
  undefined8 ***local_b0 [3];
  ushort local_98;
  byte local_90;
  undefined4 local_80;
  undefined4 uStack_7c;
  ushort local_68;
  byte local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  ushort local_40;
  byte local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_141001a28(local_b8,param_1,param_2);
  local_e8[0] = '\0';
  local_c0[0] = 0;
  FUN_1456bb102(local_e8,param_1);
  puVar5 = &local_80;
  FUN_1447c3578(local_b8,puVar5,local_e8);
  if (local_60 == 3) {
    uVar3 = 3;
    uVar7 = local_80;
  }
  else {
    puVar6 = &local_58;
    FUN_1400b56fe(puVar6,&local_80,3);
    uVar7 = 0;
    if (local_38 != 0) {
      uVar7 = local_58;
    }
    pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
    if (pcVar2 != (code *)0x0) {
      if (0x18 < local_40) {
        puVar6 = (undefined4 *)CONCAT44(uStack_54,local_58);
      }
      (*pcVar2)(puVar6);
    }
    if (0x18 < local_40) {
      FUN_1400020a8(CONCAT44(uStack_54,local_58));
    }
    uVar3 = (uint)local_60;
  }
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar3 * 0x120));
  if (pcVar2 != (code *)0x0) {
    if (0x18 < local_68) {
      puVar5 = (undefined4 *)CONCAT44(uStack_7c,local_80);
    }
    (*pcVar2)(puVar5);
  }
  if (0x18 < local_68) {
    FUN_1400020a8(CONCAT44(uStack_7c,local_80));
  }
  FUN_1448173f8(local_c0);
  if ((local_e8[0] == '\x03') && (local_d8 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_d8 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_d8 + 0x10))();
    }
  }
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_90 * 0x120));
  if (pcVar2 != (code *)0x0) {
    ppppuVar4 = (undefined8 ****)local_b0[0];
    if (local_98 < 0x19) {
      ppppuVar4 = local_b0;
    }
    (*pcVar2)(ppppuVar4);
  }
  if (0x18 < local_98) {
    FUN_1400020a8(local_b0[0]);
  }
  if ((local_30 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 141333d14 FUN_141333d14 body=235 status=ok
// SIG undefined FUN_141333d14(void)

void FUN_141333d14(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar1 = (longlong *)(param_1 + -0x390);
  param_2 = (longlong *)*param_2;
  if (param_2 != (longlong *)0x0) {
    lVar2 = (**(code **)(*param_2 + 8))(param_2);
    lVar3 = FUN_1458f96d4();
    if (((lVar3 != 0) && (*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
        lVar3 + 0x30)) {
      *(longlong **)(param_1 + 0x68) = param_2;
      FUN_14078a36a(param_1 + 0x240,param_1 + 8);
      FUN_1458f970e(*(undefined8 *)(param_1 + 0x68),local_38);
      FUN_14078b280(param_1 + 0x5d0,plVar1,local_38);
      if (local_38[0] != 0) {
        FUN_1400020a8();
      }
      goto LAB_141333d55;
    }
  }
  *(undefined8 *)(param_1 + 0x68) = 0;
  FUN_140355e94(param_1 + 0x5d0);
LAB_141333d55:
  (**(code **)(*plVar1 + 0x678))(plVar1);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141333e00 FUN_141333e00 body=54 status=ok
// SIG undefined FUN_141333e00(void)

void FUN_141333e00(longlong *param_1)

{
  FUN_143c6174e(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 141333e36 FUN_141333e36 body=442 status=ok
// SIG undefined FUN_141333e36(void)

undefined8 * FUN_141333e36(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0x1c) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x1e) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = &PTR_FUN_14ac3d210;
  FUN_14044066a(param_1 + 7,0x14,1);
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0x1010101;
  *(undefined1 *)((longlong)param_1 + 0x7c) = 1;
  *param_1 = &PTR_FUN_14ac47f90;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 2;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0;
  *(undefined8 *)((longlong)param_1 + 0x99) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa1) = 0x1010001;
  *(undefined1 *)((longlong)param_1 + 0xa5) = 0;
  uVar1 = DAT_14c8464e8;
  param_1[0x15] = DAT_14c8464e0;
  param_1[0x16] = uVar1;
  param_1[0x17] = DAT_14c8464f0;
  *(undefined2 *)(param_1 + 0x18) = 0;
  *(undefined1 *)((longlong)param_1 + 0xc2) = 0;
  param_1[0x19] = 0;
  *(undefined2 *)(param_1 + 0x1d) = 0x18;
  uVar4 = DAT_14c846500._4_4_;
  uVar3 = (undefined4)DAT_14c846500;
  uVar2 = DAT_14c8464f8._4_4_;
  *(undefined4 *)(param_1 + 0x1a) = (undefined4)DAT_14c8464f8;
  *(undefined4 *)((longlong)param_1 + 0xd4) = uVar2;
  *(undefined4 *)(param_1 + 0x1b) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0xdc) = uVar4;
  param_1[0x1c] = DAT_14c846508;
  *(undefined1 *)(param_1 + 0x1e) = 5;
  *(char *)(param_1 + 0x1f) = ((DAT_14c9a8ab4 & 0x20) == 0) * '\x05';
  *(undefined2 *)(param_1 + 0x20) = 0x100;
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  *(undefined1 *)(param_1 + 0x23) = 0;
  FUN_14044066a(param_1 + 0x24,3,0x14);
  *(undefined1 *)(param_1 + 0x2b) = 0;
  FUN_14044066a(param_1 + 0x2c,3,0x14);
  *(undefined1 *)(param_1 + 0x33) = 0;
  *(undefined8 *)((longlong)param_1 + 0x19c) = 0x1000100000000;
  *(undefined1 *)((longlong)param_1 + 0x1a4) = 0;
  param_1[0x35] = 0;
  *(undefined2 *)(param_1 + 0x39) = 4;
  *(undefined4 *)(param_1 + 0x36) = 5;
  *(undefined1 *)(param_1 + 0x3a) = 2;
  *(byte *)(param_1 + 0x3b) = (byte)~DAT_14c9a8754 >> 4 & 2;
  *(undefined2 *)(param_1 + 0x3c) = 1;
  return param_1;
}



// FUNCTION 141333ff0 FUN_141333ff0 body=958 status=ok
// SIG undefined FUN_141333ff0(void)

void FUN_141333ff0(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  int iVar5;
  char cVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_2d8 [32];
  undefined1 local_2b8;
  uint local_2b0;
  undefined4 uStack_2ac;
  undefined4 local_2a8;
  undefined4 local_2a4;
  undefined8 local_2a0;
  undefined8 local_298;
  undefined4 *local_290;
  char local_288;
  undefined4 local_280 [128];
  undefined4 local_80 [10];
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_2d8;
  FUN_14082167c();
  if (*(int *)(param_1 + 0x78) != 0) {
    puVar1 = (undefined8 *)(param_1 + 0x78);
    FUN_141193194(param_1,param_2,puVar1);
    local_298._0_4_ = *(undefined4 *)(param_1 + 0x80);
    local_2a0._0_4_ = (uint)*puVar1;
    local_2a0._4_4_ = (undefined4)((ulonglong)*puVar1 >> 0x20);
    FUN_140fe4afa(param_1,local_80,&local_2a0,&DAT_14cbcdab8);
    param_2 = param_2 + 0x2c0;
    lVar7 = FUN_1406b2efc(param_2);
    local_2a0._0_4_ = (uint)local_2a0 & 0xffffff00;
    local_2a0._4_4_ = 0;
    local_298._0_4_ = 0;
    local_298._4_4_ = 0;
    FUN_144976b9c(&local_2a0,DAT_14cbcdad0);
    local_2b8 = 0;
    FUN_140641812(lVar7 + 8,local_80,&local_2a0,0);
    local_2a0._0_4_ = (uint)local_2a0 & 0xffffff00;
    local_2a0._4_4_ = 0;
    local_298._0_4_ = 0;
    local_298._4_4_ = 0;
    FUN_144976b9c(&local_2a0,DAT_14cbcdad8);
    local_2b8 = 0;
    FUN_140641812(lVar7 + 0xb0,local_80,&local_2a0,0);
    local_2a0._0_4_ = (uint)local_2a0 & 0xffffff00;
    local_2a0._4_4_ = 0;
    local_298._0_4_ = 0;
    local_298._4_4_ = 0;
    FUN_144976b9c(&local_2a0,DAT_14cbcdad8);
    local_2b8 = 0;
    uVar8 = FUN_140641812(lVar7 + 0x220,local_80,&local_2a0,0);
    lVar9 = FUN_140c80b38(uVar8);
    *(undefined1 *)(lVar9 + 0x10) = 1;
    local_2a0 = local_280;
    local_288 = '\0';
    local_290 = local_80;
    local_298 = local_2a0;
    FUN_14014e8d0(local_80,&local_2a0);
    if (local_290 <= local_298 + 1) {
      FUN_145753a78(&local_2a0,4);
    }
    *local_298 = 0x203d3d20;
    local_298 = local_298 + 1;
    FUN_14014edce(&DAT_14cbcdaf0,&local_2a0);
    if (local_290 <= (undefined4 *)((longlong)local_298 + 1)) {
      FUN_145753a78(&local_2a0,1);
    }
    *(undefined1 *)local_298 = 0;
    local_298 = (undefined4 *)((longlong)local_298 + 1);
    FUN_140822110(&local_2b0,&local_2a0,0);
    FUN_140822770(param_2,&local_2b0,1);
    FUN_1447cd778(CONCAT44(uStack_2ac,local_2b0),local_2a8);
    if (CONCAT44(uStack_2ac,local_2b0) != 0) {
      FUN_1400020a8();
    }
    lVar9 = FUN_1406b3bde(param_2);
    iVar5 = *(int *)(lVar9 + 0x150);
    *(uint *)(lVar9 + 0x150) = iVar5 + 1U;
    if (*(uint *)(lVar9 + 0x154) < iVar5 + 1U) {
      FUN_1406419cc((longlong *)(lVar9 + 0x148),iVar5);
    }
    plVar4 = (longlong *)(*(longlong *)(lVar9 + 0x148) + (longlong)iVar5 * 0x18);
    *plVar4 = 0;
    plVar4[1] = 0;
    plVar4[2] = 0;
    uVar8 = FUN_1413343b0();
    lVar10 = 0;
    FUN_140005f6c(plVar4,uVar8,0,0);
    lVar9 = *plVar4;
    if (lVar9 != 0) {
      uVar8 = FUN_1413343b0();
      cVar6 = FUN_1448093f4(lVar9,uVar8);
      if (cVar6 == '\0') {
        lVar10 = 0;
      }
      else {
        lVar10 = *plVar4;
        plVar4 = (longlong *)plVar4[1];
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
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
      }
    }
    *(undefined4 *)(lVar10 + 0x28) = *(undefined4 *)(param_1 + 0x80);
    *(undefined8 *)(lVar10 + 0x20) = *puVar1;
    lVar9 = FUN_140c80b38(lVar10);
    *(undefined1 *)(lVar9 + 0x10) = 0;
    local_2b0 = local_2b0 & 0xffffff00;
    uStack_2ac = 0;
    local_2a8 = 0;
    local_2a4 = 0;
    FUN_144976b9c(&local_2b0,DAT_14cbcdad0);
    local_2b8 = 0;
    FUN_140641812(lVar7 + 0x58,local_80,&local_2b0,0);
    if (local_288 == '\x01') {
      FUN_1400020a8(local_2a0);
    }
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_2d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1413343b0 FUN_1413343b0 body=57 status=ok
// SIG undefined FUN_1413343b0(void)

void FUN_1413343b0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba57c8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba57c8 = FUN_140002ddd(FUN_1465c368c,uVar1,L"MissionActionType_WaitForEchoLogIO");
  }
  return;
}



// FUNCTION 1413343ea FUN_1413343ea body=651 status=ok
// SIG undefined FUN_1413343ea(void)

void FUN_1413343ea(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_80;
  wchar_t *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  code **local_60;
  undefined1 *local_58;
  undefined1 *local_50;
  undefined8 local_40;
  undefined8 local_38;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(char *)(param_1 + 0xac2) == '\x03') {
    FUN_140f68c5c(param_1);
  }
  *(undefined1 *)(param_1 + 0xac2) = 1;
  if ((*(longlong *)(param_1 + 0xac8) == 0) || (*(char *)(param_1 + 0x178) != '\x03'))
  goto LAB_141334432;
  FUN_1447f69b6(&DAT_000050c8 + *(longlong *)(param_1 + 0xac8));
  if ((*(longlong *)(param_1 + 0xaa0) != 0) && (*(char *)(param_1 + 0xac1) == '\0')) {
    FUN_141334676(param_1,*(longlong *)(param_1 + 0xaa0) + 0x48);
    lVar3 = (**(code **)(**(longlong **)(param_1 + 0xac8) + 0x5d8))();
    if (lVar3 != 0) {
      lVar4 = *(longlong *)(lVar3 + 0x430);
      if (lVar4 == 0) {
LAB_14133466f:
        lVar3 = 0;
      }
      else {
        if (DAT_14cae9568 == 0) {
          local_60 = &local_28;
          local_28 = FUN_1417de738;
          local_50 = &LAB_145893408;
          local_58 = &LAB_1458cbbd2;
          local_68 = &LAB_147ba21f1;
          local_70 = &LAB_1463e9233;
          local_78 = L"Engine";
          local_80 = 0;
          local_88 = 0x1000000c;
          local_90 = 8;
          local_98 = CONCAT44(local_98._4_4_,0x2b8);
          FUN_14081cfa3(L"/Script/Engine",L"LocalPlayer",&DAT_14cae9568,&DAT_147ba21f0);
          lVar4 = *(longlong *)(lVar3 + 0x430);
          if (lVar4 == 0) goto LAB_14133466f;
        }
        lVar3 = 0;
        if ((DAT_14cae9568 != 0) && (lVar1 = *(longlong *)(lVar4 + 0x10), lVar1 != 0)) {
          if (*(int *)(lVar1 + 0x38) < *(int *)(DAT_14cae9568 + 0x38)) goto LAB_14133466f;
          lVar3 = 0;
          if (*(longlong *)
               (*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(DAT_14cae9568 + 0x38) * 8) ==
              DAT_14cae9568 + 0x30) {
            lVar3 = lVar4;
          }
        }
      }
      lVar3 = FUN_1404960a8(lVar3);
      if (lVar3 != 0) {
        puVar5 = (undefined8 *)FUN_14001cc68(0x10,0x10);
        *puVar5 = &PTR_FUN_14b977838;
        *(undefined1 *)(puVar5 + 1) = 1;
        FUN_14039144e(lVar3,puVar5);
      }
    }
  }
  if ((*(longlong *)(param_1 + 0x960) != 0) && (*(char *)(param_1 + 0xac1) == '\0')) {
    cVar2 = FUN_140226bbe(*(undefined8 *)(param_1 + 0xac8));
    if (cVar2 == '\0') {
      FUN_1413347e6(*(undefined8 *)(param_1 + 0xac8),2);
    }
    else {
      local_98 = 0;
      FUN_140b32deb(&local_40,*(undefined8 *)(param_1 + 0xac8),*(longlong *)(param_1 + 0x960) + 0x68
                    ,0);
      local_40 = 0;
      local_38 = 0xffffffffffffffff;
    }
  }
LAB_141334432:
  FUN_1447cd2ec(param_1 + 0x920,0);
  if ((local_20 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141334676 FUN_141334676 body=367 status=ok
// SIG undefined FUN_141334676(void)

void FUN_141334676(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined1 auStack_a8 [32];
  uint local_88;
  uint local_80;
  undefined4 local_78;
  longlong local_70;
  undefined2 *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  code **local_50;
  undefined1 *local_48;
  code *local_40;
  code *local_38;
  undefined4 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar1 = (**(code **)(**(longlong **)(param_1 + 0xac8) + 0x5d8))();
  if (lVar1 != 0) {
    if (DAT_14cbadd90 == 0) {
      local_50 = &local_38;
      local_38 = FUN_141030f22;
      local_40 = FUN_14081d0ea;
      local_48 = &LAB_1459f2e4c;
      local_58 = &LAB_148c39de3;
      local_60 = &LAB_1457a9eb2;
      local_68 = &DAT_149e063b2;
      local_70 = 0;
      local_78 = 0x10000004;
      local_80 = 0x10;
      local_88 = 0x3de0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
    }
    if ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) {
      local_38 = (code *)*param_2;
      local_30 = *(undefined4 *)(param_2 + 1);
      local_28 = 0;
      local_80 = local_80 & 0xffffff00;
      local_88 = local_88 & 0xffffff00;
      local_78 = 0x3f800000;
      local_70 = param_1;
      FUN_140cab31c(lVar1,&local_38,0xff,lVar1 + 0x960);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1413347e6 FUN_1413347e6 body=365 status=ok
// SIG undefined FUN_1413347e6(void)

void FUN_1413347e6(longlong param_1)

{
  longlong lVar1;
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
  if ((*(char *)(param_1 + 0x178) == '\x03') && (lVar1 = *(longlong *)(param_1 + 0x3c0), lVar1 != 0)
     ) {
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
      lVar1 = *(longlong *)(param_1 + 0x3c0);
      if (lVar1 == 0) goto LAB_141334943;
    }
    if ((((DAT_14cbadd90 != 0) && (lVar1 = *(longlong *)(lVar1 + 0x10), lVar1 != 0)) &&
        (*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
       ((*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8)
         == DAT_14cbadd90 + 0x30 && (lVar1 = FUN_140f98f3c(), lVar1 != 0)))) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
    }
  }
LAB_141334943:
  if ((local_18 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141334968 FUN_141334968 body=1582 status=ok
// SIG undefined FUN_141334968(void)

void FUN_141334968(longlong *param_1,undefined4 param_2)

{
  int *piVar1;
  longlong *plVar2;
  bool bVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong *plVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_168 [32];
  longlong *local_148;
  undefined8 local_138;
  longlong *local_130;
  longlong local_128;
  ulonglong uStack_120;
  longlong local_118;
  longlong *plStack_110;
  longlong local_108;
  longlong *local_100;
  longlong *local_f8;
  ulonglong uStack_f0;
  longlong *local_e8;
  longlong *plStack_e0;
  undefined4 local_cc;
  longlong *local_c8;
  longlong *plStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  longlong local_78;
  int local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_cc = param_2;
  FUN_140b708a0();
  local_b8 = 0;
  plVar5 = (longlong *)FUN_1401e3228();
  if (plVar5 == (longlong *)0x0) {
    local_e8 = (longlong *)0x0;
    plStack_e0 = (longlong *)0x0;
    goto LAB_141334d08;
  }
  (**(code **)(*plVar5 + 0x28))(plVar5,&local_e8);
  if (local_e8 == (longlong *)0x0) goto LAB_141334d08;
  local_f8 = (longlong *)0x0;
  uStack_f0 = 0;
  (**(code **)(*local_e8 + 0x1c8))(local_e8,local_cc,&DAT_14cb97068,&local_f8);
  local_98 = 0;
  local_90 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_8c = 0xffffffff00000080;
  local_84 = 0;
  local_78 = 0;
  local_70 = 0;
  uVar8 = (uint)uStack_f0;
  if ((longlong)(int)(uint)uStack_f0 != 0) {
    if ((int)(uint)uStack_f0 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)(uint)uStack_f0);
    }
    FUN_1413353b8(&local_b8,uStack_f0 & 0xffffffff);
    if (uVar8 < 4) {
      iVar4 = 1;
    }
    else {
      uVar8 = (uVar8 | 1) + 0xe;
      iVar4 = 0x1f;
      if (uVar8 != 0) {
        for (; uVar8 >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      iVar4 = 1 << ((byte)iVar4 & 0x1f);
    }
    if ((local_70 == 0) || (local_70 < iVar4)) {
      local_70 = iVar4;
      FUN_14133555e();
    }
  }
  FUN_145cf83a8(param_1,&local_108,local_cc,0);
  if ((longlong)(int)(uint)uStack_f0 != 0) {
    lVar10 = (longlong)(int)(uint)uStack_f0 << 4;
    plVar5 = local_f8;
    do {
      (**(code **)(*(longlong *)*plVar5 + 8))((longlong *)*plVar5,&local_118);
      local_c8 = &local_118;
      plStack_c0 = plVar5;
      FUN_141334f98(&local_b8,&local_128,&local_c8);
      plVar7 = plStack_110;
      if (plStack_110 != (longlong *)0x0) {
        LOCK();
        plVar2 = plStack_110 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plStack_110)(plStack_110);
          LOCK();
          piVar1 = (int *)((longlong)plVar7 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
          }
        }
      }
      if ((local_108 != 0) && (iVar4 = (**(code **)(*(longlong *)*plVar5 + 0x30))(), iVar4 == 2)) {
        (**(code **)(*(longlong *)*plVar5 + 8))((longlong *)*plVar5,&local_c8);
        FUN_148a6d0ce(param_1,local_108,local_c8,0);
        plVar7 = plStack_c0;
        if (plStack_c0 != (longlong *)0x0) {
          LOCK();
          plVar2 = plStack_c0 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*plStack_c0)(plStack_c0);
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
      plVar5 = plVar5 + 2;
      lVar10 = lVar10 + -0x10;
    } while (lVar10 != 0);
  }
  uVar6 = FUN_1458f9e7a(param_1 + 0x70,local_cc,&local_cc);
  local_c8 = (longlong *)0x0;
  plStack_c0 = (longlong *)0x0;
  local_118 = 0;
  plStack_110 = (longlong *)0x0;
  local_148 = &local_128;
  local_128 = 0;
  uStack_120 = 0;
  FUN_141336b0c(&local_b8,uVar6,&local_c8);
  FUN_1458f9da0(uVar6,&local_b8);
  FUN_1458f9e18(param_1,local_cc,&local_c8);
  lVar10 = (longlong)(int)plStack_c0;
  if (lVar10 < 0x65) {
    if ((int)plStack_c0 != 0) {
      plVar7 = local_c8 + lVar10 * 2;
      plVar5 = local_c8;
      do {
        lVar10 = param_1[0xa8];
        if ((longlong)(int)lVar10 != 0) {
          lVar11 = param_1[0xa7];
          lVar9 = 0;
          do {
            if (*(longlong *)(lVar11 + lVar9) != 0) {
              FUN_143f44d9a(*(longlong *)(lVar11 + lVar9),local_cc,plVar5,0);
            }
            lVar9 = lVar9 + 8;
          } while ((longlong)(int)lVar10 * 8 != lVar9);
        }
        (**(code **)(*param_1 + 0x28))(param_1,local_cc,plVar5);
        plVar5 = plVar5 + 2;
      } while (plVar5 != plVar7);
    }
  }
  else {
    lVar11 = param_1[0xa8];
    if ((longlong)(int)lVar11 != 0) {
      lVar10 = param_1[0xa7];
      lVar9 = 0;
      do {
        if (*(longlong *)(lVar10 + lVar9) != 0) {
          FUN_143f4527c(*(longlong *)(lVar10 + lVar9),local_cc,&local_c8,0);
        }
        lVar9 = lVar9 + 8;
      } while ((longlong)(int)lVar11 * 8 != lVar9);
      lVar10 = (longlong)(int)plStack_c0;
      if (lVar10 == 0) goto LAB_141334c0b;
    }
    plVar7 = local_c8 + lVar10 * 2;
    plVar5 = local_c8;
    do {
      (**(code **)(*param_1 + 0x28))(param_1,local_cc,plVar5);
      plVar5 = plVar5 + 2;
    } while (plVar5 != plVar7);
  }
LAB_141334c0b:
  lVar10 = local_118;
  lVar11 = (longlong)(int)plStack_110;
  if (lVar11 == 0) {
    bVar3 = false;
  }
  else {
    lVar9 = 0;
    do {
      (**(code **)(**(longlong **)(lVar10 + lVar9) + 8))(*(longlong **)(lVar10 + lVar9),&local_138);
      (**(code **)(*param_1 + 0x30))(param_1,local_cc,local_138);
      plVar5 = local_130;
      if (local_130 != (longlong *)0x0) {
        LOCK();
        plVar7 = local_130 + 1;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)*plVar7 == 0) {
          (**(code **)*local_130)(local_130);
          LOCK();
          piVar1 = (int *)((longlong)plVar5 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
          }
        }
      }
      lVar9 = lVar9 + 0x10;
    } while (lVar11 * 0x10 != lVar9);
    bVar3 = 0 < (int)plStack_110;
  }
  if (((0 < (int)plStack_c0) || (bVar3)) || (0 < (int)uStack_120)) {
    (**(code **)(*param_1 + 0x20))(param_1,local_cc);
  }
  FUN_141242f30(param_1,local_cc);
  FUN_140b6c1c2(local_128,uStack_120 & 0xffffffff);
  if (local_128 != 0) {
    FUN_1400020a8();
  }
  FUN_140b6c1c2(local_118,(ulonglong)plStack_110 & 0xffffffff);
  if (local_118 != 0) {
    FUN_1400020a8();
  }
  FUN_140b6c1c2(local_c8,(ulonglong)plStack_c0 & 0xffffffff);
  if (local_c8 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (local_100 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_100 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_100)(local_100);
      LOCK();
      piVar1 = (int *)((longlong)local_100 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_100 + 0x10))(local_100);
      }
    }
  }
  local_70 = 0;
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  FUN_14581b6ec(&local_b8);
  FUN_140b6c1c2(local_f8,uStack_f0 & 0xffffffff);
  if (local_f8 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_141334d08:
  plVar5 = plStack_e0;
  if (plStack_e0 != (longlong *)0x0) {
    LOCK();
    plVar7 = plStack_e0 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*plStack_e0)(plStack_e0);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141334f98 FUN_141334f98 body=798 status=ok
// SIG undefined FUN_141334f98(void)

int * FUN_141334f98(longlong *param_1,int *param_2,longlong *param_3)

{
  int *piVar1;
  uint *puVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  byte bVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  longlong *plVar19;
  ulonglong uVar20;
  int iVar21;
  longlong lVar22;
  int iVar23;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar21 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar21 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar21) {
      FUN_140549c28(param_1,iVar21);
    }
    lVar22 = (longlong)iVar21;
    iVar23 = FUN_144a54ea4(param_1 + 2,1);
    plVar19 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar19 = param_1 + 2;
    }
    iVar16 = iVar23 + 0x1f;
    if (-1 < iVar23) {
      iVar16 = iVar23;
    }
    bVar8 = (byte)iVar23 & 0x1f;
    puVar2 = (uint *)((longlong)plVar19 + (longlong)(iVar16 >> 5) * 4);
    *puVar2 = *puVar2 & (-2 << bVar8 | 0xfffffffeU >> 0x20 - bVar8);
  }
  else {
    iVar21 = (int)param_1[6];
    lVar22 = (longlong)iVar21;
    iVar23 = *(int *)(*param_1 + 4 + lVar22 * 0x28);
    *(int *)(param_1 + 6) = iVar23;
    iVar16 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar16;
    if (iVar16 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar23 * 0x28) = 0xffffffff;
    }
  }
  plVar19 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar19 = (longlong *)param_1[4];
  }
  iVar23 = iVar21 + 0x1f;
  if (-1 < iVar21) {
    iVar23 = iVar21;
  }
  puVar2 = (uint *)((longlong)plVar19 + (longlong)(iVar23 >> 5) * 4);
  *puVar2 = *puVar2 | 1 << ((byte)iVar21 & 0x1f);
  puVar3 = (undefined8 *)(*param_1 + lVar22 * 0x28);
  puVar5 = (undefined8 *)*param_3;
  puVar6 = (undefined8 *)param_3[1];
  *puVar3 = *puVar5;
  lVar22 = puVar5[1];
  puVar3[1] = lVar22;
  if (lVar22 != 0) {
    LOCK();
    *(int *)(lVar22 + 8) = *(int *)(lVar22 + 8) + 1;
    UNLOCK();
  }
  puVar3[2] = *puVar6;
  lVar22 = puVar6[1];
  puVar3[3] = lVar22;
  if (lVar22 != 0) {
    LOCK();
    *(int *)(lVar22 + 8) = *(int *)(lVar22 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(puVar3 + 4) = 0xffffffff;
  plVar19 = (longlong *)*puVar3;
  plVar7 = (longlong *)puVar3[1];
  if (plVar7 == (longlong *)0x0) {
    uVar17 = (**(code **)(*plVar19 + 0x40))();
  }
  else {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    uVar17 = (**(code **)(*plVar19 + 0x40))();
    LOCK();
    plVar19 = plVar7 + 1;
    *(int *)plVar19 = (int)*plVar19 + -1;
    UNLOCK();
    if ((int)*plVar19 == 0) {
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
  iVar23 = 1;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) == 1) {
    uVar18 = 1;
  }
  else {
    local_58 = *puVar3;
    plVar19 = (longlong *)puVar3[1];
    local_50 = plVar19;
    if (plVar19 == (longlong *)0x0) {
      iVar16 = FUN_141337140(param_1,uVar17,&local_58);
    }
    else {
      LOCK();
      *(int *)(plVar19 + 1) = (int)plVar19[1] + 1;
      UNLOCK();
      iVar16 = FUN_141337140(param_1,uVar17);
      if (plVar19 != (longlong *)0x0) {
        LOCK();
        plVar7 = plVar19 + 1;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)*plVar7 == 0) {
          (**(code **)*plVar19)(plVar19);
          LOCK();
          piVar1 = (int *)((longlong)plVar19 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar19 + 0x10))(plVar19);
          }
        }
      }
    }
    if (iVar16 != -1) {
      puVar4 = (undefined4 *)(*param_1 + (longlong)iVar16 * 0x28);
      FUN_148a6edde(puVar4);
      uVar9 = *(undefined4 *)puVar3;
      uVar10 = *(undefined4 *)((longlong)puVar3 + 4);
      uVar11 = *(undefined4 *)(puVar3 + 1);
      uVar12 = *(undefined4 *)((longlong)puVar3 + 0xc);
      uVar13 = *(undefined4 *)((longlong)puVar3 + 0x14);
      uVar14 = *(undefined4 *)(puVar3 + 3);
      uVar15 = *(undefined4 *)((longlong)puVar3 + 0x1c);
      puVar4[4] = *(undefined4 *)(puVar3 + 2);
      puVar4[5] = uVar13;
      puVar4[6] = uVar14;
      puVar4[7] = uVar15;
      *puVar4 = uVar9;
      puVar4[1] = uVar10;
      puVar4[2] = uVar11;
      puVar4[3] = uVar12;
      FUN_148a7761a(param_1,iVar21);
      goto LAB_14133516f;
    }
    uVar18 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
    if (3 < uVar18) {
      uVar20 = (ulonglong)(uVar18 & 0xfffffffe) + 0xf;
      lVar22 = 0x3f;
      if (uVar20 != 0) {
        for (; uVar20 >> lVar22 == 0; lVar22 = lVar22 + -1) {
        }
      }
      iVar23 = 1 << ((byte)lVar22 & 0x1f);
    }
  }
  iVar16 = iVar21;
  if (((int)uVar18 < 1) || (iVar23 <= (int)param_1[9])) {
    uVar17 = (int)param_1[9] - 1U & uVar17;
    *(uint *)((longlong)puVar3 + 0x24) = uVar17;
    plVar19 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar19 = param_1 + 7;
    }
    *(undefined4 *)(puVar3 + 4) =
         *(undefined4 *)
          ((longlong)plVar19 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar17) * 4);
    plVar19 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar19 = param_1 + 7;
    }
    *(int *)((longlong)plVar19 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar17) * 4) =
         iVar21;
  }
  else {
    *(int *)(param_1 + 9) = iVar23;
    FUN_14133555e(param_1);
  }
LAB_14133516f:
  *param_2 = iVar16;
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1413352b8 FUN_1413352b8 body=256 status=ok
// SIG undefined FUN_1413352b8(void)

longlong * FUN_1413352b8(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong *plVar7;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_141164fb0(param_1,(ulonglong)uVar1);
    lVar4 = param_1[1];
    *(uint *)(param_1 + 1) = (int)lVar4 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar4) < uVar1) {
      FUN_140549c28(param_1);
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2);
    if (0 < (int)uVar1) {
      lVar4 = *param_1;
      lVar2 = *param_2;
      lVar5 = 0;
      uVar6 = 0;
      do {
        plVar7 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar7 = param_2 + 2;
        }
        if ((*(uint *)((longlong)plVar7 + (uVar6 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar6 & 0x1f) & 1)
            == 0) {
          *(undefined4 *)(lVar4 + lVar5) = *(undefined4 *)(lVar2 + lVar5);
          *(undefined4 *)(lVar4 + 4 + lVar5) = *(undefined4 *)(lVar2 + 4 + lVar5);
        }
        else {
          *(undefined8 *)(lVar4 + lVar5) = *(undefined8 *)(lVar2 + lVar5);
          lVar3 = *(longlong *)(lVar2 + 8 + lVar5);
          *(longlong *)(lVar4 + 8 + lVar5) = lVar3;
          if (lVar3 != 0) {
            LOCK();
            *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
            UNLOCK();
          }
          *(undefined8 *)(lVar4 + 0x10 + lVar5) = *(undefined8 *)(lVar2 + 0x10 + lVar5);
          lVar3 = *(longlong *)(lVar2 + 0x18 + lVar5);
          *(longlong *)(lVar4 + 0x18 + lVar5) = lVar3;
          if (lVar3 != 0) {
            LOCK();
            *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
            UNLOCK();
          }
          *(undefined8 *)(lVar4 + 0x20 + lVar5) = *(undefined8 *)(lVar2 + 0x20 + lVar5);
        }
        uVar6 = uVar6 + 1;
        lVar5 = lVar5 + 0x28;
      } while (uVar1 != uVar6);
    }
  }
  return param_1;
}



// FUNCTION 1413353b8 FUN_1413353b8 body=421 status=ok
// SIG undefined FUN_1413353b8(void)

void FUN_1413353b8(longlong *param_1,uint param_2)

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
    iVar10 = *(int *)((longlong)param_1 + 0xc);
    iVar11 = iVar1;
    if (iVar10 < (int)param_2) {
      FUN_140549ad6(param_1);
      iVar11 = (int)param_1[1];
      iVar10 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = iVar11 + uVar8;
    if ((uint)(iVar10 - iVar11) < uVar8) {
      FUN_140549c28(param_1);
    }
    if (iVar11 < (int)param_2) {
      lVar2 = *param_1;
      iVar10 = *(int *)((longlong)param_1 + 0x34);
      puVar5 = (undefined4 *)(lVar2 + uVar6 * 0x28 + -0x24);
      do {
        iVar9 = (int)uVar6;
        if (iVar10 != 0) {
          *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x28) = iVar9 + -1;
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
        puVar5 = puVar5 + -10;
      } while ((longlong)iVar11 < (longlong)uVar6);
    }
    if (iVar1 == 0) {
      plVar7 = param_1 + 2;
      *(uint *)(param_1 + 5) = uVar8;
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
    else if (-1 < (int)uVar8) {
      uVar3 = FUN_144a54ea4(param_1 + 2,uVar8);
      FUN_1447c6044(param_1 + 2,uVar3,uVar8,0);
      return;
    }
  }
  return;
}



// FUNCTION 14133555e FUN_14133555e body=502 status=ok
// SIG undefined FUN_14133555e(void)

void FUN_14133555e(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong *plVar10;
  uint uVar11;
  int iVar12;
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
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar3 = *(uint *)(param_1 + 9);
  uVar6 = local_68;
  if (uVar3 != 0) {
    plVar1 = param_1 + 7;
    uVar11 = 0;
    FUN_144a1cbf0(plVar1,0,uVar3,4);
    if (0 < (int)uVar3) {
      do {
        plVar10 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar10 = plVar1;
        }
        *(undefined4 *)((longlong)plVar10 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar11) * 4)
             = 0xffffffff;
        uVar11 = uVar11 + 1;
      } while (uVar3 != uVar11);
    }
    local_50 = param_1 + 2;
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    local_40 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_58);
    }
    local_78 = local_58;
    local_70 = local_50;
    local_68 = local_48;
    uVar6 = local_68;
    local_60 = local_40;
    local_5c = local_3c;
    local_68._4_4_ = (int)((ulonglong)local_48 >> 0x20);
    local_80 = param_1;
    if (local_68._4_4_ < (int)local_50[3]) {
      iVar12 = local_68._4_4_;
      local_68 = uVar6;
      do {
        lVar4 = *local_80;
        lVar9 = (longlong)iVar12;
        plVar10 = *(longlong **)(lVar4 + lVar9 * 0x28);
        plVar5 = *(longlong **)(lVar4 + 8 + lVar9 * 0x28);
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
          UNLOCK();
        }
        lVar4 = lVar4 + lVar9 * 0x28;
        iVar7 = (**(code **)(*plVar10 + 0x40))();
        uVar8 = (longlong)iVar7 & (longlong)(int)param_1[9] - 1U;
        iVar7 = (int)uVar8;
        *(int *)(lVar4 + 0x24) = iVar7;
        plVar10 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar10 = plVar1;
        }
        *(undefined4 *)(lVar4 + 0x20) =
             *(undefined4 *)((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & uVar8) * 4);
        plVar10 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar10 = plVar1;
        }
        *(int *)((longlong)plVar10 + ((longlong)iVar7 & (longlong)(int)param_1[9] - 1U) * 4) =
             iVar12;
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar10 = plVar5 + 1;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)*plVar10 == 0) {
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
        local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~local_78._4_4_);
        FUN_1449c0562(&local_78);
        iVar12 = local_68._4_4_;
        uVar6 = local_68;
      } while (local_68._4_4_ < (int)local_70[3]);
    }
  }
  local_68 = uVar6;
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141335756 FUN_141335756 body=668 status=ok
// SIG undefined FUN_141335756(void)

void FUN_141335756(longlong param_1,uint param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  longlong lVar7;
  undefined8 uVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong *local_60;
  longlong local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(int *)(param_1 + 0xb8) != *(int *)(param_1 + 0xe4)) {
    lVar7 = param_1 + 0xe8;
    if (*(longlong *)(param_1 + 0xf0) != 0) {
      lVar7 = *(longlong *)(param_1 + 0xf0);
    }
    iVar9 = *(int *)(lVar7 + (ulonglong)(*(int *)(param_1 + 0xf8) - 1U & param_2) * 4);
    if (iVar9 != -1) {
      do {
        if (*(uint *)(*(longlong *)(param_1 + 0xb0) + (longlong)iVar9 * 0xc) == param_2) {
          cVar6 = FUN_144729dda(param_1 + 0xa8);
          if (cVar6 != '\0') {
            lVar7 = FUN_14479d2ce(param_1 + 0xa8);
            if ((longlong)*(int *)(lVar7 + 0x40) != 0) {
              lVar10 = 0;
              goto LAB_141335807;
            }
          }
          break;
        }
        iVar9 = *(int *)(*(longlong *)(param_1 + 0xb0) + (longlong)iVar9 * 0xc + 4);
      } while (iVar9 != -1);
    }
  }
  goto LAB_141335915;
  while (lVar10 = lVar10 + 8, (longlong)*(int *)(lVar7 + 0x40) * 8 != lVar10) {
LAB_141335807:
    lVar3 = *(longlong *)(*(longlong *)(lVar7 + 0x38) + lVar10);
    if ((lVar3 != 0) && (*(uint *)(lVar3 + 0xe0) == param_2)) {
      lVar7 = param_3[1];
      if ((longlong)(int)lVar7 != 0) {
        lVar10 = *param_3;
        lVar11 = 0;
        do {
          (**(code **)(**(longlong **)(lVar10 + lVar11) + 8))
                    (*(longlong **)(lVar10 + lVar11),&local_68);
          lVar4 = local_68;
          uVar8 = FUN_140b708a0(param_1);
          FUN_140b6deae(&local_58,uVar8,lVar4);
          plVar5 = local_60;
          if (local_60 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_60 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*local_60)(local_60);
              LOCK();
              piVar2 = (int *)((longlong)plVar5 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar5 + 0x10))(plVar5);
              }
            }
          }
          if (local_58 != 0) {
            uVar8 = FUN_140b6de3c();
            FUN_140b6df48(uVar8,&local_68,lVar3,local_58);
            plVar5 = local_60;
            lVar4 = local_68;
            if (local_60 != (longlong *)0x0) {
              LOCK();
              plVar1 = local_60 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                (**(code **)*local_60)(local_60);
                LOCK();
                piVar2 = (int *)((longlong)plVar5 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*plVar5 + 0x10))(plVar5);
                }
              }
            }
            if (lVar4 == 0) {
              local_68 = local_58;
              local_60 = local_50;
              if (local_50 != (longlong *)0x0) {
                LOCK();
                *(int *)(local_50 + 1) = (int)local_50[1] + 1;
                UNLOCK();
              }
              FUN_1413359f4(param_1,lVar3,&local_68);
              plVar5 = local_60;
              if (local_60 != (longlong *)0x0) {
                LOCK();
                plVar1 = local_60 + 1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)*plVar1 == 0) {
                  (**(code **)*local_60)(local_60);
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
          plVar5 = local_50;
          if (local_50 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_50 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*local_50)(local_50);
              LOCK();
              piVar2 = (int *)((longlong)plVar5 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar5 + 0x10))(plVar5);
              }
            }
          }
          lVar11 = lVar11 + 0x10;
        } while ((longlong)(int)lVar7 * 0x10 != lVar11);
      }
      break;
    }
  }
LAB_141335915:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1413359f4 FUN_1413359f4 body=520 status=ok
// SIG undefined FUN_1413359f4(void)

void FUN_1413359f4(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  undefined8 uVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar9 = FUN_140b6de3c();
  uVar3 = *(undefined4 *)(param_2 + 0xe0);
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,4,0x10);
  local_40 = 4;
  plVar4 = *(longlong **)(param_1 + 0x10);
  if (plVar4 == (longlong *)0x0) {
LAB_141335b2e:
    *local_48 = &PTR_LAB_14b4e4d80;
    LOCK();
    UNLOCK();
    lVar10 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar10 == 0) {
      LOCK();
      UNLOCK();
      lVar10 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    local_48[2] = lVar10;
    *local_48 = &PTR_FUN_14b4e2fb0;
    local_48[3] = 0;
    local_48[4] = 0;
    local_48[5] = param_1;
    *(undefined4 *)(local_48 + 6) = uVar3;
  }
  else {
    iVar8 = (int)plVar4[1];
    do {
      if (iVar8 == 0) goto LAB_141335b2e;
      LOCK();
      iVar6 = (int)plVar4[1];
      bVar11 = iVar8 == iVar6;
      if (bVar11) {
        *(int *)(plVar4 + 1) = iVar8 + 1;
        iVar6 = iVar8;
      }
      iVar8 = iVar6;
      UNLOCK();
    } while (!bVar11);
    uVar5 = *(undefined8 *)(param_1 + 8);
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *local_48 = &PTR_LAB_14b4e4d80;
    LOCK();
    UNLOCK();
    lVar10 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar10 == 0) {
      LOCK();
      UNLOCK();
      lVar10 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    local_48[2] = lVar10;
    *local_48 = &PTR_FUN_14b4e2fb0;
    local_48[3] = uVar5;
    local_48[4] = plVar4;
    LOCK();
    *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
    UNLOCK();
    local_48[5] = param_1;
    *(undefined4 *)(local_48 + 6) = uVar3;
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
  FUN_141335bfe(uVar9,param_2,param_3,&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141335bfe FUN_141335bfe body=1132 status=ok
// SIG undefined FUN_141335bfe(void)

void FUN_141335bfe(longlong *param_1,longlong param_2,undefined8 *param_3,longlong *param_4)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined8 *local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined4 local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  longlong local_60;
  longlong *local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  (**(code **)(*(longlong *)*param_3 + 0x10))((longlong *)*param_3,&local_60);
  if ((longlong)(int)param_1[1] != 0) {
    lVar8 = 0;
    do {
      lVar7 = *(longlong *)(*param_1 + lVar8);
      if ((*(int *)(lVar7 + 0x14) == 0) || (uVar2 = *(uint *)(lVar7 + 0x10), (int)uVar2 < 0)) {
LAB_141335fd7:
        lVar9 = 0;
      }
      else {
        lVar9 = 0;
        if ((int)uVar2 < DAT_14c9647dc) {
          plVar10 = (longlong *)
                    ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
          if (((plVar10 == (longlong *)0x0) || ((int)plVar10[2] != *(int *)(lVar7 + 0x14))) ||
             ((*(uint *)(plVar10 + 1) & 0x10200000) != 0)) goto LAB_141335fd7;
          lVar9 = *plVar10;
        }
      }
      if (((lVar9 == param_2) && (*(longlong *)(lVar7 + 0x18) == local_60)) &&
         (*(longlong *)(lVar7 + 0x70) == 0)) {
        local_70 = 0;
        local_68 = 0;
        FUN_14133606c(&local_70,param_4);
        FUN_14133619e(lVar7,param_3,&local_70);
        goto LAB_141335f6c;
      }
      lVar8 = lVar8 + 0x10;
    } while ((longlong)(int)param_1[1] * 0x10 != lVar8);
  }
  local_80 = (longlong *)0x0;
  local_78 = (longlong *)((ulonglong)local_78 & 0xffffffff00000000);
  FUN_1446efa72(&local_80,0,3,0x10);
  local_78._0_4_ = 3;
  *local_80 = (longlong)&PTR_LAB_14b4f76a0;
  LOCK();
  UNLOCK();
  lVar7 = DAT_14c758608 + 1;
  lVar8 = DAT_14c758608 + 1;
  if (lVar7 == 0) {
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 2;
    lVar8 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar8;
  local_80[2] = lVar7;
  *local_80 = (longlong)&PTR_FUN_14b4f7630;
  local_80[3] = (longlong)param_1;
  local_80[4] = (longlong)FUN_1458c3bfe;
  plVar5 = (longlong *)FUN_14001cc68(0x98,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14b4f7710;
  plVar10 = plVar5 + 2;
  local_58 = local_80;
  local_80 = (longlong *)0x0;
  local_50 = (longlong *)CONCAT44(local_50._4_4_,(undefined4)local_78);
  local_78 = (longlong *)((ulonglong)local_78._4_4_ << 0x20);
  FUN_1458fa760(plVar10,param_2,local_60,&local_58);
  local_58 = plVar10;
  local_50 = plVar5;
  FUN_1458fa8c4(&local_58,plVar10);
  FUN_1449db362(&local_80);
  local_90 = 0;
  local_88 = 0;
  FUN_14133606c(&local_90,param_4);
  FUN_14133619e(plVar10,param_3,&local_90);
  iVar3 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar3 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar3 + 1U) {
    FUN_1458fa964(param_1,iVar3);
  }
  lVar8 = *param_1;
  *(longlong **)(lVar8 + (longlong)iVar3 * 0x10) = plVar10;
  *(longlong **)(lVar8 + 8 + (longlong)iVar3 * 0x10) = plVar5;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  if (((param_1[2] == 0) || (param_1[3] == 0)) || (*(int *)(param_1[3] + 8) < 1)) {
    uVar6 = FUN_1401cb356();
    local_a0 = (undefined8 *)0x0;
    local_98 = 0;
    FUN_1446efa72(&local_a0,0,3,0x10);
    local_98 = 3;
    *local_a0 = &PTR_LAB_149e02020;
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 1;
    lVar8 = DAT_14c758608 + 1;
    if (lVar7 == 0) {
      LOCK();
      UNLOCK();
      lVar7 = DAT_14c758608 + 2;
      lVar8 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar8;
    local_a0[2] = lVar7;
    *local_a0 = &PTR_FUN_14b4f7730;
    local_a0[3] = param_1;
    local_a0[4] = FUN_1459b6590;
    local_a8 = 0;
    FUN_1405f67fc(uVar6,&local_80,&local_a0,L"FUserInfoCache_ExecuteUserInfoQueries");
    param_1[2] = (longlong)local_80;
    local_80 = (longlong *)0x0;
    plVar10 = (longlong *)param_1[3];
    param_1[3] = (longlong)local_78;
    local_78 = (longlong *)0x0;
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar10 + 0x10))();
      }
      if (local_78 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)local_78 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_78 + 0x10))();
        }
      }
    }
    FUN_1449db362(&local_a0);
  }
  plVar10 = local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_50 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
  }
LAB_141335f6c:
  if ((int)param_4[1] != 0) {
    puVar4 = (undefined8 *)*param_4;
    if (puVar4 == (undefined8 *)0x0) goto LAB_141335f7e;
    (**(code **)*puVar4)(puVar4,0);
    FUN_1446efa72(param_4,0,0,0x10);
    *(undefined4 *)(param_4 + 1) = 0;
  }
  if (*param_4 != 0) {
    FUN_1400020a8();
  }
LAB_141335f7e:
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14133606c FUN_14133606c body=305 status=ok
// SIG undefined FUN_14133606c(void)

void FUN_14133606c(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 == param_1) goto LAB_141336106;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  iVar3 = 0;
  if ((int)param_2[1] == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    param_2 = (longlong *)*param_2;
    puVar2 = (undefined8 *)0x0;
    iVar3 = 0;
    if (param_2 != (longlong *)0x0) {
      (**(code **)(*param_2 + 0x40))(param_2,&local_30);
      puVar2 = local_30;
      iVar3 = local_28;
    }
  }
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  if ((int)param_1[1] == 0) {
LAB_1413360df:
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar1 = (undefined8 *)*param_1;
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,0);
      FUN_1446efa72(param_1,0,0,0x10);
      *(undefined4 *)(param_1 + 1) = 0;
      goto LAB_1413360df;
    }
  }
  *param_1 = (longlong)puVar2;
  *(int *)(param_1 + 1) = iVar3;
  if (local_28 != 0) {
    if (local_30 == (undefined8 *)0x0) goto LAB_141336106;
    (**(code **)*local_30)(local_30,0);
    FUN_1446efa72(&local_30,0,0,0x10);
    local_28 = 0;
  }
  if (local_30 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_141336106:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14133619e FUN_14133619e body=1188 status=ok
// SIG undefined FUN_14133619e(void)

void FUN_14133619e(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  longlong *plVar4;
  int *piVar5;
  uint *puVar6;
  longlong *plVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  longlong lVar18;
  byte bVar19;
  int iVar20;
  uint uVar21;
  ulonglong uVar22;
  longlong lVar23;
  int iVar24;
  int iVar25;
  undefined1 auStack_88 [36];
  uint local_64;
  ulonglong local_60;
  undefined8 local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(longlong *)(param_1 + 0x70) == 0) {
    plVar1 = (longlong *)(param_1 + 0x20);
    local_64 = (**(code **)(*(longlong *)*param_2 + 0x40))();
    iVar15 = FUN_1413366bc(plVar1,local_64,param_2);
    if (iVar15 == -1) {
LAB_1413361f8:
      if (*(int *)(param_1 + 0x54) == 0) {
        iVar15 = *(int *)(param_1 + 0x28);
        *(int *)(param_1 + 0x28) = iVar15 + 1;
        if (*(int *)(param_1 + 0x2c) == iVar15) {
          FUN_140549c28(plVar1,iVar15);
        }
        iVar25 = *(int *)(param_1 + 0x48);
        if (iVar25 == 0) {
          iVar16 = -1;
        }
        else {
          iVar16 = iVar25 + 0x1e;
          if (-1 < iVar25 + -1) {
            iVar16 = iVar25 + -1;
          }
          iVar16 = iVar16 >> 5;
        }
        lVar23 = param_1 + 0x30;
        iVar20 = iVar25 + 1;
        iVar24 = iVar25 + 0x1f;
        if (-1 < iVar25) {
          iVar24 = iVar25;
        }
        if (iVar24 >> 5 == iVar16) {
          *(int *)(param_1 + 0x48) = iVar20;
        }
        else {
          if (*(int *)(param_1 + 0x4c) <= iVar25) {
            if (iVar25 + 0x20U < 0xa0) {
              iVar20 = 0x80;
              iVar16 = iVar25;
            }
            else {
              uVar17 = iVar25 + 0x20U >> 5;
              local_60 = (ulonglong)uVar17;
              if (*(int *)(param_1 + 0x4c) + 0x1fU < 0xa0) {
                uVar21 = 4;
                if (4 < uVar17) {
                  uVar21 = uVar17;
                }
              }
              else {
                uVar21 = (uVar17 * 3 >> 3) + uVar17 + 0x10;
              }
              uVar22 = FUN_144a3809e(uVar21 << 2,0);
              iVar16 = (int)(uVar22 >> 2);
              iVar20 = -0x20;
              if ((int)local_60 <= iVar16) {
                iVar20 = iVar16 << 5;
              }
              iVar16 = *(int *)(param_1 + 0x48);
            }
            *(int *)(param_1 + 0x4c) = iVar20;
            FUN_1446efbd8(lVar23,iVar16);
            iVar20 = *(int *)(param_1 + 0x48) + 1;
          }
          iVar16 = iVar20 + 0x1f;
          if (-1 < iVar20) {
            iVar16 = iVar20;
          }
          *(int *)(param_1 + 0x48) = iVar20;
          if (iVar20 % 0x20 != 0) {
            lVar18 = *(longlong *)(param_1 + 0x40);
            if (*(longlong *)(param_1 + 0x40) == 0) {
              lVar18 = lVar23;
            }
            bVar19 = -(char)(iVar20 % 0x20);
            *(uint *)(lVar18 + (longlong)(iVar16 >> 5) * 4) =
                 (uint)(*(int *)(lVar18 + (longlong)(iVar16 >> 5) * 4) << (bVar19 & 0x1f)) >>
                 (bVar19 & 0x1f);
          }
        }
        lVar18 = (longlong)iVar15;
        if (*(longlong *)(param_1 + 0x40) != 0) {
          lVar23 = *(longlong *)(param_1 + 0x40);
        }
        bVar19 = (byte)iVar25 & 0x1f;
        puVar6 = (uint *)(lVar23 + (longlong)(iVar24 >> 5) * 4);
        *puVar6 = *puVar6 & (-2 << bVar19 | 0xfffffffeU >> 0x20 - bVar19);
      }
      else {
        iVar15 = *(int *)(param_1 + 0x50);
        lVar18 = (longlong)iVar15;
        iVar25 = *(int *)(*(longlong *)(param_1 + 0x20) + 4 + lVar18 * 0x28);
        *(int *)(param_1 + 0x50) = iVar25;
        iVar16 = *(int *)(param_1 + 0x54) + -1;
        *(int *)(param_1 + 0x54) = iVar16;
        if (iVar16 != 0) {
          *(undefined4 *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar25 * 0x28) = 0xffffffff;
        }
      }
      iVar25 = 1;
      lVar23 = param_1 + 0x30;
      if (*(longlong *)(param_1 + 0x40) != 0) {
        lVar23 = *(longlong *)(param_1 + 0x40);
      }
      iVar16 = iVar15 + 0x1f;
      if (-1 < iVar15) {
        iVar16 = iVar15;
      }
      puVar6 = (uint *)(lVar23 + (longlong)(iVar16 >> 5) * 4);
      *puVar6 = *puVar6 | 1 << ((byte)iVar15 & 0x1f);
      puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x20) + lVar18 * 0x28);
      *puVar2 = *param_2;
      lVar18 = param_2[1];
      puVar2[1] = lVar18;
      if (lVar18 != 0) {
        LOCK();
        *(int *)(lVar18 + 8) = *(int *)(lVar18 + 8) + 1;
        UNLOCK();
      }
      puVar2[2] = 0;
      puVar2[3] = 0;
      FUN_14133665b(0,0);
      *(undefined4 *)(puVar2 + 4) = 0xffffffff;
      if (*(int *)(param_1 + 0x28) - *(int *)(param_1 + 0x54) == 1) {
        uVar17 = 1;
LAB_14133636e:
        if (((int)uVar17 < 1) || (iVar25 <= *(int *)(param_1 + 0x68))) {
          uVar17 = *(int *)(param_1 + 0x68) - 1U & local_64;
          *(uint *)((longlong)puVar2 + 0x24) = uVar17;
          lVar18 = *(longlong *)(param_1 + 0x60);
          if (*(longlong *)(param_1 + 0x60) == 0) {
            lVar18 = param_1 + 0x58;
          }
          *(undefined4 *)(puVar2 + 4) =
               *(undefined4 *)
                (lVar18 + ((longlong)*(int *)(param_1 + 0x68) - 1U & (longlong)(int)uVar17) * 4);
          lVar18 = *(longlong *)(param_1 + 0x60);
          if (*(longlong *)(param_1 + 0x60) == 0) {
            lVar18 = param_1 + 0x58;
          }
          *(int *)(lVar18 + ((longlong)*(int *)(param_1 + 0x68) - 1U & (longlong)(int)uVar17) * 4) =
               iVar15;
        }
        else {
          *(int *)(param_1 + 0x68) = iVar25;
          FUN_141336882(plVar1);
        }
      }
      else {
        local_58 = *puVar2;
        plVar7 = (longlong *)puVar2[1];
        local_50 = plVar7;
        if (plVar7 == (longlong *)0x0) {
          iVar16 = FUN_1413366bc(plVar1,local_64,&local_58);
        }
        else {
          LOCK();
          *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
          UNLOCK();
          iVar16 = FUN_1413366bc(plVar1,local_64);
          if (plVar7 != (longlong *)0x0) {
            LOCK();
            plVar4 = plVar7 + 1;
            *(int *)plVar4 = (int)*plVar4 + -1;
            UNLOCK();
            if ((int)*plVar4 == 0) {
              (**(code **)*plVar7)(plVar7);
              LOCK();
              piVar5 = (int *)((longlong)plVar7 + 0xc);
              *piVar5 = *piVar5 + -1;
              UNLOCK();
              if (*piVar5 == 0) {
                (**(code **)(*plVar7 + 0x10))(plVar7);
              }
            }
          }
        }
        if (iVar16 == -1) {
          uVar17 = *(int *)(param_1 + 0x28) - *(int *)(param_1 + 0x54);
          if (3 < uVar17) {
            uVar22 = (ulonglong)(uVar17 & 0xfffffffe) + 0xf;
            lVar18 = 0x3f;
            if (uVar22 != 0) {
              for (; uVar22 >> lVar18 == 0; lVar18 = lVar18 + -1) {
              }
            }
            iVar25 = 1 << ((byte)lVar18 & 0x1f);
          }
          goto LAB_14133636e;
        }
        puVar3 = (undefined4 *)(*plVar1 + (longlong)iVar16 * 0x28);
        FUN_148aaf966(puVar3);
        uVar8 = *(undefined4 *)puVar2;
        uVar9 = *(undefined4 *)((longlong)puVar2 + 4);
        uVar10 = *(undefined4 *)(puVar2 + 1);
        uVar11 = *(undefined4 *)((longlong)puVar2 + 0xc);
        uVar12 = *(undefined4 *)((longlong)puVar2 + 0x14);
        uVar13 = *(undefined4 *)(puVar2 + 3);
        uVar14 = *(undefined4 *)((longlong)puVar2 + 0x1c);
        puVar3[4] = *(undefined4 *)(puVar2 + 2);
        puVar3[5] = uVar12;
        puVar3[6] = uVar13;
        puVar3[7] = uVar14;
        *puVar3 = uVar8;
        puVar3[1] = uVar9;
        puVar3[2] = uVar10;
        puVar3[3] = uVar11;
        FUN_148aaf8f4(plVar1,iVar15);
      }
      lVar18 = *plVar1 + (longlong)iVar15 * 0x28;
    }
    else {
      if (*plVar1 + (longlong)iVar15 * 0x28 == 0) goto LAB_1413361f8;
      lVar18 = *plVar1 + (longlong)iVar15 * 0x28;
    }
    iVar15 = *(int *)(lVar18 + 0x18);
    *(uint *)(lVar18 + 0x18) = iVar15 + 1U;
    if (*(uint *)(lVar18 + 0x1c) < iVar15 + 1U) {
      FUN_141336774((longlong *)(lVar18 + 0x10),iVar15);
    }
    lVar18 = *(longlong *)(lVar18 + 0x10);
    lVar23 = (longlong)iVar15 * 0x10;
    *(undefined8 *)(lVar18 + lVar23) = 0;
    *(undefined4 *)(lVar18 + 8 + lVar23) = 0;
    FUN_14133606c(lVar18 + lVar23,param_3);
  }
  if ((int)param_3[1] != 0) {
    puVar2 = (undefined8 *)*param_3;
    if (puVar2 == (undefined8 *)0x0) goto LAB_141336424;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(param_3,0,0,0x10);
    *(undefined4 *)(param_3 + 1) = 0;
  }
  if (*param_3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_88);
  }
LAB_141336424:
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14133665b FUN_14133665b body=96 status=ok
// SIG undefined FUN_14133665b(void)

void FUN_14133665b(longlong *param_1,int param_2)

{
  undefined8 *puVar1;
  
  do {
    if (param_2 == 0) {
      return;
    }
    if ((int)param_1[1] == 0) {
LAB_141336677:
      if (*param_1 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      puVar1 = (undefined8 *)*param_1;
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,0);
        FUN_1446efa72(param_1,0,0,0x10);
        *(undefined4 *)(param_1 + 1) = 0;
        goto LAB_141336677;
      }
    }
    param_1 = param_1 + 2;
    param_2 = param_2 + -1;
  } while( true );
}



// FUNCTION 1413366bc FUN_1413366bc body=183 status=ok
// SIG undefined FUN_1413366bc(void)

int FUN_1413366bc(longlong *param_1,uint param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar8 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar8 != -1) {
      lVar6 = *param_1;
      do {
        lVar7 = (longlong)iVar8;
        puVar3 = *(undefined8 **)(lVar6 + lVar7 * 0x28);
        plVar5 = *(longlong **)(lVar6 + 8 + lVar7 * 0x28);
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
          UNLOCK();
        }
        if (puVar3 == (undefined8 *)*param_3) {
          cVar4 = '\x01';
        }
        else {
          cVar4 = (**(code **)*puVar3)();
        }
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
        if (cVar4 != '\0') {
          return iVar8;
        }
        lVar6 = *param_1;
        iVar8 = *(int *)(lVar6 + 0x20 + lVar7 * 0x28);
      } while (iVar8 != -1);
    }
  }
  return -1;
}



// FUNCTION 141336774 FUN_141336774 body=269 status=ok
// SIG undefined FUN_141336774(void)

void FUN_141336774(longlong param_1,int param_2)

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



// FUNCTION 141336882 FUN_141336882 body=648 status=ok
// SIG undefined FUN_141336882(void)

void FUN_141336882(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  uint uVar13;
  ulonglong uVar14;
  int iVar15;
  undefined1 auStack_98 [36];
  int local_74;
  longlong *local_70;
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar13 = *(uint *)(param_1 + 9);
  if (uVar13 != 0) {
    plVar1 = param_1 + 7;
    FUN_144a1cbf0(plVar1,0,uVar13,4);
    if (0 < (int)uVar13) {
      uVar6 = 0;
      do {
        plVar11 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar11 = plVar1;
        }
        *(undefined4 *)((longlong)plVar11 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar6) * 4)
             = 0xffffffff;
        uVar6 = uVar6 + 1;
      } while (uVar13 != uVar6);
    }
    local_60 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    local_70 = plVar1;
    if ((int)param_1[5] == 0) {
      uVar14 = 1;
      local_58._0_4_ = 0xffffffff;
      local_58._4_4_ = 0;
      local_68._0_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      uVar14 = local_68 >> 0x20;
    }
    plVar1 = local_60;
    iVar15 = (int)local_68;
    uVar13 = (uint)local_58;
    iVar9 = local_58._4_4_;
    iVar7 = local_50;
    if (local_58._4_4_ < (int)local_60[3]) {
      do {
        lVar12 = *param_1;
        lVar10 = (longlong)iVar9;
        plVar11 = *(longlong **)(lVar12 + lVar10 * 0x28);
        plVar4 = *(longlong **)(lVar12 + 8 + lVar10 * 0x28);
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
        }
        lVar12 = lVar12 + lVar10 * 0x28;
        local_74 = iVar7;
        iVar7 = (**(code **)(*plVar11 + 0x40))();
        uVar8 = (longlong)iVar7 & (longlong)(int)param_1[9] - 1U;
        iVar7 = (int)uVar8;
        *(int *)(lVar12 + 0x24) = iVar7;
        plVar11 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar11 = local_70;
        }
        *(undefined4 *)(lVar12 + 0x20) =
             *(undefined4 *)((longlong)plVar11 + ((longlong)(int)param_1[9] - 1U & uVar8) * 4);
        plVar11 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar11 = local_70;
        }
        *(int *)((longlong)plVar11 + ((longlong)iVar7 & (longlong)(int)param_1[9] - 1U) * 4) = iVar9
        ;
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          plVar11 = plVar4 + 1;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)*plVar11 == 0) {
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
        uVar13 = uVar13 & ~(uint)uVar14;
        plVar11 = (longlong *)plVar1[2];
        if ((longlong *)plVar1[2] == (longlong *)0x0) {
          plVar11 = plVar1;
        }
        iVar3 = (int)plVar1[3];
        lVar12 = (longlong)iVar15;
        uVar6 = *(uint *)((longlong)plVar11 + lVar12 * 4) & uVar13;
        iVar7 = local_74;
        if (uVar6 == 0) {
          iVar9 = iVar3 + 0x1e;
          if (-1 < iVar3 + -1) {
            iVar9 = iVar3 + -1;
          }
          iVar9 = iVar9 >> 5;
          iVar5 = iVar9;
          if (iVar9 < iVar15) {
            iVar5 = iVar15;
          }
          if (iVar9 <= iVar15) break;
          lVar10 = 0;
          while( true ) {
            iVar7 = iVar7 + 0x20;
            uVar6 = *(uint *)((longlong)plVar11 + lVar10 * 4 + lVar12 * 4 + 4);
            if (uVar6 != 0) break;
            lVar10 = lVar10 + 1;
            if (iVar5 - lVar12 == lVar10) goto LAB_141336a7f;
          }
          iVar15 = iVar15 + (int)lVar10 + 1;
          uVar13 = 0xffffffff;
        }
        uVar14 = (ulonglong)(-uVar6 & uVar6);
        uVar8 = uVar14 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar8 != 0) {
          for (; uVar8 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        iVar9 = (iVar7 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
      } while (iVar9 < iVar3);
    }
  }
LAB_141336a7f:
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141336b0c FUN_141336b0c body=1587 status=ok
// SIG undefined FUN_141336b0c(void)

void FUN_141336b0c(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4,
                  longlong *param_5)

{
  longlong *plVar1;
  longlong *plVar2;
  ulonglong uVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  longlong *plVar13;
  ulonglong uVar14;
  uint uVar15;
  ulonglong uVar16;
  longlong lVar17;
  ulonglong uVar18;
  undefined8 *puVar19;
  undefined1 auStack_108 [40];
  longlong *local_e0;
  longlong *local_d8;
  uint local_d0;
  int local_cc;
  longlong *local_c8;
  longlong *local_c0;
  ulonglong local_b8;
  longlong *local_b0;
  longlong *local_a8;
  longlong *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  longlong *local_78;
  longlong *local_70;
  longlong *local_68;
  longlong *local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_d8 = param_1;
  FUN_140b6c1c2(*param_3,(int)param_3[1]);
  *(undefined4 *)(param_3 + 1) = 0;
  local_c8 = param_3;
  if (*(int *)((longlong)param_3 + 0xc) != 0) {
    FUN_14127d7f4(param_3,0);
  }
  FUN_140b6c1c2(*param_4,(int)param_4[1]);
  *(undefined4 *)(param_4 + 1) = 0;
  if (*(int *)((longlong)param_4 + 0xc) != 0) {
    FUN_14127d7f4(param_4,0);
  }
  local_98 = local_d8 + 2;
  local_a0 = (longlong *)&DAT_100000000;
  local_90 = (longlong *)0xffffffff;
  local_88 = (ulonglong)local_88._4_4_ << 0x20;
  local_e0 = param_4;
  if ((int)local_d8[5] == 0) {
    uVar14 = 1;
    uVar16 = 0xffffffff;
    iVar7 = 0;
    local_90._4_4_ = 0;
    uVar18 = 0;
  }
  else {
    FUN_1449c0562(&local_a0);
    uVar18 = (ulonglong)local_a0 & 0xffffffff;
    uVar14 = (ulonglong)local_a0 >> 0x20;
    uVar16 = (ulonglong)local_90 & 0xffffffff;
    iVar7 = (uint)local_88;
  }
  iVar11 = local_90._4_4_;
  plVar13 = local_98;
  if (local_90._4_4_ < (int)local_98[3]) {
    do {
      local_c0 = plVar13;
      local_d0 = (uint)uVar16;
      lVar17 = *local_d8;
      lVar8 = (longlong)iVar11;
      plVar13 = *(longlong **)(lVar17 + 0x10 + lVar8 * 0x28);
      local_b8 = uVar18;
      (**(code **)(*plVar13 + 8))(plVar13,&local_78);
      plVar13 = local_70;
      if (local_70 == (longlong *)0x0) {
        local_98 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)(local_70 + 1) = (int)local_70[1] + 1;
        UNLOCK();
        local_98 = local_70;
        LOCK();
        *(int *)(local_70 + 1) = (int)local_70[1] + 1;
        UNLOCK();
      }
      plVar2 = local_98;
      local_a0 = local_78;
      local_cc = iVar7;
      uVar6 = (**(code **)(*local_78 + 0x40))();
      iVar7 = FUN_141337140(param_2,uVar6,&local_a0);
      lVar12 = 0;
      if (iVar7 != -1) {
        lVar12 = (longlong)iVar7 * 0x28 + *param_2;
      }
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar2 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar2)(plVar2);
          LOCK();
          piVar4 = (int *)((longlong)plVar2 + 0xc);
          *piVar4 = *piVar4 + -1;
          UNLOCK();
          if (*piVar4 == 0) {
            (**(code **)(*plVar2 + 0x10))(plVar2);
          }
        }
      }
      if (plVar13 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar13 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar13)(plVar13);
          LOCK();
          piVar4 = (int *)((longlong)plVar13 + 0xc);
          *piVar4 = *piVar4 + -1;
          UNLOCK();
          if (*piVar4 == 0) {
            (**(code **)(*plVar13 + 0x10))(plVar13);
          }
        }
      }
      plVar13 = local_70;
      if (local_70 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_70 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*local_70)(local_70);
          LOCK();
          piVar4 = (int *)((longlong)plVar13 + 0xc);
          *piVar4 = *piVar4 + -1;
          UNLOCK();
          if (*piVar4 == 0) {
            (**(code **)(*plVar13 + 0x10))(plVar13);
          }
        }
      }
      plVar13 = local_c8;
      puVar19 = (undefined8 *)(lVar17 + lVar8 * 0x28 + 0x10);
      if (lVar12 == 0) {
        iVar7 = (int)local_c8[1];
        *(uint *)(local_c8 + 1) = iVar7 + 1U;
        if (*(uint *)((longlong)local_c8 + 0xc) < iVar7 + 1U) {
          FUN_140b722da(local_c8,iVar7);
        }
        lVar12 = *plVar13;
LAB_141336ceb:
        *(undefined8 *)(lVar12 + (longlong)iVar7 * 0x10) = *puVar19;
        lVar17 = *(longlong *)(lVar17 + 0x18 + lVar8 * 0x28);
        *(longlong *)(lVar12 + 8 + (longlong)iVar7 * 0x10) = lVar17;
        if (lVar17 != 0) {
          LOCK();
          *(int *)(lVar17 + 8) = *(int *)(lVar17 + 8) + 1;
          UNLOCK();
        }
      }
      else {
        iVar7 = (**(code **)(**(longlong **)(lVar12 + 0x10) + 0x30))();
        iVar11 = (**(code **)(*(longlong *)*puVar19 + 0x30))();
        if (iVar7 != iVar11) {
          iVar7 = (int)param_5[1];
          *(uint *)(param_5 + 1) = iVar7 + 1U;
          if (*(uint *)((longlong)param_5 + 0xc) < iVar7 + 1U) {
            FUN_140b722da(param_5,iVar7);
          }
          lVar12 = *param_5;
          goto LAB_141336ceb;
        }
      }
      uVar15 = local_d0 & ~(uint)uVar14;
      uVar16 = (ulonglong)uVar15;
      plVar13 = (longlong *)local_c0[2];
      if ((longlong *)local_c0[2] == (longlong *)0x0) {
        plVar13 = local_c0;
      }
      iVar5 = (int)local_c0[3];
      iVar11 = (int)local_b8;
      lVar17 = (longlong)iVar11;
      uVar15 = *(uint *)((longlong)plVar13 + lVar17 * 4) & uVar15;
      uVar18 = local_b8;
      iVar7 = local_cc;
      if (uVar15 == 0) {
        iVar9 = iVar5 + 0x1e;
        if (-1 < iVar5 + -1) {
          iVar9 = iVar5 + -1;
        }
        iVar9 = iVar9 >> 5;
        iVar10 = iVar9;
        if (iVar9 < iVar11) {
          iVar10 = iVar11;
        }
        if (iVar9 <= iVar11) break;
        lVar8 = 0;
        while( true ) {
          iVar7 = iVar7 + 0x20;
          uVar15 = *(uint *)((longlong)plVar13 + lVar8 * 4 + lVar17 * 4 + 4);
          if (uVar15 != 0) break;
          lVar8 = lVar8 + 1;
          if (iVar10 - lVar17 == lVar8) goto LAB_141336e90;
        }
        uVar16 = 0xffffffff;
        uVar18 = (ulonglong)(iVar11 + (int)lVar8 + 1);
      }
      uVar14 = (ulonglong)(-uVar15 & uVar15);
      uVar3 = uVar14 * 2 + 1;
      lVar17 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar17 == 0; lVar17 = lVar17 + -1) {
        }
      }
      iVar11 = (iVar7 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
      plVar13 = local_c0;
    } while (iVar11 < iVar5);
  }
LAB_141336e90:
  local_60 = param_2 + 2;
  local_68 = (longlong *)&DAT_100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  local_50 = 0;
  if ((int)param_2[5] != 0) {
    FUN_1449c0562(&local_68);
  }
  local_88._0_4_ = local_58;
  local_88._4_4_ = iStack_54;
  local_80 = local_50;
  local_7c = local_4c;
  local_98 = local_68;
  local_90 = local_60;
  local_a0 = param_2;
  if (iStack_54 < (int)local_60[3]) {
    do {
      lVar17 = *local_a0;
      lVar8 = (longlong)(int)local_88._4_4_;
      plVar13 = *(longlong **)(lVar17 + 0x10 + lVar8 * 0x28);
      (**(code **)(*plVar13 + 8))(plVar13,&local_b0);
      local_68 = local_b0;
      local_60 = local_a8;
      if (local_a8 == (longlong *)0x0) {
        plVar13 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)(local_a8 + 1) = (int)local_a8[1] + 1;
        UNLOCK();
        plVar13 = local_a8;
      }
      uVar6 = (**(code **)(*local_b0 + 0x40))();
      iVar7 = FUN_141337140(local_d8,uVar6,&local_68);
      if (plVar13 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar13 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar13)(plVar13);
          LOCK();
          piVar4 = (int *)((longlong)plVar13 + 0xc);
          *piVar4 = *piVar4 + -1;
          UNLOCK();
          if (*piVar4 == 0) {
            (**(code **)(*plVar13 + 0x10))(plVar13);
          }
        }
      }
      plVar13 = local_a8;
      if (local_a8 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_a8 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*local_a8)(local_a8);
          LOCK();
          piVar4 = (int *)((longlong)plVar13 + 0xc);
          *piVar4 = *piVar4 + -1;
          UNLOCK();
          if (*piVar4 == 0) {
            (**(code **)(*plVar13 + 0x10))(plVar13);
          }
        }
      }
      if (iVar7 == -1) {
        iVar7 = (int)local_e0[1];
        *(uint *)(local_e0 + 1) = iVar7 + 1U;
        if (*(uint *)((longlong)local_e0 + 0xc) < iVar7 + 1U) {
          FUN_140b722da(local_e0,iVar7);
        }
        lVar17 = lVar17 + lVar8 * 0x28;
        lVar8 = *local_e0;
        *(undefined8 *)(lVar8 + (longlong)iVar7 * 0x10) = *(undefined8 *)(lVar17 + 0x10);
        lVar17 = *(longlong *)(lVar17 + 0x18);
        *(longlong *)(lVar8 + 8 + (longlong)iVar7 * 0x10) = lVar17;
        if (lVar17 != 0) {
          LOCK();
          *(int *)(lVar17 + 8) = *(int *)(lVar17 + 8) + 1;
          UNLOCK();
        }
      }
      local_88._0_4_ = (uint)local_88 & ~local_98._4_4_;
      FUN_1449c0562(&local_98);
    } while ((int)local_88._4_4_ < (int)local_90[3]);
  }
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141337140 FUN_141337140 body=183 status=ok
// SIG undefined FUN_141337140(void)

int FUN_141337140(longlong *param_1,uint param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar8 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar8 != -1) {
      lVar6 = *param_1;
      do {
        lVar7 = (longlong)iVar8;
        puVar3 = *(undefined8 **)(lVar6 + lVar7 * 0x28);
        plVar5 = *(longlong **)(lVar6 + 8 + lVar7 * 0x28);
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
          UNLOCK();
        }
        if (puVar3 == (undefined8 *)*param_3) {
          cVar4 = '\x01';
        }
        else {
          cVar4 = (**(code **)*puVar3)();
        }
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
        if (cVar4 != '\0') {
          return iVar8;
        }
        lVar6 = *param_1;
        iVar8 = *(int *)(lVar6 + 0x20 + lVar7 * 0x28);
      } while (iVar8 != -1);
    }
  }
  return -1;
}



// FUNCTION 1413371f8 FUN_1413371f8 body=115 status=ok
// SIG undefined FUN_1413371f8(void)

void FUN_1413371f8(undefined8 param_1,undefined4 param_2,longlong *param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_3 != (longlong *)0x0) {
    uVar1 = FUN_140d4a144();
    plVar2 = (longlong *)(**(code **)(*param_3 + 0x288))(param_3,uVar1);
    if (plVar2 != (longlong *)0x0) {
      uVar1 = FUN_140d4a144();
      plVar3 = (longlong *)FUN_144718840(plVar2,uVar1);
      if (plVar3 != (longlong *)0x0 && plVar2 != plVar3) {
                    /* WARNING: Could not recover jumptable at 0x000141337268. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x18))(plVar3,param_1,param_2,*(code **)(*plVar3 + 0x18));
        return;
      }
    }
  }
  return;
}



// FUNCTION 14133726c FUN_14133726c body=344 status=ok
// SIG undefined FUN_14133726c(void)

undefined8 * FUN_14133726c(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  code *local_38;
  code *local_30;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (((((param_2 == 0) || (lVar1 = FUN_144a6c4d8(), lVar1 == 0)) ||
       (*(int *)(param_2 + 0x38) < *(int *)(lVar1 + 0x38))) ||
      (*(longlong *)(*(longlong *)(param_2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) !=
       lVar1 + 0x30)) && (param_2 = DAT_14cac9ca8, DAT_14cac9ca8 == 0)) {
    local_40 = &local_20;
    local_20 = FUN_141030f22;
    local_30 = FUN_14081d0ea;
    local_38 = FUN_14081d0ea;
    local_48 = &LAB_1478c0a72;
    local_50 = &LAB_1417b2375;
    local_58 = L"Engine";
    local_60 = 0x1000000000;
    local_68 = 0x10000004;
    local_70 = 8;
    local_78 = 0x390;
    FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
    param_2 = DAT_14cac9ca8;
  }
  FUN_140aed452(param_1,param_2);
  *param_1 = &PTR_FUN_14b0ae520;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  if ((local_18 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1413373c6 FUN_1413373c6 body=21 status=ok
// SIG undefined FUN_1413373c6(void)

undefined8 FUN_1413373c6(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1413373dc FUN_1413373dc body=803 status=ok
// SIG undefined FUN_1413373dc(void)

void FUN_1413373dc(longlong param_1)

{
  longlong *plVar1;
  uint *puVar2;
  ushort uVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  char cVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  ulonglong uVar14;
  longlong lVar15;
  ulonglong uVar16;
  uint uVar17;
  int iVar18;
  undefined1 auStack_98 [32];
  longlong *local_78;
  longlong local_70;
  ulonglong local_68;
  longlong local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (0 < (longlong)*(int *)(param_1 + 0xf8)) {
    uVar16 = (longlong)*(int *)(param_1 + 0xf8);
    do {
      uVar14 = uVar16 - 1;
      if ((longlong)uVar16 <= (longlong)*(int *)(param_1 + 0x118)) {
        lVar8 = *(longlong *)(param_1 + 0x110);
        if (*(longlong *)(param_1 + 0x110) == 0) {
          lVar8 = param_1 + 0x100;
        }
        if (((*(uint *)(lVar8 + (uVar14 >> 5) * 4) >> ((uint)uVar14 & 0x1f) & 1) != 0) &&
           (cVar7 = FUN_14086b0a2(uVar14 * 0x20 + *(longlong *)(param_1 + 0xf0)), cVar7 != '\0')) {
          FUN_14116cb60((longlong *)(param_1 + 0xf0),uVar14 & 0xffffffff);
          uVar17 = (uint)(uVar14 & 0xffff);
          if ((int)uVar17 < *(int *)(param_1 + 0x140)) {
            lVar8 = param_1 + 0x128;
            if (*(longlong *)(param_1 + 0x138) != 0) {
              lVar8 = *(longlong *)(param_1 + 0x138);
            }
            puVar2 = (uint *)(lVar8 + ((uVar14 & 0xffff) >> 5) * 4);
            *puVar2 = *puVar2 & ~(1 << ((byte)uVar14 & 0x1f));
          }
          if (*(int *)(param_1 + 0x98) != 0) {
            lVar8 = param_1 + 0x88;
            if (*(longlong *)(param_1 + 0x90) != 0) {
              lVar8 = *(longlong *)(param_1 + 0x90);
            }
            plVar1 = (longlong *)(param_1 + 0x50);
            iVar18 = *(int *)(lVar8 + (ulonglong)(*(int *)(param_1 + 0x98) - 1U & uVar17) * 4);
            while (iVar10 = iVar18, iVar10 != -1) {
              lVar8 = *plVar1;
              iVar18 = *(int *)(lVar8 + 4 + (longlong)iVar10 * 0xc);
              if (*(short *)(lVar8 + (longlong)iVar10 * 0xc) == (short)uVar14) {
                do {
                  FUN_140bbeb1c(param_1,lVar8 + (longlong)iVar10 * 0xc + 2);
                  FUN_14086b624(plVar1,iVar10);
                  do {
                    iVar10 = iVar18;
                    if (iVar10 == -1) goto LAB_141337467;
                    lVar8 = *plVar1;
                    iVar18 = *(int *)(lVar8 + 4 + (longlong)iVar10 * 0xc);
                  } while (*(short *)(lVar8 + (longlong)iVar10 * 0xc) != (short)uVar14);
                } while( true );
              }
            }
          }
        }
      }
LAB_141337467:
      bVar5 = 1 < (longlong)uVar16;
      uVar16 = uVar14;
    } while (bVar5);
  }
  local_60 = param_1 + 0xb0;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  local_50 = 0;
  if (*(int *)(param_1 + 200) == 0) {
    uVar16 = 1;
    local_58._0_4_ = 0xffffffff;
    local_58._4_4_ = 0;
    local_68._0_4_ = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    uVar16 = local_68 >> 0x20;
  }
  lVar8 = local_60;
  if (local_58._4_4_ < *(int *)(local_60 + 0x18)) {
    local_78 = (longlong *)(param_1 + 0xa0);
    local_70 = param_1 + 0x100;
    iVar18 = (int)local_68;
    uVar17 = (uint)local_58;
    iVar10 = local_58._4_4_;
    iVar13 = local_50;
    do {
      cVar7 = FUN_14086b0a2((longlong)iVar10 * 0x14 + *local_78);
      if ((cVar7 == '\0') &&
         (uVar3 = *(ushort *)(*(longlong *)(param_1 + 0xa0) + 8 + (longlong)iVar10 * 0x14),
         (int)(uint)uVar3 < *(int *)(param_1 + 0x118))) {
        lVar11 = *(longlong *)(param_1 + 0x110);
        if (*(longlong *)(param_1 + 0x110) == 0) {
          lVar11 = local_70;
        }
        if ((*(uint *)(lVar11 + (ulonglong)(uVar3 >> 5) * 4) >> (uVar3 & 0x1f) & 1) == 0)
        goto LAB_141337611;
      }
      else {
LAB_141337611:
        FUN_140bbece6(local_78,iVar10);
      }
      uVar17 = uVar17 & ~(uint)uVar16;
      lVar11 = *(longlong *)(lVar8 + 0x10);
      if (*(longlong *)(lVar8 + 0x10) == 0) {
        lVar11 = lVar8;
      }
      iVar4 = *(int *)(lVar8 + 0x18);
      lVar15 = (longlong)iVar18;
      uVar9 = *(uint *)(lVar11 + lVar15 * 4) & uVar17;
      if (uVar9 == 0) {
        iVar10 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar10 = iVar4 + -1;
        }
        iVar10 = iVar10 >> 5;
        iVar6 = iVar10;
        if (iVar10 < iVar18) {
          iVar6 = iVar18;
        }
        if (iVar10 <= iVar18) break;
        lVar12 = 0;
        while( true ) {
          iVar13 = iVar13 + 0x20;
          uVar9 = *(uint *)(lVar11 + lVar15 * 4 + 4 + lVar12 * 4);
          if (uVar9 != 0) break;
          lVar12 = lVar12 + 1;
          if (iVar6 - lVar15 == lVar12) goto LAB_1413375e9;
        }
        iVar18 = iVar18 + (int)lVar12 + 1;
        uVar17 = 0xffffffff;
      }
      uVar16 = (ulonglong)(-uVar9 & uVar9);
      uVar14 = uVar16 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar14 != 0) {
        for (; uVar14 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar10 = (iVar13 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    } while (iVar10 < iVar4);
  }
LAB_1413375e9:
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141337716 FUN_141337716 body=2329 status=ok
// SIG undefined FUN_141337716(void)

void FUN_141337716(longlong *param_1,longlong *param_2,uint param_3,int param_4,uint param_5)

{
  int *piVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  int iVar14;
  longlong *plVar15;
  undefined4 *puVar16;
  byte bVar17;
  ulonglong uVar18;
  longlong lVar19;
  longlong *plVar20;
  bool bVar21;
  undefined1 auStack_108 [32];
  longlong **local_e8;
  longlong **local_e0;
  longlong *local_d8;
  longlong *local_d0;
  uint local_c8;
  undefined1 local_c0;
  longlong local_b0;
  longlong *local_a8;
  longlong *local_a0;
  longlong *local_98;
  longlong *local_90;
  longlong local_88;
  longlong local_80;
  longlong *local_78;
  longlong *local_70;
  longlong local_68;
  longlong local_60;
  undefined1 local_58 [8];
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_60 = 0;
  local_68 = 0;
  FUN_140b4e26e();
  if ((*(byte *)(*param_2 + 0x368) & 4) == 0) {
LAB_141337770:
    if ((param_3 & 4) == 0) {
LAB_1413378e6:
      lVar7 = param_1[0x1e9];
      uVar5 = (**(code **)(*param_1 + 0x6c8))(param_1);
      FUN_143d9ffb4(param_2,lVar7,uVar5 ^ 1);
      if (((((param_3 & 4) == 0) && ((char)param_1[0x2f] == '\x03')) &&
          (lVar7 = param_1[0x1e8], lVar7 != 0)) && (*param_2 != 0)) {
        if ((longlong)(int)param_2[3] != 0) {
          lVar13 = 0;
          do {
            if (*(longlong *)(param_2[2] + lVar13) == 0) goto LAB_141337a6e;
            lVar13 = lVar13 + 8;
          } while ((longlong)(int)param_2[3] * 8 != lVar13);
        }
        iVar6 = *(int *)(lVar7 + 0x59b4);
        *(int *)(lVar7 + 0x59b4) = iVar6 + 1;
        uVar8 = (ulonglong)*(int *)(lVar7 + 0x59a8);
        if ((longlong)uVar8 < 1) {
          *(int *)(lVar7 + 0x59b4) = iVar6;
        }
        else {
          plVar20 = (longlong *)(lVar7 + 0x59a0);
          bVar21 = false;
          do {
            lVar13 = uVar8 * 0x10 + -8;
            uVar18 = uVar8;
            while (((*(int *)(*plVar20 + lVar13) != 0 &&
                    (plVar15 = *(longlong **)(*plVar20 + -8 + lVar13), plVar15 != (longlong *)0x0))
                   && (cVar4 = (**(code **)(*plVar15 + 0x60))(plVar15,param_2,2), cVar4 != '\0'))) {
              lVar13 = lVar13 + -0x10;
              bVar3 = uVar18 < 2;
              uVar18 = uVar18 - 1;
              if (bVar3) {
                iVar6 = *(int *)(lVar7 + 0x59b4) + -1;
                *(int *)(lVar7 + 0x59b4) = iVar6;
                if (bVar21) goto LAB_1413379f5;
                goto LAB_141337a6e;
              }
            }
            uVar8 = uVar18 - 1;
            bVar21 = true;
          } while (1 < uVar18);
          iVar6 = *(int *)(lVar7 + 0x59b4) + -1;
          *(int *)(lVar7 + 0x59b4) = iVar6;
LAB_1413379f5:
          if (iVar6 < 1) {
            iVar6 = *(int *)(lVar7 + 0x59a8);
            iVar12 = iVar6;
            if (0 < iVar6) {
              iVar14 = 0;
              do {
                if (((*(int *)(*plVar20 + 8 + (longlong)iVar14 * 0x10) == 0) ||
                    (plVar15 = *(longlong **)(*plVar20 + (longlong)iVar14 * 0x10),
                    plVar15 == (longlong *)0x0)) ||
                   (cVar4 = (**(code **)(*plVar15 + 0x28))(), cVar4 != '\0')) {
                  FUN_14005b288(plVar20,iVar14);
                  FUN_14005b248(plVar20);
                }
                else {
                  iVar14 = iVar14 + 1;
                }
                iVar12 = *(int *)(lVar7 + 0x59a8);
              } while (iVar14 < iVar12);
            }
            iVar14 = 2;
            if (2 < iVar12 * 2) {
              iVar14 = iVar12 * 2;
            }
            *(int *)(lVar7 + 0x59b0) = iVar14;
            if ((iVar14 < iVar6) && (*(int *)(lVar7 + 0x59ac) != iVar12)) {
              FUN_14045812c(plVar20);
            }
          }
        }
      }
    }
  }
  else {
    if (param_1[0x1e9] == 0) goto LAB_141337b97;
    lVar7 = FUN_14011c349();
    if (param_1[0x187] == 0) goto LAB_141337770;
    local_50 = CONCAT44(local_50._4_4_,DAT_14c763998);
    if (param_4 == -1) {
      bVar17 = ((byte)param_3 & 4) >> 2;
      DAT_14c763998 = DAT_14c763998 + 1;
    }
    else {
      DAT_14c763998 = DAT_14c763998 + 1;
      uVar10 = FUN_1447210f0(param_1);
      FUN_1456be14a(&local_78,uVar10);
      if (local_70 != (longlong *)0x0) {
        iVar6 = (int)local_70[1];
        do {
          if (iVar6 == 0) {
            plVar20 = (longlong *)0x0;
            break;
          }
          LOCK();
          iVar12 = (int)local_70[1];
          bVar21 = iVar6 == iVar12;
          if (bVar21) {
            *(int *)(local_70 + 1) = iVar6 + 1;
            iVar12 = iVar6;
          }
          iVar6 = iVar12;
          UNLOCK();
          plVar20 = local_70;
        } while (!bVar21);
        LOCK();
        piVar1 = (int *)((longlong)local_70 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_70 + 0x10))();
        }
        if (plVar20 != (longlong *)0x0) {
          if ((local_78 != (longlong *)0x0) && (lVar13 = local_78[7], (longlong)(int)lVar13 != 0)) {
            lVar19 = local_78[6];
            lVar11 = 0;
            do {
              if (*(int *)(lVar19 + lVar11) == param_4) {
                *(undefined4 *)(lVar19 + lVar11) = (undefined4)local_50;
              }
              lVar11 = lVar11 + 0x20;
            } while ((longlong)(int)lVar13 * 0x20 != lVar11);
          }
          LOCK();
          plVar15 = plVar20 + 1;
          *(int *)plVar15 = (int)*plVar15 + -1;
          UNLOCK();
          bVar17 = 1;
          if ((int)*plVar15 == 0) {
            (**(code **)*plVar20)(plVar20);
            LOCK();
            piVar1 = (int *)((longlong)plVar20 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar20 + 0x10))(plVar20);
            }
          }
          goto LAB_1413377c8;
        }
      }
      bVar17 = 1;
    }
LAB_1413377c8:
    local_78 = *(longlong **)(lVar7 + 0x48);
    lVar7 = param_1[0x187];
    lVar13 = param_1[0x1e9];
    if ((lVar13 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar13);
    }
    local_88 = 0;
    if ((~DAT_14c950c29 & 1) == 0 && lVar13 != 0) {
      FUN_1456cec3c(lVar13);
LAB_141337827:
      local_80 = lVar13 + 0x3be8;
    }
    else {
      if (lVar13 != 0) goto LAB_141337827;
      local_80 = 0;
    }
    local_98 = (longlong *)0x0;
    local_88 = lVar13;
    if ((param_1 == (longlong *)0x0) || ((DAT_14c950c29 & 1) == 0)) {
      if (param_1 != (longlong *)0x0) goto LAB_141337862;
      plVar20 = (longlong *)0x0;
    }
    else {
      FUN_1456cec3c(param_1);
LAB_141337862:
      plVar20 = param_1 + 0x1c3;
    }
    local_e0 = &local_98;
    local_c0 = (undefined1)((param_5 & 4) >> 2);
    local_c8 = param_5;
    local_d0 = &local_50;
    local_d8 = &local_88;
    local_e8 = &local_78;
    local_98 = param_1;
    local_90 = plVar20;
    FUN_143db6b26(lVar7,param_2,param_3,
                  CONCAT71((int7)(((ulonglong)param_3 & 0xffffffffffffff20) >> 8),
                           (byte)((ulonglong)param_3 & 0xffffffffffffff20) >> 5));
    if ((param_5 != 0) && ((char)param_1[0x2f] == '\x03')) {
      lVar7 = param_1[0x187];
      if ((param_1 != (longlong *)0x0) && (DAT_14c950c29 != 0)) {
        FUN_1456cec3c(param_1);
      }
      local_e8 = &local_a8;
      local_e0 = &local_78;
      local_a8 = param_1;
      local_a0 = plVar20;
      FUN_145e36912(lVar7,param_5,0,&local_50);
    }
    if (bVar17 == 0) goto LAB_1413378e6;
  }
LAB_141337a6e:
  lVar19 = local_60;
  lVar13 = local_68;
  local_78 = (longlong *)0x0;
  local_50 = 0;
  FUN_140b4e26e(param_1);
  lVar7 = param_1[0x1e9];
  if (lVar7 == 0) goto LAB_141337b97;
  lVar9 = FUN_1403ca227();
  lVar11 = *(longlong *)(lVar9 + 0x410);
  if (lVar11 == 0) {
    uVar10 = FUN_140dddfde();
    lVar11 = FUN_14477b664(uVar10);
    *(longlong *)(lVar9 + 0x410) = lVar11;
  }
  plVar20 = (longlong *)(lVar9 + 0x408);
  if (*(longlong *)(lVar9 + 0x418) == 0) {
    if ((lVar11 == 0) || (*plVar20 == 0)) goto LAB_141337b97;
    plVar15 = *(longlong **)(lVar11 + 0xb8);
    if ((plVar15 == (longlong *)0x0) ||
       (cVar4 = (**(code **)(*plVar15 + 0x108))(plVar15), cVar4 == '\0')) {
      *(undefined8 *)(lVar9 + 0x418) = 0;
      goto LAB_141337b97;
    }
    uVar10 = (**(code **)(*plVar15 + 0x110))(plVar15);
    lVar11 = FUN_144aff482(uVar10,plVar20);
    *(longlong *)(lVar9 + 0x418) = lVar11;
    if (lVar11 == 0) goto LAB_141337b97;
  }
  lVar11 = *(longlong *)(lVar9 + 0x428);
  if (lVar11 == 0) {
    uVar10 = FUN_140dddfde();
    lVar11 = FUN_14477b664(uVar10);
    *(longlong *)(lVar9 + 0x428) = lVar11;
  }
  plVar15 = (longlong *)(lVar9 + 0x420);
  if (*(longlong *)(lVar9 + 0x430) == 0) {
    if ((lVar11 == 0) || (*plVar15 == 0)) goto LAB_141337b97;
    plVar2 = *(longlong **)(lVar11 + 0xb8);
    if ((plVar2 == (longlong *)0x0) ||
       (cVar4 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar4 == '\0')) {
      *(undefined8 *)(lVar9 + 0x430) = 0;
      goto LAB_141337b97;
    }
    uVar10 = (**(code **)(*plVar2 + 0x110))(plVar2);
    lVar11 = FUN_144aff482(uVar10,plVar15);
    *(longlong *)(lVar9 + 0x430) = lVar11;
    if (lVar11 == 0) goto LAB_141337b97;
  }
  lVar19 = (longlong)local_78 - lVar19;
  if (lVar19 != 0) {
    lVar11 = *(longlong *)(lVar9 + 0x410);
    if (lVar11 == 0) {
      uVar10 = FUN_140dddfde();
      lVar11 = FUN_14477b664(uVar10);
      *(longlong *)(lVar9 + 0x410) = lVar11;
    }
    local_b0 = lVar13;
    lVar13 = *(longlong *)(lVar9 + 0x418);
    if (((lVar13 == 0) && (lVar13 = 0, lVar11 != 0)) && (*plVar20 != 0)) {
      plVar2 = *(longlong **)(lVar11 + 0xb8);
      if ((plVar2 == (longlong *)0x0) ||
         (cVar4 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar4 == '\0')) {
        lVar13 = 0;
      }
      else {
        uVar10 = (**(code **)(*plVar2 + 0x110))(plVar2);
        lVar13 = FUN_144aff482(uVar10,plVar20);
      }
      *(longlong *)(lVar9 + 0x418) = lVar13;
    }
    puVar16 = &DAT_14c9485f0;
    if (*(undefined4 **)(lVar13 + 8) != (undefined4 *)0x0) {
      puVar16 = *(undefined4 **)(lVar13 + 8);
    }
    if (DAT_14c947fe0 == 0) {
      lVar13 = FUN_14001cc68(0x140,0x10);
      FUN_1456b2032(lVar13);
      DAT_14c947fe0 = lVar13;
    }
    FUN_140045924(DAT_14c947fe0,local_58,puVar16,1);
    FUN_1441f6998(lVar7 + 0x5960,local_58,lVar19);
    lVar13 = local_b0;
  }
  lVar13 = local_50 - lVar13;
  if (lVar13 != 0) {
    lVar19 = *(longlong *)(lVar9 + 0x428);
    if (lVar19 == 0) {
      uVar10 = FUN_140dddfde();
      lVar19 = FUN_14477b664(uVar10);
      *(longlong *)(lVar9 + 0x428) = lVar19;
    }
    lVar11 = *(longlong *)(lVar9 + 0x430);
    if (((lVar11 == 0) && (lVar11 = 0, lVar19 != 0)) && (*plVar15 != 0)) {
      plVar20 = *(longlong **)(lVar19 + 0xb8);
      if ((plVar20 == (longlong *)0x0) ||
         (cVar4 = (**(code **)(*plVar20 + 0x108))(plVar20), cVar4 == '\0')) {
        lVar11 = 0;
      }
      else {
        uVar10 = (**(code **)(*plVar20 + 0x110))(plVar20);
        lVar11 = FUN_144aff482(uVar10,plVar15);
      }
      *(longlong *)(lVar9 + 0x430) = lVar11;
    }
    puVar16 = &DAT_14c9485f0;
    if (*(undefined4 **)(lVar11 + 8) != (undefined4 *)0x0) {
      puVar16 = *(undefined4 **)(lVar11 + 8);
    }
    if (DAT_14c947fe0 == 0) {
      lVar19 = FUN_14001cc68(0x140,0x10);
      FUN_1456b2032(lVar19);
      DAT_14c947fe0 = lVar19;
    }
    FUN_140045924(DAT_14c947fe0,local_58,puVar16,1);
    FUN_1441f6998(lVar7 + 0x5960,local_58,lVar13);
  }
LAB_141337b97:
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141338030 FUN_141338030 body=240 status=ok
// SIG undefined FUN_141338030(void)

void FUN_141338030(longlong param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  
  if (-1 < (short)*(undefined4 *)(param_1 + 8)) {
    *(undefined1 *)(param_1 + 0xca) = 1;
    FUN_14146e386(param_1 + 1000,param_1);
    FUN_14656e696(param_1 + 1000);
    if (param_1 == 0) {
      uRam00000000000004c8 = 0;
      iVar2 = 0;
    }
    else {
      uVar1 = *(uint *)(param_1 + 0xc);
      *(uint *)(param_1 + 0x4c8) = uVar1;
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
    *(int *)(param_1 + 0x4cc) = iVar2;
    FUN_145adbee0(param_1 + 0x468);
    FUN_14656df46(param_1 + 0x468);
    return;
  }
  return;
}



// FUNCTION 141338120 FUN_141338120 body=299 status=ok
// SIG undefined FUN_141338120(void)

void FUN_141338120(longlong param_1,char param_2,undefined8 param_3,char param_4)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined *puVar6;
  longlong lVar7;
  PSRWLOCK SRWLock;
  
  lVar7 = 0x34 - (ulonglong)(param_4 == '\0');
  if (param_2 == '\x03') {
    puVar6 = &DAT_14c98e0b0;
    if (param_4 == '\0') {
      puVar6 = &DAT_14c98e058;
    }
    uVar5 = FUN_1458fb1ce(puVar6,param_1);
    FUN_14133824c(uVar5,param_3);
  }
  else if (*(char *)(param_1 + lVar7) == '\x03') {
    puVar6 = &DAT_14c98e0b0;
    if (param_4 == '\0') {
      puVar6 = &DAT_14c98e058;
    }
    SRWLock = (PSRWLOCK)&DAT_14c98e100;
    if (param_4 == '\0') {
      SRWLock = (PSRWLOCK)&DAT_14c98e0a8;
    }
    AcquireSRWLockExclusive(SRWLock);
    FUN_14287c456(puVar6,param_1);
    ReleaseSRWLockExclusive(SRWLock);
  }
  cVar3 = *(char *)(param_1 + lVar7);
  if (((cVar3 != param_2) && (*(char *)(param_1 + lVar7) = param_2, param_4 == '\0')) &&
     ((param_2 == '\0') == (cVar3 != '\0'))) {
    lVar7 = *(longlong *)(DAT_14c968098 + 200);
    plVar4 = *(longlong **)(DAT_14c968098 + 0xd0);
    if (plVar4 == (longlong *)0x0) {
      *(undefined1 *)(lVar7 + 0x88) = 1;
    }
    else {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      *(undefined1 *)(lVar7 + 0x88) = 1;
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
                    /* WARNING: Could not recover jumptable at 0x000141338247. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar4 + 0x10))(plVar4);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 14133824c FUN_14133824c body=93 status=ok
// SIG undefined FUN_14133824c(void)

longlong * FUN_14133824c(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)*param_2;
  plVar2 = (longlong *)*param_1;
  if (plVar2 != plVar1) {
    *param_1 = (longlong)plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(int *)(param_1 + 1) = (int)param_2[1];
  *(char *)(param_1 + 2) = (char)param_2[2];
  FUN_1413a4324(param_1 + 3,param_2 + 3);
  return param_1;
}



// FUNCTION 1413382aa FUN_1413382aa body=483 status=ok
// SIG undefined FUN_1413382aa(void)

void FUN_1413382aa(longlong *param_1)

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
        lVar6 = (longlong)iVar4 * 0x38;
        uVar8 = ((uint)(*(ulonglong *)(lVar2 + lVar6) >> 0x14) & 0xffff ^
                (uint)(*(ulonglong *)(lVar2 + lVar6) >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0x34 + lVar6) = iVar9;
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x30 + lVar6) =
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



// FUNCTION 14133848e FUN_14133848e body=307 status=ok
// SIG undefined FUN_14133848e(void)

void FUN_14133848e(longlong *param_1,longlong param_2)

{
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
  if (param_2 != 0) {
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
    if ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) goto LAB_1413384e7;
  }
  param_2 = 0;
LAB_1413384e7:
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x000141338514. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x690))(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1413385c2 FUN_1413385c2 body=216 status=ok
// SIG undefined FUN_1413385c2(void)

undefined8 FUN_1413385c2(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  int *piVar5;
  undefined1 auStack_68 [32];
  longlong local_48 [3];
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((param_2 == 0) || (*(longlong *)(param_1 + 0x2640) == 0)) {
LAB_141338690:
    uVar4 = 0;
  }
  else {
    lVar3 = *(longlong *)(param_1 + 0x2650);
    if (lVar3 == 0) {
      local_48[0] = *(longlong *)(param_1 + 0x2640);
      lVar3 = FUN_14050aea0();
      *(longlong *)(param_1 + 0x2650) = lVar3;
      if (lVar3 == 0) goto LAB_141338690;
    }
    lVar3 = FUN_14064a6f8(lVar3 + 0x130);
    if (lVar3 != 0) {
      piVar5 = &DAT_14c9485f0;
      if (*(int **)(lVar3 + 8) != (int *)0x0) {
        piVar5 = *(int **)(lVar3 + 8);
      }
      FUN_1403fa066(param_2 + 0xbf0,local_48,1);
      iVar1 = *piVar5;
      iVar2 = (int)local_48[0];
      if (local_30 != 0) {
        FUN_1400020a8();
      }
      if (iVar1 != iVar2) goto LAB_141338690;
    }
    uVar4 = 1;
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 14133869c FUN_14133869c body=236 status=ok
// SIG undefined FUN_14133869c(void)

void FUN_14133869c(longlong *param_1,longlong *param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  
  switch((char)param_1[4]) {
  case '\x01':
                    /* WARNING: Could not recover jumptable at 0x000141338739. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x80))(param_2,param_1 + 5,(char)*param_1);
    return;
  case '\x02':
                    /* WARNING: Could not recover jumptable at 0x0001413386d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x78))(param_2,param_1 + 5,*param_1);
    return;
  case '\x03':
                    /* WARNING: Could not recover jumptable at 0x000141338705. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x68))(param_2,param_1 + 5,*param_1);
    return;
  case '\x04':
    UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 0x88);
    break;
  case '\x05':
    UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 0x48);
    break;
  case '\x06':
    UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 0x40);
    break;
  case '\a':
    UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 0x60);
    break;
  case '\b':
    UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 0x58);
    break;
  case '\t':
    UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 0x50);
    break;
  case '\n':
    UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 0x38);
    break;
  case '\v':
                    /* WARNING: Could not recover jumptable at 0x000141338774. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 8))(param_1,param_1 + 5,param_2);
    return;
  default:
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001413386ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_2,param_1 + 5,param_1);
  return;
}



// FUNCTION 14133879b FUN_14133879b body=263 status=ok
// SIG undefined FUN_14133879b(void)

undefined1 *
FUN_14133879b(undefined1 *param_1,undefined8 param_2,undefined1 *param_3,undefined4 *param_4)

{
  longlong lVar1;
  undefined1 auStack_d8 [44];
  undefined8 local_ac;
  undefined4 local_a4;
  undefined1 local_a0 [88];
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1458839a2(&local_48);
  FUN_145846144(local_a0);
  local_ac = 0;
  local_a4 = 0;
  lVar1 = FUN_14584b1b6(&local_48,local_a0);
  if (lVar1 == 0) {
    *param_3 = 1;
    FUN_14589a234(local_a0,param_1);
  }
  else {
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = local_ac._4_4_;
      param_4[1] = local_a4;
      param_4[2] = (undefined4)local_ac;
      FUN_1401d7cf8(param_4 + 4,lVar1);
    }
    FUN_14708d29e();
    *param_3 = 0;
    *param_1 = 1;
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  FUN_14584fa20(local_a0);
  FUN_145825b3e(&local_48);
  if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1413388a4 FUN_1413388a4 body=120 status=ok
// SIG undefined FUN_1413388a4(void)

void FUN_1413388a4(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b351f30;
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
  FUN_144760e21(param_1[4],*(undefined4 *)(param_1 + 5));
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000141338918. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 14133891c FUN_14133891c body=622 status=ok
// SIG undefined FUN_14133891c(void)

void FUN_14133891c(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  char cVar5;
  undefined8 *puVar6;
  undefined4 *_Src;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined8 local_50;
  undefined *local_48;
  code *local_40;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_2c = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952210) {
    FUN_144b3d300(&DAT_14c952210);
    if (DAT_14c952210 == -1) {
      FUN_14475b26a();
      local_40 = FUN_1405ebbb2;
      local_48 = &DAT_14c9520b8;
      local_50 = 0;
      local_58 = 0x1008081;
      FUN_14000176a(&DAT_14c9521c0,L"FIntProperty",0x80,0);
      atexit(FUN_142816fad);
      _Init_thread_footer(&DAT_14c952210);
    }
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    plVar1 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar1[3];
    if ((*(byte *)((longlong)plVar1 + 0x39) & 1) == 0) {
      lVar2 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar1 + 0x44) + lVar2;
      *(longlong *)(param_2 + 0x40) = lVar2;
      pcVar3 = *(code **)(*plVar1 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar1 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar5 = (*pcVar3)(plVar1);
          if (cVar5 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_2c);
            goto LAB_141338a06;
          }
        }
        _Src = (undefined4 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (_Src != &local_2c) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_2c,_Src,(int)plVar1[6]);
          }
          else {
            memcpy(&local_2c,_Src,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_50 = CONCAT44(local_50._4_4_,(int)plVar1[6]);
        local_58 = local_58 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_2c,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_2c,lVar2);
      }
    }
    else {
      puVar6 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar6;
        puVar6 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
LAB_141338a06:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_141338b8c(param_1,local_2c);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141338b8c FUN_141338b8c body=190 status=ok
// SIG undefined FUN_141338b8c(void)

void FUN_141338b8c(longlong param_1,uint param_2)

{
  uint uVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbc1e78) {
    FUN_144b3d300(&DAT_14cbc1e78);
    if (DAT_14cbc1e78 == -1) {
      FUN_1446f470e(&DAT_14cbc1e70,L"ServerReplicated",1);
      _Init_thread_footer(&DAT_14cbc1e78);
    }
  }
  uVar1 = *(uint *)(param_1 + 0x6350);
  if ((~param_2 & uVar1) != 0) {
    FUN_1407af814(param_1,DAT_14cbc1e70,~param_2 & uVar1,0);
    uVar1 = *(uint *)(param_1 + 0x6350);
  }
  if ((~uVar1 & param_2) == 0) {
    return;
  }
  FUN_140bc2046(param_1,DAT_14cbc1e70,~uVar1 & param_2,0);
  return;
}



// FUNCTION 141338c4a FUN_141338c4a body=911 status=ok
// SIG undefined FUN_141338c4a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_141338c4a(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong lVar14;
  bool bVar15;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar7 = FUN_1410be182(*(undefined8 *)(param_3[1] + 8));
  FUN_1405fd34a(&local_50,uVar7);
  if (local_48 == (longlong *)0x0) {
LAB_141338ecb:
    lVar11 = 0;
    plVar10 = (longlong *)0x0;
  }
  else {
    iVar6 = (int)local_48[1];
    do {
      if (iVar6 == 0) {
        plVar10 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar4 = (int)local_48[1];
      bVar15 = iVar6 == iVar4;
      if (bVar15) {
        *(int *)(local_48 + 1) = iVar6 + 1;
        iVar4 = iVar6;
      }
      iVar6 = iVar4;
      UNLOCK();
      plVar10 = local_48;
    } while (!bVar15);
    LOCK();
    piVar1 = (int *)((longlong)local_48 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_48 + 0x10))();
    }
    lVar11 = local_50;
    local_48 = (longlong *)0x0;
    if (plVar10 == (longlong *)0x0) goto LAB_141338ecb;
    local_50 = 0;
  }
  plVar13 = (longlong *)*param_3;
  lVar14 = *plVar13;
  if (lVar14 == 0) {
LAB_141338ed5:
    lVar14 = 0;
LAB_141338ed8:
    plVar13 = (longlong *)0x0;
  }
  else {
    uVar7 = FUN_141338fda();
    cVar5 = FUN_1448093f4(lVar14,uVar7);
    if (cVar5 == '\0') goto LAB_141338ed5;
    lVar14 = *plVar13;
    plVar13 = (longlong *)plVar13[1];
    if (plVar13 == (longlong *)0x0) goto LAB_141338ed8;
    LOCK();
    *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
    UNLOCK();
  }
  lVar3 = param_3[1];
  plVar8 = (longlong *)FUN_14001cc68(0x3c0,0x10);
  plVar8[1] = (longlong)&DAT_100000001;
  *plVar8 = (longlong)&PTR_FUN_14b42e930;
  plVar8[7] = 0;
  plVar8[8] = 0;
  *(undefined1 *)((longlong)plVar8 + 0x1c) = 0;
  plVar8[4] = 0;
  plVar8[5] = 0;
  plVar8[6] = 2;
  plVar8[2] = (longlong)&PTR_LAB_14b42f4f0;
  plVar8[9] = *(longlong *)(lVar3 + 8);
  lVar3 = *(longlong *)(lVar3 + 0x10);
  plVar8[10] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  plVar8[0xd] = 0;
  plVar8[0xe] = 0;
  plVar8[0xb] = 0;
  plVar8[0xc] = 0;
  *(byte *)(plVar8 + 0xf) = *(byte *)(plVar8 + 0xf) & 0xf0;
  plVar8[2] = (longlong)&PTR_FUN_14b42ea20;
  plVar8[0x10] = lVar14;
  plVar8[0x11] = (longlong)plVar13;
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
    UNLOCK();
  }
  plVar2 = plVar8 + 2;
  plVar8[0x14] = 0;
  plVar8[0x15] = 0;
  plVar8[0x12] = 0;
  plVar8[0x13] = 0;
  plVar8[2] = (longlong)&PTR_FUN_14b42e950;
  plVar8[0x16] = 0;
  plVar8[0x17] = 0;
  plVar8[0x18] = 0;
  plVar8[0x19] = lVar11;
  plVar8[0x1a] = (longlong)plVar10;
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar10 + 0xc) = *(int *)((longlong)plVar10 + 0xc) + 1;
    UNLOCK();
  }
  FUN_1405fd040(plVar8 + 0x1b);
  if ((plVar2 == (longlong *)0x0) ||
     (((plVar8[7] != 0 && (plVar8[8] != 0)) && (0 < *(int *)(plVar8[8] + 8))))) goto LAB_141338e4d;
  if (plVar8 == (longlong *)0x0) {
    _DAT_00000038 = 0x10;
    plVar12 = (longlong *)&DAT_00000040;
    plVar9 = _DAT_00000040;
    if (_DAT_00000040 == (longlong *)0x0) goto LAB_141338e4d;
LAB_141338f3b:
    LOCK();
    piVar1 = (int *)((longlong)plVar9 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar9 + 0x10))();
    }
    *plVar12 = (longlong)plVar8;
    if (plVar8 == (longlong *)0x0) goto LAB_141338e4d;
  }
  else {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    plVar8[7] = (longlong)plVar2;
    if ((longlong *)plVar8[8] != plVar8) {
      LOCK();
      *(int *)((longlong)plVar8 + 0xc) = *(int *)((longlong)plVar8 + 0xc) + 1;
      UNLOCK();
      if ((longlong *)plVar8[8] != (longlong *)0x0) {
        plVar12 = plVar8 + 8;
        plVar9 = (longlong *)plVar8[8];
        goto LAB_141338f3b;
      }
      plVar8[8] = (longlong)plVar8;
    }
  }
  LOCK();
  plVar12 = plVar8 + 1;
  *(int *)plVar12 = (int)*plVar12 + -1;
  UNLOCK();
  if ((int)*plVar12 == 0) {
    (**(code **)*plVar8)(plVar8);
    LOCK();
    piVar1 = (int *)((longlong)plVar8 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
    }
  }
LAB_141338e4d:
  if (plVar13 != (longlong *)0x0) {
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
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar13 = plVar10 + 1;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)*plVar13 == 0) {
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
  if (local_48 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_48 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_48 + 0x10))();
    }
  }
  *(undefined4 *)(plVar8 + 0x67) = 0x7f7fffff;
  *(undefined1 *)((longlong)plVar8 + 0x33c) = 1;
  *param_2 = (longlong)plVar2;
  param_2[1] = (longlong)plVar8;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    LOCK();
    plVar10 = plVar8 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
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
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 141338fda FUN_141338fda body=57 status=ok
// SIG undefined FUN_141338fda(void)

void FUN_141338fda(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb668f8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb668f8 = FUN_140002ddd(FUN_14651036e,uVar1,L"GbxStatusEffectAspectData_DamageOverTime");
  }
  return;
}



// FUNCTION 141339014 FUN_141339014 body=5 status=ok
// SIG undefined FUN_141339014(void)

void FUN_141339014(longlong param_1)

{
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) & 0xfe;
  return;
}



// FUNCTION 14133901a FUN_14133901a body=261 status=ok
// SIG undefined FUN_14133901a(void)

undefined1 (*) [16] FUN_14133901a(longlong param_1,undefined1 (*param_2) [16])

{
  double dVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  dVar4 = *(double *)(param_1 + 0x240);
  dVar5 = *(double *)(param_1 + 0x248);
  dVar6 = *(double *)(param_1 + 0x250);
  dVar1 = *(double *)(param_1 + 600);
  dVar7 = dVar4 * 0.0 - dVar5 * 0.0;
  dVar8 = dVar5 * 1.0 - dVar6 * 0.0;
  dVar9 = dVar4 * -1.0 + dVar6 * 0.0;
  dVar8 = dVar8 + dVar8;
  dVar9 = dVar9 + dVar9;
  dVar7 = dVar7 + dVar7;
  dVar3 = (dVar6 * dVar8 - dVar4 * dVar7) + *(double *)(param_1 + 600) * dVar9 + 0.0;
  auVar2._8_4_ = SUB84(dVar3,0);
  auVar2._0_8_ = (dVar7 * dVar5 - dVar9 * dVar6) + dVar1 * dVar8 + 0.0;
  auVar2._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  *param_2 = auVar2;
  *(double *)param_2[1] = dVar7 * dVar1 + 1.0 + (dVar9 * dVar4 - dVar8 * dVar5);
  return param_2;
}



// FUNCTION 141339120 FUN_141339120 body=99 status=ok
// SIG undefined FUN_141339120(void)

void FUN_141339120(longlong param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_140f05dd8();
  if (*(char *)(param_1 + 0x178) == '\x03') {
    iVar2 = 4;
    do {
      iVar1 = *(int *)(param_1 + 0x2658);
      *(uint *)(param_1 + 0x2658) = iVar1 + 1U;
      if (*(uint *)(param_1 + 0x265c) < iVar1 + 1U) {
        FUN_1458fd394((longlong *)(param_1 + 0x2650),iVar1);
      }
      *(undefined8 *)(*(longlong *)(param_1 + 0x2650) + (longlong)iVar1 * 8) = 0;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}



// FUNCTION 141339184 FUN_141339184 body=1326 status=ok
// SIG undefined FUN_141339184(void)

undefined8 * FUN_141339184(undefined8 *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  byte bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  longlong *plVar16;
  char cVar17;
  byte bVar18;
  int iVar19;
  int iVar20;
  ulonglong uVar21;
  undefined8 uVar22;
  undefined8 *puVar23;
  undefined1 *puVar24;
  uint uVar25;
  longlong lVar26;
  longlong lVar27;
  longlong lVar28;
  int iVar29;
  longlong lVar30;
  uint uVar31;
  undefined1 auStack_128 [40];
  undefined8 *local_100;
  longlong local_f8 [2];
  undefined8 local_e8;
  longlong *local_e0;
  longlong local_d8;
  ulonglong uStack_d0;
  undefined1 local_c8 [16];
  longlong local_b8;
  undefined8 uStack_b0;
  undefined1 local_a8 [16];
  undefined1 *local_98;
  undefined4 local_90;
  undefined8 local_8c;
  int local_84;
  undefined1 local_80 [8];
  undefined1 *local_78;
  int local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_d8 = 0;
  uStack_d0 = 0;
  cVar17 = FUN_141339dcc(param_2,&local_d8,0x3d,0x2c);
  if (cVar17 != '\0') {
    local_98 = (undefined1 *)0x0;
    local_90 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_8c = 0xffffffff00000080;
    local_84 = 0;
    local_78 = (undefined1 *)0x0;
    local_70 = 0;
    uVar25 = (uint)uStack_d0;
    iVar29 = 0;
    if ((longlong)(int)(uint)uStack_d0 != 0) {
      if ((int)(uint)uStack_d0 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456acd4b((longlong)(int)(uint)uStack_d0);
      }
      FUN_14133982a(&local_b8,uStack_d0 & 0xffffffff);
      iVar19 = 1;
      if (3 < uVar25) {
        uVar25 = (uVar25 | 1) + 0xe;
        iVar19 = 0x1f;
        if (uVar25 != 0) {
          for (; uVar25 >> iVar19 == 0; iVar19 = iVar19 + -1) {
          }
        }
        iVar19 = 1 << ((byte)iVar19 & 0x1f);
      }
      if ((local_70 == 0) || (local_70 < iVar19)) {
        local_70 = iVar19;
        FUN_1413399ce();
      }
      if ((longlong)(int)(uint)uStack_d0 != 0) {
        lVar30 = (longlong)(int)(uint)uStack_d0 << 6;
        lVar27 = local_d8;
        local_100 = param_1;
        do {
          lVar30 = lVar30 + -0x40;
          FUN_1400089be(local_f8,*(undefined4 *)(lVar27 + 0x28),*(undefined8 *)(lVar27 + 0x20));
          FUN_140234344(local_c8);
          FUN_14116971a(&local_e8,local_f8,local_c8,1);
          if (local_f8[0] != 0) {
            FUN_1400020a8();
          }
          bVar18 = FUN_1413396fc(&local_e8);
          if (bVar18 != 0) {
            FUN_1413396b4(&local_e8);
            uVar21 = uStack_b0;
            if (local_84 == 0) {
              iVar29 = (int)uStack_b0;
              uStack_b0 = CONCAT44(uStack_b0._4_4_,(int)uStack_b0 + 1);
              if (uStack_b0._4_4_ == iVar29) {
                FUN_1447030e2(&local_b8,uVar21 & 0xffffffff);
              }
              lVar26 = (longlong)iVar29;
              iVar19 = FUN_144a54ea4(local_a8,1);
              puVar24 = local_98;
              if (local_98 == (undefined1 *)0x0) {
                puVar24 = local_a8;
              }
              iVar20 = iVar19 + 0x1f;
              if (-1 < iVar19) {
                iVar20 = iVar19;
              }
              bVar4 = (byte)iVar19 & 0x1f;
              *(uint *)(puVar24 + (longlong)(iVar20 >> 5) * 4) =
                   *(uint *)(puVar24 + (longlong)(iVar20 >> 5) * 4) &
                   (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
            }
            else {
              iVar29 = local_8c._4_4_;
              lVar26 = (longlong)local_8c._4_4_;
              iVar19 = *(int *)(local_b8 + 4 + lVar26 * 0x38);
              local_8c = CONCAT44(iVar19,(undefined4)local_8c);
              local_84 = local_84 + -1;
              if (local_84 != 0) {
                *(undefined4 *)(local_b8 + (longlong)iVar19 * 0x38) = 0xffffffff;
              }
            }
            lVar28 = local_b8;
            puVar24 = local_98;
            if (local_98 == (undefined1 *)0x0) {
              puVar24 = local_a8;
            }
            iVar19 = iVar29 + 0x1f;
            if (-1 < iVar29) {
              iVar19 = iVar29;
            }
            *(uint *)(puVar24 + (longlong)(iVar19 >> 5) * 4) =
                 *(uint *)(puVar24 + (longlong)(iVar19 >> 5) * 4) | 1 << ((byte)iVar29 & 0x1f);
            lVar26 = lVar26 * 0x38;
            puVar23 = (undefined8 *)(local_b8 + lVar26);
            FUN_141339746(puVar23,lVar27);
            *(undefined8 *)(lVar28 + 0x20 + lVar26) = local_e8;
            *(longlong **)(lVar28 + 0x28 + lVar26) = local_e0;
            if (local_e0 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_e0 + 1) = (int)local_e0[1] + 1;
              UNLOCK();
            }
            *(undefined4 *)(puVar23 + 6) = 0xffffffff;
            uVar25 = (*(code *)PTR_FUN_14c75b148)(*puVar23,*(int *)(puVar23 + 1) * 2,0);
            uVar31 = (int)uStack_b0 - local_84;
            iVar19 = 1;
            if (uVar31 != 1) {
              iVar20 = FUN_14133a7a8(&local_b8,uVar25,puVar23);
              lVar26 = local_b8;
              if (iVar20 != -1) {
                lVar28 = (longlong)iVar20 * 0x38;
                FUN_142761634(local_b8 + lVar28);
                uVar5 = *(undefined4 *)puVar23;
                uVar6 = *(undefined4 *)((longlong)puVar23 + 4);
                uVar7 = *(undefined4 *)(puVar23 + 1);
                uVar8 = *(undefined4 *)((longlong)puVar23 + 0xc);
                uVar9 = *(undefined4 *)(puVar23 + 2);
                uVar10 = *(undefined4 *)((longlong)puVar23 + 0x14);
                uVar11 = *(undefined4 *)(puVar23 + 3);
                uVar12 = *(undefined4 *)((longlong)puVar23 + 0x1c);
                uVar13 = *(undefined4 *)((longlong)puVar23 + 0x24);
                uVar14 = *(undefined4 *)(puVar23 + 5);
                uVar15 = *(undefined4 *)((longlong)puVar23 + 0x2c);
                puVar3 = (undefined4 *)(lVar26 + 0x20 + lVar28);
                *puVar3 = *(undefined4 *)(puVar23 + 4);
                puVar3[1] = uVar13;
                puVar3[2] = uVar14;
                puVar3[3] = uVar15;
                puVar3 = (undefined4 *)(lVar26 + 0x10 + lVar28);
                *puVar3 = uVar9;
                puVar3[1] = uVar10;
                puVar3[2] = uVar11;
                puVar3[3] = uVar12;
                puVar3 = (undefined4 *)(lVar26 + lVar28);
                *puVar3 = uVar5;
                puVar3[1] = uVar6;
                puVar3[2] = uVar7;
                puVar3[3] = uVar8;
                FUN_1489f792a(&local_b8,iVar29);
                goto LAB_14133945f;
              }
              if (3 < uVar31) {
                uVar21 = (ulonglong)(uVar31 & 0xfffffffe) + 0xf;
                lVar26 = 0x3f;
                if (uVar21 != 0) {
                  for (; uVar21 >> lVar26 == 0; lVar26 = lVar26 + -1) {
                  }
                }
                iVar19 = 1 << ((byte)lVar26 & 0x1f);
              }
            }
            if (((int)uVar31 < 1) || (iVar19 <= local_70)) {
              uVar25 = local_70 - 1U & uVar25;
              *(uint *)((longlong)puVar23 + 0x34) = uVar25;
              puVar24 = local_78;
              if (local_78 == (undefined1 *)0x0) {
                puVar24 = local_80;
              }
              *(undefined4 *)(puVar23 + 6) =
                   *(undefined4 *)(puVar24 + ((longlong)local_70 - 1U & (longlong)(int)uVar25) * 4);
              puVar24 = local_78;
              if (local_78 == (undefined1 *)0x0) {
                puVar24 = local_80;
              }
              *(int *)(puVar24 + ((longlong)local_70 - 1U & (longlong)(int)uVar25) * 4) = iVar29;
            }
            else {
              local_70 = iVar19;
              FUN_1413399ce();
            }
          }
LAB_14133945f:
          plVar16 = local_e0;
          if (local_e0 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_e0 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*local_e0)(local_e0);
              LOCK();
              piVar2 = (int *)((longlong)plVar16 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar16 + 0x10))(plVar16);
              }
            }
          }
          lVar27 = lVar27 + 0x40;
        } while ((bVar18 & lVar30 != 0) != 0);
        param_1 = local_100;
        iVar29 = (uint)uStack_d0;
      }
    }
    if ((int)uStack_b0 - local_84 == iVar29) {
      uVar22 = FUN_14001cc68(0x50,0x10);
      FUN_14133a21a(uVar22,&local_b8);
      *param_1 = uVar22;
      puVar23 = (undefined8 *)FUN_14001cc68(0x18,0x10);
      puVar23[1] = &DAT_100000001;
      *puVar23 = &PTR_LAB_14b4661c0;
      puVar23[2] = uVar22;
      param_1[1] = puVar23;
      local_70 = 0;
      if (local_78 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      FUN_1458fd418(&local_b8);
      goto LAB_141339537;
    }
    local_70 = 0;
    if (local_78 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    FUN_1458fd418(&local_b8);
  }
  *param_1 = 0;
  param_1[1] = 0;
LAB_141339537:
  FUN_1413397e9(local_d8,uStack_d0 & 0xffffffff);
  if (local_d8 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1413396b4 FUN_1413396b4 body=71 status=ok
// SIG undefined FUN_1413396b4(void)

undefined4 FUN_1413396b4(longlong *param_1)

{
  char *pcVar1;
  char cVar2;
  undefined4 uVar3;
  longlong lVar4;
  bool bVar5;
  
  lVar4 = *param_1;
  pcVar1 = (char *)(lVar4 + 0x28);
  LOCK();
  bVar5 = *(char *)(lVar4 + 0x28) == '\0';
  if (bVar5) {
    *(char *)(lVar4 + 0x28) = '\x01';
  }
  UNLOCK();
  if (!bVar5) {
    FUN_1447d2058();
  }
  uVar3 = *(undefined4 *)(lVar4 + 0x68);
  if (pcVar1 != (char *)0x0) {
    LOCK();
    cVar2 = *pcVar1;
    if (cVar2 == '\x01') {
      *pcVar1 = '\0';
    }
    UNLOCK();
    if (cVar2 != '\x01') {
      FUN_14008cdb0(pcVar1);
    }
  }
  return uVar3;
}



// FUNCTION 1413396fc FUN_1413396fc body=74 status=ok
// SIG undefined FUN_1413396fc(void)

bool FUN_1413396fc(longlong *param_1)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  
  lVar4 = *param_1;
  pcVar1 = (char *)(lVar4 + 0x28);
  LOCK();
  bVar5 = *(char *)(lVar4 + 0x28) == '\0';
  if (bVar5) {
    *(char *)(lVar4 + 0x28) = '\x01';
  }
  UNLOCK();
  if (!bVar5) {
    FUN_1447d2058();
  }
  iVar3 = *(int *)(lVar4 + 0x68);
  if (pcVar1 != (char *)0x0) {
    LOCK();
    cVar2 = *pcVar1;
    if (cVar2 == '\x01') {
      *pcVar1 = '\0';
    }
    UNLOCK();
    if (cVar2 != '\x01') {
      FUN_14008cdb0(pcVar1);
    }
  }
  return iVar3 != 0;
}



// FUNCTION 141339746 FUN_141339746 body=163 status=ok
// SIG undefined FUN_141339746(void)

undefined8 * FUN_141339746(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  undefined2 *puVar3;
  
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  puVar1 = param_1 + 2;
  param_1[2] = 0;
  iVar2 = *(int *)(param_2 + 3);
  _Src = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(puVar1,iVar2,0);
    memcpy((void *)*puVar1,_Src,(longlong)iVar2 * 2);
  }
  if (*(int *)(param_2 + 3) == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  else {
    puVar3 = (undefined2 *)param_2[2];
  }
  if ((undefined2 *)*param_2 == puVar3) {
    if (*(int *)(param_1 + 3) == 0) {
      puVar3 = &DAT_149dfb77a;
    }
    else {
      puVar3 = (undefined2 *)*puVar1;
    }
    *param_1 = puVar3;
  }
  return param_1;
}



// FUNCTION 1413397e9 FUN_1413397e9 body=65 status=ok
// SIG undefined FUN_1413397e9(void)

void FUN_1413397e9(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x30);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-4] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14133982a FUN_14133982a body=420 status=ok
// SIG undefined FUN_14133982a(void)

void FUN_14133982a(longlong *param_1,uint param_2)

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
    iVar10 = *(int *)((longlong)param_1 + 0xc);
    iVar11 = iVar1;
    if (iVar10 < (int)param_2) {
      FUN_144748838(param_1);
      iVar11 = (int)param_1[1];
      iVar10 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = iVar11 + uVar8;
    if ((uint)(iVar10 - iVar11) < uVar8) {
      FUN_1447030e2(param_1);
    }
    if (iVar11 < (int)param_2) {
      lVar2 = *param_1;
      iVar10 = *(int *)((longlong)param_1 + 0x34);
      puVar5 = (undefined4 *)(uVar6 * 0x38 + lVar2 + -0x34);
      do {
        iVar9 = (int)uVar6;
        if (iVar10 != 0) {
          *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x38) = iVar9 + -1;
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
        puVar5 = puVar5 + -0xe;
      } while ((longlong)iVar11 < (longlong)uVar6);
    }
    if (iVar1 == 0) {
      plVar7 = param_1 + 2;
      *(uint *)(param_1 + 5) = uVar8;
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
    else if (-1 < (int)uVar8) {
      uVar3 = FUN_144a54ea4(param_1 + 2,uVar8);
      FUN_1447c6044(param_1 + 2,uVar3,uVar8,0);
      return;
    }
  }
  return;
}



// FUNCTION 1413399ce FUN_1413399ce body=462 status=ok
// SIG undefined FUN_1413399ce(void)

void FUN_1413399ce(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  uint uVar9;
  longlong lVar10;
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
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_70;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar9 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar9) * 4) =
             0xffffffff;
        uVar9 = uVar9 + 1;
      } while (uVar2 != uVar9);
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
    uVar4 = local_70;
    local_68 = local_48;
    local_64 = local_44;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_88 = param_1;
    if (local_70._4_4_ < (int)local_58[3]) {
      iVar5 = local_70._4_4_;
      local_70 = uVar4;
      do {
        lVar3 = *local_88;
        lVar10 = (longlong)iVar5 * 0x38;
        iVar6 = (*(code *)PTR_FUN_14c75b148)
                          (*(undefined8 *)(lVar3 + lVar10),*(int *)(lVar3 + 8 + lVar10) * 2,0);
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar3 + 0x34 + lVar10) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x30 + lVar10) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar5 = local_70._4_4_;
        uVar4 = local_70;
      } while (local_70._4_4_ < (int)local_78[3]);
    }
  }
  local_70 = uVar4;
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141339b9e FUN_141339b9e body=557 status=ok
// SIG undefined FUN_141339b9e(void)

void FUN_141339b9e(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  uint uVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  ulonglong uVar14;
  int iVar15;
  undefined1 auStack_98 [36];
  int local_74;
  longlong *local_70;
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_70 = param_1 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = local_70;
  if ((int)param_1[5] == 0) {
    uVar14 = 1;
    local_58._0_4_ = 0xffffffff;
    local_58._4_4_ = 0;
    local_68._0_4_ = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    uVar14 = local_68 >> 0x20;
  }
  plVar6 = local_60;
  iVar15 = (int)local_68;
  uVar13 = (uint)local_58;
  iVar8 = local_58._4_4_;
  iVar12 = local_50;
  if (local_58._4_4_ < (int)local_60[3]) {
    do {
      lVar11 = *param_1;
      plVar9 = *(longlong **)(lVar11 + 0x28 + (longlong)iVar8 * 0x38);
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar9 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          local_74 = iVar12;
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar2 = (int *)((longlong)plVar9 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          iVar12 = local_74;
          if (*piVar2 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
            iVar12 = local_74;
          }
        }
      }
      if (*(longlong *)(lVar11 + (longlong)iVar8 * 0x38 + 0x10) != 0) {
        FUN_1400020a8();
      }
      uVar13 = uVar13 & ~(uint)uVar14;
      plVar9 = (longlong *)plVar6[2];
      if ((longlong *)plVar6[2] == (longlong *)0x0) {
        plVar9 = plVar6;
      }
      iVar4 = (int)plVar6[3];
      lVar11 = (longlong)iVar15;
      uVar7 = *(uint *)((longlong)plVar9 + lVar11 * 4) & uVar13;
      if (uVar7 == 0) {
        iVar8 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar8 = iVar4 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar5 = iVar8;
        if (iVar8 < iVar15) {
          iVar5 = iVar15;
        }
        if (iVar8 <= iVar15) break;
        lVar10 = 0;
        while( true ) {
          iVar12 = iVar12 + 0x20;
          uVar7 = *(uint *)((longlong)plVar9 + lVar10 * 4 + lVar11 * 4 + 4);
          if (uVar7 != 0) break;
          lVar10 = lVar10 + 1;
          if (iVar5 - lVar11 == lVar10) goto LAB_141339ce6;
        }
        iVar15 = iVar15 + (int)lVar10 + 1;
        uVar13 = 0xffffffff;
      }
      uVar14 = (ulonglong)(-uVar7 & uVar7);
      uVar3 = uVar14 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar8 = (iVar12 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    } while (iVar8 < iVar4);
  }
LAB_141339ce6:
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_144748838(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(local_70,0);
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141339dcc FUN_141339dcc body=1101 status=ok
// SIG undefined FUN_141339dcc(void)

undefined4 FUN_141339dcc(undefined8 *param_1,longlong *param_2,wchar_t param_3,wchar_t param_4)

{
  wchar_t *pwVar1;
  wchar_t wVar2;
  code *pcVar3;
  wchar_t wVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint uVar11;
  code *pcVar12;
  longlong lVar13;
  uint uVar14;
  longlong *plVar15;
  uint uVar16;
  undefined8 *puVar17;
  wchar_t *pwVar18;
  wchar_t *pwVar19;
  wchar_t *pwVar20;
  wchar_t *pwVar21;
  undefined1 auStack_e8 [40];
  undefined4 local_c0;
  wchar_t local_bc;
  wchar_t local_ba;
  undefined4 local_b8;
  int local_b4;
  ulonglong local_b0;
  wchar_t *local_a8;
  uint local_9c;
  longlong *local_98;
  ulonglong local_90;
  wchar_t *local_88;
  int local_7c;
  wchar_t *local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  pwVar21 = (wchar_t *)*param_1;
  uVar9 = (ulonglong)*(int *)(param_1 + 1);
  pwVar1 = pwVar21 + uVar9;
  local_98 = param_2;
  if (0 < (longlong)uVar9) {
    do {
      uVar6 = iswspace(*pwVar21);
      uVar9 = (ulonglong)uVar6;
      if (uVar6 == 0) break;
      pwVar21 = pwVar21 + 1;
    } while (pwVar21 < pwVar1);
  }
  local_c0 = (undefined4)CONCAT71((int7)(uVar9 >> 8),1);
  pcVar12 = iswalnum_exref;
  pcVar3 = iswspace_exref;
  wVar2 = local_bc;
  wVar4 = local_ba;
  do {
    iswalnum_exref = pcVar12;
    iswspace_exref = pcVar3;
    local_bc = param_3;
    local_ba = param_4;
    if (pwVar1 <= pwVar21) {
LAB_14133a0f2:
      local_ba = wVar4;
      local_bc = wVar2;
      if ((local_60 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return local_c0;
    }
    do {
      iVar7 = (*pcVar3)();
      pwVar19 = pwVar21;
      pwVar18 = pwVar21;
      if (iVar7 == 0) break;
      pwVar21 = pwVar21 + 1;
      pwVar19 = pwVar21;
      pwVar18 = pwVar21;
    } while (pwVar21 < pwVar1);
    for (; (pwVar19 < pwVar1 &&
           (((wVar2 = *pwVar19, iVar7 = (*pcVar12)(), wVar2 == L'_' || (iVar7 != 0)) &&
            (*pwVar19 != param_3)))); pwVar19 = pwVar19 + 1) {
    }
    pcVar12 = iswspace_exref;
    iVar7 = (int)((ulonglong)((longlong)pwVar19 - (longlong)pwVar18) >> 1);
    if (iVar7 == 0) {
LAB_14133a0ea:
      local_c0 = 0;
      wVar2 = local_bc;
      wVar4 = local_ba;
      goto LAB_14133a0f2;
    }
    if (pwVar19 < pwVar1) {
      do {
        pwVar21 = pwVar19;
        iVar8 = iswspace(*pwVar21);
        if (iVar8 == 0) {
          if (*pwVar21 != param_3) goto LAB_14133a0ea;
          break;
        }
        pwVar19 = pwVar21 + 1;
      } while (pwVar21 + 1 < pwVar1);
      pwVar19 = pwVar21 + 1;
    }
    while ((pwVar19 < pwVar1 && (iVar8 = iswspace(*pwVar19), iVar8 != 0))) {
      pwVar19 = pwVar19 + 1;
    }
    pwVar21 = pwVar19;
    local_a8 = pwVar18;
    if (*pwVar19 == L'\"') {
      local_78 = (wchar_t *)0x0;
      uStack_70 = 0;
      local_7c = 0;
      cVar5 = thunk_FUN_140c9761d(pwVar19,&local_78);
      pcVar12 = iswspace_exref;
      if (cVar5 == '\0') {
        if (local_78 != (wchar_t *)0x0) {
          FUN_1400020a8();
          pcVar12 = iswspace_exref;
        }
        goto joined_r0x000141339efd;
      }
      pwVar21 = pwVar19 + local_7c;
      local_b4 = (int)uStack_70;
      local_b8 = uStack_70._4_4_;
      pwVar19 = L"";
      if ((int)uStack_70 != 0) {
        pwVar19 = local_78;
      }
      uVar6 = (int)uStack_70 - 1;
      if ((int)uStack_70 == 0) {
        uVar6 = 0;
      }
      local_90 = (ulonglong)uVar6;
      pwVar18 = local_78;
    }
    else {
joined_r0x000141339efd:
      for (; (pwVar21 < pwVar1 && (*pwVar21 != param_4)); pwVar21 = pwVar21 + 1) {
      }
      local_90 = (ulonglong)((longlong)pwVar21 - (longlong)pwVar19) >> 1;
      local_b4 = 0;
      local_b8 = 0;
      pwVar18 = (wchar_t *)0x0;
    }
    if ((int)local_90 == 0) {
LAB_14133a0e1:
      if (pwVar18 != (wchar_t *)0x0) {
        FUN_1400020a8(pwVar18);
      }
      goto LAB_14133a0ea;
    }
    local_88 = pwVar18;
    if (pwVar21 < pwVar1) {
      do {
        pwVar20 = pwVar21;
        iVar8 = (*pcVar12)();
        if (iVar8 == 0) {
          if (*pwVar20 != param_4) goto LAB_14133a0e1;
          break;
        }
        pwVar21 = pwVar20 + 1;
      } while (pwVar20 + 1 < pwVar1);
      pwVar21 = pwVar20 + 1;
    }
    uVar6 = *(uint *)(local_98 + 1);
    lVar13 = *local_98;
    uVar9 = 0;
    plVar15 = local_98;
    uVar16 = uVar6;
    if ((int)uVar6 < 1) {
LAB_141339fcd:
      *(uint *)(plVar15 + 1) = uVar6 + 1;
      if (*(uint *)((longlong)plVar15 + 0xc) == uVar6) {
        FUN_1458fd44e(plVar15,uVar6);
        lVar13 = *plVar15;
      }
      lVar10 = (uVar9 & 0xffffffff) * 0x40;
      memmove((void *)(lVar10 + lVar13 + 0x40),(void *)(lVar13 + lVar10),
              (ulonglong)(uVar6 - (int)uVar9) << 6);
      puVar17 = (undefined8 *)(lVar10 + *plVar15);
    }
    else {
      do {
        uVar14 = (uVar16 >> 1) + (int)uVar9;
        lVar10 = (ulonglong)uVar14 * 0x40;
        iVar8 = *(int *)(lVar13 + 8 + lVar10);
        uVar11 = uVar16;
        if ((iVar8 < iVar7) ||
           ((iVar8 <= iVar7 &&
            (local_b0 = uVar9, local_9c = uVar16,
            iVar8 = wcsncmp(*(wchar_t **)(lVar10 + lVar13),local_a8,(longlong)iVar8),
            uVar9 = local_b0, uVar11 = local_9c, iVar8 < 0)))) {
          uVar9 = (ulonglong)(uVar14 + (uVar11 & 1));
        }
        plVar15 = local_98;
        uVar16 = uVar16 >> 1;
      } while (1 < uVar11);
      if ((int)uVar6 <= (int)uVar9) goto LAB_141339fcd;
      lVar10 = (uVar9 & 0xffffffff) * 0x40;
      puVar17 = (undefined8 *)(lVar10 + lVar13);
      iVar8 = *(int *)(lVar13 + 8 + lVar10);
      if ((iVar7 < iVar8) ||
         ((iVar7 <= iVar8 &&
          (local_b0 = uVar9, iVar8 = wcsncmp(local_a8,(wchar_t *)*puVar17,(longlong)iVar7),
          uVar9 = local_b0, iVar8 < 0)))) goto LAB_141339fcd;
      FUN_1413397e9(puVar17,1);
    }
    *puVar17 = local_a8;
    *(int *)(puVar17 + 1) = iVar7;
    puVar17[2] = 0;
    puVar17[3] = 0;
    puVar17[4] = pwVar19;
    *(int *)(puVar17 + 5) = (int)local_90;
    puVar17[6] = local_88;
    *(int *)(puVar17 + 7) = local_b4;
    *(undefined4 *)((longlong)puVar17 + 0x3c) = local_b8;
    pcVar12 = iswalnum_exref;
    pcVar3 = iswspace_exref;
    wVar2 = local_bc;
    wVar4 = local_ba;
    param_4 = local_ba;
    param_3 = local_bc;
  } while( true );
}



// FUNCTION 14133a21a FUN_14133a21a body=1421 status=ok
// SIG undefined FUN_14133a21a(void)

undefined8 * FUN_14133a21a(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *plStack_40;
  undefined8 local_38;
  longlong *plStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = &PTR_FUN_14b464c00;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  lVar6 = 0x10;
  do {
    FUN_1410a5228((longlong)param_1 + lVar6);
    lVar6 = lVar6 + 0x10;
  } while (lVar6 != 0x50);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb91b48) {
    FUN_144b3d300(&DAT_14cb91b48);
    if (DAT_14cb91b48 == -1) {
      DAT_14cb91b28 = L"default";
      DAT_14cb91b30 = 7;
      DAT_14cb91b38 = 0;
      uRam000000014cb91b40 = 0;
      atexit((_func_5014 *)&LAB_143eabd53);
      _Init_thread_footer(&DAT_14cb91b48);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb91b70) {
    FUN_144b3d300(&DAT_14cb91b70);
    if (DAT_14cb91b70 == -1) {
      DAT_14cb91b50 = L"xbox";
      DAT_14cb91b58 = 4;
      DAT_14cb91b60 = 0;
      uRam000000014cb91b68 = 0;
      atexit((_func_5014 *)&LAB_143eabd64);
      _Init_thread_footer(&DAT_14cb91b70);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb91b98) {
    FUN_144b3d300(&DAT_14cb91b98);
    if (DAT_14cb91b98 == -1) {
      DAT_14cb91b78 = L"playstation";
      DAT_14cb91b80 = 0xb;
      DAT_14cb91b88 = 0;
      uRam000000014cb91b90 = 0;
      atexit((_func_5014 *)&LAB_143eabd75);
      _Init_thread_footer(&DAT_14cb91b98);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb91bc0) {
    FUN_144b3d300(&DAT_14cb91bc0);
    if (DAT_14cb91bc0 == -1) {
      DAT_14cb91ba0 = L"Switch2";
      DAT_14cb91ba8 = 7;
      DAT_14cb91bb0 = 0;
      uRam000000014cb91bb8 = 0;
      atexit((_func_5014 *)&LAB_143eabd86);
      _Init_thread_footer(&DAT_14cb91bc0);
    }
  }
  uVar4 = (*(code *)PTR_FUN_14c75b148)(DAT_14cb91b28,DAT_14cb91b30 * 2,0);
  iVar5 = FUN_14133a7a8(param_2,uVar4,&DAT_14cb91b28);
  if ((iVar5 == -1) || (lVar6 = (longlong)iVar5 * 0x38 + *param_2, lVar6 == 0)) {
    FUN_1410a5228(&local_48);
  }
  else {
    local_48 = *(undefined8 *)(lVar6 + 0x20);
    plStack_40 = *(longlong **)(lVar6 + 0x28);
    if (plStack_40 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plStack_40 + 8) = *(int *)((longlong)plStack_40 + 8) + 1;
      UNLOCK();
    }
  }
  local_38 = param_1[2];
  plVar3 = (longlong *)param_1[3];
  param_1[2] = local_48;
  param_1[3] = plStack_40;
  local_48 = local_38;
  plStack_40 = plVar3;
  plStack_30 = plVar3;
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
  uVar4 = (*(code *)PTR_FUN_14c75b148)(DAT_14cb91b50,DAT_14cb91b58 * 2,0);
  iVar5 = FUN_14133a7a8(param_2,uVar4,&DAT_14cb91b50);
  lVar6 = (longlong)iVar5 * 0x38 + *param_2;
  if (lVar6 == 0 || iVar5 == -1) {
    FUN_1410a5228(&local_48);
  }
  else {
    local_48 = *(undefined8 *)(lVar6 + 0x20);
    plStack_40 = *(longlong **)(lVar6 + 0x28);
    if (plStack_40 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_40 + 1) = (int)plStack_40[1] + 1;
      UNLOCK();
    }
  }
  local_38 = param_1[4];
  plVar3 = (longlong *)param_1[5];
  param_1[4] = local_48;
  param_1[5] = plStack_40;
  local_48 = local_38;
  plStack_40 = plVar3;
  plStack_30 = plVar3;
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
  uVar4 = (*(code *)PTR_FUN_14c75b148)(DAT_14cb91b78,DAT_14cb91b80 * 2,0);
  iVar5 = FUN_14133a7a8(param_2,uVar4,&DAT_14cb91b78);
  lVar6 = (longlong)iVar5 * 0x38 + *param_2;
  if (lVar6 == 0 || iVar5 == -1) {
    FUN_1410a5228(&local_48);
  }
  else {
    local_48 = *(undefined8 *)(lVar6 + 0x20);
    plStack_40 = *(longlong **)(lVar6 + 0x28);
    if (plStack_40 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_40 + 1) = (int)plStack_40[1] + 1;
      UNLOCK();
    }
  }
  local_38 = param_1[6];
  plVar3 = (longlong *)param_1[7];
  param_1[6] = local_48;
  param_1[7] = plStack_40;
  local_48 = local_38;
  plStack_40 = plVar3;
  plStack_30 = plVar3;
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
  uVar4 = (*(code *)PTR_FUN_14c75b148)(DAT_14cb91ba0,DAT_14cb91ba8 * 2,0);
  iVar5 = FUN_14133a7a8(param_2,uVar4,&DAT_14cb91ba0);
  if ((iVar5 == -1) || (lVar6 = (longlong)iVar5 * 0x38 + *param_2, lVar6 == 0)) {
    FUN_1410a5228(&local_48);
  }
  else {
    local_48 = *(undefined8 *)(lVar6 + 0x20);
    plStack_40 = *(longlong **)(lVar6 + 0x28);
    if (plStack_40 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_40 + 1) = (int)plStack_40[1] + 1;
      UNLOCK();
    }
  }
  local_38 = param_1[8];
  plVar3 = (longlong *)param_1[9];
  param_1[8] = local_48;
  param_1[9] = plStack_40;
  local_48 = local_38;
  plStack_40 = plVar3;
  plStack_30 = plVar3;
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
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14133a7a8 FUN_14133a7a8 body=137 status=ok
// SIG undefined FUN_14133a7a8(void)

int FUN_14133a7a8(longlong *param_1,uint param_2,undefined8 *param_3)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar5 = *(int *)((longlong)plVar4 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar5 != -1) {
      lVar2 = *param_1;
      iVar1 = *(int *)(param_3 + 1);
      do {
        lVar6 = (longlong)iVar5 * 0x38;
        if ((*(int *)(lVar2 + 8 + lVar6) == iVar1) &&
           (iVar3 = wcsncmp(*(wchar_t **)(lVar2 + lVar6),(wchar_t *)*param_3,(longlong)iVar1),
           iVar3 == 0)) {
          return iVar5;
        }
        iVar5 = *(int *)(lVar2 + 0x30 + lVar6);
      } while (iVar5 != -1);
    }
  }
  return -1;
}



// FUNCTION 14133a832 FUN_14133a832 body=152 status=ok
// SIG undefined FUN_14133a832(void)

void FUN_14133a832(undefined8 *param_1)

{
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
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
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *param_1 = &PTR_FUN_14a544ad0;
  param_1[0x1d] = 0;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  *(undefined4 *)((longlong)param_1 + 0xf4) = 0xffffffff;
  param_1[0x21] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  return;
}



// FUNCTION 14133a8ca FUN_14133a8ca body=166 status=ok
// SIG undefined FUN_14133a8ca(void)

longlong * FUN_14133a8ca(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  byte bVar2;
  
  lVar1 = *param_2;
  if (DAT_14c950c29 == 1) {
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar1 = *param_2;
    }
  }
  bVar2 = DAT_14c950c29;
  *param_1 = lVar1;
  lVar1 = param_2[1];
  if ((bVar2 & 1) != 0) {
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar1 = param_2[1];
      bVar2 = DAT_14c950c29;
    }
  }
  param_1[1] = lVar1;
  memcpy(param_1 + 2,param_2 + 2,0xa4);
  lVar1 = param_2[0x17];
  if ((bVar2 & 1) != 0) {
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar1 = param_2[0x17];
    }
  }
  param_1[0x17] = lVar1;
  return param_1;
}



// FUNCTION 14133a970 FUN_14133a970 body=365 status=ok
// SIG undefined FUN_14133a970(void)

void FUN_14133a970(longlong *param_1,undefined8 param_2)

{
  size_t sVar1;
  uint uVar2;
  wchar_t *_Str;
  undefined1 auStack_118 [32];
  longlong *local_f8;
  undefined8 local_e8;
  undefined1 local_e0 [128];
  undefined1 *local_60;
  undefined1 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if ((int)param_1[1] == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)*param_1;
    local_60 = (undefined1 *)0x0;
    if (_Str == (wchar_t *)0x0) {
      local_58 = (undefined1 *)0x0;
      local_50 = 0;
      goto LAB_14133aa6b;
    }
  }
  local_60 = (undefined1 *)0x0;
  local_e8 = param_2;
  sVar1 = wcslen(_Str);
  local_50 = FUN_14475aa65(0,_Str,sVar1 & 0xffffffff);
  uVar2 = local_50 + 1;
  local_58 = (undefined1 *)0x0;
  if (0x80 < uVar2) {
    FUN_1446efa72(&local_60,0,uVar2,1);
    local_58 = local_60;
  }
  if (local_58 == (undefined1 *)0x0) {
    local_58 = local_e0;
  }
  FUN_14475a98a(local_58,uVar2,_Str,(int)sVar1 + 1);
  param_2 = local_e8;
LAB_14133aa6b:
  local_f8 = param_1 + 0xb;
  FUN_145886ba0(param_2,local_58,param_1 + 2,param_1 + 3);
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14133aade FUN_14133aade body=180 status=ok
// SIG undefined FUN_14133aade(void)

longlong * FUN_14133aade(longlong *param_1,uint param_2,longlong *param_3)

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
          if (plVar2 != (longlong *)0x0) goto LAB_14133ab75;
          break;
        }
        iVar1 = (int)plVar2[4];
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_1458fddfc(param_1,&local_1c,param_2);
  plVar2 = (longlong *)(*param_1 + (longlong)local_1c * 0x28);
LAB_14133ab75:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar2 + 1;
}



// FUNCTION 14133ab94 FUN_14133ab94 body=482 status=ok
// SIG undefined FUN_14133ab94(void)

void FUN_14133ab94(longlong *param_1)

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
        uVar4 = *(undefined8 *)(lVar3 + lVar6 * 0x28);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x24 + lVar6 * 0x28) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x20 + lVar6 * 0x28) =
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



// FUNCTION 14133ad78 FUN_14133ad78 body=1613 status=ok
// SIG undefined FUN_14133ad78(void)

void FUN_14133ad78(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 unaff_RBX;
  bool bVar5;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  code *local_80;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  int local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_28 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_88 = FUN_1446ddbd2();
      local_80 = FUN_1468d96f0;
      local_90 = 0;
      local_98 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_28);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_28);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_28 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_28);
    }
  }
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c947f70) {
    FUN_144b3d300(&DAT_14c947f70);
    if (DAT_14c947f70 == -1) {
      local_88 = FUN_1446ddbd2();
      local_80 = FUN_141710108;
      local_90 = 0x1000000000000000;
      local_98 = 0x8001;
      FUN_14000176a(&DAT_14c947f20,L"FGbxDefPtrProperty",0);
      atexit(FUN_1427b4857);
      _Init_thread_footer(&DAT_14c947f70);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_48);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_48);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_48 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_48);
    }
  }
  uStack_50 = 0;
  uStack_4c = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9520b0) {
    FUN_144b3d300(&DAT_14c9520b0);
    if (DAT_14c9520b0 == -1) {
      local_88 = FUN_1446ddbd2();
      local_80 = FUN_1409e12a0;
      local_90 = 0;
      local_98 = 0xa001;
      FUN_14000176a(&DAT_14c952060,L"FNameProperty",0x2000,0);
      atexit(FUN_142816ef9);
      _Init_thread_footer(&DAT_14c9520b0);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&uStack_50);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&uStack_50);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&uStack_50);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      uStack_50 = (undefined4)uVar2;
      uStack_4c = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&uStack_50);
    }
  }
  local_54 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d20) {
    FUN_144b3d300(&DAT_14c951d20);
    if (DAT_14c951d20 == -1) {
      local_88 = FUN_1446ddbd2();
      local_80 = FUN_14067a048;
      local_90 = 0;
      local_98 = 0x28001;
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_54);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_54);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_54);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_54 = (int)uVar2;
      uStack_50 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_54);
    }
  }
  bVar5 = local_54 != 0;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = CONCAT44(uStack_4c,uStack_50);
  local_70 = local_48;
  uVar4 = FUN_14477b664(uStack_40);
  local_68 = FUN_14477b664(uVar4);
  local_60 = local_38;
  FUN_14133b3c6(local_28,&local_70,uVar2,
                CONCAT71((int7)((ulonglong)unaff_RBX >> 8),bVar5) & 0xffffffff);
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14133b3c6 FUN_14133b3c6 body=224 status=ok
// SIG undefined FUN_14133b3c6(void)

void FUN_14133b3c6(longlong param_1,longlong *param_2,undefined8 param_3,undefined4 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = param_3;
  if ((param_1 == 0) || (lVar1 = *(longlong *)(param_1 + 0x28), lVar1 == 0)) goto LAB_14133b46c;
  lVar6 = param_2[1];
  if (lVar6 == 0) {
    uVar4 = FUN_145c2bba6();
    lVar6 = FUN_14477b664(uVar4);
    param_2[1] = lVar6;
  }
  lVar5 = param_2[2];
  if (((lVar5 == 0) && (lVar5 = 0, lVar6 != 0)) && (*param_2 != 0)) {
    plVar2 = *(longlong **)(lVar6 + 0xb8);
    if (plVar2 == (longlong *)0x0) {
LAB_14133b4a3:
      lVar5 = 0;
    }
    else {
      cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2);
      if (cVar3 == '\0') goto LAB_14133b4a3;
      uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
      lVar5 = FUN_144aff482(uVar4,param_2);
    }
    param_2[2] = lVar5;
  }
  FUN_143e3066c(lVar1 + 0x78,lVar5,&local_30,param_4);
LAB_14133b46c:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14133b4a8 FUN_14133b4a8 body=84 status=ok
// SIG undefined FUN_14133b4a8(void)

longlong * FUN_14133b4a8(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (*param_1 != lVar2) {
    param_1[2] = 0;
  }
  *param_1 = lVar2;
  if (param_1[1] != param_2[1]) {
    param_1[2] = 0;
  }
  uVar1 = FUN_14477b664();
  lVar2 = FUN_14477b664(uVar1);
  param_1[1] = lVar2;
  param_1[2] = param_2[2];
  return param_1;
}



// FUNCTION 14133b4fc FUN_14133b4fc body=203 status=ok
// SIG undefined FUN_14133b4fc(void)

longlong * FUN_14133b4fc(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  lVar3 = *(longlong *)(param_1 + 0x60);
  if (lVar3 == 0) {
    uVar2 = FUN_1458f96d4();
    lVar3 = FUN_14477b664(uVar2);
    *(longlong *)(param_1 + 0x60) = lVar3;
  }
  plVar5 = (longlong *)(param_1 + 0x58);
  if (*(longlong *)(param_1 + 0x68) == 0) {
    if ((lVar3 != 0) && (*plVar5 != 0)) {
      plVar4 = *(longlong **)(lVar3 + 0xb8);
      if ((plVar4 == (longlong *)0x0) ||
         (cVar1 = (**(code **)(*plVar4 + 0x108))(plVar4), cVar1 == '\0')) {
        *(undefined8 *)(param_1 + 0x68) = 0;
      }
      else {
        uVar2 = (**(code **)(*plVar4 + 0x110))(plVar4);
        lVar3 = FUN_144aff482(uVar2,plVar5);
        *(longlong *)(param_1 + 0x68) = lVar3;
        if (lVar3 != 0) {
          return plVar5;
        }
      }
    }
    plVar4 = (longlong *)FUN_145ada3a8();
    lVar3 = plVar4[0x22];
    if (lVar3 == 0) {
      (**(code **)(*plVar4 + 1000))(plVar4);
      lVar3 = plVar4[0x22];
      if (lVar3 == 0) {
        return plVar5;
      }
    }
    plVar5 = (longlong *)(lVar3 + 0x38);
  }
  return plVar5;
}



// FUNCTION 14133b5c8 FUN_14133b5c8 body=224 status=ok
// SIG undefined FUN_14133b5c8(void)

void FUN_14133b5c8(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar3 = *(longlong *)(param_1 + 0x288);
  if (lVar3 != 0) {
    FUN_1448d5e3c(&local_40,param_1 + 0x208);
    lVar4 = *(longlong *)(local_40 + 0x510);
    AcquireSRWLockShared((PSRWLOCK)(lVar4 + 0xd0));
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_38 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_38)(local_38);
        LOCK();
        piVar2 = (int *)((longlong)local_38 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_38 + 0x10))(local_38);
        }
      }
    }
    if (*(int *)(lVar4 + 200) != *(int *)(param_1 + 0x298)) {
      *(int *)(param_1 + 0x298) = *(int *)(lVar4 + 200);
      *(undefined4 *)(lVar3 + 0xc0) = *(undefined4 *)(lVar4 + 0xc0);
      FUN_1458fe424(lVar3 + 0xb0,lVar4 + 0xb0);
    }
    ReleaseSRWLockShared((PSRWLOCK)(lVar4 + 0xd0));
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14133b6aa FUN_14133b6aa body=4293 status=ok
// SIG undefined FUN_14133b6aa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14133b6aa(longlong *param_1,float param_2)

{
  uint *puVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  double dVar7;
  undefined1 auVar8 [16];
  char cVar9;
  undefined4 uVar10;
  uint uVar11;
  longlong lVar12;
  undefined8 uVar13;
  int iVar14;
  uint uVar15;
  undefined8 *puVar16;
  longlong *plVar17;
  longlong lVar18;
  ulonglong uVar19;
  float fVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar29;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  double dVar30;
  double dVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar39;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  double dVar43;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  double dVar44;
  undefined1 auVar45 [16];
  double dVar46;
  double dVar47;
  undefined1 auVar48 [16];
  double dVar49;
  double dVar50;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined4 unaff_XMM9_Dc;
  undefined4 unaff_XMM9_Dd;
  undefined1 auVar54 [16];
  float fVar55;
  undefined1 auStack_388 [32];
  undefined8 local_368;
  undefined4 local_360;
  undefined1 local_358;
  float local_350;
  float local_34c;
  double local_348;
  double dStack_340;
  double local_338;
  double dStack_330;
  undefined1 local_328 [16];
  double local_318;
  undefined8 uStack_310;
  undefined1 local_308 [16];
  double local_2f8;
  undefined8 uStack_2f0;
  undefined1 local_2e8 [16];
  undefined1 local_2d8 [16];
  double local_2c8;
  double dStack_2c0;
  double local_2b8;
  double dStack_2b0;
  undefined1 local_2a8 [16];
  undefined1 local_298 [16];
  undefined8 local_280;
  double local_278;
  double dStack_270;
  double local_268;
  double dStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  undefined8 uStack_240;
  double local_238;
  double dStack_230;
  double local_228;
  undefined8 uStack_220;
  undefined1 local_218 [16];
  double local_208;
  undefined8 uStack_200;
  undefined1 local_1f8 [16];
  double local_1e8;
  undefined8 uStack_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  undefined8 uStack_1c0;
  undefined1 local_1b8 [16];
  double local_1a8;
  undefined8 uStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  undefined8 uStack_180;
  double local_178;
  double dStack_170;
  double local_168;
  undefined8 uStack_160;
  double local_158;
  double dStack_150;
  undefined1 local_148 [16];
  double local_138;
  double dStack_130;
  double local_128;
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_388;
  if ((*(uint *)(param_1[2] + 0xd4) & 0x40080) != 0x80) {
    local_158 = (double)CONCAT44(local_158._4_4_,param_2);
    uVar13 = FUN_14477b072(param_1,DAT_14cac9bd0);
    (**(code **)(*param_1 + 0x248))(param_1,uVar13,&local_158);
    lVar12 = FUN_1447210f0(param_1);
    if (lVar12 != 0) {
      uVar13 = FUN_14119d0a4(lVar12);
      FUN_140e65914(uVar13,param_1);
    }
  }
  if ((char)param_1[0x4e1] == '\x01') {
    if (*(float *)((longlong)param_1 + 0x270c) <= 0.0) {
      FUN_1458ae19c(param_1);
    }
    else {
      fVar55 = *(float *)((longlong)param_1 + 0x270c) - param_2;
      if (fVar55 <= 0.0) {
        fVar55 = 0.0;
      }
      *(float *)((longlong)param_1 + 0x270c) = fVar55;
    }
  }
  lVar12 = DAT_14c9647c8;
  if (*(char *)((longlong)param_1 + 0x27dc) != '\0') goto LAB_14133c19a;
  iVar14 = *(int *)((longlong)param_1 + 0x2774);
  if (iVar14 == 0) {
LAB_14133c21b:
    if (param_1[0x39] != 0) {
      local_148._0_8_ = param_1[0x4f9];
      local_158 = (double)param_1[0x4f7];
      dStack_150 = (double)param_1[0x4f8];
      FUN_141226a1c();
    }
  }
  else {
    puVar1 = (uint *)(param_1 + 0x4ee);
    uVar11 = *puVar1;
    if (((int)uVar11 < 0) || (DAT_14c9647dc <= (int)uVar11)) goto LAB_14133c21b;
    lVar18 = (ulonglong)((uVar11 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8);
    if ((lVar18 == 0) ||
       ((*(int *)(lVar18 + 0x10) != iVar14 || ((*(uint *)(lVar18 + 8) & 0x10200000) != 0))))
    goto LAB_14133c21b;
    fVar55 = *(float *)(param_1 + 0x4fa);
    *(float *)(param_1 + 0x4fa) = param_2 + fVar55;
    fVar55 = (param_2 + fVar55) * *(float *)(param_1 + 0x4fb);
    puVar16 = (undefined8 *)
              ((ulonglong)((uVar11 & 0xffff) * 0x18) +
              *(longlong *)(lVar12 + (ulonglong)(uVar11 >> 0x10) * 8));
    if ((puVar16 == (undefined8 *)0x0) ||
       ((*(int *)(puVar16 + 2) != iVar14 || ((*(uint *)(puVar16 + 1) & 0x10200000) != 0)))) {
      plVar17 = (longlong *)0x0;
    }
    else {
      plVar17 = (longlong *)*puVar16;
    }
    cVar9 = (**(code **)(*plVar17 + 0x798))();
    if (cVar9 == '\0') {
      uVar10 = 0;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2774) == 0) {
LAB_14133c2ae:
        plVar17 = (longlong *)0x0;
      }
      else {
        uVar11 = *puVar1;
        plVar17 = (longlong *)0x0;
        if ((-1 < (int)uVar11) && ((int)uVar11 < DAT_14c9647dc)) {
          puVar16 = (undefined8 *)
                    ((ulonglong)((uVar11 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8));
          if ((puVar16 == (undefined8 *)0x0) ||
             ((*(int *)(puVar16 + 2) != *(int *)((longlong)param_1 + 0x2774) ||
              ((*(uint *)(puVar16 + 1) & 0x10200000) != 0)))) goto LAB_14133c2ae;
          plVar17 = (longlong *)*puVar16;
        }
      }
      uVar10 = (**(code **)(*plVar17 + 0x700))();
    }
    if (*(int *)((longlong)param_1 + 0x2774) == 0) {
LAB_14133c2a7:
      lVar12 = 0;
    }
    else {
      uVar11 = *puVar1;
      lVar12 = 0;
      if ((-1 < (int)uVar11) && ((int)uVar11 < DAT_14c9647dc)) {
        plVar17 = (longlong *)
                  ((ulonglong)((uVar11 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8));
        if ((plVar17 == (longlong *)0x0) ||
           (((int)plVar17[2] != *(int *)((longlong)param_1 + 0x2774) ||
            ((*(uint *)(plVar17 + 1) & 0x10200000) != 0)))) goto LAB_14133c2a7;
        lVar12 = *plVar17;
      }
    }
    plVar17 = (longlong *)
              (**(code **)(*(longlong *)(lVar12 + 0x3a30) + 0x20))(lVar12 + 0x3a30,uVar10);
    if (plVar17 == (longlong *)0x0) goto LAB_14133c21b;
    FUN_1446f470e(&local_280,L"L_Hand_Object",1);
    lVar12 = (**(code **)(param_1[0x4c0] + 0x30))(param_1 + 0x4c0);
    if (lVar12 != 0) {
      local_280 = *(undefined8 *)(lVar12 + 0x210);
    }
    if (param_1[0x520] == 0) {
      uVar13 = 0;
    }
    else {
      uVar13 = *(undefined8 *)(param_1[0x520] + 0x470);
    }
    local_350 = 1.0;
    fVar20 = (float)(**(code **)(param_1[0x4bf] + 0x98))(param_1 + 0x4bf,uVar10);
    dVar36 = (double)fVar20;
    dVar35 = (double)param_1[0x4f9] * dVar36;
    dVar23 = (double)param_1[0x4f8];
    dVar24 = (double)param_1[0x4f7];
    local_308._8_4_ = unaff_XMM9_Dc;
    local_308._0_8_ = dVar36 * dVar24;
    local_308._12_4_ = unaff_XMM9_Dd;
    uStack_310 = 0;
    local_318 = dVar23 * dVar36;
    (**(code **)(*plVar17 + 0x4a8))(plVar17,local_2e8,local_280,0);
    plVar17 = (longlong *)param_1[0x39];
    uVar10 = (**(code **)(*plVar17 + 0x4a8))(plVar17,&local_158,uVar13,2);
    auVar45._8_8_ = dStack_110;
    auVar45._0_8_ = local_118;
    auVar52._8_8_ = dStack_100;
    auVar52._0_8_ = local_108;
    auVar51._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(dStack_110));
    auVar51._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(local_118));
    uVar11 = movmskpd(uVar10,auVar51);
    auVar48._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(dStack_100));
    auVar48._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(local_108));
    iVar14 = movmskpd((int)plVar17,auVar48);
    uVar15 = iVar14 << 2 | uVar11;
    if (uVar15 == 0) {
      dStack_340 = dRam000000014c8464d8;
      local_348 = DAT_14c8464d0;
      dVar21 = DAT_14c8464c0;
      dVar29 = DAT_14c8464c8;
      dVar34 = DAT_14c846490;
      dVar39 = DAT_14c846498;
      dVar44 = DAT_14c846480;
      dVar46 = DAT_14c846488;
      dVar22 = DAT_14c8464a0;
      dVar25 = DAT_14c8464a8;
      dVar43 = DAT_14c8464b0;
      dVar49 = DAT_14c8464b8;
    }
    else {
      auVar51 = divpd(_DAT_149934d80,auVar45);
      auVar45 = divpd(ZEXT816(0x3ff0000000000000),auVar52);
      dVar21 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(local_118)) & auVar51._0_8_);
      dVar29 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(dStack_110)) & auVar51._8_8_);
      local_348 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(local_108)) & auVar45._0_8_);
      dVar34 = (double)local_148._0_8_ * -1.0;
      dVar39 = (double)local_148._8_8_ * 1.0;
      dVar44 = -local_158;
      dVar46 = -dStack_150;
      dVar22 = local_138 * dVar21;
      dVar25 = dStack_130 * dVar29;
      dStack_340 = 0.0;
      dVar5 = local_128 * local_348;
      dVar43 = dVar25 * dVar44 - dVar46 * dVar22;
      dVar49 = dVar5 * dVar46 - dVar34 * dVar25;
      dVar30 = dVar22 * dVar34 - dVar44 * dVar5;
      dVar49 = dVar49 + dVar49;
      dVar30 = dVar30 + dVar30;
      dVar43 = dVar43 + dVar43;
      dVar22 = 0.0 - ((dVar43 * dVar46 - dVar30 * dVar34) + dVar39 * dVar49 + dVar22);
      dVar25 = 0.0 - (dVar43 * local_158 + dVar34 * dVar49 + dVar39 * dVar30 + dVar25);
      dVar43 = 0.0 - (dVar39 * dVar43 + dVar5 + (dVar30 * dVar44 - dVar49 * dVar46));
      dVar49 = 0.0;
    }
    dVar5 = dStack_340;
    dVar30 = local_348;
    dVar22 = dVar36 * dVar24 * dVar22;
    dVar25 = dVar23 * dVar36 * dVar25;
    if (fVar55 <= local_350) {
      local_350 = fVar55;
    }
    uStack_2f0 = 0;
    dVar23 = local_2a8._0_8_;
    dVar36 = local_2a8._8_8_;
    dVar24 = local_298._0_8_;
    dVar2 = local_298._8_8_;
    auVar32._8_8_ = dVar29;
    auVar32._0_8_ = dVar21;
    auVar45 = minpd(auVar32,local_2a8);
    auVar8._8_8_ = dStack_340;
    auVar8._0_8_ = local_348;
    auVar52 = minpd(auVar8,local_298);
    auVar33._8_8_ = -(ulonglong)(auVar45._8_8_ < 0.0);
    auVar33._0_8_ = -(ulonglong)(auVar45._0_8_ < 0.0);
    iVar14 = movmskpd(uVar11,auVar33);
    auVar53._8_8_ = -(ulonglong)(auVar52._8_8_ < 0.0);
    auVar53._0_8_ = -(ulonglong)(auVar52._0_8_ < 0.0);
    uVar11 = movmskpd(uVar15,auVar53);
    local_34c = fVar55;
    local_2f8 = dVar35;
    if ((uVar11 & 0x3fffffff) == 0 && iVar14 == 0) {
      dVar3 = dVar46 * (double)local_2d8._0_8_ * -1.0 +
              dVar34 * (double)local_2e8._8_8_ +
              dVar39 * (double)local_2e8._0_8_ * 1.0 + dVar44 * (double)local_2d8._8_8_;
      dVar4 = dVar44 * (double)local_2d8._0_8_ * 1.0 +
              dVar39 * (double)local_2e8._8_8_ +
              dVar34 * (double)local_2e8._0_8_ * -1.0 + dVar46 * (double)local_2d8._8_8_;
      auVar54._0_8_ =
           dVar39 * (double)local_2d8._0_8_ * 1.0 +
           (((double)local_2e8._0_8_ * dVar46 * 1.0 + dVar34 * (double)local_2d8._8_8_) -
           dVar44 * (double)local_2e8._8_8_);
      auVar54._8_8_ =
           dVar34 * (double)local_2d8._0_8_ * -1.0 +
           (((double)local_2e8._0_8_ * dVar44 * -1.0 + dVar39 * (double)local_2d8._8_8_) -
           dVar46 * (double)local_2e8._8_8_);
      dVar22 = dVar22 * dVar23;
      dVar25 = dVar25 * dVar36;
      dVar46 = dVar35 * dVar43 * dVar24;
      dVar43 = dVar49 * 0.0 * dVar2;
      dVar35 = dVar25 * (double)local_2e8._0_8_ - dVar22 * (double)local_2e8._8_8_;
      dVar39 = dVar46 * (double)local_2e8._8_8_ - dVar25 * (double)local_2d8._0_8_;
      dVar44 = dVar22 * (double)local_2d8._0_8_ - dVar46 * (double)local_2e8._0_8_;
      dVar34 = dVar43 * (double)local_2d8._8_8_ - dVar43 * (double)local_2d8._8_8_;
      dVar39 = dVar39 + dVar39;
      dVar44 = dVar44 + dVar44;
      dVar35 = dVar35 + dVar35;
      dVar34 = dVar34 + dVar34;
      local_f8 = (dVar35 * (double)local_2e8._8_8_ - (double)local_2d8._0_8_ * dVar44) +
                 (double)local_2d8._8_8_ * dVar39 + dVar22 + local_2c8;
      dStack_f0 = (dVar39 * (double)local_2d8._0_8_ - dVar35 * (double)local_2e8._0_8_) +
                  (double)local_2d8._8_8_ * dVar44 + dVar25 + dStack_2c0;
      local_e8 = (dVar44 * (double)local_2e8._0_8_ - (double)local_2e8._8_8_ * dVar39) +
                 (double)local_2d8._8_8_ * dVar35 + dVar46 + local_2b8;
      dStack_2b0 = (dVar34 * (double)local_2d8._8_8_ - dVar34 * (double)local_2d8._8_8_) +
                   (double)local_2d8._8_8_ * dVar34 + dVar43 + dStack_2b0;
    }
    else {
      dVar49 = (double)local_2e8._0_8_ + (double)local_2e8._0_8_;
      dVar3 = (double)local_2e8._8_8_ + (double)local_2e8._8_8_;
      dVar7 = (double)local_2d8._0_8_ + (double)local_2d8._0_8_;
      dVar31 = (double)local_2e8._0_8_ * dVar49;
      dVar47 = (double)local_2e8._8_8_ * dVar3;
      auVar6._8_4_ = SUB84(dVar47,0);
      auVar6._0_8_ = dVar31;
      auVar6._12_4_ = (int)((ulonglong)dVar47 >> 0x20);
      dVar4 = local_348 * dVar24;
      local_188 = (1.0 - (dVar31 + dVar47)) * dVar24;
      dVar50 = (0.0 - (dVar31 + auVar6._8_8_)) * dVar2;
      local_328._8_4_ = SUB84(dVar50,0);
      local_328._0_8_ = local_188;
      local_328._12_4_ = (int)((ulonglong)dVar50 >> 0x20);
      local_338 = (dVar3 * (double)local_2d8._8_8_ + (double)local_2e8._0_8_ * dVar7) * dVar24;
      dStack_330 = (dVar49 * (double)local_2d8._8_8_ + (double)local_2e8._0_8_ * dVar49) * dVar2;
      dStack_190 = (dVar7 * (double)local_2e8._8_8_ - dVar49 * (double)local_2d8._8_8_) * dVar24;
      local_1d8 = (1.0 - ((double)local_2d8._0_8_ * dVar7 + dVar47)) * dVar23;
      dVar31 = (1.0 - ((double)local_2d8._0_8_ * dVar7 + dVar31)) * dVar36;
      dStack_1d0 = (dVar3 * (double)local_2e8._0_8_ + dVar7 * (double)local_2d8._8_8_) * dVar23;
      local_1a8 = (dVar7 * (double)local_2e8._8_8_ + dVar49 * (double)local_2d8._8_8_) * dVar36;
      local_1c8 = ((double)local_2e8._0_8_ * dVar7 - dVar3 * (double)local_2d8._8_8_) * dVar23;
      uStack_1c0 = 0;
      local_1b8._8_4_ = SUB84(dVar31,0);
      local_1b8._0_8_ = (dVar3 * (double)local_2e8._0_8_ - dVar7 * (double)local_2d8._8_8_) * dVar36
      ;
      local_1b8._12_4_ = (int)((ulonglong)dVar31 >> 0x20);
      uStack_1a0 = 0;
      uStack_180 = 0;
      local_178 = local_2c8;
      dStack_170 = dStack_2c0;
      local_168 = local_2b8;
      uStack_160 = 0x3ff0000000000000;
      dVar49 = dVar46 + dVar46;
      dVar47 = dVar34 + dVar34;
      dVar31 = dVar44 * (dVar44 + dVar44);
      local_208 = (1.0 - (dVar31 + dVar46 * dVar49)) * local_348;
      dVar50 = (dVar44 + dVar44) * dVar39;
      local_238 = (dVar49 * dVar44 - dVar47 * dVar39) * dVar29;
      dVar3 = (dVar47 * dVar46 - dVar50) * local_348;
      local_258 = (1.0 - (dVar34 * dVar47 + dVar46 * dVar49)) * dVar21;
      dStack_230 = (1.0 - (dVar34 * dVar47 + dVar31)) * dVar29;
      dStack_250 = (dVar49 * dVar44 + dVar47 * dVar39) * dVar21;
      local_228 = (dVar47 * dVar46 + dVar50) * dVar29;
      local_248 = (dVar44 * dVar47 - dVar49 * dVar39) * dVar21;
      uStack_240 = 0;
      uStack_220 = 0;
      local_218._8_4_ = SUB84(dVar3,0);
      local_218._0_8_ = (dVar49 * dVar39 + dVar44 * dVar47) * local_348;
      local_218._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
      uStack_200 = 0;
      local_1f8._8_4_ = SUB84(dVar25,0);
      local_1f8._0_8_ = dVar22;
      local_1f8._12_4_ = (int)((ulonglong)dVar25 >> 0x20);
      uStack_1e0 = 0x3ff0000000000000;
      local_1e8 = dVar35 * dVar43;
      local_198 = local_338;
      FUN_1447fea8d(&local_158);
      FUN_144a1c686(&local_158,0x3e45798ee0000000);
      auVar45 = _DAT_149934d80;
      auVar27._8_8_ = -(ulonglong)(0.0 <= dVar29 * dVar36);
      auVar27._0_8_ = -(ulonglong)(0.0 <= dVar21 * dVar23);
      auVar52 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar27);
      uVar19 = -(ulonglong)(0.0 <= dVar4);
      dVar35 = (double)(~uVar19 & 0xbff0000000000000 | uVar19 & 0x3ff0000000000000);
      dVar22 = auVar52._0_8_;
      dStack_150 = dStack_150 * dVar22;
      local_158 = local_158 * dVar22;
      local_148._0_8_ = (double)local_148._0_8_ * dVar22;
      dVar22 = auVar52._8_8_;
      local_128 = local_128 * dVar22;
      dStack_130 = dStack_130 * dVar22;
      local_138 = dVar22 * local_138;
      local_108 = local_108 * dVar35;
      dStack_110 = dStack_110 * dVar35;
      local_118 = dVar35 * local_118;
      FUN_14481fd10(&local_278,&local_158);
      dVar35 = local_268 * local_268 + local_278 * local_278;
      dVar22 = dStack_260 * dStack_260 + dStack_270 * dStack_270;
      auVar38._0_8_ = dVar35 + dVar22;
      auVar38._8_8_ = dVar35 + dVar22;
      auVar28._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar38._8_8_);
      auVar28._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar38._0_8_);
      auVar52 = sqrtpd(auVar38,auVar38);
      auVar45 = divpd(auVar45,auVar52);
      auVar42._0_8_ = auVar45._0_8_ * local_268;
      auVar42._8_8_ = auVar45._8_8_ * dStack_260;
      dVar3 = (double)((ulonglong)(local_278 * auVar45._0_8_) &
                      -(ulonglong)(9.99999993922529e-09 <= auVar38._0_8_));
      dVar4 = (double)((ulonglong)(dStack_270 * auVar45._8_8_) &
                      -(ulonglong)(9.99999993922529e-09 <= auVar38._8_8_));
      auVar54 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar42,auVar28);
      dStack_2b0 = 0.0;
    }
    local_2e8._8_4_ = SUB84(dVar4,0);
    local_2e8._0_8_ = dVar3;
    local_2e8._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
    local_2a8._8_4_ = SUB84(dVar29 * dVar36,0);
    local_2a8._0_8_ = dVar21 * dVar23;
    local_2a8._12_4_ = (int)((ulonglong)(dVar29 * dVar36) >> 0x20);
    local_298._8_4_ = SUB84(dVar5 * dVar2,0);
    local_298._0_8_ = dVar30 * dVar24;
    local_298._12_4_ = (int)((ulonglong)(dVar5 * dVar2) >> 0x20);
    dVar24 = (double)param_1[0x4f0];
    dVar36 = (double)param_1[0x4f1];
    dVar35 = (double)param_1[0x4f2];
    dVar23 = (double)param_1[0x4f3];
    dVar22 = auVar54._8_8_ * dVar23 + dVar35 * auVar54._0_8_ + dVar4 * dVar36 + dVar24 * dVar3;
    dVar29 = (double)local_350;
    dVar21 = dVar22 * (double)(&DAT_149931160)[0.0 <= dVar22];
    dVar25 = 1.0 - dVar29;
    dVar22 = (double)(&DAT_149931160)[0.0 <= dVar22] * dVar29;
    local_2d8 = auVar54;
    local_2c8 = local_f8;
    dStack_2c0 = dStack_f0;
    local_2b8 = local_e8;
    if (dVar21 < 0.9999) {
      dVar23 = dVar21;
      if (1.0 <= dVar21) {
        dVar23 = 1.0;
      }
      dVar23 = acos((double)(-(ulonglong)(dVar21 < -1.0) & 0xbff0000000000000 |
                            ~-(ulonglong)(dVar21 < -1.0) & (ulonglong)dVar23));
      dVar24 = sin(dVar23);
      dVar25 = sin(dVar25 * dVar23);
      dVar25 = dVar25 * (1.0 / dVar24);
      dVar22 = sin(dVar22 * dVar23);
      dVar22 = dVar22 * (1.0 / dVar24);
      dVar23 = (double)param_1[0x4f3];
      dVar35 = (double)param_1[0x4f2];
      dVar24 = (double)param_1[0x4f0];
      dVar36 = (double)param_1[0x4f1];
    }
    dVar21 = dVar23 * dVar25 + auVar54._8_8_ * dVar22;
    dVar35 = dVar35 * dVar25 + auVar54._0_8_ * dVar22;
    dVar36 = dVar36 * dVar25 + dVar4 * dVar22;
    dVar23 = dVar24 * dVar25 + dVar22 * dVar3;
    auVar37._0_8_ = dVar23 * dVar23;
    auVar37._8_8_ = dVar36 * dVar36;
    dVar24 = dVar35 * dVar35 + auVar37._0_8_;
    dVar22 = dVar21 * dVar21 + auVar37._8_8_;
    auVar40._0_8_ = dVar24 + dVar22;
    auVar40._8_8_ = dVar24 + dVar22;
    auVar26._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar40._8_8_);
    auVar26._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar40._0_8_);
    auVar45 = sqrtpd(auVar37,auVar40);
    auVar45 = divpd(_DAT_149934d80,auVar45);
    auVar41._0_8_ = auVar45._0_8_ * dVar35;
    auVar41._8_8_ = auVar45._8_8_ * dVar21;
    local_158 = (double)((ulonglong)(dVar23 * auVar45._0_8_) &
                        -(ulonglong)(9.99999993922529e-09 <= auVar40._0_8_));
    dStack_150 = (double)((ulonglong)(dVar36 * auVar45._8_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar40._8_8_));
    local_148 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar41,auVar26);
    plVar17 = (longlong *)param_1[0x39];
    fVar55 = local_34c;
    if (plVar17 != (longlong *)0x0) {
      dVar23 = (double)param_1[0x4f9];
      dVar24 = (double)param_1[0x4f8];
      dVar36 = (double)param_1[0x4f7];
      local_1c8 = ((local_2b8 - (double)param_1[0x4f6]) * dVar29 + (double)param_1[0x4f6]) -
                  (double)plVar17[0x4e];
      dStack_1d0 = ((dStack_2c0 - (double)param_1[0x4f5]) * dVar29 + (double)param_1[0x4f5]) -
                   (double)plVar17[0x4d];
      local_1d8 = ((local_2c8 - (double)param_1[0x4f4]) * dVar29 + (double)param_1[0x4f4]) -
                  (double)plVar17[0x4c];
      local_358 = 0;
      local_360 = 0;
      local_368 = 0;
      (**(code **)(*plVar17 + 0x510))(plVar17,&local_1d8,&local_158,0);
      fVar55 = local_34c;
      if (param_1[0x39] != 0) {
        local_1c8 = (local_2f8 - dVar23) * dVar29 + dVar23;
        dStack_1d0 = (local_318 - dVar24) * dVar29 + dVar24;
        local_1d8 = ((double)local_308._0_8_ - dVar36) * dVar29 + dVar36;
        FUN_141226a1c();
      }
    }
    if (fVar55 < 1.0) goto LAB_14133c19a;
    lVar12 = FUN_14479d2ce(puVar1);
    FUN_14133c79c(param_1,lVar12 + 0x3b48);
    *(undefined1 *)((longlong)param_1 + 0x27de) = 1;
    if (((int)param_1[0x4e0] != 0) && ((longlong *)param_1[0x4df] != (longlong *)0x0)) {
      (**(code **)(*(longlong *)param_1[0x4df] + 0x60))();
    }
    *(undefined1 *)((longlong)param_1 + 0x27de) = 0;
  }
  FUN_1458fe636(param_1);
LAB_14133c19a:
  if ((local_d0 ^ (ulonglong)auStack_388) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14133c79c FUN_14133c79c body=563 status=ok
// SIG undefined FUN_14133c79c(void)

void FUN_14133c79c(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  byte bVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 *puVar7;
  undefined1 auStack_138 [40];
  undefined8 local_110;
  undefined8 local_108;
  undefined1 local_100 [192];
  undefined1 *local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_138;
  lVar4 = (**(code **)(*param_2 + 0x10))(param_2);
  if (lVar4 != 0) {
    lVar5 = FUN_144a2f878();
    if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8)
        == lVar5 + 0x30)) {
      FUN_14485c47a(param_1 + 0x4eb,param_1[0x2d]);
      FUN_14485c47a(param_1 + 0x4ec,param_1[0x36]);
      (**(code **)(*param_1 + 0x440))(param_1,lVar4);
      FUN_140eeb8c0(param_1,lVar4);
      FUN_1446f470e(&local_108,L"L_Hand_Object",1);
      local_110 = 0;
      lVar4 = (**(code **)(param_1[0x4c0] + 0x30))(param_1 + 0x4c0);
      if (lVar4 != 0) {
        local_108 = *(undefined8 *)(lVar4 + 0x210);
      }
      if (param_1[0x520] != 0) {
        local_110 = *(undefined8 *)(param_1[0x520] + 0x470);
      }
      plVar1 = param_1 + 0x50b;
      FUN_14133c9d0(plVar1,&local_108);
      FUN_1458fe796(plVar1,&local_110);
      FUN_1458fe79e(param_1);
      (**(code **)(*param_1 + 0x578))(param_1);
      FUN_1412bbaf4(plVar1,param_1 + 0x4bf);
      local_40 = (undefined1 *)0x0;
      local_38 = 0x1800000000;
      FUN_14024dbd6(param_1,local_100,0);
      puVar7 = local_40;
      if (local_40 == (undefined1 *)0x0) {
        puVar7 = local_100;
      }
      lVar4 = (longlong)(int)local_38;
      if (lVar4 != 0) {
        lVar5 = 0;
        do {
          lVar2 = *(longlong *)(puVar7 + lVar5);
          if ((~*(byte *)(lVar2 + 0x9c) & 3) == 0) {
            bVar3 = *(byte *)(lVar2 + 0x9d);
            if ((bVar3 & 1) != 0) {
              if ((*(longlong *)(lVar2 + 0xb0) != 0) || (lVar6 = FUN_1448abda6(lVar2), lVar6 != 0))
              goto LAB_14133c975;
              bVar3 = *(byte *)(lVar2 + 0x9d);
            }
            *(byte *)(lVar2 + 0x9d) = bVar3 | 1;
            FUN_1401057d4(lVar2);
            FUN_14010586c(&DAT_14cad0140,lVar2);
          }
LAB_14133c975:
          lVar5 = lVar5 + 8;
        } while (lVar4 * 8 != lVar5);
      }
      if (local_40 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14133c9d0 FUN_14133c9d0 body=7 status=ok
// SIG undefined FUN_14133c9d0(void)

void FUN_14133c9d0(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}



// FUNCTION 14133c9d8 FUN_14133c9d8 body=48 status=ok
// SIG undefined FUN_14133c9d8(void)

undefined8 FUN_14133c9d8(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  if ((*(char *)(param_1 + 0x38) == '\x01') && (*(longlong *)(param_1 + 0x40) != 0)) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x30);
    if (lVar1 == 0) {
      plVar3 = (longlong *)0x0;
    }
    else {
      plVar3 = *(longlong **)(lVar1 + 0x2b0);
    }
                    /* WARNING: Could not recover jumptable at 0x00014133c9fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar3 + 0x658))();
    return uVar2;
  }
  return 0;
}



// FUNCTION 14133ca08 FUN_14133ca08 body=141 status=ok
// SIG undefined FUN_14133ca08(void)

undefined8 FUN_14133ca08(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  bool bVar6;
  
  lVar3 = FUN_14479d2ce(param_1 + 0x68);
  uVar4 = 0;
  if ((lVar3 != 0) && (*param_2 != 0)) {
    lVar3 = *(longlong *)(lVar3 + 0x428);
    if ((lVar3 == 0) || (iVar1 = *(int *)(param_1 + 0x90), (longlong)iVar1 == 0)) {
      uVar4 = 0;
    }
    else {
      lVar2 = *(longlong *)(param_1 + 0x88);
      lVar5 = 0;
      do {
        uVar4 = FUN_14133ca96(lVar3,*(undefined8 *)(lVar2 + 0x10 + lVar5),*param_2);
        if ((char)uVar4 != '\0') {
          return uVar4;
        }
        bVar6 = (longlong)iVar1 * 0x138 + -0x138 != lVar5;
        lVar5 = lVar5 + 0x138;
      } while (bVar6);
    }
  }
  return uVar4;
}



// FUNCTION 14133ca96 FUN_14133ca96 body=720 status=ok
// SIG undefined FUN_14133ca96(void)

byte FUN_14133ca96(longlong param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  byte bVar2;
  longlong lVar3;
  undefined8 uVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  longlong *plVar10;
  
  plVar10 = *(longlong **)(param_1 + 0x658);
  if (plVar10 == (longlong *)0x0) {
    plVar10 = *(longlong **)(param_1 + 0x660);
    if ((DAT_14c950c29 & plVar10 != (longlong *)0x0) != 0) goto LAB_14133cd2b;
    if (plVar10 == (longlong *)0x0) {
      return 0;
    }
LAB_14133cccb:
    if ((DAT_14c950c29 & plVar10 != (longlong *)0x0) != 0) {
LAB_14133cd59:
      FUN_1456cec3c(plVar10);
    }
  }
  else if (DAT_14c950c29 != 0) {
LAB_14133cd2b:
    FUN_1456cec3c(plVar10);
    plVar10 = *(longlong **)(param_1 + 0x658);
    if (plVar10 == (longlong *)0x0) {
      plVar10 = *(longlong **)(param_1 + 0x660);
      goto LAB_14133cccb;
    }
    if ((DAT_14c950c29 & 1) == 0) goto LAB_14133cac5;
    goto LAB_14133cd59;
  }
LAB_14133cac5:
  lVar3 = (**(code **)(*plVar10 + 0x310))(plVar10);
  if ((param_2 != 0) && (*(int *)(lVar3 + 0x98) != *(int *)(lVar3 + 0xc4))) {
    uVar1 = (uint)((ulonglong)param_2 >> 0x10);
    uVar9 = (uint)param_2 & 0xffff;
    lVar8 = lVar3 + 200;
    if (*(longlong *)(lVar3 + 0xd0) != 0) {
      lVar8 = *(longlong *)(lVar3 + 0xd0);
    }
    iVar6 = *(int *)(lVar8 + (ulonglong)
                             (*(int *)(lVar3 + 0xd8) - 1U &
                             (int)((ulonglong)param_2 >> 0x20) + ((uint)param_2 << 0x10 | uVar9) +
                             (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar9 >> 4)) * 4);
    if (iVar6 != -1) {
      do {
        plVar10 = (longlong *)(*(longlong *)(lVar3 + 0x90) + (longlong)iVar6 * 0x14);
        if (*plVar10 == param_2) {
          bVar2 = 0;
          if (plVar10 != (longlong *)0x0) {
            bVar5 = 0;
            if (plVar10 + 1 == (longlong *)0x0) goto LAB_14133cca3;
            iVar6 = (int)plVar10[1];
            if (iVar6 != -1) {
              plVar10 = *(longlong **)(param_1 + 0x658);
              if (plVar10 == (longlong *)0x0) {
                plVar10 = *(longlong **)(param_1 + 0x660);
                if ((DAT_14c950c29 & plVar10 != (longlong *)0x0) != 0) goto LAB_14133ccf4;
              }
              else if (DAT_14c950c29 == 1) {
LAB_14133ccf4:
                FUN_1456cec3c(plVar10);
              }
              lVar3 = (**(code **)(*plVar10 + 0x310))(plVar10);
              if ((param_3 != 0) && (*(int *)(lVar3 + 0x98) != *(int *)(lVar3 + 0xc4))) {
                uVar1 = (uint)((ulonglong)param_3 >> 0x10);
                uVar9 = (uint)param_3 & 0xffff;
                lVar8 = lVar3 + 200;
                if (*(longlong *)(lVar3 + 0xd0) != 0) {
                  lVar8 = *(longlong *)(lVar3 + 0xd0);
                }
                iVar7 = *(int *)(lVar8 + (ulonglong)
                                         (*(int *)(lVar3 + 0xd8) - 1U &
                                         (int)((ulonglong)param_3 >> 0x20) +
                                         ((uint)param_3 << 0x10 | uVar9) +
                                         (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar9 >> 4)) * 4);
                if (iVar7 != -1) {
                  goto LAB_14133cc32;
                }
              }
            }
          }
          break;
        }
        iVar6 = *(int *)((longlong)plVar10 + 0xc);
      } while (iVar6 != -1);
    }
  }
LAB_14133cca1:
  bVar2 = 0;
  bVar5 = 0;
LAB_14133cca3:
  return bVar2 & bVar5;
  while (iVar7 = *(int *)((longlong)plVar10 + 0xc), iVar7 != -1) {
LAB_14133cc32:
    plVar10 = (longlong *)(*(longlong *)(lVar3 + 0x90) + (longlong)iVar7 * 0x14);
    if (*plVar10 == param_3) {
      bVar2 = 0;
      if (plVar10 != (longlong *)0x0) {
        bVar5 = 0;
        if (plVar10 + 1 == (longlong *)0x0) goto LAB_14133cca3;
        iVar7 = (int)plVar10[1];
        if (iVar7 != -1) {
          plVar10 = *(longlong **)(param_1 + 0x658);
          if (plVar10 == (longlong *)0x0) {
            plVar10 = *(longlong **)(param_1 + 0x660);
            if ((DAT_14c950c29 & plVar10 != (longlong *)0x0) != 0) goto LAB_14133cd1e;
          }
          else if (DAT_14c950c29 == 1) {
LAB_14133cd1e:
            FUN_1456cec3c(plVar10);
          }
          uVar4 = (**(code **)(*plVar10 + 0x310))(plVar10);
          bVar2 = FUN_1404183aa(uVar4,iVar6,iVar7);
          bVar5 = 1;
          goto LAB_14133cca3;
        }
      }
      break;
    }
  }
  goto LAB_14133cca1;
}



// FUNCTION 14133cd66 FUN_14133cd66 body=142 status=ok
// SIG undefined FUN_14133cd66(void)

int FUN_14133cd66(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 0x3a8))(param_1,&local_28);
  iVar4 = 0;
  if ((local_28 != 0) && (lVar3 = *(longlong *)(local_28 + 0x50), iVar4 = 0, lVar3 != 0)) {
    iVar4 = (*(int *)(lVar3 + 0x430) + *(int *)(lVar3 + 0x78)) - *(int *)(lVar3 + 0x45c);
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
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14133cdf6 FUN_14133cdf6 body=146 status=ok
// SIG undefined FUN_14133cdf6(void)

ulonglong FUN_14133cdf6(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 0x3a8))(param_1,&local_28);
  if (((local_28 == 0) || (*(longlong *)(local_28 + 0x50) == 0)) ||
     (lVar3 = *(longlong *)(*(longlong *)(local_28 + 0x50) + 0x60), lVar3 == 0)) {
    uVar4 = 0;
  }
  else {
    uVar4 = CONCAT71((int7)((ulonglong)&local_28 >> 8),*(int *)(lVar3 + 0x58) == 1);
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
    return uVar4 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14133ce8a FUN_14133ce8a body=176 status=ok
// SIG undefined FUN_14133ce8a(void)

int FUN_14133ce8a(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 0x3a8))();
  iVar5 = 0;
  if (((local_28 != 0) && (lVar3 = *(longlong *)(local_28 + 0x50), iVar5 = 0, lVar3 != 0)) &&
     ((longlong)*(int *)(lVar3 + 0x78) != 0)) {
    lVar4 = 0;
    iVar5 = 0;
    do {
      iVar5 = iVar5 + (uint)(*(int *)(*(longlong *)(*(longlong *)(lVar3 + 0x70) + lVar4) + 0x14) ==
                            1);
      lVar4 = lVar4 + 0x10;
    } while ((longlong)*(int *)(lVar3 + 0x78) * 0x10 != lVar4);
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
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14133cf3b FUN_14133cf3b body=76 status=ok
// SIG undefined FUN_14133cf3b(void)

undefined8 FUN_14133cf3b(void)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  plVar1 = (longlong *)FUN_1406f625c();
  if (plVar1 != (longlong *)0x0) {
    lVar2 = FUN_1406f6176();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(plVar1[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
                    /* WARNING: Could not recover jumptable at 0x00014133cf78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(*plVar1 + 0x3a8))(plVar1);
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 14133cf88 FUN_14133cf88 body=193 status=ok
// SIG undefined FUN_14133cf88(void)

undefined8 FUN_14133cf88(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [40];
  longlong local_50;
  undefined4 local_48;
  undefined1 local_40 [24];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar1 = *(longlong **)(param_1 + 200);
  if (plVar1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*plVar1 + 8))(plVar1);
    lVar3 = FUN_1465e4892();
    if (((lVar3 != 0) && (*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
        lVar3 + 0x30)) {
      local_50 = plVar1[3];
      local_48 = (undefined4)plVar1[4];
      FUN_1448075d0(local_40);
      if (DAT_14cbcdc38 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = FUN_144837462(DAT_14cbcdc38,local_40);
      }
      if (local_28 != 0) {
        FUN_1400020a8();
      }
      goto LAB_14133cfab;
    }
  }
  uVar4 = 0;
LAB_14133cfab:
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14133d04a FUN_14133d04a body=512 status=ok
// SIG undefined FUN_14133d04a(void)

undefined4 * FUN_14133d04a(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  char cVar1;
  undefined1 uVar2;
  undefined1 auVar3 [16];
  undefined1 auStack_78 [40];
  undefined1 local_50 [8];
  int local_48;
  float local_44;
  int local_40;
  float local_3c;
  undefined4 local_38;
  int iStack_34;
  float fStack_30;
  undefined4 uStack_2c;
  int local_28;
  float fStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((*(char *)(param_1 + 0x290) == '\x01') && (*(char *)(param_1 + 0x448) == '\x01')) {
    FUN_144a808d5(&local_40,*(undefined8 *)(param_1 + 0x43c),*(undefined8 *)(param_1 + 0x308),
                  *(undefined8 *)(param_1 + 0x310));
    FUN_144a808d5(&local_48,*(undefined8 *)(param_1 + 0x31c),*(undefined8 *)(param_1 + 0x308),
                  *(undefined8 *)(param_1 + 0x310));
    FUN_144a808d5(local_50,*param_3,*(undefined8 *)(param_1 + 0x308),
                  *(undefined8 *)(param_1 + 0x310));
    if ((*(byte *)(param_1 + 0x294) & 1) == 0) {
      if (*(char *)(param_1 + 0x444) != '\x01') {
        local_3c = local_3c + 0.0;
        auVar3 = roundss(ZEXT816(0),ZEXT416((uint)local_3c),9);
        local_40 = local_40 + ((int)ROUND(local_3c + local_3c + -0.5) >> 1) + 1;
        local_3c = (local_3c - auVar3._0_4_) + 0.5 + -0.5;
        if (0.99999994 <= local_3c) {
          local_3c = 0.99999994;
        }
        if (local_3c <= 0.0) {
          local_3c = 0.0;
        }
      }
      uVar2 = 0;
      fStack_24 = local_3c;
      fStack_30 = local_44;
      local_28 = local_40;
      iStack_34 = local_48;
    }
    else {
      fStack_24 = local_44;
      local_28 = local_48;
      if (*(char *)(param_1 + 0x444) == '\x01') {
        local_3c = local_3c + 0.0;
        auVar3 = roundss(ZEXT816(0),ZEXT416((uint)local_3c),9);
        iStack_34 = local_40 + ((int)ROUND(local_3c + local_3c + -0.5) >> 1) + 1;
        fStack_30 = (local_3c - auVar3._0_4_) + 0.5 + -0.5;
        if (0.99999994 <= fStack_30) {
          fStack_30 = 0.99999994;
        }
        if (fStack_30 <= 0.0) {
          fStack_30 = 0.0;
        }
        uVar2 = 1;
      }
      else {
        uVar2 = 1;
        fStack_30 = local_3c;
        iStack_34 = local_40;
      }
    }
    local_38 = CONCAT31(local_38._1_3_,1);
    uStack_2c = CONCAT31(uStack_2c._1_3_,uVar2);
    cVar1 = FUN_1458ffc0a(&local_38,local_50);
    if (cVar1 == '\0') {
      *(ulonglong *)(param_2 + 4) = CONCAT44(fStack_24,local_28);
      *param_2 = local_38;
      param_2[1] = iStack_34;
      param_2[2] = fStack_30;
      param_2[3] = uStack_2c;
      *(undefined1 *)(param_2 + 6) = 1;
      goto LAB_14133d07c;
    }
  }
  *(undefined1 *)(param_2 + 6) = 0;
LAB_14133d07c:
  if ((local_20 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14133d24c FUN_14133d24c body=348 status=ok
// SIG undefined FUN_14133d24c(void)

void FUN_14133d24c(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  
  lVar4 = *(longlong *)(param_1 + 0x10);
  if (lVar4 == 0) {
    uVar6 = FUN_145c05732();
    lVar4 = FUN_14477b664(uVar6);
    *(longlong *)(param_1 + 0x10) = lVar4;
  }
  plVar1 = (longlong *)(param_1 + 8);
  if (*(longlong *)(param_1 + 0x18) == 0) {
    if (lVar4 == 0) {
      return;
    }
    if (*plVar1 == 0) {
      return;
    }
    plVar2 = *(longlong **)(lVar4 + 0xb8);
    if ((plVar2 == (longlong *)0x0) ||
       (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
      *(undefined8 *)(param_1 + 0x18) = 0;
      return;
    }
    uVar6 = (**(code **)(*plVar2 + 0x110))(plVar2);
    lVar4 = FUN_144aff482(uVar6,plVar1);
    *(longlong *)(param_1 + 0x18) = lVar4;
    if (lVar4 == 0) {
      return;
    }
  }
  lVar4 = FUN_14133d3a8(*param_2);
  if (lVar4 == 0) {
    return;
  }
  lVar5 = *(longlong *)(param_1 + 0x10);
  if (lVar5 == 0) {
    uVar6 = FUN_145c05732();
    lVar5 = FUN_14477b664(uVar6);
    *(longlong *)(param_1 + 0x10) = lVar5;
  }
  if (((*(longlong *)(param_1 + 0x18) == 0) && (lVar5 != 0)) && (*plVar1 != 0)) {
    plVar2 = *(longlong **)(lVar5 + 0xb8);
    if ((plVar2 == (longlong *)0x0) ||
       (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
      uVar6 = 0;
    }
    else {
      uVar6 = (**(code **)(*plVar2 + 0x110))(plVar2);
      uVar6 = FUN_144aff482(uVar6,plVar1);
    }
    *(undefined8 *)(param_1 + 0x18) = uVar6;
  }
  FUN_14114f37e(lVar4);
  return;
}



// FUNCTION 14133d3a8 FUN_14133d3a8 body=118 status=ok
// SIG undefined FUN_14133d3a8(void)

undefined8 FUN_14133d3a8(longlong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if (((*(int *)(param_1 + 0x13c) != 0) && (uVar1 = *(uint *)(param_1 + 0x138), -1 < (int)uVar1)) &&
     ((int)uVar1 < DAT_14c9647dc)) {
    plVar4 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar4 != (longlong *)0x0) && ((int)plVar4[2] == *(int *)(param_1 + 0x13c))) &&
       ((*(uint *)(plVar4 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(plVar4 + 1) & 0x10200000) == 0) {
        lVar3 = *plVar4;
      }
      else {
        lVar3 = 0;
      }
      if ((*(longlong *)(lVar3 + 0x88) != 0) && (*(longlong **)(lVar3 + 0x90) != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00014133d413. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (**(code **)(**(longlong **)(lVar3 + 0x90) + 0x10))();
        return uVar2;
      }
    }
  }
  return 0;
}



// FUNCTION 14133d41e FUN_14133d41e body=399 status=ok
// SIG undefined FUN_14133d41e(void)

void FUN_14133d41e(double *param_1,longlong param_2)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  
  lVar3 = *(longlong *)(param_2 + 0x40);
  dVar10 = 0.0;
  if (lVar3 == 0) {
    uVar13 = 0;
    uVar14 = 0;
    dVar12 = 0.0;
  }
  else {
    uVar13 = 0;
    uVar14 = 0;
    dVar12 = 0.0;
    if (1 < *(byte *)(lVar3 + 0x90)) {
      dVar12 = *(double *)(lVar3 + 0xf0);
      uVar13 = (undefined4)*(undefined8 *)(lVar3 + 0xf8);
      uVar14 = (undefined4)((ulonglong)*(undefined8 *)(lVar3 + 0xf8) >> 0x20);
      dVar10 = *(double *)(lVar3 + 0x100);
    }
  }
  dVar7 = (double)*(float *)(lVar3 + 0x40);
  dVar8 = (double)*(float *)(lVar3 + 0x44);
  dVar11 = (double)*(float *)(lVar3 + 0x48);
  dVar9 = (double)*(float *)(lVar3 + 0x4c);
  dVar4 = dVar7 * (double)CONCAT44(uVar14,uVar13) - dVar12 * dVar8;
  dVar5 = dVar11 * dVar12 - dVar10 * dVar7;
  dVar6 = dVar8 * dVar10 - (double)CONCAT44(uVar14,uVar13) * dVar11;
  dVar4 = dVar4 + dVar4;
  dVar5 = dVar5 + dVar5;
  dVar6 = dVar6 + dVar6;
  dVar1 = *(double *)(lVar3 + 0x30);
  dVar2 = *(double *)(lVar3 + 0x28);
  *param_1 = (dVar8 * dVar4 - dVar5 * dVar11) + dVar9 * dVar6 + dVar12 + *(double *)(lVar3 + 0x20);
  param_1[1] = (dVar11 * dVar6 - dVar4 * dVar7) + dVar5 * dVar9 + (double)CONCAT44(uVar14,uVar13) +
               dVar2;
  param_1[2] = (dVar7 * dVar5 - dVar6 * dVar8) + dVar4 * dVar9 + dVar10 + dVar1;
  return;
}



// FUNCTION 14133d5ae FUN_14133d5ae body=214 status=ok
// SIG undefined FUN_14133d5ae(void)

void FUN_14133d5ae(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  int local_28;
  uint local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14133d72e(&local_30,0x10,1,0x200000);
  uVar5 = (ulonglong)local_20;
  lVar3 = local_30;
  iVar4 = local_28;
  if (-1 < (int)local_20) {
    do {
      if (iVar4 <= (int)uVar5) break;
      lVar1 = *(longlong *)(lVar3 + (uVar5 & 0xffffffff) * 8);
      lVar2 = *(longlong *)(lVar1 + 0x30);
      if ((lVar2 == 0) || (*(longlong *)(lVar2 + 0x2c8) == 0)) {
        FUN_14133d686(lVar1,param_1,CONCAT71((int7)(uVar5 >> 8),1));
        uVar5 = (ulonglong)local_20;
        lVar3 = local_30;
        iVar4 = local_28;
      }
      uVar5 = (longlong)(int)uVar5;
      do {
        uVar6 = uVar5;
        uVar5 = uVar6 + 1;
        local_20 = (uint)uVar5;
        if ((longlong)iVar4 <= (longlong)uVar5) break;
      } while (*(longlong *)(lVar3 + uVar5 * 8) == 0);
    } while (-2 < (longlong)uVar6);
  }
  if (lVar3 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14133d686 FUN_14133d686 body=168 status=ok
// SIG undefined FUN_14133d686(void)

void FUN_14133d686(longlong param_1,longlong param_2,undefined4 param_3)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong *plVar6;
  
  uVar3 = 0xffffffff;
  if (0 < (longlong)*(int *)(param_1 + 0x200)) {
    uVar4 = 0;
    do {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x1f8) + uVar4 * 8);
      if (lVar2 != 0) {
        if ((*(int *)(lVar2 + 0x30) == 0) || (uVar1 = *(uint *)(lVar2 + 0x2c), (int)uVar1 < 0)) {
LAB_14133d71a:
          lVar5 = 0;
        }
        else {
          lVar5 = 0;
          if ((int)uVar1 < DAT_14c9647dc) {
            plVar6 = (longlong *)
                     ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
            if (((plVar6 == (longlong *)0x0) || ((int)plVar6[2] != *(int *)(lVar2 + 0x30))) ||
               ((*(uint *)(plVar6 + 1) & 0x10200000) != 0)) goto LAB_14133d71a;
            lVar5 = *plVar6;
          }
        }
        if (lVar5 == param_2) {
          uVar3 = uVar4 & 0xffffffff;
          break;
        }
      }
      uVar4 = uVar4 + 1;
    } while ((longlong)*(int *)(param_1 + 0x200) != uVar4);
  }
  FUN_140a2e5f8(param_1,uVar3,param_2,param_3);
  return;
}



// FUNCTION 14133d72e FUN_14133d72e body=351 status=ok
// SIG undefined FUN_14133d72e(void)

longlong * FUN_14133d72e(longlong *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  longlong lVar2;
  undefined1 auStack_b8 [32];
  uint local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_80;
  wchar_t *local_78;
  code *local_70;
  undefined1 *local_68;
  code **local_60;
  code *local_58;
  code *local_50;
  longlong *local_48;
  code *local_40;
  longlong **local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  uVar1 = FUN_14482ca40();
  if (DAT_14cb10130 == 0) {
    local_60 = &local_40;
    local_40 = FUN_140754f84;
    local_50 = FUN_14081d0ea;
    local_58 = FUN_14081d0ea;
    local_68 = &LAB_147da9a76;
    local_70 = FUN_1409f3105;
    local_78 = L"Engine";
    local_80 = 0;
    local_88 = 0x10000000;
    local_90 = 8;
    local_98 = 0x990;
    FUN_14081cfa3(L"/Script/Engine",L"World",&DAT_14cb10130,FUN_14640e230);
  }
  local_38 = &local_48;
  local_40 = FUN_142840874;
  local_98 = uVar1 | param_4 | 0x90000000;
  local_48 = param_1;
  FUN_140245161(DAT_14cb10130,&local_40,param_3,param_2);
  lVar2 = (longlong)(int)param_1[2];
  do {
    lVar2 = lVar2 + 1;
    *(int *)(param_1 + 2) = (int)lVar2;
    if ((int)param_1[1] <= lVar2) break;
  } while (*(longlong *)(*param_1 + lVar2 * 8) == 0);
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14133d88e FUN_14133d88e body=1567 status=ok
// SIG undefined FUN_14133d88e(void)

void FUN_14133d88e(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  byte bVar5;
  ulonglong uVar6;
  int iVar7;
  DWORD DVar8;
  DWORD DVar9;
  undefined4 *puVar10;
  uint *puVar11;
  undefined8 uVar12;
  uint uVar13;
  undefined ***pppuVar14;
  uint *puVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  undefined1 auStack_d8 [32];
  code **local_b8;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98 [2];
  longlong local_88 [3];
  undefined1 local_6c [4];
  code *local_68;
  undefined8 *local_60;
  undefined ***local_58;
  undefined **local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c8442bc) && (FUN_144b3d300(&DAT_14c8442bc), DAT_14c8442bc == -1)) {
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    DAT_14c8442b8 = FUN_14054d46e(&DAT_14c846b20,L"nullrhi");
    _Init_thread_footer(&DAT_14c8442bc);
  }
  bVar5 = DAT_14c8442b8;
  if (DAT_14c872bf0 == '\x01') {
    if (DAT_14c872bf1 != '\x01') goto LAB_14133da51;
    bVar5 = DAT_14c8442b8 & 1;
  }
  if (bVar5 != 0) goto LAB_14133da51;
  local_88[0] = 0;
  local_88[1] = 0;
  FUN_1417e22d8(param_1,local_88);
  local_68 = *(code **)(param_1 + 0x18);
  local_b8 = (code **)CONCAT71(local_b8._1_7_,1);
  FUN_140401b24(*(undefined8 *)(param_1 + 0x60),param_1 + 0x28,local_88,&local_68);
  local_a8 = *(undefined4 *)(param_1 + 0x28);
  uStack_a4 = *(undefined4 *)(param_1 + 0x2c);
  uStack_a0 = *(undefined4 *)(param_1 + 0x30);
  uStack_9c = *(undefined4 *)(param_1 + 0x34);
  local_98[0] = *(undefined8 *)(param_1 + 0x60);
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar7 = *(int *)(lVar4 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar7 != 2) {
      if (iVar7 != 1) goto LAB_14133d97a;
      DVar8 = FUN_140ad26c0();
      DVar9 = GetCurrentThreadId();
      if (DVar8 == DVar9) goto LAB_14133dd92;
      goto LAB_14133d983;
    }
LAB_14133dd92:
    FUN_14490df4a();
    local_68 = (code *)&local_a8;
    local_60 = local_98;
    FUN_145b0246e(local_6c);
  }
  else {
LAB_14133d97a:
    if (iVar7 == 0x10) goto LAB_14133dd92;
LAB_14133d983:
    if (DAT_14ca9a438 == '\0') {
      if ((DAT_14c86a9f8 != '\x01') || (iVar7 = *(int *)(lVar4 + 0xc60), iVar7 == 2))
      goto LAB_14133dd92;
      if (iVar7 == 1) {
        DVar8 = FUN_140ad26c0();
        DVar9 = GetCurrentThreadId();
        if (DVar8 == DVar9) goto LAB_14133dd92;
      }
    }
    if (DAT_14ca9a43c == 0) {
      puVar2 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x308);
      puVar11 = (uint *)*puVar2;
      if (puVar11 != (uint *)0x0) goto LAB_14133db18;
      while( true ) {
        uVar13 = *(uint *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0x318);
        if ((uVar13 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar13 | 1;
          __tlregdtor(&LAB_143590326);
        }
        lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar10 = *(undefined4 **)(lVar4 + 0x310);
        *(undefined8 *)(lVar4 + 0x310) = 0;
        if (puVar10 == (undefined4 *)0x0) {
          puVar10 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar10 = 0xffffffff;
        *(undefined4 **)(puVar10 + 0x10) = puVar10 + 0x16;
        puVar10[0x12] = 0;
        *puVar2 = puVar10;
        FUN_140217a48(puVar2);
        puVar11 = (uint *)*puVar2;
LAB_14133db18:
        puVar17 = (undefined8 *)(*(longlong *)(puVar11 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar15 = (uint *)(puVar17 + 0x18);
        uVar13 = puVar11[0x12];
        if (puVar15 <= puVar11 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar11 + 0x10) = puVar11 + 0x4000;
          LOCK();
          uVar3 = *puVar11;
          *puVar11 = *puVar11 + uVar13 + 1;
          UNLOCK();
          if ((uVar3 ^ uVar13) != 0xffffffff) break;
          puVar11 = (uint *)*puVar2;
          *puVar11 = 0xffffffff;
          *(uint **)(puVar11 + 0x10) = puVar11 + 0x16;
          puVar11[0x12] = 0;
          *puVar2 = puVar11;
          puVar17 = (undefined8 *)((longlong)puVar11 + 0x5fU & 0xfffffffffffffff8);
          puVar15 = (uint *)(puVar17 + 0x18);
          uVar13 = 0;
          if (puVar15 <= puVar11 + 0x4000) {
            uVar13 = 1;
            goto LAB_14133db98;
          }
        }
      }
      uVar13 = uVar13 + 1;
LAB_14133db98:
      *(uint **)(puVar11 + 0x10) = puVar15;
      puVar11[0x12] = uVar13;
      iVar7 = 0;
      FUN_1447247dc(puVar17,0);
      *puVar17 = &PTR_FUN_14a9e48f0;
      *(undefined4 *)(puVar17 + 0x15) = local_a8;
      *(undefined4 *)((longlong)puVar17 + 0xac) = uStack_a4;
      *(undefined4 *)(puVar17 + 0x16) = uStack_a0;
      *(undefined4 *)((longlong)puVar17 + 0xb4) = uStack_9c;
      puVar17[0x17] = local_98[0];
      if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
        uVar13 = DAT_14c7585c8 >> 10 & 3;
        if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar13 < 2) {
          uVar16 = (ulonglong)(byte)(&DAT_149e38edc)[uVar13];
          iVar7 = 0;
        }
        else {
          uVar16 = 2;
        }
      }
      else {
        iVar7 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
        uVar16 = 5;
      }
      if (*(code **)(puVar17[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar17[0xe] + 0x18))(puVar17 + 0xe,puVar17 + 9);
      }
      puVar17[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      puVar17[9] = puVar17;
      puVar17[10] = puVar17;
      lVar4 = *(longlong *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x2b8);
      if (lVar4 == 0) {
        uVar6 = 1;
        if ((char)uVar16 != '\x06') {
          uVar6 = uVar16;
        }
        uVar16 = uVar6;
        uVar12 = 0;
      }
      else {
        if ((char)uVar16 == '\x06') {
          uVar16 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
        }
        uVar12 = *(undefined8 *)(lVar4 + 0x30);
      }
      puVar17[0xf] = uVar12;
      puVar17[0x10] = uVar16 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)puVar17 + 0x1c) = iVar7;
      if (puVar17 == (undefined8 *)0x0) {
        local_68 = (code *)CONCAT71(local_68._1_7_,1);
        FUN_1447439e4(0);
      }
      else {
        LOCK();
        *(int *)(puVar17 + 1) = *(int *)(puVar17 + 1) + 1;
        UNLOCK();
        local_68 = (code *)CONCAT71(local_68._1_7_,1);
        FUN_1447439e4(puVar17);
        LOCK();
        piVar1 = (int *)(puVar17 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar17)(puVar17,1);
        }
      }
    }
    else {
      local_58 = (undefined ***)0x0;
      local_48 = &PTR_LAB_14a9e4890;
      local_40 = local_a8;
      uStack_3c = uStack_a4;
      uStack_38 = uStack_a0;
      uStack_34 = uStack_9c;
      local_30 = local_98[0];
      local_68 = FUN_1435911f8;
      local_b8 = &local_68;
      FUN_14005a792(&DAT_14ca9a440,L"UpdateDefaultResourceCommand",&DAT_14caf1edc);
      if (local_68 != (code *)0x0) {
        pppuVar14 = local_58;
        if (local_58 == (undefined ***)0x0) {
          pppuVar14 = &local_48;
        }
        (*(code *)(*pppuVar14)[2])();
      }
    }
  }
  if (local_88[0] != 0) {
    FUN_1400020a8();
  }
LAB_14133da51:
  if ((local_28 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14133deae FUN_14133deae body=286 status=ok
// SIG undefined FUN_14133deae(void)

undefined8 FUN_14133deae(longlong param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_14133dfc6;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_14133dfc6;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_14133dfc6:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_14133df73;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5 + (longlong)*(int *)(param_1 + 0x28),param_2);
      uVar6 = 1;
      goto LAB_14133df73;
    }
  }
  uVar6 = 0;
LAB_14133df73:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14133dfe0 FUN_14133dfe0 body=1292 status=ok
// SIG undefined FUN_14133dfe0(void)

void FUN_14133dfe0(longlong *param_1,longlong *param_2)

{
  ulonglong uVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  int iVar13;
  undefined4 uVar14;
  int iVar15;
  longlong lVar16;
  longlong lVar17;
  byte bVar18;
  ulonglong uVar19;
  uint uVar20;
  longlong *plVar21;
  undefined1 auStack_88 [40];
  longlong local_60;
  longlong local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar11 = *(uint *)(param_1 + 1);
  uVar2 = uVar11 - *(int *)((longlong)param_1 + 0x34);
  uVar10 = ((int)param_2[1] - *(int *)((longlong)param_2 + 0x34)) + uVar2;
  if (uVar2 < uVar10) {
    if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar10);
    }
    uVar2 = uVar10 - uVar11;
    if (uVar2 != 0 && (int)uVar11 <= (int)uVar10) {
      iVar15 = *(int *)((longlong)param_1 + 0xc);
      uVar20 = uVar11;
      if (iVar15 < (int)uVar10) {
        FUN_1403af08a(param_1);
        uVar20 = *(uint *)(param_1 + 1);
        iVar15 = *(int *)((longlong)param_1 + 0xc);
      }
      *(uint *)(param_1 + 1) = uVar20 + uVar2;
      if (iVar15 - uVar20 < uVar2) {
        FUN_14021b4e8(param_1);
      }
      if ((int)uVar20 < (int)uVar10) {
        lVar16 = *param_1;
        uVar12 = (ulonglong)uVar10;
        iVar15 = *(int *)((longlong)param_1 + 0x34);
        puVar9 = (undefined4 *)(lVar16 + uVar12 * 0x48 + -0x44);
        do {
          iVar3 = (int)uVar12;
          if (iVar15 != 0) {
            *(int *)(lVar16 + (longlong)(int)param_1[6] * 0x48) = iVar3 + -1;
          }
          puVar9[-1] = 0xffffffff;
          if (*(int *)((longlong)param_1 + 0x34) < 1) {
            uVar14 = 0xffffffff;
          }
          else {
            uVar14 = (undefined4)param_1[6];
          }
          uVar12 = uVar12 - 1;
          *puVar9 = uVar14;
          *(int *)(param_1 + 6) = iVar3 + -1;
          iVar15 = *(int *)((longlong)param_1 + 0x34) + 1;
          *(int *)((longlong)param_1 + 0x34) = iVar15;
          puVar9 = puVar9 + -0x12;
        } while ((longlong)(int)uVar20 < (longlong)uVar12);
      }
      if (uVar11 == 0) {
        plVar21 = param_1 + 2;
        *(uint *)(param_1 + 5) = uVar2;
        uVar11 = uVar2 + 0x1f >> 5;
        if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU >> 5 < uVar11) {
          FUN_14499171c(plVar21,0,uVar11,4);
          *(uint *)((longlong)param_1 + 0x2c) = uVar2 + 0x1f & 0xffffffe0;
        }
        plVar6 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar6 = plVar21;
        }
        if (uVar2 < 0x101) {
          uVar11 = uVar11 + (uVar11 == 0);
        }
        memset(plVar6,0,(ulonglong)(uVar11 << 2));
        iVar15 = (int)param_1[5];
        iVar3 = iVar15 + 0x1f;
        if (-1 < iVar15) {
          iVar3 = iVar15;
        }
        if (iVar15 % 0x20 != 0) {
          if ((longlong *)param_1[4] != (longlong *)0x0) {
            plVar21 = (longlong *)param_1[4];
          }
          bVar18 = -(char)(iVar15 % 0x20);
          *(uint *)((longlong)plVar21 + (longlong)(iVar3 >> 5) * 4) =
               (uint)(*(int *)((longlong)plVar21 + (longlong)(iVar3 >> 5) * 4) << (bVar18 & 0x1f))
               >> (bVar18 & 0x1f);
        }
      }
      else if (-1 < (int)uVar2) {
        plVar21 = param_1 + 2;
        iVar15 = (int)param_1[5];
        if (uVar10 != uVar11) {
          if (iVar15 == 0) {
            iVar3 = -1;
          }
          else {
            iVar3 = iVar15 + 0x1e;
            if (-1 < iVar15 + -1) {
              iVar3 = iVar15 + -1;
            }
            iVar3 = iVar3 >> 5;
          }
          iVar13 = iVar15 + uVar2;
          iVar5 = iVar15 + uVar2 + -1;
          iVar7 = iVar15 + uVar2 + 0x1e;
          if (-1 < iVar5) {
            iVar7 = iVar5;
          }
          if (iVar7 >> 5 == iVar3) {
            *(int *)(param_1 + 5) = iVar13;
          }
          else {
            if (*(int *)((longlong)param_1 + 0x2c) < iVar13) {
              if (iVar13 + 0x1fU < 0xa0) {
                iVar13 = 0x80;
                iVar3 = iVar15;
              }
              else {
                uVar11 = iVar13 + 0x1fU >> 5;
                if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
                  uVar20 = 4;
                  if (4 < uVar11) {
                    uVar20 = uVar11;
                  }
                }
                else {
                  uVar20 = (uVar11 * 3 >> 3) + uVar11 + 0x10;
                }
                uVar12 = FUN_144a3809e(uVar20 << 2,0);
                iVar3 = (int)(uVar12 >> 2);
                iVar13 = -0x20;
                if ((int)uVar11 <= iVar3) {
                  iVar13 = iVar3 << 5;
                }
                iVar3 = (int)param_1[5];
              }
              *(int *)((longlong)param_1 + 0x2c) = iVar13;
              FUN_1446efbd8(plVar21,iVar3);
              iVar13 = (int)param_1[5] + uVar2;
            }
            iVar3 = iVar13 + 0x1f;
            if (-1 < iVar13) {
              iVar3 = iVar13;
            }
            *(int *)(param_1 + 5) = iVar13;
            if (iVar13 % 0x20 != 0) {
              plVar6 = (longlong *)param_1[4];
              if ((longlong *)param_1[4] == (longlong *)0x0) {
                plVar6 = plVar21;
              }
              bVar18 = -(char)(iVar13 % 0x20);
              *(uint *)((longlong)plVar6 + (longlong)(iVar3 >> 5) * 4) =
                   (uint)(*(int *)((longlong)plVar6 + (longlong)(iVar3 >> 5) * 4) << (bVar18 & 0x1f)
                         ) >> (bVar18 & 0x1f);
            }
          }
        }
        FUN_1447c6044(plVar21,iVar15,uVar2,0);
      }
    }
    if (uVar10 < 4) {
      iVar15 = 1;
    }
    else {
      uVar11 = (uVar10 | 1) + 0xe;
      iVar15 = 0x1f;
      if (uVar11 != 0) {
        for (; uVar11 >> iVar15 == 0; iVar15 = iVar15 + -1) {
        }
      }
      iVar15 = 1 << ((byte)iVar15 & 0x1f);
    }
    if (((int)param_1[9] == 0) || ((int)param_1[9] < iVar15)) {
      *(int *)(param_1 + 9) = iVar15;
      FUN_1405eb90a(param_1);
    }
  }
  iVar15 = (int)param_2[5];
  if (iVar15 == 0) {
    uVar12 = 1;
    uVar19 = 0;
    iVar3 = 0;
    iVar13 = 0;
  }
  else {
    puVar4 = (uint *)param_2[4];
    if ((uint *)param_2[4] == (uint *)0x0) {
      puVar4 = (uint *)(param_2 + 2);
    }
    uVar11 = *puVar4;
    if (uVar11 == 0) {
      iVar3 = iVar15 + 0x1e;
      if (-1 < iVar15 + -1) {
        iVar3 = iVar15 + -1;
      }
      uVar19 = 0;
      uVar12 = (ulonglong)(uint)(iVar3 >> 5);
      if (iVar3 >> 5 < 1) {
        uVar12 = uVar19;
      }
      iVar13 = 0;
      do {
        if (uVar12 == uVar19) goto LAB_14133e2c2;
        iVar13 = iVar13 + 0x20;
        uVar11 = puVar4[uVar19 + 1];
        uVar19 = uVar19 + 1;
      } while (uVar11 == 0);
    }
    else {
      uVar19 = 0;
      iVar13 = 0;
    }
    uVar12 = (ulonglong)(-uVar11 & uVar11);
    uVar1 = uVar12 * 2 + 1;
    lVar16 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    iVar3 = (iVar13 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
    if (iVar15 <= iVar3) {
      iVar3 = iVar15;
    }
  }
  if (iVar3 != iVar15) {
    uVar11 = 0xffffffff;
    do {
      local_60 = *param_2 + (longlong)iVar3 * 0x48;
      local_58 = *param_2 + (longlong)iVar3 * 0x48 + 8;
      FUN_1405eafac(param_1,local_4c,&local_60,0);
      uVar11 = ~(uint)uVar12 & uVar11;
      puVar4 = (uint *)param_2[4];
      if ((uint *)param_2[4] == (uint *)0x0) {
        puVar4 = (uint *)(param_2 + 2);
      }
      iVar7 = (int)param_2[5];
      iVar3 = (int)uVar19;
      lVar16 = (longlong)iVar3;
      uVar2 = puVar4[lVar16] & uVar11;
      if (uVar2 == 0) {
        iVar5 = iVar7 + 0x1e;
        if (-1 < iVar7 + -1) {
          iVar5 = iVar7 + -1;
        }
        iVar5 = iVar5 >> 5;
        iVar13 = iVar13 + 0x20;
        iVar8 = iVar5;
        if (iVar5 < iVar3) {
          iVar8 = iVar3;
        }
        if (iVar3 < iVar5) {
          lVar17 = 0;
          do {
            uVar2 = puVar4[lVar16 + lVar17 + 1];
            if (uVar2 != 0) {
              uVar19 = (ulonglong)(iVar3 + (int)lVar17 + 1);
              uVar11 = 0xffffffff;
              goto LAB_14133e28b;
            }
            iVar13 = iVar13 + 0x20;
            lVar17 = lVar17 + 1;
          } while (iVar8 - lVar16 != lVar17);
          uVar11 = 0xffffffff;
          iVar3 = iVar8;
        }
        uVar19 = (ulonglong)(iVar3 + 1);
        iVar3 = iVar7;
      }
      else {
LAB_14133e28b:
        uVar12 = (ulonglong)(-uVar2 & uVar2);
        uVar1 = uVar12 * 2 + 1;
        lVar16 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar16 == 0; lVar16 = lVar16 + -1) {
          }
        }
        iVar3 = (iVar13 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
        if (iVar7 <= iVar3) {
          iVar3 = iVar7;
        }
      }
    } while (iVar3 != iVar15);
  }
LAB_14133e2c2:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14133e4ee FUN_14133e4ee body=155 status=ok
// SIG undefined FUN_14133e4ee(void)

void FUN_14133e4ee(void)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  
  if (DAT_14c9647d0 == 0) {
    lVar2 = DAT_14c9647c8;
    if (0 < DAT_14c9647e0) {
      lVar4 = 0;
      iVar3 = DAT_14c9647e0;
      do {
        lVar1 = *(longlong *)(lVar2 + lVar4 * 8);
        if (lVar1 != 0) {
          thunk_FUN_1400020a8(lVar1 + -8,*(longlong *)(lVar1 + -8) * 0x18 + 8);
          lVar2 = DAT_14c9647c8;
          iVar3 = DAT_14c9647e0;
        }
        lVar4 = lVar4 + 1;
      } while (lVar4 < iVar3);
    }
  }
  else {
    thunk_FUN_1400020a8(DAT_14c9647d0 + -8,*(longlong *)(DAT_14c9647d0 + -8) * 0x18 + 8);
    lVar2 = DAT_14c9647c8;
  }
  if (lVar2 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14133e589 thunk_FUN_1400020a8 body=5 status=ok
// SIG undefined thunk_FUN_1400020a8(void)

void thunk_FUN_1400020a8(longlong param_1)

{
  if (param_1 != 0) {
    if (DAT_14c872d28 == (longlong *)0x0) {
      FUN_1460d69fa();
    }
                    /* WARNING: Could not recover jumptable at 0x0001400020d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_14c872d28 + 0x48))(DAT_14c872d28,param_1);
    return;
  }
  return;
}



// FUNCTION 14133e58e FUN_14133e58e body=192 status=ok
// SIG undefined FUN_14133e58e(void)

longlong * FUN_14133e58e(longlong param_1,longlong *param_2,uint param_3)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  
  uVar4 = *(uint *)(param_1 + 0x68);
  if ((int)param_3 < (int)*(uint *)(param_1 + 0x68)) {
    uVar4 = param_3;
  }
  *param_2 = 0;
  param_2[1] = 0;
  if (-1 < (int)uVar4) {
    if (uVar4 != 0) {
      FUN_145901ea4(param_2,uVar4);
      uVar5 = 0;
      do {
        lVar1 = *(longlong *)(param_1 + 0x60);
        iVar2 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
          FUN_1456fe4d2(param_2,iVar2);
        }
        *(undefined8 *)(*param_2 + (longlong)iVar2 * 8) = *(undefined8 *)(lVar1 + uVar5 * 8);
        uVar5 = uVar5 + 1;
      } while (uVar4 != uVar5);
      iVar2 = *(int *)(param_1 + 0x68) - uVar4;
      uVar3 = uVar4;
      if (iVar2 != 0) {
        memmove(*(void **)(param_1 + 0x60),
                (void *)((longlong)*(void **)(param_1 + 0x60) + (ulonglong)uVar4 * 8),
                (longlong)iVar2 << 3);
        uVar3 = *(uint *)(param_1 + 0x68);
      }
      *(uint *)(param_1 + 0x68) = uVar3 - uVar4;
      FUN_145901e10((longlong *)(param_1 + 0x60));
    }
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar4);
}



// FUNCTION 14133e650 FUN_14133e650 body=38 status=ok
// SIG undefined FUN_14133e650(void)

void FUN_14133e650(longlong *param_1,undefined1 param_2)

{
  if ((((char)param_1[0x2f] != '\x03') && ((*(byte *)(param_1 + 0xc) & 1) == 0)) &&
     ((*(byte *)((longlong)param_1 + 0x61) & 1) == 0)) {
    return;
  }
  *(undefined1 *)((longlong)param_1 + 0x1152) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00014133e66f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x6c0))();
  return;
}



// FUNCTION 14133e676 FUN_14133e676 body=332 status=ok
// SIG undefined FUN_14133e676(void)

void FUN_14133e676(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong *local_48;
  longlong local_40;
  longlong *local_38;
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(char *)(param_1 + 0x3c8) == '\x01') {
    FUN_14026e798(&local_30,*(undefined8 *)(param_1 + 0xa8));
    if (local_30 != 0) {
      FUN_14026e798(&local_40,*(undefined8 *)(param_1 + 0x2c8));
      plVar2 = local_38;
      if (local_40 != 0) {
        local_50 = local_40;
        local_48 = local_38;
        if (local_38 == (longlong *)0x0) {
          FUN_140e688ec(local_30,param_1 + 0x3c0,&local_50);
        }
        else {
          LOCK();
          *(int *)(local_38 + 1) = (int)local_38[1] + 1;
          UNLOCK();
          FUN_140e688ec(local_30,param_1 + 0x3c0);
          if (plVar2 != (longlong *)0x0) {
            LOCK();
            plVar1 = plVar2 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*plVar2)(plVar2);
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
      }
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
    if (local_28 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_28 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_28)(local_28);
        LOCK();
        piVar3 = (int *)((longlong)local_28 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*local_28 + 0x10))(local_28);
        }
      }
    }
  }
  FUN_14133e7c4(param_1,param_2);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14133e7c4 FUN_14133e7c4 body=425 status=ok
// SIG undefined FUN_14133e7c4(void)

void FUN_14133e7c4(longlong *param_1,char param_2)

{
  code *pcVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined1 auStack_98 [32];
  undefined1 local_78 [40];
  undefined4 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  ushort local_30;
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar2 = param_1[0x59];
  if ((lVar2 == 0) || ((*(uint *)(lVar2 + 8) >> 0x1e & 1) != 0)) goto LAB_14133e85e;
  if ((param_1[0x15] == 0) || (*(char *)(param_1[0x15] + 0x178) != '\x03')) {
    lVar2 = (**(code **)(*param_1 + 0x5d8))(param_1);
    if (lVar2 != 0) goto LAB_14133e85e;
    lVar2 = param_1[0x59];
    param_1[0x73] = 0;
    param_1[0x74] = 0;
    if (lVar2 != 0) goto LAB_14133e81e;
  }
  else {
    param_1[0x73] = 0;
    param_1[0x74] = 0;
LAB_14133e81e:
    *(undefined8 *)(lVar2 + 0x1e8) = 0;
  }
  param_1[0x59] = 0;
  if (param_2 != '\0') {
    local_30 = 4;
    local_48 = 1;
    local_28 = 1;
    local_78[0] = 0;
    local_50 = 0;
    FUN_1456bb102(local_78,param_1[0x15]);
    if (*(code **)(&DAT_14c9a8610 + (uint)*(byte *)(param_1 + 0x70) * 0x120) != (code *)0x0) {
      (**(code **)(&DAT_14c9a8610 + (uint)*(byte *)(param_1 + 0x70) * 0x120))
                (param_1 + 0x6c,local_78,&local_48);
    }
    FUN_144a5ac3a(local_78);
    pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_28 * 0x120));
    if (pcVar1 != (code *)0x0) {
      if (local_30 < 0x19) {
        puVar3 = &local_48;
      }
      else {
        puVar3 = (undefined4 *)CONCAT44(uStack_44,local_48);
      }
      (*pcVar1)(puVar3);
    }
    if (0x18 < local_30) {
      FUN_1400020a8(CONCAT44(uStack_44,local_48));
    }
  }
  *(undefined1 *)(param_1 + 0x5c) = 3;
  lVar2 = param_1[0x5d];
  if (lVar2 != 0) {
    *(undefined1 *)(lVar2 + 0x2c0) = *(undefined1 *)(*(longlong *)(lVar2 + 0x2a8) + 0x2e0);
  }
LAB_14133e85e:
  if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14133e96e FUN_14133e96e body=965 status=ok
// SIG undefined FUN_14133e96e(void)

longlong * FUN_14133e96e(longlong param_1,longlong *param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  int iVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 auStack_108 [32];
  longlong local_e8;
  longlong local_e0;
  undefined8 local_d8;
  longlong local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined2 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  longlong lStack_98;
  longlong *local_88;
  longlong local_78 [4];
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_e8 = *param_2;
  if (*(int *)(local_e8 + 0x1c) == 0) {
LAB_14133ec78:
    lVar11 = 0;
  }
  else {
    uVar3 = *(uint *)(local_e8 + 0x18);
    lVar11 = 0;
    if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) {
      plVar9 = (longlong *)
               ((ulonglong)((uVar3 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
      if ((plVar9 == (longlong *)0x0) ||
         (((int)plVar9[2] != *(int *)(local_e8 + 0x1c) ||
          ((*(uint *)(plVar9 + 1) & 0x10200000) != 0)))) goto LAB_14133ec78;
      lVar11 = *plVar9;
    }
  }
  local_e0 = param_2[1];
  if (local_e0 != 0) {
    LOCK();
    *(int *)(local_e0 + 8) = *(int *)(local_e0 + 8) + 1;
    UNLOCK();
  }
  plVar9 = (longlong *)FUN_140165676(&local_e8);
  plVar6 = (longlong *)0x0;
  if ((lVar11 == 0) || (lVar5 = *(longlong *)(param_1 + 0x88), lVar5 == 0)) goto LAB_14133ec1f;
  lVar4 = FUN_14133ed3a();
  if ((lVar4 == 0) ||
     ((*(int *)(lVar5 + 0x38) < *(int *)(lVar4 + 0x38) ||
      (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
       lVar4 + 0x30)))) {
    plVar6 = (longlong *)0x0;
    goto LAB_14133ec1f;
  }
  if ((plVar9 == (longlong *)0x0) || (lVar5 = (**(code **)(*plVar9 + 0x20))(plVar9), lVar5 == 0)) {
LAB_14133eca8:
    lVar5 = 0;
  }
  else {
    lVar4 = FUN_141076468();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < *(int *)(lVar4 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
        != lVar4 + 0x30)) goto LAB_14133eca8;
  }
  uVar7 = *(undefined8 *)(param_1 + 0x88);
  FUN_14058b40c(lVar11,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  local_88 = (longlong *)0x0;
  local_58 = 0;
  local_c8 = 0;
  local_b8 = 0;
  uStack_c0 = 0x40;
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 0;
  lStack_98 = 0;
  local_d8 = uVar7;
  local_d0 = lVar11;
  plVar6 = (longlong *)FUN_1402710dd(&local_d8);
  if (lStack_98 != 0) {
    plVar10 = local_88;
    if (local_88 == (longlong *)0x0) {
      plVar10 = local_78;
    }
    (**(code **)(*plVar10 + 0x10))();
  }
  *(undefined4 *)(plVar6 + 5) = param_3;
  iVar8 = DAT_14c9647dc;
  lVar11 = DAT_14c9647c8;
  iVar2 = *(int *)(*param_2 + 0x24);
  if (((((iVar2 == 0) || (uVar3 = *(uint *)(*param_2 + 0x20), (int)uVar3 < 0)) ||
       (DAT_14c9647dc <= (int)uVar3)) ||
      ((plVar10 = (longlong *)
                  ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
       plVar10 == (longlong *)0x0 || ((int)plVar10[2] != iVar2)))) ||
     ((*(uint *)(plVar10 + 1) & 0x10200000) != 0)) {
LAB_14133ec6a:
    *(undefined4 *)((longlong)plVar6 + 0x2c) = 0;
    iVar2 = 0;
  }
  else {
    if (*plVar10 == 0) goto LAB_14133ec6a;
    uVar3 = *(uint *)(*plVar10 + 0xc);
    *(uint *)((longlong)plVar6 + 0x2c) = uVar3;
    if ((int)uVar3 < iVar8) {
      lVar11 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
               *(longlong *)(lVar11 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar11 = 0;
    }
    iVar2 = *(int *)(lVar11 + 0x10);
    if (*(int *)(lVar11 + 0x10) == 0) {
      LOCK();
      iVar2 = DAT_14c964868 + 1;
      UNLOCK();
      iVar8 = DAT_14c964868 + 1;
      bVar12 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar2;
      if (bVar12) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar8);
      }
      LOCK();
      iVar2 = *(int *)(lVar11 + 0x10);
      bVar12 = iVar2 == 0;
      if (bVar12) {
        *(int *)(lVar11 + 0x10) = iVar8;
        iVar2 = 0;
      }
      UNLOCK();
      if (bVar12) {
        iVar2 = iVar8;
      }
    }
  }
  *(int *)(plVar6 + 6) = iVar2;
  *(undefined2 *)((longlong)plVar6 + 0x34) = *(undefined2 *)(*param_2 + 0x30);
  *(undefined2 *)((longlong)plVar6 + 0x36) = *(undefined2 *)(*param_2 + 0x32);
  if ((lVar5 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar5);
  }
  plVar6[7] = lVar5;
  if (plVar9 == (longlong *)0x0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = (uint)*(ushort *)(plVar9 + 0x3c);
  }
  *(uint *)(plVar6 + 8) = uVar3;
  uVar7 = FUN_14477b072(plVar6,DAT_14cabcd30);
  (**(code **)(*plVar6 + 0x248))(plVar6,uVar7,0);
LAB_14133ec1f:
  plVar9 = (longlong *)param_2[1];
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar9 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
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
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar6;
}



// FUNCTION 14133ed3a FUN_14133ed3a body=221 status=ok
// SIG undefined FUN_14133ed3a(void)

longlong FUN_14133ed3a(void)

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
  if (DAT_14cabcd40 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_14782100a;
    local_40 = FUN_143377fc5;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x48;
    FUN_14081cfa3(L"/Script/LevelSequence",L"LevelSequenceDirector",&DAT_14cabcd40,FUN_146368112);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cabcd40;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14133ee18 FUN_14133ee18 body=498 status=ok
// SIG undefined FUN_14133ee18(void)

void FUN_14133ee18(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  int iVar13;
  undefined1 auStack_98 [40];
  longlong *local_70;
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_70 = param_1 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = local_70;
  if ((int)param_1[5] == 0) {
    uVar9 = 1;
    local_58._0_4_ = 0xffffffff;
    local_58._4_4_ = 0;
    local_68._0_4_ = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    uVar9 = local_68 >> 0x20;
  }
  plVar3 = local_60;
  iVar4 = (int)local_60[3];
  iVar13 = (int)local_68;
  uVar12 = (uint)local_58;
  iVar6 = local_58._4_4_;
  iVar10 = local_50;
  if (local_58._4_4_ < iVar4) {
    do {
      plVar7 = *(longlong **)(*param_1 + 8 + (longlong)iVar6 * 0x20);
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x10))();
        iVar4 = (int)plVar3[3];
      }
      uVar12 = uVar12 & ~(uint)uVar9;
      plVar7 = (longlong *)plVar3[2];
      if ((longlong *)plVar3[2] == (longlong *)0x0) {
        plVar7 = plVar3;
      }
      lVar11 = (longlong)iVar13;
      uVar5 = *(uint *)((longlong)plVar7 + lVar11 * 4) & uVar12;
      if (uVar5 == 0) {
        iVar6 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar6 = iVar4 + -1;
        }
        iVar6 = iVar6 >> 5;
        iVar2 = iVar6;
        if (iVar6 < iVar13) {
          iVar2 = iVar13;
        }
        if (iVar6 <= iVar13) break;
        lVar8 = 0;
        while( true ) {
          iVar10 = iVar10 + 0x20;
          uVar5 = *(uint *)((longlong)plVar7 + lVar8 * 4 + lVar11 * 4 + 4);
          if (uVar5 != 0) break;
          lVar8 = lVar8 + 1;
          if (iVar2 - lVar11 == lVar8) goto LAB_14133ef4e;
        }
        iVar13 = iVar13 + (int)lVar8 + 1;
        uVar12 = 0xffffffff;
      }
      uVar9 = (ulonglong)(-uVar5 & uVar5);
      uVar1 = uVar9 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar6 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    } while (iVar6 < iVar4);
  }
LAB_14133ef4e:
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_1446f4a44(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar12 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar12) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar5 = 0x80;
    if (0x80 < (int)uVar12) {
      uVar5 = uVar12;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar5;
    FUN_1446efbd8(local_70,0);
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14133f018 FUN_14133f018 body=1121 status=ok
// SIG undefined FUN_14133f018(void)

undefined8 * FUN_14133f018(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  uint local_a0;
  undefined4 local_98;
  undefined8 local_90;
  wchar_t *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  code **local_70;
  code *local_68;
  code *local_60;
  undefined8 local_50;
  code *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_140312256();
  *param_1 = &PTR_FUN_14b997270;
  param_1[0x72] = &PTR_FUN_14b9978b0;
  param_1[0x73] = &PTR_FUN_14b997950;
  param_1[0x74] = &PTR_FUN_14b997970;
  param_1[0x75] = &PTR_FUN_14b9979a0;
  param_1[0x76] = &PTR_FUN_14b9979d0;
  param_1[0x77] = &PTR_FUN_14b997a18;
  *(undefined4 *)(param_1 + 0x7a) = 0;
  *(undefined1 *)((longlong)param_1 + 0x3d4) = 0;
  param_1[0x81] = 0;
  param_1[0x82] = 0;
  param_1[0x78] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c7) = 0;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3f1) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3f9) = 0;
  *(undefined4 *)(param_1 + 0x83) = 2;
  *(undefined8 *)((longlong)param_1 + 0x41c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x424) = 0;
  *(undefined4 *)((longlong)param_1 + 0x42c) = 0;
  *(undefined4 *)(param_1 + 0x86) = 2;
  *(undefined8 *)((longlong)param_1 + 0x434) = 0;
  *(undefined8 *)((longlong)param_1 + 0x43c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x441) = 0;
  memset(param_1 + 0x8a,0,0x118);
  *(undefined4 *)(param_1 + 0xad) = 2;
  *(undefined8 *)((longlong)param_1 + 0x56c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x574) = 0;
  *(undefined4 *)((longlong)param_1 + 0x57c) = 0;
  param_1[0xb0] = 2;
  param_1[0xb1] = 0x44bb800043fa0000;
  param_1[0xb2] = 0;
  param_1[0xb3] = 0;
  param_1[0xb4] = 0;
  param_1[0xb5] = 0;
  param_1[0xb6] = 0;
  param_1[0xb7] = 0;
  param_1[0xb8] = 0;
  param_1[0xb9] = 0;
  FUN_1446f470e(&local_48,L"FGbxTerritoryAreaDataCache::AABBTree",1);
  param_1[0xbb] = 0;
  param_1[0xba] = &PTR_LAB_14a1e3c98;
  *(undefined4 *)(param_1 + 0xbc) = 0xffffffff;
  param_1[0xbd] = 0;
  param_1[0xbe] = 0;
  param_1[0xbf] = 0;
  param_1[0xc0] = 0;
  FUN_1446f470e(&local_48,L"FGbxTerritoryAreaDataCache::ExclusionAABBTree",1);
  param_1[0xc2] = 0;
  param_1[0xc1] = &PTR_LAB_14a1e3c98;
  *(undefined4 *)(param_1 + 0xc3) = 0xffffffff;
  param_1[0xc4] = 0;
  param_1[0xc5] = 0;
  param_1[0xc6] = 0;
  param_1[199] = 0;
  *(undefined1 *)(param_1 + 0xce) = 0;
  uVar3 = DAT_14c8464e8._4_4_;
  uVar2 = (undefined4)DAT_14c8464e8;
  uVar1 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(param_1 + 0xcf) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)param_1 + 0x67c) = uVar1;
  *(undefined4 *)(param_1 + 0xd0) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x684) = uVar3;
  param_1[0xd1] = DAT_14c8464f0;
  param_1[0xd2] = 0x7f7fffff00000000;
  *(undefined4 *)(param_1 + 0xd3) = 0;
  *(undefined2 *)(param_1 + 0xd4) = 0;
  param_1[0xd9] = 0;
  *(undefined4 *)(param_1 + 0xda) = 0;
  param_1[0xd5] = 0;
  param_1[0xd6] = 0;
  *(undefined8 *)((longlong)param_1 + 0x6d4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x6dc) = 0;
  param_1[0xdd] = 0;
  *(undefined4 *)(param_1 + 0xde) = 0;
  param_1[0xdf] = 0;
  param_1[0xe0] = &DAT_14a171d50;
  param_1[0xe2] = 0;
  param_1[0xe3] = 0;
  param_1[0xe4] = 0;
  param_1[0xe5] = 0;
  param_1[0xe6] = 0;
  param_1[0xe7] = 0;
  param_1[0xe8] = 0;
  param_1[0xe9] = 0;
  param_1[0xe1] = &DAT_14cb70058;
  *(undefined4 *)(param_1 + 0xea) = 0xc69c4000;
  FUN_1406516ce(param_1 + 0xeb);
  FUN_1406516ce(param_1 + 0x16a);
  param_1[0x16a] = &PTR_FUN_14b739090;
  *(undefined8 *)((longlong)param_1 + 0xf94) = 0;
  param_1[500] = 0;
  param_1[0x1f5] = 0;
  *(undefined4 *)(param_1 + 0x1f6) = 0;
  param_1[0x1fa] = 0;
  param_1[0x1fb] = 0;
  param_1[0x1fc] = 0;
  param_1[0x1e9] = 0;
  param_1[0x1ea] = 0;
  param_1[0x1eb] = 0;
  param_1[0x1ec] = 0;
  param_1[0x1ed] = 0;
  param_1[0x1ee] = 0;
  param_1[0x1ef] = 0;
  param_1[0x1f0] = 0;
  *(undefined8 *)((longlong)param_1 + 0xf82) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf8a) = 0;
  param_1[0x1f7] = 0;
  param_1[0x1f8] = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc5) = 0;
  FUN_1446f470e(&local_50,L"RootComponent",1);
  if (DAT_14cac7648 == 0) {
    local_48 = FUN_144a7958c;
    local_60 = FUN_14081d0ea;
    local_68 = FUN_143242436;
    local_78 = &LAB_14789ef1f;
    local_80 = &LAB_1417b008f;
    local_88 = L"Engine";
    local_90 = 0x8000000000;
    local_98 = 0x10000004;
    local_a0 = 0x10;
    local_a8 = 0x2b0;
    local_70 = &local_48;
    FUN_14081cfa3(L"/Script/Engine",L"SceneComponent",&DAT_14cac7648,FUN_146393848);
  }
  local_a0 = local_a0 & 0xffffff00;
  local_a8 = CONCAT31(local_a8._1_3_,1);
  lVar4 = FUN_14048696c(param_1,local_50,DAT_14cac7648,DAT_14cac7648);
  if ((lVar4 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar4);
  }
  param_1[0x39] = lVar4;
  *(undefined1 *)(lVar4 + 0x1fb) = 0;
  *(byte *)((longlong)param_1 + 99) = *(byte *)((longlong)param_1 + 99) & 0xfe;
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14133f47a FUN_14133f47a body=418 status=ok
// SIG undefined FUN_14133f47a(void)

void FUN_14133f47a(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  code *local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_28 = FUN_1446ddbd2();
      local_20 = FUN_1468d96f0;
      local_30 = 0;
      local_38 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_18);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_18);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_18 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_18);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14133f61e(local_18);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14133f61e FUN_14133f61e body=194 status=ok
// SIG undefined FUN_14133f61e(void)

void FUN_14133f61e(longlong *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (param_1 != (longlong *)0x0) {
    uVar2 = FUN_140a32494();
    plVar3 = (longlong *)(**(code **)(*param_1 + 0x288))(param_1,uVar2);
    if (plVar3 != (longlong *)0x0) {
      uVar2 = FUN_140a32494();
      plVar4 = (longlong *)FUN_144718840(plVar3,uVar2);
      if ((plVar3 != plVar4) && (plVar4 != (longlong *)0x0)) {
        lVar5 = (**(code **)(*plVar4 + 0x10))(plVar4);
        if ((lVar5 != 0) &&
           (((*(int *)(lVar5 + 0x3c) != 0 && (uVar1 = *(uint *)(lVar5 + 0x38), -1 < (int)uVar1)) &&
            ((int)uVar1 < DAT_14c9647dc)))) {
          plVar3 = (longlong *)
                   ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
          if ((((plVar3 != (longlong *)0x0) && ((int)plVar3[2] == *(int *)(lVar5 + 0x3c))) &&
              ((*(uint *)(plVar3 + 1) & 0x10200000) == 0)) &&
             ((*plVar3 != 0 && (*(char *)(*plVar3 + 0x178) == '\x03')))) {
            FUN_1459031a6(lVar5);
            return;
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 14133f6e0 FUN_14133f6e0 body=141 status=ok
// SIG undefined FUN_14133f6e0(void)

void FUN_14133f6e0(longlong *param_1,undefined8 *param_2,undefined8 *param_3,undefined1 param_4,
                  undefined1 param_5)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 auStack_f8 [32];
  undefined1 local_d8;
  undefined1 local_d0;
  undefined8 local_c0 [12];
  undefined8 local_60 [9];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  puVar2 = local_60;
  for (lVar1 = 9; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = *param_3;
    param_3 = param_3 + 1;
    puVar2 = puVar2 + 1;
  }
  puVar2 = local_c0;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = *param_2;
    param_2 = param_2 + 1;
    puVar2 = puVar2 + 1;
  }
  local_d0 = param_5;
  local_d8 = param_4;
  (**(code **)(*param_1 + 0x630))(param_1,0,local_c0,local_60);
  if ((local_18 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14133f76e FUN_14133f76e body=584 status=ok
// SIG undefined FUN_14133f76e(void)

void FUN_14133f76e(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  undefined1 param_5,char param_6)

{
  longlong lVar1;
  undefined8 *puVar2;
  float *pfVar3;
  undefined8 unaff_RBX;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 auStack_178 [32];
  undefined8 local_158;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  uint local_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  float local_e0 [2];
  undefined1 local_d8 [4];
  undefined8 local_d4;
  undefined2 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_a4;
  undefined4 local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 local_70 [24];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  float local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_178;
  local_78 = param_2;
  if ((*(char *)(param_1[0x15] + 0x178) == '\x03') || ((*(byte *)(param_1[0x7c] + 0x590) & 1) == 0))
  {
    if ((param_6 != '\0') && (param_1[0x59] == 0)) {
      (**(code **)(*param_1 + 0x5e8))(param_1);
    }
    if ((param_1[0x59] != 0) && (*(longlong *)(param_1[0x59] + 0x1c8) != 0)) {
      FUN_140ee5bf8(param_1,0);
      local_d8[0] = 0;
      local_d4 = 0;
      local_c8 = 0;
      local_c0 = DAT_14c8464f8;
      uStack_b8 = DAT_14c846500;
      local_b0 = DAT_14c846508;
      local_a8 = 0;
      local_a4 = 0;
      local_98 = 0;
      local_90 = (undefined4)DAT_14c8464e0;
      uStack_8c = DAT_14c8464e0._4_4_;
      uStack_88 = (undefined4)DAT_14c8464e8;
      uStack_84 = DAT_14c8464e8._4_4_;
      local_80 = DAT_14c8464f0;
      lVar1 = param_1[0x15];
      FUN_14030a482(local_d8,local_70,lVar1,0);
      local_158 = param_3;
      FUN_14133f9d4(&local_128,lVar1,local_70,&local_78);
      lVar1 = *(longlong *)(param_1[0x59] + 0x1c8);
      if (lVar1 == 0) {
        puVar2 = &DAT_14c8464e0;
        uVar5 = (undefined4)DAT_14c8464f0;
        uVar6 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
      }
      else {
        uVar5 = (undefined4)*(undefined8 *)(lVar1 + 0x270);
        uVar6 = (undefined4)((ulonglong)*(undefined8 *)(lVar1 + 0x270) >> 0x20);
        puVar2 = (undefined8 *)(lVar1 + 0x260);
      }
      local_128 = *(undefined4 *)puVar2;
      uStack_124 = *(undefined4 *)((longlong)puVar2 + 4);
      uStack_120 = *(undefined4 *)(puVar2 + 1);
      uStack_11c = *(undefined4 *)((longlong)puVar2 + 0xc);
      local_118 = CONCAT44(uVar6,uVar5);
      FUN_14125d732(param_4,local_70);
      local_138 = local_48;
      local_148 = local_58;
      uStack_140 = uStack_50;
      pfVar3 = local_e0;
      if (*(char *)(param_4 + 0x14) != '\0') {
        pfVar3 = (float *)(param_4 + 0x10);
      }
      uVar4 = -(uint)(*pfVar3 != 0.0);
      local_130 = ~uVar4 & 0x3f800000 | (uint)(local_40 / *pfVar3) & uVar4;
      (**(code **)(*param_1 + 0x648))
                (param_1,&local_148,local_130,
                 CONCAT71((int7)((ulonglong)unaff_RBX >> 8),param_5) & 0xffffffff);
    }
  }
  else if ((*(byte *)(param_1[0x7c] + 0x590) & 8) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_178);
  }
  if ((local_38 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14133f9d4 FUN_14133f9d4 body=1523 status=ok
// SIG undefined FUN_14133f9d4(void)

undefined8 *
FUN_14133f9d4(undefined8 *param_1,longlong *param_2,undefined8 *param_3,longlong *param_4,
             undefined8 param_5)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined4 uVar9;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  wchar_t *local_68;
  code *local_60;
  undefined1 *local_58;
  code **local_50;
  undefined1 *local_48;
  code *local_40;
  code *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  lVar5 = FUN_1447210f0(param_2);
  if (lVar5 == 0) goto LAB_14133fae4;
  param_1[2] = param_3[2];
  uVar3 = param_3[1];
  *param_1 = *param_3;
  param_1[1] = uVar3;
  uVar9 = 0;
  if ((*(longlong *)(lVar5 + 0x30) != 0) &&
     (plVar7 = *(longlong **)(*(longlong *)(lVar5 + 0x30) + 0x2b0), plVar7 != (longlong *)0x0)) {
    if (*(code **)(*plVar7 + 0x660) == FUN_1449fb17e) {
      if ((*(byte *)((longlong)plVar7 + 0x39e) & 1) == 0) {
        if ((*(byte *)((longlong)plVar7 + 0x39e) & 2) == 0) {
          if (DAT_14caf84d0 == 0) {
            local_50 = &local_38;
            local_38 = FUN_1449e2820;
            local_40 = FUN_14081d0ea;
            local_48 = &LAB_145a62952;
            local_58 = &LAB_147c8cd45;
            local_60 = (code *)&LAB_1461468ae;
            local_68 = L"Engine";
            local_70 = 0;
            local_78 = 0x10000006;
            local_80 = 8;
            local_88 = 0x218;
            FUN_14081cfa3(L"/Script/Engine",L"PhysicsSettings",&DAT_14caf84d0,FUN_1463f75b4);
          }
          lVar4 = DAT_14caf84d0;
          lVar5 = *(longlong *)(DAT_14caf84d0 + 0x110);
          if (lVar5 == 0) {
            FUN_140aa6c08(DAT_14caf84d0);
            lVar5 = *(longlong *)(lVar4 + 0x110);
          }
          puVar6 = (undefined4 *)(lVar5 + 0x38);
        }
        else {
          puVar6 = (undefined4 *)((longlong)plVar7 + 0x41c);
        }
        uVar9 = *puVar6;
        *(undefined4 *)(plVar7 + 0x83) = uVar9;
      }
      else {
        uVar9 = (undefined4)plVar7[0x83];
      }
    }
    else {
      uVar9 = (**(code **)(*plVar7 + 0x660))(plVar7);
    }
  }
  *(undefined4 *)(param_1 + 9) = uVar9;
  lVar5 = *param_4;
  if (lVar5 == 0) {
    if (param_2 == (longlong *)0x0) {
LAB_14133fb5e:
      plVar7 = (longlong *)param_2[0x36];
      if (plVar7 != (longlong *)0x0) {
        if (DAT_14cb22240 == 0) {
          local_50 = &local_38;
          local_38 = FUN_1449e2820;
          local_40 = FUN_14081d0ea;
          local_48 = &LAB_1464376fa;
          local_58 = &LAB_147f28935;
          local_60 = FUN_146437c39;
          local_68 = L"Engine";
          local_70 = 0;
          local_78 = 0x10004001;
          local_80 = 8;
          local_88 = 0x28;
          FUN_14081cfa3(L"/Script/GbxAI",L"GbxTargeter",&DAT_14cb22240,&DAT_147f28934);
        }
        plVar7 = (longlong *)(**(code **)(*plVar7 + 0x288))(plVar7,DAT_14cb22240);
        if (plVar7 != (longlong *)0x0) {
          if (DAT_14cb22240 == 0) {
            local_50 = &local_38;
            local_38 = FUN_1449e2820;
            local_40 = FUN_14081d0ea;
            local_48 = &LAB_1464376fa;
            local_58 = &LAB_147f28935;
            local_60 = FUN_146437c39;
            local_68 = L"Engine";
            local_70 = 0;
            local_78 = 0x10004001;
            local_80 = 8;
            local_88 = 0x28;
            FUN_14081cfa3(L"/Script/GbxAI",L"GbxTargeter",&DAT_14cb22240,&DAT_147f28934);
          }
          plVar8 = (longlong *)FUN_144718840(plVar7,DAT_14cb22240);
          if ((plVar7 != plVar8) && (plVar8 != (longlong *)0x0)) goto LAB_14133fbc0;
        }
      }
    }
    else {
      if (DAT_14cb22240 == 0) {
        local_50 = &local_38;
        local_38 = FUN_1449e2820;
        local_40 = FUN_14081d0ea;
        local_48 = &LAB_1464376fa;
        local_58 = &LAB_147f28935;
        local_60 = FUN_146437c39;
        local_68 = L"Engine";
        local_70 = 0;
        local_78 = 0x10004001;
        local_80 = 8;
        local_88 = 0x28;
        FUN_14081cfa3(L"/Script/GbxAI",L"GbxTargeter",&DAT_14cb22240,&DAT_147f28934);
      }
      plVar7 = (longlong *)(**(code **)(*param_2 + 0x288))(param_2,DAT_14cb22240);
      if (plVar7 == (longlong *)0x0) goto LAB_14133fb5e;
      if (DAT_14cb22240 == 0) {
        local_50 = &local_38;
        local_38 = FUN_1449e2820;
        local_40 = FUN_14081d0ea;
        local_48 = &LAB_1464376fa;
        local_58 = &LAB_147f28935;
        local_60 = FUN_146437c39;
        local_68 = L"Engine";
        local_70 = 0;
        local_78 = 0x10004001;
        local_80 = 8;
        local_88 = 0x28;
        FUN_14081cfa3(L"/Script/GbxAI",L"GbxTargeter",&DAT_14cb22240,&DAT_147f28934);
      }
      plVar8 = (longlong *)FUN_144718840(plVar7,DAT_14cb22240);
      if (plVar7 == plVar8 || plVar8 == (longlong *)0x0) goto LAB_14133fb5e;
LAB_14133fbc0:
      lVar5 = (**(code **)(*plVar8 + 0x30))(plVar8);
      if (0 < *(int *)(lVar5 + 0x80)) {
        local_38 = (code *)((ulonglong)local_38 & 0xffffffffffffff00);
        FUN_140519d92(*(undefined8 *)(lVar5 + 0x78),param_1 + 3);
        iVar1 = *(int *)(*(longlong *)(lVar5 + 0x78) + 8);
        if (((((iVar1 == 0) || (uVar2 = *(uint *)(*(longlong *)(lVar5 + 0x78) + 4), (int)uVar2 < 0))
             || (DAT_14c9647dc <= (int)uVar2)) ||
            ((plVar7 = (longlong *)
                       ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
             plVar7 == (longlong *)0x0 || ((int)plVar7[2] != iVar1)))) ||
           ((*(uint *)(plVar7 + 1) & 0x10200000) != 0)) {
          *param_4 = 0;
          goto LAB_14133fae4;
        }
        lVar5 = *plVar7;
        *param_4 = lVar5;
        if ((lVar5 == 0) || ((char)local_38 == '\0')) goto LAB_14133fae4;
        goto LAB_14133fac9;
      }
    }
    FUN_14893f49c(param_1 + 3,param_2);
  }
  else {
LAB_14133fac9:
    FUN_14030a482(param_5,param_1 + 3,lVar5,0);
    (**(code **)(*(longlong *)*param_4 + 0x328))((longlong *)*param_4,param_1 + 6);
  }
LAB_14133fae4:
  if ((local_30 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14133ffc8 FUN_14133ffc8 body=346 status=ok
// SIG undefined FUN_14133ffc8(void)

void FUN_14133ffc8(longlong *param_1)

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
      FUN_145a1457c(*local_68 + (longlong)iStack_4c * 0xe0 + 0x10);
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_14053096a(param_1,0);
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



// FUNCTION 141340124 FUN_141340124 body=193 status=ok
// SIG undefined FUN_141340124(void)

int FUN_141340124(longlong *param_1,uint param_2,undefined8 *param_3)

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
        local_40 = *(undefined8 *)(lVar3 + (longlong)iVar4 * 0x60);
        cVar1 = FUN_1400ff418(&local_40,&local_48);
        if (cVar1 != '\0') goto LAB_14134014d;
        lVar3 = *param_1;
        iVar4 = *(int *)(lVar3 + 0x58 + (longlong)iVar4 * 0x60);
      } while (iVar4 != -1);
    }
  }
  iVar4 = -1;
LAB_14134014d:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar4;
}



// FUNCTION 1413401e6 FUN_1413401e6 body=184 status=ok
// SIG undefined FUN_1413401e6(void)

void FUN_1413401e6(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_40;
  undefined1 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_1 != 0) {
    local_58 = 0;
    uStack_50 = 0;
    local_40 = param_2;
    local_38 = param_3;
    FUN_141270afc(0,&local_58,0);
    lVar2 = local_58;
    lVar4 = (longlong)(int)uStack_50;
    if (lVar4 != 0) {
      lVar5 = 0;
      do {
        plVar1 = *(longlong **)(lVar2 + lVar5);
        if ((plVar1 != (longlong *)0x0) && (cVar3 = FUN_143893b9e(plVar1,&local_40), cVar3 != '\0'))
        {
          (**(code **)(*plVar1 + 0x5e8))(plVar1);
        }
        lVar5 = lVar5 + 8;
      } while (lVar4 * 8 != lVar5);
    }
    if (local_58 != 0) {
      FUN_1400020a8(local_58);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1413402a0 FUN_1413402a0 body=2020 status=ok
// SIG undefined FUN_1413402a0(void)

void FUN_1413402a0(undefined8 param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  undefined *puVar4;
  ulonglong uVar5;
  char cVar6;
  uint uVar7;
  int *piVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong lVar12;
  undefined4 *puVar13;
  ulonglong uVar14;
  longlong *plVar15;
  longlong lVar16;
  longlong lVar17;
  undefined1 auStack_168 [32];
  undefined1 local_148;
  longlong *local_140;
  longlong local_138;
  PSRWLOCK local_130;
  PSRWLOCK local_128;
  longlong local_120;
  longlong local_118;
  longlong local_110;
  longlong local_108;
  undefined8 uStack_100;
  longlong *local_f8;
  undefined8 uStack_f0;
  longlong local_e0;
  undefined8 local_d8;
  longlong local_d0;
  longlong *local_c8;
  undefined1 local_bc [4];
  undefined **local_b8;
  longlong *plStack_b0;
  ulonglong local_a8;
  ulonglong uStack_a0;
  undefined8 uStack_98;
  longlong local_88;
  longlong *plStack_80;
  undefined4 local_78;
  longlong local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_118 = DAT_14cb84940;
  if (DAT_14cb84940 != 0) {
    FUN_1449027d0(param_1,&local_88);
    lVar17 = *(longlong *)(local_88 + 0x4d0);
    local_128 = (PSRWLOCK)(lVar17 + 0x168);
    AcquireSRWLockExclusive(local_128);
    *(int *)(lVar17 + 0x160) = *(int *)(lVar17 + 0x160) + 1;
    if (plStack_80 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_80 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_80)(plStack_80);
        LOCK();
        piVar8 = (int *)((longlong)plStack_80 + 0xc);
        *piVar8 = *piVar8 + -1;
        UNLOCK();
        if (*piVar8 == 0) {
          (**(code **)(*plStack_80 + 0x10))(plStack_80);
        }
      }
    }
    lVar16 = lVar17 + 0x30;
    local_138 = lVar16;
    if (*(int *)(lVar17 + 0x38) != *(int *)(lVar17 + 100)) {
      FUN_14620228c(lVar16);
      FUN_146202156(lVar16);
    }
    local_88 = 0;
    plStack_80 = (longlong *)0x0;
    local_78 = 0;
    local_70 = 0;
    uStack_68 = 0;
    FUN_1446ddc76(&local_d8,"weaponcustomization",1);
    FUN_1402b5374(&local_88,0,local_d8);
    FUN_1449027d0(param_1,&local_b8);
    puVar4 = local_b8[0x36];
    local_130 = (PSRWLOCK)(puVar4 + 0x1c0);
    AcquireSRWLockExclusive(local_130);
    plVar1 = plStack_b0;
    *(int *)(puVar4 + 0x1b8) = *(int *)(puVar4 + 0x1b8) + 1;
    if (plStack_b0 != (longlong *)0x0) {
      LOCK();
      plVar15 = plStack_b0 + 1;
      *(int *)plVar15 = (int)*plVar15 + -1;
      UNLOCK();
      if ((int)*plVar15 == 0) {
        (**(code **)*plStack_b0)(plStack_b0);
        LOCK();
        piVar8 = (int *)((longlong)plVar1 + 0xc);
        *piVar8 = *piVar8 + -1;
        UNLOCK();
        if (*piVar8 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
        }
      }
    }
    lVar17 = *(longlong *)(puVar4 + 0x80);
    *(int *)(puVar4 + 0x90) = *(int *)(puVar4 + 0x90) + 2;
    if ((longlong)*(int *)(puVar4 + 0x88) != 0) {
      lVar16 = (longlong)*(int *)(puVar4 + 0x88) * 0x430 + lVar17;
      local_120 = lVar16;
      do {
        lVar10 = *(longlong *)(lVar17 + 0x218);
        local_b8 = (undefined **)0x0;
        plStack_b0 = (longlong *)0x0;
        local_a8 = local_a8 & 0xffffffff00000000;
        uStack_a0 = 0;
        uStack_98 = 0;
        FUN_1446ddda2(&local_b8,"weapon",0);
        FUN_1447325ac(&local_b8,&local_e0);
        lVar12 = local_e0;
        lVar10 = *(longlong *)(lVar10 + 0x98);
        if (uStack_a0 != 0) {
          FUN_1400020a8();
        }
        if (lVar10 == lVar12) {
          local_f8 = (longlong *)0x0;
          uStack_f0 = 0;
          local_110 = lVar17;
          FUN_140265f12();
          plStack_b0 = (longlong *)&DAT_14cb83310;
          local_a8 = 0;
          uStack_a0 = 0;
          local_b8 = &PTR_FUN_14b1828b0;
          FUN_140f0c707(lVar17 + 0x218,&local_b8);
          local_148 = 0;
          FUN_145903dca(local_118,lVar17 + 0x218,&local_b8,&local_f8);
          local_108 = 0;
          uStack_100 = 0;
          if ((longlong)(int)uStack_f0 != 0) {
            plVar1 = local_f8 + (int)uStack_f0;
            plVar15 = local_f8;
            do {
              lVar17 = *plVar15;
              if (lVar17 != 0) {
                lVar16 = *(longlong *)(lVar17 + 0x40);
                if (lVar16 == 0) {
                  uVar11 = FUN_1406ef318();
                  lVar16 = FUN_14477b664(uVar11);
                  *(longlong *)(lVar17 + 0x40) = lVar16;
                }
                plVar2 = (longlong *)(lVar17 + 0x38);
                lVar10 = *(longlong *)(lVar17 + 0x48);
                if (lVar10 == 0) {
                  if ((lVar16 != 0) && (*plVar2 != 0)) {
                    plVar9 = *(longlong **)(lVar16 + 0xb8);
                    if ((plVar9 == (longlong *)0x0) ||
                       (cVar6 = (**(code **)(*plVar9 + 0x108))(plVar9), cVar6 == '\0')) {
                      *(undefined8 *)(lVar17 + 0x48) = 0;
                    }
                    else {
                      uVar11 = (**(code **)(*plVar9 + 0x110))(plVar9);
                      lVar10 = FUN_144aff482(uVar11,plVar2);
                      *(longlong *)(lVar17 + 0x48) = lVar10;
                      if (lVar10 != 0) {
                        lVar16 = *(longlong *)(lVar17 + 0x40);
                        goto LAB_14134053f;
                      }
                    }
                  }
                }
                else {
LAB_14134053f:
                  if (lVar16 == 0) {
                    uVar11 = FUN_1406ef318();
                    lVar16 = FUN_14477b664(uVar11);
                    *(longlong *)(lVar17 + 0x40) = lVar16;
                    lVar10 = *(longlong *)(lVar17 + 0x48);
                    if (((lVar10 == 0) && (lVar10 = 0, lVar16 != 0)) && (*plVar2 != 0)) {
                      plVar9 = *(longlong **)(lVar16 + 0xb8);
                      if ((plVar9 == (longlong *)0x0) ||
                         (cVar6 = (**(code **)(*plVar9 + 0x108))(plVar9), cVar6 == '\0')) {
                        lVar10 = 0;
                      }
                      else {
                        uVar11 = (**(code **)(*plVar9 + 0x110))(plVar9);
                        lVar10 = FUN_144aff482(uVar11,plVar2);
                      }
                      *(longlong *)(lVar17 + 0x48) = lVar10;
                    }
                  }
                  piVar8 = *(int **)(lVar10 + 8);
                  if (piVar8 == (int *)0x0) {
                    piVar8 = &DAT_14c9485f0;
                  }
                  if (((*piVar8 != 0) && (piVar8[1] != 0)) && (*piVar8 != DAT_14c948000)) {
                    uVar14 = 1;
                    lVar16 = 0;
                    while( true ) {
                      lVar10 = *(longlong *)(lVar17 + 0x40);
                      if (lVar10 == 0) {
                        uVar11 = FUN_1406ef318();
                        lVar10 = FUN_14477b664(uVar11);
                        *(longlong *)(lVar17 + 0x40) = lVar10;
                      }
                      lVar12 = *(longlong *)(lVar17 + 0x48);
                      if (((lVar12 == 0) && (lVar12 = 0, lVar10 != 0)) && (*plVar2 != 0)) {
                        local_140 = *(longlong **)(lVar10 + 0xb8);
                        if ((local_140 == (longlong *)0x0) ||
                           (cVar6 = (**(code **)(*local_140 + 0x108))(), cVar6 == '\0')) {
                          lVar12 = 0;
                        }
                        else {
                          uVar11 = (**(code **)(*local_140 + 0x110))();
                          lVar12 = FUN_144aff482(uVar11,plVar2);
                        }
                        *(longlong *)(lVar17 + 0x48) = lVar12;
                      }
                      uVar5 = uStack_100;
                      puVar13 = &DAT_14c9485f0;
                      if (*(undefined4 **)(lVar12 + 8) != (undefined4 *)0x0) {
                        puVar13 = *(undefined4 **)(lVar12 + 8);
                      }
                      if ((longlong)(int)puVar13[1] < (longlong)uVar14) break;
                      lVar10 = *(longlong *)(lVar17 + 0x40);
                      if (lVar10 == 0) {
                        uVar11 = FUN_1406ef318();
                        lVar10 = FUN_14477b664(uVar11);
                        *(longlong *)(lVar17 + 0x40) = lVar10;
                        lVar12 = *(longlong *)(lVar17 + 0x48);
                      }
                      if (((lVar12 == 0) && (lVar12 = 0, lVar10 != 0)) && (*plVar2 != 0)) {
                        local_140 = *(longlong **)(lVar10 + 0xb8);
                        if ((local_140 == (longlong *)0x0) ||
                           (cVar6 = (**(code **)(*local_140 + 0x108))(), cVar6 == '\0')) {
                          lVar12 = 0;
                        }
                        else {
                          uVar11 = (**(code **)(*local_140 + 0x110))();
                          lVar12 = FUN_144aff482(uVar11,plVar2);
                        }
                        *(longlong *)(lVar17 + 0x48) = lVar12;
                      }
                      piVar8 = &DAT_14c9485f0;
                      if (*(int **)(lVar12 + 8) != (int *)0x0) {
                        piVar8 = *(int **)(lVar12 + 8);
                      }
                      if (*piVar8 == 0) {
LAB_1413406aa:
                        local_c8 = (longlong *)CONCAT44(local_c8._4_4_,DAT_14c948620);
                        local_d0 = DAT_14c948618;
                      }
                      else {
                        iVar3 = piVar8[1];
                        if (((longlong)iVar3 == 0) || (*piVar8 == DAT_14c948000))
                        goto LAB_1413406aa;
                        if ((iVar3 < 2) && (piVar8[9] < 1)) {
                          plVar9 = (longlong *)(piVar8 + 2);
                        }
                        else {
                          plVar9 = *(longlong **)(piVar8 + 6);
                        }
                        if ((uVar14 < 2) || (iVar3 != 1)) {
                          if ((longlong)iVar3 < (longlong)uVar14) goto LAB_1413406aa;
                          local_c8 = (longlong *)
                                     CONCAT44(local_c8._4_4_,
                                              *(undefined4 *)((longlong)plVar9 + lVar16 + 8));
                          local_d0 = *(longlong *)((longlong)plVar9 + lVar16);
                        }
                        else {
                          local_c8 = (longlong *)CONCAT44(local_c8._4_4_,(int)plVar9[1]);
                          local_d0 = *plVar9;
                        }
                      }
                      FUN_144928d62(&local_88,uVar14 & 0xffffffff,&local_d0);
                      uVar14 = uVar14 + 1;
                      lVar16 = lVar16 + 0xc;
                    }
                    lVar17 = (longlong)(int)uStack_100;
                    uVar7 = (int)uStack_100 + 1;
                    uStack_100 = CONCAT44(uStack_100._4_4_,uVar7);
                    if (uStack_100._4_4_ < uVar7) {
                      FUN_14014a81a(&local_108,uVar5 & 0xffffffff);
                    }
                    FUN_1447a97f4(lVar17 * 0x28 + local_108,&local_88);
                  }
                }
              }
              plVar15 = plVar15 + 1;
            } while (plVar15 != plVar1);
          }
          lVar17 = local_110;
          local_d0 = local_110 + 8;
          local_c8 = &local_108;
          FUN_145903e6c(local_138,local_bc);
          FUN_1456d172d(local_108,uStack_100 & 0xffffffff);
          if (local_108 != 0) {
            FUN_1400020a8();
          }
          lVar16 = local_120;
          local_b8 = (undefined **)&DAT_14a171d50;
          uVar14 = uStack_a0 >> 0x20;
          uStack_a0 = uStack_a0 & 0xffffffff00000000;
          if ((int)uVar14 != 0) {
            FUN_140115c12(&local_a8,0);
          }
          plStack_b0 = (longlong *)0x0;
          if (local_a8 != 0) {
            FUN_1400020a8();
          }
          if (local_f8 != (longlong *)0x0) {
            FUN_1400020a8();
          }
        }
        lVar17 = lVar17 + 0x430;
      } while (lVar17 != lVar16);
    }
    ReleaseSRWLockExclusive(local_130);
    if (local_70 != 0) {
      FUN_1400020a8();
    }
    ReleaseSRWLockExclusive(local_128);
  }
  if ((local_60 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141340a86 FUN_141340a86 body=334 status=ok
// SIG undefined FUN_141340a86(void)

void FUN_141340a86(longlong param_1,int param_2,int param_3)

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
    uVar4 = (longlong)param_2 * 0x28;
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
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_141340af8;
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
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
LAB_141340af8:
    iVar5 = (int)(uVar4 / 0x28);
    iVar7 = 0x7fffffff;
    if (param_2 <= iVar5) {
      iVar7 = iVar5;
    }
  }
  if (param_3 < iVar7) {
    FUN_1446f8d3c(param_1,0,iVar7,0x28,8);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 141340bd4 FUN_141340bd4 body=897 status=ok
// SIG undefined FUN_141340bd4(void)

void FUN_141340bd4(longlong *param_1,undefined8 *param_2,char param_3)

{
  longlong *plVar1;
  ulonglong uVar2;
  int iVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  ulonglong uVar12;
  longlong *plVar13;
  int iVar14;
  longlong *plVar15;
  undefined1 auStack_c8 [36];
  int local_a4;
  longlong *local_a0;
  undefined8 *local_98;
  longlong *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  longlong *local_68;
  longlong *plStack_60;
  longlong local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_98 = param_2;
  cVar4 = (**(code **)(*param_1 + 0x300))();
  if (cVar4 == '\0') {
    plVar1 = param_1 + 0x4f;
    plVar13 = param_1 + 0x51;
    local_68 = (longlong *)&DAT_100000000;
    local_58 = 0xffffffff;
    uStack_50 = 0;
    plStack_60 = plVar13;
    if ((int)param_1[0x54] == 0) {
      iVar11 = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      iVar11 = (int)param_1[0x54];
    }
    uStack_70 = CONCAT44(uStack_4c,uStack_50);
    local_78 = local_58;
    lVar5 = local_78;
    local_88 = local_68;
    uStack_80 = plStack_60;
    local_78._4_4_ = (uint)((ulonglong)local_58 >> 0x20);
    iVar8 = local_78._4_4_;
    local_90 = plVar1;
    if ((local_78._4_4_ != iVar11) || (local_78 = lVar5, plStack_60 != plVar13)) {
      do {
        local_78 = lVar5;
        lVar5 = *(longlong *)(*local_90 + 0x10 + (longlong)iVar8 * 0x20);
        if (lVar5 != 0) {
          plVar15 = (longlong *)(*local_90 + (longlong)iVar8 * 0x20 + 0x10);
          if (param_3 != '\0') {
            FUN_144837e54(lVar5,0);
            lVar5 = *plVar15;
          }
          cVar4 = FUN_140dddae6(lVar5 + 0x48);
          if ((cVar4 != '\0') &&
             (plVar15 = *(longlong **)(*plVar15 + 0x30), plVar15 != (longlong *)0x0)) {
            lVar5 = (**(code **)(*plVar15 + 8))(plVar15);
            lVar6 = FUN_141340f56();
            if ((lVar6 != 0) &&
               ((*(int *)(lVar6 + 0x38) <= *(int *)(lVar5 + 0x38) &&
                (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8)
                 == lVar6 + 0x30)))) {
              (*(code *)*local_98)(local_98[1],plVar15);
            }
          }
        }
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar8 = local_78._4_4_;
        lVar5 = local_78;
      } while (local_90 != plVar1 || (uStack_80 != plVar13 || local_78._4_4_ != iVar11));
    }
  }
  else {
    local_a0 = param_1 + 0x3b;
    local_90 = (longlong *)&DAT_100000000;
    uStack_80 = (longlong *)&DAT_ffffffff;
    local_78 = (ulonglong)local_78._4_4_ << 0x20;
    local_88 = local_a0;
    if ((int)param_1[0x3e] == 0) {
      uVar12 = 1;
      uVar10 = 0xffffffff;
      iVar11 = 0;
      iVar14 = 0;
      iVar7 = 0;
      iVar8 = 0;
    }
    else {
      FUN_1449c0562(&local_90);
      uVar12 = (ulonglong)local_90 >> 0x20;
      iVar11 = (int)param_1[0x3e];
      iVar8 = (int)local_90;
      uVar10 = (uint)uStack_80;
      iVar7 = uStack_80._4_4_;
      iVar14 = (uint)local_78;
    }
    plVar1 = local_88;
    if (iVar7 != iVar11 || local_88 != local_a0) {
      do {
        local_a4 = iVar11;
        plVar13 = *(longlong **)(param_1[0x39] + 0x10 + (longlong)iVar7 * 0x20);
        if (plVar13 != (longlong *)0x0) {
          lVar5 = (**(code **)(*plVar13 + 8))(plVar13);
          lVar6 = FUN_141340f56();
          if (((lVar6 != 0) && (*(int *)(lVar6 + 0x38) <= *(int *)(lVar5 + 0x38))) &&
             (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
              lVar6 + 0x30)) {
            (*(code *)*local_98)(local_98[1],plVar13);
          }
        }
        uVar10 = uVar10 & ~(uint)uVar12;
        plVar13 = (longlong *)plVar1[2];
        if ((longlong *)plVar1[2] == (longlong *)0x0) {
          plVar13 = plVar1;
        }
        iVar11 = (int)plVar1[3];
        lVar5 = (longlong)iVar8;
        uVar9 = *(uint *)((longlong)plVar13 + lVar5 * 4) & uVar10;
        if (uVar9 == 0) {
          iVar7 = iVar11 + 0x1e;
          if (-1 < iVar11 + -1) {
            iVar7 = iVar11 + -1;
          }
          iVar7 = iVar7 >> 5;
          iVar14 = iVar14 + 0x20;
          iVar3 = iVar7;
          if (iVar7 < iVar8) {
            iVar3 = iVar8;
          }
          if (iVar8 < iVar7) {
            lVar6 = 0;
            do {
              uVar9 = *(uint *)((longlong)plVar13 + lVar6 * 4 + lVar5 * 4 + 4);
              if (uVar9 != 0) {
                iVar8 = iVar8 + (int)lVar6 + 1;
                uVar10 = 0xffffffff;
                goto LAB_141340d5d;
              }
              iVar14 = iVar14 + 0x20;
              lVar6 = lVar6 + 1;
            } while (iVar3 - lVar5 != lVar6);
            uVar10 = 0xffffffff;
            iVar8 = iVar3;
          }
          iVar8 = iVar8 + 1;
          iVar7 = iVar11;
        }
        else {
LAB_141340d5d:
          uVar12 = (ulonglong)(-uVar9 & uVar9);
          uVar2 = uVar12 * 2 + 1;
          lVar5 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar5 == 0; lVar5 = lVar5 + -1) {
            }
          }
          iVar7 = (iVar14 - ((uint)lVar5 ^ 0x3f)) + 0x3e;
          if (iVar11 <= iVar7) {
            iVar7 = iVar11;
          }
        }
        iVar11 = local_a4;
      } while (iVar7 != local_a4 || plVar1 != local_a0);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141340f56 FUN_141340f56 body=57 status=ok
// SIG undefined FUN_141340f56(void)

void FUN_141340f56(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb69fa8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb69fa8 = FUN_140002ddd(FUN_1465244e2,uVar1,L"InventoryCustomizationDef");
  }
  return;
}



// FUNCTION 141340f90 FUN_141340f90 body=21383 status=ok
// SIG undefined FUN_141340f90(void)

/* WARNING: Removing unreachable block (ram,0x00014134247c) */
/* WARNING: Removing unreachable block (ram,0x000141343c42) */

void FUN_141340f90(longlong param_1,longlong *param_2,char param_3)

{
  PSRWLOCK SRWLock;
  int *piVar1;
  ulonglong uVar2;
  void *pvVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 *_Src;
  char cVar6;
  code cVar7;
  byte bVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  undefined8 uVar13;
  longlong lVar14;
  longlong *plVar15;
  code *pcVar16;
  longlong *plVar17;
  longlong *plVar18;
  undefined *puVar19;
  code *pcVar20;
  undefined8 *puVar21;
  undefined4 *puVar22;
  code **ppcVar23;
  longlong lVar24;
  longlong lVar25;
  code *pcVar26;
  code *pcVar27;
  longlong *plVar28;
  longlong *plVar29;
  code **ppcVar30;
  code *pcVar31;
  uint uVar32;
  int iVar33;
  int iVar34;
  undefined4 *puVar35;
  code *pcVar36;
  code **ppcVar37;
  uint uVar38;
  ulonglong uVar39;
  code **ppcVar40;
  code **ppcVar41;
  int iVar42;
  float *pfVar43;
  code **ppcVar44;
  code **ppcVar45;
  undefined1 uVar46;
  int iVar47;
  undefined2 *puVar48;
  longlong lVar49;
  uint uVar50;
  code **ppcVar51;
  bool bVar52;
  float fVar53;
  undefined1 auStack_698 [32];
  code *local_678;
  void **local_670;
  undefined4 local_668;
  undefined8 local_660;
  undefined2 *local_658;
  undefined1 *local_650;
  undefined1 *local_648;
  code **local_640;
  undefined1 *local_638;
  code *local_630;
  code **local_620;
  code **local_618;
  code **local_610;
  code **local_608;
  code *local_600;
  code **local_5f8;
  longlong *local_5f0;
  code **local_5e8;
  longlong local_5e0;
  code *local_5d8;
  longlong *local_5d0;
  longlong *local_5c8;
  longlong local_5c0;
  longlong local_5b8;
  longlong *local_5b0;
  code *local_5a8;
  undefined8 local_5a0;
  longlong *local_598;
  longlong local_590;
  longlong local_588;
  PSRWLOCK local_580;
  code *local_578;
  longlong local_570;
  undefined8 local_568;
  undefined8 uStack_560;
  longlong local_558;
  longlong local_548;
  undefined8 local_540;
  code **local_538;
  undefined8 uStack_530;
  void *local_528;
  int local_520;
  undefined4 local_51c;
  undefined2 *local_518;
  undefined8 uStack_510;
  undefined8 local_500;
  void *local_4f8;
  int local_4f0;
  undefined4 local_4ec;
  code **local_4e8;
  undefined4 local_4e0;
  code **local_4d8;
  ulonglong uStack_4d0;
  undefined8 local_4c8;
  undefined8 uStack_4c0;
  undefined8 local_4b0;
  longlong local_4a8;
  ulonglong uStack_4a0;
  undefined8 local_498;
  undefined8 uStack_490;
  undefined8 local_488;
  undefined4 uStack_480;
  undefined4 uStack_47c;
  undefined8 local_478;
  undefined8 local_470;
  undefined8 local_468;
  undefined8 uStack_460;
  undefined4 local_458;
  undefined8 *local_450;
  undefined8 uStack_448;
  undefined8 local_438;
  undefined8 uStack_430;
  undefined8 local_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 local_408;
  undefined1 local_400;
  code *local_388;
  undefined8 local_380;
  undefined4 local_378;
  undefined4 uStack_374;
  int iStack_370;
  undefined4 uStack_36c;
  undefined1 local_368 [40];
  longlong *local_340;
  uint local_338;
  uint local_334;
  undefined4 local_330;
  undefined4 local_32c;
  undefined8 local_318;
  undefined1 local_310 [40];
  code *local_2e8;
  int local_2e0;
  undefined4 local_2dc;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_698;
  if ((*param_2 == 0) || (lVar12 = FUN_145a5afee(), lVar12 == 0)) goto LAB_141340fd4;
  local_5e0 = param_1;
  local_5c0 = lVar12;
  FUN_1449027d0(param_1,&local_388);
  plVar29 = *(longlong **)(local_388 + 0x4d0);
  local_580 = (PSRWLOCK)(plVar29 + 0x2d);
  AcquireSRWLockExclusive(local_580);
  pcVar20 = local_380;
  *(int *)(plVar29 + 0x2c) = (int)plVar29[0x2c] + 1;
  local_5f0 = plVar29;
  if (local_380 != (code *)0x0) {
    LOCK();
    pcVar31 = local_380 + 8;
    *(int *)pcVar31 = *(int *)pcVar31 + -1;
    UNLOCK();
    if (*(int *)pcVar31 == 0) {
      (*(code *)**(undefined8 **)local_380)(local_380);
      LOCK();
      pcVar31 = pcVar20 + 0xc;
      *(int *)pcVar31 = *(int *)pcVar31 + -1;
      UNLOCK();
      if (*(int *)pcVar31 == 0) {
        (**(code **)(*(longlong *)pcVar20 + 0x10))(pcVar20);
      }
    }
  }
  cVar6 = FUN_14663bdc6(local_5e0,param_2);
  if ((cVar6 != '\0') || (param_3 != '\0')) {
    FUN_1462020d6(local_5f0);
    lVar12 = local_5c0 + 0xd50;
    local_4a8 = 0;
    uStack_4a0 = 0;
    local_678 = (code *)0x0;
    FUN_14117274e(lVar12,param_2,&local_4a8,1);
    local_588 = lVar12;
    local_578 = (code *)FUN_141173630(lVar12);
    local_5a0 = FUN_14663c518(param_2);
    local_468 = 0;
    uStack_460 = 0;
    local_458 = 0;
    local_450 = (undefined8 *)0x0;
    uStack_448 = 0;
    lVar12 = local_5e0;
    local_5c8 = param_2;
    if (0 < (int)uStack_4a0) {
      local_5e8 = (code **)(local_5e0 + 0x30);
      local_570 = local_5e0 + 0x44;
      local_598 = (longlong *)(local_5e0 + 0x158);
      local_5b8 = 0;
      do {
        uVar39 = uStack_448 >> 0x20;
        uStack_448 = uStack_448 & 0xffffffff00000000;
        local_468 = 0;
        uStack_460 = 0;
        local_458 = 0;
        if ((int)uVar39 != 0) {
          FUN_1446dda88(&local_450,0);
        }
        FUN_1400021e4(param_2,&local_438);
        local_380 = uStack_430;
        uVar38 = (int)uStack_430 - 1;
        if ((int)uStack_430 == 0) {
          uVar38 = 0;
        }
        if (0 < (int)uVar38) {
          uVar39 = 0;
          do {
            *(ushort *)(local_438 + uVar39 * 2) =
                 (ushort)(*(ushort *)(local_438 + uVar39 * 2) - 0x41 < 0x1a) * 0x20 +
                 *(ushort *)(local_438 + uVar39 * 2);
            uVar39 = uVar39 + 1;
          } while (uVar38 != uVar39);
        }
        local_388 = local_438;
        local_438 = (code *)0x0;
        uStack_430 = (code *)0x0;
        FUN_14047a987(&local_388,"customization",0xd);
        iVar47 = (int)local_380 + -1;
        if ((int)local_380 == 0) {
          iVar47 = 0;
        }
        FUN_1446f82e2(&local_498,iVar47,local_388,1);
        FUN_1402b5374(&local_468,0,local_498);
        if (local_388 != (code *)0x0) {
          FUN_1400020a8();
        }
        if (local_438 != (code *)0x0) {
          FUN_1400020a8();
        }
        local_590 = local_5b8 * 5;
        if (*(int *)(local_4a8 + 0x20 + local_5b8 * 0x28) != 0) {
          plVar29 = (longlong *)(local_4a8 + local_5b8 * 0x28);
          lVar14 = plVar29[1];
          if (lVar14 == 0) {
            uVar13 = FUN_140c1c194();
            lVar14 = FUN_14477b664(uVar13);
            plVar29[1] = lVar14;
          }
          plVar15 = (longlong *)plVar29[2];
          if (plVar15 == (longlong *)0x0) {
            if ((lVar14 != 0) && (*plVar29 != 0)) {
              plVar15 = *(longlong **)(lVar14 + 0xb8);
              if ((plVar15 == (longlong *)0x0) ||
                 (cVar6 = (**(code **)(*plVar15 + 0x108))(plVar15), cVar6 == '\0')) {
                plVar29[2] = 0;
                lVar12 = local_5e0;
              }
              else {
                uVar13 = (**(code **)(*plVar15 + 0x110))(plVar15);
                plVar15 = (longlong *)FUN_144aff482(uVar13,plVar29);
                plVar29[2] = (longlong)plVar15;
                lVar12 = local_5e0;
                if (plVar15 != (longlong *)0x0) goto LAB_1413413bb;
              }
            }
          }
          else {
LAB_1413413bb:
            puVar35 = (undefined4 *)plVar15[1];
            if (puVar35 == (undefined4 *)0x0) {
              puVar35 = &DAT_14c9485f0;
            }
            if (DAT_14c947fe0 == 0) {
              lVar12 = FUN_14001cc68(0x140,0x10);
              FUN_1456b2032(lVar12);
              DAT_14c947fe0 = lVar12;
            }
            FUN_140045924(DAT_14c947fe0,&local_4b0,puVar35,1);
            FUN_1402b5374(&local_468,1,local_4b0);
            memset(&local_388,0,0xb0);
            FUN_1465f2b94(&local_388);
            FUN_140fa8a64(plVar15,&local_438);
            pcVar20 = local_438;
            if (*(code **)(*(longlong *)local_438 + 0x50) != FUN_144828418) {
              pcVar20 = (code *)(**(code **)(*(longlong *)local_438 + 0x50))();
            }
            FUN_1447a1fc0(pcVar20);
            pcVar20 = *(code **)(*(longlong *)local_438 + 0x28);
            if (pcVar20 == FUN_14482841c) {
              ppcVar23 = (code **)(local_438 + 0x18);
              if (*(longlong *)(local_438 + 0x28) != 0) {
                ppcVar23 = (code **)(*(longlong *)(local_438 + 0x28) + 8);
              }
            }
            else if (pcVar20 == (code *)&LAB_14010c34c) {
              ppcVar23 = (code **)(local_438 + 0x10);
            }
            else {
              ppcVar23 = (code **)(*pcVar20)(local_438);
            }
            if (&local_388 != ppcVar23) {
              uVar38 = *(uint *)(ppcVar23 + 1);
              pcVar20 = *ppcVar23;
              local_380 = (code *)CONCAT44(local_380._4_4_,uVar38);
              if (uVar38 == 0 && local_380._4_4_ == 0) {
                local_380 = (code *)(ulonglong)uVar38;
              }
              else {
                FUN_1446dd670(&local_388,uVar38);
                if (uVar38 != 0) {
                  memcpy(local_388,pcVar20,(longlong)(int)uVar38 * 2);
                }
              }
            }
            if (local_438 != (code *)0x0) {
              (**(code **)(*(longlong *)local_438 + 0x10))();
            }
            FUN_143c95112(plVar15,&local_438);
            FUN_140390f7a(&local_438,&local_378);
            if (uStack_420 != (undefined8 *)0x0) {
              FUN_1400020a8();
            }
            if (iStack_370 < 2) {
              FUN_1400b22c2(&local_438,"coui://uiresources/_shared/assets/missing_icon.png");
              if (CONCAT44(uStack_374,local_378) != 0) {
                FUN_1400020a8();
              }
              local_378 = (int)local_438;
              uStack_374 = local_438._4_4_;
              iStack_370 = (int)uStack_430;
              uStack_36c = uStack_430._4_4_;
            }
            puVar21 = (undefined8 *)FUN_1409e3bfc(plVar15);
            local_318 = *puVar21;
            FUN_1447715ec(local_310,&local_468);
            puVar21 = &uStack_460;
            if (1 < local_468._4_4_) {
              puVar21 = local_450;
            }
            if (0 < uStack_448._4_4_) {
              puVar21 = local_450;
            }
            FUN_1408226d0((longlong)puVar21 + (longlong)(local_468._4_4_ + -1) * 0xc,&local_438,1);
            pcVar20 = local_438;
            iVar47 = (int)uStack_430;
            uVar38 = (int)uStack_430 - 1;
            if ((int)uStack_430 == 0) {
              uVar38 = 0;
            }
            if (0 < (int)uVar38) {
              uVar39 = 0;
              do {
                *(ushort *)(local_438 + uVar39 * 2) =
                     (ushort)(*(ushort *)(local_438 + uVar39 * 2) - 0x41 < 0x1a) * 0x20 +
                     *(ushort *)(local_438 + uVar39 * 2);
                uVar39 = uVar39 + 1;
              } while (uVar38 != uVar39);
            }
            uVar9 = uStack_430._4_4_;
            local_438 = (code *)0x0;
            uStack_430 = (code *)0x0;
            if (local_2e8 == (code *)0x0) {
              local_2e8 = pcVar20;
              local_2e0 = iVar47;
              local_2dc = uVar9;
            }
            else {
              FUN_1400020a8();
              local_2e8 = pcVar20;
              local_2e0 = iVar47;
              local_2dc = uVar9;
              if (local_438 != (code *)0x0) {
                FUN_1400020a8();
              }
            }
            local_330 = (**(code **)(*plVar15 + 0x68))(plVar15);
            local_32c = *(undefined4 *)((longlong)plVar15 + 0x7c);
            if (0 < (int)plVar29[4]) {
              ppcVar23 = (code **)0x0;
              local_5d0 = plVar29;
              local_5b0 = plVar15;
              do {
                local_5a8 = (code *)((longlong)ppcVar23 * 0x58);
                local_5d8 = local_5a8 + plVar29[3];
                local_608 = ppcVar23;
                cVar6 = (**(code **)(*plVar15 + 0x30))(plVar15);
                if (cVar6 == '\x02') {
                  if (local_5d8[0x50] == (code)0x18) {
                    pcVar20 = local_5d8 + 0x20;
                    lVar12 = FUN_1402735c8();
                    local_438 = (code *)((ulonglong)local_438 & 0xffffffffffffff00);
                    uStack_410 = (void *)((ulonglong)uStack_410 & 0xffffffff00000000);
                    FUN_14575a19a(&local_438,0);
                    FUN_1447c3578(pcVar20,&local_498,&local_438);
                    FUN_140a1ca64(&local_498,&local_568);
                    pcVar20 = *(code **)((longlong)&DAT_14c9a85d0 +
                                        (ulonglong)((uint)(byte)local_478 * 0x120));
                    if (pcVar20 != (code *)0x0) {
                      puVar21 = &local_498;
                      if (0x18 < (ushort)uStack_480) {
                        puVar21 = local_498;
                      }
                      (*pcVar20)(puVar21);
                    }
                    if (0x18 < (ushort)uStack_480) {
                      FUN_1400020a8(local_498);
                    }
                    lVar14 = DAT_14c9a3da0;
                    if ((longlong)(int)uStack_410 != 0) {
                      lVar24 = (longlong)(int)uStack_410 + -1;
                      lVar49 = lVar24 * 0x10;
                      FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar49),
                                    *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar49));
                      if (*(longlong *)(lVar14 + lVar49) != 0) {
                        FUN_1400020a8();
                      }
                      lVar14 = DAT_14c9a3da0;
                      iVar47 = (int)lVar24;
                      if (DAT_14c9a3dd4 != 0) {
                        *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar47;
                      }
                      *(undefined4 *)(lVar14 + lVar49) = 0xffffffff;
                      iVar10 = -1;
                      if (0 < DAT_14c9a3dd4) {
                        iVar10 = DAT_14c9a3dd0;
                      }
                      *(int *)(lVar14 + 4 + lVar49) = iVar10;
                      DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
                      puVar19 = DAT_14c9a3dc0;
                      if (DAT_14c9a3dc0 == (undefined *)0x0) {
                        puVar19 = &DAT_14c9a3db0;
                      }
                      iVar10 = iVar47 + 0x1f;
                      if (-1 < iVar47) {
                        iVar10 = iVar47;
                      }
                      bVar8 = (byte)lVar24 & 0x1f;
                      DAT_14c9a3dd0 = iVar47;
                      *(uint *)(puVar19 + (longlong)(iVar10 >> 5) * 4) =
                           *(uint *)(puVar19 + (longlong)(iVar10 >> 5) * 4) &
                           (-2 << bVar8 | 0xfffffffeU >> 0x20 - bVar8);
                      uStack_410 = (void *)((ulonglong)uStack_410 & 0xffffffff00000000);
                      param_2 = local_5c8;
                      plVar15 = local_5b0;
                      plVar29 = local_5d0;
                    }
                    if (((char)local_438 == '\x03') && (local_428 != (code *)0x0)) {
                      LOCK();
                      pcVar20 = local_428 + 0xc;
                      *(int *)pcVar20 = *(int *)pcVar20 + -1;
                      UNLOCK();
                      if (*(int *)pcVar20 == 0) {
                        (**(code **)(*(longlong *)local_428 + 0x10))();
                      }
                    }
                    if ((longlong)*(int *)(lVar12 + 0x9b8) != 0) {
                      pfVar43 = (float *)(*(longlong *)(lVar12 + 0x9b0) + 0x10);
                      ppcVar23 = (code **)((longlong)*(int *)(lVar12 + 0x9b8) << 5);
                      do {
                        local_620 = ppcVar23;
                        puVar35 = (undefined4 *)FUN_14001cc68(0x120,0x10);
                        *puVar35 = 0x1000000;
                        plVar29 = (longlong *)(puVar35 + 2);
                        FUN_1400b22c2(plVar29,&DAT_149e02088);
                        FUN_1400b22c2(puVar35 + 6,&DAT_149e02088);
                        FUN_1400b22c2(puVar35 + 10,&DAT_149e02088);
                        *(undefined1 *)(puVar35 + 0x12) = 0;
                        FUN_1400b22c2(puVar35 + 0x14,&DAT_149e02088);
                        bVar52 = false;
                        puVar35[0x32] = 0;
                        *(undefined8 *)(puVar35 + 0x24) = 0;
                        *(undefined8 *)(puVar35 + 0x26) = 0;
                        *(undefined8 *)(puVar35 + 0x2a) = 0;
                        *(undefined8 *)(puVar35 + 0x2c) = 0;
                        *(undefined8 *)(puVar35 + 0x2d) = 0;
                        *(undefined8 *)(puVar35 + 0x2f) = 0;
                        *(undefined8 *)(puVar35 + 0x34) = 0;
                        *(undefined8 *)(puVar35 + 0x36) = 0;
                        puVar35[0x38] = 0;
                        *(undefined8 *)(puVar35 + 0x3a) = 0;
                        *(undefined8 *)(puVar35 + 0x3c) = 0;
                        *(undefined8 *)(puVar35 + 0x18) = 0;
                        *(undefined8 *)(puVar35 + 0x1a) = 0;
                        *(undefined8 *)(puVar35 + 0x1c) = 0;
                        *(undefined8 *)(puVar35 + 0x1e) = 0;
                        *(undefined8 *)((longlong)puVar35 + 0x79) = 0;
                        *(undefined8 *)((longlong)puVar35 + 0x81) = 0;
                        FUN_1400b22c2(puVar35 + 0x3e,&DAT_149e02088);
                        *(undefined2 *)(puVar35 + 0x42) = 0;
                        *(undefined8 *)(puVar35 + 0x44) = 0;
                        *(undefined8 *)(puVar35 + 0x46) = 0;
                        plVar28 = (longlong *)FUN_14001cc68(0x18,0x10);
                        plVar28[1] = (longlong)&DAT_100000001;
                        *plVar28 = (longlong)&PTR_FUN_14b9ab580;
                        plVar28[2] = (longlong)puVar35;
                        lVar12 = FUN_14001cc68(0x88,0x10);
                        FUN_148e296c8(lVar12,pfVar43);
                        plVar17 = (longlong *)FUN_14001cc68(0x18,0x10);
                        plVar17[1] = (longlong)&DAT_100000001;
                        *plVar17 = (longlong)&PTR_FUN_14b9ab5a0;
                        plVar17[2] = lVar12;
                        *(undefined1 *)(puVar35 + 0x42) = 2;
                        if (ABS((float)local_568 - *pfVar43) < 0.01) {
                          if ((0.01 <= ABS(local_568._4_4_ - pfVar43[1])) ||
                             (0.01 <= ABS((float)uStack_560 - pfVar43[2]))) {
                            bVar52 = false;
                          }
                          else {
                            bVar52 = ABS(uStack_560._4_4_ - pfVar43[3]) < 0.01;
                          }
                        }
                        *(bool *)puVar35 = bVar52;
                        plVar15 = *(longlong **)(pfVar43 + -4);
                        if (*(code **)(*plVar15 + 0x50) != FUN_144828418) {
                          plVar15 = (longlong *)(**(code **)(*plVar15 + 0x50))();
                        }
                        FUN_1447a1fc0(plVar15);
                        plVar15 = *(longlong **)(pfVar43 + -4);
                        pcVar20 = *(code **)(*plVar15 + 0x28);
                        if (pcVar20 == FUN_14482841c) {
                          plVar18 = plVar15 + 3;
                          if (plVar15[5] != 0) {
                            plVar18 = (longlong *)(plVar15[5] + 8);
                          }
                        }
                        else if (pcVar20 == (code *)&LAB_14010c34c) {
                          plVar18 = plVar15 + 2;
                        }
                        else {
                          plVar18 = (longlong *)(*pcVar20)(plVar15);
                        }
                        if (plVar29 != plVar18) {
                          iVar47 = (int)plVar18[1];
                          pvVar3 = (void *)*plVar18;
                          puVar35[4] = iVar47;
                          if (iVar47 == 0 && puVar35[5] == 0) {
                            puVar35[5] = 0;
                          }
                          else {
                            FUN_1446dd670(plVar29,iVar47);
                            if (iVar47 != 0) {
                              memcpy((void *)*plVar29,pvVar3,(longlong)iVar47 * 2);
                            }
                          }
                        }
                        param_2 = local_5c8;
                        ppcVar23 = local_620;
                        *(undefined1 *)((longlong)puVar35 + 2) = 1;
                        if (plVar17 == (longlong *)0x0) {
                          *(longlong *)(puVar35 + 0x44) = lVar12;
                          plVar29 = *(longlong **)(puVar35 + 0x46);
                          if (plVar29 != (longlong *)0x0) {
                            *(undefined8 *)(puVar35 + 0x46) = 0;
LAB_14134288b:
                            LOCK();
                            plVar15 = plVar29 + 1;
                            *(int *)plVar15 = (int)*plVar15 + -1;
                            UNLOCK();
                            if ((int)*plVar15 == 0) {
                              (**(code **)*plVar29)(plVar29);
                              LOCK();
                              piVar1 = (int *)((longlong)plVar29 + 0xc);
                              *piVar1 = *piVar1 + -1;
                              iVar47 = *piVar1;
                              UNLOCK();
joined_r0x0001413428ba:
                              if (iVar47 == 0) {
                                (**(code **)(*plVar29 + 0x10))(plVar29);
                              }
                            }
                          }
                        }
                        else {
                          LOCK();
                          *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
                          UNLOCK();
                          *(longlong *)(puVar35 + 0x44) = lVar12;
                          plVar29 = *(longlong **)(puVar35 + 0x46);
                          if (plVar17 == plVar29) {
                            LOCK();
                            plVar29 = plVar17 + 1;
                            *(int *)plVar29 = (int)*plVar29 + -1;
                            UNLOCK();
                            if ((int)*plVar29 == 0) {
                              (**(code **)*plVar17)(plVar17);
                              LOCK();
                              piVar1 = (int *)((longlong)plVar17 + 0xc);
                              *piVar1 = *piVar1 + -1;
                              iVar47 = *piVar1;
                              UNLOCK();
                              plVar29 = plVar17;
                              goto joined_r0x0001413428ba;
                            }
                          }
                          else {
                            *(longlong **)(puVar35 + 0x46) = plVar17;
                            if (plVar29 != (longlong *)0x0) goto LAB_14134288b;
                          }
                        }
                        local_670 = (void **)(double)pfVar43[3];
                        local_678 = (code *)(double)pfVar43[2];
                        FUN_140002266(&local_438,L"(R=%f,G=%f,B=%f,A=%f)",(double)*pfVar43,
                                      (double)pfVar43[1]);
                        iVar47 = (int)uStack_430 + -1;
                        if ((int)uStack_430 == 0) {
                          iVar47 = 0;
                        }
                        FUN_1446f82e2(&local_4d8,iVar47,local_438,1);
                        FUN_1401533ba(&local_498,&local_4d8,1);
                        FUN_144928d62(&local_468,2,&local_498);
                        if (local_438 != (code *)0x0) {
                          FUN_1400020a8();
                        }
                        FUN_1447715ec(puVar35 + 0x34,&local_468);
                        plVar15 = local_5b0;
                        plVar29 = local_5d0;
                        if (plVar17 != (longlong *)0x0) {
                          LOCK();
                          plVar18 = plVar17 + 1;
                          *(int *)plVar18 = (int)*plVar18 + -1;
                          UNLOCK();
                          if ((int)*plVar18 == 0) {
                            (**(code **)*plVar17)(plVar17);
                            LOCK();
                            piVar1 = (int *)((longlong)plVar17 + 0xc);
                            *piVar1 = *piVar1 + -1;
                            UNLOCK();
                            if (*piVar1 == 0) {
                              (**(code **)(*plVar17 + 0x10))(plVar17);
                            }
                          }
                        }
                        if (plVar28 != (longlong *)0x0) {
                          LOCK();
                          plVar17 = plVar28 + 1;
                          *(int *)plVar17 = (int)*plVar17 + -1;
                          UNLOCK();
                          if ((int)*plVar17 == 0) {
                            (**(code **)*plVar28)(plVar28);
                            LOCK();
                            piVar1 = (int *)((longlong)plVar28 + 0xc);
                            *piVar1 = *piVar1 + -1;
                            UNLOCK();
                            if (*piVar1 == 0) {
                              (**(code **)(*plVar28 + 0x10))(plVar28);
                            }
                          }
                        }
                        pfVar43 = pfVar43 + 8;
                        ppcVar23 = ppcVar23 + -4;
                      } while (ppcVar23 != (code **)0x0);
                    }
                  }
                }
                else if (cVar6 == '\x01') {
                  local_568 = (code *)0x0;
                  uStack_560 = 0;
                  local_670 = (void **)FUN_1400d7050(local_5e8);
                  local_678 = (code *)((ulonglong)local_678 & 0xffffffffffffff00);
                  FUN_1409e3e74(plVar15,&local_568,local_608,plVar29);
                  if ((longlong)(int)(float)uStack_560 == 0) {
                    uVar39 = 0;
                  }
                  else {
                    local_600 = local_568 + (longlong)(int)(float)uStack_560 * 0x58;
                    pcVar20 = local_568;
                    do {
                      pcVar26 = (code *)FUN_14001cc68(0x120);
                      memset(pcVar26,0,0x120);
                      pcVar26[3] = (code)0x1;
                      pcVar31 = pcVar26 + 8;
                      FUN_1400b22c2(pcVar31,&DAT_149e02088);
                      local_5f8 = (code **)(pcVar26 + 0x18);
                      FUN_1400b22c2(local_5f8,&DAT_149e02088);
                      FUN_1400b22c2(pcVar26 + 0x28,&DAT_149e02088);
                      pcVar26[0x48] = (code)0x0;
                      FUN_1400b22c2(pcVar26 + 0x50,&DAT_149e02088);
                      *(undefined4 *)(pcVar26 + 200) = 0;
                      *(undefined8 *)(pcVar26 + 0x90) = 0;
                      *(undefined8 *)(pcVar26 + 0x98) = 0;
                      *(undefined8 *)(pcVar26 + 0xa8) = 0;
                      *(undefined8 *)(pcVar26 + 0xb0) = 0;
                      *(undefined8 *)(pcVar26 + 0xb4) = 0;
                      *(undefined8 *)(pcVar26 + 0xbc) = 0;
                      *(undefined8 *)(pcVar26 + 0xd0) = 0;
                      *(undefined8 *)(pcVar26 + 0xd8) = 0;
                      *(undefined4 *)(pcVar26 + 0xe0) = 0;
                      *(undefined8 *)(pcVar26 + 0xe8) = 0;
                      *(undefined8 *)(pcVar26 + 0xf0) = 0;
                      *(undefined8 *)(pcVar26 + 0x60) = 0;
                      *(undefined8 *)(pcVar26 + 0x68) = 0;
                      *(undefined8 *)(pcVar26 + 0x70) = 0;
                      *(undefined8 *)(pcVar26 + 0x78) = 0;
                      *(undefined8 *)(pcVar26 + 0x79) = 0;
                      *(undefined8 *)(pcVar26 + 0x81) = 0;
                      FUN_1400b22c2(pcVar26 + 0xf8,&DAT_149e02088);
                      *(undefined2 *)(pcVar26 + 0x108) = 0;
                      *(undefined8 *)(pcVar26 + 0x110) = 0;
                      *(undefined8 *)(pcVar26 + 0x118) = 0;
                      local_620 = (code **)FUN_14001cc68(0x18,0x10);
                      local_620[1] = (code *)&DAT_100000001;
                      *local_620 = (code *)&PTR_FUN_14b9ab580;
                      local_620[2] = pcVar26;
                      pcVar27 = (code *)FUN_14001cc68(0x88,0x10);
                      *(undefined ***)pcVar27 = &PTR_FUN_14b81be08;
                      FUN_1400b22c2(pcVar27 + 8,&DAT_149e02088);
                      *(undefined4 *)(pcVar27 + 0x18) = 0;
                      pcVar27[0x20] = *pcVar20;
                      *(undefined8 *)(pcVar27 + 0x28) = 0;
                      *(undefined8 *)(pcVar27 + 0x30) = 0;
                      *(undefined8 *)(pcVar27 + 0x38) = 0;
                      *(undefined8 *)(pcVar27 + 0x28) = *(undefined8 *)(pcVar20 + 8);
                      uVar13 = FUN_14477b664(*(undefined8 *)(pcVar20 + 0x10));
                      uVar13 = FUN_14477b664(uVar13);
                      *(undefined8 *)(pcVar27 + 0x30) = uVar13;
                      *(undefined8 *)(pcVar27 + 0x38) = *(undefined8 *)(pcVar20 + 0x18);
                      local_618 = (code **)(pcVar20 + 0x20);
                      FUN_14034cca6(pcVar27 + 0x40);
                      *(undefined8 *)(pcVar27 + 0x78) = 0;
                      *(undefined8 *)(pcVar27 + 0x80) = 0;
                      ppcVar23 = (code **)FUN_14001cc68(0x18,0x10);
                      ppcVar23[1] = (code *)&DAT_100000001;
                      *ppcVar23 = (code *)&PTR_FUN_14b9ab5a0;
                      ppcVar23[2] = pcVar27;
                      lVar12 = *(longlong *)(pcVar20 + 0x10);
                      if (lVar12 == 0) {
                        uVar13 = FUN_140c1c194();
                        lVar12 = FUN_14477b664(uVar13);
                        *(longlong *)(pcVar20 + 0x10) = lVar12;
                      }
                      pcVar36 = pcVar20 + 8;
                      plVar29 = *(longlong **)(pcVar20 + 0x18);
                      local_610 = ppcVar23;
                      if (plVar29 == (longlong *)0x0) {
                        if ((lVar12 != 0) && (*(longlong *)pcVar36 != 0)) {
                          plVar29 = *(longlong **)(lVar12 + 0xb8);
                          if ((plVar29 == (longlong *)0x0) ||
                             (cVar6 = (**(code **)(*plVar29 + 0x108))(plVar29), cVar6 == '\0')) {
                            *(undefined8 *)(pcVar20 + 0x18) = 0;
                            ppcVar23 = local_610;
                          }
                          else {
                            uVar13 = (**(code **)(*plVar29 + 0x110))(plVar29);
                            plVar29 = (longlong *)FUN_144aff482(uVar13,pcVar36);
                            *(longlong **)(pcVar20 + 0x18) = plVar29;
                            ppcVar23 = local_610;
                            if (plVar29 != (longlong *)0x0) goto LAB_14134195b;
                          }
                        }
                      }
                      else {
LAB_14134195b:
                        uVar38 = local_338;
                        lVar12 = (longlong)(int)local_338;
                        local_338 = local_338 + 1;
                        if (local_334 < local_338) {
                          FUN_14663d3b6(&local_340,uVar38);
                        }
                        local_340[lVar12 * 2] = (longlong)pcVar26;
                        local_340[lVar12 * 2 + 1] = (longlong)local_620;
                        if (local_620 != (code **)0x0) {
                          LOCK();
                          *(int *)(local_620 + 1) = *(int *)(local_620 + 1) + 1;
                          UNLOCK();
                        }
                        *pcVar26 = (code)(*(longlong *)(local_5d8 + 8) == *(longlong *)pcVar36);
                        FUN_140fa8a64(plVar29,&local_438);
                        pcVar16 = local_438;
                        if (*(code **)(*(longlong *)local_438 + 0x50) != FUN_144828418) {
                          pcVar16 = (code *)(**(code **)(*(longlong *)local_438 + 0x50))();
                        }
                        FUN_1447a1fc0(pcVar16);
                        pcVar16 = *(code **)(*(longlong *)local_438 + 0x28);
                        if (pcVar16 == FUN_14482841c) {
                          pcVar16 = local_438 + 0x18;
                          if (*(longlong *)(local_438 + 0x28) != 0) {
                            pcVar16 = (code *)(*(longlong *)(local_438 + 0x28) + 8);
                          }
                        }
                        else if (pcVar16 == (code *)&LAB_14010c34c) {
                          pcVar16 = local_438 + 0x10;
                        }
                        else {
                          pcVar16 = (code *)(*pcVar16)(local_438);
                        }
                        if (pcVar31 != pcVar16) {
                          iVar47 = *(int *)(pcVar16 + 8);
                          pvVar3 = *(void **)pcVar16;
                          *(int *)(pcVar26 + 0x10) = iVar47;
                          if (iVar47 == 0 && *(int *)(pcVar26 + 0x14) == 0) {
                            *(undefined4 *)(pcVar26 + 0x14) = 0;
                          }
                          else {
                            FUN_1446dd670(pcVar31,iVar47);
                            if (iVar47 != 0) {
                              memcpy(*(void **)pcVar31,pvVar3,(longlong)iVar47 * 2);
                            }
                          }
                        }
                        if (local_438 != (code *)0x0) {
                          (**(code **)(*(longlong *)local_438 + 0x10))();
                        }
                        uVar13 = FUN_1400d7050(local_5e8);
                        cVar7 = (code)FUN_14094f966(plVar29,uVar13);
                        pcVar26[2] = cVar7;
                        if (cVar7 == (code)0x0) {
                          lVar12 = *(longlong *)(pcVar20 + 0x10);
                          if (lVar12 == 0) {
                            uVar13 = FUN_140c1c194();
                            lVar12 = FUN_14477b664(uVar13);
                            *(longlong *)(pcVar20 + 0x10) = lVar12;
                          }
                          lVar14 = *(longlong *)(pcVar20 + 0x18);
                          if (lVar14 == 0) {
                            if (lVar12 == 0) {
                              lVar14 = 0;
                            }
                            else {
                              lVar14 = 0;
                              if (*(longlong *)pcVar36 != 0) {
                                plVar15 = *(longlong **)(lVar12 + 0xb8);
                                if ((plVar15 == (longlong *)0x0) ||
                                   (cVar6 = (**(code **)(*plVar15 + 0x108))(), cVar6 == '\0')) {
                                  lVar14 = 0;
                                }
                                else {
                                  uVar13 = (**(code **)(*plVar15 + 0x110))(plVar15);
                                  lVar14 = FUN_144aff482(uVar13,pcVar36);
                                }
                                *(longlong *)(pcVar20 + 0x18) = lVar14;
                              }
                            }
                          }
                          cVar7 = (code)FUN_141864728(lVar14);
                          pcVar26[3] = cVar7;
                          iVar47 = *(int *)((longlong)plVar29 + 0x7c);
                          if (((byte)pcVar26[2] & 1) != 0) goto LAB_141341bbf;
                        }
                        else {
                          pcVar26[3] = (code)0x1;
                          iVar47 = *(int *)((longlong)plVar29 + 0x7c);
LAB_141341bbf:
                          iVar47 = iVar47 + -1000;
                        }
                        *(int *)(pcVar26 + 200) = iVar47;
                        local_518 = (undefined2 *)0x0;
                        FUN_14410b2c4(plVar29,&local_518);
                        puVar48 = local_518;
                        if (local_518 != (undefined2 *)0x0) {
                          uVar13 = FUN_1400d7050(local_5e8);
                          bVar8 = FUN_14125be1e(uVar13,puVar48);
                          pcVar26[0x109] = (code)(bVar8 ^ 1);
                        }
                        if (*(char *)((longlong)plVar29 + 0x79) == '\x01') {
                          (**(code **)(*plVar29 + 0x70))(plVar29,pcVar26 + 0x38);
                          pcVar26[0x48] = (code)0x1;
                        }
                        else {
                          FUN_143c95112(plVar29,&local_438);
                          puVar21 = uStack_420;
                          *(code **)(pcVar26 + 0x60) = local_438;
                          *(int *)(pcVar26 + 0x68) = (int)uStack_430;
                          *(int *)(pcVar26 + 0x6c) = uStack_430._4_4_;
                          *(undefined4 *)(pcVar26 + 0x70) = (undefined4)local_428;
                          *(uint *)(pcVar26 + 0x74) = local_428._4_4_;
                          iVar47 = (int)uStack_418;
                          lVar12 = (longlong)(int)uStack_418;
                          *(int *)(pcVar26 + 0x80) = (int)uStack_418;
                          if ((int)uStack_418 == 0 && *(int *)(pcVar26 + 0x84) == 0) {
                            *(undefined4 *)(pcVar26 + 0x84) = 0;
                          }
                          else {
                            FUN_1446dd670(pcVar26 + 0x78,uStack_418 & 0xffffffff);
                            if (iVar47 != 0) {
                              memcpy(*(void **)(pcVar26 + 0x78),puVar21,lVar12 * 2);
                            }
                          }
                          if (uStack_420 != (undefined8 *)0x0) {
                            FUN_1400020a8();
                          }
                        }
                        FUN_1409e39de(plVar29,&local_438);
                        bVar52 = true;
                        if (((int)local_438 != 0) && (local_438._4_4_ != 0)) {
                          bVar52 = (int)local_438 == DAT_14c948000;
                        }
                        if (uStack_420 != (undefined8 *)0x0) {
                          FUN_1400020a8();
                        }
                        if (bVar52) {
                          puVar35 = (undefined4 *)plVar29[1];
                          if (puVar35 == (undefined4 *)0x0) {
                            puVar35 = &DAT_14c9485f0;
                          }
                          if ((int)puVar35[1] < 2 && (int)puVar35[9] < 1) {
                            puVar22 = puVar35 + 2;
                          }
                          else {
                            puVar22 = *(undefined4 **)(puVar35 + 6);
                          }
                          FUN_144928d62(&local_468,2,puVar22 + (longlong)(puVar35[1] + -1) * 3);
                        }
                        else {
                          FUN_1409e39de(plVar29,&local_438);
                          puVar21 = &uStack_430;
                          if (1 < local_438._4_4_) {
                            puVar21 = uStack_420;
                          }
                          if (0 < uStack_418._4_4_) {
                            puVar21 = uStack_420;
                          }
                          FUN_144928d62(&local_468,2,
                                        (longlong)puVar21 + (longlong)(local_438._4_4_ + -1) * 0xc);
                          if (uStack_420 != (undefined8 *)0x0) {
                            FUN_1400020a8();
                          }
                          FUN_1448d5e3c(&local_438,local_570);
                          lVar12 = *(longlong *)(local_438 + 0x640);
                          SRWLock = (PSRWLOCK)(lVar12 + 0x28);
                          AcquireSRWLockShared(SRWLock);
                          pcVar31 = uStack_430;
                          if (uStack_430 != (code *)0x0) {
                            LOCK();
                            pcVar36 = uStack_430 + 8;
                            *(int *)pcVar36 = *(int *)pcVar36 + -1;
                            UNLOCK();
                            if (*(int *)pcVar36 == 0) {
                              (*(code *)**(undefined8 **)uStack_430)(uStack_430);
                              LOCK();
                              pcVar36 = pcVar31 + 0xc;
                              *(int *)pcVar36 = *(int *)pcVar36 + -1;
                              UNLOCK();
                              if (*(int *)pcVar36 == 0) {
                                (**(code **)(*(longlong *)pcVar31 + 0x10))(pcVar31);
                              }
                            }
                          }
                          local_4c8 = 0;
                          uStack_4c0 = 0;
                          FUN_1400b2348(&local_468,&local_4c8,1);
                          cVar6 = FUN_140f8baa4(lVar12,&local_4c8);
                          if (cVar6 != '\0') {
                            puVar21 = &uStack_460;
                            if (1 < local_468._4_4_) {
                              puVar21 = local_450;
                            }
                            if (0 < uStack_448._4_4_) {
                              puVar21 = local_450;
                            }
                            FUN_1408226d0((longlong)puVar21 + (longlong)(local_468._4_4_ + -1) * 0xc
                                          ,&local_438,1);
                            pcVar31 = local_438;
                            iVar47 = (int)uStack_430;
                            uVar38 = (int)uStack_430 - 1;
                            if ((int)uStack_430 == 0) {
                              uVar38 = 0;
                            }
                            if (0 < (int)uVar38) {
                              uVar39 = 0;
                              do {
                                *(ushort *)(local_438 + uVar39 * 2) =
                                     (ushort)(*(ushort *)(local_438 + uVar39 * 2) - 0x41 < 0x1a) *
                                     0x20 + *(ushort *)(local_438 + uVar39 * 2);
                                uVar39 = uVar39 + 1;
                              } while (uVar38 != uVar39);
                            }
                            uVar9 = uStack_430._4_4_;
                            local_438 = (code *)0x0;
                            uStack_430 = (code *)0x0;
                            if (*(longlong *)(pcVar26 + 0xf8) == 0) {
                              *(code **)(pcVar26 + 0xf8) = pcVar31;
                              *(int *)(pcVar26 + 0x100) = iVar47;
                              *(undefined4 *)(pcVar26 + 0x104) = uVar9;
                            }
                            else {
                              FUN_1400020a8();
                              *(code **)(pcVar26 + 0xf8) = pcVar31;
                              *(int *)(pcVar26 + 0x100) = iVar47;
                              *(undefined4 *)(pcVar26 + 0x104) = uVar9;
                              if (local_438 != (code *)0x0) {
                                FUN_1400020a8();
                              }
                            }
                          }
                          ReleaseSRWLockShared(SRWLock);
                        }
                        FUN_1447715ec(pcVar26 + 0xd0,&local_468);
                        local_498 = (undefined8 *)*local_5d0;
                        FUN_1400021e4(&local_498,&local_438);
                        if (*(longlong *)(pcVar27 + 8) != 0) {
                          FUN_1400020a8();
                        }
                        ppcVar23 = local_610;
                        *(code **)(pcVar27 + 8) = local_438;
                        local_438 = (code *)0x0;
                        *(int *)(pcVar27 + 0x10) = (int)uStack_430;
                        *(int *)(pcVar27 + 0x14) = uStack_430._4_4_;
                        *(int *)(pcVar27 + 0x18) = (int)local_608;
                        if (local_610 == (code **)0x0) {
                          *(code **)(pcVar26 + 0x110) = pcVar27;
                          ppcVar30 = *(code ***)(pcVar26 + 0x118);
                          if (ppcVar30 != (code **)0x0) {
                            *(undefined8 *)(pcVar26 + 0x118) = 0;
LAB_141342047:
                            LOCK();
                            ppcVar23 = ppcVar30 + 1;
                            *(int *)ppcVar23 = *(int *)ppcVar23 + -1;
                            UNLOCK();
                            if (*(int *)ppcVar23 == 0) {
                              (**(code **)*ppcVar30)(ppcVar30);
                              LOCK();
                              pcVar31 = (code *)((longlong)ppcVar30 + 0xc);
                              *(int *)pcVar31 = *(int *)pcVar31 + -1;
                              iVar47 = *(int *)pcVar31;
                              UNLOCK();
joined_r0x000141342072:
                              if (iVar47 == 0) {
                                (**(code **)(*ppcVar30 + 0x10))(ppcVar30);
                              }
                            }
                          }
                        }
                        else {
                          LOCK();
                          *(int *)(local_610 + 1) = *(int *)(local_610 + 1) + 1;
                          UNLOCK();
                          *(code **)(pcVar26 + 0x110) = pcVar27;
                          ppcVar30 = *(code ***)(pcVar26 + 0x118);
                          if (local_610 == ppcVar30) {
                            LOCK();
                            ppcVar30 = local_610 + 1;
                            *(int *)ppcVar30 = *(int *)ppcVar30 + -1;
                            UNLOCK();
                            if (*(int *)ppcVar30 == 0) {
                              (**(code **)*local_610)(local_610);
                              LOCK();
                              pcVar31 = (code *)((longlong)ppcVar23 + 0xc);
                              *(int *)pcVar31 = *(int *)pcVar31 + -1;
                              iVar47 = *(int *)pcVar31;
                              UNLOCK();
                              ppcVar30 = ppcVar23;
                              goto joined_r0x000141342072;
                            }
                          }
                          else {
                            *(code ***)(pcVar26 + 0x118) = local_610;
                            if (ppcVar30 != (code **)0x0) goto LAB_141342047;
                          }
                        }
                        pcVar26[0x108] = (code)0x1;
                        if (pcVar26[2] == (code)0x0) {
                          plVar28 = (longlong *)FUN_1418645ea(plVar29);
                          plVar15 = (longlong *)*plVar28;
                          if (*(code **)(*plVar15 + 0x50) != FUN_144828418) {
                            plVar15 = (longlong *)(**(code **)(*plVar15 + 0x50))();
                          }
                          FUN_1447a1fc0(plVar15);
                          plVar28 = (longlong *)*plVar28;
                          pcVar31 = *(code **)(*plVar28 + 0x28);
                          if (pcVar31 == FUN_14482841c) {
                            ppcVar23 = (code **)(plVar28 + 3);
                            if (plVar28[5] != 0) {
                              ppcVar23 = (code **)(plVar28[5] + 8);
                            }
                          }
                          else if (pcVar31 == (code *)&LAB_14010c34c) {
                            ppcVar23 = (code **)(plVar28 + 2);
                          }
                          else {
                            ppcVar23 = (code **)(*pcVar31)(plVar28);
                          }
                          if (local_5f8 != ppcVar23) {
                            iVar47 = *(int *)(ppcVar23 + 1);
                            pcVar31 = *ppcVar23;
                            *(int *)(pcVar26 + 0x20) = iVar47;
                            if (iVar47 == 0 && *(int *)(pcVar26 + 0x24) == 0) {
                              *(undefined4 *)(pcVar26 + 0x24) = 0;
                            }
                            else {
                              FUN_1446dd670(local_5f8,iVar47);
                              if (iVar47 != 0) {
                                memcpy(*local_5f8,pcVar31,(longlong)iVar47 * 2);
                              }
                            }
                          }
                        }
                        uVar39 = uStack_4a0;
                        lVar12 = local_4a8;
                        local_4d8 = (code **)0x0;
                        uStack_4d0 = CONCAT44(uStack_4d0._4_4_,(int)uStack_4a0);
                        if ((int)uStack_4a0 == 0) {
                          uStack_4d0 = uStack_4a0 & 0xffffffff;
                        }
                        else {
                          FUN_14099a736(&local_4d8,uStack_4a0 & 0xffffffff,0);
                          FUN_14099a4c3(local_4d8,lVar12,uVar39 & 0xffffffff);
                        }
                        pcVar36 = local_5a8;
                        ppcVar23 = local_610;
                        pcVar31 = local_4d8[local_590 + 3];
                        local_5a8[(longlong)pcVar31] = *pcVar20;
                        lVar12 = *(longlong *)(pcVar20 + 8);
                        if (*(longlong *)(local_5a8 + (longlong)(pcVar31 + 8)) != lVar12) {
                          *(undefined8 *)(local_5a8 + (longlong)(pcVar31 + 0x18)) = 0;
                        }
                        *(longlong *)(local_5a8 + (longlong)(pcVar31 + 8)) = lVar12;
                        if (*(longlong *)(local_5a8 + (longlong)(pcVar31 + 0x10)) !=
                            *(longlong *)(pcVar20 + 0x10)) {
                          *(undefined8 *)(local_5a8 + (longlong)(pcVar31 + 0x18)) = 0;
                        }
                        uVar13 = FUN_14477b664();
                        uVar13 = FUN_14477b664(uVar13);
                        *(undefined8 *)(pcVar36 + (longlong)(pcVar31 + 0x10)) = uVar13;
                        *(undefined8 *)(pcVar36 + (longlong)(pcVar31 + 0x18)) =
                             *(undefined8 *)(pcVar20 + 0x18);
                        FUN_144983130(pcVar36 + (longlong)(pcVar31 + 0x20),local_618);
                        local_4e8 = local_4d8;
                        local_4e0 = (int)uStack_4d0;
                        FUN_1409e3b90(&local_438,&local_4e8);
                        FUN_1409e3c80(&local_438,pcVar27 + 0x78,0);
                        if (((char)plVar29[0xf] == '\0') &&
                           (*(char *)((longlong)plVar29 + 0x79) == '\0')) {
                          pcVar26[0x88] = (code)0x1;
                          local_4f8 = (void *)0x0;
                          local_4f0 = *(int *)(pcVar27 + 0x80);
                          lVar12 = (longlong)local_4f0;
                          pvVar3 = *(void **)(pcVar27 + 0x78);
                          if (lVar12 == 0) {
                            local_4ec = 0;
                          }
                          else {
                            FUN_1446dd670(&local_4f8,local_4f0,0);
                            memcpy(local_4f8,pvVar3,lVar12 * 2);
                          }
                          local_670 = &local_4f8;
                          local_678 = local_578;
                          FUN_14663c600(&local_498,local_5a0,pcVar26,local_318);
                          ppcVar23 = local_610;
                          iVar47 = *(int *)(local_5e0 + 0x160);
                          *(uint *)(local_5e0 + 0x160) = iVar47 + 1U;
                          if (*(uint *)(local_5e0 + 0x164) < iVar47 + 1U) {
                            FUN_14663d43c(local_598,iVar47);
                          }
                          lVar12 = *local_598;
                          lVar14 = (longlong)iVar47 * 0x30;
                          puVar35 = (undefined4 *)(lVar12 + 0x10 + lVar14);
                          *puVar35 = (undefined4)local_488;
                          puVar35[1] = local_488._4_4_;
                          puVar35[2] = uStack_480;
                          puVar35[3] = uStack_47c;
                          puVar35 = (undefined4 *)(lVar12 + lVar14);
                          *puVar35 = (undefined4)local_498;
                          puVar35[1] = local_498._4_4_;
                          puVar35[2] = (int)uStack_490;
                          puVar35[3] = uStack_490._4_4_;
                          *(undefined8 *)(lVar12 + 0x20 + lVar14) = 0;
                          *(undefined8 *)(lVar12 + 0x20 + lVar14) = local_478;
                          local_478 = 0;
                          *(undefined4 *)(lVar12 + 0x28 + lVar14) = (undefined4)local_470;
                          *(undefined4 *)(lVar12 + 0x2c + lVar14) = local_470._4_4_;
                          local_470 = 0;
                        }
                        FUN_141022a1a(&local_438);
                        FUN_14028f404(local_4d8,uStack_4d0 & 0xffffffff);
                        if (local_4d8 != (code **)0x0) {
                          FUN_1400020a8();
                        }
                      }
                      if (ppcVar23 != (code **)0x0) {
                        LOCK();
                        ppcVar30 = ppcVar23 + 1;
                        *(int *)ppcVar30 = *(int *)ppcVar30 + -1;
                        UNLOCK();
                        if (*(int *)ppcVar30 == 0) {
                          (**(code **)*ppcVar23)(ppcVar23);
                          LOCK();
                          pcVar31 = (code *)((longlong)ppcVar23 + 0xc);
                          *(int *)pcVar31 = *(int *)pcVar31 + -1;
                          UNLOCK();
                          if (*(int *)pcVar31 == 0) {
                            (**(code **)(*ppcVar23 + 0x10))(ppcVar23);
                          }
                        }
                      }
                      if (local_620 != (code **)0x0) {
                        LOCK();
                        ppcVar23 = local_620 + 1;
                        *(int *)ppcVar23 = *(int *)ppcVar23 + -1;
                        UNLOCK();
                        if (*(int *)ppcVar23 == 0) {
                          (**(code **)*local_620)(local_620);
                          LOCK();
                          pcVar31 = (code *)((longlong)local_620 + 0xc);
                          *(int *)pcVar31 = *(int *)pcVar31 + -1;
                          UNLOCK();
                          if (*(int *)pcVar31 == 0) {
                            (**(code **)(*local_620 + 0x10))();
                          }
                        }
                      }
                      pcVar20 = pcVar20 + 0x58;
                    } while (pcVar20 != local_600);
                    uVar39 = uStack_560 & 0xffffffff;
                  }
                  FUN_14028f43e(local_568,uVar39);
                  param_2 = local_5c8;
                  plVar15 = local_5b0;
                  plVar29 = local_5d0;
                  if (local_568 != (code *)0x0) {
                    FUN_1400020a8();
                    param_2 = local_5c8;
                    plVar15 = local_5b0;
                    plVar29 = local_5d0;
                  }
                }
                ppcVar23 = (code **)((longlong)local_608 + 1);
              } while ((longlong)ppcVar23 < (longlong)(int)plVar29[4]);
            }
            iVar47 = (int)local_5f0[1];
            *(uint *)(local_5f0 + 1) = iVar47 + 1U;
            if (*(uint *)((longlong)local_5f0 + 0xc) < iVar47 + 1U) {
              FUN_14663d4d0(local_5f0,iVar47);
            }
            FUN_145b2a7e4((longlong)iVar47 * 0xb0 + *local_5f0,&local_388);
            FUN_145da38f8(&local_388);
            lVar12 = local_5e0;
          }
        }
        local_5b8 = local_5b8 + 1;
      } while (local_5b8 < (int)uStack_4a0);
    }
    if (*param_2 == DAT_14cbcfbe8) {
      pcVar20 = (code *)FUN_1400d7050((longlong *)(lVar12 + 0x30));
      if (pcVar20 != (code *)0x0) {
        if (DAT_14cbadd90 == 0) {
          local_640 = &local_388;
          local_388 = FUN_141030f22;
          local_630 = FUN_14081d0ea;
          local_638 = &LAB_1459f2e4c;
          local_648 = &LAB_148c39de3;
          local_650 = &LAB_1457a9eb2;
          local_658 = &DAT_149e063b2;
          local_660 = 0;
          local_668 = 0x10000004;
          local_670 = (void **)CONCAT44(local_670._4_4_,0x10);
          local_678 = (code *)CONCAT44(local_678._4_4_,0x3de0);
          FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
        }
        if ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(pcVar20 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(pcVar20 + 0x10) + 0x30) +
             (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) {
          local_4d8 = (code **)0x0;
          uStack_4d0 = 0;
          local_5d8 = pcVar20;
          local_5d0 = (longlong *)(lVar12 + 0x30);
          FUN_14037d352(&local_4d8);
          if (0 < (int)uStack_4d0) {
            uVar39 = uStack_448 >> 0x20;
            uStack_448 = uStack_448 & 0xffffffff00000000;
            local_468 = 0;
            uStack_460 = 0;
            local_458 = 0;
            if ((int)uVar39 != 0) {
              FUN_1446dda88(&local_450,0);
            }
            FUN_1400021e4(local_5c8,&local_438);
            local_380 = uStack_430;
            uVar38 = (int)uStack_430 - 1;
            if ((int)uStack_430 == 0) {
              uVar38 = 0;
            }
            if (0 < (int)uVar38) {
              uVar39 = 0;
              do {
                *(ushort *)(local_438 + uVar39 * 2) =
                     (ushort)(*(ushort *)(local_438 + uVar39 * 2) - 0x41 < 0x1a) * 0x20 +
                     *(ushort *)(local_438 + uVar39 * 2);
                uVar39 = uVar39 + 1;
              } while (uVar38 != uVar39);
            }
            local_388 = local_438;
            local_438 = (code *)0x0;
            uStack_430 = (code *)0x0;
            FUN_14047a987(&local_388,"customization",0xd);
            iVar47 = (int)local_380 + -1;
            if ((int)local_380 == 0) {
              iVar47 = 0;
            }
            FUN_1446f82e2(&local_498,iVar47,local_388,1);
            FUN_1402b5374(&local_468,0,local_498);
            if (local_388 != (code *)0x0) {
              FUN_1400020a8();
            }
            if (local_438 != (code *)0x0) {
              FUN_1400020a8();
            }
            memset(&local_388,0,0xb0);
            FUN_1465f2b94(&local_388);
            local_438 = (code *)0x0;
            uStack_430 = (code *)0x0;
            local_428 = (code *)((ulonglong)local_428._4_4_ << 0x20);
            uStack_420 = (undefined8 *)0x0;
            uStack_418 = 0;
            FUN_1446ddda2(&local_438,"UIDisplayData_VehicleSelect",0);
            FUN_140ac6a88(&local_438,&local_388);
            if (uStack_420 != (undefined8 *)0x0) {
              FUN_1400020a8();
            }
            FUN_1400b22c2(&local_438,"coui://uiresources/_shared/assets/missing_icon.png");
            if (CONCAT44(uStack_374,local_378) != 0) {
              FUN_1400020a8();
            }
            local_378 = (int)local_438;
            uStack_374 = local_438._4_4_;
            iStack_370 = (int)uStack_430;
            uStack_36c = uStack_430._4_4_;
            uStack_490 = CONCAT44(uStack_490._4_4_,DAT_14cbd6230);
            local_498 = DAT_14cbd6228;
            FUN_1448075d0(&local_438);
            FUN_1404e49fa(local_368,&local_438);
            if (uStack_420 != (undefined8 *)0x0) {
              FUN_1400020a8();
            }
            FUN_1446f470e(&local_500,L"VehicleSelect",1);
            FUN_1402b5374(&local_468,1,local_500);
            FUN_1447715ec(local_310,&local_468);
            puVar21 = &uStack_460;
            if (1 < local_468._4_4_) {
              puVar21 = local_450;
            }
            if (0 < uStack_448._4_4_) {
              puVar21 = local_450;
            }
            FUN_1408226d0((longlong)puVar21 + (longlong)(local_468._4_4_ + -1) * 0xc,&local_438,1);
            pcVar20 = local_438;
            iVar47 = (int)uStack_430;
            uVar38 = (int)uStack_430 - 1;
            if ((int)uStack_430 == 0) {
              uVar38 = 0;
            }
            if (0 < (int)uVar38) {
              uVar39 = 0;
              do {
                *(ushort *)(local_438 + uVar39 * 2) =
                     (ushort)(*(ushort *)(local_438 + uVar39 * 2) - 0x41 < 0x1a) * 0x20 +
                     *(ushort *)(local_438 + uVar39 * 2);
                uVar39 = uVar39 + 1;
              } while (uVar38 != uVar39);
            }
            uVar9 = uStack_430._4_4_;
            local_438 = (code *)0x0;
            uStack_430 = (code *)0x0;
            if (local_2e8 == (code *)0x0) {
              local_2e8 = pcVar20;
              local_2e0 = iVar47;
              local_2dc = uVar9;
            }
            else {
              FUN_1400020a8();
              local_2e8 = pcVar20;
              local_2e0 = iVar47;
              local_2dc = uVar9;
              if (local_438 != (code *)0x0) {
                FUN_1400020a8();
              }
            }
            local_5e8 = (code **)(longlong)(int)uStack_4d0;
            if (local_5e8 != (code **)0x0) {
              local_608 = local_4d8;
              local_600 = local_5d8 + 0x3910;
              local_618 = (code **)(local_5e0 + 0x158);
              local_5e8 = (code **)((longlong)local_5e8 << 3);
              local_610 = (code **)0x0;
              do {
                pcVar20 = *(code **)((longlong)local_608 + (longlong)local_610);
                pcVar31 = (code *)FUN_14001cc68(0x120,0x10);
                *(undefined4 *)pcVar31 = 0x1000000;
                FUN_1400b22c2(pcVar31 + 8,&DAT_149e02088);
                local_5f8 = (code **)(pcVar31 + 0x18);
                FUN_1400b22c2(local_5f8,&DAT_149e02088);
                FUN_1400b22c2(pcVar31 + 0x28,&DAT_149e02088);
                pcVar31[0x48] = (code)0x0;
                FUN_1400b22c2(pcVar31 + 0x50,&DAT_149e02088);
                *(undefined4 *)(pcVar31 + 200) = 0;
                *(undefined8 *)(pcVar31 + 0x90) = 0;
                *(undefined8 *)(pcVar31 + 0x98) = 0;
                *(undefined8 *)(pcVar31 + 0xa8) = 0;
                *(undefined8 *)(pcVar31 + 0xb0) = 0;
                *(undefined8 *)(pcVar31 + 0xb4) = 0;
                *(undefined8 *)(pcVar31 + 0xbc) = 0;
                *(undefined8 *)(pcVar31 + 0xd0) = 0;
                *(undefined8 *)(pcVar31 + 0xd8) = 0;
                *(undefined4 *)(pcVar31 + 0xe0) = 0;
                *(undefined8 *)(pcVar31 + 0xe8) = 0;
                *(undefined8 *)(pcVar31 + 0xf0) = 0;
                *(undefined8 *)(pcVar31 + 0x60) = 0;
                *(undefined8 *)(pcVar31 + 0x68) = 0;
                *(undefined8 *)(pcVar31 + 0x70) = 0;
                *(undefined8 *)(pcVar31 + 0x78) = 0;
                *(undefined8 *)(pcVar31 + 0x79) = 0;
                *(undefined8 *)(pcVar31 + 0x81) = 0;
                FUN_1400b22c2(pcVar31 + 0xf8,&DAT_149e02088);
                pcVar31[0x109] = (code)0x0;
                *(undefined8 *)(pcVar31 + 0x110) = 0;
                *(undefined8 *)(pcVar31 + 0x118) = 0;
                local_620 = (code **)FUN_14001cc68(0x18,0x10);
                local_620[1] = (code *)&DAT_100000001;
                *local_620 = (code *)&PTR_FUN_14b9ab580;
                local_620[2] = pcVar31;
                puVar21 = (undefined8 *)FUN_14001cc68(0x20,0x10);
                *puVar21 = &PTR_FUN_14b9a7d80;
                puVar21[1] = 0;
                puVar21[2] = 0;
                puVar21[3] = 0;
                plVar29 = (longlong *)FUN_14001cc68(0x18,0x10);
                plVar29[1] = (longlong)&DAT_100000001;
                *plVar29 = (longlong)&PTR_FUN_14b9ab5c0;
                plVar29[2] = (longlong)puVar21;
                pcVar31[0x108] = (code)0x5;
                FUN_140a9b590(local_600,&local_438,1);
                if (uStack_430 == (code *)0x0) {
                  uVar13 = FUN_14037df6e();
                  uStack_430 = (code *)FUN_14477b664(uVar13);
                }
                pcVar26 = local_428;
                if (local_428 == (code *)0x0) {
                  if (uStack_430 == (code *)0x0) {
LAB_1413435af:
                    pcVar26 = (code *)0x0;
                  }
                  else {
                    pcVar26 = (code *)0x0;
                    if (local_438 != (code *)0x0) {
                      plVar15 = *(longlong **)(uStack_430 + 0xb8);
                      if ((plVar15 == (longlong *)0x0) ||
                         (cVar6 = (**(code **)(*plVar15 + 0x108))(), cVar6 == '\0'))
                      goto LAB_1413435af;
                      uVar13 = (**(code **)(*plVar15 + 0x110))(plVar15);
                      pcVar26 = (code *)FUN_144aff482(uVar13,&local_438);
                    }
                  }
                }
                *pcVar31 = (code)(pcVar26 == pcVar20);
                pcVar31[1] = (code)(pcVar26 == pcVar20);
                lVar12 = FUN_148e297d4(pcVar20);
                if (lVar12 == 0) {
                  puVar35 = *(undefined4 **)(pcVar20 + 8);
                  if (puVar35 == (undefined4 *)0x0) {
                    puVar35 = &DAT_14c9485f0;
                  }
                  local_518 = (undefined2 *)0x0;
                  uStack_510 = 0;
                  FUN_1400b2348(puVar35,&local_518,1);
                  puVar48 = &DAT_149dfb77a;
                  if ((int)uStack_510 != 0) {
                    puVar48 = local_518;
                  }
                  FUN_140002266(&local_438,L"%s (Display data missing)",puVar48);
                }
                else {
                  plVar15 = *(longlong **)(lVar12 + 0x18);
                  if (*(code **)(*plVar15 + 0x50) != FUN_144828418) {
                    plVar15 = (longlong *)(**(code **)(*plVar15 + 0x50))();
                  }
                  FUN_1447a1fc0(plVar15);
                  plVar15 = *(longlong **)(lVar12 + 0x18);
                  pcVar26 = *(code **)(*plVar15 + 0x28);
                  if (pcVar26 == FUN_14482841c) {
                    plVar28 = plVar15 + 3;
                    if (plVar15[5] != 0) {
                      plVar28 = (longlong *)(plVar15[5] + 8);
                    }
                  }
                  else if (pcVar26 == (code *)&LAB_14010c34c) {
                    plVar28 = plVar15 + 2;
                  }
                  else {
                    plVar28 = (longlong *)(*pcVar26)(plVar15);
                  }
                  local_438 = (code *)0x0;
                  uVar38 = *(uint *)(plVar28 + 1);
                  pvVar3 = (void *)*plVar28;
                  uStack_430 = (code *)CONCAT44(uStack_430._4_4_,uVar38);
                  if ((longlong)(int)uVar38 == 0) {
                    uStack_430 = (code *)(ulonglong)uVar38;
                  }
                  else {
                    FUN_1446dd670(&local_438,uVar38,0);
                    memcpy(local_438,pvVar3,(longlong)(int)uVar38 * 2);
                  }
                }
                iVar47 = (int)uStack_430 + -1;
                if ((int)uStack_430 == 0) {
                  iVar47 = 0;
                }
                FUN_1402980a2(pcVar31 + 8,local_438,iVar47);
                if (local_438 != (code *)0x0) {
                  FUN_1400020a8();
                }
                if (lVar12 == 0) {
                  if (local_518 != (undefined2 *)0x0) {
                    FUN_1400020a8();
                  }
                  local_428 = (code *)0x0;
                  uStack_420 = (undefined8 *)0x0;
                  local_438 = (code *)0x0;
                  uStack_430 = (code *)0x0;
                  uStack_418 = 0;
                  iVar47 = 0;
                }
                else {
                  local_438 = *(code **)(lVar12 + 0x28);
                  uStack_430 = *(code **)(lVar12 + 0x30);
                  local_428 = *(code **)(lVar12 + 0x38);
                  uStack_420 = (undefined8 *)0x0;
                  uVar38 = *(uint *)(lVar12 + 0x48);
                  pvVar3 = *(void **)(lVar12 + 0x40);
                  uStack_418 = CONCAT44(uStack_418._4_4_,uVar38);
                  if ((longlong)(int)uVar38 == 0) {
                    uStack_418 = (ulonglong)uVar38;
                    iVar47 = 0;
                  }
                  else {
                    FUN_1446dd670(&uStack_420,uVar38,0);
                    memcpy(uStack_420,pvVar3,(longlong)(int)uVar38 * 2);
                    iVar47 = (int)uStack_418;
                  }
                }
                _Src = uStack_420;
                *(code **)(pcVar31 + 0x60) = local_438;
                *(int *)(pcVar31 + 0x68) = (int)uStack_430;
                *(int *)(pcVar31 + 0x6c) = uStack_430._4_4_;
                *(undefined4 *)(pcVar31 + 0x70) = (undefined4)local_428;
                *(uint *)(pcVar31 + 0x74) = local_428._4_4_;
                *(int *)(pcVar31 + 0x80) = iVar47;
                if (iVar47 == 0 && *(int *)(pcVar31 + 0x84) == 0) {
                  *(undefined4 *)(pcVar31 + 0x84) = 0;
                }
                else {
                  FUN_1446dd670(pcVar31 + 0x78,iVar47);
                  if (iVar47 != 0) {
                    memcpy(*(void **)(pcVar31 + 0x78),_Src,(longlong)iVar47 * 2);
                  }
                }
                if (uStack_420 != (undefined8 *)0x0) {
                  FUN_1400020a8();
                }
                uVar9 = 0;
                if (lVar12 != 0) {
                  uVar9 = *(undefined4 *)(lVar12 + 0x50);
                }
                *(undefined4 *)(pcVar31 + 200) = uVar9;
                cVar7 = (code)FUN_14037567c(pcVar20,local_5c0);
                pcVar31[2] = cVar7;
                if (cVar7 == (code)0x0) {
                  FUN_148e29908(pcVar20,&local_438);
                  pcVar26 = local_438;
                  if (*(code **)(*(longlong *)local_438 + 0x50) != FUN_144828418) {
                    pcVar26 = (code *)(**(code **)(*(longlong *)local_438 + 0x50))();
                  }
                  FUN_1447a1fc0(pcVar26);
                  pcVar26 = *(code **)(*(longlong *)local_438 + 0x28);
                  if (pcVar26 == FUN_14482841c) {
                    ppcVar23 = (code **)(local_438 + 0x18);
                    if (*(longlong *)(local_438 + 0x28) != 0) {
                      ppcVar23 = (code **)(*(longlong *)(local_438 + 0x28) + 8);
                    }
                  }
                  else if (pcVar26 == (code *)&LAB_14010c34c) {
                    ppcVar23 = (code **)(local_438 + 0x10);
                  }
                  else {
                    ppcVar23 = (code **)(*pcVar26)(local_438);
                  }
                  if (local_5f8 != ppcVar23) {
                    iVar47 = *(int *)(ppcVar23 + 1);
                    pcVar26 = *ppcVar23;
                    *(int *)(pcVar31 + 0x20) = iVar47;
                    if (iVar47 == 0 && *(int *)(pcVar31 + 0x24) == 0) {
                      *(undefined4 *)(pcVar31 + 0x24) = 0;
                    }
                    else {
                      FUN_1446dd670(local_5f8,iVar47);
                      if (iVar47 != 0) {
                        memcpy(*local_5f8,pcVar26,(longlong)iVar47 * 2);
                      }
                    }
                  }
                  if (local_438 != (code *)0x0) {
                    (**(code **)(*(longlong *)local_438 + 0x10))();
                  }
                }
                else {
                  *(int *)(pcVar31 + 200) = *(int *)(pcVar31 + 200) + -1000;
                }
                if (puVar21[2] == 0) {
                  uVar13 = FUN_14037df6e();
                  uVar13 = FUN_14477b664(uVar13);
                  puVar21[2] = uVar13;
                }
                lVar12 = FUN_14037df6e();
                uVar13 = FUN_14037df6e();
                FUN_1402d1bfa(&local_438,uVar13,pcVar20);
                if ((code *)puVar21[1] != local_438) {
                  puVar21[3] = 0;
                }
                puVar21[1] = local_438;
                lVar14 = FUN_14037df6e();
                if (lVar12 == 0) {
LAB_1413439e1:
                  lVar14 = lVar12;
                }
                else if (lVar14 == 0) {
                  lVar14 = 0;
                }
                else if ((*(int *)(lVar14 + 0x38) <= *(int *)(lVar12 + 0x38)) &&
                        (*(longlong *)
                          (*(longlong *)(lVar12 + 0x30) + (longlong)*(int *)(lVar14 + 0x38) * 8) ==
                         lVar14 + 0x30)) goto LAB_1413439e1;
                if (puVar21[2] != lVar14) {
                  puVar21[3] = 0;
                }
                uVar13 = FUN_14477b664(lVar14);
                lVar12 = FUN_14477b664(uVar13);
                puVar21[2] = lVar12;
                if ((lVar12 != 0) && (puVar21[1] != 0)) {
                  puVar21[3] = pcVar20;
                }
                if (plVar29 == (longlong *)0x0) {
                  *(undefined8 **)(pcVar31 + 0x110) = puVar21;
                  plVar15 = *(longlong **)(pcVar31 + 0x118);
                  if (plVar15 != (longlong *)0x0) {
                    *(undefined8 *)(pcVar31 + 0x118) = 0;
LAB_141343a77:
                    LOCK();
                    plVar28 = plVar15 + 1;
                    *(int *)plVar28 = (int)*plVar28 + -1;
                    UNLOCK();
                    if ((int)*plVar28 == 0) {
                      (**(code **)*plVar15)(plVar15);
                      LOCK();
                      piVar1 = (int *)((longlong)plVar15 + 0xc);
                      *piVar1 = *piVar1 + -1;
                      iVar47 = *piVar1;
                      UNLOCK();
joined_r0x000141343a67:
                      if (iVar47 == 0) {
                        (**(code **)(*plVar15 + 0x10))(plVar15);
                      }
                    }
                  }
                }
                else {
                  LOCK();
                  *(int *)(plVar29 + 1) = (int)plVar29[1] + 1;
                  UNLOCK();
                  *(undefined8 **)(pcVar31 + 0x110) = puVar21;
                  plVar15 = *(longlong **)(pcVar31 + 0x118);
                  if (plVar29 == plVar15) {
                    LOCK();
                    plVar15 = plVar29 + 1;
                    *(int *)plVar15 = (int)*plVar15 + -1;
                    UNLOCK();
                    if ((int)*plVar15 == 0) {
                      (**(code **)*plVar29)(plVar29);
                      LOCK();
                      piVar1 = (int *)((longlong)plVar29 + 0xc);
                      *piVar1 = *piVar1 + -1;
                      iVar47 = *piVar1;
                      UNLOCK();
                      plVar15 = plVar29;
                      goto joined_r0x000141343a67;
                    }
                  }
                  else {
                    *(longlong **)(pcVar31 + 0x118) = plVar29;
                    if (plVar15 != (longlong *)0x0) goto LAB_141343a77;
                  }
                }
                local_538 = (code **)0x0;
                FUN_14410b2c4(pcVar20,&local_538);
                ppcVar23 = local_538;
                if (local_538 != (code **)0x0) {
                  uVar13 = FUN_1400d7050(local_5d0);
                  bVar8 = FUN_14125be1e(uVar13,ppcVar23);
                  pcVar31[0x109] = (code)(bVar8 ^ 1);
                }
                FUN_14131c9ee(local_588,&local_498,&DAT_14cbcfbe8);
                puVar21 = local_498;
                if (uStack_490._4_4_ == -1) {
                  uStack_560 = 0;
LAB_141343b44:
                  local_568 = (code *)0x0;
                  pcVar31[0x88] = (code)0x1;
                  local_520 = 0;
LAB_141343b62:
                  local_528 = (void *)0x0;
                  local_51c = 0;
                }
                else {
                  local_568 = (code *)0x0;
                  lVar12 = (longlong)(int)uStack_490;
                  uStack_560 = CONCAT44(uStack_560._4_4_,(int)uStack_490);
                  if (lVar12 == 0) {
                    uStack_560 = uStack_490 & 0xffffffff;
                    goto LAB_141343b44;
                  }
                  FUN_1446dd670(&local_568,uStack_490 & 0xffffffff,0);
                  memcpy(local_568,puVar21,lVar12 * 2);
                  pcVar26 = local_568;
                  local_520 = (int)(float)uStack_560;
                  lVar12 = (longlong)(int)(float)uStack_560;
                  pcVar31[0x88] = (code)0x1;
                  local_528 = (void *)0x0;
                  if (lVar12 == 0) goto LAB_141343b62;
                  FUN_1446dd670(&local_528,uStack_560 & 0xffffffff,0);
                  memcpy(local_528,pcVar26,lVar12 * 2);
                }
                local_670 = &local_528;
                local_678 = pcVar20;
                FUN_14663c600(&local_438,local_5a0,pcVar31,local_318);
                iVar47 = *(int *)(local_5e0 + 0x160);
                *(uint *)(local_5e0 + 0x160) = iVar47 + 1U;
                if (*(uint *)(local_5e0 + 0x164) < iVar47 + 1U) {
                  FUN_14663d43c(local_618,iVar47);
                }
                pcVar27 = *local_618;
                lVar12 = (longlong)iVar47 * 0x30;
                pcVar26 = pcVar27 + lVar12 + 0x10;
                *(undefined4 *)pcVar26 = (undefined4)local_428;
                *(uint *)(pcVar26 + 4) = local_428._4_4_;
                *(undefined4 *)(pcVar26 + 8) = (undefined4)uStack_420;
                *(undefined4 *)(pcVar26 + 0xc) = uStack_420._4_4_;
                pcVar26 = pcVar27 + lVar12;
                *(int *)pcVar26 = (int)local_438;
                *(int *)(pcVar26 + 4) = local_438._4_4_;
                *(int *)(pcVar26 + 8) = (int)uStack_430;
                *(int *)(pcVar26 + 0xc) = uStack_430._4_4_;
                *(undefined8 *)(pcVar27 + lVar12 + 0x20) = 0;
                *(ulonglong *)(pcVar27 + lVar12 + 0x20) = uStack_418;
                *(int *)(pcVar27 + lVar12 + 0x28) = (int)uStack_410;
                *(undefined4 *)(pcVar27 + lVar12 + 0x2c) = uStack_410._4_4_;
                uStack_410 = (void *)0x0;
                uStack_418 = 0;
                if (local_568 != (code *)0x0) {
                  FUN_1400020a8();
                }
                if ((uStack_490._4_4_ != -1) && (local_498 != (undefined8 *)0x0)) {
                  FUN_1400020a8();
                }
                puVar35 = *(undefined4 **)(pcVar20 + 8);
                if (puVar35 == (undefined4 *)0x0) {
                  puVar35 = &DAT_14c9485f0;
                }
                if ((int)puVar35[1] < 2 && (int)puVar35[9] < 1) {
                  puVar22 = puVar35 + 2;
                }
                else {
                  puVar22 = *(undefined4 **)(puVar35 + 6);
                }
                FUN_144928d62(&local_468,2,puVar22 + (longlong)(puVar35[1] + -1) * 3);
                FUN_1447715ec(pcVar31 + 0xd0,&local_468);
                uVar38 = local_338;
                lVar12 = (longlong)(int)local_338;
                local_338 = local_338 + 1;
                if (local_334 < local_338) {
                  FUN_14663d3b6(&local_340,uVar38);
                }
                local_340[lVar12 * 2] = (longlong)pcVar31;
                local_340[lVar12 * 2 + 1] = (longlong)local_620;
                if (local_620 != (code **)0x0) {
                  LOCK();
                  *(int *)(local_620 + 1) = *(int *)(local_620 + 1) + 1;
                  UNLOCK();
                }
                if (plVar29 != (longlong *)0x0) {
                  LOCK();
                  plVar15 = plVar29 + 1;
                  *(int *)plVar15 = (int)*plVar15 + -1;
                  UNLOCK();
                  if ((int)*plVar15 == 0) {
                    (**(code **)*plVar29)(plVar29);
                    LOCK();
                    piVar1 = (int *)((longlong)plVar29 + 0xc);
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (*piVar1 == 0) {
                      (**(code **)(*plVar29 + 0x10))(plVar29);
                    }
                  }
                }
                ppcVar23 = local_620;
                if (local_620 != (code **)0x0) {
                  LOCK();
                  ppcVar30 = local_620 + 1;
                  *(int *)ppcVar30 = *(int *)ppcVar30 + -1;
                  UNLOCK();
                  if (*(int *)ppcVar30 == 0) {
                    (**(code **)*local_620)(local_620);
                    LOCK();
                    pcVar20 = (code *)((longlong)ppcVar23 + 0xc);
                    *(int *)pcVar20 = *(int *)pcVar20 + -1;
                    UNLOCK();
                    if (*(int *)pcVar20 == 0) {
                      (**(code **)(*local_620 + 0x10))();
                    }
                  }
                }
                local_610 = local_610 + 1;
              } while (local_5e8 != local_610);
            }
            if (*(char *)(local_5e0 + 0x150) != '\0') {
              iVar47 = (int)local_5f0[1];
              *(uint *)(local_5f0 + 1) = iVar47 + 1U;
              if (*(uint *)((longlong)local_5f0 + 0xc) < iVar47 + 1U) {
                FUN_14663d4d0(local_5f0,iVar47);
              }
              FUN_145b2a7e4((longlong)iVar47 * 0xb0 + *local_5f0,&local_388);
            }
            FUN_145da38f8(&local_388);
          }
          local_538 = (code **)0x0;
          uStack_530 = 0;
          FUN_14037c58c(&local_538);
          FUN_1403750d6(&local_538);
          if (0 < (int)uStack_530) {
            uVar39 = uStack_448 >> 0x20;
            uStack_448 = uStack_448 & 0xffffffff00000000;
            local_468 = 0;
            uStack_460 = 0;
            local_458 = 0;
            if ((int)uVar39 != 0) {
              FUN_1446dda88(&local_450,0);
            }
            FUN_1400021e4(local_5c8,&local_438);
            local_380 = uStack_430;
            uVar38 = (int)uStack_430 - 1;
            if ((int)uStack_430 == 0) {
              uVar38 = 0;
            }
            if (0 < (int)uVar38) {
              uVar39 = 0;
              do {
                *(ushort *)(local_438 + uVar39 * 2) =
                     (ushort)(*(ushort *)(local_438 + uVar39 * 2) - 0x41 < 0x1a) * 0x20 +
                     *(ushort *)(local_438 + uVar39 * 2);
                uVar39 = uVar39 + 1;
              } while (uVar38 != uVar39);
            }
            local_388 = local_438;
            local_438 = (code *)0x0;
            uStack_430 = (code *)0x0;
            FUN_14047a987(&local_388,"customization",0xd);
            iVar47 = (int)local_380 + -1;
            if ((int)local_380 == 0) {
              iVar47 = 0;
            }
            FUN_1446f82e2(&local_498,iVar47,local_388,1);
            FUN_1402b5374(&local_468,0,local_498);
            if (local_388 != (code *)0x0) {
              FUN_1400020a8();
            }
            if (local_438 != (code *)0x0) {
              FUN_1400020a8();
            }
            memset(&local_388,0,0xb0);
            FUN_1465f2b94(&local_388);
            local_438 = (code *)0x0;
            uStack_430 = (code *)0x0;
            local_428 = (code *)((ulonglong)local_428 & 0xffffffff00000000);
            uStack_420 = (undefined8 *)0x0;
            uStack_418 = 0;
            FUN_1446ddda2(&local_438,"UIDisplayData_HoverDrive",0);
            FUN_140ac6a88(&local_438,&local_388);
            if (uStack_420 != (undefined8 *)0x0) {
              FUN_1400020a8();
            }
            FUN_1400b22c2(&local_438,"coui://uiresources/_shared/assets/missing_icon.png");
            if (CONCAT44(uStack_374,local_378) != 0) {
              FUN_1400020a8();
            }
            local_378 = (int)local_438;
            uStack_374 = local_438._4_4_;
            iStack_370 = (int)uStack_430;
            uStack_36c = uStack_430._4_4_;
            uStack_490 = CONCAT44(uStack_490._4_4_,DAT_14cbd6218);
            local_498 = DAT_14cbd6210;
            FUN_1448075d0(&local_438);
            FUN_1404e49fa(local_368,&local_438);
            if (uStack_420 != (undefined8 *)0x0) {
              FUN_1400020a8();
            }
            FUN_1446f470e(&local_540,L"HoverDrive",1);
            FUN_1402b5374(&local_468,1,local_540);
            FUN_1447715ec(local_310,&local_468);
            puVar21 = &uStack_460;
            if (1 < local_468._4_4_) {
              puVar21 = local_450;
            }
            if (0 < uStack_448._4_4_) {
              puVar21 = local_450;
            }
            FUN_1408226d0((longlong)puVar21 + (longlong)(local_468._4_4_ + -1) * 0xc,&local_438,1);
            pcVar20 = local_438;
            iVar47 = (int)uStack_430;
            uVar38 = (int)uStack_430 - 1;
            if ((int)uStack_430 == 0) {
              uVar38 = 0;
            }
            if (0 < (int)uVar38) {
              uVar39 = 0;
              do {
                *(ushort *)(local_438 + uVar39 * 2) =
                     (ushort)(*(ushort *)(local_438 + uVar39 * 2) - 0x41 < 0x1a) * 0x20 +
                     *(ushort *)(local_438 + uVar39 * 2);
                uVar39 = uVar39 + 1;
              } while (uVar38 != uVar39);
            }
            uVar9 = uStack_430._4_4_;
            local_438 = (code *)0x0;
            uStack_430 = (code *)0x0;
            if (local_2e8 == (code *)0x0) {
              local_2e8 = pcVar20;
              local_2e0 = iVar47;
              local_2dc = uVar9;
            }
            else {
              FUN_1400020a8();
              local_2e8 = pcVar20;
              local_2e0 = iVar47;
              local_2dc = uVar9;
              if (local_438 != (code *)0x0) {
                FUN_1400020a8();
              }
            }
            if ((longlong)(int)uStack_530 != 0) {
              local_608 = local_538 + (int)uStack_530;
              local_5a8 = local_5d8 + 0x3910;
              local_600 = (code *)0x0;
              ppcVar23 = local_538;
              do {
                pcVar20 = *ppcVar23;
                uStack_490 = 0;
                local_498 = *(undefined8 **)(pcVar20 + 0x78);
                local_488 = 0;
                uVar13 = FUN_14477b664(*(longlong *)(pcVar20 + 0x80));
                uStack_490 = FUN_14477b664(uVar13);
                local_488 = *(longlong *)(pcVar20 + 0x88);
                if (uStack_490 == 0) {
                  uVar13 = FUN_1465beb80();
                  uStack_490 = FUN_14477b664(uVar13);
                }
                if (local_488 == 0) {
                  local_488 = 0;
                  if ((((uStack_490 != 0) && (local_498 != (undefined8 *)0x0)) &&
                      (plVar29 = *(longlong **)(uStack_490 + 0xb8), plVar29 != (longlong *)0x0)) &&
                     (cVar6 = (**(code **)(*plVar29 + 0x108))(plVar29), cVar6 != '\0')) {
                    uVar13 = (**(code **)(*plVar29 + 0x110))(plVar29);
                    local_488 = FUN_144aff482(uVar13);
                    if (local_488 != 0) goto LAB_141343f43;
                  }
                }
                else {
LAB_141343f43:
                  lVar12 = local_488;
                  local_620 = ppcVar23;
                  if ((longlong)(int)local_338 != 0) {
                    lVar14 = *(longlong *)(pcVar20 + 0x4c);
                    lVar49 = (longlong)(int)local_338 << 4;
                    plVar29 = local_340;
                    do {
                      lVar24 = *plVar29;
                      plVar15 = (longlong *)plVar29[1];
                      if (plVar15 != (longlong *)0x0) {
                        LOCK();
                        *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
                        UNLOCK();
                      }
                      plVar28 = *(longlong **)(lVar24 + 0x110);
                      if (plVar28 == (longlong *)0x0) {
                        bVar52 = false;
                      }
                      else {
                        lVar24 = (**(code **)(*plVar28 + 8))(plVar28);
                        lVar25 = FUN_1465f1b62();
                        if (((lVar25 == 0) || (*(int *)(lVar24 + 0x38) < *(int *)(lVar25 + 0x38)))
                           || (*(longlong *)
                                (*(longlong *)(lVar24 + 0x30) +
                                (longlong)*(int *)(lVar25 + 0x38) * 8) != lVar25 + 0x30)) {
                          bVar52 = false;
                        }
                        else {
                          bVar52 = plVar28[1] == lVar14;
                        }
                      }
                      if (plVar15 != (longlong *)0x0) {
                        LOCK();
                        plVar28 = plVar15 + 1;
                        *(int *)plVar28 = (int)*plVar28 + -1;
                        UNLOCK();
                        if ((int)*plVar28 == 0) {
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
                      if (bVar52) {
                        ppcVar23 = local_620;
                        if (plVar29 != (longlong *)0x0) goto LAB_141345122;
                        break;
                      }
                      plVar29 = plVar29 + 2;
                      lVar49 = lVar49 + -0x10;
                    } while (lVar49 != 0);
                  }
                  pcVar26 = (code *)FUN_14001cc68(0x120,0x10);
                  *(undefined4 *)pcVar26 = 0x1000000;
                  pcVar31 = pcVar26 + 8;
                  FUN_1400b22c2(pcVar31,&DAT_149e02088);
                  local_618 = (code **)(pcVar26 + 0x18);
                  FUN_1400b22c2(local_618,&DAT_149e02088);
                  FUN_1400b22c2(pcVar26 + 0x28,&DAT_149e02088);
                  pcVar26[0x48] = (code)0x0;
                  FUN_1400b22c2(pcVar26 + 0x50,&DAT_149e02088);
                  *(undefined4 *)(pcVar26 + 200) = 0;
                  *(undefined8 *)(pcVar26 + 0x90) = 0;
                  *(undefined8 *)(pcVar26 + 0x98) = 0;
                  *(undefined8 *)(pcVar26 + 0xa8) = 0;
                  *(undefined8 *)(pcVar26 + 0xb0) = 0;
                  *(undefined8 *)(pcVar26 + 0xb4) = 0;
                  *(undefined8 *)(pcVar26 + 0xbc) = 0;
                  *(undefined8 *)(pcVar26 + 0xd0) = 0;
                  *(undefined8 *)(pcVar26 + 0xd8) = 0;
                  *(undefined4 *)(pcVar26 + 0xe0) = 0;
                  *(undefined8 *)(pcVar26 + 0xe8) = 0;
                  *(undefined8 *)(pcVar26 + 0xf0) = 0;
                  *(undefined8 *)(pcVar26 + 0x60) = 0;
                  *(undefined8 *)(pcVar26 + 0x68) = 0;
                  *(undefined8 *)(pcVar26 + 0x70) = 0;
                  *(undefined8 *)(pcVar26 + 0x78) = 0;
                  *(undefined8 *)(pcVar26 + 0x79) = 0;
                  *(undefined8 *)(pcVar26 + 0x81) = 0;
                  FUN_1400b22c2(pcVar26 + 0xf8,&DAT_149e02088);
                  *(undefined2 *)(pcVar26 + 0x108) = 0;
                  *(undefined8 *)(pcVar26 + 0x110) = 0;
                  *(undefined8 *)(pcVar26 + 0x118) = 0;
                  local_610 = (code **)FUN_14001cc68(0x18,0x10);
                  local_610[1] = (code *)&DAT_100000001;
                  *local_610 = (code *)&PTR_FUN_14b9ab580;
                  local_610[2] = pcVar26;
                  pcVar27 = (code *)FUN_14001cc68(0x60,0x10);
                  *(undefined ***)pcVar27 = &PTR_FUN_14b9a7d90;
                  *(undefined8 *)(pcVar27 + 8) = 0;
                  *(undefined4 *)(pcVar27 + 0x10) = 1;
                  local_5e8 = (code **)(pcVar27 + 0x18);
                  FUN_1400b22c2(local_5e8,"DESIGNER: ADD DESCRIPTION");
                  if ((*(int *)(*(longlong *)
                                 ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                               0x110) < DAT_14c844850) &&
                     (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1)) {
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
                  plVar29 = DAT_14c844840;
                  *(longlong **)(pcVar27 + 0x28) = DAT_14c844840;
                  if (plVar29 != (longlong *)0x0) {
                    if (*(code **)(*plVar29 + 8) == FUN_144907e24) {
                      LOCK();
                      *(int *)(plVar29 + 1) = (int)plVar29[1] + 1;
                      UNLOCK();
                    }
                    else {
                      (**(code **)(*plVar29 + 8))();
                    }
                  }
                  *(undefined4 *)(pcVar27 + 0x30) = 0;
                  *(undefined8 *)(pcVar27 + 0x38) = 0;
                  *(undefined8 *)(pcVar27 + 0x40) = 0;
                  *(undefined8 *)(pcVar27 + 0x48) = 0;
                  *(undefined8 *)(pcVar27 + 0x50) = 0;
                  *(undefined8 *)(pcVar27 + 0x58) = 0;
                  local_5f8 = (code **)FUN_14001cc68(0x18,0x10);
                  local_5f8[1] = (code *)&DAT_100000001;
                  *local_5f8 = (code *)&PTR_FUN_14b9ab5e0;
                  local_5f8[2] = pcVar27;
                  pcVar26[0x108] = (code)0x3;
                  FUN_1411cf6d8(local_5a8,&local_438,0);
                  if (uStack_430 == (code *)0x0) {
                    uVar13 = FUN_140aff5aa();
                    uStack_430 = (code *)FUN_14477b664(uVar13);
                  }
                  pcVar36 = local_428;
                  if (local_428 == (code *)0x0) {
                    if (uStack_430 == (code *)0x0) {
                      pcVar36 = (code *)0x0;
                    }
                    else {
                      pcVar36 = (code *)0x0;
                      if (local_438 != (code *)0x0) {
                        plVar29 = *(longlong **)(uStack_430 + 0xb8);
                        if ((plVar29 == (longlong *)0x0) ||
                           (cVar6 = (**(code **)(*plVar29 + 0x108))(), cVar6 == '\0')) {
                          pcVar36 = (code *)0x0;
                        }
                        else {
                          uVar13 = (**(code **)(*plVar29 + 0x110))(plVar29);
                          pcVar36 = (code *)FUN_144aff482(uVar13,&local_438);
                        }
                      }
                    }
                  }
                  *pcVar26 = (code)(pcVar36 == pcVar20);
                  pcVar26[1] = (code)(pcVar36 == pcVar20);
                  plVar29 = *(longlong **)(lVar12 + 0x18);
                  if (*(code **)(*plVar29 + 0x50) != FUN_144828418) {
                    plVar29 = (longlong *)(**(code **)(*plVar29 + 0x50))();
                  }
                  FUN_1447a1fc0(plVar29);
                  plVar29 = *(longlong **)(lVar12 + 0x18);
                  pcVar36 = *(code **)(*plVar29 + 0x28);
                  if (pcVar36 == FUN_14482841c) {
                    pcVar36 = (code *)(plVar29 + 3);
                    if (plVar29[5] != 0) {
                      pcVar36 = (code *)(plVar29[5] + 8);
                    }
                  }
                  else if (pcVar36 == (code *)&LAB_14010c34c) {
                    pcVar36 = (code *)(plVar29 + 2);
                  }
                  else {
                    pcVar36 = (code *)(*pcVar36)(plVar29);
                  }
                  if (pcVar31 != pcVar36) {
                    iVar47 = *(int *)(pcVar36 + 8);
                    pvVar3 = *(void **)pcVar36;
                    *(int *)(pcVar26 + 0x10) = iVar47;
                    if (iVar47 == 0 && *(int *)(pcVar26 + 0x14) == 0) {
                      *(undefined4 *)(pcVar26 + 0x14) = 0;
                    }
                    else {
                      FUN_1446dd670(pcVar31,iVar47);
                      if (iVar47 != 0) {
                        memcpy(*(void **)pcVar31,pvVar3,(longlong)iVar47 * 2);
                      }
                    }
                  }
                  pcVar31 = pcVar26 + 0x78;
                  cVar7 = (code)FUN_1403754a4(pcVar20,local_5c0);
                  pcVar26[2] = cVar7;
                  *(undefined4 *)(pcVar26 + 200) = *(undefined4 *)(lVar12 + 0x70);
                  *(undefined8 *)(pcVar26 + 0x60) = *(undefined8 *)(lVar12 + 0x28);
                  uVar9 = *(undefined4 *)(lVar12 + 0x34);
                  uVar4 = *(undefined4 *)(lVar12 + 0x38);
                  uVar5 = *(undefined4 *)(lVar12 + 0x3c);
                  *(undefined4 *)(pcVar26 + 0x68) = *(undefined4 *)(lVar12 + 0x30);
                  *(undefined4 *)(pcVar26 + 0x6c) = uVar9;
                  *(undefined4 *)(pcVar26 + 0x70) = uVar4;
                  *(undefined4 *)(pcVar26 + 0x74) = uVar5;
                  if (pcVar31 != (code *)(lVar12 + 0x40)) {
                    iVar47 = *(int *)(lVar12 + 0x48);
                    pvVar3 = *(void **)(lVar12 + 0x40);
                    *(int *)(pcVar26 + 0x80) = iVar47;
                    if (iVar47 == 0 && *(int *)(pcVar26 + 0x84) == 0) {
                      *(undefined4 *)(pcVar26 + 0x84) = 0;
                    }
                    else {
                      FUN_1446dd670(pcVar31,iVar47);
                      if (iVar47 != 0) {
                        memcpy(*(void **)pcVar31,pvVar3,(longlong)iVar47 * 2);
                      }
                    }
                  }
                  if (pcVar26[2] == (code)0x1) {
                    *(int *)(pcVar26 + 200) = *(int *)(pcVar26 + 200) + -1000;
                  }
                  local_548 = 0;
                  FUN_14410b2c4(pcVar20,&local_548);
                  lVar14 = local_548;
                  if (local_548 != 0) {
                    uVar13 = FUN_1400d7050(local_5d0);
                    bVar8 = FUN_14125be1e(uVar13,lVar14);
                    pcVar26[0x109] = (code)(bVar8 ^ 1);
                  }
                  FUN_1402b5374(&local_468,2,*(undefined8 *)(pcVar20 + 0x4c));
                  FUN_1447715ec(pcVar26 + 0xd0,&local_468);
                  pcVar31 = pcVar20 + 0x30;
                  if (local_5d8[0xd68] != (code)0x0) {
                    pcVar31 = pcVar20 + 0x18;
                  }
                  lVar14 = *(longlong *)(pcVar31 + 8);
                  if (lVar14 == 0) {
                    uVar13 = FUN_1406ef318();
                    lVar14 = FUN_14477b664(uVar13);
                    *(longlong *)(pcVar31 + 8) = lVar14;
                  }
                  lVar49 = *(longlong *)(pcVar31 + 0x10);
                  if (lVar49 == 0) {
                    if ((lVar14 != 0) && (*(longlong *)pcVar31 != 0)) {
                      plVar29 = *(longlong **)(lVar14 + 0xb8);
                      if ((plVar29 != (longlong *)0x0) &&
                         (cVar6 = (**(code **)(*plVar29 + 0x108))(plVar29), cVar6 != '\0')) {
                        uVar13 = (**(code **)(*plVar29 + 0x110))(plVar29);
                        lVar49 = FUN_144aff482(uVar13,pcVar31);
                        *(longlong *)(pcVar31 + 0x10) = lVar49;
                        if (lVar49 != 0) goto LAB_14134456f;
                        uVar46 = SUB81(local_600,0);
                        goto LAB_1413447ad;
                      }
                      *(longlong *)(pcVar31 + 0x10) = 0;
                    }
LAB_14134479f:
                    uVar46 = SUB81(local_600,0);
                  }
                  else {
LAB_14134456f:
                    local_568 = *(code **)(pcVar20 + 0x4c);
                    FUN_1400021e4(&local_568,&local_438);
                    pcVar31 = local_438;
                    iVar47 = (int)uStack_430;
                    uVar38 = (int)uStack_430 - 1;
                    if ((int)uStack_430 == 0) {
                      uVar38 = 0;
                    }
                    if (0 < (int)uVar38) {
                      uVar39 = 0;
                      do {
                        *(ushort *)(local_438 + uVar39 * 2) =
                             (ushort)(*(ushort *)(local_438 + uVar39 * 2) - 0x41 < 0x1a) * 0x20 +
                             *(ushort *)(local_438 + uVar39 * 2);
                        uVar39 = uVar39 + 1;
                      } while (uVar38 != uVar39);
                    }
                    uVar9 = uStack_430._4_4_;
                    local_438 = (code *)0x0;
                    uStack_430 = (code *)0x0;
                    if (*(longlong *)(pcVar26 + 0xf8) == 0) {
                      *(code **)(pcVar26 + 0xf8) = pcVar31;
                      *(int *)(pcVar26 + 0x100) = iVar47;
                      *(undefined4 *)(pcVar26 + 0x104) = uVar9;
                    }
                    else {
                      FUN_1400020a8();
                      *(code **)(pcVar26 + 0xf8) = pcVar31;
                      *(int *)(pcVar26 + 0x100) = iVar47;
                      *(undefined4 *)(pcVar26 + 0x104) = uVar9;
                      if (local_438 != (code *)0x0) {
                        FUN_1400020a8();
                      }
                    }
                    uVar46 = 1;
                    if (pcVar26[2] == (code)0x0) {
                      plVar29 = *(longlong **)(lVar49 + 0x30);
                      if (*(code **)(*plVar29 + 0x50) != FUN_144828418) {
                        plVar29 = (longlong *)(**(code **)(*plVar29 + 0x50))();
                      }
                      FUN_1447a1fc0(plVar29);
                      plVar29 = *(longlong **)(lVar49 + 0x30);
                      pcVar31 = *(code **)(*plVar29 + 0x28);
                      if (pcVar31 == FUN_14482841c) {
                        pcVar31 = (code *)(plVar29 + 3);
                        if (plVar29[5] != 0) {
                          pcVar31 = (code *)(plVar29[5] + 8);
                        }
                      }
                      else if (pcVar31 == (code *)&LAB_14010c34c) {
                        pcVar31 = (code *)(plVar29 + 2);
                      }
                      else {
                        pcVar31 = (code *)(*pcVar31)(plVar29);
                      }
                      if (local_618 != (code **)pcVar31) {
                        iVar47 = *(int *)(pcVar31 + 8);
                        pvVar3 = *(void **)pcVar31;
                        *(int *)(pcVar26 + 0x20) = iVar47;
                        if (iVar47 == 0 && *(int *)(pcVar26 + 0x24) == 0) {
                          *(undefined4 *)(pcVar26 + 0x24) = 0;
                        }
                        else {
                          FUN_1446dd670(local_618,iVar47);
                          if (iVar47 != 0) {
                            memcpy(*local_618,pvVar3,(longlong)iVar47 * 2);
                          }
                        }
                      }
                      goto LAB_14134479f;
                    }
                  }
LAB_1413447ad:
                  *(undefined8 *)(pcVar27 + 8) = *(undefined8 *)(pcVar20 + 0x4c);
                  *(undefined4 *)(pcVar27 + 0x10) = *(undefined4 *)(pcVar20 + 0x54);
                  plVar29 = *(longlong **)(lVar12 + 0x50);
                  local_618 = (code **)CONCAT71(local_618._1_7_,uVar46);
                  if (*(code **)(*plVar29 + 0x50) != FUN_144828418) {
                    plVar29 = (longlong *)(**(code **)(*plVar29 + 0x50))();
                  }
                  ppcVar23 = local_5e8;
                  FUN_1447a1fc0(plVar29);
                  plVar29 = *(longlong **)(lVar12 + 0x50);
                  pcVar31 = *(code **)(*plVar29 + 0x28);
                  if (pcVar31 == FUN_14482841c) {
                    ppcVar30 = (code **)(plVar29 + 3);
                    if (plVar29[5] != 0) {
                      ppcVar30 = (code **)(plVar29[5] + 8);
                    }
                  }
                  else if (pcVar31 == (code *)&LAB_14010c34c) {
                    ppcVar30 = (code **)(plVar29 + 2);
                  }
                  else {
                    ppcVar30 = (code **)(*pcVar31)(plVar29);
                  }
                  if (ppcVar23 != ppcVar30) {
                    iVar47 = *(int *)(ppcVar30 + 1);
                    pcVar31 = *ppcVar30;
                    *(int *)(pcVar27 + 0x20) = iVar47;
                    if (iVar47 == 0 && *(int *)(pcVar27 + 0x24) == 0) {
                      *(undefined4 *)(pcVar27 + 0x24) = 0;
                    }
                    else {
                      FUN_1446dd670(ppcVar23,iVar47);
                      if (iVar47 != 0) {
                        memcpy(*ppcVar23,pcVar31,(longlong)iVar47 * 2);
                      }
                    }
                  }
                  plVar29 = *(longlong **)(lVar12 + 0x60);
                  plVar15 = *(longlong **)(pcVar27 + 0x28);
                  if (plVar15 != plVar29) {
                    *(longlong **)(pcVar27 + 0x28) = plVar29;
                    if (plVar29 != (longlong *)0x0) {
                      (**(code **)(*plVar29 + 8))();
                    }
                    if (plVar15 != (longlong *)0x0) {
                      (**(code **)(*plVar15 + 0x10))(plVar15);
                    }
                  }
                  *(undefined4 *)(pcVar27 + 0x30) = *(undefined4 *)(lVar12 + 0x68);
                  if (*(longlong *)(pcVar27 + 0x50) == 0) {
                    uVar13 = FUN_140aff5aa();
                    uVar13 = FUN_14477b664(uVar13);
                    *(undefined8 *)(pcVar27 + 0x50) = uVar13;
                  }
                  lVar12 = FUN_140aff5aa();
                  FUN_140aff5aa();
                  FUN_1402d1bfa(&local_438);
                  if (*(code **)(pcVar27 + 0x48) != local_438) {
                    *(undefined8 *)(pcVar27 + 0x58) = 0;
                  }
                  *(code **)(pcVar27 + 0x48) = local_438;
                  lVar14 = FUN_140aff5aa();
                  if (lVar12 == 0) {
LAB_141344921:
                    lVar14 = lVar12;
                  }
                  else if (lVar14 == 0) {
                    lVar14 = 0;
                  }
                  else if ((*(int *)(lVar14 + 0x38) <= *(int *)(lVar12 + 0x38)) &&
                          (*(longlong *)
                            (*(longlong *)(lVar12 + 0x30) + (longlong)*(int *)(lVar14 + 0x38) * 8)
                           == lVar14 + 0x30)) goto LAB_141344921;
                  if (*(longlong *)(pcVar27 + 0x50) != lVar14) {
                    *(undefined8 *)(pcVar27 + 0x58) = 0;
                  }
                  uVar13 = FUN_14477b664(lVar14);
                  lVar12 = FUN_14477b664(uVar13);
                  *(longlong *)(pcVar27 + 0x50) = lVar12;
                  if ((lVar12 != 0) && (*(longlong *)(pcVar27 + 0x48) != 0)) {
                    *(code **)(pcVar27 + 0x58) = pcVar20;
                  }
                  if ((longlong)*(int *)(pcVar20 + 0x60) != 0) {
                    plVar29 = *(longlong **)(pcVar20 + 0x58);
                    lVar12 = (longlong)*(int *)(pcVar20 + 0x60) * 0x18;
                    do {
                      lVar14 = plVar29[1];
                      if (lVar14 == 0) {
                        uVar13 = FUN_1418c557a();
                        lVar14 = FUN_14477b664(uVar13);
                        plVar29[1] = lVar14;
                      }
                      lVar49 = plVar29[2];
                      if (lVar49 == 0) {
                        if ((lVar14 != 0) && (*plVar29 != 0)) {
                          plVar15 = *(longlong **)(lVar14 + 0xb8);
                          if ((plVar15 == (longlong *)0x0) ||
                             (cVar6 = (**(code **)(*plVar15 + 0x108))(plVar15), cVar6 == '\0')) {
                            plVar29[2] = 0;
                          }
                          else {
                            uVar13 = (**(code **)(*plVar15 + 0x110))(plVar15);
                            lVar49 = FUN_144aff482(uVar13);
                            plVar29[2] = lVar49;
                            if (lVar49 != 0) {
                              lVar14 = plVar29[1];
                              goto LAB_14134499d;
                            }
                          }
                        }
                      }
                      else {
LAB_14134499d:
                        if (lVar14 == 0) {
                          uVar13 = FUN_1418c557a();
                          lVar14 = FUN_14477b664(uVar13);
                          plVar29[1] = lVar14;
                          lVar49 = plVar29[2];
                          if (lVar49 == 0) {
                            if (lVar14 == 0) {
                              lVar49 = 0;
                            }
                            else {
                              lVar49 = 0;
                              if (*plVar29 != 0) {
                                plVar15 = *(longlong **)(lVar14 + 0xb8);
                                if ((plVar15 == (longlong *)0x0) ||
                                   (cVar6 = (**(code **)(*plVar15 + 0x108))(plVar15), cVar6 == '\0')
                                   ) {
                                  lVar49 = 0;
                                }
                                else {
                                  uVar13 = (**(code **)(*plVar15 + 0x110))(plVar15);
                                  lVar49 = FUN_144aff482(uVar13);
                                }
                                plVar29[2] = lVar49;
                              }
                            }
                          }
                        }
                        uStack_560 = 0;
                        local_568 = *(code **)(lVar49 + 0x28);
                        local_558 = 0;
                        uVar13 = FUN_14477b664(*(undefined8 *)(lVar49 + 0x30));
                        uStack_560 = FUN_14477b664(uVar13);
                        local_558 = *(longlong *)(lVar49 + 0x38);
                        if (uStack_560 == 0) {
                          uVar13 = FUN_1465beaea();
                          uStack_560 = FUN_14477b664(uVar13);
                        }
                        if (local_558 == 0) {
                          local_558 = 0;
                          if ((((uStack_560 != 0) && (local_568 != (code *)0x0)) &&
                              (plVar15 = *(longlong **)(uStack_560 + 0xb8),
                              plVar15 != (longlong *)0x0)) &&
                             (cVar6 = (**(code **)(*plVar15 + 0x108))(plVar15), cVar6 != '\0')) {
                            uVar13 = (**(code **)(*plVar15 + 0x110))(plVar15);
                            local_558 = FUN_144aff482(uVar13);
                            if (local_558 != 0) goto LAB_141344ad7;
                          }
                        }
                        else {
LAB_141344ad7:
                          lVar14 = local_558;
                          if (uStack_560 == 0) {
                            uVar13 = FUN_1465beaea();
                            uStack_560 = FUN_14477b664(uVar13);
                            lVar14 = local_558;
                            if (local_558 == 0) {
                              if (uStack_560 == 0) {
                                lVar14 = 0;
                              }
                              else {
                                lVar14 = 0;
                                if (local_568 != (code *)0x0) {
                                  plVar15 = *(longlong **)(uStack_560 + 0xb8);
                                  if ((plVar15 == (longlong *)0x0) ||
                                     (cVar6 = (**(code **)(*plVar15 + 0x108))(plVar15),
                                     cVar6 == '\0')) {
                                    lVar14 = 0;
                                    local_558 = lVar14;
                                  }
                                  else {
                                    uVar13 = (**(code **)(*plVar15 + 0x110))(plVar15);
                                    lVar14 = FUN_144aff482(uVar13);
                                    local_558 = lVar14;
                                  }
                                }
                              }
                            }
                          }
                          if (*(char *)(lVar14 + 0x28) == '\x01') {
                            FUN_1400b22c2(&local_438,&DAT_149e02088);
                            local_428 = (code *)0x0;
                            uStack_420 = (undefined8 *)0x0;
                            uStack_418 = 0;
                            uStack_410 = (void *)0x0;
                            local_408 = 0;
                            local_400 = 0xff;
                            if (uStack_560 == 0) {
                              uVar13 = FUN_1465beaea();
                              uStack_560 = FUN_14477b664(uVar13);
                            }
                            lVar14 = local_558;
                            if (local_558 == 0) {
                              if (uStack_560 == 0) {
                                lVar14 = 0;
                              }
                              else {
                                lVar14 = 0;
                                if (local_568 != (code *)0x0) {
                                  plVar15 = *(longlong **)(uStack_560 + 0xb8);
                                  if ((plVar15 == (longlong *)0x0) ||
                                     (cVar6 = (**(code **)(*plVar15 + 0x108))(plVar15),
                                     cVar6 == '\0')) {
                                    lVar14 = 0;
                                    local_558 = lVar14;
                                  }
                                  else {
                                    uVar13 = (**(code **)(*plVar15 + 0x110))(plVar15);
                                    lVar14 = FUN_144aff482(uVar13,&local_568);
                                    local_558 = lVar14;
                                  }
                                }
                              }
                            }
                            plVar15 = *(longlong **)(lVar14 + 0x18);
                            if (*(code **)(*plVar15 + 0x50) != FUN_144828418) {
                              plVar15 = (longlong *)(**(code **)(*plVar15 + 0x50))();
                            }
                            FUN_1447a1fc0(plVar15);
                            plVar15 = *(longlong **)(lVar14 + 0x18);
                            pcVar20 = *(code **)(*plVar15 + 0x28);
                            if (pcVar20 == FUN_14482841c) {
                              plVar28 = plVar15 + 3;
                              if (plVar15[5] != 0) {
                                plVar28 = (longlong *)(plVar15[5] + 8);
                              }
                            }
                            else if (pcVar20 == (code *)&LAB_14010c34c) {
                              plVar28 = plVar15 + 2;
                            }
                            else {
                              plVar28 = (longlong *)(*pcVar20)(plVar15);
                            }
                            if (&local_438 != plVar28) {
                              uVar38 = *(uint *)(plVar28 + 1);
                              pvVar3 = (void *)*plVar28;
                              uStack_430 = (code *)CONCAT44(uStack_430._4_4_,uVar38);
                              if (uVar38 == 0 && uStack_430._4_4_ == 0) {
                                uStack_430 = (code *)(ulonglong)uVar38;
                              }
                              else {
                                FUN_1446dd670(&local_438,uVar38);
                                if (uVar38 != 0) {
                                  memcpy(local_438,pvVar3,(longlong)(int)uVar38 * 2);
                                }
                              }
                            }
                            if (uStack_560 == 0) {
                              uVar13 = FUN_1465beaea();
                              uStack_560 = FUN_14477b664(uVar13);
                            }
                            lVar14 = local_558;
                            if (local_558 == 0) {
                              if (uStack_560 == 0) {
                                lVar14 = 0;
                              }
                              else {
                                lVar14 = 0;
                                if (local_568 != (code *)0x0) {
                                  plVar15 = *(longlong **)(uStack_560 + 0xb8);
                                  if ((plVar15 == (longlong *)0x0) ||
                                     (cVar6 = (**(code **)(*plVar15 + 0x108))(plVar15),
                                     cVar6 == '\0')) {
                                    lVar14 = 0;
                                    local_558 = lVar14;
                                  }
                                  else {
                                    uVar13 = (**(code **)(*plVar15 + 0x110))(plVar15);
                                    lVar14 = FUN_144aff482(uVar13,&local_568);
                                    local_558 = lVar14;
                                  }
                                }
                              }
                            }
                            local_428 = *(code **)(lVar14 + 0x30);
                            uStack_420 = *(undefined8 **)(lVar14 + 0x38);
                            uStack_418 = *(ulonglong *)(lVar14 + 0x40);
                            if (&uStack_410 != (undefined8 *)(lVar14 + 0x48)) {
                              uVar38 = *(uint *)(lVar14 + 0x50);
                              pvVar3 = *(void **)(lVar14 + 0x48);
                              local_408 = CONCAT44(local_408._4_4_,uVar38);
                              if (uVar38 == 0 && local_408._4_4_ == 0) {
                                local_408 = (ulonglong)uVar38;
                              }
                              else {
                                FUN_1446dd670(&uStack_410,uVar38);
                                if (uVar38 != 0) {
                                  memcpy(uStack_410,pvVar3,(longlong)(int)uVar38 * 2);
                                }
                              }
                            }
                            lVar14 = plVar29[1];
                            if (lVar14 == 0) {
                              uVar13 = FUN_1418c557a();
                              lVar14 = FUN_14477b664(uVar13);
                              plVar29[1] = lVar14;
                            }
                            lVar49 = plVar29[2];
                            if (lVar49 == 0) {
                              if (lVar14 == 0) {
                                lVar49 = 0;
                              }
                              else {
                                lVar49 = 0;
                                if (*plVar29 != 0) {
                                  plVar15 = *(longlong **)(lVar14 + 0xb8);
                                  if ((plVar15 == (longlong *)0x0) ||
                                     (cVar6 = (**(code **)(*plVar15 + 0x108))(), cVar6 == '\0')) {
                                    lVar49 = 0;
                                  }
                                  else {
                                    uVar13 = (**(code **)(*plVar15 + 0x110))(plVar15);
                                    lVar49 = FUN_144aff482(uVar13,plVar29);
                                  }
                                  plVar29[2] = lVar49;
                                }
                              }
                            }
                            local_400 = *(undefined1 *)(lVar49 + 0x40);
                            iVar47 = *(int *)(pcVar27 + 0x40);
                            *(uint *)(pcVar27 + 0x40) = iVar47 + 1U;
                            if (*(uint *)(pcVar27 + 0x44) < iVar47 + 1U) {
                              FUN_148e36b74(pcVar27 + 0x38,iVar47);
                            }
                            FUN_148e36abe((longlong)iVar47 * 0x40 + *(longlong *)(pcVar27 + 0x38));
                            if (uStack_410 != (void *)0x0) {
                              FUN_1400020a8();
                            }
                            if (local_438 != (code *)0x0) {
                              FUN_1400020a8();
                            }
                          }
                        }
                      }
                      plVar29 = plVar29 + 3;
                      lVar12 = lVar12 + -0x18;
                    } while (lVar12 != 0);
                  }
                  ppcVar30 = local_5f8;
                  ppcVar23 = local_610;
                  if (local_5f8 == (code **)0x0) {
                    *(code **)(pcVar26 + 0x110) = pcVar27;
                    ppcVar37 = *(code ***)(pcVar26 + 0x118);
                    if (ppcVar37 != (code **)0x0) {
                      *(undefined8 *)(pcVar26 + 0x118) = 0;
LAB_141345052:
                      LOCK();
                      ppcVar40 = ppcVar37 + 1;
                      *(int *)ppcVar40 = *(int *)ppcVar40 + -1;
                      UNLOCK();
                      if (*(int *)ppcVar40 == 0) {
                        (**(code **)*ppcVar37)(ppcVar37);
                        LOCK();
                        pcVar20 = (code *)((longlong)ppcVar37 + 0xc);
                        *(int *)pcVar20 = *(int *)pcVar20 + -1;
                        iVar47 = *(int *)pcVar20;
                        UNLOCK();
joined_r0x00014134507d:
                        if (iVar47 == 0) {
                          (**(code **)(*ppcVar37 + 0x10))(ppcVar37);
                        }
                      }
                    }
                  }
                  else {
                    LOCK();
                    *(int *)(local_5f8 + 1) = *(int *)(local_5f8 + 1) + 1;
                    UNLOCK();
                    *(code **)(pcVar26 + 0x110) = pcVar27;
                    ppcVar37 = *(code ***)(pcVar26 + 0x118);
                    if (local_5f8 == ppcVar37) {
                      LOCK();
                      ppcVar37 = local_5f8 + 1;
                      *(int *)ppcVar37 = *(int *)ppcVar37 + -1;
                      UNLOCK();
                      if (*(int *)ppcVar37 == 0) {
                        (**(code **)*local_5f8)(local_5f8);
                        LOCK();
                        pcVar20 = (code *)((longlong)ppcVar30 + 0xc);
                        *(int *)pcVar20 = *(int *)pcVar20 + -1;
                        iVar47 = *(int *)pcVar20;
                        UNLOCK();
                        ppcVar37 = ppcVar30;
                        goto joined_r0x00014134507d;
                      }
                    }
                    else {
                      *(code ***)(pcVar26 + 0x118) = local_5f8;
                      if (ppcVar37 != (code **)0x0) goto LAB_141345052;
                    }
                  }
                  lVar12 = (longlong)(int)local_338;
                  local_338 = local_338 + 1;
                  if (local_334 < local_338) {
                    FUN_14663d3b6(&local_340);
                  }
                  local_340[lVar12 * 2] = (longlong)pcVar26;
                  local_340[lVar12 * 2 + 1] = (longlong)ppcVar23;
                  if (ppcVar23 != (code **)0x0) {
                    LOCK();
                    *(int *)(ppcVar23 + 1) = *(int *)(ppcVar23 + 1) + 1;
                    UNLOCK();
                  }
                  plVar29 = local_340;
                  if (ppcVar30 != (code **)0x0) {
                    LOCK();
                    ppcVar37 = ppcVar30 + 1;
                    *(int *)ppcVar37 = *(int *)ppcVar37 + -1;
                    UNLOCK();
                    if (*(int *)ppcVar37 == 0) {
                      plVar29 = (longlong *)(**(code **)*ppcVar30)(ppcVar30);
                      LOCK();
                      pcVar20 = (code *)((longlong)ppcVar30 + 0xc);
                      *(int *)pcVar20 = *(int *)pcVar20 + -1;
                      UNLOCK();
                      if (*(int *)pcVar20 == 0) {
                        plVar29 = (longlong *)(**(code **)(*ppcVar30 + 0x10))(ppcVar30);
                      }
                    }
                  }
                  if (ppcVar23 != (code **)0x0) {
                    LOCK();
                    ppcVar30 = ppcVar23 + 1;
                    *(int *)ppcVar30 = *(int *)ppcVar30 + -1;
                    UNLOCK();
                    if (*(int *)ppcVar30 == 0) {
                      plVar29 = (longlong *)(**(code **)*ppcVar23)(ppcVar23);
                      LOCK();
                      pcVar20 = (code *)((longlong)ppcVar23 + 0xc);
                      *(int *)pcVar20 = *(int *)pcVar20 + -1;
                      UNLOCK();
                      if (*(int *)pcVar20 == 0) {
                        plVar29 = (longlong *)(**(code **)(*local_610 + 0x10))();
                      }
                    }
                  }
                  local_600 = (code *)CONCAT71((int7)((ulonglong)plVar29 >> 8),local_618._0_1_);
                  ppcVar23 = local_620;
                }
LAB_141345122:
                ppcVar23 = ppcVar23 + 1;
              } while (ppcVar23 != local_608);
              if (((ulonglong)local_600 & 1) != 0) {
                iVar47 = (int)local_5f0[1];
                *(uint *)(local_5f0 + 1) = iVar47 + 1U;
                if (*(uint *)((longlong)local_5f0 + 0xc) < iVar47 + 1U) {
                  FUN_14663d4d0(local_5f0,iVar47);
                }
                FUN_145b2a7e4((longlong)iVar47 * 0xb0 + *local_5f0);
              }
            }
            FUN_145da38f8(&local_388);
          }
          if (local_538 != (code **)0x0) {
            FUN_1400020a8();
          }
          if (local_4d8 != (code **)0x0) {
            FUN_1400020a8();
          }
          goto LAB_1413452b6;
        }
      }
    }
    else {
LAB_1413452b6:
      iVar47 = (int)local_5f0[1];
      if (1 < (longlong)iVar47) {
        pcVar20 = (code *)*local_5f0;
        memset(&local_378,0,0x2f0);
        local_380 = pcVar20 + ((longlong)iVar47 * 0x16 + -0x16) * 8;
        local_388 = pcVar20;
        fVar53 = logf((float)iVar47);
        local_378 = (int)(longlong)(fVar53 + fVar53);
        ppcVar23 = &local_388;
        do {
          ppcVar37 = (code **)*ppcVar23;
          ppcVar30 = (code **)ppcVar23[1];
          iVar47 = *(int *)(ppcVar23 + 2);
          iVar10 = (int)((ulonglong)((longlong)ppcVar30 - (longlong)ppcVar37) >> 4) * -0x45d1745d;
          uVar38 = iVar10 + 1;
          ppcVar40 = ppcVar37;
          ppcVar41 = ppcVar37;
          ppcVar51 = ppcVar30;
          local_618 = ppcVar23;
          if (iVar47 != 0) {
LAB_14134536a:
            if (8 < (int)uVar38) {
              local_620 = (code **)CONCAT44(local_620._4_4_,iVar47);
              local_610 = ppcVar51;
              local_5f8 = ppcVar37;
              memcpy(&local_438,ppcVar40 + (ulonglong)(uVar38 >> 1) * 0x16,0xb0);
              memcpy(ppcVar40 + (ulonglong)(uVar38 >> 1) * 0x16,ppcVar40,0xb0);
              memcpy(ppcVar40,&local_438,0xb0);
              ppcVar37 = ppcVar30 + 0x16;
              ppcVar41 = ppcVar40;
              do {
                ppcVar23 = ppcVar41 + 0x16;
                ppcVar51 = ppcVar41 + 0x16;
                do {
                  ppcVar41 = ppcVar51;
                  ppcVar45 = ppcVar23;
                  if (ppcVar30 < ppcVar41) break;
                  ppcVar23 = ppcVar45 + 0x16;
                  ppcVar51 = ppcVar41 + 0x16;
                } while (*(int *)(ppcVar41 + 0xb) * 1000 + *(int *)((longlong)ppcVar41 + 0x5c) <=
                         *(int *)(ppcVar40 + 0xb) * 1000 + *(int *)((longlong)ppcVar40 + 0x5c));
                ppcVar23 = ppcVar37 + -0x2c;
                do {
                  ppcVar44 = ppcVar37;
                  ppcVar51 = ppcVar23;
                  ppcVar37 = ppcVar44 + -0x16;
                  if (ppcVar37 <= ppcVar40) break;
                  ppcVar23 = ppcVar51 + -0x16;
                } while (*(int *)(ppcVar40 + 0xb) * 1000 + *(int *)((longlong)ppcVar40 + 0x5c) <=
                         *(int *)(ppcVar44 + -0xb) * 1000 + *(int *)((longlong)ppcVar44 + -0x54));
                if (ppcVar37 < ppcVar41) goto LAB_14134549c;
                memcpy(&local_438,ppcVar41,0xb0);
                memcpy(ppcVar41,ppcVar37,0xb0);
                memcpy(ppcVar37,&local_438,0xb0);
              } while( true );
            }
            for (; ppcVar23 = local_618, ppcVar37 = ppcVar40, ppcVar41 = ppcVar40,
                ppcVar40 < ppcVar30; ppcVar30 = ppcVar30 + -0x16) {
              while (ppcVar23 = ppcVar37, ppcVar37 = ppcVar41 + 0x16, ppcVar37 <= ppcVar30) {
                pcVar20 = (code *)((longlong)ppcVar41 + 0x10c);
                ppcVar41 = ppcVar37;
                if (*(int *)(ppcVar37 + 0xb) * 1000 + *(int *)pcVar20 <=
                    *(int *)(ppcVar23 + 0xb) * 1000 + *(int *)((longlong)ppcVar23 + 0x5c)) {
                  ppcVar37 = ppcVar23;
                }
              }
              memcpy(&local_438,ppcVar23,0xb0);
              memcpy(ppcVar23,ppcVar30,0xb0);
              memcpy(ppcVar30,&local_438,0xb0);
            }
            goto LAB_1413458e2;
          }
LAB_1413455a2:
          ppcVar23 = local_618;
          if (uVar38 != 0) {
            uVar11 = (iVar10 - (iVar10 + -1 >> 0x1f)) + -1 >> 1;
            do {
              ppcVar23 = (code **)(ulonglong)uVar11;
              local_620 = ppcVar23;
              while (uVar50 = uVar11 * 2 + 1, (int)uVar50 < (int)uVar38) {
                uVar32 = uVar11 * 2 + 2;
                uVar11 = uVar50;
                if (((int)uVar32 < (int)uVar38) &&
                   (*(int *)(ppcVar41 + (longlong)(int)uVar50 * 0x16 + 0xb) * 1000 +
                    *(int *)((longlong)ppcVar41 + (longlong)(int)uVar50 * 0xb0 + 0x5c) <=
                    *(int *)(ppcVar41 + (longlong)(int)uVar32 * 0x16 + 0xb) * 1000 +
                    *(int *)((longlong)ppcVar41 + (longlong)(int)uVar32 * 0xb0 + 0x5c))) {
                  uVar11 = uVar32;
                }
                lVar12 = (longlong)(int)ppcVar23;
                lVar14 = (longlong)(int)uVar11;
                if (*(int *)(ppcVar41 + lVar14 * 0x16 + 0xb) * 1000 +
                    *(int *)((longlong)ppcVar41 + lVar14 * 0xb0 + 0x5c) <=
                    *(int *)(ppcVar41 + lVar12 * 0x16 + 0xb) * 1000 +
                    *(int *)((longlong)ppcVar41 + lVar12 * 0xb0 + 0x5c)) break;
                memcpy(&local_438,ppcVar41 + lVar12 * 0x16,0xb0);
                memcpy(ppcVar41 + lVar12 * 0x16,ppcVar41 + lVar14 * 0x16,0xb0);
                memcpy(ppcVar41 + lVar14 * 0x16,&local_438,0xb0);
                ppcVar23 = (code **)(ulonglong)uVar11;
              }
              uVar11 = (int)local_620 - 1;
            } while ((int)local_620 != 0);
            ppcVar23 = local_618;
            if (1 < (int)uVar38) {
              memcpy(&local_438,ppcVar41,0xb0);
              memcpy(ppcVar41,ppcVar41 + ((ulonglong)uVar38 - 1) * 0x16,0xb0);
              memcpy(ppcVar41 + ((ulonglong)uVar38 - 1) * 0x16,&local_438,0xb0);
              ppcVar23 = local_618;
              uVar39 = (ulonglong)uVar38 - 1;
              if (uVar38 != 2) {
                do {
                  iVar47 = 0;
                  iVar34 = 1;
                  iVar10 = 0;
                  do {
                    lVar12 = (longlong)(iVar47 + 2);
                    iVar33 = iVar34;
                    if ((lVar12 < (longlong)uVar39) &&
                       (*(int *)(ppcVar41 + (longlong)iVar34 * 0x16 + 0xb) * 1000 +
                        *(int *)((longlong)ppcVar41 + (longlong)iVar34 * 0xb0 + 0x5c) <=
                        *(int *)(ppcVar41 + lVar12 * 0x16 + 0xb) * 1000 +
                        *(int *)((longlong)ppcVar41 + lVar12 * 0xb0 + 0x5c))) {
                      iVar33 = iVar47 + 2;
                    }
                    lVar12 = (longlong)iVar10;
                    lVar14 = (longlong)iVar33;
                    if (*(int *)(ppcVar41 + lVar14 * 0x16 + 0xb) * 1000 +
                        *(int *)((longlong)ppcVar41 + lVar14 * 0xb0 + 0x5c) <=
                        *(int *)(ppcVar41 + lVar12 * 0x16 + 0xb) * 1000 +
                        *(int *)((longlong)ppcVar41 + lVar12 * 0xb0 + 0x5c)) break;
                    memcpy(&local_438,ppcVar41 + lVar12 * 0x16,0xb0);
                    memcpy(ppcVar41 + lVar12 * 0x16,ppcVar41 + lVar14 * 0x16,0xb0);
                    memcpy(ppcVar41 + lVar14 * 0x16,&local_438,0xb0);
                    iVar47 = iVar33 * 2;
                    iVar34 = iVar33 * 2 + 1;
                    iVar10 = iVar33;
                  } while ((longlong)iVar34 < (longlong)uVar39);
                  memcpy(&local_438,ppcVar41,0xb0);
                  memcpy(ppcVar41,ppcVar41 + (uVar39 - 1) * 0x16,0xb0);
                  memcpy(ppcVar41 + (uVar39 - 1) * 0x16,&local_438,0xb0);
                  bVar52 = 2 < uVar39;
                  ppcVar23 = local_618;
                  uVar39 = uVar39 - 1;
                } while (bVar52);
              }
            }
          }
LAB_1413458e2:
          ppcVar23 = ppcVar23 + -3;
        } while (&local_388 <= ppcVar23);
        iVar47 = (int)local_5f0[1];
      }
      if (iVar47 != 0) {
        pcVar20 = (code *)*local_5f0;
        pcVar31 = pcVar20 + (longlong)iVar47 * 0xb0;
        local_5d8 = pcVar31;
        do {
          iVar47 = *(int *)(pcVar20 + 0x50);
          if (1 < (longlong)iVar47) {
            pcVar31 = *(code **)(pcVar20 + 0x48);
            local_600 = pcVar20;
            memset(&local_378,0,0x2f0);
            local_380 = pcVar31 + ((longlong)iVar47 * 2 + -2) * 8;
            local_388 = pcVar31;
            fVar53 = logf((float)iVar47);
            local_378 = (int)(longlong)(fVar53 + fVar53);
            ppcVar23 = &local_388;
            do {
              ppcVar37 = (code **)*ppcVar23;
              ppcVar30 = (code **)ppcVar23[1];
              iVar47 = (int)((ulonglong)((longlong)ppcVar30 - (longlong)ppcVar37) >> 4);
              uVar39 = (ulonglong)(iVar47 + 1);
              local_5f8 = (code **)CONCAT44(local_5f8._4_4_,*(int *)(ppcVar23 + 2));
              ppcVar41 = ppcVar30;
              ppcVar40 = ppcVar37;
              local_608 = ppcVar23;
              if (*(int *)(ppcVar23 + 2) != 0) {
LAB_1413459d1:
                if (8 < (int)(uint)uVar39) {
                  uVar39 = (ulonglong)((uint)uVar39 >> 1);
                  pcVar20 = ppcVar40[uVar39 * 2];
                  pcVar31 = (ppcVar40 + uVar39 * 2)[1];
                  pcVar26 = ppcVar40[1];
                  ppcVar40[uVar39 * 2] = *ppcVar40;
                  (ppcVar40 + uVar39 * 2)[1] = pcVar26;
                  local_438._0_4_ = (int)pcVar20;
                  local_438._4_4_ = (int)((ulonglong)pcVar20 >> 0x20);
                  uStack_430._0_4_ = (int)pcVar31;
                  uStack_430._4_4_ = (int)((ulonglong)pcVar31 >> 0x20);
                  *(int *)ppcVar40 = (int)local_438;
                  *(int *)((longlong)ppcVar40 + 4) = local_438._4_4_;
                  *(int *)(ppcVar40 + 1) = (int)uStack_430;
                  *(int *)((longlong)ppcVar40 + 0xc) = uStack_430._4_4_;
                  ppcVar51 = ppcVar30 + 2;
                  ppcVar45 = ppcVar40;
                  local_620 = ppcVar30;
                  local_618 = ppcVar41;
                  local_5e8 = ppcVar37;
                  local_438 = pcVar20;
                  uStack_430 = pcVar31;
                  do {
                    ppcVar23 = ppcVar45 + 2;
                    ppcVar30 = ppcVar45 + 2;
                    ppcVar37 = local_620;
                    do {
                      ppcVar45 = ppcVar30;
                      ppcVar41 = ppcVar23;
                      if (ppcVar37 < ppcVar45) break;
                      pcVar20 = *ppcVar45;
                      pcVar31 = ppcVar45[1];
                      if (pcVar31 != (code *)0x0) {
                        LOCK();
                        *(int *)(pcVar31 + 8) = *(int *)(pcVar31 + 8) + 1;
                        UNLOCK();
                      }
                      pcVar26 = *ppcVar40;
                      pcVar27 = ppcVar40[1];
                      if (pcVar27 == (code *)0x0) {
                        iVar47 = *(int *)(pcVar26 + 200);
                        iVar10 = *(int *)(pcVar20 + 200);
                      }
                      else {
                        LOCK();
                        *(int *)(pcVar27 + 8) = *(int *)(pcVar27 + 8) + 1;
                        UNLOCK();
                        iVar47 = *(int *)(pcVar26 + 200);
                        iVar10 = *(int *)(pcVar20 + 200);
                        LOCK();
                        pcVar20 = pcVar27 + 8;
                        *(int *)pcVar20 = *(int *)pcVar20 + -1;
                        UNLOCK();
                        if (*(int *)pcVar20 == 0) {
                          (*(code *)**(undefined8 **)pcVar27)(pcVar27);
                          LOCK();
                          pcVar20 = pcVar27 + 0xc;
                          *(int *)pcVar20 = *(int *)pcVar20 + -1;
                          UNLOCK();
                          ppcVar37 = local_620;
                          if (*(int *)pcVar20 == 0) {
                            (**(code **)(*(longlong *)pcVar27 + 0x10))(pcVar27);
                            ppcVar37 = local_620;
                          }
                        }
                      }
                      if (pcVar31 != (code *)0x0) {
                        LOCK();
                        pcVar20 = pcVar31 + 8;
                        *(int *)pcVar20 = *(int *)pcVar20 + -1;
                        UNLOCK();
                        if (*(int *)pcVar20 == 0) {
                          (*(code *)**(undefined8 **)pcVar31)(pcVar31);
                          LOCK();
                          pcVar20 = pcVar31 + 0xc;
                          *(int *)pcVar20 = *(int *)pcVar20 + -1;
                          UNLOCK();
                          ppcVar37 = local_620;
                          if (*(int *)pcVar20 == 0) {
                            (**(code **)(*(longlong *)pcVar31 + 0x10))(pcVar31);
                            ppcVar37 = local_620;
                          }
                        }
                      }
                      ppcVar23 = ppcVar41 + 2;
                      ppcVar30 = ppcVar45 + 2;
                    } while (iVar10 <= iVar47);
                    ppcVar23 = ppcVar51 + -4;
                    local_610 = ppcVar41;
                    do {
                      ppcVar30 = ppcVar51;
                      ppcVar41 = ppcVar23;
                      ppcVar51 = ppcVar30 + -2;
                      if (ppcVar51 <= ppcVar40) break;
                      pcVar20 = *ppcVar40;
                      pcVar31 = ppcVar40[1];
                      if (pcVar31 != (code *)0x0) {
                        LOCK();
                        *(int *)(pcVar31 + 8) = *(int *)(pcVar31 + 8) + 1;
                        UNLOCK();
                      }
                      pcVar26 = *ppcVar51;
                      pcVar27 = ppcVar30[-1];
                      if (pcVar27 == (code *)0x0) {
                        iVar47 = *(int *)(pcVar26 + 200);
                        iVar10 = *(int *)(pcVar20 + 200);
                      }
                      else {
                        LOCK();
                        *(int *)(pcVar27 + 8) = *(int *)(pcVar27 + 8) + 1;
                        UNLOCK();
                        iVar47 = *(int *)(pcVar26 + 200);
                        iVar10 = *(int *)(pcVar20 + 200);
                        LOCK();
                        pcVar20 = pcVar27 + 8;
                        *(int *)pcVar20 = *(int *)pcVar20 + -1;
                        UNLOCK();
                        if (*(int *)pcVar20 == 0) {
                          (*(code *)**(undefined8 **)pcVar27)(pcVar27);
                          LOCK();
                          pcVar20 = pcVar27 + 0xc;
                          *(int *)pcVar20 = *(int *)pcVar20 + -1;
                          UNLOCK();
                          if (*(int *)pcVar20 == 0) {
                            (**(code **)(*(longlong *)pcVar27 + 0x10))(pcVar27);
                          }
                        }
                      }
                      if (pcVar31 != (code *)0x0) {
                        LOCK();
                        pcVar20 = pcVar31 + 8;
                        *(int *)pcVar20 = *(int *)pcVar20 + -1;
                        UNLOCK();
                        if (*(int *)pcVar20 == 0) {
                          (*(code *)**(undefined8 **)pcVar31)(pcVar31);
                          LOCK();
                          pcVar20 = pcVar31 + 0xc;
                          *(int *)pcVar20 = *(int *)pcVar20 + -1;
                          UNLOCK();
                          if (*(int *)pcVar20 == 0) {
                            (**(code **)(*(longlong *)pcVar31 + 0x10))(pcVar31);
                          }
                        }
                      }
                      ppcVar23 = ppcVar41 + -2;
                    } while (iVar10 <= iVar47);
                    if (ppcVar51 < ppcVar45) goto LAB_141345bc1;
                    pcVar20 = *ppcVar45;
                    pcVar31 = ppcVar45[1];
                    pcVar26 = ppcVar30[-1];
                    *ppcVar45 = *ppcVar51;
                    ppcVar45[1] = pcVar26;
                    local_438._0_4_ = (int)pcVar20;
                    local_438._4_4_ = (int)((ulonglong)pcVar20 >> 0x20);
                    uStack_430._0_4_ = (int)pcVar31;
                    uStack_430._4_4_ = (int)((ulonglong)pcVar31 >> 0x20);
                    *(int *)ppcVar51 = (int)local_438;
                    *(int *)((longlong)ppcVar30 + -0xc) = local_438._4_4_;
                    *(int *)(ppcVar30 + -1) = (int)uStack_430;
                    *(int *)((longlong)ppcVar30 + -4) = uStack_430._4_4_;
                    local_438 = pcVar20;
                    uStack_430 = pcVar31;
                  } while( true );
                }
                ppcVar23 = local_608;
                if (ppcVar40 < ppcVar30) {
                  local_610 = ppcVar40 + 2;
                  ppcVar37 = ppcVar40;
                  ppcVar41 = local_610;
                  do {
                    for (; ppcVar41 <= ppcVar30; ppcVar41 = ppcVar41 + 2) {
                      pcVar20 = *ppcVar41;
                      pcVar31 = ppcVar41[1];
                      if (pcVar31 != (code *)0x0) {
                        LOCK();
                        *(int *)(pcVar31 + 8) = *(int *)(pcVar31 + 8) + 1;
                        UNLOCK();
                      }
                      pcVar26 = *ppcVar37;
                      pcVar27 = ppcVar37[1];
                      if (pcVar27 == (code *)0x0) {
                        iVar47 = *(int *)(pcVar26 + 200);
                        iVar10 = *(int *)(pcVar20 + 200);
                      }
                      else {
                        LOCK();
                        *(int *)(pcVar27 + 8) = *(int *)(pcVar27 + 8) + 1;
                        UNLOCK();
                        iVar47 = *(int *)(pcVar26 + 200);
                        iVar10 = *(int *)(pcVar20 + 200);
                        LOCK();
                        pcVar20 = pcVar27 + 8;
                        *(int *)pcVar20 = *(int *)pcVar20 + -1;
                        UNLOCK();
                        if (*(int *)pcVar20 == 0) {
                          (*(code *)**(undefined8 **)pcVar27)(pcVar27);
                          LOCK();
                          pcVar20 = pcVar27 + 0xc;
                          *(int *)pcVar20 = *(int *)pcVar20 + -1;
                          UNLOCK();
                          if (*(int *)pcVar20 == 0) {
                            (**(code **)(*(longlong *)pcVar27 + 0x10))(pcVar27);
                          }
                        }
                      }
                      if (pcVar31 != (code *)0x0) {
                        LOCK();
                        pcVar20 = pcVar31 + 8;
                        *(int *)pcVar20 = *(int *)pcVar20 + -1;
                        UNLOCK();
                        if (*(int *)pcVar20 == 0) {
                          (*(code *)**(undefined8 **)pcVar31)(pcVar31);
                          LOCK();
                          pcVar20 = pcVar31 + 0xc;
                          *(int *)pcVar20 = *(int *)pcVar20 + -1;
                          UNLOCK();
                          if (*(int *)pcVar20 == 0) {
                            (**(code **)(*(longlong *)pcVar31 + 0x10))(pcVar31);
                          }
                        }
                      }
                      ppcVar23 = ppcVar41;
                      if (iVar10 <= iVar47) {
                        ppcVar23 = ppcVar37;
                      }
                      ppcVar37 = ppcVar23;
                    }
                    pcVar20 = *ppcVar37;
                    pcVar31 = ppcVar37[1];
                    pcVar26 = ppcVar30[1];
                    *ppcVar37 = *ppcVar30;
                    ppcVar37[1] = pcVar26;
                    local_438._0_4_ = (int)pcVar20;
                    local_438._4_4_ = (int)((ulonglong)pcVar20 >> 0x20);
                    uStack_430._0_4_ = (int)pcVar31;
                    uStack_430._4_4_ = (int)((ulonglong)pcVar31 >> 0x20);
                    *(int *)ppcVar30 = (int)local_438;
                    *(int *)((longlong)ppcVar30 + 4) = local_438._4_4_;
                    *(int *)(ppcVar30 + 1) = (int)uStack_430;
                    *(int *)((longlong)ppcVar30 + 0xc) = uStack_430._4_4_;
                    ppcVar30 = ppcVar30 + -2;
                    ppcVar23 = local_608;
                    local_438 = pcVar20;
                    uStack_430 = pcVar31;
                    ppcVar37 = ppcVar40;
                    ppcVar41 = local_610;
                  } while (ppcVar40 < ppcVar30);
                }
                goto LAB_1413461a2;
              }
LAB_141345cc5:
              iVar10 = (int)uVar39;
              ppcVar23 = local_608;
              if (iVar10 != 0) {
                uVar38 = (iVar47 - (iVar47 + -1 >> 0x1f)) + -1 >> 1;
                local_620 = ppcVar40;
                do {
                  local_610 = (code **)(ulonglong)uVar38;
                  ppcVar23 = local_610;
                  while (uVar11 = uVar38 * 2 + 1, (int)uVar11 < iVar10) {
                    uVar50 = uVar38 * 2 + 2;
                    uVar38 = uVar11;
                    if ((int)uVar50 < iVar10) {
                      pcVar20 = ppcVar40[(longlong)(int)uVar11 * 2];
                      pcVar31 = ppcVar40[(longlong)(int)uVar11 * 2 + 1];
                      if (pcVar31 != (code *)0x0) {
                        LOCK();
                        *(int *)(pcVar31 + 8) = *(int *)(pcVar31 + 8) + 1;
                        UNLOCK();
                      }
                      pcVar26 = ppcVar40[(longlong)(int)uVar50 * 2];
                      pcVar27 = (ppcVar40 + (longlong)(int)uVar50 * 2)[1];
                      if (pcVar27 == (code *)0x0) {
                        iVar47 = *(int *)(pcVar26 + 200);
                        iVar34 = *(int *)(pcVar20 + 200);
                      }
                      else {
                        LOCK();
                        *(int *)(pcVar27 + 8) = *(int *)(pcVar27 + 8) + 1;
                        UNLOCK();
                        iVar47 = *(int *)(pcVar26 + 200);
                        iVar34 = *(int *)(pcVar20 + 200);
                        LOCK();
                        pcVar20 = pcVar27 + 8;
                        *(int *)pcVar20 = *(int *)pcVar20 + -1;
                        UNLOCK();
                        if (*(int *)pcVar20 == 0) {
                          (*(code *)**(undefined8 **)pcVar27)(pcVar27);
                          LOCK();
                          pcVar20 = pcVar27 + 0xc;
                          *(int *)pcVar20 = *(int *)pcVar20 + -1;
                          UNLOCK();
                          if (*(int *)pcVar20 == 0) {
                            (**(code **)(*(longlong *)pcVar27 + 0x10))(pcVar27);
                          }
                        }
                      }
                      if (pcVar31 != (code *)0x0) {
                        LOCK();
                        pcVar20 = pcVar31 + 8;
                        *(int *)pcVar20 = *(int *)pcVar20 + -1;
                        UNLOCK();
                        if (*(int *)pcVar20 == 0) {
                          (*(code *)**(undefined8 **)pcVar31)(pcVar31);
                          LOCK();
                          pcVar20 = pcVar31 + 0xc;
                          *(int *)pcVar20 = *(int *)pcVar20 + -1;
                          UNLOCK();
                          if (*(int *)pcVar20 == 0) {
                            (**(code **)(*(longlong *)pcVar31 + 0x10))(pcVar31);
                          }
                        }
                      }
                      ppcVar40 = local_620;
                      if (iVar34 <= iVar47) {
                        uVar38 = uVar50;
                      }
                    }
                    lVar12 = (longlong)(int)uVar38;
                    pcVar20 = ppcVar40[lVar12 * 2];
                    pcVar31 = ppcVar40[lVar12 * 2 + 1];
                    if (pcVar31 != (code *)0x0) {
                      LOCK();
                      *(int *)(pcVar31 + 8) = *(int *)(pcVar31 + 8) + 1;
                      UNLOCK();
                    }
                    ppcVar23 = ppcVar40 + (longlong)(int)ppcVar23 * 2;
                    pcVar26 = *ppcVar23;
                    pcVar27 = ppcVar23[1];
                    if (pcVar27 == (code *)0x0) {
                      iVar47 = *(int *)(pcVar26 + 200);
                      iVar34 = *(int *)(pcVar20 + 200);
                    }
                    else {
                      LOCK();
                      *(int *)(pcVar27 + 8) = *(int *)(pcVar27 + 8) + 1;
                      UNLOCK();
                      iVar47 = *(int *)(pcVar26 + 200);
                      iVar34 = *(int *)(pcVar20 + 200);
                      LOCK();
                      pcVar20 = pcVar27 + 8;
                      *(int *)pcVar20 = *(int *)pcVar20 + -1;
                      UNLOCK();
                      if (*(int *)pcVar20 == 0) {
                        (*(code *)**(undefined8 **)pcVar27)(pcVar27);
                        LOCK();
                        pcVar20 = pcVar27 + 0xc;
                        *(int *)pcVar20 = *(int *)pcVar20 + -1;
                        UNLOCK();
                        if (*(int *)pcVar20 == 0) {
                          (**(code **)(*(longlong *)pcVar27 + 0x10))(pcVar27);
                        }
                      }
                    }
                    if (pcVar31 != (code *)0x0) {
                      LOCK();
                      pcVar20 = pcVar31 + 8;
                      *(int *)pcVar20 = *(int *)pcVar20 + -1;
                      UNLOCK();
                      if (*(int *)pcVar20 == 0) {
                        (*(code *)**(undefined8 **)pcVar31)(pcVar31);
                        LOCK();
                        pcVar20 = pcVar31 + 0xc;
                        *(int *)pcVar20 = *(int *)pcVar20 + -1;
                        UNLOCK();
                        if (*(int *)pcVar20 == 0) {
                          (**(code **)(*(longlong *)pcVar31 + 0x10))(pcVar31);
                        }
                      }
                    }
                    ppcVar40 = local_620;
                    if (iVar34 <= iVar47) break;
                    ppcVar30 = local_620 + lVar12 * 2;
                    pcVar20 = *ppcVar23;
                    pcVar31 = ppcVar23[1];
                    pcVar26 = ppcVar30[1];
                    *ppcVar23 = *ppcVar30;
                    ppcVar23[1] = pcVar26;
                    local_438._0_4_ = (int)pcVar20;
                    local_438._4_4_ = (int)((ulonglong)pcVar20 >> 0x20);
                    uStack_430._0_4_ = (int)pcVar31;
                    uStack_430._4_4_ = (int)((ulonglong)pcVar31 >> 0x20);
                    *(int *)ppcVar30 = (int)local_438;
                    *(int *)((longlong)ppcVar30 + 4) = local_438._4_4_;
                    *(int *)(ppcVar30 + 1) = (int)uStack_430;
                    *(int *)((longlong)ppcVar30 + 0xc) = uStack_430._4_4_;
                    ppcVar23 = (code **)(ulonglong)uVar38;
                    local_438 = pcVar20;
                    uStack_430 = pcVar31;
                  }
                  uVar38 = (int)local_610 - 1;
                } while ((int)local_610 != 0);
                ppcVar23 = local_608;
                if (1 < iVar10) {
                  uVar39 = uVar39 - 1;
                  pcVar20 = *ppcVar40;
                  pcVar31 = ppcVar40[1];
                  pcVar26 = (ppcVar40 + uVar39 * 2)[1];
                  *ppcVar40 = ppcVar40[uVar39 * 2];
                  ppcVar40[1] = pcVar26;
                  local_438._0_4_ = (int)pcVar20;
                  local_438._4_4_ = (int)((ulonglong)pcVar20 >> 0x20);
                  uStack_430._0_4_ = (int)pcVar31;
                  uStack_430._4_4_ = (int)((ulonglong)pcVar31 >> 0x20);
                  ppcVar30 = ppcVar40 + uVar39 * 2;
                  *(int *)ppcVar30 = (int)local_438;
                  *(int *)((longlong)ppcVar30 + 4) = local_438._4_4_;
                  *(int *)(ppcVar30 + 1) = (int)uStack_430;
                  *(int *)((longlong)ppcVar30 + 0xc) = uStack_430._4_4_;
                  local_438 = pcVar20;
                  uStack_430 = pcVar31;
                  if (iVar10 != 2) {
                    do {
                      iVar10 = 0;
                      iVar47 = 1;
                      iVar34 = 0;
                      do {
                        iVar10 = iVar10 + 2;
                        iVar33 = iVar47;
                        if ((longlong)iVar10 < (longlong)uVar39) {
                          pcVar20 = ppcVar40[(longlong)iVar47 * 2];
                          pcVar31 = ppcVar40[(longlong)iVar47 * 2 + 1];
                          if (pcVar31 != (code *)0x0) {
                            LOCK();
                            *(int *)(pcVar31 + 8) = *(int *)(pcVar31 + 8) + 1;
                            UNLOCK();
                          }
                          pcVar26 = ppcVar40[(longlong)iVar10 * 2];
                          pcVar27 = (ppcVar40 + (longlong)iVar10 * 2)[1];
                          if (pcVar27 == (code *)0x0) {
                            iVar47 = *(int *)(pcVar26 + 200);
                            iVar42 = *(int *)(pcVar20 + 200);
                          }
                          else {
                            LOCK();
                            *(int *)(pcVar27 + 8) = *(int *)(pcVar27 + 8) + 1;
                            UNLOCK();
                            iVar47 = *(int *)(pcVar26 + 200);
                            iVar42 = *(int *)(pcVar20 + 200);
                            LOCK();
                            pcVar20 = pcVar27 + 8;
                            *(int *)pcVar20 = *(int *)pcVar20 + -1;
                            UNLOCK();
                            if (*(int *)pcVar20 == 0) {
                              (*(code *)**(undefined8 **)pcVar27)(pcVar27);
                              LOCK();
                              pcVar20 = pcVar27 + 0xc;
                              *(int *)pcVar20 = *(int *)pcVar20 + -1;
                              UNLOCK();
                              if (*(int *)pcVar20 == 0) {
                                (**(code **)(*(longlong *)pcVar27 + 0x10))(pcVar27);
                              }
                            }
                          }
                          if (pcVar31 != (code *)0x0) {
                            LOCK();
                            pcVar20 = pcVar31 + 8;
                            *(int *)pcVar20 = *(int *)pcVar20 + -1;
                            UNLOCK();
                            if (*(int *)pcVar20 == 0) {
                              (*(code *)**(undefined8 **)pcVar31)(pcVar31);
                              LOCK();
                              pcVar20 = pcVar31 + 0xc;
                              *(int *)pcVar20 = *(int *)pcVar20 + -1;
                              UNLOCK();
                              if (*(int *)pcVar20 == 0) {
                                (**(code **)(*(longlong *)pcVar31 + 0x10))(pcVar31);
                              }
                            }
                          }
                          ppcVar40 = local_620;
                          if (iVar42 <= iVar47) {
                            iVar33 = iVar10;
                          }
                        }
                        lVar12 = (longlong)iVar33;
                        pcVar20 = ppcVar40[lVar12 * 2];
                        pcVar31 = ppcVar40[lVar12 * 2 + 1];
                        if (pcVar31 != (code *)0x0) {
                          LOCK();
                          *(int *)(pcVar31 + 8) = *(int *)(pcVar31 + 8) + 1;
                          UNLOCK();
                        }
                        ppcVar23 = ppcVar40 + (longlong)iVar34 * 2;
                        pcVar26 = *ppcVar23;
                        pcVar27 = ppcVar23[1];
                        if (pcVar27 == (code *)0x0) {
                          iVar47 = *(int *)(pcVar26 + 200);
                          iVar10 = *(int *)(pcVar20 + 200);
                        }
                        else {
                          LOCK();
                          *(int *)(pcVar27 + 8) = *(int *)(pcVar27 + 8) + 1;
                          UNLOCK();
                          iVar47 = *(int *)(pcVar26 + 200);
                          iVar10 = *(int *)(pcVar20 + 200);
                          LOCK();
                          pcVar20 = pcVar27 + 8;
                          *(int *)pcVar20 = *(int *)pcVar20 + -1;
                          UNLOCK();
                          if (*(int *)pcVar20 == 0) {
                            (*(code *)**(undefined8 **)pcVar27)(pcVar27);
                            LOCK();
                            pcVar20 = pcVar27 + 0xc;
                            *(int *)pcVar20 = *(int *)pcVar20 + -1;
                            UNLOCK();
                            if (*(int *)pcVar20 == 0) {
                              (**(code **)(*(longlong *)pcVar27 + 0x10))(pcVar27);
                            }
                          }
                        }
                        if (pcVar31 != (code *)0x0) {
                          LOCK();
                          pcVar20 = pcVar31 + 8;
                          *(int *)pcVar20 = *(int *)pcVar20 + -1;
                          UNLOCK();
                          if (*(int *)pcVar20 == 0) {
                            (*(code *)**(undefined8 **)pcVar31)(pcVar31);
                            LOCK();
                            pcVar20 = pcVar31 + 0xc;
                            *(int *)pcVar20 = *(int *)pcVar20 + -1;
                            UNLOCK();
                            if (*(int *)pcVar20 == 0) {
                              (**(code **)(*(longlong *)pcVar31 + 0x10))(pcVar31);
                            }
                          }
                        }
                        ppcVar40 = local_620;
                        if (iVar10 <= iVar47) break;
                        ppcVar30 = local_620 + lVar12 * 2;
                        pcVar20 = *ppcVar23;
                        pcVar31 = ppcVar23[1];
                        pcVar26 = ppcVar30[1];
                        *ppcVar23 = *ppcVar30;
                        ppcVar23[1] = pcVar26;
                        local_438._0_4_ = (int)pcVar20;
                        local_438._4_4_ = (int)((ulonglong)pcVar20 >> 0x20);
                        uStack_430._0_4_ = (int)pcVar31;
                        uStack_430._4_4_ = (int)((ulonglong)pcVar31 >> 0x20);
                        *(int *)ppcVar30 = (int)local_438;
                        *(int *)((longlong)ppcVar30 + 4) = local_438._4_4_;
                        *(int *)(ppcVar30 + 1) = (int)uStack_430;
                        *(int *)((longlong)ppcVar30 + 0xc) = uStack_430._4_4_;
                        iVar10 = iVar33 * 2;
                        iVar47 = iVar33 * 2 + 1;
                        local_438 = pcVar20;
                        uStack_430 = pcVar31;
                        iVar34 = iVar33;
                      } while ((longlong)iVar47 < (longlong)uVar39);
                      uVar2 = uVar39 - 1;
                      pcVar20 = *local_620;
                      pcVar31 = local_620[1];
                      pcVar26 = (local_620 + uVar2 * 2)[1];
                      *local_620 = local_620[uVar2 * 2];
                      local_620[1] = pcVar26;
                      local_438._0_4_ = (int)pcVar20;
                      local_438._4_4_ = (int)((ulonglong)pcVar20 >> 0x20);
                      uStack_430._0_4_ = (int)pcVar31;
                      uStack_430._4_4_ = (int)((ulonglong)pcVar31 >> 0x20);
                      ppcVar23 = local_620 + uVar2 * 2;
                      *(int *)ppcVar23 = (int)local_438;
                      *(int *)((longlong)ppcVar23 + 4) = local_438._4_4_;
                      *(int *)(ppcVar23 + 1) = (int)uStack_430;
                      *(int *)((longlong)ppcVar23 + 0xc) = uStack_430._4_4_;
                      bVar52 = 2 < uVar39;
                      ppcVar23 = local_608;
                      uVar39 = uVar2;
                      local_438 = pcVar20;
                      uStack_430 = pcVar31;
                    } while (bVar52);
                  }
                }
              }
LAB_1413461a2:
              ppcVar23 = ppcVar23 + -3;
              pcVar31 = local_5d8;
              pcVar20 = local_600;
            } while (&local_388 <= ppcVar23);
          }
          pcVar20 = pcVar20 + 0xb0;
        } while (pcVar20 != pcVar31);
      }
      FUN_145935dde(local_5e0);
    }
    if (local_450 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
    FUN_14028f404(local_4a8,uStack_4a0 & 0xffffffff);
    if (local_4a8 != 0) {
      FUN_1400020a8();
    }
  }
  ReleaseSRWLockExclusive(local_580);
LAB_141340fd4:
  if ((local_80 ^ (ulonglong)auStack_698) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_14134549c:
  memcpy(&local_438,ppcVar40,0xb0);
  memcpy(ppcVar40,ppcVar37,0xb0);
  memcpy(ppcVar37,&local_438,0xb0);
  iVar47 = (int)local_620 + -1;
  ppcVar44 = ppcVar44 + -0x2c;
  if ((longlong)ppcVar51 - (longlong)local_5f8 < (longlong)local_610 - (longlong)ppcVar45) {
    ppcVar23 = local_618;
    if (ppcVar41 < ppcVar30) {
      *local_618 = (code *)ppcVar41;
      local_618[1] = (code *)ppcVar30;
      *(int *)(local_618 + 2) = iVar47;
      ppcVar23 = local_618 + 3;
    }
    ppcVar41 = ppcVar40;
    if (ppcVar37 <= ppcVar40 + 0x16) goto LAB_1413458e2;
  }
  else {
    if (ppcVar40 + 0x16 < ppcVar37) {
      *local_618 = (code *)ppcVar40;
      local_618[1] = (code *)ppcVar44;
      *(int *)(local_618 + 2) = iVar47;
      local_618 = local_618 + 3;
    }
    ppcVar23 = local_618;
    ppcVar40 = ppcVar45;
    ppcVar44 = ppcVar30;
    ppcVar51 = ppcVar30;
    if (ppcVar30 <= ppcVar41) goto LAB_1413458e2;
  }
  local_618 = ppcVar23;
  iVar10 = (int)((ulonglong)((longlong)ppcVar51 - (longlong)ppcVar40) >> 4) * -0x45d1745d;
  uVar38 = iVar10 + 1;
  ppcVar37 = ppcVar40;
  ppcVar40 = ppcVar41;
  ppcVar30 = ppcVar44;
  if (iVar47 == 0) goto LAB_1413455a2;
  goto LAB_14134536a;
LAB_141345bc1:
  pcVar20 = *ppcVar40;
  pcVar31 = ppcVar40[1];
  pcVar26 = ppcVar30[-1];
  *ppcVar40 = *ppcVar51;
  ppcVar40[1] = pcVar26;
  local_438._0_4_ = (int)pcVar20;
  local_438._4_4_ = (int)((ulonglong)pcVar20 >> 0x20);
  uStack_430._0_4_ = (int)pcVar31;
  uStack_430._4_4_ = (int)((ulonglong)pcVar31 >> 0x20);
  *(int *)ppcVar51 = (int)local_438;
  *(int *)((longlong)ppcVar30 + -0xc) = local_438._4_4_;
  *(int *)(ppcVar30 + -1) = (int)uStack_430;
  *(int *)((longlong)ppcVar30 + -4) = uStack_430._4_4_;
  iVar10 = (int)local_5f8 + -1;
  local_5f8 = (code **)CONCAT44(local_5f8._4_4_,iVar10);
  ppcVar30 = ppcVar30 + -4;
  local_438 = pcVar20;
  uStack_430 = pcVar31;
  if ((longlong)ppcVar41 - (longlong)local_5e8 < (longlong)local_618 - (longlong)local_610) {
    if (ppcVar45 < local_620) {
      *local_608 = (code *)ppcVar45;
      local_608[1] = (code *)local_620;
      *(int *)(local_608 + 2) = iVar10;
      local_608 = local_608 + 3;
    }
    ppcVar23 = local_608;
    ppcVar37 = ppcVar40;
    if (ppcVar51 <= ppcVar40 + 2) goto LAB_1413461a2;
  }
  else {
    ppcVar23 = local_608;
    if (ppcVar40 + 2 < ppcVar51) {
      *local_608 = (code *)ppcVar40;
      local_608[1] = (code *)ppcVar30;
      *(int *)(local_608 + 2) = iVar10;
      ppcVar23 = local_608 + 3;
    }
    ppcVar30 = local_620;
    ppcVar41 = local_620;
    ppcVar37 = local_610;
    ppcVar40 = ppcVar45;
    if (local_620 <= ppcVar45) goto LAB_1413461a2;
  }
  local_608 = ppcVar23;
  iVar47 = (int)((ulonglong)((longlong)ppcVar41 - (longlong)ppcVar37) >> 4);
  uVar39 = (ulonglong)(iVar47 + 1);
  if (iVar10 == 0) goto LAB_141345cc5;
  goto LAB_1413459d1;
}



// FUNCTION 141346318 FUN_141346318 body=409 status=ok
// SIG undefined FUN_141346318(void)

void FUN_141346318(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  wchar_t *pwVar2;
  longlong lVar3;
  undefined1 auStack_78 [36];
  undefined4 local_54;
  longlong local_50 [2];
  undefined4 *local_40;
  longlong *local_38;
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14590435a();
  FUN_1400021e4(param_1 + 0x2cc,local_50);
  local_54 = 0x24;
  local_40 = &local_54;
  local_38 = local_50;
  FUN_1413464b2(param_2,local_2c);
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1400021e4(param_1 + 0x2d4,local_50);
  local_54 = 0x25;
  local_40 = &local_54;
  local_38 = local_50;
  FUN_1413464b2(param_2,local_2c);
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  lVar1 = FUN_141292688();
  if (DAT_14cb9ad38 != 0) {
    if ((longlong)*(int *)(lVar1 + 200) != 0) {
      lVar3 = 0;
      do {
        if (*(longlong *)(*(longlong *)(lVar1 + 0xc0) + lVar3) == DAT_14cb9ad38) goto LAB_141346448;
        lVar3 = lVar3 + 8;
      } while ((longlong)*(int *)(lVar1 + 200) * 8 != lVar3);
    }
    if ((longlong)*(int *)(lVar1 + 0xd8) != 0) {
      lVar3 = 0;
      do {
        if (*(longlong *)(*(longlong *)(lVar1 + 0xd0) + lVar3) == DAT_14cb9ad38) goto LAB_141346448;
        lVar3 = lVar3 + 8;
      } while ((longlong)*(int *)(lVar1 + 0xd8) * 8 != lVar3);
    }
  }
LAB_141346427:
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_141346448:
  pwVar2 = L"Vertical";
  if (*(char *)(param_1 + 0x2c8) == '\0') {
    pwVar2 = L"Horizontal";
  }
  FUN_140056680(local_50,pwVar2);
  local_54 = 0x36;
  local_40 = &local_54;
  local_38 = local_50;
  FUN_1413464b2(param_2,local_2c,&local_40,0);
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  goto LAB_141346427;
}



// FUNCTION 1413464b2 FUN_1413464b2 body=333 status=ok
// SIG undefined FUN_1413464b2(void)

undefined4 *
FUN_1413464b2(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  char cVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  uint *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140fef636(param_1,local_50);
  puVar1 = (undefined8 *)param_3[1];
  *local_48 = *(uint *)*param_3;
  *(undefined8 *)(local_48 + 2) = *puVar1;
  *puVar1 = 0;
  local_48[4] = *(uint *)(puVar1 + 1);
  local_48[5] = *(uint *)((longlong)puVar1 + 0xc);
  puVar1[1] = 0;
  local_48[6] = 0xffffffff;
  local_54 = local_50[0];
  uVar4 = *local_48;
  local_68 = param_4;
  cVar2 = FUN_140fef4e4(param_1,uVar4,local_48);
  if (cVar2 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar5 < 4) {
      iVar6 = 1;
    }
    else {
      uVar3 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      local_48[7] = uVar4;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      local_48[6] = *(uint *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                      (longlong)(int)uVar4) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_141346600(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141346600 FUN_141346600 body=539 status=ok
// SIG undefined FUN_141346600(void)

void FUN_141346600(longlong *param_1)

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
        uVar13 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar11 + lVar10);
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
            if (iVar2 - lVar11 == lVar10) goto LAB_1413467d6;
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
LAB_1413467d6:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14134681c FUN_14134681c body=353 status=ok
// SIG undefined FUN_14134681c(void)

void FUN_14134681c(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1413468a1;
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
LAB_1413468a1:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 14134697e FUN_14134697e body=173 status=ok
// SIG undefined FUN_14134697e(void)

void FUN_14134697e(longlong param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  
  iVar1 = *(int *)(*param_2 + 0x7c);
  if (((((iVar1 != 0) && (uVar2 = *(uint *)(*param_2 + 0x78), -1 < (int)uVar2)) &&
       ((int)uVar2 < DAT_14c9647dc)) &&
      ((plVar4 = (longlong *)
                 ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
       plVar4 != (longlong *)0x0 && ((int)plVar4[2] == iVar1)))) &&
     (((*(uint *)(plVar4 + 1) & 0x10200000) == 0 &&
      (plVar4 = (longlong *)*plVar4, plVar4 != (longlong *)0x0)))) {
    (**(code **)(*plVar4 + 0x2b8))(plVar4,param_2,param_1 + 0x38);
  }
  iVar1 = *(int *)(param_1 + 0x30);
  if ((longlong)iVar1 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x28);
    lVar5 = 0;
    do {
      if ((*(char *)(lVar3 + 8 + lVar5) == '\x03') &&
         (plVar4 = *(longlong **)(lVar3 + lVar5), plVar4 != (longlong *)0x0)) {
        (**(code **)(*plVar4 + 0x88))(plVar4,param_2);
      }
      lVar5 = lVar5 + 0x20;
    } while ((longlong)iVar1 * 0x20 != lVar5);
  }
  return;
}



// FUNCTION 141346a2c FUN_141346a2c body=679 status=ok
// SIG undefined FUN_141346a2c(void)

void FUN_141346a2c(longlong param_1,longlong param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  longlong lVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 uVar13;
  undefined **ppuVar14;
  longlong lVar15;
  longlong lVar16;
  
  iVar1 = *(int *)(param_1 + 0x48);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x40);
    lVar16 = 8;
    lVar15 = 0;
    do {
      if (*(longlong *)(lVar2 + lVar16) == 0) {
        uVar13 = FUN_145cd9bd2();
        uVar13 = FUN_14477b664(uVar13);
        *(undefined8 *)(lVar2 + lVar16) = uVar13;
      }
      lVar10 = param_3[1];
      if (lVar10 == 0) {
        lVar10 = FUN_145cd9bd2();
      }
      lVar3 = *param_3;
      lVar10 = FUN_14477b664(lVar10);
      iVar8 = 0;
      if ((lVar10 != 0) && (plVar4 = *(longlong **)(lVar10 + 0xb8), plVar4 != (longlong *)0x0)) {
        lVar11 = *plVar4;
        pcVar5 = *(code **)(lVar11 + 0x108);
        if (pcVar5 != (code *)&LAB_14478342e && pcVar5 != (code *)&LAB_144783422) {
          cVar7 = (*pcVar5)(plVar4);
          iVar8 = 0;
          if (cVar7 == '\0') goto LAB_141346b0d;
          lVar11 = *plVar4;
        }
        pcVar5 = *(code **)(lVar11 + 0x110);
        ppuVar14 = &PTR_PTR_14c763408;
        if ((pcVar5 != (code *)&LAB_144783426) &&
           (ppuVar14 = &PTR_PTR_14c75f798, pcVar5 != (code *)&LAB_144783432)) {
          ppuVar14 = (undefined **)(*pcVar5)(plVar4);
        }
        iVar8 = FUN_144aff48c(ppuVar14);
      }
LAB_141346b0d:
      lVar11 = *(longlong *)(lVar2 + -8 + lVar16);
      lVar6 = *(longlong *)(lVar2 + lVar16);
      iVar9 = 0;
      if ((lVar6 != 0) &&
         (plVar4 = *(longlong **)(lVar6 + 0xb8), iVar9 = 0, plVar4 != (longlong *)0x0)) {
        lVar12 = *plVar4;
        pcVar5 = *(code **)(lVar12 + 0x108);
        if (pcVar5 != (code *)&LAB_14478342e && pcVar5 != (code *)&LAB_144783422) {
          cVar7 = (*pcVar5)(plVar4);
          if (cVar7 == '\0') goto LAB_141346b77;
          lVar12 = *plVar4;
        }
        pcVar5 = *(code **)(lVar12 + 0x110);
        ppuVar14 = &PTR_PTR_14c763408;
        if ((pcVar5 != (code *)&LAB_144783426) &&
           (ppuVar14 = &PTR_PTR_14c75f798, pcVar5 != (code *)&LAB_144783432)) {
          ppuVar14 = (undefined **)(*pcVar5)(plVar4);
        }
        iVar9 = FUN_144aff48c(ppuVar14);
      }
LAB_141346b77:
      if ((iVar9 == iVar8) && (lVar11 == lVar3)) {
        if (lVar6 == lVar10) {
LAB_141346c21:
          if (lVar2 - lVar15 == 0) {
            return;
          }
          FUN_141346cd3((lVar2 - lVar15) + 0x18,*(undefined8 *)(param_2 + 0x18),param_2 + 0x28,
                        param_2 + 0x48);
          return;
        }
        if ((lVar10 != 0) && (lVar6 != 0)) {
          iVar8 = *(int *)(lVar10 + 0x38);
          iVar9 = *(int *)(lVar6 + 0x38);
          if (((iVar8 <= iVar9) &&
              (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)iVar8 * 8) == lVar10 + 0x30))
             || ((iVar9 <= iVar8 &&
                 (*(longlong *)(*(longlong *)(lVar10 + 0x30) + (longlong)iVar9 * 8) == lVar6 + 0x30)
                 ))) goto LAB_141346c21;
        }
      }
      lVar15 = lVar15 + -0x28;
      lVar16 = lVar16 + 0x28;
    } while ((longlong)iVar1 * -0x28 != lVar15);
  }
  return;
}



// FUNCTION 141346cd3 FUN_141346cd3 body=197 status=ok
// SIG undefined FUN_141346cd3(void)

void FUN_141346cd3(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  undefined1 auStack_88 [40];
  undefined8 local_60;
  longlong local_58 [8];
  
  local_58[7] = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58[4] = 0;
  local_58[5] = 0;
  local_58[2] = 0;
  local_58[3] = 0;
  local_58[0] = 0;
  local_58[1] = 0;
  local_58[6] = 0;
  local_60 = param_2;
  FUN_1403de7ba(local_58,param_3);
  FUN_1409ed7fc(local_58 + 4,param_4);
  local_58[6] = *(undefined8 *)(param_4 + 0x10);
  FUN_1447cd2ec(param_1,&local_60);
  FUN_1409ed859(local_58[4],local_58[5] & 0xffffffff);
  if (local_58[4] != 0) {
    FUN_1400020a8();
  }
  if (local_58[2] != 0) {
    FUN_1400020a8();
  }
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_58[7] ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141346d9a FUN_141346d9a body=136 status=ok
// SIG undefined FUN_141346d9a(void)

void FUN_141346d9a(longlong param_1,undefined8 *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if (((*(int *)(param_1 + 0x34) != 0) && (uVar1 = *(uint *)(param_1 + 0x30), -1 < (int)uVar1)) &&
     ((int)uVar1 < DAT_14c9647dc)) {
    plVar3 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar3 != (longlong *)0x0) && ((int)plVar3[2] == *(int *)(param_1 + 0x34))) &&
       ((*(uint *)(plVar3 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(plVar3 + 1) & 0x10200000) == 0) {
        lVar2 = *plVar3;
      }
      else {
        lVar2 = 0;
      }
      if (*(longlong *)(lVar2 + 0x40) == 0) {
        plVar3 = (longlong *)(lVar2 + 0x28);
      }
      else {
        plVar3 = (longlong *)(*(longlong *)(*(longlong *)(lVar2 + 0x40) + 0x238) + 8);
      }
      plVar3 = (longlong *)*plVar3;
      if (plVar3 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000141346e14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x1a8))(plVar3,*param_2);
        return;
      }
    }
  }
  return;
}



// FUNCTION 141346e22 FUN_141346e22 body=301 status=ok
// SIG undefined FUN_141346e22(void)

void FUN_141346e22(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  longlong local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (DAT_14cb928a8 == '\x01') {
    plVar1 = (longlong *)(param_1 + 0x38);
    lVar2 = param_1 + 0x48;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    local_38 = 0;
    iVar5 = 0;
    local_48 = lVar2;
    if (*(int *)(param_1 + 0x60) != 0) {
      FUN_1449c0562(&local_50);
      iVar5 = *(int *)(param_1 + 0x60);
    }
    local_60 = local_40;
    uVar3 = local_60;
    local_58 = local_38;
    local_54 = local_34;
    local_70 = local_50;
    local_68 = local_48;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = plVar1;
    if ((local_60._4_4_ != iVar5) || (local_60 = uVar3, local_48 != lVar2)) {
      do {
        local_60 = uVar3;
        local_50 = *(undefined8 *)(*local_78 + 8 + (longlong)iVar4 * 0x18);
        FUN_141346d9a(param_1);
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~local_70._4_4_);
        FUN_1449c0562(&local_70);
        iVar4 = local_60._4_4_;
        uVar3 = local_60;
      } while (local_78 != plVar1 || (local_68 != lVar2 || local_60._4_4_ != iVar5));
    }
    FUN_148a06752(plVar1);
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141346f50 FUN_141346f50 body=375 status=ok
// SIG undefined FUN_141346f50(void)

undefined8 * FUN_141346f50(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 1413470d4 FUN_1413470d4 body=126 status=ok
// SIG undefined FUN_1413470d4(void)

void FUN_1413470d4(longlong param_1,longlong param_2,byte param_3)

{
  longlong lVar1;
  
  if (param_2 != 0 && (param_3 & 1) != 0) {
    lVar1 = FUN_140232dfe();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      FUN_145905e32(param_2,param_1 + 0x30);
      FUN_145905f12(param_2,param_1 + 0x40);
      if (*(char *)(param_1 + 0x50) == '\x01') {
        FUN_148d641b0(param_2 + 0xa50,param_1 + 0x58);
        return;
      }
    }
  }
  return;
}



// FUNCTION 141347152 FUN_141347152 body=36 status=ok
// SIG undefined FUN_141347152(void)

void FUN_141347152(longlong param_1,byte param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x11e8);
  if (lVar1 != 0) {
    *(uint *)(lVar1 + 0x36a8) =
         (uint)param_2 + (uint)param_2 * 2 | *(uint *)(lVar1 + 0x36a8) & 0xfffffffc;
  }
  return;
}



// FUNCTION 141347176 FUN_141347176 body=121 status=ok
// SIG undefined FUN_141347176(void)

void FUN_141347176(longlong param_1,undefined1 param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar1 = *(longlong **)(param_1 + 0x90);
  if ((plVar1 != (longlong *)0x0) && ((*(byte *)(plVar1 + 0x84) & 2) != 0)) {
    cVar2 = (**(code **)(*plVar1 + 0x6c8))();
    if (cVar2 != '\0') {
      local_19 = param_2;
      FUN_1447cd2ec(param_1);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141347200 FUN_141347200 body=74 status=ok
// SIG undefined FUN_141347200(void)

void FUN_141347200(longlong param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4)

{
  int iVar1;
  
  if (0 < *(int *)(param_1 + 0xa8)) {
    iVar1 = 0;
    do {
      FUN_140d78d10(param_1,iVar1,param_2,param_3,param_4);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 0xa8));
  }
  return;
}



// FUNCTION 14134724a FUN_14134724a body=28 status=ok
// SIG undefined FUN_14134724a(void)

undefined4 FUN_14134724a(longlong param_1)

{
  uint uVar1;
  
  if (*(longlong *)(param_1 + 0x2370) == 0) {
    return 0;
  }
  uVar1 = *(int *)(param_1 + 0x2378) - 1;
  return CONCAT31((int3)(uVar1 >> 8),uVar1 < 0xfffffffe);
}



// FUNCTION 141347266 FUN_141347266 body=1285 status=ok
// SIG undefined FUN_141347266(void)

void FUN_141347266(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_108 [40];
  undefined8 local_e0;
  undefined4 local_d8;
  longlong local_d0;
  longlong local_c8;
  longlong lStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined1 local_a4;
  undefined8 *local_a0;
  int local_98;
  longlong local_90;
  ulonglong uStack_88;
  undefined4 local_80;
  undefined8 local_78;
  longlong *local_70;
  longlong local_68;
  ulonglong uStack_60;
  undefined8 *local_58;
  int local_50;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_140a9b590(param_1,&local_d0,1);
  if (local_c8 == 0) {
    uVar5 = FUN_14037df6e();
    local_c8 = FUN_14477b664(uVar5);
  }
  if (lStack_c0 == 0) {
    if ((((local_d0 == 0) || (local_c8 == 0)) ||
        (plVar3 = *(longlong **)(local_c8 + 0xb8), plVar3 == (longlong *)0x0)) ||
       (cVar4 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar4 == '\0')) goto LAB_1413476fd;
    uVar5 = (**(code **)(*plVar3 + 0x110))(plVar3);
    lStack_c0 = FUN_144aff482(uVar5,&local_d0);
    if (lStack_c0 == 0) goto LAB_1413476fd;
  }
  FUN_1411cf6d8(param_1,&local_48,1);
  if (local_40 == 0) {
    uVar5 = FUN_140aff5aa();
    local_40 = FUN_14477b664(uVar5);
  }
  if (local_38 == 0) {
    if (((local_48 == 0) || (local_40 == 0)) ||
       ((plVar3 = *(longlong **)(local_40 + 0xb8), plVar3 == (longlong *)0x0 ||
        (cVar4 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar4 == '\0')))) goto LAB_1413476fd;
    uVar5 = (**(code **)(*plVar3 + 0x110))(plVar3);
    lVar6 = FUN_144aff482(uVar5,&local_48);
    if (lVar6 == 0) goto LAB_1413476fd;
  }
  FUN_144345652(param_1);
  if (*(char *)(param_1 + 0x84) != '\x01') {
    *(undefined1 *)(param_1 + 0x84) = 1;
    FUN_1459063aa(param_1 + 0x28,1);
  }
  *(undefined1 *)(param_1 + 0x86) = 1;
  local_58 = (undefined8 *)0x0;
  local_50 = 0;
  FUN_1446efa72(&local_58,0,3,0x10);
  local_50 = 3;
  *local_58 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar7 = DAT_14c758608 + 1;
  lVar6 = DAT_14c758608 + 1;
  if (lVar7 == 0) {
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 2;
    lVar6 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar6;
  local_58[2] = lVar7;
  *local_58 = &PTR_FUN_14b9dd890;
  local_58[3] = param_1;
  local_58[4] = &LAB_141297268;
  local_68 = 0;
  uStack_60 = 0;
  FUN_141360bd2(param_1);
  FUN_140a9b590(param_1,&local_48,1);
  if (local_40 == 0) {
    uVar5 = FUN_14037df6e();
    local_40 = FUN_14477b664(uVar5);
  }
  local_d0 = local_38;
  if (((local_38 == 0) && (local_d0 = 0, local_40 != 0)) && (local_48 != 0)) {
    plVar3 = *(longlong **)(local_40 + 0xb8);
    if ((plVar3 == (longlong *)0x0) ||
       (cVar4 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar4 == '\0')) {
      local_d0 = 0;
      local_38 = local_d0;
    }
    else {
      uVar5 = (**(code **)(*plVar3 + 0x110))(plVar3);
      local_d0 = FUN_144aff482(uVar5,&local_48);
      local_38 = local_d0;
    }
  }
  local_c8 = 0;
  lStack_c0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0x10000;
  local_a4 = 0;
  local_a0 = (undefined8 *)0x0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  FUN_140fb04f0(&local_d0,*(undefined8 *)(param_1 + 0x90));
  local_e0 = 0;
  local_d8 = 0;
  FUN_14009d848(&local_e0,&local_58);
  FUN_140861d4c(&local_d0,&local_e0);
  FUN_14069798a(&local_90,&local_68);
  FUN_140697a82(&local_d0,&local_78);
  plVar1 = local_70;
  *(undefined8 *)(param_1 + 0x128) = local_78;
  local_78 = 0;
  plVar3 = *(longlong **)(param_1 + 0x130);
  if (local_70 == plVar3) {
LAB_141347535:
    plVar3 = local_70;
    if (local_70 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_70 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_70)(local_70);
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
  else {
    local_70 = (longlong *)0x0;
    *(longlong **)(param_1 + 0x130) = plVar1;
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
      goto LAB_141347535;
    }
  }
  FUN_140861e20(local_90,uStack_88 & 0xffffffff);
  if (local_90 != 0) {
    FUN_1400020a8();
  }
  if (local_98 == 0) {
LAB_1413475ad:
    if (local_a0 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_a0 != (undefined8 *)0x0) {
    (**(code **)*local_a0)(local_a0,0);
    FUN_1446efa72(&local_a0,0,0,0x10);
    local_98 = 0;
    goto LAB_1413475ad;
  }
  FUN_1406979e8(*(undefined8 *)(param_1 + 0x128));
  FUN_140861e20(local_68,uStack_60 & 0xffffffff);
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if (local_50 != 0) {
    if (local_58 == (undefined8 *)0x0) goto LAB_1413476fd;
    (**(code **)*local_58)(local_58,0);
    FUN_1446efa72(&local_58,0,0,0x10);
    local_50 = 0;
  }
  if (local_58 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_1413476fd:
  if ((local_30 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14134776c FUN_14134776c body=759 status=ok
// SIG undefined FUN_14134776c(void)

void FUN_14134776c(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined1 auStack_148 [32];
  undefined1 local_128 [8];
  undefined8 local_120;
  undefined2 local_118;
  undefined8 local_110;
  undefined8 local_108 [4];
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined1 local_d8;
  undefined2 local_d7;
  undefined1 local_d5;
  undefined4 local_d4;
  longlong local_c8;
  longlong *local_b8;
  longlong local_a8 [4];
  code *local_88 [2];
  undefined8 local_78;
  undefined *local_68;
  longlong local_60;
  byte local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_148;
  lVar4 = *(longlong *)(param_1 + 0x90);
  if (((lVar4 == 0) || ((*(byte *)(lVar4 + 0x65) & 2) != 0)) ||
     (plVar9 = *(longlong **)(lVar4 + 0xf48), plVar9 == (longlong *)0x0)) goto LAB_1413477b9;
  lVar4 = FUN_140a9a328();
  if (lVar4 == 0) goto LAB_1413477b9;
  *(undefined1 *)(param_1 + 0x86) = 0;
  FUN_14583ea82(plVar9,1);
  *(undefined1 *)(param_1 + 0x170) = 1;
  FUN_140a9a478(param_1,local_108);
  puVar5 = local_108;
  puVar10 = (undefined8 *)(param_1 + 0x180);
  for (lVar8 = 0xc; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar10 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar10 = puVar10 + 1;
  }
  lVar8 = plVar9[0x39];
  if (lVar8 == 0) {
    puVar5 = &DAT_14c8464e0;
    uVar11 = (undefined4)DAT_14c8464f0;
    uVar12 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
  }
  else {
    uVar11 = (undefined4)*(undefined8 *)(lVar8 + 0x270);
    uVar12 = (undefined4)((ulonglong)*(undefined8 *)(lVar8 + 0x270) >> 0x20);
    puVar5 = (undefined8 *)(lVar8 + 0x260);
  }
  uVar1 = *(undefined4 *)((longlong)puVar5 + 4);
  uVar2 = *(undefined4 *)(puVar5 + 1);
  uVar3 = *(undefined4 *)((longlong)puVar5 + 0xc);
  *(undefined4 *)(param_1 + 0x1e0) = *(undefined4 *)puVar5;
  *(undefined4 *)(param_1 + 0x1e4) = uVar1;
  *(undefined4 *)(param_1 + 0x1e8) = uVar2;
  *(undefined4 *)(param_1 + 0x1ec) = uVar3;
  *(ulonglong *)(param_1 + 0x1f0) = CONCAT44(uVar12,uVar11);
  lVar8 = plVar9[0xa0];
  uVar11 = *(undefined4 *)((longlong)plVar9 + 0x504);
  lVar7 = plVar9[0xa1];
  uVar12 = *(undefined4 *)((longlong)plVar9 + 0x50c);
  *(longlong *)(param_1 + 0x208) = plVar9[0xa2];
  *(int *)(param_1 + 0x1f8) = (int)lVar8;
  *(undefined4 *)(param_1 + 0x1fc) = uVar11;
  *(int *)(param_1 + 0x200) = (int)lVar7;
  *(undefined4 *)(param_1 + 0x204) = uVar12;
  uVar6 = 0;
  *(undefined8 *)(param_1 + 0x210) = 0;
  (**(code **)(*plVar9 + 0x528))(plVar9,param_1 + 0x210,param_1 + 0x214);
  *(byte *)(param_1 + 0x218) = *(byte *)((longlong)plVar9 + 0x65) & 1;
  FUN_1405e47c6(plVar9,0);
  local_e8 = 0;
  uStack_e0 = 0;
  local_108[2] = 0;
  local_108[0] = 0;
  local_108[1] = 0;
  local_d7 = 1;
  local_d5 = 0;
  local_d4 = 8;
  local_c8 = 0;
  local_b8 = (longlong *)0x0;
  lVar8 = *(longlong *)(param_1 + 0x90);
  if (lVar8 != 0) {
    if ((*(byte *)(lVar8 + 0x65) & 2) == 0) {
      uVar6 = *(undefined8 *)(lVar8 + 0xf48);
    }
    else {
      uVar6 = 0;
    }
  }
  local_d8 = 3;
  local_108[3] = uVar6;
  uVar6 = FUN_1402095ca();
  lVar8 = FUN_141037e38(lVar4,uVar6,(undefined8 *)(param_1 + 0x180),local_108);
  if ((lVar8 == 0) || (DAT_14c950c29 == '\0')) {
    *(longlong *)(param_1 + 0x88) = lVar8;
    if (lVar8 != 0) goto LAB_14134794f;
    *(undefined1 *)(param_1 + 0x170) = 0;
  }
  else {
    FUN_1456cec3c(lVar8);
    *(longlong *)(param_1 + 0x88) = lVar8;
LAB_14134794f:
    FUN_140c7ce82(lVar8,0);
    lVar8 = *(longlong *)(param_1 + 0x88);
    lVar7 = (**(code **)(plVar9[0x10e] + 0x10))(plVar9 + 0x10e);
    local_120 = *(undefined8 *)(lVar7 + 0x20);
    local_118 = *(undefined2 *)(lVar7 + 0x28);
    local_110 = *(undefined8 *)(lVar7 + 0x30);
    FUN_140365ba6(lVar8 + 0x1518,&local_120,1);
    *(undefined1 *)(param_1 + 0x170) = 2;
    if (*(longlong *)(lVar4 + 0x1f0) == 0) {
      puVar5 = (undefined8 *)(lVar4 + 0x458);
    }
    else {
      puVar5 = (undefined8 *)(*(longlong *)(lVar4 + 0x1f0) + 0xf0);
    }
    local_88[0] = FUN_144347e00;
    local_78 = 0;
    local_68 = &DAT_14b9dd900;
    local_48 = 3;
    local_60 = param_1;
    FUN_14016fdb0(*puVar5,local_128,local_88);
    (*(code *)(&PTR_LAB_14a1c87a0)[local_48])(local_88);
  }
  if (local_c8 != 0) {
    plVar9 = local_b8;
    if (local_b8 == (longlong *)0x0) {
      plVar9 = local_a8;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
LAB_1413477b9:
  if ((local_38 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141347a64 FUN_141347a64 body=283 status=ok
// SIG undefined FUN_141347a64(void)

void FUN_141347a64(longlong param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  
  lVar5 = (**(code **)(*(longlong *)(param_1 + -0x28) + 0x180))(param_1 + -0x28);
  plVar6 = (longlong *)FUN_140389788();
  lVar7 = plVar6[0x22];
  if (lVar7 == 0) {
    (**(code **)(*plVar6 + 1000))(plVar6);
    lVar7 = plVar6[0x22];
  }
  if (((lVar5 != 0) && ((*(byte *)(lVar5 + 0x155) & 0x20) == 0)) && (0 < *(int *)(lVar5 + 0x238))) {
    bVar1 = *(byte *)(lVar7 + 0x49);
    lVar7 = 0;
    do {
      iVar2 = *(int *)(*(longlong *)(lVar5 + 0x230) + 4 + lVar7 * 8);
      if (((((iVar2 != 0) &&
            (uVar3 = *(uint *)(*(longlong *)(lVar5 + 0x230) + lVar7 * 8), -1 < (int)uVar3)) &&
           (((int)uVar3 < DAT_14c9647dc &&
            ((plVar6 = (longlong *)
                       ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
             plVar6 != (longlong *)0x0 && ((int)plVar6[2] == iVar2)))))) &&
          ((*(uint *)(plVar6 + 1) & 0x10200000) == 0)) &&
         ((plVar6 = (longlong *)*plVar6, plVar6 != (longlong *)0x0 &&
          (((bVar1 & 4) != 0 || (cVar4 = (**(code **)(*plVar6 + 0xd00))(plVar6), cVar4 != '\0'))))))
      {
        (**(code **)(*plVar6 + 0xcf8))(plVar6);
      }
      lVar7 = lVar7 + 1;
    } while ((int)lVar7 < *(int *)(lVar5 + 0x238));
  }
  if ((DAT_14cb0d2b0 != 0) && (*(longlong *)(DAT_14cb0d2b0 + 0xf50) != 0)) {
    *(undefined1 *)(param_1 + 0xe4) = 0;
  }
  return;
}



// FUNCTION 141347b7f FUN_141347b7f body=28 status=ok
// SIG undefined FUN_141347b7f(void)

void FUN_141347b7f(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    param_1[1] = 0xffffffffffffffff;
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 141347b9c FUN_141347b9c body=1168 status=ok
// SIG undefined FUN_141347b9c(void)

void FUN_141347b9c(longlong param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  byte bVar9;
  longlong lVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auStack_1a8 [32];
  undefined1 **local_188;
  undefined1 local_178 [16];
  undefined1 local_168 [16];
  undefined1 *local_150;
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  double local_118;
  double local_110;
  double local_108;
  double local_f8;
  double local_f0;
  double local_e8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  lVar10 = *(longlong *)(param_1 + 0x40);
  bVar9 = *(byte *)(lVar10 + 0x90);
  dVar1 = 0.0;
  if ((lVar10 == 0) || (bVar9 < 2)) {
    dVar3 = 0.0;
    dVar2 = 0.0;
  }
  else {
    local_140 = (double)*(float *)(lVar10 + 0x138);
    local_148 = (double)*(float *)(lVar10 + 0x134);
    local_150 = (undefined1 *)(double)*(float *)(lVar10 + 0x130);
    dVar1 = (double)*(float *)(lVar10 + 0x4c);
    dVar12 = (double)*(float *)(lVar10 + 0x48);
    dVar5 = (double)*(float *)(lVar10 + 0x44);
    dVar14 = (double)*(float *)(lVar10 + 0x40);
    dVar11 = *(double *)(lVar10 + 0x110);
    dVar4 = *(double *)(lVar10 + 0x118);
    dVar6 = *(double *)(lVar10 + 0x120);
    dVar7 = *(double *)(lVar10 + 0x128);
    dVar2 = dVar11 * dVar12 * 1.0 + dVar7 * dVar5 + dVar14 * dVar6 * -1.0 + dVar1 * dVar4;
    dVar3 = dVar6 * dVar12 * -1.0 + ((dVar11 * dVar14 * -1.0 + dVar1 * dVar7) - dVar4 * dVar5);
    local_178._8_4_ = SUB84(dVar2,0);
    local_178._0_8_ = dVar4 * dVar12 * -1.0 + dVar6 * dVar5 + dVar14 * dVar7 * 1.0 + dVar1 * dVar11;
    local_178._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    local_168._8_4_ = SUB84(dVar3,0);
    local_168._0_8_ =
         dVar7 * dVar12 * 1.0 + ((dVar4 * dVar14 * 1.0 + dVar1 * dVar6) - dVar11 * dVar5);
    local_168._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
    FUN_1409357f8(&local_138);
    dVar5 = (double)*(float *)(lVar10 + 0x18c);
    dVar1 = (double)*(float *)(lVar10 + 0x188);
    dVar11 = (double)*(float *)(lVar10 + 0x184);
    dVar2 = local_e8 * dVar5 + local_f8 * dVar11 + local_f0 * dVar1;
    dVar3 = local_108 * dVar5 + local_118 * dVar11 + local_110 * dVar1;
    dVar1 = dVar5 * local_128 + dVar11 * local_138 + dVar1 * local_130;
    lVar10 = *(longlong *)(param_1 + 0x40);
    bVar9 = *(byte *)(lVar10 + 0x90);
  }
  if ((lVar10 != 0) && (1 < bVar9)) {
    dVar2 = dVar2 + param_2[2];
    dVar3 = dVar3 + param_2[1];
    dVar1 = dVar1 + *param_2;
    if ((*(char *)(lVar10 + 0x1ac) == '\x04') || (*(char *)(lVar10 + 0x1ac) == '\x01')) {
      FUN_144a05e16(lVar10,4,1,1);
      local_140 = (double)*(float *)(lVar10 + 0x144);
      local_148 = (double)*(float *)(lVar10 + 0x140);
      local_150 = (undefined1 *)(double)*(float *)(lVar10 + 0x13c);
      dVar5 = (double)*(float *)(lVar10 + 0x4c);
      dVar13 = (double)*(float *)(lVar10 + 0x48);
      dVar6 = (double)*(float *)(lVar10 + 0x44);
      dVar15 = (double)*(float *)(lVar10 + 0x40);
      dVar7 = *(double *)(lVar10 + 0x110);
      dVar12 = *(double *)(lVar10 + 0x118);
      dVar14 = *(double *)(lVar10 + 0x120);
      dVar8 = *(double *)(lVar10 + 0x128);
      dVar11 = dVar7 * dVar13 * 1.0 + dVar8 * dVar6 + dVar15 * dVar14 * -1.0 + dVar5 * dVar12;
      dVar4 = dVar14 * dVar13 * -1.0 + ((dVar7 * dVar15 * -1.0 + dVar5 * dVar8) - dVar12 * dVar6);
      local_178._8_4_ = SUB84(dVar11,0);
      local_178._0_8_ =
           dVar12 * dVar13 * -1.0 + dVar14 * dVar6 + dVar15 * dVar8 * 1.0 + dVar5 * dVar7;
      local_178._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
      local_168._8_4_ = SUB84(dVar4,0);
      local_168._0_8_ =
           dVar8 * dVar13 * 1.0 + ((dVar12 * dVar15 * 1.0 + dVar5 * dVar14) - dVar7 * dVar6);
      local_168._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
      FUN_1409357f8(&local_138,local_178,&local_150);
      local_178._8_8_ = local_108 * dVar2 + local_118 * dVar1 + local_110 * dVar3;
      local_178._0_8_ = dVar2 * local_128 + dVar1 * local_138 + dVar3 * local_130;
      local_168._0_8_ = local_e8 * dVar2 + local_f8 * dVar1 + local_f0 * dVar3;
      local_188 = &local_150;
      local_150 = local_178;
      FUN_14134802e(lVar10 + 0x160,1,lVar10 + 0x94,*(undefined8 *)(lVar10 + 0x10));
    }
  }
  if ((local_b0 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14134802e FUN_14134802e body=275 status=ok
// SIG undefined FUN_14134802e(void)

void FUN_14134802e(longlong param_1,char param_2,byte *param_3,longlong param_4,undefined8 *param_5)

{
  undefined8 *puVar1;
  int *piVar2;
  double dVar3;
  double dVar4;
  uint uVar5;
  int iVar6;
  double *pdVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  
  pdVar7 = (double *)*param_5;
  dVar3 = pdVar7[2];
  dVar4 = pdVar7[1];
  *(float *)(param_1 + 0x24) = (float)*pdVar7;
  *(float *)(param_1 + 0x28) = (float)dVar4;
  *(float *)(param_1 + 0x2c) = (float)dVar3;
  if (((param_2 != '\0') && (*param_3 = *param_3 | 4, param_4 != 0)) &&
     (lVar8 = *(longlong *)(param_4 + 8), lVar8 != 0)) {
    if (DAT_14c992a90 == '\x01') {
      AcquireSRWLockExclusive((PSRWLOCK)(lVar8 + 0x128));
      if (*(int *)(param_4 + 0x18) == -1) {
        lVar9 = *(longlong *)(lVar8 + 0x98);
        uVar5 = *(uint *)(param_4 + 0x1c);
        piVar2 = (int *)(lVar9 + 0x160 + (ulonglong)uVar5 * 4);
        *piVar2 = *piVar2 + 1;
        *(int *)(lVar9 + 0x194) = *(int *)(lVar9 + 0x194) + 1;
        lVar9 = lVar9 + (ulonglong)uVar5 * 0x10;
        iVar6 = *(int *)(lVar9 + 0x1a0);
        *(int *)(param_4 + 0x18) = iVar6;
        *(uint *)(lVar9 + 0x1a0) = iVar6 + 1U;
        if (*(uint *)(lVar9 + 0x1a4) < iVar6 + 1U) {
          FUN_140431d5c((longlong *)(lVar9 + 0x198),iVar6);
        }
        lVar9 = *(longlong *)(lVar9 + 0x198);
        lVar10 = (longlong)iVar6 * 0x20;
        *(longlong *)(lVar9 + lVar10) = param_4;
        *(undefined4 *)(lVar9 + 8 + lVar10) = 0;
        puVar1 = (undefined8 *)(lVar9 + 0x10 + lVar10);
        *puVar1 = 0;
        puVar1[1] = 0;
      }
                    /* WARNING: Could not recover jumptable at 0x0001413480b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockExclusive((PSRWLOCK)(lVar8 + 0x128));
      return;
    }
    FUN_144aa3818(*(longlong *)(lVar8 + 0x98) + 0x160,param_4);
    return;
  }
  return;
}



// FUNCTION 141348142 FUN_141348142 body=41 status=ok
// SIG undefined FUN_141348142(void)

void FUN_141348142(longlong param_1,undefined8 param_2)

{
  FUN_140c8307c();
  FUN_140c7b284(param_1 + 0x638,param_2);
  return;
}



// FUNCTION 14134816c FUN_14134816c body=219 status=ok
// SIG undefined FUN_14134816c(void)

undefined8 FUN_14134816c(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = *param_2;
  if (lVar2 == 0) {
    return 0;
  }
  lVar1 = FUN_1406d1670();
  if (lVar1 == 0) {
    return 0;
  }
  if (*(int *)(lVar2 + 0x38) < *(int *)(lVar1 + 0x38)) {
    return 0;
  }
  if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) !=
      lVar1 + 0x30) {
    return 0;
  }
  lVar2 = *param_2;
  if (lVar2 == 0) {
    return 0;
  }
  if (*(char *)(param_1 + 0xb8) != '\x01') {
    return 0;
  }
  lVar1 = FUN_1406d1670();
  if (((lVar1 == 0) || (*(int *)(lVar2 + 0x38) < *(int *)(lVar1 + 0x38))) ||
     (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) !=
      lVar1 + 0x30)) {
    lVar2 = 0;
  }
  else {
    lVar2 = *param_2;
  }
  lVar1 = *(longlong *)(param_1 + 0xa8);
  if (lVar1 == 0) {
    return 0;
  }
  if (*(int *)(lVar2 + 0x38) < *(int *)(lVar1 + 0x38)) {
    return 0;
  }
  if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
      lVar1 + 0x30) {
    lVar2 = *param_2;
    if (((lVar2 == 0) || (lVar1 = FUN_1406d1670(), lVar1 == 0)) ||
       ((*(int *)(lVar2 + 0x38) < *(int *)(lVar1 + 0x38) ||
        (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) !=
         lVar1 + 0x30)))) {
      lVar2 = 0;
    }
    else {
      lVar2 = *param_2;
    }
    uVar3 = FUN_143729cb8(param_1,lVar2);
    return uVar3;
  }
  return 0;
}



// FUNCTION 141348248 FUN_141348248 body=535 status=ok
// SIG undefined FUN_141348248(void)

void FUN_141348248(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_68 [32];
  undefined1 local_48 [8];
  undefined1 local_40 [16];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar2 = *(longlong **)(param_1 + 0x108);
  if (plVar2 == (longlong *)0x0) {
LAB_141348278:
    if (*param_2 == 0) goto LAB_141348367;
  }
  else {
    iVar6 = (int)plVar2[1];
    do {
      if (iVar6 == 0) goto LAB_141348278;
      LOCK();
      iVar5 = (int)plVar2[1];
      bVar8 = iVar6 == iVar5;
      if (bVar8) {
        *(int *)(plVar2 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar8);
    lVar3 = *(longlong *)(param_1 + 0x100);
    lVar4 = *param_2;
    LOCK();
    plVar7 = plVar2 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
    if (lVar3 == lVar4) goto LAB_141348367;
  }
  plVar2 = *(longlong **)(param_1 + 0x108);
  if (plVar2 != (longlong *)0x0) {
    iVar6 = (int)plVar2[1];
    do {
      if (iVar6 == 0) goto LAB_1413482c1;
      LOCK();
      iVar5 = (int)plVar2[1];
      bVar8 = iVar6 == iVar5;
      if (bVar8) {
        *(int *)(plVar2 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar8);
    if (*(longlong *)(param_1 + 0x100) != 0) {
      FUN_140457ffc(*(longlong *)(param_1 + 0x100) + 0x78,param_1);
    }
    LOCK();
    plVar7 = plVar2 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
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
LAB_1413482c1:
  *(longlong *)(param_1 + 0x100) = *param_2;
  plVar2 = (longlong *)param_2[1];
  plVar7 = *(longlong **)(param_1 + 0x108);
  if (plVar7 != plVar2) {
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
      UNLOCK();
      plVar7 = *(longlong **)(param_1 + 0x108);
    }
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar7 + 0x10))();
      }
    }
    *(longlong **)(param_1 + 0x108) = plVar2;
    plVar7 = plVar2;
  }
  if (plVar7 != (longlong *)0x0) {
    iVar6 = (int)plVar7[1];
    do {
      if (iVar6 == 0) goto LAB_141348367;
      LOCK();
      iVar5 = (int)plVar7[1];
      bVar8 = iVar6 == iVar5;
      if (bVar8) {
        *(int *)(plVar7 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar8);
    lVar3 = *(longlong *)(param_1 + 0x100);
    if (lVar3 != 0) {
      FUN_145907bce(local_40,param_1);
      FUN_1448b6402(lVar3 + 0x78,local_48,local_40);
      FUN_1449db362(local_40);
      FUN_141348460(param_1,1);
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
LAB_141348367:
  plVar2 = (longlong *)param_2[1];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar2 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
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
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141348460 FUN_141348460 body=262 status=ok
// SIG undefined FUN_141348460(void)

void FUN_141348460(longlong param_1,undefined4 param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  bool bVar7;
  undefined1 auStack_88 [32];
  undefined1 local_68 [24];
  longlong local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar2 = *(longlong **)(param_1 + 0x108);
  if (plVar2 != (longlong *)0x0) {
    iVar4 = (int)plVar2[1];
    do {
      if (iVar4 == 0) goto LAB_141348543;
      LOCK();
      iVar3 = (int)plVar2[1];
      bVar7 = iVar4 == iVar3;
      if (bVar7) {
        *(int *)(plVar2 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
    } while (!bVar7);
    lVar6 = *(longlong *)(param_1 + 0x100);
    if (lVar6 != 0) {
      FUN_14073f620(local_68,*(undefined8 *)(param_1 + 0xf8));
      iVar4 = FUN_1406ba864(lVar6,local_68,0);
      if (local_50 != 0) {
        FUN_1400020a8();
      }
      if ((((iVar4 == 2) && (plVar5 = (longlong *)FUN_140d80fb0(param_1), plVar5 != (longlong *)0x0)
           ) && (lVar6 = (**(code **)(*plVar5 + 0x2b8))(plVar5), lVar6 != 0)) &&
         (plVar5 = *(longlong **)(lVar6 + 0xe0), plVar5 != (longlong *)0x0)) {
        (**(code **)(*plVar5 + 0x68))(plVar5,param_1 + 0x18,*(undefined4 *)(param_1 + 0x28),param_2)
        ;
      }
    }
    LOCK();
    plVar5 = plVar2 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
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
LAB_141348543:
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141348568 FUN_141348568 body=234 status=ok
// SIG undefined FUN_141348568(void)

longlong *
FUN_141348568(longlong *param_1,undefined8 *param_2,undefined8 *param_3,undefined1 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  uVar6 = *param_2;
  plVar7 = (longlong *)param_2[1];
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
  }
  *puVar5 = &PTR_LAB_14a83c0e0;
  *(undefined1 *)(puVar5 + 1) = *param_4;
  LOCK();
  UNLOCK();
  lVar9 = DAT_14c758608 + 1;
  lVar8 = DAT_14c758608 + 1;
  if (lVar9 == 0) {
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 2;
    lVar8 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar8;
  puVar5[2] = lVar9;
  *puVar5 = &PTR_FUN_14b99f040;
  puVar5[3] = uVar6;
  puVar5[4] = plVar7;
  if (plVar7 == (longlong *)0x0) {
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    LOCK();
    *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
    LOCK();
    plVar1 = plVar7 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  return param_1;
}



// FUNCTION 141348652 FUN_141348652 body=452 status=ok
// SIG undefined FUN_141348652(void)

longlong FUN_141348652(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined2 *puVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 auStack_58 [32];
  longlong local_38;
  LARGE_INTEGER local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144a38768(param_2,L".ini",4,1);
  iVar2 = *(int *)(param_2 + 1);
  if (cVar1 == '\0') {
    if (iVar2 == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    else {
      puVar4 = (undefined2 *)*param_2;
    }
    FUN_1446f470e(&local_38,puVar4,1);
    lVar3 = 0x18;
    lVar8 = 0;
    do {
      if (*(longlong *)(param_1 + lVar3) == local_38) {
        lVar8 = param_1 + lVar3;
        goto LAB_14134878c;
      }
      lVar3 = lVar3 + 0x5f8;
    } while (lVar3 != 0x3bc8);
  }
  else {
    uVar6 = 0;
    iVar5 = iVar2 + -1;
    if (iVar2 == 0) {
      iVar5 = 0;
    }
    if (0 < iVar5) {
      if (iVar2 == 0) {
        puVar4 = &DAT_149dfb77a;
      }
      else {
        puVar4 = (undefined2 *)*param_2;
      }
      lVar8 = 0;
      uVar6 = 0;
      do {
        uVar7 = ((uint)(0x19 < (ushort)puVar4[lVar8] - 0x61) * 0x20 + (uint)(ushort)puVar4[lVar8]) -
                0x20;
        uVar9 = (uint)(uVar6 >> 8) ^
                *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar6 ^ uVar7) & 0xff) * 4);
        uVar6 = (ulonglong)
                (uVar9 >> 8 ^
                *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar9 & 0xff ^ uVar7 >> 8 & 0xff) * 4));
        lVar8 = lVar8 + 1;
      } while (iVar5 != (int)lVar8);
    }
    iVar2 = FUN_1407db052((longlong *)(param_1 + 0x3bc8),uVar6,param_2);
    if ((iVar2 != -1) &&
       (lVar8 = (longlong)iVar2 * 0x20 + *(longlong *)(param_1 + 0x3bc8), lVar8 != 0)) {
      lVar8 = *(longlong *)(lVar8 + 0x10);
LAB_14134878c:
      if (lVar8 != 0) {
        if (*(char *)(lVar8 + 0x40) == '\x01') {
          FUN_142776f26(lVar8);
        }
        if ((0.0 <= *(double *)(lVar8 + 0x5f0)) && (0 < DAT_14c866d30)) {
          QueryPerformanceCounter(&local_30);
          *(double *)(lVar8 + 0x5f0) = (double)local_30.QuadPart * DAT_14c83f420 + 16777216.0;
        }
        lVar8 = lVar8 + 0x450;
        goto LAB_1413487f3;
      }
    }
    lVar8 = 0;
  }
LAB_1413487f3:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar8;
}


