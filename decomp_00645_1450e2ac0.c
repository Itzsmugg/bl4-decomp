// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1450e2ac0 FUN_1450e2ac0 body=316 status=ok
// SIG undefined FUN_1450e2ac0(void)

void FUN_1450e2ac0(longlong param_1,longlong *param_2,undefined4 param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  undefined1 local_res20 [8];
  ulonglong in_stack_ffffffffffffffa8;
  undefined4 local_48;
  undefined1 local_44;
  undefined8 local_40;
  longlong local_38 [4];
  
  iVar2 = FUN_1450dff30(param_2);
  if (iVar2 != 1) {
    (**(code **)(*param_2 + 0x28))(param_2,0,2);
    return;
  }
  lVar3 = (**(code **)(*param_2 + 0x20))
                    (param_2,&local_40,local_38,local_res20,
                     in_stack_ffffffffffffffa8 & 0xffffffffffffff00);
  if (lVar3 == 0) {
    bVar4 = false;
    iVar2 = 0x35;
    lVar3 = 0;
  }
  else {
    bVar4 = local_38[0] == 0;
    iVar2 = 1;
    if (!bVar4) {
      local_44 = *(undefined1 *)((longlong)param_2 + 0x74);
      lVar1 = **(longlong **)(param_1 + 0x428);
      local_48 = param_3;
      if (*(char *)((longlong)param_2 + 0x76) == '\0') {
        iVar2 = (**(code **)(lVar1 + 0x28))();
      }
      else {
        iVar2 = (**(code **)(lVar1 + 0x30))
                          (*(longlong **)(param_1 + 0x428),local_40,&local_48,
                           *(undefined8 *)(local_38[0] + 0x10),local_38[0]);
      }
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
      lVar1 = *(longlong *)(lVar3 + 8);
      *(undefined8 *)(lVar1 + 0x10) = 0;
      if ((iVar2 != 1) && (*(int *)(lVar1 + 0x20) != -1)) {
        FUN_1453a1690(param_1 + 0xc0);
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
      bVar4 = local_38[0] == 0;
    }
    bVar4 = !bVar4;
  }
  (**(code **)(*param_2 + 0x28))(param_2,lVar3,iVar2,bVar4);
  return;
}



// FUNCTION 1450e2c00 FUN_1450e2c00 body=62 status=ok
// SIG undefined FUN_1450e2c00(void)

undefined8 * FUN_1450e2c00(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_149c28828;
  FUN_1450def70();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x460);
  }
  return param_1;
}



// FUNCTION 1450e2c40 FUN_1450e2c40 body=133 status=ok
// SIG undefined FUN_1450e2c40(void)

void FUN_1450e2c40(longlong param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + -0x50));
  *(undefined1 *)(param_1 + -8) = 1;
  *(undefined1 *)(param_1 + -4) = 0;
  FUN_1450e0890(param_1 + -0x80,3);
  if (*(longlong *)(param_1 + 0x40) != 0) {
    *(undefined1 *)(param_1 + 0x48) = 1;
    FUN_14539fb50(param_1 + -0x80);
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + -0x50));
    FUN_14539fc70(*(undefined8 *)(param_1 + -0x20),param_1 + -0x80);
    *(undefined1 *)(param_1 + 0x48) = 0;
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + -0x50));
  }
                    /* WARNING: Could not recover jumptable at 0x0001450e2cbe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + -0x50));
  return;
}



// FUNCTION 1450e2cd0 FUN_1450e2cd0 body=125 status=ok
// SIG undefined FUN_1450e2cd0(void)

void FUN_1450e2cd0(longlong param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + -0x50));
  FUN_1450e0890(param_1 + -0x80,3);
  if (*(longlong *)(param_1 + 0x40) != 0) {
    *(undefined1 *)(param_1 + 0x48) = 1;
    FUN_14539fb50(param_1 + -0x80);
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + -0x50));
    FUN_14539fc70(*(undefined8 *)(param_1 + -0x20),param_1 + -0x80);
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + -0x50));
    *(undefined1 *)(param_1 + 0x48) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x0001450e2d46. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + -0x50));
  return;
}



// FUNCTION 1450e2d50 FUN_1450e2d50 body=77 status=ok
// SIG undefined FUN_1450e2d50(void)

undefined8 FUN_1450e2d50(longlong param_1)

{
  undefined8 uVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  if ((*(longlong *)(param_1 + 0xc0) == 0) && (*(char *)(param_1 + 200) == '\0')) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  return uVar1;
}



// FUNCTION 1450e2da0 FUN_1450e2da0 body=434 status=ok
// SIG undefined FUN_1450e2da0(void)

longlong FUN_1450e2da0(longlong *param_1,longlong *param_2,longlong *param_3,undefined1 *param_4)

{
  longlong *plVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  
  lVar9 = 0;
  *param_3 = 0;
  *param_4 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 6));
  if ((char)param_1[0xf] == '\0') {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 6));
    cVar2 = *(char *)((longlong)param_1 + 0x7c);
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 6));
    if (cVar2 != '\0') {
      *param_2 = param_1[5];
      uVar12 = (ulonglong)*(uint *)(param_1 + 0x16) + param_1[0x11];
      uVar10 = (int)param_1[0x14] - *(uint *)(param_1 + 0x16);
      uVar7 = *(uint *)(param_1[0xc] + 0x430);
      if (uVar10 <= *(uint *)(param_1[0xc] + 0x430)) {
        uVar7 = uVar10;
      }
      uVar11 = (ulonglong)uVar7;
      uVar10 = uVar7;
      if (*(char *)((longlong)param_1 + 0x76) == '\0') {
        uVar4 = *(ulonglong *)param_1[5];
        if (uVar4 < uVar11 + uVar12) {
          uVar11 = 0;
          if (uVar12 < uVar4) {
            uVar11 = (ulonglong)(uint)((int)uVar4 - (int)uVar12);
          }
        }
        uVar10 = (uint)uVar11;
        if ((*(char *)((longlong)param_1 + 0x7b) != '\0') &&
           (uVar8 = (**(code **)(*param_1 + 0x40))(param_1), (ulonglong)uVar8 < uVar11 + uVar12)) {
          uVar10 = uVar8 - (int)uVar12;
        }
      }
      uVar8 = *(uint *)(param_1 + 0x16);
      plVar5 = (longlong *)param_1[0xc];
      *param_3 = 0;
      EnterCriticalSection((LPCRITICAL_SECTION)(plVar5 + 3));
      lVar9 = (**(code **)(*plVar5 + 0x48))(plVar5);
      LeaveCriticalSection((LPCRITICAL_SECTION)(plVar5 + 3));
      if (lVar9 != 0) {
        plVar1 = plVar5 + 0x89;
        uVar3 = *(uint *)(param_1 + 0xe);
        lVar6 = *(longlong *)(param_1[5] + 8);
        plVar5[0x8b] = (ulonglong)uVar8 + param_1[0x12];
        *plVar1 = (ulonglong)uVar3 * lVar6 + uVar12;
        *(uint *)(plVar5 + 0x8a) = uVar7;
        *(uint *)((longlong)plVar5 + 0x454) = uVar10;
        *param_3 = (longlong)plVar1;
        param_1[0x13] = (longlong)plVar1;
        *(uint *)(lVar9 + 0x14) = *(uint *)(lVar9 + 0x14) & 0xfffffff8;
        *(longlong **)(lVar9 + 8) = param_1 + 0x11;
        *(uint *)(lVar9 + 0x10) = uVar8;
        *(uint *)(param_1 + 0x16) = (int)param_1[0x16] + uVar10;
        param_1[0x18] = lVar9;
        param_1[0xb] = *(longlong *)(param_1[0xc] + 0x70);
      }
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 6));
  return lVar9;
}



// FUNCTION 1450e2f60 FUN_1450e2f60 body=152 status=ok
// SIG undefined FUN_1450e2f60(void)

undefined8 FUN_1450e2f60(longlong param_1,longlong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  uVar1 = param_3;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  if (param_2 != 0) {
    if (((int)param_3 == 1) && (((byte)*(undefined4 *)(param_2 + 0x14) & 7) != 2)) {
      uVar1 = param_3 & 0xff;
    }
    else {
      uVar1 = uVar1 & 0xffffffffffffff00;
    }
    FUN_1450e0910(param_1,param_2,uVar1);
    *(undefined8 *)(param_1 + 0xc0) = 0;
    uVar2 = 1;
  }
  FUN_1450e0a00(param_1,param_3 & 0xffffffff);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  return uVar2;
}



// FUNCTION 1450e3000 FUN_1450e3000 body=76 status=ok
// SIG undefined FUN_1450e3000(void)

undefined8 * FUN_1450e3000(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_149c28888;
  param_1[0x10] = &PTR_LAB_149c288f0;
  FUN_1450e0100();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0xd0);
  }
  return param_1;
}



// FUNCTION 1450e3050 FUN_1450e3050 body=77 status=ok
// SIG undefined FUN_1450e3050(void)

undefined8 FUN_1450e3050(longlong param_1)

{
  undefined8 uVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  if ((*(longlong *)(param_1 + 0xd8) == 0) && (*(char *)(param_1 + 0xe0) == '\0')) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  return uVar1;
}



// FUNCTION 1450e30a0 FUN_1450e30a0 body=813 status=ok
// SIG undefined FUN_1450e30a0(void)

longlong FUN_1450e30a0(longlong *param_1,longlong *param_2,longlong *param_3,undefined1 *param_4,
                      char param_5)

{
  longlong *plVar1;
  char cVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  int iVar13;
  longlong *plVar14;
  undefined1 uVar15;
  uint local_res8 [2];
  undefined4 local_res10;
  longlong *local_res18;
  int local_res20;
  longlong local_50 [2];
  
  *param_2 = param_1[5];
  *param_3 = 0;
  *param_4 = 0;
  local_res18 = param_3;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 6));
  if ((char)param_1[0xf] == '\0') {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 6));
    cVar2 = *(char *)((longlong)param_1 + 0x7c);
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 6));
    if ((cVar2 != '\0') && (param_1[0x1b] == 0)) {
      uVar9 = (**(code **)(*param_1 + 0x68))(param_1);
      if ((*(uint *)(param_1 + 0x14) != 0) && (*(uint *)(param_1 + 0x14) <= uVar9)) {
        uVar9 = (ulonglong)*(uint *)((longlong)param_1 + 0x9c);
      }
      uVar12 = (ulonglong)*(uint *)((longlong)param_1 + 0xa4);
      uVar4 = *(ulonglong *)param_1[5];
      iVar13 = (int)uVar9;
      if (uVar4 < uVar9 + uVar12) {
        uVar12 = 0;
        uVar15 = 1;
        if (uVar9 < uVar4) {
          uVar12 = (ulonglong)(uint)((int)uVar4 - iVar13);
        }
      }
      else {
        uVar15 = 0;
      }
      uVar11 = (uint)uVar12;
      if ((*(char *)((longlong)param_1 + 0x7b) != '\0') &&
         (uVar7 = (**(code **)(*param_1 + 0x40))(param_1), (ulonglong)uVar7 < uVar12 + uVar9)) {
        uVar11 = uVar7 - iVar13;
      }
      local_res8[0] = uVar11;
      if (uVar11 != 0) {
        uVar7 = *(uint *)((longlong)param_1 + 0xac);
        plVar5 = (longlong *)param_1[0xc];
        lVar10 = param_1[0x12];
        local_res10 = (undefined4)param_1[0x16];
        *param_3 = 0;
        local_res20 = (int)lVar10;
        EnterCriticalSection((LPCRITICAL_SECTION)(plVar5 + 3));
        local_50[0] = 0;
        if (((char)plVar5[0x83] == '\0') || ((int)lVar10 == -1)) {
          uVar8 = 0;
        }
        else {
          if (uVar11 <= uVar7) {
            uVar7 = uVar11;
          }
          uVar8 = FUN_1453a11c0(plVar5 + 0x18,local_res20,uVar9,uVar7,local_res10,uVar15,local_res8,
                                local_50);
        }
        plVar14 = plVar5 + 0x18;
        if (param_5 == '\0') {
LAB_1450e3261:
          lVar10 = (**(code **)(*plVar5 + 0x48))(plVar5);
          if (lVar10 != 0) {
            if (local_50[0] == 0) {
              FUN_1453a0f90(plVar14,local_res8[0],local_res10,local_50);
              if (local_50[0] == 0) {
                FUN_1450e2620(plVar5,lVar10);
                goto LAB_1450e33a3;
              }
              plVar1 = plVar5 + 0x89;
              uVar11 = *(uint *)(param_1 + 0xe);
              uVar3 = *(undefined4 *)(local_50[0] + 0x1c);
              lVar6 = *(longlong *)(param_1[5] + 8);
              plVar5[0x8b] = *(longlong *)(local_50[0] + 8);
              *plVar1 = (ulonglong)uVar11 * lVar6 + uVar9;
              *(undefined4 *)(plVar5 + 0x8a) = uVar3;
              *(uint *)((longlong)plVar5 + 0x454) = local_res8[0];
              *local_res18 = (longlong)plVar1;
              FUN_1453a13a0(plVar14,local_50[0],plVar1,local_res20,uVar9,local_res8[0]);
            }
            *(uint *)(lVar10 + 0x14) = *(uint *)(lVar10 + 0x14) & 0xfffffff8;
            *(longlong *)(lVar10 + 8) = local_50[0];
            *(undefined4 *)(lVar10 + 0x10) = uVar8;
            LeaveCriticalSection((LPCRITICAL_SECTION)(plVar5 + 3));
            uVar11 = *(uint *)(param_1 + 0x14);
            param_1[0x1b] = lVar10;
            if ((uVar9 < uVar11) && ((ulonglong)uVar11 < uVar9 + local_res8[0])) {
              local_res8[0] = uVar11 - iVar13;
            }
            *(uint *)(param_1 + 0x15) = (int)param_1[0x15] + local_res8[0];
            FUN_1450e1c30(param_1);
            param_1[0xb] = *(longlong *)(param_1[0xc] + 0x70);
            goto LAB_1450e33af;
          }
          if (local_50[0] != 0) {
            FUN_1453a0ee0(plVar14);
            local_50[0] = 0;
          }
        }
        else if (local_50[0] != 0) {
          if (*(longlong *)(local_50[0] + 0x10) == 0) goto LAB_1450e3261;
          FUN_1453a0ee0(plVar14);
        }
LAB_1450e33a3:
        LeaveCriticalSection((LPCRITICAL_SECTION)(plVar5 + 3));
      }
    }
  }
  lVar10 = 0;
LAB_1450e33af:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 6));
  return lVar10;
}



// FUNCTION 1450e33d0 FUN_1450e33d0 body=189 status=ok
// SIG undefined FUN_1450e33d0(void)

undefined1 FUN_1450e33d0(longlong param_1,longlong param_2,int param_3,char param_4)

{
  bool bVar1;
  undefined1 uVar2;
  
  uVar2 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  if (param_2 != 0) {
    if (((param_3 == 1) && (*(longlong *)(param_1 + 0xd8) != 0)) &&
       (((byte)*(undefined4 *)(param_2 + 0x14) & 7) != 2)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if ((param_4 == '\0') && (bVar1)) {
      *(uint *)(param_2 + 0x14) = *(uint *)(param_2 + 0x14) & 0xfffffffb;
      *(uint *)(param_2 + 0x14) = *(uint *)(param_2 + 0x14) | 3;
    }
    FUN_1450e2040(param_1,param_2);
    *(undefined1 *)(param_1 + 0xe0) = 0;
    uVar2 = 1;
    *(undefined8 *)(param_1 + 0xd8) = 0;
  }
  FUN_1450e2100(param_1,param_3);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  return uVar2;
}



// FUNCTION 1450e34e0 FUN_1450e34e0 body=86 status=ok
// SIG undefined FUN_1450e34e0(void)

int FUN_1450e34e0(longlong param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if ((param_2 != 0) && (lVar1 = *(longlong *)(param_1 + 0xd8), iVar3 = 0, lVar1 != 0)) {
    iVar3 = *(int *)(*(longlong *)(lVar1 + 8) + 0x18) - *(int *)(lVar1 + 0x10);
    FUN_1450e37f0(param_1);
  }
  iVar2 = FUN_1450e1ad0(param_1,param_2 - iVar3);
  return iVar2 + iVar3;
}



// FUNCTION 1450e3570 FUN_1450e3570 body=401 status=ok
// SIG undefined FUN_1450e3570(void)

void FUN_1450e3570(longlong param_1,uint param_2)

{
  uint *puVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  int iVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  
  bVar2 = *(byte *)(param_1 + 0xd0);
  uVar10 = (ulonglong)bVar2;
  bVar8 = false;
  if ((uint)bVar2 < *(uint *)(param_1 + 0xb8)) {
    puVar12 = *(undefined8 **)(param_1 + 200);
    puVar13 = (undefined8 *)0x0;
    if (bVar2 != 0) {
      do {
        puVar13 = puVar12;
        puVar12 = (undefined8 *)*puVar13;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    lVar5 = *(longlong *)(param_1 + 0x60);
    EnterCriticalSection((LPCRITICAL_SECTION)(lVar5 + 0x18));
    while (puVar9 = puVar12, puVar9 != (undefined8 *)0x0) {
      if ((bVar8) || ((uint)(*(int *)(puVar9[1] + 0x18) - *(int *)(puVar9 + 2)) < param_2)) {
        bVar8 = true;
        puVar12 = (undefined8 *)*puVar9;
        if (puVar9 == *(undefined8 **)(param_1 + 200)) {
          *(undefined8 **)(param_1 + 200) = puVar12;
        }
        else {
          *puVar13 = puVar12;
        }
        if (puVar9 == *(undefined8 **)(param_1 + 0xc0)) {
          *(undefined8 **)(param_1 + 0xc0) = puVar13;
        }
        *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0xb8) + -1;
        uVar3 = *(uint *)(puVar9 + 2);
        uVar4 = *(uint *)(param_1 + 0xa0);
        lVar6 = *(longlong *)puVar9[1];
        puVar1 = (uint *)((longlong *)puVar9[1] + 3);
        if ((lVar6 + (ulonglong)uVar3 < (ulonglong)uVar4) &&
           ((ulonglong)uVar4 < (ulonglong)*puVar1 + lVar6)) {
          iVar11 = (uVar4 - uVar3) - (int)lVar6;
        }
        else {
          iVar11 = *puVar1 - uVar3;
        }
        *(int *)(param_1 + 0xa8) = *(int *)(param_1 + 0xa8) - iVar11;
        lVar6 = puVar9[1];
        lVar7 = *(longlong *)(param_1 + 0x60);
        puVar9[1] = 0;
        if (lVar6 != 0) {
          FUN_1453a0ee0(lVar7 + 0xc0);
        }
        AK::MemoryMgr::Free(7,puVar9);
      }
      else {
        bVar8 = false;
        puVar12 = (undefined8 *)*puVar9;
        puVar13 = puVar9;
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar5 + 0x18));
  }
  lVar5 = *(longlong *)(param_1 + 0xd8);
  if ((lVar5 != 0) &&
     ((bVar8 || ((uint)(*(int *)(*(longlong *)(lVar5 + 8) + 0x18) - *(int *)(lVar5 + 0x10)) <
                 param_2)))) {
    FUN_1450e37f0(param_1);
  }
  return;
}



// FUNCTION 1450e3710 FUN_1450e3710 body=211 status=ok
// SIG undefined FUN_1450e3710(void)

void FUN_1450e3710(longlong param_1,uint param_2)

{
  uint *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  
  puVar4 = *(undefined8 **)(param_1 + 200);
  iVar6 = 0;
  uVar5 = (uint)*(byte *)(param_1 + 0xd0);
  uVar8 = (ulonglong)param_2;
  *(uint *)(param_1 + 0xa0) = param_2;
  for (; iVar7 = 0, puVar4 != (undefined8 *)0x0; puVar4 = (undefined8 *)*puVar4) {
    if (uVar5 == 0) goto LAB_1450e3750;
    uVar5 = uVar5 - 1;
  }
LAB_1450e3792:
  lVar2 = *(longlong *)(param_1 + 0xd8);
  if (lVar2 != 0) {
    uVar5 = *(uint *)(lVar2 + 0x10);
    lVar3 = **(longlong **)(lVar2 + 8);
    puVar1 = (uint *)(*(longlong **)(lVar2 + 8) + 3);
    if ((lVar3 + (ulonglong)uVar5 < uVar8) && (uVar8 < (ulonglong)*puVar1 + lVar3)) {
      *(uint *)(param_1 + 0xa8) = iVar7 + ((param_2 - uVar5) - (int)lVar3);
      return;
    }
    iVar7 = iVar7 + (*puVar1 - uVar5);
  }
  *(int *)(param_1 + 0xa8) = iVar7;
  return;
LAB_1450e3750:
  do {
    uVar5 = *(uint *)(puVar4 + 2);
    lVar2 = *(longlong *)puVar4[1];
    puVar1 = (uint *)((longlong *)puVar4[1] + 3);
    if ((lVar2 + (ulonglong)uVar5 < uVar8) && (uVar8 < (ulonglong)*puVar1 + lVar2)) {
      iVar7 = (param_2 - uVar5) - (int)lVar2;
    }
    else {
      iVar7 = *puVar1 - uVar5;
    }
    puVar4 = (undefined8 *)*puVar4;
    iVar6 = iVar6 + iVar7;
    iVar7 = iVar6;
  } while (puVar4 != (undefined8 *)0x0);
  goto LAB_1450e3792;
}



// FUNCTION 1450e37f0 FUN_1450e37f0 body=120 status=ok
// SIG undefined FUN_1450e37f0(void)

void FUN_1450e37f0(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  
  *(uint *)(*(longlong *)(param_1 + 0xd8) + 0x14) =
       *(uint *)(*(longlong *)(param_1 + 0xd8) + 0x14) & 0xfffffffa | 2;
  lVar4 = *(longlong *)(param_1 + 0xd8);
  uVar2 = *(uint *)(param_1 + 0xa0);
  uVar3 = *(uint *)(lVar4 + 0x10);
  lVar5 = **(longlong **)(lVar4 + 8);
  puVar1 = (uint *)(*(longlong **)(lVar4 + 8) + 3);
  if ((lVar5 + (ulonglong)uVar3 < (ulonglong)uVar2) &&
     ((ulonglong)uVar2 < (ulonglong)*puVar1 + lVar5)) {
    iVar6 = (uVar2 - uVar3) - (int)lVar5;
  }
  else {
    iVar6 = *puVar1 - uVar3;
  }
  *(int *)(param_1 + 0xa8) = *(int *)(param_1 + 0xa8) - iVar6;
  *(undefined4 *)(lVar4 + 0x10) = *(undefined4 *)(*(longlong *)(lVar4 + 8) + 0x18);
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined1 *)(param_1 + 0xe0) = 1;
  return;
}



// FUNCTION 1450e3870 FUN_1450e3870 body=76 status=ok
// SIG undefined FUN_1450e3870(void)

undefined8 * FUN_1450e3870(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_149c28960;
  param_1[0x10] = &PTR_LAB_149c289f0;
  FUN_1450e0bc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0xe8);
  }
  return param_1;
}



// FUNCTION 1450e38e0 FUN_1450e38e0 body=62 status=ok
// SIG undefined FUN_1450e38e0(void)

undefined8 * FUN_1450e38e0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_149c28a80;
  FUN_1450def70();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x448);
  }
  return param_1;
}



// FUNCTION 1450e3920 FUN_1450e3920 body=62 status=ok
// SIG undefined FUN_1450e3920(void)

undefined8 * FUN_1450e3920(undefined8 *param_1)

{
  FUN_1450deef0();
  *param_1 = &PTR_FUN_149c28ad8;
  *(undefined4 *)(param_1 + 0x89) = 0;
  param_1[0x8a] = 0;
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  return param_1;
}



// FUNCTION 1450e3960 FUN_1450e3960 body=200 status=ok
// SIG undefined FUN_1450e3960(void)

int FUN_1450e3960(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (*(int *)(param_2 + 0x2c) == 0) {
    return 0x1f;
  }
  iVar1 = FUN_1450defb0();
  if (iVar1 == 1) {
    plVar2 = AK::MemoryMgr::Malloc(7,(ulonglong)*(uint *)(param_2 + 0x2c) * 0x58);
    *(longlong **)(param_1 + 0x460) = plVar2;
    if (plVar2 == (longlong *)0x0) {
      return 2;
    }
    plVar3 = plVar2 + (ulonglong)*(uint *)(param_2 + 0x2c) * 0xb;
    do {
      if (plVar2 != (longlong *)0x0) {
        *plVar2 = 0;
        plVar2[8] = 0;
      }
      if (*(longlong *)(param_1 + 0x458) == 0) {
        *(longlong **)(param_1 + 0x458) = plVar2;
        *(longlong **)(param_1 + 0x450) = plVar2;
        *plVar2 = 0;
      }
      else {
        *plVar2 = *(longlong *)(param_1 + 0x458);
        *(longlong **)(param_1 + 0x458) = plVar2;
      }
      *(int *)(param_1 + 0x448) = *(int *)(param_1 + 0x448) + 1;
      plVar2 = plVar2 + 0xb;
    } while (plVar2 < plVar3);
  }
  return iVar1;
}



// FUNCTION 1450e3a30 FUN_1450e3a30 body=657 status=ok
// SIG undefined FUN_1450e3a30(void)

undefined8 *
FUN_1450e3a30(longlong *param_1,longlong param_2,int param_3,undefined8 param_4,undefined4 param_5,
             undefined4 param_6,undefined1 param_7,char param_8,undefined4 *param_9,
             longlong *param_10,undefined1 *param_11)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 in_stack_ffffffffffffffa8;
  undefined8 uVar6;
  undefined4 uVar7;
  
  puVar1 = param_11;
  uVar7 = (undefined4)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
  *param_10 = 0;
  *param_11 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  uVar2 = 0;
  param_11 = (undefined1 *)0x0;
  if (((char)param_1[0x83] != '\0') && (param_3 != -1)) {
    uVar6 = CONCAT44(uVar7,param_6);
    uVar2 = FUN_1453a11c0(param_1 + 0x18,param_3,param_4,param_5,uVar6,param_7,param_9,&param_11);
    uVar7 = (undefined4)((ulonglong)uVar6 >> 0x20);
  }
  plVar5 = param_1 + 0x18;
  if (param_8 != '\0') {
    puVar3 = (undefined8 *)0x0;
    if (param_11 == (undefined1 *)0x0) goto LAB_1450e3c98;
    if (*(longlong *)((longlong)param_11 + 0x10) != 0) {
      FUN_1453a0ee0(plVar5);
      goto LAB_1450e3c98;
    }
  }
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x48))(param_1);
  if (puVar3 != (undefined8 *)0x0) {
    if (param_11 == (undefined1 *)0x0) {
      FUN_1453a0f90(plVar5,*param_9,param_6,&param_11);
      if (param_11 == (undefined1 *)0x0) {
        lVar4 = puVar3[1];
        puVar3[1] = 0;
        if (lVar4 != 0) {
          FUN_1453a0ee0(plVar5);
        }
        AK::MemoryMgr::Free(7,puVar3);
        puVar3 = (undefined8 *)0x0;
        goto LAB_1450e3c98;
      }
      lVar4 = FUN_1450e4040(param_1,param_2,*(undefined8 *)((longlong)param_11 + 8),param_4,
                            CONCAT44(uVar7,*(undefined4 *)((longlong)param_11 + 0x1c)),*param_9);
      *param_10 = lVar4;
      FUN_1453a13a0(plVar5,param_11,lVar4,param_3,param_4,*param_9);
      *(uint *)((longlong)puVar3 + 0x14) = *(uint *)((longlong)puVar3 + 0x14) & 0xfffffff8;
      puVar3[1] = param_11;
      *(undefined4 *)(puVar3 + 2) = 0;
      lVar4 = *param_10;
      if (*(longlong *)(lVar4 + 0x40) == 0) {
        *(undefined8 **)(lVar4 + 0x40) = puVar3;
        puVar3[3] = 0;
      }
      else {
        puVar3[3] = *(longlong *)(lVar4 + 0x40);
        *(undefined8 **)(lVar4 + 0x40) = puVar3;
      }
    }
    else {
      *(uint *)((longlong)puVar3 + 0x14) = *(uint *)((longlong)puVar3 + 0x14) & 0xfffffff8;
      puVar3[1] = param_11;
      *(undefined4 *)(puVar3 + 2) = uVar2;
      lVar4 = *(longlong *)((longlong)param_11 + 0x10);
      if (lVar4 != 0) {
        if (*(longlong *)(lVar4 + 0x40) == 0) {
          *(undefined8 **)(lVar4 + 0x40) = puVar3;
          puVar3[3] = 0;
        }
        else {
          puVar3[3] = *(longlong *)(lVar4 + 0x40);
          *(undefined8 **)(lVar4 + 0x40) = puVar3;
        }
        *puVar1 = 1;
      }
    }
    *puVar3 = 0;
    if (*(longlong *)(param_2 + 0xe0) == 0) {
      *(undefined8 **)(param_2 + 0xe0) = puVar3;
    }
    else {
      **(undefined8 **)(param_2 + 0xd8) = puVar3;
    }
    *(undefined8 **)(param_2 + 0xd8) = puVar3;
    puVar3[4] = param_2;
  }
LAB_1450e3c98:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  return puVar3;
}



// FUNCTION 1450e3cd0 FUN_1450e3cd0 body=864 status=ok
// SIG undefined FUN_1450e3cd0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint * FUN_1450e3cd0(longlong param_1)

{
  ulonglong uVar1;
  char cVar2;
  longlong lVar3;
  code *pcVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint *extraout_RAX;
  ulonglong uVar12;
  longlong *plVar13;
  uint *puVar14;
  ulonglong uVar15;
  longlong *plVar16;
  uint *puVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  ulonglong uVar20;
  undefined8 *puVar21;
  uint uVar22;
  longlong *local_res8;
  undefined8 local_res10;
  uint *local_res18;
  undefined8 local_res20;
  undefined8 uStack_a0;
  undefined1 auStack_98 [32];
  undefined1 auStack_78 [16];
  uint local_68 [2];
  longlong local_60;
  uint *local_58;
  
  puVar17 = local_68;
  uStack_a0 = 0x1450e3cee;
  uVar9 = FUN_14539fe80();
  if (uVar9 < *(uint *)(param_1 + 8)) {
    uVar9 = *(uint *)(param_1 + 8) - uVar9;
    uVar22 = 0;
    local_68[0] = 0;
    local_68[1] = 0;
    uVar15 = (ulonglong)uVar9 * 0x18;
    uVar12 = uVar15 + 0xf;
    if (uVar12 <= uVar15) {
      uVar12 = 0xffffffffffffff0;
    }
    uStack_a0 = 0x1450e3d64;
    lVar5 = -(uVar12 & 0xfffffffffffffff0);
    local_60 = (longlong)local_68 + lVar5;
    uVar12 = uVar15 + 0xf;
    if (uVar12 <= uVar15) {
      uVar12 = 0xffffffffffffff0;
    }
    *(undefined8 *)(auStack_98 + lVar5 + -8) = 0x1450e3d85;
    lVar6 = -(uVar12 & 0xfffffffffffffff0);
    local_res10 = (longlong *)((ulonglong)local_res10._4_4_ << 0x20);
    puVar14 = (uint *)((longlong)local_68 + lVar6 + lVar5);
    local_58 = puVar14;
    if (uVar9 != 0) {
      do {
        *(undefined8 *)(auStack_98 + lVar6 + lVar5 + -8) = 0x1450e3dac;
        plVar13 = (longlong *)FUN_1450df6f0(param_1,&local_res10);
        puVar14 = (uint *)0x0;
        if (plVar13 == (longlong *)0x0) break;
        *(undefined8 *)(auStack_98 + lVar6 + lVar5 + -8) = 0x1450e3dc0;
        iVar10 = FUN_1450dff30(plVar13);
        lVar3 = *plVar13;
        if (iVar10 == 1) {
          auStack_78[lVar6 + lVar5] = 0;
          pcVar4 = *(code **)(lVar3 + 0x20);
          *(undefined8 *)(auStack_98 + lVar6 + lVar5 + -8) = 0x1450e3def;
          puVar14 = (uint *)(*pcVar4)(plVar13,&local_res20,&local_res18,&local_res8);
          if (puVar14 == (uint *)0x0) {
            if (*(char *)((longlong)plVar13 + 0x7b) != '\0') {
              *(undefined8 *)(auStack_98 + lVar6 + lVar5 + -8) = 0x1450e3e06;
              EnterCriticalSection((LPCRITICAL_SECTION)(plVar13 + 6));
              cVar2 = *(char *)((longlong)plVar13 + 0x7c);
              *(undefined8 *)(auStack_98 + lVar6 + lVar5 + -8) = 0x1450e3e14;
              LeaveCriticalSection((LPCRITICAL_SECTION)(plVar13 + 6));
              if (cVar2 != '\0') {
                *(undefined8 *)(auStack_98 + lVar6 + lVar5 + -8) = 0x1450e3ed5;
                puVar14 = (uint *)FUN_14539fdc0(param_1);
                break;
              }
            }
            pcVar4 = *(code **)(*plVar13 + 0x28);
            *(undefined8 *)(auStack_98 + lVar6 + lVar5 + -8) = 0x1450e3e2f;
            puVar14 = (uint *)(*pcVar4)(plVar13,0,0x35);
          }
          else if (local_res18 == (uint *)0x0) {
            if ((char)local_res8 == '\0') {
              pcVar4 = *(code **)(*plVar13 + 0x28);
              *(undefined8 *)(auStack_98 + lVar6 + lVar5 + -8) = 0x1450e3e53;
              puVar14 = (uint *)(*pcVar4)(plVar13,puVar14,1);
            }
          }
          else {
            uVar11 = local_res18[0x14] >> 1;
            puVar14 = (uint *)(ulonglong)uVar11;
            if ((uVar11 & 1) == 0) {
              local_res18[0x14] = local_res18[0x14] | 2;
              cVar2 = *(char *)((longlong)plVar13 + 0x76);
              uVar12 = (ulonglong)(-(uint)(cVar2 != '\0') & 4);
              uVar11 = *(uint *)((longlong)puVar17 + uVar12);
              uVar15 = (ulonglong)uVar11;
              *(uint *)((longlong)puVar17 + uVar12) = uVar11 + 1;
              uVar22 = uVar22 + 1;
              lVar3 = *(longlong *)((longlong)&local_60 + (ulonglong)(-(uint)(cVar2 != '\0') & 8));
              *(undefined8 *)(lVar3 + uVar15 * 0x18) = local_res20;
              *(undefined1 *)(lVar3 + 0xc + uVar15 * 0x18) =
                   *(undefined1 *)((longlong)plVar13 + 0x74);
              puVar14 = local_res18 + 2;
              *(undefined4 *)(lVar3 + 8 + uVar15 * 0x18) = (undefined4)local_res10;
              *(uint **)(lVar3 + 0x10 + uVar15 * 0x18) = puVar14;
            }
          }
        }
        else {
          pcVar4 = *(code **)(lVar3 + 0x10);
          *(undefined8 *)(auStack_98 + lVar6 + lVar5 + -8) = 0x1450e3dcf;
          puVar14 = (uint *)(*pcVar4)();
        }
      } while (uVar22 < uVar9);
      if (uVar22 != 0) {
        plVar16 = *(longlong **)(param_1 + 0x428);
        plVar13 = &local_60;
        uVar9 = 0;
        puVar18 = auStack_98 + lVar6 + lVar5;
        local_res8 = plVar16;
        do {
          uVar22 = *puVar17;
          uVar12 = (ulonglong)uVar22;
          puVar19 = puVar18;
          local_res18 = puVar17;
          if (uVar22 != 0) {
            uVar1 = uVar12 * 4;
            uVar15 = uVar1 + 0xf;
            if (uVar15 <= uVar1) {
              uVar15 = 0xffffffffffffff0;
            }
            *(undefined8 *)(puVar18 + -8) = 0x1450e3f33;
            lVar5 = *plVar13;
            lVar3 = -(uVar15 & 0xfffffffffffffff0);
            lVar6 = *plVar16;
            puVar17 = (uint *)(puVar18 + lVar3 + 0x30);
            *(uint **)(puVar18 + lVar3 + 0x20) = puVar17;
            local_res10 = plVar13;
            if (uVar9 == 0) {
              pcVar4 = *(code **)(lVar6 + 0x28);
              *(undefined8 *)(puVar18 + lVar3 + -8) = 0x1450e3f5b;
              puVar14 = (uint *)(*pcVar4)();
            }
            else {
              pcVar4 = *(code **)(lVar6 + 0x30);
              *(undefined8 *)(puVar18 + lVar3 + -8) = 0x1450e3f60;
              puVar14 = (uint *)(*pcVar4)(plVar16,uVar22,lVar5,FUN_1453a1af0);
            }
            plVar16 = local_res8;
            puVar19 = puVar18 + lVar3;
            if ((int)puVar14 != 1) {
              uVar20 = 0;
              uVar15 = uVar1 + 0xf;
              if (uVar15 <= uVar1) {
                uVar15 = 0xffffffffffffff0;
              }
              *(undefined8 *)(puVar18 + lVar3 + -8) = 0x1450e3f8a;
              lVar6 = -(uVar15 & 0xfffffffffffffff0);
              lVar8 = lVar6 + lVar3;
              uVar15 = uVar12 * 8 + 0xf;
              if (uVar15 <= uVar12 * 8) {
                uVar15 = 0xffffffffffffff0;
              }
              puVar14 = (uint *)(uVar15 & 0xfffffffffffffff0);
              *(undefined8 *)(puVar18 + lVar6 + lVar3 + -8) = 0x1450e3fb2;
              lVar7 = -(longlong)puVar14;
              puVar19 = puVar18 + lVar7 + lVar8;
              plVar13 = local_res10;
              if (uVar22 != 0) {
                puVar21 = (undefined8 *)(lVar5 + 0x10);
                do {
                  if (*puVar17 != 1) {
                    *(undefined8 *)(puVar18 + uVar20 * 8 + lVar7 + lVar6 + lVar3 + 0x30) = *puVar21;
                    puVar14 = (uint *)(ulonglong)*puVar17;
                    *(uint *)(puVar18 + uVar20 * 4 + lVar6 + lVar3 + 0x30) = *puVar17;
                    uVar20 = (ulonglong)((int)uVar20 + 1);
                  }
                  puVar21 = puVar21 + 3;
                  puVar17 = puVar17 + 1;
                  uVar12 = uVar12 - 1;
                } while (uVar12 != 0);
                puVar19 = puVar18 + lVar7 + lVar8;
                if ((int)uVar20 != 0) {
                  *(undefined8 *)(puVar18 + lVar7 + lVar6 + lVar3 + -8) = 0x1450e3ff0;
                  puVar14 = (uint *)FUN_1453a1af0(uVar20);
                  plVar16 = local_res8;
                  puVar19 = puVar18 + lVar7 + lVar8;
                  plVar13 = local_res10;
                }
              }
            }
          }
          plVar13 = plVar13 + 1;
          puVar17 = local_res18 + 1;
          uVar9 = uVar9 + 1;
          puVar18 = puVar19;
        } while (uVar9 < 2);
      }
    }
  }
  else {
    uStack_a0 = 0x1450e3d04;
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x98));
    uStack_a0 = 0x1450e3d10;
    FUN_1450df520(param_1,param_1 + 0x78);
    uStack_a0 = 0x1450e3d1f;
    FUN_1450df520(param_1,param_1 + 0x88);
    uStack_a0 = 0x1450e3d2c;
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x98));
    puVar14 = extraout_RAX;
  }
  return puVar14;
}



// FUNCTION 1450e4040 FUN_1450e4040 body=122 status=ok
// SIG undefined FUN_1450e4040(void)

longlong *
FUN_1450e4040(longlong param_1,longlong param_2,longlong param_3,longlong param_4,undefined4 param_5
             ,undefined4 param_6)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  
  plVar2 = *(longlong **)(param_1 + 0x458);
  if (plVar2 != (longlong *)0x0) {
    lVar3 = *plVar2;
    if (lVar3 == 0) {
      *(undefined8 *)(param_1 + 0x450) = 0;
    }
    *(longlong *)(param_1 + 0x458) = lVar3;
    *plVar2 = 0;
    *(int *)(param_1 + 0x448) = *(int *)(param_1 + 0x448) + -1;
  }
  uVar1 = *(uint *)(param_2 + 0x70);
  lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x28) + 8);
  *(uint *)(plVar2 + 10) = *(uint *)(plVar2 + 10) & 0xfffffffc;
  plVar2[4] = (longlong)FUN_1453a19e0;
  plVar2[1] = (ulonglong)uVar1 * lVar3 + param_4;
  *(undefined4 *)(plVar2 + 2) = param_5;
  *(undefined4 *)((longlong)plVar2 + 0x14) = param_6;
  plVar2[3] = param_3;
  plVar2[5] = (longlong)plVar2;
  plVar2[6] = 0;
  plVar2[9] = param_2;
  return plVar2;
}



// FUNCTION 1450e40c0 FUN_1450e40c0 body=242 status=ok
// SIG undefined FUN_1450e40c0(void)

undefined8 *
FUN_1450e40c0(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_4 = 0;
  puVar2 = AK::MemoryMgr::Malloc(7,0xe0);
  if (puVar2 == (undefined8 *)0x0) {
    FUN_144d4ff20(param_1,100);
    puVar2 = AK::MemoryMgr::Malloc(7,0xe0);
    if (puVar2 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
  }
  FUN_1450e0050(puVar2);
  *puVar2 = &PTR_FUN_149c28c10;
  puVar2[0x10] = &PTR_LAB_149c28c78;
  puVar2[0x1b] = 0;
  puVar2[0x19] = 0;
  puVar2[0x18] = 0;
  iVar1 = FUN_1450e0150(puVar2,param_1,param_2,param_3);
  if (iVar1 != 1) {
    (**(code **)*puVar2)(puVar2,0);
    AK::MemoryMgr::Free(7,puVar2);
    return (undefined8 *)0x0;
  }
  puVar3 = puVar2 + 0x10;
  if (puVar2 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  *param_4 = (longlong)puVar3;
  return puVar2;
}



// FUNCTION 1450e41c0 FUN_1450e41c0 body=300 status=ok
// SIG undefined FUN_1450e41c0(void)

undefined8 *
FUN_1450e41c0(longlong param_1,undefined8 param_2,undefined4 param_3,longlong param_4,
             undefined8 param_5,longlong *param_6)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_6 = 0;
  puVar2 = AK::MemoryMgr::Malloc(7,0xf8);
  if (puVar2 == (undefined8 *)0x0) {
    FUN_144d4ff20(param_1,*(undefined1 *)(param_4 + 0xd));
    puVar2 = AK::MemoryMgr::Malloc(7,0xf8);
    if (puVar2 == (undefined8 *)0x0) goto LAB_1450e42c8;
  }
  FUN_1450e0b10(puVar2);
  *puVar2 = &PTR_FUN_149c28e08;
  puVar2[0x10] = &PTR_LAB_149c28e98;
  puVar2[0x1e] = 0;
  puVar2[0x1c] = 0;
  puVar2[0x1b] = 0;
  iVar1 = FUN_1450e0c10(puVar2,param_1,param_2,param_3,param_4,param_5,
                        *(undefined4 *)(param_1 + 0x430));
  if (iVar1 == 1) {
    puVar3 = puVar2 + 0x10;
    if (puVar2 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)0x0;
    }
    *param_6 = (longlong)puVar3;
    return puVar2;
  }
  (**(code **)*puVar2)(puVar2,0);
  AK::MemoryMgr::Free(7,puVar2);
LAB_1450e42c8:
  *param_6 = 0;
  return (undefined8 *)0x0;
}



// FUNCTION 1450e42f0 FUN_1450e42f0 body=67 status=ok
// SIG undefined FUN_1450e42f0(void)

undefined8 * FUN_1450e42f0(void)

{
  undefined8 *puVar1;
  
  puVar1 = AK::MemoryMgr::Malloc(7,0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    *(uint *)((longlong)puVar1 + 0x14) = *(uint *)((longlong)puVar1 + 0x14) & 0xfffffffb | 0xb;
    *(undefined4 *)(puVar1 + 2) = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1450e4340 FUN_1450e4340 body=145 status=ok
// SIG undefined FUN_1450e4340(void)

undefined8 * FUN_1450e4340(undefined8 *param_1,uint param_2)

{
  *param_1 = &PTR_FUN_149c28ad8;
  if ((void *)param_1[0x8c] != (void *)0x0) {
    param_1[0x8b] = 0;
    param_1[0x8a] = 0;
    *(undefined4 *)(param_1 + 0x89) = 0;
    AK::MemoryMgr::Free(7,(void *)param_1[0x8c]);
  }
  param_1[0x8b] = 0;
  *param_1 = &PTR_FUN_149c28a80;
  param_1[0x8a] = 0;
  *(undefined4 *)(param_1 + 0x89) = 0;
  FUN_1450def70(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x468);
  }
  return param_1;
}



// FUNCTION 1450e43e0 FUN_1450e43e0 body=62 status=ok
// SIG undefined FUN_1450e43e0(void)

bool FUN_1450e43e0(longlong param_1)

{
  longlong lVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  lVar1 = *(longlong *)(param_1 + 0xd8);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  return lVar1 == 0;
}



// FUNCTION 1450e4420 FUN_1450e4420 body=255 status=ok
// SIG undefined FUN_1450e4420(void)

undefined8 FUN_1450e4420(longlong param_1,longlong param_2,int param_3,char param_4)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  
  uVar3 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  if (((param_2 == 0) || (param_3 != 1)) ||
     (uVar1 = *(uint *)(param_2 + 0x14), ((byte)uVar1 & 7) == 2)) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
    if (*(longlong *)(param_1 + 200) != param_2) {
      uVar2 = uVar1 & 0xfffffffb | 3;
      if (param_4 != '\0') {
        uVar2 = uVar1 & 0xfffffff9 | 1;
      }
      *(uint *)(param_2 + 0x14) = uVar2;
      goto LAB_1450e44f2;
    }
  }
  if (param_2 != 0) {
    FUN_1450e45f0(param_1,param_2,uVar4);
    if ((param_4 == '\0') && (((byte)*(uint *)(param_2 + 0x14) & 7) != 2)) {
      *(uint *)(param_2 + 0x14) = *(uint *)(param_2 + 0x14) & 0xfffffffb | 3;
    }
    FUN_1450e0910(param_1,param_2,uVar4);
    FUN_1450e4520(param_1);
    uVar3 = 1;
  }
  FUN_1450e0a00(param_1,param_3);
  FUN_14539fe30(*(undefined8 *)(param_1 + 0x60));
LAB_1450e44f2:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  return uVar3;
}



// FUNCTION 1450e4520 FUN_1450e4520 body=206 status=ok
// SIG undefined FUN_1450e4520(void)

void FUN_1450e4520(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  puVar4 = *(undefined8 **)(param_1 + 200);
  if ((puVar4 != (undefined8 *)0x0) && ((*(byte *)((longlong)puVar4 + 0x14) & 7) != 0)) {
    do {
      if (((byte)*(undefined4 *)((longlong)puVar4 + 0x14) & 7) == 2) {
        puVar5 = *(undefined8 **)(param_1 + 0xd8);
        puVar3 = (undefined8 *)0x0;
        do {
          puVar2 = puVar3;
          puVar3 = puVar5;
          if (puVar3 == (undefined8 *)0x0) goto LAB_1450e45bb;
          puVar5 = (undefined8 *)*puVar3;
        } while (puVar3 != puVar4);
        if (puVar3 == *(undefined8 **)(param_1 + 0xd8)) {
          *(undefined8 **)(param_1 + 0xd8) = puVar5;
        }
        else {
          *puVar2 = puVar5;
        }
      }
      else {
        plVar1 = *(longlong **)(param_1 + 200);
        if (plVar1 != (longlong *)0x0) {
          puVar5 = (undefined8 *)*plVar1;
          if ((undefined8 *)*plVar1 == (undefined8 *)0x0) {
            *(undefined8 *)(param_1 + 0xc0) = 0;
            puVar5 = (undefined8 *)0x0;
          }
          *(undefined8 **)(param_1 + 200) = puVar5;
          *plVar1 = 0;
        }
      }
LAB_1450e45bb:
      FUN_1450e0910(param_1,puVar4,1);
      FUN_14539fe30(*(undefined8 *)(param_1 + 0x60));
      puVar4 = (undefined8 *)FUN_1450e46c0(param_1);
    } while (puVar4 != (undefined8 *)0x0);
  }
  return;
}



// FUNCTION 1450e45f0 FUN_1450e45f0 body=202 status=ok
// SIG undefined FUN_1450e45f0(void)

void FUN_1450e45f0(longlong param_1,longlong *param_2,char param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (((byte)*(undefined4 *)((longlong)param_2 + 0x14) & 7) == 2) {
    plVar1 = *(longlong **)(param_1 + 0xd8);
    plVar3 = plVar1;
    plVar4 = (longlong *)0x0;
    if (plVar1 != (longlong *)0x0) {
      while (plVar2 = plVar3, plVar3 = (longlong *)*plVar2, plVar2 != param_2) {
        plVar4 = plVar2;
        if (plVar3 == (longlong *)0x0) {
          return;
        }
      }
      if (plVar2 == plVar1) {
        *(longlong **)(param_1 + 0xd8) = plVar3;
        return;
      }
      *plVar4 = (longlong)plVar3;
    }
  }
  else if ((param_3 == '\0') && (plVar1 = *(longlong **)(param_1 + 200), plVar1 != param_2)) {
    plVar3 = (longlong *)0x0;
    if (plVar1 != (longlong *)0x0) {
      while (plVar4 = plVar1, plVar4 != param_2) {
        plVar1 = (longlong *)*plVar4;
        plVar3 = plVar4;
        if ((longlong *)*plVar4 == (longlong *)0x0) {
          return;
        }
      }
      if (plVar4 == *(longlong **)(param_1 + 200)) {
        *(longlong *)(param_1 + 200) = *plVar4;
      }
      else {
        *plVar3 = *plVar4;
      }
      if (plVar4 == *(longlong **)(param_1 + 0xc0)) {
        *(longlong **)(param_1 + 0xc0) = plVar3;
        return;
      }
    }
  }
  else {
    plVar1 = *(longlong **)(param_1 + 200);
    if (plVar1 != (longlong *)0x0) {
      lVar5 = *plVar1;
      if (*plVar1 == 0) {
        *(undefined8 *)(param_1 + 0xc0) = 0;
        lVar5 = 0;
      }
      *(longlong *)(param_1 + 200) = lVar5;
      *plVar1 = 0;
      return;
    }
  }
  return;
}



// FUNCTION 1450e46c0 FUN_1450e46c0 body=29 status=ok
// SIG undefined FUN_1450e46c0(void)

longlong FUN_1450e46c0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 200);
  if (lVar1 != 0) {
    lVar2 = 0;
    if ((*(byte *)(lVar1 + 0x14) & 7) != 0) {
      lVar2 = lVar1;
    }
    return lVar2;
  }
  return 0;
}



// FUNCTION 1450e46e0 FUN_1450e46e0 body=99 status=ok
// SIG undefined FUN_1450e46e0(void)

undefined8 * FUN_1450e46e0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_149c28b38;
  param_1[0x10] = &PTR_LAB_149c28ba0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x1b] = 0;
  FUN_1450e0100();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0xe0);
  }
  return param_1;
}



// FUNCTION 1450e4750 FUN_1450e4750 body=147 status=ok
// SIG undefined FUN_1450e4750(void)

void FUN_1450e4750(longlong param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + -0x50));
  if ((*(longlong *)(param_1 + 0x48) == 0) && (*(longlong *)(param_1 + 0x58) == 0)) {
    FUN_1450e0890(param_1 + -0x80,3);
                    /* WARNING: Could not recover jumptable at 0x0001450e4791. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + -0x50));
    return;
  }
  FUN_1450e0890(param_1 + -0x80,3);
  FUN_14539fb50(param_1 + -0x80);
  FUN_1450e4b60(param_1 + -0x80);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + -0x50));
  FUN_14539fc70(*(undefined8 *)(param_1 + -0x20),param_1 + -0x80);
  return;
}



// FUNCTION 1450e47f0 FUN_1450e47f0 body=65 status=ok
// SIG undefined FUN_1450e47f0(void)

undefined4 FUN_1450e47f0(longlong param_1)

{
  undefined4 uVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + -0x50));
  if (*(longlong *)(param_1 + 0x48) == 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x38);
  }
  else {
    uVar1 = 2;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + -0x50));
  return uVar1;
}



// FUNCTION 1450e4840 FUN_1450e4840 body=146 status=ok
// SIG undefined FUN_1450e4840(void)

void FUN_1450e4840(longlong param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + -0x50));
  *(undefined1 *)(param_1 + -8) = 1;
  *(undefined1 *)(param_1 + -4) = 0;
  FUN_1450e0890(param_1 + -0x80,3);
  if ((*(longlong *)(param_1 + 0x48) == 0) && (*(longlong *)(param_1 + 0x58) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x0001450e4893. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + -0x50));
    return;
  }
  FUN_14539fb50(param_1 + -0x80);
  FUN_1450e4b60(param_1 + -0x80);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + -0x50));
  FUN_14539fc70(*(undefined8 *)(param_1 + -0x20),param_1 + -0x80);
  return;
}



// FUNCTION 1450e48e0 FUN_1450e48e0 body=627 status=ok
// SIG undefined FUN_1450e48e0(void)

undefined8 *
FUN_1450e48e0(longlong *param_1,longlong *param_2,longlong *param_3,undefined1 *param_4)

{
  char cVar1;
  ulonglong uVar2;
  longlong *plVar3;
  uint uVar4;
  bool bVar5;
  longlong *plVar6;
  uint uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong *local_40;
  
  *param_3 = 0;
  *param_4 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 6));
  FUN_14539fde0(param_1[0xc]);
  if ((char)param_1[0xf] == '\0') {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 6));
    cVar1 = *(char *)((longlong)param_1 + 0x7c);
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 6));
    if (cVar1 != '\0') {
      plVar6 = param_1 + 0x11;
      *param_2 = param_1[5];
      uVar13 = (ulonglong)*(uint *)(param_1 + 0x16) + *plVar6;
      uVar10 = (int)param_1[0x14] - *(uint *)(param_1 + 0x16);
      bVar5 = false;
      uVar4 = *(uint *)(param_1[0xc] + 0x430);
      if (uVar10 <= *(uint *)(param_1[0xc] + 0x430)) {
        uVar4 = uVar10;
      }
      uVar12 = (ulonglong)uVar4;
      uVar10 = uVar4;
      if (*(char *)((longlong)param_1 + 0x76) == '\0') {
        uVar2 = *(ulonglong *)param_1[5];
        if (uVar2 < uVar4 + uVar13) {
          uVar12 = 0;
          bVar5 = true;
          if (uVar13 < uVar2) {
            uVar12 = (ulonglong)(uint)((int)uVar2 - (int)uVar13);
          }
        }
        else {
          bVar5 = false;
        }
        uVar10 = (uint)uVar12;
        if ((*(char *)((longlong)param_1 + 0x7b) != '\0') &&
           (uVar7 = (**(code **)(*param_1 + 0x40))(param_1), (ulonglong)uVar7 < uVar12 + uVar13)) {
          uVar10 = uVar7 - (int)uVar13;
        }
      }
      plVar3 = (longlong *)param_1[0xc];
      uVar7 = *(uint *)(param_1 + 0x16);
      EnterCriticalSection((LPCRITICAL_SECTION)(plVar3 + 3));
      puVar8 = (undefined8 *)(**(code **)(*plVar3 + 0x48))(plVar3);
      if (puVar8 != (undefined8 *)0x0) {
        if ((param_1[0x13] == 0) ||
           (FUN_1453a1830(plVar3 + 0x18,plVar6,&local_40), plVar6 = local_40,
           local_40 != (longlong *)0x0)) {
          local_40 = plVar6;
          lVar9 = FUN_1450e4040(plVar3,param_1,(ulonglong)uVar7 + local_40[1],uVar13,uVar4,uVar10);
          local_40[2] = lVar9;
          *(uint *)((longlong)puVar8 + 0x14) = *(uint *)((longlong)puVar8 + 0x14) & 0xfffffff8;
          puVar8[1] = local_40;
          *(uint *)(puVar8 + 2) = uVar7;
          if (*(longlong *)(lVar9 + 0x40) == 0) {
            *(undefined8 **)(lVar9 + 0x40) = puVar8;
            puVar8[3] = 0;
          }
          else {
            puVar8[3] = *(longlong *)(lVar9 + 0x40);
            *(undefined8 **)(lVar9 + 0x40) = puVar8;
          }
          *puVar8 = 0;
          if (param_1[0x19] == 0) {
            param_1[0x19] = (longlong)puVar8;
          }
          else {
            *(undefined8 **)param_1[0x18] = puVar8;
          }
          param_1[0x18] = (longlong)puVar8;
          puVar8[4] = param_1;
          LeaveCriticalSection((LPCRITICAL_SECTION)(plVar3 + 3));
          *param_3 = lVar9;
          iVar11 = (int)param_1[0x16] + uVar10;
          *(int *)(param_1 + 0x16) = iVar11;
          if ((bVar5) || (iVar11 == (int)param_1[0x14])) {
            FUN_1450e0890(param_1,0);
          }
          param_1[0xb] = *(longlong *)(param_1[0xc] + 0x70);
          goto LAB_1450e4a46;
        }
        FUN_1450e2620(plVar3,puVar8);
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)(plVar3 + 3));
    }
  }
  puVar8 = (undefined8 *)0x0;
LAB_1450e4a46:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 6));
  return puVar8;
}



// FUNCTION 1450e4b60 FUN_1450e4b60 body=271 status=ok
// SIG undefined FUN_1450e4b60(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1450e4b60(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  bool bVar6;
  char local_res8 [8];
  
  local_res8[0] = '\x01';
  plVar5 = *(longlong **)(param_1 + 200);
  while (plVar5 != (longlong *)0x0) {
    plVar2 = (longlong *)*plVar5;
    plVar1 = plVar2;
    if (plVar5 == *(longlong **)(param_1 + 200)) {
      *(longlong **)(param_1 + 200) = plVar2;
      plVar1 = _DAT_00000000;
    }
    _DAT_00000000 = plVar1;
    if (plVar5 == *(longlong **)(param_1 + 0xc0)) {
      *(undefined8 *)(param_1 + 0xc0) = 0;
    }
    if ((*(uint *)((longlong)plVar5 + 0x14) & 7) == 0) {
      plVar1 = (longlong *)(param_1 + 0xd8);
      *(uint *)((longlong)plVar5 + 0x14) = *(uint *)((longlong)plVar5 + 0x14) & 0xfffffffa | 2;
      if (*plVar1 == 0) {
        *plVar1 = (longlong)plVar5;
        *plVar5 = 0;
        plVar5 = plVar2;
      }
      else {
        *plVar5 = *plVar1;
        *plVar1 = (longlong)plVar5;
        plVar5 = plVar2;
      }
    }
    else {
      FUN_1450e0910(param_1,plVar5,0);
      FUN_14539fe30(*(undefined8 *)(param_1 + 0x60));
      plVar5 = plVar2;
    }
  }
  FUN_1450e4520(param_1);
  bVar6 = true;
  puVar4 = *(undefined8 **)(param_1 + 0xd8);
  while (puVar4 != (undefined8 *)0x0) {
    puVar3 = (undefined8 *)*puVar4;
    FUN_1453a18f0(puVar4,*(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x428),bVar6,local_res8);
    bVar6 = local_res8[0] == '\0';
    puVar4 = puVar3;
  }
  return;
}



// FUNCTION 1450e4c70 FUN_1450e4c70 body=99 status=ok
// SIG undefined FUN_1450e4c70(void)

undefined8 * FUN_1450e4c70(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_149c28b38;
  param_1[0x10] = &PTR_LAB_149c28ba0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x1b] = 0;
  FUN_1450e0100();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0xe0);
  }
  return param_1;
}



// FUNCTION 1450e4ce0 FUN_1450e4ce0 body=62 status=ok
// SIG undefined FUN_1450e4ce0(void)

bool FUN_1450e4ce0(longlong param_1)

{
  longlong lVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  lVar1 = *(longlong *)(param_1 + 0xf0);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  return lVar1 == 0;
}



// FUNCTION 1450e4d20 FUN_1450e4d20 body=255 status=ok
// SIG undefined FUN_1450e4d20(void)

undefined8 FUN_1450e4d20(longlong param_1,longlong param_2,int param_3,char param_4)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  
  uVar3 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  if (((param_2 == 0) || (param_3 != 1)) ||
     (uVar1 = *(uint *)(param_2 + 0x14), ((byte)uVar1 & 7) == 2)) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
    if (*(longlong *)(param_1 + 0xe0) != param_2) {
      uVar2 = uVar1 & 0xfffffffb | 3;
      if (param_4 != '\0') {
        uVar2 = uVar1 & 0xfffffff9 | 1;
      }
      *(uint *)(param_2 + 0x14) = uVar2;
      goto LAB_1450e4df2;
    }
  }
  if (param_2 != 0) {
    FUN_1450e4ef0(param_1,param_2,uVar4);
    if ((param_4 == '\0') && (((byte)*(uint *)(param_2 + 0x14) & 7) != 2)) {
      *(uint *)(param_2 + 0x14) = *(uint *)(param_2 + 0x14) & 0xfffffffb | 3;
    }
    FUN_1450e2040(param_1,param_2,uVar4);
    FUN_1450e4e20(param_1);
    uVar3 = 1;
  }
  FUN_1450e2100(param_1,param_3);
  FUN_14539fe30(*(undefined8 *)(param_1 + 0x60));
LAB_1450e4df2:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  return uVar3;
}



// FUNCTION 1450e4e20 FUN_1450e4e20 body=206 status=ok
// SIG undefined FUN_1450e4e20(void)

void FUN_1450e4e20(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  puVar4 = *(undefined8 **)(param_1 + 0xe0);
  if ((puVar4 != (undefined8 *)0x0) && ((*(byte *)((longlong)puVar4 + 0x14) & 7) != 0)) {
    do {
      if (((byte)*(undefined4 *)((longlong)puVar4 + 0x14) & 7) == 2) {
        puVar5 = *(undefined8 **)(param_1 + 0xf0);
        puVar3 = (undefined8 *)0x0;
        do {
          puVar2 = puVar3;
          puVar3 = puVar5;
          if (puVar3 == (undefined8 *)0x0) goto LAB_1450e4ebb;
          puVar5 = (undefined8 *)*puVar3;
        } while (puVar3 != puVar4);
        if (puVar3 == *(undefined8 **)(param_1 + 0xf0)) {
          *(undefined8 **)(param_1 + 0xf0) = puVar5;
        }
        else {
          *puVar2 = puVar5;
        }
      }
      else {
        plVar1 = *(longlong **)(param_1 + 0xe0);
        if (plVar1 != (longlong *)0x0) {
          puVar5 = (undefined8 *)*plVar1;
          if ((undefined8 *)*plVar1 == (undefined8 *)0x0) {
            *(undefined8 *)(param_1 + 0xd8) = 0;
            puVar5 = (undefined8 *)0x0;
          }
          *(undefined8 **)(param_1 + 0xe0) = puVar5;
          *plVar1 = 0;
        }
      }
LAB_1450e4ebb:
      FUN_1450e2040(param_1,puVar4,1);
      FUN_14539fe30(*(undefined8 *)(param_1 + 0x60));
      puVar4 = (undefined8 *)FUN_1450e5110(param_1);
    } while (puVar4 != (undefined8 *)0x0);
  }
  return;
}



// FUNCTION 1450e4ef0 FUN_1450e4ef0 body=202 status=ok
// SIG undefined FUN_1450e4ef0(void)

void FUN_1450e4ef0(longlong param_1,longlong *param_2,char param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (((byte)*(undefined4 *)((longlong)param_2 + 0x14) & 7) == 2) {
    plVar1 = *(longlong **)(param_1 + 0xf0);
    plVar3 = plVar1;
    plVar4 = (longlong *)0x0;
    if (plVar1 != (longlong *)0x0) {
      while (plVar2 = plVar3, plVar3 = (longlong *)*plVar2, plVar2 != param_2) {
        plVar4 = plVar2;
        if (plVar3 == (longlong *)0x0) {
          return;
        }
      }
      if (plVar2 == plVar1) {
        *(longlong **)(param_1 + 0xf0) = plVar3;
        return;
      }
      *plVar4 = (longlong)plVar3;
    }
  }
  else if ((param_3 == '\0') && (plVar1 = *(longlong **)(param_1 + 0xe0), plVar1 != param_2)) {
    plVar3 = (longlong *)0x0;
    if (plVar1 != (longlong *)0x0) {
      while (plVar4 = plVar1, plVar4 != param_2) {
        plVar1 = (longlong *)*plVar4;
        plVar3 = plVar4;
        if ((longlong *)*plVar4 == (longlong *)0x0) {
          return;
        }
      }
      if (plVar4 == *(longlong **)(param_1 + 0xe0)) {
        *(longlong *)(param_1 + 0xe0) = *plVar4;
      }
      else {
        *plVar3 = *plVar4;
      }
      if (plVar4 == *(longlong **)(param_1 + 0xd8)) {
        *(longlong **)(param_1 + 0xd8) = plVar3;
        return;
      }
    }
  }
  else {
    plVar1 = *(longlong **)(param_1 + 0xe0);
    if (plVar1 != (longlong *)0x0) {
      lVar5 = *plVar1;
      if (*plVar1 == 0) {
        *(undefined8 *)(param_1 + 0xd8) = 0;
        lVar5 = 0;
      }
      *(longlong *)(param_1 + 0xe0) = lVar5;
      *plVar1 = 0;
      return;
    }
  }
  return;
}



// FUNCTION 1450e4fc0 FUN_1450e4fc0 body=333 status=ok
// SIG undefined FUN_1450e4fc0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1450e4fc0(longlong param_1,undefined8 *param_2,char param_3)

{
  uint *puVar1;
  longlong *plVar2;
  uint uVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  int iVar10;
  bool bVar11;
  char local_res18 [16];
  
  plVar9 = (longlong *)param_2[1];
  local_res18[0] = param_3;
  while (plVar9 != (longlong *)0x0) {
    plVar5 = (longlong *)*plVar9;
    plVar2 = plVar5;
    if (plVar9 == (longlong *)param_2[1]) {
      param_2[1] = plVar5;
      plVar2 = _DAT_00000000;
    }
    _DAT_00000000 = plVar2;
    if (plVar9 == (longlong *)*param_2) {
      *param_2 = 0;
    }
    if ((*(uint *)((longlong)plVar9 + 0x14) & 7) == 0) {
      uVar3 = *(uint *)(plVar9 + 2);
      *(uint *)((longlong)plVar9 + 0x14) = *(uint *)((longlong)plVar9 + 0x14) & 0xfffffffa | 2;
      uVar4 = *(uint *)(param_1 + 0xa0);
      lVar6 = *(longlong *)plVar9[1];
      puVar1 = (uint *)((longlong *)plVar9[1] + 3);
      if ((lVar6 + (ulonglong)uVar3 < (ulonglong)uVar4) &&
         ((ulonglong)uVar4 < (ulonglong)*puVar1 + lVar6)) {
        iVar10 = (uVar4 - uVar3) - (int)lVar6;
      }
      else {
        iVar10 = *puVar1 - uVar3;
      }
      *(int *)(param_1 + 0xa8) = *(int *)(param_1 + 0xa8) - iVar10;
      plVar2 = (longlong *)(param_1 + 0xf0);
      *(undefined4 *)(plVar9 + 2) = *(undefined4 *)(plVar9[1] + 0x18);
      if (*plVar2 == 0) {
        *plVar2 = (longlong)plVar9;
        *plVar9 = 0;
        plVar9 = plVar5;
      }
      else {
        *plVar9 = *plVar2;
        *plVar2 = (longlong)plVar9;
        plVar9 = plVar5;
      }
    }
    else {
      FUN_1450e2040(param_1,plVar9,0);
      FUN_14539fe30(*(undefined8 *)(param_1 + 0x60));
      plVar9 = plVar5;
    }
  }
  FUN_1450e4e20(param_1);
  bVar11 = true;
  puVar8 = *(undefined8 **)(param_1 + 0xf0);
  while (puVar8 != (undefined8 *)0x0) {
    puVar7 = (undefined8 *)*puVar8;
    FUN_1453a18f0(puVar8,*(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x428),bVar11,local_res18);
    bVar11 = local_res18[0] == '\0';
    puVar8 = puVar7;
  }
  return;
}



// FUNCTION 1450e5110 FUN_1450e5110 body=29 status=ok
// SIG undefined FUN_1450e5110(void)

longlong FUN_1450e5110(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0xe0);
  if (lVar1 != 0) {
    lVar2 = 0;
    if ((*(byte *)(lVar1 + 0x14) & 7) != 0) {
      lVar2 = lVar1;
    }
    return lVar2;
  }
  return 0;
}



// FUNCTION 1450e5130 FUN_1450e5130 body=99 status=ok
// SIG undefined FUN_1450e5130(void)

undefined8 * FUN_1450e5130(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_149c28ce8;
  param_1[0x10] = &PTR_LAB_149c28d78;
  param_1[0x1c] = 0;
  param_1[0x1b] = 0;
  param_1[0x1e] = 0;
  FUN_1450e0bc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0xf8);
  }
  return param_1;
}



// FUNCTION 1450e51a0 FUN_1450e51a0 body=497 status=ok
// SIG undefined FUN_1450e51a0(void)

longlong FUN_1450e51a0(longlong *param_1,longlong *param_2,undefined8 *param_3,undefined1 *param_4,
                      undefined1 param_5)

{
  ulonglong uVar1;
  undefined1 uVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  char cVar9;
  uint local_res8 [2];
  undefined8 local_res10;
  
  *param_3 = 0;
  *param_4 = 0;
  *param_2 = param_1[5];
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 6));
  FUN_14539fde0(param_1[0xc]);
  if ((char)param_1[0xf] == '\0') {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 6));
    cVar9 = *(char *)((longlong)param_1 + 0x7c);
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 6));
    if (cVar9 != '\0') {
      uVar4 = (**(code **)(*param_1 + 0x68))(param_1);
      if ((*(uint *)(param_1 + 0x14) != 0) && (*(uint *)(param_1 + 0x14) <= uVar4)) {
        uVar4 = (ulonglong)*(uint *)((longlong)param_1 + 0x9c);
      }
      uVar7 = (ulonglong)*(uint *)((longlong)param_1 + 0xa4);
      uVar1 = *(ulonglong *)param_1[5];
      iVar8 = (int)uVar4;
      if (uVar1 < uVar4 + uVar7) {
        uVar7 = 0;
        cVar9 = '\x01';
        if (uVar4 < uVar1) {
          uVar7 = (ulonglong)(uint)((int)uVar1 - iVar8);
        }
      }
      else {
        cVar9 = '\0';
      }
      uVar6 = (uint)uVar7;
      if ((*(char *)((longlong)param_1 + 0x7b) != '\0') &&
         (uVar3 = (**(code **)(*param_1 + 0x40))(param_1), (ulonglong)uVar3 < uVar7 + uVar4)) {
        uVar6 = uVar3 - iVar8;
      }
      local_res8[0] = uVar6;
      if (uVar6 == 0) {
        *(char *)((longlong)param_1 + 0x77) = cVar9;
        if (((*(char *)((longlong)param_1 + 0xd2) == '\0') || (cVar9 != '\0')) ||
           ((char)param_1[0xf] != '\0')) {
          uVar2 = 0;
        }
        else {
          uVar2 = 1;
        }
        *(undefined1 *)((longlong)param_1 + 0x7c) = uVar2;
      }
      else {
        uVar3 = *(uint *)((longlong)param_1 + 0xac);
        if (uVar6 <= *(uint *)((longlong)param_1 + 0xac)) {
          uVar3 = uVar6;
        }
        lVar5 = FUN_1450e3a30(param_1[0xc],param_1,(int)param_1[0x12],uVar4,uVar3,(int)param_1[0x16]
                              ,cVar9,param_5,local_res8,&local_res10,param_4);
        if (lVar5 != 0) {
          *param_3 = local_res10;
          uVar6 = *(uint *)(param_1 + 0x14);
          if ((uVar4 < uVar6) && ((ulonglong)uVar6 < uVar4 + local_res8[0])) {
            local_res8[0] = uVar6 - iVar8;
          }
          *(uint *)(param_1 + 0x15) = (int)param_1[0x15] + local_res8[0];
          FUN_1450e1c30(param_1);
          param_1[0xb] = *(longlong *)(param_1[0xc] + 0x70);
          goto LAB_1450e52a7;
        }
      }
    }
  }
  lVar5 = 0;
LAB_1450e52a7:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 6));
  return lVar5;
}



// FUNCTION 1450e5400 FUN_1450e5400 body=417 status=ok
// SIG undefined FUN_1450e5400(void)

int FUN_1450e5400(longlong param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong *plVar10;
  int iVar11;
  longlong *plVar12;
  longlong *plVar13;
  uint uVar14;
  bool bVar16;
  char local_res10 [8];
  longlong *plVar15;
  
  plVar13 = (longlong *)0x0;
  plVar4 = *(longlong **)(param_1 + 0xd8);
  uVar14 = 0;
  plVar15 = plVar13;
  do {
    if ((plVar4 == (longlong *)0x0) || (uVar14 = (uint)plVar15, param_2 <= uVar14)) {
      FUN_1450e4e20(param_1);
      iVar11 = FUN_1450e1ad0(param_1,param_2 - uVar14);
      local_res10[0] = *(longlong *)(param_1 + 0xe0) == 0;
      bVar16 = true;
      puVar8 = *(undefined8 **)(param_1 + 0xf0);
      while (puVar8 != (undefined8 *)0x0) {
        puVar7 = (undefined8 *)*puVar8;
        FUN_1453a18f0(puVar8,*(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x428),bVar16,
                      local_res10);
        bVar16 = local_res10[0] == '\0';
        puVar8 = puVar7;
      }
      return uVar14 + iVar11;
    }
    plVar5 = *(longlong **)(param_1 + 0xe0);
    uVar14 = uVar14 + (*(int *)(plVar4[1] + 0x18) - (int)plVar4[2]);
    plVar15 = (longlong *)(ulonglong)uVar14;
    plVar9 = plVar5;
    plVar10 = plVar5;
    plVar12 = plVar13;
    if (plVar5 == (longlong *)0x0) {
LAB_1450e5468:
      if (plVar10 != (longlong *)0x0) {
        if (plVar10 == plVar5) {
          *(longlong *)(param_1 + 0xe0) = *plVar10;
        }
        else {
          *plVar12 = *plVar10;
        }
        if (plVar10 == *(longlong **)(param_1 + 0xd8)) {
          *(longlong **)(param_1 + 0xd8) = plVar12;
        }
      }
    }
    else {
      do {
        plVar10 = plVar9;
        if (plVar10 == plVar4) goto LAB_1450e5468;
        plVar9 = (longlong *)*plVar10;
        plVar12 = plVar10;
      } while ((longlong *)*plVar10 != (longlong *)0x0);
    }
    if ((*(uint *)((longlong)plVar4 + 0x14) & 7) == 0) {
      uVar2 = *(uint *)(plVar4 + 2);
      *(uint *)((longlong)plVar4 + 0x14) = *(uint *)((longlong)plVar4 + 0x14) & 0xfffffffa | 2;
      uVar3 = *(uint *)(param_1 + 0xa0);
      lVar6 = *(longlong *)plVar4[1];
      puVar1 = (uint *)((longlong *)plVar4[1] + 3);
      if ((lVar6 + (ulonglong)uVar2 < (ulonglong)uVar3) &&
         ((ulonglong)uVar3 < (ulonglong)*puVar1 + lVar6)) {
        iVar11 = (uVar3 - uVar2) - (int)lVar6;
      }
      else {
        iVar11 = *puVar1 - uVar2;
      }
      *(int *)(param_1 + 0xa8) = *(int *)(param_1 + 0xa8) - iVar11;
      *(undefined4 *)(plVar4 + 2) = *(undefined4 *)(plVar4[1] + 0x18);
      if (*(longlong *)(param_1 + 0xf0) == 0) {
        *(longlong **)(param_1 + 0xf0) = plVar4;
        *plVar4 = 0;
      }
      else {
        *plVar4 = *(longlong *)(param_1 + 0xf0);
        *(longlong **)(param_1 + 0xf0) = plVar4;
      }
    }
    else {
      FUN_1450e2040(param_1,plVar4,0);
      FUN_14539fe30(*(undefined8 *)(param_1 + 0x60));
    }
    plVar4 = *(longlong **)(param_1 + 0xd8);
  } while( true );
}



// FUNCTION 1450e55b0 FUN_1450e55b0 body=477 status=ok
// SIG undefined FUN_1450e55b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1450e55b0(longlong param_1,ulonglong param_2)

{
  uint *puVar1;
  longlong *plVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  int iVar10;
  longlong *plVar11;
  longlong *plVar12;
  bool bVar13;
  char local_res8 [8];
  
  plVar12 = (longlong *)0x0;
  plVar6 = *(longlong **)(param_1 + 0xe0);
  plVar11 = plVar12;
  plVar2 = plVar12;
  while (plVar9 = plVar6, plVar9 != (longlong *)0x0) {
    lVar5 = *(longlong *)plVar9[1];
    if ((ulonglong)*(uint *)(plVar9 + 2) + lVar5 == param_2) {
      param_2 = (ulonglong)*(uint *)((longlong *)plVar9[1] + 3) + lVar5;
      if ((*(uint *)(param_1 + 0xa0) != 0) && (*(uint *)(param_1 + 0xa0) <= param_2)) {
        param_2 = (ulonglong)*(uint *)(param_1 + 0x9c);
      }
      plVar6 = (longlong *)*plVar9;
      plVar2 = plVar9;
    }
    else {
      plVar6 = (longlong *)*plVar9;
      if (plVar9 == *(longlong **)(param_1 + 0xe0)) {
        *(longlong **)(param_1 + 0xe0) = plVar6;
      }
      else {
        *plVar2 = (longlong)plVar6;
      }
      if (plVar9 == *(longlong **)(param_1 + 0xd8)) {
        *(longlong **)(param_1 + 0xd8) = plVar2;
      }
      if (plVar11 == (longlong *)0x0) {
        plVar11 = plVar12;
      }
      *plVar9 = (longlong)plVar11;
      plVar11 = plVar9;
    }
  }
  plVar6 = plVar11;
  plVar2 = _DAT_00000000;
  if ((*(char *)(*(longlong *)(param_1 + 0x60) + 0x418) == '\0') &&
     (*(longlong *)(param_1 + 0xe0) == 0)) {
    local_res8[0] = '\x01';
  }
  else {
    local_res8[0] = '\0';
  }
  while (plVar6 != (longlong *)0x0) {
    plVar12 = (longlong *)*plVar6;
    _DAT_00000000 = plVar12;
    if (plVar6 == plVar11) {
      plVar11 = plVar12;
      _DAT_00000000 = plVar2;
    }
    if ((*(uint *)((longlong)plVar6 + 0x14) & 7) == 0) {
      uVar3 = *(uint *)(plVar6 + 2);
      *(uint *)((longlong)plVar6 + 0x14) = *(uint *)((longlong)plVar6 + 0x14) & 0xfffffffa | 2;
      uVar4 = *(uint *)(param_1 + 0xa0);
      lVar5 = *(longlong *)plVar6[1];
      puVar1 = (uint *)((longlong *)plVar6[1] + 3);
      if ((lVar5 + (ulonglong)uVar3 < (ulonglong)uVar4) &&
         ((ulonglong)uVar4 < (ulonglong)*puVar1 + lVar5)) {
        iVar10 = (uVar4 - uVar3) - (int)lVar5;
      }
      else {
        iVar10 = *puVar1 - uVar3;
      }
      *(int *)(param_1 + 0xa8) = *(int *)(param_1 + 0xa8) - iVar10;
      plVar2 = (longlong *)(param_1 + 0xf0);
      *(undefined4 *)(plVar6 + 2) = *(undefined4 *)(plVar6[1] + 0x18);
      if (*plVar2 == 0) {
        *plVar2 = (longlong)plVar6;
        *plVar6 = 0;
        plVar6 = plVar12;
        plVar2 = _DAT_00000000;
      }
      else {
        *plVar6 = *plVar2;
        *plVar2 = (longlong)plVar6;
        plVar6 = plVar12;
        plVar2 = _DAT_00000000;
      }
    }
    else {
      FUN_1450e2040(param_1,plVar6,0);
      FUN_14539fe30(*(undefined8 *)(param_1 + 0x60));
      plVar6 = plVar12;
      plVar2 = _DAT_00000000;
    }
  }
  _DAT_00000000 = plVar2;
  FUN_1450e4e20(param_1);
  bVar13 = true;
  puVar8 = *(undefined8 **)(param_1 + 0xf0);
  while (puVar8 != (undefined8 *)0x0) {
    puVar7 = (undefined8 *)*puVar8;
    FUN_1453a18f0(puVar8,*(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x428),bVar13,local_res8);
    bVar13 = local_res8[0] == '\0';
    puVar8 = puVar7;
  }
  return;
}



// FUNCTION 1450e5790 FUN_1450e5790 body=736 status=ok
// SIG undefined FUN_1450e5790(void)

void FUN_1450e5790(longlong param_1,uint param_2)

{
  uint *puVar1;
  longlong *plVar2;
  byte bVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  int iVar11;
  uint uVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong *plVar15;
  bool bVar16;
  char local_res8 [8];
  
  bVar3 = *(byte *)(param_1 + 0xd0);
  uVar10 = (ulonglong)bVar3;
  plVar15 = (longlong *)0x0;
  bVar16 = false;
  if ((uint)bVar3 < *(uint *)(param_1 + 0xb8)) {
    plVar14 = *(longlong **)(param_1 + 200);
    plVar13 = plVar15;
    if (bVar3 != 0) {
      do {
        plVar13 = plVar14;
        plVar14 = (longlong *)*plVar13;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    lVar5 = *(longlong *)(param_1 + 0x60);
    EnterCriticalSection((LPCRITICAL_SECTION)(lVar5 + 0x18));
    while (plVar2 = plVar14, plVar2 != (longlong *)0x0) {
      if ((bVar16) || ((uint)(*(int *)(plVar2[1] + 0x18) - (int)plVar2[2]) < param_2)) {
        bVar16 = true;
        plVar14 = (longlong *)*plVar2;
        if (plVar2 == *(longlong **)(param_1 + 200)) {
          *(longlong **)(param_1 + 200) = plVar14;
        }
        else {
          *plVar13 = (longlong)plVar14;
        }
        if (plVar2 == *(longlong **)(param_1 + 0xc0)) {
          *(longlong **)(param_1 + 0xc0) = plVar13;
        }
        *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0xb8) + -1;
        uVar12 = *(uint *)(plVar2 + 2);
        uVar4 = *(uint *)(param_1 + 0xa0);
        lVar6 = *(longlong *)plVar2[1];
        puVar1 = (uint *)((longlong *)plVar2[1] + 3);
        if ((lVar6 + (ulonglong)uVar12 < (ulonglong)uVar4) &&
           ((ulonglong)uVar4 < (ulonglong)*puVar1 + lVar6)) {
          iVar11 = (uVar4 - uVar12) - (int)lVar6;
        }
        else {
          iVar11 = *puVar1 - uVar12;
        }
        *(int *)(param_1 + 0xa8) = *(int *)(param_1 + 0xa8) - iVar11;
        lVar6 = plVar2[1];
        lVar7 = *(longlong *)(param_1 + 0x60);
        plVar2[1] = 0;
        if (lVar6 != 0) {
          FUN_1453a0ee0(lVar7 + 0xc0);
        }
        AK::MemoryMgr::Free(7,plVar2);
      }
      else {
        bVar16 = false;
        plVar14 = (longlong *)*plVar2;
        plVar13 = plVar2;
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar5 + 0x18));
    if ((!bVar16) || (*(char *)(*(longlong *)(param_1 + 0x60) + 0x418) != '\0')) goto LAB_1450e5903;
    local_res8[0] = '\x01';
    plVar14 = *(longlong **)(param_1 + 0xe0);
  }
  else {
LAB_1450e5903:
    plVar14 = *(longlong **)(param_1 + 0xe0);
    local_res8[0] = '\0';
    if (!bVar16) {
      if (plVar14 == (longlong *)0x0) goto LAB_1450e5a1e;
      do {
        plVar13 = plVar14;
        if ((uint)(*(int *)(plVar13[1] + 0x18) - (int)plVar13[2]) < param_2) goto LAB_1450e5950;
        plVar14 = (longlong *)*plVar13;
        plVar15 = plVar13;
      } while (plVar14 != (longlong *)0x0);
    }
  }
  while (plVar13 = plVar14, plVar13 != (longlong *)0x0) {
LAB_1450e5950:
    plVar14 = (longlong *)*plVar13;
    if (plVar13 == *(longlong **)(param_1 + 0xe0)) {
      *(longlong **)(param_1 + 0xe0) = plVar14;
    }
    else {
      *plVar15 = (longlong)plVar14;
    }
    if (plVar13 == *(longlong **)(param_1 + 0xd8)) {
      *(longlong **)(param_1 + 0xd8) = plVar15;
    }
    if ((*(uint *)((longlong)plVar13 + 0x14) & 7) == 0) {
      *(uint *)((longlong)plVar13 + 0x14) = *(uint *)((longlong)plVar13 + 0x14) & 0xfffffffa | 2;
      uVar12 = *(uint *)(param_1 + 0xa0);
      lVar5 = *(longlong *)plVar13[1];
      puVar1 = (uint *)((longlong *)plVar13[1] + 3);
      if ((lVar5 + (ulonglong)*(uint *)(plVar13 + 2) < (ulonglong)uVar12) &&
         ((ulonglong)uVar12 < (ulonglong)*puVar1 + lVar5)) {
        uVar12 = uVar12 - (int)lVar5;
      }
      else {
        uVar12 = *puVar1;
      }
      *(int *)(param_1 + 0xa8) = *(int *)(param_1 + 0xa8) - (uVar12 - *(uint *)(plVar13 + 2));
      plVar2 = (longlong *)(param_1 + 0xf0);
      *(undefined4 *)(plVar13 + 2) = *(undefined4 *)(plVar13[1] + 0x18);
      if (*plVar2 == 0) {
        *plVar2 = (longlong)plVar13;
        *plVar13 = 0;
      }
      else {
        *plVar13 = *plVar2;
        *plVar2 = (longlong)plVar13;
      }
    }
    else {
      FUN_1450e2040(param_1,plVar13,0);
      FUN_14539fe30(*(undefined8 *)(param_1 + 0x60));
    }
  }
LAB_1450e5a1e:
  bVar16 = true;
  puVar9 = *(undefined8 **)(param_1 + 0xf0);
  while (puVar9 != (undefined8 *)0x0) {
    puVar8 = (undefined8 *)*puVar9;
    FUN_1453a18f0(puVar9,*(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x428),bVar16,local_res8);
    bVar16 = local_res8[0] == '\0';
    puVar9 = puVar8;
  }
  return;
}



// FUNCTION 1450e5a70 FUN_1450e5a70 body=224 status=ok
// SIG undefined FUN_1450e5a70(void)

void FUN_1450e5a70(longlong param_1,uint param_2)

{
  uint *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  int iVar7;
  
  puVar3 = *(undefined8 **)(param_1 + 200);
  iVar4 = 0;
  uVar6 = (uint)*(byte *)(param_1 + 0xd0);
  uVar5 = (ulonglong)param_2;
  *(uint *)(param_1 + 0xa0) = param_2;
  for (; iVar7 = 0, puVar3 != (undefined8 *)0x0; puVar3 = (undefined8 *)*puVar3) {
    if (uVar6 == 0) goto LAB_1450e5ac0;
    uVar6 = uVar6 - 1;
  }
LAB_1450e5afc:
  for (puVar3 = *(undefined8 **)(param_1 + 0xe0); puVar3 != (undefined8 *)0x0;
      puVar3 = (undefined8 *)*puVar3) {
    uVar6 = *(uint *)(puVar3 + 2);
    lVar2 = *(longlong *)puVar3[1];
    puVar1 = (uint *)((longlong *)puVar3[1] + 3);
    if ((lVar2 + (ulonglong)uVar6 < uVar5) && (uVar5 < (ulonglong)*puVar1 + lVar2)) {
      iVar4 = (param_2 - uVar6) - (int)lVar2;
    }
    else {
      iVar4 = *puVar1 - uVar6;
    }
    iVar7 = iVar7 + iVar4;
  }
  *(int *)(param_1 + 0xa8) = iVar7;
  return;
LAB_1450e5ac0:
  do {
    uVar6 = *(uint *)(puVar3 + 2);
    lVar2 = *(longlong *)puVar3[1];
    puVar1 = (uint *)((longlong *)puVar3[1] + 3);
    if ((lVar2 + (ulonglong)uVar6 < uVar5) && (uVar5 < (ulonglong)*puVar1 + lVar2)) {
      iVar7 = (param_2 - uVar6) - (int)lVar2;
    }
    else {
      iVar7 = *puVar1 - uVar6;
    }
    puVar3 = (undefined8 *)*puVar3;
    iVar4 = iVar4 + iVar7;
    iVar7 = iVar4;
  } while (puVar3 != (undefined8 *)0x0);
  goto LAB_1450e5afc;
}



// FUNCTION 1450e5b60 FUN_1450e5b60 body=99 status=ok
// SIG undefined FUN_1450e5b60(void)

undefined8 * FUN_1450e5b60(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_149c28ce8;
  param_1[0x10] = &PTR_LAB_149c28d78;
  param_1[0x1c] = 0;
  param_1[0x1b] = 0;
  param_1[0x1e] = 0;
  FUN_1450e0bc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0xf8);
  }
  return param_1;
}



// FUNCTION 1450e5c00 FUN_1450e5c00 body=214 status=ok
// SIG undefined FUN_1450e5c00(void)

undefined8 FUN_1450e5c00(longlong *param_1,int param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  __uint64 _Var6;
  uint uVar7;
  ulonglong uVar8;
  
  uVar8 = (ulonglong)*(uint *)(param_1 + 1);
  uVar7 = *(int *)((longlong)param_1 + 0xc) + param_2;
  _Var6 = (ulonglong)uVar7 * 0x18;
  if ((void *)*param_1 == (void *)0x0) {
    puVar5 = AK::MemoryMgr::Malloc(0,_Var6);
    if (puVar5 == (undefined8 *)0x0) {
      return 0;
    }
    if (((undefined8 *)*param_1 != (undefined8 *)0x0) &&
       (puVar4 = puVar5, (undefined8 *)*param_1 != puVar5)) {
      for (; uVar8 != 0; uVar8 = uVar8 - 1) {
        if (puVar4 != (undefined8 *)0x0) {
          *(undefined4 *)puVar4 = 0;
          *(undefined1 *)((longlong)puVar4 + 4) = 8;
          *(undefined4 *)(puVar4 + 1) = 0;
          puVar4[2] = 0;
        }
        lVar2 = *param_1;
        puVar1 = (undefined8 *)((longlong)puVar4 + (lVar2 - (longlong)puVar5));
        uVar3 = puVar1[1];
        *puVar4 = *puVar1;
        puVar4[1] = uVar3;
        puVar4[2] = *(undefined8 *)((longlong)puVar4 + lVar2 + (0x10 - (longlong)puVar5));
        puVar4 = puVar4 + 3;
      }
      AK::MemoryMgr::Free(0,(void *)*param_1);
    }
  }
  else {
    puVar5 = AK::MemoryMgr::Realloc(0,(void *)*param_1,_Var6);
    if (puVar5 == (undefined8 *)0x0) {
      return 0;
    }
  }
  *param_1 = (longlong)puVar5;
  *(uint *)((longlong)param_1 + 0xc) = uVar7;
  return 1;
}



// FUNCTION 1450e5ce0 FUN_1450e5ce0 body=221 status=ok
// SIG undefined FUN_1450e5ce0(void)

void FUN_1450e5ce0(longlong param_1,longlong param_2,uint param_3,longlong param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  uint uVar8;
  ulonglong uVar9;
  
  plVar3 = *(longlong **)(param_1 + 8);
  uVar9 = (ulonglong)param_3;
  plVar6 = plVar3 + (ulonglong)*(uint *)(param_1 + 0x10) * 3;
  for (; (plVar3 != plVar6 && (*plVar3 != param_2)); plVar3 = plVar3 + 3) {
  }
  plVar7 = plVar3 + 1;
  if (plVar3 == plVar6) {
    plVar7 = (longlong *)0x0;
  }
  if ((plVar7 == (longlong *)0x0) || (uVar8 = *(uint *)(plVar7 + 1), uVar8 == 0)) {
    if (param_3 != 0) {
      puVar4 = (undefined4 *)(param_4 + 8);
      do {
        *(undefined8 *)(puVar4 + -2) = 0;
        *puVar4 = 0;
        puVar4[1] = 0x42c80000;
        puVar4 = puVar4 + 4;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
  }
  else if ((uVar8 <= param_3) || (uVar8 = param_3, param_3 != 0)) {
    uVar9 = (ulonglong)uVar8;
    plVar6 = (longlong *)0x0;
    do {
      uVar2 = ((undefined8 *)((longlong)plVar6 + *plVar7))[1];
      *(undefined8 *)((longlong)plVar6 + param_4) = *(undefined8 *)((longlong)plVar6 + *plVar7);
      ((undefined8 *)((longlong)plVar6 + param_4))[1] = uVar2;
      uVar9 = uVar9 - 1;
      plVar6 = plVar6 + 2;
    } while (uVar9 != 0);
    if (uVar8 < param_3) {
      uVar9 = (ulonglong)(param_3 - uVar8);
      puVar5 = (undefined8 *)((ulonglong)uVar8 * 0x10 + param_4);
      do {
        puVar1 = (undefined8 *)(*plVar7 + (ulonglong)(uVar8 - 1) * 0x10);
        uVar2 = puVar1[1];
        *puVar5 = *puVar1;
        puVar5[1] = uVar2;
        uVar9 = uVar9 - 1;
        puVar5 = puVar5 + 2;
      } while (uVar9 != 0);
      return;
    }
  }
  return;
}



// FUNCTION 1450e5dc0 FUN_1450e5dc0 body=414 status=ok
// SIG undefined FUN_1450e5dc0(void)

undefined8 FUN_1450e5dc0(longlong *param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  void *pvVar3;
  longlong lVar4;
  __uint64 _Var5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  
  uVar8 = (ulonglong)*(uint *)(param_1 + 1);
  uVar7 = *(int *)((longlong)param_1 + 0xc) + param_2;
  _Var5 = (ulonglong)uVar7 * 0x90;
  if ((void *)*param_1 == (void *)0x0) {
    pvVar3 = AK::MemoryMgr::Malloc(0,_Var5);
    if (pvVar3 == (void *)0x0) {
      return 0;
    }
    if (((void *)*param_1 != (void *)0x0) && ((void *)*param_1 != pvVar3)) {
      if (uVar8 != 0) {
        lVar9 = -0x34 - (longlong)pvVar3;
        lVar6 = (longlong)pvVar3 + 0x34;
        do {
          if ((undefined8 *)(lVar6 + -0x34) != (undefined8 *)0x0) {
            *(undefined8 *)(lVar6 + -4) = 0;
            *(undefined4 *)(lVar6 + 4) = 0;
            *(undefined4 *)(lVar6 + 8) = 0x3f800000;
            *(undefined4 *)(lVar6 + 0xc) = 0x3f800000;
            *(undefined8 *)(lVar6 + 0x10) = 0x3f800000;
            *(undefined8 *)(lVar6 + 0x18) = 0;
            *(undefined8 *)(lVar6 + 0x20) = 0;
            *(undefined4 *)(lVar6 + 0x28) = 0x42c80000;
            *(undefined4 *)(lVar6 + 0x2c) = 0x3f800000;
            *(undefined4 *)(lVar6 + 0x30) = 0xffffffff;
            *(undefined4 *)(lVar6 + 0x34) = 0;
            *(undefined8 *)(lVar6 + 0x3c) = 0;
            *(undefined8 *)(lVar6 + 0x44) = 0x3f800000;
            *(undefined4 *)(lVar6 + 0x4c) = 0;
            *(undefined4 *)(lVar6 + 0x50) = 0xbf800000;
            *(undefined4 *)(lVar6 + 0x54) = 0x3f800000;
          }
          lVar4 = *param_1 + lVar6;
          uVar2 = ((undefined8 *)(lVar4 + lVar9))[1];
          *(undefined8 *)(lVar6 + -0x34) = *(undefined8 *)(lVar4 + lVar9);
          *(undefined8 *)(lVar6 + -0x2c) = uVar2;
          puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar9);
          uVar2 = puVar1[1];
          *(undefined8 *)(lVar6 + -0x24) = *puVar1;
          *(undefined8 *)(lVar6 + -0x1c) = uVar2;
          puVar1 = (undefined8 *)(lVar4 + 0x20 + lVar9);
          uVar2 = puVar1[1];
          *(undefined8 *)(lVar6 + -0x14) = *puVar1;
          *(undefined8 *)(lVar6 + -0xc) = uVar2;
          puVar1 = (undefined8 *)(lVar4 + 0x30 + lVar9);
          uVar2 = puVar1[1];
          *(undefined8 *)(lVar6 + -4) = *puVar1;
          *(undefined8 *)(lVar6 + 4) = uVar2;
          puVar1 = (undefined8 *)(lVar4 + 0x40 + lVar9);
          uVar2 = puVar1[1];
          *(undefined8 *)(lVar6 + 0xc) = *puVar1;
          *(undefined8 *)(lVar6 + 0x14) = uVar2;
          puVar1 = (undefined8 *)(lVar4 + 0x50 + lVar9);
          uVar2 = puVar1[1];
          *(undefined8 *)(lVar6 + 0x1c) = *puVar1;
          *(undefined8 *)(lVar6 + 0x24) = uVar2;
          puVar1 = (undefined8 *)(lVar4 + 0x60 + lVar9);
          uVar2 = puVar1[1];
          *(undefined8 *)(lVar6 + 0x2c) = *puVar1;
          *(undefined8 *)(lVar6 + 0x34) = uVar2;
          puVar1 = (undefined8 *)(lVar4 + 0x70 + lVar9);
          uVar2 = puVar1[1];
          *(undefined8 *)(lVar6 + 0x3c) = *puVar1;
          *(undefined8 *)(lVar6 + 0x44) = uVar2;
          puVar1 = (undefined8 *)(lVar4 + 0x80 + lVar9);
          uVar2 = puVar1[1];
          *(undefined8 *)(lVar6 + 0x4c) = *puVar1;
          *(undefined8 *)(lVar6 + 0x54) = uVar2;
          uVar8 = uVar8 - 1;
          lVar6 = lVar6 + 0x90;
        } while (uVar8 != 0);
      }
      AK::MemoryMgr::Free(0,(void *)*param_1);
    }
  }
  else {
    pvVar3 = AK::MemoryMgr::Realloc(0,(void *)*param_1,_Var5);
    if (pvVar3 == (void *)0x0) {
      return 0;
    }
  }
  *param_1 = (longlong)pvVar3;
  *(uint *)((longlong)param_1 + 0xc) = uVar7;
  return 1;
}



// FUNCTION 1450e5f60 FUN_1450e5f60 body=789 status=ok
// SIG undefined FUN_1450e5f60(void)

undefined1 FUN_1450e5f60(longlong *param_1,uint param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  uVar5 = (ulonglong)*(uint *)(param_1 + 1);
  uVar4 = (ulonglong)param_2;
  if (param_2 < *(uint *)(param_1 + 1)) {
    *(uint *)(param_1 + 1) = param_2;
    return 1;
  }
  if (*(uint *)((longlong)param_1 + 0xc) < param_2) {
    cVar1 = FUN_1450e5dc0(param_1,param_2 - *(uint *)((longlong)param_1 + 0xc));
    if (cVar1 == '\0') {
      return 0;
    }
  }
  if (uVar5 < uVar4) {
    if (3 < uVar4 - uVar5) {
      lVar3 = uVar5 * 0x90;
      lVar6 = ((uVar4 - uVar5) - 4 >> 2) + 1;
      uVar5 = uVar5 + lVar6 * 4;
      do {
        lVar2 = *param_1 + lVar3;
        if (lVar2 != 0) {
          *(undefined8 *)(lVar2 + 0x30) = 0;
          *(undefined4 *)(lVar2 + 0x38) = 0;
          *(undefined4 *)(lVar2 + 0x3c) = 0x3f800000;
          *(undefined4 *)(lVar2 + 0x40) = 0x3f800000;
          *(undefined8 *)(lVar2 + 0x44) = 0x3f800000;
          *(undefined8 *)(lVar2 + 0x4c) = 0;
          *(undefined8 *)(lVar2 + 0x54) = 0;
          *(undefined4 *)(lVar2 + 0x5c) = 0x42c80000;
          *(undefined4 *)(lVar2 + 0x60) = 0x3f800000;
          *(undefined4 *)(lVar2 + 100) = 0xffffffff;
          *(undefined4 *)(lVar2 + 0x68) = 0;
          *(undefined8 *)(lVar2 + 0x70) = 0;
          *(undefined8 *)(lVar2 + 0x78) = 0x3f800000;
          *(undefined4 *)(lVar2 + 0x80) = 0;
          *(undefined4 *)(lVar2 + 0x84) = 0xbf800000;
          *(undefined4 *)(lVar2 + 0x88) = 0x3f800000;
        }
        lVar2 = *param_1 + 0x90 + lVar3;
        if (lVar2 != 0) {
          *(undefined8 *)(lVar2 + 0x30) = 0;
          *(undefined4 *)(lVar2 + 0x38) = 0;
          *(undefined4 *)(lVar2 + 0x3c) = 0x3f800000;
          *(undefined4 *)(lVar2 + 0x40) = 0x3f800000;
          *(undefined8 *)(lVar2 + 0x44) = 0x3f800000;
          *(undefined8 *)(lVar2 + 0x4c) = 0;
          *(undefined8 *)(lVar2 + 0x54) = 0;
          *(undefined4 *)(lVar2 + 0x5c) = 0x42c80000;
          *(undefined4 *)(lVar2 + 0x60) = 0x3f800000;
          *(undefined4 *)(lVar2 + 100) = 0xffffffff;
          *(undefined4 *)(lVar2 + 0x68) = 0;
          *(undefined8 *)(lVar2 + 0x70) = 0;
          *(undefined8 *)(lVar2 + 0x78) = 0x3f800000;
          *(undefined4 *)(lVar2 + 0x80) = 0;
          *(undefined4 *)(lVar2 + 0x84) = 0xbf800000;
          *(undefined4 *)(lVar2 + 0x88) = 0x3f800000;
        }
        lVar2 = *param_1 + 0x120 + lVar3;
        if (lVar2 != 0) {
          *(undefined8 *)(lVar2 + 0x30) = 0;
          *(undefined4 *)(lVar2 + 0x38) = 0;
          *(undefined4 *)(lVar2 + 0x3c) = 0x3f800000;
          *(undefined4 *)(lVar2 + 0x40) = 0x3f800000;
          *(undefined8 *)(lVar2 + 0x44) = 0x3f800000;
          *(undefined8 *)(lVar2 + 0x4c) = 0;
          *(undefined8 *)(lVar2 + 0x54) = 0;
          *(undefined4 *)(lVar2 + 0x5c) = 0x42c80000;
          *(undefined4 *)(lVar2 + 0x60) = 0x3f800000;
          *(undefined4 *)(lVar2 + 100) = 0xffffffff;
          *(undefined4 *)(lVar2 + 0x68) = 0;
          *(undefined8 *)(lVar2 + 0x70) = 0;
          *(undefined8 *)(lVar2 + 0x78) = 0x3f800000;
          *(undefined4 *)(lVar2 + 0x80) = 0;
          *(undefined4 *)(lVar2 + 0x84) = 0xbf800000;
          *(undefined4 *)(lVar2 + 0x88) = 0x3f800000;
        }
        lVar2 = *param_1 + 0x1b0 + lVar3;
        if (lVar2 != 0) {
          *(undefined8 *)(lVar2 + 0x30) = 0;
          *(undefined4 *)(lVar2 + 0x38) = 0;
          *(undefined4 *)(lVar2 + 0x3c) = 0x3f800000;
          *(undefined4 *)(lVar2 + 0x40) = 0x3f800000;
          *(undefined8 *)(lVar2 + 0x44) = 0x3f800000;
          *(undefined8 *)(lVar2 + 0x4c) = 0;
          *(undefined8 *)(lVar2 + 0x54) = 0;
          *(undefined4 *)(lVar2 + 0x5c) = 0x42c80000;
          *(undefined4 *)(lVar2 + 0x60) = 0x3f800000;
          *(undefined4 *)(lVar2 + 100) = 0xffffffff;
          *(undefined4 *)(lVar2 + 0x68) = 0;
          *(undefined8 *)(lVar2 + 0x70) = 0;
          *(undefined8 *)(lVar2 + 0x78) = 0x3f800000;
          *(undefined4 *)(lVar2 + 0x80) = 0;
          *(undefined4 *)(lVar2 + 0x84) = 0xbf800000;
          *(undefined4 *)(lVar2 + 0x88) = 0x3f800000;
        }
        lVar3 = lVar3 + 0x240;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
      if (uVar4 <= uVar5) goto LAB_1450e6260;
    }
    lVar3 = uVar5 * 0x90;
    lVar6 = uVar4 - uVar5;
    do {
      lVar2 = *param_1 + lVar3;
      if (lVar2 != 0) {
        *(undefined8 *)(lVar2 + 0x30) = 0;
        *(undefined4 *)(lVar2 + 0x38) = 0;
        *(undefined4 *)(lVar2 + 0x3c) = 0x3f800000;
        *(undefined4 *)(lVar2 + 0x40) = 0x3f800000;
        *(undefined8 *)(lVar2 + 0x44) = 0x3f800000;
        *(undefined8 *)(lVar2 + 0x4c) = 0;
        *(undefined8 *)(lVar2 + 0x54) = 0;
        *(undefined4 *)(lVar2 + 0x5c) = 0x42c80000;
        *(undefined4 *)(lVar2 + 0x60) = 0x3f800000;
        *(undefined4 *)(lVar2 + 100) = 0xffffffff;
        *(undefined4 *)(lVar2 + 0x68) = 0;
        *(undefined8 *)(lVar2 + 0x70) = 0;
        *(undefined8 *)(lVar2 + 0x78) = 0x3f800000;
        *(undefined4 *)(lVar2 + 0x80) = 0;
        *(undefined4 *)(lVar2 + 0x84) = 0xbf800000;
        *(undefined4 *)(lVar2 + 0x88) = 0x3f800000;
      }
      lVar3 = lVar3 + 0x90;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
LAB_1450e6260:
  *(uint *)(param_1 + 1) = param_2;
  return 1;
}



// FUNCTION 1450e6280 FUN_1450e6280 body=463 status=ok
// SIG undefined FUN_1450e6280(void)

undefined8 * FUN_1450e6280(undefined8 *param_1,undefined8 param_2,longlong param_3,byte param_4)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  char cVar4;
  byte bVar5;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_28;
  undefined1 local_20;
  undefined1 local_18;
  undefined8 local_10;
  
  local_30 = 0;
  local_28 = 0;
  local_10 = 0;
  local_20 = 0xff;
  local_18 = 0xff;
  local_38 = param_2;
  FUN_145073d10(param_1,&local_38);
  *param_1 = &PTR_LAB_149c28f28;
  param_1[0xd] = &PTR_LAB_149c28fb8;
  FUN_14538e8c0(param_1 + 0xf);
  FUN_1450896a0(param_1 + 0x11);
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  *(undefined4 *)(param_1 + 0x2e) = 0;
  *(undefined8 *)((longlong)param_1 + 0x174) = 0;
  *(undefined8 *)((longlong)param_1 + 0x17c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x184) = 0;
  FUN_14539f140(param_1 + 0x31);
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = param_3;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  *(undefined4 *)(param_1 + 0x3e) = 0;
  iVar3 = DAT_14c72f2d0;
  bVar5 = (param_4 & 1) << 6 | 0x10;
  DAT_14c72f2d0 = DAT_14c72f2d0 + 1;
  *(byte *)((longlong)param_1 + 0x209) = *(byte *)((longlong)param_1 + 0x209) & 0xfc;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  *(byte *)(param_1 + 0x41) = bVar5;
  *(int *)((longlong)param_1 + 500) = iVar3;
  *(undefined8 *)((longlong)param_1 + 0x20c) = 0x3f7fc105;
  param_1[0x2a] = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  if ((*(uint *)(param_3 + 0x98) & 0xe0000) == 0) {
    if (*(longlong *)(param_3 + 0x80) == 0) {
      if (*(longlong *)(param_3 + 0x78) == 0) {
        cVar4 = '\0';
      }
      else {
        cVar4 = FUN_1450e93b0();
      }
    }
    else {
      cVar4 = FUN_1450e93b0();
    }
  }
  else {
    cVar4 = '\x01';
  }
  lVar2 = param_1[1];
  *(byte *)(param_1 + 0x41) = cVar4 << 7 | bVar5;
  uVar1 = *(uint *)(lVar2 + 0x60);
  if ((uVar1 < 2) && (*(char *)(lVar2 + 100) != '\0')) {
    *(uint *)(lVar2 + 0x60) = uVar1 + 1;
    if ((1 < uVar1 + 1) || (*(char *)(lVar2 + 100) == '\0')) {
      FUN_145355090();
    }
  }
  else {
    *(uint *)(lVar2 + 0x60) = uVar1 + 1;
  }
  LOCK();
  *(int *)(param_3 + 0x24) = *(int *)(param_3 + 0x24) + 1;
  UNLOCK();
  *(undefined4 *)((longlong)param_1 + 0x174) = 0x42ca0000;
  return param_1;
}



// FUNCTION 1450e6450 FUN_1450e6450 body=463 status=ok
// SIG undefined FUN_1450e6450(void)

void FUN_1450e6450(longlong *param_1)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 local_res8;
  
  *param_1 = (longlong)&PTR_LAB_149c28f28;
  param_1[0xd] = (longlong)&PTR_LAB_149c28fb8;
  FUN_1450e6f80(param_1,1);
  if (*(code **)(*param_1 + 0x38) == FUN_1450e8680) {
    uVar1 = 1;
  }
  else {
    uVar1 = (**(code **)(*param_1 + 0x38))(param_1);
  }
  if (*(code **)(*param_1 + 0x30) == FUN_1450e8660) {
    local_res8 = 0x7ffffe3fffe60bd;
    puVar2 = &local_res8;
  }
  else {
    puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x30))(param_1,&local_res8);
  }
  FUN_145073fe0(param_1,puVar2,uVar1);
  FUN_145353380();
  if ((void *)param_1[0x35] != (void *)0x0) {
    *(undefined4 *)(param_1 + 0x36) = 0;
    AK::MemoryMgr::Free(0,(void *)param_1[0x35]);
    param_1[0x35] = 0;
    *(undefined4 *)((longlong)param_1 + 0x1b4) = 0;
  }
  if ((void *)param_1[0x37] != (void *)0x0) {
    *(undefined4 *)(param_1 + 0x38) = 0;
    AK::MemoryMgr::Free(0,(void *)param_1[0x37]);
    param_1[0x37] = 0;
    *(undefined4 *)((longlong)param_1 + 0x1c4) = 0;
  }
  puVar2 = (undefined8 *)param_1[0x3f];
  if (puVar2 != (undefined8 *)0x0) {
    puVar3 = puVar2 + (ulonglong)*(uint *)(param_1 + 0x40) * 0x11;
    for (; puVar2 != puVar3; puVar2 = puVar2 + 0x11) {
      (**(code **)*puVar2)(puVar2,0);
    }
    *(undefined4 *)(param_1 + 0x40) = 0;
    AK::MemoryMgr::Free(0,(void *)param_1[0x3f]);
    param_1[0x3f] = 0;
    *(undefined4 *)((longlong)param_1 + 0x204) = 0;
  }
  if ((void *)param_1[0x3c] != (void *)0x0) {
    *(undefined4 *)(param_1 + 0x3d) = 0;
    AK::MemoryMgr::Free(0,(void *)param_1[0x3c]);
    param_1[0x3c] = 0;
    *(undefined4 *)((longlong)param_1 + 0x1ec) = 0;
  }
  FUN_14539f150();
  if ((void *)param_1[0x1e] != (void *)0x0) {
    *(undefined4 *)(param_1 + 0x1f) = 0;
    AK::MemoryMgr::Free(0,(void *)param_1[0x1e]);
    param_1[0x1e] = 0;
    *(undefined4 *)((longlong)param_1 + 0xfc) = 0;
  }
  FUN_14538e8e0(param_1 + 0xf);
  param_1[0xd] = (longlong)&PTR_FUN_1499d1820;
  FUN_145073d80(param_1);
  return;
}



// FUNCTION 1450e6620 FUN_1450e6620 body=364 status=ok
// SIG undefined FUN_1450e6620(void)

ulonglong FUN_1450e6620(longlong *param_1,undefined4 param_2,undefined8 param_3,char param_4,
                       undefined4 *param_5,undefined8 param_6,undefined8 param_7)

{
  bool bVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  float fVar6;
  
  *(undefined4 *)(param_1 + 0x3e) = param_2;
  uVar5 = 1;
  FUN_1450e8ab0();
  lVar3 = FUN_14507bcb0(param_1 + 0x31);
  if (lVar3 != 0) {
    uVar4 = FUN_1450e8c70(param_1,lVar3);
    uVar5 = uVar4 & 0xffffffff;
    if ((int)uVar4 != 1) {
      return uVar4;
    }
  }
  if (param_1[0x39] != 0) {
    uVar2 = FUN_1450e8710(param_1,param_3,0);
    uVar5 = (ulonglong)uVar2;
  }
  if ((*(byte *)(param_1 + 0x41) & 1) == 0) {
    (**(code **)(*param_1 + 0x68))(param_1,param_6);
  }
  else {
    (**(code **)(*param_1 + 0x70))(param_1);
    if ((*(byte *)(param_1 + 0x41) & 0x10) != 0) {
      (**(code **)(*param_1 + 0x78))(param_1);
    }
  }
  fVar6 = *(float *)(param_1 + 0x11) * 0.05;
  if ((fVar6 < -37.0) || (37.0 < fVar6)) {
    fVar6 = 0.0;
  }
  else {
    uVar2 = (uint)(longlong)(fVar6 * 27866352.0 + 1.0653532e+09);
    fVar6 = (float)((uVar2 & 0x7fffff) + 0x3f800000);
    fVar6 = ((fVar6 * 0.32518977 + 0.020805772) * fVar6 + 0.65304345) * (float)(uVar2 & 0xff800000);
  }
  bVar1 = fVar6 * *(float *)(param_1 + 0x20) <= DAT_14c72f440;
  *(bool *)param_7 = bVar1;
  if (((((int)uVar5 == 1) && (param_4 == '\0')) && (bVar1)) &&
     ((*(byte *)(param_1 + 0x41) & 0x40) == 0)) {
    uVar5 = 3;
    *param_5 = 0x29;
  }
  return uVar5;
}



// FUNCTION 1450e6790 FUN_1450e6790 body=136 status=ok
// SIG undefined FUN_1450e6790(void)

void FUN_1450e6790(longlong *param_1)

{
  longlong lVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 local_res8 [8];
  
  lVar1 = *(longlong *)(param_1[0x3a] + 0x70);
  if (lVar1 != 0) {
    if (*(longlong *)(lVar1 + 0x18) == 0) {
      *(longlong **)(lVar1 + 0x18) = param_1;
      param_1[0xe] = 0;
    }
    else {
      param_1[0xe] = *(longlong *)(lVar1 + 0x18);
      *(longlong **)(lVar1 + 0x18) = param_1;
    }
  }
  lVar1 = param_1[0x3a];
  uVar2 = (**(code **)(*param_1 + 0x38))(param_1);
  uVar3 = (**(code **)(*param_1 + 0x30))(param_1,local_res8);
  FUN_145073eb0(param_1,lVar1,uVar3,uVar2);
  FUN_1450e8db0(param_1);
  return;
}



// FUNCTION 1450e6820 FUN_1450e6820 body=398 status=ok
// SIG undefined FUN_1450e6820(void)

void FUN_1450e6820(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  bool bVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined8 local_res8;
  
  if (*(longlong **)(param_1 + 0x1d8) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x1d8) + 0x10))();
    plVar3 = *(longlong **)(param_1 + 0x1d8);
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 8))(plVar3,0);
      AK::MemoryMgr::Free(0,plVar3);
    }
    *(undefined8 *)(param_1 + 0x1d8) = 0;
  }
  if (*(longlong *)(param_1 + 0x150) != 0) {
    if ((*(uint *)(*(longlong *)(param_1 + 0x150) + 0x28) >> 1 & 1) != 0) {
      puVar7 = (undefined4 *)FUN_1450d7310();
      if (puVar7 != (undefined4 *)0x0) {
        puVar4 = *(undefined8 **)(puVar7 + 2);
        if (puVar4 != (undefined8 *)0x0) {
          if (*(short *)(puVar4 + 2) == 1) {
            if ((void *)*puVar4 != (void *)0x0) {
              *(undefined4 *)(puVar4 + 1) = 0;
              AK::MemoryMgr::Free(0,(void *)*puVar4);
              *puVar4 = 0;
              *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
            }
            AK::MemoryMgr::Free(0,puVar4);
          }
          else {
            *(short *)(puVar4 + 2) = *(short *)(puVar4 + 2) + -1;
          }
        }
        *(undefined8 *)(puVar7 + 2) = 0;
        *puVar7 = 0;
      }
    }
    FUN_1450b41a0(DAT_14c790fd0,*(undefined8 *)(param_1 + 0x150),param_1);
    *(undefined8 *)(param_1 + 0x150) = 0;
    *(undefined4 *)(param_1 + 0x158) = 0;
  }
  local_res8 = 0xffffffffffffffff;
  FUN_145073fe0(param_1,&local_res8,1);
  FUN_1450e8b40(param_1);
  puVar4 = *(undefined8 **)(param_1 + 8);
  if ((*(uint *)(puVar4 + 0xc) < 2) && (*(char *)((longlong)puVar4 + 100) != '\0')) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  uVar8 = *(uint *)(puVar4 + 0xc) - 1;
  *(uint *)(puVar4 + 0xc) = uVar8;
  if ((uVar8 == 0) || (((bVar6 && (uVar8 < 2)) && (*(char *)((longlong)puVar4 + 100) != '\0')))) {
    FUN_1453550a0(puVar4);
  }
  if (*(int *)(puVar4 + 0xc) == 0) {
    (**(code **)*puVar4)(puVar4,0);
    AK::MemoryMgr::Free(4,puVar4);
  }
  lVar5 = *(longlong *)(param_1 + 0x1d0);
  LOCK();
  piVar1 = (int *)(lVar5 + 0x24);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 == 1) {
    (**(code **)(*(longlong *)(lVar5 + 0x10) + 0x18))();
  }
  return;
}



// FUNCTION 1450e69d0 FUN_1450e69d0 body=30 status=ok
// SIG undefined FUN_1450e69d0(void)

void FUN_1450e69d0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FUN_14538e3e0(*(longlong *)(param_1 + 0x78),0);
    return;
  }
  *(undefined4 *)(param_1 + 0x80) = 0;
  return;
}



// FUNCTION 1450e6a40 FUN_1450e6a40 body=125 status=ok
// SIG undefined FUN_1450e6a40(void)

undefined8 FUN_1450e6a40(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_1450d2460(*(undefined8 *)(param_1 + 8));
  lVar2 = FUN_1450ab680(uVar1,param_2);
  if (lVar2 != 0) {
    lVar2 = FUN_145077820(param_2);
    if (lVar2 != 0) {
      uVar1 = *(undefined8 *)(lVar2 + 0x68);
      *param_3 = *(undefined8 *)(lVar2 + 0x60);
      param_3[1] = uVar1;
      uVar1 = *(undefined8 *)(lVar2 + 0x78);
      param_3[2] = *(undefined8 *)(lVar2 + 0x70);
      param_3[3] = uVar1;
      uVar1 = *(undefined8 *)(lVar2 + 0x88);
      param_3[4] = *(undefined8 *)(lVar2 + 0x80);
      param_3[5] = uVar1;
      param_3[6] = *(undefined8 *)(lVar2 + 0x90);
      return 1;
    }
  }
  return 2;
}



// FUNCTION 1450e6ac0 FUN_1450e6ac0 body=136 status=ok
// SIG undefined FUN_1450e6ac0(void)

undefined8 FUN_1450e6ac0(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  uVar2 = FUN_1450d2460(*(undefined8 *)(param_1 + 8));
  lVar3 = FUN_1450ab680(uVar2,param_2);
  if (lVar3 != 0) {
    lVar3 = FUN_145077820(param_2);
    if (lVar3 != 0) {
      lVar3 = FUN_14507ab70(lVar3);
      if ((lVar3 != 0) && (*(short *)(*(longlong *)(lVar3 + 8) + 0x38) != 0)) {
        puVar1 = *(undefined8 **)(*(longlong *)(lVar3 + 8) + 0x20);
        uVar2 = puVar1[1];
        *param_3 = *puVar1;
        param_3[1] = uVar2;
        uVar2 = puVar1[3];
        param_3[2] = puVar1[2];
        param_3[3] = uVar2;
        uVar2 = puVar1[5];
        param_3[4] = puVar1[4];
        param_3[5] = uVar2;
        return 1;
      }
    }
  }
  return 2;
}



// FUNCTION 1450e6b50 FUN_1450e6b50 body=563 status=ok
// SIG undefined FUN_1450e6b50(void)

void FUN_1450e6b50(longlong param_1,float param_2,int param_3)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  float fVar4;
  
  if ((*(byte *)(param_1 + 0x208) & 0x40) != 0) {
    return;
  }
  switch(param_3) {
  case 0x12:
    *(float *)(param_1 + 0x160) = param_2 + *(float *)(param_1 + 0x160);
    break;
  case 0x13:
    *(float *)(param_1 + 0x164) = param_2 + *(float *)(param_1 + 0x164);
    break;
  case 0x14:
    lVar1 = *(longlong *)(param_1 + 0x1c8);
    if (lVar1 != 0) {
      fVar4 = (float)FUN_1450e8bd0(param_1);
      *(float *)(lVar1 + 4) = fVar4 + *(float *)(lVar1 + 4);
    }
    break;
  case 0x15:
    lVar1 = *(longlong *)(param_1 + 0x1c8);
    if (lVar1 != 0) {
      fVar4 = (float)FUN_1450e8bd0(param_1);
      *(float *)(lVar1 + 0xc) = fVar4 + *(float *)(lVar1 + 0xc);
    }
    break;
  case 0x16:
    lVar1 = *(longlong *)(param_1 + 0x1c8);
    if (lVar1 != 0) {
      fVar4 = (float)FUN_1450e8bd0(param_1);
      *(float *)(lVar1 + 8) = fVar4 + *(float *)(lVar1 + 8);
    }
    break;
  case 0x17:
    *(float *)(param_1 + 0x188) = param_2;
    break;
  case 0x18:
    *(float *)(param_1 + 0x16c) = param_2;
    break;
  default:
    goto switchD_1450e6ba5_caseD_19;
  case 0x1a:
    *(float *)(param_1 + 400) = param_2;
    goto switchD_1450e6ba5_caseD_19;
  case 0x1b:
    *(float *)(param_1 + 0x194) = param_2;
    goto switchD_1450e6ba5_caseD_19;
  case 0x1c:
    *(float *)(param_1 + 0x198) = param_2;
    goto switchD_1450e6ba5_caseD_19;
  case 0x2e:
    if (param_2 == 0.0) {
      bVar2 = 0;
    }
    else {
      bVar2 = 0x40;
    }
    *(byte *)(param_1 + 0x19c) = *(byte *)(param_1 + 0x19c) & 0xbf | bVar2;
    goto switchD_1450e6ba5_caseD_19;
  case 0x3a:
    *(float *)(param_1 + 0x168) = param_2 + *(float *)(param_1 + 0x168);
    break;
  case 0x40:
    *(byte *)(param_1 + 0x170) =
         ((byte)(int)param_2 ^ *(byte *)(param_1 + 0x170)) & 7 ^ *(byte *)(param_1 + 0x170);
    break;
  case 0x41:
    if (param_2 == 0.0) {
      bVar2 = 0;
    }
    else {
      bVar2 = 0x80;
    }
    *(byte *)(param_1 + 0x19c) = *(byte *)(param_1 + 0x19c) & 0x7f | bVar2;
    goto switchD_1450e6ba5_caseD_19;
  case 0x45:
    bVar2 = 0;
    if (0.0 < param_2) {
      bVar2 = 8;
    }
    *(byte *)(param_1 + 0x170) = bVar2 | *(byte *)(param_1 + 0x170) & 0xf7;
    break;
  case 0x46:
    FUN_1450e8b40();
switchD_1450e6ba5_caseD_19:
    lVar1 = *(longlong *)(param_1 + 0x1c8);
    if (lVar1 != 0) {
      if (param_3 == 0x42) {
        uVar3 = 0;
        if (param_2 != 0.0) {
          uVar3 = 0x80000000;
        }
        *(uint *)(lVar1 + 0x30) = *(uint *)(lVar1 + 0x30) & 0x7fffffff | uVar3;
      }
      else if (param_3 == 0x43) {
        FUN_14539f210(lVar1,(int)param_2);
      }
      else if (param_3 == 0x44) {
        *(int *)(lVar1 + 0x10) = (int)param_2;
      }
    }
  }
  return;
}



// FUNCTION 1450e6e00 FUN_1450e6e00 body=178 status=ok
// SIG undefined FUN_1450e6e00(void)

undefined4 FUN_1450e6e00(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 local_res8 [4];
  undefined4 local_res18 [4];
  
  if ((*(byte *)(param_1 + 0x19c) & 0x40) != 0) {
    lVar2 = FUN_14507bcb0(param_1 + 0x188);
    if ((lVar2 != 0) && (*(byte *)(lVar2 + 0x1fd) != 0xff)) {
      lVar3 = (ulonglong)*(byte *)(lVar2 + 0x1fd) + 2;
      lVar1 = lVar2 + lVar3 * 0x18;
      if ((*(longlong *)(lVar2 + lVar3 * 0x18) != 0) && (lVar1 != 0)) {
        local_res8[0] = *(undefined4 *)(lVar1 + 0x10);
        local_res18[0] = 0;
        FUN_1450737c0(lVar1,param_2,local_res8,local_res18);
        *(undefined4 *)(lVar1 + 0x10) = local_res8[0];
        return local_res18[0];
      }
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1450e6ec0 FUN_1450e6ec0 body=178 status=ok
// SIG undefined FUN_1450e6ec0(void)

undefined4 FUN_1450e6ec0(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 local_res8 [4];
  undefined4 local_res18 [4];
  
  if ((*(byte *)(param_1 + 0x19c) & 0x40) != 0) {
    lVar2 = FUN_14507bcb0(param_1 + 0x188);
    if ((lVar2 != 0) && (*(byte *)(lVar2 + 0x1fe) != 0xff)) {
      lVar3 = (ulonglong)*(byte *)(lVar2 + 0x1fe) + 2;
      lVar1 = lVar2 + lVar3 * 0x18;
      if ((*(longlong *)(lVar2 + lVar3 * 0x18) != 0) && (lVar1 != 0)) {
        local_res8[0] = *(undefined4 *)(lVar1 + 0x10);
        local_res18[0] = 0;
        FUN_1450737c0(lVar1,param_2,local_res8,local_res18);
        *(undefined4 *)(lVar1 + 0x10) = local_res8[0];
        return local_res18[0];
      }
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1450e6f80 FUN_1450e6f80 body=166 status=ok
// SIG undefined FUN_1450e6f80(void)

void FUN_1450e6f80(longlong param_1,char param_2)

{
  undefined8 *puVar1;
  char local_res10 [8];
  
  puVar1 = *(undefined8 **)(param_1 + 0x1e0);
  local_res10[0] = '\x01';
  if (puVar1 != puVar1 + (ulonglong)*(uint *)(param_1 + 0x1e8) * 3) {
    do {
      FUN_145352f50(param_1 + 0x58,puVar1[2],local_res10);
      if (local_res10[0] == '\0') {
        FUN_1453532d0(param_1,*puVar1);
      }
      puVar1 = puVar1 + 3;
    } while (puVar1 != (undefined8 *)
                       (*(longlong *)(param_1 + 0x1e0) +
                       (ulonglong)*(uint *)(param_1 + 0x1e8) * 0x18));
  }
  if (param_2 != '\0') {
    *(undefined4 *)(param_1 + 0x1e8) = 0;
  }
  return;
}



// FUNCTION 1450e7030 FUN_1450e7030 body=230 status=ok
// SIG undefined FUN_1450e7030(void)

void FUN_1450e7030(longlong param_1,longlong *param_2,longlong *param_3,int param_4,float *param_5)

{
  longlong *plVar1;
  float fVar2;
  undefined4 uStackX_14;
  
  if (((longlong *)*param_2 != param_3) && (*(int *)(*(longlong *)*param_2 + 8) == param_4)) {
    *param_5 = 0.0;
    do {
      fVar2 = (float)FUN_1450800b0(g_pGameSyncMgr,*(undefined8 *)*param_2,param_1 + 8);
      *param_5 = fVar2 + *param_5;
      FUN_145352ee0(param_1 + 0x1e0,*(undefined8 *)*param_2);
      FUN_145352ee0(param_1 + 0x58,*(undefined8 *)*param_2);
      uStackX_14 = CONCAT31(uStackX_14._1_3_,
                            *(undefined1 *)((longlong)*(undefined4 **)*param_2 + 0xd));
      FUN_145353180(param_1,CONCAT44(uStackX_14,**(undefined4 **)*param_2));
      plVar1 = (longlong *)(*param_2 + 8);
      *param_2 = (longlong)plVar1;
      if (plVar1 == param_3) {
        return;
      }
    } while (*(int *)(*plVar1 + 8) == param_4);
  }
  return;
}



// FUNCTION 1450e7120 FUN_1450e7120 body=126 status=ok
// SIG undefined FUN_1450e7120(void)

undefined8 FUN_1450e7120(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  int *piVar3;
  longlong lVar4;
  
  if ((*(byte *)(param_1 + 0x14a) & 1) != 0) {
    return 1;
  }
  lVar4 = 0;
  piVar3 = (int *)(param_1 + 0x104);
  do {
    if (*piVar3 != 0) {
      return 1;
    }
    lVar4 = lVar4 + 1;
    piVar3 = piVar3 + 1;
  } while (lVar4 < 4);
  plVar1 = *(longlong **)(param_1 + 0x1d8);
  if ((plVar1 != (longlong *)0x0) &&
     (lVar4 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x38), lVar4 != 0)) {
    if (*(char *)(lVar4 + 0xce) != '\0') {
      cVar2 = (**(code **)(*plVar1 + 0x28))(plVar1);
      if (cVar2 != '\0') {
        return 1;
      }
      if ((0.0 < *(float *)(lVar4 + 100)) && (*(int *)(lVar4 + 0x60) != 0)) {
        return 1;
      }
    }
    if (*(int *)(lVar4 + 0x38) != 0) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1450e71a0 FUN_1450e71a0 body=39 status=ok
// SIG undefined FUN_1450e71a0(void)

bool FUN_1450e71a0(longlong param_1)

{
  char cVar1;
  
  if (*(longlong **)(param_1 + 0x1d8) != (longlong *)0x0) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x1d8) + 0x40))();
    return cVar1 == '\0';
  }
  return true;
}



// FUNCTION 1450e71d0 FUN_1450e71d0 body=11 status=ok
// SIG undefined FUN_1450e71d0(void)

undefined4 FUN_1450e71d0(longlong param_1)

{
  return *(undefined4 *)(*(longlong *)(param_1 + 0x1d0) + 0x20);
}



// FUNCTION 1450e71e0 FUN_1450e71e0 body=29 status=ok
// SIG undefined FUN_1450e71e0(void)

undefined8 FUN_1450e71e0(longlong param_1)

{
  undefined8 uVar1;
  
  if ((*(byte *)(param_1 + 0x208) & 0x40) != 0) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x0001450e71f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x1d0) + 0x100))();
  return uVar1;
}



// FUNCTION 1450e7200 FUN_1450e7200 body=2669 status=ok
// SIG undefined FUN_1450e7200(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_1450e7200(longlong *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  ushort uVar8;
  undefined4 uVar9;
  double dVar10;
  undefined8 uVar11;
  code *pcVar12;
  undefined1 auVar13 [16];
  undefined4 uVar14;
  undefined4 uVar15;
  undefined8 uVar16;
  char cVar17;
  longlong lVar18;
  undefined8 *puVar19;
  ulonglong uVar20;
  undefined8 *puVar21;
  longlong lVar22;
  longlong lVar23;
  double *pdVar24;
  double *pdVar25;
  float *pfVar26;
  longlong *plVar27;
  longlong lVar28;
  int iVar29;
  undefined8 *puVar30;
  longlong *plVar31;
  double *pdVar32;
  undefined1 *puVar33;
  undefined8 *puVar34;
  uint uVar35;
  uint uVar36;
  longlong *plVar37;
  ulonglong uVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  undefined8 uStack_140;
  undefined1 auStack_138 [32];
  float local_118 [2];
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100 [24];
  
  if ((*(byte *)(param_1 + 0x41) & 0x20) != 0) {
    uStack_140 = 0x1450e726d;
    FUN_1450e8b40();
    *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xdf;
    uStack_140 = 0x1450e727d;
    FUN_1450e8ab0(param_1);
    if ((param_1[0x39] != 0) && (param_1[0x2a] == 0)) {
      uStack_140 = 0x1450e729e;
      FUN_1450e8710(param_1,0,1);
    }
    uStack_140 = 0x1450e72aa;
    lVar18 = FUN_14507bcb0(param_1 + 0x31);
    if (lVar18 != 0) {
      uStack_140 = 0x1450e72ba;
      FUN_1450e8c70(param_1,lVar18);
    }
  }
  puVar30 = (undefined8 *)0x0;
  fVar44 = 1e+10;
  if ((*(byte *)((longlong)param_1 + 0x19c) & 7) == 2) {
    uStack_140 = 0x1450e75c3;
    lVar18 = FUN_1450d2460(param_1[1]);
    uStack_140 = 0x1450e75dc;
    cVar17 = FUN_1450e5f60(param_1 + 0x35,*(undefined4 *)(lVar18 + 0x18));
    if (cVar17 == '\0') {
      return 0;
    }
    plVar31 = *(longlong **)(lVar18 + 0x10);
    puVar34 = (undefined8 *)param_1[0x35];
    uVar36 = 0;
    puVar33 = auStack_138;
    fVar39 = 1e+10;
    if (plVar31 != plVar31 + *(uint *)(lVar18 + 0x18)) {
      do {
        lVar23 = *plVar31;
        uStack_140 = 0x1450e7620;
        lVar22 = FUN_145077820(lVar23);
        uVar35 = (uint)puVar30;
        if (lVar22 != 0) {
          local_110 = 0;
          uStack_108 = 0x42c8000000000000;
          lVar28 = *(longlong *)(param_1[1] + 8);
          plVar27 = *(longlong **)(lVar28 + 0x28);
          plVar37 = plVar27 + (ulonglong)*(uint *)(lVar28 + 0x30) * 3;
          for (; (plVar27 != plVar37 && (*plVar27 != lVar23)); plVar27 = plVar27 + 3) {
          }
          plVar37 = plVar27 + 1;
          if (plVar27 ==
              (longlong *)
              (*(longlong *)(lVar28 + 0x28) + (ulonglong)*(uint *)(lVar28 + 0x30) * 0x18)) {
            plVar37 = (longlong *)0x0;
          }
          if ((plVar37 != (longlong *)0x0) && (uVar35 = *(uint *)(plVar37 + 1), uVar35 != 0)) {
            if (1 < uVar35) {
              uVar35 = 1;
            }
            uStack_140 = 0x1450e76d8;
            memcpy(&local_110,(void *)*plVar37,(ulonglong)uVar35 << 4);
            if (uVar35 == 0) {
              local_110 = *(longlong *)(*plVar37 + 0xffffffff0);
              uStack_108 = *(undefined8 *)(*plVar37 + 0xffffffff8);
              puVar30 = &local_110;
              puVar19 = local_100;
              for (lVar28 = 0; lVar28 != 0; lVar28 = lVar28 + -1) {
                *puVar19 = *puVar30;
                puVar30 = puVar30 + 1;
                puVar19 = puVar19 + 1;
              }
            }
          }
          uVar11 = *(undefined8 *)(lVar22 + 0x68);
          *puVar34 = *(undefined8 *)(lVar22 + 0x60);
          puVar34[1] = uVar11;
          uVar11 = *(undefined8 *)(lVar22 + 0x78);
          puVar34[2] = *(undefined8 *)(lVar22 + 0x70);
          puVar34[3] = uVar11;
          uVar11 = *(undefined8 *)(lVar22 + 0x80);
          uVar16 = *(undefined8 *)(lVar22 + 0x88);
          *(undefined4 *)((longlong)puVar34 + 100) = 0xffffffff;
          puVar34[4] = uVar11;
          puVar34[5] = uVar16;
          puVar34[10] = 0;
          puVar34[0xe] = lVar23;
          *(uint *)(puVar34 + 0xd) = uVar36;
          *(float *)(puVar34 + 9) = (float)local_110 * 100.0;
          *(float *)((longlong)puVar34 + 0x4c) = local_110._4_4_ * 100.0;
          *(float *)(puVar34 + 0xb) = (float)uStack_108;
          *(undefined4 *)((longlong)puVar34 + 0x5c) = uStack_108._4_4_;
          uVar35 = uVar36;
        }
        uVar36 = uVar35 + 1;
        puVar30 = (undefined8 *)(ulonglong)uVar36;
        plVar31 = plVar31 + 1;
        puVar34 = puVar34 + 0x12;
        puVar33 = auStack_138;
        fVar39 = 1e+10;
      } while (plVar31 !=
               (longlong *)(*(longlong *)(lVar18 + 0x10) + (ulonglong)*(uint *)(lVar18 + 0x18) * 8))
      ;
    }
  }
  else if ((char)*(byte *)((longlong)param_1 + 0x19c) < '\0') {
    if ((*(byte *)(param_1 + 0x41) & 8) == 0) {
      plVar31 = param_1 + 0x37;
      uVar8 = *(ushort *)(*(longlong *)(param_1[1] + 8) + 0x38);
      uVar38 = (ulonglong)uVar8;
      if (*(uint *)((longlong)param_1 + 0x1c4) < (uint)uVar8) {
        uStack_140 = 0x1450e7347;
        cVar17 = FUN_1450e90e0(plVar31,(uint)uVar8 - *(uint *)((longlong)param_1 + 0x1c4));
        if (cVar17 == '\0') {
          return 0;
        }
      }
      puVar34 = *(undefined8 **)(*(longlong *)(param_1[1] + 8) + 0x20);
      if (uVar8 != 0) {
        do {
          uVar36 = *(uint *)(param_1 + 0x38);
          uVar35 = *(uint *)((longlong)param_1 + 0x1c4);
          puVar19 = puVar30;
          if (uVar36 < uVar35) {
LAB_1450e7392:
            if (uVar36 < *(uint *)((longlong)param_1 + 0x1c4)) {
              uVar36 = *(uint *)(param_1 + 0x38);
              *(uint *)(param_1 + 0x38) = uVar36 + 1;
              puVar19 = (undefined8 *)((ulonglong)uVar36 * 0x40 + *plVar31);
            }
          }
          else {
            iVar29 = (uVar35 >> 1) + uVar35;
            if (uVar35 == 0) {
              iVar29 = 1;
            }
            uStack_140 = 0x1450e738e;
            cVar17 = FUN_1450e90e0(plVar31,iVar29);
            if (cVar17 != '\0') goto LAB_1450e7392;
          }
          uVar11 = puVar34[1];
          *puVar19 = *puVar34;
          puVar19[1] = uVar11;
          uVar11 = puVar34[3];
          puVar19[2] = puVar34[2];
          puVar19[3] = uVar11;
          uVar9 = *(undefined4 *)((longlong)puVar34 + 0x24);
          uVar14 = *(undefined4 *)(puVar34 + 5);
          uVar15 = *(undefined4 *)((longlong)puVar34 + 0x2c);
          *(undefined4 *)(puVar19 + 4) = *(undefined4 *)(puVar34 + 4);
          *(undefined4 *)((longlong)puVar19 + 0x24) = uVar9;
          *(undefined4 *)(puVar19 + 5) = uVar14;
          *(undefined4 *)((longlong)puVar19 + 0x2c) = uVar15;
          puVar21 = puVar34 + 6;
          uVar11 = puVar34[7];
          puVar34 = puVar34 + 8;
          puVar19[6] = *puVar21;
          puVar19[7] = uVar11;
          uVar38 = uVar38 - 1;
        } while (uVar38 != 0);
      }
      *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) | 8;
    }
    uVar36 = *(uint *)(param_1 + 0x38);
    uStack_140 = 0x1450e73fa;
    lVar18 = FUN_1450d2460(param_1[1]);
    uStack_140 = 0x1450e7413;
    local_110 = lVar18;
    cVar17 = FUN_1450e5f60(param_1 + 0x35,uVar36 * *(int *)(lVar18 + 0x18));
    if (cVar17 == '\0') {
      return 0;
    }
    puVar30 = (undefined8 *)param_1[0x35];
    uVar20 = (ulonglong)uVar36 * 0x10;
    uVar38 = uVar20 + 0xf;
    if (uVar38 <= uVar20) {
      uVar38 = 0xffffffffffffff0;
    }
    uStack_140 = 0x1450e744e;
    puVar34 = *(undefined8 **)(lVar18 + 0x10);
    lVar23 = -(uVar38 & 0xfffffffffffffff0);
    puVar33 = auStack_138 + lVar23;
    fVar39 = 1e+10;
    if (puVar34 != puVar34 + *(uint *)(lVar18 + 0x18)) {
      do {
        uVar38 = 0;
        uVar11 = *puVar34;
        *(undefined8 *)(auStack_138 + lVar23 + -8) = 0x1450e7489;
        lVar18 = FUN_145077820(uVar11);
        if (lVar18 != 0) {
          lVar22 = *(longlong *)(param_1[1] + 8);
          uVar11 = *(undefined8 *)(*(longlong *)(lVar18 + 8) + 0x58);
          *(undefined8 *)(auStack_138 + lVar23 + -8) = 0x1450e74b8;
          FUN_1450e5ce0(lVar22 + 0x20,uVar11,uVar36,(longlong)local_118 + lVar23);
          puVar19 = (undefined8 *)param_1[0x37];
          puVar21 = puVar19 + (ulonglong)uVar36 * 8;
          for (; puVar19 != puVar21; puVar19 = puVar19 + 8) {
            uVar16 = puVar19[1];
            uVar9 = *(undefined4 *)(puVar19 + 6);
            uVar11 = *(undefined8 *)(*(longlong *)(lVar18 + 8) + 0x58);
            *puVar30 = *puVar19;
            puVar30[1] = uVar16;
            uVar16 = puVar19[3];
            pfVar26 = (float *)(uVar38 * 0x10 + (longlong)local_118 + lVar23);
            puVar30[2] = puVar19[2];
            puVar30[3] = uVar16;
            uVar16 = puVar19[5];
            puVar30[4] = puVar19[4];
            puVar30[5] = uVar16;
            *(float *)((longlong)puVar30 + 0x4c) = pfVar26[1] * 100.0;
            *(float *)(puVar30 + 9) = *pfVar26 * 100.0;
            *(float *)(puVar30 + 0xb) = pfVar26[2];
            *(float *)((longlong)puVar30 + 0x5c) = pfVar26[3];
            puVar30[10] = 0;
            *(undefined4 *)((longlong)puVar30 + 100) = uVar9;
            puVar30[0xe] = uVar11;
            *(int *)(puVar30 + 0xd) = (int)uVar38;
            uVar11 = *(undefined8 *)(param_1[1] + 8);
            *(undefined8 *)(auStack_138 + lVar23 + -8) = 0x1450e755e;
            fVar39 = (float)FUN_14507ae80(lVar18,uVar11,puVar30);
            if (fVar44 <= fVar39) {
              fVar39 = fVar44;
            }
            puVar30 = puVar30 + 0x12;
            uVar38 = (ulonglong)((int)uVar38 + 1);
            fVar44 = fVar39;
          }
        }
        puVar34 = puVar34 + 1;
        puVar33 = auStack_138 + lVar23;
        fVar39 = fVar44;
      } while (puVar34 !=
               (undefined8 *)
               (*(longlong *)(local_110 + 0x10) + (ulonglong)*(uint *)(local_110 + 0x18) * 8));
    }
  }
  else {
    uStack_140 = 0x1450e72eb;
    lVar18 = FUN_1450d3040(param_1[1]);
    puVar33 = auStack_138;
    fVar39 = 1e+10;
    if (lVar18 != 0) {
      uStack_140 = 0x1450e730a;
      fVar39 = (float)FUN_14539e990(lVar18,param_1 + 0x35,param_1[0x3b]);
      puVar33 = auStack_138;
    }
  }
  if (((byte)((*(byte *)((longlong)param_1 + 0x19c) & 7) - 1) < 2) &&
     (lVar18 = param_1[0x39], lVar18 != 0)) {
    lVar23 = param_1[0x2a];
    if (lVar23 != 0) {
      uVar36 = *(uint *)(lVar18 + 0x30);
      *(undefined8 *)(puVar33 + -8) = 0x1450e7800;
      FUN_1453900b0(lVar23,uVar36 >> 0x1f);
      if (((int)uVar36 < 0) && ((*(uint *)(param_1[0x2a] + 0x28) >> 1 & 1) != 0)) {
        *(undefined8 *)(puVar33 + -8) = 0x1450e781a;
        cVar17 = FUN_14538fd80();
        if (cVar17 != '\0') {
          *(undefined8 *)(puVar33 + -8) = 0x1450e7826;
          FUN_1450e8900(param_1);
        }
      }
    }
    pfVar26 = (float *)param_1[0x35];
    fVar44 = 1e+10;
    fVar39 = 1e+10;
    if (pfVar26 != pfVar26 + (ulonglong)*(uint *)(param_1 + 0x36) * 0x24) {
      pdVar32 = (double *)(pfVar26 + 8);
      fVar39 = 1e+10;
      do {
        dVar10 = pdVar32[10];
        *(undefined8 *)(puVar33 + -8) = 0x1450e7859;
        lVar23 = FUN_145077820(dVar10);
        fVar43 = fVar44;
        if (lVar23 != 0) {
          local_110 = *(longlong *)(lVar18 + 4);
          uStack_108 = CONCAT44(uStack_108._4_4_,*(undefined4 *)(lVar18 + 0xc));
          if ((*(byte *)((longlong)param_1 + 0x19c) & 7) == 2) {
            if (((*(byte *)((longlong)param_1 + 0x19d) & 1) == 0) ||
               (lVar22 = param_1[0x2a], lVar22 == 0)) {
              *(undefined8 *)pfVar26 = *(undefined8 *)(lVar23 + 0x60);
              pfVar26[2] = *(float *)(lVar23 + 0x68);
              *(undefined8 *)((longlong)pdVar32 + -0x14) = *(undefined8 *)(lVar23 + 0x6c);
              *(float *)((longlong)pdVar32 + -0xc) = *(float *)(lVar23 + 0x74);
              fVar39 = *(float *)(lVar18 + 8);
              fVar43 = *(float *)(lVar18 + 4);
              fVar1 = *(float *)(lVar18 + 0xc);
              fVar41 = fVar39 * *(float *)(lVar23 + 0x48) + fVar43 * *(float *)(lVar23 + 0x3c) +
                       fVar1 * *(float *)(lVar23 + 0x54);
              fVar40 = fVar1 * *(float *)(lVar23 + 0x58);
              fVar42 = fVar43 * *(float *)(lVar23 + 0x40) + fVar39 * *(float *)(lVar23 + 0x4c);
              fVar39 = fVar43 * *(float *)(lVar23 + 0x44) + fVar39 * *(float *)(lVar23 + 0x50) +
                       fVar1 * *(float *)(lVar23 + 0x5c);
LAB_1450e7a76:
              fVar43 = fVar42 + fVar40;
            }
            else {
              pdVar24 = *(double **)(lVar22 + 0x88);
              pdVar25 = pdVar24 + (ulonglong)*(uint *)(lVar22 + 0x90) * 6;
              for (; (pdVar24 != pdVar25 && (*pdVar24 != pdVar32[10])); pdVar24 = pdVar24 + 6) {
              }
              pdVar25 = pdVar24 + 1;
              if (pdVar24 ==
                  (double *)
                  ((ulonglong)*(uint *)(lVar22 + 0x90) * 0x30 + *(longlong *)(lVar22 + 0x88))) {
                pdVar25 = (double *)0x0;
              }
              if (pdVar25 != (double *)0x0) {
LAB_1450e7918:
                fVar39 = *(float *)(lVar18 + 8);
                fVar43 = *(float *)(lVar18 + 4);
                fVar1 = *(float *)(lVar18 + 0xc);
                fVar2 = *(float *)(pdVar25 + 1);
                fVar3 = *(float *)((longlong)pdVar25 + 0xc);
                fVar4 = *(float *)(pdVar25 + 2);
                fVar5 = *(float *)((longlong)pdVar25 + 0x14);
                fVar6 = *(float *)((longlong)pdVar25 + 0x1c);
                fVar41 = fVar43 * *(float *)pdVar25 + fVar39 * fVar3 +
                         fVar1 * *(float *)(pdVar25 + 3);
                fVar42 = fVar43 * *(float *)((longlong)pdVar25 + 4) + fVar39 * fVar4;
                fVar40 = fVar1 * fVar6;
                fVar7 = *(float *)(pdVar25 + 4);
                *pfVar26 = *(float *)(pdVar25 + 3);
                *(float *)((longlong)pdVar32 + -0x1c) = fVar6;
                fVar39 = fVar43 * fVar2 + fVar39 * fVar5 + fVar1 * fVar7;
                *(float *)(pdVar32 + -3) = fVar7;
                *(float *)((longlong)pdVar32 + -0x14) = fVar3;
                *(float *)(pdVar32 + -2) = fVar4;
                *(float *)((longlong)pdVar32 + -0xc) = fVar5;
                goto LAB_1450e7a76;
              }
              *(undefined8 *)(puVar33 + -8) = 0x1450e790c;
              pdVar25 = (double *)FUN_145390300(lVar22);
              if (pdVar25 != (double *)0x0) goto LAB_1450e7918;
              fVar39 = (float)uStack_108;
              fVar41 = (float)local_110;
              fVar43 = local_110._4_4_;
            }
            auVar13._8_4_ = SUB84((double)fVar43 + *pdVar32,0);
            auVar13._0_8_ = (double)fVar41 + pdVar32[-1];
            auVar13._12_4_ = (int)((ulonglong)((double)fVar43 + *pdVar32) >> 0x20);
            *(undefined1 (*) [16])(pdVar32 + -1) = auVar13;
            pdVar32[1] = (double)fVar39 + pdVar32[1];
            uVar11 = *(undefined8 *)(param_1[1] + 8);
            *(undefined8 *)(puVar33 + -8) = 0x1450e7ab5;
            fVar39 = (float)FUN_14507ae80(lVar23,uVar11,pfVar26);
            *(float *)((longlong)pdVar32 + 0x14) = *(float *)(pdVar32 + 3);
          }
          else {
            fVar39 = *(float *)((longlong)pdVar32 + -0x1c);
            fVar43 = *(float *)(pdVar32 + -2);
            fVar1 = *(float *)(pdVar32 + -3);
            fVar41 = *(float *)((longlong)pdVar32 + -0xc);
            fVar40 = *(float *)((longlong)pdVar32 + -0x14);
            fVar42 = *(float *)(lVar18 + 8);
            fVar2 = *(float *)(lVar18 + 4);
            fVar3 = *pfVar26;
            fVar4 = *(float *)(lVar18 + 0xc);
            pdVar32[-1] = (double)((fVar43 * fVar1 - fVar39 * fVar41) * fVar2 + fVar40 * fVar42 +
                                  fVar3 * fVar4) + pdVar32[-1];
            *pdVar32 = (double)((fVar3 * fVar41 - fVar1 * fVar40) * fVar2 + fVar43 * fVar42 +
                               fVar39 * fVar4) + *pdVar32;
            pdVar32[1] = (double)((fVar39 * fVar40 - fVar3 * fVar43) * fVar2 + fVar41 * fVar42 +
                                 fVar1 * fVar4) + pdVar32[1];
            uVar11 = *(undefined8 *)(param_1[1] + 8);
            *(undefined8 *)(puVar33 + -8) = 0x1450e7bb9;
            fVar39 = (float)FUN_14507ae80(lVar23,uVar11,pfVar26);
          }
          fVar43 = fVar39;
          if (fVar44 <= fVar39) {
            fVar39 = fVar44;
            fVar43 = fVar44;
          }
        }
        fVar44 = fVar43;
        pfVar26 = pfVar26 + 0x24;
        pdVar32 = pdVar32 + 0x12;
      } while (pfVar26 != (float *)((ulonglong)*(uint *)(param_1 + 0x36) * 0x90 + param_1[0x35]));
    }
  }
  *(undefined8 *)(puVar33 + -8) = 0x1450e7bfb;
  lVar18 = FUN_14507bcb0(param_1 + 0x31);
  if (lVar18 != 0) {
    pcVar12 = *(code **)(*param_1 + 0x88);
    *(undefined8 *)(puVar33 + -8) = 0x1450e7c13;
    (*pcVar12)(param_1,lVar18,fVar39);
  }
  return (int)param_1[0x36];
}



// FUNCTION 1450e7c70 FUN_1450e7c70 body=59 status=ok
// SIG undefined FUN_1450e7c70(void)

byte FUN_1450e7c70(longlong param_1)

{
  char cVar1;
  
  if (*(longlong **)(param_1 + 0x1d8) != (longlong *)0x0) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x1d8) + 0x30))();
    if (cVar1 != '\0') {
      return 2;
    }
  }
  return *(byte *)(*(longlong *)(*(longlong *)(param_1 + 8) + 8) + 0x3a) & 7;
}



// FUNCTION 1450e7cb0 FUN_1450e7cb0 body=40 status=ok
// SIG undefined FUN_1450e7cb0(void)

undefined8 FUN_1450e7cb0(longlong param_1)

{
  char cVar1;
  
  if (*(longlong **)(param_1 + 0x1d8) != (longlong *)0x0) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x1d8) + 0x30))();
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1450e7ce0 FUN_1450e7ce0 body=149 status=ok
// SIG undefined FUN_1450e7ce0(void)

undefined8 FUN_1450e7ce0(longlong param_1,uint param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_2;
  lVar3 = FUN_1450d3040(*(undefined8 *)(param_1 + 8));
  if ((lVar3 != 0) && (param_2 < *(uint *)(lVar3 + 0x28))) {
    lVar3 = *(longlong *)(lVar3 + 0x20);
    puVar1 = (undefined8 *)(lVar3 + uVar4 * 0x90);
    uVar2 = puVar1[1];
    *param_3 = *puVar1;
    param_3[1] = uVar2;
    puVar1 = (undefined8 *)(lVar3 + 0x10 + uVar4 * 0x90);
    uVar2 = puVar1[1];
    param_3[2] = *puVar1;
    param_3[3] = uVar2;
    puVar1 = (undefined8 *)(lVar3 + 0x20 + uVar4 * 0x90);
    uVar2 = puVar1[1];
    param_3[4] = *puVar1;
    param_3[5] = uVar2;
    puVar1 = (undefined8 *)(lVar3 + 0x30 + uVar4 * 0x90);
    uVar2 = puVar1[1];
    param_3[6] = *puVar1;
    param_3[7] = uVar2;
    puVar1 = (undefined8 *)(lVar3 + 0x40 + uVar4 * 0x90);
    uVar2 = puVar1[1];
    param_3[8] = *puVar1;
    param_3[9] = uVar2;
    puVar1 = (undefined8 *)(lVar3 + 0x50 + uVar4 * 0x90);
    uVar2 = puVar1[1];
    param_3[10] = *puVar1;
    param_3[0xb] = uVar2;
    puVar1 = (undefined8 *)(lVar3 + 0x60 + uVar4 * 0x90);
    uVar2 = puVar1[1];
    param_3[0xc] = *puVar1;
    param_3[0xd] = uVar2;
    param_3[0xe] = *(undefined8 *)(lVar3 + 0x70 + uVar4 * 0x90);
    return 1;
  }
  return 2;
}



// FUNCTION 1450e7d80 FUN_1450e7d80 body=160 status=ok
// SIG undefined FUN_1450e7d80(void)

int FUN_1450e7d80(longlong param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar5 = *(longlong *)(param_1 + 0x1a8);
  lVar6 = (ulonglong)*(uint *)(param_1 + 0x1b0) * 0x90 + lVar5;
  iVar3 = 0;
  do {
    if (lVar5 == lVar6) {
      return iVar3;
    }
    if (param_3 == 0) {
      lVar4 = FUN_1450ab680(param_2,*(undefined8 *)(lVar5 + 0x70));
      if (lVar4 != 0) goto LAB_1450e7e1c;
LAB_1450e7dd5:
      bVar2 = false;
    }
    else {
      if ((param_3 != 1) ||
         (lVar4 = FUN_1450ab680(param_2,*(undefined8 *)(lVar5 + 0x70)), lVar4 != 0))
      goto LAB_1450e7dd5;
LAB_1450e7e1c:
      bVar2 = true;
    }
    iVar1 = iVar3 + 1;
    if (!bVar2) {
      iVar1 = iVar3;
    }
    lVar5 = lVar5 + 0x90;
    iVar3 = iVar1;
  } while( true );
}



// FUNCTION 1450e7e20 FUN_1450e7e20 body=157 status=ok
// SIG undefined FUN_1450e7e20(void)

longlong FUN_1450e7e20(longlong param_1,undefined8 param_2,int param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x1a8);
  lVar3 = (ulonglong)*(uint *)(param_1 + 0x1b0) * 0x90 + lVar2;
  do {
    if (lVar2 == lVar3) {
      return 0;
    }
    if (param_3 == 0) {
      lVar1 = FUN_1450ab680(param_2,*(undefined8 *)(lVar2 + 0x70));
      if (lVar1 != 0) {
LAB_1450e7e89:
        if (param_4 == 0) {
          return lVar2;
        }
        param_4 = param_4 + -1;
      }
    }
    else if ((param_3 == 1) &&
            (lVar1 = FUN_1450ab680(param_2,*(undefined8 *)(lVar2 + 0x70)), lVar1 == 0))
    goto LAB_1450e7e89;
    lVar2 = lVar2 + 0x90;
  } while( true );
}



// FUNCTION 1450e7ec0 FUN_1450e7ec0 body=1267 status=ok
// SIG undefined FUN_1450e7ec0(void)

void FUN_1450e7ec0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  uint uVar7;
  float fVar8;
  uint uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  uint uVar12;
  int *piVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  float fVar16;
  float fVar17;
  undefined4 local_res8;
  undefined4 local_res18;
  undefined8 local_e8 [22];
  
  lVar3 = FUN_1450d2450(*(undefined8 *)(param_1 + 8));
  fVar17 = 0.0;
  local_res18 = 0;
  local_res8 = 0;
  if ((*(byte *)(param_1 + 0x14a) & 1) != 0) {
    fVar16 = *(float *)(param_1 + 0xb0) * 0.05;
    if (-37.0 <= fVar16) {
      if ((37.0 < fVar16) ||
         (uVar7 = (uint)(longlong)(fVar16 * 27866352.0 + 1.0653532e+09),
         fVar8 = (float)((uVar7 & 0x7fffff) + 0x3f800000),
         ((fVar8 * 0.32518977 + 0.020805772) * fVar8 + 0.65304345) * (float)(uVar7 & 0xff800000) <
         4.0)) {
        if ((-37.0 <= fVar16) && (fVar16 <= 37.0)) {
          uVar7 = (uint)(longlong)(fVar16 * 27866352.0 + 1.0653532e+09);
          fVar17 = (float)((uVar7 & 0x7fffff) + 0x3f800000);
          fVar17 = ((fVar17 * 0.32518977 + 0.020805772) * fVar17 + 0.65304345) *
                   (float)(uVar7 & 0xff800000);
        }
      }
      else {
        fVar17 = 4.0;
      }
    }
    local_res18 = *(undefined4 *)(param_1 + 0xe4);
    local_res8 = *(undefined4 *)(param_1 + 0xe8);
    if (*(char *)(lVar3 + 0xe0) == '\0') {
      uVar6 = FUN_144d4eb60();
      lVar4 = FUN_144d4eb00(uVar6);
    }
    else {
      lVar4 = lVar3 + 0x20;
    }
    if (*(char *)(lVar3 + 0xe1) == '\0') {
      uVar6 = FUN_144d4eb60();
      lVar5 = FUN_144d4eb30(uVar6);
    }
    else {
      lVar5 = lVar3 + 0x70;
    }
    FUN_1450d0c70(lVar5,param_2,fVar17,local_res18,local_res8,lVar4 + 0x30);
  }
  uVar7 = 1;
  local_e8[0] = *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x58);
  puVar10 = local_e8;
  if ((*(byte *)(param_1 + 0x170) & 8) != 0) {
    if (*(char *)(lVar3 + 0xe0) == '\0') {
      uVar6 = FUN_144d4eb60();
      lVar3 = FUN_144d4eb00(uVar6);
    }
    else {
      lVar3 = lVar3 + 0x20;
    }
    puVar10 = *(undefined8 **)(lVar3 + 0x40);
    uVar7 = *(uint *)(lVar3 + 0x48);
  }
  piVar13 = (int *)(param_1 + 0x104);
  uVar12 = 0;
  do {
    if ((*piVar13 != 0) && (uVar7 != 0)) {
      uVar15 = (ulonglong)uVar7;
      puVar14 = puVar10;
      do {
        if ((DAT_14c72f444 < *(float *)(param_1 + 0x88 + (ulonglong)(uVar12 + 6) * 4)) &&
           ((uVar9 = *(uint *)(param_2 + 1), uVar9 < *(uint *)((longlong)param_2 + 0xc) ||
            ((cVar2 = FUN_1450d1940(param_2), cVar2 != '\0' &&
             (uVar9 < *(uint *)((longlong)param_2 + 0xc))))))) {
          uVar9 = *(uint *)(param_2 + 1);
          *(uint *)(param_2 + 1) = uVar9 + 1;
          puVar11 = (undefined8 *)((ulonglong)uVar9 * 0x20 + *param_2);
          if (puVar11 != (undefined8 *)0x0) {
            *puVar11 = *puVar14;
            *(int *)(puVar11 + 1) = *piVar13;
            fVar16 = *(float *)(param_1 + 0x88 + (ulonglong)(uVar12 + 6) * 4) * 0.05;
            if (fVar16 < -37.0) {
LAB_1450e82d8:
              fVar16 = 0.0;
            }
            else if ((37.0 < fVar16) ||
                    (uVar9 = (uint)(longlong)(fVar16 * 27866352.0 + 1.0653532e+09),
                    fVar8 = (float)((uVar9 & 0x7fffff) + 0x3f800000),
                    ((fVar8 * 0.32518977 + 0.020805772) * fVar8 + 0.65304345) *
                    (float)(uVar9 & 0xff800000) < 4.0)) {
              if ((fVar16 < -37.0) || (37.0 < fVar16)) goto LAB_1450e82d8;
              uVar9 = (uint)(longlong)(fVar16 * 27866352.0 + 1.0653532e+09);
              fVar16 = (float)((uVar9 & 0x7fffff) + 0x3f800000);
              fVar16 = ((fVar16 * 0.32518977 + 0.020805772) * fVar16 + 0.65304345) *
                       (float)(uVar9 & 0xff800000);
            }
            else {
              fVar16 = 4.0;
            }
            *(float *)((longlong)puVar11 + 0xc) = fVar16;
            *(undefined4 *)((longlong)puVar11 + 0x14) =
                 *(undefined4 *)(param_1 + 0x88 + (ulonglong)(uVar12 + 0xf) * 4);
            *(undefined4 *)(puVar11 + 3) =
                 *(undefined4 *)(param_1 + 0x88 + (ulonglong)(uVar12 + 0x13) * 4);
            *(undefined4 *)(puVar11 + 2) = 2;
          }
        }
        puVar14 = puVar14 + 1;
        uVar15 = uVar15 - 1;
      } while (uVar15 != 0);
    }
    uVar12 = uVar12 + 1;
    piVar13 = piVar13 + 1;
    if (3 < uVar12) {
      plVar1 = *(longlong **)(param_1 + 0x1d8);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x20))(plVar1,param_2,fVar17,local_res18,local_res8);
      }
      return;
    }
  } while( true );
}



// FUNCTION 1450e83c0 FUN_1450e83c0 body=568 status=ok
// SIG undefined FUN_1450e83c0(void)

void FUN_1450e83c0(longlong param_1,undefined4 *param_2,uint param_3,undefined8 param_4,
                  undefined4 param_5,float param_6)

{
  float fVar1;
  uint uVar2;
  ushort uVar3;
  longlong lVar4;
  ulonglong uVar5;
  float fVar6;
  float fVar7;
  char local_res8 [8];
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  
  uVar5 = (ulonglong)param_3;
  if ((*(byte *)(param_1 + 0x208) & 0x40) == 0) {
    switch(param_3) {
    case 0x12:
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x3a:
      FUN_1450e6b50(param_1,param_6,uVar5);
      break;
    default:
      uVar2 = *(uint *)(&DAT_149c27ed0 + uVar5 * 4);
      if ((uVar2 != 0x4a) &&
         (uVar5 = (ulonglong)(uint)(&DAT_149c29000)[(int)uVar2],
         (&DAT_149c29000)[(int)uVar2] != 0x1a)) {
        if ((DAT_14c791034 == 1) &&
           ((*(ulonglong *)(param_1 + 0x128 + (ulonglong)(uVar2 >> 6) * 8) >> (uVar2 & 0x3f) & 1) !=
            0)) {
          fVar7 = 0.0;
          if (param_6 != 0.0) {
            local_40 = 0;
            local_44 = *param_2;
            fVar6 = 0.0;
            local_res8[0] = '\0';
            local_48._0_2_ = CONCAT11(*(char *)(param_2 + 1),(char)uVar2);
            uVar3 = (ushort)local_48;
            local_48 = (uint)(ushort)local_48;
            if (*(char *)(param_2 + 1) != '\x02') {
              local_40 = param_2[2];
              local_48 = (uint)CONCAT12(*(undefined1 *)((longlong)param_2 + 5),uVar3);
            }
            lVar4 = FUN_1450899e0(param_1 + 0xf0,&local_48,local_res8);
            if (lVar4 != 0) {
              if (local_res8[0] == '\0') {
                *(undefined4 *)(lVar4 + 0xc) = 0;
              }
              fVar7 = *(float *)(lVar4 + 0xc);
              fVar6 = fVar7 + param_6;
              *(float *)(lVar4 + 0xc) = fVar6;
            }
            if ((*(ulonglong *)(param_1 + 0x138 + (ulonglong)(uVar2 >> 6) * 8) >> (uVar2 & 0x3f) & 1
                ) == 0) {
              fVar1 = *(float *)(param_1 + 0x88 + uVar5 * 4);
              if ((fVar7 != fVar1) || (fVar1 <= fVar6)) {
                if (fVar1 < fVar6) {
                  *(float *)(param_1 + 0x88 + uVar5 * 4) = fVar6;
                }
              }
              else {
                *(byte *)(param_1 + 0x14b) = *(byte *)(param_1 + 0x14b) | 4;
              }
            }
            else {
              *(byte *)(param_1 + 0x14b) = *(byte *)(param_1 + 0x14b) | 4;
            }
          }
        }
        else {
          *(float *)(param_1 + 0x88 + uVar5 * 4) = param_6 + *(float *)(param_1 + 0x88 + uVar5 * 4);
        }
      }
      break;
    case 0x2e:
      *(undefined4 *)(param_1 + 0x1b0) = 0;
    case 0x17:
    case 0x18:
    case 0x19:
    case 0x1a:
    case 0x1b:
    case 0x1c:
      FUN_1450e6b50(param_1,param_5,uVar5);
    }
    if ((((*(byte *)(param_1 + 0x208) & 1) != 0) && (param_3 == 0x2f)) &&
       (*(longlong **)(param_1 + 0x1d8) != (longlong *)0x0)) {
      (**(code **)(**(longlong **)(param_1 + 0x1d8) + 0x18))();
    }
  }
  return;
}



// FUNCTION 1450e8660 FUN_1450e8660 body=17 status=ok
// SIG undefined FUN_1450e8660(void)

undefined8 * FUN_1450e8660(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x7ffffe3fffe60bd;
  return param_2;
}



// FUNCTION 1450e8680 FUN_1450e8680 body=3 status=ok
// SIG undefined FUN_1450e8680(void)

undefined1 FUN_1450e8680(void)

{
  return 1;
}



// FUNCTION 1450e8690 FUN_1450e8690 body=28 status=ok
// SIG undefined FUN_1450e8690(void)

void FUN_1450e8690(longlong param_1,char param_2)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 0x208) & 0xfe;
  *(byte *)(param_1 + 0x208) = bVar1;
  if (param_2 != '\0') {
    *(byte *)(param_1 + 0x208) = bVar1 | 4;
  }
  return;
}



// FUNCTION 1450e86b0 FUN_1450e86b0 body=76 status=ok
// SIG undefined FUN_1450e86b0(void)

void FUN_1450e86b0(longlong *param_1,undefined4 *param_2)

{
  undefined4 local_18;
  undefined1 local_14;
  undefined1 local_13;
  undefined4 local_10;
  
  if ((*(byte *)(param_1 + 0x41) & 0x40) == 0) {
    local_13 = *(undefined1 *)(param_2 + 2);
    local_10 = param_2[1];
    local_18 = 0;
    local_14 = 1;
    (**(code **)(*param_1 + 0x18))(param_2[4],&local_18,*param_2,param_2[3],param_2[4]);
  }
  return;
}



// FUNCTION 1450e8710 FUN_1450e8710 body=458 status=ok
// SIG undefined FUN_1450e8710(void)

int FUN_1450e8710(longlong *param_1,longlong *param_2,char param_3)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  longlong *plVar7;
  
  plVar7 = param_1 + 0x2a;
  if (*plVar7 != 0) {
    return 1;
  }
  bVar2 = *(byte *)((longlong)param_1 + 0x19c) & 7;
  if (((bVar2 == 1) || (bVar2 == 2)) && (piVar1 = (int *)param_1[0x39], piVar1 != (int *)0x0)) {
    iVar6 = *piVar1;
    iVar3 = 1;
    if (((param_2 != (longlong *)0x0) && (*param_2 != 0)) && ((int)param_2[1] == iVar6)) {
      *plVar7 = *param_2;
      *(int *)(param_1 + 0x2b) = (int)param_2[1];
    }
    if (((*(longlong *)(piVar1 + 10) != 0) && ((piVar1[0xc] & 0x7fffffffU) != 0)) &&
       ((*plVar7 == 0 || ((*(byte *)(piVar1 + 4) & 4) != 0)))) {
      lVar4 = FUN_1450b3f30(DAT_14c790fd0);
      *plVar7 = lVar4;
      if (lVar4 != 0) {
        uVar5 = FUN_1450d7310(param_1[0x3a]);
        iVar3 = FUN_14539f270(param_1[0x39],*plVar7,uVar5);
        if (iVar3 != 1) {
          FUN_1450b3fc0(DAT_14c790fd0,*plVar7);
          iVar6 = 0;
          *plVar7 = 0;
        }
        *(int *)(param_1 + 0x2b) = iVar6;
      }
    }
    if (((*(byte *)((longlong)param_1 + 0x19d) & 1) != 0) && (*plVar7 != 0)) {
      uVar5 = FUN_1450d2460(param_1[1]);
      FUN_145390140(param_1[0x2a],uVar5);
    }
    if (iVar3 != 1) {
      return iVar3;
    }
  }
  iVar6 = 1;
  plVar7 = param_1 + 0x2a;
  if (param_1[0x2a] != 0) {
    iVar6 = FUN_1450b4040(DAT_14c790fd0,param_1[0x2a],param_1);
    if (iVar6 == 2) {
      *plVar7 = 0;
    }
    else {
      (**(code **)(*param_1 + 0x80))(param_1,*plVar7);
      if (((iVar6 == 1) && (param_3 != '\0')) && (*plVar7 != 0)) {
        uVar5 = FUN_1450d7310(param_1[0x3a]);
        FUN_1450b4420(DAT_14c790fd0,*plVar7,uVar5);
      }
    }
  }
  return iVar6;
}



// FUNCTION 1450e8900 FUN_1450e8900 body=64 status=ok
// SIG undefined FUN_1450e8900(void)

void FUN_1450e8900(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x150) != 0) {
    uVar1 = FUN_1450d7310(*(undefined8 *)(param_1 + 0x1d0));
    FUN_1450b4420(DAT_14c790fd0,*(undefined8 *)(param_1 + 0x150),uVar1);
    return;
  }
  return;
}



// FUNCTION 1450e8940 FUN_1450e8940 body=205 status=ok
// SIG undefined FUN_1450e8940(void)

bool FUN_1450e8940(longlong *param_1)

{
  uint uVar1;
  float fVar2;
  
  if ((*(byte *)(param_1 + 0x41) & 1) == 0) {
    (**(code **)(*param_1 + 0x68))();
  }
  else {
    (**(code **)(*param_1 + 0x70))();
    if ((*(byte *)(param_1 + 0x41) & 0x10) != 0) {
      (**(code **)(*param_1 + 0x78))(param_1);
    }
  }
  fVar2 = *(float *)(param_1 + 0x11) * 0.05;
  if ((fVar2 < -37.0) || (37.0 < fVar2)) {
    fVar2 = 0.0;
  }
  else {
    uVar1 = (uint)(longlong)(fVar2 * 27866352.0 + 1.0653532e+09);
    fVar2 = (float)((uVar1 & 0x7fffff) + 0x3f800000);
    fVar2 = ((fVar2 * 0.32518977 + 0.020805772) * fVar2 + 0.65304345) * (float)(uVar1 & 0xff800000);
  }
  return fVar2 * *(float *)(param_1 + 0x20) <= DAT_14c72f440;
}



// FUNCTION 1450e8a10 FUN_1450e8a10 body=137 status=ok
// SIG undefined FUN_1450e8a10(void)

void FUN_1450e8a10(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  ulonglong uVar2;
  undefined4 *puVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (0 < *(int *)(param_1 + 0x200)) {
    puVar3 = (undefined4 *)(param_2 + 0x10);
    do {
      uVar2 = (ulonglong)uVar4;
      uVar1 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x1f8) + uVar2 * 0x88) + 8))();
      puVar3[-4] = uVar1;
      uVar4 = uVar4 + 1;
      *(undefined8 *)(puVar3 + -2) =
           *(undefined8 *)(*(longlong *)(param_1 + 0x1f8) + 0x50 + uVar2 * 0x88);
      *puVar3 = 0;
      puVar3 = puVar3 + 6;
    } while ((int)uVar4 < *(int *)(param_1 + 0x200));
  }
  return;
}



// FUNCTION 1450e8ab0 FUN_1450e8ab0 body=136 status=ok
// SIG undefined FUN_1450e8ab0(void)

void FUN_1450e8ab0(longlong param_1)

{
  if ((*(byte *)(param_1 + 0x208) & 0x40) == 0) {
    FUN_1450d78a0(*(undefined8 *)(param_1 + 0x1d0),param_1 + 8,(undefined4 *)(param_1 + 0x160),
                  param_1 + 0x188);
    if ((((*(byte *)(param_1 + 0x170) & 8) != 0) &&
        ((byte)((*(byte *)(param_1 + 0x19c) & 7) - 1) < 2)) && (*(longlong *)(param_1 + 0x1c8) == 0)
       ) {
      FUN_1450d7340(*(undefined8 *)(param_1 + 0x1d0));
      return;
    }
  }
  else {
    *(byte *)(param_1 + 0x170) = *(byte *)(param_1 + 0x170) & 0xf0;
    *(undefined4 *)(param_1 + 0x160) = 0x3f000000;
    *(undefined8 *)(param_1 + 0x164) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x16c) = 0x42c80000;
  }
  return;
}



// FUNCTION 1450e8b40 FUN_1450e8b40 body=111 status=ok
// SIG undefined FUN_1450e8b40(void)

void FUN_1450e8b40(longlong param_1)

{
  void *pvVar1;
  longlong lVar2;
  
  FUN_1450e6f80(param_1,1);
  lVar2 = FUN_14507bcb0(param_1 + 0x188);
  if (lVar2 != 0) {
    FUN_14539f190(param_1 + 0x188);
  }
  pvVar1 = *(void **)(param_1 + 0x1c8);
  if (pvVar1 != (void *)0x0) {
    FUN_14539f200(pvVar1);
    AK::MemoryMgr::Free(5,pvVar1);
    *(undefined8 *)(param_1 + 0x1c8) = 0;
  }
  *(byte *)(param_1 + 0x208) = *(byte *)(param_1 + 0x208) | 0x20;
  return;
}



// FUNCTION 1450e8bb0 FUN_1450e8bb0 body=20 status=ok
// SIG undefined FUN_1450e8bb0(void)

void FUN_1450e8bb0(longlong param_1)

{
  if (*(longlong **)(param_1 + 0x1d8) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001450e8bbf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x1d8) + 0x18))();
    return;
  }
  return;
}



// FUNCTION 1450e8bd0 FUN_1450e8bd0 body=103 status=ok
// SIG undefined FUN_1450e8bd0(void)

float FUN_1450e8bd0(longlong param_1,float param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FUN_14507bcb0(param_1 + 0x188);
  if ((lVar2 != 0) && (*(byte *)(lVar2 + 0x1f8) != 0xff)) {
    lVar3 = (ulonglong)*(byte *)(lVar2 + 0x1f8) + 2;
    lVar1 = *(longlong *)(lVar2 + lVar3 * 0x18);
    lVar2 = lVar2 + lVar3 * 0x18;
    if ((lVar1 != 0) && (lVar2 != 0)) {
      param_2 = param_2 * *(float *)(lVar1 + (ulonglong)(*(int *)(lVar2 + 8) - 2) * 0xc) * 0.01;
    }
  }
  return param_2;
}



// FUNCTION 1450e8c40 FUN_1450e8c40 body=36 status=ok
// SIG undefined FUN_1450e8c40(void)

ulonglong FUN_1450e8c40(longlong param_1,byte param_2)

{
  int *piVar1;
  ulonglong uVar2;
  
  piVar1 = *(int **)(param_1 + 0x150);
  if (piVar1 == (int *)0x0) {
    return (ulonglong)param_2;
  }
  if (param_2 == 0) {
    uVar2 = FUN_1450b4530(DAT_14c790fd0);
    return uVar2;
  }
  if (*piVar1 == 1) {
    FUN_145390680(piVar1,*(undefined4 *)(DAT_14c790fd8 + 0x88));
    return 1;
  }
  return 0x26;
}



// FUNCTION 1450e8c70 FUN_1450e8c70 body=311 status=ok
// SIG undefined FUN_1450e8c70(void)

char FUN_1450e8c70(longlong param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  longlong local_res10;
  
  if (param_2 == 0) {
    return (*(int *)(param_1 + 0x18c) != 0) + '\x01';
  }
  *(undefined4 *)(param_1 + 400) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x194) = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x198) = *(undefined4 *)(param_2 + 0x28);
  FUN_1450e6f80(param_1,1);
  if ((*(byte *)(param_1 + 0x208) & 0x40) == 0) {
    uVar3 = *(int *)(param_1 + 0x1e8) + *(int *)(param_1 + 0x60);
    if ((*(uint *)(param_1 + 100) < uVar3) &&
       (cVar2 = FUN_1450e5c00(param_1 + 0x58,uVar3 - *(uint *)(param_1 + 100)), cVar2 == '\0')) {
      return '\x01';
    }
    if ((*(uint *)(param_1 + 0x1ec) < *(uint *)(param_2 + 0x218)) &&
       (cVar2 = FUN_1450e5c00(param_1 + 0x1e0,
                              *(uint *)(param_2 + 0x218) - *(uint *)(param_1 + 0x1ec)),
       cVar2 == '\0')) {
      return '\x01';
    }
    local_res10 = *(longlong *)(param_2 + 0x210);
    lVar1 = local_res10 + (ulonglong)*(uint *)(param_2 + 0x218) * 8;
    FUN_1450e7030(param_1,&local_res10,lVar1,0x1a,(undefined4 *)(param_1 + 400));
    FUN_1450e7030(param_1,&local_res10,lVar1,0x1b,(undefined4 *)(param_1 + 0x194));
    FUN_1450e7030(param_1,&local_res10,lVar1,0x1c,(undefined4 *)(param_1 + 0x198));
  }
  return '\x01';
}



// FUNCTION 1450e8db0 FUN_1450e8db0 body=773 status=ok
// SIG undefined FUN_1450e8db0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_1450e8db0(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  code *pcVar5;
  char cVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  uint uVar12;
  int iVar13;
  longlong *plVar14;
  undefined1 *puVar15;
  longlong *_Dst;
  undefined4 uVar16;
  ulonglong uVar17;
  undefined4 local_res8;
  undefined8 uStack_60;
  undefined1 auStack_58 [32];
  longlong *local_38 [2];
  
  puVar10 = (undefined8 *)0x0;
  local_res8 = 1;
  local_38[0] = (longlong *)0x0;
  uStack_60 = 0x1450e8df3;
  FUN_1450d6c80(*(undefined8 *)(param_1 + 0x1d0),local_38);
  uStack_60 = 0x1450e8dff;
  uVar7 = FUN_1450d6720(*(undefined8 *)(param_1 + 0x1d0));
  uVar17 = (ulonglong)uVar7;
  if (local_38[0] == (longlong *)0x0) {
    puVar15 = auStack_58;
    uVar12 = uVar7;
    uVar16 = 1;
    if (uVar7 == 0) goto LAB_1450e907d;
  }
  else {
    uVar12 = uVar7 + 1;
  }
  plVar14 = (longlong *)(param_1 + 0x1f8);
  if (*(uint *)(param_1 + 0x204) < uVar12) {
    uStack_60 = 0x1450e8e32;
    cVar6 = FUN_1450e91b0(plVar14,uVar12 - *(uint *)(param_1 + 0x204));
    if (cVar6 == '\0') {
      puVar15 = auStack_58;
      uVar16 = 2;
      goto LAB_1450e907d;
    }
  }
  if (local_38[0] != (longlong *)0x0) {
    uVar12 = *(uint *)(param_1 + 0x200);
    uVar2 = *(uint *)(param_1 + 0x204);
    if (uVar12 < uVar2) {
LAB_1450e8e89:
      if (uVar12 < *(uint *)(param_1 + 0x204)) {
        uVar12 = *(uint *)(param_1 + 0x200);
        *(uint *)(param_1 + 0x200) = uVar12 + 1;
        puVar10 = (undefined8 *)((ulonglong)uVar12 * 0x88 + *plVar14);
        if (puVar10 != (undefined8 *)0x0) {
          puVar10[2] = 0;
          *(undefined4 *)(puVar10 + 3) = 0;
          *(undefined4 *)(puVar10 + 4) = 0;
          *(undefined1 *)(puVar10 + 5) = 0xff;
          *(undefined1 *)(puVar10 + 6) = 0xff;
          puVar10[7] = 0;
          puVar10[8] = 0;
          puVar10[9] = 0;
          *puVar10 = &PTR_FUN_149c264a0;
          puVar10[1] = &PTR_LAB_149c264c8;
          puVar10[10] = 0;
          puVar10[0xb] = 0;
          puVar10[0xc] = 0;
          puVar10[0xd] = 0;
          puVar10[0xe] = 0;
          puVar10[0xf] = 0;
          puVar10[0x10] = 0;
        }
      }
    }
    else {
      iVar13 = (uVar2 >> 1) + uVar2;
      if (uVar2 == 0) {
        iVar13 = 1;
      }
      uStack_60 = 0x1450e8e77;
      cVar6 = FUN_1450e91b0(plVar14,iVar13);
      if (cVar6 != '\0') goto LAB_1450e8e89;
    }
    uStack_60 = 0x1450e8efa;
    lVar8 = FUN_14536b830(puVar10,local_38[0],param_1);
    if (lVar8 == 0) {
      puVar15 = auStack_58;
      uVar16 = 2;
      goto LAB_1450e907d;
    }
  }
  plVar14 = (longlong *)(param_1 + 0x1f8);
  puVar15 = auStack_58;
  uVar16 = local_res8;
  if (uVar7 != 0) {
    uVar11 = uVar17 * 0x10 + 0xf;
    if (uVar11 <= uVar17 * 0x10) {
      uVar11 = 0xffffffffffffff0;
    }
    uStack_60 = 0x1450e8f40;
    lVar8 = -(uVar11 & 0xfffffffffffffff0);
    _Dst = (longlong *)((longlong)local_38 + lVar8);
    *(undefined8 *)(auStack_58 + lVar8 + -8) = 0x1450e8f59;
    memset(_Dst,0,(ulonglong)(uVar7 << 4));
    uVar3 = *(undefined8 *)(param_1 + 0x1d0);
    *(undefined8 *)(auStack_58 + lVar8 + -8) = 0x1450e8f68;
    FUN_1450d67d0(uVar3,_Dst);
    puVar15 = auStack_58 + lVar8;
    if (uVar7 != 0) {
      do {
        if (*_Dst != 0) {
          uVar7 = *(uint *)(param_1 + 0x200);
          uVar12 = *(uint *)(param_1 + 0x204);
          if (uVar7 < uVar12) {
LAB_1450e8f9f:
            if (*(uint *)(param_1 + 0x204) <= uVar7) goto LAB_1450e9013;
            uVar7 = *(uint *)(param_1 + 0x200);
            *(uint *)(param_1 + 0x200) = uVar7 + 1;
            puVar10 = (undefined8 *)((ulonglong)uVar7 * 0x88 + *plVar14);
            if (puVar10 != (undefined8 *)0x0) {
              *(undefined1 *)(puVar10 + 5) = 0xff;
              puVar10[2] = 0;
              *puVar10 = &PTR_FUN_149c264a0;
              puVar10[1] = &PTR_LAB_149c264c8;
              *(undefined4 *)(puVar10 + 3) = 0;
              *(undefined4 *)(puVar10 + 4) = 0;
              *(undefined1 *)(puVar10 + 6) = 0xff;
              puVar10[7] = 0;
              puVar10[8] = 0;
              puVar10[9] = 0;
              puVar10[10] = 0;
              puVar10[0xb] = 0;
              puVar10[0xc] = 0;
              puVar10[0xd] = 0;
              puVar10[0xe] = 0;
              puVar10[0xf] = 0;
              puVar10[0x10] = 0;
            }
          }
          else {
            if (uVar12 == 0) {
              iVar13 = 1;
            }
            else {
              iVar13 = (uVar12 >> 1) + uVar12;
            }
            *(undefined8 *)(auStack_58 + lVar8 + -8) = 0x1450e8f9b;
            cVar6 = FUN_1450e91b0(plVar14,iVar13);
            if (cVar6 != '\0') goto LAB_1450e8f9f;
LAB_1450e9013:
            puVar10 = (undefined8 *)0x0;
          }
          lVar9 = *_Dst;
          *(undefined8 *)(auStack_58 + lVar8 + -8) = 0x1450e9022;
          lVar9 = FUN_14536b830(puVar10,lVar9,param_1);
          if (lVar9 == 0) {
            puVar10 = (undefined8 *)
                      ((ulonglong)*(uint *)(param_1 + 0x200) * 0x88 + *plVar14 + -0x88);
            pcVar5 = *(code **)*puVar10;
            *(undefined8 *)(auStack_58 + lVar8 + -8) = 0x1450e9044;
            (*pcVar5)(puVar10,0);
            *(int *)(param_1 + 0x200) = *(int *)(param_1 + 0x200) + -1;
            local_res8 = 2;
          }
          plVar4 = (longlong *)*_Dst;
          if (plVar4 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)plVar4 + 0x14);
            iVar13 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar13 == 1) {
              pcVar5 = *(code **)(*plVar4 + 0x18);
              *(undefined8 *)(auStack_58 + lVar8 + -8) = 0x1450e9069;
              (*pcVar5)();
            }
            *_Dst = 0;
          }
        }
        _Dst = _Dst + 2;
        uVar17 = uVar17 - 1;
        puVar15 = auStack_58 + lVar8;
        uVar16 = local_res8;
      } while (uVar17 != 0);
    }
  }
LAB_1450e907d:
  if (local_38[0] != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_38[0] + 0x14);
    iVar13 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar13 == 1) {
      pcVar5 = *(code **)(*local_38[0] + 0x18);
      *(undefined8 *)(puVar15 + -8) = 0x1450e9098;
      (*pcVar5)();
    }
  }
  return uVar16;
}



// FUNCTION 1450e90c0 FUN_1450e90c0 body=27 status=ok
// SIG undefined FUN_1450e90c0(void)

void FUN_1450e90c0(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1453a1c50();
  *(undefined8 *)(param_1 + 0x1d8) = uVar1;
  return;
}



// FUNCTION 1450e90e0 FUN_1450e90e0 body=204 status=ok
// SIG undefined FUN_1450e90e0(void)

undefined8 FUN_1450e90e0(longlong *param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  void *pvVar5;
  longlong lVar6;
  __uint64 _Var7;
  uint uVar8;
  ulonglong uVar9;
  
  uVar8 = *(int *)((longlong)param_1 + 0xc) + param_2;
  uVar9 = (ulonglong)*(uint *)(param_1 + 1);
  _Var7 = (ulonglong)uVar8 << 6;
  if ((void *)*param_1 == (void *)0x0) {
    pvVar5 = AK::MemoryMgr::Malloc(0,_Var7);
    if (pvVar5 == (void *)0x0) {
      return 0;
    }
    if (((void *)*param_1 != (void *)0x0) && ((void *)*param_1 != pvVar5)) {
      if (uVar9 != 0) {
        lVar6 = 0;
        do {
          lVar3 = *param_1;
          uVar4 = ((undefined8 *)(lVar6 + lVar3))[1];
          *(undefined8 *)(lVar6 + (longlong)pvVar5) = *(undefined8 *)(lVar6 + lVar3);
          ((undefined8 *)(lVar6 + (longlong)pvVar5))[1] = uVar4;
          puVar1 = (undefined8 *)(lVar6 + 0x10 + lVar3);
          uVar4 = puVar1[1];
          puVar2 = (undefined8 *)(lVar6 + 0x10 + (longlong)pvVar5);
          *puVar2 = *puVar1;
          puVar2[1] = uVar4;
          puVar1 = (undefined8 *)(lVar6 + 0x20 + lVar3);
          uVar4 = puVar1[1];
          puVar2 = (undefined8 *)(lVar6 + 0x20 + (longlong)pvVar5);
          *puVar2 = *puVar1;
          puVar2[1] = uVar4;
          puVar1 = (undefined8 *)(lVar6 + 0x30 + lVar3);
          uVar4 = puVar1[1];
          puVar2 = (undefined8 *)(lVar6 + 0x30 + (longlong)pvVar5);
          *puVar2 = *puVar1;
          puVar2[1] = uVar4;
          uVar9 = uVar9 - 1;
          lVar6 = lVar6 + 0x40;
        } while (uVar9 != 0);
      }
      AK::MemoryMgr::Free(0,(void *)*param_1);
    }
  }
  else {
    pvVar5 = AK::MemoryMgr::Realloc(0,(void *)*param_1,_Var7);
    if (pvVar5 == (void *)0x0) {
      return 0;
    }
  }
  *param_1 = (longlong)pvVar5;
  *(uint *)((longlong)param_1 + 0xc) = uVar8;
  return 1;
}



// FUNCTION 1450e91b0 FUN_1450e91b0 body=368 status=ok
// SIG undefined FUN_1450e91b0(void)

undefined8 FUN_1450e91b0(longlong *param_1,int param_2)

{
  undefined8 *puVar1;
  void *pvVar2;
  __uint64 _Var3;
  undefined1 *puVar4;
  uint uVar5;
  ulonglong uVar6;
  
  uVar6 = (ulonglong)*(uint *)(param_1 + 1);
  uVar5 = *(int *)((longlong)param_1 + 0xc) + param_2;
  _Var3 = (ulonglong)uVar5 * 0x88;
  if ((void *)*param_1 == (void *)0x0) {
    pvVar2 = AK::MemoryMgr::Malloc(0,_Var3);
    if (pvVar2 == (void *)0x0) {
      return 0;
    }
    if (((void *)*param_1 != (void *)0x0) && ((void *)*param_1 != pvVar2)) {
      if (uVar6 != 0) {
        puVar4 = (undefined1 *)((longlong)pvVar2 + 0x30);
        do {
          puVar1 = (undefined8 *)(puVar4 + -0x30);
          if (puVar1 != (undefined8 *)0x0) {
            *(undefined8 *)(puVar4 + -0x20) = 0;
            *(undefined4 *)(puVar4 + -0x18) = 0;
            *(undefined4 *)(puVar4 + -0x10) = 0;
            puVar4[-8] = 0xff;
            *puVar4 = 0xff;
            *(undefined8 *)(puVar4 + 8) = 0;
            *(undefined8 *)(puVar4 + 0x10) = 0;
            *(undefined8 *)(puVar4 + 0x18) = 0;
            *puVar1 = &PTR_FUN_149c264a0;
            *(undefined ***)(puVar4 + -0x28) = &PTR_LAB_149c264c8;
            *(undefined8 *)(puVar4 + 0x20) = 0;
            *(undefined8 *)(puVar4 + 0x28) = 0;
            *(undefined8 *)(puVar4 + 0x30) = 0;
            *(undefined8 *)(puVar4 + 0x38) = 0;
            *(undefined8 *)(puVar4 + 0x40) = 0;
            *(undefined8 *)(puVar4 + 0x48) = 0;
            *(undefined8 *)(puVar4 + 0x50) = 0;
          }
          FUN_14536b820(puVar1,puVar4 + *param_1 + (-0x30 - (longlong)pvVar2));
          (*(code *)**(undefined8 **)(puVar4 + *param_1 + (-0x30 - (longlong)pvVar2)))
                    (puVar4 + *param_1 + (-0x30 - (longlong)pvVar2),0);
          puVar4 = puVar4 + 0x88;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
      AK::MemoryMgr::Free(0,(void *)*param_1);
    }
  }
  else {
    pvVar2 = AK::MemoryMgr::Realloc(0,(void *)*param_1,_Var3);
    if (pvVar2 == (void *)0x0) {
      return 0;
    }
  }
  *param_1 = (longlong)pvVar2;
  *(uint *)((longlong)param_1 + 0xc) = uVar5;
  return 1;
}



// FUNCTION 1450e9370 FUN_1450e9370 body=52 status=ok
// SIG undefined FUN_1450e9370(void)

undefined8 FUN_1450e9370(undefined8 param_1,ulonglong param_2)

{
  FUN_1450e6450();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x218);
  }
  return param_1;
}



// FUNCTION 1450e93b0 FUN_1450e93b0 body=62 status=ok
// SIG undefined FUN_1450e93b0(void)

undefined8 FUN_1450e93b0(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  
  uVar1 = *(uint *)(param_1 + 0x98);
  while( true ) {
    if ((uVar1 & 0xe0000) != 0) {
      return CONCAT71((uint7)(uint3)(uVar1 >> 8),1);
    }
    lVar2 = *(longlong *)(param_1 + 0x80);
    if ((lVar2 == 0) && (lVar2 = *(longlong *)(param_1 + 0x78), lVar2 == 0)) break;
    uVar1 = *(uint *)(lVar2 + 0x98);
    param_1 = lVar2;
  }
  return 0;
}



// FUNCTION 1450e9400 FUN_1450e9400 body=239 status=ok
// SIG undefined FUN_1450e9400(void)

longlong * FUN_1450e9400(longlong *param_1,longlong *param_2,undefined4 *param_3)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  longlong *plVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong *plVar9;
  
  plVar6 = (longlong *)*param_1;
  uVar8 = (ulonglong)*(uint *)(param_1 + 1);
  plVar1 = plVar6 + uVar8 * 3;
  while ((plVar6 != plVar1 &&
         ((*plVar6 != *param_2 || (((*(uint *)(param_2 + 1) ^ *(uint *)(plVar6 + 1)) & 1) != 0)))))
  {
    plVar6 = plVar6 + 3;
  }
  plVar9 = (longlong *)0x0;
  plVar7 = plVar6 + 2;
  if (plVar6 == plVar1) {
    plVar7 = plVar9;
  }
  if (plVar7 == (longlong *)0x0) {
    uVar2 = *(uint *)((longlong)param_1 + 0xc);
    if (uVar2 <= uVar8) {
      iVar3 = (uVar2 >> 1) + uVar2;
      if (uVar2 == 0) {
        iVar3 = 1;
      }
      cVar5 = FUN_145089db0(param_1,iVar3);
      if (cVar5 == '\0') {
        return (longlong *)0x0;
      }
    }
    plVar7 = plVar9;
    if (uVar8 < *(uint *)((longlong)param_1 + 0xc)) {
      uVar2 = *(uint *)(param_1 + 1);
      *(uint *)(param_1 + 1) = uVar2 + 1;
      plVar1 = (longlong *)(*param_1 + (ulonglong)uVar2 * 0x18);
      if (plVar1 != (longlong *)0x0) {
        lVar4 = param_2[1];
        *plVar1 = *param_2;
        plVar1[1] = lVar4;
        *(undefined4 *)(plVar1 + 2) = *param_3;
        plVar7 = plVar1 + 2;
      }
    }
  }
  else {
    *(undefined4 *)plVar7 = *param_3;
  }
  return plVar7;
}



// FUNCTION 1450e94f0 FUN_1450e94f0 body=153 status=ok
// SIG undefined FUN_1450e94f0(void)

void FUN_1450e94f0(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *_Dst;
  uint uStack_10;
  
  plVar2 = (longlong *)*param_1;
  plVar1 = plVar2 + (ulonglong)*(uint *)(param_1 + 1) * 3;
  _Dst = plVar2;
  if (plVar2 != plVar1) {
    uStack_10 = (uint)param_2[1];
    do {
      if ((*_Dst == *param_2) && (((uStack_10 ^ *(uint *)(_Dst + 1)) & 1) == 0)) break;
      _Dst = _Dst + 3;
    } while (_Dst != plVar1);
  }
  if (_Dst != plVar1) {
    if (_Dst < plVar2 + (ulonglong)(*(uint *)(param_1 + 1) - 1) * 3) {
      memmove(_Dst,_Dst + 3,
              (ulonglong)
              (uint)((int)(((longlong)(plVar2 + (ulonglong)(*(uint *)(param_1 + 1) - 1) * 3) -
                           (longlong)_Dst) / 0x18) * 0x18));
    }
    *(int *)(param_1 + 1) = (int)param_1[1] + -1;
  }
  return;
}



// FUNCTION 1450e9590 FUN_1450e9590 body=362 status=ok
// SIG undefined FUN_1450e9590(void)

undefined8 FUN_1450e9590(longlong *param_1,float param_2,longlong *param_3,char param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  uint uVar5;
  float local_res10 [2];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  local_res10[0] = param_2;
  if (param_4 != '\0') {
    plVar2 = (longlong *)*param_1;
    uVar5 = ~*(uint *)(param_3 + 1) & 1;
    plVar1 = plVar2 + (ulonglong)*(uint *)(param_1 + 1) * 3;
    plVar3 = plVar2;
    while ((plVar3 != plVar1 &&
           ((*plVar3 != *param_3 || (((uVar5 ^ *(uint *)(plVar3 + 1)) & 1) != 0))))) {
      plVar3 = plVar3 + 3;
    }
    plVar4 = plVar3 + 2;
    if (plVar3 == plVar1) {
      plVar4 = (longlong *)0x0;
    }
    if (plVar4 != (longlong *)0x0) {
      plVar3 = plVar2;
      if ((*(uint *)(param_3 + 1) & 1) != 0) {
        return 0;
      }
      while ((plVar3 != plVar1 &&
             ((*plVar3 != *param_3 || (((uVar5 ^ *(uint *)(plVar3 + 1)) & 1) != 0))))) {
        plVar3 = plVar3 + 3;
      }
      if (plVar3 != plVar1) {
        if (plVar3 < plVar2 + (ulonglong)(*(uint *)(param_1 + 1) - 1) * 3) {
          memmove(plVar3,plVar3 + 3,
                  (ulonglong)
                  (uint)((int)(((longlong)(plVar2 + (ulonglong)(*(uint *)(param_1 + 1) - 1) * 3) -
                               (longlong)plVar3) / 0x18) * 0x18));
        }
        *(int *)(param_1 + 1) = (int)param_1[1] + -1;
      }
    }
  }
  if ((param_2 == 1.0) && ((param_4 == '\0' || ((*(byte *)(param_3 + 1) & 1) != 0)))) {
    local_38 = (undefined4)*param_3;
    uStack_34 = *(undefined4 *)((longlong)param_3 + 4);
    uStack_30 = (undefined4)param_3[1];
    uStack_2c = *(undefined4 *)((longlong)param_3 + 0xc);
    FUN_1450e94f0(param_1,&local_38);
  }
  else {
    local_38 = (undefined4)*param_3;
    uStack_34 = *(undefined4 *)((longlong)param_3 + 4);
    uStack_30 = (undefined4)param_3[1];
    uStack_2c = *(undefined4 *)((longlong)param_3 + 0xc);
    FUN_1450e9400(param_1,&local_38,local_res10);
  }
  return 1;
}



// FUNCTION 1450e9700 FUN_1450e9700 body=43 status=ok
// SIG undefined FUN_1450e9700(void)

undefined8 * FUN_1450e9700(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_149c29128;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1450e9730 FUN_1450e9730 body=168 status=ok
// SIG undefined FUN_1450e9730(void)

void FUN_1450e9730(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0;
  *(byte *)((longlong)param_1 + 0xc3) = *(byte *)((longlong)param_1 + 0xc3) & 0xf8;
  *(undefined1 *)((longlong)param_1 + 0xc2) = 0;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
  *(undefined2 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0xf) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  return;
}



// FUNCTION 1450e97e0 FUN_1450e97e0 body=249 status=ok
// SIG undefined FUN_1450e97e0(void)

void FUN_1450e97e0(void *param_1)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  uint *puVar7;
  
  lVar4 = *(longlong *)((longlong)param_1 + 0x140);
  if (lVar4 != 0) {
    lVar2 = lVar4 + (ulonglong)*(uint *)((longlong)param_1 + 0x148) * 0x28;
    if (lVar4 != lVar2) {
      puVar7 = (uint *)(lVar4 + 0x20);
      do {
        plVar6 = *(longlong **)(puVar7 + -2);
        plVar5 = plVar6;
        if (plVar6 != plVar6 + *puVar7) {
          do {
            plVar6 = (longlong *)*plVar5;
            LOCK();
            piVar1 = (int *)((longlong)plVar6 + 0x14);
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*plVar6 + 0x18))();
            }
            plVar6 = *(longlong **)(puVar7 + -2);
            plVar5 = plVar5 + 1;
          } while (plVar5 != plVar6 + *puVar7);
        }
        if (plVar6 != (longlong *)0x0) {
          *puVar7 = 0;
          AK::MemoryMgr::Free(0,plVar6);
          puVar7[-2] = 0;
          puVar7[-1] = 0;
          puVar7[1] = 0;
        }
        lVar4 = lVar4 + 0x28;
        puVar7 = puVar7 + 10;
      } while (lVar4 != lVar2);
    }
    *(undefined4 *)((longlong)param_1 + 0x148) = 0;
    if (param_1 != *(void **)((longlong)param_1 + 0x140)) {
      AK::MemoryMgr::Free(0,*(void **)((longlong)param_1 + 0x140));
    }
    *(undefined8 *)((longlong)param_1 + 0x140) = 0;
    *(undefined4 *)((longlong)param_1 + 0x14c) = 0;
  }
  return;
}



// FUNCTION 1450e98e0 FUN_1450e98e0 body=25 status=ok
// SIG undefined FUN_1450e98e0(void)

undefined4 FUN_1450e98e0(longlong param_1)

{
  if ((*(char *)(param_1 + 0x98) != '\0') && (*(longlong *)(param_1 + 8) != 0)) {
    return *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x10);
  }
  return 0;
}



// FUNCTION 1450e9900 FUN_1450e9900 body=415 status=ok
// SIG undefined FUN_1450e9900(void)

void FUN_1450e9900(longlong param_1,longlong *param_2)

{
  undefined1 uVar1;
  longlong local_78;
  longlong lStack_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined1 local_50;
  undefined1 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_28;
  undefined1 local_20;
  undefined1 local_18;
  undefined8 local_10;
  
  if ((*(longlong **)(param_1 + 0x2f0) != param_2) && (*(char *)(param_1 + 0x98) == '\0')) {
    uVar1 = 1;
    local_50 = 0xff;
    local_48 = 0xff;
    local_58 = 0;
    local_40 = 0;
    local_68 = *(undefined8 *)(param_1 + 0x10);
    local_60 = *(undefined4 *)(param_1 + 0x34);
    FUN_1450d5280(param_2,&local_78);
    if (*(longlong *)(param_1 + 0x300) != 0) {
      if ((lStack_70 == *(longlong *)(param_1 + 0x300)) &&
         (local_78 == *(longlong *)(param_1 + 0x2f8))) {
        uVar1 = 0;
      }
      else {
        FUN_1450e9730(param_1 + 0xb0);
      }
    }
    *(byte *)(param_1 + 0x173) = *(byte *)(param_1 + 0x173) & 0xfd;
    *(byte *)(param_1 + 0x172) = *(byte *)(param_1 + 0x172) & 0x21;
    *(undefined8 *)(param_1 + 0x140) = 0x20000005d;
    (**(code **)(*param_2 + 0x140))
              (param_2,param_1 + 0xb0,param_1 + 0x178,&local_68,param_1 + 0x188,param_1 + 0x1a0,
               uVar1,*(undefined8 *)(param_1 + 0x2f0));
    *(longlong **)(param_1 + 0x2f0) = param_2;
    if ((*(longlong *)(param_1 + 0x300) == 0) && (lStack_70 != 0)) {
      local_38 = 0;
      local_30 = 0;
      local_28 = 0;
      local_20 = 0xff;
      local_18 = 0xff;
      local_10 = 0;
      FUN_14508c070(lStack_70,param_1 + 0xb0,&local_38);
      *(longlong *)(param_1 + 0x2f8) = local_78;
      *(longlong *)(param_1 + 0x300) = lStack_70;
    }
  }
  return;
}



// FUNCTION 1450e9aa0 FUN_1450e9aa0 body=1118 status=ok
// SIG undefined FUN_1450e9aa0(void)

undefined8 *
FUN_1450e9aa0(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5,int param_6)

{
  byte bVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  byte bVar10;
  int iVar11;
  uint uVar12;
  char cVar13;
  undefined1 uVar14;
  undefined4 uStack_2c;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  *param_1 = &PTR__purecall_149c29128;
  param_1[2] = &PTR__purecall_149c23920;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1450e6280(param_1 + 3,*(undefined8 *)(param_2 + 0x10),param_3,
                *(byte *)(param_2 + 0x310) >> 2 & 1);
  param_1[0x46] = 0;
  *param_1 = &PTR_FUN_149c29138;
  param_1[2] = &PTR_FUN_149c291a8;
  param_1[3] = &PTR_LAB_149c291b0;
  param_1[0x10] = &PTR_LAB_149c29240;
  param_1[0x47] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  *(undefined4 *)(param_1 + 0x4d) = 0;
  *(undefined8 *)((longlong)param_1 + 0x26c) = 0;
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x34);
  *(undefined8 *)((longlong)param_1 + 0x274) = *(undefined8 *)(param_2 + 0x28);
  *(undefined4 *)((longlong)param_1 + 0x27c) = *(undefined4 *)(param_2 + 0x30);
  piVar2 = *(int **)(param_2 + 0x20);
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  *(int **)((longlong)param_1 + 0x26c) = piVar2;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  uVar3 = *(undefined8 *)(param_2 + 8);
  *(byte *)((longlong)param_1 + 0x312) = *(byte *)((longlong)param_1 + 0x312) & 0x80;
  param_1[0x53] = uVar3;
  *(undefined1 *)((longlong)param_1 + 0x2b4) = 0;
  *(uint *)((longlong)param_1 + 0x2b4) = *(uint *)((longlong)param_1 + 0x2b4) & 0xff;
  *(int *)((longlong)param_1 + 0x30c) = param_6;
  param_1[0x54] = param_4;
  param_1[0x55] = 0;
  *(undefined4 *)((longlong)param_1 + 700) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x58) = 0x3f800000;
  *(byte *)((longlong)param_1 + 0x315) = -(param_6 != 0) & 0x40U | 0x22;
  bVar10 = *(byte *)((longlong)param_1 + 0x316) & 0xf8;
  *(byte *)((longlong)param_1 + 0x316) = bVar10;
  *(undefined8 *)((longlong)param_1 + 0x2c4) = 0x3f800000;
  *(undefined2 *)(param_1 + 0x62) = 1;
  *(undefined2 *)((longlong)param_1 + 0x313) = 0;
  bVar1 = *(byte *)(param_2 + 0x310);
  *(uint *)(param_1 + 99) = *(uint *)(param_1 + 99) & 0xfffffff8;
  *(byte *)((longlong)param_1 + 0x316) = (bVar10 ^ bVar1) & 8 ^ bVar10;
  *(byte *)((longlong)param_1 + 0x31c) =
       (*(byte *)(param_2 + 0x310) >> 1 ^ *(byte *)((longlong)param_1 + 0x31c)) & 1 ^
       *(byte *)((longlong)param_1 + 0x31c);
  uVar3 = param_5[1];
  param_1[100] = *param_5;
  param_1[0x65] = uVar3;
  *(undefined4 *)(param_1 + 0x66) = *(undefined4 *)(param_5 + 2);
  *(undefined4 *)((longlong)param_1 + 0x334) = 0;
  uVar7 = *(undefined4 *)(param_2 + 0x84);
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  *(undefined4 *)(param_1 + 0x6a) = 0;
  *(undefined4 *)(param_1 + 0x67) = uVar7;
  param_1[0x6b] = *(undefined8 *)(param_2 + 0x98);
  *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_2 + 0xa0);
  param_1[0x6d] = 0;
  param_1[0x6f] = 0;
  param_1[0x70] = 0;
  *(undefined4 *)(param_1 + 0x71) = 0xffffffff;
  iVar11 = *(int *)(param_2 + 0x90);
  if (iVar11 == 0) {
    iVar11 = DAT_14c72f598;
    DAT_14c72f598 = DAT_14c72f598 + 1;
  }
  else {
    *(byte *)((longlong)param_1 + 0x316) = *(byte *)((longlong)param_1 + 0x316) | 2;
  }
  *(int *)(param_1 + 0x65) = iVar11;
  cVar13 = '\0';
  uVar12 = 4;
  *(undefined4 *)((longlong)param_1 + 0x324) = *(undefined4 *)((longlong)param_1 + 0x20c);
  do {
    cVar13 = cVar13 + '\x01';
    uVar12 = uVar12 & uVar12 - 1;
  } while (uVar12 != 0);
  *(char *)((longlong)param_1 + 0x2b4) = cVar13;
  puVar8 = param_1 + 4;
  *(uint *)((longlong)param_1 + 0x2b4) = *(uint *)((longlong)param_1 + 0x2b4) & 0xff;
  *(uint *)((longlong)param_1 + 0x2b4) = *(uint *)((longlong)param_1 + 0x2b4) | 0x4100;
  uVar3 = *(undefined8 *)(param_2 + 0x40);
  param_1[0x59] = *(undefined8 *)(param_2 + 0x38);
  param_1[0x5a] = uVar3;
  uVar3 = *(undefined8 *)(param_2 + 0x50);
  param_1[0x5b] = *(undefined8 *)(param_2 + 0x48);
  param_1[0x5c] = uVar3;
  uVar7 = *(undefined4 *)(param_2 + 0x5c);
  uVar5 = *(undefined4 *)(param_2 + 0x60);
  uVar6 = *(undefined4 *)(param_2 + 100);
  *(undefined4 *)(param_1 + 0x5d) = *(undefined4 *)(param_2 + 0x58);
  *(undefined4 *)((longlong)param_1 + 0x2ec) = uVar7;
  *(undefined4 *)(param_1 + 0x5e) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0x2f4) = uVar6;
  uVar7 = *(undefined4 *)(param_2 + 0x6c);
  uVar5 = *(undefined4 *)(param_2 + 0x70);
  uVar6 = *(undefined4 *)(param_2 + 0x74);
  *(undefined4 *)(param_1 + 0x5f) = *(undefined4 *)(param_2 + 0x68);
  *(undefined4 *)((longlong)param_1 + 0x2fc) = uVar7;
  *(undefined4 *)(param_1 + 0x60) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0x304) = uVar6;
  *(undefined4 *)(param_1 + 0x61) = *(undefined4 *)(param_2 + 0x78);
  cVar13 = *(char *)(param_1 + 0x6b);
  if ((cVar13 == '\0') || (param_1[0x53] == 0)) {
    uVar7 = *(undefined4 *)(param_1 + 6);
  }
  else {
    uVar7 = *(undefined4 *)(param_1[0x53] + 0x10);
  }
  if (((cVar13 + 0x80U & 0xcf) == 0) && (cVar13 != -0x50)) {
    uVar14 = *(undefined1 *)((longlong)param_1 + 0x35c);
  }
  else {
    uVar14 = 0xff;
  }
  if (*(int *)(param_1 + 0xb) == 0) {
    uStack_20 = CONCAT31(uStack_20._1_3_,*(undefined1 *)((longlong)param_1 + 0x359));
    local_18 = CONCAT31(local_18._1_3_,uVar14);
    *puVar8 = *puVar8;
    param_1[5] = CONCAT44(uStack_2c,*(undefined4 *)(param_1 + 0x50));
    uStack_10 = SUB84(param_1,0);
    uStack_c = (undefined4)((ulonglong)param_1 >> 0x20);
    *(undefined4 *)(param_1 + 6) = uVar7;
    *(undefined4 *)((longlong)param_1 + 0x34) = uStack_24;
    *(undefined4 *)(param_1 + 7) = uStack_20;
    *(undefined4 *)((longlong)param_1 + 0x3c) = uStack_1c;
    *(undefined4 *)(param_1 + 8) = local_18;
    *(undefined4 *)((longlong)param_1 + 0x44) = uStack_14;
    *(undefined4 *)(param_1 + 9) = uStack_10;
    *(undefined4 *)((longlong)param_1 + 0x4c) = uStack_c;
  }
  if ((cVar13 == -0x70) && (*(char *)((longlong)param_1 + 0x35d) != '\0')) {
    param_5._4_4_ = CONCAT31(param_5._5_3_,1);
    FUN_14507f370(g_pGameSyncMgr,CONCAT44(param_5._4_4_,0x81),puVar8,uVar7,0,1,0);
  }
  lVar4 = *(longlong *)(param_2 + 0xa8);
  param_1[0x6d] = lVar4;
  if (lVar4 != 0) {
    FUN_1453a25a0();
    uVar7 = FUN_14536f650();
    lVar4 = param_1[0x6d];
    puVar8 = *(undefined8 **)(lVar4 + 0x58);
    if (puVar8 == (undefined8 *)0x0) {
      puVar8 = AK::MemoryMgr::Malloc(0,0x18);
      if (puVar8 == (undefined8 *)0x0) {
        return param_1;
      }
      *puVar8 = *(undefined8 *)(lVar4 + 0x58);
      *(undefined8 **)(lVar4 + 0x58) = puVar8;
    }
    if (*(longlong **)(lVar4 + 0x50) == (longlong *)0x0) {
      *(undefined8 **)(lVar4 + 0x48) = puVar8;
    }
    else {
      **(longlong **)(lVar4 + 0x50) = (longlong)puVar8;
    }
    puVar8 = *(undefined8 **)(lVar4 + 0x58);
    *(undefined8 **)(lVar4 + 0x50) = puVar8;
    *(undefined8 *)(lVar4 + 0x58) = *puVar8;
    *puVar8 = 0;
    *(int *)(lVar4 + 0x6c) = *(int *)(lVar4 + 0x6c) + 1;
    lVar4 = *(longlong *)(lVar4 + 0x50);
    puVar9 = (undefined4 *)(lVar4 + 8);
    if (puVar9 != (undefined4 *)0x0) {
      *puVar9 = uVar7;
      *(undefined8 **)(lVar4 + 0x10) = param_1;
    }
  }
  return param_1;
}



// FUNCTION 1450e9f00 FUN_1450e9f00 body=204 status=ok
// SIG undefined FUN_1450e9f00(void)

void FUN_1450e9f00(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_149c29138;
  param_1[2] = &PTR_FUN_149c291a8;
  param_1[3] = &PTR_LAB_149c291b0;
  param_1[0x10] = &PTR_LAB_149c29240;
  puVar1 = (undefined8 *)param_1[0x6f];
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(param_1 + 0x70) = 0;
    if (param_1 + 0x6e != puVar1) {
      AK::MemoryMgr::Free(0,puVar1);
    }
    param_1[0x6f] = 0;
    *(undefined4 *)((longlong)param_1 + 900) = 0;
  }
  if (*(longlong *)((longlong)param_1 + 0x26c) != 0) {
    FUN_144d4a460();
  }
  if ((void *)param_1[0x46] != (void *)0x0) {
    *(undefined4 *)(param_1 + 0x47) = 0;
    AK::MemoryMgr::Free(0,(void *)param_1[0x46]);
    param_1[0x46] = 0;
    *(undefined4 *)((longlong)param_1 + 0x23c) = 0;
  }
  FUN_1450e6450(param_1 + 3);
  *param_1 = &PTR__purecall_149c29128;
  return;
}



// FUNCTION 1450e9fd0 FUN_1450e9fd0 body=281 status=ok
// SIG undefined FUN_1450e9fd0(void)

ulonglong FUN_1450e9fd0(longlong param_1)

{
  uint uVar1;
  char cVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  
  uVar3 = FUN_1450e6790();
  if ((int)uVar3 == 1) {
    FUN_1450e90c0(param_1);
    if ((*(byte *)(param_1 + 0x208) & 0x40) == 0) {
      uVar1 = *(uint *)(param_1 + 0x368);
      if ((uVar1 < *(uint *)(param_1 + 0x36c)) ||
         ((cVar2 = FUN_1450d33b0(param_1 + 0x358), cVar2 != '\0' &&
          (uVar1 < *(uint *)(param_1 + 0x36c))))) {
        uVar1 = *(uint *)(param_1 + 0x368);
        *(uint *)(param_1 + 0x368) = uVar1 + 1;
        puVar4 = (undefined8 *)(*(longlong *)(param_1 + 0x360) + (ulonglong)uVar1 * 8);
        if (puVar4 != (undefined8 *)0x0) {
          *puVar4 = &DAT_14c79c430;
        }
      }
      puVar4 = *(undefined8 **)(param_1 + 0x360);
      if (puVar4 != puVar4 + *(uint *)(param_1 + 0x368)) {
        do {
          FUN_1450d3c50(*puVar4,param_1 + -0x18);
          puVar4 = puVar4 + 1;
        } while (puVar4 != (undefined8 *)
                           (*(longlong *)(param_1 + 0x360) +
                           (ulonglong)*(uint *)(param_1 + 0x368) * 8));
      }
    }
    if (*(int *)(param_1 + 0x268) == 0) {
      uVar3 = 2;
    }
    else {
      uVar3 = FUN_1450b25f0(DAT_14c790fc0,*(int *)(param_1 + 0x268),param_1 + -0x18,
                            *(undefined8 *)(param_1 + 8),param_1 + -0x10);
      if ((int)uVar3 == 1) {
        FUN_14536d420(*(undefined8 *)(param_1 + 0x288),param_1 + 0x328);
        return uVar3 & 0xffffffff;
      }
    }
  }
  return uVar3;
}



// FUNCTION 1450ea0f0 FUN_1450ea0f0 body=599 status=ok
// SIG undefined FUN_1450ea0f0(void)

void FUN_1450ea0f0(undefined8 *param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  void *pvVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  
  FUN_1450ecb30();
  puVar8 = (undefined8 *)0x0;
  if (param_1[0x4e] != 0) {
    puVar9 = param_1 + -1;
    if (param_1 == (undefined8 *)&DAT_00000018) {
      puVar9 = puVar8;
    }
    FUN_1450b0bd0(DAT_14c791068,param_1[0x4e],puVar9);
  }
  if (param_1[0x4f] != 0) {
    puVar9 = param_1 + -1;
    if (param_1 == (undefined8 *)&DAT_00000018) {
      puVar9 = puVar8;
    }
    FUN_1450b0bd0(DAT_14c791068,param_1[0x4f],puVar9);
  }
  if ((*(byte *)((longlong)param_1 + 0x2fc) & 1) != 0) {
    *(byte *)((longlong)param_1 + 0x2fc) = *(byte *)((longlong)param_1 + 0x2fc) & 0xfe;
  }
  if ((void *)param_1[0x46] != (void *)0x0) {
    *(undefined4 *)(param_1 + 0x47) = 0;
    AK::MemoryMgr::Free(0,(void *)param_1[0x46]);
    param_1[0x46] = 0;
    *(undefined4 *)((longlong)param_1 + 0x23c) = 0;
  }
  lVar2 = param_1[0x3a];
  puVar9 = param_1;
  if (param_1 == (undefined8 *)&DAT_00000018) {
    puVar9 = puVar8;
  }
  lVar3 = *(longlong *)(lVar2 + 0x70);
  if (lVar3 != 0) {
    puVar4 = *(undefined8 **)(lVar3 + 0x18);
    puVar6 = puVar4;
    puVar7 = puVar4;
    puVar10 = puVar8;
    if (puVar4 == (undefined8 *)0x0) {
LAB_1450ea1d3:
      if (puVar7 != (undefined8 *)0x0) {
        if (puVar7 == puVar4) {
          *(undefined8 *)(lVar3 + 0x18) = puVar7[0xe];
        }
        else {
          puVar10[0xe] = puVar7[0xe];
        }
      }
    }
    else {
      do {
        puVar7 = puVar6;
        if (puVar7 == puVar9) goto LAB_1450ea1d3;
        puVar6 = (undefined8 *)puVar7[0xe];
        puVar10 = puVar7;
      } while ((undefined8 *)puVar7[0xe] != (undefined8 *)0x0);
    }
    lVar3 = *(longlong *)(lVar2 + 0x70);
    if (((((*(short *)(lVar3 + 0xd0) < 1) && (*(short *)(lVar3 + 0xd4) < 1)) &&
         (*(short *)(lVar3 + 0xb8) == 0)) &&
        ((*(short *)(lVar3 + 0xba) == 0 && (*(longlong *)(lVar3 + 0x18) == 0)))) &&
       (*(int *)(lVar3 + 8) == 0)) {
      FUN_1450da060(lVar2);
    }
  }
  if (param_1[0x51] != 0) {
    FUN_14536d450(param_1[0x51],param_1 + 0x65);
  }
  lVar2 = param_1[0x6a];
  uVar1 = *(uint *)(param_1[0x51] + 0xc);
  if (lVar2 != 0) {
    if (*(undefined8 **)(lVar2 + 0x48) != (undefined8 *)0x0) {
      puVar9 = *(undefined8 **)(lVar2 + 0x48);
      do {
        if ((undefined8 *)puVar9[2] == param_1 + -3) {
          if (puVar9 == *(undefined8 **)(lVar2 + 0x48)) {
            *(undefined8 *)(lVar2 + 0x48) = *puVar9;
          }
          else {
            *puVar8 = *puVar9;
          }
          if (puVar9 == *(undefined8 **)(lVar2 + 0x50)) {
            *(undefined8 **)(lVar2 + 0x50) = puVar8;
          }
          *puVar9 = *(undefined8 *)(lVar2 + 0x58);
          *(int *)(lVar2 + 0x6c) = *(int *)(lVar2 + 0x6c) + -1;
          *(undefined8 **)(lVar2 + 0x58) = puVar9;
          break;
        }
        puVar4 = (undefined8 *)*puVar9;
        puVar8 = puVar9;
        puVar9 = puVar4;
      } while (puVar4 != (undefined8 *)0x0);
    }
    if (((*(undefined8 **)(lVar2 + 0x18) != (undefined8 *)0x0) && (*(int *)(lVar2 + 0x6c) == 0)) &&
       (*(int *)(lVar2 + 0x94) == 0)) {
      (**(code **)**(undefined8 **)(lVar2 + 0x18))();
    }
    FUN_1453a25b0(param_1[0x6a]);
    param_1[0x6a] = 0;
  }
  if (((uVar1 & 0x100) != 0) && (pvVar5 = (void *)param_1[0x51], pvVar5 != (void *)0x0)) {
    FUN_14536d100();
    AK::MemoryMgr::Free(0,pvVar5);
  }
  FUN_1450e6820(param_1,0);
  FUN_145362f30(param_1 + 0x43,param_1 + 1);
  if (*(int *)(param_1 + 0x4d) != 0) {
    FUN_1450b2740(DAT_14c790fc0,*(int *)(param_1 + 0x4d),param_1 + -3);
  }
  return;
}



// FUNCTION 1450ea350 FUN_1450ea350 body=289 status=ok
// SIG undefined FUN_1450ea350(void)

void FUN_1450ea350(longlong param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  char cVar3;
  longlong *plVar4;
  undefined8 local_38;
  longlong local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined2 local_10;
  
  if ((*(int *)(param_1 + 0x380) == 0) && ((*(byte *)(param_1 + 0x220) & 0x40) == 0)) {
    local_18 = 0;
    local_14 = 1;
    local_28 = 0;
    uStack_20 = 0;
    local_10 = 0x100;
    local_38 = *(undefined8 *)(param_1 + 0x20);
    local_30 = param_1 + 0x370;
    (**(code **)(**(longlong **)(param_1 + 0x1e8) + 0x108))
              (*(longlong **)(param_1 + 0x1e8),&local_38,0,0);
    uVar2 = *(uint *)(param_1 + 0x380);
    if ((uVar2 < *(uint *)(param_1 + 900)) ||
       ((cVar3 = FUN_1450d33b0(param_1 + 0x370), cVar3 != '\0' && (uVar2 < *(uint *)(param_1 + 900))
        ))) {
      uVar2 = *(uint *)(param_1 + 0x380);
      *(uint *)(param_1 + 0x380) = uVar2 + 1;
      puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x378) + (ulonglong)uVar2 * 8);
      if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = &DAT_14c79c430;
      }
    }
    plVar4 = *(longlong **)(param_1 + 0x378);
    if (plVar4 != plVar4 + *(uint *)(param_1 + 0x380)) {
      do {
        FUN_1450d3c50(*plVar4,param_1);
        if ((*(byte *)(param_1 + 0x316) & 4) != 0) {
          *(short *)(*plVar4 + 0x2a) = *(short *)(*plVar4 + 0x2a) + 1;
        }
        plVar4 = plVar4 + 1;
      } while (plVar4 != (longlong *)
                         (*(longlong *)(param_1 + 0x378) + (ulonglong)*(uint *)(param_1 + 0x380) * 8
                         ));
    }
  }
  return;
}



// FUNCTION 1450ea480 FUN_1450ea480 body=209 status=ok
// SIG undefined FUN_1450ea480(void)

void FUN_1450ea480(longlong param_1,int param_2,undefined4 param_3,char param_4)

{
  FUN_1450e71d0(param_1 + 8);
  FUN_1450e71d0(param_1 + 8);
  if ((param_2 - 0x1000000U & 0xfeffffff) == 0) {
    if ((param_4 != '\0') && (*(undefined8 *)(param_1 + 0x278) = 0, param_2 == 0x2000000)) {
      (*(code *)**(undefined8 **)(param_1 + -0x10))(param_1 + -0x10,0,1);
    }
    *(undefined4 *)(param_1 + 0x2b0) = param_3;
  }
  else if ((param_2 + 0xfc000000U & 0xfbffffff) == 0) {
    if ((param_4 != '\0') && (*(undefined8 *)(param_1 + 0x280) = 0, param_2 == 0x4000000)) {
      (**(code **)(*(longlong *)(param_1 + -0x10) + 0x18))(param_1 + -0x10,1);
    }
    *(undefined4 *)(param_1 + 0x2b4) = param_3;
  }
  *(byte *)(param_1 + 0x210) = *(byte *)(param_1 + 0x210) | 0x10;
  return;
}



// FUNCTION 1450ea570 FUN_1450ea570 body=67 status=ok
// SIG undefined FUN_1450ea570(void)

void FUN_1450ea570(longlong param_1)

{
  undefined2 uVar1;
  
  uVar1 = FUN_1450ee2b0(*(undefined8 *)(param_1 + 0x1e8));
  *(undefined2 *)(param_1 + 0x310) = uVar1;
  if (-1 < (char)*(byte *)(param_1 + 0x314)) {
    *(byte *)(param_1 + 0x314) = *(byte *)(param_1 + 0x314) | 0x80;
    FUN_1450e8900(param_1 + 0x18);
    return;
  }
  return;
}



// FUNCTION 1450ea5c0 FUN_1450ea5c0 body=572 status=ok
// SIG undefined FUN_1450ea5c0(void)

void FUN_1450ea5c0(longlong *param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  
  if (((*(longlong *)(param_2 + 2) == 0) || (*(longlong *)(param_2 + 2) == param_1[4])) &&
     ((param_2[4] == 0 || (param_2[4] == (int)param_1[0x50])))) {
    iVar2 = *param_2;
    if (iVar2 == 0) {
      FUN_1450eaa80(param_1,param_2 + 5,1);
      return;
    }
    if (iVar2 == 1) {
      FUN_1450e71d0(param_1 + 3);
      *(int *)((longlong)param_1 + 0x334) = *(int *)((longlong)param_1 + 0x334) + 1;
      if (param_2[5] != 0) {
        FUN_1450ec990(param_1,0,0x4000000,*(undefined8 *)(param_2 + 5));
        return;
      }
      if ((*(byte *)((longlong)param_1 + 0x312) & 0x78) != 0) {
        if (param_1[0x52] == 0) {
          FUN_1450e71d0(param_1 + 3);
                    /* WARNING: Could not recover jumptable at 0x0001450ea7df. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*param_1 + 0x18))(param_1,1);
          return;
        }
        FUN_1450b0c80(DAT_14c791068,param_1[0x52],0x4000000,0,0,4,0);
        return;
      }
      FUN_1450e71d0(param_1 + 3);
                    /* WARNING: Could not recover jumptable at 0x0001450ea778. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x18))(param_1,0);
      return;
    }
    if (iVar2 == 2) {
      cVar1 = *(char *)((longlong)param_2 + 0x1e);
      FUN_1450e71d0(param_1 + 3);
      if ((cVar1 == '\0') && (1 < *(uint *)((longlong)param_1 + 0x334))) {
        *(uint *)((longlong)param_1 + 0x334) = *(uint *)((longlong)param_1 + 0x334) - 1;
      }
      else {
        *(undefined4 *)((longlong)param_1 + 0x334) = 0;
        (**(code **)(*param_1 + 0x20))(param_1);
        if (param_2[5] == 0) {
          if (param_1[0x52] == 0) {
            FUN_1450e71d0(param_1 + 3);
            *(undefined4 *)((longlong)param_1 + 0x2c4) = 0x3f800000;
            (**(code **)(param_1[3] + 0x78))(param_1 + 3);
          }
          else {
            FUN_1450b0c80(DAT_14c791068,param_1[0x52],0x8000000,0x3f800000,0,4,0);
          }
        }
        else {
          FUN_1450ec990(param_1,0,0x8000000,*(undefined8 *)(param_2 + 5));
        }
      }
    }
    else {
      if (iVar2 == 3) {
                    /* WARNING: Could not recover jumptable at 0x0001450ea64e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x28))(param_1,*(undefined8 *)(param_2 + 10));
        return;
      }
      if (iVar2 == 5) {
        FUN_1450e69d0(param_1 + 3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1450ea800 FUN_1450ea800 body=259 status=ok
// SIG undefined FUN_1450ea800(void)

int FUN_1450ea800(undefined8 *param_1,int *param_2,char param_3,char param_4)

{
  int iVar1;
  
  if (*param_2 != 0) {
    *(undefined4 *)(param_1 + 0x58) = 0;
    FUN_1450ec990(param_1,1,0x1000000,*(undefined8 *)param_2);
  }
  if ((param_3 == '\x01') || ((*(byte *)((longlong)param_1 + 0x312) & 7) == 1)) {
    iVar1 = *(int *)((longlong)param_1 + 0x334);
    *(byte *)((longlong)param_1 + 0x314) = *(byte *)((longlong)param_1 + 0x314) | 0x40;
    if (iVar1 == 0) {
      iVar1 = 1;
    }
    *(int *)((longlong)param_1 + 0x334) = iVar1;
    iVar1 = FUN_145371840(1,param_1);
    if (param_1[0x51] != 0) {
      FUN_1450b0c40(DAT_14c791068);
    }
    FUN_1450e8c40(param_1 + 3,1);
    if (param_1[0x12] != 0) {
      FUN_14538e420();
    }
  }
  else {
    iVar1 = FUN_145371840(0,param_1);
  }
  if (iVar1 == 1) {
    if ((*(byte *)((longlong)param_1 + 0x312) & 7) == 2) {
      (**(code **)*param_1)(param_1,0,0);
    }
    if (param_4 != '\0') {
      DAT_14c7fdcb8 = DAT_14c7fdcb8 + 1;
      return 1;
    }
  }
  return iVar1;
}



// FUNCTION 1450ea910 FUN_1450ea910 body=359 status=ok
// SIG undefined FUN_1450ea910(void)

void FUN_1450ea910(longlong param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (((*(byte *)(param_1 + 0x314) & 0x10) == 0) &&
     (*(byte *)(param_1 + 0x314) = *(byte *)(param_1 + 0x314) | 0x10, (param_2 & 0xfffffffd) == 0))
  {
    lVar3 = 0;
    if (*(longlong *)(param_1 + 0x288) != 0) {
      lVar4 = param_1 + 0x10;
      if (param_1 == 0) {
        lVar4 = lVar3;
      }
      FUN_1450b0bd0(DAT_14c791068,*(longlong *)(param_1 + 0x288),lVar4);
      *(undefined8 *)(param_1 + 0x288) = 0;
    }
    if (*(longlong *)(param_1 + 0x290) != 0) {
      lVar4 = param_1 + 0x10;
      if (param_1 == 0) {
        lVar4 = lVar3;
      }
      FUN_1450b0bd0(DAT_14c791068,*(longlong *)(param_1 + 0x290),lVar4);
      *(undefined8 *)(param_1 + 0x290) = 0;
    }
    if (*(longlong *)(param_1 + 0x168) != 0) {
      if ((*(uint *)(*(longlong *)(param_1 + 0x168) + 0x28) >> 1 & 1) != 0) {
        puVar2 = (undefined4 *)FUN_1450d7310(*(undefined8 *)(param_1 + 0x1e8));
        puVar1 = *(undefined8 **)(puVar2 + 2);
        if (puVar1 != (undefined8 *)0x0) {
          if (*(short *)(puVar1 + 2) == 1) {
            if ((void *)*puVar1 != (void *)0x0) {
              *(undefined4 *)(puVar1 + 1) = 0;
              AK::MemoryMgr::Free(0,(void *)*puVar1);
              *puVar1 = 0;
              *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
            }
            AK::MemoryMgr::Free(0,puVar1);
          }
          else {
            *(short *)(puVar1 + 2) = *(short *)(puVar1 + 2) + -1;
          }
        }
        *(undefined8 *)(puVar2 + 2) = 0;
        *puVar2 = 0;
      }
      lVar4 = param_1 + 0x18;
      if (param_1 == 0) {
        lVar4 = lVar3;
      }
      FUN_1450b41a0(DAT_14c790fd0,*(undefined8 *)(param_1 + 0x168),lVar4);
      *(undefined8 *)(param_1 + 0x168) = 0;
      *(undefined4 *)(param_1 + 0x170) = 0;
    }
    if (((*(byte *)(param_1 + 0x314) & 0x40) != 0) && (*(int *)(param_1 + 0x388) == 0)) {
      *(undefined4 *)(param_1 + 0x388) = 0xffffffff;
    }
    *(byte *)(param_1 + 0x314) = *(byte *)(param_1 + 0x314) & 0xfe | 4;
  }
  return;
}



// FUNCTION 1450eaa80 FUN_1450eaa80 body=259 status=ok
// SIG undefined FUN_1450eaa80(void)

void FUN_1450eaa80(undefined8 *param_1,int *param_2,char param_3)

{
  char cVar1;
  undefined8 uVar2;
  
  if (((*(byte *)((longlong)param_1 + 0x314) & 0x40) == 0) &&
     ((param_1[0x52] == 0 || (cVar1 = FUN_14538f630(), cVar1 == '\0')))) {
    *(byte *)((longlong)param_1 + 0x314) = *(byte *)((longlong)param_1 + 0x314) | 0x20;
    if (*param_2 != 0) {
      FUN_1450ec990(param_1,1,0x2000000,*(undefined8 *)param_2);
      return;
    }
    if ((*(byte *)((longlong)param_1 + 0x312) & 0x78) == 0) {
      uVar2 = 1;
      goto LAB_1450eab69;
    }
    if (param_1[0x51] != 0) {
      FUN_1450b0c80(DAT_14c791068,param_1[0x51],0x2000000,0,0,4,0);
      return;
    }
    if (param_3 == '\0') {
      return;
    }
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(undefined4 *)(param_1 + 0x23) = 0;
    if ((*(byte *)((longlong)param_1 + 0x315) & 1) == 0) {
      *(byte *)((longlong)param_1 + 0x315) = *(byte *)((longlong)param_1 + 0x315) & 0xf1 | 1;
    }
  }
  uVar2 = 0;
LAB_1450eab69:
  (**(code **)*param_1)(param_1,0,uVar2);
  return;
}



// FUNCTION 1450eab90 FUN_1450eab90 body=200 status=ok
// SIG undefined FUN_1450eab90(void)

void FUN_1450eab90(longlong *param_1,int *param_2)

{
  undefined8 uVar1;
  
  FUN_1450e71d0(param_1 + 3);
  *(int *)((longlong)param_1 + 0x334) = *(int *)((longlong)param_1 + 0x334) + 1;
  if (*param_2 != 0) {
    FUN_1450ec990(param_1,0,0x4000000,*(undefined8 *)param_2);
    return;
  }
  if ((*(byte *)((longlong)param_1 + 0x312) & 0x78) == 0) {
    FUN_1450e71d0(param_1 + 3);
    uVar1 = 0;
  }
  else {
    if (param_1[0x52] != 0) {
      FUN_1450b0c80(DAT_14c791068,param_1[0x52],0x4000000,0,0,4,0);
      return;
    }
    FUN_1450e71d0(param_1 + 3);
    uVar1 = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x0001450eac54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,uVar1);
  return;
}



// FUNCTION 1450eac60 FUN_1450eac60 body=219 status=ok
// SIG undefined FUN_1450eac60(void)

void FUN_1450eac60(longlong *param_1,int *param_2,char param_3)

{
  FUN_1450e71d0(param_1 + 3);
  if ((param_3 == '\0') && (1 < *(uint *)((longlong)param_1 + 0x334))) {
    *(uint *)((longlong)param_1 + 0x334) = *(uint *)((longlong)param_1 + 0x334) - 1;
  }
  else {
    *(undefined4 *)((longlong)param_1 + 0x334) = 0;
    (**(code **)(*param_1 + 0x20))(param_1);
    if (*param_2 == 0) {
      if (param_1[0x52] == 0) {
        FUN_1450e71d0(param_1 + 3);
        *(undefined4 *)((longlong)param_1 + 0x2c4) = 0x3f800000;
        (**(code **)(param_1[3] + 0x78))(param_1 + 3);
      }
      else {
        FUN_1450b0c80(DAT_14c791068,param_1[0x52],0x8000000,0x3f800000,0,4,0);
      }
    }
    else {
      FUN_1450ec990(param_1,0,0x8000000,*(undefined8 *)param_2);
    }
  }
  return;
}



// FUNCTION 1450ead40 FUN_1450ead40 body=22 status=ok
// SIG undefined FUN_1450ead40(void)

void FUN_1450ead40(longlong param_1)

{
  *(undefined2 *)(param_1 + 0x310) = 1;
  FUN_145371840(4,param_1);
  return;
}



// FUNCTION 1450ead90 FUN_1450ead90 body=95 status=ok
// SIG undefined FUN_1450ead90(void)

void FUN_1450ead90(longlong param_1,int param_2,byte param_3)

{
  *(int *)(param_1 + 0x30c) = (int)((longlong)((ulonglong)DAT_14c72f42c * (longlong)param_2) / 1000)
  ;
  *(byte *)(param_1 + 0x316) = *(byte *)(param_1 + 0x316) & 0xfe | param_3;
  *(byte *)(param_1 + 0x315) = *(byte *)(param_1 + 0x315) & 0x3f | 0x40;
  FUN_145371840(5,param_1);
  return;
}



// FUNCTION 1450eadf0 FUN_1450eadf0 body=46 status=ok
// SIG undefined FUN_1450eadf0(void)

void FUN_1450eadf0(longlong param_1,undefined4 param_2,byte param_3)

{
  *(byte *)(param_1 + 0x315) = *(byte *)(param_1 + 0x315) | 0xc0;
  *(undefined4 *)(param_1 + 0x30c) = param_2;
  *(byte *)(param_1 + 0x316) = *(byte *)(param_1 + 0x316) & 0xfe | param_3;
  FUN_145371840(5,param_1);
  return;
}



// FUNCTION 1450eae20 FUN_1450eae20 body=537 status=ok
// SIG undefined FUN_1450eae20(void)

void FUN_1450eae20(longlong param_1,undefined8 param_2,int param_3,undefined4 param_4,
                  undefined4 param_5,float param_6)

{
  float fVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  char local_res18 [16];
  undefined4 local_58;
  undefined8 local_54;
  
  FUN_1450e71d0();
  switch(param_3) {
  case 5:
    if ((DAT_14c791034 == 1) && ((*(uint *)(param_1 + 0x128) >> 0x18 & 1) != 0)) {
      fVar4 = 0.0;
      if (param_6 != 0.0) {
        local_res18[0] = '\0';
        local_58 = 0x18;
        fVar3 = 0.0;
        local_54 = 0;
        lVar2 = FUN_1450899e0(param_1 + 0xf0,&local_58,local_res18);
        if (lVar2 != 0) {
          if (local_res18[0] == '\0') {
            *(undefined4 *)(lVar2 + 0xc) = 0;
          }
          fVar4 = *(float *)(lVar2 + 0xc);
          fVar3 = fVar4 + param_6;
          *(float *)(lVar2 + 0xc) = fVar3;
        }
        if (((*(uint *)(param_1 + 0x138) >> 0x18 & 1) != 0) ||
           ((fVar1 = *(float *)(param_1 + 0xb4), fVar4 == fVar1 && (fVar3 < fVar1)))) {
          *(byte *)(param_1 + 0x14b) = *(byte *)(param_1 + 0x14b) | 4;
        }
        else if (fVar1 < fVar3) {
          *(float *)(param_1 + 0xb4) = fVar3;
        }
      }
    }
    else {
      *(float *)(param_1 + 0xb4) = param_6 + *(float *)(param_1 + 0xb4);
    }
    break;
  default:
    FUN_1450e83c0(param_1,param_2,param_3,param_4,param_5,param_6);
    break;
  case 0x11:
    param_6 = *(float *)(param_1 + 0x314) + param_6;
    FUN_1450eb400(param_1 + -0x18,
                  (*(float *)(param_1 + 0x314) - *(float *)(param_1 + 0x308)) + param_6);
    if ((uint)ABS(param_6) < 0x7f800000) {
      *(float *)(param_1 + 0x314) = param_6;
    }
    break;
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x21:
    if (param_3 == 0x21) {
      *(short *)(param_1 + 0x148) = *(short *)(param_1 + 0x148) + (short)(int)param_6;
    }
    else if (*(longlong *)(param_1 + 0x290) != 0) {
      FUN_1450cee30(*(longlong *)(param_1 + 0x290),param_3 + -0x1d,(int)param_6 & 0xffff);
    }
    break;
  case 0x3b:
    break;
  }
  return;
}



// FUNCTION 1450eb0b0 FUN_1450eb0b0 body=49 status=ok
// SIG undefined FUN_1450eb0b0(void)

void FUN_1450eb0b0(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  
  plVar1 = (longlong *)(param_1 + 0x18);
  cVar2 = FUN_1450e9590(param_1 + 0x248);
  if (cVar2 != '\0') {
    FUN_1450e71d0(plVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x0001450eb0dd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x78))(plVar1);
  return;
}



// FUNCTION 1450eb0f0 FUN_1450eb0f0 body=85 status=ok
// SIG undefined FUN_1450eb0f0(void)

void FUN_1450eb0f0(longlong param_1,uint param_2,uint param_3)

{
  if ((*(longlong *)(param_1 + 0x2a8) != 0) && ((param_3 & 0xffffffef) != 0)) {
    FUN_1450ceda0();
  }
  if ((param_3 & 0x10) != 0) {
    *(ushort *)(param_1 + 0x160) = (ushort)(param_2 >> 4) & 1;
  }
  return;
}



// FUNCTION 1450eb1b0 FUN_1450eb1b0 body=8 status=ok
// SIG undefined FUN_1450eb1b0(void)

undefined8 FUN_1450eb1b0(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x288);
}



// FUNCTION 1450eb1c0 FUN_1450eb1c0 body=8 status=ok
// SIG undefined FUN_1450eb1c0(void)

undefined8 FUN_1450eb1c0(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x290);
}



// FUNCTION 1450eb1d0 FUN_1450eb1d0 body=241 status=ok
// SIG undefined FUN_1450eb1d0(void)

int FUN_1450eb1d0(longlong param_1,longlong *param_2,float param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *_Dst;
  int iVar3;
  float local_res18 [4];
  undefined4 local_18;
  undefined4 uStack_14;
  uint uStack_10;
  undefined4 uStack_c;
  
  local_18 = (undefined4)*param_2;
  uStack_14 = *(undefined4 *)((longlong)param_2 + 4);
  uStack_10 = *(uint *)(param_2 + 1);
  uStack_c = *(undefined4 *)((longlong)param_2 + 0xc);
  local_res18[0] = param_3;
  if (param_3 == 1.0) {
    plVar1 = *(longlong **)(param_1 + 0x248);
    _Dst = plVar1;
    while ((_Dst != plVar1 + (ulonglong)*(uint *)(param_1 + 0x250) * 3 &&
           ((*_Dst != *param_2 || (((uStack_10 ^ *(uint *)(_Dst + 1)) & 1) != 0))))) {
      _Dst = _Dst + 3;
    }
    if (_Dst != plVar1 + (ulonglong)*(uint *)(param_1 + 0x250) * 3) {
      if (_Dst < plVar1 + (ulonglong)(*(uint *)(param_1 + 0x250) - 1) * 3) {
        memmove(_Dst,_Dst + 3,
                (ulonglong)
                (uint)((int)(((longlong)(plVar1 + (ulonglong)(*(uint *)(param_1 + 0x250) - 1) * 3) -
                             (longlong)_Dst) / 0x18) * 0x18));
      }
      *(int *)(param_1 + 0x250) = *(int *)(param_1 + 0x250) + -1;
    }
    iVar3 = 1;
  }
  else {
    lVar2 = FUN_1450e9400(param_1 + 0x248,&local_18,local_res18);
    iVar3 = 2 - (uint)(lVar2 != 0);
  }
  (**(code **)(*(longlong *)(param_1 + 0x18) + 0x78))(param_1 + 0x18);
  return iVar3;
}



// FUNCTION 1450eb2f0 FUN_1450eb2f0 body=27 status=ok
// SIG undefined FUN_1450eb2f0(void)

void FUN_1450eb2f0(longlong param_1,undefined4 param_2)

{
  *(undefined8 *)(param_1 + 0x2a8) = 0;
  FUN_1450c6f80(param_1,4,param_2,0);
  return;
}



// FUNCTION 1450eb310 FUN_1450eb310 body=32 status=ok
// SIG undefined FUN_1450eb310(void)

void FUN_1450eb310(longlong param_1,undefined4 param_2)

{
  *(byte *)(param_1 + 0x312) = *(byte *)(param_1 + 0x312) & 0x9f | 0x18;
  FUN_1450c6f80(param_1,3,0,param_2);
  return;
}



// FUNCTION 1450eb330 FUN_1450eb330 body=8 status=ok
// SIG undefined FUN_1450eb330(void)

void FUN_1450eb330(longlong param_1)

{
  *(byte *)(param_1 + 0x312) = *(byte *)(param_1 + 0x312) & 0x87;
  return;
}



// FUNCTION 1450eb340 FUN_1450eb340 body=18 status=ok
// SIG undefined FUN_1450eb340(void)

void FUN_1450eb340(longlong param_1)

{
  *(byte *)(param_1 + 0x312) = *(byte *)(param_1 + 0x312) & 0x8f | 8;
  return;
}



// FUNCTION 1450eb360 FUN_1450eb360 body=18 status=ok
// SIG undefined FUN_1450eb360(void)

void FUN_1450eb360(longlong param_1)

{
  *(byte *)(param_1 + 0x312) = *(byte *)(param_1 + 0x312) & 0x9f | 0x18;
  return;
}



// FUNCTION 1450eb380 FUN_1450eb380 body=18 status=ok
// SIG undefined FUN_1450eb380(void)

void FUN_1450eb380(longlong param_1)

{
  *(byte *)(param_1 + 0x312) = *(byte *)(param_1 + 0x312) & 0x9f | 0x18;
  return;
}



// FUNCTION 1450eb3a0 FUN_1450eb3a0 body=96 status=ok
// SIG undefined FUN_1450eb3a0(void)

void FUN_1450eb3a0(longlong *param_1,int param_2,int param_3,undefined4 param_4)

{
  if (param_2 == 3) {
    *(byte *)((longlong)param_1 + 0x314) = *(byte *)((longlong)param_1 + 0x314) | 1;
    (**(code **)(*param_1 + 0x50))();
    (**(code **)(*param_1 + 0x10))(param_1,param_4);
  }
  else if ((param_2 == 4) && (param_3 == 1)) {
    *(byte *)((longlong)param_1 + 0x314) = *(byte *)((longlong)param_1 + 0x314) & 0xfe | 8;
    return;
  }
  return;
}



// FUNCTION 1450eb400 FUN_1450eb400 body=199 status=ok
// SIG undefined FUN_1450eb400(void)

void FUN_1450eb400(longlong param_1,float param_2)

{
  undefined8 *puVar1;
  float fVar2;
  
  if (param_2 <= 0.0) {
    param_2 = 0.0;
  }
  if (100.0 <= param_2) {
    param_2 = 100.0;
  }
  if (param_2 != *(float *)(param_1 + 800)) {
    puVar1 = *(undefined8 **)(param_1 + 0x378);
    if (puVar1 != puVar1 + *(uint *)(param_1 + 0x380)) {
      do {
        FUN_1450d3d70(*puVar1,param_2,param_1);
        puVar1 = puVar1 + 1;
      } while (puVar1 != (undefined8 *)
                         (*(longlong *)(param_1 + 0x378) + (ulonglong)*(uint *)(param_1 + 0x380) * 8
                         ));
    }
    if (param_2 <= 0.0) {
      param_2 = 0.0;
    }
    fVar2 = 100.0;
    if (param_2 <= 100.0) {
      fVar2 = param_2;
    }
    if ((uint)ABS(fVar2) < 0x7f800000) {
      *(float *)(param_1 + 800) = fVar2;
    }
  }
  return;
}



// FUNCTION 1450eb4d0 FUN_1450eb4d0 body=136 status=ok
// SIG undefined FUN_1450eb4d0(void)

int FUN_1450eb4d0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  
  fVar4 = *(float *)(param_1 + 0x32c);
  lVar1 = FUN_14507bcb0(param_1 + 0x1a0);
  if ((lVar1 != 0) && (*(byte *)(lVar1 + 0x1f8) != 0xff)) {
    lVar2 = (ulonglong)*(byte *)(lVar1 + 0x1f8) + 2;
    if ((*(longlong *)(lVar1 + lVar2 * 0x18) != 0) && (lVar1 + lVar2 * 0x18 != 0)) {
      fVar3 = (float)FUN_1450ecda0(param_1);
      fVar4 = fVar3 + fVar4;
      if (fVar4 <= 0.0) {
        fVar4 = 0.0;
      }
      if (100.0 <= fVar4) {
        fVar4 = 100.0;
      }
    }
  }
  return (int)fVar4;
}



// FUNCTION 1450eb560 FUN_1450eb560 body=163 status=ok
// SIG undefined FUN_1450eb560(void)

uint FUN_1450eb560(longlong param_1,uint *param_2)

{
  char cVar1;
  uint uVar2;
  byte bVar3;
  
  bVar3 = *(byte *)(param_1 + 0x313);
  if (-1 < (char)bVar3) {
    *(byte *)(param_1 + 0x313) = bVar3 | 0x80;
    uVar2 = FUN_14536ef90(*(undefined8 *)(param_1 + 0x1e8));
    if (uVar2 == 3) {
      cVar1 = (**(code **)(**(longlong **)(param_1 + 0x1e8) + 0x240))
                        (*(longlong **)(param_1 + 0x1e8),*(undefined8 *)(param_1 + 0x298));
      uVar2 = (cVar1 != '\0') + 1;
    }
    bVar3 = (*(byte *)(param_1 + 0x313) ^ (byte)*param_2) & 7 ^ *(byte *)(param_1 + 0x313);
    *(byte *)(param_1 + 0x313) = ((char)uVar2 << 3 ^ bVar3) & 0x78 ^ bVar3;
    return uVar2;
  }
  *param_2 = bVar3 & 7;
  return *(byte *)(param_1 + 0x313) >> 3 & 0xf;
}



// FUNCTION 1450eb610 FUN_1450eb610 body=151 status=ok
// SIG undefined FUN_1450eb610(void)

bool FUN_1450eb610(longlong param_1)

{
  char cVar1;
  int iVar2;
  byte bVar3;
  byte local_res8 [32];
  
  bVar3 = *(byte *)(param_1 + 0x313);
  if (-1 < (char)bVar3) {
    *(byte *)(param_1 + 0x313) = bVar3 | 0x80;
    iVar2 = FUN_14536ef90(*(undefined8 *)(param_1 + 0x1e8),local_res8);
    if (iVar2 == 3) {
      cVar1 = (**(code **)(**(longlong **)(param_1 + 0x1e8) + 0x240))
                        (*(longlong **)(param_1 + 0x1e8),*(undefined8 *)(param_1 + 0x298));
      iVar2 = (cVar1 != '\0') + 1;
    }
    bVar3 = *(byte *)(param_1 + 0x313) & 0xf8 | local_res8[0] & 7;
    *(byte *)(param_1 + 0x313) = ((char)iVar2 << 3 ^ bVar3) & 0x78 ^ bVar3;
    return iVar2 == 0;
  }
  return (bVar3 >> 3 & 0xf) == 0;
}



// FUNCTION 1450eb6b0 FUN_1450eb6b0 body=264 status=ok
// SIG undefined FUN_1450eb6b0(void)

void FUN_1450eb6b0(longlong param_1)

{
  float fVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  float fVar8;
  
  *(undefined4 *)(param_1 + 0x18c) = 0x42ca0000;
  lVar4 = FUN_14507bcb0(param_1 + 0x1a0);
  if (lVar4 != 0) {
    if ((*(char *)(param_1 + 0x1b4) < '\0') && ((*(byte *)(param_1 + 0x220) & 8) != 0)) {
      uVar6 = *(undefined8 *)(param_1 + 0x1d0);
      uVar7 = *(uint *)(param_1 + 0x1d8);
    }
    else {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 8);
      uVar6 = *(undefined8 *)(lVar2 + 0x20);
      uVar7 = (uint)*(ushort *)(lVar2 + 0x38);
    }
    fVar1 = *(float *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 8) + 0x78);
    uVar5 = FUN_1450d2460();
    fVar8 = (float)FUN_1450c7700(uVar6,uVar7,uVar5);
    (**(code **)(*(longlong *)(param_1 + 0x18) + 0x88))(param_1 + 0x18,lVar4,fVar8 / fVar1);
  }
  if ((*(longlong *)(param_1 + 0x1e0) != 0) && (*(longlong *)(param_1 + 0x168) != 0)) {
    uVar7 = *(uint *)(*(longlong *)(param_1 + 0x1e0) + 0x30);
    FUN_1453900b0(*(longlong *)(param_1 + 0x168),uVar7 >> 0x1f);
    if (((int)uVar7 < 0) && ((*(uint *)(*(longlong *)(param_1 + 0x168) + 0x28) >> 1 & 1) != 0)) {
      cVar3 = FUN_14538fd80();
      if (cVar3 != '\0') {
        FUN_1450e8900(param_1 + 0x18);
      }
    }
  }
  return;
}



// FUNCTION 1450eb7c0 FUN_1450eb7c0 body=216 status=ok
// SIG undefined FUN_1450eb7c0(void)

void FUN_1450eb7c0(undefined8 *param_1,char param_2)

{
  byte bVar1;
  char cVar2;
  
  bVar1 = *(byte *)((longlong)param_1 + 0x315);
  if ((bVar1 & 1) == 0) {
    *(byte *)((longlong)param_1 + 0x315) = (param_2 * '\x02' ^ bVar1) & 0xe ^ bVar1 | 1;
  }
  if ((*(byte *)((longlong)param_1 + 0x314) & 0x40) == 0) {
    if (param_1[0x52] != 0) {
      cVar2 = FUN_14538f630();
      if (cVar2 != '\0') goto LAB_1450eb885;
    }
    *(byte *)((longlong)param_1 + 0x314) = *(byte *)((longlong)param_1 + 0x314) | 0x20;
    if ((*(byte *)((longlong)param_1 + 0x312) & 0x78) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001450eb828. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,0,1);
      return;
    }
    if (param_1[0x51] != 0) {
      FUN_1450b0c80(DAT_14c791068,param_1[0x51],0x2000000,0,0,4,0);
      return;
    }
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(undefined4 *)(param_1 + 0x23) = 0;
    if ((*(byte *)((longlong)param_1 + 0x315) & 1) == 0) {
      *(byte *)((longlong)param_1 + 0x315) = *(byte *)((longlong)param_1 + 0x315) & 0xf1 | 1;
    }
  }
LAB_1450eb885:
                    /* WARNING: Could not recover jumptable at 0x0001450eb895. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)(param_1,0,0);
  return;
}



// FUNCTION 1450eb8b0 FUN_1450eb8b0 body=90 status=ok
// SIG undefined FUN_1450eb8b0(void)

undefined1 FUN_1450eb8b0(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined1 uVar2;
  
  if (*(longlong *)(param_1 + 0x340) == param_2) {
    cVar1 = FUN_1450eb990();
    if (cVar1 == '\0') {
      return 1;
    }
  }
  if (*(longlong *)(param_1 + 0x2a8) != 0) {
    uVar2 = FUN_1450ce660(*(longlong *)(param_1 + 0x2a8),param_2);
    return uVar2;
  }
  return 0;
}



// FUNCTION 1450eb910 FUN_1450eb910 body=123 status=ok
// SIG undefined FUN_1450eb910(void)

undefined1 FUN_1450eb910(longlong param_1,longlong param_2,char param_3)

{
  char cVar1;
  undefined1 uVar2;
  
  if (*(longlong *)(param_1 + 0x348) == param_2) {
    if (param_3 != '\0') {
      cVar1 = FUN_1450eb990();
      if (cVar1 != '\0') goto LAB_1450eb952;
    }
    return 1;
  }
LAB_1450eb952:
  if (*(longlong *)(param_1 + 0x2a8) != 0) {
    uVar2 = FUN_1450ce720(*(longlong *)(param_1 + 0x2a8),param_2,param_3);
    return uVar2;
  }
  return 0;
}



// FUNCTION 1450eb990 FUN_1450eb990 body=212 status=ok
// SIG undefined FUN_1450eb990(void)

undefined8 FUN_1450eb990(longlong param_1)

{
  char cVar1;
  int iVar2;
  undefined8 local_28;
  longlong lStack_20;
  int local_18;
  undefined4 uStack_14;
  
  if (*(longlong *)(param_1 + 0x2a8) != 0) {
    cVar1 = FUN_1450cf100(*(longlong *)(param_1 + 0x2a8),param_1);
    if (cVar1 != '\0') {
      local_18 = 0;
      local_28 = 0;
      lStack_20 = 0;
      FUN_14536d420(*(undefined8 *)(param_1 + 0x2a0),&local_28);
      if ((lStack_20 != 0) && (local_18 == *(int *)(param_1 + 0x350))) {
        iVar2 = FUN_1450cf170(*(undefined8 *)(param_1 + 0x2a8),param_1,lStack_20,
                              *(undefined8 *)(param_1 + 0x348));
        if (iVar2 == 1) {
          FUN_14536d450(*(undefined8 *)(param_1 + 0x2a0),param_1 + 0x340);
          *(undefined8 *)(param_1 + 0x340) = local_28;
          *(longlong *)(param_1 + 0x348) = lStack_20;
          *(ulonglong *)(param_1 + 0x350) = CONCAT44(uStack_14,local_18);
          return 1;
        }
      }
      FUN_14536d450(*(undefined8 *)(param_1 + 0x2a0),&local_28);
    }
  }
  return 0;
}



// FUNCTION 1450eba70 FUN_1450eba70 body=17 status=ok
// SIG undefined FUN_1450eba70(void)

void FUN_1450eba70(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001450eba7a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x1e8) + 0x1b8))();
  return;
}



// FUNCTION 1450eba90 FUN_1450eba90 body=26 status=ok
// SIG undefined FUN_1450eba90(void)

void FUN_1450eba90(longlong param_1,uint param_2)

{
  int *piVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  uint *puVar6;
  longlong *plVar7;
  void *_Dst;
  longlong *plVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong *plVar12;
  uint auStackX_10 [2];
  char cStackX_18;
  undefined1 auStackX_20 [8];
  undefined1 auStack_88 [8];
  longlong *plStack_80;
  undefined8 *puStack_78;
  longlong *plStack_70;
  undefined4 uStack_68;
  undefined2 uStack_64;
  undefined1 uStack_62;
  undefined8 uStack_60;
  uint uStack_58;
  longlong *plStack_50;
  undefined2 uStack_48;
  
  if (((*(byte *)(param_1 + 0x220) & 0x40) != 0) ||
     (lVar2 = *(longlong *)(param_1 + 0x2a8), lVar2 == 0)) {
    return;
  }
  uVar11 = (ulonglong)(int)param_2;
  if (param_2 == 0xffffffff) {
    return;
  }
  lVar5 = (longlong)(int)(param_2 + 1);
  cStackX_18 = '\0';
  plVar7 = (longlong *)0x0;
  if (lVar5 < 4) {
    plVar8 = (longlong *)(lVar2 + 0xb0 + lVar5 * 8);
    do {
      if ((longlong *)*plVar8 != (longlong *)0x0) {
        cStackX_18 = '\x01';
        plVar7 = (longlong *)*plVar8;
        break;
      }
      lVar5 = lVar5 + 1;
      plVar8 = plVar8 + 1;
      plVar7 = (longlong *)0x0;
    } while (lVar5 < 4);
  }
  lVar5 = (longlong)(int)(param_2 - 1);
  plVar8 = (longlong *)(lVar2 + 0x78);
  if (plVar7 != (longlong *)0x0) {
    plVar8 = plVar7;
  }
  auStackX_10[0] = param_2;
  plStack_70 = plVar8;
  if (-1 < (int)(param_2 - 1)) {
    plVar7 = (longlong *)(lVar2 + 0xb0 + lVar5 * 8);
    do {
      plVar12 = (longlong *)*plVar7;
      if (plVar12 != (longlong *)0x0) {
        plStack_80 = *(longlong **)(*(longlong *)(lVar2 + 0xe8) + 0x18);
        uStack_60 = plStack_80[0x56];
        uStack_58 = *(uint *)(plStack_80 + 0x57);
        puVar6 = (uint *)(**(code **)(*plVar12 + 0x90))(plVar12,auStackX_20);
        uVar10 = *puVar6;
        goto LAB_1450ce9fa;
      }
      plVar7 = plVar7 + -1;
      lVar5 = lVar5 + -1;
    } while (-1 < lVar5);
  }
  plVar12 = *(longlong **)(lVar2 + 0xf8);
  if (plVar12 == (longlong *)0x0) {
    plVar12 = *(longlong **)(lVar2 + 0xe8);
    plStack_80 = (longlong *)plVar12[3];
    uVar10 = (uint)((ulonglong)plStack_80[0x56] >> 0x20);
    uStack_58 = *(uint *)(plStack_80 + 0x57);
  }
  else {
    plStack_80 = *(longlong **)(*(longlong *)(lVar2 + 0xe8) + 0x18);
    uVar10 = (uint)((ulonglong)plStack_80[0x56] >> 0x20);
    uStack_58 = *(uint *)(plStack_80 + 0x57);
  }
LAB_1450ce9fa:
  uStack_60._0_4_ = DAT_14c72f42c;
  puStack_78 = (undefined8 *)((ulonglong)param_2 * 8 + 0xb0 + lVar2);
  uStack_58 = ((uVar10 & 0xff) * 0x20 | 0xa000) << 3 | uStack_58 & 0xfffd0020 | 0x20;
  plVar7 = (longlong *)*puStack_78;
  uStack_60._4_4_ = uVar10;
  if (plVar7 != (longlong *)0x0) {
    puVar6 = (uint *)(**(code **)(*plVar7 + 0x90))(plVar7,auStack_88);
    uVar9 = auStackX_10[0];
    uVar10 = *puVar6;
    if ((int)param_2 < 4) {
      plVar8 = (longlong *)(lVar2 + 0xb0 + uVar11 * 8);
      do {
        if ((((longlong *)*plVar8 != (longlong *)0x0) &&
            (cVar3 = (**(code **)(*(longlong *)*plVar8 + 0x70))(), cVar3 != '\0')) &&
           (param_2 != uVar9)) break;
        param_2 = param_2 + 1;
        plVar8 = plVar8 + 1;
      } while ((int)param_2 < 4);
      uVar11 = (ulonglong)auStackX_10[0];
      plVar8 = plStack_70;
    }
    FUN_14539c5c0(plVar8);
    (**(code **)(*plVar7 + 0x60))(plVar7);
    (**(code **)*plVar7)(plVar7,0);
    AK::MemoryMgr::Free(5,plVar7);
    *puStack_78 = 0;
  }
  plVar7 = (longlong *)0x0;
  plStack_50 = (longlong *)0x0;
  (**(code **)(*(longlong *)plStack_80[0x3d] + 0x1b0))
            ((longlong *)plStack_80[0x3d],uVar11 & 0xffffffff,&plStack_50,plStack_80[4]);
  uVar9 = uStack_60._4_4_;
  if (plStack_50 == (longlong *)0x0) {
LAB_1450cece4:
    if ((((char)uVar9 != (char)uVar10) || (((uVar9 ^ uVar10) & 0xf00) != 0)) ||
       (((uVar9 ^ uVar10) & 0xfffff000) != 0)) {
      if (cStackX_18 != '\0') {
        FUN_1450ce8b0(lVar2,(int)uVar11 + 1);
        goto LAB_1450ced4b;
      }
      FUN_145381df0(lVar2 + 0x88);
      FUN_145381d40(lVar2 + 0x88,uVar9);
      *(uint *)(lVar2 + 0x160) = uVar9;
    }
    if (plVar7 != (longlong *)0x0) {
      plVar12 = plVar7;
    }
  }
  else {
    plStack_80 = (longlong *)0x0;
    plStack_70 = (longlong *)(((ulonglong)plStack_70 >> 8 & 0xffffff) << 8);
    uStack_68 = 1;
    uStack_64 = 0x100;
    uStack_62 = 0;
    iVar4 = FUN_145089070((int)plStack_50[7],&plStack_80,&plStack_70);
    if (iVar4 == 1) {
      iVar4 = FUN_1450894a0((int)plStack_50[7],3,&plStack_70);
      if (iVar4 == 0) {
        cVar3 = uStack_68._3_1_;
        if ((char)uStack_68 != '\0') {
          cVar3 = uStack_68._1_1_;
        }
        if ((cVar3 == '\0') && ((char)uStack_64 == '\0')) {
          if ((char)uStack_68 == '\0') {
            _Dst = AK::MemoryMgr::Malloc(5,0x168);
            if (_Dst != (void *)0x0) {
              memset(_Dst,0,0x168);
              plVar7 = (longlong *)FUN_1450cff30(_Dst);
              if (plVar7 != (longlong *)0x0) goto LAB_1450cec66;
            }
          }
          else if (uStack_68._3_1_ == '\0') {
            plVar7 = AK::MemoryMgr::Malloc(5,0xe8);
            if (plVar7 != (longlong *)0x0) {
              memset(plVar7,0,0xe8);
              FUN_1450cfd60(plVar7);
              *plVar7 = (longlong)&PTR_FUN_149c27b00;
              *(undefined1 *)(plVar7 + 0x1c) = 0;
              *(uint *)(plVar7 + 0x1c) = *(uint *)(plVar7 + 0x1c) & 0xff;
LAB_1450cec66:
              iVar4 = (**(code **)(*plVar7 + 0x58))
                                (plVar7,plStack_80,&plStack_50,uVar11 & 0xffffffff,lVar2,&uStack_60)
              ;
              if (iVar4 == 1) {
                *puStack_78 = plVar7;
                *(undefined2 *)((longlong)plVar7 + 0xca) = uStack_48;
                (**(code **)(*plVar7 + 0x50))(plVar7,plVar12);
                puVar6 = (uint *)(**(code **)(*plVar7 + 0x90))(plVar7,auStackX_10);
                uVar9 = *puVar6;
                goto LAB_1450cece4;
              }
              (**(code **)(*plVar7 + 0x60))();
              (**(code **)*plVar7)(plVar7,0);
              AK::MemoryMgr::Free(5,plVar7);
              goto LAB_1450ced3f;
            }
          }
          else {
            plVar7 = AK::MemoryMgr::Malloc(5,0xe8);
            if (plVar7 != (longlong *)0x0) {
              memset(plVar7,0,0xe8);
              FUN_1450cfd60(plVar7);
              *(undefined1 *)(plVar7 + 0x1c) = 0;
              *(uint *)(plVar7 + 0x1c) = *(uint *)(plVar7 + 0x1c) & 0xff;
              *plVar7 = (longlong)&PTR_FUN_149c27b98;
              goto LAB_1450cec66;
            }
          }
        }
      }
      (**(code **)(*plStack_80 + 8))(plStack_80,&PTR_PTR_14c72f458);
    }
  }
LAB_1450ced3f:
  (**(code **)(*plVar8 + 0x50))(plVar8,plVar12);
LAB_1450ced4b:
  if (plStack_50 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plStack_50 + 0x14);
    iVar4 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      (**(code **)(*plStack_50 + 0x18))();
    }
  }
  return;
}



// FUNCTION 1450ebab0 FUN_1450ebab0 body=263 status=ok
// SIG undefined FUN_1450ebab0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1450ebab0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  longlong *plVar4;
  byte bVar5;
  uint local_res8 [8];
  
  if ((*(byte *)(param_1 + 0x316) & 4) == 0) {
    *(byte *)(param_1 + 0x316) = *(byte *)(param_1 + 0x316) | 4;
    plVar4 = *(longlong **)(param_1 + 0x378);
    if (plVar4 != plVar4 + *(uint *)(param_1 + 0x380)) {
      do {
        lVar1 = *plVar4;
        plVar4 = plVar4 + 1;
        *(short *)(lVar1 + 0x2a) = *(short *)(lVar1 + 0x2a) + 1;
      } while (plVar4 != (longlong *)
                         (*(longlong *)(param_1 + 0x378) + (ulonglong)*(uint *)(param_1 + 0x380) * 8
                         ));
    }
    bVar5 = *(byte *)(param_1 + 0x313);
    if ((char)bVar5 < '\0') {
      local_res8[0] = bVar5 & 7;
      uVar3 = bVar5 >> 3 & 0xf;
    }
    else {
      *(byte *)(param_1 + 0x313) = bVar5 | 0x80;
      uVar3 = FUN_14536ef90(*(undefined8 *)(param_1 + 0x1e8),local_res8);
      if (uVar3 == 3) {
        cVar2 = (**(code **)(**(longlong **)(param_1 + 0x1e8) + 0x240))
                          (*(longlong **)(param_1 + 0x1e8),*(undefined8 *)(param_1 + 0x298));
        uVar3 = (cVar2 != '\0') + 1;
      }
      bVar5 = *(byte *)(param_1 + 0x313) & 0xf8 | (byte)local_res8[0] & 7;
      *(byte *)(param_1 + 0x313) = ((char)uVar3 << 3 ^ bVar5) & 0x78 ^ bVar5;
    }
    if ((uVar3 == 2) && (local_res8[0] != 1)) {
      FUN_1450c6970();
    }
    _DAT_14c79c38c = _DAT_14c79c38c + 1;
  }
  return;
}



// FUNCTION 1450ebbc0 FUN_1450ebbc0 body=263 status=ok
// SIG undefined FUN_1450ebbc0(void)

void FUN_1450ebbc0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  longlong *plVar4;
  byte bVar5;
  uint local_res8 [8];
  
  if ((*(byte *)(param_1 + 0x316) & 4) != 0) {
    *(byte *)(param_1 + 0x316) = *(byte *)(param_1 + 0x316) & 0xfb;
    plVar4 = *(longlong **)(param_1 + 0x378);
    if (plVar4 != plVar4 + *(uint *)(param_1 + 0x380)) {
      do {
        lVar1 = *plVar4;
        plVar4 = plVar4 + 1;
        *(short *)(lVar1 + 0x2a) = *(short *)(lVar1 + 0x2a) + -1;
      } while (plVar4 != (longlong *)
                         (*(longlong *)(param_1 + 0x378) + (ulonglong)*(uint *)(param_1 + 0x380) * 8
                         ));
    }
    bVar5 = *(byte *)(param_1 + 0x313);
    if ((char)bVar5 < '\0') {
      local_res8[0] = bVar5 & 7;
      uVar3 = bVar5 >> 3 & 0xf;
    }
    else {
      *(byte *)(param_1 + 0x313) = bVar5 | 0x80;
      uVar3 = FUN_14536ef90(*(undefined8 *)(param_1 + 0x1e8),local_res8);
      if (uVar3 == 3) {
        cVar2 = (**(code **)(**(longlong **)(param_1 + 0x1e8) + 0x240))
                          (*(longlong **)(param_1 + 0x1e8),*(undefined8 *)(param_1 + 0x298));
        uVar3 = (cVar2 != '\0') + 1;
      }
      bVar5 = *(byte *)(param_1 + 0x313) & 0xf8 | (byte)local_res8[0] & 7;
      *(byte *)(param_1 + 0x313) = ((char)uVar3 << 3 ^ bVar5) & 0x78 ^ bVar5;
    }
    if ((uVar3 == 2) && (local_res8[0] != 1)) {
      FUN_1450c6980();
    }
    FUN_1450c6960();
  }
  return;
}



// FUNCTION 1450ebcd0 FUN_1450ebcd0 body=404 status=ok
// SIG undefined FUN_1450ebcd0(void)

void FUN_1450ebcd0(undefined8 *param_1,char param_2)

{
  char cVar1;
  uint uVar2;
  byte bVar3;
  undefined8 uVar4;
  uint local_res8 [2];
  
  bVar3 = *(byte *)((longlong)param_1 + 0x313);
  if ((char)bVar3 < '\0') {
    local_res8[0] = bVar3 & 7;
    uVar2 = bVar3 >> 3 & 0xf;
  }
  else {
    *(byte *)((longlong)param_1 + 0x313) = bVar3 | 0x80;
    uVar2 = FUN_14536ef90(param_1[0x3d],local_res8);
    if (uVar2 == 3) {
      cVar1 = (**(code **)(*(longlong *)param_1[0x3d] + 0x240))
                        ((longlong *)param_1[0x3d],param_1[0x53]);
      uVar2 = (cVar1 != '\0') + 1;
    }
    bVar3 = *(byte *)((longlong)param_1 + 0x313) & 0xf8 | (byte)local_res8[0] & 7;
    *(byte *)((longlong)param_1 + 0x313) = ((char)uVar2 << 3 ^ bVar3) & 0x78 ^ bVar3;
  }
  if (uVar2 != 1) {
    if (uVar2 != 2) {
      return;
    }
    *(byte *)((longlong)param_1 + 0x221) = *(byte *)((longlong)param_1 + 0x221) | 1;
    return;
  }
  bVar3 = *(byte *)((longlong)param_1 + 0x315);
  if ((bVar3 & 1) == 0) {
    *(byte *)((longlong)param_1 + 0x315) = (param_2 * '\x02' ^ bVar3) & 0xe ^ bVar3 | 1;
  }
  if (((*(byte *)((longlong)param_1 + 0x314) & 0x40) == 0) &&
     ((param_1[0x52] == 0 || (cVar1 = FUN_14538f630(), cVar1 == '\0')))) {
    *(byte *)((longlong)param_1 + 0x314) = *(byte *)((longlong)param_1 + 0x314) | 0x20;
    if ((*(byte *)((longlong)param_1 + 0x312) & 0x78) == 0) {
      uVar4 = 1;
      goto LAB_1450ebe4a;
    }
    if (param_1[0x51] != 0) {
      FUN_1450b0c80(DAT_14c791068,param_1[0x51],0x2000000,0,0,4,0);
      return;
    }
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(undefined4 *)(param_1 + 0x23) = 0;
    if ((*(byte *)((longlong)param_1 + 0x315) & 1) == 0) {
      *(byte *)((longlong)param_1 + 0x315) = *(byte *)((longlong)param_1 + 0x315) & 0xf1 | 1;
    }
  }
  uVar4 = 0;
LAB_1450ebe4a:
  (**(code **)*param_1)(param_1,0,uVar4);
  return;
}



// FUNCTION 1450ebee0 FUN_1450ebee0 body=218 status=ok
// SIG undefined FUN_1450ebee0(void)

void FUN_1450ebee0(longlong param_1,longlong param_2,uint param_3)

{
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  longlong local_18;
  
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_14538e540();
  }
  if (*(int *)(param_2 + 0x148) != 0) {
    local_38 = *(undefined4 *)(param_1 + 0x360);
    local_40 = *(undefined8 *)(param_1 + 0x358);
    local_30 = *(undefined8 *)(param_1 + 0x368);
    local_28 = *(undefined4 *)(param_1 + 0x30);
    local_48 = *(undefined8 *)(param_1 + 0x20);
    local_20 = *(undefined4 *)(param_1 + 0x338);
    local_24 = *(undefined4 *)(param_1 + 0x280);
    if ((*(byte *)(param_1 + 0x31c) & 1) == 0) {
      local_1c = 0;
    }
    else {
      local_1c = (param_3 & 0xff ^ 1) + 1;
    }
    local_18 = param_1;
    FUN_14507d750(DAT_14c791028,param_2,&local_48,param_1 + 0x90);
  }
  return;
}



// FUNCTION 1450ebfc0 FUN_1450ebfc0 body=71 status=ok
// SIG undefined FUN_1450ebfc0(void)

void FUN_1450ebfc0(longlong param_1,undefined8 param_2,longlong *param_3)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  if ((*(byte *)(param_1 + 0x220) & 0x40) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001450ebfda. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x1e8) + 0x1b0))();
    return;
  }
  plVar3 = (longlong *)*param_3;
  *param_3 = 0;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0x14);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001450ec002. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x18))();
      return;
    }
  }
  return;
}



// FUNCTION 1450ec010 FUN_1450ec010 body=1735 status=ok
// SIG undefined FUN_1450ec010(void)

void FUN_1450ec010(longlong param_1,longlong param_2)

{
  float *pfVar1;
  undefined4 *puVar2;
  byte bVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  char cVar10;
  int iVar11;
  undefined4 *puVar12;
  undefined1 *puVar13;
  longlong lVar14;
  byte *pbVar15;
  longlong lVar16;
  float *pfVar17;
  ulonglong uVar18;
  undefined4 *puVar19;
  longlong *plVar20;
  undefined1 *puVar21;
  bool bVar22;
  float fVar23;
  float local_res8;
  float fStackX_c;
  longlong local_1c8;
  longlong lStack_1c0;
  undefined8 local_1b8;
  ulonglong local_1b0;
  undefined4 local_1a8;
  undefined8 local_1a0;
  undefined4 local_198;
  undefined4 local_194;
  undefined8 local_190;
  longlong local_188;
  undefined1 local_178 [320];
  undefined8 local_38;
  undefined8 local_30;
  
  bVar3 = *(byte *)(param_1 + 0x208);
  plVar20 = (longlong *)0x0;
  if ((bVar3 & 0x40) == 0) {
    FUN_1450d5280(*(undefined8 *)(param_1 + 0x1d0),&local_1c8);
    bVar3 = *(byte *)(param_1 + 0x208);
  }
  else {
    local_1c8 = 0;
    lStack_1c0 = 0;
  }
  if ((((param_2 == 0) || (*(longlong *)(param_2 + 0x250) != lStack_1c0)) ||
      (*(longlong *)(param_2 + 0x248) != local_1c8)) || ((bVar3 & 0x40) != 0)) {
    *(undefined8 *)(param_1 + 0x88) = 0;
    *(undefined8 *)(param_1 + 0x90) = 0;
    *(undefined8 *)(param_1 + 0x98) = 0;
    *(undefined8 *)(param_1 + 0xa0) = 0;
    *(undefined8 *)(param_1 + 0xa8) = 0;
    *(undefined8 *)(param_1 + 0xb0) = 0;
    *(undefined8 *)(param_1 + 0xb8) = 0;
    *(undefined8 *)(param_1 + 0xc0) = 0;
    *(undefined8 *)(param_1 + 200) = 0;
    *(undefined8 *)(param_1 + 0xd0) = 0;
    *(undefined8 *)(param_1 + 0xd8) = 0;
    *(undefined8 *)(param_1 + 0xe0) = 0;
    *(undefined8 *)(param_1 + 0xe8) = 0;
    *(undefined4 *)(param_1 + 0xf8) = 0;
    *(undefined8 *)(param_1 + 0x138) = 0;
    *(undefined8 *)(param_1 + 0x140) = 0;
    *(undefined8 *)(param_1 + 0x104) = 0;
    *(undefined8 *)(param_1 + 0x10c) = 0;
    *(byte *)(param_1 + 0x14b) = *(byte *)(param_1 + 0x14b) & 0xf8;
    *(undefined1 *)(param_1 + 0x14a) = 0;
    *(undefined4 *)(param_1 + 0x114) = 0;
    *(undefined2 *)(param_1 + 0x148) = 0;
    *(undefined4 *)(param_1 + 0x100) = 0x3f800000;
    puVar12 = *(undefined4 **)(param_1 + 0x230);
    uVar18 = (ulonglong)*(uint *)(param_1 + 0x238);
    puVar19 = puVar12;
    if (puVar12 != puVar12 + uVar18 * 6) {
      do {
        if ((*(byte *)(puVar12 + 2) & 2) == 0) {
          puVar2 = puVar19 + (uVar18 * 3 + -3) * 2;
          if (puVar12 < puVar2) {
            uVar7 = puVar2[1];
            uVar8 = puVar2[2];
            uVar9 = puVar2[3];
            *puVar12 = *puVar2;
            puVar12[1] = uVar7;
            puVar12[2] = uVar8;
            puVar12[3] = uVar9;
            *(undefined8 *)(puVar12 + 4) = *(undefined8 *)(puVar2 + 4);
            puVar19 = *(undefined4 **)(param_1 + 0x230);
          }
          *(int *)(param_1 + 0x238) = *(int *)(param_1 + 0x238) + -1;
          uVar18 = (ulonglong)*(uint *)(param_1 + 0x238);
        }
        else {
          puVar12 = puVar12 + 6;
        }
      } while (puVar12 != puVar19 + uVar18 * 6);
    }
    bVar22 = true;
    if (lStack_1c0 != 0) {
      local_1b8 = 0;
      local_1b0 = local_1b0 & 0xffffffff00000000;
      local_1a8 = 0;
      local_1a0 = CONCAT71(local_1a0._1_7_,0xff);
      local_198 = CONCAT31(local_198._1_3_,0xff);
      local_190 = 0;
      FUN_14508c070(lStack_1c0,(undefined8 *)(param_1 + 0x88),&local_1b8);
      bVar22 = true;
    }
  }
  else {
    plVar20 = *(longlong **)(param_2 + 0x240);
    bVar22 = lStack_1c0 == 0;
    FUN_1450c0b10(param_1 + 0x88,param_2);
    uVar7 = *(undefined4 *)(param_2 + 0xdc);
    uVar8 = *(undefined4 *)(param_2 + 0xe0);
    uVar9 = *(undefined4 *)(param_2 + 0xe4);
    *(undefined4 *)(param_1 + 0x240) = *(undefined4 *)(param_2 + 0xd8);
    *(undefined4 *)(param_1 + 0x244) = uVar7;
    *(undefined4 *)(param_1 + 0x248) = uVar8;
    *(undefined4 *)(param_1 + 0x24c) = uVar9;
    *(undefined4 *)(param_1 + 0x250) = *(undefined4 *)(param_2 + 0xe8);
    uVar4 = *(uint *)(param_2 + 0xd0);
    uVar18 = (ulonglong)uVar4;
    if ((uVar4 != 0) &&
       (((uVar4 < *(uint *)(param_1 + 0x238) || (uVar4 <= *(uint *)(param_1 + 0x23c))) ||
        (cVar10 = FUN_145089db0(param_1 + 0x230,uVar4 - *(uint *)(param_1 + 0x23c)), cVar10 != '\0')
        ))) {
      *(uint *)(param_1 + 0x238) = uVar4;
      lVar14 = 0;
      do {
        lVar16 = *(longlong *)(param_2 + 200);
        lVar5 = *(longlong *)(param_1 + 0x230);
        puVar12 = (undefined4 *)(lVar14 + lVar16);
        uVar7 = puVar12[1];
        uVar8 = puVar12[2];
        uVar9 = puVar12[3];
        puVar19 = (undefined4 *)(lVar14 + lVar5);
        *puVar19 = *puVar12;
        puVar19[1] = uVar7;
        puVar19[2] = uVar8;
        puVar19[3] = uVar9;
        *(undefined8 *)(lVar14 + 0x10 + lVar5) = *(undefined8 *)(lVar14 + 0x10 + lVar16);
        uVar18 = uVar18 - 1;
        lVar14 = lVar14 + 0x18;
      } while (uVar18 != 0);
    }
  }
  pfVar17 = (float *)(param_1 + 0x88);
  if ((*(byte *)(param_1 + 0x208) & 0x40) == 0) {
    if (lStack_1c0 != 0) {
      FUN_14508d190(lStack_1c0);
    }
    *(float *)(param_1 + 0xb4) = *(float *)(param_1 + 0xb4) + *(float *)(param_1 + 0x98);
    *(undefined4 *)(param_1 + 0x98) = 0;
    FUN_1450d7830(*(undefined8 *)(param_1 + 0x1d0),param_1 + 8,param_1 + 0x160,
                  *(undefined8 *)(param_1 + 0x1c8));
    if (*(longlong *)(param_1 + 0x290) != 0) {
      FUN_1450cee50();
    }
    bVar3 = *(byte *)(param_1 + 0x208);
    *(undefined4 *)(param_1 + 0x174) = 0x42ca0000;
    *(undefined8 *)(param_1 + 0x118) = 0x20000005d;
    if (-1 < (char)bVar3) {
      *(undefined8 *)(param_1 + 0x118) = 0x5d;
    }
    plVar6 = *(longlong **)(param_1 + 0x1d0);
    puVar13 = (undefined1 *)(param_2 + 0xf0);
    local_38 = 0;
    local_30 = 0;
    if (param_2 == 0) {
      puVar13 = (undefined1 *)0x0;
    }
    puVar21 = local_178;
    if ((bVar3 & 4) == 0) {
      puVar21 = puVar13;
    }
    if (plVar20 != plVar6) {
      *(byte *)(param_1 + 0x14b) = *(byte *)(param_1 + 0x14b) & 0xfd;
      lVar14 = param_1 + 0x240;
      *(byte *)(param_1 + 0x14a) = *(byte *)(param_1 + 0x14a) & 0x21;
      if ((bVar3 & 2) != 0) {
        lVar14 = 0;
      }
      (**(code **)(*plVar6 + 0x140))
                (plVar6,pfVar17,param_1 + 0x230,param_1 + 8,lVar14,puVar21,bVar22,plVar20);
    }
    if ((*(byte *)(param_1 + 0x14b) & 4) != 0) {
      if (DAT_14c791034 == 1) {
        *(undefined8 *)(param_1 + 0x90) = 0;
        *(undefined8 *)(param_1 + 0xb8) = 0;
        *(undefined8 *)(param_1 + 0xc4) = 0;
        *(undefined8 *)(param_1 + 0xcc) = 0;
        *(undefined8 *)(param_1 + 0xd4) = 0;
        *(undefined8 *)(param_1 + 0xdc) = 0;
        *(undefined8 *)(param_1 + 0xe4) = 0;
      }
      pbVar15 = *(byte **)(param_1 + 0xf0);
      if (pbVar15 != pbVar15 + (ulonglong)*(uint *)(param_1 + 0xf8) * 0x10) {
        do {
          bVar3 = *pbVar15;
          pfVar1 = (float *)(pbVar15 + 0xc);
          pbVar15 = pbVar15 + 0x10;
          fVar23 = *pfVar1;
          if (*pfVar1 <= pfVar17[(uint)(&DAT_149c29000)[bVar3]]) {
            fVar23 = pfVar17[(uint)(&DAT_149c29000)[bVar3]];
          }
          pfVar17[(uint)(&DAT_149c29000)[bVar3]] = fVar23;
        } while (pbVar15 !=
                 (byte *)((ulonglong)*(uint *)(param_1 + 0xf8) * 0x10 +
                         *(longlong *)(param_1 + 0xf0)));
      }
    }
    *(byte *)(param_1 + 0x14b) = *(byte *)(param_1 + 0x14b) & 0xfb;
    *pfVar17 = *(float *)(param_1 + 0x240) + *pfVar17;
    *(float *)(param_1 + 0x8c) = *(float *)(param_1 + 0x248) + *(float *)(param_1 + 0x8c);
    *(float *)(param_1 + 0x90) = *(float *)(param_1 + 0x24c) + *(float *)(param_1 + 0x90);
    if (((DAT_14c791034 == 1) && ((*(byte *)(param_1 + 0x128) >> 3 & 1) != 0)) &&
       (*(float *)(param_1 + 0x24c) != 0.0)) {
      *(ulonglong *)(param_1 + 0x138) = *(ulonglong *)(param_1 + 0x138) | 8;
    }
    *(float *)(param_1 + 0x94) = *(float *)(param_1 + 0x250) + *(float *)(param_1 + 0x94);
    if (((DAT_14c791034 == 1) && ((*(byte *)(param_1 + 0x128) >> 4 & 1) != 0)) &&
       (*(float *)(param_1 + 0x250) != 0.0)) {
      *(ulonglong *)(param_1 + 0x138) = *(ulonglong *)(param_1 + 0x138) | 0x10;
    }
    lVar16 = *(longlong *)(param_1 + 0x230);
    fVar23 = 1.0;
    lVar14 = lVar16 + (ulonglong)*(uint *)(param_1 + 0x238) * 0x18;
    for (; lVar16 != lVar14; lVar16 = lVar16 + 0x18) {
      fVar23 = fVar23 * *(float *)(lVar16 + 0x10);
    }
    *(byte *)(param_1 + 0x208) = *(byte *)(param_1 + 0x208) & 0xef;
    fVar23 = fVar23 * *(float *)(param_1 + 0x2a8) * *(float *)(param_1 + 0x2ac);
    if (fVar23 <= 0.0) {
      fVar23 = 0.0;
    }
    *(float *)(param_1 + 0x100) = fVar23;
    FUN_1450d5f80(*(undefined8 *)(param_1 + 0x1d0),&local_res8,*(undefined8 *)(param_1 + 8));
    if ((local_res8 != *(float *)(param_1 + 0x314)) || (fStackX_c != *(float *)(param_1 + 0x318))) {
      *(ulonglong *)(param_1 + 0x314) = CONCAT44(fStackX_c,local_res8);
      FUN_1450eb400(param_1 + -0x18);
    }
    bVar3 = *(byte *)(param_1 + 0x208);
    if ((bVar3 & 4) != 0) {
      if (*(longlong *)(param_1 + 0x78) != 0) {
        FUN_14538e540();
      }
      if (*(int *)(puVar21 + 0x148) != 0) {
        local_1a8 = *(undefined4 *)(param_1 + 0x348);
        local_1b0 = *(ulonglong *)(param_1 + 0x340);
        local_1a0 = *(undefined8 *)(param_1 + 0x350);
        local_198 = *(undefined4 *)(param_1 + 0x18);
        local_1b8 = *(undefined8 *)(param_1 + 8);
        local_194 = *(undefined4 *)(param_1 + 0x268);
        if ((*(byte *)(param_1 + 0x304) & 1) == 0) {
          iVar11 = 0;
        }
        else {
          iVar11 = (~(bVar3 >> 1) & 1 ^ 1) + 1;
        }
        local_190 = CONCAT44(iVar11,*(undefined4 *)(param_1 + 800));
        local_188 = param_1 + -0x18;
        FUN_14507d750(DAT_14c791028,puVar21,&local_1b8,param_1 + 0x78);
      }
      FUN_1450d78a0(*(undefined8 *)(param_1 + 0x1d0),param_1 + 8,param_1 + 0x160,param_1 + 0x188);
      *(byte *)(param_1 + 0x208) = *(byte *)(param_1 + 0x208) & 0xfb;
    }
    FUN_1450e97e0(local_178);
  }
  *(byte *)(param_1 + 0x208) = *(byte *)(param_1 + 0x208) | 3;
  FUN_1450e8bb0(param_1);
  return;
}



// FUNCTION 1450ec850 FUN_1450ec850 body=179 status=ok
// SIG undefined FUN_1450ec850(void)

void FUN_1450ec850(longlong param_1,char param_2)

{
  longlong lVar1;
  char cVar2;
  
  if ((((*(byte *)(param_1 + 0x314) & 0x10) == 0) && ((*(byte *)(param_1 + 0x314) & 0x40) == 0)) &&
     ((lVar1 = *(longlong *)(param_1 + 0x288), lVar1 == 0 ||
      ((cVar2 = FUN_14538f630(lVar1), cVar2 == '\0' || (*(int *)(lVar1 + 0x1c) != 0)))))) {
    *(byte *)(param_1 + 0x314) = *(byte *)(param_1 + 0x314) | 0x40;
    *(undefined4 *)(param_1 + 0x2c4) = 0;
    *(undefined4 *)(param_1 + 0x118) = 0;
    if (param_2 == '\0') {
      FUN_145371840(2,param_1);
    }
    if (*(longlong *)(param_1 + 0x288) != 0) {
      FUN_1450b0c40(DAT_14c791068);
    }
    FUN_1450e8c40(param_1 + 0x18,1);
    if (*(longlong *)(param_1 + 0x90) != 0) {
      FUN_14538e420();
    }
  }
  return;
}



// FUNCTION 1450ec910 FUN_1450ec910 body=107 status=ok
// SIG undefined FUN_1450ec910(void)

void FUN_1450ec910(longlong param_1)

{
  if (((*(byte *)(param_1 + 0x314) & 0x10) == 0) && ((*(byte *)(param_1 + 0x314) & 0x40) != 0)) {
    FUN_1450e8c40(param_1 + 0x18,0);
    if (*(longlong *)(param_1 + 0x90) != 0) {
      FUN_14538e480();
    }
    *(byte *)(param_1 + 0x314) = *(byte *)(param_1 + 0x314) & 0xbf;
    FUN_145371840(3,param_1);
    if (*(longlong *)(param_1 + 0x288) != 0) {
      FUN_1450b0c60(DAT_14c791068);
      return;
    }
  }
  return;
}



// FUNCTION 1450ec990 FUN_1450ec990 body=409 status=ok
// SIG undefined FUN_1450ec990(void)

void FUN_1450ec990(longlong *param_1,char param_2,undefined8 param_3,ulonglong param_4)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined2 local_34;
  undefined1 local_32;
  
  if (param_2 == '\0') {
    lVar2 = param_1[0x52];
  }
  else {
    lVar2 = param_1[0x51];
  }
  local_44 = 0x3f800000;
  iVar1 = (int)param_3;
  if ((iVar1 + 0xfc000000U & 0xfbffffff) == 0) {
    local_38 = 0x1d;
    if (iVar1 != 0x4000000) goto LAB_1450ec9e9;
  }
  else {
    local_38 = 0x1c;
LAB_1450ec9e9:
    if (iVar1 != 0x2000000) goto LAB_1450ec9f4;
  }
  local_44 = 0;
LAB_1450ec9f4:
  local_40 = (undefined4)param_4;
  local_3c = (undefined4)(param_4 >> 0x20);
  if (lVar2 == 0) {
    if (param_2 == '\0') {
      local_48 = *(undefined4 *)((longlong)param_1 + 0x2c4);
    }
    else {
      local_48 = (undefined4)param_1[0x58];
    }
    plVar3 = (longlong *)0x0;
    local_58 = param_1 + 2;
    if (param_1 == (longlong *)0x0) {
      local_58 = plVar3;
    }
    local_34 = 0x100;
    local_32 = 0;
    local_50 = param_3;
    lVar2 = FUN_1450b0a50(DAT_14c791068,&local_58,0);
    if (param_2 == '\0') {
      param_1[0x52] = lVar2;
    }
    else {
      param_1[0x51] = lVar2;
      if (iVar1 == 0x1000000) {
        plVar3 = (longlong *)&DAT_00000008;
      }
      *(byte *)((longlong)param_1 + 0x316) =
           (byte)plVar3 | *(byte *)((longlong)param_1 + 0x316) & 0xf7;
    }
    (**(code **)(*param_1 + 0x60))(param_1,0xe,param_4 & 0xffffffff);
    if (lVar2 == 0) {
      (**(code **)param_1[2])(param_1 + 2,local_50,local_44,1);
    }
  }
  else {
    FUN_1450b0c80(DAT_14c791068,lVar2,param_3,local_44,local_40,local_3c,0);
  }
  return;
}



// FUNCTION 1450ecb30 FUN_1450ecb30 body=448 status=ok
// SIG undefined FUN_1450ecb30(void)

void FUN_1450ecb30(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  longlong *plVar4;
  byte bVar5;
  undefined8 *puVar6;
  uint local_res8 [2];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined2 local_20;
  
  if ((*(byte *)(param_1 + 0x316) & 4) != 0) {
    *(byte *)(param_1 + 0x316) = *(byte *)(param_1 + 0x316) & 0xfb;
    plVar4 = *(longlong **)(param_1 + 0x378);
    if (plVar4 != plVar4 + *(uint *)(param_1 + 0x380)) {
      do {
        lVar1 = *plVar4;
        plVar4 = plVar4 + 1;
        *(short *)(lVar1 + 0x2a) = *(short *)(lVar1 + 0x2a) + -1;
      } while (plVar4 != (longlong *)
                         (*(longlong *)(param_1 + 0x378) + (ulonglong)*(uint *)(param_1 + 0x380) * 8
                         ));
    }
    bVar5 = *(byte *)(param_1 + 0x313);
    if ((char)bVar5 < '\0') {
      local_res8[0] = bVar5 & 7;
      uVar3 = bVar5 >> 3 & 0xf;
    }
    else {
      *(byte *)(param_1 + 0x313) = bVar5 | 0x80;
      uVar3 = FUN_14536ef90(*(undefined8 *)(param_1 + 0x1e8),local_res8);
      if (uVar3 == 3) {
        cVar2 = (**(code **)(**(longlong **)(param_1 + 0x1e8) + 0x240))
                          (*(longlong **)(param_1 + 0x1e8),*(undefined8 *)(param_1 + 0x298));
        uVar3 = (cVar2 != '\0') + 1;
      }
      bVar5 = *(byte *)(param_1 + 0x313) & 0xf8 | (byte)local_res8[0] & 7;
      *(byte *)(param_1 + 0x313) = ((char)uVar3 << 3 ^ bVar5) & 0x78 ^ bVar5;
    }
    if ((uVar3 == 2) && (local_res8[0] != 1)) {
      FUN_1450c6980();
    }
    FUN_1450c6960();
  }
  if ((*(byte *)(param_1 + 0x315) & 0x10) == 0) {
    puVar6 = *(undefined8 **)(param_1 + 0x378);
    *(byte *)(param_1 + 0x315) = *(byte *)(param_1 + 0x315) | 0x10;
    if (puVar6 != puVar6 + *(uint *)(param_1 + 0x380)) {
      do {
        FUN_1450d3cd0(*puVar6,param_1);
        puVar6 = puVar6 + 1;
      } while (puVar6 != (undefined8 *)
                         (*(longlong *)(param_1 + 0x378) + (ulonglong)*(uint *)(param_1 + 0x380) * 8
                         ));
    }
    local_48 = *(undefined8 *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x380) = 0;
    local_40 = 0;
    uStack_38 = 0;
    local_28 = 0;
    local_24 = 1;
    local_20 = 0x100;
    local_30 = param_1;
    (**(code **)(**(longlong **)(param_1 + 0x1e8) + 0x110))
              (*(longlong **)(param_1 + 0x1e8),&local_48);
  }
  return;
}



// FUNCTION 1450eccf0 FUN_1450eccf0 body=169 status=ok
// SIG undefined FUN_1450eccf0(void)

void FUN_1450eccf0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  float fVar2;
  float fVar3;
  
  if (*(byte *)(param_2 + 0x1f8) != 0xff) {
    plVar1 = (longlong *)(param_2 + ((ulonglong)*(byte *)(param_2 + 0x1f8) + 2) * 0x18);
    if ((*plVar1 != 0) && (plVar1 != (longlong *)0x0)) {
      fVar3 = 0.0;
      fVar2 = *(float *)(param_1 + 0x314);
      if (*(float *)(param_1 + 0x318) != 0.0) {
        if ((*(byte *)(param_1 + 0x208) & 1) != 0) {
          fVar3 = *(float *)(param_1 + 0x88);
        }
        fVar3 = (float)FUN_1450c80b0(*(float *)(param_1 + 0x318),
                                     *(undefined4 *)
                                      (*plVar1 + (ulonglong)((int)plVar1[1] - 2) * 0xc),param_1,
                                     fVar3,*(undefined8 *)(param_1 + 8));
      }
      FUN_1450eb400(param_1 + -0x18,fVar3 + fVar2);
    }
  }
  return;
}



// FUNCTION 1450ecda0 FUN_1450ecda0 body=86 status=ok
// SIG undefined FUN_1450ecda0(void)

undefined8 FUN_1450ecda0(longlong param_1,undefined4 param_2,longlong *param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (*(float *)(param_1 + 0x330) == 0.0) {
    return 0;
  }
  if ((*(byte *)(param_1 + 0x220) & 1) != 0) {
    uVar2 = *(undefined4 *)(param_1 + 0xa0);
  }
  uVar1 = FUN_1450c80b0(*(undefined8 *)(param_1 + 0x20),
                        *(undefined4 *)(*param_3 + (ulonglong)((int)param_3[1] - 2) * 0xc),param_2,
                        uVar2,*(undefined8 *)(param_1 + 0x20));
  return uVar1;
}



// FUNCTION 1450ece20 FUN_1450ece20 body=148 status=ok
// SIG undefined FUN_1450ece20(void)

void FUN_1450ece20(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x378);
  if (plVar1 == plVar1 + *(uint *)(param_1 + 0x380)) {
    *(undefined4 *)(param_1 + 0x380) = 0;
    return;
  }
  do {
    FUN_1450d3cd0(*plVar1,param_1);
    if ((*(byte *)(param_1 + 0x316) & 4) != 0) {
      *(short *)(*plVar1 + 0x2a) = *(short *)(*plVar1 + 0x2a) + -1;
    }
    plVar1 = plVar1 + 1;
  } while (plVar1 != (longlong *)
                     (*(longlong *)(param_1 + 0x378) + (ulonglong)*(uint *)(param_1 + 0x380) * 8));
  *(undefined4 *)(param_1 + 0x380) = 0;
  return;
}



// FUNCTION 1450ecec0 FUN_1450ecec0 body=58 status=ok
// SIG undefined FUN_1450ecec0(void)

void FUN_1450ecec0(longlong param_1,undefined8 param_2)

{
  FUN_145390090(param_2,*(undefined4 *)(*(longlong *)(param_1 + 0x1d0) + 0x20));
  FUN_1453900a0(param_2,*(undefined4 *)(param_1 + 0x268));
  return;
}



// FUNCTION 1450ecf00 FUN_1450ecf00 body=245 status=ok
// SIG undefined FUN_1450ecf00(void)

undefined8 * FUN_1450ecf00(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_149c29138;
  param_1[2] = &PTR_FUN_149c291a8;
  param_1[3] = &PTR_LAB_149c291b0;
  param_1[0x10] = &PTR_LAB_149c29240;
  puVar1 = (undefined8 *)param_1[0x6f];
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(param_1 + 0x70) = 0;
    if (param_1 + 0x6e != puVar1) {
      AK::MemoryMgr::Free(0,puVar1);
    }
    param_1[0x6f] = 0;
    *(undefined4 *)((longlong)param_1 + 900) = 0;
  }
  if (*(longlong *)((longlong)param_1 + 0x26c) != 0) {
    FUN_144d4a460();
  }
  if ((void *)param_1[0x46] != (void *)0x0) {
    *(undefined4 *)(param_1 + 0x47) = 0;
    AK::MemoryMgr::Free(0,(void *)param_1[0x46]);
    param_1[0x46] = 0;
    *(undefined4 *)((longlong)param_1 + 0x23c) = 0;
  }
  FUN_1450e6450(param_1 + 3);
  *param_1 = &PTR__purecall_149c29128;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x390);
  }
  return param_1;
}



// FUNCTION 1450ed010 FUN_1450ed010 body=98 status=ok
// SIG undefined FUN_1450ed010(void)

undefined8 * FUN_1450ed010(undefined8 *param_1)

{
  FUN_1453a3480();
  *(undefined4 *)(param_1 + 0xb) = 0x3f800000;
  *(byte *)((longlong)param_1 + 0x62) = *(byte *)((longlong)param_1 + 0x62) & 0xe0;
  *param_1 = &PTR_LAB_149c29270;
  param_1[3] = &PTR_LAB_149c292d8;
  param_1[5] = &PTR_FUN_149c292e8;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0xffffffff;
  *(undefined2 *)(param_1 + 0xc) = 0;
  return param_1;
}



// FUNCTION 1450ed080 FUN_1450ed080 body=132 status=ok
// SIG undefined FUN_1450ed080(void)

void FUN_1450ed080(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_149c29270;
  param_1[3] = &PTR_LAB_149c292d8;
  param_1[5] = &PTR_FUN_149c292e8;
  if (param_1[8] != 0) {
    FUN_1450b0bd0(DAT_14c791068,param_1[8],param_1 + 5);
  }
  if (param_1[9] != 0) {
    FUN_1450b0bd0(DAT_14c791068,param_1[9],param_1 + 5);
  }
  param_1[7] = 0;
  param_1[3] = &PTR__purecall_149c29128;
  FUN_1453a34a0(param_1);
  return;
}



// FUNCTION 1450ed110 FUN_1450ed110 body=12 status=ok
// SIG undefined FUN_1450ed110(void)

void FUN_1450ed110(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x10) == 0) {
    return;
  }
  FUN_1450ed120(*(undefined8 *)(param_1 + 0x10),param_1);
  return;
}



// FUNCTION 1450ed120 FUN_1450ed120 body=33 status=ok
// SIG undefined FUN_1450ed120(void)

void FUN_1450ed120(longlong param_1,longlong param_2)

{
  if (*(longlong *)(param_1 + 0x38) == 0) {
    *(longlong *)(param_1 + 0x38) = param_2;
    *(undefined8 *)(param_2 + 8) = 0;
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
    return;
  }
  *(longlong *)(param_2 + 8) = *(longlong *)(param_1 + 0x38);
  *(longlong *)(param_1 + 0x38) = param_2;
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
  return;
}



// FUNCTION 1450ed150 FUN_1450ed150 body=70 status=ok
// SIG undefined FUN_1450ed150(void)

void FUN_1450ed150(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x38);
  lVar2 = lVar1;
  lVar4 = 0;
  if (lVar1 == 0) {
    return;
  }
  do {
    lVar3 = lVar2;
    if (lVar3 == param_2) {
      if (lVar3 == lVar1) {
        *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(lVar3 + 8);
        FUN_1450ed1a0(param_1);
        return;
      }
      *(undefined8 *)(lVar4 + 8) = *(undefined8 *)(lVar3 + 8);
      FUN_1450ed1a0(param_1);
      return;
    }
    lVar2 = *(longlong *)(lVar3 + 8);
    lVar4 = lVar3;
  } while (*(longlong *)(lVar3 + 8) != 0);
  return;
}



// FUNCTION 1450ed1a0 FUN_1450ed1a0 body=136 status=ok
// SIG undefined FUN_1450ed1a0(void)

void FUN_1450ed1a0(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  plVar2 = param_1 + 10;
  *(int *)plVar2 = (int)*plVar2 + -1;
  if ((int)*plVar2 != 0) {
    return;
  }
  lVar1 = param_1[2];
  if (lVar1 == 0) {
    FUN_144d51f00();
  }
  else {
    plVar2 = *(longlong **)(lVar1 + 0x38);
    plVar3 = plVar2;
    plVar5 = (longlong *)0x0;
    if (plVar2 == (longlong *)0x0) {
LAB_1450ed1f9:
      param_1[2] = 0;
    }
    else {
      do {
        plVar4 = plVar3;
        if (plVar4 == param_1) {
          if (plVar4 == plVar2) {
            *(longlong *)(lVar1 + 0x38) = plVar4[1];
          }
          else {
            plVar5[1] = plVar4[1];
          }
          FUN_1450ed1a0(lVar1);
          goto LAB_1450ed1f9;
        }
        plVar3 = (longlong *)plVar4[1];
        plVar5 = plVar4;
      } while ((longlong *)plVar4[1] != (longlong *)0x0);
      param_1[2] = 0;
    }
  }
  (**(code **)(*param_1 + 0x50))(param_1,0);
  AK::MemoryMgr::Free(0,param_1);
  return;
}



// FUNCTION 1450ed230 FUN_1450ed230 body=192 status=ok
// SIG undefined FUN_1450ed230(void)

void FUN_1450ed230(longlong param_1,int param_2,undefined4 param_3,char param_4)

{
  bool bVar1;
  
  bVar1 = false;
  if (param_2 != 0x1000000) {
    if (param_2 != 0x2000000) {
      if ((param_2 + 0xfc000000U & 0xfbffffff) != 0) {
        return;
      }
      *(undefined4 *)(param_1 + 0x30) = param_3;
      (**(code **)(*(longlong *)(param_1 + -0x28) + 0x28))(param_1 + -0x28);
      if (param_4 == '\0') {
        return;
      }
      *(undefined8 *)(param_1 + 0x20) = 0;
      if (param_2 != 0x4000000) {
        return;
      }
      (**(code **)(*(longlong *)(param_1 + -0x28) + 0x18))(param_1 + -0x28);
      return;
    }
    bVar1 = true;
  }
  *(undefined4 *)(param_1 + 0x2c) = param_3;
  (**(code **)(*(longlong *)(param_1 + -0x28) + 0x28))(param_1 + -0x28);
  if ((param_4 != '\0') && (*(undefined8 *)(param_1 + 0x18) = 0, bVar1)) {
    (**(code **)(*(longlong *)(param_1 + -0x28) + 0x10))(param_1 + -0x28,0xffffffff);
  }
  return;
}



// FUNCTION 1450ed2f0 FUN_1450ed2f0 body=12 status=ok
// SIG undefined FUN_1450ed2f0(void)

void FUN_1450ed2f0(longlong param_1)

{
  *(byte *)(param_1 + 0x62) = *(byte *)(param_1 + 0x62) & 0xf1 | 1;
  return;
}



// FUNCTION 1450ed310 FUN_1450ed310 body=83 status=ok
// SIG undefined FUN_1450ed310(void)

void FUN_1450ed310(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  *(int *)(param_1 + 10) = (int)param_1[10] + 1;
  plVar2 = (longlong *)param_1[7];
  while (plVar2 != (longlong *)0x0) {
    plVar1 = (longlong *)plVar2[1];
    (**(code **)(*plVar2 + 8))();
    plVar2 = plVar1;
  }
  if ((*(byte *)((longlong)param_1 + 0x62) & 2) != 0) {
    (**(code **)(*param_1 + 0x60))(param_1);
  }
  FUN_1450ed1a0(param_1);
  return;
}



// FUNCTION 1450ed370 FUN_1450ed370 body=181 status=ok
// SIG undefined FUN_1450ed370(void)

void FUN_1450ed370(longlong *param_1,uint param_2)

{
  byte bVar1;
  longlong *plVar2;
  longlong *plVar3;
  uint uVar4;
  
  *(int *)(param_1 + 10) = (int)param_1[10] + 1;
  for (plVar2 = (longlong *)param_1[7]; plVar2 != (longlong *)0x0; plVar2 = (longlong *)plVar2[1]) {
    (**(code **)(*plVar2 + 0x40))(plVar2);
    (**(code **)(*plVar2 + 0x10))(plVar2,param_2);
  }
  plVar2 = (longlong *)param_1[7];
  while (plVar2 != (longlong *)0x0) {
    plVar3 = (longlong *)plVar2[1];
    (**(code **)(*plVar2 + 0x48))();
    plVar2 = plVar3;
  }
  uVar4 = *(uint *)((longlong)param_1 + 0x5c);
  if ((param_2 < uVar4) && (param_2 != 0xffffffff)) {
    *(uint *)((longlong)param_1 + 0x5c) = param_2;
    uVar4 = param_2;
  }
  if (uVar4 != 0) {
    bVar1 = *(byte *)((longlong)param_1 + 0x62);
    if (((bVar1 & 0xf) != 0) && ((bVar1 & 0x10) == 0)) {
      if ((bVar1 & 0xf) < 3) {
        *(byte *)((longlong)param_1 + 0x62) = bVar1 & 0xf2 | 2;
      }
      goto LAB_1450ed40e;
    }
  }
  (**(code **)(*param_1 + 0x60))(param_1);
LAB_1450ed40e:
  FUN_1450ed1a0(param_1);
  return;
}



// FUNCTION 1450ed430 FUN_1450ed430 body=12 status=ok
// SIG undefined FUN_1450ed430(void)

void FUN_1450ed430(longlong param_1)

{
  *(byte *)(param_1 + 0x62) = *(byte *)(param_1 + 0x62) & 0xf4 | 4;
  return;
}



// FUNCTION 1450ed440 FUN_1450ed440 body=76 status=ok
// SIG undefined FUN_1450ed440(void)

void FUN_1450ed440(longlong param_1)

{
  longlong *plVar1;
  
  for (plVar1 = *(longlong **)(param_1 + 0x38); plVar1 != (longlong *)0x0;
      plVar1 = (longlong *)plVar1[1]) {
    (**(code **)(*plVar1 + 0x18))(plVar1);
  }
  *(byte *)(param_1 + 0x62) = *(byte *)(param_1 + 0x62) | 0x10;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1450b0c40(DAT_14c791068);
  }
  return;
}



// FUNCTION 1450ed490 FUN_1450ed490 body=76 status=ok
// SIG undefined FUN_1450ed490(void)

void FUN_1450ed490(longlong param_1)

{
  longlong *plVar1;
  
  for (plVar1 = *(longlong **)(param_1 + 0x38); plVar1 != (longlong *)0x0;
      plVar1 = (longlong *)plVar1[1]) {
    (**(code **)(*plVar1 + 0x20))(plVar1);
  }
  *(byte *)(param_1 + 0x62) = *(byte *)(param_1 + 0x62) & 0xef;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1450b0c60(DAT_14c791068);
  }
  return;
}



// FUNCTION 1450ed4e0 FUN_1450ed4e0 body=72 status=ok
// SIG undefined FUN_1450ed4e0(void)

void FUN_1450ed4e0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *plVar1;
  
  for (plVar1 = *(longlong **)(param_1 + 0x38); plVar1 != (longlong *)0x0;
      plVar1 = (longlong *)plVar1[1]) {
    (**(code **)(*plVar1 + 0x28))(plVar1,param_2,param_3);
  }
  return;
}



// FUNCTION 1450ed530 FUN_1450ed530 body=71 status=ok
// SIG undefined FUN_1450ed530(void)

void FUN_1450ed530(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0x38);
  while (plVar2 != (longlong *)0x0) {
    plVar1 = (longlong *)plVar2[1];
    (**(code **)(*plVar2 + 0x30))(plVar2,param_2,param_3);
    plVar2 = plVar1;
  }
  return;
}



// FUNCTION 1450ed580 FUN_1450ed580 body=40 status=ok
// SIG undefined FUN_1450ed580(void)

void FUN_1450ed580(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0x38);
  while (plVar2 != (longlong *)0x0) {
    plVar1 = (longlong *)plVar2[1];
    (**(code **)(*plVar2 + 0x38))();
    plVar2 = plVar1;
  }
  return;
}



// FUNCTION 1450ed5d0 FUN_1450ed5d0 body=83 status=ok
// SIG undefined FUN_1450ed5d0(void)

void FUN_1450ed5d0(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  *(int *)(param_1 + 10) = (int)param_1[10] + 1;
  plVar2 = (longlong *)param_1[7];
  while (plVar2 != (longlong *)0x0) {
    plVar1 = (longlong *)plVar2[1];
    (**(code **)(*plVar2 + 8))();
    plVar2 = plVar1;
  }
  if ((*(byte *)((longlong)param_1 + 0x62) & 2) != 0) {
    (**(code **)(*param_1 + 0x60))(param_1);
  }
  FUN_1450ed1a0(param_1);
  return;
}



// FUNCTION 1450ed630 FUN_1450ed630 body=323 status=ok
// SIG undefined FUN_1450ed630(void)

void FUN_1450ed630(longlong *param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  int local_1c;
  undefined4 local_18;
  undefined2 local_14;
  undefined1 local_12;
  
  if ((*(byte *)((longlong)param_1 + 0x62) & 0xf) < 2) {
    if (param_1[8] == 0) {
      if (0 < *param_2) {
        local_30 = 0x1000000;
        local_38 = param_1 + 5;
        if (param_1 == (longlong *)0x0) {
          local_38 = (longlong *)0x0;
        }
        local_28 = 0;
        local_1c = param_2[1];
        local_24 = 0x3f800000;
        local_18 = 0x1c;
        local_14 = 0x100;
        local_12 = 0;
        local_20 = *param_2;
        lVar2 = FUN_1450b0a50(DAT_14c791068,&local_38,0);
        param_1[8] = lVar2;
        if (lVar2 == 0) {
          (**(code **)param_1[5])(param_1 + 5,local_30,local_24,1);
        }
        else if (param_2[2] != 0) {
          iVar1 = param_2[2] / (int)(uint)DAT_14c72f434;
          if ((iVar1 < 0) && (*(uint *)(lVar2 + 0x18) <= (uint)-iVar1)) {
            *(undefined4 *)(lVar2 + 0x18) = 0;
          }
          else {
            *(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + iVar1;
          }
        }
      }
    }
    else {
      FUN_1450b0c80(DAT_14c791068,param_1[8],0x1000000,0x3f800000,*param_2,param_2[1],0);
    }
    (**(code **)(*param_1 + 0x58))(param_1);
  }
  return;
}



// FUNCTION 1450ed780 FUN_1450ed780 body=317 status=ok
// SIG undefined FUN_1450ed780(void)

void FUN_1450ed780(longlong *param_1,int *param_2,undefined4 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *local_38;
  undefined8 local_30;
  undefined8 local_28;
  int local_20;
  int local_1c;
  undefined4 local_18;
  undefined2 local_14;
  undefined1 local_12;
  
  if ((*(byte *)((longlong)param_1 + 0x62) & 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001450ed7ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x10))(param_1,param_3);
    return;
  }
  lVar1 = param_1[8];
  local_20 = *param_2;
  if (lVar1 == 0) {
    if ((0 < local_20) && ((*(byte *)((longlong)param_1 + 0x62) & 3) != 0)) {
      local_30 = 0x2000000;
      local_28 = 0x3f800000;
      local_38 = param_1 + 5;
      if (param_1 == (longlong *)0x0) {
        local_38 = (longlong *)0x0;
      }
      local_18 = 0x1c;
      local_1c = param_2[1];
      local_14 = 0x100;
      local_12 = 0;
      lVar1 = FUN_1450b0a50(DAT_14c791068,&local_38,0);
      param_1[8] = lVar1;
      if (lVar1 != 0) {
        return;
      }
      (**(code **)param_1[5])(param_1 + 5,local_30,local_28._4_4_,1);
      return;
    }
  }
  else {
    if (local_20 != 0) {
      FUN_1450b0c80(DAT_14c791068,lVar1,0x2000000,0,local_20,param_2[1],0);
      return;
    }
    plVar2 = param_1 + 5;
    if (param_1 == (longlong *)0x0) {
      plVar2 = (longlong *)0x0;
    }
    FUN_1450b0bd0(DAT_14c791068,lVar1,plVar2);
    param_1[8] = 0;
  }
  (**(code **)(*param_1 + 0x10))(param_1,param_3);
  return;
}



// FUNCTION 1450ed8c0 FUN_1450ed8c0 body=9 status=ok
// SIG undefined FUN_1450ed8c0(void)

void FUN_1450ed8c0(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001450ed8c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))(param_1,0);
  return;
}



// FUNCTION 1450ed8d0 FUN_1450ed8d0 body=231 status=ok
// SIG undefined FUN_1450ed8d0(void)

void FUN_1450ed8d0(longlong param_1,undefined4 *param_2)

{
  short sVar1;
  longlong lVar2;
  longlong local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined2 local_14;
  undefined1 local_12;
  
  sVar1 = *(short *)(param_1 + 0x60);
  *(short *)(param_1 + 0x60) = sVar1 + 1;
  if (sVar1 == 0) {
    if (*(longlong *)(param_1 + 0x48) != 0) {
      FUN_1450b0c80(DAT_14c791068,*(longlong *)(param_1 + 0x48),0x4000000,0,*param_2,param_2[1],0);
      return;
    }
    local_30 = 0x4000000;
    local_38 = param_1 + 0x28;
    if (param_1 == 0) {
      local_38 = 0;
    }
    local_28 = 0x3f800000;
    local_20 = *param_2;
    local_1c = param_2[1];
    local_18 = 0x1c;
    local_14 = 0x100;
    local_12 = 0;
    lVar2 = FUN_1450b0a50(DAT_14c791068,&local_38);
    *(longlong *)(param_1 + 0x48) = lVar2;
    if (lVar2 == 0) {
      (*(code *)**(undefined8 **)(param_1 + 0x28))(param_1 + 0x28,local_30,local_28._4_4_,1);
    }
  }
  return;
}



// FUNCTION 1450ed9c0 FUN_1450ed9c0 body=308 status=ok
// SIG undefined FUN_1450ed9c0(void)

void FUN_1450ed9c0(longlong *param_1,int *param_2,char param_3)

{
  longlong lVar1;
  longlong *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  int local_1c;
  undefined4 local_18;
  undefined2 local_14;
  undefined1 local_12;
  
  if ((param_3 == '\0') && (1 < *(ushort *)(param_1 + 0xc))) {
    *(ushort *)(param_1 + 0xc) = *(ushort *)(param_1 + 0xc) - 1;
    return;
  }
  *(undefined2 *)(param_1 + 0xc) = 0;
  if (param_1[9] == 0) {
    if (*param_2 < 1) {
      *(undefined4 *)(param_1 + 0xb) = 0x3f800000;
      (**(code **)(*param_1 + 0x28))(param_1,param_1 + 0xb,0x3f800000);
    }
    else {
      local_28 = (undefined4)param_1[0xb];
      local_38 = param_1 + 5;
      if (param_1 == (longlong *)0x0) {
        local_38 = (longlong *)0x0;
      }
      local_1c = param_2[1];
      local_30 = 0x8000000;
      local_24 = 0x3f800000;
      local_18 = 0x1c;
      local_14 = 0x100;
      local_12 = 0;
      local_20 = *param_2;
      lVar1 = FUN_1450b0a50(DAT_14c791068,&local_38,0);
      param_1[9] = lVar1;
      if (lVar1 == 0) {
        (**(code **)param_1[5])(param_1 + 5,local_30,local_24,1);
      }
    }
  }
  else {
    FUN_1450b0c80(DAT_14c791068,param_1[9],0x8000000,0x3f800000,*param_2,param_2[1],0);
  }
                    /* WARNING: Could not recover jumptable at 0x0001450edaf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x20))(param_1);
  return;
}



// FUNCTION 1450edb00 FUN_1450edb00 body=7 status=ok
// SIG undefined FUN_1450edb00(void)

void FUN_1450edb00(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001450edb03. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x30))();
  return;
}



// FUNCTION 1450edb10 FUN_1450edb10 body=7 status=ok
// SIG undefined FUN_1450edb10(void)

void FUN_1450edb10(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001450edb13. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x38))();
  return;
}



// FUNCTION 1450edb30 FUN_1450edb30 body=36 status=ok
// SIG undefined FUN_1450edb30(void)

undefined1 FUN_1450edb30(longlong param_1)

{
  char cVar1;
  
  if (*(longlong *)(param_1 + 0x40) != 0) {
    cVar1 = FUN_14538f630();
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1450edb60 FUN_1450edb60 body=167 status=ok
// SIG undefined FUN_1450edb60(void)

undefined8 * FUN_1450edb60(undefined8 *param_1,uint param_2)

{
  *param_1 = &PTR_LAB_149c29270;
  param_1[3] = &PTR_LAB_149c292d8;
  param_1[5] = &PTR_FUN_149c292e8;
  if (param_1[8] != 0) {
    FUN_1450b0bd0(DAT_14c791068,param_1[8],param_1 + 5);
  }
  if (param_1[9] != 0) {
    FUN_1450b0bd0(DAT_14c791068,param_1[9],param_1 + 5);
  }
  param_1[7] = 0;
  param_1[3] = &PTR__purecall_149c29128;
  FUN_1453a34a0(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x68);
  }
  return param_1;
}



// FUNCTION 1450edc20 FUN_1450edc20 body=64 status=ok
// SIG undefined FUN_1450edc20(void)

void FUN_1450edc20(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  for (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x70) + 0x18); lVar1 != 0;
      lVar1 = *(longlong *)(lVar1 + 0x70)) {
    FUN_1450ea5c0(lVar1 + -0x18,param_2);
  }
  return;
}



// FUNCTION 1450edc60 FUN_1450edc60 body=114 status=ok
// SIG undefined FUN_1450edc60(void)

void FUN_1450edc60(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x70) != 0) {
    for (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x70) + 0x18); lVar1 != 0;
        lVar1 = *(longlong *)(lVar1 + 0x70)) {
      if (((param_2 == 0) || (*(longlong *)(lVar1 + 8) == param_2)) &&
         ((param_4 == 0 || (param_4 == *(int *)(lVar1 + 0x268))))) {
        (**(code **)(*(longlong *)(lVar1 + -0x18) + 0x28))((longlong *)(lVar1 + -0x18),param_3);
      }
    }
  }
  return;
}



// FUNCTION 1450edce0 FUN_1450edce0 body=63 status=ok
// SIG undefined FUN_1450edce0(void)

void FUN_1450edce0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x70) != 0) {
    for (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x70) + 0x18); lVar1 != 0;
        lVar1 = *(longlong *)(lVar1 + 0x70)) {
      FUN_1450e86b0(lVar1,param_2);
    }
  }
  return;
}



// FUNCTION 1450edd20 FUN_1450edd20 body=91 status=ok
// SIG undefined FUN_1450edd20(void)

void FUN_1450edd20(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x70) != 0) {
    for (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x70) + 0x18); lVar1 != 0;
        lVar1 = *(longlong *)(lVar1 + 0x70)) {
      FUN_1450eb0b0(lVar1 + -0x18,param_2,param_3,0);
    }
  }
  return;
}



// FUNCTION 1450edd80 FUN_1450edd80 body=129 status=ok
// SIG undefined FUN_1450edd80(void)

void FUN_1450edd80(longlong param_1,undefined4 param_2,longlong param_3,undefined8 param_4,
                  undefined1 param_5)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x70) != 0) {
    for (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x70) + 0x18); lVar1 != 0;
        lVar1 = *(longlong *)(lVar1 + 0x70)) {
      if ((param_3 == 0) || (*(longlong *)(lVar1 + 8) == param_3)) {
        FUN_1450eb0b0(lVar1 + -0x18,param_2,param_4,param_5);
      }
    }
  }
  return;
}



// FUNCTION 1450ede10 FUN_1450ede10 body=394 status=ok
// SIG undefined FUN_1450ede10(void)

void FUN_1450ede10(longlong param_1,code *param_2,longlong *param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 0x70) != 0) {
    if (param_3[5] == 0) {
      if ((int)param_3[1] == 0) {
        for (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x70) + 0x18); lVar1 != 0;
            lVar1 = *(longlong *)(lVar1 + 0x70)) {
          if ((((((*param_3 == 0) || (*(longlong *)(lVar1 + 8) == *param_3)) &&
                (((int)param_3[1] == 0 || (*(int *)(lVar1 + 0x10) == (int)param_3[1])))) &&
               (((int)param_3[2] == 0 || (*(int *)(lVar1 + 0x18) == (int)param_3[2])))) &&
              (((char)param_3[3] == -1 || (*(char *)(lVar1 + 0x20) == (char)param_3[3])))) &&
             ((((char)param_3[4] == -1 || (*(char *)(lVar1 + 0x28) == (char)param_3[4])) &&
              ((param_3[5] == 0 || (*(longlong *)(lVar1 + 0x30) == param_3[5])))))) {
            (*param_2)(lVar1 + -0x18,param_3,param_4);
          }
        }
      }
      else {
        plVar2 = (longlong *)FUN_1450b3800(DAT_14c790fc0);
        if ((plVar2 != (longlong *)0x0) &&
           (plVar3 = (longlong *)*plVar2, plVar3 != plVar3 + *(uint *)(plVar2 + 1))) {
          do {
            lVar1 = *plVar3;
            if (((((*(longlong *)(lVar1 + 0x1e8) == param_1) &&
                  ((*param_3 == 0 || (*(longlong *)(lVar1 + 0x20) == *param_3)))) &&
                 (((int)param_3[1] == 0 || (*(int *)(lVar1 + 0x28) == (int)param_3[1])))) &&
                (((((int)param_3[2] == 0 || (*(int *)(lVar1 + 0x30) == (int)param_3[2])) &&
                  (((char)param_3[3] == -1 || (*(char *)(lVar1 + 0x38) == (char)param_3[3])))) &&
                 (((char)param_3[4] == -1 || (*(char *)(lVar1 + 0x40) == (char)param_3[4])))))) &&
               ((param_3[5] == 0 || (*(longlong *)(lVar1 + 0x48) == param_3[5])))) {
              (*param_2)(lVar1,param_3,param_4);
            }
            plVar3 = plVar3 + 1;
          } while (plVar3 != (longlong *)(*plVar2 + (ulonglong)*(uint *)(plVar2 + 1) * 8));
        }
      }
    }
    else {
      (*param_2)(param_3[5],param_3,param_4);
    }
  }
  return;
}



// FUNCTION 1450edfa0 FUN_1450edfa0 body=103 status=ok
// SIG undefined FUN_1450edfa0(void)

void FUN_1450edfa0(longlong param_1,undefined4 param_2,undefined4 param_3,longlong param_4)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x70) != 0) {
    for (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x70) + 0x18); lVar1 != 0;
        lVar1 = *(longlong *)(lVar1 + 0x70)) {
      if ((param_4 == 0) || (*(longlong *)(lVar1 + 8) == param_4)) {
        FUN_1450e6b50(lVar1,param_2,param_3);
      }
    }
  }
  return;
}



// FUNCTION 1450ee010 FUN_1450ee010 body=89 status=ok
// SIG undefined FUN_1450ee010(void)

void FUN_1450ee010(longlong param_1,undefined1 param_2,undefined1 param_3)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x70) != 0) {
    for (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x70) + 0x18); lVar1 != 0;
        lVar1 = *(longlong *)(lVar1 + 0x70)) {
      FUN_1450e8690(lVar1,param_2,param_3);
    }
  }
  return;
}



// FUNCTION 1450ee070 FUN_1450ee070 body=56 status=ok
// SIG undefined FUN_1450ee070(void)

void FUN_1450ee070(longlong param_1)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x70) != 0) {
    for (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x70) + 0x18); lVar1 != 0;
        lVar1 = *(longlong *)(lVar1 + 0x70)) {
      FUN_1450ece20(lVar1 + -0x18);
    }
  }
  return;
}



// FUNCTION 1450ee0b0 FUN_1450ee0b0 body=85 status=ok
// SIG undefined FUN_1450ee0b0(void)

void FUN_1450ee0b0(longlong param_1,undefined4 param_2,longlong param_3)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x70) != 0) {
    for (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x70) + 0x18); lVar1 != 0;
        lVar1 = *(longlong *)(lVar1 + 0x70)) {
      if ((param_3 == 0) || (*(longlong *)(lVar1 + 8) == param_3)) {
        FUN_1450eba90(lVar1 + -0x18,param_2);
      }
    }
  }
  return;
}



// FUNCTION 1450ee110 FUN_1450ee110 body=103 status=ok
// SIG undefined FUN_1450ee110(void)

void FUN_1450ee110(longlong param_1,undefined4 param_2,undefined4 param_3,longlong param_4)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x70) != 0) {
    for (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x70) + 0x18); lVar1 != 0;
        lVar1 = *(longlong *)(lVar1 + 0x70)) {
      if ((param_4 == 0) || (*(longlong *)(lVar1 + 8) == param_4)) {
        FUN_1450eb0f0(lVar1 + -0x18,param_2,param_3);
      }
    }
  }
  return;
}



// FUNCTION 1450ee180 FUN_1450ee180 body=63 status=ok
// SIG undefined FUN_1450ee180(void)

void FUN_1450ee180(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x70) != 0) {
    for (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x70) + 0x18); lVar1 != 0;
        lVar1 = *(longlong *)(lVar1 + 0x70)) {
      FUN_1450eba90(lVar1 + -0x18,param_2);
    }
  }
  return;
}



// FUNCTION 1450ee1c0 FUN_1450ee1c0 body=225 status=ok
// SIG undefined FUN_1450ee1c0(void)

undefined8 FUN_1450ee1c0(longlong param_1,undefined8 param_2)

{
  short sVar1;
  byte *pbVar2;
  undefined8 uVar3;
  uint uVar4;
  byte *pbVar5;
  short sVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte local_res8 [8];
  
  pbVar2 = *(byte **)(param_1 + 0x90);
  pbVar7 = (byte *)0x0;
  local_res8[0] = 1;
  local_res8[1] = 0;
  local_res8[2] = 0;
  local_res8[3] = 0;
  pbVar5 = pbVar7;
  if (pbVar2 != (byte *)0x0) {
    pbVar8 = pbVar7;
    do {
      uVar4 = (int)pbVar8 + 1;
      if (pbVar2[uVar4] == 0x3a) {
        pbVar5 = pbVar2 + (longlong)pbVar8 * 4 + ((ulonglong)(*pbVar2 + 4) & 0xfffffffc);
        break;
      }
      pbVar8 = (byte *)(ulonglong)uVar4;
    } while (uVar4 < *pbVar2);
  }
  pbVar2 = local_res8;
  if (pbVar5 != (byte *)0x0) {
    pbVar2 = pbVar5;
  }
  pbVar5 = *(byte **)(param_1 + 0xd8);
  sVar6 = (short)*(undefined4 *)pbVar2;
  if (pbVar5 != (byte *)0x0) {
    do {
      uVar4 = (int)pbVar7 + 1;
      if (pbVar5[uVar4] == 0x3a) {
        if (pbVar5 + ((ulonglong)(*pbVar5 + 4) & 0xfffffffc) + (longlong)pbVar7 * 8 != (byte *)0x0)
        {
          sVar1 = FUN_1450ee480();
          sVar6 = sVar6 + sVar1;
        }
        break;
      }
      pbVar7 = (byte *)(ulonglong)uVar4;
    } while (uVar4 < *pbVar5);
  }
  if (sVar6 == 0) {
    uVar3 = 1;
  }
  else {
    uVar3 = FUN_1450dab80(param_1,param_2);
  }
  return uVar3;
}



// FUNCTION 1450ee2b0 FUN_1450ee2b0 body=211 status=ok
// SIG undefined FUN_1450ee2b0(void)

uint FUN_1450ee2b0(longlong param_1)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  uint uVar7;
  uint local_res8 [2];
  
  pbVar1 = *(byte **)(param_1 + 0x90);
  puVar5 = (uint *)0x0;
  local_res8[0] = 1;
  puVar6 = puVar5;
  if (pbVar1 != (byte *)0x0) {
    puVar4 = puVar5;
    do {
      uVar7 = (int)puVar4 + 1;
      if (*(byte *)((longlong)(ulonglong)uVar7 + (longlong)pbVar1) == 0x3a) {
        puVar6 = (uint *)(pbVar1 + (longlong)puVar4 * 4 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc));
        break;
      }
      puVar4 = (uint *)(ulonglong)uVar7;
    } while (uVar7 < *pbVar1);
  }
  puVar4 = local_res8;
  if (puVar6 != (uint *)0x0) {
    puVar4 = puVar6;
  }
  pbVar1 = *(byte **)(param_1 + 0xd8);
  uVar7 = *puVar4;
  if (pbVar1 != (byte *)0x0) {
    do {
      uVar2 = (int)puVar5 + 1;
      if (pbVar1[uVar2] == 0x3a) {
        if (pbVar1 + (longlong)puVar5 * 8 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc) != (byte *)0x0)
        {
          iVar3 = FUN_1450ee480();
          return iVar3 + uVar7;
        }
        break;
      }
      puVar5 = (uint *)(ulonglong)uVar2;
    } while (uVar2 < *pbVar1);
  }
  return uVar7 & 0xffff;
}



// FUNCTION 1450ee390 FUN_1450ee390 body=3 status=ok
// SIG undefined FUN_1450ee390(void)

void FUN_1450ee390(void)

{
  return;
}



// FUNCTION 1450ee3a0 FUN_1450ee3a0 body=66 status=ok
// SIG undefined FUN_1450ee3a0(void)

undefined8 * FUN_1450ee3a0(undefined8 *param_1)

{
  FUN_14536d5e0();
  *param_1 = &PTR_FUN_149c292f0;
  param_1[1] = &PTR_FUN_149c29558;
  param_1[2] = &PTR_LAB_149c29560;
  param_1[5] = &PTR_LAB_149c29588;
  return param_1;
}



// FUNCTION 1450ee3f0 FUN_1450ee3f0 body=48 status=ok
// SIG undefined FUN_1450ee3f0(void)

void FUN_1450ee3f0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149c292f0;
  param_1[1] = &PTR_FUN_149c29558;
  param_1[2] = &PTR_LAB_149c29560;
  param_1[5] = &PTR_LAB_149c29588;
  FUN_14536d640();
  return;
}



// FUNCTION 1450ee420 FUN_1450ee420 body=95 status=ok
// SIG undefined FUN_1450ee420(void)

undefined8 * FUN_1450ee420(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_149c292f0;
  param_1[1] = &PTR_FUN_149c29558;
  param_1[2] = &PTR_LAB_149c29560;
  param_1[5] = &PTR_LAB_149c29588;
  FUN_14536d640();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0xf0);
  }
  return param_1;
}



// FUNCTION 1450ee480 FUN_1450ee480 body=92 status=ok
// SIG undefined FUN_1450ee480(void)

int FUN_1450ee480(int *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_1[1] - *param_1 != 0) {
    DAT_14c791078 = DAT_14c791078 * 0x5851f42d4c957f2d + 1;
    iVar1 = (int)((double)(uint)((ulonglong)DAT_14c791078 >> 0x21) * 4.656612875245797e-10 *
                  (double)(param_1[1] - *param_1) + 0.5);
  }
  return *param_1 + iVar1;
}



// FUNCTION 1450ee500 FUN_1450ee500 body=34 status=ok
// SIG undefined FUN_1450ee500(void)

void FUN_1450ee500(longlong param_1)

{
  FUN_1453a34b0(param_1 + 0x378);
  FUN_1450e9fd0(param_1);
  return;
}



// FUNCTION 1450ee530 FUN_1450ee530 body=98 status=ok
// SIG undefined FUN_1450ee530(void)

void FUN_1450ee530(longlong param_1,undefined1 param_2)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x388) != 0) {
    lVar1 = param_1 + 0x378;
    if (param_1 == 0x18) {
      lVar1 = 0;
    }
    FUN_1453a38b0(*(longlong *)(param_1 + 0x388),lVar1);
  }
  FUN_1453a34c0(param_1 + 0x378);
  FUN_1450ea0f0(param_1,param_2);
  return;
}



// FUNCTION 1450ee5d0 FUN_1450ee5d0 body=800 status=ok
// SIG undefined FUN_1450ee5d0(void)

void FUN_1450ee5d0(longlong param_1,int param_2,float param_3)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  char local_res10 [8];
  undefined2 local_58;
  undefined1 uStack_56;
  undefined1 uStack_55;
  undefined4 uStack_54;
  uint local_50;
  
  if (param_2 == 0) {
    local_58 = (undefined2)param_1;
    uStack_56 = (undefined1)((ulonglong)param_1 >> 0x10);
    uStack_55 = (undefined1)((ulonglong)param_1 >> 0x18);
    uStack_54 = (undefined4)((ulonglong)param_1 >> 0x20);
    local_50 = local_50 & 0xffffff72 | 0x72;
    FUN_1450eb1d0(param_1,&local_58,param_3 + 1.0);
    return;
  }
  if (param_2 == 1) {
    fVar2 = param_3 - *(float *)(param_1 + 0x3c4);
    if ((DAT_14c791034 == 1) && ((*(byte *)(param_1 + 0x140) >> 3 & 1) != 0)) {
      fVar4 = 0.0;
      if (fVar2 != 0.0) {
        local_res10[0] = '\0';
        uStack_55 = 0;
        fVar3 = 0.0;
        local_58 = 0x403;
        uStack_56 = 0;
        uStack_54 = 0;
        local_50 = 0;
        lVar1 = FUN_1450899e0(param_1 + 0x108,&local_58,local_res10);
        if (lVar1 != 0) {
          if (local_res10[0] == '\0') {
            *(undefined4 *)(lVar1 + 0xc) = 0;
          }
          fVar4 = *(float *)(lVar1 + 0xc);
          fVar3 = fVar4 + fVar2;
          *(float *)(lVar1 + 0xc) = fVar3;
        }
        if (((*(byte *)(param_1 + 0x150) >> 3 & 1) != 0) ||
           ((fVar2 = *(float *)(param_1 + 0xa8), fVar4 == fVar2 && (fVar3 < fVar2)))) {
          *(byte *)(param_1 + 0x163) = *(byte *)(param_1 + 0x163) | 4;
          *(float *)(param_1 + 0x3c4) = param_3;
          return;
        }
        if (fVar2 < fVar3) {
          *(float *)(param_1 + 0xa8) = fVar3;
          *(float *)(param_1 + 0x3c4) = param_3;
          return;
        }
      }
    }
    else {
      *(float *)(param_1 + 0xa8) = fVar2 + *(float *)(param_1 + 0xa8);
    }
    *(float *)(param_1 + 0x3c4) = param_3;
    return;
  }
  if (param_2 != 2) {
    if ((param_2 != 3) && (param_2 != 4)) {
      return;
    }
    lVar1 = param_2 + param_1;
    local_58 = (undefined2)lVar1;
    uStack_56 = (undefined1)((ulonglong)lVar1 >> 0x10);
    uStack_55 = (undefined1)((ulonglong)lVar1 >> 0x18);
    uStack_54 = (undefined4)((ulonglong)lVar1 >> 0x20);
    local_50 = local_50 & 0xffffff72 | 0x72;
    FUN_1450eb1d0(param_1,&local_58);
    return;
  }
  fVar2 = param_3 - *(float *)(param_1 + 0x3c8);
  if ((DAT_14c791034 == 1) && ((*(byte *)(param_1 + 0x140) >> 4 & 1) != 0)) {
    fVar4 = 0.0;
    if (fVar2 != 0.0) {
      local_res10[0] = '\0';
      uStack_55 = 0;
      fVar3 = 0.0;
      local_58 = 0x404;
      uStack_56 = 0;
      uStack_54 = 0;
      local_50 = 0;
      lVar1 = FUN_1450899e0(param_1 + 0x108,&local_58,local_res10);
      if (lVar1 != 0) {
        if (local_res10[0] == '\0') {
          *(undefined4 *)(lVar1 + 0xc) = 0;
        }
        fVar4 = *(float *)(lVar1 + 0xc);
        fVar3 = fVar4 + fVar2;
        *(float *)(lVar1 + 0xc) = fVar3;
      }
      if (((*(byte *)(param_1 + 0x150) >> 4 & 1) != 0) ||
         ((fVar2 = *(float *)(param_1 + 0xac), fVar4 == fVar2 && (fVar3 < fVar2)))) {
        *(byte *)(param_1 + 0x163) = *(byte *)(param_1 + 0x163) | 4;
        *(float *)(param_1 + 0x3c8) = param_3;
        return;
      }
      if (fVar2 < fVar3) {
        *(float *)(param_1 + 0xac) = fVar3;
        *(float *)(param_1 + 0x3c8) = param_3;
        return;
      }
    }
  }
  else {
    *(float *)(param_1 + 0xac) = fVar2 + *(float *)(param_1 + 0xac);
  }
  *(float *)(param_1 + 0x3c8) = param_3;
  return;
}



// FUNCTION 1450ee8f0 FUN_1450ee8f0 body=209 status=ok
// SIG undefined FUN_1450ee8f0(void)

void FUN_1450ee8f0(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  
  if (((*(byte *)(param_1 + 0x315) & 0x40) != 0) ||
     ((*(uint *)(*(longlong *)(param_1 + 0x2a0) + 0xc) >> 1 & 1) == 0)) {
    iVar1 = *(int *)(param_1 + 0x338);
    fVar5 = (float)DAT_14c72f434 * *(float *)(param_1 + 700);
    if (fVar5 <= 0.0) {
      fVar4 = -0.5;
    }
    else {
      fVar4 = 0.5;
    }
    iVar3 = (int)(fVar4 + fVar5);
    iVar2 = iVar1 % iVar3;
    if ((iVar3 / 2 < iVar2) || (*(int *)(param_1 + 0x30c) < iVar2)) {
      *(int *)(param_1 + 0x30c) = *(int *)(param_1 + 0x30c) + (iVar3 - iVar2);
      *(int *)(param_1 + 0x338) = (iVar3 - iVar2) + iVar1;
    }
    else {
      if (iVar2 < 1) goto LAB_1450ee9b9;
      *(int *)(param_1 + 0x338) = iVar1 - iVar2;
      *(int *)(param_1 + 0x30c) = *(int *)(param_1 + 0x30c) - iVar2;
    }
    *(byte *)(param_1 + 0x316) = *(byte *)(param_1 + 0x316) & 0xfe;
    *(byte *)(param_1 + 0x315) = *(byte *)(param_1 + 0x315) & 0x3f | 0x40;
  }
LAB_1450ee9b9:
  *(byte *)(param_1 + 0x316) = *(byte *)(param_1 + 0x316) | 8;
  return;
}



// FUNCTION 1450eea00 FUN_1450eea00 body=127 status=ok
// SIG undefined FUN_1450eea00(void)

void FUN_1450eea00(longlong param_1,uint param_2)

{
  uint uVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  undefined4 local_res8;
  undefined4 local_resc;
  
  if (param_2 != 0xffffffff) {
    fVar4 = (float)param_2 / *(float *)(param_1 + -0xd4);
    if (fVar4 <= 0.0) {
      fVar3 = -0.5;
    }
    else {
      fVar3 = 0.5;
    }
    uVar1 = (uint)(fVar3 + fVar4);
    if (uVar1 < *(uint *)(param_1 + -8)) {
      *(uint *)(param_1 + -8) = uVar1;
    }
  }
  local_res8 = 0;
  local_resc = 4;
  if ((*(int *)(param_1 + -8) == -1) || ((*(byte *)(param_1 + 0x3c) & 1) != 0)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  FUN_1450eaa80(param_1 + -0x390,&local_res8,uVar2);
  return;
}



// FUNCTION 1450eea90 FUN_1450eea90 body=51 status=ok
// SIG undefined FUN_1450eea90(void)

void FUN_1450eea90(longlong param_1)

{
  (**(code **)(*(longlong *)(param_1 + -0x390) + 0x20))();
  *(undefined4 *)(param_1 + -0xcc) = 0x3f800000;
                    /* WARNING: Could not recover jumptable at 0x0001450eeabf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + -0x378) + 0x78))();
  return;
}



// FUNCTION 1450eead0 FUN_1450eead0 body=93 status=ok
// SIG undefined FUN_1450eead0(void)

void FUN_1450eead0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 local_28;
  uint local_20;
  
  FUN_1450e71d0(param_1 + -0x378);
  local_20 = local_20 & 0xffffff72 | 0x72;
  local_28 = param_2;
  FUN_1450eb1d0(param_1 + -0x390,&local_28,param_3);
  return;
}



// FUNCTION 1450eeba0 FUN_1450eeba0 body=618 status=ok
// SIG undefined FUN_1450eeba0(void)

void FUN_1450eeba0(longlong param_1)

{
  float fVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  char local_res8 [8];
  undefined4 local_58;
  undefined8 local_54;
  
  FUN_1450ec010();
  fVar3 = log10f(*(float *)(param_1 + 0x2a4));
  fVar1 = *(float *)(param_1 + 0x3ac);
  fVar5 = 0.0;
  *(float *)(param_1 + 0x8c) = fVar3 * 3986.3135;
  if ((DAT_14c791034 == 1) && ((*(byte *)(param_1 + 0x128) >> 3 & 1) != 0)) {
    if (fVar1 != 0.0) {
      local_58 = 0x403;
      fVar3 = 0.0;
      fVar4 = 0.0;
      local_res8[0] = '\0';
      local_54 = 0;
      lVar2 = FUN_1450899e0(param_1 + 0xf0,&local_58,local_res8);
      if (lVar2 != 0) {
        if (local_res8[0] == '\0') {
          *(undefined4 *)(lVar2 + 0xc) = 0;
        }
        fVar3 = *(float *)(lVar2 + 0xc);
        fVar4 = fVar3 + fVar1;
        *(float *)(lVar2 + 0xc) = fVar4;
      }
      if ((*(byte *)(param_1 + 0x138) >> 3 & 1) == 0) {
        fVar1 = *(float *)(param_1 + 0x90);
        if ((fVar3 != fVar1) || (fVar1 <= fVar4)) {
          if (fVar1 < fVar4) {
            *(float *)(param_1 + 0x90) = fVar4;
          }
        }
        else {
          *(byte *)(param_1 + 0x14b) = *(byte *)(param_1 + 0x14b) | 4;
        }
      }
      else {
        *(byte *)(param_1 + 0x14b) = *(byte *)(param_1 + 0x14b) | 4;
      }
    }
  }
  else {
    *(float *)(param_1 + 0x90) = fVar1 + *(float *)(param_1 + 0x90);
  }
  fVar1 = *(float *)(param_1 + 0x3b0);
  if ((DAT_14c791034 == 1) && ((*(byte *)(param_1 + 0x128) >> 4 & 1) != 0)) {
    if (fVar1 != 0.0) {
      local_58 = 0x404;
      fVar3 = 0.0;
      local_res8[0] = '\0';
      local_54 = 0;
      lVar2 = FUN_1450899e0(param_1 + 0xf0,&local_58,local_res8);
      if (lVar2 != 0) {
        if (local_res8[0] == '\0') {
          *(undefined4 *)(lVar2 + 0xc) = 0;
        }
        fVar5 = *(float *)(lVar2 + 0xc);
        fVar3 = fVar5 + fVar1;
        *(float *)(lVar2 + 0xc) = fVar3;
      }
      if (((*(byte *)(param_1 + 0x138) >> 4 & 1) != 0) ||
         ((fVar1 = *(float *)(param_1 + 0x94), fVar5 == fVar1 && (fVar3 < fVar1)))) {
        *(byte *)(param_1 + 0x14b) = *(byte *)(param_1 + 0x14b) | 4;
      }
      else if (fVar1 < fVar3) {
        *(float *)(param_1 + 0x94) = fVar3;
      }
    }
  }
  else {
    *(float *)(param_1 + 0x94) = fVar1 + *(float *)(param_1 + 0x94);
  }
  return;
}



// FUNCTION 1450eee50 FUN_1450eee50 body=104 status=ok
// SIG undefined FUN_1450eee50(void)

undefined8 FUN_1450eee50(longlong param_1)

{
  char cVar1;
  undefined4 local_res8 [4];
  undefined4 local_res18 [4];
  
  cVar1 = FUN_1453a3960(*(undefined8 *)(param_1 + 0x3a0),param_1,local_res8,local_res18);
  if (cVar1 != '\0') {
    *(byte *)(param_1 + 0x316) = *(byte *)(param_1 + 0x316) & 0xfe;
    *(undefined4 *)(param_1 + 0x338) = local_res8[0];
    *(undefined4 *)(param_1 + 0x30c) = local_res18[0];
    *(byte *)(param_1 + 0x315) = *(byte *)(param_1 + 0x315) & 0x3f | 0x40;
    return 1;
  }
  return 2;
}



// FUNCTION 1450eeec0 FUN_1450eeec0 body=244 status=ok
// SIG undefined FUN_1450eeec0(void)

undefined8 *
FUN_1450eeec0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 *param_6,undefined8 param_7,undefined4 param_8,
             undefined4 param_9)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  FUN_1450e9aa0(param_1,param_2,param_4,param_5,param_7,param_8);
  FUN_1453a3480(param_1 + 0x72,param_3);
  *param_1 = &PTR_LAB_149c29608;
  param_1[2] = &PTR_FUN_149c29678;
  param_1[3] = &PTR_LAB_149c29680;
  param_1[0x10] = &PTR_LAB_149c29710;
  param_1[0x72] = &PTR_LAB_149c29740;
  uVar2 = param_6[1];
  param_1[0x75] = *param_6;
  param_1[0x76] = uVar2;
  param_1[0x77] = param_6[2];
  uVar1 = *(undefined4 *)(param_6 + 3);
  *(uint *)((longlong)param_1 + 0x3cc) = *(uint *)((longlong)param_1 + 0x3cc) & 0xfffffffe;
  *(byte *)((longlong)param_1 + 0x315) = *(byte *)((longlong)param_1 + 0x315) & 0xdf;
  *(undefined4 *)(param_1 + 0x78) = uVar1;
  *(undefined8 *)((longlong)param_1 + 0x3c4) = 0;
  *(undefined4 *)((longlong)param_1 + 700) = param_9;
  *(uint *)(param_1 + 99) = *(uint *)(param_1 + 99) & 0xfffffff9 | 1;
  return param_1;
}



// FUNCTION 1450eefc0 FUN_1450eefc0 body=123 status=ok
// SIG undefined FUN_1450eefc0(void)

undefined8 * FUN_1450eefc0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_LAB_149c29608;
  param_1[2] = &PTR_FUN_149c29678;
  param_1[3] = &PTR_LAB_149c29680;
  param_1[0x10] = &PTR_LAB_149c29710;
  param_1[0x72] = &PTR_LAB_149c29740;
  FUN_1453a34a0();
  FUN_1450e9f00(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x3d0);
  }
  return param_1;
}



// FUNCTION 1450ef060 FUN_1450ef060 body=65 status=ok
// SIG undefined FUN_1450ef060(void)

undefined8 * FUN_1450ef060(undefined8 *param_1)

{
  FUN_1450ed010();
  *param_1 = &PTR_LAB_149c297a0;
  param_1[3] = &PTR_LAB_149c29890;
  param_1[5] = &PTR_FUN_149c298a0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  return param_1;
}



// FUNCTION 1450ef0b0 FUN_1450ef0b0 body=37 status=ok
// SIG undefined FUN_1450ef0b0(void)

void FUN_1450ef0b0(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_149c297a0;
  param_1[3] = &PTR_LAB_149c29890;
  param_1[5] = &PTR_FUN_149c298a0;
  FUN_1450ed080();
  return;
}



// FUNCTION 1450ef0e0 FUN_1450ef0e0 body=101 status=ok
// SIG undefined FUN_1450ef0e0(void)

undefined8 FUN_1450ef0e0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 uVar1;
  
  FUN_1450ed110();
  if (*(longlong *)(param_1 + 0x10) == 0) {
    uVar1 = FUN_144d51d60(param_1,param_3,param_2,param_4);
  }
  else {
    *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x68);
    uVar1 = 1;
  }
  return uVar1;
}



// FUNCTION 1450ef150 FUN_1450ef150 body=36 status=ok
// SIG undefined FUN_1450ef150(void)

int FUN_1450ef150(longlong *param_1)

{
  int local_res8 [2];
  int local_res10 [6];
  
  (**(code **)(*param_1 + 0xb0))(param_1,local_res10,local_res8);
  return local_res8[0] - local_res10[0];
}



// FUNCTION 1450ef180 FUN_1450ef180 body=101 status=ok
// SIG undefined FUN_1450ef180(void)

undefined8 FUN_1450ef180(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 local_138 [264];
  longlong local_30;
  
  FUN_1453a5380(local_138,param_1,1);
  if (local_30 == 0) {
    uVar1 = 0;
    if (param_2 != (undefined8 *)0x0) {
      *param_2 = 0;
    }
  }
  else {
    uVar1 = FUN_1453a55a0(local_138,param_2);
  }
  FUN_1453a5440(local_138);
  return uVar1;
}



// FUNCTION 1450ef260 FUN_1450ef260 body=225 status=ok
// SIG undefined FUN_1450ef260(void)

undefined4 FUN_1450ef260(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 local_138 [264];
  longlong local_30 [5];
  
  FUN_1453a5380(local_138,param_1,0);
  if (local_30[0] == 0) {
    uVar1 = 2;
  }
  else {
    lVar5 = *(longlong *)(param_1 + 0x70);
    if (*(longlong *)(param_1 + 0x10) != 0) {
      lVar2 = FUN_1450ef3d0();
      lVar5 = lVar5 + lVar2;
    }
    uVar4 = 0;
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x68) + 8);
    if (*(longlong *)(local_30[0] + 0x20) != 0) {
      lVar3 = FUN_1453a5aa0(local_138);
      uVar4 = FUN_1453a4630(local_30,(lVar2 - lVar5) - lVar3);
    }
    uVar1 = FUN_1450efe30(local_30[0],uVar4,param_2,
                          *(undefined4 *)(*(longlong *)(param_1 + 0x68) + 0x54));
  }
  FUN_1453a5440(local_138);
  return uVar1;
}



// FUNCTION 1450ef350 FUN_1450ef350 body=46 status=ok
// SIG undefined FUN_1450ef350(void)

void FUN_1450ef350(longlong param_1)

{
  FUN_1450ed430();
  if ((*(longlong *)(param_1 + 0x10) == 0) && (*(longlong *)(param_1 + 0x68) != 0)) {
    thunk_FUN_1450f1920();
    return;
  }
  return;
}



// FUNCTION 1450ef380 FUN_1450ef380 body=38 status=ok
// SIG undefined FUN_1450ef380(void)

void FUN_1450ef380(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x10) == 0) {
    FUN_1450f0c00(*(undefined8 *)(param_1 + 0x68));
  }
  FUN_1450ed1a0(param_1);
  return;
}



// FUNCTION 1450ef3b0 FUN_1450ef3b0 body=5 status=ok
// SIG undefined FUN_1450ef3b0(void)

void FUN_1450ef3b0(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x68) = param_2;
  return;
}



// FUNCTION 1450ef3c0 FUN_1450ef3c0 body=4 status=ok
// SIG undefined FUN_1450ef3c0(void)

void FUN_1450ef3c0(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x20) = param_2;
  return;
}



// FUNCTION 1450ef3d0 FUN_1450ef3d0 body=42 status=ok
// SIG undefined FUN_1450ef3d0(void)

longlong FUN_1450ef3d0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x70);
  if (*(longlong *)(param_1 + 0x10) != 0) {
    lVar2 = FUN_1450ef3d0();
    return lVar2 + lVar1;
  }
  return lVar1;
}



// FUNCTION 1450ef400 `scalar_deleting_destructor' body=84 status=ok
// SIG void * `scalar_deleting_destructor'(UMSFreeThreadProxy * this, uint param_1)

/* Library Function - Single Match
    public: virtual void * __ptr64 __cdecl Concurrency::details::UMSFreeThreadProxy::`scalar
   deleting destructor'(unsigned int) __ptr64
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void * __thiscall
Concurrency::details::UMSFreeThreadProxy::_scalar_deleting_destructor_
          (UMSFreeThreadProxy *this,uint param_1)

{
  *(undefined ***)this = &PTR_LAB_149c297a0;
  *(undefined ***)(this + 0x18) = &PTR_LAB_149c29890;
  *(undefined ***)(this + 0x28) = &PTR_FUN_149c298a0;
  FUN_1450ed080();
  if ((param_1 & 1) != 0) {
    thunk_FUN_1400020a8(this,0x80);
  }
  return this;
}



// FUNCTION 1450ef460 FUN_1450ef460 body=33 status=ok
// SIG undefined FUN_1450ef460(void)

undefined8 * FUN_1450ef460(undefined8 *param_1)

{
  FUN_14539af50();
  *param_1 = &PTR_LAB_149c298a8;
  return param_1;
}



// FUNCTION 1450ef490 FUN_1450ef490 body=15 status=ok
// SIG undefined FUN_1450ef490(void)

void FUN_1450ef490(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_149c298a8;
  FUN_14539af80();
  return;
}



// FUNCTION 1450ef4a0 FUN_1450ef4a0 body=242 status=ok
// SIG undefined FUN_1450ef4a0(void)

undefined8
FUN_1450ef4a0(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8,
             undefined4 param_9,undefined4 param_10,undefined8 *param_11)

{
  void *pvVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  if (param_3 == 0) {
    return 0x1f;
  }
  pvVar1 = AK::MemoryMgr::Malloc(0,0x1a0);
  if (pvVar1 != (void *)0x0) {
    plVar2 = (longlong *)
             FUN_1453a6040(pvVar1,param_2,param_1,param_3,param_4,param_5,param_6,param_7,param_8,
                           param_9,param_10);
    *param_11 = plVar2;
    if (plVar2 == (longlong *)0x0) {
      return 2;
    }
    uVar3 = (**(code **)(*plVar2 + 8))(plVar2);
    if ((int)uVar3 == 1) {
      return uVar3;
    }
    FUN_14539ac10(*param_11);
  }
  *param_11 = 0;
  return 2;
}



// FUNCTION 1450ef5a0 FUN_1450ef5a0 body=213 status=ok
// SIG undefined FUN_1450ef5a0(void)

void FUN_1450ef5a0(longlong param_1,undefined4 param_2,float param_3)

{
  longlong lVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  undefined8 local_28;
  longlong lStack_20;
  
  local_28 = 0;
  lStack_20 = 0;
  lVar2 = *(longlong *)(param_1 + 0x10);
  while (lVar2 != 0) {
    lVar1 = *(longlong *)(lVar2 + 8);
    FUN_1453a6690(lVar2,&local_28,param_2);
    lVar2 = lVar1;
  }
  if (lStack_20 != 0) {
    lVar2 = lStack_20;
    do {
      fVar4 = (float)*(uint *)(lVar2 + 0x14) * (1.0 / param_3);
      if (fVar4 <= 0.0) {
        fVar3 = -0.5;
      }
      else {
        fVar3 = 0.5;
      }
      *(int *)(lVar2 + 0x14) = (int)(fVar3 + fVar4);
      lVar2 = *(longlong *)(lVar2 + 0x20);
    } while (lVar2 != 0);
  }
  FUN_14539b6c0(param_1,&local_28,param_2);
  return;
}



// FUNCTION 1450ef680 FUN_1450ef680 body=137 status=ok
// SIG undefined FUN_1450ef680(void)

void FUN_1450ef680(longlong param_1,undefined8 param_2,char param_3)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  while (lVar2 = lVar1, lVar2 != 0) {
    lVar1 = *(longlong *)(lVar2 + 8);
    cVar3 = FUN_1453a5e90(lVar2,param_2);
    if ((cVar3 != '\0') && ((param_3 == '\0' || (cVar3 = FUN_1453a5eb0(lVar2), cVar3 == '\0')))) {
      (*(code *)**(undefined8 **)(lVar2 + 0x58))(lVar2 + 0x58,0xffffffff);
    }
  }
  return;
}



// FUNCTION 1450ef710 FUN_1450ef710 body=137 status=ok
// SIG undefined FUN_1450ef710(void)

void FUN_1450ef710(longlong param_1,undefined8 param_2,char param_3)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  while (lVar2 = lVar1, lVar2 != 0) {
    lVar1 = *(longlong *)(lVar2 + 8);
    cVar3 = FUN_1453a5ea0(lVar2,param_2);
    if ((cVar3 != '\0') && ((param_3 == '\0' || (cVar3 = FUN_1453a5eb0(lVar2), cVar3 == '\0')))) {
      (*(code *)**(undefined8 **)(lVar2 + 0x58))(lVar2 + 0x58,0xffffffff);
    }
  }
  return;
}



// FUNCTION 1450ef7a0 FUN_1450ef7a0 body=720 status=ok
// SIG undefined FUN_1450ef7a0(void)

void FUN_1450ef7a0(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  void *pvVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  uint uVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined1 local_58;
  undefined1 local_57;
  undefined2 local_54;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  void *pvStack_30;
  
  lVar1 = *param_3;
  plVar7 = *(longlong **)(param_1 + 0x18);
  plVar9 = plVar7 + (ulonglong)*(uint *)(param_1 + 0x20) * 6;
  for (; (plVar7 != plVar9 &&
         (((*(longlong *)(lVar1 + 0x40) != *plVar7 || (*(longlong *)(lVar1 + 0x10) != plVar7[1])) ||
          (*(int *)(lVar1 + 0x2c) != (int)plVar7[2])))); plVar7 = plVar7 + 6) {
  }
  plVar10 = plVar7 + 3;
  if (plVar7 == plVar9) {
    plVar10 = (longlong *)0x0;
  }
  if (plVar10 != (longlong *)0x0) {
    lVar1 = *(longlong *)(param_1 + 0x10);
    while (lVar5 = lVar1, lVar5 != 0) {
      lVar1 = *(longlong *)(lVar5 + 8);
      if (((*(uint *)(lVar5 + 0x194) >> 1 & 1) != 0) && (lVar2 = *param_3, lVar5 != lVar2)) {
        if ((*(longlong *)(lVar2 + 0x40) == *(longlong *)(lVar5 + 0x40)) &&
           ((*(longlong *)(lVar2 + 0x10) == *(longlong *)(lVar5 + 0x10) &&
            (*(int *)(lVar2 + 0x2c) == *(int *)(lVar5 + 0x2c))))) {
          FUN_14539ac00(lVar5);
          plVar7 = (longlong *)param_2[1];
          plVar9 = (longlong *)0x0;
          while (plVar6 = plVar9, plVar9 = plVar7, plVar9 != (longlong *)0x0) {
            plVar7 = (longlong *)plVar9[4];
            if (*plVar9 == lVar5) {
              if (plVar9 == (longlong *)param_2[1]) {
                param_2[1] = plVar7;
              }
              else {
                plVar6[4] = (longlong)plVar7;
              }
              if (plVar9 == (longlong *)*param_2) {
                *param_2 = plVar6;
              }
              FUN_14539ac10();
              AK::MemoryMgr::Free(0,plVar9);
              plVar9 = plVar6;
            }
          }
          uVar8 = 0;
          do {
            local_58 = 0xb0;
            local_57 = (undefined1)uVar8;
            local_54 = 0x40;
            FUN_14539b780(param_1,lVar5,&local_58,*(undefined4 *)((longlong)param_3 + 0x14),0,1);
            uVar8 = uVar8 + 1;
          } while (uVar8 < 0x10);
          *(undefined2 *)(plVar10 + 2) = 0;
          for (puVar3 = (undefined8 *)plVar10[1]; puVar3 != (undefined8 *)0x0;
              puVar3 = (undefined8 *)*puVar3) {
            if ((((puVar3[3] == lVar5) && (*(char *)(puVar3 + 5) == -0x70)) &&
                (*(char *)((longlong)puVar3 + 0x2d) != '\0')) && ((*(byte *)(puVar3 + 7) & 4) == 0))
            {
              local_40 = *(undefined4 *)(puVar3 + 6);
              local_48 = CONCAT71((int7)((ulonglong)puVar3[5] >> 8),0x80);
              FUN_14539b780(param_1,lVar5,&local_48,*(undefined4 *)((longlong)param_3 + 0x14),1,1);
            }
          }
          FUN_14539ac10(lVar5);
        }
      }
    }
  }
  lVar1 = *param_3;
  local_38 = 0;
  pvStack_30 = (void *)0x0;
  FUN_1453a6450(lVar1,&local_38,*(undefined4 *)((longlong)param_3 + 0x14),
                *(uint *)(param_3 + 3) & 0x3fffffff);
  pvVar4 = pvStack_30;
  while (pvVar4 != (void *)0x0) {
    pvStack_30 = *(void **)((longlong)pvVar4 + 0x20);
    if (pvStack_30 == (void *)0x0) {
      pvStack_30 = (void *)0x0;
      local_38 = 0;
    }
    *(undefined8 *)((longlong)pvVar4 + 0x20) = 0;
    if ((((char)param_3[1] != -0x50) ||
        (*(char *)((longlong)param_3 + 9) != *(char *)((longlong)pvVar4 + 9))) ||
       ((*(char *)((longlong)pvVar4 + 8) != -0x50 ||
        (*(char *)((longlong)param_3 + 0xc) != *(char *)((longlong)pvVar4 + 0xc))))) {
      FUN_14539b780(param_1,lVar1,(longlong)pvVar4 + 8,*(undefined4 *)((longlong)pvVar4 + 0x14),0,1)
      ;
    }
    FUN_14539ac10();
    AK::MemoryMgr::Free(0,pvVar4);
    pvVar4 = pvStack_30;
  }
  return;
}



// FUNCTION 1450efa70 FUN_1450efa70 body=77 status=ok
// SIG undefined FUN_1450efa70(void)

int FUN_1450efa70(int param_1)

{
  double dVar1;
  
  dVar1 = ((double)param_1 * 1000.0) / (double)DAT_14c72f42c;
  if (0.0 < dVar1) {
    return (int)(dVar1 + 0.5);
  }
  return (int)(dVar1 + -0.5);
}



// FUNCTION 1450efac0 FUN_1450efac0 body=43 status=ok
// SIG undefined FUN_1450efac0(void)

undefined8 * FUN_1450efac0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_149c298b8;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 1450efaf0 FUN_1450efaf0 body=99 status=ok
// SIG undefined FUN_1450efaf0(void)

void FUN_1450efaf0(undefined8 *param_1)

{
  int *piVar1;
  void *pvVar2;
  longlong lVar3;
  
  pvVar2 = (void *)*param_1;
  if (pvVar2 != (void *)0x0) {
    piVar1 = (int *)((longlong)pvVar2 + 0x30);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      lVar3 = *(longlong *)((longlong)pvVar2 + 8);
      *(undefined8 *)((longlong)pvVar2 + 8) = 0;
      if (lVar3 != 0) {
        FUN_1450ed1a0();
      }
      if (*(longlong *)((longlong)pvVar2 + 8) != 0) {
        FUN_1450ed1a0();
        *(undefined8 *)((longlong)pvVar2 + 8) = 0;
      }
      AK::MemoryMgr::Free(0,pvVar2);
    }
    *param_1 = 0;
  }
  return;
}



// FUNCTION 1450efb60 FUN_1450efb60 body=66 status=ok
// SIG undefined FUN_1450efb60(void)

undefined8 * FUN_1450efb60(undefined8 *param_1,ulonglong param_2)

{
  FUN_1450efaf0(param_1 + 4);
  *param_1 = &PTR_FUN_149c298b8;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1450efbb0 FUN_1450efbb0 body=43 status=ok
// SIG undefined FUN_1450efbb0(void)

undefined8 * FUN_1450efbb0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_149c298b8;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1450efbe0 FUN_1450efbe0 body=101 status=ok
// SIG undefined FUN_1450efbe0(void)

undefined8 * FUN_1450efbe0(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  param_1[3] = 0;
  param_1[4] = param_3;
  if (param_3 != 0) {
    *(int *)(param_3 + 0x50) = *(int *)(param_3 + 0x50) + 1;
  }
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  *(ushort *)(param_1 + 9) = *(ushort *)(param_1 + 9) & 0xfff8;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 4;
  if (param_1[4] != 0) {
    *(undefined8 **)(param_1[4] + 0x88) = param_1;
    *(undefined4 *)(param_1 + 5) = *(undefined4 *)(*(longlong *)(param_1[4] + 0x80) + 0x20);
    return param_1;
  }
  *(undefined4 *)(param_1 + 5) = 0;
  return param_1;
}



// FUNCTION 1450efc50 FUN_1450efc50 body=380 status=ok
// SIG undefined FUN_1450efc50(void)

void FUN_1450efc50(longlong param_1,longlong param_2,uint param_3,undefined4 param_4,char param_5)

{
  ushort uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  
  uVar7 = param_2 - *(longlong *)(param_1 + 8);
  lVar8 = *(longlong *)(param_1 + 0x20);
  lVar9 = param_3 + uVar7;
  if (lVar8 == 0) goto LAB_1450efd47;
  uVar1 = *(ushort *)(param_1 + 0x48);
  iVar6 = (int)uVar7;
  if ((uVar1 & 1) == 0) {
    if (((param_5 != '\0') && ((*(byte *)(lVar8 + 0x62) & 1) != 0)) && ((uVar1 & 4) == 0)) {
      FUN_1450f0680(param_1,uVar7 & 0xffffffff);
      goto LAB_1450efcf5;
    }
  }
  else if ((iVar6 <= *(int *)(param_1 + 0x2c)) && (*(int *)(param_1 + 0x2c) < lVar9)) {
    if (param_5 == '\0') {
      FUN_1450ed630(lVar8,param_1 + 0x30);
      *(ushort *)(param_1 + 0x48) = *(ushort *)(param_1 + 0x48) & 0xfffe;
    }
    else {
      *(ushort *)(param_1 + 0x48) = uVar1 | 4;
      *(ushort *)(param_1 + 0x48) = *(ushort *)(param_1 + 0x48) & 0xfffe;
    }
LAB_1450efcf5:
    lVar8 = *(longlong *)(param_1 + 0x20);
  }
  if ((((*(byte *)(param_1 + 0x48) & 2) != 0) && (iVar2 = *(int *)(param_1 + 0x3c), iVar2 < lVar9))
     && (iVar6 <= iVar2)) {
    FUN_1450ed780(lVar8,param_1 + 0x40,iVar2 - iVar6);
    *(ushort *)(param_1 + 0x48) = *(ushort *)(param_1 + 0x48) & 0xfffd;
  }
  lVar8 = *(longlong *)(param_1 + 0x20);
  if (((lVar8 != 0) && ((*(byte *)(lVar8 + 0x62) & 3) != 0)) &&
     ((*(byte *)(lVar8 + 0x62) & 0x10) == 0)) {
    FUN_1453a6f20(lVar8,uVar7 & 0xffffffff,param_3,param_4);
  }
LAB_1450efd47:
  puVar3 = *(undefined8 **)(param_1 + 0x18);
  puVar5 = (undefined8 *)0x0;
  while (puVar4 = puVar3, puVar4 != (undefined8 *)0x0) {
    if ((longlong)puVar4[1] < lVar9) {
      if (*(int *)(puVar4 + 3) == 1) {
        FUN_144d52ab0(puVar4[4]);
      }
      puVar3 = (undefined8 *)puVar4[2];
      if (puVar4 == *(undefined8 **)(param_1 + 0x18)) {
        *(undefined8 *)(param_1 + 0x18) = puVar4[2];
      }
      else {
        puVar5[2] = puVar4[2];
      }
      if (puVar4 != (undefined8 *)0x0) {
        (**(code **)*puVar4)(puVar4,0);
        AK::MemoryMgr::Free(0,puVar4);
      }
    }
    else {
      puVar3 = (undefined8 *)puVar4[2];
      puVar5 = puVar4;
    }
  }
  return;
}



// FUNCTION 1450efdd0 FUN_1450efdd0 body=26 status=ok
// SIG undefined FUN_1450efdd0(void)

undefined1 FUN_1450efdd0(longlong param_1)

{
  if (((*(longlong *)(param_1 + 0x20) == 0) && ((*(byte *)(param_1 + 0x48) & 2) == 0)) &&
     (*(longlong *)(param_1 + 0x18) == 0)) {
    return 1;
  }
  return 0;
}



// FUNCTION 1450efdf0 FUN_1450efdf0 body=59 status=ok
// SIG undefined FUN_1450efdf0(void)

void FUN_1450efdf0(void *param_1)

{
  if (param_1 != (void *)0x0) {
    *(undefined8 *)((longlong)param_1 + 0x18) = 0;
    if (*(longlong *)((longlong)param_1 + 0x20) != 0) {
      FUN_1450ed1a0();
      *(undefined8 *)((longlong)param_1 + 0x20) = 0;
    }
    AK::MemoryMgr::Free(0,param_1);
  }
  return;
}



// FUNCTION 1450efe30 FUN_1450efe30 body=590 status=ok
// SIG undefined FUN_1450efe30(void)

undefined8 FUN_1450efe30(longlong param_1,int param_2,int *param_3,float param_4)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  double dVar4;
  float fVar5;
  uint uVar6;
  
  if (*(longlong *)(param_1 + 0x20) == 0) {
    param_3[1] = 0;
    param_3[2] = 0;
    param_3[3] = 0;
    param_3[4] = 0;
    *param_3 = 0;
    param_3[5] = 0;
    param_3[6] = 0;
    param_3[7] = 0;
    param_3[8] = 0;
  }
  else {
    uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x80);
    iVar2 = FUN_1453a9e20(uVar1);
    dVar4 = ((double)iVar2 * 1000.0) / (double)DAT_14c72f42c;
    if (dVar4 <= 0.0) {
      lVar3 = 0xbfe00000;
    }
    else {
      lVar3 = 0x3fe00000;
    }
    param_3[1] = (int)((double)(lVar3 << 0x20) + dVar4);
    iVar2 = FUN_1453a9e50(uVar1);
    dVar4 = ((double)iVar2 * 1000.0) / (double)DAT_14c72f42c;
    if (dVar4 <= 0.0) {
      lVar3 = 0xbfe00000;
    }
    else {
      lVar3 = 0x3fe00000;
    }
    param_3[2] = (int)((double)(lVar3 << 0x20) + dVar4);
    iVar2 = FUN_1453a9e30(uVar1);
    dVar4 = ((double)iVar2 * 1000.0) / (double)DAT_14c72f42c;
    if (dVar4 <= 0.0) {
      lVar3 = 0xbfe00000;
    }
    else {
      lVar3 = 0x3fe00000;
    }
    param_3[3] = (int)((double)(lVar3 << 0x20) + dVar4);
    dVar4 = ((double)param_2 * 1000.0) / (double)DAT_14c72f42c;
    uVar6 = 0x3fe00000;
    if (dVar4 <= 0.0) {
      uVar6 = 0xbfe00000;
    }
    *param_3 = (int)((double)((ulonglong)uVar6 << 0x20) + dVar4);
    if (*(int *)(*(longlong *)(param_1 + 0x20) + 0xa0) - param_2 < 1) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_1450efa70();
    }
    param_3[4] = iVar2;
    lVar3 = FUN_1453a8cc0(uVar1);
    fVar5 = 1.0 / ((float)DAT_14c72f42c * param_4);
    param_3[6] = (int)((float)*(uint *)(lVar3 + 8) * fVar5);
    param_3[5] = (int)((float)*(uint *)(lVar3 + 4) * fVar5);
    param_3[7] = (int)((float)*(uint *)(lVar3 + 0xc) * fVar5);
    param_3[8] = (int)((float)*(uint *)(lVar3 + 0x10) * fVar5);
  }
  return 1;
}



// FUNCTION 1450f0080 FUN_1450f0080 body=84 status=ok
// SIG undefined FUN_1450f0080(void)

void FUN_1450f0080(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(longlong *)(param_1 + 0x20) != 0) {
    iVar1 = FUN_1453a6e80(*(longlong *)(param_1 + 0x20),param_3);
    iVar1 = iVar1 + (param_2 - param_3);
  }
  *(ushort *)(param_1 + 0x48) = *(ushort *)(param_1 + 0x48) | 1;
  *(int *)(param_1 + 0x2c) = param_2 - iVar1;
  *(undefined4 *)(param_1 + 0x30) = 0;
  return;
}



// FUNCTION 1450f00e0 FUN_1450f00e0 body=173 status=ok
// SIG undefined FUN_1450f00e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1450f00e0(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  *(ushort *)(param_1 + 0x48) = *(ushort *)(param_1 + 0x48) & 0xfffc;
  puVar1 = *(undefined8 **)(param_1 + 0x18);
  while (puVar3 = puVar1, puVar3 != (undefined8 *)0x0) {
    if (*(int *)(puVar3 + 3) == 1) {
      FUN_144d52ab0(puVar3[4]);
    }
    puVar1 = (undefined8 *)puVar3[2];
    uVar4 = puVar3[2];
    if (puVar3 == *(undefined8 **)(param_1 + 0x18)) {
      *(undefined8 *)(param_1 + 0x18) = puVar3[2];
      uVar4 = _DAT_00000010;
    }
    _DAT_00000010 = uVar4;
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,0);
      AK::MemoryMgr::Free(0,puVar3);
    }
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    *(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x88) = 0;
    lVar2 = *(longlong *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = 0;
    if (lVar2 != 0) {
      FUN_1450ed1a0();
      return;
    }
  }
  return;
}


