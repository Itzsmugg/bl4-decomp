// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 143142ce6 FUN_143142ce6 body=168 status=ok
// SIG undefined FUN_143142ce6(void)

void FUN_143142ce6(longlong param_1)

{
  ulonglong uVar1;
  undefined1 auStack_78 [32];
  undefined1 local_58 [64];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = (ulonglong)*(uint *)(param_1 + 0x40dc);
  if (uVar1 != 0) {
    memcpy(local_58,(void *)(param_1 + 0x26d0),uVar1 * 8);
  }
  (**(code **)(**(longlong **)(param_1 + 0x140) + 0x108))
            (*(longlong **)(param_1 + 0x140),uVar1,local_58,*(undefined8 *)(param_1 + 0x27a8));
  *(undefined8 *)(param_1 + 0x2780) = 0;
  *(undefined8 *)(param_1 + 0x2788) = 0;
  *(undefined8 *)(param_1 + 0x2770) = 0;
  *(undefined8 *)(param_1 + 0x2778) = 0;
  *(undefined8 *)(param_1 + 0x2760) = 0;
  *(undefined8 *)(param_1 + 0x2768) = 0;
  *(undefined8 *)(param_1 + 0x2750) = 0;
  *(undefined8 *)(param_1 + 0x2758) = 0;
  *(undefined4 *)(param_1 + 0x2798) = 1;
  FUN_143142ec2(param_1);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143142d90 FUN_143142d90 body=305 status=ok
// SIG undefined FUN_143142d90(void)

void FUN_143142d90(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_88 [32];
  undefined1 local_68 [64];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar8 = (ulonglong)*(uint *)(param_1 + 0x40dc);
  if (uVar8 != 0) {
    memcpy(local_68,(void *)(param_1 + 0x26d0),uVar8 * 8);
  }
  (**(code **)(**(longlong **)(param_1 + 0x140) + 0x108))
            (*(longlong **)(param_1 + 0x140),uVar8,local_68,*(undefined8 *)(param_1 + 0x27a8));
  lVar9 = 0;
  do {
    lVar4 = *(longlong *)(param_1 + 10000 + lVar9 * 8);
    if (lVar4 != 0) {
      *(undefined8 *)(param_1 + 10000 + lVar9 * 8) = 0;
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
              bVar10 = plVar7 != DAT_14ca843c0;
              plVar6 = plVar5;
              if (bVar10) {
                plVar7 = DAT_14ca843c0;
                plVar6 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar6;
              UNLOCK();
            } while (bVar10);
          }
          else {
            do {
              *plVar5 = (longlong)plVar6;
              LOCK();
              bVar10 = plVar6 != DAT_14ca843c8;
              plVar7 = plVar5;
              if (bVar10) {
                plVar6 = DAT_14ca843c8;
                plVar7 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar7;
              UNLOCK();
            } while (bVar10);
          }
        }
      }
    }
    *(undefined8 *)(param_1 + 0x2750 + lVar9 * 8) = 0;
    lVar9 = lVar9 + 1;
  } while (lVar9 != 8);
  *(undefined8 *)(param_1 + 0x2790) = 0;
  *(undefined4 *)(param_1 + 0x2798) = 0;
  if ((local_28 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143142ec2 FUN_143142ec2 body=549 status=ok
// SIG undefined FUN_143142ec2(void)

void FUN_143142ec2(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong *plVar8;
  longlong lVar9;
  int iVar10;
  ulonglong uVar11;
  undefined1 auStack_108 [32];
  int local_e8;
  uint local_e0;
  longlong local_d8;
  undefined *puStack_d0;
  longlong local_c8 [17];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (*(int *)(param_1 + 0x2798) == 0) goto LAB_1431430bb;
  lVar9 = 0;
  uVar11 = 0;
  do {
    if (*(longlong *)(param_1 + 10000 + uVar11 * 8) != 0) {
      local_c8[6] = 0;
      local_c8[7] = 0;
      local_c8[4] = 0;
      local_c8[5] = 0;
      local_c8[2] = 0;
      local_c8[3] = 0;
      local_c8[0] = 0;
      local_c8[1] = 0;
      iVar10 = (int)uVar11;
      uVar4 = 0;
      if (7 < uVar11) goto LAB_143142faf;
      uVar3 = 0;
      uVar7 = uVar11;
      goto LAB_143142f85;
    }
    uVar11 = uVar11 + 1;
    lVar9 = lVar9 + -8;
  } while (uVar11 != 8);
  if (*(int *)(param_1 + 0x2790) == -1) {
    uVar4 = 0;
    uVar11 = 0xffffffff;
  }
  else {
    local_d8 = 0;
    puStack_d0 = (undefined *)0x0;
    uVar4 = 0;
    local_e0 = 0;
    local_e8 = 0;
    uVar11 = 0xffffffff;
    (**(code **)(**(longlong **)(param_1 + 0x140) + 0x110))
              (*(longlong **)(param_1 + 0x140),0xffffffff,0,0);
  }
  goto LAB_1431430a4;
  while( true ) {
    local_c8[uVar7 + 8] = lVar1;
    local_c8[uVar7] = *(longlong *)(lVar1 + 0x40);
    uVar3 = uVar3 + 1;
    uVar7 = uVar7 + 1;
    uVar4 = 8 - iVar10;
    if ((int)uVar7 == 8) break;
LAB_143142f85:
    lVar1 = *(longlong *)(param_1 + 10000 + uVar7 * 8);
    uVar4 = uVar3;
    if (lVar1 == 0) break;
  }
LAB_143142faf:
  if (((*(int *)(param_1 + 0x2790) != iVar10) || (uVar4 != *(uint *)(param_1 + 0x2794))) ||
     (iVar5 = memcmp((void *)((longlong)local_c8 - lVar9),(void *)((param_1 - lVar9) + 0x2750),
                     (ulonglong)uVar4 * 8), iVar5 != 0)) {
    if ((ulonglong)uVar4 != 0) {
      uVar7 = uVar11;
      do {
        lVar1 = local_c8[uVar7];
        if (lVar1 != *(longlong *)(param_1 + 0x2750 + uVar7 * 8)) {
          plVar2 = *(longlong **)(local_c8[uVar7 + 8] + 0x10);
          if (*(byte *)(local_c8[uVar7 + 8] + 0x18) < 2) {
            plVar8 = plVar2 + 6;
            if (plVar2 == (longlong *)0x0) {
              plVar8 = (longlong *)0x0;
            }
          }
          else {
            if (plVar2 == (longlong *)0x0) {
              lVar6 = 0;
            }
            else {
              lVar6 = (**(code **)(*plVar2 + 0x30))();
            }
            plVar8 = (longlong *)(lVar6 + 0x60);
            if (lVar6 == 0) {
              plVar8 = (longlong *)0x0;
            }
          }
          FUN_143142986(param_1,plVar8,1);
          *(longlong *)(param_1 + 0x2750 + uVar7 * 8) = lVar1;
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < uVar4 + iVar10);
    }
    local_d8 = (longlong)local_c8 - lVar9;
    puStack_d0 = &DAT_14a33f860;
    local_e8 = iVar10;
    local_e0 = uVar4;
    (**(code **)(**(longlong **)(param_1 + 0x140) + 0x110))
              (*(longlong **)(param_1 + 0x140),0xffffffff,0,0);
  }
LAB_1431430a4:
  *(int *)(param_1 + 0x2790) = (int)uVar11;
  *(uint *)(param_1 + 0x2794) = uVar4;
  *(undefined4 *)(param_1 + 0x2798) = 0;
LAB_1431430bb:
  if ((local_40 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1431430e8 FUN_1431430e8 body=266 status=ok
// SIG undefined FUN_1431430e8(void)

void FUN_1431430e8(longlong param_1,longlong param_2,undefined4 param_3)

{
  int *piVar1;
  longlong lVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  lVar2 = *(longlong *)(param_1 + 8);
  uVar5 = *(uint *)(lVar2 + 0x17c);
  if (uVar5 != 0) {
    uVar4 = 0;
    if (uVar5 != 0) {
      for (; (uVar5 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
      }
    }
    do {
      piVar1 = (int *)(lVar2 + 0x248 + (ulonglong)uVar4 * 0x18);
      *piVar1 = *piVar1 + 1;
      bVar3 = (byte)uVar4 & 0x1f;
      uVar5 = (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3) & uVar5;
      if (uVar5 == 0) {
        uVar4 = 0x20;
      }
      else {
        uVar4 = 0;
        if (uVar5 != 0) {
          for (; (uVar5 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
          }
        }
      }
    } while (uVar5 != 0);
  }
  lVar2 = param_1 + -0x18;
  if ((*(char *)(param_1 + 0x17d28) == '\x01') && (*(longlong *)(param_1 + 0x17d40) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x17d40) + 0x10);
    *piVar1 = *piVar1 + 1;
  }
  FUN_147357912(lVar2);
  (**(code **)(*(longlong *)(param_1 + -0x18) + 0x5a0))(lVar2);
  uVar5 = *(uint *)(param_1 + 0x26b0);
  if (((ulonglong)uVar5 < 5) && ((0x17U >> (uVar5 & 0x1f) & 1) != 0)) {
    iVar6 = *(int *)(&DAT_14a344b58 + (ulonglong)uVar5 * 4);
  }
  else {
    FUN_140033559(".\\Runtime/Windows/D3D11RHI/Private/D3D11Commands.cpp",0x3ba,
                  L"Unknown primitive type: %u");
    iVar6 = 4;
  }
  if (*(int *)(param_1 + 0x1d50) != iVar6) {
    *(int *)(param_1 + 0x1d50) = iVar6;
    (**(code **)(**(longlong **)(param_1 + 0x158) + 0xc0))();
  }
  (**(code **)(**(longlong **)(param_1 + 0x128) + 0x140))
            (*(longlong **)(param_1 + 0x128),*(undefined8 *)(param_2 + 0x38),param_3);
  FUN_1473558a2(lVar2);
  return;
}



// FUNCTION 1431431f2 FUN_1431431f2 body=408 status=ok
// SIG undefined FUN_1431431f2(void)

void FUN_1431431f2(longlong param_1,longlong param_2,longlong param_3,int param_4)

{
  int *piVar1;
  longlong lVar2;
  byte bVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  lVar2 = *(longlong *)(param_1 + 8);
  uVar6 = *(uint *)(lVar2 + 0x17c);
  if (uVar6 != 0) {
    uVar5 = 0;
    if (uVar6 != 0) {
      for (; (uVar6 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
      }
    }
    do {
      piVar1 = (int *)(lVar2 + 0x248 + (ulonglong)uVar5 * 0x18);
      *piVar1 = *piVar1 + 1;
      bVar3 = (byte)uVar5 & 0x1f;
      uVar6 = (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3) & uVar6;
      if (uVar6 == 0) {
        uVar5 = 0x20;
      }
      else {
        uVar5 = 0;
        if (uVar6 != 0) {
          for (; (uVar6 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
          }
        }
      }
    } while (uVar6 != 0);
  }
  lVar2 = param_1 + -0x18;
  if ((*(char *)(param_1 + 0x17d28) == '\x01') && (*(longlong *)(param_1 + 0x17d40) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x17d40) + 0x10);
    *piVar1 = *piVar1 + 1;
    piVar1 = (int *)(*(longlong *)(param_1 + 0x17d40) + 0x14);
    *piVar1 = *piVar1 + 1;
  }
  FUN_147357912(lVar2);
  (**(code **)(*(longlong *)(param_1 + -0x18) + 0x5a0))(lVar2);
  iVar7 = 0x2a;
  if (*(int *)(param_2 + 0x24) == 2) {
    iVar7 = 0x39;
  }
  lVar4 = param_2 + 0x30;
  if (param_2 == 0) {
    lVar4 = 0;
  }
  *(longlong *)(param_1 + 0x40a0) = lVar4;
  if ((((*(char *)(param_1 + 0x25c8) != '\0') ||
       (*(longlong *)(param_1 + 0x1d40) != *(longlong *)(param_2 + 0x38))) ||
      (*(int *)(param_1 + 0x1d48) != iVar7)) || (*(int *)(param_1 + 0x1d4c) != 0)) {
    *(longlong *)(param_1 + 0x1d40) = *(longlong *)(param_2 + 0x38);
    *(int *)(param_1 + 0x1d48) = iVar7;
    *(undefined4 *)(param_1 + 0x1d4c) = 0;
    (**(code **)(**(longlong **)(param_1 + 0x158) + 0x98))();
  }
  uVar6 = *(uint *)(param_1 + 0x26b0);
  if (((ulonglong)uVar6 < 5) && ((0x17U >> (uVar6 & 0x1f) & 1) != 0)) {
    iVar7 = *(int *)(&DAT_14a344b58 + (ulonglong)uVar6 * 4);
  }
  else {
    FUN_140033559(".\\Runtime/Windows/D3D11RHI/Private/D3D11Commands.cpp",0x3ba,
                  L"Unknown primitive type: %u");
    iVar7 = 4;
  }
  if (*(int *)(param_1 + 0x1d50) != iVar7) {
    *(int *)(param_1 + 0x1d50) = iVar7;
    (**(code **)(**(longlong **)(param_1 + 0x158) + 0xc0))();
  }
  (**(code **)(**(longlong **)(param_1 + 0x128) + 0x138))
            (*(longlong **)(param_1 + 0x128),*(undefined8 *)(param_3 + 0x38),param_4 * 0x14);
  FUN_1473558a2(lVar2);
  return;
}



// FUNCTION 14314338a FUN_14314338a body=423 status=ok
// SIG undefined FUN_14314338a(void)

void FUN_14314338a(longlong param_1,longlong param_2,longlong param_3,int param_4,int param_5)

{
  int *piVar1;
  longlong lVar2;
  byte bVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  lVar2 = *(longlong *)(param_1 + 8);
  uVar6 = *(uint *)(lVar2 + 0x17c);
  if (uVar6 != 0) {
    uVar5 = 0;
    if (uVar6 != 0) {
      for (; (uVar6 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
      }
    }
    do {
      piVar1 = (int *)(lVar2 + 0x248 + (ulonglong)uVar5 * 0x18);
      *piVar1 = *piVar1 + 1;
      bVar3 = (byte)uVar5 & 0x1f;
      uVar6 = (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3) & uVar6;
      if (uVar6 == 0) {
        uVar5 = 0x20;
      }
      else {
        uVar5 = 0;
        if (uVar6 != 0) {
          for (; (uVar6 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
          }
        }
      }
    } while (uVar6 != 0);
  }
  lVar2 = param_1 + -0x18;
  if ((*(char *)(param_1 + 0x17d28) == '\x01') && (*(longlong *)(param_1 + 0x17d40) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x17d40) + 0x10);
    *piVar1 = *piVar1 + 1;
  }
  FUN_147357912(lVar2);
  (**(code **)(*(longlong *)(param_1 + -0x18) + 0x5a0))(lVar2);
  iVar7 = 0x2a;
  if (*(int *)(param_2 + 0x24) == 2) {
    iVar7 = 0x39;
  }
  lVar4 = param_2 + 0x30;
  if (param_2 == 0) {
    lVar4 = 0;
  }
  *(longlong *)(param_1 + 0x40a0) = lVar4;
  if ((((*(char *)(param_1 + 0x25c8) != '\0') ||
       (*(longlong *)(param_1 + 0x1d40) != *(longlong *)(param_2 + 0x38))) ||
      (*(int *)(param_1 + 0x1d48) != iVar7)) || (*(int *)(param_1 + 0x1d4c) != 0)) {
    *(longlong *)(param_1 + 0x1d40) = *(longlong *)(param_2 + 0x38);
    *(int *)(param_1 + 0x1d48) = iVar7;
    *(undefined4 *)(param_1 + 0x1d4c) = 0;
    (**(code **)(**(longlong **)(param_1 + 0x158) + 0x98))();
  }
  uVar6 = *(uint *)(param_1 + 0x26b0);
  if (((ulonglong)uVar6 < 5) && ((0x17U >> (uVar6 & 0x1f) & 1) != 0)) {
    iVar7 = *(int *)(&DAT_14a344b58 + (ulonglong)uVar6 * 4);
  }
  else {
    FUN_140033559(".\\Runtime/Windows/D3D11RHI/Private/D3D11Commands.cpp",0x3ba,
                  L"Unknown primitive type: %u");
    iVar7 = 4;
  }
  if (*(int *)(param_1 + 0x1d50) != iVar7) {
    *(int *)(param_1 + 0x1d50) = iVar7;
    (**(code **)(**(longlong **)(param_1 + 0x158) + 0xc0))();
  }
  iVar7 = -param_5;
  if (-param_5 < 0) {
    iVar7 = param_5;
  }
  while (param_5 != 0) {
    (**(code **)(**(longlong **)(param_1 + 0x128) + 0x138))
              (*(longlong **)(param_1 + 0x128),*(undefined8 *)(param_3 + 0x38),param_4);
    param_4 = param_4 + 0x14;
    param_5 = iVar7 + -1;
    iVar7 = param_5;
  }
  FUN_1473558a2(lVar2);
  return;
}



// FUNCTION 143143532 FUN_143143532 body=248 status=ok
// SIG undefined FUN_143143532(void)

void FUN_143143532(longlong param_1,uint param_2,float param_3,float param_4)

{
  int iVar1;
  
  if (param_3 <= param_4) {
    if (1.0 <= param_3) {
      param_3 = 1.0;
    }
    if (param_3 <= 0.0) {
      param_3 = 0.0;
    }
    if (1.0 <= param_4) {
      param_4 = 1.0;
    }
    if (param_4 <= 0.0) {
      param_4 = 0.0;
    }
    if ((((DAT_14ca84df4 == 0x10de) &&
         (iVar1 = FUN_142500450(*(undefined8 *)(param_1 + 0x150),param_2 & 0xff,param_3,param_4),
         iVar1 != 0)) && (DAT_14ca75f60 == '\0')) &&
       (DAT_14ca75f60 = '\x01', *(char *)(param_1 + 0x17d30) == '\x01')) {
      FUN_140b3f358();
    }
    if (((DAT_14ca84df4 == 0x1002) &&
        (iVar1 = agsDriverExtensionsDX11_SetDepthBounds
                           (*(undefined8 *)(param_1 + 0x2680),*(undefined8 *)(param_1 + 0x140),
                            param_2,param_3,param_4), iVar1 != 0)) &&
       ((DAT_14ca75f61 == '\0' && (DAT_14ca75f61 = '\x01', *(char *)(param_1 + 0x17d30) == '\x01')))
       ) {
      FUN_140b3f358();
    }
    *(char *)(param_1 + 0x160) = (char)param_2;
    *(float *)(param_1 + 0x164) = param_3;
    *(float *)(param_1 + 0x168) = param_4;
  }
  return;
}



// FUNCTION 14314362f FUN_14314362f body=69 status=ok
// SIG undefined FUN_14314362f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14314362f(void)

{
  _DAT_14ca75f90 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143143671. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca75f98,1);
  return;
}



// FUNCTION 143143674 FUN_143143674 body=69 status=ok
// SIG undefined FUN_143143674(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143143674(void)

{
  _DAT_14ca75fa8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431436b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca75fb0,1);
  return;
}



// FUNCTION 1431436ba FUN_1431436ba body=68 status=ok
// SIG undefined FUN_1431436ba(void)

void FUN_1431436ba(longlong *param_1)

{
  (**(code **)(*param_1 + 0x5b0))();
  FUN_144725486(param_1 + 0x2fae);
  FUN_1400020a8(param_1[0x4d7]);
  param_1[0x4d7] = 0;
  *(undefined4 *)(param_1 + 0x4d8) = 0;
  return;
}



// FUNCTION 1431436fe FUN_1431436fe body=573 status=ok
// SIG undefined FUN_1431436fe(void)

void FUN_1431436fe(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  char cVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  longlong *local_30;
  undefined4 local_28;
  
  if (DAT_14ca84d88 == '\x01') {
    DAT_14ca84d88 = '\0';
    lVar4 = *(longlong *)(param_1 + 0x17d10);
    if (lVar4 != 0) {
      *(undefined8 *)(param_1 + 0x17d10) = 0;
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
          plVar6 = (longlong *)FUN_14001cc68(0x10);
          plVar6[1] = lVar4;
          plVar8 = DAT_14ca843c0;
          plVar7 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar6 = (longlong)plVar8;
              LOCK();
              bVar9 = plVar8 != DAT_14ca843c0;
              plVar7 = plVar6;
              if (bVar9) {
                plVar8 = DAT_14ca843c0;
                plVar7 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar7;
              UNLOCK();
            } while (bVar9);
          }
          else {
            do {
              *plVar6 = (longlong)plVar7;
              LOCK();
              bVar9 = plVar7 != DAT_14ca843c8;
              plVar8 = plVar6;
              if (bVar9) {
                plVar7 = DAT_14ca843c8;
                plVar8 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar8;
              UNLOCK();
            } while (bVar9);
          }
        }
      }
    }
    FUN_145bcc89c();
    FUN_147359f81();
    memset((void *)(param_1 + 0x4168),0,0x2a0);
    *(undefined8 *)(param_1 + 0x170) = 0;
    (**(code **)(*(longlong *)(param_1 + 0x158) + 0x10))(param_1 + 0x158);
    local_30 = (longlong *)0x0;
    local_28 = 0;
    FUN_14007658c(&DAT_14ca850c8,&local_30,7);
    FUN_14735a0fa();
    if (*(longlong *)(param_1 + 0x2680) != 0) {
      (**(code **)(**(longlong **)(param_1 + 0x140) + 0x10))();
      agsDriverExtensionsDX11_DestroyDevice
                (*(undefined8 *)(param_1 + 0x2680),*(undefined8 *)(param_1 + 0x150),0,
                 *(undefined8 *)(param_1 + 0x140),0);
      agsDeInitialize(*(undefined8 *)(param_1 + 0x2680));
      DAT_14ca84df0 = 0;
      *(undefined8 *)(param_1 + 0x2680) = 0;
    }
    if ((((DAT_14ca84df4 == 0x8086) && (cVar5 = FUN_1462b4477(), cVar5 != '\0')) &&
        (*(longlong *)(param_1 + 0x2688) != 0)) && (cVar5 = FUN_1462b4477(), cVar5 != '\0')) {
      FUN_144bcf310((undefined8 *)(param_1 + 0x2688));
      *(undefined8 *)(param_1 + 0x2688) = 0;
    }
    if (DAT_14ca8507a == '\x01') {
      (**(code **)(**(longlong **)(param_1 + 0x140) + 0x370))();
      (**(code **)(**(longlong **)(param_1 + 0x140) + 0x378))();
      (**(code **)**(undefined8 **)(param_1 + 0x150))
                (*(undefined8 **)(param_1 + 0x150),&DAT_14a3405d0,&local_30);
      if (local_30 != (longlong *)0x0) {
        (**(code **)(*local_30 + 0x50))(local_30,2);
      }
    }
    if (*(PVOID *)(param_1 + 0x17d28) != (PVOID)0xffffffffffffffff) {
      RemoveVectoredExceptionHandler(*(PVOID *)(param_1 + 0x17d28));
    }
    FUN_14735a19a(param_1 + 0x140);
    FUN_14735a1c0(param_1 + 0x150);
  }
  return;
}



// FUNCTION 143143948 FUN_143143948 body=35 status=ok
// SIG undefined FUN_143143948(void)

undefined8 FUN_143143948(void)

{
  if (DAT_14ca83900 != (longlong *)0x0) {
    (**(code **)(*DAT_14ca83900 + 0x98))();
  }
  return 1;
}



// FUNCTION 14314396b FUN_14314396b body=35 status=ok
// SIG undefined FUN_14314396b(void)

undefined8 FUN_14314396b(void)

{
  if (DAT_14ca83900 != (longlong *)0x0) {
    (**(code **)(*DAT_14ca83900 + 0x98))();
  }
  return 1;
}



// FUNCTION 14314398e FUN_14314398e body=258 status=ok
// SIG undefined FUN_14314398e(void)

ulonglong FUN_14314398e(longlong param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined1 auStack_68 [44];
  uint local_3c;
  ulonglong local_38;
  
  uVar3 = (ulonglong)param_2;
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar4 = 0;
  do {
    if ((char)uVar3 == (&DAT_14a3405e0)[lVar4]) {
      iVar1 = *(int *)((longlong)&DAT_14c873434 + (ulonglong)(((uint)uVar3 & 0xff) * 0x30));
      if (iVar1 < 0x49) {
        if (iVar1 == 0x1b) {
          iVar2 = 0x1c;
        }
        else if (iVar1 == 0x35) {
          iVar2 = 0x38;
        }
        else if (iVar1 == 0x46) {
          iVar2 = 0x47;
        }
        else {
LAB_143143a0d:
          iVar2 = iVar1;
        }
      }
      else if (iVar1 == 0x49) {
        iVar2 = 0x4a;
      }
      else if (iVar1 == 0x4c) {
        iVar2 = 0x4d;
      }
      else {
        iVar2 = 0x57;
        if (iVar1 != 0x5a) goto LAB_143143a0d;
      }
      local_3c = 0;
      iVar1 = (**(code **)(**(longlong **)(param_1 + 0x150) + 0xe8))
                        (*(longlong **)(param_1 + 0x150),iVar2,&local_3c);
      if ((iVar1 < 0) || ((~local_3c & 0x84200) != 0)) {
        uVar3 = CONCAT71((int7)(uVar3 >> 8),(&DAT_14a3405e1)[lVar4]);
      }
    }
    lVar4 = lVar4 + 2;
    if (lVar4 == 4) {
      if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
        return uVar3;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
  } while( true );
}



// FUNCTION 143143a91 FUN_143143a91 body=69 status=ok
// SIG undefined FUN_143143a91(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143143a91(void)

{
  _DAT_14ca75fc0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143143ad3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca75fc8,1);
  return;
}



// FUNCTION 143143ad6 FUN_143143ad6 body=69 status=ok
// SIG undefined FUN_143143ad6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143143ad6(void)

{
  _DAT_14ca75fd0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143143b18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca75fd8,1);
  return;
}



// FUNCTION 143143b1c FUN_143143b1c body=724 status=ok
// SIG undefined FUN_143143b1c(void)

ulonglong FUN_143143b1c(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                       char param_5,byte param_6,undefined1 param_7)

{
  float fVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  float *pfVar5;
  undefined8 unaff_RBP;
  ulonglong uVar6;
  byte bVar7;
  undefined8 unaff_R13;
  float fVar9;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  longlong local_d0 [3];
  LARGE_INTEGER local_b8;
  ulonglong local_b0;
  ulonglong uVar8;
  
  uVar6 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),param_7);
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_14735a86c(local_d0,uVar6 & 0xffffffff);
  local_d8 = (ulonglong)local_d8._4_4_ << 0x20;
  iVar4 = (**(code **)(**(longlong **)(param_1 + 0x140) + 0xe8))
                    (*(longlong **)(param_1 + 0x140),param_2,param_3,param_4);
  if (local_d0[0] != 0) {
    LOCK();
    DAT_14ca84aa8 = DAT_14ca84aa8 + -1;
    UNLOCK();
    if (DAT_14ca84aa8 == 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14ca83c98);
    }
  }
  bVar7 = param_6 ^ 1 | iVar4 != 1;
  uVar8 = CONCAT71((int7)((ulonglong)unaff_R13 >> 8),bVar7);
  if (bVar7 == 0) {
    FUN_1403936f2(local_d0,1,1);
    QueryPerformanceCounter(&local_b8);
    dVar2 = (double)local_b8.QuadPart * DAT_14c83f420;
    pfVar5 = (float *)&DAT_14c760af4;
    if (param_5 != '\0') {
      pfVar5 = (float *)&DAT_14c760af0;
    }
    fVar1 = *pfVar5;
    dVar3 = 5.0;
    do {
      FUN_14735a86c(&local_b8,uVar6 & 0xffffffff);
      local_d8 = local_d8 & 0xffffffff00000000;
      iVar4 = (**(code **)(**(longlong **)(param_1 + 0x140) + 0xe8))
                        (*(longlong **)(param_1 + 0x140),param_2,param_3,param_4);
      if (local_b8.QuadPart != 0) {
        LOCK();
        DAT_14ca84aa8 = DAT_14ca84aa8 + -1;
        UNLOCK();
        if (DAT_14ca84aa8 == 0) {
          LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14ca83c98);
        }
      }
      uVar8 = CONCAT71((int7)(uVar8 >> 8),iVar4 == 0);
      if (iVar4 == 0) {
LAB_143143d8e:
        FUN_1402488ea(local_d0);
        goto LAB_143143d98;
      }
      QueryPerformanceCounter(&local_b8);
      fVar9 = (float)(((double)local_b8.QuadPart * DAT_14c83f420 + 16777216.0) -
                     (dVar2 + 16777216.0));
      if (dVar3 < (double)fVar9) {
        (**(code **)(**(longlong **)(param_1 + 0x150) + 0x138))();
        dVar3 = dVar3 + 5.0;
      }
      if (fVar1 < fVar9) {
        if (iVar4 < 0) {
          local_d8 = *(ulonglong *)(param_1 + 0x150);
          FUN_143142730(iVar4,"Result",".\\Runtime/Windows/D3D11RHI/Private/D3D11Query.cpp",0x15d);
        }
        goto LAB_143143d8e;
      }
    } while (iVar4 == 1);
    FUN_1402488ea(local_d0);
  }
  if (iVar4 == 0) {
    uVar8 = CONCAT71((int7)(uVar8 >> 8),1);
  }
  else {
    if ((iVar4 != 1) && (iVar4 < 0)) {
      local_d8 = *(ulonglong *)(param_1 + 0x150);
      FUN_143142730(iVar4,"Result",".\\Runtime/Windows/D3D11RHI/Private/D3D11Query.cpp",0x16e);
    }
    uVar8 = 0;
  }
LAB_143143d98:
  if ((local_b0 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return uVar8 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143143df2 FUN_143143df2 body=589 status=ok
// SIG undefined FUN_143143df2(void)

void FUN_143143df2(longlong param_1)

{
  longlong *plVar1;
  double dVar2;
  int iVar3;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined8 local_b8 [2];
  undefined8 local_a8;
  longlong *local_a0;
  LARGE_INTEGER local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  DAT_14ca813c0 = 0;
  local_a0 = (longlong *)0x0;
  plVar1 = *(longlong **)(param_1 + 0x140);
  local_a8 = 3;
  iVar3 = (**(code **)(**(longlong **)(param_1 + 0x150) + 0xc0))();
  if (iVar3 == 0) {
    (**(code **)(*plVar1 + 0xd8))(plVar1,local_a0);
    (**(code **)(*plVar1 + 0xe0))(plVar1,local_a0);
    FUN_14735a86c(&local_98,1);
    local_c8 = 0;
    iVar3 = (**(code **)(*plVar1 + 0xe8))(plVar1,local_a0,local_b8,0x10);
    if (local_98.QuadPart != 0) {
      LOCK();
      DAT_14ca84aa8 = DAT_14ca84aa8 + -1;
      UNLOCK();
      if (DAT_14ca84aa8 == 0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14ca83c98);
      }
    }
    QueryPerformanceCounter(&local_98);
    dVar2 = (double)local_98.QuadPart * DAT_14c83f420;
    while (iVar3 == 1) {
      QueryPerformanceCounter(&local_98);
      if (0.5 <= ((double)local_98.QuadPart * DAT_14c83f420 + 16777216.0) - (dVar2 + 16777216.0))
      goto LAB_143143fc8;
      FUN_14000f986(0x3ba3d70a);
      FUN_14735a86c(&local_98,1);
      local_c8 = 0;
      iVar3 = (**(code **)(*plVar1 + 0xe8))(plVar1,local_a0,local_b8,0x10);
      if (local_98.QuadPart != 0) {
        LOCK();
        DAT_14ca84aa8 = DAT_14ca84aa8 + -1;
        UNLOCK();
        if (DAT_14ca84aa8 == 0) {
          LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14ca83c98);
        }
      }
    }
    if (iVar3 == 0) {
      DAT_14ca813c0 = local_b8[0];
    }
  }
LAB_143143fc8:
  plVar1 = local_a0;
  if (local_a0 != (longlong *)0x0) {
    local_a0 = (longlong *)0x0;
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_14735a8c0(param_1);
  if (local_a0 != (longlong *)0x0) {
    (**(code **)(*local_a0 + 0x10))();
  }
  if ((local_90 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143144040 FUN_143144040 body=750 status=ok
// SIG undefined FUN_143144040(void)

longlong FUN_143144040(longlong param_1,byte param_2)

{
  longlong *plVar1;
  double dVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_d8 [32];
  uint local_b8;
  undefined1 local_ac [20];
  ulonglong local_98;
  ulonglong local_90;
  LARGE_INTEGER local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (DAT_14ca813bc == '\x01') {
    iVar5 = *(int *)(param_1 + 0x1c);
    iVar3 = *(int *)(param_1 + 0x20);
    if (param_2 == 0) {
      if (1 < iVar3) {
        iVar6 = 1;
        do {
          plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x140);
          local_b8 = 1;
          iVar3 = (**(code **)(*plVar1 + 0xe8))
                            (plVar1,*(undefined8 *)
                                     (*(longlong *)(param_1 + 0x30) + (longlong)iVar5 * 8),&local_98
                             ,8);
          if (iVar3 == 0) {
            plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x140);
            local_b8 = 1;
            iVar3 = (**(code **)(*plVar1 + 0xe8))
                              (plVar1,*(undefined8 *)
                                       (*(longlong *)(param_1 + 0x28) + (longlong)iVar5 * 8),
                               &local_90,8);
            if ((iVar3 == 0) && (lVar4 = local_98 - local_90, local_90 <= local_98 && lVar4 != 0))
            goto LAB_1431442f1;
          }
          iVar3 = *(int *)(param_1 + 0x20);
          iVar5 = (iVar5 + *(int *)(param_1 + 0x18) + -1) % *(int *)(param_1 + 0x18);
          iVar6 = iVar6 + 1;
        } while (iVar6 < iVar3);
      }
      if (iVar3 < 1) goto LAB_1431442ef;
    }
    param_2 = iVar3 == *(int *)(param_1 + 0x18) | param_2;
    FUN_1403936f2(local_ac,1,1);
    QueryPerformanceCounter(&local_88);
    dVar2 = (double)local_88.QuadPart * DAT_14c83f420;
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x140);
      local_b8 = (uint)(param_2 ^ 1);
      iVar3 = (**(code **)(*plVar1 + 0xe8))
                        (plVar1,*(undefined8 *)(*(longlong *)(param_1 + 0x30) + (longlong)iVar5 * 8)
                         ,&local_98,8);
      QueryPerformanceCounter(&local_88);
      if (0.5 < ((double)local_88.QuadPart * DAT_14c83f420 + 16777216.0) - (dVar2 + 16777216.0))
      goto LAB_1431442e5;
    } while ((iVar3 == 1 & param_2) != 0);
    FUN_1402488ea(local_ac);
    if (iVar3 == 0) {
      FUN_1403936f2(local_ac,1,1);
      QueryPerformanceCounter(&local_88);
      dVar2 = (double)local_88.QuadPart * DAT_14c83f420;
      do {
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x140);
        local_b8 = (uint)(param_2 ^ 1);
        iVar3 = (**(code **)(*plVar1 + 0xe8))
                          (plVar1,*(undefined8 *)
                                   (*(longlong *)(param_1 + 0x28) + (longlong)iVar5 * 8),&local_90,8
                          );
        QueryPerformanceCounter(&local_88);
        if (0.5 < ((double)local_88.QuadPart * DAT_14c83f420 + 16777216.0) - (dVar2 + 16777216.0))
        goto LAB_1431442e5;
      } while ((iVar3 == 1 & param_2) != 0);
      FUN_1402488ea(local_ac);
      if ((iVar3 == 0) && (lVar4 = local_98 - local_90, local_90 <= local_98 && lVar4 != 0))
      goto LAB_1431442f1;
    }
  }
  goto LAB_1431442ef;
LAB_1431442e5:
  FUN_1402488ea(local_ac);
LAB_1431442ef:
  lVar4 = 0;
LAB_1431442f1:
  if ((local_80 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar4;
}



// FUNCTION 14314432f FUN_14314432f body=22 status=ok
// SIG undefined FUN_14314432f(void)

undefined4 FUN_14314432f(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 - 1U < 0x5d) {
    uVar1 = *(undefined4 *)(&DAT_14a344b6c + (ulonglong)(param_1 - 1U) * 4);
  }
  return uVar1;
}



// FUNCTION 143144346 FUN_143144346 body=7748 status=ok
// SIG undefined FUN_143144346(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143144346(undefined8 param_1,longlong *param_2,int *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  int iVar7;
  int iVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  byte bVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [12];
  undefined1 auVar16 [12];
  undefined1 auVar17 [12];
  undefined1 auVar18 [12];
  ulonglong uVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [12];
  undefined1 auVar22 [12];
  undefined1 auVar23 [12];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  int iVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  int iVar29;
  longlong lVar30;
  uint uVar31;
  float fVar32;
  float *pfVar33;
  uint uVar34;
  float fVar35;
  ulonglong uVar36;
  uint uVar37;
  uint uVar38;
  float fVar39;
  ulonglong uVar40;
  ulonglong uVar41;
  uint uVar42;
  float fVar43;
  float fVar44;
  uint uVar45;
  uint uVar46;
  uint uVar47;
  undefined4 uVar48;
  undefined4 uVar54;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  double dVar55;
  double dVar56;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  double dVar60;
  double dVar61;
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  double dVar67;
  undefined1 in_XMM3 [16];
  double dVar69;
  double dVar70;
  undefined1 in_XMM4 [16];
  double dVar71;
  double dVar73;
  double dVar74;
  undefined1 auVar76 [16];
  double dVar77;
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  float fVar80;
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 unaff_XMM9 [16];
  undefined1 auVar84 [16];
  undefined1 unaff_XMM10 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  double dVar87;
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
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
  float fVar113;
  undefined1 unaff_XMM13 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  undefined1 auVar125 [16];
  float fVar126;
  undefined1 unaff_XMM14 [16];
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  undefined4 unaff_XMM15_Db;
  undefined4 unaff_XMM15_Dc;
  undefined4 unaff_XMM15_Dd;
  undefined1 auStack_228 [32];
  undefined8 *local_208;
  uint local_1f4;
  void *local_1f0;
  ulonglong local_1e8;
  ulonglong local_1e0;
  ulonglong local_1d8;
  void *local_1d0;
  uint local_1c4;
  ulonglong local_1c0;
  longlong local_1b8;
  ulonglong local_1b0;
  ulonglong local_1a8;
  ulonglong local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined1 auStack_178 [12];
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined1 auStack_148 [12];
  undefined1 local_134 [16];
  int local_124;
  uint local_120;
  void *local_108;
  undefined8 uStack_100;
  ulonglong local_f0;
  undefined1 auVar57 [16];
  undefined1 auVar66 [16];
  undefined1 auVar68 [16];
  undefined1 auVar72 [16];
  undefined1 auVar75 [16];
  undefined1 auVar124 [16];
  undefined1 auVar129 [16];
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_228;
  if (param_2 == (longlong *)0x0) {
    FUN_14735b34c(param_4,(param_3[3] - param_3[1]) * (param_3[2] - *param_3),1);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_f0 ^ (ulonglong)auStack_228);
  }
  local_108 = (void *)0x0;
  uStack_100 = 0;
  lVar30 = (**(code **)(*param_2 + 0x30))(param_2);
  (**(code **)(**(longlong **)(lVar30 + 0x70) + 0x50))(*(longlong **)(lVar30 + 0x70),local_134);
  if (local_120 == 1) {
    local_158 = *param_5;
    local_208 = &local_158;
    auStack_148 = SUB1612(*(undefined1 (*) [16])((longlong)param_5 + 0xc),4);
    uStack_150 = (undefined4)param_5[1];
    uStack_14c = (undefined4)((ulonglong)param_5[1] >> 0x20);
    local_168 = *(undefined8 *)param_3;
    local_160 = *(undefined8 *)(param_3 + 2);
    FUN_14735b12c(param_1,param_2);
  }
  else {
    local_188 = *param_5;
    local_208 = &local_188;
    auStack_178 = SUB1612(*(undefined1 (*) [16])((longlong)param_5 + 0xc),4);
    uStack_180 = (undefined4)param_5[1];
    uStack_17c = (undefined4)((ulonglong)param_5[1] >> 0x20);
    local_198 = *(undefined8 *)param_3;
    local_190 = *(undefined8 *)(param_3 + 2);
    FUN_14735b39c(param_1,param_2);
  }
  iVar7 = param_3[2];
  iVar8 = *param_3;
  local_1c4 = local_120;
  uVar42 = (iVar7 - iVar8) * local_120;
  local_1e8 = CONCAT44(local_1e8._4_4_,param_3[3]);
  local_1d8 = CONCAT44(local_1d8._4_4_,param_3[1]);
  uVar37 = param_3[3] - param_3[1];
  FUN_14735b34c(param_4);
  iVar29 = FUN_14314432f(local_124);
  local_1f4 = iVar29 * uVar42;
  local_1e0 = (ulonglong)uVar42;
  (**(code **)(*param_2 + 8))(param_2);
  auVar63 = _DAT_149e1a210;
  auVar85 = _DAT_149e1a200;
  auVar51 = _DAT_1499378f0;
  bVar1 = *(byte *)(param_5 + 1);
  local_1c0 = CONCAT71(local_1c0._1_7_,bVar1);
  fVar35 = *(float *)((longlong)param_5 + 0xc);
  local_1d0 = (void *)*param_4;
  local_1f0 = local_108;
  iVar26 = (int)local_1e0;
  if (0x22 < local_124) {
    if (local_124 < 0x3d) {
      if (local_124 < 0x31) {
        if (local_124 == 0x23) {
          if ((int)local_1e8 != (int)local_1d8) {
            local_1f0 = (void *)((longlong)local_108 + 2);
            uVar36 = 0;
            uVar41 = 0;
            uVar40 = 0;
            do {
              if ((int)local_1e0 != 0) {
                lVar30 = 0;
                do {
                  *(uint *)((longlong)local_1d0 + lVar30 * 4 + uVar41 * 4) =
                       ((uint)*(ushort *)((longlong)local_1f0 + lVar30 * 4 + (uVar36 - 2)) * 0xff +
                        0x807f & 0xff0000) +
                       ((uint)*(ushort *)((longlong)local_1f0 + lVar30 * 4 + uVar36) * 0xff + 0x807f
                        >> 8 & 0xff00) + -0x1000000;
                  lVar30 = lVar30 + 1;
                } while ((int)local_1e0 != (int)lVar30);
              }
              uVar40 = uVar40 + 1;
              uVar41 = (ulonglong)(uint)((int)uVar41 + (int)local_1e0);
              uVar36 = (ulonglong)((int)uVar36 + local_1f4);
            } while (uVar40 != uVar37);
          }
          goto LAB_143146173;
        }
        if (local_124 == 0x2c) {
          if ((int)local_1e8 != (int)local_1d8) {
            bVar2 = *(byte *)(param_5 + 2);
            uVar36 = 0;
            auVar85 = pmovzxbd(unaff_XMM10,0xffffffff);
            uVar41 = 0;
            do {
              if ((int)local_1e0 != 0) {
                lVar30 = 0;
                do {
                  uVar42 = *(uint *)((longlong)local_108 + lVar30 * 4);
                  if ((bVar2 & 1) == 0) {
                    fVar80 = (float)(uVar42 & 0xffffff) * 5.9604645e-08;
                    if (1.0 <= fVar80) {
                      fVar80 = 1.0;
                    }
                    fVar80 = ABS((1.0 / (fVar80 * 0.1 + -0.1)) / fVar35);
                    auVar62 = ZEXT416((uint)fVar80);
                    if (1.0 <= fVar80) {
                      auVar62._4_12_ = ZEXT812(0);
                      auVar62._0_4_ = 0x3f800000;
                    }
                    if ((bVar1 & 1) == 0) {
                      if (auVar62._0_4_ <= 0.0) {
                        auVar27._12_4_ = 0;
                        auVar27._0_12_ = auVar62._4_12_;
                        auVar62 = auVar27 << 0x20;
                      }
                      if (1.0 <= auVar62._0_4_) {
                        auVar62._0_4_ = 0x3f800000;
                      }
                      uVar34 = (uint)(auVar62._0_4_ * 255.0 + 0.5);
                      uVar47 = 0;
                      uVar42 = uVar34;
                      uVar38 = uVar34;
                    }
                    else {
                      auVar63 = pshufb(auVar62,_DAT_149f5d880);
                      auVar63 = maxps(auVar63,_DAT_149e1a200);
                      auVar63 = minps(auVar63,_DAT_149e1a210);
                      fVar80 = auVar63._0_4_;
                      fVar113 = auVar63._4_4_;
                      fVar126 = auVar63._8_4_;
                      auVar84._4_4_ =
                           *(undefined4 *)
                            (&DAT_149e1bee0 +
                            (ulonglong)(ushort)((uint)((int)fVar113 + -0x39000000) >> 0x14) * 4);
                      auVar84._0_4_ =
                           *(undefined4 *)
                            (&DAT_149e1bee0 + (ulonglong)((int)fVar80 + 0xc7000000U >> 0x14) * 4);
                      auVar84._8_4_ =
                           *(undefined4 *)
                            (&DAT_149e1bee0 +
                            (ulonglong)(ushort)((uint)((int)fVar126 + -0x39000000) >> 0x14) * 4);
                      auVar84._12_4_ = 0;
                      auVar81._0_4_ = (uint)fVar80 >> 0xc;
                      auVar81._4_4_ = (uint)fVar113 >> 0xc;
                      auVar81._8_4_ = (uint)fVar126 >> 0xc;
                      auVar81._12_4_ = (uint)auVar63._12_4_ >> 0xc;
                      auVar82 = pmaddwd(auVar81 & auVar85 | auVar51,auVar84);
                      auVar83._0_4_ = auVar82._0_4_ >> 0x10;
                      auVar83._4_4_ = auVar82._4_4_ >> 0x10;
                      auVar83._8_4_ = auVar82._8_4_ >> 0x10;
                      auVar83._12_4_ = auVar82._12_4_ >> 0x10;
                      auVar64._0_4_ = (int)(fVar80 * 0.0 + 0.5);
                      auVar64._4_4_ = (int)(fVar113 * 0.0 + 0.5);
                      auVar64._8_4_ = (int)(fVar126 * 0.0 + 0.5);
                      auVar64._12_4_ = (int)(auVar63._12_4_ * 255.0 + 0.5);
                      auVar64 = auVar64 | auVar83;
                      auVar65._4_4_ = auVar64._4_4_;
                      auVar65._12_4_ = auVar64._12_4_;
                      auVar65._0_4_ = auVar64._8_4_;
                      auVar65._8_4_ = auVar64._0_4_;
                      auVar63 = packssdw(auVar65,auVar65);
                      sVar9 = auVar63._0_2_;
                      sVar10 = auVar63._2_2_;
                      sVar11 = auVar63._4_2_;
                      sVar12 = auVar63._6_2_;
                      bVar13 = (0 < sVar12) * (sVar12 < 0x100) * auVar63[6] - (0xff < sVar12);
                      uVar34 = CONCAT13(bVar13,CONCAT12((0 < sVar11) * (sVar11 < 0x100) * auVar63[4]
                                                        - (0xff < sVar11),
                                                        CONCAT11((0 < sVar10) * (sVar10 < 0x100) *
                                                                 auVar63[2] - (0xff < sVar10),
                                                                 (0 < sVar9) * (sVar9 < 0x100) *
                                                                 auVar63[0] - (0xff < sVar9))));
                      uVar47 = (uint)bVar13 << 0x18;
                      uVar42 = uVar34 >> 8;
                      uVar38 = uVar34 >> 0x10;
                    }
                    uVar42 = uVar34 & 0xff | (uVar42 & 0xff) << 8 | (uVar38 & 0xff) << 0x10 | uVar47
                    ;
                  }
                  else {
                    uVar42 = (uVar42 >> 0x18) * 0x10101 | 0xff000000;
                  }
                  *(uint *)((longlong)local_1d0 + lVar30 * 4 + uVar36 * 4) = uVar42;
                  lVar30 = lVar30 + 1;
                } while ((int)local_1e0 != (int)lVar30);
              }
              uVar41 = uVar41 + 1;
              uVar36 = (ulonglong)(uint)((int)uVar36 + (int)local_1e0);
            } while (uVar41 != uVar37);
          }
          goto LAB_143146173;
        }
      }
      else {
        if (local_124 == 0x31) {
          if ((int)local_1e8 != (int)local_1d8) {
            local_1f0 = (void *)((longlong)local_108 + 1);
            uVar36 = 0;
            uVar41 = 0;
            uVar40 = 0;
            do {
              if ((int)local_1e0 != 0) {
                lVar30 = 0;
                do {
                  *(uint *)((longlong)local_1d0 + lVar30 * 4 + uVar41 * 4) =
                       (uint)*(byte *)((longlong)local_1f0 + lVar30 * 2 + uVar36) << 8 |
                       (uint)*(byte *)((longlong)local_1f0 + lVar30 * 2 + (uVar36 - 1)) << 0x10 |
                       0xff000000;
                  lVar30 = lVar30 + 1;
                } while ((int)local_1e0 != (int)lVar30);
              }
              uVar40 = uVar40 + 1;
              uVar41 = (ulonglong)(uint)((int)uVar41 + (int)local_1e0);
              uVar36 = (ulonglong)((int)uVar36 + local_1f4);
            } while (uVar40 != uVar37);
          }
          goto LAB_143146173;
        }
        if ((local_124 == 0x35) || (local_124 == 0x38)) {
          if ((int)local_1e8 != (int)local_1d8) {
            uVar36 = 0;
            uVar41 = 0;
            uVar40 = 0;
            do {
              if ((int)local_1e0 != 0) {
                lVar30 = 0;
                do {
                  uVar3 = *(ushort *)((longlong)local_108 + lVar30 * 2 + uVar36);
                  uVar42 = ((uint)uVar3 * 0x100 - (uint)uVar3) + 0x807f;
                  uVar38 = uVar42 >> 0x10;
                  *(uint *)((longlong)local_1d0 + lVar30 * 4 + uVar41 * 4) =
                       uVar38 << 8 | uVar42 & 0xff0000 | uVar38 | 0xff000000;
                  lVar30 = lVar30 + 1;
                } while ((int)local_1e0 != (int)lVar30);
              }
              uVar40 = uVar40 + 1;
              uVar41 = (ulonglong)(uint)((int)uVar41 + (int)local_1e0);
              uVar36 = (ulonglong)((int)uVar36 + iVar29 * local_1c4 * (iVar7 - iVar8));
            } while (uVar40 != uVar37);
          }
          goto LAB_143146173;
        }
      }
    }
    else if (local_124 < 0x5a) {
      if (local_124 == 0x3d) {
        if ((int)local_1e8 != (int)local_1d8) {
          uVar36 = 0;
          uVar41 = 0;
          uVar40 = 0;
          do {
            if ((int)local_1e0 != 0) {
              lVar30 = 0;
              do {
                bVar1 = *(byte *)((longlong)local_108 + lVar30 + uVar36);
                uVar42 = (uint)bVar1;
                *(uint *)((longlong)local_1d0 + lVar30 * 4 + uVar41 * 4) =
                     uVar42 << 8 | (uint)bVar1 << 0x10 | uVar42 << 0x18 | uVar42;
                lVar30 = lVar30 + 1;
              } while ((int)local_1e0 != (int)lVar30);
            }
            uVar40 = uVar40 + 1;
            uVar41 = (ulonglong)(uint)((int)uVar41 + (int)local_1e0);
            uVar36 = (ulonglong)((int)uVar36 + local_1f4);
          } while (uVar40 != uVar37);
        }
        goto LAB_143146173;
      }
      if (local_124 == 0x43) {
        if ((int)local_1e8 != (int)local_1d8) {
          uVar41 = 0;
          auVar82 = pmovzxbd(in_XMM3,0xffffffff);
          uVar40 = 0;
          uVar36 = 0;
          do {
            if ((int)local_1e0 != 0) {
              lVar30 = 0;
              do {
                uVar42 = *(uint *)((longlong)local_108 + lVar30 * 4 + uVar41);
                fVar35 = (float)((uVar42 >> 4 & 0xf800000) + 0x33800000);
                fVar80 = (float)(uVar42 >> 0x12 & 0x1ff) * fVar35;
                auVar109 = ZEXT416((uint)fVar80);
                fVar113 = (float)(uVar42 >> 9 & 0x1ff) * fVar35;
                auVar124 = ZEXT416((uint)fVar113);
                fVar35 = (float)(uVar42 & 0x1ff) * fVar35;
                auVar95 = ZEXT416((uint)fVar35);
                if ((bVar1 & 1) == 0) {
                  if (fVar80 <= 0.0) {
                    auVar109._12_4_ = 0;
                    auVar109._0_12_ = ZEXT412(0);
                  }
                  if (1.0 <= auVar109._0_4_) {
                    auVar109._0_4_ = 0x3f800000;
                  }
                  uVar42 = (uint)(auVar109._0_4_ * 255.0 + 0.5);
                  if (fVar113 <= 0.0) {
                    auVar124._12_4_ = 0;
                    auVar124._0_12_ = ZEXT412(0);
                  }
                  if (1.0 <= auVar124._0_4_) {
                    auVar124._0_4_ = 0x3f800000;
                  }
                  uVar38 = (uint)(auVar124._0_4_ * 255.0 + 0.5);
                  if (fVar35 <= 0.0) {
                    auVar95._12_4_ = 0;
                    auVar95._0_12_ = ZEXT412(0);
                  }
                  if (1.0 <= auVar95._0_4_) {
                    auVar95._0_4_ = 0x3f800000;
                  }
                  uVar47 = (uint)(auVar95._0_4_ * 255.0 + 0.5);
                  uVar34 = 0xff000000;
                }
                else {
                  auVar96 = insertps(auVar95,auVar124,0x10);
                  auVar96 = insertps(auVar96,auVar109,0x20);
                  auVar96 = insertps(auVar96,0x3f800000,0x30);
                  auVar96 = maxps(auVar96,auVar85);
                  auVar96 = minps(auVar96,auVar63);
                  fVar35 = auVar96._0_4_;
                  fVar80 = auVar96._4_4_;
                  fVar113 = auVar96._8_4_;
                  auVar125._4_4_ =
                       *(undefined4 *)
                        (&DAT_149e1bee0 +
                        (ulonglong)(ushort)((uint)((int)fVar80 + -0x39000000) >> 0x14) * 4);
                  auVar125._0_4_ =
                       *(undefined4 *)
                        (&DAT_149e1bee0 + (ulonglong)((int)fVar35 + 0xc7000000U >> 0x14) * 4);
                  auVar125._8_4_ =
                       *(undefined4 *)
                        (&DAT_149e1bee0 +
                        (ulonglong)(ushort)((uint)((int)fVar113 + -0x39000000) >> 0x14) * 4);
                  auVar125._12_4_ = 0;
                  auVar110._0_4_ = (uint)fVar35 >> 0xc;
                  auVar110._4_4_ = (uint)fVar80 >> 0xc;
                  auVar110._8_4_ = (uint)fVar113 >> 0xc;
                  auVar110._12_4_ = (uint)auVar96._12_4_ >> 0xc;
                  auVar111 = pmaddwd(auVar110 & auVar82 | auVar51,auVar125);
                  auVar112._0_4_ = auVar111._0_4_ >> 0x10;
                  auVar112._4_4_ = auVar111._4_4_ >> 0x10;
                  auVar112._8_4_ = auVar111._8_4_ >> 0x10;
                  auVar112._12_4_ = auVar111._12_4_ >> 0x10;
                  auVar97._0_4_ = (int)(fVar35 * 0.0 + 0.5);
                  auVar97._4_4_ = (int)(fVar80 * 0.0 + 0.5);
                  auVar97._8_4_ = (int)(fVar113 * 0.0 + 0.5);
                  auVar97._12_4_ = (int)(auVar96._12_4_ * 255.0 + 0.5);
                  auVar97 = auVar97 | auVar112;
                  auVar98._4_4_ = auVar97._4_4_;
                  auVar98._12_4_ = auVar97._12_4_;
                  auVar98._0_4_ = auVar97._8_4_;
                  auVar98._8_4_ = auVar97._0_4_;
                  auVar96 = packssdw(auVar98,auVar98);
                  sVar9 = auVar96._0_2_;
                  sVar10 = auVar96._2_2_;
                  sVar11 = auVar96._4_2_;
                  sVar12 = auVar96._6_2_;
                  bVar2 = (0 < sVar12) * (sVar12 < 0x100) * auVar96[6] - (0xff < sVar12);
                  uVar42 = CONCAT13(bVar2,CONCAT12((0 < sVar11) * (sVar11 < 0x100) * auVar96[4] -
                                                   (0xff < sVar11),
                                                   CONCAT11((0 < sVar10) * (sVar10 < 0x100) *
                                                            auVar96[2] - (0xff < sVar10),
                                                            (0 < sVar9) * (sVar9 < 0x100) *
                                                            auVar96[0] - (0xff < sVar9))));
                  uVar38 = uVar42 >> 8;
                  uVar47 = uVar42 >> 0x10;
                  uVar34 = (uint)bVar2 << 0x18;
                }
                *(uint *)((longlong)local_1d0 + lVar30 * 4 + uVar40 * 4) =
                     uVar42 & 0xff | (uVar38 & 0xff) << 8 | (uVar47 & 0xff) << 0x10 | uVar34;
                lVar30 = lVar30 + 1;
              } while ((int)local_1e0 != (int)lVar30);
            }
            uVar36 = uVar36 + 1;
            uVar40 = (ulonglong)(uint)((int)uVar40 + (int)local_1e0);
            uVar41 = (ulonglong)((int)uVar41 + local_1f4);
          } while (uVar36 != uVar37);
        }
        goto LAB_143146173;
      }
      if (local_124 == 0x57) goto LAB_14314498d;
    }
    else if (local_124 - 0x5aU < 2) {
LAB_14314498d:
      uVar38 = (int)local_1e0 * 4;
      if (uVar38 == local_1f4) {
        memcpy(local_1d0,local_108,(ulonglong)(uVar37 * uVar42) << 2);
      }
      else if ((int)local_1e8 != (int)local_1d8) {
        uVar41 = (ulonglong)uVar37;
        uVar37 = 0;
        uVar36 = 0;
        do {
          memcpy((void *)((longlong)local_1d0 + uVar36 * 4),
                 (void *)((ulonglong)uVar37 + (longlong)local_1f0),(ulonglong)uVar38);
          uVar36 = (ulonglong)(uint)((int)uVar36 + iVar26);
          uVar37 = uVar37 + local_1f4;
          uVar41 = uVar41 - 1;
        } while (uVar41 != 0);
      }
      goto LAB_143146173;
    }
    goto switchD_1431446b5_caseD_c;
  }
  switch(local_124) {
  case 10:
    if ((int)local_1e8 != (int)local_1d8) {
      local_1b0 = (ulonglong)uVar37;
      local_1d8 = local_1e0 & 0xffffffff;
      dVar55 = 1.0;
      dVar87 = 1.0;
      dVar60 = 1.0;
      dVar69 = 1.0;
      auVar66 = ZEXT816(0);
      auVar68 = ZEXT816(0);
      auVar72 = ZEXT816(0);
      uVar36 = 0;
      uVar41 = 0;
      auVar49 = ZEXT816(0);
      do {
        local_1a0 = uVar41;
        local_1a8 = uVar36;
        auVar57 = auVar49;
        if ((int)local_1e0 != 0) {
          local_1b8 = local_1a0 + (longlong)local_108;
          lVar30 = 0;
          uVar48 = auVar66._0_4_;
          unaff_XMM15_Db = auVar66._4_4_;
          auVar51 = auVar66;
          unaff_XMM13 = auVar72;
          unaff_XMM14 = auVar68;
          dVar73 = dVar69;
          dVar77 = dVar60;
          dVar74 = dVar87;
          dVar70 = dVar55;
          do {
            uVar3 = *(ushort *)(local_1b8 + lVar30 * 8);
            uVar42 = (uint)uVar3 << 0xd;
            uVar37 = uVar42 & 0xf800000;
            if (uVar37 == 0xf800000) {
              fVar35 = (float)(uVar42 | 0x70000000);
            }
            else if (uVar37 == 0) {
              fVar35 = (float)(uVar42 | 0x38800000) + -6.1035156e-05;
            }
            else {
              fVar35 = (float)((uVar42 & 0xfffe000) + 0x38000000);
            }
            uVar4 = *(ushort *)(local_1b8 + 2 + lVar30 * 8);
            uVar34 = (uint)uVar4 << 0xd;
            uVar38 = uVar34 & 0xf800000;
            if (uVar38 == 0xf800000) {
              fVar80 = (float)(uVar34 | 0x70000000);
            }
            else if (uVar38 == 0) {
              fVar80 = (float)(uVar34 | 0x38800000) + -6.1035156e-05;
            }
            else {
              fVar80 = (float)((uVar34 & 0xfffe000) + 0x38000000);
            }
            uVar5 = *(ushort *)(local_1b8 + 4 + lVar30 * 8);
            uVar47 = (uint)uVar5 << 0xd;
            uVar46 = uVar47 & 0xf800000;
            if (uVar46 == 0xf800000) {
              fVar113 = (float)(uVar47 | 0x70000000);
            }
            else if (uVar46 == 0) {
              fVar113 = (float)(uVar47 | 0x38800000) + -6.1035156e-05;
            }
            else {
              fVar113 = (float)((uVar47 & 0xfffe000) + 0x38000000);
            }
            uVar6 = *(ushort *)(local_1b8 + 6 + lVar30 * 8);
            uVar31 = (uint)uVar6 << 0xd;
            uVar45 = uVar31 & 0xf800000;
            if (uVar45 == 0xf800000) {
              fVar126 = (float)(uVar31 | 0x70000000);
            }
            else if (uVar45 == 0) {
              fVar126 = (float)(uVar31 | 0x38800000) + -6.1035156e-05;
            }
            else {
              fVar126 = (float)((uVar31 & 0xfffe000) + 0x38000000);
            }
            if (uVar37 == 0xf800000) {
              fVar43 = (float)(uVar42 | 0x70000000);
            }
            else if (uVar37 == 0) {
              fVar43 = (float)(uVar42 | 0x38800000) + -6.1035156e-05;
            }
            else {
              fVar43 = (float)((uVar42 & 0xfffe000) + 0x38000000);
            }
            if (uVar38 == 0xf800000) {
              fVar44 = (float)(uVar34 | 0x70000000);
            }
            else if (uVar38 == 0) {
              fVar44 = (float)(uVar34 | 0x38800000) + -6.1035156e-05;
            }
            else {
              fVar44 = (float)((uVar34 & 0xfffe000) + 0x38000000);
            }
            if (uVar46 == 0xf800000) {
              fVar39 = (float)(uVar47 | 0x70000000);
            }
            else if (uVar46 == 0) {
              fVar39 = (float)(uVar47 | 0x38800000) + -6.1035156e-05;
            }
            else {
              fVar39 = (float)((uVar47 & 0xfffe000) + 0x38000000);
            }
            if (uVar45 == 0xf800000) {
              fVar32 = (float)(uVar31 | 0x70000000);
            }
            else if (uVar45 == 0) {
              fVar32 = (float)(uVar31 | 0x38800000) + -6.1035156e-05;
            }
            else {
              fVar32 = (float)((uVar31 & 0xfffe000) + 0x38000000);
            }
            uVar37 = (int)(short)uVar3 & 0x80000000;
            dVar56 = (double)(float)((uint)fVar35 | uVar37);
            if (auVar49._0_8_ <= dVar56) {
              dVar56 = auVar49._0_8_;
            }
            auVar57._8_8_ = 0;
            auVar57._0_8_ = dVar56;
            uVar42 = (int)(short)uVar4 & 0x80000000;
            auVar66._8_8_ = auVar51._8_8_;
            dVar61 = (double)(float)((uint)fVar80 | uVar42);
            if ((double)CONCAT44(unaff_XMM15_Db,uVar48) <= dVar61) {
              dVar61 = (double)CONCAT44(unaff_XMM15_Db,uVar48);
            }
            auVar66._0_8_ = dVar61;
            uVar38 = (int)(short)uVar5 & 0x80000000;
            auVar68._8_8_ = unaff_XMM14._8_8_;
            dVar67 = (double)(float)((uint)fVar113 | uVar38);
            if (unaff_XMM14._0_8_ <= dVar67) {
              dVar67 = unaff_XMM14._0_8_;
            }
            auVar68._0_8_ = dVar67;
            uVar34 = (int)(short)uVar6 & 0x80000000;
            auVar72._8_8_ = unaff_XMM13._8_8_;
            dVar71 = (double)(float)((uint)fVar126 | uVar34);
            if (unaff_XMM13._0_8_ <= dVar71) {
              dVar71 = unaff_XMM13._0_8_;
            }
            auVar72._0_8_ = dVar71;
            dVar55 = (double)(float)((uint)fVar43 | uVar37);
            if (dVar55 <= dVar70) {
              dVar55 = dVar70;
            }
            dVar87 = (double)(float)((uint)fVar44 | uVar42);
            if (dVar87 <= dVar74) {
              dVar87 = dVar74;
            }
            dVar60 = (double)(float)((uint)fVar39 | uVar38);
            if (dVar60 <= dVar77) {
              dVar60 = dVar77;
            }
            dVar69 = (double)(float)(uVar34 | (uint)fVar32);
            if (dVar69 <= dVar73) {
              dVar69 = dVar73;
            }
            lVar30 = lVar30 + 1;
            auVar49._8_8_ = 0;
            auVar49._0_8_ = dVar56;
            uVar48 = SUB84(dVar61,0);
            unaff_XMM15_Db = (undefined4)((ulonglong)dVar61 >> 0x20);
            unaff_XMM15_Dc = auVar51._8_4_;
            unaff_XMM15_Dd = auVar51._12_4_;
            unaff_XMM14._8_8_ = auVar68._8_8_;
            unaff_XMM14._0_8_ = dVar67;
            unaff_XMM13._8_8_ = auVar72._8_8_;
            unaff_XMM13._0_8_ = dVar71;
            auVar51 = auVar66;
            dVar73 = dVar69;
            dVar77 = dVar60;
            dVar74 = dVar87;
            dVar70 = dVar55;
          } while ((int)local_1e0 != (int)lVar30);
        }
        uVar36 = local_1a8 + 1;
        uVar41 = (ulonglong)((int)local_1a0 + local_1f4);
        auVar49 = auVar57;
      } while (local_1a8 + 1 != local_1b0);
      local_1f0 = (void *)((longlong)local_108 + 6);
      local_1e8 = 0;
      local_1c4 = 0;
      uVar36 = 0;
      do {
        if ((int)local_1e0 != 0) {
          lVar30 = 0;
          do {
            uVar3 = *(ushort *)((longlong)local_1f0 + lVar30 * 8 + local_1e8);
            uVar37 = (uint)uVar3 << 0xd;
            if ((uVar37 & 0xf800000) == 0xf800000) {
              fVar35 = (float)(uVar37 | 0x70000000);
            }
            else if ((uVar37 & 0xf800000) == 0) {
              fVar35 = (float)(uVar37 | 0x38800000) + -6.1035156e-05;
            }
            else {
              fVar35 = (float)((uVar37 & 0xfffe000) + 0x38000000);
            }
            uVar4 = *(ushort *)((longlong)local_1f0 + lVar30 * 8 + (local_1e8 - 2));
            uVar37 = (uint)uVar4 << 0xd;
            if ((uVar37 & 0xf800000) == 0xf800000) {
              fVar80 = (float)(uVar37 | 0x70000000);
            }
            else if ((uVar37 & 0xf800000) == 0) {
              fVar80 = (float)(uVar37 | 0x38800000) + -6.1035156e-05;
            }
            else {
              fVar80 = (float)((uVar37 & 0xfffe000) + 0x38000000);
            }
            uVar5 = *(ushort *)((longlong)local_1f0 + lVar30 * 8 + (local_1e8 - 4));
            uVar37 = (uint)uVar5 << 0xd;
            if ((uVar37 & 0xf800000) == 0xf800000) {
              fVar113 = (float)(uVar37 | 0x70000000);
            }
            else if ((uVar37 & 0xf800000) == 0) {
              fVar113 = (float)(uVar37 | 0x38800000) + -6.1035156e-05;
            }
            else {
              fVar113 = (float)((uVar37 & 0xfffe000) + 0x38000000);
            }
            uVar6 = *(ushort *)((longlong)local_1f0 + lVar30 * 8 + (local_1e8 - 6));
            uVar37 = (uint)uVar6 << 0xd;
            if ((uVar37 & 0xf800000) == 0xf800000) {
              fVar126 = (float)(uVar37 | 0x70000000);
            }
            else if ((uVar37 & 0xf800000) == 0) {
              fVar126 = (float)(uVar37 | 0x38800000) + -6.1035156e-05;
            }
            else {
              fVar126 = (float)((uVar37 & 0xfffe000) + 0x38000000);
            }
            auVar122._4_12_ = unaff_XMM13._4_12_;
            auVar122._0_4_ =
                 (float)(((double)(float)((uint)fVar35 | (int)(short)uVar3 & 0x80000000U) -
                         auVar72._0_8_) / (dVar69 - auVar72._0_8_));
            auVar131._4_12_ = unaff_XMM14._4_12_;
            auVar131._0_4_ =
                 (float)(((double)(float)((uint)fVar80 | (int)(short)uVar4 & 0x80000000U) -
                         auVar68._0_8_) / (dVar60 - auVar68._0_8_));
            fVar35 = (float)(((double)(float)((uint)fVar113 | (int)(short)uVar5 & 0x80000000U) -
                             auVar66._0_8_) / (dVar87 - auVar66._0_8_));
            dVar73 = ((double)(float)((int)(short)uVar6 & 0x80000000U | (uint)fVar126) -
                     auVar57._0_8_) / (dVar55 - auVar57._0_8_);
            uVar37 = (uint)((ulonglong)dVar73 >> 0x20);
            auVar50._0_4_ = (float)dVar73;
            auVar50._4_4_ = uVar37;
            auVar50._8_8_ = 0;
            if ((bVar1 & 1) == 0) {
              if (auVar122._0_4_ <= 0.0) {
                auVar24._12_4_ = 0;
                auVar24._0_12_ = auVar122._4_12_;
                auVar122 = auVar24 << 0x20;
              }
              if (1.0 <= auVar122._0_4_) {
                auVar122._0_4_ = 1.0;
              }
              unaff_XMM13._4_12_ = auVar122._4_12_;
              unaff_XMM13._0_4_ = auVar122._0_4_ * 255.0 + 0.5;
              uVar42 = (uint)unaff_XMM13._0_4_;
              if (auVar131._0_4_ <= 0.0) {
                auVar25._12_4_ = 0;
                auVar25._0_12_ = auVar131._4_12_;
                auVar131 = auVar25 << 0x20;
              }
              if (1.0 <= auVar131._0_4_) {
                auVar131._0_4_ = 1.0;
              }
              unaff_XMM14._4_12_ = auVar131._4_12_;
              unaff_XMM14._0_4_ = auVar131._0_4_ * 255.0 + 0.5;
              uVar38 = (uint)unaff_XMM14._0_4_;
              if (fVar35 <= 0.0) {
                fVar35 = 0.0;
              }
              if (1.0 <= fVar35) {
                fVar35 = 1.0;
              }
              uVar34 = (uint)(fVar35 * 255.0 + 0.5);
              if (auVar50._0_4_ <= 0.0) {
                auVar50 = ZEXT416(uVar37) << 0x20;
              }
              if (1.0 <= auVar50._0_4_) {
                auVar50._0_4_ = 1.0;
              }
              uVar37 = (uint)(auVar50._0_4_ * 255.0 + 0.5);
            }
            else {
              auVar14._4_4_ = unaff_XMM15_Db;
              auVar14._0_4_ = fVar35;
              auVar14._8_4_ = unaff_XMM15_Dc;
              auVar14._12_4_ = unaff_XMM15_Dd;
              auVar51 = insertps(auVar50,auVar14,0x10);
              auVar51 = insertps(auVar51,auVar131,0x20);
              auVar51 = insertps(auVar51,auVar122,0x30);
              auVar51 = maxps(auVar51,_DAT_149e1a200);
              auVar51 = minps(auVar51,_DAT_149e1a210);
              fVar35 = auVar51._0_4_;
              fVar80 = auVar51._4_4_;
              fVar113 = auVar51._8_4_;
              unaff_XMM14._4_4_ =
                   *(undefined4 *)
                    (&DAT_149e1bee0 +
                    (ulonglong)(ushort)((uint)((int)fVar80 + -0x39000000) >> 0x14) * 4);
              unaff_XMM14._0_4_ =
                   (float)*(undefined4 *)
                           (&DAT_149e1bee0 + (ulonglong)((int)fVar35 + 0xc7000000U >> 0x14) * 4);
              unaff_XMM14._8_4_ =
                   *(undefined4 *)
                    (&DAT_149e1bee0 +
                    (ulonglong)(ushort)((uint)((int)fVar113 + -0x39000000) >> 0x14) * 4);
              unaff_XMM14._12_4_ = 0;
              auVar123._0_4_ = (uint)fVar35 >> 0xc;
              auVar123._4_4_ = (uint)fVar80 >> 0xc;
              auVar123._8_4_ = (uint)fVar113 >> 0xc;
              auVar123._12_4_ = (uint)auVar51._12_4_ >> 0xc;
              auVar85 = pmaddwd(auVar123 & _DAT_1499d1ec0 | _DAT_1499378f0,unaff_XMM14);
              unaff_XMM13._0_4_ = (float)(auVar85._0_4_ >> 0x10);
              unaff_XMM13._4_4_ = auVar85._4_4_ >> 0x10;
              unaff_XMM13._8_4_ = auVar85._8_4_ >> 0x10;
              unaff_XMM13._12_4_ = auVar85._12_4_ >> 0x10;
              auVar52._0_4_ = (int)(fVar35 * 0.0 + 0.5);
              auVar52._4_4_ = (int)(fVar80 * 0.0 + 0.5);
              auVar52._8_4_ = (int)(fVar113 * 0.0 + 0.5);
              auVar52._12_4_ = (int)(auVar51._12_4_ * 255.0 + 0.5);
              auVar52 = auVar52 | unaff_XMM13;
              auVar53._4_4_ = auVar52._4_4_;
              auVar53._12_4_ = auVar52._12_4_;
              auVar53._0_4_ = auVar52._8_4_;
              auVar53._8_4_ = auVar52._0_4_;
              auVar51 = packssdw(auVar53,auVar53);
              sVar9 = auVar51._0_2_;
              sVar10 = auVar51._2_2_;
              sVar11 = auVar51._4_2_;
              sVar12 = auVar51._6_2_;
              bVar2 = (0 < sVar12) * (sVar12 < 0x100) * auVar51[6] - (0xff < sVar12);
              uVar38 = CONCAT13(bVar2,CONCAT12((0 < sVar11) * (sVar11 < 0x100) * auVar51[4] -
                                               (0xff < sVar11),
                                               CONCAT11((0 < sVar10) * (sVar10 < 0x100) * auVar51[2]
                                                        - (0xff < sVar10),
                                                        (0 < sVar9) * (sVar9 < 0x100) * auVar51[0] -
                                                        (0xff < sVar9))));
              uVar34 = uVar38 >> 8;
              uVar37 = uVar38 >> 0x10;
              uVar42 = (uint)bVar2;
            }
            *(uint *)((longlong)local_1d0 + lVar30 * 4 + (ulonglong)local_1c4 * 4) =
                 uVar38 & 0xff | (uVar34 & 0xff) << 8 | (uVar37 & 0xff) << 0x10 | uVar42 << 0x18;
            lVar30 = lVar30 + 1;
          } while ((int)local_1e0 != (int)lVar30);
        }
        uVar36 = uVar36 + 1;
        local_1c4 = local_1c4 + (int)local_1e0;
        local_1e8 = (ulonglong)((int)local_1e8 + local_1f4);
      } while (uVar36 != local_1b0);
    }
    break;
  case 0xb:
    if ((int)local_1e8 != (int)local_1d8) {
      local_1f0 = (void *)((longlong)local_108 + 6);
      uVar36 = 0;
      auVar82 = pmovzxbd(in_XMM4,0xffffffff);
      uVar41 = 0;
      uVar40 = 0;
      do {
        if ((int)local_1e0 != 0) {
          lVar30 = 0;
          do {
            fVar35 = (float)*(ushort *)((longlong)local_1f0 + lVar30 * 8 + uVar36) * 1.5259022e-05;
            fVar126 = (float)*(ushort *)((longlong)local_1f0 + lVar30 * 8 + (uVar36 - 2)) *
                      1.5259022e-05;
            auVar129 = ZEXT416((uint)fVar126);
            fVar113 = (float)*(ushort *)((longlong)local_1f0 + lVar30 * 8 + (uVar36 - 4)) *
                      1.5259022e-05;
            auVar119 = ZEXT416((uint)fVar113);
            fVar80 = (float)*(ushort *)((longlong)local_1f0 + lVar30 * 8 + (uVar36 - 6)) *
                     1.5259022e-05;
            auVar106 = ZEXT416((uint)fVar80);
            if ((bVar1 & 1) == 0) {
              if (fVar35 <= 0.0) {
                fVar35 = 0.0;
              }
              if (1.0 <= fVar35) {
                fVar35 = 1.0;
              }
              uVar42 = (uint)(fVar35 * 255.0 + 0.5);
              if (fVar126 <= 0.0) {
                auVar129._12_4_ = 0;
                auVar129._0_12_ = ZEXT412(0);
              }
              if (1.0 <= auVar129._0_4_) {
                auVar129._0_4_ = 0x3f800000;
              }
              uVar38 = (uint)(auVar129._0_4_ * 255.0 + 0.5);
              if (fVar113 <= 0.0) {
                auVar119._12_4_ = 0;
                auVar119._0_12_ = ZEXT412(0);
              }
              if (1.0 <= auVar119._0_4_) {
                auVar119._0_4_ = 0x3f800000;
              }
              uVar34 = (uint)(auVar119._0_4_ * 255.0 + 0.5);
              if (fVar80 <= 0.0) {
                auVar106._12_4_ = 0;
                auVar106._0_12_ = ZEXT412(0);
              }
              if (1.0 <= auVar106._0_4_) {
                auVar106._0_4_ = 0x3f800000;
              }
              uVar47 = (uint)(auVar106._0_4_ * 255.0 + 0.5);
            }
            else {
              auVar96 = insertps(auVar106,auVar119,0x10);
              auVar96 = insertps(auVar96,auVar129,0x20);
              auVar96 = insertps(auVar96,ZEXT416((uint)fVar35),0x30);
              auVar96 = maxps(auVar96,auVar85);
              auVar96 = minps(auVar96,auVar63);
              fVar35 = auVar96._0_4_;
              fVar80 = auVar96._4_4_;
              fVar113 = auVar96._8_4_;
              auVar130._4_4_ =
                   *(undefined4 *)
                    (&DAT_149e1bee0 +
                    (ulonglong)(ushort)((uint)((int)fVar80 + -0x39000000) >> 0x14) * 4);
              auVar130._0_4_ =
                   *(undefined4 *)
                    (&DAT_149e1bee0 + (ulonglong)((int)fVar35 + 0xc7000000U >> 0x14) * 4);
              auVar130._8_4_ =
                   *(undefined4 *)
                    (&DAT_149e1bee0 +
                    (ulonglong)(ushort)((uint)((int)fVar113 + -0x39000000) >> 0x14) * 4);
              auVar130._12_4_ = 0;
              auVar120._0_4_ = (uint)fVar35 >> 0xc;
              auVar120._4_4_ = (uint)fVar80 >> 0xc;
              auVar120._8_4_ = (uint)fVar113 >> 0xc;
              auVar120._12_4_ = (uint)auVar96._12_4_ >> 0xc;
              auVar111 = pmaddwd(auVar120 & auVar82 | auVar51,auVar130);
              auVar121._0_4_ = auVar111._0_4_ >> 0x10;
              auVar121._4_4_ = auVar111._4_4_ >> 0x10;
              auVar121._8_4_ = auVar111._8_4_ >> 0x10;
              auVar121._12_4_ = auVar111._12_4_ >> 0x10;
              auVar107._0_4_ = (int)(fVar35 * 0.0 + 0.5);
              auVar107._4_4_ = (int)(fVar80 * 0.0 + 0.5);
              auVar107._8_4_ = (int)(fVar113 * 0.0 + 0.5);
              auVar107._12_4_ = (int)(auVar96._12_4_ * 255.0 + 0.5);
              auVar107 = auVar107 | auVar121;
              auVar108._4_4_ = auVar107._4_4_;
              auVar108._12_4_ = auVar107._12_4_;
              auVar108._0_4_ = auVar107._8_4_;
              auVar108._8_4_ = auVar107._0_4_;
              auVar96 = packssdw(auVar108,auVar108);
              sVar9 = auVar96._0_2_;
              sVar10 = auVar96._2_2_;
              sVar11 = auVar96._4_2_;
              sVar12 = auVar96._6_2_;
              bVar2 = (0 < sVar12) * (sVar12 < 0x100) * auVar96[6] - (0xff < sVar12);
              uVar38 = CONCAT13(bVar2,CONCAT12((0 < sVar11) * (sVar11 < 0x100) * auVar96[4] -
                                               (0xff < sVar11),
                                               CONCAT11((0 < sVar10) * (sVar10 < 0x100) * auVar96[2]
                                                        - (0xff < sVar10),
                                                        (0 < sVar9) * (sVar9 < 0x100) * auVar96[0] -
                                                        (0xff < sVar9))));
              uVar34 = uVar38 >> 8;
              uVar47 = uVar38 >> 0x10;
              uVar42 = (uint)bVar2;
            }
            *(uint *)((longlong)local_1d0 + lVar30 * 4 + uVar41 * 4) =
                 uVar38 & 0xff | (uVar34 & 0xff) << 8 | (uVar47 & 0xff) << 0x10 | uVar42 << 0x18;
            lVar30 = lVar30 + 1;
          } while ((int)local_1e0 != (int)lVar30);
        }
        uVar40 = uVar40 + 1;
        uVar41 = (ulonglong)(uint)((int)uVar41 + (int)local_1e0);
        uVar36 = (ulonglong)((int)uVar36 + local_1f4);
      } while (uVar40 != uVar37);
    }
    break;
  case 0x13:
    if ((int)local_1e8 != (int)local_1d8) {
      uVar36 = 0;
      auVar85 = pmovzxbd(unaff_XMM9,0xffffffff);
      uVar42 = 0;
      uVar41 = 0;
      do {
        if ((int)local_1e0 != 0) {
          lVar30 = 0;
          do {
            fVar80 = *(float *)((longlong)local_108 + lVar30 * 4 + uVar36);
            if (1.0 <= fVar80) {
              fVar80 = 1.0;
            }
            fVar80 = ABS((1.0 / (fVar80 * 0.1 + -0.1)) / fVar35);
            auVar58 = ZEXT416((uint)fVar80);
            if (1.0 <= fVar80) {
              auVar58._4_12_ = ZEXT812(0);
              auVar58._0_4_ = 0x3f800000;
            }
            if ((bVar1 & 1) == 0) {
              if (auVar58._0_4_ <= 0.0) {
                auVar28._12_4_ = 0;
                auVar28._0_12_ = auVar58._4_12_;
                auVar58 = auVar28 << 0x20;
              }
              if (1.0 <= auVar58._0_4_) {
                auVar58._0_4_ = 0x3f800000;
              }
              uVar47 = (uint)(auVar58._0_4_ * 255.0 + 0.5);
              uVar46 = 0;
              uVar38 = uVar47;
              uVar34 = uVar47;
            }
            else {
              auVar63 = pshufb(auVar58,_DAT_149f5d880);
              auVar63 = maxps(auVar63,_DAT_149e1a200);
              auVar63 = minps(auVar63,_DAT_149e1a210);
              fVar80 = auVar63._0_4_;
              fVar113 = auVar63._4_4_;
              fVar126 = auVar63._8_4_;
              auVar79._4_4_ =
                   *(undefined4 *)
                    (&DAT_149e1bee0 +
                    (ulonglong)(ushort)((uint)((int)fVar113 + -0x39000000) >> 0x14) * 4);
              auVar79._0_4_ =
                   *(undefined4 *)
                    (&DAT_149e1bee0 + (ulonglong)((int)fVar80 + 0xc7000000U >> 0x14) * 4);
              auVar79._8_4_ =
                   *(undefined4 *)
                    (&DAT_149e1bee0 +
                    (ulonglong)(ushort)((uint)((int)fVar126 + -0x39000000) >> 0x14) * 4);
              auVar79._12_4_ = 0;
              auVar76._0_4_ = (uint)fVar80 >> 0xc;
              auVar76._4_4_ = (uint)fVar113 >> 0xc;
              auVar76._8_4_ = (uint)fVar126 >> 0xc;
              auVar76._12_4_ = (uint)auVar63._12_4_ >> 0xc;
              auVar82 = pmaddwd(auVar76 & auVar85 | auVar51,auVar79);
              auVar59._4_4_ = (int)(fVar113 * 0.0 + 0.5) | auVar82._4_4_ >> 0x10;
              auVar59._12_4_ = (int)(auVar63._12_4_ * 255.0 + 0.5) | auVar82._12_4_ >> 0x10;
              auVar59._0_4_ = (int)(fVar126 * 0.0 + 0.5) | auVar82._8_4_ >> 0x10;
              auVar59._8_4_ = (int)(fVar80 * 0.0 + 0.5) | auVar82._0_4_ >> 0x10;
              auVar63 = packssdw(auVar59,auVar59);
              sVar9 = auVar63._0_2_;
              sVar10 = auVar63._2_2_;
              sVar11 = auVar63._4_2_;
              sVar12 = auVar63._6_2_;
              bVar2 = (0 < sVar12) * (sVar12 < 0x100) * auVar63[6] - (0xff < sVar12);
              uVar47 = CONCAT13(bVar2,CONCAT12((0 < sVar11) * (sVar11 < 0x100) * auVar63[4] -
                                               (0xff < sVar11),
                                               CONCAT11((0 < sVar10) * (sVar10 < 0x100) * auVar63[2]
                                                        - (0xff < sVar10),
                                                        (0 < sVar9) * (sVar9 < 0x100) * auVar63[0] -
                                                        (0xff < sVar9))));
              uVar46 = (uint)bVar2 << 0x18;
              uVar38 = uVar47 >> 8;
              uVar34 = uVar47 >> 0x10;
            }
            *(uint *)((longlong)local_1d0 + lVar30 * 4 + (ulonglong)uVar42 * 4) =
                 uVar47 & 0xff | (uVar38 & 0xff) << 8 | (uVar34 & 0xff) << 0x10 | uVar46;
            lVar30 = lVar30 + 1;
          } while ((int)local_1e0 != (int)lVar30);
        }
        uVar41 = uVar41 + 1;
        uVar42 = uVar42 + (int)local_1e0;
        uVar36 = (ulonglong)((int)uVar36 + local_1f4);
      } while (uVar41 != uVar37);
    }
    break;
  case 0x18:
    if ((int)local_1e8 != (int)local_1d8) {
      local_1c0 = (ulonglong)uVar37;
      uVar36 = 0;
      uVar40 = 0;
      uVar41 = 0;
      do {
        if ((int)local_1e0 != 0) {
          lVar30 = 0;
          do {
            uVar37 = *(uint *)((longlong)local_108 + lVar30 * 4 + uVar36);
            iVar7 = (uVar37 >> 0x14 & 0x3ff) * 0xff;
            iVar8 = (uVar37 >> 10 & 0x3ff) * 0xff;
            iVar26 = (uVar37 & 0x3ff) * 0xff;
            *(uint *)((longlong)local_1d0 + lVar30 * 4 + uVar40 * 4) =
                 (iVar8 + (iVar8 + 0x200U >> 10) + 0x200 >> 2 & 0xff00) +
                 (((iVar26 + 0x200U >> 10) + iVar26 + 0x200 & 0x3fc00) << 6 |
                  (uint)(byte)(&DAT_14a343200)[uVar37 >> 0x1e] << 0x18 |
                 (iVar7 + 0x200U >> 10) + iVar7 + 0x200 >> 10);
            lVar30 = lVar30 + 1;
          } while ((int)local_1e0 != (int)lVar30);
        }
        uVar41 = uVar41 + 1;
        uVar40 = (ulonglong)(uint)((int)uVar40 + (int)local_1e0);
        uVar36 = (ulonglong)((int)uVar36 + local_1f4);
      } while (uVar41 != local_1c0);
    }
    break;
  case 0x1a:
    if ((int)local_1e8 != (int)local_1d8) {
      uVar41 = 0;
      auVar82 = pmovzxbd(in_XMM3,0xffffffff);
      uVar40 = 0;
      uVar36 = 0;
      do {
        if ((int)local_1e0 != 0) {
          lVar30 = 0;
          do {
            uVar42 = *(uint *)((longlong)local_108 + lVar30 * 4 + uVar41);
            uVar38 = uVar42 & 0x3f;
            uVar34 = uVar42 >> 6 & 0x1f;
            if (uVar34 == 0) {
              if (uVar38 == 0) {
                uVar34 = 0xffffff90;
                uVar38 = 0;
              }
              else {
                uVar47 = 0x1f;
                if (uVar38 != 0) {
                  for (; uVar38 >> uVar47 == 0; uVar47 = uVar47 - 1) {
                  }
                }
                uVar34 = (uVar47 ^ 0xffffffe0) + 0x1b;
                uVar38 = uVar42 << (~(byte)uVar47 + 7 & 0x1f) & 0x3e;
              }
LAB_143144e6f:
              fVar35 = (float)(uVar38 * 0x20000 + uVar34 * 0x800000 + 0x38000000);
            }
            else {
              if (uVar34 != 0x1f) goto LAB_143144e6f;
              fVar35 = (float)(uVar38 << 0x11 | 0x7f800000);
            }
            uVar38 = uVar42 >> 0xb & 0x3f;
            uVar34 = uVar42 >> 0x11 & 0x1f;
            if (uVar34 == 0) {
              if (uVar38 == 0) {
                uVar34 = 0xffffff90;
                uVar38 = 0;
              }
              else {
                uVar47 = 0x1f;
                if (uVar38 != 0) {
                  for (; uVar38 >> uVar47 == 0; uVar47 = uVar47 - 1) {
                  }
                }
                uVar34 = (uVar47 ^ 0xffffffe0) + 0x1b;
                uVar38 = (uVar42 >> 0xb) << (~(byte)uVar47 + 7 & 0x1f) & 0x3e;
              }
LAB_143144ed3:
              fVar80 = (float)(uVar38 * 0x20000 + uVar34 * 0x800000 + 0x38000000);
            }
            else {
              if (uVar34 != 0x1f) goto LAB_143144ed3;
              fVar80 = (float)(uVar38 << 0x11 | 0x7f800000);
            }
            uVar38 = uVar42 >> 0x16 & 0x1f;
            uVar34 = uVar42 >> 0x1b;
            if (uVar34 == 0x1f) {
              fVar113 = (float)(uVar38 << 0x11 | 0x7f800000);
            }
            else {
              if (uVar42 < 0x8000000) {
                if (uVar38 == 0) {
                  uVar34 = 0xffffff90;
                  uVar38 = 0;
                }
                else {
                  uVar47 = 0x1f;
                  if (uVar38 != 0) {
                    for (; uVar38 >> uVar47 == 0; uVar47 = uVar47 - 1) {
                    }
                  }
                  uVar34 = (uVar47 ^ 0xffffffe0) + 0x1c;
                  uVar38 = (uVar42 >> 0x16) << (~(byte)uVar47 + 6 & 0x1f) & 0x1e;
                }
              }
              fVar113 = (float)(uVar38 * 0x40000 + uVar34 * 0x800000 + 0x38000000);
            }
            auVar93 = ZEXT416((uint)fVar35);
            auVar104 = ZEXT416((uint)fVar80);
            auVar117 = ZEXT416((uint)fVar113);
            if ((bVar1 & 1) == 0) {
              if (fVar113 <= 0.0) {
                auVar117 = ZEXT416(0);
              }
              if (1.0 <= auVar117._0_4_) {
                auVar117._0_4_ = 0x3f800000;
              }
              uVar42 = (uint)(auVar117._0_4_ * 255.0 + 0.5);
              if (fVar80 <= 0.0) {
                auVar104 = ZEXT416(0);
              }
              if (1.0 <= auVar104._0_4_) {
                auVar104._0_4_ = 0x3f800000;
              }
              uVar38 = (uint)(auVar104._0_4_ * 255.0 + 0.5);
              if (fVar35 <= 0.0) {
                auVar93 = ZEXT416(0);
              }
              if (1.0 <= auVar93._0_4_) {
                auVar93._0_4_ = 0x3f800000;
              }
              uVar34 = (uint)(auVar93._0_4_ * 255.0 + 0.5);
              uVar47 = 0;
            }
            else {
              auVar96 = insertps(auVar93,auVar104,0x1c);
              auVar96 = insertps(auVar96,auVar117,0x28);
              auVar96 = maxps(auVar96,auVar85);
              auVar96 = minps(auVar96,auVar63);
              fVar35 = auVar96._0_4_;
              fVar80 = auVar96._4_4_;
              fVar113 = auVar96._8_4_;
              auVar118._4_4_ =
                   *(undefined4 *)
                    (&DAT_149e1bee0 +
                    (ulonglong)(ushort)((uint)((int)fVar80 + -0x39000000) >> 0x14) * 4);
              auVar118._0_4_ =
                   *(undefined4 *)
                    (&DAT_149e1bee0 + (ulonglong)((int)fVar35 + 0xc7000000U >> 0x14) * 4);
              auVar118._8_4_ =
                   *(undefined4 *)
                    (&DAT_149e1bee0 +
                    (ulonglong)(ushort)((uint)((int)fVar113 + -0x39000000) >> 0x14) * 4);
              auVar118._12_4_ = 0;
              auVar105._0_4_ = (uint)fVar35 >> 0xc;
              auVar105._4_4_ = (uint)fVar80 >> 0xc;
              auVar105._8_4_ = (uint)fVar113 >> 0xc;
              auVar105._12_4_ = (uint)auVar96._12_4_ >> 0xc;
              auVar111 = pmaddwd(auVar105 & auVar82 | auVar51,auVar118);
              auVar94._4_4_ = (int)(fVar80 * 0.0 + 0.5) | auVar111._4_4_ >> 0x10;
              auVar94._12_4_ = (int)(auVar96._12_4_ * 255.0 + 0.5) | auVar111._12_4_ >> 0x10;
              auVar94._0_4_ = (int)(fVar113 * 0.0 + 0.5) | auVar111._8_4_ >> 0x10;
              auVar94._8_4_ = (int)(fVar35 * 0.0 + 0.5) | auVar111._0_4_ >> 0x10;
              auVar96 = packssdw(auVar94,auVar94);
              sVar9 = auVar96._0_2_;
              sVar10 = auVar96._2_2_;
              sVar11 = auVar96._4_2_;
              sVar12 = auVar96._6_2_;
              bVar2 = (0 < sVar12) * (sVar12 < 0x100) * auVar96[6] - (0xff < sVar12);
              uVar42 = CONCAT13(bVar2,CONCAT12((0 < sVar11) * (sVar11 < 0x100) * auVar96[4] -
                                               (0xff < sVar11),
                                               CONCAT11((0 < sVar10) * (sVar10 < 0x100) * auVar96[2]
                                                        - (0xff < sVar10),
                                                        (0 < sVar9) * (sVar9 < 0x100) * auVar96[0] -
                                                        (0xff < sVar9))));
              uVar38 = uVar42 >> 8;
              uVar34 = uVar42 >> 0x10;
              uVar47 = (uint)bVar2 << 0x18;
            }
            *(uint *)((longlong)local_1d0 + lVar30 * 4 + uVar40 * 4) =
                 uVar42 & 0xff | (uVar38 & 0xff) << 8 | (uVar34 & 0xff) << 0x10 | uVar47;
            lVar30 = lVar30 + 1;
          } while ((int)local_1e0 != (int)lVar30);
        }
        uVar36 = uVar36 + 1;
        uVar40 = (ulonglong)(uint)((int)uVar40 + (int)local_1e0);
        uVar41 = (ulonglong)((int)uVar41 + local_1f4);
      } while (uVar36 != uVar37);
    }
    break;
  case 0x1b:
  case 0x1c:
  case 0x1d:
    if ((int)local_1e8 != (int)local_1d8) {
      local_1f0 = (void *)((longlong)local_108 + 3);
      uVar36 = 0;
      uVar41 = 0;
      uVar40 = 0;
      do {
        if ((int)local_1e0 != 0) {
          lVar30 = 0;
          do {
            *(uint *)((longlong)local_1d0 + lVar30 * 4 + uVar41 * 4) =
                 (uint)*(byte *)((longlong)local_1f0 + lVar30 * 4 + (uVar36 - 2)) << 8 |
                 (uint)*(byte *)((longlong)local_1f0 + lVar30 * 4 + uVar36) << 0x18 |
                 (uint)*(byte *)((longlong)local_1f0 + lVar30 * 4 + (uVar36 - 1)) |
                 (uint)*(byte *)((longlong)local_1f0 + lVar30 * 4 + (uVar36 - 3)) << 0x10;
            lVar30 = lVar30 + 1;
          } while ((int)local_1e0 != (int)lVar30);
        }
        uVar40 = uVar40 + 1;
        uVar41 = (ulonglong)(uint)((int)uVar41 + (int)local_1e0);
        uVar36 = (ulonglong)((int)uVar36 + local_1f4);
      } while (uVar40 != uVar37);
    }
    break;
  default:
    if (local_124 == 2) {
      if ((int)local_1e8 != (int)local_1d8) {
        auVar51 = ZEXT816(0);
        auVar85 = ZEXT816(0x3ff0000000000000);
        uVar36 = 0;
        auVar63 = ZEXT816(0x3ff0000000000000);
        auVar96 = ZEXT816(0x3ff0000000000000);
        auVar75 = ZEXT816(0x3ff0000000000000);
        auVar82 = ZEXT816(0);
        auVar111 = ZEXT816(0);
        auVar78 = ZEXT816(0);
        do {
          if ((int)local_1e0 != 0) {
            pfVar33 = (float *)((ulonglong)(local_1f4 * (int)uVar36) + (longlong)local_108);
            uVar41 = local_1e0 & 0xffffffff;
            uVar48 = auVar51._0_4_;
            uVar54 = auVar51._4_4_;
            auVar90 = auVar85;
            auVar102 = auVar63;
            auVar86 = auVar96;
            auVar88 = auVar75;
            auVar99 = auVar78;
            auVar114 = auVar111;
            auVar127 = auVar82;
            do {
              dVar55 = (double)*pfVar33;
              dVar87 = dVar55;
              if ((double)CONCAT44(uVar54,uVar48) <= dVar55) {
                dVar87 = (double)CONCAT44(uVar54,uVar48);
              }
              auVar51._8_8_ = 0;
              auVar51._0_8_ = dVar87;
              dVar60 = (double)pfVar33[1];
              dVar69 = dVar60;
              if (auVar127._0_8_ <= dVar60) {
                dVar69 = auVar127._0_8_;
              }
              auVar21._8_4_ = 0;
              auVar21._0_8_ = dVar69;
              auVar82._12_4_ = 0;
              auVar82._0_12_ = auVar21;
              dVar69 = (double)pfVar33[2];
              dVar73 = dVar69;
              if (auVar114._0_8_ <= dVar69) {
                dVar73 = auVar114._0_8_;
              }
              auVar22._8_4_ = 0;
              auVar22._0_8_ = dVar73;
              auVar111._12_4_ = 0;
              auVar111._0_12_ = auVar22;
              dVar73 = (double)pfVar33[3];
              dVar77 = dVar73;
              if (auVar99._0_8_ <= dVar73) {
                dVar77 = auVar99._0_8_;
              }
              auVar23._8_4_ = 0;
              auVar23._0_8_ = dVar77;
              auVar78._12_4_ = 0;
              auVar78._0_12_ = auVar23;
              if (dVar55 <= auVar90._0_8_) {
                dVar55 = auVar90._0_8_;
              }
              auVar15._8_4_ = 0;
              auVar15._0_8_ = dVar55;
              auVar85._12_4_ = 0;
              auVar85._0_12_ = auVar15;
              if (dVar60 <= auVar102._0_8_) {
                dVar60 = auVar102._0_8_;
              }
              auVar16._8_4_ = 0;
              auVar16._0_8_ = dVar60;
              auVar63._12_4_ = 0;
              auVar63._0_12_ = auVar16;
              if (dVar69 <= auVar86._0_8_) {
                dVar69 = auVar86._0_8_;
              }
              auVar17._8_4_ = 0;
              auVar17._0_8_ = dVar69;
              auVar96._12_4_ = 0;
              auVar96._0_12_ = auVar17;
              if (dVar73 <= auVar88._0_8_) {
                dVar73 = auVar88._0_8_;
              }
              auVar18._8_4_ = 0;
              auVar18._0_8_ = dVar73;
              auVar75._12_4_ = 0;
              auVar75._0_12_ = auVar18;
              pfVar33 = pfVar33 + 4;
              auVar90._12_4_ = 0;
              auVar90._0_12_ = auVar15;
              auVar102._12_4_ = 0;
              auVar102._0_12_ = auVar16;
              auVar86._12_4_ = 0;
              auVar86._0_12_ = auVar17;
              auVar88._12_4_ = 0;
              auVar88._0_12_ = auVar18;
              uVar48 = SUB84(dVar87,0);
              uVar54 = (undefined4)((ulonglong)dVar87 >> 0x20);
              auVar127._12_4_ = 0;
              auVar127._0_12_ = auVar21;
              auVar114._12_4_ = 0;
              auVar114._0_12_ = auVar22;
              auVar99._12_4_ = 0;
              auVar99._0_12_ = auVar23;
              uVar42 = (int)uVar41 - 1;
              uVar41 = (ulonglong)uVar42;
            } while (uVar42 != 0);
          }
          uVar36 = uVar36 + 1;
        } while (uVar36 != uVar37);
        uVar36 = 0;
        uVar41 = 0;
        uVar40 = 0;
        do {
          if ((int)local_1e0 != 0) {
            pfVar33 = (float *)((longlong)local_108 + uVar36 + 0xc);
            lVar30 = 0;
            do {
              fVar113 = (float)(((double)*pfVar33 - auVar78._0_8_) / (auVar75._0_8_ - auVar78._0_8_)
                               );
              auVar128 = ZEXT416((uint)fVar113);
              fVar80 = (float)(((double)pfVar33[-1] - auVar111._0_8_) /
                              (auVar96._0_8_ - auVar111._0_8_));
              auVar115 = ZEXT416((uint)fVar80);
              fVar35 = (float)(((double)pfVar33[-2] - auVar82._0_8_) /
                              (auVar63._0_8_ - auVar82._0_8_));
              auVar100 = ZEXT416((uint)fVar35);
              dVar87 = ((double)pfVar33[-3] - auVar51._0_8_) / (auVar85._0_8_ - auVar51._0_8_);
              uVar19 = (ulonglong)dVar87 >> 0x20;
              auVar89._0_4_ = (float)dVar87;
              auVar89._4_8_ = uVar19;
              auVar89._12_4_ = 0;
              if ((bVar1 & 1) == 0) {
                if (fVar113 <= 0.0) {
                  auVar128 = ZEXT816(0) << 0x20;
                }
                if (1.0 <= auVar128._0_4_) {
                  auVar128._0_4_ = 0x3f800000;
                }
                uVar42 = (uint)(auVar128._0_4_ * 255.0 + 0.5);
                if (fVar80 <= 0.0) {
                  auVar115 = ZEXT816(0) << 0x20;
                }
                if (1.0 <= auVar115._0_4_) {
                  auVar115._0_4_ = 0x3f800000;
                }
                uVar38 = (uint)(auVar115._0_4_ * 255.0 + 0.5);
                if (fVar35 <= 0.0) {
                  auVar100 = ZEXT816(0) << 0x20;
                }
                if (1.0 <= auVar100._0_4_) {
                  auVar100._0_4_ = 0x3f800000;
                }
                uVar34 = (uint)(auVar100._0_4_ * 255.0 + 0.5);
                if (auVar89._0_4_ <= 0.0) {
                  auVar20._8_8_ = 0;
                  auVar20._0_8_ = uVar19;
                  auVar89 = auVar20 << 0x20;
                }
                if (1.0 <= auVar89._0_4_) {
                  auVar89._0_4_ = 1.0;
                }
                uVar47 = (uint)(auVar89._0_4_ * 255.0 + 0.5);
              }
              else {
                auVar90 = insertps(auVar89,auVar100,0x10);
                auVar90 = insertps(auVar90,auVar115,0x20);
                auVar90 = insertps(auVar90,auVar128,0x30);
                auVar90 = maxps(auVar90,_DAT_149e1a200);
                auVar90 = minps(auVar90,_DAT_149e1a210);
                fVar35 = auVar90._0_4_;
                fVar80 = auVar90._4_4_;
                fVar113 = auVar90._8_4_;
                auVar116._4_4_ =
                     *(undefined4 *)
                      (&DAT_149e1bee0 +
                      (ulonglong)(ushort)((uint)((int)fVar80 + -0x39000000) >> 0x14) * 4);
                auVar116._0_4_ =
                     *(undefined4 *)
                      (&DAT_149e1bee0 + (ulonglong)((int)fVar35 + 0xc7000000U >> 0x14) * 4);
                auVar116._8_4_ =
                     *(undefined4 *)
                      (&DAT_149e1bee0 +
                      (ulonglong)(ushort)((uint)((int)fVar113 + -0x39000000) >> 0x14) * 4);
                auVar116._12_4_ = 0;
                auVar101._0_4_ = (uint)fVar35 >> 0xc;
                auVar101._4_4_ = (uint)fVar80 >> 0xc;
                auVar101._8_4_ = (uint)fVar113 >> 0xc;
                auVar101._12_4_ = (uint)auVar90._12_4_ >> 0xc;
                auVar102 = pmaddwd(auVar101 & _DAT_1499d1ec0 | _DAT_1499378f0,auVar116);
                auVar103._0_4_ = auVar102._0_4_ >> 0x10;
                auVar103._4_4_ = auVar102._4_4_ >> 0x10;
                auVar103._8_4_ = auVar102._8_4_ >> 0x10;
                auVar103._12_4_ = auVar102._12_4_ >> 0x10;
                auVar91._0_4_ = (int)(fVar35 * 0.0 + 0.5);
                auVar91._4_4_ = (int)(fVar80 * 0.0 + 0.5);
                auVar91._8_4_ = (int)(fVar113 * 0.0 + 0.5);
                auVar91._12_4_ = (int)(auVar90._12_4_ * 255.0 + 0.5);
                auVar91 = auVar91 | auVar103;
                auVar92._4_4_ = auVar91._4_4_;
                auVar92._12_4_ = auVar91._12_4_;
                auVar92._0_4_ = auVar91._8_4_;
                auVar92._8_4_ = auVar91._0_4_;
                auVar90 = packssdw(auVar92,auVar92);
                sVar9 = auVar90._0_2_;
                sVar10 = auVar90._2_2_;
                sVar11 = auVar90._4_2_;
                sVar12 = auVar90._6_2_;
                bVar2 = (0 < sVar12) * (sVar12 < 0x100) * auVar90[6] - (0xff < sVar12);
                uVar38 = CONCAT13(bVar2,CONCAT12((0 < sVar11) * (sVar11 < 0x100) * auVar90[4] -
                                                 (0xff < sVar11),
                                                 CONCAT11((0 < sVar10) * (sVar10 < 0x100) *
                                                          auVar90[2] - (0xff < sVar10),
                                                          (0 < sVar9) * (sVar9 < 0x100) * auVar90[0]
                                                          - (0xff < sVar9))));
                uVar34 = uVar38 >> 8;
                uVar47 = uVar38 >> 0x10;
                uVar42 = (uint)bVar2;
              }
              *(uint *)((longlong)local_1d0 + lVar30 * 4 + uVar41 * 4) =
                   uVar38 & 0xff | (uVar34 & 0xff) << 8 | (uVar47 & 0xff) << 0x10 | uVar42 << 0x18;
              lVar30 = lVar30 + 1;
              pfVar33 = pfVar33 + 4;
            } while ((int)local_1e0 != (int)lVar30);
          }
          uVar40 = uVar40 + 1;
          uVar41 = (ulonglong)(uint)((int)uVar41 + (int)local_1e0);
          uVar36 = (ulonglong)((int)uVar36 + local_1f4);
        } while (uVar40 != uVar37);
      }
      break;
    }
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x19:
switchD_1431446b5_caseD_c:
    *(undefined4 *)(param_4 + 1) = 0;
    if (*(int *)((longlong)param_4 + 0xc) != 0) {
      FUN_146971392(param_4,0);
    }
  }
LAB_143146173:
  if (local_108 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_f0 ^ (ulonglong)auStack_228) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143146204 FUN_143146204 body=4915 status=ok
// SIG undefined FUN_143146204(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143146204(longlong param_1,longlong param_2,undefined8 param_3,uint *param_4,
                  undefined8 param_5,int *param_6)

{
  uint *puVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [4];
  undefined8 *puVar10;
  longlong lVar11;
  undefined8 uVar12;
  longlong lVar13;
  wchar_t *pwVar14;
  longlong *plVar15;
  longlong *plVar16;
  longlong *plVar17;
  longlong lVar18;
  byte bVar19;
  wchar_t *pwVar20;
  bool bVar21;
  undefined1 auStack_7a8 [32];
  int *local_788;
  uint *local_780;
  uint *local_778;
  undefined4 local_764;
  longlong local_760;
  longlong local_758;
  longlong local_750;
  longlong local_748;
  undefined1 local_740 [8];
  undefined1 auStack_738 [8];
  undefined1 local_730 [8];
  undefined1 local_728 [16];
  undefined4 local_718;
  undefined2 local_714;
  undefined1 local_668 [16];
  undefined1 local_658;
  undefined4 local_654;
  undefined4 local_650;
  undefined4 uStack_64c;
  undefined4 uStack_648;
  undefined4 uStack_644;
  undefined8 local_640;
  uint local_638;
  undefined4 uStack_634;
  undefined3 uStack_630;
  wchar_t *local_620;
  wchar_t *local_618;
  wchar_t *local_5f0;
  int local_5c0;
  int local_580;
  undefined1 local_578 [192];
  undefined8 local_4b8;
  undefined8 uStack_4b0;
  undefined2 local_4a8;
  undefined1 local_4a6;
  byte local_4a5;
  undefined8 local_498;
  undefined8 uStack_490;
  longlong local_488;
  undefined8 uStack_480;
  undefined8 local_478;
  undefined8 uStack_470;
  undefined1 local_318 [16];
  undefined1 local_308 [16];
  undefined1 local_2f8 [16];
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined1 local_2d8 [16];
  undefined8 local_2c8;
  undefined4 local_2c0;
  undefined1 local_2bc [16];
  undefined1 local_2ac [16];
  undefined1 local_29c [16];
  undefined1 local_28c [13];
  undefined3 uStack_27f;
  undefined1 auStack_27c [12];
  undefined1 local_270;
  undefined1 local_268 [16];
  undefined8 local_258;
  undefined1 local_250 [7];
  undefined1 auStack_249 [4];
  uint uStack_245;
  undefined1 auStack_241 [5];
  byte abStack_23c [3];
  undefined1 uStack_239;
  longlong local_238;
  longlong lStack_230;
  longlong lStack_185;
  undefined1 local_178 [4];
  byte local_174;
  undefined1 local_b0;
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  ushort local_88;
  undefined8 local_80;
  ushort local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_7a8;
  iVar4 = *(int *)(param_1 + 0x19d0);
  if (iVar4 < 1) {
    memset(local_740 + (longlong)iVar4 * 0x18,0,(ulonglong)(1 - iVar4) * 0x18);
  }
  else {
    memcpy(local_740,(void *)(param_1 + 0x19d4),0x18);
  }
  local_2d8 = (undefined1  [16])0x0;
  local_2f8 = (undefined1  [16])0x0;
  local_308 = (undefined1  [16])0x0;
  local_318 = (undefined1  [16])0x0;
  bVar21 = false;
  local_2c8 = 0;
  local_2bc = (undefined1  [16])0x0;
  local_2ac = (undefined1  [16])0x0;
  local_29c = (undefined1  [16])0x0;
  local_28c = SUB1613((undefined1  [16])0x0,0);
  uStack_27f = 0;
  auStack_27c = SUB1612((undefined1  [16])0x0,3);
  local_270 = 0;
  local_268 = (undefined1  [16])0x0;
  local_258 = 0;
  local_250._0_4_ = 1;
  stack0xfffffffffffffdb8 = 0;
  uStack_2e0 = DAT_14c9c0db0;
  local_2e8 = DAT_14c9c0d50;
  if (param_6[1] == 0 && *param_6 == 0) {
    if (param_6[2] == *param_4) {
      bVar21 = param_6[3] == param_4[1];
    }
    else {
      bVar21 = false;
    }
  }
  uVar5 = param_4[8];
  local_764 = *(undefined4 *)(param_1 + 0x4428);
  local_758 = *(longlong *)(param_1 + 0x27b0);
  if (local_758 != 0) {
    LOCK();
    *(int *)(local_758 + 8) = *(int *)(local_758 + 8) + 1;
    UNLOCK();
  }
  lVar11 = param_1 + 0x18;
  if (param_1 == 0) {
    lVar11 = 0;
  }
  local_760 = param_2;
  FUN_140048e76(&local_620,lVar11);
  puVar10 = (undefined8 *)((longlong)local_620 + 7U & 0xfffffffffffffff8);
  pwVar14 = (wchar_t *)(puVar10 + 4);
  if ((uVar5 & 0x40) == 0) {
    if (local_618 < pwVar14) {
      FUN_140023dd8(&local_620,0x28);
      puVar10 = (undefined8 *)((longlong)local_620 + 7U & 0xfffffffffffffff8);
      pwVar14 = (wchar_t *)(puVar10 + 4);
    }
    local_5c0 = local_5c0 + 1;
    *(undefined8 **)local_5f0 = puVar10;
    local_5f0 = (wchar_t *)(puVar10 + 1);
    puVar10[1] = 0;
    *puVar10 = &PTR_FUN_14a343b90;
    *(bool *)(puVar10 + 2) = bVar21;
    puVar10[3] = param_3;
    local_2d8._0_8_ = DAT_14c9c0d98;
    lVar11 = 0x15;
    local_620 = pwVar14;
    do {
      *(undefined1 (*) [16])(local_740 + lVar11 + 3) = (undefined1  [16])0x0;
      *(undefined4 *)(local_728 + lVar11 + -5) = 0xffffffff;
      *(undefined2 *)(local_728 + lVar11 + -1) = 0;
      lVar11 = lVar11 + 0x18;
    } while (lVar11 != 0xd5);
    local_654 = 0;
    local_668 = (undefined1  [16])0x0;
    local_658 = 0;
    local_650 = 0xffffffff;
    uStack_64c = 0xffffffff;
    uStack_648 = 0xffffffff;
    uStack_644 = 0xffffffff;
    local_640 = 0;
    local_638 = local_638 & 0xffffff00;
    uStack_634 = 0;
    uStack_630 = 0;
    local_728 = (undefined1  [16])0x0;
    local_718 = 0xffffffff;
    local_714 = 0x500;
    pwVar20 = (wchar_t *)((longlong)local_620 + 1U & 0xfffffffffffffffe);
    pwVar14 = pwVar20 + 1;
    if (local_618 < pwVar14) {
      FUN_140023dd8(&local_620,4);
      pwVar20 = (wchar_t *)((longlong)local_620 + 1U & 0xfffffffffffffffe);
      pwVar14 = pwVar20 + 1;
    }
    local_620 = pwVar14;
    wcscpy(pwVar20,L"");
    puVar10 = (undefined8 *)((longlong)local_620 + 7U & 0xfffffffffffffff8);
    pwVar14 = (wchar_t *)(puVar10 + 0x23);
    if (local_618 < pwVar14) {
      FUN_140023dd8(&local_620,0x120);
      puVar10 = (undefined8 *)((longlong)local_620 + 7U & 0xfffffffffffffff8);
      pwVar14 = (wchar_t *)(puVar10 + 0x23);
    }
    local_5c0 = local_5c0 + 1;
    *(undefined8 **)local_5f0 = puVar10;
    local_5f0 = (wchar_t *)(puVar10 + 1);
    puVar10[1] = 0;
    *puVar10 = &PTR_FUN_14a217b50;
    local_620 = pwVar14;
    memcpy(puVar10 + 2,local_728,0xe8);
    puVar10[0x1f] = 0;
    puVar10[0x20] = CONCAT44(uStack_634,local_638);
    *(uint *)((longlong)puVar10 + 0x107) = CONCAT31(uStack_630,uStack_634._3_1_);
    puVar10[0x22] = pwVar20;
    lVar11 = 0x11;
    do {
      *(undefined8 *)(auStack_249 + lVar11) = 0;
      *(undefined8 *)(auStack_241 + lVar11) = 0xffffffff00000000;
      *(undefined2 *)(&uStack_239 + lVar11) = 0;
      lVar11 = lVar11 + 0x18;
    } while (lVar11 != 0xd1);
    local_178 = (undefined1  [4])0x0;
    local_174 = 0;
    lVar11 = 0xd9;
    do {
      *(undefined8 *)(auStack_249 + lVar11) = 0;
      *(undefined8 *)(auStack_241 + lVar11) = 0xffffffff00000000;
      *(undefined2 *)(&uStack_239 + lVar11) = 0;
      lVar11 = lVar11 + 0x18;
    } while (lVar11 != 0x199);
    local_b0 = 0;
    local_80 = 0;
    local_78 = local_78 & 0xff;
    local_a8 = (undefined1  [16])0x0;
    local_98 = (undefined1  [16])0x0;
    local_88 = local_88 & 0xff00;
    lVar11 = 0x15;
    do {
      if (*(longlong *)(local_740 + lVar11 + 3) == 0) break;
      *(longlong *)(local_250 + lVar11 + 3) = *(longlong *)(local_740 + lVar11 + 3);
      bVar2 = local_728[lVar11];
      bVar19 = bVar2 >> 2;
      auStack_241[lVar11 + 4] = bVar19;
      abStack_23c[lVar11] = bVar2 & 3;
      *(undefined4 *)(auStack_241 + lVar11) = *(undefined4 *)(local_728 + lVar11 + -5);
      *(uint *)(auStack_241 + lVar11 + -4) = (uint)(byte)local_728[lVar11 + -1];
      local_178 = (undefined1  [4])((int)local_178 + 1);
      local_174 = local_174 | bVar19 == 2;
      lVar18 = *(longlong *)(auStack_738 + lVar11 + 3);
      if (lVar18 != 0) {
        local_b0 = 1;
        uVar7 = *(undefined8 *)(auStack_241 + lVar11 + -4);
        *(undefined8 *)((longlong)&lStack_185 + lVar11) = *(undefined8 *)(local_250 + lVar11 + 3);
        *(undefined8 *)(&stack0xfffffffffffffe83 + lVar11) = uVar7;
        *(undefined8 *)(local_178 + lVar11 + 3) = *(undefined8 *)(auStack_241 + lVar11 + 4);
        *(longlong *)((longlong)&lStack_185 + lVar11) = lVar18;
      }
      lVar11 = lVar11 + 0x18;
    } while (lVar11 != 0xd5);
    auVar9 = local_178;
    local_88 = 0;
    local_80 = 0;
    local_78 = 0;
    local_a8._0_8_ = 0;
    local_a8._8_8_ = 0;
    if (0 < (longlong)(int)local_178) {
      memcpy(local_578,&local_238,(longlong)(int)local_178 * 0x18);
    }
    local_580 = (int)auVar9;
    local_4b8 = 0;
    uStack_4b0 = 0;
  }
  else {
    if (local_618 < pwVar14) {
      FUN_140023dd8(&local_620,0x28);
      puVar10 = (undefined8 *)((longlong)local_620 + 7U & 0xfffffffffffffff8);
      pwVar14 = (wchar_t *)(puVar10 + 4);
    }
    local_5c0 = local_5c0 + 1;
    *(undefined8 **)local_5f0 = puVar10;
    local_5f0 = (wchar_t *)(puVar10 + 1);
    puVar10[1] = 0;
    *puVar10 = &PTR_FUN_14a343b88;
    *(bool *)(puVar10 + 2) = bVar21;
    puVar10[3] = 0;
    local_2d8._0_8_ = DAT_14c9c0c60;
    local_620 = pwVar14;
    lVar11 = (**(code **)(_DAT_00000000 + 8))(0);
    local_270 = *(undefined1 *)(lVar11 + 0x33);
    lVar11 = 0x15;
    do {
      *(undefined1 (*) [16])(local_740 + lVar11 + 3) = (undefined1  [16])0x0;
      *(undefined4 *)(local_728 + lVar11 + -5) = 0xffffffff;
      *(undefined2 *)(local_728 + lVar11 + -1) = 0;
      lVar11 = lVar11 + 0x18;
    } while (lVar11 != 0xd5);
    local_650 = 0xffffffff;
    uStack_64c = 0xffffffff;
    uStack_648 = 0xffffffff;
    uStack_644 = 0xffffffff;
    local_640 = 0;
    local_638 = local_638 & 0xffffff00;
    uStack_634 = 0;
    uStack_630 = 0;
    local_668 = (undefined1  [16])0x0;
    local_658 = 0x55;
    local_654 = 0x22;
    pwVar20 = (wchar_t *)((longlong)local_620 + 1U & 0xfffffffffffffffe);
    pwVar14 = pwVar20 + 1;
    if (local_618 < pwVar14) {
      FUN_140023dd8(&local_620,4);
      pwVar20 = (wchar_t *)((longlong)local_620 + 1U & 0xfffffffffffffffe);
      pwVar14 = pwVar20 + 1;
    }
    local_620 = pwVar14;
    wcscpy(pwVar20,L"");
    puVar10 = (undefined8 *)((longlong)local_620 + 7U & 0xfffffffffffffff8);
    pwVar14 = (wchar_t *)(puVar10 + 0x23);
    if (local_618 < pwVar14) {
      FUN_140023dd8(&local_620,0x120);
      puVar10 = (undefined8 *)((longlong)local_620 + 7U & 0xfffffffffffffff8);
      pwVar14 = (wchar_t *)(puVar10 + 0x23);
    }
    local_5c0 = local_5c0 + 1;
    *(undefined8 **)local_5f0 = puVar10;
    local_5f0 = (wchar_t *)(puVar10 + 1);
    puVar10[1] = 0;
    *puVar10 = &PTR_FUN_14a217b50;
    local_620 = pwVar14;
    memcpy(puVar10 + 2,local_728,0xe8);
    puVar10[0x1f] = 0;
    puVar10[0x20] = CONCAT44(uStack_634,local_638);
    *(uint *)((longlong)puVar10 + 0x107) = CONCAT31(uStack_630,uStack_634._3_1_);
    puVar10[0x22] = pwVar20;
    lVar11 = 0x11;
    do {
      *(undefined8 *)(auStack_249 + lVar11) = 0;
      *(undefined8 *)(auStack_241 + lVar11) = 0xffffffff00000000;
      *(undefined2 *)(&uStack_239 + lVar11) = 0;
      lVar11 = lVar11 + 0x18;
    } while (lVar11 != 0xd1);
    local_178 = (undefined1  [4])0x0;
    local_174 = 0;
    lVar11 = 0xd9;
    do {
      *(undefined8 *)(auStack_249 + lVar11) = 0;
      *(undefined8 *)(auStack_241 + lVar11) = 0xffffffff00000000;
      *(undefined2 *)(&uStack_239 + lVar11) = 0;
      lVar11 = lVar11 + 0x18;
    } while (lVar11 != 0x199);
    local_b0 = 0;
    local_80 = 0;
    local_78 = local_78 & 0xff;
    local_a8 = (undefined1  [16])0x0;
    local_98 = (undefined1  [16])0x0;
    local_88 = local_88 & 0xff00;
    lVar11 = 0x15;
    do {
      if (*(longlong *)(local_740 + lVar11 + 3) == 0) break;
      *(longlong *)(local_250 + lVar11 + 3) = *(longlong *)(local_740 + lVar11 + 3);
      bVar2 = local_728[lVar11];
      bVar19 = bVar2 >> 2;
      auStack_241[lVar11 + 4] = bVar19;
      abStack_23c[lVar11] = bVar2 & 3;
      *(undefined4 *)(auStack_241 + lVar11) = *(undefined4 *)(local_728 + lVar11 + -5);
      *(uint *)(auStack_241 + lVar11 + -4) = (uint)(byte)local_728[lVar11 + -1];
      local_178 = (undefined1  [4])((int)local_178 + 1);
      local_174 = local_174 | bVar19 == 2;
      lVar18 = *(longlong *)(auStack_738 + lVar11 + 3);
      if (lVar18 != 0) {
        local_b0 = 1;
        uVar7 = *(undefined8 *)(auStack_241 + lVar11 + -4);
        *(undefined8 *)((longlong)&lStack_185 + lVar11) = *(undefined8 *)(local_250 + lVar11 + 3);
        *(undefined8 *)(&stack0xfffffffffffffe83 + lVar11) = uVar7;
        *(undefined8 *)(local_178 + lVar11 + 3) = *(undefined8 *)(auStack_241 + lVar11 + 4);
        *(longlong *)((longlong)&lStack_185 + lVar11) = lVar18;
      }
      lVar11 = lVar11 + 0x18;
    } while (lVar11 != 0xd5);
    auVar9 = local_178;
    local_a8._0_8_ = 0;
    local_a8._8_8_ = 0x2201010101;
    local_88 = 0;
    local_80 = 0;
    local_78 = 0;
    if (0 < (longlong)(int)local_178) {
      memcpy(local_578,&local_238,(longlong)(int)local_178 * 0x18);
    }
    local_580 = (int)auVar9;
    local_4b8 = local_a8._0_8_;
    uStack_4b0 = local_a8._8_8_;
  }
  local_4a6 = 0;
  local_4a8 = 0;
  local_4a5 = local_4a5 & 0xfc | 2;
  uVar5 = param_4[1];
  uVar6 = *param_4;
  puVar10 = (undefined8 *)((longlong)local_620 + 7U & 0xfffffffffffffff8);
  pwVar14 = (wchar_t *)(puVar10 + 5);
  if (local_618 < pwVar14) {
    FUN_140023dd8(&local_620,0x30);
    puVar10 = (undefined8 *)((longlong)local_620 + 7U & 0xfffffffffffffff8);
    pwVar14 = (wchar_t *)(puVar10 + 5);
  }
  local_5c0 = local_5c0 + 1;
  *(undefined8 **)local_5f0 = puVar10;
  local_5f0 = (wchar_t *)(puVar10 + 1);
  *(undefined1 (*) [16])(puVar10 + 1) = (undefined1  [16])0x0;
  *puVar10 = &PTR_LAB_14a1e7fc8;
  *(undefined4 *)(puVar10 + 3) = 0;
  *(float *)((longlong)puVar10 + 0x1c) = (float)uVar6;
  *(float *)(puVar10 + 4) = (float)uVar5;
  *(undefined4 *)((longlong)puVar10 + 0x24) = 0x3f800000;
  uVar7 = *(undefined8 *)
           (&DAT_14ca8c1f0 +
           (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) * 8);
  local_620 = pwVar14;
  uVar12 = FUN_145ee189a();
  lVar11 = 0;
  FUN_1448e935e(uVar7,&local_238,uVar12,0);
  FUN_145ee189a();
  lVar13 = lStack_230;
  lVar18 = local_238;
  local_728._8_8_ = lStack_230;
  local_728._0_8_ = local_238;
  uVar12 = FUN_1460455a2();
  FUN_1448e935e(uVar7,&local_238,uVar12,0);
  FUN_1460455a2();
  local_750 = local_238;
  local_748 = lStack_230;
  FUN_144b0e33a(&local_620,local_318);
  if (lVar18 != 0) {
    lVar18 = (longlong)*(int *)(lVar18 + 0xd4);
    lVar11 = *(longlong *)(*(longlong *)(*(longlong *)(lVar13 + 8) + 0x50) + lVar18 * 8);
    local_238 = local_750;
    if (lVar11 == 0) {
      lVar11 = FUN_1400bafc2(*(longlong *)(lVar13 + 8),lVar18,1);
      local_238 = local_750;
    }
  }
  lVar18 = local_760;
  local_318._8_8_ = lVar11;
  if (local_238 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = *(longlong *)
              (*(longlong *)(*(longlong *)(local_748 + 8) + 0x50) +
              (longlong)*(int *)(local_238 + 0xd4) * 8);
    if (lVar11 == 0) {
      lVar11 = FUN_1400bafc2(*(longlong *)(local_748 + 8),(longlong)*(int *)(local_238 + 0xd4),1);
    }
  }
  local_2c0 = 1;
  puVar10 = (undefined8 *)((longlong)local_620 + 7U & 0xfffffffffffffff8);
  pwVar14 = (wchar_t *)(puVar10 + 3);
  local_308._0_8_ = lVar11;
  if (local_618 < pwVar14) {
    FUN_140023dd8(&local_620,0x20);
    puVar10 = (undefined8 *)((longlong)local_620 + 7U & 0xfffffffffffffff8);
    pwVar14 = (wchar_t *)(puVar10 + 3);
  }
  local_5c0 = local_5c0 + 1;
  *(undefined8 **)local_5f0 = puVar10;
  local_5f0 = (wchar_t *)(puVar10 + 1);
  *(undefined1 (*) [16])(puVar10 + 1) = (undefined1  [16])0x0;
  *puVar10 = &PTR_LAB_14a343b98;
  local_620 = pwVar14;
  lVar11 = FUN_140028f18(&local_620,local_318);
  if ((lVar11 != 0) && ((local_250._0_4_ & 0x10000000) == 0)) {
    local_478 = local_2f8._0_8_;
    uStack_470 = local_2f8._8_8_;
    local_488 = local_308._0_8_;
    uStack_480 = local_308._8_8_;
    local_498 = local_318._0_8_;
    uStack_490 = local_318._8_8_;
    puVar10 = (undefined8 *)((longlong)local_620 + 7U & 0xfffffffffffffff8);
    pwVar14 = (wchar_t *)(puVar10 + 4);
    if (local_618 < pwVar14) {
      FUN_140023dd8(&local_620,0x28);
      puVar10 = (undefined8 *)((longlong)local_620 + 7U & 0xfffffffffffffff8);
      pwVar14 = (wchar_t *)(puVar10 + 4);
    }
    local_5c0 = local_5c0 + 1;
    *(undefined8 **)local_5f0 = puVar10;
    local_5f0 = (wchar_t *)(puVar10 + 1);
    puVar10[1] = 0;
    *puVar10 = &PTR_LAB_14a37d348;
    puVar10[2] = lVar11;
    *(undefined4 *)(puVar10 + 3) = 0;
    *(undefined1 *)((longlong)puVar10 + 0x1c) = 1;
    local_620 = pwVar14;
  }
  puVar10 = (undefined8 *)((longlong)local_620 + 7U & 0xfffffffffffffff8);
  pwVar14 = (wchar_t *)(puVar10 + 4);
  if (local_618 < pwVar14) {
    FUN_140023dd8(&local_620,0x28);
    puVar10 = (undefined8 *)((longlong)local_620 + 7U & 0xfffffffffffffff8);
    pwVar14 = (wchar_t *)(puVar10 + 4);
  }
  local_5c0 = local_5c0 + 1;
  *(undefined8 **)local_5f0 = puVar10;
  local_5f0 = (wchar_t *)(puVar10 + 1);
  puVar10[1] = 0;
  *puVar10 = &PTR_LAB_14a2f1798;
  puVar10[2] = &DAT_3f8000003f800000;
  puVar10[3] = &DAT_3f8000003f800000;
  local_620 = pwVar14;
  if (local_728._0_8_ == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = *(longlong *)
              (*(longlong *)(*(longlong *)(local_728._8_8_ + 8) + 0x50) +
              (longlong)*(int *)(local_728._0_8_ + 0xd4) * 8);
    if (lVar11 == 0) {
      lVar11 = FUN_1400bafc2(*(longlong *)(local_728._8_8_ + 8),
                             (longlong)*(int *)(local_728._0_8_ + 0xd4),1);
    }
  }
  local_788 = param_6;
  local_780 = param_4;
  local_778 = param_4 + 1;
  FUN_147368ba4(&local_620,local_728,lVar11,param_5);
  lVar11 = local_758;
  if (local_750 == 0) {
    lVar13 = 0;
  }
  else {
    lVar13 = *(longlong *)
              (*(longlong *)(*(longlong *)(local_748 + 8) + 0x50) +
              (longlong)*(int *)(local_750 + 0xd4) * 8);
    if (lVar13 == 0) {
      lVar13 = FUN_1400bafc2(*(longlong *)(local_748 + 8),(longlong)*(int *)(local_750 + 0xd4),1);
    }
  }
  FUN_147368cd7(&local_620,&local_750,lVar13,&stack0x00000038);
  puVar10 = (undefined8 *)((longlong)local_620 + 7U & 0xfffffffffffffff8);
  pwVar14 = (wchar_t *)(puVar10 + 4);
  if (lVar18 == 0) {
    if (local_618 < pwVar14) {
      FUN_140023dd8(&local_620,0x28);
      puVar10 = (undefined8 *)((longlong)local_620 + 7U & 0xfffffffffffffff8);
      pwVar14 = (wchar_t *)(puVar10 + 4);
    }
    local_5c0 = local_5c0 + 1;
    *(undefined8 **)local_5f0 = puVar10;
    local_5f0 = (wchar_t *)(puVar10 + 1);
    puVar10[1] = 0;
    *puVar10 = &PTR_LAB_14a1fc200;
    puVar10[2] = 0x200000000;
    *(undefined4 *)(puVar10 + 3) = 1;
    local_620 = pwVar14;
    if ((local_4a5 & 8) != 0) {
      (**(code **)(*DAT_14ca83900 + 0x2a0))(DAT_14ca83900,&local_620,1);
      local_4a5 = local_4a5 & 0xf7;
    }
    puVar10 = (undefined8 *)((longlong)local_620 + 7U & 0xfffffffffffffff8);
    pwVar14 = (wchar_t *)(puVar10 + 2);
    if (local_618 < pwVar14) {
      FUN_140023dd8(&local_620,0x18);
      puVar10 = (undefined8 *)((longlong)local_620 + 7U & 0xfffffffffffffff8);
      pwVar14 = (wchar_t *)(puVar10 + 2);
    }
    local_5c0 = local_5c0 + 1;
    *(undefined8 **)local_5f0 = puVar10;
    local_5f0 = (wchar_t *)(puVar10 + 1);
    puVar10[1] = 0;
    *puVar10 = &PTR_LAB_14a217b58;
    local_4a5 = local_4a5 & 0xfd;
    local_4a8 = 0;
    local_620 = pwVar14;
    FUN_140048db6();
  }
  else {
    uVar3 = *(ushort *)(local_750 + 0xe0);
    if (local_618 < pwVar14) {
      FUN_140023dd8(&local_620,0x28);
      puVar10 = (undefined8 *)((longlong)local_620 + 7U & 0xfffffffffffffff8);
      pwVar14 = (wchar_t *)(puVar10 + 4);
    }
    local_5c0 = local_5c0 + 1;
    *(undefined8 **)local_5f0 = puVar10;
    local_5f0 = (wchar_t *)(puVar10 + 1);
    puVar10[1] = 0;
    *puVar10 = &PTR_LAB_14a343ba0;
    puVar10[2] = lVar18;
    *(uint *)(puVar10 + 3) = (uint)uVar3;
    local_620 = pwVar14 + 0x10;
    if (local_618 < local_620) {
      local_620 = pwVar14;
      FUN_140023dd8(&local_620,0x28);
      pwVar14 = (wchar_t *)((longlong)local_620 + 7U & 0xfffffffffffffff8);
      local_620 = pwVar14 + 0x10;
    }
    local_5c0 = local_5c0 + 1;
    *(wchar_t **)local_5f0 = pwVar14;
    local_5f0 = pwVar14 + 4;
    pwVar14[4] = L'\0';
    pwVar14[5] = L'\0';
    pwVar14[6] = L'\0';
    pwVar14[7] = L'\0';
    *(undefined ***)pwVar14 = &PTR_LAB_14a1fc200;
    pwVar14[8] = L'\0';
    pwVar14[9] = L'\0';
    pwVar14[10] = L'\x02';
    pwVar14[0xb] = L'\0';
    pwVar14[0xc] = L'\x01';
    pwVar14[0xd] = L'\0';
    if ((local_4a5 & 8) != 0) {
      (**(code **)(*DAT_14ca83900 + 0x2a0))(DAT_14ca83900,&local_620,1);
      local_4a5 = local_4a5 & 0xf7;
    }
    puVar10 = (undefined8 *)((longlong)local_620 + 7U & 0xfffffffffffffff8);
    pwVar14 = (wchar_t *)(puVar10 + 2);
    if (local_618 < pwVar14) {
      FUN_140023dd8(&local_620,0x18);
      puVar10 = (undefined8 *)((longlong)local_620 + 7U & 0xfffffffffffffff8);
      pwVar14 = (wchar_t *)(puVar10 + 2);
    }
    local_5c0 = local_5c0 + 1;
    *(undefined8 **)local_5f0 = puVar10;
    local_5f0 = (wchar_t *)(puVar10 + 1);
    puVar10[1] = 0;
    *puVar10 = &PTR_LAB_14a217b58;
    local_4a5 = local_4a5 & 0xfd;
    local_4a8 = 0;
    local_620 = pwVar14;
    FUN_140048db6();
    FUN_143142986(param_1,lVar18 + 0x60,0);
  }
  FUN_143142ce6(param_1);
  if ((*(int *)(param_1 + 0x19d0) != 1) ||
     (auVar8._8_8_ = auStack_738, auVar8._0_8_ = local_740,
     local_730 != (undefined1  [8])*(longlong *)(param_1 + 0x19e4) ||
     auVar8 != *(undefined1 (*) [16])(param_1 + 0x19d4))) {
    *(undefined1 (*) [8])(param_1 + 0x19e4) = local_730;
    *(undefined1 (*) [8])(param_1 + 0x19d4) = local_740;
    *(undefined1 (*) [8])(param_1 + 0x19dc) = auStack_738;
    *(undefined4 *)(param_1 + 0x19d0) = 1;
    (**(code **)(**(longlong **)(param_1 + 0x170) + 0x160))(*(longlong **)(param_1 + 0x170),1);
  }
  *(undefined4 *)(param_1 + 0x4428) = local_764;
  lVar18 = *(longlong *)(param_1 + 0x27b0);
  if (lVar18 != lVar11) {
    *(longlong *)(param_1 + 0x27b0) = lVar11;
    if (lVar11 != 0) {
      LOCK();
      *(int *)(lVar11 + 8) = *(int *)(lVar11 + 8) + 1;
      UNLOCK();
    }
    if (lVar18 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar18 + 8);
      uVar5 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar5 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar18 + 8);
        LOCK();
        uVar5 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar5 >> 0x1e & 1) == 0) {
          bVar2 = *(byte *)(lVar18 + 0xd);
          plVar15 = (longlong *)FUN_14001cc68(0x10,8);
          plVar15[1] = lVar18;
          plVar17 = DAT_14ca843c0;
          plVar16 = DAT_14ca843c8;
          if ((bVar2 & 2) == 0) {
            do {
              *plVar15 = (longlong)plVar17;
              LOCK();
              bVar21 = plVar17 != DAT_14ca843c0;
              plVar16 = plVar15;
              if (bVar21) {
                plVar17 = DAT_14ca843c0;
                plVar16 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar16;
              UNLOCK();
            } while (bVar21);
          }
          else {
            do {
              *plVar15 = (longlong)plVar16;
              LOCK();
              bVar21 = plVar16 != DAT_14ca843c8;
              plVar17 = plVar15;
              if (bVar21) {
                plVar16 = DAT_14ca843c8;
                plVar17 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar17;
              UNLOCK();
            } while (bVar21);
          }
        }
      }
    }
  }
  if (lVar11 != 0) {
    LOCK();
    puVar1 = (uint *)(lVar11 + 8);
    uVar5 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar5 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar11 + 8);
      LOCK();
      uVar5 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar5 >> 0x1e & 1) == 0) {
        bVar2 = *(byte *)(lVar11 + 0xd);
        plVar15 = (longlong *)FUN_14001cc68(0x10,8);
        plVar15[1] = lVar11;
        plVar17 = DAT_14ca843c0;
        plVar16 = DAT_14ca843c8;
        if ((bVar2 & 2) == 0) {
          do {
            *plVar15 = (longlong)plVar17;
            LOCK();
            bVar21 = plVar17 != DAT_14ca843c0;
            plVar16 = plVar15;
            if (bVar21) {
              plVar17 = DAT_14ca843c0;
              plVar16 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar16;
            UNLOCK();
          } while (bVar21);
        }
        else {
          do {
            *plVar15 = (longlong)plVar16;
            LOCK();
            bVar21 = plVar16 != DAT_14ca843c8;
            plVar17 = plVar15;
            if (bVar21) {
              plVar16 = DAT_14ca843c8;
              plVar17 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar17;
            UNLOCK();
          } while (bVar21);
        }
      }
    }
  }
  if ((local_70 ^ (ulonglong)auStack_7a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143147538 FUN_143147538 body=4996 status=ok
// SIG undefined FUN_143147538(void)

void FUN_143147538(longlong param_1,longlong param_2,longlong *param_3,undefined8 param_4,
                  undefined8 param_5,uint *param_6,undefined8 param_7,int *param_8)

{
  uint *puVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  longlong lVar10;
  undefined1 auVar11 [4];
  undefined8 *puVar12;
  longlong lVar13;
  undefined8 uVar14;
  wchar_t *pwVar15;
  longlong *plVar16;
  longlong *plVar17;
  longlong *plVar18;
  longlong lVar19;
  byte bVar20;
  wchar_t *pwVar21;
  bool bVar22;
  undefined1 auStack_7a8 [32];
  int *local_788;
  uint *local_780;
  uint *local_778;
  undefined4 local_764;
  longlong local_760;
  longlong local_758;
  longlong *local_750;
  longlong *local_748;
  longlong local_740;
  undefined1 local_738 [8];
  undefined1 auStack_730 [8];
  undefined1 local_728 [8];
  longlong *local_720;
  longlong local_718;
  undefined4 local_710;
  undefined2 local_70c;
  undefined1 local_660 [16];
  undefined1 local_650;
  undefined4 local_64c;
  undefined4 local_648;
  undefined4 uStack_644;
  undefined4 uStack_640;
  undefined4 uStack_63c;
  undefined8 local_638;
  uint local_630;
  undefined4 uStack_62c;
  undefined3 uStack_628;
  wchar_t *local_620;
  wchar_t *local_618;
  wchar_t *local_5f0;
  int local_5c0;
  int local_580;
  undefined1 local_578 [192];
  longlong *local_4b8;
  undefined8 uStack_4b0;
  undefined2 local_4a8;
  undefined1 local_4a6;
  byte local_4a5;
  undefined8 local_498;
  undefined8 uStack_490;
  longlong local_488;
  undefined8 uStack_480;
  undefined8 local_478;
  undefined8 uStack_470;
  undefined1 local_318 [16];
  undefined1 local_308 [16];
  undefined1 local_2f8 [16];
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined1 local_2d8 [16];
  undefined8 local_2c8;
  undefined4 local_2c0;
  undefined1 local_2bc [16];
  undefined1 local_2ac [16];
  undefined1 local_29c [16];
  undefined1 local_28c [13];
  undefined3 uStack_27f;
  undefined1 auStack_27c [12];
  undefined1 local_270;
  undefined1 local_268 [16];
  undefined8 local_258;
  undefined1 local_250 [7];
  undefined1 auStack_249 [4];
  uint uStack_245;
  undefined1 auStack_241 [5];
  byte abStack_23c [3];
  undefined1 uStack_239;
  longlong *local_238;
  longlong lStack_230;
  longlong lStack_185;
  undefined1 local_178 [4];
  byte local_174;
  undefined1 local_b0;
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  ushort local_88;
  undefined8 local_80;
  ushort local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_7a8;
  iVar4 = *(int *)(param_1 + 0x19d0);
  if (iVar4 < 1) {
    memset(local_738 + (longlong)iVar4 * 0x18,0,(ulonglong)(1 - iVar4) * 0x18);
  }
  else {
    memcpy(local_738,(void *)(param_1 + 0x19d4),0x18);
  }
  local_2d8 = (undefined1  [16])0x0;
  local_2f8 = (undefined1  [16])0x0;
  local_308 = (undefined1  [16])0x0;
  local_318 = (undefined1  [16])0x0;
  local_2c8 = 0;
  local_2bc = (undefined1  [16])0x0;
  local_2ac = (undefined1  [16])0x0;
  local_29c = (undefined1  [16])0x0;
  local_28c = SUB1613((undefined1  [16])0x0,0);
  uStack_27f = 0;
  auStack_27c = SUB1612((undefined1  [16])0x0,3);
  local_270 = 0;
  local_268 = (undefined1  [16])0x0;
  local_258 = 0;
  local_250._0_4_ = 1;
  stack0xfffffffffffffdb8 = 0;
  uStack_2e0 = DAT_14c9c0db0;
  local_2e8 = DAT_14c9c0d50;
  if (param_3 != (longlong *)0x0) {
    FUN_143142986(param_1,param_3 + 0xc,0);
  }
  if ((param_8[1] == 0 && *param_8 == 0) && (param_8[2] == *param_6)) {
    bVar22 = param_8[3] == param_6[1];
  }
  else {
    bVar22 = false;
  }
  uVar5 = param_6[8];
  local_764 = *(undefined4 *)(param_1 + 0x4428);
  local_758 = *(longlong *)(param_1 + 0x27b0);
  if (local_758 != 0) {
    LOCK();
    *(int *)(local_758 + 8) = *(int *)(local_758 + 8) + 1;
    UNLOCK();
  }
  lVar13 = param_1 + 0x18;
  if (param_1 == 0) {
    lVar13 = 0;
  }
  local_760 = param_2;
  FUN_140048e76(&local_620,lVar13);
  puVar12 = (undefined8 *)((longlong)local_620 + 7U & 0xfffffffffffffff8);
  pwVar15 = (wchar_t *)(puVar12 + 4);
  local_750 = param_3;
  if ((uVar5 & 0x40) == 0) {
    if (local_618 < pwVar15) {
      FUN_140023dd8(&local_620,0x28);
      puVar12 = (undefined8 *)((longlong)local_620 + 7U & 0xfffffffffffffff8);
      pwVar15 = (wchar_t *)(puVar12 + 4);
    }
    local_5c0 = local_5c0 + 1;
    *(undefined8 **)local_5f0 = puVar12;
    local_5f0 = (wchar_t *)(puVar12 + 1);
    puVar12[1] = 0;
    *puVar12 = &PTR_FUN_14a343bd8;
    *(bool *)(puVar12 + 2) = bVar22;
    puVar12[3] = param_4;
    local_2d8._0_8_ = DAT_14c9c0d98;
    lVar13 = 0x15;
    local_620 = pwVar15;
    do {
      *(undefined1 (*) [16])(local_738 + lVar13 + 3) = (undefined1  [16])0x0;
      *(undefined4 *)(local_728 + lVar13 + 3) = 0xffffffff;
      *(undefined2 *)(local_728 + lVar13 + 7) = 0;
      lVar13 = lVar13 + 0x18;
    } while (lVar13 != 0xd5);
    local_64c = 0;
    local_660 = (undefined1  [16])0x0;
    local_650 = 0;
    local_648 = 0xffffffff;
    uStack_644 = 0xffffffff;
    uStack_640 = 0xffffffff;
    uStack_63c = 0xffffffff;
    local_638 = 0;
    local_630 = local_630 & 0xffffff00;
    uStack_62c = 0;
    uStack_628 = 0;
    local_718 = 0;
    local_710 = 0xffffffff;
    local_70c = 0x500;
    pwVar21 = (wchar_t *)((longlong)local_620 + 1U & 0xfffffffffffffffe);
    pwVar15 = pwVar21 + 1;
    local_720 = param_3;
    if (local_618 < pwVar15) {
      FUN_140023dd8(&local_620,4);
      pwVar21 = (wchar_t *)((longlong)local_620 + 1U & 0xfffffffffffffffe);
      pwVar15 = pwVar21 + 1;
    }
    local_620 = pwVar15;
    wcscpy(pwVar21,L"");
    puVar12 = (undefined8 *)((longlong)local_620 + 7U & 0xfffffffffffffff8);
    pwVar15 = (wchar_t *)(puVar12 + 0x23);
    if (local_618 < pwVar15) {
      FUN_140023dd8(&local_620,0x120);
      puVar12 = (undefined8 *)((longlong)local_620 + 7U & 0xfffffffffffffff8);
      pwVar15 = (wchar_t *)(puVar12 + 0x23);
    }
    local_5c0 = local_5c0 + 1;
    *(undefined8 **)local_5f0 = puVar12;
    local_5f0 = (wchar_t *)(puVar12 + 1);
    puVar12[1] = 0;
    *puVar12 = &PTR_FUN_14a217b50;
    local_620 = pwVar15;
    memcpy(puVar12 + 2,&local_720,0xe8);
    puVar12[0x1f] = 0;
    puVar12[0x20] = CONCAT44(uStack_62c,local_630);
    *(uint *)((longlong)puVar12 + 0x107) = CONCAT31(uStack_628,uStack_62c._3_1_);
    puVar12[0x22] = pwVar21;
    lVar13 = 0x11;
    do {
      *(undefined8 *)(auStack_249 + lVar13) = 0;
      *(undefined8 *)(auStack_241 + lVar13) = 0xffffffff00000000;
      *(undefined2 *)(&uStack_239 + lVar13) = 0;
      lVar13 = lVar13 + 0x18;
    } while (lVar13 != 0xd1);
    local_178 = (undefined1  [4])0x0;
    local_174 = 0;
    lVar13 = 0xd9;
    do {
      *(undefined8 *)(auStack_249 + lVar13) = 0;
      *(undefined8 *)(auStack_241 + lVar13) = 0xffffffff00000000;
      *(undefined2 *)(&uStack_239 + lVar13) = 0;
      lVar13 = lVar13 + 0x18;
    } while (lVar13 != 0x199);
    local_b0 = 0;
    local_80 = 0;
    local_78 = local_78 & 0xff;
    local_a8 = (undefined1  [16])0x0;
    local_98 = (undefined1  [16])0x0;
    local_88 = local_88 & 0xff00;
    lVar13 = 0x15;
    do {
      if (*(longlong *)(local_738 + lVar13 + 3) == 0) break;
      *(longlong *)(local_250 + lVar13 + 3) = *(longlong *)(local_738 + lVar13 + 3);
      bVar2 = *(byte *)((longlong)&local_720 + lVar13);
      bVar20 = bVar2 >> 2;
      auStack_241[lVar13 + 4] = bVar20;
      abStack_23c[lVar13] = bVar2 & 3;
      *(undefined4 *)(auStack_241 + lVar13) = *(undefined4 *)(local_728 + lVar13 + 3);
      *(uint *)(auStack_241 + lVar13 + -4) = (uint)(byte)local_728[lVar13 + 7];
      local_178 = (undefined1  [4])((int)local_178 + 1);
      local_174 = local_174 | bVar20 == 2;
      lVar7 = *(longlong *)(auStack_730 + lVar13 + 3);
      if (lVar7 != 0) {
        local_b0 = 1;
        uVar8 = *(undefined8 *)(auStack_241 + lVar13 + -4);
        *(undefined8 *)((longlong)&lStack_185 + lVar13) = *(undefined8 *)(local_250 + lVar13 + 3);
        *(undefined8 *)(&stack0xfffffffffffffe83 + lVar13) = uVar8;
        *(undefined8 *)(local_178 + lVar13 + 3) = *(undefined8 *)(auStack_241 + lVar13 + 4);
        *(longlong *)((longlong)&lStack_185 + lVar13) = lVar7;
      }
      lVar13 = lVar13 + 0x18;
    } while (lVar13 != 0xd5);
    auVar11 = local_178;
    local_88 = 0;
    local_80 = 0;
    local_78 = 0;
    local_a8._0_8_ = (longlong *)0x0;
    local_a8._8_8_ = 0;
    if (0 < (longlong)(int)local_178) {
      memcpy(local_578,&local_238,(longlong)(int)local_178 * 0x18);
    }
    local_580 = (int)auVar11;
    local_4b8 = (longlong *)0x0;
    uStack_4b0 = 0;
  }
  else {
    if (local_618 < pwVar15) {
      FUN_140023dd8(&local_620,0x28);
      puVar12 = (undefined8 *)((longlong)local_620 + 7U & 0xfffffffffffffff8);
      pwVar15 = (wchar_t *)(puVar12 + 4);
    }
    local_5c0 = local_5c0 + 1;
    *(undefined8 **)local_5f0 = puVar12;
    local_5f0 = (wchar_t *)(puVar12 + 1);
    puVar12[1] = 0;
    *puVar12 = &PTR_FUN_14a343bd0;
    *(bool *)(puVar12 + 2) = bVar22;
    puVar12[3] = param_5;
    local_2d8._0_8_ = DAT_14c9c0c60;
    local_620 = pwVar15;
    lVar13 = (**(code **)(*param_3 + 8))(param_3);
    local_270 = *(undefined1 *)(lVar13 + 0x33);
    lVar13 = 0x15;
    do {
      *(undefined1 (*) [16])(local_738 + lVar13 + 3) = (undefined1  [16])0x0;
      *(undefined4 *)(local_728 + lVar13 + 3) = 0xffffffff;
      *(undefined2 *)(local_728 + lVar13 + 7) = 0;
      lVar13 = lVar13 + 0x18;
    } while (lVar13 != 0xd5);
    local_648 = 0xffffffff;
    uStack_644 = 0xffffffff;
    uStack_640 = 0xffffffff;
    uStack_63c = 0xffffffff;
    local_638 = 0;
    local_630 = local_630 & 0xffffff00;
    uStack_62c = 0;
    uStack_628 = 0;
    local_660._8_8_ = 0;
    local_660._0_8_ = param_3;
    local_650 = 0x55;
    local_64c = 0x22;
    pwVar21 = (wchar_t *)((longlong)local_620 + 1U & 0xfffffffffffffffe);
    pwVar15 = pwVar21 + 1;
    if (local_618 < pwVar15) {
      FUN_140023dd8(&local_620,4);
      pwVar21 = (wchar_t *)((longlong)local_620 + 1U & 0xfffffffffffffffe);
      pwVar15 = pwVar21 + 1;
    }
    local_620 = pwVar15;
    wcscpy(pwVar21,L"");
    puVar12 = (undefined8 *)((longlong)local_620 + 7U & 0xfffffffffffffff8);
    pwVar15 = (wchar_t *)(puVar12 + 0x23);
    if (local_618 < pwVar15) {
      FUN_140023dd8(&local_620,0x120);
      puVar12 = (undefined8 *)((longlong)local_620 + 7U & 0xfffffffffffffff8);
      pwVar15 = (wchar_t *)(puVar12 + 0x23);
    }
    local_5c0 = local_5c0 + 1;
    *(undefined8 **)local_5f0 = puVar12;
    local_5f0 = (wchar_t *)(puVar12 + 1);
    puVar12[1] = 0;
    *puVar12 = &PTR_FUN_14a217b50;
    local_620 = pwVar15;
    memcpy(puVar12 + 2,&local_720,0xe8);
    puVar12[0x1f] = 0;
    puVar12[0x20] = CONCAT44(uStack_62c,local_630);
    *(uint *)((longlong)puVar12 + 0x107) = CONCAT31(uStack_628,uStack_62c._3_1_);
    puVar12[0x22] = pwVar21;
    lVar13 = 0x11;
    do {
      *(undefined8 *)(auStack_249 + lVar13) = 0;
      *(undefined8 *)(auStack_241 + lVar13) = 0xffffffff00000000;
      *(undefined2 *)(&uStack_239 + lVar13) = 0;
      lVar13 = lVar13 + 0x18;
    } while (lVar13 != 0xd1);
    local_178 = (undefined1  [4])0x0;
    local_174 = 0;
    lVar13 = 0xd9;
    do {
      *(undefined8 *)(auStack_249 + lVar13) = 0;
      *(undefined8 *)(auStack_241 + lVar13) = 0xffffffff00000000;
      *(undefined2 *)(&uStack_239 + lVar13) = 0;
      lVar13 = lVar13 + 0x18;
    } while (lVar13 != 0x199);
    local_b0 = 0;
    local_80 = 0;
    local_78 = local_78 & 0xff;
    local_a8 = (undefined1  [16])0x0;
    local_98 = (undefined1  [16])0x0;
    local_88 = local_88 & 0xff00;
    lVar13 = 0x15;
    do {
      if (*(longlong *)(local_738 + lVar13 + 3) == 0) break;
      *(longlong *)(local_250 + lVar13 + 3) = *(longlong *)(local_738 + lVar13 + 3);
      bVar2 = *(byte *)((longlong)&local_720 + lVar13);
      bVar20 = bVar2 >> 2;
      auStack_241[lVar13 + 4] = bVar20;
      abStack_23c[lVar13] = bVar2 & 3;
      *(undefined4 *)(auStack_241 + lVar13) = *(undefined4 *)(local_728 + lVar13 + 3);
      *(uint *)(auStack_241 + lVar13 + -4) = (uint)(byte)local_728[lVar13 + 7];
      local_178 = (undefined1  [4])((int)local_178 + 1);
      local_174 = local_174 | bVar20 == 2;
      lVar7 = *(longlong *)(auStack_730 + lVar13 + 3);
      if (lVar7 != 0) {
        local_b0 = 1;
        uVar8 = *(undefined8 *)(auStack_241 + lVar13 + -4);
        *(undefined8 *)((longlong)&lStack_185 + lVar13) = *(undefined8 *)(local_250 + lVar13 + 3);
        *(undefined8 *)(&stack0xfffffffffffffe83 + lVar13) = uVar8;
        *(undefined8 *)(local_178 + lVar13 + 3) = *(undefined8 *)(auStack_241 + lVar13 + 4);
        *(longlong *)((longlong)&lStack_185 + lVar13) = lVar7;
      }
      lVar13 = lVar13 + 0x18;
    } while (lVar13 != 0xd5);
    auVar11 = local_178;
    local_a8._8_8_ = 0x2201010101;
    local_88 = 0;
    local_80 = 0;
    local_78 = 0;
    local_a8._0_8_ = param_3;
    if (0 < (longlong)(int)local_178) {
      memcpy(local_578,&local_238,(longlong)(int)local_178 * 0x18);
    }
    local_580 = (int)auVar11;
    local_4b8 = (longlong *)local_a8._0_8_;
    uStack_4b0 = local_a8._8_8_;
  }
  local_4a6 = 0;
  local_4a8 = 0;
  local_4a5 = local_4a5 & 0xfc | 2;
  uVar5 = param_6[1];
  uVar6 = *param_6;
  puVar12 = (undefined8 *)((longlong)local_620 + 7U & 0xfffffffffffffff8);
  pwVar15 = (wchar_t *)(puVar12 + 5);
  if (local_618 < pwVar15) {
    FUN_140023dd8(&local_620,0x30);
    puVar12 = (undefined8 *)((longlong)local_620 + 7U & 0xfffffffffffffff8);
    pwVar15 = (wchar_t *)(puVar12 + 5);
  }
  local_5c0 = local_5c0 + 1;
  *(undefined8 **)local_5f0 = puVar12;
  local_5f0 = (wchar_t *)(puVar12 + 1);
  *(undefined1 (*) [16])(puVar12 + 1) = (undefined1  [16])0x0;
  *puVar12 = &PTR_LAB_14a1e7fc8;
  *(undefined4 *)(puVar12 + 3) = 0;
  *(float *)((longlong)puVar12 + 0x1c) = (float)uVar6;
  *(float *)(puVar12 + 4) = (float)uVar5;
  *(undefined4 *)((longlong)puVar12 + 0x24) = 0x3f800000;
  uVar8 = *(undefined8 *)
           (&DAT_14ca8c1f0 +
           (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) * 8);
  local_620 = pwVar15;
  uVar14 = FUN_145ee189a();
  lVar13 = 0;
  FUN_1448e935e(uVar8,&local_238,uVar14,0);
  FUN_145ee189a();
  lVar10 = lStack_230;
  plVar18 = local_238;
  local_720 = local_238;
  local_718 = lStack_230;
  uVar14 = FUN_145c1161c();
  FUN_1448e935e(uVar8,&local_238,uVar14,0);
  FUN_145c1161c();
  local_748 = local_238;
  local_740 = lStack_230;
  FUN_144b0e33a(&local_620,local_318);
  lVar7 = local_758;
  if (plVar18 != (longlong *)0x0) {
    lVar19 = (longlong)*(int *)((longlong)plVar18 + 0xd4);
    lVar13 = *(longlong *)(*(longlong *)(*(longlong *)(lVar10 + 8) + 0x50) + lVar19 * 8);
    local_238 = local_748;
    if (lVar13 == 0) {
      lVar13 = FUN_1400bafc2(*(longlong *)(lVar10 + 8),lVar19,1);
      local_238 = local_748;
    }
  }
  plVar18 = local_750;
  lVar10 = local_760;
  local_318._8_8_ = lVar13;
  if (local_238 == (longlong *)0x0) {
    lVar13 = 0;
  }
  else {
    lVar13 = *(longlong *)
              (*(longlong *)(*(longlong *)(local_740 + 8) + 0x50) +
              (longlong)*(int *)((longlong)local_238 + 0xd4) * 8);
    if (lVar13 == 0) {
      lVar13 = FUN_1400bafc2(*(longlong *)(local_740 + 8),
                             (longlong)*(int *)((longlong)local_238 + 0xd4),1);
    }
  }
  local_2c0 = 1;
  puVar12 = (undefined8 *)((longlong)local_620 + 7U & 0xfffffffffffffff8);
  pwVar15 = (wchar_t *)(puVar12 + 3);
  local_308._0_8_ = lVar13;
  if (local_618 < pwVar15) {
    FUN_140023dd8(&local_620,0x20);
    puVar12 = (undefined8 *)((longlong)local_620 + 7U & 0xfffffffffffffff8);
    pwVar15 = (wchar_t *)(puVar12 + 3);
  }
  local_5c0 = local_5c0 + 1;
  *(undefined8 **)local_5f0 = puVar12;
  local_5f0 = (wchar_t *)(puVar12 + 1);
  puVar12[1] = 0;
  *puVar12 = &PTR_LAB_14a343be0;
  puVar12[2] = plVar18;
  local_620 = pwVar15;
  lVar13 = FUN_140028f18(&local_620,local_318);
  if ((lVar13 != 0) && ((local_250._0_4_ & 0x10000000) == 0)) {
    local_478 = local_2f8._0_8_;
    uStack_470 = local_2f8._8_8_;
    local_488 = local_308._0_8_;
    uStack_480 = local_308._8_8_;
    local_498 = local_318._0_8_;
    uStack_490 = local_318._8_8_;
    puVar12 = (undefined8 *)((longlong)local_620 + 7U & 0xfffffffffffffff8);
    pwVar15 = (wchar_t *)(puVar12 + 4);
    if (local_618 < pwVar15) {
      FUN_140023dd8(&local_620,0x28);
      puVar12 = (undefined8 *)((longlong)local_620 + 7U & 0xfffffffffffffff8);
      pwVar15 = (wchar_t *)(puVar12 + 4);
    }
    local_5c0 = local_5c0 + 1;
    *(undefined8 **)local_5f0 = puVar12;
    local_5f0 = (wchar_t *)(puVar12 + 1);
    puVar12[1] = 0;
    *puVar12 = &PTR_LAB_14a37d348;
    puVar12[2] = lVar13;
    *(undefined4 *)(puVar12 + 3) = 0;
    *(undefined1 *)((longlong)puVar12 + 0x1c) = 1;
    local_620 = pwVar15;
  }
  puVar12 = (undefined8 *)((longlong)local_620 + 7U & 0xfffffffffffffff8);
  pwVar15 = (wchar_t *)(puVar12 + 4);
  if (local_618 < pwVar15) {
    FUN_140023dd8(&local_620,0x28);
    puVar12 = (undefined8 *)((longlong)local_620 + 7U & 0xfffffffffffffff8);
    pwVar15 = (wchar_t *)(puVar12 + 4);
  }
  local_5c0 = local_5c0 + 1;
  *(undefined8 **)local_5f0 = puVar12;
  local_5f0 = (wchar_t *)(puVar12 + 1);
  puVar12[1] = 0;
  *puVar12 = &PTR_LAB_14a2f1798;
  puVar12[2] = &DAT_3f8000003f800000;
  puVar12[3] = &DAT_3f8000003f800000;
  local_620 = pwVar15;
  if (local_720 == (longlong *)0x0) {
    lVar13 = 0;
  }
  else {
    lVar13 = *(longlong *)
              (*(longlong *)(*(longlong *)(local_718 + 8) + 0x50) +
              (longlong)*(int *)((longlong)local_720 + 0xd4) * 8);
    if (lVar13 == 0) {
      lVar13 = FUN_1400bafc2(*(longlong *)(local_718 + 8),
                             (longlong)*(int *)((longlong)local_720 + 0xd4),1);
    }
  }
  local_780 = param_6;
  local_788 = param_8;
  local_778 = param_6 + 1;
  FUN_147368ba4(&local_620,&local_720,lVar13,param_7);
  if (local_748 == (longlong *)0x0) {
    lVar13 = 0;
  }
  else {
    lVar13 = *(longlong *)
              (*(longlong *)(*(longlong *)(local_740 + 8) + 0x50) +
              (longlong)*(int *)((longlong)local_748 + 0xd4) * 8);
    if (lVar13 == 0) {
      lVar13 = FUN_1400bafc2(*(longlong *)(local_740 + 8),
                             (longlong)*(int *)((longlong)local_748 + 0xd4),1);
    }
  }
  FUN_147368f16(&local_620,&local_748,lVar13);
  puVar12 = (undefined8 *)((longlong)local_620 + 7U & 0xfffffffffffffff8);
  pwVar15 = (wchar_t *)(puVar12 + 4);
  if (lVar10 == 0) {
    if (local_618 < pwVar15) {
      FUN_140023dd8(&local_620,0x28);
      puVar12 = (undefined8 *)((longlong)local_620 + 7U & 0xfffffffffffffff8);
      pwVar15 = (wchar_t *)(puVar12 + 4);
    }
    local_5c0 = local_5c0 + 1;
    *(undefined8 **)local_5f0 = puVar12;
    local_5f0 = (wchar_t *)(puVar12 + 1);
    puVar12[1] = 0;
    *puVar12 = &PTR_LAB_14a1fc200;
    puVar12[2] = 0x200000000;
    *(undefined4 *)(puVar12 + 3) = 1;
    local_620 = pwVar15;
    if ((local_4a5 & 8) != 0) {
      (**(code **)(*DAT_14ca83900 + 0x2a0))(DAT_14ca83900,&local_620,1);
      local_4a5 = local_4a5 & 0xf7;
    }
    puVar12 = (undefined8 *)((longlong)local_620 + 7U & 0xfffffffffffffff8);
    pwVar15 = (wchar_t *)(puVar12 + 2);
    if (local_618 < pwVar15) {
      FUN_140023dd8(&local_620,0x18);
      puVar12 = (undefined8 *)((longlong)local_620 + 7U & 0xfffffffffffffff8);
      pwVar15 = (wchar_t *)(puVar12 + 2);
    }
    local_5c0 = local_5c0 + 1;
    *(undefined8 **)local_5f0 = puVar12;
    local_5f0 = (wchar_t *)(puVar12 + 1);
    puVar12[1] = 0;
    *puVar12 = &PTR_LAB_14a217b58;
    local_4a5 = local_4a5 & 0xfd;
    local_4a8 = 0;
    local_620 = pwVar15;
    FUN_140048db6();
  }
  else {
    uVar3 = *(ushort *)(local_748 + 0x1c);
    if (local_618 < pwVar15) {
      FUN_140023dd8(&local_620,0x28);
      puVar12 = (undefined8 *)((longlong)local_620 + 7U & 0xfffffffffffffff8);
      pwVar15 = (wchar_t *)(puVar12 + 4);
    }
    local_5c0 = local_5c0 + 1;
    *(undefined8 **)local_5f0 = puVar12;
    local_5f0 = (wchar_t *)(puVar12 + 1);
    puVar12[1] = 0;
    *puVar12 = &PTR_LAB_14a343be8;
    puVar12[2] = lVar10;
    *(uint *)(puVar12 + 3) = (uint)uVar3;
    local_620 = pwVar15 + 0x10;
    if (local_618 < local_620) {
      local_620 = pwVar15;
      FUN_140023dd8(&local_620,0x28);
      pwVar15 = (wchar_t *)((longlong)local_620 + 7U & 0xfffffffffffffff8);
      local_620 = pwVar15 + 0x10;
    }
    local_5c0 = local_5c0 + 1;
    *(wchar_t **)local_5f0 = pwVar15;
    local_5f0 = pwVar15 + 4;
    pwVar15[4] = L'\0';
    pwVar15[5] = L'\0';
    pwVar15[6] = L'\0';
    pwVar15[7] = L'\0';
    *(undefined ***)pwVar15 = &PTR_LAB_14a1fc200;
    pwVar15[8] = L'\0';
    pwVar15[9] = L'\0';
    pwVar15[10] = L'\x02';
    pwVar15[0xb] = L'\0';
    pwVar15[0xc] = L'\x01';
    pwVar15[0xd] = L'\0';
    if ((local_4a5 & 8) != 0) {
      (**(code **)(*DAT_14ca83900 + 0x2a0))(DAT_14ca83900,&local_620,1);
      local_4a5 = local_4a5 & 0xf7;
    }
    puVar12 = (undefined8 *)((longlong)local_620 + 7U & 0xfffffffffffffff8);
    pwVar15 = (wchar_t *)(puVar12 + 2);
    if (local_618 < pwVar15) {
      FUN_140023dd8(&local_620,0x18);
      puVar12 = (undefined8 *)((longlong)local_620 + 7U & 0xfffffffffffffff8);
      pwVar15 = (wchar_t *)(puVar12 + 2);
    }
    local_5c0 = local_5c0 + 1;
    *(undefined8 **)local_5f0 = puVar12;
    local_5f0 = (wchar_t *)(puVar12 + 1);
    puVar12[1] = 0;
    *puVar12 = &PTR_LAB_14a217b58;
    local_4a5 = local_4a5 & 0xfd;
    local_4a8 = 0;
    local_620 = pwVar15;
    FUN_140048db6();
    FUN_143142986(param_1,lVar10 + 0x60,0);
  }
  FUN_143142ce6(param_1);
  if ((*(int *)(param_1 + 0x19d0) != 1) ||
     (auVar9._8_8_ = auStack_730, auVar9._0_8_ = local_738,
     local_728 != (undefined1  [8])*(longlong *)(param_1 + 0x19e4) ||
     auVar9 != *(undefined1 (*) [16])(param_1 + 0x19d4))) {
    *(undefined1 (*) [8])(param_1 + 0x19e4) = local_728;
    *(undefined1 (*) [8])(param_1 + 0x19d4) = local_738;
    *(undefined1 (*) [8])(param_1 + 0x19dc) = auStack_730;
    *(undefined4 *)(param_1 + 0x19d0) = 1;
    (**(code **)(**(longlong **)(param_1 + 0x170) + 0x160))(*(longlong **)(param_1 + 0x170),1);
  }
  *(undefined4 *)(param_1 + 0x4428) = local_764;
  lVar13 = *(longlong *)(param_1 + 0x27b0);
  if (lVar13 != lVar7) {
    *(longlong *)(param_1 + 0x27b0) = lVar7;
    if (lVar7 != 0) {
      LOCK();
      *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
      UNLOCK();
    }
    if (lVar13 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar13 + 8);
      uVar5 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar5 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar13 + 8);
        LOCK();
        uVar5 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar5 >> 0x1e & 1) == 0) {
          bVar2 = *(byte *)(lVar13 + 0xd);
          plVar16 = (longlong *)FUN_14001cc68(0x10,8);
          plVar16[1] = lVar13;
          plVar18 = DAT_14ca843c0;
          plVar17 = DAT_14ca843c8;
          if ((bVar2 & 2) == 0) {
            do {
              *plVar16 = (longlong)plVar18;
              LOCK();
              bVar22 = plVar18 != DAT_14ca843c0;
              plVar17 = plVar16;
              if (bVar22) {
                plVar18 = DAT_14ca843c0;
                plVar17 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar17;
              UNLOCK();
            } while (bVar22);
          }
          else {
            do {
              *plVar16 = (longlong)plVar17;
              LOCK();
              bVar22 = plVar17 != DAT_14ca843c8;
              plVar18 = plVar16;
              if (bVar22) {
                plVar17 = DAT_14ca843c8;
                plVar18 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar18;
              UNLOCK();
            } while (bVar22);
          }
        }
      }
    }
  }
  if (lVar7 != 0) {
    LOCK();
    puVar1 = (uint *)(lVar7 + 8);
    uVar5 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar5 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar7 + 8);
      LOCK();
      uVar5 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar5 >> 0x1e & 1) == 0) {
        bVar2 = *(byte *)(lVar7 + 0xd);
        plVar16 = (longlong *)FUN_14001cc68(0x10,8);
        plVar16[1] = lVar7;
        plVar18 = DAT_14ca843c0;
        plVar17 = DAT_14ca843c8;
        if ((bVar2 & 2) == 0) {
          do {
            *plVar16 = (longlong)plVar18;
            LOCK();
            bVar22 = plVar18 != DAT_14ca843c0;
            plVar17 = plVar16;
            if (bVar22) {
              plVar18 = DAT_14ca843c0;
              plVar17 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar17;
            UNLOCK();
          } while (bVar22);
        }
        else {
          do {
            *plVar16 = (longlong)plVar17;
            LOCK();
            bVar22 = plVar17 != DAT_14ca843c8;
            plVar18 = plVar16;
            if (bVar22) {
              plVar17 = DAT_14ca843c8;
              plVar18 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar18;
            UNLOCK();
          } while (bVar22);
        }
      }
    }
  }
  if ((local_70 ^ (ulonglong)auStack_7a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431488be FUN_1431488be body=1179 status=ok
// SIG undefined FUN_1431488be(void)

void FUN_1431488be(longlong param_1)

{
  undefined8 *puVar1;
  double dVar2;
  DWORD DVar3;
  DWORD DVar4;
  undefined8 uVar5;
  int iVar6;
  undefined4 uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auStack_68 [32];
  LARGE_INTEGER local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((DAT_14ca813bc == 1) && (*(char *)(param_1 + 0x70) == '\x01')) {
    plVar10 = *(longlong **)(*(longlong *)(param_1 + 0x48) + 0x140);
    (**(code **)(*plVar10 + 0xe0))
              (plVar10,*(undefined8 *)
                        (*(longlong *)(param_1 + 0x68) + (longlong)*(int *)(param_1 + 0x54) * 8));
    iVar6 = *(int *)(param_1 + 0x58) + 1;
    if (*(int *)(param_1 + 0x50) <= iVar6) {
      iVar6 = *(int *)(param_1 + 0x50);
    }
    *(int *)(param_1 + 0x58) = iVar6;
    *(undefined1 *)(param_1 + 0x70) = 0;
  }
  uVar7 = 0;
  if ((DAT_14ca813bc & 1) != 0) {
    uVar5 = FUN_143144040(param_1 + 0x38,0);
    auVar12._8_4_ = (int)((ulonglong)uVar5 >> 0x20);
    auVar12._0_8_ = uVar5;
    auVar12._12_4_ = 0x45300000;
    auVar13._8_4_ = (int)((ulonglong)DAT_14ca813c0 >> 0x20);
    auVar13._0_8_ = DAT_14ca813c0;
    auVar13._12_4_ = 0x45300000;
    uVar7 = (undefined4)
            (longlong)
            (((((double)CONCAT44(0x43300000,(int)uVar5) - 4503599627370496.0) +
              (auVar12._8_8_ - 1.9342813113834067e+25)) /
             (((double)CONCAT44(0x43300000,(int)DAT_14ca813c0) - 4503599627370496.0) +
             (auVar13._8_8_ - 1.9342813113834067e+25))) / DAT_14c83f420);
  }
  DAT_14ca84ac0 = uVar7;
  if (*(longlong **)(param_1 + 0x18) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x10))();
  }
  dVar2 = DAT_14c760af8;
  if (*(char *)(param_1 + 10) == '\x01') {
    if (*(char *)(param_1 + 8) == '\x01') {
      DAT_14c867d1c = *(undefined1 *)(param_1 + 0xd);
      FUN_1431da1f8();
      uVar8 = 0;
      DAT_14ca84e99 = 0;
      *(undefined1 *)(param_1 + 10) = 0;
      lVar11 = DAT_14ca83ad0;
      iVar6 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60);
      if (iVar6 != 0x40000002) {
        if ((DAT_14c86a9f8 == '\x01') && (iVar6 != 2)) {
          if (iVar6 == 1) {
            DVar3 = FUN_140ad26c0();
            DVar4 = GetCurrentThreadId();
            uVar8 = (ulonglong)(DVar3 != DVar4);
          }
          else {
            uVar8 = 1;
          }
        }
        else {
          uVar8 = 0;
        }
      }
      dVar2 = DAT_14c760af8;
      if ((*(int *)(lVar11 + uVar8 * 4) != 0) && (*(longlong *)(DAT_14cb0d2b0 + 0xc20) != 0)) {
        plVar10 = (longlong *)(*(longlong *)(DAT_14cb0d2b0 + 0xc20) + 0x38);
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c872ef8) &&
           (FUN_144b3d300(&DAT_14c872ef8), DAT_14c872ef8 == -1)) {
          FUN_1459825b0(&DAT_14c872ee0);
          atexit(FUN_1427868a5);
          _Init_thread_footer(&DAT_14c872ef8);
        }
        (**(code **)(*plVar10 + 8))(plVar10,0,L"SCREENSHOT",&DAT_14c872ee0);
        dVar2 = DAT_14c760af8;
      }
    }
  }
  else if (*(char *)(param_1 + 0xb) == '\x01') {
    QueryPerformanceCounter(&local_48);
    lVar11 = DAT_14ca83b00;
    dVar2 = (double)local_48.QuadPart * DAT_14c83f420 + 16777216.0;
    if (*(char *)(param_1 + 8) == '\x01') {
      iVar6 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60);
      if (((iVar6 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar6 == 2)) {
        uVar8 = 0;
      }
      else if (iVar6 == 1) {
        DVar3 = FUN_140ad26c0();
        DVar4 = GetCurrentThreadId();
        uVar8 = (ulonglong)(DVar3 != DVar4);
      }
      else {
        uVar8 = 1;
      }
      lVar9 = *(longlong *)(param_1 + 0x18);
      if ((DAT_14c760af8 <= 0.0) ||
         ((float)(dVar2 - DAT_14c760af8) <= *(float *)(lVar11 + uVar8 * 4) * 0.001)) {
        if (lVar9 != 0) {
          iVar6 = *(int *)(param_1 + 0x88);
          if (3 < iVar6) {
            FUN_14735dd7a(param_1 + 0x80);
            lVar9 = *(longlong *)(param_1 + 0x18);
            iVar6 = *(int *)(param_1 + 0x88);
          }
          *(uint *)(param_1 + 0x88) = iVar6 + 1U;
          if (*(uint *)(param_1 + 0x8c) < iVar6 + 1U) {
            FUN_1456bd870(param_1 + 0x80,iVar6);
          }
          *(longlong *)(*(longlong *)(param_1 + 0x80) + (longlong)iVar6 * 8) = lVar9;
          *(undefined8 *)(param_1 + 0x18) = 0;
        }
      }
      else if (lVar9 != 0) {
        if (0 < *(int *)(param_1 + 0x88)) {
          lVar11 = 0;
          do {
            FUN_1431da1f8(*(undefined8 *)(*(longlong *)(param_1 + 0x80) + lVar11 * 8));
            lVar11 = lVar11 + 1;
          } while (lVar11 < *(int *)(param_1 + 0x88));
          lVar9 = *(longlong *)(param_1 + 0x18);
        }
        FUN_1431da1f8(lVar9);
        if (*(longlong *)(DAT_14cb0d2b0 + 0xc20) != 0) {
          plVar10 = (longlong *)(*(longlong *)(DAT_14cb0d2b0 + 0xc20) + 0x38);
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14c872ef8) && (FUN_144b3d300(&DAT_14c872ef8), DAT_14c872ef8 == -1)) {
            FUN_1459825b0(&DAT_14c872ee0);
            atexit(FUN_1427868a5);
            _Init_thread_footer(&DAT_14c872ef8);
          }
          (**(code **)(*plVar10 + 8))(plVar10,0,L"SCREENSHOT",&DAT_14c872ee0);
        }
        *(undefined4 *)(param_1 + 0x10) = 5;
        FUN_14735dd1a(param_1 + 0x80);
      }
    }
  }
  DAT_14c760af8 = dVar2;
  *(undefined2 *)(param_1 + 8) = 0;
  puVar1 = *(undefined8 **)(param_1 + 0x18);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  if ((local_40 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143148d5a FUN_143148d5a body=344 status=ok
// SIG undefined FUN_143148d5a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143148d5a(void)

{
  longlong lVar1;
  longlong *plVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong lVar9;
  
  lVar5 = 0;
  iVar6 = 0;
  do {
    uVar8 = (ulonglong)(int)(&DAT_14ca76098)[lVar5 * 4];
    if ((0 < (longlong)uVar8) && (iVar6 < 10)) {
      plVar7 = &DAT_14ca76090 + lVar5 * 2;
      lVar9 = uVar8 << 4;
      uVar3 = DAT_14c7590b0;
      uVar4 = DAT_14c760b00;
      do {
        lVar9 = lVar9 + -0x10;
        lVar1 = *plVar7;
        if (uVar4 < uVar3 - *(int *)(lVar1 + 0xc + lVar9)) {
          LOCK();
          _DAT_14ca84ee8 = _DAT_14ca84ee8 - (ulonglong)*(uint *)(lVar1 + 8 + lVar9);
          UNLOCK();
          plVar2 = *(longlong **)(lVar1 + lVar9);
          if (plVar2 != (longlong *)0x0) {
            *(undefined8 *)(lVar1 + lVar9) = 0;
            (**(code **)(*plVar2 + 0x10))();
          }
          iVar6 = iVar6 + 1;
          FUN_14736a12c(plVar7,(int)uVar8 + -1);
          FUN_14736627c(plVar7);
          uVar3 = DAT_14c7590b0;
          uVar4 = DAT_14c760b00;
        }
      } while ((1 < uVar8) && (uVar8 = uVar8 - 1, iVar6 < 10));
    }
    lVar5 = lVar5 + 1;
  } while (lVar5 != 0x11);
  lVar5 = (ulonglong)DAT_14c7590b0 * 0x110 + ((ulonglong)DAT_14c7590b0 / 3) * -0x330;
  lVar9 = 0;
  do {
    lVar1 = (longlong)&DAT_14ca761a0 + lVar9 + lVar5;
    FUN_14736314e((longlong)&DAT_14ca76090 + lVar9,lVar1);
    iVar6 = *(int *)((longlong)&DAT_14ca761ac + lVar9 + lVar5);
    FUN_14315595f(*(undefined8 *)((longlong)&DAT_14ca761a0 + lVar9 + lVar5),
                  *(undefined4 *)((longlong)&DAT_14ca761a8 + lVar9 + lVar5));
    *(undefined4 *)((longlong)&DAT_14ca761a8 + lVar9 + lVar5) = 0;
    if ((iVar6 < 0) && (*(int *)(lVar1 + 0xc) != 0)) {
      FUN_14736a2c0(lVar1);
    }
    lVar9 = lVar9 + 0x10;
  } while (lVar9 != 0x110);
  return;
}



// FUNCTION 143148eb2 FUN_143148eb2 body=60 status=ok
// SIG undefined FUN_143148eb2(void)

void FUN_143148eb2(longlong param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  FUN_14735aca6(param_1 + 0x58,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143148eef FUN_143148eef body=177 status=ok
// SIG undefined FUN_143148eef(void)

ulonglong FUN_143148eef(undefined8 param_1,longlong *param_2,undefined1 *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 unaff_RSI;
  ulonglong uVar4;
  longlong lVar5;
  
  if (*(char *)((longlong)param_2 + 0x11) == '\0') {
    lVar3 = param_2[1];
    uVar4 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
    if ((longlong)(int)lVar3 != 0) {
      lVar2 = *param_2;
      lVar5 = 0;
      do {
        iVar1 = *(int *)(lVar2 + lVar5);
        if (iVar1 == 0x1002) {
          if (DAT_14ca84df4 != 0x1002) goto LAB_143148f02;
        }
        else if (iVar1 == 0x8086) {
          if (DAT_14ca84df4 != 0x8086) goto LAB_143148f02;
        }
        else if (iVar1 == 0x10de) {
          if (DAT_14ca84df4 != 0x10de) goto LAB_143148f02;
          if (*(char *)(lVar2 + 10 + lVar5) == '\x04') {
            FUN_142500620(param_1,*(undefined2 *)(lVar2 + 6 + lVar5));
            *param_3 = 1;
          }
        }
        lVar5 = lVar5 + 0xc;
      } while ((longlong)(int)lVar3 * 0xc != lVar5);
    }
  }
  else {
LAB_143148f02:
    uVar4 = 0;
  }
  return uVar4 & 0xffffffff;
}



// FUNCTION 143148fa0 FUN_143148fa0 body=494 status=ok
// SIG undefined FUN_143148fa0(void)

void FUN_143148fa0(undefined4 param_1,char *param_2,undefined4 param_3,undefined8 param_4)

{
  size_t sVar1;
  ulonglong uVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  undefined1 *puVar6;
  undefined2 *puVar7;
  undefined1 auStack_2c8 [32];
  wchar_t *local_2a8;
  undefined2 *local_2a0;
  short *local_298;
  undefined4 local_290;
  undefined2 *local_280;
  int local_278;
  undefined1 local_270 [256];
  undefined1 *local_170;
  undefined1 *local_168;
  int local_160;
  short local_158 [128];
  longlong local_58;
  short *local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_2c8;
  FUN_1473635a0(&local_280,param_1,param_4);
  FUN_14314c7f2(param_1,param_4);
  lVar4 = 0;
  FUN_14314c928(param_1,0);
  local_58 = 0;
  local_48 = 0x33;
  do {
    local_158[lVar4] = (short)".\\Runtime/Windows/D3D11RHI/Private/D3D11Shaders.cpp"[lVar4];
    lVar4 = lVar4 + 1;
  } while (lVar4 != 0x34);
  puVar7 = local_280;
  if (local_278 == 0) {
    puVar7 = &DAT_149dfb77a;
  }
  local_170 = (undefined1 *)0x0;
  local_50 = local_158;
  if (param_2 == (char *)0x0) {
    local_168 = (undefined1 *)0x0;
    local_160 = 0;
  }
  else {
    sVar1 = strlen(param_2);
    iVar3 = (int)sVar1;
    uVar5 = iVar3 + 1;
    local_160 = iVar3;
    if (uVar5 < 0x81) {
      puVar6 = (undefined1 *)0x0;
    }
    else {
      FUN_1446efa72(&local_170,0,uVar5,2);
      puVar6 = local_170;
    }
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = local_270;
    }
    local_168 = puVar6;
    if (-1 < iVar3) {
      uVar2 = 0;
      do {
        *(short *)(puVar6 + uVar2 * 2) = (short)param_2[uVar2];
        uVar2 = uVar2 + 1;
      } while (uVar5 != uVar2);
    }
  }
  local_2a8 = L"<unknown>";
  local_2a0 = puVar7;
  local_298 = local_158;
  local_290 = param_3;
  FUN_140033559(".\\Runtime/Windows/D3D11RHI/Private/D3D11Util.cpp",0xdb,
                L"%s failed trying to create shader \'%s\' with error %s\n at %s:%u",local_168);
  if (local_170 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if (local_280 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_2c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143149190 FUN_143149190 body=112 status=ok
// SIG undefined FUN_143149190(void)

void FUN_143149190(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a340f90;
  if ((longlong *)param_1[0x12] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x12] + 0x10))();
  }
  if ((longlong *)param_1[0x11] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x11] + 0x10))();
  }
  if ((longlong *)param_1[0x10] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x10] + 0x10))();
  }
  if ((longlong *)param_1[0xf] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0xf] + 0x10))();
  }
  FUN_147403c1e(param_1 + 2);
  *param_1 = &PTR_FUN_14a37f858;
  return;
}



// FUNCTION 143149200 FUN_143149200 body=684 status=ok
// SIG undefined FUN_143149200(void)

undefined8 *
FUN_143149200(longlong param_1,undefined8 *param_2,longlong param_3,longlong param_4,
             longlong param_5,longlong *param_6)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 uVar11;
  int iVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  longlong *plVar15;
  undefined1 auStack_b8 [32];
  longlong *local_98;
  undefined8 *puStack_90;
  undefined1 local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_98 = (longlong *)0x0;
  puStack_90 = (undefined8 *)0x0;
  puVar13 = (undefined8 *)FUN_147403d87(param_3,param_4,param_5,param_6);
  if (puVar13 == (undefined8 *)0x0) {
    puVar13 = (undefined8 *)FUN_14001cc68(0xa0,0x10);
    plVar15 = *(longlong **)(param_1 + 0x150);
    *(undefined4 *)(puVar13 + 1) = 0;
    *(undefined1 *)((longlong)puVar13 + 0xc) = 0x10;
    *(byte *)((longlong)puVar13 + 0xd) = *(byte *)((longlong)puVar13 + 0xd) | 3;
    *puVar13 = &PTR_FUN_14a340f90;
    local_98 = param_6;
    local_88 = 1;
    puStack_90 = puVar13;
    FUN_147403b22(puVar13 + 2,param_3,param_4,param_5);
    puVar13[0xf] = 0;
    puVar13[0x10] = 0;
    puVar13[0x11] = 0;
    puVar13[0x12] = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    if (param_3 != 0) {
      puStack_90 = puVar13 + 0xf;
      lVar2 = *(longlong *)(param_4 + 0xc0);
      uVar1 = *(uint *)(param_4 + 200);
      *(undefined2 *)(puVar13 + 0xe) = *(undefined2 *)(param_3 + 600);
      uVar4 = *(undefined4 *)(param_3 + 0x238);
      uVar5 = *(undefined4 *)(param_3 + 0x23c);
      uVar6 = *(undefined4 *)(param_3 + 0x240);
      uVar7 = *(undefined4 *)(param_3 + 0x244);
      uVar8 = *(undefined4 *)(param_3 + 0x24c);
      uVar9 = *(undefined4 *)(param_3 + 0x250);
      uVar10 = *(undefined4 *)(param_3 + 0x254);
      *(undefined4 *)(puVar13 + 0xc) = *(undefined4 *)(param_3 + 0x248);
      *(undefined4 *)((longlong)puVar13 + 100) = uVar8;
      *(undefined4 *)(puVar13 + 0xd) = uVar9;
      *(undefined4 *)((longlong)puVar13 + 0x6c) = uVar10;
      *(undefined4 *)(puVar13 + 10) = uVar4;
      *(undefined4 *)((longlong)puVar13 + 0x54) = uVar5;
      *(undefined4 *)(puVar13 + 0xb) = uVar6;
      *(undefined4 *)((longlong)puVar13 + 0x5c) = uVar7;
      iVar12 = 0;
      if (3 < uVar1) {
        iVar12 = *(int *)(lVar2 + -4 + (longlong)(int)uVar1);
      }
      local_98 = (longlong *)(ulonglong)(uVar1 - (iVar12 + *(int *)(param_4 + 0xd0)));
      puVar14 = &local_78;
      if (*(int *)(param_3 + 0x230) != 0) {
        puVar14 = (undefined8 *)(param_3 + 0x10);
      }
      iVar12 = (**(code **)(*plVar15 + 0x58))
                         (plVar15,puVar14,*(int *)(param_3 + 0x230),lVar2 + *(int *)(param_4 + 0xd0)
                         );
      if (iVar12 < 0) {
        local_98 = plVar15;
        FUN_143142730(iVar12,
                      "Direct3DDevice->CreateInputLayout( InVertexDeclaration && InVertexDeclaration->VertexElements.Num() ? InVertexDeclaration->VertexElements.GetData() : &NullInputElement, InVertexDeclaration ? InVertexDeclaration->VertexElements.Num() : 0, &InVertexShader->Code[ InVertexShader->Offset ], VertexShaderCode.GetActualShaderCodeSize() - InVertexShader->Offset, InputLayout.GetInitReference() )"
                      ,".\\Runtime/Windows/D3D11RHI/Private/D3D11Shaders.cpp",0x11c);
      }
    }
    plVar15 = *(longlong **)(param_4 + 0xb8);
    plVar3 = (longlong *)puVar13[0x10];
    if (plVar3 != plVar15) {
      puVar13[0x10] = plVar15;
      if (plVar15 != (longlong *)0x0) {
        (**(code **)(*plVar15 + 8))();
      }
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
    if ((param_5 == 0) || (plVar15 = *(longlong **)(param_5 + 0xb8), plVar15 == (longlong *)0x0)) {
      plVar15 = (longlong *)0x0;
    }
    else {
      (**(code **)(*plVar15 + 8))(plVar15);
    }
    plVar3 = (longlong *)puVar13[0x11];
    puVar13[0x11] = plVar15;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))();
    }
    if ((param_6 == (longlong *)0x0) ||
       (plVar15 = (longlong *)param_6[0x17], plVar15 == (longlong *)0x0)) {
      plVar15 = (longlong *)0x0;
    }
    else {
      (**(code **)(*plVar15 + 8))(plVar15);
    }
    plVar3 = (longlong *)puVar13[0x12];
    puVar13[0x12] = plVar15;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))();
    }
    *(undefined2 *)((longlong)puVar13 + 0x9c) = 0;
    *(undefined4 *)(puVar13 + 0x13) = 0;
    *(undefined1 *)(puVar13 + 0x13) = *(undefined1 *)(param_4 + 0xb0);
    if (param_5 == 0) {
      uVar11 = 0;
    }
    else {
      uVar11 = *(undefined1 *)(param_5 + 0xb0);
    }
    *(undefined1 *)((longlong)puVar13 + 0x9b) = uVar11;
    if (param_6 == (longlong *)0x0) {
      uVar11 = 0;
    }
    else {
      uVar11 = (undefined1)param_6[0x16];
    }
    *(undefined1 *)((longlong)puVar13 + 0x9c) = uVar11;
  }
  else {
    puVar13 = (undefined8 *)*puVar13;
  }
  *param_2 = puVar13;
  if (puVar13 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar13 + 1) = *(int *)(puVar13 + 1) + 1;
    UNLOCK();
  }
  if ((local_50 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431494ad FUN_1431494ad body=41 status=ok
// SIG undefined FUN_1431494ad(void)

void FUN_1431494ad(void)

{
  DAT_14ca76028 = 0;
  if (DAT_14ca76020 != 0) {
    FUN_1400020a8();
  }
  FUN_145d70068();
  return;
}



// FUNCTION 1431494e4 FUN_1431494e4 body=195 status=ok
// SIG undefined FUN_1431494e4(void)

void FUN_1431494e4(longlong param_1,char param_2)

{
  ulonglong *puVar1;
  char cVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 auStack_78 [32];
  longlong local_58 [6];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  puVar1 = (ulonglong *)(param_1 + 0x20);
  (**(code **)(**(longlong **)(param_1 + 0x70) + 0x50))(*(longlong **)(param_1 + 0x70),local_58);
  uVar4 = 0;
  cVar2 = FUN_14490ad04(puVar1,&DAT_149dfb77a,0);
  if (cVar2 != '\0') {
    (**(code **)(*DAT_14ca83900 + 0x180))(DAT_14ca83900,local_58,puVar1,0);
    uVar4 = local_58[0] + 0x3ffU >> 10;
  }
  uVar3 = -uVar4;
  if (param_2 != '\0') {
    uVar3 = uVar4;
  }
  LOCK();
  (&DAT_14ca84eb8)[(*puVar1 & 0x8000020007) != 0] =
       (&DAT_14ca84eb8)[(*puVar1 & 0x8000020007) != 0] + uVar3;
  UNLOCK();
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431495a8 FUN_1431495a8 body=4351 status=ok
// SIG undefined FUN_1431495a8(void)

undefined8 FUN_1431495a8(longlong param_1,ulonglong *param_2,undefined8 *param_3)

{
  ushort uVar1;
  longlong *plVar2;
  longlong *plVar3;
  ulonglong *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  uint uVar14;
  uint uVar15;
  longlong *plVar16;
  undefined1 uVar17;
  uint uVar18;
  longlong lVar19;
  int iVar20;
  longlong lVar21;
  longlong lVar22;
  uint uVar23;
  ulonglong uVar24;
  bool bVar25;
  byte bVar26;
  byte bVar27;
  bool bVar28;
  undefined1 auStack_248 [32];
  undefined8 local_228;
  uint local_220;
  longlong *local_218;
  longlong **local_210;
  undefined4 local_208;
  uint local_200;
  int local_1f8;
  uint local_1f0;
  uint local_1e8;
  uint local_1e0;
  uint local_1d8;
  undefined8 *local_1d0;
  undefined4 local_1c8;
  undefined4 local_1c0;
  longlong *local_1b8;
  byte local_1a5;
  int local_1a4;
  uint local_1a0;
  byte local_19b;
  byte local_19a;
  byte local_199;
  ulonglong local_198;
  undefined8 local_190;
  int local_184;
  int local_180;
  uint local_17c;
  undefined8 *local_178;
  ulonglong local_170;
  ulonglong local_168;
  uint local_15c;
  ulonglong local_158;
  ulonglong local_150;
  undefined4 local_148;
  undefined4 local_144;
  longlong local_140;
  ulonglong local_138;
  ulonglong *local_130;
  longlong local_128;
  undefined4 local_120;
  longlong *local_118;
  undefined4 local_110;
  undefined8 local_108;
  uint uStack_100;
  uint uStack_fc;
  uint uStack_f8;
  uint local_f4;
  longlong *local_f0;
  undefined8 *local_e8;
  undefined8 uStack_e0;
  longlong local_d8;
  undefined8 uStack_d0;
  longlong *local_c8;
  longlong *local_c0;
  uint local_b4;
  uint local_b0;
  undefined4 local_ac;
  uint local_a8;
  int local_a4;
  uint local_a0;
  uint local_9c;
  int local_98;
  uint local_94;
  uint local_90;
  uint local_8c;
  longlong local_88 [5];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_248;
  uVar24 = (ulonglong)*(byte *)((longlong)param_2 + 0x32);
  local_180 = *(byte *)((longlong)param_2 + 0x32) - 3;
  uVar1 = *(ushort *)((longlong)param_2 + 0x2e);
  local_138 = (ulonglong)uVar1;
  uVar23 = *(uint *)((longlong)param_2 + 0x24);
  uVar15 = (uint)param_2[5];
  uVar9 = ((uint)uVar1 + (uint)uVar1) * 3;
  if (1 < (byte)local_180) {
    uVar9 = (uint)uVar1;
  }
  local_190 = (undefined8 *)CONCAT44(local_190._4_4_,uVar9);
  bVar26 = *(byte *)((longlong)param_2 + 0x33);
  local_170 = (ulonglong)bVar26;
  uVar9 = (uint)bVar26;
  local_198 = (ulonglong)(byte)param_2[6];
  local_1a0 = (uint)*(byte *)((longlong)param_2 + 0x31);
  uVar13 = *param_2;
  local_150 = (ulonglong)((uint)bVar26 * 0x30);
  uVar18 = (uint)uVar13;
  iVar6 = *(int *)((longlong)&DAT_14c873434 + local_150);
  local_178 = param_3;
  if ((uVar18 >> 0x19 & 1) == 0) {
    if ((uVar13 & 4) != 0) {
      if (iVar6 == 0x29) {
        iVar6 = 0x27;
      }
      else if (iVar6 == 0x36) {
        iVar6 = 0x35;
      }
    }
  }
  else {
    iVar6 = FUN_147365ff0(iVar6,(uVar18 & 0x10) >> 4);
    uVar9 = (uint)local_170;
  }
  local_1a4 = iVar6;
  if ((uVar13 & 0x10) == 0) {
    if (iVar6 < 0x49) {
      if (iVar6 < 0x2c) {
        if (iVar6 == 0x1b) {
          local_1a4 = 0x1c;
        }
        else if (iVar6 == 0x13) {
LAB_14314a5dc:
          local_1a4 = 0x15;
        }
        else if (iVar6 == 0x27) goto LAB_14314a698;
      }
      else if (iVar6 == 0x46) {
        local_1a4 = 0x47;
      }
      else if (iVar6 == 0x35) {
LAB_14314a607:
        local_1a4 = 0x38;
      }
      else if (iVar6 == 0x2c) {
LAB_14314971b:
        local_1a4 = 0x2e;
      }
    }
    else if (iVar6 < 0x61) {
      if (iVar6 == 0x5a) {
        local_1a4 = 0x57;
      }
      else if (iVar6 == 0x4c) {
        local_1a4 = 0x4d;
      }
      else if (iVar6 == 0x49) {
        local_1a4 = 0x4a;
      }
    }
    else if (iVar6 == 0x61) {
      local_1a4 = 0x62;
    }
  }
  else if (iVar6 < 0x5a) {
    if (iVar6 < 0x46) {
      if (iVar6 < 0x27) {
        if (iVar6 == 0x13) goto LAB_14314a5dc;
        if (iVar6 == 0x1b) {
          local_1a4 = 0x1d;
        }
      }
      else if (iVar6 == 0x27) {
LAB_14314a698:
        local_1a4 = 0x29;
      }
      else {
        if (iVar6 == 0x2c) goto LAB_14314971b;
        if (iVar6 == 0x35) goto LAB_14314a607;
      }
    }
    else if (iVar6 == 0x46) {
      local_1a4 = 0x48;
    }
    else {
      uVar9 = (uint)local_170;
      if (iVar6 == 0x4c) {
        local_1a4 = 0x4e;
      }
      else if (iVar6 == 0x49) {
        local_1a4 = 0x4b;
      }
    }
  }
  else {
    local_1a4 = 0x5b;
    if ((iVar6 != 0x5a) && (local_1a4 = iVar6, iVar6 == 0x61)) {
      local_1a4 = 99;
    }
  }
  local_9c = ((byte)local_1a0 < 9) - 1;
  uVar11 = (ulonglong)local_9c;
  bVar25 = (uVar13 & 0x80020) == 0;
  local_90 = 0x10000;
  if ((uVar13 & 0x20) == 0) {
    local_90 = (uint)(uVar13 >> 2) & 0x20000;
  }
  local_98 = (uint)!bVar25 * 3;
  uVar10 = 0;
  local_ac = (undefined4)local_198;
  local_a8 = (uint)local_190;
  local_a0 = local_1a0;
  uVar14 = (uint)bVar25 << 3;
  local_8c = (uint)((byte)local_180 < 2) << 2;
  if (((((*(char *)(param_1 + 0x17f04) == '\x01') && (local_90 == 0)) &&
       (uVar11 = (ulonglong)(uVar18 & 0x80020), (uVar13 & 0x80020) == 0)) &&
      ((iVar6 == 0x61 && ((char)local_198 == '\x01')))) && ((uint)local_190 == 1)) {
    local_8c = local_8c | 2;
  }
  uVar5 = local_8c;
  bVar26 = uVar9 == 0x43;
  bVar27 = uVar9 == 0x56;
  local_19a = (uVar13 & 0x88020) != 0;
  local_184 = iVar6;
  local_17c = uVar23;
  local_15c = uVar15;
  local_158 = uVar13;
  local_b4 = uVar23;
  local_b0 = uVar15;
  local_a4 = iVar6;
  local_94 = uVar14;
  if ((uVar18 >> 0x19 & 1) != 0) {
    iVar6 = (**(code **)(*DAT_14ca75f10 + 0xb0))();
    uVar9 = (uint)local_170;
    local_8c = 0x100;
    if (iVar6 == 0) {
      local_8c = 2;
    }
    local_8c = local_8c | uVar5;
    uVar11 = (ulonglong)local_8c;
  }
  uVar23 = (uint)local_158;
  uVar15 = 0x20;
  if ((local_158 & 1) == 0) {
    local_144 = (undefined4)CONCAT71((int7)((ulonglong)uVar10 >> 8),1);
    if ((local_158 & 4) == 0) {
      if ((local_158 & 2) == 0) {
        local_144 = 0;
        local_148 = 0;
        goto LAB_1431498f0;
      }
      if ((0x14 < uVar9) || (uVar11 = 0x101800, (0x101800U >> (uVar9 & 0x1f) & 1) == 0))
      goto LAB_1431498e3;
    }
    local_148 = 0;
    uVar15 = 0x40;
  }
  else {
LAB_1431498e3:
    local_148 = (undefined4)CONCAT71((int7)(uVar11 >> 8),1);
    local_144 = 0;
  }
  uVar14 = uVar14 | uVar15;
  local_94 = uVar14;
LAB_1431498f0:
  if ((uVar9 == 0x56) || (uVar9 == 0x43)) {
    local_148 = 0;
  }
  local_199 = (local_158 & 8) == 0 & (byte)local_144;
  if (((uVar23 >> 0x11 & 1) == 0 & (local_199 ^ 1)) == 0) {
    uVar15 = uVar14 + 0x80;
    if ((local_158 & 0x20000) == 0) {
      uVar15 = uVar14;
    }
    local_94 = uVar15 & 0xfffffff7;
    if (local_199 == 0) {
      local_94 = uVar15;
    }
  }
  local_c0 = (longlong *)0x0;
  local_c8 = (longlong *)0x0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_88[2] = 0;
  local_88[3] = 0;
  local_88[0] = 0;
  local_88[1] = 0;
  local_e8 = (undefined8 *)0x0;
  uStack_e0 = 0;
  local_168 = uVar24;
  local_130 = param_2;
  if (*(int *)(local_178 + 1) == 0) {
    if ((longlong *)param_2[9] == (longlong *)0x0) {
      puVar12 = (undefined8 *)0x0;
    }
    else {
      local_19b = bVar27;
      lVar19 = (**(code **)(*(longlong *)param_2[9] + 8))();
      iVar6 = (uint)local_190 * (int)local_198;
      uStack_e0 = CONCAT44(uStack_e0._4_4_,iVar6);
      local_1a5 = bVar26;
      local_140 = param_1;
      if (iVar6 == 0) {
        puVar12 = (undefined8 *)0x0;
      }
      else {
        FUN_147369d12(&local_e8);
        puVar12 = local_e8;
      }
      iVar8 = 0;
      memset(puVar12,0,(ulonglong)(uint)(iVar6 * 0x10));
      uVar24 = local_150;
      if ((uint)local_190 != 0) {
        local_178 = (undefined8 *)((ulonglong)local_190 & 0xffffffff);
        uVar24 = (ulonglong)(uint)((int)local_198 << 4);
        lVar22 = 0;
        puVar12 = (undefined8 *)0x0;
        do {
          local_190 = puVar12;
          if (local_198 == 0) {
            iVar6 = 0;
          }
          else {
            uVar13 = 0;
            lVar21 = 8;
            iVar6 = 0;
            do {
              uVar23 = (((local_17c >> ((byte)uVar13 & 0x1f)) +
                        *(uint *)((longlong)&DAT_14c87341c + local_150)) - 1) /
                       *(uint *)((longlong)&DAT_14c87341c + local_150);
              iVar20 = uVar23 + (uVar23 == 0);
              uVar23 = (((local_15c >> ((byte)uVar13 & 0x1f)) +
                        *(uint *)((longlong)&DAT_14c873420 + local_150)) - 1) /
                       *(uint *)((longlong)&DAT_14c873420 + local_150);
              iVar7 = uVar23 + (uVar23 == 0);
              *(ulonglong *)((longlong)local_e8 + lVar21 + -8 + lVar22) =
                   (ulonglong)(uint)(iVar6 + iVar8) + lVar19;
              *(int *)((longlong)local_e8 + lVar21 + lVar22) =
                   iVar20 * *(int *)((longlong)&DAT_14c873428 + local_150);
              *(int *)((longlong)local_e8 + lVar22 + 4 + lVar21) =
                   iVar7 * iVar20 * *(int *)((longlong)local_e8 + lVar21);
              iVar6 = iVar7 * *(int *)((longlong)local_e8 + lVar21) + iVar6;
              uVar13 = uVar13 + 1;
              lVar21 = lVar21 + 0x10;
            } while (local_198 != uVar13);
          }
          iVar8 = iVar6 + iVar8;
          lVar22 = lVar22 + uVar24;
          puVar12 = (undefined8 *)((longlong)local_190 + 1);
        } while ((undefined8 *)((longlong)local_190 + 1) != local_178);
      }
      local_150 = uVar24;
      uVar23 = (uint)local_158;
      param_1 = local_140;
      puVar12 = local_e8;
      bVar26 = local_1a5;
      bVar27 = local_19b;
    }
  }
  else {
    puVar12 = (undefined8 *)*local_178;
  }
  plVar16 = local_c0;
  uVar24 = local_198;
  bVar26 = bVar26 | bVar27;
  if ((((uVar23 >> 0x1e & 1) == 0) || (DAT_14ca84df4 != 0x8086)) || (DAT_14ca84e0a != '\x01')) {
    if (local_c0 != (longlong *)0x0) {
      local_c0 = (longlong *)0x0;
      (**(code **)(*plVar16 + 0x10))();
    }
    plVar16 = *(longlong **)(param_1 + 0x150);
    iVar6 = (**(code **)(*plVar16 + 0x28))(plVar16,&local_b4,puVar12,&local_c0);
    if (iVar6 < 0) {
      if (puVar12 == (undefined8 *)0x0) {
        local_1c8 = 0;
        local_190 = (undefined8 *)((ulonglong)local_190._4_4_ << 0x20);
        local_178 = (undefined8 *)0x0;
      }
      else {
        local_190 = (undefined8 *)CONCAT44(local_190._4_4_,*(undefined4 *)((longlong)puVar12 + 0xc))
        ;
        local_1c8 = *(undefined4 *)(puVar12 + 1);
        local_178 = (undefined8 *)*puVar12;
      }
      local_1c0 = (uint)local_190;
      local_1d0 = local_178;
      local_1d8 = local_9c;
      local_1e0 = local_a0;
      local_1e8 = local_8c;
      local_1f0 = local_90;
      local_1f8 = local_98;
      local_200 = local_94;
      local_208 = local_ac;
      local_218 = (longlong *)CONCAT44(local_218._4_4_,local_a8);
      local_220 = local_b0;
      local_210 = (longlong **)CONCAT71(local_210._1_7_,(undefined1)local_a4);
      local_228 = CONCAT44(local_228._4_4_,local_b4);
      local_1b8 = plVar16;
      local_1a5 = bVar26;
      FUN_14314adb6(iVar6,local_170,
                    "Direct3DDevice->CreateTexture2D(TextureDesc,SubResourceData,OutTexture2D)",0xb5
                   );
      uVar24 = local_198;
      bVar26 = local_1a5;
    }
  }
  else {
    uStack_100 = 1;
    uStack_fc = 0;
    local_108 = &local_b4;
    if (local_c0 != (longlong *)0x0) {
      local_c0 = (longlong *)0x0;
      (**(code **)(*plVar16 + 0x10))();
    }
    iVar6 = FUN_144bcdc50(*(undefined8 *)(param_1 + 0x2688),&local_108,puVar12,&local_c0);
    if (iVar6 < 0) {
      local_228 = 0;
      FUN_143142730(iVar6,
                    "INTC_D3D11_CreateTexture2D(IntelExtensionContext, &IntelDesc, pSubresourceData, TextureResource.GetInitReference())"
                    ,".\\Runtime/Windows/D3D11RHI/Private/D3D11Texture.cpp",0x19e);
    }
  }
  uVar23 = (uint)uVar24;
  local_1a5 = bVar26 | local_19a;
  uVar15 = 0;
  uVar17 = 0;
  if (((byte)local_148 & (char)uVar24 != '\0') == 1) {
    bVar25 = (byte)local_180 < 2;
    bVar28 = (uint)local_168 == 1;
    uVar13 = local_158 >> 0x18;
    uVar17 = 0;
    do {
      if (((bVar28 || bVar25) & (byte)uVar13 & 1) == 0) {
        uStack_100 = 0;
        uStack_fc = 0;
        uStack_f8 = 0;
        local_108._0_4_ = local_1a4;
        if (((uint)local_168 < 5) && ((0x1aU >> ((uint)local_168 & 0x1f) & 1) != 0)) {
          if ((byte)local_1a0 < 2) {
            local_108._4_4_ = 5;
            uStack_f8 = local_a8;
            uStack_100 = uVar15;
          }
          else {
            local_108._4_4_ = 7;
            uStack_fc = local_a8;
          }
        }
        else if ((byte)local_1a0 < 2) {
          local_108._4_4_ = 4;
          uStack_100 = uVar15;
        }
        else {
          local_108._4_4_ = 6;
        }
        local_f0 = (longlong *)0x0;
        iVar6 = (**(code **)(**(longlong **)(param_1 + 0x150) + 0x48))
                          (*(longlong **)(param_1 + 0x150),local_c0,&local_108,&local_f0);
        if (iVar6 < 0) {
          local_228 = *(undefined8 *)(param_1 + 0x150);
          FUN_143142730(iVar6,
                        "Direct3DDevice->CreateRenderTargetView(TextureResource,&RTVDesc,RenderTargetView.GetInitReference())"
                        ,".\\Runtime/Windows/D3D11RHI/Private/D3D11Texture.cpp",0x1ef);
        }
        uVar11 = uStack_d0;
        lVar19 = (longlong)(int)uStack_d0;
        uVar23 = (int)uStack_d0 + 1;
        uStack_d0 = CONCAT44(uStack_d0._4_4_,uVar23);
        if (uStack_d0._4_4_ < uVar23) {
          FUN_147369d90(&local_d8,uVar11 & 0xffffffff);
        }
        *(longlong **)(local_d8 + lVar19 * 8) = local_f0;
        if (local_f0 != (longlong *)0x0) {
          (**(code **)(*local_f0 + 8))();
          if (local_f0 != (longlong *)0x0) {
            (**(code **)(*local_f0 + 0x10))();
          }
        }
      }
      else {
        uVar17 = 1;
        if (local_a8 != 0) {
          uVar23 = 0;
          do {
            local_108._0_4_ = local_1a4;
            if ((byte)local_1a0 < 2) {
              local_108._4_4_ = 5;
              uStack_100 = uVar15;
              uStack_fc = uVar23;
            }
            else {
              local_108._4_4_ = 7;
              uStack_100 = uVar23;
              uStack_fc = 1;
            }
            uStack_f8 = (uint)((byte)local_1a0 < 2);
            local_f0 = (longlong *)0x0;
            iVar6 = (**(code **)(**(longlong **)(param_1 + 0x150) + 0x48))
                              (*(longlong **)(param_1 + 0x150),local_c0,&local_108,&local_f0);
            if (iVar6 < 0) {
              local_228 = *(undefined8 *)(param_1 + 0x150);
              FUN_143142730(iVar6,
                            "Direct3DDevice->CreateRenderTargetView(TextureResource,&RTVDesc,RenderTargetView.GetInitReference())"
                            ,".\\Runtime/Windows/D3D11RHI/Private/D3D11Texture.cpp",0x1c5);
            }
            uVar24 = uStack_d0;
            lVar19 = (longlong)(int)uStack_d0;
            uVar9 = (int)uStack_d0 + 1;
            uStack_d0 = CONCAT44(uStack_d0._4_4_,uVar9);
            if (uStack_d0._4_4_ < uVar9) {
              FUN_147369d90(&local_d8,uVar24 & 0xffffffff);
            }
            *(longlong **)(local_d8 + lVar19 * 8) = local_f0;
            if ((local_f0 != (longlong *)0x0) &&
               ((**(code **)(*local_f0 + 8))(), local_f0 != (longlong *)0x0)) {
              (**(code **)(*local_f0 + 0x10))();
            }
            uVar23 = uVar23 + 1;
            uVar24 = local_198;
          } while (uVar23 < local_a8);
        }
      }
      uVar15 = uVar15 + 1;
      uVar23 = (uint)uVar24;
    } while (uVar15 != uVar23);
  }
  bVar26 = local_1a5 | local_199;
  if ((char)local_144 != '\0') {
    uStack_fc = 0;
    uStack_f8 = 0;
    local_f4 = 0;
    local_108._0_4_ = local_184;
    if (local_184 < 0x2c) {
      if (local_184 == 0x13) {
        local_108._0_4_ = 0x14;
      }
      else if (local_184 == 0x27) {
        local_108._0_4_ = 0x28;
      }
    }
    else if (local_184 == 0x2c) {
      local_108._0_4_ = 0x2d;
    }
    else if (local_184 == 0x35) {
      local_108._0_4_ = 0x37;
    }
    if (((uint)local_168 < 5) && ((0x1aU >> ((uint)local_168 & 0x1f) & 1) != 0)) {
      if ((byte)local_1a0 < 2) {
        local_108._4_4_ = 4;
        local_f4 = local_a8;
      }
      else {
        local_108._4_4_ = 6;
        uStack_f8 = local_a8;
      }
    }
    else if ((byte)local_1a0 < 2) {
      local_108._4_4_ = 3;
    }
    else {
      local_108._4_4_ = 5;
    }
    plVar16 = local_88;
    uVar24 = 0;
    local_1a5 = local_1a5 | local_199;
    do {
      uStack_100 = (uint)uVar24 & 1;
      if (((int)local_108 == 0x2d) || ((int)local_108 == 0x14)) {
        uStack_100 = uStack_100 + (uint)(1 < uVar24) * 2;
      }
      plVar2 = *(longlong **)(param_1 + 0x150);
      plVar3 = (longlong *)*plVar16;
      if (plVar3 != (longlong *)0x0) {
        *plVar16 = 0;
        (**(code **)(*plVar3 + 0x10))();
      }
      iVar6 = (**(code **)(*plVar2 + 0x50))(plVar2,local_c0,&local_108,plVar16);
      if (iVar6 < 0) {
        local_228 = *(undefined8 *)(param_1 + 0x150);
        FUN_143142730(iVar6,
                      "Direct3DDevice->CreateDepthStencilView(TextureResource,&DSVDesc,DepthStencilViews[AccessType].GetInitReference())"
                      ,".\\Runtime/Windows/D3D11RHI/Private/D3D11Texture.cpp",0x225);
      }
      uVar24 = uVar24 + 1;
      plVar16 = plVar16 + 1;
    } while (uVar24 != 4);
    uVar23 = (uint)local_198;
    bVar26 = local_1a5;
  }
  plVar16 = local_c8;
  if (bVar26 == 0) {
    uStack_100 = 0;
    uStack_fc = 0;
    uStack_f8 = 0;
    local_f4 = 0;
    local_108._0_4_ = local_1a4;
    if ((int)local_168 == 4) {
      local_108._4_4_ = 10;
      local_f4 = (uint)local_138;
      uStack_fc = uVar23;
    }
    else if ((byte)local_180 < 2) {
      local_108._4_4_ = 9;
      uStack_fc = uVar23;
    }
    else if ((int)local_168 == 1) {
      if ((byte)local_1a0 < 2) {
        local_108._4_4_ = 5;
        local_f4 = local_a8;
        uStack_fc = uVar23;
      }
      else {
        local_108._4_4_ = 7;
        uStack_fc = local_a8;
      }
    }
    else if ((byte)local_1a0 < 2) {
      local_108._4_4_ = 4;
      uStack_fc = uVar23;
    }
    else {
      local_108._4_4_ = 6;
    }
    plVar2 = *(longlong **)(param_1 + 0x150);
    if (local_c8 != (longlong *)0x0) {
      local_c8 = (longlong *)0x0;
      (**(code **)(*plVar16 + 0x10))();
    }
    iVar6 = (**(code **)(*plVar2 + 0x38))(plVar2,local_c0,&local_108,&local_c8);
    if (iVar6 < 0) {
      local_228 = *(undefined8 *)(param_1 + 0x150);
      FUN_143142730(iVar6,
                    "Direct3DDevice->CreateShaderResourceView(TextureResource,&SRVDesc,ShaderResourceView.GetInitReference())"
                    ,".\\Runtime/Windows/D3D11RHI/Private/D3D11Texture.cpp",0x260);
    }
  }
  uVar10 = FUN_14001cc68(0xb8,0x10);
  puVar4 = local_130;
  local_118 = local_88;
  local_210 = &local_118;
  local_110 = 4;
  local_218 = &local_128;
  local_128 = local_d8;
  local_120 = (int)uStack_d0;
  local_220 = CONCAT31(local_220._1_3_,uVar17);
  local_228 = CONCAT44(local_228._4_4_,local_a8);
  FUN_14736030e(uVar10,local_130,local_c0,local_c8);
  if ((longlong *)puVar4[9] != (longlong *)0x0) {
    (**(code **)(*(longlong *)puVar4[9] + 0x18))();
  }
  if (local_e8 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  lVar19 = 0x20;
  do {
    if (*(longlong **)((longlong)&local_90 + lVar19) != (longlong *)0x0) {
      (**(code **)(**(longlong **)((longlong)&local_90 + lVar19) + 0x10))();
    }
    lVar19 = lVar19 + -8;
  } while (lVar19 != 0);
  FUN_147369ce2(local_d8,uStack_d0 & 0xffffffff);
  if (local_d8 != 0) {
    FUN_1400020a8();
  }
  if (local_c8 != (longlong *)0x0) {
    (**(code **)(*local_c8 + 0x10))();
  }
  if (local_c0 != (longlong *)0x0) {
    (**(code **)(*local_c0 + 0x10))();
  }
  if ((local_60 ^ (ulonglong)auStack_248) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar10;
}



// FUNCTION 14314a6a8 FUN_14314a6a8 body=1805 status=ok
// SIG undefined FUN_14314a6a8(void)

undefined8 FUN_14314a6a8(longlong param_1,ulonglong *param_2)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  longlong *plVar4;
  ulonglong *puVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  byte bVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  undefined1 auStack_198 [32];
  undefined8 local_178;
  uint local_170;
  int **local_168;
  undefined8 *local_160;
  uint local_158;
  undefined4 local_150;
  undefined4 local_148;
  undefined4 local_140;
  undefined4 local_138;
  undefined4 local_130;
  undefined4 local_128;
  undefined8 local_120;
  undefined4 local_118;
  undefined4 local_110;
  undefined8 local_108;
  int local_f8;
  uint local_f4;
  ulonglong local_f0;
  ulonglong local_e8;
  longlong local_e0;
  ulonglong *local_d8;
  int *local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  longlong *local_b0;
  longlong *local_a8;
  longlong *local_a0;
  undefined8 *local_98;
  undefined8 uStack_90;
  uint local_84;
  uint local_80;
  uint local_7c;
  uint local_78;
  int local_74;
  undefined8 local_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  int local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  uint local_54;
  uint local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_198;
  uVar2 = *(uint *)((longlong)param_2 + 0x24);
  uVar3 = (uint)param_2[5];
  uVar1 = *(ushort *)((longlong)param_2 + 0x2c);
  local_f0 = (ulonglong)*(byte *)((longlong)param_2 + 0x33);
  bVar10 = (byte)param_2[6];
  uVar15 = *param_2;
  uVar16 = (ulonglong)((uint)*(byte *)((longlong)param_2 + 0x33) * 0x30);
  local_74 = *(int *)((longlong)&DAT_14c873434 + uVar16);
  local_f8 = local_74;
  if ((uVar15 & 0x10) == 0) {
    if (local_74 < 0x49) {
      if (local_74 < 0x2c) {
        if (local_74 == 0x1b) {
          local_f8 = 0x1c;
        }
        else if (local_74 == 0x13) {
LAB_14314ad1c:
          local_f8 = 0x15;
        }
        else if (local_74 == 0x27) goto LAB_14314ada6;
      }
      else if (local_74 == 0x46) {
        local_f8 = 0x47;
      }
      else if (local_74 == 0x35) {
LAB_14314ad43:
        local_f8 = 0x38;
      }
      else if (local_74 == 0x2c) {
LAB_14314a77a:
        local_f8 = 0x2e;
      }
    }
    else if (local_74 < 0x61) {
      if (local_74 == 0x5a) {
        local_f8 = 0x57;
      }
      else if (local_74 == 0x4c) {
        local_f8 = 0x4d;
      }
      else if (local_74 == 0x49) {
        local_f8 = 0x4a;
      }
    }
    else if (local_74 == 0x61) {
      local_f8 = 0x62;
    }
  }
  else if (local_74 < 0x5a) {
    if (local_74 < 0x46) {
      if (local_74 < 0x27) {
        if (local_74 == 0x13) goto LAB_14314ad1c;
        if (local_74 == 0x1b) {
          local_f8 = 0x1d;
        }
      }
      else if (local_74 == 0x27) {
LAB_14314ada6:
        local_f8 = 0x29;
      }
      else {
        if (local_74 == 0x2c) goto LAB_14314a77a;
        if (local_74 == 0x35) goto LAB_14314ad43;
      }
    }
    else if (local_74 == 0x46) {
      local_f8 = 0x48;
    }
    else if (local_74 == 0x4c) {
      local_f8 = 0x4e;
    }
    else if (local_74 == 0x49) {
      local_f8 = 0x4b;
    }
  }
  else {
    local_f8 = 0x5b;
    if ((local_74 != 0x5a) && (local_f8 = local_74, local_74 == 0x61)) {
      local_f8 = 99;
    }
  }
  local_7c = (uint)uVar1;
  uVar14 = (uint)bVar10;
  local_70 = 0x800000000;
  uStack_68 = 0;
  uStack_64 = 0;
  uVar12 = (uint)uVar15;
  local_e0 = param_1;
  local_84 = uVar2;
  local_80 = uVar3;
  local_78 = uVar14;
  if ((uVar12 >> 0x19 & 1) != 0) {
    iVar6 = (**(code **)(*DAT_14ca75f10 + 0xb0))();
    uStack_64 = 0x100;
    if (iVar6 == 0) {
      uStack_64 = 2;
    }
  }
  if ((uVar15 & 0x20001) != 0) {
    uVar13 = 0x88;
    if ((uVar15 & 1) != 0) {
      uVar13 = (uVar12 & 0x20000) >> 10 | 0x28;
    }
    local_70 = CONCAT44(uVar13,(undefined4)local_70);
  }
  if ((uVar12 >> 0x13 & 1) != 0) {
    uStack_68 = 0x20000;
    local_70 = 3;
  }
  local_98 = (undefined8 *)0x0;
  uStack_90 = 0;
  local_f4 = uVar14;
  local_e8 = uVar15;
  local_d8 = param_2;
  if ((longlong *)param_2[9] != (longlong *)0x0) {
    lVar7 = (**(code **)(*(longlong *)param_2[9] + 8))();
    uVar14 = (uint)bVar10;
    uStack_90 = CONCAT44(uStack_90._4_4_,uVar14);
    uVar15 = 0;
    if (uVar14 != 0) {
      FUN_147369d12(&local_98);
      memset(local_98,0,(ulonglong)bVar10 << 4);
      lVar8 = 0;
      uVar11 = 0;
      do {
        bVar10 = (byte)uVar11;
        uVar12 = uVar2 >> (bVar10 & 0x1f);
        *(ulonglong *)((longlong)local_98 + lVar8) = uVar15 + lVar7;
        uVar13 = uVar3 >> (bVar10 & 0x1f);
        *(uint *)((longlong)local_98 + lVar8 + 8) =
             (uVar12 + (uVar12 == 0)) * *(int *)((longlong)&DAT_14c873428 + uVar16);
        uVar12 = (uint)(uVar1 >> (bVar10 & 0x1f));
        *(uint *)((longlong)local_98 + lVar8 + 0xc) =
             (uVar13 + (uVar13 == 0)) * *(int *)((longlong)local_98 + lVar8 + 8);
        uVar15 = (ulonglong)
                 ((int)uVar15 +
                 (uVar12 + (uVar12 == 0)) * *(int *)((longlong)local_98 + lVar8 + 0xc));
        uVar11 = uVar11 + 1;
        lVar8 = lVar8 + 0x10;
        puVar17 = local_98;
      } while (uVar14 != uVar11);
      goto LAB_14314a93f;
    }
  }
  puVar17 = (undefined8 *)0x0;
LAB_14314a93f:
  puVar5 = local_d8;
  lVar7 = local_e0;
  local_a0 = (longlong *)0x0;
  if (local_d8[9] == 0) {
    puVar17 = (undefined8 *)0x0;
  }
  iVar6 = (**(code **)(**(longlong **)(local_e0 + 0x150) + 0x30))
                    (*(longlong **)(local_e0 + 0x150),&local_84);
  if (iVar6 < 0) {
    local_108 = *(undefined8 *)(lVar7 + 0x150);
    if (puVar17 == (undefined8 *)0x0) {
      local_118 = 0;
      local_110 = 0;
      local_120 = 0;
    }
    else {
      local_110 = *(undefined4 *)((longlong)puVar17 + 0xc);
      local_118 = *(undefined4 *)(puVar17 + 1);
      local_120 = *puVar17;
    }
    local_128 = 0;
    local_130 = 0;
    local_138 = uStack_64;
    local_140 = uStack_68;
    local_148 = (undefined4)local_70;
    local_150 = local_70._4_4_;
    local_158 = local_f4;
    local_160 = (undefined8 *)CONCAT71(local_160._1_7_,(char)local_f8);
    local_168 = (int **)CONCAT44(local_168._4_4_,(uint)uVar1);
    local_178 = CONCAT44(local_178._4_4_,uVar2);
    local_170 = uVar3;
    FUN_14314adb6(iVar6,local_f0,
                  "Direct3DDevice->CreateTexture3D(&TextureDesc, SubResData,TextureResource.GetInitReference())"
                  ,0x2ea);
  }
  uVar15 = local_e8;
  local_a8 = (longlong *)0x0;
  if ((local_e8 & 0x88000) == 0) {
    local_60 = local_f8;
    uStack_5c = 8;
    uStack_58 = 0;
    local_54 = local_f4;
    iVar6 = (**(code **)(**(longlong **)(lVar7 + 0x150) + 0x38))
                      (*(longlong **)(lVar7 + 0x150),local_a0,&local_60,&local_a8);
    if (iVar6 < 0) {
      local_178 = *(undefined8 *)(lVar7 + 0x150);
      FUN_143142730(iVar6,
                    "Direct3DDevice->CreateShaderResourceView(TextureResource,&SRVDesc,ShaderResourceView.GetInitReference())"
                    ,".\\Runtime/Windows/D3D11RHI/Private/D3D11Texture.cpp",0x2f5);
    }
  }
  local_b0 = (longlong *)0x0;
  if ((uVar15 & 1) != 0) {
    local_60 = local_f8;
    uStack_5c = 8;
    uStack_58 = 0;
    local_54 = 0;
    local_50 = (uint)uVar1;
    iVar6 = (**(code **)(**(longlong **)(lVar7 + 0x150) + 0x48))
                      (*(longlong **)(lVar7 + 0x150),local_a0,&local_60,&local_b0);
    if (iVar6 < 0) {
      local_178 = *(undefined8 *)(lVar7 + 0x150);
      FUN_143142730(iVar6,
                    "Direct3DDevice->CreateRenderTargetView(TextureResource,&RTVDesc,RenderTargetView.GetInitReference())"
                    ,".\\Runtime/Windows/D3D11RHI/Private/D3D11Texture.cpp",0x304);
    }
  }
  plVar4 = local_b0;
  uVar9 = FUN_14001cc68(0xb8,0x10);
  local_c0 = 0;
  local_b8 = 0;
  local_60 = (int)plVar4;
  uStack_5c = (undefined4)((ulonglong)plVar4 >> 0x20);
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 8))(plVar4);
  }
  local_d0 = &local_60;
  local_168 = &local_d0;
  local_c8 = 1;
  local_160 = &local_c0;
  local_178 = CONCAT44(local_178._4_4_,1);
  local_170 = local_170 & 0xffffff00;
  FUN_14736030e(uVar9,puVar5,local_a0,local_a8);
  if ((longlong *)CONCAT44(uStack_5c,local_60) != (longlong *)0x0) {
    (**(code **)(*(longlong *)CONCAT44(uStack_5c,local_60) + 0x10))();
  }
  plVar4 = (longlong *)puVar5[9];
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x18))();
  }
  if (local_b0 != (longlong *)0x0) {
    (**(code **)(*local_b0 + 0x10))();
  }
  if (local_a8 != (longlong *)0x0) {
    (**(code **)(*local_a8 + 0x10))();
  }
  if (local_a0 != (longlong *)0x0) {
    (**(code **)(*local_a0 + 0x10))();
  }
  if (local_98 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9;
}



// FUNCTION 14314adb6 FUN_14314adb6 body=1092 status=ok
// SIG undefined FUN_14314adb6(void)

void FUN_14314adb6(undefined4 param_1,undefined4 param_2,char *param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7,byte param_8,
                  undefined4 param_9,byte param_10,undefined4 param_11,undefined4 param_12,
                  undefined4 param_13,undefined4 param_14,undefined4 param_15,undefined8 param_16,
                  undefined4 param_17,undefined4 param_18,undefined8 param_19)

{
  longlong *plVar1;
  size_t sVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined2 *puVar5;
  uint uVar6;
  undefined1 *puVar7;
  undefined2 *puVar8;
  int iVar9;
  undefined1 auStack_368 [32];
  undefined2 *local_348;
  longlong *local_340;
  undefined4 local_338;
  undefined4 local_330;
  undefined4 local_328;
  undefined4 local_320;
  undefined4 local_318;
  undefined8 local_310;
  uint local_308;
  undefined4 local_300;
  undefined2 *local_2f8;
  undefined4 local_2f0;
  undefined4 local_2e8;
  undefined4 local_2e0;
  undefined4 local_2d8;
  undefined4 local_2d0;
  undefined8 local_2c8;
  undefined4 local_2c0;
  undefined4 local_2b8;
  undefined4 local_2b0;
  undefined4 local_2ac;
  undefined8 local_2a8;
  longlong local_2a0;
  undefined2 *local_298;
  int local_290;
  undefined2 *local_288;
  int local_280;
  undefined1 local_278 [256];
  undefined1 *local_178;
  undefined1 *local_170;
  int local_168;
  longlong local_160 [32];
  longlong local_60;
  longlong *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_368;
  local_2b0 = param_2;
  local_2ac = param_4;
  FUN_1473635a0(&local_288,param_1,0);
  local_2a8 = FUN_147123c33(param_8);
  plVar1 = TlsGetValue(DAT_14c874b64);
  lVar3 = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))(plVar1,local_160);
    lVar3 = local_160[0];
  }
  FUN_14314c7f2(param_1,param_19);
  FUN_14314c928(param_1,1);
  FUN_140056680(&local_298,&DAT_149dfb77a);
  if ((param_10 & 0x20) != 0) {
    FUN_1400020e8(&local_298,L"D3D11_BIND_RENDER_TARGET ",0x19);
  }
  if ((param_10 & 0x40) != 0) {
    FUN_1400020e8(&local_298,L"D3D11_BIND_DEPTH_STENCIL ",0x19);
  }
  if ((param_10 & 8) != 0) {
    FUN_1400020e8(&local_298,L"D3D11_BIND_SHADER_RESOURCE ",0x1b);
  }
  local_2a0 = lVar3;
  if ((char)param_10 < '\0') {
    FUN_1400020e8(&local_298,L"D3D11_BIND_UNORDERED_ACCESS ",0x1c);
  }
  local_60 = 0;
  local_50 = 0x33;
  lVar3 = 0;
  do {
    *(short *)((longlong)local_160 + lVar3 * 2) =
         (short)".\\Runtime/Windows/D3D11RHI/Private/D3D11Texture.cpp"[lVar3];
    lVar3 = lVar3 + 1;
  } while (lVar3 != 0x34);
  puVar5 = local_298;
  if (local_290 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  puVar8 = &DAT_149dfb77a;
  if (local_280 != 0) {
    puVar8 = local_288;
  }
  local_178 = (undefined1 *)0x0;
  local_58 = local_160;
  if (param_3 == (char *)0x0) {
    local_170 = (undefined1 *)0x0;
    local_168 = 0;
  }
  else {
    sVar2 = strlen(param_3);
    iVar9 = (int)sVar2;
    uVar6 = iVar9 + 1;
    local_168 = iVar9;
    if (uVar6 < 0x81) {
      puVar7 = (undefined1 *)0x0;
    }
    else {
      FUN_1446efa72(&local_178,0,uVar6,2);
      puVar7 = local_178;
    }
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = local_278;
    }
    local_170 = puVar7;
    if (-1 < iVar9) {
      uVar4 = 0;
      do {
        *(short *)(puVar7 + uVar4 * 2) = (short)param_3[uVar4];
        uVar4 = uVar4 + 1;
      } while (uVar6 != uVar4);
    }
  }
  local_2b8 = param_18;
  local_2c0 = param_17;
  local_2c8 = param_16;
  local_2d0 = param_15;
  local_2d8 = param_14;
  local_2e0 = param_13;
  local_2f0 = param_11;
  local_300 = param_9;
  local_310 = local_2a8;
  local_318 = local_2b0;
  local_320 = param_7;
  local_328 = param_6;
  local_330 = param_5;
  local_338 = local_2ac;
  local_348 = puVar8;
  local_340 = local_160;
  local_308 = (uint)param_8;
  local_2f8 = puVar5;
  local_2e8 = param_12;
  FUN_140033559(".\\Runtime/Windows/D3D11RHI/Private/D3D11Util.cpp",0x11f,
                L"%s failed with error %s\n at %s:%u\n Size=%ix%ix%i PF=%d Format=%s(0x%08X), NumMips=%i, Flags=%s, Usage:0x%x, CPUFlags:0x%x, MiscFlags:0x%x, SampleCount:0x%x, SampleQuality:0x%x, SubresPtr:0x%p, SubresPitch:%i, SubresSlicePitch:%i"
                ,local_170);
  if (local_178 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  lVar3 = local_2a0;
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  if (local_298 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (lVar3 != 0) {
    FUN_1400020a8(lVar3);
  }
  if (local_288 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_368) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14314b1fc FUN_14314b1fc body=894 status=ok
// SIG undefined FUN_14314b1fc(void)

longlong *
FUN_14314b1fc(longlong param_1,longlong *param_2,uint param_3,uint param_4,byte param_5,uint param_6
             ,undefined8 param_7,undefined8 param_8,longlong param_9,uint param_10,
             undefined8 param_11,longlong *param_12)

{
  int *piVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  void *_Dst;
  undefined1 *puVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  undefined8 uVar13;
  undefined1 auStack_1c8 [44];
  uint local_19c;
  longlong local_198;
  longlong *local_190;
  undefined1 *local_188;
  undefined4 local_180;
  undefined8 local_178;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  uint local_15c;
  undefined4 local_158;
  undefined8 local_154;
  undefined4 local_14c;
  undefined1 local_148;
  undefined2 local_147;
  byte local_145;
  undefined2 local_144;
  undefined4 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined1 local_118 [192];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  local_58 = (undefined1 *)0x0;
  local_50 = 0xc00000000;
  local_198 = param_1;
  local_190 = param_2;
  FUN_1473604cc();
  if (param_10 != 0) {
    uVar8 = (ulonglong)((uint)param_5 * 0x30);
    lVar10 = 0;
    do {
      uVar6 = (((param_3 >> ((byte)lVar10 & 0x1f)) + *(uint *)((longlong)&DAT_14c87341c + uVar8)) -
              1) / *(uint *)((longlong)&DAT_14c87341c + uVar8);
      iVar11 = uVar6 + (uVar6 == 0);
      uVar6 = (((param_4 >> ((byte)lVar10 & 0x1f)) + *(uint *)((longlong)&DAT_14c873420 + uVar8)) -
              1) / *(uint *)((longlong)&DAT_14c873420 + uVar8);
      puVar9 = local_58;
      if (local_58 == (undefined1 *)0x0) {
        puVar9 = local_118;
      }
      lVar12 = (longlong)(int)lVar10 * 0x10;
      *(undefined8 *)(puVar9 + lVar12) = *(undefined8 *)(param_9 + lVar10 * 8);
      puVar9 = local_58;
      if (local_58 == (undefined1 *)0x0) {
        puVar9 = local_118;
      }
      *(int *)(puVar9 + lVar12 + 8) = iVar11 * *(int *)((longlong)&DAT_14c873428 + uVar8);
      puVar9 = local_58;
      if (local_58 == (undefined1 *)0x0) {
        puVar9 = local_118;
      }
      *(uint *)(puVar9 + lVar12 + 0xc) =
           (uVar6 + (uVar6 == 0)) * iVar11 * *(int *)((longlong)&DAT_14c873428 + uVar8);
      lVar10 = lVar10 + 1;
    } while (param_10 != (uint)lVar10);
  }
  _Dst = *(void **)(local_198 + 0x26b8);
  uVar6 = *(uint *)(local_198 + 0x26c0);
  local_19c = param_3;
  if (param_10 < param_6) {
    uVar8 = (ulonglong)((uint)param_5 * 0x30);
    do {
      uVar7 = (((local_19c >> ((byte)param_10 & 0x1f)) + *(uint *)((longlong)&DAT_14c87341c + uVar8)
               ) - 1) / *(uint *)((longlong)&DAT_14c87341c + uVar8);
      iVar11 = uVar7 + (uVar7 == 0);
      uVar7 = (((param_4 >> ((byte)param_10 & 0x1f)) + *(uint *)((longlong)&DAT_14c873420 + uVar8))
              - 1) / *(uint *)((longlong)&DAT_14c873420 + uVar8);
      uVar7 = (uVar7 + (uVar7 == 0)) * iVar11 * *(int *)((longlong)&DAT_14c873428 + uVar8);
      if (uVar6 < uVar7) {
        _Dst = (void *)FUN_14001cc68((ulonglong)uVar7);
        memset(_Dst,0,(ulonglong)uVar7);
        uVar6 = uVar7;
      }
      puVar9 = local_58;
      if (local_58 == (undefined1 *)0x0) {
        puVar9 = local_118;
      }
      lVar10 = (longlong)(int)param_10 * 0x10;
      *(void **)(puVar9 + lVar10) = _Dst;
      puVar9 = local_58;
      if (local_58 == (undefined1 *)0x0) {
        puVar9 = local_118;
      }
      *(int *)(puVar9 + lVar10 + 8) = iVar11 * *(int *)((longlong)&DAT_14c873428 + uVar8);
      puVar9 = local_58;
      if (local_58 == (undefined1 *)0x0) {
        puVar9 = local_118;
      }
      *(uint *)(puVar9 + lVar10 + 0xc) = uVar7;
      param_10 = param_10 + 1;
    } while (param_6 != param_10);
  }
  uVar4 = DAT_14ca85088;
  bVar3 = (byte)DAT_14c760da4 & 0x1f;
  uVar13 = CONCAT44(param_4,local_19c);
  local_16c = DAT_14ca8508c;
  uStack_168 = DAT_14ca85090;
  uStack_164 = DAT_14ca85094;
  uStack_160 = DAT_14ca85098;
  local_140 = FUN_1431edf91(param_7,0);
  local_178 = param_7;
  local_145 = param_5;
  local_144 = 0xff00;
  local_14c = 0x10001;
  local_148 = (undefined1)param_6;
  local_147 = 1;
  local_170 = uVar4;
  local_158 = 0;
  local_138 = param_11;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_188 = local_118;
  if (local_58 != (undefined1 *)0x0) {
    local_188 = local_58;
  }
  local_180 = (undefined4)local_50;
  local_15c = ~(-1 << bVar3);
  local_154 = uVar13;
  lVar10 = FUN_1431495a8(local_198,&local_178);
  plVar5 = local_190;
  *local_190 = lVar10;
  if (lVar10 != 0) {
    LOCK();
    *(int *)(lVar10 + 8) = *(int *)(lVar10 + 8) + 1;
    UNLOCK();
  }
  if (uVar6 != *(uint *)(local_198 + 0x26c0)) {
    FUN_1400020a8(_Dst);
  }
  puVar2 = (undefined8 *)*param_12;
  if (puVar2 != (undefined8 *)0x0) {
    *param_12 = 0;
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return plVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14314b57c FUN_14314b57c body=1684 status=ok
// SIG undefined FUN_14314b57c(void)

longlong FUN_14314b57c(longlong *param_1,longlong param_2,int param_3,int param_4,int param_5,
                      int *param_6,char param_7,ulonglong *param_8)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  ushort uVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  uint uVar11;
  uint uVar12;
  undefined2 *puVar13;
  uint uVar14;
  int iVar15;
  undefined1 auStack_188 [32];
  ulonglong local_168;
  longlong *local_160;
  longlong local_158;
  int local_150;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 local_138;
  undefined4 local_130;
  undefined4 local_128;
  undefined4 local_120;
  undefined4 local_118;
  undefined8 local_110;
  undefined4 local_108;
  undefined4 local_100;
  undefined8 local_f8;
  int local_e4;
  longlong local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  longlong local_c8;
  undefined2 *local_c0;
  int local_b8;
  longlong local_b0;
  int local_a8;
  longlong *local_a0;
  longlong *local_98;
  int local_90;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  undefined2 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined2 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_e0 = param_2;
  lVar4 = (**(code **)(*param_1 + 8))();
  local_e4 = (uint)*(byte *)(lVar4 + 0x30) * param_4;
  lVar4 = (**(code **)(*param_1 + 8))(param_1);
  uVar11 = *(uint *)((longlong)&DAT_14c87341c + (ulonglong)((uint)*(byte *)(lVar4 + 0x33) * 0x30));
  lVar4 = (**(code **)(*param_1 + 8))(param_1);
  uVar1 = *(uint *)((longlong)&DAT_14c873420 + (ulonglong)((uint)*(byte *)(lVar4 + 0x33) * 0x30));
  lVar4 = (**(code **)(*param_1 + 8))(param_1);
  iVar15 = *(int *)((longlong)&DAT_14c873428 + (ulonglong)((uint)*(byte *)(lVar4 + 0x33) * 0x30));
  lVar4 = (**(code **)(*param_1 + 8))(param_1);
  uVar14 = *(uint *)(lVar4 + 0x24) >> ((byte)param_3 & 0x1f);
  if (uVar14 < uVar11) {
    uVar14 = uVar11;
  }
  lVar5 = (**(code **)(*param_1 + 8))(param_1);
  lVar4 = local_e0;
  uVar12 = *(uint *)(lVar5 + 0x28) >> ((byte)param_3 & 0x1f);
  if (uVar12 < uVar1) {
    uVar12 = uVar1;
  }
  iVar15 = (((uVar11 + uVar14) - 1) / uVar11) * iVar15;
  uVar9 = (ulonglong)((((uVar12 + uVar1) - 1) / uVar1) * iVar15);
  if (param_8 != (ulonglong *)0x0) {
    *param_8 = uVar9;
  }
  param_3 = local_e4 + param_3;
  local_98 = (longlong *)0x0;
  local_80 = 0;
  if (param_5 == 1) {
    if ((param_7 != '\0') || ((*(byte *)(param_1 + 4) & 0x20) == 0)) {
      uStack_88 = FUN_14001cc68(uVar9,0x10);
      *param_6 = iVar15;
      local_80 = 0x101;
      lVar5 = uStack_88;
      local_90 = iVar15;
      goto LAB_14314ba33;
    }
    local_160 = &local_78;
    local_168 = local_168 & 0xffffffff00000000;
    iVar15 = (**(code **)(**(longlong **)(local_e0 + 0x140) + 0x70))
                       (*(longlong **)(local_e0 + 0x140),param_1[0xe],param_3,2);
    if (iVar15 < 0) {
      local_168 = *(ulonglong *)(lVar4 + 0x150);
      FUN_143142730(iVar15,
                    "D3DRHI->GetDeviceContext()->Map(GetResource(), Subresource, D3D11_MAP_WRITE, 0, &MappedTexture)"
                    ,".\\Runtime/Windows/D3D11RHI/Private/D3D11Texture.cpp",0x426);
    }
    uStack_88 = local_78;
    *param_6 = (int)uStack_70;
    local_90 = (int)uStack_70;
  }
  else {
    (**(code **)(*(longlong *)param_1[0xe] + 0x50))((longlong *)param_1[0xe],&local_78);
    lVar4 = local_e0;
    local_78 = CONCAT44(uVar12,uVar14);
    uStack_70 = &DAT_100000001;
    local_5c = 3;
    uStack_58 = 0;
    uStack_54 = 0x20000;
    uStack_50 = 0;
    local_a0 = (longlong *)0x0;
    iVar15 = (**(code **)(**(longlong **)(local_e0 + 0x150) + 0x28))
                       (*(longlong **)(local_e0 + 0x150),&local_78,0);
    if (iVar15 < 0) {
      local_c8 = param_1[2];
      FUN_1400021e4(&local_c8,&local_c0);
      puVar13 = local_c0;
      if (local_b8 == 0) {
        puVar13 = &DAT_149dfb77a;
      }
      FUN_140002266(&local_b0,L"%s_Staging",puVar13);
      uVar3 = *(undefined8 *)(lVar4 + 0x150);
      local_cc = local_60;
      local_d0 = uStack_50;
      local_d4 = uStack_54;
      local_d8 = local_5c;
      local_e4 = CONCAT31(local_e4._1_3_,(undefined1)local_68);
      if (*(code **)(*param_1 + 8) == FUN_1447d3e98) {
        plVar7 = param_1 + 4;
      }
      else {
        plVar7 = (longlong *)(**(code **)(*param_1 + 8))(param_1);
      }
      uVar11 = 0;
      uVar8 = 1;
      switch(*(undefined1 *)((longlong)plVar7 + 0x32)) {
      case 0:
      case 3:
        break;
      case 1:
      case 4:
        uVar8 = *(ushort *)((longlong)plVar7 + 0x2e);
        break;
      case 2:
        uVar8 = *(ushort *)((longlong)plVar7 + 0x2c);
        break;
      default:
        goto switchD_14314b84b_default;
      }
      uVar11 = (uint)uVar8;
switchD_14314b84b_default:
      lVar4 = (**(code **)(*param_1 + 8))(param_1);
      uVar2 = *(undefined4 *)(lVar4 + 0x28);
      lVar4 = (**(code **)(*param_1 + 8))(param_1);
      local_100 = 0;
      local_108 = 0;
      local_118 = local_cc;
      local_120 = local_64;
      local_128 = local_d0;
      local_130 = local_d4;
      local_138 = local_d8;
      local_140 = 0;
      local_150 = CONCAT31(local_150._1_3_,(undefined1)local_e4);
      local_158 = CONCAT44(local_158._4_4_,uVar11);
      local_160 = (longlong *)CONCAT44(local_160._4_4_,uVar2);
      local_168 = CONCAT44(local_168._4_4_,*(undefined4 *)(lVar4 + 0x24));
      local_110 = 0;
      local_148 = CONCAT44(local_148._4_4_,1);
      local_f8 = uVar3;
      FUN_14314adb6(iVar15,*(undefined1 *)((longlong)param_1 + 0x53),
                    "D3DRHI->GetDevice()->CreateTexture2D(&StagingTextureDesc,NULL,StagingTexture.GetInitReference())"
                    ,0x456);
      if (local_b0 != 0) {
        FUN_1400020a8();
      }
      lVar4 = local_e0;
      if (local_c0 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
    }
    plVar7 = local_98;
    if (local_98 != local_a0) {
      local_98 = local_a0;
      if (local_a0 != (longlong *)0x0) {
        (**(code **)(*local_a0 + 8))();
      }
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
    local_158 = param_1[0xe];
    local_160 = (longlong *)((ulonglong)local_160 & 0xffffffff00000000);
    local_168 = local_168 & 0xffffffff00000000;
    local_148 = 0;
    local_150 = param_3;
    (**(code **)(**(longlong **)(lVar4 + 0x140) + 0x170))
              (*(longlong **)(lVar4 + 0x140),local_a0,0,0);
    local_160 = &local_b0;
    local_168 = local_168 & 0xffffffff00000000;
    iVar15 = (**(code **)(**(longlong **)(lVar4 + 0x140) + 0x70))
                       (*(longlong **)(lVar4 + 0x140),local_a0,0,1);
    if (iVar15 < 0) {
      local_168 = *(ulonglong *)(lVar4 + 0x150);
      FUN_143142730(iVar15,
                    "D3DRHI->GetDeviceContext()->Map(StagingTexture,0,D3D11_MAP_READ,0,&MappedTexture)"
                    ,".\\Runtime/Windows/D3D11RHI/Private/D3D11Texture.cpp",0x45e);
    }
    uStack_88 = local_b0;
    *param_6 = local_a8;
    local_90 = local_a8;
    lVar5 = local_b0;
    if (local_a0 != (longlong *)0x0) {
      (**(code **)(*local_a0 + 0x10))();
    }
LAB_14314ba33:
    plVar7 = local_98;
    if (param_7 != '\0') {
      if (local_98 != (longlong *)0x0) {
        (**(code **)(*local_98 + 8))(local_98);
      }
      local_68 = local_80;
      local_78 = CONCAT44(uStack_8c,local_90);
      uStack_70._0_4_ = (int)uStack_88;
      uStack_70._4_4_ = uStack_88._4_4_;
      puVar6 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
      puVar10 = puVar6 + 9;
      if (DAT_14ca85108 < puVar10) {
        FUN_140023dd8(&DAT_14ca85100,0x50);
        puVar6 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
        puVar10 = puVar6 + 9;
      }
      DAT_14ca85160 = DAT_14ca85160 + 1;
      DAT_14ca85100 = puVar10;
      *DAT_14ca85130 = puVar6;
      DAT_14ca85130 = puVar6 + 1;
      puVar6[1] = 0;
      *puVar6 = &PTR_FUN_14a343c00;
      puVar6[2] = param_1;
      *(int *)(puVar6 + 3) = param_3;
      puVar6[4] = plVar7;
      *(undefined4 *)(puVar6 + 5) = (undefined4)local_78;
      *(undefined4 *)((longlong)puVar6 + 0x2c) = local_78._4_4_;
      *(int *)(puVar6 + 6) = (int)uStack_70;
      *(undefined4 *)((longlong)puVar6 + 0x34) = uStack_70._4_4_;
      *(undefined2 *)(puVar6 + 7) = local_68;
      puVar6[8] = lVar4;
      goto LAB_14314bb12;
    }
  }
  local_78 = param_1[0xe];
  uStack_70._0_4_ = param_3;
  FUN_147355018(lVar4,&local_78,&local_98);
  lVar5 = uStack_88;
  plVar7 = local_98;
LAB_14314bb12:
  if (plVar7 != (longlong *)0x0) {
    (**(code **)(*plVar7 + 0x10))(plVar7);
  }
  if ((local_48 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar5;
}



// FUNCTION 14314bc12 FUN_14314bc12 body=264 status=ok
// SIG undefined FUN_14314bc12(void)

void FUN_14314bc12(longlong *param_1,longlong param_2,int param_3,int param_4)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_68;
  longlong local_60;
  int local_58;
  longlong *local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined2 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = (**(code **)(*param_1 + 8))();
  param_3 = (uint)*(byte *)(lVar1 + 0x30) * param_4 + param_3;
  local_50 = (longlong *)0x0;
  local_38 = 0;
  local_60 = param_1[0xe];
  local_58 = param_3;
  FUN_14735519e(param_2,&local_60,&local_50);
  if ((local_38._1_1_ == '\0') && ((*(byte *)(param_1 + 4) & 0x20) != 0)) {
    plVar2 = *(longlong **)(param_2 + 0x140);
    plVar3 = (longlong *)param_1[0xe];
  }
  else {
    plVar2 = *(longlong **)(param_2 + 0x140);
    plVar3 = local_50;
    if (local_50 == (longlong *)0x0) {
      local_70 = local_48;
      local_78 = local_40;
      local_68 = 0;
      (**(code **)(*plVar2 + 0x180))(plVar2,param_1[0xe],param_3,0);
      FUN_1400020a8(local_40);
      local_40 = 0;
      goto LAB_14314bce9;
    }
  }
  (**(code **)(*plVar2 + 0x78))(plVar2,plVar3,0);
LAB_14314bce9:
  if (local_50 != (longlong *)0x0) {
    (**(code **)(*local_50 + 0x10))();
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14314bd1b FUN_14314bd1b body=62 status=ok
// SIG undefined FUN_14314bd1b(void)

void FUN_14314bd1b(void)

{
  longlong lVar1;
  
  lVar1 = 0x100;
  do {
    FUN_14315595f(*(undefined8 *)((longlong)&DAT_14ca76090 + lVar1),
                  *(undefined4 *)((longlong)&DAT_14ca76098 + lVar1));
    if (*(longlong *)((longlong)&DAT_14ca76090 + lVar1) != 0) {
      FUN_1400020a8();
    }
    lVar1 = lVar1 + -0x10;
  } while (lVar1 != -0x10);
  return;
}



// FUNCTION 14314bd59 FUN_14314bd59 body=62 status=ok
// SIG undefined FUN_14314bd59(void)

void FUN_14314bd59(void)

{
  longlong lVar1;
  
  lVar1 = 800;
  do {
    FUN_14315595f(*(undefined8 *)((longlong)&DAT_14ca761a0 + lVar1),
                  *(undefined4 *)((longlong)&DAT_14ca761a8 + lVar1));
    if (*(longlong *)((longlong)&DAT_14ca761a0 + lVar1) != 0) {
      FUN_1400020a8();
    }
    lVar1 = lVar1 + -0x10;
  } while (lVar1 != -0x10);
  return;
}



// FUNCTION 14314bd97 FUN_14314bd97 body=69 status=ok
// SIG undefined FUN_14314bd97(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14314bd97(void)

{
  _DAT_14ca764d0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014314bdd9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca764d8,1);
  return;
}



// FUNCTION 14314bddc FUN_14314bddc body=1555 status=ok
// SIG undefined FUN_14314bddc(void)

undefined8 * FUN_14314bddc(longlong param_1,undefined8 *param_2,void *param_3,longlong param_4)

{
  uint *puVar1;
  byte bVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  DWORD DVar6;
  DWORD DVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  void *_Dst;
  undefined8 *puVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong *plVar15;
  undefined8 *puVar16;
  void **ppvVar17;
  ulonglong _Size;
  longlong lVar18;
  longlong lVar19;
  bool bVar20;
  undefined1 auStack_c8 [32];
  longlong **local_a8;
  undefined1 local_a0;
  longlong *local_98;
  longlong *local_90 [3];
  longlong *local_78;
  void *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar3 = *(uint *)(param_4 + 0x84);
  _Size = (ulonglong)uVar3;
  if (_Size == 0) {
    puVar9 = (undefined8 *)FUN_14001cc68(0x60,0x10);
    *(undefined4 *)(puVar9 + 1) = 0;
    *(undefined1 *)((longlong)puVar9 + 0xc) = 0x12;
    *(byte *)((longlong)puVar9 + 0xd) = *(byte *)((longlong)puVar9 + 0xd) | 3;
    *puVar9 = &PTR_FUN_14a1e4960;
    puVar9[2] = 0;
    puVar9[3] = 0;
    puVar9[4] = param_4;
    if (param_4 != 0) {
      LOCK();
      *(int *)(param_4 + 8) = *(int *)(param_4 + 8) + 1;
      UNLOCK();
    }
    *(undefined4 *)(puVar9 + 5) = *(undefined4 *)(param_4 + 0x84);
    *puVar9 = &PTR_FUN_14a341a20;
    puVar9[6] = 0;
    puVar9[7] = 0;
    puVar9[8] = local_60;
    puVar9[9] = CONCAT44(uStack_54,uStack_58);
    puVar9[10] = param_1;
    *(undefined1 *)(puVar9 + 0xb) = 0;
    goto LAB_14314c0d3;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca766a0) && (FUN_144b3d300(&DAT_14ca766a0), DAT_14ca766a0 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar15 = (longlong *)
              (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.UniformBufferPooling",1);
    if (plVar15 == (longlong *)0x0) {
      DAT_14ca76698 = 0;
    }
    else {
      DAT_14ca76698 = (**(code **)(*plVar15 + 0x68))(plVar15);
    }
    _Init_thread_footer(&DAT_14ca766a0);
  }
  lVar18 = DAT_14ca76698;
  lVar19 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar5 = *(int *)(lVar19 + 0xc60);
  if (iVar5 == 0x40000002) {
    uVar8 = 0;
  }
  else {
    bVar20 = true;
    if ((DAT_14c86a9f8 == '\x01') && (iVar5 != 2)) {
      if (iVar5 == 1) {
        DVar6 = FUN_140ad26c0();
        DVar7 = GetCurrentThreadId();
        bVar20 = DVar6 == DVar7;
      }
      else {
        bVar20 = false;
      }
    }
    uVar8 = (ulonglong)(bVar20 ^ 1);
  }
  if (((*(int *)(lVar18 + uVar8 * 4) == 0) ||
      (iVar5 = *(int *)(lVar19 + 0xc60), (iVar5 - 0x10U & 0xffffffef) != 0)) ||
     (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0xcb8) != 0)) {
    local_60 = (longlong *)CONCAT44(2,uVar3);
    uStack_58 = 4;
    uStack_54 = 0x10000;
    uStack_50 = 0;
    local_4c = 0;
    ppvVar17 = &local_70;
    local_68 = 0;
    local_78 = (longlong *)0x0;
    if (param_3 == (void *)0x0) {
      ppvVar17 = (void **)0x0;
    }
    local_70 = param_3;
    iVar5 = (**(code **)(**(longlong **)(param_1 + 0x150) + 0x18))
                      (*(longlong **)(param_1 + 0x150),&local_60,ppvVar17);
    if (iVar5 < 0) {
      local_a8 = *(longlong ***)(param_1 + 0x150);
      FUN_143142730(iVar5,
                    "Direct3DDevice->CreateBuffer(&Desc, Contents ? &ImmutableData : nullptr,UniformBufferResource.GetInitReference())"
                    ,".\\Runtime/Windows/D3D11RHI/Private/D3D11UniformBuffer.cpp",0xf5);
    }
    puVar9 = (undefined8 *)FUN_14001cc68(0x60,0x10);
    local_a8 = local_90;
    local_90[0] = (longlong *)0x0;
    local_a0 = 0;
    FUN_1473631ac(puVar9,param_1,param_4,local_78);
    plVar15 = local_78;
  }
  else {
    if (DAT_14c842750 == '\x01') {
      if (iVar5 != 0x20) {
LAB_14314bfc2:
        puVar9 = (undefined8 *)FUN_14001cc68(0x60,0x10);
        *(undefined4 *)(puVar9 + 1) = 0;
        *(undefined1 *)((longlong)puVar9 + 0xc) = 0x12;
        *(byte *)((longlong)puVar9 + 0xd) = *(byte *)((longlong)puVar9 + 0xd) | 3;
        *puVar9 = &PTR_FUN_14a1e4960;
        puVar9[2] = 0;
        puVar9[3] = 0;
        puVar9[4] = param_4;
        if (param_4 != 0) {
          LOCK();
          *(int *)(param_4 + 8) = *(int *)(param_4 + 8) + 1;
          UNLOCK();
        }
        *(undefined4 *)(puVar9 + 5) = *(undefined4 *)(param_4 + 0x84);
        *puVar9 = &PTR_FUN_14a341a20;
        puVar9[6] = 0;
        puVar9[7] = 0;
        *(undefined4 *)(puVar9 + 8) = (undefined4)local_60;
        *(undefined4 *)((longlong)puVar9 + 0x44) = local_60._4_4_;
        *(undefined4 *)(puVar9 + 9) = uStack_58;
        *(undefined4 *)((longlong)puVar9 + 0x4c) = uStack_54;
        puVar9[10] = param_1;
        *(undefined1 *)(puVar9 + 0xb) = 1;
        if (param_3 == (void *)0x0) {
          _Dst = (void *)0x0;
        }
        else {
          _Dst = (void *)FUN_14001cc68(_Size,0);
          memcpy(_Dst,param_3,_Size);
        }
        puVar10 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
        puVar16 = puVar10 + 5;
        if (DAT_14ca85108 < puVar16) {
          FUN_140023dd8(&DAT_14ca85100,0x30);
          puVar10 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
          puVar16 = puVar10 + 5;
        }
        DAT_14ca85160 = DAT_14ca85160 + 1;
        DAT_14ca85100 = puVar16;
        *DAT_14ca85130 = puVar10;
        DAT_14ca85130 = puVar10 + 1;
        puVar10[1] = 0;
        *puVar10 = &PTR_FUN_14a343c38;
        puVar10[2] = puVar9;
        puVar10[3] = _Dst;
        *(uint *)(puVar10 + 4) = uVar3;
        goto LAB_14314c0d3;
      }
    }
    else if (iVar5 != 0x10) goto LAB_14314bfc2;
    local_a8 = (longlong **)CONCAT44(local_a8._4_4_,uVar3);
    FUN_14314c3f0(local_90,*(undefined8 *)(param_1 + 0x150),*(undefined8 *)(param_1 + 0x140),param_3
                 );
    puVar9 = (undefined8 *)FUN_14001cc68(0x60,0x10);
    local_a8 = (longlong **)&local_60;
    local_60 = (longlong *)0x0;
    local_a0 = 1;
    FUN_1473631ac(puVar9,param_1,param_4,local_90[0]);
    plVar15 = local_90[0];
  }
  if (plVar15 != (longlong *)0x0) {
    (**(code **)(*plVar15 + 0x10))();
  }
LAB_14314c0d3:
  uVar3 = *(uint *)(param_4 + 0x28);
  lVar19 = (longlong)(int)uVar3;
  if (lVar19 != 0) {
    plVar15 = puVar9 + 2;
    FUN_14736323c(plVar15);
    iVar5 = *(int *)(puVar9 + 3);
    *(uint *)(puVar9 + 3) = uVar3 + iVar5;
    if ((uint)(*(int *)((longlong)puVar9 + 0x1c) - iVar5) < uVar3) {
      FUN_144abccec(plVar15);
    }
    memset((void *)((longlong)iVar5 * 8 + *plVar15),0,lVar19 * 8);
    if (0 < (int)uVar3 && param_3 != (void *)0x0) {
      lVar18 = 0;
      local_98 = plVar15;
      do {
        bVar2 = *(byte *)(*(longlong *)(param_4 + 0x20) + 2 + lVar18 * 4);
        if (((byte)(bVar2 - 10) < 0xe) && ((0x3263U >> (bVar2 - 10 & 0x1f) & 1) != 0)) {
LAB_14314c296:
          lVar12 = 0;
        }
        else {
          plVar11 = (longlong *)
                    ((ulonglong)*(ushort *)(*(longlong *)(param_4 + 0x20) + lVar18 * 4) +
                    (longlong)param_3);
          if ((bVar2 < 0x13) && ((0x67200U >> (bVar2 & 0x1f) & 1) != 0)) {
            if (*plVar11 == 0) goto LAB_14314c296;
            plVar11 = (longlong *)(*plVar11 + 0x10);
          }
          lVar12 = *plVar11;
        }
        lVar4 = *(longlong *)(*plVar15 + lVar18 * 8);
        if (lVar4 != lVar12) {
          *(longlong *)(*plVar15 + lVar18 * 8) = lVar12;
          if (lVar12 != 0) {
            LOCK();
            *(int *)(lVar12 + 8) = *(int *)(lVar12 + 8) + 1;
            UNLOCK();
          }
          if (lVar4 != 0) {
            LOCK();
            puVar1 = (uint *)(lVar4 + 8);
            uVar3 = *puVar1;
            *puVar1 = *puVar1 - 1;
            UNLOCK();
            if ((uVar3 & 0x3fffffff) == 1) {
              puVar1 = (uint *)(lVar4 + 8);
              LOCK();
              uVar3 = *puVar1;
              *puVar1 = *puVar1 | 0x40000000;
              UNLOCK();
              if ((uVar3 >> 0x1e & 1) == 0) {
                bVar2 = *(byte *)(lVar4 + 0xd);
                plVar13 = (longlong *)FUN_14001cc68(0x10,8);
                plVar13[1] = lVar4;
                plVar11 = DAT_14ca843c0;
                plVar14 = DAT_14ca843c8;
                plVar15 = local_98;
                if ((bVar2 & 2) == 0) {
                  do {
                    *plVar13 = (longlong)plVar11;
                    LOCK();
                    bVar20 = plVar11 != DAT_14ca843c0;
                    plVar14 = plVar13;
                    if (bVar20) {
                      plVar11 = DAT_14ca843c0;
                      plVar14 = DAT_14ca843c0;
                    }
                    DAT_14ca843c0 = plVar14;
                    UNLOCK();
                  } while (bVar20);
                }
                else {
                  do {
                    *plVar13 = (longlong)plVar14;
                    LOCK();
                    bVar20 = plVar14 != DAT_14ca843c8;
                    plVar11 = plVar13;
                    if (bVar20) {
                      plVar14 = DAT_14ca843c8;
                      plVar11 = DAT_14ca843c8;
                    }
                    DAT_14ca843c8 = plVar11;
                    UNLOCK();
                  } while (bVar20);
                }
              }
            }
          }
        }
        lVar18 = lVar18 + 1;
      } while (lVar18 != lVar19);
    }
  }
  *param_2 = puVar9;
  if (puVar9 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar9 + 1) = *(int *)(puVar9 + 1) + 1;
    UNLOCK();
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14314c3f0 FUN_14314c3f0 body=405 status=ok
// SIG undefined FUN_14314c3f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_14314c3f0(undefined8 *param_1,longlong *param_2,longlong *param_3,void *param_4,uint param_5)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  ulonglong uVar4;
  undefined1 auStack_88 [32];
  longlong *local_68;
  uint *local_60;
  uint local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *param_1 = 0;
  uVar4 = (ulonglong)((param_5 - 1) + (uint)(param_5 == 0)) * 2 + 1;
  lVar1 = 0x3f;
  if (uVar4 != 0) {
    for (; uVar4 >> lVar1 == 0; lVar1 = lVar1 + -1) {
    }
  }
  uVar4 = (ulonglong)(uint)((int)lVar1 << 4);
  if (0 < *(int *)((longlong)&DAT_14ca76098 + uVar4)) {
    FUN_1473661ea((longlong)&DAT_14ca76090 + uVar4,&local_58);
    plVar2 = (longlong *)CONCAT44(uStack_54,local_58);
    if (plVar2 != (longlong *)0x0) {
      *param_1 = plVar2;
      (**(code **)(*plVar2 + 8))(plVar2);
      (**(code **)(*plVar2 + 0x10))(plVar2);
      goto LAB_14314c4b5;
    }
  }
  local_58 = 1 << ((byte)lVar1 & 0x1f);
  uStack_54 = 2;
  uStack_50 = 4;
  uStack_4c = 0x10000;
  uStack_48 = 0;
  local_44 = 0;
  iVar3 = (**(code **)(*param_2 + 0x18))(param_2,&local_58,0,param_1);
  if (iVar3 < 0) {
    local_68 = param_2;
    FUN_143142730(iVar3,
                  "Device->CreateBuffer(&Desc, NULL, UniformBufferResource.GetInitReference())",
                  ".\\Runtime/Windows/D3D11RHI/Private/D3D11UniformBuffer.cpp",0x96);
  }
  LOCK();
  _DAT_14ca84ee8 = _DAT_14ca84ee8 + (ulonglong)local_58;
  UNLOCK();
LAB_14314c4b5:
  if (param_4 != (void *)0x0) {
    local_60 = &local_58;
    local_68 = (longlong *)((ulonglong)local_68 & 0xffffffff00000000);
    iVar3 = (**(code **)(*param_3 + 0x70))(param_3,*param_1,0,4);
    if (iVar3 < 0) {
      local_68 = param_2;
      FUN_143142730(iVar3,
                    "Context->Map(UniformBufferResource, 0, D3D11_MAP_WRITE_DISCARD, 0, &MappedSubresource)"
                    ,".\\Runtime/Windows/D3D11RHI/Private/D3D11UniformBuffer.cpp",0xa1);
    }
    memcpy((void *)CONCAT44(uStack_54,local_58),param_4,(ulonglong)param_5);
    (**(code **)(*param_3 + 0x78))(param_3,*param_1,0);
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14314c586 FUN_14314c586 body=539 status=ok
// SIG undefined FUN_14314c586(void)

void FUN_14314c586(undefined8 *param_1)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  uint uVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  uint uVar11;
  ulonglong uVar12;
  bool bVar13;
  undefined1 auStack_78 [40];
  uint local_50;
  int local_4c;
  int local_44;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = &PTR_FUN_14a341a20;
  if ((((*(char *)(param_1 + 0xb) == '\x01') && (param_1[7] == 0)) &&
      (plVar10 = (longlong *)param_1[6], plVar10 != (longlong *)0x0)) &&
     (((**(code **)(*plVar10 + 0x50))(plVar10,&local_50), local_44 == 0x10000 && (local_4c == 2))))
  {
    plVar10 = (longlong *)param_1[6];
    if (plVar10 != (longlong *)0x0) {
      (**(code **)(*plVar10 + 8))(plVar10);
    }
    iVar6 = DAT_14c7590b0;
    uVar7 = (DAT_14c7590b0 - 1U) % 3;
    uVar11 = 1;
    if (1 < local_50) {
      uVar11 = local_50;
    }
    uVar12 = (ulonglong)(uVar11 - 1) * 2 + 1;
    lVar4 = 0x3f;
    if (uVar12 != 0) {
      for (; uVar12 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    uVar12 = (ulonglong)(uint)((int)lVar4 << 4);
    plVar9 = (longlong *)((longlong)&DAT_14ca761a0 + uVar12 + (ulonglong)uVar7 * 0x110);
    iVar3 = *(int *)((longlong)&DAT_14ca761a0 + uVar12 + 8 + (ulonglong)uVar7 * 0x110);
    *(uint *)((longlong)&DAT_14ca761a0 + uVar12 + 8 + (ulonglong)uVar7 * 0x110) = iVar3 + 1U;
    if (*(uint *)((longlong)&DAT_14ca761a0 + uVar12 + 0xc + (ulonglong)uVar7 * 0x110) < iVar3 + 1U)
    {
      FUN_14736a1da(plVar9,iVar3);
    }
    lVar5 = *plVar9;
    lVar4 = lVar5 + (longlong)iVar3 * 0x10;
    *(longlong **)(lVar5 + (longlong)iVar3 * 0x10) = plVar10;
    if (plVar10 == (longlong *)0x0) {
      *(ulonglong *)(lVar4 + 8) = CONCAT44(iVar6,local_50);
    }
    else {
      (**(code **)(*plVar10 + 8))(plVar10);
      *(ulonglong *)(lVar4 + 8) = CONCAT44(iVar6,local_50);
      (**(code **)(*plVar10 + 0x10))(plVar10);
    }
  }
  if ((longlong *)param_1[6] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[6] + 0x10))();
  }
  *param_1 = &PTR_FUN_14a1e4960;
  lVar4 = param_1[4];
  if (lVar4 != 0) {
    LOCK();
    puVar1 = (uint *)(lVar4 + 8);
    uVar11 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar11 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar4 + 8);
      LOCK();
      uVar11 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar11 >> 0x1e & 1) == 0) {
        bVar2 = *(byte *)(lVar4 + 0xd);
        plVar8 = (longlong *)FUN_14001cc68(0x10,8);
        plVar8[1] = lVar4;
        plVar10 = DAT_14ca843c0;
        plVar9 = DAT_14ca843c8;
        if ((bVar2 & 2) == 0) {
          do {
            *plVar8 = (longlong)plVar10;
            LOCK();
            bVar13 = plVar10 != DAT_14ca843c0;
            plVar9 = plVar8;
            if (bVar13) {
              plVar10 = DAT_14ca843c0;
              plVar9 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar9;
            UNLOCK();
          } while (bVar13);
        }
        else {
          do {
            *plVar8 = (longlong)plVar9;
            LOCK();
            bVar13 = plVar9 != DAT_14ca843c8;
            plVar10 = plVar8;
            if (bVar13) {
              plVar9 = DAT_14ca843c8;
              plVar10 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar10;
            UNLOCK();
          } while (bVar13);
        }
      }
    }
  }
  FUN_1446fc3c5(param_1[2],*(undefined4 *)(param_1 + 3));
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a37f858;
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14314c7a2 FUN_14314c7a2 body=79 status=ok
// SIG undefined FUN_14314c7a2(void)

void FUN_14314c7a2(undefined4 param_1)

{
  undefined1 auStack_48 [40];
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1473635a0(local_20,param_1,0);
  if (local_20[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14314c7f2 FUN_14314c7f2 body=309 status=ok
// SIG undefined FUN_14314c7f2(void)

void FUN_14314c7f2(int param_1,longlong *param_2)

{
  int iVar1;
  undefined1 auStack_58 [32];
  wchar_t *local_38;
  longlong local_28;
  ulonglong uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_1 == -0x7785fffb) {
    local_28 = 0;
    uStack_20 = 0;
    FUN_142b777d0();
    FUN_14682e305(L"GPU Crash dump Triggered",0);
    DAT_14c868882 = 1;
    if (param_2 == (longlong *)0x0) {
      FUN_140033559(".\\Runtime/Windows/D3D11RHI/Private/D3D11Util.cpp",0x81,
                    L"Unreal Engine is exiting due to D3D device being lost. D3D device was not available to determine DXGI cause."
                   );
    }
    else {
      iVar1 = (**(code **)(*param_2 + 0x138))(param_2);
      local_38 = L"?";
      switch(iVar1) {
      case -0x7785ffff:
        local_38 = L"INVALID_CALL";
        break;
      case -0x7785fffe:
      case -0x7785fffd:
      case -0x7785fffc:
        break;
      case -0x7785fffb:
        local_38 = L"REMOVED";
        break;
      case -0x7785fffa:
        local_38 = L"HUNG";
        break;
      case -0x7785fff9:
        local_38 = L"RESET";
        break;
      default:
        if (iVar1 == -0x7785ffe0) {
          local_38 = L"INTERNAL_ERROR";
        }
        else if (iVar1 == 0) {
          local_38 = L"S_OK";
        }
      }
      FUN_140033559(".\\Runtime/Windows/D3D11RHI/Private/D3D11Util.cpp",0x7d,
                    L"Unreal Engine is exiting due to D3D device being lost. (Error: 0x%X - \'%s\')"
                    ,iVar1);
    }
    FUN_145e08fc8(local_28,uStack_20 & 0xffffffff);
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_10 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14314c928 FUN_14314c928 body=852 status=ok
// SIG undefined FUN_14314c928(void)

void FUN_14314c928(int param_1,char param_2)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined2 *puVar5;
  wchar_t *pwVar6;
  undefined8 uVar7;
  undefined1 auStack_a8 [40];
  undefined1 local_80 [4];
  undefined1 local_7c [4];
  longlong *local_78 [2];
  wchar_t *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1 == -0x7ff8fff2) {
    local_38 = 0;
    uStack_30 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_68 = (wchar_t *)0x0;
    uStack_60 = 0;
    iVar2 = FUN_1403f52c6(*(undefined8 *)(DAT_14ca765e0 + 0x17dc8));
    pwVar6 = local_68;
    uVar7 = local_58;
    if (iVar2 < 0) {
      pwVar6 = (wchar_t *)0x0;
      uVar7 = 0;
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c872ef8) && (FUN_144b3d300(&DAT_14c872ef8), DAT_14c872ef8 == -1)) {
      FUN_1459825b0(&DAT_14c872ee0);
      atexit(FUN_1427868a5);
      _Init_thread_footer(&DAT_14c872ef8);
    }
    FUN_145bf78ac(&DAT_14c872ee0);
    uVar3 = FUN_14680e92a();
    FUN_147366318(uVar3,pwVar6,uVar7);
    if (param_2 == '\0') {
      local_68 = L"OutOfMemory";
      uStack_60._0_4_ = 0xb;
      FUN_1446e940c(local_7c,&local_68);
      local_68 = L"D3D11RHI";
      uStack_60._0_4_ = 8;
      FUN_1446e940c(local_80,&local_68);
      local_68 = 
      L"Out of video memory trying to allocate a rendering resource. Make sure your video card has the minimum required memory, try lowering the resolution and/or closing other applications that are running. Exiting..."
      ;
      uStack_60 = CONCAT44(uStack_60._4_4_,0xd2);
    }
    else {
      local_68 = L"OutOfVideoMemoryTextures";
      uStack_60._0_4_ = 0x18;
      FUN_1446e940c(local_7c,&local_68);
      local_68 = L"Developer.MessageLog";
      uStack_60._0_4_ = 0x14;
      FUN_1446e940c(local_80,&local_68);
      local_68 = 
      L"Out of video memory trying to allocate a texture! Make sure your video card has the minimum required memory, try lowering the resolution and/or closing other applications that are running. Exiting..."
      ;
      uStack_60 = CONCAT44(uStack_60._4_4_,199);
    }
    FUN_140208c1e(local_78,local_80,local_7c,&local_68);
    plVar4 = local_78[0];
    if (*(code **)(*local_78[0] + 0x50) != FUN_144828418) {
      plVar4 = (longlong *)(**(code **)(*local_78[0] + 0x50))();
    }
    FUN_1447a1fc0(plVar4);
    pcVar1 = *(code **)(*local_78[0] + 0x28);
    if (pcVar1 == FUN_14482841c) {
      plVar4 = local_78[0] + 3;
      if (local_78[0][5] != 0) {
        plVar4 = (longlong *)(local_78[0][5] + 8);
      }
    }
    else if (pcVar1 == (code *)&LAB_14010c34c) {
      plVar4 = local_78[0] + 2;
    }
    else {
      plVar4 = (longlong *)(*pcVar1)(local_78[0]);
    }
    if ((int)plVar4[1] == 0) {
      puVar5 = &DAT_149dfb77a;
    }
    else {
      puVar5 = (undefined2 *)*plVar4;
    }
    FUN_14682f732(0,puVar5,L"Error");
    if (local_78[0] != (longlong *)0x0) {
      (**(code **)(*local_78[0] + 0x10))();
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14ca766b0) && (FUN_144b3d300(&DAT_14ca766b0), DAT_14ca766b0 == -1)) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      DAT_14ca766a8 =
           (longlong *)
           (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.GPUCrashOnOutOfMemory",1);
      _Init_thread_footer(&DAT_14ca766b0);
    }
    if ((DAT_14ca766a8 == (longlong *)0x0) ||
       (iVar2 = (**(code **)(*DAT_14ca766a8 + 0xb0))(), iVar2 == 0)) {
      FUN_142797bc0(1,(DAT_14c868880 != '\0') * '\x03');
    }
    else {
      FUN_140033559(".\\Runtime/Windows/D3D11RHI/Private/D3D11Util.cpp",0xb1,
                    L"Out of video memory trying to allocate a rendering resource");
    }
  }
  if ((local_20 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14314cc7d FUN_14314cc7d body=751 status=ok
// SIG undefined FUN_14314cc7d(void)

void FUN_14314cc7d(undefined4 param_1,char *param_2,undefined4 param_3,undefined4 *param_4,
                  undefined4 *param_5,undefined8 param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  short *psVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  size_t sVar7;
  ulonglong uVar8;
  uint uVar9;
  longlong lVar10;
  undefined1 *puVar11;
  undefined2 *puVar12;
  int iVar13;
  undefined1 auStack_338 [32];
  undefined2 *local_318;
  short *local_310;
  undefined4 local_308;
  undefined4 local_300;
  undefined4 local_2f8;
  uint local_2f0;
  undefined8 local_2e8;
  undefined4 local_2e0;
  undefined4 local_2d8;
  undefined4 local_2d0;
  uint local_2c8;
  undefined8 local_2c0;
  undefined4 local_2b8;
  undefined4 local_2a8;
  undefined4 local_2a4;
  undefined4 local_2a0;
  undefined4 local_29c;
  uint local_298;
  uint local_294;
  undefined4 local_290;
  undefined4 local_28c;
  undefined2 *local_288;
  int local_280;
  undefined1 local_278 [256];
  undefined1 *local_178;
  undefined1 *local_170;
  int local_168;
  short local_160 [128];
  longlong local_60;
  short *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_338;
  lVar10 = 0;
  local_28c = param_3;
  FUN_1473635a0(&local_288,param_1,0);
  uVar1 = param_4[2];
  uVar2 = param_5[2];
  FUN_14314c7f2(param_1,param_6);
  FUN_14314c928(param_1,1);
  local_2a4 = param_5[2];
  local_298 = (uint)*(byte *)(param_5 + 3);
  local_290 = *param_5;
  local_2a8 = param_5[1];
  local_29c = param_4[2];
  local_294 = (uint)*(byte *)(param_4 + 3);
  uVar3 = *param_4;
  local_2a0 = param_4[1];
  local_58 = local_160;
  local_60 = 0;
  local_50 = 0x34;
  do {
    local_160[lVar10] = (short)".\\Runtime/Windows/D3D11RHI/Private/D3D11Viewport.cpp"[lVar10];
    lVar10 = lVar10 + 1;
  } while (lVar10 != 0x35);
  uVar5 = FUN_147123c33(uVar1);
  uVar6 = FUN_147123c33(uVar2);
  psVar4 = local_58;
  puVar12 = local_288;
  if (local_280 == 0) {
    puVar12 = &DAT_149dfb77a;
  }
  local_178 = (undefined1 *)0x0;
  if (param_2 == (char *)0x0) {
    local_170 = (undefined1 *)0x0;
    local_168 = 0;
  }
  else {
    sVar7 = strlen(param_2);
    iVar13 = (int)sVar7;
    uVar9 = iVar13 + 1;
    local_168 = iVar13;
    if (uVar9 < 0x81) {
      puVar11 = (undefined1 *)0x0;
    }
    else {
      FUN_1446efa72(&local_178,0,uVar9,2);
      puVar11 = local_178;
    }
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = local_278;
    }
    local_170 = puVar11;
    if (-1 < iVar13) {
      uVar8 = 0;
      do {
        *(short *)(puVar11 + uVar8 * 2) = (short)param_2[uVar8];
        uVar8 = uVar8 + 1;
      } while (uVar9 != uVar8);
    }
  }
  local_2b8 = local_2a4;
  local_2c8 = local_298;
  local_2d0 = local_2a8;
  local_2d8 = local_290;
  local_2e0 = local_29c;
  local_2f0 = local_294;
  local_2f8 = local_2a0;
  local_308 = local_28c;
  local_310 = psVar4;
  local_318 = puVar12;
  local_300 = uVar3;
  local_2e8 = uVar5;
  local_2c0 = uVar6;
  FUN_140033559(".\\Runtime/Windows/D3D11RHI/Private/D3D11Util.cpp",0x154,
                L"%s failed with error %s\n at %s:%u\n (Size=%ix%i Fullscreen=%d Format=%s(0x%08X)) -> (Size=%ix%i Fullscreen=%d Format=%s(0x%08X))"
                ,local_170);
  if (local_178 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  if (local_288 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_338) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14314cf6d FUN_14314cf6d body=41 status=ok
// SIG undefined FUN_14314cf6d(void)

void FUN_14314cf6d(void)

{
  DAT_14ca76528 = 0;
  if (DAT_14ca76520 != 0) {
    FUN_1400020a8();
  }
  FUN_146191870();
  return;
}



// FUNCTION 14314cf96 FUN_14314cf96 body=69 status=ok
// SIG undefined FUN_14314cf96(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14314cf96(void)

{
  _DAT_14ca76538 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014314cfd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca76540,1);
  return;
}



// FUNCTION 14314cfdb FUN_14314cfdb body=69 status=ok
// SIG undefined FUN_14314cfdb(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14314cfdb(void)

{
  _DAT_14ca76548 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014314d01d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca76550,1);
  return;
}



// FUNCTION 14314d020 FUN_14314d020 body=69 status=ok
// SIG undefined FUN_14314d020(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14314d020(void)

{
  _DAT_14ca76560 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014314d062. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca76568,1);
  return;
}



// FUNCTION 14314d065 FUN_14314d065 body=69 status=ok
// SIG undefined FUN_14314d065(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14314d065(void)

{
  _DAT_14ca76570 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014314d0a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca76578,1);
  return;
}



// FUNCTION 14314d0aa FUN_14314d0aa body=69 status=ok
// SIG undefined FUN_14314d0aa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14314d0aa(void)

{
  _DAT_14ca76580 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014314d0ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca76588,1);
  return;
}



// FUNCTION 14314d0ef FUN_14314d0ef body=69 status=ok
// SIG undefined FUN_14314d0ef(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14314d0ef(void)

{
  DAT_14ca76590 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014314d131. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,_DAT_14ca76598,1);
  return;
}



// FUNCTION 14314d134 FUN_14314d134 body=69 status=ok
// SIG undefined FUN_14314d134(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14314d134(void)

{
  _DAT_14ca765a0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014314d176. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca765a8,1);
  return;
}



// FUNCTION 14314d17a FUN_14314d17a body=2059 status=ok
// SIG undefined FUN_14314d17a(void)

void FUN_14314d17a(longlong param_1,uint param_2,int param_3,char param_4,undefined1 param_5)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  int iVar10;
  bool bVar11;
  undefined1 auStack_e8 [32];
  double *local_c8;
  undefined8 local_c0;
  char local_a9;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  tagRECT local_88;
  int local_78;
  undefined8 local_74;
  uint local_60;
  int local_5c;
  int local_58;
  char local_54;
  uint local_50;
  int local_4c;
  int local_48;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_14735713c(*(undefined8 *)(param_1 + 0x10),0,0,0);
  lVar2 = *(longlong *)(param_1 + 0x10);
  FUN_14735d404(lVar2 + 0x158);
  memset((void *)(lVar2 + 0x27b8),0,0x1908);
  *(undefined4 *)(lVar2 + 0x40c0) = 0xffffffff;
  *(undefined4 *)(lVar2 + 0x40c4) = 0xffffffff;
  *(undefined4 *)(lVar2 + 0x40c8) = 0xffffffff;
  *(undefined4 *)(lVar2 + 0x40cc) = 0xffffffff;
  *(undefined4 *)(lVar2 + 0x40cc) = 0xffffffff;
  *(undefined4 *)(lVar2 + 0x40d0) = 0xffffffff;
  *(undefined4 *)(lVar2 + 0x40d4) = 0xffffffff;
  *(undefined4 *)(lVar2 + 0x40d8) = 0xffffffff;
  (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x10) + 0x140) + 0x378))();
  if (*(longlong **)(param_1 + 0x98) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x98) + 8))();
  }
  lVar7 = *(longlong *)(param_1 + 0x70);
  if (lVar7 != 0) {
    plVar9 = *(longlong **)(lVar7 + 0x70);
    if (plVar9 != (longlong *)0x0) {
      (**(code **)(*plVar9 + 8))(plVar9);
      (**(code **)(*plVar9 + 0x10))(plVar9);
      lVar7 = *(longlong *)(param_1 + 0x70);
    }
    uVar4 = *(byte *)(lVar7 + 0xb4) & 1;
    if ((-uVar4 < *(uint *)(lVar7 + 0x88)) &&
       (plVar9 = *(longlong **)(*(longlong *)(lVar7 + 0x80) + (ulonglong)uVar4 * -8),
       plVar9 != (longlong *)0x0)) {
      (**(code **)(*plVar9 + 8))(plVar9);
      (**(code **)(*plVar9 + 0x10))(plVar9);
      lVar7 = *(longlong *)(param_1 + 0x70);
    }
    plVar9 = *(longlong **)(lVar7 + 0x78);
    if (plVar9 != (longlong *)0x0) {
      (**(code **)(*plVar9 + 8))(plVar9);
      (**(code **)(*plVar9 + 0x10))(plVar9);
      lVar7 = *(longlong *)(param_1 + 0x70);
    }
    if (lVar7 != 0) {
      *(undefined8 *)(param_1 + 0x70) = 0;
      LOCK();
      puVar1 = (uint *)(lVar7 + 8);
      uVar4 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar4 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar7 + 8);
        LOCK();
        uVar4 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar4 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(lVar7 + 0xd);
          plVar6 = (longlong *)FUN_14001cc68(0x10,8);
          plVar6[1] = lVar7;
          plVar9 = DAT_14ca843c0;
          plVar8 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar6 = (longlong)plVar9;
              LOCK();
              bVar11 = plVar9 != DAT_14ca843c0;
              plVar8 = plVar6;
              if (bVar11) {
                plVar9 = DAT_14ca843c0;
                plVar8 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar8;
              UNLOCK();
            } while (bVar11);
          }
          else {
            do {
              *plVar6 = (longlong)plVar8;
              LOCK();
              bVar11 = plVar8 != DAT_14ca843c8;
              plVar9 = plVar6;
              if (bVar11) {
                plVar8 = DAT_14ca843c8;
                plVar9 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar9;
              UNLOCK();
            } while (bVar11);
          }
        }
      }
    }
  }
  FUN_14080c2b4();
  bVar3 = FUN_14314398e(*(undefined8 *)(param_1 + 0x10),
                        CONCAT71((int7)((ulonglong)lVar2 >> 8),param_5) & 0xffffffff);
  local_50 = *(uint *)(param_1 + 0x44);
  local_4c = *(int *)(param_1 + 0x48);
  iVar5 = *(int *)((longlong)&DAT_14c873434 + (ulonglong)((uint)*(byte *)(param_1 + 0x58) * 0x30));
  if (iVar5 < 0x49) {
    if (iVar5 == 0x1b) {
      local_48 = 0x1c;
    }
    else if (iVar5 == 0x35) {
      local_48 = 0x38;
    }
    else if (iVar5 == 0x46) {
      local_48 = 0x47;
    }
    else {
LAB_14314d38d:
      local_48 = iVar5;
    }
  }
  else if (iVar5 == 0x49) {
    local_48 = 0x4a;
  }
  else if (iVar5 == 0x4c) {
    local_48 = 0x4d;
  }
  else {
    local_48 = 0x57;
    if (iVar5 != 0x5a) goto LAB_14314d38d;
  }
  local_44 = *(undefined1 *)(param_1 + 100);
  iVar5 = *(int *)((longlong)&DAT_14c873434 + (ulonglong)((uint)bVar3 * 0x30));
  if (iVar5 < 0x49) {
    if (iVar5 == 0x1b) {
      local_58 = 0x1c;
    }
    else if (iVar5 == 0x35) {
      local_58 = 0x38;
    }
    else if (iVar5 == 0x46) {
      local_58 = 0x47;
    }
    else {
LAB_14314d41b:
      local_58 = iVar5;
    }
  }
  else if (iVar5 == 0x49) {
    local_58 = 0x4a;
  }
  else if (iVar5 == 0x4c) {
    local_58 = 0x4d;
  }
  else {
    local_58 = 0x57;
    if (iVar5 != 0x5a) goto LAB_14314d41b;
  }
  local_60 = param_2;
  local_5c = param_3;
  local_54 = param_4;
  if ((local_4c != param_3 || local_50 != param_2) || *(byte *)(param_1 + 0x58) != bVar3) {
    *(uint *)(param_1 + 0x44) = param_2;
    *(int *)(param_1 + 0x48) = param_3;
    *(byte *)(param_1 + 0x58) = bVar3;
    if (*(char *)(param_1 + 0x81) == '\x01') {
      uVar4 = DAT_14c760b20 ^ 0x800;
      if ((DAT_14c760b20 >> 0xb & 1) == (uint)*(byte *)(param_1 + 0x65)) {
        uVar4 = DAT_14c760b20;
      }
      iVar5 = *(int *)((longlong)&DAT_14c873434 + (ulonglong)((uint)bVar3 * 0x30));
      if (iVar5 < 0x49) {
        if (iVar5 == 0x1b) {
          iVar10 = 0x1c;
        }
        else if (iVar5 == 0x35) {
          iVar10 = 0x38;
        }
        else if (iVar5 == 0x46) {
          iVar10 = 0x47;
        }
        else {
LAB_14314d4db:
          iVar10 = iVar5;
        }
      }
      else if (iVar5 == 0x49) {
        iVar10 = 0x4a;
      }
      else if (iVar5 == 0x4c) {
        iVar10 = 0x4d;
      }
      else {
        iVar10 = 0x57;
        if (iVar5 != 0x5a) goto LAB_14314d4db;
      }
      local_c0 = CONCAT44(local_c0._4_4_,uVar4);
      local_c8 = (double *)CONCAT44(local_c8._4_4_,iVar10);
      iVar5 = (**(code **)(**(longlong **)(param_1 + 0x68) + 0x68))
                        (*(longlong **)(param_1 + 0x68),0,param_2,param_3);
      if (iVar5 < 0) {
        local_c0 = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x150);
        local_c8 = (double *)&local_60;
        FUN_14314cc7d(iVar5,
                      "SwapChain->ResizeBuffers(0, SizeX, SizeY, RenderTargetFormat, SwapChainFlags)"
                      ,0x11a,&local_50);
      }
      if (param_4 != '\0') {
        local_88.right = 0;
        local_88.bottom = 0;
        local_88._0_8_ = *(ulonglong *)(param_1 + 0x44);
        iVar5 = *(int *)((longlong)&DAT_14c873434 +
                        (ulonglong)((uint)*(byte *)(param_1 + 0x58) * 0x30));
        if (iVar5 < 0x49) {
          if (iVar5 == 0x1b) {
            local_78 = 0x1c;
          }
          else if (iVar5 == 0x35) {
            local_78 = 0x38;
          }
          else if (iVar5 == 0x46) {
            local_78 = 0x47;
          }
          else {
LAB_14314d5b5:
            local_78 = iVar5;
          }
        }
        else if (iVar5 == 0x49) {
          local_78 = 0x4a;
        }
        else if (iVar5 == 0x4c) {
          local_78 = 0x4d;
        }
        else {
          local_78 = 0x57;
          if (iVar5 != 0x5a) goto LAB_14314d5b5;
        }
        local_74 = 0;
        iVar5 = (**(code **)(**(longlong **)(param_1 + 0x68) + 0x70))();
        if (iVar5 < 0) {
          FUN_1431574b0(param_1,1);
          local_c0 = CONCAT44(local_c0._4_4_,uVar4);
          local_c8 = (double *)CONCAT44(local_c8._4_4_,iVar10);
          iVar5 = (**(code **)(**(longlong **)(param_1 + 0x68) + 0x68))
                            (*(longlong **)(param_1 + 0x68),0,*(undefined4 *)(param_1 + 0x44),
                             *(undefined4 *)(param_1 + 0x48));
          if (iVar5 < 0) {
            local_c0 = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x150);
            local_c8 = (double *)&local_60;
            FUN_14314cc7d(iVar5,
                          "SwapChain->ResizeBuffers(0, SizeX, SizeY, RenderTargetFormat, SwapChainFlags)"
                          ,0x123,&local_50);
          }
        }
      }
    }
  }
  if (*(char *)(param_1 + 100) == param_4) goto LAB_14314d7f7;
  *(char *)(param_1 + 100) = param_4;
  LOCK();
  *(undefined4 *)(param_1 + 0x54) = 1;
  UNLOCK();
  if (*(char *)(param_1 + 0x81) != '\x01') goto LAB_14314d7f7;
  FUN_1431574b0(param_1,1);
  if (*(char *)(param_1 + 100) == '\0') {
    local_88.right = 0;
    local_88.bottom = 0;
    local_88._0_8_ = *(ulonglong *)(param_1 + 0x44);
    iVar5 = *(int *)((longlong)&DAT_14c873434 + (ulonglong)((uint)*(byte *)(param_1 + 0x58) * 0x30))
    ;
    if (iVar5 < 0x49) {
      if (iVar5 == 0x1b) {
        local_78 = 0x1c;
      }
      else if (iVar5 == 0x35) {
        local_78 = 0x38;
      }
      else if (iVar5 == 0x46) {
        local_78 = 0x47;
      }
      else {
LAB_14314d6e1:
        local_78 = iVar5;
      }
    }
    else if (iVar5 == 0x49) {
      local_78 = 0x4a;
    }
    else if (iVar5 == 0x4c) {
      local_78 = 0x4d;
    }
    else {
      local_78 = 0x57;
      if (iVar5 != 0x5a) goto LAB_14314d6e1;
    }
    local_74 = 0;
    (**(code **)(**(longlong **)(param_1 + 0x68) + 0x70))();
  }
  iVar5 = *(int *)((longlong)&DAT_14c873434 + (ulonglong)((uint)*(byte *)(param_1 + 0x58) * 0x30));
  if (iVar5 < 0x49) {
    if (iVar5 == 0x1b) {
      iVar10 = 0x1c;
    }
    else if (iVar5 == 0x35) {
      iVar10 = 0x38;
    }
    else if (iVar5 == 0x46) {
      iVar10 = 0x47;
    }
    else {
LAB_14314d758:
      iVar10 = iVar5;
    }
  }
  else if (iVar5 == 0x49) {
    iVar10 = 0x4a;
  }
  else if (iVar5 == 0x4c) {
    iVar10 = 0x4d;
  }
  else {
    iVar10 = 0x57;
    if (iVar5 != 0x5a) goto LAB_14314d758;
  }
  uVar4 = DAT_14c760b20 ^ 0x800;
  if ((DAT_14c760b20 >> 0xb & 1) == (uint)*(byte *)(param_1 + 0x65)) {
    uVar4 = DAT_14c760b20;
  }
  local_c0 = CONCAT44(local_c0._4_4_,uVar4);
  local_c8 = (double *)CONCAT44(local_c8._4_4_,iVar10);
  iVar5 = (**(code **)(**(longlong **)(param_1 + 0x68) + 0x68))
                    (*(longlong **)(param_1 + 0x68),0,*(undefined4 *)(param_1 + 0x44),
                     *(undefined4 *)(param_1 + 0x48));
  if (iVar5 < 0) {
    local_c0 = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x150);
    local_c8 = (double *)&local_60;
    FUN_14314cc7d(iVar5,
                  "SwapChain->ResizeBuffers(0, SizeX, SizeY, RenderTargetFormat, GetSwapChainFlags())"
                  ,0x141,&local_50);
  }
LAB_14314d7f7:
  local_88.left = 0;
  local_88.top = 0;
  local_88.right = 0;
  local_88.bottom = 0;
  GetWindowRect(*(HWND *)(param_1 + 0x38),&local_88);
  local_90 = (double)local_88.top;
  local_98 = (double)local_88.left;
  local_a0 = (double)local_88.bottom;
  local_a8 = (double)local_88.right;
  local_c8 = &local_a8;
  local_c0 = *(undefined8 *)(param_1 + 0x38);
  FUN_1403485af(param_1 + 0x60,param_1 + 0x5c,&local_a9);
  if (local_a9 == '\x01') {
    FUN_14736adfa(param_1);
  }
  else {
    FUN_14315732d(*(undefined8 *)(param_1 + 0x68),0,0,*(undefined1 *)(param_1 + 0x58));
  }
  local_c8 = *(double **)(param_1 + 0x68);
  lVar7 = FUN_147363d56(*(undefined8 *)(param_1 + 0x10),*(undefined1 *)(param_1 + 0x58),
                        *(undefined4 *)(param_1 + 0x44),*(undefined4 *)(param_1 + 0x48));
  lVar2 = *(longlong *)(param_1 + 0x70);
  if (lVar2 != lVar7) {
    *(longlong *)(param_1 + 0x70) = lVar7;
    if (lVar7 != 0) {
      LOCK();
      *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
      UNLOCK();
    }
    if (lVar2 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar2 + 8);
      uVar4 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar4 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar2 + 8);
        LOCK();
        uVar4 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar4 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(lVar2 + 0xd);
          plVar6 = (longlong *)FUN_14001cc68(0x10,8);
          plVar6[1] = lVar2;
          plVar9 = DAT_14ca843c0;
          plVar8 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar6 = (longlong)plVar9;
              LOCK();
              bVar11 = plVar9 != DAT_14ca843c0;
              plVar8 = plVar6;
              if (bVar11) {
                plVar9 = DAT_14ca843c0;
                plVar8 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar8;
              UNLOCK();
            } while (bVar11);
          }
          else {
            do {
              *plVar6 = (longlong)plVar8;
              LOCK();
              bVar11 = plVar8 != DAT_14ca843c8;
              plVar9 = plVar6;
              if (bVar11) {
                plVar8 = DAT_14ca843c8;
                plVar9 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar9;
              UNLOCK();
            } while (bVar11);
          }
        }
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14314d986 FUN_14314d986 body=543 status=ok
// SIG undefined FUN_14314d986(void)

ulonglong FUN_14314d986(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  int *unaff_RDI;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  uint local_80 [18];
  longlong *local_38;
  int local_30;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = *(longlong **)(param_1 + 0x98);
  local_2c = param_3;
  if (plVar1 == (longlong *)0x0) {
LAB_14314d9d2:
    plVar1 = *(longlong **)(param_1 + 0x68);
    if (plVar1 == (longlong *)0x0) {
      iVar3 = 0;
    }
    else {
      local_38 = (longlong *)0x0;
      unaff_RDI = &local_30;
      (**(code **)(*plVar1 + 0x58))(plVar1,unaff_RDI);
      if ((bool)*(byte *)(param_1 + 100) == (local_30 != 0)) {
        uVar5 = ((byte)~(local_2c != 0 | *(byte *)(param_1 + 100) |
                        ((-(uint)((DAT_14c760b20 >> 0xb & 1) != (uint)*(byte *)(param_1 + 0x65)) ^
                         DAT_14c760b20) >> 0xb & 1) == 0) & 1) << 9;
        unaff_RDI = (int *)(ulonglong)uVar5;
        FUN_1403936f2(local_80,2,1);
        iVar3 = (**(code **)(**(longlong **)(param_1 + 0x68) + 0x40))
                          (*(longlong **)(param_1 + 0x68),local_2c,uVar5);
        FUN_1402488ea(local_80);
      }
      else {
        LOCK();
        *(undefined4 *)(param_1 + 0x54) = 3;
        UNLOCK();
        iVar3 = 0;
      }
      if (local_38 != (longlong *)0x0) {
        (**(code **)(*local_38 + 0x10))();
      }
    }
    unaff_RDI = (int *)CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
    if (*(longlong **)(param_1 + 0x98) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_1 + 0x98) + 0x38))();
    }
  }
  else {
    cVar2 = (**(code **)(*plVar1 + 0x30))(plVar1,param_2,&local_2c);
    unaff_RDI = (int *)0x0;
    iVar3 = 0;
    if (cVar2 != '\0') goto LAB_14314d9d2;
  }
  uVar4 = FUN_141552594();
  FUN_14275a87c(uVar4);
  if (iVar3 < 0) {
    uVar5 = *(int *)(param_1 + 0x50) + 1;
    *(uint *)(param_1 + 0x50) = uVar5;
    plVar1 = *(longlong **)(param_1 + 0x68);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x60))(plVar1,local_80);
      uVar5 = *(uint *)(param_1 + 0x50);
    }
    if (uVar5 < 0xb) {
      LOCK();
      *(undefined4 *)(param_1 + 0x54) = 3;
      UNLOCK();
    }
    else {
      local_88 = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x150);
      FUN_143142730(iVar3,"Result",".\\Runtime/Windows/D3D11RHI/Private/D3D11Viewport.cpp",0x1d9);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  uVar4 = FUN_141552594();
  FUN_14275a87c(uVar4);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x140);
  (**(code **)(*plVar1 + 0x108))(plVar1,0,0,0);
  plVar1 = *(longlong **)(param_1 + 0x68);
  if (plVar1 != (longlong *)0x0) {
    iVar3 = (**(code **)(*plVar1 + 0x88))(plVar1,local_80);
    if (-1 < iVar3) {
      DAT_14ca84f50 = (ulonglong)local_80[0];
      goto LAB_14314db76;
    }
  }
  DAT_14ca84f50 = DAT_14ca84f50 + 1;
LAB_14314db76:
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return (ulonglong)unaff_RDI & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14314dba6 FUN_14314dba6 body=1002 status=ok
// SIG undefined FUN_14314dba6(void)

void FUN_14314dba6(longlong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  LARGE_INTEGER LVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  double dVar8;
  float fVar9;
  undefined1 auStack_1e8 [32];
  LARGE_INTEGER local_1c8;
  DWM_TIMING_INFO local_1bc;
  LARGE_INTEGER local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  QueryPerformanceCounter(&local_98);
  memset(&local_1bc.rateRefresh,0,0x120);
  local_1bc.cbSize = 0x124;
  DwmGetCompositionTimingInfo((HWND)0x0,&local_1bc);
  dVar8 = DAT_14c83f420 * 1000.0;
  fVar9 = (float)((double)(uint)local_1bc.qpcRefreshPeriod * dVar8);
  if ((0 < DAT_14ca76558) && (1.0 < fVar9)) {
    for (; fVar9 - 1000.0 / (float)DAT_14ca76558 < -1.0; fVar9 = fVar9 + fVar9) {
    }
  }
  uVar1 = *(ulonglong *)(param_1 + 0x20);
  fVar7 = (float)((double)(uint)((int)local_1bc.qpcFrameComplete - *(int *)(param_1 + 0x28)) * dVar8
                 );
  fVar6 = (float)((double)(local_98.s.LowPart - *(int *)(param_1 + 0x18)) * dVar8);
  if (uVar1 < local_1bc.cFrameComplete) {
    fVar7 = fVar7 / (float)(local_1bc.cFrameComplete - uVar1);
  }
  if (fVar6 <= fVar7) {
    fVar6 = fVar7;
  }
  uVar3 = 0xffffffff;
  if (fVar6 < DAT_14c760b08 * fVar9) {
    uVar3 = (uint)(uVar1 < local_1bc.cFrameComplete);
  }
  iVar4 = uVar3 + *(int *)(param_1 + 0x30);
  if (DAT_14c760b0c <= iVar4) {
    iVar4 = DAT_14c760b0c;
  }
  iVar5 = 0;
  if (0 < iVar4) {
    iVar5 = iVar4;
  }
  *(int *)(param_1 + 0x30) = iVar5;
  iVar4 = DAT_14c760b10;
  if (iVar5 < DAT_14c760b10) {
    FUN_14314d986(param_1,param_2,0);
    if (*(char *)(param_1 + 0x34) != '\0') {
      *(undefined4 *)(param_1 + 0x30) = 0;
    }
  }
  else {
    (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x10) + 0x140) + 0x378))();
    DwmFlush();
    fVar7 = DAT_14c760b04 * fVar9;
    QueryPerformanceCounter(&local_98);
    fVar6 = (float)((double)(local_98.s.LowPart - *(int *)(param_1 + 0x18)) *
                   DAT_14c83f420 * -1000.0) + fVar7;
    if (0.0 < fVar6) {
      do {
        FUN_14000f986(fVar6 * 0.001);
        QueryPerformanceCounter(&local_98);
        fVar6 = (float)((double)(local_98.s.LowPart - *(int *)(param_1 + 0x18)) *
                       DAT_14c83f420 * -1000.0) + fVar7;
      } while (0.0 < fVar6);
    }
    FUN_14314d986(param_1,param_2,0);
    QueryPerformanceCounter(&local_1c8);
    fVar6 = (float)((double)(local_1c8.s.LowPart - *(int *)(param_1 + 0x18)) *
                   DAT_14c83f420 * -1000.0) + fVar9;
    if (0.0 < fVar6) {
      fVar7 = fVar6;
      do {
        FUN_14000f986(fVar7 * 0.001);
        QueryPerformanceCounter(&local_1c8);
        LVar2.s.HighPart = local_1c8.s.HighPart;
        LVar2.s.LowPart = local_1c8.s.LowPart;
        fVar7 = (float)((double)(local_1c8.s.LowPart - *(int *)(param_1 + 0x18)) *
                       DAT_14c83f420 * -1000.0) + fVar9;
      } while (0.0 < fVar7);
      if (0.0 < fVar6) {
        local_98 = LVar2;
      }
    }
  }
  *(bool *)(param_1 + 0x34) = iVar4 <= iVar5;
  ((LARGE_INTEGER *)(param_1 + 0x18))->s = (_struct_19)local_98;
  *(DWM_FRAME_COUNT *)(param_1 + 0x20) = local_1bc.cFrameComplete;
  *(ulonglong *)(param_1 + 0x28) =
       CONCAT44(local_1bc.qpcFrameComplete._4_4_,(int)local_1bc.qpcFrameComplete);
  if ((local_90 ^ (ulonglong)auStack_1e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14314df92 FUN_14314df92 body=372 status=ok
// SIG undefined FUN_14314df92(void)

void FUN_14314df92(longlong param_1,longlong *param_2,longlong param_3)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined2 local_48;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar6 = *(longlong **)(param_1 + 0x2658);
  if (plVar6 != param_2) {
    *(longlong **)(param_1 + 0x2658) = param_2;
    if (param_2 != (longlong *)0x0) {
      LOCK();
      *(int *)(param_2 + 1) = (int)param_2[1] + 1;
      UNLOCK();
    }
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      puVar1 = (uint *)(plVar6 + 1);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(plVar6 + 1);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)((longlong)plVar6 + 0xd);
          plVar4 = (longlong *)FUN_14001cc68(0x10,8);
          plVar4[1] = (longlong)plVar6;
          plVar6 = DAT_14ca843c0;
          plVar5 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar4 = (longlong)plVar6;
              LOCK();
              bVar7 = plVar6 != DAT_14ca843c0;
              plVar5 = plVar4;
              if (bVar7) {
                plVar6 = DAT_14ca843c0;
                plVar5 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar5;
              UNLOCK();
            } while (bVar7);
          }
          else {
            do {
              *plVar4 = (longlong)plVar5;
              LOCK();
              bVar7 = plVar5 != DAT_14ca843c8;
              plVar6 = plVar4;
              if (bVar7) {
                plVar5 = DAT_14ca843c8;
                plVar6 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar6;
              UNLOCK();
            } while (bVar7);
          }
        }
      }
    }
  }
  if (param_3 == 0) {
    param_3 = param_2[0xe];
  }
  local_58[1] = 0xffffffff00000000;
  local_48 = 0x101;
  local_58[0] = param_3;
  FUN_14735713c(param_1 + -0x18,1,local_58,0);
  local_40 = (int)*(float *)(param_1 + 0x19bc);
  local_3c = (int)*(float *)(param_1 + 0x19c0);
  local_38 = (int)*(float *)(param_1 + 0x19c4) + local_40;
  local_34 = (int)*(float *)(param_1 + 0x19c8) + local_3c;
  (**(code **)(**(longlong **)(param_1 + 0x128) + 0x168))(*(longlong **)(param_1 + 0x128),1);
  plVar6 = (longlong *)(**(code **)(*param_2 + 0x30))(param_2);
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x20))(plVar6);
  }
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14314e108 FUN_14314e108 body=1204 status=ok
// SIG undefined FUN_14314e108(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14314e108(longlong param_1,longlong *param_2,char param_3,undefined1 param_4)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  char cVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  ulonglong uVar10;
  bool bVar11;
  undefined1 auStack_a8 [32];
  undefined4 *local_88;
  undefined4 *local_80;
  undefined1 local_72;
  char local_71;
  undefined4 local_70;
  undefined4 local_6c;
  LARGE_INTEGER local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *(int *)(param_1 + 0x40cc) = *(int *)(param_1 + 0x40cc) + 1;
  lVar4 = *(longlong *)(param_1 + 0x2658);
  local_72 = param_4;
  local_71 = param_3;
  if (lVar4 != 0) {
    *(undefined8 *)(param_1 + 0x2658) = 0;
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
        plVar6 = (longlong *)FUN_14001cc68(0x10);
        plVar6[1] = lVar4;
        plVar8 = DAT_14ca843c0;
        plVar7 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar6 = (longlong)plVar8;
            LOCK();
            bVar11 = plVar8 != DAT_14ca843c0;
            plVar7 = plVar6;
            if (bVar11) {
              plVar8 = DAT_14ca843c0;
              plVar7 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar7;
            UNLOCK();
          } while (bVar11);
        }
        else {
          do {
            *plVar6 = (longlong)plVar7;
            LOCK();
            bVar11 = plVar7 != DAT_14ca843c8;
            plVar8 = plVar6;
            if (bVar11) {
              plVar7 = DAT_14ca843c8;
              plVar8 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar8;
            UNLOCK();
          } while (bVar11);
        }
      }
    }
  }
  lVar4 = *(longlong *)(param_1 + 0x2798);
  if (lVar4 != 0) {
    *(undefined8 *)(param_1 + 0x2798) = 0;
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
        plVar6 = (longlong *)FUN_14001cc68(0x10);
        plVar6[1] = lVar4;
        plVar8 = DAT_14ca843c0;
        plVar7 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar6 = (longlong)plVar8;
            LOCK();
            bVar11 = plVar8 != DAT_14ca843c0;
            plVar7 = plVar6;
            if (bVar11) {
              plVar8 = DAT_14ca843c0;
              plVar7 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar7;
            UNLOCK();
          } while (bVar11);
        }
        else {
          do {
            *plVar6 = (longlong)plVar7;
            LOCK();
            bVar11 = plVar7 != DAT_14ca843c8;
            plVar8 = plVar6;
            if (bVar11) {
              plVar7 = DAT_14ca843c8;
              plVar8 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar8;
            UNLOCK();
          } while (bVar11);
        }
      }
    }
  }
  plVar8 = *(longlong **)(param_1 + 0x2790);
  if (plVar8 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x2790) = 0;
    (**(code **)(*plVar8 + 0x10))();
  }
  *(undefined4 *)(param_1 + 0x4410) = 0x22;
  plVar8 = *(longlong **)(param_1 + 0x26b8);
  if (plVar8 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x26b8) = 0;
    (**(code **)(*plVar8 + 0x10))();
  }
  lVar4 = param_1 + -0x18;
  lVar9 = 0x4d8;
  do {
    plVar8 = *(longlong **)(param_1 + lVar9 * 8);
    if (plVar8 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + lVar9 * 8) = 0;
      (**(code **)(*plVar8 + 0x10))();
    }
    lVar9 = lVar9 + 1;
  } while (lVar9 != 0x4df);
  FUN_14735da0c(lVar4);
  FUN_14735dad8(lVar4);
  FUN_14735dba8(lVar4);
  FUN_1473556a6(lVar4);
  FUN_143142ce6(lVar4);
  if (*(longlong *)(param_1 + 0x1978) != 0) {
    *(undefined8 *)(param_1 + 0x1978) = 0;
    (**(code **)(**(longlong **)(param_1 + 0x158) + 0x58))(*(longlong **)(param_1 + 0x158),0,0,0);
  }
  *(undefined8 *)(param_1 + 0x1d70) = 0;
  *(undefined8 *)(param_1 + 0x1d78) = 0;
  *(undefined8 *)(param_1 + 0x1d60) = 0;
  *(undefined8 *)(param_1 + 0x1d68) = 0;
  *(undefined2 *)(param_1 + 0x1d80) = 0;
  plVar8 = (longlong *)(param_1 + 0x1b40);
  uVar10 = 0;
  do {
    local_6c = 0;
    local_70 = 0;
    local_68.QuadPart = 0;
    if (((*plVar8 != 0) || (*(int *)((longlong)plVar8 + 0xc) != 0)) || ((int)plVar8[1] != 0)) {
      *plVar8 = 0;
      plVar8[1] = 0;
      local_88 = &local_70;
      local_80 = &local_6c;
      (**(code **)(**(longlong **)(param_1 + 0x158) + 0x90))
                (*(longlong **)(param_1 + 0x158),uVar10 & 0xffffffff,1,&local_68);
    }
    uVar10 = uVar10 + 1;
    plVar8 = plVar8 + 2;
  } while (uVar10 != 0x11);
  if (((*(char *)(param_1 + 0x25c8) != '\0') || (*(longlong *)(param_1 + 0x1d40) != 0)) ||
     ((*(int *)(param_1 + 0x1d48) != 0x39 || (*(int *)(param_1 + 0x1d4c) != 0)))) {
    *(undefined8 *)(param_1 + 0x1d40) = 0;
    *(undefined8 *)(param_1 + 0x1d48) = 0x39;
    (**(code **)(**(longlong **)(param_1 + 0x158) + 0x98))(*(longlong **)(param_1 + 0x158),0,0x39,0)
    ;
  }
  memset((void *)(param_1 + 0x3fa0),0,0x108);
  *(undefined4 *)(param_1 + 0x40c0) = 0xffffffff;
  if (*(longlong *)(param_1 + 0x1988) != 0) {
    *(undefined8 *)(param_1 + 0x1988) = 0;
    (**(code **)(**(longlong **)(param_1 + 0x158) + 0x48))(*(longlong **)(param_1 + 0x158),0,0,0);
  }
  if (*(longlong *)(param_1 + 0x1980) != 0) {
    *(undefined8 *)(param_1 + 0x1980) = 0;
    (**(code **)(**(longlong **)(param_1 + 0x158) + 0xb8))(*(longlong **)(param_1 + 0x158),0,0,0);
  }
  if (local_71 != '\0') {
    cVar5 = FUN_147364412(param_2,param_1,local_72);
    if (cVar5 == '\0') goto LAB_14314e49f;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca765d8) && (FUN_144b3d300(&DAT_14ca765d8), DAT_14ca765d8 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.FinishCurrentFrame",1);
    if (plVar8 == (longlong *)0x0) {
      DAT_14ca765d0 = 0;
    }
    else {
      DAT_14ca765d0 = (**(code **)(*plVar8 + 0x68))(plVar8);
    }
    _Init_thread_footer(&DAT_14ca765d8);
  }
  bVar11 = *(int *)(DAT_14ca765d0 + 4) == 0;
  (**(code **)(*param_2 + 0x40 + (ulonglong)!bVar11 * 8))(param_2);
  (**(code **)(*param_2 + 0x40 + (ulonglong)bVar11 * 8))(param_2);
LAB_14314e49f:
  if (DAT_14ca964b2 == '\x01') {
    (**(code **)(*param_2 + 0x40))(param_2);
    QueryPerformanceCounter(&local_68);
    _DAT_14ca964b8 = local_68.s.LowPart - _DAT_14ca964b4;
    DAT_14ca964b2 = '\0';
  }
  if ((local_60 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14314e5be FUN_14314e5be body=129 status=ok
// SIG undefined FUN_14314e5be(void)

bool FUN_14314e5be(longlong param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  uVar6 = (ulonglong)*(uint *)(param_1 + 0x30);
  if (uVar6 != 0) {
    iVar4 = *(int *)(param_1 + 0x40);
    lVar2 = *(longlong *)(param_1 + 0x38);
    do {
      iVar4 = iVar4 + -1;
      if (iVar4 == 0) break;
    } while (*(ulonglong *)(lVar2 + 8 + (longlong)iVar4 * 0x10) < uVar6);
    *(int *)(param_1 + 0x48) = iVar4;
    lVar5 = (longlong)iVar4 * 0x10;
    uVar1 = *(undefined4 *)(lVar2 + 8 + lVar5);
    plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x20) + 0x140);
    (**(code **)(*plVar3 + 0x180))
              (plVar3,*(undefined8 *)(lVar2 + lVar5),0,0,*(undefined8 *)(param_1 + 0x28),uVar1,uVar1
              );
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  return uVar6 != 0;
}



// FUNCTION 14314e63f FUN_14314e63f body=69 status=ok
// SIG undefined FUN_14314e63f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14314e63f(void)

{
  _DAT_14ca765e8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014314e681. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca765f0,1);
  return;
}



// FUNCTION 14314e684 FUN_14314e684 body=69 status=ok
// SIG undefined FUN_14314e684(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14314e684(void)

{
  _DAT_14ca76600 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014314e6c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca76608,1);
  return;
}



// FUNCTION 14314e6c9 FUN_14314e6c9 body=69 status=ok
// SIG undefined FUN_14314e6c9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14314e6c9(void)

{
  _DAT_14ca76618 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014314e70b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca76620,1);
  return;
}



// FUNCTION 14314e70e FUN_14314e70e body=69 status=ok
// SIG undefined FUN_14314e70e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14314e70e(void)

{
  _DAT_14ca76630 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014314e750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca76638,1);
  return;
}



// FUNCTION 14314e753 FUN_14314e753 body=69 status=ok
// SIG undefined FUN_14314e753(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14314e753(void)

{
  _DAT_14ca76648 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014314e795. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca76650,1);
  return;
}



// FUNCTION 14314e798 FUN_14314e798 body=180 status=ok
// SIG undefined FUN_14314e798(void)

void FUN_14314e798(void)

{
  int iVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  longlong *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (DAT_14ca8507a == '\x01') {
    local_10 = (longlong *)0x0;
    iVar1 = (**(code **)**(undefined8 **)(DAT_14ca765e0 + 0x150))
                      (*(undefined8 **)(DAT_14ca765e0 + 0x150),&DAT_14a3405d0);
    if (iVar1 < 0) {
      local_18 = *(undefined8 *)(DAT_14ca765e0 + 0x150);
      FUN_143142730(iVar1,
                    "GD3D11RHI->GetDevice()->QueryInterface(__uuidof(ID3D11Debug), (void**)DebugDevice.GetInitReference())"
                    ,".\\Runtime/Windows/D3D11RHI/Private/Windows/WindowsD3D11Device.cpp",0x78);
    }
    if (local_10 != (longlong *)0x0) {
      (**(code **)(*local_10 + 0x50))(local_10,3);
      if (local_10 != (longlong *)0x0) {
        (**(code **)(*local_10 + 0x10))();
      }
    }
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14314e84d FUN_14314e84d body=69 status=ok
// SIG undefined FUN_14314e84d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14314e84d(void)

{
  _DAT_14ca76658 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014314e88f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca76660,1);
  return;
}



// FUNCTION 14314e892 FUN_14314e892 body=869 status=ok
// SIG undefined FUN_14314e892(void)

uint FUN_14314e892(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined8 unaff_RBP;
  undefined7 uVar12;
  ulonglong uVar11;
  longlong *plVar13;
  longlong lVar14;
  longlong *plVar15;
  bool bVar16;
  undefined1 auStack_1c8 [32];
  undefined8 local_1a8;
  uint local_19c;
  longlong local_198;
  longlong *local_190;
  longlong *local_188;
  longlong *local_180;
  undefined1 local_178 [64];
  undefined8 local_138;
  undefined8 local_130;
  int local_114;
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  plVar2 = *(longlong **)(param_1 + 0x17dc8);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  plVar13 = plVar2;
  local_198 = param_1;
  if ((*(longlong **)(param_1 + 0x128) == (longlong *)0x0) ||
     (iVar7 = (**(code **)(**(longlong **)(param_1 + 0x128) + 0x68))(), iVar7 != 0))
  goto LAB_14314e8ee;
  plVar1 = (longlong *)(param_1 + 0x130);
  uVar12 = (undefined7)((ulonglong)unaff_RBP >> 8);
  if (*(longlong **)(param_1 + 0x130) == (longlong *)0x0) {
    uVar11 = CONCAT71(uVar12,DAT_14ca8507a);
LAB_14314ead2:
    FUN_14314ebf8(plVar1,uVar11 & 0xffffffff);
  }
  else {
    iVar7 = (**(code **)(**(longlong **)(param_1 + 0x130) + 0x68))();
    if (iVar7 == 0) {
      plVar15 = (longlong *)*plVar1;
      uVar11 = CONCAT71(uVar12,DAT_14ca8507a);
      if (plVar15 != (longlong *)0x0) {
        *plVar1 = 0;
        (**(code **)(*plVar15 + 0x10))();
      }
      goto LAB_14314ead2;
    }
  }
  if (((longlong *)*plVar1 != (longlong *)0x0) &&
     (iVar7 = (**(code **)(*(longlong *)*plVar1 + 0x68))(), iVar7 != 0)) {
    local_180 = (longlong *)0x0;
    plVar15 = (longlong *)0x0;
    iVar7 = 0;
    do {
      plVar4 = (longlong *)*plVar1;
      if (plVar15 != (longlong *)0x0) {
        local_180 = (longlong *)0x0;
        (**(code **)(*plVar15 + 0x10))(plVar15);
      }
      iVar8 = (**(code **)(*plVar4 + 0x38))(plVar4,iVar7,&local_180);
      param_1 = local_198;
      if (iVar8 == -0x7785fffe) goto LAB_14314eb9b;
      if (local_180 == (longlong *)0x0) {
        plVar15 = (longlong *)0x0;
      }
      else {
        iVar8 = (**(code **)(*local_180 + 0x40))(local_180,local_178);
        plVar15 = local_180;
        if (((-1 < iVar8) && (local_50 == *(int *)(local_198 + 0x17ef8))) &&
           (local_4c == *(int *)(local_198 + 0x17efc))) goto LAB_14314ebc3;
      }
      iVar7 = iVar7 + 1;
    } while( true );
  }
LAB_14314e8ee:
  local_190 = (longlong *)(param_1 + 0x17d18);
  *(undefined4 *)(param_1 + 0x17d20) = 0;
  if (*(int *)(param_1 + 0x17d24) != 0) {
    FUN_14736ab10(local_190,0);
  }
  iVar7 = 0;
  if (plVar13 == (longlong *)0x0) {
    uVar10 = 0;
  }
  else {
    local_19c = 0;
    do {
      local_180 = (longlong *)0x0;
      iVar8 = (**(code **)(*plVar13 + 0x38))(plVar13,iVar7,&local_180);
      if (iVar8 == 0) {
        local_188 = (longlong *)0x0;
        iVar9 = (**(code **)*local_180)(local_180,&DAT_14a3445c0,&local_188);
        if (-1 < iVar9) {
          iVar9 = (**(code **)(*local_188 + 0xd8))(local_188,local_178);
          if (iVar9 < 0) {
            local_1a8 = 0;
            FUN_143142730(iVar9,"Output6->GetDesc1(&OutputDesc)",
                          ".\\Runtime/Windows/D3D11RHI/Private/Windows/WindowsD3D11Device.cpp",0x207
                         );
          }
          uVar6 = local_130;
          uVar5 = local_138;
          bVar16 = local_114 == 0xc;
          iVar9 = *(int *)(local_198 + 0x17d20);
          lVar14 = (longlong)iVar9;
          *(uint *)(local_198 + 0x17d20) = iVar9 + 1U;
          if (*(uint *)(local_198 + 0x17d24) < iVar9 + 1U) {
            FUN_146319bae(local_190,iVar9);
          }
          local_19c = CONCAT31((int3)(local_19c >> 8),(byte)local_19c | bVar16);
          lVar3 = *local_190;
          *(undefined8 *)(lVar3 + lVar14 * 0x14) = uVar5;
          *(undefined8 *)(lVar3 + 8 + lVar14 * 0x14) = uVar6;
          *(bool *)(lVar3 + 0x10 + lVar14 * 0x14) = bVar16;
        }
        if (local_188 != (longlong *)0x0) {
          (**(code **)(*local_188 + 0x10))();
        }
      }
      if (local_180 != (longlong *)0x0) {
        (**(code **)(*local_180 + 0x10))();
      }
      iVar7 = iVar7 + 1;
    } while (iVar8 == 0);
    (**(code **)(*plVar13 + 0x10))(plVar13);
    uVar10 = local_19c;
  }
  if ((local_48 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar10 & 0xffffff01;
LAB_14314ebc3:
  param_1 = local_198;
  if ((plVar2 != local_180 && local_180 != (longlong *)0x0) &&
     ((**(code **)(*local_180 + 8))(local_180), param_1 = local_198, plVar13 = plVar15,
     plVar2 != (longlong *)0x0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
  }
LAB_14314eb9b:
  if (local_180 != (longlong *)0x0) {
    (**(code **)(*local_180 + 0x10))(local_180);
  }
  goto LAB_14314e8ee;
}



// FUNCTION 14314ebf8 FUN_14314ebf8 body=206 status=ok
// SIG undefined FUN_14314ebf8(void)

void FUN_14314ebf8(undefined8 param_1,byte param_2)

{
  byte bVar1;
  byte bVar2;
  undefined8 uVar3;
  HMODULE hModule;
  
  uVar3 = FUN_14118da1c();
  bVar1 = FUN_14054d46e(uVar3,L"quad_buffer_stereo");
  bVar2 = FUN_145db1694(8,0,0);
  if (((bVar1 | param_2) & bVar2) == 1) {
    hModule = (HMODULE)FUN_14155261e(L"dxgi.dll");
    if (hModule != (HMODULE)0x0) {
      DAT_14ca766b8 = GetProcAddress(hModule,"CreateDXGIFactory2");
      FreeLibrary(hModule);
    }
    if ((bVar1 & DAT_14ca766b8 != (FARPROC)0x0) == 1) {
      DAT_14ca76668 = 1;
      goto LAB_14314ec9a;
    }
  }
  if (DAT_14ca766b8 == (FARPROC)0x0) {
    CreateDXGIFactory1(&DAT_149eca928,param_1);
    return;
  }
LAB_14314ec9a:
  (*DAT_14ca766b8)((ulonglong)param_2,&DAT_14a343f00,param_1);
  return;
}



// FUNCTION 14314eccc FUN_14314eccc body=2611 status=ok
// SIG undefined FUN_14314eccc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14314eccc(longlong param_1)

{
  ushort uVar1;
  ushort uVar2;
  char cVar3;
  longlong *plVar4;
  undefined4 uVar5;
  byte bVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  longlong *plVar10;
  uint *puVar11;
  longlong lVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong *plVar15;
  longlong *plVar16;
  undefined1 *_Src;
  uint uVar17;
  longlong *plVar18;
  bool bVar19;
  longlong **pplVar20;
  undefined1 local_838 [312];
  undefined1 local_700 [312];
  undefined1 local_5c8 [312];
  undefined1 local_490 [312];
  ushort local_358 [128];
  undefined4 local_258;
  ulonglong local_248;
  longlong local_230;
  longlong *local_228;
  undefined1 local_220 [309];
  char local_eb;
  longlong *local_e8 [4];
  longlong *local_c8;
  longlong *local_c0;
  longlong *local_b8;
  longlong *local_b0;
  longlong local_a8;
  ulonglong local_a0;
  int local_98;
  uint local_94;
  longlong *local_90;
  longlong local_88;
  longlong *local_80;
  uint local_74;
  undefined4 local_70;
  int local_6c;
  longlong *local_68;
  longlong *local_60;
  int local_54;
  longlong *local_50;
  byte local_42;
  byte local_41;
  
  local_c0 = (longlong *)0x0;
  FUN_14314ebf8(&local_c0,DAT_14ca8507a);
  if (local_c0 == (longlong *)0x0) {
    return;
  }
  local_b8 = (longlong *)0x0;
  (**(code **)*local_c0)(local_c0,&DAT_14a3445f0);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c8338a0) && (FUN_144b3d300(&DAT_14c8338a0), DAT_14c8338a0 == -1)) {
    FUN_1456d85e6(&DAT_14c8337f0);
    atexit((_func_5014 *)&LAB_142748837);
    _Init_thread_footer(&DAT_14c8338a0);
  }
  FUN_145af9b74(&local_228);
  iVar8 = (**(code **)(DAT_14c8337f0 + 0x18))(&DAT_14c8337f0,local_228);
  if (iVar8 < 1) {
    local_88 = 0;
  }
  else {
    plVar10 = (longlong *)FUN_147364b50();
    local_88 = (**(code **)(*plVar10 + 0x60))(plVar10);
  }
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  plVar10 = (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.GraphicsAdapter",1);
  if (plVar10 == (longlong *)0x0) {
    bVar19 = local_88 == 0;
    local_74 = bVar19 | 0xfffffffe;
  }
  else {
    puVar11 = (uint *)(**(code **)(*plVar10 + 0x68))(plVar10);
    if (local_88 == 0) {
      local_74 = 0xffffffff;
      bVar19 = true;
      if (puVar11 != (uint *)0x0) {
        local_74 = *puVar11;
      }
    }
    else {
      local_74 = 0xfffffffe;
      bVar19 = false;
    }
  }
  if (DAT_14c846b14 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                  L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  FUN_141369f9a(&DAT_14c846b20,L"graphicsadapter=",&local_74);
  local_94 = local_74;
  local_50 = (longlong *)0x0;
  local_54 = FUN_14631b780();
  if (DAT_14c846b14 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                  L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  local_a8 = param_1;
  bVar6 = FUN_14054d46e(&DAT_14c846b20,L"AllowSoftwareRendering");
  local_98 = 2;
  if (DAT_14c846b14 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                  L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  FUN_141369f9a(&DAT_14c846b20,L"-gpupreference=",&local_98);
  cVar3 = (local_98 == 2) * '\x02';
  if (local_98 == 1) {
    cVar3 = '\x01';
  }
  local_42 = bVar19 ^ 1;
  local_41 = (bVar6 ^ 1) & bVar19;
  plVar15 = (longlong *)0x0;
  local_80 = (longlong *)0x0;
  plVar10 = (longlong *)0x0;
  local_60 = (longlong *)0x0;
  uVar17 = 0;
  local_a0 = 0;
LAB_14314ef23:
  plVar18 = local_50;
  if (local_50 != (longlong *)0x0) {
    local_50 = (longlong *)0x0;
    (**(code **)(*plVar18 + 0x10))();
  }
  if (local_b8 == (longlong *)0x0 || cVar3 == '\0') {
    iVar8 = (**(code **)(*local_c0 + 0x38))(local_c0,uVar17,&local_50);
  }
  else {
    iVar8 = (**(code **)(*local_b8 + 0xe8))(local_b8,uVar17,cVar3,&DAT_14a343ec0,&local_50);
  }
  plVar4 = local_60;
  plVar18 = local_80;
  lVar12 = local_a8;
  if (iVar8 != -0x7785fffe) {
    if (local_50 != (longlong *)0x0) {
      (**(code **)(*local_50 + 0x40))(local_50,local_358);
      local_70 = 0;
      local_228 = (longlong *)0x0;
      local_e8[0] = (longlong *)0x0;
      local_68 = (longlong *)0xb0000000b100;
      pplVar20 = &local_68;
      iVar8 = D3D11CreateDevice(local_50,0,0,(uint)DAT_14ca8507a * 2 + 0x21,pplVar20,2,7,&local_228,
                                &local_70,local_e8);
      if (-1 < iVar8) {
        (**(code **)(*local_228 + 0x10))();
        (**(code **)(*local_e8[0] + 0x10))();
        iVar8 = 0;
        local_90 = plVar15;
        do {
          local_228 = (longlong *)0x0;
          iVar9 = (**(code **)(*local_50 + 0x38))(local_50,iVar8,&local_228);
          if (local_228 != (longlong *)0x0) {
            (**(code **)(*local_228 + 0x10))();
          }
          iVar8 = iVar8 + 1;
        } while (-1 < iVar9);
        local_6c = FUN_147364bce(local_258);
        local_68 = (longlong *)0x0;
        iVar8 = (**(code **)*local_50)(local_50,&DAT_14a1e7f70,&local_68);
        local_b0 = plVar10;
        if ((iVar8 < 0) || (local_68 == (longlong *)0x0)) {
          bVar19 = false;
        }
        else {
          bVar19 = false;
          iVar8 = (**(code **)(*local_68 + 0x70))(local_68,0,1,local_e8);
          if (-1 < iVar8) {
            bVar19 = local_e8[0] != (longlong *)0x0;
          }
        }
        uVar5 = local_70;
        lVar12 = 0;
        do {
          uVar1 = *(ushort *)((longlong)local_358 + lVar12);
          uVar2 = *(ushort *)((longlong)L"NVIDIA PerfHUD" + lVar12);
          if (uVar1 == uVar2) {
            if (uVar1 == 0) goto LAB_14314f190;
          }
          else {
            if (0x7f < (uVar2 | uVar1)) {
              iVar8 = (uint)uVar1 - (uint)uVar2;
              goto LAB_14314f192;
            }
            if ((&DAT_149e05da0)[uVar1] != (&DAT_149e05da0)[uVar2]) {
              iVar8 = (uint)(byte)(&DAT_149e05da0)[uVar1] - (uint)(byte)(&DAT_149e05da0)[uVar2];
              goto LAB_14314f192;
            }
          }
          lVar12 = lVar12 + 2;
        } while( true );
      }
      FUN_14314c7a2(iVar8);
      cVar7 = FUN_145db1694(10,0,0);
      if (cVar7 == '\x01' && iVar8 == -0x7785ffd3) {
        FUN_140033559(".\\Runtime/Windows/D3D11RHI/Private/Windows/WindowsD3D11Device.cpp",0x1a6,
                      L"-d3ddebug was used but optional Graphics Tools were not found. Install them through the Manage Optional Features in windows. See: https://docs.microsoft.com/en-us/windows/uwp/gaming/use-the-directx-runtime-and-visual-studio-graphics-diagnostic-features"
                     );
      }
    }
    goto LAB_14314f082;
  }
  if (local_94 == 0xffffffff) {
    if (local_60 == (longlong *)0x0) {
      if (plVar10 == (longlong *)0x0) {
        plVar16 = *(longlong **)(local_a8 + 8);
        if (local_80 == (longlong *)0x0) goto joined_r0x00014314f660;
        _Src = local_838;
        if (plVar16 == local_80) goto LAB_14314f58a;
        *(longlong **)(local_a8 + 8) = local_80;
        lVar13 = *local_80;
        plVar14 = local_80;
      }
      else {
        plVar16 = *(longlong **)(local_a8 + 8);
        _Src = local_5c8;
        if (plVar16 == plVar10) goto LAB_14314f58a;
        *(longlong **)(local_a8 + 8) = plVar10;
        lVar13 = *plVar10;
        plVar14 = plVar10;
      }
    }
    else {
      plVar16 = *(longlong **)(local_a8 + 8);
      _Src = local_700;
      if (plVar16 == local_60) goto LAB_14314f58a;
      *(longlong **)(local_a8 + 8) = local_60;
      lVar13 = *local_60;
      plVar14 = local_60;
    }
LAB_14314f579:
    (**(code **)(lVar13 + 8))(plVar14);
  }
  else {
    plVar16 = *(longlong **)(local_a8 + 8);
joined_r0x00014314f660:
    _Src = local_490;
    if (plVar16 == plVar15) goto LAB_14314f58a;
    _Src = local_490;
    *(longlong **)(local_a8 + 8) = plVar15;
    if (plVar15 != (longlong *)0x0) {
      lVar13 = *plVar15;
      plVar14 = plVar15;
      goto LAB_14314f579;
    }
  }
  if (plVar16 != (longlong *)0x0) {
    (**(code **)(*plVar16 + 0x10))(plVar16);
  }
LAB_14314f58a:
  memcpy((void *)(lVar12 + 0x10),_Src,0x136);
  FUN_14020fad6(&DAT_14ca84da0,(void *)(lVar12 + 0x10));
  DAT_14ca84df4 = *(undefined4 *)(lVar12 + 0x110);
  DAT_14ca84de8 = *(undefined4 *)(lVar12 + 0x114);
  _DAT_14ca84dec = *(undefined4 *)(lVar12 + 0x11c);
  DAT_14ca84f11 = *(undefined1 *)(lVar12 + 0x145);
  if (plVar15 != (longlong *)0x0) {
    (**(code **)(*plVar15 + 0x10))(plVar15);
  }
  if (plVar18 != (longlong *)0x0) {
    (**(code **)(*plVar18 + 0x10))(plVar18);
  }
  if (plVar10 != (longlong *)0x0) {
    (**(code **)(*plVar10 + 0x10))(plVar10);
  }
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  if (local_50 != (longlong *)0x0) {
    (**(code **)(*local_50 + 0x10))();
  }
  if (local_b8 != (longlong *)0x0) {
    (**(code **)(*local_b8 + 0x10))();
  }
  if (local_c0 != (longlong *)0x0) {
    (**(code **)(*local_c0 + 0x10))();
  }
  return;
LAB_14314f190:
  iVar8 = 0;
LAB_14314f192:
  local_c8 = local_50;
  if (local_50 != (longlong *)0x0) {
    (**(code **)(*local_50 + 8))();
  }
  iVar9 = local_6c;
  FUN_147364c48(&local_228,&local_c8,uVar5,local_6c == 0x1414,
                CONCAT71((int7)((ulonglong)pplVar20 >> 8),bVar19) ^ 1);
  plVar10 = local_b0;
  if (iVar9 == 0x1414) {
    bVar6 = (int)local_74 < 0 & local_41;
  }
  else {
    bVar6 = 0;
  }
  plVar15 = local_90;
  plVar18 = local_228;
  if ((local_228 != (longlong *)0x0 && (uVar17 == local_74 || (int)local_74 < 0)) &&
      ((iVar8 != 0 && bVar6 == 0) && (local_88 != local_230 & local_42) == 0)) {
    if (((local_54 != -1) &&
        (iVar8 = FUN_147364bce(local_258), plVar15 = local_228, local_54 == iVar8)) &&
       (local_60 == (longlong *)0x0)) {
      if (local_228 != (longlong *)0x0) {
        (**(code **)(*local_228 + 8))(local_228);
      }
      local_60 = plVar15;
      memcpy(local_700,local_220,0x136);
    }
    plVar15 = local_228;
    if ((local_6c != 0x1414) && (local_eb == '\0')) {
      if (local_80 == (longlong *)0x0) {
        if (local_228 != (longlong *)0x0) {
          (**(code **)(*local_228 + 8))(local_228);
        }
        local_80 = plVar15;
        memcpy(local_838,local_220,0x136);
      }
      plVar15 = local_228;
      if (local_a0 < local_248) {
        plVar18 = plVar10;
        if (plVar10 != local_228) {
          if (local_228 != (longlong *)0x0) {
            (**(code **)(*local_228 + 8))(local_228);
          }
          plVar18 = plVar15;
          if (plVar10 != (longlong *)0x0) {
            (**(code **)(*plVar10 + 0x10))(plVar10);
          }
        }
        plVar10 = plVar18;
        memcpy(local_5c8,local_220,0x136);
        local_a0 = local_248;
        if ((local_54 != -1) && (iVar8 = FUN_147364bce(local_258), local_54 == iVar8)) {
          plVar15 = local_60;
          if (local_60 != plVar10) {
            if (plVar10 != (longlong *)0x0) {
              (**(code **)(*plVar10 + 8))(plVar10);
            }
            plVar15 = plVar10;
            if (local_60 != (longlong *)0x0) {
              (**(code **)(*local_60 + 0x10))();
            }
          }
          memcpy(local_700,local_5c8,0x136);
          local_60 = plVar15;
        }
      }
    }
    plVar4 = local_228;
    plVar15 = local_90;
    plVar18 = local_228;
    if (local_90 == (longlong *)0x0) {
      if (local_228 == (longlong *)0x0) {
        plVar18 = (longlong *)0x0;
      }
      else {
        (**(code **)(*local_228 + 8))(local_228);
        plVar18 = local_228;
      }
      memcpy(local_490,local_220,0x136);
      plVar15 = plVar4;
    }
  }
  if (plVar18 != (longlong *)0x0) {
    (**(code **)(*plVar18 + 0x10))(plVar18);
  }
  if (local_68 != (longlong *)0x0) {
    (**(code **)(*local_68 + 0x10))();
  }
LAB_14314f082:
  uVar17 = uVar17 + 1;
  goto LAB_14314ef23;
}



// FUNCTION 14314f704 FUN_14314f704 body=444 status=ok
// SIG undefined FUN_14314f704(void)

void FUN_14314f704(longlong param_1)

{
  char *_Str;
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  longlong local_88;
  ulonglong uStack_80;
  ulonglong local_70;
  longlong local_68 [2];
  longlong *local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (DAT_14ca8507a == '\x01') {
    local_58 = (longlong *)0x0;
    iVar2 = (**(code **)**(undefined8 **)(param_1 + 0x150))
                      (*(undefined8 **)(param_1 + 0x150),&DAT_14997eba8);
    if (iVar2 < 0) {
      local_98 = *(undefined8 *)(param_1 + 0x150);
      FUN_143142730(iVar2,
                    "Direct3DDevice->QueryInterface(IID_ID3D11InfoQueue, (void**)InfoQueue.GetInitReference())"
                    ,".\\Runtime/Windows/D3D11RHI/Private/Windows/WindowsD3D11Device.cpp",0x40b);
    }
    if (local_58 != (longlong *)0x0) {
      local_68[0] = 0;
      local_68[1] = 0;
      lVar3 = (**(code **)(*local_58 + 0x48))();
      if (lVar3 != 0) {
        lVar4 = 0;
        do {
          local_70 = 0;
          iVar2 = (**(code **)(*local_58 + 0x28))(local_58,lVar4,0,&local_70);
          if (-1 < iVar2) {
            local_88 = 0;
            uStack_80 = local_70 & 0xffffffff;
            if ((int)local_70 != 0) {
              FUN_1447403be(&local_88,0);
            }
            lVar1 = local_88;
            iVar2 = (**(code **)(*local_58 + 0x28))(local_58,lVar4,local_88,&local_70);
            if (-1 < iVar2) {
              FUN_1400020e8(local_68,&DAT_149e272b0,2);
              _Str = *(char **)(lVar1 + 0x10);
              strlen(_Str);
              FUN_14047a987(local_68,_Str);
            }
            if (local_88 != 0) {
              FUN_1400020a8();
            }
          }
          lVar4 = lVar4 + 1;
        } while (lVar3 != lVar4);
      }
      (**(code **)(*local_58 + 0x20))();
      if (local_68[0] != 0) {
        FUN_1400020a8();
      }
      if (local_58 != (longlong *)0x0) {
        (**(code **)(*local_58 + 0x10))();
      }
    }
  }
  if ((local_50 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14314f8c2 FUN_14314f8c2 body=7703 status=ok
// SIG undefined FUN_14314f8c2(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14314f8c2(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  uint *puVar2;
  size_t _Size;
  longlong *plVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  int *piVar18;
  longlong **pplVar19;
  byte bVar20;
  char cVar21;
  undefined1 uVar22;
  int iVar23;
  int iVar24;
  HRESULT HVar25;
  int iVar26;
  undefined4 uVar27;
  DWORD DVar28;
  DWORD DVar29;
  longlong lVar30;
  longlong lVar31;
  longlong *plVar32;
  undefined8 uVar33;
  PVOID pvVar34;
  void *_Dst;
  uint uVar35;
  uint uVar36;
  uchar auVar37 [8];
  ushort uVar38;
  wchar_t *pwVar39;
  int *piVar40;
  uint uVar41;
  ulonglong uVar42;
  ushort uVar43;
  uint uVar44;
  undefined1 *puVar45;
  undefined1 *puVar46;
  longlong lVar47;
  ulonglong uVar48;
  bool bVar49;
  bool bVar50;
  undefined1 auVar51 [16];
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  undefined1 auStack_20c8 [32];
  longlong *local_20a8;
  undefined4 local_20a0;
  undefined4 local_2098;
  longlong **local_2090;
  undefined4 *local_2088;
  longlong **local_2080;
  longlong **local_2070;
  longlong local_2068;
  int *local_2060;
  longlong local_2058;
  longlong *local_2050;
  uint local_2048;
  int local_2044;
  undefined1 local_2040 [8];
  longlong *local_2038;
  longlong *local_2030 [2];
  undefined4 local_201c;
  ulonglong local_2018 [4];
  longlong *local_1ff8;
  undefined4 local_1fec;
  uchar local_1fe8 [8];
  int local_1fe0;
  IID local_1fd8;
  undefined1 local_1fc8 [12];
  undefined4 uStack_1fbc;
  undefined8 local_1fb8;
  undefined8 local_1fa8;
  undefined8 local_1f98;
  undefined1 local_1f68 [4];
  uint uStack_1f64;
  undefined8 uStack_1f60;
  undefined1 local_1f58 [16];
  undefined1 local_1f48 [16];
  undefined1 local_1f38 [16];
  int local_1f28;
  undefined1 auStack_1f24 [12];
  undefined8 local_1f18;
  longlong **local_1f10;
  undefined1 local_1de0 [7032];
  longlong *local_268;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined4 local_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined8 local_248;
  undefined8 uStack_240;
  ulonglong local_60;
  undefined8 uStack_48;
  
  uVar27 = (undefined4)((ulonglong)param_2 >> 0x20);
  uStack_48 = 0x14314f8d8;
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_20c8;
  if (*(longlong *)(param_1 + 0x150) != 0) goto LAB_14314f8ff;
  FUN_14080c2b4();
  lVar47 = param_1 + 0x158;
  FUN_14735d404(lVar47);
  memset((void *)(param_1 + 0x27b8),0,0x1908);
  *(undefined4 *)(param_1 + 0x40c0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x40c4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x40c8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x40cc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x40cc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x40d0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x40d4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x40d8) = 0xffffffff;
  bVar20 = FUN_147358b58();
  if (DAT_14c846b14 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                  L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  cVar21 = FUN_14054d46e(&DAT_14c846b20,L"d3ddebug");
  if (cVar21 == '\0') {
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    cVar21 = FUN_14054d46e(&DAT_14c846b20,L"d3debug");
    if (cVar21 != '\0') goto LAB_14314f9e9;
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    cVar21 = FUN_14054d46e(&DAT_14c846b20,L"dxdebug");
    if (cVar21 != '\0') goto LAB_14314f9e9;
  }
  else {
LAB_14314f9e9:
    FUN_140635eb8(DAT_14ca765f0,1,0xc000000,0);
  }
  if (DAT_14c846b14 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                  L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  cVar21 = FUN_14054d46e(&DAT_14c846b20,L"d3dlogwarnings");
  if (cVar21 != '\0') {
    FUN_140635eb8(DAT_14ca765f0,2,0xc000000,0);
  }
  if (DAT_14c846b14 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                  L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  cVar21 = FUN_14054d46e(&DAT_14c846b20,L"d3dbreakonwarning");
  if (cVar21 != '\0') {
    FUN_140635eb8(DAT_14ca765f0,3,0xc000000,0);
  }
  if (DAT_14c846b14 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                  L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  cVar21 = FUN_14054d46e(&DAT_14c846b20,L"d3dcontinueonerrors");
  if (cVar21 != '\0') {
    FUN_140635eb8(DAT_14ca765f0,4,0xc000000,0);
  }
  lVar30 = DAT_14ca765f8;
  lVar31 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar24 = *(int *)(lVar31 + 0xc60);
  if (iVar24 == 0x40000002) {
    uVar48 = 0;
  }
  else {
    bVar49 = true;
    if ((DAT_14c86a9f8 == '\x01') && (iVar24 != 2)) {
      if (iVar24 == 1) {
        DVar28 = FUN_140ad26c0();
        DVar29 = GetCurrentThreadId();
        bVar49 = DVar28 == DVar29;
      }
      else {
        bVar49 = false;
      }
    }
    uVar48 = (ulonglong)(bVar49 ^ 1);
  }
  iVar24 = *(int *)(lVar30 + uVar48 * 4);
  DAT_14ca8507a = 0 < iVar24;
  pwVar39 = L"false";
  if (0 < iVar24) {
    pwVar39 = L"true";
  }
  FUN_140056680(local_1f68,pwVar39);
  FUN_140056680(&local_268,L"RHI.D3DDebug");
  FUN_14152eab6(&local_268,local_1f68);
  if (local_268 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (_local_1f68 != 0) {
    FUN_1400020a8();
  }
  uVar36 = (bVar20 ^ 1) + 2;
  if (iVar24 < 1) {
    uVar36 = (uint)(bVar20 ^ 1);
  }
  DAT_14ca84ec8 = 0;
  DAT_14ca84e2a = DAT_14ca84df4 != 0x10de;
  DAT_14ca94d88 = 3;
  DAT_14ca76058 = *(ulonglong *)(param_1 + 0x17ee0);
  DAT_14ca76060 = *(ulonglong *)(param_1 + 0x17ee8);
  DAT_14ca76068 = *(longlong *)(param_1 + 0x17ef0);
  lVar30 = FUN_14016c8d4();
  uVar41 = 8;
  if (*(uint *)(lVar30 + 0x40) < 8) {
    uVar41 = *(uint *)(lVar30 + 0x40);
  }
  uVar42 = (ulonglong)(uVar41 << 0x1c);
  uVar48 = DAT_14ca76068 / 2;
  if ((longlong)uVar42 <= DAT_14ca76068 / 2) {
    uVar48 = uVar42;
  }
  local_1ff8 = (longlong *)0x0;
  DAT_14ca76070 = 0;
  if (*(char *)(param_1 + 0x17f05) == '\x01') {
    DAT_14ca76070 = uVar48 + DAT_14ca76058 + DAT_14ca76060;
  }
  else if ((((((DAT_14ca84df4 != 0x1002) ||
              (iVar23 = (**(code **)**(undefined8 **)(param_1 + 0x17dc8))
                                  (*(undefined8 **)(param_1 + 0x17dc8),&DAT_14a1e7f70,&local_1ff8),
              iVar23 < 0)) || (local_1ff8 == (longlong *)0x0)) ||
            (iVar23 = (**(code **)(*local_1ff8 + 0x70))(local_1ff8,0,0,local_2018),
            DAT_14ca76070 = local_2018[0], iVar23 < 0)) &&
           ((DAT_14ca76070 = DAT_14ca76058, (longlong)DAT_14ca76058 < 0xc800000 &&
            (DAT_14ca76070 = DAT_14ca76060, (longlong)DAT_14ca76060 < 0xc800000)))) &&
          (DAT_14ca76070 = uVar42, 0x18ffffff < DAT_14ca76068)) {
    DAT_14ca76070 = uVar48;
  }
  if (0 < DAT_14ca84ed0) {
    auVar51._4_4_ = uVar27;
    auVar51._0_4_ =
         (float)(longlong)DAT_14ca76070 * (float)DAT_14ca84ed0 * 0.01 * 0.0009765625 * 0.0009765625;
    auVar51._8_4_ = in_XMM1_Dc;
    auVar51._12_4_ = in_XMM1_Dd;
    auVar51 = roundss(ZEXT816(0),auVar51,0xb);
    DAT_14ca84ec8 = (longlong)auVar51._0_4_ << 0x14;
  }
  local_2070 = (longlong **)(param_1 + 0x150);
  piVar40 = (int *)(lVar31 + 0xc60);
  uVar41 = uVar36 | 0x20;
  lVar31 = 0;
  while( true ) {
    uVar38 = *(ushort *)(param_1 + 0x17dd0 + lVar31);
    uVar48 = (ulonglong)uVar38;
    uVar43 = *(ushort *)((longlong)L"NVIDIA PerfHUD" + lVar31);
    if (uVar38 != uVar43) break;
    if (uVar38 == 0) goto LAB_14314fd7d;
LAB_14314fd50:
    lVar31 = lVar31 + 2;
  }
  if ((uVar43 | uVar38) < 0x80) {
    uVar38 = (ushort)(byte)(&DAT_149e05da0)[uVar48];
    uVar42 = (ulonglong)uVar43;
    uVar43 = (ushort)(byte)(&DAT_149e05da0)[uVar42];
    if ((&DAT_149e05da0)[uVar48] == (&DAT_149e05da0)[uVar42]) goto LAB_14314fd50;
  }
  uVar27 = 0;
  if (uVar38 != uVar43) goto LAB_14314fd83;
LAB_14314fd7d:
  uVar27 = 2;
LAB_14314fd83:
  local_1fa8 = 0;
  local_1f98 = 0;
  FUN_142b74a24();
  if ((DAT_14ca84df4 == 0x1002) && (cVar21 = FUN_1462b4477(), cVar21 != '\0')) {
    puVar1 = (undefined8 *)(param_1 + 0x2680);
    iVar23 = agsInitialize(0x1800001,0,puVar1);
    if (iVar23 == 0) {
      _DAT_14ca76670 = *puVar1;
      if (0 < (longlong)DAT_14ca76688) {
        lVar31 = 0;
        do {
          if ((*(int *)(param_1 + 98000) == *(int *)(DAT_14ca76690 + 0x10 + lVar31)) &&
             (*(int *)(param_1 + 0x17ed4) == *(int *)(DAT_14ca76690 + 0x14 + lVar31))) {
            bVar49 = *(int *)(DAT_14ca76690 + 8 + lVar31) == 1;
          }
          else {
            bVar49 = false;
          }
          DAT_14ca84df0 = DAT_14ca84df0 | bVar49;
          lVar31 = lVar31 + 0x78;
        } while ((longlong)DAT_14ca76688 * 0x78 - lVar31 != 0);
      }
    }
    else {
      _DAT_14ca76680 = (undefined1  [16])0x0;
      _DAT_14ca76670 = (undefined1  [16])0x0;
      DAT_14ca76690 = 0;
      *puVar1 = 0;
    }
  }
  else {
    _DAT_14ca76680 = (undefined1  [16])0x0;
    _DAT_14ca76670 = (undefined1  [16])0x0;
    DAT_14ca76690 = 0;
  }
  piVar18 = DAT_14ca76610;
  local_201c = 0;
  local_2068 = param_1;
  if (DAT_14ca84df4 == 0x1002) {
    iVar23 = *piVar40;
    if (iVar23 == 0x40000002) {
      if (*DAT_14ca76610 != 0) {
        uVar41 = uVar36 & 0xffffffe2 | 0x20;
      }
    }
    else {
      bVar49 = true;
      iVar26 = 0x1002;
      if ((DAT_14c86a9f8 == '\x01') && (iVar23 != 2)) {
        if (iVar23 == 1) {
          DVar28 = FUN_140ad26c0();
          local_2060 = piVar40;
          DVar29 = GetCurrentThreadId();
          bVar49 = DVar28 == DVar29;
          piVar40 = local_2060;
          iVar26 = DAT_14ca84df4;
        }
        else {
          bVar49 = false;
        }
      }
      if (piVar18[bVar49 ^ 1] != 0) {
        uVar41 = uVar36 & 0xffffffe2 | 0x20;
      }
      if (iVar26 != 0x1002) goto LAB_1431503a3;
    }
    if ((*(longlong *)(param_1 + 0x2680) == 0) || (cVar21 = FUN_1462b4477(), cVar21 == '\0'))
    goto LAB_1431503a3;
    uStack_1f60._0_4_ = uVar27;
    _local_1f68 = *(undefined8 *)(param_1 + 0x17dc8);
    auVar17._4_4_ = local_1f58._12_4_;
    auVar17._0_4_ = uVar41;
    auVar17._8_8_ = 0;
    local_1f58 = auVar17 << 0x40;
    local_2050 = (longlong *)(param_1 + 0x2678);
    local_1f48._8_8_ = 0x700000001;
    local_1f48._0_8_ = local_2050;
    auVar4._8_8_ = 0;
    auVar4._0_8_ = local_1f38._8_8_;
    local_1f38 = auVar4 << 0x40;
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar32 = (longlong *)
              (**(code **)(*DAT_14c8407a8 + 200))
                        (DAT_14c8407a8,L"r.DisableEngineAndAppRegistration",1);
    lVar31 = DAT_14ca9ed28;
    local_2058 = lVar47;
    if (plVar32 == (longlong *)0x0) {
      iVar23 = *piVar40;
      if (iVar23 == 0x40000002) {
        uVar48 = 0;
      }
      else {
        bVar49 = true;
        if ((DAT_14c86a9f8 == '\x01') && (iVar23 != 2)) {
          if (iVar23 == 1) {
            DVar28 = FUN_140ad26c0();
            DVar29 = GetCurrentThreadId();
            bVar49 = DVar28 == DVar29;
          }
          else {
            bVar49 = false;
          }
        }
        uVar48 = (ulonglong)(bVar49 ^ 1);
      }
      iVar23 = *(int *)(lVar31 + uVar48 * 4);
LAB_143150010:
      bVar49 = true;
      bVar50 = true;
      if (iVar23 == 0) {
LAB_14315004b:
        if (DAT_14c764000 == 0) {
          bVar50 = false;
        }
        else {
          lVar47 = 0;
          uVar38 = DAT_14c764000;
          while( true ) {
            uVar43 = *(ushort *)((longlong)&DAT_149e01fe8 + lVar47);
            uVar36 = (uint)uVar43;
            if (uVar38 != uVar43) {
              uVar44 = (uint)uVar38;
              uVar48 = (ulonglong)uVar44;
              if ((uVar43 | uVar38) < 0x80) {
                uVar44 = (uint)(byte)(&DAT_149e05da0)[uVar48];
                uVar36 = (uint)(byte)(&DAT_149e05da0)[uVar43];
                if ((&DAT_149e05da0)[uVar48] == (&DAT_149e05da0)[uVar43]) goto LAB_143150083;
              }
              iVar23 = uVar44 - uVar36;
              goto LAB_1431500b9;
            }
            if (uVar38 == 0) break;
LAB_143150083:
            uVar38 = *(ushort *)((longlong)&DAT_14c764002 + lVar47);
            lVar47 = lVar47 + 2;
          }
          iVar23 = 0;
LAB_1431500b9:
          bVar50 = iVar23 != 0;
        }
        bVar50 = (bool)(bVar50 ^ 1);
        bVar49 = false;
      }
    }
    else {
      lVar31 = (**(code **)(*plVar32 + 0x68))(plVar32);
      lVar47 = DAT_14ca9ed28;
      iVar23 = *piVar40;
      if (iVar23 == 0x40000002) {
        uVar48 = 0;
      }
      else {
        bVar49 = true;
        if ((DAT_14c86a9f8 == '\x01') && (iVar23 != 2)) {
          if (iVar23 == 1) {
            DVar28 = FUN_140ad26c0();
            DVar29 = GetCurrentThreadId();
            bVar49 = DVar28 == DVar29;
          }
          else {
            bVar49 = false;
          }
        }
        uVar48 = (ulonglong)(bVar49 ^ 1);
      }
      bVar49 = true;
      if (*(int *)(lVar47 + uVar48 * 4) == 0) {
        if (lVar31 != 0) {
          iVar23 = *piVar40;
          if (iVar23 == 0x40000002) {
            uVar48 = 0;
          }
          else {
            bVar49 = true;
            if ((DAT_14c86a9f8 == '\x01') && (iVar23 != 2)) {
              if (iVar23 == 1) {
                DVar28 = FUN_140ad26c0();
                DVar29 = GetCurrentThreadId();
                bVar49 = DVar28 == DVar29;
              }
              else {
                bVar49 = false;
              }
            }
            uVar48 = (ulonglong)(bVar49 ^ 1);
          }
          iVar23 = *(int *)(lVar31 + uVar48 * 4);
          goto LAB_143150010;
        }
        goto LAB_14315004b;
      }
      bVar50 = true;
    }
    local_1fd8.Data1 = 0;
    local_1fd8.Data2 = 0;
    local_1fd8.Data3 = 0;
    local_1fd8.Data4[0] = '\0';
    local_1fd8.Data4[1] = '\0';
    local_1fd8.Data4[2] = '\0';
    local_1fd8.Data4[3] = '\0';
    local_1fd8.Data4[4] = '\0';
    local_1fd8.Data4[5] = '\0';
    local_1fd8.Data4[6] = '\0';
    local_1fd8.Data4[7] = '\0';
    local_1fc8 = SUB1612((undefined1  [16])0x0,0);
    uStack_1fbc = 7;
    local_1fb8 = 2;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c868710) && (FUN_144b3d300(&DAT_14c868710), DAT_14c868710 == -1)) {
      FUN_145c3c252(&DAT_14c8686c8);
      DAT_14c868708 = &DAT_14c8686c8;
      atexit(thunk_FUN_14626bbac);
      _Init_thread_footer(&DAT_14c868710);
    }
    FUN_14626b538(DAT_14c868708,&local_268,1);
    FUN_140056680(local_2030,L"UnrealEngine");
    FUN_1401c7f3e(local_1fe8,local_2030,&local_268);
    if (local_2030[0] != (longlong *)0x0) {
      FUN_1400020a8();
    }
    if (local_268 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    lVar47 = local_2068;
    auVar37 = (uchar  [8])&DAT_149dfb77a;
    if (local_1fe0 != 0) {
      auVar37 = local_1fe8;
    }
    if (bVar49) {
      auVar37 = (uchar  [8])&DAT_149dfb77a;
    }
    local_1fd8._0_8_ = &DAT_14c764000;
    if (bVar50) {
      local_1fd8._0_8_ = &DAT_149dfb77a;
    }
    local_1fd8.Data4[0] = auVar37[0];
    local_1fd8.Data4[1] = auVar37[1];
    local_1fd8.Data4[2] = auVar37[2];
    local_1fd8.Data4[3] = auVar37[3];
    local_1fd8.Data4[4] = auVar37[4];
    local_1fd8.Data4[5] = auVar37[5];
    local_1fd8.Data4[6] = auVar37[6];
    local_1fd8.Data4[7] = auVar37[7];
    local_1fc8._0_8_ = 0xffffad00ffffad00;
    local_2030[0] = (longlong *)0x0;
    local_2080 = &local_2038;
    local_2038 = (longlong *)0x0;
    local_2088 = &local_201c;
    local_20a8 = local_2050;
    local_2098 = 7;
    local_20a0 = 1;
    local_2090 = local_2030;
    local_2060 = piVar40;
    D3D11CreateDevice(*(undefined8 *)(local_2068 + 0x17dc8),0,0,uVar41);
    local_248 = 0;
    uStack_240 = 0;
    local_258 = 0;
    uStack_254 = 0;
    uStack_250 = 0;
    uStack_24c = 0;
    local_268 = (longlong *)0x0;
    uStack_260 = 0;
    uStack_25c = 0;
    iVar23 = agsDriverExtensionsDX11_CreateDevice
                       (*(undefined8 *)(lVar47 + 0x2680),local_1f68,&local_1fd8);
    (**(code **)(*local_2030[0] + 0x10))();
    local_2030[0] = (longlong *)0x0;
    (**(code **)(*local_2038 + 0x10))();
    piVar40 = local_2060;
    local_2038 = (longlong *)0x0;
    if (iVar23 == 0) {
      plVar32 = *local_2070;
      if (plVar32 != local_268) {
        *local_2070 = local_268;
        if (local_268 != (longlong *)0x0) {
          (**(code **)(*local_268 + 8))();
        }
        if (plVar32 != (longlong *)0x0) {
          (**(code **)(*plVar32 + 0x10))(plVar32);
        }
      }
      local_201c = uStack_250;
      plVar3 = (longlong *)CONCAT44(uStack_25c,uStack_260);
      plVar32 = *(longlong **)(local_2068 + 0x140);
      if (plVar32 != plVar3) {
        *(longlong **)(local_2068 + 0x140) = plVar3;
        if (plVar3 != (longlong *)0x0) {
          (**(code **)(*plVar3 + 8))();
        }
        if (plVar32 != (longlong *)0x0) {
          (**(code **)(*plVar32 + 0x10))(plVar32);
        }
      }
    }
    else {
      agsDeInitialize(*(undefined8 *)(lVar47 + 0x2680));
      *(undefined8 *)(lVar47 + 0x2680) = 0;
      _DAT_14ca76670 = ZEXT816(0);
      _DAT_14ca76680 = ZEXT816(0);
      DAT_14ca76690 = 0;
      DAT_14ca84df0 = 0;
      piVar40 = local_2060;
    }
    DAT_14ca84e0a = (byte)((uint)uStack_24c >> 0x10) & 1;
    DAT_14ca84e1e = (byte)uStack_24c >> 3 & 1;
    if (local_1fe8 != (uchar  [8])0x0) {
      FUN_1400020a8();
    }
    lVar47 = local_2058;
    param_1 = local_2068;
    if (iVar23 != 0) goto LAB_1431503a3;
  }
  else {
LAB_1431503a3:
    plVar32 = *(longlong **)(param_1 + 0x140);
    if (plVar32 != (longlong *)0x0) {
      *(longlong **)(param_1 + 0x140) = (longlong *)0x0;
      (**(code **)(*plVar32 + 0x10))();
    }
    pplVar19 = local_2070;
    plVar32 = *local_2070;
    if (plVar32 != (longlong *)0x0) {
      *local_2070 = (longlong *)0x0;
      (**(code **)(*plVar32 + 0x10))();
    }
    local_20a8 = (longlong *)(param_1 + 0x2678);
    local_2088 = &local_201c;
    local_2090 = pplVar19;
    local_2098 = 7;
    local_20a0 = 1;
    local_2080 = (longlong **)(param_1 + 0x140);
    iVar23 = D3D11CreateDevice(*(undefined8 *)(param_1 + 0x17dc8),uVar27,0,uVar41);
    if (iVar23 < 0) {
      local_20a8 = (longlong *)0x0;
      FUN_143142730(iVar23,
                    "D3D11CreateDevice( Adapter.DXGIAdapter, DriverType, NULL, DeviceFlags, &FeatureLevel, 1, D3D11_SDK_VERSION, Direct3DDevice.GetInitReference(), &ActualFeatureLevel, Direct3DDeviceIMContext.GetInitReference() )"
                    ,".\\Runtime/Windows/D3D11RHI/Private/Windows/WindowsD3D11Device.cpp",0x5e6);
    }
  }
  uVar33 = FUN_14735a204(*(undefined8 *)(param_1 + 0x150),*(undefined8 *)(param_1 + 0x140));
  *(undefined8 *)(param_1 + 0x148) = uVar33;
  if (0 < iVar24) {
    auVar5._8_8_ = 0;
    auVar5[0] = local_1fd8.Data4[0];
    auVar5[1] = local_1fd8.Data4[1];
    auVar5[2] = local_1fd8.Data4[2];
    auVar5[3] = local_1fd8.Data4[3];
    auVar5[4] = local_1fd8.Data4[4];
    auVar5[5] = local_1fd8.Data4[5];
    auVar5[6] = local_1fd8.Data4[6];
    auVar5[7] = local_1fd8.Data4[7];
    local_1fd8 = (IID)(auVar5 << 0x40);
    iVar24 = (**(code **)**(undefined8 **)(DAT_14ca765e0 + 0x150))
                       (*(undefined8 **)(DAT_14ca765e0 + 0x150),&DAT_14a343098);
    if (-1 < iVar24) {
      pvVar34 = AddVectoredExceptionHandler(1,FUN_1431516da);
      *(PVOID *)(param_1 + 0x17d28) = pvVar34;
      lVar31 = DAT_14ca765f8;
      iVar24 = *piVar40;
      if (iVar24 == 0x40000002) {
        uVar48 = 0;
      }
      else {
        bVar49 = true;
        if ((DAT_14c86a9f8 == '\x01') && (iVar24 != 2)) {
          if (iVar24 == 1) {
            DVar28 = FUN_140ad26c0();
            DVar29 = GetCurrentThreadId();
            bVar49 = DVar28 == DVar29;
          }
          else {
            bVar49 = false;
          }
        }
        uVar48 = (ulonglong)(bVar49 ^ 1);
      }
      lVar30 = DAT_14ca765f8;
      if (*(int *)(lVar31 + uVar48 * 4) < 4) {
        iVar24 = *piVar40;
        if (iVar24 == 0x40000002) {
          uVar48 = 0;
        }
        else {
          bVar49 = true;
          if ((DAT_14c86a9f8 == '\x01') && (iVar24 != 2)) {
            if (iVar24 == 1) {
              DVar28 = FUN_140ad26c0();
              DVar29 = GetCurrentThreadId();
              bVar49 = DVar28 == DVar29;
            }
            else {
              bVar49 = false;
            }
          }
          uVar48 = (ulonglong)(bVar49 ^ 1);
        }
        bVar49 = 1 < *(int *)(lVar30 + uVar48 * 4);
        local_1f28 = 2 - (uint)bVar49;
      }
      else {
        local_1f28 = 1;
        bVar49 = true;
      }
      local_1f38 = (undefined1  [16])0x0;
      local_1f48 = (undefined1  [16])0x0;
      local_1f58 = (undefined1  [16])0x0;
      _local_1f68 = (undefined1  [16])0x0;
      local_1fe8[0] = '\x03';
      local_1fe8[1] = '\0';
      local_1fe8[2] = '\0';
      local_1fe8[3] = '\0';
      local_1fe8[4] = '\x02';
      local_1fe8[5] = '\0';
      local_1fe8[6] = '\0';
      local_1fe8[7] = '\0';
      auStack_1f24 = SUB1612((undefined1  [16])0x0,4);
      auStack_1f24._4_8_ = local_1fe8;
      local_258 = 0x167;
      uStack_254 = 0x300161;
      uStack_250 = 0x37;
      local_268 = (longlong *)0x19800000184;
      uStack_260 = 0x19a;
      uStack_25c = 0x1a4;
      local_1f18 = 7;
      local_1f10 = &local_268;
      (**(code **)(*(longlong *)local_1fd8._0_8_ + 0x88))();
      uVar33 = local_1fd8._0_8_;
      uVar22 = FUN_147364a7d();
      (**(code **)(*(longlong *)uVar33 + 0xf8))(uVar33,0,uVar22);
      uVar33 = local_1fd8._0_8_;
      uVar22 = FUN_147364a7d();
      (**(code **)(*(longlong *)uVar33 + 0xf8))(uVar33,1,uVar22);
      lVar31 = DAT_14ca765f8;
      if (bVar49) {
        uVar33 = local_1fd8._0_8_;
        iVar24 = *piVar40;
        if (iVar24 == 0x40000002) {
          uVar48 = 0;
        }
        else {
          bVar49 = true;
          if ((DAT_14c86a9f8 == '\x01') && (iVar24 != 2)) {
            if (iVar24 == 1) {
              DVar28 = FUN_140ad26c0();
              DVar29 = GetCurrentThreadId();
              bVar49 = DVar28 == DVar29;
            }
            else {
              bVar49 = false;
            }
          }
          uVar48 = (ulonglong)(bVar49 ^ 1);
        }
        (**(code **)(*(longlong *)uVar33 + 0xf8))(uVar33,2,3 < *(int *)(lVar31 + uVar48 * 4));
      }
    }
    if ((longlong *)local_1fd8._0_8_ != (longlong *)0x0) {
      (**(code **)(*(longlong *)local_1fd8._0_8_ + 0x10))();
    }
  }
  DAT_14ca84d8c = 0x5a0;
  (**(code **)(*(longlong *)(param_1 + 0x158) + 8))(lVar47,*(undefined8 *)(param_1 + 0x140));
  *(undefined1 *)(param_1 + 0x25e0) = 0;
  local_2030[0] = (longlong *)0x0;
  iVar24 = (**(code **)(**(longlong **)(param_1 + 0x150) + 0x108))
                     (*(longlong **)(param_1 + 0x150),0,local_2030,8);
  if (iVar24 < 0) {
    local_20a8 = *local_2070;
    FUN_143142730(iVar24,
                  "Direct3DDevice->CheckFeatureSupport(D3D11_FEATURE_THREADING, &ThreadingSupport, sizeof(ThreadingSupport))"
                  ,".\\Runtime/Windows/D3D11RHI/Private/Windows/WindowsD3D11Device.cpp",0x63b);
  }
  lVar47 = DAT_14ca76628;
  DAT_14ca84e06 = (uVar41 & 1) == 0 && (int)local_2030[0] != 0;
  if (DAT_14ca84df4 == 0x1002) {
    iVar24 = *piVar40;
    if (iVar24 == 0x40000002) {
      uVar48 = 0;
    }
    else {
      bVar49 = true;
      if ((DAT_14c86a9f8 == '\x01') && (iVar24 != 2)) {
        if (iVar24 == 1) {
          DVar28 = FUN_140ad26c0();
          DVar29 = GetCurrentThreadId();
          bVar49 = DVar28 == DVar29;
        }
        else {
          bVar49 = false;
        }
      }
      uVar48 = (ulonglong)(bVar49 ^ 1);
    }
    if (*(int *)(lVar47 + uVar48 * 4) != 0) {
      DAT_14ca84e06 = 0;
    }
  }
  pplVar19 = local_2070;
  DAT_14ca84e2b = DAT_14ca84e06;
  if (((DAT_14ca84df4 == 0x10de) && (cVar21 = FUN_1462b4477(), cVar21 != '\0')) &&
     (iVar24 = FUN_1412969d0(), iVar24 == 0)) {
    FUN_142500540(*pplVar19,0x14,&DAT_14ca84e0a);
  }
  lVar47 = DAT_14ca76640;
  if (DAT_14ca84df4 == 0x10de) {
    iVar24 = *piVar40;
    if (iVar24 == 0x40000002) {
      uVar48 = 0;
    }
    else {
      bVar49 = true;
      if ((DAT_14c86a9f8 == '\x01') && (iVar24 != 2)) {
        if (iVar24 == 1) {
          DVar28 = FUN_140ad26c0();
          DVar29 = GetCurrentThreadId();
          bVar49 = DVar28 == DVar29;
        }
        else {
          bVar49 = false;
        }
      }
      uVar48 = (ulonglong)(bVar49 ^ 1);
    }
    if (*(int *)(lVar47 + uVar48 * 4) != 0) {
      auVar6[0xf] = 0;
      auVar6._0_15_ = stack0xffffffffffffe099;
      _local_1f68 = auVar6 << 8;
      iVar24 = FUN_142500540(*pplVar19,1);
      if ((iVar24 == 0) && (local_1f68[0] == '\0')) {
        DAT_14ca84e01 = 0;
      }
    }
  }
  HVar25 = IIDFromString(L"{A7AA6116-9C8D-4BBA-9083-B4D816B71B78}",&local_1fd8);
  if (-1 < HVar25) {
    iVar24 = (**(code **)**pplVar19)(*pplVar19,&local_1fd8,&local_2038);
    if (-1 < iVar24) {
      *(undefined1 *)(param_1 + 0x17d30) = 1;
      FUN_1431d9992(1);
    }
  }
  iVar24 = (**(code **)**pplVar19)(*pplVar19,&DAT_14a343138,local_2040);
  if (-1 < iVar24) {
    FUN_1431d9992(1);
  }
  if (DAT_14ca84df4 == 0x8086) {
    cVar21 = FUN_1462b4477();
    if ((cVar21 != '\0') && (cVar21 = FUN_1462b4477(), cVar21 != '\0')) {
      local_1fe8 = (uchar  [8])((ulonglong)local_1fe8 & 0xffffffff00000000);
      _Dst = (void *)0x0;
      memset(local_1f68,0,0xc0);
      FUN_144bce340(0,0,0);
      iVar24 = FUN_144bcf1a0(*pplVar19,0,local_1fe8);
      uVar27 = local_1fe8._0_4_;
      if (-1 < iVar24) {
        _Size = ((ulonglong)local_1fe8 & 0xffffffff) * 0xc;
        _Dst = (void *)FUN_14001cc68(_Size + (_Size == 0));
        memset(_Dst,0,_Size);
      }
      auVar37 = local_1fe8;
      local_1fe8[0] = (uchar)uVar27;
      local_1fe8[1] = SUB41(uVar27,1);
      local_1fe8[2] = SUB41(uVar27,2);
      local_1fe8[3] = SUB41(uVar27,3);
      local_1fec._0_1_ = local_1fe8[0];
      local_1fec._1_1_ = local_1fe8[1];
      local_1fec._2_1_ = local_1fe8[2];
      local_1fec._3_1_ = local_1fe8[3];
      local_1fe8 = auVar37;
      iVar24 = FUN_144bcf1a0(*pplVar19,_Dst);
      if (((_Dst != (void *)0x0) && (-1 < iVar24)) && (local_1fe8._0_4_ != 0)) {
        uVar36 = 0;
        bVar20 = DAT_14ca84e0a;
        do {
          puVar2 = (uint *)((longlong)_Dst + (ulonglong)uVar36 * 0xc);
          uVar41 = *puVar2;
          if (uVar41 < 3) {
LAB_143150a38:
            if (uVar41 != 0) {
              uVar44 = puVar2[1];
LAB_143150a41:
              if (uVar44 != 0) goto LAB_143150a46;
            }
          }
          else {
            uVar44 = puVar2[1];
            if (uVar44 < 4) goto LAB_143150a41;
            if ((puVar2[2] != 0) && ((bVar20 & 1) == 0)) {
              uStack_1f60._0_4_ = puVar2[2];
              _local_1f68 = *(undefined8 *)puVar2;
              DAT_14ca84e0a = 1;
              uVar41 = *puVar2;
              bVar20 = 1;
              goto LAB_143150a38;
            }
LAB_143150a46:
            if (*(char *)(param_1 + 0x2690) == '\0') {
              if ((((uint)local_1f68 <= uVar41) && (uStack_1f64 <= uVar44)) &&
                 ((uint)uStack_1f60 <= puVar2[2])) {
                uStack_1f60._0_4_ = puVar2[2];
                _local_1f68 = *(undefined8 *)puVar2;
              }
              *(undefined1 *)(param_1 + 0x2690) = 1;
            }
          }
        } while ((((bVar20 & 1) == 0) || (*(char *)(param_1 + 0x2690) == '\0')) &&
                (uVar36 = uVar36 + 1, uVar36 < (uint)local_1fe8._0_4_));
      }
      uStack_24c = 0;
      local_268 = (longlong *)0x0;
      uStack_260 = 0;
      uStack_25c = 0;
      local_258 = 0x4a344992;
      uStack_254 = 1;
      uStack_250 = 5;
      plVar32 = (longlong *)(param_1 + 0x2688);
      iVar24 = FUN_144bcf1d0(*(undefined8 *)(param_1 + 0x150),plVar32,local_1f68);
      if (((iVar24 < 0) && (DAT_14ca84e0a = 0, *plVar32 != 0)) &&
         (cVar21 = FUN_1462b4477(), cVar21 != '\0')) {
        FUN_144bcf310(plVar32);
        *plVar32 = 0;
      }
      if (_Dst != (void *)0x0) {
        FUN_1400020a8(_Dst);
      }
    }
  }
  else if (DAT_14ca84df4 == 0x10de) {
    DAT_14ca84e1e = *(byte *)(param_1 + 0x17d30) ^ 1;
  }
  if ((*(char *)(param_1 + 0x17f05) != '\0') || (iVar24 = FUN_140e55850(), iVar24 < 4)) {
    DAT_14ca84f1d = 0;
  }
  lVar47 = 0x24;
  do {
    pplVar19 = local_2070;
    iVar24 = *(int *)((longlong)&DAT_14c873410 + lVar47);
    uVar36 = 0;
    if (iVar24 != 0) {
      plVar32 = *local_2070;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uStack_1f60;
      _local_1f68 = auVar7 << 0x40;
      local_1f68 = (undefined1  [4])iVar24;
      iVar23 = (**(code **)(*plVar32 + 0x108))(plVar32,2,local_1f68,8);
      uVar36 = 0;
      if (-1 < iVar23) {
        uVar36 = uStack_1f64;
      }
      auVar8._8_8_ = 0;
      auVar8._0_8_ = uStack_1f60;
      _local_1f68 = auVar8 << 0x40;
      (**(code **)(*plVar32 + 0x108))(plVar32,3,local_1f68,8);
      iVar23 = iVar24;
      if (iVar24 < 0x49) {
        if (iVar24 < 0x2c) {
          if (iVar24 == 0x1b) {
            iVar23 = 0x1c;
          }
          else if (iVar24 == 0x13) {
            iVar23 = 0x15;
          }
          else if (iVar24 == 0x27) {
            iVar23 = 0x29;
          }
        }
        else if (iVar24 == 0x46) {
          iVar23 = 0x47;
        }
        else if (iVar24 == 0x35) {
          iVar23 = 0x38;
        }
        else if (iVar24 == 0x2c) {
          iVar23 = 0x2e;
        }
      }
      else if (iVar24 < 0x61) {
        if (iVar24 == 0x5a) {
          iVar23 = 0x57;
        }
        else if (iVar24 == 0x4c) {
          iVar23 = 0x4d;
        }
        else if (iVar24 == 0x49) {
          iVar23 = 0x4a;
        }
      }
      else if (iVar24 == 0x61) {
        iVar23 = 0x62;
      }
      plVar32 = *pplVar19;
      auVar9._8_8_ = 0;
      auVar9._0_8_ = uStack_1f60;
      _local_1f68 = auVar9 << 0x40;
      local_1f68 = (undefined1  [4])iVar23;
      iVar26 = (**(code **)(*plVar32 + 0x108))(plVar32,2,local_1f68,8);
      uVar41 = 0;
      if (-1 < iVar26) {
        uVar41 = uStack_1f64;
      }
      auVar10._8_8_ = 0;
      auVar10._0_8_ = uStack_1f60;
      _local_1f68 = auVar10 << 0x40;
      (**(code **)(*plVar32 + 0x108))(plVar32,3,local_1f68,8);
      if (iVar24 == 0x13) {
        iVar23 = 0x15;
      }
      else if (iVar24 == 0x5a) {
        iVar23 = 0x57;
      }
      else {
        iVar23 = iVar24;
        if (iVar24 == 0x1b) {
          iVar23 = 0x1c;
        }
      }
      plVar32 = *pplVar19;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = uStack_1f60;
      _local_1f68 = auVar11 << 0x40;
      local_1f68 = (undefined1  [4])iVar23;
      uVar27 = (**(code **)(*plVar32 + 0x108))(plVar32,2,local_1f68,8);
      local_2060 = (int *)CONCAT44(local_2060._4_4_,uVar27);
      local_2050 = (longlong *)CONCAT44(local_2050._4_4_,uStack_1f64);
      auVar12._8_8_ = 0;
      auVar12._0_8_ = uStack_1f60;
      _local_1f68 = auVar12 << 0x40;
      iVar23 = (**(code **)(*plVar32 + 0x108))(plVar32,3,local_1f68,8);
      uVar44 = 0;
      if (-1 < iVar23) {
        uVar44 = uStack_1f64;
      }
      local_2058 = CONCAT44(local_2058._4_4_,uVar41);
      iVar23 = iVar24;
      if (iVar24 < 0x49) {
        if (iVar24 < 0x2c) {
          if (iVar24 == 0x1b) {
            iVar23 = 0x1c;
          }
          else if (iVar24 == 0x13) {
            iVar23 = 0x15;
          }
          else if (iVar24 == 0x27) {
            iVar23 = 0x29;
          }
        }
        else if (iVar24 == 0x46) {
          iVar23 = 0x47;
        }
        else if (iVar24 == 0x35) {
          iVar23 = 0x38;
        }
        else if (iVar24 == 0x2c) {
          iVar23 = 0x2e;
        }
      }
      else if (iVar24 < 0x61) {
        if (iVar24 == 0x5a) {
          iVar23 = 0x57;
        }
        else if (iVar24 == 0x4c) {
          iVar23 = 0x4d;
        }
        else if (iVar24 == 0x49) {
          iVar23 = 0x4a;
        }
      }
      else if (iVar24 == 0x61) {
        iVar23 = 0x62;
      }
      plVar32 = *local_2070;
      auVar13._8_8_ = 0;
      auVar13._0_8_ = uStack_1f60;
      _local_1f68 = auVar13 << 0x40;
      local_1f68 = (undefined1  [4])iVar23;
      local_2044 = (**(code **)(*plVar32 + 0x108))(plVar32,2,local_1f68,8);
      local_2048 = uStack_1f64;
      auVar14._8_8_ = 0;
      auVar14._0_8_ = uStack_1f60;
      _local_1f68 = auVar14 << 0x40;
      (**(code **)(*plVar32 + 0x108))(plVar32,3,local_1f68,8);
      if (iVar24 < 0x2c) {
        if (iVar24 == 0x13) {
          iVar24 = 0x14;
        }
        else if (iVar24 == 0x27) {
          iVar24 = 0x28;
        }
      }
      else if (iVar24 == 0x2c) {
        iVar24 = 0x2d;
      }
      else if (iVar24 == 0x35) {
        iVar24 = 0x37;
      }
      plVar32 = *local_2070;
      auVar15._8_8_ = 0;
      auVar15._0_8_ = uStack_1f60;
      _local_1f68 = auVar15 << 0x40;
      local_1f68 = (undefined1  [4])iVar24;
      (**(code **)(*plVar32 + 0x108))(plVar32,2,local_1f68,8);
      auVar16._8_8_ = 0;
      auVar16._0_8_ = uStack_1f60;
      _local_1f68 = auVar16 << 0x40;
      (**(code **)(*plVar32 + 0x108))(plVar32,3,local_1f68,8);
      uVar35 = uVar36 >> 3 & 0x1e;
      uVar41 = (uVar36 & 7) << 0xe | uVar35;
      if (uVar35 != 0) {
        uVar35 = (uint)local_2058 & 0x100 |
                 uVar36 >> 5 & 0x80 | uVar36 >> 10 & 0x40 | uVar36 >> 9 & 0x20;
        uVar36 = uVar41 + uVar35 + 0x800200;
        if (((uint)local_2058 >> 9 & 1) == 0) {
          uVar36 = uVar35 | uVar41;
        }
        uVar36 = (uVar44 & 8) << 8 | (uint)local_2058 >> 0xd & 0x400 | uVar36;
        uVar41 = uVar36 | 0x1000;
        if (-1 < (short)local_2048) {
          uVar41 = uVar36;
        }
        if (local_2044 < 0) {
          uVar41 = uVar36;
        }
        uVar41 = (uVar44 & 0x80) << 6 | uVar41;
      }
      if ((uVar41 >> 0xe & 1) != 0) {
        uVar41 = (uVar44 & 8) << 0x10 | (uVar44 & 0x80) << 0xb | ((uint)local_2058 & 1) << 0x11 |
                 uVar41;
      }
      uVar36 = uVar41 | 0x100000;
      if (((uint)local_2050 >> 0x19 & 1) == 0) {
        uVar36 = uVar41;
      }
      if ((int)local_2060 < 0) {
        uVar36 = uVar41;
      }
      uVar36 = (uVar44 & 0xc0) << 0xf | uVar36;
    }
    lVar31 = local_2068;
    *(uint *)((longlong)&DAT_14c873408 + lVar47 + 4) = uVar36;
    lVar47 = lVar47 + 0x30;
  } while (lVar47 != 0x1194);
  uStack_1f64 = (int)*(float *)(local_2068 + 0x19d8);
  local_1f68 = (undefined1  [4])(int)*(float *)(local_2068 + 0x19d4);
  uStack_1f60._0_4_ = (int)*(float *)(local_2068 + 0x19dc) + (int)*(float *)(local_2068 + 0x19d4);
  uStack_1f60._4_4_ = (int)*(float *)(local_2068 + 0x19e0) + (int)*(float *)(local_2068 + 0x19d8);
  (**(code **)(**(longlong **)(local_2068 + 0x140) + 0x168))(*(longlong **)(local_2068 + 0x140),1);
  *(undefined8 *)(lVar31 + 0x2694) = 0xffffffffffffffff;
  *(undefined8 *)(lVar31 + 0x269c) = 0xffffffff00000000;
  *(undefined8 *)(lVar31 + 0x26a4) = 0xffffffff00000000;
  *(undefined8 *)(lVar31 + 0x26ac) = 0xffffffffffffffff;
  *(undefined4 *)(lVar31 + 0x26b4) = 0;
  iVar24 = (**(code **)(**(longlong **)(lVar31 + 0x150) + 0x108))
                     (*(longlong **)(lVar31 + 0x150),5,local_1f68,0x38);
  if (-1 < iVar24) {
    DAT_14ca84f68 = local_1f48._4_4_ != 0;
  }
  DAT_14ca84f5b = 0;
  iVar24 = (**(code **)(**(longlong **)(lVar31 + 0x150) + 0x108))
                     (*(longlong **)(lVar31 + 0x150),0xf,local_1f68,4);
  DAT_14ca84f58 = local_1f68 != (undefined1  [4])0x0 && -1 < iVar24;
  FUN_147359bfa(lVar31,local_1f68);
  if (local_1f48[0] == '\x01') {
    *(undefined8 *)(lVar31 + 0x4150) = local_1f58._0_8_;
    *(undefined8 *)(lVar31 + 0x4158) = local_1f58._8_8_;
    *(longlong *)(lVar31 + 0x4140) = _local_1f68;
    *(ulonglong *)(&DAT_00004148 + lVar31) = uStack_1f60;
    (&DAT_00004160)[lVar31] = 1;
  }
  else if ((&DAT_00004160)[lVar31] == '\x01') {
    (&DAT_00004160)[lVar31] = 0;
  }
  DAT_14ca84f23 = FUN_14314e892(lVar31);
  DAT_14ca84f4c._0_1_ = 0x12;
  if (((DAT_14ca84df4 == 0x10de) && (iVar24 = FUN_1424ff9b0(&local_268), iVar24 == 0)) &&
     (lVar31 = local_2068, local_1fe8._0_4_ != 0)) {
    uVar48 = 0;
    do {
      memset(&uStack_1f64,0,0x1cf4);
      local_1f68 = (undefined1  [4])0x31cf8;
      iVar24 = FUN_1424ffc40((&local_268)[uVar48]);
      if (iVar24 == -9) {
        local_1f68 = (undefined1  [4])0x11c94;
        iVar24 = FUN_1424ffc40((&local_268)[uVar48]);
      }
      lVar31 = local_2068;
      if (iVar24 != 0) break;
      if (((byte)uStack_1f64 & 1) != 0) {
        if ((ulonglong)(uint)uStack_1f60 != 0) {
          puVar46 = local_1f48 + 8;
          uVar42 = 0;
          puVar45 = local_1de0;
          do {
            if ((local_1f58[uVar42 * 0x1c8 + 8] & 1) != 0) {
              if (uStack_1f60._4_4_ != 0) {
                lVar47 = 0;
                do {
                  if (((puVar46[lVar47 + -4] & 1) != 0) && (*(int *)(puVar46 + lVar47) != 0))
                  goto LAB_143151486;
                  lVar47 = lVar47 + 0x2c;
                } while ((ulonglong)uStack_1f60._4_4_ * 0x2c - lVar47 != 0);
              }
              if (local_1f58._0_4_ != 0) {
                lVar47 = 0;
                do {
                  if (((puVar45[lVar47 + -8] & 1) != 0) && (*(int *)(puVar45 + lVar47) != 0))
                  goto LAB_143151486;
                  lVar47 = lVar47 + 0x18;
                } while ((ulonglong)(uint)local_1f58._0_4_ * 0x18 != lVar47);
              }
            }
            uVar42 = uVar42 + 1;
            puVar46 = puVar46 + 0x1c8;
            puVar45 = puVar45 + 0x1c8;
          } while (uVar42 != (uint)uStack_1f60);
        }
      }
      uVar48 = uVar48 + 1;
    } while (uVar48 < ((ulonglong)local_1fe8 & 0xffffffff));
  }
  pwVar39 = L"false";
LAB_14315125e:
  FUN_140056680(local_1f68,pwVar39);
  FUN_140056680(&local_268,L"RHI.IsGPUOverclocked");
  FUN_14152eab6(&local_268,local_1f68);
  if (local_268 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (_local_1f68 != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(&local_268,&DAT_14a343172);
  local_1fe8[0] = DAT_14cae4098[0];
  local_1fe8[1] = DAT_14cae4098[1];
  local_1fe8[2] = DAT_14cae4098[2];
  local_1fe8[3] = DAT_14cae4098[3];
  local_1fe8[4] = DAT_14cae4098[4];
  local_1fe8[5] = DAT_14cae4098[5];
  local_1fe8[6] = DAT_14cae4098[6];
  local_1fe8[7] = DAT_14cae4098[7];
  uStack_1f60 = (ulonglong)&local_268;
  _local_1f68 = (longlong)local_1fe8;
  FUN_1406e263c(&DAT_14cae4048,&local_1fec,local_1f68,0);
  if (local_268 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  DAT_14ca84eb0 = 1;
  DAT_14ca84ef1 = 1;
  DAT_14ca84e2c = 0;
  DAT_14ca84f67 = 1;
  FUN_1473558a2(lVar31);
  FUN_145ec9638();
  DAT_14ca84d88 = 1;
  if (local_1ff8 != (longlong *)0x0) {
    (**(code **)(*local_1ff8 + 0x10))();
  }
LAB_14314f8ff:
  if ((local_60 ^ (ulonglong)auStack_20c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_143151486:
  pwVar39 = L"true";
  goto LAB_14315125e;
}



// FUNCTION 1431516da FUN_1431516da body=573 status=ok
// SIG undefined FUN_1431516da(void)

undefined8 FUN_1431516da(undefined8 *param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  bool bVar7;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  ulonglong local_48;
  longlong *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar4 = 0;
  if (*(int *)*param_1 == 0x87a) {
    local_38 = (longlong *)0x0;
    iVar1 = (**(code **)**(undefined8 **)(DAT_14ca765e0 + 0x150))
                      (*(undefined8 **)(DAT_14ca765e0 + 0x150),&DAT_14a3405d0);
    if (iVar1 < 0) {
      local_58 = *(undefined8 *)(DAT_14ca765e0 + 0x150);
      FUN_143142730(iVar1,
                    "GD3D11RHI->GetDevice()->QueryInterface(__uuidof(ID3D11Debug), (void**)DebugDevice.GetInitReference())"
                    ,".\\Runtime/Windows/D3D11RHI/Private/Windows/WindowsD3D11Device.cpp",0x94);
    }
    if (local_38 != (longlong *)0x0) {
      local_40 = (longlong *)0x0;
      iVar1 = (**(code **)**(undefined8 **)(DAT_14ca765e0 + 0x150))
                        (*(undefined8 **)(DAT_14ca765e0 + 0x150),&DAT_14a343098);
      if (-1 < iVar1) {
        if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x110) < DAT_14ca766c0) {
          FUN_144b3d300(&DAT_14ca766c0);
          if (DAT_14ca766c0 == -1) {
            if (DAT_14c846b14 == '\0') {
              FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                            L"Attempting to get the command line but it hasn\'t been initialized yet."
                           );
            }
            FUN_14054d46e(&DAT_14c846b20,L"d3dbreakonwarning");
            _Init_thread_footer(&DAT_14ca766c0);
          }
        }
        uVar2 = (**(code **)(*local_40 + 0x48))();
        if ((int)uVar2 < 1) {
          bVar7 = true;
          lVar3 = 0;
        }
        else {
          uVar5 = 0;
          uVar6 = 0;
          lVar3 = 0;
          do {
            local_48 = 0;
            (**(code **)(*local_40 + 0x28))(local_40,uVar5,0,&local_48);
            if (uVar6 < local_48) {
              if (lVar3 != 0) {
                FUN_1400020a8(lVar3);
              }
              lVar3 = FUN_14001cc68(local_48,0);
              uVar6 = local_48;
            }
            if (lVar3 != 0) {
              (**(code **)(*local_40 + 0x28))(local_40,uVar5,lVar3,&local_48);
            }
            uVar5 = uVar5 + 1;
          } while ((uVar2 & 0x7fffffff) != uVar5);
          bVar7 = uVar6 == 0;
        }
        (**(code **)(*local_40 + 0x20))();
        if (!bVar7) {
          FUN_1400020a8(lVar3);
        }
      }
      if (local_40 != (longlong *)0x0) {
        (**(code **)(*local_40 + 0x10))();
      }
      if (local_38 != (longlong *)0x0) {
        (**(code **)(*local_38 + 0x10))();
      }
    }
    uVar4 = 0xffffffff;
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143151918 FUN_143151918 body=831 status=ok
// SIG undefined FUN_143151918(void)

bool FUN_143151918(longlong param_1,longlong *param_2,char param_3)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  longlong lVar9;
  char cVar10;
  bool bVar11;
  ulonglong uVar12;
  undefined1 auStack_108 [32];
  longlong local_e8;
  char local_d5;
  uint local_d4;
  longlong *local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
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
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_d5 = param_3;
LAB_143151967:
  local_d0 = (longlong *)0x0;
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x17dc8) + 0x38))
                    (*(longlong **)(param_1 + 0x17dc8),0,&local_d0);
  iVar5 = 2;
  bVar11 = false;
  if (iVar2 != -0x7785fffe) {
    if (iVar2 < 0) {
      iVar5 = 1;
      bVar11 = false;
    }
    else {
      local_68 = 0x570000001c;
      local_d4 = 0;
      lVar6 = 0;
      bVar11 = false;
      do {
        lVar6 = lVar6 + 4;
        while( true ) {
          uVar8 = *(undefined4 *)((longlong)&uStack_70 + lVar6 + 4);
          local_e8 = 0;
          uVar3 = (**(code **)(*local_d0 + 0x40))(local_d0,uVar8,0,&local_d4);
          if (-1 < (int)uVar3) break;
          if ((uVar3 & 0xfffffffe) != 0x887a0002) {
            bVar11 = false;
            iVar5 = 1;
            goto LAB_143151bef;
          }
          lVar6 = lVar6 + 4;
          if (lVar6 == 0xc) {
            if (!bVar11) {
              local_78 = 0;
              uStack_70 = 0;
              local_88 = 0;
              uStack_80 = 0;
              local_98 = 0;
              uStack_90 = 0;
              local_a8 = 0;
              uStack_a0 = 0;
              local_b8 = 0;
              uStack_b0 = 0;
              local_c8 = 0;
              uStack_c0 = 0;
              (**(code **)(*local_d0 + 0x38))();
              bVar11 = true;
              iVar5 = 3;
              goto LAB_143151bef;
            }
            uVar8 = 0x1c;
            if (local_d4 == 0) goto LAB_143151be8;
            goto LAB_143151a3a;
          }
        }
        if (local_d4 != 0) {
LAB_143151a3a:
          lVar6 = FUN_14001cc68((ulonglong)local_d4 * 0x1c,0x10);
          local_e8 = lVar6;
          iVar2 = (**(code **)(*local_d0 + 0x40))(local_d0,uVar8,0,&local_d4);
          if (iVar2 < 0) {
            local_e8 = 0;
            FUN_143142730(iVar2,"Output->GetDisplayModeList(Format, 0, &NumModes, ModeList)",
                          ".\\Runtime/Windows/D3D11RHI/Private/Windows/WindowsD3D11Device.cpp",0x724
                         );
          }
          uVar4 = (ulonglong)local_d4;
          if (local_d4 == 0) goto LAB_143151bc8;
          uVar12 = 0;
          cVar10 = local_d5;
          goto LAB_143151aa8;
        }
        bVar11 = true;
      } while (lVar6 != 8);
LAB_143151be8:
      bVar11 = true;
      iVar5 = 0;
    }
  }
  goto LAB_143151bef;
LAB_143151aa8:
  do {
    uVar3 = *(uint *)(lVar6 + uVar12 * 0x1c);
    if (uVar3 < 0x28f1) {
      puVar7 = (undefined4 *)(uVar12 * 0x1c + lVar6);
      if ((uint)puVar7[1] < 0x28f1) {
        if (cVar10 == '\0') {
          if ((uint)(puVar7[3] * 0x28f0) < (uint)puVar7[2]) goto LAB_143151b67;
          iVar2 = (int)param_2[1];
        }
        else {
          iVar2 = (int)param_2[1];
          if (0 < (longlong)iVar2) {
            lVar9 = 0;
            do {
              if ((*(uint *)(*param_2 + lVar9) == uVar3) &&
                 (*(uint *)(*param_2 + 4 + lVar9) == puVar7[1])) goto LAB_143151b67;
              lVar9 = lVar9 + 0xc;
            } while ((longlong)iVar2 * 0xc != lVar9);
          }
        }
        *(uint *)(param_2 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
          FUN_146319c42(param_2);
          cVar10 = local_d5;
        }
        lVar9 = *param_2;
        lVar1 = (longlong)iVar2 * 0xc;
        *(undefined4 *)(lVar9 + 8 + lVar1) = 0;
        *(undefined8 *)(lVar9 + lVar1) = 0;
        lVar9 = *param_2;
        *(undefined4 *)(lVar9 + lVar1) = *puVar7;
        *(undefined4 *)(lVar9 + 4 + lVar1) = puVar7[1];
        *(uint *)(lVar9 + 8 + lVar1) = (uint)puVar7[2] / (uint)puVar7[3];
        uVar4 = (ulonglong)local_d4;
      }
    }
LAB_143151b67:
    uVar12 = uVar12 + 1;
  } while (uVar12 < uVar4);
LAB_143151bc8:
  bVar11 = true;
  iVar5 = 0;
  if (lVar6 != 0) {
    FUN_1400020a8(lVar6);
  }
LAB_143151bef:
  if (local_d0 != (longlong *)0x0) {
    (**(code **)(*local_d0 + 0x10))();
  }
  if ((iVar5 != 0) && (iVar5 != 3)) {
    if (iVar5 != 2) {
      bVar11 = false;
      goto LAB_143151c22;
    }
    goto LAB_143151c17;
  }
  if (bVar11) {
LAB_143151c17:
    bVar11 = 0 < (int)param_2[1];
LAB_143151c22:
    if ((local_60 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return bVar11;
  }
  goto LAB_143151967;
}



// FUNCTION 143151c58 FUN_143151c58 body=89 status=ok
// SIG undefined FUN_143151c58(void)

undefined8 * FUN_143151c58(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a33f490;
  if (param_1[7] != 0) {
    LOCK();
    DAT_14ca84ee0 = DAT_14ca84ee0 - (ulonglong)*(uint *)(param_1 + 4);
    UNLOCK();
    if ((longlong *)param_1[7] != (longlong *)0x0) {
      (**(code **)(*(longlong *)param_1[7] + 0x10))();
    }
  }
  *param_1 = &PTR_FUN_14a37f858;
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143151cb2 FUN_143151cb2 body=82 status=ok
// SIG undefined FUN_143151cb2(void)

void FUN_143151cb2(longlong param_1,uint param_2,undefined8 param_3,uint param_4,int param_5)

{
  int *piVar1;
  byte bVar2;
  uint uVar3;
  
  if (param_2 != 0) {
    uVar3 = 0;
    if (param_2 != 0) {
      for (; (param_2 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
      }
    }
    do {
      piVar1 = (int *)(param_1 + (ulonglong)uVar3 * 0x18);
      *piVar1 = *piVar1 + 1;
      if (param_4 < 6) {
        piVar1 = (int *)(param_1 + (ulonglong)uVar3 * 0x18 +
                        *(longlong *)(&DAT_14a344e50 + (ulonglong)param_4 * 8));
        *piVar1 = *piVar1 + param_5;
      }
      bVar2 = (byte)uVar3 & 0x1f;
      param_2 = param_2 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
      if (param_2 == 0) {
        uVar3 = 0x20;
      }
      else {
        uVar3 = 0;
        if (param_2 != 0) {
          for (; (param_2 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
          }
        }
      }
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 143151d04 FUN_143151d04 body=82 status=ok
// SIG undefined FUN_143151d04(void)

void FUN_143151d04(longlong param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  while (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 8) = *puVar1;
    plVar2 = (longlong *)puVar1[1];
    if (plVar2 != (longlong *)0x0) {
      if ((longlong *)*plVar2 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*plVar2 + 0x10))();
      }
      FUN_1400020a8(plVar2);
    }
    FUN_1400020a8(puVar1);
    puVar1 = *(undefined8 **)(param_1 + 8);
  }
  return;
}



// FUNCTION 143151d56 FUN_143151d56 body=226 status=ok
// SIG undefined FUN_143151d56(void)

void FUN_143151d56(int param_1,uint param_2,longlong param_3,int param_4,longlong param_5)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  float *pfVar4;
  longlong lVar5;
  
  if (param_2 != 0) {
    uVar3 = 0;
    uVar2 = 0;
    do {
      if (param_1 != 0) {
        pfVar4 = (float *)((ulonglong)(uint)((int)uVar2 * param_1) * 0x10 + param_5);
        lVar5 = 0;
        do {
          uVar1 = *(uint *)(uVar3 + param_3 + lVar5 * 4);
          *pfVar4 = (float)(uVar1 & 0x3ff) / 1023.0;
          pfVar4[1] = (float)(uVar1 >> 10 & 0x3ff) / 1023.0;
          pfVar4[2] = (float)(uVar1 >> 0x14 & 0x3ff) / 1023.0;
          pfVar4[3] = (float)(uVar1 >> 0x1e) / 3.0;
          pfVar4 = pfVar4 + 4;
          lVar5 = lVar5 + 1;
        } while (param_1 != (int)lVar5);
      }
      uVar2 = uVar2 + 1;
      uVar3 = (ulonglong)(uint)((int)uVar3 + param_4);
    } while (uVar2 != param_2);
  }
  return;
}



// FUNCTION 143151e38 FUN_143151e38 body=2272 status=ok
// SIG undefined FUN_143151e38(void)

void FUN_143151e38(int param_1,uint param_2,longlong param_3,int param_4,longlong param_5,
                  longlong param_6)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  float fVar8;
  uint uVar9;
  float fVar10;
  longlong lVar11;
  ulonglong uVar12;
  float *pfVar13;
  uint uVar14;
  float fVar15;
  uint uVar16;
  longlong lVar17;
  uint uVar18;
  float fVar19;
  uint uVar20;
  float fVar21;
  uint *puVar22;
  uint uVar23;
  ulonglong uVar24;
  uint uVar25;
  float fVar26;
  float fVar27;
  uint uVar28;
  float fVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  ulonglong local_120;
  
  if (*(int *)(param_6 + 4) == 3) {
    if (param_2 != 0) {
      local_120 = 0;
      uVar24 = 0;
      do {
        if (param_1 != 0) {
          lVar11 = local_120 + param_3 + 6;
          puVar22 = (uint *)((ulonglong)(uint)((int)uVar24 * param_1) * 0x10 + param_5);
          lVar17 = 0;
          do {
            uVar1 = *(ushort *)(lVar11 + lVar17 * 8);
            uVar18 = (uint)uVar1 << 0xd;
            if ((uVar18 & 0xf800000) == 0xf800000) {
              fVar19 = (float)(uVar18 | 0x70000000);
            }
            else if ((uVar18 & 0xf800000) == 0) {
              fVar19 = (float)(uVar18 | 0x38800000) + -6.1035156e-05;
            }
            else {
              fVar19 = (float)((uVar18 & 0xfffe000) + 0x38000000);
            }
            uVar2 = *(ushort *)(lVar11 + -2 + lVar17 * 8);
            uVar18 = (uint)uVar2 << 0xd;
            if ((uVar18 & 0xf800000) == 0xf800000) {
              fVar15 = (float)(uVar18 | 0x70000000);
            }
            else if ((uVar18 & 0xf800000) == 0) {
              fVar15 = (float)(uVar18 | 0x38800000) + -6.1035156e-05;
            }
            else {
              fVar15 = (float)((uVar18 & 0xfffe000) + 0x38000000);
            }
            uVar3 = *(ushort *)(lVar11 + -4 + lVar17 * 8);
            uVar18 = (uint)uVar3 << 0xd;
            if ((uVar18 & 0xf800000) == 0xf800000) {
              fVar27 = (float)(uVar18 | 0x70000000);
            }
            else if ((uVar18 & 0xf800000) == 0) {
              fVar27 = (float)(uVar18 | 0x38800000) + -6.1035156e-05;
            }
            else {
              fVar27 = (float)((uVar18 & 0xfffe000) + 0x38000000);
            }
            uVar4 = *(ushort *)(lVar11 + -6 + lVar17 * 8);
            uVar18 = (uint)uVar4 << 0xd;
            if ((uVar18 & 0xf800000) == 0xf800000) {
              fVar8 = (float)(uVar18 | 0x70000000);
            }
            else if ((uVar18 & 0xf800000) == 0) {
              fVar8 = (float)(uVar18 | 0x38800000) + -6.1035156e-05;
            }
            else {
              fVar8 = (float)((uVar18 & 0xfffe000) + 0x38000000);
            }
            *puVar22 = (int)(short)uVar4 & 0x80000000U | (uint)fVar8;
            puVar22[1] = (uint)fVar27 | (int)(short)uVar3 & 0x80000000U;
            puVar22[2] = (uint)fVar15 | (int)(short)uVar2 & 0x80000000U;
            puVar22[3] = (uint)fVar19 | (int)(short)uVar1 & 0x80000000U;
            lVar17 = lVar17 + 1;
            puVar22 = puVar22 + 4;
          } while (param_1 != (int)lVar17);
        }
        uVar24 = uVar24 + 1;
        local_120 = (ulonglong)(uint)((int)local_120 + param_4);
      } while (uVar24 != param_2);
    }
  }
  else if (param_2 != 0) {
    dVar35 = 1.0;
    dVar34 = 0.0;
    uVar24 = 0;
    uVar12 = 0;
    dVar33 = 0.0;
    dVar32 = 0.0;
    dVar31 = 0.0;
    dVar5 = 1.0;
    dVar6 = 1.0;
    dVar7 = 1.0;
    do {
      if (param_1 != 0) {
        lVar11 = uVar24 + param_3;
        lVar17 = 0;
        uVar39 = SUB84(dVar34,0);
        uVar40 = (undefined4)((ulonglong)dVar34 >> 0x20);
        uVar43 = SUB84(dVar33,0);
        uVar44 = (undefined4)((ulonglong)dVar33 >> 0x20);
        uVar45 = SUB84(dVar32,0);
        uVar46 = (undefined4)((ulonglong)dVar32 >> 0x20);
        uVar41 = SUB84(dVar35,0);
        uVar42 = (undefined4)((ulonglong)dVar35 >> 0x20);
        dVar30 = dVar31;
        dVar36 = dVar7;
        dVar37 = dVar6;
        dVar38 = dVar5;
        do {
          uVar1 = *(ushort *)(lVar11 + lVar17 * 8);
          uVar25 = (uint)uVar1 << 0xd;
          uVar18 = uVar25 & 0xf800000;
          if (uVar18 == 0xf800000) {
            fVar19 = (float)(uVar25 | 0x70000000);
          }
          else if (uVar18 == 0) {
            fVar19 = (float)(uVar25 | 0x38800000) + -6.1035156e-05;
          }
          else {
            fVar19 = (float)((uVar25 & 0xfffe000) + 0x38000000);
          }
          uVar2 = *(ushort *)(lVar11 + 2 + lVar17 * 8);
          uVar28 = (uint)uVar2 << 0xd;
          uVar14 = uVar28 & 0xf800000;
          if (uVar14 == 0xf800000) {
            fVar15 = (float)(uVar28 | 0x70000000);
          }
          else if (uVar14 == 0) {
            fVar15 = (float)(uVar28 | 0x38800000) + -6.1035156e-05;
          }
          else {
            fVar15 = (float)((uVar28 & 0xfffe000) + 0x38000000);
          }
          uVar3 = *(ushort *)(lVar11 + 4 + lVar17 * 8);
          uVar9 = (uint)uVar3 << 0xd;
          uVar16 = uVar9 & 0xf800000;
          if (uVar16 == 0xf800000) {
            fVar27 = (float)(uVar9 | 0x70000000);
          }
          else if (uVar16 == 0) {
            fVar27 = (float)(uVar9 | 0x38800000) + -6.1035156e-05;
          }
          else {
            fVar27 = (float)((uVar9 & 0xfffe000) + 0x38000000);
          }
          uVar4 = *(ushort *)(lVar11 + 6 + lVar17 * 8);
          uVar20 = (uint)uVar4 << 0xd;
          uVar23 = uVar20 & 0xf800000;
          if (uVar23 == 0xf800000) {
            fVar8 = (float)(uVar20 | 0x70000000);
          }
          else if (uVar23 == 0) {
            fVar8 = (float)(uVar20 | 0x38800000) + -6.1035156e-05;
          }
          else {
            fVar8 = (float)((uVar20 & 0xfffe000) + 0x38000000);
          }
          if (uVar18 == 0xf800000) {
            fVar26 = (float)(uVar25 | 0x70000000);
          }
          else if (uVar18 == 0) {
            fVar26 = (float)(uVar25 | 0x38800000) + -6.1035156e-05;
          }
          else {
            fVar26 = (float)((uVar25 & 0xfffe000) + 0x38000000);
          }
          if (uVar14 == 0xf800000) {
            fVar29 = (float)(uVar28 | 0x70000000);
          }
          else if (uVar14 == 0) {
            fVar29 = (float)(uVar28 | 0x38800000) + -6.1035156e-05;
          }
          else {
            fVar29 = (float)((uVar28 & 0xfffe000) + 0x38000000);
          }
          if (uVar16 == 0xf800000) {
            fVar10 = (float)(uVar9 | 0x70000000);
          }
          else if (uVar16 == 0) {
            fVar10 = (float)(uVar9 | 0x38800000) + -6.1035156e-05;
          }
          else {
            fVar10 = (float)((uVar9 & 0xfffe000) + 0x38000000);
          }
          if (uVar23 == 0xf800000) {
            fVar21 = (float)(uVar20 | 0x70000000);
          }
          else if (uVar23 == 0) {
            fVar21 = (float)(uVar20 | 0x38800000) + -6.1035156e-05;
          }
          else {
            fVar21 = (float)((uVar20 & 0xfffe000) + 0x38000000);
          }
          uVar18 = (int)(short)uVar1 & 0x80000000;
          dVar31 = (double)(float)((uint)fVar19 | uVar18);
          if (dVar30 <= dVar31) {
            dVar31 = dVar30;
          }
          uVar25 = (int)(short)uVar2 & 0x80000000;
          dVar32 = (double)(float)((uint)fVar15 | uVar25);
          if ((double)CONCAT44(uVar46,uVar45) <= dVar32) {
            dVar32 = (double)CONCAT44(uVar46,uVar45);
          }
          uVar14 = (int)(short)uVar3 & 0x80000000;
          dVar33 = (double)(float)((uint)fVar27 | uVar14);
          if ((double)CONCAT44(uVar44,uVar43) <= dVar33) {
            dVar33 = (double)CONCAT44(uVar44,uVar43);
          }
          uVar28 = (int)(short)uVar4 & 0x80000000;
          dVar34 = (double)(float)((uint)fVar8 | uVar28);
          if ((double)CONCAT44(uVar40,uVar39) <= dVar34) {
            dVar34 = (double)CONCAT44(uVar40,uVar39);
          }
          dVar35 = (double)(float)((uint)fVar26 | uVar18);
          if (dVar35 <= (double)CONCAT44(uVar42,uVar41)) {
            dVar35 = (double)CONCAT44(uVar42,uVar41);
          }
          dVar5 = (double)(float)((uint)fVar29 | uVar25);
          if (dVar5 <= dVar38) {
            dVar5 = dVar38;
          }
          dVar6 = (double)(float)((uint)fVar10 | uVar14);
          if (dVar6 <= dVar37) {
            dVar6 = dVar37;
          }
          dVar7 = (double)(float)(uVar28 | (uint)fVar21);
          if (dVar7 <= dVar36) {
            dVar7 = dVar36;
          }
          lVar17 = lVar17 + 1;
          uVar39 = SUB84(dVar34,0);
          uVar40 = (undefined4)((ulonglong)dVar34 >> 0x20);
          uVar43 = SUB84(dVar33,0);
          uVar44 = (undefined4)((ulonglong)dVar33 >> 0x20);
          uVar45 = SUB84(dVar32,0);
          uVar46 = (undefined4)((ulonglong)dVar32 >> 0x20);
          uVar41 = SUB84(dVar35,0);
          uVar42 = (undefined4)((ulonglong)dVar35 >> 0x20);
          dVar30 = dVar31;
          dVar36 = dVar7;
          dVar37 = dVar6;
          dVar38 = dVar5;
        } while (param_1 != (int)lVar17);
      }
      uVar12 = uVar12 + 1;
      uVar24 = (ulonglong)(uint)((int)uVar24 + param_4);
    } while (uVar12 != param_2);
    uVar18 = 0;
    uVar24 = 0;
    do {
      if (param_1 != 0) {
        lVar11 = (ulonglong)uVar18 + param_3 + 6;
        pfVar13 = (float *)((ulonglong)(uint)((int)uVar24 * param_1) * 0x10 + param_5);
        lVar17 = 0;
        do {
          uVar1 = *(ushort *)(lVar11 + lVar17 * 8);
          uVar25 = (uint)uVar1 << 0xd;
          if ((uVar25 & 0xf800000) == 0xf800000) {
            fVar19 = (float)(uVar25 | 0x70000000);
          }
          else if ((uVar25 & 0xf800000) == 0) {
            fVar19 = (float)(uVar25 | 0x38800000) + -6.1035156e-05;
          }
          else {
            fVar19 = (float)((uVar25 & 0xfffe000) + 0x38000000);
          }
          uVar2 = *(ushort *)(lVar11 + -2 + lVar17 * 8);
          uVar25 = (uint)uVar2 << 0xd;
          if ((uVar25 & 0xf800000) == 0xf800000) {
            fVar15 = (float)(uVar25 | 0x70000000);
          }
          else if ((uVar25 & 0xf800000) == 0) {
            fVar15 = (float)(uVar25 | 0x38800000) + -6.1035156e-05;
          }
          else {
            fVar15 = (float)((uVar25 & 0xfffe000) + 0x38000000);
          }
          uVar3 = *(ushort *)(lVar11 + -4 + lVar17 * 8);
          uVar25 = (uint)uVar3 << 0xd;
          if ((uVar25 & 0xf800000) == 0xf800000) {
            fVar27 = (float)(uVar25 | 0x70000000);
          }
          else if ((uVar25 & 0xf800000) == 0) {
            fVar27 = (float)(uVar25 | 0x38800000) + -6.1035156e-05;
          }
          else {
            fVar27 = (float)((uVar25 & 0xfffe000) + 0x38000000);
          }
          uVar4 = *(ushort *)(lVar11 + -6 + lVar17 * 8);
          uVar25 = (uint)uVar4 << 0xd;
          if ((uVar25 & 0xf800000) == 0xf800000) {
            fVar8 = (float)(uVar25 | 0x70000000);
          }
          else if ((uVar25 & 0xf800000) == 0) {
            fVar8 = (float)(uVar25 | 0x38800000) + -6.1035156e-05;
          }
          else {
            fVar8 = (float)((uVar25 & 0xfffe000) + 0x38000000);
          }
          *pfVar13 = (float)(((double)(float)((int)(short)uVar4 & 0x80000000U | (uint)fVar8) -
                             dVar31) / (dVar35 - dVar31));
          pfVar13[1] = (float)(((double)(float)((uint)fVar27 | (int)(short)uVar3 & 0x80000000U) -
                               dVar32) / (dVar5 - dVar32));
          pfVar13[2] = (float)(((double)(float)((uint)fVar15 | (int)(short)uVar2 & 0x80000000U) -
                               dVar33) / (dVar6 - dVar33));
          pfVar13[3] = (float)(((double)(float)((uint)fVar19 | (int)(short)uVar1 & 0x80000000U) -
                               dVar34) / (dVar7 - dVar34));
          lVar17 = lVar17 + 1;
          pfVar13 = pfVar13 + 4;
        } while (param_1 != (int)lVar17);
      }
      uVar24 = uVar24 + 1;
      uVar18 = uVar18 + param_4;
    } while (uVar24 != param_2);
  }
  return;
}



// FUNCTION 143152718 FUN_143152718 body=723 status=ok
// SIG undefined FUN_143152718(void)

void FUN_143152718(int param_1,uint param_2,float *param_3,int param_4,void *param_5,
                  longlong param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  int iVar8;
  ulonglong uVar9;
  float *pfVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  
  if (*(int *)(param_6 + 4) == 3) {
    memcpy(param_5,param_3,(longlong)(int)(param_1 * param_2 * 0x10));
    return;
  }
  if (param_2 != 0) {
    dVar11 = 1.0;
    dVar16 = 0.0;
    uVar9 = 0;
    dVar5 = 0.0;
    dVar14 = 0.0;
    dVar12 = 0.0;
    dVar13 = 1.0;
    dVar15 = 1.0;
    dVar4 = 1.0;
    do {
      if (param_1 != 0) {
        pfVar10 = (float *)((ulonglong)(uint)((int)uVar9 * param_4) + (longlong)param_3);
        uVar17 = SUB84(dVar16,0);
        uVar18 = (undefined4)((ulonglong)dVar16 >> 0x20);
        uVar25 = SUB84(dVar14,0);
        uVar26 = (undefined4)((ulonglong)dVar14 >> 0x20);
        uVar27 = SUB84(dVar12,0);
        uVar28 = (undefined4)((ulonglong)dVar12 >> 0x20);
        uVar19 = SUB84(dVar11,0);
        uVar20 = (undefined4)((ulonglong)dVar11 >> 0x20);
        uVar21 = SUB84(dVar13,0);
        uVar22 = (undefined4)((ulonglong)dVar13 >> 0x20);
        uVar23 = SUB84(dVar15,0);
        uVar24 = (undefined4)((ulonglong)dVar15 >> 0x20);
        dVar6 = dVar5;
        dVar7 = dVar4;
        iVar8 = param_1;
        do {
          dVar11 = (double)*pfVar10;
          dVar12 = dVar11;
          if ((double)CONCAT44(uVar28,uVar27) <= dVar11) {
            dVar12 = (double)CONCAT44(uVar28,uVar27);
          }
          dVar13 = (double)pfVar10[1];
          dVar14 = dVar13;
          if ((double)CONCAT44(uVar26,uVar25) <= dVar13) {
            dVar14 = (double)CONCAT44(uVar26,uVar25);
          }
          dVar15 = (double)pfVar10[2];
          dVar5 = dVar15;
          if (dVar6 <= dVar15) {
            dVar5 = dVar6;
          }
          dVar4 = (double)pfVar10[3];
          dVar16 = dVar4;
          if ((double)CONCAT44(uVar18,uVar17) <= dVar4) {
            dVar16 = (double)CONCAT44(uVar18,uVar17);
          }
          if (dVar11 <= (double)CONCAT44(uVar20,uVar19)) {
            dVar11 = (double)CONCAT44(uVar20,uVar19);
          }
          if (dVar13 <= (double)CONCAT44(uVar22,uVar21)) {
            dVar13 = (double)CONCAT44(uVar22,uVar21);
          }
          if (dVar15 <= (double)CONCAT44(uVar24,uVar23)) {
            dVar15 = (double)CONCAT44(uVar24,uVar23);
          }
          if (dVar4 <= dVar7) {
            dVar4 = dVar7;
          }
          pfVar10 = pfVar10 + 4;
          uVar17 = SUB84(dVar16,0);
          uVar18 = (undefined4)((ulonglong)dVar16 >> 0x20);
          uVar25 = SUB84(dVar14,0);
          uVar26 = (undefined4)((ulonglong)dVar14 >> 0x20);
          uVar27 = SUB84(dVar12,0);
          uVar28 = (undefined4)((ulonglong)dVar12 >> 0x20);
          uVar19 = SUB84(dVar11,0);
          uVar20 = (undefined4)((ulonglong)dVar11 >> 0x20);
          uVar21 = SUB84(dVar13,0);
          uVar22 = (undefined4)((ulonglong)dVar13 >> 0x20);
          uVar23 = SUB84(dVar15,0);
          uVar24 = (undefined4)((ulonglong)dVar15 >> 0x20);
          iVar8 = iVar8 + -1;
          dVar6 = dVar5;
          dVar7 = dVar4;
        } while (iVar8 != 0);
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 != param_2);
    uVar9 = 0;
    do {
      if (param_1 != 0) {
        pfVar10 = (float *)((ulonglong)(uint)((int)uVar9 * param_1) * 0x10 + (longlong)param_5);
        iVar8 = param_1;
        do {
          fVar1 = param_3[3];
          fVar2 = param_3[2];
          fVar3 = param_3[1];
          *pfVar10 = (float)(((double)*param_3 - dVar12) / (dVar11 - dVar12));
          pfVar10[1] = (float)(((double)fVar3 - dVar14) / (dVar13 - dVar14));
          pfVar10[2] = (float)(((double)fVar2 - dVar5) / (dVar15 - dVar5));
          pfVar10[3] = (float)(((double)fVar1 - dVar16) / (dVar4 - dVar16));
          pfVar10 = pfVar10 + 4;
          param_3 = param_3 + 4;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 != param_2);
  }
  return;
}



// FUNCTION 143152a14 FUN_143152a14 body=213 status=ok
// SIG undefined FUN_143152a14(void)

longlong FUN_143152a14(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar2 = (longlong)(int)param_1[1];
  lVar3 = 0;
  if (lVar2 != 0) {
    param_1 = (longlong *)*param_1;
    lVar3 = lVar2 * 3;
    plVar1 = param_1 + lVar2 * 3;
    do {
      if ((char)param_1[2] == '\0') {
        lVar2 = *param_1;
        lVar3 = param_1[1];
        if (lVar3 == 0) {
          *(undefined4 *)(lVar2 + 0x18) = 0;
          *(undefined8 *)(lVar2 + 0x20) = 0;
          *(undefined4 *)(lVar2 + 0x28) = 0x100000;
          if ((*(longlong *)(lVar2 + 0x38) != 0) &&
             (plVar4 = *(longlong **)(lVar2 + 0x38), lVar3 = DAT_14ca84ee0,
             plVar4 != (longlong *)0x0)) {
            *(undefined8 *)(lVar2 + 0x38) = 0;
LAB_143152abf:
            lVar3 = (**(code **)(*plVar4 + 0x10))();
          }
        }
        else {
          *(undefined4 *)(lVar2 + 0x18) = *(undefined4 *)(lVar3 + 0x18);
          *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)(lVar3 + 0x20);
          *(undefined4 *)(lVar2 + 0x28) = *(undefined4 *)(lVar3 + 0x28);
          if (lVar2 != lVar3) {
            plVar4 = *(longlong **)(lVar2 + 0x38);
            *(undefined8 *)(lVar2 + 0x38) = *(undefined8 *)(lVar3 + 0x38);
            *(undefined8 *)(lVar3 + 0x38) = 0;
            if (plVar4 != (longlong *)0x0) goto LAB_143152abf;
          }
        }
        for (plVar4 = *(longlong **)(lVar2 + 0x30); plVar4 != (longlong *)0x0;
            plVar4 = (longlong *)plVar4[1]) {
          lVar3 = (**(code **)(*plVar4 + 8))(plVar4);
        }
      }
      param_1 = param_1 + 3;
    } while (param_1 != plVar1);
  }
  return lVar3;
}



// FUNCTION 143152aea FUN_143152aea body=248 status=ok
// SIG undefined FUN_143152aea(void)

longlong FUN_143152aea(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  plVar5 = *(longlong **)(param_1 + 0x10);
  lVar2 = (longlong)*(int *)(param_1 + 0x18);
  lVar3 = 0;
  if (lVar2 != 0) {
    lVar3 = lVar2 * 3;
    plVar1 = plVar5 + lVar2 * 3;
    do {
      if ((char)plVar5[2] == '\0') {
        lVar2 = *plVar5;
        lVar3 = plVar5[1];
        if (lVar3 == 0) {
          *(undefined4 *)(lVar2 + 0x18) = 0;
          *(undefined8 *)(lVar2 + 0x20) = 0;
          *(undefined4 *)(lVar2 + 0x28) = 0x100000;
          if ((*(longlong *)(lVar2 + 0x38) != 0) &&
             (plVar4 = *(longlong **)(lVar2 + 0x38), lVar3 = DAT_14ca84ee0,
             plVar4 != (longlong *)0x0)) {
            *(undefined8 *)(lVar2 + 0x38) = 0;
LAB_143152b9b:
            lVar3 = (**(code **)(*plVar4 + 0x10))();
          }
        }
        else {
          *(undefined4 *)(lVar2 + 0x18) = *(undefined4 *)(lVar3 + 0x18);
          *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)(lVar3 + 0x20);
          *(undefined4 *)(lVar2 + 0x28) = *(undefined4 *)(lVar3 + 0x28);
          if (lVar2 != lVar3) {
            plVar4 = *(longlong **)(lVar2 + 0x38);
            *(undefined8 *)(lVar2 + 0x38) = *(undefined8 *)(lVar3 + 0x38);
            *(undefined8 *)(lVar3 + 0x38) = 0;
            if (plVar4 != (longlong *)0x0) goto LAB_143152b9b;
          }
        }
        for (plVar4 = *(longlong **)(lVar2 + 0x30); plVar4 != (longlong *)0x0;
            plVar4 = (longlong *)plVar4[1]) {
          lVar3 = (**(code **)(*plVar4 + 8))(plVar4);
        }
      }
      plVar5 = plVar5 + 3;
    } while (plVar5 != plVar1);
    plVar5 = *(longlong **)(param_1 + 0x10);
  }
  if (plVar5 == (longlong *)0x0) {
    return lVar3;
  }
  lVar3 = FUN_1400020a8(plVar5);
  return lVar3;
}



// FUNCTION 143152be2 FUN_143152be2 body=73 status=ok
// SIG undefined FUN_143152be2(void)

void FUN_143152be2(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  if ((*(byte *)(*(longlong *)(param_1 + 0x10) + 0xa0) & 1) == 0) {
    FUN_14735873c(*(undefined8 *)(param_1 + 0x10));
  }
  puVar2 = *(undefined8 **)(param_1 + 0x10);
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143152c16. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar2)(puVar2,1);
      return;
    }
  }
  return;
}



// FUNCTION 143152c2c FUN_143152c2c body=252 status=ok
// SIG undefined FUN_143152c2c(void)

void FUN_143152c2c(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar4 = (**(code **)(*DAT_14ca83900 + 0x30))();
  local_30 = 0;
  local_38 = (longlong *)0x0;
  iVar3 = (**(code **)(**(longlong **)(lVar4 + 0x150) + 0xc0))();
  if (iVar3 < 0) {
    local_48 = 0;
    FUN_143142730(iVar3,"RHI.GetDevice()->CreateQuery(&Desc, Query.GetInitReference())",
                  ".\\Runtime/Windows/D3D11RHI/Private/D3D11Commands.cpp",0x70b);
  }
  (**(code **)(**(longlong **)(lVar4 + 0x140) + 0xe0))(*(longlong **)(lVar4 + 0x140),local_38);
  plVar2 = local_38;
  local_38 = (longlong *)0x0;
  uVar1 = *param_1;
  *param_1 = 0;
  puVar5 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar5 = 0;
  puVar5[1] = uVar1;
  puVar5[2] = plVar2;
  if (puVar5 != (undefined8 *)0x0) {
    *DAT_14ca75f70 = puVar5;
    DAT_14ca75f70 = puVar5;
    if (local_38 != (longlong *)0x0) {
      (**(code **)(*local_38 + 0x10))();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143152d2a FUN_143152d2a body=279 status=ok
// SIG undefined FUN_143152d2a(void)

void FUN_143152d2a(longlong param_1)

{
  int *piVar1;
  undefined8 uVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar5 = (**(code **)(*DAT_14ca83900 + 0x30))();
  local_30 = 0;
  local_38 = (longlong *)0x0;
  iVar4 = (**(code **)(**(longlong **)(lVar5 + 0x150) + 0xc0))();
  if (iVar4 < 0) {
    local_48 = 0;
    FUN_143142730(iVar4,"RHI.GetDevice()->CreateQuery(&Desc, Query.GetInitReference())",
                  ".\\Runtime/Windows/D3D11RHI/Private/D3D11Commands.cpp",0x70b);
  }
  (**(code **)(**(longlong **)(lVar5 + 0x140) + 0xe0))(*(longlong **)(lVar5 + 0x140),local_38);
  plVar3 = local_38;
  local_38 = (longlong *)0x0;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  puVar6 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar6 = 0;
  puVar6[1] = uVar2;
  puVar6[2] = plVar3;
  if (puVar6 != (undefined8 *)0x0) {
    *DAT_14ca75f70 = puVar6;
    DAT_14ca75f70 = puVar6;
    if (local_38 != (longlong *)0x0) {
      (**(code **)(*local_38 + 0x10))();
    }
  }
  puVar6 = *(undefined8 **)(param_1 + 0x10);
  if (puVar6 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar6 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar6)(puVar6,1);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143152e54 FUN_143152e54 body=63 status=ok
// SIG undefined FUN_143152e54(void)

void FUN_143152e54(longlong param_1)

{
  (**(code **)(**(longlong **)(DAT_14ca765e0 + 0x140) + 0xe0))
            (*(longlong **)(DAT_14ca765e0 + 0x140),*(undefined8 *)(param_1 + 0x10));
  if (*(longlong **)(param_1 + 0x10) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143152e88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))();
    return;
  }
  return;
}



// FUNCTION 143152e94 FUN_143152e94 body=84 status=ok
// SIG undefined FUN_143152e94(void)

void FUN_143152e94(undefined8 *param_1,undefined4 *param_2)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = *(undefined8 *)(param_2 + 8);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  local_28 = param_2[4];
  uStack_24 = param_2[5];
  uStack_20 = param_2[6];
  uStack_1c = param_2[7];
  FUN_14735d08e(*param_1,&local_38);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143152f14 FUN_143152f14 body=29 status=ok
// SIG undefined FUN_143152f14(void)

undefined8 FUN_143152f14(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143152f32 FUN_143152f32 body=108 status=ok
// SIG undefined FUN_143152f32(void)

void FUN_143152f32(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar1 = *param_1;
  plVar2 = *(longlong **)(lVar1 + 0x10);
  if (*(byte *)(lVar1 + 0x18) < 2) {
    plVar4 = plVar2 + 6;
    if (plVar2 == (longlong *)0x0) {
      plVar4 = (longlong *)0x0;
    }
  }
  else {
    if (plVar2 == (longlong *)0x0) {
      lVar3 = 0;
    }
    else {
      lVar3 = (**(code **)(*plVar2 + 0x30))();
    }
    plVar4 = (longlong *)(lVar3 + 0x60);
    if (lVar3 == 0) {
      plVar4 = (longlong *)0x0;
    }
  }
  if (*plVar4 == 0) {
    lVar3 = 0;
  }
  else {
    *(longlong *)(*plVar4 + 0x10) = lVar1 + 0x30;
    lVar3 = *plVar4;
  }
  *(longlong *)(lVar1 + 0x30) = lVar3;
  *(longlong **)(lVar1 + 0x38) = plVar4;
  *plVar4 = lVar1 + 0x28;
  FUN_14735f5d8(lVar1 + 0x28);
  return;
}



// FUNCTION 143152f9e FUN_143152f9e body=109 status=ok
// SIG undefined FUN_143152f9e(void)

void FUN_143152f9e(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  plVar2 = *(longlong **)(lVar1 + 0x10);
  if (*(byte *)(lVar1 + 0x18) < 2) {
    plVar4 = plVar2 + 6;
    if (plVar2 == (longlong *)0x0) {
      plVar4 = (longlong *)0x0;
    }
  }
  else {
    if (plVar2 == (longlong *)0x0) {
      lVar3 = 0;
    }
    else {
      lVar3 = (**(code **)(*plVar2 + 0x30))();
    }
    plVar4 = (longlong *)(lVar3 + 0x60);
    if (lVar3 == 0) {
      plVar4 = (longlong *)0x0;
    }
  }
  if (*plVar4 == 0) {
    lVar3 = 0;
  }
  else {
    *(longlong *)(*plVar4 + 0x10) = lVar1 + 0x30;
    lVar3 = *plVar4;
  }
  *(longlong *)(lVar1 + 0x30) = lVar3;
  *(longlong **)(lVar1 + 0x38) = plVar4;
  *plVar4 = lVar1 + 0x28;
  FUN_14735f5d8(lVar1 + 0x28);
  return;
}



// FUNCTION 14315300c FUN_14315300c body=184 status=ok
// SIG undefined FUN_14315300c(void)

void FUN_14315300c(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x590))
            (*(longlong **)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),
             *(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x28),
             *(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x38));
  lVar4 = *(longlong *)(param_1 + 0x18);
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



// FUNCTION 1431530c4 FUN_1431530c4 body=103 status=ok
// SIG undefined FUN_1431530c4(void)

void FUN_1431530c4(longlong param_1)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = *(undefined4 *)(param_1 + 0x18);
  local_20 = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x70);
  FUN_147355018(*(undefined8 *)(param_1 + 0x40),&local_20,param_1 + 0x20);
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x20) + 0x10))();
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14315312c FUN_14315312c body=58 status=ok
// SIG undefined FUN_14315312c(void)

void FUN_14315312c(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined4 *)(param_1 + 0x20);
  if (*(longlong **)(param_1 + 0x18) == (longlong *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x30))();
  }
  FUN_14314bc12(uVar3,uVar2,uVar1,0);
  return;
}



// FUNCTION 143153166 FUN_143153166 body=184 status=ok
// SIG undefined FUN_143153166(void)

void FUN_143153166(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined4 local_50;
  undefined4 local_48;
  int local_38;
  int local_34;
  undefined4 local_30;
  int local_2c;
  int local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = *param_1;
  if ((longlong *)param_1[1] == (longlong *)0x0) {
    lVar2 = 0;
  }
  else {
    lVar2 = (**(code **)(*(longlong *)param_1[1] + 0x30))();
  }
  local_38 = *(int *)((longlong)param_1 + 0x14);
  local_34 = (int)param_1[3];
  local_30 = 0;
  local_2c = local_38 + *(int *)((longlong)param_1 + 0x24);
  local_28 = local_34 + (int)param_1[5];
  local_24 = 1;
  local_50 = *(undefined4 *)((longlong)param_1 + 0x2c);
  local_58 = param_1[6];
  local_48 = 0;
  (**(code **)(**(longlong **)(lVar1 + 0x140) + 0x180))
            (*(longlong **)(lVar1 + 0x140),*(undefined8 *)(lVar2 + 0x70),(int)param_1[2]);
  if ((char)param_1[7] == '\x01') {
    FUN_1400020a8(param_1[6]);
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143153220 FUN_143153220 body=185 status=ok
// SIG undefined FUN_143153220(void)

void FUN_143153220(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_48;
  int local_38;
  int local_34;
  undefined4 local_30;
  int local_2c;
  int local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (*(longlong **)(param_1 + 0x18) == (longlong *)0x0) {
    lVar3 = 0;
  }
  else {
    lVar3 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x30))();
  }
  local_38 = *(int *)(param_1 + 0x24);
  local_34 = *(int *)(param_1 + 0x28);
  local_30 = 0;
  local_2c = local_38 + *(int *)(param_1 + 0x34);
  local_28 = local_34 + *(int *)(param_1 + 0x38);
  local_24 = 1;
  plVar2 = *(longlong **)(lVar1 + 0x140);
  local_50 = *(undefined4 *)(param_1 + 0x3c);
  local_58 = *(undefined8 *)(param_1 + 0x40);
  local_48 = 0;
  (**(code **)(*plVar2 + 0x180))
            (plVar2,*(undefined8 *)(lVar3 + 0x70),*(undefined4 *)(param_1 + 0x20));
  if (*(char *)(param_1 + 0x48) == '\x01') {
    FUN_1400020a8(*(undefined8 *)(param_1 + 0x40));
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431532da FUN_1431532da body=279 status=ok
// SIG undefined FUN_1431532da(void)

void FUN_1431532da(longlong *param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  undefined1 auStack_98 [32];
  longlong local_78;
  undefined4 local_70;
  undefined4 local_68;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar3 = *param_1;
  if ((longlong *)param_1[1] == (longlong *)0x0) {
    plVar4 = (longlong *)0x0;
  }
  else {
    plVar4 = (longlong *)(**(code **)(*(longlong *)param_1[1] + 0x30))();
  }
  lVar5 = (**(code **)(*plVar4 + 8))(plVar4);
  uVar6 = (ulonglong)((uint)*(byte *)(lVar5 + 0x33) * 0x30);
  iVar1 = *(int *)((longlong)&DAT_14c87341c + uVar6);
  iVar2 = *(int *)((longlong)&DAT_14c873420 + uVar6);
  iVar8 = *(int *)((longlong)param_1 + 0x2c) + iVar1;
  iVar7 = (int)param_1[6] + iVar2;
  local_58 = *(int *)((longlong)param_1 + 0x14);
  local_54 = (int)param_1[3];
  local_50 = *(int *)((longlong)param_1 + 0x1c);
  local_4c = (local_58 + iVar8 + -1) - (iVar8 + -1) % iVar1;
  local_48 = (local_54 + iVar7 + -1) - (iVar7 + -1) % iVar2;
  local_44 = local_50 + *(int *)((longlong)param_1 + 0x34);
  local_68 = *(undefined4 *)((longlong)param_1 + 0x3c);
  local_70 = (undefined4)param_1[7];
  local_78 = param_1[8];
  (**(code **)(**(longlong **)(lVar3 + 0x140) + 0x180))
            (*(longlong **)(lVar3 + 0x140),plVar4[0xe],(int)param_1[2]);
  FUN_1400020a8(param_1[8]);
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431533f2 FUN_1431533f2 body=280 status=ok
// SIG undefined FUN_1431533f2(void)

void FUN_1431533f2(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  ulonglong uVar7;
  int iVar8;
  int iVar9;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_68;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar3 = *(longlong *)(param_1 + 0x10);
  if (*(longlong **)(param_1 + 0x18) == (longlong *)0x0) {
    plVar5 = (longlong *)0x0;
  }
  else {
    plVar5 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x18) + 0x30))();
  }
  lVar6 = (**(code **)(*plVar5 + 8))(plVar5);
  uVar7 = (ulonglong)((uint)*(byte *)(lVar6 + 0x33) * 0x30);
  iVar1 = *(int *)((longlong)&DAT_14c87341c + uVar7);
  iVar2 = *(int *)((longlong)&DAT_14c873420 + uVar7);
  iVar9 = *(int *)(param_1 + 0x3c) + iVar1;
  iVar8 = *(int *)(param_1 + 0x40) + iVar2;
  local_58 = *(int *)(param_1 + 0x24);
  local_54 = *(int *)(param_1 + 0x28);
  local_50 = *(int *)(param_1 + 0x2c);
  local_4c = (local_58 + iVar9 + -1) - (iVar9 + -1) % iVar1;
  local_48 = (local_54 + iVar8 + -1) - (iVar8 + -1) % iVar2;
  local_44 = local_50 + *(int *)(param_1 + 0x44);
  plVar4 = *(longlong **)(lVar3 + 0x140);
  local_68 = *(undefined4 *)(param_1 + 0x4c);
  local_70 = *(undefined4 *)(param_1 + 0x48);
  local_78 = *(undefined8 *)(param_1 + 0x50);
  (**(code **)(*plVar4 + 0x180))(plVar4,plVar5[0xe],*(undefined4 *)(param_1 + 0x20));
  FUN_1400020a8(*(undefined8 *)(param_1 + 0x50));
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14315350c FUN_14315350c body=48 status=ok
// SIG undefined FUN_14315350c(void)

void FUN_14315350c(longlong param_1)

{
  FUN_147361486(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),
                *(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24),
                *(undefined4 *)(param_1 + 0x28),0);
  return;
}



// FUNCTION 14315353c FUN_14315353c body=108 status=ok
// SIG undefined FUN_14315353c(void)

void FUN_14315353c(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar1 = *param_1;
  plVar2 = *(longlong **)(lVar1 + 0x10);
  if (*(byte *)(lVar1 + 0x18) < 2) {
    plVar4 = plVar2 + 6;
    if (plVar2 == (longlong *)0x0) {
      plVar4 = (longlong *)0x0;
    }
  }
  else {
    if (plVar2 == (longlong *)0x0) {
      lVar3 = 0;
    }
    else {
      lVar3 = (**(code **)(*plVar2 + 0x30))();
    }
    plVar4 = (longlong *)(lVar3 + 0x60);
    if (lVar3 == 0) {
      plVar4 = (longlong *)0x0;
    }
  }
  if (*plVar4 == 0) {
    lVar3 = 0;
  }
  else {
    *(longlong *)(*plVar4 + 0x10) = lVar1 + 0x30;
    lVar3 = *plVar4;
  }
  *(longlong *)(lVar1 + 0x30) = lVar3;
  *(longlong **)(lVar1 + 0x38) = plVar4;
  *plVar4 = lVar1 + 0x28;
  FUN_147362a74(lVar1 + 0x28);
  return;
}



// FUNCTION 1431535a8 FUN_1431535a8 body=109 status=ok
// SIG undefined FUN_1431535a8(void)

void FUN_1431535a8(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  plVar2 = *(longlong **)(lVar1 + 0x10);
  if (*(byte *)(lVar1 + 0x18) < 2) {
    plVar4 = plVar2 + 6;
    if (plVar2 == (longlong *)0x0) {
      plVar4 = (longlong *)0x0;
    }
  }
  else {
    if (plVar2 == (longlong *)0x0) {
      lVar3 = 0;
    }
    else {
      lVar3 = (**(code **)(*plVar2 + 0x30))();
    }
    plVar4 = (longlong *)(lVar3 + 0x60);
    if (lVar3 == 0) {
      plVar4 = (longlong *)0x0;
    }
  }
  if (*plVar4 == 0) {
    lVar3 = 0;
  }
  else {
    *(longlong *)(*plVar4 + 0x10) = lVar1 + 0x30;
    lVar3 = *plVar4;
  }
  *(longlong *)(lVar1 + 0x30) = lVar3;
  *(longlong **)(lVar1 + 0x38) = plVar4;
  *plVar4 = lVar1 + 0x28;
  FUN_147362a74(lVar1 + 0x28);
  return;
}



// FUNCTION 143153616 FUN_143153616 body=81 status=ok
// SIG undefined FUN_143153616(void)

void FUN_143153616(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_2 + 0x38);
  (**(code **)(**(longlong **)(lVar2 + 0x128) + 0x198))
            (*(longlong **)(lVar2 + 0x128),*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x40),
             *(undefined8 *)(param_1 + 0x18));
  if ((*(char *)(lVar2 + 0x17d28) == '\x01') && (*(longlong *)(lVar2 + 0x17d40) != 0)) {
    piVar1 = (int *)(*(longlong *)(lVar2 + 0x17d40) + 0x10);
    *piVar1 = *piVar1 + 1;
    piVar1 = (int *)(*(longlong *)(lVar2 + 0x17d40) + 0x14);
    *piVar1 = *piVar1 + 1;
  }
  return;
}



// FUNCTION 143153667 FUN_143153667 body=1300 status=ok
// SIG undefined FUN_143153667(void)

void FUN_143153667(ulonglong *param_1,undefined8 param_2,int param_3,undefined4 param_4,uint param_5
                  ,undefined8 param_6)

{
  longlong lVar1;
  ulonglong *puVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  void *_Src;
  longlong lVar11;
  int iVar12;
  int iVar13;
  undefined8 uVar14;
  ulonglong uVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  longlong lVar18;
  undefined8 *puVar19;
  void *pvVar20;
  int iVar21;
  size_t _Size;
  void *_Dst;
  undefined2 *puVar22;
  uint uVar23;
  undefined1 auStack_88 [32];
  undefined2 *local_68;
  ulonglong local_60;
  undefined8 local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar16 = *(undefined8 *)
            (&DAT_14ca8c1f0 +
            (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) * 8);
  uVar14 = FUN_145ccaf7c();
  uVar15 = 0;
  FUN_1448e935e(uVar16,&local_58,uVar14,0);
  FUN_145ccaf7c();
  lVar11 = local_58;
  if (local_58 != 0) {
    uVar15 = *(ulonglong *)
              (*(longlong *)(*(longlong *)(uStack_50 + 8) + 0x50) +
              (longlong)*(int *)(local_58 + 0xd4) * 8);
    if (uVar15 == 0) {
      uVar15 = FUN_1400bafc2(*(longlong *)(uStack_50 + 8),(longlong)*(int *)(local_58 + 0xd4),1);
    }
  }
  uVar16 = FUN_140029432(param_1,uVar15,0);
  param_1[0x37] = uVar15;
  puVar17 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar19 = puVar17 + 3;
  if ((undefined8 *)param_1[1] < puVar19) {
    FUN_140023dd8(param_1,0x20);
    puVar17 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar19 = puVar17 + 3;
  }
  *param_1 = (ulonglong)puVar19;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar17;
  param_1[6] = (ulonglong)(puVar17 + 1);
  puVar17[1] = 0;
  *puVar17 = &PTR_LAB_14a37d340;
  puVar17[2] = uVar16;
  lVar18 = FUN_144821ef4(param_1);
  FUN_14736a06d(lVar18,local_58 + 0xe0,param_6,0);
  lVar1 = local_58 + 0xe6;
  local_58 = 0;
  uStack_50 = 0;
  FUN_144a86d70(lVar18,lVar1,&local_58,0);
  local_58 = CONCAT44(param_4,param_3);
  uStack_50 = (ulonglong)param_5;
  FUN_144a86d70(lVar18,lVar11 + 0xec,&local_58,0);
  puVar22 = (undefined2 *)(lVar11 + 0xf8);
  FUN_144a86a8e(lVar18,puVar22,param_2);
  iVar12 = *(int *)(lVar18 + 0x30) + *(int *)(lVar18 + 0x20);
  iVar13 = iVar12 + *(int *)(lVar18 + 0x40);
  if (iVar13 != 0 && SCARRY4(iVar12,*(int *)(lVar18 + 0x40)) == iVar13 < 0) {
    puVar17 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar19 = puVar17 + 0xb;
    local_68 = puVar22;
    local_60 = uVar15;
    if ((undefined8 *)param_1[1] < puVar19) {
      FUN_140023dd8(param_1,0x60);
      puVar17 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
      puVar19 = puVar17 + 0xb;
    }
    *param_1 = (ulonglong)puVar19;
    *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
    *(undefined8 **)param_1[6] = puVar17;
    param_1[6] = (ulonglong)(puVar17 + 1);
    uVar16 = *(undefined8 *)(lVar18 + 0x38);
    uVar4 = *(undefined4 *)(lVar18 + 0x40);
    uVar14 = *(undefined8 *)(lVar18 + 0x28);
    uVar5 = *(undefined4 *)(lVar18 + 0x30);
    uVar8 = *(undefined8 *)(lVar18 + 0x18);
    uVar6 = *(undefined4 *)(lVar18 + 0x20);
    uVar9 = *(undefined8 *)(lVar18 + 8);
    uVar7 = *(undefined4 *)(lVar18 + 0x10);
    puVar17[1] = 0;
    *puVar17 = &PTR_FUN_14a1e7fa8;
    puVar17[2] = local_60;
    puVar17[3] = uVar9;
    *(undefined4 *)(puVar17 + 4) = uVar7;
    puVar17[5] = uVar8;
    *(undefined4 *)(puVar17 + 6) = uVar6;
    puVar17[7] = uVar14;
    *(undefined4 *)(puVar17 + 8) = uVar5;
    puVar17[9] = uVar16;
    *(undefined4 *)(puVar17 + 10) = uVar4;
    *(undefined8 *)(lVar18 + 8) = 0;
    *(undefined4 *)(lVar18 + 0x10) = 0;
    *(undefined8 *)(lVar18 + 0x18) = 0;
    *(undefined4 *)(lVar18 + 0x20) = 0;
    *(undefined8 *)(lVar18 + 0x28) = 0;
    *(undefined4 *)(lVar18 + 0x30) = 0;
    *(undefined8 *)(lVar18 + 0x38) = 0;
    *(undefined4 *)(lVar18 + 0x40) = 0;
    uVar15 = local_60;
    puVar22 = local_68;
  }
  iVar12 = param_3 + 0x7e;
  if (-1 < param_3 + 0x3f) {
    iVar12 = param_3 + 0x3f;
  }
  iVar12 = iVar12 >> 6;
  iVar13 = 1;
  if (DAT_14ca84f24 < iVar12) {
    iVar21 = iVar12 + 0xfe;
    if (-1 < iVar12 + 0x7f) {
      iVar21 = iVar12 + 0x7f;
    }
    iVar21 = iVar21 >> 7;
    iVar12 = 0x80;
  }
  else {
    iVar21 = 1;
  }
  if (DAT_14ca84f28 < iVar21) {
    iVar13 = iVar21 + 0xfe;
    if (-1 < iVar21 + 0x7f) {
      iVar13 = iVar21 + 0x7f;
    }
    iVar13 = iVar13 >> 7;
    iVar21 = 0x80;
  }
  puVar17 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar19 = puVar17 + 4;
  if ((undefined8 *)param_1[1] < puVar19) {
    FUN_140023dd8(param_1,0x28);
    puVar17 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar19 = puVar17 + 4;
  }
  *param_1 = (ulonglong)puVar19;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar17;
  param_1[6] = (ulonglong)(puVar17 + 1);
  puVar17[1] = 0;
  *puVar17 = &PTR_LAB_14a1fbc30;
  *(int *)(puVar17 + 2) = iVar12;
  *(int *)((longlong)puVar17 + 0x14) = iVar21;
  *(int *)(puVar17 + 3) = iVar13;
  if (DAT_14ca8507b == '\x01') {
    puVar2 = param_1 + 0x12;
    uVar23 = (uint)param_1[0x13];
    if (0 < (int)uVar23) {
      uVar23 = 0;
      *(undefined4 *)(param_1 + 0x13) = 0;
      if (*(int *)((longlong)param_1 + 0x9c) < 0) {
        FUN_147139e90(puVar2,0);
        uVar23 = (uint)param_1[0x13];
      }
    }
    if ((*(char *)(lVar11 + 0xfa) != '\0') && (*(char *)(lVar11 + 0xfb) != '\x06')) {
      uVar3 = *puVar22;
      *(uint *)(param_1 + 0x13) = uVar23 + 1;
      if (*(uint *)((longlong)param_1 + 0x9c) < uVar23 + 1) {
        FUN_1447477d8(puVar2,uVar23);
      }
      uVar10 = param_1[0x12];
      *(undefined2 *)(uVar10 + (longlong)(int)uVar23 * 4) = uVar3;
      *(undefined1 *)(uVar10 + 2 + (longlong)(int)uVar23 * 4) = 1;
      uVar23 = (uint)param_1[0x13];
    }
    if (0 < (int)uVar23) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar2;
        puVar17 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
        puVar19 = puVar17 + 5;
        if ((undefined8 *)param_1[1] < puVar19) {
          FUN_140023dd8(param_1,0x30);
          puVar17 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
          puVar19 = puVar17 + 5;
        }
        *param_1 = (ulonglong)puVar19;
        *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
        *(undefined8 **)param_1[6] = puVar17;
        param_1[6] = (ulonglong)(puVar17 + 1);
        _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
        pvVar20 = (void *)((ulonglong)uVar23 * 4 + (longlong)_Dst);
        _Size = (ulonglong)uVar23 * 4;
        if ((void *)param_1[1] < pvVar20) {
          FUN_140023dd8(param_1,(uint)_Size | 2);
          _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
          pvVar20 = (void *)(_Size + (longlong)_Dst);
        }
        *param_1 = (ulonglong)pvVar20;
        memcpy(_Dst,_Src,_Size);
        puVar17[1] = 0;
        *puVar17 = &PTR_FUN_14a1fbc38;
        puVar17[2] = uVar15;
        puVar17[3] = _Dst;
        *(uint *)(puVar17 + 4) = uVar23;
      }
      *(undefined4 *)(param_1 + 0x13) = 0;
      if (*(int *)((longlong)param_1 + 0x9c) < 0) {
        FUN_147139e90(puVar2,0);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143153b7c FUN_143153b7c body=1306 status=ok
// SIG undefined FUN_143153b7c(void)

void FUN_143153b7c(ulonglong *param_1,undefined8 param_2,int param_3,undefined4 param_4,uint param_5
                  ,undefined8 param_6)

{
  longlong lVar1;
  ulonglong *puVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  void *_Src;
  longlong lVar11;
  int iVar12;
  int iVar13;
  undefined8 uVar14;
  ulonglong uVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  longlong lVar18;
  undefined8 *puVar19;
  void *pvVar20;
  int iVar21;
  size_t _Size;
  void *_Dst;
  undefined2 *puVar22;
  uint uVar23;
  undefined1 auStack_88 [32];
  undefined2 *local_68;
  ulonglong local_60;
  undefined8 local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar16 = *(undefined8 *)
            (&DAT_14ca8c1f0 +
            (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) * 8);
  uVar14 = FUN_146134f12();
  uVar15 = 0;
  FUN_1448e935e(uVar16,&local_58,uVar14,0);
  FUN_146134f12();
  lVar11 = local_58;
  if (local_58 != 0) {
    uVar15 = *(ulonglong *)
              (*(longlong *)(*(longlong *)(uStack_50 + 8) + 0x50) +
              (longlong)*(int *)(local_58 + 0xd4) * 8);
    if (uVar15 == 0) {
      uVar15 = FUN_1400bafc2(*(longlong *)(uStack_50 + 8),(longlong)*(int *)(local_58 + 0xd4),1);
    }
  }
  uVar16 = FUN_140029432(param_1,uVar15,0);
  param_1[0x37] = uVar15;
  puVar17 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar19 = puVar17 + 3;
  if ((undefined8 *)param_1[1] < puVar19) {
    FUN_140023dd8(param_1,0x20);
    puVar17 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar19 = puVar17 + 3;
  }
  *param_1 = (ulonglong)puVar19;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar17;
  param_1[6] = (ulonglong)(puVar17 + 1);
  puVar17[1] = 0;
  *puVar17 = &PTR_LAB_14a37d340;
  puVar17[2] = uVar16;
  lVar18 = FUN_144821ef4(param_1);
  FUN_141788ec8(lVar18,local_58 + 0xe0,param_6,0);
  lVar1 = local_58 + 0xe6;
  local_58 = 0;
  uStack_50 = 0;
  FUN_144a86d70(lVar18,lVar1,&local_58,0);
  local_58 = CONCAT44(param_4,param_3);
  uStack_50 = (ulonglong)param_5;
  FUN_144a86d70(lVar18,lVar11 + 0xec,&local_58,0);
  puVar22 = (undefined2 *)(lVar11 + 0xf8);
  FUN_144a86a8e(lVar18,puVar22,param_2);
  iVar12 = *(int *)(lVar18 + 0x30) + *(int *)(lVar18 + 0x20);
  iVar13 = iVar12 + *(int *)(lVar18 + 0x40);
  if (iVar13 != 0 && SCARRY4(iVar12,*(int *)(lVar18 + 0x40)) == iVar13 < 0) {
    puVar17 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar19 = puVar17 + 0xb;
    local_68 = puVar22;
    local_60 = uVar15;
    if ((undefined8 *)param_1[1] < puVar19) {
      FUN_140023dd8(param_1,0x60);
      puVar17 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
      puVar19 = puVar17 + 0xb;
    }
    *param_1 = (ulonglong)puVar19;
    *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
    *(undefined8 **)param_1[6] = puVar17;
    param_1[6] = (ulonglong)(puVar17 + 1);
    uVar16 = *(undefined8 *)(lVar18 + 0x38);
    uVar4 = *(undefined4 *)(lVar18 + 0x40);
    uVar14 = *(undefined8 *)(lVar18 + 0x28);
    uVar5 = *(undefined4 *)(lVar18 + 0x30);
    uVar8 = *(undefined8 *)(lVar18 + 0x18);
    uVar6 = *(undefined4 *)(lVar18 + 0x20);
    uVar9 = *(undefined8 *)(lVar18 + 8);
    uVar7 = *(undefined4 *)(lVar18 + 0x10);
    puVar17[1] = 0;
    *puVar17 = &PTR_FUN_14a1e7fa8;
    puVar17[2] = local_60;
    puVar17[3] = uVar9;
    *(undefined4 *)(puVar17 + 4) = uVar7;
    puVar17[5] = uVar8;
    *(undefined4 *)(puVar17 + 6) = uVar6;
    puVar17[7] = uVar14;
    *(undefined4 *)(puVar17 + 8) = uVar5;
    puVar17[9] = uVar16;
    *(undefined4 *)(puVar17 + 10) = uVar4;
    *(undefined8 *)(lVar18 + 8) = 0;
    *(undefined4 *)(lVar18 + 0x10) = 0;
    *(undefined8 *)(lVar18 + 0x18) = 0;
    *(undefined4 *)(lVar18 + 0x20) = 0;
    *(undefined8 *)(lVar18 + 0x28) = 0;
    *(undefined4 *)(lVar18 + 0x30) = 0;
    *(undefined8 *)(lVar18 + 0x38) = 0;
    *(undefined4 *)(lVar18 + 0x40) = 0;
    uVar15 = local_60;
    puVar22 = local_68;
  }
  iVar12 = param_3 + 0x3fe;
  if (-1 < param_3 + 0x1ff) {
    iVar12 = param_3 + 0x1ff;
  }
  iVar12 = iVar12 >> 9;
  iVar13 = 1;
  if (DAT_14ca84f24 < iVar12) {
    iVar21 = iVar12 + 0xfe;
    if (-1 < iVar12 + 0x7f) {
      iVar21 = iVar12 + 0x7f;
    }
    iVar21 = iVar21 >> 7;
    iVar12 = 0x80;
  }
  else {
    iVar21 = 1;
  }
  if (DAT_14ca84f28 < iVar21) {
    iVar13 = iVar21 + 0xfe;
    if (-1 < iVar21 + 0x7f) {
      iVar13 = iVar21 + 0x7f;
    }
    iVar13 = iVar13 >> 7;
    iVar21 = 0x80;
  }
  puVar17 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar19 = puVar17 + 4;
  if ((undefined8 *)param_1[1] < puVar19) {
    FUN_140023dd8(param_1,0x28);
    puVar17 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar19 = puVar17 + 4;
  }
  *param_1 = (ulonglong)puVar19;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar17;
  param_1[6] = (ulonglong)(puVar17 + 1);
  puVar17[1] = 0;
  *puVar17 = &PTR_LAB_14a1fbc30;
  *(int *)(puVar17 + 2) = iVar12;
  *(int *)((longlong)puVar17 + 0x14) = iVar21;
  *(int *)(puVar17 + 3) = iVar13;
  if (DAT_14ca8507b == '\x01') {
    puVar2 = param_1 + 0x12;
    uVar23 = (uint)param_1[0x13];
    if (0 < (int)uVar23) {
      uVar23 = 0;
      *(undefined4 *)(param_1 + 0x13) = 0;
      if (*(int *)((longlong)param_1 + 0x9c) < 0) {
        FUN_147139e90(puVar2,0);
        uVar23 = (uint)param_1[0x13];
      }
    }
    if ((*(char *)(lVar11 + 0xfa) != '\0') && (*(char *)(lVar11 + 0xfb) != '\x06')) {
      uVar3 = *puVar22;
      *(uint *)(param_1 + 0x13) = uVar23 + 1;
      if (*(uint *)((longlong)param_1 + 0x9c) < uVar23 + 1) {
        FUN_1447477d8(puVar2,uVar23);
      }
      uVar10 = param_1[0x12];
      *(undefined2 *)(uVar10 + (longlong)(int)uVar23 * 4) = uVar3;
      *(undefined1 *)(uVar10 + 2 + (longlong)(int)uVar23 * 4) = 1;
      uVar23 = (uint)param_1[0x13];
    }
    if (0 < (int)uVar23) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar2;
        puVar17 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
        puVar19 = puVar17 + 5;
        if ((undefined8 *)param_1[1] < puVar19) {
          FUN_140023dd8(param_1,0x30);
          puVar17 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
          puVar19 = puVar17 + 5;
        }
        *param_1 = (ulonglong)puVar19;
        *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
        *(undefined8 **)param_1[6] = puVar17;
        param_1[6] = (ulonglong)(puVar17 + 1);
        _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
        pvVar20 = (void *)((ulonglong)uVar23 * 4 + (longlong)_Dst);
        _Size = (ulonglong)uVar23 * 4;
        if ((void *)param_1[1] < pvVar20) {
          FUN_140023dd8(param_1,(uint)_Size | 2);
          _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
          pvVar20 = (void *)(_Size + (longlong)_Dst);
        }
        *param_1 = (ulonglong)pvVar20;
        memcpy(_Dst,_Src,_Size);
        puVar17[1] = 0;
        *puVar17 = &PTR_FUN_14a1fbc38;
        puVar17[2] = uVar15;
        puVar17[3] = _Dst;
        *(uint *)(puVar17 + 4) = uVar23;
      }
      *(undefined4 *)(param_1 + 0x13) = 0;
      if (*(int *)((longlong)param_1 + 0x9c) < 0) {
        FUN_147139e90(puVar2,0);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143154097 FUN_143154097 body=1306 status=ok
// SIG undefined FUN_143154097(void)

void FUN_143154097(ulonglong *param_1,undefined8 param_2,int param_3,undefined4 param_4,uint param_5
                  ,undefined8 param_6)

{
  longlong lVar1;
  ulonglong *puVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  void *_Src;
  longlong lVar11;
  int iVar12;
  int iVar13;
  undefined8 uVar14;
  ulonglong uVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  longlong lVar18;
  undefined8 *puVar19;
  void *pvVar20;
  int iVar21;
  size_t _Size;
  void *_Dst;
  undefined2 *puVar22;
  uint uVar23;
  undefined1 auStack_88 [32];
  undefined2 *local_68;
  ulonglong local_60;
  undefined8 local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar16 = *(undefined8 *)
            (&DAT_14ca8c1f0 +
            (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) * 8);
  uVar14 = FUN_14613467e();
  uVar15 = 0;
  FUN_1448e935e(uVar16,&local_58,uVar14,0);
  FUN_14613467e();
  lVar11 = local_58;
  if (local_58 != 0) {
    uVar15 = *(ulonglong *)
              (*(longlong *)(*(longlong *)(uStack_50 + 8) + 0x50) +
              (longlong)*(int *)(local_58 + 0xd4) * 8);
    if (uVar15 == 0) {
      uVar15 = FUN_1400bafc2(*(longlong *)(uStack_50 + 8),(longlong)*(int *)(local_58 + 0xd4),1);
    }
  }
  uVar16 = FUN_140029432(param_1,uVar15,0);
  param_1[0x37] = uVar15;
  puVar17 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar19 = puVar17 + 3;
  if ((undefined8 *)param_1[1] < puVar19) {
    FUN_140023dd8(param_1,0x20);
    puVar17 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar19 = puVar17 + 3;
  }
  *param_1 = (ulonglong)puVar19;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar17;
  param_1[6] = (ulonglong)(puVar17 + 1);
  puVar17[1] = 0;
  *puVar17 = &PTR_LAB_14a37d340;
  puVar17[2] = uVar16;
  lVar18 = FUN_144821ef4(param_1);
  FUN_144abcaea(lVar18,local_58 + 0xe0,param_6,0);
  lVar1 = local_58 + 0xe6;
  local_58 = 0;
  uStack_50 = 0;
  FUN_144a86d70(lVar18,lVar1,&local_58,0);
  local_58 = CONCAT44(param_4,param_3);
  uStack_50 = (ulonglong)param_5;
  FUN_144a86d70(lVar18,lVar11 + 0xec,&local_58,0);
  puVar22 = (undefined2 *)(lVar11 + 0xf8);
  FUN_144a86a8e(lVar18,puVar22,param_2);
  iVar12 = *(int *)(lVar18 + 0x30) + *(int *)(lVar18 + 0x20);
  iVar13 = iVar12 + *(int *)(lVar18 + 0x40);
  if (iVar13 != 0 && SCARRY4(iVar12,*(int *)(lVar18 + 0x40)) == iVar13 < 0) {
    puVar17 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar19 = puVar17 + 0xb;
    local_68 = puVar22;
    local_60 = uVar15;
    if ((undefined8 *)param_1[1] < puVar19) {
      FUN_140023dd8(param_1,0x60);
      puVar17 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
      puVar19 = puVar17 + 0xb;
    }
    *param_1 = (ulonglong)puVar19;
    *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
    *(undefined8 **)param_1[6] = puVar17;
    param_1[6] = (ulonglong)(puVar17 + 1);
    uVar16 = *(undefined8 *)(lVar18 + 0x38);
    uVar4 = *(undefined4 *)(lVar18 + 0x40);
    uVar14 = *(undefined8 *)(lVar18 + 0x28);
    uVar5 = *(undefined4 *)(lVar18 + 0x30);
    uVar8 = *(undefined8 *)(lVar18 + 0x18);
    uVar6 = *(undefined4 *)(lVar18 + 0x20);
    uVar9 = *(undefined8 *)(lVar18 + 8);
    uVar7 = *(undefined4 *)(lVar18 + 0x10);
    puVar17[1] = 0;
    *puVar17 = &PTR_FUN_14a1e7fa8;
    puVar17[2] = local_60;
    puVar17[3] = uVar9;
    *(undefined4 *)(puVar17 + 4) = uVar7;
    puVar17[5] = uVar8;
    *(undefined4 *)(puVar17 + 6) = uVar6;
    puVar17[7] = uVar14;
    *(undefined4 *)(puVar17 + 8) = uVar5;
    puVar17[9] = uVar16;
    *(undefined4 *)(puVar17 + 10) = uVar4;
    *(undefined8 *)(lVar18 + 8) = 0;
    *(undefined4 *)(lVar18 + 0x10) = 0;
    *(undefined8 *)(lVar18 + 0x18) = 0;
    *(undefined4 *)(lVar18 + 0x20) = 0;
    *(undefined8 *)(lVar18 + 0x28) = 0;
    *(undefined4 *)(lVar18 + 0x30) = 0;
    *(undefined8 *)(lVar18 + 0x38) = 0;
    *(undefined4 *)(lVar18 + 0x40) = 0;
    uVar15 = local_60;
    puVar22 = local_68;
  }
  iVar12 = param_3 + 0x3fe;
  if (-1 < param_3 + 0x1ff) {
    iVar12 = param_3 + 0x1ff;
  }
  iVar12 = iVar12 >> 9;
  iVar13 = 1;
  if (DAT_14ca84f24 < iVar12) {
    iVar21 = iVar12 + 0xfe;
    if (-1 < iVar12 + 0x7f) {
      iVar21 = iVar12 + 0x7f;
    }
    iVar21 = iVar21 >> 7;
    iVar12 = 0x80;
  }
  else {
    iVar21 = 1;
  }
  if (DAT_14ca84f28 < iVar21) {
    iVar13 = iVar21 + 0xfe;
    if (-1 < iVar21 + 0x7f) {
      iVar13 = iVar21 + 0x7f;
    }
    iVar13 = iVar13 >> 7;
    iVar21 = 0x80;
  }
  puVar17 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar19 = puVar17 + 4;
  if ((undefined8 *)param_1[1] < puVar19) {
    FUN_140023dd8(param_1,0x28);
    puVar17 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar19 = puVar17 + 4;
  }
  *param_1 = (ulonglong)puVar19;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar17;
  param_1[6] = (ulonglong)(puVar17 + 1);
  puVar17[1] = 0;
  *puVar17 = &PTR_LAB_14a1fbc30;
  *(int *)(puVar17 + 2) = iVar12;
  *(int *)((longlong)puVar17 + 0x14) = iVar21;
  *(int *)(puVar17 + 3) = iVar13;
  if (DAT_14ca8507b == '\x01') {
    puVar2 = param_1 + 0x12;
    uVar23 = (uint)param_1[0x13];
    if (0 < (int)uVar23) {
      uVar23 = 0;
      *(undefined4 *)(param_1 + 0x13) = 0;
      if (*(int *)((longlong)param_1 + 0x9c) < 0) {
        FUN_147139e90(puVar2,0);
        uVar23 = (uint)param_1[0x13];
      }
    }
    if ((*(char *)(lVar11 + 0xfa) != '\0') && (*(char *)(lVar11 + 0xfb) != '\x06')) {
      uVar3 = *puVar22;
      *(uint *)(param_1 + 0x13) = uVar23 + 1;
      if (*(uint *)((longlong)param_1 + 0x9c) < uVar23 + 1) {
        FUN_1447477d8(puVar2,uVar23);
      }
      uVar10 = param_1[0x12];
      *(undefined2 *)(uVar10 + (longlong)(int)uVar23 * 4) = uVar3;
      *(undefined1 *)(uVar10 + 2 + (longlong)(int)uVar23 * 4) = 1;
      uVar23 = (uint)param_1[0x13];
    }
    if (0 < (int)uVar23) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar2;
        puVar17 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
        puVar19 = puVar17 + 5;
        if ((undefined8 *)param_1[1] < puVar19) {
          FUN_140023dd8(param_1,0x30);
          puVar17 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
          puVar19 = puVar17 + 5;
        }
        *param_1 = (ulonglong)puVar19;
        *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
        *(undefined8 **)param_1[6] = puVar17;
        param_1[6] = (ulonglong)(puVar17 + 1);
        _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
        pvVar20 = (void *)((ulonglong)uVar23 * 4 + (longlong)_Dst);
        _Size = (ulonglong)uVar23 * 4;
        if ((void *)param_1[1] < pvVar20) {
          FUN_140023dd8(param_1,(uint)_Size | 2);
          _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
          pvVar20 = (void *)(_Size + (longlong)_Dst);
        }
        *param_1 = (ulonglong)pvVar20;
        memcpy(_Dst,_Src,_Size);
        puVar17[1] = 0;
        *puVar17 = &PTR_FUN_14a1fbc38;
        puVar17[2] = uVar15;
        puVar17[3] = _Dst;
        *(uint *)(puVar17 + 4) = uVar23;
      }
      *(undefined4 *)(param_1 + 0x13) = 0;
      if (*(int *)((longlong)param_1 + 0x9c) < 0) {
        FUN_147139e90(puVar2,0);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431545b2 FUN_1431545b2 body=1306 status=ok
// SIG undefined FUN_1431545b2(void)

void FUN_1431545b2(ulonglong *param_1,undefined8 param_2,int param_3,undefined4 param_4,uint param_5
                  ,undefined8 param_6)

{
  longlong lVar1;
  ulonglong *puVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  void *_Src;
  longlong lVar11;
  int iVar12;
  int iVar13;
  undefined8 uVar14;
  ulonglong uVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  longlong lVar18;
  undefined8 *puVar19;
  void *pvVar20;
  int iVar21;
  size_t _Size;
  void *_Dst;
  undefined2 *puVar22;
  uint uVar23;
  undefined1 auStack_88 [32];
  undefined2 *local_68;
  ulonglong local_60;
  undefined8 local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar16 = *(undefined8 *)
            (&DAT_14ca8c1f0 +
            (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) * 8);
  uVar14 = FUN_146138566();
  uVar15 = 0;
  FUN_1448e935e(uVar16,&local_58,uVar14,0);
  FUN_146138566();
  lVar11 = local_58;
  if (local_58 != 0) {
    uVar15 = *(ulonglong *)
              (*(longlong *)(*(longlong *)(uStack_50 + 8) + 0x50) +
              (longlong)*(int *)(local_58 + 0xd4) * 8);
    if (uVar15 == 0) {
      uVar15 = FUN_1400bafc2(*(longlong *)(uStack_50 + 8),(longlong)*(int *)(local_58 + 0xd4),1);
    }
  }
  uVar16 = FUN_140029432(param_1,uVar15,0);
  param_1[0x37] = uVar15;
  puVar17 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar19 = puVar17 + 3;
  if ((undefined8 *)param_1[1] < puVar19) {
    FUN_140023dd8(param_1,0x20);
    puVar17 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar19 = puVar17 + 3;
  }
  *param_1 = (ulonglong)puVar19;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar17;
  param_1[6] = (ulonglong)(puVar17 + 1);
  puVar17[1] = 0;
  *puVar17 = &PTR_LAB_14a37d340;
  puVar17[2] = uVar16;
  lVar18 = FUN_144821ef4(param_1);
  FUN_14736a06d(lVar18,local_58 + 0xe0,param_6,0);
  lVar1 = local_58 + 0xe6;
  local_58 = 0;
  uStack_50 = 0;
  FUN_144a86d70(lVar18,lVar1,&local_58,0);
  local_58 = CONCAT44(param_4,param_3);
  uStack_50 = (ulonglong)param_5;
  FUN_144a86d70(lVar18,lVar11 + 0xec,&local_58,0);
  puVar22 = (undefined2 *)(lVar11 + 0xf8);
  FUN_144a86a8e(lVar18,puVar22,param_2);
  iVar12 = *(int *)(lVar18 + 0x30) + *(int *)(lVar18 + 0x20);
  iVar13 = iVar12 + *(int *)(lVar18 + 0x40);
  if (iVar13 != 0 && SCARRY4(iVar12,*(int *)(lVar18 + 0x40)) == iVar13 < 0) {
    puVar17 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar19 = puVar17 + 0xb;
    local_68 = puVar22;
    local_60 = uVar15;
    if ((undefined8 *)param_1[1] < puVar19) {
      FUN_140023dd8(param_1,0x60);
      puVar17 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
      puVar19 = puVar17 + 0xb;
    }
    *param_1 = (ulonglong)puVar19;
    *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
    *(undefined8 **)param_1[6] = puVar17;
    param_1[6] = (ulonglong)(puVar17 + 1);
    uVar16 = *(undefined8 *)(lVar18 + 0x38);
    uVar4 = *(undefined4 *)(lVar18 + 0x40);
    uVar14 = *(undefined8 *)(lVar18 + 0x28);
    uVar5 = *(undefined4 *)(lVar18 + 0x30);
    uVar8 = *(undefined8 *)(lVar18 + 0x18);
    uVar6 = *(undefined4 *)(lVar18 + 0x20);
    uVar9 = *(undefined8 *)(lVar18 + 8);
    uVar7 = *(undefined4 *)(lVar18 + 0x10);
    puVar17[1] = 0;
    *puVar17 = &PTR_FUN_14a1e7fa8;
    puVar17[2] = local_60;
    puVar17[3] = uVar9;
    *(undefined4 *)(puVar17 + 4) = uVar7;
    puVar17[5] = uVar8;
    *(undefined4 *)(puVar17 + 6) = uVar6;
    puVar17[7] = uVar14;
    *(undefined4 *)(puVar17 + 8) = uVar5;
    puVar17[9] = uVar16;
    *(undefined4 *)(puVar17 + 10) = uVar4;
    *(undefined8 *)(lVar18 + 8) = 0;
    *(undefined4 *)(lVar18 + 0x10) = 0;
    *(undefined8 *)(lVar18 + 0x18) = 0;
    *(undefined4 *)(lVar18 + 0x20) = 0;
    *(undefined8 *)(lVar18 + 0x28) = 0;
    *(undefined4 *)(lVar18 + 0x30) = 0;
    *(undefined8 *)(lVar18 + 0x38) = 0;
    *(undefined4 *)(lVar18 + 0x40) = 0;
    uVar15 = local_60;
    puVar22 = local_68;
  }
  iVar12 = param_3 + 0x3fe;
  if (-1 < param_3 + 0x1ff) {
    iVar12 = param_3 + 0x1ff;
  }
  iVar12 = iVar12 >> 9;
  iVar13 = 1;
  if (DAT_14ca84f24 < iVar12) {
    iVar21 = iVar12 + 0xfe;
    if (-1 < iVar12 + 0x7f) {
      iVar21 = iVar12 + 0x7f;
    }
    iVar21 = iVar21 >> 7;
    iVar12 = 0x80;
  }
  else {
    iVar21 = 1;
  }
  if (DAT_14ca84f28 < iVar21) {
    iVar13 = iVar21 + 0xfe;
    if (-1 < iVar21 + 0x7f) {
      iVar13 = iVar21 + 0x7f;
    }
    iVar13 = iVar13 >> 7;
    iVar21 = 0x80;
  }
  puVar17 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar19 = puVar17 + 4;
  if ((undefined8 *)param_1[1] < puVar19) {
    FUN_140023dd8(param_1,0x28);
    puVar17 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar19 = puVar17 + 4;
  }
  *param_1 = (ulonglong)puVar19;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar17;
  param_1[6] = (ulonglong)(puVar17 + 1);
  puVar17[1] = 0;
  *puVar17 = &PTR_LAB_14a1fbc30;
  *(int *)(puVar17 + 2) = iVar12;
  *(int *)((longlong)puVar17 + 0x14) = iVar21;
  *(int *)(puVar17 + 3) = iVar13;
  if (DAT_14ca8507b == '\x01') {
    puVar2 = param_1 + 0x12;
    uVar23 = (uint)param_1[0x13];
    if (0 < (int)uVar23) {
      uVar23 = 0;
      *(undefined4 *)(param_1 + 0x13) = 0;
      if (*(int *)((longlong)param_1 + 0x9c) < 0) {
        FUN_147139e90(puVar2,0);
        uVar23 = (uint)param_1[0x13];
      }
    }
    if ((*(char *)(lVar11 + 0xfa) != '\0') && (*(char *)(lVar11 + 0xfb) != '\x06')) {
      uVar3 = *puVar22;
      *(uint *)(param_1 + 0x13) = uVar23 + 1;
      if (*(uint *)((longlong)param_1 + 0x9c) < uVar23 + 1) {
        FUN_1447477d8(puVar2,uVar23);
      }
      uVar10 = param_1[0x12];
      *(undefined2 *)(uVar10 + (longlong)(int)uVar23 * 4) = uVar3;
      *(undefined1 *)(uVar10 + 2 + (longlong)(int)uVar23 * 4) = 1;
      uVar23 = (uint)param_1[0x13];
    }
    if (0 < (int)uVar23) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar2;
        puVar17 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
        puVar19 = puVar17 + 5;
        if ((undefined8 *)param_1[1] < puVar19) {
          FUN_140023dd8(param_1,0x30);
          puVar17 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
          puVar19 = puVar17 + 5;
        }
        *param_1 = (ulonglong)puVar19;
        *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
        *(undefined8 **)param_1[6] = puVar17;
        param_1[6] = (ulonglong)(puVar17 + 1);
        _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
        pvVar20 = (void *)((ulonglong)uVar23 * 4 + (longlong)_Dst);
        _Size = (ulonglong)uVar23 * 4;
        if ((void *)param_1[1] < pvVar20) {
          FUN_140023dd8(param_1,(uint)_Size | 2);
          _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
          pvVar20 = (void *)(_Size + (longlong)_Dst);
        }
        *param_1 = (ulonglong)pvVar20;
        memcpy(_Dst,_Src,_Size);
        puVar17[1] = 0;
        *puVar17 = &PTR_FUN_14a1fbc38;
        puVar17[2] = uVar15;
        puVar17[3] = _Dst;
        *(uint *)(puVar17 + 4) = uVar23;
      }
      *(undefined4 *)(param_1 + 0x13) = 0;
      if (*(int *)((longlong)param_1 + 0x9c) < 0) {
        FUN_147139e90(puVar2,0);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143154acd FUN_143154acd body=1237 status=ok
// SIG undefined FUN_143154acd(void)

void FUN_143154acd(ulonglong *param_1,undefined8 param_2,int param_3,int param_4,uint param_5,
                  undefined8 param_6)

{
  longlong lVar1;
  ulonglong *puVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  void *_Src;
  longlong lVar10;
  int iVar11;
  int iVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  longlong lVar17;
  undefined8 *puVar18;
  void *pvVar19;
  size_t _Size;
  void *_Dst;
  undefined2 *puVar20;
  uint uVar21;
  undefined1 auStack_98 [40];
  ulonglong local_70;
  int local_64;
  undefined2 *local_60;
  undefined8 local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar15 = *(undefined8 *)
            (&DAT_14ca8c1f0 +
            (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) * 8);
  local_70 = param_2;
  uVar13 = FUN_146138dfa();
  uVar14 = 0;
  FUN_1448e935e(uVar15,&local_58,uVar13,0);
  FUN_146138dfa();
  lVar10 = local_58;
  if (local_58 != 0) {
    uVar14 = *(ulonglong *)
              (*(longlong *)(*(longlong *)(uStack_50 + 8) + 0x50) +
              (longlong)*(int *)(local_58 + 0xd4) * 8);
    if (uVar14 == 0) {
      uVar14 = FUN_1400bafc2(*(longlong *)(uStack_50 + 8),(longlong)*(int *)(local_58 + 0xd4),1);
    }
  }
  uVar15 = FUN_140029432(param_1,uVar14,0);
  param_1[0x37] = uVar14;
  puVar16 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar18 = puVar16 + 3;
  if ((undefined8 *)param_1[1] < puVar18) {
    FUN_140023dd8(param_1,0x20);
    puVar16 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar18 = puVar16 + 3;
  }
  *param_1 = (ulonglong)puVar18;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar16;
  param_1[6] = (ulonglong)(puVar16 + 1);
  puVar16[1] = 0;
  *puVar16 = &PTR_LAB_14a37d340;
  puVar16[2] = uVar15;
  lVar17 = FUN_144821ef4(param_1);
  FUN_14736a06d(lVar17,local_58 + 0xe0,param_6,0);
  lVar1 = local_58 + 0xe6;
  local_58 = 0;
  uStack_50 = 0;
  FUN_144a86d70(lVar17,lVar1,&local_58,0);
  local_58 = CONCAT44(param_4,param_3);
  uStack_50 = (ulonglong)param_5;
  FUN_144a86d70(lVar17,lVar10 + 0xec,&local_58,0);
  puVar20 = (undefined2 *)(lVar10 + 0xf8);
  FUN_144a86a8e(lVar17,puVar20,local_70);
  iVar11 = *(int *)(lVar17 + 0x30) + *(int *)(lVar17 + 0x20);
  iVar12 = iVar11 + *(int *)(lVar17 + 0x40);
  local_70 = uVar14;
  if (iVar12 != 0 && SCARRY4(iVar11,*(int *)(lVar17 + 0x40)) == iVar12 < 0) {
    puVar16 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar18 = puVar16 + 0xb;
    local_64 = param_4;
    local_60 = puVar20;
    if ((undefined8 *)param_1[1] < puVar18) {
      FUN_140023dd8(param_1,0x60);
      puVar16 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
      puVar18 = puVar16 + 0xb;
    }
    *param_1 = (ulonglong)puVar18;
    *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
    *(undefined8 **)param_1[6] = puVar16;
    param_1[6] = (ulonglong)(puVar16 + 1);
    uVar15 = *(undefined8 *)(lVar17 + 0x38);
    uVar4 = *(undefined4 *)(lVar17 + 0x40);
    uVar13 = *(undefined8 *)(lVar17 + 0x28);
    uVar5 = *(undefined4 *)(lVar17 + 0x30);
    uVar8 = *(undefined8 *)(lVar17 + 0x18);
    uVar6 = *(undefined4 *)(lVar17 + 0x20);
    uVar9 = *(undefined8 *)(lVar17 + 8);
    uVar7 = *(undefined4 *)(lVar17 + 0x10);
    puVar16[1] = 0;
    *puVar16 = &PTR_FUN_14a1e7fa8;
    puVar16[2] = local_70;
    puVar16[3] = uVar9;
    *(undefined4 *)(puVar16 + 4) = uVar7;
    puVar16[5] = uVar8;
    *(undefined4 *)(puVar16 + 6) = uVar6;
    puVar16[7] = uVar13;
    *(undefined4 *)(puVar16 + 8) = uVar5;
    puVar16[9] = uVar15;
    *(undefined4 *)(puVar16 + 10) = uVar4;
    *(undefined8 *)(lVar17 + 8) = 0;
    *(undefined4 *)(lVar17 + 0x10) = 0;
    *(undefined8 *)(lVar17 + 0x18) = 0;
    *(undefined4 *)(lVar17 + 0x20) = 0;
    *(undefined8 *)(lVar17 + 0x28) = 0;
    *(undefined4 *)(lVar17 + 0x30) = 0;
    *(undefined8 *)(lVar17 + 0x38) = 0;
    *(undefined4 *)(lVar17 + 0x40) = 0;
    puVar20 = local_60;
    param_4 = local_64;
  }
  puVar16 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar18 = puVar16 + 4;
  if ((undefined8 *)param_1[1] < puVar18) {
    FUN_140023dd8(param_1,0x28);
    puVar16 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar18 = puVar16 + 4;
  }
  *param_1 = (ulonglong)puVar18;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar16;
  param_1[6] = (ulonglong)(puVar16 + 1);
  puVar16[1] = 0;
  *puVar16 = &PTR_LAB_14a1fbc30;
  *(uint *)(puVar16 + 2) = param_3 + 7U >> 3;
  *(uint *)((longlong)puVar16 + 0x14) = param_4 + 7U >> 3;
  *(uint *)(puVar16 + 3) = param_5;
  if (DAT_14ca8507b == '\x01') {
    puVar2 = param_1 + 0x12;
    uVar21 = (uint)param_1[0x13];
    if (0 < (int)uVar21) {
      uVar21 = 0;
      *(undefined4 *)(param_1 + 0x13) = 0;
      if (*(int *)((longlong)param_1 + 0x9c) < 0) {
        FUN_147139e90(puVar2,0);
        uVar21 = (uint)param_1[0x13];
      }
    }
    if ((*(char *)(lVar10 + 0xfa) != '\0') && (*(char *)(lVar10 + 0xfb) != '\x06')) {
      uVar3 = *puVar20;
      *(uint *)(param_1 + 0x13) = uVar21 + 1;
      if (*(uint *)((longlong)param_1 + 0x9c) < uVar21 + 1) {
        FUN_1447477d8(puVar2,uVar21);
      }
      uVar14 = param_1[0x12];
      *(undefined2 *)(uVar14 + (longlong)(int)uVar21 * 4) = uVar3;
      *(undefined1 *)(uVar14 + 2 + (longlong)(int)uVar21 * 4) = 1;
      uVar21 = (uint)param_1[0x13];
    }
    if (0 < (int)uVar21) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar2;
        puVar16 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
        puVar18 = puVar16 + 5;
        if ((undefined8 *)param_1[1] < puVar18) {
          FUN_140023dd8(param_1,0x30);
          puVar16 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
          puVar18 = puVar16 + 5;
        }
        *param_1 = (ulonglong)puVar18;
        *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
        *(undefined8 **)param_1[6] = puVar16;
        param_1[6] = (ulonglong)(puVar16 + 1);
        _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
        pvVar19 = (void *)((ulonglong)uVar21 * 4 + (longlong)_Dst);
        _Size = (ulonglong)uVar21 * 4;
        if ((void *)param_1[1] < pvVar19) {
          FUN_140023dd8(param_1,(uint)_Size | 2);
          _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
          pvVar19 = (void *)(_Size + (longlong)_Dst);
        }
        *param_1 = (ulonglong)pvVar19;
        memcpy(_Dst,_Src,_Size);
        puVar16[1] = 0;
        *puVar16 = &PTR_FUN_14a1fbc38;
        puVar16[2] = local_70;
        puVar16[3] = _Dst;
        *(uint *)(puVar16 + 4) = uVar21;
      }
      *(undefined4 *)(param_1 + 0x13) = 0;
      if (*(int *)((longlong)param_1 + 0x9c) < 0) {
        FUN_147139e90(puVar2,0);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143154fa3 FUN_143154fa3 body=1245 status=ok
// SIG undefined FUN_143154fa3(void)

void FUN_143154fa3(ulonglong *param_1,ulonglong param_2,int param_3,int param_4,uint param_5,
                  undefined8 param_6)

{
  longlong lVar1;
  ulonglong *puVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  void *_Src;
  longlong lVar11;
  int iVar12;
  int iVar13;
  undefined8 uVar14;
  ulonglong uVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  longlong lVar18;
  undefined8 *puVar19;
  void *pvVar20;
  size_t _Size;
  void *_Dst;
  undefined2 *puVar21;
  uint uVar22;
  undefined1 auStack_98 [40];
  ulonglong local_70;
  int local_68;
  int local_64;
  undefined2 *local_60;
  undefined8 local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar16 = *(undefined8 *)
            (&DAT_14ca8c1f0 +
            (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) * 8);
  local_70 = param_2;
  uVar14 = FUN_14613603a();
  uVar15 = 0;
  FUN_1448e935e(uVar16,&local_58,uVar14,0);
  FUN_14613603a();
  lVar11 = local_58;
  if (local_58 != 0) {
    uVar15 = *(ulonglong *)
              (*(longlong *)(*(longlong *)(uStack_50 + 8) + 0x50) +
              (longlong)*(int *)(local_58 + 0xd4) * 8);
    if (uVar15 == 0) {
      uVar15 = FUN_1400bafc2(*(longlong *)(uStack_50 + 8),(longlong)*(int *)(local_58 + 0xd4),1);
    }
  }
  uVar16 = FUN_140029432(param_1,uVar15,0);
  param_1[0x37] = uVar15;
  puVar17 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar19 = puVar17 + 3;
  if ((undefined8 *)param_1[1] < puVar19) {
    FUN_140023dd8(param_1,0x20);
    puVar17 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar19 = puVar17 + 3;
  }
  *param_1 = (ulonglong)puVar19;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar17;
  param_1[6] = (ulonglong)(puVar17 + 1);
  puVar17[1] = 0;
  *puVar17 = &PTR_LAB_14a37d340;
  puVar17[2] = uVar16;
  lVar18 = FUN_144821ef4(param_1);
  FUN_141788ec8(lVar18,local_58 + 0xe0,param_6,0);
  lVar1 = local_58 + 0xe6;
  local_58 = 0;
  uStack_50 = 0;
  FUN_144a86d70(lVar18,lVar1,&local_58,0);
  local_58 = CONCAT44(param_4,param_3);
  uStack_50 = (ulonglong)param_5;
  FUN_144a86d70(lVar18,lVar11 + 0xec,&local_58,0);
  puVar21 = (undefined2 *)(lVar11 + 0xf8);
  FUN_144a86a8e(lVar18,puVar21,local_70);
  iVar12 = *(int *)(lVar18 + 0x30) + *(int *)(lVar18 + 0x20);
  iVar13 = iVar12 + *(int *)(lVar18 + 0x40);
  if (iVar13 != 0 && SCARRY4(iVar12,*(int *)(lVar18 + 0x40)) == iVar13 < 0) {
    puVar17 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar19 = puVar17 + 0xb;
    local_70 = uVar15;
    local_68 = param_3;
    local_64 = param_4;
    local_60 = puVar21;
    if ((undefined8 *)param_1[1] < puVar19) {
      FUN_140023dd8(param_1,0x60);
      puVar17 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
      puVar19 = puVar17 + 0xb;
    }
    *param_1 = (ulonglong)puVar19;
    *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
    *(undefined8 **)param_1[6] = puVar17;
    param_1[6] = (ulonglong)(puVar17 + 1);
    uVar16 = *(undefined8 *)(lVar18 + 0x38);
    uVar4 = *(undefined4 *)(lVar18 + 0x40);
    uVar14 = *(undefined8 *)(lVar18 + 0x28);
    uVar5 = *(undefined4 *)(lVar18 + 0x30);
    uVar8 = *(undefined8 *)(lVar18 + 0x18);
    uVar6 = *(undefined4 *)(lVar18 + 0x20);
    uVar9 = *(undefined8 *)(lVar18 + 8);
    uVar7 = *(undefined4 *)(lVar18 + 0x10);
    puVar17[1] = 0;
    *puVar17 = &PTR_FUN_14a1e7fa8;
    puVar17[2] = local_70;
    puVar17[3] = uVar9;
    *(undefined4 *)(puVar17 + 4) = uVar7;
    puVar17[5] = uVar8;
    *(undefined4 *)(puVar17 + 6) = uVar6;
    puVar17[7] = uVar14;
    *(undefined4 *)(puVar17 + 8) = uVar5;
    puVar17[9] = uVar16;
    *(undefined4 *)(puVar17 + 10) = uVar4;
    *(undefined8 *)(lVar18 + 8) = 0;
    *(undefined4 *)(lVar18 + 0x10) = 0;
    *(undefined8 *)(lVar18 + 0x18) = 0;
    *(undefined4 *)(lVar18 + 0x20) = 0;
    *(undefined8 *)(lVar18 + 0x28) = 0;
    *(undefined4 *)(lVar18 + 0x30) = 0;
    *(undefined8 *)(lVar18 + 0x38) = 0;
    *(undefined4 *)(lVar18 + 0x40) = 0;
    uVar15 = local_70;
    puVar21 = local_60;
    param_4 = local_64;
    param_3 = local_68;
  }
  puVar17 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar19 = puVar17 + 4;
  if ((undefined8 *)param_1[1] < puVar19) {
    FUN_140023dd8(param_1,0x28);
    puVar17 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar19 = puVar17 + 4;
  }
  *param_1 = (ulonglong)puVar19;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar17;
  param_1[6] = (ulonglong)(puVar17 + 1);
  puVar17[1] = 0;
  *puVar17 = &PTR_LAB_14a1fbc30;
  *(uint *)(puVar17 + 2) = param_3 + 3U >> 2;
  *(uint *)((longlong)puVar17 + 0x14) = param_4 + 3U >> 2;
  *(uint *)(puVar17 + 3) = param_5 + 3 >> 2;
  if (DAT_14ca8507b == '\x01') {
    puVar2 = param_1 + 0x12;
    uVar22 = (uint)param_1[0x13];
    if (0 < (int)uVar22) {
      uVar22 = 0;
      *(undefined4 *)(param_1 + 0x13) = 0;
      if (*(int *)((longlong)param_1 + 0x9c) < 0) {
        FUN_147139e90(puVar2,0);
        uVar22 = (uint)param_1[0x13];
      }
    }
    if ((*(char *)(lVar11 + 0xfa) != '\0') && (*(char *)(lVar11 + 0xfb) != '\x06')) {
      uVar3 = *puVar21;
      *(uint *)(param_1 + 0x13) = uVar22 + 1;
      if (*(uint *)((longlong)param_1 + 0x9c) < uVar22 + 1) {
        FUN_1447477d8(puVar2,uVar22);
      }
      uVar10 = param_1[0x12];
      *(undefined2 *)(uVar10 + (longlong)(int)uVar22 * 4) = uVar3;
      *(undefined1 *)(uVar10 + 2 + (longlong)(int)uVar22 * 4) = 1;
      uVar22 = (uint)param_1[0x13];
    }
    if (0 < (int)uVar22) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar2;
        puVar17 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
        puVar19 = puVar17 + 5;
        if ((undefined8 *)param_1[1] < puVar19) {
          FUN_140023dd8(param_1,0x30);
          puVar17 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
          puVar19 = puVar17 + 5;
        }
        *param_1 = (ulonglong)puVar19;
        *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
        *(undefined8 **)param_1[6] = puVar17;
        param_1[6] = (ulonglong)(puVar17 + 1);
        _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
        pvVar20 = (void *)((ulonglong)uVar22 * 4 + (longlong)_Dst);
        _Size = (ulonglong)uVar22 * 4;
        if ((void *)param_1[1] < pvVar20) {
          FUN_140023dd8(param_1,(uint)_Size | 2);
          _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
          pvVar20 = (void *)(_Size + (longlong)_Dst);
        }
        *param_1 = (ulonglong)pvVar20;
        memcpy(_Dst,_Src,_Size);
        puVar17[1] = 0;
        *puVar17 = &PTR_FUN_14a1fbc38;
        puVar17[2] = uVar15;
        puVar17[3] = _Dst;
        *(uint *)(puVar17 + 4) = uVar22;
      }
      *(undefined4 *)(param_1 + 0x13) = 0;
      if (*(int *)((longlong)param_1 + 0x9c) < 0) {
        FUN_147139e90(puVar2,0);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143155481 FUN_143155481 body=1245 status=ok
// SIG undefined FUN_143155481(void)

void FUN_143155481(ulonglong *param_1,ulonglong param_2,int param_3,int param_4,uint param_5,
                  undefined8 param_6)

{
  longlong lVar1;
  ulonglong *puVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  void *_Src;
  longlong lVar11;
  int iVar12;
  int iVar13;
  undefined8 uVar14;
  ulonglong uVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  longlong lVar18;
  undefined8 *puVar19;
  void *pvVar20;
  size_t _Size;
  void *_Dst;
  undefined2 *puVar21;
  uint uVar22;
  undefined1 auStack_98 [40];
  ulonglong local_70;
  int local_68;
  int local_64;
  undefined2 *local_60;
  undefined8 local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar16 = *(undefined8 *)
            (&DAT_14ca8c1f0 +
            (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) * 8);
  local_70 = param_2;
  uVar14 = FUN_146138b1e();
  uVar15 = 0;
  FUN_1448e935e(uVar16,&local_58,uVar14,0);
  FUN_146138b1e();
  lVar11 = local_58;
  if (local_58 != 0) {
    uVar15 = *(ulonglong *)
              (*(longlong *)(*(longlong *)(uStack_50 + 8) + 0x50) +
              (longlong)*(int *)(local_58 + 0xd4) * 8);
    if (uVar15 == 0) {
      uVar15 = FUN_1400bafc2(*(longlong *)(uStack_50 + 8),(longlong)*(int *)(local_58 + 0xd4),1);
    }
  }
  uVar16 = FUN_140029432(param_1,uVar15,0);
  param_1[0x37] = uVar15;
  puVar17 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar19 = puVar17 + 3;
  if ((undefined8 *)param_1[1] < puVar19) {
    FUN_140023dd8(param_1,0x20);
    puVar17 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar19 = puVar17 + 3;
  }
  *param_1 = (ulonglong)puVar19;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar17;
  param_1[6] = (ulonglong)(puVar17 + 1);
  puVar17[1] = 0;
  *puVar17 = &PTR_LAB_14a37d340;
  puVar17[2] = uVar16;
  lVar18 = FUN_144821ef4(param_1);
  FUN_14736a06d(lVar18,local_58 + 0xe0,param_6,0);
  lVar1 = local_58 + 0xe6;
  local_58 = 0;
  uStack_50 = 0;
  FUN_144a86d70(lVar18,lVar1,&local_58,0);
  local_58 = CONCAT44(param_4,param_3);
  uStack_50 = (ulonglong)param_5;
  FUN_144a86d70(lVar18,lVar11 + 0xec,&local_58,0);
  puVar21 = (undefined2 *)(lVar11 + 0xf8);
  FUN_144a86a8e(lVar18,puVar21,local_70);
  iVar12 = *(int *)(lVar18 + 0x30) + *(int *)(lVar18 + 0x20);
  iVar13 = iVar12 + *(int *)(lVar18 + 0x40);
  if (iVar13 != 0 && SCARRY4(iVar12,*(int *)(lVar18 + 0x40)) == iVar13 < 0) {
    puVar17 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar19 = puVar17 + 0xb;
    local_70 = uVar15;
    local_68 = param_3;
    local_64 = param_4;
    local_60 = puVar21;
    if ((undefined8 *)param_1[1] < puVar19) {
      FUN_140023dd8(param_1,0x60);
      puVar17 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
      puVar19 = puVar17 + 0xb;
    }
    *param_1 = (ulonglong)puVar19;
    *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
    *(undefined8 **)param_1[6] = puVar17;
    param_1[6] = (ulonglong)(puVar17 + 1);
    uVar16 = *(undefined8 *)(lVar18 + 0x38);
    uVar4 = *(undefined4 *)(lVar18 + 0x40);
    uVar14 = *(undefined8 *)(lVar18 + 0x28);
    uVar5 = *(undefined4 *)(lVar18 + 0x30);
    uVar8 = *(undefined8 *)(lVar18 + 0x18);
    uVar6 = *(undefined4 *)(lVar18 + 0x20);
    uVar9 = *(undefined8 *)(lVar18 + 8);
    uVar7 = *(undefined4 *)(lVar18 + 0x10);
    puVar17[1] = 0;
    *puVar17 = &PTR_FUN_14a1e7fa8;
    puVar17[2] = local_70;
    puVar17[3] = uVar9;
    *(undefined4 *)(puVar17 + 4) = uVar7;
    puVar17[5] = uVar8;
    *(undefined4 *)(puVar17 + 6) = uVar6;
    puVar17[7] = uVar14;
    *(undefined4 *)(puVar17 + 8) = uVar5;
    puVar17[9] = uVar16;
    *(undefined4 *)(puVar17 + 10) = uVar4;
    *(undefined8 *)(lVar18 + 8) = 0;
    *(undefined4 *)(lVar18 + 0x10) = 0;
    *(undefined8 *)(lVar18 + 0x18) = 0;
    *(undefined4 *)(lVar18 + 0x20) = 0;
    *(undefined8 *)(lVar18 + 0x28) = 0;
    *(undefined4 *)(lVar18 + 0x30) = 0;
    *(undefined8 *)(lVar18 + 0x38) = 0;
    *(undefined4 *)(lVar18 + 0x40) = 0;
    uVar15 = local_70;
    puVar21 = local_60;
    param_4 = local_64;
    param_3 = local_68;
  }
  puVar17 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar19 = puVar17 + 4;
  if ((undefined8 *)param_1[1] < puVar19) {
    FUN_140023dd8(param_1,0x28);
    puVar17 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar19 = puVar17 + 4;
  }
  *param_1 = (ulonglong)puVar19;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar17;
  param_1[6] = (ulonglong)(puVar17 + 1);
  puVar17[1] = 0;
  *puVar17 = &PTR_LAB_14a1fbc30;
  *(uint *)(puVar17 + 2) = param_3 + 3U >> 2;
  *(uint *)((longlong)puVar17 + 0x14) = param_4 + 3U >> 2;
  *(uint *)(puVar17 + 3) = param_5 + 3 >> 2;
  if (DAT_14ca8507b == '\x01') {
    puVar2 = param_1 + 0x12;
    uVar22 = (uint)param_1[0x13];
    if (0 < (int)uVar22) {
      uVar22 = 0;
      *(undefined4 *)(param_1 + 0x13) = 0;
      if (*(int *)((longlong)param_1 + 0x9c) < 0) {
        FUN_147139e90(puVar2,0);
        uVar22 = (uint)param_1[0x13];
      }
    }
    if ((*(char *)(lVar11 + 0xfa) != '\0') && (*(char *)(lVar11 + 0xfb) != '\x06')) {
      uVar3 = *puVar21;
      *(uint *)(param_1 + 0x13) = uVar22 + 1;
      if (*(uint *)((longlong)param_1 + 0x9c) < uVar22 + 1) {
        FUN_1447477d8(puVar2,uVar22);
      }
      uVar10 = param_1[0x12];
      *(undefined2 *)(uVar10 + (longlong)(int)uVar22 * 4) = uVar3;
      *(undefined1 *)(uVar10 + 2 + (longlong)(int)uVar22 * 4) = 1;
      uVar22 = (uint)param_1[0x13];
    }
    if (0 < (int)uVar22) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar2;
        puVar17 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
        puVar19 = puVar17 + 5;
        if ((undefined8 *)param_1[1] < puVar19) {
          FUN_140023dd8(param_1,0x30);
          puVar17 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
          puVar19 = puVar17 + 5;
        }
        *param_1 = (ulonglong)puVar19;
        *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
        *(undefined8 **)param_1[6] = puVar17;
        param_1[6] = (ulonglong)(puVar17 + 1);
        _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
        pvVar20 = (void *)((ulonglong)uVar22 * 4 + (longlong)_Dst);
        _Size = (ulonglong)uVar22 * 4;
        if ((void *)param_1[1] < pvVar20) {
          FUN_140023dd8(param_1,(uint)_Size | 2);
          _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
          pvVar20 = (void *)(_Size + (longlong)_Dst);
        }
        *param_1 = (ulonglong)pvVar20;
        memcpy(_Dst,_Src,_Size);
        puVar17[1] = 0;
        *puVar17 = &PTR_FUN_14a1fbc38;
        puVar17[2] = uVar15;
        puVar17[3] = _Dst;
        *(uint *)(puVar17 + 4) = uVar22;
      }
      *(undefined4 *)(param_1 + 0x13) = 0;
      if (*(int *)((longlong)param_1 + 0x9c) < 0) {
        FUN_147139e90(puVar2,0);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14315595f FUN_14315595f body=46 status=ok
// SIG undefined FUN_14315595f(void)

void FUN_14315595f(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if ((longlong *)*param_1 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*param_1 + 0x10))();
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 14315598e FUN_14315598e body=167 status=ok
// SIG undefined FUN_14315598e(void)

void FUN_14315598e(longlong param_1)

{
  longlong *plVar1;
  longlong **pplVar2;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *(undefined4 *)(param_1 + 0x20);
  FUN_14314c3f0(&local_20,*(undefined8 *)(DAT_14ca765e0 + 0x150),
                *(undefined8 *)(DAT_14ca765e0 + 0x140),*(undefined8 *)(param_1 + 0x18));
  pplVar2 = (longlong **)(*(longlong *)(param_1 + 0x10) + 0x30);
  if (pplVar2 != &local_20) {
    plVar1 = *pplVar2;
    *pplVar2 = local_20;
    local_20 = (longlong *)0x0;
    if (plVar1 == (longlong *)0x0) goto LAB_143155a0f;
    (**(code **)(*plVar1 + 0x10))();
  }
  if (local_20 != (longlong *)0x0) {
    (**(code **)(*local_20 + 0x10))();
  }
LAB_143155a0f:
  FUN_1400020a8(*(undefined8 *)(param_1 + 0x18));
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143155a36 FUN_143155a36 body=227 status=ok
// SIG undefined FUN_143155a36(void)

void FUN_143155a36(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  bool bVar10;
  
  FUN_147363281(param_1[1],*param_1,param_1[2],param_1[5],*(undefined4 *)(param_1 + 6));
  if (0 < *(int *)(param_1 + 4)) {
    lVar9 = 0;
    do {
      lVar4 = *(longlong *)(param_1[3] + lVar9 * 8);
      lVar5 = *(longlong *)(*(longlong *)(param_1[2] + 0x10) + lVar9 * 8);
      if (lVar5 != lVar4) {
        *(longlong *)(*(longlong *)(param_1[2] + 0x10) + lVar9 * 8) = lVar4;
        if (lVar4 != 0) {
          LOCK();
          *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
          UNLOCK();
        }
        if (lVar5 != 0) {
          LOCK();
          puVar1 = (uint *)(lVar5 + 8);
          uVar2 = *puVar1;
          *puVar1 = *puVar1 - 1;
          UNLOCK();
          if ((uVar2 & 0x3fffffff) == 1) {
            puVar1 = (uint *)(lVar5 + 8);
            LOCK();
            uVar2 = *puVar1;
            *puVar1 = *puVar1 | 0x40000000;
            UNLOCK();
            if ((uVar2 >> 0x1e & 1) == 0) {
              bVar3 = *(byte *)(lVar5 + 0xd);
              plVar6 = (longlong *)FUN_14001cc68(0x10,8);
              plVar6[1] = lVar5;
              plVar8 = DAT_14ca843c0;
              plVar7 = DAT_14ca843c8;
              if ((bVar3 & 2) == 0) {
                do {
                  *plVar6 = (longlong)plVar8;
                  LOCK();
                  bVar10 = plVar8 != DAT_14ca843c0;
                  plVar7 = plVar6;
                  if (bVar10) {
                    plVar8 = DAT_14ca843c0;
                    plVar7 = DAT_14ca843c0;
                  }
                  DAT_14ca843c0 = plVar7;
                  UNLOCK();
                } while (bVar10);
              }
              else {
                do {
                  *plVar6 = (longlong)plVar7;
                  LOCK();
                  bVar10 = plVar7 != DAT_14ca843c8;
                  plVar8 = plVar6;
                  if (bVar10) {
                    plVar7 = DAT_14ca843c8;
                    plVar8 = DAT_14ca843c8;
                  }
                  DAT_14ca843c8 = plVar8;
                  UNLOCK();
                } while (bVar10);
              }
            }
          }
        }
      }
      lVar9 = lVar9 + 1;
    } while (lVar9 < *(int *)(param_1 + 4));
  }
  return;
}



// FUNCTION 143155b1a FUN_143155b1a body=228 status=ok
// SIG undefined FUN_143155b1a(void)

void FUN_143155b1a(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  bool bVar11;
  
  FUN_147363281(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x10),
                *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x38),
                *(undefined4 *)(param_1 + 0x40));
  if (0 < *(int *)(param_1 + 0x30)) {
    lVar10 = 0;
    do {
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x28) + lVar10 * 8);
      lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x10);
      lVar6 = *(longlong *)(lVar5 + lVar10 * 8);
      if (lVar6 != lVar4) {
        *(longlong *)(lVar5 + lVar10 * 8) = lVar4;
        if (lVar4 != 0) {
          LOCK();
          *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
          UNLOCK();
        }
        if (lVar6 != 0) {
          LOCK();
          puVar1 = (uint *)(lVar6 + 8);
          uVar2 = *puVar1;
          *puVar1 = *puVar1 - 1;
          UNLOCK();
          if ((uVar2 & 0x3fffffff) == 1) {
            puVar1 = (uint *)(lVar6 + 8);
            LOCK();
            uVar2 = *puVar1;
            *puVar1 = *puVar1 | 0x40000000;
            UNLOCK();
            if ((uVar2 >> 0x1e & 1) == 0) {
              bVar3 = *(byte *)(lVar6 + 0xd);
              plVar7 = (longlong *)FUN_14001cc68(0x10,8);
              plVar7[1] = lVar6;
              plVar9 = DAT_14ca843c0;
              plVar8 = DAT_14ca843c8;
              if ((bVar3 & 2) == 0) {
                do {
                  *plVar7 = (longlong)plVar9;
                  LOCK();
                  bVar11 = plVar9 != DAT_14ca843c0;
                  plVar8 = plVar7;
                  if (bVar11) {
                    plVar9 = DAT_14ca843c0;
                    plVar8 = DAT_14ca843c0;
                  }
                  DAT_14ca843c0 = plVar8;
                  UNLOCK();
                } while (bVar11);
              }
              else {
                do {
                  *plVar7 = (longlong)plVar8;
                  LOCK();
                  bVar11 = plVar8 != DAT_14ca843c8;
                  plVar9 = plVar7;
                  if (bVar11) {
                    plVar8 = DAT_14ca843c8;
                    plVar9 = DAT_14ca843c8;
                  }
                  DAT_14ca843c8 = plVar9;
                  UNLOCK();
                } while (bVar11);
              }
            }
          }
        }
      }
      lVar10 = lVar10 + 1;
    } while (lVar10 < *(int *)(param_1 + 0x30));
  }
  return;
}



// FUNCTION 143155bfe FUN_143155bfe body=1794 status=ok
// SIG undefined FUN_143155bfe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143155bfe(void)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined8 *local_48;
  int local_40;
  undefined1 local_3c;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = (undefined8 *)((ulonglong)local_48 & 0xffffffff00000000);
  local_58 = 0;
  FUN_14078dbce(&DAT_14ca75f08,L"r.D3D11.UseSharedKeyMutex",&local_48,
                L"If 1, BUF_Shared vertex / index buffer and TexCreate_Shared texture will be created\nwith the D3D11_RESOURCE_MISC_SHARED_KEYEDMUTEX flag instead of D3D11_RESOURCE_MISC_SHARED (default).\n"
               );
  atexit(FUN_143142344);
  local_58 = 0;
  FUN_141471170(&DAT_14ca75f20,L"r.UnbindResourcesBetweenDrawsInDX11",&DAT_14ca75f30,
                L"Unbind resources between material changes in DX11.");
  atexit(FUN_143142c16);
  local_58 = 4;
  FUN_141471170(&DAT_14ca75f38,L"r.DX11.ReduceRTVRebinds",&DAT_14c760aec,
                L"Reduce # of SetRenderTargetCalls.");
  atexit(FUN_143142c5b);
  local_48 = (undefined8 *)CONCAT44(local_48._4_4_,1);
  local_58 = 0x20;
  FUN_14078dbce(&DAT_14ca75f48,L"r.D3D11.AutoFlushUAV",&local_48,
                L"If enabled, use NVAPI (Nvidia), AGS (AMD) or Intel Extensions (Intel) to not flush between dispatches/draw calls 1: on (default)\n 0: off"
               );
  atexit(FUN_143142ca0);
  DAT_14ca75f70 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *DAT_14ca75f70 = 0;
  DAT_14ca75f70[1] = 0;
  DAT_14ca75f70[2] = 0;
  DAT_14ca75f78 = DAT_14ca75f70;
  atexit((_func_5014 *)&LAB_14314362a);
  local_48 = (undefined8 *)0x800000014a33fb08;
  local_34 = 8;
  local_40 = FUN_14577453c();
  local_3c = 1;
  FUN_146319a68(&local_48);
  local_48 = (undefined8 *)((ulonglong)local_48 & 0xffffffff00000000);
  local_58 = 4;
  FUN_14078dbce(&DAT_14ca75f90,L"r.D3D11.Depth24Bit",&local_48,
                L"0: Use 32-bit float depth buffer\n1: Use 24-bit fixed point depth buffer(default)\n"
               );
  atexit(FUN_14314362f);
  local_48 = (undefined8 *)CONCAT44(local_48._4_4_,4);
  local_58 = 4;
  FUN_14078dbce(&DAT_14ca75fa8,L"d3d11.ZeroBufferSizeInMB",&local_48,
                L"The D3D11 RHI needs a static allocation of zeroes to use when streaming textures asynchronously. It should be large enough to support the largest mipmap you need to stream. The default is 4MB."
               );
  atexit(FUN_143143674);
  local_58 = 0;
  FUN_1415c789c(&DAT_14ca75fc0,L"r.D3D11.AbsoluteTimeQueryTimeoutValue",&DAT_14c760af0,
                L"Set the timeout value, in seconds, to wait for a D3D11 absolute time query.");
  atexit(FUN_143143a91);
  local_58 = 0;
  FUN_1415c789c(&DAT_14ca75fd0,L"r.D3D11.QueryTimeoutValue",&DAT_14c760af4,
                L"Set the timeout value, in seconds, to wait for a D3D11 query. This value does not apply to absolute time queries (which are controlled by r.D3D11.AbsoluteTimeQueryTimeoutValue)."
               );
  atexit(FUN_143143ad6);
  DAT_14ca76000 = 0;
  DAT_14ca76008 = 0;
  DAT_14ca75fe0 = 0;
  _DAT_14ca75fe8 = 0;
  _DAT_14ca7600c = 0xffffffff00000080;
  DAT_14ca76014 = 0;
  DAT_14ca76020 = 0;
  DAT_14ca76028 = 0;
  atexit(FUN_1431494ad);
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14ca76030);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14ca76030,4000);
  atexit((_func_5014 *)&LAB_1431494d6);
  FUN_1400b22c2(&local_48,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar2 = FUN_140b10a34(&local_48);
  if (cVar2 == '\0') {
    _DAT_14ca76078 = 0;
    uRam000000014ca76080 = 0;
  }
  if (local_48 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  memset(&DAT_14ca76090,0,0x110);
  atexit(FUN_14314bd1b);
  memset(&DAT_14ca761a0,0,0x330);
  atexit(FUN_14314bd59);
  local_58 = 0;
  FUN_141471170(&DAT_14ca764d0,L"r.d3d.uniformbufferrecycledepth",&DAT_14c760b00,
                L"Number of frames before recycling freed uniform buffers .\n");
  atexit(FUN_14314bd97);
  DAT_14ca76500 = 0;
  DAT_14ca76508 = 0;
  DAT_14ca764e0 = 0;
  _DAT_14ca764e8 = 0;
  _DAT_14ca7650c = 0xffffffff00000080;
  DAT_14ca76514 = 0;
  DAT_14ca76520 = 0;
  DAT_14ca76528 = 0;
  atexit(FUN_14314cf6d);
  local_58 = 0x20;
  FUN_141471170(&DAT_14ca76538,L"RHI.SyncWithDWM",&DAT_14ca76530,
                L"If true, synchronize with the desktop window manager for vblank.");
  atexit(FUN_14314cf96);
  local_58 = 0x20;
  FUN_1415c789c(&DAT_14ca76548,L"RHI.RefreshPercentageBeforePresent",&DAT_14c760b04,
                L"The percentage of the refresh period to wait before presenting.");
  atexit(FUN_14314cfdb);
  local_58 = 0x20;
  FUN_141471170(&DAT_14ca76560,L"RHI.TargetRefreshRate",&DAT_14ca76558,
                L"If non-zero, the display will never update more often than the target refresh rate (in Hz)."
               );
  atexit(FUN_14314d020);
  local_58 = 0x20;
  FUN_1415c789c(&DAT_14ca76570,L"RHI.SyncRefreshThreshold",&DAT_14c760b08,
                L"Threshold for time above which vsync will be disabled as a percentage of the refresh rate."
               );
  atexit(FUN_14314d065);
  local_58 = 0x20;
  FUN_141471170(&DAT_14ca76580,L"RHI.MaxSyncCounter",&DAT_14c760b0c,
                L"Maximum sync counter to smooth out vsync transitions.");
  atexit(FUN_14314d0aa);
  local_58 = 0x20;
  FUN_141471170(&DAT_14ca76590,L"RHI.SyncThreshold",&DAT_14c760b10,
                L"Number of consecutive \'fast\' frames before vsync is enabled.");
  atexit(FUN_14314d0ef);
  local_58 = 0x20;
  FUN_141471170(&DAT_14ca765a0,L"RHI.MaximumFrameLatency",&DAT_14c760b14,
                L"Number of frames that can be queued for render.");
  atexit(FUN_14314d134);
  local_48 = (undefined8 *)((ulonglong)local_48 & 0xffffffff00000000);
  local_58 = 0x24;
  FUN_14078dbce(&DAT_14ca765e8,L"r.D3D11.EnableD3DDebug",&local_48,
                L"0 to disable d3ddebug layer (default)\n1 to enable error logging (-d3ddebug) \n2 to enable error & warning logging (-d3dlogwarnings)\n3 to enable breaking on errors & warnings (-d3dbreakonwarning)\n4 to enable CONTINUING on errors (-d3dcontinueonerrors)\n"
               );
  atexit(FUN_14314e63f);
  local_48 = (undefined8 *)((ulonglong)local_48 & 0xffffffff00000000);
  local_58 = 0;
  FUN_14078dbce(&DAT_14ca76600,L"r.AMDD3D11MultiThreadedDevice",&local_48,
                L"If true, creates a multithreaded D3D11 device on AMD hardware (workaround for driver bug)\nChanges will only take effect in new game/editor instances - can\'t be changed at runtime.\n"
               );
  atexit(FUN_14314e684);
  local_48 = (undefined8 *)((ulonglong)local_48 & 0xffffffff00000000);
  local_58 = 0;
  FUN_14078dbce(&DAT_14ca76618,L"r.AMDDisableAsyncTextureCreation",&local_48,
                L"If true, uses synchronous texture creation on AMD hardware (workaround for driver bug)\nChanges will only take effect in new game/editor instances - can\'t be changed at runtime.\n"
               );
  atexit(FUN_14314e6c9);
  local_48 = (undefined8 *)CONCAT44(local_48._4_4_,1);
  local_58 = 0;
  FUN_14078dbce(&DAT_14ca76630,L"r.NVIDIATimestampWorkaround",&local_48,
                L"If true we disable timestamps on pre-maxwell hardware (workaround for driver bug)\n"
               );
  atexit(FUN_14314e70e);
  local_58 = 0;
  FUN_141471170(&DAT_14ca76648,L"RHI.FeatureSetLimit",&DAT_14c760b18,
                L"If set to 10, limit D3D RHI to D3D10 feature level. Otherwise, it will use default. Changing this at run-time has no effect. (default is -1)"
               );
  atexit(FUN_14314e753);
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,2,0x10);
  local_40 = 2;
  *local_48 = &PTR_LAB_149e020b0;
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
  local_48[2] = lVar3;
  *local_48 = &PTR_FUN_149e062c0;
  local_48[3] = FUN_14314e798;
  local_58 = 0;
  FUN_14152bcb8(&DAT_14ca76658,L"r.d3d11.dumpliveobjects",
                L"When using -d3ddebug will dump a list of live d3d objects.  Mostly for finding leaks."
                ,&local_48);
  if (local_40 != 0) {
    if (local_48 == (undefined8 *)0x0) goto LAB_1431562b6;
    (**(code **)*local_48)(local_48,0);
    FUN_1446efa72(&local_48,0,0,0x10);
    local_40 = 0;
  }
  if (local_48 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_1431562b6:
  atexit(FUN_14314e84d);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143156304 FUN_143156304 body=69 status=ok
// SIG undefined FUN_143156304(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143156304(void)

{
  _DAT_14ca766d8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143156346. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca766e0,1);
  return;
}



// FUNCTION 14315634a FUN_14315634a body=4066 status=ok
// SIG undefined FUN_14315634a(void)

undefined8 *
FUN_14315634a(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined4 param_4,
             undefined4 param_5,undefined1 param_6,undefined1 param_7)

{
  longlong **pplVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  undefined1 uVar7;
  char cVar8;
  byte bVar9;
  int iVar10;
  int iVar11;
  DWORD DVar12;
  DWORD DVar13;
  longlong *plVar14;
  longlong *plVar15;
  undefined4 *puVar16;
  uint *puVar17;
  undefined8 uVar18;
  longlong *plVar19;
  uint uVar20;
  uint *puVar21;
  undefined8 unaff_RBX;
  undefined8 *puVar22;
  int iVar23;
  undefined8 *puVar24;
  longlong lVar25;
  ulonglong uVar26;
  bool bVar27;
  undefined1 auStack_188 [32];
  longlong **local_168;
  longlong **pplStack_160;
  longlong **local_158;
  longlong **local_150;
  undefined8 *local_140;
  longlong *local_138;
  undefined8 uStack_130;
  uint local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 local_114;
  undefined4 local_110;
  char local_109;
  longlong *local_108;
  double local_100;
  double local_f8;
  double local_f0;
  tagRECT local_e8;
  longlong *local_d0;
  longlong *local_c8;
  undefined4 local_bc;
  longlong *local_b8;
  undefined8 local_b0;
  longlong local_a8;
  int local_a0;
  longlong *local_98;
  int iStack_90;
  undefined4 uStack_8c;
  uint local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  uint uStack_78;
  int iStack_74;
  int iStack_70;
  uint uStack_6c;
  undefined8 local_68;
  ulonglong uStack_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_188;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined1 *)((longlong)param_1 + 0xc) = 0x1e;
  *(byte *)((longlong)param_1 + 0xd) = *(byte *)((longlong)param_1 + 0xd) | 3;
  *param_1 = &PTR_FUN_14a343c70;
  param_1[2] = param_2;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined8 *)((longlong)param_1 + 0x25) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2d) = 0;
  param_1[7] = param_3;
  *(undefined4 *)(param_1 + 8) = 3;
  *(undefined4 *)((longlong)param_1 + 0x44) = param_4;
  *(undefined4 *)(param_1 + 9) = param_5;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  *(undefined1 *)(param_1 + 0xb) = param_7;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined1 *)((longlong)param_1 + 100) = param_6;
  *(undefined1 *)((longlong)param_1 + 0x65) = 0;
  puVar22 = param_1 + 0x11;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  FUN_14735a7de(puVar22,param_2);
  param_1[0x13] = 0;
  lVar4 = param_1[2];
  iVar10 = *(int *)(lVar4 + 0x2668);
  *(uint *)(lVar4 + 0x2668) = iVar10 + 1U;
  if (*(uint *)(lVar4 + 0x266c) < iVar10 + 1U) {
    FUN_14736aef4((longlong *)(lVar4 + 0x2660),iVar10);
  }
  *(undefined8 **)(*(longlong *)(lVar4 + 0x2660) + (longlong)iVar10 * 8) = param_1;
  (**(code **)(*(longlong *)param_1[2] + 0x588))();
  uVar7 = FUN_14314398e(param_2,CONCAT71((int7)((ulonglong)unaff_RBX >> 8),param_7) & 0xffffffff);
  *(undefined1 *)(param_1 + 0xb) = uVar7;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c8338a0) && (FUN_144b3d300(&DAT_14c8338a0), DAT_14c8338a0 == -1)) {
    FUN_1456d85e6(&DAT_14c8337f0);
    atexit((_func_5014 *)&LAB_142748837);
    _Init_thread_footer(&DAT_14c8338a0);
  }
  FUN_146319cd6(&local_b0);
  FUN_1460272c0(&DAT_14c8337f0,&local_a8,local_b0);
  lVar4 = local_a8;
  bVar27 = true;
  if ((longlong)local_a0 != 0) {
    lVar25 = 0;
    do {
      plVar19 = *(longlong **)(lVar4 + lVar25);
      cVar8 = (**(code **)*plVar19)(plVar19,2);
      if (cVar8 != '\0') {
        if (plVar19 != (longlong *)0x0) {
          if (DAT_14ca766e8 == '\0') {
            DAT_14ca766e8 = '\x01';
          }
          bVar27 = false;
          goto LAB_1431564ee;
        }
        break;
      }
      lVar25 = lVar25 + 8;
    } while ((longlong)local_a0 * 8 != lVar25);
  }
  plVar19 = (longlong *)0x0;
LAB_1431564ee:
  local_b8 = (longlong *)0x0;
  iVar10 = (**(code **)**(undefined8 **)(param_1[2] + 0x150))
                     (*(undefined8 **)(param_1[2] + 0x150),&DAT_14a345190);
  if (iVar10 < 0) {
    local_168 = *(longlong ***)(param_1[2] + 0x150);
    FUN_143142730(iVar10,
                  "D3DRHI->GetDevice()->QueryInterface(IID_PPV_ARGS(DXGIDevice.GetInitReference()))"
                  ,".\\Runtime/Windows/D3D11RHI/Private/Windows/WindowsD3D11Viewport.cpp",0x54);
  }
  DAT_14ca766ec = 0;
  DAT_14ca766f0 = 0;
  DAT_14c760b20 = 2;
  local_98 = (longlong *)0x0;
  if (DAT_14c760b1c != 0) {
    iVar10 = (**(code **)**(undefined8 **)(param_1[2] + 0x128))
                       (*(undefined8 **)(param_1[2] + 0x128),&DAT_14a343f28,&local_98);
    if (iVar10 == 0) {
      local_138 = (longlong *)((ulonglong)local_138 & 0xffffffff00000000);
      iVar10 = (**(code **)(*local_98 + 0xe0))(local_98,0,&local_138,4);
      if ((iVar10 == 0) && ((int)local_138 != 0)) {
        DAT_14c760b20 = DAT_14c760b20 | 0x800;
        DAT_14ca766ec = 1;
        DAT_14ca766f0 = 1;
        *(undefined1 *)((longlong)param_1 + 0x65) = 1;
        DAT_14ca766f4 = 1;
      }
    }
    if (local_98 != (longlong *)0x0) {
      (**(code **)(*local_98 + 0x10))();
    }
  }
  local_bc = 0;
  if (DAT_14c846b14 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                  L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  plVar15 = param_1 + 0xf;
  cVar8 = FUN_1409887c6(&DAT_14c846b20,L"FullscreenDisplay=",&local_bc);
  *(char *)(param_1 + 0x10) = cVar8;
  if (cVar8 == '\0') {
    plVar14 = (longlong *)*plVar15;
    if (plVar14 != (longlong *)0x0) {
      *plVar15 = 0;
      goto LAB_1431566c1;
    }
  }
  else {
    local_98 = (longlong *)0x0;
    (**(code **)(*local_b8 + 0x38))(local_b8,&local_98);
    plVar5 = local_98;
    plVar14 = (longlong *)*plVar15;
    if (plVar14 != (longlong *)0x0) {
      *plVar15 = 0;
      (**(code **)(*plVar14 + 0x10))();
    }
    iVar10 = (**(code **)(*plVar5 + 0x38))(plVar5,local_bc,plVar15);
    if (iVar10 != 0) {
      plVar14 = (longlong *)*plVar15;
      if (plVar14 != (longlong *)0x0) {
        *plVar15 = 0;
        (**(code **)(*plVar14 + 0x10))();
      }
      *(undefined1 *)(param_1 + 0x10) = 0;
    }
    plVar14 = local_98;
    if (local_98 != (longlong *)0x0) {
LAB_1431566c1:
      (**(code **)(*plVar14 + 0x10))();
    }
  }
  iVar10 = *(int *)((longlong)&DAT_14c873434 + (ulonglong)((uint)*(byte *)(param_1 + 0xb) * 0x30));
  if (iVar10 < 0x49) {
    if (iVar10 == 0x1b) {
      iVar23 = 0x1c;
    }
    else if (iVar10 == 0x35) {
      iVar23 = 0x38;
    }
    else if (iVar10 == 0x46) {
      iVar23 = 0x47;
    }
    else {
LAB_14315670c:
      iVar23 = iVar10;
    }
  }
  else if (iVar10 == 0x49) {
    iVar23 = 0x4a;
  }
  else if (iVar10 == 0x4c) {
    iVar23 = 0x4d;
  }
  else {
    iVar23 = 0x57;
    if (iVar10 != 0x5a) goto LAB_14315670c;
  }
  if (DAT_14c846b14 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                  L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  bVar9 = FUN_14054d46e(&DAT_14c846b20,L"RenderOffScreen");
  *(byte *)((longlong)param_1 + 0x81) = bVar9 ^ 1;
  if (bVar9 == 0) {
    pplVar1 = (longlong **)(param_1 + 0xd);
    local_c8 = (longlong *)0x0;
    local_140 = puVar22;
    iVar10 = (**(code **)**(undefined8 **)(param_1[2] + 0x128))
                       (*(undefined8 **)(param_1[2] + 0x128),&DAT_14a343f00);
    if ((-1 < iVar10) && ((DAT_14ca76668 & 1) != 0)) {
      iVar11 = (**(code **)(*local_c8 + 0x70))();
      if (iVar11 == 0) {
        DAT_14ca76668 = 0;
      }
      else {
        local_98 = (longlong *)0x0;
        uStack_84 = 0;
        iStack_70 = 0;
        uStack_8c = 1;
        local_88 = 1;
        uStack_80 = 0x30;
        uStack_7c = 2;
        uStack_78 = 1;
        iStack_74 = 4;
        uStack_6c = DAT_14c760b20;
        local_138 = (longlong *)0x0;
        if (bVar27) {
          local_158 = &local_138;
          local_168 = (longlong **)0x0;
          pplStack_160 = (longlong **)0x0;
          iStack_90 = iVar23;
          iVar11 = (**(code **)(*local_c8 + 0x78))
                             (local_c8,*(undefined8 *)(param_1[2] + 0x150),param_1[7],&local_98);
        }
        else {
          local_150 = &local_138;
          pplStack_160 = (longlong **)0x0;
          local_158 = (longlong **)0x0;
          local_168 = &local_98;
          iStack_90 = iVar23;
          iVar11 = (**(code **)(*plVar19 + 0x10))
                             (plVar19,local_c8,*(undefined8 *)(param_1[2] + 0x150),param_1[7]);
        }
        if (iVar11 < 0) {
          local_168 = *(longlong ***)(param_1[2] + 0x150);
          FUN_143142730(iVar11,"CreateSwapChainForHwndResult",
                        ".\\Runtime/Windows/D3D11RHI/Private/Windows/WindowsD3D11Viewport.cpp",0xa8)
          ;
        }
        plVar15 = *pplVar1;
        if (plVar15 != local_138) {
          *pplVar1 = local_138;
          if (local_138 != (longlong *)0x0) {
            (**(code **)(*local_138 + 8))();
          }
          if (plVar15 != (longlong *)0x0) {
            (**(code **)(*plVar15 + 0x10))(plVar15);
          }
        }
      }
    }
    if (*pplVar1 == (longlong *)0x0) {
      if ((-1 < iVar10) && (*(char *)(param_2 + 0x138) != '\0')) {
        iStack_70 = 0;
        uStack_8c = 0;
        uStack_84 = 0;
        local_98 = *(longlong **)((longlong)param_1 + 0x44);
        local_88 = 1;
        uStack_80 = 0x30;
        local_138 = (longlong *)0x0;
        uStack_130 = 0;
        local_128 = *(byte *)((longlong)param_1 + 100) ^ 1;
        *(undefined4 *)((longlong)param_1 + 0x4c) = 2;
        iStack_74 = (uint)DAT_14ca766ec << 2;
        uStack_7c = 2;
        uStack_6c = DAT_14c760b20;
        uStack_78 = (uint)DAT_14ca766f0;
        local_d0 = (longlong *)0x0;
        if (bVar27) {
          local_158 = &local_d0;
          local_168 = &local_138;
          pplStack_160 = (longlong **)0x0;
          iStack_90 = iVar23;
          iVar10 = (**(code **)(*local_c8 + 0x78))
                             (local_c8,*(undefined8 *)(param_1[2] + 0x150),param_1[7],&local_98);
        }
        else {
          local_150 = &local_d0;
          pplStack_160 = &local_138;
          local_168 = &local_98;
          local_158 = (longlong **)0x0;
          iStack_90 = iVar23;
          iVar10 = (**(code **)(*plVar19 + 0x10))
                             (plVar19,local_c8,*(undefined8 *)(param_1[2] + 0x150),param_1[7]);
        }
        plVar15 = local_d0;
        if (-1 < iVar10) {
          plVar14 = *pplVar1;
          if (plVar14 != (longlong *)0x0) {
            *pplVar1 = (longlong *)0x0;
            (**(code **)(*plVar14 + 0x10))();
          }
          (**(code **)*plVar15)(plVar15,&DAT_14a345280,pplVar1);
          local_e8.left = 0;
          local_e8.top = 0;
          local_e8.right = 0;
          local_e8.bottom = 0;
          GetWindowRect((HWND)param_1[7],&local_e8);
          local_f0 = (double)local_e8.top;
          local_f8 = (double)local_e8.left;
          local_100 = (double)local_e8.bottom;
          local_108 = (longlong *)(double)local_e8.right;
          local_168 = &local_108;
          local_109 = '\0';
          local_110 = *(undefined4 *)((longlong)param_1 + 0x5c);
          local_114 = *(undefined4 *)(param_1 + 0xc);
          pplStack_160 = (longlong **)param_1[7];
          FUN_1403485af(&local_114,&local_110,&local_109);
          if (local_109 == '\x01') {
            *(undefined4 *)(param_1 + 0xc) = local_114;
            *(undefined4 *)((longlong)param_1 + 0x5c) = local_110;
            FUN_14736adfa(param_1);
          }
        }
        if (*pplVar1 != (longlong *)0x0) goto LAB_143156b4c;
      }
      iVar10 = DAT_14ca766f4 + 1;
      *(int *)((longlong)param_1 + 0x4c) = iVar10;
      local_68 = 0;
      uStack_60 = 0;
      uStack_78 = 0;
      iStack_74 = 0;
      iStack_70 = 0;
      uStack_6c = 0;
      local_88 = 0;
      uStack_84 = 0;
      uStack_80 = 0;
      uStack_7c = 0;
      local_98 = (longlong *)0x0;
      iStack_90 = 0;
      uStack_8c = 0;
      local_58 = 0;
      FUN_14736438c(param_1,&local_138);
      local_88 = local_128;
      uStack_84 = uStack_124;
      uStack_80 = uStack_120;
      local_98 = local_138;
      iStack_90 = (int)uStack_130;
      uStack_8c = uStack_130._4_4_;
      uStack_7c = 1;
      uStack_78 = 0;
      iStack_74 = 0x30;
      local_68 = param_1[7];
      uStack_60 = CONCAT44((uint)DAT_14ca766ec << 2,(uint)*(byte *)((longlong)param_1 + 100)) ^ 1;
      local_58 = CONCAT44(local_58._4_4_,DAT_14c760b20);
      iStack_70 = iVar10;
      if (bVar27) {
        plVar19 = *(longlong **)(param_1[2] + 0x128);
        iVar10 = (**(code **)(*plVar19 + 0x50))
                           (plVar19,*(undefined8 *)(param_1[2] + 0x150),&local_98,pplVar1);
      }
      else {
        local_168 = pplVar1;
        iVar10 = (**(code **)(*plVar19 + 0x18))
                           (plVar19,*(undefined8 *)(param_1[2] + 0x128),
                            *(undefined8 *)(param_1[2] + 0x150),&local_98);
      }
      if (iVar10 == -0x7ff8ffa9) {
        local_138 = (longlong *)((ulonglong)local_138 & 0xffffffff00000000);
        (**(code **)(**(longlong **)(param_1[2] + 0x150) + 0xe8))
                  (*(longlong **)(param_1[2] + 0x150),local_88);
      }
      else if (-1 < iVar10) goto LAB_143156b4c;
      local_168 = *(longlong ***)(param_1[2] + 0x150);
      FUN_143142730(iVar10,"CreateSwapChainResult",
                    ".\\Runtime/Windows/D3D11RHI/Private/Windows/WindowsD3D11Viewport.cpp",0x11a);
    }
LAB_143156b4c:
    (**(code **)(**(longlong **)(param_1[2] + 0x128) + 0x40))
              (*(longlong **)(param_1[2] + 0x128),param_1[7],1);
    puVar22 = local_140;
    if (local_c8 != (longlong *)0x0) {
      (**(code **)(*local_c8 + 0x10))();
      puVar22 = local_140;
    }
  }
  local_168 = (longlong **)param_1[0xd];
  lVar25 = FUN_147363d56(param_1[2],*(undefined1 *)(param_1 + 0xb),
                         *(undefined4 *)((longlong)param_1 + 0x44),*(undefined4 *)(param_1 + 9));
  lVar4 = param_1[0xe];
  if (lVar4 != lVar25) {
    param_1[0xe] = lVar25;
    if (lVar25 != 0) {
      LOCK();
      *(int *)(lVar25 + 8) = *(int *)(lVar25 + 8) + 1;
      UNLOCK();
    }
    if (lVar4 != 0) {
      LOCK();
      puVar17 = (uint *)(lVar4 + 8);
      uVar20 = *puVar17;
      *puVar17 = *puVar17 - 1;
      UNLOCK();
      if ((uVar20 & 0x3fffffff) == 1) {
        puVar17 = (uint *)(lVar4 + 8);
        LOCK();
        uVar20 = *puVar17;
        *puVar17 = *puVar17 | 0x40000000;
        UNLOCK();
        if ((uVar20 >> 0x1e & 1) == 0) {
          bVar9 = *(byte *)(lVar4 + 0xd);
          plVar14 = (longlong *)FUN_14001cc68(0x10,8);
          plVar14[1] = lVar4;
          plVar19 = DAT_14ca843c0;
          plVar15 = DAT_14ca843c8;
          if ((bVar9 & 2) == 0) {
            do {
              *plVar14 = (longlong)plVar19;
              LOCK();
              bVar27 = plVar19 != DAT_14ca843c0;
              plVar15 = plVar14;
              if (bVar27) {
                plVar19 = DAT_14ca843c0;
                plVar15 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar15;
              UNLOCK();
            } while (bVar27);
          }
          else {
            do {
              *plVar14 = (longlong)plVar15;
              LOCK();
              bVar27 = plVar15 != DAT_14ca843c8;
              plVar19 = plVar14;
              if (bVar27) {
                plVar15 = DAT_14ca843c8;
                plVar19 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar19;
              UNLOCK();
            } while (bVar27);
          }
        }
      }
    }
  }
  PostMessageW((HWND)param_1[7],0xf,0,0);
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar10 = *(int *)(lVar4 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar10 != 2) {
      if (iVar10 != 1) goto LAB_143156c48;
      DVar12 = FUN_140ad26c0();
      DVar13 = GetCurrentThreadId();
      if (DVar12 == DVar13) goto LAB_1431571f8;
      goto LAB_143156c51;
    }
  }
  else {
LAB_143156c48:
    if (iVar10 != 0x10) {
LAB_143156c51:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar10 = *(int *)(lVar4 + 0xc60), iVar10 == 2))
        goto LAB_1431571f8;
        if (iVar10 == 1) {
          DVar12 = FUN_140ad26c0();
          DVar13 = GetCurrentThreadId();
          if (DVar12 == DVar13) goto LAB_1431571f8;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar22 = (undefined8 *)
                  (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x308);
        puVar17 = (uint *)*puVar22;
        if (puVar17 != (uint *)0x0) goto LAB_143156dec;
        while( true ) {
          uVar20 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar20 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar20 | 1;
            __tlregdtor(&LAB_1431575a5);
          }
          lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar16 = *(undefined4 **)(lVar4 + 0x310);
          *(undefined8 *)(lVar4 + 0x310) = 0;
          if (puVar16 == (undefined4 *)0x0) {
            puVar16 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar16 = 0xffffffff;
          *(undefined4 **)(puVar16 + 0x10) = puVar16 + 0x16;
          puVar16[0x12] = 0;
          *puVar22 = puVar16;
          FUN_140217a48(puVar22);
          puVar17 = (uint *)*puVar22;
LAB_143156dec:
          puVar24 = (undefined8 *)(*(longlong *)(puVar17 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar21 = (uint *)(puVar24 + 0x16);
          uVar20 = puVar17[0x12];
          if (puVar21 <= puVar17 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar17 + 0x10) = puVar17 + 0x4000;
            LOCK();
            uVar3 = *puVar17;
            *puVar17 = *puVar17 + uVar20 + 1;
            UNLOCK();
            if ((uVar3 ^ uVar20) != 0xffffffff) break;
            puVar17 = (uint *)*puVar22;
            *puVar17 = 0xffffffff;
            *(uint **)(puVar17 + 0x10) = puVar17 + 0x16;
            puVar17[0x12] = 0;
            *puVar22 = puVar17;
            puVar24 = (undefined8 *)((longlong)puVar17 + 0x5fU & 0xfffffffffffffff8);
            puVar21 = (uint *)(puVar24 + 0x16);
            uVar20 = 0;
            if (puVar21 <= puVar17 + 0x4000) {
              uVar20 = 1;
              goto LAB_143156e6c;
            }
          }
        }
        uVar20 = uVar20 + 1;
LAB_143156e6c:
        *(uint **)(puVar17 + 0x10) = puVar21;
        puVar17[0x12] = uVar20;
        iVar10 = 0;
        FUN_1447247dc(puVar24,0);
        *puVar24 = &PTR_FUN_14a3453f0;
        puVar24[0x15] = param_1;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar20 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar20 < 2) {
            uVar26 = (ulonglong)(byte)(&DAT_149e38edc)[uVar20];
            iVar10 = 0;
          }
          else {
            uVar26 = 2;
          }
        }
        else {
          iVar10 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                   *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar26 = 5;
        }
        if (*(code **)(puVar24[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar24[0xe] + 0x18))(puVar24 + 0xe,puVar24 + 9);
        }
        puVar24[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar24[9] = puVar24;
        puVar24[10] = puVar24;
        lVar4 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar4 == 0) {
          uVar6 = 1;
          if ((char)uVar26 != '\x06') {
            uVar6 = uVar26;
          }
          uVar26 = uVar6;
          uVar18 = 0;
        }
        else {
          if ((char)uVar26 == '\x06') {
            uVar26 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
          }
          uVar18 = *(undefined8 *)(lVar4 + 0x30);
        }
        puVar24[0xf] = uVar18;
        puVar24[0x10] = uVar26 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar24 + 0x1c) = iVar10;
        if (puVar24 == (undefined8 *)0x0) {
          local_98 = (longlong *)CONCAT71(local_98._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar24 + 1) = *(int *)(puVar24 + 1) + 1;
          UNLOCK();
          local_98 = (longlong *)CONCAT71(local_98._1_7_,1);
          FUN_1447439e4(puVar24);
          LOCK();
          piVar2 = (int *)(puVar24 + 1);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)*puVar24)(puVar24,1);
          }
        }
      }
      else {
        local_168 = &local_98;
        local_88 = 0;
        uStack_84 = 0;
        uStack_78 = 0x4a3453b0;
        iStack_74 = 1;
        iStack_70 = (int)param_1;
        uStack_6c = (uint)((ulonglong)param_1 >> 0x20);
        local_98 = (longlong *)&LAB_143157562;
        FUN_14005a792(&DAT_14ca9a440,L"FD3D11Viewport",&DAT_14ca76704);
        if (local_98 != (longlong *)0x0) {
          puVar17 = (uint *)CONCAT44(uStack_84,local_88);
          if ((uint *)CONCAT44(uStack_84,local_88) == (uint *)0x0) {
            puVar17 = &uStack_78;
          }
          (**(code **)(*(longlong *)puVar17 + 0x10))();
        }
      }
      goto LAB_143156cf6;
    }
  }
LAB_1431571f8:
  FUN_14735a6ec(puVar22);
LAB_143156cf6:
  if (local_b8 != (longlong *)0x0) {
    (**(code **)(*local_b8 + 0x10))();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14315732d FUN_14315732d body=386 status=ok
// SIG undefined FUN_14315732d(void)

void FUN_14315732d(undefined8 *param_1,int param_2,uint param_3)

{
  int iVar1;
  wchar_t *pwVar2;
  undefined4 uVar3;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  uint local_24;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = (longlong *)0x0;
  iVar1 = (**(code **)*param_1)(param_1,&DAT_14a3452d8);
  if (iVar1 < 0) goto LAB_143157482;
  if (param_3 < 7) {
    if ((3U >> (param_3 & 0x1f) & 1) == 0) {
      if ((0x18U >> (param_3 & 0x1f) & 1) == 0) {
        if ((0x60U >> (param_3 & 0x1f) & 1) == 0) goto LAB_143157427;
        local_24 = 0;
        uVar3 = 1;
        iVar1 = (**(code **)(*local_20 + 0x128))(local_20,1);
        pwVar2 = L"RGB_FULL_G10_NONE_P709";
      }
      else {
        local_24 = 0;
        uVar3 = 0xc;
        iVar1 = (**(code **)(*local_20 + 0x128))(local_20,0xc);
        pwVar2 = L"RGB_FULL_G2084_NONE_P2020";
      }
    }
    else {
      if (param_2 != 2) goto LAB_143157427;
      local_24 = 0;
      uVar3 = 0x11;
      iVar1 = (**(code **)(*local_20 + 0x128))(local_20,0x11);
      pwVar2 = L"RGB_FULL_G22_NONE_P2020";
    }
  }
  else {
LAB_143157427:
    local_24 = 0;
    uVar3 = 0;
    iVar1 = (**(code **)(*local_20 + 0x128))(local_20,0);
    pwVar2 = L"RGB_FULL_G22_NONE_P709";
  }
  FUN_140056680(local_38,pwVar2);
  if ((-1 < iVar1) && ((local_24 & 1) != 0)) {
    (**(code **)(*local_20 + 0x130))(local_20,uVar3);
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
LAB_143157482:
  if (local_20 != (longlong *)0x0) {
    (**(code **)(*local_20 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431574b0 FUN_1431574b0 body=178 status=ok
// SIG undefined FUN_1431574b0(void)

void FUN_1431574b0(longlong param_1,char param_2)

{
  HWND hWnd;
  char cVar1;
  BOOL BVar2;
  int iVar3;
  HWND pHVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  if ((*(uint *)(param_1 + 0x54) & 1) == 0) {
    return;
  }
  pHVar4 = GetFocus();
  hWnd = *(HWND *)(param_1 + 0x38);
  BVar2 = IsIconic(hWnd);
  if (param_2 == '\0') {
    if (pHVar4 != hWnd) {
      return;
    }
    if (BVar2 != 0) {
      return;
    }
  }
  FUN_14080c2b4();
  cVar1 = *(char *)(param_1 + 100);
  if (cVar1 == '\0') {
    plVar6 = *(longlong **)(param_1 + 0x68);
  }
  else {
    if (*(char *)(param_1 + 0x80) == '\x01') {
      plVar6 = *(longlong **)(param_1 + 0x68);
    }
    else {
      plVar6 = *(longlong **)(param_1 + 0x68);
      if (*(char *)(param_1 + 0x58) != '\n') goto LAB_14315752e;
    }
    plVar5 = *(longlong **)(param_1 + 0x78);
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 8))(plVar5);
      cVar1 = *(char *)(param_1 + 100);
      goto LAB_143157530;
    }
  }
LAB_14315752e:
  plVar5 = (longlong *)0x0;
LAB_143157530:
  iVar3 = (**(code **)(*plVar6 + 0x50))(plVar6,cVar1,plVar5);
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
  if (-1 < iVar3) {
    LOCK();
    *(uint *)(param_1 + 0x54) = *(uint *)(param_1 + 0x54) & 0xfffffffe;
    UNLOCK();
  }
  return;
}



// FUNCTION 14315757c FUN_14315757c body=12 status=ok
// SIG undefined FUN_14315757c(void)

void FUN_14315757c(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143157585. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143157588 FUN_143157588 body=29 status=ok
// SIG undefined FUN_143157588(void)

undefined8 FUN_143157588(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1431575cc FUN_1431575cc body=282 status=ok
// SIG undefined FUN_1431575cc(void)

undefined8 * FUN_1431575cc(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_1431575a5);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 1431576e6 FUN_1431576e6 body=104 status=ok
// SIG undefined FUN_1431576e6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431576e6(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_14735a6ec(_DAT_000000a8 + 0x88);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_14735a6ec(param_1[0x15] + 0x88);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143157744. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 14315774e FUN_14315774e body=61 status=ok
// SIG undefined FUN_14315774e(void)

void FUN_14315774e(void)

{
  FUN_141471170(&DAT_14ca766d8,L"r.D3D11.UseAllowTearing",&DAT_14c760b1c,
                L"Enable new dxgi flip mode with d3d11",0x24);
  atexit(FUN_143156304);
  return;
}



// FUNCTION 14315778c FUN_14315778c body=69 status=ok
// SIG undefined FUN_14315778c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14315778c(void)

{
  _DAT_14ca76718 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431577ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca76720,1);
  return;
}



// FUNCTION 1431577d1 FUN_1431577d1 body=69 status=ok
// SIG undefined FUN_1431577d1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431577d1(void)

{
  _DAT_14ca76730 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143157813. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca76738,1);
  return;
}



// FUNCTION 143157816 FUN_143157816 body=69 status=ok
// SIG undefined FUN_143157816(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143157816(void)

{
  _DAT_14ca769e0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143157858. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca769e8,1);
  return;
}



// FUNCTION 14315785b FUN_14315785b body=69 status=ok
// SIG undefined FUN_14315785b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14315785b(void)

{
  _DAT_14ca76740 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014315789d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca76748,1);
  return;
}



// FUNCTION 1431578a0 FUN_1431578a0 body=69 status=ok
// SIG undefined FUN_1431578a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431578a0(void)

{
  _DAT_14ca76758 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431578e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca76760,1);
  return;
}



// FUNCTION 1431578e5 FUN_1431578e5 body=69 status=ok
// SIG undefined FUN_1431578e5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431578e5(void)

{
  _DAT_14ca76770 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143157927. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca76778,1);
  return;
}



// FUNCTION 14315792a FUN_14315792a body=69 status=ok
// SIG undefined FUN_14315792a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14315792a(void)

{
  _DAT_14ca76790 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014315796c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca76798,1);
  return;
}



// FUNCTION 143157970 FUN_143157970 body=1040 status=ok
// SIG undefined FUN_143157970(void)

undefined8 * FUN_143157970(undefined8 *param_1,void *param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  undefined1 auStack_68 [36];
  uint local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = &PTR_FUN_14a345be0;
  memset(param_1 + 1,0,0xa8);
  param_1[0x16] = 0xffffffffffffffff;
  param_1[0x17] = 0;
  *(undefined2 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined1 *)((longlong)param_1 + 0xc6) = 0;
  param_1[0x19] = 0;
  *(undefined8 *)((longlong)param_1 + 0xcd) = 0;
  memcpy(param_1 + 0x1b,param_2,0x158);
  param_1[0x46] = 0;
  param_1[0x47] = param_1;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x48));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x48),4000);
  param_1[0x51] = 0;
  *(undefined4 *)(param_1 + 0x52) = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  *(undefined8 *)((longlong)param_1 + 0x294) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x29c) = 0;
  param_1[0x55] = 0;
  *(undefined4 *)(param_1 + 0x56) = 0;
  FUN_146013844(param_1 + 0x57,param_1);
  param_1[0x57] = &PTR_FUN_14a353730;
  param_1[0x88] = 0;
  param_1[0x89] = 0;
  param_1[0x92] = 0;
  param_1[0x93] = 0;
  param_1[0x94] = 0;
  *(undefined1 *)(param_1 + 0x95) = 1;
  param_1[0x96] = 0;
  param_1[0x97] = 0;
  param_1[0x98] = 0;
  param_1[0x99] = 0;
  param_1[0x9a] = 0;
  param_1[0x9b] = 0;
  param_1[0xa4] = 0;
  param_1[0xa5] = 0;
  param_1[0xa6] = 0;
  param_1[0xa7] = 0;
  uVar2 = DAT_14c760da4;
  param_1[0xa9] = 0;
  lVar5 = 0x565;
  do {
    puVar1 = (undefined8 *)((longlong)param_1 + lVar5 + -0x15);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)((longlong)param_1 + lVar5 + -5) = 0xffffffff;
    *(undefined2 *)((longlong)param_1 + lVar5 + -1) = 0;
    lVar5 = lVar5 + 0x18;
  } while (lVar5 != 0x625);
  uVar4 = ~(-1 << ((byte)uVar2 & 0x1f));
  *(undefined4 *)((longlong)param_1 + 0x624) = 0;
  param_1[0xc2] = 0;
  param_1[0xc3] = 0;
  *(undefined1 *)(param_1 + 0xc4) = 0;
  *(undefined4 *)(param_1 + 0xc5) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x62c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xc6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x634) = 0xffffffff;
  param_1[199] = 0;
  *(undefined1 *)(param_1 + 200) = 0;
  *(undefined4 *)((longlong)param_1 + 0x644) = 0;
  *(undefined4 *)((longlong)param_1 + 0x647) = 0;
  param_1[0xca] = param_1;
  *(uint *)(param_1 + 0xcb) = uVar4;
  *(uint *)((longlong)param_1 + 0x65c) = uVar4;
  param_1[0xa8] = &PTR_FUN_14a348560;
  *(undefined4 *)(param_1 + 0xcc) = 0;
  *(undefined1 *)((longlong)param_1 + 0x664) = 1;
  param_1[0xda] = 0;
  *(undefined4 *)(param_1 + 0xdb) = 0;
  param_1[0xcd] = 0;
  param_1[0xce] = 0;
  param_1[0xcf] = 0;
  param_1[0xd0] = 0;
  param_1[0xd1] = 0;
  param_1[0xd2] = 0;
  param_1[0xd3] = 0;
  param_1[0xd4] = 0;
  *(undefined1 *)(param_1 + 0xd5) = 0;
  param_1[0xd6] = 0;
  param_1[0xd7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x6dc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x6e4) = 0;
  param_1[0xde] = 0;
  *(undefined4 *)(param_1 + 0xdf) = 0;
  param_1[0xe0] = 0;
  param_1[0xe1] = 0;
  param_1[0xe2] = 0;
  param_1[0xe3] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xe4));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0xe4),4000);
  param_1[0xe9] = 0;
  param_1[0xea] = 0;
  param_1[0xeb] = 0;
  param_1[0xec] = 0;
  param_1[0xed] = 0;
  param_1[0xee] = 0;
  param_1[0xef] = 0;
  param_1[0xf0] = 0;
  param_1[0xf2] = 0;
  param_1[0xf3] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf4));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0xf4),4000);
  param_1[0xf9] = 0;
  *(undefined4 *)(param_1 + 0x102) = 0;
  param_1[0x103] = param_1;
  param_1[0x104] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x105));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x105),4000);
  param_1[0x9c] = 0;
  param_1[0x9d] = 0;
  param_1[0x9e] = 0;
  param_1[0x9f] = 0;
  param_1[0xa0] = 0;
  param_1[0xa1] = 0;
  param_1[0xa2] = 0;
  param_1[0xa3] = 0;
  param_1[0xfa] = 0;
  param_1[0xfb] = 0;
  param_1[0xfc] = 0;
  param_1[0xfd] = 0;
  param_1[0xfe] = 0;
  param_1[0xff] = 0;
  param_1[0x100] = 0;
  param_1[0x101] = 0;
  param_1[0x10a] = 0;
  param_1[0x10b] = 0;
  local_44 = 1;
  if (DAT_14c846b14 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                  L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  FUN_1409887c6(&DAT_14c846b20,L"MaxGPUCount=",&local_44);
  if (DAT_14c846b14 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                  L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  cVar3 = FUN_14054d46e(&DAT_14c846b20,L"VMGPU");
  uVar4 = local_44;
  if (cVar3 == '\0') {
    if ((DAT_14ca81480 == 0) && (*(uint *)(param_1 + 0x44) < local_44)) {
      uVar4 = *(uint *)(param_1 + 0x44);
    }
  }
  else {
    DAT_14ca81480 = 1;
  }
  uVar6 = 8;
  if (uVar4 < 8) {
    uVar6 = uVar4;
  }
  *(uint *)(param_1 + 0x44) = uVar6;
  if ((local_40 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 143157d82 FUN_143157d82 body=4685 status=ok
// SIG undefined FUN_143157d82(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143157d82(longlong param_1,byte param_2)

{
  undefined8 *puVar1;
  int *piVar2;
  ushort uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  char cVar10;
  undefined1 uVar11;
  uint uVar12;
  int iVar13;
  DWORD DVar14;
  DWORD DVar15;
  HMODULE pHVar16;
  FARPROC pFVar17;
  undefined8 uVar18;
  longlong *plVar19;
  ulonglong uVar20;
  PVOID pvVar21;
  INT_PTR IVar22;
  INT_PTR IVar23;
  ushort *puVar24;
  ushort **ppuVar25;
  ulonglong uVar26;
  undefined ***pppuVar27;
  wchar_t *pwVar28;
  wchar_t *pwVar29;
  longlong lVar30;
  undefined8 unaff_RDI;
  ushort uVar31;
  uint uVar32;
  bool bVar33;
  bool bVar34;
  bool bVar35;
  undefined1 auStack_2d8 [32];
  longlong **local_2b8;
  undefined8 *local_2b0;
  ushort ***local_2a8;
  undefined1 *local_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  longlong *local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  longlong *local_240;
  undefined8 local_238;
  undefined8 uStack_230;
  ushort **local_228;
  int iStack_220;
  undefined4 uStack_21c;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined4 uStack_200;
  undefined4 local_1fc;
  undefined4 uStack_1f8;
  undefined8 uStack_1f4;
  undefined1 local_1ec [4];
  ushort *local_1e8;
  ushort **ppuStack_1e0;
  undefined8 local_1d8;
  ulonglong uStack_1d0;
  ushort **local_1a8;
  uint local_1a0;
  uint local_19c;
  longlong *local_198;
  ushort ***pppuStack_190;
  undefined ***local_188;
  undefined8 uStack_180;
  undefined **local_178;
  code *pcStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  longlong *plStack_150;
  undefined8 local_148;
  ushort **ppuStack_140;
  longlong local_d8 [2];
  longlong *local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined ***local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined **local_a8;
  code *pcStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 local_78;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_2d8;
  if (DAT_14c846b14 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                  L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  cVar10 = FUN_14054d46e(&DAT_14c846b20,L"d3d12gpuvalidation");
  uVar26 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
  if (cVar10 == '\0') {
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    uVar12 = FUN_14054d46e(&DAT_14c846b20,L"gpuvalidation");
    uVar26 = (ulonglong)uVar12;
    if ((byte)(param_2 | (byte)uVar12) == 1) goto LAB_143157e00;
    pwVar28 = L"false";
    uVar26 = 0;
  }
  else {
LAB_143157e00:
    local_198 = (longlong *)0x0;
    iVar13 = Ordinal_102(&DAT_14a345c68);
    if (iVar13 < 0) {
      FUN_140033559(".\\Runtime/D3D12RHI/Private/D3D12Adapter.cpp",0x1cb,
                    L"Failed to create D3D debug interface, error %x. The debug interface requires the D3D12 SDK Layers. Please install the Graphics Tools for Windows. See: https://docs.microsoft.com/en-us/windows/uwp/gaming/use-the-directx-runtime-and-visual-studio-graphics-diagnostic-features"
                    ,iVar13);
    }
    else {
      (**(code **)(*local_198 + 0x18))();
      *(undefined1 *)(param_1 + 0xd4) = 1;
      if ((char)uVar26 != '\0') {
        local_1e8 = (ushort *)0x0;
        iVar13 = (**(code **)*local_198)(local_198,&DAT_14a345c78);
        if (iVar13 < 0) {
          local_2b0 = &local_238;
          local_238 = 0;
          uStack_230 = 0;
          local_2b8 = (longlong **)0x0;
          FUN_145763094(iVar13,
                        "DebugController->QueryInterface(IID_PPV_ARGS(DebugController1.GetInitReference()))"
                        ,".\\Runtime/D3D12RHI/Private/D3D12Adapter.cpp",0x1c3);
        }
        (**(code **)(*(longlong *)local_1e8 + 0x20))(local_1e8,1);
        DAT_14c867d1c = 1;
        if (local_1e8 != (ushort *)0x0) {
          (**(code **)(*(longlong *)local_1e8 + 0x10))();
        }
      }
    }
    if (local_198 != (longlong *)0x0) {
      (**(code **)(*local_198 + 0x10))();
    }
    pwVar28 = L"true";
    uVar26 = CONCAT71((int7)(uVar26 >> 8),1);
  }
  FUN_140056680(&local_198,pwVar28);
  FUN_140056680(&local_1e8,L"RHI.D3DDebug");
  FUN_14152eab6(&local_1e8,&local_198);
  if (local_1e8 != (ushort *)0x0) {
    FUN_1400020a8();
  }
  if (local_198 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca767a8) && (FUN_144b3d300(&DAT_14ca767a8), DAT_14ca767a8 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    DAT_14ca767a0 =
         (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.GPUCrashOnOutOfMemory",1)
    ;
    _Init_thread_footer(&DAT_14ca767a8);
  }
  if (DAT_14ca767a0 != (longlong *)0x0) {
    (**(code **)(*DAT_14ca767a0 + 0xb0))();
  }
  if (DAT_14ca84df4 == 0x10de) {
    local_88 = 0;
    local_78 = 0;
    FUN_142b74a24();
    pcStack_a0 = pcRam000000014c9abfd8;
    local_a8 = DAT_14c9abfd0;
    local_b8 = DAT_14c9abfc0;
    local_c8 = DAT_14c9abfb0;
    local_168 = _DAT_14c9abfe0;
    uStack_160 = uRam000000014c9abfe8;
    local_178 = DAT_14c9abfd0;
    pcStack_170 = pcRam000000014c9abfd8;
    local_188 = DAT_14c9abfc0;
    uStack_180 = uRam000000014c9abfc8;
    local_198 = DAT_14c9abfb0;
    pppuStack_190 = (ushort ***)uRam000000014c9abfb8;
    uVar6 = CONCAT44(uStack_94,local_98);
    uVar7 = CONCAT44(uStack_8c,uStack_90);
    uVar18 = CONCAT44(uStack_bc,uStack_c0);
    DAT_14c9abfb0 = (longlong *)&LAB_14736f7cc;
    uVar5 = CONCAT44(uStack_ac,uStack_b0);
    DAT_14c9abfc0 = (undefined ***)0x0;
    DAT_14c9abfd0 = &PTR_LAB_14a348fd0;
    pcRam000000014c9abfd8 = FUN_143160f7b;
    uStack_c0 = (undefined4)uRam000000014c9abfb8;
    uStack_bc = uRam000000014c9abfb8._4_4_;
    local_98 = _DAT_14c9abfe0;
    uStack_94 = DAT_14c9abfe0_4;
    uStack_90 = (undefined4)uRam000000014c9abfe8;
    uStack_8c = uRam000000014c9abfe8._4_4_;
    uStack_b0 = (undefined4)uRam000000014c9abfc8;
    uStack_ac = uRam000000014c9abfc8._4_4_;
    uRam000000014c9abfb8 = uVar18;
    uRam000000014c9abfc8 = uVar5;
    _DAT_14c9abfe0 = uVar6;
    uRam000000014c9abfe8 = uVar7;
    if (local_c8 != (longlong *)0x0) {
      pppuVar27 = local_b8;
      if (local_b8 == (undefined ***)0x0) {
        pppuVar27 = &local_a8;
      }
      (*(code *)(*pppuVar27)[2])();
    }
  }
  pHVar16 = (HMODULE)FUN_14155261e(L"d3d12.dll");
  if ((pHVar16 == (HMODULE)0x0) ||
     (pFVar17 = GetProcAddress(pHVar16,"D3D12GetInterface"), pFVar17 == (FARPROC)0x0)) {
LAB_1431580c7:
    bVar34 = false;
LAB_1431580ca:
    pwVar28 = L"false";
    bVar35 = false;
    bVar33 = bVar34;
  }
  else {
    iVar13 = FUN_14593209c();
    if (iVar13 != 2) {
      iVar13 = FUN_14593209c();
      if (iVar13 != 1) goto LAB_1431580c7;
      local_198 = (longlong *)0x0;
      IVar22 = (*pFVar17)(&DAT_14a3491c8,&DAT_14a345f78);
      bVar34 = -1 < (int)IVar22;
      if (bVar34) {
        (**(code **)(*local_198 + 0x30))(local_198,2);
        (**(code **)(*local_198 + 0x18))(local_198,2);
        (**(code **)(*local_198 + 0x20))(local_198,2);
        (**(code **)(*local_198 + 0x38))(local_198,1);
        DAT_14c867d1c = 1;
      }
      if (local_198 != (longlong *)0x0) {
        (**(code **)(*local_198 + 0x10))();
      }
      goto LAB_1431580ca;
    }
    local_198 = (longlong *)0x0;
    IVar22 = (*pFVar17)(&DAT_14a3491c8,&DAT_14a345f58);
    bVar35 = -1 < (int)IVar22;
    if (bVar35) {
      (**(code **)(*local_198 + 0x18))(local_198,2);
      (**(code **)(*local_198 + 0x20))(local_198,2);
      DAT_14c867d1c = 1;
    }
    local_1e8 = (ushort *)0x0;
    IVar23 = (*pFVar17)(&DAT_14a3491c8,&DAT_14a345f68);
    bVar33 = -1 < (int)IVar23;
    if (bVar33) {
      (**(code **)(*(longlong *)local_1e8 + 0x30))(local_1e8,2);
    }
    if (local_1e8 != (ushort *)0x0) {
      (**(code **)(*(longlong *)local_1e8 + 0x10))();
    }
    if (local_198 != (longlong *)0x0) {
      (**(code **)(*local_198 + 0x10))();
    }
    pwVar28 = L"false";
    if (-1 < (int)IVar22) {
      pwVar28 = L"true";
    }
    bVar34 = false;
  }
  FUN_140056680(&local_198,pwVar28);
  FUN_140056680(&local_1e8,L"RHI.DRED");
  FUN_14152eab6(&local_1e8,&local_198);
  if (local_1e8 != (ushort *)0x0) {
    FUN_1400020a8();
  }
  if (local_198 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  pwVar29 = L"true";
  pwVar28 = L"false";
  if (bVar34) {
    pwVar28 = L"true";
  }
  FUN_140056680(&local_198,pwVar28);
  FUN_140056680(&local_1e8,L"RHI.DREDMarkersOnly");
  FUN_14152eab6(&local_1e8,&local_198);
  if (local_1e8 != (ushort *)0x0) {
    FUN_1400020a8();
  }
  if (local_198 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (!bVar33) {
    pwVar29 = L"false";
  }
  if (!bVar35) {
    pwVar29 = L"false";
  }
  FUN_140056680(&local_198,pwVar29);
  FUN_140056680(&local_1e8,L"RHI.DREDContext");
  FUN_14152eab6(&local_1e8,&local_198);
  if (local_1e8 != (ushort *)0x0) {
    FUN_1400020a8();
  }
  if (local_198 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  uVar18 = FUN_14155261e(L"dxgi.dll");
  *(undefined8 *)(param_1 + 0xb8) = uVar18;
  FUN_14736b0de((undefined8 *)(param_1 + 0x70),uVar26 & 0xffffffff,uVar18);
  FUN_14736b18e(param_1,*(undefined8 *)(param_1 + 0x70));
  local_240 = (longlong *)0x0;
  plVar19 = *(longlong **)(param_1 + 0x90);
  if (plVar19 == (longlong *)0x0 || *(int *)(param_1 + 0x228) == 0) {
    plVar19 = *(longlong **)(param_1 + 0x70);
    (**(code **)(*plVar19 + 0x38))(plVar19,*(undefined4 *)(param_1 + 0x208),&local_240);
  }
  else {
    local_2b8 = &local_240;
    (**(code **)(*plVar19 + 0xe8))
              (plVar19,*(undefined4 *)(param_1 + 0x208),*(int *)(param_1 + 0x228),&DAT_14a343ec0);
  }
  plVar9 = local_240;
  puVar1 = (undefined8 *)(param_1 + 0x230);
  plVar19 = *(longlong **)(param_1 + 0x230);
  if (plVar19 != (longlong *)0x0) {
    *puVar1 = 0;
    (**(code **)(*plVar19 + 0x10))();
  }
  iVar13 = (**(code **)*plVar9)(plVar9,&DAT_14a343ec0,puVar1);
  if (iVar13 < 0) {
    local_2b0 = &local_258;
    local_258 = 0;
    uStack_250 = 0;
    local_2b8 = (longlong **)0x0;
    FUN_145763094(iVar13,"TempAdapter->QueryInterface(IID_PPV_ARGS(DxgiAdapter.GetInitReference()))"
                  ,".\\Runtime/D3D12RHI/Private/D3D12Adapter.cpp",0x24c);
  }
  if (DAT_14ca84df4 == 0x1002) {
    if (*(longlong *)(DAT_14ca77418 + 0x1c8) != 0) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      plVar19 = (longlong *)
                (**(code **)(*DAT_14c8407a8 + 200))
                          (DAT_14c8407a8,L"r.DisableEngineAndAppRegistration",1);
      lVar30 = DAT_14ca9ed28;
      if (plVar19 == (longlong *)0x0) {
        iVar13 = *(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60
                         );
        if (iVar13 == 0x40000002) {
          uVar20 = 0;
        }
        else {
          bVar34 = true;
          if ((DAT_14c86a9f8 == '\x01') && (iVar13 != 2)) {
            if (iVar13 == 1) {
              DVar14 = FUN_140ad26c0();
              DVar15 = GetCurrentThreadId();
              bVar34 = DVar14 == DVar15;
            }
            else {
              bVar34 = false;
            }
          }
          uVar20 = (ulonglong)(bVar34 ^ 1);
        }
LAB_143158970:
        bVar34 = true;
        bVar33 = true;
        if (*(int *)(lVar30 + uVar20 * 4) == 0) {
LAB_1431589b6:
          if (DAT_14c764000 == 0) {
            bVar33 = false;
          }
          else {
            lVar30 = 0;
            uVar31 = DAT_14c764000;
            while( true ) {
              uVar3 = *(ushort *)((longlong)&DAT_149e01fe8 + lVar30);
              uVar12 = (uint)uVar3;
              if (uVar31 != uVar3) {
                uVar32 = (uint)uVar31;
                uVar20 = (ulonglong)uVar32;
                if ((uVar3 | uVar31) < 0x80) {
                  uVar32 = (uint)(byte)(&DAT_149e05da0)[uVar20];
                  uVar12 = (uint)(byte)(&DAT_149e05da0)[uVar3];
                  if ((&DAT_149e05da0)[uVar20] == (&DAT_149e05da0)[uVar3]) goto LAB_143158bca;
                }
                iVar13 = uVar32 - uVar12;
                goto LAB_143158c00;
              }
              if (uVar31 == 0) break;
LAB_143158bca:
              uVar31 = *(ushort *)((longlong)&DAT_14c764002 + lVar30);
              lVar30 = lVar30 + 2;
            }
            iVar13 = 0;
LAB_143158c00:
            bVar33 = iVar13 != 0;
          }
          bVar33 = (bool)(bVar33 ^ 1);
          bVar34 = false;
        }
      }
      else {
        lVar30 = (**(code **)(*plVar19 + 0x68))(plVar19);
        lVar8 = DAT_14ca9ed28;
        lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        iVar13 = *(int *)(lVar4 + 0xc60);
        if (iVar13 == 0x40000002) {
          uVar20 = 0;
        }
        else {
          bVar34 = true;
          if ((DAT_14c86a9f8 == '\x01') && (iVar13 != 2)) {
            if (iVar13 == 1) {
              DVar14 = FUN_140ad26c0();
              DVar15 = GetCurrentThreadId();
              bVar34 = DVar14 == DVar15;
            }
            else {
              bVar34 = false;
            }
          }
          uVar20 = (ulonglong)(bVar34 ^ 1);
        }
        bVar34 = true;
        if (*(int *)(lVar8 + uVar20 * 4) == 0) {
          if (lVar30 != 0) {
            iVar13 = *(int *)(lVar4 + 0xc60);
            if (iVar13 == 0x40000002) {
              uVar20 = 0;
            }
            else {
              bVar34 = true;
              if ((DAT_14c86a9f8 == '\x01') && (iVar13 != 2)) {
                if (iVar13 == 1) {
                  DVar14 = FUN_140ad26c0();
                  DVar15 = GetCurrentThreadId();
                  bVar34 = DVar14 == DVar15;
                }
                else {
                  bVar34 = false;
                }
              }
              uVar20 = (ulonglong)(bVar34 ^ 1);
            }
            goto LAB_143158970;
          }
          goto LAB_1431589b6;
        }
        bVar33 = true;
      }
      local_198 = *(longlong **)(param_1 + 0x230);
      pppuStack_190 = (ushort ***)0x4b571db6189819f1;
      local_188 = (undefined ***)0xf7859b33211854be;
      uStack_180 = CONCAT44(uStack_180._4_4_,*(undefined4 *)(param_1 + 0x20c));
      local_1d8 = 0;
      uStack_1d0 = 0;
      local_1e8 = (ushort *)0x0;
      ppuStack_1e0 = (ushort **)0x0;
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c868710) && (FUN_144b3d300(&DAT_14c868710), DAT_14c868710 == -1))
      {
        FUN_145c3c252(&DAT_14c8686c8);
        DAT_14c868708 = &DAT_14c8686c8;
        atexit(thunk_FUN_14626bbac);
        _Init_thread_footer(&DAT_14c868710);
      }
      FUN_14626b538(DAT_14c868708,&local_268,1);
      FUN_140056680(local_d8,L"UnrealEngine");
      FUN_1401c7f3e(&local_228,local_d8,&local_268);
      if (local_d8[0] != 0) {
        FUN_1400020a8();
      }
      if (local_268 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      ppuStack_1e0 = (ushort **)&DAT_149dfb77a;
      if (iStack_220 != 0) {
        ppuStack_1e0 = local_228;
      }
      if (bVar34) {
        ppuStack_1e0 = (ushort **)&DAT_149dfb77a;
      }
      local_1e8 = &DAT_14c764000;
      if (bVar33) {
        local_1e8 = &DAT_149dfb77a;
      }
      local_1d8 = 0xffffad00ffffad00;
      uStack_1d0 = uStack_1d0 & 0xffffffff00000000;
      local_268 = (longlong *)0x0;
      uStack_260 = 0;
      iVar13 = agsDriverExtensionsDX12_CreateDevice
                         (*(undefined8 *)(DAT_14ca77418 + 0x1c8),&local_198);
      bVar34 = iVar13 == 0;
      if (bVar34) {
        plVar19 = *(longlong **)(param_1 + 8);
        if (plVar19 != local_268) {
          *(longlong **)(param_1 + 8) = local_268;
          if (local_268 != (longlong *)0x0) {
            (**(code **)(*local_268 + 8))();
          }
          if (plVar19 != (longlong *)0x0) {
            (**(code **)(*plVar19 + 0x10))(plVar19);
          }
        }
        *(undefined4 *)(DAT_14ca77418 + 0x1d0) = (undefined4)uStack_260;
      }
      if (local_228 != (ushort **)0x0) {
        FUN_1400020a8();
      }
      goto LAB_14315834d;
    }
  }
  else {
    bVar34 = false;
LAB_14315834d:
    if ((DAT_14ca84df4 == 0x8086) && (cVar10 = FUN_1462b4477(), cVar10 != '\0')) {
      local_228 = (ushort **)0x0;
      iVar13 = Ordinal_101(*puVar1,0xb000,&DAT_14a349310);
      if (iVar13 < 0) {
        local_2b0 = &local_278;
        local_278 = 0;
        uStack_270 = 0;
        local_2b8 = (longlong **)0x0;
        FUN_145763094(iVar13,
                      "D3D12CreateDevice( GetAdapter(), D3D_FEATURE_LEVEL_11_0, IID_PPV_ARGS(&Device) )"
                      ,".\\Runtime/D3D12RHI/Private/D3D12Adapter.cpp",0x293);
      }
      memset(&local_198,0,0xc0);
      puVar24 = (ushort *)FUN_1431809fe(local_228,&local_198);
      if (puVar24 != (ushort *)0x0) {
        FUN_143180e74(puVar24,&local_198);
        local_1e8 = puVar24;
        FUN_144bcf310();
      }
      (**(code **)(*local_228 + 8))();
    }
    if (bVar34) goto LAB_1431583ab;
  }
  if ((DAT_14ca84df4 == 0x8086) && (cVar10 = FUN_1462b4477(), cVar10 != '\0')) {
    FUN_143180eee(DAT_14ca84de8);
  }
  plVar19 = *(longlong **)(param_1 + 8);
  if (plVar19 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 8) = 0;
    (**(code **)(*plVar19 + 0x10))();
  }
  iVar13 = Ordinal_101(*(undefined8 *)(param_1 + 0x230),*(undefined4 *)(param_1 + 0x20c),
                       &DAT_14a349310,(undefined8 *)(param_1 + 8));
  if (iVar13 < 0) {
    local_2b0 = &local_288;
    local_288 = 0;
    uStack_280 = 0;
    local_2b8 = (longlong **)0x0;
    FUN_145763094(iVar13,
                  "D3D12CreateDevice( GetAdapter(), GetFeatureLevel(), IID_PPV_ARGS(RootDevice.GetInitReference()) )"
                  ,".\\Runtime/D3D12RHI/Private/D3D12Adapter.cpp",0x2b0);
  }
LAB_1431583ab:
  lVar4 = DAT_14ca76728;
  lVar30 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar13 = *(int *)(lVar30 + 0xc60);
  if (iVar13 == 0x40000002) {
    uVar20 = 0;
  }
  else {
    bVar34 = true;
    if ((DAT_14c86a9f8 == '\x01') && (iVar13 != 2)) {
      if (iVar13 == 1) {
        DVar14 = FUN_140ad26c0();
        DVar15 = GetCurrentThreadId();
        bVar34 = DVar14 == DVar15;
      }
      else {
        bVar34 = false;
      }
    }
    uVar20 = (ulonglong)(bVar34 ^ 1);
  }
  if (*(int *)(lVar4 + uVar20 * 4) == 0) {
    DAT_14c760b88 = 0;
  }
  local_1e8 = *(ushort **)(param_1 + 8);
  local_198 = (longlong *)&LAB_143169dda;
  local_228 = &local_1e8;
  pppuStack_190 = &local_228;
  FUN_1415d421a();
  if ((char)uVar26 != '\0') {
    pvVar21 = AddVectoredExceptionHandler(1,FUN_143158fd0);
    *(PVOID *)(param_1 + 0xb0) = pvVar21;
    pHVar16 = (HMODULE)FUN_14155261e(L"dxgidebug.dll");
    *(HMODULE *)(param_1 + 0xa0) = pHVar16;
    if ((pHVar16 != (HMODULE)0x0) &&
       (pFVar17 = GetProcAddress(pHVar16,"DXGIGetDebugInterface"), pFVar17 != (FARPROC)0x0)) {
      plVar19 = *(longlong **)(param_1 + 0xa8);
      if (plVar19 != (longlong *)0x0) {
        *(undefined8 *)(param_1 + 0xa8) = 0;
        (**(code **)(*plVar19 + 0x10))();
      }
      (*pFVar17)(&DAT_14a346118,(undefined8 *)(param_1 + 0xa8));
    }
    local_268 = (longlong *)0x0;
    iVar13 = (**(code **)**(undefined8 **)(param_1 + 8))
                       (*(undefined8 **)(param_1 + 8),&DAT_14a346128);
    if (iVar13 < 0) {
      local_2b0 = &local_298;
      local_298 = 0;
      uStack_290 = 0;
      local_2b8 = (longlong **)0x0;
      FUN_145763094(iVar13,
                    "RootDevice->QueryInterface(__uuidof(ID3D12InfoQueue), (void**)&pd3dInfoQueue)",
                    ".\\Runtime/D3D12RHI/Private/D3D12Adapter.cpp",0x2ec);
    }
    lVar4 = DAT_14ca769f0;
    if (local_268 != (longlong *)0x0) {
      piVar2 = (int *)(lVar30 + 0xc60);
      local_148 = 0;
      ppuStack_140 = (ushort **)0x0;
      local_158 = 0;
      plStack_150 = (longlong *)0x0;
      local_168 = 0;
      uStack_160 = 0;
      local_178 = (undefined **)0x0;
      pcStack_170 = (code *)0x0;
      local_188 = (undefined ***)0x0;
      uStack_180 = 0;
      local_198 = (longlong *)0x0;
      pppuStack_190 = (ushort ***)0x0;
      iVar13 = *piVar2;
      if (((iVar13 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar13 == 2)) {
        uVar26 = 0;
      }
      else if (iVar13 == 1) {
        DVar14 = FUN_140ad26c0();
        DVar15 = GetCurrentThreadId();
        uVar26 = (ulonglong)(DVar14 != DVar15);
      }
      else {
        uVar26 = 1;
      }
      lVar30 = DAT_14ca769f0;
      if (*(int *)(lVar4 + uVar26 * 4) < 4) {
        iVar13 = *piVar2;
        if (((iVar13 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar13 == 2)) {
          uVar26 = 0;
        }
        else if (iVar13 == 1) {
          DVar14 = FUN_140ad26c0();
          DVar15 = GetCurrentThreadId();
          uVar26 = (ulonglong)(DVar14 != DVar15);
        }
        else {
          uVar26 = 1;
        }
        bVar34 = 1 < *(int *)(lVar30 + uVar26 * 4);
        iVar13 = 2 - (uint)bVar34;
      }
      else {
        iVar13 = 1;
        bVar34 = true;
      }
      local_d8[0] = 0x200000003;
      local_158 = CONCAT44(local_158._4_4_,iVar13);
      plStack_150 = local_d8;
      local_2a0 = local_1ec;
      uStack_1f8 = 0x260;
      uStack_1f4 = 0x39b00000494;
      uStack_208 = 0xca0000039e;
      uStack_200 = 0xd2;
      local_1fc = 0x530;
      local_218 = 0x39f00000335;
      uStack_210 = 0x3c3000003f0;
      local_228 = (ushort **)0xfd000002a7;
      iStack_220 = 0xd5;
      uStack_21c = 0x334;
      local_2a8 = &local_228;
      FUN_14736b076(&local_1e8);
      cVar10 = FUN_145db1694(10,0,0x47bb);
      uVar12 = local_1a0;
      if (cVar10 == '\0') {
        lVar30 = (longlong)(int)local_1a0;
        local_1a0 = local_1a0 + 1;
        if (local_19c < local_1a0) {
          FUN_14736f8c4(&local_1e8,uVar12);
        }
        ppuVar25 = local_1a8;
        if (local_1a8 == (ushort **)0x0) {
          ppuVar25 = &local_1e8;
        }
        *(undefined4 *)((longlong)ppuVar25 + lVar30 * 4) = 0x28d;
      }
      ppuStack_140 = &local_1e8;
      if (local_1a8 != (ushort **)0x0) {
        ppuStack_140 = local_1a8;
      }
      local_148 = CONCAT44(local_148._4_4_,local_1a0);
      (**(code **)(*local_268 + 0x88))();
      plVar19 = local_268;
      uVar11 = FUN_14736afa6();
      (**(code **)(*plVar19 + 0xf8))(plVar19,1,uVar11);
      plVar19 = local_268;
      lVar30 = DAT_14ca769f0;
      if (bVar34) {
        iVar13 = *piVar2;
        if (((iVar13 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar13 == 2)) {
          uVar26 = 0;
        }
        else if (iVar13 == 1) {
          DVar14 = FUN_140ad26c0();
          DVar15 = GetCurrentThreadId();
          uVar26 = (ulonglong)(DVar14 != DVar15);
        }
        else {
          uVar26 = 1;
        }
        (**(code **)(*plVar19 + 0xf8))(plVar19,2,3 < *(int *)(lVar30 + uVar26 * 4));
      }
      (**(code **)(*local_268 + 0x10))();
      if (local_1a8 != (ushort **)0x0) {
        FUN_1400020a8();
      }
    }
  }
  DAT_14c760da4 = *(int *)(param_1 + 0x220) + (uint)(*(int *)(param_1 + 0x220) == 0);
  plVar19 = *(longlong **)(param_1 + 8);
  if ((plVar19 != (longlong *)0x0) && (DAT_14ca76e40 == 2)) {
    (**(code **)(*plVar19 + 0x140))(plVar19,1);
  }
  if (local_240 != (longlong *)0x0) {
    (**(code **)(*local_240 + 0x10))();
  }
  if ((local_48 ^ (ulonglong)auStack_2d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143158fd0 FUN_143158fd0 body=32 status=ok
// SIG undefined FUN_143158fd0(void)

undefined8 FUN_143158fd0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (*(int *)*param_1 == 0x87a) {
    FUN_14315a398();
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



// FUNCTION 143158ff0 FUN_143158ff0 body=61 status=ok
// SIG undefined FUN_143158ff0(void)

void FUN_143158ff0(longlong param_1,longlong param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  lVar4 = *(longlong *)(param_1 + 0x530);
  if (lVar4 != param_2) {
    *(longlong *)(param_1 + 0x530) = param_2;
    if (param_2 != 0) {
      LOCK();
      *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
      UNLOCK();
    }
    if (lVar4 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar4 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        LOCK();
        puVar1 = (uint *)(lVar4 + 8);
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
        return;
      }
    }
  }
  return;
}



// FUNCTION 14315902e FUN_14315902e body=4969 status=ok
// SIG undefined FUN_14315902e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14315902e(longlong *param_1)

{
  uint uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined4 *puVar5;
  void *pvVar6;
  byte bVar7;
  bool bVar8;
  ushort uVar9;
  undefined8 uVar10;
  char cVar11;
  char cVar12;
  int iVar13;
  HRESULT HVar14;
  undefined4 uVar15;
  uint uVar16;
  longlong lVar17;
  longlong lVar18;
  undefined8 *puVar19;
  undefined4 uVar20;
  int iVar21;
  uint uVar22;
  int iVar23;
  ulonglong uVar24;
  uint uVar25;
  undefined2 *puVar26;
  int iVar27;
  uint uVar28;
  undefined1 auStack_1a8 [32];
  IID *local_188;
  int local_180;
  longlong local_178;
  undefined4 local_170;
  undefined4 local_168;
  undefined4 local_160;
  undefined1 local_158;
  undefined4 local_150;
  uint local_144;
  ulonglong local_140;
  int local_138;
  undefined4 uStack_134;
  int local_130;
  void *local_128;
  int local_120;
  undefined4 local_11c;
  void *local_118;
  int local_110;
  undefined4 local_10c;
  undefined4 local_104;
  undefined8 local_100;
  longlong *local_f8;
  undefined8 uStack_f0;
  void *local_e8;
  ulonglong uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  IID local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined4 local_8c;
  undefined4 uStack_88;
  undefined8 uStack_84;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  FUN_14080c2b4();
  if (param_1[1] != 0) goto LAB_143159072;
  (**(code **)(*param_1 + 8))(param_1,DAT_14ca8507a);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca769b0) && (FUN_144b3d300(&DAT_14ca769b0), DAT_14ca769b0 == -1)) {
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    cVar11 = FUN_14054d46e(&DAT_14c846b20,L"d3dcompat");
    cVar12 = '\x01';
    if (cVar11 == '\0') {
      if (DAT_14c846b14 == '\0') {
        FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                      L"Attempting to get the command line but it hasn\'t been initialized yet.");
      }
      cVar12 = FUN_14054d46e(&DAT_14c846b20,L"d3d12compat");
    }
    DAT_14ca769ac = cVar12;
    _Init_thread_footer(&DAT_14ca769b0);
  }
  if (DAT_14ca769ac == '\0') {
    puVar19 = (undefined8 *)param_1[1];
    plVar2 = (longlong *)param_1[2];
    plVar4 = param_1 + 2;
    if (plVar2 != (longlong *)0x0) {
      *plVar4 = 0;
      (**(code **)(*plVar2 + 0x10))();
    }
    (**(code **)*puVar19)(puVar19,&DAT_14a3461c8,plVar4);
    puVar19 = (undefined8 *)param_1[1];
    plVar3 = (longlong *)param_1[3];
    plVar2 = param_1 + 3;
    if (plVar3 != (longlong *)0x0) {
      *plVar2 = 0;
      (**(code **)(*plVar3 + 0x10))();
    }
    (**(code **)*puVar19)(puVar19,&DAT_14a3461d8,plVar2);
    if ((*plVar4 == 0) || (*plVar2 == 0)) {
      FUN_140033559(".\\Runtime/D3D12RHI/Private/D3D12Adapter.cpp",0x3b5,
                    L"Missing full support for Direct3D 12. Please update to the latest drivers.");
    }
    puVar19 = (undefined8 *)param_1[1];
    plVar4 = (longlong *)param_1[4];
    if (plVar4 != (longlong *)0x0) {
      param_1[4] = 0;
      (**(code **)(*plVar4 + 0x10))();
    }
    (**(code **)*puVar19)(puVar19,&DAT_14a349138,param_1 + 4);
    puVar19 = (undefined8 *)param_1[1];
    plVar4 = (longlong *)param_1[5];
    if (plVar4 != (longlong *)0x0) {
      param_1[5] = 0;
      (**(code **)(*plVar4 + 0x10))();
    }
    (**(code **)*puVar19)(puVar19,&DAT_14a346280,param_1 + 5);
    puVar19 = (undefined8 *)param_1[1];
    plVar2 = (longlong *)param_1[6];
    plVar4 = param_1 + 6;
    if (plVar2 != (longlong *)0x0) {
      *plVar4 = 0;
      (**(code **)(*plVar2 + 0x10))();
    }
    (**(code **)*puVar19)(puVar19,&DAT_14a349278,plVar4);
    puVar19 = (undefined8 *)param_1[1];
    plVar2 = (longlong *)param_1[7];
    if (plVar2 != (longlong *)0x0) {
      param_1[7] = 0;
      (**(code **)(*plVar2 + 0x10))();
    }
    (**(code **)*puVar19)(puVar19,&DAT_14a346290,param_1 + 7);
    puVar19 = (undefined8 *)param_1[1];
    plVar3 = (longlong *)param_1[8];
    plVar2 = param_1 + 8;
    if (plVar3 != (longlong *)0x0) {
      *plVar2 = 0;
      (**(code **)(*plVar3 + 0x10))();
    }
    (**(code **)*puVar19)(puVar19,&DAT_14a3462a0,plVar2);
    puVar19 = (undefined8 *)param_1[1];
    plVar3 = (longlong *)param_1[9];
    if (plVar3 != (longlong *)0x0) {
      param_1[9] = 0;
      (**(code **)(*plVar3 + 0x10))();
    }
    iVar13 = (**(code **)*puVar19)(puVar19,&DAT_14a3462b0,param_1 + 9);
    if (-1 < iVar13) {
      *(undefined1 *)((longlong)param_1 + 0xc6) = 1;
    }
    puVar19 = (undefined8 *)param_1[1];
    plVar3 = (longlong *)param_1[10];
    if (plVar3 != (longlong *)0x0) {
      param_1[10] = 0;
      (**(code **)(*plVar3 + 0x10))();
    }
    (**(code **)*puVar19)(puVar19,&DAT_14a3462c0,param_1 + 10);
    puVar19 = (undefined8 *)param_1[1];
    plVar3 = (longlong *)param_1[0xb];
    if (plVar3 != (longlong *)0x0) {
      param_1[0xb] = 0;
      (**(code **)(*plVar3 + 0x10))();
    }
    (**(code **)*puVar19)(puVar19,&DAT_14a3462d0,param_1 + 0xb);
    puVar19 = (undefined8 *)param_1[1];
    plVar3 = (longlong *)param_1[0xc];
    if (plVar3 != (longlong *)0x0) {
      param_1[0xc] = 0;
      (**(code **)(*plVar3 + 0x10))();
    }
    (**(code **)*puVar19)(puVar19,&DAT_14a3462e0,param_1 + 0xc);
    puVar19 = (undefined8 *)param_1[1];
    plVar3 = (longlong *)param_1[0xd];
    if (plVar3 != (longlong *)0x0) {
      param_1[0xd] = 0;
      (**(code **)(*plVar3 + 0x10))();
    }
    (**(code **)*puVar19)(puVar19,&DAT_14a3462f0,param_1 + 0xd);
    local_d8 = 0;
    uStack_d0 = 0;
    local_e8 = (void *)0x0;
    uStack_e0 = 0;
    local_c8 = 0;
    iVar13 = (**(code **)(*(longlong *)param_1[1] + 0x68))
                       ((longlong *)param_1[1],0x30,&local_e8,0x28);
    uVar15 = 1000000;
    if (-1 < iVar13) {
      uVar15 = (undefined4)local_c8;
    }
    uVar20 = 0x800;
    if (-1 < iVar13) {
      uVar20 = uStack_d0._4_4_;
    }
    *(undefined4 *)(param_1 + 0x19) = uVar15;
    *(undefined4 *)((longlong)param_1 + 0xcc) = uVar20;
    puVar19 = (undefined8 *)param_1[1];
    HVar14 = IIDFromString(L"{A7AA6116-9C8D-4BBA-9083-B4D816B71B78}",&local_b8);
    if (HVar14 < 0) {
LAB_143159409:
      bVar8 = true;
    }
    else {
      local_f8 = (longlong *)0x0;
      iVar13 = (**(code **)*puVar19)(puVar19,&local_b8,&local_f8);
      if (local_f8 != (longlong *)0x0) {
        (**(code **)(*local_f8 + 0x10))();
      }
      if (iVar13 < 0) goto LAB_143159409;
      bVar8 = false;
    }
    if ((0x65 < (int)param_1[0x42]) && (2 < *(int *)((longlong)param_1 + 0x214))) {
      DAT_14ca85065 = '\x02' - (DAT_14c760db4 == 3);
    }
    uStack_88 = 0;
    uStack_84 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    local_8c = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_b8.Data1 = 0;
    local_b8.Data2 = 0;
    local_b8.Data3 = 0;
    local_b8.Data4[0] = '\0';
    local_b8.Data4[1] = '\0';
    local_b8.Data4[2] = '\0';
    local_b8.Data4[3] = '\0';
    local_b8.Data4[4] = '\0';
    local_b8.Data4[5] = '\0';
    local_b8.Data4[6] = '\0';
    local_b8.Data4[7] = '\0';
    (**(code **)(*(longlong *)param_1[1] + 0x68))((longlong *)param_1[1],0,&local_b8,0x3c);
    DAT_14ca84f5b = local_a8._4_4_ != 0;
    DAT_14ca84f5c = uStack_a0._4_4_ != 0;
    if (3 < DAT_14c760db4) {
      local_b8.Data1 = 0;
      local_b8.Data2 = 0;
      local_b8.Data3 = 0;
      local_b8.Data4[0] = '\0';
      local_b8.Data4[1] = '\0';
      local_b8.Data4[2] = '\0';
      local_b8.Data4[3] = '\0';
      local_b8.Data4[4] = '\0';
      local_b8.Data4[5] = '\0';
      local_b8.Data4[6] = '\0';
      local_b8.Data4[7] = '\0';
      local_a8 = 0;
      (**(code **)(*(longlong *)param_1[1] + 0x68))((longlong *)param_1[1],8,&local_b8,0x18);
      DAT_14ca84f10 = local_b8.Data1 != 0;
      _DAT_14ca84f14 = CONCAT44(local_b8.Data4._0_4_,local_b8._4_4_);
    }
    local_a8 = local_a8 & 0xffffffff00000000;
    local_b8.Data1 = 0;
    local_b8.Data2 = 0;
    local_b8.Data3 = 0;
    local_b8.Data4[0] = '\0';
    local_b8.Data4[1] = '\0';
    local_b8.Data4[2] = '\0';
    local_b8.Data4[3] = '\0';
    local_b8.Data4[4] = '\0';
    local_b8.Data4[5] = '\0';
    local_b8.Data4[6] = '\0';
    local_b8.Data4[7] = '\0';
    (**(code **)(*(longlong *)param_1[1] + 0x68))((longlong *)param_1[1],0x15,&local_b8,0x14);
    DAT_14ca8507c = (int)local_a8 != 0;
    local_b8.Data4[0] = '\0';
    local_b8.Data4[1] = '\0';
    local_b8.Data4[2] = '\0';
    local_b8.Data4[3] = '\0';
    local_b8.Data1 = 0;
    local_b8.Data2 = 0;
    local_b8.Data3 = 0;
    (**(code **)(*(longlong *)param_1[1] + 0x68))((longlong *)param_1[1],0x17,&local_b8,0xc);
    DAT_14ca84f1c = local_b8.Data4._0_4_ != 0;
    local_110 = 0;
    local_118 = (void *)0x0;
    iVar13 = (**(code **)(*(longlong *)param_1[1] + 0x68))
                       ((longlong *)param_1[1],0x1b,&local_118,0xc);
    if (-1 < iVar13) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14ca767b8) && (FUN_144b3d300(&DAT_14ca767b8), DAT_14ca767b8 == -1))
      {
        if (DAT_14c8407a8 == (longlong *)0x0) {
          FUN_1414b00ea();
        }
        DAT_14ca767b0 =
             (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"renderdoc.IsInitialized",1);
        _Init_thread_footer(&DAT_14ca767b8);
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14ca767c0) && (FUN_144b3d300(&DAT_14ca767c0), DAT_14ca767c0 == -1))
      {
        if (DAT_14ca767b0 == (longlong *)0x0) {
          DAT_14ca767bc = false;
        }
        else {
          iVar13 = (**(code **)(*DAT_14ca767b0 + 0xb0))();
          DAT_14ca767bc = 0 < iVar13;
        }
        _Init_thread_footer(&DAT_14ca767c0);
      }
      uVar9 = DAT_14ca85550;
      if (local_110 < 10) {
LAB_143159612:
        if ((!bVar8 && local_110 == 0) && (DAT_14ca767bc == '\x01')) {
          if (DAT_14c846b14 == '\0') {
            FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                          L"Attempting to get the command line but it hasn\'t been initialized yet."
                         );
          }
          FUN_14054d46e(&DAT_14c846b20,L"noraytracing");
        }
      }
      else if (((1 < *(int *)((longlong)param_1 + 0x214)) && (*plVar4 != 0)) &&
              ((*(byte *)((longlong)&DAT_14ca814c8 + (ulonglong)DAT_14ca85550 * 0x3c + 2) & 0x40) !=
               0)) {
        if (DAT_14c846b14 == '\0') {
          FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                        L"Attempting to get the command line but it hasn\'t been initialized yet.");
        }
        cVar11 = FUN_14054d46e(&DAT_14c846b20,L"noraytracing");
        if (cVar11 != '\0') goto LAB_143159612;
        if (((10 < local_110) && (DAT_14ca85065 != '\0')) && (*plVar2 != 0 && uVar9 == 0x31)) {
          DAT_14ca84ef4 =
               (undefined1)(((&DAT_14ca814c8)[(ulonglong)DAT_14ca85550 * 0xf] & 0x400000) >> 0x16);
          if (((&DAT_14ca814c8)[(ulonglong)DAT_14ca85550 * 0xf] & 0x400000) == 0) {
            _DAT_14ca84ef5 = 0x100;
          }
          else {
            uVar28 = *(uint *)((longlong)&DAT_14ca814d0 + (ulonglong)DAT_14ca85550 * 0x3c + 4);
            _DAT_14ca84ef5 = CONCAT11(1,(byte)(uVar28 >> 0x19) & 1);
            if ((uVar28 >> 0x18 & 1) != 0) {
              DAT_14ca84efa = 3 < DAT_14c760db4;
              goto LAB_143159645;
            }
          }
          DAT_14ca84efa = 0;
        }
      }
    }
LAB_143159645:
    DAT_14ca84f00 = 0x100;
    DAT_14ca84f04 = 0x100;
    uRam000000014ca84f08 = 0x40;
    DAT_14ca84f0c = 0x40;
    local_128 = (void *)0x0;
    (**(code **)(*(longlong *)param_1[1] + 0x68))((longlong *)param_1[1],0x20,&local_128,8);
    local_a8 = 0;
    local_b8.Data1 = 0;
    local_b8.Data2 = 0;
    local_b8.Data3 = 0;
    local_b8.Data4[0] = '\0';
    local_b8.Data4[1] = '\0';
    local_b8.Data4[2] = '\0';
    local_b8.Data4[3] = '\0';
    local_b8.Data4[4] = '\0';
    local_b8.Data4[5] = '\0';
    local_b8.Data4[6] = '\0';
    local_b8.Data4[7] = '\0';
    (**(code **)(*(longlong *)param_1[1] + 0x68))((longlong *)param_1[1],0x25,&local_b8,0x18);
    local_138 = 0;
    (**(code **)(*(longlong *)param_1[1] + 0x68))((longlong *)param_1[1],0x28,&local_138,4);
    if (3 < DAT_14c760db4) {
      DAT_14ca84f64 = 9 < (int)local_128;
      DAT_14ca84f63 = 9 < (int)local_128;
    }
    if ((local_b8.Data4._0_4_ != 0) && (DAT_14ca84e0a = 1, local_138 != 0)) {
      DAT_14ca84e0b = 1;
    }
    local_f8 = (longlong *)0x0;
    uStack_f0 = 0;
    (**(code **)(*(longlong *)param_1[1] + 0x68))((longlong *)param_1[1],0x35,&local_f8,0x10);
    if ((int)local_f8 != 0) {
      DAT_14ca84f65 = 1;
    }
  }
  if (DAT_14c846b14 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                  L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  cVar11 = FUN_14054d46e(&DAT_14c846b20,L"DisableAsyncCompute");
  if (cVar11 != '\0') {
    DAT_14ca84e23 = 0;
    goto LAB_143159791;
  }
  if (DAT_14c846b14 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                  L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  cVar11 = FUN_14054d46e(&DAT_14c846b20,L"ForceAsyncCompute");
  if (cVar11 == '\0') {
    bVar7 = DAT_14ca84e23;
    if ((DAT_14ca84e23 == 0) && (DAT_14c760b24 != 0)) {
      if (DAT_14ca84f1f == '\x01') {
        if ((DAT_14ca84df4 != 0x1002) && ((DAT_14ca84df4 != 0x8086 || (DAT_14c760db4 < 4)))) {
          local_b8.Data1 = 0;
          local_b8.Data2 = 0;
          local_b8.Data3 = 0;
          local_b8.Data4[0] = '\0';
          local_b8.Data4[1] = '\0';
          local_b8.Data4[2] = '\0';
          local_b8.Data4[3] = '\0';
          local_b8.Data4[4] = '\0';
          local_b8.Data4[5] = '\0';
          local_b8.Data4[6] = '\0';
          local_b8.Data4[7] = '\0';
          local_a8 = local_a8 & 0xffffffff00000000;
          iVar13 = (**(code **)(*(longlong *)param_1[1] + 0x68))
                             ((longlong *)param_1[1],0x1e,&local_b8,0x14);
          if ((iVar13 != 0) || ((DAT_14ca84df4 != 0x10de || (local_b8._4_4_ == 0)))) {
            bVar7 = DAT_14ca84e23 & 1;
            goto joined_r0x00014315a0f3;
          }
        }
        goto LAB_143159783;
      }
    }
    else {
joined_r0x00014315a0f3:
      if (bVar7 != 0) goto LAB_14315978a;
    }
  }
  else {
LAB_143159783:
    DAT_14ca84e23 = 1;
LAB_14315978a:
    DAT_14ca84e24 = 1;
  }
LAB_143159791:
  local_100 = 0;
  iVar13 = (**(code **)(*(longlong *)param_1[1] + 0x68))((longlong *)param_1[1],0x12,&local_100,8);
  if (iVar13 < 0) {
    local_100 = 0;
    local_100._0_4_ = 0;
  }
  else {
  }
  *(bool *)((longlong)param_1 + 0xc4) = (int)local_100 != 0;
  local_104 = 2;
  iVar13 = (**(code **)(*(longlong *)param_1[1] + 0x68))((longlong *)param_1[1],0xc,&local_104,4);
  if (iVar13 < 0) {
    local_104 = 1;
  }
  *(undefined4 *)(param_1 + 0x18) = local_104;
  local_b8.Data1 = 0;
  local_b8.Data2 = 0;
  local_b8.Data3 = 0;
  local_b8.Data4[0] = '\0';
  local_b8.Data4[1] = '\0';
  local_b8.Data4[2] = '\0';
  local_b8.Data4[3] = '\0';
  local_b8.Data4[4] = '\0';
  local_b8.Data4[5] = '\0';
  local_b8.Data4[6] = '\0';
  local_b8.Data4[7] = '\0';
  local_a8 = local_a8 & 0xffffffff00000000;
  (**(code **)(*(longlong *)param_1[1] + 0x68))((longlong *)param_1[1],0x15,&local_b8,0x14);
  *(undefined1 *)((longlong)param_1 + 0xc5) = 0;
  if (((0xbfff < *(int *)((longlong)param_1 + 0x20c)) && (0x65 < (int)param_1[0x42])) &&
     (2 < *(int *)((longlong)param_1 + 0x214))) {
    uVar15 = FUN_141434525(DAT_14ca85550,L"BindlessResources",&DAT_14ca83b38);
    *(undefined4 *)(param_1 + 0x104) = uVar15;
    iVar13 = FUN_141434525(DAT_14ca85550,L"BindlessSamplers",&DAT_14ca83b58);
    *(int *)((longlong)param_1 + 0x824) = iVar13;
    uVar15 = DAT_14c760b68;
    if ((int)param_1[0x104] != 0) {
      lVar17 = FUN_14001cc68(0x48,0x10);
      FUN_1414b9b72(lVar17,uVar15);
      *(undefined1 *)(lVar17 + 0x40) = 0;
      param_1[0x10a] = lVar17;
      iVar13 = *(int *)((longlong)param_1 + 0x824);
    }
    iVar27 = 0;
    if (iVar13 != 0) {
      uVar28 = 0x800;
      if (DAT_14c760b70 < 0x800) {
        uVar28 = DAT_14c760b70;
      }
      lVar17 = FUN_14001cc68(0x48,0x10);
      FUN_1414b9b72(lVar17,uVar28);
      *(undefined1 *)(lVar17 + 0x40) = 1;
      param_1[0x10b] = lVar17;
      iVar27 = *(int *)((longlong)param_1 + 0x824);
    }
    DAT_14ca84f62 = iVar27 == 1 || (int)param_1[0x104] == 1;
  }
  iVar13 = DAT_14c760da4;
  uVar28 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  *(uint *)((longlong)param_1 + 0x65c) = uVar28;
  if (iVar13 != 0) {
    uVar16 = 0;
    if (uVar28 != 0) {
      for (; (uVar28 >> uVar16 & 1) == 0; uVar16 = uVar16 + 1) {
      }
    }
    do {
      lVar17 = FUN_14001cc68(0x1540,0x40);
      uVar25 = 1 << ((byte)uVar16 & 0x1f);
      FUN_145e24cda(lVar17,uVar25,param_1);
      param_1[(ulonglong)uVar16 + 0xfa] = lVar17;
      FUN_14315f46a(lVar17);
      uVar24 = (ulonglong)uVar16;
      uVar1 = *(uint *)(*(longlong *)(param_1[uVar24 + 0xfa] + 0xac0) + 0x2e0);
      uVar16 = 0x20;
      uVar22 = 0x20;
      if ((uVar1 != 0) && (uVar22 = 0, uVar1 != 0)) {
        for (; (uVar1 >> uVar22 & 1) == 0; uVar22 = uVar22 + 1) {
        }
      }
      param_1[(ulonglong)uVar22 + 0xcd] = *(longlong *)(param_1[uVar24 + 0xfa] + 0xac0);
      uVar28 = uVar28 & ~uVar25;
      if ((uVar28 != 0) && (uVar16 = 0, uVar28 != 0)) {
        for (; (uVar28 >> uVar16 & 1) == 0; uVar16 = uVar16 + 1) {
        }
      }
    } while (uVar28 != 0);
  }
  lVar18 = FUN_14001cc68(0x70,0x10);
  FUN_145dc8a0a(lVar18,param_1);
  lVar17 = param_1[0xa7];
  param_1[0xa7] = lVar18;
  FUN_1456f47d2(lVar17);
  FUN_1456f47d2(0);
  FUN_140056680(&local_f8,L"Upload Buffer Allocator");
  if (DAT_14c760da4 != 0) {
    uVar16 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
    uVar28 = 0;
    if (uVar16 != 0) {
      for (; (uVar16 >> uVar28 & 1) == 0; uVar28 = uVar28 + 1) {
      }
    }
    do {
      local_144 = uVar16;
      puVar19 = (undefined8 *)FUN_14001cc68(0x288,0x10);
      uVar10 = uStack_f0;
      plVar4 = local_f8;
      local_140 = (ulonglong)uVar28;
      puVar5 = (undefined4 *)param_1[local_140 + 0xfa];
      *puVar19 = param_1;
      puVar19[1] = puVar5;
      bVar7 = (byte)DAT_14c760da4 & 0x1f;
      *(undefined4 *)(puVar19 + 2) = *puVar5;
      *(int *)((longlong)puVar19 + 0x14) = ~(-1 << bVar7);
      lVar17 = (longlong)(int)uStack_f0;
      local_b8.Data1 = 0;
      local_b8.Data2 = 0;
      local_b8.Data3 = 0;
      local_b8.Data4[0] = (undefined1)uStack_f0;
      local_b8.Data4[1] = uStack_f0._1_1_;
      local_b8.Data4[2] = uStack_f0._2_1_;
      local_b8.Data4[3] = uStack_f0._3_1_;
      iVar13 = (int)uStack_f0 + (uint)(lVar17 == 0);
      uStack_f0 = uVar10;
      FUN_1446dd670(&local_b8,iVar13 + 0x16,0);
      if (lVar17 != 0) {
        memcpy((void *)CONCAT44(local_b8._4_4_,local_b8.Data1),plVar4,lVar17 * 2);
      }
      FUN_1400020e8(&local_b8,L" (UploadHeapAllocator)",0x16);
      if (CONCAT44(local_b8._4_4_,local_b8.Data1) != 0) {
        FUN_1400020a8();
      }
      *(undefined4 *)(puVar19 + 3) = 0xffffffff;
      uVar20 = DAT_14c760b54;
      uVar15 = DAT_14c760b50;
      FUN_140056680(&local_b8,L"Small Block Multi Buddy Allocator");
      local_e8 = (void *)0xc000000002;
      uStack_e0 = 0xac300000000;
      local_180 = uVar15;
      local_188 = &local_b8;
      FUN_1417890ca(puVar19 + 4,puVar5,*(undefined4 *)((longlong)puVar19 + 0x14),&local_e8);
      puVar19[0x13] = 0x20000000001;
      *(undefined4 *)(puVar19 + 0x14) = uVar20;
      puVar19[0x15] = 0;
      puVar19[0x16] = 0;
      if (CONCAT44(local_b8._4_4_,local_b8.Data1) != 0) {
        FUN_1400020a8();
      }
      InitializeCriticalSection((LPCRITICAL_SECTION)(puVar19 + 0x18));
      SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(puVar19 + 0x18),4000);
      uVar20 = DAT_14c760b58;
      uVar15 = *(undefined4 *)(puVar19 + 3);
      lVar17 = (longlong)DAT_14c760b5c;
      FUN_140056680(&local_b8,L"Big Block Pool Allocator");
      local_e8 = (void *)0xc000000002;
      uStack_e0 = 0xac300000000;
      local_160 = 1;
      local_168 = uVar20;
      local_180 = 1;
      local_158 = 0;
      local_170 = 0x200;
      local_188 = &local_b8;
      local_178 = lVar17;
      local_150 = uVar15;
      FUN_14156b70a(puVar19 + 0x1d,puVar5,*(undefined4 *)((longlong)puVar19 + 0x14),&local_e8);
      if (CONCAT44(local_b8._4_4_,local_b8.Data1) != 0) {
        FUN_1400020a8();
      }
      iVar13 = DAT_14c760b60;
      uVar15 = DAT_14c760b54;
      iVar27 = DAT_14c760b60 << 6;
      FUN_140056680(&local_b8,L"Fast Constant Page Multi Buddy Allocator");
      local_e8 = (void *)0xc000000002;
      uStack_e0 = 0xac300000000;
      local_188 = &local_b8;
      local_180 = iVar27;
      FUN_1417890ca(puVar19 + 0x3d,puVar5,*(undefined4 *)((longlong)puVar19 + 0x14),&local_e8);
      *(undefined4 *)(puVar19 + 0x4c) = 1;
      *(int *)((longlong)puVar19 + 0x264) = iVar13;
      *(undefined4 *)(puVar19 + 0x4d) = uVar15;
      puVar19[0x4e] = 0;
      puVar19[0x4f] = 0;
      if (CONCAT44(local_b8._4_4_,local_b8.Data1) != 0) {
        FUN_1400020a8();
      }
      param_1[local_140 + 0x9c] = (longlong)puVar19;
      uVar16 = local_144 & ~(1 << ((uint)local_140 & 0x1f));
      if (uVar16 == 0) {
        uVar28 = 0x20;
      }
      else {
        uVar28 = 0;
        if (uVar16 != 0) {
          for (; (uVar16 >> uVar28 & 1) == 0; uVar28 = uVar28 + 1) {
          }
        }
      }
    } while (uVar16 != 0);
  }
  local_180 = *(int *)((longlong)param_1 + 0x1e4);
  local_188 = (IID *)CONCAT44(local_188._4_4_,(int)param_1[0x3c]);
  FUN_140002266(&local_b8,L"V%d_D%d_S%d_R%d.ushaderprecache",(int)param_1[0x3b],
                *(undefined4 *)((longlong)param_1 + 0x1dc));
  if (local_b8.Data4._0_4_ == 0) {
    puVar26 = &DAT_149dfb77a;
  }
  else {
    puVar26 = (undefined2 *)CONCAT44(local_b8._4_4_,local_b8.Data1);
  }
  FUN_140002266(&local_118,L"D3DGraphics_%s",puVar26);
  puVar19 = (undefined8 *)FUN_14047ac8c();
  iVar13 = local_110 + -1;
  if (local_110 == 0) {
    iVar13 = 0;
  }
  uVar28 = *(uint *)(puVar19 + 1);
  iVar27 = iVar13 + 1 + (uint)((longlong)(int)uVar28 == 0);
  local_e8 = (void *)0x0;
  pvVar6 = (void *)*puVar19;
  uStack_e0 = CONCAT44(uStack_e0._4_4_,uVar28);
  if (iVar27 == 0 && uVar28 == 0) {
    uStack_e0 = (ulonglong)uVar28;
  }
  else {
    iVar23 = iVar27 + uVar28;
    if (iVar27 < 0) goto LAB_14315a2b3;
    FUN_1446dd670(&local_e8,iVar23,0);
    if (uVar28 != 0) {
      memcpy(local_e8,pvVar6,(longlong)(int)uVar28 * 2);
    }
  }
  FUN_1401aebe8(&local_e8,local_118,iVar13);
  if (local_118 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_b8.Data4._0_4_ == 0) {
    puVar26 = &DAT_149dfb77a;
  }
  else {
    puVar26 = (undefined2 *)CONCAT44(local_b8._4_4_,local_b8.Data1);
  }
  FUN_140002266(&local_128,L"D3DCompute_%s",puVar26);
  puVar19 = (undefined8 *)FUN_14047ac8c();
  iVar13 = local_120 + -1;
  if (local_120 == 0) {
    iVar13 = 0;
  }
  iVar27 = *(int *)(puVar19 + 1);
  iVar21 = iVar13 + 1 + (uint)((longlong)iVar27 == 0);
  local_118 = (void *)0x0;
  pvVar6 = (void *)*puVar19;
  local_110 = iVar27;
  if (iVar21 == 0 && iVar27 == 0) {
    local_10c = 0;
  }
  else {
    iVar23 = iVar21 + iVar27;
    if (iVar21 < 0) goto LAB_14315a2b3;
    FUN_1446dd670(&local_118,iVar23,0);
    if (iVar27 != 0) {
      memcpy(local_118,pvVar6,(longlong)iVar27 * 2);
    }
  }
  FUN_1401aebe8(&local_118,local_128,iVar13);
  if (local_128 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_b8.Data4._0_4_ == 0) {
    puVar26 = &DAT_149dfb77a;
  }
  else {
    puVar26 = (undefined2 *)CONCAT44(local_b8._4_4_,local_b8.Data1);
  }
  FUN_140002266(&local_138,L"D3DDriverByteCodeBlob_%s",puVar26);
  puVar19 = (undefined8 *)FUN_14047ac8c();
  iVar13 = local_130 + -1;
  if (local_130 == 0) {
    iVar13 = 0;
  }
  iVar27 = *(int *)(puVar19 + 1);
  iVar21 = iVar13 + 1 + (uint)((longlong)iVar27 == 0);
  local_128 = (void *)0x0;
  pvVar6 = (void *)*puVar19;
  local_120 = iVar27;
  if (iVar21 == 0 && iVar27 == 0) {
    local_11c = 0;
  }
  else {
    iVar23 = iVar21 + iVar27;
    if (iVar21 < 0) {
LAB_14315a2b3:
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar23);
    }
    FUN_1446dd670(&local_128,iVar23,0);
    if (iVar27 != 0) {
      memcpy(local_128,pvVar6,(longlong)iVar27 * 2);
    }
  }
  FUN_1401aebe8(&local_128,CONCAT44(uStack_134,local_138),iVar13);
  if (CONCAT44(uStack_134,local_138) != 0) {
    FUN_1400020a8();
  }
  FUN_1431853e4(param_1 + 0x57,&local_e8,&local_118,&local_128);
  FUN_143184d74(param_1 + 0x57);
  (**(code **)(*param_1 + 0x18))(param_1);
  if (local_128 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_118 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_e8 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (CONCAT44(local_b8._4_4_,local_b8.Data1) != 0) {
    FUN_1400020a8();
  }
  if (local_f8 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_143159072:
  if ((local_70 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14315a398 FUN_14315a398 body=496 status=ok
// SIG undefined FUN_14315a398(void)

void FUN_14315a398(void)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  bool bVar7;
  undefined1 auStack_68 [32];
  ulonglong local_48;
  longlong *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = (longlong *)0x0;
  iVar2 = Ordinal_102(&DAT_14a345c68);
  if (-1 < iVar2) {
    local_40 = (longlong *)0x0;
    puVar1 = *(undefined8 **)(**(longlong **)(DAT_14ca77418 + 0x1b0) + 8);
    iVar2 = (**(code **)*puVar1)(puVar1,&DAT_14a346128);
    if (-1 < iVar2) {
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x110) < DAT_14ca769b8) {
        FUN_144b3d300(&DAT_14ca769b8);
        if (DAT_14ca769b8 == -1) {
          if (DAT_14c846b14 == '\0') {
            FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                          L"Attempting to get the command line but it hasn\'t been initialized yet."
                         );
          }
          DAT_14ca769b4 = FUN_14054d46e(&DAT_14c846b20,L"d3dbreakonwarning");
          _Init_thread_footer(&DAT_14ca769b8);
        }
      }
      uVar3 = (**(code **)(*local_40 + 0x48))();
      if ((int)uVar3 < 1) {
        bVar7 = true;
        lVar4 = 0;
      }
      else {
        uVar5 = 0;
        uVar6 = 0;
        lVar4 = 0;
        do {
          local_48 = 0;
          (**(code **)(*local_40 + 0x28))(local_40,uVar5,0,&local_48);
          if (uVar6 < local_48) {
            if (lVar4 != 0) {
              FUN_1400020a8(lVar4);
            }
            lVar4 = FUN_14001cc68(local_48,0);
            uVar6 = local_48;
          }
          if (lVar4 != 0) {
            (**(code **)(*local_40 + 0x28))(local_40,uVar5,lVar4,&local_48);
          }
          uVar5 = uVar5 + 1;
        } while ((uVar3 & 0x7fffffff) != uVar5);
        bVar7 = uVar6 == 0;
      }
      (**(code **)(*local_40 + 0x20))();
      if (!bVar7) {
        FUN_1400020a8(lVar4);
      }
    }
    if (local_40 != (longlong *)0x0) {
      (**(code **)(*local_40 + 0x10))();
    }
  }
  if (local_38 != (longlong *)0x0) {
    (**(code **)(*local_38 + 0x10))();
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14315a589 FUN_14315a589 body=69 status=ok
// SIG undefined FUN_14315a589(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14315a589(void)

{
  _DAT_14ca767c8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014315a5cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca767d0,1);
  return;
}



// FUNCTION 14315a5ce FUN_14315a5ce body=69 status=ok
// SIG undefined FUN_14315a5ce(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14315a5ce(void)

{
  _DAT_14ca767d8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014315a610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca767e0,1);
  return;
}



// FUNCTION 14315a613 FUN_14315a613 body=69 status=ok
// SIG undefined FUN_14315a613(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14315a613(void)

{
  _DAT_14ca767e8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014315a655. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca767f0,1);
  return;
}



// FUNCTION 14315a658 FUN_14315a658 body=69 status=ok
// SIG undefined FUN_14315a658(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14315a658(void)

{
  _DAT_14ca767f8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014315a69a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca76800,1);
  return;
}



// FUNCTION 14315a69d FUN_14315a69d body=69 status=ok
// SIG undefined FUN_14315a69d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14315a69d(void)

{
  _DAT_14ca76808 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014315a6df. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca76810,1);
  return;
}



// FUNCTION 14315a6e2 FUN_14315a6e2 body=69 status=ok
// SIG undefined FUN_14315a6e2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14315a6e2(void)

{
  _DAT_14ca76818 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014315a724. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca76820,1);
  return;
}



// FUNCTION 14315a727 FUN_14315a727 body=69 status=ok
// SIG undefined FUN_14315a727(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14315a727(void)

{
  _DAT_14ca76828 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014315a769. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca76830,1);
  return;
}



// FUNCTION 14315a76c FUN_14315a76c body=69 status=ok
// SIG undefined FUN_14315a76c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14315a76c(void)

{
  _DAT_14ca76838 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014315a7ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca76840,1);
  return;
}



// FUNCTION 14315a7b1 FUN_14315a7b1 body=69 status=ok
// SIG undefined FUN_14315a7b1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14315a7b1(void)

{
  _DAT_14ca76848 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014315a7f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca76850,1);
  return;
}



// FUNCTION 14315a7f6 FUN_14315a7f6 body=69 status=ok
// SIG undefined FUN_14315a7f6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14315a7f6(void)

{
  _DAT_14ca76860 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014315a838. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca76868,1);
  return;
}



// FUNCTION 14315a83b FUN_14315a83b body=69 status=ok
// SIG undefined FUN_14315a83b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14315a83b(void)

{
  _DAT_14ca76878 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014315a87d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca76880,1);
  return;
}



// FUNCTION 14315a880 FUN_14315a880 body=69 status=ok
// SIG undefined FUN_14315a880(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14315a880(void)

{
  _DAT_14ca76888 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014315a8c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca76890,1);
  return;
}



// FUNCTION 14315a8c5 FUN_14315a8c5 body=69 status=ok
// SIG undefined FUN_14315a8c5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14315a8c5(void)

{
  _DAT_14ca76898 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014315a907. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca768a0,1);
  return;
}



// FUNCTION 14315a90a FUN_14315a90a body=69 status=ok
// SIG undefined FUN_14315a90a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14315a90a(void)

{
  _DAT_14ca768a8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014315a94c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca768b0,1);
  return;
}



// FUNCTION 14315a94f FUN_14315a94f body=69 status=ok
// SIG undefined FUN_14315a94f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14315a94f(void)

{
  _DAT_14ca768b8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014315a991. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca768c0,1);
  return;
}



// FUNCTION 14315a994 FUN_14315a994 body=69 status=ok
// SIG undefined FUN_14315a994(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14315a994(void)

{
  _DAT_14ca768c8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014315a9d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca768d0,1);
  return;
}



// FUNCTION 14315a9d9 FUN_14315a9d9 body=69 status=ok
// SIG undefined FUN_14315a9d9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14315a9d9(void)

{
  _DAT_14ca768d8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014315aa1b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca768e0,1);
  return;
}



// FUNCTION 14315aa1e FUN_14315aa1e body=69 status=ok
// SIG undefined FUN_14315aa1e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14315aa1e(void)

{
  _DAT_14ca768e8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014315aa60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca768f0,1);
  return;
}



// FUNCTION 14315aa64 FUN_14315aa64 body=274 status=ok
// SIG undefined FUN_14315aa64(void)

void FUN_14315aa64(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 auStack_88 [44];
  uint local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  uVar4 = DAT_14c760b3c;
  if (0 < (int)DAT_14c760b3c && 0 < DAT_14c760b38) {
    local_5c = 0;
    if ((longlong)(int)param_1[3] != 0) {
      plVar6 = (longlong *)param_1[2];
      plVar1 = plVar6 + (int)param_1[3];
      do {
        if (*plVar6 != 0) {
          local_58 = *(undefined4 *)param_2;
          uStack_54 = *(undefined4 *)((longlong)param_2 + 4);
          uStack_50 = *(undefined4 *)(param_2 + 1);
          uStack_4c = *(undefined4 *)((longlong)param_2 + 0xc);
          FUN_142b7826e(*plVar6,&local_58,uVar4,&local_5c);
          if (uVar4 <= local_5c) break;
        }
        plVar6 = plVar6 + 1;
      } while (plVar6 != plVar1);
    }
  }
  uVar5 = (**(code **)(*(longlong *)*param_2 + 0x278))
                    ((longlong *)*param_2,*(undefined4 *)(*param_1 + 8));
  lVar3 = param_1[3];
  if ((longlong)(int)lVar3 != 0) {
    lVar2 = param_1[2];
    lVar7 = 0;
    do {
      if (*(longlong *)(lVar2 + lVar7) != 0) {
        FUN_14492a62e(*(longlong *)(lVar2 + lVar7),uVar5);
      }
      lVar7 = lVar7 + 8;
    } while ((longlong)(int)lVar3 * 8 != lVar7);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14315ab78 FUN_14315ab78 body=199 status=ok
// SIG undefined FUN_14315ab78(void)

void FUN_14315ab78(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  iVar1 = DAT_14c760b4c;
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (0 < DAT_14c760b4c && 0 < DAT_14c760b48) {
    local_4c = 0;
    lVar3 = 0;
    do {
      local_48 = *(undefined4 *)param_2;
      uStack_44 = *(undefined4 *)((longlong)param_2 + 4);
      uStack_40 = *(undefined4 *)(param_2 + 1);
      uStack_3c = *(undefined4 *)((longlong)param_2 + 0xc);
      FUN_142b7826e(param_1[lVar3 + 2],&local_48,iVar1,&local_4c);
      lVar3 = lVar3 + 1;
    } while (lVar3 != 4);
  }
  uVar2 = (**(code **)(*(longlong *)*param_2 + 0x278))
                    ((longlong *)*param_2,*(undefined4 *)(*param_1 + 8));
  lVar3 = 0;
  do {
    FUN_14492a62e(param_1[lVar3 + 2],uVar2);
    lVar3 = lVar3 + 1;
  } while (lVar3 != 4);
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14315ac40 FUN_14315ac40 body=271 status=ok
// SIG undefined FUN_14315ac40(void)

void FUN_14315ac40(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  lVar6 = (longlong)*(int *)(*(longlong *)(*(longlong *)(*param_1 + 0x10) + 0x538) + 0x58) + 1;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x11));
  iVar2 = (int)param_1[0xd];
  uVar5 = (ulonglong)iVar2;
  if (((longlong)uVar5 < 1) ||
     (uVar3 = (ulonglong)(iVar2 - 1),
     *(longlong *)(param_1[0xc] + (ulonglong)(iVar2 - 1) * 8) != lVar6)) {
    *(uint *)(param_1 + 0xd) = iVar2 + 1U;
    if (*(uint *)((longlong)param_1 + 0x6c) < iVar2 + 1U) {
      FUN_14479d316(param_1 + 0xc,iVar2);
    }
    *(longlong *)(param_1[0xc] + uVar5 * 8) = lVar6;
    iVar2 = (int)param_1[0xf];
    *(uint *)(param_1 + 0xf) = iVar2 + 1U;
    if (*(uint *)((longlong)param_1 + 0x7c) < iVar2 + 1U) {
      FUN_14736fb42(param_1 + 0xe,iVar2);
    }
    puVar1 = (undefined8 *)(param_1[0xe] + (longlong)iVar2 * 0x10);
    *puVar1 = 0;
    puVar1[1] = 0;
    uVar3 = uVar5;
  }
  lVar6 = param_1[0xe];
  lVar4 = uVar3 * 0x10;
  iVar2 = *(int *)(lVar6 + 8 + lVar4);
  *(uint *)(lVar6 + 8 + lVar4) = iVar2 + 1U;
  if (*(uint *)(lVar6 + 0xc + lVar4) < iVar2 + 1U) {
    FUN_14736fbc8((longlong *)(lVar6 + lVar4),iVar2);
  }
  lVar6 = *(longlong *)(lVar6 + lVar4);
  lVar4 = (longlong)iVar2 * 0x10;
  *(undefined8 *)(lVar6 + lVar4) = param_2;
  *(undefined4 *)(lVar6 + 8 + lVar4) = param_3;
  *(undefined4 *)(lVar6 + 0xc + lVar4) = param_4;
                    /* WARNING: Could not recover jumptable at 0x00014315ad2e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x11));
  return;
}



// FUNCTION 14315ad4f FUN_14315ad4f body=69 status=ok
// SIG undefined FUN_14315ad4f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14315ad4f(void)

{
  _DAT_14ca768f8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014315ad91. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca76900,1);
  return;
}



// FUNCTION 14315ad94 FUN_14315ad94 body=69 status=ok
// SIG undefined FUN_14315ad94(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14315ad94(void)

{
  _DAT_14ca76908 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014315add6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca76910,1);
  return;
}



// FUNCTION 14315add9 FUN_14315add9 body=69 status=ok
// SIG undefined FUN_14315add9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14315add9(void)

{
  _DAT_14ca76918 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014315ae1b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca76920,1);
  return;
}



// FUNCTION 14315ae1e FUN_14315ae1e body=429 status=ok
// SIG undefined FUN_14315ae1e(void)

undefined4 FUN_14315ae1e(longlong *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  uint uVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  wchar_t *pwVar11;
  undefined1 auStack_88 [32];
  int local_68;
  undefined1 local_60;
  undefined8 local_50;
  longlong local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar4 = param_1[0x3c];
  plVar7 = (longlong *)FUN_14736b58a(param_1 + 0x3b);
  lVar8 = (longlong)(int)param_1[0x3e];
  if (lVar8 == 0) {
    cVar5 = *(char *)(param_1[2] + 0x3c);
    pwVar11 = L"BindlessSamplers";
    if (cVar5 == '\0') {
      pwVar11 = L"BindlessResources";
    }
    local_60 = 0;
    local_68 = CONCAT31(local_68._1_3_,1);
    puVar9 = (undefined8 *)
             FUN_1407d7812(*(undefined8 *)(*param_1 + 0x658),pwVar11,cVar5,
                           *(undefined4 *)(param_1[2] + 0x34));
    puVar10 = (undefined8 *)*plVar7;
    if (puVar10 == puVar9) goto LAB_14315af4b;
    *plVar7 = (longlong)puVar9;
    if (puVar9 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puVar9 + 1) = *(int *)(puVar9 + 1) + 1;
      UNLOCK();
    }
  }
  else {
    lVar3 = param_1[0x3d];
    local_50 = *(undefined8 **)(lVar3 + -0x28 + lVar8 * 0x28);
    *(undefined8 *)(lVar3 + -0x28 + lVar8 * 0x28) = 0;
    local_48 = *(longlong *)(lVar3 + -0x20 + lVar8 * 0x28);
    *(undefined8 *)(lVar3 + -0x20 + lVar8 * 0x28) = 0;
    local_40 = *(undefined4 *)(lVar3 + -0x18 + lVar8 * 0x28);
    local_3c = *(undefined4 *)(lVar3 + -0x14 + lVar8 * 0x28);
    *(undefined8 *)(lVar3 + -0x18 + lVar8 * 0x28) = 0;
    puVar2 = (undefined4 *)(lVar3 + -0x10 + lVar8 * 0x28);
    local_38 = *puVar2;
    uStack_34 = puVar2[1];
    uStack_30 = puVar2[2];
    uStack_2c = puVar2[3];
    FUN_14736fd70(param_1 + 0x3d,(int)param_1[0x3e] + -1);
    FUN_14736b5ca(plVar7,&local_50);
    puVar10 = local_50;
    if (local_48 != 0) {
      FUN_1400020a8();
      puVar10 = local_50;
    }
  }
  if (puVar10 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar10 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar10)(puVar10,1);
    }
  }
LAB_14315af4b:
  lVar8 = *plVar7;
  local_50 = (undefined8 *)0x0;
  cVar5 = FUN_147124fe8(*(undefined8 *)(*(longlong *)(*param_1 + 0x6a8) + 0x38));
  if (cVar5 != '\0') {
    local_68 = (local_50._4_4_ - (int)local_50) + 1;
    FUN_14315f0af(*param_1,lVar8,param_1[2]);
  }
  *(undefined1 *)(plVar7 + 3) = 1;
  uVar6 = *(int *)((longlong)param_1 + 0x34) + 1;
  *(uint *)((longlong)param_1 + 0x34) = uVar6;
  if (uVar6 <= *(uint *)(param_1 + 7)) {
    uVar6 = *(uint *)(param_1 + 7);
  }
  *(uint *)(param_1 + 7) = uVar6;
  if ((local_28 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return (int)lVar4;
}



// FUNCTION 14315afcc FUN_14315afcc body=334 status=ok
// SIG undefined FUN_14315afcc(void)

void FUN_14315afcc(longlong *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar5 = param_1[0x3b];
  lVar3 = param_1[0x3c];
  uVar4 = 0;
  if ((longlong)(int)lVar3 != 0) {
    lVar6 = 0;
    do {
      if (*(char *)(lVar5 + 0x18 + lVar6) == '\x01') {
        FUN_147370bb0(*param_1 + 0x658,*(undefined8 *)(lVar5 + lVar6));
      }
      else {
        puVar2 = *(undefined8 **)(lVar5 + lVar6);
        if (puVar2 != (undefined8 *)0x0) {
          *(undefined8 *)(lVar5 + lVar6) = 0;
          LOCK();
          piVar1 = (int *)(puVar2 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar2)(puVar2,1);
          }
        }
      }
      lVar6 = lVar6 + 0x28;
    } while ((longlong)(int)lVar3 * 0x28 != lVar6);
    uVar4 = (undefined4)param_1[0x3c];
    lVar5 = param_1[0x3b];
  }
  FUN_14736fc4d(lVar5,uVar4);
  *(undefined4 *)(param_1 + 0x3c) = 0;
  if (*(int *)((longlong)param_1 + 0x1e4) != 0) {
    FUN_14736fc96(param_1 + 0x3b);
  }
  lVar5 = param_1[0x3d];
  lVar3 = param_1[0x3e];
  uVar4 = 0;
  if ((longlong)(int)lVar3 != 0) {
    lVar6 = 0;
    do {
      puVar2 = *(undefined8 **)(lVar5 + lVar6);
      if (puVar2 != (undefined8 *)0x0) {
        *(undefined8 *)(lVar5 + lVar6) = 0;
        LOCK();
        piVar1 = (int *)(puVar2 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar2)(puVar2,1);
        }
      }
      lVar6 = lVar6 + 0x28;
    } while ((longlong)(int)lVar3 * 0x28 != lVar6);
    uVar4 = (undefined4)param_1[0x3e];
    lVar5 = param_1[0x3d];
  }
  FUN_14736fc4d(lVar5,uVar4);
  *(undefined4 *)(param_1 + 0x3e) = 0;
  if (*(int *)((longlong)param_1 + 500) != 0) {
    FUN_14736fc96(param_1 + 0x3d);
  }
  *(undefined4 *)((longlong)param_1 + 0x1d4) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  return;
}



// FUNCTION 14315b11a FUN_14315b11a body=604 status=ok
// SIG undefined FUN_14315b11a(void)

void FUN_14315b11a(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  LPCRITICAL_SECTION lpCriticalSection;
  longlong lVar4;
  undefined8 *puVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  
  lpCriticalSection = *(LPCRITICAL_SECTION *)(param_1 + 8);
  EnterCriticalSection(lpCriticalSection);
  if ((*(int *)(param_1 + 0x18) == 2) &&
     ((ulonglong)((longlong)DAT_14c760b6c + *(longlong *)(param_1 + 0x28)) <
      *(ulonglong *)(param_1 + 0x20))) {
    FUN_14315afcc(param_1);
  }
  else {
    if ((ulonglong)*(uint *)(param_1 + 0x1d0) == 100) {
      *(undefined4 *)(param_1 + 0x3c + (ulonglong)*(uint *)(param_1 + 0x1cc) * 4) =
           *(undefined4 *)(param_1 + 0x38);
      uVar6 = *(uint *)(param_1 + 0x1d0);
      *(int *)(param_1 + 0x1cc) =
           *(int *)(param_1 + 0x1cc) + ((*(int *)(param_1 + 0x1cc) + 1) / 100) * -100 + 1;
    }
    else {
      *(undefined4 *)(param_1 + 0x3c + (ulonglong)*(uint *)(param_1 + 0x1d0) * 4) =
           *(undefined4 *)(param_1 + 0x38);
      uVar6 = *(int *)(param_1 + 0x1d0) + 1;
      *(uint *)(param_1 + 0x1d0) = uVar6;
    }
    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_1 + 0x34);
    if ((int)uVar6 < 1) {
      iVar11 = 4;
    }
    else {
      uVar8 = 0;
      uVar10 = 0;
      do {
        uVar3 = *(uint *)(param_1 + 0x3c + uVar8 * 4);
        if (uVar10 < uVar3) {
          uVar10 = uVar3;
        }
        uVar8 = uVar8 + 1;
      } while (uVar6 != uVar8);
      iVar11 = uVar10 + 4;
    }
    iVar7 = *(int *)(param_1 + 0x1e0);
    if (0 < iVar7 && iVar11 < iVar7) {
      iVar9 = 0;
      do {
        lVar4 = *(longlong *)(param_1 + 0x1d8);
        if (*(char *)(lVar4 + 0x18 + (longlong)iVar9 * 0x28) == '\0') {
          lVar4 = lVar4 + (longlong)iVar9 * 0x28;
          *(undefined4 *)(lVar4 + 0x10) = 0;
          if (*(int *)(lVar4 + 0x14) != 0) {
            FUN_14736fde0(lVar4 + 8,0);
          }
          *(undefined8 *)(lVar4 + 0x20) = *(undefined8 *)(param_1 + 0x20);
          iVar7 = *(int *)(param_1 + 0x1f0);
          *(uint *)(param_1 + 0x1f0) = iVar7 + 1U;
          if (*(uint *)(param_1 + 500) < iVar7 + 1U) {
            FUN_14736fcdc(param_1 + 0x1e8,iVar7);
          }
          FUN_14736fe40((longlong)iVar7 * 0x28 + *(longlong *)(param_1 + 0x1e8),lVar4);
          FUN_14736ff12((longlong *)(param_1 + 0x1d8),iVar9);
          iVar7 = *(int *)(param_1 + 0x1e0);
          if (*(int *)(param_1 + 0x1d4) == iVar7) {
            *(int *)(param_1 + 0x1d4) = iVar9;
          }
          if (iVar7 <= iVar11) break;
          iVar9 = iVar9 + -1;
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < iVar7);
    }
    if ((0 < DAT_14c760b6c) && (iVar11 = *(int *)(param_1 + 0x1f0), 0 < iVar11)) {
      iVar9 = 0;
      iVar7 = DAT_14c760b6c;
      do {
        if ((ulonglong)
            ((longlong)iVar7 +
            *(longlong *)(*(longlong *)(param_1 + 0x1e8) + 0x20 + (longlong)iVar9 * 0x28)) <=
            *(ulonglong *)(param_1 + 0x20)) {
          plVar2 = (longlong *)(*(longlong *)(param_1 + 0x1e8) + (longlong)iVar9 * 0x28);
          puVar5 = (undefined8 *)*plVar2;
          if (puVar5 != (undefined8 *)0x0) {
            *plVar2 = 0;
            LOCK();
            piVar1 = (int *)(puVar5 + 1);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)*puVar5)(puVar5,1);
            }
          }
          FUN_14736ff12(param_1 + 0x1e8,iVar9);
          iVar9 = iVar9 + -1;
          iVar11 = *(int *)(param_1 + 0x1f0);
          iVar7 = DAT_14c760b6c;
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < iVar11);
    }
  }
  *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + 1;
  if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014315b35d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(lpCriticalSection);
  return;
}



// FUNCTION 14315b376 FUN_14315b376 body=223 status=ok
// SIG undefined FUN_14315b376(void)

void FUN_14315b376(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  int iVar2;
  LPCRITICAL_SECTION lpCriticalSection;
  undefined8 uVar3;
  
  if ((char)((ulonglong)param_2 >> 0x20) != -1 && (int)param_2 != -1) {
    lpCriticalSection = (LPCRITICAL_SECTION)param_1[1];
    EnterCriticalSection(lpCriticalSection);
    uVar3 = *(undefined8 *)(param_3 + 0x38);
    FUN_147370955(*param_1,param_1[2],param_2,uVar3);
    if ((-1 < (longlong)*(int *)((longlong)param_1 + 0x1d4)) &&
       (*(char *)((longlong)param_1 + 0x31) == '\0')) {
      FUN_147370955(*param_1,*(undefined8 *)
                              (param_1[0x3b] + (longlong)*(int *)((longlong)param_1 + 0x1d4) * 0x28)
                    ,param_2,uVar3);
      lVar1 = param_1[0x3b] + (longlong)*(int *)((longlong)param_1 + 0x1d4) * 0x28;
      iVar2 = *(int *)(lVar1 + 0x10);
      *(uint *)(lVar1 + 0x10) = iVar2 + 1U;
      if (*(uint *)(lVar1 + 0x14) < iVar2 + 1U) {
        FUN_14736ff98((longlong *)(lVar1 + 8),iVar2);
      }
      *(undefined8 *)(*(longlong *)(lVar1 + 8) + (longlong)iVar2 * 8) = param_2;
    }
    if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014315b3f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      LeaveCriticalSection(lpCriticalSection);
      return;
    }
  }
  return;
}



// FUNCTION 14315b456 FUN_14315b456 body=246 status=ok
// SIG undefined FUN_14315b456(void)

void FUN_14315b456(longlong *param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  undefined4 uVar1;
  int iVar2;
  LPCRITICAL_SECTION lpCriticalSection;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  
  if ((char)((ulonglong)param_3 >> 0x20) != -1 && (int)param_3 != -1) {
    lpCriticalSection = (LPCRITICAL_SECTION)param_1[1];
    EnterCriticalSection(lpCriticalSection);
    FUN_147370955(*param_1,param_1[2],param_3,*(undefined8 *)(param_4 + 0x38));
    if (-1 < *(int *)((longlong)param_1 + 0x1d4)) {
      uVar1 = *(undefined4 *)(*param_1 + 8);
      lVar5 = 0;
      do {
        plVar3 = *(longlong **)(param_2 + lVar5);
        if (plVar3 != (longlong *)0x0) {
          lVar4 = (**(code **)(*plVar3 + 0x278))(plVar3,uVar1);
          *(undefined1 *)(lVar4 + 0x3db8) = 1;
        }
        lVar5 = lVar5 + 8;
      } while (lVar5 != 0x10);
      *(undefined1 *)(param_1 + 6) = 1;
      lVar5 = param_1[0x3b] + (longlong)*(int *)((longlong)param_1 + 0x1d4) * 0x28;
      iVar2 = *(int *)(lVar5 + 0x10);
      *(uint *)(lVar5 + 0x10) = iVar2 + 1U;
      if (*(uint *)(lVar5 + 0x14) < iVar2 + 1U) {
        FUN_14736ff98((longlong *)(lVar5 + 8),iVar2);
      }
      *(undefined8 *)(*(longlong *)(lVar5 + 8) + (longlong)iVar2 * 8) = param_3;
    }
    if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014315b538. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      LeaveCriticalSection(lpCriticalSection);
      return;
    }
  }
  return;
}



// FUNCTION 14315b54c FUN_14315b54c body=584 status=ok
// SIG undefined FUN_14315b54c(void)

void FUN_14315b54c(undefined8 *param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  LPCRITICAL_SECTION lpCriticalSection;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined1 auStack_98 [32];
  longlong *local_78;
  ulonglong local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_54;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(char *)(param_1 + 6) == '\x01') {
    lpCriticalSection = (LPCRITICAL_SECTION)param_1[1];
    EnterCriticalSection(lpCriticalSection);
    if (*(char *)(param_1 + 6) == '\x01') {
      if (*(char *)((longlong)param_1 + 0x31) == '\x01') {
        FUN_14315afcc(param_1);
      }
      else {
        *(undefined8 *)(param_1[0x3b] + 0x20 + (longlong)*(int *)((longlong)param_1 + 0x1d4) * 0x28)
             = param_1[4];
        local_50 = *(undefined8 *)
                    (param_1[0x3b] + (longlong)*(int *)((longlong)param_1 + 0x1d4) * 0x28);
        local_54 = 5;
        FUN_14736b396(DAT_14ca77418);
        uVar10 = (ulonglong)*(int *)(param_1 + 0x3c);
        if (0 < (longlong)uVar10) {
          lVar11 = 8;
          uVar7 = 0;
          local_70 = uVar10;
          do {
            uVar5 = *(uint *)((longlong)param_1 + 0x1d4);
            if (uVar7 != uVar5) {
              lVar3 = param_1[0x3b];
              uVar2 = *(uint *)(lVar3 + 0x10 + (longlong)(int)uVar5 * 0x28);
              if ((longlong)(int)uVar2 != 0) {
                plVar6 = (longlong *)(lVar3 + lVar11);
                iVar9 = *(int *)(lVar3 + 8 + lVar11);
                *(uint *)(lVar3 + 8 + lVar11) = iVar9 + uVar2;
                if ((uint)(*(int *)(lVar3 + 0xc + lVar11) - iVar9) < uVar2) {
                  local_78 = plVar6;
                  FUN_14736ff98(plVar6,iVar9);
                  plVar6 = local_78;
                }
                memcpy((void *)((longlong)iVar9 * 8 + *plVar6),
                       *(void **)(lVar3 + (longlong)(int)uVar5 * 0x28 + 8),(longlong)(int)uVar2 << 3
                      );
                uVar10 = local_70;
              }
            }
            uVar7 = uVar7 + 1;
            lVar11 = lVar11 + 0x28;
          } while (uVar10 != uVar7);
          iVar9 = (int)uVar10;
          if (iVar9 != 1) {
            iVar8 = 1;
            do {
              uVar10 = (longlong)(*(int *)((longlong)param_1 + 0x1d4) + iVar8) % (longlong)iVar9;
              iVar4 = (int)uVar10;
              if ((iVar4 != *(int *)((longlong)param_1 + 0x1d4)) &&
                 (lVar11 = param_1[0x3b],
                 *(char *)(lVar11 + 0x18 + (longlong)iVar4 * 0x28) != '\x01')) {
                if (-1 < iVar4) {
                  uVar10 = uVar10 & 0xffffffff;
                  puVar1 = (undefined8 *)(lVar11 + uVar10 * 0x28);
                  local_68 = puVar1[1];
                  local_60 = *(undefined4 *)(puVar1 + 2);
                  FUN_14315f10a(*param_1,*puVar1,param_1[2]);
                  *(undefined4 *)(puVar1 + 2) = 0;
                  if (*(int *)((longlong)puVar1 + 0x14) < 0) {
                    FUN_14736fde0(lVar11 + uVar10 * 0x28 + 8,0);
                  }
                  *(undefined1 *)(puVar1 + 3) = 1;
                  uVar5 = *(int *)((longlong)param_1 + 0x34) + 1;
                  *(uint *)((longlong)param_1 + 0x34) = uVar5;
                  if (uVar5 <= *(uint *)(param_1 + 7)) {
                    uVar5 = *(uint *)(param_1 + 7);
                  }
                  *(uint *)(param_1 + 7) = uVar5;
                  goto LAB_14315b59f;
                }
                break;
              }
              iVar8 = iVar8 + 1;
            } while (iVar9 != iVar8);
          }
        }
      }
      iVar4 = FUN_14315ae1e(param_1);
LAB_14315b59f:
      *(undefined2 *)(param_1 + 6) = 0;
      *(int *)((longlong)param_1 + 0x1d4) = iVar4;
    }
    if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
      LeaveCriticalSection(lpCriticalSection);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14315b796 FUN_14315b796 body=395 status=ok
// SIG undefined FUN_14315b796(void)

void FUN_14315b796(longlong *param_1,int param_2,longlong param_3,longlong param_4,
                  undefined4 param_5)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_3 + 0x10);
  if ((*(byte *)(lVar3 + 0xdf) & 1) == 0) {
    FUN_1447d3e9e(param_1,lVar3,*(undefined4 *)(lVar3 + 0xc0),0x400,0xffffffff,0);
  }
  if ((int)param_1[0x32] != 0) {
    lVar2 = param_1[0x33];
    if (lVar2 == 0) {
      (**(code **)(*param_1 + 8))(param_1);
      lVar2 = param_1[0x33];
    }
    FUN_144ad5b2c(param_1 + 0x31,lVar2,param_1 + 7);
  }
  lVar2 = param_1[0x33];
  if (lVar2 == 0) {
    (**(code **)(*param_1 + 8))(param_1);
    lVar2 = param_1[0x33];
  }
  *(int *)(lVar2 + 0x1c0) = *(int *)(lVar2 + 0x1c0) + 1;
  (**(code **)(**(longlong **)(lVar2 + 0x28) + 0x78))
            (*(longlong **)(lVar2 + 0x28),*(undefined8 *)(lVar3 + 0x20),
             *(undefined8 *)(param_3 + 0x60),*(undefined8 *)(*(longlong *)(param_4 + 0x10) + 0x20),
             *(undefined8 *)(param_4 + 0x60),param_5);
  if (param_2 != 0x400) {
    FUN_1447d3e9e(param_1,lVar3,0x400,param_2,0xffffffff,0);
  }
  uVar1 = *(undefined8 *)(param_4 + 0x10);
  lVar3 = param_1[0x33];
  if (lVar3 == 0) {
    (**(code **)(*param_1 + 8))(param_1);
    lVar3 = param_1[0x33];
  }
  FUN_1447093fc(lVar3,uVar1);
  if (param_1[0x33] != 0) {
    if ((0 < (int)DAT_14c760b84 && *(int *)((longlong)param_1 + 0x1c4) == 0) &&
       (DAT_14c760b84 < *(uint *)(param_1[0x33] + 0x1c0))) {
      (**(code **)(*param_1 + 0x10))(param_1);
    }
  }
  if (*(char *)(param_3 + 0x71) == '\x02') {
    *(byte *)(param_3 + 0x2e) = *(byte *)(param_3 + 0x2e) & 0xef;
  }
  return;
}



// FUNCTION 14315b922 FUN_14315b922 body=60 status=ok
// SIG undefined FUN_14315b922(void)

void FUN_14315b922(longlong *param_1)

{
  if (param_1[0x33] != 0) {
    if ((0 < (int)DAT_14c760b84 && *(int *)((longlong)param_1 + 0x1c4) == 0) &&
       (DAT_14c760b84 < *(uint *)(param_1[0x33] + 0x1c0))) {
                    /* WARNING: Could not recover jumptable at 0x00014315b959. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 14315b95e FUN_14315b95e body=443 status=ok
// SIG undefined FUN_14315b95e(void)

longlong * FUN_14315b95e(longlong param_1,longlong *param_2,longlong *param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  void *_Dst;
  void *_Src;
  longlong lVar3;
  ulonglong _Size;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  ulonglong local_e0;
  undefined8 local_d8;
  undefined1 local_d0 [8];
  longlong local_c8;
  longlong *local_c0;
  longlong local_b8 [14];
  undefined1 local_48;
  undefined2 local_47;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_108;
  _Size = (ulonglong)*(uint *)(param_1 + 0x20);
  local_b8[0] = *(longlong *)(param_1 + 0x38);
  local_b8[1] = 0;
  local_b8[2] = 0;
  local_b8[3] = 0;
  local_b8[10] = 0;
  local_b8[0xb] = 0;
  local_b8[0xc] = 0;
  local_b8[0xd] = 0;
  local_48 = 0;
  local_47 = 0xff;
  local_b8[4] = 0;
  local_b8[5] = 0;
  local_b8[6] = 0;
  local_b8[7] = 0;
  local_b8[8] = 0;
  local_b8[9] = 0;
  _Dst = (void *)FUN_140a6e1ae(local_b8[0] + 0x1438,_Size,4,local_b8);
  _Src = (void *)(**(code **)(*param_3 + 8))(param_3);
  memcpy(_Dst,_Src,_Size);
  *param_2 = 0;
  local_d8 = 0;
  FUN_14315bb1a(local_d0,local_b8[0],0);
  plVar2 = local_c0;
  if (local_c8 != 0) {
    *param_2 = local_c8;
    LOCK();
    *(int *)(local_c8 + 8) = *(int *)(local_c8 + 8) + 1;
    UNLOCK();
  }
  lVar3 = local_c0[0x33];
  if (lVar3 == 0) {
    (**(code **)(*local_c0 + 8))(local_c0);
    lVar3 = plVar2[0x33];
  }
  *(int *)(lVar3 + 0x1c0) = *(int *)(lVar3 + 0x1c0) + 1;
  local_e8 = local_b8[0xc];
  local_e0 = _Size;
  (**(code **)(**(longlong **)(lVar3 + 0x20) + 0x78))
            (*(longlong **)(lVar3 + 0x20),*(undefined8 *)(*(longlong *)(param_1 + 0x88) + 0x20),
             *(undefined8 *)(param_1 + 0xd8),*(undefined8 *)(local_b8[2] + 0x20));
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  lVar3 = local_c0[0x33];
  if (lVar3 == 0) {
    (**(code **)(*local_c0 + 8))(local_c0);
    lVar3 = local_c0[0x33];
  }
  FUN_1447093fc(lVar3,uVar1);
  FUN_140065414(local_d0);
  if (*(char *)(param_1 + 0xe9) == '\x02') {
    *(byte *)(param_1 + 0xa6) = *(byte *)(param_1 + 0xa6) & 0xef;
  }
  (**(code **)(*param_3 + 0x18))(param_3);
  FUN_144902b9c(local_b8);
  if ((local_40 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14315bb1a FUN_14315bb1a body=152 status=ok
// SIG undefined FUN_14315bb1a(void)

undefined8 *
FUN_14315bb1a(undefined8 *param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  *param_1 = param_2;
  lVar3 = FUN_144ad3d06(0x30);
  FUN_144724502(lVar3,param_3);
  param_1[1] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  lVar3 = FUN_144ad4368(param_2,1);
  param_1[2] = lVar3;
  if (*param_4 != 0) {
    iVar1 = *(int *)(lVar3 + 0x20);
    *(uint *)(lVar3 + 0x20) = iVar1 + 1U;
    if (*(uint *)(lVar3 + 0x24) < iVar1 + 1U) {
      FUN_14476c1d2((longlong *)(lVar3 + 0x18),iVar1);
    }
    lVar2 = *param_4;
    *(longlong *)(*(longlong *)(lVar3 + 0x18) + (longlong)iVar1 * 8) = lVar2;
    if (lVar2 != 0) {
      LOCK();
      *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
      UNLOCK();
    }
  }
  return param_1;
}



// FUNCTION 14315bbb2 FUN_14315bbb2 body=345 status=ok
// SIG undefined FUN_14315bbb2(void)

void FUN_14315bbb2(undefined8 param_1,longlong param_2,undefined4 *param_3,undefined8 param_4,
                  uint param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                  longlong param_9,longlong param_10,undefined8 *param_11,undefined8 param_12)

{
  longlong lVar1;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined4 local_b0;
  longlong local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  longlong local_88;
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
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if ((param_5 & 6) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_d8);
  }
  if (param_11 == (undefined8 *)0x0) {
    local_98 = param_12;
    local_a0 = param_8;
    local_a8 = param_10;
    local_b0 = param_7;
    local_b8 = CONCAT44(local_b8._4_4_,param_6);
    FUN_144a92ed0(param_2 + 0x13e8,1);
  }
  else {
    local_b8 = *(undefined8 *)(param_3 + 4);
    local_40 = 0;
    local_78 = *param_3;
    uStack_74 = param_3[1];
    uStack_70 = param_3[2];
    uStack_6c = param_3[3];
    local_68 = param_3[4];
    uStack_64 = param_3[5];
    uStack_60 = param_3[6];
    uStack_5c = param_3[7];
    local_58 = param_3[8];
    uStack_54 = param_3[9];
    uStack_50 = param_3[10];
    uStack_4c = param_3[0xb];
    local_48 = *(undefined8 *)(param_3 + 0xc);
    local_88 = param_10;
    local_90 = param_12;
    local_98 = 0;
    local_a0 = param_7;
    local_a8 = CONCAT44(local_a8._4_4_,param_6);
    local_b0 = param_8;
    (**(code **)*param_11)(param_11,*(undefined4 *)(param_2 + 8),1);
  }
  lVar1 = param_9 + 0x30;
  if (param_9 == 0) {
    lVar1 = 0;
  }
  *(longlong *)(param_10 + 8) = lVar1;
  if ((local_38 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14315bd2c FUN_14315bd2c body=611 status=ok
// SIG undefined FUN_14315bd2c(void)

void FUN_14315bd2c(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5,undefined8 param_6)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  ulonglong local_c0;
  longlong *local_b0;
  longlong local_a8;
  longlong local_a0;
  undefined1 local_98 [40];
  undefined1 local_70 [40];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (param_4 == 0) {
    lVar8 = 0;
  }
  else {
    uVar3 = *(uint *)(param_1 + 0x118);
    if (uVar3 == 0) {
      uVar6 = 0x20;
    }
    else {
      uVar6 = 0;
      if (uVar3 != 0) {
        for (; (uVar3 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
        }
      }
    }
    lVar8 = *(longlong *)(param_4 + 0xf8 + (ulonglong)uVar6 * 8);
  }
  plVar2 = (longlong *)(param_1 + -0x1c8);
  if (param_2 == 0) {
    lVar9 = 0;
  }
  else {
    uVar3 = *(uint *)(param_1 + 0x118);
    if (uVar3 == 0) {
      uVar6 = 0x20;
    }
    else {
      uVar6 = 0;
      if (uVar3 != 0) {
        for (; (uVar3 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
        }
      }
    }
    lVar9 = *(longlong *)(param_2 + 0xf8 + (ulonglong)uVar6 * 8);
  }
  local_a0 = *(longlong *)(lVar8 + 0x38);
  lVar4 = *(longlong *)(lVar8 + 0x88);
  lVar5 = *(longlong *)(lVar9 + 0x88);
  local_c0 = local_c0 & 0xffffffff00000000;
  local_c8._0_4_ = 0x800;
  local_b0 = plVar2;
  local_a8 = param_3;
  FUN_144abd48c(local_70,plVar2,lVar4,lVar8 + 0x78);
  local_c0 = local_c0 & 0xffffffff00000000;
  local_c8 = CONCAT44(local_c8._4_4_,0x400);
  FUN_144abd48c(local_98,plVar2,lVar5,lVar9 + 0x78);
  if (*(int *)(param_1 + -0x38) != 0) {
    lVar7 = *(longlong *)(param_1 + -0x30);
    if (lVar7 == 0) {
      (**(code **)(*(longlong *)(param_1 + -0x1c8) + 8))(local_b0);
      lVar7 = *(longlong *)(param_1 + -0x30);
    }
    FUN_144ad5b2c(param_1 + -0x40,lVar7,param_1 + -400);
  }
  lVar7 = *(longlong *)(param_1 + -0x30);
  if (lVar7 == 0) {
    (**(code **)(*(longlong *)(param_1 + -0x1c8) + 8))(local_b0);
    lVar7 = *(longlong *)(param_1 + -0x30);
  }
  *(int *)(lVar7 + 0x1c0) = *(int *)(lVar7 + 0x1c0) + 1;
  local_c8 = param_5 + *(longlong *)(lVar8 + 0xd8);
  local_c0 = param_6;
  (**(code **)(**(longlong **)(lVar7 + 0x28) + 0x78))
            (*(longlong **)(lVar7 + 0x28),*(undefined8 *)(lVar5 + 0x20),
             local_a8 + *(longlong *)(lVar9 + 0xd8),*(undefined8 *)(lVar4 + 0x20));
  lVar8 = *(longlong *)(param_1 + -0x30);
  if (lVar8 == 0) {
    (**(code **)(*(longlong *)(param_1 + -0x1c8) + 8))(local_b0);
    lVar8 = *(longlong *)(param_1 + -0x30);
  }
  FUN_1447093fc(lVar8,lVar5);
  lVar8 = *(longlong *)(param_1 + -0x30);
  if (lVar8 == 0) {
    (**(code **)(*(longlong *)(param_1 + -0x1c8) + 8))(local_b0);
    lVar8 = *(longlong *)(param_1 + -0x30);
  }
  FUN_1447093fc(lVar8,lVar4);
  if (((*(longlong *)(param_1 + -0x30) != 0) &&
      (0 < (int)DAT_14c760b84 && *(int *)(param_1 + -4) == 0)) &&
     (DAT_14c760b84 < *(uint *)(*(longlong *)(param_1 + -0x30) + 0x1c0))) {
    (**(code **)(*local_b0 + 0x10))();
  }
  if ((*(char *)(local_a0 + 0x48) == '\x01') && (*(longlong *)(local_a0 + 0x60) != 0)) {
    piVar1 = (int *)(*(longlong *)(local_a0 + 0x60) + 0x10);
    *piVar1 = *piVar1 + 1;
    piVar1 = (int *)(*(longlong *)(local_a0 + 0x60) + 0x14);
    *piVar1 = *piVar1 + 1;
  }
  FUN_144ac1896(local_98);
  FUN_144ac1896(local_70);
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14315bf90 FUN_14315bf90 body=69 status=ok
// SIG undefined FUN_14315bf90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14315bf90(void)

{
  _DAT_14ca76940 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014315bfd2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca76948,1);
  return;
}



// FUNCTION 14315bfd5 FUN_14315bfd5 body=69 status=ok
// SIG undefined FUN_14315bfd5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14315bfd5(void)

{
  _DAT_14ca76950 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014315c017. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca76958,1);
  return;
}



// FUNCTION 14315c01a FUN_14315c01a body=69 status=ok
// SIG undefined FUN_14315c01a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14315c01a(void)

{
  _DAT_14ca76960 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014315c05c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca76968,1);
  return;
}



// FUNCTION 14315c060 FUN_14315c060 body=946 status=ok
// SIG undefined FUN_14315c060(void)

void FUN_14315c060(longlong *param_1,ulonglong param_2)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined1 auStack_68 [32];
  longlong local_48 [3];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_1[0x33] != 0) {
    (**(code **)(*param_1 + 0x10))(param_1);
  }
  if ((param_2 & 2) == 0) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    puVar4 = (undefined8 *)FUN_144ad3d06(0x30);
    FUN_144724502(puVar4,1);
    if (puVar4 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puVar4 + 1) = *(int *)(puVar4 + 1) + 1;
      UNLOCK();
    }
    FUN_1447584e6(param_1,puVar4);
  }
  if ((param_2 & 1) == 0) {
    puVar5 = (undefined8 *)0x0;
  }
  else {
    puVar5 = (undefined8 *)FUN_1446fac86(0xa8);
    FUN_1447247dc(puVar5,0);
    *puVar5 = &PTR_FUN_149e00300;
    if (*(code **)(puVar5[0xe] + 0x18) != FUN_144713626) {
      (**(code **)(puVar5[0xe] + 0x18))(puVar5 + 0xe,puVar5 + 9);
    }
    puVar5[0xe] = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>
                  ::
                  TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                  ::vftable;
    puVar5[9] = puVar5;
    puVar5[10] = puVar5;
    lVar2 = *(longlong *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8
             );
    if (lVar2 == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(undefined8 *)(lVar2 + 0x30);
    }
    puVar5[0xf] = uVar6;
    puVar5[0x10] = 0xc80000527800c400;
    *(undefined4 *)((longlong)puVar5 + 0x1c) = 2;
    iVar3 = (int)param_1[0x36];
    if ((iVar3 == 0) || (3 < (int)param_1[0x38])) {
      puVar7 = (undefined8 *)FUN_14001cc68(0x310,0x10);
      lVar2 = *(longlong *)(param_1[1] + 0x1280);
      lVar8 = param_1[1] + 0xb00;
      if (lVar2 != 0) {
        lVar8 = lVar2;
      }
      puVar7[1] = (longlong)(int)param_1[2] * 0x280 + lVar8;
      puVar7[0x35] = 0;
      puVar7[0x36] = 0x1800000000;
      *(undefined4 *)(puVar7 + 4) = 0;
      puVar7[2] = 0;
      puVar7[3] = 0;
      puVar7[0x3c] = 0;
      puVar7[0x3e] = 0;
      *(undefined1 *)(puVar7 + 0x4d) = 0;
      *(undefined1 *)(puVar7 + 0x4f) = 0;
      puVar7[0x5c] = 0;
      *(undefined4 *)(puVar7 + 0x5d) = 0;
      puVar7[0x39] = 0;
      puVar7[0x3a] = 0;
      puVar7[0x37] = 0;
      puVar7[0x38] = 0;
      *(undefined2 *)(puVar7 + 0x3b) = 0;
      puVar7[0x4a] = 0;
      puVar7[0x4b] = 0;
      puVar7[0x48] = 0;
      puVar7[0x49] = 0;
      puVar7[0x46] = 0;
      puVar7[0x47] = 0;
      puVar7[0x44] = 0;
      puVar7[0x45] = 0;
      puVar7[0x58] = 0;
      puVar7[0x59] = 0;
      puVar7[0x56] = 0;
      puVar7[0x57] = 0;
      puVar7[0x54] = 0;
      puVar7[0x55] = 0;
      puVar7[0x52] = 0;
      puVar7[0x53] = 0;
      puVar7[0x50] = 0;
      puVar7[0x51] = 0;
      *(undefined8 *)((longlong)puVar7 + 0x2ec) = 0xffffffff00000080;
      *(undefined4 *)((longlong)puVar7 + 0x2f4) = 0;
      puVar7[0x60] = 0;
      *(undefined4 *)(puVar7 + 0x61) = 0;
      *puVar7 = &PTR_FUN_14a349180;
      iVar3 = (int)param_1[0x36];
      *(uint *)(param_1 + 0x36) = iVar3 + 1U;
      if (*(uint *)((longlong)param_1 + 0x1b4) < iVar3 + 1U) {
        FUN_1447183c0(param_1 + 0x35,iVar3);
      }
      *(undefined8 **)(param_1[0x35] + (longlong)iVar3 * 8) = puVar7;
      iVar3 = (int)param_1[0x36];
    }
    *(undefined4 *)(param_1 + 0x38) = 3;
    lVar2 = *(longlong *)(param_1[0x35] + (longlong)(iVar3 + -1) * 8);
    puVar7 = *(undefined8 **)(lVar2 + 600);
    if (puVar7 != puVar5) {
      *(undefined8 **)(lVar2 + 600) = puVar5;
      if (puVar5 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(puVar5 + 1) = *(int *)(puVar5 + 1) + 1;
        UNLOCK();
      }
      if (puVar7 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(puVar7 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar7)(puVar7,1);
        }
      }
    }
  }
  local_48[0] = 0;
  local_48[1] = 0;
  (**(code **)(*param_1 + 0x28))(param_1,local_48);
  FUN_14473bfcc(DAT_14ca77418,local_48);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((puVar4 != (undefined8 *)0x0) && ((*(byte *)(puVar4[5] + 0xa0) & 1) == 0)) {
    FUN_1402df4ac(DAT_14ca77418,puVar4[5]);
  }
  if (puVar5 != (undefined8 *)0x0) {
    if ((*(byte *)(puVar5 + 0x14) & 1) == 0) {
      FUN_140082318(puVar5);
    }
    LOCK();
    piVar1 = (int *)(puVar5 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar5)(puVar5,1);
    }
  }
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar4 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar4)(puVar4,1);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14315c414 FUN_14315c414 body=375 status=ok
// SIG undefined FUN_14315c414(void)

undefined8 * FUN_14315c414(longlong *param_1,undefined8 *param_2,uint param_3,uint *param_4)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  byte bVar4;
  uint uVar5;
  undefined8 *puVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  uint local_4c;
  
  lVar2 = *param_1;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  uVar7 = param_3;
  if (param_3 == 0) {
    local_4c = 0x20;
    uVar8 = local_4c;
  }
  else {
    uVar8 = 0;
    local_4c = uVar8;
    if (param_3 != 0) {
      for (; local_4c = uVar8, (param_3 >> uVar8 & 1) == 0; uVar8 = uVar8 + 1) {
      }
    }
  }
  while (uVar7 != 0) {
    puVar6 = (undefined8 *)FUN_144ad3d06(0x30);
    *puVar6 = &PTR_FUN_149e002e8;
    *(undefined4 *)(puVar6 + 1) = 0;
    *puVar6 = &PTR_FUN_14a3492f8;
    *(undefined1 *)(puVar6 + 4) = 0;
    puVar6[5] = 0;
    if (puVar6 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puVar6 + 1) = *(int *)(puVar6 + 1) + 1;
      UNLOCK();
    }
    uVar9 = (ulonglong)uVar8;
    puVar3 = (undefined8 *)param_2[uVar9];
    param_2[uVar9] = puVar6;
    if (puVar3 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar3 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
    FUN_1447584e6(*(undefined8 *)(lVar2 + 0x128 + uVar9 * 8),param_2[uVar9]);
    bVar4 = (byte)uVar8 & 0x1f;
    uVar7 = uVar7 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
    if (uVar7 == 0) {
      uVar8 = 0x20;
    }
    else {
      uVar8 = 0;
      if (uVar7 != 0) {
        for (; (uVar7 >> uVar8 & 1) == 0; uVar8 = uVar8 + 1) {
        }
      }
    }
  }
  bVar4 = (byte)param_4[1];
  if ((bVar4 != 0) && (uVar7 = *param_4, uVar7 != 0)) {
    uVar8 = 0;
    if (uVar7 != 0) {
      for (; (uVar7 >> uVar8 & 1) == 0; uVar8 = uVar8 + 1) {
      }
    }
    do {
      if (param_3 != 0) {
        uVar5 = param_3;
        uVar10 = local_4c;
        do {
          FUN_1417894fa(*(undefined8 *)(lVar2 + 0x128 + (ulonglong)uVar8 * 8),param_2[uVar10]);
          bVar4 = (byte)uVar10 & 0x1f;
          uVar5 = (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4) & uVar5;
          if (uVar5 == 0) {
            uVar10 = 0x20;
          }
          else {
            uVar10 = 0;
            if (uVar5 != 0) {
              for (; (uVar5 >> uVar10 & 1) == 0; uVar10 = uVar10 + 1) {
              }
            }
          }
        } while (uVar5 != 0);
      }
      bVar4 = (byte)uVar8 & 0x1f;
      uVar7 = uVar7 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
      if (uVar7 == 0) {
        uVar8 = 0x20;
      }
      else {
        uVar8 = 0;
        if (uVar7 != 0) {
          for (; (uVar7 >> uVar8 & 1) == 0; uVar8 = uVar8 + 1) {
          }
        }
      }
    } while (uVar7 != 0);
    bVar4 = (byte)param_4[1];
  }
  if ((bVar4 & 1) != 0) {
    *(undefined1 *)(param_4 + 1) = 0;
  }
  return param_2;
}



// FUNCTION 14315c58c FUN_14315c58c body=239 status=ok
// SIG undefined FUN_14315c58c(void)

void FUN_14315c58c(longlong param_1,longlong *param_2,uint param_3)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  if (param_3 != 0) {
    uVar4 = 0;
    if (param_3 != 0) {
      for (; (param_3 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
      }
    }
    iVar6 = 0;
    do {
      puVar3 = (undefined8 *)FUN_144ad3d06(0x30);
      *puVar3 = &PTR_FUN_149e002e8;
      piVar1 = (int *)(puVar3 + 1);
      *(undefined4 *)(puVar3 + 1) = 0;
      *puVar3 = &PTR_FUN_14a3492f8;
      *(undefined1 *)(puVar3 + 4) = 0;
      puVar3[5] = 0;
      if (puVar3 != (undefined8 *)0x0) {
        LOCK();
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      LOCK();
      *(int *)(puVar3 + 1) = *(int *)(puVar3 + 1) + 1;
      UNLOCK();
      FUN_1447584e6(*(undefined8 *)(param_1 + 0x128 + (ulonglong)uVar4 * 8),puVar3);
      uVar5 = 1 << ((byte)uVar4 & 0x1f);
      lVar2 = *(longlong *)(*param_2 + (longlong)iVar6 * 8);
      *(uint *)(lVar2 + 0x40) = uVar5;
      *(undefined8 **)(lVar2 + (ulonglong)uVar4 * 8) = puVar3;
      if (puVar3 != (undefined8 *)0x0) {
        LOCK();
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar3)(puVar3,1);
        }
      }
      param_3 = param_3 & ~uVar5;
      if (param_3 == 0) {
        uVar4 = 0x20;
      }
      else {
        uVar4 = 0;
        if (param_3 != 0) {
          for (; (param_3 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
          }
        }
      }
      iVar6 = iVar6 + 1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14315c67c FUN_14315c67c body=1275 status=ok
// SIG undefined FUN_14315c67c(void)

void FUN_14315c67c(longlong param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  undefined8 uVar14;
  longlong lVar15;
  undefined1 auStack_128 [32];
  undefined4 local_108;
  undefined8 *local_100;
  undefined4 *local_f8;
  longlong *local_e8;
  longlong *local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  int local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_128;
  lVar5 = param_2[1];
  if ((longlong)(int)lVar5 != 0) {
    lVar4 = *param_2;
    lVar15 = 0;
    local_e8 = param_2;
    local_e0 = param_4;
    do {
      uVar13 = (ulonglong)*(uint *)(lVar4 + 0x28 + lVar15);
      uVar14 = *(undefined8 *)(param_1 + 0x128 + uVar13 * 8);
      plVar11 = *(longlong **)(lVar4 + lVar15);
      if (plVar11 == (longlong *)0x0) {
        lVar6 = *(longlong *)(lVar4 + 8 + lVar15);
        if (lVar6 == 0) {
          lVar6 = 0;
        }
        else {
          lVar6 = *(longlong *)(lVar6 + 0xf8 + uVar13 * 8);
        }
        puVar7 = (undefined8 *)(lVar6 + 0x88);
      }
      else {
        lVar6 = (**(code **)(*plVar11 + 8))(plVar11);
        if ((*(byte *)(lVar6 + 2) & 4) != 0) {
          plVar11 = (longlong *)**(longlong **)(plVar11[0x48] + 0xa0);
        }
        lVar6 = (**(code **)(*plVar11 + 0x30))(plVar11);
        if (lVar6 == 0) {
          lVar6 = 0;
        }
        else {
          lVar6 = *(longlong *)(lVar6 + 0x128 + uVar13 * 8);
        }
        puVar7 = (undefined8 *)(lVar6 + 0xb8);
      }
      local_108 = 0;
      FUN_144706208(uVar14,*puVar7,0x7fffffff,0x800);
      lVar15 = lVar15 + 0x48;
    } while ((longlong)(int)lVar5 * 0x48 != lVar15);
    lVar5 = param_3[1];
    if ((longlong)(int)lVar5 != 0) {
      lVar4 = *param_3;
      lVar15 = 0;
      do {
        lVar6 = *(longlong *)(lVar4 + lVar15);
        puVar7 = *(undefined8 **)(lVar6 + 8);
        FUN_1417894fa(*(undefined8 *)(param_1 + 0x128 + (ulonglong)*(uint *)(lVar6 + 4) * 8),puVar7)
        ;
        LOCK();
        piVar1 = (int *)(puVar7 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (puVar7 != (undefined8 *)0x0 && *piVar1 == 0) {
          (**(code **)*puVar7)(puVar7,1);
        }
        if (lVar6 != 0) {
          FUN_1400020a8(lVar6);
        }
        lVar15 = lVar15 + 8;
      } while ((longlong)(int)lVar5 * 8 != lVar15);
    }
    lVar5 = local_e8[1];
    if ((longlong)(int)lVar5 != 0) {
      lVar4 = *local_e8;
      lVar15 = 0;
      do {
        uVar13 = (ulonglong)*(uint *)(lVar4 + 0x28 + lVar15);
        plVar11 = *(longlong **)(param_1 + 0x128 + uVar13 * 8);
        plVar9 = *(longlong **)(lVar4 + lVar15);
        if (plVar9 == (longlong *)0x0) {
          lVar6 = *(longlong *)(lVar4 + 8 + lVar15);
          if (lVar6 == 0) {
            plVar9 = (longlong *)&DAT_00000088;
            lVar6 = 0;
          }
          else {
            plVar9 = (longlong *)(*(longlong *)(lVar6 + 0xf8 + uVar13 * 8) + 0x88);
            lVar6 = *(longlong *)(lVar6 + 0xf8 + (ulonglong)*(uint *)(lVar4 + 0x2c + lVar15) * 8);
          }
          lVar8 = *plVar9;
          lVar6 = *(longlong *)(lVar6 + 0x88);
          lVar10 = plVar11[0x33];
          if (lVar10 == 0) {
            (**(code **)(*plVar11 + 8))(plVar11);
            lVar10 = plVar11[0x33];
          }
          plVar11 = *(longlong **)(lVar10 + 0x28);
          *(int *)(lVar10 + 0x1c0) = *(int *)(lVar10 + 0x1c0) + 1;
          uVar14 = *(undefined8 *)(lVar8 + 0x20);
          uVar12 = *(undefined8 *)(lVar6 + 0x20);
LAB_14315ca4c:
          (**(code **)(*plVar11 + 0x88))(plVar11,uVar12,uVar14);
        }
        else {
          lVar6 = (**(code **)(*plVar9 + 8))(plVar9);
          if ((*(byte *)(lVar6 + 2) & 4) != 0) {
            plVar9 = (longlong *)**(longlong **)(plVar9[0x48] + 0xa0);
          }
          lVar6 = (**(code **)(*plVar9 + 0x30))(plVar9);
          if (lVar6 == 0) {
            lVar6 = 0;
          }
          else {
            lVar6 = *(longlong *)(lVar6 + 0x128 + uVar13 * 8);
          }
          plVar9 = *(longlong **)(lVar4 + lVar15);
          if (plVar9 == (longlong *)0x0) {
LAB_14315ca64:
            lVar8 = 0;
          }
          else {
            uVar2 = *(uint *)(lVar4 + 0x2c + lVar15);
            lVar8 = (**(code **)(*plVar9 + 8))(plVar9);
            if ((*(byte *)(lVar8 + 2) & 4) != 0) {
              plVar9 = (longlong *)**(longlong **)(plVar9[0x48] + 0xa0);
            }
            lVar8 = (**(code **)(*plVar9 + 0x30))(plVar9);
            if (lVar8 == 0) goto LAB_14315ca64;
            lVar8 = *(longlong *)(lVar8 + 0x128 + (ulonglong)uVar2 * 8);
          }
          iVar3 = *(int *)(lVar4 + 0x24 + lVar15);
          if (iVar3 == 0) {
            lVar10 = plVar11[0x33];
            if (lVar10 == 0) {
              (**(code **)(*plVar11 + 8))(plVar11);
              lVar10 = plVar11[0x33];
            }
            plVar11 = *(longlong **)(lVar10 + 0x28);
            *(int *)(lVar10 + 0x1c0) = *(int *)(lVar10 + 0x1c0) + 1;
            uVar14 = *(undefined8 *)(*(longlong *)(lVar6 + 0xb8) + 0x20);
            uVar12 = *(undefined8 *)(*(longlong *)(lVar8 + 0xb8) + 0x20);
            goto LAB_14315ca4c;
          }
          local_78 = *(undefined4 *)(lVar4 + 0x10 + lVar15);
          local_74 = *(undefined4 *)(lVar4 + 0x14 + lVar15);
          local_70 = *(undefined4 *)(lVar4 + 0x18 + lVar15);
          local_6c = *(undefined4 *)(lVar4 + 0x1c + lVar15);
          local_68 = *(undefined4 *)(lVar4 + 0x20 + lVar15);
          local_a8 = *(undefined8 *)(*(longlong *)(lVar6 + 0xb8) + 0x20);
          local_a0 = 0;
          local_88 = 0;
          uStack_80 = 0;
          local_98 = 0;
          uStack_90 = 0;
          local_d8 = *(undefined8 *)(*(longlong *)(lVar8 + 0xb8) + 0x20);
          local_d0 = 0;
          local_b8 = 0;
          uStack_b0 = 0;
          local_c8 = 0;
          uStack_c0 = 0;
          lVar6 = plVar11[0x33];
          local_64 = iVar3;
          if (lVar6 == 0) {
            (**(code **)(*plVar11 + 8))(plVar11);
            lVar6 = plVar11[0x33];
          }
          *(int *)(lVar6 + 0x1c0) = *(int *)(lVar6 + 0x1c0) + 1;
          local_f8 = &local_78;
          local_100 = &local_a8;
          local_108 = local_70;
          (**(code **)(**(longlong **)(lVar6 + 0x28) + 0x80))
                    (*(longlong **)(lVar6 + 0x28),&local_d8,local_78,local_74);
        }
        lVar15 = lVar15 + 0x48;
      } while ((longlong)(int)lVar5 * 0x48 != lVar15);
    }
    puVar7 = (undefined8 *)FUN_144ad3d06(0x30);
    *puVar7 = &PTR_FUN_149e002e8;
    piVar1 = (int *)(puVar7 + 1);
    *(undefined4 *)(puVar7 + 1) = 0;
    *puVar7 = &PTR_FUN_14a3492f8;
    *(undefined1 *)(puVar7 + 4) = 0;
    puVar7[5] = 0;
    if (puVar7 != (undefined8 *)0x0) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    FUN_1447584e6(*(undefined8 *)(param_1 + 0x128 + (ulonglong)*(uint *)(*local_e8 + 0x28) * 8));
    lVar5 = local_e0[1];
    if ((longlong)(int)lVar5 != 0) {
      lVar4 = *local_e0;
      lVar15 = 0;
      do {
        lVar6 = *(longlong *)(lVar4 + lVar15);
        LOCK();
        *(int *)(puVar7 + 1) = *(int *)(puVar7 + 1) + 1;
        UNLOCK();
        *(undefined8 **)(lVar6 + 8) = puVar7;
        lVar15 = lVar15 + 8;
      } while ((longlong)(int)lVar5 * 8 != lVar15);
    }
    if (puVar7 != (undefined8 *)0x0) {
      LOCK();
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar7)(puVar7,1);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14315cb78 FUN_14315cb78 body=413 status=ok
// SIG undefined FUN_14315cb78(void)

void FUN_14315cb78(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  uint *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  int *piVar8;
  longlong lVar9;
  longlong *plVar10;
  
  lVar4 = param_2[1];
  if ((longlong)(int)lVar4 != 0) {
    lVar1 = *param_2;
    lVar9 = 0;
    do {
      uVar7 = (ulonglong)*(uint *)(lVar1 + 0x2c + lVar9);
      uVar2 = *(undefined8 *)(param_1 + 0x128 + uVar7 * 8);
      plVar10 = *(longlong **)(lVar1 + lVar9);
      if (plVar10 == (longlong *)0x0) {
        lVar5 = *(longlong *)(lVar1 + 8 + lVar9);
        if (lVar5 == 0) {
          lVar5 = 0;
        }
        else {
          lVar5 = *(longlong *)(lVar5 + 0xf8 + uVar7 * 8);
        }
        puVar6 = (undefined8 *)(lVar5 + 0x88);
      }
      else {
        lVar5 = (**(code **)(*plVar10 + 8))(plVar10);
        if ((*(byte *)(lVar5 + 2) & 4) != 0) {
          plVar10 = (longlong *)**(longlong **)(plVar10[0x48] + 0xa0);
        }
        lVar5 = (**(code **)(*plVar10 + 0x30))(plVar10);
        if (lVar5 == 0) {
          lVar5 = 0;
        }
        else {
          lVar5 = *(longlong *)(lVar5 + 0x128 + uVar7 * 8);
        }
        puVar6 = (undefined8 *)(lVar5 + 0xb8);
      }
      FUN_144706208(uVar2,*puVar6,0x7fffffff,0x400,0);
      lVar9 = lVar9 + 0x48;
    } while ((longlong)(int)lVar4 * 0x48 != lVar9);
  }
  lVar4 = param_3[1];
  if ((longlong)(int)lVar4 != 0) {
    lVar1 = *param_3;
    lVar9 = 0;
    do {
      puVar3 = *(uint **)(lVar1 + lVar9);
      puVar6 = (undefined8 *)FUN_144ad3d06(0x30);
      *puVar6 = &PTR_FUN_149e002e8;
      *(undefined4 *)(puVar6 + 1) = 0;
      *puVar6 = &PTR_FUN_14a3492f8;
      *(undefined1 *)(puVar6 + 4) = 0;
      puVar6[5] = 0;
      LOCK();
      *(int *)(puVar6 + 1) = *(int *)(puVar6 + 1) + 1;
      UNLOCK();
      if (puVar6 == (undefined8 *)0x0) {
        FUN_1447584e6(*(undefined8 *)(param_1 + 0x128 + (ulonglong)*puVar3 * 8),0);
        puVar3[2] = 0;
        puVar3[3] = 0;
      }
      else {
        LOCK();
        *(int *)(puVar6 + 1) = *(int *)(puVar6 + 1) + 1;
        UNLOCK();
        piVar8 = (int *)(puVar6 + 1);
        FUN_1447584e6(*(undefined8 *)(param_1 + 0x128 + (ulonglong)*puVar3 * 8),puVar6);
        *(undefined8 **)(puVar3 + 2) = puVar6;
        LOCK();
        *piVar8 = *piVar8 + -1;
        UNLOCK();
        if (*piVar8 == 0) {
          (**(code **)*puVar6)(puVar6);
        }
      }
      lVar9 = lVar9 + 8;
    } while ((longlong)(int)lVar4 * 8 != lVar9);
  }
  return;
}



// FUNCTION 14315cd15 FUN_14315cd15 body=69 status=ok
// SIG undefined FUN_14315cd15(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14315cd15(void)

{
  _DAT_14ca76970 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014315cd57. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca76978,1);
  return;
}



// FUNCTION 14315cd5a FUN_14315cd5a body=69 status=ok
// SIG undefined FUN_14315cd5a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14315cd5a(void)

{
  _DAT_14ca76980 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014315cd9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca76988,1);
  return;
}



// FUNCTION 14315cda0 FUN_14315cda0 body=238 status=ok
// SIG undefined FUN_14315cda0(void)

void FUN_14315cda0(longlong *param_1)

{
  if ((longlong *)param_1[0xd] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0xd] + 0x10))();
  }
  if ((longlong *)param_1[0xc] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0xc] + 0x10))();
  }
  if ((longlong *)param_1[0xb] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0xb] + 0x10))();
  }
  if ((longlong *)param_1[10] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[10] + 0x10))();
  }
  if ((longlong *)param_1[9] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[9] + 0x10))();
  }
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[8] + 0x10))();
  }
  if ((longlong *)param_1[7] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[7] + 0x10))();
  }
  if ((longlong *)param_1[6] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[6] + 0x10))();
  }
  if ((longlong *)param_1[5] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[5] + 0x10))();
  }
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[4] + 0x10))();
  }
  if ((longlong *)param_1[3] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[3] + 0x10))();
  }
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[2] + 0x10))();
  }
  if ((longlong *)param_1[1] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[1] + 0x10))();
  }
  if ((longlong *)*param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014315ce79. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)*param_1 + 0x10))();
    return;
  }
  return;
}



// FUNCTION 14315ce8e FUN_14315ce8e body=69 status=ok
// SIG undefined FUN_14315ce8e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14315ce8e(void)

{
  _DAT_14ca76998 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014315ced0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca769a0,1);
  return;
}



// FUNCTION 14315ced4 FUN_14315ced4 body=765 status=ok
// SIG undefined FUN_14315ced4(void)

void FUN_14315ced4(longlong param_1,longlong param_2,longlong param_3,int param_4,uint param_5)

{
  longlong lVar1;
  uint uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined1 auStack_d8 [32];
  ulonglong local_b8;
  ulonglong local_b0;
  longlong local_a8;
  undefined4 local_a0;
  wchar_t *local_98;
  longlong local_90;
  ulonglong local_88;
  undefined4 local_80 [2];
  undefined8 local_78;
  ulonglong local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca769a8) && (FUN_144b3d300(&DAT_14ca769a8), DAT_14ca769a8 == -1)) {
    local_80[0] = 0x11;
    FUN_14577453c(L"FRHIStagingBuffer");
    _Init_thread_footer(&DAT_14ca769a8);
  }
  if (param_2 == 0) {
    lVar8 = 0;
  }
  else {
    uVar2 = *(uint *)(param_1 + 0x118);
    if (uVar2 == 0) {
      uVar6 = 0x20;
    }
    else {
      uVar6 = 0;
      if (uVar2 != 0) {
        for (; (uVar2 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
        }
      }
    }
    lVar8 = *(longlong *)(param_2 + 0xf8 + (ulonglong)uVar6 * 8);
  }
  uVar9 = (ulonglong)param_5;
  if ((*(char *)(param_3 + 0x88) == '\0') || (*(uint *)(param_3 + 0x90) < param_5)) {
    FUN_14488df26(param_3 + 0x18);
    local_80[0] = 1;
    local_78 = 0;
    local_68 = 0x1000100000001;
    local_60 = 0;
    uStack_5c = 1;
    uStack_58 = 0;
    uStack_54 = 1;
    local_50 = 0;
    local_98 = L"StagedRead";
    local_b8 = CONCAT44(local_b8._4_4_,1);
    local_a0 = 0x10;
    local_b0 = CONCAT44(local_b0._4_4_,0x400);
    local_a8 = param_3 + 0x18;
    local_70 = uVar9;
    FUN_144a92ed0(*(longlong *)(param_1 + 0x120) + 0x13e8,3,local_80,0);
    *(uint *)(param_3 + 0x90) = param_5;
  }
  lVar1 = param_1 + -0x1c8;
  lVar4 = *(longlong *)(lVar8 + 0x88);
  uVar5 = *(undefined8 *)(lVar8 + 0xd8);
  lVar8 = *(longlong *)(param_3 + 0x28);
  uVar3 = *(undefined4 *)(param_3 + 0x78);
  local_88 = uVar9;
  if ((*(byte *)(lVar4 + 0xdf) & 1) != 0) {
    local_b8 = local_b8 & 0xffffffff00000000;
    FUN_144706208(lVar1,lVar4,0x7fffffff,0x800);
  }
  if (*(int *)(param_1 + -0x38) != 0) {
    lVar7 = *(longlong *)(param_1 + -0x30);
    local_90 = lVar8;
    if (lVar7 == 0) {
      (**(code **)(*(longlong *)(param_1 + -0x1c8) + 8))(lVar1);
      lVar7 = *(longlong *)(param_1 + -0x30);
    }
    FUN_144ad5b2c(param_1 + -0x40,lVar7,param_1 + -400);
    lVar8 = local_90;
  }
  lVar7 = *(longlong *)(param_1 + -0x30);
  if (lVar7 == 0) {
    (**(code **)(*(longlong *)(param_1 + -0x1c8) + 8))(lVar1);
    lVar7 = *(longlong *)(param_1 + -0x30);
  }
  *(int *)(lVar7 + 0x1c0) = *(int *)(lVar7 + 0x1c0) + 1;
  local_b8 = (ulonglong)(uint)((int)uVar5 + param_4);
  local_b0 = local_88;
  (**(code **)(**(longlong **)(lVar7 + 0x28) + 0x78))
            (*(longlong **)(lVar7 + 0x28),*(undefined8 *)(lVar8 + 0x20),uVar3,
             *(undefined8 *)(lVar4 + 0x20));
  lVar7 = *(longlong *)(param_1 + -0x30);
  if (lVar7 == 0) {
    (**(code **)(*(longlong *)(param_1 + -0x1c8) + 8))(lVar1);
    lVar7 = *(longlong *)(param_1 + -0x30);
  }
  FUN_1447093fc(lVar7,lVar8);
  lVar8 = *(longlong *)(param_1 + -0x30);
  if (lVar8 == 0) {
    (**(code **)(*(longlong *)(param_1 + -0x1c8) + 8))(lVar1);
    lVar8 = *(longlong *)(param_1 + -0x30);
  }
  FUN_1447093fc(lVar8,lVar4);
  if (((*(longlong *)(param_1 + -0x30) != 0) &&
      (0 < (int)DAT_14c760b84 && *(int *)(param_1 + -4) == 0)) &&
     (DAT_14c760b84 < *(uint *)(*(longlong *)(param_1 + -0x30) + 0x1c0))) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_d8);
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14315d1f0 FUN_14315d1f0 body=223 status=ok
// SIG undefined FUN_14315d1f0(void)

void FUN_14315d1f0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
                  undefined8 *param_5,char param_6)

{
  undefined1 auStack_3a8 [32];
  undefined8 *local_388;
  undefined4 local_378;
  undefined4 uStack_374;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined4 local_358;
  undefined4 uStack_354;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined1 local_338 [776];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_3a8;
  if (param_6 == '\0') {
    local_368 = *param_5;
    uStack_360 = param_5[1];
    local_388 = &local_368;
    local_378 = *param_4;
    uStack_374 = param_4[1];
    uStack_370 = param_4[2];
    uStack_36c = param_4[3];
    FUN_14317ec9c(param_1 + -0x1c8,param_2,param_3);
  }
  else {
    if (param_1 + -0x1c8 == 0) {
      param_1 = 0;
    }
    FUN_140048e76(local_338,param_1);
    local_348 = *param_5;
    uStack_340 = param_5[1];
    local_388 = &local_348;
    local_358 = *param_4;
    uStack_354 = param_4[1];
    uStack_350 = param_4[2];
    uStack_34c = param_4[3];
    FUN_147123eff(local_338,param_2,param_3);
    FUN_140048db6(local_338);
  }
  if ((local_30 ^ (ulonglong)auStack_3a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14315d2d0 FUN_14315d2d0 body=198 status=ok
// SIG undefined FUN_14315d2d0(void)

void FUN_14315d2d0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5,undefined8 *param_6,char param_7)

{
  longlong lVar1;
  undefined1 auStack_398 [32];
  undefined4 *local_378;
  undefined8 *local_370;
  undefined4 local_368;
  undefined4 uStack_364;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  undefined8 local_358;
  undefined8 uStack_350;
  undefined1 local_340 [776];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_398;
  if (param_7 != '\0') {
    lVar1 = 0;
    if (param_1 != 0x1c8) {
      lVar1 = param_1;
    }
    FUN_140048e76(local_340,lVar1);
    local_358 = *param_6;
    uStack_350 = param_6[1];
    local_370 = &local_358;
    local_368 = *param_5;
    uStack_364 = param_5[1];
    uStack_360 = param_5[2];
    uStack_35c = param_5[3];
    local_378 = &local_368;
    FUN_1471243fc(local_340,param_2,param_3,param_4);
    FUN_140048db6(local_340);
  }
  if ((local_38 ^ (ulonglong)auStack_398) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14315d398 FUN_14315d398 body=293 status=ok
// SIG undefined FUN_14315d398(void)

void FUN_14315d398(longlong param_1,undefined8 param_2,uint param_3)

{
  longlong *plVar1;
  int *piVar2;
  byte bVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  
  plVar1 = (longlong *)(param_1 + -0x1c8);
  lVar5 = *(longlong *)(param_1 + 8);
  uVar7 = *(uint *)(lVar5 + 0x17c);
  if (uVar7 != 0) {
    uVar6 = 0;
    if (uVar7 != 0) {
      for (; (uVar7 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
      }
    }
    do {
      piVar2 = (int *)(lVar5 + 0x248 + (ulonglong)uVar6 * 0x18);
      *piVar2 = *piVar2 + 1;
      bVar3 = (byte)uVar6 & 0x1f;
      uVar7 = (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3) & uVar7;
      if (uVar7 == 0) {
        uVar6 = 0x20;
      }
      else {
        uVar6 = 0;
        if (uVar7 != 0) {
          for (; (uVar7 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
          }
        }
      }
    } while (uVar7 != 0);
  }
  FUN_144ac8a60(plVar1,0,0,0);
  lVar4 = FUN_144ac4bac(plVar1,param_2,0);
  lVar5 = *(longlong *)(param_1 + -0x30);
  if (lVar5 == 0) {
    (**(code **)(*(longlong *)(param_1 + -0x1c8) + 8))(plVar1);
    lVar5 = *(longlong *)(param_1 + -0x30);
  }
  *(int *)(lVar5 + 0x1c0) = *(int *)(lVar5 + 0x1c0) + 1;
  (**(code **)(**(longlong **)(lVar5 + 0x28) + 0x1d8))
            (*(longlong **)(lVar5 + 0x28),
             *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x120) + 0x10) + 0x4b0),1,
             *(undefined8 *)(*(longlong *)(lVar4 + 0x10) + 0x20),
             (ulonglong)param_3 + *(longlong *)(lVar4 + 0x60),0,0);
  if (((*(longlong *)(param_1 + -0x30) != 0) &&
      (0 < (int)DAT_14c760b84 && *(int *)(param_1 + -4) == 0)) &&
     (DAT_14c760b84 < *(uint *)(*(longlong *)(param_1 + -0x30) + 0x1c0))) {
                    /* WARNING: Could not recover jumptable at 0x00014315d4ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))(plVar1);
    return;
  }
  return;
}



// FUNCTION 14315d4be FUN_14315d4be body=309 status=ok
// SIG undefined FUN_14315d4be(void)

void FUN_14315d4be(longlong param_1,undefined8 param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  int *piVar2;
  byte bVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  
  plVar1 = (longlong *)(param_1 + -0x1c8);
  lVar5 = *(longlong *)(param_1 + 8);
  uVar7 = *(uint *)(lVar5 + 0x17c);
  if (uVar7 != 0) {
    uVar6 = 0;
    if (uVar7 != 0) {
      for (; (uVar7 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
      }
    }
    do {
      piVar2 = (int *)(lVar5 + 0x248 + (ulonglong)uVar6 * 0x18);
      *piVar2 = *piVar2 + 1;
      bVar3 = (byte)uVar6 & 0x1f;
      uVar7 = (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3) & uVar7;
      if (uVar7 == 0) {
        uVar6 = 0x20;
      }
      else {
        uVar6 = 0;
        if (uVar7 != 0) {
          for (; (uVar7 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
          }
        }
      }
    } while (uVar7 != 0);
  }
  FUN_144ac8a60(plVar1,param_2,1,0);
  lVar4 = FUN_144ac4bac(plVar1,param_3,0);
  lVar5 = *(longlong *)(param_1 + -0x30);
  if (lVar5 == 0) {
    (**(code **)(*(longlong *)(param_1 + -0x1c8) + 8))(plVar1);
    lVar5 = *(longlong *)(param_1 + -0x30);
  }
  *(int *)(lVar5 + 0x1c0) = *(int *)(lVar5 + 0x1c0) + 1;
  (**(code **)(**(longlong **)(lVar5 + 0x28) + 0x1d8))
            (*(longlong **)(lVar5 + 0x28),
             *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x120) + 0x10) + 0x4b8),1,
             *(undefined8 *)(*(longlong *)(lVar4 + 0x10) + 0x20),
             (ulonglong)(uint)(param_4 * *(int *)(param_3 + 0x24)) + *(longlong *)(lVar4 + 0x60),0,0
            );
  if (((*(longlong *)(param_1 + -0x30) != 0) &&
      (0 < (int)DAT_14c760b84 && *(int *)(param_1 + -4) == 0)) &&
     (DAT_14c760b84 < *(uint *)(*(longlong *)(param_1 + -0x30) + 0x1c0))) {
                    /* WARNING: Could not recover jumptable at 0x00014315d5e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))(plVar1);
    return;
  }
  return;
}



// FUNCTION 14315d5f4 FUN_14315d5f4 body=168 status=ok
// SIG undefined FUN_14315d5f4(void)

void FUN_14315d5f4(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)(param_1 + -0x1c8);
  FUN_1448db53e(plVar1);
  lVar2 = *(longlong *)(param_1 + -0x30);
  if (lVar2 == 0) {
    (**(code **)(*(longlong *)(param_1 + -0x1c8) + 8))(plVar1);
    lVar2 = *(longlong *)(param_1 + -0x30);
  }
  *(int *)(lVar2 + 0x1c0) = *(int *)(lVar2 + 0x1c0) + 1;
  (**(code **)(**(longlong **)(lVar2 + 0x58) + 0x278))
            (*(longlong **)(lVar2 + 0x58),param_2,param_3,param_4);
  if (*(longlong *)(param_1 + -0x30) != 0) {
    if ((0 < (int)DAT_14c760b84 && *(int *)(param_1 + -4) == 0) &&
       (DAT_14c760b84 < *(uint *)(*(longlong *)(param_1 + -0x30) + 0x1c0))) {
                    /* WARNING: Could not recover jumptable at 0x00014315d68c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x10))(plVar1);
      return;
    }
  }
  return;
}



// FUNCTION 14315d6a5 FUN_14315d6a5 body=153 status=ok
// SIG undefined FUN_14315d6a5(void)

void FUN_14315d6a5(longlong param_1,byte param_2,uint param_3,longlong param_4)

{
  ushort *puVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  
  uVar4 = (ulonglong)param_3;
  plVar3 = (longlong *)((ulonglong)param_2 * 0x80 + param_1 + uVar4 * 8 + 0x23b8);
  if ((param_4 == 0) || (lVar2 = *(longlong *)(param_4 + 0xd8), lVar2 == 0)) {
    if (*plVar3 == 0) goto LAB_14315d717;
    *plVar3 = 0;
    uVar5 = 0;
  }
  else {
    if (lVar2 == *plVar3) goto LAB_14315d717;
    *plVar3 = lVar2;
    uVar5 = *(undefined8 *)(param_4 + 0x90);
  }
  *(undefined8 *)((ulonglong)param_2 * 0x80 + param_1 + 0x26b8 + uVar4 * 8) = uVar5;
  puVar1 = (ushort *)(param_1 + 0x23a8 + (ulonglong)param_2 * 2);
  *puVar1 = *puVar1 | (ushort)(1 << ((byte)param_3 & 0x1f));
LAB_14315d717:
  *(longlong *)((ulonglong)param_2 * 0x80 + param_1 + 0x38a0 + uVar4 * 8) = param_4;
  puVar1 = (ushort *)(param_1 + 0x3ba0 + (ulonglong)param_2 * 2);
  *puVar1 = *puVar1 | (ushort)(1 << ((byte)param_3 & 0x1f));
  return;
}



// FUNCTION 14315d73e FUN_14315d73e body=158 status=ok
// SIG undefined FUN_14315d73e(void)

void FUN_14315d73e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  byte bVar2;
  undefined8 uVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  
  uVar6 = *(uint *)(param_1 + 0x18) & *(uint *)(param_2 + 0x17c);
  if (uVar6 != 0) {
    uVar4 = 0;
    if (uVar6 != 0) {
      for (; (uVar6 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
      }
    }
    lVar1 = *(longlong *)(param_1 + 0x10);
    do {
      uVar3 = (**(code **)(**(longlong **)(param_2 + 0x40) + 0x278))
                        (*(longlong **)(param_2 + 0x40),uVar4);
      if (lVar1 == 0) {
        lVar5 = 0;
      }
      else {
        lVar5 = *(longlong *)(lVar1 + 0xf8 + (ulonglong)uVar4 * 8);
      }
      FUN_14315b796(uVar3,*(undefined4 *)(param_1 + 0x1c),lVar5 + 0x78,param_1 + 0x20,
                    *(undefined4 *)(lVar1 + 0x20));
      bVar2 = (byte)uVar4 & 0x1f;
      uVar6 = uVar6 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
      if (uVar6 == 0) {
        uVar4 = 0x20;
      }
      else {
        uVar4 = 0;
        if (uVar6 != 0) {
          for (; (uVar6 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
          }
        }
      }
    } while (uVar6 != 0);
  }
  FUN_144902b9c(param_1 + 0x20);
  return;
}



// FUNCTION 14315d7dc FUN_14315d7dc body=2041 status=ok
// SIG undefined FUN_14315d7dc(void)

void FUN_14315d7dc(longlong *param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  byte bVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  uint uVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  undefined8 uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  uint uVar16;
  undefined8 uVar17;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  longlong local_78;
  LPCRITICAL_SECTION local_70;
  undefined8 *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca769d4) && (FUN_144b3d300(&DAT_14ca769d4), DAT_14ca769d4 == -1)) {
    local_68 = (undefined8 *)CONCAT44(local_68._4_4_,0x26);
    FUN_14577453c(L"FRHICommandRenameUploadBuffer::Execute");
    _Init_thread_footer(&DAT_14ca769d4);
  }
  lVar9 = *param_1;
  if (lVar9 != -0xf0) {
    uVar16 = *(uint *)(lVar9 + 0xf0);
    if (uVar16 == 0) {
      uVar8 = 0x20;
    }
    else {
      uVar8 = 0;
      if (uVar16 != 0) {
        for (; (uVar16 >> uVar8 & 1) == 0; uVar8 = uVar8 + 1) {
        }
      }
    }
    lVar14 = *(longlong *)(lVar9 + 0xf8 + (ulonglong)uVar8 * 8);
    if (lVar14 != 0) {
      uVar17 = CONCAT44(uVar8,uVar16);
      local_80 = param_1;
      do {
        lVar9 = 0;
        do {
          plVar2 = *(longlong **)(param_2 + lVar9);
          if ((plVar2 != (longlong *)0x0) &&
             (lVar5 = (**(code **)(*plVar2 + 0x278))
                                (plVar2,*(undefined4 *)(*(longlong *)(lVar14 + 0x38) + 8)),
             lVar5 != 0)) {
            iVar10 = 0;
            local_68 = (undefined8 *)(lVar14 + 0x78);
            do {
              FUN_14003a378(lVar5 + 0x390,iVar10,&local_68,8);
              iVar10 = iVar10 + 1;
            } while (iVar10 != 6);
          }
          lVar9 = lVar9 + 8;
        } while (lVar9 != 0x10);
        bVar4 = (byte)((ulonglong)uVar17 >> 0x20) & 0x1f;
        uVar16 = (uint)uVar17 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
        if (uVar16 == 0) break;
        uVar8 = 0;
        if (uVar16 != 0) {
          for (; (uVar16 >> uVar8 & 1) == 0; uVar8 = uVar8 + 1) {
          }
        }
        lVar14 = *(longlong *)(lVar14 + 0xf8 + (ulonglong)uVar8 * 8);
        uVar17 = CONCAT44(uVar8,uVar16);
      } while (lVar14 != 0);
      lVar9 = *local_80;
      param_1 = local_80;
    }
  }
  local_80 = (longlong *)(lVar9 + 0x78);
  uVar17 = *(undefined8 *)(lVar9 + 0x80);
  lVar14 = param_1[2];
  switch(*(undefined1 *)(lVar9 + 0xe8)) {
  case 1:
    FUN_1400dafd4(local_80,0);
    if ((DAT_14c760da4 < 2) || (*(uint *)(*(longlong *)(lVar9 + 0x88) + 8) < 2))
    goto switchD_14315d93e_caseD_7;
    puVar7 = *(undefined8 **)(lVar9 + 0x88);
    goto LAB_14315ddd8;
  case 2:
    if (*(char *)(lVar9 + 0xe9) == '\x02') {
      while (*(longlong *)(lVar9 + 0xb8) != 0) {
        FUN_1471254ee();
      }
      (**(code **)(**(longlong **)(lVar9 + 0x90) + 0x18))(*(longlong **)(lVar9 + 0x90),local_80,0);
    }
    else {
      local_78 = lVar14;
      if (*(char *)(lVar9 + 0xe9) == '\x01') {
        FUN_14315ac40(*(undefined8 *)(lVar9 + 0x90),*(undefined8 *)(lVar9 + 0x88),
                      *(undefined4 *)(lVar9 + 0x98),*(undefined4 *)(lVar9 + 0xe0));
        lVar14 = local_78;
      }
      else {
        plVar2 = *(longlong **)(lVar9 + 0x90);
        local_70 = (LPCRITICAL_SECTION)(plVar2 + 7);
        EnterCriticalSection(local_70);
        lVar14 = *(longlong *)(*(longlong *)(*plVar2 + 0x10) + 0x538);
        iVar10 = (int)plVar2[0x14];
        *(uint *)(plVar2 + 0x14) = iVar10 + 1U;
        if (*(uint *)((longlong)plVar2 + 0xa4) < iVar10 + 1U) {
          FUN_14021dbb8(plVar2 + 0x13,iVar10);
        }
        lVar5 = plVar2[0x13];
        lVar15 = (longlong)iVar10 * 0x20;
        puVar7 = (undefined8 *)(lVar5 + 0x10 + lVar15);
        *puVar7 = 0;
        puVar7[1] = 0;
        *(undefined8 *)(lVar5 + lVar15) = 0;
        ((undefined8 *)(lVar5 + lVar15))[1] = 0;
        uVar6 = (longlong)*(int *)(lVar14 + 0x58) + 1;
        *(ulonglong *)(lVar5 + 8 + lVar15) = uVar6;
        *(undefined4 *)(lVar5 + 0x14 + lVar15) = *(undefined4 *)(lVar9 + 0x9c);
        *(undefined4 *)(lVar5 + 0x10 + lVar15) = *(undefined4 *)(lVar9 + 0x98);
        *(undefined4 *)(lVar5 + 0x18 + lVar15) = *(undefined4 *)(lVar9 + 0xe0);
        if (uVar6 <= (ulonglong)plVar2[0x17]) {
          uVar6 = plVar2[0x17];
        }
        plVar2[0x17] = uVar6;
        if (*(longlong *)(*(longlong *)(lVar9 + 0x88) + 0x30) != 0) {
          *(longlong *)(lVar5 + lVar15) = *(longlong *)(lVar9 + 0x88);
        }
        *(int *)(plVar2 + 0xd) = (int)plVar2[0xd] + 1;
        LeaveCriticalSection(local_70);
        lVar14 = local_78;
      }
    }
    break;
  case 5:
  case 6:
    if (*(char *)(lVar9 + 0xe9) == '\x02') {
      FUN_1471254ee(lVar9 + 0x98);
    }
    puVar7 = *(undefined8 **)(lVar9 + 0x88);
    if (((*(byte *)((longlong)puVar7 + 0xdf) & 8) == 0) ||
       (piVar1 = (int *)(puVar7 + 1), puVar7 = *(undefined8 **)(lVar9 + 0x88), *piVar1 != 1))
    goto LAB_14315ddd8;
LAB_14315dcc4:
    local_68 = puVar7;
    FUN_14021db38(DAT_14ca77418);
    break;
  case 7:
switchD_14315d93e_caseD_7:
    puVar7 = *(undefined8 **)(lVar9 + 0x88);
    if ((*(byte *)((longlong)puVar7 + 0xdf) & 8) != 0) goto LAB_14315dcc4;
LAB_14315ddd8:
    LOCK();
    piVar1 = (int *)(puVar7 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (puVar7 != (undefined8 *)0x0 && *piVar1 == 0) {
      (**(code **)*puVar7)(puVar7,1);
    }
  }
  *(undefined8 *)(lVar9 + 0xd8) = 0;
  *(undefined8 *)(lVar9 + 0xe0) = 0;
  *(undefined8 *)(lVar9 + 200) = 0;
  *(undefined8 *)(lVar9 + 0xd0) = 0;
  *(undefined8 *)(lVar9 + 0xb8) = 0;
  *(undefined8 *)(lVar9 + 0xc0) = 0;
  *(undefined8 *)(lVar9 + 0xa8) = 0;
  *(undefined8 *)(lVar9 + 0xb0) = 0;
  *(undefined8 *)(lVar9 + 0x98) = 0;
  *(undefined8 *)(lVar9 + 0xa0) = 0;
  *(undefined8 *)(lVar9 + 0x88) = 0;
  *(undefined8 *)(lVar9 + 0x90) = 0;
  *(undefined2 *)(lVar9 + 0xe8) = 0xff00;
  memmove(local_80,param_1 + 1,0x78);
  if (*(char *)((longlong)param_1 + 0x79) == '\x02') {
    lVar15 = param_1[4];
    EnterCriticalSection((LPCRITICAL_SECTION)(lVar15 + 0x28));
    lVar5 = lVar9 + 0x98;
    uVar16 = 0;
    if ((*(byte *)((longlong)param_1 + 0x36) & 0x10) != 0) {
      uVar16 = 0x100000;
      if ((longlong)*(int *)(lVar15 + 200) != 0) {
        lVar13 = 0;
        do {
          if (*(longlong **)(*(longlong *)(lVar15 + 0xc0) + 0x18 + lVar13) == param_1 + 5) {
            *(longlong *)(*(longlong *)(lVar15 + 0xc0) + 0x18 + lVar13) = lVar5;
            uVar16 = *(uint *)((longlong)param_1 + 0x34) & 0x100000;
            break;
          }
          lVar13 = lVar13 + 0x20;
        } while ((longlong)*(int *)(lVar15 + 200) * 0x20 != lVar13);
      }
    }
    *(undefined8 *)(lVar9 + 0x98) = 0;
    *(undefined4 *)(lVar9 + 0xa0) = 0;
    uVar8 = *(uint *)(lVar9 + 0xa4) & 0xffe00000;
    *(uint *)(lVar9 + 0xa4) = uVar8 + 0xffff;
    *(undefined8 *)(lVar9 + 0xa8) = 0;
    *(undefined8 *)(lVar9 + 0xb0) = 0;
    *(undefined8 *)(lVar9 + 0xb8) = 0;
    *(undefined8 *)(lVar9 + 0xc0) = 0;
    *(int *)(lVar9 + 0x98) = (int)param_1[5];
    *(undefined4 *)(lVar9 + 0x9c) = *(undefined4 *)((longlong)param_1 + 0x2c);
    uVar11 = *(uint *)((longlong)param_1 + 0x34) & 0xf0000;
    *(uint *)(lVar9 + 0xa4) = uVar11 + uVar8 + 0xffff;
    *(int *)(lVar9 + 0xa0) = (int)param_1[6];
    *(uint *)(lVar9 + 0xa4) = *(ushort *)((longlong)param_1 + 0x34) | uVar16 | uVar8 | uVar11;
    plVar2 = param_1 + 7;
    if (param_1[7] == 0) {
      lVar13 = param_1[9];
      if (lVar13 != 0) {
        lVar3 = param_1[8];
        *(longlong *)(lVar13 + 0x20) = lVar3;
        if (lVar3 != 0) {
          *(longlong *)(lVar3 + 0x10) = *plVar2;
        }
        *plVar2 = 0;
        param_1[8] = 0;
        param_1[9] = 0;
      }
      if (*(longlong *)(lVar13 + 0x20) == 0) {
        uVar12 = 0;
      }
      else {
        *(longlong *)(*(longlong *)(lVar13 + 0x20) + 0x10) = lVar5;
        uVar12 = *(undefined8 *)(lVar13 + 0x20);
      }
      *(undefined8 *)(lVar9 + 0xb0) = uVar12;
      *(undefined8 *)(lVar9 + 0xa8) = 0;
      *(longlong *)(lVar9 + 0xb8) = lVar13;
      *(longlong *)(lVar13 + 0x20) = lVar5;
    }
    else {
      *(longlong *)(param_1[7] + 0x18) = lVar5;
      *(longlong *)(param_1[8] + 0x10) = lVar5;
      *(longlong *)(lVar9 + 0xa8) = param_1[7];
      *(longlong *)(lVar9 + 0xb0) = param_1[8];
      lVar13 = param_1[9];
      if (lVar13 == 0) {
        lVar5 = 0;
      }
      else {
        do {
          *(longlong *)(lVar13 + 0x20) = lVar5;
          lVar13 = *(longlong *)(lVar13 + 0x18);
        } while (lVar13 != 0);
        lVar5 = param_1[9];
      }
      *(longlong *)(lVar9 + 0xb8) = lVar5;
    }
    param_1[5] = 0;
    *(undefined4 *)(param_1 + 6) = 0;
    *(uint *)((longlong)param_1 + 0x34) = *(uint *)((longlong)param_1 + 0x34) & 0xffe00000 | 0xffff;
    param_1[9] = 0;
    param_1[10] = 0;
    *plVar2 = 0;
    param_1[8] = 0;
    *(longlong **)(lVar9 + 0xc0) = local_80;
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar15 + 0x28));
  }
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined2 *)(param_1 + 0xf) = 0xff00;
  *(undefined8 *)(lVar9 + 0x80) = uVar17;
  param_1[2] = lVar14;
  EnterCriticalSection((LPCRITICAL_SECTION)(lVar9 + 0x40));
  iVar10 = *(int *)(lVar9 + 0x70);
  if ((longlong)iVar10 != 0) {
    lVar14 = *(longlong *)(lVar9 + 0x68);
    lVar5 = 0;
    do {
      puVar7 = *(undefined8 **)(lVar14 + lVar5);
      if (*(code **)*puVar7 == FUN_1456d2f2e) {
        FUN_1456d2f2e(puVar7,param_2,lVar9 + 0x30,local_80);
      }
      else {
        (**(code **)*puVar7)(puVar7,param_2,lVar9 + 0x30,local_80);
      }
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar10 * 8 != lVar5);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(lVar9 + 0x40));
  if ((1 < DAT_14c760da4) && ((*(byte *)(lVar9 + 0x2a) & 2) == 0)) {
    uVar16 = *(uint *)(lVar9 + 0xf0);
    if (uVar16 == 0) {
      uVar8 = 0x20;
    }
    else {
      uVar8 = 0;
      if (uVar16 != 0) {
        for (; (uVar16 >> uVar8 & 1) == 0; uVar8 = uVar8 + 1) {
        }
      }
    }
    bVar4 = (byte)uVar8 & 0x1f;
    uVar16 = uVar16 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
    if (uVar16 != 0) {
      uVar11 = 0;
      if (uVar16 != 0) {
        for (; (uVar16 >> uVar11 & 1) == 0; uVar11 = uVar11 + 1) {
        }
      }
      lVar9 = *(longlong *)
               (*(longlong *)(lVar9 + 0xf8 + (ulonglong)uVar8 * 8) + 0xf8 + (ulonglong)uVar11 * 8);
      if (lVar9 != 0) {
        uVar17 = CONCAT44(uVar11,uVar16);
        do {
          FUN_14737f7b6(*(undefined8 *)(lVar9 + 0x38),lVar9 + 0x78,local_80);
          EnterCriticalSection((LPCRITICAL_SECTION)(lVar9 + 0x40));
          iVar10 = *(int *)(lVar9 + 0x70);
          if ((longlong)iVar10 != 0) {
            local_78 = lVar9 + 0x30;
            lVar14 = *(longlong *)(lVar9 + 0x68);
            lVar5 = 0;
            do {
              puVar7 = *(undefined8 **)(lVar14 + lVar5);
              (**(code **)*puVar7)(puVar7,param_2,local_78,lVar9 + 0x78);
              lVar5 = lVar5 + 8;
            } while ((longlong)iVar10 * 8 != lVar5);
          }
          LeaveCriticalSection((LPCRITICAL_SECTION)(lVar9 + 0x40));
          bVar4 = (byte)((ulonglong)uVar17 >> 0x20) & 0x1f;
          uVar16 = (uint)uVar17 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
          if (uVar16 == 0) break;
          uVar8 = 0;
          if (uVar16 != 0) {
            for (; (uVar16 >> uVar8 & 1) == 0; uVar8 = uVar8 + 1) {
            }
          }
          lVar9 = *(longlong *)(lVar9 + 0xf8 + (ulonglong)uVar8 * 8);
          uVar17 = CONCAT44(uVar8,uVar16);
        } while (lVar9 != 0);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14315dfd6 FUN_14315dfd6 body=142 status=ok
// SIG undefined FUN_14315dfd6(void)

void FUN_14315dfd6(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  byte bVar2;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  uStack_20 = 0;
  for (bVar2 = *(byte *)(param_1 + 0x90); bVar2 != 0; bVar2 = bVar2 - 1 & bVar2) {
    uVar1 = (ulonglong)((-bVar2 & bVar2) == 2);
    (&local_28)[uVar1] = *(undefined8 *)(param_2 + 0x50 + uVar1 * 8);
  }
  local_28._4_4_ = (undefined4)((ulonglong)local_28 >> 0x20);
  uStack_20._4_4_ = (undefined4)((ulonglong)uStack_20 >> 0x20);
  local_38 = (undefined4)local_28;
  uStack_34 = local_28._4_4_;
  uStack_30 = (undefined4)uStack_20;
  uStack_2c = uStack_20._4_4_;
  FUN_14315d7dc(param_1 + 0x10);
  FUN_144902b9c(param_1 + 0x18);
  if ((local_10 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14315e066 FUN_14315e066 body=381 status=ok
// SIG undefined FUN_14315e066(void)

void FUN_14315e066(uint *param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined8 local_60;
  undefined1 local_58 [40];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar1 = *param_1;
  if (uVar1 == 0) {
    iVar4 = 0x20;
  }
  else {
    iVar4 = 0;
    if (uVar1 != 0) {
      for (; (uVar1 >> iVar4 & 1) == 0; iVar4 = iVar4 + 1) {
      }
    }
  }
  plVar5 = (longlong *)
           (**(code **)(**(longlong **)(param_2 + 0x40) + 0x278))
                     (*(longlong **)(param_2 + 0x40),iVar4);
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 6) + 0xd8);
  local_60 = (ulonglong)local_60._4_4_ << 0x20;
  local_68 = CONCAT44(local_68._4_4_,0x800);
  FUN_144abd48c(local_58,plVar5,*(undefined8 *)(param_1 + 4),*(longlong *)(param_1 + 6) + 0x78);
  if ((int)plVar5[0x32] != 0) {
    lVar6 = plVar5[0x33];
    if (lVar6 == 0) {
      (**(code **)(*plVar5 + 8))(plVar5);
      lVar6 = plVar5[0x33];
    }
    FUN_144ad5b2c(plVar5 + 0x31,lVar6,plVar5 + 7);
  }
  uVar3 = *(undefined8 *)(param_1 + 2);
  lVar6 = plVar5[0x33];
  if (lVar6 == 0) {
    (**(code **)(*plVar5 + 8))(plVar5);
    lVar6 = plVar5[0x33];
  }
  FUN_1447093fc(lVar6,uVar3);
  uVar3 = *(undefined8 *)(param_1 + 4);
  lVar6 = plVar5[0x33];
  if (lVar6 == 0) {
    (**(code **)(*plVar5 + 8))(plVar5);
    lVar6 = plVar5[0x33];
  }
  FUN_1447093fc(lVar6,uVar3);
  lVar6 = plVar5[0x33];
  if (lVar6 == 0) {
    (**(code **)(*plVar5 + 8))(plVar5);
    lVar6 = plVar5[0x33];
  }
  *(int *)(lVar6 + 0x1c0) = *(int *)(lVar6 + 0x1c0) + 1;
  local_60 = (ulonglong)param_1[9];
  local_68 = lVar2 + (ulonglong)param_1[8];
  (**(code **)(**(longlong **)(lVar6 + 0x28) + 0x78))
            (*(longlong **)(lVar6 + 0x28),*(undefined8 *)(*(longlong *)(param_1 + 2) + 0x20),0,
             *(undefined8 *)(*(longlong *)(param_1 + 4) + 0x20));
  FUN_144ac1896(local_58);
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14315e1ee FUN_14315e1ee body=656 status=ok
// SIG undefined FUN_14315e1ee(void)

void FUN_14315e1ee(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined1 auStack_d8 [32];
  ulonglong local_b8;
  ulonglong local_b0;
  int local_9c;
  longlong *local_98;
  longlong local_90;
  undefined8 local_88;
  longlong local_80;
  ulonglong local_78;
  longlong local_70 [5];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar10 = *param_1;
  local_90 = param_2;
  if (lVar10 != -0xf0) {
    uVar8 = *(uint *)(lVar10 + 0xf0);
    if (uVar8 == 0) {
      uVar6 = 0x20;
    }
    else {
      uVar6 = 0;
      if (uVar8 != 0) {
        for (; (uVar8 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
        }
      }
    }
    lVar10 = *(longlong *)(lVar10 + 0xf8 + (ulonglong)uVar6 * 8);
    if (lVar10 != 0) {
      uVar9 = CONCAT44(uVar6,uVar8);
      local_98 = param_1;
      do {
        plVar4 = (longlong *)
                 (**(code **)(**(longlong **)(local_90 + 0x40) + 0x278))
                           (*(longlong **)(local_90 + 0x40),
                            *(undefined4 *)(*(longlong *)(lVar10 + 0x38) + 8));
        local_80 = param_1[4];
        local_78 = (ulonglong)*(uint *)(param_1 + 0xe);
        lVar1 = *(longlong *)(lVar10 + 0x88);
        local_88 = *(undefined8 *)(lVar10 + 0xd8);
        local_9c = *(int *)((longlong)param_1 + 0x9c);
        iVar7 = 0;
        local_70[0] = lVar10 + 0x78;
        do {
          FUN_14003a378(plVar4 + 0x72,iVar7,local_70,8);
          iVar7 = iVar7 + 1;
        } while (iVar7 != 6);
        local_b0 = local_b0 & 0xffffffff00000000;
        local_b8 = CONCAT44(local_b8._4_4_,0x400);
        FUN_144abd48c(local_70,plVar4,lVar1,lVar10 + 0x78);
        lVar3 = local_80;
        param_1 = local_98;
        if ((int)plVar4[0x32] != 0) {
          lVar5 = plVar4[0x33];
          if (lVar5 == 0) {
            (**(code **)(*plVar4 + 8))(plVar4);
            lVar5 = plVar4[0x33];
          }
          FUN_144ad5b2c(plVar4 + 0x31,lVar5,plVar4 + 7);
        }
        lVar5 = plVar4[0x33];
        if (lVar5 == 0) {
          (**(code **)(*plVar4 + 8))(plVar4);
          lVar5 = plVar4[0x33];
        }
        FUN_1447093fc(lVar5,lVar1);
        lVar5 = plVar4[0x33];
        if (lVar5 == 0) {
          (**(code **)(*plVar4 + 8))(plVar4);
          lVar5 = plVar4[0x33];
        }
        FUN_1447093fc(lVar5,lVar3);
        lVar5 = plVar4[0x33];
        if (lVar5 == 0) {
          (**(code **)(*plVar4 + 8))(plVar4);
          lVar5 = plVar4[0x33];
        }
        *(int *)(lVar5 + 0x1c0) = *(int *)(lVar5 + 0x1c0) + 1;
        local_b0 = (ulonglong)*(uint *)(param_1 + 0x14);
        local_b8 = local_78;
        (**(code **)(**(longlong **)(lVar5 + 0x28) + 0x78))
                  (*(longlong **)(lVar5 + 0x28),*(undefined8 *)(lVar1 + 0x20),
                   local_9c + (int)local_88,*(undefined8 *)(lVar3 + 0x20));
        if (((plVar4[0x33] != 0) &&
            (0 < (int)DAT_14c760b84 && *(int *)((longlong)plVar4 + 0x1c4) == 0)) &&
           (DAT_14c760b84 < *(uint *)(plVar4[0x33] + 0x1c0))) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
        FUN_144ac1896(local_70);
        bVar2 = (byte)((ulonglong)uVar9 >> 0x20) & 0x1f;
        uVar8 = (uint)uVar9 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
        if (uVar8 == 0) break;
        uVar6 = 0;
        if (uVar8 != 0) {
          for (; (uVar8 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
          }
        }
        lVar10 = *(longlong *)(lVar10 + 0xf8 + (ulonglong)uVar6 * 8);
        uVar9 = CONCAT44(uVar6,uVar8);
      } while (lVar10 != 0);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14315e480 FUN_14315e480 body=34 status=ok
// SIG undefined FUN_14315e480(void)

void FUN_14315e480(longlong param_1)

{
  FUN_14315e1ee(param_1 + 0x10);
  FUN_144902b9c(param_1 + 0x20);
  return;
}



// FUNCTION 14315e4a2 FUN_14315e4a2 body=450 status=ok
// SIG undefined FUN_14315e4a2(void)

void FUN_14315e4a2(undefined8 *param_1,uint param_2)

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
    FUN_1456bc5fe(uVar3,0x10);
  }
  _Src = (void *)*param_1;
  if (param_2 == 0) {
    _Dst = (void *)0x0;
    if (_Src != (void *)0x0) {
LAB_14315e5bd:
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
LAB_14315e5fa:
    *param_1 = _Dst;
    return;
  }
  _Size = uVar3 * 0x10;
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xde8);
  puVar4 = (uint *)*puVar1;
  if (puVar4 != (uint *)0x0) goto LAB_14315e4f8;
LAB_14315e4ed:
  FUN_144769a66(puVar1);
  puVar4 = (uint *)*puVar1;
LAB_14315e4f8:
  _Dst = (void *)(*(longlong *)(puVar4 + 0x10) + 7U & 0xfffffffffffffff8);
  puVar6 = (uint *)((longlong)_Dst + _Size);
  if (puVar4 + 0x4000 < puVar6) {
    if (param_2 < 0xffb) goto code_r0x00014315e524;
    puVar4 = (uint *)FUN_14472e5b2(_Size + 0x60,8);
    *puVar4 = 0xffffffff;
    puVar4[0x12] = 0;
    _Dst = (void *)((longlong)puVar4 + 0x5fU & 0xfffffffffffffff8);
    *(uint **)(puVar4 + 0x10) = puVar4 + uVar3 * 4 + 0x18;
    *puVar4 = 1;
  }
  else {
    uVar7 = puVar4[0x12] + 1;
LAB_14315e57a:
    *(uint **)(puVar4 + 0x10) = puVar6 + 2;
    puVar4[0x12] = uVar7;
  }
  *(int *)((longlong)_Dst + -8) = ((int)_Dst + -8) - (int)puVar4;
  *(int *)((longlong)_Dst + -4) = (int)_Size;
  if (_Src == (void *)0x0) goto LAB_14315e5fa;
  uVar3 = (ulonglong)*(uint *)((longlong)_Src + -4);
  if (uVar3 != 0) {
    if (uVar3 < _Size) {
      _Size = uVar3;
    }
    memcpy(_Dst,_Src,_Size);
  }
  goto LAB_14315e5bd;
code_r0x00014315e524:
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
      goto LAB_14315e57a;
    }
  }
  goto LAB_14315e4ed;
}



// FUNCTION 14315e664 FUN_14315e664 body=1816 status=ok
// SIG undefined FUN_14315e664(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14315e664(void)

{
  char cVar1;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1400b22c2(&local_38,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_38,&DAT_14ca76708);
  if (cVar1 == '\0') {
    _DAT_14ca76708 = 0;
    uRam000000014ca76710 = 0;
  }
  if (CONCAT44(uStack_34,local_38) != 0) {
    FUN_1400020a8();
  }
  local_38 = 1;
  local_48 = 4;
  FUN_14078dbce(&DAT_14ca76718,L"D3D12.ResidencyManagement",&local_38,
                L"Controls whether D3D12 resource residency management is active (default = on).");
  atexit(FUN_14315778c);
  local_48 = 0x24;
  FUN_141471170(&DAT_14ca76730,L"r.D3D12.AllowAsyncCompute",&DAT_14c760b24,
                L"Allow usage of async compute");
  atexit(FUN_1431577d1);
  local_38 = 0;
  local_48 = 0x24;
  FUN_14078dbce(&DAT_14ca769e0,L"r.D3D12.EnableD3DDebug",&local_38,
                L"0 to disable d3ddebug layer (default)\n1 to enable error logging (-d3ddebug) \n2 to enable error & warning logging (-d3dlogwarnings)\n3 to enable breaking on errors & warnings (-d3dbreakonwarning)\n4 to enable CONTINUING on errors (-d3dcontinueonerrors)\n"
               );
  atexit(FUN_143157816);
  local_38 = 0;
  local_48 = 0x24;
  FUN_14078dbce(&DAT_14ca76740,L"r.D3D12.DRED",&local_38,
                L"Enable DRED GPU Crash debugging mode to track the current GPU state and logs information what operations the GPU executed last.Has GPU overhead but gives the most information on the current GPU state when it crashes or hangs.\n"
               );
  atexit(FUN_14315785b);
  local_38 = 0;
  local_48 = 0x24;
  FUN_14078dbce(&DAT_14ca76758,L"r.D3D12.LightweightDRED",&local_38,
                L"Enable Lightweight DRED GPU Crash debugging mode to track the current GPU state and logs information what operations the GPU executed last.Gives the basic information on the current GPU state when it crashes or hangs on all PC hardware.\n"
               );
  atexit(FUN_1431578a0);
  local_38 = 0;
  local_48 = 4;
  FUN_14078dbce(&DAT_14ca76770,L"D3D12.TrackAllAllocations",&local_38,
                L"Controls whether D3D12 RHI should track all allocation information (default = off)."
               );
  atexit(FUN_1431578e5);
  local_48 = 0;
  FUN_14153156c(&DAT_14ca76790,L"D3D12.EvictAllResidentResourcesInBackground",&DAT_14ca76788,
                L"Force D3D12 resource residency manager to evict all tracked unused resources when the application is not focused\n"
               );
  atexit(FUN_14315792a);
  local_48 = 4;
  FUN_141471170(&DAT_14ca767c8,L"d3d12.AllowPoolAllocateIndirectArgBuffers",&DAT_14c760b28,
                L"Allow indirect args to be pool allocated (otherwise they will be committed resources) (default: 0)"
               );
  atexit(FUN_14315a589);
  local_48 = 4;
  FUN_141471170(&DAT_14ca767d8,L"d3d12.ReadOnlyTextureAllocator.MinPoolSize",&DAT_14c760b2c,
                L"Minimum allocation granularity (in bytes) of each size list");
  atexit(FUN_14315a5ce);
  local_48 = 4;
  FUN_141471170(&DAT_14ca767e8,L"d3d12.ReadOnlyTextureAllocator.MinNumToPool",&DAT_14c760b30,
                L"Texture pool of each size list must be large enough to store thismany textures unless constrained by maximum allocation granularity"
               );
  atexit(FUN_14315a613);
  local_48 = 4;
  FUN_141471170(&DAT_14ca767f8,L"d3d12.ReadOnlyTextureAllocator.MaxPoolSize",&DAT_14c760b34,
                L"Maximum allocation granularity (in bytes) of each size list");
  atexit(FUN_14315a658);
  local_48 = 4;
  FUN_141471170(&DAT_14ca76808,L"d3d12.VRAMBufferPoolDefrag",&DAT_14c760b38,
                L"Defrag the VRAM buffer pool");
  atexit(FUN_14315a69d);
  local_48 = 4;
  FUN_141471170(&DAT_14ca76818,L"d3d12.VRAMBufferPoolDefrag.MaxCopySizePerFrame",&DAT_14c760b3c,
                L"Max amount of data to copy during defragmentation in a single frame (default 32MB)"
               );
  atexit(FUN_14315a6e2);
  local_48 = 4;
  FUN_141471170(&DAT_14ca76828,L"d3d12.PoolAllocator.ReadOnlyTextureVRAMPoolSize",&DAT_14c760b40,
                L"Pool size of a single VRAM ReadOnly Texture memory pool (default 64MB)");
  atexit(FUN_14315a727);
  local_48 = 4;
  FUN_141471170(&DAT_14ca76838,L"d3d12.PoolAllocator.ReadOnlyTextureMaxAllocationSize",
                &DAT_14c760b44,
                L"Maximum size of a single allocation in the VRAM ReadOnly Texture pool allocator (default 64MB)"
               );
  atexit(FUN_14315a76c);
  local_48 = 4;
  FUN_141471170(&DAT_14ca76848,L"d3d12.PoolAllocator.RTUAVTextureVRAMPoolSize",&DAT_14ca76858,
                L"Pool size of a single VRAM RTUAV Texture memory pool (default 0MB - disabled)");
  atexit(FUN_14315a7b1);
  local_48 = 4;
  FUN_141471170(&DAT_14ca76860,L"d3d12.PoolAllocator.RTUAVTextureMaxAllocationSize",&DAT_14ca76870,
                L"Maximum size of a single allocation in the VRAM RTUAV Texture pool allocator (default 0MB - disabled)"
               );
  atexit(FUN_14315a7f6);
  local_48 = 4;
  FUN_141471170(&DAT_14ca76878,L"d3d12.VRAMTexturePoolDefrag",&DAT_14c760b48,
                L"Defrag the VRAM Texture pool (enabled by default)");
  atexit(FUN_14315a83b);
  local_48 = 4;
  FUN_141471170(&DAT_14ca76888,L"d3d12.VRAMTexturePoolDefrag.MaxCopySizePerFrame",&DAT_14c760b4c,
                L"Max amount of data to copy during defragmentation in a single frame (default 32MB)"
               );
  atexit(FUN_14315a880);
  local_48 = 4;
  FUN_141471170(&DAT_14ca76898,L"d3d12.UploadHeap.SmallBlock.MaxAllocationSize",&DAT_14c760b50,
                L"Maximum allocation size on the small block allocator for upload memory");
  atexit(FUN_14315a8c5);
  local_48 = 4;
  FUN_141471170(&DAT_14ca768a8,L"d3d12.UploadHeap.SmallBlock.PoolSize",&DAT_14c760b54,
                L"Pool size for the upload memory small block allocator");
  atexit(FUN_14315a90a);
  local_48 = 4;
  FUN_141471170(&DAT_14ca768b8,L"d3d12.UploadHeap.BigBlock.MaxAllocationSize",&DAT_14c760b58,
                L"Maximum allocation size on the big block allocator for upload memory");
  atexit(FUN_14315a94f);
  local_48 = 4;
  FUN_141471170(&DAT_14ca768c8,L"d3d12.UploadHeap.BigBlock.PoolSize",&DAT_14c760b5c,
                L"Pool size for the upload memory big block allocator");
  atexit(FUN_14315a994);
  local_48 = 4;
  FUN_141471170(&DAT_14ca768d8,L"d3d12.FastConstantAllocatorPageSize",&DAT_14c760b60,
                L"Page size for the fast constant allocator");
  atexit(FUN_14315a9d9);
  local_48 = 0;
  FUN_141471170(&DAT_14ca768e8,L"d3d12.FastAllocator.MinPagesToRetain",&DAT_14c760b64,
                L"Minimum number of pages to retain. Pages below this limit will never be released. Pages above can be released after being unused for a certain number of frames."
               );
  atexit(FUN_14315aa1e);
  local_48 = 4;
  FUN_141471170(&DAT_14ca768f8,L"D3D12.Bindless.ResourceDescriptorHeapSize",&DAT_14c760b68,
                L"Bindless resource descriptor heap size");
  atexit(FUN_14315ad4f);
  local_48 = 4;
  FUN_141471170(&DAT_14ca76908,L"D3D12.Bindless.GarbageCollectLatency",&DAT_14c760b6c,
                L"Amount of update cycles before heap is freed");
  atexit(FUN_14315ad94);
  local_48 = 4;
  FUN_141471170(&DAT_14ca76918,L"D3D12.Bindless.SamplerDescriptorHeapSize",&DAT_14c760b70,
                L"Bindless sampler descriptor heap size");
  atexit(FUN_14315add9);
  local_48 = 0x20;
  FUN_141471170(&DAT_14ca76940,L"D3D12.MaxCommandsPerCommandList",&DAT_14c760b84,
                L"Flush command list to GPU after certain amount of enqueued commands (draw, dispatch, copy, ...) (default value 10000)"
               );
  atexit(FUN_14315bf90);
  local_48 = 0x24;
  FUN_141471170(&DAT_14ca76950,L"D3D12.EmitRgpFrameMarkers",&DAT_14ca769d8,
                L"Enables/Disables frame markers for AMD\'s RGP tool.");
  atexit(FUN_14315bfd5);
  local_48 = 0x20;
  FUN_14153156c(&DAT_14ca76960,L"D3D12.UnsafeCrossGPUTransfers",&DAT_14c760b74,
                L"Disables cross GPU synchronization correctness, for a gain in performance (Default: true)."
               );
  atexit(FUN_14315c01a);
  local_48 = 0;
  FUN_141471170(&DAT_14ca76970,L"d3d12.BatchResourceBarriers",&DAT_14c760b78,
                L"Whether to allow batching resource barriers");
  atexit(FUN_14315cd15);
  local_48 = 0;
  FUN_141471170(&DAT_14ca76980,L"d3d12.ExtraDepthTransitions",&DAT_14ca76990,
                L"Adds extra transitions for the depth buffer to fix validation issues. However, this currently breaks async compute"
               );
  atexit(FUN_14315cd5a);
  local_48 = 0x20;
  FUN_141471170(&DAT_14ca76998,L"d3d12.AllowDiscardResources",&DAT_14c760b7c,
                L"Whether to call DiscardResources after transient aliasing acquire. This is not needed on some platforms if newly acquired resources are cleared before use."
               );
  atexit(FUN_14315ce8e);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14315ed8c FUN_14315ed8c body=803 status=ok
// SIG undefined FUN_14315ed8c(void)

void FUN_14315ed8c(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  wchar_t *pwVar9;
  
  puVar7 = (undefined8 *)FUN_1400659f4(*(undefined8 *)(param_1 + 0x68));
  puVar8 = *(undefined8 **)(param_1 + 0x48);
  if (puVar8 != puVar7) {
    *(undefined8 **)(param_1 + 0x48) = puVar7;
    if (puVar7 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puVar7 + 1) = *(int *)(puVar7 + 1) + 1;
      UNLOCK();
    }
    if (puVar8 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar8 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar8)(puVar8,1);
      }
    }
  }
  puVar8 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar8 = 0;
  lVar5 = *(longlong *)(param_1 + 0x40);
  puVar8[1] = lVar5;
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
  lVar5 = *(longlong *)(param_1 + 0x48);
  puVar8[2] = lVar5;
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
  if (puVar8 != (undefined8 *)0x0) {
    puVar7 = *(undefined8 **)(param_1 + 0x50);
    *(undefined8 **)(param_1 + 0x50) = puVar8;
    *puVar7 = puVar8;
  }
  plVar2 = (longlong *)(param_1 + 0x40);
  if (**(longlong **)(param_1 + 0x58) == 0) {
LAB_14315ef7a:
    cVar4 = *(char *)(*(longlong *)(param_1 + 0x10) + 0x3c);
    pwVar9 = L"Thread Local - Online Sampler Heap";
    if (cVar4 == '\0') {
      pwVar9 = L"Thread Local - Online View Heap";
    }
    puVar7 = (undefined8 *)
             FUN_1407d752c(*(longlong *)(param_1 + 8) + 0x658,pwVar9,cVar4,
                           *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x34),1);
    puVar8 = *(undefined8 **)(param_1 + 0x10);
    if (puVar8 != puVar7) {
      *(undefined8 **)(param_1 + 0x10) = puVar7;
      if (puVar7 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(puVar7 + 1) = *(int *)(puVar7 + 1) + 1;
        UNLOCK();
      }
      if (puVar8 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(puVar8 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar8)(puVar8,1);
        }
      }
      puVar8 = *(undefined8 **)(param_1 + 0x10);
    }
    puVar7 = (undefined8 *)*plVar2;
    if (puVar7 == puVar8) goto LAB_14315f009;
    *plVar2 = (longlong)puVar8;
    if (puVar8 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puVar8 + 1) = *(int *)(puVar8 + 1) + 1;
      UNLOCK();
    }
  }
  else {
    lVar5 = **(longlong **)(param_1 + 0x58);
    puVar8 = *(undefined8 **)(lVar5 + 8);
    puVar7 = *(undefined8 **)(param_1 + 0x40);
    if (puVar7 != puVar8) {
      *plVar2 = (longlong)puVar8;
      if (puVar8 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(puVar8 + 1) = *(int *)(puVar8 + 1) + 1;
        UNLOCK();
      }
      if (puVar7 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(puVar7 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar7)(puVar7,1);
        }
      }
    }
    puVar8 = *(undefined8 **)(lVar5 + 0x10);
    puVar7 = *(undefined8 **)(param_1 + 0x48);
    if (puVar7 != puVar8) {
      *(undefined8 **)(param_1 + 0x48) = puVar8;
      if (puVar8 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(puVar8 + 1) = *(int *)(puVar8 + 1) + 1;
        UNLOCK();
      }
      if (puVar7 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(puVar7 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar7)(puVar7,1);
        }
      }
    }
    if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 0x48) + 0x28) + 0xa0) & 1) == 0)
    goto LAB_14315ef7a;
    lVar5 = **(longlong **)(param_1 + 0x58);
    if (lVar5 != 0) {
      plVar3 = (longlong *)(lVar5 + 8);
      if (plVar3 != plVar2) {
        puVar8 = (undefined8 *)*plVar2;
        *plVar2 = *plVar3;
        *plVar3 = 0;
        if (puVar8 != (undefined8 *)0x0) {
          LOCK();
          piVar1 = (int *)(puVar8 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar8)(puVar8,1);
          }
        }
        puVar8 = *(undefined8 **)(param_1 + 0x48);
        *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(lVar5 + 0x10);
        *(undefined8 *)(lVar5 + 0x10) = 0;
        if (puVar8 != (undefined8 *)0x0) {
          LOCK();
          piVar1 = (int *)(puVar8 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar8)(puVar8,1);
          }
        }
      }
      lVar6 = *(longlong *)(param_1 + 0x58);
      *(longlong *)(param_1 + 0x58) = lVar5;
      puVar8 = *(undefined8 **)(lVar5 + 8);
      *(undefined8 *)(lVar5 + 8) = 0;
      if (puVar8 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(puVar8 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar8)(puVar8,1);
        }
      }
      puVar8 = *(undefined8 **)(lVar5 + 0x10);
      *(undefined8 *)(lVar5 + 0x10) = 0;
      if (puVar8 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(puVar8 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar8)(puVar8,1);
        }
      }
      if (lVar6 != 0) {
        puVar8 = *(undefined8 **)(lVar6 + 0x10);
        if (puVar8 != (undefined8 *)0x0) {
          LOCK();
          piVar1 = (int *)(puVar8 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar8)(puVar8,1);
          }
        }
        puVar8 = *(undefined8 **)(lVar6 + 8);
        if (puVar8 != (undefined8 *)0x0) {
          LOCK();
          piVar1 = (int *)(puVar8 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar8)(puVar8,1);
          }
        }
        FUN_1400020a8(lVar6);
      }
    }
    puVar7 = *(undefined8 **)(param_1 + 0x10);
    puVar8 = *(undefined8 **)(param_1 + 0x40);
    if (puVar7 == puVar8) goto LAB_14315f009;
    *(undefined8 **)(param_1 + 0x10) = puVar8;
    if (puVar8 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puVar8 + 1) = *(int *)(puVar8 + 1) + 1;
      UNLOCK();
    }
  }
  if (puVar7 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar7 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar7)(puVar7,1);
    }
  }
LAB_14315f009:
  *(undefined8 *)(param_1 + 0x18) = 0;
  FUN_140039a1a(*(undefined8 *)(param_1 + 0x60),0);
  return;
}



// FUNCTION 14315f0af FUN_14315f0af body=91 status=ok
// SIG undefined FUN_14315f0af(void)

void FUN_14315f0af(longlong param_1,longlong param_2,longlong param_3,int param_4,undefined4 param_5
                  )

{
  longlong *plVar1;
  int iVar2;
  byte bVar3;
  
  bVar3 = *(char *)(param_2 + 0x3c) - 1;
  iVar2 = 0;
  if (bVar3 < 3) {
    iVar2 = bVar3 + 1;
  }
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 8);
  (**(code **)(*plVar1 + 0xc0))
            (plVar1,param_5,
             (ulonglong)*(uint *)(param_2 + 0x38) * (longlong)param_4 +
             *(longlong *)(param_2 + 0x20),
             (ulonglong)*(uint *)(param_3 + 0x38) * (longlong)param_4 +
             *(longlong *)(param_3 + 0x20),iVar2);
  return;
}



// FUNCTION 14315f10a FUN_14315f10a body=356 status=ok
// SIG undefined FUN_14315f10a(void)

void FUN_14315f10a(longlong param_1,longlong param_2,longlong param_3,longlong *param_4)

{
  int iVar1;
  longlong *plVar2;
  byte bVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_b8 [32];
  int local_98;
  longlong local_90;
  longlong local_88;
  int local_80;
  longlong local_78 [7];
  
  local_78[6] = DAT_14c707940 ^ (ulonglong)auStack_b8;
  bVar3 = *(char *)(param_2 + 0x3c) - 1;
  iVar5 = 0;
  if (bVar3 < 3) {
    iVar5 = bVar3 + 1;
  }
  iVar1 = (int)param_4[1];
  local_78[4] = 0;
  local_78[5] = 0;
  local_78[2] = 0;
  local_78[3] = 0;
  local_78[0] = 0;
  local_78[1] = 0;
  FUN_1473709b4(local_78 + 4,iVar1,1);
  FUN_1473709b4(local_78 + 2,iVar1,1);
  FUN_14017c08a(local_78,iVar1,1);
  if (0 < (longlong)iVar1) {
    lVar4 = 0;
    do {
      *(ulonglong *)(local_78[4] + lVar4 * 8) =
           (ulonglong)*(uint *)(param_2 + 0x38) * (longlong)*(int *)(*param_4 + lVar4 * 8) +
           *(longlong *)(param_2 + 0x20);
      *(ulonglong *)(local_78[2] + lVar4 * 8) =
           (ulonglong)*(uint *)(param_3 + 0x38) * (longlong)*(int *)(*param_4 + lVar4 * 8) +
           *(longlong *)(param_3 + 0x20);
      *(undefined4 *)(local_78[0] + lVar4 * 4) = 1;
      lVar4 = lVar4 + 1;
    } while (iVar1 != lVar4);
  }
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 8);
  local_88 = local_78[0];
  local_90 = local_78[2];
  local_98 = iVar1;
  local_80 = iVar5;
  (**(code **)(*plVar2 + 0xb8))(plVar2,iVar1,local_78[4]);
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  if (local_78[2] != 0) {
    FUN_1400020a8();
  }
  if (local_78[4] != 0) {
    FUN_1400020a8();
  }
  if ((local_78[6] ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14315f270 FUN_14315f270 body=271 status=ok
// SIG undefined FUN_14315f270(void)

undefined8 *
FUN_14315f270(undefined8 *param_1,longlong param_2,undefined8 *param_3,undefined4 param_4,
             char param_5,byte param_6,undefined1 param_7)

{
  longlong *plVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  param_1[2] = param_2;
  *param_1 = &PTR_FUN_149e002e8;
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = &PTR_FUN_14a3498c8;
  param_1[3] = *param_3;
  *param_3 = 0;
  (**(code **)(*(longlong *)param_1[3] + 0x48))((longlong *)param_1[3],&local_50);
  param_1[4] = local_50;
  if ((param_6 & 1) == 0) {
    local_50 = 0;
  }
  else {
    (**(code **)(*(longlong *)param_1[3] + 0x50))((longlong *)param_1[3],&local_50);
  }
  param_1[5] = local_50;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = param_4;
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x10) + 8);
  iVar3 = (byte)(param_5 - 1U) + 1;
  if (2 < (byte)(param_5 - 1U)) {
    iVar3 = 0;
  }
  uVar2 = (**(code **)(*plVar1 + 0x78))(plVar1,iVar3);
  *(undefined4 *)(param_1 + 7) = uVar2;
  *(char *)((longlong)param_1 + 0x3c) = param_5;
  *(byte *)((longlong)param_1 + 0x3d) = param_6;
  *(undefined1 *)((longlong)param_1 + 0x3e) = param_7;
  *(undefined1 *)((longlong)param_1 + 0x3f) = 0;
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14315f380 FUN_14315f380 body=95 status=ok
// SIG undefined FUN_14315f380(void)

void FUN_14315f380(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  *(undefined4 *)(param_2 + 8) = 0;
  puVar2 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar2 = 0;
  puVar2[1] = param_2;
  if (puVar2 != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_1 + 0x20);
    *(undefined8 **)(param_1 + 0x20) = puVar2;
    *puVar1 = puVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00014315f3d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  return;
}



// FUNCTION 14315f3df FUN_14315f3df body=69 status=ok
// SIG undefined FUN_14315f3df(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14315f3df(void)

{
  _DAT_14ca769f8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014315f421. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca76a00,1);
  return;
}



// FUNCTION 14315f424 FUN_14315f424 body=69 status=ok
// SIG undefined FUN_14315f424(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14315f424(void)

{
  _DAT_14ca76e48 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014315f466. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca76e50,1);
  return;
}



// FUNCTION 14315f46a FUN_14315f46a body=2973 status=ok
// SIG undefined FUN_14315f46a(void)

void FUN_14315f46a(ulong *param_1)

{
  int *piVar1;
  undefined1 uVar2;
  ulong uVar3;
  longlong *plVar4;
  uint uVar5;
  bool bVar6;
  byte bVar7;
  HRESULT HVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  int *piVar13;
  undefined8 uVar14;
  uint uVar15;
  uint uVar16;
  ulong uVar17;
  longlong lVar18;
  ulong *puVar19;
  uint uVar20;
  ulong uVar21;
  ulong *puVar22;
  undefined1 auStack_128 [32];
  undefined4 local_108;
  undefined4 local_100;
  undefined1 local_f8;
  ulong *local_f0;
  undefined8 local_e8;
  wchar_t *local_e0;
  ulong *local_d8;
  ulong *local_d0;
  ulong *local_c8;
  ulong local_bc [7];
  ulong local_a0;
  uint uStack_9c;
  uint uStack_98;
  ulong local_90;
  uint uStack_8c;
  undefined4 uStack_88;
  IID local_80;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  plVar4 = *(longlong **)(*(longlong *)(param_1 + 4) + 8);
  lVar18 = 0x24;
  local_c8 = param_1;
  do {
    uVar17 = *(ulong *)((longlong)&DAT_14c873410 + lVar18);
    uVar15 = 0;
    if (uVar17 != 0) {
      local_80.Data2 = 0;
      local_80.Data3 = 0;
      local_80.Data4[0] = '\0';
      local_80.Data4[1] = '\0';
      local_80.Data4[2] = '\0';
      local_80.Data4[3] = '\0';
      local_80.Data1 = uVar17;
      (**(code **)(*plVar4 + 0x68))(plVar4,3,&local_80,0xc);
      local_90 = uVar17;
      if ((int)uVar17 < 0x49) {
        if (0x2b < (int)uVar17) {
          if (uVar17 == 0x46) {
            local_90 = 0x47;
          }
          else if (uVar17 == 0x35) {
            local_90 = 0x38;
          }
          else if (uVar17 == 0x2c) {
            local_90 = 0x2e;
          }
          goto LAB_14315f58e;
        }
        if (uVar17 != 0x1b) {
          if (uVar17 != 0x13) {
            if (uVar17 == 0x27) {
              local_90 = 0x29;
            }
            goto LAB_14315f58e;
          }
          uStack_8c = 0;
          uStack_88 = 0;
          local_90 = 0x15;
          (**(code **)(*plVar4 + 0x68))(plVar4,3,&local_90,0xc);
          uStack_9c = 0;
          uStack_98 = 0;
          local_a0 = 0x15;
          (**(code **)(*plVar4 + 0x68))(plVar4,3,&local_a0,0xc);
LAB_14315f99a:
          local_bc[4] = 0;
          local_bc[5] = 0;
          local_bc[3] = 0x15;
          (**(code **)(*plVar4 + 0x68))(plVar4,3,local_bc + 3,0xc);
          uVar17 = 0x14;
          goto LAB_14315f6e7;
        }
        uStack_8c = 0;
        uStack_88 = 0;
        local_90 = 0x1c;
        (**(code **)(*plVar4 + 0x68))(plVar4,3,&local_90,0xc);
        uStack_9c = 0;
        uStack_98 = 0;
        local_a0 = 0x1c;
        (**(code **)(*plVar4 + 0x68))(plVar4,3,&local_a0,0xc);
LAB_14315f8e4:
        uVar21 = 0x1c;
LAB_14315f8ea:
        local_bc[4] = 0;
        local_bc[5] = 0;
        local_bc[3] = uVar21;
        (**(code **)(*plVar4 + 0x68))(plVar4,3,local_bc + 3,0xc);
      }
      else {
        if ((int)uVar17 < 0x61) {
          if (uVar17 != 0x5a) {
            if (uVar17 == 0x4c) {
              local_90 = 0x4d;
            }
            else if (uVar17 == 0x49) {
              local_90 = 0x4a;
            }
            goto LAB_14315f58e;
          }
          uStack_8c = 0;
          uStack_88 = 0;
          uVar21 = 0x57;
          local_90 = 0x57;
          (**(code **)(*plVar4 + 0x68))(plVar4,3,&local_90,0xc);
          uStack_9c = 0;
          uStack_98 = 0;
          local_a0 = 0x57;
          (**(code **)(*plVar4 + 0x68))(plVar4,3,&local_a0,0xc);
          goto LAB_14315f8ea;
        }
        if (uVar17 == 0x61) {
          local_90 = 0x62;
        }
LAB_14315f58e:
        uStack_88 = 0;
        uStack_8c = 0;
        (**(code **)(*plVar4 + 0x68))(plVar4,3,&local_90,0xc);
        uStack_9c = 0;
        uStack_98 = 0;
        local_a0 = uVar17;
        (**(code **)(*plVar4 + 0x68))(plVar4,3,&local_a0,0xc);
        if (0x48 < (int)uVar17) {
          if ((int)uVar17 < 0x61) {
            if (uVar17 == 0x4c) {
              uVar21 = 0x4d;
            }
            else if (uVar17 == 0x49) {
              uVar21 = 0x4a;
            }
            else {
              if (uVar17 != 0x5a) goto LAB_14315f6c1;
              uVar21 = 0x57;
            }
          }
          else {
            if (uVar17 != 0x61) goto LAB_14315f6c1;
            uVar21 = 0x62;
          }
          goto LAB_14315f8ea;
        }
        if ((int)uVar17 < 0x46) {
          if ((int)uVar17 < 0x35) {
            if ((int)uVar17 < 0x2c) {
              if (uVar17 == 0x13) goto LAB_14315f99a;
              if (uVar17 == 0x1b) goto LAB_14315f8e4;
              if (uVar17 != 0x27) goto LAB_14315f6c1;
              local_bc[4] = 0;
              local_bc[5] = 0;
              local_bc[3] = 0x29;
              (**(code **)(*plVar4 + 0x68))(plVar4,3,local_bc + 3,0xc);
              uVar17 = 0x28;
            }
            else {
              if (uVar17 != 0x2c) goto LAB_14315f6c1;
              local_bc[4] = 0;
              local_bc[5] = 0;
              local_bc[3] = 0x2e;
              (**(code **)(*plVar4 + 0x68))(plVar4,3,local_bc + 3,0xc);
              uVar17 = 0x2d;
            }
          }
          else {
            if (uVar17 != 0x35) goto LAB_14315f6c1;
            local_bc[4] = 0;
            local_bc[5] = 0;
            local_bc[3] = 0x38;
            (**(code **)(*plVar4 + 0x68))(plVar4,3,local_bc + 3,0xc);
            uVar17 = 0x37;
          }
        }
        else {
          if (uVar17 == 0x46) {
            uVar21 = 0x47;
            goto LAB_14315f8ea;
          }
LAB_14315f6c1:
          local_bc[4] = 0;
          local_bc[5] = 0;
          local_bc[3] = uVar17;
          (**(code **)(*plVar4 + 0x68))(plVar4,3,local_bc + 3,0xc);
        }
      }
LAB_14315f6e7:
      local_bc[1] = 0;
      local_bc[2] = 0;
      local_bc[0] = uVar17;
      (**(code **)(*plVar4 + 0x68))(plVar4,3,local_bc,0xc);
      uVar16 = (uint)local_80._4_4_ >> 3 & 0x1e;
      uVar15 = (local_80._4_4_ & 7) << 0xe | uVar16;
      if (uVar16 != 0) {
        uVar20 = uStack_8c & 0x100 |
                 (uint)local_80._4_4_ >> 5 & 0x80 |
                 (uint)local_80._4_4_ >> 10 & 0x40 | (uint)local_80._4_4_ >> 9 & 0x20;
        uVar16 = uVar15 + uVar20 + 0x800200;
        if ((uStack_8c >> 9 & 1) == 0) {
          uVar16 = uVar20 | uVar15;
        }
        uVar15 = (uStack_98 & 0x80) << 6 | (uStack_98 & 8) << 8 | uStack_8c >> 0xd & 0x400 |
                 uStack_8c >> 3 & 0x1000 | uVar16;
      }
      if ((uVar15 >> 0xe & 1) != 0) {
        uVar15 = (uStack_98 & 8) << 0x10 | (uStack_98 & 0x80) << 0xb | (uStack_8c & 1) << 0x11 |
                 uVar15;
      }
      uVar15 = (uStack_98 & 0xc0) << 0xf | uStack_9c >> 5 & 0x100000 | uVar15;
    }
    *(uint *)((longlong)&DAT_14c873408 + lVar18 + 4) = uVar15;
    lVar18 = lVar18 + 0x30;
  } while (lVar18 != 0x1194);
  DAT_14ca84f58 = 1;
  DAT_14ca84f5b = 0;
  HVar8 = IIDFromString(L"{A7AA6116-9C8D-4BBA-9083-B4D816B71B78}",&local_80);
  puVar22 = local_c8;
  if (HVar8 < 0) {
LAB_14315fa93:
    bVar6 = false;
  }
  else {
    local_90 = 0;
    uStack_8c = 0;
    iVar9 = (**(code **)*plVar4)(plVar4,&local_80,&local_90);
    if ((longlong *)CONCAT44(uStack_8c,local_90) != (longlong *)0x0) {
      (**(code **)(*(longlong *)CONCAT44(uStack_8c,local_90) + 0x10))();
    }
    bVar6 = true;
    if (iVar9 < 0) goto LAB_14315fa93;
  }
  local_80.Data1 = 0;
  local_80.Data2 = 0;
  local_80.Data3 = 0;
  iVar9 = (**(code **)*plVar4)(plVar4,&DAT_14a349db4,&local_80);
  if ((longlong *)CONCAT44(local_80._4_4_,local_80.Data1) != (longlong *)0x0) {
    (**(code **)(*(longlong *)CONCAT44(local_80._4_4_,local_80.Data1) + 0x10))();
  }
  if (DAT_14ca769d8 == 0) {
    if (!bVar6 && iVar9 < 0) goto LAB_14315fafc;
  }
  else if ((!bVar6 && iVar9 < 0) && DAT_14ca77418[0x39] == 0) goto LAB_14315fafc;
  FUN_1431d9992(1);
LAB_14315fafc:
  FUN_14736b93a(puVar22 + 0x1ac);
  uVar17 = puVar22[0x1b4];
  uVar21 = puVar22[0x1b5];
  iVar9 = 0;
  if (uVar21 != 1) {
    iVar9 = DAT_14c760bcc;
  }
  if (uVar17 != 1 && DAT_14c760bd0 != 0) {
    local_100 = CONCAT31(local_100._1_3_,1);
    local_108 = CONCAT31(local_108._1_3_,1);
    lVar18 = FUN_1407d7812(*(undefined8 *)(puVar22 + 0x196));
    uVar14 = *(undefined8 *)(puVar22 + 0x196);
    uVar3 = puVar22[0x19a];
    puVar22[0x19a] = uVar3 + 1;
    if (puVar22[0x19b] < uVar3 + 1) {
      FUN_14631a15c(puVar22 + 0x198,uVar3);
    }
    puVar11 = (undefined8 *)(*(longlong *)(puVar22 + 0x198) + (longlong)(int)uVar3 * 0x58);
    *puVar11 = uVar14;
    uVar2 = *(undefined1 *)(lVar18 + 0x3c);
    FUN_1414b9b72(puVar11 + 1,*(undefined4 *)(lVar18 + 0x34));
    *(undefined1 *)(puVar11 + 9) = uVar2;
    puVar11[10] = lVar18;
    puVar22 = local_c8;
    if (lVar18 != 0) {
      LOCK();
      *(int *)(lVar18 + 8) = *(int *)(lVar18 + 8) + 1;
      UNLOCK();
    }
  }
  if (iVar9 != 0) {
    local_100 = CONCAT31(local_100._1_3_,1);
    local_108 = CONCAT31(local_108._1_3_,1);
    lVar18 = FUN_1407d7812(*(undefined8 *)(puVar22 + 0x196));
    uVar14 = *(undefined8 *)(puVar22 + 0x196);
    uVar3 = puVar22[0x19a];
    puVar22[0x19a] = uVar3 + 1;
    if (puVar22[0x19b] < uVar3 + 1) {
      FUN_14631a15c(puVar22 + 0x198,uVar3);
    }
    puVar11 = (undefined8 *)(*(longlong *)(puVar22 + 0x198) + (longlong)(int)uVar3 * 0x58);
    *puVar11 = uVar14;
    uVar2 = *(undefined1 *)(lVar18 + 0x3c);
    FUN_1414b9b72(puVar11 + 1,*(undefined4 *)(lVar18 + 0x34));
    *(undefined1 *)(puVar11 + 9) = uVar2;
    puVar11[10] = lVar18;
    puVar22 = local_c8;
    if (lVar18 != 0) {
      LOCK();
      *(int *)(lVar18 + 8) = *(int *)(lVar18 + 8) + 1;
      UNLOCK();
    }
  }
  if (uVar21 != 1) {
    local_108 = CONCAT31(local_108._1_3_,1);
    puVar10 = (undefined8 *)
              FUN_1407d752c(*(longlong *)(puVar22 + 0x22c) + 0x658,
                            L"Device Global - Online Sampler Heap",1,DAT_14c760bd4);
    puVar11 = *(undefined8 **)(puVar22 + 0x22e);
    if (puVar11 != puVar10) {
      *(undefined8 **)(puVar22 + 0x22e) = puVar10;
      if (puVar10 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(puVar10 + 1) = *(int *)(puVar10 + 1) + 1;
        UNLOCK();
      }
      if (puVar11 != (undefined8 *)0x0) {
        LOCK();
        piVar13 = (int *)(puVar11 + 1);
        *piVar13 = *piVar13 + -1;
        UNLOCK();
        if (*piVar13 == 0) {
          (**(code **)*puVar11)(puVar11,1);
        }
      }
    }
  }
  puVar22 = local_c8;
  uVar16 = DAT_14c760be4;
  uVar15 = DAT_14c760bdc;
  if (uVar17 != 1) {
    local_108 = CONCAT31(local_108._1_3_,1);
    puVar11 = (undefined8 *)
              FUN_1407d752c(*(longlong *)(local_c8 + 0x23c) + 0x658,
                            L"Device Global - Online View Heap",0);
    if (puVar11 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puVar11 + 1) = *(int *)(puVar11 + 1) + 1;
      UNLOCK();
    }
    piVar13 = (int *)(puVar11 + 1);
    bVar7 = 3;
    do {
      uVar12 = (ulonglong)((-bVar7 & bVar7) == 2);
      puVar10 = *(undefined8 **)(puVar22 + uVar12 * 2 + 0x23e);
      if (puVar10 != puVar11) {
        *(undefined8 **)(puVar22 + uVar12 * 2 + 0x23e) = puVar11;
        if (puVar11 != (undefined8 *)0x0) {
          LOCK();
          *piVar13 = *piVar13 + 1;
          UNLOCK();
        }
        if (puVar10 != (undefined8 *)0x0) {
          LOCK();
          piVar1 = (int *)(puVar10 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar10)();
          }
        }
      }
      bVar7 = bVar7 - 1 & bVar7;
    } while (bVar7 != 0);
    if (puVar11 != (undefined8 *)0x0) {
      LOCK();
      *piVar13 = *piVar13 + -1;
      UNLOCK();
      if (*piVar13 == 0) {
        (**(code **)*puVar11)(puVar11);
      }
    }
    iVar9 = 0;
    if (uVar16 <= uVar15) {
      uVar20 = 0;
      do {
        uVar5 = uVar15 - iVar9;
        if (uVar15 / uVar16 - 1 != uVar20) {
          uVar5 = uVar16;
        }
        piVar13 = (int *)FUN_14001cc68(0xc,0x10);
        *piVar13 = iVar9;
        piVar13[1] = uVar5;
        piVar13[2] = 0;
        puVar11 = (undefined8 *)FUN_14001cc68(0x10,0x10);
        *puVar11 = 0;
        puVar11[1] = piVar13;
        if (puVar11 != (undefined8 *)0x0) {
          puVar10 = *(undefined8 **)(local_c8 + 0x244);
          *(undefined8 **)(local_c8 + 0x244) = puVar11;
          *puVar10 = puVar11;
        }
        iVar9 = iVar9 + uVar5;
        uVar20 = uVar20 + 1;
      } while (uVar20 < uVar15 / uVar16);
    }
  }
  puVar22 = local_c8;
  FUN_146319e82(local_c8);
  puVar22[0x4f6] = 0;
  puVar22[0x4f7] = 0;
  *(undefined1 **)(puVar22 + 0x4f8) = &DAT_100000001;
  puVar22[0x4ec] = 0xffffffff;
  puVar22[0x4ed] = 0xffffffff;
  puVar22[0x4ee] = 0;
  puVar22[0x4ef] = 0xffffffff;
  puVar22[0x4f0] = 0;
  puVar22[0x4f1] = 0xffffffff;
  puVar22[0x4f2] = 0xffffffff;
  puVar22[0x4f3] = 0xffffffff;
  puVar22[0x4f4] = 0;
  puVar22[0x4f5] = 2;
  uVar14 = FUN_14001cc68(0x78,0x10);
  FUN_1461ddcfe(uVar14,puVar22);
  *(undefined8 *)(puVar22 + 0x53c) = uVar14;
  local_80.Data1 = 1;
  local_80.Data4[0] = '\0';
  local_80.Data4[1] = '\0';
  local_80.Data4[2] = '\0';
  local_80.Data4[3] = '\0';
  local_80.Data4[4] = '\0';
  local_80.Data4[5] = '\0';
  local_80.Data4[6] = '\0';
  local_80.Data4[7] = '\0';
  local_70 = 0x68;
  local_68 = 0x1000100000001;
  local_60 = 0;
  uStack_5c = 1;
  uStack_58 = 0;
  uStack_54 = 1;
  local_50 = 4;
  local_a0 = 0;
  uStack_9c = 0;
  local_bc[3] = 0;
  local_bc[4] = 0;
  local_bc[0] = *puVar22;
  local_90 = 0x68;
  uStack_8c = 0;
  uStack_88 = 0x80;
  local_d0 = &local_a0;
  local_d8 = local_bc + 3;
  local_e0 = L"DispatchRaysDescBuffer";
  local_e8 = 0;
  local_f0 = local_bc;
  local_f8 = 0;
  local_100 = 0x200;
  local_108 = 2;
  uVar14 = FUN_1401297de(*(undefined8 *)(puVar22 + 4),&local_80,0x100);
  *(undefined8 *)(puVar22 + 0x53e) = uVar14;
  uVar14 = (**(code **)(*DAT_14ca77418 + 0x5e8))(DAT_14ca77418,puVar22,0,1);
  *(undefined8 *)(puVar22 + 0x2b0) = uVar14;
  puVar19 = puVar22 + 0x2c0;
  if (*(ulong **)(puVar22 + 0x4a0) != (ulong *)0x0) {
    puVar19 = *(ulong **)(puVar22 + 0x4a0);
  }
  if ((longlong)(int)puVar22[0x4b0] != 0) {
    puVar22 = puVar19 + (longlong)(int)puVar22[0x4b0] * 0xa0;
    do {
      uVar14 = FUN_14001cc68(0x20,0x10);
      FUN_143184782(uVar14,puVar19);
      lVar18 = *(longlong *)(puVar19 + 0x92);
      *(undefined8 *)(puVar19 + 0x92) = uVar14;
      if (lVar18 != 0) {
        FUN_1456f5494(lVar18);
        FUN_1400020a8(lVar18);
      }
      puVar19 = puVar19 + 0xa0;
    } while (puVar19 != puVar22);
  }
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143160008 FUN_143160008 body=914 status=ok
// SIG undefined FUN_143160008(void)

uint * FUN_143160008(uint *param_1,uint *param_2,uint param_3,uint param_4)

{
  uint *puVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  wchar_t *pwVar11;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  undefined8 *local_110;
  undefined4 local_108;
  undefined8 local_100;
  uint *local_f8;
  wchar_t *local_f0;
  undefined1 local_e8;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  ulonglong local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_7c;
  undefined4 local_74;
  uint local_70;
  uint local_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_138;
  uVar10 = *param_2;
  *param_1 = uVar10;
  param_1[1] = uVar10;
  if (uVar10 == 0) {
    uVar8 = 0x20;
  }
  else {
    uVar8 = 0;
    if (uVar10 != 0) {
      for (; (uVar10 >> uVar8 & 1) == 0; uVar8 = uVar8 + 1) {
      }
    }
  }
  param_1[2] = uVar8;
  *(uint **)(param_1 + 4) = param_2;
  param_1[6] = param_3;
  param_1[7] = param_4;
  uVar10 = 0x2000;
  if (param_3 == 3) {
    uVar10 = 0x2e8;
  }
  param_1[8] = uVar10;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  memset(param_1 + 0x12,0,0x420);
  param_1[0x11e] = 0;
  if (param_4 - 1 < 5) {
    pwVar11 = (wchar_t *)(&DAT_14a34c76c + *(int *)(&DAT_14a34c76c + (ulonglong)(param_4 - 1) * 4));
  }
  else {
    pwVar11 = L"Occlusion Query Heap Result Buffer";
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca76ab0) && (FUN_144b3d300(&DAT_14ca76ab0), DAT_14ca76ab0 == -1)) {
    local_c8 = CONCAT44(local_c8._4_4_,0xf);
    FUN_14577453c(L"FD3D12QueryHeap");
    _Init_thread_footer(&DAT_14ca76ab0);
  }
  local_c8 = CONCAT44(param_1[8],param_4);
  uVar10 = 1;
  if (DAT_14ca81480 == 0) {
    uVar10 = *param_1;
  }
  puVar1 = param_1 + 0xe;
  uStack_c0 = CONCAT44(uStack_c0._4_4_,uVar10);
  plVar3 = *(longlong **)(*(longlong *)(param_2 + 4) + 8);
  plVar4 = *(longlong **)(param_1 + 0xe);
  if (plVar4 != (longlong *)0x0) {
    puVar1[0] = 0;
    puVar1[1] = 0;
    (**(code **)(*plVar4 + 0x10))();
  }
  iVar9 = (**(code **)(*plVar3 + 0x138))(plVar3,&local_c8,&DAT_14a34b1b0,puVar1);
  if (iVar9 < 0) {
    local_110 = &local_68;
    local_68 = 0;
    uStack_60 = 0;
    local_118 = 0;
    FUN_145763094(iVar9,
                  "Device->GetDevice()->CreateQueryHeap(&QueryHeapDesc, IID_PPV_ARGS(D3DQueryHeap.GetInitReference()))"
                  ,".\\Runtime/D3D12RHI/Private/D3D12Query.cpp",0x59);
  }
  local_6c = 1;
  local_70 = 1;
  if (DAT_14ca81480 == 0) {
    local_6c = param_1[1];
    local_70 = *param_1;
  }
  local_7c = 3;
  local_74 = 0;
  iVar9 = 8;
  if (param_1[6] == 3) {
    iVar9 = 0x58;
  }
  uVar10 = param_1[8];
  puVar1 = param_1 + 10;
  uVar5 = *(undefined8 *)(param_2 + 4);
  puVar6 = *(undefined8 **)(param_1 + 10);
  if (puVar6 != (undefined8 *)0x0) {
    puVar1[0] = 0;
    puVar1[1] = 0;
    LOCK();
    piVar2 = (int *)(puVar6 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*puVar6)(puVar6,1);
    }
  }
  uStack_c0 = 0;
  local_98 = 0;
  local_c8 = 1;
  uStack_b0 = 0x1000100000001;
  local_a8 = 0x100000000;
  uStack_a0 = 0x100000000;
  uStack_90 = 0;
  local_e8 = 1;
  local_100 = 0;
  local_108 = 0x7fffffff;
  local_110 = (undefined8 *)((ulonglong)local_110 & 0xffffffff00000000);
  local_118 = CONCAT44(local_118._4_4_,0x400);
  local_f8 = puVar1;
  local_f0 = pwVar11;
  local_b8 = (ulonglong)(iVar9 * uVar10);
  iVar9 = FUN_140a6e850(uVar5,&local_c8,*param_1,&local_7c);
  if (iVar9 < 0) {
    local_110 = &local_d8;
    local_d8 = 0;
    uStack_d0 = 0;
    local_118 = 0;
    FUN_145763094(iVar9,
                  "Device->GetParentAdapter()->CreateCommittedResource( BufferDesc, GetGPUMask(), HeapProps, D3D12_RESOURCE_STATE_COPY_DEST, nullptr, ResultBuffer.GetInitReference(), ResultBufferName )"
                  ,".\\Runtime/D3D12RHI/Private/D3D12Query.cpp",0x74);
  }
  lVar7 = *(longlong *)puVar1;
  if ((*(int *)(lVar7 + 0xd8) == 0) &&
     (iVar9 = (**(code **)(**(longlong **)(lVar7 + 0x20) + 0x40))
                        (*(longlong **)(lVar7 + 0x20),0,0,lVar7 + 0x48), iVar9 < 0)) {
    local_c8 = 0;
    uStack_c0 = 0;
    local_118 = 0;
    local_110 = &local_c8;
    FUN_145763094(iVar9,"Resource->Map(0, ReadRange, &ResourceBaseAddress)",
                  ".\\Runtime/D3D12RHI/Private\\D3D12Resources.h",0x119);
  }
  *(int *)(lVar7 + 0xd8) = *(int *)(lVar7 + 0xd8) + 1;
  *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(lVar7 + 0x48);
  if ((local_50 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1431603a8 FUN_1431603a8 body=631 status=ok
// SIG undefined FUN_1431603a8(void)

void FUN_1431603a8(undefined8 param_1,ulonglong *param_2,longlong param_3)

{
  int *piVar1;
  int iVar2;
  byte bVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  undefined1 auStack_b8 [40];
  longlong local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 *local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar11 = *(uint *)((longlong)param_2 + 0x17c);
  if (uVar11 != 0) {
    uVar12 = 0;
    if (uVar11 != 0) {
      for (; (uVar11 >> uVar12 & 1) == 0; uVar12 = uVar12 + 1) {
      }
    }
    do {
      lVar4 = FUN_144ad3d06(0x30);
      FUN_144724502(lVar4,1);
      if (lVar4 != 0) {
        LOCK();
        *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
        UNLOCK();
      }
      lVar5 = *(longlong *)(param_3 + 0x60);
      if (*(longlong *)(param_3 + 0x60) == 0) {
        lVar5 = param_3 + 0x20;
      }
      puVar9 = *(undefined8 **)(lVar5 + (ulonglong)uVar12 * 8);
      *(longlong *)(lVar5 + (ulonglong)uVar12 * 8) = lVar4;
      if (puVar9 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(puVar9 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar9)(puVar9,1);
        }
      }
      bVar3 = (byte)uVar12 & 0x1f;
      uVar11 = uVar11 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
      if (uVar11 == 0) {
        uVar12 = 0x20;
      }
      else {
        uVar12 = 0;
        if (uVar11 != 0) {
          for (; (uVar11 >> uVar12 & 1) == 0; uVar12 = uVar12 + 1) {
          }
        }
      }
    } while (uVar11 != 0);
  }
  LOCK();
  *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) + 1;
  UNLOCK();
  local_48 = (undefined4 *)0x0;
  iVar2 = *(int *)(param_3 + 0x68);
  local_40 = CONCAT44(local_40._4_4_,iVar2);
  local_90 = param_3;
  if (iVar2 == 0) {
    local_40 = 0x800000000;
  }
  else {
    lVar4 = param_3 + 0x20;
    if (*(longlong *)(param_3 + 0x60) != 0) {
      lVar4 = *(longlong *)(param_3 + 0x60);
    }
    FUN_140091446(&local_88,iVar2);
    puVar8 = local_48;
    if (local_48 == (undefined4 *)0x0) {
      puVar8 = &local_88;
    }
    FUN_14476c1ac(puVar8,lVar4,iVar2);
  }
  if (*(char *)((longlong)param_2 + 100) == '\x01') {
    uVar11 = *(uint *)((longlong)param_2 + 0x17c);
    if (uVar11 != 0) {
      uVar12 = 0;
      if (uVar11 != 0) {
        for (; (uVar11 >> uVar12 & 1) == 0; uVar12 = uVar12 + 1) {
        }
      }
      do {
        uVar6 = (**(code **)(*(longlong *)param_2[8] + 0x278))((longlong *)param_2[8],uVar12);
        puVar8 = local_48;
        if (local_48 == (undefined4 *)0x0) {
          puVar8 = &local_88;
        }
        FUN_1447584e6(uVar6,*(undefined8 *)(puVar8 + (ulonglong)uVar12 * 2));
        bVar3 = (byte)uVar12 & 0x1f;
        uVar11 = (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3) & uVar11;
        if (uVar11 == 0) {
          uVar12 = 0x20;
        }
        else {
          uVar12 = 0;
          if (uVar11 != 0) {
            for (; (uVar11 >> uVar12 & 1) == 0; uVar12 = uVar12 + 1) {
            }
          }
        }
      } while (uVar11 != 0);
    }
    LOCK();
    *(int *)(local_90 + 0x10) = *(int *)(local_90 + 0x10) + -1;
    UNLOCK();
    uVar10 = local_40 & 0xffffffff;
  }
  else {
    puVar7 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar9 = puVar7 + 0xd;
    if ((undefined8 *)param_2[1] < puVar9) {
      FUN_140023dd8(param_2,0x70);
      puVar7 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar9 = puVar7 + 0xd;
    }
    *param_2 = (ulonglong)puVar9;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar7;
    param_2[6] = (ulonglong)(puVar7 + 1);
    puVar7[1] = 0;
    *puVar7 = &PTR_FUN_14a34c3d8;
    puVar7[2] = local_90;
    if (local_48 == (undefined4 *)0x0) {
      puVar7[9] = local_58;
      puVar7[10] = uStack_50;
      puVar7[7] = local_68;
      puVar7[8] = uStack_60;
      puVar7[5] = local_78;
      puVar7[6] = uStack_70;
      *(undefined4 *)(puVar7 + 3) = local_88;
      *(undefined4 *)((longlong)puVar7 + 0x1c) = uStack_84;
      *(undefined4 *)(puVar7 + 4) = uStack_80;
      *(undefined4 *)((longlong)puVar7 + 0x24) = uStack_7c;
    }
    puVar7[0xb] = local_48;
    local_48 = (undefined4 *)0x0;
    *(undefined4 *)(puVar7 + 0xc) = (undefined4)local_40;
    *(undefined4 *)((longlong)puVar7 + 100) = local_40._4_4_;
    local_40 = 0x800000000;
    uVar10 = 0;
  }
  puVar8 = &local_88;
  if (local_48 != (undefined4 *)0x0) {
    puVar8 = local_48;
  }
  FUN_14476c499(puVar8,uVar10);
  if (local_48 != (undefined4 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143160620 FUN_143160620 body=133 status=ok
// SIG undefined FUN_143160620(void)

undefined8 * FUN_143160620(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x70,0x10);
  uVar1 = *param_3;
  *(undefined4 *)(puVar2 + 1) = 0;
  *(undefined1 *)((longlong)puVar2 + 0xc) = 0x1b;
  *(byte *)((longlong)puVar2 + 0xd) = *(byte *)((longlong)puVar2 + 0xd) | 3;
  *puVar2 = &PTR_LAB_14a1e4900;
  *(undefined4 *)(puVar2 + 2) = 0;
  *(undefined8 *)((longlong)puVar2 + 0x14) = uVar1;
  *puVar2 = &PTR_FUN_14a349ea0;
  puVar2[0xc] = 0;
  puVar2[0xd] = 0x800000000;
  FUN_140061ea8(puVar2);
  *param_2 = puVar2;
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar2 + 1) = *(int *)(puVar2 + 1) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 1431606c3 FUN_1431606c3 body=69 status=ok
// SIG undefined FUN_1431606c3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431606c3(void)

{
  _DAT_14ca76a10 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143160705. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca76a18,1);
  return;
}



// FUNCTION 143160708 FUN_143160708 body=69 status=ok
// SIG undefined FUN_143160708(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143160708(void)

{
  _DAT_14ca76a28 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014316074a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca76a30,1);
  return;
}



// FUNCTION 14316074e FUN_14316074e body=704 status=ok
// SIG undefined FUN_14316074e(void)

undefined8 * FUN_14316074e(longlong *param_1,undefined8 *param_2,DWORD param_3,int param_4)

{
  undefined8 *puVar1;
  longlong *plVar2;
  double dVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined8 *_Dst;
  ulonglong uVar11;
  uint uVar12;
  longlong lVar13;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 *local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  LARGE_INTEGER local_80;
  undefined4 local_78;
  undefined4 local_74;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 1));
  uVar12 = 1000000;
  if (param_3 == 1) {
    uVar12 = 0x800;
  }
  uVar11 = (ulonglong)(param_4 + -1 + (uint)(param_4 == 0)) * 2 + 1;
  lVar13 = 0x3f;
  if (uVar11 != 0) {
    for (; uVar11 >> lVar13 == 0; lVar13 = lVar13 + -1) {
    }
  }
  uVar7 = 1 << ((byte)lVar13 & 0x1f);
  if (uVar7 < uVar12) {
    uVar12 = uVar7;
  }
  *(int *)(param_1 + 8) = (int)param_1[8] + 1;
  *param_2 = 0;
  param_2[1] = 0x400000000;
  param_2[2] = 0;
  param_2[3] = 0;
  uVar7 = *(uint *)(param_1 + 7);
  if (0 < (int)uVar7) {
    puVar1 = (undefined8 *)param_1[6];
    uVar11 = 0;
    _Dst = puVar1;
    do {
      if ((*(DWORD *)((longlong)_Dst + 0xc) == param_3) && (uVar12 <= *(uint *)(_Dst + 1))) {
        uVar4 = *_Dst;
        uVar5 = _Dst[1];
        uVar6 = _Dst[3];
        param_2[2] = _Dst[2];
        param_2[3] = uVar6;
        *param_2 = uVar4;
        param_2[1] = uVar5;
        if (uVar7 - 1 != (int)uVar11) {
          iVar8 = (uVar7 - 1) - (int)uVar11;
          iVar9 = 1;
          if (iVar8 < 1) {
            iVar9 = iVar8;
          }
          memmove(_Dst,puVar1 + (ulonglong)(uVar7 - iVar9) * 4,(longlong)iVar9 << 5);
          uVar7 = *(uint *)(param_1 + 7);
        }
        *(uint *)(param_1 + 7) = uVar7 - 1;
        goto LAB_143160993;
      }
      uVar11 = uVar11 + 1;
      _Dst = _Dst + 4;
    } while (uVar7 != uVar11);
  }
  iVar9 = *(int *)(*(longlong *)(*(longlong *)(*param_1 + 0x10) + 0x538) + 0x58);
  QueryPerformanceCounter(&local_80);
  iVar8 = (int)param_1[7];
  if (0 < iVar8) {
    dVar3 = (double)CONCAT44(local_80.s.HighPart,local_80.s.LowPart) * DAT_14c83f420;
    uVar7 = 0;
    do {
      lVar13 = (longlong)(int)uVar7 * 0x20;
      if ((*(longlong *)(param_1[6] + 0x10 + lVar13) + 100U <= (longlong)iVar9 + 1U) ||
         (*(double *)(param_1[6] + lVar13 + 0x18) + 5.0 <= dVar3 + 16777216.0)) {
        FUN_147370fc4(DAT_14ca77418);
        iVar8 = (int)param_1[7];
        iVar10 = ~uVar7 + iVar8;
        if (iVar10 != 0) {
          if (0 < iVar10) {
            iVar10 = 1;
          }
          memmove((void *)(lVar13 + param_1[6]),
                  (void *)((longlong)(iVar8 - iVar10) * 0x20 + param_1[6]),(longlong)iVar10 << 5);
          iVar8 = (int)param_1[7];
        }
        iVar8 = iVar8 + -1;
        *(int *)(param_1 + 7) = iVar8;
      }
      else {
        uVar7 = uVar7 + 1;
      }
    } while ((int)uVar7 < iVar8);
  }
  local_74 = 1;
  local_78 = 1;
  if (DAT_14ca81480 == 0) {
    local_74 = *(undefined4 *)*param_1;
  }
  local_88 = 0;
  plVar2 = *(longlong **)(*(longlong *)((undefined4 *)*param_1 + 4) + 8);
  local_80.s.LowPart = param_3;
  local_80.s.HighPart = uVar12;
  iVar9 = (**(code **)(*plVar2 + 0x70))(plVar2,&local_80,&DAT_14a34a3c0);
  if (iVar9 < 0) {
    local_a0 = &local_98;
    local_98 = 0;
    uStack_90 = 0;
    local_a8 = 0;
    FUN_145763094(iVar9,
                  "GetParentDevice()->GetDevice()->CreateDescriptorHeap(&Desc, IID_PPV_ARGS(&D3D12Heap))"
                  ,".\\Runtime/D3D12RHI/Private/D3D12ExplicitDescriptorCache.cpp",0x7a);
  }
  *(uint *)(param_2 + 1) = uVar12;
  *(DWORD *)((longlong)param_2 + 0xc) = param_3;
  *param_2 = local_88;
LAB_143160993:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 1));
  if ((local_70 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 143160a10 FUN_143160a10 body=315 status=ok
// SIG undefined FUN_143160a10(void)

int FUN_143160a10(longlong param_1,undefined8 param_2,int param_3,int param_4)

{
  int *piVar1;
  uint uVar2;
  longlong *plVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  int local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  longlong local_40;
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar6 = 0x78;
  if (param_4 == 0) {
    lVar6 = 8;
  }
  LOCK();
  piVar1 = (int *)(param_1 + 0x1c + lVar6);
  iVar5 = *piVar1;
  *piVar1 = *piVar1 + param_3;
  UNLOCK();
  uVar2 = *(uint *)(param_1 + 0x18 + lVar6);
  if (uVar2 < (uint)(iVar5 + param_3)) {
    if (*(int *)(param_1 + 8 + lVar6) != 1) {
      iVar5 = -1;
      if (DAT_14c760b90 <= uVar2) {
        LOCK();
        DAT_14ca76a20 = DAT_14ca76a20 | 1;
        UNLOCK();
      }
      goto LAB_143160b27;
    }
    FUN_140033559(".\\Runtime/D3D12RHI/Private/D3D12ExplicitDescriptorCache.cpp",0xf7,
                  L"Explicit sampler descriptor heap overflow. It is not possible to recover from this error, as maximum D3D12 sampler heap size is 2048."
                 );
  }
  else if (iVar5 != -1) {
    local_40 = (ulonglong)(uint)(*(int *)(param_1 + 0x24 + lVar6) * iVar5) +
               *(longlong *)(param_1 + 0x28 + lVar6);
    plVar3 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + lVar6) + 0x10) + 8);
    local_50 = *(undefined4 *)(param_1 + 8 + lVar6);
    local_58 = 0;
    local_68 = param_3;
    local_60 = param_2;
    local_34 = param_3;
    (**(code **)(*plVar3 + 0xb8))(plVar3,1);
    if ((param_4 == 1) && (*(char *)(param_1 + 0x68 + lVar6) != '\0')) {
      LOCK();
      piVar1 = (int *)(param_1 + 0x20 + lVar6);
      *piVar1 = *piVar1 + param_3;
      UNLOCK();
    }
    else if (param_4 == 0) goto LAB_143160b27;
    uVar4 = (ulonglong)*(int *)(param_1 + 0x1c + lVar6);
    if (DAT_14ca76a38 < uVar4) {
      DAT_14ca76a38 = uVar4;
    }
    goto LAB_143160b27;
  }
  iVar5 = -1;
LAB_143160b27:
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143160b4c FUN_143160b4c body=69 status=ok
// SIG undefined FUN_143160b4c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143160b4c(void)

{
  _DAT_14ca76a40 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143160b8e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca76a48,1);
  return;
}



// FUNCTION 143160b92 FUN_143160b92 body=1000 status=ok
// SIG undefined FUN_143160b92(void)

void FUN_143160b92(longlong param_1)

{
  undefined8 *puVar1;
  double dVar2;
  DWORD DVar3;
  DWORD DVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  undefined1 auStack_68 [32];
  LARGE_INTEGER local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar9 = *(int *)(*(longlong *)(param_1 + 0x38) + 8);
  if (*(longlong **)(param_1 + 0x18) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x10))();
    FUN_14315c060(*(undefined8 *)(*(longlong *)(param_1 + 0x38) + 0xac0),0);
  }
  dVar2 = DAT_14c760b98;
  if (*(char *)(param_1 + 10) == '\x01') {
    if (*(char *)(param_1 + 8) == '\x01') {
      DAT_14c867d1c = *(undefined1 *)(param_1 + 0xd);
      DAT_14ca84e99 = 0;
      *(undefined1 *)(param_1 + 10) = 0;
      dVar2 = DAT_14c760b98;
      if (iVar9 == 0) {
        FUN_1431da1f8(*(undefined8 *)(param_1 + 0x18));
        lVar7 = DAT_14ca83ad0;
        iVar9 = *(int *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60)
        ;
        if (((iVar9 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar9 == 2)) {
          uVar5 = 0;
        }
        else if (iVar9 == 1) {
          DVar3 = FUN_140ad26c0();
          DVar4 = GetCurrentThreadId();
          uVar5 = (ulonglong)(DVar3 != DVar4);
        }
        else {
          uVar5 = 1;
        }
        dVar2 = DAT_14c760b98;
        if ((*(int *)(lVar7 + uVar5 * 4) != 0) && (*(longlong *)(DAT_14cb0d2b0 + 0xc20) != 0)) {
          plVar8 = (longlong *)(*(longlong *)(DAT_14cb0d2b0 + 0xc20) + 0x38);
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14c872ef8) && (FUN_144b3d300(&DAT_14c872ef8), DAT_14c872ef8 == -1)) {
            FUN_1459825b0(&DAT_14c872ee0);
            atexit(FUN_1427868a5);
            _Init_thread_footer(&DAT_14c872ef8);
          }
          (**(code **)(*plVar8 + 8))(plVar8,0,L"SCREENSHOT",&DAT_14c872ee0);
          dVar2 = DAT_14c760b98;
        }
      }
    }
  }
  else if (*(char *)(param_1 + 0xb) == '\x01') {
    QueryPerformanceCounter(&local_48);
    lVar7 = DAT_14ca83b00;
    dVar2 = (double)local_48.QuadPart * DAT_14c83f420 + 16777216.0;
    if (*(char *)(param_1 + 8) == '\x01') {
      iVar9 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60);
      if (((iVar9 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar9 == 2)) {
        uVar5 = 0;
      }
      else if (iVar9 == 1) {
        DVar3 = FUN_140ad26c0();
        DVar4 = GetCurrentThreadId();
        uVar5 = (ulonglong)(DVar3 != DVar4);
      }
      else {
        uVar5 = 1;
      }
      lVar6 = *(longlong *)(param_1 + 0x18);
      if ((DAT_14c760b98 <= 0.0) ||
         ((float)(dVar2 - DAT_14c760b98) <= *(float *)(lVar7 + uVar5 * 4) * 0.001)) {
        if (lVar6 != 0) {
          iVar9 = *(int *)(param_1 + 0x48);
          if (3 < iVar9) {
            FUN_147371800(param_1 + 0x40);
            lVar6 = *(longlong *)(param_1 + 0x18);
            iVar9 = *(int *)(param_1 + 0x48);
          }
          *(uint *)(param_1 + 0x48) = iVar9 + 1U;
          if (*(uint *)(param_1 + 0x4c) < iVar9 + 1U) {
            FUN_1456bd870(param_1 + 0x40,iVar9);
          }
          *(longlong *)(*(longlong *)(param_1 + 0x40) + (longlong)iVar9 * 8) = lVar6;
          *(undefined8 *)(param_1 + 0x18) = 0;
        }
      }
      else if (lVar6 != 0) {
        if (0 < *(int *)(param_1 + 0x48)) {
          lVar7 = 0;
          do {
            FUN_1431da1f8(*(undefined8 *)(*(longlong *)(param_1 + 0x40) + lVar7 * 8));
            lVar7 = lVar7 + 1;
          } while (lVar7 < *(int *)(param_1 + 0x48));
          lVar6 = *(longlong *)(param_1 + 0x18);
        }
        FUN_1431da1f8(lVar6);
        if (*(longlong *)(DAT_14cb0d2b0 + 0xc20) != 0) {
          plVar8 = (longlong *)(*(longlong *)(DAT_14cb0d2b0 + 0xc20) + 0x38);
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14c872ef8) && (FUN_144b3d300(&DAT_14c872ef8), DAT_14c872ef8 == -1)) {
            FUN_1459825b0(&DAT_14c872ee0);
            atexit(FUN_1427868a5);
            _Init_thread_footer(&DAT_14c872ef8);
          }
          (**(code **)(*plVar8 + 8))(plVar8,0,L"SCREENSHOT",&DAT_14c872ee0);
        }
        *(undefined4 *)(param_1 + 0x10) = 5;
        FUN_1456f5818(param_1 + 0x40,0);
      }
    }
  }
  DAT_14c760b98 = dVar2;
  *(undefined1 *)(param_1 + 8) = 0;
  puVar1 = *(undefined8 **)(param_1 + 0x18);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  if ((local_40 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143160f7b FUN_143160f7b body=1127 status=ok
// SIG undefined FUN_143160f7b(void)

void FUN_143160f7b(undefined4 param_1,uint param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  double dVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined1 auVar10 [16];
  undefined1 auStack_168 [40];
  undefined4 local_140;
  undefined8 *local_138;
  LARGE_INTEGER local_128;
  LARGE_INTEGER local_120;
  undefined4 local_118;
  longlong *local_110;
  LARGE_INTEGER local_108;
  ulonglong local_100;
  longlong *local_f8;
  ulonglong uStack_f0;
  longlong local_e8;
  ulonglong uStack_e0;
  code *local_d8;
  LARGE_INTEGER *local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  LARGE_INTEGER local_b8;
  undefined8 uStack_b0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_168;
  QueryPerformanceCounter(&local_b8);
  local_128 = local_b8;
  local_e8 = 0;
  uStack_e0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_b8.QuadPart = 0;
  uStack_b0 = 0;
  local_8c = 0xffffffff00000080;
  local_84 = 0;
  local_78 = 0;
  local_70 = 0;
  auVar10 = roundpd(ZEXT816(0x416312d010000000),ZEXT816(0x416312d010000000),1);
  local_f8 = (longlong *)0x0;
  uStack_f0 = 0;
  QueryPerformanceCounter(&local_108);
  local_100 = 0xffffffffffffffff;
  if ((longlong)auVar10._0_8_ != 0x7fffffffffffffff) {
    dVar5 = (double)(longlong)auVar10._0_8_ / 10000000.0;
    if (dVar5 <= 0.0) {
      local_100 = 0;
    }
    else {
      dVar5 = dVar5 / DAT_14c83f418;
      local_100 = (ulonglong)dVar5;
      local_100 = (longlong)(dVar5 - 9.223372036854776e+18) & (longlong)local_100 >> 0x3f |
                  local_100;
    }
  }
  FUN_147405cf0(&local_f8,1);
  if ((longlong)(int)uStack_f0 != 0) {
    plVar1 = local_f8 + (int)uStack_f0;
    plVar9 = local_f8;
    do {
      lVar4 = *plVar9;
      if (lVar4 != 0) {
        cVar2 = *(char *)(lVar4 + 0xc);
        if (cVar2 == '\x0e') {
          uVar6 = *(int *)(*(longlong *)(*(longlong *)(*(longlong *)(lVar4 + 0x28) + 0x10) + 0x538)
                          + 0x58) + 1;
          if ((uVar6 < *(uint *)(lVar4 + 0x30)) || (uVar6 - *(uint *)(lVar4 + 0x30) <= param_2)) {
            FUN_147371cf1(*(undefined8 *)(lVar4 + 0x10),&local_e8);
          }
        }
        else if (cVar2 == '\x0f') {
          uVar6 = *(int *)(*(longlong *)(*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x10) + 0x538)
                          + 0x58) + 1;
          if ((uVar6 < *(uint *)(lVar4 + 0x134)) || (uVar6 - *(uint *)(lVar4 + 0x134) <= param_2)) {
            iVar3 = *(int *)(lVar4 + 0x20);
            if ((longlong)iVar3 != 0) {
              lVar7 = *(longlong *)(lVar4 + 0x18);
              lVar8 = 0;
              do {
                FUN_147371dde(*(undefined8 *)(lVar7 + lVar8),&local_e8);
                lVar8 = lVar8 + 8;
              } while ((longlong)iVar3 * 8 != lVar8);
            }
            iVar3 = *(int *)(lVar4 + 0x80);
            if ((longlong)iVar3 != 0) {
              lVar7 = *(longlong *)(lVar4 + 0x78);
              lVar8 = 0;
              do {
                FUN_147371dde(*(undefined8 *)(lVar7 + lVar8),&local_e8);
                lVar8 = lVar8 + 8;
              } while ((longlong)iVar3 * 8 != lVar8);
            }
            iVar3 = *(int *)(lVar4 + 0x60);
            if ((longlong)iVar3 != 0) {
              lVar7 = *(longlong *)(lVar4 + 0x58);
              lVar8 = 0;
              do {
                FUN_147371dde(*(undefined8 *)(lVar7 + lVar8),&local_e8);
                lVar8 = lVar8 + 8;
              } while ((longlong)iVar3 * 8 != lVar8);
            }
            iVar3 = *(int *)(lVar4 + 0x40);
            if ((longlong)iVar3 != 0) {
              lVar4 = *(longlong *)(lVar4 + 0x38);
              lVar7 = 0;
              do {
                FUN_147371dde(*(undefined8 *)(lVar4 + lVar7),&local_e8);
                lVar7 = lVar7 + 8;
              } while ((longlong)iVar3 * 8 != lVar7);
            }
          }
        }
        else if (cVar2 == ')') {
          uVar6 = *(int *)(*(longlong *)(*(longlong *)(*(longlong *)(lVar4 + 0x28) + 0x10) + 0x538)
                          + 0x58) + 1;
          if (((uVar6 < *(uint *)(lVar4 + 0x84)) || (uVar6 - *(uint *)(lVar4 + 0x84) <= param_2)) &&
             (iVar3 = *(int *)(lVar4 + 0x90), (longlong)iVar3 != 0)) {
            lVar4 = *(longlong *)(lVar4 + 0x88);
            lVar7 = 0;
            do {
              FUN_147371dde(*(undefined8 *)(lVar4 + lVar7),&local_e8);
              lVar7 = lVar7 + 8;
            } while ((longlong)iVar3 * 8 != lVar7);
          }
        }
        else {
          uVar6 = *(int *)(*(longlong *)(*(longlong *)(*(longlong *)(lVar4 + 0x20) + 0x10) + 0x538)
                          + 0x58) + 1;
          if ((uVar6 < *(uint *)(lVar4 + 0x28)) || (uVar6 - *(uint *)(lVar4 + 0x28) <= param_2)) {
            FUN_147371850(*(undefined8 *)(lVar4 + 0x38),&local_e8,&local_b8);
            FUN_14737193d(*(undefined8 *)(lVar4 + 0x58),&local_e8,&local_b8);
            FUN_147371a2a(*(undefined8 *)(lVar4 + 0x50),&local_e8,&local_b8);
            FUN_147371b17(*(undefined8 *)(lVar4 + 0x48),&local_e8,&local_b8);
            FUN_147371c04(*(undefined8 *)(lVar4 + 0x40),&local_e8);
          }
        }
      }
      plVar9 = plVar9 + 1;
    } while (plVar9 != plVar1);
  }
  local_d0 = &local_120;
  local_120 = local_128;
  local_110 = &local_e8;
  local_138 = &local_c8;
  local_c8 = 0;
  local_c0 = 0;
  local_d8 = FUN_143169dec;
  local_140 = 0;
  local_118 = param_1;
  FUN_1401f8d10(L"ParallelFor Task",uStack_e0 & 0xffffffff,1);
  QueryPerformanceCounter(&local_120);
  FUN_1446fc3c5(local_f8,uStack_f0 & 0xffffffff);
  if (local_f8 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  local_70 = 0;
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  FUN_14737a142(&local_b8);
  if (local_e8 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1431613e3 FUN_1431613e3 body=69 status=ok
// SIG undefined FUN_1431613e3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431613e3(void)

{
  _DAT_14ca76a50 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143161425. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca76a58,1);
  return;
}



// FUNCTION 143161428 FUN_143161428 body=69 status=ok
// SIG undefined FUN_143161428(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143161428(void)

{
  _DAT_14ca76a70 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014316146a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca76a78,1);
  return;
}



// FUNCTION 14316146d FUN_14316146d body=69 status=ok
// SIG undefined FUN_14316146d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14316146d(void)

{
  _DAT_14ca76a88 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431614af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca76a90,1);
  return;
}



// FUNCTION 1431614b2 FUN_1431614b2 body=1210 status=ok
// SIG undefined FUN_1431614b2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431614b2(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  byte bVar8;
  int iVar9;
  undefined8 *puVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  undefined1 auStack_e8 [32];
  ulonglong local_c8;
  undefined8 *local_c0;
  undefined8 local_b8;
  longlong *local_b0;
  wchar_t *local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  ulonglong local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar11 = *(longlong *)(param_1 + 0x10);
  if (lVar11 != 0) {
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x90) + 0x10);
    if (*(int *)(param_1 + 0xc0) == 0) {
      uStack_60 = *(undefined4 *)(param_1 + 0xa0);
      local_54 = 1;
      uVar13 = 1;
      if (DAT_14ca81480 == 0) {
        local_54 = *(undefined4 *)(param_1 + 0x98);
        uVar13 = *(uint *)(param_1 + 0x9c);
      }
      uStack_48 = 0;
      uVar12 = 0;
      local_68._0_4_ = (undefined4)lVar11;
      local_68._4_4_ = (undefined4)((ulonglong)lVar11 >> 0x20);
      uStack_5c = 0;
      uStack_58 = 0;
      local_50 = (ulonglong)uVar13;
      if (*(char *)(lVar5 + 0x6a8) == '\0') {
        uVar12 = *(uint *)(param_1 + 0xa4);
      }
      if (*(char *)(lVar5 + 0xc6) == '\x01') {
        uVar12 = uVar12 | 0x1000;
      }
      local_40 = (ulonglong)uVar12;
      local_70 = 0;
      iVar9 = (**(code **)(**(longlong **)(lVar5 + 8) + 0xe0))
                        (*(longlong **)(lVar5 + 8),&local_68,&DAT_14a349268);
      if (iVar9 < 0) {
        local_c0 = &local_88;
        local_88 = 0;
        uStack_80 = 0;
        local_c8 = 0;
        FUN_145763094(iVar9,"Adapter->GetD3DDevice()->CreateHeap(&Desc, IID_PPV_ARGS(&Heap))",
                      ".\\Runtime/D3D12RHI/Private/D3D12PoolAllocator.cpp",0x5d);
      }
      puVar10 = (undefined8 *)FUN_14001cc68(0x88,0x10);
      uVar3 = *(undefined4 *)(param_1 + 0xe0);
      uVar4 = *(undefined4 *)(param_1 + 0x9c);
      puVar7 = *(undefined4 **)(param_1 + 0x90);
      *puVar10 = &PTR_FUN_149e002e8;
      *(undefined4 *)(puVar10 + 1) = 0;
      puVar10[2] = puVar7;
      *(undefined4 *)(puVar10 + 3) = *puVar7;
      *(undefined4 *)((longlong)puVar10 + 0x1c) = uVar4;
      *puVar10 = &PTR_FUN_14a34ce88;
      puVar10[4] = 0;
      puVar10[5] = 0;
      *(undefined1 *)(puVar10 + 6) = 1;
      puVar10[0xd] = 0;
      puVar10[0xe] = 0;
      *(undefined4 *)((longlong)puVar10 + 0x7c) = uVar3;
      *(undefined2 *)(puVar10 + 0x10) = 0x100;
      puVar6 = *(undefined8 **)(param_1 + 0xd0);
      if (puVar6 != puVar10) {
        *(undefined8 **)(param_1 + 0xd0) = puVar10;
        if (puVar10 != (undefined8 *)0x0) {
          LOCK();
          *(int *)(puVar10 + 1) = *(int *)(puVar10 + 1) + 1;
          UNLOCK();
        }
        if (puVar6 != (undefined8 *)0x0) {
          LOCK();
          piVar1 = (int *)(puVar6 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar6)(puVar6,1);
          }
        }
      }
      local_c8 = local_c8 & 0xffffffffffffff00;
      FUN_141033122(*(undefined8 *)(param_1 + 0xd0),local_70,L"PoolAllocator Heap",1);
      if ((*(int *)(param_1 + 0xa0) == 1) ||
         ((*(int *)(param_1 + 0xa0) == 4 && (_DAT_00000004 == 1)))) {
        FUN_1405e2cd8(*(undefined8 *)(param_1 + 0xd0),CONCAT44(local_68._4_4_,(undefined4)local_68))
        ;
      }
    }
    else {
      uStack_58 = 1;
      uStack_5c = 1;
      if (DAT_14ca81480 == 0) {
        uStack_58 = *(undefined4 *)(param_1 + 0x9c);
        uStack_5c = *(undefined4 *)(param_1 + 0x98);
      }
      local_68._0_4_ = *(undefined4 *)(param_1 + 0xa0);
      local_68._4_4_ = 0;
      uStack_60 = 0;
      uVar3 = *(undefined4 *)(param_1 + 0xa8);
      plVar2 = (longlong *)(param_1 + 200);
      puVar6 = *(undefined8 **)(param_1 + 200);
      if (puVar6 != (undefined8 *)0x0) {
        *plVar2 = 0;
        LOCK();
        piVar1 = (int *)(puVar6 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar6)(puVar6,1);
        }
      }
      local_b8 = *(undefined8 *)(param_1 + 0x10);
      local_a8 = L"Resource Allocator Underlying Buffer";
      local_c0 = (undefined8 *)CONCAT44(local_c0._4_4_,*(undefined4 *)(param_1 + 0xac));
      local_c8 = CONCAT44(local_c8._4_4_,1);
      local_b0 = plVar2;
      local_a0 = uVar3;
      iVar9 = FUN_140a6e772(lVar5,&local_68,*(undefined4 *)(param_1 + 0x98));
      if (iVar9 < 0) {
        local_c0 = &local_98;
        local_98 = 0;
        uStack_90 = 0;
        local_c8 = 0;
        FUN_145763094(iVar9,
                      "Adapter->CreateBuffer(HeapProps, GetGPUMask(), InitConfig.InitialResourceState, ED3D12ResourceStateMode::SingleState, InitConfig.InitialResourceState, PoolSize, BackingResource.GetInitReference(), TEXT(\"Resource Allocator Underlying Buffer\"), InitConfig.ResourceFlags)"
                      ,".\\Runtime/D3D12RHI/Private/D3D12PoolAllocator.cpp",0x72);
      }
      if ((*(int *)(param_1 + 0xa0) != 1) &&
         ((*(int *)(param_1 + 0xa0) != 4 || (_DAT_00000004 != 1)))) {
        lVar11 = *plVar2;
        if ((*(int *)(lVar11 + 0xd8) == 0) &&
           (iVar9 = (**(code **)(**(longlong **)(lVar11 + 0x20) + 0x40))
                              (*(longlong **)(lVar11 + 0x20),0,0,lVar11 + 0x48), iVar9 < 0)) {
          local_68._0_4_ = 0;
          local_68._4_4_ = 0;
          uStack_60 = 0;
          uStack_5c = 0;
          local_c8 = 0;
          local_c0 = &local_68;
          FUN_145763094(iVar9,"Resource->Map(0, ReadRange, &ResourceBaseAddress)",
                        ".\\Runtime/D3D12RHI/Private\\D3D12Resources.h",0x119);
        }
        *(int *)(lVar11 + 0xd8) = *(int *)(lVar11 + 0xd8) + 1;
      }
    }
    if ((((*(int *)(param_1 + 0xa0) == 1) ||
         ((*(int *)(param_1 + 0xa0) == 4 && (_DAT_00000004 == 1)))) &&
        (*(int *)(param_1 + 0xac) == 0x400000)) && (uVar13 = *(uint *)(param_1 + 0x98), uVar13 != 0)
       ) {
      uVar12 = 0;
      if (uVar13 != 0) {
        for (; (uVar13 >> uVar12 & 1) == 0; uVar12 = uVar12 + 1) {
        }
      }
      do {
        if (*(int *)(param_1 + 0xc0) == 0) {
          lVar11 = *(longlong *)(param_1 + 0xd0);
        }
        else {
          lVar11 = *(longlong *)(*(longlong *)(param_1 + 200) + 0x30);
          if (lVar11 == 0) {
            lVar11 = *(longlong *)(param_1 + 200);
          }
        }
        local_68._0_4_ = (undefined4)*(undefined8 *)(lVar11 + 0x20);
        local_68._4_4_ = (undefined4)((ulonglong)*(undefined8 *)(lVar11 + 0x20) >> 0x20);
        local_70 = CONCAT44(local_70._4_4_,0xa0010000);
        plVar2 = *(longlong **)
                  (*(longlong *)(*(longlong *)(lVar5 + 2000 + (ulonglong)uVar12 * 8) + 0x10) + 0x30)
        ;
        (**(code **)(*plVar2 + 0x170))(plVar2,1,&local_68,&local_70);
        bVar8 = (byte)uVar12 & 0x1f;
        uVar13 = uVar13 & (-2 << bVar8 | 0xfffffffeU >> 0x20 - bVar8);
        if (uVar13 == 0) {
          uVar12 = 0x20;
        }
        else {
          uVar12 = 0;
          if (uVar13 != 0) {
            for (; (uVar13 >> uVar12 & 1) == 0; uVar12 = uVar12 + 1) {
            }
          }
        }
      } while (uVar13 != 0);
    }
    FUN_140acc522(param_1);
  }
  if ((local_38 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14316196e FUN_14316196e body=338 status=ok
// SIG undefined FUN_14316196e(void)

undefined8 * FUN_14316196e(longlong param_1,undefined2 param_2,uint param_3,undefined4 param_4)

{
  ulonglong uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  void *_Src;
  longlong lVar8;
  undefined8 *puVar9;
  undefined **ppuVar10;
  uint uVar11;
  
  uVar11 = *(uint *)(param_1 + 8);
  if (*(uint *)(param_1 + 8) < param_3) {
    uVar1 = (ulonglong)(param_3 - 1) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar11 = 1 << ((byte)lVar8 & 0x1f);
    if (*(uint *)(param_1 + 0x18) <= uVar11) {
      uVar11 = *(uint *)(param_1 + 0x18);
    }
  }
  puVar9 = (undefined8 *)FUN_14001cc68(0xe8,0x10);
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  uVar3 = *(undefined4 *)(param_1 + 0x20);
  uVar4 = *(undefined4 *)(param_1 + 0xb8);
  uVar5 = *(undefined4 *)(param_1 + 0x94);
  puVar7 = *(undefined4 **)(param_1 + 0x88);
  *(undefined2 *)(puVar9 + 1) = param_2;
  puVar9[2] = (ulonglong)uVar11;
  *(undefined4 *)(puVar9 + 3) = uVar2;
  *(undefined4 *)((longlong)puVar9 + 0x1c) = param_4;
  *(undefined4 *)(puVar9 + 4) = uVar3;
  puVar9[5] = 0;
  puVar9[6] = 0;
  *(undefined4 *)(puVar9 + 7) = 0;
  puVar9[0x10] = 0;
  puVar9[0x11] = 0;
  puVar9[0xe] = 0;
  puVar9[0xf] = 0;
  puVar9[0x12] = puVar7;
  *(undefined4 *)(puVar9 + 0x13) = *puVar7;
  *(undefined4 *)((longlong)puVar9 + 0x9c) = uVar5;
  ppuVar10 = &PTR_FUN_14a34ab30;
  *puVar9 = &PTR_FUN_14a34ab30;
  uVar2 = *(undefined4 *)(param_1 + 0x9c);
  uVar3 = *(undefined4 *)(param_1 + 0xa0);
  uVar5 = *(undefined4 *)(param_1 + 0xa4);
  *(undefined4 *)(puVar9 + 0x14) = *(undefined4 *)(param_1 + 0x98);
  *(undefined4 *)((longlong)puVar9 + 0xa4) = uVar2;
  *(undefined4 *)(puVar9 + 0x15) = uVar3;
  *(undefined4 *)((longlong)puVar9 + 0xac) = uVar5;
  puVar9[0x16] = 0;
  iVar6 = *(int *)(param_1 + 0xb0);
  _Src = *(void **)(param_1 + 0xa8);
  *(int *)(puVar9 + 0x17) = iVar6;
  if ((longlong)iVar6 == 0) {
    *(undefined4 *)((longlong)puVar9 + 0xbc) = 0;
  }
  else {
    FUN_1446dd670(puVar9 + 0x16,iVar6,0);
    memcpy((void *)puVar9[0x16],_Src,(longlong)iVar6 * 2);
    ppuVar10 = (undefined **)*puVar9;
  }
  *(undefined4 *)(puVar9 + 0x18) = uVar4;
  puVar9[0x19] = 0;
  puVar9[0x1a] = 0;
  puVar9[0x1b] = 0;
  (*(code *)ppuVar10[1])(puVar9);
  return puVar9;
}



// FUNCTION 143161ac0 FUN_143161ac0 body=69 status=ok
// SIG undefined FUN_143161ac0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143161ac0(void)

{
  _DAT_14ca76aa0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143161b02. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca76aa8,1);
  return;
}



// FUNCTION 143161b06 FUN_143161b06 body=1153 status=ok
// SIG undefined FUN_143161b06(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143161b06(undefined8 param_1,ulonglong *param_2,int param_3)

{
  ulonglong *puVar1;
  int *piVar2;
  uint *puVar3;
  ulonglong uVar4;
  byte bVar5;
  uint uVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  uint uVar15;
  undefined4 uVar16;
  int iVar17;
  uint uVar18;
  longlong lVar19;
  undefined8 uVar20;
  bool bVar21;
  undefined1 auStack_78 [40];
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar18 = *(uint *)((longlong)param_2 + 0x17c);
  if (uVar18 != 0) {
    uVar6 = 0;
    if (uVar18 != 0) {
      for (; (uVar18 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
      }
    }
    do {
      puVar7 = (undefined8 *)FUN_144ad3d06(0x30);
      FUN_144724502(puVar7,1);
      if (puVar7 == (undefined8 *)0x0) {
        param_2[(ulonglong)(param_3 == 1) * 8 + (ulonglong)uVar6 + 0x39] = 0;
        LOCK();
        _DAT_00000008 = _DAT_00000008 + 1;
        UNLOCK();
      }
      else {
        LOCK();
        *(int *)(puVar7 + 1) = *(int *)(puVar7 + 1) + 1;
        UNLOCK();
        param_2[(ulonglong)(param_3 == 1) * 8 + (ulonglong)uVar6 + 0x39] = (ulonglong)puVar7;
        LOCK();
        *(int *)(puVar7 + 1) = *(int *)(puVar7 + 1) + 1;
        UNLOCK();
        LOCK();
        piVar2 = (int *)(puVar7 + 1);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)*puVar7)(puVar7,1);
        }
      }
      bVar5 = (byte)uVar6 & 0x1f;
      uVar18 = uVar18 & (-2 << bVar5 | 0xfffffffeU >> 0x20 - bVar5);
      if (uVar18 == 0) {
        uVar6 = 0x20;
      }
      else {
        uVar6 = 0;
        if (uVar18 != 0) {
          for (; (uVar18 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
          }
        }
      }
    } while (uVar18 != 0);
  }
  if ((param_3 == 1) && (DAT_14ca76a98 != 0)) {
    if (*(char *)((longlong)param_2 + 100) == '\x01') {
      uVar18 = *(uint *)((longlong)param_2 + 0x17c);
      if (uVar18 != 0) {
        iVar17 = 0;
        if (uVar18 != 0) {
          for (; (uVar18 >> iVar17 & 1) == 0; iVar17 = iVar17 + 1) {
          }
        }
        do {
          plVar8 = (longlong *)
                   (**(code **)(*(longlong *)param_2[8] + 0x278))((longlong *)param_2[8],iVar17);
          uVar11 = plVar8[0x776];
          if (uVar11 == 0) {
            puVar1 = (ulonglong *)(plVar8 + 0x776);
            (**(code **)(*DAT_14ca83900 + 0x290))(DAT_14ca83900,&local_50,1);
            uVar11 = local_50;
            if (puVar1 == &local_50) {
LAB_143161cc0:
              uVar11 = local_50;
              if (local_50 != 0) {
                LOCK();
                puVar3 = (uint *)(local_50 + 8);
                uVar6 = *puVar3;
                *puVar3 = *puVar3 - 1;
                UNLOCK();
                if ((uVar6 & 0x3fffffff) == 1) {
                  puVar3 = (uint *)(local_50 + 8);
                  LOCK();
                  uVar6 = *puVar3;
                  *puVar3 = *puVar3 | 0x40000000;
                  UNLOCK();
                  if ((uVar6 >> 0x1e & 1) == 0) {
                    bVar5 = *(byte *)(local_50 + 0xd);
                    plVar9 = (longlong *)FUN_14001cc68(0x10,8);
                    plVar9[1] = uVar11;
                    plVar13 = DAT_14ca843c0;
                    plVar10 = DAT_14ca843c8;
                    if ((bVar5 & 2) == 0) {
                      do {
                        *plVar9 = (longlong)plVar13;
                        LOCK();
                        bVar21 = plVar13 != DAT_14ca843c0;
                        plVar10 = plVar9;
                        if (bVar21) {
                          plVar13 = DAT_14ca843c0;
                          plVar10 = DAT_14ca843c0;
                        }
                        DAT_14ca843c0 = plVar10;
                        UNLOCK();
                      } while (bVar21);
                    }
                    else {
                      do {
                        *plVar9 = (longlong)plVar10;
                        LOCK();
                        bVar21 = plVar10 != DAT_14ca843c8;
                        plVar13 = plVar9;
                        if (bVar21) {
                          plVar10 = DAT_14ca843c8;
                          plVar13 = DAT_14ca843c8;
                        }
                        DAT_14ca843c8 = plVar13;
                        UNLOCK();
                      } while (bVar21);
                    }
                  }
                }
              }
              uVar11 = *puVar1;
            }
            else {
              uVar4 = *puVar1;
              *puVar1 = local_50;
              local_50 = 0;
              if (uVar4 != 0) {
                LOCK();
                puVar3 = (uint *)(uVar4 + 8);
                uVar6 = *puVar3;
                *puVar3 = *puVar3 - 1;
                UNLOCK();
                if ((uVar6 & 0x3fffffff) == 1) {
                  puVar3 = (uint *)(uVar4 + 8);
                  LOCK();
                  uVar6 = *puVar3;
                  *puVar3 = *puVar3 | 0x40000000;
                  UNLOCK();
                  if ((uVar6 >> 0x1e & 1) == 0) {
                    bVar5 = *(byte *)(uVar4 + 0xd);
                    plVar9 = (longlong *)FUN_14001cc68(0x10,8);
                    plVar9[1] = uVar4;
                    plVar13 = DAT_14ca843c0;
                    plVar10 = DAT_14ca843c8;
                    if ((bVar5 & 2) == 0) {
                      do {
                        *plVar9 = (longlong)plVar13;
                        LOCK();
                        bVar21 = plVar13 != DAT_14ca843c0;
                        plVar10 = plVar9;
                        if (bVar21) {
                          plVar13 = DAT_14ca843c0;
                          plVar10 = DAT_14ca843c0;
                        }
                        DAT_14ca843c0 = plVar10;
                        UNLOCK();
                      } while (bVar21);
                    }
                    else {
                      do {
                        *plVar9 = (longlong)plVar10;
                        LOCK();
                        bVar21 = plVar10 != DAT_14ca843c8;
                        plVar13 = plVar9;
                        if (bVar21) {
                          plVar10 = DAT_14ca843c8;
                          plVar13 = DAT_14ca843c8;
                        }
                        DAT_14ca843c8 = plVar13;
                        UNLOCK();
                      } while (bVar21);
                    }
                  }
                }
                goto LAB_143161cc0;
              }
            }
            if (uVar11 != 0) goto LAB_143161d39;
            lVar19 = 0;
          }
          else {
LAB_143161d39:
            uVar6 = *(uint *)(plVar8 + 0x5c);
            if (uVar6 == 0) {
              uVar15 = 0x20;
            }
            else {
              uVar15 = 0;
              if (uVar6 != 0) {
                for (; (uVar6 >> uVar15 & 1) == 0; uVar15 = uVar15 + 1) {
                }
              }
            }
            lVar19 = *(longlong *)(uVar11 + 0x20 + (ulonglong)uVar15 * 8);
          }
          uVar20 = *(undefined8 *)(lVar19 + 0x70);
          lVar12 = plVar8[0x22];
          if ((lVar12 == 0) ||
             (uVar6 = *(uint *)(lVar12 + 4), *(uint *)(plVar8[0x21] + 0x20) <= uVar6)) {
            FUN_140059560(plVar8[0x15],&local_50,(int)plVar8[0x16],
                          *(undefined4 *)((longlong)plVar8 + 0xb4));
            if (local_50 != 0) {
              plVar8[0x21] = local_50;
              uVar6 = ((uint)(local_50 >> 0x14) & 0xffff ^ (uint)(local_50 >> 4)) * -0x7a143595;
              uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
              lVar12 = FUN_14005975a(plVar8 + 0x17,uVar6 >> 0x10 ^ uVar6,&local_50);
              plVar8[0x22] = lVar12;
              if (local_50 != 0) {
                LOCK();
                piVar2 = (int *)(local_50 + 0x478);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  FUN_1402cd3ea(*(undefined8 *)(local_50 + 0x10));
                }
                lVar12 = plVar8[0x22];
              }
              uVar6 = *(uint *)(lVar12 + 4);
              goto LAB_143161d7d;
            }
            lVar12 = 0;
            uVar6 = 0;
            uVar16 = 0;
            uVar20 = 0;
          }
          else {
LAB_143161d7d:
            *(uint *)(lVar12 + 4) = uVar6 + 1;
            lVar12 = plVar8[0x21];
            uVar16 = 8;
          }
          *(longlong *)(lVar19 + 0x78) = lVar12;
          *(uint *)(lVar19 + 0x80) = uVar6;
          *(undefined4 *)(lVar19 + 0x84) = uVar16;
          *(undefined8 *)(lVar19 + 0x88) = uVar20;
          lVar12 = plVar8[0x33];
          if (lVar12 == 0) {
            (**(code **)(*plVar8 + 8))(plVar8);
            lVar12 = plVar8[0x33];
          }
          *(int *)(lVar12 + 0x1c0) = *(int *)(lVar12 + 0x1c0) + 1;
          (**(code **)(**(longlong **)(lVar12 + 0x28) + 0x1a0))
                    (*(longlong **)(lVar12 + 0x28),
                     *(undefined8 *)(*(longlong *)(lVar19 + 0x78) + 0x38),
                     *(undefined4 *)(*(longlong *)(lVar19 + 0x78) + 0x18),
                     *(undefined4 *)(lVar19 + 0x80));
          *(int *)((longlong)plVar8 + 0x1c4) = *(int *)((longlong)plVar8 + 0x1c4) + 1;
          *(undefined1 *)(plVar8 + 0x777) = 1;
          bVar5 = (byte)iVar17 & 0x1f;
          uVar18 = uVar18 & (-2 << bVar5 | 0xfffffffeU >> 0x20 - bVar5);
          if (uVar18 == 0) {
            iVar17 = 0x20;
          }
          else {
            iVar17 = 0;
            if (uVar18 != 0) {
              for (; (uVar18 >> iVar17 & 1) == 0; iVar17 = iVar17 + 1) {
              }
            }
          }
        } while (uVar18 != 0);
      }
    }
    else {
      puVar14 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar7 = puVar14 + 3;
      if ((undefined8 *)param_2[1] < puVar7) {
        FUN_140023dd8(param_2,0x20);
        puVar14 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar7 = puVar14 + 3;
      }
      *param_2 = (ulonglong)puVar7;
      *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
      *(undefined8 **)param_2[6] = puVar14;
      param_2[6] = (ulonglong)(puVar14 + 1);
      puVar14[1] = 0;
      *puVar14 = &PTR_FUN_14a34c440;
    }
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143161f88 FUN_143161f88 body=518 status=ok
// SIG undefined FUN_143161f88(void)

void FUN_143161f88(undefined8 param_1,ulonglong *param_2,longlong param_3)

{
  int *piVar1;
  int iVar2;
  byte bVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  uint uVar8;
  uint uVar9;
  
  uVar9 = *(uint *)((longlong)param_2 + 0x17c);
  if (uVar9 != 0) {
    uVar8 = 0;
    if (uVar9 != 0) {
      for (; (uVar9 >> uVar8 & 1) == 0; uVar8 = uVar8 + 1) {
      }
    }
    do {
      if (param_3 == 0) {
        lVar5 = 0;
      }
      else {
        lVar5 = *(longlong *)(param_3 + 0x20 + (ulonglong)uVar8 * 8);
      }
      puVar7 = (undefined8 *)
               param_2[(ulonglong)(*(int *)(lVar5 + 0x60) == 1) * 8 + (ulonglong)uVar8 + 0x39];
      if (puVar7 == (undefined8 *)0x0) {
        lVar4 = FUN_144ad3d06(0x30);
        FUN_144724502(lVar4,1);
        if (lVar4 != 0) {
          LOCK();
          *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
          UNLOCK();
        }
        puVar7 = *(undefined8 **)(lVar5 + 0x68);
        *(longlong *)(lVar5 + 0x68) = lVar4;
        if (puVar7 != (undefined8 *)0x0) {
          LOCK();
          piVar1 = (int *)(puVar7 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar7)(puVar7,1);
          }
          lVar4 = *(longlong *)(lVar5 + 0x68);
        }
        if (lVar4 != 0) {
          LOCK();
          *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
          UNLOCK();
        }
        if (*(char *)((longlong)param_2 + 100) == '\x01') {
          lVar5 = (**(code **)(*(longlong *)param_2[8] + 0x278))((longlong *)param_2[8],uVar8);
          iVar2 = *(int *)(lVar5 + 0x30);
          *(uint *)(lVar5 + 0x30) = iVar2 + 1U;
          if (*(uint *)(lVar5 + 0x34) < iVar2 + 1U) {
            FUN_14476c1d2((longlong *)(lVar5 + 0x28),iVar2);
          }
          *(longlong *)(*(longlong *)(lVar5 + 0x28) + (longlong)iVar2 * 8) = lVar4;
        }
        else {
          puVar6 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar7 = puVar6 + 4;
          if ((undefined8 *)param_2[1] < puVar7) {
            FUN_140023dd8(param_2,0x28);
            puVar6 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
            puVar7 = puVar6 + 4;
          }
          *param_2 = (ulonglong)puVar7;
          *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
          *(undefined8 **)param_2[6] = puVar6;
          param_2[6] = (ulonglong)(puVar6 + 1);
          puVar6[1] = 0;
          *puVar6 = &PTR_FUN_14a34c448;
          puVar6[2] = lVar4;
          *(uint *)(puVar6 + 3) = uVar8;
        }
      }
      else {
        puVar6 = *(undefined8 **)(lVar5 + 0x68);
        if (puVar6 != puVar7) {
          *(undefined8 **)(lVar5 + 0x68) = puVar7;
          LOCK();
          *(int *)(puVar7 + 1) = *(int *)(puVar7 + 1) + 1;
          UNLOCK();
          if (puVar6 != (undefined8 *)0x0) {
            LOCK();
            piVar1 = (int *)(puVar6 + 1);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)*puVar6)(puVar6,1);
            }
          }
        }
      }
      bVar3 = (byte)uVar8 & 0x1f;
      uVar9 = uVar9 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
      if (uVar9 == 0) {
        uVar8 = 0x20;
      }
      else {
        uVar8 = 0;
        if (uVar9 != 0) {
          for (; (uVar9 >> uVar8 & 1) == 0; uVar8 = uVar8 + 1) {
          }
        }
      }
    } while (uVar9 != 0);
  }
  puVar6 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar7 = puVar6 + 3;
  if ((undefined8 *)param_2[1] < puVar7) {
    FUN_140023dd8(param_2,0x20);
    puVar6 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar6 + 3;
  }
  *param_2 = (ulonglong)puVar7;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar6;
  param_2[6] = (ulonglong)(puVar6 + 1);
  puVar6[1] = 0;
  *puVar6 = &PTR_LAB_14a380c50;
  puVar6[2] = param_3;
  return;
}



// FUNCTION 14316218e FUN_14316218e body=69 status=ok
// SIG undefined FUN_14316218e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14316218e(void)

{
  _DAT_14ca76ac8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431621d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca76ad0,1);
  return;
}



// FUNCTION 1431621d3 FUN_1431621d3 body=69 status=ok
// SIG undefined FUN_1431621d3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431621d3(void)

{
  _DAT_14ca76ae0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143162215. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca76ae8,1);
  return;
}



// FUNCTION 143162218 FUN_143162218 body=69 status=ok
// SIG undefined FUN_143162218(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143162218(void)

{
  _DAT_14ca76af0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014316225a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca76af8,1);
  return;
}



// FUNCTION 14316225d FUN_14316225d body=69 status=ok
// SIG undefined FUN_14316225d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14316225d(void)

{
  _DAT_14ca76b00 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014316229f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca76b08,1);
  return;
}



// FUNCTION 1431622a2 FUN_1431622a2 body=69 status=ok
// SIG undefined FUN_1431622a2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431622a2(void)

{
  _DAT_14ca76b10 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431622e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca76b18,1);
  return;
}



// FUNCTION 1431622e7 FUN_1431622e7 body=69 status=ok
// SIG undefined FUN_1431622e7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431622e7(void)

{
  _DAT_14ca76b28 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143162329. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca76b30,1);
  return;
}



// FUNCTION 14316232c FUN_14316232c body=69 status=ok
// SIG undefined FUN_14316232c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14316232c(void)

{
  _DAT_14ca76b38 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014316236e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca76b40,1);
  return;
}



// FUNCTION 143162371 FUN_143162371 body=77 status=ok
// SIG undefined FUN_143162371(void)

uint FUN_143162371(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = (uint)*(byte *)(param_1 + 0x15) + (uint)*(byte *)(param_1 + 0x14) * 4 + 4;
  if ((*(byte *)(param_1 + 0x14) == 0) && (*(byte *)(param_1 + 0x15) == 0)) {
    uVar1 = uVar2 | 2;
    if (DAT_14c760ba4 == 0) {
      uVar1 = uVar2;
    }
    if (*(char *)(param_1 + 0x16) != '\0') {
      uVar2 = uVar1;
    }
  }
  if (DAT_14ca76ad8 == 2) {
    uVar2 = uVar2 & 3 | 4;
  }
  else if (DAT_14ca76ad8 == 1) {
    return uVar2 & 3 | 8;
  }
  return uVar2;
}



// FUNCTION 1431623be FUN_1431623be body=1430 status=ok
// SIG undefined FUN_1431623be(void)

void FUN_1431623be(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  longlong lVar8;
  undefined8 *puVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  bool bVar17;
  undefined1 auStack_a8 [32];
  int local_88;
  longlong local_80;
  longlong *local_78;
  longlong *local_70;
  longlong *local_68;
  LPCRITICAL_SECTION local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_60 = (LPCRITICAL_SECTION)(param_1 + 1);
  local_78 = param_2;
  EnterCriticalSection(local_60);
  uVar15 = (ulonglong)*(uint *)(*param_1 + 8);
  local_68 = param_1 + 10;
  iVar7 = (int)param_1[0xb];
  if (0 < iVar7) {
    if (param_1[0xe] != 0) {
      if ((*(byte *)(*(longlong *)(param_1[0xe] + 0x28) + 0xa0) & 1) == 0) goto LAB_1431628b0;
      iVar7 = (int)param_1[0xb];
    }
    local_70 = (longlong *)
               (**(code **)(*(longlong *)param_1[0xd] + 8))((longlong *)param_1[0xd],0,iVar7 << 3);
    iVar7 = (int)param_1[0xb];
    if (0 < iVar7) {
      lVar14 = 0;
      do {
        lVar16 = *(longlong *)(param_1[8] + lVar14 * 8);
        if (lVar16 != 0) {
          lVar12 = local_70[lVar14];
          *(undefined1 *)(lVar16 + 0xd8 + uVar15) = 0;
          if (lVar12 != 0) {
            lVar11 = *(longlong *)(lVar16 + 0x90 + uVar15 * 8);
            if (lVar11 != 0) {
              (**(code **)(*(longlong *)(lVar11 + 0x30) + 8))(lVar11 + 0x30);
            }
            local_80 = lVar16 + 0x260;
            local_88 = 0;
            FUN_1431658b8(&local_58,local_78[0x5b],uVar15,lVar12);
            lVar8 = *(longlong *)(lVar16 + 0x90 + uVar15 * 8);
            *(undefined8 *)(lVar16 + 0x90 + uVar15 * 8) = local_58;
            if (lVar8 != 0) {
              (**(code **)(*(longlong *)(lVar8 + 0x30) + 0x10))(lVar8 + 0x30);
            }
            plVar3 = local_78;
            uVar4 = *(undefined8 *)(lVar11 + 0x88);
            lVar8 = local_78[0x33];
            if (lVar8 == 0) {
              (**(code **)(*local_78 + 8))(local_78);
              lVar8 = plVar3[0x33];
            }
            FUN_1447093fc(lVar8,uVar4);
            uVar4 = *(undefined8 *)(*(longlong *)(lVar16 + 0x90 + uVar15 * 8) + 0x88);
            lVar8 = plVar3[0x33];
            if (lVar8 == 0) {
              (**(code **)(*plVar3 + 8))(plVar3);
              lVar8 = plVar3[0x33];
            }
            FUN_1447093fc(lVar8,uVar4);
            plVar6 = local_78;
            lVar8 = plVar3[0x33];
            if (lVar8 == 0) {
              (**(code **)(*local_78 + 8))(local_78);
              lVar8 = plVar6[0x33];
            }
            *(int *)(lVar8 + 0x1c0) = *(int *)(lVar8 + 0x1c0) + 1;
            (**(code **)(**(longlong **)(lVar8 + 0x48) + 0x250))
                      (*(longlong **)(lVar8 + 0x48),
                       *(undefined8 *)(*(longlong *)(lVar16 + 0x90 + uVar15 * 8) + 0xd0),
                       *(undefined8 *)(lVar11 + 0xd0),1);
            *(longlong *)(lVar16 + 0x2c0) = lVar12;
            if (lVar11 != 0) {
              (**(code **)(*(longlong *)(lVar11 + 0x30) + 0x10))((longlong *)(lVar11 + 0x30));
            }
          }
          iVar7 = (int)param_1[0xb];
        }
        lVar14 = lVar14 + 1;
      } while (lVar14 < iVar7);
    }
    (**(code **)(*(longlong *)param_1[0xd] + 0x10))();
    puVar5 = (undefined8 *)param_1[0xe];
    if (puVar5 != (undefined8 *)0x0) {
      param_1[0xe] = 0;
      LOCK();
      piVar1 = (int *)(puVar5 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar5)(puVar5,1);
      }
    }
    iVar7 = (int)param_1[9];
    if (iVar7 < 0) {
LAB_143162901:
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar7);
    }
    *(undefined4 *)(param_1 + 9) = 0;
    if (*(int *)((longlong)param_1 + 0x4c) != iVar7) {
      FUN_14737a99e(param_1 + 8);
    }
    iVar7 = (int)param_1[0xb];
    if (iVar7 < 0) goto LAB_143162901;
    *(undefined4 *)(param_1 + 0xb) = 0;
    if (*(int *)((longlong)param_1 + 0x5c) != iVar7) {
      FUN_1448f21ac(local_68);
    }
  }
  lVar14 = param_1[7];
  if ((longlong)(int)lVar14 == 0) {
    uVar13 = *(uint *)(param_1 + 9);
  }
  else {
    lVar16 = param_1[6];
    local_70 = param_1 + 8;
    uVar13 = *(uint *)(param_1 + 9);
    lVar12 = 0;
    do {
      lVar11 = *(longlong *)(lVar16 + lVar12);
      *(uint *)(param_1 + 9) = uVar13 + 1;
      if (*(uint *)((longlong)param_1 + 0x4c) < uVar13 + 1) {
        FUN_14737a846(local_70,uVar13);
      }
      *(longlong *)(param_1[8] + (longlong)(int)uVar13 * 8) = lVar11;
      lVar11 = *(longlong *)(lVar11 + 0x90 + uVar15 * 8);
      uVar4 = *(undefined8 *)(lVar11 + 0xd0);
      iVar7 = (int)param_1[0xb];
      *(uint *)(param_1 + 0xb) = iVar7 + 1U;
      if (*(uint *)((longlong)param_1 + 0x5c) < iVar7 + 1U) {
        FUN_14479d316(local_68,iVar7);
      }
      plVar3 = local_78;
      *(undefined8 *)(*local_68 + (longlong)iVar7 * 8) = uVar4;
      uVar4 = *(undefined8 *)(lVar11 + 0x88);
      lVar11 = local_78[0x33];
      if (lVar11 == 0) {
        (**(code **)(*local_78 + 8))(local_78);
        lVar11 = plVar3[0x33];
      }
      FUN_1447093fc(lVar11,uVar4);
      uVar13 = *(uint *)(param_1 + 9);
    } while (((int)uVar13 < DAT_14c760ba8) &&
            (bVar17 = (longlong)(int)lVar14 * 8 + -8 != lVar12, lVar12 = lVar12 + 8, bVar17));
  }
  if (0 < (int)uVar13) {
    iVar7 = (int)param_1[7] - uVar13;
    uVar10 = uVar13;
    if (iVar7 != 0) {
      memmove((void *)param_1[6],(void *)(param_1[6] + (ulonglong)uVar13 * 8),(longlong)iVar7 << 3);
      uVar10 = *(uint *)(param_1 + 7);
    }
    plVar6 = local_78;
    *(uint *)(param_1 + 7) = uVar10 - uVar13;
    local_50 = 0;
    local_58 = *(undefined8 *)(param_1[0xc] + 0xd0);
    local_88 = 0;
    FUN_144706208(local_78,*(undefined8 *)(param_1[0xc] + 0x88),0x7fffffff,8);
    plVar3 = plVar6 + 0x31;
    iVar7 = (int)plVar6[0x32];
    *(uint *)(plVar6 + 0x32) = iVar7 + 1U;
    if (*(uint *)((longlong)plVar6 + 0x194) < iVar7 + 1U) {
      FUN_1447158f0(plVar3,iVar7);
    }
    plVar6 = local_78;
    lVar14 = *plVar3;
    lVar16 = (longlong)iVar7 * 0x20;
    puVar5 = (undefined8 *)(lVar14 + 0x10 + lVar16);
    *puVar5 = 0;
    puVar5[1] = 0;
    *(undefined8 *)(lVar14 + lVar16) = 2;
    *(undefined8 *)(lVar14 + 8 + lVar16) = 0;
    if ((DAT_14c760b78 == 0) && ((int)local_78[0x32] != 0)) {
      plVar2 = local_78 + 7;
      lVar14 = local_78[0x33];
      if (lVar14 == 0) {
        (**(code **)(*local_78 + 8))(local_78);
        lVar14 = plVar6[0x33];
      }
      FUN_144ad5b2c(plVar3,lVar14,plVar2);
    }
    plVar3 = local_78;
    FUN_14492aa36(local_78);
    lVar14 = plVar3[0x33];
    if (lVar14 == 0) {
      (**(code **)(*plVar3 + 8))(plVar3);
      lVar14 = plVar3[0x33];
    }
    *(int *)(lVar14 + 0x1c0) = *(int *)(lVar14 + 0x1c0) + 1;
    (**(code **)(**(longlong **)(lVar14 + 0x48) + 0x248))
              (*(longlong **)(lVar14 + 0x48),&local_58,(int)param_1[0xb],param_1[10]);
    local_88 = 0;
    FUN_144706208(plVar3,*(undefined8 *)(param_1[0xc] + 0x88),8,0x800);
    FUN_14492aa36(plVar3);
    local_88 = (int)param_1[0xb] << 3;
    FUN_14315ced4(plVar3 + 0x39,param_1[0xc],param_1[0xd],0);
    puVar9 = (undefined8 *)FUN_1400659f4(plVar3);
    puVar5 = (undefined8 *)param_1[0xe];
    if (puVar5 != puVar9) {
      param_1[0xe] = (longlong)puVar9;
      if (puVar9 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(puVar9 + 1) = *(int *)(puVar9 + 1) + 1;
        UNLOCK();
      }
      if (puVar5 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(puVar5 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar5)(puVar5,1);
        }
      }
    }
  }
LAB_1431628b0:
  LeaveCriticalSection(local_60);
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143162956 FUN_143162956 body=6140 status=ok
// SIG undefined FUN_143162956(void)

/* WARNING: Type propagation algorithm not settling */

undefined8 * FUN_143162956(undefined8 *param_1,longlong param_2,longlong **param_3)

{
  undefined8 *puVar1;
  DWORD *pDVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined8 *puVar5;
  void *_Src;
  int *piVar6;
  longlong *plVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  LARGE_INTEGER LVar11;
  _struct_19 _Var12;
  undefined1 uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  undefined4 uVar18;
  longlong lVar19;
  longlong lVar20;
  undefined8 uVar21;
  LARGE_INTEGER *pLVar22;
  ulonglong uVar23;
  undefined2 *puVar24;
  longlong lVar25;
  undefined1 *puVar26;
  undefined4 *puVar27;
  DWORD DVar28;
  longlong lVar29;
  longlong *plVar30;
  ulonglong uVar31;
  uint uVar32;
  undefined4 *puVar33;
  longlong *plVar34;
  longlong **pplVar35;
  undefined1 auStack_478 [32];
  longlong **local_458;
  undefined8 *local_450;
  undefined8 *local_448;
  longlong *local_440;
  LARGE_INTEGER *local_438;
  undefined8 *local_430;
  LARGE_INTEGER *local_428;
  undefined4 local_420;
  longlong *local_418;
  longlong **local_410;
  undefined4 local_404;
  longlong *local_400;
  longlong *local_3f8;
  longlong *local_3f0;
  longlong *local_3e8;
  longlong *local_3e0;
  longlong *local_3d8;
  uint local_3cc;
  ulonglong local_3c8;
  longlong local_3c0;
  undefined8 local_3b8;
  longlong *local_3b0;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  ulonglong local_398;
  undefined8 uStack_390;
  longlong local_388;
  undefined8 uStack_380;
  longlong local_378;
  undefined8 uStack_370;
  longlong local_368;
  undefined8 uStack_360;
  longlong local_358;
  undefined8 uStack_350;
  longlong local_348;
  DWORD local_340;
  undefined8 local_338;
  undefined8 *local_330;
  undefined8 *local_328;
  longlong *local_320;
  longlong **local_318;
  undefined4 *local_310;
  longlong *local_308;
  undefined1 *local_300;
  longlong local_2f8;
  undefined8 uStack_2f0;
  undefined4 local_2dc;
  longlong local_2d8 [2];
  undefined4 local_2c8;
  longlong *local_2c0;
  undefined4 local_2b8;
  undefined8 local_2b0;
  undefined4 local_2a8;
  LARGE_INTEGER local_2a0;
  undefined4 local_298;
  undefined8 local_290;
  undefined4 local_288;
  LARGE_INTEGER local_280;
  DWORD local_278;
  longlong *local_270;
  undefined8 local_268;
  LARGE_INTEGER LStack_260;
  longlong local_258 [4];
  undefined8 local_238;
  undefined4 local_230;
  undefined8 local_22c;
  undefined4 local_224;
  longlong local_218;
  undefined4 local_210;
  undefined1 local_208 [32];
  undefined1 *local_1e8;
  ulonglong local_1e0;
  LARGE_INTEGER local_1d8;
  DWORD local_1d0 [2];
  undefined8 local_1c8;
  int aiStack_1c0 [42];
  longlong alStack_118 [2];
  LARGE_INTEGER local_108;
  _struct_19 _Stack_100;
  LARGE_INTEGER local_f8;
  LARGE_INTEGER LStack_f0;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_478;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined1 *)((longlong)param_1 + 0xc) = 0xf;
  *(byte *)((longlong)param_1 + 0xd) = *(byte *)((longlong)param_1 + 0xd) | 3;
  *param_1 = &PTR_FUN_14a34bee8;
  param_1[2] = param_2;
  local_418 = param_1 + 3;
  memset(local_418,0,0xb8);
  *(undefined1 *)(param_1 + 0x1a) = 1;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined8 *)((longlong)param_1 + 0x10c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x114) = 0;
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  param_1[0x26] = 0;
  local_2d8[0] = 0;
  local_2dc = 0;
  QueryPerformanceCounter(&local_1d8);
  local_3b8 = *(undefined8 *)(*(longlong *)(param_2 + 0x10) + 0x30);
  local_3e0 = param_3[0xd];
  local_3f8 = (longlong *)(ulonglong)*(uint *)(param_3 + 0xe);
  local_3d8 = param_3[0xb];
  local_400 = (longlong *)(ulonglong)*(uint *)(param_3 + 0xc);
  local_3f0 = param_3[9];
  uVar16 = *(uint *)(param_3 + 10);
  uVar23 = (ulonglong)uVar16;
  local_3e8 = param_3[0xf];
  uVar32 = *(uint *)(param_3 + 0x10);
  uVar31 = (ulonglong)uVar32;
  pLVar22 = (LARGE_INTEGER *)param_3[8];
  local_410 = param_3;
  local_3c8 = uVar31;
  local_3c0 = param_2;
  if (pLVar22 == (LARGE_INTEGER *)0x0) {
    memset(&local_1d8,0,0xd0);
    lVar19 = 0x10;
    do {
      *(undefined8 *)((longlong)local_1d0 + lVar19 + -8) = 0;
      *(undefined8 *)((longlong)local_1d0 + lVar19) = 0;
      *(undefined4 *)((longlong)&local_1c8 + lVar19) = 0;
      lVar19 = lVar19 + 0x18;
    } while (lVar19 != 0xd0);
  }
  else {
    local_1d0[0] = pLVar22[1].s.LowPart;
    local_1d8 = *pLVar22;
    lVar19 = 0;
    do {
      *(undefined8 *)((longlong)&local_1c8 + lVar19) = 0;
      iVar15 = *(int *)((longlong)pLVar22 + lVar19 + 0x18);
      _Src = *(void **)((longlong)pLVar22 + lVar19 + 0x10);
      *(int *)((longlong)aiStack_1c0 + lVar19) = iVar15;
      if ((longlong)iVar15 == 0) {
        *(undefined4 *)((longlong)aiStack_1c0 + lVar19 + 4) = 0;
      }
      else {
        FUN_1446dd670((undefined8 *)((longlong)&local_1c8 + lVar19),iVar15,0);
        uVar31 = local_3c8;
        memcpy(*(void **)((longlong)&local_1c8 + lVar19),_Src,(longlong)iVar15 * 2);
      }
      uVar32 = (uint)uVar31;
      *(undefined4 *)((longlong)aiStack_1c0 + lVar19 + 8) =
           *(undefined4 *)((longlong)pLVar22 + lVar19 + 0x20);
      lVar19 = lVar19 + 0x18;
    } while (lVar19 != 0xc0);
  }
  lVar19 = local_3c0;
  iVar15 = (int)local_400;
  iVar4 = (int)local_3f8;
  puVar5 = *(undefined8 **)(local_3c0 + 0x14e8);
  lVar20 = FUN_147385cbe(*puVar5,&local_1d8);
  param_1[0x13] = *(undefined8 *)(lVar20 + 8);
  if (DAT_14ca84ef6 == '\0') {
    plVar34 = (longlong *)0x0;
  }
  else {
    plVar34 = local_410[7];
  }
  puVar1 = param_1 + 0x1c;
  uVar32 = iVar15 + iVar4 + uVar32 + uVar16;
  if (plVar34 != (longlong *)0x0) {
    FUN_147371fc4(puVar1,plVar34 + 0x1c);
  }
  if ((uint)(*(int *)(param_1 + 0x1d) - *(int *)((longlong)param_1 + 0x114)) < uVar32) {
    if ((int)uVar32 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar32);
    }
    FUN_1403466e6(puVar1,uVar32);
    iVar15 = 1;
    if (3 < uVar32) {
      uVar14 = (uVar32 | 1) + 0xe;
      iVar15 = 0x1f;
      if (uVar14 != 0) {
        for (; uVar14 >> iVar15 == 0; iVar15 = iVar15 + -1) {
        }
      }
      iVar15 = 1 << ((byte)iVar15 & 0x1f);
    }
    if ((*(int *)(param_1 + 0x25) == 0) || (*(int *)(param_1 + 0x25) < iVar15)) {
      *(int *)(param_1 + 0x25) = iVar15;
      FUN_14034644e(puVar1);
    }
LAB_143162c98:
    uStack_2f0 = 0;
    local_2f8 = 0;
    FUN_14737aa72(&local_2f8,uVar32);
    local_1e8 = (undefined1 *)0x0;
    local_1e0 = 0x400000000;
    if (4 < uVar32) {
      FUN_14473dbc4(local_208,uVar32);
    }
    local_404 = 0;
  }
  else {
    local_2f8 = 0;
    uStack_2f0 = 0;
    if ((int)uVar32 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar32);
    }
    if (uVar32 != 0) goto LAB_143162c98;
    local_1e8 = (undefined1 *)0x0;
    local_1e0 = 0x400000000;
    local_404 = 1;
  }
  local_348 = lVar19;
  local_340 = local_1d8.s.LowPart;
  local_338 = param_1[0x13];
  local_320 = &local_2f8;
  local_318 = local_410;
  local_310 = &local_2dc;
  local_308 = local_2d8;
  local_300 = local_208;
  uVar13 = 0;
  if (*(int *)(local_410 + 0xe) != 0) {
    uVar13 = (undefined1)*(undefined4 *)(local_410 + 1);
  }
  *(undefined1 *)(param_1 + 0x1a) = uVar13;
  local_358 = 0;
  uStack_350 = 0;
  local_330 = puVar5;
  local_328 = puVar1;
  FUN_14737203e(local_418,uVar23);
  if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar23);
  }
  local_3cc = uVar32;
  local_3b0 = plVar34;
  if ((int)uStack_350._4_4_ < (int)uVar16) {
    FUN_14737aa72(&local_358,uVar16);
  }
  plVar34 = param_1 + 7;
  local_238 = 0;
  local_230 = 0;
  local_258[0] = 0;
  local_258[1] = 0;
  local_22c = 0xffffffff00000080;
  local_224 = 0;
  local_218 = 0;
  local_210 = 0;
  if (uVar23 != 0) {
    lVar19 = 0;
    do {
      lVar20 = *(longlong *)((longlong)local_3f0 + lVar19);
      uVar21 = FUN_143164154(&local_348,lVar20,1);
      uVar31 = uStack_350;
      lVar29 = (longlong)(int)uStack_350;
      uVar16 = (int)uStack_350 + 1;
      uStack_350 = CONCAT44(uStack_350._4_4_,uVar16);
      if (uStack_350._4_4_ < uVar16) {
        FUN_14737aad2(&local_358,uVar31 & 0xffffffff);
      }
      *(undefined8 *)(local_358 + lVar29 * 8) = uVar21;
      local_280.s.LowPart = *(undefined4 *)(param_1 + 4);
      local_108.QuadPart = lVar20 + 0x88;
      _Stack_100 = (_struct_19)&local_280;
      FUN_14737ab58(local_258,&local_268,&local_108,0);
      if (lVar20 != 0) {
        LOCK();
        *(int *)(lVar20 + 8) = *(int *)(lVar20 + 8) + 1;
        UNLOCK();
      }
      iVar15 = *(int *)(param_1 + 4);
      *(uint *)(param_1 + 4) = iVar15 + 1U;
      if (*(uint *)((longlong)param_1 + 0x24) < iVar15 + 1U) {
        FUN_14737ac94(local_418,iVar15);
      }
      *(longlong *)(*local_418 + (longlong)iVar15 * 8) = lVar20;
      lVar19 = lVar19 + 8;
    } while (uVar23 << 3 != lVar19);
  }
  plVar30 = local_400;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0;
  local_368 = 0;
  uStack_360 = 0;
  iVar15 = (int)local_400;
  FUN_14737203e(plVar34,(ulonglong)local_400 & 0xffffffff);
  if (iVar15 < 0) {
LAB_143164125:
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(plVar30);
  }
  if ((int)uStack_360._4_4_ < iVar15) {
    FUN_14737aa72(&local_368,(ulonglong)plVar30 & 0xffffffff);
  }
  local_418 = param_1 + 0xb;
  if (plVar30 != (longlong *)0x0) {
    lVar19 = 0;
    do {
      lVar20 = *(longlong *)((longlong)local_3d8 + lVar19);
      uVar16 = (uint)*(byte *)(lVar20 + 0xc4) + (uint)*(byte *)(lVar20 + 0xc2);
      if (uVar16 <= *(uint *)(param_1 + 0x1b)) {
        uVar16 = *(uint *)(param_1 + 0x1b);
      }
      *(uint *)(param_1 + 0x1b) = uVar16;
      uVar16 = (uint)*(byte *)(*(longlong *)(lVar20 + 0xe8) + 0xb8) << 2;
      if (uVar16 <= *(uint *)((longlong)param_1 + 0xd4)) {
        uVar16 = *(uint *)((longlong)param_1 + 0xd4);
      }
      *(uint *)((longlong)param_1 + 0xd4) = uVar16;
      uVar21 = FUN_143164154(&local_348,lVar20,2);
      uVar31 = uStack_360;
      lVar29 = (longlong)(int)uStack_360;
      uVar16 = (int)uStack_360 + 1;
      uStack_360 = CONCAT44(uStack_360._4_4_,uVar16);
      if (uStack_360._4_4_ < uVar16) {
        FUN_14737aad2(&local_368,uVar31 & 0xffffffff);
      }
      *(undefined8 *)(local_368 + lVar29 * 8) = uVar21;
      if (lVar20 != 0) {
        LOCK();
        *(int *)(lVar20 + 8) = *(int *)(lVar20 + 8) + 1;
        UNLOCK();
      }
      iVar15 = *(int *)(param_1 + 8);
      *(uint *)(param_1 + 8) = iVar15 + 1U;
      if (*(uint *)((longlong)param_1 + 0x44) < iVar15 + 1U) {
        FUN_14737ac94(plVar34,iVar15);
      }
      *(longlong *)(*plVar34 + (longlong)iVar15 * 8) = lVar20;
      lVar19 = lVar19 + 8;
    } while ((longlong)plVar30 << 3 != lVar19);
  }
  plVar30 = local_3f8;
  local_378 = 0;
  uStack_370 = 0;
  iVar15 = (int)local_3f8;
  FUN_14737203e(local_418,(ulonglong)local_3f8 & 0xffffffff);
  if (iVar15 < 0) goto LAB_143164125;
  if ((int)uStack_370._4_4_ < iVar15) {
    FUN_14737aa72(&local_378,(ulonglong)plVar30 & 0xffffffff);
  }
  plVar34 = param_1 + 0xf;
  if (plVar30 != (longlong *)0x0) {
    lVar20 = (longlong)local_3f8 << 3;
    lVar19 = 0;
    do {
      lVar29 = *(longlong *)((longlong)local_3e0 + lVar19);
      uVar16 = (uint)*(byte *)(lVar29 + 0xc4) + (uint)*(byte *)(lVar29 + 0xc2);
      if (uVar16 <= *(uint *)(param_1 + 0x1b)) {
        uVar16 = *(uint *)(param_1 + 0x1b);
      }
      *(uint *)(param_1 + 0x1b) = uVar16;
      uVar16 = (uint)*(byte *)(*(longlong *)(lVar29 + 0xe8) + 0xb8) << 2;
      if (uVar16 <= *(uint *)((longlong)param_1 + 0xd4)) {
        uVar16 = *(uint *)((longlong)param_1 + 0xd4);
      }
      *(uint *)((longlong)param_1 + 0xd4) = uVar16;
      uVar21 = FUN_143164154(&local_348,lVar29,3);
      uVar31 = uStack_370;
      lVar25 = (longlong)(int)uStack_370;
      uVar16 = (int)uStack_370 + 1;
      uStack_370 = CONCAT44(uStack_370._4_4_,uVar16);
      if (uStack_370._4_4_ < uVar16) {
        FUN_14737aad2(&local_378,uVar31 & 0xffffffff);
      }
      *(undefined8 *)(local_378 + lVar25 * 8) = uVar21;
      if (lVar29 != 0) {
        LOCK();
        *(int *)(lVar29 + 8) = *(int *)(lVar29 + 8) + 1;
        UNLOCK();
      }
      iVar15 = *(int *)(param_1 + 0xc);
      *(uint *)(param_1 + 0xc) = iVar15 + 1U;
      if (*(uint *)((longlong)param_1 + 100) < iVar15 + 1U) {
        FUN_14737ac94(local_418,iVar15);
      }
      *(longlong *)(*local_418 + (longlong)iVar15 * 8) = lVar29;
      lVar19 = lVar19 + 8;
    } while (lVar20 != lVar19);
  }
  uVar31 = local_3c8;
  local_388 = 0;
  uStack_380 = 0;
  iVar15 = (int)local_3c8;
  FUN_14737203e(plVar34,local_3c8 & 0xffffffff);
  if (iVar15 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar31);
  }
  if ((int)uStack_380._4_4_ < iVar15) {
    FUN_14737aa72(&local_388,uVar31 & 0xffffffff);
  }
  if (uVar31 != 0) {
    lVar19 = 0;
    do {
      lVar20 = *(longlong *)((longlong)local_3e8 + lVar19);
      uVar16 = (uint)*(byte *)(lVar20 + 0xc4) + (uint)*(byte *)(lVar20 + 0xc2);
      if (uVar16 <= *(uint *)(param_1 + 0x1b)) {
        uVar16 = *(uint *)(param_1 + 0x1b);
      }
      *(uint *)(param_1 + 0x1b) = uVar16;
      uVar16 = (uint)*(byte *)(*(longlong *)(lVar20 + 0xe8) + 0xb8) << 2;
      if (uVar16 <= *(uint *)((longlong)param_1 + 0xd4)) {
        uVar16 = *(uint *)((longlong)param_1 + 0xd4);
      }
      *(uint *)((longlong)param_1 + 0xd4) = uVar16;
      uVar21 = FUN_143164154(&local_348,lVar20,4);
      uVar23 = uStack_380;
      lVar29 = (longlong)(int)uStack_380;
      uVar16 = (int)uStack_380 + 1;
      uStack_380 = CONCAT44(uStack_380._4_4_,uVar16);
      if (uStack_380._4_4_ < uVar16) {
        FUN_14737aad2(&local_388,uVar23 & 0xffffffff);
      }
      *(undefined8 *)(local_388 + lVar29 * 8) = uVar21;
      if (lVar20 != 0) {
        LOCK();
        *(int *)(lVar20 + 8) = *(int *)(lVar20 + 8) + 1;
        UNLOCK();
      }
      iVar15 = *(int *)(param_1 + 0x10);
      *(uint *)(param_1 + 0x10) = iVar15 + 1U;
      if (*(uint *)((longlong)param_1 + 0x84) < iVar15 + 1U) {
        FUN_14737ac94(plVar34,iVar15);
      }
      *(longlong *)(*plVar34 + (longlong)iVar15 * 8) = lVar20;
      lVar19 = lVar19 + 8;
    } while (uVar31 << 3 != lVar19);
  }
  QueryPerformanceCounter(&local_108);
  local_2d8[0] = local_2d8[0] - (longlong)local_108;
  (**(code **)(*DAT_14c82b500 + 0x60))(DAT_14c82b500,local_208,0xff);
  QueryPerformanceCounter(&local_108);
  local_2d8[0] = local_2d8[0] + local_108.QuadPart;
  if (*(char *)(local_410 + 6) != '\0') goto LAB_143163ca8;
  local_398 = 0;
  uStack_390 = 0;
  if ((char)local_404 == '\0') {
    FUN_14737ad1a(&local_398,local_3cc);
  }
  lVar19 = local_2f8;
  lVar20 = (longlong)(int)uStack_2f0;
  if (lVar20 != 0) {
    lVar29 = 0;
    do {
      uVar31 = uStack_390;
      uVar21 = *(undefined8 *)(*(longlong *)(lVar19 + lVar29) + 0x10);
      lVar25 = (longlong)(int)(DWORD)uStack_390;
      uVar16 = (DWORD)uStack_390 + 1;
      uStack_390 = CONCAT44(uStack_390._4_4_,uVar16);
      if (uStack_390._4_4_ < uVar16) {
        FUN_147375d40(&local_398,uVar31 & 0xffffffff);
      }
      *(undefined8 *)(local_398 + lVar25 * 0x18) = uVar21;
      puVar5 = (undefined8 *)(local_398 + 8 + lVar25 * 0x18);
      *puVar5 = 0;
      puVar5[1] = 0;
      lVar29 = lVar29 + 8;
    } while (lVar20 * 8 != lVar29);
  }
  pplVar35 = (longlong **)(param_1 + 0x14);
  QueryPerformanceCounter(&local_108);
  plVar34 = local_3b0;
  if ((local_3b0 == (longlong *)0x0) || (DAT_14ca76b20 != 0)) {
    local_108.QuadPart = local_398;
    _Stack_100.LowPart = (DWORD)uStack_390;
    local_430 = &local_268;
    local_268 = 0;
    LStack_260.QuadPart = LStack_260.QuadPart & 0xffffffff00000000;
    local_438 = &local_280;
    local_280.QuadPart = 0;
    local_278 = 0;
    local_440 = (longlong *)param_1[0x13];
    local_448 = &local_290;
    local_290 = 0;
    local_288 = 0;
    local_2a0.QuadPart = 0;
    local_298 = 0;
    local_2b0 = 0;
    local_2a8 = 0;
    local_450 = (undefined8 *)CONCAT44(local_450._4_4_,*(undefined4 *)((longlong)local_410 + 4));
    local_458 = (longlong **)CONCAT44(local_458._4_4_,*(undefined4 *)local_410);
    local_420 = 3;
    local_428 = &local_108;
    FUN_14316491e(&local_2c0,local_3b8);
    if (pplVar35 != &local_2c0) {
      plVar34 = *pplVar35;
      *pplVar35 = local_2c0;
      local_2c0 = (longlong *)0x0;
      if (plVar34 == (longlong *)0x0) goto LAB_1431634e7;
      (**(code **)(*plVar34 + 0x10))();
    }
    if (local_2c0 != (longlong *)0x0) {
      (**(code **)(*local_2c0 + 0x10))();
    }
  }
  else if ((DWORD)uStack_390 == 0) {
    plVar34 = (longlong *)local_3b0[0x14];
    plVar30 = *pplVar35;
    if (plVar30 != plVar34) {
      *pplVar35 = plVar34;
      if (plVar34 != (longlong *)0x0) {
        (**(code **)(*plVar34 + 8))();
      }
      if (plVar30 != (longlong *)0x0) {
        (**(code **)(*plVar30 + 0x10))(plVar30);
      }
    }
  }
  else {
    local_108.QuadPart = 0;
    _Stack_100.LowPart = 0;
    _Stack_100.HighPart = 0;
    if ((int)(DWORD)uStack_390 < -1) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4((DWORD)uStack_390 + 1);
    }
    DVar28 = 0;
    uVar16 = 0;
    if (-1 < (int)(DWORD)uStack_390) {
      FUN_14737ad8c(&local_108);
      DVar28 = _Stack_100.LowPart;
      uVar16 = _Stack_100.HighPart;
    }
    local_280.s.LowPart = 4;
    _Stack_100.LowPart = DVar28 + 1;
    if (uVar16 < DVar28 + 1) {
      FUN_147375a02(&local_108,DVar28);
    }
    *(undefined4 *)(local_108.QuadPart + (longlong)(int)DVar28 * 0x10) = 0;
    *(LARGE_INTEGER **)(local_108.QuadPart + 8U + (longlong)(int)DVar28 * 0x10) = &local_280;
    if ((longlong)(int)(DWORD)uStack_390 != 0) {
      lVar19 = (longlong)(int)(DWORD)uStack_390 * 0x18;
      uVar31 = local_398;
      do {
        _Var12 = _Stack_100;
        lVar20 = (longlong)(int)_Stack_100.LowPart;
        uVar16 = _Stack_100.LowPart + 1;
        _Stack_100.LowPart = uVar16;
        if ((uint)_Stack_100.HighPart < uVar16) {
          FUN_147375a02(&local_108,(ulonglong)_Var12 & 0xffffffff);
        }
        *(undefined4 *)(local_108.QuadPart + lVar20 * 0x10) = 6;
        *(ulonglong *)(local_108.QuadPart + 8U + lVar20 * 0x10) = uVar31;
        uVar31 = uVar31 + 0x18;
        lVar19 = lVar19 + -0x18;
      } while (lVar19 != 0);
    }
    local_268 = CONCAT44(_Stack_100.LowPart,3);
    LStack_260.s = local_108.s;
    plVar30 = *(longlong **)(*(longlong *)(local_3c0 + 0x10) + 0x40);
    plVar7 = *pplVar35;
    if (plVar7 != (longlong *)0x0) {
      *pplVar35 = (longlong *)0x0;
      (**(code **)(*plVar7 + 0x10))();
    }
    local_458 = pplVar35;
    iVar15 = (**(code **)(*plVar30 + 0x210))(plVar30,&local_268,plVar34[0x14],&DAT_14a34c4e8);
    if (iVar15 < 0) {
      local_450 = &local_3a8;
      local_3a8 = 0;
      uStack_3a0 = 0;
      local_458 = (longlong **)0x0;
      FUN_145763094(iVar15,
                    "Device7->AddToStateObject(&Desc, BasePipeline->StateObject.GetReference(), IID_PPV_ARGS(StateObject.GetInitReference()))"
                    ,".\\Runtime/D3D12RHI/Private/D3D12RayTracing.cpp",0x890);
    }
    if (local_108.QuadPart != 0) {
      FUN_1400020a8();
    }
  }
LAB_1431634e7:
  local_400 = param_1 + 0x15;
  if (((DAT_14ca76b20 != 0) && (1 < *(int *)(local_410 + 10))) && (1 < *(int *)(param_1 + 4))) {
    plVar34 = param_1 + 0x16;
    local_3d8 = (longlong *)CONCAT44(local_3d8._4_4_,*(undefined4 *)local_410);
    local_3e0 = (longlong *)CONCAT44(local_3e0._4_4_,*(undefined4 *)((longlong)local_410 + 4));
    local_3e8 = (longlong *)param_1[0x13];
    if ((*(int *)(param_1 + 4) <= *(int *)((longlong)param_1 + 0xbc)) ||
       (FUN_14481578e(plVar34), 0 < *(int *)(param_1 + 4))) {
      iVar15 = 0;
      do {
        iVar4 = *(int *)(param_1 + 0x17);
        uVar16 = iVar4 + 1;
        *(uint *)(param_1 + 0x17) = uVar16;
        if (*(uint *)((longlong)param_1 + 0xbc) < uVar16) {
          FUN_1446f48e2(plVar34);
        }
        *(undefined4 *)(param_1[0x16] + (longlong)iVar4 * 4) = 0xffffffff;
        iVar15 = iVar15 + 1;
      } while (iVar15 < *(int *)(param_1 + 4));
    }
    uVar16 = 0;
    local_410 = pplVar35;
    memset(&local_108,0,0xa0);
    local_268 = 0;
    LStack_260.QuadPart = 0;
    if ((int)uStack_2f0 < 1) {
LAB_143163e20:
      local_418 = param_1 + 0x18;
      if (*(int *)((longlong)param_1 + 0xcc) < 10) {
        FUN_147375cae(local_418);
      }
      local_3f0 = (longlong *)CONCAT44(local_3f0._4_4_,LStack_260._0_4_);
      lVar19 = 0;
      do {
        lVar20 = (longlong)*(int *)((longlong)&_Stack_100.LowPart + lVar19);
        if (lVar20 != 0) {
          uVar18 = *(undefined4 *)(param_1 + 0x19);
          puVar33 = *(undefined4 **)((longlong)&local_108 + lVar19);
          puVar27 = puVar33 + lVar20 * 8;
          do {
            LVar11 = LStack_260;
            lVar20 = (longlong)(int)LStack_260._0_4_;
            uVar16 = LStack_260._0_4_ + 1;
            LStack_260.s.LowPart = uVar16;
            if ((uint)LStack_260._4_4_ < uVar16) {
              FUN_147375d40(&local_268,LVar11.QuadPart & 0xffffffff);
            }
            *(undefined8 *)(local_268 + 0x10 + lVar20 * 0x18) = *(undefined8 *)(puVar33 + 4);
            uVar8 = puVar33[1];
            uVar9 = puVar33[2];
            uVar10 = puVar33[3];
            puVar3 = (undefined4 *)(local_268 + lVar20 * 0x18);
            *puVar3 = *puVar33;
            puVar3[1] = uVar8;
            puVar3[2] = uVar9;
            puVar3[3] = uVar10;
            *(undefined4 *)(*plVar34 + (longlong)(int)puVar33[6] * 4) = uVar18;
            puVar33 = puVar33 + 8;
          } while (puVar33 != puVar27);
          local_280.QuadPart = local_268;
          local_278 = LStack_260._0_4_;
          local_290 = 0;
          local_288 = 0;
          local_2a0.QuadPart = 0;
          local_298 = 0;
          local_2b0 = 0;
          local_2a8 = 0;
          local_2c0 = (longlong *)0x0;
          local_2b8 = 0;
          local_2d8[1] = 0;
          local_2c8 = 0;
          local_428 = &local_280;
          local_430 = &local_290;
          local_438 = &local_2a0;
          local_440 = local_3e8;
          local_448 = &local_2b0;
          local_450 = (undefined8 *)CONCAT44(local_450._4_4_,local_3e0._0_4_);
          local_458 = (longlong **)CONCAT44(local_458._4_4_,local_3d8._0_4_);
          local_420 = 3;
          FUN_14316491e(&local_270,local_3b8,local_2d8 + 1,&local_2c0);
          iVar15 = *(int *)(param_1 + 0x19);
          *(uint *)(param_1 + 0x19) = iVar15 + 1U;
          if (*(uint *)((longlong)param_1 + 0xcc) < iVar15 + 1U) {
            FUN_147375dd4(local_418,iVar15);
          }
          *(longlong **)(*local_418 + (longlong)iVar15 * 8) = local_270;
          if (local_270 != (longlong *)0x0) {
            (**(code **)(*local_270 + 8))();
          }
          FUN_147375c66(&local_268,(ulonglong)local_3f0 & 0xffffffff);
          if (local_270 != (longlong *)0x0) {
            (**(code **)(*local_270 + 0x10))();
          }
        }
        lVar19 = lVar19 + 0x10;
      } while (lVar19 != 0xa0);
    }
    else {
      plVar30 = (longlong *)&DAT_ffffffff;
      uVar14 = 9;
      uVar31 = 0;
      uVar32 = 9;
      iVar15 = (int)uStack_2f0;
      do {
        LVar11 = LStack_260;
        piVar6 = *(int **)(local_2f8 + uVar31 * 8);
        uVar17 = piVar6[6];
        if (9 < uVar17) {
          uVar17 = 10;
        }
        if (*piVar6 == 1) {
          if (uVar16 < uVar17) {
            uVar16 = uVar17;
          }
          if (uVar17 <= uVar14) {
            uVar14 = uVar17;
          }
          plVar30 = (longlong *)(uVar31 & 0xffffffff);
        }
        else {
          if (uVar17 <= uVar32) {
            uVar32 = uVar17;
          }
          uVar21 = *(undefined8 *)(piVar6 + 4);
          lVar19 = (longlong)(int)LStack_260._0_4_;
          uVar17 = LStack_260._0_4_ + 1;
          LStack_260.s.LowPart = uVar17;
          if ((uint)LStack_260._4_4_ < uVar17) {
            local_418 = plVar30;
            FUN_147375d40(&local_268,LVar11.QuadPart & 0xffffffff);
            plVar30 = local_418;
          }
          *(undefined8 *)(local_268 + lVar19 * 0x18) = uVar21;
          puVar5 = (undefined8 *)(local_268 + 8 + lVar19 * 0x18);
          *puVar5 = 0;
          puVar5[1] = 0;
          iVar15 = (int)uStack_2f0;
        }
        uVar31 = uVar31 + 1;
      } while ((longlong)uVar31 < (longlong)iVar15);
      if (uVar14 != uVar16) {
        if (-1 < (int)plVar30) {
          uVar31 = 0;
          do {
            lVar19 = *(longlong *)(local_2f8 + uVar31 * 8);
            uVar16 = *(uint *)(lVar19 + 0x18);
            if (uVar32 <= *(uint *)(lVar19 + 0x18)) {
              uVar16 = uVar32;
            }
            if (uVar16 != 0) {
              local_418 = *(longlong **)(lVar19 + 0x10);
              iVar15 = FUN_14682a11e(local_258,*(undefined4 *)(*(longlong *)(lVar19 + 8) + 0x88),
                                     *(longlong *)(lVar19 + 8) + 0x88);
              lVar19 = 0;
              if (iVar15 != -1) {
                lVar19 = (longlong)iVar15 * 0x20 + local_258[0];
              }
              uVar18 = *(undefined4 *)(lVar19 + 0x14);
              uVar23 = (ulonglong)uVar16;
              DVar28 = (&_Stack_100)[uVar23 * 2].LowPart;
              (&_Stack_100)[uVar23 * 2].LowPart = DVar28 + 1;
              if ((uint)(&_Stack_100)[uVar23 * 2].HighPart < DVar28 + 1) {
                FUN_143168d90(&local_108 + uVar23 * 2,DVar28);
              }
              lVar19 = (&local_108)[uVar23 * 2].QuadPart;
              lVar20 = (longlong)(int)DVar28 * 0x20;
              *(longlong **)(lVar19 + lVar20) = local_418;
              puVar5 = (undefined8 *)(lVar19 + 8 + lVar20);
              *puVar5 = 0;
              puVar5[1] = 0;
              *(undefined4 *)(lVar19 + 0x18 + lVar20) = uVar18;
            }
            uVar31 = uVar31 + 1;
          } while ((int)plVar30 + 1 != uVar31);
        }
        goto LAB_143163e20;
      }
    }
    if (local_268 != 0) {
      FUN_1400020a8();
    }
    pplVar35 = local_410;
    lVar19 = 0xa0;
    do {
      if (*(longlong *)((longlong)alStack_118 + lVar19) != 0) {
        FUN_1400020a8();
      }
      lVar19 = lVar19 + -0x10;
    } while (lVar19 != 0);
  }
  QueryPerformanceCounter(&local_108);
  plVar7 = local_400;
  plVar34 = *pplVar35;
  plVar30 = (longlong *)*local_400;
  if (plVar30 != (longlong *)0x0) {
    *local_400 = 0;
    (**(code **)(*plVar30 + 0x10))();
  }
  (**(code **)*plVar34)(plVar34,&DAT_14a34bf98,plVar7);
  plVar7 = (longlong *)*plVar7;
  FUN_147372086(param_1 + 0xd,local_3f8);
  if (0 < (int)uStack_370) {
    lVar20 = 0;
    lVar19 = 0;
    iVar15 = (int)uStack_370;
    do {
      lVar29 = *(longlong *)(local_378 + lVar19 * 8);
      if (((*(longlong *)(lVar29 + 0x88) == -1) && (*(longlong *)(lVar29 + 0x90) == -1)) &&
         ((*(longlong *)(lVar29 + 0x98) == -1 && (*(longlong *)(lVar29 + 0xa0) == -1)))) {
        puVar24 = &DAT_149dfb77a;
        if (*(int *)(lVar29 + 0x48) != 0) {
          puVar24 = *(undefined2 **)(lVar29 + 0x40);
        }
        pLVar22 = (LARGE_INTEGER *)(**(code **)(*plVar7 + 0x18))(plVar7,puVar24);
        local_108 = (LARGE_INTEGER)*(LARGE_INTEGER *)&pLVar22->s;
        _Stack_100 = pLVar22[1].s;
        local_f8 = pLVar22[2];
        LStack_f0 = pLVar22[3];
        iVar15 = (int)uStack_370;
      }
      else {
        local_108 = (LARGE_INTEGER)*(LARGE_INTEGER *)&((LARGE_INTEGER *)(lVar29 + 0x88))->s;
        _Stack_100 = *(_struct_19 *)(lVar29 + 0x90);
        local_f8 = *(LARGE_INTEGER *)(lVar29 + 0x98);
        LStack_f0 = *(LARGE_INTEGER *)(lVar29 + 0xa0);
      }
      lVar29 = param_1[0xd];
      pLVar22 = (LARGE_INTEGER *)(lVar29 + 0x10 + lVar20);
      *pLVar22 = local_f8;
      pLVar22[1] = LStack_f0;
      pDVar2 = (DWORD *)(lVar29 + lVar20);
      *pDVar2 = local_108.s.LowPart;
      pDVar2[1] = local_108.s.HighPart;
      pDVar2[2] = _Stack_100.LowPart;
      pDVar2[3] = _Stack_100.HighPart;
      lVar19 = lVar19 + 1;
      lVar20 = lVar20 + 0x20;
    } while (lVar19 < iVar15);
  }
  FUN_147372086(param_1 + 5,uStack_350 & 0xffffffff);
  if (0 < (int)uStack_350) {
    lVar20 = 0;
    lVar19 = 0;
    iVar15 = (int)uStack_350;
    do {
      lVar29 = *(longlong *)(local_358 + lVar19 * 8);
      if ((((*(longlong *)(lVar29 + 0x88) == -1) && (*(longlong *)(lVar29 + 0x90) == -1)) &&
          (*(longlong *)(lVar29 + 0x98) == -1)) && (*(longlong *)(lVar29 + 0xa0) == -1)) {
        puVar24 = &DAT_149dfb77a;
        if (*(int *)(lVar29 + 0x48) != 0) {
          puVar24 = *(undefined2 **)(lVar29 + 0x40);
        }
        pLVar22 = (LARGE_INTEGER *)(**(code **)(*plVar7 + 0x18))(plVar7,puVar24);
        local_108 = (LARGE_INTEGER)*(LARGE_INTEGER *)&pLVar22->s;
        _Stack_100 = pLVar22[1].s;
        local_f8 = pLVar22[2];
        LStack_f0 = pLVar22[3];
        iVar15 = (int)uStack_350;
      }
      else {
        local_108 = (LARGE_INTEGER)*(LARGE_INTEGER *)&((LARGE_INTEGER *)(lVar29 + 0x88))->s;
        _Stack_100 = *(_struct_19 *)(lVar29 + 0x90);
        local_f8 = *(LARGE_INTEGER *)(lVar29 + 0x98);
        LStack_f0 = *(LARGE_INTEGER *)(lVar29 + 0xa0);
      }
      lVar29 = param_1[5];
      pLVar22 = (LARGE_INTEGER *)(lVar29 + 0x10 + lVar20);
      *pLVar22 = local_f8;
      pLVar22[1] = LStack_f0;
      pDVar2 = (DWORD *)(lVar29 + lVar20);
      *pDVar2 = local_108.s.LowPart;
      pDVar2[1] = local_108.s.HighPart;
      pDVar2[2] = _Stack_100.LowPart;
      pDVar2[3] = _Stack_100.HighPart;
      lVar19 = lVar19 + 1;
      lVar20 = lVar20 + 0x20;
    } while (lVar19 < iVar15);
  }
  FUN_147372086(param_1 + 9,uStack_360 & 0xffffffff);
  if (0 < (int)uStack_360) {
    lVar20 = 0;
    lVar19 = 0;
    iVar15 = (int)uStack_360;
    do {
      lVar29 = *(longlong *)(local_368 + lVar19 * 8);
      if (((*(longlong *)(lVar29 + 0x88) == -1) && (*(longlong *)(lVar29 + 0x90) == -1)) &&
         ((*(longlong *)(lVar29 + 0x98) == -1 && (*(longlong *)(lVar29 + 0xa0) == -1)))) {
        puVar24 = &DAT_149dfb77a;
        if (*(int *)(lVar29 + 0x48) != 0) {
          puVar24 = *(undefined2 **)(lVar29 + 0x40);
        }
        pLVar22 = (LARGE_INTEGER *)(**(code **)(*plVar7 + 0x18))(plVar7,puVar24);
        local_108 = (LARGE_INTEGER)*(LARGE_INTEGER *)&pLVar22->s;
        _Stack_100 = pLVar22[1].s;
        local_f8 = pLVar22[2];
        LStack_f0 = pLVar22[3];
        iVar15 = (int)uStack_360;
      }
      else {
        local_108 = (LARGE_INTEGER)*(LARGE_INTEGER *)&((LARGE_INTEGER *)(lVar29 + 0x88))->s;
        _Stack_100 = *(_struct_19 *)(lVar29 + 0x90);
        local_f8 = *(LARGE_INTEGER *)(lVar29 + 0x98);
        LStack_f0 = *(LARGE_INTEGER *)(lVar29 + 0xa0);
      }
      lVar29 = param_1[9];
      pLVar22 = (LARGE_INTEGER *)(lVar29 + 0x10 + lVar20);
      *pLVar22 = local_f8;
      pLVar22[1] = LStack_f0;
      pDVar2 = (DWORD *)(lVar29 + lVar20);
      *pDVar2 = local_108.s.LowPart;
      pDVar2[1] = local_108.s.HighPart;
      pDVar2[2] = _Stack_100.LowPart;
      pDVar2[3] = _Stack_100.HighPart;
      lVar19 = lVar19 + 1;
      lVar20 = lVar20 + 0x20;
    } while (lVar19 < iVar15);
  }
  FUN_147372086(param_1 + 0x11,uStack_380 & 0xffffffff);
  if (0 < (int)uStack_380) {
    lVar20 = 0;
    lVar19 = 0;
    iVar15 = (int)uStack_380;
    do {
      lVar29 = *(longlong *)(local_388 + lVar19 * 8);
      if (((*(longlong *)(lVar29 + 0x88) == -1) && (*(longlong *)(lVar29 + 0x90) == -1)) &&
         ((*(longlong *)(lVar29 + 0x98) == -1 && (*(longlong *)(lVar29 + 0xa0) == -1)))) {
        puVar24 = &DAT_149dfb77a;
        if (*(int *)(lVar29 + 0x48) != 0) {
          puVar24 = *(undefined2 **)(lVar29 + 0x40);
        }
        pLVar22 = (LARGE_INTEGER *)(**(code **)(*plVar7 + 0x18))(plVar7,puVar24);
        local_108 = (LARGE_INTEGER)*(LARGE_INTEGER *)&pLVar22->s;
        _Stack_100 = pLVar22[1].s;
        local_f8 = pLVar22[2];
        LStack_f0 = pLVar22[3];
        iVar15 = (int)uStack_380;
      }
      else {
        local_108 = (LARGE_INTEGER)*(LARGE_INTEGER *)&((LARGE_INTEGER *)(lVar29 + 0x88))->s;
        _Stack_100 = *(_struct_19 *)(lVar29 + 0x90);
        local_f8 = *(LARGE_INTEGER *)(lVar29 + 0x98);
        LStack_f0 = *(LARGE_INTEGER *)(lVar29 + 0xa0);
      }
      lVar29 = param_1[0x11];
      pLVar22 = (LARGE_INTEGER *)(lVar29 + 0x10 + lVar20);
      *pLVar22 = local_f8;
      pLVar22[1] = LStack_f0;
      pDVar2 = (DWORD *)(lVar29 + lVar20);
      *pDVar2 = local_108.s.LowPart;
      pDVar2[1] = local_108.s.HighPart;
      pDVar2[2] = _Stack_100.LowPart;
      pDVar2[3] = _Stack_100.HighPart;
      lVar19 = lVar19 + 1;
      lVar20 = lVar20 + 0x20;
    } while (lVar19 < iVar15);
  }
  uVar18 = (**(code **)(*(longlong *)param_1[0x15] + 0x28))();
  *(undefined4 *)(param_1 + 0x26) = uVar18;
  QueryPerformanceCounter(&local_108);
  if (local_398 != 0) {
    FUN_1400020a8();
  }
LAB_143163ca8:
  if (local_388 != 0) {
    FUN_1400020a8();
  }
  if (local_378 != 0) {
    FUN_1400020a8();
  }
  if (local_368 != 0) {
    FUN_1400020a8();
  }
  local_210 = 0;
  if (local_218 != 0) {
    FUN_1400020a8();
  }
  FUN_146829152(local_258);
  if (local_358 != 0) {
    FUN_1400020a8();
  }
  puVar26 = local_208;
  if (local_1e8 != (undefined1 *)0x0) {
    puVar26 = local_1e8;
  }
  FUN_144717c65(puVar26,local_1e0 & 0xffffffff);
  if (local_1e8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if (local_2f8 != 0) {
    FUN_1400020a8();
  }
  lVar19 = 0xc0;
  do {
    if (*(longlong *)((longlong)&local_1e0 + lVar19) != 0) {
      FUN_1400020a8();
    }
    lVar19 = lVar19 + -0x18;
  } while (lVar19 != 0);
  if ((local_60 ^ (ulonglong)auStack_478) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 143164154 FUN_143164154 body=1993 status=ok
// SIG undefined FUN_143164154(void)

longlong FUN_143164154(undefined8 *param_1,longlong param_2,int param_3)

{
  int *piVar1;
  uint uVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  LARGE_INTEGER LVar7;
  void *_Src;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  int *piVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  undefined4 *puVar15;
  uint *puVar16;
  undefined8 uVar17;
  longlong *plVar18;
  uint uVar19;
  longlong lVar20;
  uint *puVar21;
  longlong lVar22;
  int *piVar23;
  undefined2 *puVar24;
  undefined8 *puVar25;
  bool bVar26;
  undefined1 auStack_e8 [40];
  longlong *local_c0;
  longlong local_b8;
  longlong local_b0;
  LPCRITICAL_SECTION local_a8;
  undefined8 local_a0;
  char local_91;
  LARGE_INTEGER local_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined8 uStack_78;
  longlong *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_91 = '\0';
  local_a0 = *(undefined8 *)(param_2 + 0x88);
  FUN_1403458a2(param_1[4],&local_90);
  QueryPerformanceCounter(&local_90);
  *(longlong *)param_1[8] = *(longlong *)param_1[8] - (longlong)local_90;
  lVar22 = param_1[3];
  local_b0 = param_1[9];
  uVar4 = *(undefined4 *)param_1[6];
  uVar5 = ((undefined4 *)param_1[6])[1];
  local_c0 = (longlong *)*param_1;
  uVar17 = param_1[2];
  local_a8 = (LPCRITICAL_SECTION)(lVar22 + 8);
  EnterCriticalSection(local_a8);
  LVar7 = (LARGE_INTEGER)((LARGE_INTEGER *)(param_2 + 0x88))->QuadPart;
  if (param_3 == 1) {
    puVar14 = (undefined8 *)(lVar22 + 0x88);
  }
  else {
    puVar14 = (undefined8 *)(*(longlong *)(param_2 + 0xe8) + 8);
  }
  uStack_78 = *puVar14;
  local_90 = LVar7;
  uStack_88 = uVar4;
  uStack_84 = uVar5;
  local_80 = uVar17;
  plVar10 = (longlong *)FUN_147374cde(lVar22 + 0x30,LVar7.QuadPart & 0xffffffff);
  lVar22 = *plVar10;
  if (lVar22 != 0) goto LAB_143164486;
  local_b8 = lVar22;
  piVar11 = (int *)FUN_14001cc68(0xb0,0x10);
  piVar11[0xc] = 0;
  piVar11[0xd] = 0;
  *(undefined1 *)(piVar11 + 0xe) = 0;
  piVar11[0x20] = 0;
  piVar11[0x21] = 4;
  *(undefined1 (*) [16])(piVar11 + 2) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(piVar11 + 6) = (undefined1  [16])0x0;
  piVar11[10] = 0;
  piVar11[0x22] = -1;
  piVar11[0x23] = -1;
  piVar11[0x24] = -1;
  piVar11[0x25] = -1;
  piVar11[0x26] = -1;
  piVar11[0x27] = -1;
  piVar11[0x28] = -1;
  piVar11[0x29] = -1;
  piVar11[0x2a] = 0;
  *plVar10 = (longlong)piVar11;
  *piVar11 = param_3;
  lVar22 = *(longlong *)(piVar11 + 2);
  if (lVar22 != param_2) {
    *(longlong *)(piVar11 + 2) = param_2;
    if (param_2 != 0) {
      LOCK();
      *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
      UNLOCK();
    }
    if (lVar22 != 0) {
      LOCK();
      puVar16 = (uint *)(lVar22 + 8);
      uVar19 = *puVar16;
      *puVar16 = *puVar16 - 1;
      UNLOCK();
      if ((uVar19 & 0x3fffffff) == 1) {
        puVar16 = (uint *)(lVar22 + 8);
        LOCK();
        uVar19 = *puVar16;
        *puVar16 = *puVar16 | 0x40000000;
        UNLOCK();
        if ((uVar19 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(lVar22 + 0xd);
          plVar12 = (longlong *)FUN_14001cc68(0x10,8);
          plVar12[1] = lVar22;
          plVar18 = DAT_14ca843c0;
          plVar13 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar12 = (longlong)plVar18;
              LOCK();
              bVar26 = plVar18 != DAT_14ca843c0;
              plVar13 = plVar12;
              if (bVar26) {
                plVar18 = DAT_14ca843c0;
                plVar13 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar13;
              UNLOCK();
            } while (bVar26);
          }
          else {
            do {
              *plVar12 = (longlong)plVar13;
              LOCK();
              bVar26 = plVar13 != DAT_14ca843c8;
              plVar18 = plVar12;
              if (bVar26) {
                plVar13 = DAT_14ca843c8;
                plVar18 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar18;
              UNLOCK();
            } while (bVar26);
          }
        }
      }
    }
  }
  if (*(char *)(param_2 + 0x120) != '\x01') {
    FUN_140002266(&local_68,L"%s_%016llx",
                  &DAT_14a34c7bc + *(int *)(&DAT_14a34c7b8 + (longlong)param_3 * 4),LVar7.QuadPart);
    iVar6 = piVar11[0x20];
    lVar22 = (longlong)iVar6;
    piVar11[0x20] = iVar6 + 1U;
    if ((uint)piVar11[0x21] < iVar6 + 1U) {
      FUN_147375286(piVar11 + 0x10,iVar6);
    }
    *(undefined8 *)(piVar11 + 0x10 + lVar22 * 4) = local_68;
    local_68 = 0;
    piVar11[lVar22 * 4 + 0x12] = (int)uStack_60;
    piVar11[lVar22 * 4 + 0x13] = uStack_60._4_4_;
    puVar14 = (undefined8 *)
              (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x308);
    puVar16 = (uint *)*puVar14;
    if (puVar16 != (uint *)0x0) goto LAB_1431646a2;
    while( true ) {
      uVar19 = *(uint *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
      ;
      if ((uVar19 & 1) == 0) {
        *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x318) = uVar19 | 1;
        __tlregdtor(&LAB_143168583);
      }
      lVar22 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      puVar15 = *(undefined4 **)(lVar22 + 0x310);
      *(undefined8 *)(lVar22 + 0x310) = 0;
      if (puVar15 == (undefined4 *)0x0) {
        puVar15 = _aligned_malloc(0x10000,0x10000);
      }
      *puVar15 = 0xffffffff;
      *(undefined4 **)(puVar15 + 0x10) = puVar15 + 0x16;
      puVar15[0x12] = 0;
      *puVar14 = puVar15;
      FUN_140217a48(puVar14);
      puVar16 = (uint *)*puVar14;
LAB_1431646a2:
      puVar25 = (undefined8 *)(*(longlong *)(puVar16 + 0x10) + 7U & 0xfffffffffffffff8);
      puVar21 = (uint *)(puVar25 + 0x1d);
      uVar19 = puVar16[0x12];
      if (puVar21 <= puVar16 + 0x4000) break;
      while( true ) {
        *(uint **)(puVar16 + 0x10) = puVar16 + 0x4000;
        LOCK();
        uVar2 = *puVar16;
        *puVar16 = *puVar16 + uVar19 + 1;
        UNLOCK();
        if ((uVar2 ^ uVar19) != 0xffffffff) break;
        puVar16 = (uint *)*puVar14;
        *puVar16 = 0xffffffff;
        *(uint **)(puVar16 + 0x10) = puVar16 + 0x16;
        puVar16[0x12] = 0;
        *puVar14 = puVar16;
        puVar25 = (undefined8 *)((longlong)puVar16 + 0x5fU & 0xfffffffffffffff8);
        puVar21 = (uint *)(puVar25 + 0x1d);
        uVar19 = 0;
        if (puVar21 <= puVar16 + 0x4000) {
          uVar19 = 1;
          goto LAB_143164726;
        }
      }
    }
    uVar19 = uVar19 + 1;
LAB_143164726:
    *(uint **)(puVar16 + 0x10) = puVar21;
    puVar16[0x12] = uVar19;
    FUN_1447247dc(puVar25,0);
    *puVar25 = &PTR_FUN_14a34c270;
    puVar25[0x15] = piVar11;
    *(LARGE_INTEGER *)(puVar25 + 0x16) = local_90;
    puVar25[0x17] = CONCAT44(uStack_84,uStack_88);
    *(undefined4 *)(puVar25 + 0x18) = (undefined4)local_80;
    *(undefined4 *)((longlong)puVar25 + 0xc4) = local_80._4_4_;
    *(undefined4 *)(puVar25 + 0x19) = (undefined4)uStack_78;
    *(undefined4 *)((longlong)puVar25 + 0xcc) = uStack_78._4_4_;
    puVar25[0x1a] = local_c0;
    puVar25[0x1b] = *(undefined8 *)(local_c0[2] + 0x30);
    *(int *)(puVar25 + 0x1c) = param_3;
    if (*(code **)(puVar25[0xe] + 0x18) != FUN_144713626) {
      (**(code **)(puVar25[0xe] + 0x18))(puVar25 + 0xe,puVar25 + 9);
    }
    puVar25[0xe] = LowLevelTasks::
                   TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                   TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                   ::vftable;
    puVar25[9] = puVar25;
    puVar25[10] = puVar25;
    lVar22 = *(longlong *)
              (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x2b8);
    if (lVar22 == 0) {
      uVar17 = 0;
    }
    else {
      uVar17 = *(undefined8 *)(lVar22 + 0x30);
    }
    puVar25[0xf] = uVar17;
    puVar25[0x10] = 0xc00000527800b400;
    *(undefined4 *)((longlong)puVar25 + 0x1c) = 0;
    if (puVar25 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puVar25 + 1) = *(int *)(puVar25 + 1) + 1;
      UNLOCK();
    }
    local_68 = CONCAT71(local_68._1_7_,1);
    FUN_1447439e4(puVar25);
    lVar22 = local_b8;
    puVar14 = *(undefined8 **)(piVar11 + 0xc);
    *(undefined8 **)(piVar11 + 0xc) = puVar25;
    if (puVar14 != (undefined8 *)0x0) {
      LOCK();
      piVar11 = (int *)(puVar14 + 1);
      *piVar11 = *piVar11 + -1;
      UNLOCK();
      if (*piVar11 == 0) {
        (**(code **)*puVar14)(puVar14,1);
      }
    }
    goto LAB_143164486;
  }
  plVar18 = *(longlong **)(piVar11 + 4);
  piVar11[4] = 0;
  piVar11[5] = 0;
  if ((plVar18 != (longlong *)0x0) &&
     ((**(code **)(*plVar18 + 0x10))(), *(longlong *)(piVar11 + 4) != 0)) {
    *(undefined1 (*) [16])(piVar11 + 6) = (undefined1  [16])0x0;
    piVar11[10] = 0;
  }
  piVar1 = piVar11 + 0x10;
  iVar6 = piVar11[0x20];
  lVar22 = (longlong)iVar6;
  piVar11[0x20] = iVar6 + 1U;
  local_c0 = plVar10;
  if ((uint)piVar11[0x21] < iVar6 + 1U) {
    FUN_147375286(piVar1,iVar6);
  }
  piVar23 = piVar1 + lVar22 * 4;
  (piVar1 + lVar22 * 4)[0] = 0;
  (piVar1 + lVar22 * 4)[1] = 0;
  iVar6 = *(int *)(param_2 + 0xf8);
  _Src = *(void **)(param_2 + 0xf0);
  piVar11[lVar22 * 4 + 0x12] = iVar6;
  if ((longlong)iVar6 == 0) {
    piVar23[3] = 0;
LAB_1431643ff:
    puVar24 = &DAT_149dfb77a;
  }
  else {
    FUN_1446dd670(piVar23,iVar6,0);
    memcpy(*(void **)piVar23,_Src,(longlong)iVar6 * 2);
    if (*(int *)(param_2 + 0xf8) == 0) goto LAB_1431643ff;
    puVar24 = *(undefined2 **)(param_2 + 0xf0);
  }
  plVar10 = local_c0;
  local_70 = (longlong *)0x0;
  (**(code **)**(undefined8 **)(piVar11 + 4))
            (*(undefined8 **)(piVar11 + 4),&DAT_14a34bf98,&local_70);
  puVar14 = (undefined8 *)(**(code **)(*local_70 + 0x18))(local_70,puVar24);
  local_68 = *puVar14;
  uStack_60 = puVar14[1];
  local_58 = *(undefined4 *)(puVar14 + 2);
  uStack_54 = *(undefined4 *)((longlong)puVar14 + 0x14);
  uStack_50 = *(undefined4 *)(puVar14 + 3);
  uStack_4c = *(undefined4 *)((longlong)puVar14 + 0x1c);
  if (local_70 != (longlong *)0x0) {
    (**(code **)(*local_70 + 0x10))();
  }
  *(ulonglong *)(piVar11 + 0x26) = CONCAT44(uStack_54,local_58);
  *(ulonglong *)(piVar11 + 0x28) = CONCAT44(uStack_4c,uStack_50);
  *(undefined8 *)(piVar11 + 0x22) = local_68;
  *(undefined8 *)(piVar11 + 0x24) = uStack_60;
  *(undefined1 *)(piVar11 + 0xe) = 1;
  lVar22 = local_b8;
LAB_143164486:
  lVar9 = local_b0;
  if ((*(longlong *)(*plVar10 + 0x30) != 0) &&
     ((*(byte *)(*(longlong *)(*plVar10 + 0x30) + 0xa0) & 1) == 0)) {
    lVar8 = *plVar10;
    iVar6 = *(int *)(local_b0 + 0x28);
    *(uint *)(local_b0 + 0x28) = iVar6 + 1U;
    if (*(uint *)(local_b0 + 0x2c) < iVar6 + 1U) {
      FUN_14476a5c8(local_b0,iVar6);
    }
    lVar20 = *(longlong *)(lVar9 + 0x20);
    if (lVar20 == 0) {
      lVar20 = lVar9;
    }
    lVar9 = *(longlong *)(lVar8 + 0x30);
    *(longlong *)(lVar20 + (longlong)iVar6 * 8) = lVar9;
    if (lVar9 != 0) {
      LOCK();
      *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
      UNLOCK();
    }
  }
  lVar9 = *plVar10;
  LeaveCriticalSection(local_a8);
  QueryPerformanceCounter(&local_90);
  *(longlong *)param_1[8] = *(longlong *)param_1[8] + local_90.QuadPart;
  if (local_91 == '\0') {
    plVar10 = (longlong *)param_1[5];
    iVar6 = (int)plVar10[1];
    *(uint *)(plVar10 + 1) = iVar6 + 1U;
    if (*(uint *)((longlong)plVar10 + 0xc) < iVar6 + 1U) {
      FUN_14737aad2(plVar10,iVar6);
    }
    *(longlong *)(*plVar10 + (longlong)iVar6 * 8) = lVar9;
    if (lVar22 != 0) {
      *(int *)param_1[7] = *(int *)param_1[7] + 1;
    }
  }
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar9;
}



// FUNCTION 14316491e FUN_14316491e body=1081 status=ok
// SIG undefined FUN_14316491e(void)

/* WARNING: Type propagation algorithm not settling */

undefined8 *
FUN_14316491e(undefined8 *param_1,longlong *param_2,longlong *param_3,longlong *param_4,
             undefined4 param_5,undefined4 param_6,longlong *param_7,undefined8 param_8,
             longlong *param_9,longlong *param_10,longlong *param_11,undefined4 param_12)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined8 *local_f0;
  longlong *local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 local_c0;
  int local_bc;
  longlong local_b8;
  int local_b0 [2];
  longlong local_a8;
  ulonglong local_a0;
  longlong local_98;
  undefined4 local_90;
  undefined4 local_8c;
  longlong local_88 [5];
  ulonglong local_60;
  
  plVar2 = param_11;
  plVar1 = param_9;
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  *param_1 = 0;
  local_88[2] = 0;
  local_88[3] = 0;
  local_e0 = param_2;
  FUN_147375972(local_88 + 2,
                (int)param_11[1] +
                (int)param_3[1] + (int)param_7[1] + (int)param_9[1] + (int)param_4[1] + 5);
  local_88[0] = 0;
  local_88[1] = 0;
  FUN_1473759ba(local_88,(int)param_4[1]);
  if ((longlong)(int)param_3[1] == 0) {
    lVar6 = 0;
  }
  else {
    lVar7 = *param_3;
    lVar4 = (longlong)(int)param_3[1] << 3;
    lVar6 = 0;
    do {
      lVar8 = *(longlong *)(lVar7 + lVar6 * 8);
      lVar9 = (longlong)(int)lVar6 * 0x10;
      *(undefined8 *)(local_88[2] + lVar9) = 5;
      *(longlong *)(local_88[2] + 8 + lVar9) = lVar8 + 0xd8;
      lVar6 = lVar6 + 1;
      lVar4 = lVar4 + -8;
    } while (lVar4 != 0);
  }
  local_8c = param_5;
  local_90 = param_6;
  iVar5 = (int)lVar6;
  local_a8 = (longlong)iVar5 * 0x10;
  *(undefined4 *)(local_88[2] + local_a8) = 9;
  *(undefined4 **)(local_88[2] + 8 + local_a8) = &local_90;
  local_a0 = (ulonglong)*(uint *)(param_4 + 1);
  local_98 = *param_4;
  local_a8 = local_a8 + local_88[2];
  iVar3 = iVar5 + 2;
  lVar6 = (longlong)(iVar5 + 1) * 0x10;
  *(undefined4 *)(local_88[2] + lVar6) = 7;
  *(longlong **)(local_88[2] + 8 + lVar6) = &local_a8;
  if ((longlong)(int)param_7[1] != 0) {
    lVar6 = *param_7;
    lVar7 = (longlong)(int)param_7[1] * 0x28;
    do {
      lVar4 = (longlong)iVar3;
      iVar3 = iVar3 + 1;
      *(undefined4 *)(local_88[2] + lVar4 * 0x10) = 0xb;
      *(longlong *)(local_88[2] + 8 + lVar4 * 0x10) = lVar6;
      lVar6 = lVar6 + 0x28;
      lVar7 = lVar7 + -0x28;
    } while (lVar7 != 0);
  }
  local_b0[1] = 1;
  *(undefined4 *)(local_88[2] + (longlong)iVar3 * 0x10) = 10;
  *(int **)(local_88[2] + 8 + (longlong)iVar3 * 0x10) = local_b0 + 1;
  local_b0[0] = (uint)DAT_14ca84ef6 << 2;
  lVar6 = (longlong)(iVar3 + 1) * 0x10;
  *(undefined4 *)(local_88[2] + lVar6) = 0;
  *(int **)(local_88[2] + 8 + lVar6) = local_b0;
  iVar5 = iVar3 + 3;
  lVar6 = (longlong)(iVar3 + 2) * 0x10;
  *(undefined4 *)(local_88[2] + lVar6) = 1;
  *(undefined8 **)(local_88[2] + 8 + lVar6) = &param_8;
  local_bc = iVar5;
  if (0 < (int)plVar1[1]) {
    lVar7 = 0;
    lVar6 = 0;
    do {
      lVar4 = *plVar1;
      lVar8 = (longlong)(iVar5 + (int)lVar6) * 0x10;
      *(undefined4 *)(local_88[2] + lVar8) = 2;
      *(longlong *)(local_88[2] + 8 + lVar8) = lVar4 + lVar7;
      lVar6 = lVar6 + 1;
      lVar7 = lVar7 + 8;
    } while (lVar6 < (int)plVar1[1]);
    local_bc = (int)lVar6 + iVar5;
  }
  if (0 < (int)param_4[1]) {
    lVar6 = 0;
    lVar4 = 0;
    lVar7 = 0;
    do {
      iVar3 = 0;
      if ((int)param_10[1] != 0) {
        iVar3 = *(int *)(*param_10 + lVar7 * 4);
      }
      *(undefined8 *)(local_88[0] + lVar4) = 0;
      ((undefined8 *)(local_88[0] + lVar4))[1] = 0;
      *(undefined8 *)(local_88[0] + 0x10 + lVar4) = 0;
      *(undefined4 *)(local_88[0] + 8 + lVar4) = 1;
      *(longlong *)(local_88[0] + 0x10 + lVar4) = *param_4 + lVar6;
      *(longlong *)(local_88[0] + lVar4) = (longlong)(iVar3 + iVar5) * 0x10 + local_88[2];
      lVar8 = (longlong)(local_bc + (int)lVar7) * 0x10;
      *(undefined4 *)(local_88[2] + lVar8) = 7;
      *(longlong *)(local_88[2] + 8 + lVar8) = local_88[0] + lVar4;
      lVar7 = lVar7 + 1;
      lVar4 = lVar4 + 0x18;
      lVar6 = lVar6 + 8;
    } while (lVar7 < (int)param_4[1]);
    local_bc = local_bc + (int)lVar7;
  }
  if (0 < (int)plVar2[1]) {
    lVar6 = 0;
    lVar7 = 0;
    do {
      lVar4 = *plVar2;
      lVar8 = (longlong)(local_bc + (int)lVar7) * 0x10;
      *(undefined4 *)(local_88[2] + lVar8) = 6;
      *(longlong *)(local_88[2] + 8 + lVar8) = lVar4 + lVar6;
      lVar7 = lVar7 + 1;
      lVar6 = lVar6 + 0x18;
    } while (lVar7 < (int)plVar2[1]);
    local_bc = local_bc + (int)lVar7;
  }
  local_b8 = local_88[2];
  local_c0 = param_12;
  iVar3 = (**(code **)(*local_e0 + 0x1f0))(local_e0,&local_c0,&DAT_14a34c4e8,param_1);
  if (iVar3 < 0) {
    local_f0 = &local_d8;
    local_d8 = 0;
    uStack_d0 = 0;
    local_f8 = 0;
    FUN_145763094(iVar3,
                  "RayTracingDevice->CreateStateObject(&Desc, IID_PPV_ARGS(Result.GetInitReference()))"
                  ,".\\Runtime/D3D12RHI/Private/D3D12RayTracing.cpp",0x29b);
  }
  if (local_88[0] != 0) {
    FUN_1400020a8();
  }
  if (local_88[2] != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 143164d58 FUN_143164d58 body=2120 status=ok
// SIG undefined FUN_143164d58(void)

undefined8 * FUN_143164d58(undefined8 *param_1,ulonglong *param_2,longlong param_3)

{
  uint *puVar1;
  byte bVar2;
  undefined *****pppppuVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong lVar9;
  void *_Dst;
  longlong *plVar10;
  uint uVar11;
  char cVar12;
  uint uVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  bool bVar16;
  undefined1 auStack_1b8 [32];
  undefined4 local_198;
  undefined8 *local_190;
  undefined ****local_188;
  ulonglong local_180;
  undefined8 uStack_178;
  ulonglong local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined1 local_118;
  undefined2 local_117;
  undefined8 *local_110;
  undefined4 local_108;
  longlong local_100;
  int local_f4 [3];
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  uint uStack_c4;
  ulonglong local_c0;
  wchar_t *pwStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_70;
  undefined2 local_6f;
  undefined1 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined1 *)((longlong)param_1 + 0xc) = 0x21;
  *(byte *)((longlong)param_1 + 0xd) = *(byte *)((longlong)param_1 + 0xd) | 3;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *param_1 = &PTR_LAB_14a34c350;
  puVar8 = param_1 + 5;
  FUN_147377468(puVar8);
  param_1[0x10] = param_3;
  *param_1 = &PTR_FUN_14a34bfc0;
  param_1[0xf] = &PTR_LAB_14a34bfd8;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x56] = 0;
  *(undefined4 *)(param_1 + 0x57) = 0;
  memset(param_1 + 0x1c,0,0x194);
  *(undefined4 *)((longlong)param_1 + 700) = 1;
  param_1[0x58] = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca76b68) && (FUN_144b3d300(&DAT_14ca76b68), DAT_14ca76b68 == -1)) {
    FUN_1446f470e(&DAT_14ca76b60,L"BLAS",1);
    _Init_thread_footer(&DAT_14ca76b68);
  }
  lVar9 = DAT_14ca76b60;
  if (*(int *)(param_1 + 0xd) != 0) {
    lVar9 = 0;
  }
  if (param_1[0xc] != 0) {
    lVar9 = param_1[0xc];
  }
  param_1[0x4c] = lVar9;
  *(int *)(param_1 + 0x4d) = *(int *)(param_1 + 0xd);
  *(undefined8 *)((longlong)param_1 + 0x26c) = *(undefined8 *)((longlong)param_1 + 0x6c);
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  if (DAT_14ca76b58 == 0) {
    local_180 = 0;
    uStack_178 = 0;
    local_188 = (undefined ****)&PTR_FUN_14a34c530;
    local_170 = local_170 & 0xffffffffffffff00;
    FUN_147372826(&local_180,0xc,1);
    local_e8 = (undefined8 *)0x0;
    local_d8 = 1;
    uStack_d4 = 0;
    uStack_d0 = 0;
    uStack_cc = 0;
    uStack_c8 = 0;
    uStack_c4 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
    local_c0 = (local_c0 >> 8 & 0xffffff) << 8;
    pwStack_b8 = L"NullTransformBuffer";
    local_b0 = 0;
    uStack_a8 = 0;
    uStack_e0 = &local_188;
    if ((uint)uStack_178 < 0x40000000) {
      local_f4[0] = (uint)uStack_178 * 4;
      local_f4[1] = 0;
      local_f4[2] = 0x4001;
      if ((uint)uStack_178 == 0) goto LAB_143164fba;
    }
    else {
      FUN_140033559("Runtime\\Core\\Public\\Containers/DynamicRHIResourceArray.h",0x47,
                    L"Resource data size too large for uint32, will overflow. Calculate with larger data type or use fewer elements. sizeof(ElementType): %d"
                    ,4);
      local_f4[0] = 0;
      local_f4[1] = 0;
      if ((local_c0 & 1) == 0) {
LAB_143164fba:
        local_f4[2] = 0x4001;
        local_f4[1] = 0;
        FUN_14570b4be(param_2,&local_e8,0x4001,0);
      }
      else {
        local_f4[2] = 0x100000;
      }
    }
    if (*(char *)((longlong)param_2 + 0x69) == '\0') {
      FUN_14002049c(param_2,1);
      local_190 = &local_e8;
      local_198 = 8;
      (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_100,param_2,local_f4);
      *(undefined4 *)(local_100 + 0x18) = 8;
      FUN_14002049c(param_2,0);
      lVar9 = local_100;
    }
    else {
      local_190 = &local_e8;
      local_198 = 8;
      (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_100,param_2,local_f4);
      *(undefined4 *)(local_100 + 0x18) = 8;
      lVar9 = local_100;
    }
    lVar4 = DAT_14ca76b58;
    local_100 = 0;
    if (DAT_14ca76b58 != 0) {
      LOCK();
      puVar1 = (uint *)(DAT_14ca76b58 + 8);
      uVar13 = *puVar1;
      DAT_14ca76b58 = lVar9;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar13 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar4 + 8);
        LOCK();
        uVar13 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar13 >> 0x1e & 1) == 0) {
          bVar2 = *(byte *)(lVar4 + 0xd);
          plVar6 = (longlong *)FUN_14001cc68(0x10,8);
          plVar6[1] = lVar4;
          plVar10 = DAT_14ca843c0;
          plVar7 = DAT_14ca843c8;
          if ((bVar2 & 2) == 0) {
            do {
              *plVar6 = (longlong)plVar10;
              LOCK();
              bVar16 = plVar10 != DAT_14ca843c0;
              plVar7 = plVar6;
              if (bVar16) {
                plVar10 = DAT_14ca843c0;
                plVar7 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar7;
              UNLOCK();
            } while (bVar16);
          }
          else {
            do {
              *plVar6 = (longlong)plVar7;
              LOCK();
              bVar16 = plVar7 != DAT_14ca843c8;
              plVar10 = plVar6;
              if (bVar16) {
                plVar7 = DAT_14ca843c8;
                plVar10 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar10;
              UNLOCK();
            } while (bVar16);
          }
        }
      }
      lVar4 = local_100;
      lVar9 = DAT_14ca76b58;
      if (local_100 != 0) {
        LOCK();
        puVar1 = (uint *)(local_100 + 8);
        uVar13 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        lVar9 = DAT_14ca76b58;
        if ((uVar13 & 0x3fffffff) == 1) {
          puVar1 = (uint *)(local_100 + 8);
          LOCK();
          uVar13 = *puVar1;
          *puVar1 = *puVar1 | 0x40000000;
          UNLOCK();
          lVar9 = DAT_14ca76b58;
          if ((uVar13 >> 0x1e & 1) == 0) {
            bVar2 = *(byte *)(local_100 + 0xd);
            plVar6 = (longlong *)FUN_14001cc68(0x10,8);
            plVar6[1] = lVar4;
            plVar10 = DAT_14ca843c0;
            plVar7 = DAT_14ca843c8;
            if ((bVar2 & 2) == 0) {
              do {
                *plVar6 = (longlong)plVar10;
                LOCK();
                bVar16 = plVar10 != DAT_14ca843c0;
                plVar7 = plVar6;
                if (bVar16) {
                  plVar10 = DAT_14ca843c0;
                  plVar7 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar7;
                UNLOCK();
                lVar9 = DAT_14ca76b58;
              } while (bVar16);
            }
            else {
              do {
                *plVar6 = (longlong)plVar7;
                LOCK();
                bVar16 = plVar7 != DAT_14ca843c8;
                plVar10 = plVar6;
                if (bVar16) {
                  plVar7 = DAT_14ca843c8;
                  plVar10 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar10;
                UNLOCK();
                lVar9 = DAT_14ca76b58;
              } while (bVar16);
            }
          }
        }
      }
    }
    DAT_14ca76b58 = lVar9;
    if (local_180 != 0 && (local_180 & 1) == 0) {
      FUN_1400020a8();
    }
  }
  FUN_1473728a0(param_1 + 0x4f,*(undefined4 *)(param_1 + 9),1);
  local_110 = (undefined8 *)param_1[0x56];
  if ((undefined8 *)param_1[0x56] == (undefined8 *)0x0) {
    local_110 = param_1 + 0x4f;
  }
  local_108 = *(undefined4 *)(param_1 + 0x57);
  FUN_1473721ea(puVar8);
  if (DAT_14c760da4 != 0) {
    uVar11 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
    uVar13 = 0;
    if (uVar11 != 0) {
      for (; (uVar11 >> uVar13 & 1) == 0; uVar13 = uVar13 + 1) {
      }
    }
    do {
      *(undefined1 *)((longlong)param_1 + (ulonglong)uVar13 + 0x88) = 1;
      bVar2 = (byte)uVar13 & 0x1f;
      uVar11 = (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2) & uVar11;
      if (uVar11 == 0) {
        uVar13 = 0x20;
      }
      else {
        uVar13 = 0;
        if (uVar11 != 0) {
          for (; (uVar11 >> uVar13 & 1) == 0; uVar13 = uVar13 + 1) {
          }
        }
      }
    } while (uVar11 != 0);
  }
  if ((longlong *)param_1[10] == (longlong *)0x0) {
    (**(code **)(*DAT_14ca83900 + 0x4d0))(DAT_14ca83900,&local_e8,puVar8);
    param_1[4] = CONCAT44(uStack_d4,local_d8);
    *(undefined4 *)(param_1 + 2) = (undefined4)local_e8;
    *(undefined4 *)((longlong)param_1 + 0x14) = local_e8._4_4_;
    *(undefined4 *)(param_1 + 3) = (undefined4)uStack_e0;
    *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_e0._4_4_;
  }
  else {
    puVar8 = (undefined8 *)(**(code **)(*(longlong *)param_1[10] + 8))();
    param_1[2] = *puVar8;
    param_1[3] = puVar8[1];
    param_1[4] = puVar8[2];
    param_1[0x58] = *puVar8;
  }
  cVar12 = *(char *)((longlong)param_1 + 0x3f);
  if (cVar12 != '\x01') {
    if (DAT_14c760da4 == 0) {
      plVar10 = (longlong *)param_1[10];
      if (plVar10 == (longlong *)0x0) goto LAB_1431654c6;
    }
    else {
      uVar14 = 0;
      do {
        local_198 = 0;
        local_190 = param_1 + 0x4c;
        FUN_1431658b8(&local_e8,param_3,uVar14 & 0xffffffff,param_1[2]);
        lVar9 = param_1[uVar14 + 0x12];
        param_1[uVar14 + 0x12] = local_e8;
        if (lVar9 != 0) {
          (**(code **)(*(longlong *)(lVar9 + 0x30) + 0x10))(lVar9 + 0x30);
        }
      } while ((uVar14 < 7) && (uVar14 = uVar14 + 1, uVar14 < DAT_14c760da4));
      plVar10 = (longlong *)param_1[10];
      if (plVar10 == (longlong *)0x0) {
        if (DAT_14c760da4 != 0) {
          uVar13 = 0;
          do {
            FUN_1473728f0(param_1,uVar13);
            if (6 < uVar13) break;
            uVar13 = uVar13 + 1;
          } while (uVar13 < DAT_14c760da4);
        }
        goto LAB_1431654c6;
      }
      cVar12 = *(char *)((longlong)param_1 + 0x3f);
    }
    pppppuVar3 = *(undefined ******)(param_3 + 2000);
    lVar9 = (**(code **)(*plVar10 + 8))();
    iVar5 = (**(code **)(*(longlong *)param_1[10] + 0x10))();
    local_180 = 0;
    uStack_178 = 0;
    local_170 = 0;
    local_138 = 0;
    uStack_130 = 0;
    local_128 = 0;
    uStack_120 = 0;
    local_118 = 0;
    local_117 = 0xff;
    local_168 = 0;
    uStack_160 = 0;
    local_158 = 0;
    uStack_150 = 0;
    local_148 = 0;
    uStack_140 = 0;
    local_188 = (undefined ****)pppppuVar3;
    _Dst = (void *)FUN_14008f39a(*(undefined8 *)(param_3 + 0x4e0),(ulonglong)(iVar5 - 0x18),0x100,
                                 &local_188);
    memcpy(_Dst,(void *)(lVar9 + 0x18),(ulonglong)(iVar5 - 0x18));
    uStack_e0 = (undefined *****)local_188;
    local_d8 = 0;
    uStack_d4 = 0;
    uStack_d0 = 0;
    uStack_cc = 0;
    uStack_c8 = 0;
    uStack_c4 = 0;
    local_90 = 0;
    uStack_88 = 0;
    local_80 = 0;
    uStack_78 = 0;
    local_70 = 0;
    local_6f = 0xff;
    local_c0 = 0;
    pwStack_b8 = (wchar_t *)0x0;
    local_b0 = 0;
    uStack_a8 = 0;
    local_a0 = 0;
    uStack_98 = 0;
    local_e8 = param_1;
    FUN_14488e164(&uStack_e0,&local_188);
    local_68 = cVar12 == '\0';
    if (*(char *)((longlong)param_2 + 100) == '\x01') {
      FUN_14316a5f2(&local_e8,param_2);
    }
    else {
      puVar15 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar8 = puVar15 + 0x13;
      if ((undefined8 *)param_2[1] < puVar8) {
        FUN_140023dd8(param_2,0xa0);
        puVar15 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar8 = puVar15 + 0x13;
      }
      *param_2 = (ulonglong)puVar8;
      *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
      *(undefined8 **)param_2[6] = puVar15;
      param_2[6] = (ulonglong)(puVar15 + 1);
      puVar15[1] = 0;
      *puVar15 = &PTR_FUN_14a34c458;
      puVar15[2] = local_e8;
      puVar15[3] = uStack_e0;
      puVar15[4] = 0;
      puVar15[5] = 0;
      puVar15[6] = 0;
      puVar15[0xd] = 0;
      puVar15[0xe] = 0;
      puVar15[0xf] = 0;
      puVar15[0x10] = 0;
      *(undefined1 *)(puVar15 + 0x11) = 0;
      *(undefined2 *)((longlong)puVar15 + 0x89) = 0xff;
      puVar15[7] = 0;
      puVar15[8] = 0;
      puVar15[9] = 0;
      puVar15[10] = 0;
      puVar15[0xb] = 0;
      puVar15[0xc] = 0;
      FUN_14488e164(puVar15 + 3,&uStack_e0);
      *(undefined1 *)(puVar15 + 0x12) = local_68;
    }
    FUN_144902b9c(&uStack_e0);
    (**(code **)(*(longlong *)param_1[10] + 0x18))();
    FUN_144902b9c(&local_188);
  }
LAB_1431654c6:
  if ((local_60 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1431655a2 FUN_1431655a2 body=368 status=ok
// SIG undefined FUN_1431655a2(void)

undefined8 * FUN_1431655a2(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [120];
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  uVar1 = **(undefined8 **)(param_1 + 0x1b0);
  puVar2 = (undefined8 *)FUN_14001cc68(0x1e0,0x10);
  FUN_147372674(local_c8,param_3);
  *(undefined4 *)(puVar2 + 1) = 0;
  *(undefined1 *)((longlong)puVar2 + 0xc) = 0x21;
  *(byte *)((longlong)puVar2 + 0xd) = *(byte *)((longlong)puVar2 + 0xd) | 3;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[5] = uVar1;
  *puVar2 = &PTR_FUN_14a34c020;
  *(undefined4 *)(puVar2 + 6) = 0;
  puVar2[7] = 0;
  puVar2[8] = 0;
  puVar2[9] = 0;
  puVar2[10] = 0;
  puVar2[0xb] = 0;
  puVar2[0xc] = 0;
  puVar2[0xd] = 0;
  puVar2[0xe] = 0;
  *(undefined4 *)(puVar2 + 0xf) = 0;
  FUN_147372674(puVar2 + 0x10);
  puVar2[0x35] = 0;
  *(undefined4 *)(puVar2 + 0x36) = 0;
  memset(puVar2 + 0x1f,0,0xa0);
  *(undefined8 *)((longlong)puVar2 + 0x1b4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar2 + 0x1bc) = 0;
  puVar2[0x39] = 0;
  *(undefined4 *)(puVar2 + 0x3a) = 0;
  *(undefined2 *)(puVar2 + 0x3b) = 0;
  (**(code **)(*DAT_14ca83900 + 0x4c8))(DAT_14ca83900,&local_50,puVar2 + 0x10);
  puVar2[4] = local_40;
  *(undefined4 *)(puVar2 + 2) = local_50;
  *(undefined4 *)((longlong)puVar2 + 0x14) = uStack_4c;
  *(undefined4 *)(puVar2 + 3) = uStack_48;
  *(undefined4 *)((longlong)puVar2 + 0x1c) = uStack_44;
  FUN_147123b8c(local_c8);
  *param_2 = puVar2;
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar2 + 1) = *(int *)(puVar2 + 1) + 1;
    UNLOCK();
  }
  FUN_147123b8c(param_3);
  if ((local_38 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143165714 FUN_143165714 body=82 status=ok
// SIG undefined FUN_143165714(void)

longlong * FUN_143165714(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = **(undefined8 **)(param_1 + 0x1b0);
  lVar2 = FUN_14001cc68(0x78,0x10);
  FUN_143165766(lVar2,uVar1,param_4);
  *param_2 = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 143165766 FUN_143165766 body=208 status=ok
// SIG undefined FUN_143165766(void)

undefined8 * FUN_143165766(undefined8 *param_1,longlong param_2,undefined8 *param_3)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined1 *)((longlong)param_1 + 0xc) = 0x22;
  *(byte *)((longlong)param_1 + 0xd) = *(byte *)((longlong)param_1 + 0xd) | 3;
  *param_1 = &PTR_FUN_14a34c300;
  uVar5 = param_3[1];
  uVar3 = *(undefined8 *)((longlong)param_3 + 0xc);
  uVar4 = *(undefined8 *)((longlong)param_3 + 0x14);
  param_1[2] = *param_3;
  param_1[3] = uVar5;
  *(undefined8 *)((longlong)param_1 + 0x1c) = uVar3;
  *(undefined8 *)((longlong)param_1 + 0x24) = uVar4;
  param_1[6] = param_2;
  *param_1 = &PTR_FUN_14a34c2f0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  lVar7 = (longlong)DAT_14c760da4;
  if (lVar7 != 0) {
    lVar6 = 0;
    do {
      lVar2 = *(longlong *)(param_2 + 2000 + lVar6);
      uVar1 = *(uint *)(lVar2 + 8);
      uVar5 = FUN_14001cc68(0x5c0,0x40);
      FUN_147376110(uVar5,param_1 + 2,lVar2);
      param_1[(ulonglong)uVar1 + 7] = uVar5;
      lVar6 = lVar6 + 8;
    } while (lVar7 * 8 != lVar6);
  }
  return param_1;
}



// FUNCTION 143165836 FUN_143165836 body=130 status=ok
// SIG undefined FUN_143165836(void)

void FUN_143165836(void)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  lVar4 = DAT_14ca76b58;
  if (DAT_14ca76b58 != 0) {
    LOCK();
    puVar1 = (uint *)(DAT_14ca76b58 + 8);
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



// FUNCTION 1431658b8 FUN_1431658b8 body=769 status=ok
// SIG undefined FUN_1431658b8(void)

longlong *
FUN_1431658b8(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,int param_5
             ,undefined8 param_6)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined4 local_e0;
  undefined1 local_d8;
  int *local_d0;
  undefined8 local_c8;
  undefined2 *local_c0;
  undefined8 *local_b8;
  undefined8 *local_b0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80 [2];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  int local_44;
  undefined2 *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_1474121c4(param_6,&local_40);
  *param_1 = 0;
  local_44 = 1 << ((byte)param_3 & 0x1f);
  local_9c = (undefined4)param_4;
  local_c0 = local_40;
  local_70 = param_4;
  if (param_5 == 0) {
    local_80[0] = 1;
    local_78 = 0;
    local_68 = 0x1000100000001;
    local_60 = 0;
    uStack_5c = 1;
    uStack_58 = 0;
    uStack_54 = 1;
    local_50 = 0;
    local_88 = 0;
    local_90 = 0;
    if (local_38 == 0) {
      local_c0 = &DAT_149dfb77a;
    }
    local_98 = 0x200000000000;
    local_b0 = &local_88;
    local_b8 = &local_90;
    local_c8 = 0;
    local_d0 = &local_44;
    local_e8 = 1;
    local_d8 = 0;
    local_e0 = 0x400000;
    lVar2 = FUN_1401297de(param_2,local_80,0x100);
    lVar3 = *param_1;
    if (lVar3 != lVar2) {
      *param_1 = lVar2;
      if (lVar2 != 0) {
        (**(code **)(*(longlong *)(lVar2 + 0x30) + 8))(lVar2 + 0x30);
      }
      if (lVar3 != 0) {
        (**(code **)(*(longlong *)(lVar3 + 0x30) + 0x10))(lVar3 + 0x30);
      }
    }
  }
  else {
    local_80[0] = 1;
    local_78 = 0;
    local_68 = 0x1000100000001;
    local_60 = 0;
    uStack_5c = 1;
    uStack_58 = 0;
    uStack_54 = 1;
    local_50 = 4;
    local_88 = 0;
    local_90 = 0;
    if (local_38 == 0) {
      local_c0 = &DAT_149dfb77a;
    }
    local_98 = 0x800000000;
    local_b0 = &local_88;
    local_b8 = &local_90;
    local_c8 = 0;
    local_d0 = &local_44;
    local_d8 = 0;
    local_e0 = 8;
    local_e8 = 0;
    lVar1 = FUN_1401297de(param_2,local_80,0x100);
    lVar3 = *param_1;
    lVar2 = lVar3;
    if (lVar3 != lVar1) {
      *param_1 = lVar1;
      if (lVar1 != 0) {
        (**(code **)(*(longlong *)(lVar1 + 0x30) + 8))(lVar1 + 0x30);
      }
      lVar2 = lVar1;
      if (lVar3 != 0) {
        (**(code **)(*(longlong *)(lVar3 + 0x30) + 0x10))(lVar3 + 0x30);
      }
    }
    lVar3 = *(longlong *)(*(longlong *)(lVar2 + 0x88) + 0x30);
    if (lVar3 == 0) {
      lVar3 = *(longlong *)(lVar2 + 0x88);
    }
    FUN_141032dd0(param_2,*(undefined8 *)(lVar3 + 0x20),0xa0010000,param_3);
  }
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 143165bba FUN_143165bba body=839 status=ok
// SIG undefined FUN_143165bba(void)

void FUN_143165bba(longlong param_1)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  byte bVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  ulonglong uVar10;
  int *piVar11;
  bool bVar12;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 uStack_90;
  longlong local_88;
  undefined4 uStack_80;
  undefined2 uStack_7c;
  undefined2 uStack_7a;
  undefined6 uStack_78;
  undefined1 local_72;
  undefined1 local_71;
  undefined7 uStack_70;
  undefined1 uStack_69;
  undefined4 uStack_68;
  undefined3 uStack_64;
  undefined1 local_61;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar9 = 0xd8;
  do {
    if (*(char *)(param_1 + lVar9) == '\x01') {
      FUN_147371f2a(*(undefined8 *)
                     (*(longlong *)(*(longlong *)(param_1 + -0x630 + lVar9 * 8) + 0x38) + 0x14f0),
                    param_1);
      *(undefined1 *)(param_1 + lVar9) = 0;
    }
    lVar9 = lVar9 + 1;
  } while (lVar9 != 0xe0);
  piVar11 = (int *)(param_1 + 0x1ec);
  uVar10 = 0;
  do {
    piVar11[-0x23] = 0;
    piVar11[-0x22] = 0;
    plVar8 = *(longlong **)(piVar11 + -0x21);
    if (plVar8 != (longlong *)0x0) {
      piVar11[-0x21] = 0;
      piVar11[-0x20] = 0;
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
    FUN_14737b0df(*(undefined8 *)(piVar11 + -3),piVar11[-1]);
    piVar11[-1] = 0;
    if (*piVar11 != 0) {
      FUN_14737bb04(piVar11 + -3);
    }
    FUN_147372c08(param_1,uVar10 & 0xffffffff);
    uVar10 = uVar10 + 1;
    piVar11 = piVar11 + 4;
  } while (uVar10 != 8);
  lVar9 = 0;
  do {
    lVar5 = *(longlong *)(param_1 + 0x90 + lVar9);
    if (lVar5 != 0) {
      *(undefined8 *)(param_1 + 0x90 + lVar9) = 0;
      (**(code **)(*(longlong *)(lVar5 + 0x30) + 0x10))();
    }
    lVar9 = lVar9 + 8;
  } while (lVar9 != 0x40);
  plVar8 = (longlong *)(param_1 + 0x28);
  local_88 = 0;
  uStack_80 = 0;
  uStack_7c = 0;
  uStack_7a = 0;
  uStack_78 = 0;
  local_72 = 1;
  local_71 = 0;
  uStack_70 = 0;
  uStack_69 = 0;
  uStack_68 = 0;
  uStack_64 = 0;
  local_61 = 0;
  uStack_60 = 0;
  uStack_5c = 0;
  uStack_58 = 0;
  uStack_54 = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  if (plVar8 != &local_88) {
    lVar9 = *plVar8;
    *plVar8 = 0;
    if (lVar9 != 0) {
      LOCK();
      puVar2 = (uint *)(lVar9 + 8);
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        puVar2 = (uint *)(lVar9 + 8);
        LOCK();
        uVar3 = *puVar2;
        *puVar2 = *puVar2 | 0x40000000;
        UNLOCK();
        if ((uVar3 >> 0x1e & 1) == 0) {
          bVar4 = *(byte *)(lVar9 + 0xd);
          plVar6 = (longlong *)FUN_14001cc68(0x10,8);
          plVar6[1] = lVar9;
          plVar8 = DAT_14ca843c0;
          plVar7 = DAT_14ca843c8;
          if ((bVar4 & 2) == 0) {
            do {
              *plVar6 = (longlong)plVar8;
              LOCK();
              bVar12 = plVar8 != DAT_14ca843c0;
              plVar7 = plVar6;
              if (bVar12) {
                plVar8 = DAT_14ca843c0;
                plVar7 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar7;
              UNLOCK();
            } while (bVar12);
          }
          else {
            do {
              *plVar6 = (longlong)plVar7;
              LOCK();
              bVar12 = plVar7 != DAT_14ca843c8;
              plVar8 = plVar6;
              if (bVar12) {
                plVar7 = DAT_14ca843c8;
                plVar8 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar8;
              UNLOCK();
            } while (bVar12);
          }
        }
      }
    }
  }
  *(undefined4 *)(param_1 + 0x30) = uStack_80;
  *(undefined2 *)(param_1 + 0x34) = uStack_7c;
  *(ulonglong *)(param_1 + 0x36) = CONCAT62(uStack_78,uStack_7a);
  *(undefined1 *)(param_1 + 0x3e) = local_72;
  *(undefined1 *)(param_1 + 0x3f) = local_71;
  FUN_140520998(param_1 + 0x40,&uStack_70);
  *(undefined4 *)(param_1 + 0x50) = uStack_60;
  *(undefined4 *)(param_1 + 0x54) = uStack_5c;
  *(undefined4 *)(param_1 + 0x58) = uStack_58;
  *(undefined4 *)(param_1 + 0x5c) = uStack_54;
  *(undefined4 *)(param_1 + 0x60) = uStack_50;
  *(undefined4 *)(param_1 + 100) = uStack_4c;
  *(undefined4 *)(param_1 + 0x68) = uStack_48;
  *(undefined4 *)(param_1 + 0x6c) = uStack_44;
  *(undefined4 *)(param_1 + 0x70) = uStack_40;
  FUN_14005bcf4(CONCAT17(uStack_69,uStack_70),uStack_68);
  if (CONCAT17(uStack_69,uStack_70) != 0) {
    FUN_1400020a8();
  }
  lVar9 = local_88;
  if (local_88 != 0) {
    LOCK();
    puVar2 = (uint *)(local_88 + 8);
    uVar3 = *puVar2;
    *puVar2 = *puVar2 - 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 1) {
      puVar2 = (uint *)(local_88 + 8);
      LOCK();
      uVar3 = *puVar2;
      *puVar2 = *puVar2 | 0x40000000;
      UNLOCK();
      if ((uVar3 >> 0x1e & 1) == 0) {
        bVar4 = *(byte *)(local_88 + 0xd);
        plVar6 = (longlong *)FUN_14001cc68(0x10,8);
        plVar6[1] = lVar9;
        plVar8 = DAT_14ca843c0;
        plVar7 = DAT_14ca843c8;
        if ((bVar4 & 2) == 0) {
          do {
            *plVar6 = (longlong)plVar8;
            LOCK();
            bVar12 = plVar8 != DAT_14ca843c0;
            plVar7 = plVar6;
            if (bVar12) {
              plVar8 = DAT_14ca843c0;
              plVar7 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar7;
            UNLOCK();
          } while (bVar12);
        }
        else {
          do {
            *plVar6 = (longlong)plVar7;
            LOCK();
            bVar12 = plVar7 != DAT_14ca843c8;
            plVar8 = plVar6;
            if (bVar12) {
              plVar7 = DAT_14ca843c8;
              plVar8 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar8;
            UNLOCK();
          } while (bVar12);
        }
      }
    }
  }
  *(undefined8 *)(param_1 + 0x2c0) = 0;
  local_98 = 0;
  uStack_90 = 0;
  FUN_14737307c(param_1 + 0x278);
  param_1 = param_1 + 0xe0;
  lVar9 = 0x80;
  do {
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) != 0) {
      FUN_14737bb92(param_1,0);
    }
    param_1 = param_1 + 0x10;
    lVar9 = lVar9 + -0x10;
  } while (lVar9 != 0);
  if ((local_30 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143165f02 FUN_143165f02 body=235 status=ok
// SIG undefined FUN_143165f02(void)

void FUN_143165f02(undefined8 *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  *param_1 = &PTR_FUN_14a34c020;
  lVar2 = 0x38;
  do {
    lVar1 = *(longlong *)((longlong)param_1 + lVar2);
    if (lVar1 != 0) {
      *(undefined8 *)((longlong)param_1 + lVar2) = 0;
      (**(code **)(*(longlong *)(lVar1 + 0x30) + 0x10))(lVar1 + 0x30);
    }
    lVar2 = lVar2 + 8;
  } while (lVar2 != 0x78);
  *(undefined4 *)(param_1 + 0x3a) = 0;
  if (param_1[0x39] != 0) {
    FUN_1400020a8();
  }
  FUN_1473775c8(param_1 + 0x31);
  lVar2 = 0x178;
  do {
    if (*(longlong *)((longlong)param_1 + lVar2) != 0) {
      FUN_1400020a8();
    }
    lVar2 = lVar2 + -0x10;
  } while (lVar2 != 0xf8);
  FUN_147123bf0(param_1[0x1f],*(undefined4 *)(param_1 + 0x20));
  if (param_1[0x1f] != 0) {
    FUN_1400020a8();
  }
  FUN_147123b8c(param_1 + 0x10);
  lVar2 = 0x70;
  do {
    lVar1 = *(longlong *)((longlong)param_1 + lVar2);
    if (lVar1 != 0) {
      (**(code **)(*(longlong *)(lVar1 + 0x30) + 0x10))(lVar1 + 0x30);
    }
    lVar2 = lVar2 + -8;
  } while (lVar2 != 0x30);
  *param_1 = &PTR_FUN_14a37f858;
  return;
}



// FUNCTION 143165fee FUN_143165fee body=145 status=ok
// SIG undefined FUN_143165fee(void)

void FUN_143165fee(longlong param_1,longlong param_2,undefined4 param_3)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  if (DAT_14c760da4 != 0) {
    uVar3 = 0;
    do {
      if (param_2 == 0) {
        lVar2 = *(longlong *)(param_1 + 0x38 + uVar3 * 8);
        if (lVar2 != 0) {
          *(undefined8 *)(param_1 + 0x38 + uVar3 * 8) = 0;
LAB_143166054:
          (**(code **)(*(longlong *)(lVar2 + 0x30) + 0x10))(lVar2 + 0x30);
        }
      }
      else {
        lVar1 = *(longlong *)(param_2 + 0xf8 + uVar3 * 8);
        lVar2 = *(longlong *)(param_1 + 0x38 + uVar3 * 8);
        if (lVar2 != lVar1) {
          *(longlong *)(param_1 + 0x38 + uVar3 * 8) = lVar1;
          if (lVar1 != 0) {
            (**(code **)(*(longlong *)(lVar1 + 0x30) + 8))(lVar1 + 0x30);
          }
          if (lVar2 != 0) goto LAB_143166054;
        }
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < DAT_14c760da4);
  }
  *(undefined4 *)(param_1 + 0x78) = param_3;
  return;
}



// FUNCTION 14316607f FUN_14316607f body=2297 status=ok
// SIG undefined FUN_14316607f(void)

void FUN_14316607f(longlong *param_1,longlong param_2,ulonglong param_3,uint param_4,
                  longlong param_5,uint param_6,uint param_7,int param_8)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  longlong *plVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 auStack_6f8 [32];
  uint local_6d8;
  char **local_6d0;
  uint local_6c4;
  ulonglong local_6c0;
  longlong local_6b8;
  ulonglong local_6b0;
  ulonglong local_6a8;
  longlong local_6a0;
  char **local_698;
  undefined4 local_690;
  ulonglong local_688 [3];
  char *local_670;
  ulonglong local_668;
  undefined5 uStack_660;
  undefined3 uStack_65b;
  undefined5 uStack_658;
  undefined8 uStack_653;
  undefined4 local_648;
  char **local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_6f8;
  if (param_8 != 1) {
    *(uint *)(param_2 + 0x30) = param_7;
  }
  uVar7 = *(uint *)(param_1 + 0x5c);
  uVar9 = 0x20;
  if ((uVar7 != 0) && (uVar9 = 0, uVar7 != 0)) {
    for (; (uVar7 >> uVar9 & 1) == 0; uVar9 = uVar9 + 1) {
    }
  }
  if (param_3 == 0) {
    lVar10 = param_1[0x5b];
    uVar4 = *(undefined8 *)(param_2 + 0x18 + (ulonglong)(param_8 == 1) * 8);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14ca76b78) && (FUN_144b3d300(&DAT_14ca76b78), DAT_14ca76b78 == -1)) {
      local_670 = "AutoBuildScratchTLAS";
      local_668 = CONCAT35(local_668._5_3_,0x14);
      uVar7 = FUN_14001a6c0(&local_670,1);
      DAT_14ca76b70 = (char *)(ulonglong)uVar7;
      _Init_thread_footer(&DAT_14ca76b78);
    }
    local_6d0 = &local_670;
    local_670 = DAT_14ca76b70;
    local_668 = local_668 & 0xffffffff00000000;
    local_6d8 = 1;
    FUN_1431658b8(local_688,lVar10,uVar9,uVar4);
    local_6c4 = 0;
    local_6b0 = local_688[0];
    local_6c0 = local_688[0];
  }
  else {
    local_6b0 = 0;
    local_6c4 = param_4;
    local_6c0 = param_3;
  }
  uStack_660 = 0;
  uStack_65b = 0;
  local_668 = (ulonglong)param_7;
  local_670 = (char *)(((ulonglong)*(uint *)(param_2 + 0xe8) & 0x1f) << 0x20);
  local_688[2] = 0;
  local_688[0] = 0;
  local_688[1] = 0;
  (**(code **)(**(longlong **)(*(longlong *)(param_1[0x5d] + 0x10) + 0x30) + 0x1f8))();
  uVar4 = *(undefined8 *)(param_5 + 0x88);
  lVar10 = param_1[0x33];
  if (lVar10 == 0) {
    (**(code **)(*param_1 + 8))(param_1);
    lVar10 = param_1[0x33];
  }
  FUN_1447093fc(lVar10,uVar4);
  local_6a8 = (ulonglong)uVar9;
  lVar10 = (ulonglong)(uVar9 << 4) + param_2;
  plVar13 = (longlong *)(lVar10 + 0x108);
  *(undefined4 *)(lVar10 + 0x110) = 0;
  if (*(int *)(lVar10 + 0x114) < 0) {
    FUN_14737be4a(plVar13);
  }
  local_670 = (char *)((ulonglong)local_670 & 0xffffffff00000000);
  local_648 = 0;
  local_668 = 0;
  uStack_660 = 0;
  uStack_65b = 0;
  uStack_658 = 0;
  uStack_653 = 0;
  local_6a0 = (longlong)*(int *)(param_2 + 0x100);
  local_6b8 = param_2;
  if (0 < local_6a0) {
    lVar14 = 0;
    do {
      lVar11 = *(longlong *)(*(longlong *)(local_6b8 + 0xf8) + lVar14 * 8);
      lVar15 = *(longlong *)(*(longlong *)(lVar11 + 0x90 + local_6a8 * 8) + 0x88);
      if (*(longlong *)(lVar15 + 0xe0) == 0) {
        if ((*(byte *)(lVar15 + 0xdf) & 2) != 0) {
          lVar5 = *(longlong *)(lVar15 + 0x30);
          if (lVar5 == 0) {
            plVar8 = (longlong *)(lVar15 + 0x38);
          }
          else {
            plVar8 = (longlong *)(lVar5 + 0x70);
            if (*(char *)(lVar5 + 0x81) == '\0') goto LAB_143166302;
          }
          lVar5 = *plVar8;
          if (((lVar5 != 0) && (DAT_14c760b88 != '\0')) && (*(longlong *)(lVar5 + 8) != 0)) {
            local_688[0] = local_688[0] & 0xffffffffffffff00;
            FUN_14737774a(&local_670,lVar5,local_688);
            if ((char)local_688[0] == '\0') goto LAB_143166297;
          }
        }
      }
      else {
LAB_143166297:
        iVar2 = *(int *)(lVar10 + 0x110);
        *(uint *)(lVar10 + 0x110) = iVar2 + 1U;
        if (*(uint *)(lVar10 + 0x114) < iVar2 + 1U) {
          FUN_147377bc8(plVar13,iVar2);
        }
        *(longlong *)(*plVar13 + (longlong)iVar2 * 8) = lVar15;
      }
LAB_143166302:
      if (*(longlong *)(lVar11 + 0x28) != 0) {
        uVar7 = *(uint *)(param_1 + 0x5c);
        if (uVar7 == 0) {
          uVar9 = 0x20;
        }
        else {
          uVar9 = 0;
          if (uVar7 != 0) {
            for (; (uVar7 >> uVar9 & 1) == 0; uVar9 = uVar9 + 1) {
            }
          }
        }
        lVar15 = *(longlong *)
                  (*(longlong *)(*(longlong *)(lVar11 + 0x28) + 0xf8 + (ulonglong)uVar9 * 8) + 0x88)
        ;
        if (*(longlong *)(lVar15 + 0xe0) == 0) {
          if ((*(byte *)(lVar15 + 0xdf) & 2) != 0) {
            lVar5 = *(longlong *)(lVar15 + 0x30);
            if (lVar5 == 0) {
              plVar8 = (longlong *)(lVar15 + 0x38);
            }
            else {
              plVar8 = (longlong *)(lVar5 + 0x70);
              if (*(char *)(lVar5 + 0x81) == '\0') goto LAB_1431663a9;
            }
            lVar5 = *plVar8;
            if (((lVar5 != 0) && (DAT_14c760b88 != '\0')) && (*(longlong *)(lVar5 + 8) != 0)) {
              local_688[0] = local_688[0] & 0xffffffffffffff00;
              FUN_14737774a(&local_670,lVar5,local_688);
              if ((char)local_688[0] == '\0') goto LAB_14316633e;
            }
          }
        }
        else {
LAB_14316633e:
          iVar2 = *(int *)(lVar10 + 0x110);
          *(uint *)(lVar10 + 0x110) = iVar2 + 1U;
          if (*(uint *)(lVar10 + 0x114) < iVar2 + 1U) {
            FUN_147377bc8(plVar13,iVar2);
          }
          *(longlong *)(*plVar13 + (longlong)iVar2 * 8) = lVar15;
        }
      }
LAB_1431663a9:
      iVar2 = *(int *)(lVar11 + 0x48);
      if ((longlong)iVar2 != 0) {
        lVar11 = *(longlong *)(lVar11 + 0x40);
        lVar15 = 0;
        do {
          lVar5 = *(longlong *)(lVar11 + lVar15);
          if (lVar5 != 0) {
            uVar7 = *(uint *)(param_1 + 0x5c);
            if (uVar7 == 0) {
              uVar9 = 0x20;
            }
            else {
              uVar9 = 0;
              if (uVar7 != 0) {
                for (; (uVar7 >> uVar9 & 1) == 0; uVar9 = uVar9 + 1) {
                }
              }
            }
            lVar5 = *(longlong *)(*(longlong *)(lVar5 + 0xf8 + (ulonglong)uVar9 * 8) + 0x88);
            if (*(longlong *)(lVar5 + 0xe0) == 0) {
              if ((*(byte *)(lVar5 + 0xdf) & 2) != 0) {
                lVar6 = *(longlong *)(lVar5 + 0x30);
                if (lVar6 == 0) {
                  plVar8 = (longlong *)(lVar5 + 0x38);
                }
                else {
                  plVar8 = (longlong *)(lVar6 + 0x70);
                  if (*(char *)(lVar6 + 0x81) == '\0') goto LAB_143166463;
                }
                lVar6 = *plVar8;
                if (((lVar6 != 0) && (DAT_14c760b88 != '\0')) && (*(longlong *)(lVar6 + 8) != 0)) {
                  local_688[0] = local_688[0] & 0xffffffffffffff00;
                  FUN_14737774a(&local_670,lVar6,local_688);
                  if ((char)local_688[0] == '\0') goto LAB_143166402;
                }
              }
            }
            else {
LAB_143166402:
              iVar3 = *(int *)(lVar10 + 0x110);
              *(uint *)(lVar10 + 0x110) = iVar3 + 1U;
              if (*(uint *)(lVar10 + 0x114) < iVar3 + 1U) {
                FUN_147377bc8(plVar13,iVar3);
              }
              *(longlong *)(*plVar13 + (longlong)iVar3 * 8) = lVar5;
            }
          }
LAB_143166463:
          lVar15 = lVar15 + 0x28;
        } while ((longlong)iVar2 * 0x28 != lVar15);
      }
      lVar14 = lVar14 + 1;
    } while (lVar14 != local_6a0);
  }
  uVar12 = local_6a8;
  lVar10 = local_6b8;
  FUN_147377b94(&local_670);
  iVar2 = *(int *)(lVar10 + 0x100);
  if (0 < (longlong)iVar2) {
    lVar14 = 0;
    do {
      uVar4 = *(undefined8 *)
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar10 + 0xf8) + lVar14 * 8) + 0x90 + uVar12 * 8) +
               0x88);
      lVar11 = param_1[0x33];
      if (lVar11 == 0) {
        (**(code **)(*param_1 + 8))(param_1);
        lVar11 = param_1[0x33];
      }
      FUN_1447093fc(lVar11,uVar4);
      lVar14 = lVar14 + 1;
    } while (iVar2 != lVar14);
  }
  uVar4 = *(undefined8 *)(*(longlong *)(lVar10 + 0x38 + uVar12 * 8) + 0x88);
  lVar14 = param_1[0x33];
  if (lVar14 == 0) {
    (**(code **)(*param_1 + 8))(param_1);
    lVar14 = param_1[0x33];
  }
  FUN_1447093fc(lVar14,uVar4);
  uVar4 = *(undefined8 *)(local_6c0 + 0x88);
  lVar14 = param_1[0x33];
  if (lVar14 == 0) {
    (**(code **)(*param_1 + 8))(param_1);
    lVar14 = param_1[0x33];
  }
  FUN_1447093fc(lVar14,uVar4);
  local_6d8 = 0;
  FUN_144706208(param_1,*(undefined8 *)(param_5 + 0x88),0x7fffffff,0x40);
  if (((DAT_14ca84f10 == '\x01') && (DAT_14ca76b48 != 0)) &&
     ((*(uint *)(&DAT_14ca814cc + (ulonglong)DAT_14ca85550 * 0x3c) & 0x300) != 0)) {
    plVar13 = param_1 + 0x39;
    if (param_1 == (longlong *)0x0) {
      plVar13 = (longlong *)0x0;
    }
    FUN_140048e76(&local_670,plVar13);
    local_6d0 = (char **)CONCAT44(local_6d0._4_4_,DAT_14ca84f0c);
    local_6d8 = param_6;
    FUN_1432024ba(&local_670,*(int *)(lVar10 + 0xd8) * *(int *)(lVar10 + 0xd4),param_7,param_5);
    FUN_140048db6(&local_670);
  }
  plVar13 = param_1 + 0x31;
  iVar2 = (int)param_1[0x32];
  *(uint *)(param_1 + 0x32) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0x194) < iVar2 + 1U) {
    FUN_1447158f0(plVar13,iVar2);
  }
  lVar10 = *plVar13;
  lVar14 = (longlong)iVar2 * 0x20;
  puVar1 = (undefined8 *)(lVar10 + 0x10 + lVar14);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar10 + lVar14) = 2;
  *(undefined8 *)(lVar10 + 8 + lVar14) = 0;
  if ((DAT_14c760b78 == 0) && ((int)param_1[0x32] != 0)) {
    lVar10 = param_1[0x33];
    if (lVar10 == 0) {
      (**(code **)(*param_1 + 8))(param_1);
      lVar10 = param_1[0x33];
    }
    FUN_144ad5b2c(plVar13,lVar10,param_1 + 7);
  }
  FUN_14492aa36(param_1);
  lVar14 = local_6b8;
  local_70 = (char **)0x0;
  local_68 = 0x2000000000;
  uVar12 = (ulonglong)local_6c4;
  lVar10 = *(longlong *)(local_6c0 + 0xd0);
  lVar11 = (ulonglong)*(uint *)(local_6b8 + 0x78) +
           *(longlong *)(*(longlong *)(local_6b8 + 0x38 + local_6a8 * 8) + 0xd0);
  plVar8 = (longlong *)FUN_147373cb4(&local_670);
  plVar8[1] = 0;
  plVar8[2] = 0;
  plVar8[3] = 0;
  *(uint *)(plVar8 + 2) = param_7;
  plVar8[3] = (ulonglong)param_6 + *(longlong *)(param_5 + 0xd0);
  uVar9 = *(uint *)(lVar14 + 0xe8) & 0x1f;
  uVar7 = uVar9 + 0x20;
  if (param_8 != 1) {
    uVar7 = uVar9;
  }
  *(uint *)((longlong)plVar8 + 0xc) = uVar7;
  *plVar8 = lVar11;
  plVar8[5] = uVar12 + lVar10;
  if (param_8 != 1) {
    lVar11 = 0;
  }
  plVar8[4] = lVar11;
  local_698 = local_70;
  if (local_70 == (char **)0x0) {
    local_698 = &local_670;
  }
  local_690 = (undefined4)local_68;
  (**(code **)(*param_1 + 0x50))(param_1);
  iVar2 = (int)param_1[0x32];
  *(uint *)(param_1 + 0x32) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0x194) < iVar2 + 1U) {
    FUN_1447158f0(plVar13,iVar2);
  }
  lVar10 = *plVar13;
  lVar11 = (longlong)iVar2 * 0x20;
  puVar1 = (undefined8 *)(lVar10 + 0x10 + lVar11);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar10 + lVar11) = 2;
  *(undefined8 *)(lVar10 + 8 + lVar11) = 0;
  if ((DAT_14c760b78 == 0) && ((int)param_1[0x32] != 0)) {
    lVar10 = param_1[0x33];
    if (lVar10 == 0) {
      (**(code **)(*param_1 + 8))(param_1);
      lVar10 = param_1[0x33];
    }
    FUN_144ad5b2c(plVar13,lVar10,param_1 + 7);
    lVar14 = local_6b8;
  }
  *(undefined1 *)(lVar14 + 0x1d8) = 1;
  if (local_70 != (char **)0x0) {
    FUN_1400020a8();
  }
  if (local_6b0 != 0) {
    (**(code **)(*(longlong *)(local_6b0 + 0x30) + 0x10))(local_6b0 + 0x30);
  }
  if ((local_60 ^ (ulonglong)auStack_6f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14316697a FUN_14316697a body=2149 status=ok
// SIG undefined FUN_14316697a(void)

void FUN_14316697a(longlong param_1,longlong *param_2,longlong *param_3)

{
  uint *puVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  DWORD DVar7;
  uint uVar8;
  DWORD DVar9;
  DWORD DVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  LPVOID pvVar14;
  ulonglong uVar15;
  undefined1 *puVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  ulonglong *puVar20;
  longlong *plVar21;
  longlong lVar22;
  longlong lVar23;
  longlong *plVar24;
  longlong lVar25;
  ulonglong uVar26;
  longlong lVar27;
  ulonglong uVar28;
  bool bVar29;
  undefined1 auStack_a28 [32];
  undefined1 *local_a08;
  ulonglong *local_a00;
  longlong *local_9f0;
  ulonglong *local_9e8;
  longlong *local_9e0;
  longlong *local_9d8;
  ulonglong local_9d0;
  longlong local_9c8;
  longlong local_9c0;
  longlong local_9b8;
  undefined1 *local_9b0;
  undefined4 local_9a8;
  undefined8 *local_9a0;
  undefined8 local_998;
  longlong local_990;
  char local_988;
  undefined8 local_980;
  ulonglong local_978;
  undefined4 local_970;
  undefined1 local_670 [1536];
  undefined1 *local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a28;
  plVar13 = (longlong *)(param_1 + -0x1c8);
  local_9f0 = param_3;
  local_9e0 = plVar13;
  local_9d8 = param_2;
  if ((longlong)(int)param_2[1] != 0) {
    plVar24 = (longlong *)*param_2;
    plVar21 = plVar24 + (longlong)(int)param_2[1] * 4;
    do {
      uVar8 = *(uint *)(param_1 + 0x118);
      iVar19 = 0x20;
      if ((uVar8 != 0) && (iVar19 = 0, uVar8 != 0)) {
        for (; (uVar8 >> iVar19 & 1) == 0; iVar19 = iVar19 + 1) {
        }
      }
      lVar22 = *plVar24;
      FUN_147372c08(lVar22,iVar19);
      if (0 < (int)plVar24[3]) {
        lVar25 = 0;
        do {
          lVar5 = lVar25 * 0x28;
          lVar27 = *(longlong *)(plVar24[2] + lVar5);
          lVar23 = *(longlong *)(*(longlong *)(lVar22 + 0x40) + lVar5);
          if (lVar23 != lVar27) {
            *(longlong *)(*(longlong *)(lVar22 + 0x40) + lVar5) = lVar27;
            if (lVar27 != 0) {
              LOCK();
              *(int *)(lVar27 + 8) = *(int *)(lVar27 + 8) + 1;
              UNLOCK();
            }
            if (lVar23 != 0) {
              LOCK();
              puVar1 = (uint *)(lVar23 + 8);
              uVar8 = *puVar1;
              *puVar1 = *puVar1 - 1;
              UNLOCK();
              if ((uVar8 & 0x3fffffff) == 1) {
                puVar1 = (uint *)(lVar23 + 8);
                LOCK();
                uVar8 = *puVar1;
                *puVar1 = *puVar1 | 0x40000000;
                UNLOCK();
                if ((uVar8 >> 0x1e & 1) == 0) {
                  bVar3 = *(byte *)(lVar23 + 0xd);
                  plVar11 = (longlong *)FUN_14001cc68(0x10,8);
                  plVar11[1] = lVar23;
                  plVar13 = DAT_14ca843c0;
                  plVar12 = DAT_14ca843c8;
                  if ((bVar3 & 2) == 0) {
                    do {
                      *plVar11 = (longlong)plVar13;
                      LOCK();
                      bVar29 = plVar13 != DAT_14ca843c0;
                      plVar12 = plVar11;
                      if (bVar29) {
                        plVar13 = DAT_14ca843c0;
                        plVar12 = DAT_14ca843c0;
                      }
                      DAT_14ca843c0 = plVar12;
                      UNLOCK();
                    } while (bVar29);
                  }
                  else {
                    do {
                      *plVar11 = (longlong)plVar12;
                      LOCK();
                      bVar29 = plVar12 != DAT_14ca843c8;
                      plVar13 = plVar11;
                      if (bVar29) {
                        plVar12 = DAT_14ca843c8;
                        plVar13 = DAT_14ca843c8;
                      }
                      DAT_14ca843c8 = plVar13;
                      UNLOCK();
                    } while (bVar29);
                  }
                }
              }
            }
          }
          *(undefined4 *)(*(longlong *)(lVar22 + 0x40) + 8 + lVar5) =
               *(undefined4 *)(plVar24[2] + 8 + lVar5);
          *(undefined4 *)(*(longlong *)(lVar22 + 0x40) + 0x10 + lVar5) =
               *(undefined4 *)(plVar24[2] + 0x10 + lVar5);
          *(undefined4 *)(*(longlong *)(lVar22 + 0x40) + 0xc + lVar5) =
               *(undefined4 *)(plVar24[2] + 0xc + lVar5);
          lVar25 = lVar25 + 1;
        } while (lVar25 < (int)plVar24[3]);
      }
      param_2 = local_9d8;
      plVar13 = local_9e0;
      plVar24 = plVar24 + 4;
    } while (plVar24 != plVar21);
    lVar22 = local_9d8[1];
    if ((longlong)(int)lVar22 != 0) {
      lVar25 = *local_9d8;
      lVar27 = 0;
      do {
        FUN_14737375a(*(undefined8 *)(lVar25 + lVar27),plVar13);
        lVar27 = lVar27 + 0x20;
      } while ((longlong)(int)lVar22 * 0x20 != lVar27);
    }
  }
  plVar24 = local_9f0;
  if (*local_9f0 == 0) {
    lVar22 = 0;
  }
  else {
    uVar8 = *(uint *)(param_1 + 0x118);
    if (uVar8 == 0) {
      uVar17 = 0x20;
    }
    else {
      uVar17 = 0;
      if (uVar8 != 0) {
        for (; (uVar8 >> uVar17 & 1) == 0; uVar17 = uVar17 + 1) {
        }
      }
    }
    lVar22 = *(longlong *)(*local_9f0 + 0xf8 + (ulonglong)uVar17 * 8);
  }
  if ((*(byte *)(*(longlong *)(lVar22 + 0x88) + 0xdf) & 1) != 0) {
    local_a08 = (undefined1 *)((ulonglong)local_a08 & 0xffffffff00000000);
    FUN_144706208(plVar13,*(longlong *)(lVar22 + 0x88),0x7fffffff,8);
  }
  FUN_14492aa36(plVar13);
  uVar8 = *(uint *)(param_1 + 0x118);
  if (uVar8 == 0) {
    uVar17 = 0x20;
  }
  else {
    uVar17 = 0;
    if (uVar8 != 0) {
      for (; (uVar8 >> uVar17 & 1) == 0; uVar17 = uVar17 + 1) {
      }
    }
  }
  local_70 = (undefined1 *)0x0;
  local_68 = 0x2000000000;
  uVar8 = *(uint *)(param_2 + 1);
  if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar8);
  }
  if (0x20 < uVar8) {
    FUN_14737be7a(local_670);
  }
  lVar22 = *plVar24;
  uVar26 = (ulonglong)uVar17;
  if (lVar22 == 0) {
    puVar20 = (ulonglong *)0x0;
  }
  else {
    puVar20 = *(ulonglong **)(lVar22 + 0xf8 + uVar26 * 8);
  }
  uVar28 = (ulonglong)DAT_14ca84f00;
  local_9f0 = (longlong *)CONCAT44(local_9f0._4_4_,(int)plVar24[1]);
  uVar4 = *(undefined8 *)((longlong)puVar20 + 0x88);
  lVar22 = *(longlong *)(param_1 + -0x30);
  if (lVar22 == 0) {
    (**(code **)(*(longlong *)(param_1 + -0x1c8) + 8))(local_9e0);
    lVar22 = *(longlong *)(param_1 + -0x30);
  }
  FUN_1447093fc(lVar22,uVar4);
  DVar9 = DAT_14c7585d0;
  if (DAT_14c7585d0 == 0xffffffff) {
    DVar9 = TlsAlloc();
    DVar10 = 0xffffffff;
    LOCK();
    bVar29 = DAT_14c7585d0 != 0xffffffff;
    DVar7 = DVar9;
    if (bVar29) {
      DVar10 = DAT_14c7585d0;
      DVar7 = DAT_14c7585d0;
    }
    DAT_14c7585d0 = DVar7;
    UNLOCK();
    param_2 = local_9d8;
    if (bVar29) {
      TlsFree(DVar9);
      param_2 = local_9d8;
      DVar9 = DVar10;
    }
  }
  pvVar14 = TlsGetValue(DVar9);
  if (pvVar14 == (LPVOID)0x0) {
    pvVar14 = (LPVOID)FUN_140036a08(&local_978);
    FUN_140fddf04(pvVar14);
    TlsSetValue(DVar9,pvVar14);
  }
  local_9a0 = (undefined8 *)((longlong)pvVar14 + 0x10);
  local_998 = *(undefined8 *)((longlong)pvVar14 + 0x10);
  local_990 = *(longlong *)((longlong)pvVar14 + 0x20);
  local_988 = '\0';
  local_980 = *(undefined8 *)((longlong)pvVar14 + 0x28);
  *(undefined8 ***)((longlong)pvVar14 + 0x28) = &local_9a0;
  *(int *)((longlong)pvVar14 + 0x30) = *(int *)((longlong)pvVar14 + 0x30) + 1;
  if (0 < (int)param_2[1]) {
    local_9c0 = uVar28 + 0xffffffff;
    local_9b8 = -uVar28;
    lVar22 = 0;
    do {
      lVar25 = *param_2;
      lVar27 = *(longlong *)(lVar25 + lVar22 * 0x20);
      uVar8 = *(uint *)(param_1 + 0x118);
      if (uVar8 != 0) {
        uVar18 = 0;
        if (uVar8 != 0) {
          for (; (uVar8 >> uVar18 & 1) == 0; uVar18 = uVar18 + 1) {
          }
        }
        do {
          *(undefined1 *)(lVar27 + 0x88 + (ulonglong)uVar18) = 1;
          bVar3 = (byte)uVar18 & 0x1f;
          uVar8 = (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3) & uVar8;
          if (uVar8 == 0) {
            uVar18 = 0x20;
          }
          else {
            uVar18 = 0;
            if (uVar8 != 0) {
              for (; (uVar8 >> uVar18 & 1) == 0; uVar18 = uVar18 + 1) {
              }
            }
          }
        } while (uVar8 != 0);
      }
      FUN_147372c08(lVar27,uVar17);
      FUN_1473728f0(lVar27,uVar17);
      FUN_147372e06(lVar27,uVar17);
      if (*(char *)(lVar27 + 0x88 + uVar26) == '\x01') {
        lVar25 = lVar25 + lVar22 * 0x20;
        local_9c8 = ((ulonglong)local_9f0 & 0xffffffff) + *(longlong *)((longlong)puVar20 + 0xd0);
        local_9f0 = (longlong *)
                    CONCAT44(local_9f0._4_4_,
                             (uint)local_9f0 + (int)local_9c0 +
                             *(int *)(lVar27 + 0x18 + (ulonglong)(*(int *)(lVar25 + 8) == 1) * 8));
        local_9d0 = (ulonglong)*(uint *)(lVar27 + 0x2b8);
        DVar9 = DAT_14c7585d0;
        if (DAT_14c7585d0 == 0xffffffff) {
          DVar9 = TlsAlloc();
          DVar10 = 0xffffffff;
          LOCK();
          bVar29 = DAT_14c7585d0 != 0xffffffff;
          DVar7 = DVar9;
          if (bVar29) {
            DVar10 = DAT_14c7585d0;
            DVar7 = DAT_14c7585d0;
          }
          DAT_14c7585d0 = DVar7;
          UNLOCK();
          if (bVar29) {
            TlsFree(DVar9);
            DVar9 = DVar10;
          }
        }
        local_9e8 = (ulonglong *)CONCAT44(local_9e8._4_4_,DVar9);
        pvVar14 = TlsGetValue(DVar9);
        if (pvVar14 == (LPVOID)0x0) {
          pvVar14 = (LPVOID)FUN_140036a08(&local_978);
          FUN_140fddf04(pvVar14);
          TlsSetValue((DWORD)local_9e8,pvVar14);
        }
        local_9e8 = (ulonglong *)((longlong)pvVar14 + 0x10);
        lVar23 = local_9d0 * 0x38;
        uVar15 = *(longlong *)((longlong)pvVar14 + 0x10) + 7U & 0xfffffffffffffff8;
        uVar28 = uVar15 + lVar23;
        if (*(ulonglong *)((longlong)pvVar14 + 0x18) < uVar28) {
          FUN_140023dd8(local_9e8,(int)lVar23 + 8);
          uVar15 = *local_9e8 + 7 & 0xfffffffffffffff8;
          uVar28 = lVar23 + uVar15;
        }
        uVar6 = local_68;
        *local_9e8 = uVar28;
        local_970 = (undefined4)local_9d0;
        lVar23 = (longlong)(int)local_68;
        uVar8 = (int)local_68 + 1;
        local_68 = CONCAT44(local_68._4_4_,uVar8);
        local_9e8 = puVar20;
        local_978 = uVar15;
        if (local_68._4_4_ < uVar8) {
          FUN_14737bf74(local_670,uVar6 & 0xffffffff);
        }
        plVar13 = local_9e0;
        local_9f0 = (longlong *)CONCAT44(local_9f0._4_4_,(uint)local_9f0 & (uint)local_9b8);
        puVar16 = local_70;
        if (local_70 == (undefined1 *)0x0) {
          puVar16 = local_670;
        }
        lVar23 = lVar23 * 0x30;
        local_a08 = puVar16 + lVar23;
        *(undefined8 *)(puVar16 + lVar23 + 0x20) = 0;
        *(undefined8 *)((longlong)(puVar16 + lVar23 + 0x20) + 8) = 0;
        *(undefined8 *)(puVar16 + lVar23 + 0x10) = 0;
        *(undefined8 *)((longlong)(puVar16 + lVar23 + 0x10) + 8) = 0;
        *(undefined8 *)(puVar16 + lVar23) = 0;
        *(undefined8 *)((longlong)(puVar16 + lVar23) + 8) = 0;
        local_a00 = &local_978;
        FUN_1473739ae(lVar27,local_9e0,*(undefined4 *)(lVar25 + 8),local_9c8);
        FUN_147373848(lVar27,plVar13);
        puVar20 = local_9e8;
      }
      lVar22 = lVar22 + 1;
      param_2 = local_9d8;
    } while (lVar22 < (int)local_9d8[1]);
  }
  plVar13 = local_9e0;
  if (((DAT_14ca84f10 == '\x01') && (DAT_14ca76b48 != 0)) &&
     ((*(uint *)(&DAT_14ca814cc + (ulonglong)DAT_14ca85550 * 0x3c) & 0x300) != 0)) {
    lVar22 = param_1;
    if (local_9e0 == (longlong *)0x0) {
      lVar22 = 0;
    }
    FUN_140048e76(&local_978,lVar22);
    if ((longlong)(int)param_2[1] != 0) {
      lVar22 = *param_2;
      lVar25 = (longlong)(int)param_2[1] << 5;
      do {
        FUN_143201cbe(&local_978,lVar22);
        lVar22 = lVar22 + 0x20;
        lVar25 = lVar25 + -0x20;
      } while (lVar25 != 0);
    }
    FUN_140048db6(&local_978);
  }
  local_9b0 = local_70;
  if (local_70 == (undefined1 *)0x0) {
    local_9b0 = local_670;
  }
  local_9a8 = (int)local_68;
  (**(code **)(*plVar13 + 0x50))(plVar13);
  if ((longlong)(int)param_2[1] != 0) {
    plVar13 = (longlong *)*param_2;
    plVar24 = plVar13 + (longlong)(int)param_2[1] * 4;
    do {
      lVar22 = *plVar13;
      if (*(char *)(lVar22 + 0x88 + uVar26) == '\x01') {
        uVar8 = FUN_143162371(lVar22 + 0x28);
        if ((uVar8 & 7) == 6) {
          FUN_147371ecc(*(undefined8 *)(*(longlong *)(param_1 + 0x120) + 0x14f0),lVar22);
          *(undefined1 *)(lVar22 + 0xd8 + uVar26) = 1;
        }
        uVar8 = *(uint *)(param_1 + 0x118);
        if (uVar8 != 0) {
          uVar17 = 0;
          if (uVar8 != 0) {
            for (; (uVar8 >> uVar17 & 1) == 0; uVar17 = uVar17 + 1) {
            }
          }
          do {
            *(undefined1 *)(lVar22 + 0x88 + (ulonglong)uVar17) = 0;
            bVar3 = (byte)uVar17 & 0x1f;
            uVar8 = (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3) & uVar8;
            if (uVar8 == 0) {
              uVar17 = 0x20;
            }
            else {
              uVar17 = 0;
              if (uVar8 != 0) {
                for (; (uVar8 >> uVar17 & 1) == 0; uVar17 = uVar17 + 1) {
                }
              }
            }
          } while (uVar8 != 0);
        }
      }
      plVar13 = plVar13 + 4;
    } while (plVar13 != plVar24);
  }
  plVar13 = (longlong *)(param_1 + -0x40);
  iVar19 = *(int *)(param_1 + -0x38);
  *(uint *)(param_1 + -0x38) = iVar19 + 1U;
  if (*(uint *)(param_1 + -0x34) < iVar19 + 1U) {
    FUN_1447158f0(plVar13,iVar19);
  }
  lVar22 = *plVar13;
  lVar25 = (longlong)iVar19 * 0x20;
  puVar2 = (undefined8 *)(lVar22 + 0x10 + lVar25);
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined8 *)(lVar22 + lVar25) = 2;
  *(undefined8 *)(lVar22 + 8 + lVar25) = 0;
  if ((DAT_14c760b78 == 0) && (*(int *)(param_1 + -0x38) != 0)) {
    lVar22 = *(longlong *)(param_1 + -0x30);
    if (lVar22 == 0) {
      (**(code **)(*(longlong *)(param_1 + -0x1c8) + 8))(local_9e0);
      lVar22 = *(longlong *)(param_1 + -0x30);
    }
    FUN_144ad5b2c(plVar13,lVar22,param_1 + -400);
  }
  if (local_988 == '\0') {
    local_988 = '\x01';
    *(int *)(local_9a0 + 4) = *(int *)(local_9a0 + 4) + -1;
    if (local_990 != local_9a0[2]) {
      FUN_14004673c();
    }
    *local_9a0 = local_998;
    local_9a0[3] = local_980;
  }
  if (local_70 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_a28) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1431671e0 FUN_1431671e0 body=1002 status=ok
// SIG undefined FUN_1431671e0(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_1431671e0(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_128 [32];
  undefined4 local_108;
  undefined4 local_100;
  undefined1 local_f8;
  int *local_f0;
  undefined8 local_e8;
  wchar_t *local_e0;
  undefined8 *local_d8;
  undefined8 *local_d0;
  longlong local_c8;
  uint local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  int local_9c [3];
  undefined8 local_90;
  ulonglong local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_128;
  lVar7 = 1;
  local_c8 = param_2;
  do {
    lVar6 = lVar7 * 0x100;
    lVar5 = (longlong)*(int *)(param_1 + 0xe8 + lVar6);
    if (lVar5 != 0) {
      lVar2 = *(longlong *)(param_1 + 0xe0 + lVar6);
      lVar4 = 0;
      do {
        FUN_147377c4e(param_1,*(undefined8 *)(lVar2 + lVar4),0);
        lVar4 = lVar4 + 8;
      } while (lVar5 * 8 != lVar4);
    }
    lVar5 = param_1 + 0x80 + lVar6;
    iVar1 = *(int *)(lVar5 + 0xe8);
    if ((longlong)iVar1 != 0) {
      lVar2 = *(longlong *)(lVar5 + 0xe0);
      lVar4 = 0;
      do {
        FUN_147377d64(param_1,*(undefined8 *)(lVar2 + lVar4));
        lVar4 = lVar4 + 8;
      } while ((longlong)iVar1 * 8 != lVar4);
    }
    iVar1 = *(int *)(lVar5 + 0xf8);
    if ((longlong)iVar1 != 0) {
      lVar2 = *(longlong *)(lVar5 + 0xf0);
      lVar4 = 0;
      do {
        FUN_147377e06(param_1,*(undefined8 *)(lVar2 + lVar4));
        lVar4 = lVar4 + 8;
      } while ((longlong)iVar1 * 8 != lVar4);
    }
    FUN_1473773d0(lVar5 + 0x70);
    *(undefined4 *)(lVar5 + 0x98) = 0;
    *(undefined8 *)(lVar5 + 0x70) = 0;
    *(undefined8 *)(lVar5 + 0x78) = 0;
    *(undefined8 *)(lVar5 + 0x80) = 0;
    *(undefined8 *)(lVar5 + 0x88) = 0;
    *(undefined8 *)(lVar5 + 0x8d) = 0;
    FUN_147377396(*(undefined8 *)(lVar5 + 0xa0),*(undefined4 *)(lVar5 + 0xa8));
    *(undefined4 *)(lVar5 + 0xa8) = 0;
    if (*(int *)(lVar5 + 0xac) != 0) {
      FUN_14737887e(lVar5 + 0xa0);
    }
    FUN_1473773d0(lVar5 + 0x30);
    *(undefined4 *)(lVar5 + 0x58) = 0;
    *(undefined8 *)(lVar5 + 0x30) = 0;
    *(undefined8 *)(lVar5 + 0x38) = 0;
    *(undefined8 *)(lVar5 + 0x40) = 0;
    *(undefined8 *)(lVar5 + 0x48) = 0;
    *(undefined8 *)(lVar5 + 0x4d) = 0;
    FUN_147377404(*(undefined8 *)(lVar5 + 0x60),*(undefined4 *)(lVar5 + 0x68));
    *(undefined4 *)(lVar5 + 0x68) = 0;
    if (*(int *)(lVar5 + 0x6c) != 0) {
      FUN_1473788ae(param_1 + 0x80 + lVar6 + 0x60);
    }
    *(undefined4 *)(lVar5 + 0xe8) = 0;
    if (*(int *)(lVar5 + 0xec) != 0) {
      FUN_1473788de(lVar5 + 0xe0,0);
    }
    *(undefined4 *)(lVar5 + 0xf8) = 0;
    if (*(int *)(lVar5 + 0xfc) != 0) {
      FUN_14737893e(lVar5 + 0xf0,0);
    }
    FUN_147377362(lVar5 + 0xb0);
    lVar6 = local_c8;
    *(undefined4 *)(lVar5 + 0xd8) = 0;
    lVar7 = lVar7 + 1;
    *(undefined8 *)(lVar5 + 0xb0) = 0;
    *(undefined8 *)(lVar5 + 0xb8) = 0;
    *(undefined8 *)(lVar5 + 0xc0) = 0;
    *(undefined8 *)(lVar5 + 200) = 0;
    *(undefined8 *)(lVar5 + 0xcd) = 0;
  } while (lVar7 != 5);
  lVar7 = *(longlong *)(local_c8 + 0x2e8);
  uVar3 = *(undefined8 *)(lVar7 + 0x10);
  local_c0 = *(uint *)(param_1 + 0x38);
  if ((int)local_c0 < 0) {
    FUN_140033559("Runtime\\Core\\Public\\Containers/DynamicRHIResourceArray.h",0x47,
                  L"Resource data size too large for uint32, will overflow. Calculate with larger data type or use fewer elements. sizeof(ElementType): %d"
                  ,1);
    local_c0 = 0;
  }
  local_88 = (ulonglong)local_c0;
  local_9c[1] = 1;
  local_90 = 0x40;
  local_80 = 0x1000100000001;
  local_78 = 0;
  uStack_74 = 1;
  uStack_70 = 0;
  uStack_6c = 1;
  local_68 = 0;
  local_9c[0] = 1 << (*(byte *)(lVar7 + 8) & 0x1f);
  local_f0 = local_9c;
  local_d0 = &local_a8;
  local_a8 = 0;
  local_d8 = &local_b0;
  local_b0 = 0;
  uStack_bc = 0;
  uStack_b8 = 1;
  local_e0 = L"Shader binding table";
  local_e8 = 0;
  local_f8 = 1;
  local_100 = 0x400;
  local_108 = 2;
  lVar5 = FUN_1401297de(uVar3,local_9c + 1,0x40);
  lVar7 = *(longlong *)(param_1 + 0x50);
  if (lVar7 != lVar5) {
    *(longlong *)(param_1 + 0x50) = lVar5;
    if (lVar5 != 0) {
      (**(code **)(*(longlong *)(lVar5 + 0x30) + 8))(lVar5 + 0x30);
    }
    if (lVar7 != 0) {
      (**(code **)(*(longlong *)(lVar7 + 0x30) + 0x10))(lVar7 + 0x30);
    }
  }
  FUN_14315b95e(*(undefined8 *)(param_1 + 0x50),&local_c0,param_1 + 0x28);
  iVar1 = *(int *)(lVar6 + 0x20);
  *(uint *)(lVar6 + 0x20) = iVar1 + 1U;
  if (*(uint *)(lVar6 + 0x24) < iVar1 + 1U) {
    FUN_14476c1d2(lVar6 + 0x18,iVar1);
  }
  *(ulonglong *)(*(longlong *)(lVar6 + 0x18) + (longlong)iVar1 * 8) = CONCAT44(uStack_bc,local_c0);
  local_108 = 0;
  FUN_144706208(lVar6,*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x88),0x400,0x40);
  *(undefined1 *)(param_1 + 0x48) = 0;
  if ((local_60 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


