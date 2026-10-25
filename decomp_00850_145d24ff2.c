// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 145d24ff2 FUN_145d24ff2 body=762 status=ok
// SIG undefined FUN_145d24ff2(void)

void FUN_145d24ff2(longlong param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined4 *puVar5;
  uint uVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined1 auStack_c8 [40];
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  longlong local_88 [3];
  longlong local_70;
  longlong local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  iVar2 = *(int *)(param_1 + 0x2c);
  FUN_1447a1747(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x28));
  *(undefined4 *)(param_1 + 0x28) = 0;
  if ((iVar2 < 0) && (*(int *)(param_1 + 0x2c) != 0)) {
    FUN_1408be2c4(param_1 + 0x20,0);
  }
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
  if ((longlong)*(int *)(param_1 + 0x10) != 0) {
    local_a0 = *(longlong *)(param_1 + 8);
    local_98 = (longlong)*(int *)(param_1 + 0x10) * 0x448 + local_a0;
    do {
      if ((longlong)*(int *)(local_a0 + 0x418) != 0) {
        lVar9 = *(longlong *)(local_a0 + 0x410);
        local_90 = (longlong)*(int *)(local_a0 + 0x418) * 0x18 + lVar9;
        do {
          if ((longlong)*(int *)(lVar9 + 0x10) != 0) {
            plVar8 = *(longlong **)(lVar9 + 8);
            plVar7 = plVar8 + (longlong)*(int *)(lVar9 + 0x10) * 0xc;
LAB_145d25100:
            if ((((*(char *)((longlong)plVar8 + 0x5c) == '\x01') && (*plVar8 != 0)) &&
                (lVar3 = FUN_144873cc0(*plVar8 + 0x68), lVar3 != 0)) &&
               (FUN_1446ddc76(&local_68,"Value",1),
               (int)plVar8[2] != *(int *)((longlong)plVar8 + 0x3c))) {
              uVar1 = (uint)((ulonglong)local_68 >> 0x10);
              uVar6 = (uint)local_68 & 0xffff;
              plVar4 = (longlong *)plVar8[9];
              if ((longlong *)plVar8[9] == (longlong *)0x0) {
                plVar4 = plVar8 + 8;
              }
              iVar2 = *(int *)((longlong)plVar4 +
                              (ulonglong)
                              ((int)plVar8[10] - 1U &
                              (int)((ulonglong)local_68 >> 0x20) + ((uint)local_68 << 0x10 | uVar6)
                              + (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar6 >> 4)) * 4);
              if (iVar2 != -1) {
                do {
                  if (*(longlong *)(plVar8[1] + (longlong)iVar2 * 0x20) == local_68) {
                    FUN_1446ddc76(&local_70,"Description",1);
                    if ((int)plVar8[2] != *(int *)((longlong)plVar8 + 0x3c)) {
                      uVar1 = (uint)((ulonglong)local_70 >> 0x10);
                      uVar6 = (uint)local_70 & 0xffff;
                      plVar4 = plVar8 + 8;
                      if ((longlong *)plVar8[9] != (longlong *)0x0) {
                        plVar4 = (longlong *)plVar8[9];
                      }
                      iVar2 = *(int *)((longlong)plVar4 +
                                      (ulonglong)
                                      ((int)plVar8[10] - 1U &
                                      (int)((ulonglong)local_70 >> 0x20) +
                                      ((uint)local_70 << 0x10 | uVar6) +
                                      (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar6 >> 4)) * 4);
                      if (iVar2 != -1) {
                        goto LAB_145d25240;
                      }
                    }
                    break;
                  }
                  iVar2 = *(int *)((longlong)iVar2 * 0x20 + plVar8[1] + 0x18);
                } while (iVar2 != -1);
              }
            }
            goto LAB_145d2513c;
          }
LAB_145d2525d:
          lVar9 = lVar9 + 0x18;
        } while (lVar9 != local_90);
      }
      local_a0 = local_a0 + 0x448;
    } while (local_a0 != local_98);
  }
  if ((local_60 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
  while (iVar2 = *(int *)((longlong)iVar2 * 0x20 + plVar8[1] + 0x18), iVar2 != -1) {
LAB_145d25240:
    if (*(longlong *)(plVar8[1] + (longlong)iVar2 * 0x20) == local_70) {
      lVar3 = FUN_144873cc0(*plVar8 + 0x68);
      puVar5 = *(undefined4 **)(lVar3 + 8);
      if (puVar5 == (undefined4 *)0x0) {
        puVar5 = &DAT_14c9485f0;
      }
      local_88[0] = 0;
      local_88[1] = 0;
      FUN_1400b2348(puVar5,local_88,1);
      iVar2 = FUN_1405e9454(param_1 + 0x20,local_88);
      if (iVar2 != -1) {
        *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
      }
      if (local_88[0] != 0) {
        FUN_1400020a8();
      }
      break;
    }
  }
LAB_145d2513c:
  plVar8 = plVar8 + 0xc;
  if (plVar8 == plVar7) goto LAB_145d2525d;
  goto LAB_145d25100;
}



// FUNCTION 145d252ee FUN_145d252ee body=203 status=ok
// SIG undefined FUN_145d252ee(void)

void FUN_145d252ee(longlong param_1,undefined8 param_2,byte *param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong local_48;
  undefined1 local_3c [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  bVar1 = *param_3;
  if ((bVar1 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_78);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  iVar2 = *(int *)(param_1 + 0x10);
  iVar3 = *(int *)(param_1 + 0x3c);
  local_50 = param_1 + 0x80;
  *(undefined8 *)(param_1 + 0x80) = param_2;
  local_48 = param_1 + 0x88;
  *(byte *)(param_1 + 0x88) = bVar1;
  FUN_145d253d2(param_1 + 8,local_3c,&local_50,0);
  if (iVar2 == iVar3) {
    FUN_140f9708a(&DAT_14c9647b8,param_1);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d253d2 FUN_145d253d2 body=336 status=ok
// SIG undefined FUN_145d253d2(void)

undefined4 *
FUN_145d253d2(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  ulonglong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_145d255ba(param_1,local_50);
  puVar1 = (undefined1 *)param_3[1];
  uVar4 = *(ulonglong *)*param_3;
  *local_48 = uVar4;
  *(undefined1 *)(local_48 + 1) = *puVar1;
  *(undefined4 *)(local_48 + 2) = 0xffffffff;
  local_54 = local_50[0];
  uVar3 = ((uint)(uVar4 >> 0x14) & 0xffff ^ (uint)(uVar4 >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar3 = uVar3 >> 0x10 ^ uVar3;
  local_68 = param_4;
  cVar2 = FUN_145d25524(param_1,uVar3,local_48);
  if (cVar2 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar5) {
      uVar4 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar3 = *(int *)(param_1 + 0x48) - 1U & uVar3;
      *(uint *)((longlong)local_48 + 0x14) = uVar3;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_48 + 2) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_145d256ae(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d25524 FUN_145d25524 body=150 status=ok
// SIG undefined FUN_145d25524(void)

void FUN_145d25524(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
                  )

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 uVar5;
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
        plVar6 = (longlong *)(*param_1 + (longlong)iVar7 * 0x18);
        if (*plVar6 == *param_3) {
          lVar3 = *param_3;
          uVar1 = *(undefined4 *)((longlong)param_3 + 4);
          lVar4 = param_3[1];
          uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(int *)plVar6 = (int)lVar3;
          *(undefined4 *)((longlong)plVar6 + 4) = uVar1;
          *(int *)(plVar6 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar6 + 0xc) = uVar2;
          FUN_145753e2c((int)lVar3,*param_4,1);
          *param_4 = iVar7;
          uVar5 = 1;
          goto LAB_145d2558e;
        }
        iVar7 = (int)plVar6[2];
      } while (iVar7 != -1);
    }
  }
  uVar5 = 0;
LAB_145d2558e:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar5;
  }
  return;
}



// FUNCTION 145d255ba FUN_145d255ba body=243 status=ok
// SIG undefined FUN_145d255ba(void)

int * FUN_145d255ba(longlong *param_1,int *param_2)

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
      FUN_14482b872(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar5 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    iVar4 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar4 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar4 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x18);
    *(int *)(param_1 + 6) = iVar3;
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x18) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x18 + *param_1;
  return param_2;
}



// FUNCTION 145d256ae FUN_145d256ae body=474 status=ok
// SIG undefined FUN_145d256ae(void)

void FUN_145d256ae(longlong *param_1)

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
        uVar10 = *(ulonglong *)(lVar2 + lVar5 * 0x18);
        uVar8 = ((uint)(uVar10 >> 0x14) & 0xffff ^ (uint)(uVar10 >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0x14 + lVar5 * 0x18) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x10 + lVar5 * 0x18) =
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



// FUNCTION 145d2588a FUN_145d2588a body=59 status=ok
// SIG undefined FUN_145d2588a(void)

void FUN_145d2588a(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = DAT_14c8463e8;
  lVar1 = *(longlong *)(param_1 + 0x110);
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x248);
    *param_2 = *(undefined8 *)(lVar1 + 0x240);
    param_2[1] = uVar2;
    uVar2 = *(undefined8 *)(lVar1 + 600);
    param_2[2] = *(undefined8 *)(lVar1 + 0x250);
    param_2[3] = uVar2;
    return;
  }
  param_2[2] = DAT_14c8463e0;
  param_2[3] = uVar2;
  uVar2 = DAT_14c8463d8;
  *param_2 = DAT_14c8463d0;
  param_2[1] = uVar2;
  return;
}



// FUNCTION 145d258c6 FUN_145d258c6 body=40 status=ok
// SIG undefined FUN_145d258c6(void)

undefined8 FUN_145d258c6(undefined8 param_1,int param_2)

{
  FUN_145d258ee();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145d258ee FUN_145d258ee body=107 status=ok
// SIG undefined FUN_145d258ee(void)

void FUN_145d258ee(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a485be0;
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(param_1[0xb],*(undefined4 *)(param_1 + 0xc));
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145d2595a FUN_145d2595a body=62 status=ok
// SIG undefined FUN_145d2595a(void)

undefined8 * FUN_145d2595a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a5dc7b0;
  FUN_145d25998(param_1 + 5);
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145d25998 FUN_145d25998 body=84 status=ok
// SIG undefined FUN_145d25998(void)

void FUN_145d25998(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    lVar2 = lVar1;
    if ((0xfff < (ulonglong)(param_1[2] - lVar1)) &&
       (lVar2 = *(longlong *)(lVar1 + -8), 0x1f < (ulonglong)((lVar1 + -8) - lVar2))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_1400020a8(lVar2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



// FUNCTION 145d259ee FUN_145d259ee body=40 status=ok
// SIG undefined FUN_145d259ee(void)

undefined8 FUN_145d259ee(undefined8 param_1,int param_2)

{
  FUN_145d25a16();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145d25a16 FUN_145d25a16 body=107 status=ok
// SIG undefined FUN_145d25a16(void)

void FUN_145d25a16(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ab3aa40;
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x20] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
  }
  FUN_145a9e3aa(param_1);
  return;
}



// FUNCTION 145d25a82 FUN_145d25a82 body=40 status=ok
// SIG undefined FUN_145d25a82(void)

undefined8 FUN_145d25a82(undefined8 param_1,int param_2)

{
  FUN_145d25aaa();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145d25aaa FUN_145d25aaa body=107 status=ok
// SIG undefined FUN_145d25aaa(void)

void FUN_145d25aaa(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ac0f4f0;
  if (param_1[0x4b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x49] != 0) {
    FUN_1400020a8();
  }
  FUN_1412dafa6(param_1 + 0x3f);
  *param_1 = &PTR_FUN_14ac05a30;
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145d25b1a FUN_145d25b1a body=142 status=ok
// SIG undefined FUN_145d25b1a(void)

void FUN_145d25b1a(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1410fb170(puVar1,param_1);
  *puVar1 = &PTR_FUN_14acb29e0;
  puVar1[0x6c] = 0;
  *(undefined4 *)(puVar1 + 0x6d) = 0;
  puVar1[0x68] = 0;
  puVar1[0x69] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x36c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 0x374) = 0;
  puVar1[0x70] = 0;
  *(undefined4 *)(puVar1 + 0x71) = 0;
  puVar1[0x76] = 0;
  *(undefined4 *)(puVar1 + 0x77) = 0;
  puVar1[0x72] = 0;
  puVar1[0x73] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x3bc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 0x3c4) = 0;
  puVar1[0x7a] = 0;
  *(undefined4 *)(puVar1 + 0x7b) = 0;
  return;
}



// FUNCTION 145d25bb4 FUN_145d25bb4 body=136 status=ok
// SIG undefined FUN_145d25bb4(void)

undefined8 * FUN_145d25bb4(undefined8 *param_1)

{
  longlong lVar1;
  
  FUN_140834366();
  *param_1 = &PTR_FUN_14b1dd970;
  param_1[0x72] = 0;
  FUN_140daf67c(param_1 + 0x73);
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  *(undefined2 *)(param_1 + 0x7a) = 0xffff;
  param_1[0x7b] = 0;
  *(undefined2 *)(param_1 + 0x7c) = 0xffff;
  lVar1 = FUN_14113c964();
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  param_1[0x72] = lVar1;
  return param_1;
}



// FUNCTION 145d25c3c FUN_145d25c3c body=124 status=ok
// SIG undefined FUN_145d25c3c(void)

longlong FUN_145d25c3c(undefined8 *param_1)

{
  longlong lVar1;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined1 local_48 [24];
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = param_1[2];
  if (lVar1 == 0) {
    local_50 = *param_1;
    FUN_1446dcdd4(local_48);
    lVar1 = FUN_141537d6c(local_48);
    if (local_30 != 0) {
      FUN_1400020a8();
    }
    param_1[2] = lVar1;
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d25cba FUN_145d25cba body=40 status=ok
// SIG undefined FUN_145d25cba(void)

undefined8 FUN_145d25cba(undefined8 param_1,int param_2)

{
  FUN_145d25ce2();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145d25ce2 FUN_145d25ce2 body=107 status=ok
// SIG undefined FUN_145d25ce2(void)

void FUN_145d25ce2(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b4b6440;
  FUN_145c0f8b8(param_1[0xe],*(undefined4 *)(param_1 + 0xf));
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145d25d58 FUN_145d25d58 body=136 status=ok
// SIG undefined FUN_145d25d58(void)

undefined8 * FUN_145d25d58(undefined8 *param_1)

{
  FUN_144a0768c();
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined1 *)(param_1 + 0x13) = 1;
  param_1[0x14] = 0;
  *param_1 = &PTR_FUN_14b57db00;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  FUN_1446f8bcc(param_1 + 0x18,0);
  *(undefined4 *)(param_1 + 0x1a) = 0x3f800000;
  param_1[0x1b] = 0;
  return param_1;
}



// FUNCTION 145d25dec FUN_145d25dec body=136 status=ok
// SIG undefined FUN_145d25dec(void)

undefined8 * FUN_145d25dec(undefined8 *param_1)

{
  FUN_1410ab700();
  *param_1 = &PTR_FUN_14bced430;
  param_1[5] = &PTR_FUN_14bced6e0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined2 *)((longlong)param_1 + 0x54) = 1;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  return param_1;
}



// FUNCTION 145d25e74 FUN_145d25e74 body=287 status=ok
// SIG undefined FUN_145d25e74(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145d25e74(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9ae4e0) {
    FUN_144b3d300(&DAT_14c9ae4e0);
    if (DAT_14c9ae4e0 == -1) {
      FUN_145d25f94();
      FUN_140db5666(&DAT_14c9ae438,2,&DAT_14c9ae3d0,
                    L"TBasePassCSFSelfShadowedCachedPointIndirectLightingPolicySkylight",
                    L"/Engine/Private/BasePassPixelShader.usf",L"MainCS",5,1,FUN_14712bd70,
                    FUN_14712bd48,FUN_14174a7dc,&LAB_14712bd44,&LAB_14712ac0c,&LAB_14712ac08,0x130,0
                   );
      _DAT_14c9ae438 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142b7c343);
      _Init_thread_footer(&DAT_14c9ae4e0);
    }
  }
  return &DAT_14c9ae438;
}



// FUNCTION 145d25f94 FUN_145d25f94 body=205 status=ok
// SIG undefined FUN_145d25f94(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d25f94(void)

{
  if ((DAT_14c9ae437 & 2) == 0) {
    DAT_14c9ae437 = DAT_14c9ae437 | 2;
    _DAT_14c9ae3d8 = L"TBasePassCSFSelfShadowedCachedPointIndirectLightingPolicySkylight";
    _DAT_14c9ae3f0 = FUN_146826540;
    _DAT_14c9ae3f8 = FUN_146825d77;
    _DAT_14c9ae400 = FUN_146825fd6;
    _DAT_14c9ae408 = FUN_1407e02ea;
    _DAT_14c9ae410 = FUN_146826273;
    _DAT_14c9ae3e8 = FUN_14712bd0a;
    _DAT_14c9ae428 = 0xffffffff00000130;
    _DAT_14c9ae430 = 8;
    DAT_14c9ae434 = 0;
    _DAT_14c9ae418 = &LAB_14712bd40;
    FUN_145d26062();
    FUN_1407e00cc(&DAT_14c9ae3d0);
    return;
  }
  return;
}



// FUNCTION 145d26062 FUN_145d26062 body=133 status=ok
// SIG undefined FUN_145d26062(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d26062(void)

{
  _DAT_14c9b9ee8 = L"BASE";
  DAT_14c9b9f12 = 4;
  FUN_145d260e8();
  _DAT_14c9b9ef8 = DAT_14c9ae3e0;
  _DAT_14c9b9ef0 = &DAT_14c9b9f18;
  _DAT_14c9b9f00 = &LAB_14682652b;
  DAT_14c9ae3e0 = &DAT_14c9b9ee8;
  DAT_14c9ae435 = DAT_14c9ae435 + '\x01';
  _DAT_14c9b9f08 = 0x100000000;
  if (DAT_14c9b9f7c != '\0') {
    DAT_14c9ae436 = DAT_14c9ae436 + '\x01';
  }
  return;
}



// FUNCTION 145d260e8 FUN_145d260e8 body=200 status=ok
// SIG undefined FUN_145d260e8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d260e8(void)

{
  if ((DAT_14c9b9f7f & 2) != 0) {
    return;
  }
  DAT_14c9b9f7f = DAT_14c9b9f7f | 2;
  _DAT_14c9b9f20 = L"TBasePassComputeShaderBaseType";
  _DAT_14c9b9f38 = FUN_146826540;
  _DAT_14c9b9f40 = FUN_146825d77;
  _DAT_14c9b9f48 = FUN_146825fd6;
  _DAT_14c9b9f50 = FUN_1407e02ea;
  _DAT_14c9b9f58 = FUN_146826273;
  _DAT_14c9b9f30 = FUN_14713c3c2;
  _DAT_14c9b9f70 = 0xffffffff00000130;
  _DAT_14c9b9f78 = 8;
  DAT_14c9b9f7c = 0;
  _DAT_14c9b9f60 = &LAB_14713c3f8;
  FUN_145d261b0();
  FUN_1407e00cc(&DAT_14c9b9f18);
  return;
}



// FUNCTION 145d261b0 FUN_145d261b0 body=133 status=ok
// SIG undefined FUN_145d261b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d261b0(void)

{
  _DAT_14c9b9f80 = L"BASE";
  DAT_14c9b9faa = 4;
  FUN_145d26236();
  _DAT_14c9b9f90 = DAT_14c9b9f28;
  _DAT_14c9b9f88 = &DAT_14c9b9fb0;
  _DAT_14c9b9f98 = &LAB_14682652b;
  DAT_14c9b9f28 = &DAT_14c9b9f80;
  DAT_14c9b9f7d = DAT_14c9b9f7d + '\x01';
  _DAT_14c9b9fa0 = 0x100000000;
  if (DAT_14c9ba014 != '\0') {
    DAT_14c9b9f7e = DAT_14c9b9f7e + '\x01';
  }
  return;
}



// FUNCTION 145d26236 FUN_145d26236 body=210 status=ok
// SIG undefined FUN_145d26236(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d26236(void)

{
  if ((DAT_14c9ba017 & 2) == 0) {
    DAT_14c9ba017 = DAT_14c9ba017 | 2;
    _DAT_14c9b9fb8 = L"TBasePassComputeShaderPolicyParamType";
    _DAT_14c9b9fd0 = FUN_146826540;
    _DAT_14c9b9fd8 = FUN_146825d77;
    _DAT_14c9b9fe0 = FUN_146825fd6;
    _DAT_14c9b9fe8 = FUN_1407e02ea;
    _DAT_14c9b9ff0 = FUN_146826273;
    _DAT_14c9b9fc8 = FUN_14713c3fc;
    _DAT_14c9ba008 = 0xffffffff00000130;
    _DAT_14c9ba010 = 8;
    DAT_14c9ba014 = 0;
    _DAT_14c9b9ff8 = &LAB_14713c432;
    FUN_145d26308();
    FUN_145d2691e();
    FUN_1407e00cc(&DAT_14c9b9fb0);
    return;
  }
  return;
}



// FUNCTION 145d26308 FUN_145d26308 body=121 status=ok
// SIG undefined FUN_145d26308(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d26308(void)

{
  FUN_145d26382();
  _DAT_14c9ba018 = L"ReflectionCaptureBuffer";
  DAT_14c9ba042 = FUN_140850cc5();
  _DAT_14c9ba020 = FUN_14106a12a();
  _DAT_14c9ba030 = &LAB_14682652b;
  _DAT_14c9ba038 = 0x100000110;
  _DAT_14c9ba040 = 0;
  _DAT_14c9ba028 = DAT_14c9b9fc0;
  DAT_14c9b9fc0 = &DAT_14c9ba018;
  return;
}



// FUNCTION 145d26382 FUN_145d26382 body=121 status=ok
// SIG undefined FUN_145d26382(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d26382(void)

{
  FUN_145d263fc();
  _DAT_14c9ba048 = L"ShadingOutputsParam";
  DAT_14c9ba072 = FUN_140850cc5();
  _DAT_14c9ba050 = FUN_14106a12a();
  _DAT_14c9ba060 = &LAB_14682652b;
  _DAT_14c9ba068 = 0x100000112;
  _DAT_14c9ba070 = 0;
  _DAT_14c9ba058 = DAT_14c9b9fc0;
  DAT_14c9b9fc0 = &DAT_14c9ba048;
  return;
}



// FUNCTION 145d263fc FUN_145d263fc body=121 status=ok
// SIG undefined FUN_145d263fc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d263fc(void)

{
  FUN_145d26476();
  _DAT_14c9ba078 = L"ViewRectParam";
  DAT_14c9ba0a2 = FUN_140850cc5();
  _DAT_14c9ba080 = FUN_140ec6960();
  _DAT_14c9ba090 = &LAB_14682652b;
  _DAT_14c9ba098 = 0x100000114;
  _DAT_14c9ba0a0 = 0;
  _DAT_14c9ba088 = DAT_14c9b9fc0;
  DAT_14c9b9fc0 = &DAT_14c9ba078;
  return;
}



// FUNCTION 145d26476 FUN_145d26476 body=121 status=ok
// SIG undefined FUN_145d26476(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d26476(void)

{
  FUN_145d264f0();
  _DAT_14c9ba0a8 = L"PassDataParam";
  DAT_14c9ba0d2 = FUN_140850cc5();
  _DAT_14c9ba0b0 = FUN_140ec6960();
  _DAT_14c9ba0c0 = &LAB_14682652b;
  _DAT_14c9ba0c8 = 0x10000011a;
  _DAT_14c9ba0d0 = 0;
  _DAT_14c9ba0b8 = DAT_14c9b9fc0;
  DAT_14c9b9fc0 = &DAT_14c9ba0a8;
  return;
}



// FUNCTION 145d264f0 FUN_145d264f0 body=121 status=ok
// SIG undefined FUN_145d264f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d264f0(void)

{
  FUN_145d2656a();
  _DAT_14c9ba0d8 = L"Target0";
  DAT_14c9ba102 = FUN_140850cc5();
  _DAT_14c9ba0e0 = FUN_1410b9266();
  _DAT_14c9ba0f0 = &LAB_14682652b;
  _DAT_14c9ba0f8 = 0x100000120;
  _DAT_14c9ba100 = 0;
  _DAT_14c9ba0e8 = DAT_14c9b9fc0;
  DAT_14c9b9fc0 = &DAT_14c9ba0d8;
  return;
}



// FUNCTION 145d2656a FUN_145d2656a body=121 status=ok
// SIG undefined FUN_145d2656a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d2656a(void)

{
  FUN_145d265e4();
  _DAT_14c9ba108 = L"Target1";
  DAT_14c9ba132 = FUN_140850cc5();
  _DAT_14c9ba110 = FUN_1410b9266();
  _DAT_14c9ba120 = &LAB_14682652b;
  _DAT_14c9ba128 = 0x100000121;
  _DAT_14c9ba130 = 0;
  _DAT_14c9ba118 = DAT_14c9b9fc0;
  DAT_14c9b9fc0 = &DAT_14c9ba108;
  return;
}



// FUNCTION 145d265e4 FUN_145d265e4 body=121 status=ok
// SIG undefined FUN_145d265e4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d265e4(void)

{
  FUN_145d2665e();
  _DAT_14c9ba138 = L"Target2";
  DAT_14c9ba162 = FUN_140850cc5();
  _DAT_14c9ba140 = FUN_1410b9266();
  _DAT_14c9ba150 = &LAB_14682652b;
  _DAT_14c9ba158 = 0x100000122;
  _DAT_14c9ba160 = 0;
  _DAT_14c9ba148 = DAT_14c9b9fc0;
  DAT_14c9b9fc0 = &DAT_14c9ba138;
  return;
}



// FUNCTION 145d2665e FUN_145d2665e body=121 status=ok
// SIG undefined FUN_145d2665e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d2665e(void)

{
  FUN_145d266d8();
  _DAT_14c9ba168 = L"Target3";
  DAT_14c9ba192 = FUN_140850cc5();
  _DAT_14c9ba170 = FUN_1410b9266();
  _DAT_14c9ba180 = &LAB_14682652b;
  _DAT_14c9ba188 = 0x100000123;
  _DAT_14c9ba190 = 0;
  _DAT_14c9ba178 = DAT_14c9b9fc0;
  DAT_14c9b9fc0 = &DAT_14c9ba168;
  return;
}



// FUNCTION 145d266d8 FUN_145d266d8 body=121 status=ok
// SIG undefined FUN_145d266d8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d266d8(void)

{
  FUN_145d26752();
  _DAT_14c9ba198 = L"Target4";
  DAT_14c9ba1c2 = FUN_140850cc5();
  _DAT_14c9ba1a0 = FUN_1410b9266();
  _DAT_14c9ba1b0 = &LAB_14682652b;
  _DAT_14c9ba1b8 = 0x100000124;
  _DAT_14c9ba1c0 = 0;
  _DAT_14c9ba1a8 = DAT_14c9b9fc0;
  DAT_14c9b9fc0 = &DAT_14c9ba198;
  return;
}



// FUNCTION 145d26752 FUN_145d26752 body=121 status=ok
// SIG undefined FUN_145d26752(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d26752(void)

{
  FUN_145d267cc();
  _DAT_14c9ba1c8 = L"Target5";
  DAT_14c9ba1f2 = FUN_140850cc5();
  _DAT_14c9ba1d0 = FUN_1410b9266();
  _DAT_14c9ba1e0 = &LAB_14682652b;
  _DAT_14c9ba1e8 = 0x100000125;
  _DAT_14c9ba1f0 = 0;
  _DAT_14c9ba1d8 = DAT_14c9b9fc0;
  DAT_14c9b9fc0 = &DAT_14c9ba1c8;
  return;
}



// FUNCTION 145d267cc FUN_145d267cc body=121 status=ok
// SIG undefined FUN_145d267cc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d267cc(void)

{
  FUN_145d26846();
  _DAT_14c9ba1f8 = L"Target6";
  DAT_14c9ba222 = FUN_140850cc5();
  _DAT_14c9ba200 = FUN_1410b9266();
  _DAT_14c9ba210 = &LAB_14682652b;
  _DAT_14c9ba218 = 0x100000126;
  _DAT_14c9ba220 = 0;
  _DAT_14c9ba208 = DAT_14c9b9fc0;
  DAT_14c9b9fc0 = &DAT_14c9ba1f8;
  return;
}



// FUNCTION 145d26846 FUN_145d26846 body=216 status=ok
// SIG undefined FUN_145d26846(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d26846(void)

{
  _DAT_14c9ba258 = L"Targets";
  DAT_14c9ba282 = FUN_140850cc5();
  _DAT_14c9ba260 = FUN_1410b9266();
  _DAT_14c9ba270 = &LAB_14682652b;
  _DAT_14c9ba278 = 0x100000128;
  _DAT_14c9ba280 = 0;
  _DAT_14c9ba268 = DAT_14c9b9fc0;
  DAT_14c9b9fc0 = &DAT_14c9ba258;
  _DAT_14c9ba228 = L"Target7";
  DAT_14c9ba252 = FUN_140850cc5();
  _DAT_14c9ba230 = FUN_1410b9266();
  _DAT_14c9ba240 = &LAB_14682652b;
  _DAT_14c9ba248 = 0x100000127;
  _DAT_14c9ba250 = 0;
  _DAT_14c9ba238 = DAT_14c9b9fc0;
  DAT_14c9b9fc0 = &DAT_14c9ba228;
  return;
}



// FUNCTION 145d2691e FUN_145d2691e body=235 status=ok
// SIG undefined FUN_145d2691e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d2691e(void)

{
  _DAT_14c9ba288 = L"BASE";
  DAT_14c9ba2b2 = 4;
  FUN_145d26a0a();
  _DAT_14c9ba298 = DAT_14c9b9fc0;
  _DAT_14c9ba290 = &DAT_14c9ba2b8;
  _DAT_14c9ba2a0 = &LAB_14682652b;
  DAT_14c9b9fc0 = &DAT_14c9ba288;
  DAT_14c9ba015 = DAT_14c9ba015 + '\x01';
  _DAT_14c9ba2a8 = &DAT_100000108;
  if (DAT_14c9ba31c != '\0') {
    DAT_14c9ba016 = DAT_14c9ba016 + '\x01';
  }
  _DAT_14c9ba380 = L"BASE";
  DAT_14c9ba3aa = 4;
  _DAT_14c9ba388 = FUN_141092e92();
  _DAT_14c9ba390 = DAT_14c9b9fc0;
  _DAT_14c9ba398 = &LAB_14682652b;
  DAT_14c9b9fc0 = &DAT_14c9ba380;
  DAT_14c9ba015 = DAT_14c9ba015 + '\x01';
  _DAT_14c9ba3a0 = 0x100000000;
  if (*(char *)(_DAT_14c9ba388 + 100) != '\0') {
    DAT_14c9ba016 = DAT_14c9ba016 + '\x01';
  }
  return;
}



// FUNCTION 145d26a0a FUN_145d26a0a body=205 status=ok
// SIG undefined FUN_145d26a0a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d26a0a(void)

{
  if ((DAT_14c9ba31f & 2) == 0) {
    DAT_14c9ba31f = DAT_14c9ba31f | 2;
    _DAT_14c9ba2c0 = L"ComputeParametersType";
    _DAT_14c9ba2d8 = FUN_146826540;
    _DAT_14c9ba2e0 = FUN_146825d77;
    _DAT_14c9ba2e8 = FUN_146825fd6;
    _DAT_14c9ba2f0 = FUN_1407e02ea;
    _DAT_14c9ba2f8 = FUN_146826273;
    _DAT_14c9ba2d0 = &LAB_14713c436;
    _DAT_14c9ba310 = 0xffffffff00000008;
    _DAT_14c9ba318 = 2;
    DAT_14c9ba31c = 0;
    _DAT_14c9ba300 = &LAB_14713c444;
    FUN_145d26ad8();
    FUN_1407e00cc(&DAT_14c9ba2b8);
    return;
  }
  return;
}



// FUNCTION 145d26ad8 FUN_145d26ad8 body=235 status=ok
// SIG undefined FUN_145d26ad8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d26ad8(void)

{
  _DAT_14c9ba320 = L"BASE";
  DAT_14c9ba34a = 4;
  FUN_145d1f01e();
  _DAT_14c9ba330 = DAT_14c9ba2c8;
  _DAT_14c9ba328 = &DAT_14c9b9668;
  _DAT_14c9ba338 = &LAB_14682652b;
  DAT_14c9ba2c8 = &DAT_14c9ba320;
  DAT_14c9ba31d = DAT_14c9ba31d + '\x01';
  _DAT_14c9ba340 = 0x100000006;
  if (DAT_14c9b96cc != '\0') {
    DAT_14c9ba31e = DAT_14c9ba31e + '\x01';
  }
  _DAT_14c9ba350 = L"BASE";
  DAT_14c9ba37a = 4;
  _DAT_14c9ba358 = FUN_1411cad6c();
  _DAT_14c9ba360 = DAT_14c9ba2c8;
  _DAT_14c9ba368 = &LAB_14682652b;
  DAT_14c9ba2c8 = &DAT_14c9ba350;
  DAT_14c9ba31d = DAT_14c9ba31d + '\x01';
  _DAT_14c9ba370 = 0x100000000;
  if (*(char *)(_DAT_14c9ba358 + 100) != '\0') {
    DAT_14c9ba31e = DAT_14c9ba31e + '\x01';
  }
  return;
}



// FUNCTION 145d26bc4 FUN_145d26bc4 body=287 status=ok
// SIG undefined FUN_145d26bc4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145d26bc4(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9af3e8) {
    FUN_144b3d300(&DAT_14c9af3e8);
    if (DAT_14c9af3e8 == -1) {
      FUN_145d26ce4();
      FUN_140db5666(&DAT_14c9af340,2,&DAT_14c9af2d8,
                    L"TBasePassCSFSelfShadowedVolumetricLightmapPolicySkylight",
                    L"/Engine/Private/BasePassPixelShader.usf",L"MainCS",5,1,FUN_14712c710,
                    FUN_14712c6e8,FUN_14174cf44,&LAB_14712c6e4,&LAB_14712ac0c,&LAB_14712ac08,0x130,0
                   );
      _DAT_14c9af340 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142b7c3df);
      _Init_thread_footer(&DAT_14c9af3e8);
    }
  }
  return &DAT_14c9af340;
}



