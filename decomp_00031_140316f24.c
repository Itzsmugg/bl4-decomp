// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 140316f24 FUN_140316f24 body=212 status=ok
// SIG undefined FUN_140316f24(void)

void FUN_140316f24(longlong param_1,float param_2)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  if ((*(longlong *)(param_1 + 0x10) != 0) &&
     (uVar4 = (ulonglong)*(int *)(param_1 + 0x20), 0 < (longlong)uVar4)) {
    plVar1 = (longlong *)(param_1 + 0x18);
    lVar5 = uVar4 * 0x390 + -0x88;
    do {
      *(double *)(*plVar1 + -0x308 + lVar5) =
           *(double *)(*plVar1 + -0x308 + lVar5) - (double)param_2;
      lVar2 = *plVar1;
      if (*(double *)(lVar2 + -0x308 + lVar5) <= 0.0) {
        FUN_1407af00a(*(undefined8 *)(param_1 + 0x10),lVar2 + lVar5 + -0x300,lVar2 + lVar5 + -0x2e8,
                      lVar2 + lVar5,0);
        FUN_14031a472(plVar1,(int)uVar4 + -1,1);
      }
      lVar5 = lVar5 + -0x390;
      bVar3 = 1 < uVar4;
      uVar4 = uVar4 - 1;
    } while (bVar3);
  }
  return;
}



// FUNCTION 140316ff8 FUN_140316ff8 body=471 status=ok
// SIG undefined FUN_140316ff8(void)

longlong * FUN_140316ff8(void)

{
  ushort uVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  longlong local_30;
  undefined8 uStack_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14cb7efb0 == (longlong *)0x0) {
    memset(&DAT_14cb7efb8,0,0x718);
    FUN_1461671ec(&DAT_14cb7efb8);
    DAT_14cb7efb0 = (longlong *)&DAT_14cb7efb8;
  }
  plVar3 = DAT_14cb7efb0;
  plVar2 = DAT_14cb7efb0 + 1;
  cVar4 = (char)DAT_14cb7efb0[2];
  plVar6 = plVar2;
  if (cVar4 == '\0') {
LAB_14031702c:
    if (*plVar6 == 0) goto LAB_140317109;
    plVar6 = plVar2;
    if (cVar4 == '\0') {
LAB_14031703d:
      if (*plVar6 == 0) goto LAB_1403170a6;
      if ((((int)DAT_14cb7efb0[3] == *(int *)(*plVar6 + 0x44)) || (DAT_14c9a1ab0 == 0)) ||
         (*plVar2 == 0)) goto LAB_140317051;
      uVar1 = *(ushort *)(*plVar2 + 0x28);
      if ((((short)uVar1 < 0) || (*(int *)(DAT_14c9a1ab0 + 0xd0) <= (int)(short)uVar1)) ||
         (plVar2 = *(longlong **)(*(longlong *)(DAT_14c9a1ab0 + 200) + (ulonglong)uVar1 * 8),
         plVar2 == (longlong *)0x0)) goto LAB_140317051;
      cVar4 = (**(code **)(*plVar2 + 0x2a8))(plVar2,DAT_14cb7efb0);
    }
    else {
      if (cVar4 == '\x02') {
        plVar6 = (longlong *)(*plVar2 + 0x30);
        goto LAB_14031703d;
      }
LAB_1403170a6:
      if ((DAT_14c9a1ab0 == 0) || (*plVar2 == 0)) goto LAB_140317051;
      uVar1 = *(ushort *)(*plVar2 + 0x28);
      if (((short)uVar1 < 0) ||
         ((*(int *)(DAT_14c9a1ab0 + 0xd0) <= (int)(short)uVar1 ||
          (plVar2 = *(longlong **)(*(longlong *)(DAT_14c9a1ab0 + 200) + (ulonglong)uVar1 * 8),
          plVar2 == (longlong *)0x0)))) goto LAB_140317051;
      cVar4 = (**(code **)(*plVar2 + 0x2a0))(plVar2,DAT_14cb7efb0);
    }
    if (cVar4 == '\0') goto LAB_140317051;
  }
  else {
    if (cVar4 == '\x02') {
      plVar6 = (longlong *)(*plVar2 + 0x30);
      goto LAB_14031702c;
    }
LAB_140317109:
    lVar5 = FUN_140162146();
    if (lVar5 == 0) goto LAB_140317051;
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    local_30 = 0;
    uStack_28 = 0;
    FUN_1446ddda2(&local_48,"def_globals_dialog",0);
    FUN_140024ada(&local_48,plVar3);
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  (**(code **)(*plVar3 + 0x20))(plVar3);
LAB_140317051:
  if ((local_18 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar3;
}



// FUNCTION 1403171d0 FUN_1403171d0 body=1092 status=ok
// SIG undefined FUN_1403171d0(void)

void FUN_1403171d0(longlong *param_1,uint param_2,undefined8 param_3,float param_4)

{
  longlong *plVar1;
  uint *puVar2;
  uint uVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  lVar5 = FUN_14494f566(param_1 + 0x13);
  if (lVar5 == 0) {
    return;
  }
  if ((int)param_1[0xd] == 0) {
    return;
  }
  puVar2 = (uint *)(param_1 + 0x2f);
  if ((param_1[0x30] != 0) && (*(int *)((longlong)param_1 + 0x17c) != 0)) {
    uVar3 = *puVar2;
    lVar5 = 0;
    if (((int)uVar3 < 0) || (DAT_14c9647dc <= (int)uVar3)) goto LAB_140317275;
    lVar9 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    if ((lVar9 != 0) && (*(int *)(lVar9 + 0x10) == *(int *)((longlong)param_1 + 0x17c))) {
      lVar5 = 0;
      if ((*(uint *)(lVar9 + 8) & 0x10200000) == 0) {
        lVar5 = param_1[0x30];
      }
      goto LAB_140317275;
    }
  }
  lVar5 = 0;
LAB_140317275:
  plVar1 = param_1 + 0xd;
  lVar5 = FUN_140d53a8c(lVar5);
  if ((lVar5 != 0) && (*(longlong *)(lVar5 + 0x40) != 0)) {
    FUN_143d63f96(*(longlong *)(lVar5 + 0x40),plVar1,puVar2,param_2 ^ 1,param_3);
  }
  lVar5 = FUN_14188dce0(param_1);
  if (lVar5 != 0) {
    lVar9 = FUN_14494f566(param_1 + 0x13);
    if (lVar9 != 0) {
      if (*(char *)((longlong)param_1 + 0x201) == '\x01') {
        if ((char)param_1[0x40] != '\0') {
          (**(code **)(*(longlong *)(lVar5 + 0x10e0) + 0x30))(lVar5 + 0x10e0);
        }
        *(undefined4 *)((longlong)param_1 + 0x20c) = 0x3f800000;
        *(undefined8 *)((longlong)param_1 + 0x204) = 0x3f800000;
      }
      param_1[0x3f] = 0;
      *(undefined2 *)(param_1 + 0x40) = 0;
      if ((char)param_1[0x3e] != '\0') {
        (**(code **)(*(longlong *)(lVar5 + 0x10e0) + 0x30))(lVar5 + 0x10e0);
      }
      *(undefined1 *)(param_1 + 0x3e) = 0;
      param_1[0x3d] = 0;
    }
    if (((((longlong *)param_1[0x30] != (longlong *)0x0) &&
         (*(int *)((longlong)param_1 + 0x17c) != 0)) && (uVar3 = *puVar2, -1 < (int)uVar3)) &&
       ((((int)uVar3 < DAT_14c9647dc &&
         (lVar9 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8), lVar9 != 0)) &&
        ((*(int *)(lVar9 + 0x10) == *(int *)((longlong)param_1 + 0x17c) &&
         (((*(uint *)(lVar9 + 8) & 0x10200000) == 0 &&
          (plVar7 = (longlong *)(**(code **)(*(longlong *)param_1[0x30] + 0x18))(),
          plVar7 != (longlong *)0x0)))))))) {
      uVar6 = FUN_141419aaa();
      lVar9 = (**(code **)(*plVar7 + 0x288))(plVar7,uVar6);
      if (lVar9 != 0) {
        uVar6 = FUN_141419aaa();
        lVar8 = FUN_144718840(lVar9,uVar6);
        if ((lVar8 != 0 && lVar9 != lVar8) &&
           (cVar4 = FUN_143c24758(lVar8), cVar4 == '\x01' && (char)param_2 == '\0')) {
          FUN_145954fe6(lVar8,lVar5);
        }
      }
    }
  }
  uVar6 = (**(code **)(*param_1 + 0x180))(param_1);
  if (*(int *)((longlong)param_1 + 0xcc) != 0) {
    plVar7 = (longlong *)FUN_1400f6f32(uVar6);
    if ((plVar7 != (longlong *)0x0) &&
       (plVar7 = (longlong *)(**(code **)(*plVar7 + 0x2b0))(plVar7), plVar7 != (longlong *)0x0)) {
      (**(code **)(*plVar7 + 0x28))(plVar7,*(undefined4 *)((longlong)param_1 + 0xcc));
    }
    *(undefined4 *)((longlong)param_1 + 0xcc) = 0;
  }
  cVar4 = FUN_140c0309c(plVar1);
  if ((((cVar4 != '\0') || (*(int *)((longlong)param_1 + 0x18c) == 3)) ||
      ((char)param_1[0x32] == '\x01')) &&
     (plVar7 = (longlong *)FUN_146550db2(uVar6), plVar7 != (longlong *)0x0)) {
    (**(code **)(*plVar7 + 0x18))(plVar7,param_2,(int)*plVar1);
  }
  cVar4 = FUN_144904448(param_1 + 0xf);
  if (0.0 <= param_4 && cVar4 == '\x01') {
    FUN_14072d42a(param_1 + 0xf,param_4);
  }
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[0x13] = 0;
  *(undefined1 *)(param_1 + 0x19) = 0;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  lVar5 = (**(code **)(*param_1 + 0x180))(param_1);
  if (lVar5 == 0) {
    uVar10 = 0;
    uVar11 = 0;
  }
  else {
    uVar10 = (undefined4)*(undefined8 *)(lVar5 + 0x6e8);
    uVar11 = (undefined4)((ulonglong)*(undefined8 *)(lVar5 + 0x6e8) >> 0x20);
  }
  param_1[0x2e] = CONCAT44(uVar11,uVar10);
  if (0 < (int)param_1[0xc]) {
    FUN_1447cd2ec(param_1 + 0xb,0);
  }
  if ((((((longlong *)param_1[0x30] != (longlong *)0x0) &&
        (*(int *)((longlong)param_1 + 0x17c) != 0)) &&
       ((uVar3 = *puVar2, -1 < (int)uVar3 &&
        (((int)uVar3 < DAT_14c9647dc &&
         (lVar5 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8), lVar5 != 0)))))) &&
      (*(int *)(lVar5 + 0x10) == *(int *)((longlong)param_1 + 0x17c))) &&
     ((((*(uint *)(lVar5 + 8) & 0x10200000) == 0 &&
       (lVar5 = (**(code **)(*(longlong *)param_1[0x30] + 0x18))(), lVar5 != 0)) &&
      (*(char *)(lVar5 + 0x178) == '\x03')))) {
    *(undefined4 *)(param_1 + 0x34) = 0;
    param_1[0x35] = 0;
    *(undefined4 *)(param_1 + 0x3b) = 0;
    param_1[0x36] = 0;
    param_1[0x37] = 0;
    param_1[0x38] = 0;
    param_1[0x39] = 0;
    *(undefined1 *)(param_1 + 0x3a) = 0;
  }
  return;
}



// FUNCTION 140317614 FUN_140317614 body=467 status=ok
// SIG undefined FUN_140317614(void)

void FUN_140317614(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auStack_e8 [40];
  longlong *local_c0;
  undefined8 local_b8;
  longlong local_b0;
  uint local_a8;
  int iStack_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  longlong local_98;
  undefined8 uStack_90;
  undefined8 local_80;
  longlong local_78;
  uint local_70;
  int iStack_6c;
  undefined4 local_68;
  undefined4 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  plVar1 = (longlong *)(param_1 + 8);
  local_98 = 0;
  uStack_90 = 0;
  lVar7 = param_1 + 0x18;
  local_80 = 0x100000000;
  local_70 = 0xffffffff;
  iStack_6c = 0;
  local_68 = 0;
  iVar8 = 0;
  local_78 = lVar7;
  if (*(int *)(param_1 + 0x30) != 0) {
    FUN_1449c0562(&local_80);
    iVar8 = *(int *)(param_1 + 0x30);
  }
  local_a8 = local_70;
  iStack_a4 = iStack_6c;
  local_a0 = local_68;
  local_9c = local_64;
  local_b8 = local_80;
  local_b0 = local_78;
  local_c0 = plVar1;
  if ((iStack_6c != iVar8) || (local_78 != lVar7)) {
    do {
      lVar2 = *local_c0;
      lVar6 = (longlong)iStack_a4;
      cVar4 = FUN_14887fde2(param_1,param_2,lVar2 + lVar6 * 0x60 + 8);
      uVar3 = uStack_90;
      if (cVar4 == '\0') {
        lVar9 = (longlong)(int)uStack_90;
        uVar5 = (int)uStack_90 + 1;
        uStack_90 = CONCAT44(uStack_90._4_4_,uVar5);
        if (uStack_90._4_4_ < uVar5) {
          FUN_1446f84a2(&local_98,uVar3 & 0xffffffff);
        }
        *(undefined8 *)(local_98 + lVar9 * 8) = *(undefined8 *)(lVar2 + lVar6 * 0x60);
      }
      local_a8 = local_a8 & ~local_b8._4_4_;
      FUN_1449c0562(&local_b8);
      lVar2 = local_98;
    } while (((iStack_a4 != iVar8) || (local_b0 != lVar7)) || (local_c0 != plVar1));
    lVar7 = (longlong)(int)uStack_90;
    if (lVar7 != 0) {
      lVar6 = 0;
      do {
        FUN_14888481c(plVar1,*(undefined8 *)(lVar2 + lVar6));
        lVar6 = lVar6 + 8;
      } while (lVar7 * 8 != lVar6);
    }
    if (local_98 != 0) {
      FUN_1400020a8(local_98);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1403177e8 FUN_1403177e8 body=1090 status=ok
// SIG undefined FUN_1403177e8(void)

void FUN_1403177e8(longlong *param_1,float param_2)

{
  uint uVar1;
  longlong lVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_78 [40];
  longlong local_50 [2];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (((char)param_1[0x19] == '\0') && (cVar3 = FUN_143d69ff6(param_1), cVar3 != '\0')) {
    FUN_140c02ae6(param_1);
  }
  lVar6 = (**(code **)(*param_1 + 0x180))(param_1);
  if (lVar6 == 0) {
LAB_14031790c:
    if ((char)param_1[0x19] != '\0') goto LAB_140317919;
  }
  else {
    if (((((*(longlong *)(lVar6 + 0x30) != 0) &&
          (lVar8 = *(longlong *)(*(longlong *)(lVar6 + 0x30) + 0x2b0), lVar8 != 0)) &&
         (*(longlong *)(lVar8 + 0x588) != 0)) &&
        (*(double *)(lVar6 + 0x708) <= *(double *)(lVar6 + 0x6d0))) ||
       (((*(byte *)(lVar6 + 0x154) & 0x40) != 0 && (iVar5 = FUN_14490d72a(lVar6), iVar5 == 3)))) {
      bVar4 = 1;
    }
    else {
      if ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) != 0) {
        lVar8 = 0;
        do {
          lVar2 = *(longlong *)(*(longlong *)(DAT_14cb0d2b0 + 0x1148) + lVar8);
          if (*(longlong *)(lVar2 + 0x360) == lVar6) {
            if ((lVar2 != 0) && (bVar4 = 1, (*(byte *)(lVar2 + 0x278) & 1) != 0))
            goto LAB_1403178c5;
            break;
          }
          lVar8 = lVar8 + 8;
        } while ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) * 8 != lVar8);
      }
      cVar3 = FUN_144a80e00(lVar6);
      if (cVar3 == '\0') goto LAB_14031790c;
      bVar4 = *(byte *)(lVar6 + 0x155) >> 7;
    }
LAB_1403178c5:
    if (((char)param_1[0x19] != '\0') &&
       ((bVar4 == 0 || (*(char *)((longlong)param_1 + 0xd2) == '\x01')))) {
LAB_140317919:
      *(float *)((longlong)param_1 + 0xc4) = param_2 + *(float *)((longlong)param_1 + 0xc4);
      lVar6 = FUN_14188dce0(param_1);
      fVar9 = 1.0;
      if (((int)param_1[0xd] != 0) &&
         ((lVar8 = FUN_14494f566(param_1 + 0x13), lVar8 != 0 &&
          (fVar10 = (float)FUN_140c03056(param_1), 1e-08 < fVar10)))) {
        fVar9 = *(float *)((longlong)param_1 + 0xc4) / fVar10;
      }
      if (lVar6 != 0) {
        fVar10 = *(float *)((longlong)param_1 + 0xc4);
        if (((*(char *)((longlong)param_1 + 0x201) == '\x01') &&
            (*(float *)((longlong)param_1 + 0x204) < 1.0)) &&
           (*(float *)((longlong)param_1 + 0x204) <= fVar9)) {
          if ((char)param_1[0x40] != '\0') {
            (**(code **)(*(longlong *)(lVar6 + 0x10e0) + 0x30))(lVar6 + 0x10e0);
          }
          *(undefined4 *)((longlong)param_1 + 0x20c) = 0x3f800000;
          *(undefined8 *)((longlong)param_1 + 0x204) = 0x3f800000;
          param_1[0x3f] = 0;
          *(undefined2 *)(param_1 + 0x40) = 0;
        }
        cVar3 = (char)param_1[0x40];
        if ((char)param_1[0x42] == '\0') {
          if (cVar3 == '\0') {
            if ((param_1[0x3f] == 0) || (fVar10 < *(float *)(param_1 + 0x41))) goto LAB_1403179d5;
            cVar3 = (**(code **)(*(longlong *)(lVar6 + 0x10e0) + 0x20))(lVar6 + 0x10e0);
            *(char *)(param_1 + 0x40) = cVar3;
            goto LAB_1403179cd;
          }
        }
        else {
LAB_1403179cd:
          if (cVar3 == '\0') goto LAB_1403179d5;
        }
        cVar3 = FUN_14162e7d6(lVar6);
        if (cVar3 != '\0') {
          if ((char)param_1[0x40] != '\0') {
            (**(code **)(*(longlong *)(lVar6 + 0x10e0) + 0x30))(lVar6 + 0x10e0);
          }
          param_1[0x3f] = 0;
          *(undefined2 *)(param_1 + 0x40) = 0;
          param_1[0x41] = 0x3f80000000000000;
          *(undefined4 *)((longlong)param_1 + 0x204) = 0x3f800000;
        }
      }
    }
  }
LAB_1403179d5:
  uVar7 = FUN_14494f566(param_1 + 0x13);
  cVar3 = FUN_141889bec(uVar7);
  if (cVar3 == '\0') {
    fVar9 = *(float *)((longlong)param_1 + 0xc4);
    fVar10 = (float)FUN_140c03056(param_1);
    if (fVar10 < fVar9) {
      FUN_1403171d0(param_1,1,local_50,0);
    }
  }
  else {
    cVar3 = FUN_144904448(param_1 + 0xf);
    if (cVar3 != '\0') {
      fVar9 = (float)FUN_140c03056(param_1);
      lVar6 = FUN_140316ff8();
      if (*(float *)((longlong)param_1 + 0xc4) <= fVar9 + *(float *)(lVar6 + 0x710)) {
        FUN_14026e2d4(param_1);
        goto LAB_140317ab2;
      }
    }
    FUN_140056680(local_50,L"Playing Sound Ended Early Or Timed Out");
    fVar9 = (float)FUN_140c03056(param_1);
    FUN_1403171d0(param_1,ABS(*(float *)((longlong)param_1 + 0xc4) - fVar9) <= 1.0,local_50,0);
    if (local_50[0] != 0) {
      FUN_1400020a8();
    }
  }
LAB_140317ab2:
  if ((((((longlong *)param_1[0x30] != (longlong *)0x0) &&
        (*(int *)((longlong)param_1 + 0x17c) != 0)) &&
       ((uVar1 = *(uint *)(param_1 + 0x2f), -1 < (int)uVar1 &&
        (((((int)uVar1 < DAT_14c9647dc &&
           (lVar6 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar6 != 0)) &&
          (*(int *)(lVar6 + 0x10) == *(int *)((longlong)param_1 + 0x17c))) &&
         (((*(uint *)(lVar6 + 8) & 0x10200000) == 0 &&
          (lVar6 = (**(code **)(*(longlong *)param_1[0x30] + 0x18))(), lVar6 != 0)))))))) &&
      (*(char *)(lVar6 + 0x178) == '\x03')) && ((int)param_1[0x34] != 0)) {
    *(undefined4 *)(param_1 + 0x3b) = *(undefined4 *)((longlong)param_1 + 0xc4);
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140317c2c FUN_140317c2c body=122 status=ok
// SIG undefined FUN_140317c2c(void)

void FUN_140317c2c(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x50) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x50) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x50 + 4) = uVar4;
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



// FUNCTION 140317ca6 FUN_140317ca6 body=70 status=ok
// SIG undefined FUN_140317ca6(void)

bool FUN_140317ca6(uint *param_1)

{
  uint uVar1;
  longlong lVar2;
  bool bVar3;
  
  bVar3 = true;
  if ((((param_1[1] != 0) && (uVar1 = *param_1, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc))
     && ((lVar2 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar2 != 0 &&
         (*(uint *)(lVar2 + 0x10) == param_1[1])))) {
    bVar3 = (*(uint *)(lVar2 + 8) & 0x10200000) != 0;
  }
  return bVar3;
}



// FUNCTION 140317cec FUN_140317cec body=55 status=ok
// SIG undefined FUN_140317cec(void)

ulonglong FUN_140317cec(int *param_1,int *param_2)

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



// FUNCTION 140317d24 FUN_140317d24 body=228 status=ok
// SIG undefined FUN_140317d24(void)

longlong FUN_140317d24(void)

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
  undefined1 *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb5cbf8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = &LAB_145978cd6;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_14868fde0;
    local_40 = FUN_143c50ac8;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x60;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxDialogLiveSpeaker",&DAT_14cb5cbf8,FUN_1464d8432);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb5cbf8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140317e0a FUN_140317e0a body=118 status=ok
// SIG undefined FUN_140317e0a(void)

void FUN_140317e0a(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  if (*(int *)(param_1 + 0x1ac) != 0) {
    uVar1 = *(uint *)(param_1 + 0x1a8);
    uVar3 = 0;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_140317e5c;
    puVar4 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((puVar4 != (undefined8 *)0x0) &&
       ((*(int *)(puVar4 + 2) == *(int *)(param_1 + 0x1ac) &&
        ((*(uint *)(puVar4 + 1) & 0x10200000) == 0)))) {
      uVar3 = *puVar4;
      goto LAB_140317e5c;
    }
  }
  uVar3 = 0;
LAB_140317e5c:
  lVar2 = FUN_14031964a(uVar3);
  if (lVar2 != 0) {
    FUN_140319c14(lVar2,param_2);
    return;
  }
  return;
}



// FUNCTION 140317e80 FUN_140317e80 body=118 status=ok
// SIG undefined FUN_140317e80(void)

void FUN_140317e80(longlong *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_14474875a(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(param_1 + 2,0);
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140317ef6 FUN_140317ef6 body=42 status=ok
// SIG undefined FUN_140317ef6(void)

void FUN_140317ef6(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14494f566();
  uVar2 = FUN_140899680(param_1);
  FUN_140899702(uVar2,uVar1);
  return;
}



// FUNCTION 140317f20 FUN_140317f20 body=151 status=ok
// SIG undefined FUN_140317f20(void)

void FUN_140317f20(longlong param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar3 = (ulonglong)uVar1;
  iVar2 = *(int *)(param_1 + 0xc);
  if (((0x3fff < (ulonglong)((longlong)(int)(iVar2 - uVar1) * 0x118)) ||
      ((int)(uVar1 * 3) < iVar2 * 2)) && ((uVar1 == 0 || (0x40 < (int)(iVar2 - uVar1))))) {
    if (0 < (int)uVar1) {
      uVar3 = FUN_144a3809e(uVar3 * 0x118,8);
      uVar3 = uVar3 / 0x118;
      iVar2 = *(int *)(param_1 + 0xc);
    }
    if ((int)uVar3 != iVar2) {
      *(int *)(param_1 + 0xc) = (int)uVar3;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,0x118,8);
    }
  }
  return;
}



// FUNCTION 140317fb8 FUN_140317fb8 body=131 status=ok
// SIG undefined FUN_140317fb8(void)

void FUN_140317fb8(longlong param_1,double param_2,double param_3)

{
  double dVar1;
  char *pcVar2;
  longlong lVar3;
  longlong lVar4;
  double dVar5;
  
  lVar3 = *(longlong *)(param_1 + 0x100);
  if (*(longlong *)(param_1 + 0x100) == 0) {
    lVar3 = param_1;
  }
  if ((longlong)*(int *)(param_1 + 0x108) != 0) {
    dVar5 = param_2 + param_3;
    lVar4 = 0;
    do {
      pcVar2 = *(char **)(lVar3 + lVar4);
      dVar1 = *(double *)(pcVar2 + 0xd8);
      if (param_3 <= dVar1 && *(double *)(pcVar2 + (ulonglong)(*pcVar2 == '\x03') * 8 + 200) < dVar5
         ) {
        dVar5 = dVar1 + param_2;
        param_3 = dVar1;
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)*(int *)(param_1 + 0x108) * 8 != lVar4);
  }
  return;
}



// FUNCTION 14031803c FUN_14031803c body=165 status=ok
// SIG undefined FUN_14031803c(void)

undefined8 FUN_14031803c(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_14494f566(param_1 + 0x20);
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_14494f566(param_1 + 0x20);
    uVar3 = FUN_140206e00(uVar3);
    if ((((*(longlong **)(param_1 + 0x18) != (longlong *)0x0) && (*(int *)(param_1 + 0x14) != 0)) &&
        (uVar1 = *(uint *)(param_1 + 0x10), -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
      lVar2 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      if (((lVar2 != 0) && (*(int *)(lVar2 + 0x10) == *(int *)(param_1 + 0x14))) &&
         ((*(uint *)(lVar2 + 8) & 0x10200000) == 0)) {
        lVar2 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x10))();
        if (lVar2 != 0) {
          FUN_143d65c14(lVar2);
        }
      }
    }
  }
  return uVar3;
}



// FUNCTION 1403180e2 FUN_1403180e2 body=323 status=ok
// SIG undefined FUN_1403180e2(void)

ulonglong FUN_1403180e2(longlong param_1)

{
  longlong *plVar1;
  byte bVar2;
  ulonglong uVar3;
  byte bVar4;
  undefined8 unaff_RSI;
  undefined7 uVar5;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined2 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  undefined1 **local_40;
  undefined1 *local_38;
  code *local_30;
  undefined1 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar5 = (undefined7)((ulonglong)unaff_RSI >> 8);
  bVar4 = 1;
  uVar3 = local_18;
  if ((param_1 != 0) && (plVar1 = *(longlong **)(param_1 + 0x1f0), plVar1 != (longlong *)0x0)) {
    if (DAT_14cb5e538 == 0) {
      local_40 = &local_20;
      local_20 = &LAB_1417c5d06;
      local_30 = FUN_14081d0ea;
      local_38 = &LAB_1417ad04a;
      local_48 = &LAB_1486a7af7;
      local_50 = &LAB_1464e1631;
      local_58 = &DAT_149e063b2;
      local_60 = 0;
      local_68 = 0x1000000c;
      local_70 = 8;
      local_78 = 0x420;
      FUN_14081cfa3(L"/Script/GbxGame",L"GbxGameInstance",&DAT_14cb5e538,&DAT_1486a7af6);
    }
    uVar3 = DAT_14cb5e538;
    if ((*(int *)(DAT_14cb5e538 + 0x38) <= *(int *)(plVar1[2] + 0x38)) &&
       (uVar3 = DAT_14cb5e538 + 0x30,
       *(ulonglong *)
        (*(longlong *)(plVar1[2] + 0x30) + (longlong)*(int *)(DAT_14cb5e538 + 0x38) * 8) == uVar3))
    {
      bVar2 = (**(code **)(*plVar1 + 0x488))(plVar1);
      bVar4 = 0;
      uVar5 = 0;
      goto LAB_140318156;
    }
  }
  bVar2 = (byte)uVar3;
LAB_140318156:
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return CONCAT71(uVar5,bVar4 | bVar2) & 0xffffff01;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140318226 FUN_140318226 body=1781 status=ok
// SIG undefined FUN_140318226(void)

void FUN_140318226(longlong *param_1,int *param_2,ulonglong *param_3)

{
  ulonglong *puVar1;
  longlong lVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  byte bVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  longlong *plVar13;
  uint *puVar14;
  longlong *plVar15;
  ulonglong uVar16;
  int iVar17;
  ulonglong uVar18;
  uint uVar19;
  longlong lVar20;
  uint uVar21;
  int iVar22;
  ulonglong uVar23;
  uint *puVar24;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar17 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar17 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar17) {
      FUN_1446efaca(param_1,iVar17);
    }
    iVar22 = (int)param_1[5];
    if (iVar22 == 0) {
      iVar3 = -1;
    }
    else {
      iVar3 = iVar22 + 0x1e;
      if (-1 < iVar22 + -1) {
        iVar3 = iVar22 + -1;
      }
      iVar3 = iVar3 >> 5;
    }
    plVar13 = param_1 + 2;
    iVar9 = iVar22 + 1;
    iVar12 = iVar22 + 0x1f;
    if (-1 < iVar22) {
      iVar12 = iVar22;
    }
    if (iVar12 >> 5 == iVar3) {
      *(int *)(param_1 + 5) = iVar9;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar22) {
        iVar3 = iVar22;
        if (iVar22 + 0x20U < 0xa0) {
          iVar9 = 0x80;
        }
        else {
          uVar11 = iVar22 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar10 = 4;
            if (4 < uVar11) {
              uVar10 = uVar11;
            }
          }
          else {
            uVar10 = uVar11 + (uVar11 * 3 >> 3) + 0x10;
          }
          uVar7 = (ulonglong)(uVar10 * 4);
          if (DAT_14c872d28 != (longlong *)0x0) {
            if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
              uVar19 = (uint)(uVar7 + 0xf);
              if (uVar10 < 0x1ffd) {
                uVar7 = (ulonglong)
                        (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 + 0xf >> 4]];
              }
              else {
                uVar16 = (ulonglong)(uVar19 & 0xfffffff0);
                if (uVar16 < 0x7ff1) {
                  bVar8 = (&DAT_14c841e00)[uVar19 >> 4];
                  uVar23 = 0x32;
                  if (0x32 < bVar8) {
                    uVar23 = (ulonglong)bVar8;
                  }
                  uVar18 = 0x32 - (ulonglong)bVar8;
                  do {
                    uVar7 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar18 & 0xffffffff];
                    if (((&DAT_14c841d90)[uVar18 & 0xffffffff] & 0xf) == 0) goto LAB_140318799;
                    lVar6 = uVar23 + 1 + uVar18;
                    uVar18 = uVar18 - 1;
                  } while (lVar6 != 0x33);
                }
                uVar7 = 0x10;
                if (0x10 < DAT_14c841df8) {
                  uVar7 = (ulonglong)DAT_14c841df8;
                }
                uVar7 = -uVar7 & (uVar16 + uVar7) - 1;
              }
            }
            else {
              uVar7 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar7,0);
              iVar3 = (int)param_1[5];
            }
          }
LAB_140318799:
          iVar5 = (int)(uVar7 >> 2);
          iVar9 = -0x20;
          if ((int)uVar11 <= iVar5) {
            iVar9 = iVar5 << 5;
          }
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar9;
        FUN_1446efbd8(plVar13,iVar3);
        iVar9 = (int)param_1[5] + 1;
      }
      iVar3 = iVar9 + 0x1f;
      if (-1 < iVar9) {
        iVar3 = iVar9;
      }
      *(int *)(param_1 + 5) = iVar9;
      if (iVar9 % 0x20 != 0) {
        plVar15 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar15 = plVar13;
        }
        bVar8 = -(char)(iVar9 % 0x20);
        *(uint *)((longlong)plVar15 + (longlong)(iVar3 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar15 + (longlong)(iVar3 >> 5) * 4) << (bVar8 & 0x1f)) >>
             (bVar8 & 0x1f);
      }
    }
    lVar6 = (longlong)iVar17;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar13 = (longlong *)param_1[4];
    }
    bVar8 = (byte)iVar22 & 0x1f;
    puVar24 = (uint *)((longlong)plVar13 + (longlong)(iVar12 >> 5) * 4);
    *puVar24 = *puVar24 & (-2 << bVar8 | 0xfffffffeU >> 0x20 - bVar8);
  }
  else {
    iVar17 = (int)param_1[6];
    lVar6 = (longlong)iVar17;
    iVar22 = *(int *)(*param_1 + 4 + lVar6 * 0x10);
    *(int *)(param_1 + 6) = iVar22;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar22 * 0x10) = 0xffffffff;
    }
  }
  uVar10 = 1 << ((byte)iVar17 & 0x1f);
  puVar24 = (uint *)(param_1 + 2);
  uVar11 = 1;
  puVar14 = (uint *)param_1[4];
  if ((uint *)param_1[4] == (uint *)0x0) {
    puVar14 = puVar24;
  }
  iVar22 = iVar17 + 0x1f;
  if (-1 < iVar17) {
    iVar22 = iVar17;
  }
  puVar14[iVar22 >> 5] = puVar14[iVar22 >> 5] | uVar10;
  lVar20 = *param_1;
  lVar6 = lVar6 * 0x10;
  uVar7 = *param_3;
  *(ulonglong *)(lVar20 + lVar6) = uVar7;
  *(undefined4 *)(lVar20 + 8 + lVar6) = 0xffffffff;
  uVar19 = ((uint)(uVar7 >> 0x14) & 0xffff ^ (uint)(uVar7 >> 4)) * -0x7a143595;
  uVar19 = (uVar19 >> 0xd ^ uVar19) * -0x3d4d51cb;
  uVar19 = uVar19 >> 0x10 ^ uVar19;
  uVar21 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (1 < uVar21) {
    plVar13 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar13 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar13 + (ulonglong)((int)param_1[9] - 1U & uVar19) * 4);
    if (iVar3 != -1) {
      do {
        puVar1 = (ulonglong *)(*param_1 + (longlong)iVar3 * 0x10);
        if (*(ulonglong *)(*param_1 + (longlong)iVar3 * 0x10) == uVar7) {
          *puVar1 = uVar7;
          lVar6 = *param_1;
          if (*(int *)((longlong)param_1 + 0x34) != 0) {
            *(int *)(lVar6 + (longlong)(int)param_1[6] * 0x10) = iVar17;
          }
          *(undefined4 *)(lVar6 + (longlong)iVar17 * 0x10) = 0xffffffff;
          uVar4 = 0xffffffff;
          if (0 < *(int *)((longlong)param_1 + 0x34)) {
            uVar4 = (undefined4)param_1[6];
          }
          *(undefined4 *)(lVar6 + (longlong)iVar17 * 0x10 + 4) = uVar4;
          *(int *)(param_1 + 6) = iVar17;
          *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
          if ((uint *)param_1[4] != (uint *)0x0) {
            puVar24 = (uint *)param_1[4];
          }
          puVar24[iVar22 >> 5] = puVar24[iVar22 >> 5] & ~uVar10;
          iVar17 = iVar3;
          goto LAB_1403185b8;
        }
        iVar3 = (int)puVar1[1];
      } while (iVar3 != -1);
    }
  }
  if (3 < uVar21) {
    uVar7 = (ulonglong)(uVar21 & 0xfffffffe) + 0xf;
    lVar2 = 0x3f;
    if (uVar7 != 0) {
      for (; uVar7 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    uVar11 = 1 << ((byte)lVar2 & 0x1f);
  }
  if (((int)uVar21 < 1) || ((int)uVar11 <= (int)param_1[9])) {
    uVar19 = (int)param_1[9] - 1U & uVar19;
    *(uint *)(lVar20 + lVar6 + 0xc) = uVar19;
    plVar13 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar13 = param_1 + 7;
    }
    *(undefined4 *)(lVar20 + lVar6 + 8) =
         *(undefined4 *)
          ((longlong)plVar13 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar19) * 4);
    plVar13 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar13 = param_1 + 7;
    }
    *(int *)((longlong)plVar13 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar19) * 4) =
         iVar17;
    goto LAB_1403185b8;
  }
  *(uint *)(param_1 + 9) = uVar11;
  plVar13 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar13,0,0,4);
    uVar11 = *(uint *)(param_1 + 9);
  }
  plVar15 = param_1 + 7;
  if (uVar11 == 1) {
    if (*plVar13 != 0) {
      FUN_1446efa72(plVar13,0,0,4);
    }
LAB_1403183e1:
    uVar10 = 0;
    do {
      plVar13 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar13 = plVar15;
      }
      *(undefined4 *)((longlong)plVar13 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar10) * 4) =
           0xffffffff;
      uVar10 = uVar10 + 1;
    } while (uVar11 != uVar10);
  }
  else {
    if (uVar11 == 0) goto LAB_1403185b8;
    FUN_1446efa72(plVar13,0,uVar11,4);
    if (0 < (int)uVar11) goto LAB_1403183e1;
  }
  iVar22 = (int)param_1[5];
  if (iVar22 == 0) {
    uVar7 = 0;
    uVar16 = 1;
    iVar3 = 0;
    iVar9 = 0;
  }
  else {
    puVar14 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar14 = puVar24;
    }
    uVar11 = *puVar14;
    if (uVar11 == 0) {
      iVar3 = iVar22 + 0x1e;
      if (-1 < iVar22 + -1) {
        iVar3 = iVar22 + -1;
      }
      uVar7 = 0;
      uVar16 = (ulonglong)(uint)(iVar3 >> 5);
      if (iVar3 >> 5 < 1) {
        uVar16 = uVar7;
      }
      iVar9 = 0;
      do {
        if (uVar16 == uVar7) goto LAB_1403185b8;
        iVar9 = iVar9 + 0x20;
        uVar11 = puVar14[uVar7 + 1];
        uVar7 = uVar7 + 1;
      } while (uVar11 == 0);
    }
    else {
      uVar7 = 0;
      iVar9 = 0;
    }
    uVar16 = (ulonglong)(-uVar11 & uVar11);
    uVar23 = uVar16 * 2 + 1;
    lVar6 = 0x3f;
    if (uVar23 != 0) {
      for (; uVar23 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    iVar3 = (iVar9 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    if (iVar22 <= iVar3) {
      iVar3 = iVar22;
    }
  }
  if (iVar3 < iVar22) {
    uVar11 = 0xffffffff;
    do {
      lVar6 = *param_1;
      lVar20 = (longlong)iVar3 * 0x10;
      uVar10 = ((uint)(*(ulonglong *)(lVar6 + lVar20) >> 0x14) & 0xffff ^
               (uint)(*(ulonglong *)(lVar6 + lVar20) >> 4)) * -0x7a143595;
      uVar10 = (uVar10 >> 0xd ^ uVar10) * -0x3d4d51cb;
      uVar23 = (longlong)(int)(uVar10 >> 0x10 ^ uVar10) & (longlong)(int)param_1[9] - 1U;
      iVar22 = (int)uVar23;
      *(int *)(lVar6 + 0xc + lVar20) = iVar22;
      plVar13 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar13 = plVar15;
      }
      *(undefined4 *)(lVar6 + 8 + lVar20) =
           *(undefined4 *)((longlong)plVar13 + ((longlong)(int)param_1[9] - 1U & uVar23) * 4);
      plVar13 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar13 = plVar15;
      }
      *(int *)((longlong)plVar13 + ((longlong)iVar22 & (longlong)(int)param_1[9] - 1U) * 4) = iVar3;
      uVar11 = ~(uint)uVar16 & uVar11;
      puVar14 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar14 = puVar24;
      }
      iVar22 = (int)param_1[5];
      iVar3 = (int)uVar7;
      lVar6 = (longlong)iVar3;
      uVar10 = puVar14[lVar6] & uVar11;
      if (uVar10 == 0) {
        iVar12 = iVar22 + 0x1e;
        if (-1 < iVar22 + -1) {
          iVar12 = iVar22 + -1;
        }
        iVar12 = iVar12 >> 5;
        iVar5 = iVar12;
        if (iVar12 < iVar3) {
          iVar5 = iVar3;
        }
        if (iVar12 <= iVar3) break;
        lVar20 = 0;
        while( true ) {
          iVar9 = iVar9 + 0x20;
          uVar10 = puVar14[lVar6 + lVar20 + 1];
          if (uVar10 != 0) break;
          lVar20 = lVar20 + 1;
          if (iVar5 - lVar6 == lVar20) goto LAB_1403185b8;
        }
        uVar7 = (ulonglong)(iVar3 + (int)lVar20 + 1);
        uVar11 = 0xffffffff;
      }
      uVar16 = (ulonglong)(-uVar10 & uVar10);
      uVar23 = uVar16 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar23 != 0) {
        for (; uVar23 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar3 = (iVar9 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    } while (iVar3 < iVar22);
  }
LAB_1403185b8:
  *param_2 = iVar17;
  return;
}



// FUNCTION 14031891b FUN_14031891b body=3374 status=ok
// SIG undefined FUN_14031891b(void)

ulonglong FUN_14031891b(longlong param_1,char *param_2)

{
  uint *puVar1;
  uint *puVar2;
  longlong *plVar3;
  uint uVar4;
  double dVar5;
  double dVar6;
  byte bVar7;
  char cVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  double *pdVar13;
  longlong *plVar14;
  byte bVar15;
  longlong lVar16;
  longlong lVar17;
  longlong *plVar18;
  longlong *plVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  double dVar22;
  undefined1 auStack_188 [47];
  byte local_159;
  longlong local_158;
  longlong local_150;
  longlong lStack_148;
  undefined8 local_140;
  undefined4 local_138;
  longlong local_130;
  longlong local_128;
  longlong lStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  double local_108;
  undefined8 local_f8;
  undefined8 uStack_f0;
  double local_e8;
  undefined8 uStack_e0;
  longlong *local_d8;
  int local_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  double local_b8;
  undefined8 uStack_b0;
  longlong *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  double local_88;
  undefined8 uStack_80;
  longlong *local_78;
  undefined8 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_140 = *(undefined8 *)(param_1 + 0x94);
  local_138 = *(undefined4 *)(param_1 + 0x9c);
  bVar7 = FUN_14065b53c();
  lVar16 = *(longlong *)(param_1 + 0x108);
  if (lVar16 == 0) {
    uVar9 = FUN_14065b502();
    lVar16 = FUN_14477b664(uVar9);
    *(longlong *)(param_1 + 0x108) = lVar16;
  }
  lVar17 = *(longlong *)(param_1 + 0x110);
  if (lVar17 == 0) {
    if ((*(longlong *)(param_1 + 0x100) != 0) && (lVar16 != 0)) {
      plVar19 = *(longlong **)(lVar16 + 0xb8);
      if ((plVar19 == (longlong *)0x0) ||
         (cVar8 = (**(code **)(*plVar19 + 0x108))(plVar19), cVar8 == '\0')) {
        *(undefined8 *)(param_1 + 0x110) = 0;
      }
      else {
        uVar9 = (**(code **)(*plVar19 + 0x110))(plVar19);
        lVar17 = FUN_144aff482(uVar9,(longlong *)(param_1 + 0x100));
        *(longlong *)(param_1 + 0x110) = lVar17;
        if (lVar17 != 0) goto LAB_14031898c;
      }
    }
    lVar17 = FUN_140317ef6(param_1 + 0x20);
    if (lVar17 == 0) {
      lVar17 = FUN_14575395a();
    }
  }
LAB_14031898c:
  local_150 = 0;
  lStack_148 = 0;
  uVar9 = FUN_14065b502();
  lVar10 = FUN_14477b664(uVar9);
  lVar11 = FUN_14065b502();
  uVar9 = FUN_14065b502();
  FUN_1402d1bfa(&local_98,uVar9,lVar17);
  lVar16 = CONCAT44(local_98._4_4_,(undefined4)local_98);
  if (lVar16 != 0) {
    lStack_148 = 0;
  }
  local_158 = lVar16;
  lVar12 = FUN_14065b502();
  if (lVar11 == 0) {
LAB_140318a0e:
    lVar12 = lVar11;
  }
  else if (lVar12 == 0) {
    lVar12 = 0;
  }
  else if ((*(int *)(lVar12 + 0x38) <= *(int *)(lVar11 + 0x38)) &&
          (*(longlong *)(*(longlong *)(lVar11 + 0x30) + (longlong)*(int *)(lVar12 + 0x38) * 8) ==
           lVar12 + 0x30)) goto LAB_140318a0e;
  if (lVar10 != lVar12) {
    lStack_148 = 0;
  }
  uVar9 = FUN_14477b664(lVar12);
  local_150 = FUN_14477b664(uVar9);
  if ((lVar16 != 0) && (local_150 != 0)) {
    lStack_148 = lVar17;
  }
  cVar8 = *param_2;
  if (cVar8 == '\x03') {
LAB_140318a4a:
    local_159 = FUN_14065b53c(param_2);
    lVar16 = *(longlong *)(param_2 + 0x108);
    if (lVar16 == 0) {
      uVar9 = FUN_14065b502();
      lVar16 = FUN_14477b664(uVar9);
      *(longlong *)(param_2 + 0x108) = lVar16;
    }
    lVar17 = *(longlong *)(param_2 + 0x110);
    if (lVar17 == 0) {
      if ((*(longlong *)(param_2 + 0x100) != 0) && (lVar16 != 0)) {
        plVar19 = *(longlong **)(lVar16 + 0xb8);
        if ((plVar19 == (longlong *)0x0) ||
           (cVar8 = (**(code **)(*plVar19 + 0x108))(plVar19), cVar8 == '\0')) {
          param_2[0x110] = '\0';
          param_2[0x111] = '\0';
          param_2[0x112] = '\0';
          param_2[0x113] = '\0';
          param_2[0x114] = '\0';
          param_2[0x115] = '\0';
          param_2[0x116] = '\0';
          param_2[0x117] = '\0';
        }
        else {
          uVar9 = (**(code **)(*plVar19 + 0x110))(plVar19);
          lVar17 = FUN_144aff482(uVar9,param_2 + 0x100);
          *(longlong *)(param_2 + 0x110) = lVar17;
          if (lVar17 != 0) goto LAB_140318a76;
        }
      }
      lVar17 = FUN_140317ef6(param_2 + 0x20);
      if (lVar17 == 0) {
        lVar17 = FUN_14575395a();
      }
    }
LAB_140318a76:
    local_128 = 0;
    lStack_120 = 0;
    uVar9 = FUN_14065b502();
    lVar10 = FUN_14477b664(uVar9);
    lVar11 = FUN_14065b502();
    uVar9 = FUN_14065b502();
    FUN_1402d1bfa(&local_98,uVar9,lVar17);
    lVar16 = CONCAT44(local_98._4_4_,(undefined4)local_98);
    if (lVar16 != 0) {
      lStack_120 = 0;
    }
    local_130 = lVar16;
    lVar12 = FUN_14065b502();
    if (lVar11 == 0) {
LAB_140318af6:
      lVar12 = lVar11;
    }
    else if (lVar12 == 0) {
      lVar12 = 0;
    }
    else if ((*(int *)(lVar12 + 0x38) <= *(int *)(lVar11 + 0x38)) &&
            (*(longlong *)(*(longlong *)(lVar11 + 0x30) + (longlong)*(int *)(lVar12 + 0x38) * 8) ==
             lVar12 + 0x30)) goto LAB_140318af6;
    if (lVar10 != lVar12) {
      lStack_120 = 0;
    }
    uVar9 = FUN_14477b664(lVar12);
    local_128 = FUN_14477b664(uVar9);
    if ((lVar16 != 0) && (local_128 != 0)) {
      lStack_120 = lVar17;
    }
    if ((*(longlong **)(param_1 + 0x18) != (longlong *)0x0) && (*(int *)(param_1 + 0x14) != 0)) {
      puVar1 = (uint *)(param_1 + 0x10);
      uVar4 = *puVar1;
      plVar19 = (longlong *)0x0;
      if (((int)uVar4 < 0) || (DAT_14c9647dc <= (int)uVar4)) goto LAB_140318c9c;
      lVar16 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
      if (((((lVar16 == 0) || (*(int *)(lVar16 + 0x10) != *(int *)(param_1 + 0x14))) ||
           ((*(uint *)(lVar16 + 8) & 0x10200000) != 0)) ||
          ((lVar16 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x18))(), lVar16 == 0 ||
           (*(longlong **)(param_2 + 0x18) == (longlong *)0x0)))) || (*(int *)(param_2 + 0x14) == 0)
         ) goto LAB_140318c99;
      puVar2 = (uint *)(param_2 + 0x10);
      uVar4 = *puVar2;
      plVar18 = (longlong *)0x0;
      plVar19 = plVar18;
      if (((int)uVar4 < 0) || (plVar19 = (longlong *)0x0, DAT_14c9647dc <= (int)uVar4))
      goto LAB_140318c9c;
      lVar16 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
      if ((lVar16 != 0) &&
         (((*(int *)(lVar16 + 0x10) == *(int *)(param_2 + 0x14) &&
           ((*(uint *)(lVar16 + 8) & 0x10200000) == 0)) &&
          (lVar16 = (**(code **)(**(longlong **)(param_2 + 0x18) + 0x18))(), lVar16 != 0)))) {
        if (local_150 == 0) {
          uVar9 = FUN_14065b502();
          local_150 = FUN_14477b664(uVar9);
        }
        if (lStack_148 == 0) {
          plVar19 = (longlong *)0x0;
          if ((local_150 == 0) || (local_158 == 0)) goto LAB_140318c9c;
          plVar19 = *(longlong **)(local_150 + 0xb8);
          if ((plVar19 != (longlong *)0x0) &&
             (cVar8 = (**(code **)(*plVar19 + 0x108))(plVar19), cVar8 != '\0')) {
            uVar9 = (**(code **)(*plVar19 + 0x110))(plVar19);
            plVar18 = &local_158;
            lStack_148 = FUN_144aff482(uVar9,plVar18);
            if (lStack_148 != 0) goto LAB_140318c38;
          }
        }
        else {
LAB_140318c38:
          if (local_128 == 0) {
            uVar9 = FUN_14065b502();
            local_128 = FUN_14477b664(uVar9);
          }
          if (lStack_120 == 0) {
            plVar19 = (longlong *)0x0;
            if ((local_128 == 0) || (plVar19 = (longlong *)0x0, local_130 == 0)) goto LAB_140318c9c;
            plVar19 = *(longlong **)(local_128 + 0xb8);
            if ((plVar19 != (longlong *)0x0) &&
               (cVar8 = (**(code **)(*plVar19 + 0x108))(plVar19), cVar8 != '\0')) {
              uVar9 = (**(code **)(*plVar19 + 0x110))(plVar19);
              plVar18 = &local_130;
              lStack_120 = FUN_144aff482(uVar9,plVar18);
              if (lStack_120 != 0) goto LAB_140318c52;
            }
          }
          else {
LAB_140318c52:
            uVar9 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x18))();
            lVar16 = FUN_1447210f0(uVar9);
            if (lVar16 != 0) {
              if (*(longlong *)(param_1 + 0x18) == *(longlong *)(param_2 + 0x18)) {
                plVar19 = (longlong *)CONCAT71((int7)((ulonglong)plVar18 >> 8),1);
                goto LAB_140318c9c;
              }
              if (local_128 == 0) {
                uVar9 = FUN_14065b502();
                local_128 = FUN_14477b664(uVar9);
              }
              lVar16 = lStack_120;
              if (((lStack_120 == 0) && (lVar16 = 0, local_128 != 0)) && (local_130 != 0)) {
                plVar18 = *(longlong **)(local_128 + 0xb8);
                if ((plVar18 == (longlong *)0x0) ||
                   (cVar8 = (**(code **)(*plVar18 + 0x108))(plVar18), cVar8 == '\0')) {
                  lVar16 = 0;
                  lStack_120 = lVar16;
                }
                else {
                  uVar9 = (**(code **)(*plVar18 + 0x110))(plVar18);
                  lVar16 = FUN_144aff482(uVar9,&local_130);
                  lStack_120 = lVar16;
                }
              }
              if (*(char *)(lVar16 + 0x18) == '\x02') goto LAB_140318c99;
              local_78 = (longlong *)0x0;
              local_70 = 0x400000000;
              local_a8 = (longlong *)0x0;
              local_a0 = 0x400000000;
              bVar15 = bVar7 & local_159;
              if (bVar15 == 1) {
                FUN_1456fca7b(&local_f8,puVar1);
                plVar19 = local_d8;
                if (local_d8 == (longlong *)0x0) {
                  local_88 = local_e8;
                  uStack_80 = uStack_e0;
                  local_98._0_4_ = (undefined4)local_f8;
                  local_98._4_4_ = local_f8._4_4_;
                  uStack_90 = (undefined4)uStack_f0;
                  uStack_8c = uStack_f0._4_4_;
                }
                if (local_78 != (longlong *)0x0) {
                  FUN_1400020a8();
                }
                local_78 = plVar19;
                local_70 = CONCAT44(uStack_cc,local_d0);
                FUN_1456fca7b(&local_f8,puVar2);
                plVar18 = local_d8;
                if (local_d8 == (longlong *)0x0) {
                  local_b8 = local_e8;
                  uStack_b0 = uStack_e0;
                  local_c8._0_4_ = (undefined4)local_f8;
                  local_c8._4_4_ = local_f8._4_4_;
                  uStack_c0 = (undefined4)uStack_f0;
                  uStack_bc = uStack_f0._4_4_;
                }
                if (local_a8 != (longlong *)0x0) {
                  FUN_1400020a8();
                }
                local_a8 = plVar18;
                local_a0 = CONCAT44(uStack_cc,local_d0);
                plVar19 = &local_98;
                if (local_78 != (longlong *)0x0) {
                  plVar19 = local_78;
                }
                if ((longlong)(int)local_70 != 0) {
                  plVar3 = plVar19 + (int)local_70;
                  plVar14 = &local_c8;
                  if (plVar18 != (longlong *)0x0) {
                    plVar14 = plVar18;
                  }
                  do {
                    if (local_d0 != 0) {
                      lVar16 = 0;
                      do {
                        if (*(longlong *)((longlong)plVar14 + lVar16) == *plVar19) {
                          plVar18 = (longlong *)CONCAT71((int7)((ulonglong)plVar18 >> 8),1);
                          if (plVar19 == (longlong *)0x0) goto LAB_140318d4a;
                          goto LAB_140318d79;
                        }
                        lVar16 = lVar16 + 8;
                      } while ((longlong)local_d0 << 3 != lVar16);
                    }
                    plVar19 = plVar19 + 1;
                  } while (plVar19 != plVar3);
                }
              }
LAB_140318d4a:
              if (local_150 == 0) {
                uVar9 = FUN_14065b502();
                local_150 = FUN_14477b664(uVar9);
              }
              lVar16 = lStack_148;
              if (((lStack_148 == 0) && (lVar16 = 0, local_150 != 0)) && (local_158 != 0)) {
                plVar19 = *(longlong **)(local_150 + 0xb8);
                if ((plVar19 == (longlong *)0x0) ||
                   (cVar8 = (**(code **)(*plVar19 + 0x108))(plVar19), cVar8 == '\0')) {
                  lVar16 = 0;
                  lStack_148 = lVar16;
                }
                else {
                  uVar9 = (**(code **)(*plVar19 + 0x110))(plVar19);
                  lVar16 = FUN_144aff482(uVar9,&local_158);
                  lStack_148 = lVar16;
                }
              }
              plVar19 = *(longlong **)(param_1 + 0x18);
              if ((*(char *)(lVar16 + 0x18) == '\0') || (plVar19 == *(longlong **)(param_2 + 0x18)))
              {
                if (bVar7 == 0) {
LAB_140318dae:
                  lVar16 = (**(code **)(*plVar19 + 0x10))();
                  if ((*(longlong *)(lVar16 + 0x180) != 0) && (*(int *)(lVar16 + 0x17c) != 0)) {
                    uVar4 = *(uint *)(lVar16 + 0x178);
                    plVar18 = (longlong *)0x0;
                    if (((int)uVar4 < 0) || (DAT_14c9647dc <= (int)uVar4)) goto LAB_140318d79;
                    lVar17 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
                    if ((((lVar17 != 0) && (*(int *)(lVar17 + 0x10) == *(int *)(lVar16 + 0x17c))) &&
                        ((*(uint *)(lVar17 + 8) & 0x10200000) == 0)) &&
                       (*(int *)(lVar16 + 0x18c) == 0)) {
                      lVar16 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x18))();
                      lVar16 = *(longlong *)(lVar16 + 0x1c8);
                      if (lVar16 == 0) {
                        local_108 = DAT_14c8464f0;
                        local_118 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
                        uStack_110 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8)
                        ;
                      }
                      else {
                        local_118 = *(double *)(lVar16 + 0x260);
                        uStack_110 = *(double *)(lVar16 + 0x268);
                        local_108 = *(double *)(lVar16 + 0x270);
                      }
                      if (local_159 != 0) {
                        if (bVar15 == 0) {
                          FUN_1456fca7b(&local_f8,puVar2);
                          if (local_d8 == (longlong *)0x0) {
                            local_b8 = local_e8;
                            uStack_b0 = uStack_e0;
                            local_c8._0_4_ = (undefined4)local_f8;
                            local_c8._4_4_ = local_f8._4_4_;
                            uStack_c0 = (undefined4)uStack_f0;
                            uStack_bc = uStack_f0._4_4_;
                          }
                          if (local_a8 != (longlong *)0x0) {
                            FUN_1400020a8();
                          }
                          local_a8 = local_d8;
                          local_a0 = CONCAT44(uStack_cc,local_d0);
                        }
                        lVar16 = FUN_140316ff8();
                        cVar8 = FUN_1456fc9a8(&local_c8,&local_118,*(undefined4 *)(lVar16 + 0x50));
                        if (cVar8 != '\0') goto LAB_140318f67;
                      }
                      lVar16 = (**(code **)(**(longlong **)(param_2 + 0x18) + 0x10))();
                      if (((((*(longlong *)(lVar16 + 0x180) != 0) && (*(int *)(lVar16 + 0x17c) != 0)
                            ) && ((uVar4 = *(uint *)(lVar16 + 0x178), -1 < (int)uVar4 &&
                                  (((int)uVar4 < DAT_14c9647dc &&
                                   (lVar17 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                                             *(longlong *)
                                              (DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8),
                                   lVar17 != 0)))))) &&
                          (*(int *)(lVar17 + 0x10) == *(int *)(lVar16 + 0x17c))) &&
                         (((*(uint *)(lVar17 + 8) & 0x10200000) == 0 &&
                          (*(int *)(lVar16 + 0x18c) == 0)))) {
                        lVar16 = (**(code **)(**(longlong **)(param_2 + 0x18) + 0x18))();
                        lVar16 = *(longlong *)(lVar16 + 0x1c8);
                        if (lVar16 == 0) {
                          pdVar13 = (double *)&DAT_14c8464e0;
                          uVar20 = SUB84(DAT_14c8464f0,0);
                          uVar21 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
                        }
                        else {
                          uVar20 = (undefined4)*(undefined8 *)(lVar16 + 0x270);
                          uVar21 = (undefined4)((ulonglong)*(undefined8 *)(lVar16 + 0x270) >> 0x20);
                          pdVar13 = (double *)(lVar16 + 0x260);
                        }
                        dVar6 = local_108 - (double)CONCAT44(uVar21,uVar20);
                        dVar5 = uStack_110 - pdVar13[1];
                        dVar22 = local_118 - *pdVar13;
                        lVar16 = FUN_140316ff8();
                        if (dVar6 * dVar6 + dVar22 * dVar22 + dVar5 * dVar5 <
                            (double)(*(float *)(lVar16 + 0x50) * *(float *)(lVar16 + 0x50)))
                        goto LAB_140318f67;
                      }
                    }
                  }
                  goto LAB_140318d76;
                }
                if (bVar15 == 0) {
                  FUN_1456fca7b(&local_f8,puVar1);
                  plVar19 = local_d8;
                  if (local_d8 == (longlong *)0x0) {
                    local_88 = local_e8;
                    uStack_80 = uStack_e0;
                    local_98._0_4_ = (undefined4)local_f8;
                    local_98._4_4_ = local_f8._4_4_;
                    uStack_90 = (undefined4)uStack_f0;
                    uStack_8c = uStack_f0._4_4_;
                  }
                  if (local_78 != (longlong *)0x0) {
                    FUN_1400020a8();
                  }
                  local_78 = plVar19;
                  local_70 = CONCAT44(uStack_cc,local_d0);
                }
                lVar16 = FUN_140316ff8();
                uVar20 = *(undefined4 *)(lVar16 + 0x50);
                lVar16 = (**(code **)(**(longlong **)(param_2 + 0x18) + 0x18))();
                lVar16 = *(longlong *)(lVar16 + 0x1c8);
                if (lVar16 == 0) {
                  local_e8 = DAT_14c8464f0;
                  local_f8 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
                  uStack_f0 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
                }
                else {
                  local_f8 = *(undefined8 *)(lVar16 + 0x260);
                  uStack_f0 = *(undefined8 *)(lVar16 + 0x268);
                  local_e8 = *(double *)(lVar16 + 0x270);
                }
                cVar8 = FUN_1456fc9a8(&local_98,&local_f8,uVar20);
                if (cVar8 == '\0') {
                  plVar19 = *(longlong **)(param_1 + 0x18);
                  goto LAB_140318dae;
                }
LAB_140318f67:
                plVar18 = (longlong *)CONCAT71((int7)((ulonglong)plVar18 >> 8),1);
              }
              else {
LAB_140318d76:
                plVar18 = (longlong *)0x0;
              }
LAB_140318d79:
              if (local_a8 != (longlong *)0x0) {
                FUN_1400020a8();
              }
              plVar19 = plVar18;
              if (local_78 != (longlong *)0x0) {
                FUN_1400020a8();
              }
              goto LAB_140318c9c;
            }
          }
        }
      }
    }
  }
  else if (cVar8 == '\x04') {
    if (((int)local_140 != *(int *)(param_2 + 0x94)) ||
       (cVar8 = FUN_140317cec((longlong)&local_140 + 4,param_2 + 0x98), cVar8 == '\0'))
    goto LAB_140318a4a;
  }
  else if (cVar8 == '\x01') goto LAB_140318a4a;
LAB_140318c99:
  plVar19 = (longlong *)0x0;
LAB_140318c9c:
  if ((local_60 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return (ulonglong)plVar19 & 0xffffffff;
}



// FUNCTION 14031964a FUN_14031964a body=42 status=ok
// SIG undefined FUN_14031964a(void)

undefined8 FUN_14031964a(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (param_1 != 0) {
    lVar1 = FUN_140115352();
    if (lVar1 != 0) {
      uVar2 = FUN_14031976e(lVar1,*(undefined8 *)(lVar1 + 0x20));
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 140319674 FUN_140319674 body=47 status=ok
// SIG undefined FUN_140319674(void)

void FUN_140319674(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x70);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0x10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1403196a4 FUN_1403196a4 body=202 status=ok
// SIG undefined FUN_1403196a4(void)

undefined8 * FUN_1403196a4(longlong param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (((((*(longlong **)(param_1 + 0x180) != (longlong *)0x0) && (*(int *)(param_1 + 0x17c) != 0))
       && (uVar1 = *(uint *)(param_1 + 0x178), -1 < (int)uVar1)) &&
      (((int)uVar1 < DAT_14c9647dc &&
       (lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar3 != 0)))) &&
     ((*(int *)(lVar3 + 0x10) == *(int *)(param_1 + 0x17c) &&
      (((*(uint *)(lVar3 + 8) & 0x10200000) == 0 &&
       (lVar3 = (**(code **)(**(longlong **)(param_1 + 0x180) + 0x18))(), lVar3 != 0)))))) {
    lVar3 = *(longlong *)(lVar3 + 0x1c8);
    if (lVar3 == 0) {
      param_2[2] = DAT_14c8464f0;
      uVar2 = DAT_14c8464e8;
      *param_2 = DAT_14c8464e0;
      param_2[1] = uVar2;
      return param_2;
    }
    uVar2 = *(undefined8 *)(lVar3 + 0x268);
    *param_2 = *(undefined8 *)(lVar3 + 0x260);
    param_2[1] = uVar2;
    param_2[2] = *(undefined8 *)(lVar3 + 0x270);
    return param_2;
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return param_2;
}



// FUNCTION 14031976e FUN_14031976e body=241 status=ok
// SIG undefined FUN_14031976e(void)

undefined8 FUN_14031976e(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_d8 [32];
  undefined1 *local_b8;
  undefined1 local_a8 [48];
  undefined1 local_78;
  byte local_76;
  byte local_74;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [5];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (*(longlong *)(param_1 + 0x180) == 0) {
    lVar2 = FUN_144a126be(param_1);
    if (lVar2 != 0) {
      iVar1 = FUN_14490d72a(lVar2);
      if (iVar1 == 3) goto LAB_140319797;
    }
    FUN_1411371f6(local_a8);
    local_78 = 1;
    local_74 = local_74 | 0x40;
    local_76 = local_76 | 8;
    uVar3 = FUN_145978cdc();
    local_b8 = local_a8;
    lVar2 = FUN_141137228(param_2,uVar3,0,0);
    if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar2);
    }
    *(longlong *)(param_1 + 0x180) = lVar2;
    if (local_68 != 0) {
      if (local_58 == (longlong *)0x0) {
        local_58 = local_48;
      }
      (**(code **)(*local_58 + 0x10))();
    }
  }
LAB_140319797:
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return *(undefined8 *)(param_1 + 0x180);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140319860 FUN_140319860 body=355 status=ok
// SIG undefined FUN_140319860(void)

void FUN_140319860(longlong *param_1,char param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = (**(code **)(*param_1 + 0x180))();
  if ((lVar2 == 0) || ((*(uint *)(lVar2 + 8) >> 0x1e & 1) != 0)) goto LAB_14031997a;
  if (param_2 != '\0') {
    FUN_140056680(local_30,L"Provider Unregister With Dialog System");
    FUN_1403171d0(param_1,0,local_30,0);
    if (local_30[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((param_1[0x30] == 0) || (*(int *)((longlong)param_1 + 0x17c) == 0)) {
LAB_140319999:
    lVar2 = 0;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x2f);
    lVar2 = 0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      if ((lVar3 == 0) || (*(int *)(lVar3 + 0x10) != *(int *)((longlong)param_1 + 0x17c)))
      goto LAB_140319999;
      lVar2 = 0;
      if ((*(uint *)(lVar3 + 8) & 0x10200000) == 0) {
        lVar2 = param_1[0x30];
      }
    }
  }
  lVar2 = FUN_140d53a8c(lVar2);
  if ((lVar2 != 0) && ((char)param_1[0x31] == '\x01')) {
    FUN_140d7175c(*(undefined8 *)(lVar2 + 0x40),param_1 + 0x2f);
    FUN_140d53ac0(param_1,lVar2,0);
    *(undefined1 *)(param_1 + 0x31) = 0;
    lVar2 = param_1[0x44];
    if ((longlong)(int)lVar2 != 0) {
      lVar3 = param_1[0x43];
      lVar4 = 0;
      do {
        if (*(longlong **)(lVar3 + lVar4) != (longlong *)0x0) {
          (**(code **)(**(longlong **)(lVar3 + lVar4) + 0x10))();
        }
        lVar4 = lVar4 + 0x10;
      } while ((longlong)(int)lVar2 * 0x10 != lVar4);
    }
  }
LAB_14031997a:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1403199c4 FUN_1403199c4 body=400 status=ok
// SIG undefined FUN_1403199c4(void)

void FUN_1403199c4(longlong param_1,undefined4 *param_2,char param_3,longlong param_4,
                  undefined4 *param_5)

{
  uint uVar1;
  double dVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  double *pdVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_78 [36];
  undefined4 local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_54 = *param_2;
  pdVar7 = (double *)FUN_140319b56(param_1 + 0x108);
  if ((*(longlong *)(param_1 + 0x50) != 0) &&
     ((param_3 != '\0' ||
      ((((pdVar7[6] == 0.0 && (!NAN(pdVar7[6]))) && (pdVar7[7] == 0.0)) &&
       (((!NAN(pdVar7[7]) && (pdVar7[8] == 0.0)) && (!NAN(pdVar7[8]))))))))) {
    if (param_4 == 0) {
      *(undefined4 *)(pdVar7 + 5) = 0;
      iVar6 = 0;
    }
    else {
      uVar1 = *(uint *)(param_4 + 0xc);
      *(uint *)(pdVar7 + 5) = uVar1;
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar9 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar9 = 0;
      }
      iVar6 = *(int *)(lVar9 + 0x10);
      if (*(int *)(lVar9 + 0x10) == 0) {
        LOCK();
        iVar6 = DAT_14c964868 + 1;
        UNLOCK();
        iVar8 = DAT_14c964868 + 1;
        bVar10 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar6;
        if (bVar10) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar8);
        }
        LOCK();
        iVar6 = *(int *)(lVar9 + 0x10);
        bVar10 = iVar6 == 0;
        if (bVar10) {
          *(int *)(lVar9 + 0x10) = iVar8;
          iVar6 = 0;
        }
        UNLOCK();
        if (bVar10) {
          iVar6 = iVar8;
        }
      }
    }
    *(int *)((longlong)pdVar7 + 0x2c) = iVar6;
    uVar3 = param_5[1];
    uVar4 = param_5[2];
    uVar5 = param_5[3];
    *(undefined4 *)(pdVar7 + 6) = *param_5;
    *(undefined4 *)((longlong)pdVar7 + 0x34) = uVar3;
    *(undefined4 *)(pdVar7 + 7) = uVar4;
    *(undefined4 *)((longlong)pdVar7 + 0x3c) = uVar5;
    pdVar7[8] = *(double *)(param_5 + 4);
    dVar2 = (double)FUN_140316eca(*(undefined8 *)(param_1 + 0x50));
    lVar9 = FUN_140316ff8();
    *pdVar7 = (double)*(float *)(lVar9 + 0x6f0) + dVar2;
  }
  if ((local_50 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140319b56 FUN_140319b56 body=189 status=ok
// SIG undefined FUN_140319b56(void)

longlong FUN_140319b56(longlong *param_1,uint param_2,int *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  int *local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      do {
        lVar3 = *param_1 + (longlong)iVar1 * 0x58;
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x58) == *param_3) {
          if (lVar3 != 0) goto LAB_140319bb7;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0x50);
      } while (iVar1 != -1);
    }
  }
  local_38 = 0;
  local_28 = param_3;
  FUN_14031a320(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0x58 + *param_1;
LAB_140319bb7:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 8;
}



// FUNCTION 140319c14 FUN_140319c14 body=299 status=ok
// SIG undefined FUN_140319c14(void)

void FUN_140319c14(undefined8 param_1,longlong *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined *puVar4;
  uint *puVar5;
  longlong *plVar6;
  uint uVar7;
  
  if ((param_2 != (longlong *)0x0) && (lVar2 = (**(code **)(*param_2 + 8))(param_2), lVar2 != 0)) {
    lVar3 = FUN_140317d24();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       ((*(longlong *)
          (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
         == lVar3 + 0x30 &&
        (lVar3 = (**(code **)(*(longlong *)(lVar2 + 0x28) + 0x10))(), lVar3 != 0)))) {
      if (*(char *)(lVar2 + 0x38) != '\0') {
        FUN_140319d40(lVar2);
        return;
      }
      if (*(longlong *)(lVar2 + 0x48) != 0) {
        *(undefined8 *)(lVar2 + 0x48) = 0;
        uVar1 = *(ulonglong *)(lVar2 + 0x30);
        if (uVar1 < 0xffffffff00000000) {
          plVar6 = DAT_14c9980d0;
          if (DAT_14c9980d8 == 0) {
            plVar6 = (longlong *)0x0;
          }
          (**(code **)(*plVar6 + 0x58))(plVar6,lVar2,uVar1,1);
        }
        else {
          uVar7 = (uint)uVar1;
          if ((-1 < (int)uVar7) && ((int)uVar7 < DAT_14c998088)) {
            puVar4 = &DAT_14c998070;
            if (DAT_14c998080 != (undefined *)0x0) {
              puVar4 = DAT_14c998080;
            }
            if ((*(uint *)(puVar4 + ((uint)(uVar1 >> 3) & 0xffffffc)) >> (uVar7 & 0x1f) & 1) != 0) {
              lVar3 = DAT_14c998060 + (ulonglong)(uVar7 & 0x7fffffff) * 0x68;
              puVar5 = *(uint **)(lVar3 + 0x18);
              if (*(uint **)(lVar3 + 0x18) == (uint *)0x0) {
                puVar5 = (uint *)(lVar3 + 8);
              }
              *puVar5 = *puVar5 | 2;
              *(byte *)(lVar3 + 0x60) = *(byte *)(lVar3 + 0x60) | 1;
            }
          }
        }
        FUN_140b3e36e(lVar2);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140319d40 FUN_140319d40 body=66 status=ok
// SIG undefined FUN_140319d40(void)

void FUN_140319d40(longlong param_1)

{
  longlong lVar1;
  
  if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
    lVar1 = *(longlong *)(param_1 + 0x20);
    if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar1);
    }
  }
  else {
    lVar1 = 0;
  }
  *(longlong *)(param_1 + 0x48) = lVar1;
  FUN_140b3e36e(param_1);
  return;
}



// FUNCTION 140319d82 FUN_140319d82 body=700 status=ok
// SIG undefined FUN_140319d82(void)

undefined8 FUN_140319d82(longlong param_1)

{
  byte bVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  byte bVar9;
  undefined1 auStack_78 [32];
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((*(longlong **)(param_1 + 0x18) == (longlong *)0x0) || (*(int *)(param_1 + 0x14) == 0)) {
LAB_140319f97:
    uVar7 = 0;
    goto LAB_140319f78;
  }
  uVar2 = *(uint *)(param_1 + 0x10);
  uVar7 = 0;
  if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_140319f78;
  lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
  if (((lVar5 == 0) || (*(int *)(lVar5 + 0x10) != *(int *)(param_1 + 0x14))) ||
     ((*(uint *)(lVar5 + 8) & 0x10200000) != 0)) goto LAB_140319f97;
  lVar5 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x18))();
  lVar6 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x10))();
  uVar7 = 0;
  if ((lVar5 == 0) || (uVar7 = 0, lVar6 == 0)) goto LAB_140319f78;
  cVar3 = FUN_14065b53c(param_1);
  if ((cVar3 != '\0') && ((*(byte *)(lVar5 + 0x60) & 8) == 0)) {
    *(byte *)(lVar5 + 0x60) = *(byte *)(lVar5 + 0x60) | 8;
    *(undefined1 *)(param_1 + 0xed) = 1;
  }
  bVar1 = *(byte *)(param_1 + 0xc1);
  local_58[0] = *(undefined4 *)(param_1 + 4);
  local_50 = *(undefined8 *)(param_1 + 0x20);
  uVar7 = FUN_14477b664(*(undefined8 *)(param_1 + 0x28));
  local_48 = FUN_14477b664(uVar7);
  local_40 = *(undefined8 *)(param_1 + 0x30);
  local_38 = *(undefined4 *)(param_1 + 0x38);
  uStack_34 = *(undefined4 *)(param_1 + 0x3c);
  uStack_30 = *(undefined4 *)(param_1 + 0x40);
  uStack_2c = *(undefined4 *)(param_1 + 0x44);
  local_28 = 0;
  bVar9 = *(byte *)(param_1 + 0xc5) == 1;
  if (*(byte *)(param_1 + 0xc3) != 0) {
    bVar9 = bVar9 | 2;
  }
  if (*(byte *)(param_1 + 0xc4) != 0) {
    bVar9 = bVar9 | 4;
  }
  if (*(byte *)(param_1 + 0xc0) != 0) {
    bVar9 = bVar9 | 8;
  }
  if (*(char *)(param_1 + 0xc2) == '\0') {
    if ((byte)(*(byte *)(param_1 + 0xc3) | *(byte *)(param_1 + 0xc5) | *(byte *)(param_1 + 0xc4) |
              *(byte *)(param_1 + 0xc0)) == 1) goto LAB_140319ee3;
  }
  else {
    bVar9 = bVar9 | 0x10;
LAB_140319ee3:
    local_28 = bVar9;
  }
  FUN_14031a040(lVar6,local_58,bVar1 ^ 1);
  iVar4 = *(int *)(*(longlong *)(param_1 + 0xf8) + 0x24c);
  if ((((iVar4 == 0) || (uVar2 = *(uint *)(*(longlong *)(param_1 + 0xf8) + 0x248), (int)uVar2 < 0))
      || ((DAT_14c9647dc <= (int)uVar2 ||
          ((((plVar8 = (longlong *)
                       ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
             plVar8 == (longlong *)0x0 || ((int)plVar8[2] != iVar4)) ||
            ((*(uint *)(plVar8 + 1) & 0x10200000) != 0)) || (*plVar8 == 0)))))) ||
     (((*(byte *)(*plVar8 + 0x156) & 2) != 0 && (iVar4 = FUN_14490d72a(), iVar4 != 1)))) {
    if (*(char *)(lVar6 + 0x160) == '\x01') {
      plVar8 = *(longlong **)(lVar6 + 0x168);
      if ((DAT_14c950c29 == 1) && (plVar8 != (longlong *)0x0)) {
        FUN_1456cec3c(plVar8);
        plVar8 = *(longlong **)(lVar6 + 0x168);
      }
      else if (plVar8 == (longlong *)0x0) goto LAB_14031a012;
      if (((DAT_14c950c29 & 1) != 0) && (plVar8 != (longlong *)0x0)) {
        FUN_1456cec3c(plVar8);
      }
      cVar3 = (**(code **)(*plVar8 + 0x6c8))(plVar8);
      if (cVar3 == '\0') goto LAB_14031a012;
    }
  }
  else {
LAB_14031a012:
    *(undefined1 *)(param_1 + 0xee) = 1;
  }
  *(undefined1 *)(param_1 + 0xe0) = 1;
  uVar7 = 1;
LAB_140319f78:
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14031a040 FUN_14031a040 body=581 status=ok
// SIG undefined FUN_14031a040(void)

void FUN_14031a040(longlong *param_1,undefined4 *param_2,int param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined1 auStack_b8 [32];
  undefined4 local_98 [2];
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 local_68;
  undefined4 local_60 [2];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar7 = FUN_14494f566(param_2 + 2);
  if (lVar7 != 0) {
    puVar1 = param_2 + 8;
    if (param_3 == 0) {
      local_58 = *(undefined8 *)(param_2 + 2);
      local_60[0] = *param_2;
      uVar8 = FUN_14477b664(*(undefined8 *)(param_2 + 4));
      local_50 = FUN_14477b664(uVar8);
      local_48 = *(undefined8 *)(param_2 + 6);
      local_40 = *puVar1;
      uStack_3c = param_2[9];
      uStack_38 = param_2[10];
      uStack_34 = param_2[0xb];
      local_30 = *(undefined1 *)(param_2 + 0xc);
      (**(code **)(*param_1 + 0x2a8))(param_1,local_60);
      *(undefined1 *)(param_1 + 0x26) = 1;
    }
    else {
      local_90 = *(undefined8 *)(param_2 + 2);
      local_98[0] = *param_2;
      uVar8 = FUN_14477b664(*(undefined8 *)(param_2 + 4));
      local_88 = FUN_14477b664(uVar8);
      local_80 = *(undefined8 *)(param_2 + 6);
      local_78 = *puVar1;
      uStack_74 = param_2[9];
      uStack_70 = param_2[10];
      uStack_6c = param_2[0xb];
      local_68 = *(undefined1 *)(param_2 + 0xc);
      FUN_14031a286(param_1,local_98);
      if ((((((longlong *)param_1[0x30] != (longlong *)0x0) &&
            (*(int *)((longlong)param_1 + 0x17c) != 0)) &&
           (uVar2 = *(uint *)(param_1 + 0x2f), -1 < (int)uVar2)) &&
          (((((int)uVar2 < DAT_14c9647dc &&
             (lVar7 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8), lVar7 != 0)) &&
            ((*(int *)(lVar7 + 0x10) == *(int *)((longlong)param_1 + 0x17c) &&
             (((*(uint *)(lVar7 + 8) & 0x10200000) == 0 &&
              (lVar7 = (**(code **)(*(longlong *)param_1[0x30] + 0x18))(), lVar7 != 0)))))) &&
           (*(char *)(lVar7 + 0x178) == '\x03')))) &&
         ((((char)param_1[0x2c] != '\x01' || ((longlong *)param_1[0x2d] == (longlong *)0x0)) ||
          (cVar6 = (**(code **)(*(longlong *)param_1[0x2d] + 0x6c8))(), cVar6 == '\0')))) {
        *(undefined4 *)(param_1 + 0x34) = *param_2;
        lVar7 = *(longlong *)(param_2 + 2);
        if (param_1[0x35] != lVar7) {
          param_1[0x37] = 0;
        }
        param_1[0x35] = lVar7;
        if (param_1[0x36] != *(longlong *)(param_2 + 4)) {
          param_1[0x37] = 0;
        }
        uVar8 = FUN_14477b664();
        lVar7 = FUN_14477b664(uVar8);
        param_1[0x36] = lVar7;
        param_1[0x37] = *(longlong *)(param_2 + 6);
        uVar3 = param_2[9];
        uVar4 = param_2[10];
        uVar5 = param_2[0xb];
        *(undefined4 *)(param_1 + 0x38) = *puVar1;
        *(undefined4 *)((longlong)param_1 + 0x1c4) = uVar3;
        *(undefined4 *)(param_1 + 0x39) = uVar4;
        *(undefined4 *)((longlong)param_1 + 0x1cc) = uVar5;
        *(undefined1 *)(param_1 + 0x3a) = *(undefined1 *)(param_2 + 0xc);
        *(undefined4 *)(param_1 + 0x3b) = 0;
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14031a286 FUN_14031a286 body=152 status=ok
// SIG undefined FUN_14031a286(void)

void FUN_14031a286(longlong *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_78 [32];
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58[0] = *param_2;
  local_50 = *(undefined8 *)(param_2 + 2);
  uVar1 = FUN_14477b664(*(undefined8 *)(param_2 + 4));
  local_48 = FUN_14477b664(uVar1);
  local_40 = *(undefined8 *)(param_2 + 6);
  local_38 = param_2[8];
  uStack_34 = param_2[9];
  uStack_30 = param_2[10];
  uStack_2c = param_2[0xb];
  local_28 = *(undefined1 *)(param_2 + 0xc);
  uVar1 = FUN_14477b072(param_1,DAT_14cb5ccf8);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,local_58);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14031a320 FUN_14031a320 body=336 status=ok
// SIG undefined FUN_14031a320(void)

undefined4 *
FUN_14031a320(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4,
             undefined8 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_58 [2];
  undefined4 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_14031a6a2(param_1,local_58);
  *local_50 = *(undefined4 *)*param_4;
  *(undefined8 *)(local_50 + 2) = 0;
  *(undefined8 *)(local_50 + 4) = 0;
  *(undefined8 *)(local_50 + 6) = 0;
  *(undefined8 *)(local_50 + 8) = 0;
  *(undefined8 *)(local_50 + 10) = 0;
  *(undefined8 *)(local_50 + 0xc) = 0;
  uVar3 = DAT_14c8464e8._4_4_;
  uVar2 = (undefined4)DAT_14c8464e8;
  uVar1 = DAT_14c8464e0._4_4_;
  local_50[0xe] = (undefined4)DAT_14c8464e0;
  local_50[0xf] = uVar1;
  local_50[0x10] = uVar2;
  local_50[0x11] = uVar3;
  *(undefined8 *)(local_50 + 0x12) = DAT_14c8464f0;
  local_50[0x14] = 0xffffffff;
  local_68 = param_5;
  cVar4 = FUN_14031a58e(param_1,param_3,local_50,local_58);
  if (cVar4 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar5 < 4) {
      iVar7 = 1;
    }
    else {
      uVar6 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      local_50[0x15] = param_3;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      local_50[0x14] =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_58[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_1456fcc82(param_1);
    }
  }
  *param_2 = local_58[0];
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14031a472 FUN_14031a472 body=128 status=ok
// SIG undefined FUN_14031a472(void)

void FUN_14031a472(longlong *param_1,uint param_2,char param_3)

{
  longlong lVar1;
  int iVar2;
  void *_Dst;
  
  lVar1 = *param_1;
  FUN_1407acd04(lVar1 + (longlong)(int)param_2 * 0x390 + 0x38);
  iVar2 = (int)param_1[1];
  if (~param_2 + iVar2 != 0) {
    _Dst = (void *)(lVar1 + (longlong)(int)param_2 * 0x390);
    memmove(_Dst,(void *)((longlong)_Dst + 0x390),(longlong)(int)(~param_2 + iVar2) * 0x390);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  if (param_3 == '\x01') {
    FUN_14031a4f2(param_1);
    return;
  }
  return;
}



// FUNCTION 14031a4f2 FUN_14031a4f2 body=156 status=ok
// SIG undefined FUN_14031a4f2(void)

void FUN_14031a4f2(longlong param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar3 = (ulonglong)uVar1;
  iVar2 = *(int *)(param_1 + 0xc);
  if (((0x3fff < (ulonglong)((longlong)(int)(iVar2 - uVar1) * 0x390)) ||
      ((int)(uVar1 * 3) < iVar2 * 2)) && (uVar1 == 0 || 0x40 < (int)(iVar2 - uVar1))) {
    if (0 < (int)uVar1) {
      uVar3 = FUN_144a3809e(uVar3 * 0x390,8);
      uVar3 = uVar3 / 0x390;
      iVar2 = *(int *)(param_1 + 0xc);
    }
    if ((int)uVar3 != iVar2) {
      *(int *)(param_1 + 0xc) = (int)uVar3;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,0x390,8);
    }
  }
  return;
}



// FUNCTION 14031a58e FUN_14031a58e body=159 status=ok
// SIG undefined FUN_14031a58e(void)

void FUN_14031a58e(longlong *param_1,uint param_2,int *param_3,int *param_4,undefined1 *param_5)

{
  void *_Dst;
  undefined1 uVar1;
  longlong *plVar2;
  int iVar3;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar3 != -1) {
      do {
        _Dst = (void *)(*param_1 + (longlong)iVar3 * 0x58);
        if (*(int *)(*param_1 + (longlong)iVar3 * 0x58) == *param_3) {
          memmove(_Dst,param_3,0x50);
          FUN_14031a62e(param_1,*param_4);
          *param_4 = iVar3;
          uVar1 = 1;
          break;
        }
        iVar3 = *(int *)((longlong)_Dst + 0x50);
        uVar1 = 0;
      } while (iVar3 != -1);
      goto LAB_14031a5da;
    }
  }
  uVar1 = 0;
LAB_14031a5da:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar1;
  }
  return;
}



// FUNCTION 14031a62e FUN_14031a62e body=116 status=ok
// SIG undefined FUN_14031a62e(void)

void FUN_14031a62e(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x58) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x58) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x58 + 4) = uVar5;
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



// FUNCTION 14031a6a2 FUN_14031a6a2 body=228 status=ok
// SIG undefined FUN_14031a6a2(void)

int * FUN_14031a6a2(longlong *param_1,int *param_2)

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
      FUN_1403e7a24(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x58);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x58) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x58 + *param_1;
  return param_2;
}



// FUNCTION 14031a786 FUN_14031a786 body=10355 status=ok
// SIG undefined FUN_14031a786(void)

void FUN_14031a786(longlong param_1)

{
  uint *puVar1;
  int *piVar2;
  float fVar3;
  char cVar4;
  char cVar5;
  undefined1 uVar6;
  uint uVar7;
  int iVar8;
  DWORD DVar9;
  DWORD DVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong *plVar13;
  char *pcVar14;
  longlong lVar15;
  longlong *plVar16;
  ulonglong uVar17;
  longlong *plVar18;
  longlong *plVar19;
  uint uVar20;
  undefined8 *puVar21;
  uint uVar22;
  wchar_t *pwVar23;
  undefined4 *puVar24;
  int iVar25;
  uint uVar26;
  longlong lVar27;
  longlong lVar28;
  undefined2 *puVar29;
  bool bVar30;
  float fVar31;
  undefined4 uVar32;
  undefined1 auStack_1e8 [32];
  undefined8 *local_1c8;
  undefined2 *local_1c0;
  longlong *local_1b8;
  longlong *local_1b0;
  longlong *local_1a8;
  longlong *local_1a0;
  longlong *local_198;
  longlong *local_190;
  uint local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  longlong *local_128;
  undefined8 uStack_120;
  longlong *local_118;
  int iStack_110;
  undefined4 uStack_10c;
  longlong *local_108;
  longlong *plStack_100;
  longlong *local_f0;
  longlong *local_e8;
  longlong *local_e0;
  longlong *local_d8;
  undefined8 uStack_d0;
  undefined2 local_c8;
  uint uStack_c6;
  undefined2 uStack_c2;
  uint uStack_c0;
  undefined4 uStack_bc;
  longlong local_b8;
  undefined8 uStack_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  longlong local_88;
  ulonglong uStack_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  if ((*(longlong *)(param_1 + 0x180) == 0) || (*(int *)(param_1 + 0x17c) == 0)) goto LAB_14031bbb0;
  puVar1 = (uint *)(param_1 + 0x178);
  uVar7 = *puVar1;
  if ((((int)uVar7 < 0) ||
      (((DAT_14c9647dc <= (int)uVar7 ||
        (lVar27 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8), lVar27 == 0)) ||
       (*(int *)(lVar27 + 0x10) != *(int *)(param_1 + 0x17c))))) ||
     ((*(uint *)(lVar27 + 8) & 0x10200000) != 0)) goto LAB_14031bbb0;
  lVar12 = 0;
  if ((*(uint *)(lVar27 + 8) & 0x10200000) == 0) {
    lVar12 = *(longlong *)(param_1 + 0x180);
  }
  lVar27 = FUN_140d53a8c(lVar12);
  if (lVar27 == 0) {
    cVar4 = FUN_140a4362c(param_1);
    if (cVar4 != '\0') goto LAB_14031a872;
    lVar27 = 0;
  }
  else {
    lVar27 = *(longlong *)(lVar27 + 0x40);
    cVar4 = FUN_140a4362c(param_1);
    if (cVar4 != '\0') {
LAB_14031a872:
      uStack_c2 = 0;
      uStack_c0 = uStack_c0 & 0xffffff00;
      uStack_c6 = 0;
      *(undefined8 *)(param_1 + 0xd8) = 0;
      *(undefined4 *)(param_1 + 0xe0) = 0;
      *(undefined8 *)(param_1 + 0xe8) = 0;
      *(undefined8 *)(param_1 + 0xf0) = 0xffffffffffffffff;
      *(undefined8 *)(param_1 + 0xf8) = 0;
      *(undefined1 *)(param_1 + 0x100) = 0;
      if (*(longlong *)(param_1 + 0x108) != 0) {
        *(undefined8 *)(param_1 + 0x118) = 0;
      }
      *(undefined8 *)(param_1 + 0x108) = 0;
      if (*(longlong *)(param_1 + 0x110) != 0) {
        *(undefined8 *)(param_1 + 0x118) = 0;
      }
      uVar11 = FUN_14477b664(0);
      uVar11 = FUN_14477b664(uVar11);
      *(undefined8 *)(param_1 + 0x110) = uVar11;
      *(undefined8 *)(param_1 + 0x118) = 0;
      *(undefined8 *)(param_1 + 0x120) = 0;
      *(undefined8 *)(param_1 + 0x128) = 0;
      *(undefined8 *)(param_1 + 0x130) = 0;
      *(undefined2 *)(param_1 + 0x138) = 0;
      *(ulonglong *)(param_1 + 0x13a) = CONCAT26(uStack_c2,CONCAT42(uStack_c6,local_c8));
      *(undefined1 *)(param_1 + 0x142) = (undefined1)uStack_c0;
      goto LAB_14031bbb0;
    }
  }
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_1 + 0xe0);
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_1 + 0xd8);
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_1 + 0xe8);
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_1 + 0xf0);
  *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(param_1 + 0xf4);
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_1 + 0xf8);
  *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(param_1 + 0xfc);
  *(undefined1 *)(param_1 + 0x90) = *(undefined1 *)(param_1 + 0x100);
  if (*(longlong *)(param_1 + 0x98) != *(longlong *)(param_1 + 0x108)) {
    *(undefined8 *)(param_1 + 0xa8) = 0;
  }
  *(longlong *)(param_1 + 0x98) = *(longlong *)(param_1 + 0x108);
  if (*(longlong *)(param_1 + 0xa0) != *(longlong *)(param_1 + 0x110)) {
    *(undefined8 *)(param_1 + 0xa8) = 0;
  }
  uVar11 = FUN_14477b664();
  uVar11 = FUN_14477b664(uVar11);
  *(undefined8 *)(param_1 + 0xa0) = uVar11;
  *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_1 + 0x118);
  *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_1 + 0x120);
  *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_1 + 0x128);
  *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(param_1 + 0x130);
  *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_1 + 0x138);
  *(undefined4 *)(param_1 + 0xcf) = *(undefined4 *)(param_1 + 0x13f);
  if (*(float *)(param_1 + 0xc4) <= 0.5 && *(float *)(param_1 + 0xc4) != 0.5) {
    *(undefined4 *)(param_1 + 0xc4) = 0;
  }
  if (lVar27 != 0) {
    FUN_143d63e34(lVar27,param_1 + 0x68,puVar1);
  }
  puVar21 = (undefined8 *)(param_1 + 0x118);
  uStack_c2 = 0;
  uStack_c0 = uStack_c0 & 0xffffff00;
  uStack_c6 = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined1 *)(param_1 + 0x100) = 0;
  if (*(longlong *)(param_1 + 0x108) != 0) {
    *puVar21 = 0;
  }
  *(undefined8 *)(param_1 + 0x108) = 0;
  if (*(longlong *)(param_1 + 0x110) != 0) {
    *puVar21 = 0;
  }
  uVar11 = FUN_14477b664(0);
  uVar11 = FUN_14477b664(uVar11);
  *(undefined8 *)(param_1 + 0x110) = uVar11;
  *puVar21 = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined2 *)(param_1 + 0x138) = 0;
  *(ulonglong *)(param_1 + 0x13a) = CONCAT26(uStack_c2,CONCAT42(uStack_c6,local_c8));
  *(undefined1 *)(param_1 + 0x142) = (undefined1)uStack_c0;
  fVar3 = *(float *)(param_1 + 0xc4);
  fVar31 = (float)FUN_140c03056(param_1);
  if (fVar31 < fVar3) {
    puVar21 = (undefined8 *)(param_1 + 0xa8);
    uStack_c2 = 0;
    uStack_c0 = uStack_c0 & 0xffffff00;
    uStack_c6 = 0;
    *(undefined8 *)(param_1 + 0x68) = 0;
    *(undefined4 *)(param_1 + 0x70) = 0;
    *(undefined8 *)(param_1 + 0x78) = 0;
    *(undefined8 *)(param_1 + 0x80) = 0xffffffffffffffff;
    *(undefined8 *)(param_1 + 0x88) = 0;
    *(undefined1 *)(param_1 + 0x90) = 0;
    if (*(longlong *)(param_1 + 0x98) != 0) {
      *puVar21 = 0;
    }
    *(undefined8 *)(param_1 + 0x98) = 0;
    if (*(longlong *)(param_1 + 0xa0) != 0) {
      *puVar21 = 0;
    }
    uVar11 = FUN_14477b664(0);
    uVar11 = FUN_14477b664(uVar11);
    *(undefined8 *)(param_1 + 0xa0) = uVar11;
    *puVar21 = 0;
    *(undefined8 *)(param_1 + 0xb0) = 0;
    *(undefined8 *)(param_1 + 0xb8) = 0;
    *(undefined8 *)(param_1 + 0xc0) = 0;
    *(undefined2 *)(param_1 + 200) = 0;
    *(ulonglong *)(param_1 + 0xca) = CONCAT26(uStack_c2,CONCAT42(uStack_c6,local_c8));
    *(undefined1 *)(param_1 + 0xd2) = (undefined1)uStack_c0;
    goto LAB_14031bbb0;
  }
  plVar18 = (longlong *)(param_1 + 0x78);
  lVar27 = param_1 + 0x98;
  lVar12 = FUN_14494f566(lVar27);
  if (((((lVar12 != 0) && (*(longlong *)(param_1 + 0x180) != 0)) &&
       ((*(int *)(param_1 + 0x17c) != 0 &&
        ((uVar7 = *puVar1, -1 < (int)uVar7 && ((int)uVar7 < DAT_14c9647dc)))))) &&
      (lVar12 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8), lVar12 != 0)) &&
     ((*(int *)(lVar12 + 0x10) == *(int *)(param_1 + 0x17c) &&
      ((*(uint *)(lVar12 + 8) & 0x10200000) == 0)))) {
    fVar3 = *(float *)(param_1 + 0xc4);
    plVar13 = (longlong *)FUN_14188dce0(param_1);
    lVar12 = FUN_140899680(lVar27);
    local_1b0 = *(longlong **)(lVar12 + 0x40);
    if (plVar13 != (longlong *)0x0) {
      if (*(char *)(param_1 + 0xd1) == '\x01') {
        if (*(char *)(param_1 + 0x200) != '\0') {
          (**(code **)(plVar13[0x21c] + 0x30))(plVar13 + 0x21c);
        }
        *(undefined8 *)(param_1 + 0x1f8) = 0;
        *(undefined2 *)(param_1 + 0x200) = 0;
        *(undefined8 *)(param_1 + 0x208) = 0x3f80000000000000;
        *(undefined4 *)(param_1 + 0x204) = 0x3f800000;
      }
      else {
        if (*(char *)(param_1 + 0x200) != '\0') {
          (**(code **)(plVar13[0x21c] + 0x30))(plVar13 + 0x21c);
        }
        *(undefined8 *)(param_1 + 0x1f8) = 0;
        *(undefined2 *)(param_1 + 0x200) = 0;
        *(undefined8 *)(param_1 + 0x208) = 0x3f80000000000000;
        *(undefined4 *)(param_1 + 0x204) = 0x3f800000;
        lVar12 = FUN_14494f566(lVar27);
        local_1a0 = plVar13;
        if (((local_1b0 == (longlong *)0x0) || (lVar12 == 0)) ||
           (pcVar14 = (char *)FUN_140100ecc(*(undefined2 *)(lVar12 + 0x28)), *pcVar14 == '\x01')) {
LAB_14031aee5:
          local_a8 = 0;
          uStack_a0 = 0;
          local_b8 = 0;
          uStack_b0 = 0;
          local_c8 = 0;
          uStack_c6 = 0;
          uStack_c2 = 0;
          uStack_c0 = 0;
          uStack_bc = 0;
          local_98 = 0x13f800000;
          uStack_90 = 0x3f800000;
        }
        else {
          lVar15 = FUN_140100ecc(*(undefined2 *)(lVar12 + 0x28));
          lVar15 = FUN_140963a30(lVar15 + 8);
          if (lVar15 == 0) {
            plVar13 = (longlong *)FUN_1400c2ca6(*(undefined2 *)(lVar12 + 0x10));
            lVar12 = plVar13[1];
            if (lVar12 == 0) {
              uVar11 = FUN_14043db3a();
              lVar12 = FUN_14477b664(uVar11);
              plVar13[1] = lVar12;
            }
            if (plVar13[2] == 0) {
              if ((lVar12 != 0) && (*plVar13 != 0)) {
                plVar16 = *(longlong **)(lVar12 + 0xb8);
                if ((plVar16 == (longlong *)0x0) ||
                   (cVar4 = (**(code **)(*plVar16 + 0x108))(plVar16), cVar4 == '\0')) {
                  plVar13[2] = 0;
                }
                else {
                  uVar11 = (**(code **)(*plVar16 + 0x110))(plVar16);
                  lVar12 = FUN_144aff482(uVar11,plVar13);
                  plVar13[2] = lVar12;
                  if (lVar12 != 0) {
                    lVar12 = plVar13[1];
                    goto LAB_14031adb3;
                  }
                }
              }
            }
            else {
LAB_14031adb3:
              plVar16 = local_1b0 + 0x17;
              if (lVar12 == 0) {
                lVar12 = FUN_14043db3a();
              }
              lVar15 = *plVar13;
              uVar17 = FUN_14477b664(lVar12);
              uVar7 = ((uint)(uVar17 >> 0x14) & 0xffff ^ (uint)(uVar17 >> 4)) * -0x7a143595;
              uVar20 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
              uVar20 = uVar20 >> 0x10 ^ uVar20;
              uVar7 = (uint)((ulonglong)lVar15 >> 0x10);
              uVar22 = (uint)lVar15 & 0xffff;
              uVar7 = uVar20 >> 0xd ^
                      (((uint)lVar15 << 0x10 | uVar22) + (int)((ulonglong)lVar15 >> 0x20) +
                       (uVar7 << 0x13 | uVar7 & 0xffff) + (uVar22 >> 4)) - uVar20;
              uVar22 = uVar7 << 8 ^ (-0x61c88647 - uVar20) - uVar7;
              uVar26 = uVar22 >> 0xd ^ (uVar20 - uVar7) - uVar22;
              uVar7 = uVar26 >> 0xc ^ (uVar7 - uVar22) - uVar26;
              uVar20 = uVar7 << 0x10 ^ (uVar22 - uVar26) - uVar7;
              uVar26 = uVar20 >> 5 ^ (uVar26 - uVar7) - uVar20;
              uVar22 = uVar26 >> 3 ^ (uVar7 - uVar20) - uVar26;
              uVar7 = uVar22 << 10 ^ (uVar20 - uVar26) - uVar22;
              iVar8 = FUN_14189004c(plVar16,uVar7 >> 0xf ^ uVar26 - (uVar22 + uVar7),plVar13);
              if ((iVar8 == -1) || (lVar12 = (longlong)iVar8 * 0x60 + *plVar16, lVar12 == 0)) {
                lVar12 = plVar13[1];
                if (lVar12 == 0) {
                  uVar11 = FUN_14043db3a();
                  lVar12 = FUN_14477b664(uVar11);
                  plVar13[1] = lVar12;
                }
                lVar15 = plVar13[2];
                if (((lVar15 == 0) && (lVar15 = 0, lVar12 != 0)) && (*plVar13 != 0)) {
                  plVar19 = *(longlong **)(lVar12 + 0xb8);
                  if ((plVar19 == (longlong *)0x0) ||
                     (cVar4 = (**(code **)(*plVar19 + 0x108))(plVar19), cVar4 == '\0')) {
                    lVar15 = 0;
                  }
                  else {
                    uVar11 = (**(code **)(*plVar19 + 0x110))(plVar19);
                    lVar15 = FUN_144aff482(uVar11,plVar13);
                  }
                  plVar13[2] = lVar15;
                }
                lVar12 = *(longlong *)(lVar15 + 0xa0);
                if (lVar12 != 0) {
                  uStack_c0 = 0;
                  uStack_bc = 0;
                  local_b8 = 0;
                  uVar11 = FUN_14043db3a();
                  local_1a8 = (longlong *)FUN_14477b664(uVar11);
                  local_198 = (longlong *)FUN_14043db3a();
                  uVar11 = FUN_14043db3a();
                  FUN_1402d1bfa(&local_d8,uVar11,lVar12);
                  plVar13 = local_d8;
                  if (local_d8 != (longlong *)0x0) {
                    local_b8 = 0;
                  }
                  local_c8 = SUB82(local_d8,0);
                  uStack_c6 = (uint)((ulonglong)local_d8 >> 0x10);
                  uVar7 = uStack_c6;
                  uStack_c2 = (undefined2)((ulonglong)local_d8 >> 0x30);
                  plVar19 = (longlong *)FUN_14043db3a();
                  if (local_198 == (longlong *)0x0) {
LAB_14031c8af:
                    plVar19 = local_198;
                  }
                  else if (plVar19 == (longlong *)0x0) {
                    plVar19 = (longlong *)0x0;
                  }
                  else if (((int)plVar19[7] <= (int)local_198[7]) &&
                          (*(longlong **)(local_198[6] + (longlong)(int)plVar19[7] * 8) ==
                           plVar19 + 6)) goto LAB_14031c8af;
                  if (local_1a8 != plVar19) {
                    local_b8 = 0;
                  }
                  uVar11 = FUN_14477b664(plVar19);
                  lVar15 = FUN_14477b664(uVar11);
                  uStack_c0 = (uint)lVar15;
                  uStack_bc = (undefined4)((ulonglong)lVar15 >> 0x20);
                  if ((lVar15 == 0 || plVar13 == (longlong *)0x0) &&
                     (lVar12 = local_b8, lVar15 == 0)) {
                    lVar15 = FUN_14043db3a();
                    lVar12 = local_b8;
                  }
                  local_b8 = lVar12;
                  uVar17 = FUN_14477b664(lVar15);
                  uVar20 = ((uint)(uVar17 >> 0x14) & 0xffff ^ (uint)(uVar17 >> 4)) * -0x7a143595;
                  uVar20 = (uVar20 >> 0xd ^ uVar20) * -0x3d4d51cb;
                  uVar20 = uVar20 >> 0x10 ^ uVar20;
                  uVar22 = (uint)plVar13 & 0xffff;
                  uVar7 = uVar20 >> 0xd ^
                          (((uint)plVar13 << 0x10 | uVar22) + (int)((ulonglong)plVar13 >> 0x20) +
                           (uVar7 << 0x13 | uVar7 & 0xffff) + (uVar22 >> 4)) - uVar20;
                  uVar22 = uVar7 << 8 ^ (-0x61c88647 - uVar20) - uVar7;
                  uVar26 = uVar22 >> 0xd ^ (uVar20 - uVar7) - uVar22;
                  uVar7 = uVar26 >> 0xc ^ (uVar7 - uVar22) - uVar26;
                  uVar20 = uVar7 << 0x10 ^ (uVar22 - uVar26) - uVar7;
                  uVar26 = uVar20 >> 5 ^ (uVar26 - uVar7) - uVar20;
                  uVar22 = uVar26 >> 3 ^ (uVar7 - uVar20) - uVar26;
                  uVar7 = uVar22 << 10 ^ (uVar20 - uVar26) - uVar22;
                  iVar8 = FUN_14189004c(plVar16,uVar7 >> 0xf ^ uVar26 - (uVar22 + uVar7),&local_c8);
                  if ((iVar8 != -1) && (lVar12 = (longlong)iVar8 * 0x60 + *plVar16, lVar12 != 0))
                  goto LAB_14031cc2c;
                }
              }
              else {
LAB_14031cc2c:
                lVar12 = lVar12 + 0x18;
                if (lVar12 != 0) goto LAB_14031c53e;
              }
            }
            goto LAB_14031aee5;
          }
          lVar12 = FUN_140100ecc(*(undefined2 *)(lVar12 + 0x28));
LAB_14031c53e:
          FUN_143c3e224(&local_c8,lVar12);
        }
        lVar12 = FUN_140963a30(&uStack_c0);
        plVar13 = local_1a0;
        if ((lVar12 != 0) && (cVar4 = FUN_1461b56d8(lVar12,local_1a0), cVar4 != '\0')) {
          if (DAT_14c950c29 == '\x01') {
            FUN_1456cec3c(lVar12);
          }
          *(longlong *)(param_1 + 0x1f8) = lVar12;
          *(undefined4 *)(param_1 + 0x20c) = (undefined4)local_98;
          *(undefined4 *)(param_1 + 0x208) = uStack_90._4_4_;
          bVar30 = true;
          if (local_98._4_1_ == '\0') {
            lVar15 = FUN_14595cadc();
            if (*(int *)(*(longlong *)(lVar12 + 0x10) + 0x38) < *(int *)(lVar15 + 0x38)) {
              bVar30 = false;
            }
            else {
              bVar30 = *(longlong *)
                        (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x30) +
                        (longlong)*(int *)(lVar15 + 0x38) * 8) == lVar15 + 0x30;
            }
          }
          *(bool *)(param_1 + 0x201) = bVar30;
          *(undefined4 *)(param_1 + 0x204) = (undefined4)uStack_90;
          if ((*(char *)(param_1 + 0x210) == '\0') && (*(float *)(param_1 + 0x208) <= 0.0)) {
            uVar6 = (**(code **)(plVar13[0x21c] + 0x20))(plVar13 + 0x21c,lVar12);
            *(undefined1 *)(param_1 + 0x200) = uVar6;
          }
        }
        if (local_a8 != 0) {
          FUN_1400020a8();
        }
      }
      if (*(char *)(param_1 + 0xd0) != '\x01') {
        lVar12 = FUN_14494f566(lVar27);
        if (lVar12 == 0) goto LAB_14031b1d4;
        uVar32 = 0x3f400000;
        if ((local_1b0 == (longlong *)0x0) ||
           (pcVar14 = (char *)FUN_140b39260(*(undefined1 *)(lVar12 + 0x2a)), *pcVar14 != '\0'))
        goto LAB_14031b10f;
        lVar15 = FUN_140b39260(*(undefined1 *)(lVar12 + 0x2a));
        if (*(longlong *)(lVar15 + 4) == 0) {
          plVar16 = (longlong *)FUN_1400c2ca6(*(undefined2 *)(lVar12 + 0x10));
          lVar15 = plVar16[1];
          if (lVar15 == 0) {
            uVar11 = FUN_14043db3a();
            lVar15 = FUN_14477b664(uVar11);
            plVar16[1] = lVar15;
          }
          if (plVar16[2] == 0) {
            lVar12 = 0;
            if ((lVar15 != 0) && (lVar12 = 0, *plVar16 != 0)) {
              plVar19 = *(longlong **)(lVar15 + 0xb8);
              if ((plVar19 == (longlong *)0x0) ||
                 (cVar4 = (**(code **)(*plVar19 + 0x108))(plVar19), cVar4 == '\0')) {
                plVar16[2] = 0;
              }
              else {
                uVar11 = (**(code **)(*plVar19 + 0x110))(plVar19);
                lVar12 = FUN_144aff482(uVar11,plVar16);
                plVar16[2] = lVar12;
                if (lVar12 != 0) {
                  lVar15 = plVar16[1];
                  goto LAB_14031afd9;
                }
              }
              goto LAB_14031b10f;
            }
          }
          else {
LAB_14031afd9:
            local_198 = local_1b0 + 0xd;
            if (lVar15 == 0) {
              lVar15 = FUN_14043db3a();
            }
            lVar12 = *plVar16;
            uVar17 = FUN_14477b664(lVar15);
            plVar19 = local_198;
            uVar7 = ((uint)(uVar17 >> 0x14) & 0xffff ^ (uint)(uVar17 >> 4)) * -0x7a143595;
            uVar20 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
            uVar20 = uVar20 >> 0x10 ^ uVar20;
            uVar7 = (uint)((ulonglong)lVar12 >> 0x10);
            uVar22 = (uint)lVar12 & 0xffff;
            uVar7 = uVar20 >> 0xd ^
                    (((uint)lVar12 << 0x10 | uVar22) + (int)((ulonglong)lVar12 >> 0x20) +
                     (uVar7 << 0x13 | uVar7 & 0xffff) + (uVar22 >> 4)) - uVar20;
            uVar22 = uVar7 << 8 ^ (-0x61c88647 - uVar20) - uVar7;
            uVar26 = uVar22 >> 0xd ^ (uVar20 - uVar7) - uVar22;
            uVar7 = uVar26 >> 0xc ^ (uVar7 - uVar22) - uVar26;
            uVar20 = uVar7 << 0x10 ^ (uVar22 - uVar26) - uVar7;
            uVar26 = uVar20 >> 5 ^ (uVar26 - uVar7) - uVar20;
            uVar22 = uVar26 >> 3 ^ (uVar7 - uVar20) - uVar26;
            uVar7 = uVar22 << 10 ^ (uVar20 - uVar26) - uVar22;
            iVar8 = FUN_14188ff18(local_198,uVar7 >> 0xf ^ uVar26 - (uVar22 + uVar7),plVar16);
            if ((iVar8 == -1) || (lVar12 = (longlong)iVar8 * 0x30 + *plVar19, lVar12 == 0)) {
              lVar12 = plVar16[1];
              if (lVar12 == 0) {
                uVar11 = FUN_14043db3a();
                lVar12 = FUN_14477b664(uVar11);
                plVar16[1] = lVar12;
              }
              lVar15 = plVar16[2];
              if (((lVar15 == 0) && (lVar15 = 0, local_1a0 = plVar13, lVar12 != 0)) &&
                 (*plVar16 != 0)) {
                plVar13 = *(longlong **)(lVar12 + 0xb8);
                if ((plVar13 == (longlong *)0x0) ||
                   (cVar4 = (**(code **)(*plVar13 + 0x108))(plVar13), cVar4 == '\0')) {
                  lVar15 = 0;
                }
                else {
                  uVar11 = (**(code **)(*plVar13 + 0x110))(plVar13);
                  lVar15 = FUN_144aff482(uVar11,plVar16);
                }
                plVar16[2] = lVar15;
                plVar13 = local_1a0;
              }
              lVar12 = *(longlong *)(lVar15 + 0xa0);
              if (lVar12 == 0) goto LAB_14031b10f;
              uStack_c0 = 0;
              uStack_bc = 0;
              local_b8 = 0;
              local_1a0 = plVar13;
              uVar11 = FUN_14043db3a();
              local_190 = (longlong *)FUN_14477b664(uVar11);
              local_1a8 = (longlong *)FUN_14043db3a();
              uVar11 = FUN_14043db3a();
              FUN_1402d1bfa(&local_d8,uVar11,lVar12);
              plVar13 = local_d8;
              if (local_d8 != (longlong *)0x0) {
                local_b8 = 0;
              }
              local_c8 = SUB82(local_d8,0);
              uStack_c6 = (uint)((ulonglong)local_d8 >> 0x10);
              uVar7 = uStack_c6;
              uStack_c2 = (undefined2)((ulonglong)local_d8 >> 0x30);
              plVar16 = (longlong *)FUN_14043db3a();
              if (local_1a8 == (longlong *)0x0) {
LAB_14031cac9:
                plVar16 = local_1a8;
              }
              else if (plVar16 == (longlong *)0x0) {
                plVar16 = (longlong *)0x0;
              }
              else if (((int)plVar16[7] <= (int)local_1a8[7]) &&
                      (*(longlong **)(local_1a8[6] + (longlong)(int)plVar16[7] * 8) == plVar16 + 6))
              goto LAB_14031cac9;
              if (local_190 != plVar16) {
                local_b8 = 0;
              }
              uVar11 = FUN_14477b664(plVar16);
              lVar15 = FUN_14477b664(uVar11);
              uStack_c0 = (uint)lVar15;
              uStack_bc = (undefined4)((ulonglong)lVar15 >> 0x20);
              if ((lVar15 == 0 || plVar13 == (longlong *)0x0) && (lVar12 = local_b8, lVar15 == 0)) {
                lVar15 = FUN_14043db3a();
                lVar12 = local_b8;
              }
              local_b8 = lVar12;
              uVar17 = FUN_14477b664(lVar15);
              uVar20 = ((uint)(uVar17 >> 0x14) & 0xffff ^ (uint)(uVar17 >> 4)) * -0x7a143595;
              uVar20 = (uVar20 >> 0xd ^ uVar20) * -0x3d4d51cb;
              uVar20 = uVar20 >> 0x10 ^ uVar20;
              uVar22 = (uint)plVar13 & 0xffff;
              uVar7 = uVar20 >> 0xd ^
                      (((uint)plVar13 << 0x10 | uVar22) + (int)((ulonglong)plVar13 >> 0x20) +
                       (uVar7 << 0x13 | uVar7 & 0xffff) + (uVar22 >> 4)) - uVar20;
              uVar22 = uVar7 << 8 ^ (-0x61c88647 - uVar20) - uVar7;
              uVar26 = uVar22 >> 0xd ^ (uVar20 - uVar7) - uVar22;
              uVar7 = uVar26 >> 0xc ^ (uVar7 - uVar22) - uVar26;
              uVar20 = uVar7 << 0x10 ^ (uVar22 - uVar26) - uVar7;
              uVar26 = uVar20 >> 5 ^ (uVar26 - uVar7) - uVar20;
              uVar22 = uVar26 >> 3 ^ (uVar7 - uVar20) - uVar26;
              uVar7 = uVar22 << 10 ^ (uVar20 - uVar26) - uVar22;
              iVar8 = FUN_14188ff18(plVar19,uVar7 >> 0xf ^ uVar26 - (uVar22 + uVar7),&local_c8);
              plVar13 = local_1a0;
              if (iVar8 == -1) {
                lVar12 = 0;
                goto LAB_14031b112;
              }
              lVar12 = (longlong)iVar8 * 0x30 + *plVar19;
              if (lVar12 == 0) goto LAB_14031b10f;
            }
            if (lVar12 == -0x18) {
LAB_14031b10f:
              lVar12 = 0;
            }
            else {
              uVar32 = *(undefined4 *)(lVar12 + 0x24);
              lVar12 = *(longlong *)(lVar12 + 0x1c);
            }
          }
        }
        else {
          lVar15 = FUN_140b39260(*(undefined1 *)(lVar12 + 0x2a));
          lVar12 = *(longlong *)(lVar15 + 4);
          uVar32 = *(undefined4 *)(lVar15 + 0xc);
        }
LAB_14031b112:
        lVar15 = FUN_140316ff8();
        if (*(int *)(lVar15 + 0x678) != *(int *)(lVar15 + 0x6a4)) {
          uVar7 = (uint)((ulonglong)lVar12 >> 0x10);
          uVar20 = (uint)lVar12 & 0xffff;
          lVar28 = lVar15 + 0x6a8;
          if (*(longlong *)(lVar15 + 0x6b0) != 0) {
            lVar28 = *(longlong *)(lVar15 + 0x6b0);
          }
          iVar8 = *(int *)(lVar28 + (ulonglong)
                                    (*(int *)(lVar15 + 0x6b8) - 1U &
                                    (int)((ulonglong)lVar12 >> 0x20) +
                                    ((uint)lVar12 << 0x10 | uVar20) +
                                    (uVar7 << 0x13 | uVar7 & 0xffff) + (uVar20 >> 4)) * 4);
          if (iVar8 != -1) {
            do {
              lVar28 = *(longlong *)(lVar15 + 0x670) + (longlong)iVar8 * 0x38;
              if (*(longlong *)(*(longlong *)(lVar15 + 0x670) + (longlong)iVar8 * 0x38) == lVar12) {
                if ((lVar28 != -8 && lVar28 != 0) && (lVar15 = FUN_148880190(), lVar15 != 0)) {
                  *(undefined4 *)(param_1 + 500) = uVar32;
                  if ((*(longlong *)(param_1 + 0x1e0) != lVar12) ||
                     (*(longlong *)(param_1 + 0x1e8) != lVar15)) {
                    if (*(char *)(param_1 + 0x1f0) != '\0') {
                      (**(code **)(plVar13[0x21c] + 0x30))(plVar13 + 0x21c);
                    }
                    *(undefined1 *)(param_1 + 0x1f0) = 0;
                    *(undefined8 *)(param_1 + 0x1e8) = 0;
                    *(longlong *)(param_1 + 0x1e0) = lVar12;
                    if (DAT_14c950c29 == '\x01') {
                      FUN_1456cec3c(lVar15);
                    }
                    *(longlong *)(param_1 + 0x1e8) = lVar15;
                    uVar11 = (**(code **)(plVar13[0x21c] + 0x50))(plVar13 + 0x21c);
                    local_a8 = 0;
                    uStack_90 = 0;
                    local_88 = 0;
                    uStack_80 = 0;
                    local_b8 = 0;
                    uStack_b0 = 0;
                    local_c8 = 0;
                    uStack_c6 = 0;
                    uStack_c2 = 0;
                    uStack_c0 = 0;
                    uStack_bc = 0;
                    uStack_a0 = 0x8000000000;
                    local_98 = 0xffffffff;
                    uVar6 = FUN_14096df60(uVar11,*(undefined8 *)(param_1 + 0x1e8),1,&local_c8);
                    *(undefined1 *)(param_1 + 0x1f0) = uVar6;
                    uStack_80 = uStack_80 & 0xffffffff00000000;
                    if (local_88 != 0) {
                      FUN_1400020a8();
                    }
                    FUN_140333f4e(&local_c8);
                  }
                  goto LAB_14031b1d4;
                }
                break;
              }
              iVar8 = *(int *)(lVar28 + 0x30);
            } while (iVar8 != -1);
          }
        }
      }
      if (*(char *)(param_1 + 0x1f0) != '\0') {
        (**(code **)(plVar13[0x21c] + 0x30))(plVar13 + 0x21c);
      }
      *(undefined1 *)(param_1 + 0x1f0) = 0;
      *(undefined8 *)(param_1 + 0x1e8) = 0;
    }
LAB_14031b1d4:
    lVar15 = FUN_14494f566(lVar27);
    lVar12 = *(longlong *)(lVar15 + 0x48);
    if (lVar12 == 0) {
      uVar11 = FUN_140067708();
      lVar12 = FUN_14477b664(uVar11);
      *(longlong *)(lVar15 + 0x48) = lVar12;
    }
    if (*(longlong *)(lVar15 + 0x50) == 0) {
      if ((lVar12 != 0) && (*(longlong *)(lVar15 + 0x40) != 0)) {
        plVar13 = *(longlong **)(lVar12 + 0xb8);
        if ((plVar13 == (longlong *)0x0) ||
           (cVar4 = (**(code **)(*plVar13 + 0x108))(plVar13), cVar4 == '\0')) {
          *(undefined8 *)(lVar15 + 0x50) = 0;
        }
        else {
          uVar11 = (**(code **)(*plVar13 + 0x110))(plVar13);
          lVar12 = FUN_144aff482(uVar11,(longlong *)(lVar15 + 0x40));
          *(longlong *)(lVar15 + 0x50) = lVar12;
          if (lVar12 != 0) goto LAB_14031b1f8;
        }
      }
      if ((*(char *)(lVar15 + 0x30) == '\x01') && (*(longlong *)(lVar15 + 0x34) != 0))
      goto LAB_14031b1f8;
    }
    else {
LAB_14031b1f8:
      if ((*(longlong **)(param_1 + 0x180) == (longlong *)0x0) || (*(int *)(param_1 + 0x17c) == 0))
      {
LAB_14031b250:
        lVar12 = 0;
      }
      else {
        uVar7 = *puVar1;
        lVar12 = 0;
        if ((-1 < (int)uVar7) && ((int)uVar7 < DAT_14c9647dc)) {
          lVar12 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
          if ((lVar12 == 0) ||
             ((*(int *)(lVar12 + 0x10) != *(int *)(param_1 + 0x17c) ||
              ((*(uint *)(lVar12 + 8) & 0x10200000) != 0)))) goto LAB_14031b250;
          lVar12 = (**(code **)(**(longlong **)(param_1 + 0x180) + 0x18))();
        }
      }
      lVar15 = lVar15 + 0x30;
      if (*(int *)(param_1 + 0x18c) == 2) {
        FUN_14026e2d4(param_1);
        FUN_14026ef16(param_1,&local_f0);
        plVar13 = local_f0;
        if (local_f0 != (longlong *)0x0) {
          local_d8 = (longlong *)0x0;
          uStack_d0 = 0;
          uVar11 = FUN_140206ee8(lVar15);
          local_1c8 = (undefined8 *)((ulonglong)local_1c8 & 0xffffffff00000000);
          FUN_14084a448(plVar13,&local_c8,uVar11,lVar12);
          plVar13 = local_f0;
          *(ulonglong *)(param_1 + 0x78) = CONCAT26(uStack_c2,CONCAT42(uStack_c6,local_c8));
          *(ulonglong *)(param_1 + 0x80) = CONCAT44(uStack_bc,uStack_c0);
          *(longlong *)(param_1 + 0x88) = local_b8;
          if (((local_f0 != (longlong *)0x0) &&
              (*(int *)(local_f0 + 0x21) = (int)local_f0[0x21] + -1, (int)local_f0[0x26] < 1)) &&
             (FUN_1400847bc(local_f0 + 0x17,0), (int)plVar13[0x21] == 0)) {
            FUN_140087e46(plVar13);
            if (*plVar13 != -1) {
              if (DAT_14cb259f8 == 0) goto LAB_14031b7df;
              FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40),plVar13);
            }
            if (DAT_14cb259f8 != 0) {
              FUN_14008869e(*(undefined8 *)(DAT_14cb259f8 + 0x30),plVar13);
            }
          }
        }
      }
      else {
        plVar13 = *(longlong **)(param_1 + 0x180);
        if ((((((plVar13 != (longlong *)0x0) && (*(int *)(param_1 + 0x17c) != 0)) &&
              (uVar7 = *puVar1, -1 < (int)uVar7)) &&
             (((int)uVar7 < DAT_14c9647dc &&
              (lVar28 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8), lVar28 != 0))
             )) && (*(int *)(lVar28 + 0x10) == *(int *)(param_1 + 0x17c))) &&
           (((*(uint *)(lVar28 + 8) & 0x10200000) == 0 &&
            ((**(code **)(*plVar13 + 0x20))(plVar13,&local_f0), plVar13 = local_f0,
            local_f0 != (longlong *)0x0)))) {
          local_d8 = (longlong *)0x0;
          uStack_d0 = 0;
          uVar11 = FUN_140206ee8(lVar15);
          local_1c8 = (undefined8 *)CONCAT44(local_1c8._4_4_,0x100000);
          FUN_14084a448(plVar13,&local_c8,uVar11,lVar12);
          plVar13 = local_f0;
          *(ulonglong *)(param_1 + 0x78) = CONCAT26(uStack_c2,CONCAT42(uStack_c6,local_c8));
          *(ulonglong *)(param_1 + 0x80) = CONCAT44(uStack_bc,uStack_c0);
          *(longlong *)(param_1 + 0x88) = local_b8;
          if ((local_f0 != (longlong *)0x0) &&
             ((*(int *)(local_f0 + 0x21) = (int)local_f0[0x21] + -1, (int)local_f0[0x26] < 1 &&
              (FUN_1400847bc(local_f0 + 0x17,0), (int)plVar13[0x21] == 0)))) {
            FUN_140087e46(plVar13);
            if (*plVar13 != -1) {
              if (DAT_14cb259f8 == 0) goto LAB_14031b3b2;
              FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40),plVar13);
            }
            if (DAT_14cb259f8 != 0) {
              FUN_14008869e(*(undefined8 *)(DAT_14cb259f8 + 0x30),plVar13);
            }
          }
        }
LAB_14031b3b2:
        cVar4 = FUN_144904448(plVar18);
        if (lVar12 != 0 && cVar4 == '\0') {
          FUN_14026e798(&local_f0,lVar12);
          if (local_f0 != (longlong *)0x0) {
            local_108 = local_f0;
            plStack_100 = local_e8;
            if (local_e8 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_e8 + 1) = (int)local_e8[1] + 1;
              UNLOCK();
            }
            lVar12 = FUN_140206ee8(lVar15,&local_108);
            if ((lVar12 != 0) &&
               (FUN_1403c747e(local_f0,&local_118,0), plVar13 = local_118,
               local_118 != (longlong *)0x0)) {
              plVar16 = (longlong *)local_f0[4];
              if ((plVar16 == (longlong *)0x0) || (*(int *)((longlong)local_f0 + 0x1c) == 0)) {
LAB_14031b732:
                plVar19 = (longlong *)0x0;
              }
              else {
                uVar7 = *(uint *)(local_f0 + 3);
                plVar19 = (longlong *)0x0;
                if ((-1 < (int)uVar7) && ((int)uVar7 < DAT_14c9647dc)) {
                  lVar15 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
                  if ((lVar15 == 0) ||
                     ((*(int *)(lVar15 + 0x10) != *(int *)((longlong)local_f0 + 0x1c) ||
                      ((*(uint *)(lVar15 + 8) & 0x10200000) != 0)))) goto LAB_14031b732;
                  if (*(code **)(*plVar16 + 0x30) == (code *)&LAB_14479b63c) {
                    plVar19 = plVar16 + -0xa4;
                    if ((longlong *)plVar16[-0x77] != (longlong *)0x0) {
                      plVar19 = (longlong *)plVar16[-0x77];
                    }
                  }
                  else {
                    plVar19 = (longlong *)(**(code **)(*plVar16 + 0x30))();
                  }
                }
              }
              local_1c8 = (undefined8 *)CONCAT44(local_1c8._4_4_,0x100000);
              FUN_14084a448(plVar13,&local_c8,lVar12,plVar19);
              plVar13 = local_118;
              *(ulonglong *)(param_1 + 0x78) = CONCAT26(uStack_c2,CONCAT42(uStack_c6,local_c8));
              *(ulonglong *)(param_1 + 0x80) = CONCAT44(uStack_bc,uStack_c0);
              *(longlong *)(param_1 + 0x88) = local_b8;
              if (((local_118 != (longlong *)0x0) &&
                  (*(int *)(local_118 + 0x21) = (int)local_118[0x21] + -1, (int)local_118[0x26] < 1)
                  ) && (FUN_1400847bc(local_118 + 0x17,0), (int)plVar13[0x21] == 0)) {
                FUN_140087e46(plVar13);
                if (*plVar13 != -1) {
                  if (DAT_14cb259f8 == 0) goto LAB_14031b7af;
                  FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40),plVar13);
                }
                if (DAT_14cb259f8 != 0) {
                  FUN_14008869e(*(undefined8 *)(DAT_14cb259f8 + 0x30),plVar13);
                }
              }
            }
          }
LAB_14031b7af:
          plVar13 = local_e8;
          if (local_e8 != (longlong *)0x0) {
            LOCK();
            plVar16 = local_e8 + 1;
            *(int *)plVar16 = (int)*plVar16 + -1;
            UNLOCK();
            if ((int)*plVar16 == 0) {
              (**(code **)*local_e8)(local_e8);
              LOCK();
              piVar2 = (int *)((longlong)plVar13 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar13 + 0x10))(plVar13);
              }
            }
          }
        }
      }
LAB_14031b7df:
      FUN_144904448(plVar18);
    }
    lVar12 = DAT_14cb7efa0;
    local_128 = (longlong *)0x0;
    uStack_120 = (longlong *)0x0;
    iVar8 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar8 == 0x40000002) {
      uVar17 = 0;
    }
    else {
      bVar30 = true;
      if ((DAT_14c86a9f8 == '\x01') && (iVar8 != 2)) {
        if (iVar8 == 1) {
          DVar9 = FUN_140ad26c0();
          DVar10 = GetCurrentThreadId();
          bVar30 = DVar9 == DVar10;
        }
        else {
          bVar30 = false;
        }
      }
      uVar17 = (ulonglong)(bVar30 ^ 1);
    }
    if (*(char *)(lVar12 + uVar17) == '\0') {
      pwVar23 = L"Disabled by cVar";
LAB_14031b8aa:
      FUN_14020fad6(&local_128,pwVar23);
      cVar4 = '\0';
    }
    else {
      if (((((*(longlong **)(param_1 + 0x180) == (longlong *)0x0) ||
            (*(int *)(param_1 + 0x17c) == 0)) || (uVar7 = *puVar1, (int)uVar7 < 0)) ||
          ((DAT_14c9647dc <= (int)uVar7 ||
           (lVar12 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8), lVar12 == 0))))
         || ((*(int *)(lVar12 + 0x10) != *(int *)(param_1 + 0x17c) ||
             (((*(uint *)(lVar12 + 8) & 0x10200000) != 0 ||
              (plVar13 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x180) + 0x18))(),
              plVar13 == (longlong *)0x0)))))) {
LAB_14031b89a:
        pwVar23 = L"Actor cannot play FaceFX";
        goto LAB_14031b8aa;
      }
      uVar11 = FUN_141419aaa();
      plVar16 = (longlong *)(**(code **)(*plVar13 + 0x288))(plVar13,uVar11);
      if (plVar16 == (longlong *)0x0) goto LAB_14031b89a;
      uVar11 = FUN_141419aaa();
      plVar19 = (longlong *)FUN_144718840(plVar16,uVar11);
      if ((plVar19 == (longlong *)0x0 || plVar16 == plVar19) ||
         (cVar4 = FUN_143c24758(plVar19), plVar16 = local_1b0, cVar4 == '\0')) goto LAB_14031b89a;
      local_1a0 = plVar19;
      local_198 = plVar13;
      if (*(int *)(param_1 + 0x18c) == 2) {
        pwVar23 = L"Distributed Speaker";
        goto LAB_14031b8aa;
      }
      local_d8 = (longlong *)0x0;
      uStack_d0 = 0;
      if (local_1b0 != (longlong *)0x0) {
        FUN_143d6a16d(local_1b0 + 0x21,&local_d8);
        if ((longlong)(int)plVar16[0x27] != 0) {
          lVar12 = local_1b0[0x26];
          lVar15 = (longlong)(int)plVar16[0x27] * 0x28;
          do {
            FUN_143d6a16d(lVar12,&local_d8);
            lVar12 = lVar12 + 0x28;
            lVar15 = lVar15 + -0x28;
          } while (lVar15 != 0);
        }
      }
      lVar12 = *(longlong *)(param_1 + 0x150);
      if (lVar12 == 0) {
        uVar11 = FUN_14043db3a();
        lVar12 = FUN_14477b664(uVar11);
        *(longlong *)(param_1 + 0x150) = lVar12;
      }
      local_1a8 = (longlong *)(param_1 + 0x148);
      lVar15 = *(longlong *)(param_1 + 0x158);
      if (lVar15 == 0) {
        if ((lVar12 != 0) && (*local_1a8 != 0)) {
          plVar13 = *(longlong **)(lVar12 + 0xb8);
          if ((plVar13 == (longlong *)0x0) ||
             (cVar4 = (**(code **)(*plVar13 + 0x108))(plVar13), cVar4 == '\0')) {
            *(undefined8 *)(param_1 + 0x158) = 0;
          }
          else {
            uVar11 = (**(code **)(*plVar13 + 0x110))(plVar13);
            lVar15 = FUN_144aff482(uVar11,local_1a8);
            *(longlong *)(param_1 + 0x158) = lVar15;
            if (lVar15 != 0) {
              lVar12 = *(longlong *)(param_1 + 0x150);
              goto LAB_14031bf6b;
            }
          }
        }
      }
      else {
LAB_14031bf6b:
        if (lVar12 == 0) {
          uVar11 = FUN_14043db3a();
          lVar12 = FUN_14477b664(uVar11);
          *(longlong *)(param_1 + 0x150) = lVar12;
          lVar15 = *(longlong *)(param_1 + 0x158);
          if (((lVar15 == 0) && (lVar15 = 0, lVar12 != 0)) && (*local_1a8 != 0)) {
            plVar13 = *(longlong **)(lVar12 + 0xb8);
            if ((plVar13 == (longlong *)0x0) ||
               (cVar4 = (**(code **)(*plVar13 + 0x108))(plVar13), cVar4 == '\0')) {
              lVar15 = 0;
            }
            else {
              uVar11 = (**(code **)(*plVar13 + 0x110))(plVar13);
              lVar15 = FUN_144aff482(uVar11,local_1a8);
            }
            *(longlong *)(param_1 + 0x158) = lVar15;
          }
        }
        if ((longlong)*(int *)(lVar15 + 0x98) != 0) {
          lVar12 = *(longlong *)(lVar15 + 0x90);
          lVar15 = (longlong)*(int *)(lVar15 + 0x98) * 0x28;
          do {
            FUN_143d6a16d(lVar12,&local_d8);
            lVar12 = lVar12 + 0x28;
            lVar15 = lVar15 + -0x28;
          } while (lVar15 != 0);
        }
      }
      if (local_1b0 == (longlong *)0x0) {
        local_e0 = (longlong *)0x0;
      }
      else {
        puVar24 = &DAT_14c9485f0;
        if ((undefined4 *)local_1b0[1] != (undefined4 *)0x0) {
          puVar24 = (undefined4 *)local_1b0[1];
        }
        if (DAT_14c947fe0 == 0) {
          lVar12 = FUN_14001cc68(0x140,0x10);
          FUN_1456b2032(lVar12);
          DAT_14c947fe0 = lVar12;
        }
        FUN_140045924(DAT_14c947fe0,&local_e0,puVar24,1);
      }
      plVar13 = *(longlong **)(param_1 + 0xb8);
      local_f0 = local_e0;
      local_e8 = plVar13;
      if (plVar13 == (longlong *)0x0) {
        FUN_1465510da(&local_f0,&local_108);
        plVar13 = local_108;
        plVar16 = (longlong *)&DAT_149dfb77a;
        if ((int)plStack_100 != 0) {
          plVar16 = local_108;
        }
        FUN_140002266(&local_c8,L"Could not resolve full animation name: %s",plVar16);
        if (local_128 != (longlong *)0x0) {
          FUN_1400020a8();
        }
        local_128 = (longlong *)CONCAT26(uStack_c2,CONCAT42(uStack_c6,local_c8));
        uStack_120 = (longlong *)CONCAT44(uStack_bc,uStack_c0);
        local_c8 = 0;
        uStack_c6 = 0;
        uStack_c2 = 0;
        uStack_c0 = 0;
        uStack_bc = 0;
joined_r0x00014031c62d:
        if (plVar13 != (longlong *)0x0) {
          FUN_1400020a8(plVar13);
        }
LAB_14031cf98:
        iVar8 = 0;
      }
      else {
        if ((longlong)(int)uStack_d0 == 0) {
          if (local_1b0 == (longlong *)0x0) {
            local_c8 = 0;
            uStack_c6 = 0;
            uStack_c2 = 0;
            uStack_c0 = 0;
            uStack_bc = 0;
          }
          else {
            puVar24 = &DAT_14c9485f0;
            if ((undefined4 *)local_1b0[1] != (undefined4 *)0x0) {
              puVar24 = (undefined4 *)local_1b0[1];
            }
            local_c8 = 0;
            uStack_c6 = 0;
            uStack_c2 = 0;
            uStack_c0 = 0;
            uStack_bc = 0;
            FUN_1400b2348(puVar24,&local_c8,1);
          }
          lVar12 = *(longlong *)(param_1 + 0x150);
          if (lVar12 == 0) {
            uVar11 = FUN_14043db3a();
            lVar12 = FUN_14477b664(uVar11);
            *(longlong *)(param_1 + 0x150) = lVar12;
          }
          lVar15 = *(longlong *)(param_1 + 0x158);
          if (lVar15 == 0) {
            if ((lVar12 != 0) && (*local_1a8 != 0)) {
              plVar13 = *(longlong **)(lVar12 + 0xb8);
              if ((plVar13 == (longlong *)0x0) ||
                 (cVar4 = (**(code **)(*plVar13 + 0x108))(plVar13), cVar4 == '\0')) {
                *(undefined8 *)(param_1 + 0x158) = 0;
              }
              else {
                uVar11 = (**(code **)(*plVar13 + 0x110))(plVar13);
                lVar15 = FUN_144aff482(uVar11,local_1a8);
                *(longlong *)(param_1 + 0x158) = lVar15;
                if (lVar15 != 0) {
                  lVar12 = *(longlong *)(param_1 + 0x150);
                  goto LAB_14031c3c6;
                }
              }
            }
            local_108 = (longlong *)0x0;
            plStack_100 = (longlong *)0x0;
LAB_14031cf1c:
            plVar13 = (longlong *)&DAT_149dfb77a;
          }
          else {
LAB_14031c3c6:
            if (lVar12 == 0) {
              uVar11 = FUN_14043db3a();
              lVar12 = FUN_14477b664(uVar11);
              *(longlong *)(param_1 + 0x150) = lVar12;
              lVar15 = *(longlong *)(param_1 + 0x158);
              if (((lVar15 == 0) && (lVar15 = 0, lVar12 != 0)) && (*local_1a8 != 0)) {
                plVar13 = *(longlong **)(lVar12 + 0xb8);
                if ((plVar13 == (longlong *)0x0) ||
                   (cVar4 = (**(code **)(*plVar13 + 0x108))(plVar13), cVar4 == '\0')) {
                  lVar15 = 0;
                }
                else {
                  uVar11 = (**(code **)(*plVar13 + 0x110))(plVar13);
                  lVar15 = FUN_144aff482(uVar11,local_1a8);
                }
                *(longlong *)(param_1 + 0x158) = lVar15;
              }
            }
            puVar24 = &DAT_14c9485f0;
            if (*(undefined4 **)(lVar15 + 8) != (undefined4 *)0x0) {
              puVar24 = *(undefined4 **)(lVar15 + 8);
            }
            local_108 = (longlong *)0x0;
            plStack_100 = (longlong *)0x0;
            FUN_1400b2348(puVar24,&local_108,1);
            plVar13 = local_108;
            if ((int)plStack_100 == 0) goto LAB_14031cf1c;
          }
          if (uStack_c0 == 0) {
            puVar29 = &DAT_149dfb77a;
          }
          else {
            puVar29 = (undefined2 *)CONCAT26(uStack_c2,CONCAT42(uStack_c6,local_c8));
          }
          FUN_140002266(&local_118,L"No FaceFXAnimSets associated with Script (%s) or Nametag (%s)",
                        puVar29,plVar13);
          if (local_128 != (longlong *)0x0) {
            FUN_1400020a8();
          }
          local_128 = local_118;
          uStack_120 = (longlong *)CONCAT44(uStack_10c,iStack_110);
          if (local_108 != (longlong *)0x0) {
            FUN_1400020a8();
          }
          plVar13 = (longlong *)CONCAT26(uStack_c2,CONCAT42(uStack_c6,local_c8));
          goto joined_r0x00014031c62d;
        }
        plVar19 = local_d8 + (int)uStack_d0;
        plVar16 = local_d8;
        do {
          lVar12 = *plVar16;
          if ((longlong)*(int *)(lVar12 + 0x38) != 0) {
            puVar21 = *(undefined8 **)(lVar12 + 0x30);
            lVar15 = (longlong)*(int *)(lVar12 + 0x38) << 5;
            do {
              if ((local_e0 == (longlong *)*puVar21) && (plVar13 == (longlong *)puVar21[1])) {
                if (puVar21 != (undefined8 *)0x0) {
                  uVar11 = *(undefined8 *)(param_1 + 0x78);
                  local_c8 = (undefined2)uVar11;
                  uStack_c6 = (uint)((ulonglong)uVar11 >> 0x10);
                  uStack_c2 = (undefined2)((ulonglong)uVar11 >> 0x30);
                  uStack_c0 = (uint)*(undefined8 *)(param_1 + 0x80);
                  uStack_bc = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x80) >> 0x20);
                  local_b8 = *(longlong *)(param_1 + 0x88);
                  local_1b8 = local_198;
                  local_1c0 = &local_c8;
                  local_1c8 = (undefined8 *)((ulonglong)local_1c8 & 0xffffffffffffff00);
                  cVar4 = (**(code **)(*local_1a0 + 0x30))(local_1a0,lVar12,local_e0,plVar13);
                  if (cVar4 != '\0') {
                    iVar8 = 1;
                    if ((fVar3 != 0.0) || (NAN(fVar3))) {
                      FUN_146231f7a(local_1a0,fVar3);
                    }
                    goto LAB_14031cfa8;
                  }
                }
                break;
              }
              puVar21 = puVar21 + 4;
              lVar15 = lVar15 + -0x20;
            } while (lVar15 != 0);
          }
          plVar16 = plVar16 + 1;
        } while (plVar16 != plVar19);
        FUN_1465510da(&local_f0,&local_118);
        plVar13 = local_118;
        plVar16 = (longlong *)&DAT_149dfb77a;
        if (iStack_110 != 0) {
          plVar16 = local_118;
        }
        FUN_140002266(&local_108,L"Could not find animation %s\n",plVar16);
        if (local_128 != (longlong *)0x0) {
          FUN_1400020a8();
        }
        local_128 = local_108;
        uStack_120 = plStack_100;
        local_108 = (longlong *)0x0;
        plStack_100 = (longlong *)0x0;
        if (plVar13 != (longlong *)0x0) {
          FUN_1400020a8(plVar13);
        }
        FUN_1400020e8(&local_128,L"AnimSets:",9);
        local_1b0 = local_d8;
        local_1a0 = (longlong *)(longlong)(int)uStack_d0;
        iVar8 = 0;
        if (local_1a0 != (longlong *)0x0) {
          local_1a0 = (longlong *)((longlong)local_1a0 << 3);
          plVar13 = (longlong *)0x0;
          do {
            lVar12 = *(longlong *)((longlong)local_1b0 + (longlong)plVar13);
            FUN_1400020e8(&local_128,&DAT_149e01f72,1);
            local_118 = *(longlong **)(lVar12 + 0x18);
            FUN_1400021e4(&local_118,&local_108);
            iVar25 = (int)plStack_100 + -1;
            if ((int)plStack_100 == 0) {
              iVar25 = iVar8;
            }
            FUN_1400020e8(&local_128,local_108,iVar25);
            if (local_108 != (longlong *)0x0) {
              FUN_1400020a8();
            }
            plVar13 = plVar13 + 1;
          } while (local_1a0 != plVar13);
          goto LAB_14031cf98;
        }
      }
LAB_14031cfa8:
      cVar4 = (char)iVar8;
      local_1b0 = local_d8;
      if (local_d8 != (longlong *)0x0) {
        FUN_1400020a8(local_d8);
      }
    }
    if ((cVar4 == '\0') && ((int)uStack_120 < 2)) {
      FUN_14020fad6(&local_128,L"Unknown");
    }
    if ((((cVar4 == '\0' && fVar3 != 0.0) &&
         (plVar13 = (longlong *)*plVar18, plVar13 != (longlong *)0x0)) &&
        (*(longlong *)(param_1 + 0x80) != -1)) && (*plVar13 == *(longlong *)(param_1 + 0x80))) {
      *(int *)(plVar13 + 0x21) = (int)plVar13[0x21] + 1;
      FUN_140942c40(plVar13,*(undefined8 *)(param_1 + 0x88),fVar3 * 0.001,0);
      *(int *)(plVar13 + 0x21) = (int)plVar13[0x21] + -1;
      if (((int)plVar13[0x26] < 1) && (FUN_1400847bc(plVar13 + 0x17,0), (int)plVar13[0x21] == 0)) {
        FUN_140087e46(plVar13);
        if (*plVar13 != -1) {
          if (DAT_14cb259f8 == 0) goto LAB_14031b961;
          FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40),plVar13);
        }
        if (DAT_14cb259f8 != 0) {
          FUN_14008869e(*(undefined8 *)(DAT_14cb259f8 + 0x30),plVar13);
        }
      }
    }
LAB_14031b961:
    if (local_128 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  plVar18 = (longlong *)*plVar18;
  if (((plVar18 != (longlong *)0x0) && (*(longlong *)(param_1 + 0x80) != -1)) &&
     (*plVar18 == *(longlong *)(param_1 + 0x80))) {
    *(int *)(plVar18 + 0x21) = (int)plVar18[0x21] + 1;
    if ((int)plVar18[7] != 3) {
      FUN_1446efa72(plVar18 + 6,0,3,0x10);
      *(undefined4 *)(plVar18 + 7) = 3;
    }
    puVar21 = (undefined8 *)plVar18[6];
    *puVar21 = &PTR_LAB_14b40aa60;
    LOCK();
    UNLOCK();
    lVar15 = DAT_14c758608 + 1;
    lVar12 = DAT_14c758608 + 1;
    if (lVar15 == 0) {
      LOCK();
      UNLOCK();
      lVar15 = DAT_14c758608 + 2;
      lVar12 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar12;
    puVar21[2] = lVar15;
    *puVar21 = &PTR_FUN_14b40a9f0;
    puVar21[3] = 0;
    if (param_1 == 0) {
      iVar8 = 0;
    }
    else {
      uVar7 = *(uint *)(param_1 + 0xc);
      *(uint *)(puVar21 + 3) = uVar7;
      if ((int)uVar7 < DAT_14c9647dc) {
        lVar12 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
      }
      else {
        lVar12 = 0;
      }
      iVar8 = *(int *)(lVar12 + 0x10);
      if (*(int *)(lVar12 + 0x10) == 0) {
        LOCK();
        iVar8 = DAT_14c964868 + 1;
        UNLOCK();
        iVar25 = DAT_14c964868 + 1;
        bVar30 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar8;
        if (bVar30) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar25);
        }
        LOCK();
        iVar8 = *(int *)(lVar12 + 0x10);
        bVar30 = iVar8 == 0;
        if (bVar30) {
          *(int *)(lVar12 + 0x10) = iVar25;
          iVar8 = 0;
        }
        UNLOCK();
        if (bVar30) {
          iVar8 = iVar25;
        }
      }
    }
    *(int *)((longlong)puVar21 + 0x1c) = iVar8;
    puVar21[4] = FUN_14887ffb2;
    *(int *)(plVar18 + 0x21) = (int)plVar18[0x21] + -1;
    if (((int)plVar18[0x26] < 1) && (FUN_1400847bc(plVar18 + 0x17,0), (int)plVar18[0x21] == 0)) {
      FUN_140087e46(plVar18);
      if (*plVar18 != -1) {
        if (DAT_14cb259f8 == 0) goto LAB_14031ba8d;
        FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40),plVar18);
      }
      if (DAT_14cb259f8 != 0) {
        FUN_14008869e(*(undefined8 *)(DAT_14cb259f8 + 0x30),plVar18);
      }
    }
  }
LAB_14031ba8d:
  cVar4 = FUN_143d69ff6(param_1);
  if (cVar4 != '\0') {
    FUN_140c02ae6(param_1);
  }
  cVar4 = FUN_140c0309c(param_1 + 0x68);
  if (((((cVar4 != '\0') || (*(int *)(param_1 + 0x18c) == 3)) ||
       (*(char *)(param_1 + 400) == '\x01')) &&
      ((lVar12 = (**(code **)(**(longlong **)(param_1 + 0x180) + 0x18))(), lVar12 != 0 &&
       (plVar18 = (longlong *)FUN_14034eff0(lVar12), plVar18 != (longlong *)0x0)))) &&
     ((plVar18 = (longlong *)(**(code **)(*plVar18 + 0x480))(plVar18), plVar18 != (longlong *)0x0 &&
      (lVar12 = FUN_14494f566(lVar27), lVar12 != 0)))) {
    lVar12 = *(longlong *)(param_1 + 0x150);
    if (lVar12 == 0) {
      uVar11 = FUN_14043db3a();
      lVar12 = FUN_14477b664(uVar11);
      *(longlong *)(param_1 + 0x150) = lVar12;
    }
    plVar13 = (longlong *)(param_1 + 0x148);
    if (*(longlong *)(param_1 + 0x158) == 0) {
      if ((lVar12 != 0) && (*plVar13 != 0)) {
        plVar16 = *(longlong **)(lVar12 + 0xb8);
        if ((plVar16 == (longlong *)0x0) ||
           (cVar4 = (**(code **)(*plVar16 + 0x108))(plVar16), cVar4 == '\0')) {
          *(undefined8 *)(param_1 + 0x158) = 0;
        }
        else {
          uVar11 = (**(code **)(*plVar16 + 0x110))(plVar16);
          lVar12 = FUN_144aff482(uVar11,plVar13);
          *(longlong *)(param_1 + 0x158) = lVar12;
          if (lVar12 != 0) goto LAB_14031bbf5;
        }
      }
    }
    else {
LAB_14031bbf5:
      lVar12 = FUN_14494f566(lVar27);
      puVar24 = &DAT_14c763940;
      if ((DAT_14cb7f870 != 0) &&
         ((int)(uint)*(byte *)(lVar12 + 0x2c) < *(int *)(DAT_14cb7f870 + 0x3a8))) {
        puVar24 = (undefined4 *)
                  ((ulonglong)*(byte *)(lVar12 + 0x2c) * 0x10 + *(longlong *)(DAT_14cb7f870 + 0x3a0)
                  );
      }
      cVar4 = *(char *)((longlong)puVar24 + 0xd);
      uVar32 = *(undefined4 *)(param_1 + 0x68);
      local_140 = *(undefined8 *)(param_1 + 0x78);
      local_138 = *(undefined8 *)(param_1 + 0x80);
      local_130 = *(undefined8 *)(param_1 + 0x88);
      lVar27 = FUN_14494f566(lVar27);
      uVar11 = FUN_14587963c(*(undefined1 *)(lVar27 + 0x2b));
      local_158 = 0;
      uStack_150 = 0;
      local_148 = 0;
      FUN_1401f3db8(&local_158,uVar11);
      lVar27 = *(longlong *)(param_1 + 0x150);
      if (lVar27 == 0) {
        uVar11 = FUN_14043db3a();
        lVar27 = FUN_14477b664(uVar11);
        *(longlong *)(param_1 + 0x150) = lVar27;
      }
      lVar12 = *(longlong *)(param_1 + 0x158);
      if (((lVar12 == 0) && (lVar12 = 0, lVar27 != 0)) && (*plVar13 != 0)) {
        plVar16 = *(longlong **)(lVar27 + 0xb8);
        if ((plVar16 == (longlong *)0x0) ||
           (cVar5 = (**(code **)(*plVar16 + 0x108))(plVar16), cVar5 == '\0')) {
          lVar12 = 0;
        }
        else {
          uVar11 = (**(code **)(*plVar16 + 0x110))(plVar16);
          lVar12 = FUN_144aff482(uVar11,plVar13);
        }
        *(longlong *)(param_1 + 0x158) = lVar12;
      }
      local_170 = *(undefined8 *)(lVar12 + 0x28);
      uVar11 = FUN_14477b664(*(undefined8 *)(lVar12 + 0x30));
      local_168 = FUN_14477b664(uVar11);
      local_160 = *(undefined8 *)(lVar12 + 0x38);
      local_188 = *puVar1;
      uStack_184 = *(undefined4 *)(param_1 + 0x17c);
      uStack_180 = *(undefined4 *)(param_1 + 0x180);
      uStack_17c = *(undefined4 *)(param_1 + 0x184);
      local_1b8 = (longlong *)CONCAT71(local_1b8._1_7_,cVar4 == '\x02');
      local_1c0 = (undefined2 *)CONCAT44(local_1c0._4_4_,uVar32);
      local_1c8 = &local_140;
      (**(code **)(*plVar18 + 0x10))(plVar18,&local_188,&local_170,&local_158);
    }
  }
  if (0 < *(int *)(param_1 + 0x50)) {
    FUN_1447cd2ec(param_1 + 0x48,0);
  }
LAB_14031bbb0:
  if ((local_70 ^ (ulonglong)auStack_1e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14031cffa FUN_14031cffa body=435 status=ok
// SIG undefined FUN_14031cffa(void)

void FUN_14031cffa(longlong param_1,longlong param_2,char param_3)

{
  float fVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  double dVar12;
  double dVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  
  uVar14 = 0;
  uVar15 = 0;
  if ((((*(int *)(param_1 + 0x24c) != 0) && (uVar5 = *(uint *)(param_1 + 0x248), -1 < (int)uVar5))
      && ((int)uVar5 < DAT_14c9647dc)) &&
     (((plVar9 = (longlong *)
                 ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8)),
       plVar9 != (longlong *)0x0 && ((int)plVar9[2] == *(int *)(param_1 + 0x24c))) &&
      (((*(uint *)(plVar9 + 1) & 0x10200000) == 0 && (*plVar9 != 0)))))) {
    uVar2 = *(undefined8 *)(*plVar9 + 0x6e8);
    uVar14 = (undefined4)uVar2;
    uVar15 = (undefined4)((ulonglong)uVar2 >> 0x20);
  }
  if ((longlong)*(int *)(param_1 + 0x228) != 0) {
    lVar11 = *(longlong *)(param_1 + 0x220);
    lVar7 = (longlong)*(int *)(param_1 + 0x228) * 0x80 + lVar11;
    do {
      iVar4 = *(int *)(lVar11 + 0x78);
      if ((longlong)iVar4 != 0) {
        lVar3 = *(longlong *)(lVar11 + 0x70);
        iVar8 = 1;
        lVar10 = 0;
        lVar6 = 0;
        do {
          if (*(int *)(lVar3 + lVar10) == *(int *)(param_2 + 4)) {
            if (iVar8 != 0) {
              iVar8 = iVar4 - iVar8;
              if (iVar8 != 0) {
                if (0 < iVar8) {
                  iVar8 = 1;
                }
                memmove((void *)(lVar3 + (lVar6 >> 0x20) * 4),
                        (void *)(lVar3 + (longlong)(iVar4 - iVar8) * 4),(longlong)iVar8 << 2);
                iVar4 = *(int *)(lVar11 + 0x78);
              }
              *(int *)(lVar11 + 0x78) = iVar4 + -1;
              if (param_3 != '\0') {
                uVar5 = rand();
                fVar1 = *(float *)(lVar11 + 0x58);
                dVar12 = (double)(float)(-(uint)(fVar1 <= *(float *)(lVar11 + 0x5c)) &
                                        (uint)((*(float *)(lVar11 + 0x5c) - fVar1) *
                                               ((float)(uVar5 & 0x7fff) / 32767.0) + fVar1)) +
                         (double)CONCAT44(uVar15,uVar14);
                dVar13 = *(double *)(lVar11 + 0x60);
                if (*(double *)(lVar11 + 0x60) <= dVar12) {
                  dVar13 = dVar12;
                }
                *(double *)(lVar11 + 0x60) = dVar13;
              }
            }
            break;
          }
          lVar6 = lVar6 + 0x100000000;
          iVar8 = iVar8 + 1;
          lVar10 = lVar10 + 4;
        } while ((longlong)iVar4 << 2 != lVar10);
      }
      lVar11 = lVar11 + 0x80;
    } while (lVar11 != lVar7);
  }
  return;
}



// FUNCTION 14031d1ae FUN_14031d1ae body=136 status=ok
// SIG undefined FUN_14031d1ae(void)

void FUN_14031d1ae(longlong *param_1,int param_2,int param_3)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  undefined4 *puVar7;
  
  if (param_3 != 0) {
    lVar2 = *param_1;
    puVar7 = (undefined4 *)((longlong)param_2 * 0x68 + lVar2 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x68) = param_2;
      }
      puVar7[-1] = 0xffffffff;
      if (*(int *)((longlong)param_1 + 0x34) < 1) {
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = (undefined4)param_1[6];
      }
      *puVar7 = uVar4;
      *(int *)(param_1 + 6) = param_2;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      plVar5 = (longlong *)param_1[4];
      if ((longlong *)param_1[4] == (longlong *)0x0) {
        plVar5 = param_1 + 2;
      }
      iVar6 = param_2 + 0x1f;
      if (-1 < param_2) {
        iVar6 = param_2;
      }
      bVar3 = (byte)param_2 & 0x1f;
      puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar6 >> 5) * 4);
      *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
      param_2 = param_2 + 1;
      puVar7 = puVar7 + 0x1a;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14031d236 FUN_14031d236 body=57 status=ok
// SIG undefined FUN_14031d236(void)

longlong FUN_14031d236(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0xb0);
  if (plVar1 == (longlong *)0x0) {
    FUN_14031d286(param_1,param_2);
  }
  else {
    (**(code **)(*plVar1 + 0x2b0))(plVar1,param_1);
  }
  return param_1;
}



// FUNCTION 14031d286 FUN_14031d286 body=656 status=ok
// SIG undefined FUN_14031d286(void)

undefined8 FUN_14031d286(longlong *param_1,ulonglong *param_2)

{
  undefined4 *puVar1;
  ulonglong *puVar2;
  bool bVar3;
  uint uVar4;
  longlong *plVar5;
  uint *puVar6;
  ulonglong uVar7;
  undefined2 *puVar8;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_3c;
  undefined2 *local_38;
  undefined8 uStack_30;
  char local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    if ((*(byte *)(param_1 + 5) & 4) == 0) goto LAB_14031d4a1;
    puVar6 = (uint *)FUN_1400760d0(&DAT_14c87eb00,(int)*param_2);
    if (puVar6 == (uint *)0x0) {
      bVar3 = false;
    }
    else {
      bVar3 = *(int *)((longlong)param_2 + 4) == 0 && *puVar6 < 0x44d;
    }
    local_3c = CONCAT31(local_3c._1_3_,bVar3);
    (**(code **)(*param_1 + 0x178))(param_1,&local_3c,1);
    if ((puVar6 != (uint *)0x0) && ((char)local_3c != '\0')) {
      local_38 = (undefined2 *)CONCAT44(local_38._4_4_,*puVar6);
      (**(code **)(*param_1 + 0x188))(param_1);
      goto LAB_14031d4a1;
    }
    FUN_14029eeae(param_2,&local_38);
    local_48 = *(undefined4 *)((longlong)param_2 + 4);
    plVar5 = (longlong *)FUN_14021219d(param_1,&local_38);
    puVar2 = (ulonglong *)plVar5[1];
    if (puVar2[1] < *puVar2 + 4) {
      if ((*(byte *)((longlong)plVar5 + 0x2a) & 2) == 0) {
        (**(code **)(*plVar5 + 0x170))(plVar5,&local_48,4);
      }
      else {
        FUN_14572512c(plVar5,&local_48);
      }
    }
    else {
      *puVar2 = *puVar2 + 4;
    }
  }
  else {
    local_21 = '\0';
    (**(code **)(*param_1 + 0x178))(param_1,&local_21,1);
    if (local_21 != '\0') {
      uVar4 = (**(code **)(*param_1 + 0x48))(param_1);
      if (uVar4 < 6) {
        (**(code **)(*param_1 + 0x180))(param_1,&local_38,0x44d);
      }
      else {
        (**(code **)(*param_1 + 0x188))();
      }
      uVar7 = (ulonglong)local_38 & 0xffffffff;
      if (uVar7 < 0x3f5) {
        if (uVar7 == 0) {
          uVar7 = 0;
        }
        else {
          if (DAT_14c87ead8 == '\0') {
            FUN_140024d3a(&DAT_14c87eb00);
            DAT_14c87ead8 = '\x01';
          }
          uVar7 = (ulonglong)*(uint *)(&DAT_14c892b40 + uVar7 * 4);
        }
        *param_2 = uVar7;
      }
      else {
        FUN_14572541c(param_1);
      }
      goto LAB_14031d4a1;
    }
    local_38 = (undefined2 *)0x0;
    uStack_30 = 0;
    plVar5 = (longlong *)FUN_14021219d(param_1);
    puVar2 = (ulonglong *)plVar5[1];
    puVar1 = (undefined4 *)*puVar2 + 1;
    if ((undefined4 *)puVar2[1] < puVar1) {
      if ((*(byte *)((longlong)plVar5 + 0x2a) & 2) == 0) {
        (**(code **)(*plVar5 + 0x170))(plVar5,&local_3c,4);
      }
      else {
        FUN_14572512c(plVar5,&local_3c);
      }
    }
    else {
      local_3c = *(undefined4 *)*puVar2;
      *puVar2 = (ulonglong)puVar1;
    }
    puVar8 = local_38;
    if ((int)uStack_30 == 0) {
      puVar8 = &DAT_149dfb77a;
    }
    FUN_14495448a(&local_48,puVar8,local_3c);
    *param_2 = CONCAT44(uStack_44,local_48);
  }
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
LAB_14031d4a1:
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 1;
}



// FUNCTION 14031d518 FUN_14031d518 body=406 status=ok
// SIG undefined FUN_14031d518(void)

void FUN_14031d518(longlong *param_1,uint *param_2)

{
  int iVar1;
  bool bVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  undefined1 auStack_78 [32];
  uint auStack_58 [8];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar7 = *param_2;
  uVar6 = 0;
  uVar5 = 0;
  do {
    uVar8 = uVar5;
    bVar2 = 0x7f < uVar7;
    auStack_58[uVar8] = (uint)bVar2 + (uVar7 & 0x7f) * 2;
    uVar7 = uVar7 >> 7;
    uVar6 = uVar6 + 8;
    uVar5 = uVar8 + 1;
  } while (bVar2 || uVar8 + 1 == 0);
  uVar9 = param_1[0x14];
  lVar11 = uVar9 + uVar6;
  if (param_1[0x15] < lVar11) {
    if ((char)param_1[0x16] != '\x01') {
      lVar11 = (**(code **)(*param_1 + 8))(param_1);
      do {
        *(byte *)(lVar11 + 0x29) = *(byte *)(lVar11 + 0x29) | 2;
        lVar11 = *(longlong *)(lVar11 + 0x88);
      } while (lVar11 != 0);
      goto LAB_14031d68b;
    }
    lVar10 = param_1[0x15] * 2;
    if (lVar10 < lVar11) {
      lVar10 = lVar11;
    }
    param_1[0x15] = lVar10;
    iVar1 = (int)param_1[0x13];
    iVar12 = (int)(lVar10 + 7U >> 3);
    *(int *)(param_1 + 0x13) = iVar12;
    uVar7 = iVar12 - iVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0x9c) - iVar1) < uVar7) {
      FUN_1447403be(param_1 + 0x12);
    }
    memset((void *)((longlong)iVar1 + param_1[0x12]),0,(longlong)(int)uVar7);
    uVar9 = param_1[0x14];
    lVar11 = uVar6 + uVar9;
  }
  bVar4 = (byte)uVar9 & 7;
  bVar3 = (byte)(-1 << bVar4);
  param_1[0x14] = lVar11;
  lVar10 = ((longlong)uVar9 >> 3) + param_1[0x12];
  lVar11 = 0;
  do {
    uVar7 = auStack_58[lVar11];
    *(byte *)(lVar10 + lVar11) = (byte)(uVar7 << bVar4) | *(byte *)(lVar10 + lVar11) & ~bVar3;
    if ((uVar9 & 7) != 0) {
      *(byte *)(lVar10 + 1 + lVar11) =
           (byte)(uVar7 >> (8 - bVar4 & 0x1f)) | *(byte *)(lVar10 + 1 + lVar11) & bVar3;
    }
    lVar11 = lVar11 + 1;
  } while ((ulonglong)uVar8 + 1 != lVar11);
LAB_14031d68b:
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14031d6b0 FUN_14031d6b0 body=88 status=ok
// SIG undefined FUN_14031d6b0(void)

void FUN_14031d6b0(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_144954686(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x48 + *param_1;
  *(undefined8 *)(lVar2 + 0x20) = 0;
  *(undefined8 *)(lVar2 + 0x28) = 0x400000000;
  *(undefined8 *)(lVar2 + 0x30) = 0;
  *(undefined8 *)(lVar2 + 0x38) = 0;
  *(undefined8 *)(lVar2 + 0x40) = 0;
  return;
}



// FUNCTION 14031d708 FUN_14031d708 body=69 status=ok
// SIG undefined FUN_14031d708(void)

undefined8 * FUN_14031d708(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*(longlong *)(param_1 + 0x960) + 0xd0))(param_1 + 0x960);
  if (lVar1 == 0) {
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    FUN_14031d74e(lVar1,param_2);
  }
  return param_2;
}



// FUNCTION 14031d74e FUN_14031d74e body=453 status=ok
// SIG undefined FUN_14031d74e(void)

undefined8 * FUN_14031d74e(longlong *param_1,undefined8 *param_2)

{
  float fVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  uint *puVar10;
  int iVar11;
  int iVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  int iVar16;
  ulonglong uVar17;
  uint uVar18;
  int iVar19;
  longlong lVar20;
  longlong lVar21;
  
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined1 *)(param_2 + 2) = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  plVar9 = (longlong *)(**(code **)(*param_1 + 0x10))();
  iVar2 = (int)plVar9[5];
  if (iVar2 == 0) {
    uVar13 = 1;
    uVar15 = 0;
    iVar16 = 0;
    iVar19 = 0;
  }
  else {
    puVar10 = (uint *)plVar9[4];
    if ((uint *)plVar9[4] == (uint *)0x0) {
      puVar10 = (uint *)(plVar9 + 2);
    }
    uVar14 = *puVar10;
    if (uVar14 == 0) {
      iVar16 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar16 = iVar2 + -1;
      }
      uVar15 = 0;
      uVar17 = (ulonglong)(uint)(iVar16 >> 5);
      if (iVar16 >> 5 < 1) {
        uVar17 = uVar15;
      }
      iVar16 = 0;
      do {
        if (uVar17 == uVar15) {
          return param_2;
        }
        iVar16 = iVar16 + 0x20;
        uVar14 = puVar10[uVar15 + 1];
        uVar15 = uVar15 + 1;
      } while (uVar14 == 0);
    }
    else {
      uVar15 = 0;
      iVar16 = 0;
    }
    uVar13 = (ulonglong)(-uVar14 & uVar14);
    uVar17 = uVar13 * 2 + 1;
    lVar3 = 0x3f;
    if (uVar17 != 0) {
      for (; uVar17 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    iVar19 = (iVar16 - ((uint)lVar3 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar19) {
      iVar19 = iVar2;
    }
  }
  if (iVar19 != iVar2) {
    lVar3 = *plVar9;
    puVar10 = (uint *)(plVar9 + 2);
    if ((uint *)plVar9[4] != (uint *)0x0) {
      puVar10 = (uint *)plVar9[4];
    }
    uVar14 = 0xffffffff;
    do {
      fVar1 = *(float *)(lVar3 + 0x24 + (longlong)iVar19 * 0x50);
      if (*(float *)((longlong)param_2 + 0xc) <= fVar1 &&
          fVar1 != *(float *)((longlong)param_2 + 0xc)) {
        lVar20 = (longlong)iVar19 * 0x50 + lVar3;
        uVar4 = *(undefined8 *)(lVar20 + 0x18);
        uVar5 = *(undefined8 *)(lVar20 + 0x20);
        uVar6 = *(undefined8 *)(lVar20 + 0x28);
        uVar7 = *(undefined8 *)(lVar20 + 0x30);
        uVar8 = *(undefined8 *)(lVar20 + 0x40);
        param_2[4] = *(undefined8 *)(lVar20 + 0x38);
        param_2[5] = uVar8;
        param_2[2] = uVar6;
        param_2[3] = uVar7;
        *param_2 = uVar4;
        param_2[1] = uVar5;
      }
      uVar14 = uVar14 & ~(uint)uVar13;
      iVar19 = (int)uVar15;
      lVar20 = (longlong)iVar19;
      uVar18 = puVar10[lVar20] & uVar14;
      if (uVar18 == 0) {
        iVar11 = iVar2 + -1;
        if (iVar2 + -1 < 0) {
          iVar11 = iVar2 + 0x1e;
        }
        iVar11 = iVar11 >> 5;
        iVar12 = iVar11;
        if (iVar11 < iVar19) {
          iVar12 = iVar19;
        }
        if (iVar11 <= iVar19) {
          return param_2;
        }
        lVar21 = 0;
        while( true ) {
          iVar16 = iVar16 + 0x20;
          uVar18 = puVar10[lVar20 + lVar21 + 1];
          if (uVar18 != 0) break;
          lVar21 = lVar21 + 1;
          if (iVar12 - lVar20 == lVar21) {
            return param_2;
          }
        }
        uVar15 = (ulonglong)(iVar19 + (int)lVar21 + 1);
        uVar14 = 0xffffffff;
      }
      uVar13 = (ulonglong)(-uVar18 & uVar18);
      uVar17 = uVar13 * 2 + 1;
      lVar20 = 0x3f;
      if (uVar17 != 0) {
        for (; uVar17 >> lVar20 == 0; lVar20 = lVar20 + -1) {
        }
      }
      iVar19 = (iVar16 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
    } while (iVar19 < iVar2);
  }
  return param_2;
}



// FUNCTION 14031d91e FUN_14031d91e body=1420 status=ok
// SIG undefined FUN_14031d91e(void)

void FUN_14031d91e(longlong param_1,byte *param_2)

{
  byte *pbVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  ushort uVar9;
  int iVar10;
  ushort *puVar11;
  byte bVar12;
  longlong lVar13;
  byte *pbVar14;
  uint *puVar15;
  uint uVar16;
  int iVar17;
  PSRWLOCK SRWLock;
  uint uVar18;
  longlong lVar19;
  longlong *plVar20;
  uint uVar21;
  undefined1 auStack_b8 [40];
  undefined4 *local_90;
  uint local_88;
  undefined4 local_84;
  undefined4 *local_80;
  uint local_78;
  undefined4 local_74;
  undefined4 *local_70;
  uint local_68;
  undefined4 local_64;
  undefined4 *local_60;
  uint local_58;
  undefined4 local_54;
  undefined1 local_50 [8];
  char *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_14031deac(local_50);
  if (*param_2 == 1) {
    iVar17 = *(int *)(param_2 + 0x30);
    uVar16 = (uint)*(byte *)(*(longlong *)(param_2 + 0x28) + (longlong)iVar17);
    *(int *)(param_2 + 0x30) = iVar17 + 1;
    lVar13 = *(longlong *)(*(longlong *)(param_2 + 0x20) + (longlong)iVar17 * 8);
    iVar17 = *(int *)(param_2 + 0x44) * uVar16;
    bVar12 = 1;
  }
  else {
    puVar11 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
    uVar9 = *puVar11;
    *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar11 + 1;
    uVar21 = uVar9 & 0x7fff;
    uVar16 = (uint)(uVar9 >> 0xf);
    lVar19 = *(longlong *)(param_2 + 0x80);
    if ((short)uVar9 < 0) {
      lVar13 = (ulonglong)(uVar21 * *(int *)(lVar19 + 0x80)) + *(longlong *)(lVar19 + 0x70);
    }
    else {
      iVar17 = **(int **)(lVar19 + 0x20);
      lVar13 = 0;
      if (iVar17 <= (int)uVar21) {
        do {
          uVar21 = uVar21 - iVar17;
          iVar17 = (*(int **)(lVar19 + 0x20))[lVar13 + 1];
          lVar13 = lVar13 + 1;
        } while (iVar17 <= (int)uVar21);
      }
      lVar13 = (longlong)(int)uVar21 + *(longlong *)(*(longlong *)(lVar19 + 0x18) + lVar13 * 8);
    }
    iVar17 = *(int *)(lVar19 + 0x4c) * uVar16;
    bVar12 = *param_2;
  }
  if ((bVar12 & 1) == 0) {
    puVar11 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
    uVar9 = *puVar11;
    *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar11 + 1;
    uVar21 = uVar9 & 0x7fff;
    if (uVar21 == 0x7fff) {
      local_90 = &local_84;
      local_88 = 0;
    }
    else {
      lVar19 = *(longlong *)(param_2 + 0x80);
      local_88 = 1;
      local_90 = (undefined4 *)
                 ((ulonglong)(uVar21 * *(int *)(lVar19 + 0x80)) + *(longlong *)(lVar19 + 0x70) +
                 (longlong)*(int *)(lVar19 + 0x4c) * 4);
    }
  }
  else {
    iVar10 = *(int *)(param_2 + 0x30);
    bVar12 = *(byte *)(*(longlong *)(param_2 + 0x28) + (longlong)iVar10);
    local_88 = (uint)bVar12;
    *(int *)(param_2 + 0x30) = iVar10 + 1;
    local_90 = (undefined4 *)
               ((longlong)*(int *)(param_2 + 0x44) * (ulonglong)bVar12 * 4 +
               *(longlong *)(*(longlong *)(param_2 + 0x20) + (longlong)iVar10 * 8));
  }
  if (*param_2 == 1) {
    iVar10 = *(int *)(param_2 + 0x30);
    bVar12 = *(byte *)(*(longlong *)(param_2 + 0x28) + (longlong)iVar10);
    local_78 = (uint)bVar12;
    *(int *)(param_2 + 0x30) = iVar10 + 1;
    local_80 = (undefined4 *)
               ((longlong)*(int *)(param_2 + 0x44) * (ulonglong)bVar12 * 4 +
               *(longlong *)(*(longlong *)(param_2 + 0x20) + (longlong)iVar10 * 8));
  }
  else {
    puVar11 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
    uVar9 = *puVar11;
    *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar11 + 1;
    uVar21 = uVar9 & 0x7fff;
    if (uVar21 == 0x7fff) {
      local_80 = &local_74;
      local_78 = 0;
    }
    else {
      lVar19 = *(longlong *)(param_2 + 0x80);
      local_78 = 1;
      local_80 = (undefined4 *)
                 ((ulonglong)(uVar21 * *(int *)(lVar19 + 0x80)) + *(longlong *)(lVar19 + 0x70) +
                 (longlong)*(int *)(lVar19 + 0x4c) * 4);
    }
  }
  if (*param_2 == 1) {
    iVar10 = *(int *)(param_2 + 0x30);
    bVar12 = *(byte *)(*(longlong *)(param_2 + 0x28) + (longlong)iVar10);
    local_68 = (uint)bVar12;
    *(int *)(param_2 + 0x30) = iVar10 + 1;
    local_70 = (undefined4 *)
               ((longlong)*(int *)(param_2 + 0x44) * (ulonglong)bVar12 * 4 +
               *(longlong *)(*(longlong *)(param_2 + 0x20) + (longlong)iVar10 * 8));
  }
  else {
    puVar11 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
    uVar9 = *puVar11;
    *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar11 + 1;
    uVar21 = uVar9 & 0x7fff;
    if (uVar21 == 0x7fff) {
      local_70 = &local_64;
      local_68 = 0;
    }
    else {
      lVar19 = *(longlong *)(param_2 + 0x80);
      local_68 = 1;
      local_70 = (undefined4 *)
                 ((ulonglong)(uVar21 * *(int *)(lVar19 + 0x80)) + *(longlong *)(lVar19 + 0x70) +
                 (longlong)*(int *)(lVar19 + 0x4c) * 4);
    }
  }
  if (*param_2 == 1) {
    iVar10 = *(int *)(param_2 + 0x30);
    bVar12 = *(byte *)(*(longlong *)(param_2 + 0x28) + (longlong)iVar10);
    local_58 = (uint)bVar12;
    *(int *)(param_2 + 0x30) = iVar10 + 1;
    local_60 = (undefined4 *)
               ((longlong)*(int *)(param_2 + 0x44) * (ulonglong)bVar12 * 4 +
               *(longlong *)(*(longlong *)(param_2 + 0x20) + (longlong)iVar10 * 8));
  }
  else {
    puVar11 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
    uVar9 = *puVar11;
    *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar11 + 1;
    uVar21 = uVar9 & 0x7fff;
    if (uVar21 == 0x7fff) {
      local_60 = &local_54;
      local_58 = 0;
    }
    else {
      lVar19 = *(longlong *)(param_2 + 0x80);
      local_58 = 1;
      local_60 = (undefined4 *)
                 ((ulonglong)(uVar21 * *(int *)(lVar19 + 0x80)) + *(longlong *)(lVar19 + 0x70) +
                 (longlong)*(int *)(lVar19 + 0x4c) * 4);
    }
  }
  lVar19 = *(longlong *)(param_1 + 0x10);
  if (local_48 == (char *)0x0) {
    SRWLock = (PSRWLOCK)0x0;
  }
  else {
    SRWLock = (PSRWLOCK)(local_48 + 8);
    AcquireSRWLockShared(SRWLock);
    if (*local_48 == '\x01') {
      plVar20 = (longlong *)(local_48 + 0x10);
      goto LAB_14031db85;
    }
  }
  plVar20 = (longlong *)(lVar19 + 0x50);
LAB_14031db85:
  pbVar1 = param_2 + 0x3c;
  pbVar14 = (byte *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != 0) {
    pbVar14 = pbVar1;
  }
  if ((int)plVar20[1] < 1) {
    if (0 < *(int *)pbVar14) {
      iVar17 = 0;
      do {
        puVar2 = local_90 + (int)local_88;
        *local_90 = 0x3f800000;
        puVar3 = local_80 + (int)local_78;
        *local_80 = 0x3f800000;
        puVar4 = local_70 + (int)local_68;
        *local_70 = 0x3f800000;
        puVar5 = local_60 + (int)local_58;
        *local_60 = 0x3f800000;
        iVar17 = iVar17 + 1;
        pbVar14 = (byte *)(*(longlong *)(param_2 + 0x80) + 0x40);
        if (*param_2 != 0) {
          pbVar14 = pbVar1;
        }
        local_90 = puVar2;
        local_80 = puVar3;
        local_70 = puVar4;
        local_60 = puVar5;
      } while (iVar17 < *(int *)pbVar14);
    }
  }
  else if (0 < *(int *)pbVar14) {
    puVar15 = (uint *)(lVar13 + (longlong)iVar17 * 4);
    uVar21 = (int)plVar20[1] - 1;
    iVar17 = 0;
    do {
      uVar18 = *puVar15;
      if ((int)uVar21 <= (int)*puVar15) {
        uVar18 = uVar21;
      }
      if ((int)uVar18 < 1) {
        uVar18 = 0;
      }
      lVar13 = *plVar20;
      lVar19 = (ulonglong)uVar18 * 0x10;
      uVar6 = *(undefined4 *)(lVar13 + 4 + lVar19);
      uVar7 = *(undefined4 *)(lVar13 + 8 + lVar19);
      uVar8 = *(undefined4 *)(lVar13 + 0xc + lVar19);
      puVar2 = local_90 + (int)local_88;
      *local_90 = *(undefined4 *)(lVar13 + lVar19);
      puVar3 = local_80 + (int)local_78;
      *local_80 = uVar6;
      puVar4 = local_70 + (int)local_68;
      *local_70 = uVar7;
      puVar5 = local_60 + (int)local_58;
      *local_60 = uVar8;
      iVar17 = iVar17 + 1;
      pbVar14 = (byte *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != 0) {
        pbVar14 = pbVar1;
      }
      puVar15 = (uint *)((longlong)puVar15 + (ulonglong)(uVar16 << 2));
      local_90 = puVar2;
      local_80 = puVar3;
      local_70 = puVar4;
      local_60 = puVar5;
    } while (iVar17 < *(int *)pbVar14);
  }
  if (SRWLock != (PSRWLOCK)0x0) {
    ReleaseSRWLockShared(SRWLock);
  }
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14031deac FUN_14031deac body=148 status=ok
// SIG undefined FUN_14031deac(void)

void FUN_14031deac(int *param_1,char *param_2)

{
  ushort uVar1;
  ushort *puVar2;
  int *piVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  
  if (*param_2 == '\x01') {
    iVar7 = *(int *)(param_2 + 0x30);
    *(int *)(param_2 + 0x30) = iVar7 + 1;
    iVar7 = **(int **)(*(longlong *)(param_2 + 0x20) + (longlong)iVar7 * 8);
    *param_1 = iVar7;
    plVar5 = (longlong *)(param_2 + 0x48);
  }
  else {
    puVar2 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
    uVar1 = *puVar2;
    *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar2 + 1;
    uVar4 = uVar1 & 0x7fff;
    piVar3 = *(int **)(*(longlong *)(param_2 + 0x80) + 0x20);
    iVar7 = *piVar3;
    lVar6 = 0;
    if (iVar7 <= (int)uVar4) {
      do {
        uVar4 = uVar4 - iVar7;
        iVar7 = piVar3[lVar6 + 1];
        lVar6 = lVar6 + 1;
      } while (iVar7 <= (int)uVar4);
    }
    iVar7 = *(int *)(*(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x80) + 0x18) + lVar6 * 8)
                    + (longlong)(int)uVar4);
    *param_1 = iVar7;
    plVar5 = (longlong *)(*(longlong *)(param_2 + 0x80) + 0x38);
  }
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(*plVar5 + (longlong)iVar7 * 8);
  return;
}



// FUNCTION 14031df40 FUN_14031df40 body=226 status=ok
// SIG undefined FUN_14031df40(void)

void FUN_14031df40(longlong param_1,ulonglong *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x1e8);
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
  *puVar2 = &PTR_LAB_14a1fb980;
  *(undefined4 *)(puVar2 + 2) = uVar1;
  FUN_14031e022(param_1,param_2);
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
  *puVar2 = &PTR_LAB_14a1fb980;
  *(undefined4 *)(puVar2 + 2) = 4;
  return;
}



// FUNCTION 14031e022 FUN_14031e022 body=1324 status=ok
// SIG undefined FUN_14031e022(void)

void FUN_14031e022(longlong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  void *_Src;
  uint uVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  longlong lVar12;
  undefined8 *puVar13;
  void *pvVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 *puVar17;
  undefined8 *puVar18;
  size_t _Size;
  ulonglong uVar19;
  void *_Dst;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  longlong local_c8;
  undefined1 local_c0 [8];
  undefined1 *local_b8;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_144b1c6fa(param_1 + 0x10,local_c0);
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar13 = puVar18 + 0x11;
  if ((undefined8 *)param_2[1] < puVar13) {
    FUN_140023dd8(param_2,0x90);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar18 + 0x11;
  }
  *param_2 = (ulonglong)puVar13;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_FUN_14a1fb978;
  puVar18[3] = 0;
  *(int *)(puVar18 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar18 + 0x24) = 8;
  }
  else {
    puVar17 = local_c0;
    if (local_b8 != (undefined1 *)0x0) {
      puVar17 = local_b8;
    }
    FUN_1446fe144(puVar18 + 2,local_b0,0);
    puVar13 = (undefined8 *)puVar18[3];
    if ((undefined8 *)puVar18[3] == (undefined8 *)0x0) {
      puVar13 = puVar18 + 2;
    }
    memcpy(puVar13,puVar17,(longlong)local_b0);
  }
  puVar18[0xd] = 0;
  *(int *)(puVar18 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar18 + 0x74) = 8;
  }
  else {
    puVar17 = local_68;
    if (local_68 == (undefined1 *)0x0) {
      puVar17 = local_a8;
    }
    FUN_1446fe1b8(puVar18 + 5,local_60,0);
    puVar13 = (undefined8 *)puVar18[0xd];
    if ((undefined8 *)puVar18[0xd] == (undefined8 *)0x0) {
      puVar13 = puVar18 + 5;
    }
    memcpy(puVar13,puVar17,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar18 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar18 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar18 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar18 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (local_b8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x1d8);
  uVar4 = *(undefined4 *)(param_1 + 0x1dc);
  uVar7 = *(undefined8 *)(param_1 + 0x1b8);
  uVar8 = *(undefined8 *)(param_1 + 0x1c0);
  local_c8 = CONCAT44(local_c8._4_4_,*(undefined4 *)(param_1 + 0x1e0));
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    uVar10 = 0;
  }
  else {
    lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar15 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    uVar10 = *(ulonglong *)(*(longlong *)(lVar12 + 0x50) + lVar15 * 8);
    if (uVar10 == 0) {
      uVar10 = FUN_1400bafc2(lVar12,lVar15,1);
    }
  }
  uVar11 = FUN_140029432(param_2,uVar10,0);
  param_2[0x37] = uVar10;
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar13 = puVar18 + 3;
  if ((undefined8 *)param_2[1] < puVar13) {
    FUN_140023dd8(param_2,0x20);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar18 + 3;
  }
  *param_2 = (ulonglong)puVar13;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a37d340;
  puVar18[2] = uVar11;
  local_d8 = uVar8;
  FUN_14480864a(param_2,uVar10,*(undefined8 *)(param_1 + 0x1c8),uVar7);
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar13 = puVar18 + 4;
  if ((undefined8 *)param_2[1] < puVar13) {
    FUN_140023dd8(param_2,0x28);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar18 + 4;
  }
  *param_2 = (ulonglong)puVar13;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a1fbc30;
  *(undefined4 *)(puVar18 + 2) = uVar3;
  *(undefined4 *)((longlong)puVar18 + 0x14) = uVar4;
  *(undefined4 *)(puVar18 + 3) = (undefined4)local_c8;
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    lVar12 = 0;
  }
  else {
    lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar16 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    lVar12 = *(longlong *)(*(longlong *)(lVar15 + 0x50) + lVar16 * 8);
    if (lVar12 == 0) {
      lVar12 = FUN_1400bafc2(lVar15,lVar16,1);
    }
  }
  local_c8 = lVar12;
  if (DAT_14ca8507b == '\x01') {
    puVar1 = param_2 + 0x12;
    if ((0 < (int)param_2[0x13]) &&
       (*(undefined4 *)(param_2 + 0x13) = 0, *(int *)((longlong)param_2 + 0x9c) < 0)) {
      FUN_147139e90(puVar1,0);
    }
    lVar12 = *(longlong *)(param_1 + 0x1c8);
    uVar10 = *(ulonglong *)(lVar12 + 0x10);
    uVar19 = lVar12 + 0x10 + ((longlong)uVar10 >> 0x18);
    if ((uVar10 & 1) == 0) {
      uVar19 = uVar10;
    }
    iVar5 = *(int *)(lVar12 + 0x18);
    if ((longlong)iVar5 != 0) {
      lVar12 = 0;
      do {
        uVar9 = (uint)*(byte *)(uVar19 + 3 + lVar12);
        if ((uVar9 < 0x13) && ((0x44080U >> (uVar9 & 0x1f) & 1) != 0)) {
          bVar2 = *(byte *)(uVar19 + 2 + lVar12);
          iVar6 = (int)param_2[0x13];
          *(uint *)(param_2 + 0x13) = iVar6 + 1U;
          if (*(uint *)((longlong)param_2 + 0x9c) < iVar6 + 1U) {
            FUN_1447477d8(puVar1,iVar6);
          }
          uVar10 = *puVar1;
          *(ushort *)(uVar10 + (longlong)iVar6 * 4) = (ushort)bVar2;
          *(undefined1 *)(uVar10 + 2 + (longlong)iVar6 * 4) = 1;
        }
        lVar12 = lVar12 + 4;
      } while ((longlong)iVar5 * 4 != lVar12);
    }
    uVar10 = param_2[0x13];
    lVar12 = (longlong)(int)uVar10;
    if (0 < lVar12) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar1;
        puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar13 = puVar18 + 5;
        if ((undefined8 *)param_2[1] < puVar13) {
          FUN_140023dd8(param_2,0x30);
          puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar13 = puVar18 + 5;
        }
        *param_2 = (ulonglong)puVar13;
        *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
        *(undefined8 **)param_2[6] = puVar18;
        param_2[6] = (ulonglong)(puVar18 + 1);
        _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
        pvVar14 = (void *)((longlong)_Dst + lVar12 * 4);
        _Size = lVar12 * 4;
        if ((void *)param_2[1] < pvVar14) {
          FUN_140023dd8(param_2,(uint)_Size | 2);
          _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
          pvVar14 = (void *)((longlong)_Dst + _Size);
        }
        *param_2 = (ulonglong)pvVar14;
        memcpy(_Dst,_Src,_Size);
        puVar18[1] = 0;
        *puVar18 = &PTR_FUN_14a1fbc38;
        puVar18[2] = local_c8;
        puVar18[3] = _Dst;
        *(int *)(puVar18 + 4) = (int)uVar10;
      }
      *(undefined4 *)(param_2 + 0x13) = 0;
      if (*(int *)((longlong)param_2 + 0x9c) < 0) {
        FUN_147139e90(puVar1,0);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14031e550 FUN_14031e550 body=226 status=ok
// SIG undefined FUN_14031e550(void)

void FUN_14031e550(longlong param_1,ulonglong *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x1e8);
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
  *puVar2 = &PTR_LAB_14a1fb980;
  *(undefined4 *)(puVar2 + 2) = uVar1;
  FUN_14031e632(param_1,param_2);
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
  *puVar2 = &PTR_LAB_14a1fb980;
  *(undefined4 *)(puVar2 + 2) = 4;
  return;
}



// FUNCTION 14031e632 FUN_14031e632 body=1324 status=ok
// SIG undefined FUN_14031e632(void)

void FUN_14031e632(longlong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  void *_Src;
  uint uVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  longlong lVar12;
  undefined8 *puVar13;
  void *pvVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 *puVar17;
  undefined8 *puVar18;
  size_t _Size;
  ulonglong uVar19;
  void *_Dst;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  longlong local_c8;
  undefined1 local_c0 [8];
  undefined1 *local_b8;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_144b1c6fa(param_1 + 0x10,local_c0);
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar13 = puVar18 + 0x11;
  if ((undefined8 *)param_2[1] < puVar13) {
    FUN_140023dd8(param_2,0x90);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar18 + 0x11;
  }
  *param_2 = (ulonglong)puVar13;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_FUN_14a1fb978;
  puVar18[3] = 0;
  *(int *)(puVar18 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar18 + 0x24) = 8;
  }
  else {
    puVar17 = local_c0;
    if (local_b8 != (undefined1 *)0x0) {
      puVar17 = local_b8;
    }
    FUN_1446fe144(puVar18 + 2,local_b0,0);
    puVar13 = (undefined8 *)puVar18[3];
    if ((undefined8 *)puVar18[3] == (undefined8 *)0x0) {
      puVar13 = puVar18 + 2;
    }
    memcpy(puVar13,puVar17,(longlong)local_b0);
  }
  puVar18[0xd] = 0;
  *(int *)(puVar18 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar18 + 0x74) = 8;
  }
  else {
    puVar17 = local_68;
    if (local_68 == (undefined1 *)0x0) {
      puVar17 = local_a8;
    }
    FUN_1446fe1b8(puVar18 + 5,local_60,0);
    puVar13 = (undefined8 *)puVar18[0xd];
    if ((undefined8 *)puVar18[0xd] == (undefined8 *)0x0) {
      puVar13 = puVar18 + 5;
    }
    memcpy(puVar13,puVar17,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar18 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar18 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar18 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar18 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (local_b8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x1d8);
  uVar4 = *(undefined4 *)(param_1 + 0x1dc);
  uVar7 = *(undefined8 *)(param_1 + 0x1b8);
  uVar8 = *(undefined8 *)(param_1 + 0x1c0);
  local_c8 = CONCAT44(local_c8._4_4_,*(undefined4 *)(param_1 + 0x1e0));
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    uVar10 = 0;
  }
  else {
    lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar15 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    uVar10 = *(ulonglong *)(*(longlong *)(lVar12 + 0x50) + lVar15 * 8);
    if (uVar10 == 0) {
      uVar10 = FUN_1400bafc2(lVar12,lVar15,1);
    }
  }
  uVar11 = FUN_140029432(param_2,uVar10,0);
  param_2[0x37] = uVar10;
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar13 = puVar18 + 3;
  if ((undefined8 *)param_2[1] < puVar13) {
    FUN_140023dd8(param_2,0x20);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar18 + 3;
  }
  *param_2 = (ulonglong)puVar13;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a37d340;
  puVar18[2] = uVar11;
  local_d8 = uVar8;
  FUN_14480864a(param_2,uVar10,*(undefined8 *)(param_1 + 0x1c8),uVar7);
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar13 = puVar18 + 4;
  if ((undefined8 *)param_2[1] < puVar13) {
    FUN_140023dd8(param_2,0x28);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar18 + 4;
  }
  *param_2 = (ulonglong)puVar13;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a1fbc30;
  *(undefined4 *)(puVar18 + 2) = uVar3;
  *(undefined4 *)((longlong)puVar18 + 0x14) = uVar4;
  *(undefined4 *)(puVar18 + 3) = (undefined4)local_c8;
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    lVar12 = 0;
  }
  else {
    lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar16 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    lVar12 = *(longlong *)(*(longlong *)(lVar15 + 0x50) + lVar16 * 8);
    if (lVar12 == 0) {
      lVar12 = FUN_1400bafc2(lVar15,lVar16,1);
    }
  }
  local_c8 = lVar12;
  if (DAT_14ca8507b == '\x01') {
    puVar1 = param_2 + 0x12;
    if ((0 < (int)param_2[0x13]) &&
       (*(undefined4 *)(param_2 + 0x13) = 0, *(int *)((longlong)param_2 + 0x9c) < 0)) {
      FUN_147139e90(puVar1,0);
    }
    lVar12 = *(longlong *)(param_1 + 0x1c8);
    uVar10 = *(ulonglong *)(lVar12 + 0x10);
    uVar19 = lVar12 + 0x10 + ((longlong)uVar10 >> 0x18);
    if ((uVar10 & 1) == 0) {
      uVar19 = uVar10;
    }
    iVar5 = *(int *)(lVar12 + 0x18);
    if ((longlong)iVar5 != 0) {
      lVar12 = 0;
      do {
        uVar9 = (uint)*(byte *)(uVar19 + 3 + lVar12);
        if ((uVar9 < 0x13) && ((0x44080U >> (uVar9 & 0x1f) & 1) != 0)) {
          bVar2 = *(byte *)(uVar19 + 2 + lVar12);
          iVar6 = (int)param_2[0x13];
          *(uint *)(param_2 + 0x13) = iVar6 + 1U;
          if (*(uint *)((longlong)param_2 + 0x9c) < iVar6 + 1U) {
            FUN_1447477d8(puVar1,iVar6);
          }
          uVar10 = *puVar1;
          *(ushort *)(uVar10 + (longlong)iVar6 * 4) = (ushort)bVar2;
          *(undefined1 *)(uVar10 + 2 + (longlong)iVar6 * 4) = 1;
        }
        lVar12 = lVar12 + 4;
      } while ((longlong)iVar5 * 4 != lVar12);
    }
    uVar10 = param_2[0x13];
    lVar12 = (longlong)(int)uVar10;
    if (0 < lVar12) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar1;
        puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar13 = puVar18 + 5;
        if ((undefined8 *)param_2[1] < puVar13) {
          FUN_140023dd8(param_2,0x30);
          puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar13 = puVar18 + 5;
        }
        *param_2 = (ulonglong)puVar13;
        *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
        *(undefined8 **)param_2[6] = puVar18;
        param_2[6] = (ulonglong)(puVar18 + 1);
        _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
        pvVar14 = (void *)((longlong)_Dst + lVar12 * 4);
        _Size = lVar12 * 4;
        if ((void *)param_2[1] < pvVar14) {
          FUN_140023dd8(param_2,(uint)_Size | 2);
          _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
          pvVar14 = (void *)((longlong)_Dst + _Size);
        }
        *param_2 = (ulonglong)pvVar14;
        memcpy(_Dst,_Src,_Size);
        puVar18[1] = 0;
        *puVar18 = &PTR_FUN_14a1fbc38;
        puVar18[2] = local_c8;
        puVar18[3] = _Dst;
        *(int *)(puVar18 + 4) = (int)uVar10;
      }
      *(undefined4 *)(param_2 + 0x13) = 0;
      if (*(int *)((longlong)param_2 + 0x9c) < 0) {
        FUN_147139e90(puVar1,0);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14031eb60 FUN_14031eb60 body=210 status=ok
// SIG undefined FUN_14031eb60(void)

char * FUN_14031eb60(char *param_1,char *param_2)

{
  int *piVar1;
  char cVar2;
  longlong *plVar3;
  
  cVar2 = *param_1;
  if (cVar2 != '\0') {
    if (cVar2 == '\x01') {
      param_1[8] = '\0';
      param_1[9] = '\0';
      param_1[10] = '\0';
      param_1[0xb] = '\0';
      param_1[0xc] = '\0';
      param_1[0xd] = '\0';
      param_1[0xe] = '\0';
      param_1[0xf] = '\0';
    }
    else if ((cVar2 == '\x03') &&
            (plVar3 = *(longlong **)(param_1 + 0x10), plVar3 != (longlong *)0x0)) {
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))();
      }
    }
    *param_1 = '\0';
  }
  cVar2 = *param_2;
  *param_1 = cVar2;
  if (cVar2 == '\x02') {
LAB_14031eb81:
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  }
  else {
    if (cVar2 != '\x03') {
      if (cVar2 != '\x01') goto LAB_14031eb8b;
      goto LAB_14031eb81;
    }
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
    param_2[8] = '\0';
    param_2[9] = '\0';
    param_2[10] = '\0';
    param_2[0xb] = '\0';
    param_2[0xc] = '\0';
    param_2[0xd] = '\0';
    param_2[0xe] = '\0';
    param_2[0xf] = '\0';
    param_2[0x10] = '\0';
    param_2[0x11] = '\0';
    param_2[0x12] = '\0';
    param_2[0x13] = '\0';
    param_2[0x14] = '\0';
    param_2[0x15] = '\0';
    param_2[0x16] = '\0';
    param_2[0x17] = '\0';
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
    param_1[0x20] = param_2[0x20];
    param_2[0x20] = '\0';
  }
  cVar2 = *param_2;
LAB_14031eb8b:
  if (cVar2 != '\0') {
    if (cVar2 == '\x03') {
      plVar3 = *(longlong **)(param_2 + 0x10);
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar3 + 0x10))();
        }
      }
    }
    else if (cVar2 == '\x01') {
      param_2[8] = '\0';
      param_2[9] = '\0';
      param_2[10] = '\0';
      param_2[0xb] = '\0';
      param_2[0xc] = '\0';
      param_2[0xd] = '\0';
      param_2[0xe] = '\0';
      param_2[0xf] = '\0';
    }
    *param_2 = '\0';
  }
  return param_1;
}



// FUNCTION 14031ec32 FUN_14031ec32 body=83 status=ok
// SIG undefined FUN_14031ec32(void)

void FUN_14031ec32(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = 0x10;
  do {
    lVar1 = *(longlong *)((longlong)param_1 + lVar2);
    if (lVar1 != 0) {
      FUN_14031ec32(lVar1);
      FUN_1400020a8(lVar1);
    }
    lVar2 = lVar2 + 8;
  } while (lVar2 != 0x30);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14031ec86 FUN_14031ec86 body=1442 status=ok
// SIG undefined FUN_14031ec86(void)

bool FUN_14031ec86(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  uint *puVar2;
  int *piVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined1 auStack_598 [44];
  uint local_56c;
  undefined8 local_568;
  undefined8 local_560;
  undefined8 local_558;
  undefined8 uStack_550;
  undefined8 local_548;
  undefined8 local_538 [5];
  longlong local_510;
  undefined8 local_4f0;
  undefined8 local_4e8;
  undefined4 local_4e0;
  undefined4 local_4dc;
  byte local_4d4;
  undefined8 local_4b8 [16];
  undefined8 local_438;
  undefined8 local_430;
  undefined1 local_410;
  undefined1 local_388;
  undefined8 local_378 [16];
  undefined1 local_2f8;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 local_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined4 local_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined1 *puStack_288;
  undefined1 *local_280;
  undefined4 local_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined8 local_268;
  undefined4 local_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_208;
  undefined4 local_200;
  undefined8 local_1fc;
  undefined4 local_1f4;
  undefined8 local_1e8;
  undefined4 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined8 local_198;
  undefined4 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined1 uStack_170;
  undefined7 uStack_16f;
  undefined1 uStack_168;
  undefined8 uStack_167;
  undefined1 local_15f;
  undefined8 local_15c;
  undefined1 *local_154;
  undefined4 local_14c;
  undefined4 local_148;
  undefined1 local_144;
  undefined8 local_140;
  undefined4 local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined1 uStack_118;
  undefined7 local_117;
  undefined1 uStack_110;
  undefined8 uStack_10f;
  undefined8 uStack_100;
  undefined3 uStack_f8;
  undefined5 local_f5;
  undefined3 uStack_f0;
  undefined8 uStack_ed;
  code *local_d8 [2];
  longlong *local_c8;
  longlong local_b8 [2];
  longlong local_a8;
  undefined8 local_a0;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_598;
  if (*(char *)(param_1 + 0x18) == '\0') {
    uVar17 = (undefined4)*(undefined8 *)(param_2 + 0x80);
    uVar18 = (undefined4)((ulonglong)*(undefined8 *)(param_2 + 0x80) >> 0x20);
    uVar19 = (undefined4)*(undefined8 *)(param_2 + 0x88);
    uVar20 = (undefined4)((ulonglong)*(undefined8 *)(param_2 + 0x88) >> 0x20);
    uVar16 = *(undefined4 *)(param_2 + 0x90);
    uVar21 = *(undefined4 *)(param_2 + 0x94);
  }
  else {
    uVar16 = 0;
    uVar17 = 0;
    uVar18 = 0;
    uVar19 = 0;
    uVar20 = 0;
    uVar21 = 0;
  }
  plVar5 = *(longlong **)(param_2 + 0x58);
  if (plVar5 != (longlong *)0x0) {
    uVar8 = FUN_14001cc68(0x1b8,0x10);
    local_a8 = 0;
    local_a0 = 0x8000000000;
    FUN_1401b5a8c(local_d8,0);
    FUN_14031f39e(&local_558,plVar5,*(undefined8 *)(param_2 + 0x70),local_d8);
    local_4f0 = CONCAT44(uVar18,uVar17);
    local_4e8 = CONCAT44(uVar20,uVar19);
    local_4d4 = local_4d4 | 0x10;
    local_4e0 = uVar16;
    local_4dc = uVar21;
    FUN_14031f528(uVar8,&local_558);
    if (local_510 != 0) {
      FUN_1400020a8();
    }
    local_568 = param_3;
    if (local_a8 != 0) {
      FUN_1400020a8();
    }
    (**(code **)(*plVar5 + 0x28))(plVar5,&local_560);
    puVar14 = &DAT_14c846400;
    puVar15 = local_4b8;
    for (lVar12 = 0x10; lVar12 != 0; lVar12 = lVar12 + -1) {
      *puVar15 = *puVar14;
      puVar14 = puVar14 + 1;
      puVar15 = puVar15 + 1;
    }
    uVar7 = 0;
    local_410 = 0;
    local_388 = 0;
    local_2e8 = DAT_14c8464e0;
    uStack_2e0 = DAT_14c8464e8;
    local_2d8 = DAT_14c8464f0;
    local_2b8 = 0;
    uStack_2b0 = 0;
    local_2a8 = 0xffffffff;
    local_2a0 = 0;
    local_278 = 0x3f800000;
    uStack_274 = 0x3f800000;
    uStack_270 = 0x3f800000;
    uStack_26c = 0x3f800000;
    local_268 = 0xffffffff00000000;
    local_260 = 0x42c80000;
    local_208 = 0;
    local_200 = 0;
    local_228 = 0;
    uStack_220 = 0;
    local_238 = 0;
    uStack_230 = 0;
    local_248 = 0;
    uStack_240 = 0;
    local_258 = 0;
    uStack_250 = 0;
    local_1fc = 0xffffffff00000080;
    local_1f4 = 0;
    local_1e8 = 0;
    local_1e0 = 0;
    local_1d8 = 0;
    local_1d0 = 0xffffffff00000000;
    local_1b8 = 0;
    local_1b0 = 0;
    uStack_1ac = 0x80;
    uStack_1a8 = 0xffffffff;
    uStack_1a4 = 0;
    local_198 = 0;
    local_190 = 0;
    local_188 = 0xffffffffffffffff;
    local_180 = 0xbf8000003f800000;
    local_178 = 0;
    uStack_170 = 0;
    uStack_16f = 0;
    uStack_168 = 0;
    uStack_167 = 0;
    local_15f = 1;
    local_15c = 0x42b4000042b40000;
    local_14c = 0;
    local_154 = &DAT_3f8000003f800000;
    local_144 = 0;
    local_148 = 0;
    local_140 = 0x3f800000bf800000;
    local_138 = 0x3f800000;
    uStack_110 = 0;
    uStack_10f = 0;
    uStack_120 = 0;
    uStack_118 = 0;
    local_117 = 0;
    local_130 = 0;
    uStack_128 = 0;
    uStack_f0 = 0;
    uStack_ed = 0;
    uStack_100 = 0;
    uStack_f8 = 0;
    local_f5 = 0;
    puVar14 = &DAT_14c846400;
    puVar15 = local_378;
    for (lVar12 = 0x10; lVar12 != 0; lVar12 = lVar12 + -1) {
      *puVar15 = *puVar14;
      puVar14 = puVar14 + 1;
      puVar15 = puVar15 + 1;
    }
    local_2f8 = 1;
    local_438 = 0;
    local_430 = local_560;
    local_2d0 = 0;
    local_2c8 = local_560;
    local_558 = DAT_14c8464e0;
    uStack_550 = DAT_14c8464e8;
    local_548 = DAT_14c8464f0;
    puVar14 = &DAT_14c846400;
    puVar15 = local_538;
    local_2c0 = uVar8;
    for (lVar12 = 0x10; lVar12 != 0; lVar12 = lVar12 + -1) {
      *puVar15 = *puVar14;
      puVar14 = puVar14 + 1;
      puVar15 = puVar15 + 1;
    }
    puVar14 = (undefined8 *)(*(longlong *)(param_1 + 8) + 0x10);
    puVar15 = local_4b8;
    for (lVar12 = 0x10; lVar12 != 0; lVar12 = lVar12 + -1) {
      *puVar15 = *puVar14;
      puVar14 = puVar14 + 1;
      puVar15 = puVar15 + 1;
    }
    uStack_298 = 0;
    local_290 = 0x3f80000000000000;
    puStack_288 = &DAT_3f8000003f800000;
    local_280 = &DAT_3f8000003f800000;
    lVar9 = FUN_14001cc68(0x30f0,0x10);
    FUN_144891fa0(lVar9,&local_558);
    lVar12 = *(longlong *)(param_2 + 0x60);
    local_56c = *(uint *)(param_2 + 0x78);
    plVar10 = (longlong *)(**(code **)(*plVar5 + 0x10))(plVar5);
    plVar10 = (longlong *)*plVar10;
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
      UNLOCK();
      lVar11 = (**(code **)(*plVar10 + 8))(plVar10);
      uVar7 = FUN_14031f7c7(*(undefined1 *)(lVar11 + 0x33));
    }
    lVar11 = *(longlong *)(param_1 + 8);
    lVar6 = *(longlong *)(param_1 + 0x10);
    if (lVar6 != 0) {
      LOCK();
      *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
      UNLOCK();
    }
    local_d8[0] = (code *)0x0;
    local_c8 = (longlong *)FUN_14001cc68(0x28,8);
    *local_c8 = (longlong)&PTR_FUN_14aae0110;
    local_c8[1] = lVar11;
    local_c8[2] = lVar6;
    local_c8[3] = lVar9;
    *(bool *)(local_c8 + 4) = lVar12 != 0;
    *(undefined1 *)((longlong)local_c8 + 0x21) = uVar7;
    if (local_c8 + 1 != (longlong *)0x0) {
      local_d8[0] = FUN_143750284;
    }
    FUN_14031f22a(local_568,local_d8);
    if (local_d8[0] != (code *)0x0) {
      plVar13 = local_c8;
      if (local_c8 == (longlong *)0x0) {
        plVar13 = local_b8;
      }
      (**(code **)(*plVar13 + 0x10))();
    }
    if ((local_56c & 2) != 0) {
      *(undefined8 *)(param_1 + 8) = 0;
      plVar13 = *(longlong **)(param_1 + 0x10);
      if (plVar13 != (longlong *)0x0) {
        *(undefined8 *)(param_1 + 0x10) = 0;
        LOCK();
        plVar1 = plVar13 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar13)(plVar13);
          LOCK();
          piVar3 = (int *)((longlong)plVar13 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar13 + 0x10))(plVar13);
          }
        }
      }
    }
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      puVar2 = (uint *)(plVar10 + 1);
      uVar4 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar4 & 0x3fffffff) == 1) {
        FUN_144a54812(plVar10);
      }
    }
    FUN_144891d70(&local_558);
  }
  if ((local_90 ^ (ulonglong)auStack_598) == DAT_14c707940) {
    return plVar5 != (longlong *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14031f22a FUN_14031f22a body=110 status=ok
// SIG undefined FUN_14031f22a(void)

void FUN_14031f22a(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  
  plVar3 = *(longlong **)(param_1 + 8);
  iVar2 = (int)plVar3[1];
  *(uint *)(plVar3 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)plVar3 + 0xc) < iVar2 + 1U) {
    FUN_14031f298(plVar3,iVar2);
  }
  lVar4 = *plVar3;
  lVar8 = (longlong)iVar2 * 0x40;
  *(undefined8 *)(lVar4 + lVar8) = *param_2;
  *(undefined8 *)(lVar4 + 0x10 + lVar8) = param_2[2];
  param_2[2] = 0;
  uVar5 = param_2[4];
  uVar6 = param_2[5];
  uVar7 = param_2[7];
  puVar1 = (undefined8 *)(lVar4 + 0x30 + lVar8);
  *puVar1 = param_2[6];
  puVar1[1] = uVar7;
  puVar1 = (undefined8 *)(lVar4 + 0x20 + lVar8);
  *puVar1 = uVar5;
  puVar1[1] = uVar6;
  if (*(longlong *)(lVar4 + lVar8) != 0) {
    *param_2 = 0;
  }
  return;
}



// FUNCTION 14031f298 FUN_14031f298 body=255 status=ok
// SIG undefined FUN_14031f298(void)

void FUN_14031f298(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      uVar3 = (ulonglong)(int)uVar2;
    }
    else {
      uVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar4 = uVar3 * 0x40;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)[(uVar3 & 0x3ffffffffffffff) * 4]];
        }
        else {
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar3 & (uVar4 + uVar3) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,0x10);
      }
    }
    uVar3 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 >> 6)) {
      uVar3 = uVar4 >> 6 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar3;
    FUN_1446f8d3c(param_1,param_2,uVar3,0x40,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14031f39e FUN_14031f39e body=394 status=ok
// SIG undefined FUN_14031f39e(void)

undefined8 *
FUN_14031f39e(undefined8 *param_1,undefined8 param_2,longlong *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  DWORD DVar8;
  DWORD DVar9;
  longlong lVar10;
  uint uVar11;
  undefined8 *_Src;
  int iVar12;
  undefined8 *_Dst;
  
  *param_1 = param_2;
  param_1[1] = 0;
  param_1[2] = param_3;
  uVar1 = param_4[1];
  uVar3 = *(undefined4 *)((longlong)param_4 + 0xd);
  uVar4 = *(undefined4 *)((longlong)param_4 + 0x11);
  uVar5 = *(undefined4 *)((longlong)param_4 + 0x15);
  uVar6 = *(undefined4 *)((longlong)param_4 + 0x19);
  param_1[3] = *param_4;
  param_1[4] = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x25) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x29) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x2d) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0x31) = uVar6;
  param_1[9] = 0;
  param_1[10] = 0;
  iVar12 = *(int *)(param_4 + 7);
  uVar7 = iVar12 + 0x1fU & 0xffffffe0;
  if (0 < (int)uVar7) {
    uVar11 = 0x80;
    if (0x80 < uVar7) {
      uVar11 = uVar7;
    }
    *(uint *)((longlong)param_1 + 0x54) = uVar11;
    FUN_1446efbd8(param_1 + 7,0);
    iVar12 = *(int *)(param_4 + 7);
  }
  *(int *)(param_1 + 10) = iVar12;
  if (iVar12 != 0) {
    _Src = param_4 + 4;
    if ((undefined8 *)param_4[6] != (undefined8 *)0x0) {
      _Src = (undefined8 *)param_4[6];
    }
    _Dst = param_1 + 7;
    if ((undefined8 *)param_1[9] != (undefined8 *)0x0) {
      _Dst = (undefined8 *)param_1[9];
    }
    memcpy(_Dst,_Src,(ulonglong)(iVar12 + 0x1fU >> 3 & 0xfffffffc));
  }
  param_1[0xb] = 0xffffffff;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0x3f800000;
  *(uint *)((longlong)param_1 + 0x84) = *(uint *)((longlong)param_1 + 0x84) & 0xffffffc0 | 8;
  if ((param_3 != (longlong *)0x0) &&
     (lVar10 = (**(code **)(*param_3 + 0x3d0))(param_3), lVar10 != 0)) {
    if ((DAT_14c86a9f8 == '\x01') &&
       (iVar12 = *(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60
                         ), iVar12 != 2)) {
      if (iVar12 != 1) {
        return param_1;
      }
      DVar8 = FUN_140ad26c0();
      DVar9 = GetCurrentThreadId();
      if (DVar8 != DVar9) {
        return param_1;
      }
    }
    uVar2 = *(undefined8 *)(lVar10 + 0x6f0);
    uVar1 = *(undefined8 *)(lVar10 + 0x6d0);
    param_1[0xd] = *(undefined8 *)(lVar10 + 0x6e0);
    param_1[0xe] = uVar1;
    param_1[0xf] = uVar2;
    *(byte *)((longlong)param_1 + 0x84) = *(byte *)((longlong)param_1 + 0x84) | 0x10;
  }
  return param_1;
}



// FUNCTION 14031f528 FUN_14031f528 body=660 status=ok
// SIG undefined FUN_14031f528(void)

undefined8 * FUN_14031f528(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  byte bVar9;
  uint uVar10;
  uint uVar11;
  undefined8 *_Src;
  undefined8 *_Dst;
  int iVar12;
  
  *param_1 = &PTR_FUN_14aa75248;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 3;
  param_1[6] = *param_2;
  param_1[7] = param_2[1];
  param_1[8] = param_2[2];
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x1c);
  uVar2 = *(undefined4 *)(param_2 + 4);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x24);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x25);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x29);
  uVar6 = *(undefined4 *)((longlong)param_2 + 0x2d);
  uVar7 = *(undefined4 *)((longlong)param_2 + 0x31);
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 3);
  *(undefined4 *)((longlong)param_1 + 0x4c) = uVar1;
  *(undefined4 *)(param_1 + 10) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x54) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x55) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x59) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0x5d) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x61) = uVar7;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  iVar12 = *(int *)(param_2 + 10);
  uVar10 = iVar12 + 0x1fU & 0xffffffe0;
  if (0 < (int)uVar10) {
    uVar11 = 0x80;
    if (0x80 < uVar10) {
      uVar11 = uVar10;
    }
    *(uint *)((longlong)param_1 + 0x84) = uVar11;
    FUN_1446efbd8(param_1 + 0xd,0);
    iVar12 = *(int *)(param_2 + 10);
  }
  *(int *)(param_1 + 0x10) = iVar12;
  if (iVar12 != 0) {
    _Src = param_2 + 7;
    if ((undefined8 *)param_2[9] != (undefined8 *)0x0) {
      _Src = (undefined8 *)param_2[9];
    }
    _Dst = param_1 + 0xd;
    if ((undefined8 *)param_1[0xf] != (undefined8 *)0x0) {
      _Dst = (undefined8 *)param_1[0xf];
    }
    memcpy(_Dst,_Src,(ulonglong)(iVar12 + 0x1fU >> 3 & 0xfffffffc));
  }
  param_1[0x13] = param_2[0xf];
  uVar8 = param_2[0xe];
  param_1[0x11] = param_2[0xd];
  param_1[0x12] = uVar8;
  *(float *)(param_1 + 0x14) = (float)(double)param_2[0xe];
  *(undefined4 *)((longlong)param_1 + 0xa4) = *(undefined4 *)((longlong)param_2 + 0x7c);
  *(float *)(param_1 + 0x15) = (float)(double)param_2[0xd];
  *(undefined4 *)((longlong)param_1 + 0xac) = 0xffffffff;
  param_1[0x16] = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(byte *)(param_1 + 0x19) = *(byte *)((longlong)param_2 + 0x84) & 1;
  *(byte *)((longlong)param_1 + 0xc9) = *(byte *)((longlong)param_2 + 0x84) >> 1 & 1;
  *(byte *)((longlong)param_1 + 0xca) = *(byte *)((longlong)param_2 + 0x84) >> 2 & 1;
  *(byte *)((longlong)param_1 + 0xcb) = *(byte *)((longlong)param_2 + 0x84) >> 3 & 1;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0x1000000;
  *(undefined2 *)(param_1 + 0x1a) = 0;
  *(undefined1 *)((longlong)param_1 + 0xd2) = 0;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 2;
  param_1[0x1b] = 0;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  *(byte *)((longlong)param_1 + 0xe1) = *(byte *)((longlong)param_2 + 0x84) >> 5 & 1;
  *(undefined4 *)((longlong)param_1 + 0xe4) = *(undefined4 *)(param_2 + 0x10);
  param_1[0x1d] = &DAT_3f8000003f800000;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  *(undefined1 **)((longlong)param_1 + 0x10c) = &DAT_3f800000ffffffff;
  *(undefined4 *)((longlong)param_1 + 0x114) = 1;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0x200000000;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1a2) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1aa) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1b2) = 1;
  *(undefined2 *)((longlong)param_1 + 0x119) = 0;
  *(undefined4 *)((longlong)param_1 + 0x11c) = DAT_14c761af0;
  *(undefined1 *)(param_1 + 0x23) = 0xff;
  bVar9 = FUN_14495554e(param_1);
  *(uint *)((longlong)param_1 + 0x4c) =
       *(uint *)((longlong)param_1 + 0x4c) & 0xfdffffff | (uint)bVar9 << 0x19;
  return param_1;
}



// FUNCTION 14031f7c7 FUN_14031f7c7 body=50 status=ok
// SIG undefined FUN_14031f7c7(void)

undefined8 FUN_14031f7c7(byte param_1)

{
  ulonglong uVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  if ((param_1 < 0x12) && ((0x22002U >> (param_1 & 0x1f) & 1) != 0)) {
    uVar1 = CONCAT71((int7)((ulonglong)DAT_14ca85550 * 0x3c >> 8),
                     (&DAT_14ca814cf)[(ulonglong)DAT_14ca85550 * 0x3c]) & 0xffffffffffffff20;
    uVar2 = CONCAT71((int7)(uVar1 >> 8),(byte)uVar1 >> 5);
  }
  return uVar2;
}



// FUNCTION 14031f7fa FUN_14031f7fa body=656 status=ok
// SIG undefined FUN_14031f7fa(void)

undefined8 FUN_14031f7fa(longlong *param_1)

{
  int *piVar1;
  byte *pbVar2;
  char *_Str;
  char cVar3;
  undefined8 uVar4;
  size_t sVar5;
  uint uVar6;
  int iVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong *plVar14;
  char *pcVar15;
  longlong lVar16;
  undefined1 auStack_88 [32];
  byte *local_68;
  longlong *plStack_60;
  longlong local_58 [3];
  char *local_40;
  int local_38;
  undefined1 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58[2] = 0;
  local_58[0] = 0;
  local_58[1] = 0;
  cVar3 = (**(code **)(*param_1 + 0x418))();
  if (cVar3 == '\0') goto LAB_14031f904;
  local_68 = (byte *)0x0;
  plStack_60 = (longlong *)0x0;
  cVar3 = FUN_1446e9750(param_1,&local_68,local_58,0);
  if (cVar3 != '\0') {
    if (local_68 != (byte *)0x0) {
      if ((*local_68 & 2) == 0) {
        plVar8 = &DAT_14c9a1288;
      }
      else {
        plVar8 = (longlong *)(*(longlong *)(local_68 + 8) + 0x18);
      }
      if ((int)plVar8[2] != *(int *)((longlong)plVar8 + 0x3c)) {
        plVar14 = plVar8 + 8;
        if ((longlong *)plVar8[9] != (longlong *)0x0) {
          plVar14 = (longlong *)plVar8[9];
        }
        iVar7 = *(int *)((longlong)plVar14 +
                        (ulonglong)((int)plVar8[10] - 1U & *(uint *)(param_1 + 0x5a)) * 4);
        if (iVar7 != -1) {
          do {
            lVar10 = *plVar8 + (longlong)iVar7 * 0x40;
            if (*(uint *)(*plVar8 + (longlong)iVar7 * 0x40) == *(uint *)(param_1 + 0x5a)) {
              if ((((lVar10 != 0) &&
                   (puVar9 = (undefined8 *)(lVar10 + 0x28), puVar9 != (undefined8 *)0x0)) &&
                  ((byte *)*puVar9 != (byte *)0x0)) && ((*(byte *)*puVar9 & 0x40) == 0))
              goto LAB_14031f8d8;
              break;
            }
            iVar7 = *(int *)(lVar10 + 0x38);
          } while (iVar7 != -1);
        }
      }
    }
    puVar9 = &DAT_14c9a1308;
LAB_14031f8d8:
    pbVar2 = (byte *)*puVar9;
    if (((pbVar2 == (byte *)0x0) || ((*pbVar2 & 3) != 1)) ||
       (_Str = *(char **)(pbVar2 + 8), _Str == (char *)0x0)) {
LAB_14031f8e4:
      local_58[2] = 0;
      uVar11 = 0;
    }
    else {
      sVar5 = strlen(_Str);
      iVar7 = (int)sVar5;
      if (iVar7 == 0) goto LAB_14031f8e4;
      lVar10 = (longlong)iVar7;
      pcVar15 = _Str + lVar10 + -1;
      uVar6 = 0;
      if (pcVar15 < _Str) {
        lVar13 = 0;
      }
      else {
        do {
          if (9 < (byte)(*pcVar15 - 0x30U)) break;
          uVar6 = uVar6 + 1;
          pcVar15 = pcVar15 + -1;
        } while (_Str <= pcVar15);
        lVar13 = 0;
        if (((uVar6 != 0) && ((int)uVar6 < iVar7)) &&
           ((lVar13 = 0, uVar6 < 0xb &&
            (lVar16 = -(ulonglong)uVar6, _Str[lVar16 + lVar10 + -1] == '_')))) {
          if ((uVar6 == 1) || (_Str[lVar16 + lVar10] != '0')) {
            lVar12 = 0;
            do {
              lVar13 = (longlong)_Str[lVar16 + lVar10] + lVar12 * 10;
              lVar12 = lVar13 + -0x30;
              lVar16 = lVar16 + 1;
            } while (lVar16 != 0);
            if (lVar12 < 0x7fffffff) {
              iVar7 = ~uVar6 + iVar7;
              lVar13 = lVar13 + -0x2f;
              goto LAB_14031f9db;
            }
          }
          lVar13 = 0;
        }
LAB_14031f9db:
        if (iVar7 == 0) goto LAB_14031f8e4;
      }
      local_34 = 0;
      local_40 = _Str;
      local_38 = iVar7;
      uVar6 = FUN_14001a6c0(&local_40,1);
      uVar11 = lVar13 << 0x20;
      local_58[2] = (longlong)uVar6;
    }
    local_58[2] = local_58[2] | uVar11;
  }
  plVar8 = plStack_60;
  if (plStack_60 != (longlong *)0x0) {
    LOCK();
    plVar14 = plStack_60 + 1;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)*plVar14 == 0) {
      (**(code **)*plStack_60)(plStack_60);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
LAB_14031f904:
  uVar4 = (**(code **)(*param_1 + 0x450))(param_1,local_58 + 2);
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14031fa98 FUN_14031fa98 body=1875 status=ok
// SIG undefined FUN_14031fa98(void)

void FUN_14031fa98(longlong param_1,longlong param_2)

{
  int iVar1;
  int *piVar2;
  longlong *plVar3;
  uint uVar4;
  int iVar5;
  void *_Src;
  longlong lVar6;
  undefined8 uVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong lVar13;
  undefined8 *puVar14;
  undefined1 auStack_98 [40];
  undefined4 local_70;
  undefined1 local_6c;
  longlong local_68;
  longlong local_60;
  undefined1 local_58;
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((*(longlong *)(param_1 + 0x170) == 0) || (*(longlong *)(param_1 + 0x180) == 0)) {
    local_6c = *(undefined1 *)(param_1 + 0x144);
    local_70 = *(undefined4 *)(param_1 + 0x140);
    local_68 = *(longlong *)(param_1 + 0x148);
    if ((local_68 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    local_60 = *(longlong *)(param_1 + 0x150);
    if ((local_60 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    local_58 = *(undefined1 *)(param_1 + 0x158);
    local_50 = 1;
    FUN_1403201ee(param_1,0);
  }
  else {
    local_6c = *(undefined1 *)(param_1 + 0x144);
    local_70 = *(undefined4 *)(param_1 + 0x140);
    local_68 = *(longlong *)(param_1 + 0x148);
    if ((local_68 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    local_60 = *(longlong *)(param_1 + 0x150);
    if ((local_60 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    local_58 = *(undefined1 *)(param_1 + 0x158);
    local_50 = 1;
    FUN_1403201ee(param_1,1);
    *(undefined4 *)(param_1 + 0x1f0) = *(undefined4 *)(param_1 + 0x168);
    uVar7 = *(undefined8 *)(param_1 + 0x170);
    lVar13 = *(longlong *)(param_1 + 0x178);
    if (lVar13 != 0) {
      LOCK();
      *(int *)(lVar13 + 8) = *(int *)(lVar13 + 8) + 1;
      UNLOCK();
    }
    plVar9 = *(longlong **)(param_1 + 0x200);
    *(undefined8 *)(param_1 + 0x1f8) = uVar7;
    *(longlong *)(param_1 + 0x200) = lVar13;
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar12 = plVar9 + 1;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)*plVar12 == 0) {
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
    uVar7 = *(undefined8 *)(param_1 + 0x180);
    lVar13 = *(longlong *)(param_1 + 0x188);
    if (lVar13 != 0) {
      LOCK();
      *(int *)(lVar13 + 8) = *(int *)(lVar13 + 8) + 1;
      UNLOCK();
    }
    plVar9 = *(longlong **)(param_1 + 0x210);
    *(undefined8 *)(param_1 + 0x208) = uVar7;
    *(longlong *)(param_1 + 0x210) = lVar13;
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar12 = plVar9 + 1;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)*plVar12 == 0) {
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
  }
  FUN_1447e0816(param_1,param_2);
  if ((((((*(char *)(param_1 + 0x160) != '\x01') ||
         (lVar13 = *(longlong *)(param_2 + 0x30), lVar13 == 0)) || (*(int *)(lVar13 + 0x34) == 0))
       || ((uVar4 = *(uint *)(lVar13 + 0x30), (int)uVar4 < 0 || (DAT_14c9647dc <= (int)uVar4)))) ||
      ((lVar11 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8), lVar11 == 0 ||
       ((*(int *)(lVar11 + 0x10) != *(int *)(lVar13 + 0x34) ||
        ((*(uint *)(lVar11 + 8) & 0x10200000) != 0)))))) ||
     ((*(longlong *)(lVar13 + 0x48) == 0 || (*(int *)(lVar13 + 8) < 1)))) goto LAB_14031fb51;
  plVar9 = (longlong *)FUN_14001cc68(0x110);
  plVar9[1] = (longlong)&DAT_100000001;
  *plVar9 = (longlong)&PTR_FUN_14b961970;
  memset(plVar9 + 2,0,0x100);
  *(undefined4 *)(plVar9 + 6) = 0;
  *(undefined4 *)((longlong)plVar9 + 0x34) = 0;
  *(undefined4 *)(plVar9 + 7) = 0;
  *(undefined4 *)((longlong)plVar9 + 0x3c) = 0x3ff00000;
  plVar9[8] = 0;
  plVar9[9] = 0;
  plVar9[10] = 0;
  plVar9[0xb] = 0;
  *(undefined4 *)(plVar9 + 0xc) = 0;
  *(undefined4 *)((longlong)plVar9 + 100) = 0x3ff00000;
  *(undefined4 *)(plVar9 + 0xd) = 0;
  *(undefined4 *)((longlong)plVar9 + 0x6c) = 0x3ff00000;
  plVar9[0xe] = 0x3ff0000000000000;
  plVar9[0xf] = 0;
  plVar9[0x11] = 0;
  plVar9[0x12] = 0;
  plVar9[0x13] = 0;
  plVar9[0x14] = 0;
  plVar9[0x15] = 0;
  plVar9[0x16] = 0;
  *(undefined1 *)(plVar9 + 0x17) = 0;
  plVar9[0x18] = 0;
  plVar9[0x19] = 0;
  plVar9[0x1a] = 0;
  plVar9[0x1b] = 0;
  plVar9[0x1c] = 0;
  plVar9[0x1d] = 0;
  plVar9[0x1e] = 0;
  plVar9[0x1f] = 0;
  plVar9[0x20] = 0;
  if (plVar9 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 400) = 0x10;
    plVar12 = *(longlong **)(param_1 + 0x198);
    if (plVar12 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x198) = 0;
LAB_140320037:
      LOCK();
      plVar3 = plVar12 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*plVar12)(plVar12);
        LOCK();
        piVar2 = (int *)((longlong)plVar12 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
      }
      if (plVar9 != (longlong *)0x0) goto LAB_14031fcc3;
    }
  }
  else {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
    *(longlong **)(param_1 + 400) = plVar9 + 2;
    plVar12 = *(longlong **)(param_1 + 0x198);
    if (plVar9 == plVar12) {
      LOCK();
      plVar12 = plVar9 + 1;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)*plVar12 == 0) {
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
    else {
      *(longlong **)(param_1 + 0x198) = plVar9;
      if (plVar12 != (longlong *)0x0) goto LAB_140320037;
    }
LAB_14031fcc3:
    LOCK();
    plVar12 = plVar9 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
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
  lVar13 = *(longlong *)(param_1 + 400);
  iVar8 = *(int *)(param_2 + 0x28);
  _Src = *(void **)(param_2 + 0x20);
  *(int *)(lVar13 + 0x80) = iVar8;
  if (iVar8 == 0 && *(int *)(lVar13 + 0x84) == 0) {
    *(undefined4 *)(lVar13 + 0x84) = 0;
  }
  else {
    FUN_144756262((undefined8 *)(lVar13 + 0x78),iVar8);
    if (iVar8 != 0) {
      memcpy(*(void **)(lVar13 + 0x78),_Src,(longlong)iVar8 * 0x60);
    }
  }
  FUN_140101796(*(longlong *)(param_1 + 400) + 0x98,param_2 + 0x38);
  FUN_14495568a(*(longlong *)(param_1 + 400) + 0xb8);
  plVar9 = (longlong *)(param_1 + 0x1b0);
  iVar8 = *(int *)(param_1 + 0x164);
  iVar5 = *(int *)(param_1 + 0x1b8);
  if ((iVar8 < 0) || (iVar5 <= iVar8)) {
    iVar1 = iVar8 + 1;
    if (iVar8 < iVar5) {
      if (iVar8 < -1) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar1);
      }
      if (iVar1 < iVar5) {
        FUN_148ced0e4(plVar9,iVar1);
        FUN_148ced13e(plVar9);
      }
    }
    else {
      *(int *)(param_1 + 0x1b8) = iVar1;
      if ((uint)(*(int *)(param_1 + 0x1bc) - iVar5) < (uint)(iVar1 - iVar5)) {
        FUN_140320c1c(plVar9);
      }
      memset((void *)((longlong)iVar5 * 0x10 + *plVar9),0,(longlong)(iVar1 - iVar5) << 4);
    }
    iVar8 = *(int *)(param_1 + 0x164);
  }
  lVar13 = *plVar9;
  lVar10 = (longlong)iVar8;
  lVar11 = *(longlong *)(lVar13 + lVar10 * 0x10);
  if (lVar11 == 0) {
    plVar9 = (longlong *)FUN_14001cc68(0x20,0x10);
    plVar9[1] = (longlong)&DAT_100000001;
    *plVar9 = (longlong)&PTR_FUN_14b961990;
    plVar9[2] = 0;
    plVar9[3] = 0;
    if (plVar9 == (longlong *)0x0) {
      puVar14 = (undefined8 *)(lVar13 + lVar10 * 0x10);
      *puVar14 = 0x10;
      plVar12 = (longlong *)puVar14[1];
      if (plVar12 != (longlong *)0x0) {
        puVar14[1] = 0;
LAB_140320149:
        LOCK();
        plVar3 = plVar12 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*plVar12)(plVar12);
          LOCK();
          piVar2 = (int *)((longlong)plVar12 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar12 + 0x10))(plVar12);
          }
        }
        if (plVar9 != (longlong *)0x0) goto LAB_14031ff74;
      }
    }
    else {
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
      lVar13 = *(longlong *)(param_1 + 0x1b0);
      lVar11 = (longlong)*(int *)(param_1 + 0x164) * 0x10;
      *(longlong **)(lVar13 + lVar11) = plVar9 + 2;
      plVar12 = *(longlong **)(lVar13 + 8 + lVar11);
      if (plVar9 == plVar12) {
        LOCK();
        plVar12 = plVar9 + 1;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)*plVar12 == 0) {
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
      else {
        *(longlong **)(lVar13 + lVar11 + 8) = plVar9;
        if (plVar12 != (longlong *)0x0) goto LAB_140320149;
      }
LAB_14031ff74:
      LOCK();
      plVar12 = plVar9 + 1;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)*plVar12 == 0) {
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
    FUN_140816ffa(*(undefined8 *)
                   (*(longlong *)(param_1 + 0x1b0) + (longlong)*(int *)(param_1 + 0x164) * 0x10),
                  *(undefined8 *)(param_2 + 0x30));
    lVar10 = (longlong)*(int *)(param_1 + 0x164);
    lVar13 = *(longlong *)(param_1 + 0x1b0);
    lVar11 = *(longlong *)(lVar13 + lVar10 * 0x10);
  }
  lVar6 = *(longlong *)(param_1 + 400);
  lVar13 = *(longlong *)(lVar13 + 8 + lVar10 * 0x10);
  if (lVar13 != 0) {
    LOCK();
    *(int *)(lVar13 + 8) = *(int *)(lVar13 + 8) + 1;
    UNLOCK();
  }
  plVar9 = *(longlong **)(lVar6 + 0x90);
  *(longlong *)(lVar6 + 0x88) = lVar11;
  *(longlong *)(lVar6 + 0x90) = lVar13;
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar12 = plVar9 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
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
LAB_14031fb51:
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1403201ee FUN_1403201ee body=218 status=ok
// SIG undefined FUN_1403201ee(void)

void FUN_1403201ee(longlong param_1,int param_2,undefined4 *param_3)

{
  char cVar1;
  
  if (((-1 < param_2) && (*(int *)(param_1 + 0x34) != param_2)) &&
     (param_2 < *(int *)(param_1 + 0x28))) {
    if (*(char *)(param_1 + 100) == '\x01') {
      *(undefined1 *)(param_1 + 100) = 0;
    }
    cVar1 = *(char *)(param_1 + 0xf8);
    if (cVar1 == '\x01') {
      if (*(longlong *)(param_1 + 200) != 0) {
        FUN_1400020a8();
      }
      *(undefined1 *)(param_1 + 0xf8) = 0;
      cVar1 = '\0';
    }
    if (*(char *)(param_3 + 8) == '\x01') {
      if (*(char *)(param_3 + 1) == '\x0f') {
        if ((undefined4 *)(param_1 + 0x60) != param_3) {
          *(undefined4 *)(param_1 + 0x60) = *param_3;
          *(undefined1 *)(param_1 + 100) = 1;
        }
      }
      else {
        if ((cVar1 != '\0') && (*(longlong *)(param_1 + 200) != 0)) {
          FUN_1400020a8();
        }
        FUN_140320506(param_1 + 0x68,param_2,param_3,param_1 + 0x100);
        *(undefined1 *)(param_1 + 0xf8) = 1;
      }
    }
    FUN_1403202c8(param_1,param_2);
    return;
  }
  return;
}



// FUNCTION 1403202c8 FUN_1403202c8 body=367 status=ok
// SIG undefined FUN_1403202c8(void)

void FUN_1403202c8(longlong param_1,uint param_2)

{
  float fVar1;
  short sVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_88 [40];
  longlong local_60 [2];
  undefined1 local_50;
  undefined8 local_4c;
  longlong local_40 [2];
  undefined1 local_30;
  undefined8 local_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((*(uint *)(param_1 + 0x34) == param_2) || (*(int *)(param_1 + 0x28) == 0)) goto LAB_1403203b4;
  if (((int)param_2 < 0) || (*(int *)(param_1 + 0x128) <= (int)param_2)) {
    *(uint *)(param_1 + 0x34) = param_2;
LAB_14032032f:
    lVar3 = *(longlong *)(param_1 + 0x58);
    if (lVar3 != 0) {
      local_60[1] = 0;
      local_50 = 1;
      local_4c = 0xffffffffffffffff;
      lVar5 = (longlong)(int)param_2 * 0x10;
      local_60[0] = lVar3;
      FUN_140320438(*(longlong *)(param_1 + 0x20) + lVar5,local_60);
      if ((*(short *)(*(longlong *)(param_1 + 0x58) + 0x5d8) != -1) &&
         (*(longlong *)(*(longlong *)(param_1 + 0x58) + 0x5d0) != -1)) {
        sVar2 = *(short *)(*(longlong *)(param_1 + 0x48) + 8 + lVar5);
        plVar4 = (longlong *)(*(longlong *)(param_1 + 0x48) + lVar5);
        if ((sVar2 == -1) || ((*plVar4 == -1 || (sVar2 != *(short *)(lVar3 + 0x5d8))))) {
          *(undefined2 *)(plVar4 + 1) = *(undefined2 *)(lVar3 + 0x5d8);
          *plVar4 = *(longlong *)(lVar3 + 0x5d0);
          *(undefined2 *)((longlong)plVar4 + 10) = *(undefined2 *)(lVar3 + 0x5da);
          local_40[1] = 0;
          local_30 = 1;
          local_2c = 0xffffffffffffffff;
          plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x20) + lVar5);
          local_40[0] = lVar3;
          if (plVar4 != (longlong *)0x0) {
            (**(code **)(*plVar4 + 0x18))(plVar4,local_40);
          }
        }
      }
    }
  }
  else {
    lVar3 = param_1 + 0x100;
    if (*(longlong *)(param_1 + 0x120) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x120);
    }
    fVar1 = *(float *)(lVar3 + (ulonglong)param_2 * 4);
    *(uint *)(param_1 + 0x34) = param_2;
    if (fVar1 <= 0.0) goto LAB_14032032f;
  }
  if (*(char *)(param_1 + 0xf8) == '\0') {
    FUN_14025b786(param_1);
  }
LAB_1403203b4:
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140320438 FUN_140320438 body=108 status=ok
// SIG undefined FUN_140320438(void)

void FUN_140320438(longlong *param_1,undefined4 *param_2)

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
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1403204a6();
  if ((longlong *)*param_1 != (longlong *)0x0) {
    local_38 = *param_2;
    uStack_34 = param_2[1];
    uStack_30 = param_2[2];
    uStack_2c = param_2[3];
    local_28 = param_2[4];
    uStack_20 = param_2[5];
    uStack_1c = param_2[7];
    uStack_24 = (undefined4)param_1[1];
    (**(code **)(*(longlong *)*param_1 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403204a6 FUN_1403204a6 body=96 status=ok
// SIG undefined FUN_1403204a6(void)

void FUN_1403204a6(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  
  if ((*param_1 == 0) && ((int)param_1[1] != -1)) {
    if (*param_2 == 0) {
      plVar2 = (longlong *)0x0;
    }
    else {
      plVar2 = *(longlong **)(*param_2 + 0x138);
    }
    plVar2 = (longlong *)(**(code **)(*plVar2 + 0x20))();
    iVar1 = (int)param_1[1];
    if ((-1 < (longlong)iVar1) && (iVar1 < (int)plVar2[1])) {
      *param_1 = (longlong)*(int *)(*(longlong *)(*plVar2 + (longlong)iVar1 * 8) + 0x44) +
                 *(longlong *)(*param_2 + 0x130);
    }
  }
  return;
}



// FUNCTION 140320506 FUN_140320506 body=528 status=ok
// SIG undefined FUN_140320506(void)

undefined4 * FUN_140320506(undefined4 *param_1,int param_2,undefined4 *param_3,void *param_4)

{
  int iVar1;
  void *pvVar2;
  longlong lVar3;
  byte bVar4;
  char cVar5;
  char cVar6;
  undefined4 *_Dst;
  undefined4 *puVar7;
  float fVar8;
  float fVar9;
  
  *param_1 = 0;
  param_1[3] = param_2;
  *(undefined8 *)(param_1 + 4) = 0;
  param_1[6] = 0x3e4ccccd;
  *(undefined8 *)(param_1 + 0xb) = 0x3f80000000000000;
  *(undefined1 *)(param_1 + 0xd) = 0;
  FUN_1404163bc(param_1 + 4);
  puVar7 = param_1 + 0x10;
  *(undefined8 *)(param_1 + 0x18) = 0;
  iVar1 = *(int *)((longlong)param_4 + 0x28);
  pvVar2 = *(void **)((longlong)param_4 + 0x20);
  param_1[0x1a] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[0x1b] = 8;
  }
  else {
    if (pvVar2 != (void *)0x0) {
      param_4 = pvVar2;
    }
    FUN_140320716(puVar7,iVar1,0);
    _Dst = *(undefined4 **)(param_1 + 0x18);
    if (*(undefined4 **)(param_1 + 0x18) == (undefined4 *)0x0) {
      _Dst = puVar7;
    }
    memcpy(_Dst,param_4,(longlong)iVar1 << 2);
  }
  *(undefined1 *)(param_1 + 0x1d) = *(undefined1 *)(param_3 + 1);
  param_1[0x1c] = *param_3;
  lVar3 = *(longlong *)(param_3 + 2);
  *(longlong *)(param_1 + 0x1e) = lVar3;
  if ((lVar3 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  bVar4 = DAT_14c950c29;
  lVar3 = *(longlong *)(param_3 + 4);
  *(longlong *)(param_1 + 0x20) = lVar3;
  if ((lVar3 != 0 & bVar4) == 1) {
    FUN_1456cec3c();
  }
  *(undefined1 *)(param_1 + 0x22) = *(undefined1 *)(param_3 + 6);
  if ((param_2 < 0) || ((int)param_1[0x1a] <= param_2)) {
    param_1[1] = 0;
  }
  else {
    cVar6 = (char)param_1[0x1d];
    cVar5 = '\0';
    if (cVar6 == '\x0f') {
      fVar8 = (float)param_1[0x1c];
    }
    else {
      if (*(undefined4 **)(param_1 + 0x18) != (undefined4 *)0x0) {
        puVar7 = *(undefined4 **)(param_1 + 0x18);
      }
      fVar8 = 1.0 - (float)puVar7[(int)param_1[3]];
      if (cVar6 == '\x02') {
        fVar9 = fVar8 * fVar8;
        fVar8 = fVar8 * 1.6666666 + (fVar8 * fVar9 * 1.3333334 - (fVar9 + fVar9));
      }
      else {
        if (1.0 <= fVar8) {
          fVar8 = 1.0;
        }
        if (fVar8 <= 0.0) {
          fVar8 = 0.0;
        }
      }
      fVar8 = (float)param_1[0x1c] * fVar8;
      cVar5 = cVar6;
    }
    param_1[1] = fVar8;
    if (fVar8 <= 0.0) {
      fVar8 = 0.0;
    }
    param_1[6] = fVar8;
    *(undefined2 *)((longlong)param_1 + 0x36) = 0x101;
    *(char *)(param_1 + 0xd) = cVar5;
    lVar3 = *(longlong *)(param_1 + 0x1e);
    if ((lVar3 != 0) && (DAT_14c950c29 != 0)) {
      FUN_1456cec3c(lVar3);
    }
    *(longlong *)(param_1 + 4) = lVar3;
    *(undefined8 *)(param_1 + 0xb) = 0x3f80000000000000;
    *(undefined1 *)((longlong)param_1 + 0x35) = 1;
    *(undefined1 *)((longlong)param_1 + 0x37) = 1;
  }
  return param_1;
}



// FUNCTION 140320716 FUN_140320716 body=101 status=ok
// SIG undefined FUN_140320716(void)

void FUN_140320716(longlong param_1,uint param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = 8;
    if (8 < param_2) {
      uVar2 = FUN_144a3809e((longlong)(int)param_2 << 2,0);
      iVar1 = (int)(uVar2 >> 2);
      iVar3 = 0x7fffffff;
      if ((int)param_2 <= iVar1) {
        iVar3 = iVar1;
      }
    }
  }
  if (param_3 < iVar3) {
    FUN_14032077c(param_1,0,iVar3,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0x2c) = param_3;
  return;
}



// FUNCTION 14032077c FUN_14032077c body=132 status=ok
// SIG undefined FUN_14032077c(void)

void FUN_14032077c(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x20);
  if ((uint)param_3 < 9) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 2);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x20,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x20),param_1,(longlong)param_2 << 2);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x20,param_2,param_3,param_4);
  return;
}



// FUNCTION 140320800 FUN_140320800 body=1032 status=ok
// SIG undefined FUN_140320800(void)

void FUN_140320800(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  char *pcVar4;
  longlong *plVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_128 [32];
  undefined8 *local_108;
  undefined8 *local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  wchar_t *local_e8;
  undefined1 *local_e0;
  undefined1 *local_d8;
  code **local_d0;
  undefined1 *local_c8;
  code *local_c0;
  longlong *local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  code *local_80;
  float local_78;
  longlong local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_128;
  *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) & 0xfe;
  *(undefined4 *)(param_1 + 3) = 0xfffffffe;
  *(undefined4 *)(param_1 + 4) = 0xfffffffe;
  *(undefined1 *)((longlong)param_1 + 0x3c) = 0;
  uVar2 = FUN_14477dc2a();
  FUN_14477dadc(uVar2,param_2);
  plVar3 = (longlong *)(**(code **)(*param_1 + 0x198))(param_1);
  if (plVar3 == (longlong *)0x0) {
LAB_1403209ee:
    plVar3 = (longlong *)0x0;
  }
  else {
    if (DAT_14cacbb10 == 0) {
      local_d0 = &local_80;
      local_80 = FUN_1449e2820;
      local_c0 = FUN_14081d0ea;
      local_c8 = &LAB_1463a1b5a;
      local_d8 = &LAB_147903fa7;
      local_e0 = &LAB_1459b1fdd;
      local_e8 = L"Engine";
      local_f0 = 0;
      local_f8 = 0x10000000;
      local_100 = (undefined8 *)CONCAT44(local_100._4_4_,8);
      local_108 = (undefined8 *)CONCAT44(local_108._4_4_,0x1e8);
      FUN_14081cfa3(L"/Script/Engine",L"AnimMontage",&DAT_14cacbb10,FUN_1463a4b6e);
    }
    if ((*(int *)(DAT_14cacbb10 + 0x38) <= *(int *)(plVar3[2] + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(DAT_14cacbb10 + 0x38) * 8) ==
        DAT_14cacbb10 + 0x30)) goto LAB_1403209ee;
  }
  uVar6 = (**(code **)(*param_1 + 0x1d0))(param_1);
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar6;
  *(undefined1 *)((longlong)param_1 + 0x44) = 0;
  if (plVar3 == (longlong *)0x0) goto LAB_14032099c;
  local_68 = (**(code **)(*param_1 + 0x198))(param_1);
  if (((local_68 == 0) || (cVar1 = (**(code **)(*param_1 + 0x1d8))(param_1), cVar1 == '\0')) ||
     (plVar5 = (longlong *)FUN_1479295f6(), plVar5 == (longlong *)0x0)) {
LAB_1403208e4:
    fVar7 = (float)(**(code **)(*param_1 + 0x1d0))(param_1);
  }
  else {
    local_100 = &local_98;
    local_98 = 0;
    uStack_90 = 0;
    local_88 = 0;
    local_108 = &local_a8;
    local_a8 = 0;
    uStack_a0 = 0;
    local_b8 = &local_68;
    local_b0 = 1;
    (**(code **)(*plVar5 + 0x10))(plVar5,&local_80,param_2);
    fVar7 = local_78;
    if (local_80 == (code *)0x0) goto LAB_1403208e4;
  }
  fVar8 = (float)(**(code **)(*param_1 + 0x1c0))(param_1);
  fVar9 = (float)(**(code **)(*param_1 + 0x1b8))(param_1);
  fVar10 = (float)(**(code **)(*plVar3 + 0x2b0))(plVar3);
  fVar11 = fVar7;
  if (fVar10 <= fVar7) {
    fVar11 = fVar10;
  }
  if (fVar11 <= 0.0) {
    fVar11 = 0.0;
  }
  *(float *)((longlong)param_1 + 0x2c) = fVar11;
  fVar11 = (float)(~-(uint)(ABS(fVar9) <= 1e-08) & (uint)(fVar8 / fVar9));
  pcVar4 = (char *)(**(code **)(*param_1 + 0x1c8))(param_1);
  if (*pcVar4 == '\x01') {
    fVar8 = *(float *)(pcVar4 + 8) - *(float *)(pcVar4 + 4);
    if (ABS(fVar8) <= 1e-08) {
      fVar8 = (float)(-(uint)(*(float *)(pcVar4 + 8) <= fVar11) & 0x3f800000);
    }
    else {
      fVar8 = (fVar11 - *(float *)(pcVar4 + 4)) / fVar8;
    }
    fVar11 = (*(float *)(pcVar4 + 0x10) - *(float *)(pcVar4 + 0xc)) * fVar8 +
             *(float *)(pcVar4 + 0xc);
  }
  fVar11 = fVar11 * *(float *)(pcVar4 + 0x14) + *(float *)(pcVar4 + 0x18);
  if (pcVar4[1] == '\x01') {
    if (*(float *)(pcVar4 + 0x20) <= fVar11) {
      fVar11 = *(float *)(pcVar4 + 0x20);
    }
    if (fVar11 <= *(float *)(pcVar4 + 0x1c)) {
      fVar11 = *(float *)(pcVar4 + 0x1c);
    }
  }
  if (pcVar4[2] == '\x01') {
    if (*(char *)((longlong)param_1 + 0x44) == '\x01') {
      fVar8 = *(float *)(param_1 + 8);
      if ((0.0 < *(float *)(pcVar4 + (ulonglong)(fVar11 < fVar8) * 4 + 0x24)) &&
         (fVar9 = fVar11 - fVar8, 1e-08 <= fVar9 * fVar9)) {
        fVar11 = *(float *)(pcVar4 + (ulonglong)(fVar11 < fVar8) * 4 + 0x24) * 0.0;
        if (1.0 <= fVar11) {
          fVar11 = 1.0;
        }
        if (fVar11 <= 0.0) {
          fVar11 = 0.0;
        }
        fVar11 = fVar8 + fVar9 * fVar11;
      }
    }
    *(float *)(param_1 + 8) = fVar11;
  }
  *(undefined1 *)((longlong)param_1 + 0x44) = 1;
  if (((fVar7 == 0.0) && (!NAN(fVar7))) && (fVar11 * *(float *)(plVar3 + 0x16) < 0.0)) {
    uVar6 = (**(code **)(*plVar3 + 0x2b0))(plVar3);
    *(undefined4 *)((longlong)param_1 + 0x2c) = uVar6;
  }
LAB_14032099c:
  if ((local_60 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140320c1c FUN_140320c1c body=269 status=ok
// SIG undefined FUN_140320c1c(void)

void FUN_140320c1c(longlong param_1,int param_2)

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



// FUNCTION 140320d2a FUN_140320d2a body=294 status=ok
// SIG undefined FUN_140320d2a(void)

void FUN_140320d2a(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4,
                  char *param_5)

{
  int *piVar1;
  ulonglong uVar2;
  longlong *plVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x120));
  if (*param_5 == '\0') {
    FUN_140320f38(param_1 + 0x80,param_2);
    uVar2 = param_3 / (longlong)(ulonglong)*(uint *)(param_1 + 0x70);
    iVar6 = (int)((param_3 + param_4 + -1) / (longlong)(ulonglong)*(uint *)(param_1 + 0x70));
    if ((int)uVar2 <= iVar6) {
      do {
        plVar3 = (longlong *)FUN_140320e50(param_1,uVar2 & 0xffffffff);
        piVar1 = (int *)((longlong)plVar3 + 0x2c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          if ((*(char *)((longlong)plVar3 + 0x34) == '\x01') &&
             (*(char *)((longlong)plVar3 + 0x35) == '\0')) {
            FUN_140033559(".\\Runtime/PakFile/Private/IPlatformFilePak.cpp",0xe64,
                          L"RemoveRequest called on Request that still has a block in processing.");
          }
          plVar4 = (longlong *)*plVar3;
          if (plVar4 != (longlong *)0x0) {
            if (*(char *)((longlong)plVar4 + 0x53) == '\0') {
              *(undefined1 *)((longlong)plVar4 + 0x53) = 1;
              *(undefined1 *)(plVar4 + 10) = 1;
              if (*(char *)((longlong)plVar4 + 0x51) == '\0') {
                (**(code **)(*plVar4 + 0x18))();
              }
            }
            plVar4 = (longlong *)*plVar3;
            if (*(char *)((longlong)plVar4 + 0x51) == '\0') {
              (**(code **)(*plVar4 + 0x10))(plVar4,0);
              plVar4 = (longlong *)*plVar3;
            }
            if (plVar4 != (longlong *)0x0) {
              (**(code **)*plVar4)(plVar4,1);
            }
            *plVar3 = 0;
            *(int *)(param_1 + 0x148) = *(int *)(param_1 + 0x148) + -1;
          }
          FUN_140320ec2(plVar3);
        }
        uVar5 = (int)uVar2 + 1;
        uVar2 = (ulonglong)uVar5;
      } while (iVar6 + 1U != uVar5);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000140320ddc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x120));
  return;
}



// FUNCTION 140320e50 FUN_140320e50 body=114 status=ok
// SIG undefined FUN_140320e50(void)

longlong FUN_140320e50(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  lVar1 = *(longlong *)(param_1 + 0xd0);
  lVar4 = (longlong)param_2;
  lVar2 = *(longlong *)(lVar1 + lVar4 * 8);
  if (lVar2 == 0) {
    puVar3 = (undefined8 *)FUN_14001cc68(0x38,0x10);
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = 0;
    *(undefined4 *)(puVar3 + 6) = 0xffffffff;
    *(undefined2 *)((longlong)puVar3 + 0x34) = 0;
    *(undefined1 *)((longlong)puVar3 + 0x36) = 0;
    *(undefined8 **)(lVar1 + lVar4 * 8) = puVar3;
    *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xd0) + lVar4 * 8) + 0x30) = param_2;
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0xd0) + lVar4 * 8);
  }
  return lVar2;
}



// FUNCTION 140320ec2 FUN_140320ec2 body=118 status=ok
// SIG undefined FUN_140320ec2(void)

void FUN_140320ec2(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  *param_1 = 0;
  puVar2 = (undefined8 *)param_1[3];
  if (puVar2 != (undefined8 *)0x0) {
    param_1[3] = 0;
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if (param_1[1] != 0) {
    FUN_1400020a8();
    param_1[1] = 0;
  }
  *(undefined4 *)(param_1 + 4) = 0;
  if (param_1[2] != 0) {
    FUN_1400020a8();
    param_1[2] = 0;
  }
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined2 *)((longlong)param_1 + 0x34) = 0;
  return;
}



// FUNCTION 140320f38 FUN_140320f38 body=184 status=ok
// SIG undefined FUN_140320f38(void)

void FUN_140320f38(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  int *piVar7;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar3 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    plVar6 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar6 +
                    ((longlong)(int)(uVar3 >> 0x10 ^ uVar3) & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar4 != -1) {
      lVar2 = *param_1;
      do {
        lVar1 = lVar2 + (longlong)iVar4 * 0x10;
        if (*(ulonglong *)(lVar2 + (longlong)iVar4 * 0x10) == param_2) {
          iVar5 = *(int *)((longlong)plVar6 + (longlong)*(int *)(lVar1 + 0xc) * 4);
          if (iVar5 == iVar4) {
            piVar7 = (int *)((longlong)plVar6 + (longlong)*(int *)(lVar1 + 0xc) * 4);
          }
          else {
            do {
              piVar7 = (int *)(lVar2 + (longlong)iVar5 * 0x10 + 8);
              iVar5 = *piVar7;
            } while (iVar5 != iVar4);
          }
          *piVar7 = *(int *)(lVar1 + 8);
          FUN_140320ff0(param_1,iVar4);
          return;
        }
        iVar4 = *(int *)(lVar1 + 8);
      } while (iVar4 != -1);
    }
  }
  return;
}



// FUNCTION 140320ff0 FUN_140320ff0 body=116 status=ok
// SIG undefined FUN_140320ff0(void)

void FUN_140320ff0(longlong *param_1,int param_2)

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
  uVar4 = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
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



// FUNCTION 140321064 FUN_140321064 body=269 status=ok
// SIG undefined FUN_140321064(void)

void FUN_140321064(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  
  uVar1 = *(uint *)(param_1 + 0x908);
  if (param_2 <= (int)uVar1) {
    if (uVar1 < 0x11) {
      iVar6 = 0x10;
    }
    else {
      lVar2 = (longlong)(int)uVar1;
      if (0x10 < *(uint *)(param_1 + 0x90c)) {
        lVar2 = lVar2 + ((ulonglong)(lVar2 * 3) >> 3) + 0x10;
      }
      uVar5 = lVar2 * 0x90;
      if (DAT_14c872d28 != (longlong *)0x0) {
        if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
          if (uVar5 < 0x7ff1) {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar5 >> 4]];
          }
          else {
            uVar4 = 0x10;
            if (0x10 < DAT_14c841df8) {
              uVar4 = (ulonglong)DAT_14c841df8;
            }
            uVar5 = -uVar4 & (uVar5 + uVar4) - 1;
          }
        }
        else {
          uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,0);
        }
      }
      iVar3 = (int)(uVar5 / 0x90);
      iVar6 = 0x7fffffff;
      if ((int)uVar1 <= iVar3) {
        iVar6 = iVar3;
      }
    }
    *(int *)(param_1 + 0x90c) = iVar6;
    FUN_140321172(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 140321172 FUN_140321172 body=149 status=ok
// SIG undefined FUN_140321172(void)

void FUN_140321172(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x900);
  if ((uint)param_3 < 0x11) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x90);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x900,0,param_3,0x90);
    memmove(*(void **)((longlong)param_1 + 0x900),param_1,(longlong)param_2 * 0x90);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x900,param_2,param_3,0x90);
  return;
}



// FUNCTION 140321208 FUN_140321208 body=1719 status=ok
// SIG undefined FUN_140321208(void)

undefined8 * FUN_140321208(undefined8 *param_1,char param_2,char *param_3,char *param_4)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  undefined8 uVar4;
  int iVar5;
  uint uVar6;
  undefined8 *puVar7;
  bool bVar8;
  
  if (param_2 == '\n') {
    bVar1 = FUN_1403218c0(param_3,param_4);
    *(undefined1 *)param_1 = 1;
    *(uint *)((longlong)param_1 + 0xc) = (uint)bVar1;
    puVar7 = &DAT_14cb7c580;
    if (bVar1 != 0) {
      puVar7 = &DAT_14cb7c588;
    }
LAB_140321241:
    uVar4 = *puVar7;
    goto LAB_140321244;
  }
  switch(param_2) {
  case '\x01':
    cVar2 = *param_3;
    if (cVar2 == '\x03') {
      bVar8 = *(longlong *)(param_3 + 4) == 0;
LAB_14032157e:
      uVar3 = (uint)!bVar8;
    }
    else if (cVar2 == '\x02') {
      uVar3 = *(uint *)(param_3 + 0xc);
    }
    else {
      uVar3 = 0;
      if (cVar2 == '\x01') {
        bVar8 = *(int *)(param_3 + 0xc) == 0;
        goto LAB_14032157e;
      }
    }
    cVar2 = *param_4;
    if (cVar2 == '\x03') {
      bVar8 = *(longlong *)(param_4 + 4) == 0;
LAB_140321693:
      uVar6 = (uint)!bVar8;
    }
    else if (cVar2 == '\x02') {
      uVar6 = *(uint *)(param_4 + 0xc);
    }
    else {
      uVar6 = 0;
      if (cVar2 == '\x01') {
        bVar8 = *(int *)(param_4 + 0xc) == 0;
        goto LAB_140321693;
      }
    }
    iVar5 = uVar6 * uVar3;
    goto LAB_14032134f;
  case '\x02':
    cVar2 = *param_4;
    if (cVar2 == '\x03') {
      bVar8 = *(longlong *)(param_4 + 4) == 0;
LAB_1403215b9:
      uVar6 = (uint)!bVar8;
LAB_1403215bc:
      if (uVar6 != 0) {
        cVar2 = *param_3;
        if (cVar2 == '\x03') {
          bVar8 = *(longlong *)(param_3 + 4) == 0;
LAB_1403217e6:
          uVar3 = (uint)!bVar8;
        }
        else if (cVar2 == '\x02') {
          uVar3 = *(uint *)(param_3 + 0xc);
        }
        else {
          uVar3 = 0;
          if (cVar2 == '\x01') {
            bVar8 = *(int *)(param_3 + 0xc) == 0;
            goto LAB_1403217e6;
          }
        }
        uVar3 = (int)uVar3 / (int)uVar6;
        goto LAB_14032173f;
      }
    }
    else {
      if (cVar2 == '\x02') {
        uVar6 = *(uint *)(param_4 + 0xc);
        goto LAB_1403215bc;
      }
      if (cVar2 == '\x01') {
        bVar8 = *(int *)(param_4 + 0xc) == 0;
        goto LAB_1403215b9;
      }
    }
    cVar2 = *param_3;
    if (cVar2 == '\x03') {
      bVar8 = *(longlong *)(param_3 + 4) == 0;
LAB_1403217bc:
      uVar3 = (uint)!bVar8;
    }
    else if (cVar2 == '\x02') {
      uVar3 = *(uint *)(param_3 + 0xc);
    }
    else {
      uVar3 = 0;
      if (cVar2 == '\x01') {
        bVar8 = *(int *)(param_3 + 0xc) == 0;
        goto LAB_1403217bc;
      }
    }
    goto LAB_14032173f;
  case '\x03':
    cVar2 = *param_4;
    if (cVar2 == '\x03') {
      bVar8 = *(longlong *)(param_4 + 4) == 0;
LAB_140321626:
      uVar3 = (uint)!bVar8;
LAB_140321629:
      if (uVar3 == 0) goto LAB_14032165a;
      cVar2 = *param_3;
      if (cVar2 == '\x03') {
        bVar8 = *(longlong *)(param_3 + 4) == 0;
LAB_1403217fe:
        uVar6 = (uint)!bVar8;
      }
      else if (cVar2 == '\x02') {
        uVar6 = *(uint *)(param_3 + 0xc);
      }
      else {
        uVar6 = 0;
        if (cVar2 == '\x01') {
          bVar8 = *(int *)(param_3 + 0xc) == 0;
          goto LAB_1403217fe;
        }
      }
      uVar6 = (int)uVar6 % (int)uVar3;
    }
    else {
      if (cVar2 == '\x02') {
        uVar3 = *(uint *)(param_4 + 0xc);
        goto LAB_140321629;
      }
      if (cVar2 == '\x01') {
        bVar8 = *(int *)(param_4 + 0xc) == 0;
        goto LAB_140321626;
      }
LAB_14032165a:
      cVar2 = *param_3;
      if (cVar2 == '\x03') {
        bVar8 = *(longlong *)(param_3 + 4) == 0;
LAB_1403217d4:
        uVar6 = (uint)!bVar8;
      }
      else if (cVar2 == '\x02') {
        uVar6 = *(uint *)(param_3 + 0xc);
      }
      else {
        uVar6 = 0;
        if (cVar2 == '\x01') {
          bVar8 = *(int *)(param_3 + 0xc) == 0;
          goto LAB_1403217d4;
        }
      }
    }
    *(undefined1 *)param_1 = 2;
    *(uint *)((longlong)param_1 + 0xc) = uVar6;
    goto LAB_140321355;
  case '\x04':
    cVar2 = *param_3;
    if (cVar2 == '\x02') {
      uVar3 = *(uint *)(param_3 + 0xc);
    }
    else {
      uVar3 = 0;
      if (cVar2 == '\x03') {
        bVar8 = *(longlong *)(param_3 + 4) == 0;
      }
      else {
        if (cVar2 != '\x01') goto LAB_14032133e;
        bVar8 = *(int *)(param_3 + 0xc) == 0;
      }
      uVar3 = (uint)!bVar8;
    }
LAB_14032133e:
    cVar2 = *param_4;
    if (cVar2 == '\x02') {
      uVar6 = *(uint *)(param_4 + 0xc);
    }
    else {
      uVar6 = 0;
      if (cVar2 == '\x03') {
        bVar8 = *(longlong *)(param_4 + 4) == 0;
      }
      else {
        if (cVar2 != '\x01') goto LAB_14032134d;
        bVar8 = *(int *)(param_4 + 0xc) == 0;
      }
      uVar6 = (uint)!bVar8;
    }
LAB_14032134d:
    iVar5 = uVar6 + uVar3;
LAB_14032134f:
    *(undefined1 *)param_1 = 2;
    *(int *)((longlong)param_1 + 0xc) = iVar5;
LAB_140321355:
    *(undefined8 *)((longlong)param_1 + 4) = 0;
    return param_1;
  case '\x05':
    cVar2 = *param_3;
    if (cVar2 == '\x03') {
      bVar8 = *(longlong *)(param_3 + 4) == 0;
LAB_1403216aa:
      uVar3 = (uint)!bVar8;
    }
    else if (cVar2 == '\x02') {
      uVar3 = *(uint *)(param_3 + 0xc);
    }
    else {
      uVar3 = 0;
      if (cVar2 == '\x01') {
        bVar8 = *(int *)(param_3 + 0xc) == 0;
        goto LAB_1403216aa;
      }
    }
    cVar2 = *param_4;
    if (cVar2 == '\x03') {
      bVar8 = *(longlong *)(param_4 + 4) == 0;
LAB_14032173a:
      uVar6 = (uint)!bVar8;
    }
    else if (cVar2 == '\x02') {
      uVar6 = *(uint *)(param_4 + 0xc);
    }
    else {
      uVar6 = 0;
      if (cVar2 == '\x01') {
        bVar8 = *(int *)(param_4 + 0xc) == 0;
        goto LAB_14032173a;
      }
    }
    uVar3 = uVar3 - uVar6;
LAB_14032173f:
    *(undefined1 *)param_1 = 2;
    *(uint *)((longlong)param_1 + 0xc) = uVar3;
    goto LAB_140321355;
  case '\x06':
    cVar2 = *param_3;
    if (cVar2 == '\x03') {
      bVar8 = *(longlong *)(param_3 + 4) == 0;
LAB_1403216da:
      uVar3 = (uint)!bVar8;
    }
    else if (cVar2 == '\x02') {
      uVar3 = *(uint *)(param_3 + 0xc);
    }
    else {
      uVar3 = 0;
      if (cVar2 == '\x01') {
        bVar8 = *(int *)(param_3 + 0xc) == 0;
        goto LAB_1403216da;
      }
    }
    cVar2 = *param_4;
    if (cVar2 == '\x03') {
      bVar8 = *(longlong *)(param_4 + 4) == 0;
LAB_140321756:
      uVar6 = (uint)!bVar8;
    }
    else if (cVar2 == '\x02') {
      uVar6 = *(uint *)(param_4 + 0xc);
    }
    else {
      uVar6 = 0;
      if (cVar2 == '\x01') {
        bVar8 = *(int *)(param_4 + 0xc) == 0;
        goto LAB_140321756;
      }
    }
    *(undefined1 *)param_1 = 1;
    *(uint *)((longlong)param_1 + 0xc) = (uint)((int)uVar3 < (int)uVar6);
    puVar7 = &DAT_14cb7c580;
    if ((int)uVar3 < (int)uVar6) {
      puVar7 = &DAT_14cb7c588;
    }
    break;
  case '\a':
    cVar2 = *param_3;
    if (cVar2 == '\x03') {
      bVar8 = *(longlong *)(param_3 + 4) == 0;
LAB_14032170a:
      uVar3 = (uint)!bVar8;
    }
    else if (cVar2 == '\x02') {
      uVar3 = *(uint *)(param_3 + 0xc);
    }
    else {
      uVar3 = 0;
      if (cVar2 == '\x01') {
        bVar8 = *(int *)(param_3 + 0xc) == 0;
        goto LAB_14032170a;
      }
    }
    cVar2 = *param_4;
    if (cVar2 == '\x03') {
      bVar8 = *(longlong *)(param_4 + 4) == 0;
LAB_140321789:
      uVar6 = (uint)!bVar8;
    }
    else if (cVar2 == '\x02') {
      uVar6 = *(uint *)(param_4 + 0xc);
    }
    else {
      uVar6 = 0;
      if (cVar2 == '\x01') {
        bVar8 = *(int *)(param_4 + 0xc) == 0;
        goto LAB_140321789;
      }
    }
    *(undefined1 *)param_1 = 1;
    *(uint *)((longlong)param_1 + 0xc) = (uint)((int)uVar3 <= (int)uVar6);
    puVar7 = &DAT_14cb7c580;
    if ((int)uVar3 <= (int)uVar6) {
      puVar7 = &DAT_14cb7c588;
    }
    break;
  case '\b':
    cVar2 = *param_3;
    if (cVar2 == '\x03') {
      bVar8 = *(longlong *)(param_3 + 4) == 0;
LAB_1403212c8:
      uVar3 = (uint)!bVar8;
    }
    else if (cVar2 == '\x02') {
      uVar3 = *(uint *)(param_3 + 0xc);
    }
    else {
      uVar3 = 0;
      if (cVar2 == '\x01') {
        bVar8 = *(int *)(param_3 + 0xc) == 0;
        goto LAB_1403212c8;
      }
    }
    cVar2 = *param_4;
    if (cVar2 == '\x02') {
      uVar6 = *(uint *)(param_4 + 0xc);
    }
    else {
      uVar6 = 0;
      if (cVar2 == '\x03') {
        bVar8 = *(longlong *)(param_4 + 4) == 0;
      }
      else {
        if (cVar2 != '\x01') goto LAB_1403212da;
        bVar8 = *(int *)(param_4 + 0xc) == 0;
      }
      uVar6 = (uint)!bVar8;
    }
LAB_1403212da:
    *(undefined1 *)param_1 = 1;
    *(uint *)((longlong)param_1 + 0xc) = (uint)((int)uVar6 < (int)uVar3);
    puVar7 = &DAT_14cb7c580;
    if ((int)uVar6 < (int)uVar3) {
      puVar7 = &DAT_14cb7c588;
    }
    break;
  case '\t':
    cVar2 = *param_3;
    if (cVar2 == '\x02') {
      uVar3 = *(uint *)(param_3 + 0xc);
    }
    else {
      uVar3 = 0;
      if (cVar2 == '\x03') {
        bVar8 = *(longlong *)(param_3 + 4) == 0;
      }
      else {
        if (cVar2 != '\x01') goto LAB_140321281;
        bVar8 = *(int *)(param_3 + 0xc) == 0;
      }
      uVar3 = (uint)!bVar8;
    }
LAB_140321281:
    cVar2 = *param_4;
    if (cVar2 == '\x02') {
      uVar6 = *(uint *)(param_4 + 0xc);
    }
    else {
      uVar6 = 0;
      if (cVar2 == '\x03') {
        bVar8 = *(longlong *)(param_4 + 4) == 0;
      }
      else {
        if (cVar2 != '\x01') goto LAB_140321290;
        bVar8 = *(int *)(param_4 + 0xc) == 0;
      }
      uVar6 = (uint)!bVar8;
    }
LAB_140321290:
    *(undefined1 *)param_1 = 1;
    *(uint *)((longlong)param_1 + 0xc) = (uint)((int)uVar6 <= (int)uVar3);
    puVar7 = &DAT_14cb7c580;
    if ((int)uVar6 <= (int)uVar3) {
      puVar7 = &DAT_14cb7c588;
    }
    break;
  default:
    *param_1 = 0;
    param_1[1] = 0;
    return param_1;
  case '\v':
    bVar1 = FUN_1403218c0(param_3,param_4);
    *(undefined1 *)param_1 = 1;
    *(uint *)((longlong)param_1 + 0xc) = (uint)(bVar1 ^ 1);
    puVar7 = &DAT_14cb7c580;
    if (bVar1 == 0) {
      puVar7 = &DAT_14cb7c588;
    }
    goto LAB_140321241;
  case '\f':
    if (*param_3 == '\x01') {
      if (*(int *)(param_3 + 0xc) != 0) goto LAB_140321419;
    }
    else {
      cVar2 = FUN_140321d1a(param_3);
      if (cVar2 != '\0') goto LAB_140321419;
    }
    *(undefined1 *)param_1 = 1;
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    goto LAB_140321526;
  case '\r':
    if (*param_3 == '\x01') {
      if (*(int *)(param_3 + 0xc) == 0) goto LAB_140321419;
LAB_14032144d:
      *(undefined1 *)param_1 = 1;
      *(undefined4 *)((longlong)param_1 + 0xc) = 1;
LAB_14032145b:
      puVar7 = &DAT_14cb7c588;
    }
    else {
      cVar2 = FUN_140321d1a(param_3);
      if (cVar2 != '\0') goto LAB_14032144d;
LAB_140321419:
      if (*param_4 == '\x01') {
        iVar5 = *(int *)(param_4 + 0xc);
        *(undefined1 *)param_1 = 1;
        *(uint *)((longlong)param_1 + 0xc) = (uint)(iVar5 != 0);
        if (iVar5 != 0) goto LAB_14032145b;
      }
      else {
        bVar1 = FUN_140321d1a(param_4);
        *(undefined1 *)param_1 = 1;
        *(uint *)((longlong)param_1 + 0xc) = (uint)bVar1;
        if (bVar1 != 0) goto LAB_14032145b;
      }
LAB_140321526:
      puVar7 = &DAT_14cb7c580;
    }
    *(undefined8 *)((longlong)param_1 + 4) = *puVar7;
    return param_1;
  }
  uVar4 = *puVar7;
LAB_140321244:
  *(undefined8 *)((longlong)param_1 + 4) = uVar4;
  return param_1;
}



// FUNCTION 1403218c0 FUN_1403218c0 body=1113 status=ok
// SIG undefined FUN_1403218c0(void)

byte FUN_1403218c0(byte *param_1,byte *param_2)

{
  char *pcVar1;
  byte bVar2;
  int iVar3;
  size_t sVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  uint uVar8;
  ulonglong *puVar9;
  longlong lVar10;
  longlong lVar11;
  byte bVar12;
  uint uVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  byte bVar17;
  bool bVar18;
  undefined1 auStack_158 [32];
  char *local_138;
  int local_130;
  undefined1 local_12c;
  char acStack_12a [258];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_158;
  bVar17 = *param_2;
  bVar2 = *param_1;
  bVar12 = bVar2;
  if (bVar2 < bVar17) {
    bVar12 = bVar17;
  }
  if (bVar12 == 3) {
    if (bVar2 == 3) {
      uVar5 = *(ulonglong *)(param_1 + 4);
    }
    else if (bVar2 == 2) {
      iVar3 = *(int *)(param_1 + 0xc);
      uVar5 = DAT_14cb7c570;
      if ((iVar3 != 1) && (uVar5 = DAT_14cb7c578, iVar3 != 0)) {
        pcVar1 = acStack_12a + 2;
        memset(pcVar1,0,0x100);
        FUN_1407bf796(pcVar1,0x100,&DAT_149dfc0ac,iVar3);
        sVar4 = strlen(pcVar1);
        iVar3 = (int)sVar4;
        if (iVar3 == 0) {
LAB_140321d03:
          uVar5 = 0;
          uVar6 = 0;
        }
        else {
          lVar10 = (longlong)iVar3;
          if (pcVar1 <= acStack_12a + lVar10 + 1) {
            lVar16 = 0;
            lVar11 = 0;
LAB_140321ab4:
            if ((byte)(acStack_12a[lVar11 + lVar10 + 1] - 0x30U) < 10) goto code_r0x000140321ac7;
            iVar7 = (int)lVar11;
            if (iVar7 == 0 || iVar3 <= -iVar7) goto LAB_140321b75;
            lVar16 = 0;
            if (((uint)-iVar7 < 0xb) && (acStack_12a[lVar11 + lVar10 + 1] == '_')) {
              if ((iVar7 != -1) && (acStack_12a[lVar11 + lVar10 + 2] == '0')) goto LAB_140321b75;
              lVar15 = 0;
              do {
                lVar16 = (longlong)acStack_12a[lVar11 + lVar10 + 2] + lVar15 * 10;
                lVar15 = lVar16 + -0x30;
                lVar11 = lVar11 + 1;
              } while (lVar11 != 0);
              if (lVar15 < 0x7fffffff) {
                iVar3 = iVar3 + iVar7 + -1;
                lVar16 = lVar16 + -0x2f;
              }
              else {
LAB_140321b75:
                lVar16 = 0;
              }
            }
            goto LAB_140321b77;
          }
          lVar16 = 0;
LAB_140321b7f:
          local_130 = iVar3;
          local_12c = 0;
          local_138 = pcVar1;
          uVar5 = FUN_14001a6c0();
          uVar6 = lVar16 << 0x20;
          uVar5 = uVar5 & 0xffffffff;
        }
        bVar17 = *param_2;
        uVar5 = uVar5 | uVar6;
      }
    }
    else if (bVar2 == 1) {
      puVar9 = &DAT_14cb7c580;
      if (*(int *)(param_1 + 0xc) != 0) {
        puVar9 = &DAT_14cb7c588;
      }
      uVar5 = *puVar9;
    }
    else {
      uVar5 = 0;
    }
    if (bVar17 == 3) {
      uVar6 = *(ulonglong *)(param_2 + 4);
    }
    else if (bVar17 == 2) {
      iVar3 = *(int *)(param_2 + 0xc);
      uVar6 = DAT_14cb7c570;
      if ((iVar3 != 1) && (uVar6 = DAT_14cb7c578, iVar3 != 0)) {
        pcVar1 = acStack_12a + 2;
        memset(pcVar1,0,0x100);
        FUN_1407bf796(pcVar1,0x100,&DAT_149dfc0ac,iVar3);
        sVar4 = strlen(pcVar1);
        iVar3 = (int)sVar4;
        if (iVar3 == 0) {
LAB_140321d0c:
          uVar6 = 0;
          uVar14 = 0;
        }
        else {
          lVar10 = (longlong)iVar3;
          if (pcVar1 <= acStack_12a + lVar10 + 1) {
            lVar16 = 0;
            lVar11 = 0;
LAB_140321b39:
            if ((byte)(acStack_12a[lVar11 + lVar10 + 1] - 0x30U) < 10) goto code_r0x000140321b48;
            iVar7 = (int)lVar11;
            if (iVar7 == 0 || iVar3 <= -iVar7) goto LAB_140321bc5;
            lVar16 = 0;
            if (((uint)-iVar7 < 0xb) && (acStack_12a[lVar11 + lVar10 + 1] == '_')) {
              if ((iVar7 != -1) && (acStack_12a[lVar11 + lVar10 + 2] == '0')) goto LAB_140321bc5;
              lVar15 = 0;
              do {
                lVar16 = (longlong)acStack_12a[lVar11 + lVar10 + 2] + lVar15 * 10;
                lVar15 = lVar16 + -0x30;
                lVar11 = lVar11 + 1;
              } while (lVar11 != 0);
              if (lVar15 < 0x7fffffff) {
                iVar3 = iVar3 + iVar7 + -1;
                lVar16 = lVar16 + -0x2f;
              }
              else {
LAB_140321bc5:
                lVar16 = 0;
              }
            }
            goto LAB_140321bc7;
          }
          lVar16 = 0;
LAB_140321bcf:
          local_130 = iVar3;
          local_12c = 0;
          local_138 = pcVar1;
          uVar6 = FUN_14001a6c0(&local_138,1);
          uVar14 = lVar16 << 0x20;
          uVar6 = uVar6 & 0xffffffff;
        }
        uVar6 = uVar6 | uVar14;
      }
    }
    else if (bVar17 == 1) {
      puVar9 = &DAT_14cb7c580;
      if (*(int *)(param_2 + 0xc) != 0) {
        puVar9 = &DAT_14cb7c588;
      }
      uVar6 = *puVar9;
    }
    else {
      uVar6 = 0;
    }
    bVar17 = 1;
    if ((uVar5 != uVar6) && ((uVar6 != 0 || (uVar5 != DAT_14cb7c578)))) {
      bVar17 = uVar5 == 0 && uVar6 == DAT_14cb7c578;
    }
    goto LAB_14032192d;
  }
  if (bVar12 == 1) {
    bVar17 = FUN_140321d1a();
    bVar2 = FUN_140321d1a(param_2);
    bVar17 = bVar2 ^ bVar17 ^ 1;
    goto LAB_14032192d;
  }
  if (bVar12 != 2) {
    if (bVar12 == 0) {
      bVar17 = 1;
    }
    else {
      bVar17 = 0;
    }
    goto LAB_14032192d;
  }
  if (bVar2 == 1) {
    bVar18 = *(int *)(param_1 + 0xc) == 0;
LAB_140321a30:
    uVar13 = (uint)!bVar18;
  }
  else if (bVar2 == 2) {
    uVar13 = *(uint *)(param_1 + 0xc);
  }
  else {
    uVar13 = 0;
    if (bVar2 == 3) {
      bVar18 = *(longlong *)(param_1 + 4) == 0;
      goto LAB_140321a30;
    }
  }
  if (bVar17 == 2) {
    uVar8 = *(uint *)(param_2 + 0xc);
  }
  else {
    uVar8 = 0;
    if (bVar17 == 3) {
      bVar18 = *(longlong *)(param_2 + 4) == 0;
    }
    else {
      if (bVar17 != 1) goto LAB_140321a3f;
      bVar18 = *(int *)(param_2 + 0xc) == 0;
    }
    uVar8 = (uint)!bVar18;
  }
LAB_140321a3f:
  bVar17 = uVar13 == uVar8;
LAB_14032192d:
  if ((local_28 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar17;
code_r0x000140321ac7:
  lVar15 = lVar11 + -1;
  lVar11 = lVar11 + -1;
  if (acStack_12a + lVar10 + 1 + lVar15 < pcVar1) {
LAB_140321b77:
    if (iVar3 == 0) goto LAB_140321d03;
    goto LAB_140321b7f;
  }
  goto LAB_140321ab4;
code_r0x000140321b48:
  lVar15 = lVar11 + -1;
  lVar11 = lVar11 + -1;
  if (acStack_12a + lVar10 + 1 + lVar15 < pcVar1) {
LAB_140321bc7:
    if (iVar3 == 0) goto LAB_140321d0c;
    goto LAB_140321bcf;
  }
  goto LAB_140321b39;
}



// FUNCTION 140321d1a FUN_140321d1a body=123 status=ok
// SIG undefined FUN_140321d1a(void)

bool FUN_140321d1a(char *param_1)

{
  char cVar1;
  ulonglong uVar2;
  bool bVar3;
  
  cVar1 = *param_1;
  if (cVar1 == '\x01') {
LAB_140321d27:
    bVar3 = *(int *)(param_1 + 0xc) != 0;
  }
  else {
    if (cVar1 == '\x03') {
      uVar2 = *(ulonglong *)(param_1 + 4);
      if (uVar2 == 0) {
        return false;
      }
      if (uVar2 == DAT_14cb7c580) {
        return false;
      }
      if (DAT_14c87ead8 == '\0') {
        FUN_140024d3a(&DAT_14c87eb00);
        DAT_14c87ead8 = '\x01';
      }
      if (uVar2 != DAT_14c892e68) {
        return uVar2 != DAT_14cb7c568 && uVar2 != DAT_14cb7c578;
      }
    }
    else if (cVar1 == '\x02') goto LAB_140321d27;
    bVar3 = false;
  }
  return bVar3;
}



// FUNCTION 140321d96 FUN_140321d96 body=1298 status=ok
// SIG undefined FUN_140321d96(void)

byte FUN_140321d96(longlong param_1,uint param_2,undefined4 param_3)

{
  uint *puVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  char cVar5;
  uint uVar6;
  DWORD DVar7;
  DWORD DVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong lVar15;
  
  puVar1 = (uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0xc60);
  uVar6 = *puVar1;
  lVar15 = 0x118;
  if (((uVar6 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (uVar6 == 2)) {
LAB_140321e28:
    if (*(longlong *)(param_1 + lVar15) == 0) goto LAB_1403221d9;
    uVar6 = *puVar1;
    lVar15 = 0x118;
    if (((uVar6 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (uVar6 == 2)) {
LAB_140321e93:
      plVar13 = *(longlong **)(param_1 + lVar15);
    }
    else {
      if (uVar6 == 1) {
        DVar7 = FUN_140ad26c0();
        DVar8 = GetCurrentThreadId();
        if (DVar7 == DVar8) goto LAB_140321e93;
        uVar6 = *puVar1;
      }
      if (((uVar6 == 4) || (cVar5 = (*(code *)PTR_FUN_14c758760)(), cVar5 != '\0')) ||
         (uVar6 = *puVar1, uVar6 == 8)) goto LAB_140321e93;
      if (DAT_14c86a9fc == 0) {
        lVar15 = 0x120;
        if (((uVar6 < 0x21) && ((0x100010004U >> ((ulonglong)uVar6 & 0x3f) & 1) != 0)) ||
           (uVar6 == 0x40000010)) goto LAB_140321e93;
      }
      else {
        lVar15 = 0x120;
        if (((uVar6 - 0x10 & 0xbfffffef) == 0) || (uVar6 == 0x20)) goto LAB_140321e93;
      }
      plVar13 = (longlong *)0x0;
    }
    lVar15 = (**(code **)(*plVar13 + 0x58))();
  }
  else {
    if (uVar6 == 1) {
      DVar7 = FUN_140ad26c0();
      DVar8 = GetCurrentThreadId();
      if (DVar7 == DVar8) goto LAB_140321e28;
      uVar6 = *puVar1;
    }
    if (((uVar6 == 4) || (cVar5 = (*(code *)PTR_FUN_14c758760)(), cVar5 != '\0')) ||
       (uVar6 = *puVar1, uVar6 == 8)) goto LAB_140321e28;
    if (DAT_14c86a9fc == 0) {
      lVar15 = 0x120;
      if (((uVar6 < 0x21) && ((0x100010004U >> ((ulonglong)uVar6 & 0x3f) & 1) != 0)) ||
         (uVar6 == 0x40000010)) goto LAB_140321e28;
    }
    else {
      lVar15 = 0x120;
      if (((uVar6 - 0x10 & 0xbfffffef) == 0) || (uVar6 == 0x20)) goto LAB_140321e28;
    }
LAB_1403221d9:
    lVar15 = 0;
  }
  cVar5 = FUN_1402bfec4(param_1,0);
  if (cVar5 != '\0') {
    return 0;
  }
  if (((((*(byte *)(param_1 + 0xc0) & 1) == 0) ||
       (bVar2 = *(byte *)(param_1 + 0xc5), (int)param_2 <= (int)(uint)bVar2)) ||
      (bVar3 = *(byte *)(param_1 + 0xc3), bVar3 <= bVar2)) || (*(byte *)(param_1 + 0xc6) != bVar2))
  {
    return 0;
  }
  uVar6 = (uint)bVar3;
  if (param_2 < bVar3) {
    uVar6 = param_2;
  }
  *(char *)(param_1 + 0xc6) = (char)uVar6;
  *(byte *)(param_1 + 0xc0) = *(byte *)(param_1 + 0xc0) | 4;
  if (lVar15 == 0) {
    return 0;
  }
  if (DAT_14cb0b550 == 2) {
LAB_140321f2c:
    cVar5 = DAT_14ca84e06;
    lVar12 = *(longlong *)(param_1 + 0x148);
    if (lVar12 != 0) {
      if ((longlong)*(int *)(lVar12 + 0x20) != 0) {
        lVar14 = 0;
        do {
          if (*(char *)(*(longlong *)(*(longlong *)(lVar12 + 0x18) + lVar14) + 0x1b) != '\0')
          goto LAB_1403220ce;
          lVar14 = lVar14 + 8;
        } while ((longlong)*(int *)(lVar12 + 0x20) * 8 != lVar14);
      }
      lVar12 = *(longlong *)(lVar12 + 0x28);
      if ((lVar12 != 0) && ((longlong)*(int *)(lVar12 + 0xb0) != 0)) {
        lVar14 = 0;
        do {
          if (*(char *)(*(longlong *)(lVar12 + 0xa8) + 0x1b + lVar14) != '\0') goto LAB_1403220ce;
          lVar14 = lVar14 + 0x90;
        } while ((longlong)*(int *)(lVar12 + 0xb0) * 0x90 != lVar14);
      }
    }
    if (*(char *)(lVar15 + 0x90) == '\x01') {
      lVar15 = FUN_14001cc68(0x290,0x10);
      FUN_147d655c6(lVar15,param_1,param_3);
    }
    else {
      lVar15 = FUN_14001cc68(0x290,0x10);
      if (cVar5 == '\x01') {
        FUN_1403222a8();
      }
      else {
        FUN_147d6549e(lVar15,param_1,param_3);
      }
    }
    goto LAB_140321fb0;
  }
  iVar4 = *(int *)(param_1 + 0x110);
  if ((longlong)iVar4 != 0) {
    lVar12 = *(longlong *)(param_1 + 0x108);
    lVar14 = 0;
    do {
      plVar13 = *(longlong **)(lVar12 + lVar14);
      if (plVar13 != (longlong *)0x0) {
        lVar9 = FUN_14066dd60();
        if (((*(int *)(lVar9 + 0x38) <= *(int *)(plVar13[2] + 0x38)) &&
            (*(longlong *)(*(longlong *)(plVar13[2] + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8)
             == lVar9 + 0x30)) && (lVar9 = (**(code **)(*plVar13 + 0x2b8))(plVar13), lVar9 != 0))
        goto LAB_140322046;
      }
      lVar14 = lVar14 + 8;
    } while ((longlong)iVar4 * 8 != lVar14);
  }
  if (DAT_14cb0b550 != 1) goto LAB_140321f2c;
  lVar9 = 0;
LAB_140322046:
  uVar10 = FUN_14001cc68(0x170,0x10);
  FUN_1412948cc(uVar10,param_1,param_3);
  if (DAT_14ca84e06 == '\x01') {
    uVar11 = FUN_14001cc68(0xc0,0x10);
    FUN_147d6498c(uVar11,param_1);
  }
  else {
    uVar11 = FUN_14001cc68(0x78,0x10);
    FUN_147d64c9c(uVar11,param_1);
  }
  lVar15 = FUN_14001cc68(0x470,0x10);
  FUN_141294966(lVar15,param_1,uVar11,lVar9,uVar10);
  lVar12 = *(longlong *)(param_1 + 0x38);
  if (lVar12 == lVar15) goto LAB_140321fcb;
  *(longlong *)(param_1 + 0x38) = lVar15;
  if (lVar15 != 0) {
    LOCK();
    *(int *)(lVar15 + 100) = *(int *)(lVar15 + 100) + 1;
    UNLOCK();
  }
  goto LAB_140321fc6;
LAB_1403220ce:
  if (*(char *)(lVar15 + 0x90) == '\x01') {
    lVar15 = FUN_14001cc68(0x290,0x10);
    FUN_147d65376(lVar15,param_1,param_3);
  }
  else {
    lVar15 = FUN_14001cc68(0x290,0x10);
    if (cVar5 == '\x01') {
      FUN_147d6512e();
    }
    else {
      FUN_147d65252(lVar15,param_1,param_3);
    }
  }
LAB_140321fb0:
  lVar12 = *(longlong *)(param_1 + 0x38);
  if (lVar12 == lVar15) goto LAB_140321fcb;
  *(longlong *)(param_1 + 0x38) = lVar15;
  if (lVar15 != 0) {
    LOCK();
    *(int *)(lVar15 + 100) = *(int *)(lVar15 + 100) + 1;
    UNLOCK();
  }
LAB_140321fc6:
  if (lVar12 != 0) {
    FUN_14128f1bc();
  }
LAB_140321fcb:
  return *(byte *)(*(longlong *)(param_1 + 0x38) + 0x5c) ^ 1;
}



// FUNCTION 1403222a8 FUN_1403222a8 body=296 status=ok
// SIG undefined FUN_1403222a8(void)

undefined8 * FUN_1403222a8(undefined8 *param_1,undefined8 param_2,undefined1 param_3)

{
  undefined ***pppuVar1;
  longlong *plVar2;
  undefined1 auStack_108 [40];
  undefined1 local_e0 [40];
  code *local_b8 [2];
  undefined ***local_a8;
  undefined **local_98;
  undefined8 *local_90;
  longlong local_78 [2];
  longlong *local_68;
  longlong local_58 [5];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_1403224f8();
  *(undefined1 *)(param_1 + 0x50) = 0;
  *(undefined1 *)((longlong)param_1 + 0x281) = param_3;
  param_1[0x51] = 0;
  *param_1 = &PTR_FUN_14aac2fb0;
  local_78[0] = 0;
  local_68 = (longlong *)0x0;
  local_a8 = (undefined ***)0x0;
  local_98 = &PTR_LAB_14aace990;
  local_b8[0] = FUN_14372e074;
  local_90 = param_1;
  FUN_140310484(local_e0,param_2,0);
  *(undefined4 *)(param_1 + 0xd) = 2;
  FUN_1403223d2(param_1 + 0xe,local_b8);
  *(undefined4 *)(param_1 + 0x16) = 0;
  FUN_1403223d2(param_1 + 0x18,local_78);
  if (local_b8[0] != (code *)0x0) {
    pppuVar1 = local_a8;
    if (local_a8 == (undefined ***)0x0) {
      pppuVar1 = &local_98;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  if (local_78[0] != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_30 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403223d2 FUN_1403223d2 body=292 status=ok
// SIG undefined FUN_1403223d2(void)

longlong * FUN_1403223d2(longlong *param_1,longlong *param_2)

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



// FUNCTION 1403224f8 FUN_1403224f8 body=123 status=ok
// SIG undefined FUN_1403224f8(void)

undefined8 * FUN_1403224f8(undefined8 *param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 *_Dst;
  
  FUN_140322574();
  *param_1 = &PTR_FUN_14aac2e30;
  param_1[0x3f] = 0;
  *(undefined4 *)((longlong)param_1 + 0x204) = 0xf;
  bVar1 = *(byte *)((longlong)param_1 + 0xb);
  *(uint *)(param_1 + 0x40) = (uint)bVar1;
  if (bVar1 < 0x10) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    FUN_147d6b52a(param_1 + 0x21);
    puVar2 = (undefined8 *)param_1[0x3f];
  }
  _Dst = param_1 + 0x21;
  if (puVar2 != (undefined8 *)0x0) {
    _Dst = puVar2;
  }
  memset(_Dst,0,(ulonglong)bVar1 << 4);
  return param_1;
}



// FUNCTION 140322574 FUN_140322574 body=99 status=ok
// SIG undefined FUN_140322574(void)

undefined8 * FUN_140322574(undefined8 *param_1,undefined8 param_2)

{
  longlong lVar1;
  
  FUN_1403225d8();
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[0xe] = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0x18] = 0;
  param_1[0x1a] = 0;
  *param_1 = &PTR_FUN_14aac3170;
  param_1[0x20] = 0;
  lVar1 = FUN_1447b4020(param_2);
  if (lVar1 == 0) {
    *(undefined1 *)((longlong)param_1 + 0x5c) = 1;
  }
  return param_1;
}



// FUNCTION 1403225d8 FUN_1403225d8 body=224 status=ok
// SIG undefined FUN_1403225d8(void)

undefined8 * FUN_1403225d8(undefined8 *param_1,longlong param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  
  *param_1 = &PTR_LAB_14aabfdc0;
  param_1[1] = *(undefined8 *)(param_2 + 0xc0);
  *(uint *)(param_1 + 2) = (uint)*(byte *)(param_2 + 0xc3) - (uint)*(byte *)(param_2 + 0xc5);
  *(uint *)((longlong)param_1 + 0x14) =
       (uint)*(byte *)(param_2 + 0xc3) - (uint)*(byte *)(param_2 + 0xc6);
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 3),4000);
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[10] = param_2;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *(undefined2 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x5e) = 0;
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    bVar1 = *(byte *)((longlong)param_1 + 9);
    if (((((bVar1 <= *(byte *)((longlong)param_1 + 10)) &&
          (bVar2 = *(byte *)((longlong)param_1 + 0xb), *(byte *)((longlong)param_1 + 10) <= bVar2))
         && (bVar2 < 0x11)) &&
        ((bVar3 = *(byte *)((longlong)param_1 + 0xd), bVar1 <= bVar3 && (bVar3 <= bVar2)))) &&
       ((bVar4 = *(byte *)((longlong)param_1 + 0xe), bVar3 != bVar4 &&
        ((bVar1 <= bVar4 && (bVar4 <= bVar2)))))) {
      return param_1;
    }
  }
  *(undefined1 *)((longlong)param_1 + 0x5c) = 1;
  return param_1;
}



// FUNCTION 1403226b8 FUN_1403226b8 body=98 status=ok
// SIG undefined FUN_1403226b8(void)

void FUN_1403226b8(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (DAT_14cb1d8f0 == '\0') {
    if (DAT_14c762388 == '\x01') {
      FUN_14032271a(param_1);
      FUN_1403229bc(param_1,1);
      return;
    }
    if (param_1 != 0) {
      uVar1 = FUN_144a81dfc();
      lVar2 = FUN_144718840(param_1,uVar1);
      if (lVar2 != 0) {
        FUN_14383810c(lVar2,param_1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14032271a FUN_14032271a body=673 status=ok
// SIG undefined FUN_14032271a(void)

void FUN_14032271a(longlong param_1)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  wchar_t *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  code **local_70;
  code *local_68;
  code *local_60;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  iVar2 = *(int *)(param_1 + 0x268);
  if (iVar2 == 0) {
    uVar15 = 0;
    uVar13 = 1;
    iVar4 = 0;
    iVar10 = 0;
  }
  else {
    puVar5 = *(uint **)(param_1 + 0x260);
    if (*(uint **)(param_1 + 0x260) == (uint *)0x0) {
      puVar5 = (uint *)(param_1 + 0x250);
    }
    uVar14 = *puVar5;
    if (uVar14 == 0) {
      iVar4 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar4 = iVar2 + -1;
      }
      uVar15 = 0;
      uVar13 = (ulonglong)(uint)(iVar4 >> 5);
      if (iVar4 >> 5 < 1) {
        uVar13 = uVar15;
      }
      iVar10 = 0;
      do {
        if (uVar13 == uVar15) goto LAB_1403228af;
        iVar10 = iVar10 + 0x20;
        uVar14 = puVar5[uVar15 + 1];
        uVar15 = uVar15 + 1;
      } while (uVar14 == 0);
    }
    else {
      uVar15 = 0;
      iVar10 = 0;
    }
    uVar13 = (ulonglong)(-uVar14 & uVar14);
    uVar1 = uVar13 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar4 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar4) {
      iVar4 = iVar2;
    }
  }
  if (iVar4 != iVar2) {
    uVar14 = 0xffffffff;
    do {
      lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x240) + (longlong)iVar4 * 0x10);
      if (lVar11 != 0) {
        if (DAT_14cac4ee8 == 0) {
          local_70 = &local_50;
          local_50 = FUN_1449e2820;
          local_60 = FUN_14081d0ea;
          local_68 = FUN_1427b09ee;
          local_78 = &LAB_147885155;
          local_80 = &LAB_1459be7ae;
          local_88 = L"Engine";
          local_90 = 0;
          local_98 = 0x10004001;
          local_a0 = 8;
          local_a8 = 0x28;
          FUN_14081cfa3(L"/Script/Engine",L"NavRelevantInterface",&DAT_14cac4ee8,&DAT_147885154);
        }
        plVar6 = (longlong *)FUN_144718840(lVar11,DAT_14cac4ee8);
        if (plVar6 != (longlong *)0x0) {
          (**(code **)(*plVar6 + 0x68))(plVar6);
        }
      }
      uVar14 = uVar14 & ~(uint)uVar13;
      puVar5 = *(uint **)(param_1 + 0x260);
      if (*(uint **)(param_1 + 0x260) == (uint *)0x0) {
        puVar5 = (uint *)(param_1 + 0x250);
      }
      iVar3 = *(int *)(param_1 + 0x268);
      iVar4 = (int)uVar15;
      lVar11 = (longlong)iVar4;
      uVar9 = puVar5[lVar11] & uVar14;
      if (uVar9 == 0) {
        iVar7 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar7 = iVar3 + -1;
        }
        iVar7 = iVar7 >> 5;
        iVar10 = iVar10 + 0x20;
        iVar8 = iVar7;
        if (iVar7 < iVar4) {
          iVar8 = iVar4;
        }
        if (iVar4 < iVar7) {
          lVar12 = 0;
          do {
            uVar9 = puVar5[lVar11 + lVar12 + 1];
            if (uVar9 != 0) {
              uVar15 = (ulonglong)(iVar4 + (int)lVar12 + 1);
              uVar14 = 0xffffffff;
              goto LAB_140322881;
            }
            iVar10 = iVar10 + 0x20;
            lVar12 = lVar12 + 1;
          } while (iVar8 - lVar11 != lVar12);
          uVar14 = 0xffffffff;
          iVar4 = iVar8;
        }
        uVar15 = (ulonglong)(iVar4 + 1);
        iVar4 = iVar3;
      }
      else {
LAB_140322881:
        uVar13 = (ulonglong)(-uVar9 & uVar9);
        uVar1 = uVar13 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        iVar4 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
        if (iVar3 <= iVar4) {
          iVar4 = iVar3;
        }
      }
    } while (iVar4 != iVar2);
  }
LAB_1403228af:
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1403229bc FUN_1403229bc body=795 status=ok
// SIG undefined FUN_1403229bc(void)

void FUN_1403229bc(longlong param_1,char param_2)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined4 local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  wchar_t *local_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  code **local_b0;
  code *local_a8;
  code *local_a0;
  longlong local_98;
  undefined8 uStack_90;
  code *local_80;
  code **local_78;
  longlong local_70;
  code *local_68;
  undefined8 uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (DAT_14cb1d8f0 != 0) goto LAB_140322bfa;
  lVar5 = FUN_1447210f0();
  if ((lVar5 == 0) || (lVar5 = *(longlong *)(lVar5 + 0x168), lVar5 == 0)) {
LAB_140322a2e:
    lVar5 = 0;
  }
  else {
    lVar6 = FUN_1409035a4();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < *(int *)(lVar6 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8)
        != lVar6 + 0x30)) goto LAB_140322a2e;
  }
  local_70 = lVar5;
  if ((DAT_14cb1d8f0 & 1) == 0) {
    FUN_1438388f8(&local_70,param_1);
  }
  else if (param_1 != 0) {
    if (DAT_14cac4ee8 == 0) {
      local_b0 = &local_68;
      local_68 = FUN_1449e2820;
      local_a0 = FUN_14081d0ea;
      local_a8 = FUN_1427b09ee;
      local_b8 = &LAB_147885155;
      local_c0 = &LAB_1459be7ae;
      local_c8 = L"Engine";
      local_d0 = 0;
      local_d8 = 0x10004001;
      local_e0 = 8;
      local_e8 = 0x28;
      FUN_14081cfa3(L"/Script/Engine",L"NavRelevantInterface",&DAT_14cac4ee8,&DAT_147885154);
    }
    plVar7 = (longlong *)FUN_144718840(param_1,DAT_14cac4ee8);
    if ((plVar7 != (longlong *)0x0) &&
       (cVar2 = (**(code **)(*plVar7 + 0x70))(plVar7), cVar2 != '\0')) {
      local_78 = &local_68;
      local_80 = FUN_14383d552;
      FUN_1438384dc(plVar7,param_1,lVar5);
    }
  }
  if (param_2 != '\0') {
    local_98 = 0;
    uStack_90 = 0;
    FUN_14490f2e4(param_1,&local_98,1,0);
    local_68 = (code *)0x0;
    uStack_60 = 0;
    if (0 < (int)uStack_90) {
      lVar5 = 0;
      do {
        FUN_14490f2e4(*(undefined8 *)(local_98 + lVar5 * 8),&local_68,1,0);
        if (0 < (int)uStack_60) {
          lVar6 = 0;
          iVar3 = (int)uStack_60;
          do {
            pcVar1 = local_68;
            lVar9 = (longlong)(int)uStack_90;
            if (lVar9 != 0) {
              uVar8 = 0;
              do {
                if (*(longlong *)(local_98 + uVar8) == *(longlong *)(local_68 + lVar6 * 8)) {
                  if ((int)(~uVar8 >> 3) != 0) goto LAB_140322b88;
                  break;
                }
                uVar8 = uVar8 + 8;
              } while (lVar9 * 8 - uVar8 != 0);
            }
            uVar4 = (int)uStack_90 + 1;
            uStack_90 = CONCAT44(uStack_90._4_4_,uVar4);
            if (uStack_90._4_4_ < uVar4) {
              FUN_1447d05f2(&local_98);
            }
            *(undefined8 *)(local_98 + lVar9 * 8) = *(undefined8 *)(pcVar1 + lVar6 * 8);
            iVar3 = (int)uStack_60;
LAB_140322b88:
            lVar6 = lVar6 + 1;
          } while (lVar6 < iVar3);
        }
        lVar5 = lVar5 + 1;
        iVar3 = (int)uStack_90;
      } while (lVar5 < (int)uStack_90);
      if (local_68 != (code *)0x0) {
        FUN_1400020a8();
      }
      lVar5 = local_98;
      if (0 < iVar3) {
        lVar6 = (longlong)(int)uStack_90;
        if (lVar6 != 0) {
          lVar9 = 0;
          do {
            FUN_1438388f8(&local_70,*(undefined8 *)(lVar5 + lVar9));
            lVar9 = lVar9 + 8;
          } while (lVar6 * 8 != lVar9);
        }
      }
    }
    if (local_98 != 0) {
      FUN_1400020a8(local_98);
    }
  }
LAB_140322bfa:
  if ((local_50 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140322ce4 FUN_140322ce4 body=208 status=ok
// SIG undefined FUN_140322ce4(void)

void FUN_140322ce4(longlong *param_1,uint param_2,char param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  void *_Dst;
  
  iVar2 = (int)param_1[1];
  if (iVar2 < (int)param_2) {
    *(uint *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < param_2 - iVar2) {
      FUN_1411054d8(param_1);
    }
    memset((void *)((longlong)iVar2 * 8 + *param_1),0,(longlong)(int)(param_2 - iVar2) << 3);
    return;
  }
  if (-1 < (int)param_2) {
    iVar3 = iVar2 - param_2;
    if (iVar3 != 0 && (int)param_2 <= iVar2) {
      _Dst = (void *)((ulonglong)param_2 * 8 + *param_1);
      FUN_140191cbb(_Dst,iVar3);
      iVar1 = (int)param_1[1] - iVar2;
      if (iVar1 != 0) {
        memmove(_Dst,(void *)((longlong)_Dst + (longlong)iVar3 * 8),(longlong)iVar1 << 3);
        iVar2 = (int)param_1[1];
      }
      *(int *)(param_1 + 1) = iVar2 - iVar3;
      if (param_3 == '\x01') {
        FUN_146d9a05e(param_1);
        return;
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 140322db4 FUN_140322db4 body=85 status=ok
// SIG undefined FUN_140322db4(void)

void FUN_140322db4(longlong param_1,int param_2)

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
    FUN_140322e0a();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 140322e0a FUN_140322e0a body=450 status=ok
// SIG undefined FUN_140322e0a(void)

void FUN_140322e0a(undefined8 *param_1,uint param_2)

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
LAB_140322f25:
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
LAB_140322f62:
    *param_1 = _Dst;
    return;
  }
  _Size = uVar3 * 8;
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar4 = (uint *)*puVar1;
  if (puVar4 != (uint *)0x0) goto LAB_140322e60;
LAB_140322e55:
  FUN_14472e504(puVar1);
  puVar4 = (uint *)*puVar1;
LAB_140322e60:
  _Dst = (void *)(*(longlong *)(puVar4 + 0x10) + 3U & 0xfffffffffffffffc);
  puVar6 = (uint *)((longlong)_Dst + _Size);
  if (puVar4 + 0x4000 < puVar6) {
    if (param_2 < 0x1ff5) goto code_r0x000140322e8c;
    puVar4 = (uint *)FUN_14472e5b2(_Size + 0x5c,8);
    *puVar4 = 0xffffffff;
    puVar4[0x12] = 0;
    _Dst = (void *)((longlong)puVar4 + 0x5bU & 0xfffffffffffffffc);
    *(uint **)(puVar4 + 0x10) = puVar4 + uVar3 * 2 + 0x17;
    *puVar4 = 1;
  }
  else {
    uVar7 = puVar4[0x12] + 1;
LAB_140322ee2:
    *(uint **)(puVar4 + 0x10) = puVar6 + 2;
    puVar4[0x12] = uVar7;
  }
  *(int *)((longlong)_Dst + -8) = ((int)_Dst + -8) - (int)puVar4;
  *(int *)((longlong)_Dst + -4) = (int)_Size;
  if (_Src == (void *)0x0) goto LAB_140322f62;
  uVar3 = (ulonglong)*(uint *)((longlong)_Src + -4);
  if (uVar3 != 0) {
    if (uVar3 < _Size) {
      _Size = uVar3;
    }
    memcpy(_Dst,_Src,_Size);
  }
  goto LAB_140322f25;
code_r0x000140322e8c:
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
    _Dst = (void *)((longlong)puVar4 + 0x5bU & 0xfffffffffffffffc);
    puVar6 = (uint *)((longlong)_Dst + _Size);
    uVar7 = 0;
    if (puVar6 <= puVar4 + 0x4000) {
      uVar7 = 1;
      goto LAB_140322ee2;
    }
  }
  goto LAB_140322e55;
}



// FUNCTION 140322fcc FUN_140322fcc body=384 status=ok
// SIG undefined FUN_140322fcc(void)

void FUN_140322fcc(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  int *piVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    uVar9 = (longlong)(int)((uint)((ulonglong)param_2 >> 0x20) ^ (uint)param_2) &
            (longlong)(int)param_1[9] - 1U;
    lVar8 = (longlong)*(int *)((longlong)plVar4 + uVar9 * 4);
    if (lVar8 != -1) {
      lVar5 = *param_1;
      lVar8 = lVar8 * 0x20;
      local_48 = *(undefined8 *)(lVar5 + lVar8);
      local_50 = param_2;
      cVar2 = FUN_14472d054();
      if (cVar2 == '\0') {
        lVar8 = lVar5 + lVar8;
        do {
          lVar5 = lVar8;
          lVar8 = (longlong)*(int *)(lVar5 + 0x18);
          if (lVar8 == -1) goto LAB_1403230be;
          lVar6 = *param_1;
          lVar8 = lVar8 * 0x20;
          local_48 = *(undefined8 *)(lVar6 + lVar8);
          local_50 = param_2;
          cVar2 = FUN_14472d054(&local_48,&local_50);
          lVar8 = lVar6 + lVar8;
        } while (cVar2 == '\0');
        piVar7 = (int *)(lVar5 + 0x18);
      }
      else {
        piVar7 = (int *)((longlong)plVar4 + uVar9 * 4);
      }
      iVar1 = *piVar7;
      lVar8 = *param_1;
      lVar5 = (longlong)iVar1 * 0x20;
      plVar4 = param_1 + 7;
      if ((longlong *)param_1[8] != (longlong *)0x0) {
        plVar4 = (longlong *)param_1[8];
      }
      lVar6 = (longlong)*(int *)(lVar8 + 0x1c + lVar5);
      iVar3 = *(int *)((longlong)plVar4 + lVar6 * 4);
      if (iVar3 == iVar1) {
        piVar7 = (int *)((longlong)plVar4 + lVar6 * 4);
      }
      else {
        do {
          piVar7 = (int *)(lVar8 + (longlong)iVar3 * 0x20 + 0x18);
          iVar3 = *piVar7;
        } while (iVar3 != iVar1);
      }
      *piVar7 = *(int *)(lVar8 + lVar5 + 0x18);
      lVar8 = *param_1;
      FUN_14032314d(*(undefined8 *)(lVar8 + 8 + lVar5),*(undefined4 *)(lVar8 + 0x10 + lVar5));
      if (*(longlong *)(lVar8 + 8 + lVar5) != 0) {
        FUN_1400020a8();
      }
      FUN_140323198(param_1,iVar1);
    }
  }
LAB_1403230be:
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14032314d FUN_14032314d body=75 status=ok
// SIG undefined FUN_14032314d(void)

void FUN_14032314d(longlong param_1,int param_2)

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
      plVar4 = plVar4 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140323198 FUN_140323198 body=114 status=ok
// SIG undefined FUN_140323198(void)

void FUN_140323198(longlong *param_1,int param_2)

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



// FUNCTION 140323218 FUN_140323218 body=158 status=ok
// SIG undefined FUN_140323218(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140323218(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14b3e3930;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  if ((*(char *)(param_1 + 2) != '\0') &&
     (plVar1 = (longlong *)param_1[1], plVar1 != (longlong *)0x0)) {
    if (plVar1[3] != 0) {
      FUN_1400020a8();
    }
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    _DAT_14c9a0eac = _DAT_14c9a0eac + -1;
    *plVar1 = (longlong)DAT_14c9a0ea0;
    DAT_14c9a0ea0 = plVar1;
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1403232b6 FUN_1403232b6 body=109 status=ok
// SIG undefined FUN_1403232b6(void)

undefined8 * FUN_1403232b6(longlong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  
  (**(code **)(*param_1 + 0x28))();
  puVar8 = &DAT_14c846480;
  if (param_1[-0x6b] != 0) {
    puVar8 = (undefined8 *)(param_1[-0x6b] + 0x240);
  }
  uVar1 = puVar8[1];
  uVar2 = puVar8[2];
  uVar3 = puVar8[3];
  uVar4 = puVar8[4];
  uVar5 = puVar8[5];
  uVar6 = puVar8[6];
  uVar7 = puVar8[7];
  *param_2 = *puVar8;
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  param_2[3] = uVar3;
  param_2[4] = uVar4;
  param_2[5] = uVar5;
  param_2[6] = uVar6;
  param_2[7] = uVar7;
  uVar2 = DAT_14c846520;
  uVar1 = DAT_14c846518;
  param_2[8] = DAT_14c846510;
  param_2[9] = uVar1;
  param_2[10] = uVar2;
  param_2[0xb] = 0;
  return param_2;
}



// FUNCTION 140323344 FUN_140323344 body=972 status=ok
// SIG undefined FUN_140323344(void)

void FUN_140323344(longlong param_1)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  uint *puVar4;
  longlong *plVar5;
  char cVar6;
  DWORD DVar7;
  uint uVar8;
  longlong lVar9;
  int *piVar10;
  int *piVar11;
  undefined4 uVar12;
  longlong lVar13;
  ulonglong uVar14;
  int *piVar15;
  longlong lVar16;
  bool bVar17;
  undefined1 auStack_a8 [40];
  LPCRITICAL_SECTION local_80;
  longlong *local_78;
  ulonglong uStack_70;
  undefined8 local_68;
  int local_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_80 = (LPCRITICAL_SECTION)(param_1 + 0x20);
  EnterCriticalSection(local_80);
  plVar3 = *(longlong **)(param_1 + 8);
  local_78 = (longlong *)0x0;
  uStack_70 = CONCAT44(uStack_70._4_4_,2);
  FUN_14014a230(&local_78,2,0);
  uVar14 = uStack_70;
  plVar5 = local_78;
  *local_78 = (longlong)(plVar3 + 0x2a);
  local_78[1] = (longlong)(plVar3 + 0x2b);
  iVar2 = (int)uStack_70;
  lVar16 = (longlong)(int)uStack_70;
  local_78 = (longlong *)0x0;
  uStack_70 = 0;
  FUN_14014a36d(plVar5,uVar14 & 0xffffffff);
  if (lVar16 != 0) {
    lVar13 = 0;
    do {
      puVar4 = *(uint **)((longlong)plVar5 + lVar13);
      DVar7 = GetCurrentThreadId();
      uVar8 = *puVar4;
      if ((uVar8 & 1) == 0) {
        LOCK();
        uVar1 = *puVar4;
        bVar17 = uVar8 == uVar1;
        if (bVar17) {
          *puVar4 = uVar8 | 1;
          uVar1 = uVar8;
        }
        uVar8 = uVar1;
        UNLOCK();
        if (!bVar17) goto LAB_140323418;
        puVar4[1] = DVar7;
      }
      else {
LAB_140323418:
        if (puVar4[1] == DVar7) {
          LOCK();
          *puVar4 = *puVar4 + 4;
          UNLOCK();
        }
        else {
          FUN_1402441ea(puVar4,uVar8);
        }
      }
      lVar13 = lVar13 + 8;
    } while (lVar16 * 8 - lVar13 != 0);
  }
  if (local_78 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (0 < (longlong)(int)plVar3[1]) {
    lVar13 = (longlong)(int)plVar3[1];
    do {
      lVar9 = (lVar13 + -1) * 0x40;
      if (*(char *)(*plVar3 + 0x38 + lVar9) == '\x01') {
        piVar15 = (int *)(*plVar3 + lVar9);
        if ((((*piVar15 == 0x4ed2dc4e) && (piVar15[1] == -0x33a6ee32)) && (piVar15[2] == 0x4af0635d)
            ) && (piVar15[3] == -0x574db5a6)) {
          if ((longlong)(int)plVar3[3] != 0) {
            piVar10 = (int *)plVar3[2];
            piVar11 = piVar10 + (longlong)(int)plVar3[3] * 0xe;
            do {
              if (((*piVar10 == 0x4ed2dc4e) && (piVar10[1] == -0x33a6ee32)) &&
                 ((piVar10[2] == 0x4af0635d && (piVar10[3] == -0x574db5a6)))) {
                *(undefined1 *)((longlong)piVar10 + 0x19) = 1;
              }
              piVar10 = piVar10 + 0xe;
            } while (piVar10 != piVar11);
          }
          *(undefined1 *)(piVar15 + 0xe) = 0;
        }
        else {
          cVar6 = (**(code **)(**(longlong **)(piVar15 + 6) + 0x30))();
          if (cVar6 != '\0') {
            local_58 = *piVar15;
            iStack_54 = piVar15[1];
            iStack_50 = piVar15[2];
            iStack_4c = piVar15[3];
            FUN_14950a4fe(plVar3,&local_58);
          }
        }
      }
      bVar17 = 1 < lVar13;
      lVar13 = lVar13 + -1;
    } while (bVar17);
  }
  lVar13 = (longlong)(int)plVar3[3];
  if (0 < lVar13) {
    uVar14 = lVar13 + 1;
    lVar13 = lVar13 * 0x38 + -0x1f;
    do {
      if (*(char *)(plVar3[2] + lVar13) == '\x01') {
        lVar9 = plVar3[2] + lVar13;
        local_68 = *(undefined8 *)(lVar9 + -9);
        local_78 = *(longlong **)(lVar9 + -0x19);
        uStack_70 = *(undefined8 *)(lVar9 + -0x11);
        FUN_1494ff358(plVar3,&local_78);
      }
      uVar14 = uVar14 - 1;
      lVar13 = lVar13 + -0x38;
    } while (1 < uVar14);
  }
  if (iVar2 != 0) {
    lVar13 = 0;
    do {
      puVar4 = *(uint **)((longlong)plVar5 + lVar13);
      uVar8 = *puVar4;
      if (uVar8 < 4) {
        puVar4[1] = 0;
        if (uVar8 < 2) {
          LOCK();
          uVar1 = *puVar4;
          if (uVar8 == uVar1) {
            *puVar4 = 0;
          }
          UNLOCK();
          if (uVar8 == uVar1) goto LAB_1403234b1;
        }
        FUN_140d366d2();
      }
      else {
        LOCK();
        *puVar4 = *puVar4 - 4;
        UNLOCK();
      }
LAB_1403234b1:
      lVar13 = lVar13 + 8;
    } while (lVar16 * 8 != lVar13);
  }
  if (plVar5 != (longlong *)0x0) {
    FUN_1400020a8(plVar5);
  }
  lVar16 = *(longlong *)(param_1 + 0x48);
  uVar12 = 0;
  if ((longlong)*(int *)(param_1 + 0x50) != 0) {
    lVar13 = (longlong)*(int *)(param_1 + 0x50) * 0x98;
    do {
      FUN_144537bf6(param_1,lVar16);
      lVar16 = lVar16 + 0x98;
      lVar13 = lVar13 + -0x98;
    } while (lVar13 != 0);
    uVar12 = *(undefined4 *)(param_1 + 0x50);
    lVar16 = *(longlong *)(param_1 + 0x48);
  }
  iVar2 = *(int *)(param_1 + 0x54);
  FUN_140323711(lVar16,uVar12);
  *(undefined4 *)(param_1 + 0x50) = 0;
  if ((iVar2 < 0) && (*(int *)(param_1 + 0x54) != 0)) {
    FUN_149518990(param_1 + 0x48);
  }
  lVar16 = *(longlong *)(param_1 + 0x58);
  uVar12 = 0;
  if ((longlong)*(int *)(param_1 + 0x60) != 0) {
    lVar13 = (longlong)*(int *)(param_1 + 0x60) << 6;
    do {
      FUN_144539042(param_1,lVar16);
      lVar16 = lVar16 + 0x40;
      lVar13 = lVar13 + -0x40;
    } while (lVar13 != 0);
    uVar12 = *(undefined4 *)(param_1 + 0x60);
    lVar16 = *(longlong *)(param_1 + 0x58);
  }
  iVar2 = *(int *)(param_1 + 100);
  FUN_14032373c(lVar16,uVar12);
  *(undefined4 *)(param_1 + 0x60) = 0;
  if ((iVar2 < 0) && (*(int *)(param_1 + 100) != 0)) {
    FUN_1495189c0(param_1 + 0x58);
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Could not recover jumptable at 0x000140323547. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(local_80);
  return;
}



// FUNCTION 140323711 FUN_140323711 body=43 status=ok
// SIG undefined FUN_140323711(void)

void FUN_140323711(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1494ff31a(param_1);
    param_1 = param_1 + 0x98;
  }
  return;
}



// FUNCTION 14032373c FUN_14032373c body=44 status=ok
// SIG undefined FUN_14032373c(void)

void FUN_14032373c(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x18;
    do {
      FUN_1448eac94(param_1);
      param_1 = param_1 + 0x40;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140323768 FUN_140323768 body=429 status=ok
// SIG undefined FUN_140323768(void)

void FUN_140323768(longlong param_1,undefined1 *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  byte bVar3;
  char cVar4;
  undefined8 ****ppppuVar5;
  undefined1 auStack_a8 [32];
  undefined8 ***local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  longlong local_68;
  longlong local_60;
  undefined8 ***local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ushort local_40;
  byte local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_140323a4e();
  plVar1 = (longlong *)(param_1 + 0x218);
  local_60 = 0;
  local_68 = 0;
  bVar3 = FUN_14032392e(plVar1,&local_60);
  if ((local_60 != 0 & bVar3) == 1) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
  }
  bVar3 = FUN_14024b086(plVar1,&local_68);
  if ((local_68 != 0 & bVar3) == 1) {
    FUN_1405b7be4(param_2);
  }
  else {
    if (*(char *)(param_1 + 0x238) == '\x04') {
      local_78 = *(undefined8 *)(param_1 + 0x228);
      local_88 = (undefined8 ***)*plVar1;
      uStack_80 = *(undefined8 *)(param_1 + 0x220);
    }
    else {
      FUN_1400b56fe(&local_58,plVar1,4);
      if (local_38 != 0) {
        local_78 = local_48;
        local_88 = local_58;
        uStack_80 = uStack_50;
      }
      pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
      if (pcVar2 != (code *)0x0) {
        ppppuVar5 = &local_58;
        if (0x18 < local_40) {
          ppppuVar5 = (undefined8 ****)local_58;
        }
        (*pcVar2)(ppppuVar5);
      }
      if (0x18 < local_40) {
        FUN_1400020a8(local_58);
      }
      if (local_38 == 0) goto LAB_140323845;
    }
    *param_2 = 1;
    *(undefined8 ****)(param_2 + 8) = local_88;
    *(undefined8 *)(param_2 + 0x10) = uStack_80;
    *(undefined8 *)(param_2 + 0x18) = local_78;
    local_58 = (undefined8 ****)0x0;
    uStack_50 = 0;
    cVar4 = FUN_140076fba(&local_58,0);
    if (cVar4 == '\0') {
      uStack_50 = 0;
    }
    *(undefined8 ****)(param_2 + 0x30) = local_58;
    *(undefined8 *)(param_2 + 0x38) = uStack_50;
  }
LAB_140323845:
  if ((local_28 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14032392e FUN_14032392e body=286 status=ok
// SIG undefined FUN_14032392e(void)

ulonglong FUN_14032392e(uint *param_1,undefined8 *param_2)

{
  code *pcVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 unaff_RBX;
  undefined7 uVar6;
  ulonglong uVar5;
  undefined8 ***pppuVar7;
  undefined1 auStack_78 [40];
  undefined8 **local_50 [3];
  ushort local_38;
  byte local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar6 = (undefined7)((ulonglong)unaff_RBX >> 8);
  if ((char)param_1[8] != '\x0e') {
    FUN_1400b56fe(local_50,param_1,0xe);
    uVar5 = CONCAT71(uVar6,local_30 != 0);
    if (local_30 != 0) {
      uVar3 = FUN_14479d2ce(local_50);
      *param_2 = uVar3;
      uVar2 = (uint)local_30;
    }
    else {
      uVar2 = 0;
    }
    pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar2 * 0x120));
    if (pcVar1 != (code *)0x0) {
      pppuVar7 = local_50;
      if (0x18 < local_38) {
        pppuVar7 = (undefined8 ***)local_50[0];
      }
      (*pcVar1)(pppuVar7);
    }
    if (0x18 < local_38) {
      FUN_1400020a8(local_50[0]);
    }
    goto LAB_14032399c;
  }
  if (param_1[1] == 0) {
LAB_140323a09:
    uVar3 = 0;
  }
  else {
    uVar2 = *param_1;
    uVar3 = 0;
    if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
      puVar4 = (undefined8 *)
               ((ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
      if ((puVar4 == (undefined8 *)0x0) ||
         ((*(uint *)(puVar4 + 2) != param_1[1] || ((*(uint *)(puVar4 + 1) & 0x10200000) != 0))))
      goto LAB_140323a09;
      uVar3 = *puVar4;
    }
  }
  *param_2 = uVar3;
  uVar5 = CONCAT71(uVar6,1);
LAB_14032399c:
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar5 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140323a4e FUN_140323a4e body=2448 status=ok
// SIG undefined FUN_140323a4e(void)

void FUN_140323a4e(longlong param_1,ulonglong param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  char cVar9;
  byte bVar10;
  int iVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  undefined *puVar14;
  longlong *plVar15;
  longlong *plVar16;
  int iVar17;
  longlong *plVar18;
  longlong lVar19;
  undefined4 *puVar20;
  ulonglong uVar21;
  longlong lVar22;
  undefined4 *puVar23;
  longlong lVar24;
  undefined4 *puVar25;
  bool bVar26;
  undefined4 uVar27;
  undefined1 auStack_118 [32];
  longlong *local_f8;
  ulonglong local_f0;
  ulonglong local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined2 local_c8;
  int local_c0;
  char local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 local_a0;
  ushort local_98;
  byte local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  ushort local_70;
  byte local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  plVar18 = *(longlong **)(param_1 + 0x48);
  plVar15 = *(longlong **)(param_1 + 0xf0);
  bVar8 = true;
  if (plVar15 == (longlong *)0x0) {
    plVar15 = (longlong *)0x0;
    lVar19 = 0;
  }
  else {
    iVar11 = (int)plVar15[1];
    lVar19 = 0;
    do {
      if (iVar11 == 0) {
        plVar15 = (longlong *)0x0;
        goto LAB_140323ab9;
      }
      LOCK();
      iVar17 = (int)plVar15[1];
      bVar26 = iVar11 == iVar17;
      if (bVar26) {
        *(int *)(plVar15 + 1) = iVar11 + 1;
        iVar17 = iVar11;
      }
      iVar11 = iVar17;
      UNLOCK();
    } while (!bVar26);
    lVar19 = *(longlong *)(param_1 + 0xe8);
    bVar8 = false;
  }
LAB_140323ab9:
  uVar3 = *(undefined4 *)(lVar19 + 0x250);
  uVar27 = *(undefined4 *)(lVar19 + 0x5d4);
  uVar2 = *(undefined4 *)(lVar19 + 0x5d0);
  plVar16 = *(longlong **)(lVar19 + 0x480);
  lVar19 = *(longlong *)(lVar19 + 0x488);
  if (lVar19 != 0) {
    LOCK();
    *(int *)(lVar19 + 0xc) = *(int *)(lVar19 + 0xc) + 1;
    UNLOCK();
  }
  *(undefined4 *)(param_2 + 0xc0) = uVar2;
  *(undefined4 *)(param_2 + 0xc4) = uVar27;
  *(undefined4 *)(param_2 + 200) = uVar3;
  *(longlong **)(param_2 + 0xd0) = plVar16;
  plVar5 = *(longlong **)(param_2 + 0xd8);
  *(longlong *)(param_2 + 0xd8) = lVar19;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  lVar19 = *(longlong *)(param_1 + 0x108);
  if (((lVar19 != 0) && (lVar22 = *(longlong *)(param_1 + 0x110), lVar22 != 0)) &&
     (0 < *(int *)(lVar22 + 8))) {
    LOCK();
    *(int *)(lVar22 + 0xc) = *(int *)(lVar22 + 0xc) + 1;
    UNLOCK();
    plVar5 = *(longlong **)(param_2 + 0xd8);
    *(longlong *)(param_2 + 0xd0) = lVar19;
    *(longlong *)(param_2 + 0xd8) = lVar22;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))();
      }
    }
  }
  puVar23 = (undefined4 *)(param_2 + 0x40);
  FUN_144955a78(puVar23,plVar18 + 0x13);
  if (((char)plVar18[0x2b] == '\0') && ((char)plVar18[0x33] != '\x01')) goto LAB_140323b92;
  lVar19 = *(longlong *)(param_1 + 0x40);
  if (lVar19 == 0) {
    lVar22 = 0;
    local_e0 = 0;
LAB_1403240b3:
    uStack_d8 = (longlong *)0x0;
    uVar12 = CONCAT71((int7)((ulonglong)plVar16 >> 8),1);
  }
  else {
    if (*(int *)(lVar19 + 0x4c) == 0) {
LAB_140323ed5:
      lVar22 = 0;
    }
    else {
      uVar4 = *(uint *)(lVar19 + 0x48);
      lVar22 = 0;
      if ((-1 < (int)uVar4) && ((int)uVar4 < DAT_14c9647dc)) {
        plVar16 = (longlong *)
                  ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8));
        if ((plVar16 == (longlong *)0x0) ||
           (((int)plVar16[2] != *(int *)(lVar19 + 0x4c) ||
            ((*(uint *)(plVar16 + 1) & 0x10200000) != 0)))) goto LAB_140323ed5;
        lVar22 = *plVar16;
      }
    }
    plVar5 = *(longlong **)(lVar19 + 0x118);
    local_e0 = param_1;
    if (plVar5 == (longlong *)0x0) goto LAB_1403240b3;
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
    UNLOCK();
    LOCK();
    plVar16 = plVar5 + 1;
    *(int *)plVar16 = (int)*plVar16 + -1;
    UNLOCK();
    if ((int)*plVar16 == 0) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
    LOCK();
    *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
    UNLOCK();
    uVar12 = 0;
    uStack_d8 = plVar5;
  }
  plVar16 = uStack_d8;
  local_e8 = CONCAT71(local_e8._1_7_,3);
  local_c0 = 0;
  local_d0._0_4_ = 0;
  if (lVar22 == 0) {
    iVar11 = 0;
    uVar4 = (uint)local_d0;
  }
  else {
    uVar4 = *(uint *)(lVar22 + 0xc);
    local_d0 = (ulonglong)uVar4;
    if ((int)uVar4 < DAT_14c9647dc) {
      lVar19 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
    }
    else {
      lVar19 = 0;
    }
    iVar11 = *(int *)(lVar19 + 0x10);
    if (*(int *)(lVar19 + 0x10) == 0) {
      LOCK();
      iVar11 = DAT_14c964868 + 1;
      UNLOCK();
      iVar17 = DAT_14c964868 + 1;
      bVar26 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar11;
      if (bVar26) {
        local_f0 = CONCAT44(local_f0._4_4_,(int)uVar12);
        local_f8 = (longlong *)CONCAT44(local_f8._4_4_,iVar17);
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar17);
        uVar12 = local_f0 & 0xffffffff;
        iVar17 = (int)local_f8;
      }
      LOCK();
      iVar11 = *(int *)(lVar19 + 0x10);
      bVar26 = iVar11 == 0;
      if (bVar26) {
        *(int *)(lVar19 + 0x10) = iVar17;
        iVar11 = 0;
      }
      UNLOCK();
      uVar4 = (uint)local_d0;
      if (bVar26) {
        iVar11 = iVar17;
      }
    }
  }
  local_d0._0_4_ = uVar4;
  local_d0 = CONCAT44(iVar11,(uint)local_d0);
  local_c8 = CONCAT11(local_c8._1_1_,2);
  if (local_c0 != 0) {
    FUN_1417398fc(&DAT_14c9a3da0,local_c0 + -1,1);
    local_c0 = 0;
  }
  if ((char)uVar12 == '\0') {
    LOCK();
    piVar1 = (int *)((longlong)plVar16 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar16 + 0x10))(plVar16);
    }
  }
  if ((char)plVar18[0x2b] == '\x01') {
    puVar25 = &local_b0;
    FUN_1447c3578(plVar18 + 0x24,puVar25,&local_e8);
    if (local_90 == 3) {
      uVar27 = local_b0;
      bVar10 = 3;
    }
    else {
      uVar27 = *puVar23;
      puVar20 = &local_88;
      FUN_1400b56fe(puVar20,&local_b0,3);
      if (local_68 != 0) {
        uVar27 = local_88;
      }
      pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
      if (pcVar6 != (code *)0x0) {
        if (0x18 < local_70) {
          puVar20 = (undefined4 *)CONCAT44(uStack_84,local_88);
        }
        (*pcVar6)(puVar20);
      }
      bVar10 = local_90;
      if (0x18 < local_70) {
        FUN_1400020a8(CONCAT44(uStack_84,local_88));
        bVar10 = local_90;
      }
    }
    *puVar23 = uVar27;
    pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar10 * 0x120));
    if (pcVar6 != (code *)0x0) {
      if (0x18 < local_98) {
        puVar25 = (undefined4 *)CONCAT44(uStack_ac,local_b0);
      }
      (*pcVar6)(puVar25);
    }
    if (0x18 < local_98) {
      FUN_1400020a8(CONCAT44(uStack_ac,local_b0));
    }
  }
  if ((char)plVar18[0x33] == '\x01') {
    puVar23 = &local_b0;
    FUN_1447c3578(plVar18 + 0x2c,puVar23,&local_e8);
    if (local_90 == 3) {
      local_90 = 3;
      uVar27 = local_b0;
    }
    else {
      uVar27 = *(undefined4 *)(param_2 + 0x44);
      puVar25 = &local_88;
      FUN_1400b56fe(puVar25,&local_b0,3);
      if (local_68 != 0) {
        uVar27 = local_88;
      }
      pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
      if (pcVar6 != (code *)0x0) {
        if (0x18 < local_70) {
          puVar25 = (undefined4 *)CONCAT44(uStack_84,local_88);
        }
        (*pcVar6)(puVar25);
      }
      if (0x18 < local_70) {
        FUN_1400020a8(CONCAT44(uStack_84,local_88));
      }
    }
    *(undefined4 *)(param_2 + 0x44) = uVar27;
    pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_90 * 0x120));
    if (pcVar6 != (code *)0x0) {
      if (0x18 < local_98) {
        puVar23 = (undefined4 *)CONCAT44(uStack_ac,local_b0);
      }
      (*pcVar6)(puVar23);
    }
    if (0x18 < local_98) {
      FUN_1400020a8(CONCAT44(uStack_ac,local_b0));
    }
  }
  lVar19 = DAT_14c9a3da0;
  if ((longlong)local_c0 != 0) {
    lVar22 = (longlong)local_c0 + -1;
    lVar24 = lVar22 * 0x10;
    FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar24),
                  *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar24));
    if (*(longlong *)(lVar19 + lVar24) != 0) {
      FUN_1400020a8();
    }
    lVar19 = DAT_14c9a3da0;
    iVar11 = (int)lVar22;
    if (DAT_14c9a3dd4 != 0) {
      *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar11;
    }
    *(undefined4 *)(lVar19 + lVar24) = 0xffffffff;
    iVar17 = -1;
    if (0 < DAT_14c9a3dd4) {
      iVar17 = DAT_14c9a3dd0;
    }
    *(int *)(lVar19 + 4 + lVar24) = iVar17;
    DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
    puVar14 = &DAT_14c9a3db0;
    if (DAT_14c9a3dc0 != (undefined *)0x0) {
      puVar14 = DAT_14c9a3dc0;
    }
    iVar17 = iVar11 + 0x1f;
    if (-1 < iVar11) {
      iVar17 = iVar11;
    }
    bVar10 = (byte)lVar22 & 0x1f;
    DAT_14c9a3dd0 = iVar11;
    *(uint *)(puVar14 + (longlong)(iVar17 >> 5) * 4) =
         *(uint *)(puVar14 + (longlong)(iVar17 >> 5) * 4) &
         (-2 << bVar10 | 0xfffffffeU >> 0x20 - bVar10);
    local_c0 = 0;
  }
  if (((char)local_e8 == '\x03') && (uStack_d8 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)uStack_d8 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*uStack_d8 + 0x10))();
    }
  }
LAB_140323b92:
  if ((((char)plVar18[0x23] == '\x01') && (*(char *)(param_2 + 0x69) == '\x01')) &&
     (*(char *)(param_2 + 0x6a) == '\x01')) {
    lVar19 = param_2 + 0x70;
    local_f8 = plVar18;
    local_f0 = param_2;
    uVar13 = FUN_140343d7a(param_1);
    local_e8 = local_e8 & 0xffffffffffffff00;
    local_c0 = 0;
    FUN_1456bb102(&local_e8,uVar13);
    puVar23 = &local_88;
    FUN_1447c3578(lVar19,puVar23,&local_e8);
    cVar9 = FUN_14070def8(puVar23,&local_b0);
    pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
    if (pcVar6 != (code *)0x0) {
      if (0x18 < local_70) {
        puVar23 = (undefined4 *)CONCAT44(uStack_84,local_88);
      }
      (*pcVar6)(puVar23);
    }
    if (0x18 < local_70) {
      FUN_1400020a8(CONCAT44(uStack_84,local_88));
    }
    FUN_144a5ac3a(&local_e8);
    param_2 = local_f0;
    plVar18 = local_f8;
    if (cVar9 != '\0') {
      local_d0 = local_a0;
      local_e0 = CONCAT44(uStack_ac,local_b0);
      uStack_d8 = (longlong *)CONCAT44(uStack_a4,uStack_a8);
      local_e8 = 0;
      local_c8 = 0x18;
      local_c0 = CONCAT31(local_c0._1_3_,5);
      local_b8 = ((DAT_14c9a8ab4 & 0x20) == 0) * '\x05';
      FUN_1403719a4(lVar19,&local_e8);
      FUN_144a2da94(&local_e8);
      param_2 = local_f0;
      plVar18 = local_f8;
    }
  }
  iVar11 = *(int *)((longlong)plVar18 + 0x94);
  *(int *)((longlong)plVar18 + 0x94) = iVar11 + 1;
  uVar12 = (ulonglong)(int)plVar18[0x11];
  if ((longlong)uVar12 < 1) {
    *(int *)((longlong)plVar18 + 0x94) = iVar11;
  }
  else {
    bVar26 = false;
    local_f8 = plVar15;
    do {
      lVar19 = uVar12 * 0x10 + -8;
      uVar21 = uVar12;
      while (((lVar22 = plVar18[0x10], *(int *)(lVar22 + lVar19) != 0 &&
              (plVar15 = *(longlong **)(lVar22 + -8 + lVar19), plVar15 != (longlong *)0x0)) &&
             (cVar9 = (**(code **)(*plVar15 + 0x60))(plVar15,param_1,param_2), cVar9 != '\0'))) {
        lVar19 = lVar19 + -0x10;
        bVar7 = uVar21 < 2;
        uVar21 = uVar21 - 1;
        if (bVar7) {
          *(int *)((longlong)plVar18 + 0x94) = *(int *)((longlong)plVar18 + 0x94) + -1;
          plVar15 = local_f8;
          if (bVar26) goto LAB_1403240ff;
          goto LAB_140323c52;
        }
      }
      uVar12 = uVar21 - 1;
      bVar26 = true;
    } while (1 < uVar21);
    *(int *)((longlong)plVar18 + 0x94) = *(int *)((longlong)plVar18 + 0x94) + -1;
LAB_1403240ff:
    plVar15 = local_f8;
    FUN_14474d06a(plVar18 + 0x10,0);
  }
LAB_140323c52:
  if (!bVar8) {
    LOCK();
    plVar18 = plVar15 + 1;
    *(int *)plVar18 = (int)*plVar18 + -1;
    UNLOCK();
    if ((int)*plVar18 == 0) {
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
  if ((local_60 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1403243e0 FUN_1403243e0 body=286 status=ok
// SIG undefined FUN_1403243e0(void)

undefined8 FUN_1403243e0(longlong param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_1403244f8;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1403244f8;
    }
    FUN_140192332(param_1 + 0x18,&local_38,0);
  }
  else {
LAB_1403244f8:
    local_38 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1403244a1;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5,param_2);
      uVar6 = 1;
      goto LAB_1403244a1;
    }
  }
  uVar6 = 0;
LAB_1403244a1:
  if ((local_38 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_38);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140324500 FUN_140324500 body=250 status=ok
// SIG undefined FUN_140324500(void)

void FUN_140324500(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  
  *(undefined4 *)(param_1 + 0x110) = DAT_14c75b13c;
  iVar5 = *(int *)(param_1 + 0x40);
  iVar3 = iVar5;
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_143e96942(*(longlong *)(param_1 + 0x50),param_2);
    if ((*(char *)(*(longlong *)(param_1 + 0x50) + 0x70) == '\0') &&
       (*(char *)(*(longlong *)(param_1 + 0x50) + 0x28) != '\0')) {
      return;
    }
    iVar3 = *(int *)(param_1 + 0x40);
  }
  if (0 < iVar3) {
    uVar6 = 0;
    bVar2 = DAT_14c950c29;
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x38) + uVar6 * 8);
      if (((bVar2 & 1) == 0) || (plVar1 == (longlong *)0x0)) {
        if (plVar1 != (longlong *)0x0) goto LAB_140324574;
      }
      else {
        FUN_1456cec3c(plVar1);
LAB_140324574:
        if (((1 < iVar5) && (DAT_14cb92750 != '\0')) && (uVar6 == *(uint *)(param_1 + 0x60))) {
          *(undefined1 *)(plVar1 + 0x30) = 1;
        }
        (**(code **)(*plVar1 + 0x2b0))(plVar1,param_2);
        bVar2 = DAT_14c950c29;
        if ((char)plVar1[0x30] == '\x01') {
          *(undefined1 *)(plVar1 + 0x30) = 0;
        }
      }
      uVar6 = uVar6 + 1;
      iVar3 = *(int *)(param_1 + 0x40);
    } while ((longlong)uVar6 < (longlong)iVar3);
    if ((1 < iVar3) && (DAT_14cb92750 != '\0')) {
      iVar4 = *(int *)(param_1 + 0x60) + 1;
      iVar5 = 0;
      if (iVar4 < iVar3) {
        iVar5 = iVar4;
      }
      *(int *)(param_1 + 0x60) = iVar5;
    }
  }
  return;
}



// FUNCTION 1403245fa FUN_1403245fa body=306 status=ok
// SIG undefined FUN_1403245fa(void)

void FUN_1403245fa(longlong param_1,uint param_2)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  
  uVar7 = param_2;
  if (1 < param_2) {
    uVar4 = (ulonglong)param_2 * 8;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar5 = uVar4 + 0xf;
        if (param_2 < 0xfff) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar5 >> 4]];
        }
        else {
          if ((uVar5 & 0x7fffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar5 >> 4];
            uVar6 = 0x32;
            if (0x32 < bVar2) {
              uVar6 = (ulonglong)bVar2;
            }
            uVar8 = 0x32 - (ulonglong)bVar2;
            do {
              uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140324660;
              lVar1 = uVar6 + 1 + uVar8;
              uVar8 = uVar8 - 1;
            } while (lVar1 != 0x33);
          }
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar4 & ((uVar5 & 0x7fffffff0) + uVar4) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,0);
      }
    }
LAB_140324660:
    uVar3 = (uint)(uVar4 >> 3);
    uVar7 = 0x7fffffff;
    if ((int)param_2 <= (int)uVar3) {
      uVar7 = uVar3;
    }
  }
  if (uVar7 == *(uint *)(param_1 + 0x14)) {
    return;
  }
  *(uint *)(param_1 + 0x14) = uVar7;
  FUN_14032472c(param_1,*(undefined4 *)(param_1 + 0x10),uVar7,8);
  return;
}



// FUNCTION 14032472c FUN_14032472c body=133 status=ok
// SIG undefined FUN_14032472c(void)

void FUN_14032472c(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

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
    FUN_1446efa72((longlong)param_1 + 8,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 8),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 8,param_2,param_3,param_4);
  return;
}



// FUNCTION 1403247bc FUN_1403247bc body=1424 status=ok
// SIG undefined FUN_1403247bc(void)

longlong * FUN_1403247bc(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  undefined1 auStack_78 [32];
  undefined1 local_58 [4];
  undefined1 local_54 [4];
  longlong *local_50 [2];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14480568a();
  *param_1 = (longlong)&PTR_FUN_14a76a4b0;
  param_1[5] = (longlong)&PTR_LAB_14a76aeb0;
  param_1[6] = (longlong)&PTR_LAB_14a76aef0;
  param_1[0x55] = (longlong)&PTR_LAB_14a76af40;
  param_1[0x56] = (longlong)&PTR_LAB_14a76afc0;
  param_1[0x57] = (longlong)&PTR_LAB_14a76afd0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c844850) && (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1)) {
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
  plVar1 = DAT_14c844840;
  param_1[0xc4] = (longlong)DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    if (*(code **)(*plVar1 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar1 + 8))();
    }
  }
  *(undefined4 *)(param_1 + 0xc5) = 0;
  param_1[0xc6] = 0;
  param_1[199] = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cad37a0) && (FUN_144b3d300(&DAT_14cad37a0), DAT_14cad37a0 == -1)) {
    FUN_14032541e();
    atexit(FUN_14349f8f5);
    _Init_thread_footer(&DAT_14cad37a0);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cad37b8) && (FUN_144b3d300(&DAT_14cad37b8), DAT_14cad37b8 == -1)) {
    FUN_1456fd1e4();
    atexit(FUN_14349f977);
    _Init_thread_footer(&DAT_14cad37b8);
  }
  *(byte *)((longlong)param_1 + 0x4a) = *(byte *)((longlong)param_1 + 0x4a) & 0xfd;
  *(byte *)((longlong)param_1 + 0x9d) = *(byte *)((longlong)param_1 + 0x9d) & 0x7f;
  local_40 = L"DefaultText";
  local_38 = 0xb;
  FUN_1446e940c(local_54,&local_40);
  local_40 = L"TextRenderComponent";
  local_38 = 0x13;
  FUN_1446e940c(local_58,&local_40);
  local_40 = L"Text";
  local_38 = 4;
  FUN_140208c1e(local_50,local_58,local_54,&local_40);
  FUN_140008f88(param_1 + 0xc4,local_50);
  if (local_50[0] != (longlong *)0x0) {
    (**(code **)(*local_50[0] + 0x10))();
  }
  if (DAT_14cad3760 == 0) {
    if (DAT_14cad3768 != 0) {
      FUN_141247186();
      FUN_140056680(&local_40,DAT_14cad3768);
      FUN_14124722a(&local_40,1);
      lVar2 = FUN_1414bd8e4(&local_40,DAT_14cad3770);
      if ((lVar2 == 0) || (DAT_14c950c29 == '\0')) {
        DAT_14cad3760 = lVar2;
        if ((lVar2 == 0) && ((DAT_14cad3770 & 0x2002) == 0)) {
          FUN_14283f6fe(DAT_14cad3768);
        }
      }
      else {
        FUN_1456cec3c(lVar2);
        DAT_14cad3760 = lVar2;
      }
      DAT_14cad3768 = 0;
      if (local_40 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_140324986;
    }
    lVar2 = 0;
  }
  else {
LAB_140324986:
    lVar2 = DAT_14cad3760;
    if ((DAT_14cad3760 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(DAT_14cad3760);
    }
  }
  param_1[199] = lVar2;
  if (DAT_14cad3788 == 0) {
    if (DAT_14cad3790 == 0) {
      lVar2 = 0;
      goto LAB_1403249c1;
    }
    FUN_141247186();
    FUN_140056680(&local_40,DAT_14cad3790);
    FUN_14124722a(&local_40,1);
    lVar2 = FUN_1403254ba(&local_40,DAT_14cad3798);
    if ((lVar2 == 0) || (DAT_14c950c29 == '\0')) {
      DAT_14cad3788 = lVar2;
      if ((lVar2 == 0) && ((DAT_14cad3798 & 0x2002) == 0)) {
        FUN_14283f6fe(DAT_14cad3790);
      }
    }
    else {
      FUN_1456cec3c(lVar2);
      DAT_14cad3788 = lVar2;
    }
    DAT_14cad3790 = 0;
    if (local_40 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
  }
  lVar2 = DAT_14cad3788;
  if ((DAT_14cad3788 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(DAT_14cad3788);
  }
LAB_1403249c1:
  param_1[0xc6] = lVar2;
  (**(code **)(*param_1 + 0x728))(param_1,DAT_14cad0f30,1);
  *(undefined4 *)((longlong)param_1 + 0x644) = 0xffffffff;
  param_1[0xc9] = (longlong)&DAT_3f8000003f800000;
  param_1[0xcb] = 0;
  *(undefined2 *)(param_1 + 200) = 0x200;
  if ((*(byte *)((longlong)param_1 + 0x2d3) & 8) != 0) {
    *(byte *)((longlong)param_1 + 0x2d3) = *(byte *)((longlong)param_1 + 0x2d3) & 0xf7;
    (**(code **)(*param_1 + 0x958))(param_1);
  }
  if (param_1[199] == 0) {
    fVar4 = 0.033333335;
    fVar3 = 30.0;
  }
  else {
    FUN_1400337aa();
    fVar3 = (float)FUN_140324d4e(param_1[199]);
    fVar4 = 1.0 / fVar3;
  }
  *(float *)(param_1 + 0xca) = fVar3;
  *(float *)((longlong)param_1 + 0x654) = fVar4;
  *(byte *)((longlong)param_1 + 0x9f) = *(byte *)((longlong)param_1 + 0x9f) | 2;
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 140324d4e FUN_140324d4e body=502 status=ok
// SIG undefined FUN_140324d4e(void)

float FUN_140324d4e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  ushort uVar4;
  longlong lVar5;
  int iVar6;
  float fVar7;
  undefined1 auStack_f8 [32];
  undefined4 *local_d8;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined3 uStack_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined1 local_a0 [56];
  longlong *local_68;
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (*(char *)(param_1 + 0x30) == '\x01') {
    FUN_14011d972(DAT_14cb0e288,&local_40);
    if (local_40 == 0) {
      fVar7 = 0.0;
    }
    else {
      local_d8 = &local_c0;
      local_b8 = 0;
      local_c0 = 0;
      uStack_bc = 0;
      local_b0 = 0;
      uStack_ac = 0;
      uStack_a8 = 0;
      uStack_a4 = 0x3f800000;
      local_c8 = 0;
      FUN_140324f46(local_a0,param_1,(float)*(int *)(param_1 + 0x13c));
      lVar5 = FUN_144955c2e(local_40,local_a0,0x3f800000,&DAT_14c96b1c0);
      uVar4 = *(ushort *)(lVar5 + 0xe0);
      if (uVar4 == 0) {
        uVar4 = FUN_14574f6a4(*(undefined8 *)(*(longlong *)(lVar5 + 0xd8) + 0x48),lVar5 + 0x50,
                              *(undefined4 *)(lVar5 + 0xd0));
        *(ushort *)(lVar5 + 0xe0) = uVar4;
      }
      if (local_68 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_68 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_68)(local_68);
          LOCK();
          piVar2 = (int *)((longlong)local_68 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_68 + 0x10))(local_68);
          }
        }
      }
      fVar7 = (float)uVar4;
    }
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
  }
  else if (*(char *)(param_1 + 0x30) == '\0') {
    if ((longlong)*(int *)(param_1 + 0x130) < 1) {
      fVar7 = 1.0;
    }
    else {
      iVar6 = 1;
      lVar5 = 0;
      do {
        iVar3 = *(int *)(*(longlong *)(param_1 + 0x128) + lVar5 * 4);
        if (iVar6 < iVar3) {
          iVar6 = iVar3;
        }
        lVar5 = lVar5 + 1;
      } while (*(int *)(param_1 + 0x130) != lVar5);
      fVar7 = (float)iVar6;
    }
  }
  else {
    fVar7 = 0.0;
  }
  if ((local_30 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return fVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140324f46 FUN_140324f46 body=469 status=ok
// SIG undefined FUN_140324f46(void)

longlong *
FUN_140324f46(longlong *param_1,longlong param_2,float param_3,longlong *param_4,undefined4 *param_5
             )

{
  undefined4 uVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
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
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *param_1 = param_2;
  if (param_2 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(param_2);
  }
  bVar3 = DAT_14c950c29;
  param_1[1] = 0;
  uVar1 = *(undefined4 *)((longlong)param_5 + 3);
  *(undefined4 *)(param_1 + 2) = *param_5;
  *(undefined4 *)((longlong)param_1 + 0x13) = uVar1;
  lVar2 = *(longlong *)(param_5 + 2);
  param_1[3] = lVar2;
  if ((lVar2 != 0 & bVar3) == 1) {
    FUN_1456cec3c();
  }
  lVar2 = *(longlong *)(param_5 + 6);
  param_1[4] = *(longlong *)(param_5 + 4);
  param_1[5] = lVar2;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = *param_4;
  if (65535.0 <= param_3) {
    param_3 = 65535.0;
  }
  if (param_3 <= 0.0) {
    param_3 = 0.0;
  }
  *(float *)(param_1 + 9) = param_3;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined2 *)((longlong)param_1 + 0x54) = 2;
  *(undefined1 *)((longlong)param_1 + 0x56) = 0;
  *(undefined4 *)(param_1 + 0xb) = 0x3f800000;
  if (param_2 != 0) {
    if (DAT_14c9684a8 == 0) {
      local_60 = &local_48;
      local_48 = FUN_1449e2820;
      local_50 = FUN_14081d0ea;
      local_58 = FUN_1427b09ee;
      local_68 = &LAB_1469380b7;
      local_70 = FUN_1462798ef;
      local_78 = L"Engine";
      local_80 = 0;
      local_88 = 0x10004001;
      local_90 = 8;
      local_98 = 0x28;
      FUN_14081cfa3(L"/Script/SlateCore",L"FontProviderInterface",&DAT_14c9684a8,&DAT_1469380b6);
    }
    plVar4 = (longlong *)FUN_144718840(param_2,DAT_14c9684a8);
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14032511c FUN_14032511c body=331 status=ok
// SIG undefined FUN_14032511c(void)

int FUN_14032511c(longlong *param_1,uint param_2,longlong *param_3)

{
  longlong lVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  float fVar6;
  float fVar7;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar3 != -1) {
      lVar4 = *param_1;
      bVar2 = DAT_14c950c29;
      do {
        lVar1 = *param_3;
        if ((lVar1 != 0 & bVar2) == 1) {
          FUN_1456cec3c(lVar1);
          bVar2 = DAT_14c950c29;
        }
        plVar5 = (longlong *)(lVar4 + (longlong)iVar3 * 0x98);
        if (((((*plVar5 == lVar1) && ((int)plVar5[2] == (int)param_3[2])) &&
             (*(char *)((longlong)plVar5 + 0x14) == *(char *)((longlong)param_3 + 0x14))) &&
            ((*(char *)((longlong)plVar5 + 0x15) == *(char *)((longlong)param_3 + 0x15) &&
             (plVar5[6] == param_3[6])))) && (plVar5[8] == param_3[8])) {
          fVar6 = *(float *)(plVar5 + 9);
          if (65535.0 <= fVar6) {
            fVar6 = 65535.0;
          }
          if (fVar6 <= 0.0) {
            fVar6 = 0.0;
          }
          fVar7 = *(float *)(param_3 + 9);
          if (65535.0 <= fVar7) {
            fVar7 = 65535.0;
          }
          if (fVar7 <= 0.0) {
            fVar7 = 0.0;
          }
          if (((fVar6 == fVar7) && (!NAN(fVar6) && !NAN(fVar7))) &&
             (((int)plVar5[0xc] == (int)param_3[0xc] &&
              ((*(char *)((longlong)plVar5 + 100) == *(char *)((longlong)param_3 + 100) &&
               (*(char *)((longlong)plVar5 + 0x65) == *(char *)((longlong)param_3 + 0x65))))))) {
            if ((*(float *)(plVar5 + 0x10) == *(float *)(param_3 + 0x10)) &&
               (!NAN(*(float *)(plVar5 + 0x10)) && !NAN(*(float *)(param_3 + 0x10)))) {
              return iVar3;
            }
          }
        }
        lVar4 = *param_1;
        iVar3 = *(int *)(lVar4 + 0x90 + (longlong)iVar3 * 0x98);
      } while (iVar3 != -1);
    }
  }
  return -1;
}



// FUNCTION 140325268 FUN_140325268 body=436 status=ok
// SIG undefined FUN_140325268(void)

void FUN_140325268(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x98;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + 0x84 + lVar7);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x94 + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x90 + lVar7) =
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



// FUNCTION 14032541e FUN_14032541e body=156 status=ok
// SIG undefined FUN_14032541e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14032541e(void)

{
  _DAT_14cad3750 = &PTR_LAB_149e668b0;
  _DAT_14cad3758 = 0;
  FUN_1405bceb4(&DAT_14cad3750);
  _DAT_14cad3750 = &PTR_FUN_14a899420;
  DAT_14cad3760 = 0;
  DAT_14cad3768 = L"/Engine/EngineFonts/RobotoDistanceField";
  DAT_14cad3770 = 0;
  _DAT_14cad3778 = &PTR_LAB_149e668b0;
  _DAT_14cad3780 = 0;
  FUN_1405bceb4(&DAT_14cad3778);
  _DAT_14cad3778 = &PTR_FUN_14a899440;
  DAT_14cad3788 = 0;
  DAT_14cad3790 = L"/Engine/Gearbox/EngineMaterials/OuterEdgeTextMaterialOpaque";
  DAT_14cad3798 = 0;
  return;
}



// FUNCTION 1403254ba FUN_1403254ba body=367 status=ok
// SIG undefined FUN_1403254ba(void)

longlong FUN_1403254ba(longlong *param_1,undefined4 param_2)

{
  ulonglong uVar1;
  short *psVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined2 *puVar8;
  int iVar9;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined8 local_50;
  undefined1 local_48;
  undefined8 local_40;
  longlong local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar5 = (longlong)(int)param_1[1];
  if (lVar5 != 0) {
    uVar7 = 0;
    do {
      if (*(short *)(*param_1 + uVar7) == 0x2e) {
        if ((int)(~uVar7 >> 1) != 0) goto LAB_140325560;
        break;
      }
      uVar7 = uVar7 + 2;
    } while (lVar5 * 2 != uVar7);
  }
  uVar7 = lVar5 * 2;
  do {
    if (uVar7 == 0) goto LAB_140325560;
    uVar1 = uVar7 - 2;
    psVar2 = (short *)(*param_1 + -2 + uVar7);
    uVar7 = uVar1;
  } while (*psVar2 != 0x2f);
  iVar9 = (int)(uVar1 >> 1);
  if (iVar9 != -1) {
    FUN_144a49bb4(param_1,&local_30,iVar9 + 1);
    FUN_140002184(param_1,0x2e);
    iVar9 = local_28 + -1;
    if (local_28 == 0) {
      iVar9 = 0;
    }
    FUN_1400020e8(param_1,local_30,iVar9);
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
LAB_140325560:
  lVar5 = FUN_140a1dfd8();
  if (*(longlong *)(lVar5 + 0x110) == 0) {
    FUN_140aa6c08();
  }
  if ((int)param_1[1] == 0) {
    puVar8 = &DAT_149dfb77a;
  }
  else {
    puVar8 = (undefined2 *)*param_1;
  }
  uVar4 = FUN_140a1dfd8();
  local_40 = 0;
  local_50 = 0;
  local_48 = 1;
  local_58 = param_2;
  lVar5 = FUN_1412ecd05(uVar4,0,puVar8,0);
  if (lVar5 != 0) {
    uVar3 = *(uint *)(lVar5 + 0xc);
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar6 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar6 = 0;
    }
    FUN_1447f71cc(lVar6,0x40000000);
  }
  if ((local_20 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar5;
}



// FUNCTION 14032563e FUN_14032563e body=393 status=ok
// SIG undefined FUN_14032563e(void)

void FUN_14032563e(longlong param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  
  fVar5 = *(float *)(param_1 + 0x2b8);
  fVar6 = *(float *)(param_1 + 700);
  if (10.0 <= fVar5) {
    fVar5 = 10.0;
  }
  if (fVar5 <= 0.0) {
    fVar5 = 0.0;
  }
  *(float *)(param_1 + 0x2b8) = fVar5;
  if (2.0 <= fVar6) {
    fVar6 = 2.0;
  }
  if (fVar6 <= 0.0) {
    fVar6 = 0.0;
  }
  *(float *)(param_1 + 700) = fVar6;
  if ((((DAT_14c76152c == '\x01') && (*(char *)(param_1 + 0x1fc) != '\0')) &&
      ((lVar4 = *(longlong *)(param_1 + 0xb0), lVar4 != 0 ||
       (lVar4 = FUN_1448abda6(param_1), lVar4 != 0)))) &&
     ((((*(byte *)(lVar4 + 0x152) == 1 || (*(byte *)(lVar4 + 0x152) - 5 < 2)) &&
       (*(longlong *)(lVar4 + 0x178) != 0)) && (DAT_14c76152c == '\x01')))) {
    bVar1 = *(byte *)(param_1 + 0x1fc);
    iVar3 = *(int *)(*(longlong *)(lVar4 + 0x178) + 0x3e4);
    if (iVar3 < 0) {
      iVar3 = FUN_141348de4();
    }
    if (iVar3 < (int)(uint)bVar1) {
      return;
    }
  }
  if (((((int)(uint)*(byte *)(param_1 + 0x1fc) <= DAT_14cb0cbf8) &&
       (cVar2 = FUN_140041326(param_1), cVar2 != '\0')) &&
      (((*(byte *)(param_1 + 0x9c) & 1) != 0 &&
       ((1e-05 < (*(float *)(param_1 + 0x2a8) + *(float *)(param_1 + 0x2b8)) * 1000.0 &&
        (1e-05 < *(float *)(param_1 + 0x344))))))) &&
     ((*(longlong *)(param_1 + 0x20) == 0 ||
      ((*(uint *)(*(longlong *)(param_1 + 0x20) + 8) & 0x10) == 0)))) {
    lVar4 = *(longlong *)(param_1 + 0xb0);
    if (lVar4 == 0) {
      lVar4 = FUN_1448abda6(param_1);
    }
                    /* WARNING: Could not recover jumptable at 0x00014032573c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(lVar4 + 0x218) + 0x280))(*(longlong **)(lVar4 + 0x218),param_1);
    return;
  }
  return;
}



// FUNCTION 1403257c8 FUN_1403257c8 body=572 status=ok
// SIG undefined FUN_1403257c8(void)

void FUN_1403257c8(longlong param_1,longlong *param_2)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined1 auStack_78 [44];
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
  uVar9 = ((int)param_2[1] - *(int *)((longlong)param_2 + 0x34)) + uVar3;
  if (uVar3 < uVar9) {
    if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar9);
    }
    FUN_140325ea4(param_1,uVar9);
    iVar4 = 1;
    if (3 < uVar9) {
      uVar3 = (uVar9 | 1) + 0xe;
      iVar4 = 0x1f;
      if (uVar3 != 0) {
        for (; uVar3 >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      iVar4 = 1 << ((byte)iVar4 & 0x1f);
    }
    if ((*(int *)(param_1 + 0x48) == 0) || (*(int *)(param_1 + 0x48) < iVar4)) {
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_1403263ea(param_1);
    }
  }
  iVar4 = (int)param_2[5];
  if (iVar4 == 0) {
    uVar14 = 1;
    uVar13 = 0;
    iVar5 = 0;
    iVar10 = 0;
  }
  else {
    puVar6 = (uint *)param_2[4];
    if ((uint *)param_2[4] == (uint *)0x0) {
      puVar6 = (uint *)(param_2 + 2);
    }
    uVar3 = *puVar6;
    if (uVar3 == 0) {
      iVar5 = iVar4 + 0x1e;
      if (-1 < iVar4 + -1) {
        iVar5 = iVar4 + -1;
      }
      uVar13 = 0;
      uVar14 = (ulonglong)(uint)(iVar5 >> 5);
      if (iVar5 >> 5 < 1) {
        uVar14 = uVar13;
      }
      iVar10 = 0;
      do {
        if (uVar14 == uVar13) goto LAB_140325986;
        iVar10 = iVar10 + 0x20;
        uVar3 = puVar6[uVar13 + 1];
        uVar13 = uVar13 + 1;
      } while (uVar3 == 0);
    }
    else {
      uVar13 = 0;
      iVar10 = 0;
    }
    uVar14 = (ulonglong)(-uVar3 & uVar3);
    uVar1 = uVar14 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar5 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    if (iVar4 <= iVar5) {
      iVar5 = iVar4;
    }
  }
  if (iVar5 != iVar4) {
    uVar3 = 0xffffffff;
    do {
      FUN_140325a06(param_1,local_4c,(longlong)iVar5 * 0x10 + *param_2,0);
      uVar3 = ~(uint)uVar14 & uVar3;
      puVar6 = (uint *)param_2[4];
      if ((uint *)param_2[4] == (uint *)0x0) {
        puVar6 = (uint *)(param_2 + 2);
      }
      iVar2 = (int)param_2[5];
      iVar5 = (int)uVar13;
      lVar11 = (longlong)iVar5;
      uVar9 = puVar6[lVar11] & uVar3;
      if (uVar9 == 0) {
        iVar7 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar7 = iVar2 + -1;
        }
        iVar7 = iVar7 >> 5;
        iVar10 = iVar10 + 0x20;
        iVar8 = iVar7;
        if (iVar7 < iVar5) {
          iVar8 = iVar5;
        }
        if (iVar5 < iVar7) {
          lVar12 = 0;
          do {
            uVar9 = puVar6[lVar11 + lVar12 + 1];
            if (uVar9 != 0) {
              uVar13 = (ulonglong)(iVar5 + (int)lVar12 + 1);
              uVar3 = 0xffffffff;
              goto LAB_14032594f;
            }
            iVar10 = iVar10 + 0x20;
            lVar12 = lVar12 + 1;
          } while (iVar8 - lVar11 != lVar12);
          uVar3 = 0xffffffff;
          iVar5 = iVar8;
        }
        uVar13 = (ulonglong)(iVar5 + 1);
        iVar5 = iVar2;
      }
      else {
LAB_14032594f:
        uVar14 = (ulonglong)(-uVar9 & uVar9);
        uVar1 = uVar14 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        iVar5 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
        if (iVar2 <= iVar5) {
          iVar5 = iVar2;
        }
      }
    } while (iVar5 != iVar4);
  }
LAB_140325986:
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140325a06 FUN_140325a06 body=300 status=ok
// SIG undefined FUN_140325a06(void)

undefined4 *
FUN_140325a06(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 uVar1;
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
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140325bc2(param_1,local_50);
  uVar1 = *param_3;
  *local_48 = uVar1;
  *(undefined4 *)(local_48 + 1) = 0xffffffff;
  local_54 = local_50[0];
  uVar5 = (int)((ulonglong)uVar1 >> 0x20) * 0x17 + (int)uVar1;
  local_68 = param_4;
  cVar2 = FUN_140325b34(param_1,uVar5,local_48);
  if (cVar2 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar4) {
      uVar3 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar5 = *(int *)(param_1 + 0x48) - 1U & uVar5;
      *(uint *)((longlong)local_48 + 0xc) = uVar5;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_48 + 1) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_1403263ea(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140325b34 FUN_140325b34 body=142 status=ok
// SIG undefined FUN_140325b34(void)

void FUN_140325b34(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
                  )

{
  undefined1 uVar1;
  longlong *plVar2;
  int iVar3;
  
  if (1 < (uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34))) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar3 != -1) {
      do {
        if (*(longlong *)(*param_1 + (longlong)iVar3 * 0x10) == *param_3) {
          FUN_1406460b2(param_1,*param_4,1);
          *param_4 = iVar3;
          uVar1 = 1;
          break;
        }
        iVar3 = *(int *)((longlong)iVar3 * 0x10 + *param_1 + 8);
        uVar1 = 0;
      } while (iVar3 != -1);
      goto LAB_140325b9a;
    }
  }
  uVar1 = 0;
LAB_140325b9a:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar1;
  }
  return;
}



// FUNCTION 140325bc2 FUN_140325bc2 body=688 status=ok
// SIG undefined FUN_140325bc2(void)

int * FUN_140325bc2(longlong *param_1,int *param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  uint uVar11;
  longlong *plVar12;
  longlong *plVar13;
  ulonglong uVar14;
  int iVar15;
  int iVar16;
  ulonglong uVar17;
  uint uVar18;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar15 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar15 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar15) {
      FUN_1446efaca(param_1,iVar15);
    }
    iVar7 = (int)param_1[5];
    if (iVar7 == 0) {
      iVar10 = -1;
    }
    else {
      iVar10 = iVar7 + 0x1e;
      if (-1 < iVar7 + -1) {
        iVar10 = iVar7 + -1;
      }
      iVar10 = iVar10 >> 5;
    }
    plVar12 = param_1 + 2;
    iVar8 = iVar7 + 1;
    iVar16 = iVar7 + 0x1f;
    if (-1 < iVar7) {
      iVar16 = iVar7;
    }
    if (iVar16 >> 5 == iVar10) {
      *(int *)(param_1 + 5) = iVar8;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar7) {
        iVar10 = iVar7;
        if (iVar7 + 0x20U < 0xa0) {
          iVar8 = 0x80;
        }
        else {
          uVar18 = iVar7 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar11 = 4;
            if (4 < uVar18) {
              uVar11 = uVar18;
            }
          }
          else {
            uVar11 = uVar18 + (uVar18 * 3 >> 3) + 0x10;
          }
          uVar5 = (ulonglong)(uVar11 * 4);
          if (DAT_14c872d28 != (longlong *)0x0) {
            if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
              uVar2 = (uint)(uVar5 + 0xf);
              if (uVar11 < 0x1ffd) {
                uVar5 = (ulonglong)
                        (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar5 + 0xf >> 4]];
              }
              else {
                uVar9 = (ulonglong)(uVar2 & 0xfffffff0);
                if (uVar9 < 0x7ff1) {
                  bVar6 = (&DAT_14c841e00)[uVar2 >> 4];
                  uVar14 = 0x32;
                  if (0x32 < bVar6) {
                    uVar14 = (ulonglong)bVar6;
                  }
                  uVar17 = 0x32 - (ulonglong)bVar6;
                  do {
                    uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar17 & 0xffffffff];
                    if (((&DAT_14c841d90)[uVar17 & 0xffffffff] & 0xf) == 0) goto LAB_140325d9d;
                    lVar4 = uVar14 + 1 + uVar17;
                    uVar17 = uVar17 - 1;
                  } while (lVar4 != 0x33);
                }
                uVar5 = 0x10;
                if (0x10 < DAT_14c841df8) {
                  uVar5 = (ulonglong)DAT_14c841df8;
                }
                uVar5 = -uVar5 & (uVar9 + uVar5) - 1;
              }
            }
            else {
              uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,0);
              iVar10 = (int)param_1[5];
            }
          }
LAB_140325d9d:
          iVar3 = (int)(uVar5 >> 2);
          iVar8 = -0x20;
          if ((int)uVar18 <= iVar3) {
            iVar8 = iVar3 << 5;
          }
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar8;
        FUN_1446efbd8(plVar12,iVar10);
        iVar8 = (int)param_1[5] + 1;
      }
      iVar10 = iVar8 + 0x1f;
      if (-1 < iVar8) {
        iVar10 = iVar8;
      }
      *(int *)(param_1 + 5) = iVar8;
      if (iVar8 % 0x20 != 0) {
        plVar13 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar13 = plVar12;
        }
        bVar6 = -(char)(iVar8 % 0x20);
        *(uint *)((longlong)plVar13 + (longlong)(iVar10 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar13 + (longlong)(iVar10 >> 5) * 4) << (bVar6 & 0x1f)) >>
             (bVar6 & 0x1f);
      }
    }
    lVar4 = (longlong)iVar15;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar12 = (longlong *)param_1[4];
    }
    bVar6 = (byte)iVar7 & 0x1f;
    puVar1 = (uint *)((longlong)plVar12 + (longlong)(iVar16 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar6 | 0xfffffffeU >> 0x20 - bVar6);
  }
  else {
    iVar15 = (int)param_1[6];
    lVar4 = (longlong)iVar15;
    iVar7 = *(int *)(*param_1 + 4 + lVar4 * 0x10);
    *(int *)(param_1 + 6) = iVar7;
    iVar10 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar10;
    if (iVar10 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar7 * 0x10) = 0xffffffff;
    }
  }
  plVar12 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar12 = (longlong *)param_1[4];
  }
  iVar7 = iVar15 + 0x1f;
  if (-1 < iVar15) {
    iVar7 = iVar15;
  }
  puVar1 = (uint *)((longlong)plVar12 + (longlong)(iVar7 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar15 & 0x1f);
  *param_2 = iVar15;
  *(longlong *)(param_2 + 2) = lVar4 * 0x10 + *param_1;
  return param_2;
}



// FUNCTION 140325e72 FUN_140325e72 body=49 status=ok
// SIG undefined FUN_140325e72(void)

longlong FUN_140325e72(void)

{
  if (DAT_14cb5e0f0 == 0) {
    FUN_140f50038(&DAT_14cb5e0f0,&PTR_s__Script_GbxGame_14b149480);
  }
  return DAT_14cb5e0f0;
}



// FUNCTION 140325ea4 FUN_140325ea4 body=940 status=ok
// SIG undefined FUN_140325ea4(void)

void FUN_140325ea4(longlong *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  byte bVar6;
  int iVar7;
  longlong *plVar8;
  ulonglong uVar9;
  undefined4 *puVar10;
  ulonglong uVar11;
  uint uVar12;
  longlong *plVar13;
  uint uVar14;
  ulonglong uVar15;
  undefined4 uVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  
  uVar18 = *(uint *)(param_1 + 1);
  uVar14 = param_2 - uVar18;
  if (uVar14 != 0 && (int)uVar18 <= (int)param_2) {
    uVar5 = (ulonglong)param_2;
    if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar5);
    }
    iVar17 = *(int *)((longlong)param_1 + 0xc);
    uVar12 = uVar18;
    if (iVar17 < (int)param_2) {
      FUN_14474875a(param_1);
      uVar12 = *(uint *)(param_1 + 1);
      iVar17 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = uVar12 + uVar14;
    if (iVar17 - uVar12 < uVar14) {
      FUN_1446efaca(param_1);
    }
    if ((int)uVar12 < (int)param_2) {
      lVar1 = *param_1;
      iVar17 = *(int *)((longlong)param_1 + 0x34);
      puVar10 = (undefined4 *)(uVar5 * 0x10 + lVar1 + -0xc);
      do {
        iVar2 = (int)uVar5;
        if (iVar17 != 0) {
          *(int *)(lVar1 + (longlong)(int)param_1[6] * 0x10) = iVar2 + -1;
        }
        puVar10[-1] = 0xffffffff;
        if (*(int *)((longlong)param_1 + 0x34) < 1) {
          uVar16 = 0xffffffff;
        }
        else {
          uVar16 = (undefined4)param_1[6];
        }
        uVar5 = uVar5 - 1;
        *puVar10 = uVar16;
        *(int *)(param_1 + 6) = iVar2 + -1;
        iVar17 = *(int *)((longlong)param_1 + 0x34) + 1;
        *(int *)((longlong)param_1 + 0x34) = iVar17;
        puVar10 = puVar10 + -4;
      } while ((longlong)(int)uVar12 < (longlong)uVar5);
    }
    if (uVar18 == 0) {
      *(uint *)(param_1 + 5) = uVar14;
      if (param_2 != 0) {
        plVar13 = param_1 + 2;
        uVar18 = uVar14 + 0x1f >> 5;
        if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU >> 5 < uVar18) {
          FUN_14499171c(plVar13,0,uVar18,4);
          *(uint *)((longlong)param_1 + 0x2c) = uVar14 + 0x1f & 0xffffffe0;
        }
        plVar8 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar8 = plVar13;
        }
        if (uVar14 < 0x101) {
          uVar18 = uVar18 + (uVar18 == 0);
        }
        memset(plVar8,0,(ulonglong)(uVar18 << 2));
        iVar17 = (int)param_1[5];
        iVar2 = iVar17 + 0x1f;
        if (-1 < iVar17) {
          iVar2 = iVar17;
        }
        if (iVar17 % 0x20 != 0) {
          if ((longlong *)param_1[4] != (longlong *)0x0) {
            plVar13 = (longlong *)param_1[4];
          }
          bVar6 = -(char)(iVar17 % 0x20);
          *(uint *)((longlong)plVar13 + (longlong)(iVar2 >> 5) * 4) =
               (uint)(*(int *)((longlong)plVar13 + (longlong)(iVar2 >> 5) * 4) << (bVar6 & 0x1f)) >>
               (bVar6 & 0x1f);
        }
      }
    }
    else if (-1 < (int)uVar14) {
      plVar13 = param_1 + 2;
      iVar17 = (int)param_1[5];
      if (param_2 != uVar18) {
        if (iVar17 == 0) {
          iVar2 = -1;
        }
        else {
          iVar2 = iVar17 + 0x1e;
          if (-1 < iVar17 + -1) {
            iVar2 = iVar17 + -1;
          }
          iVar2 = iVar2 >> 5;
        }
        iVar19 = iVar17 + uVar14;
        iVar7 = iVar17 + uVar14 + -1;
        iVar4 = iVar17 + uVar14 + 0x1e;
        if (-1 < iVar7) {
          iVar4 = iVar7;
        }
        if (iVar4 >> 5 == iVar2) {
          *(int *)(param_1 + 5) = iVar19;
        }
        else {
          if (*(int *)((longlong)param_1 + 0x2c) < iVar19) {
            iVar2 = iVar17;
            if (iVar19 + 0x1fU < 0xa0) {
              iVar19 = 0x80;
            }
            else {
              uVar18 = iVar19 + 0x1fU >> 5;
              if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
                uVar12 = 4;
                if (4 < uVar18) {
                  uVar12 = uVar18;
                }
              }
              else {
                uVar12 = uVar18 + (uVar18 * 3 >> 3) + 0x10;
              }
              uVar5 = (ulonglong)(uVar12 * 4);
              if (DAT_14c872d28 != (longlong *)0x0) {
                if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                  uVar3 = (uint)(uVar5 + 0xf);
                  if (uVar12 < 0x1ffd) {
                    uVar5 = (ulonglong)
                            (ushort)(&DAT_14c841d90)
                                    [0x32 - (byte)(&DAT_14c841e00)[uVar5 + 0xf >> 4]];
                  }
                  else {
                    uVar9 = (ulonglong)(uVar3 & 0xfffffff0);
                    if (uVar9 < 0x7ff1) {
                      bVar6 = (&DAT_14c841e00)[uVar3 >> 4];
                      uVar11 = 0x32;
                      if (0x32 < bVar6) {
                        uVar11 = (ulonglong)bVar6;
                      }
                      uVar15 = 0x32 - (ulonglong)bVar6;
                      do {
                        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar15 & 0xffffffff];
                        if (((&DAT_14c841d90)[uVar15 & 0xffffffff] & 0xf) == 0) goto LAB_140326142;
                        lVar1 = uVar11 + 1 + uVar15;
                        uVar15 = uVar15 - 1;
                      } while (lVar1 != 0x33);
                    }
                    uVar5 = 0x10;
                    if (0x10 < DAT_14c841df8) {
                      uVar5 = (ulonglong)DAT_14c841df8;
                    }
                    uVar5 = -uVar5 & (uVar9 + uVar5) - 1;
                  }
                }
                else {
                  uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,0);
                  iVar2 = (int)param_1[5];
                }
              }
LAB_140326142:
              iVar4 = (int)(uVar5 >> 2);
              iVar19 = -0x20;
              if ((int)uVar18 <= iVar4) {
                iVar19 = iVar4 << 5;
              }
            }
            *(int *)((longlong)param_1 + 0x2c) = iVar19;
            FUN_1446efbd8(plVar13,iVar2);
            iVar19 = (int)param_1[5] + uVar14;
          }
          iVar2 = iVar19 + 0x1f;
          if (-1 < iVar19) {
            iVar2 = iVar19;
          }
          *(int *)(param_1 + 5) = iVar19;
          if (iVar19 % 0x20 != 0) {
            plVar8 = (longlong *)param_1[4];
            if ((longlong *)param_1[4] == (longlong *)0x0) {
              plVar8 = plVar13;
            }
            bVar6 = -(char)(iVar19 % 0x20);
            *(uint *)((longlong)plVar8 + (longlong)(iVar2 >> 5) * 4) =
                 (uint)(*(int *)((longlong)plVar8 + (longlong)(iVar2 >> 5) * 4) << (bVar6 & 0x1f))
                 >> (bVar6 & 0x1f);
          }
        }
      }
      FUN_1447c6044(plVar13,iVar17,uVar14,0);
      return;
    }
  }
  return;
}



// FUNCTION 140326250 FUN_140326250 body=122 status=ok
// SIG undefined FUN_140326250(void)

undefined8 FUN_140326250(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar2 = *param_2;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 +
                    ((longlong)((int)((ulonglong)lVar2 >> 0x20) * 0x17 + (int)lVar2) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x10) == lVar2) {
          FUN_140646052();
          return 1;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x10 + *param_1 + 8);
      } while (iVar1 != -1);
    }
  }
  return 0;
}



// FUNCTION 1403262ca FUN_1403262ca body=225 status=ok
// SIG undefined FUN_1403262ca(void)

void FUN_1403262ca(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 auStack_78 [44];
  int local_4c;
  longlong local_48;
  int *local_40;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((((char)(*(longlong **)(param_1 + 0x18))[9] != '\0') || (**(longlong **)(param_1 + 0x18) == 0)
      ) && (lVar1 = *(longlong *)(param_1 + 0x10),
           *(int *)(lVar1 + 8) - *(int *)(lVar1 + 0x34) != *(int *)(*(longlong *)(param_1 + 8) + 8))
     ) {
    FUN_14010afec(lVar1,0);
    local_4c = 0;
    plVar2 = *(longlong **)(param_1 + 8);
    if (0 < (int)plVar2[1]) {
      do {
        if ((*(int *)(*plVar2 + (longlong)local_4c * 0x38) != -1) ||
           (**(longlong **)(param_1 + 0x18) != 0)) {
          local_48 = *plVar2 + (longlong)local_4c * 0x38;
          local_40 = &local_4c;
          FUN_140263e2a(*(undefined8 *)(param_1 + 0x10),local_34,&local_48,0);
          plVar2 = *(longlong **)(param_1 + 8);
        }
        local_4c = local_4c + 1;
      } while (local_4c < (int)plVar2[1]);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403263ac FUN_1403263ac body=61 status=ok
// SIG undefined FUN_1403263ac(void)

void FUN_1403263ac(longlong param_1,longlong param_2)

{
  if ((*(byte *)(param_2 + 0x130) & 1) != 0) {
    FUN_140328e08(param_1,param_2,0);
    if (*(longlong *)(param_1 + 0x20) != 0) {
      FUN_140326680(*(longlong *)(param_1 + 0x20),param_1 + 0x18,1);
      return;
    }
  }
  return;
}



// FUNCTION 1403263ea FUN_1403263ea body=662 status=ok
// SIG undefined FUN_1403263ea(void)

void FUN_1403263ea(longlong *param_1)

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
  int iVar12;
  longlong lVar13;
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
    if ((int)uVar7 < 1) goto LAB_14032644e;
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
LAB_14032644e:
  iVar14 = (int)param_1[5];
  if (iVar14 == 0) {
    uVar3 = 0;
    uVar11 = 1;
    iVar4 = 0;
    iVar12 = 0;
  }
  else {
    puVar10 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar10 = (uint *)(param_1 + 2);
    }
    uVar7 = *puVar10;
    if (uVar7 == 0) {
      iVar12 = iVar14 + 0x1e;
      if (-1 < iVar14 + -1) {
        iVar12 = iVar14 + -1;
      }
      uVar3 = 0;
      uVar11 = (ulonglong)(uint)(iVar12 >> 5);
      if (iVar12 >> 5 < 1) {
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
    iVar12 = (iVar4 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    if (iVar14 <= iVar12) {
      iVar12 = iVar14;
    }
  }
  if (iVar12 < iVar14) {
    uVar7 = 0xffffffff;
    do {
      lVar6 = *param_1;
      lVar13 = (longlong)iVar12 * 0x10;
      uVar15 = (longlong)
               ((int)((ulonglong)*(undefined8 *)(lVar6 + lVar13) >> 0x20) * 0x17 +
               (int)*(undefined8 *)(lVar6 + lVar13)) & (longlong)(int)param_1[9] - 1U;
      iVar14 = (int)uVar15;
      *(int *)(lVar6 + 0xc + lVar13) = iVar14;
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(undefined4 *)(lVar6 + 8 + lVar13) =
           *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar15) * 4);
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(int *)((longlong)plVar5 + ((longlong)iVar14 & (longlong)(int)param_1[9] - 1U) * 4) = iVar12;
      uVar7 = ~(uint)uVar11 & uVar7;
      puVar10 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar10 = (uint *)(param_1 + 2);
      }
      iVar14 = (int)param_1[5];
      iVar12 = (int)uVar3;
      lVar6 = (longlong)iVar12;
      uVar2 = puVar10[lVar6] & uVar7;
      if (uVar2 == 0) {
        iVar8 = iVar14 + 0x1e;
        if (-1 < iVar14 + -1) {
          iVar8 = iVar14 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar9 = iVar8;
        if (iVar8 < iVar12) {
          iVar9 = iVar12;
        }
        if (iVar8 <= iVar12) {
          return;
        }
        lVar13 = 0;
        while( true ) {
          iVar4 = iVar4 + 0x20;
          uVar2 = puVar10[lVar6 + lVar13 + 1];
          if (uVar2 != 0) break;
          lVar13 = lVar13 + 1;
          if (iVar9 - lVar6 == lVar13) {
            return;
          }
        }
        uVar3 = (ulonglong)(iVar12 + (int)lVar13 + 1);
        uVar7 = 0xffffffff;
      }
      uVar11 = (ulonglong)(-uVar2 & uVar2);
      uVar15 = uVar11 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar15 != 0) {
        for (; uVar15 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar12 = (iVar4 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    } while (iVar12 < iVar14);
  }
  return;
}



// FUNCTION 140326680 FUN_140326680 body=165 status=ok
// SIG undefined FUN_140326680(void)

void FUN_140326680(longlong param_1,ulonglong *param_2,char param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  byte bVar3;
  longlong lVar4;
  
  uVar1 = *param_2;
  bVar3 = 0;
  if (param_3 != '\0') {
    bVar3 = ~(byte)uVar1 << 7;
  }
  *(byte *)(param_1 + 0xf1) = ((byte)uVar1 & 1) << 6 | *(byte *)(param_1 + 0xf1) & 0x3f | bVar3;
  if ((uVar1 & 2) != 0) {
    FUN_140327322(param_1);
  }
  if ((longlong)*(int *)(param_1 + 0x60) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x58);
    lVar4 = (longlong)*(int *)(param_1 + 0x60) * 0x78;
    do {
      FUN_140326f7a(lVar2,param_2);
      lVar2 = lVar2 + 0x78;
      lVar4 = lVar4 + -0x78;
    } while (lVar4 != 0);
  }
  *(byte *)(param_1 + 0xf1) = *(byte *)(param_1 + 0xf1) & 0x7f;
  if ((uVar1 & 2) != 0) {
    return;
  }
  FUN_140327036(param_1);
  return;
}



// FUNCTION 140326f7a FUN_140326f7a body=93 status=ok
// SIG undefined FUN_140326f7a(void)

void FUN_140326f7a(longlong param_1,ulonglong *param_2)

{
  byte bVar1;
  int iVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  
  uVar3 = *param_2 >> (*(byte *)(param_1 + 0x18) & 0x3f) & *(ulonglong *)(param_1 + 0x10);
  bVar1 = (byte)uVar3 & 1;
  uVar3 = uVar3 >> 1;
  iVar2 = (int)uVar3;
  uVar4 = FUN_140326fd8(param_1,uVar3 & 0xffffffff);
  if ((*(byte *)(param_1 + 0x60) == bVar1) && (*(int *)(param_1 + 100) == iVar2)) {
    return;
  }
  *(byte *)(param_1 + 0x60) = bVar1;
  *(int *)(param_1 + 100) = iVar2;
  *(undefined4 *)(param_1 + 0x68) = uVar4;
  FUN_140327094(param_1 + 0x40,param_1 + 0x60);
  return;
}



// FUNCTION 140326fd8 FUN_140326fd8 body=93 status=ok
// SIG undefined FUN_140326fd8(void)

undefined4 FUN_140326fd8(longlong param_1,uint param_2)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)(param_1 + 8);
  if (cVar1 == '\x02') {
    if ((int)param_2 < 0) {
      return 0;
    }
    if (DAT_14cb8c940 <= (int)param_2) {
      return 0;
    }
    plVar2 = &DAT_14cb8c938;
  }
  else if (cVar1 == '\x01') {
    if ((int)param_2 < 0) {
      return 0;
    }
    if (DAT_14cb8c930 <= (int)param_2) {
      return 0;
    }
    plVar2 = &DAT_14cb8c928;
  }
  else {
    if (cVar1 != '\0') {
      return 0;
    }
    if ((int)param_2 < 0) {
      return 0;
    }
    if (DAT_14cb8c920 <= (int)param_2) {
      return 0;
    }
    plVar2 = &DAT_14cb8c918;
  }
  return *(undefined4 *)(*plVar2 + (ulonglong)param_2 * 4);
}



// FUNCTION 140327036 FUN_140327036 body=93 status=ok
// SIG undefined FUN_140327036(void)

void FUN_140327036(longlong param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 0xf1);
  if ((bVar1 & 6) == 2) {
    if ((bVar1 & 0x10) == 0) {
      if (*(longlong **)(param_1 + 0x38) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0x38) + 0x10))();
      }
      FUN_140fa5566(param_1);
      *(byte *)(param_1 + 0xf1) = *(byte *)(param_1 + 0xf1) & 0xfd;
      FUN_14122f7cc(param_1);
      FUN_140c5f474(param_1);
      return;
    }
    *(byte *)(param_1 + 0xf1) = bVar1 | 0x20;
  }
  return;
}



// FUNCTION 140327094 FUN_140327094 body=162 status=ok
// SIG undefined FUN_140327094(void)

void FUN_140327094(longlong *param_1,undefined8 param_2)

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
        goto LAB_140327121;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_140327121:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 140327136 FUN_140327136 body=103 status=ok
// SIG undefined FUN_140327136(void)

ulonglong FUN_140327136(longlong param_1)

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
LAB_140327180:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_140327180;
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



// FUNCTION 1403271b6 FUN_1403271b6 body=234 status=ok
// SIG undefined FUN_1403271b6(void)

void FUN_1403271b6(longlong param_1)

{
  float fVar1;
  char cVar2;
  byte bVar3;
  
  if ((*(byte *)(param_1 + 0x78) & 1) == 0) {
    return;
  }
  if ((*(char *)(param_1 + 0x8c) == *(char *)(param_1 + 0x80)) &&
     (*(int *)(param_1 + 0x90) == *(int *)(param_1 + 0x84))) {
    return;
  }
  fVar1 = *(float *)(param_1 + 0x94);
  if (*(char *)(*(longlong *)(param_1 + 0x18) + 0xf1) < '\0') {
    FUN_1403272a0(param_1,fVar1);
  }
  if (*(longlong *)(param_1 + 0x60) == 0) {
    FUN_1403272a0(param_1,fVar1);
  }
  else if (((*(float *)(param_1 + 0x74) != fVar1) || (NAN(*(float *)(param_1 + 0x74)) || NAN(fVar1))
           ) && (*(float *)(param_1 + 0x74) = fVar1, (*(byte *)(param_1 + 0x78) & 5) == 1)) {
    if ((*(float *)(param_1 + 0x70) != fVar1) || (NAN(*(float *)(param_1 + 0x70)) || NAN(fVar1))) {
      FUN_14032804c(param_1);
    }
  }
  cVar2 = *(char *)(param_1 + 0x8c);
  if (cVar2 != *(char *)(param_1 + 0x80)) {
    bVar3 = *(byte *)(param_1 + 0x78);
    if (cVar2 == '\0') {
      if ((bVar3 & 0x20) == 0) goto LAB_140327265;
      bVar3 = bVar3 & 0xdf;
    }
    else {
      if ((bVar3 & 0x20) != 0) goto LAB_140327265;
      bVar3 = bVar3 | 0x20;
    }
    *(byte *)(param_1 + 0x78) = bVar3;
    FUN_140435058(param_1);
  }
LAB_140327265:
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_1 + 0x94);
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_1 + 0x8c);
  return;
}



// FUNCTION 1403272a0 FUN_1403272a0 body=130 status=ok
// SIG undefined FUN_1403272a0(void)

void FUN_1403272a0(longlong param_1,float param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((*(float *)(param_1 + 0x70) != param_2) || (NAN(*(float *)(param_1 + 0x70)) || NAN(param_2)))
  {
    *(float *)(param_1 + 0x70) = param_2;
    FUN_140434c6e(param_1);
    iVar1 = *(int *)(param_1 + 0x50);
    if ((longlong)iVar1 != 0) {
      lVar2 = *(longlong *)(param_1 + 0x48);
      lVar4 = 0;
      do {
        plVar3 = *(longlong **)(lVar2 + lVar4);
        (**(code **)(*plVar3 + 8))(plVar3,*(undefined4 *)(param_1 + 0x70));
        lVar4 = lVar4 + 0x10;
      } while ((longlong)iVar1 * 0x10 != lVar4);
    }
  }
  *(float *)(param_1 + 0x74) = *(float *)(param_1 + 0x70);
  if (((*(byte *)(param_1 + 0x78) & 1) != 0) && (NAN(*(float *)(param_1 + 0x70)))) {
    return;
  }
  FUN_140434fde(param_1);
  return;
}



// FUNCTION 140327322 FUN_140327322 body=107 status=ok
// SIG undefined FUN_140327322(void)

void FUN_140327322(longlong param_1)

{
  byte bVar1;
  longlong lVar2;
  
  bVar1 = *(byte *)(param_1 + 0xf1);
  if (((bVar1 & 4) == 0) && (*(byte *)(param_1 + 0xf1) = bVar1 & 0xdb, (bVar1 & 2) == 0)) {
    FUN_140def486(param_1);
    *(byte *)(param_1 + 0xf1) = *(byte *)(param_1 + 0xf1) | 2;
    lVar2 = FUN_140fa55bc(param_1);
    if (lVar2 != 0) {
      FUN_140f18c76(param_1,lVar2);
    }
    if (*(longlong **)(param_1 + 0x38) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_1 + 0x38) + 8))();
    }
    FUN_140c5f474(param_1);
    return;
  }
  return;
}



// FUNCTION 14032738e FUN_14032738e body=231 status=ok
// SIG undefined FUN_14032738e(void)

void FUN_14032738e(longlong param_1,undefined8 param_2,longlong param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_88 [40];
  longlong local_60;
  uint *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar4 = *(longlong **)(param_1 + 8);
  if (0 < (int)plVar4[1]) {
    lVar6 = 0;
    lVar5 = 0;
    do {
      lVar3 = *plVar4;
      if (*(int *)(lVar3 + lVar6) != -1) {
        local_58 = (uint *)(lVar3 + lVar6) + 1;
        local_60 = lVar3 + lVar6;
        FUN_140263e2a(param_2,local_4c,&local_60,0);
        uVar1 = *(uint *)(lVar3 + lVar6);
        iVar2 = *(int *)(param_3 + 0x48);
        *(uint *)(param_3 + 0x48) = iVar2 + 1U;
        if (*(uint *)(param_3 + 0x4c) < iVar2 + 1U) {
          FUN_14593fc44(param_3,iVar2);
        }
        lVar3 = *(longlong *)(param_3 + 0x40);
        if (*(longlong *)(param_3 + 0x40) == 0) {
          lVar3 = param_3;
        }
        *(ulonglong *)(lVar3 + (longlong)iVar2 * 8) = ((ulonglong)uVar1 << 0x20) + lVar5;
        plVar4 = *(longlong **)(param_1 + 8);
      }
      lVar5 = lVar5 + 1;
      lVar6 = lVar6 + 0x38;
    } while (lVar5 < (int)plVar4[1]);
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140327476 FUN_140327476 body=496 status=ok
// SIG undefined FUN_140327476(void)

void FUN_140327476(longlong param_1,undefined4 *param_2)

{
  longlong *plVar1;
  ulonglong *puVar2;
  undefined4 *puVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar1 = (longlong *)**(longlong **)(param_1 + 0x18);
  puVar3 = *(undefined4 **)plVar1[1];
  if ((undefined4 *)((undefined8 *)plVar1[1])[1] < puVar3 + 1) {
    if ((*(byte *)((longlong)plVar1 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar1 + 0x170))(plVar1,param_2,4);
    }
    else {
      FUN_14572512c(plVar1,param_2);
    }
  }
  else {
    *param_2 = *puVar3;
    *(longlong *)plVar1[1] = *(longlong *)plVar1[1] + 4;
  }
  puVar3 = *(undefined4 **)plVar1[1];
  if ((undefined4 *)((undefined8 *)plVar1[1])[1] < puVar3 + 1) {
    if ((*(byte *)((longlong)plVar1 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar1 + 0x170))(plVar1,param_2 + 1,4);
    }
    else {
      FUN_14572512c(plVar1);
    }
  }
  else {
    param_2[1] = *puVar3;
    *(longlong *)plVar1[1] = *(longlong *)plVar1[1] + 4;
  }
  local_34 = param_2[0xe];
  puVar2 = (ulonglong *)plVar1[1];
  puVar3 = (undefined4 *)*puVar2 + 1;
  if ((undefined4 *)puVar2[1] < puVar3) {
    if ((*(byte *)((longlong)plVar1 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar1 + 0x170))(plVar1,&local_34,4);
    }
    else {
      FUN_14572512c(plVar1,&local_34);
    }
  }
  else {
    local_34 = *(undefined4 *)*puVar2;
    *puVar2 = (ulonglong)puVar3;
  }
  puVar3 = *(undefined4 **)plVar1[1];
  if ((undefined4 *)((undefined8 *)plVar1[1])[1] < puVar3 + 1) {
    if ((*(byte *)((longlong)plVar1 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar1 + 0x170))(plVar1,param_2 + 2,4);
    }
    else {
      FUN_14572512c(plVar1);
    }
  }
  else {
    param_2[2] = *puVar3;
    *(longlong *)plVar1[1] = *(longlong *)plVar1[1] + 4;
  }
  if (0 < (int)param_2[0xe]) {
    lVar4 = 0;
    do {
      puVar3 = *(undefined4 **)(param_2 + 0xc);
      if (*(undefined4 **)(param_2 + 0xc) == (undefined4 *)0x0) {
        puVar3 = param_2 + 4;
      }
      local_38 = puVar3[lVar4];
      puVar2 = (ulonglong *)plVar1[1];
      if (puVar2[1] < *puVar2 + 4) {
        if ((*(byte *)((longlong)plVar1 + 0x2a) & 2) == 0) {
          (**(code **)(*plVar1 + 0x170))(plVar1,&local_38,4);
        }
        else {
          FUN_14572512c(plVar1,&local_38);
        }
      }
      else {
        *puVar2 = *puVar2 + 4;
      }
      lVar4 = lVar4 + 1;
    } while ((int)lVar4 < (int)param_2[0xe]);
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140327668 FUN_140327668 body=745 status=ok
// SIG undefined FUN_140327668(void)

bool FUN_140327668(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 *puVar4;
  bool bVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  longlong *plVar13;
  bool bVar14;
  
  lVar11 = *(longlong *)(param_1 + 0x10);
  iVar3 = *(int *)(lVar11 + 0x54);
  if (iVar3 != param_2) goto LAB_14032793d;
  iVar10 = *(int *)(lVar11 + 0x104);
  iVar9 = *(int *)(*(longlong *)(param_1 + 8) + 8);
  if ((iVar10 != iVar9 || iVar10 == -1) || (iVar9 = iVar10, *(int *)(lVar11 + 0x108) == -1)) {
    *(int *)(lVar11 + 0x104) = iVar9;
    lVar11 = (longlong)(int)(*(longlong **)(param_1 + 8))[1];
    if (lVar11 == 0) {
      iVar10 = 0;
    }
    else {
      lVar12 = 0;
      iVar10 = 0;
      do {
        iVar10 = iVar10 + (uint)(byte)(*(int *)(**(longlong **)(param_1 + 8) + lVar12) != -1 |
                                      *(byte *)(*(longlong *)(param_1 + 0x18) + 0x4d) ^ 1);
        lVar12 = lVar12 + 0x38;
      } while (lVar11 * 0x38 - lVar12 != 0);
    }
    *(int *)(*(longlong *)(param_1 + 0x10) + 0x108) = iVar10;
  }
  lVar11 = *(longlong *)(param_1 + 0x18);
  lVar12 = *(longlong *)(lVar11 + 0x18);
  if (lVar12 != 0) {
    plVar7 = *(longlong **)(lVar12 + 0x10);
    bVar5 = true;
    if (plVar7 == (longlong *)0x0) {
LAB_140327857:
      uVar8 = 0;
      plVar7 = (longlong *)0x0;
    }
    else {
      iVar10 = (int)plVar7[1];
      do {
        if (iVar10 == 0) goto LAB_140327857;
        LOCK();
        iVar9 = (int)plVar7[1];
        bVar14 = iVar10 == iVar9;
        if (bVar14) {
          *(int *)(plVar7 + 1) = iVar10 + 1;
          iVar9 = iVar10;
        }
        iVar10 = iVar9;
        UNLOCK();
      } while (!bVar14);
      uVar8 = *(undefined8 *)(lVar12 + 8);
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
      bVar5 = false;
    }
    puVar4 = *(undefined8 **)(*(longlong *)(param_1 + 0x18) + 0x10);
    *puVar4 = uVar8;
    plVar13 = (longlong *)puVar4[1];
    if (plVar7 == plVar13) {
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        plVar13 = plVar7 + 1;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)*plVar13 == 0) {
          (**(code **)*plVar7)(plVar7);
          LOCK();
          piVar2 = (int *)((longlong)plVar7 + 0xc);
          *piVar2 = *piVar2 + -1;
          iVar10 = *piVar2;
          UNLOCK();
          plVar13 = plVar7;
          goto joined_r0x0001403278a6;
        }
      }
    }
    else {
      puVar4[1] = plVar7;
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
          iVar10 = *piVar2;
          UNLOCK();
joined_r0x0001403278a6:
          if (iVar10 == 0) {
            (**(code **)(*plVar13 + 0x10))(plVar13);
          }
        }
      }
    }
    if (!bVar5) {
      LOCK();
      plVar13 = plVar7 + 1;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)*plVar13 == 0) {
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
    goto LAB_14032793d;
  }
  puVar6 = (undefined8 *)FUN_14001cc68(0x78,0x10);
  puVar6[1] = 0;
  puVar6[2] = 0;
  puVar6[3] = 0;
  *puVar6 = &PTR_FUN_14ab190a0;
  puVar6[8] = 0;
  *(undefined4 *)(puVar6 + 9) = 0;
  puVar6[4] = 0;
  puVar6[5] = 0;
  *(undefined8 *)((longlong)puVar6 + 0x4c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar6 + 0x54) = 0;
  puVar6[0xc] = 0;
  *(undefined4 *)(puVar6 + 0xd) = 0;
  *(undefined4 *)(puVar6 + 0xe) = 0xffffffff;
  puVar4 = *(undefined8 **)(lVar11 + 0x10);
  plVar7 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar7[1] = (longlong)&DAT_100000001;
  *plVar7 = (longlong)&PTR_FUN_14ab190c0;
  plVar7[2] = (longlong)puVar6;
  if (puVar6 == (undefined8 *)0x0) {
LAB_140327830:
    *puVar4 = puVar6;
    plVar13 = (longlong *)puVar4[1];
    if (plVar7 == plVar13) {
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        plVar13 = plVar7 + 1;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)*plVar13 == 0) {
          (**(code **)*plVar7)(plVar7);
          LOCK();
          piVar2 = (int *)((longlong)plVar7 + 0xc);
          *piVar2 = *piVar2 + -1;
          iVar10 = *piVar2;
          UNLOCK();
          plVar13 = plVar7;
          goto joined_r0x0001403278f5;
        }
      }
    }
    else {
      puVar4[1] = plVar7;
      if (plVar13 != (longlong *)0x0) goto LAB_140327914;
    }
  }
  else {
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
      puVar6[1] = puVar6;
      if ((longlong *)puVar6[2] != plVar7) {
        LOCK();
        *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
        UNLOCK();
        plVar13 = (longlong *)puVar6[2];
        if (plVar13 != (longlong *)0x0) {
          LOCK();
          piVar2 = (int *)((longlong)plVar13 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar13 + 0x10))();
          }
        }
        puVar6[2] = plVar7;
      }
      LOCK();
      plVar13 = plVar7 + 1;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)*plVar13 == 0) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar2 = (int *)((longlong)plVar7 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
      goto LAB_140327830;
    }
    puVar6[1] = puVar6;
    *puVar4 = puVar6;
    plVar13 = (longlong *)puVar4[1];
    if (plVar13 != (longlong *)0x0) {
      puVar4[1] = 0;
LAB_140327914:
      LOCK();
      plVar7 = plVar13 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*plVar13)(plVar13);
        LOCK();
        piVar2 = (int *)((longlong)plVar13 + 0xc);
        *piVar2 = *piVar2 + -1;
        iVar10 = *piVar2;
        UNLOCK();
joined_r0x0001403278f5:
        if (iVar10 == 0) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
        }
      }
    }
  }
  *(undefined4 *)(puVar6 + 0xe) = *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x54);
LAB_14032793d:
  return iVar3 != param_2;
}



// FUNCTION 140327952 FUN_140327952 body=723 status=ok
// SIG undefined FUN_140327952(void)

undefined8 FUN_140327952(longlong param_1,undefined4 *param_2)

{
  int *piVar1;
  uint *puVar2;
  longlong lVar3;
  undefined4 uVar4;
  longlong *plVar5;
  ulonglong *puVar6;
  int *piVar7;
  longlong *plVar8;
  undefined8 uVar9;
  undefined4 *puVar10;
  int iVar11;
  longlong *plVar12;
  int iVar13;
  undefined1 auStack_78 [40];
  uint local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x18) + 8);
  puVar10 = *(undefined4 **)plVar5[1];
  if ((undefined4 *)((undefined8 *)plVar5[1])[1] < puVar10 + 1) {
    if ((*(byte *)((longlong)plVar5 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar5 + 0x170))(plVar5,param_2,4);
    }
    else {
      FUN_14572512c(plVar5,param_2);
    }
  }
  else {
    *param_2 = *puVar10;
    *(longlong *)plVar5[1] = *(longlong *)plVar5[1] + 4;
  }
  puVar10 = *(undefined4 **)plVar5[1];
  if ((undefined4 *)((undefined8 *)plVar5[1])[1] < puVar10 + 1) {
    if ((*(byte *)((longlong)plVar5 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar5 + 0x170))(plVar5,param_2 + 1,4);
    }
    else {
      FUN_14572512c(plVar5);
    }
  }
  else {
    param_2[1] = *puVar10;
    *(longlong *)plVar5[1] = *(longlong *)plVar5[1] + 4;
  }
  local_4c = 0;
  puVar6 = (ulonglong *)plVar5[1];
  piVar1 = (int *)*puVar6 + 1;
  if ((int *)puVar6[1] < piVar1) {
    if ((*(byte *)((longlong)plVar5 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar5 + 0x170))(plVar5,&local_4c,4);
    }
    else {
      FUN_14572512c(plVar5,&local_4c);
    }
  }
  else {
    local_4c = *(int *)*puVar6;
    *puVar6 = (ulonglong)piVar1;
  }
  if (local_4c <= DAT_14c75f430) {
    piVar1 = param_2 + 2;
    piVar7 = *(int **)plVar5[1];
    if ((int *)((undefined8 *)plVar5[1])[1] < piVar7 + 1) {
      if ((*(byte *)((longlong)plVar5 + 0x2a) & 2) == 0) {
        (**(code **)(*plVar5 + 0x170))(plVar5,piVar1,4);
      }
      else {
        FUN_14572512c(plVar5,piVar1);
      }
    }
    else {
      *piVar1 = *piVar7;
      *(longlong *)plVar5[1] = *(longlong *)plVar5[1] + 4;
    }
    if (*piVar1 <= DAT_14c75f42c) {
      uVar9 = CONCAT71((uint7)(uint3)((uint)*piVar1 >> 8),1);
      if (0 < local_4c) {
        iVar13 = 0;
        do {
          local_50 = 0;
          puVar6 = (ulonglong *)plVar5[1];
          puVar2 = (uint *)*puVar6 + 1;
          if ((uint *)puVar6[1] < puVar2) {
            if ((*(byte *)((longlong)plVar5 + 0x2a) & 2) == 0) {
              (**(code **)(*plVar5 + 0x170))(plVar5,&local_50,4);
            }
            else {
              FUN_14572512c(plVar5,&local_50);
            }
          }
          else {
            local_50 = *(uint *)*puVar6;
            *puVar6 = (ulonglong)puVar2;
          }
          plVar8 = *(longlong **)(param_1 + 0x10);
          puVar10 = (undefined4 *)(ulonglong)*(uint *)(plVar8 + 1);
          if (*(uint *)(plVar8 + 1) != *(uint *)((longlong)plVar8 + 0x34)) {
            puVar10 = (undefined4 *)(ulonglong)local_50;
            plVar12 = plVar8 + 7;
            if ((longlong *)plVar8[8] != (longlong *)0x0) {
              plVar12 = (longlong *)plVar8[8];
            }
            iVar11 = *(int *)((longlong)plVar12 + (ulonglong)((int)plVar8[9] - 1U & local_50) * 4);
            if (iVar11 != -1) {
              do {
                lVar3 = *plVar8 + (longlong)iVar11 * 0x10;
                if (*(uint *)(*plVar8 + (longlong)iVar11 * 0x10) == local_50) {
                  puVar10 = (undefined4 *)(ulonglong)CONCAT31((int3)(local_50 >> 8),lVar3 == 0);
                  if ((undefined4 *)(lVar3 + 4) != (undefined4 *)0x0 && lVar3 != 0) {
                    uVar4 = *(undefined4 *)(lVar3 + 4);
                    iVar11 = param_2[0xe];
                    param_2[0xe] = iVar11 + 1U;
                    if ((uint)param_2[0xf] < iVar11 + 1U) {
                      FUN_1400cc390(param_2 + 4,iVar11);
                    }
                    puVar10 = *(undefined4 **)(param_2 + 0xc);
                    if (*(undefined4 **)(param_2 + 0xc) == (undefined4 *)0x0) {
                      puVar10 = param_2 + 4;
                    }
                    puVar10[iVar11] = uVar4;
                  }
                  break;
                }
                iVar11 = *(int *)(lVar3 + 8);
              } while (iVar11 != -1);
            }
          }
          iVar13 = iVar13 + 1;
        } while (iVar13 < local_4c);
        uVar9 = CONCAT71((int7)((ulonglong)puVar10 >> 8),1);
      }
      goto LAB_140327bb3;
    }
  }
  FUN_14572541c(plVar5);
  uVar9 = 0;
LAB_140327bb3:
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9;
}



// FUNCTION 140327c26 FUN_140327c26 body=1060 status=ok
// SIG undefined FUN_140327c26(void)

void FUN_140327c26(longlong param_1,longlong *param_2,longlong *param_3,longlong param_4,
                  longlong param_5)

{
  ulonglong uVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  ulonglong uVar14;
  uint *puVar15;
  ulonglong uVar16;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  longlong *local_78;
  longlong *local_70;
  longlong *local_68;
  uint *local_60;
  uint *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar2 = *(longlong **)(param_1 + 8);
  iVar3 = (int)plVar2[1];
  iVar11 = 0;
  iVar9 = 0;
  if ((longlong)iVar3 != 0) {
    lVar13 = 0;
    iVar9 = 0;
    do {
      iVar9 = iVar9 + (uint)(byte)(*(int *)(*plVar2 + lVar13) != -1 |
                                  *(byte *)(*(longlong *)(param_1 + 0x18) + 0x4d) ^ 1);
      lVar13 = lVar13 + 0x38;
    } while ((longlong)iVar3 * 0x38 - lVar13 != 0);
  }
  if (param_3 != (longlong *)0x0) {
    iVar11 = (int)param_3[1] - *(int *)((longlong)param_3 + 0x34);
  }
  iVar11 = iVar11 - iVar9;
  local_80 = param_2;
  if (0 < iVar3) {
    local_78 = param_3 + 7;
    lVar13 = 0;
    do {
      iVar3 = *(int *)(*plVar2 + lVar13 * 0x38);
      if ((*(char *)(*(longlong *)(param_1 + 0x18) + 0x4d) != '\x01') || (iVar3 != -1)) {
        puVar15 = (uint *)(*plVar2 + lVar13 * 0x38);
        if (iVar3 == -1) {
          FUN_140705884(*(undefined8 *)(param_1 + 0x10),puVar15);
        }
        local_60 = puVar15;
        local_58 = puVar15 + 1;
        FUN_140263e2a(local_80,local_4c,&local_60,0);
        uVar12 = *puVar15;
        if ((param_3 != (longlong *)0x0) && ((int)param_3[1] != *(int *)((longlong)param_3 + 0x34)))
        {
          plVar2 = (longlong *)param_3[8];
          if ((longlong *)param_3[8] == (longlong *)0x0) {
            plVar2 = local_78;
          }
          iVar3 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_3[9] - 1U & uVar12) * 4);
          if (iVar3 != -1) {
            do {
              lVar10 = *param_3 + (longlong)iVar3 * 0x10;
              if (*(uint *)(*param_3 + (longlong)iVar3 * 0x10) == uVar12) {
                if ((uint *)(lVar10 + 4) != (uint *)0x0 && lVar10 != 0) {
                  if (*(uint *)(lVar10 + 4) != puVar15[1]) {
                    iVar3 = *(int *)(param_4 + 0x48);
                    *(uint *)(param_4 + 0x48) = iVar3 + 1U;
                    if (*(uint *)(param_4 + 0x4c) < iVar3 + 1U) {
                      FUN_14593fc44(param_4,iVar3);
                    }
                    lVar10 = *(longlong *)(param_4 + 0x40);
                    if (*(longlong *)(param_4 + 0x40) == 0) {
                      lVar10 = param_4;
                    }
                    *(ulonglong *)(lVar10 + (longlong)iVar3 * 8) =
                         ((ulonglong)uVar12 << 0x20) + lVar13;
                  }
                  goto LAB_140327d96;
                }
                break;
              }
              iVar3 = *(int *)(lVar10 + 8);
            } while (iVar3 != -1);
          }
        }
        iVar3 = *(int *)(param_4 + 0x48);
        *(uint *)(param_4 + 0x48) = iVar3 + 1U;
        if (*(uint *)(param_4 + 0x4c) < iVar3 + 1U) {
          FUN_14593fc44(param_4,iVar3);
        }
        lVar10 = *(longlong *)(param_4 + 0x40);
        if (*(longlong *)(param_4 + 0x40) == 0) {
          lVar10 = param_4;
        }
        *(ulonglong *)(lVar10 + (longlong)iVar3 * 8) = ((ulonglong)uVar12 << 0x20) + lVar13;
        iVar11 = iVar11 + 1;
      }
LAB_140327d96:
      lVar13 = lVar13 + 1;
      plVar2 = *(longlong **)(param_1 + 8);
    } while (lVar13 < (int)plVar2[1]);
  }
  if ((param_3 != (longlong *)0x0) && (0 < iVar11)) {
    puVar15 = (uint *)(param_3 + 2);
    iVar3 = (int)param_3[5];
    if (iVar3 == 0) {
      uVar16 = 1;
      uVar14 = 0;
      iVar9 = 0;
      iVar4 = 0;
    }
    else {
      puVar8 = (uint *)param_3[4];
      if ((uint *)param_3[4] == (uint *)0x0) {
        puVar8 = puVar15;
      }
      uVar12 = *puVar8;
      if (uVar12 == 0) {
        iVar9 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar9 = iVar3 + -1;
        }
        uVar14 = 0;
        uVar16 = (ulonglong)(uint)(iVar9 >> 5);
        if (iVar9 >> 5 < 1) {
          uVar16 = uVar14;
        }
        iVar9 = 0;
        do {
          if (uVar16 == uVar14) goto LAB_140328019;
          iVar9 = iVar9 + 0x20;
          uVar12 = puVar8[uVar14 + 1];
          uVar14 = uVar14 + 1;
        } while (uVar12 == 0);
      }
      else {
        uVar14 = 0;
        iVar9 = 0;
      }
      uVar16 = (ulonglong)(-uVar12 & uVar12);
      uVar1 = uVar16 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iVar4 = (iVar9 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
      if (iVar3 <= iVar4) {
        iVar4 = iVar3;
      }
    }
    if (iVar4 < iVar3) {
      local_68 = local_80 + 7;
      uVar12 = 0xffffffff;
      local_70 = param_3;
      do {
        lVar13 = *param_3;
        if ((int)local_80[1] != *(int *)((longlong)local_80 + 0x34)) {
          uVar5 = *(uint *)(lVar13 + (longlong)iVar4 * 0x10);
          plVar2 = (longlong *)local_80[8];
          if ((longlong *)local_80[8] == (longlong *)0x0) {
            plVar2 = local_68;
          }
          iVar6 = *(int *)((longlong)plVar2 + (ulonglong)((int)local_80[9] - 1U & uVar5) * 4);
          if (iVar6 != -1) {
            do {
              if (*(uint *)(*local_80 + (longlong)iVar6 * 0x10) == uVar5) goto LAB_140327f84;
              iVar6 = *(int *)((longlong)iVar6 * 0x10 + *local_80 + 8);
            } while (iVar6 != -1);
          }
        }
        iVar3 = *(int *)(param_5 + 0x28);
        *(uint *)(param_5 + 0x28) = iVar3 + 1U;
        if (*(uint *)(param_5 + 0x2c) < iVar3 + 1U) {
          local_78 = (longlong *)CONCAT44(local_78._4_4_,iVar9);
          FUN_1400cc390(param_5,iVar3);
          param_3 = local_70;
          iVar9 = (int)local_78;
        }
        lVar10 = *(longlong *)(param_5 + 0x20);
        if (*(longlong *)(param_5 + 0x20) == 0) {
          lVar10 = param_5;
        }
        *(undefined4 *)(lVar10 + (longlong)iVar3 * 4) =
             *(undefined4 *)(lVar13 + (longlong)iVar4 * 0x10);
        if (iVar11 < 2) break;
        iVar11 = iVar11 + -1;
        iVar3 = (int)param_3[5];
LAB_140327f84:
        uVar12 = uVar12 & ~(uint)uVar16;
        puVar8 = (uint *)param_3[4];
        if ((uint *)param_3[4] == (uint *)0x0) {
          puVar8 = puVar15;
        }
        iVar4 = (int)uVar14;
        lVar13 = (longlong)iVar4;
        uVar5 = puVar8[lVar13] & uVar12;
        if (uVar5 == 0) {
          iVar6 = iVar3 + 0x1e;
          if (-1 < iVar3 + -1) {
            iVar6 = iVar3 + -1;
          }
          iVar6 = iVar6 >> 5;
          iVar7 = iVar6;
          if (iVar6 < iVar4) {
            iVar7 = iVar4;
          }
          if (iVar6 <= iVar4) break;
          lVar10 = 0;
          while( true ) {
            iVar9 = iVar9 + 0x20;
            uVar5 = puVar8[lVar13 + lVar10 + 1];
            if (uVar5 != 0) break;
            lVar10 = lVar10 + 1;
            if (iVar7 - lVar13 == lVar10) goto LAB_140328019;
          }
          uVar14 = (ulonglong)(iVar4 + (int)lVar10 + 1);
          uVar12 = 0xffffffff;
        }
        uVar16 = (ulonglong)(-uVar5 & uVar5);
        uVar1 = uVar16 * 2 + 1;
        lVar13 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        iVar4 = (iVar9 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
      } while (iVar4 < iVar3);
    }
  }
LAB_140328019:
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14032804c FUN_14032804c body=620 status=ok
// SIG undefined FUN_14032804c(void)

void FUN_14032804c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  int local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*(byte *)(param_1 + 0x78) & 7) != 1) goto LAB_140328182;
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,4,0x10);
  local_38 = 4;
  plVar4 = *(longlong **)(param_1 + 0x10);
  if (plVar4 == (longlong *)0x0) {
LAB_1403281d5:
    *local_40 = &PTR_LAB_149e01f80;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    local_40[2] = lVar9;
    *local_40 = &PTR_FUN_14b430ad0;
    local_40[3] = 0;
    local_40[4] = 0;
    local_40[5] = FUN_140434b4c;
    *(undefined4 *)(local_40 + 6) = 0;
  }
  else {
    iVar8 = (int)plVar4[1];
    do {
      if (iVar8 == 0) goto LAB_1403281d5;
      LOCK();
      iVar6 = (int)plVar4[1];
      bVar10 = iVar8 == iVar6;
      if (bVar10) {
        *(int *)(plVar4 + 1) = iVar8 + 1;
        iVar6 = iVar8;
      }
      iVar8 = iVar6;
      UNLOCK();
    } while (!bVar10);
    uVar5 = *(undefined8 *)(param_1 + 8);
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *local_40 = &PTR_LAB_149e01f80;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    local_40[2] = lVar9;
    *local_40 = &PTR_FUN_14b430ad0;
    local_40[3] = uVar5;
    local_40[4] = plVar4;
    LOCK();
    *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
    UNLOCK();
    local_40[5] = FUN_140434b4c;
    *(undefined4 *)(local_40 + 6) = 0;
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
  FUN_1403282ba(uVar3,&local_30,&local_40);
  *(undefined8 *)(param_1 + 0x58) = local_30;
  if (local_38 == 0) {
LAB_140328170:
    if (local_40 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_40 != (undefined8 *)0x0) {
    (**(code **)*local_40)(local_40,0);
    FUN_1446efa72(&local_40,0,0,0x10);
    local_38 = 0;
    goto LAB_140328170;
  }
  *(byte *)(param_1 + 0x78) = *(byte *)(param_1 + 0x78) | 4;
LAB_140328182:
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1403282ba FUN_1403282ba body=580 status=ok
// SIG undefined FUN_1403282ba(void)

undefined8 * FUN_1403282ba(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auStack_68 [32];
  longlong *local_48;
  int local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*(byte *)(param_1 + 0xf1) & 4) != 0) {
    *param_2 = 0;
    goto LAB_140328401;
  }
  local_48 = (longlong *)0x0;
  local_40 = 0;
  FUN_140328a42(&local_48,param_3);
  *param_2 = 0;
  if (((local_40 == 0) || (local_48 == (longlong *)0x0)) ||
     (cVar5 = (**(code **)(*local_48 + 0x30))(), cVar5 == '\0')) {
    if (local_40 == 0) goto LAB_1403283de;
    if (local_48 != (longlong *)0x0) {
      (**(code **)*local_48)(local_48,0);
      FUN_1446efa72(&local_48,0,0,0x10);
      goto LAB_1403283d1;
    }
  }
  else {
    plVar1 = (longlong *)(param_1 + 0x98);
    if (*(int *)(param_1 + 0xac) < 1) {
      iVar2 = *(int *)(param_1 + 0xa0);
      iVar6 = *(int *)(param_1 + 0xa8) + -1;
      *(int *)(param_1 + 0xa8) = iVar6;
      if (iVar6 <= iVar2) {
        iVar6 = iVar2;
        if (0 < iVar2) {
          iVar8 = 0;
          do {
            if (((*(int *)(*plVar1 + 8 + (longlong)iVar8 * 0x10) == 0) ||
                (plVar4 = *(longlong **)(*plVar1 + (longlong)iVar8 * 0x10),
                plVar4 == (longlong *)0x0)) ||
               (cVar5 = (**(code **)(*plVar4 + 0x28))(), cVar5 != '\0')) {
              FUN_14005b288(plVar1,iVar8);
              FUN_14005b248(plVar1);
            }
            else {
              iVar8 = iVar8 + 1;
            }
            iVar6 = *(int *)(param_1 + 0xa0);
          } while (iVar8 < iVar6);
        }
        iVar8 = 2;
        if (2 < iVar6 * 2) {
          iVar8 = iVar6 * 2;
        }
        *(int *)(param_1 + 0xa8) = iVar8;
        if ((iVar8 < iVar2) && (*(int *)(param_1 + 0xa4) != iVar6)) {
          FUN_14045812c();
        }
      }
    }
    uVar7 = 0;
    if ((local_40 != 0) && (local_48 != (longlong *)0x0)) {
      (**(code **)(*local_48 + 0x38))(local_48,&local_38);
      uVar7 = local_38;
    }
    *param_2 = uVar7;
    iVar2 = *(int *)(param_1 + 0xa0);
    *(uint *)(param_1 + 0xa0) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0xa4) < iVar2 + 1U) {
      FUN_1447a71f6(plVar1,iVar2);
    }
    lVar3 = *plVar1;
    lVar9 = (longlong)iVar2 * 0x10;
    *(undefined8 *)(lVar3 + lVar9) = 0;
    *(undefined4 *)(lVar3 + 8 + lVar9) = 0;
    *(longlong **)(lVar3 + lVar9) = local_48;
    local_48 = (longlong *)0x0;
    *(int *)(lVar3 + 8 + lVar9) = local_40;
LAB_1403283d1:
    local_40 = 0;
LAB_1403283de:
    if (local_48 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((*(byte *)(param_1 + 0xf1) & 0x10) == 0) {
    *(byte *)(param_1 + 0xf1) = *(byte *)(param_1 + 0xf1) | 0x10;
    FUN_144958d50(param_1);
  }
LAB_140328401:
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14032851c FUN_14032851c body=125 status=ok
// SIG undefined FUN_14032851c(void)

void FUN_14032851c(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_68 [39];
  undefined1 local_41;
  undefined8 local_40;
  undefined8 *local_38;
  undefined1 *local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = param_2;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x38));
  local_30 = &local_41;
  local_41 = 3;
  local_38 = &local_40;
  FUN_14032859a(param_1 + 0x60,local_24,&local_38,0);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x38));
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14032859a FUN_14032859a body=335 status=ok
// SIG undefined FUN_14032859a(void)

undefined4 *
FUN_14032859a(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  ulonglong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140328782(param_1,local_50);
  puVar1 = (undefined1 *)param_3[1];
  uVar6 = *(ulonglong *)*param_3;
  *local_48 = uVar6;
  *(undefined1 *)(local_48 + 1) = *puVar1;
  *(undefined4 *)(local_48 + 2) = 0xffffffff;
  local_54 = local_50[0];
  uVar4 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar4 = uVar4 >> 0x10 ^ uVar4;
  local_68 = param_4;
  cVar3 = FUN_1403286ea(param_1,uVar4,local_48,&local_54);
  uVar2 = local_54;
  if (cVar3 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar5) {
      uVar6 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      *(uint *)((longlong)local_48 + 0x14) = uVar4;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_48 + 2) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_140328b74(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403286ea FUN_1403286ea body=152 status=ok
// SIG undefined FUN_1403286ea(void)

void FUN_1403286ea(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
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
          FUN_140549f86((int)lVar3,*param_4,1);
          *param_4 = iVar7;
          uVar5 = 1;
          break;
        }
        iVar7 = (int)plVar6[2];
        uVar5 = 0;
      } while (iVar7 != -1);
      goto LAB_14032870e;
    }
  }
  uVar5 = 0;
LAB_14032870e:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar5;
  }
  return;
}



// FUNCTION 140328782 FUN_140328782 body=703 status=ok
// SIG undefined FUN_140328782(void)

int * FUN_140328782(longlong *param_1,int *param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  longlong *plVar12;
  longlong *plVar13;
  ulonglong uVar14;
  int iVar15;
  int iVar16;
  ulonglong uVar17;
  uint uVar18;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar15 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar15 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar15) {
      FUN_14482b872(param_1,iVar15);
    }
    iVar8 = (int)param_1[5];
    if (iVar8 == 0) {
      iVar2 = -1;
    }
    else {
      iVar2 = iVar8 + 0x1e;
      if (-1 < iVar8 + -1) {
        iVar2 = iVar8 + -1;
      }
      iVar2 = iVar2 >> 5;
    }
    plVar12 = param_1 + 2;
    iVar9 = iVar8 + 1;
    iVar16 = iVar8 + 0x1f;
    if (-1 < iVar8) {
      iVar16 = iVar8;
    }
    if (iVar16 >> 5 == iVar2) {
      *(int *)(param_1 + 5) = iVar9;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar8) {
        iVar2 = iVar8;
        if (iVar8 + 0x20U < 0xa0) {
          iVar9 = 0x80;
        }
        else {
          uVar18 = iVar8 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar11 = 4;
            if (4 < uVar18) {
              uVar11 = uVar18;
            }
          }
          else {
            uVar11 = uVar18 + (uVar18 * 3 >> 3) + 0x10;
          }
          uVar6 = (ulonglong)(uVar11 * 4);
          if (DAT_14c872d28 != (longlong *)0x0) {
            if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
              uVar3 = (uint)(uVar6 + 0xf);
              if (uVar11 < 0x1ffd) {
                uVar6 = (ulonglong)
                        (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar6 + 0xf >> 4]];
              }
              else {
                uVar10 = (ulonglong)(uVar3 & 0xfffffff0);
                if (uVar10 < 0x7ff1) {
                  bVar7 = (&DAT_14c841e00)[uVar3 >> 4];
                  uVar14 = 0x32;
                  if (0x32 < bVar7) {
                    uVar14 = (ulonglong)bVar7;
                  }
                  uVar17 = 0x32 - (ulonglong)bVar7;
                  do {
                    uVar6 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar17 & 0xffffffff];
                    if (((&DAT_14c841d90)[uVar17 & 0xffffffff] & 0xf) == 0) goto LAB_14032896c;
                    lVar5 = uVar14 + 1 + uVar17;
                    uVar17 = uVar17 - 1;
                  } while (lVar5 != 0x33);
                }
                uVar6 = 0x10;
                if (0x10 < DAT_14c841df8) {
                  uVar6 = (ulonglong)DAT_14c841df8;
                }
                uVar6 = -uVar6 & (uVar10 + uVar6) - 1;
              }
            }
            else {
              uVar6 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar6,0);
              iVar2 = (int)param_1[5];
            }
          }
LAB_14032896c:
          iVar4 = (int)(uVar6 >> 2);
          iVar9 = -0x20;
          if ((int)uVar18 <= iVar4) {
            iVar9 = iVar4 << 5;
          }
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar9;
        FUN_1446efbd8(plVar12,iVar2);
        iVar9 = (int)param_1[5] + 1;
      }
      iVar2 = iVar9 + 0x1f;
      if (-1 < iVar9) {
        iVar2 = iVar9;
      }
      *(int *)(param_1 + 5) = iVar9;
      if (iVar9 % 0x20 != 0) {
        plVar13 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar13 = plVar12;
        }
        bVar7 = -(char)(iVar9 % 0x20);
        *(uint *)((longlong)plVar13 + (longlong)(iVar2 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar13 + (longlong)(iVar2 >> 5) * 4) << (bVar7 & 0x1f)) >>
             (bVar7 & 0x1f);
      }
    }
    lVar5 = (longlong)iVar15;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar12 = (longlong *)param_1[4];
    }
    bVar7 = (byte)iVar8 & 0x1f;
    puVar1 = (uint *)((longlong)plVar12 + (longlong)(iVar16 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar7 | 0xfffffffeU >> 0x20 - bVar7);
  }
  else {
    iVar15 = (int)param_1[6];
    lVar5 = (longlong)iVar15;
    iVar8 = *(int *)(*param_1 + 4 + lVar5 * 0x18);
    *(int *)(param_1 + 6) = iVar8;
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar8 * 0x18) = 0xffffffff;
    }
  }
  plVar12 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar12 = (longlong *)param_1[4];
  }
  iVar8 = iVar15 + 0x1f;
  if (-1 < iVar15) {
    iVar8 = iVar15;
  }
  puVar1 = (uint *)((longlong)plVar12 + (longlong)(iVar8 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar15 & 0x1f);
  *param_2 = iVar15;
  *(longlong *)(param_2 + 2) = lVar5 * 0x18 + *param_1;
  return param_2;
}



// FUNCTION 140328a42 FUN_140328a42 body=305 status=ok
// SIG undefined FUN_140328a42(void)

void FUN_140328a42(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 == param_1) goto LAB_140328adc;
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
LAB_140328ab5:
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
      goto LAB_140328ab5;
    }
  }
  *param_1 = (longlong)puVar2;
  *(int *)(param_1 + 1) = iVar3;
  if (local_28 != 0) {
    if (local_30 == (undefined8 *)0x0) goto LAB_140328adc;
    (**(code **)*local_30)(local_30,0);
    FUN_1446efa72(&local_30,0,0,0x10);
    local_28 = 0;
  }
  if (local_30 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_140328adc:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140328b74 FUN_140328b74 body=660 status=ok
// SIG undefined FUN_140328b74(void)

void FUN_140328b74(longlong *param_1)

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
    if ((int)uVar7 < 1) goto LAB_140328be7;
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
LAB_140328be7:
  iVar14 = (int)param_1[5];
  if (iVar14 == 0) {
    uVar3 = 0;
    uVar11 = 1;
    iVar4 = 0;
    iVar13 = 0;
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
      uVar15 = *(ulonglong *)(lVar6 + lVar12 * 0x18);
      uVar2 = ((uint)(uVar15 >> 0x14) & 0xffff ^ (uint)(uVar15 >> 4)) * -0x7a143595;
      uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
      uVar15 = (longlong)(int)(uVar2 >> 0x10 ^ uVar2) & (longlong)(int)param_1[9] - 1U;
      iVar14 = (int)uVar15;
      *(int *)(lVar6 + 0x14 + lVar12 * 0x18) = iVar14;
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(undefined4 *)(lVar6 + 0x10 + lVar12 * 0x18) =
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



// FUNCTION 140328e08 FUN_140328e08 body=5969 status=ok
// SIG undefined FUN_140328e08(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140328e08(longlong param_1,longlong param_2,char param_3)

{
  longlong *plVar1;
  byte bVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined8 uVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined ***pppuVar14;
  longlong lVar15;
  code *pcVar16;
  ulonglong uVar17;
  int iVar18;
  longlong *plVar19;
  int *piVar20;
  int iVar21;
  int *piVar22;
  longlong lVar23;
  int *piVar24;
  undefined8 *puVar25;
  bool bVar26;
  undefined1 auStack_1a8 [32];
  undefined2 *local_188;
  longlong *local_178;
  longlong local_170;
  longlong *local_168;
  longlong *local_160;
  longlong *local_158;
  undefined8 *local_150;
  longlong *local_148;
  longlong local_140;
  longlong *local_138;
  longlong *local_130;
  longlong local_128;
  int *local_120;
  ulonglong uStack_118;
  undefined8 *local_110;
  int local_108;
  undefined4 uStack_104;
  undefined2 local_100 [2];
  undefined4 local_fc;
  code *local_f8;
  longlong *local_f0;
  undefined ***local_e8;
  undefined **local_d8;
  longlong local_d0;
  longlong **local_b8;
  longlong *local_b0;
  undefined8 *local_a8;
  longlong *local_a0;
  byte local_78;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  if ((*(byte *)(param_1 + 0x30) & 1) != 0) goto LAB_14032a2d0;
  *(byte *)(param_1 + 0x30) = *(byte *)(param_1 + 0x30) | 1;
  lVar23 = *(longlong *)(param_1 + 0x10);
  if (lVar23 == 0) goto LAB_14032a2d0;
  plVar8 = (longlong *)FUN_14001cc68(0x108,0x10);
  plVar8[1] = (longlong)&DAT_100000001;
  *plVar8 = (longlong)&PTR_FUN_14b42fc40;
  plVar13 = plVar8 + 2;
  plVar8[3] = 0;
  plVar8[4] = 0;
  FUN_1409e1656(plVar13);
  plVar8[2] = (longlong)&PTR_FUN_14b42f840;
  plVar8[5] = 0;
  plVar8[6] = 0;
  plVar8[7] = 0;
  uVar3 = *(uint *)(lVar23 + 0xc);
  *(uint *)(plVar8 + 7) = uVar3;
  if ((int)uVar3 < DAT_14c9647dc) {
    lVar23 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
  }
  else {
    lVar23 = 0;
  }
  iVar7 = *(int *)(lVar23 + 0x10);
  if (*(int *)(lVar23 + 0x10) == 0) {
    LOCK();
    iVar7 = DAT_14c964868 + 1;
    UNLOCK();
    iVar21 = DAT_14c964868 + 1;
    bVar26 = DAT_14c964868 < 1000;
    DAT_14c964868 = iVar7;
    if (bVar26) {
      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                    L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                    iVar21);
    }
    LOCK();
    iVar7 = *(int *)(lVar23 + 0x10);
    bVar26 = iVar7 == 0;
    if (bVar26) {
      *(int *)(lVar23 + 0x10) = iVar21;
      iVar7 = 0;
    }
    UNLOCK();
    if (bVar26) {
      iVar7 = iVar21;
    }
  }
  *(int *)((longlong)plVar8 + 0x3c) = iVar7;
  plVar8[0x13] = 0;
  *(undefined4 *)(plVar8 + 0x14) = 0;
  plVar8[8] = 0;
  plVar8[9] = 0;
  plVar8[10] = 0;
  plVar8[0xb] = 0;
  plVar8[0xc] = 0;
  plVar8[0xd] = 0;
  plVar8[0xe] = 0;
  plVar8[0xf] = 0;
  plVar8[0x10] = 0;
  plVar8[0x11] = 0;
  *(undefined4 *)(plVar8 + 0x12) = 0;
  plVar8[0x15] = 0;
  plVar8[0x16] = 0;
  *(undefined4 *)(plVar8 + 0x17) = 2;
  *(undefined8 *)((longlong)plVar8 + 0xbc) = 0;
  *(undefined8 *)((longlong)plVar8 + 0xc4) = 0;
  *(undefined8 *)((longlong)plVar8 + 0xcc) = 0x200000000;
  *(undefined8 *)((longlong)plVar8 + 0xd4) = 0;
  *(undefined8 *)((longlong)plVar8 + 0xdc) = 0;
  *(undefined8 *)((longlong)plVar8 + 0xe4) = 0;
  *(undefined8 *)((longlong)plVar8 + 0xec) = 0;
  *(undefined8 *)((longlong)plVar8 + 0xf1) = 0;
  *(undefined8 *)((longlong)plVar8 + 0xf9) = 0;
  *(char *)((longlong)plVar8 + 0x101) = param_3 * '\b';
  if ((plVar13 == (longlong *)0x0) ||
     (((plVar8[3] != 0 && (plVar8[4] != 0)) && (0 < *(int *)(plVar8[4] + 8))))) {
    if (plVar8 == (longlong *)0x0) goto LAB_14032a3d6;
LAB_140328fb8:
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    *(longlong **)(param_1 + 0x20) = plVar13;
    plVar13 = *(longlong **)(param_1 + 0x28);
    if (plVar8 == plVar13) {
      LOCK();
      plVar13 = plVar8 + 1;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)*plVar13 == 0) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar20 = (int *)((longlong)plVar8 + 0xc);
        *piVar20 = *piVar20 + -1;
        UNLOCK();
        if (*piVar20 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
    }
    else {
      *(longlong **)(param_1 + 0x28) = plVar8;
      if (plVar13 != (longlong *)0x0) {
        bVar26 = false;
        goto LAB_140328fdc;
      }
    }
LAB_14032901f:
    LOCK();
    plVar13 = plVar8 + 1;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)*plVar13 == 0) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar20 = (int *)((longlong)plVar8 + 0xc);
      *piVar20 = *piVar20 + -1;
      UNLOCK();
      if (*piVar20 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
  else {
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
      plVar8[3] = (longlong)plVar13;
      if ((longlong *)plVar8[4] != plVar8) {
        LOCK();
        *(int *)((longlong)plVar8 + 0xc) = *(int *)((longlong)plVar8 + 0xc) + 1;
        UNLOCK();
        if ((longlong *)plVar8[4] != (longlong *)0x0) {
          plVar10 = plVar8 + 4;
          plVar12 = (longlong *)plVar8[4];
          goto LAB_14032a417;
        }
        plVar8[4] = (longlong)plVar8;
      }
LAB_140328fae:
      LOCK();
      plVar10 = plVar8 + 1;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)*plVar10 == 0) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar20 = (int *)((longlong)plVar8 + 0xc);
        *piVar20 = *piVar20 + -1;
        UNLOCK();
        if (*piVar20 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
      goto LAB_140328fb8;
    }
    _DAT_00000018 = 0x10;
    plVar10 = (longlong *)&DAT_00000020;
    plVar12 = _DAT_00000020;
    if (_DAT_00000020 != (longlong *)0x0) {
LAB_14032a417:
      LOCK();
      piVar20 = (int *)((longlong)plVar12 + 0xc);
      *piVar20 = *piVar20 + -1;
      UNLOCK();
      if (*piVar20 == 0) {
        (**(code **)(*plVar12 + 0x10))();
      }
      *plVar10 = (longlong)plVar8;
      if (plVar8 != (longlong *)0x0) goto LAB_140328fae;
    }
LAB_14032a3d6:
    *(longlong **)(param_1 + 0x20) = plVar13;
    plVar13 = *(longlong **)(param_1 + 0x28);
    if (plVar13 != (longlong *)0x0) {
      *(longlong **)(param_1 + 0x28) = plVar8;
      bVar26 = true;
LAB_140328fdc:
      LOCK();
      plVar10 = plVar13 + 1;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)*plVar10 == 0) {
        (**(code **)*plVar13)(plVar13);
        LOCK();
        piVar20 = (int *)((longlong)plVar13 + 0xc);
        *piVar20 = *piVar20 + -1;
        UNLOCK();
        if (*piVar20 == 0) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
        }
      }
      if (!bVar26) goto LAB_14032901f;
    }
  }
  plVar13 = (longlong *)(param_1 + 0x20);
  lVar23 = *plVar13;
  if (param_3 != '\0') {
    if (*(int *)(lVar23 + 0x80) != 3) {
      FUN_1446efa72((longlong *)(lVar23 + 0x78),0,3,0x10);
      *(undefined4 *)(lVar23 + 0x80) = 3;
    }
    puVar25 = *(undefined8 **)(lVar23 + 0x78);
    *puVar25 = &PTR_LAB_14b42fcd0;
    LOCK();
    UNLOCK();
    lVar15 = DAT_14c758608 + 1;
    lVar23 = DAT_14c758608 + 1;
    if (lVar15 == 0) {
      LOCK();
      UNLOCK();
      lVar15 = DAT_14c758608 + 2;
      lVar23 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar23;
    puVar25[2] = lVar15;
    *puVar25 = &PTR_FUN_14b42fc60;
    puVar25[3] = param_2;
    puVar25[4] = &LAB_1457b60b6;
    lVar23 = *plVar13;
    if (*(int *)(lVar23 + 0x90) != 3) {
      FUN_1446efa72((longlong *)(lVar23 + 0x88),0,3,0x10);
      *(undefined4 *)(lVar23 + 0x90) = 3;
    }
    puVar25 = *(undefined8 **)(lVar23 + 0x88);
    *puVar25 = &PTR_LAB_14b42fdb0;
    LOCK();
    UNLOCK();
    lVar15 = DAT_14c758608 + 1;
    lVar23 = DAT_14c758608 + 1;
    if (lVar15 == 0) {
      LOCK();
      UNLOCK();
      lVar15 = DAT_14c758608 + 2;
      lVar23 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar23;
    puVar25[2] = lVar15;
    *puVar25 = &PTR_FUN_14b42fd40;
    puVar25[3] = param_2;
    puVar25[4] = &LAB_140c5f5a6;
    lVar23 = *plVar13;
  }
  local_140 = lVar23;
  local_138 = *(longlong **)(param_1 + 0x28);
  if (local_138 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_138 + 1) = (int)local_138[1] + 1;
    UNLOCK();
  }
  local_130 = &local_140;
  local_128 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30);
  local_120 = (int *)0x0;
  uStack_118 = 0;
  lVar15 = *(longlong *)(param_2 + 0x120);
  if ((lVar15 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  if ((*(byte *)(lVar23 + 0xf1) & 1) == 0) {
    if (lVar15 == 0) {
      *(undefined4 *)(lVar23 + 0x18) = 0;
      uVar11 = 0;
      iVar7 = 0;
    }
    else {
      uVar11 = *(undefined8 *)(param_2 + 0x128);
      uVar3 = *(uint *)(lVar15 + 0xc);
      *(uint *)(lVar23 + 0x18) = uVar3;
      if ((int)uVar3 < DAT_14c9647dc) {
        lVar15 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
      }
      else {
        lVar15 = 0;
      }
      iVar7 = *(int *)(lVar15 + 0x10);
      if (*(int *)(lVar15 + 0x10) == 0) {
        LOCK();
        iVar7 = DAT_14c964868 + 1;
        UNLOCK();
        iVar21 = DAT_14c964868 + 1;
        bVar26 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar7;
        if (bVar26) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar21);
        }
        LOCK();
        iVar7 = *(int *)(lVar15 + 0x10);
        bVar26 = iVar7 == 0;
        if (bVar26) {
          *(int *)(lVar15 + 0x10) = iVar21;
          iVar7 = 0;
        }
        UNLOCK();
        if (bVar26) {
          iVar7 = iVar21;
        }
      }
    }
    *(int *)(lVar23 + 0x1c) = iVar7;
    *(undefined8 *)(lVar23 + 0x20) = uVar11;
    if (*(int *)(lVar23 + 0x2c) == 0) {
LAB_14032a324:
      lVar15 = 0;
    }
    else {
      uVar3 = *(uint *)(lVar23 + 0x28);
      lVar15 = 0;
      if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) {
        plVar13 = (longlong *)
                  ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
        if ((plVar13 == (longlong *)0x0) ||
           (((int)plVar13[2] != *(int *)(lVar23 + 0x2c) ||
            ((*(uint *)(plVar13 + 1) & 0x10200000) != 0)))) goto LAB_14032a324;
        lVar15 = *plVar13;
      }
    }
    if ((*(int *)(*(longlong *)(lVar15 + 0x30) + 0x30) < 1) ||
       (plVar13 = (longlong *)**(longlong **)(*(longlong *)(lVar15 + 0x30) + 0x28),
       plVar13 == (longlong *)0x0)) {
LAB_14032a39d:
      plVar13 = (longlong *)0x0;
      plVar8 = (longlong *)0x0;
    }
    else {
      lVar15 = (**(code **)(*plVar13 + 8))();
      lVar9 = FUN_141859800();
      if ((lVar9 == 0) ||
         ((*(int *)(lVar15 + 0x38) < *(int *)(lVar9 + 0x38) ||
          (*(longlong *)(*(longlong *)(lVar15 + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) !=
           lVar9 + 0x30)))) goto LAB_14032a39d;
      local_170 = lVar23;
      plVar10 = (longlong *)FUN_14001cc68(0x30,0x10);
      plVar10[1] = (longlong)&DAT_100000001;
      *plVar10 = (longlong)&PTR_FUN_14b430a70;
      plVar10[3] = 0;
      plVar10[4] = 0;
      plVar10[5] = 0;
      plVar10[2] = (longlong)&PTR_FUN_14b430a90;
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
        UNLOCK();
        LOCK();
        plVar8 = plVar10 + 1;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)*plVar8 == 0) {
          (**(code **)*plVar10)();
          LOCK();
          piVar20 = (int *)((longlong)plVar10 + 0xc);
          *piVar20 = *piVar20 + -1;
          UNLOCK();
          if (*piVar20 == 0) {
            (**(code **)(*plVar10 + 0x10))();
          }
        }
      }
      local_168 = plVar10;
      if ((longlong)(int)plVar13[6] != 0) {
        local_158 = plVar10 + 3;
        plVar8 = (longlong *)plVar13[5];
        plVar13 = plVar8 + (longlong)(int)plVar13[6] * 4;
        local_148 = plVar13;
        do {
          if (((char)plVar8[1] == '\x03') &&
             (plVar12 = (longlong *)*plVar8, plVar12 != (longlong *)0x0)) {
            uVar11 = FUN_14185978c();
            cVar6 = FUN_1448093f4(plVar12,uVar11);
            if (cVar6 != '\0') {
              (**(code **)(*plVar12 + 0x88))(plVar12,&local_110,&local_130);
              lVar23 = plVar12[7];
              if (lVar23 == 0) {
                lVar23 = *(longlong *)(local_128 + 0xb8);
                plVar13 = *(longlong **)(local_128 + 0xc0);
              }
              else {
                plVar13 = (longlong *)plVar12[8];
              }
              if (plVar13 == (longlong *)0x0) {
                plVar13 = (longlong *)0x0;
              }
              else {
                LOCK();
                *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
                UNLOCK();
                LOCK();
                *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
                UNLOCK();
                LOCK();
                plVar19 = plVar13 + 1;
                *(int *)plVar19 = (int)*plVar19 + -1;
                UNLOCK();
                if ((int)*plVar19 == 0) {
                  (**(code **)*plVar13)(plVar13);
                  LOCK();
                  piVar20 = (int *)((longlong)plVar13 + 0xc);
                  *piVar20 = *piVar20 + -1;
                  UNLOCK();
                  if (*piVar20 == 0) {
                    (**(code **)(*plVar13 + 0x10))(plVar13);
                  }
                }
              }
              local_110[0xc] = lVar23;
              plVar19 = (longlong *)local_110[0xd];
              if (plVar13 == plVar19) {
                if (plVar13 != (longlong *)0x0) {
                  LOCK();
                  plVar19 = plVar13 + 1;
                  *(int *)plVar19 = (int)*plVar19 + -1;
                  UNLOCK();
                  if ((int)*plVar19 == 0) {
                    (**(code **)*plVar13)(plVar13);
                    LOCK();
                    piVar20 = (int *)((longlong)plVar13 + 0xc);
                    *piVar20 = *piVar20 + -1;
                    iVar7 = *piVar20;
                    UNLOCK();
                    plVar19 = plVar13;
                    goto joined_r0x000140329cdc;
                  }
                }
              }
              else {
                local_110[0xd] = plVar13;
                if (plVar19 != (longlong *)0x0) {
                  LOCK();
                  plVar13 = plVar19 + 1;
                  *(int *)plVar13 = (int)*plVar13 + -1;
                  UNLOCK();
                  if ((int)*plVar13 == 0) {
                    (**(code **)*plVar19)(plVar19);
                    LOCK();
                    piVar20 = (int *)((longlong)plVar19 + 0xc);
                    *piVar20 = *piVar20 + -1;
                    iVar7 = *piVar20;
                    UNLOCK();
joined_r0x000140329cdc:
                    if (iVar7 == 0) {
                      (**(code **)(*plVar19 + 0x10))(plVar19);
                    }
                  }
                }
              }
              iVar7 = (int)plVar12[0xb];
              if (iVar7 < 0) goto LAB_14032a3a6;
              if (*(int *)((longlong)local_110 + 0x44) < iVar7) {
                FUN_1418b02cc(local_110 + 7);
                iVar7 = (int)plVar12[0xb];
              }
              if (iVar7 != 0) {
                puVar25 = (undefined8 *)plVar12[10];
                local_150 = puVar25 + (longlong)iVar7 * 7;
                do {
                  plVar13 = local_110 + 7;
                  iVar7 = *(int *)(local_110 + 8);
                  *(uint *)(local_110 + 8) = iVar7 + 1U;
                  if (*(uint *)((longlong)local_110 + 0x44) < iVar7 + 1U) {
                    FUN_1489a4328(plVar13,iVar7);
                  }
                  lVar23 = (longlong)iVar7 * 0x40 + *plVar13;
                  FUN_143e4e785(lVar23);
                  uVar11 = *puVar25;
                  plVar13 = (longlong *)puVar25[1];
                  if (plVar13 == (longlong *)0x0) {
                    *(undefined8 *)(lVar23 + 0x10) = uVar11;
                    plVar10 = *(longlong **)(lVar23 + 0x18);
                    if (plVar10 != (longlong *)0x0) {
                      *(undefined8 *)(lVar23 + 0x18) = 0;
LAB_140329c30:
                      LOCK();
                      plVar13 = plVar10 + 1;
                      *(int *)plVar13 = (int)*plVar13 + -1;
                      UNLOCK();
                      if ((int)*plVar13 == 0) {
                        (**(code **)*plVar10)(plVar10);
                        LOCK();
                        piVar20 = (int *)((longlong)plVar10 + 0xc);
                        *piVar20 = *piVar20 + -1;
                        iVar7 = *piVar20;
                        UNLOCK();
joined_r0x000140329c93:
                        if (iVar7 == 0) {
                          (**(code **)(*plVar10 + 0x10))(plVar10);
                        }
                      }
                    }
                  }
                  else {
                    LOCK();
                    *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
                    UNLOCK();
                    LOCK();
                    *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
                    UNLOCK();
                    LOCK();
                    plVar10 = plVar13 + 1;
                    *(int *)plVar10 = (int)*plVar10 + -1;
                    UNLOCK();
                    if ((int)*plVar10 == 0) {
                      (**(code **)*plVar13)(plVar13);
                      LOCK();
                      piVar20 = (int *)((longlong)plVar13 + 0xc);
                      *piVar20 = *piVar20 + -1;
                      UNLOCK();
                      if (*piVar20 == 0) {
                        (**(code **)(*plVar13 + 0x10))(plVar13);
                      }
                    }
                    *(undefined8 *)(lVar23 + 0x10) = uVar11;
                    plVar10 = *(longlong **)(lVar23 + 0x18);
                    if (plVar13 == plVar10) {
                      LOCK();
                      plVar10 = plVar13 + 1;
                      *(int *)plVar10 = (int)*plVar10 + -1;
                      UNLOCK();
                      if ((int)*plVar10 == 0) {
                        (**(code **)*plVar13)(plVar13);
                        LOCK();
                        piVar20 = (int *)((longlong)plVar13 + 0xc);
                        *piVar20 = *piVar20 + -1;
                        iVar7 = *piVar20;
                        UNLOCK();
                        plVar10 = plVar13;
                        goto joined_r0x000140329c93;
                      }
                    }
                    else {
                      *(longlong **)(lVar23 + 0x18) = plVar13;
                      if (plVar10 != (longlong *)0x0) goto LAB_140329c30;
                    }
                  }
                  iVar7 = *(int *)(puVar25 + 4);
                  if (iVar7 < 0) goto LAB_14032a3a6;
                  plVar13 = (longlong *)(lVar23 + 0x20);
                  if (*(int *)(lVar23 + 0x2c) < iVar7) {
                    FUN_1418b03a0();
                    iVar7 = *(int *)(puVar25 + 4);
                  }
                  if (iVar7 != 0) {
                    plVar19 = (longlong *)puVar25[3];
                    plVar10 = plVar19 + (longlong)iVar7 * 3;
                    do {
                      lVar15 = *plVar19;
                      plVar5 = (longlong *)plVar19[1];
                      if (plVar5 == (longlong *)0x0) {
                        if (lVar15 != 0) goto LAB_140329928;
                      }
                      else {
                        LOCK();
                        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
                        UNLOCK();
                        LOCK();
                        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
                        UNLOCK();
                        LOCK();
                        plVar1 = plVar5 + 1;
                        *(int *)plVar1 = (int)*plVar1 + -1;
                        UNLOCK();
                        if ((int)*plVar1 == 0) {
                          local_178 = plVar13;
                          (**(code **)*plVar5)(plVar5);
                          LOCK();
                          piVar20 = (int *)((longlong)plVar5 + 0xc);
                          *piVar20 = *piVar20 + -1;
                          UNLOCK();
                          plVar13 = local_178;
                          if (*piVar20 == 0) {
                            (**(code **)(*plVar5 + 0x10))(plVar5);
                            plVar13 = local_178;
                          }
                        }
                        if (lVar15 != 0) {
                          LOCK();
                          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
                          UNLOCK();
LAB_140329928:
                          iVar7 = *(int *)(lVar23 + 0x28);
                          *(uint *)(lVar23 + 0x28) = iVar7 + 1U;
                          if (*(uint *)(lVar23 + 0x2c) < iVar7 + 1U) {
                            local_178 = plVar13;
                            local_160 = plVar10;
                            FUN_1489a43ae(plVar13,iVar7);
                            plVar13 = local_178;
                            plVar10 = local_160;
                          }
                          lVar9 = *plVar13;
                          *(longlong *)(lVar9 + (longlong)iVar7 * 0x10) = lVar15;
                          *(longlong **)(lVar9 + 8 + (longlong)iVar7 * 0x10) = plVar5;
                          if (plVar5 == (longlong *)0x0) goto LAB_14032996f;
                          LOCK();
                          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
                          UNLOCK();
                          LOCK();
                          plVar1 = plVar5 + 1;
                          *(int *)plVar1 = (int)*plVar1 + -1;
                          UNLOCK();
                          if ((int)*plVar1 == 0) {
                            (**(code **)*plVar5)(plVar5);
                            LOCK();
                            piVar20 = (int *)((longlong)plVar5 + 0xc);
                            *piVar20 = *piVar20 + -1;
                            UNLOCK();
                            if (*piVar20 == 0) {
                              (**(code **)(*plVar5 + 0x10))(plVar5);
                            }
                          }
                        }
                        LOCK();
                        plVar1 = plVar5 + 1;
                        *(int *)plVar1 = (int)*plVar1 + -1;
                        UNLOCK();
                        if ((int)*plVar1 == 0) {
                          (**(code **)*plVar5)(plVar5);
                          LOCK();
                          piVar20 = (int *)((longlong)plVar5 + 0xc);
                          *piVar20 = *piVar20 + -1;
                          UNLOCK();
                          if (*piVar20 == 0) {
                            (**(code **)(*plVar5 + 0x10))(plVar5);
                          }
                        }
                      }
LAB_14032996f:
                      plVar19 = plVar19 + 3;
                    } while (plVar19 != plVar10);
                  }
                  iVar7 = *(int *)(puVar25 + 6);
                  if (iVar7 < 0) goto LAB_14032a3a6;
                  plVar13 = (longlong *)(lVar23 + 0x30);
                  if (*(int *)(lVar23 + 0x3c) < iVar7) {
                    FUN_1418b0474();
                    iVar7 = *(int *)(puVar25 + 6);
                  }
                  if (iVar7 != 0) {
                    plVar19 = (longlong *)puVar25[5];
                    plVar10 = plVar19 + (longlong)iVar7 * 3;
                    do {
                      lVar15 = *plVar19;
                      plVar5 = (longlong *)plVar19[1];
                      if (plVar5 == (longlong *)0x0) {
                        if (lVar15 != 0) goto LAB_140329ac0;
                      }
                      else {
                        LOCK();
                        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
                        UNLOCK();
                        LOCK();
                        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
                        UNLOCK();
                        LOCK();
                        plVar1 = plVar5 + 1;
                        *(int *)plVar1 = (int)*plVar1 + -1;
                        UNLOCK();
                        if ((int)*plVar1 == 0) {
                          local_178 = plVar13;
                          (**(code **)*plVar5)(plVar5);
                          LOCK();
                          piVar20 = (int *)((longlong)plVar5 + 0xc);
                          *piVar20 = *piVar20 + -1;
                          UNLOCK();
                          plVar13 = local_178;
                          if (*piVar20 == 0) {
                            (**(code **)(*plVar5 + 0x10))(plVar5);
                            plVar13 = local_178;
                          }
                        }
                        if (lVar15 != 0) {
                          LOCK();
                          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
                          UNLOCK();
LAB_140329ac0:
                          iVar7 = *(int *)(lVar23 + 0x38);
                          *(uint *)(lVar23 + 0x38) = iVar7 + 1U;
                          if (*(uint *)(lVar23 + 0x3c) < iVar7 + 1U) {
                            local_178 = plVar13;
                            local_160 = plVar10;
                            FUN_1489a4434(plVar13,iVar7);
                            plVar13 = local_178;
                            plVar10 = local_160;
                          }
                          lVar9 = *plVar13;
                          *(longlong *)(lVar9 + (longlong)iVar7 * 0x10) = lVar15;
                          *(longlong **)(lVar9 + 8 + (longlong)iVar7 * 0x10) = plVar5;
                          if (plVar5 == (longlong *)0x0) goto LAB_140329b07;
                          LOCK();
                          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
                          UNLOCK();
                          LOCK();
                          plVar1 = plVar5 + 1;
                          *(int *)plVar1 = (int)*plVar1 + -1;
                          UNLOCK();
                          if ((int)*plVar1 == 0) {
                            (**(code **)*plVar5)(plVar5);
                            LOCK();
                            piVar20 = (int *)((longlong)plVar5 + 0xc);
                            *piVar20 = *piVar20 + -1;
                            UNLOCK();
                            if (*piVar20 == 0) {
                              (**(code **)(*plVar5 + 0x10))(plVar5);
                            }
                          }
                        }
                        LOCK();
                        plVar1 = plVar5 + 1;
                        *(int *)plVar1 = (int)*plVar1 + -1;
                        UNLOCK();
                        if ((int)*plVar1 == 0) {
                          (**(code **)*plVar5)(plVar5);
                          LOCK();
                          piVar20 = (int *)((longlong)plVar5 + 0xc);
                          *piVar20 = *piVar20 + -1;
                          UNLOCK();
                          if (*piVar20 == 0) {
                            (**(code **)(*plVar5 + 0x10))(plVar5);
                          }
                        }
                      }
LAB_140329b07:
                      plVar19 = plVar19 + 3;
                    } while (plVar19 != plVar10);
                  }
                  puVar25 = puVar25 + 7;
                  plVar10 = local_168;
                } while (puVar25 != local_150);
              }
              if ((longlong *)plVar12[1] != (longlong *)0x0) {
                (**(code **)(*(longlong *)plVar12[1] + 8))();
                FUN_1418590f2();
              }
              lVar23 = plVar12[6];
              if ((longlong)(int)lVar23 != 0) {
                lVar15 = plVar12[5];
                lVar9 = 0;
                do {
                  if ((*(char *)(lVar15 + 8 + lVar9) == '\x01') &&
                     (plVar13 = *(longlong **)(lVar15 + lVar9), plVar13 != (longlong *)0x0)) {
                    uVar11 = FUN_1418597c6();
                    cVar6 = FUN_1448093f4(plVar13,uVar11);
                    puVar25 = local_110;
                    if (cVar6 != '\0') {
                      local_a0 = (longlong *)CONCAT44(uStack_104,local_108);
                      local_b8 = &local_130;
                      local_a8 = local_110;
                      if (local_a0 != (longlong *)0x0) {
                        LOCK();
                        *(int *)(local_a0 + 1) = (int)local_a0[1] + 1;
                        UNLOCK();
                      }
                      local_b0 = plVar13;
                      (**(code **)(*plVar13 + 0x88))(plVar13,&local_f8,&local_b8);
                      if (local_f8 == (code *)0x0) {
                        plVar13 = *local_b8;
                        plVar12 = (longlong *)FUN_14001cc68(0x50,0x10);
                        plVar12[1] = (longlong)&DAT_100000001;
                        *plVar12 = (longlong)&PTR_FUN_14b430a20;
                        plVar12[3] = 0;
                        plVar12[4] = 0;
                        plVar12[2] = (longlong)&PTR_LAB_14b3ef590;
                        plVar12[5] = *plVar13;
                        lVar4 = plVar13[1];
                        plVar12[6] = lVar4;
                        if (lVar4 != 0) {
                          LOCK();
                          *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
                          UNLOCK();
                        }
                        plVar12[7] = (longlong)local_a8;
                        plVar12[8] = (longlong)local_a0;
                        if (local_a0 != (longlong *)0x0) {
                          LOCK();
                          *(int *)(local_a0 + 1) = (int)local_a0[1] + 1;
                          UNLOCK();
                        }
                        *(byte *)(plVar12 + 9) = *(byte *)(plVar12 + 9) & 0xf9;
                        pcVar16 = (code *)(plVar12 + 2);
                        plVar12[2] = (longlong)&PTR_FUN_14b430a40;
                        if ((pcVar16 == (code *)0x0) ||
                           (((plVar12[3] != 0 && (plVar12[4] != 0)) &&
                            (0 < *(int *)(plVar12[4] + 8))))) {
                          if (plVar12 == (longlong *)0x0) {
LAB_1403296f3:
                            plVar12 = (longlong *)0x0;
                            goto LAB_1403295f5;
                          }
                        }
                        else {
                          if (plVar12 == (longlong *)0x0) {
                            _DAT_00000018 = 0x10;
                            plVar13 = (longlong *)&DAT_00000020;
                            plVar10 = _DAT_00000020;
                            if (_DAT_00000020 == (longlong *)0x0) {
                              plVar12 = (longlong *)0x0;
                              goto LAB_1403295f5;
                            }
LAB_140329726:
                            LOCK();
                            piVar20 = (int *)((longlong)plVar10 + 0xc);
                            *piVar20 = *piVar20 + -1;
                            UNLOCK();
                            if (*piVar20 == 0) {
                              (**(code **)(*plVar10 + 0x10))();
                            }
                            *plVar13 = (longlong)plVar12;
                            if (plVar12 == (longlong *)0x0) goto LAB_1403296f3;
                          }
                          else {
                            LOCK();
                            *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
                            UNLOCK();
                            plVar12[3] = (longlong)pcVar16;
                            if ((longlong *)plVar12[4] != plVar12) {
                              LOCK();
                              *(int *)((longlong)plVar12 + 0xc) =
                                   *(int *)((longlong)plVar12 + 0xc) + 1;
                              UNLOCK();
                              if ((longlong *)plVar12[4] != (longlong *)0x0) {
                                plVar13 = plVar12 + 4;
                                plVar10 = (longlong *)plVar12[4];
                                goto LAB_140329726;
                              }
                              plVar12[4] = (longlong)plVar12;
                            }
                          }
                          LOCK();
                          plVar13 = plVar12 + 1;
                          *(int *)plVar13 = (int)*plVar13 + -1;
                          UNLOCK();
                          if ((int)*plVar13 == 0) {
                            (**(code **)*plVar12)();
                            LOCK();
                            piVar20 = (int *)((longlong)plVar12 + 0xc);
                            *piVar20 = *piVar20 + -1;
                            UNLOCK();
                            if (*piVar20 == 0) {
                              (**(code **)(*plVar12 + 0x10))();
                            }
                          }
                        }
                        LOCK();
                        *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
                        UNLOCK();
                        LOCK();
                        plVar13 = plVar12 + 1;
                        *(int *)plVar13 = (int)*plVar13 + -1;
                        UNLOCK();
                        if ((int)*plVar13 == 0) {
                          (**(code **)*plVar12)();
                          LOCK();
                          piVar20 = (int *)((longlong)plVar12 + 0xc);
                          *piVar20 = *piVar20 + -1;
                          UNLOCK();
                          if (*piVar20 == 0) {
                            (**(code **)(*plVar12 + 0x10))();
                          }
                        }
LAB_1403295f5:
                        plVar13 = local_f0;
                        if (local_f0 != (longlong *)0x0) {
                          LOCK();
                          plVar10 = local_f0 + 1;
                          *(int *)plVar10 = (int)*plVar10 + -1;
                          UNLOCK();
                          if ((int)*plVar10 == 0) {
                            (**(code **)*local_f0)();
                            LOCK();
                            piVar20 = (int *)((longlong)plVar13 + 0xc);
                            *piVar20 = *piVar20 + -1;
                            UNLOCK();
                            if (*piVar20 == 0) {
                              (**(code **)(*plVar13 + 0x10))();
                            }
                          }
                        }
                      }
                      else {
                        (**(code **)(*(longlong *)local_f8 + 0x10))();
                        pcVar16 = local_f8;
                        if (local_f0 != (longlong *)0x0) {
                          LOCK();
                          *(int *)(local_f0 + 1) = (int)local_f0[1] + 1;
                          UNLOCK();
                          plVar12 = local_f0;
                          goto LAB_1403295f5;
                        }
                        plVar12 = (longlong *)0x0;
                      }
                      iVar7 = *(int *)(puVar25 + 10);
                      *(uint *)(puVar25 + 10) = iVar7 + 1U;
                      if (*(uint *)((longlong)puVar25 + 0x54) < iVar7 + 1U) {
                        FUN_1418b0548(puVar25 + 9,iVar7);
                      }
                      plVar10 = local_168;
                      lVar4 = puVar25[9];
                      *(code **)(lVar4 + (longlong)iVar7 * 0x10) = pcVar16;
                      *(longlong **)(lVar4 + 8 + (longlong)iVar7 * 0x10) = plVar12;
                      if (plVar12 != (longlong *)0x0) {
                        LOCK();
                        *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
                        UNLOCK();
                        LOCK();
                        plVar13 = plVar12 + 1;
                        *(int *)plVar13 = (int)*plVar13 + -1;
                        UNLOCK();
                        if ((int)*plVar13 == 0) {
                          (**(code **)*plVar12)();
                          LOCK();
                          piVar20 = (int *)((longlong)plVar12 + 0xc);
                          *piVar20 = *piVar20 + -1;
                          UNLOCK();
                          if (*piVar20 == 0) {
                            (**(code **)(*plVar12 + 0x10))();
                          }
                        }
                      }
                      if (local_a0 != (longlong *)0x0) {
                        LOCK();
                        plVar13 = local_a0 + 1;
                        *(int *)plVar13 = (int)*plVar13 + -1;
                        UNLOCK();
                        if ((int)*plVar13 == 0) {
                          (**(code **)*local_a0)();
                          LOCK();
                          piVar20 = (int *)((longlong)local_a0 + 0xc);
                          *piVar20 = *piVar20 + -1;
                          UNLOCK();
                          if (*piVar20 == 0) {
                            (**(code **)(*local_a0 + 0x10))();
                          }
                        }
                      }
                    }
                  }
                  lVar9 = lVar9 + 0x20;
                } while ((longlong)(int)lVar23 * 0x20 != lVar9);
              }
              puVar25 = local_110;
              if (local_110 != (undefined8 *)0x0) {
                plVar13 = (longlong *)CONCAT44(uStack_104,local_108);
                if (plVar13 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
                  UNLOCK();
                }
                iVar7 = (int)plVar10[4];
                *(uint *)(plVar10 + 4) = iVar7 + 1U;
                if (*(uint *)((longlong)plVar10 + 0x24) < iVar7 + 1U) {
                  FUN_1418b07cc(local_158,iVar7);
                }
                lVar23 = *local_158;
                *(undefined8 **)(lVar23 + (longlong)iVar7 * 0x10) = puVar25;
                *(longlong **)(lVar23 + 8 + (longlong)iVar7 * 0x10) = plVar13;
                if (plVar13 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
                  UNLOCK();
                  LOCK();
                  plVar12 = plVar13 + 1;
                  *(int *)plVar12 = (int)*plVar12 + -1;
                  UNLOCK();
                  if ((int)*plVar12 == 0) {
                    (**(code **)*plVar13)();
                    LOCK();
                    piVar20 = (int *)((longlong)plVar13 + 0xc);
                    *piVar20 = *piVar20 + -1;
                    UNLOCK();
                    if (*piVar20 == 0) {
                      (**(code **)(*plVar13 + 0x10))();
                    }
                  }
                }
              }
              plVar12 = (longlong *)CONCAT44(uStack_104,local_108);
              plVar13 = local_148;
              if (plVar12 != (longlong *)0x0) {
                LOCK();
                plVar19 = plVar12 + 1;
                *(int *)plVar19 = (int)*plVar19 + -1;
                UNLOCK();
                if ((int)*plVar19 == 0) {
                  (**(code **)*plVar12)();
                  LOCK();
                  piVar20 = (int *)((longlong)plVar12 + 0xc);
                  *piVar20 = *piVar20 + -1;
                  UNLOCK();
                  plVar13 = local_148;
                  if (*piVar20 == 0) {
                    (**(code **)(*plVar12 + 0x10))();
                    plVar13 = local_148;
                  }
                }
              }
            }
          }
          plVar8 = plVar8 + 4;
        } while (plVar8 != plVar13);
      }
      plVar13 = plVar10 + 2;
      lVar23 = local_170;
      if (plVar10 == (longlong *)0x0) {
        plVar8 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
        UNLOCK();
        LOCK();
        plVar12 = plVar10 + 1;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        plVar8 = plVar10;
        if ((int)*plVar12 == 0) {
          (**(code **)*plVar10)();
          plVar8 = local_168;
          LOCK();
          piVar20 = (int *)((longlong)plVar10 + 0xc);
          *piVar20 = *piVar20 + -1;
          UNLOCK();
          lVar23 = local_170;
          if (*piVar20 == 0) {
            (**(code **)(*local_168 + 0x10))();
            lVar23 = local_170;
          }
        }
      }
    }
    *(longlong **)(lVar23 + 0x38) = plVar13;
    plVar13 = *(longlong **)(lVar23 + 0x40);
    if (plVar8 != plVar13) {
      *(longlong **)(lVar23 + 0x40) = plVar8;
      plVar8 = plVar13;
    }
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar13 = plVar8 + 1;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)*plVar13 == 0) {
        (**(code **)*plVar8)();
        LOCK();
        piVar20 = (int *)((longlong)plVar8 + 0xc);
        *piVar20 = *piVar20 + -1;
        UNLOCK();
        if (*piVar20 == 0) {
          (**(code **)(*plVar8 + 0x10))();
        }
      }
    }
    iVar21 = *(int *)(lVar23 + 0x2c);
    if (iVar21 == 0) {
LAB_14032a32b:
      lVar15 = 0;
    }
    else {
      uVar3 = *(uint *)(lVar23 + 0x28);
      lVar15 = 0;
      if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) {
        plVar13 = (longlong *)
                  ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
        if ((plVar13 == (longlong *)0x0) ||
           (((int)plVar13[2] != iVar21 || ((*(uint *)(plVar13 + 1) & 0x10200000) != 0))))
        goto LAB_14032a32b;
        lVar15 = *plVar13;
      }
    }
    iVar7 = *(int *)(*(longlong *)(lVar15 + 0x30) + 0xb0);
    if (iVar7 < 0) {
LAB_14032a3a6:
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar7);
    }
    if (*(int *)(lVar23 + 100) < iVar7) {
      FUN_1418afe4c();
      iVar21 = *(int *)(lVar23 + 0x2c);
    }
    if (iVar21 == 0) {
LAB_14032a332:
      lVar15 = 0;
    }
    else {
      uVar3 = *(uint *)(lVar23 + 0x28);
      lVar15 = 0;
      if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) {
        plVar13 = (longlong *)
                  ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
        if ((plVar13 == (longlong *)0x0) ||
           (((int)plVar13[2] != iVar21 || ((*(uint *)(plVar13 + 1) & 0x10200000) != 0))))
        goto LAB_14032a332;
        lVar15 = *plVar13;
      }
    }
    local_e8 = (undefined ***)0x0;
    local_d8 = &PTR_LAB_14b430610;
    local_d0 = lVar23;
    local_f8 = FUN_143e4e2ae;
    lVar9 = (longlong)*(int *)(*(longlong *)(lVar15 + 0x30) + 0xb0);
    if (lVar9 == 0) {
LAB_140329ee5:
      pppuVar14 = &local_d8;
      if (local_e8 != (undefined ***)0x0) {
        pppuVar14 = local_e8;
      }
      (*(code *)(*pppuVar14)[2])(pppuVar14);
    }
    else {
      lVar15 = *(longlong *)(*(longlong *)(lVar15 + 0x30) + 0xa8);
      lVar9 = lVar9 * 0x38;
      do {
        pcVar16 = local_f8;
        pppuVar14 = local_e8;
        if (local_e8 == (undefined ***)0x0) {
          pppuVar14 = &local_d8;
        }
        uVar11 = (*(code *)(*pppuVar14)[1])();
        (*pcVar16)(uVar11,lVar15);
        lVar15 = lVar15 + 0x38;
        lVar9 = lVar9 + -0x38;
      } while (lVar9 != 0);
      if (local_f8 != (code *)0x0) goto LAB_140329ee5;
    }
    bVar2 = *(byte *)(lVar23 + 0xf1);
    *(byte *)(lVar23 + 0xf1) = bVar2 | 1;
    if ((bVar2 & 8) != 0) {
      *(byte *)(lVar23 + 0xf1) = bVar2 | 0x41;
      lVar15 = FUN_140def512(lVar23);
      if (lVar15 != 0) {
        local_b8 = (longlong **)&LAB_140e2e822;
        local_b0 = (longlong *)((ulonglong)local_b0 & 0xffffffff00000000);
        FUN_14122f90a(&local_110,lVar23,&local_b8);
        local_b8 = (longlong **)0x0;
        local_b0 = (longlong *)((ulonglong)local_b0 & 0xffffffff00000000);
        FUN_14487d8d8(&local_b8,&local_110);
        local_78 = 1;
        local_188 = local_100;
        local_100[0] = 0;
        local_fc = 0xbf800000;
        FUN_1406f4044(lVar15,lVar23 + 0xd0,&local_b8,0x40a00000);
        (*(code *)(&PTR_LAB_14a1c87a0)[local_78])(&local_b8);
        if (local_108 != 0) {
          if (local_110 == (undefined8 *)0x0) goto LAB_14032a012;
          (**(code **)*local_110)(local_110,0);
          FUN_1446efa72(&local_110,0,0,0x10);
          local_108 = 0;
        }
        if (local_110 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
      }
    }
  }
LAB_14032a012:
  if ((longlong)(int)uStack_118 == 0) {
    uVar17 = 0;
  }
  else {
    piVar24 = local_120 + (longlong)(int)uStack_118 * 8;
    piVar20 = local_120;
    do {
      lVar23 = (longlong)*(int *)(*local_130 + 0x60);
      if (lVar23 != 0) {
        lVar15 = *(longlong *)(*local_130 + 0x58);
        piVar22 = (int *)(lVar15 + 0x1c);
        lVar9 = 0;
LAB_14032a075:
        if ((((*piVar22 != *piVar20) || (piVar22[1] != piVar20[1])) || (piVar22[2] != piVar20[2]))
           || (piVar22[3] != piVar20[3])) goto LAB_14032a089;
        lVar15 = lVar15 - lVar9;
        if (lVar15 != 0) {
          local_b8 = (longlong **)0x0;
          local_b0 = (longlong *)((ulonglong)local_b0 & 0xffffffff00000000);
          FUN_140ba2f58(&local_b8,piVar20 + 4);
          if (((int)local_b0 != 0) && (local_b8 != (longlong **)0x0)) {
            cVar6 = (*(code *)(*local_b8)[6])();
            if (cVar6 == '\0') {
              goto LAB_14032a242;
            }
            lVar15 = lVar15 + 0x40;
            if (piVar22[0xe] < 1) {
              iVar7 = piVar22[0xb];
              iVar21 = piVar22[0xd];
              piVar22[0xd] = iVar21 + -1;
              if (iVar21 + -1 <= iVar7) {
                iVar21 = iVar7;
                if (0 < iVar7) {
                  iVar18 = 0;
                  do {
                    if (((*(int *)(*(longlong *)(piVar22 + 9) + 8 + (longlong)iVar18 * 0x10) == 0)
                        || (plVar13 = *(longlong **)
                                       (*(longlong *)(piVar22 + 9) + (longlong)iVar18 * 0x10),
                           plVar13 == (longlong *)0x0)) ||
                       (cVar6 = (**(code **)(*plVar13 + 0x28))(), cVar6 != '\0')) {
                      FUN_14005b288(lVar15,iVar18);
                      FUN_14005b248(lVar15);
                    }
                    else {
                      iVar18 = iVar18 + 1;
                    }
                    iVar21 = piVar22[0xb];
                  } while (iVar18 < iVar21);
                }
                iVar18 = iVar21 * 2;
                if (iVar18 < 3) {
                  iVar18 = 2;
                }
                piVar22[0xd] = iVar18;
                if ((iVar18 < iVar7) && (piVar22[0xc] != iVar21)) {
                  FUN_14045812c(lVar15);
                }
              }
            }
            if (((int)local_b0 != 0) && (local_b8 != (longlong **)0x0)) {
              (*(code *)(*local_b8)[7])(local_b8,&local_f8);
            }
            iVar7 = piVar22[0xb];
            piVar22[0xb] = iVar7 + 1U;
            if ((uint)piVar22[0xc] < iVar7 + 1U) {
              FUN_1447a71f6(lVar15,iVar7);
            }
            lVar23 = *(longlong *)(piVar22 + 9);
            lVar15 = (longlong)iVar7 * 0x10;
            *(undefined8 *)(lVar23 + lVar15) = 0;
            *(undefined4 *)(lVar23 + 8 + lVar15) = 0;
            *(longlong ***)(lVar23 + lVar15) = local_b8;
            local_b8 = (longlong **)0x0;
            *(int *)(lVar23 + 8 + lVar15) = (int)local_b0;
LAB_14032a1f6:
            local_b0 = (longlong *)((ulonglong)local_b0 & 0xffffffff00000000);
LAB_14032a209:
            if (local_b8 != (longlong **)0x0) {
              FUN_1400020a8();
            }
            goto LAB_14032a20e;
          }
LAB_14032a242:
          if ((int)local_b0 == 0) goto LAB_14032a209;
          if (local_b8 != (longlong **)0x0) {
            (*(code *)**local_b8)(local_b8,0);
            FUN_1446efa72(&local_b8,0,0,0x10);
            goto LAB_14032a1f6;
          }
        }
      }
LAB_14032a20e:
      piVar20 = piVar20 + 8;
    } while (piVar20 != piVar24);
    uVar17 = uStack_118 & 0xffffffff;
  }
  FUN_1418af17b(local_120,uVar17);
  if (local_120 != (int *)0x0) {
    FUN_1400020a8();
  }
  plVar13 = local_138;
  if (local_138 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_138 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*local_138)(local_138);
      LOCK();
      piVar20 = (int *)((longlong)plVar13 + 0xc);
      *piVar20 = *piVar20 + -1;
      UNLOCK();
      if (*piVar20 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
      }
    }
  }
LAB_14032a2d0:
  if ((local_60 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_14032a089:
  piVar22 = piVar22 + 0x1e;
  lVar9 = lVar9 + -0x78;
  if (lVar23 * -0x78 - lVar9 == 0) goto LAB_14032a20e;
  goto LAB_14032a075;
}



// FUNCTION 14032a560 FUN_14032a560 body=57 status=ok
// SIG undefined FUN_14032a560(void)

void FUN_14032a560(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb60cf0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb60cf0 = FUN_140002ddd(FUN_1464efe80,uVar1,L"GbxMomentNodeState_PlaySequence");
  }
  return;
}



// FUNCTION 14032a59a FUN_14032a59a body=415 status=ok
// SIG undefined FUN_14032a59a(void)

ulonglong FUN_14032a59a(longlong param_1,int param_2,undefined8 *param_3)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  ulonglong unaff_RBP;
  char cVar6;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  LARGE_INTEGER local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*(byte *)(param_1 + 0x242) & 0x10) == 0) {
    local_48 = *(undefined8 *)(param_1 + 0xc0);
    QueryPerformanceCounter(&local_40);
    local_38 = 0;
    cVar6 = *(char *)(param_1 + 0x290);
    do {
      unaff_RBP = 0;
      if (cVar6 == '\x02') {
        iVar3 = *(int *)(param_1 + 0x24c);
        do {
          iVar4 = *(int *)(param_1 + 0xa8);
          if (iVar4 <= iVar3) goto LAB_14032a65c;
          plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xa0) + (longlong)iVar3 * 8);
          if (plVar1 != (longlong *)0x0) {
            unaff_RBP = (ulonglong)
                        (uint)(((int)unaff_RBP + (int)plVar1[0x49]) -
                              *(int *)((longlong)plVar1 + 0x274));
            (**(code **)(*plVar1 + 0x4c0))(plVar1,0);
            FUN_144958ee8(plVar1,0,0);
            iVar3 = *(int *)(param_1 + 0x24c);
          }
          iVar3 = iVar3 + 1;
          *(int *)(param_1 + 0x24c) = iVar3;
        } while ((int)unaff_RBP <= param_2);
        iVar4 = *(int *)(param_1 + 0xa8);
LAB_14032a65c:
        if (iVar3 < iVar4) goto LAB_14032a714;
        *(undefined4 *)(param_1 + 0x24c) = 0;
        cVar6 = '\x03';
      }
      else if (cVar6 == '\0') {
        cVar6 = '\x02';
        if (((param_2 != 0) && (param_2 != 0x7fffffff)) && (DAT_14cae8b90 == '\x01')) {
          iVar3 = FUN_14490d72a(*(undefined8 *)(param_1 + 0xc0));
          if (1 < iVar3 - 1U) {
            cVar2 = FUN_147c69970();
            if (((cVar2 != '\0') && ((*(byte *)(*(longlong *)(param_1 + 0xc0) + 0x154) & 0x40) == 0)
                ) && (*(int *)(*(longlong *)(param_1 + 0xc0) + 0x15c) == 0)) {
              cVar6 = '\x01';
            }
          }
        }
      }
      else {
        if (cVar6 == '\x03') {
          *(byte *)(param_1 + 0x242) = *(byte *)(param_1 + 0x242) | 0x10;
          *(undefined1 *)(param_1 + 0x290) = 0;
          break;
        }
        if (cVar6 != '\x01') goto LAB_14032a716;
        puVar5 = &local_48;
        if (param_3 != (undefined8 *)0x0) {
          puVar5 = param_3;
        }
        cVar2 = FUN_147b8e4d4(param_1,puVar5);
        cVar6 = '\x02';
        if (cVar2 == '\0') goto LAB_14032a714;
      }
      *(char *)(param_1 + 0x290) = cVar6;
    } while( true );
  }
  unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),1);
LAB_14032a716:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return unaff_RBP & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_14032a714:
  unaff_RBP = 0;
  goto LAB_14032a716;
}



// FUNCTION 14032a73a FUN_14032a73a body=874 status=ok
// SIG undefined FUN_14032a73a(void)

void FUN_14032a73a(longlong param_1,char param_2)

{
  longlong lVar1;
  int iVar2;
  byte *pbVar3;
  undefined8 uVar4;
  longlong lVar5;
  DWORD DVar6;
  DWORD dwTlsIndex;
  DWORD DVar7;
  LPVOID lpTlsValue;
  longlong lVar8;
  char cVar9;
  longlong lVar10;
  bool bVar11;
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
  lVar1 = param_1 + 0x30;
  if (param_2 == '\0') {
    if ((*(byte **)(param_1 + 0x50) != (byte *)0x0) && ((**(byte **)(param_1 + 0x50) & 1) != 0)) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14cb0c040) && (FUN_144b3d300(&DAT_14cb0c040), DAT_14cb0c040 == -1))
      {
        FUN_145e17f72(&DAT_14cb0bff0);
        atexit(FUN_14374ca90);
        _Init_thread_footer(&DAT_14cb0c040);
      }
      FUN_1402eb48e(*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x28),lVar1);
      **(byte **)(param_1 + 0x50) = **(byte **)(param_1 + 0x50) & 0xfe;
    }
  }
  else if ((*(byte *)(param_1 + 0x3a) & 2) != 0) {
    *(longlong *)(param_1 + 0x58) = param_1;
    if ((*(byte *)(param_1 + 0x3a) & 4) == 0) {
      bVar11 = *(char *)(param_1 + 0x3b) != '\0';
    }
    else {
      bVar11 = true;
    }
    pbVar3 = *(byte **)(param_1 + 0x50);
    if ((pbVar3 == (byte *)0x0) || ((*pbVar3 & 1) == 0)) {
      *(bool *)(param_1 + 0x3b) = bVar11;
    }
    else {
      cVar9 = *(char *)(param_1 + 0x3b);
      if (bVar11 != (cVar9 != '\0')) {
        uVar4 = *(undefined8 *)(pbVar3 + 0x28);
        FUN_1402eb48e(uVar4,lVar1);
        *(bool *)(param_1 + 0x3b) = bVar11;
        FUN_1402eb97e(uVar4,lVar1);
        cVar9 = *(char *)(param_1 + 0x3b);
      }
      if (cVar9 == '\0') {
        *(undefined4 *)(*(longlong *)(param_1 + 0x50) + 0x24) = 0xbf800000;
      }
    }
    if (DAT_14cae8b20 == 0) {
      local_50 = &local_30;
      local_30 = (code *)&LAB_14355090c;
      local_40 = FUN_14081d0ea;
      local_48 = FUN_14081d0ea;
      local_58 = &LAB_147b8e16d;
      local_60 = (code *)&LAB_140810a38;
      local_68 = L"Engine";
      local_70 = 0x800000000;
      local_78 = 0x10000000;
      local_80 = 8;
      local_88 = 0x3f0;
      FUN_14081cfa3(L"/Script/Engine",L"Level",&DAT_14cae8b20,&DAT_147b8e16c);
    }
    lVar5 = DAT_14cae8b20;
    if (DAT_14c951858 == 0) {
      local_50 = &local_30;
      local_30 = FUN_1449e2820;
      local_40 = FUN_14081d0ea;
      local_48 = FUN_14081d0ea;
      local_58 = &LAB_1468c5283;
      local_60 = FUN_142809da0;
      local_68 = L"Engine";
      local_70 = 0x400000000;
      local_78 = 0x10000000;
      local_80 = 8;
      local_88 = 0x50;
      FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
    }
    lVar8 = *(longlong *)(param_1 + 0x20);
    if (lVar8 == 0) {
      lVar10 = 0;
    }
    else {
      iVar2 = *(int *)(lVar5 + 0x38);
      do {
        if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x38) < iVar2) ||
           (lVar10 = lVar8,
           *(longlong *)(*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) + (longlong)iVar2 * 8) !=
           lVar5 + 0x30)) {
          lVar10 = 0;
        }
      } while ((lVar10 == 0) && (lVar8 = *(longlong *)(lVar8 + 0x20), lVar8 != 0));
    }
    FUN_1402eb876(lVar1,lVar10);
  }
  dwTlsIndex = DAT_14c761240;
  if (DAT_14c761240 == 0xffffffff) {
    dwTlsIndex = TlsAlloc();
    DVar7 = 0xffffffff;
    LOCK();
    bVar11 = DAT_14c761240 != 0xffffffff;
    DVar6 = dwTlsIndex;
    if (bVar11) {
      DVar7 = DAT_14c761240;
      DVar6 = DAT_14c761240;
    }
    DAT_14c761240 = DVar6;
    UNLOCK();
    if (bVar11) {
      TlsFree(dwTlsIndex);
      dwTlsIndex = DVar7;
    }
  }
  lpTlsValue = TlsGetValue(dwTlsIndex);
  if (lpTlsValue == (LPVOID)0x0) {
    lpTlsValue = (LPVOID)FUN_1456fd748();
    FUN_140fddf04(lpTlsValue);
    TlsSetValue(dwTlsIndex,lpTlsValue);
  }
  *(longlong *)((longlong)lpTlsValue + 0x10) = param_1;
  if ((local_28 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14032aaa6 FUN_14032aaa6 body=25 status=ok
// SIG undefined FUN_14032aaa6(void)

undefined8 FUN_14032aaa6(longlong param_1)

{
  (**(code **)(param_1 + 0x20))((longlong)*(int *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14032aac0 FUN_14032aac0 body=50 status=ok
// SIG undefined FUN_14032aac0(void)

void FUN_14032aac0(longlong *param_1,char param_2)

{
  FUN_14032aaf4();
  if (param_2 != '\0') {
    FUN_14032abc4(param_1,1);
  }
  *(undefined1 *)(param_1 + 0xf) = 1;
                    /* WARNING: Could not recover jumptable at 0x00014032aaee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x30))(param_1);
  return;
}



// FUNCTION 14032aaf4 FUN_14032aaf4 body=207 status=ok
// SIG undefined FUN_14032aaf4(void)

void FUN_14032aaf4(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x10);
  FUN_14032ae96(lVar2 + 0x10);
  plVar3 = *(longlong **)(lVar2 + 0x50);
  *(undefined8 *)(lVar2 + 0x48) = 0;
  *(undefined8 *)(lVar2 + 0x50) = 0;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  *(undefined8 *)(lVar2 + 0x58) = 0xffffffffffffffff;
  lVar2 = *(longlong *)(param_1 + 0x18);
  *(undefined4 *)(lVar2 + 0x108) = 0;
  if (*(int *)(lVar2 + 0x10c) != 0x20) {
    FUN_1469333d8(lVar2,0x20);
  }
  lVar2 = *(longlong *)(param_1 + 0x20);
  *(undefined4 *)(lVar2 + 0x108) = 0;
  if (*(int *)(lVar2 + 0x10c) != 0x20) {
    FUN_1469333d8(lVar2,0x20);
  }
  *(undefined1 *)(lVar2 + 0x118) = 0;
  lVar2 = *(longlong *)(param_1 + 0x28);
  *(undefined4 *)(lVar2 + 0x328) = 0;
  if (*(int *)(lVar2 + 0x32c) != 100) {
    FUN_1469334ce(lVar2,100);
  }
  *(undefined1 *)(lVar2 + 0x33c) = 0;
  FUN_140163244(*(undefined8 *)(param_1 + 0x50),0x80);
  *(undefined1 *)(param_1 + 0x78) = 1;
  return;
}



// FUNCTION 14032abc4 FUN_14032abc4 body=567 status=ok
// SIG undefined FUN_14032abc4(void)

void FUN_14032abc4(longlong param_1,char param_2)

{
  int *piVar1;
  ushort uVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  
  lVar10 = *(longlong *)(param_1 + 0x10);
  iVar9 = *(int *)(lVar10 + 0x58);
  if (iVar9 != -1) {
    lVar13 = *(longlong *)(lVar10 + 0x10);
    do {
      lVar14 = (longlong)iVar9 * 0x40;
      uVar3 = *(uint *)(lVar13 + 0x18 + lVar14);
      uVar2 = *(ushort *)(lVar13 + 0xc + lVar14);
      if ((int)(uint)uVar2 < (int)uVar3) {
        lVar11 = (ulonglong)uVar3 - (ulonglong)uVar2;
        lVar12 = (ulonglong)uVar2 * 0x18;
        do {
          lVar8 = DAT_14c979c60;
          uVar7 = DAT_14c979c58;
          lVar5 = *(longlong *)(*(longlong *)(lVar13 + lVar14 + 0x10) + lVar12);
          if (lVar5 != 0) {
            if (DAT_14c979c60 != 0) {
              LOCK();
              *(int *)(DAT_14c979c60 + 0xc) = *(int *)(DAT_14c979c60 + 0xc) + 1;
              UNLOCK();
            }
            plVar4 = *(longlong **)(lVar5 + 0x150);
            *(undefined8 *)(lVar5 + 0x148) = uVar7;
            *(longlong *)(lVar5 + 0x150) = lVar8;
            if (plVar4 != (longlong *)0x0) {
              LOCK();
              piVar1 = (int *)((longlong)plVar4 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar4 + 0x10))();
              }
            }
            uVar6 = DAT_14c967f78;
            if (param_2 != '\0') {
              *(undefined8 *)(lVar5 + 0x18) = 0;
              *(undefined4 *)(lVar5 + 0x20) = 0xffffffff;
              *(undefined4 *)(lVar5 + 0x28) = uVar6;
              *(undefined4 *)(lVar5 + 0x2c) = 0;
            }
          }
          lVar12 = lVar12 + 0x18;
          lVar11 = lVar11 + -1;
        } while (lVar11 != 0);
        lVar13 = *(longlong *)(lVar10 + 0x10);
      }
      iVar9 = *(int *)(lVar13 + 4 + lVar14);
    } while (iVar9 != -1);
    lVar10 = *(longlong *)(param_1 + 0x10);
  }
  FUN_14032ae96(lVar10 + 0x10);
  plVar4 = *(longlong **)(lVar10 + 0x50);
  *(undefined8 *)(lVar10 + 0x48) = 0;
  *(undefined8 *)(lVar10 + 0x50) = 0;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  *(undefined8 *)(lVar10 + 0x58) = 0xffffffffffffffff;
  lVar10 = *(longlong *)(param_1 + 0x18);
  *(undefined4 *)(lVar10 + 0x108) = 0;
  if (*(int *)(lVar10 + 0x10c) != 0x20) {
    FUN_1469333d8(lVar10,0x20);
  }
  lVar10 = *(longlong *)(param_1 + 0x20);
  *(undefined4 *)(lVar10 + 0x108) = 0;
  if (*(int *)(lVar10 + 0x10c) != 0x20) {
    FUN_1469333d8(lVar10,0x20);
  }
  *(undefined1 *)(lVar10 + 0x118) = 0;
  lVar10 = *(longlong *)(param_1 + 0x28);
  *(undefined4 *)(lVar10 + 0x328) = 0;
  if (*(int *)(lVar10 + 0x32c) != 100) {
    FUN_1469334ce(lVar10,100);
  }
  *(undefined1 *)(lVar10 + 0x33c) = 0;
  lVar10 = *(longlong *)(param_1 + 0x10);
  FUN_14032afc0(lVar10 + 0x10,0);
  plVar4 = *(longlong **)(lVar10 + 0x50);
  *(undefined8 *)(lVar10 + 0x48) = 0;
  *(undefined8 *)(lVar10 + 0x50) = 0;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  *(undefined8 *)(lVar10 + 0x58) = 0xffffffffffffffff;
  FUN_14032adfc(*(undefined8 *)(param_1 + 0x48));
  *(undefined4 *)(param_1 + 0x38) = 0;
  if (*(int *)(param_1 + 0x3c) == 0) {
    return;
  }
  FUN_146934f1c(param_1 + 0x30,0);
  return;
}



// FUNCTION 14032adfc FUN_14032adfc body=154 status=ok
// SIG undefined FUN_14032adfc(void)

void FUN_14032adfc(longlong param_1)

{
  FUN_1402bc9e4(*(undefined8 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x40));
  *(undefined4 *)(param_1 + 0x40) = 0;
  if (*(int *)(param_1 + 0x44) != 0) {
    FUN_14696abf2(param_1 + 0x38,0);
  }
  FUN_1402bca32(param_1,0);
  FUN_1402bc997(*(undefined8 *)(param_1 + 0x1e8),*(undefined4 *)(param_1 + 0x1f0));
  *(undefined4 *)(param_1 + 0x1f0) = 0;
  if (*(int *)(param_1 + 500) != 0) {
    FUN_14696ac52(param_1 + 0x1e8,0);
  }
  *(undefined4 *)(param_1 + 0x1e0) = 0;
  if (*(int *)(param_1 + 0x1e4) != 0) {
    FUN_141075230(param_1 + 0x48,0);
    return;
  }
  return;
}



// FUNCTION 14032ae96 FUN_14032ae96 body=296 status=ok
// SIG undefined FUN_14032ae96(void)

void FUN_14032ae96(longlong *param_1)

{
  undefined1 auStack_88 [40];
  longlong *local_60;
  undefined8 local_58;
  longlong *local_50;
  uint local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  longlong *local_30;
  uint local_28;
  int iStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_30 = param_1 + 2;
  local_38 = 0x100000000;
  local_28 = 0xffffffff;
  iStack_24 = 0;
  local_20 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_38);
  }
  local_58 = local_38;
  local_50 = local_30;
  local_48 = local_28;
  iStack_44 = iStack_24;
  local_40 = local_20;
  local_3c = local_1c;
  local_60 = param_1;
  if (iStack_24 < (int)local_30[3]) {
    do {
      FUN_1469323e4((longlong)iStack_44 * 0x40 + *local_60);
      local_48 = local_48 & ~local_58._4_4_;
      FUN_1449c0562(&local_58);
    } while (iStack_44 < (int)local_50[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    FUN_140b7ce44(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((local_18 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14032afc0 FUN_14032afc0 body=375 status=ok
// SIG undefined FUN_14032afc0(void)

void FUN_14032afc0(longlong *param_1,int param_2)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
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
      FUN_1469323e4((longlong)iStack_54 * 0x40 + *local_70);
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_140b7ce44(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar3 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar3) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar2 = 0x80;
    if (0x80 < (int)uVar3) {
      uVar2 = uVar3;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar2;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14032b138 FUN_14032b138 body=761 status=ok
// SIG undefined FUN_14032b138(void)

void FUN_14032b138(double *param_1,longlong *param_2)

{
  ushort *puVar1;
  byte bVar2;
  ulonglong *puVar3;
  bool bVar4;
  bool bVar5;
  double dVar6;
  undefined1 auStack_68 [41];
  char local_3f;
  ushort local_3e;
  ushort local_3c;
  ushort local_3a;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  bVar2 = *(byte *)(param_2 + 5);
  bVar5 = false;
  local_3a = 0;
  local_3c = 0;
  local_3e = 0;
  bVar4 = false;
  local_3f = false;
  if ((bVar2 & 1) == 0) {
    dVar6 = (*param_1 * 65536.0) / 360.0;
    local_3a = (ushort)((ulonglong)(longlong)ROUND(dVar6 + dVar6 + 0.5) >> 1);
    dVar6 = (param_1[1] * 65536.0) / 360.0;
    local_3c = (ushort)((ulonglong)(longlong)ROUND(dVar6 + dVar6 + 0.5) >> 1);
    dVar6 = (param_1[2] * 65536.0) / 360.0;
    local_3e = (ushort)((ulonglong)(longlong)ROUND(dVar6 + dVar6 + 0.5) >> 1);
    local_3f = local_3a != 0;
    bVar4 = local_3c != 0;
    bVar5 = local_3e != 0;
  }
  (**(code **)(*param_2 + 0x178))(param_2,&local_3f,1);
  if (local_3f == '\0') {
    local_3a = 0;
  }
  else {
    puVar3 = (ulonglong *)param_2[1];
    puVar1 = (ushort *)*puVar3 + 1;
    if ((ushort *)puVar3[1] < puVar1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_3a,2);
      }
      else {
        thunk_FUN_1457251a8(param_2,&local_3a);
      }
    }
    else {
      local_3a = *(ushort *)*puVar3;
      *puVar3 = (ulonglong)puVar1;
    }
  }
  local_3f = bVar4;
  (**(code **)(*param_2 + 0x178))(param_2,&local_3f,1);
  if (local_3f == '\0') {
    local_3c = 0;
  }
  else {
    puVar3 = (ulonglong *)param_2[1];
    puVar1 = (ushort *)*puVar3 + 1;
    if ((ushort *)puVar3[1] < puVar1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_3c,2);
      }
      else {
        thunk_FUN_1457251a8(param_2,&local_3c);
      }
    }
    else {
      local_3c = *(ushort *)*puVar3;
      *puVar3 = (ulonglong)puVar1;
    }
  }
  local_3f = bVar5;
  (**(code **)(*param_2 + 0x178))(param_2,&local_3f,1);
  if (local_3f == '\0') {
    local_3e = 0;
  }
  else {
    puVar3 = (ulonglong *)param_2[1];
    puVar1 = (ushort *)*puVar3 + 1;
    if ((ushort *)puVar3[1] < puVar1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_3e,2);
      }
      else {
        thunk_FUN_1457251a8(param_2,&local_3e);
      }
    }
    else {
      local_3e = *(ushort *)*puVar3;
      *puVar3 = (ulonglong)puVar1;
    }
  }
  if ((bVar2 & 1) != 0) {
    *param_1 = (double)local_3a * 360.0 * 1.52587890625e-05;
    param_1[1] = (double)local_3c * 360.0 * 1.52587890625e-05;
    param_1[2] = (double)local_3e * 360.0 * 1.52587890625e-05;
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14032b432 FUN_14032b432 body=154 status=ok
// SIG undefined FUN_14032b432(void)

float FUN_14032b432(longlong param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = 0.0;
  if (*(longlong **)(param_1 + 8) != (longlong *)0x0) {
    fVar1 = (float)(**(code **)(**(longlong **)(param_1 + 8) + 0x2b0))();
    fVar2 = *(float *)(param_1 + 0x1c) - *(float *)(param_1 + 0x18);
    if (*(char *)(param_1 + 0x20) == '\x01') {
      if (fVar2 <= 0.0) {
        fVar2 = fVar2 + fVar1;
      }
      else {
        fVar2 = fVar2 - fVar1;
      }
    }
    if ((1e-08 < ABS(param_2)) &&
       (fVar1 = *(float *)(*(longlong *)(param_1 + 8) + 0xb0), 1e-08 < ABS(fVar1))) {
      fVar3 = fVar2 / (fVar1 * param_2);
    }
  }
  return fVar3;
}



// FUNCTION 14032b4cc FUN_14032b4cc body=1174 status=ok
// SIG undefined FUN_14032b4cc(void)

void FUN_14032b4cc(longlong *param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  float *pfVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_d8 [32];
  float *local_b8;
  float *local_b0;
  undefined1 local_a8;
  undefined8 local_a0;
  float local_98;
  float local_94;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_94 = **(float **)(param_2 + 8);
  if ((*(char *)(param_4 + 0xcb) == '\x01') && (*(char *)(param_2 + 0x1d) == '\0')) {
    fVar3 = *(float *)(param_4 + 0xc4);
    local_94 = (float)(**(code **)(*param_1 + 0x2b0))(param_1);
    local_94 = local_94 * fVar3;
  }
  fVar3 = local_94;
  fVar7 = *(float *)(param_2 + 0x10) * *(float *)(param_1 + 0x16);
  local_98 = local_94;
  if (*(char *)(param_4 + 0xc9) == '\x01') {
    fVar8 = fVar7 * *(float *)(param_4 + 0xb8);
    *(float *)(param_4 + 0xbc) = fVar8;
    fVar7 = (float)(**(code **)(*param_1 + 0x2b0))(param_1);
    *(float *)(param_4 + 0xc0) = fVar3 / fVar7;
    if ((fVar8 != 0.0) || (NAN(fVar8))) {
      if ((*(char *)(param_2 + 0x70) == '\0') || (*(char *)(param_4 + 200) != '\x01')) {
        fVar4 = (float)(**(code **)(*param_1 + 0x2b0))(param_1);
        fVar7 = fVar8 + fVar3;
        if ((fVar7 < 0.0) || (fVar5 = fVar7, fVar6 = fVar7, fVar4 < fVar7)) {
          if (*(char *)(param_2 + 0x1c) == '\x01') {
            if (((fVar4 != 0.0) || (fVar5 = 0.0, fVar6 = 0.0, NAN(fVar4))) &&
               (fVar6 = (float)FUN_1447c7e44(fVar7,fVar4), fVar5 = fVar6, fVar6 < 0.0)) {
              fVar5 = fVar6 + fVar4;
              fVar6 = fVar6 + fVar4;
            }
          }
          else {
            if (fVar4 <= fVar7) {
              fVar7 = fVar4;
            }
            fVar5 = fVar7;
            fVar6 = fVar7;
            if (fVar7 <= 0.0) {
              fVar5 = 0.0;
              fVar6 = 0.0;
            }
          }
        }
      }
      else {
        local_a0 = *(undefined8 *)(param_2 + 0x28);
        local_a8 = *(undefined1 *)(param_2 + 0x1c);
        local_b0 = (float *)CONCAT44(local_b0._4_4_,fVar8);
        local_b8 = &local_98;
        FUN_1433e764c(param_1,*(undefined8 *)(param_2 + 0x68),param_4 + 0x78,&local_94);
        fVar3 = local_98;
        fVar5 = local_94;
        fVar6 = local_94;
      }
    }
    else {
      fVar5 = fVar3;
      fVar6 = local_94;
      if ((*(char *)(param_2 + 0x70) != '\0') && (*(char *)(param_4 + 200) == '\x01')) {
        pfVar1 = *(float **)(param_2 + 0x68);
        uVar2 = *(uint *)(param_2 + 0x1c) | 0xfffffffe;
        if (((int)*pfVar1 <= (int)uVar2) || ((int)pfVar1[2] <= (int)uVar2)) {
          local_b0 = pfVar1 + 2;
          local_b8 = pfVar1;
          (**(code **)(*param_1 + 0x380))
                    (param_1,fVar3,*(uint *)(param_2 + 0x1c),*(undefined8 *)(param_4 + 0xb0));
          fVar6 = local_94;
        }
      }
    }
    local_94 = fVar6;
    fVar7 = (float)(**(code **)(*param_1 + 0x2b0))(param_1);
    *(float *)(param_4 + 0xc4) = fVar5 / fVar7;
  }
  else {
    if (*(char *)(param_2 + 0x70) == '\x01') {
      if (((*(char *)(param_4 + 200) == '\x01') && (*(longlong *)(param_4 + 0x88) != 0)) &&
         (*(longlong *)(param_4 + 0x90) != 0)) {
        local_a0 = *(undefined8 *)(param_2 + 0x28);
        local_a8 = *(undefined1 *)(param_2 + 0x1c);
        local_b0 = (float *)CONCAT44(local_b0._4_4_,*(undefined4 *)(param_4 + 0xbc));
        local_b8 = &local_98;
        FUN_1433e77e4(param_1,*(undefined8 *)(param_2 + 0x68),param_4 + 0x78,&local_94);
        fVar8 = 0.0;
        fVar3 = local_98;
        fVar4 = local_94;
      }
      else {
        fVar8 = *(float *)(param_4 + 0xb8) * fVar7;
        fVar6 = (float)(**(code **)(*param_1 + 0x2b0))(param_1);
        fVar5 = fVar8 + fVar3;
        if ((fVar5 < 0.0) || (fVar4 = fVar5, fVar6 < fVar5)) {
          if (*(char *)(param_2 + 0x1c) == '\x01') {
            if (((fVar6 != 0.0) || (fVar4 = 0.0, NAN(fVar6))) &&
               (fVar4 = (float)FUN_1447c7e44(fVar5,fVar6), fVar4 < 0.0)) {
              fVar4 = fVar4 + fVar6;
            }
          }
          else {
            if (fVar6 <= fVar5) {
              fVar5 = fVar6;
            }
            fVar4 = fVar5;
            if (fVar5 <= 0.0) {
              fVar4 = 0.0;
            }
          }
        }
      }
    }
    else {
      fVar4 = *(float *)(param_4 + 0xc0);
      fVar3 = (float)(**(code **)(*param_1 + 0x2b0))(param_1);
      fVar3 = fVar3 * fVar4;
      fVar4 = *(float *)(param_4 + 0xc4);
      fVar5 = (float)(**(code **)(*param_1 + 0x2b0))(param_1);
      fVar8 = 0.0;
      fVar4 = fVar5 * fVar4;
    }
    local_94 = fVar4;
    if (((local_94 != fVar3) || (NAN(local_94) || NAN(fVar3))) &&
       (fVar8 = local_94 - fVar3, fVar7 * fVar8 < 0.0)) {
      fVar4 = (float)(**(code **)(*param_1 + 0x2b0))(param_1);
      fVar8 = fVar4 * (float)(-(uint)(0.0 < fVar7) & 0x3f800000 |
                             ~-(uint)(0.0 < fVar7) & -(uint)(fVar7 < 0.0) & 0xbf800000) + fVar8;
    }
  }
  **(float **)(param_2 + 8) = local_94;
  pfVar1 = *(float **)(param_2 + 0x60);
  if (pfVar1 != (float *)0x0) {
    pfVar1[1] = fVar3;
    *pfVar1 = fVar8;
    *(undefined1 *)(pfVar1 + 2) = 1;
  }
  local_b8 = (float *)param_2;
  local_b0 = (float *)param_3;
  (**(code **)(*param_1 + 0x338))(param_1,param_4,fVar3,fVar8);
  if ((local_90 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14032b964 FUN_14032b964 body=366 status=ok
// SIG undefined FUN_14032b964(void)

void FUN_14032b964(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14032b9e9;
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
LAB_14032b9e9:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x68)) {
    uVar7 = uVar5 / 0x68 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x68,8);
  return;
}



// FUNCTION 14032bad2 FUN_14032bad2 body=85 status=ok
// SIG undefined FUN_14032bad2(void)

void FUN_14032bad2(longlong param_1,int param_2)

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
    FUN_14032bb28();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 14032bb28 FUN_14032bb28 body=450 status=ok
// SIG undefined FUN_14032bb28(void)

void FUN_14032bb28(undefined8 *param_1,uint param_2)

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
LAB_14032bc43:
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
LAB_14032bc80:
    *param_1 = _Dst;
    return;
  }
  _Size = uVar3 * 8;
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar4 = (uint *)*puVar1;
  if (puVar4 != (uint *)0x0) goto LAB_14032bb7e;
LAB_14032bb73:
  FUN_14472e504(puVar1);
  puVar4 = (uint *)*puVar1;
LAB_14032bb7e:
  _Dst = (void *)(*(longlong *)(puVar4 + 0x10) + 7U & 0xfffffffffffffff8);
  puVar6 = (uint *)((longlong)_Dst + _Size);
  if (puVar4 + 0x4000 < puVar6) {
    if (param_2 < 0x1ff5) goto code_r0x00014032bbaa;
    puVar4 = (uint *)FUN_14472e5b2(_Size + 0x60,8);
    *puVar4 = 0xffffffff;
    puVar4[0x12] = 0;
    _Dst = (void *)((longlong)puVar4 + 0x5fU & 0xfffffffffffffff8);
    *(uint **)(puVar4 + 0x10) = puVar4 + uVar3 * 2 + 0x18;
    *puVar4 = 1;
  }
  else {
    uVar7 = puVar4[0x12] + 1;
LAB_14032bc00:
    *(uint **)(puVar4 + 0x10) = puVar6 + 2;
    puVar4[0x12] = uVar7;
  }
  *(int *)((longlong)_Dst + -8) = ((int)_Dst + -8) - (int)puVar4;
  *(int *)((longlong)_Dst + -4) = (int)_Size;
  if (_Src == (void *)0x0) goto LAB_14032bc80;
  uVar3 = (ulonglong)*(uint *)((longlong)_Src + -4);
  if (uVar3 != 0) {
    if (uVar3 < _Size) {
      _Size = uVar3;
    }
    memcpy(_Dst,_Src,_Size);
  }
  goto LAB_14032bc43;
code_r0x00014032bbaa:
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
      goto LAB_14032bc00;
    }
  }
  goto LAB_14032bb73;
}



// FUNCTION 14032bd8c FUN_14032bd8c body=1109 status=ok
// SIG undefined FUN_14032bd8c(void)

void FUN_14032bd8c(longlong param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  longlong *plVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  ulonglong uVar18;
  undefined1 auStack_c8 [36];
  int local_a4;
  longlong local_a0;
  longlong local_98;
  longlong *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  longlong local_68;
  longlong lStack_60;
  ulonglong local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  *(undefined1 *)(param_1 + 0x1c02) = 1;
  FUN_144959ae8(param_1 + 0x1bf0);
  FUN_14032cada(*(undefined8 *)(param_1 + 0x1b30),*(undefined8 *)(param_1 + 0x10));
  FUN_14032c486(*(undefined8 *)(param_1 + 0x1c78));
  local_98 = param_1 + 0x1c0;
  lVar16 = 0;
  local_a0 = param_1;
  do {
    plVar1 = (longlong *)(local_98 + lVar16 * 0x50);
    lVar4 = local_98 + lVar16 * 0x50;
    lVar17 = lVar4 + 0x10;
    local_90 = (longlong *)&DAT_100000000;
    uStack_80 = 0xffffffff;
    local_78 = local_78 & 0xffffffff00000000;
    local_88 = lVar17;
    if (*(int *)(lVar4 + 0x28) == 0) {
      uVar18 = 1;
      local_a4 = 0;
      uStack_80._4_4_ = 0;
      uVar10 = 0;
      uVar5 = 0xffffffff;
      iVar8 = 0;
    }
    else {
      FUN_1449c0562(&local_90);
      uVar10 = (ulonglong)local_90 & 0xffffffff;
      uVar18 = (ulonglong)local_90 >> 0x20;
      local_a4 = (int)plVar1[5];
      uVar5 = (uint)uStack_80;
      iVar8 = (uint)local_78;
    }
    lVar4 = local_88;
    iVar6 = uStack_80._4_4_;
    if (uStack_80._4_4_ != local_a4 || local_88 != lVar17) {
      do {
        iVar9 = (int)uVar10;
        FUN_14032ed88(*(undefined8 *)(*plVar1 + 8 + (longlong)iVar6 * 0x20));
        uVar5 = ~(uint)uVar18 & uVar5;
        lVar15 = *(longlong *)(lVar4 + 0x10);
        if (*(longlong *)(lVar4 + 0x10) == 0) {
          lVar15 = lVar4;
        }
        iVar3 = *(int *)(lVar4 + 0x18);
        lVar13 = (longlong)iVar9;
        uVar12 = *(uint *)(lVar15 + lVar13 * 4) & uVar5;
        if (uVar12 == 0) {
          iVar6 = iVar3 + 0x1e;
          if (-1 < iVar3 + -1) {
            iVar6 = iVar3 + -1;
          }
          iVar6 = iVar6 >> 5;
          iVar8 = iVar8 + 0x20;
          iVar7 = iVar6;
          if (iVar6 < iVar9) {
            iVar7 = iVar9;
          }
          if (iVar9 < iVar6) {
            lVar14 = 0;
            do {
              uVar12 = *(uint *)(lVar15 + lVar13 * 4 + 4 + lVar14 * 4);
              if (uVar12 != 0) {
                uVar10 = (ulonglong)(iVar9 + (int)lVar14 + 1);
                uVar5 = 0xffffffff;
                goto LAB_14032bef4;
              }
              iVar8 = iVar8 + 0x20;
              lVar14 = lVar14 + 1;
            } while (iVar7 - lVar13 != lVar14);
            uVar5 = 0xffffffff;
            lVar13 = (longlong)iVar7;
          }
          uVar10 = lVar13 + 1U & 0xffffffff;
          iVar6 = iVar3;
        }
        else {
LAB_14032bef4:
          uVar18 = (ulonglong)(-uVar12 & uVar12);
          uVar2 = uVar18 * 2 + 1;
          lVar15 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar15 == 0; lVar15 = lVar15 + -1) {
            }
          }
          iVar6 = (iVar8 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
          if (iVar3 <= iVar6) {
            iVar6 = iVar3;
          }
        }
      } while ((iVar6 != local_a4) || (lVar4 != lVar17));
    }
    iVar8 = (int)plVar1[9];
    if (iVar8 < 2) {
      plVar11 = plVar1 + 7;
      if ((longlong *)plVar1[8] != (longlong *)0x0) {
        plVar11 = (longlong *)plVar1[8];
      }
      iVar6 = iVar8 + 3;
      if (-1 < iVar8) {
        iVar6 = iVar8;
      }
      if ((int)plVar1[1] - *(int *)((longlong)plVar1 + 0x34) < iVar6 >> 2) {
        local_68 = 0x100000000;
        local_58 = 0xffffffff;
        uStack_50 = 0;
        lStack_60 = lVar17;
        if ((int)plVar1[5] == 0) {
          iVar8 = 0;
        }
        else {
          FUN_1449c0562(&local_68);
          iVar8 = (int)plVar1[5];
        }
        uStack_70 = CONCAT44(uStack_4c,uStack_50);
        local_78 = local_58;
        uVar18 = local_78;
        local_88 = local_68;
        uStack_80 = lStack_60;
        local_78._4_4_ = (int)(local_58 >> 0x20);
        iVar6 = local_78._4_4_;
        local_90 = plVar1;
        if ((local_78._4_4_ != iVar8) || (local_78 = local_58, lStack_60 != lVar17)) {
          do {
            local_78 = uVar18;
            *(undefined4 *)
             ((longlong)plVar11 + (longlong)*(int *)(*local_90 + 0x1c + (longlong)iVar6 * 0x20) * 4)
                 = 0xffffffff;
            local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
            FUN_1449c0562(&local_88);
            iVar6 = local_78._4_4_;
            uVar18 = local_78;
          } while (local_90 != plVar1 || (uStack_80 != lVar17 || local_78._4_4_ != iVar8));
        }
      }
      else if (iVar8 == 1) {
        lVar4 = 0;
        do {
          *(undefined4 *)((longlong)plVar11 + lVar4 * 4) = 0xffffffff;
          lVar4 = lVar4 + 1;
        } while (lVar4 < (int)plVar1[9]);
      }
      FUN_14032c296(plVar1);
    }
    else {
      FUN_14032c296(plVar1);
      *(undefined4 *)(plVar1 + 9) = 1;
      FUN_14032d9b6(plVar1);
    }
    lVar4 = local_a0;
    lVar16 = lVar16 + 1;
    if (lVar16 == 7) {
      FUN_1456fd82e(local_a0 + 0x170);
      FUN_144846cc9(*(undefined8 *)(lVar4 + 0x3f0),*(undefined4 *)(lVar4 + 0x3f8));
      *(undefined4 *)(lVar4 + 0x3f8) = 0;
      if (*(int *)(lVar4 + 0x3fc) != 0) {
        FUN_1456d0bd2(lVar4 + 0x3f0);
      }
      FUN_144846cc9(*(undefined8 *)(lVar4 + 0x400),*(undefined4 *)(lVar4 + 0x408));
      *(undefined4 *)(lVar4 + 0x408) = 0;
      if (*(int *)(lVar4 + 0x40c) != 0) {
        FUN_1456d0bd2(lVar4 + 0x400);
      }
      FUN_14013f741(*(undefined8 *)(lVar4 + 0x1b90),*(undefined4 *)(lVar4 + 0x1b98));
      *(undefined4 *)(lVar4 + 0x1b98) = 0;
      if (*(int *)(lVar4 + 0x1b9c) != 0) {
        FUN_14013f78c(lVar4 + 0x1b90);
      }
      FUN_1456fd86e(lVar4 + 0x1ba0);
      FUN_1456fd8ae(lVar4 + 0x1c18);
      FUN_1456fd8ee(lVar4 + 0x1b40);
      if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return;
    }
  } while( true );
}



// FUNCTION 14032c1e2 FUN_14032c1e2 body=90 status=ok
// SIG undefined FUN_14032c1e2(void)

void FUN_14032c1e2(longlong param_1)

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



// FUNCTION 14032c23c FUN_14032c23c body=90 status=ok
// SIG undefined FUN_14032c23c(void)

void FUN_14032c23c(longlong param_1)

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



// FUNCTION 14032c296 FUN_14032c296 body=494 status=ok
// SIG undefined FUN_14032c296(void)

void FUN_14032c296(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
  longlong *plVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  uint uVar14;
  ulonglong uVar15;
  int iVar16;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = param_1 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = plVar1;
  if ((int)param_1[5] == 0) {
    uVar15 = 1;
    local_58._4_4_ = 0;
    uVar14 = 0xffffffff;
    iVar16 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    uVar15 = local_68 >> 0x20;
    uVar14 = (uint)local_58;
    iVar16 = (int)local_68;
  }
  plVar7 = local_60;
  iVar9 = local_58._4_4_;
  iVar12 = local_50;
  if (local_58._4_4_ < (int)local_60[3]) {
    do {
      plVar10 = *(longlong **)(*param_1 + 0x10 + (longlong)iVar9 * 0x20);
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar10 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar10)(plVar10);
          LOCK();
          piVar3 = (int *)((longlong)plVar10 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar10 + 0x10))(plVar10);
          }
        }
      }
      uVar14 = uVar14 & ~(uint)uVar15;
      plVar10 = (longlong *)plVar7[2];
      if ((longlong *)plVar7[2] == (longlong *)0x0) {
        plVar10 = plVar7;
      }
      iVar5 = (int)plVar7[3];
      lVar13 = (longlong)iVar16;
      uVar8 = *(uint *)((longlong)plVar10 + lVar13 * 4) & uVar14;
      if (uVar8 == 0) {
        iVar9 = iVar5 + 0x1e;
        if (-1 < iVar5 + -1) {
          iVar9 = iVar5 + -1;
        }
        iVar9 = iVar9 >> 5;
        iVar6 = iVar9;
        if (iVar9 < iVar16) {
          iVar6 = iVar16;
        }
        if (iVar9 <= iVar16) break;
        lVar11 = 0;
        while( true ) {
          iVar12 = iVar12 + 0x20;
          uVar8 = *(uint *)((longlong)plVar10 + lVar11 * 4 + lVar13 * 4 + 4);
          if (uVar8 != 0) break;
          lVar11 = lVar11 + 1;
          if (iVar6 - lVar13 == lVar11) goto LAB_14032c3ba;
        }
        iVar16 = iVar16 + (int)lVar11 + 1;
        uVar14 = 0xffffffff;
      }
      uVar15 = (ulonglong)(-uVar8 & uVar8);
      uVar4 = uVar15 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iVar9 = (iVar12 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    } while (iVar9 < iVar5);
  }
LAB_14032c3ba:
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
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14032c486 FUN_14032c486 body=286 status=ok
// SIG undefined FUN_14032c486(void)

void FUN_14032c486(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  longlong local_68;
  uint local_60;
  int iStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  longlong local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = (longlong *)(param_1 + 8);
  lVar2 = param_1 + 0x18;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  local_38 = 0;
  iVar3 = 0;
  local_48 = lVar2;
  if (*(int *)(param_1 + 0x30) != 0) {
    FUN_1449c0562(&local_50);
    iVar3 = *(int *)(param_1 + 0x30);
  }
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_58 = local_38;
  local_54 = local_34;
  local_70 = local_50;
  local_68 = local_48;
  local_78 = plVar1;
  if ((iStack_3c != iVar3) || (local_48 != lVar2)) {
    do {
      do {
        (**(code **)(**(longlong **)(*local_78 + 8 + (longlong)iStack_5c * 0x18) + 0x2a8))();
        local_60 = local_60 & ~local_70._4_4_;
        FUN_1449c0562(&local_70);
      } while (iStack_5c != iVar3);
    } while ((local_68 != lVar2) || (local_78 != plVar1));
  }
  FUN_14032c8ca(plVar1);
  *(undefined1 *)(param_1 + 0x58) = 1;
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14032c5a6 FUN_14032c5a6 body=351 status=ok
// SIG undefined FUN_14032c5a6(void)

void FUN_14032c5a6(longlong *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
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
      puVar2 = *(undefined8 **)(*local_68 + 8 + (longlong)iStack_4c * 0x18);
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,1);
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_144727cd0(param_1,0);
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



// FUNCTION 14032c706 FUN_14032c706 body=451 status=ok
// SIG undefined FUN_14032c706(void)

void FUN_14032c706(longlong *param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  uint uVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  int iVar14;
  undefined1 auStack_88 [40];
  ulonglong local_60;
  longlong *local_58;
  undefined8 local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = param_1 + 2;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  local_48 = 0;
  local_58 = plVar1;
  if ((int)param_1[5] == 0) {
    uVar13 = 1;
    local_50._4_4_ = 0;
    uVar12 = 0xffffffff;
    iVar14 = 0;
  }
  else {
    FUN_1449c0562(&local_60);
    uVar13 = local_60 >> 0x20;
    uVar12 = (uint)local_50;
    iVar14 = (int)local_60;
  }
  plVar5 = local_58;
  iVar7 = local_50._4_4_;
  iVar10 = local_48;
  if (local_50._4_4_ < (int)local_58[3]) {
    do {
      FUN_140439908((longlong)iVar7 * 0xf0 + *param_1 + 8);
      uVar12 = ~(uint)uVar13 & uVar12;
      plVar8 = (longlong *)plVar5[2];
      if ((longlong *)plVar5[2] == (longlong *)0x0) {
        plVar8 = plVar5;
      }
      iVar3 = (int)plVar5[3];
      lVar11 = (longlong)iVar14;
      uVar6 = *(uint *)((longlong)plVar8 + lVar11 * 4) & uVar12;
      if (uVar6 == 0) {
        iVar7 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar7 = iVar3 + -1;
        }
        iVar7 = iVar7 >> 5;
        iVar4 = iVar7;
        if (iVar7 < iVar14) {
          iVar4 = iVar14;
        }
        if (iVar7 <= iVar14) break;
        lVar9 = 0;
        while( true ) {
          iVar10 = iVar10 + 0x20;
          uVar6 = *(uint *)((longlong)plVar8 + lVar9 * 4 + lVar11 * 4 + 4);
          if (uVar6 != 0) break;
          lVar9 = lVar9 + 1;
          if (iVar4 - lVar11 == lVar9) goto LAB_14032c825;
        }
        iVar14 = iVar14 + (int)lVar9 + 1;
        uVar12 = 0xffffffff;
      }
      uVar13 = (ulonglong)(-uVar6 & uVar6);
      uVar2 = uVar13 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar7 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    } while (iVar7 < iVar3);
  }
LAB_14032c825:
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1456fdee2(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14032c8ca FUN_14032c8ca body=382 status=ok
// SIG undefined FUN_14032c8ca(void)

void FUN_14032c8ca(longlong *param_1)

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
  iVar6 = (int)param_1[9];
  if (iVar6 < 2) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
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
           ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x14 + (longlong)iVar4 * 0x18) * 4) =
               0xffffffff;
          local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
          FUN_1449c0562(&local_70);
          iVar4 = local_60._4_4_;
          uVar2 = local_60;
        } while (local_78 != param_1 ||
                 ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || local_60._4_4_ != iVar6));
      }
    }
    else if (iVar6 == 1) {
      lVar3 = 0;
      do {
        *(undefined4 *)((longlong)plVar5 + lVar3 * 4) = 0xffffffff;
        lVar3 = lVar3 + 1;
      } while (lVar3 < (int)param_1[9]);
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_98);
  }
  FUN_14032ca5e(param_1,0);
  *(undefined4 *)(param_1 + 9) = 1;
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  FUN_148124e68(param_1);
  return;
}



// FUNCTION 14032ca5e FUN_14032ca5e body=123 status=ok
// SIG undefined FUN_14032ca5e(void)

void FUN_14032ca5e(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_144727cd0(param_1,param_2);
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



// FUNCTION 14032cada FUN_14032cada body=654 status=ok
// SIG undefined FUN_14032cada(void)

void FUN_14032cada(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  int iVar16;
  int iVar17;
  undefined1 auStack_98 [32];
  longlong local_78;
  longlong local_70;
  ulonglong local_68;
  longlong lStack_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_78 = param_1 + 0x38;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_70 = param_2;
  lStack_60 = local_78;
  if (*(int *)(param_1 + 0x50) == 0) {
    uVar10 = 1;
    iVar17 = 0;
    local_58._4_4_ = 0;
    uVar12 = 0xffffffff;
    iVar8 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    uVar10 = local_68 >> 0x20;
    iVar17 = *(int *)(param_1 + 0x50);
    uVar12 = (uint)local_58;
    iVar8 = (int)local_68;
  }
  lVar13 = lStack_60;
  iVar7 = local_58._4_4_;
  iVar16 = local_50;
  if (local_58._4_4_ != iVar17 || lStack_60 != local_78) {
    do {
      puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar7 * 0x20);
      FUN_14032cd6a(&local_68,*puVar1);
      FUN_14032cdc0(puVar1 + 1);
      if ((char)local_68 == '\x01') {
        uVar6 = FUN_14811173e();
        FUN_1481117c2(uVar6);
      }
      uVar12 = uVar12 & ~(uint)uVar10;
      lVar11 = *(longlong *)(lVar13 + 0x10);
      if (*(longlong *)(lVar13 + 0x10) == 0) {
        lVar11 = lVar13;
      }
      iVar3 = *(int *)(lVar13 + 0x18);
      lVar14 = (longlong)iVar8;
      uVar9 = *(uint *)(lVar11 + lVar14 * 4) & uVar12;
      if (uVar9 == 0) {
        iVar7 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar7 = iVar3 + -1;
        }
        iVar7 = iVar7 >> 5;
        iVar16 = iVar16 + 0x20;
        iVar5 = iVar7;
        if (iVar7 < iVar8) {
          iVar5 = iVar8;
        }
        if (iVar8 < iVar7) {
          lVar15 = 0;
          do {
            uVar9 = *(uint *)(lVar11 + lVar14 * 4 + 4 + lVar15 * 4);
            if (uVar9 != 0) {
              iVar8 = iVar8 + (int)lVar15 + 1;
              uVar12 = 0xffffffff;
              goto LAB_14032cc08;
            }
            iVar16 = iVar16 + 0x20;
            lVar15 = lVar15 + 1;
          } while (iVar5 - lVar14 != lVar15);
          uVar12 = 0xffffffff;
          iVar8 = iVar5;
        }
        iVar8 = iVar8 + 1;
        iVar7 = iVar3;
      }
      else {
LAB_14032cc08:
        uVar10 = (ulonglong)(-uVar9 & uVar9);
        uVar2 = uVar10 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        iVar7 = (iVar16 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
        if (iVar3 <= iVar7) {
          iVar7 = iVar3;
        }
      }
    } while (iVar7 != iVar17 || lVar13 != local_78);
  }
  FUN_14032ce32((longlong *)(param_1 + 0x28),0);
  if (((local_70 != 0) && (*(longlong *)(local_70 + 0x30) != 0)) &&
     (lVar13 = *(longlong *)(*(longlong *)(local_70 + 0x30) + 0x2b0), lVar13 != 0)) {
    local_68 = 0;
    lStack_60 = 0;
    FUN_14032d1e2(lVar13,&local_68,0);
    uVar10 = local_68;
    lVar13 = (longlong)(int)lStack_60;
    if (lVar13 != 0) {
      lVar11 = 0;
      do {
        plVar4 = *(longlong **)(uVar10 + lVar11);
        if ((byte)((char)plVar4[0xf3] - 1U) < 2) {
          *(undefined1 *)(plVar4 + 0xf3) = 0;
          (**(code **)(*plVar4 + 0x420))(plVar4,0);
        }
        lVar11 = lVar11 + 8;
      } while (lVar13 * 8 != lVar11);
    }
    if (local_68 != 0) {
      FUN_1400020a8(local_68);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14032cd6a FUN_14032cd6a body=85 status=ok
// SIG undefined FUN_14032cd6a(void)

undefined1 * FUN_14032cd6a(undefined1 *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  
  *param_1 = 0;
  bVar3 = DAT_14cb3a5f8 != 0;
  *param_1 = bVar3;
  if (bVar3) {
    lVar1 = FUN_14811173e();
    if (param_2 == 0) {
      lVar2 = lVar1 + 0x88;
    }
    else {
      lVar2 = FUN_1481f4cc0(param_2);
    }
    FUN_148121460(lVar1,lVar2);
  }
  return param_1;
}



// FUNCTION 14032cdc0 FUN_14032cdc0 body=114 status=ok
// SIG undefined FUN_14032cdc0(void)

void FUN_14032cdc0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar4 = param_1[1];
  if ((longlong)(int)lVar4 != 0) {
    lVar1 = *param_1;
    lVar5 = 0;
    do {
      lVar2 = *(longlong *)(lVar1 + lVar5);
      if (lVar2 != 0) {
        *(undefined1 *)(lVar2 + 0x798) = 0;
        plVar3 = *(longlong **)(lVar1 + lVar5);
        (**(code **)(*plVar3 + 0x420))(plVar3,0);
      }
      lVar5 = lVar5 + 0x10;
    } while ((longlong)(int)lVar4 * 0x10 != lVar5);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_141823496(param_1,0);
    return;
  }
  return;
}



// FUNCTION 14032ce32 FUN_14032ce32 body=107 status=ok
// SIG undefined FUN_14032ce32(void)

void FUN_14032ce32(longlong param_1,uint param_2)

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
LAB_14032ce81:
      FUN_14032cfe6(param_1,param_2);
      *(int *)(param_1 + 0x48) = iVar3;
      FUN_140b31d64(param_1);
      return;
    }
  }
  else if (*(int *)(param_1 + 0x48) != iVar3) goto LAB_14032ce81;
  FUN_14032ce9e(param_1);
  FUN_14032cfe6(param_1,param_2);
  return;
}



// FUNCTION 14032ce9e FUN_14032ce9e body=327 status=ok
// SIG undefined FUN_14032ce9e(void)

void FUN_14032ce9e(longlong *param_1)

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



// FUNCTION 14032cfe6 FUN_14032cfe6 body=506 status=ok
// SIG undefined FUN_14032cfe6(void)

void FUN_14032cfe6(longlong *param_1,int param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  int iVar14;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = param_1 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = plVar1;
  if ((int)param_1[5] == 0) {
    uVar13 = 1;
    local_58._4_4_ = 0;
    uVar12 = 0xffffffff;
    iVar14 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    uVar13 = local_68 >> 0x20;
    uVar12 = (uint)local_58;
    iVar14 = (int)local_68;
  }
  plVar4 = local_60;
  iVar5 = (int)local_60[3];
  iVar7 = local_58._4_4_;
  iVar10 = local_50;
  if (local_58._4_4_ < iVar5) {
    do {
      if (*(longlong *)(*param_1 + 8 + (longlong)iVar7 * 0x20) != 0) {
        FUN_1400020a8();
        iVar5 = (int)plVar4[3];
      }
      uVar12 = uVar12 & ~(uint)uVar13;
      plVar8 = (longlong *)plVar4[2];
      if ((longlong *)plVar4[2] == (longlong *)0x0) {
        plVar8 = plVar4;
      }
      lVar11 = (longlong)iVar14;
      uVar6 = *(uint *)((longlong)plVar8 + lVar11 * 4) & uVar12;
      if (uVar6 == 0) {
        iVar7 = iVar5 + 0x1e;
        if (-1 < iVar5 + -1) {
          iVar7 = iVar5 + -1;
        }
        iVar7 = iVar7 >> 5;
        iVar3 = iVar7;
        if (iVar7 < iVar14) {
          iVar3 = iVar14;
        }
        if (iVar7 <= iVar14) break;
        lVar9 = 0;
        while( true ) {
          iVar10 = iVar10 + 0x20;
          uVar6 = *(uint *)((longlong)plVar8 + lVar9 * 4 + lVar11 * 4 + 4);
          if (uVar6 != 0) break;
          lVar9 = lVar9 + 1;
          if (iVar3 - lVar11 == lVar9) goto LAB_14032d106;
        }
        iVar14 = iVar14 + (int)lVar9 + 1;
        uVar12 = 0xffffffff;
      }
      uVar13 = (ulonglong)(-uVar6 & uVar6);
      uVar2 = uVar13 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar7 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    } while (iVar7 < iVar5);
  }
LAB_14032d106:
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
    uVar6 = 0x80;
    if (0x80 < (int)uVar12) {
      uVar6 = uVar12;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar6;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14032d1e2 FUN_14032d1e2 body=330 status=ok
// SIG undefined FUN_14032d1e2(void)

void FUN_14032d1e2(undefined8 param_1,longlong param_2,undefined4 param_3)

{
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  wchar_t *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  code **local_50;
  undefined1 *local_48;
  code *local_40;
  longlong local_30;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *(undefined4 *)(param_2 + 8) = 0;
  if (*(int *)(param_2 + 0xc) < 0) {
    FUN_148122f88(param_2,0);
  }
  if (DAT_14cb39ca0 == 0) {
    local_50 = &local_28;
    local_28 = FUN_144a7958c;
    local_40 = FUN_14081d0ea;
    local_48 = &LAB_14638c6c0;
    local_58 = &LAB_14811044c;
    local_60 = &LAB_1407f5cf8;
    local_68 = L"Engine";
    local_70 = 0;
    local_78 = 0x10000004;
    local_80 = 0x10;
    local_88 = 0x8e0;
    FUN_14081cfa3(L"/Script/Niagara",L"NiagaraComponent",&DAT_14cb39ca0,FUN_14646d392);
  }
  local_30 = DAT_14cb39ca0;
  if ((DAT_14cb39ca0 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  FUN_14032d32e(param_1,&local_30,param_3,param_2);
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14032d32e FUN_14032d32e body=719 status=ok
// SIG undefined FUN_14032d32e(void)

void FUN_14032d32e(undefined8 param_1,longlong *param_2,char param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  wchar_t *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  code **local_70;
  code *local_68;
  code *local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  code *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar2 = *param_2;
  if (lVar2 == 0) {
    if (DAT_14cad00c8 == 0) {
LAB_14032d4b7:
      local_70 = &local_38;
      local_38 = FUN_144a7958c;
      local_60 = FUN_14081d0ea;
      local_68 = FUN_14081d0ea;
      local_78 = &LAB_1479b7a0c;
      local_80 = &LAB_1463b464e;
      local_88 = L"Engine";
      local_90 = 0;
      local_98 = 0x10000005;
      local_a0 = 8;
      local_a8 = 0x110;
      FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8,FUN_1463b462c);
      lVar2 = 0;
    }
    else {
      lVar2 = 0;
    }
LAB_14032d399:
    lVar1 = *param_2;
    if (lVar2 == DAT_14cad00c8) {
      if (param_3 == '\0') {
        local_48 = lVar1;
        if ((lVar1 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
        }
        FUN_148123258(param_1,&local_48,param_4);
      }
      else {
        local_40 = lVar1;
        if ((lVar1 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
        }
        FUN_148122fe8(param_1,&local_40,param_4);
      }
      goto LAB_14032d3d7;
    }
  }
  else {
    if (DAT_14cad00c8 == 0) {
      local_70 = &local_38;
      local_38 = FUN_144a7958c;
      local_60 = FUN_14081d0ea;
      local_68 = FUN_14081d0ea;
      local_78 = &LAB_1479b7a0c;
      local_80 = &LAB_1463b464e;
      local_88 = L"Engine";
      local_90 = 0;
      local_98 = 0x10000005;
      local_a0 = 8;
      local_a8 = 0x110;
      FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8,FUN_1463b462c);
      if (DAT_14cad00c8 == 0) goto LAB_14032d4b7;
    }
    if ((*(int *)(DAT_14cad00c8 + 0x38) <= *(int *)(lVar2 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(DAT_14cad00c8 + 0x38) * 8) ==
        DAT_14cad00c8 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_14032d399;
    }
    lVar1 = *param_2;
  }
  if (param_3 == '\0') {
    local_58 = lVar1;
    if ((lVar1 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    FUN_14032d5fe(param_1,&local_58,param_4);
  }
  else {
    local_50 = lVar1;
    if ((lVar1 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    FUN_148123392(param_1,&local_50,param_4);
  }
LAB_14032d3d7:
  if ((local_30 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14032d5fe FUN_14032d5fe body=950 status=ok
// SIG undefined FUN_14032d5fe(void)

void FUN_14032d5fe(longlong param_1,longlong *param_2,longlong *param_3)

{
  ulonglong uVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  wchar_t *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  code **local_a0;
  code *local_98;
  code *local_90;
  int local_84;
  longlong local_80;
  longlong *local_78;
  longlong local_70;
  code *local_68;
  longlong local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_80 = param_1 + 0x250;
  local_68 = (code *)0x100000000;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_70 = param_1;
  local_60 = local_80;
  if (*(int *)(param_1 + 0x268) == 0) {
    uVar10 = 1;
    iVar8 = 0;
    local_58._4_4_ = 0;
    uVar7 = 0xffffffff;
    iVar5 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    uVar10 = (ulonglong)local_68 >> 0x20;
    iVar8 = *(int *)(local_70 + 0x268);
    uVar7 = (uint)local_58;
    iVar5 = (int)local_68;
  }
  lVar3 = local_60;
  lVar13 = local_80;
  iVar4 = local_58._4_4_;
  iVar14 = local_50;
  if (local_58._4_4_ != iVar8 || local_60 != local_80) {
    do {
      local_84 = iVar8;
      lVar12 = *(longlong *)(*(longlong *)(local_70 + 0x240) + (longlong)iVar4 * 0x10);
      if (lVar12 != 0) {
        lVar9 = *param_2;
        if ((lVar9 != 0 & DAT_14c950c29) == 1) {
          local_78 = param_2;
          FUN_1456cec3c(lVar9);
          lVar13 = local_80;
          param_2 = local_78;
LAB_14032d6ef:
          if (DAT_14cad00c8 == 0) {
            local_68 = FUN_144a7958c;
            local_90 = FUN_14081d0ea;
            local_98 = FUN_14081d0ea;
            local_a0 = &local_68;
            local_a8 = &LAB_1479b7a0c;
            local_b0 = &LAB_1463b464e;
            local_b8 = L"Engine";
            local_c0 = 0;
            local_c8 = 0x10000005;
            local_d0 = 8;
            local_d8 = 0x110;
            local_78 = param_2;
            FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8,FUN_1463b462c);
            lVar13 = local_80;
            param_2 = local_78;
            if (DAT_14cad00c8 == 0) goto LAB_14032d95e;
          }
          if (*(int *)(lVar9 + 0x38) < *(int *)(DAT_14cad00c8 + 0x38)) goto LAB_14032d95e;
          if (*(longlong *)
               (*(longlong *)(lVar9 + 0x30) + (longlong)*(int *)(DAT_14cad00c8 + 0x38) * 8) !=
              DAT_14cad00c8 + 0x30) {
            lVar9 = 0;
          }
        }
        else {
          if (lVar9 != 0) goto LAB_14032d6ef;
LAB_14032d95e:
          lVar9 = 0;
        }
        if ((*(int *)(lVar9 + 0x38) <= *(int *)(*(longlong *)(lVar12 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar9 + 0x38) * 8) == lVar9 + 0x30)) {
          iVar8 = (int)param_3[1];
          *(uint *)(param_3 + 1) = iVar8 + 1U;
          if (*(uint *)((longlong)param_3 + 0xc) < iVar8 + 1U) {
            local_78 = param_2;
            FUN_1456fde5c(param_3,iVar8);
            lVar13 = local_80;
            param_2 = local_78;
          }
          *(longlong *)(*param_3 + (longlong)iVar8 * 8) = lVar12;
        }
      }
      uVar7 = uVar7 & ~(uint)uVar10;
      lVar12 = *(longlong *)(lVar3 + 0x10);
      if (*(longlong *)(lVar3 + 0x10) == 0) {
        lVar12 = lVar3;
      }
      iVar8 = *(int *)(lVar3 + 0x18);
      lVar9 = (longlong)iVar5;
      uVar6 = *(uint *)(lVar12 + lVar9 * 4) & uVar7;
      if (uVar6 == 0) {
        iVar4 = iVar8 + 0x1e;
        if (-1 < iVar8 + -1) {
          iVar4 = iVar8 + -1;
        }
        iVar4 = iVar4 >> 5;
        iVar14 = iVar14 + 0x20;
        iVar2 = iVar4;
        if (iVar4 < iVar5) {
          iVar2 = iVar5;
        }
        lVar13 = local_80;
        if (iVar5 < iVar4) {
          lVar11 = 0;
          do {
            uVar6 = *(uint *)(lVar12 + lVar9 * 4 + 4 + lVar11 * 4);
            if (uVar6 != 0) {
              iVar5 = iVar5 + (int)lVar11 + 1;
              uVar7 = 0xffffffff;
              goto LAB_14032d7cf;
            }
            iVar14 = iVar14 + 0x20;
            lVar11 = lVar11 + 1;
          } while (iVar2 - lVar9 != lVar11);
          uVar7 = 0xffffffff;
          iVar5 = iVar2;
        }
        iVar5 = iVar5 + 1;
        iVar4 = iVar8;
      }
      else {
LAB_14032d7cf:
        uVar10 = (ulonglong)(-uVar6 & uVar6);
        uVar1 = uVar10 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        iVar4 = (iVar14 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
        if (iVar8 <= iVar4) {
          iVar4 = iVar8;
        }
      }
      iVar8 = local_84;
    } while (iVar4 != local_84 || lVar3 != lVar13);
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14032d9b6 FUN_14032d9b6 body=670 status=ok
// SIG undefined FUN_14032d9b6(void)

void FUN_14032d9b6(longlong *param_1)

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
  int iVar12;
  longlong lVar13;
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
    if ((int)uVar7 < 1) goto LAB_14032da29;
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
LAB_14032da29:
  iVar14 = (int)param_1[5];
  if (iVar14 == 0) {
    uVar3 = 0;
    uVar11 = 1;
    iVar12 = 0;
    iVar4 = 0;
  }
  else {
    puVar10 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar10 = (uint *)(param_1 + 2);
    }
    uVar7 = *puVar10;
    if (uVar7 == 0) {
      iVar12 = iVar14 + 0x1e;
      if (-1 < iVar14 + -1) {
        iVar12 = iVar14 + -1;
      }
      uVar3 = 0;
      uVar11 = (ulonglong)(uint)(iVar12 >> 5);
      if (iVar12 >> 5 < 1) {
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
    iVar12 = (iVar4 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    if (iVar14 <= iVar12) {
      iVar12 = iVar14;
    }
  }
  if (iVar12 < iVar14) {
    uVar7 = 0xffffffff;
    do {
      lVar6 = *param_1;
      lVar13 = (longlong)iVar12 * 0x20;
      uVar2 = ((uint)(*(ulonglong *)(lVar6 + lVar13) >> 0x14) & 0xffff ^
              (uint)(*(ulonglong *)(lVar6 + lVar13) >> 4)) * -0x7a143595;
      uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
      uVar15 = (longlong)(int)(uVar2 >> 0x10 ^ uVar2) & (longlong)(int)param_1[9] - 1U;
      iVar14 = (int)uVar15;
      *(int *)(lVar6 + 0x1c + lVar13) = iVar14;
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(undefined4 *)(lVar6 + 0x18 + lVar13) =
           *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar15) * 4);
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(int *)((longlong)plVar5 + ((longlong)iVar14 & (longlong)(int)param_1[9] - 1U) * 4) = iVar12;
      uVar7 = ~(uint)uVar11 & uVar7;
      puVar10 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar10 = (uint *)(param_1 + 2);
      }
      iVar14 = (int)param_1[5];
      iVar12 = (int)uVar3;
      lVar6 = (longlong)iVar12;
      uVar2 = puVar10[lVar6] & uVar7;
      if (uVar2 == 0) {
        iVar8 = iVar14 + 0x1e;
        if (-1 < iVar14 + -1) {
          iVar8 = iVar14 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar9 = iVar8;
        if (iVar8 < iVar12) {
          iVar9 = iVar12;
        }
        if (iVar8 <= iVar12) {
          return;
        }
        lVar13 = 0;
        while( true ) {
          iVar4 = iVar4 + 0x20;
          uVar2 = puVar10[lVar6 + lVar13 + 1];
          if (uVar2 != 0) break;
          lVar13 = lVar13 + 1;
          if (iVar9 - lVar6 == lVar13) {
            return;
          }
        }
        uVar3 = (ulonglong)(iVar12 + (int)lVar13 + 1);
        uVar7 = 0xffffffff;
      }
      uVar11 = (ulonglong)(-uVar2 & uVar2);
      uVar15 = uVar11 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar15 != 0) {
        for (; uVar15 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar12 = (iVar4 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    } while (iVar12 < iVar14);
  }
  return;
}



// FUNCTION 14032dc54 FUN_14032dc54 body=146 status=ok
// SIG undefined FUN_14032dc54(void)

longlong FUN_14032dc54(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_14032dd98();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  lVar1 = (**(code **)(*param_1 + 0x18))(param_1,&local_18);
  if (lVar1 != 0) {
    lVar2 = FUN_14032dd98();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) goto LAB_14032dc98;
  }
  lVar1 = 0;
LAB_14032dc98:
  if ((local_10 ^ (ulonglong)auStack_38) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar1;
}



// FUNCTION 14032dce8 FUN_14032dce8 body=175 status=ok
// SIG undefined FUN_14032dce8(void)

longlong FUN_14032dce8(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (0 < *(int *)(param_1 + 0x48)) {
    lVar4 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x40) + lVar4 * 8);
      if (lVar1 != 0) {
        lVar3 = *param_2;
        if ((lVar3 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar3);
LAB_14032dd38:
          lVar2 = FUN_144ae113c();
          if (((lVar2 == 0) || (*(int *)(lVar3 + 0x38) < *(int *)(lVar2 + 0x38))) ||
             (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
              lVar2 + 0x30)) goto LAB_14032dd4c;
        }
        else {
          if (lVar3 != 0) goto LAB_14032dd38;
LAB_14032dd4c:
          lVar3 = 0;
        }
        if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) {
          return lVar1;
        }
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < *(int *)(param_1 + 0x48));
  }
  return 0;
}



// FUNCTION 14032dd98 FUN_14032dd98 body=228 status=ok
// SIG undefined FUN_14032dd98(void)

longlong FUN_14032dd98(void)

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
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb0a9b0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14640678a;
    local_38 = &LAB_147d659b7;
    local_40 = FUN_14640678f;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/Engine",L"TextureAllMipDataProviderFactory",&DAT_14cb0a9b0,
                  &DAT_147d659b6);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb0a9b0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14032de7e FUN_14032de7e body=1608 status=ok
// SIG undefined FUN_14032de7e(void)

void FUN_14032de7e(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  bool bVar11;
  
  lVar10 = *(longlong *)(param_2 + 0x20);
  plVar3 = *(longlong **)(param_2 + 0x28);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  FUN_14012d1c4(param_1,0);
  FUN_14012d1c4(lVar10,0);
  if (*(char *)(param_2 + 8) == '\x04') {
    bVar5 = true;
    FUN_144962b46(param_1[0x22],*(undefined8 *)(lVar10 + 0x110),*(undefined4 *)(param_2 + 0x18),1);
    FUN_14033705c(lVar10,param_2);
    plVar9 = (longlong *)param_1[1];
    if (plVar9 == (longlong *)0x0) {
LAB_14032e274:
      uVar8 = 0;
      plVar9 = (longlong *)0x0;
    }
    else {
      iVar7 = (int)plVar9[1];
      do {
        if (iVar7 == 0) goto LAB_14032e274;
        LOCK();
        iVar6 = (int)plVar9[1];
        bVar11 = iVar7 == iVar6;
        if (bVar11) {
          *(int *)(plVar9 + 1) = iVar7 + 1;
          iVar6 = iVar7;
        }
        iVar7 = iVar6;
        UNLOCK();
      } while (!bVar11);
      uVar8 = *param_1;
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
      bVar5 = false;
    }
    *(undefined8 *)(param_2 + 0x20) = uVar8;
    plVar4 = *(longlong **)(param_2 + 0x28);
    if (plVar9 == plVar4) {
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        plVar4 = plVar9 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar2 = (int *)((longlong)plVar9 + 0xc);
          *piVar2 = *piVar2 + -1;
          iVar7 = *piVar2;
          UNLOCK();
          plVar4 = plVar9;
          goto joined_r0x00014032e2a0;
        }
      }
    }
    else {
      *(longlong **)(param_2 + 0x28) = plVar9;
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
          iVar7 = *piVar2;
          UNLOCK();
joined_r0x00014032e2a0:
          if (iVar7 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
      }
    }
    if (!bVar5) {
      LOCK();
      plVar4 = plVar9 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
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
    *(undefined1 *)(param_2 + 8) = 4;
    plVar9 = param_1 + 0xf;
    iVar7 = *(int *)(param_1 + 0x10);
    lVar10 = (longlong)iVar7;
    *(uint *)(param_1 + 0x10) = iVar7 + 1U;
    if (*(uint *)((longlong)param_1 + 0x84) < iVar7 + 1U) goto LAB_14032df72;
    goto LAB_14032df7c;
  }
  switch(*(char *)(param_2 + 8)) {
  case '\0':
    if (*(longlong *)(param_2 + 0x20) == 0) goto switchD_14032dfc8_caseD_4;
    plVar9 = (longlong *)param_1[1];
    bVar5 = true;
    if (plVar9 == (longlong *)0x0) {
LAB_14032e381:
      uVar8 = 0;
      plVar9 = (longlong *)0x0;
    }
    else {
      iVar7 = (int)plVar9[1];
      do {
        if (iVar7 == 0) goto LAB_14032e381;
        LOCK();
        iVar6 = (int)plVar9[1];
        bVar11 = iVar7 == iVar6;
        if (bVar11) {
          *(int *)(plVar9 + 1) = iVar7 + 1;
          iVar6 = iVar7;
        }
        iVar7 = iVar6;
        UNLOCK();
      } while (!bVar11);
      uVar8 = *param_1;
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
      bVar5 = false;
    }
    *(undefined8 *)(param_2 + 0x20) = uVar8;
    plVar4 = *(longlong **)(param_2 + 0x28);
    if (plVar9 == plVar4) {
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        plVar4 = plVar9 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar2 = (int *)((longlong)plVar9 + 0xc);
          *piVar2 = *piVar2 + -1;
          iVar7 = *piVar2;
          UNLOCK();
          plVar4 = plVar9;
          goto joined_r0x00014032e3ad;
        }
      }
    }
    else {
      *(longlong **)(param_2 + 0x28) = plVar9;
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
          iVar7 = *piVar2;
          UNLOCK();
joined_r0x00014032e3ad:
          if (iVar7 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
      }
    }
    if (!bVar5) {
      LOCK();
      plVar4 = plVar9 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
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
    goto switchD_14032dfc8_caseD_4;
  case '\x01':
    FUN_14033705c(lVar10,param_2);
    plVar9 = (longlong *)param_1[1];
    bVar5 = true;
    if (plVar9 == (longlong *)0x0) {
LAB_14032e309:
      uVar8 = 0;
      plVar9 = (longlong *)0x0;
    }
    else {
      iVar7 = (int)plVar9[1];
      do {
        if (iVar7 == 0) goto LAB_14032e309;
        LOCK();
        iVar6 = (int)plVar9[1];
        bVar11 = iVar7 == iVar6;
        if (bVar11) {
          *(int *)(plVar9 + 1) = iVar7 + 1;
          iVar6 = iVar7;
        }
        iVar7 = iVar6;
        UNLOCK();
      } while (!bVar11);
      uVar8 = *param_1;
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
      bVar5 = false;
    }
    *(undefined8 *)(param_2 + 0x20) = uVar8;
    plVar4 = *(longlong **)(param_2 + 0x28);
    if (plVar9 == plVar4) {
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        plVar4 = plVar9 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar2 = (int *)((longlong)plVar9 + 0xc);
          *piVar2 = *piVar2 + -1;
          iVar7 = *piVar2;
          UNLOCK();
          plVar4 = plVar9;
          goto joined_r0x00014032e335;
        }
      }
    }
    else {
      *(longlong **)(param_2 + 0x28) = plVar9;
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
          iVar7 = *piVar2;
          UNLOCK();
joined_r0x00014032e335:
          if (iVar7 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
      }
    }
    if (!bVar5) {
      LOCK();
      plVar4 = plVar9 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
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
    *(undefined1 *)(param_2 + 8) = 1;
    plVar9 = param_1 + 9;
    iVar7 = *(int *)(param_1 + 10);
    lVar10 = (longlong)iVar7;
    *(uint *)(param_1 + 10) = iVar7 + 1U;
    if (*(uint *)((longlong)param_1 + 0x54) < iVar7 + 1U) {
LAB_14032df72:
      FUN_140337254(plVar9,iVar7);
    }
    break;
  case '\x02':
    FUN_14033705c(lVar10,param_2);
    plVar9 = (longlong *)param_1[1];
    bVar5 = true;
    if (plVar9 == (longlong *)0x0) {
LAB_14032e3d8:
      uVar8 = 0;
      plVar9 = (longlong *)0x0;
    }
    else {
      iVar7 = (int)plVar9[1];
      do {
        if (iVar7 == 0) goto LAB_14032e3d8;
        LOCK();
        iVar6 = (int)plVar9[1];
        bVar11 = iVar7 == iVar6;
        if (bVar11) {
          *(int *)(plVar9 + 1) = iVar7 + 1;
          iVar6 = iVar7;
        }
        iVar7 = iVar6;
        UNLOCK();
      } while (!bVar11);
      uVar8 = *param_1;
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
      bVar5 = false;
    }
    *(undefined8 *)(param_2 + 0x20) = uVar8;
    plVar4 = *(longlong **)(param_2 + 0x28);
    if (plVar9 == plVar4) {
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        plVar4 = plVar9 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar2 = (int *)((longlong)plVar9 + 0xc);
          *piVar2 = *piVar2 + -1;
          iVar7 = *piVar2;
          UNLOCK();
          plVar4 = plVar9;
          goto joined_r0x00014032e404;
        }
      }
    }
    else {
      *(longlong **)(param_2 + 0x28) = plVar9;
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
          iVar7 = *piVar2;
          UNLOCK();
joined_r0x00014032e404:
          if (iVar7 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
      }
    }
    if (!bVar5) {
      LOCK();
      plVar4 = plVar9 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
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
    *(undefined1 *)(param_2 + 8) = 2;
    plVar9 = param_1 + 0xb;
    iVar7 = *(int *)(param_1 + 0xc);
    lVar10 = (longlong)iVar7;
    *(uint *)(param_1 + 0xc) = iVar7 + 1U;
    if (*(uint *)((longlong)param_1 + 100) < iVar7 + 1U) goto LAB_14032df72;
    break;
  case '\x03':
    FUN_140033559(".\\../Plugins/FX/Niagara/Source/Niagara/Private/NiagaraSystemSimulation.cpp",
                  0x307,L"Attempting to transfer an instance that is in the spawning state");
  default:
    goto switchD_14032dfc8_caseD_4;
  case '\x05':
    bVar5 = true;
    FUN_144962b46(param_1[0x50],*(undefined8 *)(lVar10 + 0x280),*(undefined4 *)(param_2 + 0x18),1);
    FUN_14033705c(lVar10,param_2);
    plVar9 = (longlong *)param_1[1];
    if (plVar9 == (longlong *)0x0) {
LAB_14032e450:
      uVar8 = 0;
      plVar9 = (longlong *)0x0;
    }
    else {
      iVar7 = (int)plVar9[1];
      do {
        if (iVar7 == 0) goto LAB_14032e450;
        LOCK();
        iVar6 = (int)plVar9[1];
        bVar11 = iVar7 == iVar6;
        if (bVar11) {
          *(int *)(plVar9 + 1) = iVar7 + 1;
          iVar6 = iVar7;
        }
        iVar7 = iVar6;
        UNLOCK();
      } while (!bVar11);
      uVar8 = *param_1;
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
      bVar5 = false;
    }
    *(undefined8 *)(param_2 + 0x20) = uVar8;
    plVar4 = *(longlong **)(param_2 + 0x28);
    if (plVar9 == plVar4) {
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        plVar4 = plVar9 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar2 = (int *)((longlong)plVar9 + 0xc);
          *piVar2 = *piVar2 + -1;
          iVar7 = *piVar2;
          UNLOCK();
          plVar4 = plVar9;
          goto joined_r0x00014032e47c;
        }
      }
    }
    else {
      *(longlong **)(param_2 + 0x28) = plVar9;
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
          iVar7 = *piVar2;
          UNLOCK();
joined_r0x00014032e47c:
          if (iVar7 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
      }
    }
    if (!bVar5) {
      LOCK();
      plVar4 = plVar9 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
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
    *(undefined1 *)(param_2 + 8) = 5;
    plVar9 = param_1 + 0x11;
    iVar7 = *(int *)(param_1 + 0x12);
    lVar10 = (longlong)iVar7;
    *(uint *)(param_1 + 0x12) = iVar7 + 1U;
    if (*(uint *)((longlong)param_1 + 0x94) < iVar7 + 1U) goto LAB_14032df72;
  }
LAB_14032df7c:
  *(longlong *)(*plVar9 + lVar10 * 8) = param_2;
  *(int *)(param_2 + 0x18) = iVar7;
switchD_14032dfc8_caseD_4:
  if ((*(byte *)(param_1 + 6) & 2) == 0) {
    FUN_14032eef2(param_1,param_2);
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar3 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014032e084. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14032e4c6 FUN_14032e4c6 body=9 status=ok
// SIG undefined FUN_14032e4c6(void)

void FUN_14032e4c6(longlong param_1)

{
  FUN_14032e4d0(param_1 + 0x10);
  return;
}



// FUNCTION 14032e4d0 FUN_14032e4d0 body=671 status=ok
// SIG undefined FUN_14032e4d0(void)

void FUN_14032e4d0(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong lVar4;
  
  FUN_14032ed88();
  if (*(longlong *)(param_1 + 0x548) != 0) {
    FUN_1400020a8();
  }
  puVar2 = *(undefined8 **)(param_1 + 0x540);
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  puVar2 = *(undefined8 **)(param_1 + 0x538);
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if (*(char *)(param_1 + 0x534) == '\x01') {
    *(undefined1 *)(param_1 + 0x534) = 0;
  }
  if (*(longlong *)(param_1 + 0x520) != 0) {
    FUN_1400020a8();
  }
  FUN_14032e85e(*(undefined8 *)(param_1 + 0x4e0),*(undefined4 *)(param_1 + 0x4e8));
  if (*(longlong *)(param_1 + 0x4e0) != 0) {
    FUN_1400020a8();
  }
  FUN_14032e85e(*(undefined8 *)(param_1 + 0x4d0),*(undefined4 *)(param_1 + 0x4d8));
  if (*(longlong *)(param_1 + 0x4d0) != 0) {
    FUN_1400020a8();
  }
  FUN_14032e826(*(undefined8 *)(param_1 + 0x4c0),*(undefined4 *)(param_1 + 0x4c8));
  if (*(longlong *)(param_1 + 0x4c0) != 0) {
    FUN_1400020a8();
  }
  FUN_14032e85e(*(undefined8 *)(param_1 + 0x4b0),*(undefined4 *)(param_1 + 0x4b8));
  if (*(longlong *)(param_1 + 0x4b0) != 0) {
    FUN_1400020a8();
  }
  FUN_14032e85e(*(undefined8 *)(param_1 + 0x4a0),*(undefined4 *)(param_1 + 0x4a8));
  if (*(longlong *)(param_1 + 0x4a0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x490) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x480) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x470) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x460) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x450) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x440) != 0) {
    FUN_1400020a8();
  }
  puVar2 = *(undefined8 **)(param_1 + 0x438);
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  puVar2 = *(undefined8 **)(param_1 + 0x430);
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  FUN_14032e8b2(param_1 + 0x378);
  FUN_14032e8b2(param_1 + 0x2c0);
  FUN_14032e8b2(param_1 + 0x208);
  FUN_14032e8b2(param_1 + 0x150);
  FUN_14032e8b2(param_1 + 0x98);
  lVar4 = 0x88;
  do {
    if (*(longlong *)(param_1 + lVar4) != 0) {
      FUN_1400020a8();
    }
    lVar4 = lVar4 + -0x10;
  } while (lVar4 != 0x28);
  plVar3 = *(longlong **)(param_1 + 8);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014032e76b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 14032e770 FUN_14032e770 body=86 status=ok
// SIG undefined FUN_14032e770(void)

undefined8 * FUN_14032e770(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ae26c00;
  FUN_14032e7c6(param_1[0x53],*(undefined4 *)(param_1 + 0x54));
  if (param_1[0x53] != 0) {
    FUN_1400020a8();
  }
  FUN_14006c124(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14032e7c6 FUN_14032e7c6 body=96 status=ok
// SIG undefined FUN_14032e7c6(void)

void FUN_14032e7c6(longlong *param_1,int param_2)

{
  undefined8 *puVar1;
  
  do {
    if (param_2 == 0) {
      return;
    }
    if ((int)param_1[1] == 0) {
LAB_14032e7db:
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
        goto LAB_14032e7db;
      }
    }
    param_1 = param_1 + 2;
    param_2 = param_2 + -1;
  } while( true );
}



// FUNCTION 14032e826 FUN_14032e826 body=56 status=ok
// SIG undefined FUN_14032e826(void)

void FUN_14032e826(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_14032e85e(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 14032e85e FUN_14032e85e body=83 status=ok
// SIG undefined FUN_14032e85e(void)

void FUN_14032e85e(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x20);
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
      plVar1 = plVar1 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14032e8b2 FUN_14032e8b2 body=562 status=ok
// SIG undefined FUN_14032e8b2(void)

void FUN_14032e8b2(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  
  *(undefined8 *)(param_1 + 8) = 0;
  iVar4 = *(int *)(param_1 + 0xa0);
  if (0 < (longlong)iVar4) {
    lVar8 = *(longlong *)(param_1 + 0x98);
    if (*(longlong *)(param_1 + 0x98) == 0) {
      lVar8 = param_1 + 0x88;
    }
    lVar9 = 0;
    do {
      FUN_14032eae4(*(undefined8 *)(lVar8 + lVar9));
      lVar9 = lVar9 + 8;
    } while ((longlong)iVar4 * 8 != lVar9);
    *(undefined4 *)(param_1 + 0xa0) = 0;
    if (*(int *)(param_1 + 0xa4) != 0) {
      FUN_14032eb42(param_1 + 0x88,0);
    }
  }
  lVar8 = *(longlong *)(param_1 + 0x40);
  if (lVar8 != 0) {
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
    LOCK();
    puVar1 = (uint *)(lVar8 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
    lVar8 = *(longlong *)(param_1 + 0x48);
    if (lVar8 != 0) {
      *(undefined8 *)(param_1 + 0x48) = 0;
      LOCK();
      puVar1 = (uint *)(lVar8 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar8 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(lVar8 + 0xd);
          plVar5 = (longlong *)FUN_14001cc68(0x10,8);
          plVar5[1] = lVar8;
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
    lVar8 = *(longlong *)(param_1 + 0x50);
    if (lVar8 != 0) {
      *(undefined8 *)(param_1 + 0x50) = 0;
      LOCK();
      puVar1 = (uint *)(lVar8 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar8 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(lVar8 + 0xd);
          plVar5 = (longlong *)FUN_14001cc68(0x10,8);
          plVar5[1] = lVar8;
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
  }
  *(undefined4 *)(param_1 + 0x70) = 0;
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FUN_1400020a8();
  }
  FUN_14476820c(param_1 + 0x40);
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14032eae4 FUN_14032eae4 body=93 status=ok
// SIG undefined FUN_14032eae4(void)

void FUN_14032eae4(undefined8 param_1)

{
  int iVar1;
  longlong lVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cb3daa0);
  iVar1 = DAT_14cb3dad0;
  lVar2 = (longlong)(int)DAT_14cb3dad0;
  DAT_14cb3dad0 = DAT_14cb3dad0 + 1;
  if (DAT_14cb3dad4 < DAT_14cb3dad0) {
    FUN_14032ec26(&DAT_14cb3dac8,iVar1);
  }
  *(undefined8 *)(DAT_14cb3dac8 + lVar2 * 8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00014032eb2a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cb3daa0);
  return;
}



// FUNCTION 14032eb42 FUN_14032eb42 body=96 status=ok
// SIG undefined FUN_14032eb42(void)

void FUN_14032eb42(longlong param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  iVar3 = 0;
  if ((param_2 != 0) && (iVar3 = 2, 2 < param_2)) {
    uVar2 = FUN_144a3809e((longlong)(int)param_2 << 3,0);
    iVar1 = (int)(uVar2 >> 3);
    iVar3 = 0x7fffffff;
    if ((int)param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (iVar3 == *(int *)(param_1 + 0x1c)) {
    return;
  }
  *(int *)(param_1 + 0x1c) = iVar3;
  FUN_14032eba2(param_1,*(undefined4 *)(param_1 + 0x18));
  return;
}



// FUNCTION 14032eba2 FUN_14032eba2 body=131 status=ok
// SIG undefined FUN_14032eba2(void)

void FUN_14032eba2(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x10);
  if ((uint)param_3 < 3) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x10,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 0x10),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x10,param_2,param_3,8);
  return;
}



// FUNCTION 14032ec26 FUN_14032ec26 body=353 status=ok
// SIG undefined FUN_14032ec26(void)

void FUN_14032ec26(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14032ecad;
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
LAB_14032ecad:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 14032ed88 FUN_14032ed88 body=362 status=ok
// SIG undefined FUN_14032ed88(void)

void FUN_14032ed88(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  
  FUN_14012d1c4(param_1,0);
  while (0 < (int)*(uint *)(param_1 + 0x80)) {
    FUN_1402a3786(*(undefined8 *)
                   (*(longlong *)(param_1 + 0x78) + -8 + (ulonglong)*(uint *)(param_1 + 0x80) * 8),1
                 );
  }
  while (0 < (int)*(uint *)(param_1 + 0x90)) {
    FUN_1402a3786(*(undefined8 *)
                   (*(longlong *)(param_1 + 0x88) + -8 + (ulonglong)*(uint *)(param_1 + 0x90) * 8),1
                 );
  }
  while (0 < (int)*(uint *)(param_1 + 0x50)) {
    FUN_1402a3786(*(undefined8 *)
                   (*(longlong *)(param_1 + 0x48) + -8 + (ulonglong)*(uint *)(param_1 + 0x50) * 8),1
                 );
  }
  while (0 < (int)*(uint *)(param_1 + 0x60)) {
    FUN_1402a3786(*(undefined8 *)
                   (*(longlong *)(param_1 + 0x58) + -8 + (ulonglong)*(uint *)(param_1 + 0x60) * 8),1
                 );
  }
  lVar1 = *(longlong *)(param_1 + 0x430);
  if (lVar1 != 0) {
    iVar2 = *(int *)(lVar1 + 0xb0);
    if (iVar2 != 0) {
      do {
        FUN_14483a318(**(undefined8 **)(lVar1 + 0xa8),lVar1 + 0x38);
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    *(undefined4 *)(lVar1 + 0xb0) = 0;
    if (*(int *)(lVar1 + 0xb4) != 0) {
      FUN_14012d34c((undefined8 *)(lVar1 + 0xa8),0);
    }
  }
  lVar1 = *(longlong *)(param_1 + 0x438);
  if (lVar1 != 0) {
    iVar2 = *(int *)(lVar1 + 0xb0);
    if (iVar2 != 0) {
      do {
        FUN_14483a318(**(undefined8 **)(lVar1 + 0xa8),lVar1 + 0x38);
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    *(undefined4 *)(lVar1 + 0xb0) = 0;
    if (*(int *)(lVar1 + 0xb4) != 0) {
      FUN_14012d34c((undefined8 *)(lVar1 + 0xa8),0);
    }
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}



// FUNCTION 14032eef2 FUN_14032eef2 body=652 status=ok
// SIG undefined FUN_14032eef2(void)

void FUN_14032eef2(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  
  if (param_2 != 0 && (char)((*(uint *)(param_1 + 0x30) & 2) >> 1) == '\0') {
    *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 2;
    FUN_144a0693c(param_1 + 0x440,param_1 + 0x2c0,param_2 + 0x1e8);
    FUN_144a0693c(param_1 + 0x470,param_1 + 0x378,param_2 + 0x1e8);
    lVar4 = *(longlong *)(param_2 + 0x108);
    uVar2 = *(uint *)(param_2 + 0x110);
    uVar9 = (ulonglong)uVar2;
    FUN_1403f9368((longlong *)(param_1 + 0x4a0),uVar9);
    FUN_1403f9368();
    plVar1 = (longlong *)(param_1 + 0x4c0);
    iVar3 = *(int *)(param_1 + 0x4c8);
    if (iVar3 < (int)uVar2) {
      *(uint *)(param_1 + 0x4c8) = uVar2;
      if ((uint)(*(int *)(param_1 + 0x4cc) - iVar3) < uVar2 - iVar3) {
        FUN_14183ab56(plVar1);
      }
      memset((void *)((longlong)iVar3 * 0x10 + *plVar1),0,(longlong)(int)(uVar2 - iVar3) << 4);
    }
    else {
      if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(uVar9);
      }
      if ((int)uVar2 < iVar3) {
        FUN_1481f87c0(plVar1,uVar2,iVar3 - uVar2);
        FUN_1481f881a(plVar1);
      }
    }
    FUN_1403f9368((longlong *)(param_1 + 0x4d0),uVar2);
    FUN_1403f9368((longlong *)(param_1 + 0x4e0),uVar2);
    if (0 < (int)uVar2) {
      lVar8 = param_1 + 0x98;
      uVar12 = 0;
      do {
        lVar11 = uVar12 * 0x10;
        plVar5 = *(longlong **)(lVar4 + lVar11);
        if (*(int *)((longlong)plVar5 + 0xd4) != 4) {
          FUN_144a0693c(*(longlong *)(param_1 + 0x4e0) + uVar12 * 0x30,lVar8,plVar5 + 8);
          lVar6 = (**(code **)(*plVar5 + 0x68))(plVar5);
          if (lVar6 != 0) {
            FUN_144a0693c(*(longlong *)(param_1 + 0x4a0) + uVar12 * 0x30,lVar8,lVar6 + 0x1d8);
            FUN_144a0693c(uVar12 * 0x30 + *(longlong *)(param_1 + 0x4b0),lVar8,lVar6 + 0x480);
            if (*(longlong *)(lVar6 + 0x18) != 0) {
              FUN_144a0693c(uVar12 * 0x30 + *(longlong *)(param_1 + 0x4d0),lVar8,
                            *(longlong *)(lVar6 + 0x18) + 0x78);
            }
            plVar5 = *(longlong **)(lVar6 + 0x728);
            if (plVar5 == (longlong *)0x0) {
              lVar6 = 0;
              uVar7 = 0;
            }
            else {
              lVar6 = *plVar5;
              uVar7 = (ulonglong)*(uint *)(plVar5 + 1);
            }
            FUN_1403f9368(*plVar1 + lVar11,uVar7);
            if (0 < (int)uVar7) {
              lVar6 = lVar6 + 0x38;
              lVar10 = 0;
              do {
                FUN_144a0693c(*(longlong *)(*plVar1 + lVar11) + lVar10,lVar8,lVar6);
                lVar10 = lVar10 + 0x30;
                lVar6 = lVar6 + 0x2a8;
              } while (uVar7 * 0x30 != lVar10);
            }
          }
        }
        uVar12 = uVar12 + 1;
      } while (uVar12 != uVar9);
    }
  }
  return;
}



// FUNCTION 14032f180 FUN_14032f180 body=108 status=ok
// SIG undefined FUN_14032f180(void)

undefined4 * FUN_14032f180(undefined8 param_1,undefined4 *param_2)

{
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14032f1ee();
  FUN_14032f1ee();
  FUN_1448e935e(param_1,&local_30,&DAT_14ca662c0,0);
  FUN_14032f1ee();
  *param_2 = local_30;
  param_2[1] = uStack_2c;
  param_2[2] = uStack_28;
  param_2[3] = uStack_24;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14032f1ee FUN_14032f1ee body=289 status=ok
// SIG undefined FUN_14032f1ee(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14032f1ee(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca66368) {
    FUN_144b3d300(&DAT_14ca66368);
    if (DAT_14ca66368 == -1) {
      FUN_14032f310();
      FUN_1456fdf52();
      FUN_140db5666(&DAT_14ca662c0,0,&DAT_14ca66258,L"FAllocateCommandInstanceOutputSpaceCs",
                    L"/Engine/Private/VirtualShadowMaps/VirtualShadowMapBuildPerPageDrawCommands.usf"
                    ,L"AllocateCommandInstanceOutputSpaceCs",5,1,FUN_14732c72c,FUN_14732c6cc,
                    &LAB_14732c694,&LAB_14732c690,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14ca68310)
      ;
      _DAT_14ca662c0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1430d82d8);
      _Init_thread_footer(&DAT_14ca66368);
    }
  }
  return &DAT_14ca662c0;
}



// FUNCTION 14032f310 FUN_14032f310 body=258 status=ok
// SIG undefined FUN_14032f310(void)

void FUN_14032f310(void)

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
              0x110) < DAT_14ca68390) {
    FUN_144b3d300(&DAT_14ca68390);
    if (DAT_14ca68390 == -1) {
      FUN_1456fe09c(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x30;
      local_58 = 0xafe;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca68310,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1430e64d1);
      _Init_thread_footer(&DAT_14ca68390);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14032f414 FUN_14032f414 body=562 status=ok
// SIG undefined FUN_14032f414(void)

void FUN_14032f414(undefined8 *param_1)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 auStack_88 [32];
  uint local_68;
  longlong local_58;
  undefined8 uStack_50;
  uint local_48;
  longlong *local_38;
  code *local_30;
  longlong **local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar2 = (longlong *)FUN_14032f648();
  lVar3 = plVar2[0x22];
  if (lVar3 == 0) {
    (**(code **)(*plVar2 + 1000))(plVar2);
    lVar3 = plVar2[0x22];
  }
  if ((*(byte *)(lVar3 + 0xe0) & 0x20) != 0) {
    FUN_147f8fb44(&local_58,0x10,1,0);
    uVar5 = (ulonglong)local_48;
    if ((-1 < (int)local_48) && ((int)local_48 < (int)uStack_50)) {
      do {
        lVar3 = *(longlong *)(local_58 + (uVar5 & 0xffffffff) * 8);
        if (lVar3 == 0) {
          local_30 = (code *)0x0;
        }
        else {
          uVar4 = FUN_14032f72e();
          local_30 = (code *)FUN_144718840(lVar3,uVar4);
        }
        (*(code *)*param_1)(param_1[1],&local_30);
        uVar5 = (longlong)(int)local_48;
        do {
          uVar6 = uVar5;
          uVar5 = uVar6 + 1;
          local_48 = (uint)uVar5;
          if ((longlong)(int)uStack_50 <= (longlong)uVar5) break;
        } while (*(longlong *)(local_58 + uVar5 * 8) == 0);
      } while ((-2 < (longlong)uVar6) && ((int)local_48 < (int)uStack_50));
    }
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  local_58 = 0;
  uStack_50 = 0;
  local_48 = -1;
  uVar1 = FUN_14482ca40();
  uVar4 = FUN_1400b6f3c();
  local_28 = &local_38;
  local_30 = FUN_142840874;
  local_68 = uVar1 | 0x90000000;
  local_38 = &local_58;
  FUN_140245161(uVar4,&local_30,1,0x10);
  uVar5 = (longlong)(int)local_48;
  do {
    uVar6 = uVar5;
    uVar5 = uVar6 + 1;
    local_48 = (uint)uVar5;
    if ((longlong)(int)uStack_50 <= (longlong)uVar5) break;
  } while (*(longlong *)(local_58 + uVar5 * 8) == 0);
  if ((-2 < (longlong)uVar6) && ((int)local_48 < (int)uStack_50)) {
    do {
      lVar3 = *(longlong *)(local_58 + (uVar5 & 0xffffffff) * 8);
      if (lVar3 == 0) {
        local_30 = (code *)0x0;
      }
      else {
        uVar4 = FUN_14032f72e();
        local_30 = (code *)FUN_144718840(lVar3,uVar4);
      }
      (*(code *)*param_1)(param_1[1],&local_30);
      uVar5 = (longlong)(int)local_48;
      do {
        uVar6 = uVar5;
        uVar5 = uVar6 + 1;
        local_48 = (uint)uVar5;
        if ((longlong)(int)uStack_50 <= (longlong)uVar5) break;
      } while (*(longlong *)(local_58 + uVar5 * 8) == 0);
    } while ((-2 < (longlong)uVar6) && ((int)local_48 < (int)uStack_50));
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14032f648 FUN_14032f648 body=228 status=ok
// SIG undefined FUN_14032f648(void)

longlong FUN_14032f648(void)

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
  if (DAT_14cb26e00 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1459e2742;
    local_38 = &LAB_147f8e83d;
    local_40 = &LAB_14613cf47;
    local_48 = L"Input";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0xe8;
    FUN_14081cfa3(L"/Script/EnhancedInput",L"EnhancedInputDeveloperSettings",&DAT_14cb26e00,
                  &DAT_147f8e83c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb26e00;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14032f72e FUN_14032f72e body=228 status=ok
// SIG undefined FUN_14032f72e(void)

longlong FUN_14032f72e(void)

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
  if (DAT_14cb27018 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_147f92369;
    local_40 = FUN_14644c029;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/EnhancedInput",L"EnhancedInputSubsystemInterface",&DAT_14cb27018,
                  FUN_14644c002);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb27018;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14032f814 FUN_14032f814 body=1286 status=ok
// SIG undefined FUN_14032f814(void)

void FUN_14032f814(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  
  plVar11 = *(longlong **)(*param_1 + 8);
  lVar7 = (**(code **)(*plVar11 + 0x2c8))(plVar11);
  lVar10 = param_1[0xb];
  if ((lVar10 != 0) && (0 < *(int *)(DAT_14ca5ca58 + 4))) {
    iVar2 = (int)param_3[1];
    *(uint *)(param_3 + 1) = iVar2 + 1U;
    if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
      FUN_144904f42(param_3,iVar2);
    }
    lVar12 = *param_3;
    lVar15 = (longlong)iVar2 * 0x10;
    *(longlong *)(lVar12 + lVar15) = lVar10;
    *(undefined4 *)(lVar12 + 8 + lVar15) = 0x70;
    *(undefined1 *)(lVar12 + 0xc + lVar15) = 3;
    plVar8 = (longlong *)FUN_1449609de(param_2,lVar10);
    puVar3 = (undefined8 *)*plVar8;
    puVar4 = *(undefined8 **)(lVar7 + 0xe0);
    if (puVar4 != puVar3) {
      *(undefined8 **)(lVar7 + 0xe0) = puVar3;
      if (puVar3 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(puVar3 + 1) = *(int *)(puVar3 + 1) + 1;
        UNLOCK();
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
    }
  }
  lVar10 = param_1[0xc];
  if ((lVar10 != 0) && (0 < *(int *)(DAT_14ca5ca58 + 4))) {
    iVar2 = (int)param_3[1];
    *(uint *)(param_3 + 1) = iVar2 + 1U;
    if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
      FUN_144904f42(param_3,iVar2);
    }
    lVar12 = *param_3;
    lVar15 = (longlong)iVar2 * 0x10;
    *(longlong *)(lVar12 + lVar15) = lVar10;
    *(undefined4 *)(lVar12 + 8 + lVar15) = 0x70;
    *(undefined1 *)(lVar12 + 0xc + lVar15) = 3;
    plVar8 = (longlong *)FUN_1449609de(param_2,lVar10);
    puVar3 = (undefined8 *)*plVar8;
    puVar4 = *(undefined8 **)(lVar7 + 0xf0);
    if (puVar4 != puVar3) {
      *(undefined8 **)(lVar7 + 0xf0) = puVar3;
      if (puVar3 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(puVar3 + 1) = *(int *)(puVar3 + 1) + 1;
        UNLOCK();
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
    }
  }
  lVar10 = param_1[0xd];
  if (lVar10 == 0) {
    plVar8 = (longlong *)plVar11[0x6c3];
    if (plVar8 != (longlong *)0x0) {
      plVar11[0x6c3] = 0;
LAB_14032f97d:
      (**(code **)(*plVar8 + 0x38))(plVar8);
    }
  }
  else {
    iVar2 = (int)param_3[1];
    *(uint *)(param_3 + 1) = iVar2 + 1U;
    if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
      FUN_144904f42(param_3,iVar2);
    }
    lVar12 = *param_3;
    lVar15 = (longlong)iVar2 * 0x10;
    *(longlong *)(lVar12 + lVar15) = lVar10;
    *(undefined4 *)(lVar12 + 8 + lVar15) = 0x70;
    *(undefined1 *)(lVar12 + 0xc + lVar15) = 3;
    plVar9 = (longlong *)FUN_14495f742(param_2,lVar10);
    plVar9 = (longlong *)*plVar9;
    plVar8 = (longlong *)plVar11[0x6c3];
    if (plVar8 != plVar9) {
      plVar11[0x6c3] = (longlong)plVar9;
      if (plVar9 != (longlong *)0x0) {
        (**(code **)(*plVar9 + 0x30))();
      }
      if (plVar8 != (longlong *)0x0) goto LAB_14032f97d;
    }
  }
  lVar10 = param_1[0xe];
  if (lVar10 == 0) {
    plVar8 = (longlong *)plVar11[0x6c4];
    if (plVar8 == (longlong *)0x0) goto LAB_14032f9fd;
    plVar11[0x6c4] = 0;
  }
  else {
    iVar2 = (int)param_3[1];
    *(uint *)(param_3 + 1) = iVar2 + 1U;
    if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
      FUN_144904f42(param_3,iVar2);
    }
    lVar12 = *param_3;
    lVar15 = (longlong)iVar2 * 0x10;
    *(longlong *)(lVar12 + lVar15) = lVar10;
    *(undefined4 *)(lVar12 + 8 + lVar15) = 0x70;
    *(undefined1 *)(lVar12 + 0xc + lVar15) = 3;
    plVar9 = (longlong *)FUN_14495f742(param_2,lVar10);
    plVar9 = (longlong *)*plVar9;
    plVar8 = (longlong *)plVar11[0x6c4];
    if (plVar8 == plVar9) goto LAB_14032f9fd;
    plVar11[0x6c4] = (longlong)plVar9;
    if (plVar9 != (longlong *)0x0) {
      (**(code **)(*plVar9 + 0x30))();
    }
    if (plVar8 == (longlong *)0x0) goto LAB_14032f9fd;
  }
  (**(code **)(*plVar8 + 0x38))(plVar8);
LAB_14032f9fd:
  lVar10 = *param_1;
  if (0 < *(int *)(lVar10 + 0x3f0)) {
    lVar12 = 0x13738;
    lVar15 = 0;
    lVar13 = 0;
    do {
      lVar10 = *(longlong *)(lVar10 + 1000);
      plVar11 = (longlong *)param_1[9];
      if ((longlong *)param_1[9] == (longlong *)0x0) {
        plVar11 = param_1 + 1;
      }
      lVar5 = *(longlong *)((longlong)plVar11 + lVar15);
      if (lVar5 != 0) {
        iVar2 = (int)param_3[1];
        *(uint *)(param_3 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
          FUN_144904f42(param_3,iVar2);
        }
        lVar6 = *param_3;
        lVar14 = (longlong)iVar2 * 0x10;
        *(longlong *)(lVar6 + lVar14) = lVar5;
        *(undefined4 *)(lVar6 + 8 + lVar14) = 0x70;
        *(undefined1 *)(lVar6 + 0xc + lVar14) = 3;
      }
      plVar11 = (longlong *)FUN_14495f742(param_2,lVar5);
      plVar11 = (longlong *)*plVar11;
      plVar8 = *(longlong **)(lVar10 + lVar12);
      if (plVar8 != plVar11) {
        *(longlong **)(lVar10 + lVar12) = plVar11;
        if (plVar11 != (longlong *)0x0) {
          (**(code **)(*plVar11 + 0x30))();
        }
        if (plVar8 != (longlong *)0x0) {
          (**(code **)(*plVar8 + 0x38))(plVar8);
        }
      }
      plVar11 = (longlong *)param_1[9];
      if ((longlong *)param_1[9] == (longlong *)0x0) {
        plVar11 = param_1 + 1;
      }
      lVar5 = *(longlong *)((longlong)plVar11 + lVar15 + 8);
      if (lVar5 != 0) {
        iVar2 = (int)param_3[1];
        *(uint *)(param_3 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
          FUN_144904f42(param_3,iVar2);
        }
        lVar6 = *param_3;
        lVar14 = (longlong)iVar2 * 0x10;
        *(longlong *)(lVar6 + lVar14) = lVar5;
        *(undefined4 *)(lVar6 + 8 + lVar14) = 0x70;
        *(undefined1 *)(lVar6 + 0xc + lVar14) = 3;
      }
      plVar11 = (longlong *)FUN_14495f742(param_2,lVar5);
      plVar11 = (longlong *)*plVar11;
      plVar8 = *(longlong **)(lVar10 + -0x18 + lVar12);
      if (plVar8 != plVar11) {
        *(longlong **)(lVar10 + -0x18 + lVar12) = plVar11;
        if (plVar11 != (longlong *)0x0) {
          (**(code **)(*plVar11 + 0x30))();
        }
        if (plVar8 != (longlong *)0x0) {
          (**(code **)(*plVar8 + 0x38))(plVar8);
        }
      }
      lVar13 = lVar13 + 1;
      lVar10 = *param_1;
      lVar15 = lVar15 + 0x10;
      lVar12 = lVar12 + 0x13c10;
    } while (lVar13 < *(int *)(lVar10 + 0x3f0));
  }
  lVar10 = param_1[0xf];
  if (lVar10 != 0) {
    iVar2 = (int)param_3[1];
    *(uint *)(param_3 + 1) = iVar2 + 1U;
    if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
      FUN_144904f42(param_3,iVar2);
    }
    lVar12 = *param_3;
    lVar15 = (longlong)iVar2 * 0x10;
    *(longlong *)(lVar12 + lVar15) = lVar10;
    *(undefined4 *)(lVar12 + 8 + lVar15) = 0x70;
    *(undefined1 *)(lVar12 + 0xc + lVar15) = 1;
  }
  plVar11 = (longlong *)FUN_14495f742(param_2,lVar10);
  plVar11 = (longlong *)*plVar11;
  plVar8 = *(longlong **)(lVar7 + 0xd0);
  if (plVar8 != plVar11) {
    *(longlong **)(lVar7 + 0xd0) = plVar11;
    if (plVar11 != (longlong *)0x0) {
      (**(code **)(*plVar11 + 0x30))();
    }
    if (plVar8 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014032fca3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar8 + 0x38))(plVar8);
      return;
    }
  }
  return;
}



// FUNCTION 14032fd1a FUN_14032fd1a body=684 status=ok
// SIG undefined FUN_14032fd1a(void)

longlong FUN_14032fd1a(longlong param_1,longlong param_2,int *param_3,undefined4 param_4,
                      undefined8 param_5)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  int iVar11;
  bool bVar12;
  undefined1 auStack_f8 [32];
  int local_d8;
  undefined8 *local_d0;
  undefined4 local_bc;
  undefined1 local_b8 [8];
  longlong local_b0;
  int local_a4;
  int local_a0;
  uint local_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined8 local_84;
  undefined8 uStack_7c;
  uint local_74;
  undefined1 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  iVar3 = *param_3;
  uVar4 = param_3[2];
  iVar11 = param_3[1] * iVar3;
  local_bc = param_4;
  uVar6 = FUN_1414e3242(uVar4,0);
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 1;
  local_84 = 0;
  uStack_7c = 0;
  local_74 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_70 = 0;
  local_6c = 0;
  local_68 = param_5;
  local_60 = 0;
  uStack_58 = 0;
  local_a4 = iVar11;
  local_a0 = iVar3;
  local_9c = uVar4;
  if ((uVar4 & 0x100000) == 0 && iVar11 == 0) {
    FUN_14570b4be(param_2,&local_98,uVar4,iVar3);
  }
  local_d8 = uVar6;
  if (*(char *)(param_2 + 0x69) == '\0') {
    FUN_14002049c(param_2,1);
    local_d0 = &local_98;
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_b0,param_2,&local_a4);
    *(undefined4 *)(local_b0 + 0x18) = uVar6;
    FUN_14002049c(param_2,0);
  }
  else {
    local_d0 = &local_98;
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_b0,param_2,&local_a4);
    *(undefined4 *)(local_b0 + 0x18) = uVar6;
  }
  lVar7 = FUN_14001cc68(0xb8,0x10);
  local_d8 = param_3[1];
  local_b0 = 0;
  local_d0 = (undefined8 *)param_5;
  FUN_14004772e(lVar7,param_2,local_b8,param_3);
  if (lVar7 != 0) {
    LOCK();
    *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
    UNLOCK();
  }
  iVar3 = *(int *)(param_1 + 0x20);
  *(uint *)(param_1 + 0x20) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x24) < iVar3 + 1U) {
    FUN_14178f548(param_1 + 0x18,iVar3);
  }
  *(longlong *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar3 * 8) = lVar7;
  iVar3 = *(int *)(param_1 + 0x30);
  *(uint *)(param_1 + 0x30) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x34) < iVar3 + 1U) {
    FUN_1447808da((longlong *)(param_1 + 0x28),iVar3);
  }
  lVar5 = local_b0;
  *(undefined4 *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar3 * 4) = local_bc;
  if ((*(byte *)((longlong)param_3 + 10) & 0x40) != 0) {
    *(undefined8 *)(lVar7 + 0x90) = 0;
  }
  if (local_b0 != 0) {
    LOCK();
    puVar1 = (uint *)(local_b0 + 8);
    uVar4 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar4 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_b0 + 8);
      LOCK();
      uVar4 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar4 >> 0x1e & 1) == 0) {
        bVar2 = *(byte *)(local_b0 + 0xd);
        plVar8 = (longlong *)FUN_14001cc68(0x10,8);
        plVar8[1] = lVar5;
        plVar10 = DAT_14ca843c0;
        plVar9 = DAT_14ca843c8;
        if ((bVar2 & 2) == 0) {
          do {
            *plVar8 = (longlong)plVar10;
            LOCK();
            bVar12 = plVar10 != DAT_14ca843c0;
            plVar9 = plVar8;
            if (bVar12) {
              plVar10 = DAT_14ca843c0;
              plVar9 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar9;
            UNLOCK();
          } while (bVar12);
        }
        else {
          do {
            *plVar8 = (longlong)plVar9;
            LOCK();
            bVar12 = plVar9 != DAT_14ca843c8;
            plVar10 = plVar8;
            if (bVar12) {
              plVar9 = DAT_14ca843c8;
              plVar10 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar10;
            UNLOCK();
          } while (bVar12);
        }
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar7;
}



// FUNCTION 14032ffd4 FUN_14032ffd4 body=512 status=ok
// SIG undefined FUN_14032ffd4(void)

void FUN_14032ffd4(longlong param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  longlong lVar1;
  longlong lVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined2 *puVar8;
  
  if (*(char *)(param_1 + 0x53) == '\0') {
    bVar3 = *(byte *)(param_1 + 0x55);
    lVar6 = *(longlong *)(param_1 + 0x70);
    if (*(char *)(lVar6 + 0xa1) == '\x01') {
      if (*(int *)(lVar6 + 0x18) == 0) {
        puVar8 = &DAT_149dfb77a;
      }
      else {
        puVar8 = *(undefined2 **)(lVar6 + 0x10);
      }
      plVar5 = (longlong *)
               (**(code **)(**(longlong **)(lVar6 + 8) + 0xf8))(*(longlong **)(lVar6 + 8),puVar8,0);
    }
    else {
      EnterCriticalSection((LPCRITICAL_SECTION)(lVar6 + 0x58));
      lVar4 = 0;
      do {
        plVar5 = *(longlong **)(lVar6 + 0x80 + lVar4 * 8);
        if (plVar5 != (longlong *)0x0) {
          *(undefined8 *)(lVar6 + 0x80 + lVar4 * 8) = 0;
          goto LAB_14033006f;
        }
        lVar4 = lVar4 + 1;
      } while (lVar4 != 4);
      if (*(char *)(lVar6 + 0xa0) == '\0') {
        if (*(int *)(lVar6 + 0x18) == 0) {
          puVar8 = &DAT_149dfb77a;
        }
        else {
          puVar8 = *(undefined2 **)(lVar6 + 0x10);
        }
        plVar5 = (longlong *)
                 (**(code **)(**(longlong **)(lVar6 + 8) + 0xf8))
                           (*(longlong **)(lVar6 + 8),puVar8,0);
        *(bool *)(lVar6 + 0xa0) = plVar5 == (longlong *)0x0;
      }
      else {
        plVar5 = (longlong *)0x0;
      }
LAB_14033006f:
      LeaveCriticalSection((LPCRITICAL_SECTION)(lVar6 + 0x58));
    }
    *(bool *)(param_1 + 0x53) = plVar5 == (longlong *)0x0;
    if (plVar5 == (longlong *)0x0) {
      if (((~bVar3 | *(byte *)(param_1 + 0x55)) & 1) == 0) {
        FUN_1400020a8(*(undefined8 *)(param_1 + 8));
        *(undefined8 *)(param_1 + 8) = 0;
      }
    }
    else {
      lVar6 = *(longlong *)(param_1 + 0x80);
      if (lVar6 == 0x7fffffffffffffff) {
        lVar6 = (**(code **)(*plVar5 + 0x50))(plVar5);
        lVar6 = lVar6 - *(longlong *)(param_1 + 0x78);
        *(longlong *)(param_1 + 0x80) = lVar6;
      }
      if (bVar3 == 0) {
        uVar7 = FUN_14001cc68(lVar6,0);
        *(undefined8 *)(param_1 + 8) = uVar7;
      }
      (**(code **)(*plVar5 + 0x10))(plVar5,*(undefined8 *)(param_1 + 0x78));
      (**(code **)(*plVar5 + 0x20))
                (plVar5,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x80));
      lVar6 = *(longlong *)(param_1 + 0x70);
      if (*(char *)(lVar6 + 0xa1) == '\0') {
        lpCriticalSection = (LPCRITICAL_SECTION)(lVar6 + 0x58);
        EnterCriticalSection(lpCriticalSection);
        if (*(longlong *)(lVar6 + 0x80) == 0) {
          *(longlong **)(lVar6 + 0x80) = plVar5;
        }
        else {
          lVar4 = 0;
          do {
            if (lVar4 == 3) {
              LeaveCriticalSection(lpCriticalSection);
              goto LAB_1403301af;
            }
            lVar1 = lVar4 + 1;
            lVar2 = lVar4 * 8;
            lVar4 = lVar1;
          } while (*(longlong *)(lVar6 + 0x88 + lVar2) != 0);
          *(longlong **)(lVar6 + 0x80 + lVar1 * 8) = plVar5;
        }
        LeaveCriticalSection(lpCriticalSection);
      }
      else {
LAB_1403301af:
        (**(code **)*plVar5)(plVar5,1);
      }
    }
  }
  FUN_14009bf40(param_1);
  *(undefined1 *)(param_1 + 0x51) = 1;
  return;
}



// FUNCTION 1403301e0 FUN_1403301e0 body=31 status=ok
// SIG undefined FUN_1403301e0(void)

undefined8 FUN_1403301e0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140330200 FUN_140330200 body=74 status=ok
// SIG undefined FUN_140330200(void)

void FUN_140330200(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  
  if ((int)param_1[3] == 0) {
    *(undefined1 *)(param_1 + 2) = 0;
    lVar3 = 0;
    do {
      param_1[1] = lVar3;
      LOCK();
      lVar2 = *(longlong *)(*param_1 + 0x30);
      if (lVar3 == lVar2) {
        *(longlong *)(*param_1 + 0x30) = (longlong)(param_1 + 1);
        lVar2 = lVar3;
      }
      UNLOCK();
      bVar4 = lVar3 != lVar2;
      lVar3 = lVar2;
    } while (bVar4);
    iVar1 = (int)param_1[3] + 1;
  }
  else {
    FUN_14033024a(param_1);
    iVar1 = 0;
  }
  *(int *)(param_1 + 3) = iVar1;
  return;
}



// FUNCTION 14033024a FUN_14033024a body=108 status=ok
// SIG undefined FUN_14033024a(void)

void FUN_14033024a(longlong *param_1)

{
  longlong lVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  
  do {
    (**(code **)(**(longlong **)*param_1 + 0x20))(*(longlong **)*param_1,0x7fffffff,1);
    lpCriticalSection = (LPCRITICAL_SECTION)(*param_1 + 8);
    EnterCriticalSection(lpCriticalSection);
    lVar1 = param_1[2];
    if ((char)lVar1 == '\x01') {
      (**(code **)(**(longlong **)*param_1 + 0x18))();
    }
    if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
      LeaveCriticalSection(lpCriticalSection);
    }
  } while ((char)lVar1 == '\0');
  return;
}



// FUNCTION 1403302b6 FUN_1403302b6 body=578 status=ok
// SIG undefined FUN_1403302b6(void)

undefined8 * FUN_1403302b6(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  char cVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *_Dst;
  longlong lVar9;
  undefined1 auStack_128 [40];
  undefined8 *local_100;
  undefined1 local_f8 [176];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  FUN_1403305c2(param_1,param_2,0);
  param_1[0x117] = &PTR_LAB_14aabc508;
  puVar1 = param_1 + 0x12e;
  FUN_14033066a(puVar1);
  _Dst = param_1 + 0x118;
  memset(_Dst,0,0xb0);
  *(undefined8 *)((longlong)param_1 + 0x95c) = 0xffffffffffffffff;
  *param_1 = &PTR_FUN_14aab5000;
  param_1[0x117] = &PTR_FUN_14aab5270;
  param_1[0x154] = 0;
  param_1[0x155] = 0;
  *(byte *)((longlong)param_1 + 0x76) = *(byte *)((longlong)param_1 + 0x76) & 0xfe;
  *(byte *)((longlong)param_1 + 0x77) = *(byte *)((longlong)param_1 + 0x77) | 2;
  *(byte *)((longlong)param_1 + 0x6f) = *(byte *)((longlong)param_1 + 0x6f) & 0xfd;
  *(byte *)((longlong)param_1 + 0x2cc) = *(byte *)((longlong)param_1 + 0x2cc) | 6;
  if ((longlong)*(int *)(param_1 + 0x55) != 0) {
    lVar7 = param_1[0x54];
    lVar9 = (longlong)*(int *)(param_1 + 0x55) * 0x80 + lVar7;
    local_100 = _Dst;
    do {
      lVar8 = lVar7 + 0x30;
      if (*(longlong *)(lVar7 + 0x40) != 0) {
        lVar8 = *(longlong *)(lVar7 + 0x40);
      }
      iVar2 = *(int *)(lVar7 + 0x48);
      if ((longlong)iVar2 != 0) {
        lVar6 = 0;
        do {
          cVar3 = (**(code **)(**(longlong **)(lVar8 + lVar6) + 0x340))
                            (*(longlong **)(lVar8 + lVar6),6);
          if (cVar3 == '\0') {
            uVar4 = FUN_1447277f0(0);
            *(undefined8 *)(lVar8 + lVar6) = uVar4;
          }
          lVar6 = lVar6 + 0x10;
        } while ((longlong)iVar2 * 0x10 != lVar6);
      }
      lVar7 = lVar7 + 0x80;
      _Dst = local_100;
    } while (lVar7 != lVar9);
  }
  FUN_144961d36(param_2,local_f8);
  memcpy(_Dst,local_f8,0xb0);
  if ((((2 < (longlong)*(int *)(param_1[0x42] + 8)) &&
       ((ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(param_1[0x42] + 8) * 2) != 0xc))
      && (lVar7 = (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(param_1[0x42] + 8) * 2)
                  * 0x3c, *(longlong *)(&DAT_14ca814b0 + lVar7) != DAT_14ca81490)) &&
     (((*(byte *)((longlong)&DAT_14ca814d8 + lVar7 + 3) & 0x10) == 0 ||
      ((*(byte *)((longlong)&DAT_14ca814c8 + lVar7 + 3) & 0x20) != 0)))) {
    FUN_1403304fa(puVar1,_Dst);
    param_1[0x12] = puVar1;
  }
  if (0 < *(int *)(param_1 + 0x55)) {
    lVar7 = 0x40;
    uVar5 = 0;
    do {
      FUN_140330954(param_2,uVar5 & 0xffffffff,0);
      if (((longlong)uVar5 < (longlong)*(int *)(param_2 + 0x6b0)) &&
         (*(longlong *)(*(longlong *)(param_2 + 0x6a8) + lVar7) != 0)) {
        FUN_140330954(param_2,uVar5 & 0xffffffff);
      }
      uVar5 = uVar5 + 1;
      lVar7 = lVar7 + 0xa0;
    } while ((longlong)uVar5 < (longlong)*(int *)(param_1 + 0x55));
  }
  if ((local_48 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403304fa FUN_1403304fa body=120 status=ok
// SIG undefined FUN_1403304fa(void)

void FUN_1403304fa(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140330574((undefined8 *)(param_1 + 0xc0),7,1);
  *(byte *)(param_1 + 0x118) = *(byte *)(param_1 + 0x118) | 0x80;
  if (*(int *)(param_1 + 200) != 0) {
    local_30 = *(undefined8 *)(param_1 + 0xc0);
    local_28 = *(int *)(param_1 + 200);
    FUN_14066ba35(param_2);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140330574 FUN_140330574 body=77 status=ok
// SIG undefined FUN_140330574(void)

void FUN_140330574(longlong param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 8) = param_2;
    if ((uint)(*(int *)(param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1449e2712();
      return;
    }
  }
  else {
    if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(param_2);
    }
    if ((param_2 < iVar1) && (*(int *)(param_1 + 8) = param_2, param_3 == '\x01')) {
      FUN_146c4da92();
      return;
    }
  }
  return;
}



// FUNCTION 1403305c2 FUN_1403305c2 body=166 status=ok
// SIG undefined FUN_1403305c2(void)

undefined8 FUN_1403305c2(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auStack_208 [32];
  undefined **local_1e8 [17];
  longlong local_160;
  char local_40;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_208;
  FUN_1401ea154(local_1e8);
  FUN_1401ea8ec(local_1e8,param_2);
  FUN_14498dc1c(param_1,local_1e8,param_3);
  if (local_40 == '\x01') {
    local_40 = '\0';
  }
  local_1e8[0] = &PTR_FUN_14a9758a8;
  if (local_160 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_208) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14033066a FUN_14033066a body=286 status=ok
// SIG undefined FUN_14033066a(void)

undefined8 * FUN_14033066a(undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  
  param_1[0xc] = 0;
  param_1[0xd] = 0x100000000;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined8 *)((longlong)param_1 + 0x10c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x114) = 0;
  *(undefined2 *)(param_1 + 0x23) = 0;
  *(byte *)((longlong)param_1 + 0x11a) = *(byte *)((longlong)param_1 + 0x11a) & 0xfe;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  *param_1 = 0x3f800000;
  param_1[1] = 0;
  param_1[2] = 0x3f800000;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x24) = DAT_14c846330;
  *(undefined4 *)((longlong)param_1 + 0x2c) = DAT_14c846338;
  FUN_140330788(param_1 + 9,1,1);
  iVar2 = *(int *)(param_1 + 0x1b);
  *(uint *)(param_1 + 0x1b) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0xdc) < iVar2 + 1U) {
    FUN_14026f43e(param_1 + 0x1a,iVar2);
  }
  lVar3 = param_1[0x1a];
  lVar9 = (longlong)iVar2 * 0x30;
  uVar4 = *param_1;
  uVar5 = param_1[1];
  uVar6 = param_1[2];
  uVar7 = param_1[3];
  uVar8 = param_1[5];
  puVar1 = (undefined8 *)(lVar3 + 0x20 + lVar9);
  *puVar1 = param_1[4];
  puVar1[1] = uVar8;
  puVar1 = (undefined8 *)(lVar3 + 0x10 + lVar9);
  *puVar1 = uVar6;
  puVar1[1] = uVar7;
  *(undefined8 *)(lVar3 + lVar9) = uVar4;
  ((undefined8 *)(lVar3 + lVar9))[1] = uVar5;
  return param_1;
}



// FUNCTION 140330788 FUN_140330788 body=137 status=ok
// SIG undefined FUN_140330788(void)

void FUN_140330788(longlong param_1,int param_2,char param_3)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x20);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 0x20) = param_2;
    if ((uint)(*(int *)(param_1 + 0x24) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1474bf2b2(param_1);
    }
    lVar2 = *(longlong *)(param_1 + 0x18);
    if (*(longlong *)(param_1 + 0x18) == 0) {
      lVar2 = param_1;
    }
    memset((void *)(lVar2 + (longlong)iVar1 * 0x18),0,(longlong)(param_2 - iVar1) * 0x18);
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 0x20) = param_2, param_3 == '\x01')) {
      FUN_147b4e002(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 140330812 FUN_140330812 body=321 status=ok
// SIG undefined FUN_140330812(void)

float * FUN_140330812(float *param_1,double *param_2,float param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  dVar1 = param_2[2];
  dVar2 = param_2[1];
  fVar12 = param_3 * param_3;
  fVar9 = fVar12 * param_3;
  fVar11 = ((fVar9 + fVar9) - fVar12 * 3.0) + 1.0;
  fVar10 = fVar9 - fVar12;
  dVar3 = param_2[5];
  param_3 = (fVar9 - (fVar12 + fVar12)) + param_3;
  dVar4 = param_2[4];
  dVar5 = param_2[0x12];
  dVar6 = param_2[0x11];
  dVar7 = param_2[0xd];
  fVar9 = fVar12 * 3.0 - (fVar9 + fVar9);
  dVar8 = param_2[0xc];
  *param_1 = fVar9 * (float)param_2[0xb] +
             fVar10 * (float)param_2[0x10] + param_3 * (float)param_2[3] + fVar11 * (float)*param_2;
  param_1[1] = (float)dVar8 * fVar9 +
               (float)dVar6 * fVar10 + (float)dVar4 * param_3 + (float)dVar2 * fVar11;
  param_1[2] = (float)dVar7 * fVar9 +
               (float)dVar5 * fVar10 + (float)dVar3 * param_3 + (float)dVar1 * fVar11;
  return param_1;
}



// FUNCTION 140330954 FUN_140330954 body=1957 status=ok
// SIG undefined FUN_140330954(void)

void FUN_140330954(longlong param_1,int param_2,longlong param_3)

{
  int *piVar1;
  uint uVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  int iVar8;
  DWORD DVar9;
  DWORD DVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined4 *puVar13;
  uint *puVar14;
  undefined8 uVar15;
  uint uVar16;
  undefined ***pppuVar17;
  uint *puVar18;
  ulonglong uVar19;
  undefined8 *puVar20;
  longlong lVar21;
  undefined8 *puVar22;
  undefined1 auStack_158 [32];
  undefined8 *local_138;
  undefined1 local_129;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined ***local_118;
  undefined8 uStack_110;
  undefined **local_108;
  longlong *plStack_100;
  longlong local_f8;
  undefined1 local_f0;
  undefined4 local_ec;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  undefined2 local_6c;
  undefined1 local_6a;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  lVar5 = *(longlong *)(param_1 + 0x660);
  if ((lVar5 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar5);
  }
  else if (lVar5 == 0) goto LAB_140330c2a;
  lVar6 = *(longlong *)(**(longlong **)(lVar5 + 0xe0) + (longlong)param_2 * 8);
  if ((*(char *)(lVar6 + 0x290) != '\0') || (*(int *)(lVar6 + 0x10c) == 0)) goto LAB_140330c2a;
  lVar21 = (longlong)param_2 * 0x450 + (*(longlong **)(lVar5 + 0xe0))[2];
  lVar11 = *(longlong *)(param_1 + 0xb0);
  if (lVar11 == 0) {
    lVar11 = FUN_1448abda6(param_1);
  }
  uVar3 = *(undefined1 *)(lVar11 + 0x150);
  if (((param_3 == 0) && (*(longlong *)(lVar21 + 0x440) != 0)) ||
     ((param_3 != 0 && (*(longlong *)(lVar21 + 0x448) != 0)))) goto LAB_140330c2a;
  plVar12 = (longlong *)FUN_14001cc68(0x220,0x10);
  *(undefined4 *)(plVar12 + 1) = 0xffffffff;
  *(undefined1 *)((longlong)plVar12 + 0xc) = uVar3;
  *(undefined2 *)((longlong)plVar12 + 0xd) = 1;
  plVar12[0x12] = 0;
  plVar12[0x13] = 0x800000000;
  plVar12[0x18] = 0;
  plVar12[0x19] = 0x200000000;
  plVar12[0x20] = 0;
  plVar12[0x21] = 0x300000000;
  plVar12[0x22] = 0;
  plVar12[0x23] = 0;
  plVar12[0x24] = 0;
  *(undefined4 *)(plVar12 + 0x25) = 0x1ffffff;
  *(undefined4 *)(plVar12 + 0x34) = 0;
  plVar12[0x2a] = 0;
  plVar12[0x2b] = 0;
  plVar12[0x28] = 0;
  plVar12[0x29] = 0;
  plVar12[0x26] = 0;
  plVar12[0x27] = 0;
  *(undefined4 *)((longlong)plVar12 + 0x1a4) = 4;
  plVar12[0x35] = 0;
  plVar12[0x36] = 0;
  plVar12[0x37] = 0;
  plVar12[0x38] = 0;
  plVar12[0x39] = 0;
  plVar12[0x3a] = 0;
  plVar12[0x3b] = 0;
  plVar12[0x3c] = 0;
  *(undefined4 *)(plVar12 + 0x3d) = 0xffffffff;
  *(undefined2 *)((longlong)plVar12 + 0x1ec) = 0xff;
  *(undefined1 *)((longlong)plVar12 + 0x1ee) = 0;
  plVar12[0x3e] = 0;
  plVar12[0x3f] = 0;
  plVar12[0x40] = 0;
  plVar12[0x41] = 0;
  plVar12[0x42] = 0;
  *(undefined4 *)(plVar12 + 0x43) = 0xffffffff;
  *(undefined1 *)((longlong)plVar12 + 0x21c) = 0;
  *plVar12 = (longlong)&PTR_FUN_14a8987a0;
  puVar22 = (undefined8 *)(lVar21 + 0x448);
  if (param_3 == 0) {
    puVar22 = (undefined8 *)(lVar21 + 0x440);
  }
  *puVar22 = plVar12;
  uVar4 = *(undefined4 *)(lVar5 + 0x170);
  lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar8 = *(int *)(lVar5 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar8 != 2) {
      if (iVar8 != 1) goto LAB_140330b76;
      DVar9 = FUN_140ad26c0();
      DVar10 = GetCurrentThreadId();
      if (DVar9 == DVar10) goto LAB_140330fad;
      goto LAB_140330b7f;
    }
  }
  else {
LAB_140330b76:
    if (iVar8 != 0x10) {
LAB_140330b7f:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar8 = *(int *)(lVar5 + 0xc60), iVar8 == 2))
        goto LAB_140330fad;
        if (iVar8 == 1) {
          DVar9 = FUN_140ad26c0();
          DVar10 = GetCurrentThreadId();
          if (DVar9 == DVar10) goto LAB_140330fad;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar22 = (undefined8 *)
                  (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x308);
        puVar14 = (uint *)*puVar22;
        if (puVar14 != (uint *)0x0) goto LAB_140330d05;
        while( true ) {
          uVar16 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar16 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar16 | 1;
            __tlregdtor(&LAB_1434a3d89);
          }
          lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar13 = *(undefined4 **)(lVar5 + 0x310);
          *(undefined8 *)(lVar5 + 0x310) = 0;
          if (puVar13 == (undefined4 *)0x0) {
            puVar13 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar13 = 0xffffffff;
          *(undefined4 **)(puVar13 + 0x10) = puVar13 + 0x16;
          puVar13[0x12] = 0;
          *puVar22 = puVar13;
          FUN_140217a48(puVar22);
          puVar14 = (uint *)*puVar22;
LAB_140330d05:
          puVar20 = (undefined8 *)(*(longlong *)(puVar14 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar18 = (uint *)(puVar20 + 0x18);
          uVar16 = puVar14[0x12];
          if (puVar18 <= puVar14 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar14 + 0x10) = puVar14 + 0x4000;
            LOCK();
            uVar2 = *puVar14;
            *puVar14 = *puVar14 + uVar16 + 1;
            UNLOCK();
            if ((uVar2 ^ uVar16) != 0xffffffff) break;
            puVar14 = (uint *)*puVar22;
            *puVar14 = 0xffffffff;
            *(uint **)(puVar14 + 0x10) = puVar14 + 0x16;
            puVar14[0x12] = 0;
            *puVar22 = puVar14;
            puVar20 = (undefined8 *)((longlong)puVar14 + 0x5fU & 0xfffffffffffffff8);
            puVar18 = (uint *)(puVar20 + 0x18);
            uVar16 = 0;
            if (puVar18 <= puVar14 + 0x4000) {
              uVar16 = 1;
              goto LAB_140330d85;
            }
          }
        }
        uVar16 = uVar16 + 1;
LAB_140330d85:
        *(uint **)(puVar14 + 0x10) = puVar18;
        puVar14[0x12] = uVar16;
        iVar8 = 0;
        FUN_1447247dc(puVar20,0);
        *puVar20 = &PTR_FUN_14a899cb8;
        puVar20[0x15] = plVar12;
        puVar20[0x16] = lVar6;
        *(bool *)(puVar20 + 0x17) = param_3 != 0;
        *(undefined2 *)((longlong)puVar20 + 0xb9) = (undefined2)local_128;
        *(undefined1 *)((longlong)puVar20 + 0xbb) = local_128._2_1_;
        *(undefined4 *)((longlong)puVar20 + 0xbc) = uVar4;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar16 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar16 < 2) {
            uVar19 = (ulonglong)(byte)(&DAT_149e38edc)[uVar16];
            iVar8 = 0;
          }
          else {
            uVar19 = 2;
          }
        }
        else {
          iVar8 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar19 = 5;
        }
        if (*(code **)(puVar20[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar20[0xe] + 0x18))(puVar20 + 0xe,puVar20 + 9);
        }
        puVar20[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar20[9] = puVar20;
        puVar20[10] = puVar20;
        lVar5 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar5 == 0) {
          uVar7 = 1;
          if ((char)uVar19 != '\x06') {
            uVar7 = uVar19;
          }
          uVar19 = uVar7;
          uVar15 = 0;
        }
        else {
          if ((char)uVar19 == '\x06') {
            uVar19 = *(ulonglong *)(lVar5 + 0x38) >> 0x3b;
          }
          uVar15 = *(undefined8 *)(lVar5 + 0x30);
        }
        puVar20[0xf] = uVar15;
        puVar20[0x10] = uVar19 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar20 + 0x1c) = iVar8;
        if (puVar20 == (undefined8 *)0x0) {
          local_129 = 1;
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar20 + 1) = *(int *)(puVar20 + 1) + 1;
          UNLOCK();
          local_129 = 1;
          FUN_1447439e4(puVar20);
          LOCK();
          piVar1 = (int *)(puVar20 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar20)(puVar20,1);
          }
        }
      }
      else {
        local_138 = &local_128;
        local_118 = (undefined ***)0x0;
        local_108 = &PTR_LAB_14a899c60;
        local_128 = FUN_1434a5106;
        plStack_100 = plVar12;
        local_f8 = lVar6;
        local_f0 = param_3 != 0;
        local_ec = uVar4;
        FUN_14005a792(&DAT_14ca9a440,L"InitSplineMeshVertexFactory",&DAT_14cad3b80);
        if (local_128 != (code *)0x0) {
          pppuVar17 = local_118;
          if (local_118 == (undefined ***)0x0) {
            pppuVar17 = &local_108;
          }
          (*(code *)(*pppuVar17)[2])();
        }
      }
      goto LAB_140330c2a;
    }
  }
LAB_140330fad:
  local_b8 = 0x400000000;
  local_128 = (code *)0x0;
  uStack_120 = 0;
  local_118 = (undefined ***)0x0;
  uStack_110 = 0;
  local_108 = (undefined **)0x0;
  plStack_100 = (longlong *)0x0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0xffffffff;
  local_6c = 0xff;
  local_6a = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  local_138 = &local_128;
  FUN_1458895bc(lVar6 + 0x90,plVar12,uVar4,param_3 != 0);
  FUN_140ba0b60(plVar12,&DAT_14ca85100,&local_128);
  (**(code **)(*plVar12 + 0x18))(plVar12,&DAT_14ca85100);
LAB_140330c2a:
  if ((local_48 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140331110 FUN_140331110 body=232 status=ok
// SIG undefined FUN_140331110(void)

void FUN_140331110(undefined8 *param_1)

{
  int *piVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  lVar6 = param_1[0x15];
  if (lVar6 != -0x120) {
    uVar4 = *(uint *)(lVar6 + 0x120);
    if (uVar4 == 0) {
      uVar3 = 0x20;
    }
    else {
      uVar3 = 0;
      if (uVar4 != 0) {
        for (; (uVar4 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
        }
      }
    }
    lVar6 = *(longlong *)(lVar6 + 0x128 + (ulonglong)uVar3 * 8);
    if (lVar6 != 0) {
      uVar5 = CONCAT44(uVar3,uVar4);
      do {
        if (*(char *)(lVar6 + 0x119) == '\x02') {
          *(byte *)(lVar6 + 0xd6) = *(byte *)(lVar6 + 0xd6) & 0xef;
        }
        bVar2 = (byte)((ulonglong)uVar5 >> 0x20) & 0x1f;
        uVar4 = (uint)uVar5 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
        if (uVar4 == 0) break;
        uVar3 = 0;
        if (uVar4 != 0) {
          for (; (uVar4 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
          }
        }
        lVar6 = *(longlong *)(lVar6 + 0x128 + (ulonglong)uVar3 * 8);
        uVar5 = CONCAT44(uVar3,uVar4);
      } while (lVar6 != 0);
    }
  }
  FUN_1456d02da(param_1 + 0x25);
  FUN_1456d02da(param_1 + 0x16);
  lVar6 = param_1[0x15];
  if (lVar6 != 0) {
    (**(code **)(*(longlong *)(lVar6 + 0x60) + 0x10))(lVar6 + 0x60);
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001403311d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 1403311f8 FUN_1403311f8 body=44 status=ok
// SIG undefined FUN_1403311f8(void)

int FUN_1403311f8(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  
  LOCK();
  puVar1 = (uint *)(param_1 + -0x58);
  uVar2 = *puVar1;
  *puVar1 = *puVar1 - 1;
  UNLOCK();
  iVar3 = (uVar2 & 0x3fffffff) - 1;
  if (iVar3 == 0) {
    FUN_144a54812(param_1 + -0x60);
  }
  return iVar3;
}



// FUNCTION 140331224 FUN_140331224 body=201 status=ok
// SIG undefined FUN_140331224(void)

ulonglong FUN_140331224(longlong param_1)

{
  longlong *plVar1;
  uint uVar2;
  code *pcVar3;
  char cVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  uint uVar9;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(param_1 + 0x98) == 0) {
    uVar7 = CONCAT71((int7)(local_38 >> 8),1);
  }
  else {
    plVar1 = (longlong *)(param_1 + 0x90);
    uVar9 = 0;
    do {
      local_40 = 0xbff0000000000000;
      puVar5 = (undefined8 *)(*plVar1 + (longlong)(int)uVar9 * 0x40);
      pcVar3 = (code *)*puVar5;
      plVar8 = (longlong *)puVar5[2];
      if ((longlong *)puVar5[2] == (longlong *)0x0) {
        plVar8 = puVar5 + 4;
      }
      uVar6 = (**(code **)(*plVar8 + 8))();
      cVar4 = (*pcVar3)(uVar6,&local_40);
      if (cVar4 == '\0') {
        uVar9 = uVar9 + 1;
      }
      else {
        FUN_14033138c(plVar1,uVar9);
        FUN_1403312ee(plVar1);
      }
      uVar2 = *(uint *)(param_1 + 0x98);
    } while (uVar9 < uVar2);
    uVar7 = (ulonglong)CONCAT31((int3)(uVar2 >> 8),uVar2 == 0);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403312ee FUN_1403312ee body=63 status=ok
// SIG undefined FUN_1403312ee(void)

void FUN_1403312ee(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14033132e(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x40,0x10);
  }
  return;
}



// FUNCTION 14033132e FUN_14033132e body=93 status=ok
// SIG undefined FUN_14033132e(void)

ulonglong FUN_14033132e(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if ((((longlong)(int)(param_3 - param_2) & 0x3ffffffffffff00U) == 0) &&
     ((int)(param_3 * 2) <= (int)(param_2 * 3))) {
    return uVar1;
  }
  if (param_2 == 0 || 0x40 < (int)(param_3 - param_2)) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 6,0x10);
      uVar1 = uVar1 >> 6;
    }
  }
  return uVar1;
}



// FUNCTION 14033138c FUN_14033138c body=100 status=ok
// SIG undefined FUN_14033138c(void)

void FUN_14033138c(longlong *param_1,uint param_2)

{
  void *_Dst;
  int iVar1;
  longlong *plVar2;
  
  _Dst = (void *)(*param_1 + (longlong)(int)param_2 * 0x40);
  if (*(longlong *)(*param_1 + (longlong)(int)param_2 * 0x40) != 0) {
    plVar2 = (longlong *)((longlong)_Dst + 0x20);
    if (*(longlong **)((longlong)_Dst + 0x10) != (longlong *)0x0) {
      plVar2 = *(longlong **)((longlong)_Dst + 0x10);
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  iVar1 = (int)param_1[1];
  if (~param_2 + iVar1 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + 0x40),(longlong)(int)(~param_2 + iVar1) << 6);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 + -1;
  return;
}



// FUNCTION 1403313f0 FUN_1403313f0 body=95 status=ok
// SIG undefined FUN_1403313f0(void)

void FUN_1403313f0(longlong param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 0x3d0);
  iVar3 = param_2;
  if (iVar2 < *(int *)(param_1 + 0xa8)) {
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + (longlong)iVar2 * 8);
      if (lVar1 != 0) {
        FUN_140331450(lVar1,3);
        iVar2 = *(int *)(param_1 + 0x3d0);
      }
      iVar2 = iVar2 + 1;
      *(int *)(param_1 + 0x3d0) = iVar2;
    } while (((param_2 < 1) || (iVar3 = iVar3 + -1, iVar3 != 0)) &&
            (iVar2 < *(int *)(param_1 + 0xa8)));
  }
  return;
}



// FUNCTION 140331450 FUN_140331450 body=694 status=ok
// SIG undefined FUN_140331450(void)

void FUN_140331450(longlong *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
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
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((*(byte *)((longlong)param_1 + 100) & 2) != 0) {
    if ((*(byte *)((longlong)param_1 + 0x65) & 0x18) == 0x10) {
      (**(code **)(*param_1 + 0x368))(param_1,param_2);
    }
    else if ((*(byte *)(param_1 + 0x69) & 4) != 0) {
      *(byte *)(param_1 + 0x69) = *(byte *)(param_1 + 0x69) & 0xf3;
    }
    if (param_2 == 3) {
      FUN_14024d9f0(param_1);
      *(byte *)((longlong)param_1 + 100) = *(byte *)((longlong)param_1 + 100) & 0xfd;
      if ((((*(uint *)(param_1 + 1) & 0x10) == 0) && (lVar4 = param_1[4], lVar4 != 0)) &&
         (-1 < (short)*(undefined4 *)(lVar4 + 8))) {
        uVar1 = *(uint *)(lVar4 + 0xc);
        if ((int)uVar1 < DAT_14c9647dc) {
          lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
        }
        else {
          lVar4 = 0;
        }
        if ((*(uint *)(lVar4 + 8) >> 0x1c & 1) == 0) {
          if (DAT_14cae8b20 == 0) {
            local_40 = &local_20;
            local_20 = (code *)&LAB_14355090c;
            local_30 = FUN_14081d0ea;
            local_38 = FUN_14081d0ea;
            local_48 = &LAB_147b8e16d;
            local_50 = (code *)&LAB_140810a38;
            local_58 = L"Engine";
            local_60 = 0x800000000;
            local_68 = 0x10000000;
            local_70 = 8;
            local_78 = 0x3f0;
            FUN_14081cfa3(L"/Script/Engine",L"Level",&DAT_14cae8b20,&DAT_147b8e16c);
          }
          lVar4 = DAT_14cae8b20;
          if (DAT_14c951858 == 0) {
            local_40 = &local_20;
            local_20 = FUN_1449e2820;
            local_30 = FUN_14081d0ea;
            local_38 = FUN_14081d0ea;
            local_48 = &LAB_1468c5283;
            local_50 = FUN_142809da0;
            local_58 = L"Engine";
            local_60 = 0x400000000;
            local_68 = 0x10000000;
            local_70 = 8;
            local_78 = 0x50;
            FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
          }
          lVar3 = param_1[4];
          if (lVar3 != 0) {
            iVar2 = *(int *)(lVar4 + 0x38);
            do {
              if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < iVar2) ||
                 (lVar5 = lVar3,
                 *(longlong *)
                  (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)iVar2 * 8) !=
                 lVar4 + 0x30)) {
                lVar5 = 0;
              }
            } while ((lVar5 == 0) && (lVar3 = *(longlong *)(lVar3 + 0x20), lVar3 != 0));
            if ((lVar5 != 0) && (*(longlong *)(lVar5 + 0xc0) != 0)) {
              FUN_14021bad2(*(longlong *)(lVar5 + 0xc0),param_1);
              FUN_1400b2a20(param_1,3);
            }
          }
        }
      }
    }
    if (param_1[0x3a] != 0) {
      (**(code **)(*param_1 + 0x388))(param_1,0);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    FUN_144adf5f2(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140331716 FUN_140331716 body=36 status=ok
// SIG undefined FUN_140331716(void)

undefined8 FUN_140331716(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 140331740 FUN_140331740 body=261 status=ok
// SIG undefined FUN_140331740(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140331740(longlong param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_98 [32];
  undefined1 *local_78;
  LARGE_INTEGER local_70 [2];
  double local_60;
  undefined8 local_58;
  undefined1 local_49;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_58 = param_2;
  local_49 = param_3;
  if (*(longlong *)(param_1 + 0x60) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
    if (*(char *)(param_1 + 0x70) == '\0') {
      *(undefined1 *)(param_1 + 0x70) = 1;
      if (0 < *(int *)(param_1 + 0x20)) {
        uVar1 = *(undefined8 *)(param_1 + 0x60);
        QueryPerformanceCounter(local_70);
        local_60 = ((double)local_70[0].QuadPart * DAT_14c83f420 + 16777216.0) - _DAT_14c86a9d8;
        FUN_145bdec9c(local_70);
        local_78 = &local_49;
        uVar2 = FUN_147dffc32(param_4,&local_58,local_70,&local_60);
        FUN_147dffb6c(uVar1,uVar2,param_1 + 0x18);
      }
      *(undefined1 *)(param_1 + 0x70) = 0;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140331846 FUN_140331846 body=169 status=ok
// SIG undefined FUN_140331846(void)

void FUN_140331846(undefined8 *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  void *_Dst;
  
  lVar2 = *(longlong *)param_1[9];
  if (lVar2 == 0) {
    _Dst = (void *)FUN_14001cc68(0x2e0);
    memset(_Dst,0,0x2e0);
    iVar1 = *(int *)(param_1 + 0xb);
    *(uint *)(param_1 + 0xb) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0x5c) < iVar1 + 1U) {
      FUN_1456fe558(param_1 + 10,iVar1);
    }
    *(void **)(param_1[10] + (longlong)iVar1 * 8) = _Dst;
    param_1[5] = *(undefined8 *)(param_1[10] + (longlong)(*(int *)(param_1 + 0xb) + -1) * 8);
  }
  else {
    param_1[5] = *(undefined8 *)(lVar2 + 8);
    lVar3 = param_1[9];
    param_1[9] = lVar2;
    *(undefined8 *)(lVar2 + 8) = 0;
    if (lVar3 != 0) {
      FUN_1400020a8();
    }
  }
  *(undefined8 *)(param_1[5] + 0x278) = *param_1;
  return;
}



// FUNCTION 1403318f0 FUN_1403318f0 body=230 status=ok
// SIG undefined FUN_1403318f0(void)

void FUN_1403318f0(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = (longlong)param_2 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar2 < 0x7ff1) {
          uVar2 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)[(longlong)param_2 & 0xfffffffffffffff]];
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
    iVar1 = (int)(uVar2 >> 4);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar4 = iVar1;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x10,8);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1403319d6 FUN_1403319d6 body=353 status=ok
// SIG undefined FUN_1403319d6(void)

void FUN_1403319d6(longlong param_1,longlong param_2)

{
  FUN_140331bac(param_1,*(undefined4 *)(param_2 + 0x2c),1);
  FUN_140331c24(param_1 + 0x10,*(undefined4 *)(param_2 + 0x2c),1);
  FUN_1403321a4(param_1 + 0x20,*(undefined4 *)(param_2 + 0x2c),1);
  FUN_140331d44(param_1 + 0x30,*(undefined4 *)(param_2 + 0x2c),1);
  FUN_140332294(param_1 + 0x40,*(undefined4 *)(param_2 + 0x2c),1);
  FUN_140331de8(param_1 + 0x50,*(undefined4 *)(param_2 + 0x2c),1);
  FUN_140331c9c(param_1 + 0x60,*(undefined4 *)(param_2 + 0x2c),1);
  FUN_140331e76(param_1 + 0x70,*(undefined4 *)(param_2 + 0x20),1);
  FUN_140331eea(param_1 + 0x80,*(undefined4 *)(param_2 + 0x20),1);
  FUN_140331f5e(param_1 + 0x90,*(undefined4 *)(param_2 + 0x20),1);
  FUN_14033221c(param_1 + 0xa0,*(undefined4 *)(param_2 + 0x24),1);
  FUN_140331b38(param_1 + 0xb0,*(undefined4 *)(param_2 + 0x24),1);
  FUN_14033212e(param_1 + 0xc0,*(undefined4 *)(param_2 + 0x24),1);
  FUN_140331fd2(param_1 + 0xd0,*(undefined4 *)(param_2 + 0x24),1);
  FUN_140332046(param_1 + 0xe0,*(undefined4 *)(param_2 + 0x28),1);
  FUN_1403320ba(param_1 + 0xf0,*(undefined4 *)(param_2 + 0x28),1);
  FUN_140331b38(param_1 + 0x100,*(undefined4 *)(param_2 + 0x28),1);
  FUN_140331b38(param_1 + 0x110,*(undefined4 *)(param_2 + 0x28),1);
  FUN_140331bac(param_1 + 0x120,*(undefined4 *)(param_2 + 0x30),1);
  FUN_140331c24(param_1 + 0x130,*(undefined4 *)(param_2 + 0x30),1);
  return;
}



// FUNCTION 140331b38 FUN_140331b38 body=115 status=ok
// SIG undefined FUN_140331b38(void)

void FUN_140331b38(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1456fe652(param_1,iVar1);
    }
    FUN_1456fe298((longlong)iVar1 * 8 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
      FUN_1456fe2be(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 140331bac FUN_140331bac body=118 status=ok
// SIG undefined FUN_140331bac(void)

void FUN_140331bac(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_140332f3e(param_1,iVar1);
    }
    FUN_1403ee7be((longlong)iVar1 * 0x30 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
      FUN_140332346(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 140331c24 FUN_140331c24 body=118 status=ok
// SIG undefined FUN_140331c24(void)

void FUN_140331c24(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_140333332(param_1,iVar1);
    }
    FUN_140331c9b((longlong)iVar1 * 0x18 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
      FUN_140332386(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 140331c9b FUN_140331c9b body=1 status=ok
// SIG undefined FUN_140331c9b(void)

void FUN_140331c9b(void)

{
  return;
}



// FUNCTION 140331c9c FUN_140331c9c body=117 status=ok
// SIG undefined FUN_140331c9c(void)

void FUN_140331c9c(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_140332e3e(param_1,iVar1);
    }
    FUN_140331d12((longlong)iVar1 * 0x40 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
      FUN_1403324c6(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 140331d12 FUN_140331d12 body=49 status=ok
// SIG undefined FUN_140331d12(void)

void FUN_140331d12(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x30;
    do {
      *(undefined8 *)(param_1 + -0x10) = 0;
      *(undefined4 *)(param_1 + -8) = 0;
      *(undefined8 *)(param_1 + -0x30) = 0;
      *(undefined8 *)(param_1 + -0x28) = 0;
      *(undefined8 *)(param_1 + -0x20) = 0;
      *(undefined8 *)(param_1 + -4) = 0x3f800000;
      param_1 = param_1 + 0x40;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140331d44 FUN_140331d44 body=114 status=ok
// SIG undefined FUN_140331d44(void)

void FUN_140331d44(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1403334a8(param_1,iVar1);
    }
    FUN_140331db7((longlong)iVar1 * 0x2c + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
      FUN_140332406(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 140331db7 FUN_140331db7 body=48 status=ok
// SIG undefined FUN_140331db7(void)

void FUN_140331db7(longlong param_1,int param_2)

{
  undefined1 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined1 *)(param_1 + 0x28);
    do {
      *(undefined8 *)(puVar1 + -0x18) = 0x3f80000000000000;
      *(undefined8 *)(puVar1 + -8) = 0xffff000000000000;
      *puVar1 = 0xff;
      puVar1 = puVar1 + 0x2c;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140331de8 FUN_140331de8 body=114 status=ok
// SIG undefined FUN_140331de8(void)

void FUN_140331de8(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_140333166(param_1,iVar1);
    }
    FUN_140331e5b((longlong)iVar1 * 0x70 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
      FUN_140332486(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 140331e5b FUN_140331e5b body=27 status=ok
// SIG undefined FUN_140331e5b(void)

void FUN_140331e5b(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)(param_1 + 0x20);
    do {
      puVar1[2] = 0;
      puVar1[3] = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = puVar1 + 0xe;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140331e76 FUN_140331e76 body=115 status=ok
// SIG undefined FUN_140331e76(void)

void FUN_140331e76(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_14033361a(param_1,iVar1);
    }
    FUN_1408c9ebf((longlong)iVar1 * 0x310 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
      FUN_14081ba84(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 140331eea FUN_140331eea body=115 status=ok
// SIG undefined FUN_140331eea(void)

void FUN_140331eea(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_140333732(param_1,iVar1);
    }
    FUN_1403329f3((longlong)iVar1 * 0x10 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
      FUN_140332cbe(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 140331f5e FUN_140331f5e body=115 status=ok
// SIG undefined FUN_140331f5e(void)

void FUN_140331f5e(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_140333840(param_1,iVar1);
    }
    FUN_140332a06((longlong)iVar1 * 0x10 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
      FUN_140332cfe(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 140331fd2 FUN_140331fd2 body=115 status=ok
// SIG undefined FUN_140331fd2(void)

void FUN_140331fd2(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1456fe6d6(param_1,iVar1);
    }
    FUN_1456fe2ab((longlong)iVar1 * 8 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
      FUN_1456fe33e(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 140332046 FUN_140332046 body=116 status=ok
// SIG undefined FUN_140332046(void)

void FUN_140332046(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146cc30c8(param_1,iVar1);
    }
    FUN_146cc303e((longlong)iVar1 * 0x60 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
      FUN_146cc315c(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1403320ba FUN_1403320ba body=116 status=ok
// SIG undefined FUN_1403320ba(void)

void FUN_1403320ba(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146cc326e(param_1,iVar1);
    }
    FUN_146cc3211((longlong)iVar1 * 0x48 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
      FUN_146cc3302(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 14033212e FUN_14033212e body=116 status=ok
// SIG undefined FUN_14033212e(void)

void FUN_14033212e(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1456fe75a(param_1,iVar1);
    }
    FUN_14033394e((longlong)iVar1 * 0x18 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
      FUN_1456fe2fe(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}


