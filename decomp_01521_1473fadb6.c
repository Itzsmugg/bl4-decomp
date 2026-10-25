// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1473fadb6 FUN_1473fadb6 body=1016 status=ok
// SIG undefined FUN_1473fadb6(void)

void FUN_1473fadb6(longlong *param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  byte bVar4;
  undefined4 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  HGLRC pHVar8;
  longlong lVar9;
  undefined8 *puVar10;
  int iVar11;
  uint uVar12;
  int *piVar13;
  undefined8 *puVar14;
  uint uVar15;
  undefined1 auStack_a8 [32];
  uint *local_88;
  undefined8 local_80;
  undefined8 local_78;
  int local_70;
  int local_6c;
  ulonglong local_68;
  int local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  uint local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_50 = param_2;
  local_4c = param_3;
  lVar6 = (**(code **)(*param_1 + 8))();
  local_68 = (ulonglong)*(byte *)(lVar6 + 0x33);
  uVar7 = (ulonglong)((uint)*(byte *)(lVar6 + 0x33) * 0x30);
  uVar1 = *(uint *)((longlong)&DAT_14c87341c + uVar7);
  uVar2 = *(uint *)((longlong)&DAT_14c873420 + uVar7);
  local_70 = *(int *)((longlong)&DAT_14c873428 + uVar7);
  lVar6 = (**(code **)(*param_1 + 8))(param_1);
  uVar12 = *(uint *)(lVar6 + 0x24) >> ((byte)param_2 & 0x1f);
  if (uVar12 < uVar1) {
    uVar12 = uVar1;
  }
  lVar6 = (**(code **)(*param_1 + 8))(param_1);
  uVar15 = *(uint *)(lVar6 + 0x28) >> ((byte)param_2 & 0x1f);
  if (uVar15 < uVar2) {
    uVar15 = uVar2;
  }
  bVar4 = (*(byte *)((longlong)param_1 + 0xb4) & 8) >> 3;
  lVar6 = (**(code **)(*param_1 + 8))(param_1);
  lVar6 = (longlong)
          (int)((uint)*(ushort *)(lVar6 + 0x2c + (ulonglong)(*(char *)(lVar6 + 0x32) != '\x02') * 2)
                * ((uint)bVar4 + (uint)bVar4 * 4 + 1) * param_2 + param_3);
  puVar14 = *(undefined8 **)(param_1[0x11] + lVar6 * 8);
  local_6c = param_3;
  if (puVar14 == (undefined8 *)0x0) {
    iVar11 = (((uVar12 + uVar1) - 1) / uVar1) * local_70;
    puVar10 = (undefined8 *)FUN_14001cc68(0x50,0x10);
    uStack_5c = 0;
    uStack_58 = 2;
    local_60 = iVar11 * (((uVar15 + uVar2) - 1) / uVar2);
    FUN_1473fb1b0(puVar10);
    puVar14 = *(undefined8 **)(param_1[0x11] + lVar6 * 8);
    if (puVar14 != puVar10) {
      *(undefined8 **)(param_1[0x11] + lVar6 * 8) = puVar10;
      if (puVar10 != (undefined8 *)0x0) {
        *(int *)(puVar10 + 1) = *(int *)(puVar10 + 1) + 1;
      }
      if (puVar14 != (undefined8 *)0x0) {
        piVar13 = (int *)(puVar14 + 1);
        *piVar13 = *piVar13 + -1;
        if (*piVar13 == 0) {
          (**(code **)*puVar14)(puVar14,1);
        }
      }
    }
    puVar14 = *(undefined8 **)(param_1[0x11] + lVar6 * 8);
    if (puVar14 == (undefined8 *)0x0) {
      local_70 = (int)CONCAT71((int7)((ulonglong)param_1[0x11] >> 8),1);
      puVar14 = (undefined8 *)0x0;
      goto LAB_1473faea1;
    }
  }
  *(int *)(puVar14 + 1) = *(int *)(puVar14 + 1) + 1;
  local_70 = 0;
LAB_1473faea1:
  (**(code **)(*param_1 + 8))(param_1);
  lVar3 = DAT_14ca7a3c8;
  lVar6 = *(longlong *)(DAT_14ca7a3c8 + 0x14fa0);
  if (lVar6 == 0) {
    lVar9 = *(longlong *)(DAT_14ca7a3c8 + 0x15008);
    pHVar8 = wglGetCurrentContext();
    lVar6 = lVar3 + 0x14200;
    if (pHVar8 == *(HGLRC *)(lVar9 + 0x40)) {
      lVar6 = lVar3 + 0x148d0;
    }
    *(longlong *)(lVar3 + 0x14fa0) = lVar6;
  }
  lVar3 = DAT_14ca7a3c8;
  lVar9 = (**(code **)(*param_1 + 8))(param_1);
  bVar4 = *(byte *)(lVar9 + 0x30);
  if ((param_1[0xf] != 0) && ((*(byte *)(param_1[0xf] + 0x10) & 1) == 0)) {
    FUN_1431cefae(param_1,1);
  }
  if ((*(int *)(*(longlong *)(lVar6 + 8) + 0x10 + ((longlong)DAT_14c760d20 + -1) * 0x28) !=
       *(int *)((longlong)param_1 + 0x6c)) ||
     (*(int *)(*(longlong *)(lVar6 + 8) + 0x14 + ((longlong)DAT_14c760d20 + -1) * 0x28) !=
      (int)param_1[0xd])) {
    local_78 = CONCAT44(local_78._4_4_,(uint)bVar4);
    local_88 = (uint *)CONCAT44(local_88._4_4_,(int)param_1[0xd]);
    local_80 = CONCAT44(local_80._4_4_,0xffffffff);
    FUN_1473e5556(lVar3,lVar6);
  }
  (*DAT_14ca7fba8)(0x88eb,*(undefined4 *)(puVar14 + 4));
  lVar6 = (**(code **)(*param_1 + 8))(param_1);
  if ((*(char *)(lVar6 + 0x32) != '\x01') && (*(char *)(lVar6 + 0x32) != '\x04')) {
    lVar6 = (**(code **)(*param_1 + 8))(param_1);
    if (*(char *)(lVar6 + 0x32) != '\x02') {
      lVar6 = local_68 * 0x14;
      if ((&DAT_14ca79c50)[lVar6] == '\x01') {
        if ((*(byte *)((longlong)param_1 + 0xb4) & 8) == 0) {
          iVar11 = *(int *)((longlong)param_1 + 0x6c);
        }
        else {
          iVar11 = local_6c + 0x8515;
        }
        (*DAT_14ca7f4c0)(iVar11,param_2,0);
      }
      else {
        local_60 = (int)param_1;
        uStack_5c = (undefined4)((ulonglong)param_1 >> 0x20);
        piVar13 = &local_4c;
        if ((*(byte *)((longlong)param_1 + 0xb4) & 8) == 0) {
          piVar13 = (int *)0x0;
        }
        local_80 = 0;
        local_88 = &local_50;
        uVar5 = FUN_1473e5d02(DAT_14ca7a3c8,1,&local_60,piVar13);
        (*DAT_14ca7fb60)(0x8ca8,uVar5);
        (*DAT_14ca7fe98)(0x8ce0);
        (*DAT_14ca7fbe8)(0xd05,1);
        local_78 = 0;
        local_80 = CONCAT44(local_80._4_4_,*(undefined4 *)(&DAT_14ca79c4c + lVar6));
        local_88 = (uint *)CONCAT44(local_88._4_4_,*(undefined4 *)(&DAT_14ca79c48 + lVar6));
        (*DAT_14ca7fbf0)(0,0,uVar12,uVar15);
        (*DAT_14ca7fbe8)(0xd05,4);
        lVar3 = DAT_14ca7a3c8;
        lVar6 = *(longlong *)(DAT_14ca7a3c8 + 0x14fa0);
        if (lVar6 == 0) {
          lVar9 = *(longlong *)(DAT_14ca7a3c8 + 0x15008);
          pHVar8 = wglGetCurrentContext();
          lVar6 = lVar3 + 0x14200;
          if (pHVar8 == *(HGLRC *)(lVar9 + 0x40)) {
            lVar6 = lVar3 + 0x148d0;
          }
          *(longlong *)(lVar3 + 0x14fa0) = lVar6;
        }
        *(undefined4 *)(lVar6 + 0x1a8) = 0xffffffff;
      }
    }
  }
  (*DAT_14ca7fba8)(0x88eb,0);
  if ((char)local_70 == '\0') {
    piVar13 = (int *)(puVar14 + 1);
    *piVar13 = *piVar13 + -1;
    if (*piVar13 == 0) {
      (**(code **)*puVar14)(puVar14,1);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473fb1b0 FUN_1473fb1b0 body=152 status=ok
// SIG undefined FUN_1473fb1b0(void)

undefined8 * FUN_1473fb1b0(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auStack_48 [40];
  undefined8 *local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = &PTR_FUN_14a374b30;
  param_1[2] = *param_2;
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 1);
  *param_1 = &PTR_FUN_14a374b28;
  param_1[4] = 0x88ec00000000;
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) & 0xf8;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  local_18 = 0;
  local_20 = param_1;
  if ((*(byte *)((longlong)param_2 + 10) & 0x10) == 0) {
    FUN_147402858(&local_20);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473fb24a FUN_1473fb24a body=646 status=ok
// SIG undefined FUN_1473fb24a(void)

void FUN_1473fb24a(longlong *param_1,longlong param_2,ulonglong param_3,int param_4,
                  undefined8 param_5,undefined4 param_6,int param_7)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  code *pcVar4;
  code *pcVar5;
  byte bVar6;
  byte bVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  longlong *plVar12;
  uint uVar13;
  undefined8 in_stack_ffffffffffffffa0;
  undefined4 uVar14;
  
  pcVar5 = DAT_14ca7c4e8;
  pcVar4 = DAT_14ca7c4e0;
  uVar14 = (undefined4)((ulonglong)in_stack_ffffffffffffffa0 >> 0x20);
  bVar7 = (byte)param_4;
  if (*(char *)(param_2 + 0x10) == '\x01') {
    bVar6 = (*(byte *)((longlong)param_1 + 0xb4) & 8) >> 3;
    iVar8 = ((uint)bVar6 + (uint)bVar6 * 4 + 1) * param_4;
    uVar9 = iVar8 + param_7;
    plVar12 = (longlong *)param_1[0x14];
    if ((longlong *)param_1[0x14] == (longlong *)0x0) {
      plVar12 = param_1 + 0x13;
    }
    uVar13 = iVar8 + param_7 + 0x1f;
    if (-1 < (int)uVar9) {
      uVar13 = uVar9;
    }
    if ((*(uint *)((longlong)plVar12 + (longlong)((int)uVar13 >> 5) * 4) >> (uVar9 & 0x1f) & 1) == 0
       ) {
      lVar11 = (**(code **)(*param_1 + 8))(param_1);
      uVar13 = *(uint *)(lVar11 + 0x28) >> (bVar7 & 0x1f);
      lVar11 = (**(code **)(*param_1 + 8))(param_1);
      uVar9 = *(uint *)(lVar11 + 0x24) >> (bVar7 & 0x1f);
      if ((*(byte *)((longlong)param_1 + 0xb4) & 8) == 0) {
        iVar8 = *(int *)((longlong)param_1 + 0x6c);
      }
      else {
        iVar8 = param_7 + 0x8515;
      }
      (*pcVar5)(iVar8,param_4,*(undefined4 *)(param_2 + (param_3 & 0xff) * 4),uVar9 + (uVar9 == 0),
                uVar13 + (uVar13 == 0),0,param_6,param_5);
      bVar7 = (*(byte *)((longlong)param_1 + 0xb4) & 8) >> 3;
      param_4 = ((uint)bVar7 + (uint)bVar7 * 4 + 1) * param_4;
      iVar8 = param_4 + param_7;
      plVar12 = param_1 + 0x13;
      if ((longlong *)param_1[0x14] != (longlong *)0x0) {
        plVar12 = (longlong *)param_1[0x14];
      }
      iVar10 = param_4 + param_7 + 0x1f;
      if (-1 < iVar8) {
        iVar10 = iVar8;
      }
      puVar1 = (uint *)((longlong)plVar12 + (longlong)(iVar10 >> 5) * 4);
      *puVar1 = *puVar1 | 1 << ((byte)iVar8 & 0x1f);
    }
    else {
      uVar2 = *(undefined4 *)(param_2 + (param_3 & 0xff) * 4);
      lVar11 = (**(code **)(*param_1 + 8))(param_1);
      uVar13 = *(uint *)(lVar11 + 0x28) >> (bVar7 & 0x1f);
      lVar11 = (**(code **)(*param_1 + 8))(param_1);
      uVar9 = *(uint *)(lVar11 + 0x24) >> (bVar7 & 0x1f);
      if ((*(byte *)((longlong)param_1 + 0xb4) & 8) == 0) {
        param_7 = *(int *)((longlong)param_1 + 0x6c);
      }
      else {
        param_7 = param_7 + 0x8515;
      }
      (*pcVar4)(param_7,param_4,0,0,uVar9 + (uVar9 == 0),uVar13 + (uVar13 == 0),uVar2,
                CONCAT44(uVar14,param_6),param_5);
    }
    return;
  }
  (*DAT_14ca7fbe8)(0xcf5,1);
  pcVar4 = DAT_14ca7c4f0;
  uVar2 = *(undefined4 *)(param_2 + 8);
  uVar3 = *(undefined4 *)(param_2 + 0xc);
  lVar11 = (**(code **)(*param_1 + 8))(param_1);
  uVar13 = *(uint *)(lVar11 + 0x28) >> (bVar7 & 0x1f);
  lVar11 = (**(code **)(*param_1 + 8))(param_1);
  uVar9 = *(uint *)(lVar11 + 0x24) >> (bVar7 & 0x1f);
  if ((*(byte *)((longlong)param_1 + 0xb4) & 8) == 0) {
    param_7 = *(int *)((longlong)param_1 + 0x6c);
  }
  else {
    param_7 = param_7 + 0x8515;
  }
  (*pcVar4)(param_7,param_4,0,0,uVar9 + (uVar9 == 0),uVar13 + (uVar13 == 0),uVar2,
            CONCAT44(uVar14,uVar3),param_5);
                    /* WARNING: Could not recover jumptable at 0x0001473fb3cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_14ca7fbe8)(0xcf5,4);
  return;
}



// FUNCTION 1473fb4d0 FUN_1473fb4d0 body=382 status=ok
// SIG undefined FUN_1473fb4d0(void)

longlong FUN_1473fb4d0(longlong param_1,uint param_2,byte param_3,char param_4)

{
  uint uVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  bool bVar6;
  
  FUN_1473e5c95(*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x20));
  *(uint *)(param_1 + 0x28) = (*(uint *)(param_1 + 0x28) & 0xfffffffc) + (uint)param_3 * 2 + 1;
  if (param_4 == '\0') {
    if (param_3 == 0) {
      if (*(uint *)(param_1 + 0x10) == param_2) goto LAB_1473fb50c;
      if (DAT_14ca7c3e4 != 0) goto LAB_1473fb54c;
      goto LAB_1473fb5f1;
    }
  }
  else {
LAB_1473fb50c:
    bVar6 = DAT_14ca7c3e4 == 0;
    if (DAT_14c760d30 != 0) {
      (*DAT_14ca7fc78)(*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x10),0,
                       (uint)((*(byte *)(param_1 + 0x18) & 6) != 0) * 4 + 0x88e4);
    }
    if (bVar6 && param_3 == 0) {
LAB_1473fb5f1:
      *(undefined4 *)(param_1 + 0x30) = 0;
      *(uint *)(param_1 + 0x2c) = param_2;
      lVar3 = *(longlong *)(param_1 + 0x40);
      if (lVar3 == 0) {
LAB_1473fb620:
        lVar3 = FUN_14001cc68(param_2,0);
        *(longlong *)(param_1 + 0x38) = lVar3;
        *(uint *)(param_1 + 0x48) = param_2;
      }
      else {
        if (*(uint *)(param_1 + 0x48) < param_2) {
          FUN_1400020a8(lVar3);
          *(undefined8 *)(param_1 + 0x40) = 0;
          *(undefined4 *)(param_1 + 0x48) = 0;
          goto LAB_1473fb620;
        }
        *(longlong *)(param_1 + 0x38) = lVar3;
        *(undefined8 *)(param_1 + 0x40) = 0;
      }
      uVar1 = *(uint *)(param_1 + 0x28) | 4;
      uVar4 = 0;
      goto LAB_1473fb582;
    }
  }
LAB_1473fb54c:
  uVar4 = 1;
  uVar5 = 0x2a;
  if (param_3 != 0) {
    uVar5 = 1;
  }
  lVar3 = (*DAT_14ca7fd18)(*(undefined4 *)(param_1 + 0x24),0,param_2,uVar5);
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(uint *)(param_1 + 0x2c) = param_2;
  *(longlong *)(param_1 + 0x38) = lVar3;
  uVar1 = *(uint *)(param_1 + 0x28) & 0xfffffffb;
LAB_1473fb582:
  *(uint *)(param_1 + 0x28) = uVar1;
  if (lVar3 == 0) {
    uVar2 = (*DAT_14ca7fcd0)();
    FUN_140033559(".\\Runtime/OpenGLDrv/Private\\OpenGLResources.h",0x12d,
                  L"Failed to lock buffer: Resource %u, Size %u, Offset %u, bReadOnly %d, bUseMapBuffer %d, glError (0x%x)"
                  ,*(undefined4 *)(param_1 + 0x20),param_2,0,(uint)param_3,uVar4,uVar2);
  }
  return lVar3;
}



// FUNCTION 1473fb64e FUN_1473fb64e body=254 status=ok
// SIG undefined FUN_1473fb64e(void)

void FUN_1473fb64e(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  if ((*(byte *)(param_1 + 0x28) & 1) != 0) {
    FUN_1473e5c95(*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x20));
    uVar1 = DAT_14c760d2c;
    if ((DAT_14ca7c3e4 == 0) && ((*(byte *)(param_1 + 0x28) & 2) == 0)) {
      lVar4 = *(longlong *)(param_1 + 0x38);
      uVar2 = *(uint *)(param_1 + 0x2c);
      uVar3 = (ulonglong)uVar2;
      iVar5 = *(int *)(param_1 + 0x30);
      if (DAT_14c760d2c == 0) {
        (*DAT_14ca7ff50)(*(undefined4 *)(param_1 + 0x24),iVar5,uVar3,lVar4);
      }
      else {
        while (uVar2 != 0) {
          uVar2 = (uint)uVar3;
          if (uVar1 < uVar2) {
            uVar3 = (ulonglong)uVar1;
          }
          (*DAT_14ca7ff50)(*(undefined4 *)(param_1 + 0x24),iVar5,uVar3,lVar4);
          iVar5 = iVar5 + (int)uVar3;
          lVar4 = lVar4 + uVar3;
          uVar2 = uVar2 - (int)uVar3;
          uVar3 = (ulonglong)uVar2;
        }
      }
      if ((*(byte *)(param_1 + 0x18) & 4) == 0) {
        FUN_1400020a8(*(undefined8 *)(param_1 + 0x38));
      }
      else {
        if (*(longlong *)(param_1 + 0x40) == 0) {
          uVar1 = *(uint *)(param_1 + 0x48);
        }
        else {
          FUN_1400020a8();
          uVar1 = 0;
        }
        *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_1 + 0x38);
        if (uVar1 < *(uint *)(param_1 + 0x2c)) {
          uVar1 = *(uint *)(param_1 + 0x2c);
        }
        *(uint *)(param_1 + 0x48) = uVar1;
      }
      *(undefined8 *)(param_1 + 0x38) = 0;
      uVar1 = *(uint *)(param_1 + 0x28) & 0xfffffffb;
      *(undefined4 *)(param_1 + 0x2c) = 0;
    }
    else {
      (*DAT_14ca7fe10)(*(undefined4 *)(param_1 + 0x24));
      *(undefined8 *)(param_1 + 0x38) = 0;
      uVar1 = *(uint *)(param_1 + 0x28);
    }
    *(uint *)(param_1 + 0x28) = uVar1 & 0xfffffffe;
  }
  return;
}



// FUNCTION 1473fb74c FUN_1473fb74c body=105 status=ok
// SIG undefined FUN_1473fb74c(void)

bool FUN_1473fb74c(longlong *param_1)

{
  uint uVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (((*(byte *)((longlong)param_1 + 0xb4) & 2) == 0) ||
     (uVar1 = *(uint *)(param_1[0xf] + 8), lVar3 = (**(code **)(*param_1 + 8))(param_1),
     uVar1 != *(byte *)(lVar3 + 0x30))) {
    bVar2 = false;
  }
  else {
    lVar3 = (longlong)(int)((longlong *)param_1[0xf])[1];
    bVar2 = 0 < lVar3;
    if (lVar3 != 0) {
      lVar4 = 0;
      do {
        if (bVar2 == false) {
          bVar2 = false;
        }
        else {
          bVar2 = 0 < *(int *)(*(longlong *)param_1[0xf] + 8 + lVar4);
        }
        lVar4 = lVar4 + 0x10;
      } while (lVar3 * 0x10 != lVar4);
    }
  }
  return bVar2;
}



// FUNCTION 1473fb7b6 FUN_1473fb7b6 body=344 status=ok
// SIG undefined FUN_1473fb7b6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1473fb7b6(longlong param_1)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_58 [36];
  undefined4 local_34;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = param_1;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14ca7a398);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca7fb10) {
    FUN_144b3d300(&DAT_14ca7fb10);
    if (DAT_14ca7fb10 == -1) {
      DAT_14ca7fac8 = 0;
      _DAT_14ca7fad0 = 0;
      DAT_14ca7faa8 = 0;
      _DAT_14ca7fab0 = 0;
      _DAT_14ca7fad4 = 0xffffffff00000080;
      DAT_14ca7fadc = 0;
      DAT_14ca7fae8 = 0;
      DAT_14ca7faf0 = 0;
      DAT_14ca7faf8 = 0;
      DAT_14ca7fb00 = 0;
      DAT_14ca7fb08 = 10000;
      FUN_147400fb2(&DAT_14ca7faa8,10000);
      atexit((_func_5014 *)&LAB_1431d56d4);
      _Init_thread_footer(&DAT_14ca7fb10);
    }
  }
  iVar1 = DAT_14ca7fb08;
  iVar2 = DAT_14ca7fab0 - DAT_14ca7fadc;
  if (iVar2 != DAT_14ca7fb08) {
    FUN_1473fdbda(&local_34,&local_30,&local_30);
    *(undefined4 *)(*(longlong *)(param_1 + 0x78) + 0x14) = local_34;
    *(undefined4 *)(*(longlong *)(param_1 + 0x78) + 0x18) = DAT_14c7590b0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14ca7a398);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return CONCAT31((int3)((uint)iVar2 >> 8),iVar2 != iVar1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473fb910 FUN_1473fb910 body=182 status=ok
// SIG undefined FUN_1473fb910(void)

void FUN_1473fb910(longlong *param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  uVar3 = ~param_2 + (int)param_1[1];
  if (-1 < (int)uVar3) {
    iVar6 = (int)param_1[1] - param_2;
    lVar7 = (ulonglong)uVar3 << 4;
    iVar4 = DAT_14ca7c4f8;
    iVar5 = DAT_14ca7c500;
    do {
      lVar2 = *param_1;
      iVar1 = *(int *)(lVar2 + 8 + lVar7);
      iVar4 = iVar4 - iVar1;
      iVar5 = iVar5 + -1 + (uint)(iVar1 == 0);
      DAT_14ca7c4f8 = iVar4;
      DAT_14ca7c500 = iVar5;
      *(undefined4 *)(lVar2 + 8 + lVar7) = 0;
      if (*(int *)(lVar2 + 0xc + lVar7) != 0) {
        FUN_144893a1c(lVar2 + lVar7,0);
        iVar4 = DAT_14ca7c4f8;
        iVar5 = DAT_14ca7c500;
      }
      iVar6 = iVar6 + -1;
      lVar7 = lVar7 + -0x10;
    } while (0 < iVar6);
  }
  if (param_2 == 0) {
    FUN_1459ab2e7(*param_1,(int)param_1[1]);
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != 0) {
      FUN_146b27f1e(param_1,0);
      return;
    }
  }
  return;
}



// FUNCTION 1473fb9c6 FUN_1473fb9c6 body=121 status=ok
// SIG undefined FUN_1473fb9c6(void)

void FUN_1473fb9c6(longlong *param_1,longlong *param_2,uint param_3,int param_4,int param_5)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = (int)param_2[1] - param_4;
  if ((int)param_3 < (int)uVar1) {
    uVar1 = param_3;
  }
  if (0 < (int)uVar1) {
    uVar5 = (ulonglong)uVar1;
    lVar2 = *param_1;
    lVar4 = (longlong)param_4 << 4;
    lVar3 = (longlong)param_5 << 4;
    do {
      if (*(int *)(lVar2 + 8 + lVar3) == 0) {
        DAT_14ca7c500 = DAT_14ca7c500 + 1;
      }
      FUN_1447a122a(lVar2 + lVar3,*param_2 + lVar4);
      lVar2 = *param_1;
      DAT_14ca7c4f8 = DAT_14ca7c4f8 + *(int *)(lVar2 + 8 + lVar3);
      lVar4 = lVar4 + 0x10;
      lVar3 = lVar3 + 0x10;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return;
}



// FUNCTION 1473fba40 FUN_1473fba40 body=273 status=ok
// SIG undefined FUN_1473fba40(void)

longlong *
FUN_1473fba40(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong lVar1;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined8 local_74;
  undefined2 local_6c;
  undefined2 local_6a;
  undefined1 local_68;
  undefined1 local_67;
  undefined1 local_66;
  undefined1 local_65;
  undefined1 local_64;
  undefined1 local_63;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined1 local_38 [16];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar1 = FUN_14001cc68(0xb8,0x10);
  local_66 = *(undefined1 *)((longlong)param_4 + 0x32);
  local_98 = *param_4;
  local_65 = *(undefined1 *)((longlong)param_4 + 0x33);
  local_64 = *(undefined1 *)((longlong)param_4 + 0x34);
  local_74 = *(undefined8 *)((longlong)param_4 + 0x24);
  local_6c = *(undefined2 *)((longlong)param_4 + 0x2c);
  local_6a = *(undefined2 *)((longlong)param_4 + 0x2e);
  local_68 = *(undefined1 *)(param_4 + 6);
  local_67 = *(undefined1 *)((longlong)param_4 + 0x31);
  local_90 = param_4[1];
  uStack_88 = param_4[2];
  local_80 = *(undefined4 *)(param_4 + 3);
  local_78 = *(undefined4 *)(param_4 + 4);
  local_63 = *(undefined1 *)((longlong)param_4 + 0x35);
  local_7c = *(undefined4 *)((longlong)param_4 + 0x1c);
  local_60 = *(undefined4 *)(param_4 + 7);
  uStack_5c = *(undefined4 *)((longlong)param_4 + 0x3c);
  uStack_58 = *(undefined4 *)(param_4 + 8);
  uStack_54 = *(undefined4 *)((longlong)param_4 + 0x44);
  local_50 = *(undefined4 *)(param_4 + 9);
  uStack_4c = *(undefined4 *)((longlong)param_4 + 0x4c);
  uStack_48 = *(undefined4 *)(param_4 + 10);
  uStack_44 = *(undefined4 *)((longlong)param_4 + 0x54);
  local_40 = param_4[0xb];
  FUN_1431cecec(local_38,param_4);
  FUN_1431cf19a(lVar1,param_3,&local_98);
  *param_2 = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473fbb5e FUN_1473fbb5e body=249 status=ok
// SIG undefined FUN_1473fbb5e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1473fbb5e(longlong param_1,longlong *param_2)

{
  int *piVar1;
  undefined1 uVar2;
  HGLRC pHVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  
  if ((*(char *)(param_1 + 0x15018) == '\x01') && (*(longlong *)(param_1 + 0x15030) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x15030) + 0x10);
    *piVar1 = *piVar1 + 1;
  }
  lVar6 = *(longlong *)(param_1 + 0x14fa0);
  if (lVar6 == 0) {
    lVar5 = *(longlong *)(param_1 + 0x15008);
    pHVar3 = wglGetCurrentContext();
    lVar6 = param_1 + 0x14200;
    if (pHVar3 == *(HGLRC *)(lVar5 + 0x40)) {
      lVar6 = param_1 + 0x148d0;
    }
    *(longlong *)(param_1 + 0x14fa0) = lVar6;
  }
  if (param_2 == (longlong *)0x0) {
    plVar4 = (longlong *)0x0;
  }
  else {
    plVar4 = (longlong *)(**(code **)(*param_2 + 0x30))(param_2);
  }
  lVar5 = (**(code **)(*plVar4 + 8))(plVar4);
  uVar2 = *(undefined1 *)(lVar5 + 0x30);
  if ((plVar4[0xf] != 0) && ((*(byte *)(plVar4[0xf] + 0x10) & 1) == 0)) {
    FUN_1431cefae(plVar4,1);
  }
  iVar7 = *(int *)((longlong)plVar4 + 0x6c);
  lVar5 = (longlong)DAT_14c760d20 + -1;
  if ((*(int *)(*(longlong *)(lVar6 + 8) + 0x10 + lVar5 * 0x28) != iVar7) ||
     (*(int *)(*(longlong *)(lVar6 + 8) + 0x14 + lVar5 * 0x28) != (int)plVar4[0xd])) {
    FUN_1473e5556(param_1,lVar6,lVar5,iVar7,(int)plVar4[0xd],0xffffffff,uVar2);
    iVar7 = *(int *)((longlong)plVar4 + 0x6c);
  }
                    /* WARNING: Could not recover jumptable at 0x0001473fbc49. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*_DAT_14ca7f808)(iVar7);
  return;
}



// FUNCTION 1473fbc58 FUN_1473fbc58 body=33 status=ok
// SIG undefined FUN_1473fbc58(void)

undefined4 FUN_1473fbc58(undefined8 param_1,longlong *param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  
  if (param_2 == (longlong *)0x0) {
    uVar1 = 0;
  }
  else {
    lVar2 = (**(code **)(*param_2 + 0x30))(param_2);
    uVar1 = *(undefined4 *)(lVar2 + 0xb0);
  }
  return uVar1;
}



// FUNCTION 1473fbc7a FUN_1473fbc7a body=65 status=ok
// SIG undefined FUN_1473fbc7a(void)

undefined8
FUN_1473fbc7a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined8 param_8)

{
  FUN_1473fbcbc(param_7,param_2,param_4,param_5,param_6,param_7,param_8);
  return param_2;
}



// FUNCTION 1473fbcbc FUN_1473fbcbc body=818 status=ok
// SIG undefined FUN_1473fbcbc(void)

void FUN_1473fbcbc(undefined8 param_1,longlong *param_2,longlong *param_3,uint param_4,
                  undefined4 param_5,undefined4 param_6,int *param_7)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined2 uVar10;
  uint uVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  longlong lVar14;
  undefined8 *puVar15;
  undefined1 uVar16;
  undefined1 auStack_198 [32];
  int local_178;
  undefined1 local_162;
  undefined1 local_161;
  undefined2 local_160;
  undefined2 local_15e;
  uint local_15c;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  uint local_14c;
  longlong *local_148;
  longlong *local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined8 local_10c;
  undefined2 local_104;
  undefined2 local_102;
  undefined1 local_100;
  undefined1 local_ff;
  undefined1 local_fe;
  undefined1 local_fd;
  undefined1 local_fc;
  undefined1 local_fb;
  undefined8 local_f8;
  wchar_t *pwStack_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined1 local_d0 [16];
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined8 local_9c;
  undefined2 local_94;
  undefined2 local_92;
  undefined1 local_90;
  undefined1 local_8f;
  undefined1 local_8e;
  undefined1 local_8d;
  undefined1 local_8c;
  undefined1 local_8b;
  undefined4 local_88;
  undefined4 uStack_84;
  wchar_t *pwStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_198;
  local_14c = param_4;
  local_140 = param_2;
  if (param_3 == (longlong *)0x0) {
    local_148 = (longlong *)0x0;
  }
  else {
    local_148 = (longlong *)(**(code **)(*param_3 + 0x30))(param_3);
  }
  puVar13 = (undefined8 *)(**(code **)(*local_148 + 8))(local_148);
  uVar1 = *(undefined1 *)((longlong)puVar13 + 0x32);
  uVar6 = *puVar13;
  uVar2 = *(undefined1 *)((longlong)puVar13 + 0x33);
  uVar3 = *(undefined1 *)((longlong)puVar13 + 0x34);
  uVar4 = *(undefined2 *)((longlong)puVar13 + 0x2c);
  local_15e = *(undefined2 *)((longlong)puVar13 + 0x2e);
  local_15c = (uint)*(byte *)(puVar13 + 6);
  local_162 = *(undefined1 *)((longlong)puVar13 + 0x31);
  local_150 = *(undefined4 *)(puVar13 + 1);
  uVar8 = *(undefined8 *)((longlong)puVar13 + 0xc);
  uVar9 = *(undefined8 *)((longlong)puVar13 + 0x14);
  local_158 = *(undefined4 *)(puVar13 + 4);
  local_161 = *(undefined1 *)((longlong)puVar13 + 0x35);
  uVar5 = *(undefined4 *)((longlong)puVar13 + 0x1c);
  local_160 = uVar4;
  local_154 = uVar5;
  local_138 = uVar6;
  local_88 = FUN_1431edf91(uVar6,0);
  uVar11 = local_14c;
  uVar10 = local_15e;
  local_92 = local_15e;
  uVar16 = (undefined1)local_14c;
  local_8f = local_162;
  local_b8 = local_150;
  uStack_b4 = (undefined4)uVar8;
  uStack_b0 = (undefined4)((ulonglong)uVar8 >> 0x20);
  uStack_ac = (undefined4)uVar9;
  uStack_a8 = (undefined4)((ulonglong)uVar9 >> 0x20);
  local_a0 = local_158;
  local_8b = local_161;
  pwStack_80 = L"RHIAsyncReallocateTexture2D";
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  local_c0 = uVar6;
  local_a4 = uVar5;
  local_9c = CONCAT44(param_6,param_5);
  local_94 = uVar4;
  local_90 = uVar16;
  local_8e = uVar1;
  local_8d = uVar2;
  local_8c = uVar3;
  lVar14 = FUN_14001cc68(0xb8,0x10);
  local_130 = local_138;
  local_104 = local_160;
  local_102 = uVar10;
  local_ff = local_162;
  local_128 = CONCAT44(uStack_b4,local_b8);
  uStack_120 = CONCAT44(uStack_ac,uStack_b0);
  local_118 = uStack_a8;
  local_110 = local_158;
  local_fb = local_161;
  local_114 = local_154;
  local_f8 = CONCAT44(uStack_84,local_88);
  pwStack_f0 = pwStack_80;
  local_e8 = (undefined4)local_78;
  uStack_e4 = local_78._4_4_;
  uStack_e0 = (undefined4)uStack_70;
  uStack_dc = uStack_70._4_4_;
  local_d8 = local_68;
  local_10c = CONCAT44(param_6,param_5);
  local_100 = uVar16;
  local_fe = uVar1;
  local_fd = uVar2;
  local_fc = uVar3;
  FUN_1431cecec(local_d0,&local_c0);
  FUN_1431cf19a(lVar14,&DAT_14ca85100,&local_130);
  plVar12 = local_148;
  uVar7 = local_15c;
  if (DAT_14ca85164 == '\x01') {
    uVar7 = uVar11;
    if ((int)local_15c < (int)uVar11) {
      uVar7 = local_15c;
    }
    local_178 = uVar11 - uVar7;
    FUN_1431cfff4(lVar14,local_148,uVar7,local_15c - uVar7);
    LOCK();
    *param_7 = *param_7 + -1;
    UNLOCK();
  }
  else {
    puVar15 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
    puVar13 = puVar15 + 6;
    if (DAT_14ca85108 < puVar13) {
      FUN_140023dd8(&DAT_14ca85100,0x38);
      puVar15 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
      puVar13 = puVar15 + 6;
    }
    DAT_14ca85160 = DAT_14ca85160 + 1;
    DAT_14ca85100 = puVar13;
    *DAT_14ca85130 = puVar15;
    DAT_14ca85130 = puVar15 + 1;
    puVar15[1] = 0;
    *puVar15 = &PTR_FUN_14a374b38;
    puVar15[2] = plVar12;
    puVar15[3] = lVar14;
    *(uint *)(puVar15 + 4) = uVar7;
    *(uint *)((longlong)puVar15 + 0x24) = uVar11;
    puVar15[5] = param_7;
  }
  *local_140 = lVar14;
  if (lVar14 != 0) {
    LOCK();
    *(int *)(lVar14 + 8) = *(int *)(lVar14 + 8) + 1;
    UNLOCK();
  }
  if ((local_60 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473fbff8 FUN_1473fbff8 body=242 status=ok
// SIG undefined FUN_1473fbff8(void)

void FUN_1473fbff8(undefined8 param_1,longlong *param_2,undefined4 param_3,undefined4 param_4,
                  int *param_5,undefined8 param_6,ulonglong *param_7)

{
  uint uVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  
  if (param_2 == (longlong *)0x0) {
    plVar3 = (longlong *)0x0;
  }
  else {
    plVar3 = (longlong *)(**(code **)(*param_2 + 0x30))(param_2);
  }
  if (param_7 != (ulonglong *)0x0) {
    lVar4 = (**(code **)(*plVar3 + 8))(plVar3);
    uVar5 = (ulonglong)((uint)*(byte *)(lVar4 + 0x33) * 0x30);
    uVar1 = *(uint *)((longlong)&DAT_14c87341c + uVar5);
    uVar2 = *(uint *)((longlong)&DAT_14c873420 + uVar5);
    iVar6 = *(int *)((longlong)&DAT_14c873428 + uVar5);
    lVar4 = (**(code **)(*plVar3 + 8))(plVar3);
    uVar8 = *(uint *)(lVar4 + 0x24) >> ((byte)param_3 & 0x1f);
    if (uVar8 < uVar1) {
      uVar8 = uVar1;
    }
    lVar4 = (**(code **)(*plVar3 + 8))(plVar3);
    uVar7 = *(uint *)(lVar4 + 0x28) >> ((byte)param_3 & 0x1f);
    if (uVar7 < uVar2) {
      uVar7 = uVar2;
    }
    iVar6 = (((uVar8 + uVar1) - 1) / uVar1) * iVar6;
    *param_5 = iVar6;
    *param_7 = (ulonglong)((((uVar2 + uVar7) - 1) / uVar2) * iVar6);
  }
  FUN_1431cf9b8(plVar3,param_3,0,param_4);
  return;
}



// FUNCTION 1473fc0ea FUN_1473fc0ea body=44 status=ok
// SIG undefined FUN_1473fc0ea(void)

void FUN_1473fc0ea(undefined8 param_1,longlong *param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  if (param_2 == (longlong *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(*param_2 + 0x30))(param_2);
  }
  FUN_1431cfc0a(uVar1,param_3,0);
  return;
}



// FUNCTION 1473fc116 FUN_1473fc116 body=74 status=ok
// SIG undefined FUN_1473fc116(void)

void FUN_1473fc116(undefined8 param_1,longlong *param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  if (param_2 == (longlong *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(*param_2 + 0x30))(param_2);
  }
  FUN_1431cf9b8(uVar1,param_4,param_3,param_5,param_6);
  return;
}



// FUNCTION 1473fc160 FUN_1473fc160 body=49 status=ok
// SIG undefined FUN_1473fc160(void)

void FUN_1473fc160(undefined8 param_1,longlong *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  
  if (param_2 == (longlong *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(*param_2 + 0x30))(param_2);
  }
  FUN_1431cfc0a(uVar1,param_4,param_3);
  return;
}



// FUNCTION 1473fc192 FUN_1473fc192 body=594 status=ok
// SIG undefined FUN_1473fc192(void)

void FUN_1473fc192(undefined8 param_1,ulonglong *param_2,longlong *param_3,undefined4 param_4,
                  undefined4 *param_5,uint param_6,longlong param_7)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  void *_Dst;
  undefined8 *puVar4;
  byte bVar5;
  undefined8 *puVar6;
  byte bVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  void *_Src;
  undefined1 auStack_d8 [40];
  int local_b0;
  undefined4 local_ac;
  void *local_a8;
  ulonglong *local_a0;
  undefined8 local_98;
  longlong *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  uint uStack_5c;
  void *local_58;
  byte bStack_50;
  undefined7 uStack_4f;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_98 = param_1;
  local_90 = param_3;
  lVar3 = (**(code **)(*param_3 + 8))(param_3);
  uVar9 = (ulonglong)((uint)*(byte *)(lVar3 + 0x33) * 0x30);
  uVar8 = *(uint *)((longlong)&DAT_14c87341c + uVar9);
  uVar11 = *(uint *)((longlong)&DAT_14c873420 + uVar9);
  uVar1 = (ulonglong)((uVar8 - 1) + param_5[4]) / (ulonglong)uVar8;
  uVar10 = (uVar11 - 1) + param_5[5];
  uVar2 = (ulonglong)uVar10 / (ulonglong)uVar11;
  _Src = (void *)((ulonglong)(uVar11 * param_6 * ((param_5[3] + (uVar11 - 1)) / uVar11)) +
                 (ulonglong)
                 (((param_5[2] + (uVar8 - 1)) / uVar8) * *(int *)((longlong)&DAT_14c873428 + uVar9))
                 + param_7);
  bVar5 = *(byte *)((longlong)param_2 + 100);
  bVar7 = bVar5 ^ 1;
  local_58 = _Src;
  uStack_5c = param_6;
  if (bVar5 == 0) {
    local_b0 = (int)uVar1;
    uVar8 = 0;
    local_ac = param_4;
    local_a0 = param_2;
    _Dst = (void *)FUN_14001cc68(uVar2 * uVar1 *
                                 (longlong)*(int *)((longlong)&DAT_14c873428 + uVar9),0);
    lVar3 = uVar1 * (longlong)*(int *)((longlong)&DAT_14c873428 + uVar9);
    local_a8 = _Dst;
    if (uVar11 <= uVar10) {
      uVar11 = *(int *)((longlong)&DAT_14c873428 + uVar9) * local_b0;
      do {
        memcpy(_Dst,_Src,(ulonglong)uVar11);
        _Src = (void *)((longlong)_Src + (ulonglong)param_6);
        _Dst = (void *)((longlong)_Dst + lVar3);
        uVar8 = uVar8 + 1;
      } while (uVar8 < (uint)uVar2);
    }
    bVar5 = *(byte *)((longlong)local_a0 + 100);
    uStack_5c = (uint)lVar3;
    param_2 = local_a0;
    local_58 = local_a8;
    param_4 = local_ac;
  }
  local_88 = local_98;
  uStack_80 = local_90;
  uStack_74 = *param_5;
  uStack_70 = param_5[1];
  uStack_6c = param_5[2];
  uStack_68 = param_5[3];
  uStack_64 = (undefined4)*(undefined8 *)(param_5 + 4);
  uStack_60 = (undefined4)((ulonglong)*(undefined8 *)(param_5 + 4) >> 0x20);
  local_78 = param_4;
  bStack_50 = bVar7;
  if ((bVar5 & 1) == 0) {
    puVar4 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar6 = puVar4 + 10;
    if ((undefined8 *)param_2[1] < puVar6) {
      FUN_140023dd8(param_2,0x58);
      puVar4 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar6 = puVar4 + 10;
    }
    *param_2 = (ulonglong)puVar6;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar4;
    param_2[6] = (ulonglong)(puVar4 + 1);
    puVar4[1] = 0;
    *puVar4 = &PTR_LAB_14a374b40;
    *(undefined4 *)(puVar4 + 2) = (undefined4)local_88;
    *(undefined4 *)((longlong)puVar4 + 0x14) = local_88._4_4_;
    *(undefined4 *)(puVar4 + 3) = (undefined4)uStack_80;
    *(undefined4 *)((longlong)puVar4 + 0x1c) = uStack_80._4_4_;
    puVar4[4] = CONCAT44(uStack_74,local_78);
    puVar4[5] = CONCAT44(uStack_6c,uStack_70);
    puVar4[6] = CONCAT44(uStack_64,uStack_68);
    puVar4[7] = CONCAT44(uStack_5c,uStack_60);
    puVar4[8] = local_58;
    puVar4[9] = CONCAT71(uStack_4f,bStack_50);
  }
  else {
    FUN_1431d5cdc(&local_88);
  }
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473fc3e6 FUN_1473fc3e6 body=363 status=ok
// SIG undefined FUN_1473fc3e6(void)

void FUN_1473fc3e6(undefined8 param_1,ulonglong *param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 *param_5,undefined4 param_6,int param_7,void *param_8)

{
  int iVar1;
  byte bVar2;
  void *_Dst;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 auStack_b8 [32];
  undefined8 local_98 [2];
  undefined4 local_88;
  undefined4 local_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  undefined4 local_60;
  int local_5c;
  void *local_58;
  void *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  bVar2 = *(byte *)((longlong)param_2 + 100);
  if (bVar2 == 0) {
    iVar1 = param_5[8];
    _Dst = (void *)FUN_14001cc68((ulonglong)(uint)(iVar1 * param_7),0x10);
    memcpy(_Dst,param_8,(ulonglong)(uint)(iVar1 * param_7));
    bVar2 = *(byte *)((longlong)param_2 + 100);
    param_8 = _Dst;
  }
  else {
    _Dst = (void *)0x0;
  }
  local_98[0] = param_1;
  local_98[1] = param_3;
  local_88 = param_4;
  local_84 = *param_5;
  uStack_80 = param_5[1];
  uStack_7c = param_5[2];
  uStack_78 = param_5[3];
  local_74 = param_5[4];
  uStack_70 = param_5[5];
  uStack_6c = param_5[6];
  uStack_68 = param_5[7];
  local_64 = param_5[8];
  local_60 = param_6;
  local_5c = param_7;
  local_58 = param_8;
  local_50 = _Dst;
  if ((bVar2 & 1) == 0) {
    puVar5 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar5 + 0xc;
    if ((undefined8 *)param_2[1] < puVar3) {
      FUN_140023dd8(param_2,0x68);
      puVar5 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar3 = puVar5 + 0xc;
    }
    *param_2 = (ulonglong)puVar3;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar5;
    param_2[6] = (ulonglong)(puVar5 + 1);
    puVar5[1] = 0;
    *puVar5 = &PTR_LAB_14a374b48;
    puVar3 = local_98;
    puVar5 = puVar5 + 2;
    for (lVar4 = 10; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar5 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar5 = puVar5 + 1;
    }
  }
  else {
    FUN_1431d5f12(local_98);
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473fc552 FUN_1473fc552 body=96 status=ok
// SIG undefined FUN_1473fc552(void)

void FUN_1473fc552(undefined8 param_1,longlong *param_2,int param_3,int param_4,undefined4 param_5,
                  undefined4 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  
  if (param_2 == (longlong *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(*param_2 + 0x30))(param_2);
  }
  FUN_1431cf9b8(uVar1,param_5,param_3 + param_4 * 6,param_6,param_7);
  return;
}



// FUNCTION 1473fc5b2 FUN_1473fc5b2 body=59 status=ok
// SIG undefined FUN_1473fc5b2(void)

void FUN_1473fc5b2(undefined8 param_1,longlong *param_2,int param_3,int param_4,undefined4 param_5)

{
  undefined8 uVar1;
  
  if (param_2 == (longlong *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(*param_2 + 0x30))(param_2);
  }
  FUN_1431cfc0a(uVar1,param_5,param_3 + param_4 * 6);
  return;
}



// FUNCTION 1473fc5ee FUN_1473fc5ee body=849 status=ok
// SIG undefined FUN_1473fc5ee(void)

void FUN_1473fc5ee(undefined8 param_1,longlong *param_2,longlong *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  byte bVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  
  if (param_2 == (longlong *)0x0) {
    lVar10 = 0;
  }
  else {
    lVar10 = (**(code **)(*param_2 + 0x30))(param_2);
  }
  if (param_3 == (longlong *)0x0) {
    lVar11 = 0;
  }
  else {
    lVar11 = (**(code **)(*param_3 + 0x30))(param_3);
  }
  iVar18 = *param_4;
  iVar19 = param_4[1];
  if (((iVar18 == (int)DAT_14c9a5298) && (iVar19 == DAT_14c9a5298._4_4_)) &&
     (param_4[2] == DAT_14c9a52a0)) {
    lVar12 = (**(code **)(*param_2 + 8))(param_2);
    bVar13 = (byte)param_4[0xc];
    iVar18 = *(int *)(lVar12 + 0x24) >> (bVar13 & 0x1f);
    if (iVar18 < 2) {
      iVar18 = 1;
    }
    iVar19 = *(int *)(lVar12 + 0x28) >> (bVar13 & 0x1f);
    if (iVar19 < 2) {
      iVar19 = 1;
    }
    if (*(int *)(lVar10 + 0x6c) == 0x8513) {
      iVar16 = 6;
    }
    else if (*(int *)(lVar10 + 0x6c) == 0x806f) {
      uVar15 = (uint)(*(ushort *)(lVar12 + 0x2c) >> (bVar13 & 0x1f));
      iVar16 = uVar15 + (uVar15 == 0);
    }
    else {
      iVar16 = 1;
    }
  }
  else if (*(int *)(lVar10 + 0x6c) == 0x8513) {
    iVar16 = param_4[0xb];
  }
  else {
    iVar16 = 1;
    if (*(int *)(lVar10 + 0x6c) == 0x806f) {
      iVar16 = param_4[2];
    }
  }
  if (param_4[0xe] != 0) {
    iVar1 = param_4[0xc];
    iVar2 = param_4[0xd];
    uVar15 = 0;
    do {
      iVar9 = *(int *)(lVar10 + 0x6c);
      bVar13 = (byte)uVar15;
      if (iVar9 < 0x8c18) {
        if ((iVar9 == 0x806f) || (iVar9 == 0x8513)) {
          iVar17 = param_4[5] >> (bVar13 & 0x1f);
        }
        else {
          iVar17 = 0;
        }
      }
      else if ((iVar9 == 0x8c18) || (iVar17 = 0, iVar9 == 0x8c1a)) {
        iVar17 = param_4[9];
        iVar16 = param_4[0xb];
      }
      iVar3 = param_4[3];
      iVar4 = param_4[4];
      iVar5 = *(int *)(lVar11 + 0x6c);
      iVar14 = 0;
      if (iVar5 < 0x8c18) {
        if ((iVar5 == 0x806f) || (iVar14 = 0, iVar5 == 0x8513)) {
          iVar14 = param_4[8] >> (bVar13 & 0x1f);
        }
      }
      else if ((iVar5 == 0x8c18) || (iVar5 == 0x8c1a)) {
        iVar14 = param_4[10];
        iVar16 = param_4[0xb];
      }
      iVar6 = param_4[6];
      iVar7 = param_4[7];
      if ((*(longlong *)(lVar11 + 0x78) != 0) &&
         ((*(byte *)(*(longlong *)(lVar11 + 0x78) + 0x10) & 1) == 0)) {
        FUN_1431cefae(lVar11,1);
        iVar9 = *(int *)(lVar10 + 0x6c);
      }
      uVar8 = *(undefined4 *)(lVar11 + 0x68);
      if ((*(longlong *)(lVar10 + 0x78) != 0) &&
         ((*(byte *)(*(longlong *)(lVar10 + 0x78) + 0x10) & 1) == 0)) {
        FUN_1431cefae(lVar10,1);
      }
      (*DAT_14ca7f928)(*(undefined4 *)(lVar10 + 0x68),iVar9,iVar1 + uVar15,iVar3 >> (bVar13 & 0x1f),
                       iVar4 >> (bVar13 & 0x1f),iVar17,uVar8,iVar5,iVar2 + uVar15,
                       iVar6 >> (bVar13 & 0x1f),iVar7 >> (bVar13 & 0x1f),iVar14,iVar18,iVar19,iVar16
                      );
      iVar18 = iVar18 >> 1;
      if (iVar18 < 2) {
        iVar18 = 1;
      }
      iVar19 = iVar19 >> 1;
      if (iVar19 < 2) {
        iVar19 = 1;
      }
      iVar9 = iVar16 >> 1;
      if (iVar9 < 2) {
        iVar9 = 1;
      }
      if (*(int *)(lVar11 + 0x6c) == 0x806f) {
        iVar16 = iVar9;
      }
      uVar15 = uVar15 + 1;
    } while (uVar15 < (uint)param_4[0xe]);
  }
  return;
}



// FUNCTION 1473fc940 FUN_1473fc940 body=444 status=ok
// SIG undefined FUN_1473fc940(void)

void FUN_1473fc940(undefined8 param_1,longlong *param_2,undefined1 param_3,undefined4 param_4,
                  undefined4 param_5,undefined1 param_6,undefined1 param_7,undefined8 param_8,
                  undefined4 *param_9,undefined4 param_10,undefined8 param_11)

{
  undefined4 uVar1;
  longlong lVar2;
  uint uVar3;
  undefined1 auStack_148 [40];
  longlong *local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined4 local_100;
  uint local_fc;
  undefined4 local_f8;
  undefined8 local_f4;
  undefined4 local_ec;
  undefined1 local_e8;
  undefined1 local_e7;
  undefined1 local_e6;
  undefined1 local_e5;
  undefined2 local_e4;
  undefined8 local_e0;
  wchar_t *pwStack_d8;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined8 local_c0;
  undefined1 local_b8 [16];
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  uint local_8c;
  undefined4 local_88;
  undefined8 local_84;
  undefined4 local_7c;
  undefined1 local_78;
  undefined1 local_77;
  undefined1 local_76;
  undefined1 local_75;
  undefined2 local_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  wchar_t *pwStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  uVar3 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  uStack_58 = 0;
  uStack_50 = 0;
  uVar1 = *param_9;
  uStack_9c = param_9[1];
  uStack_98 = param_9[2];
  uStack_94 = param_9[3];
  uStack_90 = param_9[4];
  local_120 = param_2;
  local_70 = FUN_1431edf91(param_11,0);
  local_76 = 0;
  local_a8 = param_11;
  local_74 = 0xff00;
  local_7c = 0x10001;
  local_78 = param_6;
  local_77 = param_7;
  local_88 = 0;
  pwStack_68 = L"RHICreateTexture2DFromResource";
  local_60 = 0;
  local_a0 = uVar1;
  local_8c = uVar3;
  local_84 = CONCAT44(param_5,param_4);
  local_75 = param_3;
  lVar2 = FUN_14001cc68(0xb8,0x10);
  local_e6 = 0;
  local_118 = param_11;
  local_e4 = 0xff00;
  local_ec = 0x10001;
  local_e8 = param_6;
  local_e7 = param_7;
  local_110 = CONCAT44(uStack_9c,local_a0);
  uStack_108 = CONCAT44(uStack_94,uStack_98);
  local_100 = uStack_90;
  local_f8 = 0;
  local_e0 = CONCAT44(uStack_6c,local_70);
  pwStack_d8 = pwStack_68;
  local_d0 = (undefined4)local_60;
  uStack_cc = local_60._4_4_;
  uStack_c8 = (undefined4)uStack_58;
  uStack_c4 = uStack_58._4_4_;
  local_c0 = uStack_50;
  local_fc = uVar3;
  local_f4 = CONCAT44(param_5,param_4);
  local_e5 = param_3;
  FUN_1431cecec(local_b8,&local_a8);
  FUN_1473fa2e2(lVar2,&local_118,param_10);
  *local_120 = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  if ((local_48 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473fcafe FUN_1473fcafe body=473 status=ok
// SIG undefined FUN_1473fcafe(void)

void FUN_1473fcafe(undefined8 param_1,longlong *param_2,undefined1 param_3,undefined4 param_4,
                  undefined4 param_5,undefined2 param_6,undefined1 param_7,undefined1 param_8,
                  undefined8 param_9,undefined4 *param_10,undefined4 param_11,undefined8 param_12)

{
  undefined4 uVar1;
  longlong lVar2;
  uint uVar3;
  undefined1 auStack_148 [40];
  longlong *local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined4 local_100;
  uint local_fc;
  undefined4 local_f8;
  undefined8 local_f4;
  undefined2 local_ec;
  undefined2 local_ea;
  undefined1 local_e8;
  undefined1 local_e7;
  undefined1 local_e6;
  undefined1 local_e5;
  undefined2 local_e4;
  undefined8 local_e0;
  wchar_t *pwStack_d8;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined8 local_c0;
  undefined1 local_b8 [16];
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  uint local_8c;
  undefined4 local_88;
  undefined8 local_84;
  undefined2 local_7c;
  undefined2 local_7a;
  undefined1 local_78;
  undefined1 local_77;
  undefined1 local_76;
  undefined1 local_75;
  undefined2 local_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  wchar_t *pwStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  uVar3 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  uStack_58 = 0;
  uStack_50 = 0;
  uVar1 = *param_10;
  uStack_9c = param_10[1];
  uStack_98 = param_10[2];
  uStack_94 = param_10[3];
  uStack_90 = param_10[4];
  local_120 = param_2;
  local_70 = FUN_1431edf91(param_12,0);
  local_76 = 1;
  local_a8 = param_12;
  local_74 = 0xff00;
  local_7c = 1;
  local_7a = param_6;
  local_78 = param_7;
  local_77 = param_8;
  local_88 = 0;
  pwStack_68 = L"RHICreateTexture2DArrayFromResource";
  local_60 = 0;
  local_a0 = uVar1;
  local_8c = uVar3;
  local_84 = CONCAT44(param_5,param_4);
  local_75 = param_3;
  lVar2 = FUN_14001cc68(0xb8,0x10);
  local_e6 = 1;
  local_118 = param_12;
  local_e4 = 0xff00;
  local_ec = 1;
  local_ea = param_6;
  local_e8 = param_7;
  local_e7 = param_8;
  local_110 = CONCAT44(uStack_9c,local_a0);
  uStack_108 = CONCAT44(uStack_94,uStack_98);
  local_100 = uStack_90;
  local_f8 = 0;
  local_e0 = CONCAT44(uStack_6c,local_70);
  pwStack_d8 = pwStack_68;
  local_d0 = (undefined4)local_60;
  uStack_cc = local_60._4_4_;
  uStack_c8 = (undefined4)uStack_58;
  uStack_c4 = uStack_58._4_4_;
  local_c0 = uStack_50;
  local_fc = uVar3;
  local_f4 = CONCAT44(param_5,param_4);
  local_e5 = param_3;
  FUN_1431cecec(local_b8,&local_a8);
  FUN_1473fa2e2(lVar2,&local_118,param_11);
  *local_120 = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  if ((local_48 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473fccd8 FUN_1473fccd8 body=496 status=ok
// SIG undefined FUN_1473fccd8(void)

void FUN_1473fccd8(undefined8 param_1,longlong *param_2,undefined1 param_3,undefined4 param_4,
                  char param_5,undefined2 param_6,undefined1 param_7,undefined1 param_8,
                  undefined8 param_9,undefined4 *param_10,undefined4 param_11,undefined8 param_12)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined2 uVar5;
  uint uVar6;
  undefined1 auStack_158 [32];
  longlong *local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined4 local_118;
  uint local_114;
  undefined4 local_110;
  undefined8 local_10c;
  undefined2 local_104;
  undefined2 local_102;
  undefined1 local_100;
  undefined1 local_ff;
  char local_fe;
  undefined1 local_fd;
  undefined2 local_fc;
  undefined8 local_f8;
  wchar_t *pwStack_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined1 local_d0 [16];
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  uint local_a4;
  undefined4 local_a0;
  undefined8 local_9c;
  undefined2 local_94;
  undefined2 local_92;
  undefined1 local_90;
  undefined1 local_8f;
  char local_8e;
  undefined1 local_8d;
  undefined2 local_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  wchar_t *pwStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_158;
  uVar6 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  uVar5 = 1;
  if (param_5 != '\0') {
    uVar5 = param_6;
  }
  uVar1 = *param_10;
  uVar2 = *(undefined8 *)(param_10 + 1);
  uVar3 = *(undefined8 *)(param_10 + 3);
  local_138 = param_2;
  local_88 = FUN_1431edf91(param_12,0);
  local_c0 = param_12;
  local_8c = 0xff00;
  local_94 = 1;
  local_90 = param_7;
  local_8f = param_8;
  uStack_b4 = (undefined4)uVar2;
  uStack_b0 = (undefined4)((ulonglong)uVar2 >> 0x20);
  uStack_ac = (undefined4)uVar3;
  uStack_a8 = (undefined4)((ulonglong)uVar3 >> 0x20);
  local_a0 = 0;
  pwStack_80 = L"RHICreateTextureCubeFromResource";
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  local_b8 = uVar1;
  local_a4 = uVar6;
  local_9c = CONCAT44(param_4,param_4);
  local_92 = uVar5;
  local_8e = '\x04' - param_5;
  local_8d = param_3;
  lVar4 = FUN_14001cc68(0xb8,0x10);
  local_130 = param_12;
  local_fc = 0xff00;
  local_104 = 1;
  local_100 = param_7;
  local_ff = param_8;
  local_128 = CONCAT44(uStack_b4,local_b8);
  uStack_120 = CONCAT44(uStack_ac,uStack_b0);
  local_118 = uStack_a8;
  local_110 = 0;
  local_f8 = CONCAT44(uStack_84,local_88);
  pwStack_f0 = pwStack_80;
  local_e8 = (undefined4)local_78;
  uStack_e4 = local_78._4_4_;
  uStack_e0 = (undefined4)uStack_70;
  uStack_dc = uStack_70._4_4_;
  local_d8 = local_68;
  local_114 = uVar6;
  local_10c = CONCAT44(param_4,param_4);
  local_102 = uVar5;
  local_fe = '\x04' - param_5;
  local_fd = param_3;
  FUN_1431cecec(local_d0,&local_c0);
  FUN_1473fa2e2(lVar4,&local_130,param_11);
  *local_138 = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  if ((local_60 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473fceca FUN_1473fceca body=101 status=ok
// SIG undefined FUN_1473fceca(void)

void FUN_1473fceca(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((longlong *)*param_2 == (longlong *)0x0) {
    lVar1 = 0;
  }
  else {
    lVar1 = (**(code **)(*(longlong *)*param_2 + 0x30))();
  }
  if ((longlong *)*param_3 != (longlong *)0x0) {
    lVar2 = (**(code **)(*(longlong *)*param_3 + 0x30))();
    if (lVar2 != 0 && lVar1 != 0) {
      if ((*(longlong *)(lVar2 + 0x78) != 0) &&
         ((*(byte *)(*(longlong *)(lVar2 + 0x78) + 0x10) & 1) == 0)) {
        FUN_1431cefae(lVar2,0);
      }
      *(undefined4 *)(lVar1 + 0x68) = *(undefined4 *)(lVar2 + 0x68);
    }
  }
  return;
}



// FUNCTION 1473fcf30 FUN_1473fcf30 body=247 status=ok
// SIG undefined FUN_1473fcf30(void)

longlong * FUN_1473fcf30(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong local_40 [2];
  undefined2 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *(undefined8 *)(*param_3 + 0x10);
  FUN_1400021e4(&local_48,local_40);
  FUN_144a882a8(&local_30,local_40,L"Alias");
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  lVar1 = FUN_14001cc68(0xb8,0x10);
  puVar3 = local_30;
  if (local_28 == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  FUN_140056680(local_40,puVar3);
  if ((longlong *)*param_3 == (longlong *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (**(code **)(*(longlong *)*param_3 + 0x30))();
  }
  FUN_1473fa088(lVar1,uVar2,local_40);
  *param_2 = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  if (local_30 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1473fd028 FUN_1473fd028 body=686 status=ok
// SIG undefined FUN_1473fd028(void)

void FUN_1473fd028(longlong param_1,ulonglong *param_2,longlong *param_3,int param_4,
                  undefined1 param_5)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  longlong *_Dst;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  ulonglong uVar7;
  int iVar8;
  undefined4 in_R11D;
  undefined4 uVar9;
  int iVar10;
  longlong *plVar11;
  undefined1 auStack_b8 [39];
  undefined1 local_91;
  undefined4 local_90;
  int local_8c;
  longlong local_88;
  longlong *plStack_80;
  longlong local_78;
  int iStack_70;
  undefined4 uStack_6c;
  int local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong *local_58;
  int iStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar2 = *(uint *)(param_1 + 0x153a0);
  if (0 < (int)uVar2) {
    plVar5 = (longlong *)(param_1 + 0x15118);
    if (*(longlong **)(param_1 + 0x15398) != (longlong *)0x0) {
      plVar5 = *(longlong **)(param_1 + 0x15398);
    }
    uVar7 = 0;
    _Dst = plVar5;
    do {
      plVar11 = (longlong *)*_Dst;
      if (((plVar11 == param_3) && ((int)_Dst[2] == param_4)) &&
         (*(int *)((longlong)_Dst + 0x14) == 0)) {
        lVar6 = _Dst[1];
        iVar10 = (int)_Dst[3];
        uVar9 = *(undefined4 *)((longlong)_Dst + 0x1c);
        local_8c = (int)_Dst[4];
        in_R11D = *(undefined4 *)((longlong)_Dst + 0x24);
        if (uVar2 - 1 != (int)uVar7) {
          iVar8 = (uVar2 - 1) - (int)uVar7;
          iVar1 = 1;
          if (iVar8 < 1) {
            iVar1 = iVar8;
          }
          local_91 = param_5;
          local_90 = *(undefined4 *)((longlong)_Dst + 0x24);
          memmove(_Dst,plVar5 + (ulonglong)(uVar2 - iVar1) * 5,(longlong)iVar1 * 0x28);
          uVar2 = *(uint *)(param_1 + 0x153a0);
          in_R11D = local_90;
          param_5 = local_91;
        }
        *(uint *)(param_1 + 0x153a0) = uVar2 - 1;
        *(int *)(param_1 + 0x153a8) = *(int *)(param_1 + 0x153a8) - iVar10;
        iVar1 = param_4;
        if (local_8c == 1) goto LAB_1473fd0b0;
        *(undefined4 *)(param_1 + 0x153a8) = 0;
        if (*(char *)((longlong)param_2 + 100) == '\x01') {
          if (param_3 != (longlong *)0x0) {
            (**(code **)(*param_3 + 0x30))(param_3);
          }
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_b8);
        }
        puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar4 = puVar3 + 5;
        if ((undefined8 *)param_2[1] < puVar4) {
          FUN_140023dd8(param_2,0x30);
          puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar4 = puVar3 + 5;
        }
        *param_2 = (ulonglong)puVar4;
        *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
        *(undefined8 **)param_2[6] = puVar3;
        param_2[6] = (ulonglong)(puVar3 + 1);
        puVar3[1] = 0;
        *puVar3 = &PTR_FUN_14a374b58;
        puVar3[2] = param_1;
        puVar3[3] = param_3;
        *(int *)(puVar3 + 4) = param_4;
        *(undefined1 *)((longlong)puVar3 + 0x24) = param_5;
        goto LAB_1473fd17e;
      }
      uVar7 = uVar7 + 1;
      _Dst = _Dst + 5;
    } while (uVar2 != uVar7);
  }
  uVar9 = 0;
  iVar10 = 0;
  plVar11 = (longlong *)0x0;
  lVar6 = 0;
  iVar1 = 0;
LAB_1473fd0b0:
  uStack_6c = 0;
  uStack_60 = 1;
  uStack_4c = CONCAT31(uStack_4c._1_3_,param_5);
  local_88 = param_1;
  plStack_80 = plVar11;
  local_78 = lVar6;
  iStack_70 = iVar1;
  local_68 = iVar10;
  uStack_64 = uVar9;
  uStack_5c = in_R11D;
  local_58 = param_3;
  iStack_50 = param_4;
  if (*(char *)((longlong)param_2 + 100) == '\x01') {
    FUN_1431d61e8(&local_88);
  }
  else {
    puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar3 + 10;
    if ((undefined8 *)param_2[1] < puVar4) {
      FUN_140023dd8(param_2,0x58);
      puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar4 = puVar3 + 10;
    }
    *param_2 = (ulonglong)puVar4;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar3;
    param_2[6] = (ulonglong)(puVar3 + 1);
    puVar3[1] = 0;
    *puVar3 = &PTR_FUN_14a374b60;
    puVar3[2] = local_88;
    puVar3[3] = plStack_80;
    puVar3[4] = local_78;
    puVar3[5] = CONCAT44(uStack_6c,iStack_70);
    puVar3[6] = CONCAT44(uStack_64,local_68);
    puVar3[7] = CONCAT44(uStack_5c,uStack_60);
    puVar3[8] = local_58;
    puVar3[9] = CONCAT44(uStack_4c,iStack_50);
  }
LAB_1473fd17e:
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1473fd2f4 FUN_1473fd2f4 body=760 status=ok
// SIG undefined FUN_1473fd2f4(void)

void FUN_1473fd2f4(longlong param_1,ulonglong *param_2,longlong *param_3,undefined8 param_4,
                  int param_5,int param_6,undefined1 param_7)

{
  uint uVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong *_Dst;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong *plVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined4 uVar10;
  longlong *plVar11;
  int iVar12;
  undefined1 auStack_d8 [47];
  undefined1 local_a9;
  int local_a8;
  undefined4 local_a4;
  undefined8 local_a0;
  ulonglong local_98;
  longlong local_90;
  longlong *local_88;
  longlong local_80;
  int local_78;
  int local_74;
  int local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  longlong *local_60;
  undefined4 local_58;
  int local_54;
  int local_50;
  undefined1 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar1 = *(uint *)(param_1 + 0x153a0);
  plVar11 = param_3;
  if (0 < (int)uVar1) {
    plVar5 = (longlong *)(param_1 + 0x15118);
    if (*(longlong **)(param_1 + 0x15398) != (longlong *)0x0) {
      plVar5 = *(longlong **)(param_1 + 0x15398);
    }
    plVar11 = (longlong *)0x0;
    _Dst = plVar5;
    do {
      plVar7 = (longlong *)*_Dst;
      if (((plVar7 == param_3) && ((int)_Dst[2] == param_6)) &&
         (*(int *)((longlong)_Dst + 0x14) == param_5)) {
        lVar4 = _Dst[1];
        iVar8 = (int)_Dst[3];
        local_98 = (ulonglong)*(uint *)((longlong)_Dst + 0x1c);
        local_a8 = (int)_Dst[4];
        local_a4 = *(undefined4 *)((longlong)_Dst + 0x24);
        if (uVar1 - 1 != (int)plVar11) {
          iVar12 = (uVar1 - 1) - (int)plVar11;
          iVar3 = 1;
          if (iVar12 < 1) {
            iVar3 = iVar12;
          }
          local_a9 = param_7;
          local_a0 = param_4;
          memmove(_Dst,plVar5 + (ulonglong)(uVar1 - iVar3) * 5,(longlong)iVar3 * 0x28);
          uVar1 = *(uint *)(param_1 + 0x153a0);
          param_4 = local_a0;
          param_7 = local_a9;
        }
        *(uint *)(param_1 + 0x153a0) = uVar1 - 1;
        *(int *)(param_1 + 0x153a8) = *(int *)(param_1 + 0x153a8) - iVar8;
        uVar6 = local_98;
        iVar3 = param_6;
        iVar12 = param_5;
        uVar10 = local_a4;
        if (local_a8 == 1) goto LAB_1473fd38e;
        *(undefined4 *)(param_1 + 0x153a8) = 0;
        if (*(char *)((longlong)param_2 + 100) == '\x01') {
          if (param_3 != (longlong *)0x0) {
            (**(code **)(*param_3 + 0x30))(param_3);
          }
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_d8);
        }
        puVar9 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar2 = puVar9 + 6;
        if ((undefined8 *)param_2[1] < puVar2) {
          FUN_140023dd8(param_2,0x38);
          puVar9 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar2 = puVar9 + 6;
        }
        *param_2 = (ulonglong)puVar2;
        *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
        *(undefined8 **)param_2[6] = puVar9;
        param_2[6] = (ulonglong)(puVar9 + 1);
        puVar9[1] = 0;
        *puVar9 = &PTR_FUN_14a374b70;
        puVar9[2] = param_1;
        puVar9[3] = param_3;
        *(int *)(puVar9 + 4) = (int)param_4;
        *(int *)((longlong)puVar9 + 0x24) = param_5;
        *(int *)(puVar9 + 5) = param_6;
        *(undefined1 *)((longlong)puVar9 + 0x2c) = param_7;
        goto LAB_1473fd459;
      }
      plVar11 = (longlong *)((longlong)plVar11 + 1);
      _Dst = _Dst + 5;
    } while ((longlong *)(ulonglong)uVar1 != plVar11);
  }
  iVar8 = 0;
  plVar7 = (longlong *)0x0;
  lVar4 = 0;
  uVar6 = 0;
  iVar3 = 0;
  iVar12 = 0;
  uVar10 = (int)plVar11;
LAB_1473fd38e:
  local_90 = param_1;
  local_88 = plVar7;
  local_80 = lVar4;
  local_78 = iVar3;
  local_74 = iVar12;
  local_70 = iVar8;
  local_6c = (int)uVar6;
  local_68 = 1;
  local_64 = uVar10;
  local_60 = param_3;
  local_58 = (int)param_4;
  local_54 = param_5;
  local_50 = param_6;
  local_4c = param_7;
  if (*(char *)((longlong)param_2 + 100) == '\x01') {
    FUN_1431d63d0(&local_90);
  }
  else {
    puVar9 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar2 = puVar9 + 0xb;
    if ((undefined8 *)param_2[1] < puVar2) {
      FUN_140023dd8(param_2,0x60);
      puVar9 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar2 = puVar9 + 0xb;
    }
    *param_2 = (ulonglong)puVar2;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar9;
    param_2[6] = (ulonglong)(puVar9 + 1);
    puVar9[1] = 0;
    *puVar9 = &PTR_FUN_14a374b78;
    plVar11 = &local_90;
    plVar5 = puVar9 + 2;
    for (lVar4 = 9; lVar4 != 0; lVar4 = lVar4 + -1) {
      *plVar5 = *plVar11;
      plVar11 = plVar11 + 1;
      plVar5 = plVar5 + 1;
    }
  }
LAB_1473fd459:
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1473fd60e FUN_1473fd60e body=701 status=ok
// SIG undefined FUN_1473fd60e(void)

void FUN_1473fd60e(longlong param_1,ulonglong *param_2,longlong *param_3,int param_4,int param_5,
                  undefined1 param_6)

{
  uint uVar1;
  undefined8 *puVar2;
  int iVar3;
  ulonglong *_Dst;
  longlong lVar4;
  undefined4 uVar5;
  ulonglong *puVar6;
  int iVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  ulonglong uVar11;
  int iVar12;
  uint uVar13;
  ulonglong uVar14;
  undefined1 auStack_c8 [39];
  undefined1 local_a1;
  int local_a0;
  undefined4 local_9c;
  ulonglong local_98;
  longlong local_90;
  longlong *local_88;
  ulonglong local_80;
  int local_78;
  int local_74;
  int local_70;
  uint local_6c;
  undefined4 local_68;
  undefined4 local_64;
  longlong *local_60;
  int local_58;
  int local_54;
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar1 = *(uint *)(param_1 + 0x153a0);
  puVar6 = param_2;
  if (0 < (int)uVar1) {
    puVar6 = (ulonglong *)(param_1 + 0x15118);
    if (*(ulonglong **)(param_1 + 0x15398) != (ulonglong *)0x0) {
      puVar6 = *(ulonglong **)(param_1 + 0x15398);
    }
    uVar11 = 0;
    _Dst = puVar6;
    do {
      plVar8 = (longlong *)*_Dst;
      if (((plVar8 == param_3) && ((int)_Dst[2] == param_5)) &&
         (*(int *)((longlong)_Dst + 0x14) == param_4)) {
        uVar14 = _Dst[1];
        iVar7 = (int)_Dst[3];
        uVar13 = *(uint *)((longlong)_Dst + 0x1c);
        local_a0 = (int)_Dst[4];
        local_9c = *(undefined4 *)((longlong)_Dst + 0x24);
        if (uVar1 - 1 != (int)uVar11) {
          iVar12 = (uVar1 - 1) - (int)uVar11;
          iVar3 = 1;
          if (iVar12 < 1) {
            iVar3 = iVar12;
          }
          local_a1 = param_6;
          local_98 = (ulonglong)uVar13;
          memmove(_Dst,puVar6 + (ulonglong)(uVar1 - iVar3) * 5,(longlong)iVar3 * 0x28);
          uVar13 = (uint)local_98;
          uVar1 = *(uint *)(param_1 + 0x153a0);
          param_6 = local_a1;
        }
        *(uint *)(param_1 + 0x153a0) = uVar1 - 1;
        *(int *)(param_1 + 0x153a8) = *(int *)(param_1 + 0x153a8) - iVar7;
        iVar3 = param_5;
        iVar12 = param_4;
        uVar5 = local_9c;
        if (local_a0 == 1) goto LAB_1473fd6a4;
        *(undefined4 *)(param_1 + 0x153a8) = 0;
        if (*(char *)((longlong)param_2 + 100) == '\x01') {
          if (param_3 != (longlong *)0x0) {
            (**(code **)(*param_3 + 0x30))(param_3);
          }
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_c8);
        }
        puVar9 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar2 = puVar9 + 6;
        if ((undefined8 *)param_2[1] < puVar2) {
          FUN_140023dd8(param_2,0x38);
          puVar9 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar2 = puVar9 + 6;
        }
        *param_2 = (ulonglong)puVar2;
        *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
        *(undefined8 **)param_2[6] = puVar9;
        param_2[6] = (ulonglong)(puVar9 + 1);
        puVar9[1] = 0;
        *puVar9 = &PTR_FUN_14a374b88;
        puVar9[2] = param_1;
        puVar9[3] = param_3;
        *(int *)(puVar9 + 4) = param_4;
        *(int *)((longlong)puVar9 + 0x24) = param_5;
        *(undefined1 *)(puVar9 + 5) = param_6;
        goto LAB_1473fd75d;
      }
      uVar11 = uVar11 + 1;
      _Dst = _Dst + 5;
    } while (uVar1 != uVar11);
  }
  uVar13 = 0;
  iVar7 = 0;
  plVar8 = (longlong *)0x0;
  uVar14 = 0;
  iVar3 = 0;
  iVar12 = 0;
  uVar5 = (int)puVar6;
LAB_1473fd6a4:
  local_90 = param_1;
  local_88 = plVar8;
  local_80 = uVar14;
  local_78 = iVar3;
  local_74 = iVar12;
  local_70 = iVar7;
  local_6c = uVar13;
  local_68 = 1;
  local_64 = uVar5;
  local_60 = param_3;
  local_58 = param_4;
  local_54 = param_5;
  local_50 = param_6;
  if (*(char *)((longlong)param_2 + 100) == '\x01') {
    FUN_1431d65da(&local_90);
  }
  else {
    puVar9 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar2 = puVar9 + 0xb;
    if ((undefined8 *)param_2[1] < puVar2) {
      FUN_140023dd8(param_2,0x60);
      puVar9 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar2 = puVar9 + 0xb;
    }
    *param_2 = (ulonglong)puVar2;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar9;
    param_2[6] = (ulonglong)(puVar9 + 1);
    puVar9[1] = 0;
    *puVar9 = &PTR_FUN_14a374b90;
    plVar8 = &local_90;
    plVar10 = puVar9 + 2;
    for (lVar4 = 9; lVar4 != 0; lVar4 = lVar4 + -1) {
      *plVar10 = *plVar8;
      plVar8 = plVar8 + 1;
      plVar10 = plVar10 + 1;
    }
  }
LAB_1473fd75d:
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1473fd8ec FUN_1473fd8ec body=486 status=ok
// SIG undefined FUN_1473fd8ec(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1473fd8ec(LPCRITICAL_SECTION param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  
  EnterCriticalSection(param_1);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca7fb10) && (FUN_144b3d300(&DAT_14ca7fb10), DAT_14ca7fb10 == -1)) {
    DAT_14ca7fac8 = 0;
    _DAT_14ca7fad0 = 0;
    DAT_14ca7faa8 = 0;
    _DAT_14ca7fab0 = 0;
    _DAT_14ca7fad4 = 0xffffffff00000080;
    DAT_14ca7fadc = 0;
    DAT_14ca7fae8 = 0;
    DAT_14ca7faf0 = 0;
    DAT_14ca7faf8 = (undefined8 *)0x0;
    DAT_14ca7fb00 = (undefined8 *)0x0;
    DAT_14ca7fb08 = 10000;
    FUN_147400fb2(&DAT_14ca7faa8,10000);
    atexit((_func_5014 *)&LAB_1431d56d4);
    _Init_thread_footer(&DAT_14ca7fb10);
  }
  iVar6 = DAT_14ca7c4d0;
  if (DAT_14ca7c4d0 < 1) {
    iVar6 = 0;
  }
  if (iVar6 < DAT_14ca7fab0 - DAT_14ca7fadc) {
    iVar6 = 0;
    do {
      puVar3 = DAT_14ca7faf8;
      lVar1 = DAT_14ca7faf8[3];
      lVar4 = *(longlong *)(lVar1 + 0x78);
      if ((DAT_14c7590b0 <= (uint)(DAT_14c760d38 + *(int *)(lVar4 + 0x18))) ||
         (DAT_14c760d3c <= iVar6)) break;
      if (DAT_14ca7faf8 != (undefined8 *)0x0) {
        FUN_147402a9a(&DAT_14ca7faa8,*DAT_14ca7faf8);
        if (DAT_14ca7faf8 == puVar3) {
          DAT_14ca7faf8 = (undefined8 *)puVar3[2];
        }
        puVar2 = (undefined8 *)puVar3[1];
        if (DAT_14ca7fb00 == puVar3) {
          DAT_14ca7fb00 = puVar2;
        }
        lVar4 = puVar3[2];
        if (puVar2 != (undefined8 *)0x0) {
          puVar2[2] = lVar4;
        }
        if (lVar4 != 0) {
          *(undefined8 *)(lVar4 + 8) = puVar3[1];
        }
        FUN_1400020a8(puVar3);
        lVar4 = *(longlong *)(lVar1 + 0x78);
      }
      *(undefined4 *)(lVar4 + 0x14) = 0xffffffff;
      FUN_1431cff68(lVar1);
      iVar6 = iVar6 + 1;
      iVar5 = DAT_14ca7c4d0;
      if (DAT_14ca7c4d0 < 1) {
        iVar5 = 0;
      }
    } while (iVar5 < DAT_14ca7fab0 - DAT_14ca7fadc);
  }
  if (param_1 == (LPCRITICAL_SECTION)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001473fda28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(param_1);
  return;
}



// FUNCTION 1473fdad2 FUN_1473fdad2 body=263 status=ok
// SIG undefined FUN_1473fdad2(void)

void FUN_1473fdad2(ulonglong *param_1)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  ulonglong *puVar5;
  uint uVar6;
  undefined *puVar7;
  
  if (DAT_14ca7fab0 != DAT_14ca7fadc) {
    uVar3 = *param_1;
    uVar6 = ((uint)(uVar3 >> 0x14) & 0xffff ^ (uint)(uVar3 >> 4)) * -0x7a143595;
    uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
    puVar7 = &DAT_14ca7fae0;
    if (DAT_14ca7fae8 != (undefined *)0x0) {
      puVar7 = DAT_14ca7fae8;
    }
    iVar2 = *(int *)(puVar7 + (ulonglong)(DAT_14ca7faf0 - 1U & (uVar6 >> 0x10 ^ uVar6)) * 4);
    while (iVar2 != -1) {
      lVar1 = DAT_14ca7faa8 + (longlong)iVar2 * 0x10;
      puVar4 = *(ulonglong **)(DAT_14ca7faa8 + (longlong)iVar2 * 0x10);
      if (*puVar4 == uVar3) {
        if (puVar4 == (ulonglong *)0x0 || lVar1 == 0) {
          return;
        }
        FUN_147402a9a(&DAT_14ca7faa8);
        if (DAT_14ca7faf8 == puVar4) {
          DAT_14ca7faf8 = (ulonglong *)puVar4[2];
        }
        puVar5 = (ulonglong *)puVar4[1];
        if (DAT_14ca7fb00 == puVar4) {
          DAT_14ca7fb00 = puVar5;
        }
        uVar3 = puVar4[2];
        if (puVar5 != (ulonglong *)0x0) {
          puVar5[2] = uVar3;
        }
        if (uVar3 != 0) {
          *(ulonglong *)(uVar3 + 8) = puVar4[1];
        }
        FUN_1400020a8(puVar4);
        return;
      }
      iVar2 = *(int *)(lVar1 + 8);
    }
  }
  return;
}



// FUNCTION 1473fdbda FUN_1473fdbda body=162 status=ok
// SIG undefined FUN_1473fdbda(void)

undefined8 FUN_1473fdbda(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = (undefined8 *)FUN_14001cc68(0x20,0x10);
  *local_28 = *param_2;
  local_28[2] = 0;
  local_28[3] = *param_3;
  local_28[1] = DAT_14ca7fb00;
  if (DAT_14ca7fb00 != (undefined8 *)0x0) {
    *(undefined8 **)((longlong)DAT_14ca7fb00 + 0x10) = local_28;
  }
  if (DAT_14ca7faf8 == (undefined8 *)0x0) {
    DAT_14ca7faf8 = local_28;
  }
  DAT_14ca7fb00 = local_28;
  FUN_147402c04(param_1,&local_28);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473fdc7e FUN_1473fdc7e body=64 status=ok
// SIG undefined FUN_1473fdc7e(void)

undefined8 * FUN_1473fdc7e(undefined8 *param_1,int param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) & 0xfe;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0xffffffff;
  if (param_2 != 0) {
    FUN_146b27f1e(param_1,param_2);
  }
  FUN_1473fdcbe(param_1,param_2);
  return param_1;
}



// FUNCTION 1473fdcbe FUN_1473fdcbe body=119 status=ok
// SIG undefined FUN_1473fdcbe(void)

void FUN_1473fdcbe(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146b28064(param_1);
    }
    memset((void *)((longlong)iVar1 * 0x10 + *param_1),0,(longlong)(param_2 - iVar1) << 4);
    return;
  }
  if (iVar1 <= param_2) {
    return;
  }
  FUN_147402efc(param_1,param_2,iVar1 - param_2);
  FUN_147402f5c(param_1);
  return;
}



// FUNCTION 1473fdd36 FUN_1473fdd36 body=274 status=ok
// SIG undefined FUN_1473fdd36(void)

undefined8 *
FUN_1473fdd36(undefined8 *param_1,ulonglong *param_2,longlong param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_48 [40];
  undefined8 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined1 *)((longlong)param_1 + 0xc) = 0x20;
  *(byte *)((longlong)param_1 + 0xd) = *(byte *)((longlong)param_1 + 0xd) | 3;
  *param_1 = &PTR_FUN_14a1e49d0;
  param_1[2] = param_3;
  if (param_3 != 0) {
    LOCK();
    *(int *)(param_3 + 8) = *(int *)(param_3 + 8) + 1;
    UNLOCK();
  }
  uVar1 = param_4[1];
  param_1[3] = *param_4;
  param_1[4] = uVar1;
  param_1[6] = 0;
  param_1[7] = 0;
  *param_1 = &PTR_FUN_14a372750;
  param_1[5] = &PTR_FUN_14a372760;
  param_1[8] = 0x8c2a00000000;
  *(undefined4 *)(param_1 + 9) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x4c) = 0;
  local_20 = param_1;
  if (*(char *)((longlong)param_2 + 100) == '\x01') {
    FUN_1431d6736(&local_20);
  }
  else {
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar2 + 3;
    if ((undefined8 *)param_2[1] < puVar3) {
      FUN_140023dd8(param_2,0x20);
      puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar3 = puVar2 + 3;
    }
    *param_2 = (ulonglong)puVar3;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar2;
    param_2[6] = (ulonglong)(puVar2 + 1);
    puVar2[1] = 0;
    *puVar2 = &PTR_FUN_14a374b98;
    puVar2[2] = param_1;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473fde4a FUN_1473fde4a body=917 status=ok
// SIG undefined FUN_1473fde4a(void)

void FUN_1473fde4a(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  HGLRC pHVar4;
  int *_Dst;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  undefined4 local_60;
  uint local_58;
  int local_4c;
  char local_47;
  undefined4 local_44;
  char local_3c;
  byte local_3b;
  char local_3a;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1473fe1e0(param_1 + -0x28);
  plVar2 = *(longlong **)(param_1 + -0x18);
  if (*(byte *)(param_1 + -0x10) < 2) {
    FUN_144b1c3c6(param_1 + -0x10,&local_4c,plVar2);
    if (local_3a == '\0') {
      if ((local_3c == '\x04') || (local_3c == '\x02')) {
        *(undefined4 *)(param_1 + 0x1c) = 0x90d2;
        *(int *)(param_1 + 0x18) = (int)plVar2[7];
      }
      else if (local_3c == '\x01') {
        *(undefined4 *)(param_1 + 0x1c) = 0x8c2a;
        *(undefined1 *)(param_1 + 0x24) = 1;
        uVar6 = DAT_14c760d24;
        _Dst = (int *)(param_1 + 0x18);
        lVar7 = (longlong)(int)DAT_14c760d24;
        if (lVar7 < 0x3ff) {
          iVar1 = *(int *)(&DAT_14ca7a3e0 + lVar7 * 4);
          *_Dst = iVar1;
          uVar6 = DAT_14c760d24 + 1;
        }
        else {
          iVar1 = 0x400 - DAT_14c760d24;
          memcpy(_Dst,&DAT_14ca7a3e0 + lVar7 * 4,(longlong)iVar1 * 4);
          (*DAT_14ca7fb68)(0x400,&DAT_14ca7a3e0);
          uVar6 = uVar6 - 0x3ff;
          memcpy(_Dst + iVar1,&DAT_14ca7a3e0,(ulonglong)uVar6 * 4);
          iVar1 = *_Dst;
        }
        lVar8 = DAT_14ca7a3c8;
        uVar5 = (longlong)DAT_14c760d20 - 1;
        lVar7 = *(longlong *)(DAT_14ca7a3c8 + 0x14fa0);
        DAT_14c760d24 = uVar6;
        if (lVar7 == 0) {
          lVar3 = *(longlong *)(DAT_14ca7a3c8 + 0x15008);
          pHVar4 = wglGetCurrentContext();
          lVar7 = lVar8 + 0x14200;
          if (pHVar4 == *(HGLRC *)(lVar3 + 0x40)) {
            lVar7 = lVar8 + 0x148d0;
          }
          *(longlong *)(lVar8 + 0x14fa0) = lVar7;
        }
        if ((*(int *)(*(longlong *)(lVar7 + 8) + 0x10 + uVar5 * 0x28) != 0x8c2a) ||
           (*(int *)(*(longlong *)(lVar7 + 8) + 0x14 + uVar5 * 0x28) != iVar1)) {
          local_68 = CONCAT44(local_68._4_4_,iVar1);
          local_58 = 1;
          local_60 = 0xffffffff;
          FUN_1473e5556(lVar8,lVar7,uVar5 & 0xffffffff,0x8c2a);
        }
        if (local_44 == -1 && local_4c == 0) {
          (*DAT_14ca7f840)(0x8c2a);
        }
        else {
          local_68 = (ulonglong)
                     (uint)(local_44 *
                           *(int *)((longlong)&DAT_14c873428 + (ulonglong)((uint)local_3b * 0x30)));
          (*DAT_14ca7f848)(0x8c2a,*(undefined4 *)(&DAT_14ca79c40 + (ulonglong)local_3b * 0x14),
                           (int)plVar2[7]);
        }
      }
    }
  }
  else {
    if (plVar2 == (longlong *)0x0) {
      plVar2 = (longlong *)0x0;
    }
    else {
      plVar2 = (longlong *)(**(code **)(*plVar2 + 0x30))(plVar2);
    }
    local_44._0_2_ = local_44._1_2_;
    FUN_140100962(param_1 + -0x10,&local_4c,plVar2);
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)((longlong)plVar2 + 0x6c);
    uVar6 = 0xffffffff;
    if (local_44._1_1_ == '\x01') {
      uVar6 = (uint)(byte)local_44;
    }
    *(uint *)(param_1 + 0x20) = uVar6;
    (**(code **)(*plVar2 + 8))(plVar2);
    (**(code **)(*plVar2 + 8))(plVar2);
    if ((plVar2[0xf] != 0) && ((*(byte *)(plVar2[0xf] + 0x10) & 1) == 0)) {
      FUN_1431cefae(plVar2,1);
    }
    *(int *)(param_1 + 0x18) = (int)plVar2[0xd];
    lVar7 = DAT_14ca7a3c8;
    if (local_47 == ',') {
      lVar8 = *(longlong *)(DAT_14ca7a3c8 + 0x14fa0);
      if (lVar8 == 0) {
        lVar3 = *(longlong *)(DAT_14ca7a3c8 + 0x15008);
        pHVar4 = wglGetCurrentContext();
        lVar8 = lVar7 + 0x14200;
        if (pHVar4 == *(HGLRC *)(lVar3 + 0x40)) {
          lVar8 = lVar7 + 0x148d0;
        }
        *(longlong *)(lVar7 + 0x14fa0) = lVar8;
      }
      lVar7 = DAT_14ca7a3c8;
      lVar3 = (**(code **)(*plVar2 + 8))(plVar2);
      iVar1 = *(int *)(param_1 + 0x1c);
      if ((*(int *)(*(longlong *)(lVar8 + 8) + 0x10 + ((longlong)DAT_14c760d20 + -1) * 0x28) !=
           iVar1) ||
         (*(int *)(*(longlong *)(lVar8 + 8) + 0x14 + ((longlong)DAT_14c760d20 + -1) * 0x28) !=
          *(int *)(param_1 + 0x18))) {
        local_60 = *(undefined4 *)(param_1 + 0x20);
        local_58 = (uint)*(byte *)(lVar3 + 0x30);
        local_68 = CONCAT44(local_68._4_4_,*(int *)(param_1 + 0x18));
        FUN_1473e5556(lVar7,lVar8);
        iVar1 = *(int *)(param_1 + 0x1c);
      }
      (*DAT_14ca7fd38)(iVar1,0x90ea,0x1901);
      (*DAT_14ca7fd38)(*(undefined4 *)(param_1 + 0x1c),0x8e42,0);
      (*DAT_14ca7fd38)(*(undefined4 *)(param_1 + 0x1c),0x8e43,0x1903);
      (*DAT_14ca7fd38)(*(undefined4 *)(param_1 + 0x1c),0x8e44,0);
      (*DAT_14ca7fd38)(*(undefined4 *)(param_1 + 0x1c),0x8e45,0);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473fe1e0 FUN_1473fe1e0 body=86 status=ok
// SIG undefined FUN_1473fe1e0(void)

void FUN_1473fe1e0(longlong param_1)

{
  if ((*(int *)(param_1 + 0x40) != 0) && (*(char *)(param_1 + 0x4c) == '\x01')) {
    FUN_1473fa50a(DAT_14ca7a3c8);
    (*DAT_14ca7fb90)(1,param_1 + 0x40);
  }
  *(undefined8 *)(param_1 + 0x40) = 0x8c2a00000000;
  *(undefined4 *)(param_1 + 0x48) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  return;
}



// FUNCTION 1473fe236 FUN_1473fe236 body=67 status=ok
// SIG undefined FUN_1473fe236(void)

void FUN_1473fe236(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x38);
  if (*(longlong *)(param_1 + 0x30) != 0) {
    *(undefined8 **)(*(longlong *)(param_1 + 0x30) + 0x10) = puVar1;
  }
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = *(undefined8 *)(param_1 + 0x30);
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  FUN_1473fe1e0(param_1);
  FUN_144aa9b48(param_1);
  return;
}



// FUNCTION 1473fe27a FUN_1473fe27a body=259 status=ok
// SIG undefined FUN_1473fe27a(void)

undefined8 *
FUN_1473fe27a(undefined8 *param_1,ulonglong *param_2,longlong param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_48 [40];
  undefined8 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined1 *)((longlong)param_1 + 0xc) = 0x1f;
  *(byte *)((longlong)param_1 + 0xd) = *(byte *)((longlong)param_1 + 0xd) | 3;
  *param_1 = &PTR_FUN_14a1e49d0;
  param_1[2] = param_3;
  if (param_3 != 0) {
    LOCK();
    *(int *)(param_3 + 8) = *(int *)(param_3 + 8) + 1;
    UNLOCK();
  }
  uVar1 = param_4[1];
  param_1[3] = *param_4;
  param_1[4] = uVar1;
  param_1[6] = 0;
  param_1[7] = 0;
  *param_1 = &PTR_FUN_14a372768;
  param_1[5] = &PTR_FUN_14a372778;
  param_1[8] = 0;
  *(undefined8 *)((longlong)param_1 + 0x46) = 0;
  local_20 = param_1;
  if (*(char *)((longlong)param_2 + 100) == '\x01') {
    FUN_1431d6810(&local_20);
  }
  else {
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar2 + 3;
    if ((undefined8 *)param_2[1] < puVar3) {
      FUN_140023dd8(param_2,0x20);
      puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar3 = puVar2 + 3;
    }
    *param_2 = (ulonglong)puVar3;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar2;
    param_2[6] = (ulonglong)(puVar2 + 1);
    puVar2[1] = 0;
    *puVar2 = &PTR_FUN_14a374ba0;
    puVar2[2] = param_1;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473fe37e FUN_1473fe37e body=613 status=ok
// SIG undefined FUN_1473fe37e(void)

void FUN_1473fe37e(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  HGLRC pHVar5;
  int *_Dst;
  ulonglong uVar6;
  uint uVar7;
  longlong lVar8;
  undefined1 auStack_a8 [32];
  int local_88;
  undefined4 local_80;
  undefined4 local_78;
  int local_64;
  undefined1 local_60 [5];
  byte local_5b;
  char local_50;
  byte local_4f;
  char local_4e;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1473fe5e4(param_1 + -0x28);
  plVar1 = *(longlong **)(param_1 + -0x18);
  if (*(byte *)(param_1 + -0x10) < 2) {
    FUN_144b1c476(param_1 + -0x10,local_60,plVar1);
    if (local_4e == '\0') {
      *(byte *)(param_1 + 0x24) = local_4f;
      *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(&DAT_14ca79c40 + (ulonglong)local_4f * 0x14)
      ;
      uVar7 = DAT_14c760d24;
      if ((local_50 == '\x04') || (local_50 == '\x02')) {
        *(int *)(param_1 + 0x1c) = (int)plVar1[7];
      }
      else if (local_50 == '\x01') {
        local_64 = 0;
        lVar8 = (longlong)(int)DAT_14c760d24;
        if (lVar8 < 0x3ff) {
          _Dst = (int *)(&DAT_14ca7a3e0 + lVar8 * 4);
          uVar7 = DAT_14c760d24 + 1;
        }
        else {
          iVar4 = 0x400 - DAT_14c760d24;
          _Dst = &local_64;
          memcpy(_Dst,&DAT_14ca7a3e0 + lVar8 * 4,(longlong)iVar4 * 4);
          (*DAT_14ca7fb68)(0x400,&DAT_14ca7a3e0);
          uVar7 = uVar7 - 0x3ff;
          memcpy(local_60 + (longlong)iVar4 * 4 + -4,&DAT_14ca7a3e0,(ulonglong)uVar7 * 4);
        }
        lVar3 = DAT_14ca7a3c8;
        iVar4 = *_Dst;
        uVar6 = (longlong)DAT_14c760d20 - 1;
        lVar8 = *(longlong *)(DAT_14ca7a3c8 + 0x14fa0);
        DAT_14c760d24 = uVar7;
        if (lVar8 == 0) {
          lVar2 = *(longlong *)(DAT_14ca7a3c8 + 0x15008);
          pHVar5 = wglGetCurrentContext();
          lVar8 = lVar3 + 0x14200;
          if (pHVar5 == *(HGLRC *)(lVar2 + 0x40)) {
            lVar8 = lVar3 + 0x148d0;
          }
          *(longlong *)(lVar3 + 0x14fa0) = lVar8;
        }
        if ((*(int *)(*(longlong *)(lVar8 + 8) + 0x10 + uVar6 * 0x28) != 0x8c2a) ||
           (*(int *)(*(longlong *)(lVar8 + 8) + 0x14 + uVar6 * 0x28) != iVar4)) {
          local_78 = 1;
          local_80 = 0xffffffff;
          local_88 = iVar4;
          FUN_1473e5556(lVar3,lVar8,uVar6 & 0xffffffff,0x8c2a);
        }
        (*DAT_14ca7f840)(0x8c2a,*(undefined4 *)(&DAT_14ca79c40 + (ulonglong)local_4f * 0x14),
                         (int)plVar1[7]);
        *(int *)(param_1 + 0x18) = iVar4;
        *(undefined1 *)(param_1 + 0x25) = 1;
      }
    }
  }
  else {
    if (plVar1 == (longlong *)0x0) {
      lVar8 = 0;
    }
    else {
      lVar8 = (**(code **)(*plVar1 + 0x30))(plVar1);
    }
    FUN_14178da4c(param_1 + -0x10,local_60,lVar8);
    uVar6 = (ulonglong)local_5b;
    if ((*(longlong *)(lVar8 + 0x78) != 0) &&
       ((*(byte *)(*(longlong *)(lVar8 + 0x78) + 0x10) & 1) == 0)) {
      FUN_1431cefae(lVar8,&DAT_14ca79c01);
    }
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(lVar8 + 0x68);
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(&DAT_14ca79c40 + uVar6 * 0x14);
    *(byte *)(param_1 + 0x24) = local_5b;
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473fe5e4 FUN_1473fe5e4 body=65 status=ok
// SIG undefined FUN_1473fe5e4(void)

void FUN_1473fe5e4(longlong param_1)

{
  if ((*(int *)(param_1 + 0x40) != 0) && (*(char *)(param_1 + 0x4d) == '\x01')) {
    FUN_1473fa50a(DAT_14ca7a3c8);
    (*DAT_14ca7fb90)(1,(undefined8 *)(param_1 + 0x40));
  }
  *(undefined8 *)(param_1 + 0x45) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  return;
}



// FUNCTION 1473fe626 FUN_1473fe626 body=67 status=ok
// SIG undefined FUN_1473fe626(void)

void FUN_1473fe626(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x38);
  if (*(longlong *)(param_1 + 0x30) != 0) {
    *(undefined8 **)(*(longlong *)(param_1 + 0x30) + 0x10) = puVar1;
  }
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = *(undefined8 *)(param_1 + 0x30);
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  FUN_1473fe5e4(param_1);
  FUN_144aa9b48(param_1);
  return;
}



// FUNCTION 1473fe66a FUN_1473fe66a body=336 status=ok
// SIG undefined FUN_1473fe66a(void)

void FUN_1473fe66a(longlong param_1,longlong param_2,undefined8 param_3)

{
  uint uVar1;
  longlong lVar2;
  undefined1 auStack_368 [32];
  undefined4 local_348;
  undefined8 local_340;
  undefined4 local_32c;
  undefined4 local_328;
  undefined4 local_324;
  undefined1 local_320 [776];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_368;
  lVar2 = 0;
  if (param_1 != 0x18) {
    lVar2 = param_1;
  }
  FUN_140048e76(local_320,lVar2);
  if (*(byte *)(param_2 + 0x18) < 2) {
    uVar1 = *(uint *)(*(longlong *)(param_2 + 0x10) + 0x20);
    if (*(byte *)(param_2 + 0x4c) == 0) {
      FUN_1431d0d22(local_320,param_2,uVar1 >> 2,param_3);
    }
    else {
      local_348 = 1;
      local_340 = param_3;
      FUN_140119514(local_320,param_2,
                    (ulonglong)uVar1 /
                    (ulonglong)
                    *(uint *)((longlong)&DAT_14c873428 +
                             (ulonglong)((uint)*(byte *)(param_2 + 0x4c) * 0x30)),1);
    }
    goto LAB_1473fe775;
  }
  FUN_144b15a3c(*(undefined8 *)(param_2 + 0x10),&local_32c);
  if (*(byte *)(param_2 + 0x18) < 2) {
LAB_1473fe751:
    local_348 = local_324;
    local_340 = param_3;
    FUN_140e5da0e(local_320,param_2,local_32c,local_328);
  }
  else {
    lVar2 = (**(code **)(**(longlong **)(param_2 + 0x10) + 8))();
    if (*(char *)(lVar2 + 0x32) != '\x02') {
      lVar2 = (**(code **)(**(longlong **)(param_2 + 0x10) + 8))();
      if (*(char *)(lVar2 + 0x32) != '\x01') goto LAB_1473fe751;
    }
    local_348 = local_324;
    local_340 = param_3;
    FUN_143154fa3(local_320,param_2,local_32c,local_328);
  }
LAB_1473fe775:
  FUN_140048db6(local_320);
  if ((local_18 ^ (ulonglong)auStack_368) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473fe7bc FUN_1473fe7bc body=336 status=ok
// SIG undefined FUN_1473fe7bc(void)

void FUN_1473fe7bc(longlong param_1,longlong param_2,undefined8 param_3)

{
  uint uVar1;
  longlong lVar2;
  undefined1 auStack_368 [32];
  undefined4 local_348;
  undefined8 local_340;
  undefined4 local_32c;
  undefined4 local_328;
  undefined4 local_324;
  undefined1 local_320 [776];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_368;
  lVar2 = 0;
  if (param_1 != 0x18) {
    lVar2 = param_1;
  }
  FUN_140048e76(local_320,lVar2);
  if (*(byte *)(param_2 + 0x18) < 2) {
    uVar1 = *(uint *)(*(longlong *)(param_2 + 0x10) + 0x20);
    if (*(byte *)(param_2 + 0x4c) == 0) {
      FUN_1431d1205(local_320,param_2,uVar1 >> 2,param_3);
    }
    else {
      local_348 = 1;
      local_340 = param_3;
      FUN_140118dbb(local_320,param_2,
                    (ulonglong)uVar1 /
                    (ulonglong)
                    *(uint *)((longlong)&DAT_14c873428 +
                             (ulonglong)((uint)*(byte *)(param_2 + 0x4c) * 0x30)),1);
    }
    goto LAB_1473fe8c7;
  }
  FUN_144b15a3c(*(undefined8 *)(param_2 + 0x10),&local_32c);
  if (*(byte *)(param_2 + 0x18) < 2) {
LAB_1473fe8a3:
    local_348 = local_324;
    local_340 = param_3;
    FUN_140048f60(local_320,param_2,local_32c,local_328);
  }
  else {
    lVar2 = (**(code **)(**(longlong **)(param_2 + 0x10) + 8))();
    if (*(char *)(lVar2 + 0x32) != '\x02') {
      lVar2 = (**(code **)(**(longlong **)(param_2 + 0x10) + 8))();
      if (*(char *)(lVar2 + 0x32) != '\x01') goto LAB_1473fe8a3;
    }
    local_348 = local_324;
    local_340 = param_3;
    FUN_14108ec93(local_320,param_2,local_32c,local_328);
  }
LAB_1473fe8c7:
  FUN_140048db6(local_320);
  if ((local_18 ^ (ulonglong)auStack_368) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473fe90e FUN_1473fe90e body=87 status=ok
// SIG undefined FUN_1473fe90e(void)

longlong *
FUN_1473fe90e(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x50,0x10);
  FUN_1473fdd36(lVar1,param_3,param_4,param_5);
  *param_2 = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 1473fe966 FUN_1473fe966 body=87 status=ok
// SIG undefined FUN_1473fe966(void)

longlong *
FUN_1473fe966(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x50,0x10);
  FUN_1473fe27a(lVar1,param_3,param_4,param_5);
  *param_2 = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 1473fe9be FUN_1473fe9be body=104 status=ok
// SIG undefined FUN_1473fe9be(void)

void FUN_1473fe9be(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_2 + 1);
  if ((longlong)(int)uVar1 != 0) {
    iVar2 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_14740321e(param_1,iVar2);
    }
    memcpy((void *)((longlong)iVar2 * 0x18 + *param_1),(void *)*param_2,(longlong)(int)uVar1 * 0x18)
    ;
    return;
  }
  return;
}



// FUNCTION 1473fea26 FUN_1473fea26 body=148 status=ok
// SIG undefined FUN_1473fea26(void)

void FUN_1473fea26(undefined8 *param_1,longlong param_2)

{
  bool bVar1;
  
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined1 *)((longlong)param_1 + 0xc) = 0x12;
  *(byte *)((longlong)param_1 + 0xd) = *(byte *)((longlong)param_1 + 0xd) | 3;
  *param_1 = &PTR_FUN_14a1e4960;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = param_2;
  if (param_2 != 0) {
    LOCK();
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 0x84);
  *param_1 = &PTR_FUN_14a372868;
  bVar1 = false;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[8] = 0;
  DAT_14ca7fb14 = DAT_14ca7fb14 + 1;
  *(int *)(param_1 + 9) = DAT_14ca7fb14;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *(undefined1 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x5e) = 1;
  if (DAT_14ca7a384 == '\x01') {
    bVar1 = (*(byte *)(param_2 + 0x8c) & 9) == 0;
  }
  *(bool *)((longlong)param_1 + 0x5d) = bVar1;
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 0x84);
  return;
}



// FUNCTION 1473feaba FUN_1473feaba body=282 status=ok
// SIG undefined FUN_1473feaba(void)

void FUN_1473feaba(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  uint *puVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  
  uVar4 = *(uint *)(*(longlong *)(param_1 + 0x20) + 0x28);
  lVar9 = (longlong)(int)uVar4;
  if (lVar9 != 0) {
    plVar1 = (longlong *)(param_1 + 0x10);
    FUN_14736323c(plVar1);
    iVar5 = *(int *)(param_1 + 0x18);
    *(uint *)(param_1 + 0x18) = iVar5 + uVar4;
    if ((uint)(*(int *)(param_1 + 0x1c) - iVar5) < uVar4) {
      FUN_144abccec(plVar1);
    }
    memset((void *)((longlong)iVar5 * 8 + *plVar1),0,lVar9 * 8);
    if ((param_2 != 0) && (0 < (int)uVar4)) {
      lVar10 = 0;
      do {
        lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x20);
        bVar3 = *(byte *)(lVar8 + 2 + lVar10 * 4);
        if (((byte)(bVar3 - 10) < 0xe) && ((0x3263U >> (bVar3 - 10 & 0x1f) & 1) != 0)) {
LAB_1473feb8a:
          lVar8 = 0;
        }
        else {
          plVar7 = (longlong *)((ulonglong)*(ushort *)(lVar8 + lVar10 * 4) + param_2);
          if ((bVar3 < 0x13) && ((0x67200U >> (bVar3 & 0x1f) & 1) != 0)) {
            if (*plVar7 == 0) goto LAB_1473feb8a;
            plVar7 = (longlong *)(*plVar7 + 0x10);
          }
          lVar8 = *plVar7;
        }
        lVar6 = *(longlong *)(*plVar1 + lVar10 * 8);
        if (lVar6 != lVar8) {
          *(longlong *)(*plVar1 + lVar10 * 8) = lVar8;
          if (lVar8 != 0) {
            LOCK();
            *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
            UNLOCK();
          }
          if (lVar6 != 0) {
            LOCK();
            puVar2 = (uint *)(lVar6 + 8);
            uVar4 = *puVar2;
            *puVar2 = *puVar2 - 1;
            UNLOCK();
            if ((uVar4 & 0x3fffffff) == 1) {
              FUN_144a54812();
            }
          }
        }
        lVar10 = lVar10 + 1;
      } while (lVar9 != lVar10);
    }
  }
  return;
}



// FUNCTION 1473febd4 FUN_1473febd4 body=380 status=ok
// SIG undefined FUN_1473febd4(void)

void FUN_1473febd4(longlong param_1,void *param_2,uint param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulonglong _Size;
  void *_Dst;
  
  puVar2 = *(undefined8 **)(param_1 + 0x50);
  if (puVar2 == (undefined8 *)0x0) {
    if (*(void **)(param_1 + 0x40) != (void *)0x0) {
      memcpy(*(void **)(param_1 + 0x40),param_2,(ulonglong)param_3);
      return;
    }
    _Dst = param_2;
    if (DAT_14ca85164 == 0) {
      _Size = (ulonglong)param_3;
      _Dst = (void *)((longlong)DAT_14ca85100 + 0xfU & 0xfffffffffffffff0);
      puVar2 = (undefined8 *)((longlong)_Dst + _Size);
      if (DAT_14ca85108 < puVar2) {
        FUN_140023dd8(&DAT_14ca85100,param_3 + 0x10);
        _Dst = (void *)((longlong)DAT_14ca85100 + 0xfU & 0xfffffffffffffff0);
        puVar2 = (undefined8 *)((longlong)_Dst + _Size);
      }
      DAT_14ca85100 = puVar2;
      memcpy(_Dst,param_2,_Size);
    }
    if ((DAT_14ca85164 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001473feccd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*DAT_14ca7ff50)(0x8a11,0,param_3,_Dst);
      return;
    }
    puVar3 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
    puVar2 = puVar3 + 4;
    if (DAT_14ca85108 < puVar2) {
      FUN_140023dd8(&DAT_14ca85100,0x28);
      puVar3 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
      puVar2 = puVar3 + 4;
    }
    DAT_14ca85160 = DAT_14ca85160 + 1;
    DAT_14ca85100 = puVar2;
    *DAT_14ca85130 = puVar3;
    DAT_14ca85130 = puVar3 + 1;
    puVar3[1] = 0;
    *puVar3 = &PTR_LAB_14a374ba8;
    *(uint *)(puVar3 + 2) = param_3;
    puVar3[3] = _Dst;
  }
  else {
    *(int *)(puVar2 + 1) = *(int *)(puVar2 + 1) + 1;
    memcpy((void *)puVar2[2],param_2,(ulonglong)param_3);
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001473fec41. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar2)(puVar2,1);
      return;
    }
  }
  return;
}



// FUNCTION 1473fed50 FUN_1473fed50 body=158 status=ok
// SIG undefined FUN_1473fed50(void)

longlong * FUN_1473fed50(longlong *param_1,uint param_2)

{
  uint uVar1;
  longlong lVar2;
  uint *puVar3;
  uint *puVar4;
  undefined *puVar5;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14ca7c560);
  if (DAT_14ca7c590 != DAT_14ca7c5bc) {
    puVar5 = &DAT_14ca7c5c0;
    if (DAT_14ca7c5c8 != (undefined *)0x0) {
      puVar5 = DAT_14ca7c5c8;
    }
    uVar1 = *(uint *)(puVar5 + (ulonglong)(DAT_14ca7c5d0 - 1U & param_2) * 4);
    while (uVar1 != 0xffffffff) {
      puVar3 = (uint *)(DAT_14ca7c588 + (longlong)(int)uVar1 * 0x18);
      if (*puVar3 == param_2) goto LAB_1473fed78;
      uVar1 = puVar3[4];
    }
  }
  puVar3 = (uint *)0x0;
LAB_1473fed78:
  puVar4 = puVar3 + 2;
  if (puVar3 == (uint *)0x0) {
    puVar4 = (uint *)0x0;
  }
  lVar2 = *(longlong *)puVar4;
  *param_1 = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14ca7c560);
  return param_1;
}



// FUNCTION 1473fedee FUN_1473fedee body=153 status=ok
// SIG undefined FUN_1473fedee(void)

void FUN_1473fedee(longlong param_1,void *param_2,uint param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  
  if (param_3 != 0) {
    puVar2 = *(undefined8 **)(param_1 + 0x50);
    if (puVar2 == (undefined8 *)0x0) {
      if (*(longlong *)(param_1 + 0x40) == 0) {
        FUN_1473e997e(*(undefined4 *)(param_1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x0001473fee84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*DAT_14ca7ff50)(0x8a11,0,(ulonglong)param_3,param_2);
        return;
      }
      FUN_140033559(".\\Runtime/OpenGLDrv/Private/OpenGLUniformBuffer.cpp",0x31b,
                    L"RHIUpdateUniformBuffer doesn\'t support PersistentlyMappedBuffer yet!");
    }
    else {
      *(int *)(puVar2 + 1) = *(int *)(puVar2 + 1) + 1;
      memcpy((void *)puVar2[2],param_2,(ulonglong)param_3);
      piVar1 = (int *)(puVar2 + 1);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001473fee5e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)*puVar2)(puVar2,1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1473fee88 FUN_1473fee88 body=578 status=ok
// SIG undefined FUN_1473fee88(void)

void FUN_1473fee88(undefined8 param_1,ulonglong *param_2,longlong param_3,void *param_4)

{
  int *piVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulonglong _Size;
  int iVar9;
  ulonglong uVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  undefined1 auStack_a8 [40];
  longlong local_80;
  undefined8 *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  int local_60;
  undefined4 uStack_5c;
  void *pvStack_58;
  uint local_50;
  int iStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar5 = *(longlong *)(param_3 + 0x20);
  uVar3 = *(uint *)(lVar5 + 0x84);
  _Size = (ulonglong)uVar3;
  iVar4 = *(int *)(lVar5 + 0x28);
  lVar13 = (longlong)iVar4;
  iVar9 = DAT_14ca7fb14 + 1;
  DAT_14ca7fb14 = iVar9;
  if (lVar13 < 1) {
    uVar14 = 0;
  }
  else {
    uVar14 = *param_2 + 7 & 0xfffffffffffffff8;
    uVar10 = lVar13 * 8 + uVar14;
    local_80 = param_3;
    if (param_2[1] < uVar10) {
      FUN_140023dd8(param_2,(int)(lVar13 * 8) + 8);
      uVar14 = *param_2 + 7 & 0xfffffffffffffff8;
      uVar10 = lVar13 * 8 + uVar14;
    }
    *param_2 = uVar10;
    lVar6 = 0;
    do {
      bVar2 = *(byte *)(*(longlong *)(lVar5 + 0x20) + 2 + lVar6 * 4);
      if (((byte)(bVar2 - 10) < 0xe) && ((0x3263U >> (bVar2 - 10 & 0x1f) & 1) != 0)) {
LAB_1473fef6f:
        lVar12 = 0;
      }
      else {
        plVar11 = (longlong *)
                  ((ulonglong)*(ushort *)(*(longlong *)(lVar5 + 0x20) + lVar6 * 4) +
                  (longlong)param_4);
        if ((bVar2 < 0x13) && ((0x67200U >> (bVar2 & 0x1f) & 1) != 0)) {
          if (*plVar11 == 0) goto LAB_1473fef6f;
          plVar11 = (longlong *)(*plVar11 + 0x10);
        }
        lVar12 = *plVar11;
      }
      *(longlong *)(uVar14 + lVar6 * 8) = lVar12;
      lVar6 = lVar6 + 1;
      param_3 = local_80;
    } while (lVar13 != lVar6);
  }
  if ((int)uVar3 < 1) {
    pvStack_58 = (void *)0x0;
  }
  else {
    pvStack_58 = (void *)(*param_2 + 0xf & 0xfffffffffffffff0);
    uVar10 = (longlong)pvStack_58 + _Size;
    if (param_2[1] < uVar10) {
      FUN_140023dd8(param_2,uVar3 + 0x10);
      pvStack_58 = (void *)(*param_2 + 0xf & 0xfffffffffffffff0);
      uVar10 = (longlong)pvStack_58 + _Size;
    }
    *param_2 = uVar10;
    memcpy(pvStack_58,param_4,_Size);
  }
  local_70 = param_3;
  uStack_68 = uVar14;
  local_60 = iVar4;
  local_50 = uVar3;
  iStack_4c = iVar9;
  if (*(char *)((longlong)param_2 + 100) == '\x01') {
    FUN_1431d690c(&local_70);
  }
  else {
    puVar7 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar8 = puVar7 + 7;
    if ((undefined8 *)param_2[1] < puVar8) {
      FUN_140023dd8(param_2,0x40);
      puVar7 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar8 = puVar7 + 7;
    }
    *param_2 = (ulonglong)puVar8;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar7;
    param_2[6] = (ulonglong)(puVar7 + 1);
    puVar7[1] = 0;
    *puVar7 = &PTR_FUN_14a374bb8;
    *(undefined4 *)(puVar7 + 2) = (undefined4)local_70;
    *(undefined4 *)((longlong)puVar7 + 0x14) = local_70._4_4_;
    *(undefined4 *)(puVar7 + 3) = (undefined4)uStack_68;
    *(undefined4 *)((longlong)puVar7 + 0x1c) = uStack_68._4_4_;
    puVar7[4] = CONCAT44(uStack_5c,local_60);
    puVar7[5] = pvStack_58;
    puVar7[6] = CONCAT44(iStack_4c,local_50);
  }
  FUN_14494c7ac(param_2,&local_78,1);
  if (local_78 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_78 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_78)(local_78,1);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473ff0cb FUN_1473ff0cb body=39 status=ok
// SIG undefined FUN_1473ff0cb(void)

bool FUN_1473ff0cb(undefined1 (*param_1) [16],undefined1 (*param_2) [16])

{
  return *(undefined1 (*) [16])(*param_2 + 0xb) == *(undefined1 (*) [16])(*param_1 + 0xb) &&
         *param_2 == *param_1;
}



// FUNCTION 1473ff0f2 FUN_1473ff0f2 body=307 status=ok
// SIG undefined FUN_1473ff0f2(void)

longlong * FUN_1473ff0f2(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_278 [40];
  longlong local_250;
  undefined1 *local_248;
  longlong *local_240;
  int local_238;
  undefined1 local_234 [484];
  undefined4 local_50;
  undefined1 local_4c [36];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_278;
  FUN_1473ff226(local_234,param_3);
  iVar3 = FUN_147403326(local_50,local_234);
  lVar4 = 0;
  if (iVar3 != -1) {
    lVar4 = (longlong)iVar3 * 0x220 + DAT_14ca7f2f0;
  }
  if (lVar4 == 0) {
    lVar4 = FUN_14001cc68(0x218,0x10);
    FUN_1473ff554(lVar4,local_234,local_4c);
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
    }
    local_240 = &local_250;
    local_250 = lVar4;
    local_248 = local_234;
    FUN_1474033c2(&local_238);
    lVar4 = DAT_14ca7f2f0;
    if (local_250 != 0) {
      LOCK();
      puVar1 = (uint *)(local_250 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
    lVar4 = lVar4 + (longlong)local_238 * 0x220;
  }
  lVar4 = *(longlong *)(lVar4 + 0x210);
  *param_2 = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  if ((local_28 ^ (ulonglong)auStack_278) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1473ff226 FUN_1473ff226 body=814 status=ok
// SIG undefined FUN_1473ff226(void)

longlong FUN_1473ff226(longlong param_1,longlong param_2)

{
  longlong lVar1;
  byte bVar2;
  undefined1 uVar3;
  short sVar4;
  ushort uVar5;
  int iVar6;
  longlong lVar7;
  byte bVar8;
  undefined4 uVar9;
  uint uVar10;
  byte unaff_BPL;
  byte bVar11;
  uint uVar12;
  uint unaff_R12D;
  longlong lVar13;
  uint uVar14;
  undefined4 unaff_R15D;
  undefined4 local_60;
  
  *(undefined8 *)(param_1 + 0x1dc) = 0x1100000000;
  lVar1 = param_1 + 0x1e8;
  *(undefined8 *)(param_1 + 0x1e8) = 0;
  *(undefined8 *)(param_1 + 0x1f0) = 0;
  *(undefined8 *)(param_1 + 0x1f8) = 0;
  *(undefined8 *)(param_1 + 0x200) = 0;
  *(undefined2 *)(param_1 + 0x208) = 0;
  uVar9 = 0;
  if (0 < *(int *)(param_2 + 0x88)) {
    lVar13 = 0;
    uVar12 = 0;
    local_60 = (undefined4)lVar1;
    do {
      bVar8 = *(byte *)(param_2 + lVar13 * 8);
      bVar11 = *(byte *)(param_2 + 2 + lVar13 * 8);
      bVar2 = *(byte *)(param_2 + 1 + lVar13 * 8);
      sVar4 = *(short *)(param_2 + 6 + lVar13 * 8);
      uVar3 = *(undefined1 *)(param_2 + 3 + lVar13 * 8);
      uVar5 = *(ushort *)(param_2 + 4 + lVar13 * 8);
      uVar14 = (uint)bVar8;
      uVar9 = 0x1406;
      switch(bVar11) {
      case 1:
        local_60 = 0;
        uVar10 = (uint)bVar8;
        unaff_R12D = (uint)bVar11;
        goto LAB_1473ff3f7;
      case 3:
        unaff_R12D = 3;
        goto LAB_1473ff33e;
      case 5:
        uVar9 = 0x1400;
        break;
      case 6:
        uVar9 = 0x1401;
        goto LAB_1473ff3ba;
      case 7:
        uVar9 = 0x1401;
        break;
      case 8:
        uVar9 = 0x1401;
        unaff_R12D = 0x80e1;
        goto LAB_1473ff3eb;
      case 9:
        uVar9 = 0x1402;
        goto LAB_1473ff4df;
      case 10:
        uVar9 = 0x1402;
        goto LAB_1473ff3ba;
      case 0xb:
        uVar9 = 0x1402;
        goto LAB_1473ff4ce;
      case 0xc:
        uVar9 = 0x140b;
      case 2:
        unaff_R12D = 2;
        goto LAB_1473ff33e;
      case 0xd:
        uVar9 = 0x140b;
      case 4:
        unaff_R12D = 4;
LAB_1473ff33e:
        bVar11 = 1;
        local_60 = 0;
        uVar10 = (uint)bVar8;
        goto LAB_1473ff3f7;
      case 0xe:
        uVar9 = 0x1402;
        break;
      case 0xf:
        uVar9 = 0x1403;
LAB_1473ff4df:
        unaff_R12D = 2;
        goto LAB_1473ff3c0;
      case 0x10:
        uVar9 = 0x1403;
LAB_1473ff3ba:
        unaff_R12D = 4;
LAB_1473ff3c0:
        local_60 = 0;
        uVar10 = (uint)bVar8;
        bVar11 = 0;
        goto LAB_1473ff3f7;
      case 0x11:
        uVar9 = 0x1403;
LAB_1473ff4ce:
        unaff_R12D = 2;
        goto LAB_1473ff3eb;
      case 0x12:
        uVar9 = 0x1403;
        break;
      case 0x13:
        uVar9 = 0x8368;
        break;
      case 0x14:
        uVar9 = 0x1405;
        unaff_R12D = 1;
        goto LAB_1473ff3c0;
      default:
        FUN_140033559(".\\Runtime/OpenGLDrv/Private/OpenGLVertexDeclaration.cpp",0x4e,
                      L"Unknown RHI vertex element type %u");
        bVar8 = *(byte *)(param_2 + lVar13 * 8);
        uVar10 = (uint)bVar8;
        bVar11 = unaff_BPL;
        uVar9 = unaff_R15D;
        goto LAB_1473ff3f7;
      }
      unaff_R12D = 4;
LAB_1473ff3eb:
      local_60 = 1;
      uVar10 = (uint)bVar8;
      bVar11 = 1;
LAB_1473ff3f7:
      if (((uVar12 & 0xffff) >> (uVar10 & 0x1f) & 1) == 0) {
        uVar12 = uVar12 | 1 << ((byte)uVar10 & 0x1f);
        *(undefined2 *)(lVar1 + (ulonglong)bVar8 * 2) = *(undefined2 *)(param_2 + 4 + lVar13 * 8);
      }
      iVar6 = *(int *)(param_1 + 0x1dc);
      *(uint *)(param_1 + 0x1dc) = iVar6 + 1U;
      if (*(uint *)(param_1 + 0x1e0) < iVar6 + 1U) {
        FUN_147401c94(param_1,iVar6);
      }
      lVar7 = (longlong)iVar6 * 0x1c;
      *(undefined4 *)(param_1 + lVar7) = uVar9;
      *(uint *)(param_1 + 4 + lVar7) = uVar14;
      *(uint *)(param_1 + 8 + lVar7) = (uint)bVar2;
      *(uint *)(param_1 + 0xc + lVar7) = unaff_R12D;
      *(uint *)(param_1 + 0x10 + lVar7) = (uint)(sVar4 != 0);
      *(uint *)(param_1 + 0x14 + lVar7) = (uint)uVar5;
      *(char *)(param_1 + 0x18 + lVar7) = (char)local_60;
      *(undefined1 *)(param_1 + 0x19 + lVar7) = uVar3;
      *(byte *)(param_1 + 0x1a + lVar7) = bVar11;
      *(undefined1 *)(param_1 + 0x1b + lVar7) = 0;
      lVar13 = lVar13 + 1;
      unaff_BPL = bVar11;
      unaff_R15D = uVar9;
    } while (lVar13 < *(int *)(param_2 + 0x88));
    uVar9 = *(undefined4 *)(param_1 + 0x1dc);
  }
  FUN_147401cba(param_1,uVar9);
  uVar9 = FUN_1448eb174(param_1,*(int *)(param_1 + 0x1dc) * 0x1c,0);
  *(undefined4 *)(param_1 + 0x1e4) = uVar9;
  uVar9 = FUN_1448eb174(lVar1,0x22,uVar9);
  *(undefined4 *)(param_1 + 0x1e4) = uVar9;
  return param_1;
}



// FUNCTION 1473ff554 FUN_1473ff554 body=157 status=ok
// SIG undefined FUN_1473ff554(void)

undefined8 * FUN_1473ff554(undefined8 *param_1,void *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined1 *)((longlong)param_1 + 0xc) = 5;
  *(byte *)((longlong)param_1 + 0xd) = *(byte *)((longlong)param_1 + 0xd) | 3;
  *param_1 = &PTR_FUN_14a374a60;
  iVar1 = *(int *)((longlong)param_2 + 0x1dc);
  *(int *)((longlong)param_1 + 0x1ec) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x3e) = 0x11;
  }
  else {
    FUN_147402008(param_1 + 2);
    memcpy(param_1 + 2,param_2,(longlong)iVar1 * 0x1c);
  }
  *(undefined2 *)((longlong)param_1 + 0x214) = *(undefined2 *)(param_3 + 4);
  uVar2 = *param_3;
  uVar3 = param_3[1];
  uVar4 = param_3[3];
  *(undefined8 *)((longlong)param_1 + 0x204) = param_3[2];
  *(undefined8 *)((longlong)param_1 + 0x20c) = uVar4;
  *(undefined8 *)((longlong)param_1 + 500) = uVar2;
  *(undefined8 *)((longlong)param_1 + 0x1fc) = uVar3;
  return param_1;
}



// FUNCTION 1473ff5f2 FUN_1473ff5f2 body=555 status=ok
// SIG undefined FUN_1473ff5f2(void)

undefined8 FUN_1473ff5f2(longlong param_1,longlong param_2)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint unaff_R12D;
  char *pcVar7;
  longlong lVar8;
  
  if (0 < *(int *)(param_1 + 0x1ec)) {
    pcVar7 = (char *)(param_1 + 0x2a);
    lVar8 = 0;
    do {
      bVar1 = pcVar7[-0x16];
      uVar4 = *(uint *)(pcVar7 + -0x12);
      iVar5 = *(int *)(pcVar7 + -10);
      bVar2 = pcVar7[-1];
      uVar3 = *(ushort *)(pcVar7 + -6);
      switch(*(int *)(pcVar7 + -0x1a)) {
      case 0x1400:
        unaff_R12D = unaff_R12D & 0xff;
        if (*(int *)(pcVar7 + -0xe) == 4) {
          unaff_R12D = 5;
        }
        break;
      case 0x1401:
        if (*(int *)(pcVar7 + -0xe) == 0x80e1) {
          unaff_R12D = 8;
        }
        else if (*(int *)(pcVar7 + -0xe) == 4) {
          unaff_R12D = (uint)(pcVar7[-2] == '\0' ^ 7);
        }
        break;
      case 0x1402:
        if (*(int *)(pcVar7 + -0xe) == 4) {
          unaff_R12D = 0xe;
          if (pcVar7[-2] == '\0') {
            unaff_R12D = (uint)(*pcVar7 != '\0') * 3 + 10;
          }
        }
        else if ((*(int *)(pcVar7 + -0xe) == 2) && (unaff_R12D = 0xb, pcVar7[-2] == '\0')) {
          unaff_R12D = (uint)(*pcVar7 != '\0') * 3 + 9;
        }
        break;
      case 0x1403:
        if (*(int *)(pcVar7 + -0xe) == 4) {
          unaff_R12D = (uint)(byte)((pcVar7[-2] != '\0') * '\x02' | 0x10);
        }
        else if (*(int *)(pcVar7 + -0xe) == 2) {
          unaff_R12D = (uint)(byte)((pcVar7[-2] != '\0') * '\x02' + 0xf);
        }
        break;
      case 0x1404:
      case 0x1407:
      case 0x1408:
      case 0x1409:
      case 0x140a:
        break;
      case 0x1405:
        unaff_R12D = 0x14;
        break;
      case 0x1406:
        if (*(int *)(pcVar7 + -0xe) - 1U < 4) {
          unaff_R12D = (uint)(byte)((char)(*(int *)(pcVar7 + -0xe) - 1U) + 1);
        }
        break;
      case 0x140b:
        if (*(int *)(pcVar7 + -0xe) == 4) {
          unaff_R12D = 0xd;
        }
        else if (*(int *)(pcVar7 + -0xe) == 2) {
          unaff_R12D = 0xc;
        }
        break;
      default:
        if (*(int *)(pcVar7 + -0x1a) == 0x8368) {
          unaff_R12D = 0x13;
        }
      }
      iVar6 = *(int *)(param_2 + 0x88);
      *(uint *)(param_2 + 0x88) = iVar6 + 1U;
      if (*(uint *)(param_2 + 0x8c) < iVar6 + 1U) {
        FUN_14738ac8a(param_2,iVar6);
      }
      *(ulonglong *)(param_2 + (longlong)iVar6 * 8) =
           (ulonglong)((uVar4 & 0xff) << 8) |
           (ulonglong)((unaff_R12D & 0xff) << 0x10) |
           (ulonglong)bVar2 << 0x18 | (ulonglong)uVar3 << 0x20 | (ulonglong)(iVar5 == 1) << 0x30 |
           (ulonglong)bVar1;
      lVar8 = lVar8 + 1;
      pcVar7 = pcVar7 + 0x1c;
    } while (lVar8 < *(int *)(param_1 + 0x1ec));
  }
  return 1;
}



// FUNCTION 1473ff829 FUN_1473ff829 body=295 status=ok
// SIG undefined FUN_1473ff829(void)

void FUN_1473ff829(DWORD *param_1,DWORD *param_2)

{
  BOOL BVar1;
  byte bVar2;
  uint uVar3;
  DWORD iModeNum;
  DWORD DVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  DWORD DVar9;
  undefined1 auStack_148 [36];
  DEVMODEW local_124;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  DVar9 = 0;
  memset(&local_124,0,0xdc);
  BVar1 = EnumDisplaySettingsW((LPCWSTR)0x0,0,&local_124);
  DVar4 = 0;
  if (BVar1 != 0) {
    bVar2 = 0;
    iModeNum = 1;
    DVar4 = 0;
    DVar9 = 0;
    do {
      uVar3 = local_124.dmPelsWidth - *param_1;
      uVar5 = -uVar3;
      if ((int)uVar5 < 0) {
        uVar5 = uVar3;
      }
      uVar6 = DVar4 - *param_1;
      uVar3 = -uVar6;
      if ((int)uVar3 < 0) {
        uVar3 = uVar6;
      }
      uVar7 = local_124.dmPelsHeight - *param_2;
      uVar6 = -uVar7;
      if ((int)uVar6 < 0) {
        uVar6 = uVar7;
      }
      uVar8 = DVar9 - *param_2;
      uVar7 = -uVar8;
      if ((int)uVar7 < 0) {
        uVar7 = uVar8;
      }
      if (!(bool)(bVar2 & (uVar3 < uVar5 || uVar7 < uVar6))) {
        DVar4 = local_124.dmPelsWidth;
        DVar9 = local_124.dmPelsHeight;
      }
      BVar1 = EnumDisplaySettingsW((LPCWSTR)0x0,iModeNum,&local_124);
      iModeNum = iModeNum + 1;
      bVar2 = 1;
    } while (BVar1 != 0);
  }
  *param_1 = DVar4;
  *param_2 = DVar9;
  if ((local_48 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473ff952 FUN_1473ff952 body=1505 status=ok
// SIG undefined FUN_1473ff952(void)

undefined8 FUN_1473ff952(undefined8 param_1,longlong *param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  longlong lVar8;
  uint uVar9;
  uint *puVar10;
  int iVar11;
  ulonglong uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint *puVar16;
  longlong lVar17;
  bool bVar18;
  float fVar19;
  undefined1 auStack_358 [32];
  longlong local_338;
  longlong local_330;
  undefined4 local_328 [188];
  undefined8 local_38;
  uint local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_358;
  FUN_1473fff34(param_2);
  iVar14 = (int)param_2[1];
  if (1 < (longlong)iVar14) {
    lVar8 = *param_2;
    memset(local_328,0,0x2f0);
    local_330 = lVar8 + (longlong)iVar14 * 0xc + -0xc;
    local_338 = lVar8;
    fVar19 = logf((float)iVar14);
    local_328[0] = (int)(longlong)(fVar19 + fVar19);
    plVar3 = &local_338;
    do {
      puVar5 = (uint *)*plVar3;
      puVar16 = (uint *)plVar3[1];
      iVar14 = (int)plVar3[2];
      iVar11 = (int)((ulonglong)((longlong)puVar16 - (longlong)puVar5) >> 2) * -0x55555555;
      uVar9 = iVar11 + 1;
      if (iVar14 != 0) {
LAB_1473ffa02:
        if (8 < (int)uVar9) {
          uVar12 = (ulonglong)(uVar9 >> 1);
          uVar9 = puVar5[uVar12 * 3 + 2];
          uVar2 = *(undefined8 *)(puVar5 + uVar12 * 3);
          puVar5[uVar12 * 3 + 2] = puVar5[2];
          *(undefined8 *)(puVar5 + uVar12 * 3) = *(undefined8 *)puVar5;
          puVar5[2] = uVar9;
          *(undefined8 *)puVar5 = uVar2;
          puVar4 = puVar5;
          puVar10 = puVar16 + 3;
          do {
            puVar4 = puVar4 + 3;
            if (puVar4 <= puVar16) {
              do {
                bVar18 = *puVar5 < *puVar4;
                if ((*puVar5 == *puVar4) && (bVar18 = puVar5[1] < puVar4[1], puVar5[1] == puVar4[1])
                   ) {
                  bVar18 = puVar5[2] < puVar4[2];
                }
              } while ((!bVar18) && (puVar4 = puVar4 + 3, puVar4 <= puVar16));
            }
            puVar7 = puVar10 + -3;
            if (puVar5 < puVar7) {
              do {
                puVar6 = puVar7;
                bVar18 = puVar10[-3] < *puVar5;
                puVar7 = puVar6;
                if ((puVar10[-3] == *puVar5) &&
                   (bVar18 = puVar6[1] < puVar5[1], puVar6[1] == puVar5[1])) {
                  if (puVar6[2] < puVar5[2]) {
                    puVar10 = puVar6 + 3;
                    break;
                  }
                }
                else if (bVar18) break;
                puVar7 = puVar6 + -3;
                puVar10 = puVar6;
              } while (puVar5 < puVar7);
            }
            if (puVar7 < puVar4) goto LAB_1473ffb0d;
            uVar9 = puVar4[2];
            uVar2 = *(undefined8 *)puVar4;
            puVar4[2] = puVar7[2];
            *(undefined8 *)puVar4 = *(undefined8 *)puVar7;
            puVar7[2] = uVar9;
            *(undefined8 *)puVar7 = uVar2;
            puVar10 = puVar7;
          } while( true );
        }
        for (; puVar10 = puVar5, puVar4 = puVar5, puVar5 < puVar16; puVar16 = puVar16 + -3) {
          while (puVar7 = puVar10, puVar4 = puVar4 + 3, puVar4 <= puVar16) {
            bVar18 = *puVar7 < *puVar4;
            if ((*puVar7 == *puVar4) && (bVar18 = puVar7[1] < puVar4[1], puVar7[1] == puVar4[1])) {
              bVar18 = puVar7[2] < puVar4[2];
            }
            puVar10 = puVar4;
            if (!bVar18) {
              puVar10 = puVar7;
            }
          }
          local_30 = puVar7[2];
          local_38 = *(undefined8 *)puVar7;
          puVar7[2] = puVar16[2];
          *(undefined8 *)puVar7 = *(undefined8 *)puVar16;
          puVar16[2] = local_30;
          *(undefined8 *)puVar16 = local_38;
        }
        goto LAB_1473ffeff;
      }
LAB_1473ffbc9:
      if (uVar9 != 0) {
        iVar14 = (iVar11 - (iVar11 + -1 >> 0x1f)) + -1 >> 1;
        iVar11 = iVar14;
joined_r0x0001473ffbef:
        do {
          iVar13 = iVar14 * 2 + 1;
          if (iVar13 < (int)uVar9) {
            iVar15 = iVar14 * 2 + 2;
            if (iVar15 < (int)uVar9) {
              lVar17 = (longlong)iVar15;
              lVar8 = (longlong)iVar13;
              bVar18 = puVar5[lVar17 * 3] < puVar5[lVar8 * 3];
              if ((puVar5[lVar17 * 3] == puVar5[lVar8 * 3]) &&
                 (bVar18 = puVar5[lVar17 * 3 + 1] < puVar5[lVar8 * 3 + 1],
                 puVar5[lVar17 * 3 + 1] == puVar5[lVar8 * 3 + 1])) {
                bVar18 = puVar5[lVar17 * 3 + 2] < puVar5[lVar8 * 3 + 2];
              }
              if (!bVar18) {
                iVar13 = iVar15;
              }
            }
            puVar16 = puVar5 + (longlong)iVar14 * 3;
            puVar4 = puVar5 + (longlong)iVar13 * 3;
            bVar18 = *puVar16 < *puVar4;
            if ((*puVar16 == *puVar4) && (bVar18 = puVar16[1] < puVar4[1], puVar16[1] == puVar4[1]))
            {
              bVar18 = puVar16[2] < puVar4[2];
            }
            if (bVar18) {
              local_30 = puVar16[2];
              local_38 = *(undefined8 *)puVar16;
              puVar16[2] = puVar4[2];
              *(undefined8 *)puVar16 = *(undefined8 *)puVar4;
              puVar4[2] = local_30;
              *(undefined8 *)puVar4 = local_38;
              iVar14 = iVar13;
              goto joined_r0x0001473ffbef;
            }
          }
          bVar18 = iVar11 != 0;
          iVar14 = iVar11 + -1;
          iVar11 = iVar14;
        } while (bVar18);
        if (1 < (int)uVar9) {
          uVar12 = (ulonglong)uVar9 - 1;
          local_30 = puVar5[2];
          local_38 = *(undefined8 *)puVar5;
          puVar5[2] = puVar5[uVar12 * 3 + 2];
          *(undefined8 *)puVar5 = *(undefined8 *)(puVar5 + uVar12 * 3);
          puVar5[uVar12 * 3 + 2] = local_30;
          *(undefined8 *)(puVar5 + uVar12 * 3) = local_38;
          if (uVar9 != 2) {
            do {
              iVar11 = 0;
              iVar14 = 1;
              iVar13 = 0;
              do {
                lVar8 = (longlong)(iVar11 + 2);
                iVar15 = iVar14;
                if (lVar8 < (longlong)uVar12) {
                  lVar17 = (longlong)iVar14;
                  bVar18 = puVar5[lVar8 * 3] < puVar5[lVar17 * 3];
                  if ((puVar5[lVar8 * 3] == puVar5[lVar17 * 3]) &&
                     (bVar18 = puVar5[lVar8 * 3 + 1] < puVar5[lVar17 * 3 + 1],
                     puVar5[lVar8 * 3 + 1] == puVar5[lVar17 * 3 + 1])) {
                    bVar18 = puVar5[lVar8 * 3 + 2] < puVar5[lVar17 * 3 + 2];
                  }
                  if (!bVar18) {
                    iVar15 = iVar11 + 2;
                  }
                }
                puVar16 = puVar5 + (longlong)iVar13 * 3;
                puVar4 = puVar5 + (longlong)iVar15 * 3;
                bVar18 = *puVar16 < *puVar4;
                if ((*puVar16 == *puVar4) &&
                   (bVar18 = puVar16[1] < puVar4[1], puVar16[1] == puVar4[1])) {
                  bVar18 = puVar16[2] < puVar4[2];
                }
                if (!bVar18) break;
                uVar9 = puVar16[2];
                uVar2 = *(undefined8 *)puVar16;
                puVar16[2] = puVar4[2];
                *(undefined8 *)puVar16 = *(undefined8 *)puVar4;
                puVar4[2] = uVar9;
                *(undefined8 *)puVar4 = uVar2;
                iVar11 = iVar15 * 2;
                iVar14 = iVar15 * 2 + 1;
                iVar13 = iVar15;
              } while ((longlong)iVar14 < (longlong)uVar12);
              uVar1 = uVar12 - 1;
              local_30 = puVar5[2];
              local_38 = *(undefined8 *)puVar5;
              puVar5[2] = puVar5[uVar1 * 3 + 2];
              *(undefined8 *)puVar5 = *(undefined8 *)(puVar5 + uVar1 * 3);
              puVar5[uVar1 * 3 + 2] = local_30;
              *(undefined8 *)(puVar5 + uVar1 * 3) = local_38;
              bVar18 = 2 < uVar12;
              uVar12 = uVar1;
            } while (bVar18);
          }
        }
      }
LAB_1473ffeff:
      plVar3 = plVar3 + -3;
    } while (&local_338 <= plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_358) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 1;
LAB_1473ffb0d:
  local_30 = puVar5[2];
  local_38 = *(undefined8 *)puVar5;
  puVar5[2] = puVar7[2];
  *(undefined8 *)puVar5 = *(undefined8 *)puVar7;
  puVar7[2] = local_30;
  *(undefined8 *)puVar7 = local_38;
  iVar14 = iVar14 + -1;
  puVar10 = puVar10 + -6;
  if ((longlong)puVar10 - (longlong)puVar5 < (longlong)puVar16 - (longlong)puVar4) {
    if (puVar4 < puVar16) {
      *plVar3 = (longlong)puVar4;
      plVar3[1] = (longlong)puVar16;
      *(int *)(plVar3 + 2) = iVar14;
      plVar3 = plVar3 + 3;
    }
    if (puVar7 <= puVar5 + 3) goto LAB_1473ffeff;
  }
  else {
    if (puVar5 + 3 < puVar7) {
      *plVar3 = (longlong)puVar5;
      plVar3[1] = (longlong)puVar10;
      *(int *)(plVar3 + 2) = iVar14;
      plVar3 = plVar3 + 3;
    }
    puVar10 = puVar16;
    puVar5 = puVar4;
    if (puVar16 <= puVar4) goto LAB_1473ffeff;
  }
  iVar11 = (int)((ulonglong)((longlong)puVar10 - (longlong)puVar5) >> 2) * -0x55555555;
  uVar9 = iVar11 + 1;
  puVar16 = puVar10;
  if (iVar14 == 0) goto LAB_1473ffbc9;
  goto LAB_1473ffa02;
}



// FUNCTION 1473fff34 FUN_1473fff34 body=369 status=ok
// SIG undefined FUN_1473fff34(void)

void FUN_1473fff34(longlong *param_1,char param_2)

{
  longlong lVar1;
  BOOL BVar2;
  longlong lVar3;
  DWORD iModeNum;
  int iVar4;
  undefined1 auStack_148 [44];
  DEVMODEW local_11c;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_148;
  memset(&local_11c,0,0xdc);
  BVar2 = EnumDisplaySettingsW((LPCWSTR)0x0,0,&local_11c);
  if (BVar2 != 0) {
    iModeNum = 1;
    do {
      if ((local_11c.dmPelsWidth < 0x28f1) && (local_11c.dmPelsHeight < 0x28f1)) {
        if (param_2 == '\0') {
          if (0x28f0 < local_11c.dmDisplayFrequency) goto LAB_147400051;
          iVar4 = (int)param_1[1];
        }
        else {
          iVar4 = (int)param_1[1];
          if (0 < (longlong)iVar4) {
            lVar3 = 0;
            do {
              if ((*(uint *)(*param_1 + lVar3) == local_11c.dmPelsWidth) &&
                 (*(uint *)(*param_1 + 4 + lVar3) == local_11c.dmPelsHeight)) goto LAB_147400051;
              lVar3 = lVar3 + 0xc;
            } while ((longlong)iVar4 * 0xc != lVar3);
          }
        }
        *(uint *)(param_1 + 1) = iVar4 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar4 + 1U) {
          FUN_146319c42(param_1,iVar4);
        }
        lVar3 = *param_1;
        lVar1 = (longlong)iVar4 * 0xc;
        *(undefined4 *)(lVar3 + 8 + lVar1) = 0;
        *(undefined8 *)(lVar3 + lVar1) = 0;
        lVar3 = *param_1;
        *(DWORD *)(lVar3 + lVar1) = local_11c.dmPelsWidth;
        *(DWORD *)(lVar3 + 4 + lVar1) = local_11c.dmPelsHeight;
        *(DWORD *)(lVar3 + 8 + lVar1) = local_11c.dmDisplayFrequency;
      }
LAB_147400051:
      BVar2 = EnumDisplaySettingsW((LPCWSTR)0x0,iModeNum,&local_11c);
      iModeNum = iModeNum + 1;
    } while (BVar2 != 0);
  }
  if ((local_40 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1474000a6 FUN_1474000a6 body=143 status=ok
// SIG undefined FUN_1474000a6(void)

longlong *
FUN_1474000a6(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined4 param_4,
             undefined4 param_5,undefined1 param_6,char param_7)

{
  longlong lVar1;
  char cVar2;
  
  cVar2 = '\x02';
  if (param_7 != '\0') {
    cVar2 = param_7;
  }
  lVar1 = FUN_14001cc68(0x48,0x10);
  FUN_1431d2822(lVar1,param_1,param_3,param_4,param_5,param_6,cVar2);
  *param_2 = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 14740015b FUN_14740015b body=88 status=ok
// SIG undefined FUN_14740015b(void)

void FUN_14740015b(longlong param_1)

{
  BOOL BVar1;
  HGLRC pHVar2;
  HDC pHVar3;
  
  pHVar2 = wglGetCurrentContext();
  if (pHVar2 != (HGLRC)0x0) {
    (*DAT_14ca7fe30)();
  }
  if (*(int *)(param_1 + 0x68) == 1) {
    pHVar2 = *(HGLRC *)(param_1 + 0x40);
    pHVar3 = *(HDC *)(**(longlong **)(param_1 + 0x60) + 8);
  }
  else {
    pHVar3 = *(HDC *)(param_1 + 0x38);
    pHVar2 = *(HGLRC *)(param_1 + 0x40);
  }
  BVar1 = wglMakeCurrent(pHVar3,pHVar2);
  if (BVar1 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001474001ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  wglMakeCurrent((HDC)0x0,(HGLRC)0x0);
  return;
}



// FUNCTION 1474001b3 FUN_1474001b3 body=698 status=ok
// SIG undefined FUN_1474001b3(void)

undefined8
FUN_1474001b3(undefined8 param_1,longlong param_2,longlong *param_3,ulonglong param_4,
             undefined4 param_5,char param_6,char param_7)

{
  undefined4 *puVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  undefined7 uVar9;
  undefined8 uVar8;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined4 local_b0;
  undefined1 local_a0 [24];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  iVar4 = FUN_147413c95();
  puVar1 = (undefined4 *)param_3[3];
  uVar9 = (undefined7)((param_4 & 0xffffffff) >> 8);
  local_4c = iVar4;
  if (DAT_14ca7c3e0 == '\x01') {
    (*DAT_14ca7fbc8)(0x8db9);
    iVar7 = 0;
    if (param_7 != '\0') {
      iVar7 = iVar4;
    }
    if ((DAT_14ca7a388 != (code *)0x0) && (puVar1[7] != iVar7)) {
      (*DAT_14ca7a388)(iVar7);
      puVar1[7] = iVar7;
    }
    SwapBuffers(*(HDC *)(puVar1 + 2));
    uVar8 = CONCAT71(uVar9,1);
    goto LAB_147400244;
  }
  lpCriticalSection = *(LPCRITICAL_SECTION *)(param_2 + 0x78);
  EnterCriticalSection(lpCriticalSection);
  local_88 = *puVar1;
  uStack_84 = puVar1[1];
  uStack_80 = puVar1[2];
  uStack_7c = puVar1[3];
  local_78 = *(undefined8 *)(puVar1 + 4);
  uStack_70 = puVar1[6];
  uStack_6c = puVar1[7];
  local_68 = puVar1[8];
  uStack_64 = puVar1[9];
  uStack_60 = puVar1[10];
  uStack_5c = puVar1[0xb];
  if (*(int *)(param_2 + 0x68) == 1) {
    local_78 = *(undefined8 *)(param_2 + 0x40);
    local_68 = *(undefined4 *)(param_2 + 0x50);
  }
  FUN_14740069e(local_a0,&local_88);
  lVar5 = (**(code **)(*param_3 + 0x30))(param_3);
  if (lVar5 == 0) {
LAB_1474002e0:
    uVar2 = local_68;
    if ((*(int *)(param_2 + 0x68) == 1) && (*(char *)(param_2 + 0x70) == '\x01')) {
      (*DAT_14ca7fb60)(0x8d40,local_68);
      local_d8 = 0;
      (*DAT_14ca7fea8)(0x8d40,0x8ce0,puVar1[0xb],puVar1[10]);
      *(undefined1 *)(param_2 + 0x70) = 0;
    }
    (*DAT_14ca7fbc8)(0x8db9);
    (*DAT_14ca7fb60)(0x8ca9,0);
    (*DAT_14ca7fea0)(0x405);
    (*DAT_14ca7fb60)(0x8ca8,uVar2);
    (*DAT_14ca7fe98)(0x8ce0);
    local_c0 = 0;
    local_d0 = param_5;
    local_d8 = 0;
    local_b0 = 0x2600;
    local_b8 = 0x4000;
    local_c8 = (int)param_4;
    (*DAT_14ca7fec0)(0,0,param_4 & 0xffffffff,param_5);
    (*DAT_14ca7fbb8)(0x8db9);
    uVar8 = CONCAT71(uVar9,1);
    if (param_6 != '\0') {
      iVar4 = 0;
      if (param_7 != '\0') {
        iVar4 = local_4c;
      }
      if ((DAT_14ca7a388 != (code *)0x0) && (puVar1[7] != iVar4)) {
        (*DAT_14ca7a388)(iVar4);
        puVar1[7] = iVar4;
      }
      SwapBuffers(*(HDC *)(puVar1 + 2));
    }
  }
  else {
    *(undefined1 *)(param_2 + 0x70) = 0;
    (*DAT_14ca7fbc8)(0x8db9);
    plVar6 = (longlong *)(**(code **)(*param_3 + 0x30))(param_3);
    cVar3 = (**(code **)(*plVar6 + 0x30))(plVar6,param_1,&local_4c);
    (*DAT_14ca7fbb8)(0x8db9);
    if (cVar3 != '\0') {
      *(undefined1 *)(param_2 + 0x70) = 1;
      goto LAB_1474002e0;
    }
    uVar8 = 0;
  }
  FUN_147400700(local_a0);
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(lpCriticalSection);
  }
LAB_147400244:
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8;
}



// FUNCTION 147400484 FUN_147400484 body=333 status=ok
// SIG undefined FUN_147400484(void)

void FUN_147400484(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  undefined8 **local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = &PTR_FUN_14a372b20;
  if (*(char *)(param_1 + 5) == '\x01') {
    ChangeDisplaySettingsW((DEVMODEW *)0x0,0);
  }
  lVar3 = param_1[6];
  if (lVar3 != 0) {
    param_1[6] = 0;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  puVar4 = (undefined8 *)param_1[7];
  param_1[7] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    (*DAT_14ca7fe80)(*puVar4);
    FUN_1400020a8(puVar4);
  }
  lVar3 = param_1[3];
  FUN_14740073a(*(undefined8 *)(param_1[2] + 0x15008),lVar3);
  if (lVar3 != 0) {
    FUN_1400020a8(lVar3);
  }
  param_1[3] = 0;
  local_20 = &local_28;
  local_28 = param_1;
  FUN_1474039d2(param_1[2] + 0x920);
  if (param_1[8] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[8] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  puVar4 = (undefined8 *)param_1[7];
  if (puVar4 != (undefined8 *)0x0) {
    (*DAT_14ca7fe80)(*puVar4);
    FUN_1400020a8(puVar4);
  }
  if (param_1[6] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[6] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  *param_1 = &PTR_FUN_14a37f858;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474005eb FUN_1474005eb body=31 status=ok
// SIG undefined FUN_1474005eb(void)

void FUN_1474005eb(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x80,0x10);
  FUN_1431d387a(uVar1);
  return;
}



// FUNCTION 14740060a FUN_14740060a body=37 status=ok
// SIG undefined FUN_14740060a(void)

void FUN_14740060a(longlong param_1)

{
  if (param_1 == 0) {
    return;
  }
  FUN_147400630();
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 147400630 FUN_147400630 body=110 status=ok
// SIG undefined FUN_147400630(void)

void FUN_147400630(longlong param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  BOOL BVar1;
  
  BVar1 = wglMakeCurrent((HDC)0x0,(HGLRC)0x0);
  if (BVar1 == 0) {
    wglMakeCurrent((HDC)0x0,(HGLRC)0x0);
  }
  FUN_14740073a(param_1,param_1 + 0x30);
  FUN_14740073a(param_1,param_1);
  lpCriticalSection = *(LPCRITICAL_SECTION *)(param_1 + 0x78);
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    DeleteCriticalSection(lpCriticalSection);
    FUN_1400020a8(lpCriticalSection);
  }
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14740069e FUN_14740069e body=97 status=ok
// SIG undefined FUN_14740069e(void)

longlong * FUN_14740069e(longlong *param_1,longlong param_2)

{
  BOOL BVar1;
  HDC pHVar2;
  HGLRC pHVar3;
  bool bVar4;
  bool bVar5;
  
  pHVar2 = wglGetCurrentDC();
  *param_1 = (longlong)pHVar2;
  pHVar3 = wglGetCurrentContext();
  param_1[1] = (longlong)pHVar3;
  bVar4 = *param_1 == *(longlong *)(param_2 + 8);
  *(bool *)((longlong)param_1 + 0x11) = bVar4;
  bVar5 = pHVar3 == *(HGLRC *)(param_2 + 0x10);
  *(bool *)(param_1 + 2) = bVar5 && bVar4;
  if (!bVar5 || !bVar4) {
    BVar1 = wglMakeCurrent(*(HDC *)(param_2 + 8),*(HGLRC *)(param_2 + 0x10));
    if (BVar1 == 0) {
      wglMakeCurrent((HDC)0x0,(HGLRC)0x0);
    }
  }
  return param_1;
}



// FUNCTION 147400700 FUN_147400700 body=58 status=ok
// SIG undefined FUN_147400700(void)

void FUN_147400700(undefined8 *param_1)

{
  BOOL BVar1;
  HDC pHVar2;
  HGLRC pHVar3;
  
  if (*(char *)(param_1 + 2) == '\0') {
    pHVar3 = (HGLRC)param_1[1];
    if (pHVar3 == (HGLRC)0x0) {
      pHVar2 = (HDC)0x0;
      pHVar3 = (HGLRC)0x0;
    }
    else {
      pHVar2 = (HDC)*param_1;
    }
    BVar1 = wglMakeCurrent(pHVar2,pHVar3);
    if (BVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014740072d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      wglMakeCurrent((HDC)0x0,(HGLRC)0x0);
      return;
    }
  }
  return;
}



// FUNCTION 14740073a FUN_14740073a body=423 status=ok
// SIG undefined FUN_14740073a(void)

void FUN_14740073a(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  longlong lVar2;
  BOOL BVar3;
  HGLRC pHVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_78 [40];
  undefined1 local_50 [16];
  char local_40;
  char local_3f;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar1 = *(int *)(param_1 + 0x68);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x60);
    lVar5 = (longlong)iVar1 * 8;
    lVar6 = 0;
    lVar7 = 0;
    do {
      if (*(undefined8 **)(lVar2 + lVar6 * 8) == param_2) {
        if ((uint)lVar6 != 0xffffffff) {
          memmove((void *)(lVar2 + (lVar7 >> 0x20) * 8),(void *)(lVar2 + (lVar7 >> 0x20) * 8 + 8),
                  (longlong)(int)(~(uint)lVar6 + iVar1) << 3);
          *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + -1;
        }
        break;
      }
      lVar7 = lVar7 + 0x100000000;
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + -8;
    } while (lVar5 != 0);
  }
  *(undefined1 *)(param_1 + 0x70) = 1;
  lpCriticalSection = *(LPCRITICAL_SECTION *)(param_1 + 0x78);
  EnterCriticalSection(lpCriticalSection);
  FUN_14740069e(local_50,param_2);
  (*DAT_14ca7f838)(0);
  (*DAT_14ca7f830)(1,(longlong)param_2 + 0x24);
  if (*(int *)(param_2 + 4) != 0) {
    (*DAT_14ca7fb98)(1,param_2 + 4);
    *(undefined4 *)(param_2 + 4) = 0;
  }
  FUN_147400700(local_50);
  wglDeleteContext((HGLRC)param_2[2]);
  param_2[2] = 0;
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  if (local_40 != '\0') {
    wglMakeCurrent((HDC)0x0,(HGLRC)0x0);
  }
  ReleaseDC((HWND)*param_2,(HDC)param_2[1]);
  param_2[1] = 0;
  pHVar4 = wglGetCurrentContext();
  if (((pHVar4 == *(HGLRC *)(param_1 + 0x40)) && (local_3f != '\0')) &&
     (BVar3 = wglMakeCurrent(*(HDC *)(param_1 + 0x38),*(HGLRC *)(param_1 + 0x40)), BVar3 == 0)) {
    wglMakeCurrent((HDC)0x0,(HGLRC)0x0);
  }
  if (*(char *)(param_2 + 3) == '\x01') {
    DestroyWindow((HWND)*param_2);
  }
  *param_2 = 0;
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1474008e9 FUN_1474008e9 body=49 status=ok
// SIG undefined FUN_1474008e9(void)

void FUN_1474008e9(void)

{
  BOOL BVar1;
  HDC pHVar2;
  
  pHVar2 = wglGetCurrentDC();
  if (pHVar2 != (HDC)0x0) {
    BVar1 = wglMakeCurrent((HDC)0x0,(HGLRC)0x0);
    if (BVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000147400913. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      wglMakeCurrent((HDC)0x0,(HGLRC)0x0);
      return;
    }
  }
  return;
}



// FUNCTION 14740091a FUN_14740091a body=451 status=ok
// SIG undefined FUN_14740091a(void)

void FUN_14740091a(longlong param_1,undefined8 *param_2,DWORD param_3,DWORD param_4,char param_5,
                  char param_6,undefined4 param_7,undefined4 param_8)

{
  LPCRITICAL_SECTION lpCriticalSection;
  HMONITOR hMonitor;
  undefined1 auStackY_1b8 [32];
  DEVMODEW local_190;
  undefined1 local_b0 [40];
  WCHAR aWStack_88 [2];
  undefined8 uStack_84;
  undefined8 local_7c;
  undefined8 uStack_74;
  undefined8 local_6c;
  undefined8 uStack_64;
  undefined8 local_5c;
  undefined8 uStack_54;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStackY_1b8;
  lpCriticalSection = *(LPCRITICAL_SECTION *)(param_1 + 0x78);
  EnterCriticalSection(lpCriticalSection);
  if (param_5 == '\0') {
    if (param_6 != '\0') {
      ChangeDisplaySettingsW((DEVMODEW *)0x0,0);
    }
  }
  else {
    hMonitor = MonitorFromWindow((HWND)*param_2,1);
    local_5c = 0;
    uStack_54 = 0;
    local_6c = 0;
    uStack_64 = 0;
    local_7c = 0;
    uStack_74 = 0;
    stack0xffffffffffffff74 = 0;
    uStack_84 = 0;
    local_b0._20_4_ = 0;
    local_b0._24_4_ = 0;
    local_b0._28_4_ = 0;
    local_b0._32_4_ = 0;
    local_b0._4_4_ = 0;
    local_b0._8_4_ = 0;
    local_b0._12_4_ = 0;
    local_b0._16_4_ = 0;
    local_4c = 0;
    local_b0._0_4_ = 0x68;
    GetMonitorInfoW(hMonitor,(LPMONITORINFO)local_b0);
    local_190.dmSize = 0xdc;
    local_190.dmBitsPerPel = 0x20;
    local_190.dmFields = 0x1c0000;
    local_190.dmPelsWidth = param_3;
    local_190.dmPelsHeight = param_4;
    ChangeDisplaySettingsExW(aWStack_88,&local_190,(HWND)0x0,4,(LPVOID)0x0);
  }
  *(undefined1 *)(param_1 + 0x70) = 1;
  *(undefined4 *)(param_2 + 5) = param_8;
  *(undefined4 *)((longlong)param_2 + 0x2c) = param_7;
  if (DAT_14ca7c3e0 == '\0') {
    FUN_14740069e(&local_190,param_2);
    (*DAT_14ca7fb60)(0x8d40,*(undefined4 *)(param_2 + 4));
    (*DAT_14ca7fea8)(0x8d40,0x8ce0,param_7,param_8);
    (*DAT_14ca7fbd8)(0,0,param_3,param_4);
    (*DAT_14ca7fdd8)(0x1800,0,&DAT_14ca7fa90);
    FUN_147400700(&local_190);
  }
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  if ((local_48 ^ (ulonglong)auStackY_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147400ade FUN_147400ade body=366 status=ok
// SIG undefined FUN_147400ade(void)

undefined8 FUN_147400ade(uint param_1,longlong param_2)

{
  undefined8 uVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined4 local_100;
  uint local_fc;
  undefined4 local_f8;
  ulonglong local_f4;
  undefined4 local_ec;
  undefined2 local_e8;
  undefined4 local_e6;
  undefined8 local_e0;
  wchar_t *pwStack_d8;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined8 local_c0;
  undefined1 local_b8 [16];
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  uint local_8c;
  undefined4 local_88;
  ulonglong local_84;
  undefined4 local_7c;
  undefined2 local_78;
  undefined1 local_76;
  undefined2 local_75;
  undefined1 local_73;
  undefined4 local_70;
  undefined4 uStack_6c;
  wchar_t *pwStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  uVar1 = 0;
  if (DAT_14ca7c3e0 == '\x01') {
    uVar2 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
    uVar3 = (ulonglong)param_1 | param_2 << 0x20;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_9c = DAT_14ca83a5c;
    uStack_98 = DAT_14ca83a60;
    uStack_94 = DAT_14ca83a64;
    uStack_90 = DAT_14ca83a68;
    local_76 = 0;
    local_a8 = 0x40003;
    local_75 = 2;
    local_7c = 0x10001;
    local_78 = 0x101;
    local_a0 = DAT_14ca83a58;
    local_88 = 0;
    local_73 = 0xff;
    local_70 = 0x1000;
    pwStack_68 = L"PlatformCreateBuiltinBackBuffer";
    local_60 = 0;
    local_8c = uVar2;
    local_84 = uVar3;
    uVar1 = FUN_14001cc68(0xb8,0x10);
    local_e6 = 0xff000200;
    local_118 = 0x40003;
    local_ec = 0x10001;
    local_e8 = 0x101;
    local_110 = CONCAT44(uStack_9c,local_a0);
    uStack_108 = CONCAT44(uStack_94,uStack_98);
    local_100 = uStack_90;
    local_f8 = 0;
    local_e0 = CONCAT44(uStack_6c,local_70);
    pwStack_d8 = pwStack_68;
    local_d0 = (undefined4)local_60;
    uStack_cc = local_60._4_4_;
    uStack_c8 = (undefined4)uStack_58;
    uStack_c4 = uStack_58._4_4_;
    local_c0 = uStack_50;
    local_fc = uVar2;
    local_f4 = uVar3;
    FUN_1431cecec(local_b8,&local_a8);
    FUN_1431cf19a(uVar1,&DAT_14ca85100,&local_118);
  }
  if ((local_48 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147400c4e FUN_147400c4e body=68 status=ok
// SIG undefined FUN_147400c4e(void)

undefined8 * FUN_147400c4e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a3718b0;
  (*DAT_14ca7f450)(1,param_1 + 2);
  *param_1 = &PTR_FUN_14a37f858;
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147400c92 FUN_147400c92 body=38 status=ok
// SIG undefined FUN_147400c92(void)

undefined8 FUN_147400c92(undefined8 param_1,int param_2)

{
  FUN_1431cf4c8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147400cb8 FUN_147400cb8 body=46 status=ok
// SIG undefined FUN_147400cb8(void)

longlong FUN_147400cb8(longlong param_1)

{
  if ((*(longlong *)(param_1 + 0x78) != 0) &&
     ((*(byte *)(*(longlong *)(param_1 + 0x78) + 0x10) & 1) == 0)) {
    FUN_1431cefae(param_1,1);
  }
  return param_1 + 0x68;
}



// FUNCTION 147400cea FUN_147400cea body=38 status=ok
// SIG undefined FUN_147400cea(void)

undefined8 FUN_147400cea(undefined8 param_1,int param_2)

{
  FUN_1473fe236();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147400d10 FUN_147400d10 body=38 status=ok
// SIG undefined FUN_147400d10(void)

undefined8 FUN_147400d10(undefined8 param_1,int param_2)

{
  FUN_1473fe626();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147400d36 FUN_147400d36 body=38 status=ok
// SIG undefined FUN_147400d36(void)

undefined8 FUN_147400d36(undefined8 param_1,int param_2)

{
  FUN_1431d1c9e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147400d5c FUN_147400d5c body=38 status=ok
// SIG undefined FUN_147400d5c(void)

undefined8 FUN_147400d5c(undefined8 param_1,int param_2)

{
  FUN_147400484();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147400dc0 FUN_147400dc0 body=39 status=ok
// SIG undefined FUN_147400dc0(void)

undefined8 * FUN_147400dc0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a37f858;
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147400de8 FUN_147400de8 body=39 status=ok
// SIG undefined FUN_147400de8(void)

undefined8 * FUN_147400de8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a37f858;
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147400e10 FUN_147400e10 body=39 status=ok
// SIG undefined FUN_147400e10(void)

undefined8 * FUN_147400e10(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a37f858;
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147400e5a FUN_147400e5a body=136 status=ok
// SIG undefined FUN_147400e5a(void)

void FUN_147400e5a(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x288);
  if (param_2 <= (int)uVar1) {
    iVar5 = 0x10;
    if (0x10 < uVar1) {
      lVar2 = (longlong)(int)uVar1;
      if (0x10 < *(uint *)(param_1 + 0x28c)) {
        lVar2 = lVar2 + ((ulonglong)(lVar2 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar2 * 0x28,0);
      iVar4 = (int)(uVar3 / 0x28);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar4) {
        iVar5 = iVar4;
      }
    }
    *(int *)(param_1 + 0x28c) = iVar5;
    FUN_147400ee4(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 147400ee4 FUN_147400ee4 body=149 status=ok
// SIG undefined FUN_147400ee4(void)

void FUN_147400ee4(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x280);
  if ((uint)param_3 < 0x11) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x28);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x280,0,param_3,0x28);
    memmove(*(void **)((longlong)param_1 + 0x280),param_1,(longlong)param_2 * 0x28);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x280,param_2,param_3,0x28);
  return;
}



// FUNCTION 147400f7a FUN_147400f7a body=55 status=ok
// SIG undefined FUN_147400f7a(void)

void FUN_147400f7a(void)

{
  FUN_147400fb2(&DAT_14ca7faa8,0);
  DAT_14ca7faf0 = 0;
  if (DAT_14ca7fae8 != 0) {
    FUN_1400020a8();
  }
  FUN_1474014ec();
  return;
}



// FUNCTION 147400fb2 FUN_147400fb2 body=290 status=ok
// SIG undefined FUN_147400fb2(void)

void FUN_147400fb2(longlong *param_1,undefined4 param_2)

{
  longlong *plVar1;
  int iVar2;
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
  iVar2 = 0;
  local_48 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_50);
    iVar2 = (int)param_1[5];
  }
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_58 = local_38;
  local_54 = local_34;
  local_70 = local_50;
  local_68 = local_48;
  local_78 = param_1;
  if ((iStack_3c != iVar2) || (local_48 != plVar1)) {
    do {
      if (*(longlong *)(*local_78 + (longlong)iStack_5c * 0x10) != 0) {
        FUN_1400020a8();
      }
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (local_78 != param_1 || (local_68 != plVar1 || iStack_5c != iVar2));
  }
  *(undefined4 *)(param_1 + 0xc) = param_2;
  FUN_1474010d6(param_1,param_2);
  param_1[10] = 0;
  param_1[0xb] = 0;
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474010d6 FUN_1474010d6 body=110 status=ok
// SIG undefined FUN_1474010d6(void)

void FUN_1474010d6(longlong param_1,uint param_2)

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
  if (*(int *)(param_1 + 0x48) < iVar3 && 0 < (int)param_2 || iVar3 < *(int *)(param_1 + 0x48)) {
    FUN_147401288(param_1,param_2);
    *(int *)(param_1 + 0x48) = iVar3;
    FUN_14740130a(param_1);
    return;
  }
  FUN_147401144(param_1);
  FUN_147401288(param_1,param_2);
  return;
}



// FUNCTION 147401144 FUN_147401144 body=322 status=ok
// SIG undefined FUN_147401144(void)

void FUN_147401144(longlong *param_1)

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
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = uVar2, uStack_48 != plVar1)) {
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



// FUNCTION 147401288 FUN_147401288 body=128 status=ok
// SIG undefined FUN_147401288(void)

void FUN_147401288(longlong param_1,int param_2)

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



// FUNCTION 14740130a FUN_14740130a body=480 status=ok
// SIG undefined FUN_14740130a(void)

void FUN_14740130a(longlong *param_1)

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
        lVar6 = (longlong)iVar4 * 0x10;
        uVar8 = ((uint)(**(ulonglong **)(lVar2 + lVar6) >> 0x14) & 0xffff ^
                (uint)(**(ulonglong **)(lVar2 + lVar6) >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0xc + lVar6) = iVar9;
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)(lVar2 + 8 + lVar6) =
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



// FUNCTION 1474014ec FUN_1474014ec body=62 status=ok
// SIG undefined FUN_1474014ec(void)

void FUN_1474014ec(void)

{
  FUN_147401288(&DAT_14ca7faa8,0);
  if (DAT_14ca7fac8 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14ca7faa8 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14740152a FUN_14740152a body=193 status=ok
// SIG undefined FUN_14740152a(void)

void FUN_14740152a(int param_1)

{
  longlong lVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  
  if (DAT_14ca7c590 != DAT_14ca7c5bc) {
    puVar4 = &DAT_14ca7c5c0;
    if (DAT_14ca7c5c8 != (undefined *)0x0) {
      puVar4 = DAT_14ca7c5c8;
    }
    for (iVar2 = *(int *)(puVar4 + ((longlong)param_1 & (longlong)DAT_14ca7c5d0 - 1U) * 4);
        iVar2 != -1; iVar2 = *(int *)(DAT_14ca7c588 + (longlong)iVar2 * 0x18 + 0x10)) {
      if (*(int *)(DAT_14ca7c588 + (longlong)iVar2 * 0x18) == param_1) {
        puVar4 = &DAT_14ca7c5c0;
        if (DAT_14ca7c5c8 != (undefined *)0x0) {
          puVar4 = DAT_14ca7c5c8;
        }
        lVar1 = DAT_14ca7c588 + (longlong)iVar2 * 0x18;
        lVar6 = (longlong)*(int *)(lVar1 + 0x14);
        iVar5 = *(int *)(puVar4 + lVar6 * 4);
        if (iVar5 == iVar2) {
          puVar3 = (undefined4 *)(puVar4 + lVar6 * 4);
        }
        else {
          do {
            lVar6 = (longlong)iVar5;
            iVar5 = *(int *)(DAT_14ca7c588 + 0x10 + lVar6 * 0x18);
          } while (iVar5 != iVar2);
          puVar3 = (undefined4 *)(DAT_14ca7c588 + lVar6 * 0x18 + 0x10);
        }
        *puVar3 = *(undefined4 *)(lVar1 + 0x10);
        FUN_1474015ec();
        return;
      }
    }
  }
  return;
}



// FUNCTION 1474015ec FUN_1474015ec body=58 status=ok
// SIG undefined FUN_1474015ec(void)

void FUN_1474015ec(int param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(DAT_14ca7c588 + 8 + (longlong)param_1 * 0x18);
  if (puVar2 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  FUN_147401626(param_1);
  return;
}



// FUNCTION 147401626 FUN_147401626 body=128 status=ok
// SIG undefined FUN_147401626(void)

void FUN_147401626(int param_1)

{
  byte bVar1;
  longlong lVar2;
  undefined *puVar3;
  int iVar4;
  
  lVar2 = DAT_14ca7c588;
  if (DAT_14ca7c5bc != 0) {
    *(int *)(DAT_14ca7c588 + (longlong)DAT_14ca7c5b8 * 0x18) = param_1;
  }
  *(undefined4 *)(lVar2 + (longlong)param_1 * 0x18) = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14ca7c5bc) {
    iVar4 = DAT_14ca7c5b8;
  }
  *(int *)(lVar2 + 4 + (longlong)param_1 * 0x18) = iVar4;
  DAT_14ca7c5bc = DAT_14ca7c5bc + 1;
  puVar3 = &DAT_14ca7c598;
  if (DAT_14ca7c5a8 != (undefined *)0x0) {
    puVar3 = DAT_14ca7c5a8;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar1 = (byte)param_1 & 0x1f;
  DAT_14ca7c5b8 = param_1;
  *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  return;
}



// FUNCTION 1474016a6 FUN_1474016a6 body=168 status=ok
// SIG undefined FUN_1474016a6(void)

longlong * FUN_1474016a6(longlong *param_1,undefined4 param_2,int *param_3)

{
  longlong lVar1;
  undefined1 auStack_68 [40];
  int *local_40;
  longlong *local_38;
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14ca7c560);
  DAT_14ca7fb24 = DAT_14ca7fb24 + 1;
  *param_3 = DAT_14ca7fb24;
  lVar1 = FUN_14001cc68(0x20,0x10);
  FUN_147401750(lVar1,param_2);
  *param_1 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  local_40 = param_3;
  local_38 = param_1;
  FUN_1474017d0(local_2c);
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14ca7c560);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147401750 FUN_147401750 body=127 status=ok
// SIG undefined FUN_147401750(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_147401750(undefined8 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = &PTR_FUN_14a374a10;
  uVar3 = param_2 + 3U >> 2;
  iVar1 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  iVar2 = 0;
  if (3 < param_2 + 3U) {
    FUN_14480809c(param_1 + 2,uVar3);
    iVar2 = *(int *)(param_1 + 3);
    iVar1 = *(int *)((longlong)param_1 + 0x1c);
  }
  *(uint *)(param_1 + 3) = iVar2 + uVar3;
  if ((uint)(iVar1 - iVar2) < uVar3) {
    FUN_1447808da(param_1 + 2);
    iVar1 = *(int *)((longlong)param_1 + 0x1c);
  }
  LOCK();
  _DAT_14ca84ee8 = _DAT_14ca84ee8 + (longlong)iVar1 * 4;
  UNLOCK();
  return param_1;
}



// FUNCTION 1474017d0 FUN_1474017d0 body=310 status=ok
// SIG undefined FUN_1474017d0(void)

undefined4 * FUN_1474017d0(undefined4 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  undefined *puVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  uint *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_147401908(local_40);
  plVar1 = (longlong *)param_2[1];
  uVar7 = *(uint *)*param_2;
  *local_38 = uVar7;
  lVar2 = *plVar1;
  *(longlong *)(local_38 + 2) = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    uVar7 = *local_38;
  }
  local_38[4] = 0xffffffff;
  local_44 = local_40[0];
  cVar4 = FUN_147401a16(uVar7,local_38,&local_44);
  uVar3 = local_44;
  if (cVar4 == '\0') {
    uVar5 = DAT_14ca7c590 - DAT_14ca7c5bc;
    iVar9 = 1;
    if (3 < uVar5) {
      uVar8 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar2 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar9 <= DAT_14ca7c5d0)) {
      uVar7 = DAT_14ca7c5d0 - 1U & uVar7;
      local_38[5] = uVar7;
      puVar6 = DAT_14ca7c5c8;
      if (DAT_14ca7c5c8 == (undefined *)0x0) {
        puVar6 = &DAT_14ca7c5c0;
      }
      local_38[4] = *(uint *)(puVar6 + ((longlong)DAT_14ca7c5d0 - 1U & (longlong)(int)uVar7) * 4);
      puVar6 = DAT_14ca7c5c8;
      if (DAT_14ca7c5c8 == (undefined *)0x0) {
        puVar6 = &DAT_14ca7c5c0;
      }
      *(undefined4 *)(puVar6 + ((longlong)DAT_14ca7c5d0 - 1U & (longlong)(int)uVar7) * 4) = local_44
      ;
    }
    else {
      DAT_14ca7c5d0 = iVar9;
      FUN_147401ac2();
    }
  }
  *param_1 = uVar3;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147401908 FUN_147401908 body=270 status=ok
// SIG undefined FUN_147401908(void)

int * FUN_147401908(int *param_1)

{
  byte bVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14ca7c5b8;
  iVar4 = DAT_14ca7c590;
  if (DAT_14ca7c5bc == 0) {
    iVar2 = DAT_14ca7c590 + 1;
    bVar7 = DAT_14ca7c594 == DAT_14ca7c590;
    DAT_14ca7c590 = iVar2;
    if (bVar7) {
      FUN_14482b872(&DAT_14ca7c588,iVar4);
    }
    lVar6 = (longlong)iVar4;
    iVar2 = FUN_144a54ea4(&DAT_14ca7c598,1);
    puVar3 = DAT_14ca7c5a8;
    if (DAT_14ca7c5a8 == (undefined *)0x0) {
      puVar3 = &DAT_14ca7c598;
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
    lVar6 = (longlong)DAT_14ca7c5b8;
    DAT_14ca7c5b8 = *(int *)(DAT_14ca7c588 + 4 + lVar6 * 0x18);
    DAT_14ca7c5bc = DAT_14ca7c5bc + -1;
    iVar4 = iVar2;
    if (DAT_14ca7c5bc != 0) {
      *(undefined4 *)(DAT_14ca7c588 + (longlong)DAT_14ca7c5b8 * 0x18) = 0xffffffff;
    }
  }
  puVar3 = &DAT_14ca7c598;
  if (DAT_14ca7c5a8 != (undefined *)0x0) {
    puVar3 = DAT_14ca7c5a8;
  }
  iVar2 = iVar4 + 0x1f;
  if (-1 < iVar4) {
    iVar2 = iVar4;
  }
  *(uint *)(puVar3 + (longlong)(iVar2 >> 5) * 4) =
       *(uint *)(puVar3 + (longlong)(iVar2 >> 5) * 4) | 1 << ((byte)iVar4 & 0x1f);
  *param_1 = iVar4;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14ca7c588;
  return param_1;
}



// FUNCTION 147401a16 FUN_147401a16 body=172 status=ok
// SIG undefined FUN_147401a16(void)

undefined8 FUN_147401a16(uint param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined *puVar7;
  int iVar8;
  
  if ((DAT_14ca7c590 - DAT_14ca7c5bc != 1) && (DAT_14ca7c590 != DAT_14ca7c5bc)) {
    puVar7 = &DAT_14ca7c5c0;
    if (DAT_14ca7c5c8 != (undefined *)0x0) {
      puVar7 = DAT_14ca7c5c8;
    }
    iVar8 = *(int *)(puVar7 + (ulonglong)(DAT_14ca7c5d0 - 1U & param_1) * 4);
    if (iVar8 != -1) {
      do {
        piVar2 = (int *)(DAT_14ca7c588 + (longlong)iVar8 * 0x18);
        if (*piVar2 == *param_2) {
          puVar3 = *(undefined8 **)(piVar2 + 2);
          if (puVar3 != (undefined8 *)0x0) {
            piVar1 = (int *)(puVar3 + 1);
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              (**(code **)*puVar3)(puVar3,1);
            }
          }
          iVar4 = param_2[1];
          iVar5 = param_2[2];
          iVar6 = param_2[3];
          *piVar2 = *param_2;
          piVar2[1] = iVar4;
          piVar2[2] = iVar5;
          piVar2[3] = iVar6;
          FUN_147401626(*param_3);
          *param_3 = iVar8;
          return 1;
        }
        iVar8 = piVar2[4];
      } while (iVar8 != -1);
    }
  }
  return 0;
}



// FUNCTION 147401ac2 FUN_147401ac2 body=464 status=ok
// SIG undefined FUN_147401ac2(void)

void FUN_147401ac2(void)

{
  longlong lVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14ca7c5c8 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14ca7c5c8,0,0,4);
  }
  uVar2 = DAT_14ca7c5d0;
  uVar3 = local_50;
  if (DAT_14ca7c5d0 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14ca7c5c0,0,DAT_14ca7c5d0,4);
    if (0 < (int)uVar2) {
      do {
        puVar6 = DAT_14ca7c5c8;
        if (DAT_14ca7c5c8 == (undefined *)0x0) {
          puVar6 = &DAT_14ca7c5c0;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14ca7c5d0 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar2 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14ca7c598;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14ca7c5b0 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14ca7c588;
    local_60 = local_40;
    local_58 = local_38;
    local_50 = local_30;
    uVar3 = local_50;
    local_48 = local_28;
    local_44 = local_24;
    local_50._4_4_ = (int)((ulonglong)local_30 >> 0x20);
    if (local_50._4_4_ < *(int *)(local_38 + 0x18)) {
      iVar4 = local_50._4_4_;
      local_50 = uVar3;
      do {
        lVar1 = *local_68;
        lVar5 = (longlong)iVar4;
        uVar9 = (longlong)(int)DAT_14ca7c5d0 - 1U & (longlong)*(int *)(lVar1 + lVar5 * 0x18);
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x14 + lVar5 * 0x18) = iVar8;
        puVar6 = DAT_14ca7c5c8;
        if (DAT_14ca7c5c8 == (undefined *)0x0) {
          puVar6 = &DAT_14ca7c5c0;
        }
        *(undefined4 *)(lVar1 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14ca7c5d0 - 1U & uVar9) * 4);
        puVar6 = DAT_14ca7c5c8;
        if (DAT_14ca7c5c8 == (undefined *)0x0) {
          puVar6 = &DAT_14ca7c5c0;
        }
        *(int *)(puVar6 + ((longlong)iVar8 & (longlong)(int)DAT_14ca7c5d0 - 1U) * 4) = iVar4;
        local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~local_60._4_4_);
        FUN_1449c0562(&local_60);
        iVar4 = local_50._4_4_;
        uVar3 = local_50;
      } while (local_50._4_4_ < *(int *)(local_58 + 0x18));
    }
  }
  local_50 = uVar3;
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147401c94 FUN_147401c94 body=37 status=ok
// SIG undefined FUN_147401c94(void)

void FUN_147401c94(longlong param_1,int param_2)

{
  if (param_2 <= *(int *)(param_1 + 0x1dc)) {
    *(undefined4 *)(param_1 + 0x1e0) = 0x11;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147401cba FUN_147401cba body=293 status=ok
// SIG undefined FUN_147401cba(void)

void FUN_147401cba(undefined8 *param_1,uint param_2)

{
  uint uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  undefined1 auStack_98 [36];
  uint local_74;
  undefined8 *local_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined8 uStack_54;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_70 = param_1;
  if (0 < (int)param_2) {
    uVar9 = (ulonglong)param_2;
    uVar3 = 0;
    do {
      if (uVar3 + 1 < uVar9) {
        if (*(uint *)(param_1 + 4) < *(uint *)((longlong)param_1 + 4)) {
LAB_147401d03:
          uVar2 = *param_1;
          uStack_54 = *(undefined8 *)((longlong)param_1 + 0x14);
          uStack_58 = (undefined4)((ulonglong)*(undefined8 *)((longlong)param_1 + 0xc) >> 0x20);
          uStack_60 = (undefined4)param_1[1];
          local_5c = (undefined4)((ulonglong)param_1[1] >> 0x20);
          *(undefined8 *)((longlong)param_1 + 0xc) = param_1[5];
          *(undefined8 *)((longlong)param_1 + 0x14) = param_1[6];
          *param_1 = *(undefined8 *)((longlong)param_1 + 0x1c);
          param_1[1] = *(undefined8 *)((longlong)param_1 + 0x24);
          param_1[5] = CONCAT44(uStack_58,local_5c);
          param_1[6] = uStack_54;
          uStack_68._0_4_ = (undefined4)uVar2;
          uStack_68._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
          *(undefined4 *)((longlong)param_1 + 0x1c) = (undefined4)uStack_68;
          *(undefined4 *)(param_1 + 4) = uStack_68._4_4_;
          *(undefined4 *)((longlong)param_1 + 0x24) = uStack_60;
          *(undefined4 *)(param_1 + 5) = local_5c;
          uStack_68 = uVar2;
        }
        else if (*(uint *)(param_1 + 4) <= *(uint *)((longlong)param_1 + 4)) {
          if ((*(uint *)((longlong)param_1 + 0x24) < *(uint *)(param_1 + 1)) ||
             ((*(uint *)((longlong)param_1 + 0x24) <= *(uint *)(param_1 + 1) &&
              (*(byte *)((longlong)param_1 + 0x35) < *(byte *)((longlong)param_1 + 0x19)))))
          goto LAB_147401d03;
        }
      }
      uVar3 = uVar3 + 2;
      param_1 = param_1 + 7;
    } while (uVar3 < uVar9);
    if (2 < (int)param_2) {
      uVar4 = 2;
      local_74 = param_2;
      do {
        uVar1 = uVar4 * 2;
        lVar5 = 0;
        puVar8 = local_70;
        uVar6 = local_74;
        do {
          uVar7 = uVar6;
          if ((int)uVar1 <= (int)uVar6) {
            uVar7 = uVar1;
          }
          FUN_147401de0(puVar8,uVar4,uVar7);
          lVar5 = lVar5 + (int)uVar1;
          puVar8 = (undefined8 *)((longlong)puVar8 + (longlong)(int)uVar1 * 0x1c);
          uVar6 = uVar6 + uVar4 * -2;
        } while (lVar5 < (longlong)uVar9);
        uVar4 = uVar1;
      } while ((int)uVar1 < (int)local_74);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147401de0 FUN_147401de0 body=510 status=ok
// SIG undefined FUN_147401de0(void)

void FUN_147401de0(longlong param_1,int param_2,int param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  uint uVar3;
  bool bVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  longlong lVar17;
  undefined8 *puVar18;
  uint uVar19;
  undefined8 *puVar20;
  int iVar21;
  uint uVar22;
  undefined1 auStack_88 [32];
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined8 uStack_54;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_2 < param_3 && 0 < param_2) {
    iVar13 = 0;
    while( true ) {
      lVar17 = (longlong)param_2 * 0x1c + param_1;
      iVar12 = 0;
      if (param_2 - iVar13 != 0 && iVar13 <= param_2) {
        lVar14 = (longlong)iVar13 * 0x1c + param_1;
        uVar19 = param_2 - iVar13;
        iVar21 = 0;
        do {
          uVar22 = (uVar19 >> 1) + iVar21;
          iVar12 = (uVar19 & 1) + uVar22;
          lVar5 = (ulonglong)uVar22 * 0x1c;
          lVar2 = lVar14 + lVar5;
          uVar22 = *(uint *)(lVar14 + 4 + lVar5);
          if ((*(uint *)(lVar17 + 4) < uVar22) ||
             ((*(uint *)(lVar17 + 4) <= uVar22 &&
              ((uVar22 = *(uint *)(lVar2 + 8), *(uint *)(lVar17 + 8) < uVar22 ||
               ((*(uint *)(lVar17 + 8) == uVar22 &&
                (*(byte *)(lVar17 + 0x19) < *(byte *)(lVar2 + 0x19))))))))) {
            iVar12 = iVar21;
          }
          bVar4 = 1 < uVar19;
          uVar19 = uVar19 >> 1;
          iVar21 = iVar12;
        } while (bVar4);
      }
      iVar12 = iVar12 + iVar13;
      iVar13 = param_2 - iVar12;
      if (iVar13 == 0 || param_2 < iVar12) break;
      if (param_3 - param_2 == 0 || param_3 < param_2) {
        iVar21 = 0;
      }
      else {
        puVar20 = (undefined8 *)((longlong)iVar12 * 0x1c + param_1);
        iVar21 = 0;
        uVar19 = param_3 - param_2;
        do {
          uVar22 = (uVar19 >> 1) + iVar21;
          lVar2 = (ulonglong)uVar22 * 0x1c;
          lVar14 = lVar17 + lVar2;
          uVar3 = *(uint *)(lVar17 + 4 + lVar2);
          if ((uVar3 < *(uint *)((longlong)puVar20 + 4)) ||
             ((uVar3 <= *(uint *)((longlong)puVar20 + 4) &&
              ((uVar3 = *(uint *)(lVar14 + 8), uVar3 < *(uint *)(puVar20 + 1) ||
               ((uVar3 == *(uint *)(puVar20 + 1) &&
                (*(byte *)(lVar14 + 0x19) < *(byte *)((longlong)puVar20 + 0x19))))))))) {
            iVar21 = uVar22 + (uVar19 & 1);
          }
          bVar4 = 1 < uVar19;
          uVar19 = uVar19 >> 1;
        } while (bVar4);
        param_2 = param_2 + iVar21;
        if (0 < iVar21) {
          puVar15 = (undefined8 *)((longlong)iVar13 * 0x1c + (longlong)puVar20);
          puVar18 = (undefined8 *)((longlong)(param_2 - iVar12) * 0x1c + (longlong)puVar20);
          puVar16 = puVar15;
          do {
            while( true ) {
              puVar1 = (undefined8 *)((longlong)puVar15 + 0x1c);
              uVar9 = *puVar20;
              uStack_54 = *(undefined8 *)((longlong)puVar20 + 0x14);
              uStack_58 = (undefined4)((ulonglong)*(undefined8 *)((longlong)puVar20 + 0xc) >> 0x20);
              uStack_60 = (undefined4)puVar20[1];
              local_5c = (undefined4)((ulonglong)puVar20[1] >> 0x20);
              uVar10 = *puVar15;
              uVar11 = puVar15[1];
              uVar6 = *(undefined4 *)(puVar15 + 2);
              uVar7 = *(undefined4 *)((longlong)puVar15 + 0x14);
              uVar8 = *(undefined4 *)(puVar15 + 3);
              *(undefined4 *)((longlong)puVar20 + 0xc) = *(undefined4 *)((longlong)puVar15 + 0xc);
              *(undefined4 *)(puVar20 + 2) = uVar6;
              *(undefined4 *)((longlong)puVar20 + 0x14) = uVar7;
              *(undefined4 *)(puVar20 + 3) = uVar8;
              *puVar20 = uVar10;
              puVar20[1] = uVar11;
              puVar20 = (undefined8 *)((longlong)puVar20 + 0x1c);
              *(ulonglong *)((longlong)puVar15 + 0xc) = CONCAT44(uStack_58,local_5c);
              *(undefined8 *)((longlong)puVar15 + 0x14) = uStack_54;
              uStack_68._0_4_ = (undefined4)uVar9;
              uStack_68._4_4_ = (undefined4)((ulonglong)uVar9 >> 0x20);
              *(undefined4 *)puVar15 = (undefined4)uStack_68;
              *(undefined4 *)((longlong)puVar15 + 4) = uStack_68._4_4_;
              *(undefined4 *)(puVar15 + 1) = uStack_60;
              *(undefined4 *)((longlong)puVar15 + 0xc) = local_5c;
              if (puVar1 == puVar18) break;
              puVar15 = puVar1;
              if (puVar20 == puVar16) {
                puVar16 = puVar1;
              }
            }
            puVar15 = puVar16;
            uStack_68 = uVar9;
          } while (puVar20 != puVar16);
        }
      }
      if ((param_3 <= param_2) || (iVar13 = iVar21 + iVar12 + 1, param_2 <= iVar13)) break;
    }
  }
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147401fe0 FUN_147401fe0 body=39 status=ok
// SIG undefined FUN_147401fe0(void)

undefined8 * FUN_147401fe0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a37f858;
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147402008 FUN_147402008 body=11 status=ok
// SIG undefined FUN_147402008(void)

void FUN_147402008(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x1e0) = 0x11;
  return;
}



// FUNCTION 147402014 FUN_147402014 body=68 status=ok
// SIG undefined FUN_147402014(void)

void FUN_147402014(longlong param_1,uint param_2)

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
  if (((int)param_2 < 1 || iVar3 <= *(int *)(param_1 + 0x48)) && (*(int *)(param_1 + 0x48) <= iVar3)
     ) {
    return;
  }
  *(int *)(param_1 + 0x48) = iVar3;
  FUN_147402058(param_1);
  return;
}



// FUNCTION 147402058 FUN_147402058 body=445 status=ok
// SIG undefined FUN_147402058(void)

void FUN_147402058(longlong *param_1)

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
        lVar10 = (longlong)iVar5 * 0x30;
        iVar6 = FUN_1406e99b6(lVar3 + lVar10);
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar3 + 0x2c + lVar10) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x28 + lVar10) =
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



// FUNCTION 147402216 FUN_147402216 body=59 status=ok
// SIG undefined FUN_147402216(void)

void FUN_147402216(void)

{
  if (1 < DAT_14ca7c440) {
    FUN_145d7045e();
    DAT_14ca7c440 = 1;
    FUN_147402058(&DAT_14ca7c3f8);
    return;
  }
  FUN_147402252();
  FUN_145d7045e();
  return;
}



// FUNCTION 147402252 FUN_147402252 body=368 status=ok
// SIG undefined FUN_147402252(void)

void FUN_147402252(void)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  undefined *puVar5;
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
  puVar5 = &DAT_14ca7c430;
  if (DAT_14ca7c438 != (undefined *)0x0) {
    puVar5 = DAT_14ca7c438;
  }
  iVar4 = DAT_14ca7c440 + 3;
  if (-1 < DAT_14ca7c440) {
    iVar4 = DAT_14ca7c440;
  }
  if (DAT_14ca7c400 - DAT_14ca7c42c < iVar4 >> 2) {
    local_50 = 0x100000000;
    uStack_48 = &DAT_14ca7c408;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    if (DAT_14ca7c420 == 0) {
      iVar4 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar4 = DAT_14ca7c420;
    }
    local_78 = &DAT_14ca7c3f8;
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60 = local_40;
    uVar1 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    if ((local_60._4_4_ != iVar4) || (uStack_48 != &DAT_14ca7c408)) {
      iVar2 = local_60._4_4_;
      local_60 = uVar1;
      do {
        *(undefined4 *)(puVar5 + (longlong)*(int *)(*local_78 + 0x2c + (longlong)iVar2 * 0x30) * 4)
             = 0xffffffff;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar2 = local_60._4_4_;
        uVar1 = local_60;
      } while (local_78 != &DAT_14ca7c3f8 ||
               ((undefined *)CONCAT44(uStack_64,uStack_68) != &DAT_14ca7c408 ||
               local_60._4_4_ != iVar4));
    }
  }
  else {
    uVar1 = local_60;
    if (0 < DAT_14ca7c440) {
      lVar3 = 0;
      do {
        *(undefined4 *)(puVar5 + lVar3 * 4) = 0xffffffff;
        lVar3 = lVar3 + 1;
      } while (lVar3 < DAT_14ca7c440);
    }
  }
  local_60 = uVar1;
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1474023c4 FUN_1474023c4 body=129 status=ok
// SIG undefined FUN_1474023c4(void)

int FUN_1474023c4(uint param_1,undefined8 param_2)

{
  int iVar1;
  char cVar2;
  undefined *puVar3;
  
  if (DAT_14ca7c400 != DAT_14ca7c42c) {
    puVar3 = &DAT_14ca7c430;
    if (DAT_14ca7c438 != (undefined *)0x0) {
      puVar3 = DAT_14ca7c438;
    }
    for (iVar1 = *(int *)(puVar3 + (ulonglong)(DAT_14ca7c440 - 1U & param_1) * 4); iVar1 != -1;
        iVar1 = *(int *)(DAT_14ca7c3f8 + 0x28 + (longlong)iVar1 * 0x30)) {
      cVar2 = FUN_1406e9953(DAT_14ca7c3f8 + (longlong)iVar1 * 0x30,param_2);
      if (cVar2 != '\0') {
        return iVar1;
      }
    }
  }
  return -1;
}



// FUNCTION 147402446 FUN_147402446 body=326 status=ok
// SIG undefined FUN_147402446(void)

undefined4 * FUN_147402446(undefined4 *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  char cVar11;
  uint uVar12;
  uint uVar13;
  undefined *puVar14;
  ulonglong uVar15;
  int iVar16;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined4 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14740258e(local_40);
  puVar1 = (undefined4 *)*param_2;
  puVar2 = (undefined8 *)param_2[1];
  uVar4 = *puVar1;
  uVar5 = puVar1[1];
  uVar6 = puVar1[2];
  uVar7 = puVar1[3];
  uVar8 = puVar1[4];
  uVar9 = puVar1[5];
  uVar10 = puVar1[6];
  local_38[3] = puVar1[3];
  local_38[4] = uVar8;
  local_38[5] = uVar9;
  local_38[6] = uVar10;
  *local_38 = uVar4;
  local_38[1] = uVar5;
  local_38[2] = uVar6;
  local_38[3] = uVar7;
  *(undefined8 *)(local_38 + 8) = *puVar2;
  local_38[10] = 0xffffffff;
  local_44 = local_40[0];
  uVar12 = FUN_1406e99b6(local_38);
  cVar11 = FUN_1474026a4(uVar12,local_38,&local_44);
  uVar4 = local_44;
  if (cVar11 == '\0') {
    uVar13 = DAT_14ca7c400 - DAT_14ca7c42c;
    iVar16 = 1;
    if (3 < uVar13) {
      uVar15 = (ulonglong)(uVar13 & 0xfffffffe) + 0xf;
      lVar3 = 0x3f;
      if (uVar15 != 0) {
        for (; uVar15 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar16 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar13 < 1) || (iVar16 <= DAT_14ca7c440)) {
      uVar12 = DAT_14ca7c440 - 1U & uVar12;
      local_38[0xb] = uVar12;
      puVar14 = DAT_14ca7c438;
      if (DAT_14ca7c438 == (undefined *)0x0) {
        puVar14 = &DAT_14ca7c430;
      }
      local_38[10] = *(undefined4 *)
                      (puVar14 + ((longlong)DAT_14ca7c440 - 1U & (longlong)(int)uVar12) * 4);
      puVar14 = DAT_14ca7c438;
      if (DAT_14ca7c438 == (undefined *)0x0) {
        puVar14 = &DAT_14ca7c430;
      }
      *(undefined4 *)(puVar14 + ((longlong)DAT_14ca7c440 - 1U & (longlong)(int)uVar12) * 4) =
           local_44;
    }
    else {
      DAT_14ca7c440 = iVar16;
      FUN_147402058(&DAT_14ca7c3f8);
    }
  }
  *param_1 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14740258e FUN_14740258e body=278 status=ok
// SIG undefined FUN_14740258e(void)

int * FUN_14740258e(int *param_1)

{
  byte bVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14ca7c428;
  iVar4 = DAT_14ca7c400;
  if (DAT_14ca7c42c == 0) {
    iVar2 = DAT_14ca7c400 + 1;
    bVar7 = DAT_14ca7c404 == DAT_14ca7c400;
    DAT_14ca7c400 = iVar2;
    if (bVar7) {
      FUN_140044672(&DAT_14ca7c3f8,iVar4);
    }
    lVar6 = (longlong)iVar4;
    iVar2 = FUN_144a54ea4(&DAT_14ca7c408,1);
    puVar3 = DAT_14ca7c418;
    if (DAT_14ca7c418 == (undefined *)0x0) {
      puVar3 = &DAT_14ca7c408;
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
    lVar6 = (longlong)DAT_14ca7c428;
    DAT_14ca7c428 = *(int *)(DAT_14ca7c3f8 + 4 + lVar6 * 0x30);
    DAT_14ca7c42c = DAT_14ca7c42c + -1;
    iVar4 = iVar2;
    if (DAT_14ca7c42c != 0) {
      *(undefined4 *)(DAT_14ca7c3f8 + (longlong)DAT_14ca7c428 * 0x30) = 0xffffffff;
    }
  }
  puVar3 = &DAT_14ca7c408;
  if (DAT_14ca7c418 != (undefined *)0x0) {
    puVar3 = DAT_14ca7c418;
  }
  iVar2 = iVar4 + 0x1f;
  if (-1 < iVar4) {
    iVar2 = iVar4;
  }
  *(uint *)(puVar3 + (longlong)(iVar2 >> 5) * 4) =
       *(uint *)(puVar3 + (longlong)(iVar2 >> 5) * 4) | 1 << ((byte)iVar4 & 0x1f);
  *param_1 = iVar4;
  *(longlong *)(param_1 + 2) = lVar6 * 0x30 + DAT_14ca7c3f8;
  return param_1;
}



// FUNCTION 1474026a4 FUN_1474026a4 body=108 status=ok
// SIG undefined FUN_1474026a4(void)

undefined8 FUN_1474026a4(undefined8 param_1,undefined4 *param_2,int *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  
  if ((DAT_14ca7c400 - DAT_14ca7c42c != 1) &&
     (iVar11 = FUN_1474023c4(), lVar10 = DAT_14ca7c3f8, iVar11 != -1)) {
    lVar12 = (longlong)iVar11 * 0x30;
    uVar2 = *param_2;
    uVar3 = param_2[1];
    uVar4 = param_2[2];
    uVar5 = param_2[3];
    uVar6 = param_2[4];
    uVar7 = param_2[5];
    uVar8 = param_2[6];
    uVar9 = param_2[7];
    *(undefined8 *)(DAT_14ca7c3f8 + 0x20 + lVar12) = *(undefined8 *)(param_2 + 8);
    puVar1 = (undefined4 *)(lVar10 + 0x10 + lVar12);
    *puVar1 = uVar6;
    puVar1[1] = uVar7;
    puVar1[2] = uVar8;
    puVar1[3] = uVar9;
    puVar1 = (undefined4 *)(lVar10 + lVar12);
    *puVar1 = uVar2;
    puVar1[1] = uVar3;
    puVar1[2] = uVar4;
    puVar1[3] = uVar5;
    FUN_147402710(*param_3);
    *param_3 = iVar11;
    return 1;
  }
  return 0;
}



// FUNCTION 147402710 FUN_147402710 body=136 status=ok
// SIG undefined FUN_147402710(void)

void FUN_147402710(int param_1)

{
  byte bVar1;
  longlong lVar2;
  undefined *puVar3;
  int iVar4;
  
  lVar2 = DAT_14ca7c3f8;
  if (DAT_14ca7c42c != 0) {
    *(int *)(DAT_14ca7c3f8 + (longlong)DAT_14ca7c428 * 0x30) = param_1;
  }
  *(undefined4 *)(lVar2 + (longlong)param_1 * 0x30) = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14ca7c42c) {
    iVar4 = DAT_14ca7c428;
  }
  *(int *)(lVar2 + 4 + (longlong)param_1 * 0x30) = iVar4;
  DAT_14ca7c42c = DAT_14ca7c42c + 1;
  puVar3 = &DAT_14ca7c408;
  if (DAT_14ca7c418 != (undefined *)0x0) {
    puVar3 = DAT_14ca7c418;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar1 = (byte)param_1 & 0x1f;
  DAT_14ca7c428 = param_1;
  *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  return;
}



// FUNCTION 147402798 FUN_147402798 body=57 status=ok
// SIG undefined FUN_147402798(void)

void FUN_147402798(longlong param_1,int param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  if (param_2 != 0) {
    lVar3 = 0;
    do {
      puVar2 = *(undefined8 **)(param_1 + lVar3 * 8);
      if (puVar2 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar2 + 1);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          (**(code **)*puVar2)(puVar2,1);
        }
      }
      lVar3 = lVar3 + 1;
    } while (param_2 != (int)lVar3);
  }
  return;
}



// FUNCTION 1474027d2 FUN_1474027d2 body=132 status=ok
// SIG undefined FUN_1474027d2(void)

void FUN_1474027d2(longlong param_1,int param_2)

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



// FUNCTION 147402858 FUN_147402858 body=303 status=ok
// SIG undefined FUN_147402858(void)

void FUN_147402858(longlong *param_1)

{
  undefined4 *_Dst;
  undefined4 uVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  
  iVar7 = DAT_14c760d28;
  lVar2 = *param_1;
  _Dst = (undefined4 *)(lVar2 + 0x20);
  lVar8 = (longlong)(int)DAT_14c760d28;
  if (lVar8 < 0x3ff) {
    uVar1 = (&DAT_14ca7b3e0)[lVar8];
    *_Dst = uVar1;
    uVar6 = DAT_14c760d28 + 1;
  }
  else {
    iVar3 = 0x400 - DAT_14c760d28;
    memcpy(_Dst,&DAT_14ca7b3e0 + lVar8,(longlong)iVar3 * 4);
    (*DAT_14ca7fc70)(0x400,&DAT_14ca7b3e0);
    uVar6 = iVar7 - 0x3ff;
    memcpy(_Dst + iVar3,&DAT_14ca7b3e0,(ulonglong)uVar6 * 4);
    uVar1 = *_Dst;
  }
  DAT_14c760d28 = uVar6;
  FUN_1473e5c95(*(undefined4 *)(lVar2 + 0x24),uVar1);
  (*DAT_14ca7fc78)(*(undefined4 *)(lVar2 + 0x24),*(undefined4 *)(lVar2 + 0x10),0,
                   (uint)((*(byte *)(lVar2 + 0x18) & 6) != 0) * 4 + 0x88e4);
  uVar6 = DAT_14c760d2c;
  lVar8 = param_1[1];
  if (lVar8 != 0) {
    uVar4 = (ulonglong)*(uint *)(lVar2 + 0x10);
    if (DAT_14c760d2c == 0) {
      (*DAT_14ca7ff50)(*(undefined4 *)(lVar2 + 0x24),0,uVar4,lVar8);
    }
    else if (*(uint *)(lVar2 + 0x10) != 0) {
      iVar7 = 0;
      do {
        uVar5 = (uint)uVar4;
        if (uVar6 < uVar5) {
          uVar4 = (ulonglong)uVar6;
        }
        (*DAT_14ca7ff50)(*(undefined4 *)(lVar2 + 0x24),iVar7,uVar4,lVar8);
        iVar7 = iVar7 + (int)uVar4;
        lVar8 = lVar8 + uVar4;
        uVar5 = uVar5 - (int)uVar4;
        uVar4 = (ulonglong)uVar5;
      } while (uVar5 != 0);
    }
  }
  LOCK();
  DAT_14ca84ee0 = DAT_14ca84ee0 + (ulonglong)*(uint *)(lVar2 + 0x10);
  UNLOCK();
  return;
}



// FUNCTION 147402988 FUN_147402988 body=58 status=ok
// SIG undefined FUN_147402988(void)

undefined8 * FUN_147402988(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a374b28;
  FUN_1431d5be6();
  *param_1 = &PTR_FUN_149e38530;
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1474029c2 FUN_1474029c2 body=39 status=ok
// SIG undefined FUN_1474029c2(void)

undefined8 * FUN_1474029c2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149e38530;
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1474029ea FUN_1474029ea body=81 status=ok
// SIG undefined FUN_1474029ea(void)

void FUN_1474029ea(longlong *param_1,int param_2)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + ((longlong)param_2 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x14) == param_2) {
          FUN_147402a3c(param_1,iVar1);
          return;
        }
        iVar1 = *(int *)(*param_1 + (longlong)iVar1 * 0x14 + 0xc);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 147402a3c FUN_147402a3c body=93 status=ok
// SIG undefined FUN_147402a3c(void)

void FUN_147402a3c(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar2 = *param_1;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  lVar1 = lVar2 + (longlong)param_2 * 0x14;
  lVar6 = (longlong)*(int *)(lVar1 + 0x10);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar2 + 0xc + lVar6 * 0x14);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar2 + lVar6 * 0x14 + 0xc);
  }
  *puVar3 = *(undefined4 *)(lVar1 + 0xc);
  FUN_1473f51fa(param_1,param_2,1);
  return;
}



// FUNCTION 147402a9a FUN_147402a9a body=157 status=ok
// SIG undefined FUN_147402a9a(void)

undefined8 FUN_147402a9a(longlong *param_1,ulonglong param_2)

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
        if (**(ulonglong **)(*param_1 + (longlong)iVar1 * 0x10) == param_2) {
          FUN_147402b38(param_1,iVar1);
          return 1;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x10 + *param_1 + 8);
      } while (iVar1 != -1);
    }
  }
  return 0;
}



// FUNCTION 147402b38 FUN_147402b38 body=90 status=ok
// SIG undefined FUN_147402b38(void)

void FUN_147402b38(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  plVar4 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[8];
  }
  lVar5 = (longlong)*(int *)(lVar1 + 0xc + (longlong)param_2 * 0x10);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 8 + lVar5 * 0x10);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x10 + 8);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x10 + 8);
  FUN_147402b92();
  return;
}



// FUNCTION 147402b92 FUN_147402b92 body=114 status=ok
// SIG undefined FUN_147402b92(void)

void FUN_147402b92(longlong *param_1,int param_2)

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



// FUNCTION 147402c04 FUN_147402c04 body=334 status=ok
// SIG undefined FUN_147402c04(void)

undefined4 * FUN_147402c04(undefined4 *param_1,undefined8 *param_2)

{
  ulonglong *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  undefined *puVar7;
  ulonglong uVar8;
  int iVar9;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_147402d54(local_40);
  puVar1 = (ulonglong *)*param_2;
  *local_38 = puVar1;
  *(undefined4 *)(local_38 + 1) = 0xffffffff;
  local_44 = local_40[0];
  uVar8 = *puVar1;
  uVar5 = ((uint)(uVar8 >> 0x14) & 0xffff ^ (uint)(uVar8 >> 4)) * -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  uVar5 = uVar5 >> 0x10 ^ uVar5;
  cVar4 = FUN_147402e62(uVar5,local_38,&local_44);
  uVar3 = local_44;
  if (cVar4 == '\0') {
    uVar6 = DAT_14ca7fab0 - DAT_14ca7fadc;
    iVar9 = 1;
    if (3 < uVar6) {
      uVar8 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar2 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar9 <= DAT_14ca7faf0)) {
      uVar5 = DAT_14ca7faf0 - 1U & uVar5;
      *(uint *)((longlong)local_38 + 0xc) = uVar5;
      puVar7 = DAT_14ca7fae8;
      if (DAT_14ca7fae8 == (undefined *)0x0) {
        puVar7 = &DAT_14ca7fae0;
      }
      *(undefined4 *)(local_38 + 1) =
           *(undefined4 *)(puVar7 + ((longlong)DAT_14ca7faf0 - 1U & (longlong)(int)uVar5) * 4);
      puVar7 = DAT_14ca7fae8;
      if (DAT_14ca7fae8 == (undefined *)0x0) {
        puVar7 = &DAT_14ca7fae0;
      }
      *(undefined4 *)(puVar7 + ((longlong)DAT_14ca7faf0 - 1U & (longlong)(int)uVar5) * 4) = local_44
      ;
    }
    else {
      DAT_14ca7faf0 = iVar9;
      FUN_14740130a(&DAT_14ca7faa8);
    }
  }
  *param_1 = uVar3;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147402d54 FUN_147402d54 body=269 status=ok
// SIG undefined FUN_147402d54(void)

int * FUN_147402d54(int *param_1)

{
  byte bVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14ca7fad8;
  iVar4 = DAT_14ca7fab0;
  if (DAT_14ca7fadc == 0) {
    iVar2 = DAT_14ca7fab0 + 1;
    bVar7 = DAT_14ca7fab4 == DAT_14ca7fab0;
    DAT_14ca7fab0 = iVar2;
    if (bVar7) {
      FUN_1446efaca(&DAT_14ca7faa8,iVar4);
    }
    lVar6 = (longlong)iVar4;
    iVar2 = FUN_144a54ea4(&DAT_14ca7fab8,1);
    puVar3 = DAT_14ca7fac8;
    if (DAT_14ca7fac8 == (undefined *)0x0) {
      puVar3 = &DAT_14ca7fab8;
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
    lVar6 = (longlong)DAT_14ca7fad8;
    DAT_14ca7fad8 = *(int *)(DAT_14ca7faa8 + 4 + lVar6 * 0x10);
    DAT_14ca7fadc = DAT_14ca7fadc + -1;
    iVar4 = iVar2;
    if (DAT_14ca7fadc != 0) {
      *(undefined4 *)(DAT_14ca7faa8 + (longlong)DAT_14ca7fad8 * 0x10) = 0xffffffff;
    }
  }
  puVar3 = &DAT_14ca7fab8;
  if (DAT_14ca7fac8 != (undefined *)0x0) {
    puVar3 = DAT_14ca7fac8;
  }
  iVar2 = iVar4 + 0x1f;
  if (-1 < iVar4) {
    iVar2 = iVar4;
  }
  *(uint *)(puVar3 + (longlong)(iVar2 >> 5) * 4) =
       *(uint *)(puVar3 + (longlong)(iVar2 >> 5) * 4) | 1 << ((byte)iVar4 & 0x1f);
  *param_1 = iVar4;
  *(longlong *)(param_1 + 2) = lVar6 * 0x10 + DAT_14ca7faa8;
  return param_1;
}



// FUNCTION 147402e62 FUN_147402e62 body=153 status=ok
// SIG undefined FUN_147402e62(void)

undefined8 FUN_147402e62(uint param_1,undefined8 *param_2,int *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  undefined *puVar3;
  
  if ((DAT_14ca7fab0 - DAT_14ca7fadc != 1) && (DAT_14ca7fab0 != DAT_14ca7fadc)) {
    puVar3 = &DAT_14ca7fae0;
    if (DAT_14ca7fae8 != (undefined *)0x0) {
      puVar3 = DAT_14ca7fae8;
    }
    iVar2 = *(int *)(puVar3 + (ulonglong)(DAT_14ca7faf0 - 1U & param_1) * 4);
    if (iVar2 != -1) {
      do {
        puVar1 = (undefined8 *)(DAT_14ca7faa8 + (longlong)iVar2 * 0x10);
        if (**(longlong **)(DAT_14ca7faa8 + (longlong)iVar2 * 0x10) == *(longlong *)*param_2) {
          *puVar1 = (longlong *)*param_2;
          FUN_147402b92(&DAT_14ca7faa8,*param_3);
          *param_3 = iVar2;
          return 1;
        }
        iVar2 = *(int *)(puVar1 + 1);
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 147402efc FUN_147402efc body=95 status=ok
// SIG undefined FUN_147402efc(void)

void FUN_147402efc(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((longlong)param_2 * 0x10 + *param_1);
  FUN_1459ab2e7(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x10 + (longlong)_Dst),(longlong)iVar2 << 4);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 147402f5c FUN_147402f5c body=63 status=ok
// SIG undefined FUN_147402f5c(void)

void FUN_147402f5c(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147402f9c(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 147402f9c FUN_147402f9c body=97 status=ok
// SIG undefined FUN_147402f9c(void)

ulonglong FUN_147402f9c(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((((longlong)(int)(param_3 - param_2) & 0xffffffffffffc00U) != 0) ||
      ((int)(param_2 * 3) < (int)(param_3 * 2))) &&
     (param_2 == 0 || 0x40 < (int)(param_3 - param_2))) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 4,8);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 147402ffd FUN_147402ffd body=184 status=ok
// SIG undefined FUN_147402ffd(void)

void FUN_147402ffd(longlong *param_1,undefined2 *param_2,undefined8 param_3)

{
  ushort uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  longlong lVar4;
  ushort uVar5;
  undefined1 auStack_78 [32];
  undefined2 *local_58;
  undefined2 *local_50;
  ushort *local_48;
  undefined2 local_38;
  undefined2 local_36;
  undefined2 local_34;
  ushort local_32;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = param_2[2];
  if (uVar1 != 0) {
    uVar5 = 4;
    if (uVar1 < 4) {
      uVar5 = uVar1;
    }
    uVar2 = *param_2;
    uVar3 = param_2[1];
    lVar4 = param_1[2];
    FUN_144ab3e68(*param_1,param_1 + 1,uVar5,param_3);
    local_48 = &local_32;
    local_50 = &local_34;
    local_58 = &local_36;
    local_38 = uVar2;
    local_36 = uVar3;
    local_34 = (short)lVar4;
    local_32 = uVar5;
    FUN_144ab3f26(*param_1,*param_1 + 0x38,param_1 + 3);
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474030b6 FUN_1474030b6 body=184 status=ok
// SIG undefined FUN_1474030b6(void)

void FUN_1474030b6(longlong *param_1,undefined2 *param_2,undefined8 param_3)

{
  ushort uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  longlong lVar4;
  ushort uVar5;
  undefined1 auStack_78 [32];
  undefined2 *local_58;
  undefined2 *local_50;
  ushort *local_48;
  undefined2 local_38;
  undefined2 local_36;
  undefined2 local_34;
  ushort local_32;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = param_2[2];
  if (uVar1 != 0) {
    uVar5 = 4;
    if (uVar1 < 4) {
      uVar5 = uVar1;
    }
    uVar2 = *param_2;
    uVar3 = param_2[1];
    lVar4 = param_1[2];
    FUN_144ab3e68(*param_1,param_1 + 1,uVar5,param_3);
    local_48 = &local_32;
    local_50 = &local_34;
    local_58 = &local_36;
    local_38 = uVar2;
    local_36 = uVar3;
    local_34 = (short)lVar4;
    local_32 = uVar5;
    FUN_144ab3f26(*param_1,*param_1 + 0x38,param_1 + 3);
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147403170 FUN_147403170 body=62 status=ok
// SIG undefined FUN_147403170(void)

void FUN_147403170(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1474031ae(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x18,8);
  }
  return;
}



// FUNCTION 1474031ae FUN_1474031ae body=112 status=ok
// SIG undefined FUN_1474031ae(void)

ulonglong FUN_1474031ae(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x18) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_1474031e8;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x18,8);
      param_2 = param_2 / 0x18;
    }
  }
LAB_1474031e8:
  return param_2 & 0xffffffff;
}



// FUNCTION 14740321e FUN_14740321e body=147 status=ok
// SIG undefined FUN_14740321e(void)

void FUN_14740321e(longlong param_1,int param_2)

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



// FUNCTION 1474032b2 FUN_1474032b2 body=48 status=ok
// SIG undefined FUN_1474032b2(void)

void FUN_1474032b2(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x18,8);
  }
  return;
}



// FUNCTION 1474032e2 FUN_1474032e2 body=68 status=ok
// SIG undefined FUN_1474032e2(void)

char FUN_1474032e2(longlong param_1,longlong param_2,int param_3)

{
  char cVar1;
  
  if (param_3 == 0) {
    cVar1 = '\x01';
  }
  else {
    do {
      param_3 = param_3 + -1;
      cVar1 = FUN_1473ff0cb(param_1,param_2);
      if (cVar1 == '\0') {
        return '\0';
      }
      param_1 = param_1 + 0x1c;
      param_2 = param_2 + 0x1c;
    } while (param_3 != 0);
  }
  return cVar1;
}



// FUNCTION 147403326 FUN_147403326 body=155 status=ok
// SIG undefined FUN_147403326(void)

int FUN_147403326(uint param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  undefined *puVar5;
  longlong lVar6;
  
  lVar3 = DAT_14ca7f2f0;
  if (DAT_14ca7f2f8 != DAT_14ca7f324) {
    puVar5 = &DAT_14ca7f328;
    if (DAT_14ca7f330 != (undefined *)0x0) {
      puVar5 = DAT_14ca7f330;
    }
    iVar1 = *(int *)(puVar5 + (ulonglong)(DAT_14ca7f338 - 1U & param_1) * 4);
    if (iVar1 != -1) {
      iVar2 = *(int *)(param_2 + 0x1dc);
      do {
        lVar6 = (longlong)iVar1 * 0x220;
        if ((*(int *)(lVar3 + 0x1dc + lVar6) == iVar2) &&
           (cVar4 = FUN_1474032e2(lVar3 + lVar6,param_2,iVar2), cVar4 != '\0')) {
          return iVar1;
        }
        iVar1 = *(int *)(lVar3 + 0x218 + lVar6);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 1474033c2 FUN_1474033c2 body=383 status=ok
// SIG undefined FUN_1474033c2(void)

undefined4 * FUN_1474033c2(undefined4 *param_1,undefined8 *param_2)

{
  void *_Src;
  undefined8 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  char cVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  int iVar14;
  undefined *puVar15;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  void *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_147403542(local_48);
  _Src = (void *)*param_2;
  puVar1 = (undefined8 *)param_2[1];
  iVar14 = *(int *)((longlong)_Src + 0x1dc);
  *(int *)((longlong)local_40 + 0x1dc) = iVar14;
  if ((longlong)iVar14 == 0) {
    *(undefined4 *)((longlong)local_40 + 0x1e0) = 0x11;
  }
  else {
    FUN_147402008(local_40);
    memcpy(local_40,_Src,(longlong)iVar14 * 0x1c);
  }
  *(undefined8 *)((longlong)local_40 + 0x202) = *(undefined8 *)((longlong)_Src + 0x202);
  uVar3 = *(undefined4 *)((longlong)_Src + 0x1e4);
  uVar4 = *(undefined4 *)((longlong)_Src + 0x1e8);
  uVar5 = *(undefined4 *)((longlong)_Src + 0x1ec);
  uVar6 = *(undefined4 *)((longlong)_Src + 0x1f0);
  uVar7 = *(undefined4 *)((longlong)_Src + 0x1f8);
  uVar8 = *(undefined4 *)((longlong)_Src + 0x1fc);
  uVar9 = *(undefined4 *)((longlong)_Src + 0x200);
  *(undefined4 *)((longlong)local_40 + 500) = *(undefined4 *)((longlong)_Src + 500);
  *(undefined4 *)((longlong)local_40 + 0x1f8) = uVar7;
  *(undefined4 *)((longlong)local_40 + 0x1fc) = uVar8;
  *(undefined4 *)((longlong)local_40 + 0x200) = uVar9;
  *(undefined4 *)((longlong)local_40 + 0x1e4) = uVar3;
  *(undefined4 *)((longlong)local_40 + 0x1e8) = uVar4;
  *(undefined4 *)((longlong)local_40 + 0x1ec) = uVar5;
  *(undefined4 *)((longlong)local_40 + 0x1f0) = uVar6;
  *(undefined8 *)((longlong)local_40 + 0x210) = *puVar1;
  *puVar1 = 0;
  *(undefined4 *)((longlong)local_40 + 0x218) = 0xffffffff;
  local_4c = local_48[0];
  uVar12 = *(uint *)((longlong)local_40 + 0x1e4);
  cVar10 = FUN_147403656(uVar12,local_40,&local_4c);
  uVar3 = local_4c;
  if (cVar10 == '\0') {
    uVar11 = DAT_14ca7f2f8 - DAT_14ca7f324;
    iVar14 = 1;
    if (3 < uVar11) {
      uVar13 = (ulonglong)(uVar11 & 0xfffffffe) + 0xf;
      lVar2 = 0x3f;
      if (uVar13 != 0) {
        for (; uVar13 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar14 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar11 < 1) || (iVar14 <= DAT_14ca7f338)) {
      uVar12 = DAT_14ca7f338 - 1U & uVar12;
      *(uint *)((longlong)local_40 + 0x21c) = uVar12;
      puVar15 = &DAT_14ca7f328;
      if (DAT_14ca7f330 != (undefined *)0x0) {
        puVar15 = DAT_14ca7f330;
      }
      *(undefined4 *)((longlong)local_40 + 0x218) =
           *(undefined4 *)(puVar15 + (longlong)(int)uVar12 * 4);
      *(undefined4 *)(puVar15 + (longlong)(int)uVar12 * 4) = local_4c;
    }
    else {
      DAT_14ca7f338 = iVar14;
      FUN_14740376e();
    }
  }
  *param_1 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147403542 FUN_147403542 body=275 status=ok
// SIG undefined FUN_147403542(void)

int * FUN_147403542(int *param_1)

{
  byte bVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14ca7f320;
  iVar4 = DAT_14ca7f2f8;
  if (DAT_14ca7f324 == 0) {
    iVar2 = DAT_14ca7f2f8 + 1;
    bVar7 = DAT_14ca7f2fc == DAT_14ca7f2f8;
    DAT_14ca7f2f8 = iVar2;
    if (bVar7) {
      FUN_1412efd64(&DAT_14ca7f2f0,iVar4);
    }
    lVar6 = (longlong)iVar4;
    iVar2 = FUN_144a54ea4(&DAT_14ca7f300,1);
    puVar3 = DAT_14ca7f310;
    if (DAT_14ca7f310 == (undefined *)0x0) {
      puVar3 = &DAT_14ca7f300;
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
    lVar6 = (longlong)DAT_14ca7f320;
    DAT_14ca7f320 = *(int *)(DAT_14ca7f2f0 + 4 + lVar6 * 0x220);
    DAT_14ca7f324 = DAT_14ca7f324 + -1;
    iVar4 = iVar2;
    if (DAT_14ca7f324 != 0) {
      *(undefined4 *)(DAT_14ca7f2f0 + (longlong)DAT_14ca7f320 * 0x220) = 0xffffffff;
    }
  }
  puVar3 = &DAT_14ca7f300;
  if (DAT_14ca7f310 != (undefined *)0x0) {
    puVar3 = DAT_14ca7f310;
  }
  iVar2 = iVar4 + 0x1f;
  if (-1 < iVar4) {
    iVar2 = iVar4;
  }
  *(uint *)(puVar3 + (longlong)(iVar2 >> 5) * 4) =
       *(uint *)(puVar3 + (longlong)(iVar2 >> 5) * 4) | 1 << ((byte)iVar4 & 0x1f);
  *param_1 = iVar4;
  *(longlong *)(param_1 + 2) = lVar6 * 0x220 + DAT_14ca7f2f0;
  return param_1;
}



// FUNCTION 147403656 FUN_147403656 body=145 status=ok
// SIG undefined FUN_147403656(void)

undefined8 FUN_147403656(undefined8 param_1,void *param_2,int *param_3)

{
  uint *puVar1;
  void *_Dst;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  
  if ((DAT_14ca7f2f8 - DAT_14ca7f324 != 1) && (iVar4 = FUN_147403326(), iVar4 != -1)) {
    _Dst = (void *)(DAT_14ca7f2f0 + (longlong)iVar4 * 0x220);
    lVar3 = *(longlong *)(DAT_14ca7f2f0 + 0x210 + (longlong)iVar4 * 0x220);
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
    memmove(_Dst,param_2,0x218);
    FUN_1474036e8(*param_3);
    *param_3 = iVar4;
    return 1;
  }
  return 0;
}



// FUNCTION 1474036e8 FUN_1474036e8 body=134 status=ok
// SIG undefined FUN_1474036e8(void)

void FUN_1474036e8(int param_1)

{
  byte bVar1;
  longlong lVar2;
  undefined *puVar3;
  int iVar4;
  
  lVar2 = DAT_14ca7f2f0;
  if (DAT_14ca7f324 != 0) {
    *(int *)(DAT_14ca7f2f0 + (longlong)DAT_14ca7f320 * 0x220) = param_1;
  }
  *(undefined4 *)(lVar2 + (longlong)param_1 * 0x220) = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14ca7f324) {
    iVar4 = DAT_14ca7f320;
  }
  *(int *)(lVar2 + 4 + (longlong)param_1 * 0x220) = iVar4;
  DAT_14ca7f324 = DAT_14ca7f324 + 1;
  puVar3 = &DAT_14ca7f300;
  if (DAT_14ca7f310 != (undefined *)0x0) {
    puVar3 = DAT_14ca7f310;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar1 = (byte)param_1 & 0x1f;
  DAT_14ca7f320 = param_1;
  *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  return;
}



// FUNCTION 14740376e FUN_14740376e body=477 status=ok
// SIG undefined FUN_14740376e(void)

void FUN_14740376e(void)

{
  longlong lVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined *puVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14ca7f330 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14ca7f330,0,0,4);
  }
  uVar2 = DAT_14ca7f338;
  uVar3 = local_50;
  if (DAT_14ca7f338 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14ca7f328,0,DAT_14ca7f338,4);
    if (0 < (int)uVar2) {
      do {
        puVar5 = DAT_14ca7f330;
        if (DAT_14ca7f330 == (undefined *)0x0) {
          puVar5 = &DAT_14ca7f328;
        }
        *(undefined4 *)(puVar5 + (ulonglong)(DAT_14ca7f338 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar2 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14ca7f300;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14ca7f318 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14ca7f2f0;
    local_60 = local_40;
    local_58 = local_38;
    local_50 = local_30;
    uVar3 = local_50;
    local_48 = local_28;
    local_44 = local_24;
    local_50._4_4_ = (int)((ulonglong)local_30 >> 0x20);
    if (local_50._4_4_ < *(int *)(local_38 + 0x18)) {
      iVar4 = local_50._4_4_;
      local_50 = uVar3;
      do {
        lVar1 = *local_68;
        lVar6 = (longlong)iVar4 * 0x220;
        uVar9 = (longlong)(int)DAT_14ca7f338 - 1U & (longlong)*(int *)(lVar1 + 0x1e4 + lVar6);
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x21c + lVar6) = iVar8;
        puVar5 = DAT_14ca7f330;
        if (DAT_14ca7f330 == (undefined *)0x0) {
          puVar5 = &DAT_14ca7f328;
        }
        *(undefined4 *)(lVar1 + 0x218 + lVar6) =
             *(undefined4 *)(puVar5 + ((longlong)(int)DAT_14ca7f338 - 1U & uVar9) * 4);
        puVar5 = DAT_14ca7f330;
        if (DAT_14ca7f330 == (undefined *)0x0) {
          puVar5 = &DAT_14ca7f328;
        }
        *(int *)(puVar5 + ((longlong)iVar8 & (longlong)(int)DAT_14ca7f338 - 1U) * 4) = iVar4;
        local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~local_60._4_4_);
        FUN_1449c0562(&local_60);
        iVar4 = local_50._4_4_;
        uVar3 = local_50;
      } while (local_50._4_4_ < *(int *)(local_58 + 0x18));
    }
  }
  local_50 = uVar3;
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14740394c FUN_14740394c body=132 status=ok
// SIG undefined FUN_14740394c(void)

void FUN_14740394c(longlong param_1,int param_2)

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



// FUNCTION 1474039d2 FUN_1474039d2 body=201 status=ok
// SIG undefined FUN_1474039d2(void)

void FUN_1474039d2(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  
  iVar1 = (int)param_1[1];
  lVar4 = (longlong)iVar1;
  if (lVar4 != 0) {
    plVar2 = (longlong *)*param_1;
    iVar5 = 0;
    bVar10 = *plVar2 == *(longlong *)*param_2;
    iVar7 = 0;
    do {
      iVar3 = iVar7 + 1;
      if (iVar7 + 1 < iVar1) {
        iVar3 = iVar1;
      }
      iVar8 = iVar7;
      lVar6 = (longlong)iVar7;
      do {
        lVar6 = lVar6 + 1;
        iVar9 = iVar3;
        if (lVar4 <= lVar6) break;
        iVar8 = iVar8 + 1;
        iVar9 = iVar8;
      } while (bVar10 == (plVar2[lVar6] == *(longlong *)*param_2));
      if (bVar10 == false) {
        if (iVar5 != iVar7) {
          memmove(plVar2 + iVar5,plVar2 + iVar7,(longlong)(iVar9 - iVar7) << 3);
        }
        iVar5 = iVar5 + (iVar9 - iVar7);
      }
      bVar10 = (bool)(bVar10 ^ 1);
      iVar7 = iVar9;
    } while (lVar6 < lVar4);
    *(int *)(param_1 + 1) = iVar5;
  }
  return;
}



// FUNCTION 147403a9c FUN_147403a9c body=132 status=ok
// SIG undefined FUN_147403a9c(void)

void FUN_147403a9c(longlong param_1,int param_2)

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



// FUNCTION 147403b22 FUN_147403b22 body=251 status=ok
// SIG undefined FUN_147403b22(void)

undefined8 *
FUN_147403b22(undefined8 *param_1,longlong param_2,longlong param_3,longlong param_4,
             longlong param_5,undefined8 param_6,char param_7)

{
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 *local_30;
  undefined8 *local_28;
  undefined8 **local_20;
  undefined1 local_14 [4];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *param_1 = param_6;
  param_1[1] = param_2;
  if (param_2 != 0) {
    LOCK();
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
    UNLOCK();
  }
  param_1[2] = param_3;
  if (param_3 != 0) {
    LOCK();
    *(int *)(param_3 + 8) = *(int *)(param_3 + 8) + 1;
    UNLOCK();
  }
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = param_4;
  if (param_4 != 0) {
    LOCK();
    *(int *)(param_4 + 8) = *(int *)(param_4 + 8) + 1;
    UNLOCK();
  }
  param_1[6] = param_5;
  if (param_5 != 0) {
    LOCK();
    *(int *)(param_5 + 8) = *(int *)(param_5 + 8) + 1;
    UNLOCK();
  }
  *(char *)(param_1 + 7) = param_7;
  if (param_7 != '\0') {
    local_20 = &local_30;
    local_60 = param_1[1];
    local_28 = &local_60;
    local_58 = param_1[2];
    local_50 = param_1[3];
    local_48 = param_1[4];
    local_40 = param_1[5];
    local_38 = param_1[6];
    local_30 = param_1;
    FUN_14740cc84(&DAT_14ca7ff70,local_14,&local_28,0);
  }
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147403c1e FUN_147403c1e body=137 status=ok
// SIG undefined FUN_147403c1e(void)

void FUN_147403c1e(longlong param_1)

{
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(char *)(param_1 + 0x38) == '\x01') {
    local_40 = *(undefined8 *)(param_1 + 8);
    local_38 = *(undefined8 *)(param_1 + 0x10);
    local_30 = *(undefined8 *)(param_1 + 0x18);
    local_28 = *(undefined8 *)(param_1 + 0x20);
    local_20 = *(undefined8 *)(param_1 + 0x28);
    local_18 = *(undefined8 *)(param_1 + 0x30);
    FUN_14740d302(&DAT_14ca7ff70);
    *(undefined1 *)(param_1 + 0x38) = 0;
  }
  FUN_147403ca8(param_1 + 8);
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147403ca8 FUN_147403ca8 body=223 status=ok
// SIG undefined FUN_147403ca8(void)

void FUN_147403ca8(longlong *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  if (param_1[5] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[5] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (param_1[4] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[4] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (param_1[3] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[3] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (param_1[2] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[2] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (param_1[1] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[1] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (*param_1 != 0) {
    LOCK();
    puVar1 = (uint *)(*param_1 + 8);
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



// FUNCTION 147403d87 FUN_147403d87 body=188 status=ok
// SIG undefined FUN_147403d87(void)

undefined8
FUN_147403d87(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             longlong param_5,undefined8 param_6)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  longlong local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_5 == 0) {
    local_38 = 0;
    uStack_30 = 0;
    local_48 = param_1;
    uStack_40 = param_2;
    local_20 = param_4;
  }
  else {
    local_48 = 0;
    uStack_40 = 0;
    local_38 = param_5;
    uStack_30 = param_6;
    local_20 = 0;
  }
  local_28 = param_3;
  uVar1 = FUN_14740cf34(&local_48);
  iVar2 = FUN_14740d04c(&DAT_14ca7ff70,uVar1,&local_48);
  lVar3 = (longlong)iVar2 * 0x40 + DAT_14ca7ff70;
  if (lVar3 == 0 || iVar2 == -1) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(lVar3 + 0x30);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147403e44 FUN_147403e44 body=170 status=ok
// SIG undefined FUN_147403e44(void)

void FUN_147403e44(longlong param_1)

{
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  longlong local_38;
  undefined8 *local_30;
  longlong *local_28;
  undefined1 local_1c [4];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14ca80010);
  local_28 = &local_38;
  local_68 = *(undefined8 *)(param_1 + 8);
  local_30 = &local_68;
  local_60 = *(undefined8 *)(param_1 + 0x10);
  local_58 = *(undefined8 *)(param_1 + 0x18);
  local_50 = *(undefined8 *)(param_1 + 0x20);
  local_48 = *(undefined8 *)(param_1 + 0x28);
  local_40 = *(undefined8 *)(param_1 + 0x30);
  local_38 = param_1;
  FUN_14740d3ee(&DAT_14ca7ffc0,local_1c,&local_30,0);
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14ca80010);
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147403ef0 FUN_147403ef0 body=135 status=ok
// SIG undefined FUN_147403ef0(void)

void FUN_147403ef0(longlong param_1)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14ca80010);
  local_48 = *(undefined8 *)(param_1 + 8);
  local_40 = *(undefined8 *)(param_1 + 0x10);
  local_38 = *(undefined8 *)(param_1 + 0x18);
  local_30 = *(undefined8 *)(param_1 + 0x20);
  local_28 = *(undefined8 *)(param_1 + 0x28);
  local_20 = *(undefined8 *)(param_1 + 0x30);
  FUN_14740d93a();
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14ca80010);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147403f78 FUN_147403f78 body=323 status=ok
// SIG undefined FUN_147403f78(void)

longlong *
FUN_147403f78(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,longlong param_6,undefined8 param_7)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14ca80010);
  local_48 = param_4;
  if (param_6 == 0) {
    local_58 = 0;
    uStack_50 = 0;
    local_40 = param_5;
    local_68 = param_2;
    uStack_60 = param_3;
    uVar1 = FUN_14740cf34(&local_68);
  }
  else {
    local_68 = 0;
    uStack_60 = 0;
    local_58 = param_6;
    uStack_50 = param_7;
    local_40 = 0;
    uVar1 = FUN_14740cf34(&local_68);
  }
  iVar2 = FUN_14740d69e(&DAT_14ca7ffc0,uVar1,&local_68);
  lVar3 = (longlong)iVar2 * 0x40 + DAT_14ca7ffc0;
  if (lVar3 == 0 || iVar2 == -1) {
    plVar4 = (longlong *)0x0;
  }
  else {
    plVar4 = *(longlong **)(lVar3 + 0x30);
  }
  if ((plVar4 == (longlong *)0x0) ||
     (lVar3 = *plVar4,
     (*(uint *)(lVar3 + 8) & 0x3fffffff) == 0 || ((byte)(*(uint *)(lVar3 + 8) >> 0x1e) & 1) != 0)) {
    *param_1 = 0;
  }
  else {
    *param_1 = lVar3;
    if (lVar3 != 0) {
      LOCK();
      *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
      UNLOCK();
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14ca80010);
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474040bc FUN_1474040bc body=19 status=ok
// SIG undefined FUN_1474040bc(void)

void FUN_1474040bc(void)

{
  FUN_14740da34();
  FUN_14740dbde();
  return;
}



// FUNCTION 147404268 FUN_147404268 body=304 status=ok
// SIG undefined FUN_147404268(void)

void FUN_147404268(longlong *param_1,undefined8 param_2,undefined8 *param_3,longlong *param_4,
                  undefined4 *param_5)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  undefined4 *local_68;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  longlong local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_28 = 0;
  uStack_20 = 0;
  local_48 = *param_5;
  uStack_44 = param_5[1];
  uStack_40 = param_5[2];
  uStack_3c = param_5[3];
  uStack_38 = param_5[4];
  uStack_34 = param_5[5];
  uStack_30 = param_5[6];
  local_68 = &local_48;
  local_58 = *param_3;
  local_50 = param_3[1];
  (**(code **)(*param_1 + 600))(local_48,uStack_3c,&local_58,&local_28);
  FUN_14735c9c0(param_4,uStack_20 & 0xffffffff,1);
  if (0 < (int)uStack_20) {
    lVar5 = 0xc;
    lVar6 = 0;
    do {
      bVar1 = *(byte *)(local_28 + 3 + lVar6 * 4);
      bVar2 = *(byte *)(local_28 + lVar6 * 4);
      bVar3 = *(byte *)(local_28 + 1 + lVar6 * 4);
      lVar4 = *param_4;
      *(float *)(lVar4 + -0xc + lVar5) = (float)*(byte *)(local_28 + 2 + lVar6 * 4) * 0.003921569;
      *(float *)(lVar4 + -8 + lVar5) = (float)bVar3 * 0.003921569;
      *(float *)(lVar4 + -4 + lVar5) = (float)bVar2 * 0.003921569;
      *(float *)(lVar4 + lVar5) = (float)bVar1 * 0.003921569;
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0x10;
    } while (lVar6 < (int)uStack_20);
  }
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14740439a FUN_14740439a body=120 status=ok
// SIG undefined FUN_14740439a(void)

void FUN_14740439a(longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 local_40;
  uint local_38;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_5[6] == 0) {
    local_48 = *param_5;
    local_40 = param_5[5];
    local_28 = *param_3;
    local_20 = param_3[1];
    local_38 = (uint)*(byte *)((longlong)param_5 + 0x11);
    (**(code **)(*param_1 + 0x278))(param_1,param_2,&local_28);
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147404414 FUN_147404414 body=99 status=ok
// SIG undefined FUN_147404414(void)

void FUN_147404414(longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)(param_6 + 0x18) == 0) {
    local_18 = *param_3;
    local_10 = param_3[1];
    local_28 = param_5;
    (**(code **)(*param_1 + 0x288))(param_1,param_2,&local_18);
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147404478 FUN_147404478 body=77 status=ok
// SIG undefined FUN_147404478(void)

longlong * FUN_147404478(undefined8 param_1,longlong *param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;
  
  if (param_4 == 0) {
    param_4 = DAT_14ca84b20;
  }
  lVar1 = FUN_14001cc68(0x70,0x10);
  FUN_147413aea(lVar1,param_4);
  *param_2 = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 1474044c6 FUN_1474044c6 body=270 status=ok
// SIG undefined FUN_1474044c6(void)

void FUN_1474044c6(undefined8 param_1,ulonglong *param_2,longlong param_3,undefined8 param_4)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  longlong local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_3 != 0) {
    LOCK();
    *(int *)(param_3 + 8) = *(int *)(param_3 + 8) + 1;
    UNLOCK();
  }
  local_30 = param_3;
  local_28 = param_4;
  if (*(char *)((longlong)param_2 + 100) == '\0') {
    puVar4 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar4 + 4;
    if ((undefined8 *)param_2[1] < puVar5) {
      FUN_140023dd8(param_2,0x28);
      puVar4 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar5 = puVar4 + 4;
    }
    *param_2 = (ulonglong)puVar5;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar4;
    param_2[6] = (ulonglong)(puVar4 + 1);
    puVar4[1] = 0;
    *puVar4 = &PTR_FUN_14a37d528;
    puVar4[2] = param_3;
    puVar4[3] = param_4;
  }
  else {
    FUN_1431e7a1a(&local_30);
    if (param_3 != 0) {
      LOCK();
      puVar1 = (uint *)(param_3 + 8);
      uVar3 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        FUN_144a54812(param_3);
      }
    }
  }
  FUN_14494c7ac(param_2,&local_38,1);
  if (local_38 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(local_38 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*local_38)(local_38,1);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474045d6 FUN_1474045d6 body=34 status=ok
// SIG undefined FUN_1474045d6(void)

void FUN_1474045d6(void)

{
  FUN_140033559(".\\Runtime/RHI/Private/DynamicRHI.cpp",0x23a,
                L"The current RHI does not implement support for virtually allocated textures.");
  return;
}



// FUNCTION 1474045f8 FUN_1474045f8 body=34 status=ok
// SIG undefined FUN_1474045f8(void)

void FUN_1474045f8(void)

{
  FUN_140033559(".\\Runtime/RHI/Private/DynamicRHI.cpp",0x23f,
                L"The current RHI does not implement support for virtually allocated textures.");
  return;
}



// FUNCTION 14740461a FUN_14740461a body=437 status=ok
// SIG undefined FUN_14740461a(void)

void FUN_14740461a(longlong *param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined1 auStack_b8 [40];
  undefined8 local_90;
  uint local_88 [2];
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_90 = *(longlong *)(param_2 + 0xd0);
  if (local_90 == 0) {
    local_90 = (**(code **)(*param_1 + 0x2f8))(param_1,param_2);
  }
  local_88[0] = *(uint *)(param_2 + 0x58);
  local_88[1] = *(undefined4 *)(param_2 + 0x5c);
  local_80 = *(undefined8 *)(param_2 + 0x60);
  local_78 = *(undefined8 *)(param_2 + 0x68);
  uStack_70 = *(undefined8 *)(param_2 + 0x70);
  local_68 = *(undefined8 *)(param_2 + 0x78);
  uStack_60 = *(undefined8 *)(param_2 + 0x80);
  local_58 = *(undefined4 *)(param_2 + 0x88);
  uStack_54 = *(undefined4 *)(param_2 + 0x8c);
  uStack_50 = *(undefined4 *)(param_2 + 0x90);
  uStack_4c = *(undefined4 *)(param_2 + 0x94);
  local_48 = *(undefined4 *)(param_2 + 0x98);
  uStack_44 = *(undefined4 *)(param_2 + 0x9c);
  uStack_40 = *(undefined4 *)(param_2 + 0xa0);
  uStack_3c = *(undefined4 *)(param_2 + 0xa4);
  local_38 = (ulonglong)*(byte *)(param_2 + 0xa8);
  uStack_30 = *(undefined8 *)(param_2 + 0xb0);
  local_28 = *(undefined8 *)(param_2 + 0xb8);
  uStack_20 = *(undefined8 *)(param_2 + 0xc0);
  local_18 = (ulonglong)*(byte *)(param_2 + 0xc9);
  lVar2 = 3;
  do {
    uVar1 = local_88[lVar2 * 2];
    *(uint *)(&local_90 + lVar2) = *(uint *)(&local_90 + lVar2) & 0x2000010;
    *(undefined4 *)((longlong)&local_90 + lVar2 * 8 + 4) = 0;
    local_88[lVar2 * 2] = uVar1 & 0x2000010;
    local_88[lVar2 * 2 + 1] = 0;
    lVar2 = lVar2 + 2;
  } while (lVar2 != 0xb);
  FUN_1447addd0(&local_90,0x80);
  if ((local_10 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474047d0 FUN_1474047d0 body=500 status=ok
// SIG undefined FUN_1474047d0(void)

undefined8 FUN_1474047d0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  lVar5 = 0;
  bVar2 = true;
  do {
    bVar1 = bVar2;
    if (param_2[lVar5 + 9] != param_3[lVar5 + 9]) {
      return 0;
    }
    lVar5 = 1;
    bVar2 = false;
  } while (bVar1);
  if ((((*(int *)(param_2 + 0xb) == *(int *)(param_3 + 0xb)) &&
       (*(char *)((longlong)param_2 + 0xc5) == *(char *)((longlong)param_3 + 0xc5))) &&
      (*(char *)((longlong)param_2 + 0xc6) == *(char *)((longlong)param_3 + 0xc6))) &&
     (((*(char *)((longlong)param_2 + 0xc9) == *(char *)((longlong)param_3 + 0xc9) &&
       (*(char *)((longlong)param_2 + 199) == *(char *)((longlong)param_3 + 199))) &&
      (*(int *)((longlong)param_2 + 0x5c) == *(int *)((longlong)param_3 + 0x5c))))) {
    lVar5 = 0x60;
    do {
      if (*(char *)((longlong)param_2 + lVar5) != *(char *)((longlong)param_3 + lVar5)) {
        return 0;
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 != 0x68);
    lVar5 = 0xd;
    do {
      if (((*(uint *)(param_3 + lVar5) ^ *(uint *)(param_2 + lVar5)) & 0x2000010) != 0) {
        return 0;
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 != 0x15);
    if ((((*(char *)(param_2 + 0x15) == *(char *)(param_3 + 0x15)) &&
         (((*(uint *)(param_2 + 0x16) ^ *(uint *)(param_3 + 0x16)) & 0x2000014) == 0)) &&
        ((*(char *)(param_2 + 0x17) == *(char *)(param_3 + 0x17) &&
         ((((*(char *)((longlong)param_2 + 0xb9) == *(char *)((longlong)param_3 + 0xb9) &&
            (*(char *)((longlong)param_2 + 0xba) == *(char *)((longlong)param_3 + 0xba))) &&
           (*(char *)((longlong)param_2 + 0xbb) == *(char *)((longlong)param_3 + 0xbb))) &&
          ((*(int *)((longlong)param_2 + 0xbc) == *(int *)((longlong)param_3 + 0xbc) &&
           (*(short *)(param_2 + 0x18) == *(short *)(param_3 + 0x18))))))))) &&
       (((*(char *)((longlong)param_2 + 0xc2) == *(char *)((longlong)param_3 + 0xc2) &&
         ((*(char *)((longlong)param_2 + 0xc3) == *(char *)((longlong)param_3 + 0xc3) &&
          (*(char *)((longlong)param_2 + 0xc4) == *(char *)((longlong)param_3 + 0xc4))))) &&
        ((((param_2[1] == param_3[1] &&
           (((param_2[2] == param_3[2] && (param_2[3] == param_3[3])) && (param_2[4] == param_3[4]))
           )) && (((param_2[5] == param_3[5] &&
                   (cVar3 = FUN_1431d9b2a(*param_2,*param_3), cVar3 != '\0')) &&
                  (cVar3 = FUN_1431d9bdb(param_2[6],param_3[6]), cVar3 != '\0')))) &&
         (cVar3 = FUN_1431d9c93(param_2[7],param_3[7]), cVar3 != '\0')))))) {
      uVar4 = FUN_1431d9d5a(param_2[8],param_3[8]);
      return uVar4;
    }
  }
  return 0;
}



// FUNCTION 1474049c6 FUN_1474049c6 body=43 status=ok
// SIG undefined FUN_1474049c6(void)

void FUN_1474049c6(longlong *param_1)

{
  (**(code **)(*param_1 + 0x158))();
  return;
}



// FUNCTION 147404a00 FUN_147404a00 body=125 status=ok
// SIG undefined FUN_147404a00(void)

void FUN_147404a00(longlong param_1)

{
  *(undefined4 *)(param_1 + 0xe8) = 0;
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    FUN_1400020a8();
  }
  FUN_14740914a(param_1 + 0xa0);
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_1400020a8();
  }
  FUN_14740914a(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_14740914a(param_1);
  return;
}



// FUNCTION 147404a7e FUN_147404a7e body=287 status=ok
// SIG undefined FUN_147404a7e(void)

void FUN_147404a7e(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  int iVar8;
  
  if ((char)param_1[1] != '\x01') {
    return;
  }
  *(int *)(param_1 + 5) = (int)param_1[5] + 1;
  plVar1 = param_1 + 4;
  lVar2 = param_1[4];
  if (lVar2 == 0) {
    lVar2 = param_1[3];
    lVar3 = (**(code **)(*param_1 + 8))(param_1,param_2,0);
    if (lVar3 != 0) {
      *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    }
    plVar4 = (longlong *)(lVar2 + 8);
    iVar8 = *(int *)(lVar2 + 0x10);
    *(uint *)(lVar2 + 0x10) = iVar8 + 1U;
    lVar7 = 0x10;
    lVar5 = 8;
    plVar6 = param_1 + 3;
    if (*(uint *)(lVar2 + 0x14) < iVar8 + 1U) {
      FUN_14740df76(plVar4,iVar8);
    }
  }
  else {
    lVar3 = (**(code **)(*param_1 + 8))(param_1,param_2,lVar2);
    if (lVar3 != 0) {
      *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    }
    plVar4 = (longlong *)(lVar2 + 0x60);
    iVar8 = *(int *)(lVar2 + 0x68);
    *(uint *)(lVar2 + 0x68) = iVar8 + 1U;
    lVar7 = 0x68;
    lVar5 = 0x60;
    plVar6 = plVar1;
    if (*(uint *)(lVar2 + 0x6c) < iVar8 + 1U) {
      FUN_14740df76(plVar4,iVar8);
    }
  }
  *(longlong *)(*plVar4 + (longlong)iVar8 * 8) = lVar3;
  plVar4 = *(longlong **)
            (*(longlong *)(*plVar6 + lVar5) + (longlong)(*(int *)(*plVar6 + lVar7) + -1) * 8);
  *plVar1 = (longlong)plVar4;
                    /* WARNING: Could not recover jumptable at 0x000147404b23. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x10))();
  return;
}



// FUNCTION 147404b9e FUN_147404b9e body=45 status=ok
// SIG undefined FUN_147404b9e(void)

void FUN_147404b9e(longlong param_1)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + -1;
    (**(code **)(**(longlong **)(param_1 + 0x20) + 0x18))();
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x58);
  }
  return;
}



// FUNCTION 147404bcb FUN_147404bcb body=10 status=ok
// SIG undefined FUN_147404bcb(void)

bool FUN_147404bcb(ulonglong param_1,ulonglong param_2)

{
  return (param_1 & ~param_2) == 0;
}



// FUNCTION 147404bd6 FUN_147404bd6 body=324 status=ok
// SIG undefined FUN_147404bd6(void)

bool FUN_147404bd6(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined8 local_88;
  undefined4 *local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 *local_68;
  undefined8 *local_60;
  undefined2 local_58;
  undefined8 local_50;
  undefined4 *local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_50 = 0x100000000;
  local_48 = &DAT_14ca80428;
  local_40 = 0xffffffff;
  local_38 = 0;
  if (DAT_14ca80440 != 0) {
    FUN_1449c0562(&local_50);
  }
  local_78 = local_40;
  local_70 = local_38;
  local_6c = local_34;
  local_88 = local_50;
  local_80 = local_48;
  local_90 = &DAT_14ca80418;
  local_68 = &DAT_14ca80418;
  local_60 = &DAT_14ca80418;
  local_58 = 0;
  do {
    iVar2 = local_78._4_4_;
    iVar1 = local_80[6];
    if (iVar1 <= local_78._4_4_) break;
    cVar3 = FUN_147404d1c(*(undefined8 *)(*local_90 + 0x10 + (longlong)local_78._4_4_ * 0x20),
                          param_1);
    local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
    FUN_1449c0562(&local_88);
  } while (cVar3 == '\0');
  if (((char)local_58 == '\x01') && (local_58._1_1_ == '\x01')) {
    FUN_14740e346(local_60,*(int *)(local_60 + 1) - *(int *)((longlong)local_60 + 0x34));
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return iVar2 < iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147404d1c FUN_147404d1c body=665 status=ok
// SIG undefined FUN_147404d1c(void)

undefined4 FUN_147404d1c(longlong param_1,int *param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  ulonglong uStack_f0;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  longlong *local_d8;
  undefined8 uStack_d0;
  ulonglong local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_7c;
  undefined4 local_74;
  longlong local_68;
  undefined4 local_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_118;
  uVar5 = 0;
  if (*param_2 == 1) {
    local_88 = 0;
    local_80 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_7c = 0xffffffff00000080;
    local_74 = 0;
    local_68 = 0;
    local_60 = 0;
    FUN_140623ef4(&local_a8,&local_d8,param_2 + 6,0);
    local_c8 = local_c8 & 0xffffffff00000000;
    local_d8 = (longlong *)0x0;
    uStack_d0 = 0;
    if (param_2[0xf] != 0 || *(undefined1 (*) [16])(param_2 + 0xb) != (undefined1  [16])0x0) {
      FUN_140623ef4(&local_a8,&local_d8,param_2 + 0xb,0);
    }
    local_d8 = (longlong *)0x0;
    uStack_d0 = 0;
    local_c8 = local_c8 & 0xffffffff00000000;
    if (param_2[0x14] != 0 || *(undefined1 (*) [16])(param_2 + 0x10) != (undefined1  [16])0x0) {
      FUN_140623ef4(&local_a8,&local_d8,param_2 + 0x10,0);
    }
    local_d8 = (longlong *)0x0;
    uStack_d0 = 0;
    local_c8 = local_c8 & 0xffffffff00000000;
    if (param_2[0x19] != 0 || *(undefined1 (*) [16])(param_2 + 0x15) != (undefined1  [16])0x0) {
      FUN_140623ef4(&local_a8,&local_d8,param_2 + 0x15,0);
    }
    local_d8 = (longlong *)0x0;
    uStack_d0 = 0;
    local_c8 = local_c8 & 0xffffffff00000000;
    if (param_2[0x1e] != 0 || *(undefined1 (*) [16])(param_2 + 0x1a) != (undefined1  [16])0x0) {
      FUN_140623ef4(&local_a8,&local_d8,param_2 + 0x1a,0);
    }
    plVar1 = (longlong *)(param_1 + 0x30);
    uVar2 = param_1 + 0x40;
    local_f8 = 0x100000000;
    local_e8 = 0xffffffff;
    uStack_e0 = 0;
    uStack_f0 = uVar2;
    if (*(int *)(param_1 + 0x58) == 0) {
      iVar6 = 0;
    }
    else {
      FUN_1449c0562(&local_f8);
      iVar6 = *(int *)(param_1 + 0x58);
    }
    uStack_b8 = CONCAT44(uStack_dc,uStack_e0);
    local_c0 = local_e8;
    uVar3 = local_c0;
    uStack_d0 = local_f8;
    local_c8 = uStack_f0;
    local_c0._4_4_ = (int)((ulonglong)local_e8 >> 0x20);
    local_d8 = plVar1;
    local_c0 = uVar3;
    if ((local_c0._4_4_ == iVar6) && (uStack_f0 == uVar2)) {
      uVar5 = 0;
    }
    else {
      iVar4 = local_c0._4_4_;
      do {
        uVar5 = FUN_14740943a(&local_a8,*local_d8 + (longlong)iVar4 * 0xc0 + 0x50);
        if ((char)uVar5 != '\0') break;
        local_c0 = CONCAT44(local_c0._4_4_,(uint)local_c0 & ~uStack_d0._4_4_);
        FUN_1449c0562(&uStack_d0);
        iVar4 = local_c0._4_4_;
      } while (local_d8 != plVar1 || (local_c8 != uVar2 || local_c0._4_4_ != iVar6));
    }
    local_60 = 0;
    if (local_68 != 0) {
      FUN_1400020a8();
    }
    FUN_1404112b2(&local_a8);
  }
  if ((local_50 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 147404fb6 FUN_147404fb6 body=75 status=ok
// SIG undefined FUN_147404fb6(void)

void FUN_147404fb6(void)

{
  longlong *plVar1;
  
  plVar1 = DAT_14ca808c0;
  if ((DAT_14c760d84 == 0) || ((DAT_14ca84f5a & 1) == 0)) {
    LOCK();
    DAT_14ca808c0 = (longlong *)0x0;
    UNLOCK();
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
                    /* WARNING: Could not recover jumptable at 0x000147404ffe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x30))(plVar1,1);
      return;
    }
  }
  return;
}



// FUNCTION 147405001 FUN_147405001 body=60 status=ok
// SIG undefined FUN_147405001(void)

undefined8 FUN_147405001(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  if (param_1 == 0) {
    uVar3 = 0;
  }
  else {
    puVar2 = *(undefined8 **)(param_1 + 0x18);
    if (puVar2 != (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 0x18) = 0;
      LOCK();
      piVar1 = (int *)(puVar2 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(puVar2,1);
      }
    }
    uVar3 = *(undefined8 *)(param_1 + 0x28);
  }
  return uVar3;
}



// FUNCTION 14740503d FUN_14740503d body=81 status=ok
// SIG undefined FUN_14740503d(void)

undefined4 FUN_14740503d(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined4 *puVar4;
  
  iVar1 = FUN_14682a11e((longlong *)(param_1 + 0x48),*(undefined4 *)(param_2 + 0x88),param_2 + 0x88)
  ;
  uVar2 = 0xffffffff;
  if ((iVar1 != -1) &&
     (lVar3 = (longlong)iVar1 * 0x20 + *(longlong *)(param_1 + 0x48),
     puVar4 = (undefined4 *)(lVar3 + 0x14), puVar4 != (undefined4 *)0x0 && lVar3 != 0)) {
    uVar2 = *puVar4;
  }
  return uVar2;
}



// FUNCTION 14740508e FUN_14740508e body=84 status=ok
// SIG undefined FUN_14740508e(void)

undefined4 FUN_14740508e(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined4 *puVar4;
  
  iVar1 = FUN_14682a11e((longlong *)(param_1 + 0x98),*(undefined4 *)(param_2 + 0x88),param_2 + 0x88)
  ;
  uVar2 = 0xffffffff;
  if ((iVar1 != -1) &&
     (lVar3 = (longlong)iVar1 * 0x20 + *(longlong *)(param_1 + 0x98),
     puVar4 = (undefined4 *)(lVar3 + 0x14), puVar4 != (undefined4 *)0x0 && lVar3 != 0)) {
    uVar2 = *puVar4;
  }
  return uVar2;
}



// FUNCTION 1474050e2 FUN_1474050e2 body=84 status=ok
// SIG undefined FUN_1474050e2(void)

undefined4 FUN_1474050e2(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined4 *puVar4;
  
  iVar1 = FUN_14682a11e((longlong *)(param_1 + 0xe8),*(undefined4 *)(param_2 + 0x88),param_2 + 0x88)
  ;
  uVar2 = 0xffffffff;
  if ((iVar1 != -1) &&
     (lVar3 = (longlong)iVar1 * 0x20 + *(longlong *)(param_1 + 0xe8),
     puVar4 = (undefined4 *)(lVar3 + 0x14), puVar4 != (undefined4 *)0x0 && lVar3 != 0)) {
    uVar2 = *puVar4;
  }
  return uVar2;
}



// FUNCTION 147405136 FUN_147405136 body=7 status=ok
// SIG undefined FUN_147405136(void)

void FUN_147405136(undefined8 param_1)

{
  FUN_1431e2374(param_1,0);
  return;
}



// FUNCTION 14740513d thunk_FUN_140028f18 body=5 status=ok
// SIG undefined thunk_FUN_140028f18(void)

undefined8 * thunk_FUN_140028f18(longlong param_1,void *param_2)

{
  int *piVar1;
  ushort uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  char cVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  undefined8 unaff_RBP;
  uint uVar17;
  undefined1 auStack_168 [32];
  undefined8 *puStack_148;
  undefined8 **ppuStack_140;
  byte bStack_138;
  undefined8 *puStack_130;
  undefined8 *puStack_128;
  undefined8 *puStack_120;
  undefined8 *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_48;
  ulonglong uStack_40;
  
  uStack_40 = DAT_14c707940 ^ (ulonglong)auStack_168;
  puStack_120 = (undefined8 *)0x0;
  cVar7 = FUN_144713a98(&DAT_14ca80ec8);
  if (cVar7 != '\0') {
    if (((*(byte *)((longlong)param_2 + 0xcb) & 0x10) == 0) &&
       (cVar7 = FUN_1402ce39e(puStack_120), cVar7 == '\0')) {
      lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      uVar14 = DAT_14c760d80 ^ 1;
      uVar15 = *(uint *)(lVar3 + 0xc60) & 0x20;
      uVar17 = 1;
      if (uVar15 == 0) {
        uVar17 = uVar14;
      }
      lVar4 = *(longlong *)((longlong)puStack_120 + (ulonglong)(uVar17 << 4) + 0x18);
      if ((lVar4 != 0) && (lVar4 = *(longlong *)(lVar4 + 8), lVar4 != 0)) {
        uVar11 = FUN_1415b2962(&DAT_14ca80898);
        FUN_1431e52de(lVar4,uVar11,1);
        uVar15 = *(uint *)(lVar3 + 0xc60) & 0x20;
        uVar14 = DAT_14c760d80 ^ 1;
      }
      uVar17 = 1;
      if (uVar15 == 0) {
        uVar17 = uVar14;
      }
      plVar5 = *(longlong **)((longlong)puStack_120 + (ulonglong)(uVar17 << 4) + 0x18);
      if (plVar5 == (longlong *)0x0) {
        puStack_118 = (undefined8 *)0x0;
      }
      else {
        puVar6 = (undefined8 *)*plVar5;
        puStack_118 = puVar6;
        if (puVar6 != (undefined8 *)0x0) {
          LOCK();
          *(int *)(puVar6 + 1) = *(int *)(puVar6 + 1) + 1;
          UNLOCK();
          FUN_14178d6c2(param_1);
          if (puVar6 != (undefined8 *)0x0) {
            LOCK();
            piVar1 = (int *)(puVar6 + 1);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)*puVar6)(puVar6,1);
            }
          }
          goto LAB_140029391;
        }
      }
      FUN_14178d6c2(param_1,&puStack_118);
    }
LAB_140029391:
    puStack_120[2] = DAT_14c867d10;
    goto LAB_1400293a1;
  }
  iVar8 = 0;
  if ((DAT_14c760d84 != 0) && ((DAT_14ca84f5a & 1) != 0)) {
    memcpy(&puStack_118,param_2,0xd8);
    uStack_48 = (**(code **)(*DAT_14ca83900 + 0x2f8))(DAT_14ca83900,&puStack_118);
    uVar11 = DAT_14ca811c8;
    iVar8 = 0;
    if ((DAT_14c760d84 != 0) && ((DAT_14ca84f5a & 1) != 0)) {
      uVar12 = (**(code **)(*DAT_14ca83900 + 0x300))(DAT_14ca83900,&puStack_118);
      iVar8 = FUN_1402d0328(uVar11,uVar12);
    }
  }
  uVar9 = FUN_1431e3a5a(param_1,*(ushort *)((longlong)param_2 + 0xca) >> 0xc & 1);
  uVar10 = FUN_140032235(param_2);
  FUN_1431e10d4(uVar10,param_2,
                CONCAT71((int7)((ulonglong)unaff_RBP >> 8),iVar8 - 1U < 2) & 0xffffffff);
  puStack_120 = (undefined8 *)FUN_14001cc68(0x48,0x10);
  puStack_120[1] = 0;
  puStack_120[2] = DAT_14c867d10;
  puStack_120[5] = 0;
  puStack_120[6] = 0;
  puStack_120[3] = 0;
  puStack_120[4] = 0;
  *puStack_120 = &PTR_FUN_14a37d488;
  puStack_120[7] = 0;
  puStack_120[8] = 0;
  uVar10 = FUN_140032235(param_2);
  uVar11 = FUN_1431e1a2c(uVar10);
  puVar6 = puStack_120;
  puStack_120[1] = uVar11;
  if ((char)uVar9 != '\0') {
    puVar13 = (undefined8 *)FUN_1446fac86(0xa8);
    FUN_1447247dc(puVar13,0);
    *puVar13 = &PTR_FUN_149e00300;
    if (*(code **)(puVar13[0xe] + 0x18) != FUN_144713626) {
      (**(code **)(puVar13[0xe] + 0x18))(puVar13 + 0xe,puVar13 + 9);
    }
    puVar13[0xe] = LowLevelTasks::
                   TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                   TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                   ::vftable;
    puVar13[9] = puVar13;
    puVar13[10] = puVar13;
    lVar3 = *(longlong *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8
             );
    if (lVar3 == 0) {
      uVar11 = 0;
    }
    else {
      uVar11 = *(undefined8 *)(lVar3 + 0x30);
    }
    puVar13[0xf] = uVar11;
    puVar13[0x10] = 0xc80000527800c400;
    *(undefined4 *)((longlong)puVar13 + 0x1c) = 2;
    puStack_128 = puVar13;
    FUN_140314f2e(puVar6);
  }
  uVar2 = *(ushort *)((longlong)param_2 + 0xca);
  if ((uVar2 >> 0xc & 1) == 0) {
    LOCK();
    DAT_14ca812f4 = DAT_14ca812f4 + 1;
    UNLOCK();
    uVar2 = *(ushort *)((longlong)param_2 + 0xca);
  }
  iVar16 = 4;
  if (iVar8 != 1) {
    iVar16 = iVar8;
  }
  puStack_118 = (undefined8 *)0x0;
  uStack_110 = 0;
  uVar17 = 1;
  if ((*(byte *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0xc60) & 0x20) == 0) {
    uVar17 = DAT_14c760d80 ^ 1;
  }
  plVar5 = *(longlong **)((longlong)puStack_120 + (ulonglong)(uVar17 << 4) + 0x18);
  if ((plVar5 == (longlong *)0x0) ||
     (puVar6 = (undefined8 *)*plVar5, puStack_130 = puVar6, puVar6 == (undefined8 *)0x0)) {
    bStack_138 = (*(byte *)(param_1 + 0x17b) & 0x20) >> 5;
    ppuStack_140 = &puStack_118;
    puStack_148 = puStack_120;
    FUN_1431e4add(param_2,iVar16,uVar9,uVar2 >> 0xc & 1);
    FUN_14178cbdc(&DAT_14ca80ec8,param_2,&puStack_120);
  }
  else {
    LOCK();
    *(int *)(puVar6 + 1) = *(int *)(puVar6 + 1) + 1;
    UNLOCK();
    bStack_138 = (*(byte *)(param_1 + 0x17b) & 0x20) >> 5;
    ppuStack_140 = &puStack_118;
    puStack_148 = puStack_120;
    FUN_1431e4add(param_2,iVar16,uVar9);
    if (puVar6 == (undefined8 *)0x0 || ((byte)(uVar2 >> 0xc) & 1) != 0) {
      FUN_14178cbdc(&DAT_14ca80ec8,param_2,&puStack_120);
      if (puVar6 == (undefined8 *)0x0) goto LAB_1400292ec;
    }
    else {
      FUN_14178d6c2(param_1,&puStack_130);
      FUN_14178cbdc(&DAT_14ca80ec8,param_2,&puStack_120);
    }
    LOCK();
    piVar1 = (int *)(puVar6 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar6)(puVar6,1);
    }
  }
LAB_1400292ec:
  if (puStack_118 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_1400293a1:
  if ((uStack_40 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puStack_120;
}



// FUNCTION 147405142 FUN_147405142 body=155 status=ok
// SIG undefined FUN_147405142(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147405142(void)

{
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14ca81218);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14ca81218,4000);
  _DAT_14ca81260 = 0;
  DAT_14ca81268 = 0;
  DAT_14ca81240 = 0;
  _DAT_14ca81248 = 0;
  _DAT_14ca8126c = 0xffffffff00000080;
  DAT_14ca81274 = 0;
  DAT_14ca81280 = 0;
  DAT_14ca81288 = 0;
  _DAT_14ca812b0 = 0;
  DAT_14ca812b8 = 0;
  DAT_14ca81290 = 0;
  uRam000000014ca81298 = 0;
  _DAT_14ca812bc = 0xffffffff00000080;
  _DAT_14ca812c4 = 0;
  DAT_14ca812d0 = 0;
  _DAT_14ca812d8 = 0;
  DAT_14ca812e0 = 0;
  return;
}



// FUNCTION 1474051de FUN_1474051de body=501 status=ok
// SIG undefined FUN_1474051de(void)

ulonglong FUN_1474051de(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  longlong *plVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  undefined8 *local_50;
  undefined1 local_44 [4];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x298));
  plVar2 = *(longlong **)(param_1 + 0x208);
  plVar7 = *(longlong **)(param_1 + 0x210);
  if (((*(byte *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0xc60) & 0x20) == 0) && (DAT_14c760d80 == '\x01')) {
    plVar2 = *(longlong **)(param_1 + 0x218);
    plVar7 = *(longlong **)(param_1 + 0x220);
  }
  iVar1 = FUN_145711cec(plVar2,(int)((ulonglong)param_2[2] >> 0x20) * 0x17 + (int)param_2[2] ^
                               (int)((ulonglong)param_2[1] >> 0x20) * 0x17 + (int)param_2[1] ^
                               (int)((ulonglong)*param_2 >> 0x20) * 0x17 + (int)*param_2,param_2);
  if (iVar1 == -1) {
LAB_14740530b:
    plVar2 = (longlong *)FUN_147411158(param_1);
    uVar3 = (int)((ulonglong)param_2[2] >> 0x20) * 0x17 + (int)param_2[2] ^
            (int)((ulonglong)param_2[1] >> 0x20) * 0x17 + (int)param_2[1] ^
            (int)((ulonglong)*param_2 >> 0x20) * 0x17 + (int)*param_2;
    iVar1 = FUN_145711cec(plVar2,uVar3,param_2);
    if ((iVar1 == -1) || (lVar6 = (longlong)iVar1 * 0x68 + *plVar2, lVar6 == 0)) {
      iVar1 = FUN_145711cec(plVar7,uVar3,param_2);
      if ((iVar1 == -1) ||
         (lVar6 = (longlong)iVar1 * 0x68 + *plVar7, puVar5 = (undefined8 *)(lVar6 + 0x58),
         puVar5 == (undefined8 *)0x0 || lVar6 == 0)) {
        uVar4 = 0;
        goto LAB_1474052da;
      }
      local_58 = param_2;
      local_50 = puVar5;
      FUN_14740f640(plVar2,local_44,&local_58,0);
    }
    else {
      puVar5 = (undefined8 *)(lVar6 + 0x58);
    }
  }
  else if ((*plVar2 + (longlong)iVar1 * 0x68 == 0) ||
          (puVar5 = (undefined8 *)(*plVar2 + (longlong)iVar1 * 0x68 + 0x58),
          puVar5 == (undefined8 *)0x0)) goto LAB_14740530b;
  *param_3 = *puVar5;
  uVar4 = CONCAT71((int7)((ulonglong)param_3 >> 8),1);
LAB_1474052da:
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x298));
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar4 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474053d4 FUN_1474053d4 body=128 status=ok
// SIG undefined FUN_1474053d4(void)

undefined8 FUN_1474053d4(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x298));
  uVar1 = FUN_147411158(param_1);
  local_40 = param_2;
  local_38 = param_3;
  FUN_14740f640(uVar1,local_2c,&local_40,0);
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x298));
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147405456 FUN_147405456 body=245 status=ok
// SIG undefined FUN_147405456(void)

ulonglong FUN_147405456(uint *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14ca81218);
  plVar4 = &DAT_14ca81240;
  if ((char)param_1[0xc] != '\0') {
    plVar4 = &DAT_14ca81290;
  }
  iVar1 = FUN_14740b9be(plVar4,(uint)(byte)param_1[2] ^
                               (int)((ulonglong)*(undefined8 *)(param_1 + 6) >> 0x20) * 0x17 +
                               (int)*(undefined8 *)(param_1 + 6) ^
                               (int)((ulonglong)*(undefined8 *)(param_1 + 4) >> 0x20) * 0x17 +
                               (int)*(undefined8 *)(param_1 + 4) ^ param_1[1] ^ *param_1 ^
                               (int)((ulonglong)*(undefined8 *)(param_1 + 10) >> 0x20) * 0x17 +
                               (int)*(undefined8 *)(param_1 + 10) ^
                               (int)((ulonglong)*(undefined8 *)(param_1 + 8) >> 0x20) * 0x17 +
                               (int)*(undefined8 *)(param_1 + 8),param_1);
  if (iVar1 == -1) {
    lVar2 = 0;
  }
  else {
    lVar2 = (longlong)iVar1 * 0x40 + *plVar4;
  }
  puVar3 = (undefined8 *)(lVar2 + 0x30);
  if (lVar2 == 0) {
    puVar3 = (undefined8 *)0x0;
  }
  if (puVar3 != (undefined8 *)0x0) {
    *param_2 = *puVar3;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14ca81218);
  return CONCAT71((int7)((ulonglong)param_1 >> 8),puVar3 != (undefined8 *)0x0) & 0xffffffff;
}



// FUNCTION 14740554c FUN_14740554c body=427 status=ok
// SIG undefined FUN_14740554c(void)

ulonglong FUN_14740554c(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined4 local_80;
  uint uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  uint local_70;
  int iStack_6c;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  uint local_50;
  int iStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14ca81218);
  local_60 = 0x100000000;
  uStack_58 = &DAT_14ca81250;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  uStack_48 = 0;
  if (DAT_14ca81268 == 0) {
    iVar3 = 0;
  }
  else {
    FUN_1449c0562(&local_60);
    iVar3 = DAT_14ca81268;
  }
  uStack_68 = CONCAT44(uStack_44,uStack_48);
  local_70 = local_50;
  iStack_6c = iStack_4c;
  local_80 = (undefined4)local_60;
  uStack_7c = local_60._4_4_;
  uStack_78 = (undefined4)uStack_58;
  uStack_74 = uStack_58._4_4_;
  local_88 = &DAT_14ca81240;
  if ((iStack_4c != iVar3) || (uStack_58 != &DAT_14ca81250)) {
    lVar5 = 0;
    do {
      lVar1 = *(longlong *)(*local_88 + 0x30 + (longlong)iStack_6c * 0x40);
      if (*(longlong *)(lVar1 + 0x28) != 0) {
        lVar2 = *local_88 + (longlong)iStack_6c * 0x40;
        if ((((*(int *)(lVar2 + 4) == *(int *)(param_1 + 4)) &&
             (*(longlong *)(lVar2 + 0x10) == *(longlong *)(param_1 + 0x10))) &&
            (*(longlong *)(lVar2 + 0x18) == *(longlong *)(param_1 + 0x18))) &&
           (*(longlong *)(lVar2 + 0x28) == *(longlong *)(param_1 + 0x28))) {
          if (lVar5 != 0) {
            bVar6 = *(ulonglong *)(lVar5 + 0x40) < *(ulonglong *)(lVar1 + 0x40);
            if (*(ulonglong *)(lVar5 + 0x40) == *(ulonglong *)(lVar1 + 0x40)) {
              bVar6 = *(ulonglong *)(lVar5 + 0x38) < *(ulonglong *)(lVar1 + 0x38);
            }
            if (!bVar6) goto LAB_14740569c;
          }
          lVar5 = lVar1;
        }
      }
LAB_14740569c:
      local_70 = local_70 & ~uStack_7c;
      FUN_1449c0562(&local_80);
    } while (local_88 != &DAT_14ca81240 ||
             ((undefined *)CONCAT44(uStack_74,uStack_78) != &DAT_14ca81250 || iStack_6c != iVar3));
    if (lVar5 != 0) {
      *param_2 = lVar5;
      uVar4 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
      goto LAB_1474055f7;
    }
  }
  uVar4 = 0;
LAB_1474055f7:
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14ca81218);
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return uVar4 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474056f8 FUN_1474056f8 body=892 status=ok
// SIG undefined FUN_1474056f8(void)

void FUN_1474056f8(int param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined5 uVar7;
  ulonglong uVar8;
  uint uVar9;
  undefined4 *puVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  longlong *plVar18;
  undefined *puVar19;
  ulonglong uVar20;
  longlong lVar21;
  bool bVar22;
  undefined1 auStack_f8 [32];
  int local_d8;
  int local_d4;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined *local_b8;
  longlong *local_b0;
  ulonglong local_a8;
  longlong *local_a0;
  undefined8 local_98;
  undefined *local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  longlong local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14ca81218);
  if (param_1 <= DAT_14ca81248 - DAT_14ca81274) {
    local_78 = 0;
    uStack_70 = 0;
    local_d8 = param_1;
    if (DAT_14ca81248 != DAT_14ca81274) {
      FUN_14740ba6e(&local_78);
    }
    uVar20 = DAT_14c872be0;
    local_68 = 0x100000000;
    local_60 = &DAT_14ca81250;
    local_58 = 0xffffffff;
    local_50 = 0;
    iVar14 = 0;
    if (DAT_14ca81268 != 0) {
      FUN_1449c0562(&local_68);
      iVar14 = DAT_14ca81268;
    }
    local_88 = local_58;
    uVar5 = local_88;
    local_80 = local_50;
    local_7c = local_4c;
    local_98 = local_68;
    local_90 = local_60;
    local_a0 = &DAT_14ca81240;
    local_88._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    if ((local_88._4_4_ != iVar14) || (local_60 != &DAT_14ca81250)) {
      puVar19 = &DAT_14ca81250;
      plVar18 = &DAT_14ca81240;
      local_a8 = uVar20;
      local_b0 = &DAT_14ca81240;
      local_b8 = &DAT_14ca81250;
      iVar11 = local_88._4_4_;
      local_d4 = iVar14;
      local_88 = uVar5;
      do {
        uVar8 = uStack_70;
        lVar12 = *(longlong *)(*local_a0 + 0x30 + (longlong)iVar11 * 0x40);
        lVar13 = *(longlong *)(lVar12 + 0x40);
        if (lVar13 + 10U <= uVar20) {
          puVar10 = (undefined4 *)(*local_a0 + (longlong)iVar11 * 0x40);
          if (*(longlong *)(lVar12 + 0x18) != 0) {
            if ((*(byte *)(*(longlong *)(lVar12 + 0x18) + 0xa0) & 1) == 0) goto LAB_147405908;
            lVar12 = *(longlong *)(puVar10 + 0xc);
            lVar13 = *(longlong *)(lVar12 + 0x40);
          }
          uVar2 = *puVar10;
          uVar3 = puVar10[1];
          uVar1 = *(undefined1 *)(puVar10 + 2);
          uVar7 = CONCAT14(local_68._7_1_,puVar10[3]);
          local_68 = CONCAT44((int)((uint5)uVar7 >> 8),*(undefined4 *)((longlong)puVar10 + 9));
          uVar5 = *(undefined8 *)(puVar10 + 4);
          uVar6 = *(undefined8 *)(puVar10 + 6);
          lVar21 = (longlong)(int)uStack_70;
          uVar9 = (int)uStack_70 + 1;
          uStack_70 = CONCAT44(uStack_70._4_4_,uVar9);
          uVar15 = *(undefined8 *)(lVar12 + 0x38);
          uVar16 = *(undefined8 *)(puVar10 + 8);
          uVar17 = *(undefined8 *)(puVar10 + 10);
          if (uStack_70._4_4_ < uVar9) {
            local_d0 = *(undefined8 *)(puVar10 + 10);
            local_c8 = *(undefined8 *)(puVar10 + 8);
            local_c0 = *(undefined8 *)(lVar12 + 0x38);
            FUN_14740ba7c(&local_78,uVar8 & 0xffffffff);
            uVar15 = local_c0;
            uVar16 = local_c8;
            uVar17 = local_d0;
          }
          *(undefined4 *)(local_78 + lVar21 * 0x48) = uVar2;
          *(undefined4 *)(local_78 + 4 + lVar21 * 0x48) = uVar3;
          *(undefined1 *)(local_78 + 8 + lVar21 * 0x48) = uVar1;
          uVar2 = (undefined4)local_68;
          *(undefined4 *)(local_78 + 9 + lVar21 * 0x48) = uVar2;
          *(undefined4 *)(local_78 + 0xc + lVar21 * 0x48) = local_68._3_4_;
          *(undefined8 *)(local_78 + 0x10 + lVar21 * 0x48) = uVar5;
          *(undefined8 *)(local_78 + 0x18 + lVar21 * 0x48) = uVar6;
          *(undefined8 *)(local_78 + 0x20 + lVar21 * 0x48) = uVar16;
          *(undefined8 *)(local_78 + 0x28 + lVar21 * 0x48) = uVar17;
          *(longlong *)(local_78 + 0x30 + lVar21 * 0x48) = lVar13;
          *(undefined8 *)(local_78 + 0x38 + lVar21 * 0x48) = uVar15;
          *(longlong *)(local_78 + 0x40 + lVar21 * 0x48) = lVar12;
          plVar18 = local_b0;
          puVar19 = local_b8;
          uVar20 = local_a8;
          iVar14 = local_d4;
        }
LAB_147405908:
        local_88 = CONCAT44(local_88._4_4_,(uint)local_88 & ~local_98._4_4_);
        FUN_1449c0562(&local_98);
        iVar11 = local_88._4_4_;
        uVar5 = local_88;
      } while (local_a0 != plVar18 || (local_90 != puVar19 || local_88._4_4_ != iVar14));
    }
    local_88 = uVar5;
    lVar12 = local_78;
    iVar14 = (int)uStack_70;
    FUN_14740bad2(local_78,uStack_70 & 0xffffffff);
    if (local_d8 < DAT_14ca81248 - DAT_14ca81274) {
      do {
        bVar22 = iVar14 == 0;
        iVar14 = iVar14 + -1;
        if (bVar22) {
          iVar14 = 0;
          break;
        }
        puVar4 = *(undefined8 **)(lVar12 + 0x40 + (longlong)iVar14 * 0x48);
        if (puVar4 != (undefined8 *)0x0) {
          (**(code **)*puVar4)(puVar4,1);
        }
        FUN_14740c0c6(lVar12 + (longlong)iVar14 * 0x48);
      } while (local_d8 < DAT_14ca81248 - DAT_14ca81274);
      uStack_70 = CONCAT44(uStack_70._4_4_,iVar14);
    }
    DAT_14ca812e0 = uVar20;
    FUN_1431e780e(&local_78);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14ca81218);
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147405a76 FUN_147405a76 body=211 status=ok
// SIG undefined FUN_147405a76(void)

longlong FUN_147405a76(longlong param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong local_38;
  longlong *local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = FUN_14001cc68(0x138,0x10);
  FUN_14740c2a6(lVar2,param_1);
  local_40 = lVar2;
  uVar1 = FUN_147413892(param_1);
  *(undefined4 *)(lVar2 + 0x30) = uVar1;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14ca81218);
  puVar3 = &DAT_14ca81240;
  if (*(char *)(param_1 + 0x30) != '\0') {
    puVar3 = &DAT_14ca81290;
  }
  local_38 = param_1;
  local_30 = &local_40;
  FUN_14740c60c(puVar3,local_24);
  lVar2 = local_40;
  if (*(longlong *)(local_40 + 0x40) != DAT_14c872be0) {
    *(longlong *)(local_40 + 0x40) = DAT_14c872be0;
    *(longlong *)(local_40 + 0x38) = *(longlong *)(local_40 + 0x38) + 1;
  }
  *(undefined8 *)(local_40 + 0x10) = DAT_14c867d10;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14ca81218);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147405b4a FUN_147405b4a body=119 status=ok
// SIG undefined FUN_147405b4a(void)

void FUN_147405b4a(undefined8 param_1)

{
  char cVar1;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = 0;
  cVar1 = FUN_147405bc2(&DAT_14ca81218,param_1,&local_18);
  if (cVar1 != '\0') {
    if (*(longlong *)(local_18 + 0x40) != DAT_14c872be0) {
      *(longlong *)(local_18 + 0x40) = DAT_14c872be0;
      *(longlong *)(local_18 + 0x38) = *(longlong *)(local_18 + 0x38) + 1;
    }
    *(undefined8 *)(local_18 + 0x10) = DAT_14c867d10;
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147405bc2 FUN_147405bc2 body=229 status=ok
// SIG undefined FUN_147405bc2(void)

bool FUN_147405bc2(LPCRITICAL_SECTION param_1,uint *param_2,undefined8 *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  EnterCriticalSection(param_1);
  iVar1 = FUN_14740b9be(param_1 + 1,
                        (uint)(byte)param_2[2] ^
                        (int)((ulonglong)*(undefined8 *)(param_2 + 6) >> 0x20) * 0x17 +
                        (int)*(undefined8 *)(param_2 + 6) ^
                        (int)((ulonglong)*(undefined8 *)(param_2 + 4) >> 0x20) * 0x17 +
                        (int)*(undefined8 *)(param_2 + 4) ^ param_2[1] ^ *param_2 ^
                        (int)((ulonglong)*(undefined8 *)(param_2 + 10) >> 0x20) * 0x17 +
                        (int)*(undefined8 *)(param_2 + 10) ^
                        (int)((ulonglong)*(undefined8 *)(param_2 + 8) >> 0x20) * 0x17 +
                        (int)*(undefined8 *)(param_2 + 8),param_2);
  if (iVar1 == -1) {
    lVar2 = 0;
  }
  else {
    lVar2 = (longlong)iVar1 * 0x40 + (longlong)param_1[1].DebugInfo;
  }
  puVar3 = (undefined8 *)(lVar2 + 0x30);
  if (lVar2 == 0) {
    puVar3 = (undefined8 *)0x0;
  }
  if (puVar3 != (undefined8 *)0x0) {
    *param_3 = *puVar3;
  }
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_1);
  }
  return puVar3 != (undefined8 *)0x0;
}



// FUNCTION 147405ca7 FUN_147405ca7 body=73 status=ok
// SIG undefined FUN_147405ca7(void)

undefined8 FUN_147405ca7(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = DAT_14ca811c8;
  if ((DAT_14c760d84 != 0) && ((DAT_14ca84f5a & 1) != 0)) {
    uVar1 = (**(code **)(*DAT_14ca83900 + 0x300))(DAT_14ca83900,param_1);
    uVar2 = FUN_1402d0328(uVar2,uVar1);
    return uVar2;
  }
  return 0;
}



// FUNCTION 147405cf0 FUN_147405cf0 body=166 status=ok
// SIG undefined FUN_147405cf0(void)

void FUN_147405cf0(undefined8 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined1 auStack_78 [32];
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
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = *param_3;
  uStack_34 = param_3[1];
  uStack_30 = param_3[2];
  uStack_2c = param_3[3];
  FUN_147405d98(&DAT_14ca808c8,param_1,param_2);
  local_48 = *param_3;
  uStack_44 = param_3[1];
  uStack_40 = param_3[2];
  uStack_3c = param_3[3];
  FUN_147405f60(&DAT_14ca80ec8,param_1,param_2);
  local_58 = *param_3;
  uStack_54 = param_3[1];
  uStack_50 = param_3[2];
  uStack_4c = param_3[3];
  FUN_14740612e(&DAT_14ca80bc8,param_1,param_2);
  FUN_1474062f6(&DAT_14ca81218,param_1);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147405d98 FUN_147405d98 body=455 status=ok
// SIG undefined FUN_147405d98(void)

void FUN_147405d98(longlong param_1,longlong *param_2,char param_3,undefined4 *param_4)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  undefined1 auStack_d8 [40];
  longlong *local_b0;
  undefined4 local_a8;
  uint uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  uint local_98;
  int iStack_94;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  uint local_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x298));
  if (param_3 != '\0') {
    local_78 = *param_4;
    uStack_74 = param_4[1];
    uStack_70 = param_4[2];
    uStack_6c = param_4[3];
    cVar5 = FUN_147411fae(param_1);
    if (cVar5 != '\0') {
      *(undefined1 *)(param_1 + 0x290) = 1;
      FUN_1431e2e6a(param_1,0);
      local_88 = *param_4;
      uStack_84 = param_4[1];
      uStack_80 = param_4[2];
      uStack_7c = param_4[3];
      FUN_147411fae(param_1);
      *(undefined1 *)(param_1 + 0x290) = 0;
    }
  }
  plVar3 = *(longlong **)(param_1 + 0x208);
  plVar1 = plVar3 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  uStack_60 = plVar1;
  if ((int)plVar3[5] == 0) {
    iVar6 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar6 = (int)plVar3[5];
  }
  uStack_90 = CONCAT44(uStack_4c,uStack_50);
  local_98 = local_58;
  iStack_94 = iStack_54;
  local_a8 = (undefined4)local_68;
  uStack_a4 = local_68._4_4_;
  uStack_a0 = (undefined4)uStack_60;
  uStack_9c = uStack_60._4_4_;
  local_b0 = plVar3;
  if ((iStack_54 != iVar6) || (uStack_60 != plVar1)) {
    do {
      lVar4 = *(longlong *)(*(longlong *)(*local_b0 + 8 + (longlong)iStack_94 * 0x18) + 0x48);
      if (lVar4 != 0) {
        LOCK();
        *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
        UNLOCK();
      }
      iVar2 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
        FUN_144abccec(param_2,iVar2);
      }
      *(longlong *)(*param_2 + (longlong)iVar2 * 8) = lVar4;
      local_98 = local_98 & ~uStack_a4;
      FUN_1449c0562(&local_a8);
    } while (local_b0 != plVar3 ||
             ((longlong *)CONCAT44(uStack_9c,uStack_a0) != plVar1 || iStack_94 != iVar6));
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x298));
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147405f60 FUN_147405f60 body=461 status=ok
// SIG undefined FUN_147405f60(void)

void FUN_147405f60(longlong param_1,longlong *param_2,char param_3,undefined4 *param_4)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  undefined1 auStack_d8 [40];
  longlong *local_b0;
  undefined4 local_a8;
  uint uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  uint local_98;
  int iStack_94;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  uint local_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x298));
  if (param_3 != '\0') {
    local_78 = *param_4;
    uStack_74 = param_4[1];
    uStack_70 = param_4[2];
    uStack_6c = param_4[3];
    cVar5 = FUN_14741203c(param_1);
    if (cVar5 != '\0') {
      *(undefined1 *)(param_1 + 0x290) = 1;
      FUN_1431e365e(param_1,0);
      local_88 = *param_4;
      uStack_84 = param_4[1];
      uStack_80 = param_4[2];
      uStack_7c = param_4[3];
      FUN_14741203c(param_1);
      *(undefined1 *)(param_1 + 0x290) = 0;
    }
  }
  plVar3 = *(longlong **)(param_1 + 0x208);
  plVar1 = plVar3 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  uStack_60 = plVar1;
  if ((int)plVar3[5] == 0) {
    iVar6 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar6 = (int)plVar3[5];
  }
  uStack_90 = CONCAT44(uStack_4c,uStack_50);
  local_98 = local_58;
  iStack_94 = iStack_54;
  local_a8 = (undefined4)local_68;
  uStack_a4 = local_68._4_4_;
  uStack_a0 = (undefined4)uStack_60;
  uStack_9c = uStack_60._4_4_;
  local_b0 = plVar3;
  if ((iStack_54 != iVar6) || (uStack_60 != plVar1)) {
    do {
      lVar4 = *(longlong *)(*(longlong *)(*local_b0 + 0xd8 + (longlong)iStack_94 * 0xe8) + 0x38);
      if (lVar4 != 0) {
        LOCK();
        *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
        UNLOCK();
      }
      iVar2 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
        FUN_144abccec(param_2,iVar2);
      }
      *(longlong *)(*param_2 + (longlong)iVar2 * 8) = lVar4;
      local_98 = local_98 & ~uStack_a4;
      FUN_1449c0562(&local_a8);
    } while (local_b0 != plVar3 ||
             ((longlong *)CONCAT44(uStack_9c,uStack_a0) != plVar1 || iStack_94 != iVar6));
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x298));
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14740612e FUN_14740612e body=455 status=ok
// SIG undefined FUN_14740612e(void)

void FUN_14740612e(longlong param_1,longlong *param_2,char param_3,undefined4 *param_4)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  undefined1 auStack_d8 [40];
  longlong *local_b0;
  undefined4 local_a8;
  uint uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  uint local_98;
  int iStack_94;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  uint local_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x298));
  if (param_3 != '\0') {
    local_78 = *param_4;
    uStack_74 = param_4[1];
    uStack_70 = param_4[2];
    uStack_6c = param_4[3];
    cVar5 = FUN_1474120ca(param_1);
    if (cVar5 != '\0') {
      *(undefined1 *)(param_1 + 0x290) = 1;
      FUN_1431e3266(param_1,0);
      local_88 = *param_4;
      uStack_84 = param_4[1];
      uStack_80 = param_4[2];
      uStack_7c = param_4[3];
      FUN_1474120ca(param_1);
      *(undefined1 *)(param_1 + 0x290) = 0;
    }
  }
  plVar3 = *(longlong **)(param_1 + 0x208);
  plVar1 = plVar3 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  uStack_60 = plVar1;
  if ((int)plVar3[5] == 0) {
    iVar6 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar6 = (int)plVar3[5];
  }
  uStack_90 = CONCAT44(uStack_4c,uStack_50);
  local_98 = local_58;
  iStack_94 = iStack_54;
  local_a8 = (undefined4)local_68;
  uStack_a4 = local_68._4_4_;
  uStack_a0 = (undefined4)uStack_60;
  uStack_9c = uStack_60._4_4_;
  local_b0 = plVar3;
  if ((iStack_54 != iVar6) || (uStack_60 != plVar1)) {
    do {
      lVar4 = *(longlong *)(*(longlong *)(*local_b0 + 0x58 + (longlong)iStack_94 * 0x68) + 0x40);
      if (lVar4 != 0) {
        LOCK();
        *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
        UNLOCK();
      }
      iVar2 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
        FUN_144abccec(param_2,iVar2);
      }
      *(longlong *)(*param_2 + (longlong)iVar2 * 8) = lVar4;
      local_98 = local_98 & ~uStack_a4;
      FUN_1449c0562(&local_a8);
    } while (local_b0 != plVar3 ||
             ((longlong *)CONCAT44(uStack_9c,uStack_a0) != plVar1 || iStack_94 != iVar6));
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x298));
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474062f6 FUN_1474062f6 body=587 status=ok
// SIG undefined FUN_1474062f6(void)

void FUN_1474062f6(LPCRITICAL_SECTION param_1,longlong *param_2)

{
  LPCRITICAL_SECTION p_Var1;
  HANDLE *ppvVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_b8 [40];
  LPCRITICAL_SECTION local_90;
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
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  EnterCriticalSection(param_1);
  p_Var1 = param_1 + 1;
  ppvVar2 = &param_1[1].OwningThread;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  uStack_60 = ppvVar2;
  if (*(int *)&param_1[2].DebugInfo == 0) {
    iVar5 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar5 = *(int *)&param_1[2].DebugInfo;
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_88 = (undefined4)local_68;
  uStack_84 = local_68._4_4_;
  uStack_80 = (undefined4)uStack_60;
  uStack_7c = uStack_60._4_4_;
  local_90 = p_Var1;
  if ((iStack_54 != iVar5) || (uStack_60 != ppvVar2)) {
    do {
      lVar4 = *(longlong *)((longlong)local_90->DebugInfo + (longlong)iStack_74 * 0x40 + 0x30);
      if (lVar4 != 0) {
        lVar4 = *(longlong *)(lVar4 + 0x28);
        if (lVar4 != 0) {
          LOCK();
          *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
          UNLOCK();
        }
        iVar3 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar3 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
          FUN_144abccec(param_2,iVar3);
        }
        *(longlong *)(*param_2 + (longlong)iVar3 * 8) = lVar4;
      }
      local_78 = local_78 & ~uStack_84;
      FUN_1449c0562(&local_88);
    } while (local_90 != p_Var1 ||
             ((HANDLE *)CONCAT44(uStack_7c,uStack_80) != ppvVar2 || iStack_74 != iVar5));
  }
  p_Var1 = param_1 + 3;
  ppvVar2 = &param_1[3].OwningThread;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  uStack_60 = ppvVar2;
  if (*(int *)&param_1[4].DebugInfo == 0) {
    iVar5 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar5 = *(int *)&param_1[4].DebugInfo;
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_88 = (undefined4)local_68;
  uStack_84 = local_68._4_4_;
  uStack_80 = (undefined4)uStack_60;
  uStack_7c = uStack_60._4_4_;
  local_90 = p_Var1;
  if ((iStack_54 != iVar5) || (uStack_60 != ppvVar2)) {
    do {
      lVar4 = *(longlong *)((longlong)local_90->DebugInfo + (longlong)iStack_74 * 0x40 + 0x30);
      if (lVar4 != 0) {
        lVar4 = *(longlong *)(lVar4 + 0x28);
        if (lVar4 != 0) {
          LOCK();
          *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
          UNLOCK();
        }
        iVar3 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar3 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
          FUN_144abccec(param_2,iVar3);
        }
        *(longlong *)(*param_2 + (longlong)iVar3 * 8) = lVar4;
      }
      local_78 = local_78 & ~uStack_84;
      FUN_1449c0562(&local_88);
    } while (local_90 != p_Var1 ||
             ((HANDLE *)CONCAT44(uStack_7c,uStack_80) != ppvVar2 || iStack_74 != iVar5));
  }
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_1);
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14740654a FUN_14740654a body=38 status=ok
// SIG undefined FUN_14740654a(void)

undefined8 FUN_14740654a(undefined8 param_1,int param_2)

{
  FUN_140540150();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147406570 FUN_147406570 body=146 status=ok
// SIG undefined FUN_147406570(void)

undefined4 * FUN_147406570(undefined4 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [40];
  longlong local_40 [2];
  undefined8 local_30;
  undefined2 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(param_2 + 1) == 0) {
    local_28 = &DAT_149dfb77a;
  }
  else {
    local_28 = (undefined2 *)*param_2;
  }
  uVar1 = FUN_145ca99e8(&local_28);
  *param_1 = uVar1;
  FUN_140056680(local_40,local_28);
  FUN_1431e5d98(&local_30,local_40);
  *(undefined8 *)(param_1 + 2) = local_30;
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147406604 FUN_147406604 body=86 status=ok
// SIG undefined FUN_147406604(void)

longlong FUN_147406604(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if ((*(char *)(param_1 + 0x10) == '\x01') &&
     (plVar3 = *(longlong **)(param_1 + 8), plVar3 != (longlong *)0x0)) {
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
  FUN_140e20234(param_1,param_2,0);
  *(undefined1 *)(param_1 + 0x10) = 1;
  return param_1;
}



// FUNCTION 14740665a FUN_14740665a body=84 status=ok
// SIG undefined FUN_14740665a(void)

undefined4 * FUN_14740665a(undefined4 *param_1,undefined4 *param_2)

{
  if ((*(char *)(param_1 + 6) == '\x01') && (*(longlong *)(param_1 + 2) != 0)) {
    FUN_1400020a8();
  }
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_2 + 2) = 0;
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  *(undefined8 *)(param_2 + 4) = 0;
  *(undefined1 *)(param_1 + 6) = 1;
  return param_1;
}



// FUNCTION 1474066ae FUN_1474066ae body=154 status=ok
// SIG undefined FUN_1474066ae(void)

ulonglong FUN_1474066ae(undefined8 *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar1 = (ulonglong)*(int *)(param_1 + 1);
  if ((longlong)uVar1 < 1) {
LAB_1474066f6:
    uVar5 = (ulonglong)*(int *)(param_2 + 1);
    uVar1 = CONCAT71((int7)(int3)((uint)*(int *)(param_1 + 1) >> 8),1);
    if ((longlong)uVar5 < 1) goto LAB_1474066cb;
    uVar2 = *(uint *)*param_1;
    uVar3 = *(uint *)*param_2;
    if (uVar2 > uVar3 || uVar3 == uVar2) {
      if (uVar2 <= uVar3) {
        uVar1 = 1;
        do {
          uVar4 = uVar1;
          uVar1 = uVar4;
          if (uVar5 == uVar4) goto LAB_14740673d;
          uVar2 = ((uint *)*param_2)[uVar4];
          uVar3 = ((uint *)*param_1)[uVar4];
          if (uVar3 < uVar2) {
            uVar1 = 0;
            goto LAB_14740673d;
          }
          uVar1 = uVar4 + 1;
        } while (uVar3 <= uVar2);
        uVar1 = 1;
LAB_14740673d:
        uVar1 = CONCAT71((int7)(uVar4 >> 8),uVar5 <= uVar4 | (byte)uVar1);
      }
      goto LAB_1474066cb;
    }
  }
  else {
    uVar2 = *(uint *)*param_1;
    uVar3 = *(uint *)*param_2;
    if (uVar2 <= uVar3) {
      uVar5 = 0;
      do {
        if ((uVar2 < uVar3) || (uVar1 - 1 == uVar5)) goto LAB_1474066f6;
        uVar2 = ((uint *)*param_1)[uVar5 + 1];
        uVar3 = ((uint *)*param_2)[uVar5 + 1];
        uVar5 = uVar5 + 1;
      } while (uVar2 <= uVar3);
      if (uVar1 <= uVar5) goto LAB_1474066f6;
    }
  }
  uVar1 = 0;
LAB_1474066cb:
  return uVar1 & 0xffffffffffffff01;
}



// FUNCTION 147406748 FUN_147406748 body=166 status=ok
// SIG undefined FUN_147406748(void)

longlong FUN_147406748(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  void *_Src;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  FUN_141121e90();
  cVar1 = *(char *)(param_2 + 0x20);
  *(char *)(param_1 + 0x20) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
    lVar3 = *(longlong *)(param_2 + 0x18);
    *(longlong *)(param_1 + 0x18) = lVar3;
    if (lVar3 != 0) {
      LOCK();
      *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
      UNLOCK();
    }
  }
  FUN_1474067ee(param_1 + 0x28,param_2 + 0x28);
  cVar1 = *(char *)(param_2 + 0x58);
  *(char *)(param_1 + 0x58) = cVar1;
  if (cVar1 == '\x01') {
    uVar4 = *(undefined4 *)(param_2 + 0x4c);
    uVar5 = *(undefined4 *)(param_2 + 0x50);
    uVar6 = *(undefined4 *)(param_2 + 0x54);
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
    *(undefined4 *)(param_1 + 0x4c) = uVar4;
    *(undefined4 *)(param_1 + 0x50) = uVar5;
    *(undefined4 *)(param_1 + 0x54) = uVar6;
  }
  *(undefined8 *)(param_1 + 0x60) = 0;
  iVar2 = *(int *)(param_2 + 0x68);
  _Src = *(void **)(param_2 + 0x60);
  *(int *)(param_1 + 0x68) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)(param_1 + 0x6c) = 0;
  }
  else {
    FUN_1446dd670((undefined8 *)(param_1 + 0x60),iVar2,0);
    memcpy(*(void **)(param_1 + 0x60),_Src,(longlong)iVar2 * 2);
  }
  return param_1;
}



// FUNCTION 1474067ee FUN_1474067ee body=107 status=ok
// SIG undefined FUN_1474067ee(void)

undefined4 * FUN_1474067ee(undefined4 *param_1,undefined4 *param_2)

{
  char cVar1;
  int iVar2;
  void *_Src;
  
  cVar1 = *(char *)(param_2 + 6);
  *(char *)(param_1 + 6) = cVar1;
  if (cVar1 == '\x01') {
    *param_1 = *param_2;
    *(undefined8 *)(param_1 + 2) = 0;
    iVar2 = param_2[4];
    _Src = *(void **)(param_2 + 2);
    param_1[4] = iVar2;
    if ((longlong)iVar2 == 0) {
      param_1[5] = 0;
    }
    else {
      FUN_1447bda9e(param_1 + 2,iVar2,0);
      memcpy(*(void **)(param_1 + 2),_Src,(longlong)iVar2 << 2);
    }
  }
  return param_1;
}



// FUNCTION 14740685a FUN_14740685a body=137 status=ok
// SIG undefined FUN_14740685a(void)

longlong FUN_14740685a(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  
  FUN_140bc2be4();
  FUN_147406922(param_1 + 0x10,param_2 + 0x10);
  FUN_1474068e4(param_1 + 0x28,param_2 + 0x28);
  if (param_2 == param_1) {
    return param_1;
  }
  if (*(char *)(param_2 + 0x58) == '\x01') {
    uVar1 = *(undefined4 *)(param_2 + 0x4c);
    uVar2 = *(undefined4 *)(param_2 + 0x50);
    uVar3 = *(undefined4 *)(param_2 + 0x54);
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
    *(undefined4 *)(param_1 + 0x4c) = uVar1;
    *(undefined4 *)(param_1 + 0x50) = uVar2;
    *(undefined4 *)(param_1 + 0x54) = uVar3;
    uVar4 = 1;
  }
  else {
    if (*(char *)(param_1 + 0x58) != '\x01') goto LAB_1474068a3;
    uVar4 = 0;
  }
  *(undefined1 *)(param_1 + 0x58) = uVar4;
LAB_1474068a3:
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_1400020a8();
  }
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(param_2 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0x68);
  *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_2 + 0x6c);
  *(undefined8 *)(param_2 + 0x68) = 0;
  return param_1;
}



// FUNCTION 1474068e4 FUN_1474068e4 body=62 status=ok
// SIG undefined FUN_1474068e4(void)

longlong FUN_1474068e4(longlong param_1,longlong param_2)

{
  if (param_2 != param_1) {
    if (*(char *)(param_2 + 0x18) == '\x01') {
      FUN_14740665a(param_1);
    }
    else if (*(char *)(param_1 + 0x18) == '\x01') {
      if (*(longlong *)(param_1 + 8) != 0) {
        FUN_1400020a8();
      }
      *(undefined1 *)(param_1 + 0x18) = 0;
    }
  }
  return param_1;
}



// FUNCTION 147406922 FUN_147406922 body=88 status=ok
// SIG undefined FUN_147406922(void)

longlong FUN_147406922(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (param_2 != param_1) {
    if (*(char *)(param_2 + 0x10) == '\x01') {
      FUN_146806694(param_1);
    }
    else if (*(char *)(param_1 + 0x10) == '\x01') {
      plVar3 = *(longlong **)(param_1 + 8);
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
      *(undefined1 *)(param_1 + 0x10) = 0;
    }
  }
  return param_1;
}



// FUNCTION 14740697a FUN_14740697a body=585 status=ok
// SIG undefined FUN_14740697a(void)

longlong FUN_14740697a(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined1 uVar3;
  char cVar4;
  undefined2 *puVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_158 [32];
  undefined8 *local_138;
  uint local_12c;
  longlong local_128;
  ulonglong uStack_120;
  longlong local_110;
  int local_108;
  undefined1 local_100 [40];
  longlong local_d8;
  uint local_c8;
  undefined1 local_c0 [40];
  longlong local_98;
  int local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  longlong local_60;
  undefined8 uStack_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  FUN_145ca9da6(param_1,&local_110);
  if (local_108 < 2) {
    *(undefined1 *)(param_2 + 0x38) = 0;
    goto LAB_1474069bc;
  }
  local_88 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_80 = 0xffffffff00000000;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_138 = &DAT_14c872ad8;
  FUN_14105aa76(DAT_14c872ce0,local_110,L"SuggestedDriverVersion",&local_128);
  lVar2 = local_128;
  lVar7 = (longlong)(int)uStack_120;
  if (lVar7 == 0) {
LAB_147406a71:
    uVar3 = 0;
  }
  else {
    lVar6 = 0;
    do {
      puVar5 = &DAT_149dfb77a;
      if (*(int *)(lVar2 + 8 + lVar6) != 0) {
        puVar5 = *(undefined2 **)(lVar2 + lVar6);
      }
      FUN_147406bc4(local_c0,puVar5);
      local_12c = 0;
      if (1 < local_90) {
        cVar4 = FUN_145ca969e(local_c0,param_1,&local_12c);
        uVar1 = local_12c;
        if ((cVar4 != '\0') && (local_50 <= local_12c)) {
          FUN_147406ca8(local_100,local_c0);
          local_c8 = uVar1;
          FUN_147406d30(&local_88,local_100);
          local_50 = local_c8;
          if (local_d8 != 0) {
            FUN_1400020a8();
          }
          FUN_145ca94c0(local_100);
        }
      }
      if (local_98 != 0) {
        FUN_1400020a8();
      }
      FUN_145ca94c0(local_c0);
      lVar6 = lVar6 + 0x10;
    } while (lVar7 * 0x10 != lVar6);
    if ((int)uStack_58 < 2) goto LAB_147406a71;
    FUN_147406ca8(param_2,&local_88);
    uVar3 = 1;
  }
  *(undefined1 *)(param_2 + 0x38) = uVar3;
  FUN_1447a1747(local_128,uStack_120 & 0xffffffff);
  if (local_128 != 0) {
    FUN_1400020a8();
  }
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  FUN_145ca94c0(&local_88);
LAB_1474069bc:
  if (local_110 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147406bc4 FUN_147406bc4 body=226 status=ok
// SIG undefined FUN_147406bc4(void)

longlong FUN_147406bc4(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined4 local_50;
  longlong local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_145ca9a5e();
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  local_58 = 0;
  FUN_14063337c(param_2,L"DriverVersion=",param_1 + 0x28,1);
  if (((*(int *)(param_1 + 0x30) < 2) && (*(int *)(param_1 + 0xc) == -1)) &&
     (*(char *)(param_1 + 0x20) == '\0')) {
    FUN_140056680(local_40,param_2);
    local_50 = 0xffffffff;
    local_58 = local_58 & 0xffffffff00000000;
    iVar1 = FUN_1447ee042(local_40,&DAT_149e06162,1,1);
    if (local_40[0] != 0) {
      FUN_1400020a8();
    }
    if (iVar1 == -1) {
      FUN_14020fad6(param_1 + 0x28,param_2);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147406ca8 FUN_147406ca8 body=135 status=ok
// SIG undefined FUN_147406ca8(void)

longlong FUN_147406ca8(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  void *_Src;
  
  FUN_141121e90();
  cVar1 = *(char *)(param_2 + 0x20);
  *(char *)(param_1 + 0x20) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
    lVar3 = *(longlong *)(param_2 + 0x18);
    *(longlong *)(param_1 + 0x18) = lVar3;
    if (lVar3 != 0) {
      LOCK();
      *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
      UNLOCK();
    }
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  iVar2 = *(int *)(param_2 + 0x30);
  _Src = *(void **)(param_2 + 0x28);
  *(int *)(param_1 + 0x30) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
  else {
    FUN_1446dd670((undefined8 *)(param_1 + 0x28),iVar2,0);
    memcpy(*(void **)(param_1 + 0x28),_Src,(longlong)iVar2 * 2);
  }
  return param_1;
}



// FUNCTION 147406d30 FUN_147406d30 body=89 status=ok
// SIG undefined FUN_147406d30(void)

longlong FUN_147406d30(longlong param_1,longlong param_2)

{
  FUN_140bc2be4();
  FUN_147406922(param_1 + 0x10,param_2 + 0x10);
  if (param_1 != param_2) {
    if (*(longlong *)(param_1 + 0x28) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
    *(undefined8 *)(param_2 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
    *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
    *(undefined8 *)(param_2 + 0x30) = 0;
  }
  return param_1;
}



// FUNCTION 147406d8a FUN_147406d8a body=207 status=ok
// SIG undefined FUN_147406d8a(void)

int FUN_147406d8a(longlong *param_1,uint param_2,longlong *param_3)

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
LAB_147406dd4:
      lVar10 = (longlong)iVar1 * 0x60;
      iVar3 = *(int *)(lVar4 + 8 + lVar10);
      if (iVar3 == iVar2) {
        if (iVar2 < 2) {
          return iVar1;
        }
        lVar6 = 0;
        do {
          uVar8 = *(ushort *)(*(longlong *)(lVar4 + lVar10) + lVar6);
          uVar9 = (ulonglong)uVar8;
          uVar7 = *(ushort *)(*param_3 + lVar6);
          if (uVar8 == uVar7) {
            if (uVar8 == 0) {
              return iVar1;
            }
          }
          else {
            if (0x7f < (uVar7 | uVar8)) goto LAB_147406e4e;
            uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
            uVar11 = (ulonglong)uVar7;
            uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
            if ((&DAT_149e05da0)[uVar9] != (&DAT_149e05da0)[uVar11]) goto LAB_147406e4e;
          }
          lVar6 = lVar6 + 2;
        } while( true );
      }
      if (iVar3 + iVar2 == 1) {
        return iVar1;
      }
      goto LAB_147406e3f;
    }
  }
  return -1;
LAB_147406e4e:
  if (uVar8 == uVar7) {
    return iVar1;
  }
LAB_147406e3f:
  iVar1 = *(int *)(lVar4 + 0x58 + lVar10);
  if (iVar1 == -1) {
    return -1;
  }
  goto LAB_147406dd4;
}



// FUNCTION 147406e5a FUN_147406e5a body=319 status=ok
// SIG undefined FUN_147406e5a(void)

undefined4 * FUN_147406e5a(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  undefined2 *puVar8;
  longlong lVar9;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_147406f9a(param_1,local_48);
  FUN_14740710c(local_40,*param_3,param_3[1]);
  *(undefined4 *)(local_40 + 0xb) = 0xffffffff;
  local_4c = local_48[0];
  iVar7 = *(int *)(local_40 + 1);
  if (iVar7 == 0) {
    puVar8 = &DAT_149dfb77a;
  }
  else {
    puVar8 = (undefined2 *)*local_40;
  }
  iVar1 = iVar7 + -1;
  if (iVar7 == 0) {
    iVar1 = 0;
  }
  uVar4 = FUN_144a49b4a(iVar1,puVar8);
  cVar3 = FUN_147407088(param_1,uVar4,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar5) {
      uVar6 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar9 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar9 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      *(uint *)((longlong)local_40 + 0x5c) = uVar4;
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0xb) =
           *(undefined4 *)
            (lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_14740725a(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147406f9a FUN_147406f9a body=238 status=ok
// SIG undefined FUN_147406f9a(void)

int * FUN_147406f9a(longlong *param_1,int *param_2)

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
      FUN_14488f93c(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x60);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x60) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x60 + *param_1;
  return param_2;
}



// FUNCTION 147407088 FUN_147407088 body=132 status=ok
// SIG undefined FUN_147407088(void)

undefined8 FUN_147407088(longlong *param_1,undefined8 param_2,void *param_3,int *param_4)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar2 = FUN_147406d8a(), iVar2 != -1)) {
    lVar1 = *param_1;
    lVar3 = (longlong)iVar2 * 0x60;
    *(undefined ***)(lVar1 + 0x10 + lVar3) = &PTR_FUN_149e38530;
    if (*(longlong *)(lVar1 + lVar3) != 0) {
      FUN_1400020a8();
    }
    memmove((void *)(lVar1 + lVar3),param_3,0x58);
    FUN_1474071e0(param_1,*param_4);
    *param_4 = iVar2;
    return 1;
  }
  return 0;
}



// FUNCTION 14740710c FUN_14740710c body=171 status=ok
// SIG undefined FUN_14740710c(void)

undefined8 * FUN_14740710c(undefined8 *param_1,undefined8 *param_2,longlong param_3)

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
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[2] = &PTR_FUN_14a37d0d8;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_3 + 0x10);
  *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)(param_3 + 0x14);
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_3 + 0x18);
  *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)(param_3 + 0x1c);
  *(undefined4 *)((longlong)param_1 + 0x3c) = *(undefined4 *)(param_3 + 0x2c);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_3 + 0x10);
  *(undefined4 *)((longlong)param_1 + 0x44) = *(undefined4 *)(param_3 + 0x14);
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_3 + 0x18);
  *(undefined4 *)((longlong)param_1 + 0x4c) = *(undefined4 *)(param_3 + 0x3c);
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_3 + 0x40);
  return param_1;
}



// FUNCTION 1474071b8 FUN_1474071b8 body=39 status=ok
// SIG undefined FUN_1474071b8(void)

undefined8 * FUN_1474071b8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149e38530;
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1474071e0 FUN_1474071e0 body=122 status=ok
// SIG undefined FUN_1474071e0(void)

void FUN_1474071e0(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x60) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x60) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x60 + 4) = uVar4;
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



// FUNCTION 14740725a FUN_14740725a body=480 status=ok
// SIG undefined FUN_14740725a(void)

void FUN_14740725a(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  undefined2 *puVar9;
  uint uVar10;
  longlong lVar11;
  int iVar12;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined8 local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar5 = local_78;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar10 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar10) * 4)
             = 0xffffffff;
        uVar10 = uVar10 + 1;
      } while (uVar2 != uVar10);
    }
    local_60 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_68);
    }
    local_88 = local_68;
    local_80 = local_60;
    local_78 = local_58;
    uVar5 = local_78;
    local_70 = local_50;
    local_6c = local_4c;
    local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    local_90 = param_1;
    if (local_78._4_4_ < (int)local_60[3]) {
      iVar12 = local_78._4_4_;
      local_78 = uVar5;
      do {
        lVar3 = *local_90;
        lVar11 = (longlong)iVar12 * 0x60;
        iVar6 = *(int *)(lVar3 + 8 + lVar11);
        puVar9 = &DAT_149dfb77a;
        iVar4 = 0;
        if (iVar6 != 0) {
          puVar9 = *(undefined2 **)(lVar3 + lVar11);
          iVar4 = iVar6 + -1;
        }
        iVar6 = FUN_144a49b4a(iVar4,puVar9);
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar3 + 0x5c + lVar11) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x58 + lVar11) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar12
        ;
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar12 = local_78._4_4_;
        uVar5 = local_78;
      } while (local_78._4_4_ < (int)local_80[3]);
    }
  }
  local_78 = uVar5;
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14740743c FUN_14740743c body=396 status=ok
// SIG undefined FUN_14740743c(void)

void FUN_14740743c(longlong param_1,longlong param_2)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  longlong *plVar4;
  int iVar5;
  undefined2 *puVar6;
  undefined2 **ppuVar7;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  longlong local_78 [2];
  undefined2 *local_68;
  undefined8 uStack_60;
  undefined2 *local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((((*(char *)(param_1 + 0xf8) == '\x01') && (*(int *)(param_2 + 0x34) != 0)) &&
      (*(int *)(param_2 + 0x38) != 0)) && (*(int *)(param_2 + 0x68) == 0)) {
    local_58 = (undefined2 *)0x0;
    uStack_50 = 0;
    ppuVar7 = (undefined2 **)(param_2 + 0x48);
    local_68 = (undefined2 *)0x0;
    uStack_60 = 0;
    FUN_140056680(local_78,&DAT_149e001d8);
    local_80 = 0;
    local_88 = 0;
    cVar2 = FUN_1407cdbc6(ppuVar7,local_78,&local_58,&local_68);
    if (local_78[0] != 0) {
      FUN_1400020a8();
    }
    if (cVar2 == '\0') {
      param_1 = param_1 + 0xa0;
      iVar5 = *(int *)(param_2 + 0x50);
      if (iVar5 == 0) {
        puVar6 = &DAT_149dfb77a;
      }
      else {
        puVar6 = *(undefined2 **)(param_2 + 0x48);
      }
      iVar1 = iVar5 + -1;
      if (iVar5 == 0) {
        iVar1 = 0;
      }
      uVar3 = FUN_144a49b4a(iVar1,puVar6);
    }
    else {
      puVar6 = &DAT_149dfb77a;
      if ((int)uStack_50 != 0) {
        puVar6 = local_58;
      }
      iVar5 = (int)uStack_50 + -1;
      if ((int)uStack_50 == 0) {
        iVar5 = 0;
      }
      uVar3 = FUN_144a49b4a(iVar5,puVar6);
      plVar4 = (longlong *)FUN_1474075ca(param_1,uVar3,&local_58);
      *plVar4 = *plVar4 + (ulonglong)*(uint *)(param_2 + 0x34);
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      param_1 = param_1 + 0x50;
      iVar5 = (int)uStack_60 + -1;
      puVar6 = local_68;
      if ((int)uStack_60 == 0) {
        iVar5 = 0;
        puVar6 = &DAT_149dfb77a;
      }
      uVar3 = FUN_144a49b4a(iVar5,puVar6);
      ppuVar7 = &local_68;
    }
    plVar4 = (longlong *)FUN_1474075ca(param_1,uVar3,ppuVar7);
    *plVar4 = *plVar4 + (ulonglong)*(uint *)(param_2 + 0x34);
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    if (local_68 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_58 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474075ca FUN_1474075ca body=135 status=ok
// SIG undefined FUN_1474075ca(void)

longlong FUN_1474075ca(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = FUN_147407652();
  if (iVar1 != -1) {
    lVar3 = *param_1;
    lVar2 = (longlong)iVar1;
    if (lVar3 + lVar2 * 0x28 != 0) goto LAB_147407604;
  }
  local_30 = param_3;
  FUN_14740771e(param_1,&local_24,param_2);
  lVar2 = (longlong)local_24;
  lVar3 = *param_1;
LAB_147407604:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar3 + lVar2 * 0x28 + 0x10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147407652 FUN_147407652 body=203 status=ok
// SIG undefined FUN_147407652(void)

int FUN_147407652(longlong *param_1,uint param_2,longlong *param_3)

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
LAB_14740769c:
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
            if (0x7f < (uVar7 | uVar8)) goto LAB_147407712;
            uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
            uVar11 = (ulonglong)uVar7;
            uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
            if ((&DAT_149e05da0)[uVar9] != (&DAT_149e05da0)[uVar11]) goto LAB_147407712;
          }
          lVar6 = lVar6 + 2;
        } while( true );
      }
      if (iVar3 + iVar2 == 1) {
        return iVar1;
      }
      goto LAB_147407703;
    }
  }
  return -1;
LAB_147407712:
  if (uVar8 == uVar7) {
    return iVar1;
  }
LAB_147407703:
  iVar1 = *(int *)(lVar4 + 0x20 + lVar10 * 0x28);
  if (iVar1 == -1) {
    return -1;
  }
  goto LAB_14740769c;
}



// FUNCTION 14740771e FUN_14740771e body=344 status=ok
// SIG undefined FUN_14740771e(void)

undefined4 * FUN_14740771e(longlong param_1,undefined4 *param_2,uint param_3,longlong *param_4)

{
  undefined8 *puVar1;
  void *_Src;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_147407878(param_1,local_48);
  puVar1 = (undefined8 *)*param_4;
  *local_40 = 0;
  iVar5 = *(int *)(puVar1 + 1);
  _Src = (void *)*puVar1;
  *(int *)(local_40 + 1) = iVar5;
  if ((longlong)iVar5 == 0) {
    *(undefined4 *)((longlong)local_40 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(local_40,iVar5,0);
    memcpy((void *)*local_40,_Src,(longlong)iVar5 * 2);
  }
  local_40[2] = 0;
  *(undefined4 *)(local_40 + 3) = 0;
  *(undefined4 *)(local_40 + 4) = 0xffffffff;
  cVar2 = FUN_14740795e(param_1,param_3,local_40);
  if (cVar2 == '\0') {
    uVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar5 = 1;
    if (3 < uVar3) {
      uVar4 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar3 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      *(uint *)((longlong)local_40 + 0x24) = param_3;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 4) =
           *(undefined4 *)
            (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_147407a42(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147407878 FUN_147407878 body=230 status=ok
// SIG undefined FUN_147407878(void)

int * FUN_147407878(longlong *param_1,int *param_2)

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



// FUNCTION 14740795e FUN_14740795e body=114 status=ok
// SIG undefined FUN_14740795e(void)

undefined8 FUN_14740795e(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

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
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar9 = FUN_147407652(), iVar9 != -1)) {
    plVar1 = (longlong *)(*param_1 + (longlong)iVar9 * 0x28);
    if (*plVar1 != 0) {
      FUN_1400020a8();
    }
    uVar2 = *param_3;
    uVar3 = param_3[1];
    uVar4 = param_3[2];
    uVar5 = param_3[3];
    uVar6 = param_3[5];
    uVar7 = param_3[6];
    uVar8 = param_3[7];
    *(undefined4 *)(plVar1 + 2) = param_3[4];
    *(undefined4 *)((longlong)plVar1 + 0x14) = uVar6;
    *(undefined4 *)(plVar1 + 3) = uVar7;
    *(undefined4 *)((longlong)plVar1 + 0x1c) = uVar8;
    *(undefined4 *)plVar1 = uVar2;
    *(undefined4 *)((longlong)plVar1 + 4) = uVar3;
    *(undefined4 *)(plVar1 + 1) = uVar4;
    *(undefined4 *)((longlong)plVar1 + 0xc) = uVar5;
    FUN_1474079d0(param_1,*param_4);
    *param_4 = iVar9;
    return 1;
  }
  return 0;
}



// FUNCTION 1474079d0 FUN_1474079d0 body=114 status=ok
// SIG undefined FUN_1474079d0(void)

void FUN_1474079d0(longlong *param_1,int param_2)

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



// FUNCTION 147407a42 FUN_147407a42 body=476 status=ok
// SIG undefined FUN_147407a42(void)

void FUN_147407a42(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong *plVar9;
  undefined2 *puVar10;
  uint uVar11;
  int iVar12;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined8 local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar5 = local_78;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar11 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(undefined4 *)((longlong)plVar9 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar11) * 4)
             = 0xffffffff;
        uVar11 = uVar11 + 1;
      } while (uVar2 != uVar11);
    }
    local_60 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_68);
    }
    local_88 = local_68;
    local_80 = local_60;
    local_78 = local_58;
    uVar5 = local_78;
    local_70 = local_50;
    local_6c = local_4c;
    local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    local_90 = param_1;
    if (local_78._4_4_ < (int)local_60[3]) {
      iVar12 = local_78._4_4_;
      local_78 = uVar5;
      do {
        lVar3 = *local_90;
        lVar7 = (longlong)iVar12;
        iVar6 = *(int *)(lVar3 + 8 + lVar7 * 0x28);
        puVar10 = &DAT_149dfb77a;
        iVar4 = 0;
        if (iVar6 != 0) {
          puVar10 = *(undefined2 **)(lVar3 + lVar7 * 0x28);
          iVar4 = iVar6 + -1;
        }
        iVar6 = FUN_144a49b4a(iVar4,puVar10);
        uVar8 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar8;
        *(int *)(lVar3 + 0x24 + lVar7 * 0x28) = iVar6;
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x20 + lVar7 * 0x28) =
             *(undefined4 *)((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & uVar8) * 4);
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(int *)((longlong)plVar9 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar12
        ;
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar12 = local_78._4_4_;
        uVar5 = local_78;
      } while (local_78._4_4_ < (int)local_80[3]);
    }
  }
  local_78 = uVar5;
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147407c20 FUN_147407c20 body=46 status=ok
// SIG undefined FUN_147407c20(void)

void FUN_147407c20(undefined8 *param_1)

{
  if (*(int *)(param_1 + 1) <= *(int *)((longlong)param_1 + 0x34)) {
    return;
  }
  FUN_147407c4e();
  FUN_147407dbd(*param_1,*(int *)(param_1 + 1) - *(int *)((longlong)param_1 + 0x34));
  return;
}



// FUNCTION 147407c4e FUN_147407c4e body=367 status=ok
// SIG undefined FUN_147407c4e(void)

void FUN_147407c4e(longlong *param_1)

{
  undefined8 *puVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  void *_Dst;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  undefined8 *puVar17;
  uint uVar18;
  longlong *plVar19;
  int iVar20;
  
  iVar3 = *(int *)((longlong)param_1 + 0x34);
  if ((longlong)iVar3 != 0) {
    uVar4 = *(uint *)(param_1 + 1);
    iVar13 = uVar4 - iVar3;
    iVar12 = iVar13;
    if ((int)param_1[6] != -1) {
      lVar6 = *param_1;
      iVar14 = (int)param_1[6];
      uVar16 = uVar4;
      do {
        iVar5 = *(int *)(lVar6 + 4 + (longlong)iVar14 * 0x28);
        if (iVar14 < iVar13) {
          puVar1 = (undefined8 *)(lVar6 + (longlong)iVar14 * 0x28);
          plVar19 = (longlong *)param_1[4];
          if ((longlong *)param_1[4] == (longlong *)0x0) {
            plVar19 = param_1 + 2;
          }
          puVar11 = (undefined8 *)(lVar6 + 0x28 + (longlong)(int)(uVar16 - 1) * 0x28);
          uVar15 = uVar16;
          do {
            puVar17 = puVar11;
            uVar16 = uVar15 - 1;
            uVar18 = uVar15 + 0x1e;
            if (-1 < (int)uVar16) {
              uVar18 = uVar16;
            }
            puVar11 = puVar17 + -5;
            uVar15 = uVar16;
          } while ((*(uint *)((longlong)plVar19 + (longlong)((int)uVar18 >> 5) * 4) >>
                    (uVar16 & 0x1f) & 1) == 0);
          uVar7 = puVar17[-5];
          uVar8 = puVar17[-4];
          uVar9 = puVar17[-3];
          uVar10 = puVar17[-2];
          puVar1[4] = puVar17[-1];
          puVar1[2] = uVar9;
          puVar1[3] = uVar10;
          *puVar1 = uVar7;
          puVar1[1] = uVar8;
          plVar19 = (longlong *)param_1[4];
          if ((longlong *)param_1[4] == (longlong *)0x0) {
            plVar19 = param_1 + 2;
          }
          iVar20 = iVar14 + 0x1f;
          if (-1 < iVar14) {
            iVar20 = iVar14;
          }
          puVar2 = (uint *)((longlong)plVar19 + (longlong)(iVar20 >> 5) * 4);
          *puVar2 = *puVar2 | 1 << ((byte)iVar14 & 0x1f);
        }
        iVar14 = iVar5;
      } while (iVar5 != -1);
      iVar14 = (int)param_1[1] - uVar4;
      if (iVar14 != 0) {
        _Dst = (void *)((longlong)iVar13 * 0x28 + *param_1);
        memmove(_Dst,(void *)((longlong)_Dst + (longlong)iVar3 * 0x28),(longlong)iVar14 * 0x28);
        iVar12 = (int)param_1[1] - iVar3;
      }
    }
    *(int *)(param_1 + 1) = iVar12;
    FUN_144a6134a(param_1 + 2,iVar13,iVar3);
    param_1[6] = 0xffffffff;
    if (*(int *)((longlong)param_1 + 0xc) != (int)param_1[1]) {
      FUN_140549ad6(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 147407dbd FUN_147407dbd body=940 status=ok
// SIG undefined FUN_147407dbd(void)

void FUN_147407dbd(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  int iVar11;
  undefined8 *puVar12;
  uint uVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  longlong *plVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  int iVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  float fVar24;
  undefined1 auStack_388 [32];
  longlong local_368;
  longlong local_360;
  undefined4 local_358 [188];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_388;
  if (1 < (int)param_2) {
    memset(local_358,0,0x2f0);
    local_360 = param_1 + (ulonglong)param_2 * 0x28 + -0x28;
    local_368 = param_1;
    fVar24 = logf((float)(int)param_2);
    local_358[0] = (int)(longlong)(fVar24 + fVar24);
    plVar17 = &local_368;
    do {
      puVar10 = (undefined8 *)*plVar17;
      puVar18 = (undefined8 *)plVar17[1];
      iVar20 = (int)plVar17[2];
      iVar11 = (int)((ulonglong)((longlong)puVar18 - (longlong)puVar10) >> 3);
      puVar21 = puVar18;
      puVar22 = puVar10;
      if (iVar20 != 0) {
LAB_147407e8a:
        uVar13 = iVar11 * -0x33333333 + 1;
        if (8 < (int)uVar13) {
          uVar14 = (ulonglong)(uVar13 >> 1);
          uVar1 = puVar10[uVar14 * 5 + 4];
          uVar2 = puVar10[uVar14 * 5];
          uVar3 = (puVar10 + uVar14 * 5)[1];
          uVar4 = puVar10[uVar14 * 5 + 2];
          uVar5 = (puVar10 + uVar14 * 5 + 2)[1];
          puVar10[uVar14 * 5 + 4] = puVar10[4];
          uVar6 = *puVar10;
          uVar7 = puVar10[1];
          uVar8 = puVar10[3];
          puVar10[uVar14 * 5 + 2] = puVar10[2];
          (puVar10 + uVar14 * 5 + 2)[1] = uVar8;
          puVar10[uVar14 * 5] = uVar6;
          (puVar10 + uVar14 * 5)[1] = uVar7;
          puVar10[4] = uVar1;
          puVar10[2] = uVar4;
          puVar10[3] = uVar5;
          *puVar10 = uVar2;
          puVar10[1] = uVar3;
          puVar15 = puVar18 + 5;
          puVar12 = puVar10;
          do {
            puVar9 = puVar12 + 5;
            puVar19 = puVar12 + 5;
            do {
              puVar12 = puVar19;
              puVar16 = puVar9;
              if (puVar18 < puVar12) break;
              puVar9 = puVar16 + 5;
              puVar19 = puVar12 + 5;
            } while ((longlong)puVar10[2] <= (longlong)puVar12[2]);
            puVar9 = puVar15 + -10;
            do {
              puVar19 = puVar15;
              puVar23 = puVar9;
              puVar15 = puVar19 + -5;
              if (puVar15 <= puVar10) break;
              puVar9 = puVar23 + -5;
            } while ((longlong)puVar19[-3] <= (longlong)puVar10[2]);
            if (puVar15 < puVar12) goto LAB_147407fb7;
            uVar1 = puVar12[4];
            uVar2 = *puVar12;
            uVar3 = puVar12[1];
            uVar4 = puVar12[2];
            uVar5 = puVar12[3];
            puVar12[4] = puVar19[-1];
            uVar6 = *puVar15;
            uVar7 = puVar19[-4];
            uVar8 = puVar19[-2];
            puVar12[2] = puVar19[-3];
            puVar12[3] = uVar8;
            *puVar12 = uVar6;
            puVar12[1] = uVar7;
            puVar19[-1] = uVar1;
            puVar19[-3] = uVar4;
            puVar19[-2] = uVar5;
            *puVar15 = uVar2;
            puVar19[-4] = uVar3;
          } while( true );
        }
        for (; puVar22 = puVar10, puVar21 = puVar10, puVar10 < puVar18; puVar18 = puVar18 + -5) {
          while (puVar15 = puVar22, puVar21 = puVar21 + 5, puVar21 <= puVar18) {
            puVar22 = puVar21;
            if ((longlong)puVar15[2] <= (longlong)puVar21[2]) {
              puVar22 = puVar15;
            }
          }
          local_48 = puVar15[4];
          local_68 = *puVar15;
          uStack_60 = puVar15[1];
          local_58 = puVar15[2];
          uStack_50 = puVar15[3];
          uVar4 = local_68;
          uVar5 = uStack_60;
          puVar15[4] = puVar18[4];
          uVar1 = *puVar18;
          uVar2 = puVar18[1];
          uVar3 = puVar18[3];
          puVar15[2] = puVar18[2];
          puVar15[3] = uVar3;
          *puVar15 = uVar1;
          puVar15[1] = uVar2;
          puVar18[4] = local_48;
          local_68._4_4_ = (undefined4)((ulonglong)local_68 >> 0x20);
          uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
          puVar18[2] = local_58;
          puVar18[3] = uStack_50;
          *(undefined4 *)puVar18 = (undefined4)local_68;
          *(undefined4 *)((longlong)puVar18 + 4) = local_68._4_4_;
          *(undefined4 *)(puVar18 + 1) = (undefined4)uStack_60;
          *(undefined4 *)((longlong)puVar18 + 0xc) = uStack_60._4_4_;
          local_68 = uVar4;
          uStack_60 = uVar5;
        }
        goto LAB_147408148;
      }
LAB_14740815d:
      FUN_14740816a(puVar10);
LAB_147408148:
      plVar17 = plVar17 + -3;
    } while (&local_368 <= plVar17);
  }
  if ((local_40 ^ (ulonglong)auStack_388) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_147407fb7:
  local_48 = puVar10[4];
  local_68 = *puVar10;
  uStack_60 = puVar10[1];
  local_58 = puVar10[2];
  uStack_50 = puVar10[3];
  uVar4 = local_68;
  uVar5 = uStack_60;
  puVar10[4] = puVar19[-1];
  uVar1 = *puVar15;
  uVar2 = puVar19[-4];
  uVar3 = puVar19[-2];
  puVar10[2] = puVar19[-3];
  puVar10[3] = uVar3;
  *puVar10 = uVar1;
  puVar10[1] = uVar2;
  puVar19[-1] = local_48;
  local_68._4_4_ = (undefined4)((ulonglong)local_68 >> 0x20);
  uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
  puVar19[-3] = local_58;
  puVar19[-2] = uStack_50;
  *(undefined4 *)puVar15 = (undefined4)local_68;
  *(undefined4 *)((longlong)puVar19 + -0x24) = local_68._4_4_;
  *(undefined4 *)(puVar19 + -4) = (undefined4)uStack_60;
  *(undefined4 *)((longlong)puVar19 + -0x1c) = uStack_60._4_4_;
  iVar20 = iVar20 + -1;
  puVar19 = puVar19 + -10;
  local_68 = uVar4;
  uStack_60 = uVar5;
  if ((longlong)puVar23 - (longlong)puVar22 < (longlong)puVar21 - (longlong)puVar16) {
    if (puVar12 < puVar18) {
      *plVar17 = (longlong)puVar12;
      plVar17[1] = (longlong)puVar18;
      *(int *)(plVar17 + 2) = iVar20;
      plVar17 = plVar17 + 3;
    }
    puVar16 = puVar10;
    if (puVar15 <= puVar10 + 5) goto LAB_147408148;
  }
  else {
    if (puVar10 + 5 < puVar15) {
      *plVar17 = (longlong)puVar10;
      plVar17[1] = (longlong)puVar19;
      *(int *)(plVar17 + 2) = iVar20;
      plVar17 = plVar17 + 3;
    }
    puVar10 = puVar12;
    puVar19 = puVar18;
    puVar23 = puVar18;
    if (puVar18 <= puVar12) goto LAB_147408148;
  }
  iVar11 = (int)((ulonglong)((longlong)puVar23 - (longlong)puVar16) >> 3);
  puVar18 = puVar19;
  puVar21 = puVar23;
  puVar22 = puVar16;
  if (iVar20 == 0) goto LAB_14740815d;
  goto LAB_147407e8a;
}



// FUNCTION 14740816a FUN_14740816a body=695 status=ok
// SIG undefined FUN_14740816a(void)

void FUN_14740816a(undefined8 *param_1,uint param_2)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  int iVar12;
  ulonglong uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  bool bVar17;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0) {
    iVar12 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar16 = iVar12;
joined_r0x00014740819e:
    do {
      iVar14 = iVar12 * 2 + 1;
      if (iVar14 < (int)param_2) {
        iVar15 = iVar12 * 2 + 2;
        if ((iVar15 < (int)param_2) &&
           ((longlong)param_1[(longlong)iVar15 * 5 + 2] <=
            (longlong)param_1[(longlong)iVar14 * 5 + 2])) {
          iVar14 = iVar15;
        }
        if ((longlong)param_1[(longlong)iVar14 * 5 + 2] <
            (longlong)param_1[(longlong)iVar12 * 5 + 2]) {
          puVar2 = param_1 + (longlong)iVar12 * 5;
          puVar3 = param_1 + (longlong)iVar14 * 5;
          local_18 = puVar2[4];
          uVar4 = *puVar2;
          uVar5 = puVar2[1];
          uVar6 = puVar2[2];
          uVar7 = puVar2[3];
          puVar2[4] = puVar3[4];
          uVar8 = *puVar3;
          uVar9 = puVar3[1];
          uVar10 = puVar3[3];
          puVar2[2] = puVar3[2];
          puVar2[3] = uVar10;
          *puVar2 = uVar8;
          puVar2[1] = uVar9;
          puVar3[4] = local_18;
          local_38._0_4_ = (undefined4)uVar4;
          local_38._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
          uStack_30._0_4_ = (undefined4)uVar5;
          uStack_30._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
          local_28._0_4_ = (undefined4)uVar6;
          local_28._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
          uStack_20._0_4_ = (undefined4)uVar7;
          uStack_20._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
          *(undefined4 *)(puVar3 + 2) = (undefined4)local_28;
          *(undefined4 *)((longlong)puVar3 + 0x14) = local_28._4_4_;
          *(undefined4 *)(puVar3 + 3) = (undefined4)uStack_20;
          *(undefined4 *)((longlong)puVar3 + 0x1c) = uStack_20._4_4_;
          *(undefined4 *)puVar3 = (undefined4)local_38;
          *(undefined4 *)((longlong)puVar3 + 4) = local_38._4_4_;
          *(undefined4 *)(puVar3 + 1) = (undefined4)uStack_30;
          *(undefined4 *)((longlong)puVar3 + 0xc) = uStack_30._4_4_;
          iVar12 = iVar14;
          local_38 = uVar4;
          uStack_30 = uVar5;
          local_28 = uVar6;
          uStack_20 = uVar7;
          goto joined_r0x00014740819e;
        }
      }
      bVar17 = iVar16 != 0;
      iVar12 = iVar16 + -1;
      iVar16 = iVar12;
    } while (bVar17);
    if (1 < (int)param_2) {
      uVar13 = (ulonglong)param_2 - 1;
      local_18 = param_1[4];
      uVar4 = *param_1;
      uVar5 = param_1[1];
      uVar6 = param_1[2];
      uVar7 = param_1[3];
      param_1[4] = param_1[uVar13 * 5 + 4];
      uVar8 = param_1[uVar13 * 5];
      uVar9 = (param_1 + uVar13 * 5)[1];
      uVar10 = (param_1 + uVar13 * 5 + 2)[1];
      param_1[2] = param_1[uVar13 * 5 + 2];
      param_1[3] = uVar10;
      *param_1 = uVar8;
      param_1[1] = uVar9;
      param_1[uVar13 * 5 + 4] = local_18;
      local_38._0_4_ = (undefined4)uVar4;
      local_38._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
      uStack_30._0_4_ = (undefined4)uVar5;
      uStack_30._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
      local_28._0_4_ = (undefined4)uVar6;
      local_28._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_20._0_4_ = (undefined4)uVar7;
      uStack_20._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = param_1 + uVar13 * 5 + 2;
      *(undefined4 *)puVar2 = (undefined4)local_28;
      *(undefined4 *)((longlong)puVar2 + 4) = local_28._4_4_;
      *(undefined4 *)(puVar2 + 1) = (undefined4)uStack_20;
      *(undefined4 *)((longlong)puVar2 + 0xc) = uStack_20._4_4_;
      puVar2 = param_1 + uVar13 * 5;
      *(undefined4 *)puVar2 = (undefined4)local_38;
      *(undefined4 *)((longlong)puVar2 + 4) = local_38._4_4_;
      *(undefined4 *)(puVar2 + 1) = (undefined4)uStack_30;
      *(undefined4 *)((longlong)puVar2 + 0xc) = uStack_30._4_4_;
      local_38 = uVar4;
      uStack_30 = uVar5;
      local_28 = uVar6;
      uStack_20 = uVar7;
      if (param_2 != 2) {
        do {
          iVar12 = 0;
          iVar14 = 1;
          iVar16 = 0;
          do {
            iVar12 = iVar12 + 2;
            iVar15 = iVar14;
            if (((longlong)iVar12 < (longlong)uVar13) &&
               ((longlong)param_1[(longlong)iVar12 * 5 + 2] <=
                (longlong)param_1[(longlong)iVar14 * 5 + 2])) {
              iVar15 = iVar12;
            }
            if ((longlong)param_1[(longlong)iVar16 * 5 + 2] <=
                (longlong)param_1[(longlong)iVar15 * 5 + 2]) break;
            puVar2 = param_1 + (longlong)iVar16 * 5;
            puVar3 = param_1 + (longlong)iVar15 * 5;
            uVar4 = puVar2[4];
            uVar5 = *puVar2;
            uVar6 = puVar2[1];
            uVar7 = puVar2[2];
            uVar8 = puVar2[3];
            puVar2[4] = puVar3[4];
            uVar9 = *puVar3;
            uVar10 = puVar3[1];
            uVar11 = puVar3[3];
            puVar2[2] = puVar3[2];
            puVar2[3] = uVar11;
            *puVar2 = uVar9;
            puVar2[1] = uVar10;
            puVar3[4] = uVar4;
            puVar3[2] = uVar7;
            puVar3[3] = uVar8;
            *puVar3 = uVar5;
            puVar3[1] = uVar6;
            iVar12 = iVar15 * 2;
            iVar14 = iVar15 * 2 + 1;
            iVar16 = iVar15;
          } while ((longlong)iVar14 < (longlong)uVar13);
          uVar1 = uVar13 - 1;
          local_18 = param_1[4];
          uVar4 = *param_1;
          uVar5 = param_1[1];
          uVar6 = param_1[2];
          uVar7 = param_1[3];
          param_1[4] = param_1[uVar1 * 5 + 4];
          uVar8 = param_1[uVar1 * 5];
          uVar9 = (param_1 + uVar1 * 5)[1];
          uVar10 = (param_1 + uVar1 * 5 + 2)[1];
          param_1[2] = param_1[uVar1 * 5 + 2];
          param_1[3] = uVar10;
          *param_1 = uVar8;
          param_1[1] = uVar9;
          param_1[uVar1 * 5 + 4] = local_18;
          local_38._0_4_ = (undefined4)uVar4;
          local_38._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
          uStack_30._0_4_ = (undefined4)uVar5;
          uStack_30._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
          local_28._0_4_ = (undefined4)uVar6;
          local_28._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
          uStack_20._0_4_ = (undefined4)uVar7;
          uStack_20._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
          puVar2 = param_1 + uVar1 * 5 + 2;
          *(undefined4 *)puVar2 = (undefined4)local_28;
          *(undefined4 *)((longlong)puVar2 + 4) = local_28._4_4_;
          *(undefined4 *)(puVar2 + 1) = (undefined4)uStack_20;
          *(undefined4 *)((longlong)puVar2 + 0xc) = uStack_20._4_4_;
          puVar2 = param_1 + uVar1 * 5;
          *(undefined4 *)puVar2 = (undefined4)local_38;
          *(undefined4 *)((longlong)puVar2 + 4) = local_38._4_4_;
          *(undefined4 *)(puVar2 + 1) = (undefined4)uStack_30;
          *(undefined4 *)((longlong)puVar2 + 0xc) = uStack_30._4_4_;
          bVar17 = 2 < uVar13;
          uVar13 = uVar1;
          local_38 = uVar4;
          uStack_30 = uVar5;
          local_28 = uVar6;
          uStack_20 = uVar7;
        } while (bVar17);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147408422 FUN_147408422 body=46 status=ok
// SIG undefined FUN_147408422(void)

void FUN_147408422(undefined8 *param_1)

{
  if (*(int *)(param_1 + 1) <= *(int *)((longlong)param_1 + 0x34)) {
    return;
  }
  FUN_147407c4e();
  FUN_147408450(*param_1,*(int *)(param_1 + 1) - *(int *)((longlong)param_1 + 0x34));
  return;
}



// FUNCTION 147408450 FUN_147408450 body=940 status=ok
// SIG undefined FUN_147408450(void)

void FUN_147408450(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  int iVar11;
  undefined8 *puVar12;
  uint uVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  longlong *plVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  int iVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  float fVar24;
  undefined1 auStack_388 [32];
  longlong local_368;
  longlong local_360;
  undefined4 local_358 [188];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_388;
  if (1 < (int)param_2) {
    memset(local_358,0,0x2f0);
    local_360 = param_1 + (ulonglong)param_2 * 0x28 + -0x28;
    local_368 = param_1;
    fVar24 = logf((float)(int)param_2);
    local_358[0] = (int)(longlong)(fVar24 + fVar24);
    plVar17 = &local_368;
    do {
      puVar10 = (undefined8 *)*plVar17;
      puVar18 = (undefined8 *)plVar17[1];
      iVar20 = (int)plVar17[2];
      iVar11 = (int)((ulonglong)((longlong)puVar18 - (longlong)puVar10) >> 3);
      puVar21 = puVar18;
      puVar22 = puVar10;
      if (iVar20 != 0) {
LAB_14740851d:
        uVar13 = iVar11 * -0x33333333 + 1;
        if (8 < (int)uVar13) {
          uVar14 = (ulonglong)(uVar13 >> 1);
          uVar1 = puVar10[uVar14 * 5 + 4];
          uVar2 = puVar10[uVar14 * 5];
          uVar3 = (puVar10 + uVar14 * 5)[1];
          uVar4 = puVar10[uVar14 * 5 + 2];
          uVar5 = (puVar10 + uVar14 * 5 + 2)[1];
          puVar10[uVar14 * 5 + 4] = puVar10[4];
          uVar6 = *puVar10;
          uVar7 = puVar10[1];
          uVar8 = puVar10[3];
          puVar10[uVar14 * 5 + 2] = puVar10[2];
          (puVar10 + uVar14 * 5 + 2)[1] = uVar8;
          puVar10[uVar14 * 5] = uVar6;
          (puVar10 + uVar14 * 5)[1] = uVar7;
          puVar10[4] = uVar1;
          puVar10[2] = uVar4;
          puVar10[3] = uVar5;
          *puVar10 = uVar2;
          puVar10[1] = uVar3;
          puVar15 = puVar18 + 5;
          puVar12 = puVar10;
          do {
            puVar9 = puVar12 + 5;
            puVar19 = puVar12 + 5;
            do {
              puVar12 = puVar19;
              puVar16 = puVar9;
              if (puVar18 < puVar12) break;
              puVar9 = puVar16 + 5;
              puVar19 = puVar12 + 5;
            } while ((longlong)puVar10[2] <= (longlong)puVar12[2]);
            puVar9 = puVar15 + -10;
            do {
              puVar19 = puVar15;
              puVar23 = puVar9;
              puVar15 = puVar19 + -5;
              if (puVar15 <= puVar10) break;
              puVar9 = puVar23 + -5;
            } while ((longlong)puVar19[-3] <= (longlong)puVar10[2]);
            if (puVar15 < puVar12) goto LAB_14740864a;
            uVar1 = puVar12[4];
            uVar2 = *puVar12;
            uVar3 = puVar12[1];
            uVar4 = puVar12[2];
            uVar5 = puVar12[3];
            puVar12[4] = puVar19[-1];
            uVar6 = *puVar15;
            uVar7 = puVar19[-4];
            uVar8 = puVar19[-2];
            puVar12[2] = puVar19[-3];
            puVar12[3] = uVar8;
            *puVar12 = uVar6;
            puVar12[1] = uVar7;
            puVar19[-1] = uVar1;
            puVar19[-3] = uVar4;
            puVar19[-2] = uVar5;
            *puVar15 = uVar2;
            puVar19[-4] = uVar3;
          } while( true );
        }
        for (; puVar22 = puVar10, puVar21 = puVar10, puVar10 < puVar18; puVar18 = puVar18 + -5) {
          while (puVar15 = puVar22, puVar21 = puVar21 + 5, puVar21 <= puVar18) {
            puVar22 = puVar21;
            if ((longlong)puVar15[2] <= (longlong)puVar21[2]) {
              puVar22 = puVar15;
            }
          }
          local_48 = puVar15[4];
          local_68 = *puVar15;
          uStack_60 = puVar15[1];
          local_58 = puVar15[2];
          uStack_50 = puVar15[3];
          uVar4 = local_68;
          uVar5 = uStack_60;
          puVar15[4] = puVar18[4];
          uVar1 = *puVar18;
          uVar2 = puVar18[1];
          uVar3 = puVar18[3];
          puVar15[2] = puVar18[2];
          puVar15[3] = uVar3;
          *puVar15 = uVar1;
          puVar15[1] = uVar2;
          puVar18[4] = local_48;
          local_68._4_4_ = (undefined4)((ulonglong)local_68 >> 0x20);
          uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
          puVar18[2] = local_58;
          puVar18[3] = uStack_50;
          *(undefined4 *)puVar18 = (undefined4)local_68;
          *(undefined4 *)((longlong)puVar18 + 4) = local_68._4_4_;
          *(undefined4 *)(puVar18 + 1) = (undefined4)uStack_60;
          *(undefined4 *)((longlong)puVar18 + 0xc) = uStack_60._4_4_;
          local_68 = uVar4;
          uStack_60 = uVar5;
        }
        goto LAB_1474087db;
      }
LAB_1474087f0:
      FUN_1474087fd(puVar10);
LAB_1474087db:
      plVar17 = plVar17 + -3;
    } while (&local_368 <= plVar17);
  }
  if ((local_40 ^ (ulonglong)auStack_388) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_14740864a:
  local_48 = puVar10[4];
  local_68 = *puVar10;
  uStack_60 = puVar10[1];
  local_58 = puVar10[2];
  uStack_50 = puVar10[3];
  uVar4 = local_68;
  uVar5 = uStack_60;
  puVar10[4] = puVar19[-1];
  uVar1 = *puVar15;
  uVar2 = puVar19[-4];
  uVar3 = puVar19[-2];
  puVar10[2] = puVar19[-3];
  puVar10[3] = uVar3;
  *puVar10 = uVar1;
  puVar10[1] = uVar2;
  puVar19[-1] = local_48;
  local_68._4_4_ = (undefined4)((ulonglong)local_68 >> 0x20);
  uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
  puVar19[-3] = local_58;
  puVar19[-2] = uStack_50;
  *(undefined4 *)puVar15 = (undefined4)local_68;
  *(undefined4 *)((longlong)puVar19 + -0x24) = local_68._4_4_;
  *(undefined4 *)(puVar19 + -4) = (undefined4)uStack_60;
  *(undefined4 *)((longlong)puVar19 + -0x1c) = uStack_60._4_4_;
  iVar20 = iVar20 + -1;
  puVar19 = puVar19 + -10;
  local_68 = uVar4;
  uStack_60 = uVar5;
  if ((longlong)puVar23 - (longlong)puVar22 < (longlong)puVar21 - (longlong)puVar16) {
    if (puVar12 < puVar18) {
      *plVar17 = (longlong)puVar12;
      plVar17[1] = (longlong)puVar18;
      *(int *)(plVar17 + 2) = iVar20;
      plVar17 = plVar17 + 3;
    }
    puVar16 = puVar10;
    if (puVar15 <= puVar10 + 5) goto LAB_1474087db;
  }
  else {
    if (puVar10 + 5 < puVar15) {
      *plVar17 = (longlong)puVar10;
      plVar17[1] = (longlong)puVar19;
      *(int *)(plVar17 + 2) = iVar20;
      plVar17 = plVar17 + 3;
    }
    puVar10 = puVar12;
    puVar19 = puVar18;
    puVar23 = puVar18;
    if (puVar18 <= puVar12) goto LAB_1474087db;
  }
  iVar11 = (int)((ulonglong)((longlong)puVar23 - (longlong)puVar16) >> 3);
  puVar18 = puVar19;
  puVar21 = puVar23;
  puVar22 = puVar16;
  if (iVar20 == 0) goto LAB_1474087f0;
  goto LAB_14740851d;
}



// FUNCTION 1474087fd FUN_1474087fd body=695 status=ok
// SIG undefined FUN_1474087fd(void)

void FUN_1474087fd(undefined8 *param_1,uint param_2)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  int iVar12;
  ulonglong uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  bool bVar17;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0) {
    iVar12 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar16 = iVar12;
joined_r0x000147408831:
    do {
      iVar14 = iVar12 * 2 + 1;
      if (iVar14 < (int)param_2) {
        iVar15 = iVar12 * 2 + 2;
        if ((iVar15 < (int)param_2) &&
           ((longlong)param_1[(longlong)iVar15 * 5 + 2] <=
            (longlong)param_1[(longlong)iVar14 * 5 + 2])) {
          iVar14 = iVar15;
        }
        if ((longlong)param_1[(longlong)iVar14 * 5 + 2] <
            (longlong)param_1[(longlong)iVar12 * 5 + 2]) {
          puVar2 = param_1 + (longlong)iVar12 * 5;
          puVar3 = param_1 + (longlong)iVar14 * 5;
          local_18 = puVar2[4];
          uVar4 = *puVar2;
          uVar5 = puVar2[1];
          uVar6 = puVar2[2];
          uVar7 = puVar2[3];
          puVar2[4] = puVar3[4];
          uVar8 = *puVar3;
          uVar9 = puVar3[1];
          uVar10 = puVar3[3];
          puVar2[2] = puVar3[2];
          puVar2[3] = uVar10;
          *puVar2 = uVar8;
          puVar2[1] = uVar9;
          puVar3[4] = local_18;
          local_38._0_4_ = (undefined4)uVar4;
          local_38._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
          uStack_30._0_4_ = (undefined4)uVar5;
          uStack_30._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
          local_28._0_4_ = (undefined4)uVar6;
          local_28._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
          uStack_20._0_4_ = (undefined4)uVar7;
          uStack_20._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
          *(undefined4 *)(puVar3 + 2) = (undefined4)local_28;
          *(undefined4 *)((longlong)puVar3 + 0x14) = local_28._4_4_;
          *(undefined4 *)(puVar3 + 3) = (undefined4)uStack_20;
          *(undefined4 *)((longlong)puVar3 + 0x1c) = uStack_20._4_4_;
          *(undefined4 *)puVar3 = (undefined4)local_38;
          *(undefined4 *)((longlong)puVar3 + 4) = local_38._4_4_;
          *(undefined4 *)(puVar3 + 1) = (undefined4)uStack_30;
          *(undefined4 *)((longlong)puVar3 + 0xc) = uStack_30._4_4_;
          iVar12 = iVar14;
          local_38 = uVar4;
          uStack_30 = uVar5;
          local_28 = uVar6;
          uStack_20 = uVar7;
          goto joined_r0x000147408831;
        }
      }
      bVar17 = iVar16 != 0;
      iVar12 = iVar16 + -1;
      iVar16 = iVar12;
    } while (bVar17);
    if (1 < (int)param_2) {
      uVar13 = (ulonglong)param_2 - 1;
      local_18 = param_1[4];
      uVar4 = *param_1;
      uVar5 = param_1[1];
      uVar6 = param_1[2];
      uVar7 = param_1[3];
      param_1[4] = param_1[uVar13 * 5 + 4];
      uVar8 = param_1[uVar13 * 5];
      uVar9 = (param_1 + uVar13 * 5)[1];
      uVar10 = (param_1 + uVar13 * 5 + 2)[1];
      param_1[2] = param_1[uVar13 * 5 + 2];
      param_1[3] = uVar10;
      *param_1 = uVar8;
      param_1[1] = uVar9;
      param_1[uVar13 * 5 + 4] = local_18;
      local_38._0_4_ = (undefined4)uVar4;
      local_38._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
      uStack_30._0_4_ = (undefined4)uVar5;
      uStack_30._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
      local_28._0_4_ = (undefined4)uVar6;
      local_28._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_20._0_4_ = (undefined4)uVar7;
      uStack_20._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = param_1 + uVar13 * 5 + 2;
      *(undefined4 *)puVar2 = (undefined4)local_28;
      *(undefined4 *)((longlong)puVar2 + 4) = local_28._4_4_;
      *(undefined4 *)(puVar2 + 1) = (undefined4)uStack_20;
      *(undefined4 *)((longlong)puVar2 + 0xc) = uStack_20._4_4_;
      puVar2 = param_1 + uVar13 * 5;
      *(undefined4 *)puVar2 = (undefined4)local_38;
      *(undefined4 *)((longlong)puVar2 + 4) = local_38._4_4_;
      *(undefined4 *)(puVar2 + 1) = (undefined4)uStack_30;
      *(undefined4 *)((longlong)puVar2 + 0xc) = uStack_30._4_4_;
      local_38 = uVar4;
      uStack_30 = uVar5;
      local_28 = uVar6;
      uStack_20 = uVar7;
      if (param_2 != 2) {
        do {
          iVar12 = 0;
          iVar14 = 1;
          iVar16 = 0;
          do {
            iVar12 = iVar12 + 2;
            iVar15 = iVar14;
            if (((longlong)iVar12 < (longlong)uVar13) &&
               ((longlong)param_1[(longlong)iVar12 * 5 + 2] <=
                (longlong)param_1[(longlong)iVar14 * 5 + 2])) {
              iVar15 = iVar12;
            }
            if ((longlong)param_1[(longlong)iVar16 * 5 + 2] <=
                (longlong)param_1[(longlong)iVar15 * 5 + 2]) break;
            puVar2 = param_1 + (longlong)iVar16 * 5;
            puVar3 = param_1 + (longlong)iVar15 * 5;
            uVar4 = puVar2[4];
            uVar5 = *puVar2;
            uVar6 = puVar2[1];
            uVar7 = puVar2[2];
            uVar8 = puVar2[3];
            puVar2[4] = puVar3[4];
            uVar9 = *puVar3;
            uVar10 = puVar3[1];
            uVar11 = puVar3[3];
            puVar2[2] = puVar3[2];
            puVar2[3] = uVar11;
            *puVar2 = uVar9;
            puVar2[1] = uVar10;
            puVar3[4] = uVar4;
            puVar3[2] = uVar7;
            puVar3[3] = uVar8;
            *puVar3 = uVar5;
            puVar3[1] = uVar6;
            iVar12 = iVar15 * 2;
            iVar14 = iVar15 * 2 + 1;
            iVar16 = iVar15;
          } while ((longlong)iVar14 < (longlong)uVar13);
          uVar1 = uVar13 - 1;
          local_18 = param_1[4];
          uVar4 = *param_1;
          uVar5 = param_1[1];
          uVar6 = param_1[2];
          uVar7 = param_1[3];
          param_1[4] = param_1[uVar1 * 5 + 4];
          uVar8 = param_1[uVar1 * 5];
          uVar9 = (param_1 + uVar1 * 5)[1];
          uVar10 = (param_1 + uVar1 * 5 + 2)[1];
          param_1[2] = param_1[uVar1 * 5 + 2];
          param_1[3] = uVar10;
          *param_1 = uVar8;
          param_1[1] = uVar9;
          param_1[uVar1 * 5 + 4] = local_18;
          local_38._0_4_ = (undefined4)uVar4;
          local_38._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
          uStack_30._0_4_ = (undefined4)uVar5;
          uStack_30._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
          local_28._0_4_ = (undefined4)uVar6;
          local_28._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
          uStack_20._0_4_ = (undefined4)uVar7;
          uStack_20._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
          puVar2 = param_1 + uVar1 * 5 + 2;
          *(undefined4 *)puVar2 = (undefined4)local_28;
          *(undefined4 *)((longlong)puVar2 + 4) = local_28._4_4_;
          *(undefined4 *)(puVar2 + 1) = (undefined4)uStack_20;
          *(undefined4 *)((longlong)puVar2 + 0xc) = uStack_20._4_4_;
          puVar2 = param_1 + uVar1 * 5;
          *(undefined4 *)puVar2 = (undefined4)local_38;
          *(undefined4 *)((longlong)puVar2 + 4) = local_38._4_4_;
          *(undefined4 *)(puVar2 + 1) = (undefined4)uStack_30;
          *(undefined4 *)((longlong)puVar2 + 0xc) = uStack_30._4_4_;
          bVar17 = 2 < uVar13;
          uVar13 = uVar1;
          local_38 = uVar4;
          uStack_30 = uVar5;
          local_28 = uVar6;
          uStack_20 = uVar7;
        } while (bVar17);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147408ab6 FUN_147408ab6 body=46 status=ok
// SIG undefined FUN_147408ab6(void)

void FUN_147408ab6(undefined8 *param_1)

{
  if (*(int *)(param_1 + 1) <= *(int *)((longlong)param_1 + 0x34)) {
    return;
  }
  FUN_147407c4e();
  FUN_147408ae4(*param_1,*(int *)(param_1 + 1) - *(int *)((longlong)param_1 + 0x34));
  return;
}



// FUNCTION 147408ae4 FUN_147408ae4 body=940 status=ok
// SIG undefined FUN_147408ae4(void)

void FUN_147408ae4(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  int iVar11;
  undefined8 *puVar12;
  uint uVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  longlong *plVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  int iVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  float fVar24;
  undefined1 auStack_388 [32];
  longlong local_368;
  longlong local_360;
  undefined4 local_358 [188];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_388;
  if (1 < (int)param_2) {
    memset(local_358,0,0x2f0);
    local_360 = param_1 + (ulonglong)param_2 * 0x28 + -0x28;
    local_368 = param_1;
    fVar24 = logf((float)(int)param_2);
    local_358[0] = (int)(longlong)(fVar24 + fVar24);
    plVar17 = &local_368;
    do {
      puVar10 = (undefined8 *)*plVar17;
      puVar18 = (undefined8 *)plVar17[1];
      iVar20 = (int)plVar17[2];
      iVar11 = (int)((ulonglong)((longlong)puVar18 - (longlong)puVar10) >> 3);
      puVar21 = puVar18;
      puVar22 = puVar10;
      if (iVar20 != 0) {
LAB_147408bb1:
        uVar13 = iVar11 * -0x33333333 + 1;
        if (8 < (int)uVar13) {
          uVar14 = (ulonglong)(uVar13 >> 1);
          uVar1 = puVar10[uVar14 * 5 + 4];
          uVar2 = puVar10[uVar14 * 5];
          uVar3 = (puVar10 + uVar14 * 5)[1];
          uVar4 = puVar10[uVar14 * 5 + 2];
          uVar5 = (puVar10 + uVar14 * 5 + 2)[1];
          puVar10[uVar14 * 5 + 4] = puVar10[4];
          uVar6 = *puVar10;
          uVar7 = puVar10[1];
          uVar8 = puVar10[3];
          puVar10[uVar14 * 5 + 2] = puVar10[2];
          (puVar10 + uVar14 * 5 + 2)[1] = uVar8;
          puVar10[uVar14 * 5] = uVar6;
          (puVar10 + uVar14 * 5)[1] = uVar7;
          puVar10[4] = uVar1;
          puVar10[2] = uVar4;
          puVar10[3] = uVar5;
          *puVar10 = uVar2;
          puVar10[1] = uVar3;
          puVar15 = puVar18 + 5;
          puVar12 = puVar10;
          do {
            puVar9 = puVar12 + 5;
            puVar19 = puVar12 + 5;
            do {
              puVar12 = puVar19;
              puVar16 = puVar9;
              if (puVar18 < puVar12) break;
              puVar9 = puVar16 + 5;
              puVar19 = puVar12 + 5;
            } while ((longlong)puVar10[2] <= (longlong)puVar12[2]);
            puVar9 = puVar15 + -10;
            do {
              puVar19 = puVar15;
              puVar23 = puVar9;
              puVar15 = puVar19 + -5;
              if (puVar15 <= puVar10) break;
              puVar9 = puVar23 + -5;
            } while ((longlong)puVar19[-3] <= (longlong)puVar10[2]);
            if (puVar15 < puVar12) goto LAB_147408cde;
            uVar1 = puVar12[4];
            uVar2 = *puVar12;
            uVar3 = puVar12[1];
            uVar4 = puVar12[2];
            uVar5 = puVar12[3];
            puVar12[4] = puVar19[-1];
            uVar6 = *puVar15;
            uVar7 = puVar19[-4];
            uVar8 = puVar19[-2];
            puVar12[2] = puVar19[-3];
            puVar12[3] = uVar8;
            *puVar12 = uVar6;
            puVar12[1] = uVar7;
            puVar19[-1] = uVar1;
            puVar19[-3] = uVar4;
            puVar19[-2] = uVar5;
            *puVar15 = uVar2;
            puVar19[-4] = uVar3;
          } while( true );
        }
        for (; puVar22 = puVar10, puVar21 = puVar10, puVar10 < puVar18; puVar18 = puVar18 + -5) {
          while (puVar15 = puVar22, puVar21 = puVar21 + 5, puVar21 <= puVar18) {
            puVar22 = puVar21;
            if ((longlong)puVar15[2] <= (longlong)puVar21[2]) {
              puVar22 = puVar15;
            }
          }
          local_48 = puVar15[4];
          local_68 = *puVar15;
          uStack_60 = puVar15[1];
          local_58 = puVar15[2];
          uStack_50 = puVar15[3];
          uVar4 = local_68;
          uVar5 = uStack_60;
          puVar15[4] = puVar18[4];
          uVar1 = *puVar18;
          uVar2 = puVar18[1];
          uVar3 = puVar18[3];
          puVar15[2] = puVar18[2];
          puVar15[3] = uVar3;
          *puVar15 = uVar1;
          puVar15[1] = uVar2;
          puVar18[4] = local_48;
          local_68._4_4_ = (undefined4)((ulonglong)local_68 >> 0x20);
          uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
          puVar18[2] = local_58;
          puVar18[3] = uStack_50;
          *(undefined4 *)puVar18 = (undefined4)local_68;
          *(undefined4 *)((longlong)puVar18 + 4) = local_68._4_4_;
          *(undefined4 *)(puVar18 + 1) = (undefined4)uStack_60;
          *(undefined4 *)((longlong)puVar18 + 0xc) = uStack_60._4_4_;
          local_68 = uVar4;
          uStack_60 = uVar5;
        }
        goto LAB_147408e6f;
      }
LAB_147408e84:
      FUN_147408e91(puVar10);
LAB_147408e6f:
      plVar17 = plVar17 + -3;
    } while (&local_368 <= plVar17);
  }
  if ((local_40 ^ (ulonglong)auStack_388) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_147408cde:
  local_48 = puVar10[4];
  local_68 = *puVar10;
  uStack_60 = puVar10[1];
  local_58 = puVar10[2];
  uStack_50 = puVar10[3];
  uVar4 = local_68;
  uVar5 = uStack_60;
  puVar10[4] = puVar19[-1];
  uVar1 = *puVar15;
  uVar2 = puVar19[-4];
  uVar3 = puVar19[-2];
  puVar10[2] = puVar19[-3];
  puVar10[3] = uVar3;
  *puVar10 = uVar1;
  puVar10[1] = uVar2;
  puVar19[-1] = local_48;
  local_68._4_4_ = (undefined4)((ulonglong)local_68 >> 0x20);
  uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
  puVar19[-3] = local_58;
  puVar19[-2] = uStack_50;
  *(undefined4 *)puVar15 = (undefined4)local_68;
  *(undefined4 *)((longlong)puVar19 + -0x24) = local_68._4_4_;
  *(undefined4 *)(puVar19 + -4) = (undefined4)uStack_60;
  *(undefined4 *)((longlong)puVar19 + -0x1c) = uStack_60._4_4_;
  iVar20 = iVar20 + -1;
  puVar19 = puVar19 + -10;
  local_68 = uVar4;
  uStack_60 = uVar5;
  if ((longlong)puVar23 - (longlong)puVar22 < (longlong)puVar21 - (longlong)puVar16) {
    if (puVar12 < puVar18) {
      *plVar17 = (longlong)puVar12;
      plVar17[1] = (longlong)puVar18;
      *(int *)(plVar17 + 2) = iVar20;
      plVar17 = plVar17 + 3;
    }
    puVar16 = puVar10;
    if (puVar15 <= puVar10 + 5) goto LAB_147408e6f;
  }
  else {
    if (puVar10 + 5 < puVar15) {
      *plVar17 = (longlong)puVar10;
      plVar17[1] = (longlong)puVar19;
      *(int *)(plVar17 + 2) = iVar20;
      plVar17 = plVar17 + 3;
    }
    puVar10 = puVar12;
    puVar19 = puVar18;
    puVar23 = puVar18;
    if (puVar18 <= puVar12) goto LAB_147408e6f;
  }
  iVar11 = (int)((ulonglong)((longlong)puVar23 - (longlong)puVar16) >> 3);
  puVar18 = puVar19;
  puVar21 = puVar23;
  puVar22 = puVar16;
  if (iVar20 == 0) goto LAB_147408e84;
  goto LAB_147408bb1;
}



// FUNCTION 147408e91 FUN_147408e91 body=695 status=ok
// SIG undefined FUN_147408e91(void)

void FUN_147408e91(undefined8 *param_1,uint param_2)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  int iVar12;
  ulonglong uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  bool bVar17;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0) {
    iVar12 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar16 = iVar12;
joined_r0x000147408ec5:
    do {
      iVar14 = iVar12 * 2 + 1;
      if (iVar14 < (int)param_2) {
        iVar15 = iVar12 * 2 + 2;
        if ((iVar15 < (int)param_2) &&
           ((longlong)param_1[(longlong)iVar15 * 5 + 2] <=
            (longlong)param_1[(longlong)iVar14 * 5 + 2])) {
          iVar14 = iVar15;
        }
        if ((longlong)param_1[(longlong)iVar14 * 5 + 2] <
            (longlong)param_1[(longlong)iVar12 * 5 + 2]) {
          puVar2 = param_1 + (longlong)iVar12 * 5;
          puVar3 = param_1 + (longlong)iVar14 * 5;
          local_18 = puVar2[4];
          uVar4 = *puVar2;
          uVar5 = puVar2[1];
          uVar6 = puVar2[2];
          uVar7 = puVar2[3];
          puVar2[4] = puVar3[4];
          uVar8 = *puVar3;
          uVar9 = puVar3[1];
          uVar10 = puVar3[3];
          puVar2[2] = puVar3[2];
          puVar2[3] = uVar10;
          *puVar2 = uVar8;
          puVar2[1] = uVar9;
          puVar3[4] = local_18;
          local_38._0_4_ = (undefined4)uVar4;
          local_38._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
          uStack_30._0_4_ = (undefined4)uVar5;
          uStack_30._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
          local_28._0_4_ = (undefined4)uVar6;
          local_28._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
          uStack_20._0_4_ = (undefined4)uVar7;
          uStack_20._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
          *(undefined4 *)(puVar3 + 2) = (undefined4)local_28;
          *(undefined4 *)((longlong)puVar3 + 0x14) = local_28._4_4_;
          *(undefined4 *)(puVar3 + 3) = (undefined4)uStack_20;
          *(undefined4 *)((longlong)puVar3 + 0x1c) = uStack_20._4_4_;
          *(undefined4 *)puVar3 = (undefined4)local_38;
          *(undefined4 *)((longlong)puVar3 + 4) = local_38._4_4_;
          *(undefined4 *)(puVar3 + 1) = (undefined4)uStack_30;
          *(undefined4 *)((longlong)puVar3 + 0xc) = uStack_30._4_4_;
          iVar12 = iVar14;
          local_38 = uVar4;
          uStack_30 = uVar5;
          local_28 = uVar6;
          uStack_20 = uVar7;
          goto joined_r0x000147408ec5;
        }
      }
      bVar17 = iVar16 != 0;
      iVar12 = iVar16 + -1;
      iVar16 = iVar12;
    } while (bVar17);
    if (1 < (int)param_2) {
      uVar13 = (ulonglong)param_2 - 1;
      local_18 = param_1[4];
      uVar4 = *param_1;
      uVar5 = param_1[1];
      uVar6 = param_1[2];
      uVar7 = param_1[3];
      param_1[4] = param_1[uVar13 * 5 + 4];
      uVar8 = param_1[uVar13 * 5];
      uVar9 = (param_1 + uVar13 * 5)[1];
      uVar10 = (param_1 + uVar13 * 5 + 2)[1];
      param_1[2] = param_1[uVar13 * 5 + 2];
      param_1[3] = uVar10;
      *param_1 = uVar8;
      param_1[1] = uVar9;
      param_1[uVar13 * 5 + 4] = local_18;
      local_38._0_4_ = (undefined4)uVar4;
      local_38._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
      uStack_30._0_4_ = (undefined4)uVar5;
      uStack_30._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
      local_28._0_4_ = (undefined4)uVar6;
      local_28._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_20._0_4_ = (undefined4)uVar7;
      uStack_20._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = param_1 + uVar13 * 5 + 2;
      *(undefined4 *)puVar2 = (undefined4)local_28;
      *(undefined4 *)((longlong)puVar2 + 4) = local_28._4_4_;
      *(undefined4 *)(puVar2 + 1) = (undefined4)uStack_20;
      *(undefined4 *)((longlong)puVar2 + 0xc) = uStack_20._4_4_;
      puVar2 = param_1 + uVar13 * 5;
      *(undefined4 *)puVar2 = (undefined4)local_38;
      *(undefined4 *)((longlong)puVar2 + 4) = local_38._4_4_;
      *(undefined4 *)(puVar2 + 1) = (undefined4)uStack_30;
      *(undefined4 *)((longlong)puVar2 + 0xc) = uStack_30._4_4_;
      local_38 = uVar4;
      uStack_30 = uVar5;
      local_28 = uVar6;
      uStack_20 = uVar7;
      if (param_2 != 2) {
        do {
          iVar12 = 0;
          iVar14 = 1;
          iVar16 = 0;
          do {
            iVar12 = iVar12 + 2;
            iVar15 = iVar14;
            if (((longlong)iVar12 < (longlong)uVar13) &&
               ((longlong)param_1[(longlong)iVar12 * 5 + 2] <=
                (longlong)param_1[(longlong)iVar14 * 5 + 2])) {
              iVar15 = iVar12;
            }
            if ((longlong)param_1[(longlong)iVar16 * 5 + 2] <=
                (longlong)param_1[(longlong)iVar15 * 5 + 2]) break;
            puVar2 = param_1 + (longlong)iVar16 * 5;
            puVar3 = param_1 + (longlong)iVar15 * 5;
            uVar4 = puVar2[4];
            uVar5 = *puVar2;
            uVar6 = puVar2[1];
            uVar7 = puVar2[2];
            uVar8 = puVar2[3];
            puVar2[4] = puVar3[4];
            uVar9 = *puVar3;
            uVar10 = puVar3[1];
            uVar11 = puVar3[3];
            puVar2[2] = puVar3[2];
            puVar2[3] = uVar11;
            *puVar2 = uVar9;
            puVar2[1] = uVar10;
            puVar3[4] = uVar4;
            puVar3[2] = uVar7;
            puVar3[3] = uVar8;
            *puVar3 = uVar5;
            puVar3[1] = uVar6;
            iVar12 = iVar15 * 2;
            iVar14 = iVar15 * 2 + 1;
            iVar16 = iVar15;
          } while ((longlong)iVar14 < (longlong)uVar13);
          uVar1 = uVar13 - 1;
          local_18 = param_1[4];
          uVar4 = *param_1;
          uVar5 = param_1[1];
          uVar6 = param_1[2];
          uVar7 = param_1[3];
          param_1[4] = param_1[uVar1 * 5 + 4];
          uVar8 = param_1[uVar1 * 5];
          uVar9 = (param_1 + uVar1 * 5)[1];
          uVar10 = (param_1 + uVar1 * 5 + 2)[1];
          param_1[2] = param_1[uVar1 * 5 + 2];
          param_1[3] = uVar10;
          *param_1 = uVar8;
          param_1[1] = uVar9;
          param_1[uVar1 * 5 + 4] = local_18;
          local_38._0_4_ = (undefined4)uVar4;
          local_38._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
          uStack_30._0_4_ = (undefined4)uVar5;
          uStack_30._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
          local_28._0_4_ = (undefined4)uVar6;
          local_28._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
          uStack_20._0_4_ = (undefined4)uVar7;
          uStack_20._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
          puVar2 = param_1 + uVar1 * 5 + 2;
          *(undefined4 *)puVar2 = (undefined4)local_28;
          *(undefined4 *)((longlong)puVar2 + 4) = local_28._4_4_;
          *(undefined4 *)(puVar2 + 1) = (undefined4)uStack_20;
          *(undefined4 *)((longlong)puVar2 + 0xc) = uStack_20._4_4_;
          puVar2 = param_1 + uVar1 * 5;
          *(undefined4 *)puVar2 = (undefined4)local_38;
          *(undefined4 *)((longlong)puVar2 + 4) = local_38._4_4_;
          *(undefined4 *)(puVar2 + 1) = (undefined4)uStack_30;
          *(undefined4 *)((longlong)puVar2 + 0xc) = uStack_30._4_4_;
          bVar17 = 2 < uVar13;
          uVar13 = uVar1;
          local_38 = uVar4;
          uStack_30 = uVar5;
          local_28 = uVar6;
          uStack_20 = uVar7;
        } while (bVar17);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14740914a FUN_14740914a body=52 status=ok
// SIG undefined FUN_14740914a(void)

void FUN_14740914a(longlong *param_1)

{
  FUN_14740917e();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14740917e FUN_14740917e body=312 status=ok
// SIG undefined FUN_14740917e(void)

void FUN_14740917e(longlong *param_1)

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
      if (*(longlong *)(*local_68 + (longlong)iStack_4c * 0x28) != 0) {
        FUN_1400020a8();
      }
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



// FUNCTION 1474092b8 FUN_1474092b8 body=52 status=ok
// SIG undefined FUN_1474092b8(void)

void FUN_1474092b8(longlong *param_1)

{
  FUN_1474092ec();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1474092ec FUN_1474092ec body=332 status=ok
// SIG undefined FUN_1474092ec(void)

void FUN_1474092ec(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
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
  plVar1 = param_1 + 2;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  local_40 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_48);
  }
  local_68 = local_48;
  local_60 = local_40;
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_50 = local_30;
  local_4c = local_2c;
  local_70 = param_1;
  if (iStack_34 < (int)local_40[3]) {
    do {
      lVar2 = *local_70;
      *(undefined ***)(lVar2 + 0x10 + (longlong)iStack_54 * 0x60) = &PTR_FUN_149e38530;
      if (*(longlong *)(lVar2 + (longlong)iStack_54 * 0x60) != 0) {
        FUN_1400020a8();
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1448fc38a(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14740943a FUN_14740943a body=193 status=ok
// SIG undefined FUN_14740943a(void)

undefined8 FUN_14740943a(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint uVar6;
  longlong *plVar7;
  longlong *plVar8;
  ulonglong uVar9;
  
  uVar1 = *(uint *)(param_1 + 1);
  if (uVar1 == *(uint *)(param_2 + 1)) {
    uVar3 = 1;
    if (0 < (int)uVar1) {
      plVar7 = param_1 + 2;
      if ((longlong *)param_1[4] != (longlong *)0x0) {
        plVar7 = (longlong *)param_1[4];
      }
      plVar8 = param_2 + 2;
      if ((longlong *)param_2[4] != (longlong *)0x0) {
        plVar8 = (longlong *)param_2[4];
      }
      lVar5 = 0;
      uVar4 = 0;
      do {
        uVar9 = uVar4 >> 5 & 0x7ffffff;
        uVar2 = *(uint *)((longlong)plVar7 + uVar9 * 4);
        uVar6 = (uint)uVar4 & 0x1f;
        if ((((*(uint *)((longlong)plVar8 + uVar9 * 4) >> uVar6 & 1) != 0) !=
             ((uVar2 >> uVar6 & 1) != 0)) ||
           (((1 << ((byte)uVar4 & 0x1f) & uVar2) != 0 &&
            (*(int *)(*param_2 + 0x10 + lVar5) != *(int *)(*param_1 + 0x10 + lVar5) ||
             *(undefined1 (*) [16])(*param_2 + lVar5) != *(undefined1 (*) [16])(*param_1 + lVar5))))
           ) goto LAB_1474094f0;
        uVar4 = uVar4 + 1;
        lVar5 = lVar5 + 0x1c;
      } while (uVar1 != uVar4);
    }
  }
  else {
LAB_1474094f0:
    uVar3 = 0;
  }
  return uVar3;
}



// FUNCTION 1474094fc FUN_1474094fc body=24 status=ok
// SIG undefined FUN_1474094fc(void)

void FUN_1474094fc(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147409510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 147409514 FUN_147409514 body=494 status=ok
// SIG undefined FUN_147409514(void)

void FUN_147409514(longlong *param_1,longlong *param_2,undefined8 param_3,char param_4)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined8 local_88;
  longlong *local_80;
  uint local_78;
  int iStack_74;
  undefined4 local_70;
  undefined4 local_6c;
  longlong *local_68;
  longlong *local_60;
  undefined2 local_58;
  undefined8 local_50;
  longlong *local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_48 = param_1 + 2;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  local_38 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_50);
  }
  local_78 = local_40;
  iStack_74 = iStack_3c;
  local_70 = local_38;
  local_6c = local_34;
  local_88 = local_50;
  local_80 = local_48;
  local_58 = 0;
  local_90 = param_1;
  local_68 = param_1;
  local_60 = param_1;
  if (iStack_3c < (int)local_48[3]) {
    do {
      if ((int)param_2[1] != *(int *)((longlong)param_2 + 0x34)) {
        uVar2 = *(uint *)(*local_90 + (longlong)iStack_74 * 0x20);
        plVar5 = (longlong *)param_2[8];
        if ((longlong *)param_2[8] == (longlong *)0x0) {
          plVar5 = param_2 + 7;
        }
        iVar4 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_2[9] - 1U & uVar2) * 4);
        if (iVar4 != -1) {
          lVar3 = *local_90 + (longlong)iStack_74 * 0x20;
          do {
            lVar1 = *param_2 + (longlong)iVar4 * 0xc0;
            if (*(uint *)(*param_2 + (longlong)iVar4 * 0xc0) == uVar2) {
              if ((lVar1 + 8U & 0xfffffffffffffff7) != 0) {
                *(ulonglong *)(lVar1 + 0xa0) =
                     *(ulonglong *)(lVar1 + 0xa0) | *(ulonglong *)(lVar3 + 8);
                *(ushort *)(lVar1 + 0xb0) = *(ushort *)(lVar1 + 0xb0) | *(ushort *)(lVar3 + 0x14);
                *(undefined8 *)(lVar1 + 0xa8) = param_3;
                if (param_4 != '\0') {
                  FUN_147409afc(local_68);
                  local_58 = CONCAT11(local_58._1_1_,1);
                }
              }
              break;
            }
            iVar4 = *(int *)(lVar1 + 0xb8);
          } while (iVar4 != -1);
        }
      }
      local_78 = local_78 & ~local_88._4_4_;
      FUN_1449c0562(&local_88);
    } while (iStack_74 < (int)local_80[3]);
    if (((local_58 & 1) != 0) && (local_58._1_1_ == '\x01')) {
      FUN_147409bc8(local_60,(int)local_60[1] - *(int *)((longlong)local_60 + 0x34));
    }
  }
  if ((local_30 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147409704 FUN_147409704 body=385 status=ok
// SIG undefined FUN_147409704(void)

void FUN_147409704(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
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
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
  uVar4 = ((int)param_2[1] - *(int *)((longlong)param_2 + 0x34)) + uVar2;
  if (uVar2 < uVar4) {
    if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar4);
    }
    FUN_14740ea06(param_1,uVar4);
    iVar3 = 1;
    if (3 < uVar4) {
      uVar2 = (uVar4 | 1) + 0xe;
      iVar3 = 0x1f;
      if (uVar2 != 0) {
        for (; uVar2 >> iVar3 == 0; iVar3 = iVar3 + -1) {
        }
      }
      iVar3 = 1 << ((byte)iVar3 & 0x1f);
    }
    if ((*(int *)(param_1 + 0x48) == 0) || (*(int *)(param_1 + 0x48) < iVar3)) {
      *(int *)(param_1 + 0x48) = iVar3;
      FUN_1408374a4(param_1);
    }
  }
  plVar1 = param_2 + 2;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  uStack_40 = 0;
  uStack_50 = plVar1;
  if ((int)param_2[5] == 0) {
    iVar3 = 0;
  }
  else {
    FUN_1449c0562(&local_58);
    iVar3 = (int)param_2[5];
  }
  uStack_60 = CONCAT44(uStack_3c,uStack_40);
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_78 = (undefined4)local_58;
  uStack_74 = local_58._4_4_;
  uStack_70 = (undefined4)uStack_50;
  uStack_6c = uStack_50._4_4_;
  local_80 = param_2;
  if ((iStack_44 != iVar3) || (uStack_50 != plVar1)) {
    do {
      local_58 = *local_80 + (longlong)iStack_64 * 0xc0;
      uStack_50 = (longlong *)((longlong)iStack_64 * 0xc0 + *local_80 + 8);
      FUN_14740dffc(param_1,local_34);
      local_68 = local_68 & ~uStack_74;
      FUN_1449c0562(&local_78);
    } while (local_80 != param_2 ||
             ((longlong *)CONCAT44(uStack_6c,uStack_70) != plVar1 || iStack_64 != iVar3));
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147409888 FUN_147409888 body=411 status=ok
// SIG undefined FUN_147409888(void)

undefined8 FUN_147409888(undefined8 *param_1,undefined8 param_2)

{
  uint uVar1;
  void *_Src;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  void *local_68;
  ulonglong uStack_60;
  undefined8 local_50;
  undefined8 *local_48;
  undefined1 local_3c [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar5 = (longlong *)*param_1;
  uVar2 = FUN_1447addd0(param_2,0x10);
  iVar3 = FUN_1431e63cc(plVar5,uVar2,param_2);
  if (iVar3 == -1) {
    iVar3 = FUN_147409e46(uVar2,param_2);
    lVar4 = (longlong)iVar3 * 0x28 + DAT_14ca80468;
    if (lVar4 == 0 || iVar3 == -1) {
      local_68 = (void *)0x0;
      uStack_60 = 0;
    }
    else {
      local_68 = (void *)0x0;
      uVar1 = *(uint *)(lVar4 + 0x18);
      _Src = *(void **)(lVar4 + 0x10);
      uStack_60 = CONCAT44(uStack_60._4_4_,uVar1);
      if ((longlong)(int)uVar1 == 0) {
        uStack_60 = (ulonglong)uVar1;
      }
      else {
        FUN_1446dd670(&local_68,uVar1,0);
        memcpy(local_68,_Src,(longlong)(int)uVar1 * 2);
      }
    }
    uVar7 = FUN_140f058b4(&local_68);
    uVar6 = *param_1;
    uVar8 = FUN_14001cc68(0x18,0x10);
    FUN_1431e6bc4(uVar8,uVar7);
    local_48 = &local_70;
    local_70 = uVar8;
    local_50 = param_2;
    FUN_1431e643c(uVar6,local_3c);
    FUN_1431e6d44(local_70);
    if (local_68 != (void *)0x0) {
      FUN_1400020a8();
    }
    plVar5 = (longlong *)*param_1;
  }
  uVar2 = FUN_1447addd0(param_2,0x10);
  iVar3 = FUN_1431e63cc(plVar5,uVar2,param_2);
  if ((iVar3 == -1) ||
     (lVar4 = (longlong)iVar3 * 0x20 + *plVar5, plVar5 = (longlong *)(lVar4 + 0x10),
     plVar5 == (longlong *)0x0 || lVar4 == 0)) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined8 *)(*plVar5 + 0x10);
  }
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147409a24 FUN_147409a24 body=101 status=ok
// SIG undefined FUN_147409a24(void)

void FUN_147409a24(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  plVar4 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[8];
  }
  lVar5 = (longlong)*(int *)(lVar1 + 0x1fc + (longlong)param_2 * 0x200);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0x1f8 + lVar5 * 0x200);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x200 + 0x1f8);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x200 + 0x1f8);
  FUN_147409a8a();
  return;
}



// FUNCTION 147409a8a FUN_147409a8a body=114 status=ok
// SIG undefined FUN_147409a8a(void)

void FUN_147409a8a(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x200) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x200) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x200 + 4) = uVar4;
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



// FUNCTION 147409afc FUN_147409afc body=90 status=ok
// SIG undefined FUN_147409afc(void)

void FUN_147409afc(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  plVar4 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[8];
  }
  lVar5 = (longlong)*(int *)(lVar1 + 0x1c + (longlong)param_2 * 0x20);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0x18 + lVar5 * 0x20);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x20 + 0x18);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x20 + 0x18);
  FUN_147409b56();
  return;
}



// FUNCTION 147409b56 FUN_147409b56 body=114 status=ok
// SIG undefined FUN_147409b56(void)

void FUN_147409b56(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x20) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x20) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x20 + 4) = uVar4;
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



// FUNCTION 147409bc8 FUN_147409bc8 body=69 status=ok
// SIG undefined FUN_147409bc8(void)

void FUN_147409bc8(longlong param_1,uint param_2)

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
  if (*(int *)(param_1 + 0x48) < iVar3 && 0 < (int)param_2 || iVar3 < *(int *)(param_1 + 0x48)) {
    *(int *)(param_1 + 0x48) = iVar3;
    FUN_14070ee74(param_1);
    return;
  }
  return;
}