// FUNCTION 145d26ce4 FUN_145d26ce4 body=205 status=ok
// SIG undefined FUN_145d26ce4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d26ce4(void)

{
  if ((DAT_14c9af33f & 2) == 0) {
    DAT_14c9af33f = DAT_14c9af33f | 2;
    _DAT_14c9af2e0 = L"TBasePassCSFSelfShadowedVolumetricLightmapPolicySkylight";
    _DAT_14c9af2f8 = FUN_146826540;
    _DAT_14c9af300 = FUN_146825d77;
    _DAT_14c9af308 = FUN_146825fd6;
    _DAT_14c9af310 = FUN_1407e02ea;
    _DAT_14c9af318 = FUN_146826273;
    _DAT_14c9af2f0 = FUN_14712c6aa;
    _DAT_14c9af330 = 0xffffffff00000130;
    _DAT_14c9af338 = 8;
    DAT_14c9af33c = 0;
    _DAT_14c9af320 = &LAB_14712c6e0;
    FUN_145d26db2();
    FUN_1407e00cc(&DAT_14c9af2d8);
    return;
  }
  return;
}



// FUNCTION 145d26db2 FUN_145d26db2 body=133 status=ok
// SIG undefined FUN_145d26db2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d26db2(void)

{
  _DAT_14c9bab68 = L"BASE";
  DAT_14c9bab92 = 4;
  FUN_145d26e38();
  _DAT_14c9bab78 = DAT_14c9af2e8;
  _DAT_14c9bab70 = &DAT_14c9bab98;
  _DAT_14c9bab80 = &LAB_14682652b;
  DAT_14c9af2e8 = &DAT_14c9bab68;
  DAT_14c9af33d = DAT_14c9af33d + '\x01';
  _DAT_14c9bab88 = 0x100000000;
  if (DAT_14c9babfc != '\0') {
    DAT_14c9af33e = DAT_14c9af33e + '\x01';
  }
  return;
}



// FUNCTION 145d26e38 FUN_145d26e38 body=200 status=ok
// SIG undefined FUN_145d26e38(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d26e38(void)

{
  if ((DAT_14c9babff & 2) != 0) {
    return;
  }
  DAT_14c9babff = DAT_14c9babff | 2;
  _DAT_14c9baba0 = L"TBasePassComputeShaderBaseType";
  _DAT_14c9babb8 = FUN_146826540;
  _DAT_14c9babc0 = FUN_146825d77;
  _DAT_14c9babc8 = FUN_146825fd6;
  _DAT_14c9babd0 = FUN_1407e02ea;
  _DAT_14c9babd8 = FUN_146826273;
  _DAT_14c9babb0 = FUN_14713c864;
  _DAT_14c9babf0 = 0xffffffff00000130;
  _DAT_14c9babf8 = 8;
  DAT_14c9babfc = 0;
  _DAT_14c9babe0 = &LAB_14713c89a;
  FUN_145d26f00();
  FUN_1407e00cc(&DAT_14c9bab98);
  return;
}



// FUNCTION 145d26f00 FUN_145d26f00 body=133 status=ok
// SIG undefined FUN_145d26f00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d26f00(void)

{
  _DAT_14c9bac00 = L"BASE";
  DAT_14c9bac2a = 4;
  FUN_145d26f86();
  _DAT_14c9bac10 = DAT_14c9baba8;
  _DAT_14c9bac08 = &DAT_14c9bac30;
  _DAT_14c9bac18 = &LAB_14682652b;
  DAT_14c9baba8 = &DAT_14c9bac00;
  DAT_14c9babfd = DAT_14c9babfd + '\x01';
  _DAT_14c9bac20 = 0x100000000;
  if (DAT_14c9bac94 != '\0') {
    DAT_14c9babfe = DAT_14c9babfe + '\x01';
  }
  return;
}



// FUNCTION 145d26f86 FUN_145d26f86 body=210 status=ok
// SIG undefined FUN_145d26f86(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d26f86(void)

{
  if ((DAT_14c9bac97 & 2) == 0) {
    DAT_14c9bac97 = DAT_14c9bac97 | 2;
    _DAT_14c9bac38 = L"TBasePassComputeShaderPolicyParamType";
    _DAT_14c9bac50 = FUN_146826540;
    _DAT_14c9bac58 = FUN_146825d77;
    _DAT_14c9bac60 = FUN_146825fd6;
    _DAT_14c9bac68 = FUN_1407e02ea;
    _DAT_14c9bac70 = FUN_146826273;
    _DAT_14c9bac48 = FUN_14713c89e;
    _DAT_14c9bac88 = 0xffffffff00000130;
    _DAT_14c9bac90 = 8;
    DAT_14c9bac94 = 0;
    _DAT_14c9bac78 = &LAB_14713c8d4;
    FUN_145d27058();
    FUN_145d2766e();
    FUN_1407e00cc(&DAT_14c9bac30);
    return;
  }
  return;
}



// FUNCTION 145d27058 FUN_145d27058 body=121 status=ok
// SIG undefined FUN_145d27058(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d27058(void)

{
  FUN_145d270d2();
  _DAT_14c9bac98 = L"ReflectionCaptureBuffer";
  DAT_14c9bacc2 = FUN_140850cc5();
  _DAT_14c9baca0 = FUN_14106a12a();
  _DAT_14c9bacb0 = &LAB_14682652b;
  _DAT_14c9bacb8 = 0x100000110;
  _DAT_14c9bacc0 = 0;
  _DAT_14c9baca8 = DAT_14c9bac40;
  DAT_14c9bac40 = &DAT_14c9bac98;
  return;
}



// FUNCTION 145d270d2 FUN_145d270d2 body=121 status=ok
// SIG undefined FUN_145d270d2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d270d2(void)

{
  FUN_145d2714c();
  _DAT_14c9bacc8 = L"ShadingOutputsParam";
  DAT_14c9bacf2 = FUN_140850cc5();
  _DAT_14c9bacd0 = FUN_14106a12a();
  _DAT_14c9bace0 = &LAB_14682652b;
  _DAT_14c9bace8 = 0x100000112;
  _DAT_14c9bacf0 = 0;
  _DAT_14c9bacd8 = DAT_14c9bac40;
  DAT_14c9bac40 = &DAT_14c9bacc8;
  return;
}



// FUNCTION 145d2714c FUN_145d2714c body=121 status=ok
// SIG undefined FUN_145d2714c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d2714c(void)

{
  FUN_145d271c6();
  _DAT_14c9bacf8 = L"ViewRectParam";
  DAT_14c9bad22 = FUN_140850cc5();
  _DAT_14c9bad00 = FUN_140ec6960();
  _DAT_14c9bad10 = &LAB_14682652b;
  _DAT_14c9bad18 = 0x100000114;
  _DAT_14c9bad20 = 0;
  _DAT_14c9bad08 = DAT_14c9bac40;
  DAT_14c9bac40 = &DAT_14c9bacf8;
  return;
}



// FUNCTION 145d271c6 FUN_145d271c6 body=121 status=ok
// SIG undefined FUN_145d271c6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d271c6(void)

{
  FUN_145d27240();
  _DAT_14c9bad28 = L"PassDataParam";
  DAT_14c9bad52 = FUN_140850cc5();
  _DAT_14c9bad30 = FUN_140ec6960();
  _DAT_14c9bad40 = &LAB_14682652b;
  _DAT_14c9bad48 = 0x10000011a;
  _DAT_14c9bad50 = 0;
  _DAT_14c9bad38 = DAT_14c9bac40;
  DAT_14c9bac40 = &DAT_14c9bad28;
  return;
}



// FUNCTION 145d27240 FUN_145d27240 body=121 status=ok
// SIG undefined FUN_145d27240(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d27240(void)

{
  FUN_145d272ba();
  _DAT_14c9bad58 = L"Target0";
  DAT_14c9bad82 = FUN_140850cc5();
  _DAT_14c9bad60 = FUN_1410b9266();
  _DAT_14c9bad70 = &LAB_14682652b;
  _DAT_14c9bad78 = 0x100000120;
  _DAT_14c9bad80 = 0;
  _DAT_14c9bad68 = DAT_14c9bac40;
  DAT_14c9bac40 = &DAT_14c9bad58;
  return;
}



// FUNCTION 145d272ba FUN_145d272ba body=121 status=ok
// SIG undefined FUN_145d272ba(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d272ba(void)

{
  FUN_145d27334();
  _DAT_14c9bad88 = L"Target1";
  DAT_14c9badb2 = FUN_140850cc5();
  _DAT_14c9bad90 = FUN_1410b9266();
  _DAT_14c9bada0 = &LAB_14682652b;
  _DAT_14c9bada8 = 0x100000121;
  _DAT_14c9badb0 = 0;
  _DAT_14c9bad98 = DAT_14c9bac40;
  DAT_14c9bac40 = &DAT_14c9bad88;
  return;
}



// FUNCTION 145d27334 FUN_145d27334 body=121 status=ok
// SIG undefined FUN_145d27334(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d27334(void)

{
  FUN_145d273ae();
  _DAT_14c9badb8 = L"Target2";
  DAT_14c9bade2 = FUN_140850cc5();
  _DAT_14c9badc0 = FUN_1410b9266();
  _DAT_14c9badd0 = &LAB_14682652b;
  _DAT_14c9badd8 = 0x100000122;
  _DAT_14c9bade0 = 0;
  _DAT_14c9badc8 = DAT_14c9bac40;
  DAT_14c9bac40 = &DAT_14c9badb8;
  return;
}



// FUNCTION 145d273ae FUN_145d273ae body=121 status=ok
// SIG undefined FUN_145d273ae(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d273ae(void)

{
  FUN_145d27428();
  _DAT_14c9bade8 = L"Target3";
  DAT_14c9bae12 = FUN_140850cc5();
  _DAT_14c9badf0 = FUN_1410b9266();
  _DAT_14c9bae00 = &LAB_14682652b;
  _DAT_14c9bae08 = 0x100000123;
  _DAT_14c9bae10 = 0;
  _DAT_14c9badf8 = DAT_14c9bac40;
  DAT_14c9bac40 = &DAT_14c9bade8;
  return;
}



// FUNCTION 145d27428 FUN_145d27428 body=121 status=ok
// SIG undefined FUN_145d27428(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d27428(void)

{
  FUN_145d274a2();
  _DAT_14c9bae18 = L"Target4";
  DAT_14c9bae42 = FUN_140850cc5();
  _DAT_14c9bae20 = FUN_1410b9266();
  _DAT_14c9bae30 = &LAB_14682652b;
  _DAT_14c9bae38 = 0x100000124;
  _DAT_14c9bae40 = 0;
  _DAT_14c9bae28 = DAT_14c9bac40;
  DAT_14c9bac40 = &DAT_14c9bae18;
  return;
}



// FUNCTION 145d274a2 FUN_145d274a2 body=121 status=ok
// SIG undefined FUN_145d274a2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d274a2(void)

{
  FUN_145d2751c();
  _DAT_14c9bae48 = L"Target5";
  DAT_14c9bae72 = FUN_140850cc5();
  _DAT_14c9bae50 = FUN_1410b9266();
  _DAT_14c9bae60 = &LAB_14682652b;
  _DAT_14c9bae68 = 0x100000125;
  _DAT_14c9bae70 = 0;
  _DAT_14c9bae58 = DAT_14c9bac40;
  DAT_14c9bac40 = &DAT_14c9bae48;
  return;
}



// FUNCTION 145d2751c FUN_145d2751c body=121 status=ok
// SIG undefined FUN_145d2751c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d2751c(void)

{
  FUN_145d27596();
  _DAT_14c9bae78 = L"Target6";
  DAT_14c9baea2 = FUN_140850cc5();
  _DAT_14c9bae80 = FUN_1410b9266();
  _DAT_14c9bae90 = &LAB_14682652b;
  _DAT_14c9bae98 = 0x100000126;
  _DAT_14c9baea0 = 0;
  _DAT_14c9bae88 = DAT_14c9bac40;
  DAT_14c9bac40 = &DAT_14c9bae78;
  return;
}



// FUNCTION 145d27596 FUN_145d27596 body=216 status=ok
// SIG undefined FUN_145d27596(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d27596(void)

{
  _DAT_14c9baed8 = L"Targets";
  DAT_14c9baf02 = FUN_140850cc5();
  _DAT_14c9baee0 = FUN_1410b9266();
  _DAT_14c9baef0 = &LAB_14682652b;
  _DAT_14c9baef8 = 0x100000128;
  _DAT_14c9baf00 = 0;
  _DAT_14c9baee8 = DAT_14c9bac40;
  DAT_14c9bac40 = &DAT_14c9baed8;
  _DAT_14c9baea8 = L"Target7";
  DAT_14c9baed2 = FUN_140850cc5();
  _DAT_14c9baeb0 = FUN_1410b9266();
  _DAT_14c9baec0 = &LAB_14682652b;
  _DAT_14c9baec8 = 0x100000127;
  _DAT_14c9baed0 = 0;
  _DAT_14c9baeb8 = DAT_14c9bac40;
  DAT_14c9bac40 = &DAT_14c9baea8;
  return;
}



// FUNCTION 145d2766e FUN_145d2766e body=235 status=ok
// SIG undefined FUN_145d2766e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d2766e(void)

{
  _DAT_14c9baf08 = L"BASE";
  DAT_14c9baf32 = 4;
  FUN_145d2775a();
  _DAT_14c9baf18 = DAT_14c9bac40;
  _DAT_14c9baf10 = &DAT_14c9baf38;
  _DAT_14c9baf20 = &LAB_14682652b;
  DAT_14c9bac40 = &DAT_14c9baf08;
  DAT_14c9bac95 = DAT_14c9bac95 + '\x01';
  _DAT_14c9baf28 = &DAT_100000108;
  if (DAT_14c9baf9c != '\0') {
    DAT_14c9bac96 = DAT_14c9bac96 + '\x01';
  }
  _DAT_14c9bb000 = L"BASE";
  DAT_14c9bb02a = 4;
  _DAT_14c9bb008 = FUN_141092e92();
  _DAT_14c9bb010 = DAT_14c9bac40;
  _DAT_14c9bb018 = &LAB_14682652b;
  DAT_14c9bac40 = &DAT_14c9bb000;
  DAT_14c9bac95 = DAT_14c9bac95 + '\x01';
  _DAT_14c9bb020 = 0x100000000;
  if (*(char *)(_DAT_14c9bb008 + 100) != '\0') {
    DAT_14c9bac96 = DAT_14c9bac96 + '\x01';
  }
  return;
}



// FUNCTION 145d2775a FUN_145d2775a body=205 status=ok
// SIG undefined FUN_145d2775a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d2775a(void)

{
  if ((DAT_14c9baf9f & 2) == 0) {
    DAT_14c9baf9f = DAT_14c9baf9f | 2;
    _DAT_14c9baf40 = L"ComputeParametersType";
    _DAT_14c9baf58 = FUN_146826540;
    _DAT_14c9baf60 = FUN_146825d77;
    _DAT_14c9baf68 = FUN_146825fd6;
    _DAT_14c9baf70 = FUN_1407e02ea;
    _DAT_14c9baf78 = FUN_146826273;
    _DAT_14c9baf50 = &LAB_14713c8d8;
    _DAT_14c9baf90 = 0xffffffff00000008;
    _DAT_14c9baf98 = 2;
    DAT_14c9baf9c = 0;
    _DAT_14c9baf80 = &LAB_14713c8e6;
    FUN_145d27828();
    FUN_1407e00cc(&DAT_14c9baf38);
    return;
  }
  return;
}



// FUNCTION 145d27828 FUN_145d27828 body=235 status=ok
// SIG undefined FUN_145d27828(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d27828(void)

