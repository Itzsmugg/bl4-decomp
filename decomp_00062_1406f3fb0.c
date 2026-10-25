// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1406f3fb0 FUN_1406f3fb0 body=61 status=ok
// SIG undefined FUN_1406f3fb0(void)

longlong FUN_1406f3fb0(ushort *param_1)

{
  longlong lVar1;
  
  AcquireSRWLockShared((PSRWLOCK)&DAT_14c9a6598);
  lVar1 = (ulonglong)((uint)*param_1 * 0x50) + DAT_14c9a6588;
  ReleaseSRWLockShared((PSRWLOCK)&DAT_14c9a6598);
  return lVar1;
}



// FUNCTION 1406f3fee FUN_1406f3fee body=85 status=ok
// SIG undefined FUN_1406f3fee(void)

void FUN_1406f3fee(void)

{
  undefined1 in_stack_00000028;
  undefined4 in_stack_00000030;
  undefined1 auStack_38 [32];
  undefined1 *local_18;
  undefined1 local_10;
  undefined1 local_f;
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = &local_10;
  local_10 = in_stack_00000028;
  local_f = 0;
  local_c = in_stack_00000030;
  FUN_1406f4044();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406f4044 FUN_1406f4044 body=853 status=ok
// SIG undefined FUN_1406f4044(void)

void FUN_1406f4044(longlong param_1,longlong *param_2,longlong *param_3,float param_4,byte *param_5)

{
  double *pdVar1;
  double dVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte bVar6;
  char cVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 *puVar11;
  ulonglong uVar12;
  longlong *plVar13;
  longlong *plVar14;
  ulonglong uVar15;
  uint uVar16;
  float fVar17;
  undefined1 auStack_188 [32];
  undefined2 local_168;
  undefined1 local_166;
  float local_164;
  undefined8 uStack_160;
  undefined8 uStack_158;
  byte local_118;
  undefined8 local_108;
  undefined8 uStack_100;
  longlong local_f8 [8];
  byte local_b8;
  longlong local_a8 [11];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_188;
  lVar10 = *param_2;
  if (lVar10 != 0) {
    uVar16 = (uint)lVar10;
    if ((int)(uVar16 & 0xffffff) < *(int *)(param_1 + 0x10)) {
      lVar8 = param_1 + 0x18;
      if (*(longlong *)(param_1 + 0x28) != 0) {
        lVar8 = *(longlong *)(param_1 + 0x28);
      }
      if ((*(uint *)(lVar8 + (ulonglong)((uVar16 & 0xffffff) >> 5) * 4) >> (uVar16 & 0x1f) & 1) != 0
         ) {
        lVar8 = *(longlong *)(param_1 + 8);
        lVar9 = (ulonglong)(uVar16 & 0xffffff) * 0x70;
        if (((lVar8 + lVar9 != 0) && (*(longlong *)(lVar8 + 0x60 + lVar9) == lVar10)) &&
           (*(char *)(lVar8 + 1 + lVar9) != '\x04')) {
          FUN_1405a424c(param_1);
        }
      }
    }
  }
  if (param_4 <= 0.0) {
    *param_2 = 0;
  }
  else {
    local_168 = 0x100;
    bVar6 = 0;
    local_166 = 0;
    local_118 = 0;
    local_164 = 0.0;
    uStack_160._0_4_ = 0;
    uStack_160._4_4_ = 0;
    uStack_158._0_4_ = 0;
    uStack_158._4_4_ = 0;
    local_108 = 0;
    uStack_100 = 0;
    if (&uStack_158 != param_3) {
      local_b8 = *(byte *)(param_3 + 8);
      (*(code *)(&PTR_LAB_14aadfe40)[local_b8])(local_f8,param_3);
      plVar13 = local_f8;
      plVar14 = local_a8;
      for (lVar10 = 10; lVar10 != 0; lVar10 = lVar10 + -1) {
        *plVar14 = *plVar13;
        plVar13 = plVar13 + 1;
        plVar14 = plVar14 + 1;
      }
      plVar13 = &uStack_158;
      plVar14 = local_f8;
      for (lVar10 = 10; lVar10 != 0; lVar10 = lVar10 + -1) {
        *plVar14 = *plVar13;
        plVar13 = plVar13 + 1;
        plVar14 = plVar14 + 1;
      }
      plVar13 = local_a8;
      plVar14 = &uStack_158;
      for (lVar10 = 10; lVar10 != 0; lVar10 = lVar10 + -1) {
        *plVar14 = *plVar13;
        plVar13 = plVar13 + 1;
        plVar14 = plVar14 + 1;
      }
      (*(code *)(&PTR_LAB_14a1c87a0)[local_b8])(local_f8);
      bVar6 = (byte)local_168 & 0xfc;
    }
    local_168 = CONCAT11(local_168._1_1_,bVar6 | *param_5 | param_5[1] * '\x02');
    local_164 = param_4;
    cVar7 = FUN_1417f4bee(&uStack_158);
    bVar6 = (byte)local_168 & 0xfb | cVar7 << 2;
    if (((*(longlong *)(param_1 + 0x158) != 0) &&
        (lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x158) + 0x30), lVar10 != 0)) &&
       (lVar10 = *(longlong *)(lVar10 + 0x360), lVar10 != 0)) {
      iVar3 = *(int *)(lVar10 + 0x1b0);
      if (((-1 < (longlong)iVar3) && (iVar3 < *(int *)(lVar10 + 0x1a8))) &&
         (puVar11 = (undefined1 *)((longlong)iVar3 * 0x78 + *(longlong *)(lVar10 + 0x1a0)),
         puVar11 != (undefined1 *)0x0)) {
        local_166 = *puVar11;
      }
    }
    uVar16 = -(uint)(*(float *)(param_5 + 4) < 0.0);
    fVar17 = (float)(~uVar16 & (uint)*(float *)(param_5 + 4) | (uint)param_4 & uVar16);
    local_a8[0] = 0;
    if (*(longlong *)(param_1 + 0x150) == DAT_14c872be0) {
      uStack_160 = (double)fVar17 + *(double *)(param_1 + 0x140);
      local_168 = CONCAT11(1,bVar6);
      FUN_14496d3a8(param_1,local_f8);
      iVar3 = *(int *)(param_1 + 0x48);
      *(uint *)(param_1 + 0x48) = iVar3 + 1U;
      if (*(uint *)(param_1 + 0x4c) < iVar3 + 1U) {
        FUN_1458de3d0(param_1 + 0x40,iVar3);
      }
      *(longlong *)(*(longlong *)(param_1 + 0x40) + (longlong)iVar3 * 8) = local_f8[0];
      if (1 < *(int *)(param_1 + 0x48)) {
        lVar10 = *(longlong *)(param_1 + 0x40);
        uVar12 = (ulonglong)(*(int *)(param_1 + 0x48) - 1);
        uVar4 = *(undefined8 *)(lVar10 + uVar12 * 8);
        do {
          uVar16 = (int)uVar12 - 1;
          uVar15 = (ulonglong)(uVar16 >> 1);
          uVar5 = *(undefined8 *)(lVar10 + uVar15 * 8);
          dVar2 = *(double *)
                   (*(longlong *)(param_1 + 8) + 8 + (ulonglong)((uint)uVar5 & 0xffffff) * 0x70);
          pdVar1 = (double *)
                   (*(longlong *)(param_1 + 8) + 8 + (ulonglong)((uint)uVar4 & 0xffffff) * 0x70);
          if (dVar2 < *pdVar1 || dVar2 == *pdVar1) break;
          *(undefined8 *)(lVar10 + uVar12 * 8) = uVar5;
          *(undefined8 *)(lVar10 + uVar15 * 8) = uVar4;
          uVar12 = uVar15;
        } while (1 < uVar16);
      }
    }
    else {
      uStack_160 = (double)fVar17;
      local_168 = (ushort)bVar6;
      FUN_14496d3a8(param_1,local_a8);
      FUN_14496dca4(param_1 + 0xa0,local_f8,local_a8,0);
      local_f8[0] = local_a8[0];
    }
    *param_2 = local_f8[0];
    (*(code *)(&PTR_LAB_14a1c87a0)[local_118])(&uStack_158);
  }
  if ((local_50 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1406f439a FUN_1406f439a body=102 status=ok
// SIG undefined FUN_1406f439a(void)

ulonglong FUN_1406f439a(longlong param_1)

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
LAB_1406f43e3:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_1406f43e3;
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



// FUNCTION 1406f443c FUN_1406f443c body=33 status=ok
// SIG undefined FUN_1406f443c(void)

void FUN_1406f443c(longlong param_1)

{
  FUN_1406f445e();
  FUN_1406753f2(param_1 + 0x88);
  return;
}



// FUNCTION 1406f445e FUN_1406f445e body=261 status=ok
// SIG undefined FUN_1406f445e(void)

void FUN_1406f445e(longlong param_1,float param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  float fVar5;
  undefined1 auStack_48 [36];
  char local_24;
  int local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(char *)(param_1 + 0x74) == '\x01') {
    param_2 = *(float *)(param_1 + 0x84) - param_2;
    fVar5 = 0.0;
    if (0.0 <= param_2) {
      fVar5 = param_2;
    }
    *(float *)(param_1 + 0x84) = fVar5;
    if (fVar5 <= 0.0) {
      iVar2 = *(int *)(param_1 + 0x78) + 1;
      *(int *)(param_1 + 0x78) = iVar2;
      iVar1 = *(int *)(param_1 + 0x70);
      if (((((longlong)iVar1 < 0) || (*(int *)(*(longlong *)(param_1 + 0x60) + 0x38) <= iVar1)) ||
          (lVar3 = (longlong)iVar1 * 0x108 + *(longlong *)(*(longlong *)(param_1 + 0x60) + 0x30),
          lVar3 == 0)) || (*(char *)(lVar3 + 0x79) == '\0')) {
        bVar4 = *(int *)(param_1 + 0x7c) <= iVar2 && 0 < *(int *)(param_1 + 0x7c);
      }
      else {
        bVar4 = false;
      }
      if (0 < *(int *)(param_1 + 0x40)) {
        local_1c = *(undefined4 *)(param_1 + 0x7c);
        local_24 = bVar4;
        local_20 = iVar2;
        FUN_1447cd2ec(param_1 + 0x38);
      }
      if (bVar4 != false) {
        if (*(char *)(param_1 + 0x74) != '\0') {
          *(undefined1 *)(param_1 + 0x74) = 0;
          (**(code **)(*(longlong *)(param_1 + -0x20) + 0x18))(param_1 + -0x20);
        }
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
      }
      *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(param_1 + 0x80);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406f4572 FUN_1406f4572 body=600 status=ok
// SIG undefined FUN_1406f4572(void)

void FUN_1406f4572(longlong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  ulonglong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar8 = *(longlong *)(param_1 + 0x168);
  if ((((lVar8 != 0) && (*(int *)(param_1 + 0x17c) != 0)) &&
      (uVar7 = *(uint *)(param_1 + 0x178), -1 < (int)uVar7)) && ((int)uVar7 < DAT_14c9647dc)) {
    lVar5 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
    if (((lVar5 != 0) && (*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x17c))) &&
       ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)) {
      *(undefined4 *)(param_1 + 0xf8) = 0;
      if (*(int *)(param_1 + 0xfc) < 0) {
        FUN_1401a2688(param_1 + 0xf0);
        lVar8 = *(longlong *)(param_1 + 0x168);
      }
      uVar1 = *(ulonglong *)(param_1 + 0x178);
      if (((uVar1 >> 0x20 != 0) && (uVar7 = (uint)uVar1, -1 < (int)uVar7)) &&
         ((int)uVar7 < DAT_14c9647dc)) {
        plVar4 = (longlong *)
                 ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)((uint)(uVar1 >> 0xd) & 0x3fff8)));
        if ((((plVar4 != (longlong *)0x0) &&
             (uVar9 = (uint)(uVar1 >> 0x20), *(uint *)(plVar4 + 2) == uVar9)) &&
            ((*(uint *)(plVar4 + 1) & 0x10200000) == 0)) &&
           (plVar4 = (longlong *)*plVar4, plVar4 != (longlong *)0x0)) {
          local_60 = param_2;
          cVar2 = (**(code **)(*plVar4 + 0xcf8))(plVar4);
          if ((cVar2 != '\0') && (*(int *)(lVar8 + 0xa8) != *(int *)(lVar8 + 0xd4))) {
            lVar5 = lVar8 + 0xd8;
            if (*(longlong *)(lVar8 + 0xe0) != 0) {
              lVar5 = *(longlong *)(lVar8 + 0xe0);
            }
            iVar3 = *(int *)(lVar5 + (ulonglong)(*(int *)(lVar8 + 0xe8) - 1U & (uVar9 ^ uVar7)) * 4)
            ;
            if (iVar3 != -1) {
              lVar5 = *(longlong *)(lVar8 + 0xa0);
              do {
                lVar6 = (longlong)iVar3 * 0x230;
                local_50 = *(undefined8 *)(lVar5 + lVar6);
                local_58 = uVar1;
                cVar2 = FUN_144717174(&local_50,&local_58);
                lVar5 = *(longlong *)(lVar8 + 0xa0);
                if (cVar2 != '\0') {
                  if ((lVar5 + lVar6 != 0) && (lVar5 + lVar6 != -8)) {
                    plVar4 = (longlong *)(lVar5 + lVar6 + 0x110);
                    goto LAB_1406f474c;
                  }
                  break;
                }
                iVar3 = *(int *)(lVar5 + 0x228 + lVar6);
              } while (iVar3 != -1);
            }
          }
          plVar4 = plVar4 + (longlong)(int)plVar4[0xe3] * 2 + 0xda;
LAB_1406f474c:
          FUN_1406f47cc(param_1 + 0xf0,plVar4);
          param_2 = local_60;
        }
      }
    }
  }
  FUN_144a1f1ba(param_1,param_2);
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406f47cc FUN_1406f47cc body=103 status=ok
// SIG undefined FUN_1406f47cc(void)

void FUN_1406f47cc(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_2 + 1);
  if ((longlong)(int)uVar1 != 0) {
    iVar2 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_144a2c682(param_1,iVar2);
    }
    memcpy((void *)((longlong)iVar2 * 0x60 + *param_1),(void *)*param_2,(longlong)(int)uVar1 * 0x60)
    ;
    return;
  }
  return;
}



// FUNCTION 1406f4834 FUN_1406f4834 body=187 status=ok
// SIG undefined FUN_1406f4834(void)

void FUN_1406f4834(longlong *param_1,undefined8 *param_2)

{
  uint *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_78 [32];
  longlong local_58;
  int local_50;
  undefined4 local_4c;
  longlong local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  puVar1 = (uint *)*param_2;
  local_58 = *param_1;
  local_50 = (int)param_1[1];
  local_4c = *(undefined4 *)((longlong)param_1 + 0xc);
  lVar3 = *(longlong *)
           (*(longlong *)(*(longlong *)(local_58 + 0x60) + (longlong)local_50 * 8) + 0x20);
  lVar4 = 0;
  local_48 = lVar3 + (ulonglong)puVar1[1];
  if ((ulonglong)puVar1[1] == 0xffffffff) {
    local_48 = lVar4;
  }
  local_40 = lVar3 + (ulonglong)puVar1[2];
  if ((ulonglong)puVar1[2] == 0xffffffff) {
    local_40 = lVar4;
  }
  lVar2 = lVar3 + (ulonglong)*puVar1;
  if ((ulonglong)*puVar1 == 0xffffffff) {
    lVar2 = lVar4;
  }
  lVar3 = lVar3 + (ulonglong)puVar1[3];
  if ((ulonglong)puVar1[3] == 0xffffffff) {
    lVar3 = lVar4;
  }
  FUN_1406f48f0(&local_58,lVar2,&local_48,lVar3);
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406f48f0 FUN_1406f48f0 body=625 status=ok
// SIG undefined FUN_1406f48f0(void)

void FUN_1406f48f0(longlong *param_1,longlong *param_2,longlong *param_3,longlong param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  float fVar8;
  undefined1 auStack_138 [32];
  code **local_118;
  undefined4 local_110;
  undefined4 local_108;
  undefined8 local_100;
  wchar_t *local_f8;
  code *local_f0;
  undefined1 *local_e8;
  code **local_e0;
  undefined1 *local_d8;
  code *local_d0;
  longlong local_c0;
  code *local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_138;
  uVar7 = (ulonglong)
          *(ushort *)
           (*(longlong *)(*(longlong *)(*param_1 + 0x60) + (longlong)(int)param_1[1] * 8) + 0xe);
  if (uVar7 != 0) {
    puVar1 = (undefined8 *)*param_3;
    local_c0 = param_3[1];
    uVar6 = 0;
    puVar5 = puVar1;
    do {
      if (*param_2 != 0) {
        lVar2 = FUN_1406f4b62(param_2);
        if (lVar2 != 0) {
          if (DAT_14caec470 == 0) {
            local_b8 = FUN_1417df956;
            local_d0 = FUN_14081d0ea;
            local_d8 = &LAB_1463eaa20;
            local_e0 = &local_b8;
            local_e8 = &LAB_147bbd9ea;
            local_f0 = FUN_1401cf6d7;
            local_f8 = L"Engine";
            local_100 = 0;
            local_108 = 0x10000000;
            local_110 = 8;
            local_118 = (code **)CONCAT44(local_118._4_4_,0x330);
            FUN_14081cfa3(L"/Script/Engine",L"MaterialInstanceDynamic",&DAT_14caec470,FUN_1463eb22e)
            ;
          }
          if ((*(int *)(DAT_14caec470 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
               (longlong)*(int *)(DAT_14caec470 + 0x38) * 8) == DAT_14caec470 + 0x30)) {
            fVar8 = (float)*(double *)(param_4 + uVar6 * 8);
            if (puVar1 == (undefined8 *)0x0) {
              FUN_14472da24(lVar2,*(undefined8 *)(local_c0 + uVar6 * 8),fVar8);
            }
            else {
              local_b8 = (code *)((ulonglong)local_b8 & 0xffffffffffffff00);
              local_70 = 0;
              uStack_68 = 0;
              local_80 = 0;
              uStack_78 = 0;
              local_90 = 0;
              uStack_88 = 0;
              local_a0 = 0;
              uStack_98 = 0;
              local_b0 = 0;
              uStack_a8 = 0;
              local_118 = &local_b8;
              FUN_140042bb4(lVar2,puVar5,fVar8,0);
            }
            goto LAB_1406f49f7;
          }
        }
        lVar2 = FUN_1406f4b62(param_2);
        if (lVar2 != 0) {
          lVar3 = FUN_140a2e7a0();
          if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) {
            if (puVar1 == (undefined8 *)0x0) {
              uVar4 = *(undefined8 *)(local_c0 + uVar6 * 8);
            }
            else {
              uVar4 = *puVar5;
            }
            FUN_14490d20c(lVar2,uVar4,(float)*(double *)(param_4 + uVar6 * 8));
          }
        }
      }
LAB_1406f49f7:
      uVar6 = uVar6 + 1;
      puVar5 = puVar5 + 2;
      param_2 = param_2 + 2;
    } while (uVar7 != uVar6);
  }
  if ((local_60 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406f4b62 FUN_1406f4b62 body=89 status=ok
// SIG undefined FUN_1406f4b62(void)

undefined8 FUN_1406f4b62(undefined8 *param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  uVar1 = *(uint *)(param_1 + 1);
  iVar2 = *(int *)((longlong)param_1 + 0xc);
  if (uVar1 == 0 && iVar2 == 0) {
    return *param_1;
  }
  if (iVar2 == 0) {
    return 0;
  }
  uVar3 = 0;
  if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
    puVar4 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (puVar4 == (undefined8 *)0x0) {
      return 0;
    }
    if (*(int *)(puVar4 + 2) != iVar2) {
      return 0;
    }
    if ((*(uint *)(puVar4 + 1) & 0x10200000) != 0) {
      return 0;
    }
    uVar3 = *puVar4;
  }
  return uVar3;
}



// FUNCTION 1406f4bbc FUN_1406f4bbc body=310 status=ok
// SIG undefined FUN_1406f4bbc(void)

undefined4 *
FUN_1406f4bbc(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

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
  FUN_1406f4d8a(param_1,local_50);
  puVar1 = (undefined8 *)param_3[1];
  uVar4 = *(uint *)*param_3;
  *local_48 = uVar4;
  *(undefined8 *)(local_48 + 2) = *puVar1;
  local_48[4] = 0xffffffff;
  local_54 = local_50[0];
  local_68 = param_4;
  cVar2 = FUN_1406f4cf4(param_1,uVar4,local_48);
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
      local_48[5] = uVar4;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      local_48[4] = *(uint *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
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
      FUN_1406f4fe8(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406f4cf4 FUN_1406f4cf4 body=150 status=ok
// SIG undefined FUN_1406f4cf4(void)

void FUN_1406f4cf4(longlong *param_1,uint param_2,int *param_3,int *param_4,undefined1 *param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 uVar6;
  longlong *plVar7;
  int iVar8;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar7 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[8];
    }
    iVar8 = *(int *)((longlong)plVar7 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar8 != -1) {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar8 * 0x18);
        if (*piVar1 == *param_3) {
          iVar2 = *param_3;
          iVar3 = param_3[1];
          iVar4 = param_3[2];
          iVar5 = param_3[3];
          *piVar1 = iVar2;
          piVar1[1] = iVar3;
          piVar1[2] = iVar4;
          piVar1[3] = iVar5;
          FUN_1406f4f60(iVar2,*param_4,1);
          *param_4 = iVar8;
          uVar6 = 1;
          goto LAB_1406f4d5e;
        }
        iVar8 = piVar1[4];
      } while (iVar8 != -1);
    }
  }
  uVar6 = 0;
LAB_1406f4d5e:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar6;
  }
  return;
}



// FUNCTION 1406f4d8a FUN_1406f4d8a body=470 status=ok
// SIG undefined FUN_1406f4d8a(void)

int * FUN_1406f4d8a(longlong *param_1,int *param_2)

{
  uint *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  byte bVar4;
  int iVar5;
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
      FUN_14482b872(param_1,iVar11);
    }
    iVar6 = (int)param_1[5];
    if (iVar6 == 0) {
      iVar5 = -1;
    }
    else {
      iVar5 = iVar6 + 0x1e;
      if (-1 < iVar6 + -1) {
        iVar5 = iVar6 + -1;
      }
      iVar5 = iVar5 >> 5;
    }
    plVar9 = param_1 + 2;
    iVar8 = iVar6 + 1;
    iVar12 = iVar6 + 0x1f;
    if (-1 < iVar6) {
      iVar12 = iVar6;
    }
    if (iVar12 >> 5 == iVar5) {
      *(int *)(param_1 + 5) = iVar8;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar6) {
        if (iVar6 + 0x20U < 0xa0) {
          iVar8 = 0x80;
          iVar5 = iVar6;
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
          uVar3 = FUN_144a3809e(uVar7 << 2,0);
          iVar5 = (int)(uVar3 >> 2);
          iVar8 = -0x20;
          if ((int)uVar13 <= iVar5) {
            iVar8 = iVar5 << 5;
          }
          iVar5 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar8;
        FUN_1446efbd8(plVar9,iVar5);
        iVar8 = (int)param_1[5] + 1;
      }
      iVar5 = iVar8 + 0x1f;
      if (-1 < iVar8) {
        iVar5 = iVar8;
      }
      *(int *)(param_1 + 5) = iVar8;
      if (iVar8 % 0x20 != 0) {
        plVar10 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar10 = plVar9;
        }
        bVar4 = -(char)(iVar8 % 0x20);
        *(uint *)((longlong)plVar10 + (longlong)(iVar5 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar10 + (longlong)(iVar5 >> 5) * 4) << (bVar4 & 0x1f)) >>
             (bVar4 & 0x1f);
      }
    }
    lVar2 = (longlong)iVar11;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[4];
    }
    bVar4 = (byte)iVar6 & 0x1f;
    puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar12 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
  }
  else {
    iVar11 = (int)param_1[6];
    lVar2 = (longlong)iVar11;
    iVar6 = *(int *)(*param_1 + 4 + lVar2 * 0x18);
    *(int *)(param_1 + 6) = iVar6;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar6 * 0x18) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar2 * 0x18 + *param_1;
  return param_2;
}



// FUNCTION 1406f4f60 FUN_1406f4f60 body=136 status=ok
// SIG undefined FUN_1406f4f60(void)

void FUN_1406f4f60(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)(lVar2 + (longlong)param_2 * 0x18 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x18) = param_2;
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
      puVar7 = puVar7 + 6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1406f4fe8 FUN_1406f4fe8 body=536 status=ok
// SIG undefined FUN_1406f4fe8(void)

void FUN_1406f4fe8(longlong *param_1)

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
        lVar10 = (longlong)iVar6;
        uVar13 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar11 + lVar10 * 0x18);
        iVar12 = (int)uVar13;
        *(int *)(lVar11 + 0x14 + lVar10 * 0x18) = iVar12;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar11 + 0x10 + lVar10 * 0x18) =
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
            if (iVar2 - lVar11 == lVar10) goto LAB_1406f51bb;
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
LAB_1406f51bb:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406f5202 FUN_1406f5202 body=29 status=ok
// SIG undefined FUN_1406f5202(void)

void FUN_1406f5202(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1406f5220 FUN_1406f5220 body=59 status=ok
// SIG undefined FUN_1406f5220(void)

undefined8 * FUN_1406f5220(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b9c53f0;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1406f525c FUN_1406f525c body=25 status=ok
// SIG undefined FUN_1406f525c(void)

undefined8 FUN_1406f525c(longlong param_1)

{
  (**(code **)(param_1 + 0x20))((longlong)*(int *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1406f527c FUN_1406f527c body=2027 status=ok
// SIG undefined FUN_1406f527c(void)

void FUN_1406f527c(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 auStack_68 [32];
  longlong *local_48;
  int local_40;
  undefined1 local_38 [8];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar8 = FUN_1406f63d6();
  if (lVar8 == 0) goto LAB_1406f566b;
  local_48 = (longlong *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  local_40 = 3;
  plVar2 = *(longlong **)(param_1 + 0x10);
  if (plVar2 == (longlong *)0x0) {
LAB_1406f5793:
    *local_48 = (longlong)&PTR_LAB_14b982140;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar3 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar3 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar3;
    local_48[2] = lVar11;
    *local_48 = (longlong)&PTR_FUN_14b97cf00;
    local_48[3] = 0;
    local_48[4] = 0;
    local_48[5] = (longlong)FUN_1406f5c24;
  }
  else {
    iVar6 = (int)plVar2[1];
    do {
      if (iVar6 == 0) goto LAB_1406f5793;
      LOCK();
      iVar7 = (int)plVar2[1];
      bVar12 = iVar6 == iVar7;
      if (bVar12) {
        *(int *)(plVar2 + 1) = iVar6 + 1;
        iVar7 = iVar6;
      }
      iVar6 = iVar7;
      UNLOCK();
    } while (!bVar12);
    lVar3 = *(longlong *)(param_1 + 8);
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *local_48 = (longlong)&PTR_LAB_14b982140;
    LOCK();
    UNLOCK();
    lVar10 = DAT_14c758608 + 1;
    lVar11 = DAT_14c758608 + 1;
    if (lVar10 == 0) {
      LOCK();
      UNLOCK();
      lVar10 = DAT_14c758608 + 2;
      lVar11 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar11;
    local_48[2] = lVar10;
    *local_48 = (longlong)&PTR_FUN_14b97cf00;
    local_48[3] = lVar3;
    local_48[4] = (longlong)plVar2;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    local_48[5] = (longlong)FUN_1406f5c24;
    LOCK();
    plVar4 = plVar2 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
    LOCK();
    plVar4 = plVar2 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
    LOCK();
    plVar4 = plVar2 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
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
  FUN_1406f5a84(lVar8 + 0x800,local_38,&local_48);
  if (local_40 == 0) {
LAB_1406f53a5:
    if (local_48 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_48 != (longlong *)0x0) {
    (**(code **)*local_48)(local_48,0);
    FUN_1446efa72(&local_48,0,0,0x10);
    local_40 = 0;
    goto LAB_1406f53a5;
  }
  FUN_1406f5c24(param_1,*(undefined8 *)(lVar8 + 0x178));
  lVar8 = FUN_1406f612e(lVar8);
  if (lVar8 == 0) goto LAB_1406f566b;
  local_48 = (longlong *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  local_40 = 3;
  plVar2 = *(longlong **)(param_1 + 0x10);
  if (plVar2 == (longlong *)0x0) {
LAB_1406f57de:
    *local_48 = (longlong)&PTR_LAB_14b982290;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar3 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar3 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar3;
    local_48[2] = lVar11;
    *local_48 = (longlong)&PTR_FUN_14b97cf70;
    local_48[3] = 0;
    local_48[4] = 0;
    local_48[5] = (longlong)FUN_140ff3b36;
  }
  else {
    iVar6 = (int)plVar2[1];
    do {
      if (iVar6 == 0) goto LAB_1406f57de;
      LOCK();
      iVar7 = (int)plVar2[1];
      bVar12 = iVar6 == iVar7;
      if (bVar12) {
        *(int *)(plVar2 + 1) = iVar6 + 1;
        iVar7 = iVar6;
      }
      iVar6 = iVar7;
      UNLOCK();
    } while (!bVar12);
    lVar3 = *(longlong *)(param_1 + 8);
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *local_48 = (longlong)&PTR_LAB_14b982290;
    LOCK();
    UNLOCK();
    lVar10 = DAT_14c758608 + 1;
    lVar11 = DAT_14c758608 + 1;
    if (lVar10 == 0) {
      LOCK();
      UNLOCK();
      lVar10 = DAT_14c758608 + 2;
      lVar11 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar11;
    local_48[2] = lVar10;
    *local_48 = (longlong)&PTR_FUN_14b97cf70;
    local_48[3] = lVar3;
    local_48[4] = (longlong)plVar2;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    local_48[5] = (longlong)FUN_140ff3b36;
    LOCK();
    plVar4 = plVar2 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
    LOCK();
    plVar4 = plVar2 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
    LOCK();
    plVar4 = plVar2 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
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
  if (((local_40 == 0) || (local_48 == (longlong *)0x0)) ||
     (cVar5 = (**(code **)(*local_48 + 0x30))(), cVar5 == '\0')) {
    if (local_40 == 0) goto LAB_1406f556a;
    if (local_48 != (longlong *)0x0) {
      (**(code **)*local_48)(local_48,0);
      FUN_1446efa72(&local_48,0,0,0x10);
      goto LAB_1406f555d;
    }
  }
  else {
    plVar2 = (longlong *)(lVar8 + 0x690);
    if (*(int *)(lVar8 + 0x6a4) < 1) {
      iVar6 = *(int *)(lVar8 + 0x698);
      iVar7 = *(int *)(lVar8 + 0x6a0) + -1;
      *(int *)(lVar8 + 0x6a0) = iVar7;
      if (iVar7 <= iVar6) {
        iVar7 = iVar6;
        if (0 < iVar6) {
          iVar9 = 0;
          do {
            if (((*(int *)(*plVar2 + 8 + (longlong)iVar9 * 0x10) == 0) ||
                (plVar4 = *(longlong **)(*plVar2 + (longlong)iVar9 * 0x10),
                plVar4 == (longlong *)0x0)) ||
               (cVar5 = (**(code **)(*plVar4 + 0x28))(), cVar5 != '\0')) {
              FUN_14005b288(plVar2,iVar9);
              FUN_14005b248(plVar2);
            }
            else {
              iVar9 = iVar9 + 1;
            }
            iVar7 = *(int *)(lVar8 + 0x698);
          } while (iVar9 < iVar7);
        }
        iVar9 = 2;
        if (2 < iVar7 * 2) {
          iVar9 = iVar7 * 2;
        }
        *(int *)(lVar8 + 0x6a0) = iVar9;
        if ((iVar9 < iVar6) && (*(int *)(lVar8 + 0x69c) != iVar7)) {
          FUN_14045812c();
        }
      }
    }
    if ((local_40 != 0) && (local_48 != (longlong *)0x0)) {
      (**(code **)(*local_48 + 0x38))(local_48,local_38);
    }
    iVar6 = *(int *)(lVar8 + 0x698);
    *(uint *)(lVar8 + 0x698) = iVar6 + 1U;
    if (*(uint *)(lVar8 + 0x69c) < iVar6 + 1U) {
      FUN_1447a71f6(plVar2,iVar6);
    }
    lVar3 = *plVar2;
    lVar11 = (longlong)iVar6 * 0x10;
    *(undefined8 *)(lVar3 + lVar11) = 0;
    *(undefined4 *)(lVar3 + 8 + lVar11) = 0;
    *(longlong **)(lVar3 + lVar11) = local_48;
    local_48 = (longlong *)0x0;
    *(int *)(lVar3 + 8 + lVar11) = local_40;
LAB_1406f555d:
    local_40 = 0;
LAB_1406f556a:
    if (local_48 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  local_48 = (longlong *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  local_40 = 3;
  plVar2 = *(longlong **)(param_1 + 0x10);
  if (plVar2 == (longlong *)0x0) {
LAB_1406f5829:
    *local_48 = (longlong)&PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar3 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar3 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar3;
    local_48[2] = lVar11;
    *local_48 = (longlong)&PTR_FUN_14b97cfe0;
    local_48[3] = 0;
    local_48[4] = 0;
    local_48[5] = (longlong)&LAB_145804670;
  }
  else {
    iVar6 = (int)plVar2[1];
    do {
      if (iVar6 == 0) goto LAB_1406f5829;
      LOCK();
      iVar7 = (int)plVar2[1];
      bVar12 = iVar6 == iVar7;
      if (bVar12) {
        *(int *)(plVar2 + 1) = iVar6 + 1;
        iVar7 = iVar6;
      }
      iVar6 = iVar7;
      UNLOCK();
    } while (!bVar12);
    lVar3 = *(longlong *)(param_1 + 8);
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *local_48 = (longlong)&PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar10 = DAT_14c758608 + 1;
    lVar11 = DAT_14c758608 + 1;
    if (lVar10 == 0) {
      LOCK();
      UNLOCK();
      lVar10 = DAT_14c758608 + 2;
      lVar11 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar11;
    local_48[2] = lVar10;
    *local_48 = (longlong)&PTR_FUN_14b97cfe0;
    local_48[3] = lVar3;
    local_48[4] = (longlong)plVar2;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    local_48[5] = (longlong)&LAB_145804670;
    LOCK();
    plVar4 = plVar2 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
    LOCK();
    plVar4 = plVar2 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
    LOCK();
    plVar4 = plVar2 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
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
  FUN_1448b6402(lVar8 + 0x30,local_38,&local_48);
  if (local_40 != 0) {
    if (local_48 == (longlong *)0x0) goto LAB_1406f566b;
    (**(code **)*local_48)(local_48,0);
    FUN_1446efa72(&local_48,0,0,0x10);
    local_40 = 0;
  }
  if (local_48 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_1406f566b:
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1406f5a84 FUN_1406f5a84 body=375 status=ok
// SIG undefined FUN_1406f5a84(void)

undefined8 * FUN_1406f5a84(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 1406f5c24 FUN_1406f5c24 body=721 status=ok
// SIG undefined FUN_1406f5c24(void)

void FUN_1406f5c24(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_68 [32];
  undefined1 local_48 [8];
  undefined8 *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 == 0) goto LAB_1406f5dc4;
  lVar9 = FUN_14041aabe();
  lVar6 = DAT_14cb7df38;
  if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(lVar9 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8)
      != lVar9 + 0x30)) goto LAB_1406f5dc4;
  lVar9 = (longlong)DAT_14cb7df40;
  if (lVar9 != 0) {
    lVar10 = 0;
    do {
      if (((*(int *)(lVar6 + 8 + lVar10) != 0) &&
          (plVar3 = *(longlong **)(lVar6 + lVar10), plVar3 != (longlong *)0x0)) &&
         (cVar7 = (**(code **)(*plVar3 + 0x20))(plVar3,param_1), cVar7 != '\0')) goto LAB_1406f5dc4;
      lVar10 = lVar10 + 0x10;
    } while (lVar9 * 0x10 != lVar10);
  }
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,3,0x10);
  local_38 = 3;
  plVar3 = *(longlong **)(param_1 + 0x10);
  if (plVar3 == (longlong *)0x0) {
LAB_1406f5e19:
    *local_40 = &PTR_LAB_14b3fc170;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar6 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar6 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar6;
    local_40[2] = lVar9;
    *local_40 = &PTR_FUN_14b97d050;
    local_40[3] = 0;
    local_40[4] = 0;
    local_40[5] = &LAB_145843a0e;
  }
  else {
    iVar8 = (int)plVar3[1];
    do {
      if (iVar8 == 0) goto LAB_1406f5e19;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar11 = iVar8 == iVar5;
      if (bVar11) {
        *(int *)(plVar3 + 1) = iVar8 + 1;
        iVar5 = iVar8;
      }
      iVar8 = iVar5;
      UNLOCK();
    } while (!bVar11);
    uVar4 = *(undefined8 *)(param_1 + 8);
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *local_40 = &PTR_LAB_14b3fc170;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar6 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar6 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar6;
    local_40[2] = lVar9;
    *local_40 = &PTR_FUN_14b97d050;
    local_40[3] = uVar4;
    local_40[4] = plVar3;
    LOCK();
    *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
    UNLOCK();
    local_40[5] = &LAB_145843a0e;
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
  FUN_1406f6466(&DAT_14cb7df38,local_48,&local_40);
  if (local_38 == 0) {
LAB_1406f5da4:
    if (local_40 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_40 != (undefined8 *)0x0) {
    (**(code **)*local_40)(local_40,0);
    FUN_1446efa72(&local_40,0,0,0x10);
    local_38 = 0;
    goto LAB_1406f5da4;
  }
  if (*(longlong *)(param_2 + 0x488) != 0) {
    FUN_1406f5f52(param_1);
  }
LAB_1406f5dc4:
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1406f5ef6 FUN_1406f5ef6 body=91 status=ok
// SIG undefined FUN_1406f5ef6(void)

bool FUN_1406f5ef6(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_1406f5f26;
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
LAB_1406f5f26:
  return lVar6 == param_2;
}



// FUNCTION 1406f5f52 FUN_1406f5f52 body=323 status=ok
// SIG undefined FUN_1406f5f52(void)

void FUN_1406f5f52(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  byte bVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar4 = FUN_1406f60a6();
  if (lVar4 == 0) goto LAB_1406f605a;
  cVar1 = *(char *)(lVar4 + 0x20);
  lVar4 = FUN_1406f63d6();
  if (lVar4 == 0) {
LAB_1406f609e:
    bVar3 = 0;
  }
  else {
    lVar5 = FUN_1406f612e();
    if ((lVar5 == 0) || (*(longlong *)(lVar4 + 0x178) == 0)) goto LAB_1406f609e;
    lVar6 = FUN_14041aabe();
    lVar4 = *(longlong *)(lVar4 + 0x178);
    if (lVar4 == 0) goto LAB_1406f609e;
    bVar3 = 0;
    if ((lVar6 != 0) && (lVar2 = *(longlong *)(lVar4 + 0x10), bVar3 = 0, lVar2 != 0)) {
      if ((*(int *)(lVar6 + 0x38) <= *(int *)(lVar2 + 0x38)) &&
         ((*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
           lVar6 + 0x30 && (lVar4 = *(longlong *)(lVar4 + 0x488), lVar4 != 0)))) {
        lVar6 = FUN_1406f60a6();
        if (lVar6 != 0) {
          local_30 = *(undefined8 *)(lVar6 + 8);
          uVar7 = FUN_1403363fe(lVar5);
          lVar4 = FUN_1403362f0(lVar5,*(undefined4 *)(lVar4 + 0x394),uVar7);
          if (lVar4 != 0) {
            if (*(char *)(lVar4 + 0x11) == '\0') {
              bVar3 = *(byte *)(lVar4 + 0x12);
            }
            else {
              bVar3 = 1;
            }
            goto LAB_1406f604d;
          }
        }
      }
      goto LAB_1406f609e;
    }
  }
LAB_1406f604d:
  bVar3 = cVar1 != '\0' ^ bVar3;
  if (*(byte *)(param_1 + 0x38) != bVar3) {
    *(byte *)(param_1 + 0x38) = bVar3;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
  }
LAB_1406f605a:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406f60a6 FUN_1406f60a6 body=78 status=ok
// SIG undefined FUN_1406f60a6(void)

longlong * FUN_1406f60a6(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x40);
  if (plVar1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*plVar1 + 8))(plVar1);
    lVar3 = FUN_1406f60f4();
    if ((lVar3 != 0) && (*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38))) {
      if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
          lVar3 + 0x30) {
        return (longlong *)0x0;
      }
      return plVar1;
    }
  }
  return (longlong *)0x0;
}



// FUNCTION 1406f60f4 FUN_1406f60f4 body=57 status=ok
// SIG undefined FUN_1406f60f4(void)

void FUN_1406f60f4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba59c0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba59c0 = FUN_140002ddd(FUN_1465c41ba,uVar1,L"MissionDependencyCondition_Challenge");
  }
  return;
}



// FUNCTION 1406f612e FUN_1406f612e body=72 status=ok
// SIG undefined FUN_1406f612e(void)

undefined8 FUN_1406f612e(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((param_1 != 0) && (lVar1 = FUN_1406f625c(), lVar1 != 0)) {
    lVar2 = FUN_1406f6176();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      return *(undefined8 *)(lVar1 + 0x170);
    }
  }
  return 0;
}



// FUNCTION 1406f6176 FUN_1406f6176 body=228 status=ok
// SIG undefined FUN_1406f6176(void)

longlong FUN_1406f6176(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined2 *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cbae838 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1464fe1ce;
    local_38 = &LAB_148c403ad;
    local_40 = &LAB_145a44437;
    local_48 = &DAT_149e063b2;
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x1f8;
    FUN_14081cfa3(L"/Script/OakGame",L"OakShard",&DAT_14cbae838,&DAT_148c403ac);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbae838;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406f625c FUN_1406f625c body=357 status=ok
// SIG undefined FUN_1406f625c(void)

undefined8 FUN_1406f625c(longlong param_1)

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
  undefined1 **local_40;
  undefined1 *local_38;
  code *local_30;
  undefined1 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((param_1 != 0) && (lVar1 = *(longlong *)(param_1 + 0x1f0), lVar1 != 0)) {
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
      lVar1 = *(longlong *)(param_1 + 0x1f0);
      if (lVar1 == 0) goto LAB_1406f63af;
    }
    if ((((DAT_14cb5e538 != 0) && (lVar1 = *(longlong *)(lVar1 + 0x10), lVar1 != 0)) &&
        (*(int *)(DAT_14cb5e538 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(DAT_14cb5e538 + 0x38) * 8) ==
        DAT_14cb5e538 + 0x30)) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
    }
  }
LAB_1406f63af:
  if ((local_18 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 0;
}



// FUNCTION 1406f63d6 FUN_1406f63d6 body=143 status=ok
// SIG undefined FUN_1406f63d6(void)

undefined8 FUN_1406f63d6(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar1 = *(uint *)(param_1 + 0x18);
    if ((int)uVar1 < 0) {
      return 0;
    }
    if (DAT_14c9647dc <= (int)uVar1) {
      return 0;
    }
    puVar3 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((puVar3 != (undefined8 *)0x0) && (*(int *)(puVar3 + 2) == *(int *)(param_1 + 0x1c))) &&
       ((*(uint *)(puVar3 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(puVar3 + 1) & 0x10200000) == 0) {
        plVar4 = (longlong *)*puVar3;
      }
      else {
        plVar4 = (longlong *)0x0;
      }
      while (plVar4[5] == 0) {
        plVar4 = (longlong *)(**(code **)(*plVar4 + 0x2f0))();
        if (plVar4 == (longlong *)0x0) {
          return 0;
        }
      }
      lVar2 = *(longlong *)(plVar4[5] + 0x30);
      if (lVar2 != 0) {
        return *(undefined8 *)(lVar2 + 0x360);
      }
    }
  }
  return 0;
}



// FUNCTION 1406f6466 FUN_1406f6466 body=375 status=ok
// SIG undefined FUN_1406f6466(void)

undefined8 * FUN_1406f6466(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 1406f65ea FUN_1406f65ea body=308 status=ok
// SIG undefined FUN_1406f65ea(void)

undefined8 * FUN_1406f65ea(undefined8 *param_1,longlong *param_2,undefined4 param_3)

{
  uint uVar1;
  longlong lVar2;
  undefined4 uVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar3 = (**(code **)(*(longlong *)*param_2 + 0x20))((longlong *)*param_2,param_3);
  FUN_1406f6720(param_1,*(undefined2 *)(*param_2 + 0x10),uVar3);
  *param_1 = &PTR_FUN_14a393e00;
  param_1[2] = &PTR_FUN_14a393e80;
  param_1[0xd] = param_2;
  *(undefined4 *)(param_1 + 0xe) = param_3;
  *(undefined1 *)((longlong)param_1 + 0x74) = 0;
  if (DAT_14ca9a508 == '\x01') {
    local_48 = 0;
    uStack_40 = 0;
    uVar1 = *(uint *)(param_1 + 0xb);
    if ((uVar1 & 0x7fffffff) != 0) {
      uVar5 = 0;
      do {
        uVar3 = (**(code **)(**(longlong **)param_1[0xd] + 0x28))
                          (*(longlong **)param_1[0xd],*(undefined4 *)(param_1 + 0xe),uVar5);
        local_4c = (**(code **)(**(longlong **)param_1[0xd] + 0x90))
                             (*(longlong **)param_1[0xd],uVar3);
        FUN_1449e3bb0(&local_48,&local_4c);
        lVar2 = local_48;
        uVar5 = uVar5 + 1;
      } while ((uVar1 & 0x7fffffff) != uVar5);
      lVar4 = (longlong)(int)uStack_40;
      if (lVar4 != 0) {
        lVar6 = 0;
        do {
          (**(code **)(**(longlong **)param_1[0xd] + 0x80))
                    (*(longlong **)param_1[0xd],*(undefined4 *)(lVar2 + lVar6));
          lVar6 = lVar6 + 4;
        } while (lVar4 * 4 != lVar6);
      }
      if (local_48 != 0) {
        FUN_1400020a8(local_48);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1406f6720 FUN_1406f6720 body=244 status=ok
// SIG undefined FUN_1406f6720(void)

undefined8 * FUN_1406f6720(undefined8 *param_1,undefined2 param_2,uint param_3)

{
  void *pvVar1;
  undefined8 uVar2;
  
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0xc) = 0x105;
  *(undefined1 *)((longlong)param_1 + 0xe) = 0;
  *param_1 = &PTR_LAB_14a398600;
  param_1[2] = &PTR_LAB_14a398680;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 3),4000);
  param_1[8] = 0;
  param_1[9] = 0;
  *(uint *)(param_1 + 0xb) = param_3 & 0x7fffffff;
  *(undefined2 *)((longlong)param_1 + 0x5c) = param_2;
  *(undefined4 *)(param_1 + 0xc) = 0;
  uVar2 = 0;
  pvVar1 = (void *)FUN_14001cc68();
  if ((param_3 & 0x7fffffff) != 0) {
    uVar2 = 0;
    memset(pvVar1,0,(ulonglong)(param_3 & 0x7fffffff) * 8);
  }
  param_1[10] = pvVar1;
  if ((DAT_14ca84ef4 == '\x01') && (DAT_14ca84ef5 == '\x01')) {
    *(uint *)(param_1 + 9) = param_3;
    if (param_3 == 0) {
      pvVar1 = (void *)0x0;
    }
    else {
      uVar2 = 0;
      FUN_1447808da(param_1 + 8,0);
      pvVar1 = (void *)param_1[8];
    }
    memset(pvVar1,(int)CONCAT71((int7)((ulonglong)uVar2 >> 8),0xff),(ulonglong)(param_3 << 2));
  }
  return param_1;
}



// FUNCTION 1406f68b6 FUN_1406f68b6 body=729 status=ok
// SIG undefined FUN_1406f68b6(void)

void FUN_1406f68b6(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  undefined8 *local_40;
  undefined1 *local_38;
  code *local_30;
  undefined8 local_28;
  undefined1 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar1 = *(int *)((longlong)param_1 + 0x8f4);
  if ((iVar1 != -1) && (iVar1 != *(int *)((longlong)param_1 + 0x8fc))) {
    *(int *)((longlong)param_1 + 0x8fc) = iVar1;
    local_20 = *(undefined1 *)((longlong)param_1 + 0x904);
    local_28 = (code *)CONCAT44((int)param_1[0x11f],iVar1);
    uVar3 = FUN_14477b072(param_1,DAT_14caf96c8);
    (**(code **)(*param_1 + 0x248))(param_1,uVar3,&local_28);
    if (DAT_14caf9d50 != 0) {
      local_28 = (code *)CONCAT71(local_28._1_7_,
                                  (char)(int)param_1[0xfb] -
                                  (char)*(undefined4 *)((longlong)param_1 + 0x8f4));
      local_28 = (code *)CONCAT44((int)param_1[0x121],(undefined4)local_28);
      uVar3 = FUN_14477b072(param_1,DAT_14caf96d8);
      (**(code **)(*param_1 + 0x248))(param_1,uVar3,&local_28);
    }
  }
  if (DAT_14caf84d0 == (longlong *)0x0) {
    local_40 = &local_28;
    local_28 = FUN_1449e2820;
    local_30 = FUN_14081d0ea;
    local_38 = &LAB_145a62952;
    local_48 = &LAB_147c8cd45;
    local_50 = &LAB_1461468ae;
    local_58 = L"Engine";
    local_60 = 0;
    local_68 = 0x10000006;
    local_70 = 8;
    local_78 = 0x218;
    FUN_14081cfa3(L"/Script/Engine",L"PhysicsSettings",&DAT_14caf84d0,FUN_1463f75b4);
  }
  plVar4 = DAT_14caf84d0;
  lVar2 = DAT_14caf84d0[0x22];
  if (lVar2 == 0) {
    (**(code **)(*DAT_14caf84d0 + 1000))(DAT_14caf84d0);
    lVar2 = plVar4[0x22];
  }
  if (*(char *)(lVar2 + 0xf0) == '\0') {
    plVar4 = (longlong *)param_1[0x7a];
  }
  else {
    if ((int)param_1[0x124] != -1) {
      local_28 = (code *)param_1[0x124];
      uVar3 = FUN_14477b072(param_1,DAT_14caf95b8);
      (**(code **)(*param_1 + 0x248))(param_1,uVar3,&local_28);
      *(undefined4 *)(param_1 + 0x124) = 0xffffffff;
    }
    plVar4 = (longlong *)param_1[0x7a];
    if (((longlong *)param_1[0x87] != plVar4) && (param_1[0xf4] == 0)) goto LAB_1406f69a5;
  }
  if (((plVar4 != (longlong *)0x0) ||
      (plVar4 = (longlong *)param_1[0xf4], plVar4 != (longlong *)0x0)) &&
     ((char)plVar4[0xd] == '\x02')) {
    if ((param_1[0x2e] != 0) && (DAT_14c87ead8 == '\0')) {
      FUN_140024d3a(&DAT_14c87eb00);
      DAT_14c87ead8 = '\x01';
    }
    iVar1 = FUN_14487fd02(param_1);
    if ((iVar1 != 3) && (lVar2 = (**(code **)(*plVar4 + 0x638))(plVar4), lVar2 != 0)) {
      uVar3 = FUN_1406f6b90();
      plVar4 = (longlong *)FUN_144718840(lVar2,uVar3);
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
LAB_1406f69a5:
  if ((local_18 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1406f6b90 FUN_1406f6b90 body=228 status=ok
// SIG undefined FUN_1406f6b90(void)

longlong FUN_1406f6b90(void)

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
  if (DAT_14cac5050 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_147885333;
    local_40 = &LAB_1459be7da;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/Engine",L"NetworkPredictionInterface",&DAT_14cac5050,&DAT_147885332);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cac5050;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406f6c76 FUN_1406f6c76 body=263 status=ok
// SIG undefined FUN_1406f6c76(void)

void FUN_1406f6c76(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (*(longlong *)(param_1 + 0xa0) == 0) {
    FUN_1406f6d7e(param_1);
    return;
  }
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x10);
  lVar4 = *(longlong *)(param_1 + 0x10);
  if (lVar4 != lVar3) {
    *(longlong *)(param_1 + 0x10) = lVar3;
    if (lVar3 != 0) {
      LOCK();
      *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
      UNLOCK();
    }
    if (lVar4 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar4 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    (**(code **)(*DAT_14ca83900 + 0x178))
              (DAT_14ca83900,&DAT_14ca85100,*(longlong *)(param_1 + 0x48),
               *(undefined8 *)(param_1 + 0x10));
  }
  lVar3 = *(longlong *)(param_1 + 0x18);
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x18);
  if (lVar3 != lVar4) {
    *(longlong *)(param_1 + 0x18) = lVar4;
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
    }
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
  }
  lVar3 = *(longlong *)(param_1 + 0x20);
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x20);
  if (lVar3 != lVar4) {
    *(longlong *)(param_1 + 0x20) = lVar4;
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
    }
    if (lVar3 != 0) {
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
  }
  return;
}



// FUNCTION 1406f6d7e FUN_1406f6d7e body=519 status=ok
// SIG undefined FUN_1406f6d7e(void)

void FUN_1406f6d7e(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined2 *puVar3;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined2 *local_50;
  int local_48;
  undefined **local_40;
  undefined4 local_38;
  LPVOID local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = &PTR_LAB_149e35ca0;
  local_38 = 0;
  local_30 = TlsGetValue(DAT_14c874b64);
  TlsSetValue(DAT_14c874b64,&local_40);
  local_40 = &PTR_FUN_14aa6dc60;
  local_28 = param_1;
  FUN_1405d4f5e(param_1);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb017f8) && (FUN_144b3d300(&DAT_14cb017f8), DAT_14cb017f8 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar2 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.VirtualTextureReducedMemory",1);
    if (plVar2 == (longlong *)0x0) {
      DAT_14cb017f0 = 0;
    }
    else {
      DAT_14cb017f0 = (**(code **)(*plVar2 + 0x68))(plVar2);
    }
    _Init_thread_footer(&DAT_14cb017f8);
  }
  if (((char)param_1[0x12] != '\x01') ||
     ((lVar1 = 0xb0, *(int *)(DAT_14cb017f0 + 4) != 0 &&
      (*(byte *)((longlong)param_1 + 0x5e) <= *(byte *)((longlong)param_1 + 0x59))))) {
    lVar1 = 0xa8;
  }
  (**(code **)(*param_1 + lVar1))(param_1);
  local_58 = *(undefined4 *)((longlong)param_1 + 0x7c);
  FUN_1432241a2(param_1 + 6,*(byte *)((longlong)param_1 + 0x5e),
                (float)*(byte *)((longlong)param_1 + 0x5e),param_1[5]);
  *(undefined8 *)(param_1[2] + 0x10) = *(undefined8 *)((longlong)param_1 + 0x74);
  FUN_1400021e4((longlong)param_1 + 0x74,&local_50);
  puVar3 = local_50;
  if (local_48 == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  (**(code **)(*DAT_14ca83900 + 0x248))(DAT_14ca83900,&DAT_14ca85100,param_1[2],puVar3);
  if (local_50 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (param_1[9] != 0) {
    (**(code **)(*DAT_14ca83900 + 0x178))(DAT_14ca83900,&DAT_14ca85100,param_1[9],param_1[2]);
  }
  local_40 = &PTR_LAB_149e35ca0;
  TlsGetValue(DAT_14c874b64);
  TlsSetValue(DAT_14c874b64,local_30);
  if ((local_20 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1406f6f86 FUN_1406f6f86 body=253 status=ok
// SIG undefined FUN_1406f6f86(void)

undefined8 FUN_1406f6f86(undefined8 param_1,undefined8 param_2,undefined8 param_3,void *param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  undefined1 auStack_358 [40];
  undefined1 local_330 [768];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_358;
  FUN_1406f72f9(local_330);
  memcpy(param_4,local_330,0x300);
  uVar4 = 1;
  if (DAT_14ca81480 == 0) {
    uVar4 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  }
  *(uint *)((longlong)param_4 + 600) = uVar4;
  uVar1 = FUN_1406f7120(param_4);
  *(undefined8 *)((longlong)param_4 + 0x2d0) = uVar1;
  lVar2 = FUN_1406f7084(param_1,param_4);
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x38) == 0) {
      lVar3 = *(longlong *)(lVar2 + 0x20);
    }
    else {
      lVar3 = FUN_1406f7aac(lVar2);
    }
    if (lVar3 != 0) {
      uVar1 = FUN_14001cc68(0x130,0x10);
      FUN_1406c271c(uVar1,param_2,param_3,lVar2);
      goto LAB_1406f7016;
    }
  }
  uVar1 = 0;
LAB_1406f7016:
  if ((local_30 ^ (ulonglong)auStack_358) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406f7084 FUN_1406f7084 body=155 status=ok
// SIG undefined FUN_1406f7084(void)

longlong FUN_1406f7084(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0xb0));
  iVar1 = FUN_14049ade6((longlong *)(param_1 + 0x10),*(undefined4 *)(param_2 + 0x2d0),param_2);
  if ((iVar1 == -1) ||
     (lVar2 = (longlong)iVar1 * 0x310 + *(longlong *)(param_1 + 0x10),
     plVar3 = (longlong *)(lVar2 + 0x300), plVar3 == (longlong *)0x0 || lVar2 == 0)) {
    lVar2 = 0;
  }
  else {
    if (((byte)(DAT_14c760d84 != 0 & DAT_14ca84f5a & (DAT_14ca76a68 ^ 1)) != 0) ||
       (DAT_14ca76a80 == '\0')) {
      LOCK();
      *(int *)(*plVar3 + 8) = *(int *)(*plVar3 + 8) + 1;
      UNLOCK();
    }
    lVar2 = *plVar3;
  }
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0xb0));
  return lVar2;
}



// FUNCTION 1406f7120 FUN_1406f7120 body=472 status=ok
// SIG undefined FUN_1406f7120(void)

void FUN_1406f7120(longlong param_1)

{
  ulonglong uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  undefined4 *puVar10;
  ulonglong uVar11;
  undefined4 *puVar12;
  ulonglong uVar13;
  longlong lVar14;
  size_t _Size;
  longlong lVar15;
  undefined1 auStack_288 [32];
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined4 local_218;
  undefined1 local_214;
  undefined1 local_213;
  undefined4 local_210;
  undefined8 local_20c;
  undefined8 uStack_204;
  undefined8 uStack_1fc;
  undefined4 uStack_1f4;
  undefined4 local_1f0;
  undefined4 uStack_1ec;
  undefined8 uStack_1e8;
  undefined4 local_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 local_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 local_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined8 local_1b0;
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined4 local_1a0;
  undefined8 local_19c;
  undefined4 local_194;
  undefined4 local_190;
  undefined4 local_184 [87];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_288;
  lVar15 = (longlong)*(int *)(param_1 + 0x248);
  uVar1 = lVar15 * 0x2c + 0xe0;
  uVar11 = 0;
  uVar9 = lVar15 * 0x2c + 0xd0;
  if (uVar1 < 0x11) {
    uVar9 = uVar11;
  }
  local_268 = *(undefined8 *)(param_1 + 0x278);
  uStack_260 = *(undefined8 *)(param_1 + 0x280);
  uVar13 = uVar9 - 0x10;
  if (uVar9 < 0x11) {
    uVar13 = uVar11;
  }
  local_258 = *(undefined8 *)(param_1 + 0x288);
  uStack_250 = *(undefined8 *)(param_1 + 0x290);
  uVar9 = uVar13 - 0x10;
  if (uVar13 < 0x11) {
    uVar9 = uVar11;
  }
  local_248 = *(undefined8 *)(param_1 + 0x298);
  uStack_240 = *(undefined8 *)(param_1 + 0x2a0);
  uVar13 = uVar9 - 0x10;
  if (uVar9 < 0x11) {
    uVar13 = uVar11;
  }
  local_238 = *(undefined8 *)(param_1 + 0x2a8);
  uStack_230 = *(undefined8 *)(param_1 + 0x2b0);
  _Size = uVar13 - 0x10;
  if (uVar13 < 0x11) {
    _Size = uVar11;
  }
  memset(&local_218,0,_Size);
  local_228 = *(undefined8 *)(param_1 + 0x2b8);
  uStack_220 = *(undefined8 *)(param_1 + 0x2c0);
  local_218 = *(undefined4 *)(param_1 + 0x2c8);
  local_214 = *(undefined1 *)(param_1 + 0x60);
  local_213 = *(undefined1 *)(param_1 + 100);
  local_210 = *(undefined4 *)(param_1 + 0x1a8);
  local_20c = *(undefined8 *)(param_1 + 0x1ac);
  uStack_204 = *(undefined8 *)(param_1 + 0x1b4);
  uStack_1fc = *(undefined8 *)(param_1 + 0x1bc);
  uStack_1e8 = *(undefined8 *)(param_1 + 0x1d0);
  uStack_1ec = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x1c8) >> 0x20);
  uStack_1f4 = (undefined4)*(undefined8 *)(param_1 + 0x1c4);
  local_1f0 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x1c4) >> 0x20);
  local_1b0 = *(undefined8 *)(param_1 + 0x208);
  local_1e0 = *(undefined4 *)(param_1 + 0x1d8);
  uStack_1dc = *(undefined4 *)(param_1 + 0x1dc);
  uStack_1d8 = *(undefined4 *)(param_1 + 0x1e0);
  uStack_1d4 = *(undefined4 *)(param_1 + 0x1e4);
  local_1d0 = *(undefined4 *)(param_1 + 0x1e8);
  uStack_1cc = *(undefined4 *)(param_1 + 0x1ec);
  uStack_1c8 = *(undefined4 *)(param_1 + 0x1f0);
  uStack_1c4 = *(undefined4 *)(param_1 + 500);
  local_1c0 = *(undefined4 *)(param_1 + 0x1f8);
  uStack_1bc = *(undefined4 *)(param_1 + 0x1fc);
  uStack_1b8 = *(undefined4 *)(param_1 + 0x200);
  uStack_1b4 = *(undefined4 *)(param_1 + 0x204);
  local_1a8 = *(undefined4 *)(param_1 + 0x220);
  local_1a4 = *(undefined4 *)(param_1 + 0x224);
  local_1a0 = *(undefined4 *)(param_1 + 0x24c);
  local_19c = *(undefined8 *)(param_1 + 0x250);
  local_194 = *(undefined4 *)(param_1 + 600);
  local_190 = *(undefined4 *)(param_1 + 0x270);
  if (0 < lVar15) {
    puVar10 = (undefined4 *)(param_1 + 0x68);
    puVar12 = local_184;
    lVar14 = 0;
    do {
      puVar12[-1] = *(undefined4 *)(param_1 + 0x228 + lVar14 * 4);
      uVar2 = puVar10[1];
      uVar3 = puVar10[2];
      uVar4 = puVar10[3];
      uVar5 = puVar10[4];
      uVar6 = puVar10[5];
      uVar7 = puVar10[6];
      uVar8 = puVar10[7];
      *puVar12 = *puVar10;
      puVar12[1] = uVar2;
      puVar12[2] = uVar3;
      puVar12[3] = uVar4;
      puVar12[4] = uVar5;
      puVar12[5] = uVar6;
      puVar12[6] = uVar7;
      puVar12[7] = uVar8;
      *(undefined8 *)(puVar12 + 8) = *(undefined8 *)(puVar10 + 8);
      lVar14 = lVar14 + 1;
      puVar10 = puVar10 + 10;
      puVar12 = puVar12 + 0xb;
    } while (lVar15 != lVar14);
  }
  FUN_1447addd0(&local_268,uVar1 & 0xffffffff);
  if ((local_28 ^ (ulonglong)auStack_288) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406f72f9 FUN_1406f72f9 body=1969 status=ok
// SIG undefined FUN_1406f72f9(void)

longlong * FUN_1406f72f9(longlong *param_1,longlong *param_2,longlong param_3)

{
  ushort uVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined1 uVar11;
  undefined4 uVar12;
  uint uVar13;
  undefined8 *_Src;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  ulonglong uVar17;
  undefined4 uVar18;
  longlong lVar19;
  undefined1 uVar20;
  undefined4 uVar21;
  longlong lVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  longlong lVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined1 auStack_2f8 [32];
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 auStack_2c8 [40];
  undefined2 local_188;
  undefined6 uStack_186;
  undefined2 uStack_180;
  undefined6 uStack_17e;
  undefined2 local_178;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_2f8;
  memset(param_1 + 2,0,0x2f0);
  *param_1 = param_3;
  param_1[1] = *(longlong *)(param_3 + 8);
  if (param_2[6] == 0) {
    local_2d8 = (undefined1 *)0x0;
    lVar4 = 8;
    do {
      *(undefined8 *)((longlong)auStack_2c8 + lVar4) = 0x200000001;
      *(undefined1 **)((longlong)auStack_2c8 + lVar4 + 8) = &DAT_100000001;
      *(undefined8 *)((longlong)&local_2d8 + lVar4) = 0;
      *(undefined1 **)((longlong)auStack_2c8 + lVar4 + -8) = &DAT_100000002;
      *(undefined8 *)((longlong)auStack_2c8 + lVar4 + 0x10) = 0xf00000004;
      lVar4 = lVar4 + 0x28;
    } while (lVar4 != 0x148);
    _Src = &local_2d8;
  }
  else {
    _Src = (undefined8 *)(param_2[6] + 0x10);
  }
  memcpy(&local_188,_Src,0x148);
  memcpy(param_1 + 0xc,&local_188,0x148);
  *(undefined4 *)(param_1 + 0x35) = 0xffffffff;
  lVar4 = param_2[7];
  if (lVar4 == 0) {
    uVar3 = 1;
    uVar6 = 0;
    uVar5 = 0;
    uVar12 = 3;
    uVar24 = 3;
    uVar21 = 0;
    uVar27 = 0;
    uVar23 = 0;
    uVar26 = 0;
    uVar16 = 0;
    uVar18 = 0;
  }
  else {
    uVar12 = *(undefined4 *)(lVar4 + 0x10);
    uVar24 = *(undefined4 *)(lVar4 + 0x14);
    uVar5 = *(undefined4 *)(lVar4 + 0x18);
    uVar21 = *(undefined4 *)(lVar4 + 0x1c);
    uVar6 = *(undefined4 *)(lVar4 + 0x20);
    uVar27 = *(undefined4 *)(lVar4 + 0x24);
    uVar3 = *(undefined4 *)(lVar4 + 0x28);
    uVar23 = *(undefined4 *)(lVar4 + 0x2c);
    uVar26 = *(undefined4 *)(lVar4 + 0x30);
    uVar16 = *(undefined4 *)(lVar4 + 0x34);
    uVar18 = *(undefined4 *)(lVar4 + 0x38);
  }
  *(undefined4 *)((longlong)param_1 + 0x1ac) = uVar12;
  *(undefined4 *)(param_1 + 0x36) = uVar24;
  *(undefined4 *)((longlong)param_1 + 0x1b4) = uVar5;
  *(undefined4 *)(param_1 + 0x37) = uVar21;
  *(undefined4 *)((longlong)param_1 + 0x1bc) = uVar6;
  *(undefined4 *)(param_1 + 0x38) = uVar27;
  *(undefined4 *)((longlong)param_1 + 0x1c4) = uVar3;
  *(undefined4 *)(param_1 + 0x39) = uVar23;
  *(undefined4 *)((longlong)param_1 + 0x1cc) = uVar26;
  *(undefined4 *)(param_1 + 0x3a) = uVar16;
  *(undefined4 *)((longlong)param_1 + 0x1d4) = uVar18;
  lVar4 = param_2[8];
  if (lVar4 == 0) {
    uStack_186 = 0x100000001;
    uStack_180 = 0;
    uStack_17e = 0x800000001;
    local_178 = 0;
    local_2d8 = &DAT_100000001;
    uStack_2d0 = 0x800000001;
    uVar27 = 1;
    uVar12 = 2;
    uVar11 = 0xff;
    uVar5 = 0;
    uVar20 = 0xff;
    uVar24 = 0;
    uVar6 = 1;
  }
  else {
    uVar6 = *(undefined4 *)(lVar4 + 0x10);
    uVar27 = *(undefined4 *)(lVar4 + 0x14);
    uVar12 = *(undefined4 *)(lVar4 + 0x18);
    uVar24 = *(undefined4 *)(lVar4 + 0x1c);
    uVar20 = *(undefined1 *)(lVar4 + 0x20);
    uVar11 = *(undefined1 *)(lVar4 + 0x21);
    local_178 = *(undefined2 *)(lVar4 + 0x32);
    local_188 = (undefined2)*(undefined8 *)(lVar4 + 0x22);
    uStack_186 = (undefined6)((ulonglong)*(undefined8 *)(lVar4 + 0x22) >> 0x10);
    uStack_180 = (undefined2)*(undefined8 *)(lVar4 + 0x2a);
    uStack_17e = (undefined6)((ulonglong)*(undefined8 *)(lVar4 + 0x2a) >> 0x10);
    local_2d8 = *(undefined1 **)(lVar4 + 0x34);
    uStack_2d0 = *(undefined8 *)(lVar4 + 0x3c);
    uVar5 = *(undefined4 *)(lVar4 + 0x44);
  }
  *(undefined4 *)(param_1 + 0x3b) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x1dc) = uVar27;
  *(undefined4 *)(param_1 + 0x3c) = uVar12;
  *(undefined4 *)((longlong)param_1 + 0x1e4) = uVar24;
  *(undefined1 *)(param_1 + 0x3d) = uVar20;
  *(undefined1 *)((longlong)param_1 + 0x1e9) = uVar11;
  *(ulonglong *)((longlong)param_1 + 0x1ea) = CONCAT62(uStack_186,local_188);
  *(ulonglong *)((longlong)param_1 + 0x1f2) = CONCAT62(uStack_17e,uStack_180);
  *(undefined2 *)((longlong)param_1 + 0x1fa) = local_178;
  *(undefined4 *)((longlong)param_1 + 0x1fc) = (undefined4)local_2d8;
  *(undefined4 *)(param_1 + 0x40) = local_2d8._4_4_;
  *(undefined4 *)((longlong)param_1 + 0x204) = (undefined4)uStack_2d0;
  *(undefined4 *)(param_1 + 0x41) = uStack_2d0._4_4_;
  *(undefined4 *)((longlong)param_1 + 0x20c) = uVar5;
  uVar6 = 0;
  if ((ulonglong)*(uint *)(param_2 + 0xb) < 5) {
    uVar6 = *(undefined4 *)(&DAT_14a34c7a8 + (ulonglong)*(uint *)(param_2 + 0xb) * 4);
  }
  *(undefined4 *)((longlong)param_1 + 0x224) = uVar6;
  uVar17 = (ulonglong)*(uint *)((longlong)param_2 + 0x5c);
  if (uVar17 == 0) {
    *(undefined4 *)(param_1 + 0x49) = 0;
  }
  else {
    iVar7 = *(uint *)((longlong)param_2 + 0x5c) + 1;
    do {
      if ((int)uVar17 < 1) {
        iVar7 = 0;
        break;
      }
      iVar7 = iVar7 + -1;
      lVar4 = uVar17 + 0x5f;
      uVar17 = uVar17 - 1;
    } while (*(char *)((longlong)param_2 + lVar4) == '\0');
    *(int *)(param_1 + 0x49) = iVar7;
    uVar17 = 0;
    do {
      iVar7 = *(int *)((longlong)&DAT_14c873434 +
                      (ulonglong)((uint)*(byte *)((longlong)param_2 + uVar17 + 0x60) * 0x30));
      uVar2 = param_2[uVar17 + 0xd];
      if (((uint)uVar2 >> 0x19 & 1) == 0) {
        if ((uVar2 & 4) != 0) {
          if (iVar7 == 0x29) {
            iVar7 = 0x27;
          }
          else if (iVar7 == 0x36) {
            iVar7 = 0x35;
          }
        }
      }
      else {
        iVar7 = FUN_147365ff0(iVar7,((uint)uVar2 & 0x10) >> 4);
      }
      iVar8 = iVar7;
      if ((uVar2 & 0x10) == 0) {
        if (iVar7 < 0x49) {
          if (iVar7 < 0x2c) {
            if (iVar7 == 0x1b) {
              iVar8 = 0x1c;
            }
            else if (iVar7 == 0x13) {
LAB_1406f770e:
              iVar8 = 0x15;
            }
            else if (iVar7 == 0x27) goto LAB_1406f7771;
          }
          else if (iVar7 == 0x46) {
            iVar8 = 0x47;
          }
          else if (iVar7 == 0x35) {
LAB_1406f772c:
            iVar8 = 0x38;
          }
          else if (iVar7 == 0x2c) {
LAB_1406f7693:
            iVar8 = 0x2e;
          }
        }
        else if (iVar7 < 0x61) {
          if (iVar7 == 0x5a) {
            iVar8 = 0x57;
          }
          else if (iVar7 == 0x4c) {
            iVar8 = 0x4d;
          }
          else if (iVar7 == 0x49) {
            iVar8 = 0x4a;
          }
        }
        else if (iVar7 == 0x61) {
          iVar8 = 0x62;
        }
      }
      else if (iVar7 < 0x5a) {
        if (iVar7 < 0x46) {
          if (iVar7 < 0x27) {
            if (iVar7 == 0x13) goto LAB_1406f770e;
            if (iVar7 == 0x1b) {
              iVar8 = 0x1d;
            }
          }
          else if (iVar7 == 0x27) {
LAB_1406f7771:
            iVar8 = 0x29;
          }
          else {
            if (iVar7 == 0x2c) goto LAB_1406f7693;
            if (iVar7 == 0x35) goto LAB_1406f772c;
          }
        }
        else if (iVar7 == 0x46) {
          iVar8 = 0x48;
        }
        else if (iVar7 == 0x4c) {
          iVar8 = 0x4e;
        }
        else if (iVar7 == 0x49) {
          iVar8 = 0x4b;
        }
      }
      else {
        iVar8 = 0x5b;
        if ((iVar7 != 0x5a) && (iVar8 = iVar7, iVar7 == 0x61)) {
          iVar8 = 99;
        }
      }
      *(int *)((longlong)param_1 + uVar17 * 4 + 0x228) = iVar8;
      uVar17 = uVar17 + 1;
    } while (uVar17 < *(uint *)((longlong)param_2 + 0x5c));
  }
  iVar7 = *(int *)((longlong)&DAT_14c873434 + (ulonglong)((uint)*(byte *)(param_2 + 0x15) * 0x30));
  uVar13 = (uint)param_2[0x16];
  if ((uVar13 >> 0x19 & 1) == 0) {
    if ((param_2[0x16] & 4U) == 0) goto LAB_1406f7788;
    if (iVar7 != 0x29) {
      if (iVar7 != 0x36) goto LAB_1406f7788;
      goto LAB_1406f77a8;
    }
  }
  else {
    iVar7 = FUN_147365ff0(iVar7,(uVar13 & 0x10) >> 4);
LAB_1406f7788:
    if (0x2b < iVar7) {
      if (iVar7 == 0x2c) {
        iVar7 = 0x2d;
        goto LAB_1406f77bb;
      }
      if (iVar7 != 0x35) goto LAB_1406f77bb;
LAB_1406f77a8:
      iVar7 = 0x37;
      goto LAB_1406f77bb;
    }
    if (iVar7 == 0x13) {
      iVar7 = 0x14;
      goto LAB_1406f77bb;
    }
    if (iVar7 != 0x27) goto LAB_1406f77bb;
  }
  iVar7 = 0x28;
LAB_1406f77bb:
  *(int *)((longlong)param_1 + 0x24c) = iVar7;
  uVar1 = *(ushort *)(param_2 + 0x18);
  *(uint *)(param_1 + 0x4a) = (uint)uVar1;
  *(uint *)((longlong)param_1 + 0x254) = (uVar1 < 9) - 1;
  lVar4 = *param_2;
  if (lVar4 != 0) {
    *(undefined4 *)(param_1 + 0x43) = *(undefined4 *)(lVar4 + 0x230);
    param_1[0x42] = lVar4 + 0x10;
    *(undefined4 *)(param_1 + 0x59) = *(undefined4 *)(lVar4 + 0x260);
  }
  lVar4 = param_2[1];
  if (lVar4 != 0) {
    iVar7 = *(int *)(lVar4 + 0xa8);
    param_1[2] = *(longlong *)(lVar4 + 0xa0);
    param_1[3] = (longlong)iVar7;
    if (*(int *)(lVar4 + 0xa8) == 0) {
      lVar9 = 0;
      lVar14 = 0;
    }
    else {
      lVar14 = *(longlong *)(*(longlong *)(lVar4 + 0xa0) + 4);
      lVar9 = *(longlong *)(*(longlong *)(lVar4 + 0xa0) + 0xc);
    }
    param_1[0x4f] = lVar14;
    param_1[0x50] = lVar9;
  }
  lVar14 = param_2[3];
  if (lVar14 != 0) {
    iVar7 = *(int *)(lVar14 + 0xa8);
    param_1[4] = *(longlong *)(lVar14 + 0xa0);
    param_1[5] = (longlong)iVar7;
    if (*(int *)(lVar14 + 0xa8) == 0) {
      lVar15 = 0;
      lVar9 = 0;
    }
    else {
      lVar9 = *(longlong *)(*(longlong *)(lVar14 + 0xa0) + 4);
      lVar15 = *(longlong *)(*(longlong *)(lVar14 + 0xa0) + 0xc);
    }
    param_1[0x51] = lVar9;
    param_1[0x52] = lVar15;
  }
  lVar9 = param_2[4];
  if (lVar9 != 0) {
    iVar7 = *(int *)(lVar9 + 0xa8);
    param_1[6] = *(longlong *)(lVar9 + 0xa0);
    param_1[7] = (longlong)iVar7;
    if (*(int *)(lVar9 + 0xa8) == 0) {
      lVar19 = 0;
      lVar15 = 0;
    }
    else {
      lVar15 = *(longlong *)(*(longlong *)(lVar9 + 0xa0) + 4);
      lVar19 = *(longlong *)(*(longlong *)(lVar9 + 0xa0) + 0xc);
    }
    param_1[0x53] = lVar15;
    param_1[0x54] = lVar19;
  }
  lVar15 = param_2[2];
  if (lVar15 != 0) {
    iVar7 = *(int *)(lVar15 + 0xa8);
    param_1[8] = *(longlong *)(lVar15 + 0xa0);
    param_1[9] = (longlong)iVar7;
    if (*(int *)(lVar15 + 0xa8) == 0) {
      lVar22 = 0;
      lVar19 = 0;
    }
    else {
      lVar19 = *(longlong *)(*(longlong *)(lVar15 + 0xa0) + 4);
      lVar22 = *(longlong *)(*(longlong *)(lVar15 + 0xa0) + 0xc);
    }
    param_1[0x57] = lVar19;
    param_1[0x58] = lVar22;
  }
  lVar19 = param_2[5];
  if (lVar19 != 0) {
    iVar7 = *(int *)(lVar19 + 0xa8);
    param_1[10] = *(longlong *)(lVar19 + 0xa0);
    param_1[0xb] = (longlong)iVar7;
    if (*(int *)(lVar19 + 0xa8) == 0) {
      lVar25 = 0;
      lVar22 = 0;
    }
    else {
      lVar22 = *(longlong *)(*(longlong *)(lVar19 + 0xa0) + 4);
      lVar25 = *(longlong *)(*(longlong *)(lVar19 + 0xa0) + 0xc);
    }
    param_1[0x55] = lVar22;
    param_1[0x56] = lVar25;
  }
  if ((lVar4 != 0) && (0 < *(int *)(lVar4 + 200))) {
    param_1[0x5b] = lVar4 + 0xc0;
  }
  if ((lVar14 != 0) && (0 < *(int *)(lVar14 + 200))) {
    param_1[0x5c] = lVar14 + 0xc0;
  }
  if ((lVar9 != 0) && (0 < *(int *)(lVar9 + 200))) {
    param_1[0x5d] = lVar9 + 0xc0;
  }
  if ((lVar15 != 0) && (0 < *(int *)(lVar15 + 200))) {
    param_1[0x5f] = lVar15 + 0xc0;
  }
  if ((lVar19 != 0) && (0 < *(int *)(lVar19 + 200))) {
    param_1[0x5e] = lVar19 + 0xc0;
  }
  uVar13 = 0;
  if (DAT_14ca84e1e != '\0') {
    uVar13 = (uint)*(byte *)((longlong)param_2 + 0xc5);
  }
  *(uint *)((longlong)param_1 + 0x20c) = uVar13;
  uVar17 = (ulonglong)*(uint *)(param_1 + 0x49);
  if (uVar17 < 8) {
    plVar10 = param_1 + uVar17 * 5 + 0xd;
    do {
      uVar17 = uVar17 + 1;
      plVar10[2] = 0;
      plVar10[3] = 0;
      *plVar10 = 0;
      plVar10[1] = 0;
      plVar10[4] = 0;
      plVar10 = plVar10 + 5;
    } while ((int)uVar17 != 8);
  }
  *(byte *)((longlong)param_1 + 0x2cc) =
       (byte)((ushort)*(undefined2 *)((longlong)param_2 + 0xca) >> 0xc) & 1;
  if ((local_38 ^ (ulonglong)auStack_2f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1406f7aac FUN_1406f7aac body=310 status=ok
// SIG undefined FUN_1406f7aac(void)

undefined8 FUN_1406f7aac(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [40];
  LARGE_INTEGER local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x30));
  if (*(longlong *)(param_1 + 0x28) == 0) {
    if (*(int *)(param_1 + 0x38) == 1) {
      QueryPerformanceCounter(&local_30);
      iVar1 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60);
      if (((iVar1 != 0x40000002) && (iVar1 == 1)) && (DAT_14c86a9f8 != '\0')) {
        FUN_140ad26c0();
        GetCurrentThreadId();
      }
      if (*(int *)(param_1 + 0x38) == 1) {
        do {
          QueryPerformanceCounter(&local_30);
        } while (*(int *)(param_1 + 0x38) == 1);
      }
    }
  }
  else {
    FUN_140187fa0(*(longlong *)(param_1 + 0x28),1,0);
    plVar2 = *(longlong **)(param_1 + 0x20);
    plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x28) + 0x60);
    if (plVar2 != plVar3) {
      *(longlong **)(param_1 + 0x20) = plVar3;
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 8))();
      }
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
    plVar2 = *(longlong **)(param_1 + 0x28);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x28))(plVar2,1);
    }
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(uint *)(param_1 + 0x38) = (uint)(*(longlong *)(param_1 + 0x20) == 0) * 2;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x30));
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406f7be4 FUN_1406f7be4 body=12 status=ok
// SIG undefined FUN_1406f7be4(void)

void FUN_1406f7be4(longlong param_1)

{
  FUN_1406f7bf0(param_1 + 0xc0);
  return;
}



// FUNCTION 1406f7bf0 FUN_1406f7bf0 body=158 status=ok
// SIG undefined FUN_1406f7bf0(void)

undefined8 FUN_1406f7bf0(longlong *param_1,ulonglong param_2)

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
          FUN_1406f7c8e(param_1,iVar1);
          return 1;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x10 + *param_1 + 8);
      } while (iVar1 != -1);
    }
  }
  return 0;
}



// FUNCTION 1406f7c8e FUN_1406f7c8e body=95 status=ok
// SIG undefined FUN_1406f7c8e(void)

void FUN_1406f7c8e(longlong *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  int *piVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  plVar3 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar3 = (longlong *)param_1[8];
  }
  lVar5 = (longlong)*(int *)(lVar1 + 0xc + (longlong)param_2 * 0x10);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(lVar1 + (longlong)iVar2 * 0x10 + 8);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + (longlong)param_2 * 0x10 + 8);
  FUN_1406f7cee(param_1,param_2,1);
  return;
}



// FUNCTION 1406f7cee FUN_1406f7cee body=136 status=ok
// SIG undefined FUN_1406f7cee(void)

void FUN_1406f7cee(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)((longlong)param_2 * 0x10 + lVar2 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x10) = param_2;
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
      puVar7 = puVar7 + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1406f7d76 FUN_1406f7d76 body=381 status=ok
// SIG undefined FUN_1406f7d76(void)

undefined8 FUN_1406f7d76(longlong param_1,uint param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  float fVar6;
  
  if (((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 0x140))) &&
     (plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x138) + (ulonglong)param_2 * 8),
     plVar1 != (longlong *)0x0)) {
    lVar3 = (ulonglong)(param_2 >> 2) * 0x150 + *(longlong *)(param_1 + 0x10);
    if ((*(int *)((longlong)plVar1 + 0x3d4) < 0) &&
       ((lVar2 = plVar1[0x16], lVar2 != 0 || (lVar2 = FUN_1448abda6(plVar1), lVar2 != 0)))) {
      fVar6 = (float)*(double *)(lVar2 + 0x6d0);
    }
    else {
      fVar6 = *(float *)(plVar1 + 0x79);
    }
    uVar5 = (**(code **)(*plVar1 + 0x740))(plVar1);
    uVar4 = (ulonglong)(param_2 & 3);
    *(longlong *)(lVar3 + uVar4 * 8) = plVar1[0x2c];
    *(longlong *)(lVar3 + 0x20 + uVar4 * 8) = plVar1[0x2d];
    *(longlong *)(lVar3 + 0x40 + uVar4 * 8) = plVar1[0x2e];
    *(longlong *)(lVar3 + 0x60 + uVar4 * 8) = plVar1[0x2c];
    *(longlong *)(lVar3 + 0x80 + uVar4 * 8) = plVar1[0x2d];
    *(longlong *)(lVar3 + 0xa0 + uVar4 * 8) = plVar1[0x2e];
    *(float *)(lVar3 + 0xc0 + uVar4 * 4) = (float)(double)plVar1[0x2f];
    *(float *)(lVar3 + 0xd0 + uVar4 * 4) = (float)(double)plVar1[0x30];
    *(float *)(lVar3 + 0xe0 + uVar4 * 4) = (float)(double)plVar1[0x31];
    *(undefined4 *)(lVar3 + 0xf0 + uVar4 * 4) = uVar5;
    *(undefined4 *)(lVar3 + 0x100 + uVar4 * 4) = 0xffff0000;
    *(undefined4 *)(lVar3 + 0x110 + uVar4 * 4) = 0;
    *(undefined4 *)(lVar3 + 0x120 + uVar4 * 4) = 0;
    *(undefined4 *)(lVar3 + 0x130 + uVar4 * 4) = 0x7f7fffff;
    *(float *)(lVar3 + 0x140 + uVar4 * 4) = fVar6;
    return 1;
  }
  return 0;
}



// FUNCTION 1406f7ef4 FUN_1406f7ef4 body=1222 status=ok
// SIG undefined FUN_1406f7ef4(void)

void FUN_1406f7ef4(longlong param_1,int param_2,double *param_3,double *param_4,undefined8 *param_5,
                  undefined8 *param_6)

{
  double *pdVar1;
  int *piVar2;
  double dVar3;
  double dVar4;
  longlong lVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  double dVar9;
  ulonglong uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  int iVar22;
  int iVar23;
  uint uVar24;
  longlong lVar25;
  undefined8 *puVar26;
  longlong lVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  double dVar31;
  undefined1 auVar32 [16];
  double dVar33;
  double dVar34;
  undefined1 auVar35 [16];
  double dVar37;
  undefined1 auVar36 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auStack_148 [32];
  undefined8 *local_128;
  undefined8 *local_120;
  double local_118;
  double local_110;
  double dStack_108;
  double local_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double local_b0;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_148;
  lVar25 = (longlong)param_2;
  piVar2 = (int *)(*(longlong *)(param_1 + 0x60) + 4 + lVar25 * 8);
  *piVar2 = *piVar2 + 1;
  iVar23 = *(int *)(*(longlong *)(param_1 + 0x60) + lVar25 * 8);
  if (iVar23 == -1) {
    lVar27 = *(longlong *)(param_1 + 0x80) + lVar25 * 0x420;
    iVar23 = *(int *)(*(longlong *)(param_1 + 0x80) + 0x410 + lVar25 * 0x420);
    if (((longlong)iVar23 < 0x10) ||
       (param_3[4] < *(double *)(param_1 + 0xa0) || param_3[4] == *(double *)(param_1 + 0xa0))) {
      *(uint *)(lVar27 + 0x410) = iVar23 + 1U;
      if (*(uint *)(lVar27 + 0x414) < iVar23 + 1U) {
        FUN_14573bb12(lVar27,iVar23);
      }
      lVar25 = *(longlong *)(lVar27 + 0x400);
      if (*(longlong *)(lVar27 + 0x400) == 0) {
        lVar25 = lVar27;
      }
      lVar27 = (longlong)iVar23 * 0x40;
      uVar15 = *param_5;
      uVar16 = param_5[1];
      uVar17 = param_5[2];
      uVar18 = param_5[3];
      uVar19 = param_5[4];
      uVar20 = param_5[5];
      uVar21 = param_5[7];
      puVar26 = (undefined8 *)(lVar25 + 0x30 + lVar27);
      *puVar26 = param_5[6];
      puVar26[1] = uVar21;
      puVar26 = (undefined8 *)(lVar25 + 0x20 + lVar27);
      *puVar26 = uVar19;
      puVar26[1] = uVar20;
      puVar26 = (undefined8 *)(lVar25 + 0x10 + lVar27);
      *puVar26 = uVar17;
      puVar26[1] = uVar18;
      *(undefined8 *)(lVar25 + lVar27) = uVar15;
      ((undefined8 *)(lVar25 + lVar27))[1] = uVar16;
      goto LAB_1406f81da;
    }
    FUN_1406f83bc(param_6,lVar27);
    iVar23 = FUN_1406f8448(param_1);
    *(int *)(*(longlong *)(param_1 + 0x70) + (ulonglong)(iVar23 - 1U >> 3) * 4) = param_2;
    *(int *)(*(longlong *)(param_1 + 0x60) + lVar25 * 8) = iVar23;
    *(undefined4 *)(*(longlong *)(param_1 + 0x60) + 4 + lVar25 * 8) = 0;
    puVar26 = (undefined8 *)param_6[0x80];
    if ((undefined8 *)param_6[0x80] == (undefined8 *)0x0) {
      puVar26 = param_6;
    }
    if ((longlong)*(int *)(param_6 + 0x82) != 0) {
      lVar25 = (longlong)*(int *)(param_6 + 0x82) << 6;
      do {
        (**(code **)(**(longlong **)(puVar26[6] + 0x28) + 0x10))
                  (*(longlong **)(puVar26[6] + 0x28),&local_118);
        local_f8 = local_118;
        dStack_f0 = local_110;
        local_e8 = dStack_108;
        dStack_e0 = 0.0;
        local_d8 = local_100;
        dStack_d0 = local_100;
        local_c8 = local_100;
        dStack_c0 = 0.0;
        local_120 = param_6;
        local_128 = puVar26;
        FUN_1406f7ef4(param_1,param_2,param_3,&local_f8);
        puVar26 = puVar26 + 8;
        lVar25 = lVar25 + -0x40;
      } while (lVar25 != 0);
    }
    *(undefined4 *)(param_6 + 0x82) = 0;
    if (*(int *)((longlong)param_6 + 0x414) < 0) {
      FUN_1471e6f36(param_6,0);
    }
  }
  else {
    dVar31 = *param_4;
    dVar33 = param_4[1];
    dVar34 = param_4[2];
    dVar37 = param_4[3];
    dVar11 = *param_3;
    dVar12 = param_3[1];
    dVar13 = param_3[2];
    dVar14 = param_3[3];
    dVar3 = param_3[9];
    dVar9 = dVar33 - (dVar12 - dVar3);
    auVar28._0_8_ = (dVar11 + dVar3) - dVar31;
    auVar28._8_8_ = (dVar12 + dVar3) - dVar33;
    auVar29._8_4_ = SUB84(dVar9,0);
    auVar29._0_8_ = dVar31 - (dVar11 - dVar3);
    auVar29._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
    auVar29 = minpd(auVar28,auVar29);
    auVar38._0_8_ = (dVar13 + dVar3) - dVar34;
    auVar38._8_8_ = (dVar14 + dVar3) - dVar37;
    auVar39._8_8_ = dVar37 - (dVar14 - dVar3);
    auVar39._0_8_ = dVar34 - (dVar13 - dVar3);
    auVar39 = minpd(auVar38,auVar39);
    dVar4 = param_3[8];
    dVar9 = param_3[8];
    lVar27 = -(ulonglong)(dVar9 < auVar29._8_8_ + param_4[5]);
    auVar6._8_4_ = (int)lVar27;
    auVar6._0_8_ = -(ulonglong)(dVar4 < auVar29._0_8_ + param_4[4]);
    auVar6._12_4_ = (int)((ulonglong)lVar27 >> 0x20);
    iVar22 = movmskpd((int)*(longlong *)(param_1 + 0x60),auVar6);
    auVar30._8_8_ = -(ulonglong)(dVar9 < auVar39._8_8_ + param_4[7]);
    auVar30._0_8_ = -(ulonglong)(dVar4 < auVar39._0_8_ + param_4[6]);
    uVar24 = movmskpd((int)param_3,auVar30);
    if ((uVar24 & 0x3fffffff) != 0 || iVar22 != 0) {
      lVar5 = *(longlong *)(param_1 + 0x80);
      lVar25 = lVar25 * 0x420;
      lVar27 = lVar5 + lVar25;
      iVar23 = *(int *)(lVar5 + 0x410 + lVar25);
      *(uint *)(lVar5 + 0x410 + lVar25) = iVar23 + 1U;
      if (*(uint *)(lVar5 + 0x414 + lVar25) < iVar23 + 1U) {
        FUN_14573bb12(lVar27,iVar23);
      }
      lVar25 = *(longlong *)(lVar27 + 0x400);
      if (*(longlong *)(lVar27 + 0x400) == 0) {
        lVar25 = lVar27;
      }
      lVar27 = (longlong)iVar23 * 0x40;
      uVar15 = *param_5;
      uVar16 = param_5[1];
      uVar17 = param_5[2];
      uVar18 = param_5[3];
      uVar19 = param_5[4];
      uVar20 = param_5[5];
      uVar21 = param_5[7];
      puVar26 = (undefined8 *)(lVar25 + 0x30 + lVar27);
      *puVar26 = param_5[6];
      puVar26[1] = uVar21;
      puVar26 = (undefined8 *)(lVar25 + 0x20 + lVar27);
      *puVar26 = uVar19;
      puVar26[1] = uVar20;
      puVar26 = (undefined8 *)(lVar25 + 0x10 + lVar27);
      *puVar26 = uVar17;
      puVar26[1] = uVar18;
      *(undefined8 *)(lVar25 + lVar27) = uVar15;
      ((undefined8 *)(lVar25 + lVar27))[1] = uVar16;
LAB_1406f81da:
      *(ulonglong *)(param_5[6] + 0x38) = CONCAT44(iVar23,param_2);
      goto LAB_1406f8104;
    }
    pdVar1 = param_3 + 8;
    auVar7._8_4_ = (int)-(ulonglong)(dVar12 < dVar33);
    auVar7._0_8_ = -(ulonglong)(dVar11 < dVar31);
    auVar7._12_4_ = (int)(-(ulonglong)(dVar12 < dVar33) >> 0x20);
    iVar22 = movmskpd(iVar22,auVar7);
    auVar35._8_8_ = -(ulonglong)(dVar14 < dVar37);
    auVar35._0_8_ = -(ulonglong)(dVar13 < dVar34);
    uVar24 = movmskpd(0,auVar35);
    iVar22 = iVar22 + (uVar24 & 1) * 4;
    param_2 = iVar23 + iVar22;
    auVar32._4_4_ = iVar22;
    auVar32._0_4_ = iVar22;
    auVar32._8_4_ = iVar22;
    auVar32._12_4_ = iVar22;
    auVar39 = pmovsxbd(auVar35,0x8040201);
    auVar32 = auVar32 & auVar39;
    dVar34 = (double)(float)-(uint)(auVar32._0_4_ == auVar39._0_4_);
    dVar37 = (double)(float)-(uint)(auVar32._4_4_ == auVar39._4_4_);
    dVar31 = (double)(float)-(uint)(auVar32._8_4_ == auVar39._8_4_);
    dVar33 = (double)(float)-(uint)(auVar32._12_4_ == auVar39._12_4_);
    uVar10 = (ulonglong)dVar3 & (ulonglong)dVar37;
    auVar36._0_8_ = ~(ulonglong)dVar34 & (ulonglong)-dVar3;
    auVar36._8_8_ = ~(ulonglong)dVar37 & (ulonglong)-dVar3;
    auVar8._8_4_ = (int)uVar10;
    auVar8._0_8_ = (ulonglong)dVar3 & (ulonglong)dVar34;
    auVar8._12_4_ = (int)(uVar10 >> 0x20);
    local_f8 = SUB168(auVar36 | auVar8,0) + dVar11;
    dStack_f0 = SUB168(auVar36 | auVar8,8) + dVar12;
    local_e8 = ((double)(~(ulonglong)dVar31 & (ulonglong)-dVar3 |
                        (ulonglong)dVar3 & (ulonglong)dVar31) + dVar13) * 1.0;
    dStack_e0 = ((double)(~(ulonglong)dVar33 & (ulonglong)-dVar3 |
                         (ulonglong)dVar3 & (ulonglong)dVar33) + dVar14) * 0.0;
    local_c8 = dVar4 * 1.0;
    dStack_c0 = dVar9 * 0.0;
    param_3 = &local_f8;
    local_b8 = *pdVar1 * 0.5 * 1.0625;
    local_b0 = *pdVar1 - local_b8;
    local_d8 = dVar4;
    dStack_d0 = dVar9;
  }
  local_120 = param_6;
  local_128 = param_5;
  FUN_1406f7ef4(param_1,param_2,param_3,param_4);
LAB_1406f8104:
  if ((local_90 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1406f83bc FUN_1406f83bc body=139 status=ok
// SIG undefined FUN_1406f83bc(void)

void * FUN_1406f83bc(void *param_1,void *param_2)

{
  if (param_1 != param_2) {
    if (*(longlong *)((longlong)param_2 + 0x400) == 0) {
      memmove(param_1,param_2,0x400);
    }
    if (*(longlong *)((longlong)param_1 + 0x400) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)((longlong)param_1 + 0x400) = *(undefined8 *)((longlong)param_2 + 0x400);
    *(undefined8 *)((longlong)param_2 + 0x400) = 0;
    *(undefined4 *)((longlong)param_1 + 0x410) = *(undefined4 *)((longlong)param_2 + 0x410);
    *(undefined4 *)((longlong)param_1 + 0x414) = *(undefined4 *)((longlong)param_2 + 0x414);
    *(undefined8 *)((longlong)param_2 + 0x410) = 0x1000000000;
  }
  return param_1;
}



// FUNCTION 1406f8448 FUN_1406f8448 body=144 status=ok
// SIG undefined FUN_1406f8448(void)

int FUN_1406f8448(longlong param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x98);
  if ((longlong)iVar2 == 0) {
    iVar2 = FUN_1406f84d8(param_1 + 0x60,8);
    iVar1 = *(int *)(param_1 + 0x78);
    *(uint *)(param_1 + 0x78) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0x7c) < iVar1 + 1U) {
      FUN_1447808da(param_1 + 0x70,iVar1);
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x70) + (longlong)iVar1 * 4) = 0;
    FUN_1406f8538(param_1 + 0x80,8);
  }
  else {
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x90) + -4 + (longlong)iVar2 * 4);
    *(int *)(param_1 + 0x98) = iVar2 + -1;
    FUN_144780a3c(param_1 + 0x90);
    iVar2 = iVar1 * 8 + 1;
  }
  return iVar2;
}



// FUNCTION 1406f84d8 FUN_1406f84d8 body=70 status=ok
// SIG undefined FUN_1406f84d8(void)

int FUN_1406f84d8(longlong *param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + param_2;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < param_2) {
    FUN_14573ba8c(param_1,iVar1);
  }
  FUN_1406f851e((longlong)iVar1 * 8 + *param_1,param_2);
  return iVar1;
}



// FUNCTION 1406f851e FUN_1406f851e body=26 status=ok
// SIG undefined FUN_1406f851e(void)

void FUN_1406f851e(longlong param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = 0;
    do {
      *(undefined8 *)(param_1 + lVar1 * 8) = 0xffffffff;
      lVar1 = lVar1 + 1;
    } while (param_2 != (int)lVar1);
  }
  return;
}



// FUNCTION 1406f8538 FUN_1406f8538 body=70 status=ok
// SIG undefined FUN_1406f8538(void)

int FUN_1406f8538(longlong *param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + param_2;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < param_2) {
    FUN_1406f85ac(param_1,iVar1);
  }
  FUN_1406f857e((longlong)iVar1 * 0x420 + *param_1,param_2);
  return iVar1;
}



// FUNCTION 1406f857e FUN_1406f857e body=45 status=ok
// SIG undefined FUN_1406f857e(void)

void FUN_1406f857e(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x414;
    do {
      *(undefined8 *)(param_1 + -0x14) = 0;
      *(undefined8 *)(param_1 + -4) = 0x1000000000;
      param_1 = param_1 + 0x420;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1406f85ac FUN_1406f85ac body=301 status=ok
// SIG undefined FUN_1406f85ac(void)

void FUN_1406f85ac(longlong *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  
  uVar1 = *(uint *)(param_1 + 1);
  if ((int)uVar1 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)((longlong)param_1 + 0xc) == 0) {
    uVar2 = 4;
    if (4 < uVar1) {
      uVar2 = uVar1;
    }
    lVar3 = (longlong)(int)uVar2;
  }
  else {
    lVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
  }
  uVar4 = lVar3 * 0x420;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      if (uVar4 < 0x7ff1) {
        uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
      }
      else {
        uVar6 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar6 = (ulonglong)DAT_14c841df8;
        }
        uVar4 = -uVar6 & (uVar4 + uVar6) - 1;
      }
    }
    else {
      uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,0x10);
    }
  }
  uVar6 = 0x7fffffff;
  if ((int)uVar1 <= (int)(uVar4 / 0x420)) {
    uVar6 = uVar4 / 0x420 & 0xffffffff;
  }
  iVar5 = (int)uVar6;
  *(int *)((longlong)param_1 + 0xc) = iVar5;
  if ((*param_1 != 0) || (iVar5 != 0)) {
    if (iVar5 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1467ac60e(uVar6,0x420);
    }
    lVar3 = FUN_14001fdce(*param_1,uVar6 * 0x420,0x10);
    *param_1 = lVar3;
  }
  return;
}



// FUNCTION 1406f86da FUN_1406f86da body=85 status=ok
// SIG undefined FUN_1406f86da(void)

void FUN_1406f86da(longlong param_1,int param_2)

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
    FUN_1406f8730();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1406f8730 FUN_1406f8730 body=453 status=ok
// SIG undefined FUN_1406f8730(void)

void FUN_1406f8730(undefined8 *param_1,uint param_2)

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
    FUN_1456bc5fe(uVar3,0x30);
  }
  _Src = (void *)*param_1;
  if (param_2 == 0) {
    _Dst = (void *)0x0;
    if (_Src != (void *)0x0) {
LAB_1406f884e:
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
LAB_1406f888b:
    *param_1 = _Dst;
    return;
  }
  _Size = uVar3 * 0x30;
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar4 = (uint *)*puVar1;
  if (puVar4 != (uint *)0x0) goto LAB_1406f8789;
LAB_1406f877e:
  FUN_14472e504(puVar1);
  puVar4 = (uint *)*puVar1;
LAB_1406f8789:
  _Dst = (void *)(*(longlong *)(puVar4 + 0x10) + 7U & 0xfffffffffffffff8);
  puVar6 = (uint *)((longlong)_Dst + _Size);
  if (puVar4 + 0x4000 < puVar6) {
    if (param_2 < 0x554) goto code_r0x0001406f87b5;
    puVar4 = (uint *)FUN_14472e5b2(_Size + 0x60,8);
    *puVar4 = 0xffffffff;
    puVar4[0x12] = 0;
    _Dst = (void *)((longlong)puVar4 + 0x5fU & 0xfffffffffffffff8);
    *(uint **)(puVar4 + 0x10) = puVar4 + uVar3 * 0xc + 0x18;
    *puVar4 = 1;
  }
  else {
    uVar7 = puVar4[0x12] + 1;
LAB_1406f880b:
    *(uint **)(puVar4 + 0x10) = puVar6 + 2;
    puVar4[0x12] = uVar7;
  }
  *(int *)((longlong)_Dst + -8) = ((int)_Dst + -8) - (int)puVar4;
  *(int *)((longlong)_Dst + -4) = (int)_Size;
  if (_Src == (void *)0x0) goto LAB_1406f888b;
  uVar3 = (ulonglong)*(uint *)((longlong)_Src + -4);
  if (uVar3 != 0) {
    if (uVar3 < _Size) {
      _Size = uVar3;
    }
    memcpy(_Dst,_Src,_Size);
  }
  goto LAB_1406f884e;
code_r0x0001406f87b5:
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
      goto LAB_1406f880b;
    }
  }
  goto LAB_1406f877e;
}



// FUNCTION 1406f88fc FUN_1406f88fc body=57 status=ok
// SIG undefined FUN_1406f88fc(void)

void FUN_1406f88fc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb53e98 == 0) {
    uVar1 = FUN_140ef4a9e();
    DAT_14cb53e98 = FUN_140002ddd(FUN_1464abef4,uVar1,L"TimeOfDayStateKey");
  }
  return;
}



// FUNCTION 1406f893c FUN_1406f893c body=57 status=ok
// SIG undefined FUN_1406f893c(void)

void FUN_1406f893c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6da20 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6da20 = FUN_140002ddd(FUN_146536f2b,uVar1,L"RefreshAreaDef");
  }
  return;
}



// FUNCTION 1406f8976 FUN_1406f8976 body=275 status=ok
// SIG undefined FUN_1406f8976(void)

void FUN_1406f8976(longlong param_1,int param_2)

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
    uVar4 = lVar3 * 0x50;
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
    if ((int)uVar1 <= (int)(uVar4 / 0x50)) {
      uVar5 = uVar4 / 0x50 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x50,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1406f8a8a FUN_1406f8a8a body=1375 status=ok
// SIG undefined FUN_1406f8a8a(void)

undefined8 FUN_1406f8a8a(longlong param_1,longlong *param_2)

{
  uint *puVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 *puVar4;
  int iVar5;
  ulonglong *puVar6;
  longlong lVar7;
  undefined1 *puVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  longlong lVar13;
  undefined1 auStack_a8 [44];
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  uint local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_14a1ca330);
  if ((*(byte *)(param_2 + 5) & 1) == 0) {
    if (((*(byte *)((longlong)param_2 + 0x35) & 0x10) == 0) ||
       ((*(byte *)((longlong)param_2 + 0x29) & 1) != 0)) {
      if (*(longlong *)(param_1 + 0x20) == 0) {
        local_50 = 0xffffffff;
      }
      else {
        local_50 = *(uint *)(*(longlong *)(param_1 + 0x20) + 0x18);
      }
      puVar6 = (ulonglong *)param_2[1];
      puVar1 = (uint *)*puVar6 + 1;
      if ((uint *)puVar6[1] < puVar1) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
          (**(code **)(*param_2 + 0x170))(param_2,&local_50,4);
        }
        else {
          thunk_FUN_14572512c(param_2,&local_50);
        }
      }
      else {
        local_50 = *(uint *)*puVar6;
        *puVar6 = (ulonglong)puVar1;
      }
      local_4c = *(int *)(param_1 + 0x30);
      puVar6 = (ulonglong *)param_2[1];
      piVar2 = (int *)*puVar6 + 1;
      if ((int *)puVar6[1] < piVar2) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
          (**(code **)(*param_2 + 0x170))(param_2,&local_4c,4);
        }
        else {
          thunk_FUN_14572512c(param_2,&local_4c);
        }
      }
      else {
        local_4c = *(int *)*puVar6;
        *puVar6 = (ulonglong)piVar2;
      }
      iVar9 = *(int *)(param_1 + 0x30);
      if ((longlong)iVar9 != 0) {
        lVar7 = *(longlong *)(param_1 + 0x28);
        lVar13 = 0;
        do {
          plVar3 = (longlong *)(lVar7 + lVar13);
          local_78 = (undefined4)*plVar3;
          uStack_74 = *(undefined4 *)((longlong)plVar3 + 4);
          uStack_70 = (undefined4)plVar3[1];
          uStack_6c = *(undefined4 *)((longlong)plVar3 + 0xc);
          puVar4 = (undefined4 *)(lVar7 + 0x10 + lVar13);
          local_68 = *puVar4;
          uStack_64 = puVar4[1];
          uStack_60 = puVar4[2];
          uStack_5c = puVar4[3];
          if (*plVar3 == 0) {
            local_7c = 0xffffffff;
          }
          else {
            local_7c = *(undefined4 *)(*plVar3 + 0x18);
          }
          puVar6 = (ulonglong *)param_2[1];
          puVar4 = (undefined4 *)*puVar6 + 1;
          if ((undefined4 *)puVar6[1] < puVar4) {
            if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
              (**(code **)(*param_2 + 0x170))(param_2,&local_7c,4);
            }
            else {
              thunk_FUN_14572512c(param_2,&local_7c);
            }
          }
          else {
            local_7c = *(undefined4 *)*puVar6;
            *puVar6 = (ulonglong)puVar4;
          }
          plVar3 = (longlong *)param_2[1];
          if ((undefined1 *)plVar3[1] < (undefined1 *)*plVar3 + 1) {
            (**(code **)(*param_2 + 0x170))(param_2,&uStack_70,1);
          }
          else {
            uStack_70 = CONCAT31(uStack_70._1_3_,*(undefined1 *)*plVar3);
            *plVar3 = *plVar3 + 1;
          }
          (**(code **)(*param_2 + 0x160))(param_2,&uStack_6c);
          (**(code **)(*param_2 + 0x160))(param_2,&uStack_64);
          lVar13 = lVar13 + 0x20;
        } while ((longlong)iVar9 * 0x20 != lVar13);
      }
    }
    else {
      local_50 = 0xffffffff;
      puVar6 = (ulonglong *)param_2[1];
      puVar1 = (uint *)*puVar6 + 1;
      if ((uint *)puVar6[1] < puVar1) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
          (**(code **)(*param_2 + 0x170))(param_2,&local_50,4);
        }
        else {
          thunk_FUN_14572512c(param_2,&local_50);
        }
      }
      else {
        local_50 = *(uint *)*puVar6;
        *puVar6 = (ulonglong)puVar1;
      }
      local_4c = 0;
      puVar6 = (ulonglong *)param_2[1];
      if (puVar6[1] < *puVar6 + 4) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
          (**(code **)(*param_2 + 0x170))(param_2,&local_4c,4);
        }
        else {
          thunk_FUN_14572512c(param_2,&local_4c);
        }
      }
      else {
        *puVar6 = *puVar6 + 4;
      }
    }
    goto LAB_1406f8c0f;
  }
  iVar9 = FUN_1448332aa(param_2,&DAT_14a1ca330);
  puVar6 = (ulonglong *)param_2[1];
  puVar1 = (uint *)*puVar6 + 1;
  if ((uint *)puVar6[1] < puVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_50,4);
    }
    else {
      thunk_FUN_14572512c(param_2,&local_50);
    }
  }
  else {
    local_50 = *(uint *)*puVar6;
    *puVar6 = (ulonglong)puVar1;
  }
  if (((int)local_50 < 0) || (*(int *)(*(longlong *)(param_1 + 8) + 0x30) <= (int)local_50)) {
    uVar11 = 0;
  }
  else {
    uVar11 = *(undefined8 *)
              (*(longlong *)(*(longlong *)(param_1 + 8) + 0x28) + (ulonglong)local_50 * 8);
  }
  *(undefined8 *)(param_1 + 0x20) = uVar11;
  puVar6 = (ulonglong *)param_2[1];
  piVar2 = (int *)*puVar6 + 1;
  if ((int *)puVar6[1] < piVar2) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_4c,4);
    }
    else {
      thunk_FUN_14572512c(param_2,&local_4c);
    }
  }
  else {
    local_4c = *(int *)*puVar6;
    *puVar6 = (ulonglong)piVar2;
  }
  plVar3 = (longlong *)(param_1 + 0x28);
  iVar5 = *(int *)(param_1 + 0x30);
  if (iVar5 < local_4c) {
    *(int *)(param_1 + 0x30) = local_4c;
    iVar10 = local_4c;
    if ((uint)(*(int *)(param_1 + 0x34) - iVar5) < (uint)(local_4c - iVar5)) {
      FUN_1406f8fea(plVar3);
      goto LAB_1406f8b4f;
    }
  }
  else {
    if (local_4c < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(local_4c);
    }
    if (local_4c < iVar5) {
      *(int *)(param_1 + 0x30) = local_4c;
      FUN_1470e84bc(plVar3);
    }
LAB_1406f8b4f:
    iVar10 = *(int *)(param_1 + 0x30);
  }
  if (iVar10 != 0) {
    lVar7 = *plVar3;
    puVar12 = (undefined8 *)(lVar7 + 0x14);
    do {
      puVar6 = (ulonglong *)param_2[1];
      puVar1 = (uint *)*puVar6 + 1;
      if ((uint *)puVar6[1] < puVar1) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
          (**(code **)(*param_2 + 0x170))(param_2,&local_50,4);
        }
        else {
          thunk_FUN_14572512c(param_2,&local_50);
        }
      }
      else {
        local_50 = *(uint *)*puVar6;
        *puVar6 = (ulonglong)puVar1;
      }
      if (((int)local_50 < 0) || (*(int *)(*(longlong *)(param_1 + 8) + 0x30) <= (int)local_50)) {
        uVar11 = 0;
      }
      else {
        uVar11 = *(undefined8 *)
                  (*(longlong *)(*(longlong *)(param_1 + 8) + 0x28) + (ulonglong)local_50 * 8);
      }
      *(undefined8 *)((longlong)puVar12 + -0x14) = uVar11;
      puVar8 = *(undefined1 **)param_2[1];
      if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar8 + 1) {
        (**(code **)(*param_2 + 0x170))(param_2,(undefined1 *)((longlong)puVar12 + -0xc),1);
      }
      else {
        *(undefined1 *)((longlong)puVar12 + -0xc) = *puVar8;
        *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
      }
      (**(code **)(*param_2 + 0x160))(param_2,puVar12 + -1);
      if (iVar9 < 0) {
        *puVar12 = 0;
      }
      else {
        (**(code **)(*param_2 + 0x160))(param_2,puVar12);
      }
      lVar13 = (longlong)puVar12 + 0xc;
      puVar12 = puVar12 + 4;
    } while (lVar13 != (longlong)iVar10 * 0x20 + lVar7);
  }
LAB_1406f8c0f:
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 0;
}



// FUNCTION 1406f8fea FUN_1406f8fea body=255 status=ok
// SIG undefined FUN_1406f8fea(void)

void FUN_1406f8fea(longlong param_1,int param_2)

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
    uVar4 = uVar3 * 0x20;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)[(uVar3 & 0x7ffffffffffffff) * 2]];
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
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
    uVar3 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 >> 5)) {
      uVar3 = uVar4 >> 5 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar3;
    FUN_1446f8d3c(param_1,param_2,uVar3,0x20,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1406f90ea FUN_1406f90ea body=202 status=ok
// SIG undefined FUN_1406f90ea(void)

void FUN_1406f90ea(longlong *param_1,undefined8 *param_2,longlong param_3)

{
  uint *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar1 = (uint *)*param_2;
  lVar2 = *(longlong *)(*(longlong *)(*param_1 + 0x60) + (longlong)(int)param_1[1] * 8);
  lVar3 = *(longlong *)(lVar2 + 0x20);
  lVar5 = 0;
  local_58 = lVar3 + (ulonglong)puVar1[1];
  if ((ulonglong)puVar1[1] == 0xffffffff) {
    local_58 = lVar5;
  }
  local_50 = lVar3 + (ulonglong)puVar1[2];
  if ((ulonglong)puVar1[2] == 0xffffffff) {
    local_50 = lVar5;
  }
  local_48 = lVar3 + (ulonglong)puVar1[3];
  if ((ulonglong)puVar1[3] == 0xffffffff) {
    local_48 = lVar5;
  }
  lVar4 = lVar3 + (ulonglong)*puVar1;
  if ((ulonglong)*puVar1 == 0xffffffff) {
    lVar4 = lVar5;
  }
  local_68 = lVar3 + (ulonglong)puVar1[4];
  if ((ulonglong)puVar1[4] == 0xffffffff) {
    local_68 = lVar5;
  }
  FUN_1406f91b6(param_3 + 8,lVar2,lVar4);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406f91b6 FUN_1406f91b6 body=213 status=ok
// SIG undefined FUN_1406f91b6(void)

void FUN_1406f91b6(longlong param_1,longlong param_2,longlong param_3,longlong *param_4,
                  longlong param_5)

{
  ushort uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  uVar1 = *(ushort *)(param_2 + 0xe);
  uVar5 = (ulonglong)uVar1;
  lVar2 = *param_4;
  if (lVar2 == 0) {
    lVar2 = param_4[1];
    if (lVar2 == 0) {
      lVar2 = param_4[2];
      if ((lVar2 != 0) && (uVar1 != 0)) {
        lVar6 = 0;
        do {
          FUN_1406f92dc(*(undefined8 *)(lVar2 + lVar6 * 2),*(undefined8 *)(param_3 + lVar6),
                        (float)*(double *)(param_5 + lVar6));
          lVar6 = lVar6 + 8;
        } while ((ulonglong)uVar1 * 8 != lVar6);
      }
    }
    else if (uVar5 != 0) {
      uVar4 = 0;
      do {
        uVar3 = (ulonglong)*(ushort *)(lVar2 + uVar4 * 2);
        if (uVar3 != 0) {
          *(float *)(*(longlong *)(param_3 + uVar4 * 8) + uVar3) =
               (float)*(double *)(param_5 + uVar4 * 8);
        }
        uVar4 = uVar4 + 1;
      } while (uVar5 != uVar4);
    }
  }
  else if (uVar5 != 0) {
    uVar4 = 0;
    do {
      (**(code **)(*(longlong *)(param_1 + 8) + 0x20 +
                  (longlong)*(int *)(param_1 + 0x14) * (ulonglong)*(ushort *)(lVar2 + uVar4 * 2)))
                (*(undefined8 *)(param_3 + uVar4 * 8),(float)*(double *)(param_5 + uVar4 * 8));
      uVar4 = uVar4 + 1;
    } while (uVar5 != uVar4);
  }
  return;
}



// FUNCTION 1406f9290 FUN_1406f9290 body=65 status=ok
// SIG undefined FUN_1406f9290(void)

void FUN_1406f9290(longlong param_1,float param_2)

{
  if ((((*(longlong *)(param_1 + 0xa8) != 0) &&
       ((*(byte *)(*(longlong *)(param_1 + 0xa8) + 100) & 0x20) != 0)) ||
      ((*(byte *)(param_1 + 0x9c) & 1) == 0)) || (*(char *)(param_1 + 0x1fb) != '\0')) {
    if ((*(float *)(param_1 + 0x2cc) != param_2) ||
       (NAN(*(float *)(param_1 + 0x2cc)) || NAN(param_2))) {
      *(float *)(param_1 + 0x2cc) = param_2;
      FUN_1406f9b24();
      return;
    }
  }
  return;
}



// FUNCTION 1406f92dc FUN_1406f92dc body=410 status=ok
// SIG undefined FUN_1406f92dc(void)

void FUN_1406f92dc(undefined8 param_1,longlong *param_2,undefined4 param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined4 *puVar4;
  undefined1 auStack_88 [40];
  undefined1 local_60 [24];
  longlong local_48;
  longlong local_38;
  uint local_30;
  int local_2c;
  uint local_28;
  int local_24;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_1c = param_3;
  FUN_1406f9c46(param_1,local_60,param_2);
  plVar2 = (longlong *)FUN_1406f9508(param_1,param_2);
  if (plVar2 != (longlong *)0x0) {
    cVar1 = (**(code **)(*plVar2 + 0x80))(plVar2);
    if (cVar1 != '\0') {
      (**(code **)(*plVar2 + 0x98))(plVar2,param_2,&local_1c);
      goto LAB_1406f93a3;
    }
  }
  if ((((local_2c == 0) || ((int)local_30 < 0)) || (DAT_14c9647dc <= (int)local_30)) ||
     (((plVar2 = (longlong *)
                 ((ulonglong)((local_30 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_30 >> 0x10) * 8)),
       plVar2 == (longlong *)0x0 || ((int)plVar2[2] != local_2c)) ||
      (((*(uint *)(plVar2 + 1) & 0x10200000) != 0 || (*plVar2 == 0)))))) {
    lVar3 = FUN_1406f977c(local_60);
    if ((lVar3 != 0) &&
       (puVar4 = (undefined4 *)(*(int *)(lVar3 + 0x44) + local_38), puVar4 != (undefined4 *)0x0)) {
      *puVar4 = local_1c;
    }
  }
  else {
    FUN_1406f998a(param_2,*plVar2,&local_1c);
  }
LAB_1406f93a3:
  if (((((local_24 != 0) && (-1 < (int)local_28)) && ((int)local_28 < DAT_14c9647dc)) &&
      ((plVar2 = (longlong *)
                 ((ulonglong)((local_28 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_28 >> 0x10) * 8)),
       plVar2 != (longlong *)0x0 && ((int)plVar2[2] == local_24)))) &&
     (((*(uint *)(plVar2 + 1) & 0x10200000) == 0 && (*plVar2 != 0)))) {
    (**(code **)(*param_2 + 0x248))(param_2,*plVar2,0);
  }
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406f9478 FUN_1406f9478 body=144 status=ok
// SIG undefined FUN_1406f9478(void)

void FUN_1406f9478(longlong param_1,float param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  if ((((*(longlong *)(param_1 + 0xa8) != 0) &&
       ((*(byte *)(*(longlong *)(param_1 + 0xa8) + 100) & 0x20) != 0)) ||
      ((*(byte *)(param_1 + 0x9c) & 1) == 0)) || (*(char *)(param_1 + 0x1fb) != '\0')) {
    if ((*(float *)(param_1 + 0x2e8) != param_2) ||
       (NAN(*(float *)(param_1 + 0x2e8)) || NAN(param_2))) {
      *(float *)(param_1 + 0x2e8) = param_2;
      lVar2 = *(longlong *)(param_1 + 0xb0);
      if (((lVar2 != 0) || (lVar2 = FUN_1448abda6(param_1), lVar2 != 0)) &&
         (plVar1 = *(longlong **)(lVar2 + 0x218), plVar1 != (longlong *)0x0)) {
        (**(code **)(*plVar1 + 0x248))(plVar1,param_1);
      }
      FUN_1406f9ba4(&DAT_14cad1680,param_1);
      return;
    }
  }
  return;
}



// FUNCTION 1406f9508 FUN_1406f9508 body=627 status=ok
// SIG undefined FUN_1406f9508(void)

longlong FUN_1406f9508(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [24];
  longlong local_90;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  longlong lStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (param_2 == 0) {
    uVar10 = 0;
    uVar2 = 0;
  }
  else {
    uVar10 = *(uint *)(param_2 + 0xc);
    if ((int)uVar10 < DAT_14c9647dc) {
      lVar11 = (ulonglong)((uVar10 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8);
    }
    else {
      lVar11 = 0;
    }
    uVar2 = *(uint *)(lVar11 + 0x10);
    if (*(uint *)(lVar11 + 0x10) == 0) {
      LOCK();
      iVar6 = DAT_14c964868 + 1;
      UNLOCK();
      uVar3 = DAT_14c964868 + 1;
      bVar12 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar6;
      if (bVar12) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar3);
      }
      LOCK();
      uVar2 = *(uint *)(lVar11 + 0x10);
      bVar12 = uVar2 == 0;
      if (bVar12) {
        *(uint *)(lVar11 + 0x10) = uVar3;
        uVar2 = 0;
      }
      UNLOCK();
      if (bVar12) {
        uVar2 = uVar3;
      }
    }
  }
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar3 = uVar2 >> 0xd ^ uVar10 - uVar2;
    uVar5 = uVar3 << 8 ^ (-0x61c88647 - uVar2) - uVar3;
    uVar8 = uVar5 >> 0xd ^ (uVar2 - uVar3) - uVar5;
    uVar9 = uVar8 >> 0xc ^ (uVar3 - uVar5) - uVar8;
    uVar3 = uVar9 << 0x10 ^ (uVar5 - uVar8) - uVar9;
    uVar5 = uVar3 >> 5 ^ (uVar8 - uVar9) - uVar3;
    uVar8 = uVar5 >> 3 ^ (uVar9 - uVar3) - uVar5;
    uVar3 = uVar8 << 10 ^ (uVar3 - uVar5) - uVar8;
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar6 = *(int *)((longlong)plVar4 +
                    (ulonglong)((int)param_1[9] - 1U & (uVar3 >> 0xf ^ uVar5 - (uVar8 + uVar3))) * 4
                    );
    if (iVar6 != -1) {
      lVar11 = *param_1;
      do {
        lVar7 = (longlong)iVar6 * 0x50;
        lVar1 = lVar11 + lVar7;
        if ((*(uint *)(lVar11 + lVar7) == uVar10) && (*(uint *)(lVar11 + 4 + lVar7) == uVar2)) {
          if (lVar1 != 0) {
            FUN_1406fa146(&local_78,lVar1 + 8);
            uStack_50 = *(undefined8 *)(lVar1 + 0x30);
            local_48 = *(undefined8 *)(lVar1 + 0x38);
            uStack_40 = *(undefined8 *)(lVar1 + 0x40);
            goto LAB_1406f967b;
          }
          break;
        }
        iVar6 = *(int *)(lVar1 + 0x48);
      } while (iVar6 != -1);
    }
  }
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  lStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
LAB_1406f967b:
  lVar11 = FUN_1406f977c(&local_78);
  if (lVar11 == 0) {
    FUN_1406fa5f4(local_a8,param_2,param_1 + 10);
    lVar11 = FUN_1406f977c(local_a8);
    if (local_90 != 0) {
      FUN_1400020a8();
    }
  }
  if (lStack_60 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar11;
}



// FUNCTION 1406f977c FUN_1406f977c body=525 status=ok
// SIG undefined FUN_1406f977c(void)

longlong FUN_1406f977c(uint *param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  longlong *plVar6;
  longlong lVar7;
  bool bVar8;
  
  if (((((param_1[1] == 0) || (uVar2 = *param_1, (int)uVar2 < 0)) || (DAT_14c9647dc <= (int)uVar2))
      || ((plVar6 = (longlong *)
                    ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
          plVar6 == (longlong *)0x0 || (*(uint *)(plVar6 + 2) != param_1[1])))) ||
     (((*(uint *)(plVar6 + 1) & 0x10200000) != 0 || (puVar1 = param_1 + 2, *plVar6 == 0)))) {
    param_1[2] = 0;
    param_1[3] = 0;
    return 0;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c951a88) && (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1)) {
    uVar4 = FUN_140342cba();
    FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0,0x8001,0,uVar4,FUN_1468c7f1e);
    atexit(FUN_14280c819);
    _Init_thread_footer(&DAT_14c951a88);
  }
  lVar3 = *(longlong *)puVar1;
  if ((((lVar3 == 0) || (param_1[5] == 0)) || (uVar2 = param_1[4], (int)uVar2 < 0)) ||
     (((DAT_14c9647dc <= (int)uVar2 ||
       (lVar7 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8), lVar7 == 0)) ||
      ((*(uint *)(lVar7 + 0x10) != param_1[5] || ((*(uint *)(lVar7 + 8) & 0x10200000) != 0)))))) {
    if (param_1[8] != 0) {
      lVar3 = FUN_14007daa4(puVar1,0,0);
      if (lVar3 == 0) {
LAB_1406f98ec:
        if (*(longlong *)puVar1 == 0) {
          return 0;
        }
        puVar1[0] = 0;
        puVar1[1] = 0;
        param_1[4] = 0;
        param_1[5] = 0;
        return 0;
      }
      puVar5 = *(undefined **)(lVar3 + 8);
      if (DAT_14c951a40 == 0) {
        bVar8 = puVar5 != (undefined *)0x0;
        if (puVar5 != &DAT_14c951a38 && bVar8) {
          do {
            puVar5 = *(undefined **)(puVar5 + 0x30);
            bVar8 = puVar5 != (undefined *)0x0;
            if (puVar5 == &DAT_14c951a38) break;
          } while (puVar5 != (undefined *)0x0);
        }
        if (!bVar8) goto LAB_1406f98ec;
      }
      else if ((*(ulonglong *)(puVar5 + 0x18) & DAT_14c951a40) == 0) goto LAB_1406f98ec;
      *(longlong *)puVar1 = lVar3;
    }
    if (lVar3 == 0) {
      return 0;
    }
  }
  if ((*(longlong *)(param_1 + 10) != 0) && ((*(ushort *)(lVar3 + 0x29) & 0x180) == 0)) {
    return lVar3;
  }
  return 0;
}



// FUNCTION 1406f998a FUN_1406f998a body=405 status=ok
// SIG undefined FUN_1406f998a(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1406f998a(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  byte bVar5;
  longlong lVar6;
  undefined1 *_Dst;
  ulonglong *puVar7;
  undefined1 *puVar8;
  longlong *plVar9;
  ulonglong local_48;
  
  puVar7 = &local_48;
  local_48 = DAT_14c707940 ^ (ulonglong)&local_48;
  uVar1 = *(ushort *)(param_2 + 0xb6);
  if ((*(short *)(param_2 + 0xb8) != -1) || (puVar8 = param_3, *(char *)(param_2 + 0xb4) != '\0')) {
    if (uVar1 == 0) {
      puVar8 = (undefined1 *)0x0;
      puVar7 = &local_48;
    }
    else {
      lVar6 = -(ulonglong)(uVar1 + 0x1e & 0xfffffff0);
      puVar8 = (undefined1 *)((longlong)&local_48 + lVar6);
      puVar7 = (ulonglong *)((longlong)&local_48 + lVar6);
    }
    plVar9 = *(longlong **)(param_2 + 0x70);
    if (plVar9 != (longlong *)0x0) {
      bVar5 = 1;
      do {
        iVar2 = *(int *)((longlong)plVar9 + 0x44);
        lVar6 = plVar9[6];
        iVar3 = *(int *)((longlong)plVar9 + 0x34);
        if (iVar3 * (int)lVar6 + iVar2 <= (int)(uint)uVar1) {
          if ((*(byte *)((longlong)plVar9 + 0x39) & 2) == 0) {
            pcVar4 = *(code **)(*plVar9 + 0x160);
            *(undefined8 *)((longlong)puVar7 + -0x28) = 0x1406f9b07;
            (*pcVar4)(plVar9,puVar8 + iVar2);
          }
          else {
            *(undefined8 *)((longlong)puVar7 + -0x28) = 0x1406f9a34;
            memset(puVar8 + iVar2,0,(longlong)iVar3 * (longlong)(int)lVar6);
          }
          if ((bool)(((uint)plVar9[7] & 0x480) == 0x80 & bVar5)) {
            if (*(int *)((longlong)plVar9 + 0x34) != 4) goto LAB_1406f9abd;
            _Dst = puVar8 + *(int *)((longlong)plVar9 + 0x44);
            if (_Dst != param_3) {
              lVar6 = plVar9[6];
              if (((uint)plVar9[7] >> 0x1e & 1) == 0) {
                pcVar4 = *(code **)(*plVar9 + 0x100);
                *(undefined8 *)((longlong)puVar7 + -0x28) = 0x1406f9b1f;
                (*pcVar4)(plVar9,_Dst,param_3);
              }
              else {
                *(undefined8 *)((longlong)puVar7 + -0x28) = 0x1406f9a8c;
                memcpy(_Dst,param_3,(longlong)(int)lVar6 << 2);
              }
            }
          }
          bVar5 = 0;
        }
        plVar9 = (longlong *)plVar9[9];
      } while (plVar9 != (longlong *)0x0);
    }
  }
  pcVar4 = *(code **)(*param_1 + 0x248);
  *(undefined8 *)((longlong)puVar7 + -0x28) = 0x1406f9ab9;
  (*pcVar4)(param_1,param_2,puVar8);
LAB_1406f9abd:
  if ((local_48 ^ (ulonglong)&local_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)((longlong)puVar7 + -0x28) = &UNK_1406f9ae7;
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1406f9b24 FUN_1406f9b24 body=127 status=ok
// SIG undefined FUN_1406f9b24(void)

void FUN_1406f9b24(longlong param_1)

{
  float fVar1;
  longlong *plVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0xb0);
  if (((lVar3 != 0) || (lVar3 = FUN_1448abda6(param_1), lVar3 != 0)) &&
     (plVar2 = *(longlong **)(lVar3 + 0x218), plVar2 != (longlong *)0x0)) {
    fVar1 = *(float *)(param_1 + 0x2cc);
    if ((*(byte *)(param_1 + 0x3f8) & 1) == 0) {
      if (fVar1 <= 0.0) goto LAB_1406f9b6e;
    }
    else if (0.0 < fVar1) {
      if (0.0 < fVar1) {
        (**(code **)(*plVar2 + 0x248))(plVar2,param_1);
      }
      goto LAB_1406f9b6e;
    }
    FUN_1448215fa(param_1);
  }
LAB_1406f9b6e:
  FUN_1406f9ba4(&DAT_14cad1680,param_1);
  return;
}



// FUNCTION 1406f9ba4 FUN_1406f9ba4 body=162 status=ok
// SIG undefined FUN_1406f9ba4(void)

void FUN_1406f9ba4(longlong *param_1,undefined8 param_2)

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
        goto LAB_1406f9c31;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_1406f9c31:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 1406f9c46 FUN_1406f9c46 body=1280 status=ok
// SIG undefined FUN_1406f9c46(void)

undefined8 * FUN_1406f9c46(longlong *param_1,undefined8 *param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  undefined *puVar8;
  uint uVar9;
  longlong *plVar10;
  longlong lVar11;
  uint uVar12;
  uint *puVar13;
  uint uVar14;
  bool bVar15;
  uint uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  
  if (param_3 == 0) {
    uVar14 = 0;
    uVar16 = 0;
  }
  else {
    uVar14 = *(uint *)(param_3 + 0xc);
    if ((int)uVar14 < DAT_14c9647dc) {
      lVar11 = (ulonglong)((uVar14 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0x10) * 8);
    }
    else {
      lVar11 = 0;
    }
    uVar16 = *(uint *)(lVar11 + 0x10);
    if (*(uint *)(lVar11 + 0x10) == 0) {
      LOCK();
      iVar6 = DAT_14c964868 + 1;
      UNLOCK();
      uVar3 = DAT_14c964868 + 1;
      bVar15 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar6;
      if (bVar15) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar3);
      }
      LOCK();
      uVar16 = *(uint *)(lVar11 + 0x10);
      bVar15 = uVar16 == 0;
      if (bVar15) {
        *(uint *)(lVar11 + 0x10) = uVar3;
        uVar16 = 0;
      }
      UNLOCK();
      if (bVar15) {
        uVar16 = uVar3;
      }
    }
  }
  uVar3 = uVar16 >> 0xd ^ uVar14 - uVar16;
  uVar5 = uVar3 << 8 ^ (-0x61c88647 - uVar16) - uVar3;
  uVar9 = uVar5 >> 0xd ^ (uVar16 - uVar3) - uVar5;
  uVar12 = uVar9 >> 0xc ^ (uVar3 - uVar5) - uVar9;
  uVar3 = uVar12 << 0x10 ^ (uVar5 - uVar9) - uVar12;
  uVar5 = uVar3 >> 5 ^ (uVar9 - uVar12) - uVar3;
  uVar9 = uVar5 >> 3 ^ (uVar12 - uVar3) - uVar5;
  uVar3 = uVar9 << 10 ^ (uVar3 - uVar5) - uVar9;
  uVar3 = uVar3 >> 0xf ^ uVar5 - (uVar9 + uVar3);
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar10 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar10 = (longlong *)param_1[8];
    }
    iVar6 = *(int *)((longlong)plVar10 + (ulonglong)((int)param_1[9] - 1U & uVar3) * 4);
    if (iVar6 != -1) {
      lVar11 = *param_1;
      do {
        lVar7 = (longlong)iVar6 * 0x50;
        lVar2 = lVar11 + lVar7;
        if ((*(uint *)(lVar11 + lVar7) == uVar14) && (*(uint *)(lVar11 + 4 + lVar7) == uVar16)) {
          if ((lVar2 == 0) || (puVar13 = (uint *)(lVar2 + 8), puVar13 == (uint *)0x0)) break;
          if ((((*(int *)(lVar2 + 0x3c) != 0) && (uVar5 = *(uint *)(lVar2 + 0x38), -1 < (int)uVar5))
              && ((int)uVar5 < DAT_14c9647dc)) &&
             (((lVar11 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8), lVar11 != 0
               && (*(int *)(lVar11 + 0x10) == *(int *)(lVar2 + 0x3c))) &&
              ((*(uint *)(lVar11 + 8) & 0x10200000) == 0)))) goto LAB_1406f9dc9;
          if (((*(int *)(lVar2 + 0xc) == 0) || (uVar5 = *puVar13, (int)uVar5 < 0)) ||
             ((DAT_14c9647dc <= (int)uVar5 ||
              ((((plVar10 = (longlong *)
                            ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8)),
                 plVar10 == (longlong *)0x0 || ((int)plVar10[2] != *(int *)(lVar2 + 0xc))) ||
                ((*(uint *)(plVar10 + 1) & 0x10200000) != 0)) ||
               (plVar1 = (longlong *)(lVar2 + 0x10), *plVar10 == 0)))))) {
            *(undefined8 *)(lVar2 + 0x10) = 0;
            break;
          }
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14c951a88) && (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1)) {
            uVar4 = FUN_140342cba();
            FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0,0x8001,0,uVar4,FUN_1468c7f1e);
            atexit(FUN_14280c819);
            _Init_thread_footer(&DAT_14c951a88);
          }
          if (*plVar1 == 0) {
            if (*(int *)(lVar2 + 0x28) == 0) break;
          }
          else if ((((*(int *)(lVar2 + 0x1c) != 0) &&
                    (uVar5 = *(uint *)(lVar2 + 0x18), -1 < (int)uVar5)) &&
                   (((int)uVar5 < DAT_14c9647dc &&
                    (((lVar11 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
                                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8),
                      lVar11 != 0 && (*(int *)(lVar11 + 0x10) == *(int *)(lVar2 + 0x1c))) &&
                     ((*(uint *)(lVar11 + 8) & 0x10200000) == 0)))))) ||
                  (*(int *)(lVar2 + 0x28) == 0)) goto LAB_1406f9dc9;
          lVar11 = FUN_14007daa4(plVar1,0,0);
          if (lVar11 == 0) goto LAB_1406f9f54;
          puVar8 = *(undefined **)(lVar11 + 8);
          if (DAT_14c951a40 != 0) {
            if ((*(ulonglong *)(puVar8 + 0x18) & DAT_14c951a40) != 0) goto LAB_1406f9f0f;
            goto LAB_1406f9f54;
          }
          bVar15 = puVar8 != (undefined *)0x0;
          if (puVar8 != &DAT_14c951a38 && bVar15) goto LAB_1406f9f3a;
          goto LAB_1406f9f4f;
        }
        iVar6 = *(int *)(lVar2 + 0x48);
      } while (iVar6 != -1);
    }
  }
  goto LAB_1406f9f6a;
  while (puVar8 != (undefined *)0x0) {
LAB_1406f9f3a:
    puVar8 = *(undefined **)(puVar8 + 0x30);
    bVar15 = puVar8 != (undefined *)0x0;
    if (puVar8 == &DAT_14c951a38) break;
  }
LAB_1406f9f4f:
  if (bVar15) {
LAB_1406f9f0f:
    *plVar1 = lVar11;
LAB_1406f9dc9:
    FUN_1406fa146(param_2,puVar13);
    param_2[5] = *(undefined8 *)(lVar2 + 0x30);
    uVar16 = *(uint *)(lVar2 + 0x38);
    uVar17 = *(undefined4 *)(lVar2 + 0x3c);
    uVar18 = *(undefined4 *)(lVar2 + 0x40);
    uVar19 = *(undefined4 *)(lVar2 + 0x44);
LAB_1406f9ddf:
    *(uint *)(param_2 + 6) = uVar16;
    *(undefined4 *)((longlong)param_2 + 0x34) = uVar17;
    *(undefined4 *)(param_2 + 7) = uVar18;
    *(undefined4 *)((longlong)param_2 + 0x3c) = uVar19;
    return param_2;
  }
LAB_1406f9f54:
  if (*plVar1 != 0) {
    *plVar1 = 0;
    *(undefined8 *)(lVar2 + 0x18) = 0;
  }
LAB_1406f9f6a:
  FUN_1406fa37c(param_1,param_3);
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar10 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar10 = (longlong *)param_1[8];
    }
    iVar6 = *(int *)((longlong)plVar10 + (ulonglong)((int)param_1[9] - 1U & uVar3) * 4);
    if (iVar6 != -1) {
      lVar11 = *param_1;
      do {
        lVar7 = (longlong)iVar6 * 0x50;
        lVar2 = lVar11 + lVar7;
        if ((*(uint *)(lVar11 + lVar7) == uVar14) && (*(uint *)(lVar11 + 4 + lVar7) == uVar16)) {
          if (lVar2 != 0) {
            FUN_1406fa146(param_2,lVar2 + 8);
            param_2[5] = *(undefined8 *)(lVar2 + 0x30);
            uVar16 = *(uint *)(lVar2 + 0x38);
            uVar17 = *(undefined4 *)(lVar2 + 0x3c);
            uVar18 = *(undefined4 *)(lVar2 + 0x40);
            uVar19 = *(undefined4 *)(lVar2 + 0x44);
            goto LAB_1406f9ddf;
          }
          break;
        }
        iVar6 = *(int *)(lVar2 + 0x48);
      } while (iVar6 != -1);
    }
  }
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 1406fa146 FUN_1406fa146 body=477 status=ok
// SIG undefined FUN_1406fa146(void)

undefined8 * FUN_1406fa146(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined *puVar5;
  longlong lVar6;
  bool bVar7;
  
  *param_1 = *param_2;
  plVar1 = param_2 + 1;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951a88) {
    FUN_144b3d300(&DAT_14c951a88);
    if (DAT_14c951a88 == -1) {
      uVar3 = FUN_140342cba();
      FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0,0x8001,0,uVar3,FUN_1468c7f1e);
      atexit(FUN_14280c819);
      _Init_thread_footer(&DAT_14c951a88);
    }
  }
  lVar4 = *plVar1;
  if (lVar4 == 0) {
    if (*(int *)(param_2 + 4) != 0) goto LAB_1406fa2a6;
  }
  else {
    if (*(int *)((longlong)param_2 + 0x14) == 0) {
LAB_1406fa228:
      bVar7 = false;
    }
    else {
      uVar2 = *(uint *)(param_2 + 2);
      bVar7 = false;
      if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
        lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
        if ((lVar6 == 0) || (*(int *)(lVar6 + 0x10) != *(int *)((longlong)param_2 + 0x14)))
        goto LAB_1406fa228;
        bVar7 = (*(uint *)(lVar6 + 8) & 0x10200000) == 0;
      }
    }
    if ((bVar7) || (*(int *)(param_2 + 4) == 0)) goto LAB_1406fa1f3;
LAB_1406fa2a6:
    lVar4 = FUN_14007daa4(plVar1,0,0);
    if (lVar4 != 0) {
      puVar5 = *(undefined **)(lVar4 + 8);
      if (DAT_14c951a40 == 0) {
        bVar7 = puVar5 != (undefined *)0x0;
        if (puVar5 != &DAT_14c951a38 && bVar7) {
          do {
            puVar5 = *(undefined **)(puVar5 + 0x30);
            bVar7 = puVar5 != (undefined *)0x0;
            if (puVar5 == &DAT_14c951a38) break;
          } while (puVar5 != (undefined *)0x0);
        }
        if (!bVar7) goto LAB_1406fa30e;
      }
      else if ((*(ulonglong *)(puVar5 + 0x18) & DAT_14c951a40) == 0) goto LAB_1406fa30e;
      *plVar1 = lVar4;
      goto LAB_1406fa1f3;
    }
LAB_1406fa30e:
    if (*plVar1 != 0) {
      *plVar1 = 0;
      param_2[2] = 0;
    }
  }
  lVar4 = 0;
LAB_1406fa1f3:
  param_1[1] = lVar4;
  param_1[2] = param_2[2];
  FUN_1406fa324(param_1 + 3,param_2 + 3);
  return param_1;
}



// FUNCTION 1406fa324 FUN_1406fa324 body=88 status=ok
// SIG undefined FUN_1406fa324(void)

undefined8 * FUN_1406fa324(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1401b309e(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 1406fa37c FUN_1406fa37c body=631 status=ok
// SIG undefined FUN_1406fa37c(void)

void FUN_1406fa37c(longlong param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  bool bVar5;
  undefined1 auStack_e8 [40];
  undefined8 local_c0;
  undefined8 *local_b8;
  undefined8 *local_b0;
  longlong local_a0;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  longlong lStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 auStack_50 [2];
  undefined1 local_3c [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_58 = 0;
  auStack_50[0] = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  lStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  FUN_1406fa5f4(&local_b8,param_2,param_1 + 0x50);
  FUN_1406fa6b6(&local_88,&local_b8);
  uStack_60 = local_90;
  if (local_a0 != 0) {
    FUN_1400020a8();
  }
  lVar3 = FUN_1400796d0(*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_1 + 0x60),1);
  if ((lVar3 != 0) && (*(char *)(lVar3 + 0xb4) != '\0')) {
    uVar1 = *(uint *)(lVar3 + 0xc);
    local_58 = CONCAT44(local_58._4_4_,uVar1);
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
    local_58 = CONCAT44(iVar2,(undefined4)local_58);
  }
  if ((((*(longlong *)(param_1 + 0x68) != 0) &&
       (lVar3 = FUN_1400796d0(*(undefined8 *)(param_2 + 0x10),*(longlong *)(param_1 + 0x68),1),
       lVar3 != 0)) && (*(char *)(lVar3 + 0xb4) == '\0')) && (*(short *)(lVar3 + 0xb8) == -1)) {
    FUN_14485c47a(auStack_50,lVar3);
  }
  local_c0 = 0;
  if (param_2 != 0) {
    uVar1 = *(uint *)(param_2 + 0xc);
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
    local_c0 = CONCAT44(iVar2,uVar1);
  }
  local_b8 = &local_c0;
  local_b0 = &local_88;
  FUN_1406fb316(param_1,local_3c,&local_b8,0);
  if (lStack_70 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1406fa5f4 FUN_1406fa5f4 body=192 status=ok
// SIG undefined FUN_1406fa5f4(void)

undefined8 * FUN_1406fa5f4(undefined8 *param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_78 [32];
  undefined4 local_58;
  longlong local_48;
  ulonglong uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1403de9f2(param_3,&local_48,&DAT_149e0635c,1);
  if (((param_2 == 0) || ((*(uint *)(param_2 + 8) >> 0x1e & 1) != 0)) || ((int)uStack_40 < 1)) {
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    local_58 = 0;
    FUN_1406fa91a(param_1,param_2,*(undefined8 *)(param_2 + 0x10),&local_48);
  }
  FUN_1447a1747(local_48,uStack_40 & 0xffffffff);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406fa6b6 FUN_1406fa6b6 body=452 status=ok
// SIG undefined FUN_1406fa6b6(void)

undefined8 * FUN_1406fa6b6(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined *puVar5;
  longlong lVar6;
  bool bVar7;
  
  *param_1 = *param_2;
  plVar1 = param_2 + 1;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951a88) {
    FUN_144b3d300(&DAT_14c951a88);
    if (DAT_14c951a88 == -1) {
      uVar3 = FUN_140342cba();
      FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0,0x8001,0,uVar3,FUN_1468c7f1e);
      atexit(FUN_14280c819);
      _Init_thread_footer(&DAT_14c951a88);
    }
  }
  lVar4 = *plVar1;
  if (lVar4 == 0) {
    if (*(int *)(param_2 + 4) != 0) goto LAB_1406fa7ff;
  }
  else {
    if (*(int *)((longlong)param_2 + 0x14) == 0) {
LAB_1406fa77b:
      bVar7 = false;
    }
    else {
      uVar2 = *(uint *)(param_2 + 2);
      bVar7 = false;
      if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
        lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
        if ((lVar6 == 0) || (*(int *)(lVar6 + 0x10) != *(int *)((longlong)param_2 + 0x14)))
        goto LAB_1406fa77b;
        bVar7 = (*(uint *)(lVar6 + 8) & 0x10200000) == 0;
      }
    }
    if ((bVar7) || (*(int *)(param_2 + 4) == 0)) goto LAB_1406fa754;
LAB_1406fa7ff:
    lVar4 = FUN_14007daa4(plVar1,0,0);
    if (lVar4 != 0) {
      puVar5 = *(undefined **)(lVar4 + 8);
      if (DAT_14c951a40 == 0) {
        bVar7 = puVar5 != (undefined *)0x0;
        if (puVar5 != &DAT_14c951a38 && bVar7) {
          do {
            puVar5 = *(undefined **)(puVar5 + 0x30);
            bVar7 = puVar5 != (undefined *)0x0;
            if (puVar5 == &DAT_14c951a38) break;
          } while (puVar5 != (undefined *)0x0);
        }
        if (!bVar7) goto LAB_1406fa867;
      }
      else if ((*(ulonglong *)(puVar5 + 0x18) & DAT_14c951a40) == 0) goto LAB_1406fa867;
      *plVar1 = lVar4;
      goto LAB_1406fa754;
    }
LAB_1406fa867:
    if (*plVar1 != 0) {
      *plVar1 = 0;
      param_2[2] = 0;
    }
  }
  lVar4 = 0;
LAB_1406fa754:
  param_1[1] = lVar4;
  param_1[2] = param_2[2];
  FUN_1406fa324(param_1 + 3,param_2 + 3);
  return param_1;
}



// FUNCTION 1406fa87a FUN_1406fa87a body=160 status=ok
// SIG undefined FUN_1406fa87a(void)

void FUN_1406fa87a(longlong param_1,float param_2)

{
  byte bVar1;
  longlong lVar2;
  
  if ((((*(longlong *)(param_1 + 0xa8) != 0) &&
       ((*(byte *)(*(longlong *)(param_1 + 0xa8) + 100) & 0x20) != 0)) ||
      ((*(byte *)(param_1 + 0x9c) & 1) == 0)) || (*(char *)(param_1 + 0x1fb) != '\0')) {
    if (((*(float *)(param_1 + 0x458) != param_2) ||
        (NAN(*(float *)(param_1 + 0x458)) || NAN(param_2))) &&
       (*(float *)(param_1 + 0x458) = param_2, (~*(byte *)(param_1 + 0x9c) & 3) == 0)) {
      bVar1 = *(byte *)(param_1 + 0x9d);
      if ((bVar1 & 1) == 0) {
LAB_1406fa8f6:
        *(byte *)(param_1 + 0x9d) = bVar1 | 1;
        FUN_1401057d4(param_1);
        FUN_14010586c(&DAT_14cad0140,param_1);
        return;
      }
      if (*(longlong *)(param_1 + 0xb0) == 0) {
        lVar2 = FUN_1448abda6(param_1);
        if (lVar2 == 0) {
          bVar1 = *(byte *)(param_1 + 0x9d);
          goto LAB_1406fa8f6;
        }
      }
    }
  }
  return;
}



// FUNCTION 1406fa91a FUN_1406fa91a body=2555 status=ok
// SIG undefined FUN_1406fa91a(void)

longlong FUN_1406fa91a(longlong param_1,longlong param_2,undefined8 param_3,longlong *param_4,
                      int param_5)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  undefined2 *puVar4;
  int iVar5;
  ulonglong *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  bool bVar13;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined8 local_c0;
  undefined *local_b8;
  code *local_b0;
  byte local_99;
  longlong local_98;
  longlong local_90;
  undefined8 local_88;
  longlong alStack_80 [6];
  uint local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (*(int *)(*param_4 + 8 + (longlong)param_5 * 0x10) == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  else {
    puVar4 = *(undefined2 **)(*param_4 + (longlong)param_5 * 0x10);
  }
  FUN_140056680(&local_88,puVar4);
  FUN_140dbd1a1(alStack_80 + 5,param_3,&local_88);
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  uVar1 = local_50;
  alStack_80[3] = 0;
  alStack_80[4] = 0;
  alStack_80[1] = 0;
  alStack_80[2] = 0;
  local_88 = 0;
  alStack_80[0] = 0;
  uVar7 = (ulonglong)local_50;
  if (uVar7 == 0xffffffff) {
    if (alStack_80[5] != 0) {
      puVar3 = *(undefined **)(alStack_80[5] + 8);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c952a58) && (FUN_144b3d300(&DAT_14c952a58), DAT_14c952a58 == -1))
      {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c951a88) &&
           (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1)) {
          local_b8 = (undefined *)FUN_140342cba();
          local_b0 = FUN_1468c7f1e;
          local_c0 = 0;
          local_c8 = 0x8001;
          FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0);
          atexit(FUN_14280c819);
          _Init_thread_footer(&DAT_14c951a88);
        }
        local_b0 = FUN_1403a682c;
        local_b8 = &DAT_14c951a38;
        local_c0 = 0;
        local_c8 = 0x108001;
        FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
        atexit(FUN_142818c9e);
        _Init_thread_footer(&DAT_14c952a58);
      }
      if (DAT_14c952a10 == 0) {
        bVar13 = puVar3 != (undefined *)0x0;
        if (puVar3 != &DAT_14c952a08 && bVar13) {
          do {
            puVar3 = *(undefined **)(puVar3 + 0x30);
            bVar13 = puVar3 != (undefined *)0x0;
            if (puVar3 == &DAT_14c952a08) break;
          } while (puVar3 != (undefined *)0x0);
        }
        if (!bVar13) goto LAB_1406fab95;
      }
      else if ((*(ulonglong *)(puVar3 + 0x18) & DAT_14c952a10) == 0) {
LAB_1406fab95:
        for (uVar7 = *(ulonglong *)(alStack_80[5] + 0x10); (uVar7 & 1) == 0;
            uVar7 = *(ulonglong *)(uVar7 + 0x10)) {
          if (uVar7 < 2) goto LAB_1406fad05;
        }
        uVar7 = uVar7 & 0xfffffffffffffffe;
        if (uVar7 == 0) {
LAB_1406fad05:
          local_88 = 0;
          iVar2 = 0;
        }
        else {
          if (DAT_14c950c29 != '\0') {
            FUN_1456cec3c(uVar7);
          }
          uVar1 = *(uint *)(uVar7 + 0xc);
          local_88 = CONCAT44(local_88._4_4_,uVar1);
          if ((int)uVar1 < DAT_14c9647dc) {
            lVar11 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
          }
          else {
            lVar11 = 0;
          }
          iVar2 = *(int *)(lVar11 + 0x10);
          if (*(int *)(lVar11 + 0x10) == 0) {
            LOCK();
            iVar2 = DAT_14c964868 + 1;
            UNLOCK();
            iVar5 = DAT_14c964868 + 1;
            bVar13 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar2;
            if (bVar13) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,iVar5);
            }
            LOCK();
            iVar2 = *(int *)(lVar11 + 0x10);
            bVar13 = iVar2 == 0;
            if (bVar13) {
              *(int *)(lVar11 + 0x10) = iVar5;
              iVar2 = 0;
            }
            UNLOCK();
            if (bVar13) {
              iVar2 = iVar5;
            }
          }
        }
        local_88 = CONCAT44(iVar2,(undefined4)local_88);
        alStack_80[0] = alStack_80[5];
        FUN_1449651a4(alStack_80,alStack_80[5]);
        alStack_80[4] = param_2;
        goto LAB_1406fae90;
      }
      for (uVar7 = *(ulonglong *)(alStack_80[5] + 0x10); (uVar7 & 1) == 0;
          uVar7 = *(ulonglong *)(uVar7 + 0x10)) {
        if (uVar7 < 2) goto LAB_1406fac39;
      }
      uVar7 = uVar7 & 0xfffffffffffffffe;
      if (uVar7 == 0) {
LAB_1406fac39:
        local_88 = 0;
        iVar2 = 0;
      }
      else {
        if (DAT_14c950c29 != '\0') {
          FUN_1456cec3c(uVar7);
        }
        uVar1 = *(uint *)(uVar7 + 0xc);
        local_88 = CONCAT44(local_88._4_4_,uVar1);
        if ((int)uVar1 < DAT_14c9647dc) {
          lVar11 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
        }
        else {
          lVar11 = 0;
        }
        iVar2 = *(int *)(lVar11 + 0x10);
        if (*(int *)(lVar11 + 0x10) == 0) {
          LOCK();
          iVar2 = DAT_14c964868 + 1;
          UNLOCK();
          iVar5 = DAT_14c964868 + 1;
          bVar13 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar2;
          if (bVar13) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar5);
          }
          LOCK();
          iVar2 = *(int *)(lVar11 + 0x10);
          bVar13 = iVar2 == 0;
          if (bVar13) {
            *(int *)(lVar11 + 0x10) = iVar5;
            iVar2 = 0;
          }
          UNLOCK();
          if (bVar13) {
            iVar2 = iVar5;
          }
        }
      }
      local_88 = CONCAT44(iVar2,(undefined4)local_88);
      alStack_80[0] = alStack_80[5];
      FUN_1449651a4(alStack_80,alStack_80[5]);
      param_5 = param_5 + 1;
      alStack_80[4] = param_2;
      if ((-1 < param_5) && (param_5 < (int)param_4[1])) {
        lVar11 = param_2 + *(int *)(alStack_80[5] + 0x44);
        uVar9 = *(undefined8 *)(alStack_80[5] + 0x70);
        local_c8 = CONCAT44(local_c8._4_4_,param_5);
LAB_1406fac88:
        FUN_1406fa91a(param_1,lVar11,uVar9,param_4);
        goto LAB_1406faea8;
      }
    }
  }
  else if (alStack_80[5] != 0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c951ae0) && (FUN_144b3d300(&DAT_14c951ae0), DAT_14c951ae0 == -1)) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c951a88) && (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1))
      {
        local_b8 = (undefined *)FUN_140342cba();
        local_b0 = FUN_1468c7f1e;
        local_c0 = 0;
        local_c8 = 0x8001;
        FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0);
        atexit(FUN_14280c819);
        _Init_thread_footer(&DAT_14c951a88);
      }
      local_b0 = FUN_140b31576;
      local_b8 = &DAT_14c951a38;
      local_c0 = 0;
      local_c8 = 0x208001;
      FUN_14000176a(&DAT_14c951a90,L"FArrayProperty",0x200000,0);
      atexit(FUN_14280cbf7);
      _Init_thread_footer(&DAT_14c951ae0);
    }
    puVar3 = *(undefined **)(alStack_80[5] + 8);
    if (DAT_14c951a98 == 0) {
      bVar13 = puVar3 != (undefined *)0x0;
      if (puVar3 != &DAT_14c951a90 && bVar13) {
        do {
          puVar3 = *(undefined **)(puVar3 + 0x30);
          bVar13 = puVar3 != (undefined *)0x0;
          if (puVar3 == &DAT_14c951a90) break;
        } while (puVar3 != (undefined *)0x0);
      }
      if (bVar13) {
LAB_1406faad6:
        iVar2 = *(int *)(alStack_80[5] + 0x44);
        local_99 = *(byte *)(alStack_80[5] + 0x70);
        (**(code **)(**(longlong **)(alStack_80[5] + 0x78) + 0x178))();
        if ((-1 < (int)uVar1) &&
           (puVar6 = (ulonglong *)(param_2 + iVar2), (int)uVar1 < (int)puVar6[1])) {
          lVar11 = *(longlong *)(alStack_80[5] + 0x78);
          lVar10 = (longlong)*(int *)(lVar11 + 0x34);
          if (lVar11 != 0) {
            puVar3 = *(undefined **)(lVar11 + 8);
            local_90 = lVar10;
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110
                         ) < DAT_14c952a58) &&
               (local_98 = lVar11, FUN_144b3d300(&DAT_14c952a58), lVar11 = local_98,
               DAT_14c952a58 == -1)) {
              if ((*(int *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x110) < DAT_14c951a88) &&
                 (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1)) {
                local_b8 = (undefined *)FUN_140342cba();
                local_b0 = FUN_1468c7f1e;
                local_c0 = 0;
                local_c8 = 0x8001;
                FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0);
                atexit(FUN_14280c819);
                _Init_thread_footer(&DAT_14c951a88);
              }
              local_b0 = FUN_1403a682c;
              local_b8 = &DAT_14c951a38;
              local_c0 = 0;
              local_c8 = 0x108001;
              FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
              atexit(FUN_142818c9e);
              _Init_thread_footer(&DAT_14c952a58);
              lVar11 = local_98;
            }
            if (DAT_14c952a10 == 0) {
              bVar13 = puVar3 != (undefined *)0x0;
              if (puVar3 != &DAT_14c952a08 && bVar13) {
                do {
                  puVar3 = *(undefined **)(puVar3 + 0x30);
                  bVar13 = puVar3 != (undefined *)0x0;
                  if (puVar3 == &DAT_14c952a08) break;
                } while (puVar3 != (undefined *)0x0);
              }
              bVar13 = !bVar13;
            }
            else {
              bVar13 = (*(ulonglong *)(puVar3 + 0x18) & DAT_14c952a10) == 0;
            }
            lVar10 = local_90;
            if (((!bVar13) && (param_5 = param_5 + 1, -1 < param_5)) && (param_5 < (int)param_4[1]))
            {
              uVar9 = *(undefined8 *)(lVar11 + 0x70);
              if ((int)puVar6[1] == 0) {
                lVar11 = 0;
              }
              else {
                if ((local_99 & 1) == 0) {
                  uVar8 = *puVar6;
                }
                else {
                  uVar8 = *puVar6;
                  if ((uVar8 & 1) != 0) {
                    uVar8 = (longlong)puVar6 + ((longlong)uVar8 >> 0x18);
                  }
                }
                lVar11 = local_90 * uVar7 + uVar8;
              }
              local_c8 = CONCAT44(local_c8._4_4_,param_5);
              goto LAB_1406fac88;
            }
          }
          lVar11 = *(longlong *)(alStack_80[5] + 0x78);
          if (lVar11 == 0) {
LAB_1406fae31:
            local_88 = 0;
            iVar2 = 0;
          }
          else {
            for (uVar7 = *(ulonglong *)(lVar11 + 0x10); (uVar7 & 1) == 0;
                uVar7 = *(ulonglong *)(uVar7 + 0x10)) {
              if (uVar7 < 2) goto LAB_1406fae31;
            }
            uVar7 = uVar7 & 0xfffffffffffffffe;
            if (uVar7 == 0) goto LAB_1406fae31;
            if (DAT_14c950c29 != '\0') {
              FUN_1456cec3c(uVar7);
            }
            uVar1 = *(uint *)(uVar7 + 0xc);
            local_88 = CONCAT44(local_88._4_4_,uVar1);
            if ((int)uVar1 < DAT_14c9647dc) {
              lVar12 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
            }
            else {
              lVar12 = 0;
            }
            iVar2 = *(int *)(lVar12 + 0x10);
            if (*(int *)(lVar12 + 0x10) == 0) {
              LOCK();
              iVar2 = DAT_14c964868 + 1;
              UNLOCK();
              iVar5 = DAT_14c964868 + 1;
              bVar13 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar2;
              if (bVar13) {
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,iVar5);
              }
              LOCK();
              iVar2 = *(int *)(lVar12 + 0x10);
              bVar13 = iVar2 == 0;
              if (bVar13) {
                *(int *)(lVar12 + 0x10) = iVar5;
                iVar2 = 0;
              }
              UNLOCK();
              if (bVar13) {
                iVar2 = iVar5;
              }
            }
          }
          local_88 = CONCAT44(iVar2,(undefined4)local_88);
          alStack_80[0] = lVar11;
          FUN_1449651a4(alStack_80,lVar11);
          if ((int)puVar6[1] == 0) {
            alStack_80[4] = 0;
          }
          else {
            if ((local_99 & 1) == 0) {
              uVar7 = *puVar6;
            }
            else {
              uVar7 = *puVar6;
              if ((uVar7 & 1) != 0) {
                uVar7 = (longlong)puVar6 + ((longlong)uVar7 >> 0x18);
              }
            }
            alStack_80[4] = uVar7 + (int)local_50 * lVar10;
          }
        }
      }
    }
    else if ((*(ulonglong *)(puVar3 + 0x18) & DAT_14c951a98) != 0) goto LAB_1406faad6;
  }
LAB_1406fae90:
  FUN_1406fa146(param_1,&local_88);
  *(longlong *)(param_1 + 0x28) = alStack_80[4];
LAB_1406faea8:
  if (alStack_80[2] != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406fb316 FUN_1406fb316 body=1836 status=ok
// SIG undefined FUN_1406fb316(void)

int * FUN_1406fb316(longlong *param_1,int *param_2,undefined8 *param_3,char *param_4)

{
  void *_Src;
  void *_Dst;
  uint *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  byte bVar8;
  int iVar9;
  uint *puVar10;
  char cVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  longlong *plVar16;
  longlong *plVar17;
  longlong lVar18;
  ulonglong uVar19;
  int iVar20;
  ulonglong uVar21;
  int iVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  longlong lVar26;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar20 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar20 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar20) {
      FUN_1406fba42(param_1,iVar20);
    }
    iVar22 = (int)param_1[5];
    if (iVar22 == 0) {
      iVar5 = -1;
    }
    else {
      iVar5 = iVar22 + 0x1e;
      if (-1 < iVar22 + -1) {
        iVar5 = iVar22 + -1;
      }
      iVar5 = iVar5 >> 5;
    }
    plVar16 = param_1 + 2;
    iVar9 = iVar22 + 1;
    iVar14 = iVar22 + 0x1f;
    if (-1 < iVar22) {
      iVar14 = iVar22;
    }
    if (iVar14 >> 5 == iVar5) {
      *(int *)(param_1 + 5) = iVar9;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar22) {
        if (iVar22 + 0x20U < 0xa0) {
          iVar9 = 0x80;
          iVar5 = iVar22;
        }
        else {
          uVar13 = iVar22 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar12 = 4;
            if (4 < uVar13) {
              uVar12 = uVar13;
            }
          }
          else {
            uVar12 = (uVar13 * 3 >> 3) + uVar13 + 0x10;
          }
          uVar7 = FUN_144a3809e(uVar12 << 2,0);
          iVar5 = (int)(uVar7 >> 2);
          iVar9 = -0x20;
          if ((int)uVar13 <= iVar5) {
            iVar9 = iVar5 << 5;
          }
          iVar5 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar9;
        FUN_1446efbd8(plVar16,iVar5);
        iVar9 = (int)param_1[5] + 1;
      }
      iVar5 = iVar9 + 0x1f;
      if (-1 < iVar9) {
        iVar5 = iVar9;
      }
      *(int *)(param_1 + 5) = iVar9;
      if (iVar9 % 0x20 != 0) {
        plVar17 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar17 = plVar16;
        }
        bVar8 = -(char)(iVar9 % 0x20);
        *(uint *)((longlong)plVar17 + (longlong)(iVar5 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar17 + (longlong)(iVar5 >> 5) * 4) << (bVar8 & 0x1f)) >>
             (bVar8 & 0x1f);
      }
    }
    lVar6 = (longlong)iVar20;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar16 = (longlong *)param_1[4];
    }
    bVar8 = (byte)iVar22 & 0x1f;
    puVar1 = (uint *)((longlong)plVar16 + (longlong)(iVar14 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar8 | 0xfffffffeU >> 0x20 - bVar8);
  }
  else {
    iVar20 = (int)param_1[6];
    lVar6 = (longlong)iVar20;
    iVar22 = *(int *)(*param_1 + 4 + lVar6 * 0x50);
    *(int *)(param_1 + 6) = iVar22;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar22 * 0x50) = 0xffffffff;
    }
  }
  puVar1 = (uint *)(param_1 + 2);
  puVar10 = (uint *)param_1[4];
  if ((uint *)param_1[4] == (uint *)0x0) {
    puVar10 = puVar1;
  }
  iVar22 = iVar20 + 0x1f;
  if (-1 < iVar20) {
    iVar22 = iVar20;
  }
  puVar10[iVar22 >> 5] = puVar10[iVar22 >> 5] | 1 << ((byte)iVar20 & 0x1f);
  _Src = (void *)(*param_1 + lVar6 * 0x50);
  lVar26 = param_3[1];
  lVar6 = *param_1 + 8 + lVar6 * 0x50;
  *(undefined8 *)(lVar6 + -8) = *(undefined8 *)*param_3;
  FUN_1406fa146(lVar6,lVar26);
  *(undefined8 *)(lVar6 + 0x28) = *(undefined8 *)(lVar26 + 0x28);
  uVar2 = *(undefined4 *)(lVar26 + 0x34);
  uVar3 = *(undefined4 *)(lVar26 + 0x38);
  uVar4 = *(undefined4 *)(lVar26 + 0x3c);
  *(undefined4 *)(lVar6 + 0x30) = *(undefined4 *)(lVar26 + 0x30);
  *(undefined4 *)(lVar6 + 0x34) = uVar2;
  *(undefined4 *)(lVar6 + 0x38) = uVar3;
  *(undefined4 *)(lVar6 + 0x3c) = uVar4;
  *(undefined4 *)(lVar6 + 0x40) = 0xffffffff;
  uVar13 = *(uint *)(lVar6 + -4);
  uVar12 = uVar13 >> 0xd ^ *(int *)(lVar6 + -8) - uVar13;
  uVar23 = uVar12 << 8 ^ (-0x61c88647 - uVar13) - uVar12;
  uVar24 = uVar23 >> 0xd ^ (uVar13 - uVar12) - uVar23;
  uVar25 = uVar24 >> 0xc ^ (uVar12 - uVar23) - uVar24;
  uVar12 = uVar25 << 0x10 ^ (uVar23 - uVar24) - uVar25;
  uVar23 = uVar12 >> 5 ^ (uVar24 - uVar25) - uVar12;
  uVar24 = uVar23 >> 3 ^ (uVar25 - uVar12) - uVar23;
  uVar12 = uVar24 << 10 ^ (uVar12 - uVar23) - uVar24;
  uVar12 = uVar12 >> 0xf ^ uVar23 - (uVar24 + uVar12);
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar16 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar16 = (longlong *)param_1[8];
    }
    iVar22 = *(int *)((longlong)plVar16 + (ulonglong)((int)param_1[9] - 1U & uVar12) * 4);
    if (iVar22 != -1) {
      lVar26 = *param_1;
      do {
        lVar18 = (longlong)iVar22 * 0x50;
        _Dst = (void *)(lVar26 + lVar18);
        if ((*(int *)(lVar26 + lVar18) == *(int *)(lVar6 + -8)) &&
           (*(uint *)(lVar26 + 4 + lVar18) == uVar13)) {
          if (*(longlong *)((longlong)_Dst + 0x20) != 0) {
            FUN_1400020a8();
          }
          memmove(_Dst,_Src,0x48);
          FUN_147580006(param_1,iVar20);
          cVar11 = '\x01';
          goto LAB_1406fb4ef;
        }
        iVar22 = *(int *)((longlong)_Dst + 0x48);
      } while (iVar22 != -1);
    }
  }
  cVar11 = '\0';
  iVar22 = iVar20;
LAB_1406fb4ef:
  if (param_4 != (char *)0x0) {
    *param_4 = cVar11;
  }
  if (cVar11 != '\0') goto LAB_1406fb8fe;
  uVar23 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  uVar13 = 1;
  if (3 < uVar23) {
    uVar7 = (ulonglong)(uVar23 & 0xfffffffe) + 0xf;
    lVar6 = 0x3f;
    if (uVar7 != 0) {
      for (; uVar7 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    uVar13 = 1 << ((byte)lVar6 & 0x1f);
  }
  if (((int)uVar23 < 1) || ((int)uVar13 <= (int)param_1[9])) {
    uVar12 = (int)param_1[9] - 1U & uVar12;
    *(uint *)((longlong)_Src + 0x4c) = uVar12;
    plVar16 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar16 = param_1 + 7;
    }
    *(undefined4 *)((longlong)_Src + 0x48) =
         *(undefined4 *)
          ((longlong)plVar16 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4);
    plVar16 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar16 = param_1 + 7;
    }
    *(int *)((longlong)plVar16 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4) =
         iVar22;
    goto LAB_1406fb8fe;
  }
  *(uint *)(param_1 + 9) = uVar13;
  plVar16 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar16,0,0,4);
    uVar13 = *(uint *)(param_1 + 9);
  }
  plVar17 = param_1 + 7;
  if (uVar13 == 1) {
    if (*plVar16 != 0) {
      FUN_1446efa72(plVar16,0,0,4);
    }
LAB_1406fb550:
    uVar12 = 0;
    do {
      plVar16 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar16 = plVar17;
      }
      *(undefined4 *)((longlong)plVar16 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar12) * 4) =
           0xffffffff;
      uVar12 = uVar12 + 1;
    } while (uVar13 != uVar12);
  }
  else {
    if (uVar13 == 0) goto LAB_1406fb8fe;
    FUN_1446efa72(plVar16,0,uVar13,4);
    if (0 < (int)uVar13) goto LAB_1406fb550;
  }
  iVar20 = (int)param_1[5];
  if (iVar20 == 0) {
    uVar7 = 0;
    uVar19 = 1;
    iVar5 = 0;
    iVar9 = 0;
  }
  else {
    puVar10 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar10 = puVar1;
    }
    uVar13 = *puVar10;
    if (uVar13 == 0) {
      iVar5 = iVar20 + 0x1e;
      if (-1 < iVar20 + -1) {
        iVar5 = iVar20 + -1;
      }
      uVar7 = 0;
      uVar19 = (ulonglong)(uint)(iVar5 >> 5);
      if (iVar5 >> 5 < 1) {
        uVar19 = uVar7;
      }
      iVar9 = 0;
      do {
        if (uVar19 == uVar7) goto LAB_1406fb8fe;
        iVar9 = iVar9 + 0x20;
        uVar13 = puVar10[uVar7 + 1];
        uVar7 = uVar7 + 1;
      } while (uVar13 == 0);
    }
    else {
      uVar7 = 0;
      iVar9 = 0;
    }
    uVar19 = (ulonglong)(-uVar13 & uVar13);
    uVar21 = uVar19 * 2 + 1;
    lVar6 = 0x3f;
    if (uVar21 != 0) {
      for (; uVar21 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    iVar5 = (iVar9 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    if (iVar20 <= iVar5) {
      iVar5 = iVar20;
    }
  }
  if (iVar5 < iVar20) {
    uVar13 = 0xffffffff;
    do {
      lVar6 = *param_1;
      lVar26 = (longlong)iVar5 * 0x50;
      uVar12 = *(uint *)(lVar6 + 4 + lVar26);
      uVar24 = uVar12 >> 0xd ^ *(int *)(lVar6 + lVar26) - uVar12;
      uVar23 = uVar24 << 8 ^ (-0x61c88647 - uVar12) - uVar24;
      uVar12 = uVar23 >> 0xd ^ (uVar12 - uVar24) - uVar23;
      uVar25 = uVar12 >> 0xc ^ (uVar24 - uVar23) - uVar12;
      uVar24 = uVar25 << 0x10 ^ (uVar23 - uVar12) - uVar25;
      uVar12 = uVar24 >> 5 ^ (uVar12 - uVar25) - uVar24;
      uVar23 = uVar12 >> 3 ^ (uVar25 - uVar24) - uVar12;
      uVar24 = uVar23 << 10 ^ (uVar24 - uVar12) - uVar23;
      uVar21 = (longlong)(int)(uVar24 >> 0xf ^ uVar12 - (uVar23 + uVar24)) &
               (longlong)(int)param_1[9] - 1U;
      iVar20 = (int)uVar21;
      *(int *)(lVar6 + 0x4c + lVar26) = iVar20;
      plVar16 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar16 = plVar17;
      }
      *(undefined4 *)(lVar6 + 0x48 + lVar26) =
           *(undefined4 *)((longlong)plVar16 + ((longlong)(int)param_1[9] - 1U & uVar21) * 4);
      plVar16 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar16 = plVar17;
      }
      *(int *)((longlong)plVar16 + ((longlong)iVar20 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
      uVar13 = ~(uint)uVar19 & uVar13;
      puVar10 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar10 = puVar1;
      }
      iVar20 = (int)param_1[5];
      iVar5 = (int)uVar7;
      lVar6 = (longlong)iVar5;
      uVar12 = puVar10[lVar6] & uVar13;
      if (uVar12 == 0) {
        iVar14 = iVar20 + 0x1e;
        if (-1 < iVar20 + -1) {
          iVar14 = iVar20 + -1;
        }
        iVar14 = iVar14 >> 5;
        iVar15 = iVar14;
        if (iVar14 < iVar5) {
          iVar15 = iVar5;
        }
        if (iVar14 <= iVar5) break;
        lVar26 = 0;
        while( true ) {
          iVar9 = iVar9 + 0x20;
          uVar12 = puVar10[lVar6 + lVar26 + 1];
          if (uVar12 != 0) break;
          lVar26 = lVar26 + 1;
          if (iVar15 - lVar6 == lVar26) goto LAB_1406fb8fe;
        }
        uVar7 = (ulonglong)(iVar5 + (int)lVar26 + 1);
        uVar13 = 0xffffffff;
      }
      uVar19 = (ulonglong)(-uVar12 & uVar12);
      uVar21 = uVar19 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar21 != 0) {
        for (; uVar21 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar5 = (iVar9 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    } while (iVar5 < iVar20);
  }
LAB_1406fb8fe:
  *param_2 = iVar22;
  return param_2;
}



// FUNCTION 1406fba42 FUN_1406fba42 body=275 status=ok
// SIG undefined FUN_1406fba42(void)

void FUN_1406fba42(longlong param_1,int param_2)

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
    uVar4 = lVar3 * 0x50;
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
    if ((int)uVar1 <= (int)(uVar4 / 0x50)) {
      uVar5 = uVar4 / 0x50 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x50,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1406fbb68 FUN_1406fbb68 body=1021 status=ok
// SIG undefined FUN_1406fbb68(void)

/* WARNING: Removing unreachable block (ram,0x0001406fbeef) */
/* WARNING: Removing unreachable block (ram,0x0001406fbefc) */
/* WARNING: Removing unreachable block (ram,0x0001406fbf00) */

void FUN_1406fbb68(undefined8 param_1,byte *param_2)

{
  undefined8 *puVar1;
  ushort uVar2;
  ushort *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  int iVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  uint uVar11;
  undefined8 *puVar12;
  int iVar13;
  undefined ***pppuVar14;
  byte bVar15;
  longlong lVar16;
  longlong lVar17;
  byte *pbVar18;
  longlong lVar19;
  int iVar20;
  int *piVar21;
  undefined4 *puVar22;
  undefined1 auStack_168 [32];
  ulonglong local_148;
  ulonglong local_140;
  byte *local_138;
  byte *local_130;
  undefined1 local_128 [8];
  longlong local_120;
  undefined8 local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined **local_f8;
  int iStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  int local_d8;
  code *local_c8;
  undefined8 uStack_c0;
  undefined ***local_b8;
  undefined8 uStack_b0;
  undefined **local_a8;
  int iStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined **local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1448a4298(local_128);
  if (*param_2 == 1) {
    iVar13 = *(int *)(param_2 + 0x30);
    bVar15 = *(byte *)(*(longlong *)(param_2 + 0x28) + (longlong)iVar13);
    local_148 = (ulonglong)bVar15;
    *(int *)(param_2 + 0x30) = iVar13 + 1;
    lVar16 = *(longlong *)(*(longlong *)(param_2 + 0x20) + (longlong)iVar13 * 8);
    iVar13 = *(int *)(param_2 + 0x44) * (uint)bVar15;
    bVar15 = 1;
  }
  else {
    puVar3 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
    uVar2 = *puVar3;
    *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar3 + 1;
    uVar11 = uVar2 & 0x7fff;
    lVar17 = *(longlong *)(param_2 + 0x80);
    if ((short)uVar2 < 0) {
      lVar16 = (ulonglong)(uVar11 * *(int *)(lVar17 + 0x80)) + *(longlong *)(lVar17 + 0x70);
    }
    else {
      iVar13 = **(int **)(lVar17 + 0x20);
      lVar16 = 0;
      if (iVar13 <= (int)uVar11) {
        do {
          uVar11 = uVar11 - iVar13;
          iVar13 = (*(int **)(lVar17 + 0x20))[lVar16 + 1];
          lVar16 = lVar16 + 1;
        } while (iVar13 <= (int)uVar11);
      }
      lVar16 = (longlong)(int)uVar11 + *(longlong *)(*(longlong *)(lVar17 + 0x18) + lVar16 * 8);
    }
    local_148._0_4_ = (uint)(uVar2 >> 0xf);
    iVar13 = *(int *)(lVar17 + 0x4c) * (uint)local_148;
    bVar15 = *param_2;
    local_148 = (ulonglong)(uVar2 >> 0xf);
  }
  if ((bVar15 & 1) == 0) {
    puVar3 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
    uVar2 = *puVar3;
    *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar3 + 1;
    uVar11 = uVar2 & 0x7fff;
    lVar19 = *(longlong *)(param_2 + 0x80);
    if ((short)uVar2 < 0) {
      lVar17 = (ulonglong)(uVar11 * *(int *)(lVar19 + 0x80)) + *(longlong *)(lVar19 + 0x70);
    }
    else {
      iVar20 = **(int **)(lVar19 + 0x20);
      lVar17 = 0;
      if (iVar20 <= (int)uVar11) {
        do {
          uVar11 = uVar11 - iVar20;
          iVar20 = (*(int **)(lVar19 + 0x20))[lVar17 + 1];
          lVar17 = lVar17 + 1;
        } while (iVar20 <= (int)uVar11);
      }
      lVar17 = (longlong)(int)uVar11 + *(longlong *)(*(longlong *)(lVar19 + 0x18) + lVar17 * 8);
    }
    uVar11 = (uint)(uVar2 >> 0xf);
    pbVar18 = (byte *)(lVar19 + 0x4c);
  }
  else {
    iVar20 = *(int *)(param_2 + 0x30);
    uVar11 = (uint)*(byte *)(*(longlong *)(param_2 + 0x28) + (longlong)iVar20);
    *(int *)(param_2 + 0x30) = iVar20 + 1;
    lVar17 = *(longlong *)(*(longlong *)(param_2 + 0x20) + (longlong)iVar20 * 8);
    pbVar18 = param_2 + 0x44;
  }
  iVar20 = *(int *)pbVar18;
  *(undefined1 *)(local_120 + 0x139) = 1;
  local_130 = param_2 + 0x3c;
  bVar15 = *param_2;
  lVar19 = *(longlong *)(param_2 + 0x80);
  pbVar18 = (byte *)(lVar19 + 0x40);
  if (bVar15 != 0) {
    pbVar18 = local_130;
  }
  if (0 < *(int *)pbVar18) {
    piVar21 = (int *)(lVar16 + (longlong)iVar13 * 4);
    puVar22 = (undefined4 *)(lVar17 + (longlong)(int)(iVar20 * uVar11) * 4);
    local_140 = (ulonglong)(uVar11 << 2);
    local_148 = (ulonglong)(uint)((int)local_148 << 2);
    iVar13 = 0;
    local_138 = param_2;
    do {
      uVar10 = uStack_90;
      uVar9 = local_98;
      uVar8 = uStack_9c;
      iVar7 = iStack_a0;
      ppuVar6 = local_a8;
      uVar5 = uStack_b0;
      uVar4 = uStack_c0;
      lVar16 = local_120;
      iVar20 = *piVar21;
      if (0 < iVar20) {
        local_d8 = iVar20;
        uStack_60 = CONCAT44(uStack_9c,iStack_a0);
        local_58 = local_98;
        uStack_50 = uStack_90;
        local_68 = local_a8;
        local_78 = 0;
        uStack_70 = uStack_b0;
        local_88 = 0;
        uStack_80 = uStack_c0;
        local_98 = CONCAT44(uStack_e4,local_e8);
        uStack_90 = CONCAT44(uStack_dc,uStack_e0);
        local_a8 = &PTR_FUN_14be783e0;
        iStack_a0 = iVar20;
        uStack_9c = *puVar22;
        uStack_b0 = CONCAT44(uStack_fc,uStack_100);
        local_b8 = (undefined ***)0x0;
        uStack_c0 = CONCAT44(uStack_10c,uStack_110);
        local_c8 = FUN_144618650;
        uStack_80._0_4_ = (undefined4)uVar4;
        uStack_110 = (undefined4)uStack_80;
        uStack_80._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
        uStack_10c = uStack_80._4_4_;
        uStack_70._0_4_ = (undefined4)uVar5;
        uStack_100 = (undefined4)uStack_70;
        uStack_70._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
        uStack_fc = uStack_70._4_4_;
        local_58._0_4_ = (undefined4)uVar9;
        local_e8 = (undefined4)local_58;
        local_58._4_4_ = (undefined4)((ulonglong)uVar9 >> 0x20);
        uStack_e4 = local_58._4_4_;
        uStack_50._0_4_ = (undefined4)uVar10;
        uStack_e0 = (undefined4)uStack_50;
        uStack_50._4_4_ = (undefined4)((ulonglong)uVar10 >> 0x20);
        uStack_dc = uStack_50._4_4_;
        local_f8 = ppuVar6;
        iStack_f0 = iVar7;
        uStack_ec = uVar8;
        uStack_50 = uVar10;
        local_58 = uVar9;
        local_68 = ppuVar6;
        uStack_70 = uVar5;
        local_78 = 0;
        uStack_80 = uVar4;
        local_88 = 0;
        local_a8 = &PTR_FUN_14be783e0;
        local_b8 = (undefined ***)0x0;
        local_c8 = FUN_144618650;
        local_108 = 0;
        local_118 = 0;
        puVar12 = (undefined8 *)FUN_14001cc68(0x60,0x10);
        *puVar12 = 0;
        *(int *)(puVar12 + 2) = iVar20;
        puVar12[4] = local_c8;
        puVar12[6] = 0;
        if (local_c8 != (code *)0x0) {
          pppuVar14 = local_b8;
          if (local_b8 == (undefined ***)0x0) {
            pppuVar14 = &local_a8;
          }
          (*(code *)**pppuVar14)(pppuVar14,puVar12 + 6);
        }
        if (puVar12 != (undefined8 *)0x0) {
          LOCK();
          puVar1 = *(undefined8 **)(lVar16 + 0x70);
          *(undefined8 **)(lVar16 + 0x70) = puVar12;
          UNLOCK();
          LOCK();
          *puVar1 = puVar12;
          UNLOCK();
        }
        if (local_c8 != (code *)0x0) {
          pppuVar14 = local_b8;
          if (local_b8 == (undefined ***)0x0) {
            pppuVar14 = &local_a8;
          }
          (*(code *)(*pppuVar14)[2])();
        }
        bVar15 = *local_138;
        lVar19 = *(longlong *)(local_138 + 0x80);
      }
      iVar13 = iVar13 + 1;
      pbVar18 = (byte *)(lVar19 + 0x40);
      if ((bVar15 & 1) != 0) {
        pbVar18 = local_130;
      }
      puVar22 = (undefined4 *)((longlong)puVar22 + local_140);
      piVar21 = (int *)((longlong)piVar21 + local_148);
    } while (iVar13 < *(int *)pbVar18);
  }
  if ((local_48 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1406fbf66 FUN_1406fbf66 body=591 status=ok
// SIG undefined FUN_1406fbf66(void)

void FUN_1406fbf66(longlong *param_1,longlong *param_2)

{
  ulonglong uVar1;
  int iVar2;
  void *_Src;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  int iVar15;
  
  FUN_1406fc1b6(param_2,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34));
  iVar2 = (int)param_1[5];
  if (iVar2 == 0) {
    uVar13 = 1;
    uVar14 = 0;
    iVar15 = 0;
    iVar10 = 0;
  }
  else {
    puVar6 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar6 = (uint *)(param_1 + 2);
    }
    uVar11 = *puVar6;
    if (uVar11 == 0) {
      iVar15 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar15 = iVar2 + -1;
      }
      uVar14 = 0;
      uVar13 = (ulonglong)(uint)(iVar15 >> 5);
      if (iVar15 >> 5 < 1) {
        uVar13 = uVar14;
      }
      iVar10 = 0;
      do {
        if (uVar13 == uVar14) {
          return;
        }
        iVar10 = iVar10 + 0x20;
        uVar11 = puVar6[uVar14 + 1];
        uVar14 = uVar14 + 1;
      } while (uVar11 == 0);
    }
    else {
      uVar14 = 0;
      iVar10 = 0;
    }
    uVar13 = (ulonglong)(-uVar11 & uVar11);
    uVar1 = uVar13 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar15 = (iVar10 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar15) {
      iVar15 = iVar2;
    }
  }
  if (iVar15 < iVar2) {
    uVar11 = 0xffffffff;
    do {
      lVar12 = *param_1;
      iVar2 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
        FUN_146469efe(param_2,iVar2);
      }
      lVar12 = lVar12 + (longlong)iVar15 * 0x48;
      lVar7 = *param_2;
      lVar8 = (longlong)iVar2 * 0x20;
      *(undefined4 *)(lVar7 + 8 + lVar8) = *(undefined4 *)(lVar12 + 0x28);
      *(undefined8 *)(lVar7 + lVar8) = *(undefined8 *)(lVar12 + 0x20);
      *(undefined8 *)(lVar7 + 0x10 + lVar8) = 0;
      iVar2 = *(int *)(lVar12 + 0x38);
      _Src = *(void **)(lVar12 + 0x30);
      *(int *)(lVar7 + 0x18 + lVar8) = iVar2;
      if ((longlong)iVar2 == 0) {
        *(undefined4 *)(lVar7 + lVar8 + 0x1c) = 0;
      }
      else {
        puVar9 = (undefined8 *)(lVar8 + lVar7 + 0x10);
        FUN_1447a127e(puVar9,iVar2,0);
        memcpy((void *)*puVar9,_Src,(longlong)iVar2);
      }
      uVar11 = uVar11 & ~(uint)uVar13;
      puVar6 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar6 = (uint *)(param_1 + 2);
      }
      iVar2 = (int)param_1[5];
      iVar15 = (int)uVar14;
      lVar12 = (longlong)iVar15;
      uVar3 = puVar6[lVar12] & uVar11;
      if (uVar3 == 0) {
        iVar4 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar4 = iVar2 + -1;
        }
        iVar4 = iVar4 >> 5;
        iVar5 = iVar4;
        if (iVar4 < iVar15) {
          iVar5 = iVar15;
        }
        if (iVar4 <= iVar15) {
          return;
        }
        lVar7 = 0;
        while( true ) {
          iVar10 = iVar10 + 0x20;
          uVar3 = puVar6[lVar12 + lVar7 + 1];
          if (uVar3 != 0) break;
          lVar7 = lVar7 + 1;
          if (iVar5 - lVar12 == lVar7) {
            return;
          }
        }
        uVar14 = (ulonglong)(iVar15 + (int)lVar7 + 1);
        uVar11 = 0xffffffff;
      }
      uVar13 = (ulonglong)(-uVar3 & uVar3);
      uVar1 = uVar13 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar15 = (iVar10 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    } while (iVar15 < iVar2);
  }
  return;
}



// FUNCTION 1406fc1b6 FUN_1406fc1b6 body=69 status=ok
// SIG undefined FUN_1406fc1b6(void)

void FUN_1406fc1b6(undefined8 *param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  FUN_1406fc1fc(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_1406fc22e(param_1,param_2);
    return;
  }
  return;
}



// FUNCTION 1406fc1fc FUN_1406fc1fc body=49 status=ok
// SIG undefined FUN_1406fc1fc(void)

void FUN_1406fc1fc(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x10);
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



// FUNCTION 1406fc22e FUN_1406fc22e body=214 status=ok
// SIG undefined FUN_1406fc22e(void)

void FUN_1406fc22e(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = (longlong)param_2 * 0x20;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar1 < 0x7ff1) {
          uVar1 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)
                                        [((longlong)param_2 & 0x7ffffffffffffffU) * 2]];
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
    if (param_2 <= (int)(uVar1 >> 5)) {
      uVar2 = uVar1 >> 5 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x20,8);
  }
  return;
}



// FUNCTION 1406fc304 FUN_1406fc304 body=205 status=ok
// SIG undefined FUN_1406fc304(void)

void FUN_1406fc304(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  int *param_5,undefined8 param_6,undefined8 param_7)

{
  longlong *plVar1;
  undefined1 auStack_128 [32];
  int *local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined1 local_e8 [104];
  undefined1 local_80 [48];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_128;
  *param_5 = *param_5 + 1;
  FUN_1449c5bc8(param_2,local_80,param_1 + 0x30);
  plVar1 = *(longlong **)(param_1 + 0x20);
  FUN_1447dc19e(param_1 + 0x30,local_e8,param_3);
  local_100 = param_6;
  uStack_f8 = param_7;
  local_108 = param_5;
  (**(code **)(*plVar1 + 0x128))(plVar1,local_80,local_e8,param_4);
  if ((local_50 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406fc3d2 FUN_1406fc3d2 body=228 status=ok
// SIG undefined FUN_1406fc3d2(void)

void FUN_1406fc3d2(longlong *param_1,longlong param_2,undefined8 param_3,undefined4 param_4,
                  int *param_5,int *param_6,undefined8 *param_7)

{
  double *pdVar1;
  double dVar2;
  longlong lVar3;
  undefined1 auStack_a8 [32];
  int *local_88;
  int *local_80;
  longlong *local_78 [3];
  double adStack_60 [3];
  undefined4 local_44;
  int local_40;
  int local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(char *)((longlong)param_1 + 0x1a) == '\x01') {
    (**(code **)(*param_1 + 0x80))(param_1,local_78);
    lVar3 = 0;
    do {
      dVar2 = *(double *)(param_2 + lVar3 * 8);
      if ((adStack_60[lVar3] <= dVar2 && dVar2 != adStack_60[lVar3]) ||
         (pdVar1 = (double *)(param_2 + 0x18 + lVar3 * 8),
         *pdVar1 <= (double)local_78[lVar3] && (double)local_78[lVar3] != *pdVar1))
      goto LAB_1406fc48b;
      lVar3 = lVar3 + 1;
    } while (lVar3 != 3);
  }
  local_3c = *param_6;
  local_40 = *param_5;
  local_80 = &local_3c;
  local_88 = &local_40;
  local_78[0] = param_1;
  local_44 = param_4;
  (*(code *)*param_7)(param_7[1],local_78,param_3);
LAB_1406fc48b:
  *param_5 = *param_5 + 1;
  *param_6 = *param_6 + 1;
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406fc4b8 FUN_1406fc4b8 body=327 status=ok
// SIG undefined FUN_1406fc4b8(void)

void FUN_1406fc4b8(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = param_2;
  iVar3 = FUN_1406fc600((longlong *)(param_1 + 0x30),
                        (uint)((ulonglong)param_2 >> 0x20) ^ (uint)param_2);
  if (iVar3 != -1) {
    lVar5 = *(longlong *)(param_1 + 0x30);
    if ((lVar5 + (longlong)iVar3 * 0x260 + 0x10U & 0xffffffffffffffef) != 0) {
      lVar5 = lVar5 + (longlong)iVar3 * 0x260;
      *(undefined1 *)(lVar5 + 0x160) = 1;
      uVar6 = (ulonglong)*(int *)(lVar5 + 0x20);
      if (0 < (longlong)uVar6) {
        plVar1 = (longlong *)(lVar5 + 0x18);
        lVar4 = uVar6 * 0x28 + -0x10;
        do {
          if (*(int *)(*plVar1 + lVar4) == 0) {
            FUN_141897bae(plVar1,(int)uVar6 + -1);
            FUN_141897c1a(plVar1);
          }
          lVar4 = lVar4 + -0x28;
          bVar2 = 1 < uVar6;
          uVar6 = uVar6 - 1;
        } while (bVar2);
      }
      if (((*(int *)(lVar5 + 0x1ac) < 0) || (*(int *)(lVar5 + 0x30) <= *(int *)(lVar5 + 0x1ac))) &&
         (*(int *)(lVar5 + 0x20) == 0)) {
        if ((*(int *)(lVar5 + 0x220) != 0) && (*(longlong **)(lVar5 + 0x218) != (longlong *)0x0)) {
          (**(code **)(**(longlong **)(lVar5 + 0x218) + 0x60))();
        }
      }
      else if ((*(int *)(lVar5 + 0x1a4) == 0) ||
              (*(int *)(lVar5 + 0x1a8) == *(int *)(lVar5 + 0x1a4) + -1)) {
        FUN_140cf9510(param_1,param_2);
      }
    }
  }
  FUN_1406fc6c4(param_1);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406fc600 FUN_1406fc600 body=195 status=ok
// SIG undefined FUN_1406fc600(void)

int FUN_1406fc600(longlong *param_1,uint param_2,undefined8 *param_3)

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
        local_40 = *(undefined8 *)(lVar3 + (longlong)iVar4 * 0x260);
        cVar1 = FUN_14472d054(&local_40,&local_48);
        if (cVar1 != '\0') goto LAB_1406fc629;
        lVar3 = *param_1;
        iVar4 = *(int *)(lVar3 + 0x250 + (longlong)iVar4 * 0x260);
      } while (iVar4 != -1);
    }
  }
  iVar4 = -1;
LAB_1406fc629:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar4;
}



// FUNCTION 1406fc6c4 FUN_1406fc6c4 body=1764 status=ok
// SIG undefined FUN_1406fc6c4(void)

void FUN_1406fc6c4(longlong param_1)

{
  uint *puVar1;
  int iVar2;
  undefined8 uVar3;
  void *pvVar4;
  char cVar5;
  uint *puVar6;
  longlong lVar7;
  uint uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  int iVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  undefined1 auStack_2f8 [40];
  longlong *local_2d0;
  undefined8 *local_2c8;
  longlong *local_2c0;
  int local_2b8;
  uint local_2b4;
  uint *local_2b0;
  uint local_2a8;
  int local_2a4;
  int local_2a0;
  undefined8 local_298;
  undefined8 local_288;
  undefined8 local_280;
  int local_278;
  undefined4 local_274;
  undefined8 local_270;
  int local_268;
  undefined4 local_264;
  undefined8 local_258;
  undefined4 local_250;
  char local_24c;
  undefined4 local_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined8 local_238;
  undefined8 local_230;
  undefined4 local_228;
  undefined8 local_224;
  undefined4 local_21c;
  undefined8 local_218;
  undefined4 local_210;
  undefined8 local_20c;
  undefined4 local_204;
  undefined2 local_200;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined8 local_1e8;
  longlong local_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 auStack_198 [12];
  undefined8 local_138;
  undefined8 uStack_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 local_104;
  char local_100;
  undefined4 local_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  int local_ec;
  void *local_e8;
  int local_e0;
  undefined4 local_dc;
  void *local_d8;
  int local_d0;
  undefined4 local_cc;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  undefined4 local_bc;
  undefined4 uStack_b8;
  undefined8 uStack_b4;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  void *local_90;
  int local_88;
  undefined4 local_84;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  longlong local_68;
  void *local_60;
  int local_58;
  undefined4 local_54;
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_2f8;
  local_2c0 = (longlong *)(param_1 + 0x30);
  puVar1 = (uint *)(param_1 + 0x40);
  iVar2 = *(int *)(param_1 + 0x58);
  local_2b4 = 1;
  if (iVar2 == 0) {
    local_2a0 = 0;
    local_2b8 = 0;
    local_2a4 = 0;
  }
  else {
    puVar6 = *(uint **)(param_1 + 0x50);
    if (*(uint **)(param_1 + 0x50) == (uint *)0x0) {
      puVar6 = puVar1;
    }
    uVar8 = *puVar6;
    if (uVar8 == 0) {
      iVar11 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar11 = iVar2 + -1;
      }
      uVar13 = 0;
      uVar12 = (ulonglong)(uint)(iVar11 >> 5);
      if (iVar11 >> 5 < 1) {
        uVar12 = uVar13;
      }
      local_2b8 = (int)uVar12 + 1;
      local_2a0 = (int)uVar12 * 0x20 + 0x20;
      iVar11 = 0;
      do {
        local_2a4 = iVar2;
        if (uVar12 == uVar13) goto LAB_1406fc790;
        iVar11 = iVar11 + 0x20;
        uVar8 = puVar6[uVar13 + 1];
        uVar13 = uVar13 + 1;
      } while (uVar8 == 0);
      local_2b8 = (int)uVar13;
      local_2a0 = iVar11;
    }
    else {
      local_2a0 = 0;
      local_2b8 = 0;
    }
    local_2b4 = -uVar8 & uVar8;
    uVar12 = (ulonglong)local_2b4 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar12 != 0) {
      for (; uVar12 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    local_2a4 = (local_2a0 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
    if (iVar2 <= local_2a4) {
      local_2a4 = iVar2;
    }
  }
LAB_1406fc790:
  local_2a8 = 0xffffffff;
  local_2b0 = puVar1;
  if (local_2a4 == iVar2) {
    cVar5 = '\0';
  }
  else {
    local_2c8 = auStack_198;
    local_2d0 = local_2c0;
    do {
      lVar7 = *local_2c0;
      lVar14 = (longlong)local_2a4 * 0x260;
      local_298 = *(undefined8 *)(lVar7 + lVar14);
      local_288 = *(undefined8 *)(lVar7 + 0x10 + lVar14);
      local_280 = 0;
      iVar11 = *(int *)(lVar7 + 0x20 + lVar14);
      uVar3 = *(undefined8 *)(lVar7 + 0x18 + lVar14);
      local_278 = iVar11;
      if (iVar11 == 0) {
        local_274 = 0;
      }
      else {
        FUN_1406fe5e6(&local_280,iVar11);
        FUN_1406fcda9(local_280,uVar3,iVar11);
      }
      lVar7 = lVar7 + lVar14;
      local_270 = 0;
      local_268 = *(int *)(lVar7 + 0x30);
      uVar3 = *(undefined8 *)(lVar7 + 0x28);
      if (local_268 == 0) {
        local_264 = 0;
      }
      else {
        FUN_1406fe49c(&local_270,local_268,0);
        FUN_1406fd06e(local_270,uVar3);
      }
      local_258 = *(undefined8 *)(lVar7 + 0x40);
      local_24c = *(char *)(lVar7 + 0x4c);
      if (local_24c == '\x01') {
        local_250 = *(undefined4 *)(lVar7 + 0x48);
      }
      local_238 = *(undefined8 *)(lVar7 + 0x60);
      local_248 = *(undefined4 *)(lVar7 + 0x50);
      uStack_244 = *(undefined4 *)(lVar7 + 0x54);
      uStack_240 = *(undefined4 *)(lVar7 + 0x58);
      uStack_23c = *(undefined4 *)(lVar7 + 0x5c);
      local_228 = *(undefined4 *)(lVar7 + 0x70);
      local_230 = *(undefined8 *)(lVar7 + 0x68);
      local_21c = *(undefined4 *)(lVar7 + 0x7c);
      local_224 = *(undefined8 *)(lVar7 + 0x74);
      local_210 = *(undefined4 *)(lVar7 + 0x88);
      local_218 = *(undefined8 *)(lVar7 + 0x80);
      local_20c = *(undefined8 *)(lVar7 + 0x8c);
      local_204 = *(undefined4 *)(lVar7 + 0x94);
      local_200 = *(undefined2 *)(lVar7 + 0x98);
      local_1f8 = *(undefined8 *)(lVar7 + 0xa0);
      local_1f0 = *(undefined4 *)(lVar7 + 0xa8);
      local_1e8 = 0;
      local_1e0 = *(longlong *)(lVar7 + 0xb8);
      if ((DAT_14c950c29 == '\x01') && (local_1e0 != 0)) {
        FUN_1456cec3c();
      }
      local_1a8 = *(undefined8 *)(lVar7 + 0xf0);
      local_1d8 = *(undefined8 *)(lVar7 + 0xc0);
      uStack_1d0 = *(undefined8 *)(lVar7 + 200);
      local_1c8 = *(undefined8 *)(lVar7 + 0xd0);
      uStack_1c0 = *(undefined8 *)(lVar7 + 0xd8);
      local_1b8 = *(undefined8 *)(lVar7 + 0xe0);
      uStack_1b0 = *(undefined8 *)(lVar7 + 0xe8);
      puVar9 = (undefined8 *)(lVar7 + 0x100);
      puVar10 = local_2c8;
      for (lVar14 = 0xc; lVar14 != 0; lVar14 = lVar14 + -1) {
        *puVar10 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar10 = puVar10 + 1;
      }
      local_108 = *(undefined4 *)(lVar7 + 400);
      local_138 = *(undefined8 *)(lVar7 + 0x160);
      uStack_130 = *(undefined8 *)(lVar7 + 0x168);
      local_128 = *(undefined4 *)(lVar7 + 0x170);
      uStack_124 = *(undefined4 *)(lVar7 + 0x174);
      uStack_120 = *(undefined4 *)(lVar7 + 0x178);
      uStack_11c = *(undefined4 *)(lVar7 + 0x17c);
      local_118 = *(undefined4 *)(lVar7 + 0x180);
      uStack_114 = *(undefined4 *)(lVar7 + 0x184);
      uStack_110 = *(undefined4 *)(lVar7 + 0x188);
      uStack_10c = *(undefined4 *)(lVar7 + 0x18c);
      local_100 = *(char *)(lVar7 + 0x198);
      if (local_100 == '\x01') {
        local_104 = *(undefined4 *)(lVar7 + 0x194);
      }
      local_ec = *(int *)(lVar7 + 0x1ac);
      local_fc = *(undefined4 *)(lVar7 + 0x19c);
      uStack_f8 = *(undefined4 *)(lVar7 + 0x1a0);
      uStack_f4 = *(undefined4 *)(lVar7 + 0x1a4);
      uStack_f0 = *(undefined4 *)(lVar7 + 0x1a8);
      local_e8 = (void *)0x0;
      local_e0 = *(int *)(lVar7 + 0x1b8);
      lVar14 = (longlong)local_e0;
      pvVar4 = *(void **)(lVar7 + 0x1b0);
      if (lVar14 == 0) {
        local_dc = 0;
      }
      else {
        FUN_1406fe3c6(&local_e8,local_e0);
        memcpy(local_e8,pvVar4,lVar14 << 4);
      }
      local_d8 = (void *)0x0;
      local_d0 = *(int *)(lVar7 + 0x1c8);
      lVar14 = (longlong)local_d0;
      pvVar4 = *(void **)(lVar7 + 0x1c0);
      if (lVar14 == 0) {
        local_cc = 0;
      }
      else {
        FUN_1401b309e(&local_d8,local_d0,0);
        memcpy(local_d8,pvVar4,lVar14 << 3);
      }
      uStack_b4 = *(undefined8 *)(lVar7 + 0x1e4);
      uStack_b8 = (undefined4)((ulonglong)*(undefined8 *)(lVar7 + 0x1dc) >> 0x20);
      uStack_c8 = *(undefined8 *)(lVar7 + 0x1d0);
      uStack_c0 = (undefined4)*(undefined8 *)(lVar7 + 0x1d8);
      local_bc = (undefined4)((ulonglong)*(undefined8 *)(lVar7 + 0x1d8) >> 0x20);
      local_a8 = *(undefined8 *)(lVar7 + 0x1f0);
      local_a0 = *(undefined4 *)(lVar7 + 0x1f8);
      uStack_9c = *(undefined4 *)(lVar7 + 0x1fc);
      uStack_98 = *(undefined4 *)(lVar7 + 0x200);
      uStack_94 = *(undefined4 *)(lVar7 + 0x204);
      local_90 = (void *)0x0;
      local_88 = *(int *)(lVar7 + 0x210);
      lVar14 = (longlong)local_88;
      pvVar4 = *(void **)(lVar7 + 0x208);
      if (lVar14 == 0) {
        local_84 = 0;
      }
      else {
        FUN_1446dd670(&local_90,local_88,0);
        memcpy(local_90,pvVar4,lVar14 * 2);
      }
      local_80 = 0;
      local_78 = 0;
      FUN_14009d848(&local_80,lVar7 + 0x218);
      local_70 = *(undefined8 *)(lVar7 + 0x228);
      local_68 = *(longlong *)(lVar7 + 0x230);
      if (local_68 != 0) {
        LOCK();
        *(int *)(local_68 + 8) = *(int *)(local_68 + 8) + 1;
        UNLOCK();
      }
      local_60 = (void *)0x0;
      local_58 = *(int *)(lVar7 + 0x240);
      lVar14 = (longlong)local_58;
      pvVar4 = *(void **)(lVar7 + 0x238);
      if (lVar14 == 0) {
        local_54 = 0;
      }
      else {
        FUN_1405b70fe(&local_60,local_58,0);
        memcpy(local_60,pvVar4,lVar14 * 0x18);
      }
      iVar11 = local_278;
      local_50 = *(undefined1 *)(lVar7 + 0x248);
      if ((-1 < local_ec) && (local_ec < local_268)) {
        FUN_1406fcf4a(&local_288);
        cVar5 = '\x01';
        break;
      }
      cVar5 = (char)local_138;
      FUN_1406fcf4a(&local_288);
      if ((cVar5 == '\0') && (cVar5 = '\x01', iVar11 != 0)) break;
      local_2a8 = local_2a8 & ~local_2b4;
      FUN_1449c0562(&local_2b8);
    } while ((local_2a4 != iVar2) ||
            ((local_2b0 != puVar1 || (cVar5 = '\0', local_2c0 != local_2d0))));
  }
  if (cVar5 != *(char *)(param_1 + 0x28)) {
    *(char *)(param_1 + 0x28) = cVar5;
    if (cVar5 == '\0') {
      FUN_1449db8d8();
    }
    else {
      FUN_144958d50(param_1 + 0x20);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_2f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1406fcda9 FUN_1406fcda9 body=122 status=ok
// SIG undefined FUN_1406fcda9(void)

void FUN_1406fcda9(longlong param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)(param_1 + 0x10);
  do {
    *(undefined4 *)(puVar3 + -1) = *(undefined4 *)(param_2 + 1);
    puVar3[-2] = *param_2;
    *puVar3 = 0;
    iVar1 = *(int *)(param_2 + 3);
    uVar2 = param_2[2];
    *(int *)(puVar3 + 1) = iVar1;
    if (iVar1 == 0) {
      *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
    }
    else {
      FUN_1406fce60(puVar3,iVar1,0);
      FUN_1406fce23(*puVar3,uVar2);
    }
    *(undefined4 *)(puVar3 + 2) = *(undefined4 *)(param_2 + 4);
    param_2 = param_2 + 5;
    puVar3 = puVar3 + 5;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}



// FUNCTION 1406fce23 FUN_1406fce23 body=60 status=ok
// SIG undefined FUN_1406fce23(void)

void FUN_1406fce23(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1406fd13e(param_1,param_2);
    param_1 = param_1 + 0x300;
    param_2 = param_2 + 0x300;
  }
  return;
}



// FUNCTION 1406fce60 FUN_1406fce60 body=233 status=ok
// SIG undefined FUN_1406fce60(void)

void FUN_1406fce60(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar3 = (longlong)param_2 * 0x300;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar3 >> 4]];
        }
        else {
          uVar2 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar2 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar2 & (uVar3 + uVar2) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,0x10);
      }
    }
    iVar1 = (int)(uVar3 / 0x300);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar4 = iVar1;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x300,0x10);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1406fcf4a FUN_1406fcf4a body=292 status=ok
// SIG undefined FUN_1406fcf4a(void)

void FUN_1406fcf4a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  if (*(longlong *)(param_1 + 0x228) != 0) {
    FUN_1400020a8();
  }
  plVar3 = *(longlong **)(param_1 + 0x220);
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
  plVar3 = (longlong *)(param_1 + 0x208);
  if (*(int *)(param_1 + 0x210) != 0) {
    puVar4 = (undefined8 *)*plVar3;
    if (puVar4 == (undefined8 *)0x0) goto LAB_1406fcfd5;
    (**(code **)*puVar4)(puVar4,0);
    FUN_1446efa72(plVar3,0,0,0x10);
    *(undefined4 *)(param_1 + 0x210) = 0;
  }
  if (*plVar3 != 0) {
    FUN_1400020a8();
  }
LAB_1406fcfd5:
  if (*(longlong *)(param_1 + 0x1f8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x1b0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x1a0) != 0) {
    FUN_1400020a8();
  }
  if (*(char *)(param_1 + 0x188) == '\x01') {
    *(undefined1 *)(param_1 + 0x188) = 0;
  }
  if (*(char *)(param_1 + 0x3c) == '\x01') {
    *(undefined1 *)(param_1 + 0x3c) = 0;
  }
  FUN_14096d0ce(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20));
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  FUN_1407716ee(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1406fd06e FUN_1406fd06e body=208 status=ok
// SIG undefined FUN_1406fd06e(void)

void FUN_1406fd06e(longlong param_1,longlong param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  int *piVar4;
  
  if (param_3 != 0) {
    puVar3 = (undefined8 *)(param_1 + 0x58);
    piVar4 = (int *)(param_2 + 0x60);
    do {
      puVar3[-0xb] = &PTR_FUN_14b023b08;
      puVar3[-10] = *(undefined8 *)(piVar4 + -0x16);
      *(int *)(puVar3 + -9) = piVar4[-0x14];
      puVar3[-8] = 0;
      *(short *)(puVar3 + -7) = (short)piVar4[-0x10];
      puVar3[-6] = 0;
      puVar3[-5] = 0;
      puVar3[-4] = 0;
      FUN_1401f3db8(puVar3 + -6,piVar4 + -0xe);
      puVar3[-3] = *(undefined8 *)(piVar4 + -8);
      *(int *)(puVar3 + -2) = piVar4[-6];
      puVar3[-1] = 0;
      *puVar3 = 0;
      iVar1 = *piVar4;
      uVar2 = *(undefined8 *)(piVar4 + -2);
      *(int *)(puVar3 + 1) = iVar1;
      if (iVar1 == 0) {
        *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
      }
      else {
        FUN_140e8ac72(puVar3,iVar1,0);
        FUN_140e8ab75(*puVar3,uVar2);
      }
      puVar3 = puVar3 + 0xd;
      piVar4 = piVar4 + 0x1a;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1406fd13e FUN_1406fd13e body=1226 status=ok
// SIG undefined FUN_1406fd13e(void)

undefined8 * FUN_1406fd13e(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  uint uVar2;
  void *pvVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 uVar8;
  longlong lVar9;
  int iVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  bool bVar13;
  
  puVar11 = param_2;
  puVar12 = param_1;
  for (lVar9 = 0xf; lVar9 != 0; lVar9 = lVar9 + -1) {
    *puVar12 = *puVar11;
    puVar11 = puVar11 + 1;
    puVar12 = puVar12 + 1;
  }
  *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)(param_2 + 0xf);
  *(undefined4 *)((longlong)param_1 + 0x84) = *(undefined4 *)((longlong)param_2 + 0x84);
  *(undefined8 *)((longlong)param_1 + 0x7c) = *(undefined8 *)((longlong)param_2 + 0x7c);
  *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(param_2 + 0x12);
  param_1[0x11] = param_2[0x11];
  *(undefined4 *)((longlong)param_1 + 0x9c) = *(undefined4 *)((longlong)param_2 + 0x9c);
  *(undefined8 *)((longlong)param_1 + 0x94) = *(undefined8 *)((longlong)param_2 + 0x94);
  uVar8 = param_2[0x15];
  param_1[0x14] = param_2[0x14];
  param_1[0x15] = uVar8;
  uVar8 = *(undefined8 *)((longlong)param_2 + 0xb4);
  *(undefined8 *)((longlong)param_1 + 0xac) = *(undefined8 *)((longlong)param_2 + 0xac);
  *(undefined8 *)((longlong)param_1 + 0xb4) = uVar8;
  param_1[0x18] = param_2[0x18];
  uVar4 = *(undefined4 *)((longlong)param_2 + 0xcc);
  uVar5 = *(undefined4 *)(param_2 + 0x1a);
  uVar6 = *(undefined4 *)((longlong)param_2 + 0xd4);
  *(undefined4 *)(param_1 + 0x19) = *(undefined4 *)(param_2 + 0x19);
  *(undefined4 *)((longlong)param_1 + 0xcc) = uVar4;
  *(undefined4 *)(param_1 + 0x1a) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0xd4) = uVar6;
  param_1[0x1b] = 0;
  iVar7 = *(int *)(param_2 + 0x1c);
  pvVar3 = (void *)param_2[0x1b];
  *(int *)(param_1 + 0x1c) = iVar7;
  if ((longlong)iVar7 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xe4) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x1b,iVar7,0);
    memcpy((void *)param_1[0x1b],pvVar3,(longlong)iVar7 * 2);
  }
  param_1[0x1f] = param_2[0x1f];
  uVar8 = param_2[0x1e];
  param_1[0x1d] = param_2[0x1d];
  param_1[0x1e] = uVar8;
  cVar1 = *(char *)(param_2 + 0x2c);
  *(char *)(param_1 + 0x2c) = cVar1;
  if (cVar1 == '\x01') {
    puVar11 = param_2 + 0x20;
    puVar12 = param_1 + 0x20;
    for (lVar9 = 0xc; lVar9 != 0; lVar9 = lVar9 + -1) {
      *puVar12 = *puVar11;
      puVar11 = puVar11 + 1;
      puVar12 = puVar12 + 1;
    }
  }
  uVar8 = *(undefined8 *)((longlong)param_2 + 0x181);
  *(undefined8 *)((longlong)param_1 + 0x179) = *(undefined8 *)((longlong)param_2 + 0x179);
  *(undefined8 *)((longlong)param_1 + 0x181) = uVar8;
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x174);
  uVar5 = *(undefined4 *)(param_2 + 0x2f);
  uVar6 = *(undefined4 *)((longlong)param_2 + 0x17c);
  *(undefined4 *)(param_1 + 0x2e) = *(undefined4 *)(param_2 + 0x2e);
  *(undefined4 *)((longlong)param_1 + 0x174) = uVar4;
  *(undefined4 *)(param_1 + 0x2f) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0x17c) = uVar6;
  FUN_1406fd608(param_1 + 0x32,param_2 + 0x32);
  *(undefined1 *)(param_1 + 0x4d) = 0;
  cVar1 = *(char *)(param_2 + 0x4d);
  *(char *)(param_1 + 0x4d) = cVar1;
  puVar11 = param_2;
  if (cVar1 != '\x01') {
    if (cVar1 == '\x02') {
      param_1[0x4e] = param_2[0x4e];
      goto LAB_1406fd2f7;
    }
    if (cVar1 != '\x03') goto LAB_1406fd2f7;
    param_1[0x4e] = param_2[0x4e];
    lVar9 = param_2[0x4f];
    param_1[0x4f] = lVar9;
    if (lVar9 == 0) {
      param_1[0x50] = param_2[0x50];
      *(undefined1 *)(param_1 + 0x51) = *(undefined1 *)(param_2 + 0x51);
      goto LAB_1406fd2f7;
    }
    LOCK();
    *(int *)(lVar9 + 0xc) = *(int *)(lVar9 + 0xc) + 1;
    UNLOCK();
    param_1[0x50] = param_2[0x50];
    *(undefined1 *)(param_1 + 0x51) = *(undefined1 *)(param_2 + 0x51);
    puVar11 = param_1;
    if (*(char *)(param_1 + 0x4d) != '\x01') goto LAB_1406fd2f7;
  }
  lVar9 = puVar11[0x4e];
  *(undefined1 *)(param_1 + 0x4d) = 2;
  param_1[0x4e] = 0;
  if (lVar9 == 0) {
    iVar7 = 0;
  }
  else {
    uVar2 = *(uint *)(lVar9 + 0xc);
    *(uint *)(param_1 + 0x4e) = uVar2;
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar9 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar9 = 0;
    }
    iVar7 = *(int *)(lVar9 + 0x10);
    if (*(int *)(lVar9 + 0x10) == 0) {
      LOCK();
      iVar7 = DAT_14c964868 + 1;
      UNLOCK();
      iVar10 = DAT_14c964868 + 1;
      bVar13 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar7;
      if (bVar13) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar10);
      }
      LOCK();
      iVar7 = *(int *)(lVar9 + 0x10);
      bVar13 = iVar7 == 0;
      if (bVar13) {
        *(int *)(lVar9 + 0x10) = iVar10;
        iVar7 = 0;
      }
      UNLOCK();
      if (bVar13) {
        iVar7 = iVar10;
      }
    }
  }
  *(int *)((longlong)param_1 + 0x274) = iVar7;
LAB_1406fd2f7:
  *(undefined4 *)(param_1 + 0x52) = 0;
  if (*(int *)(param_2 + 0x52) != 0) {
    uVar8 = FUN_1448174c4(param_1 + 0x52);
    FUN_1400e08b0(uVar8,DAT_14c9a3da0 + (longlong)*(int *)(param_2 + 0x52) * 0x10 + -0x10);
  }
  param_1[0x55] = param_2[0x55];
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x29c);
  uVar5 = *(undefined4 *)(param_2 + 0x54);
  uVar6 = *(undefined4 *)((longlong)param_2 + 0x2a4);
  *(undefined4 *)(param_1 + 0x53) = *(undefined4 *)(param_2 + 0x53);
  *(undefined4 *)((longlong)param_1 + 0x29c) = uVar4;
  *(undefined4 *)(param_1 + 0x54) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0x2a4) = uVar6;
  param_1[0x56] = 0;
  iVar7 = *(int *)(param_2 + 0x57);
  pvVar3 = (void *)param_2[0x56];
  *(int *)(param_1 + 0x57) = iVar7;
  if ((longlong)iVar7 == 0) {
    *(undefined4 *)((longlong)param_1 + 700) = 0;
  }
  else {
    FUN_141894126(param_1 + 0x56,iVar7,0);
    memcpy((void *)param_1[0x56],pvVar3,(longlong)iVar7 << 4);
  }
  param_1[0x58] = 0;
  iVar7 = *(int *)(param_2 + 0x59);
  pvVar3 = (void *)param_2[0x58];
  *(int *)(param_1 + 0x59) = iVar7;
  if ((longlong)iVar7 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2cc) = 0;
  }
  else {
    FUN_1406fd90c(param_1 + 0x58,iVar7,0);
    memcpy((void *)param_1[0x58],pvVar3,(longlong)iVar7 << 3);
  }
  param_1[0x5a] = &DAT_14a171d50;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5b] = param_2[0x5b];
  FUN_1406022fe(param_1 + 0x5c,param_2 + 0x5c);
  param_1[0x5a] = &PTR_FUN_14b1828b0;
  param_1[0x5e] = 0;
  iVar7 = *(int *)(param_2 + 0x5f);
  pvVar3 = (void *)param_2[0x5e];
  *(int *)(param_1 + 0x5f) = iVar7;
  if ((longlong)iVar7 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2fc) = 0;
  }
  else {
    FUN_1487630d4(param_1 + 0x5e,iVar7,0);
    memcpy((void *)param_1[0x5e],pvVar3,(longlong)iVar7 << 3);
  }
  return param_1;
}



// FUNCTION 1406fd608 FUN_1406fd608 body=471 status=ok
// SIG undefined FUN_1406fd608(void)

undefined8 * FUN_1406fd608(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  pvVar2 = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1406fd90c(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],pvVar2,(longlong)iVar1 << 3);
  }
  param_1[4] = 0;
  iVar1 = *(int *)(param_2 + 5);
  pvVar2 = (void *)param_2[4];
  *(int *)(param_1 + 5) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    FUN_1487630d4(param_1 + 4,iVar1,0);
    memcpy((void *)param_1[4],pvVar2,(longlong)iVar1 << 3);
  }
  param_1[6] = 0;
  iVar1 = *(int *)(param_2 + 7);
  uVar3 = param_2[6];
  *(int *)(param_1 + 7) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  }
  else {
    FUN_1406fd828(param_1 + 6,iVar1,0);
    FUN_1406fd7df(param_1[6],uVar3,iVar1);
  }
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[0x12] = param_2[0x12];
  lVar4 = param_2[0x13];
  param_1[0x13] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  if ((ulonglong)param_2[0x17] < 0x10) {
    puVar8 = param_2 + 0x14;
  }
  else {
    puVar8 = (undefined8 *)param_2[0x14];
  }
  FUN_1401d9f72(param_1 + 0x14,puVar8,param_2[0x16]);
  *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_2 + 0x18);
  *(undefined1 *)((longlong)param_1 + 0xc1) = *(undefined1 *)((longlong)param_2 + 0xc1);
  uVar5 = *(undefined4 *)(param_2 + 0x19);
  uVar6 = *(undefined4 *)((longlong)param_2 + 0xcc);
  uVar7 = *(undefined4 *)(param_2 + 0x1a);
  *(undefined4 *)((longlong)param_1 + 0xc4) = *(undefined4 *)((longlong)param_2 + 0xc4);
  *(undefined4 *)(param_1 + 0x19) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0xcc) = uVar6;
  *(undefined4 *)(param_1 + 0x1a) = uVar7;
  FUN_1406fda46(param_2 + 8,param_1 + 8);
  return param_1;
}



// FUNCTION 1406fd7df FUN_1406fd7df body=73 status=ok
// SIG undefined FUN_1406fd7df(void)

void FUN_1406fd7df(longlong param_1,longlong param_2,int param_3)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = 0;
    do {
      plVar1 = *(longlong **)(param_2 + lVar2);
      *(longlong **)(param_1 + lVar2) = plVar1;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      *(undefined4 *)(param_1 + 8 + lVar2) = *(undefined4 *)(param_2 + 8 + lVar2);
      lVar2 = lVar2 + 0x10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1406fd828 FUN_1406fd828 body=228 status=ok
// SIG undefined FUN_1406fd828(void)

void FUN_1406fd828(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1406fd90c FUN_1406fd90c body=314 status=ok
// SIG undefined FUN_1406fd90c(void)

void FUN_1406fd90c(longlong param_1,int param_2,int param_3)

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
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1406fd97a;
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
LAB_1406fd97a:
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



// FUNCTION 1406fda46 FUN_1406fda46 body=1209 status=ok
// SIG undefined FUN_1406fda46(void)

void FUN_1406fda46(longlong *param_1,longlong *param_2)

{
  void *_Src;
  undefined4 uVar1;
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
  uint *puVar12;
  uint *puVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  ulonglong uVar19;
  int iVar20;
  int iVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  longlong lVar24;
  longlong lVar25;
  uint uVar26;
  uint uVar27;
  longlong *plVar28;
  undefined8 *puVar29;
  undefined1 auStack_c8 [40];
  longlong *local_a0;
  uint *local_98;
  longlong *local_90;
  ulonglong local_88;
  undefined8 *local_80;
  longlong local_78;
  undefined8 **local_70;
  undefined1 local_64 [4];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  puVar12 = (uint *)(param_2 + 2);
  iVar20 = (int)param_2[5];
  local_a0 = param_1;
  if (iVar20 == 0) {
    uVar22 = 1;
    uVar23 = 0;
    iVar21 = 0;
    iVar15 = 0;
  }
  else {
    puVar13 = (uint *)param_2[4];
    if ((uint *)param_2[4] == (uint *)0x0) {
      puVar13 = puVar12;
    }
    uVar27 = *puVar13;
    if (uVar27 == 0) {
      iVar21 = iVar20 + 0x1e;
      if (-1 < iVar20 + -1) {
        iVar21 = iVar20 + -1;
      }
      uVar23 = 0;
      uVar19 = (ulonglong)(uint)(iVar21 >> 5);
      if (iVar21 >> 5 < 1) {
        uVar19 = uVar23;
      }
      iVar21 = 0;
      do {
        if (uVar19 == uVar23) goto LAB_1406fda9e;
        iVar21 = iVar21 + 0x20;
        uVar27 = puVar13[uVar23 + 1];
        uVar23 = uVar23 + 1;
      } while (uVar27 == 0);
    }
    else {
      uVar23 = 0;
      iVar21 = 0;
    }
    uVar22 = (ulonglong)(-uVar27 & uVar27);
    uVar19 = uVar22 * 2 + 1;
    lVar24 = 0x3f;
    if (uVar19 != 0) {
      for (; uVar19 >> lVar24 == 0; lVar24 = lVar24 + -1) {
      }
    }
    iVar15 = (iVar21 - ((uint)lVar24 ^ 0x3f)) + 0x3e;
    if (iVar20 <= iVar15) {
      iVar15 = iVar20;
    }
  }
  if (iVar15 != iVar20) {
    uVar27 = 0xffffffff;
    iVar16 = iVar20;
    do {
      lVar24 = *param_2;
      lVar25 = *(longlong *)(lVar24 + 8 + (longlong)iVar15 * 0x18);
      if (lVar25 != 0) {
        local_98 = (uint *)CONCAT44(local_98._4_4_,uVar27);
        local_90 = param_2;
        if (*(longlong *)(lVar25 + 0x38) != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(lVar25);
        *(undefined8 *)(lVar24 + 8 + (longlong)iVar15 * 0x18) = 0;
        iVar16 = (int)local_90[5];
        param_2 = local_90;
        uVar27 = (uint)local_98;
      }
      uVar27 = uVar27 & ~(uint)uVar22;
      puVar13 = (uint *)param_2[4];
      if ((uint *)param_2[4] == (uint *)0x0) {
        puVar13 = puVar12;
      }
      iVar15 = (int)uVar23;
      lVar24 = (longlong)iVar15;
      uVar14 = puVar13[lVar24] & uVar27;
      if (uVar14 == 0) {
        iVar17 = iVar16 + 0x1e;
        if (-1 < iVar16 + -1) {
          iVar17 = iVar16 + -1;
        }
        iVar17 = iVar17 >> 5;
        iVar21 = iVar21 + 0x20;
        iVar18 = iVar17;
        if (iVar17 < iVar15) {
          iVar18 = iVar15;
        }
        if (iVar15 < iVar17) {
          lVar25 = 0;
          do {
            uVar14 = puVar13[lVar24 + lVar25 + 1];
            if (uVar14 != 0) {
              uVar23 = (ulonglong)(iVar15 + (int)lVar25 + 1);
              uVar27 = 0xffffffff;
              goto LAB_1406fdded;
            }
            iVar21 = iVar21 + 0x20;
            lVar25 = lVar25 + 1;
          } while (iVar18 - lVar24 != lVar25);
          uVar27 = 0xffffffff;
          iVar15 = iVar18;
        }
        uVar23 = (ulonglong)(iVar15 + 1);
        iVar15 = iVar16;
      }
      else {
LAB_1406fdded:
        uVar22 = (ulonglong)(-uVar14 & uVar14);
        uVar19 = uVar22 * 2 + 1;
        lVar24 = 0x3f;
        if (uVar19 != 0) {
          for (; uVar19 >> lVar24 == 0; lVar24 = lVar24 + -1) {
          }
        }
        iVar15 = (iVar21 - ((uint)lVar24 ^ 0x3f)) + 0x3e;
        if (iVar16 <= iVar15) {
          iVar15 = iVar16;
        }
      }
    } while (iVar15 != iVar20);
  }
LAB_1406fda9e:
  plVar28 = local_a0;
  FUN_14036900c(param_2,(int)local_a0[1] - *(int *)((longlong)local_a0 + 0x34));
  local_98 = (uint *)(plVar28 + 2);
  uVar27 = *(uint *)(plVar28 + 5);
  if (uVar27 == 0) {
    uVar22 = 1;
    uVar23 = 0;
    iVar20 = 0;
    uVar14 = 0;
  }
  else {
    puVar12 = (uint *)plVar28[4];
    if ((uint *)plVar28[4] == (uint *)0x0) {
      puVar12 = local_98;
    }
    uVar14 = *puVar12;
    if (uVar14 == 0) {
      iVar20 = uVar27 + 0x1e;
      if (-1 < (int)(uVar27 - 1)) {
        iVar20 = uVar27 - 1;
      }
      uVar23 = 0;
      uVar19 = (ulonglong)(uint)(iVar20 >> 5);
      if (iVar20 >> 5 < 1) {
        uVar19 = uVar23;
      }
      iVar20 = 0;
      do {
        if (uVar19 == uVar23) goto LAB_1406fdcf3;
        iVar20 = iVar20 + 0x20;
        uVar14 = puVar12[uVar23 + 1];
        uVar23 = uVar23 + 1;
      } while (uVar14 == 0);
    }
    else {
      uVar23 = 0;
      iVar20 = 0;
    }
    uVar22 = (ulonglong)(-uVar14 & uVar14);
    uVar19 = uVar22 * 2 + 1;
    lVar24 = 0x3f;
    if (uVar19 != 0) {
      for (; uVar19 >> lVar24 == 0; lVar24 = lVar24 + -1) {
      }
    }
    uVar14 = (iVar20 - ((uint)lVar24 ^ 0x3f)) + 0x3e;
    if ((int)uVar27 <= (int)uVar14) {
      uVar14 = uVar27;
    }
  }
  if (uVar14 != uVar27) {
    uVar26 = 0xffffffff;
    local_88 = (ulonglong)uVar27;
    do {
      if (*(longlong *)(*plVar28 + 8 + (longlong)(int)uVar14 * 0x18) != 0) {
        local_90 = (longlong *)CONCAT44(local_90._4_4_,uVar26);
        lVar24 = *plVar28 + (longlong)(int)uVar14 * 0x18;
        local_80 = (undefined8 *)FUN_14001cc68(0x48,0x10);
        local_80[4] = 0;
        local_80[5] = 0;
        *local_80 = 0;
        local_80[1] = 0;
        local_80[2] = 0;
        local_80[3] = 0;
        local_80[6] = 0;
        *(undefined4 *)(local_80 + 4) = 0x3f800000;
        *(undefined1 *)((longlong)local_80 + 0x25) = 8;
        *(undefined2 *)((longlong)local_80 + 0x26) = 0xffff;
        local_80[7] = 0;
        local_80[8] = 0;
        puVar29 = *(undefined8 **)(lVar24 + 8);
        uVar1 = *(undefined4 *)((longlong)puVar29 + 4);
        uVar2 = *(undefined4 *)(puVar29 + 1);
        uVar3 = *(undefined4 *)((longlong)puVar29 + 0xc);
        uVar4 = *(undefined4 *)(puVar29 + 2);
        uVar5 = *(undefined4 *)((longlong)puVar29 + 0x14);
        uVar6 = *(undefined4 *)(puVar29 + 3);
        uVar7 = *(undefined4 *)((longlong)puVar29 + 0x1c);
        uVar8 = *(undefined4 *)(puVar29 + 4);
        uVar9 = *(undefined4 *)((longlong)puVar29 + 0x24);
        uVar10 = *(undefined4 *)(puVar29 + 5);
        uVar11 = *(undefined4 *)((longlong)puVar29 + 0x2c);
        *(undefined4 *)local_80 = *(undefined4 *)puVar29;
        *(undefined4 *)((longlong)local_80 + 4) = uVar1;
        *(undefined4 *)(local_80 + 1) = uVar2;
        *(undefined4 *)((longlong)local_80 + 0xc) = uVar3;
        *(undefined4 *)(local_80 + 2) = uVar4;
        *(undefined4 *)((longlong)local_80 + 0x14) = uVar5;
        *(undefined4 *)(local_80 + 3) = uVar6;
        *(undefined4 *)((longlong)local_80 + 0x1c) = uVar7;
        *(undefined4 *)(local_80 + 4) = uVar8;
        *(undefined4 *)((longlong)local_80 + 0x24) = uVar9;
        *(undefined4 *)(local_80 + 5) = uVar10;
        *(undefined4 *)((longlong)local_80 + 0x2c) = uVar11;
        *(undefined8 *)((longlong)local_80 + 0x2d) = *(undefined8 *)((longlong)puVar29 + 0x2d);
        if (local_80 != puVar29) {
          iVar21 = *(int *)(puVar29 + 8);
          _Src = (void *)puVar29[7];
          *(int *)(local_80 + 8) = iVar21;
          if ((longlong)iVar21 == 0) {
            *(undefined4 *)((longlong)local_80 + 0x44) = 0;
          }
          else {
            puVar29 = local_80 + 7;
            FUN_1446dd670(puVar29,iVar21,0);
            memcpy((void *)*puVar29,_Src,(longlong)iVar21 * 2);
          }
        }
        local_70 = &local_80;
        local_78 = lVar24;
        FUN_1406fdf00(param_2,local_64,&local_78,0);
        uVar27 = *(uint *)(local_a0 + 5);
        plVar28 = local_a0;
        uVar26 = (uint)local_90;
      }
      uVar26 = uVar26 & ~(uint)uVar22;
      puVar12 = (uint *)plVar28[4];
      if ((uint *)plVar28[4] == (uint *)0x0) {
        puVar12 = local_98;
      }
      iVar21 = (int)uVar23;
      lVar24 = (longlong)iVar21;
      uVar14 = puVar12[lVar24] & uVar26;
      if (uVar14 == 0) {
        iVar15 = uVar27 + 0x1e;
        if (-1 < (int)(uVar27 - 1)) {
          iVar15 = uVar27 - 1;
        }
        iVar15 = iVar15 >> 5;
        iVar20 = iVar20 + 0x20;
        iVar16 = iVar15;
        if (iVar15 < iVar21) {
          iVar16 = iVar21;
        }
        if (iVar21 < iVar15) {
          lVar25 = 0;
          do {
            uVar14 = puVar12[lVar24 + lVar25 + 1];
            if (uVar14 != 0) {
              uVar23 = (ulonglong)(iVar21 + (int)lVar25 + 1);
              uVar26 = 0xffffffff;
              goto LAB_1406fdc4a;
            }
            iVar20 = iVar20 + 0x20;
            lVar25 = lVar25 + 1;
          } while (iVar16 - lVar24 != lVar25);
          uVar26 = 0xffffffff;
          iVar21 = iVar16;
        }
        uVar23 = (ulonglong)(iVar21 + 1);
        plVar28 = local_a0;
        uVar14 = uVar27;
      }
      else {
LAB_1406fdc4a:
        uVar22 = (ulonglong)(-uVar14 & uVar14);
        uVar19 = uVar22 * 2 + 1;
        lVar24 = 0x3f;
        if (uVar19 != 0) {
          for (; uVar19 >> lVar24 == 0; lVar24 = lVar24 + -1) {
          }
        }
        uVar14 = (iVar20 - ((uint)lVar24 ^ 0x3f)) + 0x3e;
        if ((int)uVar27 <= (int)uVar14) {
          uVar14 = uVar27;
        }
      }
    } while (uVar14 != (uint)local_88);
  }
LAB_1406fdcf3:
  if ((local_60 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1406fdf00 FUN_1406fdf00 body=358 status=ok
// SIG undefined FUN_1406fdf00(void)

undefined4 *
FUN_1406fdf00(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  char cVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1406fe100(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  uVar2 = *(undefined8 *)*param_3;
  *local_40 = uVar2;
  local_40[1] = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar8 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar5 = (uint)uVar2 & 0xffff;
  uVar8 = ((uint)uVar2 << 0x10 | uVar5) + (int)((ulonglong)uVar2 >> 0x20) +
          (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar5 >> 4);
  local_58 = param_4;
  cVar3 = FUN_1406fe068(param_1,uVar8,local_40);
  if (cVar3 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar5 < 4) {
      iVar6 = 1;
    }
    else {
      uVar4 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar8 = *(int *)(param_1 + 0x48) - 1U & uVar8;
      *(uint *)((longlong)local_40 + 0x14) = uVar8;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
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
      FUN_1403692e0(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406fe068 FUN_1406fe068 body=152 status=ok
// SIG undefined FUN_1406fe068(void)

void FUN_1406fe068(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
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
          FUN_1488d2138((int)lVar3,*param_4,1);
          *param_4 = iVar7;
          uVar5 = 1;
          break;
        }
        iVar7 = (int)plVar6[2];
        uVar5 = 0;
      } while (iVar7 != -1);
      goto LAB_1406fe0b3;
    }
  }
  uVar5 = 0;
LAB_1406fe0b3:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar5;
  }
  return;
}



// FUNCTION 1406fe100 FUN_1406fe100 body=709 status=ok
// SIG undefined FUN_1406fe100(void)

int * FUN_1406fe100(longlong *param_1,int *param_2)

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
                    if (((&DAT_14c841d90)[uVar17 & 0xffffffff] & 0xf) == 0) goto LAB_1406fe2e1;
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
LAB_1406fe2e1:
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



// FUNCTION 1406fe3c6 FUN_1406fe3c6 body=213 status=ok
// SIG undefined FUN_1406fe3c6(void)

void FUN_1406fe3c6(longlong param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = (longlong)param_2 * 0x10;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      if (uVar1 < 0x7ff1) {
        uVar1 = (ulonglong)
                (ushort)(&DAT_14c841d90)
                        [0x32 - (byte)(&DAT_14c841e00)[(longlong)param_2 & 0xfffffffffffffff]];
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
      uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar1,4);
    }
  }
  uVar3 = 0x7fffffff;
  if (param_2 <= (int)(uVar1 >> 4)) {
    uVar3 = uVar1 >> 4 & 0xffffffff;
  }
  iVar2 = (int)uVar3;
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  else {
    FUN_1446f8d3c(param_1,0,uVar3,0x10,4);
  }
  *(int *)(param_1 + 0xc) = iVar2;
  return;
}



// FUNCTION 1406fe49c FUN_1406fe49c body=330 status=ok
// SIG undefined FUN_1406fe49c(void)

void FUN_1406fe49c(longlong param_1,int param_2,int param_3)

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
    uVar4 = (longlong)param_2 * 0x68;
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
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1406fe50a;
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
LAB_1406fe50a:
    iVar5 = (int)(uVar4 / 0x68);
    iVar7 = 0x7fffffff;
    if (param_2 <= iVar5) {
      iVar7 = iVar5;
    }
  }
  if (param_3 < iVar7) {
    FUN_1446f8d3c(param_1,0,iVar7,0x68,8);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1406fe5e6 FUN_1406fe5e6 body=323 status=ok
// SIG undefined FUN_1406fe5e6(void)

undefined8 FUN_1406fe5e6(longlong param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  undefined1 auVar3 [16];
  undefined8 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  uVar5 = (longlong)param_2 * 0x28;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar8 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar8 >> 4]];
      }
      else {
        if ((uVar8 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar2 = (&DAT_14c841e00)[uVar8 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar2) {
            uVar6 = (ulonglong)bVar2;
          }
          uVar9 = 0x32 - (ulonglong)bVar2;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar9 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar9 & 0xffffffff] & 0xf) == 0) goto LAB_1406fe64c;
            lVar1 = uVar6 + 1 + uVar9;
            uVar9 = uVar9 - 1;
          } while (lVar1 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar8 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
    }
  }
LAB_1406fe64c:
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar5;
  uVar4 = SUB168(auVar3 * ZEXT816(0xcccccccccccccccd),0);
  uVar8 = 0x7fffffff;
  if (param_2 <= (int)(uVar5 / 0x28)) {
    uVar8 = uVar5 / 0x28 & 0xffffffff;
  }
  iVar7 = (int)uVar8;
  if (iVar7 < 1) {
    iVar7 = 0;
  }
  else {
    uVar4 = FUN_1446f8d3c(param_1,0,uVar8,0x28,8);
  }
  *(int *)(param_1 + 0xc) = iVar7;
  return uVar4;
}



// FUNCTION 1406fe729 FUN_1406fe729 body=145 status=ok
// SIG undefined FUN_1406fe729(void)

void FUN_1406fe729(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  plVar3 = (longlong *)FUN_1406fe7ba();
  iVar1 = (int)plVar3[1];
  *(uint *)(plVar3 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)plVar3 + 0xc) < iVar1 + 1U) {
    FUN_14573bc4e(plVar3,iVar1);
  }
  lVar2 = *plVar3;
  lVar4 = (longlong)iVar1 * 0x20;
  *(undefined8 *)(lVar2 + lVar4) = param_1;
  *(undefined8 *)(lVar2 + 8 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = param_2;
  *(undefined8 *)(lVar2 + 0x18 + lVar4) = param_4;
  FUN_14058d631(param_2,param_3,2,0,param_1,0,0);
  return;
}



// FUNCTION 1406fe7ba FUN_1406fe7ba body=116 status=ok
// SIG undefined FUN_1406fe7ba(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1406fe7ba(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c964078) {
    FUN_144b3d300(&DAT_14c964078);
    if (DAT_14c964078 == -1) {
      DAT_14c964060 = 0;
      uRam000000014c964068 = 0;
      _DAT_14c964070 = 0;
      atexit((_func_5014 *)&LAB_14282d712);
      _Init_thread_footer(&DAT_14c964078);
    }
  }
  return &DAT_14c964060;
}



// FUNCTION 1406fe82e FUN_1406fe82e body=197 status=ok
// SIG undefined FUN_1406fe82e(void)

short * FUN_1406fe82e(longlong *param_1,uint param_2,short *param_3,undefined8 param_4)

{
  short *psVar1;
  int iVar2;
  longlong *plVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  short *local_30;
  undefined8 local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      do {
        psVar1 = (short *)(*param_1 + (longlong)iVar2 * 0x18);
        if (*psVar1 == *param_3) {
          if (psVar1 != (short *)0x0) goto LAB_1406fe8cb;
          break;
        }
        iVar2 = *(int *)(psVar1 + 8);
      } while (iVar2 != -1);
    }
  }
  local_38 = 0;
  local_30 = param_3;
  local_28 = param_4;
  FUN_1406fe8f4(param_1,&local_1c,param_2,&local_30);
  psVar1 = (short *)(*param_1 + (longlong)local_1c * 0x18);
LAB_1406fe8cb:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return psVar1 + 4;
}



// FUNCTION 1406fe8f4 FUN_1406fe8f4 body=308 status=ok
// SIG undefined FUN_1406fe8f4(void)

undefined4 *
FUN_1406fe8f4(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_58 [2];
  undefined2 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1406feabe(param_1,local_58);
  puVar1 = (undefined8 *)param_4[1];
  *local_50 = *(undefined2 *)*param_4;
  *(undefined8 *)(local_50 + 4) = *puVar1;
  *(undefined4 *)(local_50 + 8) = 0xffffffff;
  local_68 = param_5;
  cVar2 = FUN_1406fea2a(param_1,param_3,local_50,local_58);
  if (cVar2 == '\0') {
    uVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar3 < 4) {
      iVar5 = 1;
    }
    else {
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
      *(uint *)(local_50 + 10) = param_3;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(local_50 + 8) =
           *(undefined4 *)
            (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_58[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_1406feca4(param_1);
    }
  }
  *param_2 = local_58[0];
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406fea2a FUN_1406fea2a body=147 status=ok
// SIG undefined FUN_1406fea2a(void)

void FUN_1406fea2a(longlong *param_1,uint param_2,short *param_3,int *param_4,undefined1 *param_5)

{
  short *psVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  longlong *plVar7;
  int iVar8;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar7 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[8];
    }
    iVar8 = *(int *)((longlong)plVar7 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar8 != -1) {
      do {
        psVar1 = (short *)(*param_1 + (longlong)iVar8 * 0x18);
        if (*psVar1 == *param_3) {
          uVar2 = *(undefined4 *)param_3;
          uVar3 = *(undefined4 *)(param_3 + 2);
          uVar4 = *(undefined4 *)(param_3 + 4);
          uVar5 = *(undefined4 *)(param_3 + 6);
          *(undefined4 *)psVar1 = uVar2;
          *(undefined4 *)(psVar1 + 2) = uVar3;
          *(undefined4 *)(psVar1 + 4) = uVar4;
          *(undefined4 *)(psVar1 + 6) = uVar5;
          FUN_148966aec(uVar2,*param_4);
          *param_4 = iVar8;
          uVar6 = 1;
          break;
        }
        iVar8 = *(int *)(psVar1 + 8);
        uVar6 = 0;
      } while (iVar8 != -1);
      goto LAB_1406fea94;
    }
  }
  uVar6 = 0;
LAB_1406fea94:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar6;
  }
  return;
}



// FUNCTION 1406feabe FUN_1406feabe body=485 status=ok
// SIG undefined FUN_1406feabe(void)

int * FUN_1406feabe(longlong *param_1,int *param_2)

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
      FUN_14482b872(param_1,iVar11);
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
    iVar6 = *(int *)(*param_1 + 4 + lVar3 * 0x18);
    *(int *)(param_1 + 6) = iVar6;
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar6 * 0x18) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar3 * 0x18 + *param_1;
  return param_2;
}



// FUNCTION 1406feca4 FUN_1406feca4 body=626 status=ok
// SIG undefined FUN_1406feca4(void)

void FUN_1406feca4(longlong *param_1)

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
    if ((int)uVar7 < 1) goto LAB_1406fed16;
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
LAB_1406fed16:
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
      uVar15 = (longlong)(int)param_1[9] - 1U & (longlong)*(short *)(lVar6 + lVar12 * 0x18);
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



// FUNCTION 1406fef16 FUN_1406fef16 body=40 status=ok
// SIG undefined FUN_1406fef16(void)

undefined8 FUN_1406fef16(undefined8 param_1,int param_2)

{
  FUN_1406fef3e();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1406fef3e FUN_1406fef3e body=189 status=ok
// SIG undefined FUN_1406fef3e(void)

void FUN_1406fef3e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a6ba460;
  FUN_144760e21(param_1[0x20],*(undefined4 *)(param_1 + 0x21));
  if (param_1[0x20] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x1d],*(undefined4 *)(param_1 + 0x1e));
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x1b) = 0;
  if (param_1[0x1a] != 0) {
    FUN_1400020a8();
  }
  FUN_1406feffc(param_1 + 0x12);
  *(undefined4 *)(param_1 + 0x11) = 0;
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  FUN_14064e7da(param_1 + 8);
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 1406feffc FUN_1406feffc body=55 status=ok
// SIG undefined FUN_1406feffc(void)

void FUN_1406feffc(longlong *param_1)

{
  FUN_1406ff034(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1406ff034 FUN_1406ff034 body=123 status=ok
// SIG undefined FUN_1406ff034(void)

void FUN_1406ff034(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_1405b3ec2(param_1,param_2);
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



// FUNCTION 1406ff0b0 FUN_1406ff0b0 body=40 status=ok
// SIG undefined FUN_1406ff0b0(void)

undefined8 FUN_1406ff0b0(undefined8 param_1,int param_2)

{
  FUN_1406ff0d8();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1406ff0d8 FUN_1406ff0d8 body=76 status=ok
// SIG undefined FUN_1406ff0d8(void)

void FUN_1406ff0d8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a3bdb00;
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 1406ff124 FUN_1406ff124 body=533 status=ok
// SIG undefined FUN_1406ff124(void)

void FUN_1406ff124(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  wchar_t *local_68;
  code *local_60;
  undefined1 *local_58;
  undefined8 *local_50;
  code *local_48;
  code *local_40;
  undefined8 local_30;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1406ff33a();
  local_30 = *(code **)(*(longlong *)(param_1 + 0x48) + 0x98);
  plVar1 = (longlong *)
           FUN_14030a1e6(*(longlong *)(param_1 + 0x48) + 0x80,*(longlong *)(param_1 + 0x40) + 0x240,
                         &local_30);
  if (plVar1 != (longlong *)0x0) {
    if (DAT_14cb20e58 == 0) {
      local_30 = FUN_1449e2820;
      local_40 = FUN_14081d0ea;
      local_48 = FUN_1427b09ee;
      local_58 = &LAB_147f14d13;
      local_60 = FUN_1464313b0;
      local_68 = L"Engine";
      local_70 = 0;
      local_78 = 0x10004001;
      local_80 = 8;
      local_88 = 0x28;
      local_50 = &local_30;
      FUN_14081cfa3(L"/Script/GbxAI",L"GbxAggroInterface",&DAT_14cb20e58,&DAT_147f14d12);
    }
    lVar2 = (**(code **)(*plVar1 + 0x288))(plVar1,DAT_14cb20e58);
    if (lVar2 != 0) {
      if (DAT_14cb20e58 == 0) {
        local_30 = FUN_1449e2820;
        local_40 = FUN_14081d0ea;
        local_48 = FUN_1427b09ee;
        local_58 = &LAB_147f14d13;
        local_60 = FUN_1464313b0;
        local_68 = L"Engine";
        local_70 = 0;
        local_78 = 0x10004001;
        local_80 = 8;
        local_88 = 0x28;
        local_50 = &local_30;
        FUN_14081cfa3(L"/Script/GbxAI",L"GbxAggroInterface",&DAT_14cb20e58,&DAT_147f14d12);
      }
      lVar3 = FUN_144718840(lVar2,DAT_14cb20e58);
      if (lVar2 != lVar3) goto LAB_1406ff1c1;
    }
  }
  lVar3 = 0;
LAB_1406ff1c1:
  FUN_1406ff398(&local_30,lVar3);
  *(undefined4 *)(param_1 + 0x60) = (undefined4)local_30;
  *(undefined4 *)(param_1 + 100) = local_30._4_4_;
  *(undefined4 *)(param_1 + 0x68) = uStack_28;
  *(undefined4 *)(param_1 + 0x6c) = uStack_24;
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406ff33a FUN_1406ff33a body=94 status=ok
// SIG undefined FUN_1406ff33a(void)

void FUN_1406ff33a(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  undefined4 uVar3;
  
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined1 *)(param_1 + 0x55) = 0;
  lVar1 = *(longlong *)(param_1 + 0x48);
  cVar2 = FUN_140337e44(lVar1 + 0x38,*(longlong *)(param_1 + 0x40) + 0x240,lVar1 + 0x50);
  *(bool *)(param_1 + 0x54) = *(char *)(lVar1 + 0x51) != cVar2;
  uVar3 = FUN_140309e34(*(longlong *)(param_1 + 0x48) + 0x58,*(longlong *)(param_1 + 0x40) + 0x240,
                        *(longlong *)(param_1 + 0x48) + 0x70);
  *(undefined4 *)(param_1 + 0x58) = uVar3;
  return;
}



// FUNCTION 1406ff398 FUN_1406ff398 body=204 status=ok
// SIG undefined FUN_1406ff398(void)

uint * FUN_1406ff398(uint *param_1,longlong *param_2)

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



// FUNCTION 1406ff464 FUN_1406ff464 body=148 status=ok
// SIG undefined FUN_1406ff464(void)

undefined8 * FUN_1406ff464(undefined8 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  
  FUN_1406ff4f8(param_1,param_2,0);
  *param_1 = &PTR_FUN_14a8adfe0;
  memset(param_1 + 0x53,0,0xb0);
  uVar1 = FUN_140f36250(&DAT_149e063b2,0);
  *(undefined4 *)(param_1 + 0x69) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x34c) = 0x44bb8000;
  FUN_140056680(param_1 + 0x6a,&DAT_149e063b2);
  param_1[0x6c] = 0;
  *(undefined4 *)(param_1 + 0x6d) = 0;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0x6400000001;
  param_1[0x70] = 0;
  return param_1;
}



// FUNCTION 1406ff4f8 FUN_1406ff4f8 body=289 status=ok
// SIG undefined FUN_1406ff4f8(void)

undefined8 FUN_1406ff4f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_148 [40];
  undefined **local_120;
  undefined8 local_118;
  undefined1 local_110;
  undefined8 local_10c;
  undefined5 uStack_104;
  undefined3 uStack_ff;
  undefined5 uStack_fc;
  undefined8 uStack_f7;
  undefined1 local_ef;
  undefined8 local_ec;
  undefined2 local_e4;
  undefined4 local_e0;
  undefined1 local_dc;
  undefined4 local_db;
  undefined2 local_d7;
  undefined4 local_d4;
  undefined1 local_d0;
  undefined8 local_cc;
  undefined8 uStack_c4;
  undefined8 local_bc;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  longlong lStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_40;
  undefined4 local_38;
  undefined1 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_120 = &PTR_FUN_14a9758a8;
  local_ef = 2;
  local_e0 = 0;
  local_dc = 0;
  local_ec = 0;
  local_e4 = 0;
  local_db = 0x10401;
  local_d7 = 0;
  local_d4 = 0;
  local_d0 = 0;
  local_cc = 0;
  uStack_c4 = 0;
  local_bc = 0xffffffff3f800000;
  local_40 = 0;
  local_38 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 0;
  lStack_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  local_30 = 1;
  local_2c = 0;
  local_118 = 0x20302200ab7c2;
  local_110 = 0;
  local_10c = 0;
  uStack_104 = 0;
  uStack_ff = 0;
  uStack_fc = 0;
  uStack_f7 = 0;
  FUN_1401eadec(&local_120);
  FUN_1403fc5fe(param_1,&local_120,param_3);
  local_120 = &PTR_FUN_14a9758a8;
  if (lStack_98 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406ff61a FUN_1406ff61a body=112 status=ok
// SIG undefined FUN_1406ff61a(void)

void FUN_1406ff61a(longlong param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if ((*(byte *)(param_1 + 0xa4) & 4) == 0) {
    uVar2 = (undefined4)*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x310);
    if ((*(longlong *)(*(longlong *)(param_1 + 0x58) + 0xf0) == 0) &&
       (*(longlong *)(param_1 + 0x1d50) != 0)) {
      FUN_1406ff68a(*(longlong *)(param_1 + 0x1d50),uVar2);
    }
    lVar1 = *(longlong *)(param_1 + 0x1d58);
    if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x10) != 0)) {
      FUN_147bdaf86(lVar1,uVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1406ff68a FUN_1406ff68a body=882 status=ok
// SIG undefined FUN_1406ff68a(void)

void FUN_1406ff68a(longlong param_1,double param_2)

{
  undefined4 *puVar1;
  double dVar2;
  double dVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  *(undefined1 *)(param_1 + 0x48) = 1;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  if (*(char *)(param_1 + 0x10a8) == '\x01') {
    dVar2 = param_2 + 0.005;
    if (param_2 + 0.005 <= *(double *)(param_1 + 0x1350)) {
      dVar2 = *(double *)(param_1 + 0x1350);
    }
    *(double *)(param_1 + 0x1350) = dVar2;
    if (0 < *(int *)(param_1 + 0x10ac)) {
      dVar2 = *(double *)(param_1 + 0x1338);
      uVar10 = SUB84(dVar2,0);
      uVar11 = (undefined4)((ulonglong)dVar2 >> 0x20);
      if ((dVar2 != 0.0) || (NAN(dVar2))) {
        dVar3 = *(double *)(param_1 + 0x1340);
        if (dVar2 < dVar3) {
          *(double *)(param_1 + 0x1338) = dVar3;
          uVar10 = SUB84(dVar3,0);
          uVar11 = (undefined4)((ulonglong)dVar3 >> 0x20);
        }
        if ((int)((param_2 - (double)CONCAT44(uVar11,uVar10)) * 1000.0) < *(int *)(param_1 + 0x10ac)
           ) {
          if ((*(char *)(param_1 + 0x11f0) == '\x01') &&
             (*(int *)(param_1 + 0x10b0) < (int)((param_2 - *(double *)(param_1 + 0x11f8)) * 1000.0)
             )) {
            *(undefined1 *)(param_1 + 0x11f0) = 0;
          }
        }
        else {
          *(undefined1 *)(param_1 + 0x11f0) = 1;
          *(double *)(param_1 + 0x11f8) = param_2;
        }
      }
    }
    if ('\0' < *(char *)(param_1 + 0x11e0)) {
      dVar2 = param_2 - *(double *)(param_1 + 0x11e8);
      if (((0 < *(short *)(param_1 + 0x1e)) &&
          (uVar8 = 2, (double)(int)*(short *)(param_1 + 0x1e) < dVar2)) ||
         ((0 < *(short *)(param_1 + 0x20) &&
          (uVar8 = 1, (double)(int)*(short *)(param_1 + 0x20) < dVar2)))) {
        FUN_1435a915a(param_1,uVar8);
      }
    }
    dVar2 = *(double *)(param_1 + 0x10e0);
    if (((dVar2 != 0.0) || (NAN(dVar2))) && (dVar2 < param_2)) {
      if (*(char *)(param_1 + 0xb) == '\0') {
        *(undefined1 *)(param_1 + 0x1358) = 0;
      }
      *(undefined8 *)(param_1 + 0x10e0) = 0;
    }
    if (1.0 < param_2 - *(double *)(param_1 + 0x1210)) {
      iVar5 = *(int *)(param_1 + 0x1228) + 1;
      iVar7 = 0;
      if (iVar5 < *(int *)(param_1 + 0x1220)) {
        iVar7 = iVar5;
      }
      *(int *)(param_1 + 0x1228) = iVar7;
      uVar10 = *(undefined4 *)(param_1 + 0x1204);
      uVar11 = *(undefined4 *)(param_1 + 0x1208);
      uVar4 = *(undefined4 *)(param_1 + 0x120c);
      puVar1 = (undefined4 *)(*(longlong *)(param_1 + 0x1218) + (longlong)iVar7 * 0x10);
      *puVar1 = *(undefined4 *)(param_1 + 0x1200);
      puVar1[1] = uVar10;
      puVar1[2] = uVar11;
      puVar1[3] = uVar4;
      *(double *)(param_1 + 0x1210) = param_2;
      *(undefined4 *)(param_1 + 0x1200) = 0;
      *(undefined8 *)(param_1 + 0x1208) = 0;
      FUN_147be43ca(param_1,*(longlong *)(param_1 + 0x11d0) +
                            (longlong)*(char *)(param_1 + 0x11e0) * 0x78 + 0x60,param_1 + 0x1230,
                    0xffffffff);
      *(char *)(param_1 + 0x1330) = *(char *)(param_1 + 0x1330) + '\x01';
      if ((0 < *(int *)(param_1 + 0x13b8)) &&
         (dVar2 = *(double *)(param_1 + 0x13c0), uVar6 = rand(),
         (double)((float)(uVar6 & 0x7fff) / 32767.0) * 5.0 + 0.0 + 30.0 < param_2 - dVar2)) {
        FUN_147be447a(param_1,param_2);
      }
      if (((*(char *)(param_1 + 0x1358) == '\x01') &&
          (*(int *)(param_1 + 0x1420) == *(int *)(param_1 + 0x1428))) &&
         (dVar2 = *(double *)(param_1 + 0x1458), uVar6 = rand(),
         (double)((float)(uVar6 & 0x7fff) / 32767.0) * 5.0 + 0.0 + 5.0 < param_2 - dVar2)) {
        *(double *)(param_1 + 0x1458) = param_2;
        *(undefined8 *)(param_1 + 0x1450) = 0xbff0000000000000;
        if ((longlong)*(int *)(param_1 + 0x1420) != 0) {
          uVar10 = 0;
          uVar11 = 0xbff00000;
          lVar9 = 0;
          do {
            dVar2 = *(double *)(*(longlong *)(*(longlong *)(param_1 + 0x1418) + lVar9) + 0x10);
            if (((double)CONCAT44(uVar11,uVar10) <= 0.0 && (double)CONCAT44(uVar11,uVar10) != 0.0)
               || (dVar2 <= (double)CONCAT44(uVar11,uVar10) &&
                   (double)CONCAT44(uVar11,uVar10) != dVar2)) {
              *(double *)(param_1 + 0x1450) = dVar2;
              uVar10 = SUB84(dVar2,0);
              uVar11 = (undefined4)((ulonglong)dVar2 >> 0x20);
            }
            lVar9 = lVar9 + 0x10;
          } while ((longlong)*(int *)(param_1 + 0x1420) * 0x10 != lVar9);
        }
      }
    }
  }
  *(double *)(param_1 + 0x1340) = param_2;
  return;
}



// FUNCTION 1406ffa02 FUN_1406ffa02 body=57 status=ok
// SIG undefined FUN_1406ffa02(void)

void FUN_1406ffa02(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5a6d8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5a6d8 = FUN_140002ddd(FUN_1464ca908,uVar1,L"GbxBodyNodeState_HitRegion");
  }
  return;
}



// FUNCTION 1406ffa3b FUN_1406ffa3b body=599 status=ok
// SIG undefined FUN_1406ffa3b(void)

void FUN_1406ffa3b(undefined8 param_1,undefined8 param_2,byte *param_3,undefined4 param_4,
                  undefined4 param_5,char param_6,undefined8 param_7)

{
  undefined4 uVar1;
  char cVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined1 auStack_118 [32];
  undefined1 *local_f8;
  undefined1 *local_f0;
  undefined1 *local_e8;
  undefined1 *local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  byte *local_c0;
  undefined2 *local_b8;
  char *local_b0;
  undefined1 *local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  undefined4 *local_80;
  undefined8 local_78;
  undefined1 local_6e;
  ulonglong local_6d;
  undefined2 local_65;
  undefined1 local_62;
  longlong local_61;
  undefined2 local_59;
  undefined1 local_56;
  undefined1 local_55;
  undefined1 local_54;
  undefined1 local_53;
  undefined1 local_52;
  undefined2 local_51;
  undefined1 local_4f;
  undefined1 local_4d;
  undefined1 local_4c;
  undefined4 local_4b;
  undefined2 local_47;
  undefined1 local_44;
  undefined1 local_43;
  undefined1 local_42;
  undefined4 local_41;
  undefined1 local_3d;
  char local_3b;
  undefined2 local_3a;
  ulonglong local_38;
  
  uVar3 = param_7;
  cVar2 = param_6;
  uVar1 = param_5;
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_3a = (undefined2)param_4;
  uVar4 = FUN_1406ffc93();
  local_3d = 0;
  local_41 = 0;
  local_3b = (char)uVar4;
  local_55 = (byte)(local_3b - 2U) < 3;
  local_54 = local_3b == '\x01';
  local_47 = 0;
  local_4b = 0;
  local_6e = cVar2 == '\x01';
  local_4f = 0;
  local_51 = 0;
  local_59 = 0;
  local_65 = 0;
  local_53 = 0;
  local_61 = (ulonglong)(byte)local_6e << 0x10;
  local_6d._0_3_ = (uint3)(byte)local_6e << 0x10;
  local_6d = (ulonglong)CONCAT43(0x1010000,(int3)local_6d);
  local_62 = local_6e;
  local_56 = local_6e;
  local_52 = local_6e;
  local_4d = local_6e;
  local_4c = local_6e;
  local_44 = local_6e;
  local_43 = local_54;
  local_42 = local_6e;
  if ((*param_3 & 0x40) == 0) {
    local_b8 = &local_3a;
    local_b0 = &local_3b;
    local_a8 = &local_44;
    local_a0 = &local_4d;
    local_98 = &local_56;
    local_90 = &local_62;
    local_88 = &local_6e;
    local_80 = &param_5;
    local_78 = uVar3;
    local_c8 = param_2;
    local_c0 = param_3;
    FUN_1406ffd46(&local_c8,0,0);
    FUN_1406ffd46(&local_c8,0,1);
    FUN_1406ffd46(&local_c8,1,0);
  }
  else {
    local_d0 = uVar3;
    local_d8 = uVar1;
    local_e0 = &local_6e;
    local_e8 = &local_62;
    local_f0 = &local_56;
    local_f8 = &local_4d;
    FUN_1406fff77(param_2,param_4,uVar4,&local_44);
  }
  if ((local_38 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406ffc93 FUN_1406ffc93 body=179 status=ok
// SIG undefined FUN_1406ffc93(void)

ulonglong FUN_1406ffc93(ulonglong param_1)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  DWORD DVar4;
  DWORD DVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  cVar3 = FUN_142e0b61f();
  lVar6 = DAT_14ca14288;
  if (cVar3 == '\0') {
    iVar2 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar2 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar2 == 2)) {
      uVar8 = 0;
    }
    else if (iVar2 == 1) {
      DVar4 = FUN_140ad26c0();
      DVar5 = GetCurrentThreadId();
      uVar8 = (ulonglong)(DVar4 != DVar5);
    }
    else {
      uVar8 = 1;
    }
    uVar7 = (ulonglong)DAT_14ca84e09;
    if (*(int *)(lVar6 + uVar8 * 4) == 0) {
      uVar7 = 0;
    }
  }
  else {
    lVar6 = (param_1 & 0xffff) * 0x3c;
    uVar1 = *(uint *)((longlong)&DAT_14ca814d0 + lVar6);
    uVar7 = CONCAT71((int7)((ulonglong)lVar6 >> 8),3);
    if ((uVar1 & 0x1ff800) != 0x10000) {
      uVar7 = (ulonglong)(byte)(((byte)(uVar1 >> 0x15) & 1) * '\x02' + 2);
    }
  }
  return uVar7;
}



// FUNCTION 1406ffd46 FUN_1406ffd46 body=560 status=ok
// SIG undefined FUN_1406ffd46(void)

void FUN_1406ffd46(longlong *param_1,char param_2,byte param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  code *pcVar8;
  byte bVar9;
  bool bVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  undefined1 auStack_e8 [32];
  byte local_c8;
  byte local_c0;
  undefined1 local_b8;
  undefined1 local_b0;
  undefined1 local_a8;
  undefined1 local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong local_78;
  undefined4 local_70;
  longlong local_68;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  byte local_40;
  undefined1 local_3f;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_58 = 0;
  local_50 = 0x40800000;
  uStack_4c = 0x3f000000;
  uStack_48 = 0x40800000;
  uStack_44 = 0x3f800000;
  local_3f = 0;
  bVar9 = 6;
  if (param_2 != '\0') {
    bVar9 = 0;
  }
  bVar4 = (**(code **)(*(longlong *)*param_1 + 0x38))();
  local_40 = (byte)(*(uint *)param_1[1] >> 4) & 0x10 | bVar4 | (param_3 ^ 1) << 3 | bVar9;
  plVar1 = (longlong *)*param_1;
  cVar5 = (**(code **)(*plVar1 + 0x458))();
  bVar10 = true;
  if (cVar5 == '\0') {
    iVar6 = (**(code **)(*plVar1 + 0x408))();
    bVar10 = 0 < iVar6;
  }
  if (plVar1[2] == 0) {
    local_c8 = 0;
    local_c0 = 0;
    uVar12 = 0;
  }
  else {
    lVar2 = *(longlong *)(plVar1[2] + 0x28);
    bVar9 = *(byte *)(lVar2 + 0x246);
    local_c0 = (*(byte *)(lVar2 + 0x247) & 0x20) >> 5;
    local_c8 = (bVar9 & 0x40) >> 6;
    uVar11 = CONCAT71((int7)((ulonglong)param_4 >> 8),bVar9) & 0xffffffffffffff10;
    uVar12 = CONCAT71((int7)(uVar11 >> 8),(byte)uVar11 >> 4);
  }
  uVar7 = FUN_142e2773b(plVar1,&local_58,bVar10,uVar12);
  plVar1 = (longlong *)*param_1;
  pcVar8 = *(code **)(*plVar1 + 0x38);
  if (pcVar8 == FUN_144765e18) {
    plVar3 = (longlong *)plVar1[9];
    if (plVar3 != (longlong *)0x0) {
      if (*(code **)(*plVar3 + 0x420) != (code *)&LAB_14497e108) {
        (**(code **)(*plVar3 + 0x420))(plVar3);
      }
      goto LAB_1406ffe7b;
    }
    pcVar8 = *(code **)(*(longlong *)plVar1[8] + 0x420);
    if (pcVar8 == (code *)&LAB_144b24e8a) goto LAB_1406ffe7b;
  }
  (*pcVar8)();
LAB_1406ffe7b:
  local_68 = param_1[10];
  local_70 = *(undefined4 *)param_1[9];
  local_78 = param_1[8];
  local_88 = (undefined4)param_1[6];
  uStack_84 = *(undefined4 *)((longlong)param_1 + 0x34);
  uStack_80 = (undefined4)param_1[7];
  uStack_7c = *(undefined4 *)((longlong)param_1 + 0x3c);
  local_98 = (undefined4)param_1[4];
  uStack_94 = *(undefined4 *)((longlong)param_1 + 0x24);
  uStack_90 = (undefined4)param_1[5];
  uStack_8c = *(undefined4 *)((longlong)param_1 + 0x2c);
  local_c8 = (uVar7 & 6) != 0;
  local_a8 = (undefined1)((uVar7 & 8) >> 3);
  local_b0 = (undefined1)((uVar7 & 0x20) >> 5);
  local_b8 = (undefined1)((uVar7 & 0x10) >> 4);
  local_c0 = (byte)((uVar7 & 0x40) >> 6);
  local_a0 = 0;
  FUN_14070019e(*param_1,*(undefined2 *)param_1[2],*(undefined1 *)param_1[3],(uVar7 & 0x409) != 0);
  if ((local_38 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406fff77 FUN_1406fff77 body=551 status=ok
// SIG undefined FUN_1406fff77(void)

void FUN_1406fff77(undefined8 param_1,undefined2 param_2,undefined1 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9,undefined8 param_10)

{
  bool bVar1;
  undefined1 uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  char cVar9;
  byte bVar10;
  undefined4 uVar11;
  undefined1 uVar12;
  bool bVar13;
  undefined1 uVar14;
  bool bVar15;
  bool bVar16;
  undefined1 uVar17;
  
  bVar3 = true;
  uVar11 = 0;
  do {
    uVar2 = 0;
    bVar1 = true;
    do {
      bVar6 = bVar1;
      uVar12 = 0;
      bVar1 = true;
      do {
        bVar7 = bVar1;
        bVar16 = false;
        bVar1 = true;
        do {
          bVar4 = bVar1;
          bVar1 = false;
          bVar8 = true;
          do {
            bVar5 = bVar8;
            uVar14 = 0;
            bVar8 = true;
            do {
              bVar15 = bVar8;
              uVar17 = 0;
              bVar8 = true;
              do {
                bVar13 = bVar8;
                if (bVar1) {
                  cVar9 = FUN_1449373d8();
                  if (cVar9 != '\0') goto LAB_14070003a;
                }
                else {
LAB_14070003a:
                  if (bVar16) {
                    bVar10 = FUN_144937519();
                    if ((bVar10 & (bVar1 ^ 1U)) != 1) goto LAB_140700105;
                  }
                  FUN_14070019e(param_1,param_2,param_3,uVar11,uVar2,uVar12,bVar1,bVar16,uVar14,
                                uVar17,param_4,param_5,param_6,param_7,param_8,param_9,param_10);
                }
LAB_140700105:
                uVar17 = 1;
                bVar8 = false;
              } while (bVar13);
              uVar14 = 1;
              bVar8 = false;
            } while (bVar15);
            bVar1 = true;
            bVar8 = false;
          } while (bVar5);
          bVar16 = true;
          bVar1 = false;
        } while (bVar4);
        uVar12 = 1;
        bVar1 = false;
      } while (bVar7);
      uVar2 = 1;
    } while (bVar6);
    uVar11 = 1;
    bVar1 = !bVar3;
    bVar3 = false;
    if (bVar1) {
      return;
    }
  } while( true );
}



// FUNCTION 14070019e FUN_14070019e body=3128 status=ok
// SIG undefined FUN_14070019e(void)

/* WARNING: Removing unreachable block (ram,0x000140700ad1) */
/* WARNING: Removing unreachable block (ram,0x0001407009c6) */

void FUN_14070019e(longlong *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined1 param_5,char param_6,undefined1 param_7,undefined1 param_8,char param_9
                  ,undefined1 param_10,undefined8 param_11,undefined8 param_12,undefined8 param_13,
                  undefined8 param_14,undefined8 param_15,uint param_16,longlong *param_17)

{
  uint *puVar1;
  LPCRITICAL_SECTION p_Var2;
  undefined2 *puVar3;
  void *pvVar4;
  longlong *plVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  byte bVar9;
  byte bVar10;
  char cVar11;
  undefined8 uVar12;
  longlong *plVar13;
  longlong lVar14;
  undefined *puVar15;
  longlong *plVar16;
  bool bVar17;
  undefined1 auStack_778 [32];
  undefined4 *local_758;
  undefined1 *local_750;
  undefined1 local_748;
  char local_740;
  undefined1 local_738;
  undefined8 local_730;
  undefined8 uStack_728;
  undefined8 local_720;
  undefined8 uStack_718;
  undefined8 local_710;
  undefined1 *local_708;
  undefined1 *local_700;
  undefined1 *local_6f8;
  longlong *local_6f0;
  undefined1 local_6e2 [2];
  undefined8 local_6e0;
  undefined1 local_6d5;
  undefined4 local_6d4;
  undefined2 local_6d0 [3];
  undefined1 local_6ca [2];
  undefined8 local_6c8;
  undefined8 local_5f0;
  undefined8 uStack_5e8;
  undefined8 local_5e0;
  undefined8 uStack_5d8;
  undefined8 local_5d0;
  undefined8 uStack_5c8;
  longlong local_5c0;
  undefined8 local_5b8;
  uint local_5b0;
  undefined4 uStack_5ac;
  undefined8 uStack_5a8;
  undefined8 local_5a0 [20];
  longlong local_500;
  longlong local_4f8;
  undefined8 local_430;
  longlong local_428 [3];
  undefined1 local_410;
  undefined8 local_408;
  undefined8 uStack_400;
  longlong local_3f8;
  longlong lStack_3f0;
  longlong local_3e8;
  longlong lStack_3e0;
  undefined4 local_3d8;
  undefined4 uStack_3d4;
  undefined4 uStack_3d0;
  undefined4 uStack_3cc;
  undefined8 local_3c8;
  undefined8 local_3c0;
  undefined8 uStack_3b8;
  undefined8 local_3b0;
  undefined8 uStack_3a8;
  undefined1 local_3a0;
  undefined2 local_39f;
  int local_39c;
  undefined8 local_398;
  undefined4 local_390;
  longlong local_388 [42];
  undefined1 local_238 [152];
  undefined1 local_1a0 [152];
  undefined1 local_108 [152];
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_778;
  memset(local_108,0,0x98);
  memset(local_1a0,0,0x98);
  memset(local_238,0,0x98);
  local_710 = param_15;
  local_720 = param_13;
  uStack_718 = param_14;
  local_730 = param_11;
  uStack_728 = param_12;
  local_738 = param_10;
  local_740 = param_9;
  local_748 = param_8;
  local_750 = (undefined1 *)CONCAT71(local_750._1_7_,param_7);
  local_758 = (undefined4 *)CONCAT71(local_758._1_7_,param_6);
  local_708 = local_108;
  local_700 = local_1a0;
  local_6f8 = local_238;
  FUN_140700e77(param_2,param_3,param_4,param_5);
  FUN_14003fbd6();
  uVar12 = (**(code **)(*DAT_14caea080 + 0x350))
                     (DAT_14caea080,*(undefined4 *)((longlong)param_1 + 0x24),(char)param_1[4]);
  plVar16 = local_388 + 0x1c;
  local_388[0x28] = 0;
  local_388[0x29] = 0;
  local_388[0x26] = 0;
  local_388[0x27] = 0;
  local_388[0x24] = 0;
  local_388[0x25] = 0;
  local_388[0x22] = 0;
  local_388[0x23] = 0;
  local_388[0x20] = 0;
  local_388[0x21] = 0;
  local_388[0x1e] = 0;
  local_388[0x1f] = 0;
  local_388[0x1c] = 0;
  local_388[0x1d] = 0;
  plVar5 = local_388 + 0xe;
  local_388[0x1a] = 0;
  local_388[0x1b] = 0;
  local_388[0x18] = 0;
  local_388[0x19] = 0;
  local_388[0x16] = 0;
  local_388[0x17] = 0;
  local_388[0x14] = 0;
  local_388[0x15] = 0;
  local_388[0x12] = 0;
  local_388[0x13] = 0;
  local_388[0x10] = 0;
  local_388[0x11] = 0;
  local_388[0xe] = 0;
  local_388[0xf] = 0;
  local_388[0xc] = 0;
  local_388[0xd] = 0;
  local_388[10] = 0;
  local_388[0xb] = 0;
  local_388[8] = 0;
  local_388[9] = 0;
  local_388[6] = 0;
  local_388[7] = 0;
  local_388[4] = 0;
  local_388[5] = 0;
  local_388[2] = 0;
  local_388[3] = 0;
  local_388[0] = 0;
  local_388[1] = 0;
  local_6f0 = param_1;
  bVar9 = FUN_14007744c(param_1,local_108,0,plVar16);
  bVar10 = FUN_14007744c(uVar12,local_1a0,0,plVar5);
  cVar11 = '\x01';
  if (param_9 != '\0') {
    cVar11 = FUN_14007744c(local_6f0,local_238,0,local_388);
  }
  lVar14 = DAT_14ca94de0;
  if (((bVar9 & bVar10) == 1) && (cVar11 != '\0')) {
    local_428[0] = 0;
    local_428[1] = 0;
    local_428[2] = 0;
    local_410 = 1;
    local_408 = 0;
    uStack_400 = 0;
    local_3f8 = 0;
    lStack_3f0 = 0;
    local_3e8 = 0;
    lStack_3e0 = 0;
    local_3d8 = 0xffffffff;
    uStack_3d4 = 0xffffffff;
    uStack_3d0 = 0xffffffff;
    uStack_3cc = 0xffffffff;
    local_3c0 = 0;
    local_3b0 = 0;
    uStack_3a8 = 0;
    local_3a0 = 0;
    local_39f = 1;
    local_398 = 0;
    local_390 = 0;
    local_3c8 = DAT_14c9c0d50;
    uStack_3b8 = DAT_14c9c0d98;
    local_39c = (uint)((char)param_3 == '\x01') << 2;
    if ((byte)((char)param_3 - 2U) < 3) {
      puVar15 = &DAT_14ca16b10;
      if (param_6 != '\0') {
        puVar15 = &DAT_14ca16b40;
      }
      local_3c0 = *(undefined8 *)(puVar15 + 0x10);
      plVar13 = plVar16;
      if (local_388[0x1f] == 0) {
        plVar13 = plVar5;
      }
      lVar14 = *(longlong *)(*plVar13 + 8);
      if (lVar14 != 0) {
        LOCK();
        *(int *)(lVar14 + 0x60) = *(int *)(lVar14 + 0x60) + 1;
        UNLOCK();
        lStack_3e0 = lVar14;
      }
      lVar14 = local_388[0x1f];
      if (local_388[0x1f] == 0) {
        lVar14 = local_388[0x11];
      }
      uStack_3cc = *(undefined4 *)(lVar14 + 0xd4);
    }
    else {
      if (DAT_14ca94de0 == 0) {
        puVar15 = &DAT_14ca16b10;
        if (param_6 != '\0') {
          puVar15 = &DAT_14ca16b40;
        }
        local_3c0 = *(undefined8 *)(puVar15 + 0x10);
      }
      else {
        LOCK();
        *(int *)(DAT_14ca94de0 + 8) = *(int *)(DAT_14ca94de0 + 8) + 1;
        UNLOCK();
        local_428[0] = lVar14;
        LOCK();
        puVar1 = (uint *)(lVar14 + 8);
        uVar6 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar6 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
        puVar15 = &DAT_14ca16b10;
        if (param_6 != '\0') {
          puVar15 = &DAT_14ca16b40;
        }
        local_3c0 = *(undefined8 *)(puVar15 + 0x10);
      }
      lVar14 = local_388[0x1e];
      plVar13 = plVar16;
      if (local_388[0x1e] == 0) {
        plVar13 = plVar5;
      }
      lVar8 = *(longlong *)(*plVar13 + 8);
      if (local_3f8 != lVar8) {
        if (lVar8 != 0) {
          LOCK();
          *(int *)(lVar8 + 0x60) = *(int *)(lVar8 + 0x60) + 1;
          UNLOCK();
        }
        bVar17 = local_3f8 != 0;
        local_3f8 = lVar8;
        if (bVar17) {
          FUN_140021284();
        }
      }
      plVar13 = plVar16;
      if (lVar14 == 0) {
        plVar13 = plVar5;
      }
      local_3d8 = *(undefined4 *)(plVar13[2] + 0xd4);
    }
    lVar14 = local_388[0x21];
    plVar13 = plVar16;
    if (local_388[0x21] == 0) {
      plVar13 = plVar5;
    }
    lVar8 = *(longlong *)(*plVar13 + 8);
    if (lStack_3f0 != lVar8) {
      if (lVar8 != 0) {
        LOCK();
        *(int *)(lVar8 + 0x60) = *(int *)(lVar8 + 0x60) + 1;
        UNLOCK();
      }
      bVar17 = lStack_3f0 != 0;
      lStack_3f0 = lVar8;
      if (bVar17) {
        FUN_140021284();
      }
    }
    plVar13 = plVar16;
    if (lVar14 == 0) {
      plVar13 = plVar5;
    }
    uStack_3d4 = *(undefined4 *)(plVar13[5] + 0xd4);
    FUN_144a1fecc(local_428,&local_500);
    if ((((DAT_14cafb2b4 != 1) && (DAT_14c760d84 != 0)) && ((DAT_14ca84f5a & 1) != 0)) &&
       (DAT_14cafb358 == 2)) {
      local_398 = local_430;
      FUN_14573402d(local_6d0);
      lVar14 = FUN_147cbdc8b();
      if (((DAT_14cafb2b4 != 1) && (DAT_14c760d84 != 0)) &&
         (((DAT_14ca84f5a & 1) != 0 && (DAT_14cafb358 - 1U < 2)))) {
        local_5a0[0] = FUN_14723c7f2(local_6d0);
        p_Var2 = (LPCRITICAL_SECTION)(lVar14 + 0xc30);
        EnterCriticalSection(p_Var2);
        local_758 = &local_6d4;
        local_6d4 = (uint)local_6d4._2_2_ << 0x10;
        local_750 = local_6e2;
        FUN_14573482a(lVar14 + 0xc58,&local_6e0,
                      (int)((ulonglong)local_5a0[0] >> 0x20) * 0x17 + (int)local_5a0[0] & 0x7fffffff
                      ,local_5a0);
        cVar11 = *(char *)(*(longlong *)(lVar14 + 0xc58) + 8 + (longlong)(int)local_6e0 * 0x10);
        if (cVar11 == '\0') {
          *(undefined1 *)((longlong)(int)local_6e0 * 0x10 + *(longlong *)(lVar14 + 0xc58) + 8) = 1;
        }
        if (p_Var2 != (LPCRITICAL_SECTION)0x0) {
          LeaveCriticalSection(p_Var2);
        }
        if (cVar11 == '\0') {
          FUN_140691a2a(lVar14,param_16,0);
        }
      }
      FUN_1457340f6(local_5a0,local_428);
      lVar14 = FUN_147cbdc93();
      if (((DAT_14cafb2b4 != 1) && (DAT_14c760d84 != 0)) &&
         (((DAT_14ca84f5a & 1) != 0 && (DAT_14cafb358 - 1U < 2)))) {
        local_6e0 = FUN_14723c7f2(local_5a0);
        p_Var2 = (LPCRITICAL_SECTION)(lVar14 + 0xc30);
        EnterCriticalSection(p_Var2);
        local_758 = (undefined4 *)local_6e2;
        local_6e2 = (undefined1  [2])0x0;
        local_750 = &local_6d5;
        FUN_14573482a(lVar14 + 0xc58,&local_6d4,
                      (int)((ulonglong)local_6e0 >> 0x20) * 0x17 + (int)local_6e0 & 0x7fffffff,
                      &local_6e0);
        cVar11 = *(char *)(*(longlong *)(lVar14 + 0xc58) + 8 + (longlong)local_6d4 * 0x10);
        if (cVar11 == '\0') {
          *(undefined1 *)((longlong)local_6d4 * 0x10 + *(longlong *)(lVar14 + 0xc58) + 8) = 1;
        }
        if (p_Var2 != (LPCRITICAL_SECTION)0x0) {
          LeaveCriticalSection(p_Var2);
        }
        if (cVar11 == '\0') {
          FUN_140691a2a(lVar14,param_16,0);
        }
      }
      FUN_1446fbe14(local_5a0);
      FUN_1446fbe14(local_6d0);
    }
    memcpy(local_6ca,&local_500,0xd8);
    param_16 = param_16 & 0x7fffffff;
    iVar7 = (int)param_17[1];
    *(uint *)(param_17 + 1) = iVar7 + 1U;
    if (*(uint *)((longlong)param_17 + 0xc) < iVar7 + 1U) {
      FUN_14069191a(param_17,iVar7);
    }
    puVar3 = (undefined2 *)(*param_17 + (longlong)iVar7 * 0x130);
    *puVar3 = 0x100;
    memcpy(puVar3 + 1,local_6d0,0xde);
    *(undefined8 *)(puVar3 + 0x88) = 0;
    *(undefined8 *)(puVar3 + 0x8c) = 0x300000000;
    *(uint *)(puVar3 + 0x90) = param_16;
    *(undefined **)(puVar3 + 0x94) = &DAT_14cb00c58;
    if (lStack_3e0 != 0) {
      FUN_140021284();
    }
    if (local_3e8 != 0) {
      FUN_140021284();
    }
    if (lStack_3f0 != 0) {
      FUN_140021284();
    }
    if (local_3f8 != 0) {
      FUN_140021284();
    }
    lVar14 = local_388[0x23];
    if (local_388[0x23] == 0) {
      lVar14 = local_388[0x15];
    }
    if (lVar14 != 0) {
      if (local_388[0x23] == 0) {
        plVar16 = plVar5;
      }
      local_4f8 = *plVar16;
      local_5c0 = 0;
      local_5b8 = 0x300000000;
      local_5b0 = 0x7fffffff;
      uStack_5a8 = 0;
      local_6d0[0] = 0x101;
      local_500 = lVar14;
      FUN_140700dd8(local_6d0);
      local_5b0 = local_5b0 & 0x80000000 | param_16;
      uStack_5a8 = 0;
      if ((((DAT_14cafb2b4 != 1) && (DAT_14c760d84 != 0)) && ((DAT_14ca84f5a & 1) != 0)) &&
         (DAT_14cafb358 == 2)) {
        bVar9 = (**(code **)(*local_6f0 + 0x400))();
        local_5b0 = local_5b0 & 0x7fffffff | (uint)bVar9 << 0x1f;
        FUN_14365ece2(local_6c8);
      }
      iVar7 = (int)param_17[1];
      *(uint *)(param_17 + 1) = iVar7 + 1U;
      if (*(uint *)((longlong)param_17 + 0xc) < iVar7 + 1U) {
        FUN_14069191a(param_17,iVar7);
      }
      lVar14 = *param_17;
      pvVar4 = (void *)(lVar14 + (longlong)iVar7 * 0x130);
      memcpy(pvVar4,local_6d0,0xe0);
      *(undefined8 *)(lVar14 + 0x110 + (longlong)iVar7 * 0x130) = 0;
      if (local_5c0 == 0) {
        *(undefined8 *)((longlong)pvVar4 + 0x100) = local_5d0;
        *(undefined8 *)((longlong)pvVar4 + 0x108) = uStack_5c8;
        *(undefined8 *)((longlong)pvVar4 + 0xf0) = local_5e0;
        *(undefined8 *)((longlong)pvVar4 + 0xf8) = uStack_5d8;
        *(undefined8 *)((longlong)pvVar4 + 0xe0) = local_5f0;
        *(undefined8 *)((longlong)pvVar4 + 0xe8) = uStack_5e8;
      }
      *(longlong *)((longlong)pvVar4 + 0x110) = local_5c0;
      local_5c0 = 0;
      *(undefined4 *)((longlong)pvVar4 + 0x118) = (undefined4)local_5b8;
      *(undefined4 *)((longlong)pvVar4 + 0x11c) = local_5b8._4_4_;
      local_5b8 = 0x300000000;
      *(uint *)((longlong)pvVar4 + 0x120) = local_5b0;
      *(undefined4 *)((longlong)pvVar4 + 0x124) = uStack_5ac;
      *(undefined4 *)((longlong)pvVar4 + 0x128) = (undefined4)uStack_5a8;
      *(undefined4 *)((longlong)pvVar4 + 300) = uStack_5a8._4_4_;
    }
    if ((param_9 != '\0') && (local_388[7] != 0)) {
      local_5c0 = 0;
      local_5b8 = 0x300000000;
      local_5b0 = 0x7fffffff;
      uStack_5a8 = 0;
      local_6d0[0] = 0x101;
      local_500 = local_388[7];
      local_4f8 = local_388[0];
      FUN_140700dd8(local_6d0);
      local_5b0 = local_5b0 & 0x80000000 | param_16;
      uStack_5a8 = 0;
      if (((DAT_14cafb2b4 != 1) && ((DAT_14c760d84 != 0 && ((DAT_14ca84f5a & 1) != 0)))) &&
         (DAT_14cafb358 == 2)) {
        bVar9 = (**(code **)(*local_6f0 + 0x400))();
        local_5b0 = local_5b0 & 0x7fffffff | (uint)bVar9 << 0x1f;
        FUN_14365ece2(local_6c8);
      }
      iVar7 = (int)param_17[1];
      *(uint *)(param_17 + 1) = iVar7 + 1U;
      if (*(uint *)((longlong)param_17 + 0xc) < iVar7 + 1U) {
        FUN_14069191a(param_17,iVar7);
      }
      lVar14 = *param_17;
      pvVar4 = (void *)(lVar14 + (longlong)iVar7 * 0x130);
      memcpy(pvVar4,local_6d0,0xe0);
      *(undefined8 *)(lVar14 + 0x110 + (longlong)iVar7 * 0x130) = 0;
      if (local_5c0 == 0) {
        *(undefined8 *)((longlong)pvVar4 + 0x100) = local_5d0;
        *(undefined8 *)((longlong)pvVar4 + 0x108) = uStack_5c8;
        *(undefined8 *)((longlong)pvVar4 + 0xf0) = local_5e0;
        *(undefined8 *)((longlong)pvVar4 + 0xf8) = uStack_5d8;
        *(undefined8 *)((longlong)pvVar4 + 0xe0) = local_5f0;
        *(undefined8 *)((longlong)pvVar4 + 0xe8) = uStack_5e8;
      }
      *(longlong *)((longlong)pvVar4 + 0x110) = local_5c0;
      local_5c0 = 0;
      *(undefined4 *)((longlong)pvVar4 + 0x118) = (undefined4)local_5b8;
      *(undefined4 *)((longlong)pvVar4 + 0x11c) = local_5b8._4_4_;
      local_5b8 = 0x300000000;
      *(uint *)((longlong)pvVar4 + 0x120) = local_5b0;
      *(undefined4 *)((longlong)pvVar4 + 0x124) = uStack_5ac;
      *(undefined4 *)((longlong)pvVar4 + 0x128) = (undefined4)uStack_5a8;
      *(undefined4 *)((longlong)pvVar4 + 300) = uStack_5a8._4_4_;
    }
  }
  if ((local_70 ^ (ulonglong)auStack_778) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140700dd8 FUN_140700dd8 body=159 status=ok
// SIG undefined FUN_140700dd8(void)

void FUN_140700dd8(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (DAT_14cafb2b4 == 1) {
    iVar2 = *(int *)(param_1 + 0x118);
    *(uint *)(param_1 + 0x118) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x11c) < iVar2 + 1U) {
      FUN_14713b728(param_1 + 0xe0,iVar2);
    }
    lVar3 = param_1 + 0xe0;
    if (*(longlong *)(param_1 + 0x110) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x110);
    }
    lVar4 = param_2[1];
    plVar1 = (longlong *)(lVar3 + (longlong)iVar2 * 0x10);
    *plVar1 = *param_2;
    plVar1[1] = lVar4;
  }
  else {
    if (*param_2 == 0) {
      lVar3 = 0;
    }
    else {
      lVar4 = (longlong)*(int *)(*param_2 + 0xd4);
      lVar3 = *(longlong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar4 * 8);
      if (lVar3 == 0) {
        lVar3 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar4,1);
      }
    }
    *(longlong *)(param_1 + 8) = lVar3;
  }
  return;
}



// FUNCTION 140700e77 FUN_140700e77 body=4196 status=ok
// SIG undefined FUN_140700e77(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140700e77(ushort param_1,char param_2,byte param_3,byte param_4,byte param_5,byte param_6,
                  byte param_7,byte param_8,byte param_9,byte *param_10,byte *param_11,
                  byte *param_12,byte *param_13,byte *param_14,undefined8 *param_15,
                  undefined8 *param_16,longlong param_17)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  byte bVar6;
  int iVar7;
  undefined7 uVar9;
  undefined *puVar8;
  undefined8 unaff_R13;
  undefined8 uVar10;
  undefined1 auStack_e8 [32];
  wchar_t *local_c8;
  wchar_t *local_c0;
  undefined8 uStack_b8;
  char *local_b0;
  code *local_a8;
  code *local_a0;
  code *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  undefined1 *local_80;
  undefined4 local_78;
  undefined *local_70;
  undefined8 *local_60;
  longlong local_58 [2];
  ulonglong local_48;
  
  local_60 = param_16;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  *param_15 = 0;
  puVar5 = param_15;
  if ((byte)(param_2 - 2U) < 3 && param_4 == 1) {
    if (((uint)(&DAT_14ca814d8)[(ulonglong)param_1 * 0xf] >> 0x16 & 1) == 0) {
      uVar3 = (uint)(&DAT_14ca814d8)[(ulonglong)param_1 * 0xf] >> 0x17;
      uVar10 = CONCAT71((int7)((ulonglong)unaff_R13 >> 8),1);
      if ((((byte)uVar3 & 3) == 2) || (((uVar3 & 3) == 1 && (DAT_14ca8507c != '\0'))))
      goto LAB_140700f43;
    }
    uVar10 = 0;
LAB_140700f43:
    bVar2 = ~param_8 & param_3;
    param_11[4] = param_6;
    param_11[5] = param_7;
    param_11[2] = bVar2;
    param_11[3] = param_4;
    param_11[6] = (byte)uVar10;
    param_11[7] = param_9;
    iVar7 = (int)uVar10 * 2;
    bVar6 = ((byte)iVar7 | param_9 * '\x04' | param_7) << 2;
    puVar8 = (undefined *)(ulonglong)CONCAT31((int3)((uint)iVar7 >> 8),bVar6);
    uVar3 = (uint)param_11[1] * 2 +
            (uint)(byte)((param_6 * '\x02' | bVar6 | param_4) * '\x02' | bVar2) * 4 |
            (uint)*param_11;
    iVar7 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x110);
    if (bVar2 == 0) {
      if ((iVar7 < DAT_14ca164e0) && (FUN_144b3d300(&DAT_14ca164e0), DAT_14ca164e0 == -1)) {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14ca18560) &&
           (FUN_144b3d300(&DAT_14ca18560), DAT_14ca18560 == -1)) {
          FUN_1415909ac(local_58);
          local_80 = (undefined1 *)((ulonglong)local_80 & 0xffffffffffffff00);
          local_90 = (undefined1 *)((ulonglong)local_90 & 0xffffffffffffff00);
          local_b0 = "Unknown";
          local_c0 = (wchar_t *)0x0;
          uStack_b8 = 0;
          local_c8 = L"FRasterizePassParameters";
          local_88 = (undefined1 *)0x0;
          local_a0 = (code *)CONCAT44(local_a0._4_4_,0x120);
          local_a8 = (code *)CONCAT44(local_a8._4_4_,0x5c0);
          local_98 = (code *)local_58;
          FUN_140b49562(&DAT_14ca184e0,0,1);
          if (local_58[0] != 0) {
            FUN_1400020a8();
          }
          atexit((_func_5014 *)&LAB_142e2772f);
          _Init_thread_footer(&DAT_14ca18560);
        }
        FUN_1460959b2();
        local_70 = &DAT_14ca184e0;
        local_80 = &LAB_14712ac08;
        local_88 = &LAB_14712ac0c;
        local_90 = &LAB_147254304;
        local_98 = FUN_1402a6892;
        local_a0 = FUN_147254308;
        local_a8 = FUN_147254368;
        local_c0 = L"HWRasterizeMS";
        local_c8 = L"/Engine/Private/Nanite/NaniteRasterizer.usf";
        local_78 = 0xf8;
        local_b0 = (char *)CONCAT44(local_b0._4_4_,0x100);
        uStack_b8 = CONCAT44(uStack_b8._4_4_,1);
        puVar8 = &DAT_14ca163d0;
        FUN_140db5666(&DAT_14ca16438,1,&DAT_14ca163d0,L"FHWRasterizeMS");
        _DAT_14ca16438 = &PTR_FUN_14a203b98;
        atexit((_func_5014 *)&LAB_142e0a675);
        _Init_thread_footer(&DAT_14ca164e0);
      }
      uVar4 = (ulonglong)DAT_14ca16480;
      param_16[uVar4 + 1] = &DAT_14ca16438;
      bVar2 = 0;
      puVar5 = param_16;
    }
    else {
      if ((iVar7 < DAT_14ca164e0) && (FUN_144b3d300(&DAT_14ca164e0), DAT_14ca164e0 == -1)) {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14ca18560) &&
           (FUN_144b3d300(&DAT_14ca18560), DAT_14ca18560 == -1)) {
          FUN_1415909ac(local_58);
          local_80 = (undefined1 *)((ulonglong)local_80 & 0xffffffffffffff00);
          local_90 = (undefined1 *)((ulonglong)local_90 & 0xffffffffffffff00);
          local_b0 = "Unknown";
          local_c0 = (wchar_t *)0x0;
          uStack_b8 = 0;
          local_c8 = L"FRasterizePassParameters";
          local_88 = (undefined1 *)0x0;
          local_a0 = (code *)CONCAT44(local_a0._4_4_,0x120);
          local_a8 = (code *)CONCAT44(local_a8._4_4_,0x5c0);
          local_98 = (code *)local_58;
          FUN_140b49562(&DAT_14ca184e0,0,1);
          if (local_58[0] != 0) {
            FUN_1400020a8();
          }
          atexit((_func_5014 *)&LAB_142e2772f);
          _Init_thread_footer(&DAT_14ca18560);
        }
        FUN_1460959b2();
        local_70 = &DAT_14ca184e0;
        local_80 = &LAB_14712ac08;
        local_88 = &LAB_14712ac0c;
        local_90 = &LAB_147254304;
        local_98 = FUN_1402a6892;
        local_a0 = FUN_147254308;
        local_a8 = FUN_147254368;
        local_c0 = L"HWRasterizeMS";
        local_c8 = L"/Engine/Private/Nanite/NaniteRasterizer.usf";
        local_78 = 0xf8;
        local_b0 = (char *)CONCAT44(local_b0._4_4_,0x100);
        uStack_b8 = CONCAT44(uStack_b8._4_4_,1);
        puVar8 = &DAT_14ca163d0;
        FUN_140db5666(&DAT_14ca16438,1,&DAT_14ca163d0,L"FHWRasterizeMS");
        _DAT_14ca16438 = &PTR_FUN_14a203b98;
        atexit((_func_5014 *)&LAB_142e0a675);
        _Init_thread_footer(&DAT_14ca164e0);
      }
      uVar4 = (ulonglong)DAT_14ca16480;
      param_15[uVar4 + 1] = &DAT_14ca16438;
      bVar2 = 1;
    }
  }
  else {
    bVar2 = ~param_8 & param_3;
    if ((byte)(param_2 - 2U) < 3) {
      uVar10 = 0;
      goto LAB_140700f43;
    }
    param_10[5] = param_6;
    param_10[6] = param_7;
    param_10[3] = bVar2;
    param_10[4] = param_4;
    param_10[7] = param_9;
    puVar8 = (undefined *)0x0;
    uVar3 = (uint)param_10[2] * 4 +
            (uint)(byte)(param_4 * '\x02' | (param_7 * '\x02' | param_9 * '\x04' | param_6) << 2 |
                        bVar2) * 8 + (uint)param_10[1] * 2 | (uint)*param_10;
    FUN_1460ae02c();
    uVar4 = (ulonglong)DAT_14ca16358;
    if (bVar2 == 0) {
      param_16[uVar4 + 1] = &DAT_14ca16310;
      bVar2 = 0;
      uVar10 = 0;
      puVar5 = param_16;
    }
    else {
      param_15[uVar4 + 1] = &DAT_14ca16310;
      bVar2 = 1;
      uVar10 = 0;
    }
  }
  *(uint *)((longlong)puVar5 + uVar4 * 4 + 0x68) = uVar3;
  param_12[5] = bVar2;
  param_12[6] = param_4;
  param_12[7] = (byte)uVar10;
  uVar9 = (undefined7)((ulonglong)puVar8 >> 8);
  bVar2 = (bVar2 << 2 | (byte)uVar10 << 4 | param_12[3] | param_12[4] * '\x02') * '\x02' |
          param_12[2];
  if (param_4 == 0) {
    uVar3 = (uint)param_12[1] * 2 + (uint)bVar2 * 4 | (uint)*param_12;
    puVar5 = param_16;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14ca16608) && (FUN_144b3d300(&DAT_14ca16608), DAT_14ca16608 == -1)) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14ca18560) && (FUN_144b3d300(&DAT_14ca18560), DAT_14ca18560 == -1))
      {
        FUN_1415909ac(local_58);
        local_80 = (undefined1 *)((ulonglong)local_80 & 0xffffffffffffff00);
        local_90 = (undefined1 *)((ulonglong)local_90 & 0xffffffffffffff00);
        local_b0 = "Unknown";
        local_c0 = (wchar_t *)0x0;
        uStack_b8 = 0;
        local_c8 = L"FRasterizePassParameters";
        local_88 = (undefined1 *)0x0;
        local_a0 = (code *)CONCAT44(local_a0._4_4_,0x120);
        local_a8 = (code *)CONCAT44(local_a8._4_4_,0x5c0);
        local_98 = (code *)local_58;
        FUN_140b49562(&DAT_14ca184e0,0,CONCAT71(uVar9,1));
        if (local_58[0] != 0) {
          FUN_1400020a8();
        }
        goto LAB_140701b37;
      }
      goto LAB_14070143f;
    }
  }
  else {
    uVar3 = (uint)param_12[1] * 2 + (uint)(bVar2 | 0x10) * 4 | (uint)*param_12;
    puVar5 = param_15;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14ca16608) && (FUN_144b3d300(&DAT_14ca16608), DAT_14ca16608 == -1)) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14ca18560) && (FUN_144b3d300(&DAT_14ca18560), DAT_14ca18560 == -1))
      {
        FUN_1415909ac(local_58);
        local_80 = (undefined1 *)((ulonglong)local_80 & 0xffffffffffffff00);
        local_90 = (undefined1 *)((ulonglong)local_90 & 0xffffffffffffff00);
        local_b0 = "Unknown";
        local_c0 = (wchar_t *)0x0;
        uStack_b8 = 0;
        local_c8 = L"FRasterizePassParameters";
        local_88 = (undefined1 *)0x0;
        local_a0 = (code *)CONCAT44(local_a0._4_4_,0x120);
        local_a8 = (code *)CONCAT44(local_a8._4_4_,0x5c0);
        local_98 = (code *)local_58;
        FUN_140b49562(&DAT_14ca184e0,0,CONCAT71(uVar9,1));
        if (local_58[0] != 0) {
          FUN_1400020a8();
        }
LAB_140701b37:
        atexit((_func_5014 *)&LAB_142e2772f);
        _Init_thread_footer(&DAT_14ca18560);
      }
LAB_14070143f:
      FUN_146095afc();
      local_70 = &DAT_14ca184e0;
      local_80 = &LAB_14712ac08;
      local_88 = &LAB_14712ac0c;
      local_90 = &LAB_1472543d8;
      local_98 = FUN_141771b86;
      local_a0 = FUN_1472543dc;
      local_a8 = FUN_14725443c;
      local_c0 = L"HWRasterizePS";
      local_c8 = L"/Engine/Private/Nanite/NaniteRasterizer.usf";
      local_78 = 0xf8;
      local_b0 = (char *)CONCAT44(local_b0._4_4_,0x100);
      uStack_b8 = CONCAT44(uStack_b8._4_4_,3);
      FUN_140db5666(&DAT_14ca16560,1,&DAT_14ca164f8,L"FHWRasterizePS");
      _DAT_14ca16560 = &PTR_FUN_14a203b98;
      atexit((_func_5014 *)&LAB_142e0a681);
      _Init_thread_footer(&DAT_14ca16608);
    }
  }
  uVar4 = (ulonglong)DAT_14ca165a8;
  puVar5[uVar4 + 1] = &DAT_14ca16560;
  *(uint *)((longlong)puVar5 + uVar4 * 4 + 0x68) = uVar3;
  param_13[6] = param_8;
  param_13[7] = 0;
  param_13[1] = param_5;
  param_13[8] = param_6;
  param_13[9] = param_7;
  param_13[4] = param_3;
  param_13[5] = param_4;
  param_13[10] = param_9;
  bVar2 = *param_13;
  bVar6 = param_13[2];
  bVar1 = param_13[3];
  iVar7 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x110);
  if ((param_3 | param_4) == 1) {
    param_16 = param_15;
    if ((DAT_14ca16168 <= iVar7) || (FUN_144b3d300(&DAT_14ca16168), DAT_14ca16168 != -1))
    goto LAB_1407011eb;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14ca18560) && (FUN_144b3d300(&DAT_14ca18560), DAT_14ca18560 == -1)) {
      FUN_1415909ac(local_58);
      local_80 = (undefined1 *)((ulonglong)local_80 & 0xffffffffffffff00);
      local_90 = (undefined1 *)((ulonglong)local_90 & 0xffffffffffffff00);
      local_98 = (code *)local_58;
      local_b0 = "Unknown";
      local_c0 = (wchar_t *)0x0;
      uStack_b8 = 0;
      local_c8 = L"FRasterizePassParameters";
      local_88 = (undefined1 *)0x0;
      local_a0 = (code *)CONCAT44(local_a0._4_4_,0x120);
      local_a8 = (code *)CONCAT44(local_a8._4_4_,0x5c0);
      FUN_140b49562(&DAT_14ca184e0,0,1);
      if (local_58[0] != 0) {
        FUN_1400020a8();
      }
      local_60 = param_15;
LAB_140701cb9:
      atexit((_func_5014 *)&LAB_142e2772f);
      _Init_thread_footer(&DAT_14ca18560);
    }
    else {
      local_60 = param_15;
    }
  }
  else {
    if ((DAT_14ca16168 <= iVar7) || (FUN_144b3d300(&DAT_14ca16168), DAT_14ca16168 != -1))
    goto LAB_1407011eb;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14ca18560) && (FUN_144b3d300(&DAT_14ca18560), DAT_14ca18560 == -1)) {
      FUN_1415909ac(local_58);
      local_80 = (undefined1 *)((ulonglong)local_80 & 0xffffffffffffff00);
      local_90 = (undefined1 *)((ulonglong)local_90 & 0xffffffffffffff00);
      local_98 = (code *)local_58;
      local_b0 = "Unknown";
      local_c0 = (wchar_t *)0x0;
      uStack_b8 = 0;
      local_c8 = L"FRasterizePassParameters";
      local_88 = (undefined1 *)0x0;
      local_a0 = (code *)CONCAT44(local_a0._4_4_,0x120);
      local_a8 = (code *)CONCAT44(local_a8._4_4_,0x5c0);
      FUN_140b49562(&DAT_14ca184e0,0,1);
      if (local_58[0] != 0) {
        FUN_1400020a8();
      }
      goto LAB_140701cb9;
    }
  }
  FUN_145c77460();
  local_70 = &DAT_14ca184e0;
  local_80 = &LAB_14712ac08;
  local_88 = &LAB_14712ac0c;
  local_90 = &LAB_147254088;
  local_98 = FUN_14482e810;
  local_a0 = FUN_14725408c;
  local_a8 = FUN_1472540ec;
  local_c0 = L"MicropolyRasterize";
  local_c8 = L"/Engine/Private/Nanite/NaniteRasterizer.usf";
  local_78 = 0xf8;
  local_b0 = (char *)CONCAT44(local_b0._4_4_,0x800);
  uStack_b8 = CONCAT44(uStack_b8._4_4_,5);
  FUN_140db5666(&DAT_14ca160c0,1,&DAT_14ca16058,L"FMicropolyRasterizeCS");
  _DAT_14ca160c0 = &PTR_FUN_14a203b98;
  atexit((_func_5014 *)&LAB_142e0a651);
  _Init_thread_footer(&DAT_14ca16168);
  param_16 = local_60;
LAB_1407011eb:
  uVar4 = (ulonglong)DAT_14ca16108;
  param_16[uVar4 + 1] = &DAT_14ca160c0;
  *(uint *)((longlong)param_16 + uVar4 * 4 + 0x68) =
       (uint)bVar2 +
       ((uint)param_5 + (uint)bVar6 * 2 |
       (uint)param_3 * 8 + (uint)bVar1 * 4 |
       (uint)(byte)(param_8 * '\x02' | param_6 * '\b' | param_7 << 4 | param_9 << 5 | param_4) << 4)
       * 2;
  if (param_8 != 0) {
    param_14[6] = 1;
    param_14[7] = 1;
    param_14[1] = param_5;
    param_14[8] = param_6;
    param_14[9] = param_7;
    param_14[4] = param_3;
    param_14[5] = param_4;
    param_14[10] = param_9;
    bVar2 = *param_14;
    bVar6 = param_14[2];
    bVar1 = param_14[3];
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14ca16168) && (FUN_144b3d300(&DAT_14ca16168), DAT_14ca16168 == -1)) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14ca18560) && (FUN_144b3d300(&DAT_14ca18560), DAT_14ca18560 == -1))
      {
        FUN_1415909ac(local_58);
        local_80 = (undefined1 *)((ulonglong)local_80 & 0xffffffffffffff00);
        local_90 = (undefined1 *)((ulonglong)local_90 & 0xffffffffffffff00);
        local_b0 = "Unknown";
        local_c0 = (wchar_t *)0x0;
        uStack_b8 = 0;
        local_c8 = L"FRasterizePassParameters";
        local_88 = (undefined1 *)0x0;
        local_a0 = (code *)CONCAT44(local_a0._4_4_,0x120);
        local_a8 = (code *)CONCAT44(local_a8._4_4_,0x5c0);
        local_98 = (code *)local_58;
        FUN_140b49562(&DAT_14ca184e0,0,1);
        if (local_58[0] != 0) {
          FUN_1400020a8();
        }
        atexit((_func_5014 *)&LAB_142e2772f);
        _Init_thread_footer(&DAT_14ca18560);
      }
      FUN_145c77460();
      local_70 = &DAT_14ca184e0;
      local_80 = &LAB_14712ac08;
      local_88 = &LAB_14712ac0c;
      local_90 = &LAB_147254088;
      local_98 = FUN_14482e810;
      local_a0 = FUN_14725408c;
      local_a8 = FUN_1472540ec;
      local_c0 = L"MicropolyRasterize";
      local_c8 = L"/Engine/Private/Nanite/NaniteRasterizer.usf";
      local_78 = 0xf8;
      local_b0 = (char *)CONCAT44(local_b0._4_4_,0x800);
      uStack_b8 = CONCAT44(uStack_b8._4_4_,5);
      FUN_140db5666(&DAT_14ca160c0,1,&DAT_14ca16058,L"FMicropolyRasterizeCS");
      _DAT_14ca160c0 = &PTR_FUN_14a203b98;
      atexit((_func_5014 *)&LAB_142e0a651);
      _Init_thread_footer(&DAT_14ca16168);
    }
    uVar4 = (ulonglong)DAT_14ca16108;
    *(undefined **)(param_17 + 8 + uVar4 * 8) = &DAT_14ca160c0;
    *(uint *)(param_17 + 0x68 + uVar4 * 4) =
         (uint)bVar2 +
         ((uint)param_5 + (uint)bVar6 * 2 |
         (uint)(byte)(param_3 << 3) + (uint)bVar1 * 4 |
         (uint)(byte)(param_9 << 5 | param_4 | param_6 * '\b' | param_7 << 4 | 6) << 4) * 2;
  }
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140701edc FUN_140701edc body=184 status=ok
// SIG undefined FUN_140701edc(void)

undefined8
FUN_140701edc(longlong param_1,undefined2 param_2,undefined4 *param_3,undefined8 param_4,
             undefined4 param_5)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  bool bVar5;
  undefined1 auStack_98 [32];
  undefined2 local_78 [2];
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_74 = 0;
  local_70 = param_5;
  local_68 = *param_3;
  uStack_64 = param_3[1];
  uStack_60 = param_3[2];
  uStack_5c = param_3[3];
  local_58 = *(undefined8 *)(param_3 + 4);
  uStack_50 = *(undefined8 *)(param_3 + 6);
  local_48 = *(undefined8 *)(param_3 + 8);
  uStack_40 = *(undefined8 *)(param_3 + 10);
  local_38 = *(undefined8 *)(param_3 + 0xc);
  iVar1 = *(int *)(param_1 + 0x28);
  local_78[0] = param_2;
  local_30 = param_4;
  if ((longlong)iVar1 == 0) {
    uVar3 = CONCAT71((int7)(int3)((uint)iVar1 >> 8),1);
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0x20);
    lVar4 = 0;
    do {
      uVar3 = FUN_144a21736(*(undefined8 *)(lVar2 + lVar4),local_78);
      if ((char)uVar3 == '\0') break;
      bVar5 = (longlong)iVar1 * 8 + -8 != lVar4;
      lVar4 = lVar4 + 8;
    } while (bVar5);
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140701f96 FUN_140701f96 body=144 status=ok
// SIG undefined FUN_140701f96(void)

undefined8 FUN_140701f96(ushort *param_1)

{
  bool bVar1;
  ulonglong uVar2;
  byte bVar3;
  longlong lVar4;
  
  uVar2 = *(ulonglong *)(param_1 + 0x1c);
  if ((uVar2 >> 0x35 & 1) != 0) {
    if ((uVar2 & 0x1000004) == 0) {
      bVar1 = false;
    }
    else if ((uVar2 >> 0x30 & 1) == 0) {
      bVar1 = 0 < *(int *)(param_1 + 0x16);
    }
    else {
      bVar1 = true;
    }
    if ((((uint)uVar2 >> 0x17 & 1) != 0) || (!(bool)((uVar2 & 0x1200004) == 0 & (bVar1 ^ 1U)))) {
      uVar2 = CONCAT71((int7)(uVar2 >> 8),1);
    }
  }
  if (DAT_14c760e34 == 0) {
    bVar3 = 0;
  }
  else {
    lVar4 = (ulonglong)*param_1 * 0x3c;
    bVar3 = (byte)((uint)(&DAT_14ca814c8)[(ulonglong)*param_1 * 0xf] >> 0x1d) &
            *(byte *)((longlong)&DAT_14ca814d8 + lVar4 + 3) >> 4 &
            (byte)((*(uint *)(&DAT_14ca814cc + lVar4) & 8) >> 3);
  }
  return CONCAT71((int7)(uVar2 >> 8),(byte)uVar2 & bVar3 & *(int *)(param_1 + 8) == 0);
}



// FUNCTION 140702026 FUN_140702026 body=105 status=ok
// SIG undefined FUN_140702026(void)

void FUN_140702026(longlong param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_140702386();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  FUN_14070233a(param_1 + 0x870,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140702090 FUN_140702090 body=71 status=ok
// SIG undefined FUN_140702090(void)

void FUN_140702090(ulonglong *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  ulonglong uVar3;
  
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
    FUN_14070246c(param_1,iVar2);
  }
  uVar3 = *param_1;
  if ((uVar3 & 1) != 0) {
    uVar3 = (longlong)param_1 + ((longlong)uVar3 >> 0x18);
  }
  puVar1 = (undefined8 *)(uVar3 + (longlong)iVar2 * 0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  return;
}



// FUNCTION 1407020d8 FUN_1407020d8 body=375 status=ok
// SIG undefined FUN_1407020d8(void)

void FUN_1407020d8(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
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
      lVar3 = (longlong)iStack_5c;
      if (*(longlong *)(lVar2 + 0x30 + lVar3 * 0x50) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar2 + lVar3 * 0x50 + 0x20) != 0) {
        FUN_1400020a8();
      }
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140e9549c(param_1,0);
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



// FUNCTION 140702250 FUN_140702250 body=70 status=ok
// SIG undefined FUN_140702250(void)

void FUN_140702250(ulonglong *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (*param_1 != 0 && (*param_1 & 1) == 0) {
    FUN_1400020a8();
  }
  uVar1 = *param_2;
  uVar2 = ((longlong)uVar1 >> 0x18) + (longlong)param_2;
  if ((uVar1 & 1) == 0) {
    uVar2 = uVar1;
  }
  *param_1 = uVar2;
  *param_2 = 0;
  return;
}



// FUNCTION 140702296 FUN_140702296 body=163 status=ok
// SIG undefined FUN_140702296(void)

undefined8 * FUN_140702296(undefined8 *param_1,longlong param_2)

{
  ulonglong *puVar1;
  int iVar2;
  void *_Src;
  void *pvVar3;
  
  *param_1 = &PTR_LAB_14a3d30d0;
  param_1[1] = 0;
  iVar2 = *(int *)(param_2 + 0x10);
  pvVar3 = *(void **)(param_2 + 8);
  _Src = (void *)(param_2 + 8 + ((longlong)pvVar3 >> 0x18));
  if (((ulonglong)pvVar3 & 1) == 0) {
    _Src = pvVar3;
  }
  *(int *)(param_1 + 2) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    puVar1 = param_1 + 1;
    FUN_1407034f4(puVar1,iVar2,0);
    pvVar3 = (void *)*puVar1;
    if (((ulonglong)pvVar3 & 1) != 0) {
      pvVar3 = (void *)((longlong)puVar1 + ((longlong)pvVar3 >> 0x18));
    }
    memcpy(pvVar3,_Src,(longlong)iVar2 << 4);
  }
  *param_1 = &PTR_FUN_14a3cb610;
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 0x18);
  return param_1;
}



// FUNCTION 14070233a FUN_14070233a body=76 status=ok
// SIG undefined FUN_14070233a(void)

void FUN_14070233a(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_140702386();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_140702377;
    }
  }
  lVar2 = 0;
LAB_140702377:
  FUN_1448a6f9c(param_1,lVar2);
  return;
}



// FUNCTION 140702386 FUN_140702386 body=228 status=ok
// SIG undefined FUN_140702386(void)

longlong FUN_140702386(void)

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
  if (DAT_14cb49660 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14588a134;
    local_38 = &LAB_148408ce1;
    local_40 = &LAB_145bda750;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000008;
    local_60 = 8;
    local_68 = 0x180;
    FUN_14081cfa3(L"/Script/Water",L"WaterSubsystem",&DAT_14cb49660,FUN_146489a9c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb49660;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14070246c FUN_14070246c body=305 status=ok
// SIG undefined FUN_14070246c(void)

void FUN_14070246c(ulonglong *param_1,uint param_2,undefined8 param_3,code *param_4)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar1 = (uint)param_1[1];
  if ((int)uVar1 < (int)param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)((longlong)param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar1) {
      uVar3 = uVar1;
    }
    uVar4 = (ulonglong)(int)uVar3;
  }
  else {
    uVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
  }
  uVar2 = uVar4 * 0x10;
  if (DAT_14c872d28 != (longlong *)0x0) {
    param_4 = *(code **)(*DAT_14c872d28 + 0x60);
    if (param_4 != (code *)&LAB_14489e5c8) goto LAB_140702587;
    if (uVar2 < 0x7ff1) {
      uVar2 = (ulonglong)
              (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 & 0xfffffffffffffff]];
    }
    else {
      uVar4 = 0x10;
      if (0x10 < DAT_14c841df8) {
        uVar4 = (ulonglong)DAT_14c841df8;
      }
      uVar2 = -uVar4 & (uVar2 + uVar4) - 1;
    }
  }
  do {
    uVar4 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar2 >> 4)) {
      uVar4 = uVar2 >> 4 & 0xffffffff;
    }
    uVar3 = (uint)uVar4;
    *(uint *)((longlong)param_1 + 0xc) = uVar3;
    uVar2 = *param_1;
    if ((uVar2 & 1) == 0) {
      if ((uVar2 == 0) && ((int)uVar3 < 1)) {
        return;
      }
      if (-1 < (int)uVar3) {
        uVar4 = FUN_14001fdce(uVar2,uVar4 << 4,0x10);
        *param_1 = uVar4;
        return;
      }
    }
    else if (uVar3 <= param_2) {
      return;
    }
    FUN_1467ac767(uVar4,0x10);
LAB_140702587:
    uVar2 = (*param_4)();
  } while( true );
}



// FUNCTION 14070259e FUN_14070259e body=291 status=ok
// SIG undefined FUN_14070259e(void)

void FUN_14070259e(longlong *param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  longlong *plVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  longlong lVar10;
  bool bVar11;
  
  iVar1 = (int)param_1[5];
  if (iVar1 == 0) {
    iVar4 = -1;
  }
  else {
    iVar4 = -1;
    plVar6 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar6 = param_1 + 2;
    }
    uVar8 = (ulonglong)(iVar1 + 0x1fU >> 5);
    iVar7 = -0x3e - (iVar1 + 0x1fU & 0xffffffe0);
    uVar5 = 0xffffffff >> (-(char)iVar1 & 0x1fU);
    do {
      bVar11 = uVar8 == 0;
      uVar8 = uVar8 - 1;
      if (bVar11) goto LAB_14070261a;
      iVar7 = iVar7 + 0x20;
      uVar9 = uVar5 & *(uint *)((longlong)plVar6 + uVar8 * 4);
      uVar5 = 0xffffffff;
    } while (uVar9 == 0);
    uVar8 = (ulonglong)uVar9 * 2 + 1;
    lVar3 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    iVar4 = -(((uint)lVar3 ^ 0x3f) + iVar7);
  }
LAB_14070261a:
  iVar1 = iVar4 + 1;
  iVar7 = (int)param_1[1];
  if (iVar1 < iVar7) {
    if ((0 < *(int *)((longlong)param_1 + 0x34)) &&
       (uVar8 = (ulonglong)*(uint *)(param_1 + 6), *(uint *)(param_1 + 6) != 0xffffffff)) {
      lVar3 = *param_1;
      do {
        lVar10 = (longlong)(int)uVar8;
        if (iVar4 < (int)uVar8) {
          iVar7 = *(int *)(lVar3 + lVar10 * 8);
          iVar2 = *(int *)(lVar3 + 4 + lVar10 * 8);
          uVar8 = (ulonglong)iVar2;
          if (uVar8 != 0xffffffffffffffff) {
            *(int *)(lVar3 + uVar8 * 8) = iVar7;
          }
          if (iVar7 == -1) {
            *(int *)(param_1 + 6) = iVar2;
          }
          else {
            *(int *)(lVar3 + 4 + (longlong)iVar7 * 8) = iVar2;
          }
          *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + -1;
        }
        else {
          uVar8 = (ulonglong)*(uint *)(lVar3 + 4 + lVar10 * 8);
        }
      } while ((int)uVar8 != -1);
      iVar7 = (int)param_1[1];
    }
    if (iVar7 != iVar1) {
      *(int *)(param_1 + 1) = iVar1;
    }
    FUN_144a6134a(param_1 + 2,iVar1,(int)param_1[5] - iVar1);
    iVar7 = (int)param_1[1];
  }
  if (*(int *)((longlong)param_1 + 0xc) != iVar7) {
    FUN_140b584e0(param_1,iVar7);
    return;
  }
  return;
}



// FUNCTION 1407026c2 FUN_1407026c2 body=327 status=ok
// SIG undefined FUN_1407026c2(void)

void FUN_1407026c2(longlong *param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  longlong *plVar9;
  int iVar10;
  ulonglong uVar11;
  bool bVar12;
  
  iVar1 = (int)param_1[5];
  if (iVar1 == 0) {
    iVar5 = -1;
  }
  else {
    iVar5 = -1;
    plVar9 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar9 = param_1 + 2;
    }
    uVar11 = (ulonglong)(iVar1 + 0x1fU >> 5);
    iVar10 = -0x3e - (iVar1 + 0x1fU & 0xffffffe0);
    uVar6 = 0xffffffff >> (-(char)iVar1 & 0x1fU);
    do {
      bVar12 = uVar11 == 0;
      uVar11 = uVar11 - 1;
      if (bVar12) goto LAB_140702733;
      iVar10 = iVar10 + 0x20;
      uVar7 = uVar6 & *(uint *)((longlong)plVar9 + uVar11 * 4);
      uVar6 = 0xffffffff;
    } while (uVar7 == 0);
    uVar11 = (ulonglong)uVar7 * 2 + 1;
    lVar3 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    iVar5 = -(((uint)lVar3 ^ 0x3f) + iVar10);
  }
LAB_140702733:
  iVar1 = iVar5 + 1;
  iVar10 = (int)param_1[1];
  if (iVar1 < iVar10) {
    if ((0 < *(int *)((longlong)param_1 + 0x34)) &&
       (uVar11 = (ulonglong)*(uint *)(param_1 + 6), *(uint *)(param_1 + 6) != 0xffffffff)) {
      lVar3 = *param_1;
      do {
        lVar8 = (longlong)(int)uVar11;
        if (iVar5 < (int)uVar11) {
          iVar10 = *(int *)(lVar3 + lVar8 * 8);
          iVar2 = *(int *)(lVar3 + 4 + lVar8 * 8);
          uVar11 = (ulonglong)iVar2;
          if (uVar11 != 0xffffffffffffffff) {
            *(int *)(lVar3 + uVar11 * 8) = iVar10;
          }
          if (iVar10 == -1) {
            *(int *)(param_1 + 6) = iVar2;
          }
          else {
            *(int *)(lVar3 + 4 + (longlong)iVar10 * 8) = iVar2;
          }
          *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + -1;
        }
        else {
          uVar11 = (ulonglong)*(uint *)(lVar3 + 4 + lVar8 * 8);
        }
      } while ((int)uVar11 != -1);
      iVar10 = (int)param_1[1];
    }
    if (iVar10 != iVar1) {
      *(int *)(param_1 + 1) = iVar1;
    }
    *(int *)(param_1 + 5) = iVar1;
    iVar5 = iVar5 + 0x20;
    if (-1 < iVar1) {
      iVar5 = iVar1;
    }
    iVar10 = iVar1;
    if (iVar1 % 0x20 != 0) {
      plVar9 = param_1 + 2;
      if ((longlong *)param_1[4] != (longlong *)0x0) {
        plVar9 = (longlong *)param_1[4];
      }
      bVar4 = -(char)(iVar1 % 0x20);
      *(uint *)((longlong)plVar9 + (longlong)(iVar5 >> 5) * 4) =
           (uint)(*(int *)((longlong)plVar9 + (longlong)(iVar5 >> 5) * 4) << (bVar4 & 0x1f)) >>
           (bVar4 & 0x1f);
      iVar10 = (int)param_1[1];
    }
  }
  if (*(int *)((longlong)param_1 + 0xc) == iVar10) {
    return;
  }
  FUN_140b584e0(param_1);
  return;
}



// FUNCTION 14070280a FUN_14070280a body=243 status=ok
// SIG undefined FUN_14070280a(void)

void FUN_14070280a(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar3 = (ulonglong)uVar1;
  if (-1 < (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar3 = 4;
      if (4 < uVar1) {
        uVar3 = (ulonglong)uVar1;
      }
    }
    else {
      uVar3 = uVar3 + (uVar3 * 3 >> 3) + 0x10;
    }
    uVar2 = uVar3 * 0x20;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar3 < 0x400) {
          uVar2 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar3 * 2]];
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
        uVar2 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar2,4);
      }
    }
    uVar3 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar2 >> 5)) {
      uVar3 = uVar2 >> 5 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar3;
    FUN_1446f8d3c(param_1,0,uVar3,0x20,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar3);
}



// FUNCTION 1407028fe FUN_1407028fe body=474 status=ok
// SIG undefined FUN_1407028fe(void)

void FUN_1407028fe(longlong param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined1 auStack_78 [40];
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar2 = *(int *)(param_1 + 0x58);
  if (iVar2 == 0) {
    uVar14 = 0;
    uVar15 = 1;
    iVar6 = 0;
    iVar11 = 0;
  }
  else {
    puVar5 = *(uint **)(param_1 + 0x50);
    if (*(uint **)(param_1 + 0x50) == (uint *)0x0) {
      puVar5 = (uint *)(param_1 + 0x40);
    }
    uVar10 = *puVar5;
    if (uVar10 == 0) {
      iVar6 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar6 = iVar2 + -1;
      }
      uVar14 = 0;
      uVar15 = (ulonglong)(uint)(iVar6 >> 5);
      if (iVar6 >> 5 < 1) {
        uVar15 = uVar14;
      }
      iVar11 = 0;
      do {
        if (uVar15 == uVar14) goto LAB_140702a72;
        iVar11 = iVar11 + 0x20;
        uVar10 = puVar5[uVar14 + 1];
        uVar14 = uVar14 + 1;
      } while (uVar10 == 0);
    }
    else {
      uVar14 = 0;
      iVar11 = 0;
    }
    uVar15 = (ulonglong)(-uVar10 & uVar10);
    uVar1 = uVar15 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar6 = (iVar11 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar6) {
      iVar6 = iVar2;
    }
  }
  if (iVar6 != iVar2) {
    uVar10 = 0xffffffff;
    iVar4 = iVar2;
    do {
      lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x30) + (longlong)iVar6 * 8);
      if (lVar12 != 0) {
        local_50 = lVar12;
        cVar3 = (*(code *)*param_2)(param_2[1],&local_50);
        if (cVar3 == '\0') break;
        iVar4 = *(int *)(param_1 + 0x58);
      }
      uVar10 = uVar10 & ~(uint)uVar15;
      puVar5 = *(uint **)(param_1 + 0x50);
      if (*(uint **)(param_1 + 0x50) == (uint *)0x0) {
        puVar5 = (uint *)(param_1 + 0x40);
      }
      iVar6 = (int)uVar14;
      lVar12 = (longlong)iVar6;
      uVar7 = puVar5[lVar12] & uVar10;
      if (uVar7 == 0) {
        iVar8 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar8 = iVar4 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar11 = iVar11 + 0x20;
        iVar9 = iVar8;
        if (iVar8 < iVar6) {
          iVar9 = iVar6;
        }
        if (iVar6 < iVar8) {
          lVar13 = 0;
          do {
            uVar7 = puVar5[lVar12 + lVar13 + 1];
            if (uVar7 != 0) {
              uVar14 = (ulonglong)(iVar6 + (int)lVar13 + 1);
              uVar10 = 0xffffffff;
              goto LAB_140702a45;
            }
            iVar11 = iVar11 + 0x20;
            lVar13 = lVar13 + 1;
          } while (iVar9 - lVar12 != lVar13);
          uVar10 = 0xffffffff;
          iVar6 = iVar9;
        }
        uVar14 = (ulonglong)(iVar6 + 1);
        iVar6 = iVar4;
      }
      else {
LAB_140702a45:
        uVar15 = (ulonglong)(-uVar7 & uVar7);
        uVar1 = uVar15 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        iVar6 = (iVar11 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
        if (iVar4 <= iVar6) {
          iVar6 = iVar4;
        }
      }
    } while (iVar6 != iVar2);
  }
LAB_140702a72:
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140702ada FUN_140702ada body=482 status=ok
// SIG undefined FUN_140702ada(void)

void FUN_140702ada(longlong param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined1 auStack_78 [40];
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar2 = *(int *)(param_1 + 0x90);
  if (iVar2 == 0) {
    uVar14 = 0;
    uVar15 = 1;
    iVar6 = 0;
    iVar11 = 0;
  }
  else {
    puVar5 = *(uint **)(param_1 + 0x88);
    if (*(uint **)(param_1 + 0x88) == (uint *)0x0) {
      puVar5 = (uint *)(param_1 + 0x78);
    }
    uVar10 = *puVar5;
    if (uVar10 == 0) {
      iVar6 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar6 = iVar2 + -1;
      }
      uVar14 = 0;
      uVar15 = (ulonglong)(uint)(iVar6 >> 5);
      if (iVar6 >> 5 < 1) {
        uVar15 = uVar14;
      }
      iVar11 = 0;
      do {
        if (uVar15 == uVar14) goto LAB_140702c56;
        iVar11 = iVar11 + 0x20;
        uVar10 = puVar5[uVar14 + 1];
        uVar14 = uVar14 + 1;
      } while (uVar10 == 0);
    }
    else {
      uVar14 = 0;
      iVar11 = 0;
    }
    uVar15 = (ulonglong)(-uVar10 & uVar10);
    uVar1 = uVar15 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar6 = (iVar11 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar6) {
      iVar6 = iVar2;
    }
  }
  if (iVar6 != iVar2) {
    uVar10 = 0xffffffff;
    iVar4 = iVar2;
    do {
      lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x68) + (longlong)iVar6 * 8);
      if (lVar12 != 0) {
        local_50 = lVar12;
        cVar3 = (*(code *)*param_2)(param_2[1],&local_50);
        if (cVar3 == '\0') break;
        iVar4 = *(int *)(param_1 + 0x90);
      }
      uVar10 = uVar10 & ~(uint)uVar15;
      puVar5 = *(uint **)(param_1 + 0x88);
      if (*(uint **)(param_1 + 0x88) == (uint *)0x0) {
        puVar5 = (uint *)(param_1 + 0x78);
      }
      iVar6 = (int)uVar14;
      lVar12 = (longlong)iVar6;
      uVar7 = puVar5[lVar12] & uVar10;
      if (uVar7 == 0) {
        iVar8 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar8 = iVar4 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar11 = iVar11 + 0x20;
        iVar9 = iVar8;
        if (iVar8 < iVar6) {
          iVar9 = iVar6;
        }
        if (iVar6 < iVar8) {
          lVar13 = 0;
          do {
            uVar7 = puVar5[lVar12 + lVar13 + 1];
            if (uVar7 != 0) {
              uVar14 = (ulonglong)(iVar6 + (int)lVar13 + 1);
              uVar10 = 0xffffffff;
              goto LAB_140702c29;
            }
            iVar11 = iVar11 + 0x20;
            lVar13 = lVar13 + 1;
          } while (iVar9 - lVar12 != lVar13);
          uVar10 = 0xffffffff;
          iVar6 = iVar9;
        }
        uVar14 = (ulonglong)(iVar6 + 1);
        iVar6 = iVar4;
      }
      else {
LAB_140702c29:
        uVar15 = (ulonglong)(-uVar7 & uVar7);
        uVar1 = uVar15 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        iVar6 = (iVar11 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
        if (iVar4 <= iVar6) {
          iVar6 = iVar4;
        }
      }
    } while (iVar6 != iVar2);
  }
LAB_140702c56:
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140702cbe FUN_140702cbe body=2100 status=ok
// SIG undefined FUN_140702cbe(void)

void FUN_140702cbe(longlong *param_1,longlong param_2)

{
  uint *puVar1;
  byte bVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  int iVar8;
  bool bVar9;
  undefined1 auStack_118 [32];
  longlong *local_f8;
  undefined8 *local_f0;
  longlong local_e0;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined1 local_c8;
  undefined1 uStack_c7;
  undefined1 uStack_c6;
  undefined1 uStack_c5;
  undefined4 uStack_c4;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined8 local_b4;
  undefined8 uStack_ac;
  uint local_a4;
  undefined1 local_a0;
  undefined4 local_9c;
  wchar_t *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong *local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined8 uStack_64;
  uint local_5c;
  undefined1 local_58;
  undefined4 local_54;
  wchar_t *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_78 = param_1 + 2;
  local_80 = 0;
  local_70 = 1;
  local_6c = 0;
  uStack_64 = 0;
  local_5c = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_58 = 0;
  local_54 = 0;
  local_50 = L"WaterAuxDataBuffer";
  local_48 = 0;
  uStack_40 = 0;
  uVar3 = *(uint *)(param_1 + 4);
  if (uVar3 < 0x10000000) {
    iVar8 = uVar3 << 4;
    local_c8 = (undefined1)iVar8;
    uStack_c7 = (undefined1)((uint)iVar8 >> 8);
    uStack_c6 = (undefined1)((uint)iVar8 >> 0x10);
    uStack_c5 = (undefined1)((uint)iVar8 >> 0x18);
    uStack_c4 = 0x10;
    uStack_c0._0_4_ = 0x4101;
    if (uVar3 == 0) goto LAB_1407033af;
  }
  else {
    FUN_140033559("Runtime\\Core\\Public\\Containers/DynamicRHIResourceArray.h",0x47,
                  L"Resource data size too large for uint32, will overflow. Calculate with larger data type or use fewer elements. sizeof(ElementType): %d"
                  ,0x10);
    local_c8 = 0;
    uStack_c7 = 0;
    uStack_c6 = 0;
    uStack_c5 = 0;
LAB_1407033af:
    uStack_c0._0_4_ = 0x4101;
    uStack_c4 = 0x10;
    FUN_14570b4be(param_2,&local_80,0x4101,0x10);
  }
  if (*(char *)(param_2 + 0x69) == '\0') {
    FUN_14002049c(param_2,1);
    local_f0 = &local_80;
    local_f8 = (longlong *)CONCAT44(local_f8._4_4_,0x70);
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_d8,param_2,&local_c8);
    *(undefined4 *)
     (CONCAT44(local_d8._4_4_,
               CONCAT13(local_d8._3_1_,
                        CONCAT12(local_d8._2_1_,CONCAT11(local_d8._1_1_,(undefined1)local_d8)))) +
     0x18) = 0x70;
    FUN_14002049c(param_2,0);
  }
  else {
    local_f0 = &local_80;
    local_f8 = (longlong *)CONCAT44(local_f8._4_4_,0x70);
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_d8,param_2,&local_c8);
    *(undefined4 *)
     (CONCAT44(local_d8._4_4_,
               CONCAT13(local_d8._3_1_,
                        CONCAT12(local_d8._2_1_,CONCAT11(local_d8._1_1_,(undefined1)local_d8)))) +
     0x18) = 0x70;
  }
  plVar5 = (longlong *)(*param_1 + 0x10);
  if (plVar5 == &local_d8) {
LAB_140702e9b:
    lVar4 = CONCAT44(local_d8._4_4_,
                     CONCAT13(local_d8._3_1_,
                              CONCAT12(local_d8._2_1_,CONCAT11(local_d8._1_1_,(undefined1)local_d8))
                             ));
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
          plVar6 = (longlong *)FUN_14001cc68(0x10,8);
          plVar6[1] = lVar4;
          plVar5 = DAT_14ca843c0;
          plVar7 = DAT_14ca843c8;
          if ((bVar2 & 2) == 0) {
            do {
              *plVar6 = (longlong)plVar5;
              LOCK();
              bVar9 = plVar5 != DAT_14ca843c0;
              plVar7 = plVar6;
              if (bVar9) {
                plVar5 = DAT_14ca843c0;
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
              plVar5 = plVar6;
              if (bVar9) {
                plVar7 = DAT_14ca843c8;
                plVar5 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar5;
              UNLOCK();
            } while (bVar9);
          }
        }
      }
    }
  }
  else {
    lVar4 = *plVar5;
    *plVar5 = CONCAT44(local_d8._4_4_,
                       CONCAT13(local_d8._3_1_,
                                CONCAT12(local_d8._2_1_,
                                         CONCAT11(local_d8._1_1_,(undefined1)local_d8))));
    local_d8._0_1_ = 0;
    local_d8._1_1_ = 0;
    local_d8._2_1_ = 0;
    local_d8._3_1_ = 0;
    local_d8._4_4_ = 0;
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
          plVar6 = (longlong *)FUN_14001cc68(0x10,8);
          plVar6[1] = lVar4;
          plVar5 = DAT_14ca843c0;
          plVar7 = DAT_14ca843c8;
          if ((bVar2 & 2) == 0) {
            do {
              *plVar6 = (longlong)plVar5;
              LOCK();
              bVar9 = plVar5 != DAT_14ca843c0;
              plVar7 = plVar6;
              if (bVar9) {
                plVar5 = DAT_14ca843c0;
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
              plVar5 = plVar6;
              if (bVar9) {
                plVar7 = DAT_14ca843c8;
                plVar5 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar5;
              UNLOCK();
            } while (bVar9);
          }
        }
      }
      goto LAB_140702e9b;
    }
  }
  if ((*(longlong *)(*param_1 + 0x10) == 0) ||
     ((*(byte *)(*(longlong *)(*param_1 + 0x10) + 0x28) & 0x10) == 0)) {
    uStack_c7 = 1;
    uStack_c6 = 1;
  }
  else {
    uStack_c7 = 0;
    uStack_c6 = 4;
  }
  uStack_c0._4_4_ = 0;
  uStack_c0._0_4_ = 0;
  uStack_c4 = 0;
  uStack_c5 = 0;
  local_c8 = 0;
  local_f8 = (longlong *)&local_c8;
  (**(code **)(*DAT_14ca83900 + 0x1b8))(DAT_14ca83900,&local_d8,param_2);
  plVar5 = (longlong *)(*param_1 + 0x18);
  if (plVar5 == &local_d8) {
LAB_140702fd1:
    lVar4 = CONCAT44(local_d8._4_4_,
                     CONCAT13(local_d8._3_1_,
                              CONCAT12(local_d8._2_1_,CONCAT11(local_d8._1_1_,(undefined1)local_d8))
                             ));
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
          plVar6 = (longlong *)FUN_14001cc68(0x10,8);
          plVar6[1] = lVar4;
          plVar5 = DAT_14ca843c0;
          plVar7 = DAT_14ca843c8;
          if ((bVar2 & 2) == 0) {
            do {
              *plVar6 = (longlong)plVar5;
              LOCK();
              bVar9 = plVar5 != DAT_14ca843c0;
              plVar7 = plVar6;
              if (bVar9) {
                plVar5 = DAT_14ca843c0;
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
              plVar5 = plVar6;
              if (bVar9) {
                plVar7 = DAT_14ca843c8;
                plVar5 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar5;
              UNLOCK();
            } while (bVar9);
          }
        }
      }
    }
  }
  else {
    lVar4 = *plVar5;
    *plVar5 = CONCAT44(local_d8._4_4_,
                       CONCAT13(local_d8._3_1_,
                                CONCAT12(local_d8._2_1_,
                                         CONCAT11(local_d8._1_1_,(undefined1)local_d8))));
    local_d8._0_1_ = 0;
    local_d8._1_1_ = 0;
    local_d8._2_1_ = 0;
    local_d8._3_1_ = 0;
    local_d8._4_4_ = 0;
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
          plVar6 = (longlong *)FUN_14001cc68(0x10,8);
          plVar6[1] = lVar4;
          plVar5 = DAT_14ca843c0;
          plVar7 = DAT_14ca843c8;
          if ((bVar2 & 2) == 0) {
            do {
              *plVar6 = (longlong)plVar5;
              LOCK();
              bVar9 = plVar5 != DAT_14ca843c0;
              plVar7 = plVar6;
              if (bVar9) {
                plVar5 = DAT_14ca843c0;
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
              plVar5 = plVar6;
              if (bVar9) {
                plVar7 = DAT_14ca843c8;
                plVar5 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar5;
              UNLOCK();
            } while (bVar9);
          }
        }
      }
      goto LAB_140702fd1;
    }
  }
  uStack_c0 = param_1 + 6;
  local_c8 = 0;
  uStack_c7 = 0;
  uStack_c6 = 0;
  uStack_c5 = 0;
  uStack_c4 = 0;
  local_b8 = 1;
  local_b4 = 0;
  uStack_ac = 0;
  local_a4 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_a0 = 0;
  local_9c = 0;
  local_98 = L"WaterBodyDataBuffer";
  local_90 = 0;
  uStack_88 = 0;
  uVar3 = *(uint *)(param_1 + 8);
  if (uVar3 < 0x10000000) {
    iVar8 = uVar3 << 4;
    local_d8._0_1_ = (undefined1)iVar8;
    local_d8._1_1_ = (undefined1)((uint)iVar8 >> 8);
    local_d8._2_1_ = (undefined1)((uint)iVar8 >> 0x10);
    local_d8._3_1_ = (undefined1)((uint)iVar8 >> 0x18);
    local_d8._4_4_ = 0x10;
    uStack_d0 = 0x4101;
    if (uVar3 == 0) goto LAB_140703405;
  }
  else {
    FUN_140033559("Runtime\\Core\\Public\\Containers/DynamicRHIResourceArray.h",0x47,
                  L"Resource data size too large for uint32, will overflow. Calculate with larger data type or use fewer elements. sizeof(ElementType): %d"
                  ,0x10);
    local_d8._0_1_ = 0;
    local_d8._1_1_ = 0;
    local_d8._2_1_ = 0;
    local_d8._3_1_ = 0;
LAB_140703405:
    uStack_d0 = 0x4101;
    local_d8._4_4_ = 0x10;
    FUN_14570b4be(param_2,&local_c8,0x4101,0x10);
  }
  if (*(char *)(param_2 + 0x69) == '\0') {
    FUN_14002049c(param_2,1);
    local_f0 = (undefined8 *)&local_c8;
    local_f8 = (longlong *)CONCAT44(local_f8._4_4_,0x70);
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_e0,param_2,&local_d8);
    *(undefined4 *)(local_e0 + 0x18) = 0x70;
    FUN_14002049c(param_2,0);
  }
  else {
    local_f0 = (undefined8 *)&local_c8;
    local_f8 = (longlong *)CONCAT44(local_f8._4_4_,0x70);
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_e0,param_2,&local_d8);
    *(undefined4 *)(local_e0 + 0x18) = 0x70;
  }
  plVar5 = (longlong *)*param_1;
  if (plVar5 == &local_e0) {
LAB_1407031c1:
    lVar4 = local_e0;
    if (local_e0 != 0) {
      LOCK();
      puVar1 = (uint *)(local_e0 + 8);
      uVar3 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_e0 + 8);
        LOCK();
        uVar3 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar3 >> 0x1e & 1) == 0) {
          bVar2 = *(byte *)(local_e0 + 0xd);
          plVar6 = (longlong *)FUN_14001cc68(0x10,8);
          plVar6[1] = lVar4;
          plVar5 = DAT_14ca843c0;
          plVar7 = DAT_14ca843c8;
          if ((bVar2 & 2) == 0) {
            do {
              *plVar6 = (longlong)plVar5;
              LOCK();
              bVar9 = plVar5 != DAT_14ca843c0;
              plVar7 = plVar6;
              if (bVar9) {
                plVar5 = DAT_14ca843c0;
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
              plVar5 = plVar6;
              if (bVar9) {
                plVar7 = DAT_14ca843c8;
                plVar5 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar5;
              UNLOCK();
            } while (bVar9);
          }
        }
      }
    }
  }
  else {
    lVar4 = *plVar5;
    *plVar5 = local_e0;
    local_e0 = 0;
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
          plVar6 = (longlong *)FUN_14001cc68(0x10,8);
          plVar6[1] = lVar4;
          plVar5 = DAT_14ca843c0;
          plVar7 = DAT_14ca843c8;
          if ((bVar2 & 2) == 0) {
            do {
              *plVar6 = (longlong)plVar5;
              LOCK();
              bVar9 = plVar5 != DAT_14ca843c0;
              plVar7 = plVar6;
              if (bVar9) {
                plVar5 = DAT_14ca843c0;
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
              plVar5 = plVar6;
              if (bVar9) {
                plVar7 = DAT_14ca843c8;
                plVar5 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar5;
              UNLOCK();
            } while (bVar9);
          }
        }
      }
      goto LAB_1407031c1;
    }
  }
  if ((*(longlong *)*param_1 == 0) || ((*(byte *)(*(longlong *)*param_1 + 0x28) & 0x10) == 0)) {
    local_d8._1_1_ = 1;
    local_d8._2_1_ = 1;
  }
  else {
    local_d8._1_1_ = 0;
    local_d8._2_1_ = 4;
  }
  uStack_cc = 0;
  uStack_d0 = 0;
  local_d8._4_4_ = 0;
  local_d8._3_1_ = 0;
  local_d8._0_1_ = 0;
  local_f8 = &local_d8;
  (**(code **)(*DAT_14ca83900 + 0x1b8))(DAT_14ca83900,&local_e0,param_2);
  plVar5 = (longlong *)(*param_1 + 8);
  if (plVar5 != &local_e0) {
    lVar4 = *plVar5;
    *plVar5 = local_e0;
    local_e0 = 0;
    if (lVar4 == 0) goto LAB_140703350;
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
        plVar6 = (longlong *)FUN_14001cc68(0x10,8);
        plVar6[1] = lVar4;
        plVar5 = DAT_14ca843c0;
        plVar7 = DAT_14ca843c8;
        if ((bVar2 & 2) == 0) {
          do {
            *plVar6 = (longlong)plVar5;
            LOCK();
            bVar9 = plVar5 != DAT_14ca843c0;
            plVar7 = plVar6;
            if (bVar9) {
              plVar5 = DAT_14ca843c0;
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
            plVar5 = plVar6;
            if (bVar9) {
              plVar7 = DAT_14ca843c8;
              plVar5 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar5;
            UNLOCK();
          } while (bVar9);
        }
      }
    }
  }
  lVar4 = local_e0;
  if (local_e0 != 0) {
    LOCK();
    puVar1 = (uint *)(local_e0 + 8);
    uVar3 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_e0 + 8);
      LOCK();
      uVar3 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar3 >> 0x1e & 1) == 0) {
        bVar2 = *(byte *)(local_e0 + 0xd);
        plVar6 = (longlong *)FUN_14001cc68(0x10,8);
        plVar6[1] = lVar4;
        plVar5 = DAT_14ca843c0;
        plVar7 = DAT_14ca843c8;
        if ((bVar2 & 2) == 0) {
          do {
            *plVar6 = (longlong)plVar5;
            LOCK();
            bVar9 = plVar5 != DAT_14ca843c0;
            plVar7 = plVar6;
            if (bVar9) {
              plVar5 = DAT_14ca843c0;
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
            plVar5 = plVar6;
            if (bVar9) {
              plVar7 = DAT_14ca843c8;
              plVar5 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar5;
            UNLOCK();
          } while (bVar9);
        }
      }
    }
  }
LAB_140703350:
  if ((local_38 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1407034f4 FUN_1407034f4 body=272 status=ok
// SIG undefined FUN_1407034f4(void)

void FUN_1407034f4(ulonglong *param_1,uint param_2,int param_3,code *param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  
  if (param_2 == 0) {
    uVar5 = 0;
    goto LAB_140703578;
  }
  uVar5 = (ulonglong)param_2;
  uVar1 = (longlong)(int)param_2 * 0x10;
  if (DAT_14c872d28 != (longlong *)0x0) {
    param_4 = *(code **)(*DAT_14c872d28 + 0x60);
    if (param_4 != (code *)&LAB_14489e5c8) goto LAB_1407035ec;
    if (uVar1 < 0x7ff1) {
      uVar1 = (ulonglong)
              (ushort)(&DAT_14c841d90)
                      [0x32 - (byte)(&DAT_14c841e00)[(longlong)(int)param_2 & 0xfffffffffffffff]];
    }
    else {
      uVar2 = 0x10;
      if (0x10 < DAT_14c841df8) {
        uVar2 = (ulonglong)DAT_14c841df8;
      }
      uVar1 = -uVar2 & (uVar1 + uVar2) - 1;
    }
  }
  do {
    iVar3 = (int)uVar5;
    uVar5 = 0x7fffffff;
    if (iVar3 <= (int)(uVar1 >> 4)) {
      uVar5 = uVar1 >> 4 & 0xffffffff;
    }
LAB_140703578:
    iVar4 = (int)uVar5;
    iVar3 = param_3;
    if (iVar4 <= param_3) goto LAB_1407035ad;
    uVar1 = *param_1;
    if ((uVar1 & 1) == 0) {
      iVar3 = iVar4;
      if (iVar4 < 1 && uVar1 == 0) goto LAB_1407035ad;
      if (-1 < iVar4) {
        uVar5 = FUN_14001fdce(uVar1,uVar5 << 4,0x10);
        *param_1 = uVar5;
LAB_1407035ad:
        *(int *)((longlong)param_1 + 0xc) = iVar3;
        return;
      }
    }
    else {
      param_3 = 0;
      iVar3 = param_3;
      if (iVar4 == 0) goto LAB_1407035ad;
    }
    FUN_1467ac767(uVar5,0x10);
LAB_1407035ec:
    uVar1 = (*param_4)();
  } while( true );
}



// FUNCTION 140703604 FUN_140703604 body=109 status=ok
// SIG undefined FUN_140703604(void)

void FUN_140703604(longlong *param_1)

{
  byte *pbVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if ((int)param_1[3] != DAT_14c979c6c) {
    *(int *)(param_1 + 3) = DAT_14c979c6c;
    *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x12) | 1;
    lVar3 = param_1[5];
    if ((longlong)(int)lVar3 != 0) {
      lVar2 = param_1[4];
      lVar4 = 0;
      do {
        pbVar1 = (byte *)(lVar2 + 0x68 + lVar4);
        *pbVar1 = *pbVar1 | 7;
        lVar4 = lVar4 + 0x70;
      } while ((longlong)(int)lVar3 * 0x70 - lVar4 != 0);
    }
  }
  if ((*(byte *)(param_1 + 0x12) & 1) == 0) {
    if ((*(byte *)(param_1 + 0x12) & 2) == 0) {
      return;
    }
  }
  else {
    (**(code **)(*param_1 + 0x10))(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x000140703640. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1);
  return;
}



// FUNCTION 140703672 FUN_140703672 body=26 status=ok
// SIG undefined FUN_140703672(void)

void FUN_140703672(longlong param_1)

{
  FUN_140de26ae();
  *(byte *)(param_1 + 0x90) = *(byte *)(param_1 + 0x90) & 0xfd;
  return;
}



// FUNCTION 14070368c FUN_14070368c body=68 status=ok
// SIG undefined FUN_14070368c(void)

void FUN_14070368c(longlong *param_1)

{
  FUN_1409d1378();
  (**(code **)(*param_1 + 0x20))(param_1);
  FUN_1408624ae(param_1);
  FUN_1428fea26(param_1);
  FUN_1428feeb2(param_1);
  (**(code **)(*param_1 + 0x28))(param_1);
  *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x12) & 0xfe;
  return;
}



// FUNCTION 1407036d0 FUN_1407036d0 body=1211 status=ok
// SIG undefined FUN_1407036d0(void)

bool FUN_1407036d0(longlong param_1,float param_2,float param_3,undefined4 param_4,float param_5,
                  longlong *param_6,longlong *param_7)

{
  undefined4 *puVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  bool bVar5;
  longlong lVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  undefined1 auStack_168 [32];
  float local_148;
  double *local_140;
  void ****local_138 [2];
  void ***local_128;
  undefined8 uStack_120;
  void **local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  double local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  double local_d8;
  undefined4 local_d0;
  uint uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  double local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  double local_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_168;
  bVar5 = false;
  if (param_3 - param_2 <= 0.0) goto LAB_14070391c;
  lVar4 = param_1 + 0x668;
  local_e8 = 0;
  uVar7 = FUN_140753fde(lVar4,param_2);
  FUN_140703b8c(param_1,&local_e8,uVar7,param_4);
  fVar9 = (float)((double)(param_3 - param_2) * 0.5 + (double)param_2);
  local_108._0_4_ = 0;
  uVar7 = FUN_140753fde(lVar4,fVar9);
  FUN_140703b8c(param_1,&local_108,uVar7,param_4);
  local_c0 = local_f8;
  local_d0 = (undefined4)local_108;
  uStack_cc = local_108._4_4_;
  uStack_c8 = (uint)uStack_100;
  uStack_c4 = uStack_100._4_4_;
  local_108 = (void *)((ulonglong)local_108._4_4_ << 0x20);
  uVar7 = FUN_140753fde(lVar4,param_3,&local_108);
  FUN_140703b8c(param_1,&local_108,uVar7,param_4);
  local_a8 = local_f8;
  local_b8 = (undefined4)local_108;
  uStack_b4 = local_108._4_4_;
  uStack_b0 = (uint)uStack_100;
  uStack_ac = uStack_100._4_4_;
  fVar8 = (float)FUN_1402b5c34(&local_d0,&local_e8,&local_b8);
  if (param_5 < fVar8) {
    local_f8 = 0.0;
    uStack_f0 = 0;
    local_108 = (void *)0x0;
    uStack_100 = 0;
    local_118 = (void **)0x0;
    uStack_110 = 0;
    local_128 = (void *)0x0;
    uStack_120 = 0;
    local_138[0] = local_138 + 2;
    local_148 = param_5;
    local_140 = (double *)&local_108;
    FUN_1407036d0(param_1,param_2,fVar9,param_4);
    local_148 = param_5;
    local_140 = &local_f8;
    local_138[0] = &local_118;
    FUN_1407036d0(param_1,fVar9,param_3,param_4);
    if ((0 < (int)(uint)uStack_100) && (0 < (int)uStack_f0)) {
      uStack_100 = CONCAT44(uStack_100._4_4_,(uint)uStack_100 + -1);
      FUN_140704026();
      uStack_120 = CONCAT44(uStack_120._4_4_,(uint)uStack_120 + -1);
      FUN_140704066();
    }
    FUN_14070416c(&local_108,&local_f8);
    uVar3 = uStack_120;
    lVar4 = (longlong)(int)(uint)uStack_110;
    if (lVar4 != 0) {
      iVar2 = (uint)uStack_120;
      lVar6 = (longlong)(int)(uint)uStack_120;
      uStack_120 = CONCAT44(uStack_120._4_4_,(uint)uStack_120 + (uint)uStack_110);
      if ((uint)(uStack_120._4_4_ - iVar2) < (uint)uStack_110) {
        FUN_144941252(local_138 + 2,uVar3 & 0xffffffff);
      }
      memcpy((void *)(lVar6 * 8 + (longlong)local_128),local_118,lVar4 << 3);
    }
    lVar4 = (longlong)(int)(uint)uStack_100;
    if (lVar4 != 0) {
      iVar2 = (int)param_6[1];
      *(uint *)(param_6 + 1) = iVar2 + (uint)uStack_100;
      if ((uint)(*(int *)((longlong)param_6 + 0xc) - iVar2) < (uint)uStack_100) {
        FUN_1403e3958(param_6,iVar2);
      }
      memcpy((void *)((longlong)iVar2 * 0x18 + *param_6),local_108,lVar4 * 0x18);
    }
    lVar4 = (longlong)(int)(uint)uStack_120;
    if (lVar4 != 0) {
      iVar2 = (int)param_7[1];
      *(uint *)(param_7 + 1) = iVar2 + (uint)uStack_120;
      if ((uint)(*(int *)((longlong)param_7 + 0xc) - iVar2) < (uint)uStack_120) {
        FUN_144941252(param_7,iVar2);
      }
      memcpy((void *)((longlong)iVar2 * 8 + *param_7),local_128,lVar4 << 3);
    }
    lVar4 = 0x20;
    do {
      if (*(longlong *)((longlong)local_138 + lVar4) != 0) {
        FUN_1400020a8();
      }
      lVar4 = lVar4 + -0x10;
    } while (lVar4 != 0);
    lVar4 = 0x20;
    do {
      if (*(longlong *)((longlong)&local_118 + lVar4) != 0) {
        FUN_1400020a8();
      }
      lVar4 = lVar4 + -0x10;
    } while (lVar4 != 0);
  }
  else {
    iVar2 = (int)param_6[1];
    *(uint *)(param_6 + 1) = iVar2 + 1U;
    if (*(uint *)((longlong)param_6 + 0xc) < iVar2 + 1U) {
      FUN_1403e3958(param_6,iVar2);
    }
    lVar4 = *param_6;
    *(double *)(lVar4 + 0x10 + (longlong)iVar2 * 0x18) = local_d8;
    puVar1 = (undefined4 *)(lVar4 + (longlong)iVar2 * 0x18);
    *puVar1 = local_e8;
    puVar1[1] = uStack_e4;
    puVar1[2] = uStack_e0;
    puVar1[3] = uStack_dc;
    iVar2 = (int)param_7[1];
    *(uint *)(param_7 + 1) = iVar2 + 1U;
    if (*(uint *)((longlong)param_7 + 0xc) < iVar2 + 1U) {
      FUN_144941252(param_7,iVar2);
    }
    *(double *)(*param_7 + (longlong)iVar2 * 8) = (double)param_2;
    if (((double)CONCAT44(uStack_e4,local_e8) == (double)CONCAT44(uStack_b4,local_b8)) &&
       (!NAN((double)CONCAT44(uStack_e4,local_e8)) && !NAN((double)CONCAT44(uStack_b4,local_b8)))) {
      if (((double)CONCAT44(uStack_dc,uStack_e0) == (double)CONCAT44(uStack_ac,uStack_b0)) &&
         (!NAN((double)CONCAT44(uStack_dc,uStack_e0)) && !NAN((double)CONCAT44(uStack_ac,uStack_b0))
         )) {
        if ((local_d8 == local_a8) && (!NAN(local_d8) && !NAN(local_a8))) goto LAB_140703914;
      }
    }
    iVar2 = (int)param_6[1];
    *(uint *)(param_6 + 1) = iVar2 + 1U;
    if (*(uint *)((longlong)param_6 + 0xc) < iVar2 + 1U) {
      FUN_1403e3958(param_6,iVar2);
    }
    lVar4 = *param_6;
    *(double *)(lVar4 + 0x10 + (longlong)iVar2 * 0x18) = local_a8;
    puVar1 = (undefined4 *)(lVar4 + (longlong)iVar2 * 0x18);
    *puVar1 = local_b8;
    puVar1[1] = uStack_b4;
    puVar1[2] = uStack_b0;
    puVar1[3] = uStack_ac;
    iVar2 = (int)param_7[1];
    *(uint *)(param_7 + 1) = iVar2 + 1U;
    if (*(uint *)((longlong)param_7 + 0xc) < iVar2 + 1U) {
      FUN_144941252(param_7,iVar2);
    }
    *(double *)(*param_7 + (longlong)iVar2 * 8) = (double)param_3;
  }
LAB_140703914:
  bVar5 = 0 < (int)param_6[1];
LAB_14070391c:
  if ((local_a0 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar5;
}



// FUNCTION 140703b8c FUN_140703b8c body=340 status=ok
// SIG undefined FUN_140703b8c(void)

undefined1 (*) [16]
FUN_140703b8c(longlong param_1,undefined1 (*param_2) [16],undefined8 param_3,int param_4)

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
  double dVar10;
  double dVar11;
  double dVar12;
  
  FUN_140703ce0(param_1 + 0x620,param_2,param_3,&DAT_14c8464e0);
  if (param_4 == 1) {
    dVar8 = *(double *)*param_2 * *(double *)(param_1 + 0x280);
    dVar9 = *(double *)(*param_2 + 8) * *(double *)(param_1 + 0x288);
    dVar7 = *(double *)param_2[1] * *(double *)(param_1 + 0x290);
    dVar4 = *(double *)(param_1 + 0x240);
    dVar5 = *(double *)(param_1 + 0x248);
    dVar6 = *(double *)(param_1 + 0x250);
    dVar1 = *(double *)(param_1 + 600);
    dVar10 = dVar9 * dVar4 - dVar8 * dVar5;
    dVar11 = dVar7 * dVar5 - dVar9 * dVar6;
    dVar12 = dVar8 * dVar6 - dVar4 * dVar7;
    dVar11 = dVar11 + dVar11;
    dVar12 = dVar12 + dVar12;
    dVar10 = dVar10 + dVar10;
    dVar3 = (dVar6 * dVar11 - dVar4 * dVar10) + *(double *)(param_1 + 600) * dVar12 + dVar9 +
            *(double *)(param_1 + 0x268);
    dVar9 = *(double *)(param_1 + 0x270);
    auVar2._8_4_ = SUB84(dVar3,0);
    auVar2._0_8_ = (dVar10 * dVar5 - dVar12 * dVar6) + dVar1 * dVar11 + dVar8 +
                   *(double *)(param_1 + 0x260);
    auVar2._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
    *param_2 = auVar2;
    *(double *)param_2[1] = dVar10 * dVar1 + dVar7 + (dVar12 * dVar4 - dVar11 * dVar5) + dVar9;
  }
  return param_2;
}



// FUNCTION 140703ce0 FUN_140703ce0 body=837 status=ok
// SIG undefined FUN_140703ce0(void)

undefined1 (*) [16]
FUN_140703ce0(undefined8 *param_1,undefined1 (*param_2) [16],float param_3,float *param_4)

{
  float *pfVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  float *pfVar6;
  undefined1 auVar7 [16];
  double dVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  float *pfVar16;
  int iVar17;
  byte bVar18;
  float fVar19;
  float fVar20;
  double dVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  
  iVar17 = *(int *)(param_1 + 1) + -1;
  if ((*(int *)(param_1 + 1) == 0) || (iVar9 = _isnan((double)param_3), iVar9 != 0)) {
    *(undefined8 *)param_2[1] = *(undefined8 *)(param_4 + 4);
    fVar19 = *param_4;
    fVar22 = param_4[1];
    fVar20 = param_4[2];
    fVar23 = param_4[3];
    goto LAB_140703d83;
  }
  pfVar6 = (float *)*param_1;
  if (param_3 < *pfVar6) {
LAB_140703f94:
    *(undefined8 *)param_2[1] = *(undefined8 *)(pfVar6 + 6);
    fVar19 = pfVar6[2];
    fVar22 = pfVar6[3];
    fVar20 = pfVar6[4];
    fVar23 = pfVar6[5];
  }
  else {
    iVar9 = *(int *)(param_1 + 1);
    uVar11 = (longlong)iVar9 - 1;
    if (param_3 < pfVar6[uVar11 * 0x16]) {
      uVar11 = 0;
      iVar10 = 0;
      uVar14 = (longlong)iVar9;
      if (1 < iVar9) {
        do {
          uVar15 = (ulonglong)((uint)((int)uVar11 + (int)uVar14) >> 1);
          if (pfVar6[uVar15 * 0x16] <= param_3) {
            uVar11 = uVar15;
            uVar15 = uVar14;
          }
          uVar14 = uVar15;
        } while (1 < (int)uVar15 - (int)uVar11);
        goto LAB_140703d52;
      }
    }
    else {
LAB_140703d52:
      iVar10 = (int)uVar11;
      if (iVar10 == -1) goto LAB_140703f94;
    }
    bVar18 = *(byte *)(param_1 + 2);
    if (iVar10 == iVar17) {
      lVar13 = (longlong)iVar17;
      if ((bVar18 & 1) == 0) {
        *(undefined8 *)param_2[1] = *(undefined8 *)(pfVar6 + lVar13 * 0x16 + 6);
        pfVar6 = pfVar6 + lVar13 * 0x16 + 2;
        fVar19 = *pfVar6;
        fVar22 = pfVar6[1];
        fVar20 = pfVar6[2];
        fVar23 = pfVar6[3];
        goto LAB_140703d83;
      }
      bVar18 = 1;
      if (pfVar6[lVar13 * 0x16] + *(float *)((longlong)param_1 + 0x14) <= param_3)
      goto LAB_140703f94;
    }
    lVar12 = (longlong)iVar10;
    lVar13 = 0;
    if ((iVar10 == iVar17 & bVar18) == 0) {
      lVar13 = (longlong)(iVar10 + 1);
    }
    pfVar1 = pfVar6 + lVar12 * 0x16;
    pfVar16 = pfVar6 + lVar13 * 0x16;
    if ((iVar10 == iVar17 & bVar18) == 0) {
      fVar19 = *pfVar16 - *pfVar1;
    }
    else {
      fVar19 = *(float *)((longlong)param_1 + 0x14);
    }
    if ((0.0 < fVar19) && (*(char *)(pfVar1 + 0x14) != '\x02')) {
      fVar22 = (param_3 - *pfVar1) / fVar19;
      if (*(char *)(pfVar1 + 0x14) != '\0') {
        dVar21 = (double)fVar19;
        dVar2 = *(double *)(pfVar16 + 0xc);
        dVar3 = *(double *)(pfVar1 + 0x12);
        fVar24 = fVar22 * fVar22;
        fVar19 = fVar22 * fVar24;
        fVar23 = ((fVar19 + fVar19) - fVar24 * 3.0) + 1.0;
        fVar20 = fVar19 - fVar24;
        fVar22 = (fVar19 - (fVar24 + fVar24)) + fVar22;
        fVar19 = fVar24 * 3.0 - (fVar19 + fVar19);
        dVar8 = (double)fVar19 * *(double *)(pfVar16 + 4) +
                (double)fVar20 * *(double *)(pfVar16 + 10) * dVar21 +
                (double)fVar22 * *(double *)(pfVar1 + 0x10) * dVar21 +
                (double)fVar23 * *(double *)(pfVar1 + 4);
        dVar4 = *(double *)(pfVar1 + 6);
        dVar5 = *(double *)(pfVar16 + 6);
        auVar7._8_4_ = SUB84(dVar8,0);
        auVar7._0_8_ = (double)fVar19 * *(double *)(pfVar16 + 2) +
                       (double)fVar20 * *(double *)(pfVar16 + 8) * dVar21 +
                       (double)fVar22 * dVar21 * *(double *)(pfVar1 + 0xe) +
                       (double)fVar23 * *(double *)(pfVar1 + 2);
        auVar7._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
        *param_2 = auVar7;
        *(double *)param_2[1] =
             (double)fVar20 * dVar2 * dVar21 + (double)fVar19 * dVar5 +
             (double)fVar22 * dVar3 * dVar21 + (double)fVar23 * dVar4;
        return param_2;
      }
      dVar2 = *(double *)(pfVar16 + 6);
      dVar3 = *(double *)(pfVar1 + 6);
      dVar4 = *(double *)(pfVar16 + 4);
      dVar5 = *(double *)(pfVar1 + 4);
      dVar8 = (double)fVar22;
      *(double *)*param_2 =
           (*(double *)(pfVar16 + 2) - *(double *)(pfVar1 + 2)) * dVar8 + *(double *)(pfVar1 + 2);
      *(double *)(*param_2 + 8) = (dVar4 - dVar5) * dVar8 + dVar5;
      *(double *)param_2[1] = (dVar2 - dVar3) * dVar8 + dVar3;
      return param_2;
    }
    *(undefined8 *)param_2[1] = *(undefined8 *)(pfVar6 + lVar12 * 0x16 + 6);
    pfVar6 = pfVar6 + lVar12 * 0x16 + 2;
    fVar19 = *pfVar6;
    fVar22 = pfVar6[1];
    fVar20 = pfVar6[2];
    fVar23 = pfVar6[3];
  }
LAB_140703d83:
  *(float *)*param_2 = fVar19;
  *(float *)(*param_2 + 4) = fVar22;
  *(float *)(*param_2 + 8) = fVar20;
  *(float *)(*param_2 + 0xc) = fVar23;
  return param_2;
}



// FUNCTION 140704026 FUN_140704026 body=64 status=ok
// SIG undefined FUN_140704026(void)

void FUN_140704026(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1407040fe(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x18,8);
  }
  return;
}



// FUNCTION 140704066 FUN_140704066 body=64 status=ok
// SIG undefined FUN_140704066(void)

void FUN_140704066(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1407040a6(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 1407040a6 FUN_1407040a6 body=87 status=ok
// SIG undefined FUN_1407040a6(void)

ulonglong FUN_1407040a6(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if ((((longlong)(int)(param_3 - param_2) & 0x1ffffffffffff800U) == 0) &&
     ((int)(param_3 * 2) <= (int)(param_2 * 3))) {
    return uVar1;
  }
  if ((param_2 == 0) || (0x40 < (int)(param_3 - param_2))) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,8);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 1407040fe FUN_1407040fe body=109 status=ok
// SIG undefined FUN_1407040fe(void)

ulonglong FUN_1407040fe(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((ulonglong)((longlong)(int)(param_3 - param_2) * 0x18) < 0x4000) &&
     ((int)(param_3 * 2) <= (int)(param_2 * 3))) {
    return uVar1;
  }
  if ((param_2 == 0) || (0x40 < (int)(param_3 - param_2))) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x18,8);
      uVar1 = uVar1 / 0x18;
    }
  }
  return uVar1;
}



// FUNCTION 14070416c FUN_14070416c body=102 status=ok
// SIG undefined FUN_14070416c(void)

void FUN_14070416c(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_2 + 1);
  if ((longlong)(int)uVar1 != 0) {
    iVar2 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_1403e3958(param_1,iVar2);
    }
    memcpy((void *)((longlong)iVar2 * 0x18 + *param_1),(void *)*param_2,(longlong)(int)uVar1 * 0x18)
    ;
    return;
  }
  return;
}



// FUNCTION 1407041d2 FUN_1407041d2 body=290 status=ok
// SIG undefined FUN_1407041d2(void)

void FUN_1407041d2(longlong param_1)

{
  longlong lVar1;
  byte bVar2;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong local_38;
  longlong local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14010edaa();
  if ((*(uint *)(param_1 + 8) & 0x10) != 0) goto LAB_140704297;
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (lVar1 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(lVar1);
  }
  bVar2 = DAT_14c950c29;
  *(longlong *)(param_1 + 0x4c8) = lVar1;
  if ((lVar1 == 0) || ((bVar2 & 1) == 0)) {
    if (lVar1 != 0) goto LAB_140704241;
    local_28 = 0;
  }
  else {
    FUN_1456cec3c(lVar1);
LAB_140704241:
    local_28 = lVar1 + 0x3d0;
  }
  local_30 = lVar1;
  FUN_14047894e(param_1 + 0x3a0);
  local_40 = *(longlong *)(param_1 + 0x4c8);
  if ((local_40 == 0) || (DAT_14c950c29 == 0)) {
    if (local_40 != 0) goto LAB_14070427f;
    local_38 = 0;
  }
  else {
    FUN_1456cec3c(local_40);
LAB_14070427f:
    local_38 = local_40 + 0x3d0;
  }
  FUN_1407042f6(param_1 + 0x410);
LAB_140704297:
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407042f6 FUN_1407042f6 body=114 status=ok
// SIG undefined FUN_1407042f6(void)

void FUN_1407042f6(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*param_1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = param_1[1];
  }
  lVar1 = *param_2;
  lVar3 = 0;
  if (lVar1 != 0) {
    lVar3 = param_2[1];
  }
  if ((*param_1 == lVar1) && (lVar2 == lVar3)) {
    return;
  }
  if (DAT_14c950c29 == '\x01') {
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar1 = *param_2;
    }
  }
  *param_1 = lVar1;
  param_1[1] = param_2[1];
  FUN_140704368(param_1);
  return;
}



// FUNCTION 140704368 FUN_140704368 body=155 status=ok
// SIG undefined FUN_140704368(void)

void FUN_140704368(longlong *param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong *plVar6;
  
  *(undefined1 *)((longlong)param_1 + 0x11) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0xbf800000;
  *(int *)((longlong)param_1 + 0x1c) = (int)param_1[3];
  lVar5 = DAT_14c8463d8;
  param_1[4] = DAT_14c8463d0;
  param_1[5] = lVar5;
  uVar4 = DAT_14c8463e8._4_4_;
  uVar3 = (undefined4)DAT_14c8463e8;
  uVar2 = DAT_14c8463e0._4_4_;
  *(undefined4 *)(param_1 + 6) = (undefined4)DAT_14c8463e0;
  *(undefined4 *)((longlong)param_1 + 0x34) = uVar2;
  *(undefined4 *)(param_1 + 7) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x3c) = uVar4;
  if (*param_1 == 0) {
    plVar6 = (longlong *)0x0;
  }
  else {
    plVar6 = (longlong *)param_1[1];
  }
  lVar5 = (**(code **)(*plVar6 + 0xb0))();
  cVar1 = *(char *)(lVar5 + 0x14);
  *(char *)(param_1 + 2) = cVar1;
  if (cVar1 == '\x01') {
    param_1[0xb] = -0x407fffff40800000;
    lVar5 = DAT_14c8463f8;
    param_1[0xe] = DAT_14c8463f0;
    param_1[0xf] = lVar5;
    lVar5 = DAT_14c8463f8;
    param_1[0xc] = DAT_14c8463f0;
    param_1[0xd] = lVar5;
  }
  else if (cVar1 == '\x02') {
    *(undefined4 *)(param_1 + 0x10) = 0;
    lVar5 = DAT_14c8463f8;
    param_1[0x11] = DAT_14c8463f0;
    param_1[0x12] = lVar5;
  }
  return;
}



// FUNCTION 140704404 FUN_140704404 body=1152 status=ok
// SIG undefined FUN_140704404(void)

uint * FUN_140704404(longlong param_1,uint *param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  undefined1 uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  uint *puVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  longlong *plVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  ulonglong local_80;
  undefined2 *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  code **local_60;
  undefined1 *local_58;
  code *local_50;
  longlong local_48;
  code *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar4 = FUN_1447262c2(param_4);
  if (lVar4 == 0) {
switchD_140704598_caseD_5:
    lVar4 = FUN_14573bcd4(param_4);
    if ((lVar4 != 0) && (*(char *)(param_1 + 8) == '\x05')) {
      bVar1 = FUN_14573bd14(lVar4);
      goto LAB_14070448d;
    }
LAB_1407047a6:
    *(undefined2 *)(param_2 + 6) = 0;
    uVar2 = 0;
    goto LAB_14070449d;
  }
  if (DAT_14cbadd90 == 0) {
    local_60 = &local_40;
    local_40 = FUN_141030f22;
    local_50 = FUN_14081d0ea;
    local_58 = &LAB_1459f2e4c;
    local_68 = &LAB_148c39de3;
    local_70 = &LAB_1457a9eb2;
    local_78 = &DAT_149e063b2;
    local_80 = 0;
    local_88 = 0x10000004;
    local_90 = 0x10;
    local_98 = 0x3de0;
    FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
  }
  if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < *(int *)(DAT_14cbadd90 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
       (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) != DAT_14cbadd90 + 0x30))
  goto switchD_140704598_caseD_5;
  lVar5 = FUN_1447210f0(lVar4);
  if ((lVar5 == 0) || (lVar5 = *(longlong *)(lVar5 + 0x1f0), lVar5 == 0)) goto LAB_1407047a6;
  puVar6 = (uint *)(**(code **)(*(longlong *)(lVar4 + 0xda8) + 0x50))(lVar4 + 0xda8);
  if (((((*(longlong **)(puVar6 + 2) == (longlong *)0x0) || (puVar6[1] == 0)) ||
       (uVar3 = *puVar6, (int)uVar3 < 0)) ||
      (((DAT_14c9647dc <= (int)uVar3 ||
        (lVar12 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8), lVar12 == 0)) ||
       (*(uint *)(lVar12 + 0x10) != puVar6[1])))) ||
     (((*(uint *)(lVar12 + 8) & 0x10200000) != 0 ||
      (lVar12 = (**(code **)(**(longlong **)(puVar6 + 2) + 8))(), lVar12 == 0)))) {
LAB_140704510:
    if (*(int *)(lVar4 + 0x2784) == 0) {
LAB_1407046c5:
      lVar12 = 0;
    }
    else {
      uVar3 = *(uint *)(lVar4 + 0x2780);
      lVar12 = 0;
      if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) {
        plVar10 = (longlong *)
                  ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
        if ((plVar10 == (longlong *)0x0) ||
           (((int)plVar10[2] != *(int *)(lVar4 + 0x2784) ||
            ((*(uint *)(plVar10 + 1) & 0x10200000) != 0)))) goto LAB_1407046c5;
        lVar12 = *plVar10;
      }
    }
  }
  else {
    lVar7 = FUN_14070560c();
    if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x38) < *(int *)(lVar7 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8)
        != lVar7 + 0x30)) goto LAB_140704510;
  }
  lVar5 = FUN_140704886(lVar5);
  if (lVar5 == 0) goto switchD_140704598_caseD_5;
  switch(*(undefined1 *)(param_1 + 8)) {
  case 0:
    lVar5 = FUN_14011c349();
    local_40 = *(code **)(lVar5 + 0x48);
    lVar5 = FUN_140254f32(lVar4);
    if (((lVar5 == 0) || (*(char *)(lVar5 + 0x138) != '\0')) ||
       (*(int *)(lVar5 + 0x9c) < *(int *)(lVar5 + 0x94))) {
      if (lVar12 == 0) {
        bVar1 = 0;
      }
      else {
        bVar1 = FUN_14573c2e0(lVar12,lVar4);
      }
      bVar1 = bVar1 ^ *(byte *)(param_1 + 9);
      *(undefined2 *)(param_2 + 6) = 4;
      goto LAB_140704499;
    }
LAB_14070485e:
    *(undefined2 *)(param_2 + 6) = 4;
    *param_2 = 0;
    goto LAB_14070449b;
  case 1:
    uVar3 = FUN_140704a22(lVar5,lVar4);
    goto LAB_140704607;
  case 2:
    iVar9 = FUN_140704a22(lVar5,lVar4);
    bVar1 = iVar9 == 0;
    break;
  case 3:
    if (lVar12 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_14573c602(lVar12,lVar4);
    }
    *(undefined2 *)(param_2 + 6) = 4;
    uVar8 = 0x7fffffff;
    if (uVar3 < 0x7fffffff) {
      uVar8 = uVar3;
    }
    *param_2 = uVar8;
    goto LAB_14070460f;
  case 4:
    bVar1 = FUN_140705364(lVar4);
    break;
  default:
    goto switchD_140704598_caseD_5;
  case 6:
    if (lVar12 == 0) {
      lVar4 = FUN_1402a1246(lVar4);
      if (lVar4 == 0) goto LAB_14070485e;
      FUN_140212f8e(&local_48);
      local_80 = local_80 & 0xffffffff00000000;
      local_88 = 0;
      local_90 = 0;
      local_98 = 0;
      FUN_14021300e(&local_40,0x7b2,1,1);
      uVar11 = SUB168(SEXT816(local_48 - (longlong)local_40) * SEXT816(0x29406b2a1a85bd43),8) -
               (local_48 - (longlong)local_40);
      iVar9 = ((int)(uVar11 >> 0x17) - (int)((longlong)uVar11 >> 0x3f)) + *(int *)(lVar4 + 0xf20);
    }
    else {
      iVar9 = FUN_148f0b3d2(lVar12,lVar4);
    }
    bVar1 = 0 < iVar9;
    break;
  case 7:
    uVar3 = 0;
    if (lVar12 != 0) {
      uVar3 = FUN_148f0b3d2(lVar12,lVar4);
    }
LAB_140704607:
    *(undefined2 *)(param_2 + 6) = 4;
    *param_2 = uVar3;
LAB_14070460f:
    uVar2 = 2;
    goto LAB_14070449d;
  }
LAB_14070448d:
  bVar1 = bVar1 ^ *(byte *)(param_1 + 9);
  *(undefined2 *)(param_2 + 6) = 4;
LAB_140704499:
  *param_2 = (uint)bVar1;
LAB_14070449b:
  uVar2 = 1;
LAB_14070449d:
  *(undefined1 *)(param_2 + 8) = uVar2;
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140704886 FUN_140704886 body=105 status=ok
// SIG undefined FUN_140704886(void)

void FUN_140704886(longlong param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_14070493c();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  FUN_1407048f0(param_1 + 0x100,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407048f0 FUN_1407048f0 body=76 status=ok
// SIG undefined FUN_1407048f0(void)

void FUN_1407048f0(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_14070493c();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_14070492d;
    }
  }
  lVar2 = 0;
LAB_14070492d:
  FUN_1448a6f9c(param_1,lVar2);
  return;
}



// FUNCTION 14070493c FUN_14070493c body=228 status=ok
// SIG undefined FUN_14070493c(void)

longlong FUN_14070493c(void)

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
  undefined1 *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cbabc40 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = &LAB_1417ad04a;
    local_28 = &LAB_14107a1fc;
    local_38 = &LAB_148c25513;
    local_40 = &LAB_14602a54a;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 0x10;
    local_68 = 0x2f0;
    FUN_14081cfa3(L"/Script/OakGame",L"OakInventoryShopStateSubsystem",&DAT_14cbabc40,&DAT_148c25512
                 );
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbabc40;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140704a22 FUN_140704a22 body=269 status=ok
// SIG undefined FUN_140704a22(void)

undefined4 FUN_140704a22(longlong param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140704b30();
  if (param_2 == 0) {
    uVar3 = 0;
    uVar2 = 0;
  }
  else {
    uVar3 = *(uint *)(param_2 + 0xc);
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar5 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar5 = 0;
    }
    uVar2 = *(uint *)(lVar5 + 0x10);
    if (*(uint *)(lVar5 + 0x10) == 0) {
      LOCK();
      iVar1 = DAT_14c964868 + 1;
      UNLOCK();
      uVar4 = DAT_14c964868 + 1;
      bVar6 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar1;
      if (bVar6) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar4);
      }
      LOCK();
      uVar2 = *(uint *)(lVar5 + 0x10);
      bVar6 = uVar2 == 0;
      if (bVar6) {
        *(uint *)(lVar5 + 0x10) = uVar4;
        uVar2 = 0;
      }
      UNLOCK();
      if (bVar6) {
        uVar2 = uVar4;
      }
    }
  }
  local_30 = CONCAT44(uVar2,uVar3);
  iVar1 = FUN_140705240((longlong *)(param_1 + 0xd8),uVar2 ^ uVar3);
  if (iVar1 == -1) {
    lVar5 = 0;
  }
  else {
    lVar5 = (longlong)iVar1 * 0x14 + *(longlong *)(param_1 + 0xd8);
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return *(undefined4 *)(lVar5 + 8);
}



// FUNCTION 140704b30 FUN_140704b30 body=1032 status=ok
// SIG undefined FUN_140704b30(void)

void FUN_140704b30(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_f8 [40];
  longlong local_d0;
  longlong local_c8;
  longlong local_c0;
  longlong local_b8;
  undefined8 local_b0;
  undefined8 *local_a8;
  int *piStack_a0;
  undefined8 local_98;
  longlong local_90;
  ulonglong uStack_88;
  undefined8 local_80;
  int local_78;
  int local_74;
  int local_70;
  int local_68;
  undefined1 local_64 [4];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_68 = 0;
  lVar10 = param_2 + 0x2604;
  lVar7 = 6;
  iVar8 = 0;
  local_c0 = param_2;
  local_b8 = param_1;
  do {
    local_a8 = (undefined8 *)0x0;
    piStack_a0 = (int *)0x0;
    local_98 = 2;
    if ((undefined8 **)(lVar10 + -0x34) == &local_a8) {
      local_90 = 0;
      uStack_88 = 0;
      local_80 = 2;
    }
    else {
      FUN_140704fa0(&local_a8);
      local_90 = 0;
      uStack_88 = 0;
      local_80 = 2;
      FUN_140704fa0(&local_90,lVar10 + -0x1c);
    }
    local_78 = *(int *)(lVar10 + -4);
    FUN_140704f3a(&local_74,lVar10);
    iVar2 = local_70 - local_78;
    if (local_70 - local_78 < 1) {
      iVar2 = 0;
    }
    iVar8 = iVar8 + iVar2;
    local_68 = iVar8;
    if (local_74 != 0) {
      if (DAT_14c9a3d68 != DAT_14c9a3d94) {
        iVar2 = local_74 + -1;
        local_d0 = (longlong)iVar2 * 0x88;
        local_c8 = DAT_14c9a3d60;
        FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + local_d0),
                      *(undefined4 *)(DAT_14c9a3d60 + 0x78 + local_d0));
        if (*(longlong *)(local_c8 + 0x70 + local_d0) != 0) {
          FUN_1400020a8();
        }
        if (*(longlong *)(local_c8 + local_d0 + 0x60) != 0) {
          FUN_1400020a8();
        }
        FUN_14059507c(&DAT_14c9a3d60,iVar2,1);
      }
      local_74 = 0;
    }
    FUN_144760e21(local_90,uStack_88 & 0xffffffff);
    if (local_90 != 0) {
      FUN_1400020a8();
    }
    FUN_144760e21(local_a8);
    if (local_a8 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
    lVar1 = local_c0;
    lVar10 = lVar10 + 0x40;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  plVar9 = (longlong *)(local_b8 + 0xd8);
  if (local_c0 == 0) {
    uVar4 = 0;
    iVar2 = 0;
  }
  else {
    uVar4 = *(uint *)(local_c0 + 0xc);
    if ((int)uVar4 < DAT_14c9647dc) {
      lVar10 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
    }
    else {
      lVar10 = 0;
    }
    iVar2 = *(int *)(lVar10 + 0x10);
    if (*(int *)(lVar10 + 0x10) == 0) {
      LOCK();
      iVar2 = DAT_14c964868 + 1;
      UNLOCK();
      iVar3 = DAT_14c964868 + 1;
      bVar11 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar2;
      if (bVar11) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar3);
      }
      LOCK();
      iVar2 = *(int *)(lVar10 + 0x10);
      bVar11 = iVar2 == 0;
      if (bVar11) {
        *(int *)(lVar10 + 0x10) = iVar3;
        iVar2 = 0;
      }
      UNLOCK();
      if (bVar11) {
        iVar2 = iVar3;
      }
    }
  }
  local_a8 = (undefined8 *)CONCAT44(iVar2,uVar4);
  iVar2 = FUN_140705240(plVar9);
  if (iVar2 == -1) {
    local_b0 = 0;
    FUN_14485c47a(&local_b0,lVar1);
    piStack_a0 = &local_68;
    local_a8 = &local_b0;
    FUN_14573be84(plVar9,local_64);
  }
  else {
    if (lVar1 == 0) {
      uVar5 = 0;
      uVar4 = 0;
    }
    else {
      uVar5 = *(uint *)(lVar1 + 0xc);
      if ((int)uVar5 < DAT_14c9647dc) {
        lVar10 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
      }
      else {
        lVar10 = 0;
      }
      uVar4 = *(uint *)(lVar10 + 0x10);
      if (*(uint *)(lVar10 + 0x10) == 0) {
        LOCK();
        iVar2 = DAT_14c964868 + 1;
        UNLOCK();
        uVar6 = DAT_14c964868 + 1;
        bVar11 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar2;
        if (bVar11) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar6);
        }
        LOCK();
        uVar4 = *(uint *)(lVar10 + 0x10);
        bVar11 = uVar4 == 0;
        if (bVar11) {
          *(uint *)(lVar10 + 0x10) = uVar6;
          uVar4 = 0;
        }
        UNLOCK();
        if (bVar11) {
          uVar4 = uVar6;
        }
      }
    }
    local_a8 = (undefined8 *)CONCAT44(uVar4,uVar5);
    iVar2 = FUN_140705240(plVar9,uVar4 ^ uVar5);
    if (iVar2 == -1) {
      lVar10 = 0;
    }
    else {
      lVar10 = (longlong)iVar2 * 0x14 + *plVar9;
    }
    *(int *)(lVar10 + 8) = iVar8;
  }
  if ((local_60 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140704f3a FUN_140704f3a body=102 status=ok
// SIG undefined FUN_140704f3a(void)

int * FUN_140704f3a(int *param_1,longlong param_2)

{
  float fVar1;
  
  *param_1 = 0;
  FUN_140705122();
  param_1[1] = 0;
  fVar1 = (float)*(int *)(param_2 + 8);
  param_1[2] = *(int *)(param_2 + 8);
  if ((longlong)*param_1 != 0) {
    fVar1 = (float)FUN_14020a770(DAT_14c9a3d60 + (longlong)*param_1 * 0x88 + -0x88,fVar1,0);
  }
  param_1[1] = (int)fVar1;
  return param_1;
}



// FUNCTION 140704fa0 FUN_140704fa0 body=385 status=ok
// SIG undefined FUN_140704fa0(void)

/* WARNING: Removing unreachable block (ram,0x0001407050ff) */

void FUN_140704fa0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  uStack_50 = 0;
  lVar3 = param_2[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar1 = *param_2;
    lVar6 = 0;
    do {
      if ((*(int *)(lVar1 + 8 + lVar6) != 0) &&
         (plVar2 = *(longlong **)(lVar1 + lVar6), plVar2 != (longlong *)0x0)) {
        local_68 = 0;
        local_60 = 0;
        (**(code **)(*plVar2 + 0x40))(plVar2,&local_68);
        uVar5 = uStack_50;
        lVar7 = (longlong)(int)uStack_50;
        uVar4 = (int)uStack_50 + 1;
        uStack_50 = CONCAT44(uStack_50._4_4_,uVar4);
        if (uStack_50._4_4_ < uVar4) {
          FUN_1447a71f6(&local_58,uVar5 & 0xffffffff);
        }
        lVar7 = lVar7 * 0x10;
        *(undefined8 *)(local_58 + lVar7) = 0;
        *(undefined4 *)(local_58 + 8 + lVar7) = 0;
        *(undefined8 *)(local_58 + lVar7) = local_68;
        local_68 = 0;
        *(undefined4 *)(local_58 + 8 + lVar7) = local_60;
        local_60 = 0;
      }
      lVar6 = lVar6 + 0x10;
    } while ((longlong)(int)lVar3 * 0x10 != lVar6);
  }
  FUN_1448a8284(param_1);
  if (&local_58 == param_1) {
    uVar5 = uStack_50 & 0xffffffff;
  }
  else {
    FUN_144760e21(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = local_58;
    local_58 = 0;
    *(int *)(param_1 + 1) = (int)uStack_50;
    *(uint *)((longlong)param_1 + 0xc) = uStack_50._4_4_;
    uStack_50 = 0;
    uVar5 = 0;
  }
  FUN_144760e21(local_58,uVar5);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140705122 FUN_140705122 body=286 status=ok
// SIG undefined FUN_140705122(void)

int * FUN_140705122(int *param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar4 = DAT_14c9a3d60;
  if (*param_1 != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar3 = *param_1 + -1;
      lVar2 = (longlong)iVar3 * 0x88;
      lVar5 = DAT_14c9a3d60 + lVar2;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar2),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar2));
      if (*(longlong *)(lVar4 + 0x70 + lVar2) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar5 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,iVar3,1);
    }
    *param_1 = 0;
  }
  if (*param_2 != 0) {
    FUN_1402a453c(param_1);
    iVar3 = *param_2;
    iVar1 = *param_1;
    lVar5 = (longlong)iVar1 * 0x88 + DAT_14c9a3d60;
    lVar4 = (longlong)iVar3 * 0x88 + DAT_14c9a3d60;
    FUN_1402a4668(lVar5 + -0x88,lVar4 + -0x88);
    if (iVar3 != iVar1) {
      FUN_1402a4744(lVar5 + -0x18,lVar4 + -0x18);
    }
  }
  return param_1;
}



// FUNCTION 140705240 FUN_140705240 body=186 status=ok
// SIG undefined FUN_140705240(void)

int FUN_140705240(longlong *param_1,uint param_2,undefined8 *param_3)

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
        local_40 = *(undefined8 *)(lVar3 + (longlong)iVar4 * 0x14);
        cVar1 = FUN_1407052fc(&local_40,&local_48);
        if (cVar1 != '\0') goto LAB_1407052c0;
        lVar3 = *param_1;
        iVar4 = *(int *)(lVar3 + 0xc + (longlong)iVar4 * 0x14);
      } while (iVar4 != -1);
    }
  }
  iVar4 = -1;
LAB_1407052c0:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407052fc FUN_1407052fc body=104 status=ok
// SIG undefined FUN_1407052fc(void)

ulonglong FUN_1407052fc(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  if ((uVar1 != *param_2) || (uVar4 = 1, uVar2 != param_2[1])) {
    if (((uVar2 != 0) &&
        (((-1 < (int)uVar1 && ((int)uVar1 < DAT_14c9647dc)) &&
         (lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar3 != 0)))) &&
       ((*(uint *)(lVar3 + 0x10) == uVar2 && ((*(uint *)(lVar3 + 8) & 0x10200000) == 0)))) {
      return 0;
    }
    uVar4 = FUN_144729dda(param_2);
    uVar4 = uVar4 ^ 1;
  }
  return uVar4;
}



// FUNCTION 140705364 FUN_140705364 body=678 status=ok
// SIG undefined FUN_140705364(void)

ulonglong FUN_140705364(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 *puVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined8 unaff_RBX;
  undefined7 uVar7;
  undefined1 auStack_138 [32];
  undefined4 local_118;
  undefined4 local_110;
  undefined4 local_108;
  undefined8 local_100;
  wchar_t *local_f8;
  undefined1 *local_f0;
  undefined1 *local_e8;
  code **local_e0;
  undefined1 *local_d8;
  undefined1 *local_d0;
  uint local_bc;
  code *local_b8;
  longlong *local_b0;
  undefined1 *local_a8;
  undefined8 local_98;
  undefined **local_88;
  uint *local_80;
  undefined1 *local_68;
  undefined8 local_58;
  undefined **local_48;
  uint *local_40;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_138;
  uVar5 = *(ulonglong *)(param_1 + 0x430);
  if (uVar5 != 0) {
    if (DAT_14cae9568 == 0) {
      local_e0 = &local_b8;
      local_b8 = FUN_1417de738;
      local_d0 = &LAB_145893408;
      local_d8 = &LAB_1458cbbd2;
      local_e8 = &LAB_147ba21f1;
      local_f0 = &LAB_1463e9233;
      local_f8 = L"Engine";
      local_100 = 0;
      local_108 = 0x1000000c;
      local_110 = 8;
      local_118 = 0x2b8;
      FUN_14081cfa3(L"/Script/Engine",L"LocalPlayer",&DAT_14cae9568,&DAT_147ba21f0);
      uVar5 = *(ulonglong *)(param_1 + 0x430);
      if (uVar5 == 0) goto LAB_14070551e;
    }
    if ((((DAT_14cae9568 != 0) && (lVar6 = *(longlong *)(uVar5 + 0x10), lVar6 != 0)) &&
        (*(int *)(DAT_14cae9568 + 0x38) <= *(int *)(lVar6 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(DAT_14cae9568 + 0x38) * 8) ==
        DAT_14cae9568 + 0x30)) {
      uVar4 = ((uint)(uVar5 >> 0x14) & 0xffff ^ (uint)(uVar5 >> 4)) * -0x7a143595;
      local_bc = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
      local_bc = local_bc >> 0x10 ^ local_bc;
      FUN_1448d5e3c(&local_b8);
      puVar3 = *(undefined1 **)(local_b8 + 0x1b0);
      AcquireSRWLockShared((PSRWLOCK)(puVar3 + 0x1c0));
      uVar5 = CONCAT71((int7)((ulonglong)puVar3 >> 8),*puVar3);
      ReleaseSRWLockShared((PSRWLOCK)(puVar3 + 0x1c0));
      if (local_b0 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_b0 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_b0)(local_b0);
          LOCK();
          piVar2 = (int *)((longlong)local_b0 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_b0 + 0x10))(local_b0);
          }
        }
      }
      goto LAB_1407055e4;
    }
  }
LAB_14070551e:
  uVar7 = (undefined7)((ulonglong)unaff_RBX >> 8);
  uVar5 = CONCAT71(uVar7,1);
  if (*(char *)(param_1 + 0x178) == '\x03') {
    lVar6 = FUN_14011c349();
    local_b8 = *(code **)(lVar6 + 0x48);
    lVar6 = FUN_140254f32(param_1);
    local_bc = local_bc & 0xffffff00;
    if (lVar6 != 0) {
      local_58 = 0;
      local_48 = &PTR_LAB_14b995220;
      local_40 = &local_bc;
      local_68 = &LAB_1441f6a46;
      FUN_14573bd7e(lVar6);
    }
    lVar6 = FUN_14011c349();
    local_b8 = *(code **)(lVar6 + 0x60);
    lVar6 = FUN_140254f32(param_1);
    if (lVar6 != 0) {
      local_98 = 0;
      local_88 = &PTR_LAB_14b995240;
      local_80 = &local_bc;
      local_a8 = &LAB_1441f6aa2;
      FUN_14573bd7e(lVar6);
    }
    uVar5 = CONCAT71(uVar7,(undefined1)local_bc);
  }
LAB_1407055e4:
  if ((local_20 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5 & 0xffffffff;
}



// FUNCTION 14070560c FUN_14070560c body=228 status=ok
// SIG undefined FUN_14070560c(void)

longlong FUN_14070560c(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined2 *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cbbd2a8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_14096c2dc;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1418c3448;
    local_38 = &LAB_148ca0e9e;
    local_40 = &LAB_1414b4f5d;
    local_48 = &DAT_149e063b2;
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x2bb0;
    FUN_14081cfa3(L"/Script/OakGame",L"OakVendingMachine",&DAT_14cbbd2a8,FUN_14660e484);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbbd2a8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407056f2 FUN_1407056f2 body=400 status=ok
// SIG undefined FUN_1407056f2(void)

void FUN_1407056f2(longlong param_1,longlong param_2)

{
  int *piVar1;
  uint uVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  bool bVar10;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong *local_48;
  int local_40;
  char local_3c;
  int local_38;
  char local_34;
  int local_30;
  char local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  bVar6 = false;
  local_3c = '\0';
  local_34 = '\0';
  local_2c = '\0';
  plVar3 = *(longlong **)(param_1 + 0x70);
  if (plVar3 != (longlong *)0x0) {
    iVar8 = (int)plVar3[1];
    do {
      if (iVar8 == 0) goto LAB_140705758;
      LOCK();
      iVar7 = (int)plVar3[1];
      bVar10 = iVar8 == iVar7;
      if (bVar10) {
        *(int *)(plVar3 + 1) = iVar8 + 1;
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      UNLOCK();
    } while (!bVar10);
    plVar4 = *(longlong **)(param_1 + 0x68);
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x10))(plVar4,&local_40);
    }
    LOCK();
    plVar4 = plVar3 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
LAB_140705758:
  iVar8 = 0;
  if (local_3c != '\0') {
    iVar8 = local_40;
  }
  if (*(int *)(param_1 + 0x4c) != iVar8) {
    if ((*(byte *)(param_1 + 0x11) & 4) == 0) {
      bVar6 = false;
    }
    else {
      *(int *)(param_1 + 0x4c) = iVar8;
      bVar6 = true;
    }
  }
  iVar8 = 0;
  if (local_34 != '\0') {
    iVar8 = local_38;
  }
  if ((*(int *)(param_1 + 0x50) != iVar8) && ((*(byte *)(param_1 + 0x11) & 2) != 0)) {
    *(int *)(param_1 + 0x50) = iVar8;
    bVar6 = true;
  }
  iVar8 = 0;
  if (local_2c != '\0') {
    iVar8 = local_30;
  }
  if ((*(int *)(param_1 + 0x54) == iVar8) || ((*(byte *)(param_1 + 0x11) & 1) == 0)) {
    if (!bVar6) goto LAB_1407057ac;
  }
  else {
    *(int *)(param_1 + 0x54) = iVar8;
    FUN_14070596c(param_2,&local_50);
    *(byte *)(local_50 + 0x30) = *(byte *)(local_50 + 0x30) | 1;
    if (local_48 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_48 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_48)(local_48);
        LOCK();
        piVar1 = (int *)((longlong)local_48 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_48 + 0x10))(local_48);
        }
      }
    }
  }
  if (((*(uint *)(param_1 + 0x48) != 0) && (lVar5 = *(longlong *)(param_2 + 0x148), lVar5 != 0)) &&
     (uVar2 = *(uint *)(lVar5 + 0x30), uVar9 = uVar2 | 1 << (*(uint *)(param_1 + 0x48) & 0x1f),
     *(uint *)(lVar5 + 0x30) = uVar9, uVar9 != uVar2)) {
    FUN_1406462da();
  }
  FUN_140705884(param_2,param_1);
LAB_1407057ac:
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140705884 FUN_140705884 body=74 status=ok
// SIG undefined FUN_140705884(void)

void FUN_140705884(longlong param_1,int *param_2)

{
  int iVar1;
  
  if (*param_2 == -1) {
    iVar1 = *(int *)(param_1 + 0x50) + 1;
    *(int *)(param_1 + 0x50) = iVar1;
    *param_2 = iVar1;
    if (*(int *)(param_1 + 0x50) == -1) {
      *(undefined4 *)(param_1 + 0x50) = 0;
    }
  }
  param_2[1] = param_2[1] + 1;
  FUN_1407058ce(param_1);
  FUN_140705914(param_1);
  *(undefined8 *)(param_1 + 0x104) = 0xffffffffffffffff;
  return;
}



// FUNCTION 1407058ce FUN_1407058ce body=70 status=ok
// SIG undefined FUN_1407058ce(void)

void FUN_1407058ce(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_14010b0da();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_14472eb64(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 140705914 FUN_140705914 body=87 status=ok
// SIG undefined FUN_140705914(void)

void FUN_140705914(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x54) + 1;
  iVar3 = 0;
  if (iVar1 != -1) {
    iVar3 = iVar1;
  }
  *(int *)(param_1 + 0x54) = iVar3;
  if ((*(longlong **)(param_1 + 0xf8) != (longlong *)0x0) && (*(int *)(param_1 + 0x100) != -1)) {
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0xf8) + 0x280))();
    FUN_144a62f0c(*(undefined8 *)(param_1 + 0xf8),uVar2,*(undefined4 *)(param_1 + 0x100));
    return;
  }
  return;
}



// FUNCTION 14070596c FUN_14070596c body=342 status=ok
// SIG undefined FUN_14070596c(void)

longlong * FUN_14070596c(longlong param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auStack_58 [32];
  longlong *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar3 = *(longlong *)(param_1 + 0x138);
  if (lVar3 != 0) goto LAB_140705996;
  plVar4 = (longlong *)FUN_14001cc68(0x48,0x10);
  FUN_14573c86a(plVar4,param_1 + 0x110);
  plVar5 = plVar4 + 2;
  local_38 = plVar5;
  local_30 = plVar4;
  FUN_14573c8da(&local_38,plVar5);
  if (plVar4 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x138) = 0x10;
    plVar5 = *(longlong **)(param_1 + 0x140);
    if (plVar5 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x140) = 0;
LAB_140705a70:
      LOCK();
      plVar4 = plVar5 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
joined_r0x000140705a9d:
        if (iVar2 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *(longlong **)(param_1 + 0x138) = plVar5;
    plVar5 = *(longlong **)(param_1 + 0x140);
    if (plVar4 == plVar5) {
      LOCK();
      plVar5 = plVar4 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
        plVar5 = plVar4;
        goto joined_r0x000140705a9d;
      }
    }
    else {
      *(longlong **)(param_1 + 0x140) = plVar4;
      if (plVar5 != (longlong *)0x0) goto LAB_140705a70;
    }
  }
  plVar5 = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_30 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  lVar3 = *(longlong *)(param_1 + 0x138);
LAB_140705996:
  *param_2 = lVar3;
  lVar3 = *(longlong *)(param_1 + 0x140);
  param_2[1] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140705aca FUN_140705aca body=57 status=ok
// SIG undefined FUN_140705aca(void)

void FUN_140705aca(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb23850 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb23850 = FUN_140002ddd(FUN_14643f842,uVar1,L"GpsTestSettings_TraceArc");
  }
  return;
}



// FUNCTION 140705b04 FUN_140705b04 body=28362 status=ok
// SIG undefined FUN_140705b04(void)

void FUN_140705b04(longlong param_1,longlong param_2)

{
  char *pcVar1;
  int *piVar2;
  float *pfVar3;
  float fVar4;
  int iVar5;
  code *pcVar6;
  void *pvVar7;
  double dVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  code ******ppppppcVar13;
  longlong lVar14;
  code ****ppppcVar15;
  char cVar16;
  char cVar17;
  char cVar18;
  byte bVar19;
  byte bVar20;
  undefined1 uVar21;
  int iVar22;
  double *pdVar23;
  longlong lVar24;
  longlong lVar25;
  undefined8 uVar26;
  float *pfVar27;
  code ******ppppppcVar28;
  code ******ppppppcVar29;
  longlong lVar30;
  longlong lVar31;
  longlong *plVar32;
  undefined8 uVar33;
  byte bVar34;
  uint uVar35;
  uint uVar36;
  code *****pppppcVar37;
  undefined7 uVar40;
  longlong *plVar38;
  code ***pppcVar39;
  longlong *plVar41;
  undefined *puVar42;
  undefined8 *puVar43;
  byte bVar44;
  ulonglong uVar45;
  ulonglong uVar46;
  double *pdVar47;
  uint *puVar48;
  int iVar49;
  longlong lVar50;
  bool bVar51;
  bool bVar52;
  double dVar53;
  double dVar54;
  double dVar55;
  double dVar56;
  double dVar57;
  double dVar58;
  double dVar59;
  float fVar60;
  undefined4 uVar61;
  float fVar62;
  undefined4 uVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  undefined1 auStack_4a8 [32];
  code *****local_488;
  double local_478;
  float local_46c;
  longlong local_468;
  undefined4 local_45c;
  longlong local_458;
  undefined8 local_450;
  longlong *local_448;
  float local_43c;
  longlong local_438;
  double local_430;
  undefined1 local_428 [16];
  undefined1 local_418 [16];
  double local_400;
  longlong local_3f8;
  double *local_3f0;
  longlong local_3e8;
  float local_3e0 [2];
  uint local_3d8;
  undefined4 uStack_3d4;
  undefined4 uStack_3d0;
  undefined8 local_3c8;
  undefined4 uStack_3c0;
  code ***local_3b8;
  code ****local_3b0;
  longlong *local_3a8;
  longlong local_3a0;
  code *****local_398;
  code *****local_390;
  code ****local_388;
  code *****local_380;
  code *****local_378;
  ushort local_368;
  byte local_360;
  undefined8 local_358;
  code *****pppppcStack_350;
  longlong *local_348;
  undefined8 uStack_340;
  undefined8 local_338;
  ulonglong uStack_330;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  undefined8 local_308;
  code *****pppppcStack_300;
  double local_2f8;
  ushort local_2f0;
  byte local_2e8;
  code *****local_2c0;
  code *****local_2b8;
  ushort local_2a8;
  byte local_2a0;
  code *****local_298;
  code ****ppppcStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  ulonglong local_278;
  undefined8 uStack_270;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  undefined4 uStack_254;
  ulonglong local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined4 local_220;
  undefined2 local_21c;
  undefined1 local_21a;
  undefined4 local_219;
  undefined1 local_118 [12];
  undefined8 local_10c;
  undefined8 local_100;
  undefined4 local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_4a8;
  pdVar23 = (double *)FUN_14070ca4c();
  if (((pdVar23 == (double *)0x0) || (lVar24 = FUN_1447210f0(pdVar23), lVar24 == 0)) ||
     ((*(byte *)(lVar24 + 0x155) & 0x20) != 0)) goto LAB_140707968;
  *(undefined1 *)(param_1 + 0x758) = 1;
  if (((*(longlong *)(param_1 + 0x90) == 0) ||
      (plVar41 = *(longlong **)(param_1 + 0x98), plVar41 == (longlong *)0x0)) ||
     ((int)plVar41[1] < 1)) {
    FUN_14070cbf4(&local_298,pdVar23);
    ppppcVar15 = ppppcStack_290;
    *(code ******)(param_1 + 0x90) = local_298;
    pppppcVar37 = *(code ******)(param_1 + 0x98);
    ppppppcVar29 = (code ******)local_298;
    if (pppppcVar37 != (code *****)ppppcStack_290) {
      if ((code *****)ppppcStack_290 != (code *****)0x0) {
        LOCK();
        *(int *)((longlong)ppppcStack_290 + 0xc) = *(int *)((longlong)ppppcStack_290 + 0xc) + 1;
        UNLOCK();
        pppppcVar37 = *(code ******)(param_1 + 0x98);
      }
      if (pppppcVar37 != (code *****)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)pppppcVar37 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          ppppppcVar29 = (code ******)(*(code *)(*pppppcVar37)[2])();
        }
      }
      *(code *****)(param_1 + 0x98) = ppppcVar15;
    }
    ppppcVar15 = ppppcStack_290;
    if ((code *****)ppppcStack_290 != (code *****)0x0) {
      LOCK();
      pppppcVar37 = (code *****)(ppppcStack_290 + 1);
      *(int *)pppppcVar37 = *(int *)pppppcVar37 + -1;
      UNLOCK();
      if (*(int *)pppppcVar37 == 0) {
        ppppppcVar29 = (code ******)(*(code *)**ppppcStack_290)(ppppcStack_290);
        LOCK();
        piVar2 = (int *)((longlong)ppppcVar15 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          ppppppcVar29 = (code ******)(*(code *)(*ppppcVar15)[2])(ppppcVar15);
        }
      }
    }
    plVar41 = *(longlong **)(param_1 + 0x98);
    if (plVar41 != (longlong *)0x0) goto LAB_140705bef;
LAB_14070a2e1:
    local_45c = (undefined4)CONCAT71((int7)((ulonglong)ppppppcVar29 >> 8),1);
    plVar41 = (longlong *)0x0;
  }
  else {
LAB_140705bef:
    ppppppcVar29 = (code ******)(ulonglong)*(uint *)(plVar41 + 1);
    do {
      uVar35 = (uint)ppppppcVar29;
      if (uVar35 == 0) goto LAB_14070a2e1;
      LOCK();
      uVar36 = *(uint *)(plVar41 + 1);
      if (uVar35 == uVar36) {
        *(uint *)(plVar41 + 1) = uVar35 + 1;
      }
      else {
        ppppppcVar29 = (code ******)(ulonglong)uVar36;
      }
      UNLOCK();
    } while (uVar35 != uVar36);
    lVar25 = *(longlong *)(param_1 + 0x90);
    if (lVar25 != 0) {
      if ((*(float *)(param_1 + 0x768) <= *(float *)(lVar25 + 0x500) &&
           *(float *)(lVar25 + 0x500) != *(float *)(param_1 + 0x768)) ||
         ((*(longlong *)(lVar25 + 0x4b0) != 0 &&
          (cVar16 = FUN_1449c239e(*(longlong *)(lVar25 + 0x4b0),*(undefined8 *)(lVar25 + 0x520)),
          cVar16 != '\x01')))) {
        uVar21 = 0;
      }
      else {
        uVar21 = 1;
      }
      *(undefined1 *)(param_1 + 0x758) = uVar21;
    }
    local_45c = 0;
  }
  fVar64 = *(float *)(param_2 + 8);
  local_448 = plVar41;
  lVar25 = FUN_144860928();
  local_3f8 = lVar25 + 0x110;
  local_3f0 = pdVar23;
  local_3e8 = lVar24;
  local_3e0[0] = fVar64;
  if ((*(longlong **)(param_1 + 0x48) == (longlong *)0x0) || (*(int *)(param_1 + 0x44) == 0)) {
LAB_140706e8b:
    cVar16 = '\0';
  }
  else {
    uVar35 = *(uint *)(param_1 + 0x40);
    cVar16 = '\0';
    if ((-1 < (int)uVar35) && ((int)uVar35 < DAT_14c9647dc)) {
      lVar24 = (ulonglong)((uVar35 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar35 >> 0x10) * 8);
      if (((lVar24 == 0) || (*(int *)(lVar24 + 0x10) != *(int *)(param_1 + 0x44))) ||
         ((*(uint *)(lVar24 + 8) & 0x10200000) != 0)) goto LAB_140706e8b;
      cVar16 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x18))();
    }
  }
  cVar17 = *(char *)(param_1 + 0xbc);
  if (*(char *)(param_1 + 0xbc) != cVar16) {
    *(float *)(param_1 + 0xc0) = fVar64;
    cVar17 = cVar16;
  }
  *(undefined4 *)(param_1 + 0xc4) = 0;
  *(undefined1 *)(param_1 + 0xbd) = 1;
  *(char *)(param_1 + 0xbc) = cVar17;
  if ((*(longlong **)(param_1 + 0x68) == (longlong *)0x0) || (*(int *)(param_1 + 100) == 0)) {
LAB_140706e92:
    cVar17 = '\0';
  }
  else {
    uVar35 = *(uint *)(param_1 + 0x60);
    cVar17 = '\0';
    if ((-1 < (int)uVar35) && ((int)uVar35 < DAT_14c9647dc)) {
      lVar24 = (ulonglong)((uVar35 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar35 >> 0x10) * 8);
      if (((lVar24 == 0) || (*(int *)(lVar24 + 0x10) != *(int *)(param_1 + 100))) ||
         ((*(uint *)(lVar24 + 8) & 0x10200000) != 0)) goto LAB_140706e92;
      uVar26 = (**(code **)(**(longlong **)(param_1 + 0x68) + 0x10))();
      cVar17 = FUN_14482d262(uVar26,3);
    }
  }
  cVar18 = *(char *)(param_1 + 200);
  if (*(char *)(param_1 + 200) != cVar17) {
    *(float *)(param_1 + 0xcc) = fVar64;
    cVar18 = cVar17;
  }
  *(undefined4 *)(param_1 + 0xd0) = 0;
  *(undefined1 *)(param_1 + 0xc9) = 1;
  *(char *)(param_1 + 200) = cVar18;
  if (*(char *)(param_1 + 0xb0) != '\0') {
    *(float *)(param_1 + 0xb4) = fVar64;
  }
  *(undefined4 *)(param_1 + 0xb8) = 0;
  *(undefined2 *)(param_1 + 0xb0) = 0x100;
  if ((cVar16 != '\0') || (cVar17 != '\0')) {
    local_298 = (code *****)((ulonglong)local_298 & 0xffffffffffffff00);
    uStack_270 = uStack_270 & 0xffffffff00000000;
    FUN_1456bb102(&local_298,pdVar23);
    FUN_1447c3578(lVar25 + 1000,&local_358,&local_298);
    if ((byte)local_338 == '\x03') {
      uVar63 = (float)local_358;
      bVar34 = 3;
    }
    else {
      FUN_1400b56fe(&local_308,&local_358,3);
      uVar63 = 0;
      if (local_2e8 != 0) {
        uVar63 = (float)local_308;
      }
      pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_2e8 * 0x120));
      if (pcVar6 != (code *)0x0) {
        pppcVar39 = (code ***)&local_308;
        if (0x18 < local_2f0) {
          pppcVar39 = (code ***)local_308;
        }
        (*pcVar6)(pppcVar39);
      }
      if (0x18 < local_2f0) {
        FUN_1400020a8(local_308);
      }
      bVar34 = (byte)local_338;
    }
    pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar34 * 0x120));
    if (pcVar6 != (code *)0x0) {
      ppppppcVar29 = (code ******)&local_358;
      if (0x18 < (ushort)uStack_340) {
        ppppppcVar29 = (code ******)local_358;
      }
      (*pcVar6)(ppppppcVar29);
    }
    if (0x18 < (ushort)uStack_340) {
      FUN_1400020a8(local_358);
    }
    lVar24 = DAT_14c9a3da0;
    if ((longlong)(int)uStack_270 != 0) {
      lVar25 = (longlong)(int)uStack_270 + -1;
      lVar50 = lVar25 * 0x10;
      FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar50),
                    *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar50));
      if (*(longlong *)(lVar24 + lVar50) != 0) {
        FUN_1400020a8();
      }
      lVar24 = DAT_14c9a3da0;
      iVar22 = (int)lVar25;
      if (DAT_14c9a3dd4 != 0) {
        *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar22;
      }
      *(undefined4 *)(lVar24 + lVar50) = 0xffffffff;
      iVar49 = -1;
      if (0 < DAT_14c9a3dd4) {
        iVar49 = DAT_14c9a3dd0;
      }
      *(int *)(lVar24 + 4 + lVar50) = iVar49;
      DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
      puVar42 = &DAT_14c9a3db0;
      if (DAT_14c9a3dc0 != (undefined *)0x0) {
        puVar42 = DAT_14c9a3dc0;
      }
      iVar49 = iVar22 + 0x1f;
      if (-1 < iVar22) {
        iVar49 = iVar22;
      }
      bVar34 = (byte)lVar25 & 0x1f;
      DAT_14c9a3dd0 = iVar22;
      *(uint *)(puVar42 + (longlong)(iVar49 >> 5) * 4) =
           *(uint *)(puVar42 + (longlong)(iVar49 >> 5) * 4) &
           (-2 << bVar34 | 0xfffffffeU >> 0x20 - bVar34);
      uStack_270 = uStack_270 & 0xffffffff00000000;
    }
    if (((char)local_298 == '\x03') && (local_288 != (code ******)0x0)) {
      LOCK();
      piVar2 = (int *)((longlong)local_288 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (*(code *)(*local_288)[2])();
      }
    }
    *(float *)(param_1 + 0xa8) = local_3e0[0];
    *(undefined2 *)(param_1 + 0xa4) = 0x101;
    *(undefined4 *)(param_1 + 0xac) = uVar63;
    lVar24 = local_3f8 + 0x268;
    local_298 = (code *****)((ulonglong)local_298 & 0xffffffffffffff00);
    uStack_270 = uStack_270 & 0xffffffff00000000;
    FUN_1456bb102(&local_298,local_3f0);
    FUN_1447c3578(lVar24,&local_358,&local_298);
    if ((byte)local_338 == '\x03') {
      uVar35 = 3;
      uVar63 = (float)local_358;
    }
    else {
      FUN_1400b56fe(&local_308,&local_358,3);
      uVar63 = 0;
      if (local_2e8 != 0) {
        uVar63 = (float)local_308;
      }
      pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_2e8 * 0x120));
      if (pcVar6 != (code *)0x0) {
        pppcVar39 = (code ***)&local_308;
        if (0x18 < local_2f0) {
          pppcVar39 = (code ***)local_308;
        }
        (*pcVar6)(pppcVar39);
      }
      if (0x18 < local_2f0) {
        FUN_1400020a8(local_308);
      }
      uVar35 = (uint)(byte)local_338;
    }
    pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar35 * 0x120));
    if (pcVar6 != (code *)0x0) {
      ppppppcVar29 = (code ******)&local_358;
      if (0x18 < (ushort)uStack_340) {
        ppppppcVar29 = (code ******)local_358;
      }
      (*pcVar6)(ppppppcVar29);
    }
    if (0x18 < (ushort)uStack_340) {
      FUN_1400020a8(local_358);
    }
    lVar24 = DAT_14c9a3da0;
    if ((longlong)(int)uStack_270 != 0) {
      lVar25 = (longlong)(int)uStack_270 + -1;
      lVar50 = lVar25 * 0x10;
      FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar50),
                    *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar50));
      if (*(longlong *)(lVar24 + lVar50) != 0) {
        FUN_1400020a8();
      }
      lVar24 = DAT_14c9a3da0;
      iVar22 = (int)lVar25;
      if (DAT_14c9a3dd4 != 0) {
        *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar22;
      }
      *(undefined4 *)(lVar24 + lVar50) = 0xffffffff;
      iVar49 = -1;
      if (0 < DAT_14c9a3dd4) {
        iVar49 = DAT_14c9a3dd0;
      }
      *(int *)(lVar24 + 4 + lVar50) = iVar49;
      DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
      puVar42 = &DAT_14c9a3db0;
      if (DAT_14c9a3dc0 != (undefined *)0x0) {
        puVar42 = DAT_14c9a3dc0;
      }
      iVar49 = iVar22 + 0x1f;
      if (-1 < iVar22) {
        iVar49 = iVar22;
      }
      bVar34 = (byte)lVar25 & 0x1f;
      DAT_14c9a3dd0 = iVar22;
      *(uint *)(puVar42 + (longlong)(iVar49 >> 5) * 4) =
           *(uint *)(puVar42 + (longlong)(iVar49 >> 5) * 4) &
           (-2 << bVar34 | 0xfffffffeU >> 0x20 - bVar34);
      uStack_270 = uStack_270 & 0xffffffff00000000;
    }
    if (((char)local_298 == '\x03') && (local_288 != (code ******)0x0)) {
      LOCK();
      piVar2 = (int *)((longlong)local_288 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (*(code *)(*local_288)[2])();
      }
    }
    *(float *)(param_1 + 0x7ac) = local_3e0[0];
    *(undefined2 *)(param_1 + 0x7a8) = 0x101;
    *(undefined4 *)(param_1 + 0x7b0) = uVar63;
  }
  if (((((*(longlong **)(param_1 + 0x78) == (longlong *)0x0) || (*(int *)(param_1 + 0x74) == 0)) ||
       (uVar35 = *(uint *)(param_1 + 0x70), (int)uVar35 < 0)) ||
      ((DAT_14c9647dc <= (int)uVar35 ||
       (lVar24 = (ulonglong)((uVar35 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar35 >> 0x10) * 8), lVar24 == 0)))) ||
     ((*(int *)(lVar24 + 0x10) != *(int *)(param_1 + 0x74) ||
      ((*(uint *)(lVar24 + 8) & 0x10200000) != 0)))) {
LAB_140706ea6:
    FUN_14070cafe(param_1,&local_3f8);
  }
  else {
    lVar24 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x28))();
    lVar25 = local_3f8;
    if (*(int *)(lVar24 + 0x84) < *(int *)(lVar24 + 0x58)) {
      local_298 = (code *****)((ulonglong)local_298 & 0xffffffffffffff00);
      uStack_270 = uStack_270 & 0xffffffff00000000;
      FUN_1456bb102(&local_298,local_3f0);
      FUN_1447c3578(lVar25,&local_358,&local_298);
      if ((byte)local_338 == '\x03') {
        fVar64 = (float)local_358;
        bVar34 = 3;
      }
      else {
        FUN_1400b56fe(&local_308,&local_358,3);
        fVar64 = 0.0;
        if (local_2e8 != 0) {
          fVar64 = (float)local_308;
        }
        pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_2e8 * 0x120));
        if (pcVar6 != (code *)0x0) {
          pppcVar39 = (code ***)&local_308;
          if (0x18 < local_2f0) {
            pppcVar39 = (code ***)local_308;
          }
          (*pcVar6)(pppcVar39);
        }
        if (0x18 < local_2f0) {
          FUN_1400020a8(local_308);
        }
        bVar34 = (byte)local_338;
      }
      pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar34 * 0x120));
      if (pcVar6 != (code *)0x0) {
        ppppppcVar29 = (code ******)&local_358;
        if (0x18 < (ushort)uStack_340) {
          ppppppcVar29 = (code ******)local_358;
        }
        (*pcVar6)(ppppppcVar29);
      }
      if (0x18 < (ushort)uStack_340) {
        FUN_1400020a8(local_358);
      }
      lVar25 = DAT_14c9a3da0;
      if ((longlong)(int)uStack_270 != 0) {
        lVar30 = (longlong)(int)uStack_270 + -1;
        lVar50 = lVar30 * 0x10;
        FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar50),
                      *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar50));
        if (*(longlong *)(lVar25 + lVar50) != 0) {
          FUN_1400020a8();
        }
        lVar25 = DAT_14c9a3da0;
        iVar22 = (int)lVar30;
        if (DAT_14c9a3dd4 != 0) {
          *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar22;
        }
        *(undefined4 *)(lVar25 + lVar50) = 0xffffffff;
        iVar49 = -1;
        if (0 < DAT_14c9a3dd4) {
          iVar49 = DAT_14c9a3dd0;
        }
        *(int *)(lVar25 + 4 + lVar50) = iVar49;
        DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
        puVar42 = &DAT_14c9a3db0;
        if (DAT_14c9a3dc0 != (undefined *)0x0) {
          puVar42 = DAT_14c9a3dc0;
        }
        iVar49 = iVar22 + 0x1f;
        if (-1 < iVar22) {
          iVar49 = iVar22;
        }
        bVar34 = (byte)lVar30 & 0x1f;
        DAT_14c9a3dd0 = iVar22;
        *(uint *)(puVar42 + (longlong)(iVar49 >> 5) * 4) =
             *(uint *)(puVar42 + (longlong)(iVar49 >> 5) * 4) &
             (-2 << bVar34 | 0xfffffffeU >> 0x20 - bVar34);
        uStack_270 = uStack_270 & 0xffffffff00000000;
      }
      if (((char)local_298 == '\x03') && (local_288 != (code ******)0x0)) {
        LOCK();
        piVar2 = (int *)((longlong)local_288 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (*(code *)(*local_288)[2])();
        }
      }
      lVar25 = local_3f8 + 0x38;
      local_298 = (code *****)((ulonglong)local_298 & 0xffffffffffffff00);
      uStack_270 = uStack_270 & 0xffffffff00000000;
      FUN_1456bb102(&local_298,local_3f0);
      FUN_1447c3578(lVar25,&local_358,&local_298);
      if ((byte)local_338 == '\x03') {
        local_450 = CONCAT44(local_450._4_4_,(float)local_358);
        bVar34 = 3;
      }
      else {
        FUN_1400b56fe(&local_308,&local_358,3);
        local_450._0_4_ = 0.0;
        if (local_2e8 != 0) {
          local_450._0_4_ = (float)local_308;
        }
        pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_2e8 * 0x120));
        if (pcVar6 != (code *)0x0) {
          pppcVar39 = (code ***)&local_308;
          if (0x18 < local_2f0) {
            pppcVar39 = (code ***)local_308;
          }
          (*pcVar6)(pppcVar39);
        }
        if (0x18 < local_2f0) {
          FUN_1400020a8(local_308);
        }
        bVar34 = (byte)local_338;
      }
      pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar34 * 0x120));
      if (pcVar6 != (code *)0x0) {
        ppppppcVar29 = (code ******)&local_358;
        if (0x18 < (ushort)uStack_340) {
          ppppppcVar29 = (code ******)local_358;
        }
        (*pcVar6)(ppppppcVar29);
      }
      if (0x18 < (ushort)uStack_340) {
        FUN_1400020a8(local_358);
      }
      lVar25 = DAT_14c9a3da0;
      if ((longlong)(int)uStack_270 != 0) {
        lVar30 = (longlong)(int)uStack_270 + -1;
        lVar50 = lVar30 * 0x10;
        FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar50),
                      *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar50));
        if (*(longlong *)(lVar25 + lVar50) != 0) {
          FUN_1400020a8();
        }
        lVar25 = DAT_14c9a3da0;
        iVar22 = (int)lVar30;
        if (DAT_14c9a3dd4 != 0) {
          *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar22;
        }
        *(undefined4 *)(lVar25 + lVar50) = 0xffffffff;
        iVar49 = -1;
        if (0 < DAT_14c9a3dd4) {
          iVar49 = DAT_14c9a3dd0;
        }
        *(int *)(lVar25 + 4 + lVar50) = iVar49;
        DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
        puVar42 = &DAT_14c9a3db0;
        if (DAT_14c9a3dc0 != (undefined *)0x0) {
          puVar42 = DAT_14c9a3dc0;
        }
        iVar49 = iVar22 + 0x1f;
        if (-1 < iVar22) {
          iVar49 = iVar22;
        }
        bVar34 = (byte)lVar30 & 0x1f;
        DAT_14c9a3dd0 = iVar22;
        *(uint *)(puVar42 + (longlong)(iVar49 >> 5) * 4) =
             *(uint *)(puVar42 + (longlong)(iVar49 >> 5) * 4) &
             (-2 << bVar34 | 0xfffffffeU >> 0x20 - bVar34);
        uStack_270 = uStack_270 & 0xffffffff00000000;
      }
      if (((char)local_298 == '\x03') && (local_288 != (code ******)0x0)) {
        LOCK();
        piVar2 = (int *)((longlong)local_288 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (*(code *)(*local_288)[2])();
        }
      }
      lVar25 = local_3f8 + 0x118;
      local_298 = (code *****)((ulonglong)local_298 & 0xffffffffffffff00);
      uStack_270 = uStack_270 & 0xffffffff00000000;
      FUN_1456bb102(&local_298,local_3f0);
      FUN_1447c3578(lVar25,&local_358,&local_298);
      if ((byte)local_338 == '\x03') {
        local_458 = CONCAT44(local_458._4_4_,(float)local_358);
        bVar34 = 3;
      }
      else {
        FUN_1400b56fe(&local_308,&local_358,3);
        local_458._0_4_ = 0.0;
        if (local_2e8 != 0) {
          local_458._0_4_ = (float)local_308;
        }
        pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_2e8 * 0x120));
        if (pcVar6 != (code *)0x0) {
          pppcVar39 = (code ***)&local_308;
          if (0x18 < local_2f0) {
            pppcVar39 = (code ***)local_308;
          }
          (*pcVar6)(pppcVar39);
        }
        if (0x18 < local_2f0) {
          FUN_1400020a8(local_308);
        }
        bVar34 = (byte)local_338;
      }
      pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar34 * 0x120));
      if (pcVar6 != (code *)0x0) {
        ppppppcVar29 = (code ******)&local_358;
        if (0x18 < (ushort)uStack_340) {
          ppppppcVar29 = (code ******)local_358;
        }
        (*pcVar6)(ppppppcVar29);
      }
      if (0x18 < (ushort)uStack_340) {
        FUN_1400020a8(local_358);
      }
      lVar25 = DAT_14c9a3da0;
      if ((longlong)(int)uStack_270 != 0) {
        lVar30 = (longlong)(int)uStack_270 + -1;
        lVar50 = lVar30 * 0x10;
        FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar50),
                      *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar50));
        if (*(longlong *)(lVar25 + lVar50) != 0) {
          FUN_1400020a8();
        }
        lVar25 = DAT_14c9a3da0;
        iVar22 = (int)lVar30;
        if (DAT_14c9a3dd4 != 0) {
          *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar22;
        }
        *(undefined4 *)(lVar25 + lVar50) = 0xffffffff;
        iVar49 = -1;
        if (0 < DAT_14c9a3dd4) {
          iVar49 = DAT_14c9a3dd0;
        }
        *(int *)(lVar25 + 4 + lVar50) = iVar49;
        DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
        puVar42 = &DAT_14c9a3db0;
        if (DAT_14c9a3dc0 != (undefined *)0x0) {
          puVar42 = DAT_14c9a3dc0;
        }
        iVar49 = iVar22 + 0x1f;
        if (-1 < iVar22) {
          iVar49 = iVar22;
        }
        bVar34 = (byte)lVar30 & 0x1f;
        DAT_14c9a3dd0 = iVar22;
        *(uint *)(puVar42 + (longlong)(iVar49 >> 5) * 4) =
             *(uint *)(puVar42 + (longlong)(iVar49 >> 5) * 4) &
             (-2 << bVar34 | 0xfffffffeU >> 0x20 - bVar34);
        uStack_270 = uStack_270 & 0xffffffff00000000;
      }
      if (((char)local_298 == '\x03') && (local_288 != (code ******)0x0)) {
        LOCK();
        piVar2 = (int *)((longlong)local_288 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (*(code *)(*local_288)[2])();
        }
      }
      lVar25 = local_3f8 + 0x150;
      local_298 = (code *****)((ulonglong)local_298 & 0xffffffffffffff00);
      uStack_270 = uStack_270 & 0xffffffff00000000;
      FUN_1456bb102(&local_298,local_3f0);
      FUN_1447c3578(lVar25,&local_358,&local_298);
      if ((byte)local_338 == '\x03') {
        local_418 = ZEXT416((uint)(float)local_358);
        bVar34 = 3;
      }
      else {
        FUN_1400b56fe(&local_308,&local_358,3);
        local_418 = ZEXT816(0);
        if (local_2e8 != 0) {
          local_418 = ZEXT416((uint)(float)local_308);
        }
        pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_2e8 * 0x120));
        if (pcVar6 != (code *)0x0) {
          pppcVar39 = (code ***)&local_308;
          if (0x18 < local_2f0) {
            pppcVar39 = (code ***)local_308;
          }
          (*pcVar6)(pppcVar39);
        }
        if (0x18 < local_2f0) {
          FUN_1400020a8(local_308);
        }
        bVar34 = (byte)local_338;
      }
      pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar34 * 0x120));
      if (pcVar6 != (code *)0x0) {
        ppppppcVar29 = (code ******)&local_358;
        if (0x18 < (ushort)uStack_340) {
          ppppppcVar29 = (code ******)local_358;
        }
        (*pcVar6)(ppppppcVar29);
      }
      if (0x18 < (ushort)uStack_340) {
        FUN_1400020a8(local_358);
      }
      lVar25 = DAT_14c9a3da0;
      if ((longlong)(int)uStack_270 != 0) {
        lVar30 = (longlong)(int)uStack_270 + -1;
        lVar50 = lVar30 * 0x10;
        FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar50),
                      *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar50));
        if (*(longlong *)(lVar25 + lVar50) != 0) {
          FUN_1400020a8();
        }
        lVar25 = DAT_14c9a3da0;
        iVar22 = (int)lVar30;
        if (DAT_14c9a3dd4 != 0) {
          *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar22;
        }
        *(undefined4 *)(lVar25 + lVar50) = 0xffffffff;
        iVar49 = -1;
        if (0 < DAT_14c9a3dd4) {
          iVar49 = DAT_14c9a3dd0;
        }
        *(int *)(lVar25 + 4 + lVar50) = iVar49;
        DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
        puVar42 = &DAT_14c9a3db0;
        if (DAT_14c9a3dc0 != (undefined *)0x0) {
          puVar42 = DAT_14c9a3dc0;
        }
        iVar49 = iVar22 + 0x1f;
        if (-1 < iVar22) {
          iVar49 = iVar22;
        }
        bVar34 = (byte)lVar30 & 0x1f;
        DAT_14c9a3dd0 = iVar22;
        *(uint *)(puVar42 + (longlong)(iVar49 >> 5) * 4) =
             *(uint *)(puVar42 + (longlong)(iVar49 >> 5) * 4) &
             (-2 << bVar34 | 0xfffffffeU >> 0x20 - bVar34);
        uStack_270 = uStack_270 & 0xffffffff00000000;
      }
      if (((char)local_298 == '\x03') && (local_288 != (code ******)0x0)) {
        LOCK();
        piVar2 = (int *)((longlong)local_288 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (*(code *)(*local_288)[2])();
        }
      }
      lVar25 = local_3f8 + 0x188;
      local_298 = (code *****)((ulonglong)local_298 & 0xffffffffffffff00);
      uStack_270 = uStack_270 & 0xffffffff00000000;
      FUN_1456bb102(&local_298,local_3f0);
      FUN_1447c3578(lVar25,&local_358,&local_298);
      if ((byte)local_338 == '\x03') {
        local_428 = ZEXT416((uint)(float)local_358);
        bVar34 = 3;
      }
      else {
        FUN_1400b56fe(&local_308,&local_358,3);
        local_428 = ZEXT816(0);
        if (local_2e8 != 0) {
          local_428 = ZEXT416((uint)(float)local_308);
        }
        pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_2e8 * 0x120));
        if (pcVar6 != (code *)0x0) {
          pppcVar39 = (code ***)&local_308;
          if (0x18 < local_2f0) {
            pppcVar39 = (code ***)local_308;
          }
          (*pcVar6)(pppcVar39);
        }
        if (0x18 < local_2f0) {
          FUN_1400020a8(local_308);
        }
        bVar34 = (byte)local_338;
      }
      pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar34 * 0x120));
      if (pcVar6 != (code *)0x0) {
        ppppppcVar29 = (code ******)&local_358;
        if (0x18 < (ushort)uStack_340) {
          ppppppcVar29 = (code ******)local_358;
        }
        (*pcVar6)(ppppppcVar29);
      }
      if (0x18 < (ushort)uStack_340) {
        FUN_1400020a8(local_358);
      }
      lVar25 = DAT_14c9a3da0;
      if ((longlong)(int)uStack_270 != 0) {
        lVar30 = (longlong)(int)uStack_270 + -1;
        lVar50 = lVar30 * 0x10;
        FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar50),
                      *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar50));
        if (*(longlong *)(lVar25 + lVar50) != 0) {
          FUN_1400020a8();
        }
        lVar25 = DAT_14c9a3da0;
        iVar22 = (int)lVar30;
        if (DAT_14c9a3dd4 != 0) {
          *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar22;
        }
        *(undefined4 *)(lVar25 + lVar50) = 0xffffffff;
        iVar49 = -1;
        if (0 < DAT_14c9a3dd4) {
          iVar49 = DAT_14c9a3dd0;
        }
        *(int *)(lVar25 + 4 + lVar50) = iVar49;
        DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
        puVar42 = &DAT_14c9a3db0;
        if (DAT_14c9a3dc0 != (undefined *)0x0) {
          puVar42 = DAT_14c9a3dc0;
        }
        iVar49 = iVar22 + 0x1f;
        if (-1 < iVar22) {
          iVar49 = iVar22;
        }
        bVar34 = (byte)lVar30 & 0x1f;
        DAT_14c9a3dd0 = iVar22;
        *(uint *)(puVar42 + (longlong)(iVar49 >> 5) * 4) =
             *(uint *)(puVar42 + (longlong)(iVar49 >> 5) * 4) &
             (-2 << bVar34 | 0xfffffffeU >> 0x20 - bVar34);
        uStack_270 = uStack_270 & 0xffffffff00000000;
      }
      if (((char)local_298 == '\x03') && (local_288 != (code ******)0x0)) {
        LOCK();
        piVar2 = (int *)((longlong)local_288 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (*(code *)(*local_288)[2])();
        }
      }
      lVar25 = local_3f8 + 0x508;
      local_298 = (code *****)((ulonglong)local_298 & 0xffffffffffffff00);
      uStack_270 = uStack_270 & 0xffffffff00000000;
      FUN_1456bb102(&local_298,local_3f0);
      FUN_1447c3578(lVar25,&local_358,&local_298);
      if ((byte)local_338 == '\x03') {
        fVar65 = (float)local_358;
        bVar34 = 3;
      }
      else {
        FUN_1400b56fe(&local_308,&local_358,3);
        fVar65 = 0.0;
        if (local_2e8 != 0) {
          fVar65 = (float)local_308;
        }
        pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_2e8 * 0x120));
        if (pcVar6 != (code *)0x0) {
          pppcVar39 = (code ***)&local_308;
          if (0x18 < local_2f0) {
            pppcVar39 = (code ***)local_308;
          }
          (*pcVar6)(pppcVar39);
        }
        if (0x18 < local_2f0) {
          FUN_1400020a8(local_308);
        }
        bVar34 = (byte)local_338;
      }
      pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar34 * 0x120));
      if (pcVar6 != (code *)0x0) {
        ppppppcVar29 = (code ******)&local_358;
        if (0x18 < (ushort)uStack_340) {
          ppppppcVar29 = (code ******)local_358;
        }
        (*pcVar6)(ppppppcVar29);
      }
      if (0x18 < (ushort)uStack_340) {
        FUN_1400020a8(local_358);
      }
      lVar25 = DAT_14c9a3da0;
      if ((longlong)(int)uStack_270 != 0) {
        lVar30 = (longlong)(int)uStack_270 + -1;
        lVar50 = lVar30 * 0x10;
        FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar50),
                      *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar50));
        if (*(longlong *)(lVar25 + lVar50) != 0) {
          FUN_1400020a8();
        }
        lVar25 = DAT_14c9a3da0;
        iVar22 = (int)lVar30;
        if (DAT_14c9a3dd4 != 0) {
          *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar22;
        }
        *(undefined4 *)(lVar25 + lVar50) = 0xffffffff;
        iVar49 = -1;
        if (0 < DAT_14c9a3dd4) {
          iVar49 = DAT_14c9a3dd0;
        }
        *(int *)(lVar25 + 4 + lVar50) = iVar49;
        DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
        puVar42 = &DAT_14c9a3db0;
        if (DAT_14c9a3dc0 != (undefined *)0x0) {
          puVar42 = DAT_14c9a3dc0;
        }
        iVar49 = iVar22 + 0x1f;
        if (-1 < iVar22) {
          iVar49 = iVar22;
        }
        bVar34 = (byte)lVar30 & 0x1f;
        DAT_14c9a3dd0 = iVar22;
        *(uint *)(puVar42 + (longlong)(iVar49 >> 5) * 4) =
             *(uint *)(puVar42 + (longlong)(iVar49 >> 5) * 4) &
             (-2 << bVar34 | 0xfffffffeU >> 0x20 - bVar34);
        uStack_270 = uStack_270 & 0xffffffff00000000;
      }
      if (((char)local_298 == '\x03') && (local_288 != (code ******)0x0)) {
        LOCK();
        piVar2 = (int *)((longlong)local_288 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (*(code *)(*local_288)[2])();
        }
      }
      lVar25 = local_3f8 + 0x70;
      local_298 = (code *****)((ulonglong)local_298 & 0xffffffffffffff00);
      uStack_270 = uStack_270 & 0xffffffff00000000;
      FUN_1456bb102(&local_298,local_3f0);
      FUN_1447c3578(lVar25,&local_358,&local_298);
      local_46c = fVar65;
      if ((byte)local_338 == '\x03') {
        uVar63 = (float)local_358;
        bVar34 = 3;
      }
      else {
        FUN_1400b56fe(&local_308,&local_358,3);
        if (local_2e8 == 0) {
          uVar63 = 0x3f800000;
        }
        else {
          uVar63 = (float)local_308;
        }
        pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_2e8 * 0x120));
        if (pcVar6 != (code *)0x0) {
          pppcVar39 = (code ***)&local_308;
          if (0x18 < local_2f0) {
            pppcVar39 = (code ***)local_308;
          }
          (*pcVar6)(pppcVar39);
        }
        if (0x18 < local_2f0) {
          FUN_1400020a8(local_308);
        }
        bVar34 = (byte)local_338;
      }
      *(undefined4 *)(param_1 + 0x714) = uVar63;
      pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar34 * 0x120));
      if (pcVar6 != (code *)0x0) {
        ppppppcVar29 = (code ******)&local_358;
        if (0x18 < (ushort)uStack_340) {
          ppppppcVar29 = (code ******)local_358;
        }
        (*pcVar6)(ppppppcVar29);
      }
      if (0x18 < (ushort)uStack_340) {
        FUN_1400020a8(local_358);
      }
      lVar25 = DAT_14c9a3da0;
      if ((longlong)(int)uStack_270 != 0) {
        lVar30 = (longlong)(int)uStack_270 + -1;
        lVar50 = lVar30 * 0x10;
        FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar50),
                      *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar50));
        if (*(longlong *)(lVar25 + lVar50) != 0) {
          FUN_1400020a8();
        }
        lVar25 = DAT_14c9a3da0;
        iVar22 = (int)lVar30;
        if (DAT_14c9a3dd4 != 0) {
          *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar22;
        }
        *(undefined4 *)(lVar25 + lVar50) = 0xffffffff;
        iVar49 = -1;
        if (0 < DAT_14c9a3dd4) {
          iVar49 = DAT_14c9a3dd0;
        }
        *(int *)(lVar25 + 4 + lVar50) = iVar49;
        DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
        puVar42 = &DAT_14c9a3db0;
        if (DAT_14c9a3dc0 != (undefined *)0x0) {
          puVar42 = DAT_14c9a3dc0;
        }
        iVar49 = iVar22 + 0x1f;
        if (-1 < iVar22) {
          iVar49 = iVar22;
        }
        bVar34 = (byte)lVar30 & 0x1f;
        DAT_14c9a3dd0 = iVar22;
        *(uint *)(puVar42 + (longlong)(iVar49 >> 5) * 4) =
             *(uint *)(puVar42 + (longlong)(iVar49 >> 5) * 4) &
             (-2 << bVar34 | 0xfffffffeU >> 0x20 - bVar34);
        uStack_270 = uStack_270 & 0xffffffff00000000;
      }
      if (((char)local_298 == '\x03') && (local_288 != (code ******)0x0)) {
        LOCK();
        piVar2 = (int *)((longlong)local_288 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (*(code *)(*local_288)[2])();
        }
      }
      ppppppcVar29 = &local_298;
      (**(code **)((longlong)*local_3f0 + 0x588))(local_3f0,&local_358,ppppppcVar29);
      dVar53 = (double)FUN_144719204(local_298,0);
      dVar54 = (double)FUN_144719204(ppppcStack_290,0);
      local_400 = sin(dVar53 * 0.017453292519943295);
      dVar55 = cos(dVar53 * 0.017453292519943295);
      local_478 = sin(dVar54 * 0.017453292519943295);
      dVar53 = cos(dVar54 * 0.017453292519943295);
      pdVar23 = local_3f0;
      plVar41 = *(longlong **)(param_1 + 0x38);
      if ((((plVar41 == (longlong *)0x0) || (*(int *)(param_1 + 0x34) == 0)) ||
          (uVar35 = *(uint *)(param_1 + 0x30), (int)uVar35 < 0)) ||
         (((DAT_14c9647dc <= (int)uVar35 ||
           (lVar25 = (ulonglong)((uVar35 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar35 >> 0x10) * 8), lVar25 == 0))
          || ((*(int *)(lVar25 + 0x10) != *(int *)(param_1 + 0x34) ||
              ((*(uint *)(lVar25 + 8) & 0x10200000) != 0)))))) {
LAB_140707f51:
        dVar54 = pdVar23[0x39];
        if (dVar54 == 0.0) {
          pdVar47 = &DAT_14c8464e0;
          uVar63 = SUB84(DAT_14c8464f0,0);
          uVar61 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
        }
        else {
          uVar63 = (undefined4)*(undefined8 *)((longlong)dVar54 + 0x270);
          uVar61 = (undefined4)((ulonglong)*(undefined8 *)((longlong)dVar54 + 0x270) >> 0x20);
          pdVar47 = (double *)((longlong)dVar54 + 0x260);
        }
        dVar11 = *pdVar47;
        dVar12 = pdVar47[1];
        pdVar47 = pdVar23;
        dVar54 = (double)(**(code **)((longlong)*pdVar23 + 0x528))(pdVar23,&local_298,&local_308);
        dVar56 = (double)((float)local_308 * 0.5);
        dVar8 = (double)CONCAT44(uVar61,uVar63) + dVar56;
        dVar12 = dVar12 + dVar56;
        dVar11 = dVar11 + dVar56;
        dVar56 = pdVar23[0x39];
      }
      else {
        if (*(code **)(*plVar41 + 0x10) == (code *)&LAB_144944cea) {
          ppppppcVar28 = (code ******)(plVar41 + 0xe1);
        }
        else {
          ppppppcVar28 = (code ******)(**(code **)(*plVar41 + 0x10))(plVar41);
        }
        local_390 = (code *****)&local_3d8;
        local_3d8 = (uint)DAT_14cb72628;
        uStack_3d4 = (undefined4)((ulonglong)DAT_14cb72628 >> 0x20);
        local_388 = (code ****)&local_3c8;
        local_3c8._0_4_ = 0;
        local_3c8._4_4_ = 0;
        local_378 = (code *****)&local_390;
        local_380 = (code *****)&LAB_143cbcae0;
        if (ppppppcVar28[8] == (code *****)0x0) goto LAB_140707f51;
        pppppcStack_300 = (code *****)&local_2c0;
        local_2b8 = (code *****)&local_380;
        local_3b0 = (code ****)&local_308;
        local_308 = FUN_143cbca2e;
        ppppcStack_290 = (code ****)&local_3b0;
        local_298 = (code *****)FUN_1487df56e;
        local_2c0 = (code *****)ppppppcVar28;
        FUN_1447c5ba2();
        dVar54 = (double)CONCAT44(local_3c8._4_4_,(undefined4)local_3c8);
        if (dVar54 == 0.0) goto LAB_140707f51;
        dVar56 = pdVar23[0x39];
        if (dVar56 == 0.0) {
          pdVar47 = &DAT_14c8464e0;
          uVar63 = SUB84(DAT_14c8464f0,0);
          uVar61 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
        }
        else {
          pdVar47 = (double *)((longlong)dVar56 + 0x260);
          uVar63 = (undefined4)*(undefined8 *)((longlong)dVar56 + 0x270);
          uVar61 = (undefined4)((ulonglong)*(undefined8 *)((longlong)dVar56 + 0x270) >> 0x20);
        }
        dVar8 = ((double)CONCAT44(uVar61,uVar63) + *(double *)((longlong)dVar54 + 0x410)) * 0.5;
        dVar12 = (pdVar47[1] + *(double *)((longlong)dVar54 + 0x408)) * 0.5;
        dVar11 = (*pdVar47 + *(double *)((longlong)dVar54 + 0x400)) * 0.5;
      }
      uVar63 = SUB84(pdVar47,0);
      if (dVar56 == 0.0) {
        uVar63 = SUB84(DAT_14c846500,0);
        uVar61 = (undefined4)((ulonglong)DAT_14c846500 >> 0x20);
        dVar54 = DAT_14c8464f8;
      }
      else {
        ppppppcVar28 = *(code *******)((longlong)dVar56 + 0x240);
        pppppcVar37 = *(code ******)((longlong)dVar56 + 0x248);
        ppppppcVar13 = *(code *******)((longlong)dVar56 + 0x250);
        pvVar7 = *(void **)((longlong)dVar56 + 600);
        pdVar23 = *(double **)((longlong)dVar56 + 0x228);
        local_298 = (code *****)ppppppcVar28;
        ppppcStack_290 = (code ****)pppppcVar37;
        local_288 = ppppppcVar13;
        uStack_280 = pvVar7;
        if (pdVar23 == (double *)0x0) {
          uVar63 = 0x40;
          pdVar23 = (double *)FUN_14001cc68(0x40,0x10);
          dVar54 = DAT_14c8463d8;
          *pdVar23 = DAT_14c8463d0;
          pdVar23[1] = dVar54;
          dVar54 = DAT_14c8463e8;
          pdVar23[2] = DAT_14c8463e0;
          pdVar23[3] = dVar54;
          dVar54 = DAT_14c846500;
          pdVar23[4] = DAT_14c8464f8;
          pdVar23[5] = dVar54;
          dVar54 = DAT_14c846508;
          pdVar23[6] = DAT_14c846508;
          *(double **)((longlong)dVar56 + 0x228) = pdVar23;
        }
        auVar9._8_4_ = (int)-(ulonglong)((double)pppppcVar37 != pdVar23[1]);
        auVar9._0_8_ = -(ulonglong)((double)ppppppcVar28 != *pdVar23);
        auVar9._12_4_ = (int)(-(ulonglong)((double)pppppcVar37 != pdVar23[1]) >> 0x20);
        iVar22 = movmskpd(SUB84(dVar54,0),auVar9);
        auVar10._8_4_ = (int)-(ulonglong)((double)pvVar7 != pdVar23[3]);
        auVar10._0_8_ = -(ulonglong)((double)ppppppcVar13 != pdVar23[2]);
        auVar10._12_4_ = (int)(-(ulonglong)((double)pvVar7 != pdVar23[3]) >> 0x20);
        uVar35 = movmskpd(uVar63,auVar10);
        if ((uVar35 & 0x3fffffff) != 0 || iVar22 != 0) {
          *(undefined4 *)(pdVar23 + 2) = (undefined4)local_288;
          *(undefined4 *)((longlong)pdVar23 + 0x14) = local_288._4_4_;
          *(int *)(pdVar23 + 3) = (int)uStack_280;
          *(undefined4 *)((longlong)pdVar23 + 0x1c) = uStack_280._4_4_;
          *pdVar23 = (double)local_298;
          pdVar23[1] = (double)ppppcStack_290;
          FUN_1448052ee(&local_298,&local_308);
          pdVar23[6] = local_2f8;
          pdVar23[4] = (double)local_308;
          pdVar23[5] = (double)pppppcStack_300;
        }
        uVar63 = SUB84(pdVar23[5],0);
        uVar61 = (undefined4)((ulonglong)pdVar23[5] >> 0x20);
        dVar54 = pdVar23[4];
      }
      dVar54 = (double)FUN_144719204(dVar54,0);
      dVar56 = (double)FUN_144719204(CONCAT44(uVar61,uVar63));
      sin(dVar54 * 0.017453292519943295);
      cos(dVar54 * 0.017453292519943295);
      sin(dVar56 * 0.017453292519943295);
      cos(dVar56 * 0.017453292519943295);
      local_288 = (code ******)0x0;
      uStack_280 = (void *)CONCAT44(0x80,*(int *)(local_3e8 + 0x238) + *(int *)(param_1 + 0x6e0));
      uVar35 = *(int *)(local_3e8 + 0x238) + *(int *)(param_1 + 0x6e0) + 0x1f;
      fVar65 = local_46c;
      if (0x1f < uVar35) {
        if (uVar35 < 0xa0) {
LAB_1407066ff:
          fVar65 = local_46c;
          memset(ppppppcVar29,0,(ulonglong)(uVar35 >> 3 & 0xfffffffc));
        }
        else {
          FUN_14499171c(&local_298,0,uVar35 >> 5,4);
          uStack_280 = (void *)(CONCAT44(uVar35,(int)uStack_280) & 0xffffffe0ffffffff);
          ppppppcVar29 = local_288;
          if (local_288 == (code ******)0x0) {
            ppppppcVar29 = &local_298;
          }
          if (uVar35 < 0x120) goto LAB_1407066ff;
          memset(ppppppcVar29,0,(ulonglong)((uVar35 >> 5) << 2));
          fVar65 = local_46c;
        }
        iVar22 = (int)uStack_280 + 0x1f;
        if (-1 < (int)uStack_280) {
          iVar22 = (int)uStack_280;
        }
        if ((int)uStack_280 % 0x20 != 0) {
          ppppppcVar29 = local_288;
          if (local_288 == (code ******)0x0) {
            ppppppcVar29 = &local_298;
          }
          bVar34 = -(char)((int)uStack_280 % 0x20);
          *(uint *)((longlong)ppppppcVar29 + (longlong)(iVar22 >> 5) * 4) =
               (uint)(*(int *)((longlong)ppppppcVar29 + (longlong)(iVar22 >> 5) * 4) <<
                     (bVar34 & 0x1f)) >> (bVar34 & 0x1f);
        }
      }
      lVar25 = local_3e8;
      local_468 = param_1 + 0xd8;
      if (0 < *(int *)(local_3e8 + 0x238)) {
        local_478 = local_478 * dVar55;
        dVar53 = dVar53 * dVar55;
        lVar50 = 0;
        do {
          lVar30 = *(longlong *)(lVar25 + 0x230);
          iVar22 = *(int *)(lVar30 + 4 + lVar50 * 8);
          if (((iVar22 != 0) && (uVar35 = *(uint *)(lVar30 + lVar50 * 8), -1 < (int)uVar35)) &&
             (((((int)uVar35 < DAT_14c9647dc &&
                (((plVar41 = (longlong *)
                             ((ulonglong)((uVar35 & 0xffff) * 0x18) +
                             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar35 >> 0x10) * 8)),
                  plVar41 != (longlong *)0x0 && ((int)plVar41[2] == iVar22)) &&
                 ((*(uint *)(plVar41 + 1) & 0x10200000) == 0)))) &&
               (((*plVar41 != 0 &&
                 (pdVar23 = *(double **)(*plVar41 + 0x3d0), pdVar23 != (double *)0x0)) &&
                (pdVar23 != local_3f0)))) &&
              (pfVar27 = (float *)FUN_14070cd48(lVar24,pdVar23), pfVar27 != (float *)0x0)))) {
            lVar30 = 0;
            do {
              pfVar3 = (float *)((longlong)pfVar27 + lVar30);
              bVar51 = lVar30 != 0x240;
              lVar30 = lVar30 + 0x60;
            } while (bVar51 && fVar65 < *pfVar3);
            if (*pfVar3 <= fVar65) {
              lVar30 = *(longlong *)(param_1 + 0x6d8);
              lVar31 = lVar30;
              if (lVar30 == 0) {
                lVar31 = local_468;
              }
              uVar35 = *(uint *)(param_1 + 0x6e0);
              uVar45 = (ulonglong)(int)uVar35;
              local_43c = fVar64;
              local_438 = lVar24;
              local_430 = dVar53;
              if (uVar45 != 0) {
                lVar24 = 0;
                do {
                  iVar22 = *(int *)(lVar31 + 4 + lVar24);
                  if ((iVar22 == 0) || (uVar36 = *(uint *)(lVar31 + lVar24), (int)uVar36 < 0)) {
LAB_14070937a:
                    pdVar47 = (double *)0x0;
                  }
                  else {
                    pdVar47 = (double *)0x0;
                    if ((int)uVar36 < DAT_14c9647dc) {
                      puVar43 = (undefined8 *)
                                ((ulonglong)((uVar36 & 0xffff) * 0x18) +
                                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar36 >> 0x10) * 8));
                      if (((puVar43 == (undefined8 *)0x0) || (*(int *)(puVar43 + 2) != iVar22)) ||
                         ((*(uint *)(puVar43 + 1) & 0x10200000) != 0)) goto LAB_14070937a;
                      pdVar47 = (double *)*puVar43;
                    }
                  }
                  if (pdVar47 == pdVar23) {
                    uVar36 = (int)(lVar24 >> 6) * -0x55555555;
                    if ((-1 < (int)uVar36) && ((int)uVar36 < (int)uVar35)) {
                      uVar45 = (ulonglong)(uVar36 & 0x7fffffff);
                      goto LAB_14070693a;
                    }
                    break;
                  }
                  lVar24 = lVar24 + 0xc0;
                } while (uVar45 * 0xc0 != lVar24);
              }
              *(uint *)(param_1 + 0x6e0) = uVar35 + 1;
              if (*(uint *)(param_1 + 0x6e4) < uVar35 + 1) {
                FUN_148873b66(local_468,uVar35);
                lVar30 = *(longlong *)(param_1 + 0x6d8);
              }
              if (lVar30 == 0) {
                lVar30 = local_468;
              }
              FUN_14573cd82(uVar45 * 0xc0 + lVar30,pdVar23);
              lVar30 = *(longlong *)(param_1 + 0x6d8);
              uVar36 = uVar35;
LAB_14070693a:
              if (lVar30 == 0) {
                lVar30 = local_468;
              }
              ppppppcVar29 = local_288;
              if (local_288 == (code ******)0x0) {
                ppppppcVar29 = &local_298;
              }
              uVar35 = uVar36 + 0x1f;
              if (-1 < (int)uVar36) {
                uVar35 = uVar36;
              }
              puVar48 = (uint *)((longlong)ppppppcVar29 + (longlong)((int)uVar35 >> 5) * 4);
              *puVar48 = *puVar48 | 1 << ((byte)uVar36 & 0x1f);
              lVar31 = lVar30 + uVar45 * 0xc0;
              (**(code **)((longlong)*pdVar23 + 0x588))
                        (pdVar23,(double *)(lVar31 + 0x38),&local_308);
              dVar53 = (double)FUN_144719204(local_308,0);
              dVar54 = (double)FUN_144719204(pppppcStack_300,0);
              dVar55 = sin(dVar53 * 0.017453292519943295);
              dVar53 = cos(dVar53 * 0.017453292519943295);
              dVar56 = sin(dVar54 * 0.017453292519943295);
              dVar54 = cos(dVar54 * 0.017453292519943295);
              lVar24 = local_438;
              *(double *)(lVar31 + 0x50) = dVar54 * dVar53;
              *(double *)(lVar31 + 0x58) = dVar56 * dVar53;
              *(double *)(lVar31 + 0x60) = dVar55;
              dVar57 = *(double *)(lVar31 + 0x48) - (double)local_348;
              dVar53 = *(double *)(lVar31 + 0x40) - (double)pppppcStack_350;
              dVar54 = *(double *)(lVar31 + 0x38) - (double)local_358;
              fVar64 = (float)SQRT(dVar57 * dVar57 + dVar54 * dVar54 + dVar53 * dVar53);
              *(float *)(lVar31 + 0x68) = fVar64;
              dVar58 = DAT_14c8464f0;
              dVar55 = DAT_14c8464e8;
              dVar56 = DAT_14c8464e0;
              if (1e-08 < fVar64) {
                dVar56 = (double)(1.0 / fVar64);
                dVar58 = dVar57 * dVar56;
                dVar55 = dVar53 * dVar56;
                dVar56 = dVar54 * dVar56;
              }
              lVar30 = lVar30 + uVar45 * 0xc0;
              dVar54 = dVar58 * local_400 + dVar55 * local_478 + dVar56 * local_430;
              dVar53 = dVar54;
              if (1.0 <= dVar54) {
                dVar53 = 1.0;
              }
              dVar53 = acos((double)(-(ulonglong)(dVar54 < -1.0) & 0xbff0000000000000 |
                                    ~-(ulonglong)(dVar54 < -1.0) & (ulonglong)dVar53));
              *(float *)(lVar30 + 0x74) = (float)(dVar53 * 57.29577951308232);
              dVar53 = *(double *)(lVar30 + 0x48);
              dVar54 = *(double *)(lVar30 + 0x38);
              dVar55 = *(double *)(lVar30 + 0x40);
              dVar56 = *(double *)(lVar30 + 0x50);
              uVar63 = SUB84(dVar56,0);
              uVar61 = (undefined4)((ulonglong)dVar56 >> 0x20);
              dVar58 = *(double *)(lVar30 + 0x58);
              dVar57 = 0.0;
              if (((dVar56 != 0.0) || (NAN(dVar56))) || ((dVar58 != 0.0 || (NAN(dVar58))))) {
                dVar57 = atan2(dVar58,dVar56);
                dVar57 = dVar57 * 57.29577951308232;
                uVar63 = (undefined4)*(undefined8 *)(lVar30 + 0x50);
                uVar61 = (undefined4)((ulonglong)*(undefined8 *)(lVar30 + 0x50) >> 0x20);
                dVar58 = *(double *)(lVar30 + 0x58);
              }
              dVar58 = SQRT((double)CONCAT44(uVar61,uVar63) * (double)CONCAT44(uVar61,uVar63) +
                            dVar58 * dVar58);
              dVar56 = *(double *)(lVar30 + 0x60);
              dVar59 = 0.0;
              if ((((dVar56 != 0.0) || (NAN(dVar56))) || (dVar58 != 0.0)) || (NAN(dVar58))) {
                dVar59 = atan2(dVar56,dVar58);
                dVar59 = dVar59 * 57.29577951308232;
              }
              dVar55 = dVar55 - dVar12;
              dVar54 = dVar54 - dVar11;
              dVar56 = 0.0;
              if (((dVar55 != 0.0) || (NAN(dVar55))) || ((dVar54 != 0.0 || (NAN(dVar54))))) {
                dVar56 = atan2(-dVar55,-dVar54);
                dVar56 = dVar56 * 57.29577951308232;
              }
              dVar53 = dVar53 - dVar8;
              dVar54 = SQRT(dVar54 * dVar54 + dVar55 * dVar55);
              dVar55 = 0.0;
              if (((dVar53 != 0.0) || (NAN(dVar53))) || ((dVar54 != 0.0 || (NAN(dVar54))))) {
                dVar55 = atan2(-dVar53,dVar54);
                dVar55 = dVar55 * 57.29577951308232;
              }
              dVar53 = local_430;
              fVar64 = local_43c;
              fVar65 = local_46c;
              *(float *)(lVar30 + 0x70) = (float)(dVar59 - dVar55);
              *(float *)(lVar30 + 0x6c) = (float)(dVar57 - dVar56);
              fVar66 = *(float *)(lVar30 + 0x68);
              cVar16 = *(char *)(lVar30 + 0x78);
              if ((bool)*(char *)(lVar30 + 0x78) != fVar66 <= local_43c) {
                *(float *)(lVar30 + 0x7c) = local_3e0[0];
                cVar16 = fVar66 <= local_43c;
              }
              *(undefined4 *)(lVar30 + 0x80) = 0;
              *(undefined1 *)(lVar30 + 0x79) = 1;
              *(char *)(lVar30 + 0x78) = cVar16;
              cVar16 = *(char *)(lVar30 + 0x84);
              if ((bool)*(char *)(lVar30 + 0x84) != fVar66 <= (float)local_450) {
                *(float *)(lVar30 + 0x88) = local_3e0[0];
                cVar16 = fVar66 <= (float)local_450;
              }
              *(undefined4 *)(lVar30 + 0x8c) = 0;
              *(undefined1 *)(lVar30 + 0x85) = 1;
              *(char *)(lVar30 + 0x84) = cVar16;
              bVar44 = -(ABS((float)(dVar59 - dVar55)) <= (float)local_428._0_4_ &&
                        ABS((float)(dVar57 - dVar56)) <= (float)local_418._0_4_) & 1;
              bVar34 = *(byte *)(lVar30 + 0x90);
              if (*(byte *)(lVar30 + 0x90) != bVar44) {
                *(float *)(lVar30 + 0x94) = local_3e0[0];
                bVar34 = bVar44;
              }
              *(undefined4 *)(lVar30 + 0x98) = 0;
              *(undefined1 *)(lVar30 + 0x91) = 1;
              *(byte *)(lVar30 + 0x90) = bVar34;
              bVar51 = *(float *)(lVar30 + 0x74) <= (float)local_458;
              cVar16 = *(char *)(lVar30 + 0x9c);
              if ((bool)*(char *)(lVar30 + 0x9c) != bVar51) {
                *(float *)(lVar30 + 0xa0) = local_3e0[0];
                cVar16 = bVar51;
              }
              *(undefined4 *)(lVar30 + 0xa4) = 0;
              *(undefined1 *)(lVar30 + 0x9d) = 1;
              *(char *)(lVar30 + 0x9c) = cVar16;
              fVar66 = *pfVar27;
              cVar16 = *(char *)(lVar30 + 0xb4);
              if ((bool)*(char *)(lVar30 + 0xb4) != fVar66 <= 0.1) {
                *(float *)(lVar30 + 0xb8) = local_3e0[0];
                cVar16 = fVar66 <= 0.1;
              }
              *(undefined4 *)(lVar30 + 0xbc) = 0;
              *(undefined1 *)(lVar30 + 0xb5) = 1;
              *(char *)(lVar30 + 0xb4) = cVar16;
              cVar17 = FUN_14070cb72(pdVar23);
              cVar16 = *(char *)(lVar30 + 0xa8);
              if (*(char *)(lVar30 + 0xa8) != cVar17) {
                *(float *)(lVar30 + 0xac) = local_3e0[0];
                cVar16 = cVar17;
              }
              *(undefined4 *)(lVar30 + 0xb0) = 0;
              *(undefined1 *)(lVar30 + 0xa9) = 1;
              *(char *)(lVar30 + 0xa8) = cVar16;
            }
          }
          lVar50 = lVar50 + 1;
        } while ((int)lVar50 < *(int *)(lVar25 + 0x238));
      }
      uVar35 = *(uint *)(param_1 + 0x6e0);
      uVar45 = (ulonglong)(int)uVar35;
      if (0 < (longlong)uVar45) {
        iVar22 = -uVar35;
        lVar24 = uVar45 * 0xc0;
        do {
          if ((longlong)uVar45 <= (longlong)(int)uStack_280) {
            ppppppcVar29 = local_288;
            if (local_288 == (code ******)0x0) {
              ppppppcVar29 = &local_298;
            }
            if ((*(uint *)((longlong)ppppppcVar29 + (uVar45 - 1 >> 5 & 0x7ffffff) * 4) >>
                 ((int)uVar45 - 1U & 0x1f) & 1) == 0) {
              if (uVar45 != uVar35) {
                lVar25 = *(longlong *)(param_1 + 0x6d8);
                if (*(longlong *)(param_1 + 0x6d8) == 0) {
                  lVar25 = local_468;
                }
                memmove((void *)(lVar25 + lVar24 + -0xc0),(void *)(lVar25 + lVar24),
                        (longlong)(int)(uVar35 + iVar22) * 0xc0);
                uVar35 = *(uint *)(param_1 + 0x6e0);
              }
              uVar35 = uVar35 - 1;
              *(uint *)(param_1 + 0x6e0) = uVar35;
              if ((longlong)uVar45 <= (longlong)*(int *)(param_1 + 0x700)) {
                *(int *)(param_1 + 0x700) = *(int *)(param_1 + 0x700) + -1;
              }
              if ((longlong)uVar45 <= (longlong)*(int *)(param_1 + 0x704)) {
                *(int *)(param_1 + 0x704) = *(int *)(param_1 + 0x704) + -1;
              }
            }
          }
          iVar22 = iVar22 + 1;
          lVar24 = lVar24 + -0xc0;
          bVar51 = 1 < uVar45;
          uVar45 = uVar45 - 1;
        } while (bVar51);
      }
      if (local_288 != (code ******)0x0) {
        FUN_1400020a8();
      }
    }
    else if (((*(char *)(param_1 + 0x7dd) != '\x01') || (*(char *)(param_1 + 0x7dc) != '\x01')) ||
            ((0.0 < *(float *)(param_1 + 0x7e4) &&
             (*(float *)(param_1 + 0x7e4) < local_3e0[0] - *(float *)(param_1 + 0x7e0)))))
    goto LAB_140706ea6;
  }
  fVar64 = local_3e0[0];
  cVar16 = *(char *)(param_1 + 0x755);
  if (*(char *)(param_1 + 0x759) == '\x01') {
    if (*(char *)(param_1 + 0x758) == '\x01') {
      *(undefined1 *)(param_1 + 0x759) = 0;
      *(float *)(param_1 + 0x760) = local_3e0[0];
      *(undefined2 *)(param_1 + 0x75c) = 0x101;
      *(undefined4 *)(param_1 + 0x764) = *(undefined4 *)(param_1 + 0x76c);
LAB_140706f04:
      if ((0.0 < *(float *)(param_1 + 0x764)) &&
         (*(float *)(param_1 + 0x764) < local_3e0[0] - *(float *)(param_1 + 0x760)))
      goto LAB_140706f43;
    }
  }
  else {
    if (((*(byte *)(param_1 + 0x75d) & 1) != 0) && ((*(byte *)(param_1 + 0x75c) & 1) != 0))
    goto LAB_140706f04;
LAB_140706f43:
    cVar17 = *(char *)(param_1 + 0x7dd);
    if ((cVar17 == '\x01') && (*(char *)(param_1 + 0x7dc) == '\x01')) {
      bVar34 = 1;
      if ((0.0 < *(float *)(param_1 + 0x7e4)) &&
         (*(float *)(param_1 + 0x7e4) < local_3e0[0] - *(float *)(param_1 + 0x7e0)))
      goto LAB_140706f54;
LAB_140708785:
      if (((bVar34 & 1) != 0) &&
         ((*(float *)(param_1 + 0x7e4) <= 0.0 ||
          (fVar64 - *(float *)(param_1 + 0x7e0) <= *(float *)(param_1 + 0x7e4))))) {
        *(undefined1 *)(param_1 + 0x755) = 1;
        if (*(char *)(param_1 + 0x710) == '\x01') {
          *(undefined1 *)(param_1 + 0x710) = 0;
        }
        goto LAB_1407072a3;
      }
    }
    else {
LAB_140706f54:
      if ((*(char *)(param_1 + 0x791) != '\x01') ||
         ((*(char *)(param_1 + 0x790) != '\x01' ||
          ((0.0 < *(float *)(param_1 + 0x798) &&
           (*(float *)(param_1 + 0x798) < local_3e0[0] - *(float *)(param_1 + 0x794))))))) {
        iVar22 = *(int *)(param_1 + 0x700);
        if ((-1 < (longlong)iVar22) && (iVar22 < *(int *)(param_1 + 0x6e0))) {
          lVar24 = *(longlong *)(param_1 + 0x6d8);
          if (*(longlong *)(param_1 + 0x6d8) == 0) {
            lVar24 = param_1 + 0xd8;
          }
          if (((longlong)iVar22 * 0xc0 + lVar24 != 0) &&
             (local_3e0[0] - *(float *)(param_1 + 0x708) <= 1.0)) goto LAB_140707074;
        }
        cVar18 = FUN_14070c9d0(param_1 + 0x6e8);
        uVar45 = 0xffffffff;
        iVar49 = -1;
        if ((cVar18 != '\0') && (iVar5 = *(int *)(param_1 + 0x6e0), 0 < (longlong)iVar5)) {
          lVar24 = param_1 + 0xd8;
          if (*(longlong *)(param_1 + 0x6d8) != 0) {
            lVar24 = *(longlong *)(param_1 + 0x6d8);
          }
          lVar24 = lVar24 + 0x78;
          fVar65 = 3.4028235e+38;
          uVar46 = 0;
          do {
            fVar66 = *(float *)(lVar24 + -0x10);
            if ((fVar66 < fVar65) && (cVar18 = FUN_14070c9d0(lVar24), cVar18 != '\0')) {
              uVar45 = uVar46 & 0xffffffff;
              fVar65 = fVar66;
            }
            iVar49 = (int)uVar45;
            uVar46 = uVar46 + 1;
            lVar24 = lVar24 + 0xc0;
          } while ((longlong)iVar5 != uVar46);
        }
        if (iVar22 != iVar49) {
          *(int *)(param_1 + 0x704) = iVar22;
          *(int *)(param_1 + 0x700) = iVar49;
          *(float *)(param_1 + 0x708) = fVar64;
          if (*(char *)(param_1 + 0x7cc) != '\0') {
            *(float *)(param_1 + 2000) = fVar64;
          }
          *(undefined4 *)(param_1 + 0x7d4) = 0;
          *(undefined2 *)(param_1 + 0x7cc) = 0x100;
        }
      }
LAB_140707074:
      if (cVar17 != '\0') {
        bVar34 = *(byte *)(param_1 + 0x7dc);
        goto LAB_140708785;
      }
    }
    if ((cVar16 != '\0') || (*(char *)(param_1 + 0x7c0) != '\x02')) {
      iVar22 = *(int *)(param_1 + 0x700);
      if (((longlong)iVar22 < 0) || (*(int *)(param_1 + 0x6e0) <= iVar22)) {
LAB_1407070c9:
        bVar34 = 0;
LAB_1407070cc:
        bVar44 = 0;
      }
      else {
        lVar24 = param_1 + 0xd8;
        if (*(longlong *)(param_1 + 0x6d8) != 0) {
          lVar24 = *(longlong *)(param_1 + 0x6d8);
        }
        lVar24 = (longlong)iVar22 * 0xc0 + lVar24;
        if (lVar24 == 0) goto LAB_1407070c9;
        cVar17 = FUN_14070cece(param_1,&local_3f8);
        fVar64 = local_3e0[0];
        bVar34 = 1;
        if (cVar17 == '\0') goto LAB_1407070cc;
        bVar44 = FUN_14070c9d0(lVar24 + 0x84,local_3e0[0],0x3f800000);
        bVar19 = FUN_14070c9d0(lVar24 + 0x90,fVar64,0x3f800000);
        bVar20 = FUN_14070c9d0();
        if ((*(char *)(param_1 + 0x6f5) == '\x01') && (*(char *)(param_1 + 0x6f4) == '\x01')) {
          bVar51 = true;
          if (0.0 < *(float *)(param_1 + 0x6fc)) {
            bVar51 = fVar64 - *(float *)(param_1 + 0x6f8) <= *(float *)(param_1 + 0x6fc);
          }
        }
        else {
          bVar51 = false;
        }
        bVar44 = bVar19 & bVar44 & (bVar20 | bVar51);
      }
      bVar19 = *(byte *)(param_1 + 0x6f4);
      if (*(byte *)(param_1 + 0x6f4) != bVar44) {
        *(float *)(param_1 + 0x6f8) = local_3e0[0];
        bVar19 = bVar44;
      }
      *(undefined4 *)(param_1 + 0x6fc) = 0;
      *(undefined1 *)(param_1 + 0x6f5) = 1;
      *(byte *)(param_1 + 0x6f4) = bVar19;
      if ((*(int *)(param_1 + 0x700) == -1) && (*(int *)(param_1 + 0x704) != -1)) {
        if (*(char *)(param_1 + 0x73c) != '\0') {
          *(float *)(param_1 + 0x740) = local_3e0[0];
        }
        *(undefined4 *)(param_1 + 0x744) = 0;
        *(undefined2 *)(param_1 + 0x73c) = 0x100;
      }
      if (bVar19 == 0) {
        bVar44 = *(byte *)(param_1 + 0x73d);
LAB_140707124:
        if (((bVar44 & 1) != 0) && ((*(byte *)(param_1 + 0x73c) & 1) != 0)) {
          fVar64 = local_3e0[0] - *(float *)(param_1 + 0x740);
          if (((*(float *)(param_1 + 0x744) <= 0.0) || (fVar64 <= *(float *)(param_1 + 0x744))) &&
             (*(float *)(param_1 + 0x780) <= fVar64)) {
            lVar24 = local_3f8 + 0x3b8;
            local_298 = (code *****)((ulonglong)local_298 & 0xffffffffffffff00);
            uStack_270 = uStack_270 & 0xffffffff00000000;
            FUN_1456bb102(&local_298,local_3f0);
            FUN_1447c3578(lVar24,&local_358,&local_298);
            if ((byte)local_338 == '\x03') {
              uVar63 = (float)local_358;
              bVar44 = 3;
            }
            else {
              FUN_1400b56fe(&local_308,&local_358,3);
              uVar63 = 0;
              if (local_2e8 != 0) {
                uVar63 = (float)local_308;
              }
              pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_2e8 * 0x120));
              if (pcVar6 != (code *)0x0) {
                pppcVar39 = (code ***)&local_308;
                if (0x18 < local_2f0) {
                  pppcVar39 = (code ***)local_308;
                }
                (*pcVar6)(pppcVar39);
              }
              if (0x18 < local_2f0) {
                FUN_1400020a8(local_308);
              }
              bVar44 = (byte)local_338;
            }
            pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar44 * 0x120));
            if (pcVar6 != (code *)0x0) {
              ppppppcVar29 = (code ******)&local_358;
              if (0x18 < (ushort)uStack_340) {
                ppppppcVar29 = (code ******)local_358;
              }
              (*pcVar6)(ppppppcVar29);
            }
            if (0x18 < (ushort)uStack_340) {
              FUN_1400020a8(local_358);
            }
            lVar24 = DAT_14c9a3da0;
            if ((longlong)(int)uStack_270 != 0) {
              lVar25 = (longlong)(int)uStack_270 + -1;
              lVar50 = lVar25 * 0x10;
              FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar50),
                            *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar50));
              if (*(longlong *)(lVar24 + lVar50) != 0) {
                FUN_1400020a8();
              }
              lVar24 = DAT_14c9a3da0;
              iVar22 = (int)lVar25;
              if (DAT_14c9a3dd4 != 0) {
                *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar22;
              }
              *(undefined4 *)(lVar24 + lVar50) = 0xffffffff;
              iVar49 = -1;
              if (0 < DAT_14c9a3dd4) {
                iVar49 = DAT_14c9a3dd0;
              }
              *(int *)(lVar24 + 4 + lVar50) = iVar49;
              DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
              puVar42 = &DAT_14c9a3db0;
              if (DAT_14c9a3dc0 != (undefined *)0x0) {
                puVar42 = DAT_14c9a3dc0;
              }
              iVar49 = iVar22 + 0x1f;
              if (-1 < iVar22) {
                iVar49 = iVar22;
              }
              bVar44 = (byte)lVar25 & 0x1f;
              DAT_14c9a3dd0 = iVar22;
              *(uint *)(puVar42 + (longlong)(iVar49 >> 5) * 4) =
                   *(uint *)(puVar42 + (longlong)(iVar49 >> 5) * 4) &
                   (-2 << bVar44 | 0xfffffffeU >> 0x20 - bVar44);
              uStack_270 = uStack_270 & 0xffffffff00000000;
            }
            if (((char)local_298 == '\x03') && (local_288 != (code ******)0x0)) {
              LOCK();
              piVar2 = (int *)((longlong)local_288 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (*(code *)(*local_288)[2])();
              }
            }
            *(float *)(param_1 + 0x74c) = local_3e0[0];
            *(undefined2 *)(param_1 + 0x748) = 0x101;
            *(undefined4 *)(param_1 + 0x750) = uVar63;
            if (*(char *)(param_1 + 0x73c) != '\0') {
              *(float *)(param_1 + 0x740) = local_3e0[0];
            }
            *(undefined4 *)(param_1 + 0x744) = 0;
            *(undefined2 *)(param_1 + 0x73c) = 0x100;
            lVar24 = local_3f8 + 0x380;
            local_298 = (code *****)((ulonglong)local_298 & 0xffffffffffffff00);
            uStack_270 = uStack_270 & 0xffffffff00000000;
            FUN_1456bb102(&local_298,local_3f0);
            FUN_1447c3578(lVar24,&local_358,&local_298);
            if ((byte)local_338 == '\x03') {
              uVar63 = (float)local_358;
              bVar44 = 3;
            }
            else {
              FUN_1400b56fe(&local_308,&local_358,3);
              uVar63 = 0;
              if (local_2e8 != 0) {
                uVar63 = (float)local_308;
              }
              pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_2e8 * 0x120));
              if (pcVar6 != (code *)0x0) {
                pppcVar39 = (code ***)&local_308;
                if (0x18 < local_2f0) {
                  pppcVar39 = (code ***)local_308;
                }
                (*pcVar6)(pppcVar39);
              }
              if (0x18 < local_2f0) {
                FUN_1400020a8(local_308);
              }
              bVar44 = (byte)local_338;
            }
            *(undefined4 *)(param_1 + 0x780) = uVar63;
            pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar44 * 0x120));
            if (pcVar6 != (code *)0x0) {
              ppppppcVar29 = (code ******)&local_358;
              if (0x18 < (ushort)uStack_340) {
                ppppppcVar29 = (code ******)local_358;
              }
              (*pcVar6)(ppppppcVar29);
            }
            if (0x18 < (ushort)uStack_340) {
              FUN_1400020a8(local_358);
            }
            lVar24 = DAT_14c9a3da0;
            if ((longlong)(int)uStack_270 != 0) {
              lVar25 = (longlong)(int)uStack_270 + -1;
              lVar50 = lVar25 * 0x10;
              FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar50),
                            *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar50));
              if (*(longlong *)(lVar24 + lVar50) != 0) {
                FUN_1400020a8();
              }
              lVar24 = DAT_14c9a3da0;
              iVar22 = (int)lVar25;
              if (DAT_14c9a3dd4 != 0) {
                *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar22;
              }
              *(undefined4 *)(lVar24 + lVar50) = 0xffffffff;
              iVar49 = -1;
              if (0 < DAT_14c9a3dd4) {
                iVar49 = DAT_14c9a3dd0;
              }
              *(int *)(lVar24 + 4 + lVar50) = iVar49;
              DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
              puVar42 = &DAT_14c9a3db0;
              if (DAT_14c9a3dc0 != (undefined *)0x0) {
                puVar42 = DAT_14c9a3dc0;
              }
              iVar49 = iVar22 + 0x1f;
              if (-1 < iVar22) {
                iVar49 = iVar22;
              }
              bVar44 = (byte)lVar25 & 0x1f;
              DAT_14c9a3dd0 = iVar22;
              *(uint *)(puVar42 + (longlong)(iVar49 >> 5) * 4) =
                   *(uint *)(puVar42 + (longlong)(iVar49 >> 5) * 4) &
                   (-2 << bVar44 | 0xfffffffeU >> 0x20 - bVar44);
              uStack_270 = uStack_270 & 0xffffffff00000000;
            }
            if (((char)local_298 == '\x03') && (local_288 != (code ******)0x0)) {
              LOCK();
              piVar2 = (int *)((longlong)local_288 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (*(code *)(*local_288)[2])();
              }
            }
          }
        }
      }
      else {
        bVar44 = *(byte *)(param_1 + 0x73d);
        if (((bVar44 != 1) || (*(char *)(param_1 + 0x73c) != '\x01')) ||
           ((0.0 < *(float *)(param_1 + 0x744) &&
            (*(float *)(param_1 + 0x744) < local_3e0[0] - *(float *)(param_1 + 0x740)))))
        goto LAB_140707124;
        *(float *)(param_1 + 0x740) = local_3e0[0];
        *(undefined4 *)(param_1 + 0x744) = 0;
        *(undefined2 *)(param_1 + 0x73c) = 0x100;
      }
      if ((*(char *)(param_1 + 0x749) == '\x01') && (*(char *)(param_1 + 0x748) == '\x01')) {
        bVar51 = true;
        if (0.0 < *(float *)(param_1 + 0x750)) {
          bVar51 = local_3e0[0] - *(float *)(param_1 + 0x74c) <= *(float *)(param_1 + 0x750);
        }
      }
      else {
        bVar51 = false;
      }
      bVar44 = (bVar51 ^ 1U) & *(byte *)(param_1 + 0x754);
      pcVar1 = (char *)(param_1 + 0x724);
      if ((*(char *)(param_1 + 0x725) == '\x01') && (*pcVar1 == '\x01')) {
        bVar52 = true;
        if (0.0 < *(float *)(param_1 + 0x72c)) {
          bVar52 = local_3e0[0] - *(float *)(param_1 + 0x728) <= *(float *)(param_1 + 0x72c);
        }
      }
      else {
        bVar52 = false;
      }
      if ((bVar44 != 0) ||
         ((((bVar19 == 0 &&
            (((*(char *)(param_1 + 0x725) == '\0' || (*pcVar1 != '\x01')) ||
             ((0.0 < *(float *)(param_1 + 0x72c) &&
              (*(float *)(param_1 + 0x72c) < local_3e0[0] - *(float *)(param_1 + 0x728))))))) &&
           (((*(char *)(param_1 + 0x749) == '\0' || (*(char *)(param_1 + 0x748) != '\x01')) ||
            ((0.0 < *(float *)(param_1 + 0x750) &&
             (*(float *)(param_1 + 0x750) < local_3e0[0] - *(float *)(param_1 + 0x74c))))))) &&
          (((*(char *)(param_1 + 0x731) != '\x01' || (*(char *)(param_1 + 0x730) != '\x01')) ||
           ((0.0 < *(float *)(param_1 + 0x738) &&
            (*(float *)(param_1 + 0x738) < local_3e0[0] - *(float *)(param_1 + 0x734))))))))) {
        FUN_14573c97c(param_1,&local_3f8);
      }
      *(bool *)(param_1 + 0x754) = bVar51;
      if (((bVar52) || (*(char *)(param_1 + 0x725) != '\x01')) || (*pcVar1 != '\x01')) {
        bVar51 = false;
      }
      else {
        bVar51 = true;
        if (0.0 < *(float *)(param_1 + 0x72c)) {
          bVar51 = local_3e0[0] - *(float *)(param_1 + 0x728) <= *(float *)(param_1 + 0x72c);
        }
      }
      if ((*(int *)(param_1 + 0x700) != -1) &&
         ((bVar44 != 0 || (!(bool)(~bVar51 & *(float *)(param_1 + 0x708) != local_3e0[0]))))) {
        cVar17 = FUN_14573cbe8(pcVar1);
        if (cVar17 == '\0') {
          FUN_14573c97c(param_1,&local_3f8);
        }
        if (((*(char *)(param_1 + 0x725) == '\x01') && (*pcVar1 == '\x01')) &&
           ((*(float *)(param_1 + 0x72c) <= 0.0 ||
            (local_3e0[0] - *(float *)(param_1 + 0x728) <= *(float *)(param_1 + 0x72c))))) {
          if ((*(char *)(param_1 + 0x749) == '\x01') && (*(char *)(param_1 + 0x748) == '\x01')) {
            if (*(float *)(param_1 + 0x750) <= 0.0) goto LAB_140707254;
            bVar51 = local_3e0[0] - *(float *)(param_1 + 0x74c) <= *(float *)(param_1 + 0x750);
          }
          else {
            bVar51 = false;
          }
          if ((!bVar51) && (bVar19 == 0)) {
            *(float *)(param_1 + 0x740) = local_3e0[0];
            *(undefined4 *)(param_1 + 0x744) = 0;
            *(undefined2 *)(param_1 + 0x73c) = 0x101;
          }
        }
      }
LAB_140707254:
      if (*(char *)(param_1 + 0x757) == '\x03') {
LAB_140707261:
        *(undefined1 *)(param_1 + 0x755) = 2;
      }
      else {
        if ((((*(char *)(param_1 + 0x756) != '\0') ||
             (cVar17 = FUN_14070cece(param_1,&local_3f8), cVar17 == '\0')) ||
            (*(char *)(param_1 + 0x6f5) != '\x01')) || (*(char *)(param_1 + 0x6f4) != '\x01')) {
LAB_140707c86:
          lVar24 = local_3f8 + 0x460;
          local_298 = (code *****)((ulonglong)local_298 & 0xffffffffffffff00);
          uStack_270 = uStack_270 & 0xffffffff00000000;
          FUN_1456bb102(&local_298,local_3f0);
          FUN_1447c3578(lVar24,&local_308,&local_298);
          cVar17 = FUN_140168b7a(&local_308,1);
          pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_2e8 * 0x120));
          if (pcVar6 != (code *)0x0) {
            pppcVar39 = (code ***)&local_308;
            if (0x18 < local_2f0) {
              pppcVar39 = (code ***)local_308;
            }
            (*pcVar6)(pppcVar39);
          }
          if (0x18 < local_2f0) {
            FUN_1400020a8(local_308);
          }
          lVar24 = DAT_14c9a3da0;
          if ((longlong)(int)uStack_270 != 0) {
            lVar25 = (longlong)(int)uStack_270 + -1;
            lVar50 = lVar25 * 0x10;
            FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar50),
                          *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar50));
            if (*(longlong *)(lVar24 + lVar50) != 0) {
              FUN_1400020a8();
            }
            lVar24 = DAT_14c9a3da0;
            iVar22 = (int)lVar25;
            if (DAT_14c9a3dd4 != 0) {
              *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar22;
            }
            *(undefined4 *)(lVar24 + lVar50) = 0xffffffff;
            iVar49 = -1;
            if (0 < DAT_14c9a3dd4) {
              iVar49 = DAT_14c9a3dd0;
            }
            *(int *)(lVar24 + 4 + lVar50) = iVar49;
            DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
            puVar42 = &DAT_14c9a3db0;
            if (DAT_14c9a3dc0 != (undefined *)0x0) {
              puVar42 = DAT_14c9a3dc0;
            }
            iVar49 = iVar22 + 0x1f;
            if (-1 < iVar22) {
              iVar49 = iVar22;
            }
            bVar44 = (byte)lVar25 & 0x1f;
            DAT_14c9a3dd0 = iVar22;
            *(uint *)(puVar42 + (longlong)(iVar49 >> 5) * 4) =
                 *(uint *)(puVar42 + (longlong)(iVar49 >> 5) * 4) &
                 (-2 << bVar44 | 0xfffffffeU >> 0x20 - bVar44);
            uStack_270 = uStack_270 & 0xffffffff00000000;
          }
          if (((char)local_298 == '\x03') && (local_288 != (code ******)0x0)) {
            LOCK();
            piVar2 = (int *)((longlong)local_288 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (*(code *)(*local_288)[2])();
            }
          }
          if ((((cVar17 != '\0') && (*(char *)(param_1 + 0x725) == '\x01')) && (*pcVar1 == '\x01'))
             && ((*(float *)(param_1 + 0x72c) <= 0.0 ||
                 (local_3e0[0] - *(float *)(param_1 + 0x728) <= *(float *)(param_1 + 0x72c))))) {
            bVar51 = true;
            if ((*(char *)(param_1 + 0x749) == '\x01') && (*(char *)(param_1 + 0x748) == '\x01')) {
              if (*(float *)(param_1 + 0x750) <= 0.0) goto LAB_140707261;
              bVar51 = *(float *)(param_1 + 0x750) < local_3e0[0] - *(float *)(param_1 + 0x74c);
            }
            if ((bool)(bVar34 & bVar51)) {
              *(undefined1 *)(param_1 + 0x755) = 0;
              if (cVar16 == '\0') goto LAB_1407072a3;
              lVar24 = local_3f8 + 0x2a0;
              local_298 = (code *****)((ulonglong)local_298 & 0xffffffffffffff00);
              uStack_270 = uStack_270 & 0xffffffff00000000;
              FUN_1456bb102(&local_298,local_3f0);
              FUN_1447c3578(lVar24,&local_358,&local_298);
              if ((byte)local_338 == '\x03') {
                uVar35 = 3;
                fVar64 = (float)local_358;
              }
              else {
                FUN_1400b56fe(&local_308,&local_358,3);
                fVar64 = 0.0;
                if (local_2e8 != 0) {
                  fVar64 = (float)local_308;
                }
                pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_2e8 * 0x120))
                ;
                if (pcVar6 != (code *)0x0) {
                  pppcVar39 = (code ***)&local_308;
                  if (0x18 < local_2f0) {
                    pppcVar39 = (code ***)local_308;
                  }
                  (*pcVar6)(pppcVar39);
                }
                if (0x18 < local_2f0) {
                  FUN_1400020a8(local_308);
                }
                uVar35 = (uint)(byte)local_338;
              }
              pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar35 * 0x120));
              if (pcVar6 != (code *)0x0) {
                ppppppcVar29 = (code ******)&local_358;
                if (0x18 < (ushort)uStack_340) {
                  ppppppcVar29 = (code ******)local_358;
                }
                (*pcVar6)(ppppppcVar29);
              }
              if (0x18 < (ushort)uStack_340) {
                FUN_1400020a8(local_358);
              }
              lVar24 = DAT_14c9a3da0;
              if ((longlong)(int)uStack_270 != 0) {
                lVar25 = (longlong)(int)uStack_270 + -1;
                lVar50 = lVar25 * 0x10;
                FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar50),
                              *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar50));
                if (*(longlong *)(lVar24 + lVar50) != 0) {
                  FUN_1400020a8();
                }
                lVar24 = DAT_14c9a3da0;
                iVar22 = (int)lVar25;
                if (DAT_14c9a3dd4 != 0) {
                  *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar22;
                }
                *(undefined4 *)(lVar24 + lVar50) = 0xffffffff;
                iVar49 = -1;
                if (0 < DAT_14c9a3dd4) {
                  iVar49 = DAT_14c9a3dd0;
                }
                *(int *)(lVar24 + 4 + lVar50) = iVar49;
                DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
                puVar42 = &DAT_14c9a3db0;
                if (DAT_14c9a3dc0 != (undefined *)0x0) {
                  puVar42 = DAT_14c9a3dc0;
                }
                iVar49 = iVar22 + 0x1f;
                if (-1 < iVar22) {
                  iVar49 = iVar22;
                }
                bVar34 = (byte)lVar25 & 0x1f;
                DAT_14c9a3dd0 = iVar22;
                *(uint *)(puVar42 + (longlong)(iVar49 >> 5) * 4) =
                     *(uint *)(puVar42 + (longlong)(iVar49 >> 5) * 4) &
                     (-2 << bVar34 | 0xfffffffeU >> 0x20 - bVar34);
                uStack_270 = uStack_270 & 0xffffffff00000000;
              }
              if (((char)local_298 == '\x03') && (local_288 != (code ******)0x0)) {
                LOCK();
                piVar2 = (int *)((longlong)local_288 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (*(code *)(*local_288)[2])();
                }
              }
              fVar65 = 0.0;
              if ((*(char *)(param_1 + 0x7a9) == '\x01') && (*(char *)(param_1 + 0x7a8) == '\x01'))
              {
                fVar66 = *(float *)(param_1 + 0x7b0);
                fVar60 = local_3e0[0] - *(float *)(param_1 + 0x7ac);
                if (fVar66 <= 0.0 || fVar60 <= fVar66) {
                  fVar65 = fVar66 - fVar60;
                }
              }
              if (fVar65 < fVar64) {
                *(float *)(param_1 + 0x7ac) = local_3e0[0];
                *(undefined2 *)(param_1 + 0x7a8) = 0x101;
                *(float *)(param_1 + 0x7b0) = fVar64;
              }
              goto LAB_140707268;
            }
          }
          goto LAB_140707261;
        }
        fVar64 = local_3e0[0] - *(float *)(param_1 + 0x6f8);
        if (((0.0 < *(float *)(param_1 + 0x6fc)) && (*(float *)(param_1 + 0x6fc) < fVar64)) ||
           (fVar64 < *(float *)(param_1 + 0x714))) goto LAB_140707c86;
        if (*(char *)(param_1 + 0x755) != '\x01') {
          if (*(char *)(param_1 + 0x710) == '\x01') {
            *(undefined1 *)(param_1 + 0x710) = 0;
          }
          *(undefined1 *)(param_1 + 0x7da) = 0;
        }
        *(undefined1 *)(param_1 + 0x755) = 1;
        *(byte *)(param_1 + 0x759) = *(byte *)(param_1 + 0x758) ^ 1;
      }
LAB_140707268:
      if (((cVar16 == '\x01') && (*(char *)(param_1 + 0x755) != '\x01')) &&
         (local_3e0 != (float *)(param_1 + 0x70c))) {
        *(float *)(param_1 + 0x70c) = local_3e0[0];
        *(undefined1 *)(param_1 + 0x710) = 1;
      }
    }
  }
LAB_1407072a3:
  plVar41 = *(longlong **)(param_1 + 0x38);
  if (((((plVar41 != (longlong *)0x0) && (*(int *)(param_1 + 0x34) != 0)) &&
       ((uVar35 = *(uint *)(param_1 + 0x30), -1 < (int)uVar35 &&
        (((int)uVar35 < DAT_14c9647dc &&
         (lVar24 = (ulonglong)((uVar35 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar35 >> 0x10) * 8), lVar24 != 0))))))
      && (*(int *)(lVar24 + 0x10) == *(int *)(param_1 + 0x34))) &&
     ((*(uint *)(lVar24 + 8) & 0x10200000) == 0)) {
    if (*(code **)(*plVar41 + 0x10) == (code *)&LAB_144944cea) {
      ppppppcVar29 = (code ******)(plVar41 + 0xe1);
    }
    else {
      ppppppcVar29 = (code ******)(**(code **)(*plVar41 + 0x10))(plVar41);
    }
    pdVar23 = local_3f0;
    iVar22 = *(int *)(param_1 + 0x700);
    if (((longlong)iVar22 < 0) || (*(int *)(param_1 + 0x6e0) <= iVar22)) {
LAB_14070749a:
      puVar48 = (uint *)0x0;
      bVar51 = false;
LAB_1407074a0:
      if (*(char *)(param_1 + 0x78c) != '\x01') goto LAB_1407072b0;
      uVar21 = 0;
      lVar24 = 0;
    }
    else {
      lVar24 = param_1 + 0xd8;
      if (*(longlong *)(param_1 + 0x6d8) != 0) {
        lVar24 = *(longlong *)(param_1 + 0x6d8);
      }
      puVar48 = (uint *)((longlong)iVar22 * 0xc0 + lVar24);
      if (puVar48 == (uint *)0x0) goto LAB_14070749a;
      bVar51 = true;
      if ((((puVar48[1] == 0) || (uVar35 = *puVar48, (int)uVar35 < 0)) ||
          (DAT_14c9647dc <= (int)uVar35)) ||
         (((plVar41 = (longlong *)
                      ((ulonglong)((uVar35 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar35 >> 0x10) * 8)),
           plVar41 == (longlong *)0x0 || (*(uint *)(plVar41 + 2) != puVar48[1])) ||
          ((*(uint *)(plVar41 + 1) & 0x10200000) != 0)))) goto LAB_1407074a0;
      lVar24 = *plVar41;
      bVar51 = true;
      uVar21 = 1;
      if (lVar24 == 0) goto LAB_1407074a0;
    }
    *(undefined1 *)(param_1 + 0x78c) = uVar21;
    local_3c8._0_4_ = CONCAT31(local_3c8._1_3_,2);
    local_3c8._4_4_ = 0;
    uStack_3c0 = 0;
    local_2f0 = 8;
    if (lVar24 == 0) {
      local_308._0_4_ = 0.0;
      iVar22 = 0;
      uVar35 = (uint)(float)local_308;
    }
    else {
      uVar35 = *(uint *)(lVar24 + 0xc);
      local_308 = (code *)(ulonglong)uVar35;
      if ((int)uVar35 < DAT_14c9647dc) {
        lVar25 = (ulonglong)((uVar35 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar35 >> 0x10) * 8);
      }
      else {
        lVar25 = 0;
      }
      iVar22 = *(int *)(lVar25 + 0x10);
      if (*(int *)(lVar25 + 0x10) == 0) {
        LOCK();
        iVar22 = DAT_14c964868 + 1;
        UNLOCK();
        iVar49 = DAT_14c964868 + 1;
        bVar52 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar22;
        if (bVar52) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar49);
        }
        LOCK();
        iVar22 = *(int *)(lVar25 + 0x10);
        bVar52 = iVar22 == 0;
        if (bVar52) {
          *(int *)(lVar25 + 0x10) = iVar49;
          iVar22 = 0;
        }
        UNLOCK();
        uVar35 = (uint)(float)local_308;
        if (bVar52) {
          iVar22 = iVar49;
        }
      }
    }
    local_308._0_4_ = (float)uVar35;
    local_308 = (code *)CONCAT44(iVar22,(float)local_308);
    local_2e8 = 7;
    FUN_14070d2c0(&local_298,&local_308,&local_3c8,pdVar23);
    pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_2e8 * 0x120));
    if (pcVar6 != (code *)0x0) {
      pppcVar39 = (code ***)&local_308;
      if (0x18 < local_2f0) {
        pppcVar39 = (code ***)local_308;
      }
      (*pcVar6)(pppcVar39);
    }
    if (0x18 < local_2f0) {
      FUN_1400020a8(local_308);
    }
    cVar16 = *(char *)(param_1 + 0x755);
    if (cVar16 == '\x01') {
      if (*(char *)(param_1 + 0x758) == '\x01') {
        local_390 = (code *****)&local_398;
        local_398 = (code *****)DAT_14cb72628;
        local_388 = (code ****)&local_3d8;
        local_3d8 = 0;
        uStack_3d4 = 0;
        local_380 = (code *****)&LAB_143cbcae0;
        local_378 = (code *****)&local_390;
        if (ppppppcVar29[8] != (code *****)0x0) {
          pppppcStack_350 = (code *****)&local_2c0;
          local_2b8 = (code *****)&local_380;
          local_3b0 = (code ****)&local_358;
          local_358 = FUN_143cbca2e;
          pppppcStack_300 = &local_3b0;
          local_308 = FUN_1487df56e;
          local_2c0 = (code *****)ppppppcVar29;
          FUN_1447c5ba2();
          if (CONCAT44(uStack_3d4,local_3d8) != 0) {
            FUN_1406ebff6(CONCAT44(uStack_3d4,local_3d8),3,&local_298);
          }
        }
        pdVar23 = local_3f0;
        local_3d8 = local_3d8 & 0xffffff00;
        uStack_3d4 = 0;
        uStack_3d0 = 0;
        uStack_340 = CONCAT62(uStack_340._2_6_,8);
        if (lVar24 == 0) {
          local_358._0_4_ = 0.0;
          iVar22 = 0;
          uVar35 = (uint)(float)local_358;
        }
        else {
          uVar35 = *(uint *)(lVar24 + 0xc);
          local_358 = (code *)(ulonglong)uVar35;
          if ((int)uVar35 < DAT_14c9647dc) {
            lVar24 = (ulonglong)((uVar35 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar35 >> 0x10) * 8);
          }
          else {
            lVar24 = 0;
          }
          iVar22 = *(int *)(lVar24 + 0x10);
          if (*(int *)(lVar24 + 0x10) == 0) {
            LOCK();
            iVar22 = DAT_14c964868 + 1;
            UNLOCK();
            iVar49 = DAT_14c964868 + 1;
            bVar52 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar22;
            if (bVar52) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,iVar49);
            }
            LOCK();
            iVar22 = *(int *)(lVar24 + 0x10);
            bVar52 = iVar22 == 0;
            if (bVar52) {
              *(int *)(lVar24 + 0x10) = iVar49;
              iVar22 = 0;
            }
            UNLOCK();
            uVar35 = (uint)(float)local_358;
            if (bVar52) {
              iVar22 = iVar49;
            }
          }
        }
        local_358._0_4_ = (float)uVar35;
        local_358 = (code *)CONCAT44(iVar22,(float)local_358);
        local_338 = CONCAT71(local_338._1_7_,7);
        FUN_14070d2c0(&local_308,&local_358,&local_3d8,pdVar23);
        pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)(byte)local_338 * 0x120));
        if (pcVar6 != (code *)0x0) {
          ppppppcVar28 = (code ******)&local_358;
          if (0x18 < (ushort)uStack_340) {
            ppppppcVar28 = (code ******)local_358;
          }
          (*pcVar6)(ppppppcVar28);
        }
        if (0x18 < (ushort)uStack_340) {
          FUN_1400020a8(local_358);
        }
        local_3b8 = (code ***)DAT_14cb72620;
        local_3a0 = 0;
        local_390 = (code *****)&LAB_143cbcae0;
        if (ppppppcVar29[8] != (code *****)0x0) {
          local_2b8 = (code *****)&local_380;
          local_398 = (code *****)&local_2c0;
          local_2c0 = (code *****)FUN_143cbca2e;
          pppppcStack_350 = (code *****)&local_398;
          local_358 = FUN_1487df56e;
          local_3b0 = &local_3b8;
          local_3a8 = &local_3a0;
          local_388 = (code ****)&local_3b0;
          local_380 = (code *****)ppppppcVar29;
          local_378 = (code *****)&local_390;
          FUN_1447c5ba2();
          if (local_3a0 != 0) {
            FUN_1406ebff6(local_3a0,3,&local_308);
          }
        }
        local_3b8 = (code ***)DAT_14cb72618;
        local_3a0 = 0;
        local_390 = (code *****)&LAB_143cbcae0;
        local_3b0 = &local_3b8;
        local_3a8 = &local_3a0;
        local_388 = (code ****)&local_3b0;
        if (ppppppcVar29[8] != (code *****)0x0) {
          local_2b8 = (code *****)&local_380;
          local_398 = (code *****)&local_2c0;
          local_2c0 = (code *****)FUN_143cbca2e;
          pppppcStack_350 = (code *****)&local_398;
          local_358 = FUN_1487df56e;
          local_380 = (code *****)ppppppcVar29;
          local_378 = (code *****)&local_390;
          FUN_1447c5ba2();
          lVar24 = local_3a0;
          if (local_3a0 != 0) {
            if (((!bVar51) || (*(char *)((longlong)puVar48 + 0xa9) != '\x01')) ||
               (((char)puVar48[0x2a] != '\x01' ||
                ((0.0 < (float)puVar48[0x2c] &&
                 ((float)puVar48[0x2c] < local_3e0[0] - (float)puVar48[0x2b])))))) {
              local_318 = CONCAT71(local_318._1_7_,0xff);
              FUN_140219b74(&local_358,&local_308);
            }
            else {
              local_328 = 0;
              uStack_320 = 0;
              local_338 = 0;
              uStack_330 = 0;
              local_348 = (longlong *)0x0;
              uStack_340 = 0;
              local_358 = (code *)0x0;
              pppppcStack_350 = (code *****)0x0;
              local_318 = 0xff;
            }
            FUN_1406ebff6(lVar24,3,&local_358);
          }
        }
        if (((*(longlong *)(param_1 + 0x90) == 0) ||
            (plVar41 = *(longlong **)(param_1 + 0x98), plVar41 == (longlong *)0x0)) ||
           ((int)plVar41[1] < 1)) {
          FUN_14070cbf4(&local_358,local_3f0);
          pppppcVar37 = pppppcStack_350;
          *(code **)(param_1 + 0x90) = local_358;
          ppppppcVar29 = *(code *******)(param_1 + 0x98);
          if (ppppppcVar29 != (code ******)pppppcStack_350) {
            if ((code ******)pppppcStack_350 != (code ******)0x0) {
              LOCK();
              *(int *)((longlong)pppppcStack_350 + 0xc) =
                   *(int *)((longlong)pppppcStack_350 + 0xc) + 1;
              UNLOCK();
              ppppppcVar29 = *(code *******)(param_1 + 0x98);
            }
            if (ppppppcVar29 != (code ******)0x0) {
              LOCK();
              piVar2 = (int *)((longlong)ppppppcVar29 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (*(code *)(*ppppppcVar29)[2])();
              }
            }
            *(code ******)(param_1 + 0x98) = pppppcVar37;
          }
          pppppcVar37 = pppppcStack_350;
          if ((code ******)pppppcStack_350 != (code ******)0x0) {
            LOCK();
            ppppppcVar29 = (code ******)(pppppcStack_350 + 1);
            *(int *)ppppppcVar29 = *(int *)ppppppcVar29 + -1;
            UNLOCK();
            if (*(int *)ppppppcVar29 == 0) {
              (*(code *)**pppppcStack_350)(pppppcStack_350);
              LOCK();
              piVar2 = (int *)((longlong)pppppcVar37 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (*(code *)(*pppppcVar37)[2])(pppppcVar37);
              }
            }
          }
          plVar41 = *(longlong **)(param_1 + 0x98);
          if (plVar41 == (longlong *)0x0) goto LAB_1407072b0;
        }
        iVar22 = (int)plVar41[1];
        do {
          if (iVar22 == 0) goto LAB_1407072b0;
          LOCK();
          iVar49 = (int)plVar41[1];
          bVar51 = iVar22 == iVar49;
          if (bVar51) {
            *(int *)(plVar41 + 1) = iVar22 + 1;
            iVar49 = iVar22;
          }
          iVar22 = iVar49;
          UNLOCK();
        } while (!bVar51);
        lVar24 = *(longlong *)(param_1 + 0x90);
        if (((lVar24 != 0) && (*(int *)(lVar24 + 0x14) != 0)) &&
           ((((uVar35 = *(uint *)(lVar24 + 0x10), -1 < (int)uVar35 &&
              (((int)uVar35 < DAT_14c9647dc &&
               (plVar32 = (longlong *)
                          ((ulonglong)((uVar35 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar35 >> 0x10) * 8)),
               plVar32 != (longlong *)0x0)))) && ((int)plVar32[2] == *(int *)(lVar24 + 0x14))) &&
            (((*(uint *)(plVar32 + 1) & 0x10200000) == 0 && (lVar24 = *plVar32, lVar24 != 0)))))) {
          lVar25 = local_3f8 + 0xa8;
          local_358 = (code *)((ulonglong)local_358 & 0xffffffffffffff00);
          uStack_330 = uStack_330 & 0xffffffff00000000;
          FUN_1456bb102(&local_358,local_3f0);
          FUN_1447c3578(lVar25,&local_380,&local_358);
          if (local_360 == 3) {
            uVar35 = 3;
          }
          else {
            FUN_1400b56fe(&local_2c0,&local_380,3);
            pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_2a0 * 0x120));
            if (pcVar6 != (code *)0x0) {
              ppppppcVar29 = &local_2c0;
              if (0x18 < local_2a8) {
                ppppppcVar29 = (code ******)local_2c0;
              }
              (*pcVar6)(ppppppcVar29);
            }
            if (0x18 < local_2a8) {
              FUN_1400020a8(local_2c0);
            }
            uVar35 = (uint)local_360;
          }
          pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar35 * 0x120));
          if (pcVar6 != (code *)0x0) {
            ppppppcVar29 = &local_380;
            if (0x18 < local_368) {
              ppppppcVar29 = (code ******)local_380;
            }
            (*pcVar6)(ppppppcVar29);
          }
          if (0x18 < local_368) {
            FUN_1400020a8(local_380);
          }
          lVar25 = DAT_14c9a3da0;
          if ((longlong)(int)uStack_330 != 0) {
            lVar30 = (longlong)(int)uStack_330 + -1;
            lVar50 = lVar30 * 0x10;
            FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar50),
                          *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar50));
            if (*(longlong *)(lVar25 + lVar50) != 0) {
              FUN_1400020a8();
            }
            lVar25 = DAT_14c9a3da0;
            iVar22 = (int)lVar30;
            if (DAT_14c9a3dd4 != 0) {
              *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar22;
            }
            *(undefined4 *)(lVar25 + lVar50) = 0xffffffff;
            iVar49 = -1;
            if (0 < DAT_14c9a3dd4) {
              iVar49 = DAT_14c9a3dd0;
            }
            *(int *)(lVar25 + 4 + lVar50) = iVar49;
            DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
            puVar42 = &DAT_14c9a3db0;
            if (DAT_14c9a3dc0 != (undefined *)0x0) {
              puVar42 = DAT_14c9a3dc0;
            }
            iVar49 = iVar22 + 0x1f;
            if (-1 < iVar22) {
              iVar49 = iVar22;
            }
            bVar34 = (byte)lVar30 & 0x1f;
            DAT_14c9a3dd0 = iVar22;
            *(uint *)(puVar42 + (longlong)(iVar49 >> 5) * 4) =
                 *(uint *)(puVar42 + (longlong)(iVar49 >> 5) * 4) &
                 (-2 << bVar34 | 0xfffffffeU >> 0x20 - bVar34);
            uStack_330 = uStack_330 & 0xffffffff00000000;
          }
          if (((char)local_358 == '\x03') && (local_348 != (longlong *)0x0)) {
            LOCK();
            piVar2 = (int *)((longlong)local_348 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*local_348 + 0x10))();
            }
          }
          FUN_1406ec1d8(lVar24,&DAT_14cb7e1a0);
        }
        LOCK();
        plVar32 = plVar41 + 1;
        *(int *)plVar32 = (int)*plVar32 + -1;
        UNLOCK();
        if ((int)*plVar32 == 0) {
          (**(code **)*plVar41)(plVar41);
          LOCK();
          piVar2 = (int *)((longlong)plVar41 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar41 + 0x10))(plVar41);
          }
        }
      }
    }
    else if (cVar16 == '\x02') {
      local_358 = (code *)&local_2c0;
      local_2c0 = (code *****)CONCAT71(local_2c0._1_7_,3);
      pppppcStack_300 = (code *****)&local_358;
      local_308 = (code *)&LAB_143cbcb7a;
      FUN_1400b7536(ppppppcVar29);
    }
    else if ((((bVar51 && cVar16 == '\0') && (*(char *)((longlong)puVar48 + 0xb5) == '\x01')) &&
             ((char)puVar48[0x2d] == '\x01')) &&
            (((float)puVar48[0x2f] <= 0.0 ||
             (local_3e0[0] - (float)puVar48[0x2e] <= (float)puVar48[0x2f])))) {
      local_398 = (code *****)DAT_14cb72628;
      local_390 = (code *****)&local_398;
      local_388 = (code ****)&local_3d8;
      local_3d8 = 0;
      uStack_3d4 = 0;
      local_378 = (code *****)&local_390;
      local_380 = (code *****)&LAB_143cbcae0;
      if (ppppppcVar29[8] != (code *****)0x0) {
        pppppcStack_350 = (code *****)&local_2c0;
        local_2b8 = (code *****)&local_380;
        local_3b0 = (code ****)&local_358;
        local_358 = FUN_143cbca2e;
        pppppcStack_300 = &local_3b0;
        local_308 = FUN_1487df56e;
        local_2c0 = (code *****)ppppppcVar29;
        FUN_1447c5ba2();
        if (CONCAT44(uStack_3d4,local_3d8) != 0) {
          FUN_1406ebff6(CONCAT44(uStack_3d4,local_3d8),3,&local_298);
        }
      }
    }
  }
LAB_1407072b0:
  if (*(char *)(param_1 + 0x7c0) == '\x05') {
    lVar24 = param_1 + 0xd8;
    iVar22 = *(int *)(param_1 + 0x700);
    if (((longlong)iVar22 < 0) || (*(int *)(param_1 + 0x6e0) <= iVar22)) {
LAB_1407072f3:
      if (local_3e0[0] - *(float *)(param_1 + 0x708) < 1.0) {
        iVar22 = *(int *)(param_1 + 0x704);
        if ((-1 < (longlong)iVar22) && (iVar22 < *(int *)(param_1 + 0x6e0))) {
          lVar25 = *(longlong *)(param_1 + 0x6d8);
          if (*(longlong *)(param_1 + 0x6d8) == 0) {
            lVar25 = lVar24;
          }
          puVar48 = (uint *)((longlong)iVar22 * 0xc0 + lVar25);
          if (puVar48 != (uint *)0x0) goto LAB_14070734c;
        }
      }
    }
    else {
      lVar25 = *(longlong *)(param_1 + 0x6d8);
      if (*(longlong *)(param_1 + 0x6d8) == 0) {
        lVar25 = lVar24;
      }
      puVar48 = (uint *)((longlong)iVar22 * 0xc0 + lVar25);
      if (puVar48 == (uint *)0x0) goto LAB_1407072f3;
LAB_14070734c:
      if ((((*(char *)(param_1 + 0x758) != '\0') || (*(char *)(param_1 + 0x755) == '\0')) &&
          (lVar25 = param_1, cVar16 = FUN_14070d0f0(param_1,&local_3f8), cVar16 == '\0')) &&
         ((ulonglong)*(byte *)(param_1 + 0xa0) < 4)) {
        uVar40 = (undefined7)((ulonglong)lVar25 >> 8);
        if (*(char *)(param_1 + 0x755) == '\0') {
          local_478 = (double)CONCAT44(local_478._4_4_,(int)CONCAT71(uVar40,2));
          if (((*(char *)(param_1 + 0x7a9) != '\x01') || (*(char *)(param_1 + 0x7a8) != '\x01')) ||
             ((0.0 < *(float *)(param_1 + 0x7b0) &&
              (*(float *)(param_1 + 0x7b0) < local_3e0[0] - *(float *)(param_1 + 0x7ac)))))
          goto LAB_14070a3f0;
        }
        else {
          if (((((*(char *)(param_1 + 0x719) != '\x01') || (*(char *)(param_1 + 0x718) != '\x01'))
               || ((0.0 < *(float *)(param_1 + 0x720) &&
                   (*(float *)(param_1 + 0x720) < local_3e0[0] - *(float *)(param_1 + 0x71c))))) &&
              ((*(char *)(param_1 + 0x710) == '\x01' &&
               (local_3e0[0] - *(float *)(param_1 + 0x70c) < 1.0)))) &&
             (((*(char *)(param_1 + 0x7b5) != '\x01' || (*(char *)(param_1 + 0x7b4) != '\x01')) ||
              ((0.0 < *(float *)(param_1 + 0x7bc) &&
               (*(float *)(param_1 + 0x7bc) < local_3e0[0] - *(float *)(param_1 + 0x7b8))))))) {
            lVar25 = CONCAT71(uVar40,3);
            local_478 = (double)CONCAT44(local_478._4_4_,(int)lVar25);
            if ((*(char *)(param_1 + 0xa5) != '\x01') ||
               ((*(char *)(param_1 + 0xa4) != '\x01' ||
                ((0.0 < *(float *)(param_1 + 0xac) &&
                 (*(float *)(param_1 + 0xac) < local_3e0[0] - *(float *)(param_1 + 0xa8)))))))
            goto LAB_14070a3f0;
          }
          iVar22 = *(int *)(param_1 + 0x700);
          uVar40 = (undefined7)((ulonglong)lVar25 >> 8);
          bVar51 = true;
          if ((-1 < (longlong)iVar22) && (iVar22 < *(int *)(param_1 + 0x6e0))) {
            lVar25 = *(longlong *)(param_1 + 0x6d8);
            if (*(longlong *)(param_1 + 0x6d8) == 0) {
              lVar25 = lVar24;
            }
            bVar51 = (longlong)iVar22 * 0xc0 + lVar25 == 0;
            uVar40 = (undefined7)((ulonglong)lVar25 >> 8);
          }
          if (((*(char *)(param_1 + 0x7dd) != '\x01') || (*(char *)(param_1 + 0x7dc) != '\x01')) ||
             ((0.0 < *(float *)(param_1 + 0x7e4) &&
              (*(float *)(param_1 + 0x7e4) < local_3e0[0] - *(float *)(param_1 + 0x7e0))))) {
            if (!bVar51) {
              if ((*(char *)(param_1 + 0x7cd) == '\x01') && (*(char *)(param_1 + 0x7cc) == '\x01'))
              {
                fVar64 = local_3e0[0] - *(float *)(param_1 + 2000);
                if (((*(float *)(param_1 + 0x7d4) <= 0.0) || (fVar64 <= *(float *)(param_1 + 0x7d4))
                    ) && (*(float *)(param_1 + 0x784) <= fVar64)) {
                  if (((*(char *)(param_1 + 0x7b5) != '\x01') ||
                      (*(char *)(param_1 + 0x7b4) != '\x01')) ||
                     ((0.0 < *(float *)(param_1 + 0x7bc) &&
                      (*(float *)(param_1 + 0x7bc) < local_3e0[0] - *(float *)(param_1 + 0x7b8)))))
                  {
                    lVar24 = local_3f8 + 0x310;
                    local_298 = (code *****)((ulonglong)local_298 & 0xffffffffffffff00);
                    uStack_270 = uStack_270 & 0xffffffff00000000;
                    FUN_1456bb102(&local_298,local_3f0);
                    FUN_1447c3578(lVar24,&local_358,&local_298);
                    if ((byte)local_338 == '\x03') {
                      uVar63 = (float)local_358;
                      bVar34 = 3;
                    }
                    else {
                      FUN_1400b56fe(&local_308,&local_358,3);
                      uVar63 = 0;
                      if (local_2e8 != 0) {
                        uVar63 = (float)local_308;
                      }
                      pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 +
                                         (ulonglong)((uint)local_2e8 * 0x120));
                      if (pcVar6 != (code *)0x0) {
                        pppcVar39 = (code ***)&local_308;
                        if (0x18 < local_2f0) {
                          pppcVar39 = (code ***)local_308;
                        }
                        (*pcVar6)(pppcVar39);
                      }
                      if (0x18 < local_2f0) {
                        FUN_1400020a8(local_308);
                      }
                      bVar34 = (byte)local_338;
                    }
                    *(undefined4 *)(param_1 + 0x784) = uVar63;
                    pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar34 * 0x120)
                                       );
                    if (pcVar6 != (code *)0x0) {
                      ppppppcVar29 = (code ******)&local_358;
                      if (0x18 < (ushort)uStack_340) {
                        ppppppcVar29 = (code ******)local_358;
                      }
                      (*pcVar6)(ppppppcVar29);
                    }
                    if (0x18 < (ushort)uStack_340) {
                      FUN_1400020a8(local_358);
                    }
                    lVar24 = DAT_14c9a3da0;
                    if ((longlong)(int)uStack_270 != 0) {
                      lVar25 = (longlong)(int)uStack_270 + -1;
                      lVar50 = lVar25 * 0x10;
                      FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar50),
                                    *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar50));
                      if (*(longlong *)(lVar24 + lVar50) != 0) {
                        FUN_1400020a8();
                      }
                      lVar24 = DAT_14c9a3da0;
                      iVar22 = (int)lVar25;
                      if (DAT_14c9a3dd4 != 0) {
                        *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar22;
                      }
                      *(undefined4 *)(lVar24 + lVar50) = 0xffffffff;
                      iVar49 = -1;
                      if (0 < DAT_14c9a3dd4) {
                        iVar49 = DAT_14c9a3dd0;
                      }
                      *(int *)(lVar24 + 4 + lVar50) = iVar49;
                      DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
                      puVar42 = &DAT_14c9a3db0;
                      if (DAT_14c9a3dc0 != (undefined *)0x0) {
                        puVar42 = DAT_14c9a3dc0;
                      }
                      iVar49 = iVar22 + 0x1f;
                      if (-1 < iVar22) {
                        iVar49 = iVar22;
                      }
                      bVar34 = (byte)lVar25 & 0x1f;
                      DAT_14c9a3dd0 = iVar22;
                      *(uint *)(puVar42 + (longlong)(iVar49 >> 5) * 4) =
                           *(uint *)(puVar42 + (longlong)(iVar49 >> 5) * 4) &
                           (-2 << bVar34 | 0xfffffffeU >> 0x20 - bVar34);
                      uStack_270 = uStack_270 & 0xffffffff00000000;
                    }
                    if (((char)local_298 == '\x03') && (local_288 != (code ******)0x0)) {
                      LOCK();
                      piVar2 = (int *)((longlong)local_288 + 0xc);
                      *piVar2 = *piVar2 + -1;
                      UNLOCK();
                      if (*piVar2 == 0) {
                        (*(code *)(*local_288)[2])();
                      }
                    }
                    lVar24 = local_3f8 + 0x348;
                    local_298 = (code *****)((ulonglong)local_298 & 0xffffffffffffff00);
                    uStack_270 = uStack_270 & 0xffffffff00000000;
                    FUN_1456bb102(&local_298,local_3f0);
                    FUN_1447c3578(lVar24,&local_358,&local_298);
                    if ((byte)local_338 == '\x03') {
                      uVar35 = 3;
                      uVar63 = (float)local_358;
                    }
                    else {
                      FUN_1400b56fe(&local_308,&local_358,3);
                      uVar63 = 0;
                      if (local_2e8 != 0) {
                        uVar63 = (float)local_308;
                      }
                      pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 +
                                         (ulonglong)((uint)local_2e8 * 0x120));
                      if (pcVar6 != (code *)0x0) {
                        pppcVar39 = (code ***)&local_308;
                        if (0x18 < local_2f0) {
                          pppcVar39 = (code ***)local_308;
                        }
                        (*pcVar6)(pppcVar39);
                      }
                      if (0x18 < local_2f0) {
                        FUN_1400020a8(local_308);
                      }
                      uVar35 = (uint)(byte)local_338;
                    }
                    pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar35 * 0x120));
                    if (pcVar6 != (code *)0x0) {
                      ppppppcVar29 = (code ******)&local_358;
                      if (0x18 < (ushort)uStack_340) {
                        ppppppcVar29 = (code ******)local_358;
                      }
                      (*pcVar6)(ppppppcVar29);
                    }
                    if (0x18 < (ushort)uStack_340) {
                      FUN_1400020a8(local_358);
                    }
                    lVar24 = DAT_14c9a3da0;
                    if ((longlong)(int)uStack_270 != 0) {
                      lVar25 = (longlong)(int)uStack_270 + -1;
                      lVar50 = lVar25 * 0x10;
                      FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar50),
                                    *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar50));
                      if (*(longlong *)(lVar24 + lVar50) != 0) {
                        FUN_1400020a8();
                      }
                      lVar24 = DAT_14c9a3da0;
                      iVar22 = (int)lVar25;
                      if (DAT_14c9a3dd4 != 0) {
                        *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar22;
                      }
                      *(undefined4 *)(lVar24 + lVar50) = 0xffffffff;
                      iVar49 = -1;
                      if (0 < DAT_14c9a3dd4) {
                        iVar49 = DAT_14c9a3dd0;
                      }
                      *(int *)(lVar24 + 4 + lVar50) = iVar49;
                      DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
                      puVar42 = &DAT_14c9a3db0;
                      if (DAT_14c9a3dc0 != (undefined *)0x0) {
                        puVar42 = DAT_14c9a3dc0;
                      }
                      iVar49 = iVar22 + 0x1f;
                      if (-1 < iVar22) {
                        iVar49 = iVar22;
                      }
                      bVar34 = (byte)lVar25 & 0x1f;
                      DAT_14c9a3dd0 = iVar22;
                      *(uint *)(puVar42 + (longlong)(iVar49 >> 5) * 4) =
                           *(uint *)(puVar42 + (longlong)(iVar49 >> 5) * 4) &
                           (-2 << bVar34 | 0xfffffffeU >> 0x20 - bVar34);
                      uStack_270 = uStack_270 & 0xffffffff00000000;
                    }
                    if (((char)local_298 == '\x03') && (local_288 != (code ******)0x0)) {
                      LOCK();
                      piVar2 = (int *)((longlong)local_288 + 0xc);
                      *piVar2 = *piVar2 + -1;
                      UNLOCK();
                      if (*piVar2 == 0) {
                        (*(code *)(*local_288)[2])();
                      }
                    }
                    *(float *)(param_1 + 0x71c) = local_3e0[0];
                    *(undefined2 *)(param_1 + 0x718) = 0x101;
                    *(undefined4 *)(param_1 + 0x720) = uVar63;
                  }
                  goto LAB_1407076ab;
                }
              }
              if (((*(char *)(param_1 + 0x7da) == '\0') &&
                  (((*(char *)(param_1 + 0x79d) != '\x01' || (*(char *)(param_1 + 0x79c) != '\x01'))
                   || ((0.0 < *(float *)(param_1 + 0x7a4) &&
                       (*(float *)(param_1 + 0x7a4) < local_3e0[0] - *(float *)(param_1 + 0x7a0)))))
                  )) && (((*(char *)(param_1 + 0xa5) != '\x01' ||
                          (*(char *)(param_1 + 0xa4) != '\x01')) ||
                         ((0.0 < *(float *)(param_1 + 0xac) &&
                          (*(float *)(param_1 + 0xac) < local_3e0[0] - *(float *)(param_1 + 0xa8))))
                         ))) {
                if ((*(char *)(param_1 + 0xb1) == '\x01') && (*(char *)(param_1 + 0xb0) == '\x01'))
                {
                  local_478 = (double)CONCAT44(local_478._4_4_,(int)CONCAT71(uVar40,1));
                  if (0.0 < *(float *)(param_1 + 0xb8)) {
                    local_478 = (double)CONCAT44(local_478._4_4_,
                                                 (int)CONCAT71(uVar40,local_3e0[0] -
                                                                      *(float *)(param_1 + 0xb4) <=
                                                                      *(float *)(param_1 + 0xb8)));
                  }
                  goto LAB_14070a3f0;
                }
                goto LAB_14070a3e8;
              }
            }
          }
          else {
            local_478 = (double)CONCAT44(local_478._4_4_,(int)CONCAT71(uVar40,4));
            if ((*(char *)(param_1 + 0x7d9) != '\x01') ||
               (((*(char *)(param_1 + 0x79d) == '\x01' && (*(char *)(param_1 + 0x79c) == '\x01')) &&
                ((*(float *)(param_1 + 0x7a4) <= 0.0 ||
                 (local_3e0[0] - *(float *)(param_1 + 0x7a0) <= *(float *)(param_1 + 0x7a4)))))))
            goto LAB_14070a3f0;
LAB_14070a3e8:
            local_478 = (double)((ulonglong)local_478 & 0xffffffff00000000);
LAB_14070a3f0:
            local_46c = (float)(uint)local_478._0_1_;
            lVar25 = ((ulonglong)local_478 & 0xff) * 0x20 +
                     (ulonglong)*(byte *)(param_1 + 0xa0) * 0x130 + local_3f8;
            plVar41 = (longlong *)(lVar25 + 0x730);
            if ((local_3e8 == 0) || (lVar50 = FUN_140115352(), lVar50 == 0)) {
              local_468 = 0;
              lVar50 = 0;
            }
            else {
              lVar30 = lVar50;
              cVar16 = FUN_140e38982(lVar50,plVar41,local_3f0,0);
              local_468 = CONCAT71((int7)((ulonglong)lVar30 >> 8),1);
              if (cVar16 == '\x01') goto LAB_1407076ab;
            }
            if (((*(char *)(param_1 + 0x7dd) != '\x01') || (*(char *)(param_1 + 0x7dc) != '\x01'))
               || ((0.0 < *(float *)(param_1 + 0x7e4) &&
                   (*(float *)(param_1 + 0x7e4) < local_3e0[0] - *(float *)(param_1 + 0x7e0))))) {
              if ((*(char *)(param_1 + 0x755) == '\0') ||
                 (((*(char *)(param_1 + 0x755) == '\x01' &&
                   (cVar16 = FUN_14070c9d0(puVar48 + 0x24), cVar16 != '\0')) &&
                  (cVar16 = FUN_14070c9d0(puVar48 + 0x27), cVar16 != '\0')))) {
                if ((((*(longlong **)(puVar48 + 8) != (longlong *)0x0) && (puVar48[7] != 0)) &&
                    ((uVar35 = puVar48[6], -1 < (int)uVar35 &&
                     (((int)uVar35 < DAT_14c9647dc &&
                      (lVar30 = (ulonglong)((uVar35 & 0xffff) * 0x18) +
                                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar35 >> 0x10) * 8),
                      lVar30 != 0)))))) &&
                   ((*(uint *)(lVar30 + 0x10) == puVar48[7] &&
                    ((*(uint *)(lVar30 + 8) & 0x10200000) == 0)))) {
                  local_450 = (**(code **)(**(longlong **)(puVar48 + 8) + 0x28))();
                  lVar30 = local_3f8 + 0x1c0;
                  local_298 = (code *****)((ulonglong)local_298 & 0xffffffffffffff00);
                  uStack_270 = uStack_270 & 0xffffffff00000000;
                  FUN_1456bb102(&local_298,local_3f0);
                  FUN_1447c3578(lVar30,&local_358,&local_298);
                  if ((byte)local_338 == '\x03') {
                    uVar35 = 3;
                    fVar64 = (float)local_358;
                  }
                  else {
                    FUN_1400b56fe(&local_308,&local_358,3);
                    fVar64 = 0.0;
                    if (local_2e8 != 0) {
                      fVar64 = (float)local_308;
                    }
                    pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 +
                                       (ulonglong)((uint)local_2e8 * 0x120));
                    if (pcVar6 != (code *)0x0) {
                      pppcVar39 = (code ***)&local_308;
                      if (0x18 < local_2f0) {
                        pppcVar39 = (code ***)local_308;
                      }
                      (*pcVar6)(pppcVar39);
                    }
                    if (0x18 < local_2f0) {
                      FUN_1400020a8(local_308);
                    }
                    uVar35 = (uint)(byte)local_338;
                  }
                  pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar35 * 0x120));
                  if (pcVar6 != (code *)0x0) {
                    ppppppcVar29 = (code ******)&local_358;
                    if (0x18 < (ushort)uStack_340) {
                      ppppppcVar29 = (code ******)local_358;
                    }
                    (*pcVar6)(ppppppcVar29);
                  }
                  if (0x18 < (ushort)uStack_340) {
                    FUN_1400020a8(local_358);
                  }
                  if ((longlong)(int)uStack_270 != 0) {
                    lVar30 = (longlong)(int)uStack_270 + -1;
                    local_458 = DAT_14c9a3da0;
                    lVar31 = lVar30 * 0x10;
                    FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar31),
                                  *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar31));
                    if (*(longlong *)(local_458 + lVar31) != 0) {
                      FUN_1400020a8();
                    }
                    lVar14 = DAT_14c9a3da0;
                    iVar22 = (int)lVar30;
                    if (DAT_14c9a3dd4 != 0) {
                      *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar22;
                    }
                    *(undefined4 *)(lVar14 + lVar31) = 0xffffffff;
                    iVar49 = -1;
                    if (0 < DAT_14c9a3dd4) {
                      iVar49 = DAT_14c9a3dd0;
                    }
                    *(int *)(lVar14 + 4 + lVar31) = iVar49;
                    DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
                    puVar42 = &DAT_14c9a3db0;
                    if (DAT_14c9a3dc0 != (undefined *)0x0) {
                      puVar42 = DAT_14c9a3dc0;
                    }
                    iVar49 = iVar22 + 0x1f;
                    if (-1 < iVar22) {
                      iVar49 = iVar22;
                    }
                    bVar34 = (byte)lVar30 & 0x1f;
                    DAT_14c9a3dd0 = iVar22;
                    *(uint *)(puVar42 + (longlong)(iVar49 >> 5) * 4) =
                         *(uint *)(puVar42 + (longlong)(iVar49 >> 5) * 4) &
                         (-2 << bVar34 | 0xfffffffeU >> 0x20 - bVar34);
                    uStack_270 = uStack_270 & 0xffffffff00000000;
                  }
                  if (((char)local_298 == '\x03') && (local_288 != (code ******)0x0)) {
                    LOCK();
                    piVar2 = (int *)((longlong)local_288 + 0xc);
                    *piVar2 = *piVar2 + -1;
                    UNLOCK();
                    if (*piVar2 == 0) {
                      (*(code *)(*local_288)[2])();
                    }
                  }
                  FUN_144a7fe3a(local_450,&local_308,puVar48 + 10);
                  if (local_2e8 == 3) {
                    uVar35 = 3;
                    fVar65 = (float)local_308;
                  }
                  else {
                    FUN_1400b56fe(&local_298,&local_308,3);
                    fVar65 = 0.0;
                    if ((byte)local_278 != 0) {
                      fVar65 = local_298._0_4_;
                    }
                    pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 +
                                       (ulonglong)((uint)(byte)local_278 * 0x120));
                    if (pcVar6 != (code *)0x0) {
                      ppppppcVar29 = &local_298;
                      if (0x18 < (ushort)uStack_280) {
                        ppppppcVar29 = (code ******)local_298;
                      }
                      (*pcVar6)(ppppppcVar29);
                    }
                    if (0x18 < (ushort)uStack_280) {
                      FUN_1400020a8(local_298);
                    }
                    uVar35 = (uint)local_2e8;
                  }
                  pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar35 * 0x120));
                  if (pcVar6 != (code *)0x0) {
                    pppcVar39 = (code ***)&local_308;
                    if (0x18 < local_2f0) {
                      pppcVar39 = (code ***)local_308;
                    }
                    (*pcVar6)(pppcVar39);
                  }
                  if (0x18 < local_2f0) {
                    FUN_1400020a8(local_308);
                  }
                  if ((local_3e0[0] < fVar64 + fVar65) && (local_478._0_1_ != '\x03'))
                  goto LAB_1407076ab;
                }
                goto LAB_14070a4b2;
              }
              if (local_478._0_1_ != '\x03') goto LAB_1407076ab;
LAB_14070a4c0:
              cVar16 = FUN_14573cc10(param_1,&local_3f8);
              if ((cVar16 != '\0') ||
                 (cVar16 = FUN_14573cee0(param_1,&local_3f8,puVar48), cVar16 != '\0'))
              goto LAB_1407076ab;
            }
            else {
LAB_14070a4b2:
              if ((local_478._0_1_ < 4) && (local_46c != 2.8026e-45)) goto LAB_14070a4c0;
            }
            lVar30 = *(longlong *)(lVar25 + 0x738);
            if (lVar30 == 0) {
              uVar26 = FUN_1407ad36c();
              lVar30 = FUN_14477b664(uVar26);
              *(longlong *)(lVar25 + 0x738) = lVar30;
            }
            bVar51 = true;
            if (*(longlong *)(lVar25 + 0x740) == 0) {
              lVar31 = 0;
              if ((lVar30 != 0) && (*plVar41 != 0)) {
                plVar32 = *(longlong **)(lVar30 + 0xb8);
                if ((plVar32 == (longlong *)0x0) ||
                   (cVar16 = (**(code **)(*plVar32 + 0x108))(plVar32), cVar16 == '\0')) {
                  lVar31 = 0;
                }
                else {
                  uVar26 = (**(code **)(*plVar32 + 0x110))(plVar32);
                  lVar31 = FUN_144aff482(uVar26,plVar41);
                }
                *(longlong *)(lVar25 + 0x740) = lVar31;
              }
              bVar51 = lVar31 != 0;
            }
            fVar64 = 1.0;
            uVar26 = 0;
            if (((byte)local_468 & bVar51) == 1) {
              local_298 = (code *****)((ulonglong)local_298 & 0xffffffff00000000);
              ppppcStack_290 = (code ****)0x0;
              local_288 = (code ******)0x0;
              uStack_280 = (void *)0x0;
              local_278 = 0;
              uStack_270 = 0;
              uStack_268 = 0;
              uStack_264 = 0;
              uStack_260 = 0;
              uStack_25c = 0;
              uStack_258 = 0;
              local_250 = 0;
              uStack_248 = 0;
              local_240 = 0;
              uStack_238 = 0;
              local_230 = 0;
              uStack_228 = 0;
              local_220 = 0xffffffff;
              local_21c = 0;
              local_21a = 1;
              local_219 = 0;
              if (puVar48[1] != 0) {
                uVar35 = *puVar48;
                uVar26 = 0;
                if ((-1 < (int)uVar35) && ((int)uVar35 < DAT_14c9647dc)) {
                  puVar43 = (undefined8 *)
                            ((ulonglong)((uVar35 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar35 >> 0x10) * 8));
                  if ((puVar43 == (undefined8 *)0x0) ||
                     ((*(uint *)(puVar43 + 2) != puVar48[1] ||
                      ((*(uint *)(puVar43 + 1) & 0x10200000) != 0)))) {
                    uVar26 = 0;
                  }
                  else {
                    uVar26 = *puVar43;
                  }
                }
              }
              local_488 = (code *****)&local_298;
              iVar22 = FUN_140d5168f(lVar50,plVar41,local_3f0,uVar26);
              *(int *)(param_1 + 0x7c4) = iVar22;
              if (iVar22 == -1) {
                uVar26 = 0;
              }
              else {
                fVar65 = (float)FUN_14573d13a(*(undefined8 *)(lVar50 + 0x48),iVar22);
                fVar64 = 1.0;
                if (1.0 <= fVar65) {
                  fVar64 = fVar65;
                }
                uVar26 = 1;
              }
            }
            if ((((((*(longlong *)(lVar25 + 0x748) == 0) ||
                   (plVar41 = *(longlong **)(param_1 + 0x88), plVar41 == (longlong *)0x0)) ||
                  (*(int *)(param_1 + 0x84) == 0)) ||
                 ((uVar35 = *(uint *)(param_1 + 0x80), (int)uVar35 < 0 ||
                  (DAT_14c9647dc <= (int)uVar35)))) ||
                (lVar50 = (ulonglong)((uVar35 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar35 >> 0x10) * 8),
                lVar50 == 0)) ||
               (((*(int *)(lVar50 + 0x10) != *(int *)(param_1 + 0x84) ||
                 ((*(uint *)(lVar50 + 8) & 0x10200000) != 0)) ||
                (plVar32 = (longlong *)(**(code **)(*plVar41 + 0x60))(plVar41),
                plVar32 == (longlong *)0x0)))) {
LAB_14070ab6b:
              if ((char)uVar26 != '\0') goto LAB_14070ab70;
              fVar65 = 5.0;
              bVar51 = false;
            }
            else {
              if ((char)plVar32[0x36] == '\0') {
                (**(code **)(*plVar32 + 0x38))(plVar32,plVar32 + 0x2c);
                *(undefined1 *)(plVar32 + 0x36) = 1;
              }
              if ((int)plVar32[0x2d] != *(int *)((longlong)plVar32 + 0x194)) {
                lVar25 = *(longlong *)(lVar25 + 0x748);
                uVar35 = (uint)((ulonglong)lVar25 >> 0x10);
                uVar36 = (uint)lVar25 & 0xffff;
                plVar38 = plVar32 + 0x33;
                if ((longlong *)plVar32[0x34] != (longlong *)0x0) {
                  plVar38 = (longlong *)plVar32[0x34];
                }
                iVar22 = *(int *)((longlong)plVar38 +
                                 (ulonglong)
                                 ((int)plVar32[0x35] - 1U &
                                 (int)((ulonglong)lVar25 >> 0x20) + ((uint)lVar25 << 0x10 | uVar36)
                                 + (uVar35 << 0x13 | uVar35 & 0xffff) + (uVar36 >> 4)) * 4);
                if (iVar22 != -1) {
                  do {
                    lVar50 = plVar32[0x2c] + (longlong)iVar22 * 0x38;
                    if (*(longlong *)(plVar32[0x2c] + (longlong)iVar22 * 0x38) == lVar25) {
                      if (lVar50 != 0) {
                        local_298 = *(code ******)(lVar50 + 8);
                        ppppcStack_290 = *(code *****)(lVar50 + 0x10);
                        local_288 = *(code *******)(lVar50 + 0x18);
                        uStack_280 = (void *)0x0;
                        uVar35 = *(uint *)(lVar50 + 0x28);
                        pvVar7 = *(void **)(lVar50 + 0x20);
                        local_278 = CONCAT44(local_278._4_4_,uVar35);
                        if ((longlong)(int)uVar35 == 0) {
                          local_278 = (ulonglong)uVar35;
                        }
                        else {
                          FUN_1446dd670(&uStack_280,uVar35,0);
                          memcpy(uStack_280,pvVar7,(longlong)(int)uVar35 * 2);
                        }
                        goto LAB_14070aff1;
                      }
                      break;
                    }
                    iVar22 = *(int *)(lVar50 + 0x30);
                  } while (iVar22 != -1);
                }
              }
              local_288 = (code ******)0x0;
              uStack_280 = (void *)0x0;
              local_298 = (code *****)0x0;
              ppppcStack_290 = (code ****)0x0;
              local_278 = 0;
LAB_14070aff1:
              lVar25 = FUN_140963a30(&local_298);
              if (uStack_280 != (void *)0x0) {
                FUN_1400020a8();
              }
              if (lVar25 == 0) goto LAB_14070ab6b;
              uVar33 = (**(code **)(*plVar41 + 0x50))(plVar41);
              local_278 = 0;
              uStack_264 = 0;
              uStack_260 = 0;
              uStack_25c = 0;
              uStack_258 = 0;
              uStack_254 = 0;
              local_250 = 0;
              local_288 = (code ******)0x0;
              uStack_280 = (void *)0x0;
              local_298 = (code *****)0x0;
              ppppcStack_290 = (code ****)0x0;
              uStack_270 = 0x8000000000;
              uStack_268 = 0xffffffff;
              uVar21 = FUN_14096df60(uVar33,lVar25,0,&local_298);
              *(undefined1 *)(param_1 + 0x7c8) = uVar21;
              local_250 = local_250 & 0xffffffff00000000;
              if (CONCAT44(uStack_254,uStack_258) != 0) {
                FUN_1400020a8();
              }
              FUN_140333f4e(&local_298);
              if (*(char *)(param_1 + 0x7c8) == '\0') goto LAB_14070ab6b;
              FUN_140dc01da(uVar33,&local_298);
              if (((code ******)local_298 != (code ******)0x0) &&
                 (fVar65 = (float)(*(code *)(*local_298)[5])(), fVar64 <= fVar65)) {
                fVar64 = fVar65;
              }
              ppppcVar15 = ppppcStack_290;
              if ((code *****)ppppcStack_290 != (code *****)0x0) {
                LOCK();
                pppppcVar37 = (code *****)(ppppcStack_290 + 1);
                *(int *)pppppcVar37 = *(int *)pppppcVar37 + -1;
                UNLOCK();
                if (*(int *)pppppcVar37 == 0) {
                  (*(code *)**ppppcStack_290)(ppppcStack_290);
                  LOCK();
                  piVar2 = (int *)((longlong)ppppcVar15 + 0xc);
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (*piVar2 == 0) {
                    (*(code *)(*ppppcVar15)[2])(ppppcVar15);
                  }
                }
              }
LAB_14070ab70:
              bVar51 = true;
              fVar65 = fVar64;
            }
            *(float *)(param_1 + 0x794) = local_3e0[0];
            *(undefined2 *)(param_1 + 0x790) = 0x101;
            *(float *)(param_1 + 0x798) = fVar65;
            *(byte *)(param_1 + 0x7c0) = SUB81(local_478,0);
            if (SUB81(local_478,0) < 2) {
LAB_14070abcb:
              lVar25 = local_3f8 + 0x1f8;
              local_298 = (code *****)((ulonglong)local_298._1_7_ << 8);
              uStack_270 = (ulonglong)uStack_270._4_4_ << 0x20;
              FUN_1456bb102(&local_298,local_3f0);
              FUN_1447c3578(lVar25,&local_358,&local_298);
              if ((byte)local_338 == '\x03') {
                fVar66 = (float)local_358;
                bVar34 = 3;
              }
              else {
                FUN_1400b56fe(&local_308,&local_358,3);
                fVar66 = 0.0;
                if (local_2e8 != 0) {
                  fVar66 = (float)local_308;
                }
                pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_2e8 * 0x120))
                ;
                if (pcVar6 != (code *)0x0) {
                  pppcVar39 = (code ***)&local_308;
                  if (0x18 < local_2f0) {
                    pppcVar39 = (code ***)local_308;
                  }
                  (*pcVar6)(pppcVar39);
                }
                if (0x18 < local_2f0) {
                  FUN_1400020a8(local_308);
                }
                bVar34 = (byte)local_338;
              }
              *(float *)(param_1 + 0x7a0) = local_3e0[0];
              *(undefined2 *)(param_1 + 0x79c) = 0x101;
              *(float *)(param_1 + 0x7a4) = fVar66 + fVar65;
              pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar34 * 0x120));
              if (pcVar6 != (code *)0x0) {
                ppppppcVar29 = (code ******)&local_358;
                if (0x18 < (ushort)uStack_340) {
                  ppppppcVar29 = (code ******)local_358;
                }
                (*pcVar6)(ppppppcVar29);
              }
              if (0x18 < (ushort)uStack_340) {
                FUN_1400020a8(local_358);
              }
              lVar25 = DAT_14c9a3da0;
              if ((longlong)(int)uStack_270 != 0) {
                lVar50 = (longlong)(int)uStack_270 + -1;
                lVar30 = lVar50 * 0x10;
                FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar30),
                              *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar30));
                if (*(longlong *)(lVar25 + lVar30) != 0) {
                  FUN_1400020a8();
                }
                lVar25 = DAT_14c9a3da0;
                iVar22 = (int)lVar50;
                if (DAT_14c9a3dd4 != 0) {
                  *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar22;
                }
                *(undefined4 *)(lVar25 + lVar30) = 0xffffffff;
                iVar49 = -1;
                if (0 < DAT_14c9a3dd4) {
                  iVar49 = DAT_14c9a3dd0;
                }
                *(int *)(lVar25 + 4 + lVar30) = iVar49;
                DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
                puVar42 = &DAT_14c9a3db0;
                if (DAT_14c9a3dc0 != (undefined *)0x0) {
                  puVar42 = DAT_14c9a3dc0;
                }
                iVar49 = iVar22 + 0x1f;
                if (-1 < iVar22) {
                  iVar49 = iVar22;
                }
                bVar34 = (byte)lVar50 & 0x1f;
                DAT_14c9a3dd0 = iVar22;
                *(uint *)(puVar42 + (longlong)(iVar49 >> 5) * 4) =
                     *(uint *)(puVar42 + (longlong)(iVar49 >> 5) * 4) &
                     (-2 << bVar34 | 0xfffffffeU >> 0x20 - bVar34);
                uStack_270 = uStack_270 & 0xffffffff00000000;
              }
              if (((char)local_298 == '\x03') && (local_288 != (code ******)0x0)) {
                LOCK();
                piVar2 = (int *)((longlong)local_288 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (*(code *)(*local_288)[2])();
                }
              }
              lVar25 = local_3f8 + 0x230;
              local_298 = (code *****)((ulonglong)local_298 & 0xffffffffffffff00);
              uStack_270 = uStack_270 & 0xffffffff00000000;
              FUN_1456bb102(&local_298,local_3f0);
              FUN_1447c3578(lVar25,&local_358,&local_298);
              if ((byte)local_338 == '\x03') {
                uVar35 = 3;
                fVar66 = (float)local_358;
              }
              else {
                FUN_1400b56fe(&local_308,&local_358,3);
                fVar66 = 0.0;
                if (local_2e8 != 0) {
                  fVar66 = (float)local_308;
                }
                pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_2e8 * 0x120))
                ;
                if (pcVar6 != (code *)0x0) {
                  pppcVar39 = (code ***)&local_308;
                  if (0x18 < local_2f0) {
                    pppcVar39 = (code ***)local_308;
                  }
                  (*pcVar6)(pppcVar39);
                }
                if (0x18 < local_2f0) {
                  FUN_1400020a8(local_308);
                }
                uVar35 = (uint)(byte)local_338;
              }
              *(float *)(param_1 + 0x7b8) = local_3e0[0];
              *(undefined2 *)(param_1 + 0x7b4) = 0x101;
              *(float *)(param_1 + 0x7bc) = fVar65 + fVar66;
              pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar35 * 0x120));
              if (pcVar6 != (code *)0x0) {
                ppppppcVar29 = (code ******)&local_358;
                if (0x18 < (ushort)uStack_340) {
                  ppppppcVar29 = (code ******)local_358;
                }
                (*pcVar6)(ppppppcVar29);
              }
              if (0x18 < (ushort)uStack_340) {
                FUN_1400020a8(local_358);
              }
              lVar25 = DAT_14c9a3da0;
              if ((longlong)(int)uStack_270 != 0) {
                lVar30 = (longlong)(int)uStack_270 + -1;
                lVar50 = lVar30 * 0x10;
                FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar50),
                              *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar50));
                if (*(longlong *)(lVar25 + lVar50) != 0) {
                  FUN_1400020a8();
                }
                lVar25 = DAT_14c9a3da0;
                iVar22 = (int)lVar30;
                if (DAT_14c9a3dd4 != 0) {
                  *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar22;
                }
                *(undefined4 *)(lVar25 + lVar50) = 0xffffffff;
                iVar49 = -1;
                if (0 < DAT_14c9a3dd4) {
                  iVar49 = DAT_14c9a3dd0;
                }
                *(int *)(lVar25 + 4 + lVar50) = iVar49;
                DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
                puVar42 = &DAT_14c9a3db0;
                if (DAT_14c9a3dc0 != (undefined *)0x0) {
                  puVar42 = DAT_14c9a3dc0;
                }
                iVar49 = iVar22 + 0x1f;
                if (-1 < iVar22) {
                  iVar49 = iVar22;
                }
                bVar34 = (byte)lVar30 & 0x1f;
                DAT_14c9a3dd0 = iVar22;
                *(uint *)(puVar42 + (longlong)(iVar49 >> 5) * 4) =
                     *(uint *)(puVar42 + (longlong)(iVar49 >> 5) * 4) &
                     (-2 << bVar34 | 0xfffffffeU >> 0x20 - bVar34);
                uStack_270 = uStack_270 & 0xffffffff00000000;
              }
              if (((char)local_298 == '\x03') && (local_288 != (code ******)0x0)) {
                LOCK();
                piVar2 = (int *)((longlong)local_288 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (*(code *)(*local_288)[2])();
                }
              }
            }
            else if (local_46c == 2.8026e-45) {
              lVar25 = local_3f8 + 0x268;
              local_298 = (code *****)((ulonglong)local_298._1_7_ << 8);
              uStack_270 = (ulonglong)uStack_270._4_4_ << 0x20;
              FUN_1456bb102(&local_298,local_3f0);
              FUN_1447c3578(lVar25,&local_358,&local_298);
              if ((byte)local_338 == '\x03') {
                fVar66 = (float)local_358;
                bVar34 = 3;
              }
              else {
                FUN_1400b56fe(&local_308,&local_358,3);
                fVar66 = 0.0;
                if (local_2e8 != 0) {
                  fVar66 = (float)local_308;
                }
                pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_2e8 * 0x120))
                ;
                if (pcVar6 != (code *)0x0) {
                  pppcVar39 = (code ***)&local_308;
                  if (0x18 < local_2f0) {
                    pppcVar39 = (code ***)local_308;
                  }
                  (*pcVar6)(pppcVar39);
                }
                if (0x18 < local_2f0) {
                  FUN_1400020a8(local_308);
                }
                bVar34 = (byte)local_338;
              }
              pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar34 * 0x120));
              if (pcVar6 != (code *)0x0) {
                ppppppcVar29 = (code ******)&local_358;
                if (0x18 < (ushort)uStack_340) {
                  ppppppcVar29 = (code ******)local_358;
                }
                (*pcVar6)(ppppppcVar29);
              }
              if (0x18 < (ushort)uStack_340) {
                FUN_1400020a8(local_358);
              }
              lVar25 = DAT_14c9a3da0;
              if ((longlong)(int)uStack_270 != 0) {
                lVar30 = (longlong)(int)uStack_270 + -1;
                lVar50 = lVar30 * 0x10;
                FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar50),
                              *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar50));
                if (*(longlong *)(lVar25 + lVar50) != 0) {
                  FUN_1400020a8();
                }
                lVar25 = DAT_14c9a3da0;
                iVar22 = (int)lVar30;
                if (DAT_14c9a3dd4 != 0) {
                  *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar22;
                }
                *(undefined4 *)(lVar25 + lVar50) = 0xffffffff;
                iVar49 = -1;
                if (0 < DAT_14c9a3dd4) {
                  iVar49 = DAT_14c9a3dd0;
                }
                *(int *)(lVar25 + 4 + lVar50) = iVar49;
                DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
                puVar42 = &DAT_14c9a3db0;
                if (DAT_14c9a3dc0 != (undefined *)0x0) {
                  puVar42 = DAT_14c9a3dc0;
                }
                iVar49 = iVar22 + 0x1f;
                if (-1 < iVar22) {
                  iVar49 = iVar22;
                }
                bVar34 = (byte)lVar30 & 0x1f;
                DAT_14c9a3dd0 = iVar22;
                *(uint *)(puVar42 + (longlong)(iVar49 >> 5) * 4) =
                     *(uint *)(puVar42 + (longlong)(iVar49 >> 5) * 4) &
                     (-2 << bVar34 | 0xfffffffeU >> 0x20 - bVar34);
                uStack_270 = uStack_270 & 0xffffffff00000000;
              }
              if (((char)local_298 == '\x03') && (local_288 != (code ******)0x0)) {
                LOCK();
                piVar2 = (int *)((longlong)local_288 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (*(code *)(*local_288)[2])();
                }
              }
              fVar60 = 0.0;
              if ((*(char *)(param_1 + 0x7a9) == '\x01') && (*(char *)(param_1 + 0x7a8) == '\x01'))
              {
                fVar4 = *(float *)(param_1 + 0x7b0);
                fVar62 = local_3e0[0] - *(float *)(param_1 + 0x7ac);
                if (fVar4 <= 0.0 || fVar62 <= fVar4) {
                  fVar60 = fVar4 - fVar62;
                }
              }
              if (fVar60 < fVar65 + fVar66) {
                *(float *)(param_1 + 0x7ac) = local_3e0[0];
                *(undefined2 *)(param_1 + 0x7a8) = 0x101;
                *(float *)(param_1 + 0x7b0) = fVar65 + fVar66;
              }
            }
            else if (local_46c == 4.2039e-45) goto LAB_14070abcb;
            if (bVar51) {
              if (*(longlong *)(param_1 + 0x6d8) != 0) {
                lVar24 = *(longlong *)(param_1 + 0x6d8);
              }
              if ((longlong)*(int *)(param_1 + 0x6e0) != 0) {
                fVar64 = fVar64 + local_3e0[0];
                lVar24 = lVar24 + 0x28;
                lVar25 = (longlong)*(int *)(param_1 + 0x6e0) * 0xc0;
                do {
                  if ((((*(longlong **)(lVar24 + -8) != (longlong *)0x0) &&
                       (*(int *)(lVar24 + -0xc) != 0)) &&
                      (uVar35 = *(uint *)(lVar24 + -0x10), -1 < (int)uVar35)) &&
                     ((((int)uVar35 < DAT_14c9647dc &&
                       (lVar50 = (ulonglong)((uVar35 & 0xffff) * 0x18) +
                                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar35 >> 0x10) * 8),
                       lVar50 != 0)) &&
                      ((*(int *)(lVar50 + 0x10) == *(int *)(lVar24 + -0xc) &&
                       ((*(uint *)(lVar50 + 8) & 0x10200000) == 0)))))) {
                    uVar26 = (**(code **)(**(longlong **)(lVar24 + -8) + 0x28))();
                    uStack_280 = (void *)CONCAT62(uStack_280._2_6_,4);
                    local_298 = (code *****)CONCAT44(local_298._4_4_,fVar64);
                    local_278 = CONCAT71(local_278._1_7_,3);
                    FUN_140af060e(uVar26,lVar24,&local_298);
                    pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 +
                                       (ulonglong)((uint)(byte)local_278 * 0x120));
                    if (pcVar6 != (code *)0x0) {
                      ppppppcVar29 = &local_298;
                      if (0x18 < (ushort)uStack_280) {
                        ppppppcVar29 = (code ******)local_298;
                      }
                      (*pcVar6)(ppppppcVar29);
                    }
                    if (0x18 < (ushort)uStack_280) {
                      FUN_1400020a8(local_298);
                    }
                  }
                  lVar24 = lVar24 + 0xc0;
                  lVar25 = lVar25 + -0xc0;
                } while (lVar25 != 0);
              }
            }
          }
        }
      }
    }
  }
  else if (*(int *)(param_1 + 0x7c4) == -1) {
LAB_140707607:
    if (*(char *)(param_1 + 0x7c8) != '\0') {
      if (((((*(longlong **)(param_1 + 0x88) != (longlong *)0x0) && (*(int *)(param_1 + 0x84) != 0))
           && (uVar35 = *(uint *)(param_1 + 0x80), -1 < (int)uVar35)) &&
          (((int)uVar35 < DAT_14c9647dc &&
           (lVar24 = (ulonglong)((uVar35 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar35 >> 0x10) * 8), lVar24 != 0))))
         && ((*(int *)(lVar24 + 0x10) == *(int *)(param_1 + 0x84) &&
             ((*(uint *)(lVar24 + 8) & 0x10200000) == 0)))) {
        lVar24 = (**(code **)(**(longlong **)(param_1 + 0x88) + 0x50))();
        if ((longlong)*(int *)(lVar24 + 0x48) != 0) {
          lVar25 = 0;
          do {
            lVar50 = *(longlong *)(*(longlong *)(lVar24 + 0x40) + lVar25);
            if ((lVar50 != 0) && (*(char *)(lVar50 + 0x40) == *(char *)(param_1 + 0x7c8)))
            goto LAB_1407076ab;
            lVar25 = lVar25 + 0x10;
          } while ((longlong)*(int *)(lVar24 + 0x48) * 0x10 != lVar25);
        }
      }
      *(undefined1 *)(param_1 + 0x7c8) = 0;
    }
    if (((*(char *)(param_1 + 0x791) != '\x01') || (*(char *)(param_1 + 0x790) != '\x01')) ||
       ((0.0 < *(float *)(param_1 + 0x798) &&
        (*(float *)(param_1 + 0x798) < local_3e0[0] - *(float *)(param_1 + 0x794))))) {
      bVar34 = *(byte *)(param_1 + 0x7c0);
      if ((bVar34 == 4) || ((bVar34 == 0 && (*(char *)(param_1 + 0x7d9) != '\0')))) {
        if (*(char *)(param_1 + 0x7dc) != '\0') {
          *(float *)(param_1 + 0x7e0) = local_3e0[0];
        }
        *(undefined4 *)(param_1 + 0x7e4) = 0;
        *(undefined2 *)(param_1 + 0x7dc) = 0x100;
        *(undefined1 *)(param_1 + 0x7d9) = 0;
      }
      else if (bVar34 < 2) {
        *(undefined1 *)(param_1 + 0x7da) = 1;
        if (*(char *)(param_1 + 0x7cc) == '\0') {
          *(float *)(param_1 + 2000) = local_3e0[0];
        }
        *(undefined4 *)(param_1 + 0x7d4) = 0;
        *(undefined2 *)(param_1 + 0x7cc) = 0x101;
      }
      *(undefined1 *)(param_1 + 0x7c0) = 5;
      if (*(char *)(param_1 + 0x790) != '\0') {
        *(float *)(param_1 + 0x794) = local_3e0[0];
      }
      *(undefined4 *)(param_1 + 0x798) = 0;
      *(undefined2 *)(param_1 + 0x790) = 0x100;
    }
  }
  else if (((local_3e8 == 0) || (lVar24 = FUN_140115352(), lVar24 == 0)) ||
          (bVar34 = FUN_1406ee510(*(undefined8 *)(lVar24 + 0x48),*(undefined4 *)(param_1 + 0x7c4)),
          (bVar34 & 0xfd) != 1)) {
    *(undefined4 *)(param_1 + 0x7c4) = 0xffffffff;
    goto LAB_140707607;
  }
LAB_1407076ab:
  if (((*(longlong **)(param_1 + 0x58) == (longlong *)0x0) || (*(int *)(param_1 + 0x54) == 0)) ||
     (((uVar35 = *(uint *)(param_1 + 0x50), (int)uVar35 < 0 ||
       (((DAT_14c9647dc <= (int)uVar35 ||
         (lVar24 = (ulonglong)((uVar35 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar35 >> 0x10) * 8), lVar24 == 0)) ||
        (*(int *)(lVar24 + 0x10) != *(int *)(param_1 + 0x54))))) ||
      ((((*(uint *)(lVar24 + 8) & 0x10200000) != 0 ||
        (lVar24 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0x10))(), lVar24 == 0)) ||
       (cVar16 = FUN_14017695c(lVar24,0), cVar16 == '\0')))))) {
    lVar24 = local_3f8 + 0x3f0;
    local_298 = (code *****)((ulonglong)local_298 & 0xffffffffffffff00);
    uStack_270 = uStack_270 & 0xffffffff00000000;
    FUN_1456bb102(&local_298,local_3f0);
    FUN_1447c3578(lVar24,&local_308,&local_298);
    bVar34 = FUN_140168b7a(&local_308,1);
    pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_2e8 * 0x120));
    if (pcVar6 != (code *)0x0) {
      pppcVar39 = (code ***)&local_308;
      if (0x18 < local_2f0) {
        pppcVar39 = (code ***)local_308;
      }
      (*pcVar6)(pppcVar39);
    }
    if (0x18 < local_2f0) {
      FUN_1400020a8(local_308);
    }
    lVar24 = DAT_14c9a3da0;
    if ((longlong)(int)uStack_270 != 0) {
      lVar25 = (longlong)(int)uStack_270 + -1;
      lVar50 = lVar25 * 0x10;
      FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar50),
                    *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar50));
      if (*(longlong *)(lVar24 + lVar50) != 0) {
        FUN_1400020a8();
      }
      lVar24 = DAT_14c9a3da0;
      iVar22 = (int)lVar25;
      if (DAT_14c9a3dd4 != 0) {
        *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar22;
      }
      *(undefined4 *)(lVar24 + lVar50) = 0xffffffff;
      iVar49 = -1;
      if (0 < DAT_14c9a3dd4) {
        iVar49 = DAT_14c9a3dd0;
      }
      *(int *)(lVar24 + 4 + lVar50) = iVar49;
      DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
      puVar42 = &DAT_14c9a3db0;
      if (DAT_14c9a3dc0 != (undefined *)0x0) {
        puVar42 = DAT_14c9a3dc0;
      }
      iVar49 = iVar22 + 0x1f;
      if (-1 < iVar22) {
        iVar49 = iVar22;
      }
      bVar44 = (byte)lVar25 & 0x1f;
      DAT_14c9a3dd0 = iVar22;
      *(uint *)(puVar42 + (longlong)(iVar49 >> 5) * 4) =
           *(uint *)(puVar42 + (longlong)(iVar49 >> 5) * 4) &
           (-2 << bVar44 | 0xfffffffeU >> 0x20 - bVar44);
      uStack_270 = uStack_270 & 0xffffffff00000000;
    }
    if (((char)local_298 == '\x03') && (local_288 != (code ******)0x0)) {
      LOCK();
      piVar2 = (int *)((longlong)local_288 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (*(code *)(*local_288)[2])();
      }
    }
    lVar24 = local_3f8 + 0x428;
    local_298 = (code *****)((ulonglong)local_298 & 0xffffffffffffff00);
    uStack_270 = uStack_270 & 0xffffffff00000000;
    FUN_1456bb102(&local_298,local_3f0);
    FUN_1447c3578(lVar24,&local_308,&local_298);
    cVar16 = FUN_140168b7a(&local_308,1);
    pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_2e8 * 0x120));
    if (pcVar6 != (code *)0x0) {
      pppcVar39 = (code ***)&local_308;
      if (0x18 < local_2f0) {
        pppcVar39 = (code ***)local_308;
      }
      (*pcVar6)(pppcVar39);
    }
    if (0x18 < local_2f0) {
      FUN_1400020a8(local_308);
    }
    lVar24 = DAT_14c9a3da0;
    if ((longlong)(int)uStack_270 != 0) {
      lVar50 = (longlong)(int)uStack_270 + -1;
      lVar25 = lVar50 * 0x10;
      FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar25),
                    *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar25));
      if (*(longlong *)(lVar24 + lVar25) != 0) {
        FUN_1400020a8();
      }
      lVar24 = DAT_14c9a3da0;
      iVar22 = (int)lVar50;
      if (DAT_14c9a3dd4 != 0) {
        *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar22;
      }
      *(undefined4 *)(lVar24 + lVar25) = 0xffffffff;
      iVar49 = -1;
      if (0 < DAT_14c9a3dd4) {
        iVar49 = DAT_14c9a3dd0;
      }
      *(int *)(lVar24 + 4 + lVar25) = iVar49;
      DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
      puVar42 = &DAT_14c9a3db0;
      if (DAT_14c9a3dc0 != (undefined *)0x0) {
        puVar42 = DAT_14c9a3dc0;
      }
      iVar49 = iVar22 + 0x1f;
      if (-1 < iVar22) {
        iVar49 = iVar22;
      }
      bVar44 = (byte)lVar50 & 0x1f;
      DAT_14c9a3dd0 = iVar22;
      *(uint *)(puVar42 + (longlong)(iVar49 >> 5) * 4) =
           *(uint *)(puVar42 + (longlong)(iVar49 >> 5) * 4) &
           (-2 << bVar44 | 0xfffffffeU >> 0x20 - bVar44);
      uStack_270 = uStack_270 & 0xffffffff00000000;
    }
    if (((char)local_298 == '\x03') && (local_288 != (code ******)0x0)) {
      LOCK();
      piVar2 = (int *)((longlong)local_288 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (*(code *)(*local_288)[2])();
      }
    }
    plVar41 = local_448;
    if ((cVar16 != '\0') && (*(char *)(param_1 + 0x756) == '\0')) {
      cVar16 = FUN_14070d0f0(param_1,&local_3f8);
      lVar24 = local_3f8;
      if ((*(char *)(param_1 + 0x7dd) == '\x01') && (*(char *)(param_1 + 0x7dc) == '\x01')) {
        bVar51 = true;
        if (0.0 < *(float *)(param_1 + 0x7e4)) {
          bVar51 = local_3e0[0] - *(float *)(param_1 + 0x7e0) <= *(float *)(param_1 + 0x7e4);
        }
      }
      else {
        bVar51 = false;
      }
      if ((((((cVar16 == '\0') && (*(char *)(param_1 + 0x6e9) == '\x01')) &&
            (*(char *)(param_1 + 0x6e8) == '\x01')) &&
           ((*(float *)(param_1 + 0x6f0) <= 0.0 ||
            (local_3e0[0] - *(float *)(param_1 + 0x6ec) <= *(float *)(param_1 + 0x6f0))))) &&
          ((!bVar51 && (bVar34 & *(byte *)(param_1 + 0x7d8)) == 1 &&
           ((bVar34 = *(byte *)(param_1 + 0xa0), (ulonglong)bVar34 < 4 && (local_3e8 != 0)))))) &&
         ((lVar25 = FUN_140115352(), lVar25 != 0 &&
          (cVar16 = FUN_140e38982(lVar25,lVar24 + (ulonglong)bVar34 * 0x130 + 0x7b0,local_3f0,0),
          cVar16 == '\x02')))) {
        if ((*(int *)(param_1 + 0x7e8) == 0) && (lVar24 = FUN_14070ca4c(param_1), lVar24 != 0)) {
          uVar26 = FUN_144a800f8();
          lVar24 = FUN_144718840(lVar24,uVar26);
          if (lVar24 != 0) {
            local_298 = (code *****)(((ulonglong)local_298 >> 0x10 & 0xffff) << 0x10);
            ppppcStack_290 = (code ****)0x0;
            local_288 = (code ******)CONCAT44(local_288._4_4_,0x10);
            uStack_280 = (void *)0x0;
            FUN_14070e804();
            FUN_144a7a8f6(local_118);
            local_10c = 0;
            local_100 = 0;
            local_f8 = 0;
            lVar25 = FUN_144860928();
            FUN_14070e270(&local_298,lVar25 + 0x6c0);
            FUN_14573d51c(&local_100,param_1);
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110
                         ) < DAT_14cb7e208) && (FUN_144b3d300(&DAT_14cb7e208), DAT_14cb7e208 == -1))
            {
              FUN_1446ddc76(&DAT_14cb7e200,"EngagePlayers",1);
              _Init_thread_footer(&DAT_14cb7e208);
            }
            local_10c = DAT_14cb7e200;
            FUN_14573d20e(lVar24,&local_308,&local_298,1);
            *(float *)(param_1 + 0x7e8) = (float)local_308;
            FUN_1404967de(&local_298);
          }
        }
        goto LAB_140707879;
      }
    }
    FUN_14070caa6(param_1);
  }
  else {
    FUN_14070caa6(param_1);
    plVar41 = local_448;
  }
LAB_140707879:
  lVar24 = local_3f8;
  bVar34 = FUN_14070cece(param_1,&local_3f8);
  local_2f0 = 4;
  local_308 = (code *)CONCAT44(local_308._4_4_,(uint)bVar34);
  local_2e8 = 1;
  local_298 = (code *****)((ulonglong)local_298 & 0xffffffffffffff00);
  uStack_270 = uStack_270 & 0xffffffff00000000;
  FUN_1456bb102(&local_298,local_3f0);
  if (*(code **)(&DAT_14c9a8610 + (uint)*(byte *)(lVar24 + 0x4c0) * 0x120) != (code *)0x0) {
    (**(code **)(&DAT_14c9a8610 + (uint)*(byte *)(lVar24 + 0x4c0) * 0x120))
              (lVar24 + 0x4a0,&local_298,&local_308);
  }
  lVar24 = DAT_14c9a3da0;
  if ((longlong)(int)uStack_270 != 0) {
    lVar50 = (longlong)(int)uStack_270 + -1;
    lVar25 = lVar50 * 0x10;
    FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar25),
                  *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar25));
    if (*(longlong *)(lVar24 + lVar25) != 0) {
      FUN_1400020a8();
    }
    lVar24 = DAT_14c9a3da0;
    iVar22 = (int)lVar50;
    if (DAT_14c9a3dd4 != 0) {
      *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar22;
    }
    *(undefined4 *)(lVar24 + lVar25) = 0xffffffff;
    iVar49 = -1;
    if (0 < DAT_14c9a3dd4) {
      iVar49 = DAT_14c9a3dd0;
    }
    *(int *)(lVar24 + 4 + lVar25) = iVar49;
    DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
    puVar42 = &DAT_14c9a3db0;
    if (DAT_14c9a3dc0 != (undefined *)0x0) {
      puVar42 = DAT_14c9a3dc0;
    }
    iVar49 = iVar22 + 0x1f;
    if (-1 < iVar22) {
      iVar49 = iVar22;
    }
    bVar34 = (byte)lVar50 & 0x1f;
    DAT_14c9a3dd0 = iVar22;
    *(uint *)(puVar42 + (longlong)(iVar49 >> 5) * 4) =
         *(uint *)(puVar42 + (longlong)(iVar49 >> 5) * 4) &
         (-2 << bVar34 | 0xfffffffeU >> 0x20 - bVar34);
    uStack_270 = uStack_270 & 0xffffffff00000000;
  }
  if (((char)local_298 == '\x03') && (local_288 != (code ******)0x0)) {
    LOCK();
    piVar2 = (int *)((longlong)local_288 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (*(code *)(*local_288)[2])();
    }
  }
  pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_2e8 * 0x120));
  if (pcVar6 != (code *)0x0) {
    pppcVar39 = (code ***)local_308;
    if (local_2f0 < 0x19) {
      pppcVar39 = (code ***)&local_308;
    }
    (*pcVar6)(pppcVar39);
    plVar41 = local_448;
  }
  if (0x18 < local_2f0) {
    FUN_1400020a8(local_308);
  }
  if ((char)local_45c == '\0') {
    LOCK();
    plVar32 = plVar41 + 1;
    *(int *)plVar32 = (int)*plVar32 + -1;
    UNLOCK();
    if ((int)*plVar32 == 0) {
      (**(code **)*plVar41)(plVar41);
      LOCK();
      piVar2 = (int *)((longlong)plVar41 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar41 + 0x10))(plVar41);
      }
    }
  }
LAB_140707968:
  if ((local_f0 ^ (ulonglong)auStack_4a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14070c9d0 FUN_14070c9d0 body=124 status=ok
// SIG undefined FUN_14070c9d0(void)

ulonglong FUN_14070c9d0(char *param_1,float param_2,float param_3)

{
  undefined8 in_RAX;
  ulonglong uVar1;
  float fVar2;
  float fVar3;
  
  if (param_1[1] == '\x01') {
    if (*param_1 == '\0') {
      fVar3 = param_2 - *(float *)(param_1 + 4);
    }
    else {
      fVar2 = *(float *)(param_1 + 8);
      uVar1 = CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
      if ((fVar2 <= 0.0) || (param_2 - *(float *)(param_1 + 4) <= fVar2)) goto LAB_14070c9eb;
LAB_14070ca34:
      fVar3 = 0.0;
      if ((0.0 < fVar2) && (fVar2 < param_2 - *(float *)(param_1 + 4))) {
        fVar3 = (param_2 - *(float *)(param_1 + 4)) - fVar2;
      }
    }
  }
  else {
    if (*param_1 != '\0') {
      fVar2 = *(float *)(param_1 + 8);
      goto LAB_14070ca34;
    }
    fVar3 = -1.0;
  }
  uVar1 = (ulonglong)-(uint)(fVar3 != -1.0 && fVar3 <= param_3);
LAB_14070c9eb:
  return uVar1 & 0xffffffffffffff01;
}



// FUNCTION 14070ca4c FUN_14070ca4c body=89 status=ok
// SIG undefined FUN_14070ca4c(void)

undefined8 FUN_14070ca4c(longlong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (*(longlong **)(param_1 + 0x28) != (longlong *)0x0) {
    if (((*(int *)(param_1 + 0x24) != 0) && (uVar1 = *(uint *)(param_1 + 0x20), -1 < (int)uVar1)) &&
       ((int)uVar1 < DAT_14c9647dc)) {
      lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      if (((lVar3 != 0) && (*(int *)(lVar3 + 0x10) == *(int *)(param_1 + 0x24))) &&
         ((*(uint *)(lVar3 + 8) & 0x10200000) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00014070ca9e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x10))();
        return uVar2;
      }
    }
  }
  return 0;
}



// FUNCTION 14070caa6 FUN_14070caa6 body=88 status=ok
// SIG undefined FUN_14070caa6(void)

void FUN_14070caa6(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (*(int *)(param_1 + 0x7e8) != 0) {
    lVar1 = FUN_14070ca4c();
    if (lVar1 != 0) {
      uVar2 = FUN_144a800f8();
      lVar1 = FUN_144718840(lVar1,uVar2);
      if (lVar1 != 0) {
        FUN_14573cbec(lVar1,*(undefined4 *)(param_1 + 0x7e8),1);
        *(undefined4 *)(param_1 + 0x7e8) = 0;
      }
    }
  }
  return;
}



// FUNCTION 14070cafe FUN_14070cafe body=115 status=ok
// SIG undefined FUN_14070cafe(void)

void FUN_14070cafe(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x700) != -1) {
    *(undefined8 *)(param_1 + 0x700) = 0xffffffffffffffff;
    uVar1 = *(undefined4 *)(param_2 + 0x18);
    *(undefined4 *)(param_1 + 0x708) = uVar1;
    if (*(char *)(param_1 + 0x6f4) != '\0') {
      *(undefined4 *)(param_1 + 0x6f8) = uVar1;
    }
    *(undefined4 *)(param_1 + 0x6fc) = 0;
    *(undefined2 *)(param_1 + 0x6f4) = 0x100;
  }
  if (-1 < *(int *)(param_1 + 0x6e4)) {
    *(undefined4 *)(param_1 + 0x6e0) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0x6e0) = 0;
  FUN_148873b08(param_1 + 0xd8);
  return;
}



// FUNCTION 14070cb72 FUN_14070cb72 body=128 status=ok
// SIG undefined FUN_14070cb72(void)

ulonglong FUN_14070cb72(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong uVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14070cbf4(&local_28,param_1);
  if (local_28 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = CONCAT71((int7)((ulonglong)&local_28 >> 8),*(undefined1 *)(local_28 + 0x2b0));
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
    return uVar3 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14070cbf4 FUN_14070cbf4 body=109 status=ok
// SIG undefined FUN_14070cbf4(void)

undefined8 * FUN_14070cbf4(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = FUN_14070cc62();
    if (((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
          (longlong)*(int *)(lVar1 + 0x38) * 8) == lVar1 + 0x30)) &&
       (lVar1 = *(longlong *)(param_2 + 0x858), lVar1 != 0)) {
      *param_1 = *(undefined8 *)(lVar1 + 0x1518);
      lVar1 = *(longlong *)(lVar1 + 0x1520);
      param_1[1] = lVar1;
      if (lVar1 == 0) {
        return param_1;
      }
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
      return param_1;
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}



// FUNCTION 14070cc62 FUN_14070cc62 body=228 status=ok
// SIG undefined FUN_14070cc62(void)

longlong FUN_14070cc62(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined2 *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb1ba18 == 0) {
    local_30 = &local_10;
    local_10 = FUN_141030f22;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1462ac6a6;
    local_38 = &LAB_147e31d94;
    local_40 = &LAB_14641d14f;
    local_48 = &DAT_149e063b2;
    local_50 = 0;
    local_58 = 0x10000005;
    local_60 = 0x10;
    local_68 = 0x860;
    FUN_14081cfa3(L"/Script/GbxNav",L"GbxNavCharacter",&DAT_14cb1ba18,FUN_14641d128);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb1ba18;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14070cd48 FUN_14070cd48 body=388 status=ok
// SIG undefined FUN_14070cd48(void)

longlong FUN_14070cd48(longlong param_1,longlong param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 == 0) {
    uVar5 = 0;
    uVar2 = 0;
  }
  else {
    uVar5 = *(uint *)(param_2 + 0xc);
    if ((int)uVar5 < DAT_14c9647dc) {
      lVar8 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
    }
    else {
      lVar8 = 0;
    }
    uVar2 = *(uint *)(lVar8 + 0x10);
    if (*(uint *)(lVar8 + 0x10) == 0) {
      LOCK();
      iVar3 = DAT_14c964868 + 1;
      UNLOCK();
      uVar6 = DAT_14c964868 + 1;
      bVar9 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar3;
      if (bVar9) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar6);
      }
      LOCK();
      uVar2 = *(uint *)(lVar8 + 0x10);
      bVar9 = uVar2 == 0;
      if (bVar9) {
        *(uint *)(lVar8 + 0x10) = uVar6;
        uVar2 = 0;
      }
      UNLOCK();
      if (bVar9) {
        uVar2 = uVar6;
      }
    }
  }
  if (*(int *)(param_1 + 0x58) != *(int *)(param_1 + 0x84)) {
    lVar8 = param_1 + 0x88;
    if (*(longlong *)(param_1 + 0x90) != 0) {
      lVar8 = *(longlong *)(param_1 + 0x90);
    }
    iVar3 = *(int *)(lVar8 + (ulonglong)(*(int *)(param_1 + 0x98) - 1U & (uVar2 ^ uVar5)) * 4);
    if (iVar3 != -1) {
      lVar8 = *(longlong *)(param_1 + 0x50);
      lVar4 = 0;
      do {
        lVar7 = (longlong)iVar3 * 0x2b0;
        local_40 = *(undefined8 *)(lVar8 + lVar7);
        local_48 = CONCAT44(uVar2,uVar5);
        cVar1 = FUN_14472d054(&local_40,&local_48);
        lVar8 = *(longlong *)(param_1 + 0x50);
        if (cVar1 != '\0') {
          lVar4 = lVar8 + lVar7;
          break;
        }
        iVar3 = *(int *)(lVar8 + 0x2a8 + lVar7);
      } while (iVar3 != -1);
      goto LAB_14070ce43;
    }
  }
  lVar4 = 0;
LAB_14070ce43:
  lVar8 = lVar4 + 8;
  if (lVar4 == 0) {
    lVar8 = 0;
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar8;
}



// FUNCTION 14070cece FUN_14070cece body=545 status=ok
// SIG undefined FUN_14070cece(void)

ulonglong FUN_14070cece(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  code *pcVar3;
  byte bVar4;
  char cVar5;
  ulonglong uVar6;
  int iVar7;
  undefined *puVar8;
  int iVar9;
  longlong lVar10;
  undefined8 ****ppppuVar11;
  longlong lVar12;
  undefined1 auStack_b8 [40];
  char local_90 [16];
  longlong *local_80;
  int local_68;
  undefined8 ***local_60 [3];
  ushort local_48;
  byte local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar2 = *param_2;
  local_90[0] = '\0';
  local_68 = 0;
  FUN_1456bb102(local_90,param_2[1]);
  FUN_1447c3578(lVar2 + 0x428,local_60,local_90);
  cVar5 = FUN_140168b7a(local_60,1);
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_40 * 0x120));
  if (pcVar3 != (code *)0x0) {
    ppppuVar11 = local_60;
    if (0x18 < local_48) {
      ppppuVar11 = (undefined8 ****)local_60[0];
    }
    (*pcVar3)(ppppuVar11);
  }
  if (0x18 < local_48) {
    FUN_1400020a8(local_60[0]);
  }
  lVar2 = DAT_14c9a3da0;
  if ((longlong)local_68 != 0) {
    lVar10 = (longlong)local_68 + -1;
    lVar12 = lVar10 * 0x10;
    FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar12),
                  *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar12));
    if (*(longlong *)(lVar2 + lVar12) != 0) {
      FUN_1400020a8();
    }
    lVar2 = DAT_14c9a3da0;
    iVar9 = (int)lVar10;
    if (DAT_14c9a3dd4 != 0) {
      *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar9;
    }
    *(undefined4 *)(lVar2 + lVar12) = 0xffffffff;
    iVar7 = -1;
    if (0 < DAT_14c9a3dd4) {
      iVar7 = DAT_14c9a3dd0;
    }
    *(int *)(lVar2 + 4 + lVar12) = iVar7;
    DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
    puVar8 = &DAT_14c9a3db0;
    if (DAT_14c9a3dc0 != (undefined *)0x0) {
      puVar8 = DAT_14c9a3dc0;
    }
    iVar7 = iVar9 + 0x1f;
    if (-1 < iVar9) {
      iVar7 = iVar9;
    }
    bVar4 = (byte)lVar10 & 0x1f;
    DAT_14c9a3dd0 = iVar9;
    *(uint *)(puVar8 + (longlong)(iVar7 >> 5) * 4) =
         *(uint *)(puVar8 + (longlong)(iVar7 >> 5) * 4) &
         (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
    local_68 = 0;
  }
  if ((local_90[0] == '\x03') && (local_80 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_80 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_80 + 0x10))();
    }
  }
  if ((cVar5 == '\0') ||
     (((*(char *)(param_1 + 0x719) == '\x01' && (*(char *)(param_1 + 0x718) == '\x01')) &&
      ((*(float *)(param_1 + 0x720) <= 0.0 ||
       (*(float *)(param_2 + 3) - *(float *)(param_1 + 0x71c) <= *(float *)(param_1 + 0x720))))))) {
    uVar6 = 0;
  }
  else {
    uVar6 = FUN_14070d0f0(param_1,param_2);
    uVar6 = uVar6 ^ 1;
  }
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14070d0f0 FUN_14070d0f0 body=462 status=ok
// SIG undefined FUN_14070d0f0(void)

undefined1 FUN_14070d0f0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  code *pcVar3;
  byte bVar4;
  char cVar5;
  undefined1 uVar6;
  int iVar7;
  undefined *puVar8;
  int iVar9;
  longlong lVar10;
  undefined8 ****ppppuVar11;
  longlong lVar12;
  undefined1 auStack_a8 [32];
  char local_88 [16];
  longlong *local_78;
  int local_60;
  undefined8 ***local_58 [3];
  ushort local_40;
  byte local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar2 = *param_2;
  local_88[0] = '\0';
  local_60 = 0;
  FUN_1456bb102(local_88,param_2[1]);
  FUN_1447c3578(lVar2 + 0x4d0,local_58,local_88);
  cVar5 = FUN_140168b7a(local_58,0);
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
  if (pcVar3 != (code *)0x0) {
    ppppuVar11 = local_58;
    if (0x18 < local_40) {
      ppppuVar11 = (undefined8 ****)local_58[0];
    }
    (*pcVar3)(ppppuVar11);
  }
  if (0x18 < local_40) {
    FUN_1400020a8(local_58[0]);
  }
  lVar2 = DAT_14c9a3da0;
  if ((longlong)local_60 != 0) {
    lVar10 = (longlong)local_60 + -1;
    lVar12 = lVar10 * 0x10;
    FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar12),
                  *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar12));
    if (*(longlong *)(lVar2 + lVar12) != 0) {
      FUN_1400020a8();
    }
    lVar2 = DAT_14c9a3da0;
    iVar9 = (int)lVar10;
    if (DAT_14c9a3dd4 != 0) {
      *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar9;
    }
    *(undefined4 *)(lVar2 + lVar12) = 0xffffffff;
    iVar7 = -1;
    if (0 < DAT_14c9a3dd4) {
      iVar7 = DAT_14c9a3dd0;
    }
    *(int *)(lVar2 + 4 + lVar12) = iVar7;
    DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
    puVar8 = &DAT_14c9a3db0;
    if (DAT_14c9a3dc0 != (undefined *)0x0) {
      puVar8 = DAT_14c9a3dc0;
    }
    iVar7 = iVar9 + 0x1f;
    if (-1 < iVar9) {
      iVar7 = iVar9;
    }
    bVar4 = (byte)lVar10 & 0x1f;
    DAT_14c9a3dd0 = iVar9;
    *(uint *)(puVar8 + (longlong)(iVar7 >> 5) * 4) =
         *(uint *)(puVar8 + (longlong)(iVar7 >> 5) * 4) &
         (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
    local_60 = 0;
  }
  if ((local_88[0] == '\x03') && (local_78 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_78 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_78 + 0x10))();
    }
  }
  if (cVar5 == '\0') {
    uVar6 = *(undefined1 *)(param_1 + 0x770);
  }
  else {
    uVar6 = 0;
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14070d2c0 FUN_14070d2c0 body=1409 status=ok
// SIG undefined FUN_14070d2c0(void)

longlong * FUN_14070d2c0(longlong *param_1,longlong *param_2,longlong *param_3,longlong param_4)

{
  uint uVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  code *pcVar11;
  ulonglong uVar12;
  bool bVar13;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined4 local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  wchar_t *local_d8;
  undefined1 *local_d0;
  undefined1 *local_c8;
  undefined8 *local_c0;
  code *local_b8;
  code *local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  longlong local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  longlong lStack_80;
  undefined8 uStack_78;
  ulonglong local_70;
  longlong lStack_68;
  longlong local_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if ((char)param_2[4] == '\0') {
LAB_14070d5fb:
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[8] = 0;
    *(undefined1 *)(param_1 + 8) = 0xff;
  }
  else {
    lVar8 = FUN_14070d842(param_2);
    if (lVar8 != 0) {
      if (DAT_14cad3ae0 == 0) {
        local_c0 = &local_90;
        local_90 = FUN_141030f22;
        local_b0 = FUN_14081d0ea;
        local_b8 = FUN_142b4754c;
        local_c8 = &LAB_147a36475;
        local_d0 = &LAB_1463c0cc7;
        local_d8 = L"Engine";
        local_e0 = 0;
        local_e8 = 0x10000005;
        local_f0 = 8;
        local_f8 = 0x428;
        FUN_14081cfa3(L"/Script/Engine",L"Controller",&DAT_14cad3ae0,FUN_1463c0ca0);
      }
      lVar9 = *(longlong *)(lVar8 + 0x10);
      iVar7 = *(int *)(lVar9 + 0x38);
      if ((*(int *)(DAT_14cad3ae0 + 0x38) <= iVar7) &&
         (*(longlong *)(*(longlong *)(lVar9 + 0x30) + (longlong)*(int *)(DAT_14cad3ae0 + 0x38) * 8)
          == DAT_14cad3ae0 + 0x30)) {
        local_90 = (code *)0x0;
        FUN_14485c47a(&local_90,lVar8);
        param_1[3] = DAT_14c846508;
        uVar5 = DAT_14c846500._4_4_;
        uVar4 = (undefined4)DAT_14c846500;
        uVar3 = DAT_14c8464f8._4_4_;
        *(undefined4 *)(param_1 + 1) = (undefined4)DAT_14c8464f8;
        *(undefined4 *)((longlong)param_1 + 0xc) = uVar3;
        *(undefined4 *)(param_1 + 2) = uVar4;
        *(undefined4 *)((longlong)param_1 + 0x14) = uVar5;
        *param_1 = (longlong)local_90;
        *(undefined1 *)(param_1 + 8) = 3;
        goto LAB_14070d461;
      }
      if (DAT_14cac9ca8 == 0) {
        local_c0 = &local_90;
        local_90 = FUN_141030f22;
        local_b0 = FUN_14081d0ea;
        local_b8 = FUN_14081d0ea;
        local_c8 = &LAB_1478c0a72;
        local_d0 = &LAB_1417b2375;
        local_d8 = L"Engine";
        local_e0 = 0x1000000000;
        local_e8 = 0x10000004;
        local_f0 = 8;
        local_f8 = 0x390;
        FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
        lVar9 = *(longlong *)(lVar8 + 0x10);
        iVar7 = *(int *)(lVar9 + 0x38);
      }
      if ((*(int *)(DAT_14cac9ca8 + 0x38) <= iVar7) &&
         (*(longlong *)(*(longlong *)(lVar9 + 0x30) + (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8)
          == DAT_14cac9ca8 + 0x30)) {
        uVar1 = *(uint *)(lVar8 + 0xc);
        if ((int)uVar1 < DAT_14c9647dc) {
          lVar8 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
        }
        else {
          lVar8 = 0;
        }
        iVar7 = *(int *)(lVar8 + 0x10);
        if (*(int *)(lVar8 + 0x10) == 0) {
          LOCK();
          iVar7 = DAT_14c964868 + 1;
          UNLOCK();
          iVar10 = DAT_14c964868 + 1;
          bVar13 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar7;
          if (bVar13) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar10);
          }
          LOCK();
          iVar7 = *(int *)(lVar8 + 0x10);
          bVar13 = iVar7 == 0;
          if (bVar13) {
            *(int *)(lVar8 + 0x10) = iVar10;
            iVar7 = 0;
          }
          UNLOCK();
          if (bVar13) {
            iVar7 = iVar10;
          }
        }
        local_90 = (code *)CONCAT44(iVar7,uVar1);
        uStack_88 = 0;
        lStack_80 = 0;
        uStack_78._0_4_ = 0;
        if (param_4 == 0) {
          iVar7 = 0;
          uVar1 = (uint)uStack_78;
        }
        else {
          uVar1 = *(uint *)(param_4 + 0xc);
          uStack_78 = (ulonglong)uVar1;
          if ((int)uVar1 < DAT_14c9647dc) {
            lVar8 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
          }
          else {
            lVar8 = 0;
          }
          iVar7 = *(int *)(lVar8 + 0x10);
          if (*(int *)(lVar8 + 0x10) == 0) {
            LOCK();
            iVar7 = DAT_14c964868 + 1;
            UNLOCK();
            iVar10 = DAT_14c964868 + 1;
            bVar13 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar7;
            if (bVar13) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,iVar10);
            }
            LOCK();
            iVar7 = *(int *)(lVar8 + 0x10);
            bVar13 = iVar7 == 0;
            if (bVar13) {
              *(int *)(lVar8 + 0x10) = iVar10;
              iVar7 = 0;
            }
            UNLOCK();
            uVar1 = (uint)uStack_78;
            if (bVar13) {
              iVar7 = iVar10;
            }
          }
        }
        uStack_78._0_4_ = uVar1;
        uStack_78 = CONCAT44(iVar7,(uint)uStack_78);
        local_70 = 0;
        lStack_68 = 0;
        local_60 = *param_3;
        uStack_58 = (undefined4)param_3[1];
        FUN_14070d956(&local_90);
        param_1[6] = local_60;
        param_1[7] = CONCAT44(uStack_54,uStack_58);
        param_1[4] = local_70;
        param_1[5] = lStack_68;
        param_1[2] = lStack_80;
        param_1[3] = uStack_78;
        *(undefined4 *)param_1 = (undefined4)local_90;
        *(undefined4 *)((longlong)param_1 + 4) = local_90._4_4_;
        *(undefined4 *)(param_1 + 1) = (undefined4)uStack_88;
        *(undefined4 *)((longlong)param_1 + 0xc) = uStack_88._4_4_;
        *(undefined1 *)(param_1 + 8) = 2;
        goto LAB_14070d461;
      }
      lVar9 = FUN_140a41018();
      if ((*(int *)(lVar9 + 0x38) <= *(int *)(*(longlong *)(lVar8 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8
           ) == lVar9 + 0x30)) {
        local_90 = (code *)0x0;
        FUN_14485c47a(&local_90,lVar8);
        *param_1 = (longlong)local_90;
        *(undefined1 *)(param_1 + 8) = 4;
        goto LAB_14070d461;
      }
    }
    if ((char)param_2[4] == '\x04') {
      local_98 = param_2[2];
      local_a8 = (code *)*param_2;
      uStack_a0 = param_2[1];
    }
    else {
      FUN_1400b56fe(&local_90,param_2,4);
      uVar12 = local_70 & 0xff;
      if (uVar12 != 0) {
        local_98 = lStack_80;
        local_a8 = local_90;
        uStack_a0 = uStack_88;
      }
      pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)(byte)local_70 * 0x120));
      if (pcVar2 != (code *)0x0) {
        pcVar11 = (code *)&local_90;
        if (0x18 < (ushort)uStack_78) {
          pcVar11 = local_90;
        }
        (*pcVar2)(pcVar11);
      }
      if (0x18 < (ushort)uStack_78) {
        FUN_1400020a8(local_90);
      }
      if (uVar12 == 0) {
        cVar6 = FUN_14070def8(param_2,&local_90);
        if (cVar6 != '\0') {
          param_1[2] = lStack_80;
          *(undefined4 *)param_1 = (undefined4)local_90;
          *(undefined4 *)((longlong)param_1 + 4) = local_90._4_4_;
          *(undefined4 *)(param_1 + 1) = (undefined4)uStack_88;
          *(undefined4 *)((longlong)param_1 + 0xc) = uStack_88._4_4_;
          *(undefined1 *)(param_1 + 8) = 1;
          goto LAB_14070d461;
        }
        goto LAB_14070d5fb;
      }
    }
    param_1[2] = local_98;
    *(undefined4 *)param_1 = (undefined4)local_a8;
    *(undefined4 *)((longlong)param_1 + 4) = local_a8._4_4_;
    *(undefined4 *)(param_1 + 1) = (undefined4)uStack_a0;
    *(undefined4 *)((longlong)param_1 + 0xc) = uStack_a0._4_4_;
    *(undefined1 *)(param_1 + 8) = 0;
  }
LAB_14070d461:
  if ((local_50 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14070d842 FUN_14070d842 body=261 status=ok
// SIG undefined FUN_14070d842(void)

undefined8 FUN_14070d842(longlong param_1)

{
  code *pcVar1;
  uint *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 auStack_68 [40];
  uint local_40;
  int iStack_3c;
  ushort local_28;
  byte local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(char *)(param_1 + 0x20) == '\x06') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_68);
  }
  puVar2 = &local_40;
  FUN_1400b56fe(puVar2,param_1,6);
  if ((local_20 != 0) && (iStack_3c != 0)) {
    uVar3 = 0;
    if (((int)local_40 < 0) || (DAT_14c9647dc <= (int)local_40)) goto LAB_14070d8d3;
    puVar4 = (undefined8 *)
             ((ulonglong)((local_40 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_40 >> 0x10) * 8));
    if (((puVar4 != (undefined8 *)0x0) && (*(int *)(puVar4 + 2) == iStack_3c)) &&
       ((*(uint *)(puVar4 + 1) & 0x10200000) == 0)) {
      uVar3 = *puVar4;
      goto LAB_14070d8d3;
    }
  }
  uVar3 = 0;
LAB_14070d8d3:
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_20 * 0x120));
  if (pcVar1 != (code *)0x0) {
    if (0x18 < local_28) {
      puVar2 = (uint *)CONCAT44(iStack_3c,local_40);
    }
    (*pcVar1)(puVar2);
  }
  if (0x18 < local_28) {
    FUN_1400020a8(CONCAT44(iStack_3c,local_40));
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14070d956 FUN_14070d956 body=484 status=ok
// SIG undefined FUN_14070d956(void)

void FUN_14070d956(uint *param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  wchar_t *local_68;
  code *local_60;
  undefined1 *local_58;
  undefined8 *local_50;
  undefined1 *local_48;
  code *local_40;
  undefined8 local_30;
  uint uStack_28;
  uint uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1[1] == 0) {
LAB_14070da95:
    uVar3 = 0;
  }
  else {
    uVar1 = *param_1;
    uVar3 = 0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      plVar4 = (longlong *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((plVar4 == (longlong *)0x0) ||
         (((*(uint *)(plVar4 + 2) != param_1[1] || ((*(uint *)(plVar4 + 1) & 0x10200000) != 0)) ||
          (lVar2 = *plVar4, lVar2 == 0)))) goto LAB_14070da95;
      uVar3 = FUN_14069ce7c();
      uVar3 = FUN_144718840(lVar2,uVar3);
    }
  }
  FUN_14070dd1a(&local_30,uVar3);
  param_1[2] = (uint)local_30;
  param_1[3] = local_30._4_4_;
  param_1[4] = uStack_28;
  param_1[5] = uStack_24;
  if (param_1[7] != 0) {
    uVar1 = param_1[6];
    uVar3 = 0;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_14070da5c;
    plVar4 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar4 != (longlong *)0x0) &&
        ((*(uint *)(plVar4 + 2) == param_1[7] && ((*(uint *)(plVar4 + 1) & 0x10200000) == 0)))) &&
       (lVar2 = *plVar4, lVar2 != 0)) {
      if (DAT_14cb22240 == 0) {
        local_30 = FUN_1449e2820;
        local_40 = FUN_14081d0ea;
        local_48 = &LAB_1464376fa;
        local_58 = &LAB_147f28935;
        local_60 = FUN_146437c39;
        local_68 = L"Engine";
        local_70 = 0;
        local_78 = 0x10004001;
        local_80 = 8;
        local_88 = 0x28;
        local_50 = &local_30;
        FUN_14081cfa3(L"/Script/GbxAI",L"GbxTargeter",&DAT_14cb22240,&DAT_147f28934);
      }
      uVar3 = FUN_144718840(lVar2,DAT_14cb22240);
      goto LAB_14070da5c;
    }
  }
  uVar3 = 0;
LAB_14070da5c:
  FUN_14070db3c(&local_30,uVar3);
  param_1[8] = (uint)local_30;
  param_1[9] = local_30._4_4_;
  param_1[10] = uStack_28;
  param_1[0xb] = uStack_24;
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14070db3c FUN_14070db3c body=476 status=ok
// SIG undefined FUN_14070db3c(void)

uint * FUN_14070db3c(uint *param_1,longlong *param_2)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
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
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if ((param_2 != (longlong *)0x0) && (lVar4 = (**(code **)(*param_2 + 8))(param_2), lVar4 != 0)) {
    if (DAT_14c927740 == 0) {
      local_50 = &local_30;
      local_30 = FUN_1449e2820;
      local_40 = FUN_14081d0ea;
      local_48 = FUN_14081d0ea;
      local_58 = &LAB_146856450;
      local_60 = FUN_1427b121c;
      local_68 = L"Engine";
      local_70 = 0;
      local_78 = 0x10000021;
      local_80 = 8;
      local_88 = 0x28;
      FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
    }
    if ((*(int *)(DAT_14c927740 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14c927740 + 0x38) * 8) == DAT_14c927740 + 0x30)) {
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
      goto LAB_14070dbe9;
    }
  }
  *param_1 = 0;
  uVar3 = 0;
LAB_14070dbe9:
  param_1[1] = uVar3;
  cVar2 = FUN_140076fba(param_1,0);
  if (cVar2 == '\0') {
    *(longlong **)(param_1 + 2) = param_2;
  }
  if ((local_28 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14070dd1a FUN_14070dd1a body=476 status=ok
// SIG undefined FUN_14070dd1a(void)

uint * FUN_14070dd1a(uint *param_1,longlong *param_2)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
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
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if ((param_2 != (longlong *)0x0) && (lVar4 = (**(code **)(*param_2 + 8))(param_2), lVar4 != 0)) {
    if (DAT_14c927740 == 0) {
      local_50 = &local_30;
      local_30 = FUN_1449e2820;
      local_40 = FUN_14081d0ea;
      local_48 = FUN_14081d0ea;
      local_58 = &LAB_146856450;
      local_60 = FUN_1427b121c;
      local_68 = L"Engine";
      local_70 = 0;
      local_78 = 0x10000021;
      local_80 = 8;
      local_88 = 0x28;
      FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
    }
    if ((*(int *)(DAT_14c927740 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14c927740 + 0x38) * 8) == DAT_14c927740 + 0x30)) {
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
      goto LAB_14070ddc7;
    }
  }
  *param_1 = 0;
  uVar3 = 0;
LAB_14070ddc7:
  param_1[1] = uVar3;
  cVar2 = FUN_140076fba(param_1,0);
  if (cVar2 == '\0') {
    *(longlong **)(param_1 + 2) = param_2;
  }
  if ((local_28 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14070def8 FUN_14070def8 body=196 status=ok
// SIG undefined FUN_14070def8(void)

ulonglong FUN_14070def8(undefined4 *param_1,undefined4 *param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 unaff_RBX;
  undefined7 uVar6;
  ulonglong uVar5;
  undefined4 *puVar7;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ushort local_30;
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar6 = (undefined7)((ulonglong)unaff_RBX >> 8);
  if (*(char *)(param_1 + 8) == '\x05') {
    *(undefined8 *)(param_2 + 4) = *(undefined8 *)(param_1 + 4);
    uVar2 = param_1[1];
    uVar3 = param_1[2];
    uVar4 = param_1[3];
    *param_2 = *param_1;
    param_2[1] = uVar2;
    param_2[2] = uVar3;
    param_2[3] = uVar4;
    uVar5 = CONCAT71(uVar6,1);
  }
  else {
    puVar7 = &local_48;
    FUN_1400b56fe(puVar7,param_1,5);
    uVar5 = CONCAT71(uVar6,local_28 != 0);
    if (local_28 != 0) {
      *(undefined8 *)(param_2 + 4) = local_38;
      *param_2 = local_48;
      param_2[1] = uStack_44;
      param_2[2] = uStack_40;
      param_2[3] = uStack_3c;
    }
    pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_28 * 0x120));
    if (pcVar1 != (code *)0x0) {
      if (0x18 < local_30) {
        puVar7 = (undefined4 *)CONCAT44(uStack_44,local_48);
      }
      (*pcVar1)(puVar7);
    }
    if (0x18 < local_30) {
      FUN_1400020a8(CONCAT44(uStack_44,local_48));
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar5 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14070dfbe FUN_14070dfbe body=689 status=ok
// SIG undefined FUN_14070dfbe(void)

int * FUN_14070dfbe(longlong param_1,int *param_2,longlong param_3,char param_4)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  longlong *plVar15;
  
  if (param_4 == '\0') {
    iVar12 = DAT_14cb8daa0 + 1 + (uint)(DAT_14cb8daa0 == -1);
    DAT_14cb8daa0 = iVar12;
    *param_2 = iVar12;
    plVar15 = (longlong *)(param_1 + 0xb0);
    iVar14 = *(int *)(param_1 + 0xb8);
    *(uint *)(param_1 + 0xb8) = iVar14 + 1U;
    if (iVar14 + 1U <= *(uint *)(param_1 + 0xbc)) goto LAB_14070e081;
  }
  else {
    lVar9 = FUN_14070e69a(param_1);
    if ((lVar9 == 0) || (*(char *)(lVar9 + 0x178) != '\x03')) {
      *param_2 = 0;
      return param_2;
    }
    iVar12 = DAT_14cb8daa0 + 1 + (uint)(DAT_14cb8daa0 == -1);
    DAT_14cb8daa0 = iVar12;
    *param_2 = iVar12;
    plVar15 = (longlong *)(param_1 + 0xa0);
    iVar14 = *(int *)(param_1 + 0xa8);
    *(uint *)(param_1 + 0xa8) = iVar14 + 1U;
    if (iVar14 + 1U <= *(uint *)(param_1 + 0xac)) goto LAB_14070e081;
  }
  FUN_1410b90f0(plVar15);
LAB_14070e081:
  lVar2 = *plVar15;
  lVar11 = (longlong)iVar14 * 0x1b8;
  memset((void *)(lVar2 + lVar11),0,0x1b8);
  piVar1 = (int *)(lVar2 + lVar11);
  piVar1[6] = 0x10;
  FUN_14070e804(piVar1 + 10);
  lVar9 = lVar2 + lVar11;
  *(undefined8 *)(lVar9 + 0x1a0) = 0;
  *(undefined4 *)(lVar9 + 0x1a8) = 0;
  *(undefined1 *)(lVar9 + 0x1b0) = 0;
  *(undefined8 *)(lVar9 + 0x188) = 0;
  *(undefined8 *)(lVar9 + 400) = 0;
  *(undefined4 *)(lVar9 + 0x198) = 0;
  *piVar1 = iVar12;
  FUN_14070e270(lVar2 + lVar11 + 8,param_3);
  uVar5 = *(undefined4 *)(param_3 + 0x184);
  uVar6 = *(undefined4 *)(param_3 + 0x188);
  uVar7 = *(undefined4 *)(param_3 + 0x18c);
  *(undefined4 *)(lVar9 + 0x188) = *(undefined4 *)(param_3 + 0x180);
  *(undefined4 *)(lVar9 + 0x18c) = uVar5;
  *(undefined4 *)(lVar9 + 400) = uVar6;
  *(undefined4 *)(lVar9 + 0x194) = uVar7;
  *(undefined4 *)(lVar9 + 0x198) = *(undefined4 *)(param_3 + 400);
  FUN_14007b0d4((undefined8 *)(lVar9 + 0x1a0),param_3 + 0x198);
  lVar9 = FUN_140223847();
  if (*(int *)(lVar9 + 0x70) != *(int *)(lVar9 + 0x9c)) {
    lVar3 = *(longlong *)(param_3 + 0x18c);
    uVar4 = (uint)((ulonglong)lVar3 >> 0x10);
    uVar13 = (uint)lVar3 & 0xffff;
    lVar10 = lVar9 + 0xa0;
    if (*(longlong *)(lVar9 + 0xa8) != 0) {
      lVar10 = *(longlong *)(lVar9 + 0xa8);
    }
    iVar14 = *(int *)(lVar10 + (ulonglong)
                               (*(int *)(lVar9 + 0xb0) - 1U &
                               (int)((ulonglong)lVar3 >> 0x20) + ((uint)lVar3 << 0x10 | uVar13) +
                               (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar13 >> 4)) * 4);
    if (iVar14 != -1) {
      do {
        plVar15 = (longlong *)(*(longlong *)(lVar9 + 0x68) + (longlong)iVar14 * 0x14);
        if (*plVar15 == lVar3) {
          if (plVar15 + 1 != (longlong *)0x0 && plVar15 != (longlong *)0x0) {
            *(char *)(lVar2 + lVar11 + 0x1b0) = (char)plVar15[1];
          }
          break;
        }
        iVar14 = *(int *)((longlong)plVar15 + 0xc);
      } while (iVar14 != -1);
    }
  }
  if (param_4 != '\0') {
    if (((*(longlong *)(param_1 + 0x68) != 0) &&
        (cVar8 = FUN_144729dda(param_1 + 0x60), cVar8 != '\0')) &&
       (*(longlong **)(param_1 + 0x68) != (longlong *)0x0)) {
      (**(code **)(**(longlong **)(param_1 + 0x68) + 0x48))();
    }
    lVar9 = FUN_14070e69a(param_1);
    if ((lVar9 != 0) && ((*(byte *)(lVar9 + 99) & 8) == 0)) {
      FUN_140c7ce82(lVar9,1);
    }
  }
  FUN_1410b8cda(param_1);
  if (((*(longlong *)(param_1 + 0x68) != 0) &&
      (cVar8 = FUN_144729dda(param_1 + 0x60), cVar8 != '\0')) &&
     (*(longlong *)(param_1 + 0x68) != 0)) {
    FUN_1409b52ac();
  }
  return param_2;
}



// FUNCTION 14070e270 FUN_14070e270 body=74 status=ok
// SIG undefined FUN_14070e270(void)

undefined8 * FUN_14070e270(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  if ((param_1[1] != param_2[1]) || (*(int *)(param_1 + 2) != *(int *)(param_2 + 2))) {
    param_1[1] = param_2[1];
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
    param_1[3] = 0;
  }
  FUN_14070e2ba(param_1 + 4,param_2 + 4);
  return param_1;
}



// FUNCTION 14070e2ba FUN_14070e2ba body=638 status=ok
// SIG undefined FUN_14070e2ba(void)

longlong FUN_14070e2ba(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_2 + 0x10) == '\0') {
    *(undefined1 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  }
  FUN_14070e538(param_1 + 0x18,param_2 + 0x18);
  *(undefined2 *)(param_1 + 0xc0) = *(undefined2 *)(param_2 + 0xc0);
  *(undefined4 *)(param_1 + 200) = *(undefined4 *)(param_2 + 200);
  lVar1 = *(longlong *)(param_2 + 0xd0);
  if (*(longlong *)(param_1 + 0xd0) != lVar1) {
    *(undefined8 *)(param_1 + 0xe0) = 0;
  }
  *(longlong *)(param_1 + 0xd0) = lVar1;
  if (*(longlong *)(param_1 + 0xd8) != *(longlong *)(param_2 + 0xd8)) {
    *(undefined8 *)(param_1 + 0xe0) = 0;
  }
  uVar2 = FUN_14477b664();
  uVar2 = FUN_14477b664(uVar2);
  *(undefined8 *)(param_1 + 0xd8) = uVar2;
  *(undefined8 *)(param_1 + 0xe0) = *(undefined8 *)(param_2 + 0xe0);
  uVar2 = *(undefined8 *)(param_2 + 0xf0);
  *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(param_2 + 0xe8);
  *(undefined8 *)(param_1 + 0xf0) = uVar2;
  if ((*(longlong *)(param_1 + 0xf8) != *(longlong *)(param_2 + 0xf8)) ||
     (*(int *)(param_1 + 0x100) != *(int *)(param_2 + 0x100))) {
    *(longlong *)(param_1 + 0xf8) = *(longlong *)(param_2 + 0xf8);
    *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(param_2 + 0x100);
    *(undefined8 *)(param_1 + 0x108) = 0;
  }
  *(undefined4 *)(param_1 + 0x110) = *(undefined4 *)(param_2 + 0x110);
  lVar1 = *(longlong *)(param_2 + 0x118);
  if (*(longlong *)(param_1 + 0x118) != lVar1) {
    *(undefined8 *)(param_1 + 0x128) = 0;
  }
  *(longlong *)(param_1 + 0x118) = lVar1;
  if (*(longlong *)(param_1 + 0x120) != *(longlong *)(param_2 + 0x120)) {
    *(undefined8 *)(param_1 + 0x128) = 0;
  }
  uVar2 = FUN_14477b664();
  uVar2 = FUN_14477b664(uVar2);
  *(undefined8 *)(param_1 + 0x120) = uVar2;
  *(undefined8 *)(param_1 + 0x128) = *(undefined8 *)(param_2 + 0x128);
  lVar1 = *(longlong *)(param_2 + 0x130);
  if (*(longlong *)(param_1 + 0x130) != lVar1) {
    *(undefined8 *)(param_1 + 0x140) = 0;
  }
  *(longlong *)(param_1 + 0x130) = lVar1;
  if (*(longlong *)(param_1 + 0x138) != *(longlong *)(param_2 + 0x138)) {
    *(undefined8 *)(param_1 + 0x140) = 0;
  }
  uVar2 = FUN_14477b664();
  uVar2 = FUN_14477b664(uVar2);
  *(undefined8 *)(param_1 + 0x138) = uVar2;
  *(undefined8 *)(param_1 + 0x140) = *(undefined8 *)(param_2 + 0x140);
  lVar1 = *(longlong *)(param_2 + 0x148);
  if (*(longlong *)(param_1 + 0x148) != lVar1) {
    *(undefined8 *)(param_1 + 0x158) = 0;
  }
  *(longlong *)(param_1 + 0x148) = lVar1;
  if (*(longlong *)(param_1 + 0x150) != *(longlong *)(param_2 + 0x150)) {
    *(undefined8 *)(param_1 + 0x158) = 0;
  }
  uVar2 = FUN_14477b664();
  uVar2 = FUN_14477b664(uVar2);
  *(undefined8 *)(param_1 + 0x150) = uVar2;
  *(undefined8 *)(param_1 + 0x158) = *(undefined8 *)(param_2 + 0x158);
  return param_1;
}



// FUNCTION 14070e538 FUN_14070e538 body=354 status=ok
// SIG undefined FUN_14070e538(void)

longlong FUN_14070e538(longlong param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 0x10);
    _Src = *(void **)(param_2 + 8);
    *(int *)(param_1 + 0x10) = iVar1;
    if (iVar1 == 0 && *(int *)(param_1 + 0x14) == 0) {
      *(undefined4 *)(param_1 + 0x14) = 0;
    }
    else {
      FUN_1446dd670((undefined8 *)(param_1 + 8),iVar1);
      if (iVar1 != 0) {
        memcpy(*(void **)(param_1 + 8),_Src,(longlong)iVar1 * 2);
      }
    }
  }
  if ((*(longlong *)(param_1 + 0x20) != *(longlong *)(param_2 + 0x20)) ||
     (*(int *)(param_1 + 0x28) != *(int *)(param_2 + 0x28))) {
    *(longlong *)(param_1 + 0x20) = *(longlong *)(param_2 + 0x20);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  uVar2 = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x3d) = *(undefined8 *)(param_2 + 0x3d);
  *(undefined8 *)(param_1 + 0x38) = uVar2;
  if ((*(longlong *)(param_1 + 0x48) != *(longlong *)(param_2 + 0x48)) ||
     (*(int *)(param_1 + 0x50) != *(int *)(param_2 + 0x50))) {
    *(longlong *)(param_1 + 0x48) = *(longlong *)(param_2 + 0x48);
    *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  if ((*(longlong *)(param_1 + 0x60) != *(longlong *)(param_2 + 0x60)) ||
     (*(int *)(param_1 + 0x68) != *(int *)(param_2 + 0x68))) {
    *(longlong *)(param_1 + 0x60) = *(longlong *)(param_2 + 0x60);
    *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0x68);
    *(undefined8 *)(param_1 + 0x70) = 0;
  }
  *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_2 + 0x88);
  uVar5 = *(undefined4 *)(param_2 + 0x7c);
  uVar6 = *(undefined4 *)(param_2 + 0x80);
  uVar7 = *(undefined4 *)(param_2 + 0x84);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x78);
  *(undefined4 *)(param_1 + 0x7c) = uVar5;
  *(undefined4 *)(param_1 + 0x80) = uVar6;
  *(undefined4 *)(param_1 + 0x84) = uVar7;
  plVar3 = *(longlong **)(param_2 + 0x90);
  plVar4 = *(longlong **)(param_1 + 0x90);
  if (plVar4 != plVar3) {
    *(longlong **)(param_1 + 0x90) = plVar3;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
  }
  *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_2 + 0x98);
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_2 + 0xa0);
  return param_1;
}



// FUNCTION 14070e69a FUN_14070e69a body=360 status=ok
// SIG undefined FUN_14070e69a(void)

longlong FUN_14070e69a(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
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
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(longlong **)(param_1 + 0x68) != (longlong *)0x0) {
    if (*(int *)(param_1 + 100) != 0) {
      uVar1 = *(uint *)(param_1 + 0x60);
      lVar2 = 0;
      if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_14070e73f;
      lVar2 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      if ((lVar2 != 0) &&
         ((*(int *)(lVar2 + 0x10) == *(int *)(param_1 + 100) &&
          ((*(uint *)(lVar2 + 8) & 0x10200000) == 0)))) {
        lVar2 = (**(code **)(**(longlong **)(param_1 + 0x68) + 8))();
        if (lVar2 != 0) {
          if (DAT_14cac9ca8 == 0) {
            local_30 = &local_18;
            local_18 = FUN_141030f22;
            local_20 = FUN_14081d0ea;
            local_28 = FUN_14081d0ea;
            local_38 = &LAB_1478c0a72;
            local_40 = &LAB_1417b2375;
            local_48 = L"Engine";
            local_50 = 0x1000000000;
            local_58 = 0x10000004;
            local_60 = 8;
            local_68 = 0x390;
            FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
          }
          if ((*(int *)(DAT_14cac9ca8 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
               (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) == DAT_14cac9ca8 + 0x30))
          goto LAB_14070e73f;
        }
      }
    }
  }
  lVar2 = 0;
LAB_14070e73f:
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14070e804 FUN_14070e804 body=490 status=ok
// SIG undefined FUN_14070e804(void)

undefined8 * FUN_14070e804(undefined8 *param_1)

{
  longlong *plVar1;
  
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_14b023b20;
  param_1[3] = &PTR_FUN_14b023b40;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = &PTR_FUN_14b00be70;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0xf00000d0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *(undefined1 *)((longlong)param_1 + 0x5c) = 1;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0xf00000d0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0xf00000d0;
  param_1[0x11] = 0;
  *(undefined2 *)(param_1 + 0x12) = 0;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0;
  *(undefined2 *)(param_1 + 0x13) = 0;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 6;
  param_1[0x14] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
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
  }
  plVar1 = DAT_14c844840;
  param_1[0x15] = DAT_14c844840;
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
  *(undefined4 *)(param_1 + 0x16) = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  *(undefined2 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0xf00000d0;
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0x3f800000;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  return param_1;
}



// FUNCTION 14070e9ee FUN_14070e9ee body=204 status=ok
// SIG undefined FUN_14070e9ee(void)

uint * FUN_14070e9ee(uint *param_1,longlong *param_2)

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



// FUNCTION 14070eaba FUN_14070eaba body=329 status=ok
// SIG undefined FUN_14070eaba(void)

undefined4 * FUN_14070eaba(undefined4 *param_1,undefined8 *param_2)

{
  uint *puVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  char cVar6;
  uint uVar7;
  undefined *puVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  uint *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14070ec8e(&DAT_14ca804b8,local_48);
  puVar1 = (uint *)param_2[1];
  uVar9 = *(uint *)*param_2;
  *local_40 = uVar9;
  uVar7 = puVar1[1];
  uVar3 = puVar1[2];
  uVar4 = puVar1[3];
  local_40[2] = *puVar1;
  local_40[3] = uVar7;
  local_40[4] = uVar3;
  local_40[5] = uVar4;
  local_40[6] = 0xffffffff;
  local_4c = local_48[0];
  cVar6 = FUN_14070ec04(&DAT_14ca804b8,uVar9,local_40,&local_4c);
  uVar5 = local_4c;
  if (cVar6 == '\0') {
    uVar7 = DAT_14ca804c0 - DAT_14ca804ec;
    if (uVar7 < 4) {
      iVar11 = 1;
    }
    else {
      uVar10 = (ulonglong)(uVar7 & 0xfffffffe) + 0xf;
      lVar2 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar11 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar7 < 1) || (iVar11 <= DAT_14ca80500)) {
      uVar9 = DAT_14ca80500 - 1U & uVar9;
      local_40[7] = uVar9;
      puVar8 = DAT_14ca804f8;
      if (DAT_14ca804f8 == (undefined *)0x0) {
        puVar8 = &DAT_14ca804f0;
      }
      local_40[6] = *(uint *)(puVar8 + ((longlong)DAT_14ca80500 - 1U & (longlong)(int)uVar9) * 4);
      puVar8 = DAT_14ca804f8;
      if (DAT_14ca804f8 == (undefined *)0x0) {
        puVar8 = &DAT_14ca804f0;
      }
      *(undefined4 *)(puVar8 + ((longlong)DAT_14ca80500 - 1U & (longlong)(int)uVar9) * 4) = local_4c
      ;
    }
    else {
      DAT_14ca80500 = iVar11;
      FUN_14070ee74(&DAT_14ca804b8);
    }
  }
  *param_1 = uVar5;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14070ec04 FUN_14070ec04 body=137 status=ok
// SIG undefined FUN_14070ec04(void)

undefined8 FUN_14070ec04(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
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
        piVar1 = (int *)(*param_1 + (longlong)iVar7 * 0x20);
        if (*(int *)(*param_1 + (longlong)iVar7 * 0x20) == *param_3) {
          iVar2 = *param_3;
          iVar3 = param_3[1];
          iVar4 = param_3[2];
          iVar5 = param_3[3];
          *(undefined8 *)(piVar1 + 4) = *(undefined8 *)(param_3 + 4);
          *piVar1 = iVar2;
          piVar1[1] = iVar3;
          piVar1[2] = iVar4;
          piVar1[3] = iVar5;
          FUN_147409b56(iVar2,*param_4);
          *param_4 = iVar7;
          return 1;
        }
        iVar7 = piVar1[6];
      } while (iVar7 != -1);
    }
  }
  return 0;
}



// FUNCTION 14070ec8e FUN_14070ec8e body=485 status=ok
// SIG undefined FUN_14070ec8e(void)

int * FUN_14070ec8e(longlong *param_1,int *param_2)

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
      FUN_1447711aa(param_1,iVar11);
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
    iVar6 = *(int *)(*param_1 + 4 + lVar3 * 0x20);
    *(int *)(param_1 + 6) = iVar6;
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar6 * 0x20) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar3 * 0x20 + *param_1;
  return param_2;
}



// FUNCTION 14070ee74 FUN_14070ee74 body=628 status=ok
// SIG undefined FUN_14070ee74(void)

void FUN_14070ee74(longlong *param_1)

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
    if ((int)uVar7 < 1) goto LAB_14070eee6;
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
LAB_14070eee6:
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
      uVar15 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar6 + lVar13);
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



// FUNCTION 14070f0e8 FUN_14070f0e8 body=155 status=ok
// SIG undefined FUN_14070f0e8(void)

undefined8 FUN_14070f0e8(longlong *param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  uint uVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = (uint)((ulonglong)param_2 >> 0x10);
    uVar4 = (uint)param_2 & 0xffff;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 +
                    ((longlong)
                     (int)(((uint)param_2 << 0x10 | uVar4) + (int)((ulonglong)param_2 >> 0x20) +
                           (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar4 >> 4)) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x14) == param_2) {
          FUN_14070f184(param_1,iVar1);
          return 1;
        }
        iVar1 = *(int *)(*param_1 + (longlong)iVar1 * 0x14 + 0xc);
      } while (iVar1 != -1);
    }
  }
  return 0;
}



// FUNCTION 14070f184 FUN_14070f184 body=91 status=ok
// SIG undefined FUN_14070f184(void)

void FUN_14070f184(longlong *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  int *piVar4;
  longlong lVar5;
  
  plVar3 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar3 = (longlong *)param_1[8];
  }
  lVar1 = *param_1 + (longlong)param_2 * 0x14;
  lVar5 = (longlong)*(int *)(lVar1 + 0x10);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(*param_1 + (longlong)iVar2 * 0x14 + 0xc);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + 0xc);
  FUN_14070f1e0(param_1,param_2,1);
  return;
}



// FUNCTION 14070f1e0 FUN_14070f1e0 body=136 status=ok
// SIG undefined FUN_14070f1e0(void)

void FUN_14070f1e0(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)(lVar2 + (longlong)param_2 * 0x14 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x14) = param_2;
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
      puVar7 = puVar7 + 5;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14070f276 FUN_14070f276 body=72 status=ok
// SIG undefined FUN_14070f276(void)

undefined8 * FUN_14070f276(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b7bcd40;
  if (param_1[0x101] != 0) {
    FUN_1400020a8();
  }
  FUN_140d79878(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14070f2c4 FUN_14070f2c4 body=504 status=ok
// SIG undefined FUN_14070f2c4(void)

void FUN_14070f2c4(longlong *param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar3 = (**(code **)(*param_1 + 0x310))(param_1,0);
  if (lVar3 == 0) goto LAB_14070f420;
  FUN_14070f4f8(param_1,&local_50,lVar3);
  if (local_50 != 0) {
    cVar2 = *(char *)(param_3 + 0x2a);
    if (cVar2 == -1) {
LAB_14070f495:
      plVar7 = (longlong *)0x0;
    }
    else {
      plVar5 = *(longlong **)(param_2 + 0x30);
      if (plVar5 == (longlong *)0x0) {
        FUN_14070f2c4(param_1,param_2,param_2);
        plVar5 = *(longlong **)(param_2 + 0x30);
        if (plVar5 == (longlong *)0x0) goto LAB_14070f495;
      }
      lVar3 = (**(code **)(*plVar5 + 8))(plVar5);
      lVar4 = FUN_14060ed7a();
      if ((lVar4 == 0) || (*(int *)(lVar3 + 0x38) < *(int *)(lVar4 + 0x38))) goto LAB_14070f495;
      plVar7 = (longlong *)0x0;
      if (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
          lVar4 + 0x30) {
        plVar7 = plVar5;
      }
    }
    plVar5 = *(longlong **)(param_3 + 0x30);
    if (plVar5 == (longlong *)0x0) {
      plVar5 = (longlong *)FUN_14012ad82(local_50);
      *(longlong **)(param_3 + 0x30) = plVar5;
      if (*(int *)(param_3 + 0x40) != *(int *)(param_3 + 0x44)) {
LAB_14070f396:
        if (cVar2 == -1) {
          if ((param_3 != 0) && (*(longlong *)(param_3 + 0x30) != 0)) {
            FUN_1407d81de(*(longlong *)(param_3 + 0x30) + 8,param_3);
          }
        }
        else {
          if (plVar5 != (longlong *)0x0) {
            lVar3 = (**(code **)(*plVar5 + 8))(plVar5);
            lVar4 = FUN_14070f4be();
            if (((lVar4 != 0) && (*(int *)(lVar4 + 0x38) <= *(int *)(lVar3 + 0x38))) &&
               (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
                lVar4 + 0x30)) {
              plVar5[3] = (longlong)plVar7;
            }
          }
          FUN_1400f0d6e(param_1,param_3,0);
        }
        FUN_144837e54(param_3,0);
        uVar6 = (**(code **)(*plVar5 + 8))(plVar5);
        FUN_1446e7478(param_3 + 0x48,plVar5,uVar6,1);
        *(undefined4 *)(param_3 + 0x40) = *(undefined4 *)(param_3 + 0x44);
      }
    }
    else if (*(int *)(param_3 + 0x40) != *(int *)(param_3 + 0x44)) {
      FUN_14573d6bc(local_50,plVar5);
      goto LAB_14070f396;
    }
  }
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_48 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar1 = (int *)((longlong)local_48 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_48 + 0x10))(local_48);
      }
    }
  }
LAB_14070f420:
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14070f4be FUN_14070f4be body=57 status=ok
// SIG undefined FUN_14070f4be(void)

void FUN_14070f4be(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6c6d0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6c6d0 = FUN_140002ddd(FUN_146531f0f,uVar1,L"MissionObjectiveDef");
  }
  return;
}



// FUNCTION 14070f4f8 FUN_14070f4f8 body=351 status=ok
// SIG undefined FUN_14070f4f8(void)

longlong * FUN_14070f4f8(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_3 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
  }
  if ((longlong)*(int *)(param_1 + 0x568) != 0) {
    plVar4 = *(longlong **)(param_1 + 0x560);
    lVar5 = (longlong)*(int *)(param_1 + 0x568) << 4;
    do {
      lVar3 = FUN_140c67760(*plVar4);
      if (lVar3 == param_3) {
        if (plVar4 != (longlong *)0x0) {
          lVar5 = *plVar4;
          *param_2 = lVar5;
          lVar3 = plVar4[1];
          param_2[1] = lVar3;
          if (lVar3 != 0) {
            LOCK();
            *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
            UNLOCK();
            lVar5 = *param_2;
          }
          if (lVar5 != 0) goto LAB_14070f578;
          plVar4 = (longlong *)param_2[1];
          goto LAB_14070f5c2;
        }
        break;
      }
      plVar4 = plVar4 + 2;
      lVar5 = lVar5 + -0x10;
    } while (lVar5 != 0);
  }
  param_2[1] = 0;
  plVar4 = (longlong *)0x0;
LAB_14070f5c2:
  FUN_14655859c(param_1,&local_40,param_3);
  plVar1 = local_38;
  *param_2 = local_40;
  local_40 = 0;
  if (local_38 != plVar4) {
    local_38 = (longlong *)0x0;
    param_2[1] = (longlong)plVar1;
    if (plVar4 == (longlong *)0x0) goto LAB_14070f578;
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
  plVar4 = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_38 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
LAB_14070f578:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14070f658 FUN_14070f658 body=2180 status=ok
// SIG undefined FUN_14070f658(void)

longlong FUN_14070f658(longlong param_1,undefined8 param_2,longlong param_3)

{
  int *piVar1;
  char cVar2;
  byte *pbVar3;
  char *_Str;
  size_t sVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong *plVar15;
  undefined2 *puVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  char *pcVar20;
  longlong lVar21;
  undefined1 auStack_118 [32];
  wchar_t *local_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  wchar_t *local_e0;
  undefined4 local_d8;
  code *local_d0;
  undefined1 *local_c8;
  undefined2 **local_c0;
  byte *local_b8;
  longlong local_b0;
  ulonglong local_a8;
  char *local_a0;
  int local_98;
  undefined1 local_94;
  undefined2 *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  longlong local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (param_3 == 0) {
    lVar5 = 0;
    goto LAB_14070fd53;
  }
  cVar2 = *(char *)(param_3 + 0x2a);
  lVar5 = 0;
  if (cVar2 != -1) {
    if (((cVar2 == '\0') || (cVar2 == '\x02')) || (cVar2 == '\x03')) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_118);
    }
    goto LAB_14070fd53;
  }
  local_b8 = *(byte **)(param_3 + 0x48);
  plVar12 = *(longlong **)(param_3 + 0x50);
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
    UNLOCK();
  }
  local_b0 = param_1;
  do {
    plVar13 = plVar12;
    if (param_3 == 0) break;
    local_98 = DAT_14cb86b50;
    local_a0 = DAT_14cb86b48;
    FUN_1448075d0(&local_88,&local_a0);
    lVar5 = *(longlong *)(param_3 + 0x58);
    puVar10 = &DAT_14c9a1308;
    if (lVar5 != 0) {
      do {
        pbVar3 = *(byte **)(lVar5 + 0x18);
        puVar10 = &DAT_14c9a1308;
        if (pbVar3 != (byte *)0x0) {
          plVar13 = &DAT_14c9a1288;
          if ((*pbVar3 & 2) != 0) {
            plVar13 = (longlong *)(*(longlong *)(pbVar3 + 8) + 0x18);
          }
          puVar10 = &DAT_14c9a1308;
          if ((int)plVar13[2] != *(int *)((longlong)plVar13 + 0x3c)) {
            plVar14 = plVar13 + 8;
            if ((longlong *)plVar13[9] != (longlong *)0x0) {
              plVar14 = (longlong *)plVar13[9];
            }
            iVar9 = *(int *)((longlong)plVar14 +
                            (ulonglong)((int)plVar13[10] - 1U & (uint)local_88) * 4);
            puVar10 = &DAT_14c9a1308;
            if (iVar9 != -1) {
              do {
                lVar19 = *plVar13 + (longlong)iVar9 * 0x40;
                if (*(uint *)(*plVar13 + (longlong)iVar9 * 0x40) == (uint)local_88) {
                  puVar10 = &DAT_14c9a1308;
                  if (lVar19 == 0) goto LAB_14070f7c5;
                  puVar11 = (undefined8 *)(lVar19 + 0x28);
                  puVar10 = &DAT_14c9a1308;
                  if ((puVar11 == (undefined8 *)0x0) ||
                     (((byte *)*puVar11 != (byte *)0x0 &&
                      (puVar10 = puVar11, (*(byte *)*puVar11 & 0x40) == 0)))) goto LAB_14070f7c5;
                  break;
                }
                iVar9 = *(int *)(lVar19 + 0x38);
              } while (iVar9 != -1);
              puVar10 = &DAT_14c9a1308;
            }
          }
        }
LAB_14070f7c5:
        pbVar3 = (byte *)*puVar10;
        if (((pbVar3 != (byte *)0x0) && ((*pbVar3 & 3) == 1)) && (*(longlong *)(pbVar3 + 8) != 0)) {
          puVar10 = (undefined8 *)(lVar5 + 0x18);
          goto LAB_14070f7fa;
        }
        lVar5 = *(longlong *)(lVar5 + 0x28);
      } while (lVar5 != 0);
      puVar10 = &DAT_14c9a1308;
    }
LAB_14070f7fa:
    pbVar3 = (byte *)*puVar10;
    plVar13 = (longlong *)puVar10[1];
    if (plVar13 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
      UNLOCK();
    }
    if (local_70 != 0) {
      FUN_1400020a8();
    }
    if ((pbVar3 == (byte *)0x0) || ((*pbVar3 & 3) == 0)) {
      lVar5 = *(longlong *)(param_3 + 0x58);
      puVar10 = &DAT_14c9a1308;
      if (lVar5 != 0) {
        do {
          pbVar3 = *(byte **)(lVar5 + 0x18);
          puVar10 = &DAT_14c9a1308;
          if (pbVar3 != (byte *)0x0) {
            plVar14 = &DAT_14c9a1288;
            if ((*pbVar3 & 2) != 0) {
              plVar14 = (longlong *)(*(longlong *)(pbVar3 + 8) + 0x18);
            }
            puVar10 = &DAT_14c9a1308;
            if ((int)plVar14[2] != *(int *)((longlong)plVar14 + 0x3c)) {
              plVar15 = plVar14 + 8;
              if ((longlong *)plVar14[9] != (longlong *)0x0) {
                plVar15 = (longlong *)plVar14[9];
              }
              iVar9 = *(int *)((longlong)plVar15 +
                              (ulonglong)((int)plVar14[10] - 1U & DAT_14cb86db0) * 4);
              puVar10 = &DAT_14c9a1308;
              if (iVar9 != -1) {
                do {
                  lVar19 = *plVar14 + (longlong)iVar9 * 0x40;
                  if (*(uint *)(*plVar14 + (longlong)iVar9 * 0x40) == DAT_14cb86db0) {
                    puVar10 = &DAT_14c9a1308;
                    if (lVar19 == 0) goto LAB_14070f905;
                    puVar11 = (undefined8 *)(lVar19 + 0x28);
                    puVar10 = &DAT_14c9a1308;
                    if ((puVar11 == (undefined8 *)0x0) ||
                       (((byte *)*puVar11 != (byte *)0x0 &&
                        (puVar10 = puVar11, (*(byte *)*puVar11 & 0x40) == 0)))) goto LAB_14070f905;
                    break;
                  }
                  iVar9 = *(int *)(lVar19 + 0x38);
                } while (iVar9 != -1);
                puVar10 = &DAT_14c9a1308;
              }
            }
          }
LAB_14070f905:
          pbVar3 = (byte *)*puVar10;
          if (((pbVar3 != (byte *)0x0) && ((*pbVar3 & 3) == 1)) && (*(longlong *)(pbVar3 + 8) != 0))
          {
            puVar10 = (undefined8 *)(lVar5 + 0x18);
            goto LAB_14070f93a;
          }
          lVar5 = *(longlong *)(lVar5 + 0x28);
        } while (lVar5 != 0);
        puVar10 = &DAT_14c9a1308;
      }
LAB_14070f93a:
      pbVar3 = (byte *)*puVar10;
      plVar14 = (longlong *)puVar10[1];
      if (plVar14 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
        UNLOCK();
      }
      if (plVar13 != (longlong *)0x0) {
        LOCK();
        plVar15 = plVar13 + 1;
        *(int *)plVar15 = (int)*plVar15 + -1;
        UNLOCK();
        if ((int)*plVar15 == 0) {
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
      puVar10 = &DAT_14c9a1308;
      if (pbVar3 != (byte *)0x0) {
        plVar13 = &DAT_14c9a1288;
        if ((*pbVar3 & 2) != 0) {
          plVar13 = (longlong *)(*(longlong *)(pbVar3 + 8) + 0x18);
        }
        puVar10 = &DAT_14c9a1308;
        if ((int)plVar13[2] != *(int *)((longlong)plVar13 + 0x3c)) {
          plVar15 = plVar13 + 8;
          if ((longlong *)plVar13[9] != (longlong *)0x0) {
            plVar15 = (longlong *)plVar13[9];
          }
          iVar9 = *(int *)((longlong)plVar15 +
                          (ulonglong)((int)plVar13[10] - 1U & DAT_14cb86db0) * 4);
          puVar10 = &DAT_14c9a1308;
          if (iVar9 != -1) {
            do {
              lVar5 = *plVar13 + (longlong)iVar9 * 0x40;
              if (*(uint *)(*plVar13 + (longlong)iVar9 * 0x40) == DAT_14cb86db0) {
                puVar10 = &DAT_14c9a1308;
                if (lVar5 == 0) goto LAB_14070f9f4;
                puVar11 = (undefined8 *)(lVar5 + 0x28);
                puVar10 = &DAT_14c9a1308;
                if ((puVar11 == (undefined8 *)0x0) ||
                   (((byte *)*puVar11 != (byte *)0x0 &&
                    (puVar10 = puVar11, (*(byte *)*puVar11 & 0x40) == 0)))) goto LAB_14070f9f4;
                break;
              }
              iVar9 = *(int *)(lVar5 + 0x38);
            } while (iVar9 != -1);
            puVar10 = &DAT_14c9a1308;
          }
        }
      }
LAB_14070f9f4:
      pbVar3 = (byte *)*puVar10;
      if ((pbVar3 == (byte *)0x0) || ((*pbVar3 & 3) != 1)) {
        uVar6 = 0;
      }
      else {
        uVar6 = *(undefined8 *)(pbVar3 + 8);
      }
      local_88 = (undefined2 *)0x0;
      uStack_80 = 0;
      local_78 = 0;
      local_70 = 0;
      uStack_68 = 0;
      FUN_1446ddda2(&local_88,uVar6,0);
      iVar9 = 3;
      if ((((uint)local_88 != 0) && (local_88._4_4_ != 0)) && ((uint)local_88 != DAT_14c948000)) {
        param_3 = FUN_1400e3c00(local_b0,&local_88);
        iVar9 = 0;
      }
      plVar13 = plVar12;
      pbVar3 = local_b8;
      if (local_70 != 0) {
        FUN_1400020a8();
        pbVar3 = local_b8;
      }
    }
    else {
      if (plVar13 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
        UNLOCK();
      }
      iVar9 = 3;
      plVar14 = plVar13;
      if (plVar12 != (longlong *)0x0) {
        LOCK();
        plVar15 = plVar12 + 1;
        *(int *)plVar15 = (int)*plVar15 + -1;
        UNLOCK();
        if ((int)*plVar15 == 0) {
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
    }
    local_b8 = pbVar3;
    if (plVar14 != (longlong *)0x0) {
      LOCK();
      plVar12 = plVar14 + 1;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)*plVar12 == 0) {
        (**(code **)*plVar14)(plVar14);
        LOCK();
        piVar1 = (int *)((longlong)plVar14 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar14 + 0x10))(plVar14);
        }
      }
    }
    plVar12 = plVar13;
  } while (iVar9 == 0);
  local_98 = DAT_14cb86b50;
  local_a0 = DAT_14cb86b48;
  FUN_1448075d0(&local_88);
  if (local_b8 != (byte *)0x0) {
    if ((*local_b8 & 2) == 0) {
      plVar12 = &DAT_14c9a1288;
    }
    else {
      plVar12 = (longlong *)(*(longlong *)(local_b8 + 8) + 0x18);
    }
    if ((int)plVar12[2] != *(int *)((longlong)plVar12 + 0x3c)) {
      plVar14 = plVar12 + 8;
      if ((longlong *)plVar12[9] != (longlong *)0x0) {
        plVar14 = (longlong *)plVar12[9];
      }
      iVar9 = *(int *)((longlong)plVar14 + (ulonglong)((int)plVar12[10] - 1U & (uint)local_88) * 4);
      if (iVar9 != -1) {
        do {
          lVar5 = *plVar12 + (longlong)iVar9 * 0x40;
          if (*(uint *)(*plVar12 + (longlong)iVar9 * 0x40) == (uint)local_88) {
            if (((lVar5 != 0) &&
                (puVar10 = (undefined8 *)(lVar5 + 0x28), puVar10 != (undefined8 *)0x0)) &&
               (((byte *)*puVar10 != (byte *)0x0 && ((*(byte *)*puVar10 & 0x40) == 0))))
            goto LAB_14070fc0a;
            break;
          }
          iVar9 = *(int *)(lVar5 + 0x38);
        } while (iVar9 != -1);
      }
    }
  }
  puVar10 = &DAT_14c9a1308;
LAB_14070fc0a:
  pbVar3 = (byte *)*puVar10;
  if (((pbVar3 == (byte *)0x0) || ((*pbVar3 & 3) != 1)) ||
     (_Str = *(char **)(pbVar3 + 8), _Str == (char *)0x0)) {
LAB_14070fc12:
    local_a8 = 0;
    uVar17 = 0;
  }
  else {
    sVar4 = strlen(_Str);
    iVar9 = (int)sVar4;
    if (iVar9 == 0) goto LAB_14070fc12;
    lVar5 = (longlong)iVar9;
    pcVar20 = _Str + lVar5 + -1;
    uVar8 = 0;
    if (pcVar20 < _Str) {
      lVar19 = 0;
    }
    else {
      do {
        if (9 < (byte)(*pcVar20 - 0x30U)) break;
        uVar8 = uVar8 + 1;
        pcVar20 = pcVar20 + -1;
      } while (_Str <= pcVar20);
      lVar19 = 0;
      if ((((uVar8 != 0) && ((int)uVar8 < iVar9)) && (lVar19 = 0, uVar8 < 0xb)) &&
         (lVar21 = -(ulonglong)uVar8, _Str[lVar21 + lVar5 + -1] == '_')) {
        if ((uVar8 == 1) || (_Str[lVar21 + lVar5] != '0')) {
          lVar18 = 0;
          do {
            lVar19 = (longlong)_Str[lVar21 + lVar5] + lVar18 * 10;
            lVar18 = lVar19 + -0x30;
            lVar21 = lVar21 + 1;
          } while (lVar21 != 0);
          if (lVar18 < 0x7fffffff) {
            iVar9 = ~uVar8 + iVar9;
            lVar19 = lVar19 + -0x2f;
            goto LAB_14070fc74;
          }
        }
        lVar19 = 0;
      }
LAB_14070fc74:
      if (iVar9 == 0) goto LAB_14070fc12;
    }
    local_94 = 0;
    local_a0 = _Str;
    local_98 = iVar9;
    uVar8 = FUN_14001a6c0(&local_a0,1);
    uVar17 = lVar19 << 0x20;
    local_a8 = (ulonglong)uVar8;
  }
  local_a8 = local_a8 | uVar17;
  if (local_70 != 0) {
    FUN_1400020a8();
  }
  FUN_1400021e4(&local_a8,&local_88);
  puVar16 = local_88;
  if ((int)uStack_80 == 0) {
    puVar16 = &DAT_149dfb77a;
  }
  if (DAT_14c948fa0 == 0) {
    local_90 = &DAT_1427db2a2;
    lVar5 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
    DAT_14c948fa0 = lVar5;
    FUN_1446f470e(&local_a0,L"ScriptStruct",1);
    local_c8 = &LAB_1468915ce;
    local_d0 = FUN_1427dc742;
    local_e0 = L"Engine";
    local_d8 = 199;
    local_e8 = 0x10;
    local_f0 = 0x10000020;
    local_f8 = (wchar_t *)CONCAT44(local_f8._4_4_,8);
    local_c0 = &local_90;
    FUN_14574b4b2(lVar5);
    DAT_14c948fa0 = lVar5;
    uVar6 = FUN_1446f8646();
    lVar5 = DAT_14c948fa0;
    uVar7 = FUN_1449e2fb2();
    local_f8 = L"ScriptStruct";
    FUN_14574b446(uVar7,lVar5,uVar6,L"/Script/CoreUObject");
  }
  local_f8 = (wchar_t *)0x0;
  lVar5 = FUN_140277cc4(DAT_14c948fa0,puVar16,0,0);
  if (local_88 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (lVar5 == 0) {
    lVar5 = FUN_14012b3c6(local_b0 + 0x3d0);
  }
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
LAB_14070fd53:
  if ((local_60 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar5;
}



// FUNCTION 14070ff00 FUN_14070ff00 body=179 status=ok
// SIG undefined FUN_14070ff00(void)

void FUN_14070ff00(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x108) = 0;
  if (*(int *)(param_1 + 0x10c) != 0) {
    FUN_1403ab89a(param_1 + 0x100,0);
  }
  *(undefined4 *)(param_1 + 0xf8) = 0;
  if (*(int *)(param_1 + 0xfc) != 0) {
    FUN_140710002(param_1 + 0xf0,0);
  }
  *(undefined8 *)(param_1 + 0x110) = 0;
  if (*(longlong *)(param_1 + 0x118) != 0) {
    (**(code **)(**(longlong **)(param_1 + 0x120) + 0x2f0))
              (*(longlong **)(param_1 + 0x120),*(longlong *)(param_1 + 0x118),1);
    FUN_1400020a8(*(undefined8 *)(param_1 + 0x118));
    *(undefined8 *)(param_1 + 0x118) = 0;
  }
  *(undefined8 *)(param_1 + 0x120) = 0;
  FUN_14070ffb4(param_1);
  return;
}



// FUNCTION 14070ffb4 FUN_14070ffb4 body=77 status=ok
// SIG undefined FUN_14070ffb4(void)

void FUN_14070ffb4(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    FUN_1400020a8();
  }
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  if (*(int *)(param_1 + 0x6c) != 0) {
    FUN_144893a1c(param_1 + 0x60,0);
  }
  switchD_143c3d4dc::caseD_1f(param_1);
  return;
}



// FUNCTION 140710002 FUN_140710002 body=207 status=ok
// SIG undefined FUN_140710002(void)

void FUN_140710002(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    uVar1 = (ulonglong)param_2 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (param_2 < 0x800) {
          uVar1 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[param_2]];
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
    if ((int)param_2 <= (int)(uVar1 >> 4)) {
      uVar2 = uVar1 >> 4 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,8);
  }
  return;
}



// FUNCTION 1407100e0 FUN_1407100e0 body=31 status=ok
// SIG undefined FUN_1407100e0(void)

undefined8 FUN_1407100e0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140710112 FUN_140710112 body=805 status=ok
// SIG undefined FUN_140710112(void)

void FUN_140710112(longlong param_1,double *param_2)

{
  code *pcVar1;
  ulonglong uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  byte *pbVar9;
  ulonglong *puVar10;
  byte *pbVar11;
  PSRWLOCK SRWLock;
  ulonglong uVar12;
  float fVar13;
  undefined1 auStack_88 [32];
  ulonglong *local_68;
  undefined8 uStack_60;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68 = (ulonglong *)0x0;
  uStack_60 = 0;
  fVar13 = (float)*param_2;
  if (*(float *)(param_1 + 0x324) <= fVar13 && fVar13 != *(float *)(param_1 + 0x324)) {
    *(float *)(param_1 + 0x324) = fVar13;
    lVar7 = (longlong)*(int *)(param_2 + 2);
    if (0 < lVar7) {
      lVar5 = *(longlong *)(param_1 + 0xb0);
      if (lVar5 == 0) {
        lVar5 = FUN_1448abda6(param_1);
        lVar7 = (longlong)*(int *)(param_2 + 2);
        if (lVar7 == 0) goto LAB_140710410;
      }
      pbVar9 = (byte *)param_2[1];
      pbVar11 = pbVar9 + lVar7 * 0x98;
      lVar7 = *(longlong *)(lVar5 + 0x260);
      do {
        if (((*pbVar9 & 1) != 0) && (uVar12 = *(ulonglong *)(pbVar9 + 8), uVar12 != 0)) {
          SRWLock = (PSRWLOCK)0x0;
          if (DAT_14c992a90 != '\0') {
            SRWLock = (PSRWLOCK)(lVar7 + 0x280);
          }
          if (SRWLock != (PSRWLOCK)0x0) {
            AcquireSRWLockShared(SRWLock);
          }
          if (*(int *)(lVar7 + 0x2b0) != *(int *)(lVar7 + 0x2dc)) {
            uVar3 = ((uint)(uVar12 >> 0x14) & 0xffff ^ (uint)(uVar12 >> 4)) * -0x7a143595;
            uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
            lVar5 = *(longlong *)(lVar7 + 0x2e8);
            if (*(longlong *)(lVar7 + 0x2e8) == 0) {
              lVar5 = lVar7 + 0x2e0;
            }
            iVar4 = *(int *)(lVar5 + (ulonglong)
                                     (*(int *)(lVar7 + 0x2f0) - 1U & (uVar3 >> 0x10 ^ uVar3)) * 4);
            if (iVar4 != -1) {
              do {
                puVar10 = (ulonglong *)(*(longlong *)(lVar7 + 0x2a8) + (longlong)iVar4 * 0x18);
                if (*puVar10 == uVar12) {
                  if (puVar10 != (ulonglong *)0x0) {
                    uVar12 = 0;
                    if (puVar10 + 1 != (ulonglong *)0x0) {
                      uVar12 = puVar10[1];
                    }
                    goto LAB_140710271;
                  }
                  break;
                }
                iVar4 = (int)puVar10[2];
              } while (iVar4 != -1);
            }
          }
          uVar12 = 0;
LAB_140710271:
          if (SRWLock != (PSRWLOCK)0x0) {
            ReleaseSRWLockShared(SRWLock);
          }
          uVar2 = uStack_60;
          if (uVar12 != 0) {
            lVar5 = (longlong)(int)uStack_60;
            uVar3 = (int)uStack_60 + 1;
            uStack_60 = CONCAT44(uStack_60._4_4_,uVar3);
            if (uStack_60._4_4_ < uVar3) {
              FUN_1417960de(&local_68,uVar2 & 0xffffffff);
            }
            puVar10 = local_68 + lVar5 * 0xf;
            FUN_143627438(puVar10,pbVar9);
            if (DAT_14c950c29 == 1) {
              FUN_1456cec3c(uVar12);
            }
            *puVar10 = uVar12;
          }
        }
        pbVar9 = pbVar9 + 0x98;
      } while (pbVar9 != pbVar11);
      if ((longlong)(int)uStack_60 != 0) {
        lVar7 = (longlong)(int)uStack_60 * 0x78;
        puVar10 = local_68;
        do {
          uVar12 = *puVar10;
          if (uVar12 != 0) {
            if (DAT_14c950c29 == 1) {
              FUN_1456cec3c(uVar12);
            }
            if ((DAT_14c950c29 & 1) != 0) {
              FUN_1456cec3c(uVar12);
            }
            local_50 = uVar12;
            if ((DAT_14c950c29 & 1) != 0) {
              FUN_1456cec3c(uVar12);
            }
            if ((DAT_14c950c29 & 1) != 0) {
              FUN_1456cec3c(uVar12);
            }
            uVar3 = ((uint)(uVar12 >> 0x14) & 0xffff ^ (uint)(uVar12 >> 4)) * -0x7a143595;
            uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
            iVar4 = FUN_14075de48((longlong *)(param_1 + 0x230),uVar3 >> 0x10 ^ uVar3,&local_50);
            lVar5 = (longlong)iVar4 * 0x60 + *(longlong *)(param_1 + 0x230);
            if (lVar5 != 0 && iVar4 != -1) {
              pcVar1 = *(code **)(lVar5 + 0x10);
              plVar8 = (longlong *)(lVar5 + 0x30);
              if (*(longlong **)(lVar5 + 0x20) != (longlong *)0x0) {
                plVar8 = *(longlong **)(lVar5 + 0x20);
              }
              uVar6 = (**(code **)(*plVar8 + 8))();
              (*pcVar1)(uVar6,puVar10);
            }
          }
          puVar10 = puVar10 + 0xf;
          lVar7 = lVar7 + -0x78;
        } while (lVar7 != 0);
      }
      if (local_68 != (ulonglong *)0x0) {
        FUN_1400020a8(local_68);
      }
    }
  }
LAB_140710410:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140710438 FUN_140710438 body=93 status=ok
// SIG undefined FUN_140710438(void)

void FUN_140710438(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  FUN_140710592();
  lVar1 = param_1;
  while( true ) {
    if (lVar1 == 0) {
      FUN_14071053a(param_1 + 0x1dc0,param_1);
      uVar2 = (**(code **)(*(longlong *)(param_1 + 0x390) + 0x10))(param_1 + 0x390);
      FUN_14071049e(uVar2,param_1);
      return;
    }
    if ((*(uint *)(lVar1 + 8) & 0x30) != 0) break;
    lVar1 = *(longlong *)(lVar1 + 0x20);
  }
  return;
}



// FUNCTION 14071049e FUN_14071049e body=156 status=ok
// SIG undefined FUN_14071049e(void)

void FUN_14071049e(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1414aeae6(param_1);
    *(undefined8 *)(param_1 + 0x30) = 0;
    FUN_1404d595a(param_1 + 0x38,0);
  }
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  *(longlong *)(param_1 + 0x30) = param_2;
  if (*(longlong *)(param_1 + 0x48) == 0) {
    plVar1 = (longlong *)(param_1 + 0x38);
    *(longlong **)(param_1 + 0x50) = &DAT_14cb70148;
    *(longlong *)(param_1 + 0x48) = param_1;
    lVar2 = DAT_14cb70148;
    while( true ) {
      *(longlong *)(param_1 + 0x38) = lVar2;
      LOCK();
      lVar3 = **(longlong **)(param_1 + 0x50);
      bVar4 = lVar2 == lVar3;
      if (bVar4) {
        **(longlong **)(param_1 + 0x50) = (longlong)plVar1;
        lVar3 = lVar2;
      }
      UNLOCK();
      if (bVar4) break;
      *(longlong *)(param_1 + 0x38) = lVar3;
      lVar2 = **(longlong **)(param_1 + 0x50);
    }
    if (*plVar1 != 0) {
      *(longlong **)(*plVar1 + 8) = plVar1;
    }
  }
  return;
}



// FUNCTION 14071053a FUN_14071053a body=87 status=ok
// SIG undefined FUN_14071053a(void)

void FUN_14071053a(longlong param_1,longlong param_2)

{
  byte bVar1;
  int iVar2;
  
  if ((param_2 == 0) || (DAT_14c950c29 == '\0')) {
    *(longlong *)(param_1 + 0x30) = param_2;
    if (param_2 == 0) {
      bVar1 = 0;
      goto LAB_14071056d;
    }
  }
  else {
    FUN_1456cec3c(param_2);
    *(longlong *)(param_1 + 0x30) = param_2;
  }
  iVar2 = FUN_14487fd02(param_2);
  bVar1 = (iVar2 != 3) * '\x02';
LAB_14071056d:
  *(byte *)(param_1 + 0x55) = *(byte *)(param_1 + 0x55) & 0xfd | bVar1;
  return;
}



// FUNCTION 140710592 FUN_140710592 body=122 status=ok
// SIG undefined FUN_140710592(void)

void FUN_140710592(longlong param_1)

{
  longlong lVar1;
  
  FUN_140115e24();
  if (param_1 != 0) {
    lVar1 = param_1;
    do {
      if ((*(uint *)(lVar1 + 8) & 0x30) != 0) goto LAB_1407105c7;
      lVar1 = *(longlong *)(lVar1 + 0x20);
    } while (lVar1 != 0);
    FUN_1404d4eb0(param_1 + 0x988,param_1);
  }
LAB_1407105c7:
  FUN_1402d7906(param_1 + 0xc20,param_1 + 0x418);
  FUN_1407107b6(param_1 + 0x7c0,param_1);
  FUN_14071060c(param_1 + 0x16e0,param_1);
  FUN_140710650(param_1 + 0x19f8,param_1);
  return;
}



// FUNCTION 14071060c FUN_14071060c body=67 status=ok
// SIG undefined FUN_14071060c(void)

void FUN_14071060c(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = param_2;
  if (param_2 != 0) {
    do {
      if ((*(uint *)(lVar2 + 8) & 0x30) != 0) {
        return;
      }
      plVar1 = (longlong *)(lVar2 + 0x20);
      lVar2 = *plVar1;
    } while (*plVar1 != 0);
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(param_2);
    }
    *(longlong *)(param_1 + 0x18) = param_2;
  }
  return;
}



// FUNCTION 140710650 FUN_140710650 body=358 status=ok
// SIG undefined FUN_140710650(void)

void FUN_140710650(longlong param_1,longlong param_2)

{
  uint *puVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  int iVar8;
  bool bVar9;
  
  puVar1 = (uint *)(param_1 + 0x44);
  cVar3 = FUN_14069eaf4(puVar1);
  if (cVar3 == '\0') {
    if ((((*(int *)(param_1 + 0x48) != 0) && (uVar2 = *puVar1, -1 < (int)uVar2)) &&
        ((int)uVar2 < DAT_14c9647dc)) &&
       (((plVar6 = (longlong *)
                   ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
         plVar6 != (longlong *)0x0 && ((int)plVar6[2] == *(int *)(param_1 + 0x48))) &&
        (((*(uint *)(plVar6 + 1) & 0x10200000) == 0 && (*plVar6 != 0)))))) {
      *(undefined8 *)(param_1 + 0x44) = 0;
      FUN_14063a71e(param_1 + 0x18,0);
    }
    lVar7 = param_2;
    if (param_2 != 0) {
      do {
        if ((*(uint *)(lVar7 + 8) & 0x30) != 0) {
          return;
        }
        plVar6 = (longlong *)(lVar7 + 0x20);
        lVar7 = *plVar6;
      } while (*plVar6 != 0);
      uVar2 = *(uint *)(param_2 + 0xc);
      *puVar1 = uVar2;
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar7 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar7 = 0;
      }
      iVar4 = *(int *)(lVar7 + 0x10);
      if (*(int *)(lVar7 + 0x10) == 0) {
        LOCK();
        iVar4 = DAT_14c964868 + 1;
        UNLOCK();
        iVar8 = DAT_14c964868 + 1;
        bVar9 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar4;
        if (bVar9) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar8);
        }
        LOCK();
        iVar4 = *(int *)(lVar7 + 0x10);
        bVar9 = iVar4 == 0;
        if (bVar9) {
          *(int *)(lVar7 + 0x10) = iVar8;
          iVar4 = 0;
        }
        UNLOCK();
        if (bVar9) {
          iVar4 = iVar8;
        }
      }
      *(int *)(param_1 + 0x48) = iVar4;
      if (*(longlong *)(param_1 + 0x28) == 0) {
        plVar6 = (longlong *)(param_1 + 0x18);
        *(longlong **)(param_1 + 0x30) = &DAT_14cb8a020;
        *(longlong *)(param_1 + 0x28) = param_1;
        lVar7 = DAT_14cb8a020;
        while( true ) {
          *(longlong *)(param_1 + 0x18) = lVar7;
          LOCK();
          lVar5 = **(longlong **)(param_1 + 0x30);
          bVar9 = lVar7 == lVar5;
          if (bVar9) {
            **(longlong **)(param_1 + 0x30) = (longlong)plVar6;
            lVar5 = lVar7;
          }
          UNLOCK();
          if (bVar9) break;
          *(longlong *)(param_1 + 0x18) = lVar5;
          lVar7 = **(longlong **)(param_1 + 0x30);
        }
        if (*plVar6 != 0) {
          *(longlong **)(*plVar6 + 8) = plVar6;
        }
      }
    }
  }
  return;
}



// FUNCTION 1407107b6 FUN_1407107b6 body=1216 status=ok
// SIG undefined FUN_1407107b6(void)

void FUN_1407107b6(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  uint uVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  bool bVar11;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  wchar_t *local_88;
  code *local_80;
  undefined1 *local_78;
  undefined8 *local_70;
  code *local_68;
  code *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_40 [8];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (param_2 == 0) goto LAB_140710a1c;
  if (DAT_14cb6f900 == 0) {
    local_70 = &local_58;
    local_58 = FUN_1449e2820;
    local_60 = FUN_14081d0ea;
    local_68 = FUN_1427b09ee;
    local_78 = &LAB_1487a9c57;
    local_80 = FUN_146541d03;
    local_88 = L"Engine";
    local_90 = 0;
    local_98 = 0x10004001;
    local_a0 = 8;
    local_a8 = 0x28;
    FUN_14081cfa3(L"/Script/GbxGame",L"Usable",&DAT_14cb6f900,&DAT_1487a9c56);
  }
  plVar7 = (longlong *)FUN_144718840(param_2,DAT_14cb6f900);
  lVar8 = param_2;
  if (plVar7 == (longlong *)0x0) goto LAB_140710a1c;
  do {
    if ((*(uint *)(lVar8 + 8) & 0x30) != 0) goto LAB_140710a1c;
    plVar1 = (longlong *)(lVar8 + 0x20);
    lVar8 = *plVar1;
  } while (*plVar1 != 0);
  local_58 = (code *)0x0;
  uStack_50 = (longlong *)0x0;
  lVar8 = (**(code **)(*plVar7 + 8))(plVar7);
  if (lVar8 == 0) {
    local_58 = (code *)0x0;
    iVar5 = 0;
  }
  else {
    uVar2 = *(uint *)(lVar8 + 0xc);
    local_58 = (code *)CONCAT44(local_58._4_4_,uVar2);
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
      iVar6 = DAT_14c964868 + 1;
      bVar11 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar5;
      if (bVar11) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar6);
      }
      LOCK();
      iVar5 = *(int *)(lVar8 + 0x10);
      bVar11 = iVar5 == 0;
      if (bVar11) {
        *(int *)(lVar8 + 0x10) = iVar6;
        iVar5 = 0;
      }
      UNLOCK();
      if (bVar11) {
        iVar5 = iVar6;
      }
    }
  }
  local_58._4_4_ = iVar5;
  cVar4 = FUN_14493c216(&local_58,0);
  if (cVar4 == '\0') {
    uStack_50 = plVar7;
  }
  *(undefined4 *)(param_1 + 0x60) = (undefined4)local_58;
  *(int *)(param_1 + 100) = local_58._4_4_;
  *(int *)(param_1 + 0x68) = (int)uStack_50;
  *(uint *)(param_1 + 0x6c) = uStack_50._4_4_;
  local_58 = (code *)0x0;
  uStack_50 = (longlong *)((ulonglong)uStack_50._4_4_ << 0x20);
  FUN_1446efa72(&local_58,0,3,0x10);
  pcVar3 = local_58;
  uStack_50 = (longlong *)CONCAT44(uStack_50._4_4_,3);
  *(undefined ***)local_58 = &PTR_LAB_14a1c7440;
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
  *(longlong *)(local_58 + 0x10) = lVar9;
  *(undefined ***)local_58 = &PTR_FUN_14b4343e0;
  *(longlong *)(local_58 + 0x18) = 0;
  uVar2 = *(uint *)(param_2 + 0xc);
  *(uint *)(local_58 + 0x18) = uVar2;
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
    iVar6 = DAT_14c964868 + 1;
    bVar11 = DAT_14c964868 < 1000;
    DAT_14c964868 = iVar5;
    if (bVar11) {
      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                    L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                    iVar6);
    }
    LOCK();
    iVar5 = *(int *)(lVar8 + 0x10);
    bVar11 = iVar5 == 0;
    if (bVar11) {
      *(int *)(lVar8 + 0x10) = iVar6;
      iVar5 = 0;
    }
    UNLOCK();
    if (bVar11) {
      iVar5 = iVar6;
    }
  }
  *(int *)(pcVar3 + 0x1c) = iVar5;
  *(longlong *)(pcVar3 + 0x20) = param_1;
  if (((int)uStack_50 == 0) || (local_58 == (code *)0x0)) {
LAB_140710bf3:
    if ((int)uStack_50 != 0) {
      if (local_58 == (code *)0x0) goto LAB_140710a1c;
      (*(code *)**(undefined8 **)local_58)(local_58,0);
      FUN_1446efa72(&local_58,0,0,0x10);
      goto LAB_140710a06;
    }
  }
  else {
    cVar4 = (**(code **)(*(longlong *)local_58 + 0x30))();
    if (cVar4 == '\0') {
      goto LAB_140710bf3;
    }
    plVar7 = (longlong *)(param_2 + 0x2d0);
    if (*(int *)(param_2 + 0x2e4) < 1) {
      iVar5 = *(int *)(param_2 + 0x2d8);
      iVar6 = *(int *)(param_2 + 0x2e0) + -1;
      *(int *)(param_2 + 0x2e0) = iVar6;
      if (iVar6 <= iVar5) {
        iVar6 = iVar5;
        if (0 < iVar5) {
          iVar10 = 0;
          do {
            if (((*(int *)(*plVar7 + 8 + (longlong)iVar10 * 0x10) == 0) ||
                (plVar1 = *(longlong **)(*plVar7 + (longlong)iVar10 * 0x10),
                plVar1 == (longlong *)0x0)) ||
               (cVar4 = (**(code **)(*plVar1 + 0x28))(), cVar4 != '\0')) {
              FUN_14005b288(plVar7,iVar10);
              FUN_14005b248(plVar7);
            }
            else {
              iVar10 = iVar10 + 1;
            }
            iVar6 = *(int *)(param_2 + 0x2d8);
          } while (iVar10 < iVar6);
        }
        iVar10 = 2;
        if (2 < iVar6 * 2) {
          iVar10 = iVar6 * 2;
        }
        *(int *)(param_2 + 0x2e0) = iVar10;
        if ((iVar10 < iVar5) && (*(int *)(param_2 + 0x2dc) != iVar6)) {
          FUN_14045812c();
        }
      }
    }
    if (((int)uStack_50 != 0) && (local_58 != (code *)0x0)) {
      (**(code **)(*(longlong *)local_58 + 0x38))(local_58,local_40);
    }
    iVar5 = *(int *)(param_2 + 0x2d8);
    *(uint *)(param_2 + 0x2d8) = iVar5 + 1U;
    if (*(uint *)(param_2 + 0x2dc) < iVar5 + 1U) {
      FUN_1447a71f6(plVar7,iVar5);
    }
    lVar8 = *plVar7;
    lVar9 = (longlong)iVar5 * 0x10;
    *(undefined8 *)(lVar8 + lVar9) = 0;
    *(undefined4 *)(lVar8 + 8 + lVar9) = 0;
    *(code **)(lVar8 + lVar9) = local_58;
    local_58 = (code *)0x0;
    *(int *)(lVar8 + 8 + lVar9) = (int)uStack_50;
LAB_140710a06:
    uStack_50 = (longlong *)((ulonglong)uStack_50 & 0xffffffff00000000);
  }
  if (local_58 != (code *)0x0) {
    FUN_1400020a8();
  }
LAB_140710a1c:
  if ((local_38 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140710c78 FUN_140710c78 body=3700 status=ok
// SIG undefined FUN_140710c78(void)

void FUN_140710c78(longlong *param_1)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auVar12 [16];
  byte bVar13;
  int iVar14;
  longlong lVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  undefined1 *puVar18;
  longlong lVar19;
  undefined8 uVar20;
  int iVar21;
  longlong lVar22;
  undefined8 *puVar23;
  ulonglong uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  bool bVar29;
  double dVar30;
  undefined1 auVar31 [16];
  double dVar32;
  undefined1 auVar33 [16];
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  undefined1 auStack_2a8 [32];
  undefined4 local_288;
  undefined1 *local_280;
  undefined4 local_270;
  undefined4 local_26c;
  longlong local_268;
  longlong *local_260;
  undefined1 *local_258;
  longlong **local_250;
  longlong *local_248;
  undefined1 *puStack_240;
  longlong local_238;
  undefined8 *local_230;
  undefined1 local_228 [16];
  double local_218;
  double dStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 *local_1c8;
  undefined8 *local_1c0;
  longlong *local_1b8;
  undefined8 uStack_1b0;
  longlong local_1a0;
  undefined8 local_198 [2];
  double local_188;
  double dStack_180;
  double local_178;
  longlong lStack_170;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined4 local_128;
  undefined2 local_124;
  undefined8 local_120;
  longlong local_110;
  undefined1 local_108 [8];
  undefined1 *local_100;
  undefined8 local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_2a8;
  *(byte *)((longlong)param_1 + 0x9c) = *(byte *)((longlong)param_1 + 0x9c) | 8;
  if (param_1[0xa9] != 0) goto LAB_1407115ff;
  (**(code **)(*param_1 + 0x9f8))();
  if ((~*(byte *)((longlong)param_1 + 0x9c) & 3) == 0) {
    bVar13 = *(byte *)((longlong)param_1 + 0x9d);
    if ((bVar13 & 1) != 0) {
      if ((param_1[0x16] != 0) || (lVar15 = FUN_1448abda6(param_1), lVar15 != 0))
      goto LAB_140710d70;
      bVar13 = *(byte *)((longlong)param_1 + 0x9d);
    }
    *(byte *)((longlong)param_1 + 0x9d) = bVar13 | 1;
    FUN_1401057d4(param_1);
    FUN_14010586c(&DAT_14cad0140,param_1);
  }
LAB_140710d70:
  if (param_1[0xd9] == 0) goto LAB_1407115ff;
  local_188 = (double)param_1[0x48];
  dStack_180 = (double)param_1[0x49];
  local_178 = (double)param_1[0x4a];
  lStack_170 = param_1[0x4b];
  local_168 = (undefined4)param_1[0x4c];
  uStack_164 = *(undefined4 *)((longlong)param_1 + 0x264);
  uStack_160 = (undefined4)param_1[0x4d];
  uStack_15c = *(undefined4 *)((longlong)param_1 + 0x26c);
  local_158 = (undefined4)param_1[0x4e];
  uStack_154 = *(undefined4 *)((longlong)param_1 + 0x274);
  uStack_150 = (undefined4)param_1[0x4f];
  uStack_14c = *(undefined4 *)((longlong)param_1 + 0x27c);
  dVar9 = (double)param_1[0x50];
  dVar10 = (double)param_1[0x51];
  dVar11 = (double)param_1[0x52];
  dVar36 = dStack_180 + dStack_180;
  dVar35 = local_178 + local_178;
  dVar37 = local_188 * (local_188 + local_188);
  dVar5 = (1.0 - (local_178 * dVar35 + dStack_180 * dVar36)) * dVar9;
  dVar30 = (1.0 - (local_178 * dVar35 + dVar37)) * dVar10;
  dVar34 = (double)param_1[0x4b];
  dVar6 = dVar35 * dVar34;
  dVar7 = (local_188 + local_188) * (double)param_1[0x4b];
  dVar38 = (dVar36 * local_188 + dVar6) * dVar9;
  dVar32 = (dVar35 * dStack_180 + dVar7) * dVar10;
  dVar6 = (dVar36 * local_188 - dVar6) * dVar10;
  dVar7 = (dVar35 * dStack_180 - dVar7) * dVar11;
  dVar34 = dVar36 * dVar34;
  dVar8 = (dVar35 * local_188 - dVar34) * dVar9;
  dVar5 = dVar8 * dVar8 + dVar5 * dVar5 + dVar38 * dVar38;
  dVar6 = dVar32 * dVar32 + dVar6 * dVar6 + dVar30 * dVar30;
  dVar35 = (dVar34 + dVar35 * local_188) * dVar11;
  dVar34 = (1.0 - (dVar37 + dStack_180 * dVar36)) * dVar11;
  dVar34 = dVar34 * dVar34 + dVar35 * dVar35 + dVar7 * dVar7;
  dVar35 = (double)(-(ulonglong)(9.99999993922529e-09 < dVar5) & (ulonglong)SQRT(dVar5));
  dVar6 = (double)(-(ulonglong)(9.99999993922529e-09 < dVar6) & (ulonglong)SQRT(dVar6));
  dVar34 = (double)(-(ulonglong)(9.99999993922529e-09 < dVar34) & (ulonglong)SQRT(dVar34));
  iVar14 = (int)param_1[200];
  if (iVar14 < 1) {
    dVar7 = 0.0;
    uVar26 = 0x17;
  }
  else {
    dVar7 = (double)(((float)(int)param_1[199] * *(float *)((longlong)param_1 + 0x63c)) /
                    (float)iVar14);
    uVar26 = 0x16;
  }
  dVar5 = dVar34 * 0.0078125;
  dVar30 = (double)*(float *)((longlong)param_1 + 0x63c);
  dVar38 = dVar6 * dVar30;
  dVar30 = dVar30 * dVar35;
  local_124 = 0x100;
  local_120 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_128 = 1;
  lVar15 = param_1[0x16];
  if (lVar15 == 0) {
    lVar15 = FUN_1448abda6(param_1);
  }
  local_198[0] = *(undefined8 *)(lVar15 + 0x260);
  FUN_1407125d4(local_198,&local_1a0);
  lVar22 = local_1a0;
  local_100 = (undefined1 *)0x0;
  local_f8 = 0x100000000;
  local_1b8 = (longlong *)0x0;
  uStack_1b0 = 0;
  lVar15 = *(longlong *)(param_1[0xd9] + 0x30);
  dVar32 = (double)(-(ulonglong)(0.0 <= dVar11) & (ulonglong)dVar5 |
                   ~-(ulonglong)(0.0 <= dVar11) & (ulonglong)-dVar5);
  dVar38 = (double)(-(ulonglong)(0.0 <= dVar10) & (ulonglong)dVar38 |
                   ~-(ulonglong)(0.0 <= dVar10) & (ulonglong)-dVar38);
  dVar30 = (double)(-(ulonglong)(0.0 <= dVar9) & (ulonglong)dVar30 |
                   ~-(ulonglong)(0.0 <= dVar9) & (ulonglong)-dVar30);
  *(double *)(lVar15 + 0x50) = dVar30;
  *(double *)(lVar15 + 0x58) = dVar38;
  *(double *)(lVar15 + 0x60) = dVar32;
  auVar31._0_4_ = (float)dVar30;
  auVar31._4_4_ = (float)dVar38;
  auVar31._8_4_ = (float)dVar32;
  auVar31._12_4_ = 0;
  *(undefined1 (*) [16])(lVar15 + 0x70) = auVar31;
  local_1c0 = *(undefined8 **)(param_1[0xd9] + 0x30);
  if (local_1c0 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(local_1c0 + 1) = *(int *)(local_1c0 + 1) + 1;
    UNLOCK();
  }
  puVar16 = &DAT_14c846480;
  puVar23 = (undefined8 *)local_228;
  for (lVar15 = 0xc; lVar15 != 0; lVar15 = lVar15 + -1) {
    *puVar23 = *puVar16;
    puVar16 = puVar16 + 1;
    puVar23 = puVar23 + 1;
  }
  puVar16 = (undefined8 *)FUN_14001cc68(0xc0,0x10);
  FUN_140711d1e(puVar16,&local_1c0,local_228);
  if (puVar16 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar16 + 1) = *(int *)(puVar16 + 1) + 1;
    UNLOCK();
  }
  local_260 = param_1 + 0x82;
  local_1c8 = puVar16;
  FUN_140711c7e(local_228,local_f8 & 0xffffffff,&local_1c8);
  uVar20 = local_228._0_8_;
  local_26c = *(undefined4 *)((longlong)param_1 + 0xc);
  lVar15 = (**(code **)(*param_1 + 0x558))(param_1);
  local_270 = *(undefined4 *)(param_1[0x15] + 0xc);
  bVar13 = (**(code **)(*param_1 + 0x580))();
  uVar28 = 0;
  uVar27 = 0;
  lVar19 = 0;
  do {
    if (*(char *)(lVar15 + lVar19) == '\x02') {
      uVar27 = uVar27 | 1 << ((uint)lVar19 & 0x1f);
    }
    else if (*(char *)(lVar15 + lVar19) == '\x01') {
      uVar28 = uVar28 | 1 << ((uint)lVar19 & 0x1f);
    }
    lVar19 = lVar19 + 1;
  } while (lVar19 != 0x20);
  local_268 = lVar22;
  uVar25 = (uint)bVar13 << 0x15;
  uVar26 = uVar26 | uVar25;
  uVar2 = *(uint *)(uVar20 + 8);
  uVar24 = (ulonglong)uVar2;
  if ((uVar2 & 3) == 0) {
    lVar15 = *(longlong *)(uVar20 + 0x48);
    *(undefined4 *)(uVar20 + 0x50) = local_270;
    *(uint *)(uVar20 + 0x54) = uVar27;
    *(uint *)(uVar20 + 0x58) = uVar28;
    *(uint *)(uVar20 + 0x5c) = uVar26;
    uVar3 = *(uint *)(uVar20 + 0xc);
    *(uint *)(uVar20 + 0xc) = uVar3 | 1;
    if ((lVar15 != 0 && uVar3 == 0) && (*(longlong *)(lVar15 + 8) != 0)) {
      FUN_144821112(*(longlong *)(lVar15 + 8) + 0x70,lVar15,uVar2 >> 3);
      uVar24 = (ulonglong)*(uint *)(uVar20 + 8);
    }
  }
  else {
    *(undefined4 *)(uVar20 + 0x48) = local_270;
    *(uint *)(uVar20 + 0x4c) = uVar27;
    *(uint *)(uVar20 + 0x50) = uVar28;
    *(uint *)(uVar20 + 0x54) = uVar26;
  }
  if ((uVar24 & 3) == 0) {
    lVar15 = *(longlong *)(uVar20 + 0x48);
    *(undefined4 *)(uVar20 + 0x60) = 0;
    *(uint *)(uVar20 + 100) = uVar27;
    *(undefined4 *)(uVar20 + 0x68) = local_26c;
    *(uint *)(uVar20 + 0x6c) = uVar26;
    uVar26 = *(uint *)(uVar20 + 0xc);
    *(uint *)(uVar20 + 0xc) = uVar26 | 1;
    if ((lVar15 != 0 && uVar26 == 0) && (*(longlong *)(lVar15 + 8) != 0)) {
      FUN_144821112(*(longlong *)(lVar15 + 8) + 0x70,lVar15,uVar24 >> 3);
      uVar24 = (ulonglong)*(uint *)(uVar20 + 8);
    }
  }
  else {
    *(undefined4 *)(uVar20 + 0x58) = 0;
    *(uint *)(uVar20 + 0x5c) = uVar27;
    *(undefined4 *)(uVar20 + 0x60) = local_26c;
    *(uint *)(uVar20 + 100) = uVar26;
  }
  lVar15 = param_1[0xd9];
  if ((uVar24 & 3) == 0) {
    local_228._0_8_ = lVar15 + 0x20;
    local_288 = (undefined4)(uVar24 >> 3);
    local_280 = local_228;
    FUN_140a4b88e(uVar20 + 0x80,CONCAT71((int7)((ulonglong)local_280 >> 8),1),uVar20 + 0xc,
                  *(undefined8 *)(uVar20 + 0x48));
  }
  else {
    uVar17 = FUN_140135db2(uVar20);
    FUN_144aa451a(uVar17,lVar15 + 0x20);
  }
  uVar24 = uStack_1b0;
  lVar15 = (longlong)(int)uStack_1b0;
  uVar26 = (int)uStack_1b0 + 1;
  uStack_1b0 = CONCAT44(uStack_1b0._4_4_,uVar26);
  if (uStack_1b0._4_4_ < uVar26) {
    FUN_140619960(&local_1b8,uVar24 & 0xffffffff);
  }
  uVar24 = local_f8;
  local_1b8[lVar15] = (longlong)local_1c8;
  local_1c8 = (undefined8 *)0x0;
  lVar15 = (longlong)(int)local_f8;
  uVar26 = (int)local_f8 + 1;
  local_f8 = CONCAT44(local_f8._4_4_,uVar26);
  if (local_f8._4_4_ < uVar26) {
    FUN_14745abde(local_108,uVar24 & 0xffffffff);
  }
  puVar18 = local_100;
  if (local_100 == (undefined1 *)0x0) {
    puVar18 = local_108;
  }
  *(undefined8 *)(puVar18 + lVar15 * 8) = uVar20;
  if (0 < iVar14) {
    lVar15 = *(longlong *)(param_1[0xd9] + 0x38);
    *(double *)(lVar15 + 0x50) = dVar35 * dVar7;
    *(double *)(lVar15 + 0x58) = dVar6 * dVar7;
    *(double *)(lVar15 + 0x60) = dVar5;
    auVar33._0_4_ = (float)(dVar35 * dVar7);
    auVar33._4_4_ = (float)(dVar6 * dVar7);
    auVar33._8_4_ = (float)dVar5;
    auVar33._12_4_ = 0;
    *(undefined1 (*) [16])(lVar15 + 0x70) = auVar33;
    local_230 = *(undefined8 **)(param_1[0xd9] + 0x38);
    if (local_230 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(local_230 + 1) = *(int *)(local_230 + 1) + 1;
      UNLOCK();
    }
    puVar16 = &DAT_14c846480;
    puVar23 = (undefined8 *)local_228;
    for (lVar15 = 0xc; lVar15 != 0; lVar15 = lVar15 + -1) {
      *puVar23 = *puVar16;
      puVar16 = puVar16 + 1;
      puVar23 = puVar23 + 1;
    }
    lVar15 = FUN_14001cc68(0xc0,0x10);
    FUN_140711d1e(lVar15,&local_230,local_228);
    if (lVar15 != 0) {
      LOCK();
      *(int *)(lVar15 + 8) = *(int *)(lVar15 + 8) + 1;
      UNLOCK();
    }
    local_238 = lVar15;
    FUN_140711c7e(local_228,local_f8 & 0xffffffff,&local_238);
    uVar20 = local_228._0_8_;
    local_228._4_4_ = uVar27;
    local_228._0_4_ = local_270;
    local_228._8_4_ = uVar28;
    local_248 = (longlong *)((ulonglong)uVar27 << 0x20);
    local_228._12_4_ = uVar25 | 0x15;
    puStack_240 = (undefined1 *)(CONCAT44(uVar25,local_26c) | 0x1500000000);
    uVar26 = *(uint *)(uVar20 + 8);
    if ((uVar26 & 3) == 0) {
      FUN_144b03742(uVar20,local_228);
      uVar26 = *(uint *)(uVar20 + 8);
    }
    else {
      *(undefined8 *)(uVar20 + 0x48) = local_228._0_8_;
      *(undefined8 *)(uVar20 + 0x50) = local_228._8_8_;
    }
    if ((uVar26 & 3) == 0) {
      FUN_144aa44d4(uVar20,&local_248);
    }
    else {
      *(longlong **)(uVar20 + 0x58) = local_248;
      *(undefined1 **)(uVar20 + 0x60) = puStack_240;
    }
    local_110 = param_1[0xd9] + 0x20;
    FUN_140a4b800(uVar20);
    uVar24 = uStack_1b0;
    lVar15 = (longlong)(int)uStack_1b0;
    uVar26 = (int)uStack_1b0 + 1;
    uStack_1b0 = CONCAT44(uStack_1b0._4_4_,uVar26);
    if (uStack_1b0._4_4_ < uVar26) {
      FUN_140619960(&local_1b8,uVar24 & 0xffffffff);
    }
    uVar24 = local_f8;
    local_1b8[lVar15] = local_238;
    lVar15 = (longlong)(int)local_f8;
    uVar26 = (int)local_f8 + 1;
    local_f8 = CONCAT44(local_f8._4_4_,uVar26);
    if (local_f8._4_4_ < uVar26) {
      FUN_14745abde(local_108,uVar24 & 0xffffffff);
    }
    puVar18 = local_100;
    if (local_100 == (undefined1 *)0x0) {
      puVar18 = local_108;
    }
    *(undefined8 *)(puVar18 + lVar15 * 8) = uVar20;
    if (local_230 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(local_230 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((*piVar1 == 0) && (*(int *)((longlong)local_230 + 0xc) == 0)) {
        (**(code **)*local_230)(local_230,1);
      }
    }
  }
  if ((int)uStack_1b0 == 1) {
    uVar20 = *(undefined8 *)(local_268 + 0x40);
    lVar15 = *local_1b8;
    local_228._0_8_ = lVar15;
    if (lVar15 != 0) {
      LOCK();
      *(int *)(lVar15 + 8) = *(int *)(lVar15 + 8) + 1;
      UNLOCK();
    }
LAB_14071136e:
    lVar15 = local_268;
    FUN_1406188f0(uVar20,local_228);
  }
  else {
    puVar16 = (undefined8 *)FUN_14001cc68(0x70,0x10);
    FUN_14014f414(puVar16,&local_1b8);
    lVar15 = local_268;
    if (puVar16 == (undefined8 *)0x0) {
      uVar20 = *(undefined8 *)(local_268 + 0x40);
      auVar12._8_8_ = 0;
      auVar12._0_8_ = local_228._8_8_;
      local_228 = auVar12 << 0x40;
      goto LAB_14071136e;
    }
    LOCK();
    *(int *)(puVar16 + 1) = *(int *)(puVar16 + 1) + 1;
    UNLOCK();
    uVar20 = *(undefined8 *)(local_268 + 0x40);
    local_228._0_8_ = puVar16;
    LOCK();
    *(int *)(puVar16 + 1) = *(int *)(puVar16 + 1) + 1;
    UNLOCK();
    FUN_1406188f0(uVar20);
    LOCK();
    piVar1 = (int *)(puVar16 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(int *)((longlong)puVar16 + 0xc) == 0)) {
      (**(code **)*puVar16)(puVar16,1);
    }
  }
  puVar18 = local_108;
  if (local_100 != (undefined1 *)0x0) {
    puVar18 = local_100;
  }
  lVar22 = (longlong)(int)local_f8;
  if (lVar22 != 0) {
    lVar19 = 0;
    do {
      lVar4 = *(longlong *)(lVar15 + 0x40);
      dStack_210 = (double)*(float *)(lVar4 + 0x4c);
      local_218 = (double)*(float *)(lVar4 + 0x48);
      local_228._8_4_ = SUB84((double)*(float *)(lVar4 + 0x44),0);
      local_228._0_8_ = (double)*(float *)(lVar4 + 0x40);
      local_228._12_4_ = (int)((ulonglong)(double)*(float *)(lVar4 + 0x44) >> 0x20);
      local_208 = *(undefined8 *)(lVar4 + 0x20);
      uStack_200 = *(undefined8 *)(lVar4 + 0x28);
      local_1f8 = *(undefined8 *)(lVar4 + 0x30);
      uStack_1f0 = 0;
      local_1e8 = 0x3ff0000000000000;
      uStack_1e0 = 0x3ff0000000000000;
      local_1d8 = 0x3ff0000000000000;
      uStack_1d0 = 0;
      lVar4 = *(longlong *)(puVar18 + lVar19);
      if ((*(byte *)(lVar4 + 8) & 3) == 0) {
        FUN_14484a332(lVar4,local_228);
      }
      else {
        FUN_146e226b0(lVar4,local_228);
      }
      lVar19 = lVar19 + 8;
    } while (lVar22 * 8 != lVar19);
  }
  FUN_140711be6(*(undefined8 *)(lVar15 + 0x40),local_108);
  lVar22 = param_1[0x16];
  if (lVar22 == 0) {
    lVar22 = FUN_1448abda6(param_1);
  }
  lVar22 = *(longlong *)(lVar22 + 0x260);
  *(undefined4 *)(param_1 + 0xae) = 1;
  param_1[0xaf] = (longlong)local_260;
  local_110 = lVar22;
  if (param_1 == (longlong *)0x0) {
    uRam0000000000000550 = 0;
    iVar14 = 0;
  }
  else {
    uVar26 = *(uint *)((longlong)param_1 + 0xc);
    *(uint *)(param_1 + 0xaa) = uVar26;
    if ((int)uVar26 < DAT_14c9647dc) {
      lVar19 = (ulonglong)((uVar26 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar26 >> 0x10) * 8);
    }
    else {
      lVar19 = 0;
    }
    iVar14 = *(int *)(lVar19 + 0x10);
    if (*(int *)(lVar19 + 0x10) == 0) {
      LOCK();
      iVar14 = DAT_14c964868 + 1;
      UNLOCK();
      iVar21 = DAT_14c964868 + 1;
      bVar29 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar14;
      if (bVar29) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar21);
      }
      LOCK();
      iVar14 = *(int *)(lVar19 + 0x10);
      bVar29 = iVar14 == 0;
      if (bVar29) {
        *(int *)(lVar19 + 0x10) = iVar21;
        iVar14 = 0;
      }
      UNLOCK();
      if (bVar29) {
        iVar14 = iVar21;
      }
    }
  }
  *(int *)((longlong)param_1 + 0x554) = iVar14;
  param_1[0xa9] = local_1a0;
  param_1[0x8c] = (longlong)dVar35;
  param_1[0x8d] = (longlong)dVar6;
  param_1[0x8e] = (longlong)dVar34;
  *(longlong **)(*(longlong *)(lVar15 + 0x40) + 0x70) = param_1 + 0xae;
  local_228._0_12_ = ZEXT412(1) << 0x40;
  local_228._12_4_ = 0;
  FUN_140711e5c(local_228,0);
  *(longlong *)local_228._0_8_ = local_1a0;
  local_248 = &local_110;
  local_250 = &local_248;
  local_258 = &LAB_14324b366;
  puStack_240 = local_228;
  FUN_140711b6e(lVar22);
  FUN_14075bef6(local_110,param_1,local_1a0);
  if ((*(byte *)((longlong)param_1 + 1099) & 0x20) != 0) {
    FUN_1409e98c6(local_110,param_1);
  }
  if (local_228._0_8_ != 0) {
    FUN_1400020a8();
  }
  if (local_1c8 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_1c8 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(int *)((longlong)local_1c8 + 0xc) == 0)) {
      (**(code **)*local_1c8)(local_1c8,1);
    }
  }
  if (local_1c0 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_1c0 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(int *)((longlong)local_1c0 + 0xc) == 0)) {
      (**(code **)*local_1c0)(local_1c0,1);
    }
  }
  FUN_144756766(local_1b8,uStack_1b0 & 0xffffffff);
  if (local_1b8 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  FUN_140711b04(local_108);
LAB_1407115ff:
  if ((local_f0 ^ (ulonglong)auStack_2a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140711b04 FUN_140711b04 body=52 status=ok
// SIG undefined FUN_140711b04(void)

void FUN_140711b04(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (*(longlong *)(param_1 + 8) == 0) {
    lVar1 = param_1;
  }
  FUN_140711b38(lVar1,*(undefined4 *)(param_1 + 0x10));
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140711b38 FUN_140711b38 body=54 status=ok
// SIG undefined FUN_140711b38(void)

void FUN_140711b38(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = 0;
    do {
      puVar1 = *(undefined8 **)(param_1 + lVar2 * 8);
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
      lVar2 = lVar2 + 1;
    } while (param_2 != (int)lVar2);
  }
  return;
}



// FUNCTION 140711b6e FUN_140711b6e body=118 status=ok
// SIG undefined FUN_140711b6e(void)

bool FUN_140711b6e(longlong param_1,undefined8 *param_2)

{
  undefined1 auStack_58 [32];
  char local_38 [8];
  undefined8 local_30;
  undefined1 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_1 != 0) {
    local_38[0] = '\0';
    local_30 = *(undefined8 *)(param_1 + 0x38);
    local_28 = 1;
    FUN_1447e649a(local_38);
    (*(code *)*param_2)(param_2[1]);
    if (local_38[0] == '\x01') {
      FUN_1447e63de(local_38);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140711be6 FUN_140711be6 body=151 status=ok
// SIG undefined FUN_140711be6(void)

void FUN_140711be6(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar4;
  
  iVar1 = (int)param_2[2];
  plVar5 = (longlong *)param_2[1];
  if ((longlong *)param_2[1] == (longlong *)0x0) {
    plVar5 = param_2;
  }
  if ((longlong)iVar1 != 0) {
    lVar7 = (longlong)(*(int *)(param_1 + 0x88) - iVar1) << 3;
    lVar6 = (longlong)iVar1 << 3;
    do {
      *(uint *)(*plVar5 + 8) = (*(uint *)(*plVar5 + 8) & 7) + (int)lVar7;
      lVar4 = *(longlong *)(param_1 + 0x80);
      if (*(longlong *)(param_1 + 0x80) == 0) {
        lVar4 = param_1 + 0x78;
      }
      plVar3 = (longlong *)(lVar4 + lVar7);
      if (plVar5 != plVar3) {
        puVar2 = (undefined8 *)*plVar3;
        *plVar3 = *plVar5;
        *plVar5 = 0;
        if (puVar2 != (undefined8 *)0x0) {
          (**(code **)*puVar2)(puVar2,1);
        }
      }
      plVar5 = plVar5 + 1;
      lVar7 = lVar7 + 8;
      lVar6 = lVar6 + -8;
    } while (lVar6 != 0);
  }
  return;
}



// FUNCTION 140711c7e FUN_140711c7e body=160 status=ok
// SIG undefined FUN_140711c7e(void)

undefined8 * FUN_140711c7e(undefined8 *param_1,int param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0xc0,0x10);
  *puVar2 = &PTR_FUN_149f5e060;
  *(int *)(puVar2 + 1) = param_2 << 3;
  *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
  lVar1 = *param_3;
  puVar2[2] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  puVar2[7] = 0;
  puVar2[8] = 0;
  puVar2[5] = 0;
  puVar2[6] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  *puVar2 = &PTR_FUN_149f5e040;
  puVar2[9] = 0;
  puVar2[10] = 0;
  puVar2[0xb] = 0;
  puVar2[0xc] = 0;
  puVar2[0xd] = 0;
  puVar2[0xe] = 0;
  puVar2[0xf] = 0;
  *(undefined1 *)((longlong)puVar2 + 0x79) = 3;
  puVar2[0x10] = 0;
  puVar2[0x11] = 0;
  puVar2[0x12] = 0;
  puVar2[0x13] = 0;
  puVar2[0x14] = 0;
  puVar2[0x15] = 0;
  puVar2[0x16] = 0;
  puVar2[0x17] = 0;
  *param_1 = puVar2;
  return param_1;
}



// FUNCTION 140711d1e FUN_140711d1e body=317 status=ok
// SIG undefined FUN_140711d1e(void)

undefined8 * FUN_140711d1e(undefined8 *param_1,longlong *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
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
  lVar2 = *param_2;
  param_1[4] = lVar2;
  if (lVar2 == 0) {
    plVar1 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
    plVar1 = (longlong *)param_1[4];
  }
  puVar3 = param_3;
  puVar4 = param_1 + 6;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  param_1[0x12] = 0x7fefffffffffffff;
  param_1[0x13] = 0x7fefffffffffffff;
  param_1[0x14] = 0x7fefffffffffffff;
  param_1[0x15] = 0xffefffffffffffff;
  param_1[0x16] = 0xffefffffffffffff;
  param_1[0x17] = 0xffefffffffffffff;
  (**(code **)(*plVar1 + 0x80))(plVar1,local_88);
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



// FUNCTION 140711e5c FUN_140711e5c body=353 status=ok
// SIG undefined FUN_140711e5c(void)

void FUN_140711e5c(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140711ee3;
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
LAB_140711ee3:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 140711fbe FUN_140711fbe body=1523 status=ok
// SIG undefined FUN_140711fbe(void)

void FUN_140711fbe(longlong param_1)

{
  int *piVar1;
  uint *puVar2;
  undefined **ppuVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined *puVar8;
  undefined4 uVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  longlong *plVar13;
  undefined4 *puVar14;
  uint uVar15;
  longlong *plVar16;
  undefined1 auStack_1d8 [40];
  longlong local_1b0;
  undefined **local_1a8;
  ulonglong *puStack_1a0;
  undefined ***local_120;
  undefined8 *local_118;
  longlong local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  byte local_e0;
  longlong *local_b0;
  longlong local_90;
  undefined ***local_80;
  undefined8 local_78;
  longlong local_70;
  undefined8 local_68;
  undefined **local_60;
  int local_58;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  if (*(longlong *)(param_1 + 0x6c8) == 0) {
    if (*(longlong *)(param_1 + 0xb0) == 0) {
      FUN_1448abda6(param_1);
    }
    ppuVar3 = (undefined **)(param_1 + 0x658);
    if (((*(int *)(param_1 + 0x65c) == 0 && *(int *)(param_1 + 0x658) == 0) &&
        *(int *)(param_1 + 0x660) == 0) && *(int *)(param_1 + 0x664) == 0) {
      local_1a8 = (undefined **)0x0;
      puStack_1a0 = (ulonglong *)0x0;
      FUN_1401031ac(param_1,0,&local_1a8);
      local_60 = local_1a8;
      local_58 = (int)puStack_1a0 + -1;
      if ((int)puStack_1a0 == 0) {
        local_58 = 0;
      }
      FUN_141500794(&local_108,&local_60,0);
      *(undefined4 *)ppuVar3 = (undefined4)local_108;
      *(undefined4 *)(param_1 + 0x65c) = local_108._4_4_;
      *(undefined4 *)(param_1 + 0x660) = (undefined4)uStack_100;
      *(undefined4 *)(param_1 + 0x664) = uStack_100._4_4_;
      if (local_1a8 != (undefined **)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      uVar9 = FUN_1447addd0(ppuVar3,0x10);
      iVar10 = FUN_140e9a9e6(uVar9,ppuVar3);
      lVar11 = (longlong)iVar10 * 0x20 + DAT_14caa2298;
      if ((lVar11 != 0 && iVar10 != -1) && (lVar11 = *(longlong *)(lVar11 + 0x10), lVar11 != 0)) {
        lVar12 = *(longlong *)(param_1 + 0x6c8);
        if (lVar12 != lVar11) {
          *(longlong *)(param_1 + 0x6c8) = lVar11;
          *(int *)(lVar11 + 8) = *(int *)(lVar11 + 8) + 1;
          if (lVar12 != 0) {
            piVar1 = (int *)(lVar12 + 8);
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_1d8);
            }
          }
        }
        goto LAB_14071256e;
      }
    }
    lVar11 = param_1 + 0x6a8;
    if (*(int *)(param_1 + 0x6b0) == 0) {
      if (*(longlong *)(param_1 + 0x6d0) == 0) goto LAB_14071256e;
      plVar16 = (longlong *)(param_1 + 0x6d0);
      local_1a8 = (undefined **)FUN_14001cc68(0x50,0x10);
      *(undefined4 *)(local_1a8 + 1) = 0;
      *local_1a8 = (undefined *)&PTR_FUN_14a3c02b0;
      puVar8 = *(undefined **)(param_1 + 0x660);
      local_1a8[2] = *ppuVar3;
      local_1a8[3] = puVar8;
      local_1a8[8] = (undefined *)0x0;
      local_1a8[9] = (undefined *)0x0;
      local_1a8[6] = (undefined *)0x0;
      local_1a8[7] = (undefined *)0x0;
      local_1a8[4] = (undefined *)0x0;
      local_1a8[5] = (undefined *)0x0;
      uStack_100 = &local_1a8;
      local_108 = ppuVar3;
      FUN_140e9a6a2(&local_4c);
      puVar5 = *(undefined8 **)(DAT_14caa2298 + 0x10 + (longlong)(int)local_4c * 0x20);
      puVar6 = *(undefined8 **)(param_1 + 0x6c8);
      if (puVar6 != puVar5) {
        *(undefined8 **)(param_1 + 0x6c8) = puVar5;
        if (puVar5 != (undefined8 *)0x0) {
          *(int *)(puVar5 + 1) = *(int *)(puVar5 + 1) + 1;
        }
        if (puVar6 != (undefined8 *)0x0) {
          piVar1 = (int *)(puVar6 + 1);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            (**(code **)*puVar6)(puVar6,1);
          }
        }
      }
      plVar13 = (longlong *)(*(longlong *)(param_1 + 0x6c8) + 0x30);
      local_1b0 = lVar11;
      if (plVar13 != plVar16) {
        puVar5 = (undefined8 *)*plVar13;
        *plVar13 = *plVar16;
        *plVar16 = 0;
        if (puVar5 != (undefined8 *)0x0) {
          LOCK();
          piVar1 = (int *)(puVar5 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if ((*piVar1 == 0) && (*(int *)((longlong)puVar5 + 0xc) == 0)) {
            (**(code **)*puVar5)(puVar5,1);
          }
        }
      }
      if (*(longlong *)(param_1 + 0x6d8) != 0) {
        plVar16 = (longlong *)(*(longlong *)(param_1 + 0x6c8) + 0x38);
        if (plVar16 != (longlong *)(param_1 + 0x6d8)) {
          puVar5 = (undefined8 *)*plVar16;
          *plVar16 = *(longlong *)(param_1 + 0x6d8);
          *(longlong *)(param_1 + 0x6d8) = 0;
          if (puVar5 != (undefined8 *)0x0) {
            LOCK();
            piVar1 = (int *)(puVar5 + 1);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if ((*piVar1 == 0) && (*(int *)((longlong)puVar5 + 0xc) == 0)) {
              (**(code **)*puVar5)(puVar5,1);
            }
          }
        }
      }
    }
    else {
      local_1a8 = (undefined **)FUN_14001cc68(0x50,0x10);
      *(undefined4 *)(local_1a8 + 1) = 0;
      *local_1a8 = (undefined *)&PTR_FUN_14a3c02b0;
      puVar8 = *(undefined **)(param_1 + 0x660);
      local_1a8[2] = *ppuVar3;
      local_1a8[3] = puVar8;
      local_1a8[8] = (undefined *)0x0;
      local_1a8[9] = (undefined *)0x0;
      local_1a8[6] = (undefined *)0x0;
      local_1a8[7] = (undefined *)0x0;
      local_1a8[4] = (undefined *)0x0;
      local_1a8[5] = (undefined *)0x0;
      local_108 = ppuVar3;
      uStack_100 = &local_1a8;
      FUN_140e9a6a2(&local_4c);
      puVar5 = *(undefined8 **)(DAT_14caa2298 + 0x10 + (longlong)(int)local_4c * 0x20);
      puVar6 = *(undefined8 **)(param_1 + 0x6c8);
      if (puVar6 != puVar5) {
        *(undefined8 **)(param_1 + 0x6c8) = puVar5;
        if (puVar5 != (undefined8 *)0x0) {
          *(int *)(puVar5 + 1) = *(int *)(puVar5 + 1) + 1;
        }
        if (puVar6 != (undefined8 *)0x0) {
          piVar1 = (int *)(puVar6 + 1);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            (**(code **)*puVar6)();
          }
        }
      }
      memset(&local_108,0,0x90);
      FUN_144869430(&local_108);
      local_78 = 0;
      local_108 = &PTR_FUN_149e1e050;
      local_68 = 0x7fffffffffffffff;
      local_e0 = local_e0 | 1;
      local_70 = lVar11;
      FUN_1449c2eca(&local_108,0);
      FUN_1407134c4(&local_1a8,&local_108);
      local_120 = local_80;
      local_1a8 = &PTR_FUN_149f52ef0;
      local_118 = &local_108;
      local_80 = &local_1a8;
      lVar12 = FUN_14001cc68(0x158,0x10);
      FUN_140dffb3a(lVar12);
      puVar2 = (uint *)*puStack_1a0 + 1;
      local_110 = lVar12;
      if ((uint *)puStack_1a0[1] < puVar2) {
        local_4c = 0;
        (*(code *)local_1a8[0x2e])(&local_1a8,&local_4c,4);
        uVar15 = local_4c;
        if (1 < local_4c) {
          FUN_14572541c(&local_1a8);
          uVar15 = local_4c;
        }
      }
      else {
        uVar15 = *(uint *)*puStack_1a0;
        *puStack_1a0 = (ulonglong)puVar2;
      }
      FUN_140d03480(&local_1a8,*(longlong *)(param_1 + 0x6c8) + 0x30);
      if (uVar15 != 0) {
        FUN_140d03480(&local_1a8,*(longlong *)(param_1 + 0x6c8) + 0x38);
      }
      lVar12 = local_110;
      local_1a8 = &PTR_FUN_149f52ef0;
      if (local_110 != 0) {
        FUN_14041e184(local_110);
        FUN_1400020a8(lVar12);
      }
      FUN_14041e0ea(&local_1a8);
      local_108 = &PTR__purecall_149e35f70;
      if (local_b0 != (longlong *)0x0) {
        if (*local_b0 != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(local_b0);
      }
      local_1b0 = lVar11;
      if (local_90 != 0) {
        if (*(longlong *)(local_90 + 0x40) != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(local_90);
      }
    }
    iVar10 = *(int *)(param_1 + 0x6c0);
    if ((longlong)iVar10 != 0) {
      lVar11 = *(longlong *)(param_1 + 0x6b8);
      lVar12 = 0;
      do {
        if (*(longlong *)(lVar11 + lVar12) != 0) {
          lVar7 = *(longlong *)(param_1 + 0x6c8);
          puVar14 = (undefined4 *)FUN_14488068a();
          iVar4 = *(int *)(lVar7 + 0x28);
          *(uint *)(lVar7 + 0x28) = iVar4 + 1U;
          if (*(uint *)(lVar7 + 0x2c) < iVar4 + 1U) {
            FUN_1417255d0((longlong *)(lVar7 + 0x20),iVar4);
          }
          *(undefined4 *)(*(longlong *)(lVar7 + 0x20) + (longlong)iVar4 * 4) = *puVar14;
        }
        lVar12 = lVar12 + 8;
      } while ((longlong)iVar10 * 8 != lVar12);
    }
    *(undefined4 *)(param_1 + 0x6b0) = 0;
    if (*(int *)(param_1 + 0x6b4) != 0) {
      FUN_144893a1c(local_1b0,0);
    }
    *(undefined1 *)(param_1 + 0x644) = 1;
  }
LAB_14071256e:
  if ((local_48 ^ (ulonglong)auStack_1d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1407125d4 FUN_1407125d4 body=3081 status=ok
// SIG undefined FUN_1407125d4(void)

void FUN_1407125d4(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  byte bVar8;
  uint uVar9;
  int iVar10;
  longlong *plVar11;
  double dVar12;
  double dVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  ushort uVar16;
  undefined4 uVar17;
  undefined8 *puVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  undefined1 auStack_98 [44];
  uint local_6c;
  undefined8 *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_68 = (undefined8 *)0x0;
  if (*(char *)(param_1 + 0x70) == '\x01') {
    local_6c = local_6c & 0xffffff00;
    puVar18 = (undefined8 *)FUN_14001cc68(0xa0,0x10);
    *puVar18 = &PTR_FUN_149f48de0;
    puVar18[8] = 0;
    puVar18[9] = 0;
    puVar18[10] = 0;
    *(undefined4 *)(puVar18 + 0xb) = 0xffffffff;
    *(undefined2 *)((longlong)puVar18 + 0x5c) = 0;
    puVar18[0xc] = 0xffffffffffffffff;
    puVar18[0x10] = 0;
    puVar18[0x11] = 0x100000000;
    *(undefined4 *)((longlong)puVar18 + 0x94) = 0;
    *(undefined1 *)(puVar18 + 0x12) = 0;
    puVar18[2] = 0;
    puVar18[0xe] = 0;
    FUN_14061877a(puVar18,&local_6c);
    lVar21 = puVar18[2];
    *(undefined1 *)(puVar18 + 0xd) = 1;
    *(uint *)((longlong)puVar18 + 0x94) = *(uint *)((longlong)puVar18 + 0x94) | 0x10;
    puVar3 = puVar18;
    if ((lVar21 != 0) && (lVar19 = *(longlong *)(lVar21 + 8), lVar19 != 0)) {
      local_68 = puVar18;
      if (DAT_14c992a90 == '\x01') {
        AcquireSRWLockExclusive((PSRWLOCK)(lVar19 + 0x128));
        if (*(int *)(lVar21 + 0x18) == -1) {
          lVar20 = *(longlong *)(lVar19 + 0x98);
          uVar9 = *(uint *)(lVar21 + 0x1c);
          piVar2 = (int *)(lVar20 + 0x160 + (ulonglong)uVar9 * 4);
          *piVar2 = *piVar2 + 1;
          *(int *)(lVar20 + 0x194) = *(int *)(lVar20 + 0x194) + 1;
          lVar20 = lVar20 + (ulonglong)uVar9 * 0x10;
          iVar10 = *(int *)(lVar20 + 0x1a0);
          *(int *)(lVar21 + 0x18) = iVar10;
          *(uint *)(lVar20 + 0x1a0) = iVar10 + 1U;
          if (*(uint *)(lVar20 + 0x1a4) < iVar10 + 1U) {
            FUN_140431d5c((longlong *)(lVar20 + 0x198),iVar10);
          }
          lVar20 = *(longlong *)(lVar20 + 0x198);
          lVar22 = (longlong)iVar10 * 0x20;
          *(longlong *)(lVar20 + lVar22) = lVar21;
          *(undefined4 *)(lVar20 + 8 + lVar22) = 0;
          puVar3 = (undefined8 *)(lVar20 + 0x10 + lVar22);
          *puVar3 = 0;
          puVar3[1] = 0;
        }
        ReleaseSRWLockExclusive((PSRWLOCK)(lVar19 + 0x128));
        puVar3 = local_68;
      }
      else if (*(int *)(lVar21 + 0x18) == -1) {
        lVar19 = *(longlong *)(lVar19 + 0x98);
        uVar9 = *(uint *)(lVar21 + 0x1c);
        piVar2 = (int *)(lVar19 + 0x160 + (ulonglong)uVar9 * 4);
        *piVar2 = *piVar2 + 1;
        *(int *)(lVar19 + 0x194) = *(int *)(lVar19 + 0x194) + 1;
        lVar19 = lVar19 + (ulonglong)uVar9 * 0x10;
        iVar10 = *(int *)(lVar19 + 0x1a0);
        *(int *)(lVar21 + 0x18) = iVar10;
        *(uint *)(lVar19 + 0x1a0) = iVar10 + 1U;
        if (*(uint *)(lVar19 + 0x1a4) < iVar10 + 1U) {
          FUN_140431d5c((longlong *)(lVar19 + 0x198),iVar10);
        }
        lVar19 = *(longlong *)(lVar19 + 0x198);
        lVar20 = (longlong)iVar10 * 0x20;
        *(longlong *)(lVar19 + lVar20) = lVar21;
        *(undefined4 *)(lVar19 + 8 + lVar20) = 0;
        puVar3 = (undefined8 *)(lVar19 + 0x10 + lVar20);
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3 = local_68;
      }
    }
  }
  else {
    local_6c = 0x10000;
    puVar18 = (undefined8 *)FUN_14001cc68(0x1d0,0x10);
    FUN_14061844e(puVar18,&local_6c);
    lVar21 = puVar18[2];
    *(ushort *)((longlong)puVar18 + 0x1b4) =
         *(ushort *)((longlong)puVar18 + 0x1b4) & 0xfffe | (ushort)*(byte *)(param_1 + 0x72);
    *(byte *)((longlong)puVar18 + 0x94) = *(byte *)((longlong)puVar18 + 0x94) | 8;
    if ((lVar21 != 0) && (lVar19 = *(longlong *)(lVar21 + 8), lVar19 != 0)) {
      if (DAT_14c992a90 == '\x01') {
        AcquireSRWLockExclusive((PSRWLOCK)(lVar19 + 0x128));
        if (*(int *)(lVar21 + 0x18) == -1) {
          lVar20 = *(longlong *)(lVar19 + 0x98);
          uVar9 = *(uint *)(lVar21 + 0x1c);
          piVar2 = (int *)(lVar20 + 0x160 + (ulonglong)uVar9 * 4);
          *piVar2 = *piVar2 + 1;
          *(int *)(lVar20 + 0x194) = *(int *)(lVar20 + 0x194) + 1;
          lVar20 = lVar20 + (ulonglong)uVar9 * 0x10;
          iVar10 = *(int *)(lVar20 + 0x1a0);
          *(int *)(lVar21 + 0x18) = iVar10;
          *(uint *)(lVar20 + 0x1a0) = iVar10 + 1U;
          if (*(uint *)(lVar20 + 0x1a4) < iVar10 + 1U) {
            FUN_140431d5c((longlong *)(lVar20 + 0x198),iVar10);
          }
          lVar20 = *(longlong *)(lVar20 + 0x198);
          lVar22 = (longlong)iVar10 * 0x20;
          *(longlong *)(lVar20 + lVar22) = lVar21;
          *(undefined4 *)(lVar20 + 8 + lVar22) = 0;
          puVar3 = (undefined8 *)(lVar20 + 0x10 + lVar22);
          *puVar3 = 0;
          puVar3[1] = 0;
        }
        ReleaseSRWLockExclusive((PSRWLOCK)(lVar19 + 0x128));
      }
      else if (*(int *)(lVar21 + 0x18) == -1) {
        lVar19 = *(longlong *)(lVar19 + 0x98);
        uVar9 = *(uint *)(lVar21 + 0x1c);
        piVar2 = (int *)(lVar19 + 0x160 + (ulonglong)uVar9 * 4);
        *piVar2 = *piVar2 + 1;
        *(int *)(lVar19 + 0x194) = *(int *)(lVar19 + 0x194) + 1;
        lVar19 = lVar19 + (ulonglong)uVar9 * 0x10;
        iVar10 = *(int *)(lVar19 + 0x1a0);
        *(int *)(lVar21 + 0x18) = iVar10;
        *(uint *)(lVar19 + 0x1a0) = iVar10 + 1U;
        if (*(uint *)(lVar19 + 0x1a4) < iVar10 + 1U) {
          FUN_140431d5c((longlong *)(lVar19 + 0x198),iVar10);
        }
        lVar19 = *(longlong *)(lVar19 + 0x198);
        lVar20 = (longlong)iVar10 * 0x20;
        *(longlong *)(lVar19 + lVar20) = lVar21;
        *(undefined4 *)(lVar19 + 8 + lVar20) = 0;
        puVar3 = (undefined8 *)(lVar19 + 0x10 + lVar20);
        *puVar3 = 0;
        puVar3[1] = 0;
      }
    }
    lVar21 = puVar18[2];
    *(ushort *)((longlong)puVar18 + 0x1b4) =
         *(ushort *)((longlong)puVar18 + 0x1b4) & 0xfeff | (ushort)*(byte *)(param_1 + 0x73) << 8;
    *(byte *)((longlong)puVar18 + 0x94) = *(byte *)((longlong)puVar18 + 0x94) | 8;
    if ((lVar21 != 0) && (lVar19 = *(longlong *)(lVar21 + 8), lVar19 != 0)) {
      if (DAT_14c992a90 == '\x01') {
        AcquireSRWLockExclusive((PSRWLOCK)(lVar19 + 0x128));
        if (*(int *)(lVar21 + 0x18) == -1) {
          lVar20 = *(longlong *)(lVar19 + 0x98);
          uVar9 = *(uint *)(lVar21 + 0x1c);
          piVar2 = (int *)(lVar20 + 0x160 + (ulonglong)uVar9 * 4);
          *piVar2 = *piVar2 + 1;
          *(int *)(lVar20 + 0x194) = *(int *)(lVar20 + 0x194) + 1;
          lVar20 = lVar20 + (ulonglong)uVar9 * 0x10;
          iVar10 = *(int *)(lVar20 + 0x1a0);
          *(int *)(lVar21 + 0x18) = iVar10;
          *(uint *)(lVar20 + 0x1a0) = iVar10 + 1U;
          if (*(uint *)(lVar20 + 0x1a4) < iVar10 + 1U) {
            FUN_140431d5c((longlong *)(lVar20 + 0x198),iVar10);
          }
          lVar20 = *(longlong *)(lVar20 + 0x198);
          lVar22 = (longlong)iVar10 * 0x20;
          *(longlong *)(lVar20 + lVar22) = lVar21;
          *(undefined4 *)(lVar20 + 8 + lVar22) = 0;
          puVar3 = (undefined8 *)(lVar20 + 0x10 + lVar22);
          *puVar3 = 0;
          puVar3[1] = 0;
        }
        ReleaseSRWLockExclusive((PSRWLOCK)(lVar19 + 0x128));
      }
      else if (*(int *)(lVar21 + 0x18) == -1) {
        lVar19 = *(longlong *)(lVar19 + 0x98);
        uVar9 = *(uint *)(lVar21 + 0x1c);
        piVar2 = (int *)(lVar19 + 0x160 + (ulonglong)uVar9 * 4);
        *piVar2 = *piVar2 + 1;
        *(int *)(lVar19 + 0x194) = *(int *)(lVar19 + 0x194) + 1;
        lVar19 = lVar19 + (ulonglong)uVar9 * 0x10;
        iVar10 = *(int *)(lVar19 + 0x1a0);
        *(int *)(lVar21 + 0x18) = iVar10;
        *(uint *)(lVar19 + 0x1a0) = iVar10 + 1U;
        if (*(uint *)(lVar19 + 0x1a4) < iVar10 + 1U) {
          FUN_140431d5c((longlong *)(lVar19 + 0x198),iVar10);
        }
        lVar19 = *(longlong *)(lVar19 + 0x198);
        lVar20 = (longlong)iVar10 * 0x20;
        *(longlong *)(lVar19 + lVar20) = lVar21;
        *(undefined4 *)(lVar19 + 8 + lVar20) = 0;
        puVar3 = (undefined8 *)(lVar19 + 0x10 + lVar20);
        *puVar3 = 0;
        puVar3[1] = 0;
      }
    }
    if (*(char *)(param_1 + 0x74) == '\x01') {
      if (*(char *)(param_1 + 0x75) == '\x01') {
        lVar21 = puVar18[2];
        *(undefined1 *)((longlong)puVar18 + 0x1ac) = 4;
        *(byte *)((longlong)puVar18 + 0x94) = *(byte *)((longlong)puVar18 + 0x94) | 8;
        if ((lVar21 != 0) && (lVar19 = *(longlong *)(lVar21 + 8), lVar19 != 0)) {
          if (DAT_14c992a90 == '\x01') {
            AcquireSRWLockExclusive((PSRWLOCK)(lVar19 + 0x128));
            if (*(int *)(lVar21 + 0x18) == -1) {
              lVar20 = *(longlong *)(lVar19 + 0x98);
              uVar9 = *(uint *)(lVar21 + 0x1c);
              piVar2 = (int *)(lVar20 + 0x160 + (ulonglong)uVar9 * 4);
              *piVar2 = *piVar2 + 1;
              *(int *)(lVar20 + 0x194) = *(int *)(lVar20 + 0x194) + 1;
              lVar20 = lVar20 + (ulonglong)uVar9 * 0x10;
              iVar10 = *(int *)(lVar20 + 0x1a0);
              *(int *)(lVar21 + 0x18) = iVar10;
              *(uint *)(lVar20 + 0x1a0) = iVar10 + 1U;
              if (*(uint *)(lVar20 + 0x1a4) < iVar10 + 1U) {
                FUN_140431d5c((longlong *)(lVar20 + 0x198),iVar10);
              }
              lVar20 = *(longlong *)(lVar20 + 0x198);
              lVar22 = (longlong)iVar10 * 0x20;
              *(longlong *)(lVar20 + lVar22) = lVar21;
              *(undefined4 *)(lVar20 + 8 + lVar22) = 0;
              puVar3 = (undefined8 *)(lVar20 + 0x10 + lVar22);
              *puVar3 = 0;
              puVar3[1] = 0;
            }
            ReleaseSRWLockExclusive((PSRWLOCK)(lVar19 + 0x128));
          }
          else if (*(int *)(lVar21 + 0x18) == -1) {
            lVar19 = *(longlong *)(lVar19 + 0x98);
            uVar9 = *(uint *)(lVar21 + 0x1c);
            piVar2 = (int *)(lVar19 + 0x160 + (ulonglong)uVar9 * 4);
            *piVar2 = *piVar2 + 1;
            *(int *)(lVar19 + 0x194) = *(int *)(lVar19 + 0x194) + 1;
            lVar19 = lVar19 + (ulonglong)uVar9 * 0x10;
            iVar10 = *(int *)(lVar19 + 0x1a0);
            *(int *)(lVar21 + 0x18) = iVar10;
            *(uint *)(lVar19 + 0x1a0) = iVar10 + 1U;
            if (*(uint *)(lVar19 + 0x1a4) < iVar10 + 1U) {
              FUN_140431d5c((longlong *)(lVar19 + 0x198),iVar10);
            }
            lVar19 = *(longlong *)(lVar19 + 0x198);
            lVar20 = (longlong)iVar10 * 0x20;
            *(longlong *)(lVar19 + lVar20) = lVar21;
            *(undefined4 *)(lVar19 + 8 + lVar20) = 0;
            puVar3 = (undefined8 *)(lVar19 + 0x10 + lVar20);
            *puVar3 = 0;
            puVar3[1] = 0;
          }
        }
      }
      else {
        FUN_144a05e16(puVar18,1,0,1);
      }
      lVar21 = puVar18[2];
      *(undefined1 *)(puVar18 + 0xd) = 0;
    }
    else {
      lVar21 = puVar18[2];
      *(undefined1 *)((longlong)puVar18 + 0x1ac) = 2;
      *(byte *)((longlong)puVar18 + 0x94) = *(byte *)((longlong)puVar18 + 0x94) | 8;
      if ((lVar21 != 0) && (lVar19 = *(longlong *)(lVar21 + 8), lVar19 != 0)) {
        if (DAT_14c992a90 == '\x01') {
          AcquireSRWLockExclusive((PSRWLOCK)(lVar19 + 0x128));
          if (*(int *)(lVar21 + 0x18) == -1) {
            lVar20 = *(longlong *)(lVar19 + 0x98);
            uVar9 = *(uint *)(lVar21 + 0x1c);
            piVar2 = (int *)(lVar20 + 0x160 + (ulonglong)uVar9 * 4);
            *piVar2 = *piVar2 + 1;
            *(int *)(lVar20 + 0x194) = *(int *)(lVar20 + 0x194) + 1;
            lVar20 = lVar20 + (ulonglong)uVar9 * 0x10;
            iVar10 = *(int *)(lVar20 + 0x1a0);
            *(int *)(lVar21 + 0x18) = iVar10;
            *(uint *)(lVar20 + 0x1a0) = iVar10 + 1U;
            if (*(uint *)(lVar20 + 0x1a4) < iVar10 + 1U) {
              FUN_140431d5c((longlong *)(lVar20 + 0x198),iVar10);
            }
            lVar20 = *(longlong *)(lVar20 + 0x198);
            lVar22 = (longlong)iVar10 * 0x20;
            *(longlong *)(lVar20 + lVar22) = lVar21;
            *(undefined4 *)(lVar20 + 8 + lVar22) = 0;
            puVar3 = (undefined8 *)(lVar20 + 0x10 + lVar22);
            *puVar3 = 0;
            puVar3[1] = 0;
          }
          ReleaseSRWLockExclusive((PSRWLOCK)(lVar19 + 0x128));
        }
        else if (*(int *)(lVar21 + 0x18) == -1) {
          lVar19 = *(longlong *)(lVar19 + 0x98);
          uVar9 = *(uint *)(lVar21 + 0x1c);
          piVar2 = (int *)(lVar19 + 0x160 + (ulonglong)uVar9 * 4);
          *piVar2 = *piVar2 + 1;
          *(int *)(lVar19 + 0x194) = *(int *)(lVar19 + 0x194) + 1;
          lVar19 = lVar19 + (ulonglong)uVar9 * 0x10;
          iVar10 = *(int *)(lVar19 + 0x1a0);
          *(int *)(lVar21 + 0x18) = iVar10;
          *(uint *)(lVar19 + 0x1a0) = iVar10 + 1U;
          if (*(uint *)(lVar19 + 0x1a4) < iVar10 + 1U) {
            FUN_140431d5c((longlong *)(lVar19 + 0x198),iVar10);
          }
          lVar19 = *(longlong *)(lVar19 + 0x198);
          lVar20 = (longlong)iVar10 * 0x20;
          *(longlong *)(lVar19 + lVar20) = lVar21;
          *(undefined4 *)(lVar19 + 8 + lVar20) = 0;
          puVar3 = (undefined8 *)(lVar19 + 0x10 + lVar20);
          *puVar3 = 0;
          puVar3[1] = 0;
        }
      }
      lVar21 = puVar18[2];
      *(undefined1 *)(puVar18 + 0xd) = 1;
    }
    *(byte *)((longlong)puVar18 + 0x94) = *(byte *)((longlong)puVar18 + 0x94) | 0x10;
    puVar3 = puVar18;
    if ((lVar21 != 0) && (lVar19 = *(longlong *)(lVar21 + 8), lVar19 != 0)) {
      if (DAT_14c992a90 == '\x01') {
        AcquireSRWLockExclusive((PSRWLOCK)(lVar19 + 0x128));
        if (*(int *)(lVar21 + 0x18) == -1) {
          lVar20 = *(longlong *)(lVar19 + 0x98);
          uVar9 = *(uint *)(lVar21 + 0x1c);
          piVar2 = (int *)(lVar20 + 0x160 + (ulonglong)uVar9 * 4);
          *piVar2 = *piVar2 + 1;
          *(int *)(lVar20 + 0x194) = *(int *)(lVar20 + 0x194) + 1;
          lVar20 = lVar20 + (ulonglong)uVar9 * 0x10;
          iVar10 = *(int *)(lVar20 + 0x1a0);
          *(int *)(lVar21 + 0x18) = iVar10;
          *(uint *)(lVar20 + 0x1a0) = iVar10 + 1U;
          if (*(uint *)(lVar20 + 0x1a4) < iVar10 + 1U) {
            FUN_140431d5c((longlong *)(lVar20 + 0x198),iVar10);
          }
          lVar20 = *(longlong *)(lVar20 + 0x198);
          lVar22 = (longlong)iVar10 * 0x20;
          *(longlong *)(lVar20 + lVar22) = lVar21;
          *(undefined4 *)(lVar20 + 8 + lVar22) = 0;
          puVar4 = (undefined8 *)(lVar20 + 0x10 + lVar22);
          *puVar4 = 0;
          puVar4[1] = 0;
        }
        ReleaseSRWLockExclusive((PSRWLOCK)(lVar19 + 0x128));
      }
      else if (*(int *)(lVar21 + 0x18) == -1) {
        lVar19 = *(longlong *)(lVar19 + 0x98);
        uVar9 = *(uint *)(lVar21 + 0x1c);
        piVar2 = (int *)(lVar19 + 0x160 + (ulonglong)uVar9 * 4);
        *piVar2 = *piVar2 + 1;
        *(int *)(lVar19 + 0x194) = *(int *)(lVar19 + 0x194) + 1;
        lVar19 = lVar19 + (ulonglong)uVar9 * 0x10;
        iVar10 = *(int *)(lVar19 + 0x1a0);
        *(int *)(lVar21 + 0x18) = iVar10;
        *(uint *)(lVar19 + 0x1a0) = iVar10 + 1U;
        if (*(uint *)(lVar19 + 0x1a4) < iVar10 + 1U) {
          FUN_140431d5c((longlong *)(lVar19 + 0x198),iVar10);
        }
        lVar19 = *(longlong *)(lVar19 + 0x198);
        lVar20 = (longlong)iVar10 * 0x20;
        *(longlong *)(lVar19 + lVar20) = lVar21;
        *(undefined4 *)(lVar19 + 8 + lVar20) = 0;
        puVar4 = (undefined8 *)(lVar19 + 0x10 + lVar20);
        *puVar4 = 0;
        puVar4[1] = 0;
      }
    }
  }
  local_68 = puVar3;
  if (DAT_14c75f288 == 1) {
    if (DAT_14c994578 != 1) {
      uVar16 = (ushort)(*(byte *)(param_1 + 0x70) ^ 1) << 3;
      goto LAB_140712962;
    }
    bVar8 = *(byte *)(param_1 + 0x71);
    if (*(byte *)(param_1 + 0x70) == 0) {
      uVar16 = (ushort)bVar8 << 4 | 8;
      goto LAB_140712962;
    }
  }
  else {
    if (DAT_14c994578 != 1) {
      uVar16 = 0;
      goto LAB_140712962;
    }
    bVar8 = *(byte *)(param_1 + 0x71);
  }
  uVar16 = (ushort)bVar8 << 4;
LAB_140712962:
  lVar21 = puVar18[2];
  *(ushort *)((longlong)puVar18 + 0x5c) = uVar16;
  *(byte *)((longlong)puVar18 + 0x94) = *(byte *)((longlong)puVar18 + 0x94) | 0x10;
  if ((lVar21 != 0) && (lVar19 = *(longlong *)(lVar21 + 8), lVar19 != 0)) {
    if (DAT_14c992a90 == '\x01') {
      AcquireSRWLockExclusive((PSRWLOCK)(lVar19 + 0x128));
      if (*(int *)(lVar21 + 0x18) == -1) {
        lVar20 = *(longlong *)(lVar19 + 0x98);
        uVar9 = *(uint *)(lVar21 + 0x1c);
        piVar2 = (int *)(lVar20 + 0x160 + (ulonglong)uVar9 * 4);
        *piVar2 = *piVar2 + 1;
        *(int *)(lVar20 + 0x194) = *(int *)(lVar20 + 0x194) + 1;
        lVar20 = lVar20 + (ulonglong)uVar9 * 0x10;
        iVar10 = *(int *)(lVar20 + 0x1a0);
        *(int *)(lVar21 + 0x18) = iVar10;
        *(uint *)(lVar20 + 0x1a0) = iVar10 + 1U;
        if (*(uint *)(lVar20 + 0x1a4) < iVar10 + 1U) {
          FUN_140431d5c((longlong *)(lVar20 + 0x198),iVar10);
        }
        lVar20 = *(longlong *)(lVar20 + 0x198);
        lVar22 = (longlong)iVar10 * 0x20;
        *(longlong *)(lVar20 + lVar22) = lVar21;
        *(undefined4 *)(lVar20 + 8 + lVar22) = 0;
        puVar18 = (undefined8 *)(lVar20 + 0x10 + lVar22);
        *puVar18 = 0;
        puVar18[1] = 0;
      }
      ReleaseSRWLockExclusive((PSRWLOCK)(lVar19 + 0x128));
    }
    else if (*(int *)(lVar21 + 0x18) == -1) {
      lVar19 = *(longlong *)(lVar19 + 0x98);
      uVar9 = *(uint *)(lVar21 + 0x1c);
      piVar2 = (int *)(lVar19 + 0x160 + (ulonglong)uVar9 * 4);
      *piVar2 = *piVar2 + 1;
      *(int *)(lVar19 + 0x194) = *(int *)(lVar19 + 0x194) + 1;
      lVar19 = lVar19 + (ulonglong)uVar9 * 0x10;
      iVar10 = *(int *)(lVar19 + 0x1a0);
      *(int *)(lVar21 + 0x18) = iVar10;
      *(uint *)(lVar19 + 0x1a0) = iVar10 + 1U;
      if (*(uint *)(lVar19 + 0x1a4) < iVar10 + 1U) {
        FUN_140431d5c((longlong *)(lVar19 + 0x198),iVar10);
      }
      lVar19 = *(longlong *)(lVar19 + 0x198);
      lVar20 = (longlong)iVar10 * 0x20;
      *(longlong *)(lVar19 + lVar20) = lVar21;
      *(undefined4 *)(lVar19 + 8 + lVar20) = 0;
      puVar18 = (undefined8 *)(lVar19 + 0x10 + lVar20);
      *puVar18 = 0;
      puVar18[1] = 0;
    }
  }
  lVar19 = FUN_14001cc68(0x68,0x10);
  FUN_14021696e(lVar19,&local_68,0,0);
  *param_2 = lVar19;
  uVar14 = *(undefined8 *)(param_1 + 0x30);
  uVar15 = *(undefined8 *)(param_1 + 0x38);
  uVar5 = *(undefined8 *)(param_1 + 0x40);
  lVar21 = *(longlong *)(lVar19 + 0x40);
  *(undefined8 *)(lVar21 + 0x20) = uVar14;
  *(undefined8 *)(lVar21 + 0x28) = uVar15;
  *(undefined8 *)(lVar21 + 0x30) = uVar5;
  lVar21 = *(longlong *)(lVar19 + 0x20);
  plVar11 = *(longlong **)(lVar19 + 0x28);
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar11 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar2 = (int *)((longlong)plVar11 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
  }
  if (*(longlong *)(lVar19 + 8) == 0) {
    uVar17 = 0xffffffff;
  }
  else {
    uVar17 = *(undefined4 *)(*(longlong *)(lVar19 + 8) + 0x78);
  }
  *(undefined8 *)(lVar21 + 8) = uVar14;
  *(undefined8 *)(lVar21 + 0x10) = uVar15;
  *(undefined8 *)(lVar21 + 0x18) = uVar5;
  *(undefined4 *)(lVar21 + 0x20) = uVar17;
  dVar12 = *(double *)(param_1 + 0x10);
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  dVar6 = *(double *)(param_1 + 0x28);
  dVar13 = *(double *)(param_1 + 0x20);
  uVar14 = *(undefined8 *)(param_1 + 0x28);
  dVar7 = *(double *)(param_1 + 0x18);
  lVar21 = *(longlong *)(lVar19 + 0x40);
  *(float *)(lVar21 + 0x40) = (float)dVar12;
  *(float *)(lVar21 + 0x44) = (float)dVar7;
  *(float *)(lVar21 + 0x48) = (float)dVar13;
  *(float *)(lVar21 + 0x4c) = (float)dVar6;
  lVar21 = *(longlong *)(lVar19 + 0x20);
  plVar11 = *(longlong **)(lVar19 + 0x28);
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar11 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar2 = (int *)((longlong)plVar11 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
  }
  if (*(longlong *)(lVar19 + 8) == 0) {
    uVar17 = 0xffffffff;
  }
  else {
    uVar17 = *(undefined4 *)(*(longlong *)(lVar19 + 8) + 0x78);
  }
  *(double *)(lVar21 + 0x30) = dVar12;
  *(undefined8 *)(lVar21 + 0x38) = uVar5;
  *(double *)(lVar21 + 0x40) = dVar13;
  *(undefined8 *)(lVar21 + 0x48) = uVar14;
  *(undefined4 *)(lVar21 + 0x50) = uVar17;
  if (local_68 != (undefined8 *)0x0) {
    (**(code **)*local_68)(local_68,1);
  }
  if ((local_60 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1407131de FUN_1407131de body=32 status=ok
// SIG undefined FUN_1407131de(void)

void FUN_1407131de(longlong param_1,undefined8 param_2)

{
  FUN_1407131fe(param_1 + 0x28,param_2,0);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x30);
  return;
}



// FUNCTION 1407131fe FUN_1407131fe body=599 status=ok
// SIG undefined FUN_1407131fe(void)

void FUN_1407131fe(ulonglong *param_1,longlong *param_2,char param_3)

{
  int *piVar1;
  uint *puVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 auStack_48 [32];
  uint local_28;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 2;
  puVar3 = (ulonglong *)param_2[1];
  piVar1 = (int *)*puVar3 + 1;
  if ((int *)puVar3[1] < piVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_24,4);
    }
    else {
      thunk_FUN_14572512c(param_2,&local_24);
    }
  }
  else {
    local_24 = *(int *)*puVar3;
    *puVar3 = (ulonglong)piVar1;
  }
  if ((param_3 != '\0') ||
     ((((*(byte *)(param_2 + 5) & 4) != 0 &&
       ((param_2[0xd] == 0 || (*(longlong *)(param_2[0xd] + 0x10) == 0)))) ||
      ((*(byte *)((longlong)param_2 + 0x2a) & 2) != 0)))) {
    FUN_14573d718(param_2,param_1);
    goto LAB_140713335;
  }
  (**(code **)(*param_2 + 0x10))
            (param_2,(longlong)(int)param_1[1] * 2,(longlong)*(int *)((longlong)param_1 + 0xc) * 2);
  if ((*(byte *)(param_2 + 5) & 1) == 0) {
    if ((*(byte *)(param_2 + 5) & 4) == 0) goto LAB_140713335;
    local_28 = (uint)param_1[1];
    puVar3 = (ulonglong *)param_2[1];
    puVar2 = (uint *)*puVar3 + 1;
    if ((uint *)puVar3[1] < puVar2) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_28,4);
      }
      else {
        thunk_FUN_14572512c(param_2,&local_28);
      }
    }
    else {
      local_28 = *(uint *)*puVar3;
      *puVar3 = (ulonglong)puVar2;
    }
    uVar4 = *param_1;
    uVar6 = ((longlong)uVar4 >> 0x18) + (longlong)param_1;
    if ((uVar4 & 1) == 0) {
      uVar6 = uVar4;
    }
    lVar5 = *param_2;
LAB_14071332f:
    (**(code **)(lVar5 + 0x170))(param_2,uVar6,(longlong)(int)local_28 * 2);
  }
  else {
    if (local_24 == 2) {
      local_28 = 0;
      puVar3 = (ulonglong *)param_2[1];
      puVar2 = (uint *)*puVar3 + 1;
      if ((uint *)puVar3[1] < puVar2) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
          (**(code **)(*param_2 + 0x170))(param_2,&local_28,4);
        }
        else {
          thunk_FUN_14572512c(param_2,&local_28);
        }
      }
      else {
        local_28 = *(uint *)*puVar3;
        *puVar3 = (ulonglong)puVar2;
      }
      if (local_28 < 0x40000000) {
        FUN_140713456(param_1);
        uVar6 = param_1[1];
        *(uint *)(param_1 + 1) = (int)uVar6 + local_28;
        if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)uVar6) < local_28) {
          FUN_141794766(param_1);
        }
        uVar6 = *param_1;
        if ((uVar6 & 1) != 0) {
          uVar6 = (longlong)param_1 + ((longlong)uVar6 >> 0x18);
        }
        lVar5 = *param_2;
        goto LAB_14071332f;
      }
    }
    FUN_14572541c(param_2);
  }
LAB_140713335:
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140713456 FUN_140713456 body=42 status=ok
// SIG undefined FUN_140713456(void)

void FUN_140713456(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_1404d5fcc();
    return;
  }
  return;
}



// FUNCTION 140713482 FUN_140713482 body=65 status=ok
// SIG undefined FUN_140713482(void)

undefined8 * FUN_140713482(undefined8 *param_1,longlong param_2)

{
  FUN_1407134c4();
  *param_1 = &PTR_FUN_149e36b00;
  param_1[0x12] = param_2;
  param_1[0x11] = *(undefined8 *)(param_2 + 0x88);
  *(undefined8 **)(param_2 + 0x88) = param_1;
  return param_1;
}



// FUNCTION 1407134c4 FUN_1407134c4 body=233 status=ok
// SIG undefined FUN_1407134c4(void)

longlong * FUN_1407134c4(longlong *param_1,longlong param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  undefined8 *puVar3;
  
  *param_1 = (longlong)&PTR__purecall_149e35f70;
  puVar3 = (undefined8 *)0x0;
  param_1[8] = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined2 *)(param_1 + 10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  param_1[0xb] = 0;
  param_1[0xd] = 0;
  param_1[0x11] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[1] = (longlong)(param_1 + 2);
  FUN_1400e9532();
  param_1[0xf] = 0;
  (**(code **)(*param_1 + 0x90))
            (param_1,*(undefined8 *)(param_2 + 0x78),*(undefined8 *)(param_2 + 0x70));
  *(byte *)((longlong)param_1 + 0x2b) = *(byte *)((longlong)param_1 + 0x2b) & 0xdf;
  *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)(param_2 + 0x80);
  puVar2 = *(undefined8 **)(param_2 + 0x58);
  if (puVar2 != (undefined8 *)0x0) {
    puVar3 = (undefined8 *)FUN_14001cc68(0x10,0x10);
    *puVar3 = 0;
    iVar1 = *(int *)(puVar2 + 1);
    _Src = (void *)*puVar2;
    *(int *)(puVar3 + 1) = iVar1;
    if ((longlong)iVar1 == 0) {
      *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
    }
    else {
      FUN_1401254a2(puVar3,iVar1,0);
      memcpy((void *)*puVar3,_Src,(longlong)iVar1 * 0x28);
    }
  }
  param_1[0xb] = (longlong)puVar3;
  return param_1;
}