{
  _DAT_14c9bafa0 = L"BASE";
  DAT_14c9bafca = 4;
  FUN_145d1f01e();
  _DAT_14c9bafb0 = DAT_14c9baf48;
  _DAT_14c9bafa8 = &DAT_14c9b9668;
  _DAT_14c9bafb8 = &LAB_14682652b;
  DAT_14c9baf48 = &DAT_14c9bafa0;
  DAT_14c9baf9d = DAT_14c9baf9d + '\x01';
  _DAT_14c9bafc0 = 0x100000006;
  if (DAT_14c9b96cc != '\0') {
    DAT_14c9baf9e = DAT_14c9baf9e + '\x01';
  }
  _DAT_14c9bafd0 = L"BASE";
  DAT_14c9baffa = 4;
  _DAT_14c9bafd8 = FUN_1411cad6c();
  _DAT_14c9bafe0 = DAT_14c9baf48;
  _DAT_14c9bafe8 = &LAB_14682652b;
  DAT_14c9baf48 = &DAT_14c9bafd0;
  DAT_14c9baf9d = DAT_14c9baf9d + '\x01';
  _DAT_14c9baff0 = 0x100000000;
  if (*(char *)(_DAT_14c9bafd8 + 100) != '\0') {
    DAT_14c9baf9e = DAT_14c9baf9e + '\x01';
  }
  return;
}



// FUNCTION 145d27914 FUN_145d27914 body=40 status=ok
// SIG undefined FUN_145d27914(void)

undefined8 FUN_145d27914(undefined8 param_1,int param_2)

{
  FUN_145d2793c();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145d2793c FUN_145d2793c body=97 status=ok
// SIG undefined FUN_145d2793c(void)

void FUN_145d2793c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a758d70;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  FUN_145d279ce(param_1 + 7);
  FUN_145d2799d(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145d2799d FUN_145d2799d body=49 status=ok
// SIG undefined FUN_145d2799d(void)

void FUN_145d2799d(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 8);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145d279ce FUN_145d279ce body=53 status=ok
// SIG undefined FUN_145d279ce(void)

void FUN_145d279ce(longlong *param_1)

{
  FUN_145d27a04();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d27a04 FUN_145d27a04 body=350 status=ok
// SIG undefined FUN_145d27a04(void)

void FUN_145d27a04(longlong *param_1)

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
      if (*(longlong *)(*local_68 + 0x10 + (longlong)iStack_4c * 0x30) != 0) {
        FUN_1400020a8();
      }
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
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145d27b64 FUN_145d27b64 body=77 status=ok
// SIG undefined FUN_145d27b64(void)

void FUN_145d27b64(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x380);
  if (lVar1 != 0) {
    FUN_145d27bb2(lVar1,param_2,param_3);
    FUN_145d27c20(lVar1,param_2,param_3);
    return;
  }
  return;
}



// FUNCTION 145d27bb2 FUN_145d27bb2 body=108 status=ok
// SIG undefined FUN_145d27bb2(void)

void FUN_145d27bb2(longlong *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *param_3;
  uStack_2c = param_3[1];
  uStack_28 = param_3[2];
  uStack_24 = param_3[3];
  local_20 = *(undefined8 *)(param_3 + 4);
  local_38 = param_2;
  uVar1 = FUN_14477b072(local_30,DAT_14cb55f70);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_38);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d27c20 FUN_145d27c20 body=108 status=ok
// SIG undefined FUN_145d27c20(void)

void FUN_145d27c20(longlong *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *param_3;
  uStack_2c = param_3[1];
  uStack_28 = param_3[2];
  uStack_24 = param_3[3];
  local_20 = *(undefined8 *)(param_3 + 4);
  local_38 = param_2;
  uVar1 = FUN_14477b072(local_30,DAT_14cb55f80);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_38);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d27c8e FUN_145d27c8e body=96 status=ok
// SIG undefined FUN_145d27c8e(void)

void FUN_145d27c8e(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_2 + 1);
  if (uVar1 != 0) {
    iVar2 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_145d27d22(param_1,iVar2);
    }
    FUN_145d27cee((longlong)iVar2 * 0x18 + *param_1,*param_2,uVar1);
    return;
  }
  return;
}



// FUNCTION 145d27cee FUN_145d27cee body=52 status=ok
// SIG undefined FUN_145d27cee(void)

void FUN_145d27cee(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_144a76ff0(param_1,param_2);
    param_1 = param_1 + 0x18;
    param_2 = param_2 + 0x18;
  }
  return;
}



// FUNCTION 145d27d22 FUN_145d27d22 body=147 status=ok
// SIG undefined FUN_145d27d22(void)

void FUN_145d27d22(longlong param_1,int param_2)

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



// FUNCTION 145d27db6 FUN_145d27db6 body=37 status=ok
// SIG undefined FUN_145d27db6(void)

void FUN_145d27db6(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_145d27ddc();
  *param_3 = uVar1;
  return;
}



// FUNCTION 145d27ddc FUN_145d27ddc body=84 status=ok
// SIG undefined FUN_145d27ddc(void)

undefined1 FUN_145d27ddc(longlong *param_1)

{
  byte bVar1;
  longlong lVar2;
  
  lVar2 = (**(code **)(*param_1 + 0x180))();
  if ((((lVar2 != 0) && (*(longlong *)(lVar2 + 0x1f0) != 0)) &&
      (lVar2 = FUN_140e5f22c(), lVar2 != 0)) &&
     ((*(longlong *)(lVar2 + 0x30) != 0 &&
      (bVar1 = FUN_145d27e30(*(longlong *)(lVar2 + 0x30),(int)param_1[0x1c]), bVar1 < 2)))) {
    return 0;
  }
  return (char)param_1[0x6c];
}



// FUNCTION 145d27e30 FUN_145d27e30 body=247 status=ok
// SIG undefined FUN_145d27e30(void)

byte FUN_145d27e30(undefined8 param_1,undefined4 param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  byte bVar4;
  undefined1 auStack_c8 [40];
  undefined8 local_a0;
  undefined2 local_98;
  undefined1 local_96;
  undefined8 local_94;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 *local_38;
  code *local_30;
  undefined8 **local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar1 = (longlong *)FUN_140773fe2();
  if (plVar1 == (longlong *)0x0) {
    bVar4 = 0;
  }
  else {
    uVar2 = FUN_14111b7b0(param_1);
    lVar3 = (**(code **)(*plVar1 + 0x2d0))(plVar1,param_2,uVar2);
    bVar4 = 0;
    if (lVar3 != 0) {
      local_a0 = 0x3000300000000;
      local_98 = 3;
      local_96 = 3;
      local_94 = 0;
      local_88 = 0;
      uStack_80 = 0;
      local_78 = 0;
      uStack_70 = 0;
      local_68 = 0;
      uStack_60 = 0;
      local_58 = 0;
      uStack_50 = 0;
      local_48 = 0;
      uStack_40 = 0;
      local_28 = &local_38;
      local_30 = FUN_143ef2b5a;
      local_38 = &local_a0;
      bifrost::account::get(*(undefined8 *)(lVar3 + 0x2b8));
      if (local_a0._1_1_ < 4) {
        bVar4 = local_a0._1_1_;
      }
      FUN_14111b87a(&local_a0);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d27f28 FUN_145d27f28 body=26 status=ok
// SIG undefined FUN_145d27f28(void)

void FUN_145d27f28(undefined8 param_1)

{
  FUN_145d27f42();
  FUN_140cef0ca(param_1);
  return;
}



// FUNCTION 145d27f42 FUN_145d27f42 body=188 status=ok
// SIG undefined FUN_145d27f42(void)

void FUN_145d27f42(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *(undefined8 **)(param_1 + 0x118);
  iVar1 = FUN_145d28000((uint)((ulonglong)local_30 >> 0x20) ^ (uint)local_30);
  lVar2 = (longlong)iVar1 * 0x20 + DAT_14cb7c208;
  if (lVar2 != 0 && iVar1 != -1) {
    local_38 = 0;
    FUN_14485c47a(&local_38,param_1);
    local_30 = &local_38;
    FUN_145d282ee(lVar2 + 8);
    if (*(int *)(lVar2 + 0x10) == 0) {
      FUN_145d280ce(*(undefined8 *)(param_1 + 0x118));
    }
  }
  *(undefined8 *)(param_1 + 0x118) = 0;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d28000 FUN_145d28000 body=205 status=ok
// SIG undefined FUN_145d28000(void)

int FUN_145d28000(uint param_1,undefined8 *param_2)

{
  char cVar1;
  undefined *puVar2;
  int iVar3;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14cb7c210 != DAT_14cb7c23c) {
    puVar2 = &DAT_14cb7c240;
    if (DAT_14cb7c248 != (undefined *)0x0) {
      puVar2 = DAT_14cb7c248;
    }
    iVar3 = *(int *)(puVar2 + (ulonglong)(DAT_14cb7c250 - 1U & param_1) * 4);
    if (iVar3 != -1) {
      do {
        local_40 = *param_2;
        local_38 = *(undefined8 *)(DAT_14cb7c208 + (longlong)iVar3 * 0x20);
        cVar1 = FUN_140d09c9e(&local_38,&local_40);
        if (cVar1 != '\0') goto LAB_145d2802d;
        iVar3 = *(int *)(DAT_14cb7c208 + 0x18 + (longlong)iVar3 * 0x20);
      } while (iVar3 != -1);
    }
  }
  iVar3 = -1;
LAB_145d2802d:
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar3;
}



// FUNCTION 145d280ce FUN_145d280ce body=261 status=ok
// SIG undefined FUN_145d280ce(void)

void FUN_145d280ce(undefined8 param_1)

{
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  undefined *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 *puVar7;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  lVar1 = DAT_14cb7c208;
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14cb7c210 != DAT_14cb7c23c) {
    puVar4 = &DAT_14cb7c240;
    if (DAT_14cb7c248 != (undefined *)0x0) {
      puVar4 = DAT_14cb7c248;
    }
    uVar3 = (longlong)(int)((uint)((ulonglong)param_1 >> 0x20) ^ (uint)param_1) &
            (longlong)DAT_14cb7c250 - 1U;
    if ((longlong)*(int *)(puVar4 + uVar3 * 4) != -1) {
      lVar6 = (longlong)*(int *)(puVar4 + uVar3 * 4) * 0x20;
      local_38 = *(undefined8 *)(DAT_14cb7c208 + lVar6);
      local_40 = param_1;
      cVar2 = FUN_140d09c9e();
      if (cVar2 == '\0') {
        lVar1 = lVar1 + lVar6;
        do {
          lVar5 = lVar1;
          lVar6 = (longlong)*(int *)(lVar5 + 0x18);
          if (lVar6 == -1) goto LAB_145d28165;
          lVar6 = lVar6 * 0x20;
          lVar1 = DAT_14cb7c208 + lVar6;
          local_38 = *(undefined8 *)(DAT_14cb7c208 + lVar6);
          local_40 = param_1;
          cVar2 = FUN_140d09c9e(&local_38,&local_40);
        } while (cVar2 == '\0');
        puVar7 = (undefined4 *)(lVar5 + 0x18);
      }
      else {
        puVar7 = (undefined4 *)(puVar4 + uVar3 * 4);
      }
      FUN_145d281d4(*puVar7);
    }
  }
LAB_145d28165:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d281d4 FUN_145d281d4 body=96 status=ok
// SIG undefined FUN_145d281d4(void)

void FUN_145d281d4(int param_1)

{
  int iVar1;
  undefined *puVar2;
  int *piVar3;
  longlong lVar4;
  
  puVar2 = &DAT_14cb7c240;
  if (DAT_14cb7c248 != (undefined *)0x0) {
    puVar2 = DAT_14cb7c248;
  }
  lVar4 = (longlong)*(int *)(DAT_14cb7c208 + 0x1c + (longlong)param_1 * 0x20);
  iVar1 = *(int *)(puVar2 + lVar4 * 4);
  if (iVar1 == param_1) {
    piVar3 = (int *)(puVar2 + lVar4 * 4);
  }
  else {
    do {
      piVar3 = (int *)(DAT_14cb7c208 + (longlong)iVar1 * 0x20 + 0x18);
      iVar1 = *piVar3;
    } while (iVar1 != param_1);
  }
  *piVar3 = *(int *)(DAT_14cb7c208 + (longlong)param_1 * 0x20 + 0x18);
  FUN_145d28234();
  return;
}



// FUNCTION 145d28234 FUN_145d28234 body=48 status=ok
// SIG undefined FUN_145d28234(void)

void FUN_145d28234(int param_1)

{
  if (*(longlong *)(DAT_14cb7c208 + 8 + (longlong)param_1 * 0x20) != 0) {
    FUN_1400020a8();
  }
  FUN_145d28264(param_1);
  return;
}



// FUNCTION 145d28264 FUN_145d28264 body=137 status=ok
// SIG undefined FUN_145d28264(void)

void FUN_145d28264(int param_1)

{
  byte bVar1;
  longlong lVar2;
  int iVar3;
  undefined4 *puVar4;
  
  lVar2 = DAT_14cb7c208;
  if (DAT_14cb7c23c != 0) {
    *(int *)(DAT_14cb7c208 + (longlong)DAT_14cb7c238 * 0x20) = param_1;
  }
  *(undefined4 *)(lVar2 + (longlong)param_1 * 0x20) = 0xffffffff;
  iVar3 = -1;
  if (0 < DAT_14cb7c23c) {
    iVar3 = DAT_14cb7c238;
  }
  *(int *)(lVar2 + (longlong)param_1 * 0x20 + 4) = iVar3;
  DAT_14cb7c23c = DAT_14cb7c23c + 1;
  puVar4 = &DAT_14cb7c218;
  if (DAT_14cb7c228 != (undefined4 *)0x0) {
    puVar4 = DAT_14cb7c228;
  }
  iVar3 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar3 = param_1;
  }
  bVar1 = (byte)param_1 & 0x1f;
  DAT_14cb7c238 = param_1;
  puVar4[iVar3 >> 5] = puVar4[iVar3 >> 5] & (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  return;
}



// FUNCTION 145d282ee FUN_145d282ee body=273 status=ok
// SIG undefined FUN_145d282ee(void)

void FUN_145d282ee(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  
  uVar1 = *(uint *)(param_1 + 1);
  lVar13 = (longlong)(int)uVar1;
  if (lVar13 != 0) {
    lVar2 = *param_1;
    bVar4 = FUN_145d28400(lVar2);
    uVar7 = 0;
    uVar8 = 0;
    do {
      uVar11 = (ulonglong)uVar8;
      uVar3 = uVar8 + 1;
      if ((int)(uVar8 + 1) < (int)uVar1) {
        uVar3 = uVar1;
      }
      lVar12 = lVar2 + 8 + uVar11 * 8;
      uVar9 = uVar8;
      uVar6 = uVar11;
      do {
        uVar6 = uVar6 + 1;
        uVar10 = uVar3;
        if (lVar13 <= (longlong)uVar6) break;
        bVar5 = FUN_145d28400(lVar12,*param_2);
        uVar9 = uVar9 + 1;
        lVar12 = lVar12 + 8;
        uVar10 = uVar9;
      } while ((bVar4 & 1) == bVar5);
      if ((bVar4 & 1) == 0) {
        if (uVar7 != uVar8) {
          memmove((void *)(lVar2 + (longlong)(int)uVar7 * 8),(void *)(lVar2 + uVar11 * 8),
                  (longlong)(int)(uVar10 - uVar8) << 3);
        }
        uVar7 = uVar7 + (uVar10 - uVar8);
      }
      uVar8 = uVar10;
      bVar4 = bVar4 ^ 1;
    } while ((longlong)uVar6 < lVar13);
    *(uint *)(param_1 + 1) = uVar7;
  }
  return;
}



// FUNCTION 145d28400 FUN_145d28400 body=55 status=ok
// SIG undefined FUN_145d28400(void)

ulonglong FUN_145d28400(int *param_1,int *param_2)

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



// FUNCTION 145d28438 FUN_145d28438 body=26 status=ok
// SIG undefined FUN_145d28438(void)

void FUN_145d28438(undefined8 param_1)

{
  FUN_145d28452();
  FUN_140cef0ca(param_1);
  return;
}



// FUNCTION 145d28452 FUN_145d28452 body=188 status=ok
// SIG undefined FUN_145d28452(void)

void FUN_145d28452(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *(undefined8 **)(param_1 + 0x90);
  iVar1 = FUN_145d28510((uint)((ulonglong)local_30 >> 0x20) ^ (uint)local_30);
  lVar2 = (longlong)iVar1 * 0x20 + DAT_14cb7d778;
  if (lVar2 != 0 && iVar1 != -1) {
    local_38 = 0;
    FUN_14485c47a(&local_38,param_1);
    local_30 = &local_38;
    FUN_145d287fe(lVar2 + 8);
    if (*(int *)(lVar2 + 0x10) == 0) {
      FUN_145d285de(*(undefined8 *)(param_1 + 0x90));
    }
  }
  *(undefined8 *)(param_1 + 0x90) = 0;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d28510 FUN_145d28510 body=205 status=ok
// SIG undefined FUN_145d28510(void)

int FUN_145d28510(uint param_1,undefined8 *param_2)

{
  char cVar1;
  undefined *puVar2;
  int iVar3;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14cb7d780 != DAT_14cb7d7ac) {
    puVar2 = &DAT_14cb7d7b0;
    if (DAT_14cb7d7b8 != (undefined *)0x0) {
      puVar2 = DAT_14cb7d7b8;
    }
    iVar3 = *(int *)(puVar2 + (ulonglong)(DAT_14cb7d7c0 - 1U & param_1) * 4);
    if (iVar3 != -1) {
      do {
        local_40 = *param_2;
        local_38 = *(undefined8 *)(DAT_14cb7d778 + (longlong)iVar3 * 0x20);
        cVar1 = FUN_140d09c9e(&local_38,&local_40);
        if (cVar1 != '\0') goto LAB_145d2853d;
        iVar3 = *(int *)(DAT_14cb7d778 + 0x18 + (longlong)iVar3 * 0x20);
      } while (iVar3 != -1);
    }
  }
  iVar3 = -1;
LAB_145d2853d:
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar3;
}



// FUNCTION 145d285de FUN_145d285de body=261 status=ok
// SIG undefined FUN_145d285de(void)

void FUN_145d285de(undefined8 param_1)

{
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  undefined *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 *puVar7;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  lVar1 = DAT_14cb7d778;
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14cb7d780 != DAT_14cb7d7ac) {
    puVar4 = &DAT_14cb7d7b0;
    if (DAT_14cb7d7b8 != (undefined *)0x0) {
      puVar4 = DAT_14cb7d7b8;
    }
    uVar3 = (longlong)(int)((uint)((ulonglong)param_1 >> 0x20) ^ (uint)param_1) &
            (longlong)DAT_14cb7d7c0 - 1U;
    if ((longlong)*(int *)(puVar4 + uVar3 * 4) != -1) {
      lVar6 = (longlong)*(int *)(puVar4 + uVar3 * 4) * 0x20;
      local_38 = *(undefined8 *)(DAT_14cb7d778 + lVar6);
      local_40 = param_1;
      cVar2 = FUN_140d09c9e();
      if (cVar2 == '\0') {
        lVar1 = lVar1 + lVar6;
        do {
          lVar5 = lVar1;
          lVar6 = (longlong)*(int *)(lVar5 + 0x18);
          if (lVar6 == -1) goto LAB_145d28675;
          lVar6 = lVar6 * 0x20;
          lVar1 = DAT_14cb7d778 + lVar6;
          local_38 = *(undefined8 *)(DAT_14cb7d778 + lVar6);
          local_40 = param_1;
          cVar2 = FUN_140d09c9e(&local_38,&local_40);
        } while (cVar2 == '\0');
        puVar7 = (undefined4 *)(lVar5 + 0x18);
      }
      else {
        puVar7 = (undefined4 *)(puVar4 + uVar3 * 4);
      }
      FUN_145d286e4(*puVar7);
    }
  }
LAB_145d28675:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d286e4 FUN_145d286e4 body=96 status=ok
// SIG undefined FUN_145d286e4(void)

void FUN_145d286e4(int param_1)

{
  int iVar1;
  undefined *puVar2;
  int *piVar3;
  longlong lVar4;
  
  puVar2 = &DAT_14cb7d7b0;
  if (DAT_14cb7d7b8 != (undefined *)0x0) {
    puVar2 = DAT_14cb7d7b8;
  }
  lVar4 = (longlong)*(int *)(DAT_14cb7d778 + 0x1c + (longlong)param_1 * 0x20);
  iVar1 = *(int *)(puVar2 + lVar4 * 4);
  if (iVar1 == param_1) {
    piVar3 = (int *)(puVar2 + lVar4 * 4);
  }
  else {
    do {
      piVar3 = (int *)(DAT_14cb7d778 + (longlong)iVar1 * 0x20 + 0x18);
      iVar1 = *piVar3;
    } while (iVar1 != param_1);
  }
  *piVar3 = *(int *)(DAT_14cb7d778 + (longlong)param_1 * 0x20 + 0x18);
  FUN_145d28744();
  return;
}



// FUNCTION 145d28744 FUN_145d28744 body=48 status=ok
// SIG undefined FUN_145d28744(void)

void FUN_145d28744(int param_1)

{
  if (*(longlong *)(DAT_14cb7d778 + 8 + (longlong)param_1 * 0x20) != 0) {
    FUN_1400020a8();
  }
  FUN_145d28774(param_1);
  return;
}



// FUNCTION 145d28774 FUN_145d28774 body=137 status=ok
// SIG undefined FUN_145d28774(void)

void FUN_145d28774(int param_1)

{
  byte bVar1;
  longlong lVar2;
  int iVar3;
  undefined4 *puVar4;
  
  lVar2 = DAT_14cb7d778;
  if (DAT_14cb7d7ac != 0) {
    *(int *)(DAT_14cb7d778 + (longlong)DAT_14cb7d7a8 * 0x20) = param_1;
  }
  *(undefined4 *)(lVar2 + (longlong)param_1 * 0x20) = 0xffffffff;
  iVar3 = -1;
  if (0 < DAT_14cb7d7ac) {
    iVar3 = DAT_14cb7d7a8;
  }
  *(int *)(lVar2 + (longlong)param_1 * 0x20 + 4) = iVar3;
  DAT_14cb7d7ac = DAT_14cb7d7ac + 1;
  puVar4 = &DAT_14cb7d788;
  if (DAT_14cb7d798 != (undefined4 *)0x0) {
    puVar4 = DAT_14cb7d798;
  }
  iVar3 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar3 = param_1;
  }
  bVar1 = (byte)param_1 & 0x1f;
  DAT_14cb7d7a8 = param_1;
  puVar4[iVar3 >> 5] = puVar4[iVar3 >> 5] & (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  return;
}



// FUNCTION 145d287fe FUN_145d287fe body=273 status=ok
// SIG undefined FUN_145d287fe(void)

void FUN_145d287fe(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  
  uVar1 = *(uint *)(param_1 + 1);
  lVar13 = (longlong)(int)uVar1;
  if (lVar13 != 0) {
    lVar2 = *param_1;
    bVar4 = FUN_145d28910(lVar2);
    uVar7 = 0;
    uVar8 = 0;
    do {
      uVar11 = (ulonglong)uVar8;
      uVar3 = uVar8 + 1;
      if ((int)(uVar8 + 1) < (int)uVar1) {
        uVar3 = uVar1;
      }
      lVar12 = lVar2 + 8 + uVar11 * 8;
      uVar9 = uVar8;
      uVar6 = uVar11;
      do {
        uVar6 = uVar6 + 1;
        uVar10 = uVar3;
        if (lVar13 <= (longlong)uVar6) break;
        bVar5 = FUN_145d28910(lVar12,*param_2);
        uVar9 = uVar9 + 1;
        lVar12 = lVar12 + 8;
        uVar10 = uVar9;
      } while ((bVar4 & 1) == bVar5);
      if ((bVar4 & 1) == 0) {
        if (uVar7 != uVar8) {
          memmove((void *)(lVar2 + (longlong)(int)uVar7 * 8),(void *)(lVar2 + uVar11 * 8),
                  (longlong)(int)(uVar10 - uVar8) << 3);
        }
        uVar7 = uVar7 + (uVar10 - uVar8);
      }
      uVar8 = uVar10;
      bVar4 = bVar4 ^ 1;
    } while ((longlong)uVar6 < lVar13);
    *(uint *)(param_1 + 1) = uVar7;
  }
  return;
}



// FUNCTION 145d28910 FUN_145d28910 body=55 status=ok
// SIG undefined FUN_145d28910(void)

ulonglong FUN_145d28910(int *param_1,int *param_2)

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



// FUNCTION 145d28952 FUN_145d28952 body=214 status=ok
// SIG undefined FUN_145d28952(void)

void FUN_145d28952(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong *local_60;
  longlong local_58;
  longlong *local_48;
  longlong local_38 [5];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  LOCK();
  *(undefined4 *)(param_1 + 0x13) = 1;
  UNLOCK();
  local_58 = 0;
  local_48 = (longlong *)0x0;
  (**(code **)(*param_1 + 0x10))(param_1,&local_68);
  lVar2 = local_68;
  if (local_68 != 0) {
    do {
      do {
        lVar4 = lVar2;
        lVar2 = 0;
      } while (lVar4 == 0);
      plVar5 = *(longlong **)(lVar4 + 0x70);
      cVar3 = (**(code **)(*plVar5 + 0x20))(plVar5,0xffffffff,0);
      lVar2 = local_68;
    } while (cVar3 == '\0');
  }
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_60 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar1 = (int *)((longlong)local_60 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_60 + 0x10))(local_60);
      }
    }
  }
  if (local_58 != 0) {
    plVar5 = local_48;
    if (local_48 == (longlong *)0x0) {
      plVar5 = local_38;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  if ((local_10 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145d28a2a FUN_145d28a2a body=760 status=ok
// SIG undefined FUN_145d28a2a(void)

/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffff48 : 0x000145d28c07 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

longlong * FUN_145d28a2a(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  longlong lVar12;
  int iVar13;
  undefined1 auStack_118 [32];
  longlong local_f8;
  longlong *plStack_f0;
  undefined1 local_e8;
  longlong local_d8;
  longlong *local_c8 [2];
  longlong local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  code *local_98 [2];
  undefined8 *local_88;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_118;
  FUN_145d28d24(&local_f8);
  local_e8 = 1;
  *param_2 = local_f8;
  param_2[1] = (longlong)plStack_f0;
  if (plStack_f0 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_f0 + 1) = (int)plStack_f0[1] + 1;
    UNLOCK();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x50));
  iVar13 = *(int *)(param_1 + 0x80);
  if ((iVar13 == 0) && (*(int *)(param_1 + 0x8c) == 0)) {
    *(undefined4 *)(local_f8 + 0x80) = 0;
    FUN_140b576f0();
    if (*param_3 != 0) {
      local_c8[0] = (longlong *)0x0;
      plVar11 = param_3 + 4;
      if ((longlong *)param_3[2] != (longlong *)0x0) {
        plVar11 = (longlong *)param_3[2];
      }
      local_d8 = *param_3;
      (**(code **)*plVar11)(plVar11,local_c8);
      local_98[0] = (code *)0x0;
      puVar10 = (undefined8 *)FUN_14001cc68(0x50,0x10);
      local_88 = puVar10;
      *puVar10 = &PTR_LAB_14a1e9470;
      puVar10[2] = local_d8;
      puVar10[4] = 0;
      if (local_d8 != 0) {
        plVar11 = local_c8[0];
        if (local_c8[0] == (longlong *)0x0) {
          plVar11 = &local_b8;
        }
        (**(code **)*plVar11)(plVar11,puVar10 + 4);
      }
      if (puVar10 != (undefined8 *)&DAT_fffffffffffffff0) {
        local_98[0] = FUN_142b7b71c;
      }
      FUN_1407461b0(1,local_98);
      if (local_d8 != 0) {
        plVar11 = local_c8[0];
        if (local_c8[0] == (longlong *)0x0) {
          plVar11 = &local_b8;
        }
        (**(code **)(*plVar11 + 0x10))();
      }
    }
  }
  else {
    local_d8 = *param_3;
    local_c8[0] = (longlong *)0x0;
    if (local_d8 != 0) {
      plVar11 = param_3 + 4;
      if ((longlong *)param_3[2] != (longlong *)0x0) {
        plVar11 = (longlong *)param_3[2];
      }
      (**(code **)*plVar11)(plVar11,local_c8);
      iVar13 = *(int *)(param_1 + 0x80);
    }
    *(uint *)(param_1 + 0x80) = iVar13 + 1U;
    if (*(uint *)(param_1 + 0x84) < iVar13 + 1U) {
      FUN_147129d12((longlong *)(param_1 + 0x78),iVar13);
    }
    plVar11 = local_c8[0];
    lVar5 = local_d8;
    lVar4 = *(longlong *)(param_1 + 0x78);
    local_c8[0] = (longlong *)0x0;
    local_50 = local_b8;
    lVar6 = local_50;
    uStack_48 = uStack_b0;
    uVar7 = uStack_48;
    local_40 = local_a8;
    uVar8 = local_40;
    uStack_38 = uStack_a0;
    uVar9 = uStack_38;
    if (local_d8 != 0) {
      local_d8 = 0;
    }
    lVar12 = (longlong)iVar13 * 0x60;
    *(undefined8 *)(lVar4 + lVar12) = *(undefined8 *)(param_1 + 0x88);
    *(longlong *)(lVar4 + 8 + lVar12) = local_f8;
    *(longlong **)(lVar4 + 0x10 + lVar12) = plStack_f0;
    local_f8 = 0;
    plStack_f0 = (longlong *)0x0;
    *(undefined1 *)(lVar4 + 0x18 + lVar12) = 0;
    *(longlong *)(lVar4 + 0x20 + lVar12) = lVar5;
    *(longlong **)(lVar4 + 0x30 + lVar12) = plVar11;
    local_50._0_4_ = (undefined4)local_b8;
    local_50._4_4_ = (undefined4)((ulonglong)local_b8 >> 0x20);
    uStack_48._0_4_ = (undefined4)uStack_b0;
    uStack_48._4_4_ = (undefined4)((ulonglong)uStack_b0 >> 0x20);
    local_40._0_4_ = (undefined4)local_a8;
    local_40._4_4_ = (undefined4)((ulonglong)local_a8 >> 0x20);
    uStack_38._0_4_ = (undefined4)uStack_a0;
    uStack_38._4_4_ = (undefined4)((ulonglong)uStack_a0 >> 0x20);
    puVar3 = (undefined4 *)(lVar4 + 0x50 + lVar12);
    *puVar3 = (undefined4)local_40;
    puVar3[1] = local_40._4_4_;
    puVar3[2] = (undefined4)uStack_38;
    puVar3[3] = uStack_38._4_4_;
    puVar3 = (undefined4 *)(lVar4 + 0x40 + lVar12);
    *puVar3 = (undefined4)local_50;
    puVar3[1] = local_50._4_4_;
    puVar3[2] = (undefined4)uStack_48;
    puVar3[3] = uStack_48._4_4_;
    local_50 = lVar6;
    uStack_48 = uVar7;
    local_40 = uVar8;
    uStack_38 = uVar9;
    if (local_d8 != 0) {
      (**(code **)(local_b8 + 0x10))();
    }
    *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) + 1;
    *(undefined4 *)(param_1 + 0x8c) = 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x50));
  plVar11 = plStack_f0;
  if (plStack_f0 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_f0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_f0)(plStack_f0);
      LOCK();
      piVar2 = (int *)((longlong)plVar11 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 145d28d24 FUN_145d28d24 body=96 status=ok
// SIG undefined FUN_145d28d24(void)

longlong * FUN_145d28d24(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)FUN_14001cc68(0xa0,0x10);
  FUN_145d28d84(plVar3);
  *param_1 = (longlong)(plVar3 + 2);
  param_1[1] = (longlong)plVar3;
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
  return param_1;
}



// FUNCTION 145d28d84 FUN_145d28d84 body=101 status=ok
// SIG undefined FUN_145d28d84(void)

undefined8 * FUN_145d28d84(undefined8 *param_1)

{
  undefined8 uVar1;
  
  param_1[1] = &DAT_100000001;
  *param_1 = SharedPointerInternals::TIntrusiveReferenceController<TFutureState<int>,1>::vftable;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 2),4000);
  param_1[8] = 0;
  param_1[10] = 0;
  uVar1 = FUN_1405d8a54(1);
  param_1[0x10] = uVar1;
  *(undefined1 *)(param_1 + 0x11) = 0;
  return param_1;
}



// FUNCTION 145d28dea FUN_145d28dea body=20 status=ok
// SIG undefined FUN_145d28dea(void)

undefined1 FUN_145d28dea(longlong param_1)

{
  FUN_145d28dfe(param_1 + 0x18);
  return 1;
}



// FUNCTION 145d28dfe FUN_145d28dfe body=113 status=ok
// SIG undefined FUN_145d28dfe(void)

void FUN_145d28dfe(longlong *param_1)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = *param_1;
  FUN_145d28e70(lVar1 + 0x20,param_1 + 1);
  local_28 = param_1[1];
  local_20 = param_1[2];
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 0xc) = *(int *)(local_20 + 0xc) + 1;
    UNLOCK();
  }
  FUN_146017c30(lVar1 + 0x48,&local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d28e70 FUN_145d28e70 body=337 status=ok
// SIG undefined FUN_145d28e70(void)

void FUN_145d28e70(longlong *param_1,longlong *param_2)

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
LAB_145d28e92:
  do {
    lVar8 = *param_1;
    plVar10 = *(longlong **)(lVar8 + 8 + uVar6 * 0x10);
    if (plVar10 == (longlong *)0x0) {
LAB_145d28f3b:
      plVar10 = (longlong *)0x0;
    }
    else {
      iVar5 = (int)plVar10[1];
      do {
        if (iVar5 == 0) goto LAB_145d28f3b;
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
    lVar8 = *(longlong *)(lVar8 + uVar6 * 0x10);
    plVar3 = (longlong *)param_2[1];
    if (plVar3 == (longlong *)0x0) {
LAB_145d28f40:
      lVar7 = 0;
    }
    else {
      iVar5 = (int)plVar3[1];
      do {
        if (iVar5 == 0) goto LAB_145d28f40;
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
      lVar7 = *param_2;
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
      lVar8 = 0;
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
    if (lVar8 != lVar7) break;
    FUN_145d2905a(param_1,uVar6 & 0xffffffff);
    bVar9 = true;
    if ((longlong)(int)param_1[1] <= (longlong)uVar6) goto LAB_145d28f23;
  } while( true );
  uVar6 = uVar6 + 1;
  if ((longlong)(int)param_1[1] <= (longlong)uVar6) {
    if (!bVar9) {
      return;
    }
LAB_145d28f23:
    FUN_145d28fc2(param_1);
    return;
  }
  goto LAB_145d28e92;
}



// FUNCTION 145d28fc2 FUN_145d28fc2 body=62 status=ok
// SIG undefined FUN_145d28fc2(void)

void FUN_145d28fc2(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_145d29000(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 145d29000 FUN_145d29000 body=89 status=ok
// SIG undefined FUN_145d29000(void)

ulonglong FUN_145d29000(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if ((((longlong)(int)(param_2 - param_1) & 0xffffffffffffc00U) == 0) &&
     ((int)(param_2 * 2) <= (int)(param_1 * 3))) {
    return uVar1;
  }
  if (param_1 == 0 || 0x40 < (int)(param_2 - param_1)) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 4,8);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 145d2905a FUN_145d2905a body=117 status=ok
// SIG undefined FUN_145d2905a(void)

void FUN_145d2905a(longlong *param_1,uint param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  lVar2 = *param_1;
  plVar3 = *(longlong **)(lVar2 + 8 + (longlong)(int)param_2 * 0x10);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  iVar4 = (int)param_1[1];
  iVar6 = ~param_2 + iVar4;
  if (iVar6 != 0) {
    iVar5 = 1;
    if (iVar6 < 1) {
      iVar5 = iVar6;
    }
    memmove((void *)((longlong)(int)param_2 * 0x10 + lVar2),
            (void *)((longlong)(iVar4 - iVar5) * 0x10 + lVar2),(longlong)iVar5 << 4);
    iVar4 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar4 + -1;
  return;
}



// FUNCTION 145d290d0 FUN_145d290d0 body=40 status=ok
// SIG undefined FUN_145d290d0(void)

undefined8 FUN_145d290d0(undefined8 param_1,int param_2)

{
  FUN_145d290f8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145d290f8 FUN_145d290f8 body=256 status=ok
// SIG undefined FUN_145d290f8(void)

void FUN_145d290f8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ae78eb0;
  param_1[5] = &PTR_FUN_14ae79380;
  param_1[6] = &PTR_LAB_14ae793c0;
  *(undefined4 *)(param_1 + 0x4d) = 0;
  if (param_1[0x4c] != 0) {
    FUN_1400020a8();
  }
  FUN_145d29224(param_1 + 0x44);
  if (param_1[0x41] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3a] != 0) {
    FUN_1400020a8();
  }
  FUN_145d291f8(param_1[0x28],*(undefined4 *)(param_1 + 0x29));
  if (param_1[0x28] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x26] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x24] != 0) {
    FUN_1400020a8();
  }
  FUN_145d291f8(param_1[0x22],*(undefined4 *)(param_1 + 0x23));
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  FUN_14006e852(param_1);
  return;
}



// FUNCTION 145d291f8 FUN_145d291f8 body=43 status=ok
// SIG undefined FUN_145d291f8(void)

void FUN_145d291f8(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1483dd086(param_1);
    param_1 = param_1 + 0x2d0;
  }
  return;
}



// FUNCTION 145d29224 FUN_145d29224 body=53 status=ok
// SIG undefined FUN_145d29224(void)

void FUN_145d29224(longlong *param_1)

{
  FUN_145d2925a();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d2925a FUN_145d2925a body=346 status=ok
// SIG undefined FUN_145d2925a(void)

void FUN_145d2925a(longlong *param_1)

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
      if (*(longlong *)(*local_68 + 8 + (longlong)iStack_4c * 0x20) != 0) {
        FUN_1400020a8();
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1446f4a44(param_1,0);
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



// FUNCTION 145d293b6 FUN_145d293b6 body=120 status=ok
// SIG undefined FUN_145d293b6(void)

undefined8 * FUN_145d293b6(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
  }
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  FUN_1401f3db8(param_1 + 2,param_2 + 2);
  return param_1;
}



// FUNCTION 145d2942e FUN_145d2942e body=108 status=ok
// SIG undefined FUN_145d2942e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145d2942e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c967958) {
    FUN_144b3d300(&DAT_14c967958);
    if (DAT_14c967958 == -1) {
      FUN_145d2949a(&DAT_14c967940);
      _DAT_14c967940 = &PTR_FUN_149ecacd0;
      _Init_thread_footer(&DAT_14c967958);
    }
  }
  return &DAT_14c967940;
}



// FUNCTION 145d2949a FUN_145d2949a body=40 status=ok
// SIG undefined FUN_145d2949a(void)

undefined8 * FUN_145d2949a(undefined8 *param_1)

{
  FUN_144a81de8();
  param_1[2] = 0;
  *param_1 = &PTR_FUN_149e3d710;
  return param_1;
}



// FUNCTION 145d294c2 FUN_145d294c2 body=84 status=ok
// SIG undefined FUN_145d294c2(void)

void FUN_145d294c2(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_141538116(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a4f1b30;
  puVar1[0x22] = &PTR_LAB_14a4f1e80;
  puVar1[0x23] = &PTR_LAB_14a4f1eb0;
  puVar1[0x24] = 0;
  puVar1[0x25] = 0;
  puVar1[0x26] = 0;
  return;
}



// FUNCTION 145d29516 FUN_145d29516 body=71 status=ok
// SIG undefined FUN_145d29516(void)

void FUN_145d29516(void)

{
  undefined8 uVar1;
  char cVar2;
  
  DAT_14cae4e9d = 1;
  cVar2 = FUN_144a5d717();
  if (cVar2 != '\0') {
    uVar1 = FUN_140755bfc();
                    /* WARNING: Could not recover jumptable at 0x000145d29548. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(DAT_14cae4e90 + 0x18))(&DAT_14cae4e90,uVar1,*(code **)(DAT_14cae4e90 + 0x18));
    return;
  }
  FUN_140308182(&DAT_14cae4e90,0);
  return;
}



// FUNCTION 145d2955e FUN_145d2955e body=77 status=ok
// SIG undefined FUN_145d2955e(void)

void FUN_145d2955e(longlong param_1,undefined8 param_2)

{
  FUN_14006bf18();
  FUN_14006bf18(param_1 + 0x28,param_2);
  FUN_14006bf18(param_1 + 0x48,param_2);
  FUN_14006bf18(param_1 + 0x68,param_2);
  FUN_14006bf18(param_1 + 0x88,param_2);
  return;
}



// FUNCTION 145d295ac FUN_145d295ac body=107 status=ok
// SIG undefined FUN_145d295ac(void)

void FUN_145d295ac(longlong param_1,uint param_2)

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
LAB_145d295fb:
      FUN_1458bae9e(param_1,param_2);
      *(int *)(param_1 + 0x48) = iVar3;
      FUN_140dc8786(param_1);
      return;
    }
  }
  else if (*(int *)(param_1 + 0x48) != iVar3) goto LAB_145d295fb;
  FUN_145d29618(param_1);
  FUN_1458bae9e(param_1,param_2);
  return;
}



// FUNCTION 145d29618 FUN_145d29618 body=329 status=ok
// SIG undefined FUN_145d29618(void)

void FUN_145d29618(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x5c + (longlong)iVar4 * 0x60) * 4) =
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



// FUNCTION 145d29762 FUN_145d29762 body=40 status=ok
// SIG undefined FUN_145d29762(void)

undefined8 FUN_145d29762(undefined8 param_1,int param_2)

{
  FUN_145d2978a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145d2978a FUN_145d2978a body=108 status=ok
// SIG undefined FUN_145d2978a(void)

void FUN_145d2978a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14abf0bf0;
  param_1[5] = &PTR_FUN_14abf0f20;
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14abe9730;
  param_1[5] = &PTR_LAB_14abe9a20;
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145d297fe FUN_145d297fe body=231 status=ok
// SIG undefined FUN_145d297fe(void)

undefined8 * FUN_145d297fe(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined1 local_30;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_145d298e6();
  *param_1 = &PTR_FUN_14aeb35d0;
  memset(param_1 + 0x73,0,0x88);
  FUN_1446f470e(&local_20,L"GizmoCenter",1);
  uVar1 = FUN_140f974a4();
  local_30 = 0;
  local_38 = 1;
  plVar2 = (longlong *)FUN_14048696c(param_1,local_20,uVar1,uVar1);
  if ((plVar2 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(plVar2);
  }
  param_1[0x39] = plVar2;
  *(undefined4 *)(plVar2 + 200) = 0x3f800000;
  FUN_14045627c(plVar2,0,1);
  (**(code **)(*plVar2 + 0x728))(plVar2,DAT_14cad0f30,1);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d298e6 FUN_145d298e6 body=56 status=ok
// SIG undefined FUN_145d298e6(void)

undefined8 * FUN_145d298e6(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14007ca06();
  FUN_14588cc1a(param_1,uVar1);
  *param_1 = &PTR_FUN_14aeb6bd0;
  FUN_14472eae2(param_1,8);
  return param_1;
}



// FUNCTION 145d2991e FUN_145d2991e body=40 status=ok
// SIG undefined FUN_145d2991e(void)

undefined8 FUN_145d2991e(undefined8 param_1,int param_2)

{
  FUN_145d29946();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145d29946 FUN_145d29946 body=108 status=ok
// SIG undefined FUN_145d29946(void)

void FUN_145d29946(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14aecd470;
  param_1[5] = &PTR_FUN_14aecd710;
  if (param_1[0xe] != 0) {
    plVar1 = param_1 + 0x12;
    if ((longlong *)param_1[0x10] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x10];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[6] != 0) {
    plVar1 = param_1 + 10;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[8];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145d299b2 FUN_145d299b2 body=9 status=ok
// SIG undefined FUN_145d299b2(void)

void FUN_145d299b2(longlong param_1)

{
  FUN_145d299bc(param_1 + 0x10);
  return;
}



// FUNCTION 145d299bc FUN_145d299bc body=65 status=ok
// SIG undefined FUN_145d299bc(void)

void FUN_145d299bc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b4f0600;
  param_1[4] = &PTR_FUN_14b4f0628;
  FUN_1449db362(param_1 + 0xc);
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_14589ea1e(param_1);
  return;
}



// FUNCTION 145d299fe FUN_145d299fe body=358 status=ok
// SIG undefined FUN_145d299fe(void)

void FUN_145d299fe(undefined1 *param_1)

{
  longlong *plVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined4 local_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  uint local_78;
  int iStack_74;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  uint local_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar1 = (longlong *)(param_1 + 0x10);
  puVar2 = param_1 + 0x20;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  uStack_60 = puVar2;
  if (*(int *)(param_1 + 0x38) == 0) {
    iVar6 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar6 = *(int *)(param_1 + 0x38);
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_88 = (undefined4)local_68;
  uStack_84 = local_68._4_4_;
  uStack_80 = (undefined4)uStack_60;
  uStack_7c = uStack_60._4_4_;
  local_90 = plVar1;
  if ((iStack_54 != iVar6) || (uStack_60 != puVar2)) {
    do {
      puVar3 = (undefined8 *)(*local_90 + (longlong)iStack_74 * 0x18);
      local_68 = *puVar3;
      uStack_60 = (undefined1 *)puVar3[1];
      plVar4 = (longlong *)FUN_14479d2ce(&uStack_60);
      if (plVar4 != (longlong *)0x0) {
        lVar5 = FUN_140e21508();
        if ((*(int *)(lVar5 + 0x38) <= *(int *)(plVar4[2] + 0x38)) &&
           (*(longlong *)(*(longlong *)(plVar4[2] + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
            lVar5 + 0x30)) {
          FUN_145d29b66(plVar4);
          (**(code **)(*plVar4 + 0x2f0))(plVar4);
        }
      }
      local_78 = local_78 & ~uStack_84;
      FUN_1449c0562(&local_88);
    } while (((iStack_74 != iVar6) || ((undefined1 *)CONCAT44(uStack_7c,uStack_80) != puVar2)) ||
            (local_90 != plVar1));
  }
  if (param_1[1] == '\0') {
    *param_1 = 0;
    FUN_145abd854(plVar1);
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d29b66 FUN_145d29b66 body=83 status=ok
// SIG undefined FUN_145d29b66(void)

void FUN_145d29b66(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  (**(code **)(*param_1 + 0x2c0))();
  lVar2 = param_1[0x1d];
  if ((longlong)(int)lVar2 != 0) {
    lVar1 = param_1[0x1c];
    lVar3 = 0;
    do {
      (**(code **)(**(longlong **)(lVar1 + lVar3) + 0x10))
                (*(longlong **)(lVar1 + lVar3),param_1[0xb],param_1);
      lVar3 = lVar3 + 0x10;
    } while ((longlong)(int)lVar2 * 0x10 != lVar3);
  }
  return;
}



// FUNCTION 145d29bbe FUN_145d29bbe body=37 status=ok
// SIG undefined FUN_145d29bbe(void)

void FUN_145d29bbe(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_145d29be4();
  *param_3 = uVar1;
  return;
}



// FUNCTION 145d29be4 FUN_145d29be4 body=85 status=ok
// SIG undefined FUN_145d29be4(void)

undefined8 FUN_145d29be4(longlong param_1)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined7 uVar5;
  byte bVar6;
  longlong lVar7;
  
  lVar7 = param_1;
  lVar2 = FUN_140ade8e4();
  if (lVar2 != 0) {
    lVar3 = FUN_140ade7fe();
    lVar7 = *(longlong *)(lVar2 + 0x10);
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(lVar7 + 0x38)) &&
       (lVar7 = *(longlong *)(lVar7 + 0x30),
       *(longlong *)(lVar7 + (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) {
      uVar4 = FUN_145d29c3a(lVar2,*(undefined4 *)(param_1 + 0xe0));
      bVar6 = (byte)uVar4;
      uVar5 = (undefined7)((ulonglong)uVar4 >> 8);
      bVar1 = 1;
      goto LAB_145d29c2c;
    }
  }
  bVar6 = (byte)lVar7;
  bVar1 = 0;
  uVar5 = 0;
LAB_145d29c2c:
  return CONCAT71(uVar5,bVar1 & bVar6);
}



// FUNCTION 145d29c3a FUN_145d29c3a body=26 status=ok
// SIG undefined FUN_145d29c3a(void)

undefined1 FUN_145d29c3a(void)

{
  undefined1 uVar1;
  longlong lVar2;
  
  lVar2 = FUN_140ade790();
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined1 *)(lVar2 + 0x15);
  }
  return uVar1;
}



// FUNCTION 145d29c54 FUN_145d29c54 body=37 status=ok
// SIG undefined FUN_145d29c54(void)

void FUN_145d29c54(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_145d29c7a();
  *param_3 = uVar1;
  return;
}



// FUNCTION 145d29c7a FUN_145d29c7a body=85 status=ok
// SIG undefined FUN_145d29c7a(void)

undefined8 FUN_145d29c7a(longlong param_1)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined7 uVar5;
  byte bVar6;
  longlong lVar7;
  
  lVar7 = param_1;
  lVar2 = FUN_140ade8e4();
  if (lVar2 != 0) {
    lVar3 = FUN_140ade7fe();
    lVar7 = *(longlong *)(lVar2 + 0x10);
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(lVar7 + 0x38)) &&
       (lVar7 = *(longlong *)(lVar7 + 0x30),
       *(longlong *)(lVar7 + (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) {
      uVar4 = FUN_145d29cd0(lVar2,*(undefined4 *)(param_1 + 0xe0));
      bVar6 = (byte)uVar4;
      uVar5 = (undefined7)((ulonglong)uVar4 >> 8);
      bVar1 = 1;
      goto LAB_145d29cc2;
    }
  }
  bVar6 = (byte)lVar7;
  bVar1 = 0;
  uVar5 = 0;
LAB_145d29cc2:
  return CONCAT71(uVar5,bVar1 & bVar6);
}



// FUNCTION 145d29cd0 FUN_145d29cd0 body=26 status=ok
// SIG undefined FUN_145d29cd0(void)

undefined1 FUN_145d29cd0(void)

{
  undefined1 uVar1;
  longlong lVar2;
  
  lVar2 = FUN_140ade790();
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined1 *)(lVar2 + 0x14);
  }
  return uVar1;
}



// FUNCTION 145d29cf4 FUN_145d29cf4 body=176 status=ok
// SIG undefined FUN_145d29cf4(void)

void FUN_145d29cf4(longlong *param_1)

{
  FUN_1414ba404(param_1 + 0x27);
  FUN_1414ba404(param_1 + 0xf);
  FUN_140f9ed8d(param_1[0xc],(int)param_1[0xd]);
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  FUN_140f9ed8d(param_1[9],(int)param_1[10]);
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_140f9ed8d(param_1[6],(int)param_1[7]);
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_140f9ed8d(param_1[3],(int)param_1[4]);
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  FUN_140f9ed8d(*param_1,(int)param_1[1]);
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d29daa FUN_145d29daa body=143 status=ok
// SIG undefined FUN_145d29daa(void)

undefined8 * FUN_145d29daa(void)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0x2f8);
  memset(_Dst,0,0x2f8);
  FUN_140e8cffc(_Dst);
  *_Dst = &PTR_FUN_14b9c3680;
  *(undefined1 *)(_Dst + 0x53) = 0;
  _Dst[0x58] = 0;
  *(undefined4 *)(_Dst + 0x59) = 0;
  _Dst[0x54] = 0;
  _Dst[0x55] = 0;
  *(undefined8 *)((longlong)_Dst + 0x2cc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)_Dst + 0x2d4) = 0;
  _Dst[0x5c] = 0;
  *(undefined4 *)(_Dst + 0x5d) = 0;
  _Dst[0x5e] = 0;
  return _Dst;
}



// FUNCTION 145d29e3a FUN_145d29e3a body=40 status=ok
// SIG undefined FUN_145d29e3a(void)

undefined8 FUN_145d29e3a(undefined8 param_1,int param_2)

{
  FUN_145d29e62();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145d29e62 FUN_145d29e62 body=108 status=ok
// SIG undefined FUN_145d29e62(void)

void FUN_145d29e62(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bdb0310;
  param_1[5] = &PTR_FUN_14bdb06b0;
  param_1[0x13] = &PTR_FUN_14bdb06d0;
  param_1[0x17] = &PTR_FUN_14bdb0700;
  if (param_1[0x1e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_1411412a8(param_1);
  return;
}



// FUNCTION 145d29ece FUN_145d29ece body=40 status=ok
// SIG undefined FUN_145d29ece(void)

undefined8 FUN_145d29ece(undefined8 param_1,int param_2)

{
  FUN_145d29ef6();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145d29ef6 FUN_145d29ef6 body=108 status=ok
// SIG undefined FUN_145d29ef6(void)

void FUN_145d29ef6(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bdb5e40;
  param_1[5] = &PTR_FUN_14bdb61e0;
  param_1[0x13] = &PTR_FUN_14bdb6200;
  param_1[0x17] = &PTR_FUN_14bdb6230;
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_1411412a8(param_1);
  return;
}



// FUNCTION 145d29f62 FUN_145d29f62 body=40 status=ok
// SIG undefined FUN_145d29f62(void)

undefined8 FUN_145d29f62(undefined8 param_1,int param_2)

{
  FUN_145d29f8a();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145d29f8a FUN_145d29f8a body=108 status=ok
// SIG undefined FUN_145d29f8a(void)

void FUN_145d29f8a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bed75a0;
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14bed6bb0;
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145d29ff6 FUN_145d29ff6 body=947 status=ok
// SIG undefined FUN_145d29ff6(void)

void FUN_145d29ff6(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined2 *puVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_b8 [32];
  undefined8 *local_98;
  undefined8 local_90;
  code *local_88;
  undefined4 local_80;
  longlong local_78;
  undefined8 uStack_70;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  DAT_14c990d98 = param_1;
  *(undefined8 *)(param_1 + 0x10) = 0x41f00000;
  *(undefined4 *)(param_1 + 0x18) = 0x41f00000;
  *(undefined8 *)(param_1 + 0x28) = 0x41f0000041f00000;
  *(undefined8 *)(param_1 + 0x48) = 0x4000000000010;
  *(undefined2 *)(param_1 + 0x50) = 1;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0x3ba3d70a;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0x3d088889;
  *(undefined8 *)(param_1 + 0x40) = 0x3dcccccd00000000;
  uVar5 = FUN_145857cde();
  local_88 = FUN_146b1d3c4;
  local_80 = 0;
  FUN_145d2a3ae(&local_78,param_1);
  FUN_145aa4344(uVar5,&local_88,&local_78);
  FUN_1401cb1ee(&local_78);
  FUN_145d2b43e(param_1);
  if (DAT_14c846b14 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                  L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  local_98 = (undefined8 *)0x0;
  cVar3 = FUN_14063337c(&DAT_14c846b20,L"httpproxy=",param_1 + 0xa8,1);
  if (cVar3 == '\0') {
    local_98 = &DAT_14c872ce8;
    cVar3 = FUN_1449da20c(DAT_14c872ce0,L"HTTP",L"HttpProxyAddress",param_1 + 0xa8);
    if (cVar3 == '\0') {
      FUN_145d2b188(&local_78);
      iVar1 = uStack_70._4_4_;
      if (uStack_70._4_4_ != -1) {
        if (*(longlong *)(param_1 + 0xa8) != 0) {
          FUN_1400020a8();
        }
        *(longlong *)(param_1 + 0xa8) = local_78;
        *(int *)(param_1 + 0xb0) = (int)uStack_70;
        *(int *)(param_1 + 0xb4) = iVar1;
      }
    }
  }
  local_78 = 0;
  uStack_70 = 0;
  local_98 = &DAT_14c872ce8;
  FUN_14105aa76(DAT_14c872ce0,L"HTTP",L"ModulesToLoad",&local_78);
  lVar2 = local_78;
  lVar9 = (longlong)(int)uStack_70;
  if (lVar9 != 0) {
    lVar8 = 0;
    do {
      uVar5 = FUN_144a52528();
      puVar7 = &DAT_149dfb77a;
      if (*(int *)(lVar2 + 8 + lVar8) != 0) {
        puVar7 = *(undefined2 **)(lVar2 + lVar8);
      }
      cVar3 = FUN_1457f751e(uVar5,puVar7,0);
      if (cVar3 != '\0') {
        uVar5 = FUN_144a52528();
        puVar7 = &DAT_149dfb77a;
        if (*(int *)(lVar2 + 8 + lVar8) != 0) {
          puVar7 = *(undefined2 **)(lVar2 + lVar8);
        }
        FUN_1446f470e(&local_90,puVar7);
        FUN_1405f3750(uVar5,local_90);
      }
      lVar8 = lVar8 + 0x10;
    } while (lVar9 * 0x10 != lVar8);
  }
  FUN_141538156();
  puVar6 = (undefined8 *)FUN_14001cc68(0x430);
  memset(puVar6,0,0x430);
  FUN_145d2acfe(puVar6);
  *puVar6 = &PTR_FUN_149f2a480;
  *(undefined8 **)(param_1 + 0x20) = puVar6;
  if (puVar6 == (undefined8 *)0x0) {
    puVar6 = (undefined8 *)FUN_14001cc68(0x430,0x10);
    FUN_145d2acfe(puVar6);
    *(undefined8 **)(param_1 + 0x20) = puVar6;
  }
  FUN_145d2a484(puVar6);
  uVar4 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x18))();
  *(undefined1 *)(param_1 + 200) = uVar4;
  if (DAT_14c8688e0 != 2) {
    FUN_1446efa72(&DAT_14c8688d8,0,2,0x10);
    DAT_14c8688e0 = 2;
  }
  puVar6 = DAT_14c8688d8;
  *DAT_14c8688d8 = &PTR_LAB_149f2ab60;
  LOCK();
  UNLOCK();
  lVar9 = DAT_14c758608 + 1;
  lVar2 = DAT_14c758608 + 1;
  if (lVar9 == 0) {
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 2;
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  puVar6[2] = lVar9;
  *puVar6 = &PTR_FUN_149f2aaf0;
  puVar6[3] = FUN_14291b51b;
  FUN_1447a1747(local_78,uStack_70 & 0xffffffff);
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145d2a3aa FUN_145d2a3aa body=3 status=ok
// SIG undefined FUN_145d2a3aa(void)

undefined1 FUN_145d2a3aa(void)

{
  return 1;
}



// FUNCTION 145d2a3ae FUN_145d2a3ae body=213 status=ok
// SIG undefined FUN_145d2a3ae(void)

LPCRITICAL_SECTION
FUN_145d2a3ae(LPCRITICAL_SECTION param_1,_LIST_ENTRY *param_2,undefined8 *param_3)

{
  DWORD DVar1;
  undefined8 uVar2;
  PRTL_CRITICAL_SECTION_DEBUG p_Var3;
  longlong lVar4;
  _LIST_ENTRY *p_Var5;
  
  DVar1 = *(DWORD *)(param_3 + 1);
  uVar2 = *param_3;
  InitializeCriticalSection(param_1);
  SetCriticalSectionSpinCount(param_1,4000);
  param_1[1].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
  param_1[1].LockCount = 0;
  EnterCriticalSection(param_1);
  if (param_1[1].LockCount != 3) {
    FUN_1446efa72(param_1 + 1,0,3,0x10);
    param_1[1].LockCount = 3;
  }
  p_Var3 = param_1[1].DebugInfo;
  *(undefined ***)p_Var3 = &PTR_LAB_149e1dc70;
  LOCK();
  UNLOCK();
  p_Var5 = (_LIST_ENTRY *)(DAT_14c758608 + 1);
  lVar4 = DAT_14c758608 + 1;
  if (p_Var5 == (_LIST_ENTRY *)0x0) {
    LOCK();
    UNLOCK();
    p_Var5 = (_LIST_ENTRY *)(DAT_14c758608 + 2);
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  (p_Var3->ProcessLocksList).Flink = p_Var5;
  *(undefined ***)p_Var3 = &PTR_FUN_149f2aa80;
  (p_Var3->ProcessLocksList).Blink = param_2;
  p_Var3->EntryCount = (int)uVar2;
  p_Var3->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  p_Var3->Flags = DVar1;
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_1);
  }
  return param_1;
}



// FUNCTION 145d2a484 FUN_145d2a484 body=338 status=ok
// SIG undefined FUN_145d2a484(void)

void FUN_145d2a484(longlong *param_1)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  int iVar5;
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_1[5] == 0) {
    uVar1 = rand();
    iVar2 = (int)(((float)(uVar1 & 0x7fff) / 32767.0) * 100.0);
    iVar5 = 99;
    if (iVar2 < 99) {
      iVar5 = iVar2;
    }
    *(bool *)(param_1 + 0x65) = iVar5 < *DAT_14c990d58;
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    FUN_140751e3e(&DAT_14c846b20,L"useeventloop=",param_1 + 0x65);
    plVar3 = (longlong *)(**(code **)(*param_1 + 0x40))(param_1);
    param_1[5] = (longlong)plVar3;
    (**(code **)(*plVar3 + 0x30))(plVar3);
  }
  (**(code **)(*param_1 + 0x38))(param_1);
  FUN_145d2a6e4(param_1,DAT_14c990d68);
  uVar4 = (**(code **)(*DAT_14c990d68 + 0xd0))();
  FUN_145d2a5fe(uVar4,local_20,param_1,FUN_145d2a6e4);
  FUN_145d2ab40(param_1,DAT_14c990d80);
  uVar4 = (**(code **)(*DAT_14c990d80 + 0xd0))();
  FUN_145d2a5fe(uVar4,local_20,param_1,FUN_145d2ab40);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d2a5d8 FUN_145d2a5d8 body=38 status=ok
// SIG undefined FUN_145d2a5d8(void)

void FUN_145d2a5d8(longlong *param_1)

{
  (**(code **)(*param_1 + 0x90))();
  FUN_145c6e30a(param_1);
  FUN_145d2a782(param_1);
  return;
}



// FUNCTION 145d2a5fe FUN_145d2a5fe body=228 status=ok
// SIG undefined FUN_145d2a5fe(void)

undefined8
FUN_145d2a5fe(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  *local_40 = &PTR_LAB_149e170a0;
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
  *local_40 = &PTR_FUN_149f2a890;
  local_40[3] = param_3;
  local_40[4] = param_4;
  FUN_14110d2ba(param_1,param_2,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d2a6e4 FUN_145d2a6e4 body=156 status=ok
// SIG undefined FUN_145d2a6e4(void)

void FUN_145d2a6e4(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x340));
  plVar1 = (longlong *)(**(code **)(*param_2 + 0x38))(param_2);
  (**(code **)(*plVar1 + 0xc0))(plVar1,local_30);
  FUN_1403de9f2(local_30,param_1 + 0x330,&DAT_149e001d8,1);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x340));
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d2a782 FUN_145d2a782 body=246 status=ok
// SIG undefined FUN_145d2a782(void)

void FUN_145d2a782(longlong param_1)

{
  char cVar1;
  char cVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  *(undefined1 *)(param_1 + 0x18) = 0;
  if (DAT_14c846b14 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                  L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  cVar1 = FUN_14054d46e(&DAT_14c846b20,L"DisableForkedHTTPThread");
  uVar5 = 4;
  if ((int)DAT_14c75ef74 < 4) {
    uVar5 = (ulonglong)DAT_14c75ef74;
  }
  uVar4 = 0;
  if (0 < (int)uVar5) {
    uVar4 = uVar5;
  }
  *(undefined4 *)(param_1 + 0x28) = (&DAT_149f29f40)[uVar4];
  cVar2 = FUN_145d2a878();
  if (cVar2 == '\x01' && cVar1 == '\0') {
    uVar3 = FUN_14275bfaa(param_1,L"HttpManagerThread",0x20000,*(undefined4 *)(param_1 + 0x28),
                          0xffffffffffffffff,0,0);
  }
  else {
    cVar1 = FUN_144a53f06();
    if (cVar1 == '\0') {
      *(undefined1 *)(param_1 + 0x18) = 1;
    }
    uVar3 = FUN_1411b1052(param_1,L"HttpManagerThread",0x20000,*(undefined4 *)(param_1 + 0x28),
                          0xffffffffffffffff,0);
  }
  *(undefined8 *)(param_1 + 0x10) = uVar3;
  *(undefined1 *)(param_1 + 0x19) = 0;
  return;
}



// FUNCTION 145d2a878 FUN_145d2a878 body=3 status=ok
// SIG undefined FUN_145d2a878(void)

undefined8 FUN_145d2a878(void)

{
  return 0;
}



// FUNCTION 145d2a87c FUN_145d2a87c body=395 status=ok
// SIG undefined FUN_145d2a87c(void)

/* WARNING: Removing unreachable block (ram,0x000145d2a9cb) */
/* WARNING: Removing unreachable block (ram,0x000145d2a9d7) */
/* WARNING: Removing unreachable block (ram,0x000145d2a9db) */

void FUN_145d2a87c(longlong param_1)

{
  longlong *plVar1;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8 [2];
  code *local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong *local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_b8[0] = DAT_14c990be8;
  local_48 = (undefined4)local_88;
  uStack_44 = local_88._4_4_;
  uStack_40 = (undefined4)uStack_80;
  uStack_3c = uStack_80._4_4_;
  local_38 = local_78;
  uStack_34 = uStack_74;
  uStack_30 = uStack_70;
  uStack_2c = uStack_6c;
  local_58 = 0;
  uStack_54 = 0;
  uStack_50 = uStack_90;
  uStack_4c = uStack_8c;
  local_68 = 0;
  uStack_64 = 0;
  uStack_60 = uStack_a0;
  uStack_5c = uStack_9c;
  local_98 = (longlong *)0x0;
  local_a8 = FUN_14291dc34;
  local_88 = &PTR_LAB_149f2a4f0;
  uStack_80 = param_1;
  local_c8 = local_78;
  uStack_c4 = uStack_74;
  uStack_c0 = uStack_70;
  uStack_bc = uStack_6c;
  uStack_54 = 0;
  local_58 = 0;
  uStack_64 = 0;
  local_68 = 0;
  local_88 = &PTR_LAB_149f2a4f0;
  local_98 = (longlong *)0x0;
  local_a8 = FUN_14291dc34;
  uStack_dc = uStack_8c;
  uStack_e0 = uStack_90;
  local_e8 = 0;
  uStack_ec = uStack_9c;
  uStack_f0 = uStack_a0;
  local_f8 = 0;
  if (*(char *)(param_1 + 0x660) == '\x01') {
    FUN_145dcd442(param_1 + 0xa0);
  }
  FUN_145d2aa08(param_1 + 0xa0,local_b8);
  *(undefined1 *)(param_1 + 0x660) = 1;
  if (local_a8 != (code *)0x0) {
    plVar1 = local_98;
    if (local_98 == (longlong *)0x0) {
      plVar1 = &local_88;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145d2aa08 FUN_145d2aa08 body=311 status=ok
// SIG undefined FUN_145d2aa08(void)

undefined8 * FUN_145d2aa08(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_149f2a510;
  param_1[4] = &PTR_FUN_149f28670;
  param_1[5] = param_1 + 4;
  param_1[6] = param_1;
  param_1[8] = *param_2;
  param_1[10] = param_2[2];
  param_1[0xc] = param_2[4];
  param_2[4] = 0;
  uVar1 = param_2[6];
  uVar2 = param_2[7];
  uVar3 = param_2[9];
  param_1[0x10] = param_2[8];
  param_1[0x11] = uVar3;
  param_1[0xe] = uVar1;
  param_1[0xf] = uVar2;
  if (param_1[10] != 0) {
    param_2[2] = 0;
  }
  memset(param_1 + 0x12,0,0x4f0);
  FUN_145efa2b6(param_1 + 0x12);
  param_1[0x6a] = 0;
  param_1[0x6b] = 0x2000000000;
  param_1[0xac] = 0;
  param_1[0xad] = 0x2000000000;
  param_1[0xae] = 0;
  *(undefined1 *)(param_1 + 0xaf) = 0;
  puVar4 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  *puVar4 = 0;
  puVar4[2] = 0;
  puVar4[4] = 0;
  param_1[0xb1] = puVar4;
  param_1[0xb0] = puVar4;
  param_1[0xb4] = 0;
  param_1[0xb2] = 0;
  param_1[0xb3] = 0;
  *(undefined4 *)(param_1 + 0xb5) = 0;
  *(undefined1 *)((longlong)param_1 + 0x5ac) = 0;
  *(undefined1 *)((longlong)param_1 + 0x5ad) = 0;
  *(undefined1 *)((longlong)param_1 + 0x5ae) = 0;
  *(undefined2 *)((longlong)param_1 + 0x5af) = 0;
  return param_1;
}



// FUNCTION 145d2ab40 FUN_145d2ab40 body=444 status=ok
// SIG undefined FUN_145d2ab40(void)

void FUN_145d2ab40(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  wchar_t *_Str;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_d8 [44];
  int local_ac;
  longlong local_a8;
  undefined8 uStack_a0;
  longlong local_98;
  ulonglong uStack_90;
  longlong local_88 [2];
  longlong local_78;
  int *local_70;
  undefined1 local_64 [4];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x3b8));
  plVar1 = (longlong *)(**(code **)(*param_2 + 0x38))(param_2);
  (**(code **)(*plVar1 + 0xc0))(plVar1,local_88);
  local_98 = 0;
  uStack_90 = 0;
  FUN_1403de9f2(local_88,&local_98,&DAT_149e001d8,1);
  uVar2 = 0;
  if ((longlong)(int)uStack_90 != 0) {
    lVar4 = (longlong)(int)uStack_90 << 4;
    lVar3 = local_98;
    do {
      local_a8 = 0;
      uStack_a0 = 0;
      FUN_1403de9f2(lVar3,&local_a8,&DAT_149e64e00,1);
      if ((int)uStack_a0 == 2) {
        _Str = L"";
        if (*(int *)(local_a8 + 0x18) != 0) {
          _Str = *(wchar_t **)(local_a8 + 0x10);
        }
        local_ac = _wtoi(_Str);
        local_78 = local_a8;
        local_70 = &local_ac;
        FUN_146b22412(param_1 + 0x368,local_64,&local_78);
      }
      FUN_1447a1747(local_a8,(int)uStack_a0);
      if (local_a8 != 0) {
        FUN_1400020a8();
      }
      lVar3 = lVar3 + 0x10;
      lVar4 = lVar4 + -0x10;
    } while (lVar4 != 0);
    uVar2 = uStack_90 & 0xffffffff;
  }
  FUN_1447a1747(local_98,uVar2);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_88[0] != 0) {
    FUN_1400020a8();
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x3b8));
  if ((local_60 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d2acfe FUN_145d2acfe body=570 status=ok
// SIG undefined FUN_145d2acfe(void)

undefined8 * FUN_145d2acfe(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  uVar1 = FUN_145d2af38();
  FUN_145aa41ca(param_1,L"FHttpManager",0,uVar1);
  *param_1 = &PTR_FUN_149f29140;
  param_1[8] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[10] = &PTR_LAB_149f2a900;
  param_1[0xb] = FUN_142920286;
  param_1[6] = FUN_146b22350;
  param_1[0xe] = 0;
  puVar2 = (undefined8 *)FUN_14001cc68(0x18,8);
  *puVar2 = 0;
  param_1[0xe] = puVar2;
  param_1[0xf] = puVar2;
  param_1[0x12] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x13));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x13),4000);
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *(undefined8 *)((longlong)param_1 + 0x114) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x11c) = 0;
  param_1[0x25] = 0;
  *(undefined4 *)(param_1 + 0x26) = 0;
  param_1[0x2b] = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  *(undefined8 *)((longlong)param_1 + 0x164) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x16c) = 0;
  param_1[0x2f] = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  param_1[0x31] = 0;
  *(undefined4 *)(param_1 + 0x32) = 0xbf800000;
  *(undefined1 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x41) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1b4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1a4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1ac) = 0;
  *(undefined8 *)((longlong)param_1 + 0x194) = 0;
  *(undefined8 *)((longlong)param_1 + 0x19c) = 0;
  memset(param_1 + 0x42,0,0x118);
  *(undefined1 *)(param_1 + 0x65) = 1;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x68));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x68),4000);
  param_1[0x71] = 0;
  *(undefined4 *)(param_1 + 0x72) = 0;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  *(undefined8 *)((longlong)param_1 + 0x394) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x39c) = 0;
  param_1[0x75] = 0;
  *(undefined4 *)(param_1 + 0x76) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x77));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x77),4000);
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x7c));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x7c),4000);
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x81));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x81),4000);
  *(undefined1 *)(param_1 + 0x18) = 0;
  return param_1;
}



// FUNCTION 145d2af38 FUN_145d2af38 body=106 status=ok
// SIG undefined FUN_145d2af38(void)

undefined * FUN_145d2af38(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c8336d0) {
    FUN_144b3d300(&DAT_14c8336d0);
    if (DAT_14c8336d0 == -1) {
      FUN_145d2afa2(&DAT_14c833688);
      atexit((_func_5014 *)&LAB_142746435);
      _Init_thread_footer(&DAT_14c8336d0);
    }
  }
  return &DAT_14c833688;
}



// FUNCTION 145d2afa2 FUN_145d2afa2 body=484 status=ok
// SIG undefined FUN_145d2afa2(void)

undefined8 * FUN_145d2afa2(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined ***pppuVar5;
  longlong lVar6;
  undefined1 auStack_a8 [32];
  code **local_88;
  undefined8 local_78;
  longlong *local_70;
  code *local_68;
  undefined4 local_60;
  undefined ***local_58;
  undefined **local_48;
  undefined8 *local_40;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *param_1 = 0;
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,8);
  *puVar4 = 0;
  *param_1 = puVar4;
  param_1[1] = puVar4;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  FUN_1401cb356();
  local_88 = &local_68;
  local_58 = (undefined ***)0x0;
  local_48 = &PTR_LAB_149e01660;
  local_68 = FUN_14274a6e4;
  local_40 = param_1;
  FUN_1401cbba4(&DAT_14c833748,&local_78,L"FBackgroundableTicker",0);
  param_1[5] = local_78;
  local_78 = 0;
  plVar2 = (longlong *)param_1[6];
  param_1[6] = local_70;
  local_70 = (longlong *)0x0;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
    if (local_70 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)local_70 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_70 + 0x10))();
      }
    }
  }
  if (local_68 != (code *)0x0) {
    pppuVar5 = local_58;
    if (local_58 == (undefined ***)0x0) {
      pppuVar5 = &local_48;
    }
    (*(code *)(*pppuVar5)[2])();
  }
  local_68 = (code *)0x0;
  local_60 = 0;
  FUN_1446efa72(&local_68,0,2,0x10);
  local_60 = 2;
  *(undefined ***)local_68 = &PTR_LAB_149e01f80;
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
  *(longlong *)(local_68 + 0x10) = lVar6;
  *(undefined ***)local_68 = &PTR_FUN_149e01680;
  *(undefined8 **)(local_68 + 0x18) = param_1;
  FUN_140ca2242(&DAT_14c86a900,&local_78,&local_68);
  FUN_1449db362(&local_68);
  param_1[7] = local_78;
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d2b188 FUN_145d2b188 body=692 status=ok
// SIG undefined FUN_145d2b188(void)

longlong * FUN_145d2b188(longlong *param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 local_b0;
  longlong local_a8 [2];
  longlong local_98;
  undefined8 uStack_90;
  longlong local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined8 local_70;
  undefined8 local_68;
  longlong lStack_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_68 = 0;
  lStack_60 = 0;
  local_58 = 0;
  WinHttpGetDefaultProxyConfiguration(&local_68);
  if (lStack_60 == 0) {
LAB_145d2b1d9:
    lVar3 = 0;
    iVar2 = 0;
    uVar4 = 0;
  }
  else {
    FUN_140056680(&local_98);
    cVar1 = FUN_14291d6fe(&local_98);
    if (cVar1 == '\0') {
      FUN_140056680(&local_78,L"https=");
      local_b0 = 0;
      local_b8 = 1;
      cVar1 = FUN_1407cdbc6(&local_98,&local_78,0,&local_98);
      if (local_78 != 0) {
        FUN_1400020a8();
      }
      if (cVar1 != '\0') {
        FUN_140056680(&local_78,&DAT_149e06120);
        local_b0 = 0;
        local_b8 = 1;
        FUN_1407cdbc6(&local_98,&local_78,&local_98,0);
        if (local_78 != 0) {
          FUN_1400020a8();
        }
        cVar1 = FUN_14291d6fe(&local_98);
        if (cVar1 != '\0') goto LAB_145d2b25b;
      }
      if (local_98 != 0) {
        FUN_1400020a8(local_98);
      }
      goto LAB_145d2b1d9;
    }
LAB_145d2b25b:
    lVar3 = local_98;
    iVar2 = (int)uStack_90;
    uVar4 = uStack_90._4_4_;
    if (1 < (int)uStack_90) goto LAB_145d2b1fe;
  }
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  WinHttpGetIEProxyConfigForCurrentUser(&local_98);
  if (local_88 == 0) goto LAB_145d2b1fe;
  FUN_140056680(&local_78);
  cVar1 = FUN_14291d6fe(&local_78);
  if (cVar1 == '\0') {
    FUN_140056680(local_a8,L"https=");
    local_b0 = 0;
    local_b8 = 1;
    cVar1 = FUN_1407cdbc6(&local_78,local_a8,0,&local_78);
    if (local_a8[0] != 0) {
      FUN_1400020a8();
    }
    if (cVar1 != '\0') {
      FUN_140056680(local_a8,&DAT_149e06120);
      local_b0 = 0;
      local_b8 = 1;
      FUN_1407cdbc6(&local_78,local_a8,&local_78,0);
      if (local_a8[0] != 0) {
        FUN_1400020a8();
      }
      cVar1 = FUN_14291d6fe(&local_78);
      if (cVar1 != '\0') goto LAB_145d2b28b;
    }
  }
  else {
LAB_145d2b28b:
    if (lVar3 != 0) {
      FUN_1400020a8(lVar3);
    }
    lVar3 = local_78;
    local_78 = 0;
    iVar2 = (int)local_70;
    uVar4 = local_70._4_4_;
    local_70 = 0;
  }
  if (local_78 != 0) {
    FUN_1400020a8();
  }
LAB_145d2b1fe:
  *param_1 = lVar3;
  *(int *)(param_1 + 1) = iVar2;
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar4;
  if ((local_50 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 145d2b43e FUN_145d2b43e body=739 status=ok
// SIG undefined FUN_145d2b43e(void)

void FUN_145d2b43e(longlong param_1)

{
  char cVar1;
  
  FUN_14153841e(DAT_14c872ce0,L"HTTP",L"HttpTimeout",param_1 + 0x18,&DAT_14c872ce8);
  FUN_14153841e(DAT_14c872ce0,L"HTTP",L"HttpTotalTimeout",param_1 + 0x14,&DAT_14c872ce8);
  FUN_14153841e(DAT_14c872ce0,L"HTTP",L"HttpConnectionTimeout",param_1 + 0x10,&DAT_14c872ce8);
  FUN_14153841e(DAT_14c872ce0,L"HTTP",L"HttpActivityTimeout",param_1 + 0x18,&DAT_14c872ce8);
  FUN_14153841e(DAT_14c872ce0,L"HTTP",L"HttpReceiveTimeout",param_1 + 0x28,&DAT_14c872ce8);
  FUN_14153841e(DAT_14c872ce0,L"HTTP",L"HttpSendTimeout",param_1 + 0x2c,&DAT_14c872ce8);
  FUN_1414d73b6(DAT_14c872ce0,L"HTTP",L"HttpMaxConnectionsPerServer",param_1 + 0x48,&DAT_14c872ce8);
  FUN_14052bb08(DAT_14c872ce0,L"HTTP",L"bEnableHttp",param_1 + 0x50,&DAT_14c872ce8);
  FUN_14052bb08(DAT_14c872ce0,L"HTTP",L"bUseNullHttp",param_1 + 0x51,&DAT_14c872ce8);
  FUN_14153841e(DAT_14c872ce0,L"HTTP",L"HttpDelayTime",param_1 + 0x30,&DAT_14c872ce8);
  FUN_14153841e(DAT_14c872ce0,L"HTTP",L"HttpThreadActiveFrameTimeInSeconds",param_1 + 0x34,
                &DAT_14c872ce8);
  FUN_14153841e(DAT_14c872ce0,L"HTTP",L"HttpThreadActiveMinimumSleepTimeInSeconds",param_1 + 0x38,
                &DAT_14c872ce8);
  FUN_14153841e(DAT_14c872ce0,L"HTTP",L"HttpThreadIdleFrameTimeInSeconds",param_1 + 0x3c,
                &DAT_14c872ce8);
  FUN_14153841e(DAT_14c872ce0,L"HTTP",L"HttpThreadIdleMinimumSleepTimeInSeconds",param_1 + 0x40,
                &DAT_14c872ce8);
  FUN_14153841e(DAT_14c872ce0,L"HTTP",L"HttpEventLoopThreadTickIntervalInSeconds",param_1 + 0x44,
                &DAT_14c872ce8);
  if (DAT_14c846b14 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                  L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  cVar1 = FUN_14063337c(&DAT_14c846b20,L"HttpNoProxy=",param_1 + 0xb8,1,0);
  if (cVar1 == '\0') {
    FUN_1449da20c(DAT_14c872ce0,L"HTTP",L"HttpNoProxy",param_1 + 0xb8,&DAT_14c872ce8);
  }
  FUN_1447a1747(*(undefined8 *)(param_1 + 0xd0),*(undefined4 *)(param_1 + 0xd8));
  *(undefined4 *)(param_1 + 0xd8) = 0;
  if (*(int *)(param_1 + 0xdc) != 0) {
    FUN_1408be2c4(param_1 + 0xd0,0);
  }
  FUN_14105aa76(DAT_14c872ce0,L"HTTP",L"AllowedDomains",param_1 + 0xd0,&DAT_14c872ce8);
  if (*(longlong **)(param_1 + 0x20) == (longlong *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000145d2b71d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x20) + 0x38))();
  return;
}



// FUNCTION 145d2b722 FUN_145d2b722 body=166 status=ok
// SIG undefined FUN_145d2b722(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d2b722(void)

{
  if (DAT_14cacef38 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cacef28 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cacef18 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cacef08 != 0) {
    FUN_1400020a8();
  }
  _DAT_14cacef00 = 0;
  if (DAT_14caceef8 != 0) {
    FUN_1400020a8();
  }
  FUN_145d2b7c8(&DAT_14caceeb8);
  _DAT_14caceeb0 = 0;
  if (DAT_14caceea8 != 0) {
    FUN_1400020a8();
  }
  FUN_145d2b7c8(&DAT_14cacee68);
  return;
}



// FUNCTION 145d2b7c8 FUN_145d2b7c8 body=53 status=ok
// SIG undefined FUN_145d2b7c8(void)

void FUN_145d2b7c8(longlong *param_1)

{
  FUN_145d2b7fe();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d2b7fe FUN_145d2b7fe body=373 status=ok
// SIG undefined FUN_145d2b7fe(void)

void FUN_145d2b7fe(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
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
      lVar4 = (longlong)iStack_5c;
      plVar3 = *(longlong **)(lVar2 + 0x18 + lVar4 * 0x40);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x10))();
      }
      if (*(longlong *)(lVar2 + lVar4 * 0x40 + 8) != 0) {
        FUN_1400020a8();
      }
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140b7ce44(param_1,0);
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



// FUNCTION 145d2b974 FUN_145d2b974 body=55 status=ok
// SIG undefined FUN_145d2b974(void)

void FUN_145d2b974(longlong *param_1)

{
  FUN_145d2b9ac(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d2b9ac FUN_145d2b9ac body=388 status=ok
// SIG undefined FUN_145d2b9ac(void)

void FUN_145d2b9ac(longlong *param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong *local_70;
  uint local_68;
  int iStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  longlong *local_50;
  uint local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = param_1 + 2;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  local_40 = 0;
  local_50 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_58);
  }
  local_78 = local_58;
  local_70 = local_50;
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_60 = local_40;
  local_5c = local_3c;
  local_80 = param_1;
  if (iStack_44 < (int)local_50[3]) {
    do {
      lVar2 = *local_80;
      lVar5 = (longlong)iStack_64 * 0x60;
      *(undefined4 *)(lVar2 + 0x50 + lVar5) = 0;
      if (*(longlong *)(lVar2 + 0x48 + lVar5) != 0) {
        FUN_1400020a8();
      }
      FUN_140bd50c4(lVar2 + lVar5 + 8);
      local_68 = local_68 & ~local_78._4_4_;
      FUN_1449c0562(&local_78);
    } while (iStack_64 < (int)local_70[3]);
  }
  if (-1 < param_2) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != param_2) {
      FUN_1448fc38a(param_1,param_2);
    }
    param_1[6] = 0xffffffff;
    uVar4 = param_2 + 0x1fU & 0xffffffe0;
    *(undefined4 *)(param_1 + 5) = 0;
    if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar4) ||
       (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
      uVar3 = 0x80;
      if (0x80 < (int)uVar4) {
        uVar3 = uVar4;
      }
      *(uint *)((longlong)param_1 + 0x2c) = uVar3;
      FUN_1446efbd8(plVar1,0);
    }
    if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 145d2bb32 FUN_145d2bb32 body=507 status=ok
// SIG undefined FUN_145d2bb32(void)

void FUN_145d2bb32(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  code *pcVar8;
  undefined1 auStack_68 [32];
  code *local_48;
  int local_40;
  undefined1 local_38 [8];
  code *local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar5 = FUN_1400d7050();
  if (lVar5 != 0) {
    lVar6 = FUN_144a5dd5e();
    if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8)
        == lVar6 + 0x30)) {
      param_1 = param_1 + -0x30;
      local_30 = FUN_145af6802;
      local_28 = 0;
      FUN_145d2be2e(lVar5 + 0x2320,&local_48,param_1);
      if (*(longlong *)(lVar5 + 0x2210) != 0) {
        local_30 = FUN_146128b7e;
        local_28 = 0;
        FUN_145d2bf2e(*(longlong *)(lVar5 + 0x2210) + 0x18,&local_48,param_1);
      }
      FUN_1407934de(&local_30,lVar5);
      if (local_30 != (code *)0x0) {
        local_48 = FUN_140e0b272;
        local_40 = 0;
        FUN_145d2bd2e(local_30 + 0x18,local_38,param_1,&local_48);
        local_48 = FUN_140ebe778;
        local_40 = 0;
        FUN_145d2c12c(local_30 + 0x30,local_38,param_1,&local_48);
        local_48 = FUN_140e0b188;
        local_40 = 0;
        FUN_145d2bd2e(local_30 + 0x48,local_38,param_1,&local_48);
        FUN_1414dbe94(local_30,&local_48);
        if ((longlong)local_40 != 0) {
          lVar5 = (longlong)local_40 * 0x38;
          pcVar8 = local_48;
          do {
            uVar7 = FUN_14479d2ce(pcVar8 + 8);
            cVar4 = FUN_140e0b296(param_1,pcVar8,uVar7);
            if (cVar4 != '\0') {
              FUN_1457b3914(param_1);
            }
            pcVar8 = pcVar8 + 0x38;
            lVar5 = lVar5 + -0x38;
          } while (lVar5 != 0);
        }
        if (local_48 != (code *)0x0) {
          FUN_1400020a8(local_48);
        }
      }
      plVar3 = (longlong *)CONCAT44(uStack_24,local_28);
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
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145d2bd2e FUN_145d2bd2e body=254 status=ok
// SIG undefined FUN_145d2bd2e(void)

undefined8
FUN_145d2bd2e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  *local_48 = &PTR_LAB_14b968dc0;
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
  *local_48 = &PTR_FUN_14b9ad270;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_145bee228(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d2be2e FUN_145d2be2e body=254 status=ok
// SIG undefined FUN_145d2be2e(void)

undefined8
FUN_145d2be2e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  *local_48 = &PTR_LAB_14b9abb20;
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
  *local_48 = &PTR_FUN_14b9ad120;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_145a37440(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d2bf2e FUN_145d2bf2e body=254 status=ok
// SIG undefined FUN_145d2bf2e(void)

undefined8
FUN_145d2bf2e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  *local_48 = &PTR_LAB_14b9ad200;
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
  *local_48 = &PTR_FUN_14b9ad190;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_145d2c02e(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d2c02e FUN_145d2c02e body=216 status=ok
// SIG undefined FUN_145d2c02e(void)

undefined8 * FUN_145d2c02e(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 145d2c114 FUN_145d2c114 body=24 status=ok
// SIG undefined FUN_145d2c114(void)

bool FUN_145d2c114(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 145d2c12c FUN_145d2c12c body=254 status=ok
// SIG undefined FUN_145d2c12c(void)

undefined8
FUN_145d2c12c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  *local_48 = &PTR_LAB_14b968e30;
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
  *local_48 = &PTR_FUN_14b9ad2e0;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_145bee40e(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d2c22c FUN_145d2c22c body=40 status=ok
// SIG undefined FUN_145d2c22c(void)

undefined8 FUN_145d2c22c(undefined8 param_1,int param_2)

{
  FUN_145d2c254();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145d2c254 FUN_145d2c254 body=539 status=ok
// SIG undefined FUN_145d2c254(void)

void FUN_145d2c254(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a17e810;
  FUN_145d2c479(param_1[0x1f],*(undefined4 *)(param_1 + 0x20));
  if (param_1[0x1f] != 0) {
    FUN_1400020a8();
  }
  FUN_145d2c4c6(param_1[0x1d],*(undefined4 *)(param_1 + 0x1e));
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0x1b];
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
  plVar3 = (longlong *)param_1[0x18];
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
  plVar3 = (longlong *)param_1[0x15];
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
  plVar3 = (longlong *)param_1[0x12];
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
  plVar3 = (longlong *)param_1[0xf];
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
  plVar3 = (longlong *)param_1[0xc];
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
  plVar3 = (longlong *)param_1[6];
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



// FUNCTION 145d2c479 FUN_145d2c479 body=77 status=ok
// SIG undefined FUN_145d2c479(void)

void FUN_145d2c479(longlong param_1,int param_2)

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
      plVar4 = plVar4 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145d2c4c6 FUN_145d2c4c6 body=77 status=ok
// SIG undefined FUN_145d2c4c6(void)

void FUN_145d2c4c6(longlong param_1,int param_2)

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
      plVar4 = plVar4 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145d2c51a FUN_145d2c51a body=114 status=ok
// SIG undefined FUN_145d2c51a(void)

void FUN_145d2c51a(longlong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar2 = FUN_145a5453c();
  uVar3 = FUN_1409ffe1d();
  lVar4 = FUN_145d2c58c(uVar3,uVar2);
  *(longlong *)(param_1 + 8) = lVar4;
  uVar1 = *(uint *)(lVar4 + 0xc);
  if ((int)uVar1 < DAT_14c9647dc) {
    lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
  }
  else {
    lVar4 = 0;
  }
  FUN_1447f71cc(lVar4,0x40000000);
  if (*(char *)(*(longlong *)(param_1 + 8) + 0x28) == '\x01') {
    FUN_1456eac3e();
    return;
  }
  return;
}



// FUNCTION 145d2c58c FUN_145d2c58c body=177 status=ok
// SIG undefined FUN_145d2c58c(void)

undefined8 FUN_145d2c58c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong local_78;
  longlong *local_68;
  longlong local_58 [7];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  FUN_144a5c54a(local_b8,param_2);
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(local_b8);
  if (local_78 != 0) {
    if (local_68 == (longlong *)0x0) {
      local_68 = local_58;
    }
    (**(code **)(*local_68 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d2c63e FUN_145d2c63e body=340 status=ok
// SIG undefined FUN_145d2c63e(void)

void FUN_145d2c63e(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_98 [32];
  longlong **local_78;
  longlong *local_68;
  longlong *local_60;
  longlong *local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar3 = (longlong *)FUN_14001cc68(0x160,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14b4f2910;
  plVar1 = plVar3 + 2;
  local_58 = (longlong *)*param_5;
  local_78 = &local_58;
  *param_5 = 0;
  local_50 = (longlong *)CONCAT44(local_50._4_4_,*(undefined4 *)(param_5 + 1));
  *(undefined4 *)(param_5 + 1) = 0;
  FUN_145d2c836(plVar1,*param_2,param_3,param_4);
  local_68 = plVar1;
  local_60 = plVar3;
  FUN_145d2c794(&local_68,plVar1);
  local_58 = plVar1;
  local_50 = plVar3;
  if (plVar3 == (longlong *)0x0) {
    FUN_1411d7792(param_1,&local_58);
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    FUN_1411d7792(param_1);
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
  plVar1 = local_60;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_60 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d2c794 FUN_145d2c794 body=162 status=ok
// SIG undefined FUN_145d2c794(void)

void FUN_145d2c794(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_145d2c7d3;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_145d2c7d3;
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
LAB_145d2c7d3:
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
                    /* WARNING: Could not recover jumptable at 0x000145d2c832. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 145d2c836 FUN_145d2c836 body=240 status=ok
// SIG undefined FUN_145d2c836(void)

undefined8 *
FUN_145d2c836(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  iVar1 = DAT_14cb970bc + 1;
  *(int *)((longlong)param_1 + 0x1c) = DAT_14cb970bc;
  DAT_14cb970bc = iVar1;
  param_1[5] = 0;
  param_1[6] = param_2;
  *param_1 = &PTR_FUN_14b4f2930;
  param_1[4] = &PTR_FUN_14b4f2958;
  param_1[7] = 0;
  iVar1 = *(int *)(param_3 + 1);
  uVar2 = *param_3;
  *(int *)(param_1 + 8) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  }
  else {
    FUN_1413eadba(param_1 + 7,iVar1,0);
    FUN_1413ead8c(param_1[7],uVar2,iVar1);
  }
  *(undefined4 *)(param_1 + 9) = 0xffffffff;
  FUN_1412c5ebc(param_1 + 10,param_4);
  *(undefined1 *)(param_1 + 0x25) = 0;
  param_1[0x26] = 0;
  *(undefined4 *)(param_1 + 0x27) = 0;
  FUN_14114e6dc(param_1 + 0x26,param_5);
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  FUN_1449db362(param_5);
  return param_1;
}



// FUNCTION 145d2c926 FUN_145d2c926 body=136 status=ok
// SIG undefined FUN_145d2c926(void)

undefined1 * FUN_145d2c926(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_1415384ac();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"BinkParameters";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FBinkParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x40;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_145f99332;
}



// FUNCTION 145d2c9ae FUN_145d2c9ae body=136 status=ok
// SIG undefined FUN_145d2c9ae(void)

code * FUN_145d2c9ae(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"xy_xform1";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xb000000029;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14742219a;
}



// FUNCTION 145d2ca36 FUN_145d2ca36 body=138 status=ok
// SIG undefined FUN_145d2ca36(void)

code * FUN_145d2ca36(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"uv_xform1";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xd00000002b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147422110;
}



// FUNCTION 145d2cac0 FUN_145d2cac0 body=138 status=ok
// SIG undefined FUN_145d2cac0(void)

code * FUN_145d2cac0(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"uv_xform2";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xe00000002c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145d2ca36;
}



// FUNCTION 145d2cb4a FUN_145d2cb4a body=54 status=ok
// SIG undefined FUN_145d2cb4a(void)

void FUN_145d2cb4a(void)

{
  FUN_145d2cb80();
  if (DAT_14ca80438 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14ca80418 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d2cb80 FUN_145d2cb80 body=338 status=ok
// SIG undefined FUN_145d2cb80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d2cb80(void)

{
  undefined1 auStack_78 [32];
  longlong *local_58;
  undefined8 local_50;
  undefined4 *local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  undefined4 *local_28;
  uint local_20;
  int iStack_1c;
  undefined4 local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = 0x100000000;
  local_28 = &DAT_14ca80428;
  local_20 = 0xffffffff;
  iStack_1c = 0;
  local_18 = 0;
  if (DAT_14ca80440 != 0) {
    FUN_1449c0562(&local_30);
  }
  local_58 = &DAT_14ca80418;
  local_50 = local_30;
  local_48 = local_28;
  local_40 = local_20;
  iStack_3c = iStack_1c;
  local_38 = local_18;
  local_34 = local_14;
  if (iStack_1c < (int)local_28[6]) {
    do {
      FUN_145d2ccd4((longlong)iStack_3c * 0x20 + *local_58);
      local_40 = local_40 & ~local_50._4_4_;
      FUN_1449c0562(&local_50);
    } while (iStack_3c < (int)local_48[6]);
  }
  DAT_14ca80420 = 0;
  if (DAT_14ca80424 != 0) {
    FUN_1446f4a44(&DAT_14ca80418,0);
  }
  _DAT_14ca80448 = 0xffffffff;
  DAT_14ca80440 = 0;
  if (0x80 < DAT_14ca80444) {
    DAT_14ca80444 = 0x80;
    FUN_1446efbd8(&DAT_14ca80428,0);
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d2ccd4 FUN_145d2ccd4 body=61 status=ok
// SIG undefined FUN_145d2ccd4(void)

void FUN_145d2ccd4(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = param_1[2];
  if (lVar1 != 0) {
    FUN_14153869a(lVar1);
    FUN_1400020a8(lVar1);
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 145d2cd12 FUN_145d2cd12 body=462 status=ok
// SIG undefined FUN_145d2cd12(void)

undefined4 * FUN_145d2cd12(undefined4 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  char cVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  ulonglong *puVar8;
  undefined *puVar9;
  ulonglong uVar10;
  uint uVar11;
  int iVar12;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_141259efc(&DAT_14cb3a338,local_48);
  FUN_145d2cee2(local_40,*param_2,param_2[1]);
  *(undefined4 *)(local_40 + 6) = 0xffffffff;
  local_4c = local_48[0];
  uVar2 = *local_40;
  uVar7 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar11 = (uint)uVar2 & 0xffff;
  puVar8 = (ulonglong *)FUN_144741050(local_40 + 1);
  uVar1 = *(undefined1 *)((longlong)puVar8 + 10);
  uVar5 = ((uint)(*puVar8 >> 0x14) & 0xffff ^ (uint)(*puVar8 >> 4)) * -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  uVar6 = FUN_144a78877(uVar5 >> 0x10 ^ uVar5,(short)puVar8[1]);
  uVar6 = FUN_144a78877(uVar6,uVar1);
  uVar7 = FUN_144a78877(uVar6,((uint)uVar2 << 0x10 | uVar11) + (int)((ulonglong)uVar2 >> 0x20) +
                              (uVar7 << 0x13 | uVar7 & 0xffff) + (uVar11 >> 4));
  cVar4 = FUN_141259e3a(&DAT_14cb3a338,uVar7,local_40,&local_4c);
  uVar6 = local_4c;
  if (cVar4 == '\0') {
    uVar5 = DAT_14cb3a340 - DAT_14cb3a36c;
    if (uVar5 < 4) {
      iVar12 = 1;
    }
    else {
      uVar10 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar3 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar12 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar12 <= DAT_14cb3a380)) {
      uVar7 = DAT_14cb3a380 - 1U & uVar7;
      *(uint *)((longlong)local_40 + 0x34) = uVar7;
      puVar9 = DAT_14cb3a378;
      if (DAT_14cb3a378 == (undefined *)0x0) {
        puVar9 = &DAT_14cb3a370;
      }
      *(undefined4 *)(local_40 + 6) =
           *(undefined4 *)(puVar9 + ((longlong)DAT_14cb3a380 - 1U & (longlong)(int)uVar7) * 4);
      puVar9 = DAT_14cb3a378;
      if (DAT_14cb3a378 == (undefined *)0x0) {
        puVar9 = &DAT_14cb3a370;
      }
      *(undefined4 *)(puVar9 + ((longlong)DAT_14cb3a380 - 1U & (longlong)(int)uVar7) * 4) = local_4c
      ;
    }
    else {
      DAT_14cb3a380 = iVar12;
      FUN_14125a0de(&DAT_14cb3a338);
    }
  }
  *param_1 = uVar6;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d2cee2 FUN_145d2cee2 body=132 status=ok
// SIG undefined FUN_145d2cee2(void)

undefined8 * FUN_145d2cee2(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  void *_Src;
  longlong *plVar2;
  
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *param_1 = *param_2;
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  _Src = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1447a127e(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],_Src,(longlong)iVar1);
  }
  plVar2 = (longlong *)*param_3;
  param_1[4] = plVar2;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  *(int *)(param_1 + 5) = (int)param_3[1];
  return param_1;
}



// FUNCTION 145d2cf66 FUN_145d2cf66 body=239 status=ok
// SIG undefined FUN_145d2cf66(void)

void FUN_145d2cf66(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_68 [32];
  code *local_48;
  undefined4 local_40;
  undefined1 local_38 [8];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  param_1 = param_1 + -0x30;
  lVar5 = FUN_140495e96();
  if (lVar5 != 0) {
    lVar5 = FUN_1403ca91c(lVar5);
    if (lVar5 != 0) {
      iVar1 = *(int *)(lVar5 + 0x80);
      if ((longlong)iVar1 != 0) {
        lVar2 = *(longlong *)(lVar5 + 0x78);
        lVar6 = 0;
        do {
          if ((*(int *)(lVar2 + 8 + lVar6) != 0) &&
             (plVar3 = *(longlong **)(lVar2 + lVar6), plVar3 != (longlong *)0x0)) {
            cVar4 = (**(code **)(*plVar3 + 0x20))(plVar3,param_1);
            if (cVar4 != '\0') goto LAB_145d2d007;
          }
          lVar6 = lVar6 + 0x10;
        } while ((longlong)iVar1 * 0x10 != lVar6);
      }
      local_48 = FUN_1412b4d50;
      local_40 = 0;
      FUN_145d2d150(lVar5 + 0x78,local_38,param_1);
    }
  }
LAB_145d2d007:
  FUN_1412b536a(param_1);
  local_48 = (code *)&LAB_145afecb2;
  local_40 = 0;
  FUN_145d2d056(local_38,param_1);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d2d056 FUN_145d2d056 body=248 status=ok
// SIG undefined FUN_145d2d056(void)

undefined8 FUN_145d2d056(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

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
  *local_40 = &PTR_LAB_14a1e1a40;
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
  *local_40 = &PTR_FUN_14b9ae0f0;
  local_40[3] = 0;
  FUN_14485c47a(local_40 + 3,param_2);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_141211c46(&DAT_14c9647a0,param_1,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d2d150 FUN_145d2d150 body=254 status=ok
// SIG undefined FUN_145d2d150(void)

undefined8
FUN_145d2d150(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  *local_48 = &PTR_LAB_149e020b0;
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
  *local_48 = &PTR_FUN_14b9ae080;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_1448b6402(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d2d250 FUN_145d2d250 body=139 status=ok
// SIG undefined FUN_145d2d250(void)

void FUN_145d2d250(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_145d2d2dc();
  lVar1 = *(longlong *)(param_1 + 0x3f0);
  if (lVar1 != 0) {
    *(undefined1 *)(lVar1 + 0x5e5) = *(undefined1 *)(param_1 + 0x734);
    FUN_145c579d2(lVar1 + 0x558,local_20,param_1,FUN_1441458d2);
    FUN_145c579d2(lVar1 + 0x588,local_20,param_1,FUN_148d334aa);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d2d2dc FUN_145d2d2dc body=227 status=ok
// SIG undefined FUN_145d2d2dc(void)

void FUN_145d2d2dc(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  thunk_FUN_15b38af63();
  plVar1 = (longlong *)param_1[0x7e];
  if (plVar1 != (longlong *)0x0) {
    local_38[0] = 0;
    local_38[1] = 0;
    FUN_1400b2348(param_1[0xbd] + 0x3c0,local_38,1);
    (**(code **)(*plVar1 + 0x720))(plVar1,local_38);
    if (local_38[0] != 0) {
      FUN_1400020a8();
    }
    FUN_145d2d5de(param_1,plVar1);
    plVar2 = (longlong *)FUN_14497e828(param_1);
    if (plVar2 != (longlong *)0x0) {
      lVar3 = FUN_144a79464();
      if ((*(int *)(lVar3 + 0x38) <= *(int *)(plVar2[2] + 0x38)) &&
         (*(longlong *)(*(longlong *)(plVar2[2] + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
          lVar3 + 0x30)) {
        (**(code **)(*plVar2 + 0x568))(plVar2,plVar1);
        (**(code **)(*param_1 + 0x9a8))(param_1,plVar1);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d2d3c0 FUN_145d2d3c0 body=74 status=ok
// SIG undefined FUN_145d2d3c0(void)

void FUN_145d2d3c0(longlong param_1)

{
  int iVar1;
  
  FUN_144a787a6(param_1 + 0x438);
  FUN_1411f311e(param_1 + 0x410,param_1 + 0x438);
  iVar1 = FUN_14487fd02(param_1);
  if (iVar1 != 1) {
    FUN_145d2d704(param_1);
    return;
  }
  return;
}



// FUNCTION 145d2d40a FUN_145d2d40a body=114 status=ok
// SIG undefined FUN_145d2d40a(void)

void FUN_145d2d40a(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  int iVar3;
  
  if ((*(longlong *)(param_1 + 0x30) != 0) &&
     (*(longlong *)(*(longlong *)(param_1 + 0x30) + 0x360) != 0)) {
    iVar3 = FUN_14490d72a();
    if ((iVar3 != 3) && (plVar1 = *(longlong **)(param_1 + 0x400), plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x10))(plVar1,param_2);
      puVar2 = *(undefined8 **)(param_1 + 0x400);
      if (puVar2 != (undefined8 *)0x0) {
        *(undefined8 *)(param_1 + 0x400) = 0;
                    /* WARNING: Could not recover jumptable at 0x000145d2d479. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)*puVar2)(puVar2,1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 145d2d47c thunk_FUN_15b38af63 body=5 status=ok
// SIG undefined thunk_FUN_15b38af63(void)

void thunk_FUN_15b38af63(void)

{
  FUN_161955713();
  return;
}



// FUNCTION 145d2d50e FUN_145d2d50e body=206 status=ok
// SIG undefined FUN_145d2d50e(void)

void FUN_145d2d50e(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_68 [40];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = FUN_1447210f0();
  if (0 < *(int *)(lVar2 + 0x238)) {
    iVar5 = 0;
    lVar4 = 0;
    do {
      plVar3 = (longlong *)FUN_14479d2ce(*(longlong *)(lVar2 + 0x230) + lVar4);
      if ((plVar3 != (longlong *)0x0) &&
         (cVar1 = (**(code **)(*plVar3 + 0x6c8))(plVar3), cVar1 != '\0')) {
        local_40 = *(longlong *)(param_1 + 0x3a0);
        if ((local_40 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
        }
        (**(code **)(*plVar3 + 0xe58))(plVar3,&local_40);
      }
      lVar4 = lVar4 + 8;
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(lVar2 + 0x238));
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145d2d5de FUN_145d2d5de body=174 status=ok
// SIG undefined FUN_145d2d5de(void)

void FUN_145d2d5de(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(char *)(param_1 + 0x660) == '\0') {
    local_40 = 0;
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x5e8) + 0x200);
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x5e8) + 0x1f8);
    local_38 = iVar1;
    if (iVar1 == 0) {
      local_34 = 0;
    }
    else {
      FUN_1486a987e(&local_40,iVar1,0);
      FUN_1486a98f1(local_40,uVar2,iVar1);
    }
    FUN_145d2de40(param_2,&local_40);
    *(undefined1 *)(param_1 + 0x660) = 1;
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d2d68e FUN_145d2d68e body=46 status=ok
// SIG undefined FUN_145d2d68e(void)

void FUN_145d2d68e(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FUN_1461a01b0(param_2 + 0x498,param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_2 + 0x4b8) = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_2 + 0x4c0) = uVar1;
  return;
}



// FUNCTION 145d2d6bc FUN_145d2d6bc body=71 status=ok
// SIG undefined FUN_145d2d6bc(void)

undefined8 * FUN_145d2d6bc(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b403730;
  FUN_1458826b0(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145d2d704 FUN_145d2d704 body=561 status=ok
// SIG undefined FUN_145d2d704(void)

void FUN_145d2d704(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  byte bVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  longlong *local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 local_58 [40];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_14000bbd8(local_58,param_1 + 0x87,0);
  FUN_145bd1d66(&local_80,local_58);
  plVar3 = local_78;
  plVar9 = local_80;
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
  if (plVar9 != (longlong *)0x0) {
    uVar6 = 0;
    uVar8 = (int)param_1[0x88] - 1;
    if ((int)param_1[0x88] == 0) {
      uVar8 = uVar6;
    }
    FUN_1446f82e2(&local_80,uVar8,param_1[0x87],1);
    plVar3 = param_1 + 0x9a;
    local_68 = 0;
    uStack_60 = 0;
    if (local_80 == (longlong *)0x0) {
      local_80 = DAT_14cb7db78;
    }
    local_70 = local_80;
    local_80 = param_1;
    local_78 = plVar3;
    (**(code **)(*plVar9 + 0x18))(plVar9,&local_80);
    FUN_145d2d936(&local_80);
    if ((char)param_1[0x9e] == '\x01') {
      uVar6 = FUN_14885e5d2(plVar3);
    }
    if ((longlong)(int)param_1[0xa0] != 0) {
      plVar9 = (longlong *)param_1[0x9f];
      lVar10 = (longlong)(int)param_1[0xa0] << 5;
      do {
        bVar4 = (**(code **)(*plVar9 + 0x18))(plVar9);
        uVar6 = (uint)(byte)((byte)uVar6 | bVar4);
        plVar9 = plVar9 + 4;
        lVar10 = lVar10 + -0x20;
      } while (lVar10 != 0);
    }
    if (((uVar6 & 1) == 0) || (cVar5 = FUN_14885c494(plVar3), cVar5 != '\0')) {
      (**(code **)(*param_1 + 0x780))(param_1);
    }
    else {
      local_80 = (longlong *)0x0;
      local_78 = (longlong *)((ulonglong)local_78 & 0xffffffff00000000);
      FUN_1446efa72(&local_80,0,3,0x10);
      plVar9 = local_80;
      local_78 = (longlong *)CONCAT44(local_78._4_4_,3);
      *local_80 = (longlong)&PTR_LAB_149e020b0;
      LOCK();
      UNLOCK();
      lVar7 = DAT_14c758608 + 1;
      lVar10 = DAT_14c758608 + 1;
      if (lVar7 == 0) {
        LOCK();
        UNLOCK();
        lVar7 = DAT_14c758608 + 2;
        lVar10 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar10;
      local_80[2] = lVar7;
      *local_80 = (longlong)&PTR_FUN_14b403bf0;
      local_80[3] = 0;
      FUN_14485c47a(local_80 + 3,param_1);
      plVar9[4] = (longlong)FUN_148861022;
      FUN_14885c504(plVar3,&local_80);
      FUN_1449db362(&local_80);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145d2d936 FUN_145d2d936 body=570 status=ok
// SIG undefined FUN_145d2d936(void)

void FUN_145d2d936(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined **ppuVar11;
  bool bVar12;
  undefined1 auStack_98 [32];
  undefined **local_78;
  longlong *local_70;
  longlong *local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = (longlong *)(param_1 + 0x18);
  iVar7 = *(int *)(param_1 + 0x20);
  if (iVar7 < 1) goto LAB_145d2d95e;
  local_50 = *(undefined8 *)(param_1 + 0x10);
  local_58 = DAT_14cb7db70;
  local_48 = 0;
  uVar8 = FUN_14050fd64();
  FUN_140520a5e(uVar8,&local_78,&local_58);
  if (local_70 == (longlong *)0x0) {
LAB_145d2da1a:
    bVar12 = true;
    plVar9 = (longlong *)0x0;
LAB_145d2da1f:
    uVar8 = FUN_14050fd64();
    FUN_140b0c6f6(uVar8,&local_78,&local_58);
    plVar10 = local_70;
    ppuVar11 = local_78;
    local_78 = (undefined **)0x0;
    plVar4 = plVar9;
    if (local_70 != plVar9) {
      local_70 = (longlong *)0x0;
      if (bVar12) goto LAB_145d2da5d;
      LOCK();
      plVar3 = plVar9 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      plVar4 = plVar10;
      if ((int)*plVar3 == 0) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
    plVar10 = plVar4;
    plVar9 = local_70;
    if (local_70 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_70 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*local_70)(local_70);
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
  }
  else {
    iVar7 = (int)local_70[1];
    do {
      if (iVar7 == 0) {
        plVar9 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar5 = (int)local_70[1];
      bVar12 = iVar7 == iVar5;
      if (bVar12) {
        *(int *)(local_70 + 1) = iVar7 + 1;
        iVar5 = iVar7;
      }
      iVar7 = iVar5;
      UNLOCK();
      plVar9 = local_70;
    } while (!bVar12);
    LOCK();
    piVar2 = (int *)((longlong)local_70 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*local_70 + 0x10))();
    }
    if (plVar9 == (longlong *)0x0) goto LAB_145d2da1a;
    plVar10 = plVar9;
    ppuVar11 = local_78;
    if (local_78 == (undefined **)0x0) {
      bVar12 = false;
      goto LAB_145d2da1f;
    }
  }
LAB_145d2da5d:
  cVar6 = (**(code **)(*ppuVar11 + 0x10))(ppuVar11,plVar1,0,0);
  if (cVar6 != '\0') {
    if (plVar10 == (longlong *)0x0) {
      local_70 = (longlong *)0x0;
      local_60 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
      UNLOCK();
      local_70 = (longlong *)0x0;
      local_78 = &PTR_LAB_14b162f00;
      LOCK();
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
      UNLOCK();
      LOCK();
      plVar9 = plVar10 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      local_60 = plVar10;
      if ((int)*plVar9 == 0) {
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
    local_78 = &PTR_FUN_14b4031b0;
    FUN_14885e670(*(undefined8 *)(param_1 + 8),&local_78);
    FUN_1486a8e3e(&local_78);
  }
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar10 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
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
  iVar7 = *(int *)(param_1 + 0x20);
LAB_145d2d95e:
  FUN_140861e20(*plVar1,iVar7);
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145d2db72 FUN_145d2db72 body=603 status=ok
// SIG undefined FUN_145d2db72(void)

void FUN_145d2db72(longlong param_1,undefined8 param_2)

{
  int iVar1;
  void *_Src;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  void *local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((longlong)*(int *)(param_1 + 0x200) != 0) {
    puVar10 = *(undefined8 **)(param_1 + 0x1f8);
    puVar9 = puVar10 + (longlong)*(int *)(param_1 + 0x200) * 5;
    do {
      local_70 = *puVar10;
      local_68 = *(undefined4 *)(puVar10 + 1);
      uStack_64 = *(undefined4 *)((longlong)puVar10 + 0xc);
      uStack_60 = *(undefined4 *)(puVar10 + 2);
      uStack_5c = *(undefined4 *)((longlong)puVar10 + 0x14);
      local_58 = (void *)0x0;
      local_50 = *(int *)(puVar10 + 4);
      lVar11 = (longlong)local_50;
      _Src = (void *)puVar10[3];
      if (lVar11 == 0) {
        local_4c = 0;
      }
      else {
        FUN_1446dd670(&local_58,local_50,0);
        memcpy(local_58,_Src,lVar11 * 2);
      }
      FUN_145ef2e9e(param_2,&local_70);
      if (local_58 != (void *)0x0) {
        FUN_1400020a8();
      }
      puVar10 = puVar10 + 5;
    } while (puVar10 != puVar9);
  }
  lVar11 = *(longlong *)(param_1 + 0x360);
  if (lVar11 != 0) {
    lVar5 = *(longlong *)(lVar11 + 0x18);
    if (lVar5 == 0) {
      uVar4 = FUN_145c20674();
      lVar5 = FUN_14477b664(uVar4);
      *(longlong *)(lVar11 + 0x18) = lVar5;
    }
    lVar6 = *(longlong *)(lVar11 + 0x20);
    if (lVar6 == 0) {
      if ((*(longlong *)(lVar11 + 0x10) == 0) || (lVar5 == 0)) {
        lVar6 = 0;
      }
      else {
        plVar2 = *(longlong **)(lVar5 + 0xb8);
        if ((plVar2 == (longlong *)0x0) ||
           (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
          lVar6 = 0;
        }
        else {
          uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
          lVar6 = FUN_144aff482(uVar4,(longlong *)(lVar11 + 0x10));
        }
        *(longlong *)(lVar11 + 0x20) = lVar6;
      }
    }
    FUN_145d2ddce(param_2,lVar6);
  }
  iVar1 = *(int *)(param_1 + 0x398);
  if ((longlong)iVar1 != 0) {
    lVar11 = *(longlong *)(param_1 + 0x390);
    lVar5 = 0;
    do {
      lVar6 = *(longlong *)(lVar11 + lVar5);
      if (lVar6 != 0) {
        lVar7 = *(longlong *)(lVar6 + 0x18);
        if (lVar7 == 0) {
          uVar4 = FUN_145c20674();
          lVar7 = FUN_14477b664(uVar4);
          *(longlong *)(lVar6 + 0x18) = lVar7;
        }
        lVar8 = *(longlong *)(lVar6 + 0x20);
        if (lVar8 == 0) {
          if (lVar7 == 0) {
            lVar8 = 0;
          }
          else {
            lVar8 = 0;
            if (*(longlong *)(lVar6 + 0x10) != 0) {
              plVar2 = *(longlong **)(lVar7 + 0xb8);
              if ((plVar2 == (longlong *)0x0) ||
                 (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
                lVar8 = 0;
              }
              else {
                uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
                lVar8 = FUN_144aff482(uVar4,(longlong *)(lVar6 + 0x10));
              }
              *(longlong *)(lVar6 + 0x20) = lVar8;
            }
          }
        }
        FUN_145d2ddce(param_2,lVar8);
      }
      lVar5 = lVar5 + 0x18;
    } while ((longlong)iVar1 * 0x18 != lVar5);
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145d2ddce FUN_145d2ddce body=112 status=ok
// SIG undefined FUN_145d2ddce(void)

void FUN_145d2ddce(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined1 local_30 [16];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0) {
    uVar1 = FUN_14050fd64();
    local_38 = 0;
    FUN_14088df30(uVar1,local_30,param_2,0);
    FUN_14885e6de(param_1,local_30);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d2de40 FUN_145d2de40 body=729 status=ok
// SIG undefined FUN_145d2de40(void)

void FUN_145d2de40(longlong param_1,longlong *param_2)

{
  uint uVar1;
  int iVar2;
  void *_Src;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  void *local_68;
  int local_60;
  undefined4 local_5c;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(char *)(param_1 + 0x178) == '\x03') {
    local_58 = 0;
    uStack_50 = 0;
    if ((longlong)(int)param_2[1] != 0) {
      puVar6 = (undefined8 *)*param_2;
      puVar9 = puVar6 + (longlong)(int)param_2[1] * 5;
      do {
        local_80 = *puVar6;
        local_78 = *(undefined4 *)(puVar6 + 1);
        uStack_74 = *(undefined4 *)((longlong)puVar6 + 0xc);
        uStack_70 = *(undefined4 *)(puVar6 + 2);
        uStack_6c = *(undefined4 *)((longlong)puVar6 + 0x14);
        local_68 = (void *)0x0;
        local_60 = *(int *)(puVar6 + 4);
        lVar8 = (longlong)local_60;
        _Src = (void *)puVar6[3];
        if (lVar8 == 0) {
          local_5c = 0;
        }
        else {
          FUN_1446dd670(&local_68,local_60,0);
          memcpy(local_68,_Src,lVar8 * 2);
        }
        lVar8 = FUN_14479d2ce(&local_80);
        if ((lVar8 == 0) && (CONCAT44(uStack_74,local_78) != 0)) {
          lVar8 = FUN_140007850();
          cVar3 = (*(code *)PTR_FUN_14c758760)();
          if ((lVar8 == 0) || (cVar3 == '\0')) {
            FUN_14485c47a(&local_80,lVar8);
            if (lVar8 == 0) goto LAB_145d2dff1;
          }
          else {
            uVar1 = *(uint *)(lVar8 + 0xc);
            if ((int)uVar1 < DAT_14c9647dc) {
              lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
            }
            else {
              lVar4 = 0;
            }
            if ((*(uint *)(lVar4 + 8) & 0x8400000) == 0) {
              FUN_14485c47a(&local_80,lVar8);
            }
          }
          if ((*(uint *)(lVar8 + 8) >> 0x1e & 1) == 0) {
LAB_145d2dfcc:
            lVar4 = FUN_144a797b2();
            if ((((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar8 + 0x10) + 0x38)) &&
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) +
                   (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) &&
                (lVar4 = FUN_1458cc3dc(), lVar4 != 0)) &&
               ((*(int *)(lVar4 + 0x38) <= *(int *)(lVar8 + 0x38) &&
                (*(longlong *)(*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
                 == lVar4 + 0x30)))) {
              local_88 = lVar8;
              FUN_14886870c(&local_58);
            }
          }
        }
        else if (lVar8 != 0) goto LAB_145d2dfcc;
LAB_145d2dff1:
        if (local_68 != (void *)0x0) {
          FUN_1400020a8();
        }
        lVar8 = local_58;
        puVar6 = puVar6 + 5;
      } while (puVar6 != puVar9);
      lVar4 = (longlong)(int)uStack_50;
      if (lVar4 != 0) {
        lVar7 = 0;
        do {
          lVar5 = FUN_14886114e(param_1,*(undefined8 *)(lVar8 + lVar7));
          if (lVar5 != 0) {
            iVar2 = *(int *)(param_1 + 0x510);
            *(uint *)(param_1 + 0x510) = iVar2 + 1U;
            if (*(uint *)(param_1 + 0x514) < iVar2 + 1U) {
              FUN_148868778((longlong *)(param_1 + 0x508),iVar2);
            }
            *(longlong *)(*(longlong *)(param_1 + 0x508) + (longlong)iVar2 * 8) = lVar5;
            if (DAT_14c950c29 == '\x01') {
              FUN_1456cec3c(lVar5);
            }
            FUN_148861208(lVar5);
          }
          lVar7 = lVar7 + 8;
        } while (lVar4 * 8 != lVar7);
      }
    }
    FUN_145d2e11a(param_1 + 0x518,param_1);
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  FUN_1458d8f0f(*param_2,(int)param_2[1]);
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145d2e11a FUN_145d2e11a body=162 status=ok
// SIG undefined FUN_145d2e11a(void)

void FUN_145d2e11a(longlong *param_1,undefined8 param_2)

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
        goto LAB_145d2e1a7;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_145d2e1a7:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 145d2e1bc FUN_145d2e1bc body=353 status=ok
// SIG undefined FUN_145d2e1bc(void)

undefined4 * FUN_145d2e1bc(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_145d2e3e2(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  uVar9 = *(undefined8 *)*param_3;
  *local_40 = uVar9;
  local_40[1] = *puVar1;
  lVar7 = puVar1[1];
  local_40[2] = lVar7;
  if (lVar7 != 0) {
    LOCK();
    *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
    UNLOCK();
    uVar9 = *local_40;
  }
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  local_4c = local_48[0];
  uVar8 = (uint)((ulonglong)uVar9 >> 0x10);
  uVar4 = (uint)uVar9 & 0xffff;
  uVar8 = ((uint)uVar9 << 0x10 | uVar4) + (int)((ulonglong)uVar9 >> 0x20) +
          (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar4 >> 4);
  cVar3 = FUN_145d2e31e(param_1,uVar8,local_40,&local_4c);
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
      *(uint *)((longlong)local_40 + 0x1c) = uVar8;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 3) =
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
      FUN_145d2e4c8(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d2e31e FUN_145d2e31e body=195 status=ok
// SIG undefined FUN_145d2e31e(void)

undefined8 FUN_145d2e31e(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
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
        puVar3 = (undefined4 *)(*param_1 + (longlong)iVar9 * 0x20);
        if (*(longlong *)(*param_1 + (longlong)iVar9 * 0x20) == *param_3) {
          plVar8 = *(longlong **)(puVar3 + 4);
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
          lVar6 = *param_3;
          uVar4 = *(undefined4 *)((longlong)param_3 + 4);
          lVar7 = param_3[1];
          uVar5 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(longlong *)(puVar3 + 4) = param_3[2];
          *puVar3 = (int)lVar6;
          puVar3[1] = uVar4;
          puVar3[2] = (int)lVar7;
          puVar3[3] = uVar5;
          FUN_14860b6dc(param_1,*param_4);
          *param_4 = iVar9;
          return 1;
        }
        iVar9 = puVar3[6];
      } while (iVar9 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 145d2e3e2 FUN_145d2e3e2 body=230 status=ok
// SIG undefined FUN_145d2e3e2(void)

int * FUN_145d2e3e2(longlong *param_1,int *param_2)

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



// FUNCTION 145d2e4c8 FUN_145d2e4c8 body=485 status=ok
// SIG undefined FUN_145d2e4c8(void)

void FUN_145d2e4c8(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x20;
        uVar4 = *(undefined8 *)(lVar3 + lVar7);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x1c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x18 + lVar7) =
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



// FUNCTION 145d2e6ae FUN_145d2e6ae body=192 status=ok
// SIG undefined FUN_145d2e6ae(void)

void FUN_145d2e6ae(undefined8 param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (param_2 != (longlong *)0x0) {
    lVar4 = (**(code **)(*param_2 + 8))(param_2);
    lVar5 = FUN_145c05526();
    if (((lVar5 != 0) && (*(int *)(lVar5 + 0x38) <= *(int *)(lVar4 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
        lVar5 + 0x30)) {
      if (DAT_14cb80540 == 0) {
        lVar4 = FUN_14001cc68(0x68,0x10);
        FUN_145d2e85a(lVar4);
        DAT_14cb80540 = lVar4;
      }
      plVar2 = *(longlong **)(DAT_14cb80540 + 0x58);
      plVar3 = *(longlong **)(DAT_14cb80540 + 0x60);
      if (plVar3 == (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000145d2e74d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar2 + 8))(plVar2,param_2);
        return;
      }
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      (**(code **)(*plVar2 + 8))(plVar2,param_2);
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
                    /* WARNING: Could not recover jumptable at 0x000145d2e76a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar3 + 0x10))(plVar3);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 145d2e76e FUN_145d2e76e body=104 status=ok
// SIG undefined FUN_145d2e76e(void)

void FUN_145d2e76e(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (param_2 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x18);
    iVar1 = *(int *)(param_1 + 0x20);
    lVar4 = (longlong)iVar1;
    if (lVar4 != 0) {
      lVar3 = 0;
      do {
        if (*(longlong *)(lVar2 + lVar3) == param_2) goto LAB_145d2e7c8;
        lVar3 = lVar3 + 8;
      } while (lVar4 * 8 - lVar3 != 0);
    }
    *(uint *)(param_1 + 0x20) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0x24) < iVar1 + 1U) {
      FUN_145d2e7d6((longlong *)(param_1 + 0x18),iVar1);
      lVar2 = *(longlong *)(param_1 + 0x18);
    }
    *(longlong *)(lVar2 + lVar4 * 8) = param_2;
LAB_145d2e7c8:
    *(undefined1 *)(param_1 + 0x30) = 1;
  }
  return;
}



// FUNCTION 145d2e7d6 FUN_145d2e7d6 body=132 status=ok
// SIG undefined FUN_145d2e7d6(void)

void FUN_145d2e7d6(longlong param_1,int param_2)

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



// FUNCTION 145d2e85a FUN_145d2e85a body=187 status=ok
// SIG undefined FUN_145d2e85a(void)

undefined8 * FUN_145d2e85a(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_58 [40];
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  plVar4 = (longlong *)FUN_145d2e916();
  plVar1 = plVar4 + 2;
  local_30 = plVar1;
  local_28 = plVar4;
  FUN_145d2e98a(&local_30,plVar1);
  plVar3 = local_28;
  param_1[0xb] = plVar1;
  param_1[0xc] = plVar4;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
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
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d2e916 FUN_145d2e916 body=115 status=ok
// SIG undefined FUN_145d2e916(void)

void FUN_145d2e916(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x98,0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_LAB_14b40d1d0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  puVar1[2] = &PTR_FUN_14b40d1f0;
  *(undefined8 *)((longlong)puVar1 + 0x31) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x39) = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  *(undefined4 *)((longlong)puVar1 + 0x74) = 0x80;
  *(undefined4 *)(puVar1 + 0xf) = 0xffffffff;
  return;
}



// FUNCTION 145d2e98a FUN_145d2e98a body=162 status=ok
// SIG undefined FUN_145d2e98a(void)

void FUN_145d2e98a(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_145d2e9c9;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_145d2e9c9;
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
LAB_145d2e9c9:
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
                    /* WARNING: Could not recover jumptable at 0x000145d2ea28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 145d2ea2c FUN_145d2ea2c body=138 status=ok
// SIG undefined FUN_145d2ea2c(void)

undefined1 * FUN_145d2ea2c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_145d2eab6();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"SkyDiffuseLighting";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FSkyDiffuseLightingParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0xf3;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_1471758bc;
}



// FUNCTION 145d2eab6 FUN_145d2eab6 body=268 status=ok
// SIG undefined FUN_145d2eab6(void)

undefined * FUN_145d2eab6(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9d57d0) {
    FUN_144b3d300(&DAT_14c9d57d0);
    if (DAT_14c9d57d0 == -1) {
      FUN_145d2ebc4(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FSkyDiffuseLightingParameters";
      local_38 = 0;
      local_50 = 0x30;
      local_58 = 0x3d;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9d5750,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142c4d70b);
      _Init_thread_footer(&DAT_14c9d57d0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14c9d5750;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d2ebc4 FUN_145d2ebc4 body=226 status=ok
// SIG undefined FUN_145d2ebc4(void)

longlong * FUN_145d2ebc4(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462c8d42;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d2eca8 FUN_145d2eca8 body=132 status=ok
// SIG undefined FUN_145d2eca8(void)

undefined1 * FUN_145d2eca8(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"OcclusionTintAndMinOcclusion";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_14717594a;
}



// FUNCTION 145d2ed2c FUN_145d2ed2c body=138 status=ok
// SIG undefined FUN_145d2ed2c(void)

code * FUN_145d2ed2c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InvSkySpecularOcclusionStrength";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2000000041;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471758c0;
}



// FUNCTION 145d2edb6 FUN_145d2edb6 body=138 status=ok
// SIG undefined FUN_145d2edb6(void)

code * FUN_145d2edb6(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"OcclusionExponent";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2400000042;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145d2ed2c;
}



// FUNCTION 145d2ee40 FUN_145d2ee40 body=267 status=ok
// SIG undefined FUN_145d2ee40(void)

undefined4 * FUN_145d2ee40(longlong param_1,undefined4 *param_2,uint param_3,undefined8 param_4)

{
  char cVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_145d2ef4c(param_1,local_48);
  FUN_141538d20(param_4,local_40);
  *(undefined4 *)(local_40 + 0x20) = 0xffffffff;
  cVar1 = FUN_141538d84(param_1,param_3,local_40,local_48);
  if (cVar1 == '\0') {
    uVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar5 = 1;
    if (3 < uVar3) {
      uVar2 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
      lVar4 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar4 & 0x1f);
    }
    if (((int)uVar3 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      *(uint *)(local_40 + 0x24) = param_3;
      lVar4 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar4 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x20) =
           *(undefined4 *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0x48) - 1U & param_3) * 4);
      lVar4 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar4 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0x48) - 1U & param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_145d2f034(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d2ef4c FUN_145d2ef4c body=231 status=ok
// SIG undefined FUN_145d2ef4c(void)

int * FUN_145d2ef4c(longlong *param_1,int *param_2)

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
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar5 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    iVar4 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar4 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar4 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x28);
    *(int *)(param_1 + 6) = iVar3;
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x28) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x28 + *param_1;
  return param_2;
}



// FUNCTION 145d2f034 FUN_145d2f034 body=419 status=ok
// SIG undefined FUN_145d2f034(void)

void FUN_145d2f034(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  uint uVar8;
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
        uVar8 = (int)param_1[9] - 1U & (uint)*(byte *)(lVar2 + lVar5 * 0x28);
        *(uint *)(lVar2 + 0x24 + lVar5 * 0x28) = uVar8;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x20 + lVar5 * 0x28) =
             *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] - 1U & uVar8) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + (ulonglong)((int)param_1[9] - 1U & uVar8) * 4) = iVar4;
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



// FUNCTION 145d2f1d8 FUN_145d2f1d8 body=38 status=ok
// SIG undefined FUN_145d2f1d8(void)

undefined8 FUN_145d2f1d8(undefined8 param_1,int param_2)

{
  FUN_145d2f1fe();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145d2f1fe FUN_145d2f1fe body=482 status=ok
// SIG undefined FUN_145d2f1fe(void)

void FUN_145d2f1fe(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14aa66ac0;
  FUN_141538e72(param_1[0x62],*(undefined4 *)(param_1 + 99));
  if (param_1[0x62] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x61) = 0;
  if (param_1[0x60] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(param_1 + 0x58);
  *(undefined4 *)(param_1 + 0x57) = 0;
  if (param_1[0x56] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(param_1 + 0x4e);
  *(undefined4 *)(param_1 + 0x4d) = 0;
  if (param_1[0x4c] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(param_1 + 0x44);
  *(undefined4 *)(param_1 + 0x43) = 0;
  if (param_1[0x42] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(param_1 + 0x3a);
  *(undefined4 *)(param_1 + 0x38) = 0;
  if (param_1[0x37] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(param_1 + 0x2f);
  *(undefined4 *)(param_1 + 0x2d) = 0;
  if (param_1[0x2c] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(param_1 + 0x24);
  FUN_145d2f3e0(param_1 + 0x1d);
  FUN_145d2f416(param_1 + 0x16);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x11));
  FUN_141538e31(param_1[0xf],*(undefined4 *)(param_1 + 0x10));
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  FUN_145d2f44c(param_1 + 6);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 1));
  return;
}



// FUNCTION 145d2f3e0 FUN_145d2f3e0 body=53 status=ok
// SIG undefined FUN_145d2f3e0(void)

void FUN_145d2f3e0(longlong *param_1)

{
  FUN_145d2f482();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d2f416 FUN_145d2f416 body=53 status=ok
// SIG undefined FUN_145d2f416(void)

void FUN_145d2f416(longlong *param_1)

{
  FUN_145d2f536();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d2f44c FUN_145d2f44c body=53 status=ok
// SIG undefined FUN_145d2f44c(void)

void FUN_145d2f44c(longlong *param_1)

{
  FUN_145d2f4dc();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d2f482 FUN_145d2f482 body=90 status=ok
// SIG undefined FUN_145d2f482(void)

void FUN_145d2f482(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_14494313c(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(uint *)(param_1 + 0x2c) < 0x81) {
    return;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0x80;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 145d2f4dc FUN_145d2f4dc body=90 status=ok
// SIG undefined FUN_145d2f4dc(void)

void FUN_145d2f4dc(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_144727cd0(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(uint *)(param_1 + 0x2c) < 0x81) {
    return;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0x80;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 145d2f536 FUN_145d2f536 body=332 status=ok
// SIG undefined FUN_145d2f536(void)

void FUN_145d2f536(longlong *param_1)

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
      FUN_147ccd1fe((longlong)iStack_4c * 0x68 + *local_68);
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_14059f004(param_1,0);
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



// FUNCTION 145d2f684 FUN_145d2f684 body=185 status=ok
// SIG undefined FUN_145d2f684(void)

bool FUN_145d2f684(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_48,0);
    lVar3 = local_48;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2,param_3,param_4);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d2f73e FUN_145d2f73e body=1305 status=ok
// SIG undefined FUN_145d2f73e(void)

void FUN_145d2f73e(longlong *param_1,char *param_2,char *param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  longlong *plVar6;
  undefined4 uVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_f8 [36];
  int local_d4 [2];
  int local_cc;
  int local_c8 [2];
  int local_c0;
  int local_bc [2];
  int local_b4;
  int local_b0 [2];
  int local_a8;
  int local_a4 [2];
  int local_9c;
  undefined1 local_98 [24];
  longlong local_80;
  undefined8 local_70;
  int *local_68;
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_14014e996(param_2,local_98,1,0);
  lVar4 = FUN_140495e96(param_1 + 6);
  if ((((lVar4 == 0) || (cVar1 = FUN_145d2fc58(lVar4), cVar1 == '\0')) ||
      (cVar1 = FUN_141538ec6(lVar4,local_98), cVar1 != '\0')) || (*param_2 != '\x06'))
  goto LAB_145d2f7b2;
  lVar4 = FUN_1402735c8();
  cVar1 = *param_3;
  if (cVar1 == '\x03') {
    bVar9 = *(longlong *)(param_3 + 4) == 0;
LAB_145d2f80a:
    uVar2 = (uint)!bVar9;
  }
  else if (cVar1 == '\x02') {
    uVar2 = *(uint *)(param_3 + 0xc);
  }
  else {
    if (cVar1 == '\x01') {
      bVar9 = *(int *)(param_3 + 0xc) == 0;
      goto LAB_145d2f80a;
    }
    uVar2 = 0;
  }
  cVar1 = param_2[0x38];
  if (cVar1 == '\x03') {
    bVar9 = *(longlong *)(param_2 + 0x3c) == 0;
LAB_145d2f821:
    uVar5 = (uint)!bVar9;
  }
  else if (cVar1 == '\x02') {
    uVar5 = *(uint *)(param_2 + 0x44);
  }
  else {
    if (cVar1 == '\x01') {
      bVar9 = *(int *)(param_2 + 0x44) == 0;
      goto LAB_145d2f821;
    }
    uVar5 = 0;
  }
  if (uVar2 != uVar5) {
    plVar6 = (longlong *)(lVar4 + 0x720);
    if (*param_2 == '\x01') {
      FUN_1447a97f4(&local_70,param_2 + 0x10);
      if (0 < local_70._4_4_) {
        iVar3 = 0;
        do {
          FUN_144a7c8fe(&local_70,local_a4,iVar3,1);
          if (((((local_a4[0] == DAT_14cb7beb0) && (local_9c == DAT_14cb7beb8)) ||
               ((FUN_144a7c8fe(&local_70,local_b0,iVar3,1), local_b0[0] == DAT_14cb7bec8 &&
                (local_a8 == DAT_14cb7bed0)))) ||
              ((FUN_144a7c8fe(&local_70,local_bc,iVar3,1), local_bc[0] == DAT_14cb7bee0 &&
               (local_b4 == DAT_14cb7bee8)))) ||
             (((FUN_144a7c8fe(&local_70,local_c8,iVar3,1), local_c8[0] == DAT_14cb7bef8 &&
               (local_c0 == DAT_14cb7bf00)) ||
              ((FUN_144a7c8fe(&local_70,local_d4,iVar3,1), local_d4[0] == DAT_14cb7bf10 &&
               (local_cc == DAT_14cb7bf18)))))) {
            FUN_1402b5374(&local_70,iVar3,0);
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 < local_70._4_4_);
      }
      uVar7 = (undefined4)local_70;
      if (local_58 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      uVar7 = *(undefined4 *)(param_2 + 0x10);
    }
    iVar3 = FUN_145d2fc60(plVar6,uVar7,param_2);
    if (iVar3 != -1) {
      FUN_1412099d2(param_1,&DAT_14cbd8288);
      if (*param_2 == '\x01') {
        FUN_1447a97f4(&local_70,param_2 + 0x10);
        if (0 < local_70._4_4_) {
          iVar3 = 0;
          do {
            FUN_144a7c8fe(&local_70,local_a4,iVar3,1);
            if (((((local_a4[0] == DAT_14cb7beb0) && (local_9c == DAT_14cb7beb8)) ||
                 ((FUN_144a7c8fe(&local_70,local_b0,iVar3,1), local_b0[0] == DAT_14cb7bec8 &&
                  (local_a8 == DAT_14cb7bed0)))) ||
                (((FUN_144a7c8fe(&local_70,local_bc,iVar3,1), local_bc[0] == DAT_14cb7bee0 &&
                  (local_b4 == DAT_14cb7bee8)) ||
                 ((FUN_144a7c8fe(&local_70,local_c8,iVar3,1), local_c8[0] == DAT_14cb7bef8 &&
                  (local_c0 == DAT_14cb7bf00)))))) ||
               ((FUN_144a7c8fe(&local_70,local_d4,iVar3,1), local_d4[0] == DAT_14cb7bf10 &&
                (local_cc == DAT_14cb7bf18)))) {
              FUN_1402b5374(&local_70,iVar3,0);
            }
            iVar3 = iVar3 + 1;
          } while (iVar3 < local_70._4_4_);
        }
        if (local_58 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        local_70._0_4_ = *(undefined4 *)(param_2 + 0x10);
      }
      iVar3 = FUN_145d2fc60(plVar6,(undefined4)local_70,param_2);
      lVar4 = (longlong)iVar3 * 0x238 + *plVar6;
      if (iVar3 == -1) {
        lVar4 = 0;
      }
      cVar1 = *(char *)(lVar4 + 0x228);
      lVar8 = lVar4 + 0xf8;
      if (cVar1 == '\0') {
        lVar8 = lVar4;
      }
      (**(code **)(*param_1 + 0x2d0))(param_1,local_b0,lVar8 + 0x38);
      local_70 = param_2;
      local_68 = local_b0;
      FUN_1402b3ac6(param_1 + 0xc,local_a4,&local_70,0);
      if (cVar1 == '\x01') {
        FUN_148e5a3d6(param_1,local_b0[0],1);
      }
    }
  }
LAB_145d2f7b2:
  if (local_80 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145d2fc58 FUN_145d2fc58 body=7 status=ok
// SIG undefined FUN_145d2fc58(void)

undefined1 FUN_145d2fc58(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x431);
}



// FUNCTION 145d2fc60 FUN_145d2fc60 body=114 status=ok
// SIG undefined FUN_145d2fc60(void)

int FUN_145d2fc60(longlong *param_1,uint param_2,undefined8 param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar4 != -1) {
      lVar3 = *param_1;
      do {
        cVar1 = FUN_14493b798(lVar3 + (longlong)iVar4 * 0x238,param_3);
        if (cVar1 != '\0') {
          return iVar4;
        }
        lVar3 = *param_1;
        iVar4 = *(int *)(lVar3 + 0x230 + (longlong)iVar4 * 0x238);
      } while (iVar4 != -1);
    }
  }
  return -1;
}



// FUNCTION 145d2fcd2 FUN_145d2fcd2 body=210 status=ok
// SIG undefined FUN_145d2fcd2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d2fcd2(void)

{
  if ((DAT_14caf3f87 & 2) == 0) {
    DAT_14caf3f87 = DAT_14caf3f87 | 2;
    _DAT_14caf3f28 = L"FGPUSpriteVertexFactoryShaderParametersVS";
    _DAT_14caf3f40 = FUN_146826540;
    _DAT_14caf3f48 = FUN_146825d77;
    _DAT_14caf3f50 = FUN_146825fd6;
    _DAT_14caf3f58 = FUN_1407e02ea;
    _DAT_14caf3f60 = FUN_146826273;
    _DAT_14caf3f38 = &LAB_147c0f384;
    _DAT_14caf3f78 = 0xffffffff00000034;
    _DAT_14caf3f80 = 4;
    DAT_14caf3f84 = 0;
    _DAT_14caf3f68 = &LAB_147c0f39e;
    FUN_145d2fda4();
    FUN_145d301ee();
    FUN_1407e00cc(&DAT_14caf3f20);
    return;
  }
  return;
}



// FUNCTION 145d2fda4 FUN_145d2fda4 body=121 status=ok
// SIG undefined FUN_145d2fda4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d2fda4(void)

{
  FUN_145d2fe1e();
  _DAT_14caf5168 = L"ParticleIndices";
  DAT_14caf5192 = FUN_140850cc5();
  _DAT_14caf5170 = FUN_140fb78d0();
  _DAT_14caf5180 = &LAB_14682652b;
  _DAT_14caf5188 = &DAT_100000004;
  _DAT_14caf5190 = 0;
  _DAT_14caf5178 = DAT_14caf3f30;
  DAT_14caf3f30 = &DAT_14caf5168;
  return;
}



// FUNCTION 145d2fe1e FUN_145d2fe1e body=121 status=ok
// SIG undefined FUN_145d2fe1e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d2fe1e(void)

{
  FUN_145d2fe98();
  _DAT_14caf5198 = L"ParticleIndicesOffset";
  DAT_14caf51c2 = FUN_140850cc5();
  _DAT_14caf51a0 = FUN_140ec6960();
  _DAT_14caf51b0 = &LAB_14682652b;
  _DAT_14caf51b8 = &DAT_100000008;
  _DAT_14caf51c0 = 0;
  _DAT_14caf51a8 = DAT_14caf3f30;
  DAT_14caf3f30 = &DAT_14caf5198;
  return;
}



// FUNCTION 145d2fe98 FUN_145d2fe98 body=121 status=ok
// SIG undefined FUN_145d2fe98(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d2fe98(void)

{
  FUN_145d2ff12();
  _DAT_14caf51c8 = L"TilePageScale";
  DAT_14caf51f2 = FUN_140850cc5();
  _DAT_14caf51d0 = FUN_140ec6960();
  _DAT_14caf51e0 = &LAB_14682652b;
  _DAT_14caf51e8 = 0x10000000e;
  _DAT_14caf51f0 = 0;
  _DAT_14caf51d8 = DAT_14caf3f30;
  DAT_14caf3f30 = &DAT_14caf51c8;
  return;
}



// FUNCTION 145d2ff12 FUN_145d2ff12 body=121 status=ok
// SIG undefined FUN_145d2ff12(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d2ff12(void)

{
  FUN_145d2ff8c();
  _DAT_14caf51f8 = L"PositionTexture";
  DAT_14caf5222 = FUN_140850cc5();
  _DAT_14caf5200 = FUN_140fb78d0();
  _DAT_14caf5210 = &LAB_14682652b;
  _DAT_14caf5218 = &DAT_100000014;
  _DAT_14caf5220 = 0;
  _DAT_14caf5208 = DAT_14caf3f30;
  DAT_14caf3f30 = &DAT_14caf51f8;
  return;
}



// FUNCTION 145d2ff8c FUN_145d2ff8c body=121 status=ok
// SIG undefined FUN_145d2ff8c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d2ff8c(void)

{
  FUN_145d30006();
  _DAT_14caf5228 = L"PositionTextureSampler";
  DAT_14caf5252 = FUN_140850cc5();
  _DAT_14caf5230 = FUN_140fb78d0();
  _DAT_14caf5240 = &LAB_14682652b;
  _DAT_14caf5248 = &DAT_100000018;
  _DAT_14caf5250 = 0;
  _DAT_14caf5238 = DAT_14caf3f30;
  DAT_14caf3f30 = &DAT_14caf5228;
  return;
}



// FUNCTION 145d30006 FUN_145d30006 body=121 status=ok
// SIG undefined FUN_145d30006(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d30006(void)

{
  FUN_145d30080();
  _DAT_14caf5258 = L"VelocityTexture";
  DAT_14caf5282 = FUN_140850cc5();
  _DAT_14caf5260 = FUN_140fb78d0();
  _DAT_14caf5270 = &LAB_14682652b;
  _DAT_14caf5278 = &DAT_10000001c;
  _DAT_14caf5280 = 0;
  _DAT_14caf5268 = DAT_14caf3f30;
  DAT_14caf3f30 = &DAT_14caf5258;
  return;
}



// FUNCTION 145d30080 FUN_145d30080 body=121 status=ok
// SIG undefined FUN_145d30080(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d30080(void)

{
  FUN_145d300fa();
  _DAT_14caf5288 = L"VelocityTextureSampler";
  DAT_14caf52b2 = FUN_140850cc5();
  _DAT_14caf5290 = FUN_140fb78d0();
  _DAT_14caf52a0 = &LAB_14682652b;
  _DAT_14caf52a8 = &DAT_100000020;
  _DAT_14caf52b0 = 0;
  _DAT_14caf5298 = DAT_14caf3f30;
  DAT_14caf3f30 = &DAT_14caf5288;
  return;
}



// FUNCTION 145d300fa FUN_145d300fa body=121 status=ok
// SIG undefined FUN_145d300fa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d300fa(void)

{
  FUN_145d30174();
  _DAT_14caf52b8 = L"AttributesTexture";
  DAT_14caf52e2 = FUN_140850cc5();
  _DAT_14caf52c0 = FUN_140fb78d0();
  _DAT_14caf52d0 = &LAB_14682652b;
  _DAT_14caf52d8 = &DAT_100000024;
  _DAT_14caf52e0 = 0;
  _DAT_14caf52c8 = DAT_14caf3f30;
  DAT_14caf3f30 = &DAT_14caf52b8;
  return;
}



// FUNCTION 145d30174 FUN_145d30174 body=121 status=ok
// SIG undefined FUN_145d30174(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d30174(void)

{
  FUN_145d3026a();
  _DAT_14caf52e8 = L"AttributesTextureSampler";
  DAT_14caf5312 = FUN_140850cc5();
  _DAT_14caf52f0 = FUN_140fb78d0();
  _DAT_14caf5300 = &LAB_14682652b;
  _DAT_14caf5308 = &DAT_100000028;
  _DAT_14caf5310 = 0;
  _DAT_14caf52f8 = DAT_14caf3f30;
  DAT_14caf3f30 = &DAT_14caf52e8;
  return;
}



// FUNCTION 145d301ee FUN_145d301ee body=123 status=ok
// SIG undefined FUN_145d301ee(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d301ee(void)

{
  _DAT_14caf5618 = L"BASE";
  DAT_14caf5642 = 4;
  _DAT_14caf5620 = FUN_1412f7d22();
  _DAT_14caf5628 = DAT_14caf3f30;
  _DAT_14caf5630 = &LAB_14682652b;
  DAT_14caf3f30 = &DAT_14caf5618;
  DAT_14caf3f85 = DAT_14caf3f85 + '\x01';
  _DAT_14caf5638 = 0x100000000;
  if (*(char *)(_DAT_14caf5620 + 100) != '\0') {
    DAT_14caf3f86 = DAT_14caf3f86 + '\x01';
  }
  return;
}


